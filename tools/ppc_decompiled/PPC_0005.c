// Warlords II - Decompiled PPC Code
// Chunk 5 (functions 2500-2999)
// Decompiled by Ghidra 12.0.3

// Function: FUN_100b3c84 at 100b3c84
// Size: 40 bytes

void FUN_100b3c84(void)

{
  FUN_100b280c(0);
  return;
}



// Function: FUN_100b3cb8 at 100b3cb8
// Size: 176 bytes

void FUN_100b3cb8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_28);
  FUN_100e17d8(param_3,auStack_40,auStack_28);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_28,auStack_30);
    FUN_100b0578(auStack_30);
    FUN_100021d8();
  }
  return;
}



// Function: FUN_100b3d70 at 100b3d70
// Size: 40 bytes

void FUN_100b3d70(void)

{
  FUN_100b2ca8(0);
  return;
}



// Function: FUN_100b3da4 at 100b3da4
// Size: 300 bytes

void FUN_100b3da4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [16];
  undefined2 local_38;
  undefined2 local_36;
  undefined1 auStack_30 [16];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_30);
  FUN_100e17d8(param_3,auStack_48,auStack_30);
  iVar1 = FUN_100e1a08(auStack_48);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_30,&local_20);
    local_38 = 1;
    local_36 = 1;
    uVar2 = FUN_100b057c(&local_20,1);
    FUN_100b0498(uVar2,&local_38);
    FUN_100031b0(1,1);
    FUN_100b0578(&local_20);
    FUN_100021d8();
    FUN_10000270((int)(short)(local_1e + 1),(int)local_1c);
    FUN_10001d88((int)local_1a,(int)local_1c);
    FUN_10001d88((int)local_1a,(int)(short)(local_20 + 1));
  }
  return;
}



// Function: FUN_100b3ed8 at 100b3ed8
// Size: 40 bytes

void FUN_100b3ed8(void)

{
  FUN_100b2900(0);
  return;
}



// Function: FUN_100b3f0c at 100b3f0c
// Size: 236 bytes

void FUN_100b3f0c(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_60 [4];
  short local_5c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [2];
  short local_26;
  short local_24;
  short local_22;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_38);
  FUN_100e17d8(param_3,auStack_48,auStack_38);
  iVar1 = FUN_100e1a08(auStack_48);
  if (iVar1 == 0) {
    FUN_10000000(auStack_60);
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_38,auStack_28);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,(int)local_26,
                 (int)(short)(local_24 - local_5c),(int)local_22);
  }
  return;
}



// Function: FUN_100b4000 at 100b4000
// Size: 40 bytes

void FUN_100b4000(void)

{
  FUN_100b2970(0);
  return;
}



// Function: FUN_100b4034 at 100b4034
// Size: 204 bytes

void FUN_100b4034(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  short local_20;
  short local_1e;
  short local_1c;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_30);
  FUN_100e17d8(param_3,auStack_40,auStack_30);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_30,&local_20);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,(int)local_1e,(int)local_20,
                 (int)local_1c);
  }
  return;
}



// Function: FUN_100b4108 at 100b4108
// Size: 40 bytes

void FUN_100b4108(void)

{
  FUN_100b29e0(0);
  return;
}



// Function: FUN_100b413c at 100b413c
// Size: 236 bytes

void FUN_100b413c(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_60 [6];
  short local_5a;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  short local_28 [2];
  short local_24;
  short local_22;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_38);
  FUN_100e17d8(param_3,auStack_48,auStack_38);
  iVar1 = FUN_100e1a08(auStack_48);
  if (iVar1 == 0) {
    FUN_10000000(auStack_60);
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_38,local_28);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,(int)(short)(local_22 - local_5a)
                 ,(int)local_28[0],(int)local_24);
  }
  return;
}



// Function: FUN_100b4230 at 100b4230
// Size: 40 bytes

void FUN_100b4230(void)

{
  FUN_100b2a50(0);
  return;
}



// Function: FUN_100b4264 at 100b4264
// Size: 204 bytes

void FUN_100b4264(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  short local_20;
  short local_1e;
  short local_1a;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_30);
  FUN_100e17d8(param_3,auStack_40,auStack_30);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_30,&local_20);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,(int)local_1e,(int)local_20,
                 (int)local_1a);
  }
  return;
}



// Function: FUN_100b4338 at 100b4338
// Size: 40 bytes

void FUN_100b4338(void)

{
  FUN_100b2ac0(0);
  return;
}



// Function: FUN_100b436c at 100b436c
// Size: 176 bytes

void FUN_100b436c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_28);
  FUN_100e17d8(param_3,auStack_40,auStack_28);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_28,auStack_30);
    FUN_100b0578(auStack_30);
    FUN_100034e0();
  }
  return;
}



// Function: FUN_100b4424 at 100b4424
// Size: 40 bytes

void FUN_100b4424(void)

{
  FUN_100b2bb4(0);
  return;
}



// Function: FUN_100b444c at 100b444c
// Size: 40 bytes

void FUN_100b444c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_100b2d10(param_1,param_2,param_3);
  return;
}



// Function: FUN_100b4480 at 100b4480
// Size: 184 bytes

void FUN_100b4480(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_28);
  FUN_100e17d8(param_3,auStack_40,auStack_28);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_28,auStack_30);
    uVar2 = FUN_100b0578(auStack_30);
    FUN_10000738(uVar2,0x10,0x10);
  }
  return;
}



// Function: FUN_100b4540 at 100b4540
// Size: 104 bytes

undefined4 * FUN_100b4540(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = 0x90c30004;
  }
  return param_1;
}



// Function: FUN_100b45a8 at 100b45a8
// Size: 40 bytes

void FUN_100b45a8(void)

{
  FUN_100b4540(0);
  return;
}



// Function: FUN_100b45d0 at 100b45d0
// Size: 44 bytes

void FUN_100b45d0(undefined4 param_1)

{
  FUN_100d88b4(param_1,0,8);
  return;
}



// Function: FUN_100b45fc at 100b45fc
// Size: 228 bytes

void FUN_100b45fc(int *param_1,int *param_2)

{
  int iVar1;
  char cVar3;
  int iVar2;
  int iVar4;
  undefined4 local_20 [2];
  
  FUN_100d7e04(param_1,param_2);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      local_20[0] = 0;
      cVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
      iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),local_20);
      if (iVar2 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),local_20[0],(int)cVar3);
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < iVar1);
  }
  return;
}



// Function: FUN_100b46e0 at 100b46e0
// Size: 264 bytes

void FUN_100b46e0(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_100d7e94(param_1,param_2);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),iVar1);
  if ((0 < iVar1) && (iVar3 = 1, 0 < iVar1)) {
    do {
      puVar2 = (undefined1 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar3);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*puVar2);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),*(undefined4 *)(puVar2 + 4),1);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 <= iVar1);
  }
  return;
}



// Function: FUN_100b4820 at 100b4820
// Size: 216 bytes

void FUN_100b4820(int *param_1,int param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char local_20 [4];
  int local_1c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if ((0 < iVar1) && (iVar3 = 1, 0 < iVar1)) {
    do {
      pcVar2 = (char *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar3);
      if ((*(int *)(pcVar2 + 4) == param_2) && (*pcVar2 == param_3)) {
        return;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 <= iVar1);
  }
  local_20[0] = param_3;
  local_1c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),local_20);
  return;
}



// Function: FUN_100b48f8 at 100b48f8
// Size: 60 bytes

undefined4 FUN_100b48f8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *(undefined4 *)(iVar1 + 4);
}



// Function: FUN_100b4934 at 100b4934
// Size: 68 bytes

int FUN_100b4934(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return (int)*pcVar1;
}



// Function: FUN_100b4978 at 100b4978
// Size: 676 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4978(void)

{
  _DAT_90c30016 = 0xe3dd;
  _DAT_90c30018 = CONCAT22(0xe3dd,DAT_90c30018_2);
  _DAT_90c30012 = 0xc000;
  _DAT_90c30014 = 0xc000;
  _DAT_90c3000e = 37000;
  _DAT_90c30010 = 37000;
  _DAT_90c30008 = 20000;
  _DAT_90c3000a = 20000;
  _DAT_90c3000c = 20000;
  FUN_100c1c8c(&DAT_2c840000,_DAT_90c30018,0xc,0x90c3001c,0x90c30020);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_48000064,0x10,&DAT_60690000,&DAT_2c840000);
  FUN_100c1c8c(_FUN_101168a0,_DAT_83e2fb58,0xc,0x38600028,&DAT_2c840000);
  FUN_100c1c8c(&DAT_90010008,_DAT_4bfded75,0xc,0x60000000,&DAT_2c840000);
  FUN_100c1c8c(&DAT_607f0000,_DAT_60690000,0xc,&DAT_28090000,&DAT_2c840000);
  FUN_100c1c8c(0x8186002c,_DAT_4082000c,0xc,&DAT_61230000,&DAT_2c840000);
  FUN_100c1c8c(&DAT_bfe1fffc,_DAT_4800003c,0xc,0x93e90024,&DAT_2c840000);
  FUN_100c1c8c(&DAT_41820040,_DAT_38800000,0xc,0xb0890000,&DAT_2c840000);
  FUN_100c1c8c(0x80a40008,_DAT_b0890002,0xc,&DAT_38a00000,&DAT_2c840000);
  FUN_100c1c8c(&DAT_90830024,_DAT_90a90004,0xc,0x90a90008,&DAT_2c840000);
  FUN_100c1c8c(0x7c651814,_DAT_90a9000c,0xc,0x90a90010,&DAT_2c840000);
  FUN_100c1c8c(&DAT_80410014,_DAT_90a90014,0xc,0x90a90018,&DAT_2c840000);
  FUN_100c1c8c(&DAT_80010048,_DAT_90a9001c,0xc,0x90a90020,&DAT_2c840000);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_61230000,0xc,&DAT_80010048,&DAT_2c840000);
  FUN_100c1c8c(&DAT_4e800020,_DAT_30210040,0xc,&DAT_7c0803a6,&DAT_2c840000);
  FUN_100c1c8c(&DAT_9421ffc0,_DAT_bbe1fffc,0xc,&DAT_4e800020,&DAT_2c840000);
  FUN_100c1c8c(&DAT_38c00000,*_FUN_101169b4,0x20,uRam101169b8,&DAT_90010008);
  return;
}



// Function: FUN_100b4c1c at 100b4c1c
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x268),param_1,param_2,param_3)
  ;
  return;
}



// Function: FUN_100b4c68 at 100b4c68
// Size: 524 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c68(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar6;
  uint uVar4;
  short sVar5;
  short sVar7;
  undefined4 *puVar8;
  int local_174;
  char local_150;
  undefined1 auStack_14c [256];
  short local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_34;
  
  uVar1 = FUN_10000a98(&DAT_40820008,0xfd0,1);
  **(undefined4 **)(local_174 + -0xed4) = uVar1;
  FUN_100db26c();
  local_34 = (undefined4 *)0x0;
  iVar2 = FUN_100023d0(0x61656474);
  FUN_100db328();
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = _DAT_41820010;
  _DAT_41820010 = auStack_14c;
  iVar3 = FUN_10000090(auStack_14c);
  if (iVar3 == 0) {
    iVar3 = 1;
    if (0 < iVar2) {
      do {
        local_34 = (undefined4 *)FUN_100023e8(0x61656474,iVar3);
        FUN_100db2a4();
        cVar6 = FUN_100ef9b8(local_34);
        uVar4 = FUN_10001c20(local_34);
        FUN_100db1ec();
        sVar7 = (short)(uVar4 / 0xc);
        puVar8 = (undefined4 *)*local_34;
        uVar1 = FUN_100eecf8(*(undefined4 *)(local_174 + -0xed0));
        uVar1 = FUN_10000a98(uVar1,0xfe0,1);
        FUN_100db26c(uVar1);
        sVar5 = 1;
        if (0 < sVar7) {
          do {
            FUN_10002418(*puVar8,puVar8[1],uVar1,puVar8[2],0);
            FUN_100db2f4();
            puVar8 = puVar8 + 3;
            sVar5 = sVar5 + 1;
          } while (sVar5 <= sVar7);
        }
        FUN_10001b60(local_34,(int)cVar6);
        FUN_10001c98(local_34);
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 <= iVar2);
    }
    _DAT_41820010 = local_44;
  }
  else {
    if (local_34 != (undefined4 *)0x0) {
      FUN_10001b60(local_34,(int)local_150);
      FUN_10001c98(local_34);
    }
    FUN_100db158((int)local_4c,local_48);
  }
  return;
}



// Function: FUN_100b4eac at 100b4eac
// Size: 144 bytes

undefined4 * FUN_100b4eac(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1c), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x8122fb58;
    param_1[3] = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    param_1[5] = 0xffffffff;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[2] = 0;
  }
  return param_1;
}



// Function: FUN_100b4f3c at 100b4f3c
// Size: 40 bytes

void FUN_100b4f3c(void)

{
  FUN_100b4eac(0);
  return;
}



// Function: FUN_100b4f64 at 100b4f64
// Size: 76 bytes

void FUN_100b4f64(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  FUN_100f5274(param_1);
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



// Function: FUN_100b4fb0 at 100b4fb0
// Size: 76 bytes

void FUN_100b4fb0(int param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_10002a78(param_1 + 4);
  }
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100b4ffc at 100b4ffc
// Size: 364 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100b4ffc(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_164;
  int local_140;
  int iStack_13c;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_140 = param_1[1];
  iStack_13c = param_1[2];
  FUN_100018f0(0x6e756c6c,0,0,auStack_138);
  FUN_100db2f4();
  FUN_10000ca8(&local_140,auStack_138,param_1[3],(int)*(short *)(param_1 + 4),param_1[5],
               **(undefined4 **)(local_164 + -0xed4),**(undefined4 **)(local_164 + -0xec4));
  FUN_100db2f4();
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  piVar3 = (int *)0x0;
  if ((uVar1 & 0xf) == 3) {
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = _DAT_41820010;
    _DAT_41820010 = auStack_130;
    iVar2 = FUN_10000090(auStack_130);
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_100b4eac(0);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xa8),auStack_138,1);
      _DAT_41820010 = local_28;
    }
    else {
      FUN_10002a78(auStack_138);
      FUN_100db158((int)local_30,local_2c);
    }
  }
  else {
    FUN_10002a78(auStack_138);
    piVar3 = (int *)0x0;
  }
  return piVar3;
}



// Function: FUN_100b5168 at 100b5168
// Size: 84 bytes

void FUN_100b5168(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  FUN_10000168(&local_8,0x61646472,0x2a2a2a2a,param_2);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b51c4 at 100b51c4
// Size: 112 bytes

undefined4 FUN_100b51c4(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  local_14 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 8);
  FUN_10000cd8(&local_14,0x72746964,0x6c6f6e67,auStack_c,&local_18,4,auStack_8);
  FUN_100db2f4();
  return local_18;
}



// Function: FUN_100b5244 at 100b5244
// Size: 112 bytes

undefined4 FUN_100b5244(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  local_14 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 8);
  FUN_10000cd8(&local_14,0x7472616e,0x6c6f6e67,auStack_c,&local_18,4,auStack_8);
  FUN_100db2f4();
  return local_18;
}



// Function: FUN_100b52b4 at 100b52b4
// Size: 76 bytes

void FUN_100b52b4(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  FUN_10000cf0(&local_8,0x61646472,param_2);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b530c at 100b530c
// Size: 92 bytes

void FUN_100b530c(int param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  uStack0000001c = param_2;
  FUN_10000d08(&local_8,0x72746964,0x6c6f6e67,&stack0x0000001c,4);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5378 at 100b5378
// Size: 92 bytes

void FUN_100b5378(int param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  uStack0000001c = param_2;
  FUN_10000d08(&local_8,0x7472616e,0x6c6f6e67,&stack0x0000001c,4);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b53d4 at 100b53d4
// Size: 112 bytes

int FUN_100b53d4(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  short local_10 [2];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  local_18 = *(undefined4 *)(param_1 + 4);
  uStack_14 = *(undefined4 *)(param_1 + 8);
  local_10[0] = 0;
  FUN_10000d20(&local_18,param_2,0x73686f72,auStack_c,local_10,2,auStack_8);
  FUN_100db2f4();
  return (int)local_10[0];
}



// Function: FUN_100b5444 at 100b5444
// Size: 112 bytes

undefined4 FUN_100b5444(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  local_18 = *(undefined4 *)(param_1 + 4);
  uStack_14 = *(undefined4 *)(param_1 + 8);
  local_10 = 0;
  FUN_10000d20(&local_18,param_2,0x6c6f6e67,auStack_c,&local_10,4,auStack_8);
  FUN_100db2f4();
  return local_10;
}



// Function: FUN_100b54b4 at 100b54b4
// Size: 188 bytes

void FUN_100b54b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_128;
  undefined4 uStack_124;
  uint local_120;
  undefined1 local_11c;
  undefined1 auStack_11b [255];
  undefined1 auStack_1c [8];
  
  local_128 = *(undefined4 *)(param_1 + 4);
  uStack_124 = *(undefined4 *)(param_1 + 8);
  FUN_100b1d90(param_3,0x94220000);
  FUN_10000d20(&local_128,param_2,0x54455854,auStack_1c,auStack_11b,0xff,&local_120);
  FUN_100db2f4();
  if (0xff < (int)local_120) {
    local_120 = 0xff;
  }
  local_11c = (undefined1)local_120;
  FUN_100012d8(&local_11c,param_3,(local_120 & 0xff) + 1);
  return;
}



// Function: FUN_100b5570 at 100b5570
// Size: 112 bytes

undefined4 FUN_100b5570(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  local_18 = *(undefined4 *)(param_1 + 4);
  uStack_14 = *(undefined4 *)(param_1 + 8);
  local_10 = 0;
  FUN_10000d20(&local_18,param_2,0x73656374,auStack_c,&local_10,4,auStack_8);
  FUN_100db2f4();
  return local_10;
}



// Function: FUN_100b55e0 at 100b55e0
// Size: 464 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55e0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [4];
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [4];
  int local_15c;
  undefined1 auStack_158 [8];
  undefined4 local_150;
  undefined1 auStack_14c [256];
  short local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_170 = *(undefined4 *)(param_1 + 4);
  uStack_16c = *(undefined4 *)(param_1 + 8);
  FUN_10003510(&local_170,param_2,0x6c697374,auStack_158);
  FUN_100db2f4();
  local_150 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = _DAT_41820010;
  _DAT_41820010 = auStack_14c;
  iVar1 = FUN_10000090(auStack_14c);
  if (iVar1 == 0) {
    FUN_10000d50(auStack_158,&local_15c);
    FUN_100db2f4();
    local_150 = FUN_100f1640((int)*(short *)(param_4 + 3));
    iVar1 = 1;
    if (0 < local_15c) {
      do {
        FUN_10000d68(auStack_158,iVar1,param_3,auStack_160,auStack_164,local_150,
                     (int)*(short *)(param_4 + 3),auStack_168);
        FUN_100db2f4();
        iVar2 = *param_4;
        iVar3 = FUN_10117884((int)param_4 + (int)*(short *)(iVar2 + 0xa8),
                             *(undefined4 *)(iVar2 + 0xac));
        FUN_10117884((int)param_4 + (int)*(short *)(iVar2 + 0xb8),iVar3 + 1,local_150,1);
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 <= local_15c);
    }
    _DAT_41820010 = local_44;
  }
  else {
    FUN_10002a78(auStack_158);
    local_150 = FUN_100ef580(local_150);
    FUN_100db158((int)local_4c,local_48);
  }
  FUN_10002a78(auStack_158);
  FUN_100ef580(local_150);
  return;
}



// Function: FUN_100b57b0 at 100b57b0
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57b0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [4];
  int local_15c;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_168 = *(undefined4 *)(param_1 + 4);
  uStack_164 = *(undefined4 *)(param_1 + 8);
  FUN_10003510(&local_168,param_2,0x6c697374,auStack_158);
  FUN_100db2f4();
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar1 = FUN_10000090(auStack_148);
  if (iVar1 == 0) {
    local_14c = 0;
    FUN_10000d50(auStack_158,&local_15c);
    FUN_100db2f4();
    iVar1 = 1;
    if (0 < local_15c) {
      do {
        FUN_10000d80(auStack_158,iVar1,param_3,auStack_160,auStack_150);
        FUN_100db2f4();
        iVar2 = *param_4;
        iVar3 = FUN_10117884((int)param_4 + (int)*(short *)(iVar2 + 0xa8),
                             *(undefined4 *)(iVar2 + 0xac));
        FUN_10117884((int)param_4 + (int)*(short *)(iVar2 + 0xb8),iVar3 + 1,&local_14c,1);
        local_14c = 0;
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 <= local_15c);
    }
    _DAT_41820010 = local_40;
  }
  else {
    FUN_10002a78(auStack_158);
    FUN_10002a78(auStack_150);
    FUN_100db158((int)local_48,local_44);
  }
  FUN_10002a78(auStack_158);
  return;
}



// Function: FUN_100b5954 at 100b5954
// Size: 64 bytes

void FUN_100b5954(int param_1)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  FUN_10003510(&local_8);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5994 at 100b5994
// Size: 76 bytes

void FUN_100b5994(int param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = *(undefined4 *)(param_1 + 4);
  uStack_c = *(undefined4 *)(param_1 + 8);
  FUN_10000d20(&local_10);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b59e0 at 100b59e0
// Size: 84 bytes

void FUN_100b59e0(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uStack00000022;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  uStack00000022 = param_3;
  FUN_10003528(&local_8,param_2,0x73686f72,&stack0x00000022,2);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5a34 at 100b5a34
// Size: 84 bytes

void FUN_100b5a34(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  uStack00000020 = param_3;
  FUN_10003528(&local_8,param_2,0x6c6f6e67,&stack0x00000020,4);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5a88 at 100b5a88
// Size: 172 bytes

void FUN_100b5a88(int param_1,undefined4 param_2,byte *param_3)

{
  undefined1 *puVar1;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined1 auStack_117 [259];
  
  puVar1 = &local_118;
  local_120 = *(undefined4 *)(param_1 + 4);
  uStack_11c = *(undefined4 *)(param_1 + 8);
  if ((puVar1 != (undefined1 *)0x0) ||
     (puVar1 = (undefined1 *)FUN_100f56e4(0x100), puVar1 != (undefined1 *)0x0)) {
    FUN_100012d8(param_3,puVar1,*param_3 + 1);
  }
  FUN_10003528(&local_120,param_2,0x54455854,auStack_117,local_118);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5b34 at 100b5b34
// Size: 84 bytes

void FUN_100b5b34(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  uStack00000020 = param_3;
  FUN_10003528(&local_8,param_2,0x73656374,&stack0x00000020,4);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5b88 at 100b5b88
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5b88(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined1 auStack_280 [4];
  undefined4 local_27c;
  undefined1 auStack_278 [256];
  short local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_160 [79];
  
  local_27c = 0;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_170 = _DAT_41820010;
  _DAT_41820010 = auStack_278;
  iVar1 = FUN_10000090(auStack_278);
  if (iVar1 == 0) {
    local_288 = *(undefined4 *)(param_1 + 4);
    uStack_284 = *(undefined4 *)(param_1 + 8);
    FUN_10000db0(0,0,0,auStack_280);
    FUN_100db2f4();
    FUN_100ebaf8(local_160,param_4,1);
    FUN_10117884((int)*(short *)(local_160[0] + 0x10) + (int)local_160);
    iVar1 = local_160[1];
    iVar2 = FUN_100ebf44(local_160);
    while (iVar2 != 0) {
      uVar3 = FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0xe0),iVar1);
      FUN_10003918(auStack_280,iVar1,param_3,uVar3,(int)*(short *)(param_4 + 3));
      FUN_100db2f4();
      FUN_10117884((int)*(short *)(local_160[0] + 0x18) + (int)local_160);
      iVar1 = local_160[1];
      iVar2 = FUN_100ebf44(local_160);
    }
    FUN_100ebc68(local_160,2);
    FUN_100036a8(&local_288,param_2,auStack_280);
    FUN_100db2f4();
    _DAT_41820010 = local_170;
  }
  else {
    FUN_10002a78(auStack_280);
    FUN_100db2f4();
    FUN_100db158((int)local_178,local_174);
  }
  FUN_10002a78(auStack_280);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5d64 at 100b5d64
// Size: 492 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5d64(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined1 auStack_288 [4];
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 auStack_278 [256];
  short local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_160 [78];
  
  local_284 = 0;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_170 = _DAT_41820010;
  _DAT_41820010 = auStack_278;
  iVar1 = FUN_10000090(auStack_278);
  if (iVar1 == 0) {
    local_290 = *(undefined4 *)(param_1 + 4);
    uStack_28c = *(undefined4 *)(param_1 + 8);
    FUN_10000db0(0,0,0,auStack_288);
    FUN_100db2f4();
    FUN_100ebaf8(local_160,param_4,1);
    FUN_10117884((int)*(short *)(local_160[0] + 0x10) + (int)local_160);
    iVar1 = local_160[1];
    iVar2 = FUN_100ebf44(local_160);
    while (iVar2 != 0) {
      local_27c = 0;
      local_280 = param_3;
      puVar3 = (undefined4 *)FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0xe0),iVar1);
      local_27c = *puVar3;
      FUN_10002f10(auStack_288,iVar1,&local_280);
      FUN_100db2f4();
      FUN_10117884((int)*(short *)(local_160[0] + 0x18) + (int)local_160);
      iVar1 = local_160[1];
      iVar2 = FUN_100ebf44(local_160);
    }
    FUN_100ebc68(local_160,2);
    FUN_100036a8(&local_290,param_2,auStack_288);
    FUN_100db2f4();
    _DAT_41820010 = local_170;
  }
  else {
    FUN_10002a78(auStack_288);
    FUN_100db2f4();
    FUN_100db158((int)local_178,local_174);
  }
  FUN_10002a78(auStack_288);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5f50 at 100b5f50
// Size: 64 bytes

void FUN_100b5f50(int param_1)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  FUN_100036a8(&local_8);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5f90 at 100b5f90
// Size: 64 bytes

void FUN_100b5f90(int param_1)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  FUN_10003528(&local_8);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b5fd0 at 100b5fd0
// Size: 64 bytes

void FUN_100b5fd0(int param_1)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 8);
  FUN_10000e10(&local_8);
  FUN_100db2f4();
  return;
}



// Function: FUN_100b6010 at 100b6010
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6010(void)

{
  FUN_100c1c8c(&DAT_607f0000,_DAT_8189002c,0x1c,0xa8690028,0x90c30020);
  return;
}



// Function: FUN_100b604c at 100b604c
// Size: 716 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100b604c(undefined4 param_1,short *param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined **local_27c;
  uint local_258;
  uint local_254;
  undefined1 auStack_250 [8];
  ushort local_248 [2];
  undefined1 local_244 [256];
  byte local_144 [256];
  int local_44;
  
  ppuVar1 = &.TVect::OCECToRString;
  puVar4 = &local_258;
  local_144[0] = 0;
  local_244[0] = 0;
  uVar5 = 0;
  if (*param_2 == 3) {
    if (((*(uint *)(param_2 + 1) & 0xff) == 3) || ((*(uint *)(param_2 + 1) & 0xff) == 0xd)) {
      FUN_100ec6ac(param_1,1);
    }
  }
  else if ((*param_2 == 0) &&
          (iVar2 = FUN_10001a88(), ppuVar1 = local_27c,
          (uint)(int)_DAT_30210058 < (uint)(iVar2 - _DAT_7c0803a6))) {
    iVar2 = 1;
    do {
      local_44 = 0;
      uVar3 = FUN_100b0574(auStack_250);
      FUN_10002730(param_1,iVar2,local_248,&local_44,uVar3);
      if ((local_248[0] & 0x7f) == 8) break;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (local_44 != 0);
    FUN_100009d8(local_144,999,(int)_DAT_bb21ffe4);
    if ((int)((local_144[0] - 1) + (uint)(local_144[0] != 0)) < 0) {
      _DAT_bb21ffe4 = 1;
      _DAT_7c0803a6 = FUN_10001a88();
      if (local_44 != 0) {
        FUN_10002340((byte *)*_DAT_80010060,local_244,*(byte *)*_DAT_80010060 + 1);
        uVar3 = FUN_100b1c84(local_244);
        FUN_10000a68(local_44,uVar3);
      }
      _DAT_30210058 = 0x168;
    }
    else {
      if (((_DAT_bb21ffe4 == 1) &&
          ((int)((*(byte *)*_DAT_80010060 - 1) + (uint)(*(byte *)*_DAT_80010060 != 0)) < 0)) &&
         (local_44 != 0)) {
        FUN_10002c70(local_44,local_244);
        FUN_10000a50(_DAT_80010060,local_244);
      }
      _DAT_bb21ffe4 = _DAT_bb21ffe4 + 1;
      _DAT_7c0803a6 = FUN_10001a88();
      iVar2 = local_44;
      if (local_44 != 0) {
        uVar3 = FUN_100b1c84(local_144);
        FUN_10000a68(iVar2,uVar3);
      }
      local_254 = (uint)local_144[0] * 6;
      local_258 = 0x3c;
      if ((uint)local_144[0] * 6 < 0x3c) {
        puVar4 = &local_254;
      }
      _DAT_30210058 = (short)*puVar4;
    }
  }
  if (*(int *)ppuVar1[-0x3ad] != 0) {
    uVar5 = FUN_10117884(param_1,param_2,param_3);
  }
  return uVar5;
}



// Function: FUN_100b633c at 100b633c
// Size: 20 bytes

bool FUN_100b633c(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



// Function: FUN_100b6350 at 100b6350
// Size: 136 bytes

undefined4 * FUN_100b6350(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x5c);
    }
    FUN_100ebf7c(param_1,uVar1,1);
    *param_1 = &DAT_80410014;
  }
  return param_1;
}



// Function: FUN_100b63d8 at 100b63d8
// Size: 108 bytes

void FUN_100b63d8(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_80410014;
    FUN_100ebff4(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100b6444 at 100b6444
// Size: 36 bytes

void FUN_100b6444(void)

{
  FUN_100ec060();
  return;
}



// Function: FUN_100b6468 at 100b6468
// Size: 36 bytes

void FUN_100b6468(void)

{
  FUN_100ec0e8();
  return;
}



// Function: FUN_100b648c at 100b648c
// Size: 376 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b648c(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_2c;
  
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x480),1,0xffffffff);
  *(undefined1 *)(**(int **)(local_2c + -0xeac) + 0x44) = 0;
  piVar1 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x120));
  if (*(char *)((int)_DAT_28030000 + 0x56) != '\0') {
    FUN_100f27d0(0x65,1);
    FUN_100f27d0(0x67,1);
    FUN_100f27d0(0x68,1);
    FUN_100f27d0(0x69,1);
    FUN_100f27d0(0x6a,1);
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x480),1,0);
  }
  piVar1 = (int *)FUN_100f2214(1);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x318));
    if ((*(uint *)(*piVar1 + 10) & 1) == uVar2) {
      *(uint *)(*piVar1 + 10) = *(uint *)(*piVar1 + 10) ^ 1;
      FUN_100f2454();
    }
  }
  return;
}



// Function: FUN_100b660c at 100b660c
// Size: 104 bytes

undefined4 * FUN_100b660c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x24), param_1 != (undefined4 *)0x0)) {
    FUN_100e904c(param_1);
    *param_1 = &DAT_41820034;
  }
  return param_1;
}



// Function: FUN_100b6674 at 100b6674
// Size: 40 bytes

void FUN_100b6674(void)

{
  FUN_100b660c(0);
  return;
}



// Function: FUN_100b66e4 at 100b66e4
// Size: 36 bytes

void FUN_100b66e4(void)

{
  FUN_100e9124();
  return;
}



// Function: FUN_100b6708 at 100b6708
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6708(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar2;
  int iVar1;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = FUN_100f5754(0);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 == 0) {
    FUN_100e9508(param_1,param_2);
    _DAT_41820010 = local_24;
  }
  else {
    FUN_100f5754(uVar2);
    FUN_100db158((int)local_2c,local_28);
  }
  FUN_100f5754(uVar2);
  return;
}



// Function: FUN_100b67d4 at 100b67d4
// Size: 104 bytes

undefined4 * FUN_100b67d4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x4bfded05;
  }
  return param_1;
}



// Function: FUN_100b683c at 100b683c
// Size: 40 bytes

void FUN_100b683c(void)

{
  FUN_100b67d4(0);
  return;
}



// Function: FUN_100b6864 at 100b6864
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6864(void)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
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
    *(undefined1 *)(_DAT_28030000 + 0xf) = 1;
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3a8));
    _DAT_41820010 = local_20;
  }
  else {
    *(undefined1 *)(_DAT_28030000 + 0xf) = 0;
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100b691c at 100b691c
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b691c(undefined4 param_1,undefined4 param_2)

{
  FUN_100c3df8(param_1,param_2,_DAT_28030000,0,0,0);
  return;
}



// Function: FUN_100b6954 at 100b6954
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100b6954(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x318));
  if (iVar1 == 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x2d);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100b69b8 at 100b69b8
// Size: 104 bytes

undefined4 * FUN_100b69b8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = &DAT_38800000;
  }
  return param_1;
}



// Function: FUN_100b6a20 at 100b6a20
// Size: 40 bytes

void FUN_100b6a20(void)

{
  FUN_100b69b8(0);
  return;
}



// Function: FUN_100b6a48 at 100b6a48
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6a48(int param_1)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x380),
               *(undefined4 *)(param_1 + 4));
  return;
}



// Function: FUN_100b6a8c at 100b6a8c
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6a8c(undefined4 param_1,undefined4 param_2)

{
  FUN_100c3df8(param_1,param_2,_DAT_28030000,0,0,0);
  return;
}



// Function: FUN_100b6acc at 100b6acc
// Size: 120 bytes

undefined4 * FUN_100b6acc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100c55a8(param_1);
    *param_1 = &DAT_38a00000;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}



// Function: FUN_100b6b44 at 100b6b44
// Size: 40 bytes

void FUN_100b6b44(void)

{
  FUN_100b6acc(0);
  return;
}



// Function: FUN_100b6b6c at 100b6b6c
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6b6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100c5640(param_1,param_2,_DAT_28030000,0,0,0);
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}



// Function: FUN_100b6bbc at 100b6bbc
// Size: 872 bytes

/* WARNING: Removing unreachable block (ram,0x100b6e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6bbc(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *local_4c0;
  int *local_4bc;
  undefined1 auStack_4b8 [312];
  undefined1 auStack_380 [256];
  short local_280;
  undefined4 local_27c;
  undefined1 *local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined1 auStack_268 [256];
  short local_168;
  undefined4 local_164;
  undefined1 *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int *local_150;
  undefined1 auStack_14c [256];
  short local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  FUN_100c566c(param_1,param_2,param_3,param_4,param_5);
  local_4bc = (int *)0x0;
  local_4c0 = (int *)0x0;
  local_168 = 0;
  local_164 = 0;
  local_15c = 0;
  local_158 = 0;
  local_160 = _DAT_41820010;
  _DAT_41820010 = auStack_268;
  iVar1 = FUN_10000090(auStack_268);
  if (iVar1 == 0) {
    local_4bc = (int *)FUN_100eab4c(0);
    FUN_100eabdc();
    local_280 = 0;
    local_27c = 0;
    local_274 = 0;
    local_270 = 0;
    local_278 = _DAT_41820010;
    _DAT_41820010 = auStack_380;
    iVar1 = FUN_10000090(auStack_380);
    if (iVar1 == 0) {
      local_4c0 = (int *)FUN_100e9174();
      FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x140),0x2d2d2d2d,
                   0x616c6973,local_4bc);
      FUN_100ec170(auStack_4b8,local_4bc,1);
      uVar2 = FUN_100ec2c4(auStack_4b8);
      iVar1 = FUN_100ebf44(auStack_4b8);
      while (iVar1 != 0) {
        local_150 = (int *)0x0;
        local_150 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x370)
                                        ,param_2);
        local_4c = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 0;
        local_44 = _DAT_41820010;
        _DAT_41820010 = auStack_14c;
        iVar1 = FUN_10000090(auStack_14c);
        if (iVar1 == 0) {
          FUN_10117884((int)local_150 + (int)*(short *)(*local_150 + 0xc0),uVar2);
          FUN_100db2f4();
          FUN_10117884((int)local_4c0 + (int)*(short *)(*local_4c0 + 0x1d0),local_150);
          _DAT_41820010 = local_44;
        }
        else {
          local_150 = (int *)FUN_100f57c8(local_150);
          FUN_100db158((int)local_4c,local_48);
        }
        FUN_10117884((int)local_4bc + (int)*(short *)(*local_4bc + 0x138),uVar2);
        FUN_100ef510(uVar2);
        uVar2 = FUN_100ec34c(auStack_4b8);
        iVar1 = FUN_100ebf44(auStack_4b8);
      }
      FUN_100ec1e8(auStack_4b8,2);
    }
    else {
      if (local_4bc != (int *)0x0) {
        FUN_10117884((int)local_4bc + (int)*(short *)(*local_4bc + 0x120));
      }
      FUN_100db158((int)local_280,local_27c);
    }
    _DAT_41820010 = local_160;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_168,local_164);
  }
  FUN_10117884((int)local_4bc + (int)*(short *)(*local_4bc + 0x90));
  param_1[0xf] = (int)local_4c0;
  return;
}



// Function: FUN_100b6f24 at 100b6f24
// Size: 68 bytes

void FUN_100b6f24(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100e91b4(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  FUN_100c550c(param_1);
  return;
}



// Function: FUN_100b6f70 at 100b6f70
// Size: 104 bytes

undefined4 * FUN_100b6f70(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100b6acc(param_1);
    *param_1 = &DAT_90bf0008;
  }
  return param_1;
}



// Function: FUN_100b6fd8 at 100b6fd8
// Size: 40 bytes

void FUN_100b6fd8(void)

{
  FUN_100b6f70(0);
  return;
}



// Function: FUN_100b7000 at 100b7000
// Size: 36 bytes

void FUN_100b7000(void)

{
  FUN_100b6b6c();
  return;
}



// Function: FUN_100b7024 at 100b7024
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7024(int *param_1)

{
  int iVar1;
  int local_14c;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
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
    FUN_10117884(**(int **)(local_14c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x388),param_1[1],
                 param_1[0xf]);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),(int)local_28,local_24);
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100b70f8 at 100b70f8
// Size: 112 bytes

undefined4 * FUN_100b70f8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100b6acc(param_1);
    *param_1 = 0x90bf001c;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return param_1;
}



// Function: FUN_100b7168 at 100b7168
// Size: 40 bytes

void FUN_100b7168(void)

{
  FUN_100b70f8(0);
  return;
}



// Function: FUN_100b7190 at 100b7190
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7190(int *param_1)

{
  int iVar1;
  int local_14c;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
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
    FUN_10117884(**(int **)(local_14c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x390),param_1[0xf]);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),(int)local_28,local_24);
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100b7260 at 100b7260
// Size: 104 bytes

undefined4 * FUN_100b7260(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x90bf0018;
  }
  return param_1;
}



// Function: FUN_100b72c8 at 100b72c8
// Size: 40 bytes

void FUN_100b72c8(void)

{
  FUN_100b7260(0);
  return;
}



// Function: FUN_100b72f0 at 100b72f0
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72f0(undefined4 param_1,undefined4 param_2)

{
  FUN_100c3df8(param_1,param_2,_DAT_28030000,0,0,0);
  return;
}



// Function: FUN_100b7328 at 100b7328
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7328(void)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x4f0));
  return;
}



// Function: FUN_100b736c at 100b736c
// Size: 104 bytes

undefined4 * FUN_100b736c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = &DAT_41820018;
  }
  return param_1;
}



// Function: FUN_100b73d4 at 100b73d4
// Size: 40 bytes

void FUN_100b73d4(void)

{
  FUN_100b736c(0);
  return;
}



// Function: FUN_100b73fc at 100b73fc
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73fc(int param_1,undefined4 param_2)

{
  FUN_100c3df8(param_1,param_2,_DAT_28030000,0,0,0);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)(param_1 + 0x11) = 0x5f;
  return;
}



// Function: FUN_100b7464 at 100b7464
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7464(void)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x308),
               *(undefined1 *)((int)_DAT_28030000 + 0x31));
  return;
}



// Function: FUN_100b74ac at 100b74ac
// Size: 360 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100b74ac(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x84), param_1 != (undefined4 *)0x0)) {
    FUN_100c604c(param_1);
    *param_1 = &DAT_41820010;
    FUN_100b02d0((int)param_1 + 0x42);
    _DAT_28030000 = param_1;
    param_1[9] = 0x54455854;
    param_1[8] = 0x3f3f3f3f;
    *(undefined1 *)((int)param_1 + 0x31) = 1;
    *(undefined1 *)((int)param_1 + 0x3b) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)((int)param_1 + 0x32) = 0;
    *(undefined4 *)((int)param_1 + 0x36) = 0;
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x1f] = 0;
    param_1[0x17] = 0;
    *(undefined2 *)(param_1 + 0x1c) = 1;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x20] = 0;
    *(undefined1 *)((int)param_1 + 0x3a) = 2;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)((int)param_1 + 0x42) = _DAT_63e30000;
    uVar1 = FUN_10001a88();
    param_1[0x12] = uVar1;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1[0x14] = 0x1c20;
    *(undefined2 *)(param_1 + 0x15) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x72) = 0x80;
    *(undefined2 *)((int)param_1 + 0x76) = 0x81;
    *(undefined2 *)(param_1 + 0x1d) = 0x82;
    uVar1 = FUN_10001a88();
    param_1[0x13] = uVar1;
    param_1[0x1e] = 0;
    *(undefined1 *)((int)param_1 + 0x56) = 0;
    param_1[0x1b] = param_1;
    param_1[0x16] = 0;
    *(undefined1 *)((int)param_1 + 0x57) = 1;
  }
  return param_1;
}



// Function: FUN_100b7614 at 100b7614
// Size: 40 bytes

void FUN_100b7614(void)

{
  FUN_100b74ac(0);
  return;
}



// Function: FUN_100b763c at 100b763c
// Size: 540 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b763c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_154;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100c60e4(param_1,0);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    param_1[9] = param_2;
    param_1[8] = param_3;
    iVar1 = FUN_100ed918();
    param_1[0x1e] = iVar1;
    iVar1 = FUN_100ed918();
    param_1[0x1f] = iVar1;
    iVar1 = FUN_100ed918();
    param_1[0x20] = iVar1;
    FUN_10002760((int)param_1 + 0x32);
    FUN_100db2f4();
    iVar1 = FUN_100e9174();
    param_1[0x18] = iVar1;
    iVar1 = FUN_100e9174();
    param_1[0x17] = iVar1;
    iVar1 = FUN_100b660c(0);
    FUN_100b66e4();
    param_1[10] = iVar1;
    iVar1 = FUN_100b660c(0);
    FUN_100b66e4();
    param_1[0xb] = iVar1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e8));
    uVar2 = FUN_100b736c(0);
    FUN_100b73fc(uVar2,0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar2);
    uVar2 = FUN_100fc998(0);
    FUN_100fca28(uVar2,1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),uVar2);
    uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x240));
    **(undefined4 **)(local_154 + -0xe5c) = uVar2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x528));
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    **(undefined4 **)(local_154 + -0xedc) = 0;
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100b7868 at 100b7868
// Size: 76 bytes

undefined4 FUN_100b7868(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f3444(0);
  FUN_100f34d4(uVar1,(int)*(short *)(param_1 + 0x76));
  return uVar1;
}



// Function: FUN_100b78b4 at 100b78b4
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78b4(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_20 [5];
  
  FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1c8),param_2);
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x770) + (int)piVar3);
    }
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = local_20[1];
    iVar2 = FUN_100eea60(local_20);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),0);
  return;
}



// Function: FUN_100b79d4 at 100b79d4
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b79d4(undefined4 param_1,undefined1 param_2)

{
  if (_DAT_60000000 != (int *)0x0) {
    FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xb0),param_2);
  }
  return;
}



// Function: FUN_100b7a24 at 100b7a24
// Size: 72 bytes

void FUN_100b7a24(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x5c) +
                 (int)*(short *)(**(int **)(param_1 + 0x5c) + 0x150));
  }
  return;
}



// Function: FUN_100b7a6c at 100b7a6c
// Size: 132 bytes

void FUN_100b7a6c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x60) +
                           (int)*(short *)(**(int **)(param_1 + 0x60) + 0x140),param_2), iVar1 == 0)
     ) {
    FUN_10117884((int)*(int **)(param_1 + 0x60) +
                 (int)*(short *)(**(int **)(param_1 + 0x60) + 0x150),param_2);
  }
  return;
}



// Function: FUN_100b7af0 at 100b7af0
// Size: 1052 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100b7af0(int *param_1,int param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined1 auStack_180 [8];
  byte local_178;
  char local_177;
  undefined1 auStack_174 [256];
  undefined2 local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [16];
  
  pbVar2 = ___start;
  if (_DAT_4e800020 == 0) {
    _DAT_4e800020 = 1;
    *___start = 0;
  }
  local_177 = DAT_80010048;
  local_178 = 0;
  DAT_80010048 = 1;
  iVar3 = FUN_100eca54(param_2,param_3,param_4,1,0,auStack_180);
  local_178 = (byte)iVar3;
  if (iVar3 != 0) goto LAB_100b7ffc;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_6c = _DAT_41820010;
  _DAT_41820010 = auStack_174;
  iVar3 = FUN_10000090(auStack_174);
  if (iVar3 != 0) goto LAB_100b7ffc;
  if ((DAT_30210040 == '\0') && (local_177 == '\0')) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4f8));
  }
  sVar1 = *param_3;
  if (sVar1 == 8) {
    if (*(int *)(param_3 + 1) == param_2) {
      bVar7 = DAT_7c0803a6;
      if (0x1f < DAT_7c0803a6) {
        bVar7 = 0x1f;
      }
      local_1a4 = CONCAT13(bVar7,local_1a4._1_3_);
      FUN_100012d8(0x7c0803a7,(int)&local_1a4 + 1);
      *(undefined4 *)pbVar2 = local_1a4;
      *(undefined4 *)(pbVar2 + 4) = uStack_1a0;
      *(undefined4 *)(pbVar2 + 8) = uStack_19c;
      *(undefined4 *)(pbVar2 + 0xc) = uStack_198;
      *(undefined4 *)(pbVar2 + 0x10) = uStack_194;
      *(undefined4 *)(pbVar2 + 0x14) = local_190;
      *(undefined4 *)(pbVar2 + 0x18) = uStack_18c;
      *(undefined4 *)(pbVar2 + 0x1c) = uStack_188;
      goto LAB_100b7fa8;
    }
    if (DAT_30210040 == '\0') {
      if (local_177 == '\0') {
        FUN_10000660(&local_184);
        uVar4 = FUN_100f5754(0);
        piVar5 = (int *)FUN_100d91e8(0);
        FUN_100f5754(uVar4);
        FUN_100d9278(piVar5,param_1,param_3);
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd0));
        FUN_10000198(local_184);
      }
      goto LAB_100b7fa8;
    }
  }
  else {
    if (sVar1 == 6) {
      if (*(int *)(param_3 + 1) != param_2) {
        if (DAT_30210040 != '\0') goto LAB_100b7ff4;
        if (local_177 == '\0') {
          FUN_10000660(&local_1a8);
          uVar4 = FUN_100f5754(0);
          piVar5 = (int *)FUN_100d91e8(0);
          FUN_100f5754(uVar4);
          FUN_100d9278(piVar5,param_1,param_3);
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd0));
          FUN_10000198(local_1a8);
        }
      }
    }
    else if (sVar1 == 3) {
      uVar4 = FUN_100f5754(0);
      iVar3 = FUN_100d91e8(0);
      FUN_100f5754(uVar4);
      FUN_100d9278(iVar3,param_1,param_3);
      piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x108),iVar3);
      FUN_100b21ac(pbVar2,(int)(char)*(undefined2 *)(iVar3 + 0x24));
      FUN_100f57c8(iVar3);
      uVar6 = FUN_10001350(pbVar2 + 1,(int)(short)(*pbVar2 - 1));
      if (uVar6 + 1 < 4) {
        return uVar6;
      }
    }
LAB_100b7fa8:
    if (((DAT_30210040 == '\0') && (local_177 == '\0')) &&
       (iVar3 = FUN_100014d0(0xffffffff,auStack_5c), iVar3 == 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),
                   *(undefined1 *)((int)param_1 + 0x3a));
    }
  }
LAB_100b7ff4:
  _DAT_41820010 = local_6c;
LAB_100b7ffc:
  DAT_80010048 = local_177;
  return (uint)local_178;
}



// Function: FUN_100b80e4 at 100b80e4
// Size: 120 bytes

undefined4 FUN_100b80e4(int *param_1,undefined4 param_2,short *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4f8));
  if ((int)*param_3 - 6U < 0x12) {
    return uVar1;
  }
  return 0;
}



// Function: FUN_100b8334 at 100b8334
// Size: 44 bytes

void FUN_100b8334(undefined4 param_1,short param_2)

{
  FUN_10001b00((int)param_2);
  return;
}



// Function: FUN_100b8360 at 100b8360
// Size: 512 bytes

bool FUN_100b8360(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_f8 [8];
  int local_f0;
  undefined1 auStack_ec [18];
  undefined1 *local_da;
  int *local_7c;
  undefined1 local_78 [64];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  FUN_100b02d0(auStack_f8);
  local_78[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x398),param_2,&local_f0,&local_7c,
               auStack_38,auStack_f8,auStack_34,auStack_30);
  FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x198),local_78);
  uVar1 = FUN_10001c20(local_7c);
  iVar2 = (int)(short)(uVar1 >> 2);
  bVar4 = false;
  if (iVar2 == 0) {
    if (local_f0 == 0) {
      bVar4 = true;
    }
    else {
      iVar2 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x140),auStack_ec);
      if (iVar2 == 0) {
        local_da = local_78;
        iVar2 = FUN_10117884(auStack_ec,0);
        bVar4 = iVar2 == 0;
      }
      else {
        bVar4 = false;
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (param_3[0x14] == *(int *)(*local_7c + iVar3 * 4)) {
          if (local_f0 == 0) {
            bVar4 = true;
          }
          else {
            iVar2 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x140),auStack_ec);
            if (iVar2 == 0) {
              local_da = local_78;
              iVar2 = FUN_10117884(auStack_ec,0);
              bVar4 = iVar2 == 0;
            }
            else {
              bVar4 = false;
            }
          }
          break;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < iVar2);
    }
  }
  FUN_100ef510(local_7c);
  return bVar4;
}



// Function: FUN_100b8560 at 100b8560
// Size: 340 bytes

undefined4 FUN_100b8560(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_f8 [2];
  undefined4 local_f6;
  undefined4 uStack_f2;
  undefined4 uStack_ee;
  undefined4 uStack_ea;
  undefined4 uStack_e6;
  undefined4 uStack_e2;
  undefined4 local_de;
  undefined4 uStack_da;
  undefined4 uStack_d6;
  undefined4 uStack_d2;
  undefined4 uStack_ce;
  undefined4 uStack_ca;
  undefined4 local_c6;
  undefined4 uStack_c2;
  undefined4 uStack_be;
  undefined4 uStack_ba;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  
  local_40 = 0;
  uVar1 = FUN_100b1c84(&DAT_7c0803a6);
  uVar2 = FUN_100b1c84(&DAT_7c0803a6);
  uVar3 = FUN_100b1c84(&DAT_7c0803a6);
  iVar4 = FUN_10000ed0(uVar3,uVar2,0,&local_a8,auStack_f8,0,uVar1);
  uVar1 = 0;
  if (iVar4 == 0) {
    piVar5 = (int *)FUN_100f15e0(0xfc);
    iVar4 = *piVar5;
    *(undefined4 *)(iVar4 + 0x4c) = local_a8;
    *(undefined4 *)(iVar4 + 0x50) = uStack_a4;
    *(undefined4 *)(iVar4 + 0x54) = uStack_a0;
    *(undefined4 *)(iVar4 + 0x58) = uStack_9c;
    *(undefined4 *)(iVar4 + 0x5c) = uStack_98;
    *(undefined4 *)(iVar4 + 0x60) = uStack_94;
    *(undefined4 *)(iVar4 + 100) = uStack_90;
    *(undefined4 *)(iVar4 + 0x68) = local_8c;
    *(undefined4 *)(iVar4 + 0x6c) = uStack_88;
    *(undefined4 *)(iVar4 + 0x70) = uStack_84;
    *(undefined4 *)(iVar4 + 0x74) = uStack_80;
    *(undefined4 *)(iVar4 + 0x78) = uStack_7c;
    *(undefined4 *)(iVar4 + 0x7c) = uStack_78;
    *(undefined4 *)(iVar4 + 0x80) = uStack_74;
    *(undefined4 *)(iVar4 + 0x84) = local_70;
    *(undefined4 *)(iVar4 + 0x88) = uStack_6c;
    *(undefined4 *)(iVar4 + 0x8c) = uStack_68;
    *(undefined4 *)(iVar4 + 0x90) = uStack_64;
    *(undefined4 *)(iVar4 + 0x94) = uStack_60;
    *(undefined4 *)(iVar4 + 0x98) = uStack_5c;
    *(undefined4 *)(iVar4 + 0x9c) = uStack_58;
    *(undefined4 *)(iVar4 + 0xa0) = local_54;
    *(undefined4 *)(iVar4 + 0xa4) = uStack_50;
    *(undefined4 *)(iVar4 + 0xa8) = uStack_4c;
    *(undefined4 *)(iVar4 + 0xac) = uStack_48;
    *(undefined4 *)(iVar4 + 0xb0) = uStack_44;
    iVar4 = *piVar5;
    *(undefined4 *)(iVar4 + 4) = local_f6;
    *(undefined4 *)(iVar4 + 8) = uStack_f2;
    *(undefined4 *)(iVar4 + 0xc) = uStack_ee;
    *(undefined4 *)(iVar4 + 0x10) = uStack_ea;
    *(undefined4 *)(iVar4 + 0x14) = uStack_e6;
    *(undefined4 *)(iVar4 + 0x18) = uStack_e2;
    *(undefined4 *)(iVar4 + 0x1c) = local_de;
    *(undefined4 *)(iVar4 + 0x20) = uStack_da;
    *(undefined4 *)(iVar4 + 0x24) = uStack_d6;
    *(undefined4 *)(iVar4 + 0x28) = uStack_d2;
    *(undefined4 *)(iVar4 + 0x2c) = uStack_ce;
    *(undefined4 *)(iVar4 + 0x30) = uStack_ca;
    *(undefined4 *)(iVar4 + 0x34) = local_c6;
    *(undefined4 *)(iVar4 + 0x38) = uStack_c2;
    *(undefined4 *)(iVar4 + 0x3c) = uStack_be;
    *(undefined4 *)(iVar4 + 0x40) = uStack_ba;
    *(undefined4 *)(iVar4 + 0x44) = uStack_b6;
    *(undefined4 *)(iVar4 + 0x48) = uStack_b2;
    *param_2 = 0x74617267;
    param_2[1] = piVar5;
    uVar1 = 1;
  }
  else if (iVar4 != -0x80) {
    FUN_100db2f4(iVar4);
  }
  return uVar1;
}



// Function: FUN_100b86b4 at 100b86b4
// Size: 1040 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100b86b4(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack0000001c;
  int *piStack00000020;
  int local_334;
  undefined4 local_304;
  undefined4 local_300;
  short local_2fc [2];
  undefined4 local_2f8;
  byte local_2f4 [88];
  undefined1 auStack_29c [8];
  undefined4 **local_294;
  undefined1 *local_290;
  undefined4 *local_28c;
  int *local_288;
  undefined1 auStack_284 [256];
  short local_184;
  undefined4 local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 auStack_16c [256];
  short local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined1 auStack_4c [8];
  
  uStack0000001c = param_2;
  piStack00000020 = param_3;
  FUN_100b02d0(auStack_29c);
  local_290 = (undefined1 *)0x0;
  local_288 = (int *)0x0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x398),uStack0000001c,&local_2f8,&local_28c
               ,local_2fc,auStack_29c,&local_300,&local_304);
  uVar1 = FUN_10001c20(local_28c);
  iVar8 = (int)(short)(uVar1 >> 2);
  if (iVar8 == 0) {
    iVar8 = -1;
    local_294 = &local_294;
  }
  else {
    FUN_100ef9b8(local_28c);
    local_294 = (undefined4 **)*local_28c;
  }
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_64 = _DAT_41820010;
  _DAT_41820010 = auStack_16c;
  iVar2 = FUN_10000090(auStack_16c);
  if (iVar2 == 0) {
    local_288 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),uStack0000001c)
    ;
    FUN_100ef088(0xfffffffe,**(undefined4 **)(local_334 + -0xe48),
                 **(undefined4 **)(local_334 + -0xed4));
    FUN_100db2f4();
    if (local_290 == (undefined1 *)0x0) {
      local_290 = (undefined1 *)&stack0x0000001c;
    }
    FUN_10117884(**(int **)(local_334 + -0xeac) +
                 (int)*(short *)(*(int *)**(int **)(local_334 + -0xeac) + 0x1c8),1);
    uVar3 = FUN_10000a98(local_2f8,0x3d0,1);
    uVar4 = FUN_10000a98(local_300,4000,1);
    uVar5 = FUN_10000a98(local_304,0x3fd0,1);
    uVar6 = FUN_10000a98(local_50,0x36c0,1);
    puVar7 = (undefined4 *)FUN_100b0368(auStack_4c,auStack_29c);
    FUN_10002a30(uVar3,iVar8,local_294,local_2f4,(int)local_2fc[0],*puVar7,uVar4,uVar5);
    FUN_100ef5f0(uVar3);
    FUN_100ef5f0(uVar4);
    FUN_100ef5f0(uVar5);
    FUN_100ef5f0(uVar6);
    FUN_10117884(**(int **)(local_334 + -0xeac) +
                 (int)*(short *)(*(int *)**(int **)(local_334 + -0xeac) + 0x1f0),1);
    param_1 = (int *)(uint)local_2f4[0];
    if (param_1 != (int *)0x0) {
      FUN_10117884((int)local_288 + (int)*(short *)(*local_288 + 0xb0),local_2f4);
    }
    _DAT_41820010 = local_64;
  }
  else {
    local_28c = (undefined4 *)FUN_100ef510(local_28c);
    local_288 = (int *)FUN_100f57c8(local_288);
    FUN_100db158((int)local_6c,local_68);
  }
  local_28c = (undefined4 *)FUN_100ef510(local_28c);
  if (param_1 == (int *)0x0) {
    FUN_100f57c8(local_288);
  }
  else {
    local_184 = 0;
    local_180 = 0;
    local_178 = 0;
    local_174 = 0;
    local_17c = _DAT_41820010;
    _DAT_41820010 = auStack_284;
    iVar8 = FUN_10000090(auStack_284);
    if (iVar8 == 0) {
      iVar8 = FUN_100e9174();
      *piStack00000020 = iVar8;
      FUN_10117884(*piStack00000020 + (int)*(short *)(*(int *)*piStack00000020 + 0x1d0),local_288);
      _DAT_41820010 = local_17c;
    }
    else {
      if (*piStack00000020 != 0) {
        iVar8 = FUN_100f57c8(*piStack00000020);
        *piStack00000020 = iVar8;
      }
      local_288 = (int *)FUN_100f57c8(local_288);
      FUN_100db158((int)local_184,local_180);
    }
  }
  return param_1;
}



// Function: FUN_100b8ac4 at 100b8ac4
// Size: 592 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8ac4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_18c;
  undefined1 auStack_168 [312];
  int local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  
  iVar1 = FUN_1011289c();
  while (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x490),iVar1);
    iVar1 = FUN_1011289c();
  }
  iVar1 = FUN_10001050();
  while (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x490),iVar1);
    iVar1 = FUN_10001050();
  }
  FUN_100b6350(auStack_168,param_1);
  piVar3 = (int *)0x0;
  if (_DAT_a89f0000[0x13] != 0) {
    piVar3 = *(int **)(_DAT_a89f0000[0x13] + 0x28);
  }
  piVar2 = (int *)FUN_100b6444(auStack_168);
  iVar1 = FUN_100ebf44(auStack_168);
  while (iVar1 != 0) {
    if ((piVar3 == (int *)0x0) || (piVar2 != piVar3)) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2c0));
    }
    piVar2 = (int *)FUN_100b6468(auStack_168);
    iVar1 = FUN_100ebf44(auStack_168);
  }
  FUN_100b63d8(auStack_168,2);
  local_2c = (int *)param_1[0x19];
  local_30 = *(int *)(local_18c + -0xe44);
  local_28 = local_2c;
  if (local_2c == (int *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_10117884((int)local_2c + (int)*(short *)(*local_2c + 0xb0));
  }
  FUN_10117884((int)*(short *)(local_30 + 0x10) + (int)&local_30);
  piVar3 = local_2c;
  iVar1 = FUN_100d9444(&local_30);
  while (iVar1 != 0) {
    FUN_100f57c8(piVar3);
    FUN_10117884((int)*(short *)(local_30 + 0x18) + (int)&local_30);
    piVar3 = local_28;
    iVar1 = FUN_100d9444(&local_30);
  }
  FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x198));
  _DAT_609d0000 = FUN_100f57c8(_DAT_609d0000);
  return;
}



// Function: FUN_100b8d14 at 100b8d14
// Size: 132 bytes

void FUN_100b8d14(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),param_2);
  if (piVar1 == (int *)0x0) {
    FUN_10003048(param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x740) + (int)piVar1);
  }
  return;
}



// Function: FUN_100b8dd8 at 100b8dd8
// Size: 296 bytes

int FUN_100b8dd8(int *param_1,int param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_3 == *(short *)(param_1 + 0x10)) {
    iVar2 = 1;
    if (0 < *(short *)((int)param_1 + 0x3e)) {
      iVar3 = FUN_10002628();
      if (*(int *)(param_2 + 0x1a) - param_1[0x12] < iVar3) {
        uVar1 = *(undefined4 *)(param_2 + 0x1e);
        piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
        iVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe8),
                             *(undefined4 *)((int)param_1 + 0x42),uVar1);
        if (iVar3 != 0) {
          iVar2 = (int)(short)(*(short *)((int)param_1 + 0x3e) + 1);
        }
      }
    }
    *(undefined4 *)((int)param_1 + 0x42) = *(undefined4 *)(param_2 + 0x1e);
    *(short *)(param_1 + 0x10) = param_3;
    *(short *)((int)param_1 + 0x3e) = (short)iVar2;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x42) = *(undefined4 *)(param_2 + 0x1e);
    *(short *)(param_1 + 0x10) = param_3;
    *(undefined2 *)((int)param_1 + 0x3e) = 1;
    iVar2 = 1;
  }
  return iVar2;
}



// Function: FUN_100b8f00 at 100b8f00
// Size: 72 bytes

void FUN_100b8f00(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x5c) +
                 (int)*(short *)(**(int **)(param_1 + 0x5c) + 0x180));
  }
  return;
}



// Function: FUN_100b8f48 at 100b8f48
// Size: 72 bytes

void FUN_100b8f48(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x60) +
                 (int)*(short *)(**(int **)(param_1 + 0x60) + 0x180));
  }
  return;
}



// Function: FUN_100b8f90 at 100b8f90
// Size: 104 bytes

void FUN_100b8f90(int *param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 4) < 0x18) {
      return;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250));
  }
  return;
}



// Function: FUN_100b928c at 100b928c
// Size: 400 bytes

void FUN_100b928c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_150 [312];
  
  piVar1 = (int *)FUN_100b4eac(0);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8),param_2,0);
  FUN_100ebf7c(auStack_150,param_1[0xb],0);
  piVar2 = (int *)FUN_100ec060(auStack_150);
  iVar3 = FUN_100ebf44(auStack_150);
  while (piVar5 = (int *)0x0, iVar3 != 0) {
    iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200));
    iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x160));
    piVar5 = piVar2;
    if (iVar4 == iVar3) break;
    piVar2 = (int *)FUN_100ec0e8(auStack_150);
    iVar3 = FUN_100ebf44(auStack_150);
  }
  if (piVar5 == (int *)0x0) {
    FUN_100f57c8(piVar1);
  }
  else {
    FUN_10117884(param_1[0xb] + (int)*(short *)(*(int *)param_1[0xb] + 0x180),piVar5);
    FUN_10117884((int)*(short *)(*piVar5 + 0x168) + (int)piVar5,piVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),piVar5);
  }
  FUN_100ebff4(auStack_150,2);
  return;
}



// Function: FUN_100b941c at 100b941c
// Size: 112 bytes

void FUN_100b941c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 - 0x29U < 4) {
    return;
  }
  FUN_100d9b64(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_100b960c at 100b960c
// Size: 180 bytes

void FUN_100b960c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar1 = *param_1;
    uVar2 = FUN_10000330(*(uint *)((int)param_2 + 0x16) & 0xff);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x478),uVar2);
  }
  else {
    FUN_100d9c74(param_1,param_2);
  }
  return;
}



// Function: FUN_100b96c0 at 100b96c0
// Size: 520 bytes

void FUN_100b96c0(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_2 + 0x26);
  if (sVar1 == 0x47) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = FUN_100f2680(0x6a);
    if (iVar2 != 0) {
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
      FUN_100da1d0(uVar3,0x6a);
    }
  }
  else if (sVar1 == 99) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = FUN_100f2680(0x68);
    if (iVar2 != 0) {
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
      FUN_100da1d0(uVar3,0x68);
    }
  }
  else if (sVar1 == 0x76) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = FUN_100f2680(0x69);
    if (iVar2 != 0) {
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
      FUN_100da1d0(uVar3,0x69);
    }
  }
  else if (sVar1 == 0x78) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = FUN_100f2680(0x67);
    if (iVar2 != 0) {
      uVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x340) + (int)param_1);
      FUN_100da1d0(uVar3,0x67);
    }
  }
  else if (sVar1 == 0x7a) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = FUN_100f2680(0x65);
    if (iVar2 != 0) {
      uVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x340) + (int)param_1);
      FUN_100da1d0(uVar3,0x65);
    }
  }
  else {
    FUN_100da080(param_1);
  }
  return;
}



// Function: FUN_100b98c8 at 100b98c8
// Size: 40 bytes

undefined4 FUN_100b98c8(void)

{
  FUN_100f535c();
  return 0;
}



// Function: FUN_100b98f0 at 100b98f0
// Size: 76 bytes

void FUN_100b98f0(int param_1)

{
  FUN_100db500(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),1,1,0,0);
  return;
}



// Function: FUN_100b993c at 100b993c
// Size: 112 bytes

void FUN_100b993c(undefined4 param_1,int param_2)

{
  if (param_2 - 1U < 0x29) {
    return;
  }
  FUN_100c6178(param_1,param_2);
  return;
}



// Function: FUN_100b9c98 at 100b9c98
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c98(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_100da394(param_1);
  FUN_10117884((int)_DAT_4bfdecc5 + (int)*(short *)(*_DAT_4bfdecc5 + 0xb0),
               (int)*(short *)((int)param_1 + 0x72));
  FUN_10117884((int)_DAT_4bfdecc5 + (int)*(short *)(*_DAT_4bfdecc5 + 0xb8),
               (int)*(short *)(param_1 + 0x1d));
  iVar1 = FUN_100f1264();
  FUN_100f27d0(1,1);
  FUN_100f27d0(0x24,(uint)((uint)(int)*(short *)(param_1 + 0x1c) < 2) -
                    ((int)*(short *)(param_1 + 0x1c) >> 0x1f));
  FUN_100f27d0(10,iVar1 == 0);
  FUN_100f27d0(0x14,iVar1 == 0);
  iVar1 = FUN_10001050();
  if ((iVar1 != 0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x3e0) + (int)param_1,iVar1), iVar2 == 0)) {
    FUN_100f27d0(0x1f,*(char *)(iVar1 + 0x70) != '\0');
  }
  return;
}



// Function: FUN_100b9dd8 at 100b9dd8
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9dd8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_134;
  undefined1 local_110 [256];
  
  local_110[0] = 0;
  FUN_100f12a8();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x530),local_110);
  FUN_100009f0(local_110,&DAT_7c0803a6,&DAT_7c0803a6,&DAT_7c0803a6);
  iVar1 = FUN_10001728(0x53545223,999);
  *(bool *)*(undefined4 *)(local_134 + -0xb8) = iVar1 != 0;
  if (iVar1 != 0) {
    **(undefined2 **)(local_134 + -0xc4) = 1;
    uVar2 = FUN_10001a88();
    **(undefined4 **)(local_134 + -200) = uVar2;
    **(undefined2 **)(local_134 + -0xcc) = 300;
    FUN_100b1c84(&DAT_7c0803a6);
    _DAT_80010060 = FUN_10001ae8();
    FUN_100db26c();
    FUN_100d8c9c(0xc9,*(undefined4 *)(local_134 + -0xe40));
    _DAT_80010060 = FUN_100ef510(_DAT_80010060);
  }
  else {
    FUN_100d8e3c(0xc9);
  }
  return;
}



// Function: FUN_100b9ef4 at 100b9ef4
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ef4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100cae44(0);
  FUN_100caee0();
  *FUN_10116a60 = uVar1;
  return;
}



// Function: FUN_100b9f3c at 100b9f3c
// Size: 388 bytes

void FUN_100b9f3c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_28 [5];
  
  FUN_100ef658(param_3);
  FUN_100ee970(local_28);
  FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
  iVar1 = local_28[1];
  iVar2 = FUN_100eea60(local_28);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if ((((piVar3 != (int *)0x0) &&
         (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x668) + (int)piVar3), iVar2 != 0)) &&
        (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x568) + (int)piVar3), iVar2 != 0)) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x3a8) + (int)piVar3), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,*(undefined4 *)(iVar1 + 0x18));
      FUN_10000108(param_3,*(undefined4 *)(iVar1 + 0x18),param_3);
      FUN_10117884((int)*(short *)(*piVar3 + 0x2c8) + (int)piVar3,*(undefined4 *)(iVar1 + 0x18));
    }
    FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
    iVar1 = local_28[1];
    iVar2 = FUN_100eea60(local_28);
  }
  return;
}



// Function: FUN_100ba0c4 at 100ba0c4
// Size: 388 bytes

void FUN_100ba0c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_28 [5];
  
  FUN_100ef658(param_3);
  FUN_100ee970(local_28);
  FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
  iVar1 = local_28[1];
  iVar2 = FUN_100eea60(local_28);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if ((((piVar3 != (int *)0x0) &&
         (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x668) + (int)piVar3), iVar2 != 0)) &&
        (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x578) + (int)piVar3), iVar2 != 0)) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x3a8) + (int)piVar3), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,*(undefined4 *)(iVar1 + 0x18));
      FUN_10000108(param_3,*(undefined4 *)(iVar1 + 0x18),param_3);
      FUN_10117884((int)*(short *)(*piVar3 + 0x2c8) + (int)piVar3,*(undefined4 *)(iVar1 + 0x18));
    }
    FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
    iVar1 = local_28[1];
    iVar2 = FUN_100eea60(local_28);
  }
  return;
}



// Function: FUN_100ba248 at 100ba248
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba248(undefined4 param_1,short param_2,short param_3,short param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  short sVar4;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_184;
  undefined1 auStack_150 [256];
  short local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  
  local_50 = 0;
  local_4c = 0;
  local_48 = (undefined1 *)0x0;
  local_44 = 0;
  local_40 = 0;
  sVar4 = FUN_100014b8();
  local_48 = _DAT_41820010;
  _DAT_41820010 = auStack_150;
  iVar1 = FUN_10000090(auStack_150);
  if (iVar1 == 0) {
    FUN_10000318((int)**(short **)(local_184 + -0xb4));
    uVar2 = FUN_100b0574(param_7);
    uVar3 = FUN_100b0384(param_6);
    FUN_10001578(0x68646c67,(int)param_2,(int)param_3,(int)param_4,auStack_38,uVar3,uVar2,auStack_34
                );
    FUN_100db2f4();
    _DAT_41820010 = local_48;
  }
  else {
    FUN_10000318((int)sVar4);
    FUN_100db158((int)local_50,local_4c);
  }
  FUN_10000318((int)sVar4);
  return;
}



// Function: FUN_100ba380 at 100ba380
// Size: 400 bytes

int FUN_100ba380(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_18 [3];
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_100b02d0(local_18);
    FUN_100b0384(local_18);
    FUN_10001518();
    FUN_100b0384(local_18);
    FUN_10002fd0();
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x470) + (int)param_1);
    bVar1 = false;
    if ((iVar2 != 0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x500) + (int)param_1), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x440) + (int)param_1,local_18[0]);
      bVar1 = true;
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x468));
    if (iVar2 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x428) + (int)param_1,local_18[0]);
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x500));
      if (iVar2 == 0) {
        FUN_100005a0(param_1[0x1f],param_1[0x1e]);
      }
      else {
        FUN_10002be0(param_1[0x1f],param_1[0x20],param_1[0x1e]);
      }
    }
    FUN_1010573c(local_18[0],param_1[0x1e]);
    iVar2 = param_1[0x1e];
  }
  return iVar2;
}



// Function: FUN_100ba510 at 100ba510
// Size: 288 bytes

undefined4 FUN_100ba510(int *param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [28];
  
  uVar3 = 0;
  if (*(short *)(param_1 + 0x1c) < 2) {
    FUN_10117884((int)*(short *)(*param_1 + 0x508) + (int)param_1,0);
  }
  iVar1 = FUN_100003c0((int)(short)(param_2 | 0x8000),auStack_40,param_3,param_4);
  if (iVar1 != 0) {
    uVar2 = FUN_100f5754(0);
    uVar3 = FUN_100d91e8(0);
    FUN_100f5754(uVar2);
    FUN_100d9278(uVar3,param_1,auStack_40);
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x508) + (int)param_1,1);
  }
  return uVar3;
}



// Function: FUN_100ba6c8 at 100ba6c8
// Size: 260 bytes

int * FUN_100ba6c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_20 [4];
  
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar3 = local_20[1];
  iVar1 = FUN_100eea60(local_20);
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar3);
    if (((piVar2 != (int *)0x0) &&
        (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x668) + (int)piVar2), iVar3 != 0)) &&
       (*(char *)((int)piVar2 + 0xb6) == '\0')) break;
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar3 = local_20[1];
    iVar1 = FUN_100eea60(local_20);
  }
  return piVar2;
}



// Function: FUN_100ba810 at 100ba810
// Size: 312 bytes

int * FUN_100ba810(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_28 [5];
  
  FUN_100ee970(local_28);
  FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
  iVar3 = local_28[1];
  iVar1 = FUN_100eea60(local_28);
  do {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar3);
    if (((piVar2 != (int *)0x0) &&
        (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x668) + (int)piVar2), iVar3 != 0)) &&
       (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x680) + (int)piVar2), iVar3 != 0)) {
      if (*(char *)((int)piVar2 + 0xb6) == '\0') {
        return piVar2;
      }
      if (param_2 != '\0') {
        return piVar2;
      }
    }
    FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
    iVar3 = local_28[1];
    iVar1 = FUN_100eea60(local_28);
  } while( true );
}



// Function: FUN_100ba98c at 100ba98c
// Size: 424 bytes

int * FUN_100ba98c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_20 [4];
  
  local_20[2] = *(int **)(param_1 + 0x28);
  local_20[0] = (int *)&DAT_90010008;
  local_20[1] = (int *)FUN_10117884((int)local_20[2] + (int)*(short *)(*local_20[2] + 0xa8));
  iVar1 = FUN_10117884((int)*(short *)(local_20[0] + 2) + (int)local_20);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10117884((int)local_20[2] + (int)*(short *)(*local_20[2] + 0x120),
                                 local_20[1]);
  }
  iVar1 = FUN_100b633c(local_20);
  while ((piVar3 = (int *)0x0, iVar1 != 0 &&
         (iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8)), piVar3 = piVar2,
         iVar1 == 0))) {
    FUN_10117884((int)*(short *)(local_20[0] + 6) + (int)local_20);
    iVar1 = FUN_10117884((int)*(short *)(local_20[0] + 2) + (int)local_20);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_10117884((int)local_20[2] + (int)*(short *)(*local_20[2] + 0x120),
                                   local_20[1]);
    }
    iVar1 = FUN_100b633c(local_20);
  }
  if ((piVar3 != (int *)0x0) &&
     (iVar1 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xc0)), iVar1 == 0)) {
    FUN_10117884((int)*(int **)(param_1 + 0x28) +
                 (int)*(short *)(**(int **)(param_1 + 0x28) + 0x180),piVar3);
  }
  return piVar3;
}



// Function: FUN_100bab34 at 100bab34
// Size: 440 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100bab34(undefined4 param_1,int param_2,short param_3,undefined1 *param_4,
                undefined1 *param_5)

{
  undefined1 uVar3;
  int iVar1;
  int *piVar2;
  undefined1 uVar4;
  int iVar5;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar5 = (int)param_3;
  uVar3 = FUN_100f1574(0);
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = _DAT_41820010;
  _DAT_41820010 = auStack_13c;
  iVar1 = FUN_10000090(auStack_13c);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10001728(0x57494e44,iVar5);
    FUN_100db2a4();
    FUN_10002778(piVar2);
    iVar1 = *piVar2;
    *(undefined1 *)(iVar1 + 10) = 0;
    *param_5 = *(undefined1 *)(iVar1 + 0xc);
    if ((*(short *)(iVar1 + 8) == 0) || (*(short *)(iVar1 + 8) == 8)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *param_4 = uVar4;
    iVar1 = FUN_1010fb3c();
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    iVar5 = FUN_10002a18(iVar5,param_2,iVar1);
    FUN_100db26c(iVar5);
    FUN_100f1574(uVar3);
    _DAT_41820010 = local_34;
  }
  else {
    FUN_100f1574(uVar3);
    FUN_100db158((int)local_3c,local_38);
  }
  iVar1 = FUN_100f0eec();
  if (iVar1 == 0) {
    iVar5 = FUN_100ecdec(iVar5,param_2 == 0);
    FUN_100db158(0xffffff94,0);
  }
  return iVar5;
}



// Function: FUN_100bad1c at 100bad1c
// Size: 240 bytes

void FUN_100bad1c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),
                               *(undefined4 *)(param_2 + 0x16));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
  }
  else {
    bVar3 = (*(ushort *)(param_2 + 0x22) & 1) != 0;
    if ((*(char *)((int)piVar1 + 0xb6) != '\0') &&
       (piVar2 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x328) + (int)param_1),
       piVar2 != (int *)0x0)) {
      FUN_10001080(piVar2[0x20],bVar3);
      piVar1 = piVar2;
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x318),bVar3);
  }
  return;
}



// Function: FUN_100bae0c at 100bae0c
// Size: 256 bytes

void FUN_100bae0c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *local_20 [5];
  
  local_20[1] = *(int **)(param_1 + 100);
  local_20[0] = (int *)&DAT_4e800020;
  local_20[2] = local_20[1];
  if (local_20[1] == (int *)0x0) {
    local_20[3] = (int *)0x0;
  }
  else {
    local_20[3] = (int *)FUN_10117884((int)*(short *)(*local_20[1] + 0xb0) + (int)local_20[1]);
  }
  FUN_10117884((int)*(short *)(local_20[0] + 4) + (int)local_20);
  piVar1 = local_20[1];
  iVar2 = FUN_100d9444(local_20);
  while ((iVar2 != 0 &&
         (iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xc0),param_2), iVar2 == 0)))
  {
    FUN_10117884((int)*(short *)(local_20[0] + 6) + (int)local_20);
    piVar1 = local_20[2];
    iVar2 = FUN_100d9444(local_20);
  }
  return;
}



// Function: FUN_100baf0c at 100baf0c
// Size: 100 bytes

void FUN_100baf0c(undefined4 param_1,int param_2)

{
  undefined4 local_10 [2];
  
  if ((short)((uint)*(undefined4 *)(param_2 + 0x16) >> 0x10) != 0) {
    FUN_10001098(local_10,0x70,0x50);
    FUN_100010b0(local_10[0],*(undefined4 *)(param_2 + 0x16));
  }
  return;
}



// Function: FUN_100baf70 at 100baf70
// Size: 56 bytes

void FUN_100baf70(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x260));
  return;
}



// Function: FUN_100bafac at 100bafac
// Size: 120 bytes

void FUN_100bafac(int *param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  local_18 = *(undefined4 *)(param_2 + 0x14);
  uStack_14 = *(undefined4 *)(param_2 + 0x18);
  uStack_10 = *(undefined4 *)(param_2 + 0x1c);
  uStack_c = *(undefined4 *)(param_2 + 0x20);
  iVar1 = FUN_100010c8(&local_18);
  if (iVar1 != -0x6ac) {
    FUN_100db2f4(iVar1);
  }
  return;
}



// Function: FUN_100bb024 at 100bb024
// Size: 212 bytes

void FUN_100bb024(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x108),param_2);
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
  if (iVar2 == 0) {
    uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
    FUN_100d9ff0(uVar3,param_2);
  }
  else {
    uVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x340) + (int)param_1);
    FUN_100d9be4(uVar3,param_2);
  }
  return;
}



// Function: FUN_100bb0f8 at 100bb0f8
// Size: 144 bytes

void FUN_100bb0f8(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_2 + 0x10) = 0;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x108),param_2);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
  FUN_100da0e0(uVar2,param_2);
  return;
}



// Function: FUN_100bb188 at 100bb188
// Size: 580 bytes

void FUN_100bb188(int *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar6;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_6c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  short local_34;
  short local_32;
  int local_2c;
  int local_28;
  
  iVar1 = FUN_100010e0(*(undefined4 *)(param_2 + 0x1e),&local_38);
  uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4a8),param_2,iVar1);
  *(undefined2 *)(param_2 + 0x28) = uVar6;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_38);
  if (iVar1 != 1) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x318) + (int)param_1);
    if ((iVar3 != 0) &&
       (piVar4 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x330) + (int)param_1,0),
       piVar2 != piVar4)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1,2);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        local_48 = *(undefined4 *)(param_2 + 0x14);
        uStack_44 = *(undefined4 *)(param_2 + 0x18);
        uStack_40 = *(undefined4 *)(param_2 + 0x1c);
        uStack_3c = *(undefined4 *)(param_2 + 0x20);
        FUN_100010f8(&local_48,local_38);
      }
      else if (piVar2 == (int *)0x0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
      }
      else {
        iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
        if (iVar1 != 0) {
          local_34 = *(short *)(param_2 + 0x1e);
          local_2c = (int)local_34;
          local_32 = *(short *)(param_2 + 0x20);
          local_28 = (int)local_32;
          FUN_10117884((int)*(short *)(*piVar2 + 0x2b8) + (int)piVar2,&local_2c);
          FUN_10117884((int)*(short *)(*piVar2 + 0x540) + (int)piVar2,&local_2c,param_2,
                       **(undefined4 **)(local_6c + -0xe34));
        }
      }
      goto LAB_100bb3ac;
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  FUN_100014a0(*(int *)(local_6c + -0xb0) + 0x5e);
  iVar1 = *param_1;
  uVar5 = FUN_10001110(*(undefined4 *)(param_2 + 0x1e));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x478),uVar5);
LAB_100bb3ac:
  iVar1 = FUN_10001a88();
  param_1[0x12] = iVar1;
  return;
}



// Function: FUN_100bb3cc at 100bb3cc
// Size: 308 bytes

void FUN_100bb3cc(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_4c;
  undefined4 local_28;
  short local_24;
  short local_22;
  int local_1c;
  int local_18;
  
  param_1[0x12] = *(int *)(param_2 + 0x1a);
  iVar1 = FUN_100010e0(*(undefined4 *)(param_2 + 0x1e),&local_28);
  if ((iVar1 != 1) && (iVar1 != 2)) {
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_28);
    if (piVar2 == (int *)0x0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
    }
    else {
      iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x3a8) + (int)piVar2);
      if (iVar1 != 0) {
        local_24 = *(short *)(param_2 + 0x1e);
        local_1c = (int)local_24;
        local_22 = *(short *)(param_2 + 0x20);
        local_18 = (int)local_22;
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_1c);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x548),&local_1c,param_2,
                     **(undefined4 **)(local_4c + -0xe34));
      }
    }
  }
  return;
}



// Function: FUN_100bb500 at 100bb500
// Size: 460 bytes

void FUN_100bb500(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_2 + 0x16) >> 0x18;
  if (uVar1 == 1) {
    bVar3 = (*(uint *)(param_2 + 0x16) & 2) != 0;
    if ((*(uint *)(param_2 + 0x16) & 1) == 0) {
      FUN_1011289c();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c0),bVar3);
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x330),0);
      if (iVar2 != 0) {
        FUN_10113c58(*(undefined4 *)(iVar2 + 0x80));
      }
    }
    else {
      iVar2 = FUN_1011289c();
      if (iVar2 != 0) {
        FUN_1011289c();
        FUN_10113c58();
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8),bVar3);
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x328));
      if (iVar2 != 0) {
        FUN_10113f5c(*(undefined4 *)(iVar2 + 0x80));
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x450));
  }
  else if (uVar1 == 0xfa) {
    *(undefined1 *)(param_2 + 0x10) = 0;
    iVar2 = FUN_100033c0(*(undefined4 *)(param_2 + 0x1e),param_1[0x1f]);
    if (iVar2 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
    }
    iVar2 = FUN_100033c0(*(undefined4 *)(param_2 + 0x1e),param_1[0x20]);
    if (iVar2 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
    }
  }
  return;
}



// Function: FUN_100bb6e8 at 100bb6e8
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb6e8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
    bVar1 = true;
    if (piVar3 != (int *)0x0) {
      iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 400) + (int)piVar3,param_2);
      bVar1 = iVar2 == 0;
    }
    if (bVar1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x278),param_2);
    }
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    FUN_100db158((int)local_28,local_24);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  return;
}



// Function: FUN_100bb820 at 100bb820
// Size: 152 bytes

void FUN_100bb820(int *param_1,int param_2)

{
  int *piVar1;
  
  *(undefined1 *)(param_2 + 0x10) = 0;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),
                               *(undefined4 *)(param_2 + 0x16));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
  }
  return;
}



// Function: FUN_100bb8b8 at 100bb8b8
// Size: 640 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb8b8(int *param_1,char param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int local_17c;
  undefined1 auStack_158 [256];
  short local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_40 [4];
  int *local_30 [4];
  
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_50 = _DAT_41820010;
  _DAT_41820010 = auStack_158;
  iVar3 = FUN_10000090(auStack_158);
  if (iVar3 == 0) {
    if (param_2 == '\0') {
      if ((**(char **)(local_17c + -0xe54) == '\0') && (iVar3 = FUN_100f1264(), iVar3 != 0)) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e0));
      }
      else {
        iVar3 = FUN_10001a88();
        param_1[0x13] = iVar3;
      }
    }
    local_30[1] = (int *)param_1[0x19];
    local_30[0] = (int *)&DAT_4e800020;
    local_30[2] = local_30[1];
    if (local_30[1] == (int *)0x0) {
      local_30[3] = (int *)0x0;
    }
    else {
      local_30[3] = (int *)FUN_10117884((int)local_30[1] + (int)*(short *)(*local_30[1] + 0xb0));
    }
    FUN_10117884((int)*(short *)(local_30[0] + 4) + (int)local_30);
    piVar1 = local_30[1];
    iVar3 = FUN_100d9444(local_30);
    while (iVar3 != 0) {
      FUN_100d9eec(piVar1,param_2);
      FUN_10117884((int)*(short *)(local_30[0] + 6) + (int)local_30);
      piVar1 = local_30[2];
      iVar3 = FUN_100d9444(local_30);
    }
    local_40[1] = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
    local_40[0] = (int *)&DAT_4e800020;
    local_40[2] = local_40[1];
    if (local_40[1] == (int *)0x0) {
      local_40[3] = (int *)0x0;
    }
    else {
      local_40[3] = (int *)FUN_10117884((int)*(short *)(*local_40[1] + 0xb0) + (int)local_40[1]);
    }
    FUN_10117884((int)*(short *)(local_40[0] + 4) + (int)local_40);
    piVar1 = local_40[1];
    iVar3 = FUN_100d9444(local_40);
    while (puVar2 = local_50, iVar3 != 0) {
      FUN_100d9eec(piVar1,param_2);
      FUN_10117884((int)*(short *)(local_40[0] + 6) + (int)local_40);
      piVar1 = local_40[2];
      iVar3 = FUN_100d9444(local_40);
    }
  }
  else {
    **(undefined1 **)(local_17c + -0xe50) = 1;
    FUN_100db158((int)local_58,local_54);
    puVar2 = _DAT_41820010;
  }
  _DAT_41820010 = puVar2;
  return;
}



// Function: FUN_100bbb38 at 100bbb38
// Size: 576 bytes

undefined4 FUN_100bbb38(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *local_48 [4];
  int *local_38 [4];
  
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    local_38[1] = (int *)param_1[0x19];
    local_38[0] = (int *)&DAT_4e800020;
    uVar2 = 0x7fffffff;
    local_38[2] = local_38[1];
    if (local_38[1] == (int *)0x0) {
      local_38[3] = (int *)0x0;
    }
    else {
      local_38[3] = (int *)FUN_10117884((int)*(short *)(*local_38[1] + 0xb0) + (int)local_38[1],
                                        param_2);
    }
    FUN_10117884((int)*(short *)(local_38[0] + 4) + (int)local_38);
    piVar1 = local_38[1];
    iVar3 = FUN_100d9444(local_38);
    while (iVar3 != 0) {
      iVar3 = FUN_10001a88();
      iVar4 = FUN_100d9d50(piVar1);
      uVar2 = FUN_100f0334(0,iVar4 - iVar3,uVar2);
      FUN_10117884((int)*(short *)(local_38[0] + 6) + (int)local_38);
      piVar1 = local_38[2];
      iVar3 = FUN_100d9444(local_38);
    }
    local_48[1] = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
    local_48[0] = (int *)&DAT_4e800020;
    local_48[2] = local_48[1];
    if (local_48[1] == (int *)0x0) {
      local_48[3] = (int *)0x0;
    }
    else {
      local_48[3] = (int *)FUN_10117884((int)*(short *)(*local_48[1] + 0xb0) + (int)local_48[1]);
    }
    FUN_10117884((int)*(short *)(local_48[0] + 4) + (int)local_48);
    piVar1 = local_48[1];
    iVar3 = FUN_100d9444(local_48);
    while (iVar3 != 0) {
      iVar3 = FUN_10001a88();
      iVar4 = FUN_100d9d50(piVar1);
      uVar2 = FUN_100f0334(0,iVar4 - iVar3,uVar2);
      FUN_10117884((int)*(short *)(local_48[0] + 6) + (int)local_48);
      piVar1 = local_48[2];
      iVar3 = FUN_100d9444(local_48);
    }
  }
  return uVar2;
}



// Function: FUN_100bbdf8 at 100bbdf8
// Size: 244 bytes

undefined4 FUN_100bbdf8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = FUN_10001050();
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    iVar1 = FUN_100efbf0(iVar1);
    if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x330),0);
    if ((piVar4 == (int *)0x0) ||
       (iVar1 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x820)), iVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// Function: FUN_100bbeec at 100bbeec
// Size: 92 bytes

void FUN_100bbeec(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = FUN_100d9a64(param_2,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  else {
    uVar1 = FUN_100d9a18(param_2,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  return;
}



// Function: FUN_100bbf84 at 100bbf84
// Size: 124 bytes

undefined1 FUN_100bbf84(int param_1)

{
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  
  FUN_100011d0(auStack_1c);
  FUN_100db2f4();
  local_24 = *(undefined4 *)(param_1 + 0x32);
  uStack_20 = *(undefined4 *)(param_1 + 0x36);
  FUN_100011e8(auStack_1c,&local_24,local_28);
  FUN_100db2f4();
  return local_28[0];
}



// Function: FUN_100bc020 at 100bc020
// Size: 108 bytes

void FUN_100bc020(int *param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar1 == 0) {
    local_10 = *(undefined4 *)((int)param_1 + 0x32);
    uStack_c = *(undefined4 *)((int)param_1 + 0x36);
    FUN_10001200(&local_10);
    FUN_100db2f4();
  }
  return;
}



// Function: FUN_100bc08c at 100bc08c
// Size: 44 bytes

void FUN_100bc08c(void)

{
  FUN_10002f40();
  return;
}



// Function: FUN_100bc0cc at 100bc0cc
// Size: 88 bytes

void FUN_100bc0cc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
  return;
}



// Function: FUN_100bc124 at 100bc124
// Size: 56 bytes

void FUN_100bc124(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_10000138(*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}



// Function: FUN_100bc15c at 100bc15c
// Size: 148 bytes

void FUN_100bc15c(int *param_1)

{
  int iVar1;
  
  if (param_1[0x20] != 0) {
    FUN_10000138(param_1[0x20]);
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (((iVar1 != 0) && (iVar1 = FUN_10003750(), iVar1 != 0)) &&
     (iVar1 = FUN_10002fe8(), iVar1 != -0x35e)) {
    FUN_100db2f4(iVar1);
  }
  return;
}



// Function: FUN_100bc200 at 100bc200
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc200(void)

{
  if (_DAT_60bc0000 != (int *)0x0) {
    FUN_10117884((int)_DAT_60bc0000 + (int)*(short *)(*_DAT_60bc0000 + 0x3b8));
  }
  return;
}



// Function: FUN_100bc24c at 100bc24c
// Size: 88 bytes

undefined4 FUN_100bc24c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10000060(*(undefined4 *)(param_1 + 0x7c));
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x3b) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100bc2a4 at 100bc2a4
// Size: 40 bytes

void FUN_100bc2a4(int param_1)

{
  FUN_10000060(*(undefined4 *)(param_1 + 0x80));
  return;
}



// Function: FUN_100bc2cc at 100bc2cc
// Size: 208 bytes

void FUN_100bc2cc(undefined4 param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined4 local_10;
  
  FUN_100daf38(param_1,param_2);
  sVar1 = *(short *)(param_2 + 5);
  if (((sVar1 == 3) || (sVar1 == 4)) || (sVar1 == 5)) {
    iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
    if (iVar3 != 0) {
      uVar5 = *(ushort *)((int)param_2 + 0x22);
      uVar2 = *(ushort *)((int)param_2 + 0x26);
      local_10 = 0;
      uVar4 = FUN_10002160(0x26);
      uVar5 = FUN_10002ca0(uVar4,(int)(short)(uVar5 & 0xfe00 | uVar2 | 0x80),&local_10);
      *(ushort *)(param_2 + 9) = uVar5 & 0xff;
      if ((uVar5 & 0xff) == 0) {
        *(ushort *)(param_2 + 9) = uVar5 & 0x10;
      }
    }
  }
  return;
}



// Function: FUN_100bc3a4 at 100bc3a4
// Size: 104 bytes

void FUN_100bc3a4(int *param_1)

{
  char cVar1;
  
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  cVar1 = *(char *)(param_1 + 0xf);
  while (cVar1 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x300),1);
    cVar1 = *(char *)(param_1 + 0xf);
  }
  return;
}



// Function: FUN_100bc40c at 100bc40c
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc40c(void)

{
  if (_DAT_a89f0000 != (int *)0x0) {
    FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1a0));
  }
  return;
}



// Function: FUN_100bc460 at 100bc460
// Size: 500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc460(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_234 [256];
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = (int)(short)((uint)param_2 >> 0x10);
  if (iVar3 != 0) {
    iVar1 = FUN_100f2704(iVar3,(int)(short)param_2);
    if ((iVar1 < 0) && (iVar3 == 1)) {
      local_234[0] = 0;
      uVar2 = FUN_100f2214(1);
      FUN_10001500(uVar2,(int)(short)param_2,local_234);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f8),local_234);
    }
    else if ((iVar1 < 0x65) ||
            ((0x6a < iVar1 || (iVar3 = FUN_100015c0((int)(short)((short)iVar1 + -0x65)), iVar3 == 0)
             ))) {
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_2c = _DAT_41820010;
      _DAT_41820010 = auStack_134;
      iVar3 = FUN_10000090(auStack_134);
      if (iVar3 == 0) {
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),1);
        }
        uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
        FUN_100da1d0(uVar2,iVar1);
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



// Function: FUN_100bc654 at 100bc654
// Size: 88 bytes

void FUN_100bc654(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10 [2];
  
  FUN_10000660(local_10);
  FUN_100b1c84(param_2);
  FUN_100034b0();
  FUN_10000198(local_10[0]);
  return;
}



// Function: FUN_100bc6ac at 100bc6ac
// Size: 464 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100bc6ac(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_240 [256];
  int *local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_140 = (int *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = _DAT_41820010;
  _DAT_41820010 = auStack_13c;
  iVar1 = FUN_10000090(auStack_13c);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x378),param_2,0,
                         *(undefined4 *)(iVar1 + 0x37c));
    local_140 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x368),uVar2,0);
    FUN_100db26c();
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x250));
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 600),0);
    local_240[0] = 0;
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x290),local_240);
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x318),local_240);
    FUN_100f12a8();
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x260),0);
    _DAT_41820010 = local_34;
  }
  else {
    if (local_140 != (int *)0x0) {
      local_140 = (int *)FUN_100f57c8(local_140);
    }
    FUN_100db22c((int)local_3c,local_38,0x820005);
    FUN_100db158((int)local_3c,local_38);
  }
  return local_140;
}



// Function: FUN_100bc87c at 100bc87c
// Size: 1224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100bc87c(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  short local_3f8;
  undefined1 auStack_3f4 [312];
  undefined1 local_2bc [256];
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  byte local_1b0 [64];
  int *local_170;
  undefined1 auStack_16c [256];
  short local_6c;
  int local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_54;
  int local_50;
  
  local_170 = (int *)0x0;
  local_54 = (int *)0x0;
  local_1b4 = 0;
  local_3f8 = 0;
  local_50 = 0;
  FUN_100ebf7c(auStack_3f4,param_3,1);
  local_54 = (int *)FUN_100ec060(auStack_3f4);
  iVar1 = FUN_100ebf44(auStack_3f4);
  if (iVar1 != 0) {
    do {
      local_170 = (int *)0x0;
      local_1b4 = 0;
      local_1b0[0] = 0;
      FUN_10117884((int)local_54 + (int)*(short *)(*local_54 + 0x198),local_1b0);
      FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x180),local_54);
      local_6c = 0;
      local_68 = 0;
      local_60 = 0;
      local_5c = 0;
      local_64 = _DAT_41820010;
      _DAT_41820010 = auStack_16c;
      iVar1 = FUN_10000090(auStack_16c);
      if (iVar1 == 0) {
        FUN_100f12e4(&local_1b8,&local_1bc);
        FUN_100f13e8(local_1b8,
                     ((int)local_1bc >> 1) + (uint)((int)local_1bc < 0 && (local_1bc & 1) != 0));
        piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x358),local_54);
        iVar1 = FUN_10117884((int)local_54 + (int)*(short *)(*local_54 + 0x228));
        if ((piVar2 == (int *)0x0) || (iVar1 != 0)) {
          iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x348),param_2,local_54);
          piVar2 = local_54;
          if (iVar3 == 0) {
            FUN_100db158(0xffffb1da,0);
          }
          else {
            local_54 = (int *)0x0;
            iVar3 = *param_1;
            uVar4 = FUN_10117884((int)*(short *)(iVar3 + 0x378) + (int)param_1,param_2,piVar2,0,
                                 *(undefined4 *)(iVar3 + 0x37c));
            local_170 = (int *)FUN_10117884((int)*(short *)(iVar3 + 0x368) + (int)param_1,uVar4,
                                            piVar2);
            FUN_100db26c();
            if (iVar1 == 0) {
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x278),0);
            }
            else {
              local_1b4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),param_2);
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x280),local_1b4);
              local_54 = (int *)0x0;
              local_1b4 = 0;
            }
            FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 600),0);
            if (iVar1 != 0) {
              local_2bc[0] = 0;
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x290),local_2bc);
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x318),local_2bc);
            }
            FUN_100f12a8();
            FUN_100f13e8(local_1b8,local_1bc);
            FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x260),0);
          }
        }
        else {
          FUN_10117884((int)*(short *)(*piVar2 + 0x268) + (int)piVar2,param_2,local_170);
          local_54 = (int *)FUN_100f57c8(local_54);
          FUN_100f13e8(local_1b8,local_1bc);
        }
        _DAT_41820010 = local_64;
      }
      else {
        if (local_68 == 0) {
          FUN_100012d8(local_1b0,&DAT_609e0000,local_1b0[0] + 1);
        }
        if (local_170 == (int *)0x0) {
          local_54 = (int *)FUN_100f57c8(local_54);
        }
        else {
          local_170 = (int *)FUN_100f57c8(local_170);
        }
        local_1b4 = FUN_100f57c8(local_1b4);
        FUN_100f13e8(local_1b8,local_1bc);
        local_3f8 = local_6c;
        local_50 = local_68;
        if (local_68 == 0) {
          local_50 = 0x820006;
        }
      }
      local_54 = (int *)FUN_100ec0e8(auStack_3f4);
      iVar1 = FUN_100ebf44(auStack_3f4);
    } while ((iVar1 != 0) && (local_3f8 == 0));
  }
  FUN_100ebff4(auStack_3f4,2);
  if (local_3f8 != 0) {
    FUN_100db158((int)local_3f8,local_50);
  }
  return local_170;
}



// Function: FUN_100bcd44 at 100bcd44
// Size: 84 bytes

void FUN_100bcd44(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0));
  }
  return;
}



// Function: FUN_100bce04 at 100bce04
// Size: 424 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bce04(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int local_154;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(undefined1 *)((int)param_1 + 0x31);
  *(undefined1 *)((int)param_1 + 0x31) = param_2;
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar3 = FUN_10000090(auStack_12c);
  if (iVar3 == 0) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x1f8) + (int)param_1);
    if (iVar3 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x498) + (int)param_1,iVar3);
    }
    if (*(char *)((int)param_1 + 0x56) != '\0') {
      FUN_10117884(**(int **)(local_154 + -0xeac) +
                   (int)*(short *)(*(int *)**(int **)(local_154 + -0xeac) + 0x1d8));
      FUN_10117884((int)*(short *)(*param_1 + 0x4f8) + (int)param_1);
    }
    _DAT_41820010 = local_24;
    sVar2 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      **(undefined1 **)(local_154 + -0xe50) = 0;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x31) = uVar1;
    sVar2 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      if (local_2c != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),(int)local_2c,local_28);
      }
      FUN_100f2204();
    }
    else {
      FUN_100db158((int)local_2c,local_28);
    }
  }
  *(undefined1 *)((int)param_1 + 0x31) = uVar1;
  return;
}



// Function: FUN_100bcfac at 100bcfac
// Size: 484 bytes

bool FUN_100bcfac(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_4c;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_100014d0((int)*(short *)(param_1 + 0x15),auStack_28);
  uVar2 = 0;
  uVar3 = 0;
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x488) + (int)param_1);
    iVar1 = FUN_100014d0((int)*(short *)(param_1 + 0x15),auStack_28);
    if (iVar1 == 0) {
      uVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x3f8) + (int)param_1);
      iVar1 = FUN_100014d0((int)*(short *)(param_1 + 0x15),auStack_28);
      if (iVar1 == 0) {
        uVar2 = FUN_10117884((int)*(short *)(*param_1 + 1000) + (int)param_1,param_2);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  FUN_10002e68(0);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x248),
                       (int)*(short *)(param_1 + 0x15),uVar2,uVar3);
  if (iVar1 != 0) {
    if (*(char *)((int)param_1 + 0x3a) == '\x01') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),2);
      *(undefined1 *)((int)param_1 + 0x3a) = 0;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x498),iVar1);
    if (*(char *)((int)param_1 + 0x56) != '\0') {
      FUN_10117884(**(int **)(local_4c + -0xeac) +
                   (int)*(short *)(*(int *)**(int **)(local_4c + -0xeac) + 0x1d8));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4f8));
    }
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),
                 *(undefined1 *)((int)param_1 + 0x3a));
    *(undefined1 *)((int)param_1 + 0x3a) = 1;
  }
  return iVar1 != 0;
}



// Function: FUN_100bd190 at 100bd190
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd190(int param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
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
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0));
    if (iVar1 != 0) {
      FUN_10117884((int)*(int **)(param_1 + 0x28) +
                   (int)*(short *)(**(int **)(param_1 + 0x28) + 0x150),param_2);
    }
    _DAT_41820010 = local_20;
  }
  else {
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    if (iVar1 != 0) {
      FUN_100f57c8(param_2);
    }
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100bd284 at 100bd284
// Size: 68 bytes

void FUN_100bd284(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200));
  }
  return;
}



// Function: FUN_100bd2c8 at 100bd2c8
// Size: 56 bytes

void FUN_100bd2c8(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(**(int **)(param_1 + 0x2c) + 0x150))
  ;
  return;
}



// Function: FUN_100bd300 at 100bd300
// Size: 140 bytes

void FUN_100bd300(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 != (int *)0x0) && (*(char *)(param_2 + 4) != '\0')) {
    FUN_100f2204();
  }
  FUN_100f1574(0);
  if ((param_2 != (int *)0x0) &&
     (iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8)), iVar1 != 0)) {
    FUN_100f57c8(param_2);
  }
  return;
}



// Function: FUN_100bd438 at 100bd438
// Size: 292 bytes

void FUN_100bd438(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_44;
  int local_20 [5];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),1);
  FUN_10117884(**(int **)(local_44 + -0xeac) +
               (int)*(short *)(*(int *)**(int **)(local_44 + -0xeac) + 0x1f0),param_2);
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x778) + (int)piVar3);
    }
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = local_20[1];
    iVar2 = FUN_100eea60(local_20);
  }
  return;
}



// Function: FUN_100bd55c at 100bd55c
// Size: 188 bytes

void FUN_100bd55c(int *param_1)

{
  int local_2c;
  
  FUN_100f12a8();
  DAT_607f0000 = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b0));
  if (*(char *)(*(int *)(local_2c + -0x14) + 0x20) == '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x350) + (int)param_1);
  }
  *(undefined2 *)(param_1 + 0x1c) = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 600));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c0),1);
  return;
}



// Function: FUN_100bd618 at 100bd618
// Size: 252 bytes

void FUN_100bd618(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1010fab8(param_2);
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar2 = FUN_1011289c();
    iVar3 = FUN_1010fb3c();
  }
  else {
    iVar2 = FUN_10114d2c();
  }
  if (iVar2 != param_2) {
    if (iVar1 == 0) {
      if (iVar3 == 0) {
        FUN_10003180(param_2);
      }
      else {
        FUN_10113c58(iVar2);
        iVar1 = FUN_10112710(param_2);
        if (iVar1 == 0) {
          FUN_10002dc0(param_2,iVar3);
        }
        else {
          FUN_10003000(param_2);
        }
        FUN_10113f5c(param_2);
      }
    }
    else {
      FUN_10003000(param_2);
    }
  }
  *(undefined2 *)(param_1 + 0x40) = 0;
  return;
}



// Function: FUN_100bd714 at 100bd714
// Size: 152 bytes

void FUN_100bd714(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = param_1;
  }
  piVar1 = (int *)param_1[0x1b];
  if (param_2 != piVar1) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1);
    param_1[0x1b] = (int)param_2;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x450));
  }
  return;
}



// Function: FUN_100bd7ac at 100bd7ac
// Size: 332 bytes

void FUN_100bd7ac(int param_1,char param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int local_24c;
  short local_228;
  short local_226;
  undefined1 auStack_224 [256];
  undefined1 local_124 [256];
  
  if ((*(char *)(param_1 + 0x57) != param_2) || (*(int *)(param_1 + 0x58) != param_3)) {
    if (param_3 == -1) {
      uVar3 = 0xb;
    }
    else if (param_2 == '\0') {
      uVar3 = 6;
    }
    else {
      uVar3 = 5;
    }
    local_124[0] = 0;
    FUN_100009d8(local_124,0xfa,uVar3);
    iVar1 = FUN_100ee320(local_124,&local_226,&local_228);
    if (iVar1 != 0) {
      pbVar4 = *(byte **)(local_24c + -0xe4c);
      puVar2 = auStack_224;
      if ((auStack_224 != (undefined1 *)0x0) ||
         (puVar2 = (undefined1 *)FUN_100f56e4(0x100), puVar2 != (undefined1 *)0x0)) {
        FUN_100012d8(pbVar4,puVar2,*pbVar4 + 1);
      }
      if ((param_3 != 0) && (param_3 != -1)) {
        FUN_100f2758(param_3,auStack_224);
      }
      FUN_100ee588(local_124,auStack_224,(int)local_226,(int)local_228);
    }
    FUN_100f3284(0x65,local_124);
    *(char *)(param_1 + 0x57) = param_2;
    *(int *)(param_1 + 0x58) = param_3;
  }
  return;
}



// Function: FUN_100bd8f8 at 100bd8f8
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd8f8(int *param_1)

{
  int iVar1;
  undefined4 local_2c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if ((iVar1 != 0) && (iVar1 = FUN_100f25b8(), iVar1 != 0)) {
    FUN_10117884((int)_DAT_4bfdecc5 + (int)*(short *)(*_DAT_4bfdecc5 + 0xa8));
    FUN_100f3118(*(undefined4 *)(local_2c + -0xe24),0xffffffff);
    FUN_10117884((int)_DAT_4bfdecc5 + (int)*(short *)(*_DAT_4bfdecc5 + 0xd0));
    iVar1 = FUN_100f25b8();
    if (iVar1 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}



// Function: FUN_100bd9dc at 100bd9dc
// Size: 192 bytes

void FUN_100bd9dc(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 local_6c;
  
  *param_5 = 0xe866;
  *param_6 = 0xffffffff;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a0),param_2,param_4);
  *param_3 = 0;
  *param_7 = 0;
  *param_8 = **(undefined4 **)(local_6c + -0xe20);
  *in_stack_00000038 = 0;
  *in_stack_0000003c = 0;
  *in_stack_00000040 = 0;
  return;
}



// Function: FUN_100bdb40 at 100bdb40
// Size: 72 bytes

void FUN_100bdb40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f15e0(4);
  *param_3 = puVar1;
  *(undefined4 *)*puVar1 = *(undefined4 *)(param_1 + 0x24);
  return;
}



// Function: FUN_100bdb88 at 100bdb88
// Size: 52 bytes

void FUN_100bdb88(undefined4 param_1,short param_2,undefined4 param_3)

{
  FUN_100d8e68((int)param_2,param_3);
  return;
}



// Function: FUN_100bdbbc at 100bdbbc
// Size: 152 bytes

void FUN_100bdbbc(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_2c;
  
  if (((0 < param_1[0x14]) &&
      (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8)), iVar1 != 0)) &&
     (uVar2 = FUN_10001a88(), (uint)param_1[0x13] < uVar2)) {
    **(undefined1 **)(local_2c + -0xe50) = 1;
    FUN_100d8e3c(0x88);
    iVar1 = FUN_10001a88();
    param_1[0x13] = iVar1 + param_1[0x14];
  }
  return;
}



// Function: FUN_100bdc54 at 100bdc54
// Size: 80 bytes

void FUN_100bdc54(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  undefined4 local_24;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x400),param_2);
  FUN_100014a0(*(int *)(local_24 + -0xb0) + 0x5e);
  return;
}



// Function: FUN_100bdca4 at 100bdca4
// Size: 288 bytes

void FUN_100bdca4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  short sStack0000001c;
  short sStack0000001e;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [8];
  
  _sStack0000001c = param_2;
  puVar1 = (undefined4 *)FUN_100b0368(auStack_1c,&stack0x0000001c);
  iVar2 = FUN_100010e0(*puVar1,&local_28);
  if (((iVar2 == 3) &&
      (piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_28),
      piVar3 != (int *)0x0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x568) + (int)piVar3), iVar2 != 0)) {
    local_24 = (int)sStack0000001c;
    local_20 = (int)sStack0000001e;
    FUN_10117884((int)*(short *)(*piVar3 + 0x2b8) + (int)piVar3,&local_24);
    FUN_10117884((int)*(short *)(*piVar3 + 0x588) + (int)piVar3,&local_24,param_1[0x1f]);
    FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,param_3);
  }
  return;
}



// Function: FUN_100bddc4 at 100bddc4
// Size: 184 bytes

void FUN_100bddc4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x430),uStack0000001c,param_1[0x1f]);
  iVar1 = FUN_10000060(param_1[0x1f]);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x420) + (int)param_1,uStack0000001c,param_1[0x1f]);
  }
  FUN_1010573c(uStack0000001c,param_1[0x1f]);
  return;
}



// Function: FUN_100bdf64 at 100bdf64
// Size: 132 bytes

void FUN_100bdf64(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  iVar1 = FUN_10003750();
  if ((iVar1 != 0) && (iVar1 = FUN_10002fe8(), iVar1 != -0x35e)) {
    FUN_100db2f4(iVar1);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x410),uStack0000001c,param_3);
  return;
}



// Function: FUN_100bdfe8 at 100bdfe8
// Size: 288 bytes

void FUN_100bdfe8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  short sStack0000001c;
  short sStack0000001e;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [8];
  
  _sStack0000001c = param_2;
  puVar1 = (undefined4 *)FUN_100b0368(auStack_1c,&stack0x0000001c);
  iVar2 = FUN_100010e0(*puVar1,&local_28);
  if (((iVar2 == 3) &&
      (piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_28),
      piVar3 != (int *)0x0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x578) + (int)piVar3), iVar2 != 0)) {
    local_24 = (int)sStack0000001c;
    local_20 = (int)sStack0000001e;
    FUN_10117884((int)*(short *)(*piVar3 + 0x2b8) + (int)piVar3,&local_24);
    FUN_10117884((int)*(short *)(*piVar3 + 0x590) + (int)piVar3,&local_24,param_3);
    FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,param_3);
  }
  return;
}



// Function: FUN_100be108 at 100be108
// Size: 184 bytes

void FUN_100be108(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448),uStack0000001c,param_1[0x20]);
  iVar1 = FUN_10000060(param_1[0x20]);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x438) + (int)param_1,uStack0000001c,param_1[0x20]);
  }
  FUN_1010573c(uStack0000001c,param_1[0x20]);
  return;
}



// Function: FUN_100be2a8 at 100be2a8
// Size: 640 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100be2a8(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uStack00000020;
  int *piStack00000024;
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
  uStack00000020 = param_3;
  piStack00000024 = param_4;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    local_20 = (int *)FUN_10117884((int)piStack00000024 + (int)*(short *)(*piStack00000024 + 0x1b0),
                                   param_2,uStack00000020);
    piStack00000024 = (int *)0x0;
    if (local_20 != (int *)0x0) {
      iVar1 = FUN_10117884((int)*(short *)(*local_20 + 0x158) + (int)local_20);
      while (iVar1 == 0) {
        iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
        if (iVar1 != 0) {
          local_20 = (int *)FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x1b8));
        }
        if (local_20 == (int *)0x0) goto LAB_100be404;
        iVar1 = FUN_10117884((int)*(short *)(*local_20 + 0x158) + (int)local_20);
      }
      if (local_20 != (int *)0x0) {
        local_20 = (int *)FUN_10117884((int)*(short *)(*local_20 + 0x1c0) + (int)local_20);
      }
    }
LAB_100be404:
    _DAT_41820010 = local_30;
  }
  else {
    if (piStack00000024 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piStack00000024 + 0x128) + (int)piStack00000024);
      iVar1 = FUN_10117884((int)piStack00000024 + (int)*(short *)(*piStack00000024 + 0xa8));
      if (iVar1 != 0) {
        if (piStack00000024 == *(int **)(piStack00000024[6] + 0x1c)) {
          *(undefined4 *)(piStack00000024[6] + 0x1c) = 0;
        }
        piStack00000024 = (int *)FUN_100f57c8(piStack00000024);
      }
    }
    if (local_20 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*local_20 + 0x128) + (int)local_20);
      iVar1 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0xa8));
      if (iVar1 != 0) {
        if (local_20 == *(int **)(local_20[6] + 0x1c)) {
          *(undefined4 *)(local_20[6] + 0x1c) = 0;
        }
        local_20 = (int *)FUN_100f57c8(local_20);
      }
    }
    FUN_100db158((int)local_38,local_34);
  }
  return local_20;
}



// Function: FUN_100be528 at 100be528
// Size: 184 bytes

void FUN_100be528(int *param_1)

{
  int *piVar1;
  
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x248),0x140,0,0);
  while (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0));
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x248),0x140,0,0);
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
  return;
}



// Function: FUN_100be5e0 at 100be5e0
// Size: 48 bytes

void FUN_100be5e0(void)

{
  FUN_1010de08(0);
  FUN_1010de98();
  return;
}



// Function: FUN_100be610 at 100be610
// Size: 40 bytes

void FUN_100be610(undefined4 param_1,undefined4 param_2)

{
  FUN_1010f990(param_2);
  return;
}



// Function: FUN_100be638 at 100be638
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be638(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_194;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_138;
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
  if (iVar1 == 0) {
    local_170 = 0x3c;
    local_138 = 0;
    local_16c = param_2;
    FUN_10001bd8(param_1 + 0x32,&local_170);
    FUN_100db2f4();
    _DAT_41820010 = local_28;
  }
  else {
    FUN_100b1d90(param_2,*(int *)(local_194 + -0xeb8) + 0x3c4);
  }
  return;
}



// Function: FUN_100be728 at 100be728
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be728(void)

{
  FUN_100c1c8c(&DAT_2c040000,_DAT_a8df0000,0x24,0x2c860000,&DAT_41860018);
  FUN_100c1c8c(&DAT_807f0004,_DAT_61230000,0x30,0x4bfdec71,&DAT_41820070);
  FUN_100c1c8c(0x60000000,_DAT_60000000,0x30,&DAT_38800000,&DAT_41820070);
  FUN_100c1c8c(&DAT_909f0004,_DAT_b09f0000,0x40,0x3ba00000,&DAT_3b600000);
  FUN_100c1c8c(&DAT_90bf000c,_DAT_a8bf0000,0x40,&DAT_2c050000,&DAT_909f0004);
  FUN_100c1c8c(0x90bf0010,_DAT_4182001c,0x40,0x813f0004,&DAT_909f0004);
  FUN_100c1c8c(0x90bf0014,_DAT_2c890000,0x30,0x41860010,&DAT_41820070);
  FUN_100c1c8c(&DAT_281f0000,_DAT_61230000,0x30,0x4bfdec3d,&DAT_41820070);
  FUN_100c1c8c(0x57c607ff,_DAT_60000000,0x84,0x93bf0004,0x7c1de840);
  return;
}



// Function: FUN_100be874 at 100be874
// Size: 160 bytes

undefined4 FUN_100be874(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = .glue::FUN_10115b60(*param_2,**(undefined4 **)(param_1 + 4),0,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = .glue::FUN_10115b60(*param_2,**(undefined4 **)(param_1 + 4),0,1);
    if ((int)((-1 - iVar1) + (uint)(iVar1 == 0)) < 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_100be91c at 100be91c
// Size: 116 bytes

undefined4 * FUN_100be91c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_48000008;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}



// Function: FUN_100be990 at 100be990
// Size: 40 bytes

void FUN_100be990(void)

{
  FUN_100be91c(0);
  return;
}



// Function: FUN_100be9b8 at 100be9b8
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be9b8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100f5274(param_1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    FUN_100b1c84(param_2);
    iVar1 = FUN_10001ae8();
    param_1[1] = iVar1;
    FUN_100db26c();
    FUN_100b1c84(param_3);
    iVar1 = FUN_10001ae8();
    param_1[2] = iVar1;
    FUN_100db26c();
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100beaa8 at 100beaa8
// Size: 84 bytes

void FUN_100beaa8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100beafc at 100beafc
// Size: 120 bytes

void FUN_100beafc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_10000a50(*(undefined4 *)(param_1 + 8),param_2);
  iVar1 = .glue::FUN_10115b60(**(undefined4 **)(param_1 + 8),param_2,0,1);
  if (iVar1 != 0) {
    FUN_100db2f4(0xffffff94);
  }
  return;
}



// Function: FUN_100beb7c at 100beb7c
// Size: 104 bytes

undefined4 * FUN_100beb7c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x24), param_1 != (undefined4 *)0x0)) {
    FUN_100e904c(param_1);
    *param_1 = 0x913f0020;
  }
  return param_1;
}



// Function: FUN_100bebe4 at 100bebe4
// Size: 40 bytes

void FUN_100bebe4(void)

{
  FUN_100beb7c(0);
  return;
}



// Function: FUN_100bec0c at 100bec0c
// Size: 172 bytes

undefined4 FUN_100bec0c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = .glue::FUN_10115b60(**(undefined4 **)(param_2 + 4),**(undefined4 **)(param_3 + 4),0,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = .glue::FUN_10115b60(**(undefined4 **)(param_2 + 4),**(undefined4 **)(param_3 + 4),0,1);
    if ((int)((-1 - iVar1) + (uint)(iVar1 == 0)) < 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_100becb8 at 100becb8
// Size: 36 bytes

void FUN_100becb8(void)

{
  FUN_100e9124();
  return;
}



// Function: FUN_100bece4 at 100bece4
// Size: 112 bytes

undefined4 * FUN_100bece4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(8), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_38800000;
    param_1[1] = 0;
  }
  return param_1;
}



// Function: FUN_100bed54 at 100bed54
// Size: 40 bytes

void FUN_100bed54(void)

{
  FUN_100bece4(0);
  return;
}



// Function: FUN_100bed7c at 100bed7c
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bed7c(int *param_1)

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
    iVar1 = FUN_100beb7c(0);
    FUN_100becb8();
    param_1[1] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100bee44 at 100bee44
// Size: 68 bytes

void FUN_100bee44(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100e91b4(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100bee88 at 100bee88
// Size: 72 bytes

void FUN_100bee88(int param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_2;
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x160),
               &DAT_909f001c,local_8);
  return;
}



// Function: FUN_100beed0 at 100beed0
// Size: 288 bytes

int FUN_100beed0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_150 [79];
  
  FUN_100ebaf8(local_150,*(undefined4 *)(param_1 + 4),1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar3 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while (iVar2 = 0, iVar1 != 0) {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 4) +
                         (int)*(short *)(**(int **)(param_1 + 4) + 0x120),iVar3);
    iVar3 = .glue::FUN_10115b60(param_2,**(undefined4 **)(iVar2 + 8),0,1);
    if (iVar3 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar3 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return iVar2;
}



// Function: FUN_100beff0 at 100beff0
// Size: 188 bytes

void FUN_100beff0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2);
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_100be91c(0);
    FUN_100be9b8(uVar2,param_2,param_3);
    FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x150),uVar2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0xa8) + (int)piVar1,param_3);
  }
  return;
}



// Function: FUN_100bf0ac at 100bf0ac
// Size: 380 bytes

bool FUN_100bf0ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_174;
  int local_150 [78];
  
  FUN_100ebaf8(local_150,*(undefined4 *)(param_1 + 4),1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar3 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while (iVar2 = 0, iVar1 != 0) {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 4) +
                         (int)*(short *)(**(int **)(param_1 + 4) + 0x120),iVar3);
    iVar3 = .glue::FUN_10115b60(param_2,**(undefined4 **)(iVar2 + 8),0,1);
    if (iVar3 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar3 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  if (iVar2 != 0) {
    FUN_100012d8((byte *)**(undefined4 **)(iVar2 + 4),param_3,
                 *(byte *)**(undefined4 **)(iVar2 + 4) + 1);
    FUN_100ebc68(local_150,2);
  }
  else {
    FUN_100b1d90(param_3,*(int *)(local_174 + -0xdc4) + 0x28);
    FUN_100ebc68(local_150,2);
  }
  return iVar2 != 0;
}



// Function: FUN_100bf228 at 100bf228
// Size: 128 bytes

void FUN_100bf228(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [3];
  
  local_10[0] = param_2;
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 4) +
                       (int)*(short *)(**(int **)(param_1 + 4) + 0x160),&DAT_909f001c,local_10);
  if (iVar1 != 0) {
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x180),
                 iVar1);
  }
  return;
}



// Function: FUN_100bf2a8 at 100bf2a8
// Size: 324 bytes

void FUN_100bf2a8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_150 [79];
  
  FUN_100ebaf8(local_150,*(undefined4 *)(param_1 + 4),1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar3 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while (iVar2 = 0, iVar1 != 0) {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 4) +
                         (int)*(short *)(**(int **)(param_1 + 4) + 0x120),iVar3);
    iVar3 = .glue::FUN_10115b60(param_2,**(undefined4 **)(iVar2 + 8),0,1);
    if (iVar3 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar3 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  if (iVar2 != 0) {
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x180),
                 iVar2);
  }
  FUN_100ebc68(local_150,2);
  return;
}



// Function: FUN_100bf3ec at 100bf3ec
// Size: 156 bytes

bool FUN_100bf3ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_34;
  undefined4 local_10 [3];
  
  local_10[0] = param_2;
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 4) +
                       (int)*(short *)(**(int **)(param_1 + 4) + 0x160),&DAT_909f001c,local_10);
  if (iVar1 != 0) {
    FUN_100012d8((byte *)**(undefined4 **)(iVar1 + 8),param_3,
                 *(byte *)**(undefined4 **)(iVar1 + 8) + 1);
  }
  else {
    FUN_100b1d90(param_3,*(int *)(local_34 + -0xdc4) + 0x2c);
  }
  return iVar1 != 0;
}



// Function: FUN_100bf488 at 100bf488
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf488(void)

{
  FUN_100c1c8c(0x7d3de810,_DAT_909f0014,0xc,&DAT_909f0018,0x90c30020);
  FUN_100c1c8c(&DAT_39200000,_DAT_2c9e0000,0x24,0x4186000c,&DAT_41860018);
  FUN_100c1c8c(0xb37f0000,_DAT_2f1c0000,8,0x41990020,0x90c30020);
  return;
}



// Function: FUN_100bf518 at 100bf518
// Size: 164 bytes

undefined4 * FUN_100bf518(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_38a00001;
    param_1[1] = 0x20202020;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    param_1[6] = 0x7fffffff;
    param_1[7] = 0;
  }
  return param_1;
}



// Function: FUN_100bf5bc at 100bf5bc
// Size: 40 bytes

void FUN_100bf5bc(void)

{
  FUN_100bf518(0);
  return;
}



// Function: FUN_100bf5e4 at 100bf5e4
// Size: 60 bytes

void FUN_100bf5e4(int param_1,undefined4 param_2)

{
  FUN_100f5274(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_100bf620 at 100bf620
// Size: 52 bytes

void FUN_100bf620(void)

{
  int iVar1;
  
  iVar1 = FUN_100f5088();
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}



// Function: FUN_100bf654 at 100bf654
// Size: 68 bytes

void FUN_100bf654(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100bf698 at 100bf698
// Size: 144 bytes

void FUN_100bf698(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  FUN_100f5100(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



// Function: FUN_100bf728 at 100bf728
// Size: 144 bytes

void FUN_100bf728(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xc));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0x18));
  return;
}



// Function: FUN_100bf7c0 at 100bf7c0
// Size: 164 bytes

void FUN_100bf7c0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)param_1[5];
    if (piVar1 == (int *)0x0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),param_1);
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x120),param_2);
    }
  }
  return;
}



// Function: FUN_100bf864 at 100bf864
// Size: 8 bytes

void FUN_100bf864(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// Function: FUN_100bf8a4 at 100bf8a4
// Size: 132 bytes

undefined4 FUN_100bf8a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x14) +
                         (int)*(short *)(**(int **)(param_1 + 0x14) + 0x100));
    if (iVar2 == 0) {
      uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x14) +
                           (int)*(short *)(**(int **)(param_1 + 0x14) + 0xe0));
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
  }
  return uVar1;
}



// Function: FUN_100bf928 at 100bf928
// Size: 248 bytes

void FUN_100bf928(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == param_3) {
      piVar1 = (int *)param_1[4];
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_2);
      }
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),param_1[4]);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 200),param_1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_2);
    }
    else {
      piVar1 = (int *)param_1[5];
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110),param_2);
      }
    }
  }
  return;
}



// Function: FUN_100bfa20 at 100bfa20
// Size: 264 bytes

void FUN_100bfa20(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == param_3) {
      piVar1 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),param_1);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 200),piVar1);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_2);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2);
    }
    else {
      piVar1 = (int *)param_1[5];
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x118),param_2);
      }
    }
  }
  return;
}



// Function: FUN_100bfb28 at 100bfb28
// Size: 296 bytes

void FUN_100bfb28(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == param_2) {
    piVar1 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
    piVar2 = (int *)param_1[4];
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 200) + (int)piVar2,piVar1);
    }
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0),param_1[4]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),0);
  }
  else {
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128));
    }
  }
  return;
}



// Function: FUN_100bfc50 at 100bfc50
// Size: 180 bytes

void FUN_100bfc50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128),param_2,param_3,param_4);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x130) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100bfd04 at 100bfd04
// Size: 156 bytes

void FUN_100bfd04(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x100),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100bfda0 at 100bfda0
// Size: 180 bytes

void FUN_100bfda0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_2,param_3,param_4);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100bfe54 at 100bfe54
// Size: 156 bytes

void FUN_100bfe54(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf0),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x148) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100bfef0 at 100bfef0
// Size: 156 bytes

void FUN_100bfef0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x150) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100bff8c at 100bff8c
// Size: 156 bytes

void FUN_100bff8c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x158) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100c0028 at 100c0028
// Size: 144 bytes

void FUN_100c0028(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x118));
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x160) + (int)piVar1);
  }
  return;
}



// Function: FUN_100c00b8 at 100c00b8
// Size: 132 bytes

void FUN_100c00b8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x168) + (int)piVar1,param_2,param_3,param_4,param_5);
  }
  return;
}



// Function: FUN_100c013c at 100c013c
// Size: 152 bytes

int FUN_100c013c(int *param_1)

{
  int iVar1;
  
  if (param_1[6] == 0x7fffffff) {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else if (param_1[7] == 0) {
      iVar1 = FUN_10001a88();
    }
    else {
      iVar1 = param_1[7] + param_1[6];
    }
  }
  return iVar1;
}



// Function: FUN_100c01d4 at 100c01d4
// Size: 252 bytes

void FUN_100c01d4(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if ((((param_1[6] != 0x7fffffff) &&
       (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x100) + (int)param_1), iVar2 != 0)) &&
      ((param_2 != '\x01' ||
       (iVar2 = FUN_10001a88(), (uint)param_1[6] <= (uint)(iVar2 - param_1[7]))))) &&
     ((iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),param_2), iVar2 == 0 &&
      (param_2 == '\x01')))) {
    iVar2 = FUN_10001a88();
    param_1[7] = iVar2;
  }
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100c02e0 at 100c02e0
// Size: 132 bytes

undefined4 FUN_100c02e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x170) + (int)piVar1,param_2,param_3,
                         uStack00000024);
  }
  return uVar2;
}



// Function: FUN_100c0364 at 100c0364
// Size: 132 bytes

undefined4 FUN_100c0364(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1,param_2,param_3,
                         uStack00000024);
  }
  return uVar2;
}



// Function: FUN_100c03e8 at 100c03e8
// Size: 108 bytes

void FUN_100c03e8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x180) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100c0454 at 100c0454
// Size: 124 bytes

undefined4 FUN_100c0454(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x188) + (int)piVar1,param_2,param_3);
  }
  return uVar2;
}



// Function: FUN_100c04d0 at 100c04d0
// Size: 116 bytes

undefined4 FUN_100c04d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 400) + (int)piVar1,param_2);
  }
  return uVar2;
}



// Function: FUN_100c0544 at 100c0544
// Size: 20 bytes

bool FUN_100c0544(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// Function: FUN_100c0564 at 100c0564
// Size: 92 bytes

void FUN_100c0564(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0xd8));
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}



// Function: FUN_100c05c0 at 100c05c0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c05c0(void)

{
  FUN_100c1c8c(&DAT_38800000,_DAT_b0bf0002,0x20,&DAT_38c00000,0x90c30020);
  return;
}



// Function: FUN_100c05fc at 100c05fc
// Size: 100 bytes

void FUN_100c05fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0x390,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffa970,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c0660 at 100c0660
// Size: 60 bytes

undefined1 FUN_100c0660(int param_1,short param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10003240(*(undefined4 *)(param_1 + 4),0x390,(int)param_2,param_3);
  return uVar1;
}



// Function: FUN_100c069c at 100c069c
// Size: 100 bytes

void FUN_100c069c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffa850,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c0700 at 100c0700
// Size: 44 bytes

void FUN_100c0700(int param_1)

{
  FUN_10003240(*(undefined4 *)(param_1 + 4),0);
  return;
}



// Function: FUN_100c072c at 100c072c
// Size: 100 bytes

void FUN_100c072c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0xc0,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffaa1c,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c0790 at 100c0790
// Size: 48 bytes

void FUN_100c0790(int param_1,undefined4 param_2)

{
  FUN_10003240(*(undefined4 *)(param_1 + 4),0xc0,param_2);
  return;
}



// Function: FUN_100c07c0 at 100c07c0
// Size: 100 bytes

void FUN_100c07c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0xc0,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffa851,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c0824 at 100c0824
// Size: 48 bytes

void FUN_100c0824(int param_1,undefined4 param_2)

{
  FUN_10003240(*(undefined4 *)(param_1 + 4),0xc0,param_2);
  return;
}



// Function: FUN_100c0854 at 100c0854
// Size: 100 bytes

void FUN_100c0854(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0x10,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffa973,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c08b8 at 100c08b8
// Size: 48 bytes

undefined1 FUN_100c08b8(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10003240(*(undefined4 *)(param_1 + 4),0x10);
  return uVar1;
}



// Function: FUN_100c08e8 at 100c08e8
// Size: 100 bytes

void FUN_100c08e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0x10,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffa977,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c094c at 100c094c
// Size: 48 bytes

undefined1 FUN_100c094c(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10003240(*(undefined4 *)(param_1 + 4),0x10);
  return uVar1;
}



// Function: FUN_100c097c at 100c097c
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c097c(void)

{
  if (_DAT_60000000 != (int *)0x0) {
    FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xd0),(int)_DAT_90df006c);
  }
  return;
}



// Function: FUN_100c09d0 at 100c09d0
// Size: 108 bytes

undefined4 FUN_100c09d0(short param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_34;
  
  uVar1 = FUN_10001e18();
  FUN_100c097c();
  uVar2 = FUN_100c0660(*(undefined4 *)(local_34 + -0xd78),(int)param_1,param_2);
  FUN_100017a0(uVar1);
  return uVar2;
}



// Function: FUN_100c0a3c at 100c0a3c
// Size: 88 bytes

undefined4 FUN_100c0a3c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c097c();
  uVar2 = FUN_100c08b8(*(undefined4 *)(local_2c + -0xd74));
  FUN_100017a0(uVar1);
  return uVar2;
}



// Function: FUN_100c0a94 at 100c0a94
// Size: 88 bytes

undefined4 FUN_100c0a94(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c097c();
  uVar2 = FUN_100c094c(*(undefined4 *)(local_2c + -0xd70));
  FUN_100017a0(uVar1);
  return uVar2;
}



// Function: FUN_100c0aec at 100c0aec
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0aec(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_34;
  
  uVar1 = FUN_10001e18();
  piVar2 = (int *)**(undefined4 **)(local_34 + -0xe58);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0xd8) + (int)piVar2);
  }
  DAT_90df0020 = 1;
  _DAT_90df0068 = param_1;
  FUN_100c0790(*(undefined4 *)(local_34 + -0xd6c),param_1);
  FUN_100017a0(uVar1);
  return;
}



// Function: FUN_100c0b74 at 100c0b74
// Size: 104 bytes

undefined4 * FUN_100c0b74(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(4), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0xa8ff0000;
  }
  return param_1;
}



// Function: FUN_100c0bdc at 100c0bdc
// Size: 60 bytes

undefined4 FUN_100c0bdc(undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  sVar1 = psVar2[1];
  psVar2[1] = sVar1 + 1;
  if (*psVar2 <= (short)(sVar1 + 1)) {
    psVar2[1] = 0;
  }
  return *(undefined4 *)(psVar2 + psVar2[1] * 2 + 2);
}



// Function: FUN_100c0c18 at 100c0c18
// Size: 748 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0c18(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_16c;
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_100f5274(param_1);
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar1 = FUN_10000090(auStack_148);
  if (iVar1 == 0) {
    DAT_90df006e = 1;
    iVar1 = *(int *)(local_16c + -0xb0);
    _DAT_90df0022 = *(undefined4 *)(iVar1 + 0x5e);
    _DAT_90df0026 = *(undefined4 *)(iVar1 + 0x62);
    _DAT_90df002a = *(undefined4 *)(iVar1 + 0x66);
    _DAT_90df002e = *(undefined4 *)(iVar1 + 0x6a);
    _DAT_90df0032 = *(undefined4 *)(iVar1 + 0x6e);
    _DAT_90df0036 = *(undefined4 *)(iVar1 + 0x72);
    _DAT_90df003a = *(undefined4 *)(iVar1 + 0x76);
    _DAT_90df003e = *(undefined4 *)(iVar1 + 0x7a);
    _DAT_90df0042 = *(undefined4 *)(iVar1 + 0x7e);
    _DAT_90df0046 = *(undefined4 *)(iVar1 + 0x82);
    _DAT_90df004a = *(undefined4 *)(iVar1 + 0x86);
    _DAT_90df004e = *(undefined4 *)(iVar1 + 0x8a);
    _DAT_90df0052 = *(undefined4 *)(iVar1 + 0x8e);
    _DAT_90df0056 = *(undefined4 *)(iVar1 + 0x92);
    _DAT_90df005a = *(undefined4 *)(iVar1 + 0x96);
    _DAT_90df005e = *(undefined4 *)(iVar1 + 0x9a);
    _DAT_90df0062 = *(undefined4 *)(iVar1 + 0x9e);
    _DAT_90df006c = 0x78;
    DAT_90df0020 = 0;
    DAT_90df006f = 1;
    DAT_90df0070 = 0;
    _DAT_90df00b8 = FUN_10117884((int)*(short *)(*param_1 + 0xa8) + (int)param_1,0x100);
    if (_DAT_90df00b8 == 0) {
      piVar2 = (int *)FUN_10001470(4);
      puVar4 = (undefined4 *)*piVar2;
      _DAT_90df0072 = *puVar4;
      _DAT_90df0076 = puVar4[1];
      _DAT_90df007a = puVar4[2];
      _DAT_90df007e = puVar4[3];
      _DAT_90df0082 = puVar4[4];
      _DAT_90df0086 = puVar4[5];
      _DAT_90df008a = puVar4[6];
      _DAT_90df008e = puVar4[7];
      _DAT_90df0092 = puVar4[8];
      _DAT_90df0096 = puVar4[9];
      _DAT_90df009a = puVar4[10];
      _DAT_90df009e = puVar4[0xb];
      _DAT_90df00a2 = puVar4[0xc];
      _DAT_90df00a6 = puVar4[0xd];
      _DAT_90df00aa = puVar4[0xe];
      _DAT_90df00ae = puVar4[0xf];
      _DAT_90df00b2 = puVar4[0x10];
    }
    else {
      piVar2 = (int *)FUN_100c0bdc(_DAT_90df00b8);
      puVar4 = (undefined4 *)*piVar2;
      _DAT_90df0072 = *puVar4;
      _DAT_90df0076 = puVar4[1];
      _DAT_90df007a = puVar4[2];
      _DAT_90df007e = puVar4[3];
      _DAT_90df0082 = puVar4[4];
      _DAT_90df0086 = puVar4[5];
      _DAT_90df008a = puVar4[6];
      _DAT_90df008e = puVar4[7];
      _DAT_90df0092 = puVar4[8];
      _DAT_90df0096 = puVar4[9];
      _DAT_90df009a = puVar4[10];
      _DAT_90df009e = puVar4[0xb];
      _DAT_90df00a2 = puVar4[0xc];
      _DAT_90df00a6 = puVar4[0xd];
      _DAT_90df00aa = puVar4[0xe];
      _DAT_90df00ae = puVar4[0xf];
      _DAT_90df00b2 = puVar4[0x10];
    }
    _DAT_90df00bc = 10;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),0x7fffffff);
    _DAT_90df0014 = 1;
    uVar3 = FUN_100eecf8(*(undefined4 *)(local_16c + -0xd64));
    _DAT_90df0016 = FUN_10000a98(uVar3,0x9802,1);
    FUN_100db26c();
    _DAT_90df001a = 0x78;
    _DAT_90df001c = 0;
    _DAT_90df000c = FUN_10001e18();
    FUN_100c07c0(*(undefined4 *)(local_16c + -0xd60),*(undefined4 *)(local_16c + -0xd5c));
    FUN_100c069c(*(undefined4 *)(local_16c + -0xd58),*(undefined4 *)(local_16c + -0xd54));
    FUN_100c072c(*(undefined4 *)(local_16c + -0xd6c),*(undefined4 *)(local_16c + -0xd50));
    FUN_100007b0(&DAT_90df0010);
    FUN_100db2f4();
    **(undefined1 **)(local_16c + -0xd4c) = 1;
    FUN_100c05fc(*(undefined4 *)(local_16c + -0xd78),*(undefined4 *)(local_16c + -0xd48));
    FUN_100c0854(*(undefined4 *)(local_16c + -0xd74),*(undefined4 *)(local_16c + -0xd44));
    if (DAT_7c0903c3 != '\0') {
      FUN_100c08e8(*(undefined4 *)(local_16c + -0xd70),*(undefined4 *)(local_16c + -0xd40));
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0x78);
    _DAT_41820010 = local_40;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_48,local_44);
  }
  return;
}



// Function: FUN_100c0f10 at 100c0f10
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f10(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100c0b74(0);
  FUN_100c0c18();
  _DAT_60000000 = piVar1;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200));
  return;
}



// Function: FUN_100c0f70 at 100c0f70
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f70(undefined4 *param_1)

{
  if (_DAT_60000000 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_60000000 + 0xd8) + (int)_DAT_60000000);
  }
  if (param_1 == (undefined4 *)&DAT_90df0072) {
    DAT_90df0070 = 1;
  }
  else {
    DAT_90df0020 = 0;
    _DAT_90df0022 = *param_1;
    _DAT_90df0026 = param_1[1];
    _DAT_90df002a = param_1[2];
    _DAT_90df002e = param_1[3];
    _DAT_90df0032 = param_1[4];
    _DAT_90df0036 = param_1[5];
    _DAT_90df003a = param_1[6];
    _DAT_90df003e = param_1[7];
    _DAT_90df0042 = param_1[8];
    _DAT_90df0046 = param_1[9];
    _DAT_90df004a = param_1[10];
    _DAT_90df004e = param_1[0xb];
    _DAT_90df0052 = param_1[0xc];
    _DAT_90df0056 = param_1[0xd];
    _DAT_90df005a = param_1[0xe];
    _DAT_90df005e = param_1[0xf];
    _DAT_90df0062 = param_1[0x10];
  }
  return;
}



// Function: FUN_100c1010 at 100c1010
// Size: 96 bytes

void FUN_100c1010(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c0f70(param_1);
  FUN_100c0824(*(undefined4 *)(local_2c + -0xd60),param_1);
  FUN_100017a0(uVar1);
  return;
}



// Function: FUN_100c1070 at 100c1070
// Size: 88 bytes

void FUN_100c1070(void)

{
  undefined4 uVar1;
  undefined4 local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c0f70(*(int *)(local_2c + -0xb0) + 0x5e);
  FUN_100c0700(*(undefined4 *)(local_2c + -0xd58));
  FUN_100017a0(uVar1);
  return;
}



// Function: FUN_100c10c8 at 100c10c8
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c10c8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_90df0008 = FUN_100017a0(*(undefined4 *)(param_1 + -6));
  _DAT_90df001a = _DAT_90df006c;
  iVar1 = FUN_100029d0();
  if (((iVar1 == 0) && (DAT_90df006e != '\0')) && (DAT_90df006f != '\0')) {
    if (_DAT_90df00b8 == 0) {
      if (DAT_90df0070 == '\0') {
        FUN_100014a0(&DAT_90df0072);
      }
    }
    else {
      if (DAT_90df0070 == '\0') {
        _DAT_90df00c4 = 0;
      }
      if (_DAT_90df00c4 <= _DAT_90df00c0) {
        puVar2 = (undefined4 *)FUN_100c0bdc(_DAT_90df00b8);
        puVar2 = (undefined4 *)*puVar2;
        _DAT_90df0072 = *puVar2;
        _DAT_90df0076 = puVar2[1];
        _DAT_90df007a = puVar2[2];
        _DAT_90df007e = puVar2[3];
        _DAT_90df0082 = puVar2[4];
        _DAT_90df0086 = puVar2[5];
        _DAT_90df008a = puVar2[6];
        _DAT_90df008e = puVar2[7];
        _DAT_90df0092 = puVar2[8];
        _DAT_90df0096 = puVar2[9];
        _DAT_90df009a = puVar2[10];
        _DAT_90df009e = puVar2[0xb];
        _DAT_90df00a2 = puVar2[0xc];
        _DAT_90df00a6 = puVar2[0xd];
        _DAT_90df00aa = puVar2[0xe];
        _DAT_90df00ae = puVar2[0xf];
        _DAT_90df00b2 = puVar2[0x10];
        FUN_100014a0(&DAT_90df0072);
        _DAT_90df00c4 = _DAT_90df00c4 + 1;
      }
      _DAT_90df001a = _DAT_90df00bc;
    }
  }
  FUN_100017a0(_DAT_90df0008);
  return;
}



// Function: FUN_100c11f8 at 100c11f8
// Size: 40 bytes

void FUN_100c11f8(void)

{
  FUN_100c0b74(0);
  return;
}



// Function: FUN_100c1220 at 100c1220
// Size: 308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1220(int *param_1)

{
  int iVar1;
  int local_34;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),1);
  if (**(char **)(local_34 + -0xd4c) != '\0') {
    FUN_10003078(&DAT_90df0010);
  }
  if (_DAT_90df00b8 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *(short *)*_DAT_90df00b8) {
      do {
        FUN_10001c98(*(undefined4 *)(*_DAT_90df00b8 + iVar1 * 4 + 4));
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < *(short *)*_DAT_90df00b8);
    }
    _DAT_90df00b8 = (int *)FUN_100ef510(_DAT_90df00b8);
  }
  FUN_100f5500(*(undefined4 *)(local_34 + -0xd58));
  FUN_100f5500(*(undefined4 *)(local_34 + -0xd60));
  FUN_100f5500(*(undefined4 *)(local_34 + -0xd6c));
  FUN_100f5500(*(undefined4 *)(local_34 + -0xd78));
  FUN_100f5500(*(undefined4 *)(local_34 + -0xd74));
  if (DAT_7c0903c3 != '\0') {
    FUN_100f5500(*(undefined4 *)(local_34 + -0xd70));
  }
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100c1360 at 100c1360
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1360(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = _DAT_90df001a;
  if (((DAT_90df006e != '\0') && (DAT_90df006f != '\0')) && (uVar1 = param_2, DAT_90df0070 != '\0'))
  {
    if (DAT_90df0020 == '\0') {
      FUN_100014a0(&DAT_90df0022);
      uVar1 = param_2;
    }
    else {
      FUN_10002850(_DAT_90df0068);
      uVar1 = param_2;
    }
  }
  _DAT_90df001a = uVar1;
  return;
}



// Function: FUN_100c13e4 at 100c13e4
// Size: 64 bytes

void FUN_100c13e4(int *param_1,undefined1 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,1);
  return;
}



// Function: FUN_100c1424 at 100c1424
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c1424(int *param_1,undefined1 param_2,char param_3)

{
  undefined1 uVar1;
  
  uVar1 = DAT_90df006e;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),(int)_DAT_90df006c,param_3);
    uVar1 = DAT_90df006e;
  }
  DAT_90df006e = param_2;
  return uVar1;
}



// Function: FUN_100c149c at 100c149c
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c149c(int *param_1,short param_2)

{
  if (0 < param_2) {
    _DAT_90df006c = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  }
  return;
}



// Function: FUN_100c14e8 at 100c14e8
// Size: 60 bytes

void FUN_100c14e8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),1);
  return;
}



// Function: FUN_100c1554 at 100c1554
// Size: 232 bytes

int * FUN_100c1554(undefined4 param_1,short param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_10001728(0x61637572,(int)param_2);
  if (piVar1 != (int *)0x0) {
    FUN_10002ce8(piVar1);
    FUN_10000378(piVar1);
    *(undefined2 *)(*piVar1 + 2) = 0;
    iVar3 = 0;
    if (0 < *(short *)*piVar1) {
      do {
        uVar2 = FUN_10001470((int)*(short *)(*piVar1 + iVar3 * 4 + 4));
        FUN_100db2a4();
        *(undefined4 *)(iVar3 * 4 + *piVar1 + 4) = uVar2;
        FUN_10002ce8(uVar2);
        FUN_10000378(uVar2);
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < *(short *)*piVar1);
    }
  }
  return piVar1;
}



// Function: FUN_100c1668 at 100c1668
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1668(void)

{
  _DAT_90df0008 = 0;
  _DAT_90df000c = 0;
  DAT_90df0020 = 0;
  _DAT_90df0068 = 0;
  _DAT_90df006c = 0;
  DAT_90df006e = 0;
  DAT_90df006f = 0;
  DAT_90df0070 = 0;
  _DAT_90df00b8 = 0;
  _DAT_90df00bc = 0;
  _DAT_90df00c0 = 0;
  _DAT_90df00c4 = 0;
  _DAT_90df0010 = 0;
  _DAT_90df0014 = 0;
  _DAT_90df0018 = 0;
  _DAT_90df001c = 0;
  _DAT_2c090000 = 0;
  _DAT_2c090004 = 0;
  _DAT_2c090008 = 0;
  _DAT_2c09000c = 0;
  _DAT_3b600000 = 0;
  _DAT_3b600004 = 0;
  _DAT_3b600008 = 0;
  _DAT_3b60000c = 0;
  _DAT_419e001c = 0;
  _DAT_419e0020 = 0;
  _DAT_419e0024 = 0;
  _DAT_419e0028 = 0;
  _DAT_48000068 = 0;
  _DAT_4800006c = 0;
  _DAT_48000070 = 0;
  _DAT_48000074 = 0;
  _DAT_7fbee014 = 0;
  _DAT_7fbee018 = 0;
  _DAT_7fbee01c = 0;
  _DAT_7fbee020 = 0;
  FUN_100c1c8c(0x4081000c,_DAT_7d3ee810,4,&DAT_48000008,0x90c30020);
  return;
}



// Function: FUN_100c1764 at 100c1764
// Size: 84 bytes

undefined4 * FUN_100c1764(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = 0x913f0020;
  }
  return puVar1;
}



// Function: FUN_100c17b8 at 100c17b8
// Size: 40 bytes

void FUN_100c17b8(undefined4 param_1,undefined4 param_2)

{
  FUN_100d88b4(param_1,param_2,4);
  return;
}



// Function: FUN_100c17e0 at 100c17e0
// Size: 48 bytes

void FUN_100c17e0(int param_1,undefined4 param_2)

{
  FUN_100b19f4(param_2,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100c1810 at 100c1810
// Size: 188 bytes

undefined4 FUN_100c1810(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  
  uVar2 = *param_3;
  FUN_100c17e0(*param_2,auStack_110);
  FUN_100c17e0(uVar2,auStack_210);
  iVar1 = .glue::FUN_10115b60(auStack_110,auStack_210,0,1);
  if ((int)((-1 - iVar1) + (uint)(iVar1 == 0)) < 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = .glue::FUN_10115b60(auStack_110,auStack_210,0,1);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_100c18d4 at 100c18d4
// Size: 84 bytes

undefined4 * FUN_100c18d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = 0x7c9ee014;
  }
  return puVar1;
}



// Function: FUN_100c1928 at 100c1928
// Size: 40 bytes

void FUN_100c1928(undefined4 param_1,undefined4 param_2)

{
  FUN_100d88b4(param_1,param_2,4);
  return;
}



// Function: FUN_100c1950 at 100c1950
// Size: 8 bytes

int FUN_100c1950(int param_1)

{
  return (int)*(short *)(param_1 + 0x10);
}



// Function: FUN_100c1958 at 100c1958
// Size: 140 bytes

undefined4 FUN_100c1958(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *param_2;
  uVar3 = *param_3;
  iVar1 = FUN_100c1950(uVar3);
  iVar2 = FUN_100c1950(uVar4);
  if (iVar1 < iVar2) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_100c1950(uVar3);
    iVar2 = FUN_100c1950(uVar4);
    if (iVar2 < iVar1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// Function: FUN_100c19e4 at 100c19e4
// Size: 172 bytes

int FUN_100c19e4(int param_1,byte *param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x108), param_1 != 0)) {
    iVar1 = param_1;
    if ((param_1 != 0) || (iVar1 = FUN_100f56e4(0x100), iVar1 != 0)) {
      FUN_100012d8(param_2,iVar1,*param_2 + 1);
    }
    *(undefined2 *)(param_1 + 0x100) = param_3;
    *(undefined4 *)(param_1 + 0x104) = param_4;
  }
  return param_1;
}



// Function: FUN_100c1a90 at 100c1a90
// Size: 204 bytes

undefined4 FUN_100c1a90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_110;
  undefined1 auStack_10c [256];
  
  FUN_10117884((int)*(int **)(param_2 + 0x104) + (int)*(short *)(**(int **)(param_2 + 0x104) + 0xd8)
               ,param_1,&local_110,1);
  FUN_100c17e0(local_110,auStack_10c);
  iVar1 = .glue::FUN_10115b60(param_2,auStack_10c,0,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = .glue::FUN_10115b60(param_2,auStack_10c,0,1);
    if ((int)((-1 - iVar1) + (uint)(iVar1 == 0)) < 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_100c1b5c at 100c1b5c
// Size: 144 bytes

undefined4 FUN_100c1b5c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  FUN_10117884((int)*(int **)(param_2 + 0x104) + (int)*(short *)(**(int **)(param_2 + 0x104) + 0xd8)
               ,param_1,local_10,1);
  iVar1 = FUN_100c1950(local_10[0]);
  if (*(short *)(param_2 + 0x100) < iVar1) {
    uVar2 = 0xffffffff;
  }
  else if (iVar1 < *(short *)(param_2 + 0x100)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100c1bec at 100c1bec
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1bec(void)

{
  _DAT_80a50000 = _DAT_80a50000 + 1;
  return;
}



// Function: FUN_100c1c04 at 100c1c04
// Size: 32 bytes

void FUN_100c1c04(int param_1,int param_2)

{
  if (param_2 == param_1) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



// Function: FUN_100c1c24 at 100c1c24
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1c24(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_100c1bec();
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_100c1c04(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 4) = _DAT_2c050000;
  _DAT_2c050000 = param_1;
  return;
}



// Function: FUN_100c1c8c at 100c1c8c
// Size: 128 bytes

undefined4 *
FUN_100c1c8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    FUN_100c1c24(param_1,param_5);
  }
  return param_1;
}



// Function: FUN_100c1d0c at 100c1d0c
// Size: 60 bytes

undefined4 FUN_100c1d0c(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884();
  }
  return uVar1;
}



// Function: FUN_100c1d48 at 100c1d48
// Size: 8 bytes

undefined4 FUN_100c1d48(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// Function: FUN_100c1d50 at 100c1d50
// Size: 24 bytes

undefined4 FUN_100c1d50(int param_1,int param_2)

{
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  return 0;
}



// Function: FUN_100c1d68 at 100c1d68
// Size: 212 bytes

undefined4 FUN_100c1d68(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [28];
  
  if (param_1 == param_2) {
    uVar1 = 1;
  }
  else {
    FUN_100c2a54(auStack_28,param_1,param_3);
    iVar2 = FUN_100c293c(auStack_28);
    iVar3 = FUN_100c2a10(auStack_28);
    while (iVar3 != 0) {
      if (iVar2 == param_2) {
        FUN_100c2b0c(auStack_28,2);
        return 1;
      }
      iVar2 = FUN_100c2994(auStack_28);
      iVar3 = FUN_100c2a10(auStack_28);
    }
    FUN_100c2b0c(auStack_28,2);
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100c1e3c at 100c1e3c
// Size: 148 bytes

int * FUN_100c1e3c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) || (param_1 = (int *)FUN_100f56e4(0x10), param_1 != (int *)0x0)) {
    param_1[3] = -0x6c20fff4;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar1 = FUN_10001338(param_2 << 2);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      param_1[1] = param_2;
    }
    FUN_100db26c(*param_1);
  }
  return param_1;
}



// Function: FUN_100c1ed0 at 100c1ed0
// Size: 264 bytes

void FUN_100c1ed0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [32];
  
  if (param_2 != param_1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar1 = FUN_100c1e3c(0,1);
      *(undefined4 *)(param_1 + 0x18) = uVar1;
      FUN_100db26c();
    }
    FUN_100c2ecc(auStack_30,*(undefined4 *)(param_1 + 0x18));
    iVar2 = FUN_100c293c(auStack_30);
    iVar3 = FUN_100c2a10(auStack_30);
    while (iVar3 != 0) {
      if (iVar2 == param_2) {
        FUN_100c2f4c(auStack_30,2);
        return;
      }
      iVar2 = FUN_100c2994(auStack_30);
      iVar3 = FUN_100c2a10(auStack_30);
    }
    FUN_10117884(*(int *)(param_1 + 0x18) +
                 (int)*(short *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 0x10),param_2);
    FUN_100c2f4c(auStack_30,2);
  }
  return;
}



// Function: FUN_100c1fd8 at 100c1fd8
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c1fd8(short param_1)

{
  int iVar1;
  undefined4 local_120;
  undefined1 auStack_11c [264];
  undefined4 local_14;
  
  local_14 = 0;
  FUN_100c19e4(auStack_11c,&DAT_7c0803a6,(int)param_1,_DAT_4182000c);
  iVar1 = FUN_10117884((int)_DAT_4182000c + (int)*(short *)(*_DAT_4182000c + 0x110),0x93df0008,
                       auStack_11c,&local_120);
  if (iVar1 != 0) {
    FUN_10117884((int)_DAT_4182000c + (int)*(short *)(*_DAT_4182000c + 0xd8),local_120,&local_14,1);
  }
  return local_14;
}



// Function: FUN_100c208c at 100c208c
// Size: 148 bytes

undefined4 FUN_100c208c(short param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_110 [260];
  
  iVar1 = FUN_100c1fd8((int)param_1);
  if (iVar1 == 0) {
    FUN_100b1d1c(local_110,(int)param_1);
    FUN_100012d8(local_110,&DAT_609e0000,local_110[0] + 1);
    FUN_100db158(0xffffb1d8,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c1d0c(iVar1);
  }
  return uVar2;
}



// Function: FUN_100c2120 at 100c2120
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c2120(undefined4 param_1)

{
  int iVar1;
  undefined4 local_120;
  undefined1 auStack_11c [264];
  undefined4 local_14;
  
  local_14 = 0;
  FUN_100c19e4(auStack_11c,param_1,0,_DAT_4bee8815);
  iVar1 = FUN_10117884((int)_DAT_4bee8815 + (int)*(short *)(*_DAT_4bee8815 + 0x110),&DAT_909f0010,
                       auStack_11c,&local_120);
  if (iVar1 != 0) {
    FUN_10117884((int)_DAT_4bee8815 + (int)*(short *)(*_DAT_4bee8815 + 0xd8),local_120,&local_14,1);
  }
  return local_14;
}



// Function: FUN_100c21d0 at 100c21d0
// Size: 128 bytes

undefined4 FUN_100c21d0(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100c2120(param_1);
  if (iVar1 == 0) {
    FUN_100012d8(param_1,&DAT_609e0000,*param_1 + 1);
    FUN_100db158(0xffffb1d8,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c1d0c(iVar1);
  }
  return uVar2;
}



// Function: FUN_100c2250 at 100c2250
// Size: 888 bytes

/* WARNING: Removing unreachable block (ram,0x100c2520) */
/* WARNING: Removing unreachable block (ram,0x100c2568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2250(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_184;
  undefined1 auStack_158 [256];
  short local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_50 = _DAT_41820010;
  _DAT_41820010 = auStack_158;
  iVar2 = FUN_10000090(auStack_158);
  if (iVar2 == 0) {
    sVar1 = **(short **)(local_184 + -0xa8);
    piVar3 = (int *)FUN_100f56e4(0x20);
    if (piVar3 != (int *)0x0) {
      FUN_100d8824(piVar3);
      *piVar3 = *(int *)(local_184 + -0xd2c);
    }
    FUN_100c17b8(piVar3,(int)sVar1);
    piVar4 = (int *)FUN_100f56e4(0x20);
    if (piVar4 != (int *)0x0) {
      FUN_100d8824(piVar4);
      *piVar4 = *(int *)(local_184 + -0xd24);
    }
    FUN_100c1928(piVar4,(int)sVar1);
    FUN_100c2824(auStack_40,**(undefined4 **)(local_184 + -0xa4),0);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe8),1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe8),1);
    local_28[0] = FUN_100c293c(auStack_40);
    iVar2 = FUN_100c2a10(auStack_40);
    while (iVar2 != 0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x108),local_28);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x108),local_28);
      local_28[0] = FUN_100c2994(auStack_40);
      iVar2 = FUN_100c2a10(auStack_40);
    }
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe8),0);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe8),0);
    **(int **)(local_184 + -0x9c) = (int)piVar3;
    **(int **)(local_184 + -0xa0) = (int)piVar4;
    FUN_100c2a04(auStack_40);
    local_28[0] = FUN_100c293c(auStack_40);
    iVar2 = FUN_100c2a10(auStack_40);
    while (iVar2 != 0) {
      iVar2 = FUN_100c1d50(local_28[0],1);
      if (iVar2 != 0) {
        FUN_100c1ed0(iVar2,local_28[0]);
      }
      local_28[0] = FUN_100c2994(auStack_40);
      iVar2 = FUN_100c2a10(auStack_40);
    }
    _DAT_41820010 = local_50;
    FUN_100c28bc(auStack_40,2);
  }
  else {
    FUN_100db158((int)local_58,local_54);
  }
  return;
}



// Function: FUN_100c25c8 at 100c25c8
// Size: 116 bytes

void FUN_100c25c8(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = -0x6c20fff4;
    if (*param_1 != 0) {
      FUN_100025b0(*param_1);
    }
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_100c267c at 100c267c
// Size: 56 bytes

void FUN_100c267c(int param_1)

{
  FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x10));
  return;
}



// Function: FUN_100c26ec at 100c26ec
// Size: 208 bytes

void FUN_100c26ec(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1[2] < param_1[1]) && (*param_1 != 0)) {
    *(undefined4 *)(param_1[2] * 4 + *param_1) = param_2;
    param_1[2] = param_1[2] + 1;
  }
  else {
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 2;
    iVar1 = FUN_10001338(iVar1 * 4 + 8);
    FUN_100db26c();
    FUN_10002340(*param_1,iVar1,param_1[1] << 2);
    FUN_100025b0(*param_1);
    *param_1 = iVar1;
    FUN_10117884((int)param_1 + (int)*(short *)(param_1[3] + 0x10),param_2);
  }
  return;
}



// Function: FUN_100c27bc at 100c27bc
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c27bc(void)

{
  FUN_100c1c8c(&DAT_39200000,_DAT_38a00000,0x20,&DAT_b0bf0002,&DAT_90010008);
  FUN_100c1c8c(0xb37f0000,_DAT_63e30000,0x20,&DAT_80010058,&DAT_90010008);
  return;
}



// Function: FUN_100c2824 at 100c2824
// Size: 152 bytes

undefined4 * FUN_100c2824(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_100f56e4(0x14);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_30210050;
      param_1[1] = param_2;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = param_3;
      param_1[4] = 0;
    }
  }
  else {
    *param_1 = &DAT_30210050;
    param_1[1] = param_2;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = param_3;
    param_1[4] = 0;
  }
  return param_1;
}



// Function: FUN_100c28bc at 100c28bc
// Size: 120 bytes

void FUN_100c28bc(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_30210050;
    if (param_1[4] != 0) {
      FUN_100c25c8(param_1[4],3);
    }
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_100c293c at 100c293c
// Size: 88 bytes

void FUN_100c293c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return;
}



// Function: FUN_100c2994 at 100c2994
// Size: 88 bytes

void FUN_100c2994(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return;
}



// Function: FUN_100c2a04 at 100c2a04
// Size: 12 bytes

void FUN_100c2a04(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}



// Function: FUN_100c2a10 at 100c2a10
// Size: 68 bytes

bool FUN_100c2a10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return iVar1 != 0;
}



// Function: FUN_100c2a54 at 100c2a54
// Size: 184 bytes

undefined4 * FUN_100c2a54(undefined4 *param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x14), param_1 != (undefined4 *)0x0)) {
    FUN_100c2824(param_1,param_2,param_3);
    *param_1 = &DAT_7c0803a6;
    if (param_3 == '\0') {
      uVar1 = FUN_100c1e3c(0,4);
      param_1[4] = uVar1;
    }
    else {
      uVar1 = FUN_100c1e3c(0,1);
      param_1[4] = uVar1;
    }
    FUN_100db26c(param_1[4]);
  }
  return param_1;
}



// Function: FUN_100c2b0c at 100c2b0c
// Size: 108 bytes

void FUN_100c2b0c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_7c0803a6;
    FUN_100c28bc(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_100c2b78 at 100c2b78
// Size: 264 bytes

undefined4 FUN_100c2b78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
  if (iVar1 != 0) {
    FUN_10117884(*(int *)(param_1 + 0x10) +
                 (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),iVar1);
    iVar2 = FUN_100c1d50(iVar1,1);
    if (param_2 == iVar2) {
      uVar3 = FUN_100c1d50(iVar1,2);
      return uVar3;
    }
    iVar4 = FUN_100c1d50(iVar1,2);
    iVar2 = 2;
    while (iVar4 != 0) {
      iVar4 = FUN_100c1d50(iVar1,iVar2);
      if (param_2 == iVar4) {
        uVar3 = FUN_100c1d50(iVar1,iVar2 + 1);
        return uVar3;
      }
      iVar2 = iVar2 + 1;
      iVar4 = FUN_100c1d50(iVar1,iVar2);
    }
  }
  return 0;
}



// Function: FUN_100c2c80 at 100c2c80
// Size: 372 bytes

int FUN_100c2c80(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == '\0') {
    iVar1 = FUN_100c1d50(param_2,1);
    if (iVar1 == 0) {
      iVar1 = FUN_100c2b78(param_1,param_2);
      while ((iVar1 == 0 &&
             (iVar2 = FUN_10117884(*(int *)(param_1 + 0x10) +
                                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20))
             , iVar2 != 0))) {
        iVar1 = FUN_100c2b78(param_1,iVar2);
      }
    }
    else {
      FUN_10117884(*(int *)(param_1 + 0x10) +
                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),param_2);
      iVar1 = FUN_100c1d50(param_2,1);
    }
  }
  else {
    iVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                         (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
    if (iVar1 == 0) {
      FUN_10117884(*(int *)(param_1 + 0x10) +
                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),param_2);
      iVar1 = FUN_100c1d50(param_2,1);
    }
    else {
      FUN_10117884(*(int *)(param_1 + 0x10) +
                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),iVar1);
      iVar1 = FUN_100c2b78(param_1,param_2);
    }
  }
  return iVar1;
}



// Function: FUN_100c2df4 at 100c2df4
// Size: 80 bytes

void FUN_100c2df4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_100c2c80(param_1,*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



// Function: FUN_100c2e44 at 100c2e44
// Size: 136 bytes

void FUN_100c2e44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
  while (iVar1 != 0) {
    iVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                         (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
  }
  uVar2 = FUN_100c2c80(param_1,*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// Function: FUN_100c2ecc at 100c2ecc
// Size: 128 bytes

undefined4 * FUN_100c2ecc(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1c), param_1 != (undefined4 *)0x0)) {
    FUN_100c2824(param_1,0,0);
    *param_1 = &DAT_bb61ffec;
    param_1[5] = param_2;
    param_1[6] = 1;
  }
  return param_1;
}



// Function: FUN_100c2f4c at 100c2f4c
// Size: 108 bytes

void FUN_100c2f4c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_bb61ffec;
    FUN_100c28bc(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_100c2fb8 at 100c2fb8
// Size: 84 bytes

void FUN_100c2fb8(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar1 = FUN_10117884(*(int *)(param_1 + 0x14) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x28));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// Function: FUN_100c300c at 100c300c
// Size: 80 bytes

void FUN_100c300c(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar1 = FUN_10117884(*(int *)(param_1 + 0x14) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x28));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// Function: FUN_100c3064 at 100c3064
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100c3064(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x5c), param_1 != (undefined4 *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = _FUN_10116bac;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined2 *)((int)param_1 + 0x2a) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = param_1[8];
    param_1[0xd] = param_1[9];
    param_1[0xe] = param_1[10];
    param_1[0xf] = param_1[0xb];
  }
  return param_1;
}



// Function: FUN_100c3110 at 100c3110
// Size: 40 bytes

void FUN_100c3110(void)

{
  FUN_100c3064(0);
  return;
}



// Function: FUN_100c3138 at 100c3138
// Size: 92 bytes

void FUN_100c3138(int *param_1)

{
  undefined4 local_2c;
  
  FUN_100bf5e4(param_1,0x636c6970);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  **(int **)(local_2c + -0xeac) = (int)param_1;
  return;
}



// Function: FUN_100c3194 at 100c3194
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3194(int *param_1,char param_2)

{
  int iVar1;
  int local_14c;
  undefined1 auStack_128 [256];
  short local_28;
  int local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x1d,param_1);
    if ((param_1[0x13] != 0) && (*(char *)(param_1 + 0x16) == '\0')) {
      FUN_10002658();
      local_28 = 0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      local_20 = _DAT_41820010;
      _DAT_41820010 = auStack_128;
      iVar1 = FUN_10000090(auStack_128);
      if (iVar1 == 0) {
        FUN_10117884(param_1[0x13] + (int)*(short *)(*(int *)param_1[0x13] + 0x6c8));
        _DAT_41820010 = local_20;
      }
      else {
        if (local_24 == 0) {
          local_24 = 0x82000b;
        }
        FUN_10117884(**(int **)(local_14c + -0xedc) +
                     (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x4d8),(int)local_28,
                     local_24);
      }
      *(undefined1 *)(param_1 + 0x16) = 1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
    }
  }
  return;
}



// Function: FUN_100c32d4 at 100c32d4
// Size: 76 bytes

void FUN_100c32d4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  puVar1 = (undefined4 *)FUN_10002298();
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(param_1 + 0x30) = *puVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  return;
}



// Function: FUN_100c3320 at 100c3320
// Size: 208 bytes

void FUN_100c3320(int *param_1)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  if (*(short *)(param_1 + 10) != *(short *)(param_1 + 0xe)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x38) + (int)param_1,0x1e,param_1);
    FUN_10117884(param_1[0x13] + (int)*(short *)(*(int *)param_1[0x13] + 0x248));
    param_1[0x13] = 0;
    if ((0 < *(short *)((int)param_1 + 0x3a)) && (iVar1 = FUN_100f1264(), iVar1 != 0)) {
      FUN_10001368();
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8));
  }
  return;
}



// Function: FUN_100c33f0 at 100c33f0
// Size: 132 bytes

int FUN_100c33f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    iVar1 = -1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *param_3 = uVar2;
    iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x4c) +
                         (int)*(short *)(**(int **)(param_1 + 0x4c) + 0x6c0),param_2,uVar2);
    if (iVar1 < 0) {
      FUN_100db158((int)(short)iVar1,0);
    }
  }
  return iVar1;
}



// Function: FUN_100c3474 at 100c3474
// Size: 208 bytes

void FUN_100c3474(int *param_1)

{
  int iVar1;
  int local_2c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0));
  param_1[0x15] = iVar1;
  FUN_100db26c();
  iVar1 = FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x308),0x434c4950);
  param_1[0x12] = iVar1;
  FUN_100db2a4();
  FUN_10117884(**(int **)(local_2c + -0xedc) +
               (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x1c8),param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8));
  return;
}



// Function: FUN_100c3544 at 100c3544
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100c3544(void)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),200,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xb7) = 1;
    *(undefined1 *)(iVar1 + 0x48) = 0;
    *(undefined1 *)(iVar1 + 0x49) = 0;
  }
  return iVar1;
}



// Function: FUN_100c35ac at 100c35ac
// Size: 264 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c35ac(int *param_1)

{
  int iVar1;
  int local_154;
  int local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  int local_28;
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
    local_130 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8));
    _DAT_41820010 = local_24;
  }
  else {
    local_130 = param_1[0x12];
    if (local_28 == 0) {
      local_28 = 0x82000a;
    }
    FUN_10117884(**(int **)(local_154 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_154 + -0xedc) + 0x4d8),(int)local_2c,
                 local_28);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1f8),local_130,0);
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



// Function: FUN_100c36b4 at 100c36b4
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100c36b4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x4b8));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  FUN_100db26c(iVar1);
  return iVar1;
}



// Function: FUN_100c371c at 100c371c
// Size: 68 bytes

void FUN_100c371c(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  }
  return;
}



// Function: FUN_100c3760 at 100c3760
// Size: 660 bytes

void FUN_100c3760(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_150 [312];
  
  piVar3 = (int *)param_1[0x15];
  if (piVar3 != (int *)0x0) {
    iVar1 = FUN_10117884((int)*(short *)(*piVar3 + 0x300) + (int)piVar3);
    if (iVar1 == 0) {
      piVar3 = (int *)param_1[0x15];
    }
    else {
      piVar3 = (int *)FUN_10117884((int)*(int **)(param_1[0x15] + 0x24) +
                                   (int)*(short *)(**(int **)(param_1[0x15] + 0x24) + 0x128));
    }
    FUN_1010556c(auStack_150,piVar3);
    piVar2 = (int *)FUN_10105660(auStack_150);
    iVar1 = FUN_100ebf44(auStack_150);
    while (iVar1 != 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2e8),piVar2);
      iVar1 = FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x668));
      if (iVar1 != 0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x328));
      }
      piVar2 = (int *)FUN_10105684(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
    }
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2e0),param_2);
    iVar1 = FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x668));
    if (iVar1 != 0) {
      FUN_10117884((int)*(short *)(*param_2 + 800) + (int)param_2);
    }
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x380));
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x520),0);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x4d0));
    FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x760));
    piVar3 = (int *)param_1[0x12];
    *(char *)(param_1 + 0x16) =
         (piVar3 <= param_2 && (uint)(piVar3 < param_2) <= (uint)((int)param_2 - (int)piVar3)) -
         (piVar3 < param_2);
    FUN_101055f4(auStack_150,2);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd8),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x24,param_1);
  param_1[0x13] = (int)param_2;
  param_1[0x14] = param_3;
  return;
}



// Function: FUN_100c39f4 at 100c39f4
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c39f4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100c0028(param_1);
  FUN_100f27d0(0x23,1);
  uVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x330),0);
  uVar2 = *(uint *)(param_1 + 0x54);
  FUN_100f3348(0x23,0xfa,3,4,
               (uVar1 <= uVar2 && (uint)(uVar1 < uVar2) <= uVar2 - uVar1) - (uVar1 < uVar2));
  return;
}



// Function: FUN_100c3a88 at 100c3a88
// Size: 152 bytes

void FUN_100c3a88(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int *piVar3;
  undefined **local_2c;
  
  piVar3 = *(int **)(param_1 + 0x4c);
  ppuVar1 = &.TVect::OCECToRString;
  if ((piVar3 != (int *)0x0) && (*(char *)(param_1 + 0x44) == '\0')) {
    iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x6b8) + (int)piVar3,param_2);
    ppuVar1 = local_2c;
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined4 *)(param_1 + 0x40) = param_2;
    }
  }
  if (*(char *)(*(int *)ppuVar1[-0x3b7] + 0x56) == '\0') {
    FUN_100f27d0(0x69,*(undefined1 *)(param_1 + 0x44));
  }
  return;
}



// Function: FUN_100c3b20 at 100c3b20
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3b20(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x23) {
    iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x330),0);
    if (*(int *)(param_1 + 0x54) == iVar1) {
      FUN_10117884((int)*(int **)(param_1 + 0x54) +
                   (int)*(short *)(**(int **)(param_1 + 0x54) + 0x738));
    }
    else {
      FUN_10117884((int)*(int **)(param_1 + 0x54) +
                   (int)*(short *)(**(int **)(param_1 + 0x54) + 800));
      FUN_10117884((int)*(int **)(param_1 + 0x54) +
                   (int)*(short *)(**(int **)(param_1 + 0x54) + 0x780));
    }
  }
  else {
    FUN_100bff8c(param_1);
  }
  return;
}



// Function: FUN_100c3bf4 at 100c3bf4
// Size: 36 bytes

void FUN_100c3bf4(void)

{
  FUN_10001308();
  return;
}



// Function: FUN_100c3c18 at 100c3c18
// Size: 124 bytes

int FUN_100c3c18(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  
  uVar1 = FUN_100ef9b8(param_3);
  uVar2 = FUN_10001c20(param_3);
  sVar3 = FUN_10002c88(uVar2,param_2,*param_3);
  FUN_10001b60(param_3,uVar1);
  return (int)sVar3;
}



// Function: FUN_100c3c94 at 100c3c94
// Size: 84 bytes

void FUN_100c3c94(void)

{
  FUN_100c3064(0);
  FUN_100c3138();
  if (DAT_4bfde391 != '\0') {
    FUN_100cd104();
    FUN_100cd114(0);
  }
  return;
}



// Function: FUN_100c3ce8 at 100c3ce8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3ce8(void)

{
  FUN_100c1c8c(&DAT_4e800020,_DAT_90010008,0x5c,&DAT_9421ffc8,&DAT_38800000);
  return;
}



// Function: FUN_100c3d2c at 100c3d2c
// Size: 164 bytes

undefined4 * FUN_100c3d2c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100d9034(param_1);
    *param_1 = 0x81230014;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    *(undefined1 *)((int)param_1 + 0x1f) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)((int)param_1 + 0x2e) = 0;
    *(undefined1 *)((int)param_1 + 0x2d) = 1;
  }
  return param_1;
}



// Function: FUN_100c3dd0 at 100c3dd0
// Size: 40 bytes

void FUN_100c3dd0(void)

{
  FUN_100c3d2c(0);
  return;
}



// Function: FUN_100c3df8 at 100c3df8
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3df8(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5,
                 undefined4 param_6)

{
  if (param_3 == 0) {
    param_3 = _DAT_28030000;
  }
  FUN_100d90e4(param_1,param_2,0,param_3);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 0x1d) = param_4;
  *(undefined1 *)(param_1 + 0x1e) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(int *)(param_1 + 0x18) = param_3;
  return;
}



// Function: FUN_100c3e70 at 100c3e70
// Size: 112 bytes

void FUN_100c3e70(int *param_1)

{
  if (*(char *)((int)param_1 + 0x1f) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1);
    FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  }
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100c3ee0 at 100c3ee0
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3ee0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x20) == *(int *)(_DAT_a89f0000 + 0x4c)) {
      *(undefined4 *)(_DAT_a89f0000 + 0x50) = 0;
    }
    else {
      FUN_10117884((int)*(int **)(param_1 + 0x20) +
                   (int)*(short *)(**(int **)(param_1 + 0x20) + 0x248));
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}



// Function: FUN_100c3f60 at 100c3f60
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3f60(int param_1)

{
  if (((*(int *)(param_1 + 0x24) != 0) &&
      (*(int *)(param_1 + 0x24) != *(int *)(_DAT_a89f0000 + 0x4c))) &&
     ((*(int *)(param_1 + 0x28) == 0 || (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x18))))) {
    FUN_10117884((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x248));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



// Function: FUN_100c4020 at 100c4020
// Size: 164 bytes

void FUN_100c4020(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x148));
  if ((iVar1 != 0) && (param_1[5] != 0)) {
    if (*(char *)(param_1 + 7) == '\0') {
      uVar2 = 0x65;
    }
    else {
      uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x150) + (int)param_1);
    }
    FUN_10117884(param_1[5] + (int)*(short *)(*(int *)param_1[5] + 0x38),uVar2,param_1);
  }
  return;
}



// Function: FUN_100c40c4 at 100c40c4
// Size: 132 bytes

void FUN_100c40c4(int *param_1)

{
  int iVar1;
  int local_2c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140));
  if ((iVar1 != 0) &&
     ((FUN_100f4f94(param_1[6],param_1), *(char *)((int)param_1 + 0x1f) != '\0' ||
      (param_1[1] == 0x69)))) {
    FUN_100f4f94(**(undefined4 **)(local_2c + -0xeac),param_1);
  }
  return;
}



// Function: FUN_100c4148 at 100c4148
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4148(int param_1,int param_2,int param_3,int param_4)

{
  if (((param_2 == 0x24) && (param_3 == _DAT_a89f0000)) && (*(int *)(param_1 + 4) == 0x69)) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x228));
    return;
  }
  if (param_2 == 0x23) {
    if ((param_3 == _DAT_a89f0000) && (param_4 == *(int *)(param_1 + 0x24))) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    if ((param_3 == _DAT_a89f0000) && (param_4 == *(int *)(param_1 + 0x20))) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  if (((param_2 == 0x1c) && (param_3 == *(int *)(param_1 + 0x18))) || (param_2 == 0x1e)) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x228));
  }
  return;
}



// Function: FUN_100c423c at 100c423c
// Size: 56 bytes

void FUN_100c423c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  return;
}



// Function: FUN_100c4280 at 100c4280
// Size: 76 bytes

void FUN_100c4280(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x220),param_1);
  }
  return;
}



// Function: FUN_100c42d4 at 100c42d4
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42d4(int *param_1,int param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
  param_1[9] = _DAT_a89f0000[0x13];
  param_1[10] = param_1[6];
  if (param_2 != 0) {
    FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1f8),param_2);
    param_1[8] = param_2;
  }
  return;
}



// Function: FUN_100c435c at 100c435c
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c435c(int *param_1)

{
  if (*(char *)(param_1 + 7) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),param_1[8]);
  }
  else if (param_1[9] != 0) {
    if (_DAT_a89f0000[0x14] == param_1[6]) {
      FUN_10117884((int)*(short *)(*_DAT_a89f0000 + 0x1f8) + (int)_DAT_a89f0000,param_1[9],
                   param_1[10]);
    }
  }
  return;
}



// Function: FUN_100c43ec at 100c43ec
// Size: 8 bytes

undefined1 * FUN_100c43ec(void)

{
  return &DAT_2c090000;
}



// Function: FUN_100c43fc at 100c43fc
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100c43fc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x84), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x80830018;
    FUN_100b02d0(param_1 + 0x1f);
    *(undefined1 *)(param_1 + 0xf) = 0;
    uVar1 = _DAT_4182001c;
    param_1[0xd] = _DAT_41820018;
    param_1[0xe] = uVar1;
    param_1[0x10] = 0;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    param_1[0xc] = 0;
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    *(undefined1 *)(param_1 + 0x11) = 0;
    uVar1 = _DAT_4182001c;
    param_1[0x12] = _DAT_41820018;
    param_1[0x13] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0x14] = _DAT_41820018;
    param_1[0x15] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0x16] = _DAT_41820018;
    param_1[0x17] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0x18] = _DAT_41820018;
    param_1[0x19] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0x1a] = _DAT_41820018;
    param_1[0x1b] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0x1c] = _DAT_41820018;
    param_1[0x1d] = uVar1;
    param_1[0x1e] = 0;
    param_1[0x1f] = _DAT_63e30000;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return param_1;
}



// Function: FUN_100c4520 at 100c4520
// Size: 40 bytes

void FUN_100c4520(void)

{
  FUN_100c43fc(0);
  return;
}



// Function: FUN_100c4548 at 100c4548
// Size: 92 bytes

void FUN_100c4548(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000038;
  
  FUN_100c3df8(param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x40) = param_8;
  uVar1 = in_stack_00000038[1];
  *(undefined4 *)(param_1 + 0x34) = *in_stack_00000038;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



// Function: FUN_100c45a4 at 100c45a4
// Size: 76 bytes

void FUN_100c45a4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x40) +
                 (int)*(short *)(**(int **)(param_1 + 0x40) + 0x778),param_2,1);
  }
  return;
}



// Function: FUN_100c45f0 at 100c45f0
// Size: 92 bytes

uint FUN_100c45f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 == (int *)0x0) {
    iVar2 = FUN_10000240();
    uVar1 = (uint)(iVar2 == 0);
  }
  else {
    uVar1 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x6f0));
  }
  return uVar1;
}



// Function: FUN_100c464c at 100c464c
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c464c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x2b8),param_1 + 0x34,
                       _DAT_9421ffb0);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x18), piVar2 != (int *)0x0)) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x220) + (int)piVar2);
  }
  return;
}



// Function: FUN_100c46c8 at 100c46c8
// Size: 80 bytes

void FUN_100c46c8(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x6f8),param_2);
  }
  return;
}



// Function: FUN_100c4718 at 100c4718
// Size: 84 bytes

void FUN_100c4718(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x700),param_2);
  }
  return;
}



// Function: FUN_100c476c at 100c476c
// Size: 168 bytes

int FUN_100c476c(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined1 param_6)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x708),param_2,param_3,param_4,param_5,
                 param_6);
  }
  if ((param_2 == '\x02') &&
     ((piVar2 = *(int **)(param_1 + 0x30), piVar2 == (int *)0x0 ||
      (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x538) + (int)piVar2,param_5), iVar1 == 0))))
  {
    param_1 = 0;
  }
  return param_1;
}



// Function: FUN_100c4814 at 100c4814
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4814(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_10000198(_DAT_80410014);
    FUN_100001f8(*(undefined4 *)(param_1 + 0x78));
    FUN_100ef580(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}



// Function: FUN_100c48a0 at 100c48a0
// Size: 268 bytes

void FUN_100c48a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  
  if (param_1[0xc] == 0) {
    if (param_1[0x1e] == 0) {
      iVar1 = FUN_100f1640(0x6c);
      param_1[0x1e] = iVar1;
      FUN_10000180(param_1[0x1e]);
    }
    uVar2 = FUN_100016b0();
    FUN_100005a0(uVar2,*(undefined4 *)(param_1[0x1e] + 0x18));
    iVar1 = param_1[0x1e];
    uVar2 = *(undefined4 *)(**(int **)(iVar1 + 0x18) + 6);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(**(int **)(iVar1 + 0x18) + 2);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    FUN_10117884(**(int **)(local_2c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x4f8));
    FUN_10000198(param_1[0x1e]);
  }
  else {
    if (param_1[0x1e] != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x180) + (int)param_1);
    }
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  }
  return;
}



// Function: FUN_100c49c8 at 100c49c8
// Size: 192 bytes

void FUN_100c49c8(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_1[0x1e] = *(int *)(param_2 + 0x78);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x44);
    param_1[0x1f] = *(int *)(param_2 + 0x7c);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x44);
    iVar1 = *(int *)(param_2 + 0x4c);
    param_1[0x12] = *(int *)(param_2 + 0x48);
    param_1[0x13] = iVar1;
    iVar1 = *(int *)(param_2 + 0x54);
    param_1[0x14] = *(int *)(param_2 + 0x50);
    param_1[0x15] = iVar1;
    iVar1 = *(int *)(param_2 + 0x5c);
    param_1[0x16] = *(int *)(param_2 + 0x58);
    param_1[0x17] = iVar1;
    iVar1 = *(int *)(param_2 + 100);
    param_1[0x18] = *(int *)(param_2 + 0x60);
    param_1[0x19] = iVar1;
    iVar1 = *(int *)(param_2 + 0x6c);
    param_1[0x1a] = *(int *)(param_2 + 0x68);
    param_1[0x1b] = iVar1;
    iVar1 = *(int *)(param_2 + 0x74);
    param_1[0x1c] = *(int *)(param_2 + 0x70);
    param_1[0x1d] = iVar1;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  return;
}



// Function: FUN_100c4a88 at 100c4a88
// Size: 196 bytes

void FUN_100c4a88(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int local_28;
  int iStack_24;
  undefined1 auStack_20 [16];
  
  if ((*(char *)((int)param_1 + 0x3d) != '\0') &&
     (piVar1 = (int *)param_1[0xc], piVar1 != (int *)0x0)) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x600),auStack_20);
    FUN_100e1264(param_1 + 0x16,auStack_20);
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    local_28 = param_1[0x16];
    iStack_24 = param_1[0x17];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),*(undefined1 *)(param_1 + 0x11),
                 param_1 + 0x12,param_1 + 0x14,&local_28,param_2);
    param_1[0x16] = local_28;
    param_1[0x17] = iStack_24;
  }
  return;
}



// Function: FUN_100c4b4c at 100c4b4c
// Size: 232 bytes

void FUN_100c4b4c(int *param_1,char param_2,char param_3)

{
  FUN_10000030();
  FUN_10002130(10);
  if (param_3 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),*(undefined1 *)(param_1 + 0x11),
                 param_1 + 0x18,param_1 + 0x1a,param_1 + 0x1c,param_2,0);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),*(undefined1 *)(param_1 + 0x11),
                 param_1 + 0x12,param_1 + 0x14,param_1 + 0x16,param_2,param_3);
    if (param_2 != '\0') {
      param_1[0x18] = param_1[0x12];
      param_1[0x19] = param_1[0x13];
      param_1[0x1a] = param_1[0x14];
      param_1[0x1b] = param_1[0x15];
      param_1[0x1c] = param_1[0x16];
      param_1[0x1d] = param_1[0x17];
    }
  }
  return;
}



// Function: FUN_100c4c34 at 100c4c34
// Size: 392 bytes

int * FUN_100c4c34(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar2 = param_1[0xc];
  local_30 = param_1[0x12];
  iStack_2c = param_1[0x13];
  local_38 = param_1[0x14];
  iStack_34 = param_1[0x15];
  local_40 = param_1[0x16];
  iStack_3c = param_1[0x17];
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),
                               *(undefined1 *)(param_1 + 0x11),&local_30,&local_38,&local_40,param_2
                              );
  param_1[0x12] = local_30;
  param_1[0x13] = iStack_2c;
  param_1[0x14] = local_38;
  param_1[0x15] = iStack_34;
  param_1[0x16] = local_40;
  param_1[0x17] = iStack_3c;
  if (piVar1 == param_1) {
    if (param_1[0xc] != iVar2) {
      FUN_10117884((int)*(short *)(*param_1 + 400) + (int)param_1,param_1);
    }
  }
  else {
    if (piVar1 == (int *)0x0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x180));
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 400),param_1);
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
    if (iVar2 != 0) {
      iVar2 = param_1[6];
      if ((iVar2 != 0) && (*(int **)(iVar2 + 0x1c) == param_1)) {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    }
  }
  return piVar1;
}



// Function: FUN_100c4dbc at 100c4dbc
// Size: 304 bytes

int * FUN_100c4dbc(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iStack00000020;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  iVar2 = param_2[1];
  param_1[0x12] = *param_2;
  param_1[0x13] = iVar2;
  iVar2 = param_2[1];
  param_1[0x14] = *param_2;
  param_1[0x15] = iVar2;
  piVar1 = param_1 + 0x16;
  iVar2 = param_2[1];
  *piVar1 = *param_2;
  param_1[0x17] = iVar2;
  param_1[0x1f] = param_3;
  iStack00000020 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),1);
  param_1[0x12] = *piVar1;
  param_1[0x13] = param_1[0x17];
  param_1[0x14] = *piVar1;
  param_1[0x15] = param_1[0x17];
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x12] = piVar1[0x16];
    piVar1[0x13] = piVar1[0x17];
    piVar1[0x14] = piVar1[0x16];
    piVar1[0x15] = piVar1[0x17];
    FUN_10117884((int)*(short *)(*piVar1 + 0x198) + (int)piVar1,1,1);
  }
  return piVar1;
}



// Function: FUN_100c4eec at 100c4eec
// Size: 968 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100c4eec(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_100b02d0(&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  FUN_100b0384(&local_30);
  FUN_10001518();
  piVar3 = (int *)param_1[0xc];
  if (piVar3 == (int *)0x0) {
    local_38 = (int)local_30._0_2_;
    local_34 = (int)local_30._2_2_;
    param_1[0x16] = local_38;
    param_1[0x17] = local_34;
  }
  else {
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x270),local_30,param_1 + 0x16);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar4 = *param_1;
    uVar1 = FUN_100e11c8(param_1 + 0x14);
    FUN_10117884((int)*(short *)(iVar4 + 0x1a0) + (int)param_1,uVar1);
    FUN_100e10f8(&local_60,param_1 + 0x16,param_1 + 0x12);
    iVar4 = FUN_10003768(local_5c);
    if ((*(short *)((int)param_1 + 0x7e) <= iVar4) ||
       (iVar4 = FUN_10003768(local_60), *(short *)(param_1 + 0x1f) <= iVar4)) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  local_40 = _DAT_41820018;
  uStack_3c = _DAT_4182001c;
  if ((*(char *)(param_1 + 0x20) != '\0') || (*(char *)((int)param_1 + 0x3e) != '\0')) {
    if ((param_1[0x10] != 0) && (param_1[0xc] != 0)) {
      local_48 = param_1[0x16];
      iStack_44 = param_1[0x17];
      FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x2d0),&local_48);
      FUN_10117884(param_1[0x10] + (int)*(short *)(*(int *)param_1[0x10] + 0x2d8),&local_48);
      FUN_10117884(param_1[0x10] + (int)*(short *)(*(int *)param_1[0x10] + 0x600),auStack_58);
      iVar4 = FUN_100e1aac(auStack_58,&local_48);
      if (iVar4 == 0) {
        FUN_10117884(param_1[0x10] + (int)*(short *)(*(int *)param_1[0x10] + 0x780),&local_48,
                     &local_40);
        FUN_100e1180(param_1 + 0x16,&local_40);
      }
    }
    iVar4 = *param_1;
    uVar1 = FUN_100e11c8(param_1 + 0x14,param_1 + 0x16);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0x1a0),uVar1);
  }
  iVar4 = FUN_100e11c8(&local_40,&DAT_41820018);
  iVar2 = FUN_100e11c8(param_1 + 0x14,param_1 + 0x16);
  if ((iVar2 == 0) && (iVar4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),uVar1,0);
  if (iVar4 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x178) + (int)param_1,&local_40);
    piVar3 = (int *)param_1[0xc];
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4c8));
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  }
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),iVar2);
  if (piVar3 != (int *)0x0) {
    if ((iVar2 == 0) && (iVar4 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x198),uVar1,1);
    piVar3[0x14] = piVar3[0x16];
    piVar3[0x15] = piVar3[0x17];
  }
  return piVar3;
}



// Function: FUN_100c52b4 at 100c52b4
// Size: 392 bytes

int * FUN_100c52b4(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_30 [10];
  short local_26;
  short local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x11) = 2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  if (*(char *)(param_1 + 0x20) == '\0') {
    param_1[0x16] = param_1[0x14];
    param_1[0x17] = param_1[0x15];
  }
  else {
    iVar1 = FUN_100031c8(6,auStack_30);
    if (iVar1 != 0) {
      local_18 = CONCAT22(local_26,local_24);
      if (param_1[0xc] == 0) {
        local_20 = (int)local_26;
        local_1c = (int)local_24;
        param_1[0x16] = local_20;
        param_1[0x17] = local_1c;
      }
      else {
        FUN_100b0384(&local_18);
        FUN_10003318();
        FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x270),local_18,
                     param_1 + 0x16);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),1);
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),1,0);
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),1);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x180));
  }
  return piVar2;
}



// Function: FUN_100c5444 at 100c5444
// Size: 116 bytes

undefined4 * FUN_100c5444(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x38), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x4085000c;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  return param_1;
}



// Function: FUN_100c54b8 at 100c54b8
// Size: 40 bytes

void FUN_100c54b8(void)

{
  FUN_100c5444(0);
  return;
}



// Function: FUN_100c54e0 at 100c54e0
// Size: 44 bytes

void FUN_100c54e0(void)

{
  FUN_100c3df8();
  return;
}



// Function: FUN_100c550c at 100c550c
// Size: 76 bytes

void FUN_100c550c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  FUN_100c3e70(param_1);
  return;
}



// Function: FUN_100c5558 at 100c5558
// Size: 72 bytes

void FUN_100c5558(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}



// Function: FUN_100c55a8 at 100c55a8
// Size: 112 bytes

undefined4 * FUN_100c55a8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x3c), param_1 != (undefined4 *)0x0)) {
    FUN_100c5444(param_1);
    *param_1 = &DAT_3860ffff;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return param_1;
}



// Function: FUN_100c5618 at 100c5618
// Size: 40 bytes

void FUN_100c5618(void)

{
  FUN_100c55a8(0);
  return;
}



// Function: FUN_100c5640 at 100c5640
// Size: 44 bytes

void FUN_100c5640(void)

{
  FUN_100c54e0();
  return;
}



// Function: FUN_100c566c at 100c566c
// Size: 304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c566c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100c54e0(param_1,param_2,param_3,param_4,param_5);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    FUN_100034f8(param_7);
    piVar2 = (int *)FUN_100b4eac(0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xa8),param_7,0);
    param_1[0xc] = (int)piVar2;
    piVar2 = (int *)FUN_100b4eac(0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xa8),param_8,0);
    param_1[0xd] = (int)piVar2;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100c579c at 100c579c
// Size: 156 bytes

void FUN_100c579c(int *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_1[0xc] != 0) {
    if (param_1[0xd] != 0) {
      local_10 = *(undefined4 *)(param_1[0xc] + 4);
      uStack_c = *(undefined4 *)(param_1[0xc] + 8);
      local_18 = *(undefined4 *)(param_1[0xd] + 4);
      uStack_14 = *(undefined4 *)(param_1[0xd] + 8);
      FUN_100037e0(&local_10,&local_18,0,0);
      FUN_10117884((int)*(short *)(*param_1 + 0x158) + (int)param_1);
    }
  }
  return;
}



// Function: FUN_100c5838 at 100c5838
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5838(int *param_1)

{
  int iVar1;
  int local_14c;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = _DAT_41820010;
    _DAT_41820010 = auStack_128;
    iVar1 = FUN_10000090(auStack_128);
    if (iVar1 == 0) {
      FUN_100ef088(0xfffffffe,**(undefined4 **)(local_14c + -0xe48),
                   **(undefined4 **)(local_14c + -0xed4));
      FUN_100db2f4();
      _DAT_41820010 = local_20;
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),(int)local_28,local_24);
      FUN_100db158((int)local_28,local_24);
    }
  }
  FUN_100c4280(param_1);
  return;
}



// Function: FUN_100c5918 at 100c5918
// Size: 200 bytes

void FUN_100c5918(int param_1,short param_2)

{
  undefined1 local_110 [260];
  
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x34) + 4) != 0x6e756c6c) {
      local_110[0] = 0;
      FUN_100d8c30((int)param_2,0x80,local_110);
      FUN_10117884((int)*(int **)(param_1 + 0x34) +
                   (int)*(short *)(**(int **)(param_1 + 0x34) + 0x160),0x6572726e,(int)param_2);
      FUN_10117884((int)*(int **)(param_1 + 0x34) +
                   (int)*(short *)(**(int **)(param_1 + 0x34) + 0x168),0x65727273,local_110);
    }
  }
  return;
}



// Function: FUN_100c59e8 at 100c59e8
// Size: 112 bytes

undefined4 * FUN_100c59e8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x3c), param_1 != (undefined4 *)0x0)) {
    FUN_100c5444(param_1);
    *param_1 = 0x8123000c;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return param_1;
}



// Function: FUN_100c5a58 at 100c5a58
// Size: 40 bytes

void FUN_100c5a58(void)

{
  FUN_100c59e8(0);
  return;
}



// Function: FUN_100c5a80 at 100c5a80
// Size: 76 bytes

undefined4 FUN_100c5a80(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x30) +
                         (int)*(short *)(**(int **)(param_1 + 0x30) + 200));
  }
  return uVar1;
}



// Function: FUN_100c5acc at 100c5acc
// Size: 344 bytes

undefined4 FUN_100c5acc(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_34;
  
  if (param_1[0xc] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar2 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0));
      if ((uVar2 & 0xf) == 3) {
        uVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1);
        FUN_10117884((int)*(short *)(*param_1 + 0x168) + (int)param_1,uVar3);
      }
      else {
        uVar2 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0));
        if ((uVar2 & 0xf) == 2) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
          FUN_10117884(**(int **)(local_34 + -0xedc) +
                       (int)*(short *)(*(int *)**(int **)(local_34 + -0xedc) + 0x4a0),param_1);
          uVar1 = 0;
        }
      }
    }
    else {
      uVar2 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0));
      if (((uVar2 & 0xf) == 2) && (param_1[0xd] == 0)) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



// Function: FUN_100c5c24 at 100c5c24
// Size: 84 bytes

undefined4 FUN_100c5c24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x30) +
                         (int)*(short *)(**(int **)(param_1 + 0x30) + 0xb0));
  }
  return uVar1;
}



// Function: FUN_100c5c80 at 100c5c80
// Size: 120 bytes

void FUN_100c5c80(int *param_1)

{
  uint uVar1;
  
  if ((param_1[0xc] != 0) &&
     (uVar1 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0)),
     (uVar1 & 0xf) == 1)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1);
  }
  return;
}



// Function: FUN_100c5cf8 at 100c5cf8
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5cf8(void)

{
  FUN_100c1c8c(&DAT_41820070,_DAT_2f090000,0x30,0x419a0034,0x80a30008);
  FUN_100c1c8c(&DAT_2c090000,_DAT_7f892840,0x84,0x409d0028,&DAT_41820070);
  FUN_100c1c8c(0x7c844840,_DAT_80c30024,0x38,0x81860014,&DAT_41820070);
  FUN_100c1c8c(&DAT_3b600000,_DAT_60670000,0x3c,0xa8660010,0x7c844840);
  FUN_100c1c8c(&DAT_48000044,_DAT_7c633814,0x3c,0x3880ffff,0x7c844840);
  return;
}



// Function: FUN_100c5dcc at 100c5dcc
// Size: 104 bytes

undefined4 * FUN_100c5dcc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = &DAT_48000008;
  }
  return param_1;
}



// Function: FUN_100c5e34 at 100c5e34
// Size: 40 bytes

void FUN_100c5e34(void)

{
  FUN_100c5dcc(0);
  return;
}



// Function: FUN_100c5e5c at 100c5e5c
// Size: 440 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5e5c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar3 = *(int **)(param_1 + 0x18);
  piVar4 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x230));
  }
  if (piVar4 != (int *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = _DAT_41820010;
    _DAT_41820010 = auStack_128;
    iVar1 = FUN_10000090(auStack_128);
    if (iVar1 == 0) {
      if (*(char *)(piVar4 + 7) == '\0') {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x108));
      }
      else {
        FUN_10117884((int)*(short *)(*piVar4 + 0x110) + (int)piVar4);
      }
      _DAT_41820010 = local_20;
    }
    else {
      iVar2 = piVar4[1];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = 0;
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x128));
      iVar1 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xa8));
      if (iVar1 != 0) {
        piVar4 = (int *)FUN_100f57c8(piVar4);
      }
      FUN_100db22c((int)local_28,local_24,(int)(short)iVar2);
      FUN_100db158((int)local_28,local_24);
    }
    if (*(char *)((int)piVar4 + 0x1f) != '\0') {
      FUN_10117884((int)*(short *)(*piVar4 + 0x138) + (int)piVar4);
    }
    *(bool *)(piVar4 + 7) = *(char *)(piVar4 + 7) == '\0';
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x118));
  }
  return;
}



// Function: FUN_100c6014 at 100c6014
// Size: 48 bytes

void FUN_100c6014(void)

{
  FUN_100c3df8();
  return;
}



// Function: FUN_100c604c at 100c604c
// Size: 112 bytes

undefined4 * FUN_100c604c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100d94c8(param_1);
    *param_1 = &DAT_38600000;
    param_1[7] = 0;
  }
  return param_1;
}



// Function: FUN_100c60bc at 100c60bc
// Size: 40 bytes

void FUN_100c60bc(void)

{
  FUN_100c604c(0);
  return;
}



// Function: FUN_100c60e4 at 100c60e4
// Size: 36 bytes

void FUN_100c60e4(void)

{
  FUN_100d9588();
  return;
}



// Function: FUN_100c6108 at 100c6108
// Size: 44 bytes

void FUN_100c6108(void)

{
  int iVar1;
  
  iVar1 = FUN_100d9860();
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}



// Function: FUN_100c6134 at 100c6134
// Size: 68 bytes

void FUN_100c6134(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_100d978c(param_1);
  return;
}



// Function: FUN_100c6178 at 100c6178
// Size: 240 bytes

void FUN_100c6178(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0x65) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x230));
    if ((iVar1 == 0) || (*(int **)(iVar1 + 0x18) != param_1)) {
      FUN_100da260(param_1,0x65);
    }
    else {
      uVar2 = FUN_100f5754(0);
      uVar3 = FUN_100c5dcc(0);
      FUN_100f5754(uVar2);
      FUN_100c6014(uVar3,0x65,param_1);
      FUN_10117884((int)*(short *)(*param_1 + 0x208) + (int)param_1,uVar3);
    }
  }
  else {
    FUN_100da260(param_1,param_2);
  }
  return;
}



// Function: FUN_100c6268 at 100c6268
// Size: 76 bytes

void FUN_100c6268(int *param_1)

{
  FUN_100da3f0(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x210));
  return;
}



// Function: FUN_100c62b4 at 100c62b4
// Size: 196 bytes

void FUN_100c62b4(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_2c;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x230));
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x140) + (int)piVar2), iVar3 != 0)) {
    cVar1 = *(char *)(piVar2 + 7);
    iVar3 = piVar2[1];
    FUN_100f27d0(0x65,1);
    FUN_10117884(**(int **)(local_2c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x480),cVar1 != '\0',iVar3)
    ;
  }
  return;
}



// Function: FUN_100c637c at 100c637c
// Size: 740 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c637c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piStack0000001c;
  int local_264;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 != (int *)0x0) {
    piStack0000001c = param_2;
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x148));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x140)),
       iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
    }
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_2c = _DAT_41820010;
    _DAT_41820010 = auStack_134;
    iVar1 = FUN_10000090(auStack_134);
    if (iVar1 == 0) {
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x100));
      *(undefined1 *)(piStack0000001c + 7) = 1;
      _DAT_41820010 = local_2c;
    }
    else {
      piVar3 = (int *)**(undefined4 **)(local_264 + -0xeac);
      if (piVar3[0x13] == piStack0000001c[8]) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x1f8),piStack0000001c[9],
                     piStack0000001c[10]);
        piStack0000001c[9] = 0;
      }
      iVar1 = piStack0000001c[1];
      if (piStack0000001c == (int *)param_1[7]) {
        param_1[7] = 0;
      }
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x128));
      iVar2 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0xa8));
      if (iVar2 != 0) {
        piStack0000001c = (int *)FUN_100f57c8(piStack0000001c);
      }
      FUN_100db22c((int)local_34,local_30,(int)(short)iVar1);
      FUN_100db158((int)local_34,local_30);
    }
    if (piStack0000001c != (int *)0x0) {
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x118));
    }
    iVar1 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x140));
    if (iVar1 == 0) {
      iVar1 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0xa8));
      if (iVar1 == 0) {
        FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x128));
      }
      else {
        FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x128));
        FUN_100f57c8(piStack0000001c);
      }
    }
    else {
      param_1[7] = (int)piStack0000001c;
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x120));
    }
  }
  return;
}



// Function: FUN_100c66a8 at 100c66a8
// Size: 176 bytes

void FUN_100c66a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar3 = *(int **)(param_1 + 0x1c);
    if (*(char *)(piVar3 + 7) != '\0') {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xf8));
    }
    FUN_10117884((int)*(int **)(param_1 + 0x1c) +
                 (int)*(short *)(**(int **)(param_1 + 0x1c) + 0x128));
    iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x1c) +
                         (int)*(short *)(**(int **)(param_1 + 0x1c) + 0xa8));
    if (iVar1 != 0) {
      uVar2 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  return;
}



// Function: FUN_100c6758 at 100c6758
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6758(void)

{
  FUN_100c1c8c(&DAT_80410014,_DAT_80010040,0x30,&DAT_30210038,&DAT_41820070);
  FUN_100c1c8c(0x7c1de840,_DAT_7c0803a6,0x20,&DAT_4e800020,_FUN_10116c28);
  return;
}



// Function: FUN_100c67b4 at 100c67b4
// Size: 112 bytes

undefined4 * FUN_100c67b4(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_100f56e4(8);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = param_3;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = param_3;
  }
  return param_1;
}



// Function: FUN_100c6824 at 100c6824
// Size: 208 bytes

undefined1 FUN_100c6824(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 6) = 0;
  if (*(int *)(*param_1 + 0xa8) != 0) {
    if ((*(char *)(param_1 + 1) == '\0') ||
       (iVar1 = FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x3a8)), iVar1 == 0)) {
      iVar1 = FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x838));
      *(char *)((int)param_1 + 5) = (char)iVar1;
      if (iVar1 != 0) {
        FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x840),0);
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 6) = 1;
    }
    return *(undefined1 *)((int)param_1 + 6);
  }
  return 0;
}



// Function: FUN_100c68f4 at 100c68f4
// Size: 152 bytes

void FUN_100c68f4(int *param_1)

{
  int iVar1;
  
  if ((((*(int *)(*param_1 + 0xa8) != 0) && (*(char *)((int)param_1 + 6) == '\0')) &&
      (*(char *)((int)param_1 + 5) != '\0')) &&
     (iVar1 = FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x838)), iVar1 == 0)) {
    FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x840),1);
  }
  return;
}



// Function: FUN_100c698c at 100c698c
// Size: 96 bytes

void FUN_100c698c(undefined4 param_1,short param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10000a80();
  FUN_100db26c();
  FUN_10117884((int)*(short *)(*piVar1 + 0x858) + (int)piVar1,(int)param_2);
  return;
}



// Function: FUN_100c69f4 at 100c69f4
// Size: 128 bytes

undefined4 * FUN_100c69f4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x88), param_1 != (undefined4 *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = &DAT_90010008;
    param_1[0x21] = 0;
    *(undefined1 *)((int)param_1 + 0x3e) = 1;
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
  }
  return param_1;
}



// Function: FUN_100c6a74 at 100c6a74
// Size: 40 bytes

void FUN_100c6a74(void)

{
  FUN_100c69f4(0);
  return;
}



// Function: FUN_100c6a9c at 100c6a9c
// Size: 128 bytes

void FUN_100c6a9c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x5f0),1);
  FUN_100c4548(param_1,400,param_2,0,0,0,param_2,uVar1);
  *(int **)(param_1 + 0x84) = param_2;
  return;
}



// Function: FUN_100c6b1c at 100c6b1c
// Size: 8 bytes

undefined1 * FUN_100c6b1c(void)

{
  return &DAT_9421ffc0;
}



// Function: FUN_100c6b2c at 100c6b2c
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100c6b2c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa8), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_607f0000;
    param_1[0x20] = 1;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)((int)param_1 + 0x85) = 0;
    *(undefined1 *)((int)param_1 + 0x86) = 1;
    uVar3 = _DAT_809f0010;
    uVar2 = _DAT_809f000c;
    uVar1 = _DAT_809f0008;
    param_1[0x22] = _DAT_809f0004;
    param_1[0x23] = uVar1;
    param_1[0x24] = uVar2;
    param_1[0x25] = uVar3;
    uVar2 = _DAT_8062da50;
    uVar1 = _DAT_8062da4c;
    param_1[0x26] = _DAT_8062da48;
    param_1[0x27] = uVar1;
    param_1[0x28] = uVar2;
    *(undefined2 *)(param_1 + 0x29) = 0xffff;
    *(undefined1 *)((int)param_1 + 0xa6) = 0;
  }
  return param_1;
}



// Function: FUN_100c6be4 at 100c6be4
// Size: 40 bytes

void FUN_100c6be4(void)

{
  FUN_100c6b2c(0);
  return;
}



// Function: FUN_100c6c0c at 100c6c0c
// Size: 132 bytes

void FUN_100c6c0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
                 undefined1 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x28);
  }
  FUN_10105b08(param_1,uVar1,param_2,param_3,param_4,param_5,param_6);
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  *(undefined4 *)(param_1 + 0x98) = *param_7;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  return;
}



// Function: FUN_100c6c9c at 100c6c9c
// Size: 516 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6c9c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int local_158;
  int iStack_154;
  int iStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
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
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x20] = iVar1;
    iVar1 = *param_1;
    iVar4 = *param_2;
    uVar2 = FUN_10117884((int)*(short *)(iVar4 + 0xf0) + (int)param_2,iVar1,iVar4,
                         *(undefined4 *)(iVar4 + 0xf4));
    FUN_10117884((int)*(short *)(iVar1 + 0x748) + (int)param_1,uVar2,0);
    iVar4 = *param_1;
    iVar1 = *param_2;
    uVar2 = FUN_10117884((int)*(short *)(iVar1 + 0xf0) + (int)param_2,iVar1,
                         *(undefined4 *)(iVar1 + 0xf4));
    FUN_10117884((int)*(short *)(iVar4 + 0x738) + (int)param_1,uVar2,0);
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0x86) = uVar3;
    FUN_10117884((int)*(short *)(*param_2 + 0x128) + (int)param_2,&local_148);
    param_1[0x22] = local_148;
    param_1[0x23] = iStack_144;
    param_1[0x24] = iStack_140;
    param_1[0x25] = iStack_13c;
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x29) = (short)iVar1;
    if (iVar1 != -1) {
      FUN_100f06dc(iVar1,&local_158);
      param_1[0x26] = local_158;
      param_1[0x27] = iStack_154;
      param_1[0x28] = iStack_150;
    }
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0xa6) = uVar3;
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100c6ea0 at 100c6ea0
// Size: 256 bytes

void FUN_100c6ea0(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0x80));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x84));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x85));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x86));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),param_1 + 0x88);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xa4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xa6));
  return;
}



// Function: FUN_100c6fa0 at 100c6fa0
// Size: 144 bytes

void FUN_100c6fa0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  FUN_10107758(param_1,param_2);
  if (*(char *)(param_1 + 0x86) == '\0') {
    FUN_100e1a64(auStack_18,param_2);
    FUN_100e10f8(auStack_20,auStack_18,param_1 + 0x34);
    uVar1 = FUN_100e1580(param_1 + 0x88,1);
    FUN_100e1180(uVar1,auStack_20);
  }
  return;
}



// Function: FUN_100c7030 at 100c7030
// Size: 92 bytes

void FUN_100c7030(int *param_1,undefined4 param_2)

{
  undefined1 auStack_18 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_18);
  FUN_100e1aac(auStack_18,param_2);
  return;
}



// Function: FUN_100c708c at 100c708c
// Size: 408 bytes

void FUN_100c708c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  short local_54;
  short local_52;
  undefined1 auStack_4c [16];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_4c);
  uVar1 = FUN_100e1580(param_1 + 0x22,1);
  uVar2 = FUN_100e1580(auStack_4c,1);
  FUN_100e10f8(&local_64,uVar2,uVar1);
  uVar1 = FUN_100e1580(param_1 + 0x22,0);
  uVar2 = FUN_100e1580(auStack_4c,0);
  FUN_100e10b0(&local_6c,uVar2,uVar1);
  local_3c = local_6c;
  local_38 = local_68;
  local_34 = local_64;
  local_30 = local_60;
  *param_2 = local_6c;
  param_2[1] = local_68;
  param_2[2] = local_64;
  param_2[3] = local_60;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),local_70);
  if (((int)local_70[0] & 0x80U) != 0) {
    FUN_100b02d0(&local_54);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),&local_54);
    local_5c = (int)local_54;
    local_58 = (int)local_52;
    uVar1 = FUN_100e1580(param_2,1);
    FUN_100e11a4(uVar1,&local_5c);
  }
  return;
}



// Function: FUN_100c7224 at 100c7224
// Size: 156 bytes

void FUN_100c7224(int *param_1)

{
  int local_4c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,auStack_28);
  FUN_10002118(*(int *)(local_4c + -0xb0) + 0xb2);
  FUN_10002130(0xb);
  FUN_100b0578(auStack_28);
  FUN_10002148();
  return;
}



// Function: FUN_100c72c0 at 100c72c0
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c72c0(int *param_1,char param_2,char param_3)

{
  if (param_2 != *(char *)((int)param_1 + 0x85)) {
    *(char *)((int)param_1 + 0x85) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_41860018,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_41860018,0x75,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}



// Function: FUN_100c7384 at 100c7384
// Size: 108 bytes

void FUN_100c7384(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}



// Function: FUN_100c73f0 at 100c73f0
// Size: 196 bytes

void FUN_100c73f0(int *param_1,int param_2)

{
  if (param_2 == 0x1f) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
  }
  else if (param_2 == 0x20) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
  }
  else if (param_2 == 0x21) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),*(char *)(param_1 + 0x21) == '\0',
                 1);
  }
  else {
    FUN_100dafe8();
  }
  return;
}



// Function: FUN_100c74b4 at 100c74b4
// Size: 120 bytes

void FUN_100c74b4(int *param_1)

{
  undefined1 auStack_8 [4];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
  FUN_100007e0(8,auStack_8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
  return;
}



// Function: FUN_100c752c at 100c752c
// Size: 108 bytes

bool FUN_100c752c(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = FUN_1010900c(param_1);
  if (iVar1 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x98);
    uStack_14 = *(undefined4 *)(param_1 + 0x9c);
    uStack_10 = *(undefined4 *)(param_1 + 0xa0);
    FUN_100f0788(&local_18);
    FUN_10000030();
  }
  return iVar1 != 0;
}



// Function: FUN_100c7598 at 100c7598
// Size: 128 bytes

void FUN_100c7598(int *param_1)

{
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,auStack_28);
  FUN_100b0578(auStack_28);
  FUN_10001da0();
  return;
}



// Function: FUN_100c7618 at 100c7618
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7618(int *param_1,char param_2,char param_3)

{
  int iVar1;
  
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_60000000,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_60000000,0x7a,0);
    }
    if ((param_3 != '\0') &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x678)), iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}



// Function: FUN_100c76f4 at 100c76f4
// Size: 104 bytes

void FUN_100c76f4(int *param_1,undefined4 param_2,char param_3)

{
  if ((*(char *)((int)param_1 + 0x86) != '\0') && (FUN_100e1630(param_1 + 0x22), param_3 != '\0')) {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_100c775c at 100c775c
// Size: 80 bytes

void FUN_100c775c(int *param_1,undefined4 *param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)((int)param_1 + 0x9e) = *param_2;
  *(uint *)((int)param_1 + 0xa2) = uVar1 & 0xffff0000;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  }
  return;
}



// Function: FUN_100c77ac at 100c77ac
// Size: 80 bytes

void FUN_100c77ac(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  param_1[0x26] = *param_2;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  }
  return;
}



// Function: FUN_100c7804 at 100c7804
// Size: 132 bytes

void FUN_100c7804(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
  local_18 = param_1[0xd];
  iStack_14 = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  if ((param_3 != '\0') && (iVar1 = FUN_100e11c8(param_1 + 0xd,&local_18), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_100c7888 at 100c7888
// Size: 232 bytes

void FUN_100c7888(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char local_28 [4];
  int local_24;
  int local_20;
  short local_1c;
  short local_1a;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),local_28);
  if (((int)local_28[0] & 0x80U) != 0) {
    FUN_100b02d0(&local_1c);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),&local_1c);
    local_24 = (int)local_1c;
    local_20 = (int)local_1a;
    uVar1 = FUN_100e1580(param_2,1);
    FUN_100e11a4(uVar1,&local_24);
  }
  return;
}



// Function: FUN_100c7978 at 100c7978
// Size: 216 bytes

void FUN_100c7978(int *param_1,short param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x410),0x636f6d70);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      uVar2 = FUN_100b25f4(0);
      FUN_100b3460(uVar2,(int)(char)param_2);
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,uVar2,0x5f,param_3);
    }
  }
  else {
    *(char *)(iVar1 + 0xc) = (char)param_2;
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}



// Function: FUN_100c7a50 at 100c7a50
// Size: 104 bytes

void FUN_100c7a50(int *param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x410),0x636f6d70);
  *param_2 = 0;
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 0xc);
  }
  return;
}



// Function: FUN_100c7ab8 at 100c7ab8
// Size: 124 bytes

void FUN_100c7ab8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined2 local_10;
  undefined2 local_e;
  
  local_10 = 1;
  local_e = 1;
  uStack0000001c = param_2;
  iVar1 = FUN_100b04bc(&stack0x0000001c,&local_10);
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x438));
    *(undefined4 *)(param_1[0x1c] + 4) = uStack0000001c;
  }
  return;
}



// Function: FUN_100c7b34 at 100c7b34
// Size: 60 bytes

void FUN_100c7b34(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *param_2 = 0x10001;
  }
  else {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 4);
  }
  return;
}



// Function: FUN_100c7b70 at 100c7b70
// Size: 96 bytes

void FUN_100c7b70(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x86) != '\0') {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    param_1[0x22] = *param_2;
    param_1[0x23] = iVar1;
    param_1[0x24] = iVar2;
    param_1[0x25] = iVar3;
    if (param_3 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
    }
  }
  return;
}



// Function: FUN_100c7bdc at 100c7bdc
// Size: 416 bytes

void FUN_100c7bdc(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
  }
  else if (param_2 == '\x01') {
    iVar2 = *param_1;
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x538),param_5,
                         *(undefined4 *)(iVar2 + 0x53c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x748),uVar1,1);
  }
  else if ((param_2 == '\x02') &&
          (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
          iVar2 != 0)) {
    if (param_1[0x20] == 4) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x21,param_1,0);
    }
    else if (param_1[0x20] == 0xc) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x1f,param_1,0);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x20,param_1,0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
  }
  return;
}



// Function: FUN_100c7d84 at 100c7d84
// Size: 136 bytes

undefined4 * FUN_100c7d84(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc0), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_40820018;
    param_1[0x2a] = 0;
    *(undefined2 *)(param_1 + 0x2b) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    *(undefined2 *)(param_1 + 0x2f) = 0;
  }
  return param_1;
}



// Function: FUN_100c7e0c at 100c7e0c
// Size: 40 bytes

void FUN_100c7e0c(void)

{
  FUN_100c7d84(0);
  return;
}



// Function: FUN_100c7e34 at 100c7e34
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7e34(int *param_1)

{
  int iVar1;
  undefined4 in_r9;
  undefined4 in_r10;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  short in_stack_00000042;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100c6c0c(param_1);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,in_r9,in_r10,in_stack_00000038,
                 in_stack_0000003c,(int)in_stack_00000042);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100c7f28 at 100c7f28
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100c7f28(int param_1)

{
  int iVar1;
  undefined1 auStack_230 [256];
  int *local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_130 = (int *)FUN_10105d2c(param_1);
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_130[0x2c] = 0;
    local_130[0x2e] = local_130[0x2c];
    local_130[0x2d] = local_130[0x2e];
    FUN_100012d8(**(int **)(param_1 + 0xa8) + 0x28,auStack_230,
                 *(byte *)(**(int **)(param_1 + 0xa8) + 0x28) + 1);
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar1 = FUN_10000090(auStack_12c);
    if (iVar1 == 0) {
      FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x798),auStack_230,
                   *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),
                   *(undefined4 *)(param_1 + 0xb8),(int)*(short *)(param_1 + 0xbc));
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return local_130;
}



// Function: FUN_100c8068 at 100c8068
// Size: 132 bytes

void FUN_100c8068(int *param_1)

{
  if (param_1[0x2a] != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x840) + (int)param_1,0);
    FUN_100038e8(param_1[0x2a],0,0);
    FUN_10003588(param_1[0x2a]);
    param_1[0x2a] = 0;
  }
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100c80ec at 100c80ec
// Size: 160 bytes

void FUN_100c80ec(int *param_1,int param_2)

{
  int iVar1;
  int local_34;
  
  FUN_10106ff0(param_1,param_2);
  if ((int *)param_1[0x2a] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x2a];
    if (param_2 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x840) + (int)param_1,0);
      *(undefined4 *)(iVar1 + 4) = **(undefined4 **)(local_34 + -0x98);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),1);
      *(int *)(iVar1 + 4) = param_2;
    }
  }
  return;
}



// Function: FUN_100c818c at 100c818c
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c818c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,short param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5e8));
  if (iVar1 == 0) {
    iVar1 = _DAT_80410014;
  }
  *(short *)(param_1 + 0x2f) = param_6;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_3c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_3c,auStack_44);
  uVar2 = FUN_100b1c84(param_2);
  uVar3 = FUN_100b0578(auStack_44);
  iVar4 = FUN_10001068(iVar1,uVar3,uVar2,0,0,0,0,(int)param_6);
  FUN_100db26c();
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)**(undefined4 **)(iVar1 + 0x8c);
  param_1[0x2a] = iVar4;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),*(undefined1 *)((int)param_1 + 0x85)
               ,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),*(undefined1 *)(param_1 + 0x21),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),param_3,param_4,param_5,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),_DAT_80410014 != iVar1);
  return;
}



// Function: FUN_100c8340 at 100c8340
// Size: 508 bytes

void FUN_100c8340(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  int *local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  int *local_2c [2];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_10001db8(*(int *)(param_1 + 0xa8),&local_38);
    FUN_100db26c(local_38);
    local_2c[0] = *(int **)(*local_38 + 8);
    FUN_100db26c(local_2c[0]);
    iVar1 = 1;
    iVar2 = 0;
    if (-1 < *(short *)(*local_2c[0] + 6)) {
      do {
        iVar3 = *local_2c[0] + iVar2 * 8;
        if (*(short *)(iVar3 + 8) == 0) {
          local_34 = *(undefined2 *)(iVar3 + 10);
          local_32 = *(undefined2 *)(iVar3 + 0xc);
          local_30 = *(undefined2 *)(iVar3 + 0xe);
          iVar1 = FUN_100b22b0(&local_34,param_2);
          break;
        }
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 <= *(short *)(*local_2c[0] + 6));
    }
    if (iVar1 != 0) {
      FUN_100f16a0(local_2c);
      iVar1 = 0;
      if (-1 < *(short *)(*local_2c[0] + 6)) {
        do {
          if (*(ushort *)(*local_2c[0] + iVar1 * 8 + 8) < 4) {
            return;
          }
          iVar1 = (int)(short)((short)iVar1 + 1);
        } while (iVar1 <= *(short *)(*local_2c[0] + 6));
      }
      FUN_100c67b4(auStack_40,param_1,param_3);
      FUN_100c6824(auStack_40);
      FUN_100ee844(auStack_48,*(undefined1 *)(param_1 + 0xa6));
      FUN_10001e00(*(undefined4 *)(param_1 + 0xa8),local_2c[0]);
      FUN_100c68f4(auStack_40);
      FUN_100ee8e8(auStack_48,2);
    }
  }
  FUN_100c775c(param_1,param_2,param_3);
  return;
}



// Function: FUN_100c8640 at 100c8640
// Size: 416 bytes

void FUN_100c8640(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_54;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  FUN_10117884(auStack_28,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  iVar3 = param_1[0x2a];
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)FUN_100b0368(auStack_20,auStack_28);
    iVar3 = FUN_10001ff8(iVar3,*puVar1);
    if (iVar3 != 0) {
      FUN_100ee844(auStack_30,*(undefined1 *)((int)param_1 + 0xa6));
      puVar1 = (undefined4 *)FUN_100b0368(auStack_18,auStack_28);
      iVar3 = FUN_10002010(param_1[0x2a],*puVar1,0xffffffff);
      if (iVar3 != 0) {
        iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x7e0) + (int)param_1);
        iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7f8) + (int)param_1);
        if (iVar2 == iVar3) {
          iVar3 = param_1[0x2e];
        }
        else {
          iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
          iVar3 = iVar3 << ((int)*(short *)(param_1 + 0x2b) & 0x3fU);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),iVar3,1);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
        FUN_10117884(**(int **)(local_54 + -0xedc) +
                     (int)*(short *)(*(int *)**(int **)(local_54 + -0xedc) + 0x450));
      }
      FUN_100ee8e8(auStack_30,2);
    }
  }
  return;
}



// Function: FUN_100c87e0 at 100c87e0
// Size: 400 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c87e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [20];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838));
  uVar2 = _DAT_80a2db8e;
  if (iVar1 != 0) {
    if (DAT_a8bf0002 != '\0') {
      DAT_a8bf0002 = 0;
      iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1);
      DAT_a8bf0002 = '\x01';
      if (iVar1 != 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x600) + (int)param_1,auStack_38);
        FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,auStack_38,auStack_40);
        FUN_10000198(uVar2);
        uVar2 = FUN_100b0578(auStack_40);
        FUN_10000750(iVar1,uVar2);
        FUN_100ef548(iVar1);
      }
      if ((DAT_a8bf0002 != '\0') && (iVar1 != 0)) goto LAB_100c894c;
    }
    uVar2 = *(undefined4 *)(*(int *)param_1[0x2a] + 4);
    *(undefined4 *)(*(int *)param_1[0x2a] + 4) = _DAT_80a2db8e;
    FUN_10000030();
    FUN_100ee844(auStack_48,*(undefined1 *)((int)param_1 + 0xa6));
    FUN_10001fe0(param_1[0x2a]);
    *(undefined4 *)(*(int *)param_1[0x2a] + 4) = uVar2;
    FUN_100ee8e8(auStack_48,2);
  }
LAB_100c894c:
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100c8970 at 100c8970
// Size: 680 bytes

/* WARNING: Removing unreachable block (ram,0x100c8bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100c8970(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_15c [8];
  int *local_154;
  short local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  short local_14a;
  undefined1 auStack_148 [256];
  undefined2 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_154 = (int *)0x0;
  local_150 = *(short *)(_DAT_80a2db8e + 0x10);
  local_14e = *(undefined2 *)(_DAT_80a2db8e + 0x12);
  local_14c = *(undefined2 *)(_DAT_80a2db8e + 0x14);
  local_14a = *(short *)(_DAT_80a2db8e + 0x16);
  FUN_10000198(_DAT_80410014);
  uVar1 = FUN_100b08a4(&local_150,0);
  uVar2 = FUN_100b08a4(&local_150,1);
  FUN_10002b38(uVar2,uVar1);
  FUN_10001bf0((int)local_14a,(int)local_150);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  DAT_4086000c = 1;
  _DAT_2c850000 = param_1;
  FUN_10000198(_DAT_80410014);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),_DAT_80410014);
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar3 = FUN_10000090(auStack_148);
  if (iVar3 == 0) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
    if (iVar3 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_15c);
      FUN_100b0578(auStack_15c);
      local_154 = (int *)FUN_100001b0();
      FUN_100db26c();
      FUN_100b0578(auStack_15c);
      FUN_10002040();
      FUN_10117884((int)*(short *)(*param_1 + 0x488) + (int)param_1);
      FUN_100001c8();
      iVar3 = FUN_100b0870(*local_154 + 2);
      if (iVar3 != 0) {
        FUN_100db2f4(0xffffff94);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    }
    _DAT_41820010 = local_40;
  }
  else if (local_154 != (int *)0x0) {
    local_154 = (int *)FUN_100ef548(local_154);
  }
  FUN_10000198(_DAT_80410014);
  FUN_10002b38(0,0);
  DAT_4086000c = 0;
  _DAT_2c850000 = (int *)0x0;
  return local_154;
}



// Function: FUN_100c8c48 at 100c8c48
// Size: 60 bytes

undefined4 FUN_100c8c48(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10001c08(*(undefined4 *)(param_1 + 0xa8));
  }
  return uVar1;
}



// Function: FUN_100c8c84 at 100c8c84
// Size: 60 bytes

undefined4 FUN_100c8c84(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100037f8(*(undefined4 *)(param_1 + 0xa8));
  }
  return uVar1;
}



// Function: FUN_100c8cc0 at 100c8cc0
// Size: 104 bytes

void FUN_100c8cc0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xa8) == 0) {
    FUN_100012d8(&DAT_7c0803a6,param_2,DAT_7c0803a6 + 1);
  }
  else {
    FUN_100038d0(*(int *)(param_1 + 0xa8),param_2);
  }
  return;
}



// Function: FUN_100c8d28 at 100c8d28
// Size: 60 bytes

undefined4 FUN_100c8d28(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10001c50(*(undefined4 *)(param_1 + 0xa8));
  }
  return uVar1;
}



// Function: FUN_100c8d64 at 100c8d64
// Size: 60 bytes

undefined4 FUN_100c8d64(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10002808(*(undefined4 *)(param_1 + 0xa8));
  }
  return uVar1;
}



// Function: FUN_100c8da0 at 100c8da0
// Size: 224 bytes

void FUN_100c8da0(int param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(byte *)(param_1 + 0x84) = param_2;
  }
  else {
    cVar1 = *(char *)(**(int **)(param_1 + 0xa8) + 0x11);
    if (cVar1 != -1) {
      if ((ushort)(cVar1 != *(char *)(param_1 + 0x84)) != (ushort)((ushort)param_2 * 10)) {
        FUN_100c67b4(auStack_20,param_1,param_3);
        FUN_100c6824(auStack_20);
        FUN_100ee844(auStack_28,*(undefined1 *)(param_1 + 0xa6));
        FUN_10003618(*(undefined4 *)(param_1 + 0xa8),(ushort)param_2 * 10);
        FUN_100c68f4(auStack_20);
        FUN_100ee8e8(auStack_28,2);
      }
    }
    *(byte *)(param_1 + 0x84) = param_2;
  }
  return;
}



// Function: FUN_100c8e80 at 100c8e80
// Size: 88 bytes

void FUN_100c8e80(int *param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_100c76f4(param_1,param_2,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),param_3);
  return;
}



// Function: FUN_100c8ed8 at 100c8ed8
// Size: 88 bytes

void FUN_100c8ed8(int *param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_100c7b70(param_1,param_2,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),param_3);
  return;
}



// Function: FUN_100c8f30 at 100c8f30
// Size: 324 bytes

void FUN_100c8f30(int *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  short local_20;
  short local_1e;
  
  if (param_1[0x2a] != 0) {
    FUN_100c67b4(auStack_38,param_1,param_2);
    FUN_100c6824(auStack_38);
    FUN_100ee844(auStack_40,*(undefined1 *)((int)param_1 + 0xa6));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_30,&local_20);
    FUN_10003828(param_1[0x2a],(int)local_1e,(int)local_20);
    if (*(char *)((int)param_1 + 0x86) != '\0') {
      FUN_100b08a4(&local_20,0);
      sVar1 = FUN_10003768();
      FUN_100b08a4(&local_20,1);
      sVar2 = FUN_10003768();
      FUN_100038e8(param_1[0x2a],(int)sVar2,(int)sVar1);
    }
    FUN_100c68f4(auStack_38);
    FUN_100ee8e8(auStack_40,2);
  }
  return;
}



// Function: FUN_100c9074 at 100c9074
// Size: 152 bytes

void FUN_100c9074(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_20);
  FUN_100c7804(param_1,param_2,param_3);
  iVar1 = FUN_100e1750(param_2,auStack_20);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x830) + (int)param_1,param_3);
  }
  return;
}



// Function: FUN_100c9148 at 100c9148
// Size: 184 bytes

void FUN_100c9148(int param_1,short param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = FUN_10001c08(*(undefined4 *)(param_1 + 0xa8));
    if (iVar1 != param_2) {
      FUN_100c67b4(auStack_20,param_1,param_3);
      FUN_100c6824(auStack_20);
      FUN_100ee844(auStack_28,*(undefined1 *)(param_1 + 0xa6));
      FUN_10001cb0(*(undefined4 *)(param_1 + 0xa8),(int)param_2);
      FUN_100c68f4(auStack_20);
      FUN_100ee8e8(auStack_28,2);
    }
  }
  return;
}



// Function: FUN_100c9200 at 100c9200
// Size: 184 bytes

void FUN_100c9200(int param_1,short param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = FUN_100037f8(*(undefined4 *)(param_1 + 0xa8));
    if (iVar1 != param_2) {
      FUN_100c67b4(auStack_20,param_1,param_3);
      FUN_100c6824(auStack_20);
      FUN_100ee844(auStack_28,*(undefined1 *)(param_1 + 0xa6));
      FUN_10003288(*(undefined4 *)(param_1 + 0xa8),(int)param_2);
      FUN_100c68f4(auStack_20);
      FUN_100ee8e8(auStack_28,2);
    }
  }
  return;
}



// Function: FUN_100c92b8 at 100c92b8
// Size: 360 bytes

void FUN_100c92b8(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 local_128 [256];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  local_128[0] = 0;
  if (param_1[0x2a] != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_128);
    iVar1 = .glue::FUN_10115b60(local_128,param_2,0,1);
    if (iVar1 != 0) {
      FUN_100c67b4(auStack_130,param_1,param_3);
      FUN_100c6824(auStack_130);
      FUN_100ee844(auStack_138,*(undefined1 *)((int)param_1 + 0xa6));
      uVar2 = FUN_100b1c84(param_2);
      FUN_10003168(param_1[0x2a],uVar2);
      iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3c0) + (int)param_1);
      if (iVar1 != 0) {
        iVar1 = *(int *)param_1[0x2a];
        local_28 = *(undefined2 *)(iVar1 + 8);
        local_26 = *(undefined2 *)(iVar1 + 10);
        local_24 = *(undefined2 *)(iVar1 + 0xc);
        local_22 = *(undefined2 *)(iVar1 + 0xe);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x500),&local_28);
      }
      FUN_100c68f4(auStack_130);
      FUN_100ee8e8(auStack_138,2);
    }
  }
  return;
}



// Function: FUN_100c9420 at 100c9420
// Size: 184 bytes

void FUN_100c9420(int param_1,short param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = FUN_10001c50(*(undefined4 *)(param_1 + 0xa8));
    if (iVar1 != param_2) {
      FUN_100c67b4(auStack_20,param_1,param_3);
      FUN_100c6824(auStack_20);
      FUN_100ee844(auStack_28,*(undefined1 *)(param_1 + 0xa6));
      FUN_10001d10(*(undefined4 *)(param_1 + 0xa8),(int)param_2);
      FUN_100c68f4(auStack_20);
      FUN_100ee8e8(auStack_28,2);
    }
  }
  return;
}



// Function: FUN_100c94d8 at 100c94d8
// Size: 204 bytes

void FUN_100c94d8(int param_1,short param_2,short param_3,short param_4,undefined1 param_5)

{
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_100c67b4(auStack_20,param_1,param_5);
    FUN_100c6824(auStack_20);
    FUN_100ee844(auStack_28,*(undefined1 *)(param_1 + 0xa6));
    FUN_10003288(*(undefined4 *)(param_1 + 0xa8),(int)param_3);
    FUN_10001cb0(*(undefined4 *)(param_1 + 0xa8),(int)param_4);
    FUN_10001d10(*(undefined4 *)(param_1 + 0xa8),(int)param_2);
    FUN_100c68f4(auStack_20);
    FUN_100ee8e8(auStack_28,2);
  }
  return;
}



// Function: FUN_100c95bc at 100c95bc
// Size: 188 bytes

void FUN_100c95bc(int *param_1,int param_2,undefined1 param_3)

{
  if (param_2 != param_1[0x2e]) {
    param_1[0x2e] = param_2;
    *(undefined2 *)(param_1 + 0x2b) = 0;
    for (; 0x7fff < param_2; param_2 = param_2 >> 1) {
      *(short *)(param_1 + 0x2b) = *(short *)(param_1 + 0x2b) + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x808),(int)(short)param_2,param_3);
    if (param_1[0x2e] < param_1[0x2c]) {
      FUN_10117884((int)*(short *)(*param_1 + 2000) + (int)param_1,param_1[0x2e],param_3);
    }
  }
  return;
}



// Function: FUN_100c9678 at 100c9678
// Size: 156 bytes

void FUN_100c9678(int *param_1,int param_2,undefined1 param_3)

{
  if (param_2 != param_1[0x2d]) {
    param_1[0x2d] = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810),
                 (int)(short)(param_2 >> ((int)*(short *)(param_1 + 0x2b) & 0x3fU)),param_3);
    if (param_1[0x2c] < param_1[0x2d]) {
      FUN_10117884((int)*(short *)(*param_1 + 2000) + (int)param_1,param_1[0x2d],param_3);
    }
  }
  return;
}



// Function: FUN_100c9714 at 100c9714
// Size: 124 bytes

void FUN_100c9714(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100f0334(param_1[0x2d],param_2,param_1[0x2e]);
  if (iVar1 != param_1[0x2c]) {
    param_1[0x2c] = iVar1;
    FUN_10117884((int)*(short *)(*param_1 + 0x820) + (int)param_1,
                 (int)(short)(iVar1 >> ((int)*(short *)(param_1 + 0x2b) & 0x3fU)),param_3);
  }
  return;
}



// Function: FUN_100c9790 at 100c9790
// Size: 148 bytes

void FUN_100c9790(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),param_4,param_5);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),param_3,param_5);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_5);
  return;
}



// Function: FUN_100c9824 at 100c9824
// Size: 144 bytes

undefined4 FUN_100c9824(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7f8) + (int)param_1);
    if (iVar1 == 1) {
      uVar2 = 2;
    }
    else if (iVar1 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 3;
    }
  }
  return uVar2;
}



// Function: FUN_100c98b4 at 100c98b4
// Size: 156 bytes

void FUN_100c98b4(int *param_1)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  int local_18 [2];
  
  local_18[0] = param_1[0x15];
  local_20 = param_1[0x16];
  iStack_1c = param_1[0x17];
  FUN_1010d2f8(param_1);
  iVar1 = FUN_100b04bc(param_1 + 0x15,local_18);
  if ((iVar1 != 0) || (iVar1 = FUN_100e11c8(param_1 + 0x16,&local_20), iVar1 != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),0);
  }
  return;
}



// Function: FUN_100c9950 at 100c9950
// Size: 8 bytes

undefined1 * FUN_100c9950(void)

{
  return &DAT_39200001;
}



// Function: FUN_100c9960 at 100c9960
// Size: 120 bytes

undefined4 * FUN_100c9960(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc4), param_1 != (undefined4 *)0x0)) {
    FUN_100c7d84(param_1);
    *param_1 = &DAT_48000008;
    *(undefined1 *)(param_1 + 0x30) = 1;
    param_1[0x20] = 0xe;
  }
  return param_1;
}



// Function: FUN_100c99d8 at 100c99d8
// Size: 40 bytes

void FUN_100c99d8(void)

{
  FUN_100c9960(0);
  return;
}



// Function: FUN_100c9a00 at 100c9a00
// Size: 132 bytes

void FUN_100c9a00(int param_1)

{
  char in_r9;
  
  FUN_100c7e34(param_1);
  *(char *)(param_1 + 0xc0) = in_r9;
  if (in_r9 == '\x01') {
    *(undefined4 *)(param_1 + 0x80) = 0xe;
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0xf;
  }
  return;
}



// Function: FUN_100c9a90 at 100c9a90
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c9a90(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar5;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_154;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100c6c9c(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    uVar5 = FUN_10117884((int)*(short *)(*param_2 + 0xe8) + (int)param_2);
    *(undefined1 *)(param_1 + 0x30) = uVar5;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2,*param_2,uVar2);
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,
                 *(undefined4 *)(local_154 + -0xe4c),uVar2,uVar3,uVar4,0x10);
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100c9be0 at 100c9be0
// Size: 172 bytes

void FUN_100c9be0(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*(undefined1 *)(param_1 + 0xc0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0xb0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0xb4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0xb8));
  return;
}



// Function: FUN_100c9c8c at 100c9c8c
// Size: 220 bytes

void FUN_100c9c8c(int *param_1,short param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    if ((param_2 == 0x14) || (param_2 == 0x16)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((bVar1) && (param_1[0x2d] < param_1[0x2c])) ||
       ((!bVar1 && (param_1[0x2c] < param_1[0x2e])))) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850));
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  }
  return;
}



// Function: FUN_100c9d68 at 100c9d68
// Size: 128 bytes

void FUN_100c9d68(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    iVar3 = param_1[0x2c];
    iVar1 = FUN_100f0334(param_1[0x2d] - iVar3,param_2,param_1[0x2e] - iVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 2000),iVar3 + iVar1,
                 *(undefined1 *)((int)param_1 + 0x52));
  }
  return;
}



// Function: FUN_100c9de8 at 100c9de8
// Size: 524 bytes

void FUN_100c9de8(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_54;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  FUN_10117884(auStack_30,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  iVar5 = param_1[0x2c];
  puVar1 = (undefined4 *)FUN_100b0368(auStack_28,auStack_30);
  iVar2 = FUN_10001ff8(param_1[0x2a],*puVar1);
  if ((((iVar2 == 0x14) || (iVar2 == 0x15)) || (iVar2 == 0x16)) || (iVar2 == 0x17)) {
    uVar3 = FUN_10000a98(*(undefined4 *)(local_54 + -0xc44),0x2c0,1);
    FUN_100db26c();
    puVar1 = (undefined4 *)FUN_100b0368(auStack_20,auStack_30);
    FUN_10002010(param_1[0x2a],*puVar1,uVar3);
    FUN_100ef5f0(uVar3);
    if (param_1[0x2c] != iVar5) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  else if (iVar2 == 0x81) {
    puVar1 = (undefined4 *)FUN_100b0368(auStack_18,auStack_30);
    iVar2 = FUN_10002010(param_1[0x2a],*puVar1,0);
    if (iVar2 == 0x81) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0));
      iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
      if (iVar4 == iVar2) {
        iVar2 = param_1[0x2e];
      }
      else {
        iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
        iVar2 = iVar2 << ((int)*(short *)(param_1 + 0x2b) & 0x3fU);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),iVar2,1);
      if (param_1[0x2c] != iVar5) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
      }
    }
  }
  return;
}



// Function: FUN_100c9ff4 at 100c9ff4
// Size: 116 bytes

void FUN_100c9ff4(int *param_1,short param_2)

{
  if ((param_2 == 0x16) || (param_2 == 0x14)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),0xffffffff);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),1);
  }
  return;
}



// Function: FUN_100ca068 at 100ca068
// Size: 8 bytes

undefined1 * FUN_100ca068(void)

{
  return &DAT_2f090000;
}



// Function: FUN_100ca078 at 100ca078
// Size: 112 bytes

undefined4 * FUN_100ca078(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(200), param_1 != (undefined4 *)0x0)) {
    FUN_100c9960(param_1);
    *param_1 = &DAT_419a0020;
    param_1[0x31] = 0;
  }
  return param_1;
}



// Function: FUN_100ca0e8 at 100ca0e8
// Size: 40 bytes

void FUN_100ca0e8(void)

{
  FUN_100ca078(0);
  return;
}



// Function: FUN_100ca110 at 100ca110
// Size: 304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ca110(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000038;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100c9a00(param_1);
  iVar2 = *param_1;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x680));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x840),uVar1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar2 = FUN_10000090(auStack_130);
  if (iVar2 == 0) {
    iVar2 = FUN_100e9174();
    param_1[0x31] = iVar2;
    FUN_10117884((int)*(short *)(*param_1 + 0x860) + (int)param_1,in_stack_00000038);
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100ca240 at 100ca240
// Size: 64 bytes

int FUN_100ca240(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100c7f28();
  uVar2 = FUN_100e9174();
  *(undefined4 *)(iVar1 + 0xc4) = uVar2;
  return iVar1;
}



// Function: FUN_100ca280 at 100ca280
// Size: 236 bytes

void FUN_100ca280(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_148 [316];
  
  FUN_100ebf7c(auStack_148,*(undefined4 *)(param_1 + 0xc4),1);
  piVar1 = (int *)FUN_100ec060(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    if (piVar1[*(byte *)(param_1 + 0xc0) + 0x24] == param_1) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x750) + (int)piVar1,0,(uint)*(byte *)(param_1 + 0xc0))
      ;
    }
    piVar1 = (int *)FUN_100ec0e8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  uVar3 = FUN_100f57c8(*(undefined4 *)(param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  FUN_100c8068(param_1);
  FUN_100ebff4(auStack_148,2);
  return;
}



// Function: FUN_100ca378 at 100ca378
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ca378(int *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r4;
  int iVar2;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100c9a90(param_1);
  iVar2 = *param_1;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x680),extraout_r4,iVar2,
                       *(undefined4 *)(iVar2 + 0x684));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x840),uVar1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar2 = FUN_10000090(auStack_130);
  if (iVar2 == 0) {
    iVar2 = FUN_100e9174();
    param_1[0x31] = iVar2;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



