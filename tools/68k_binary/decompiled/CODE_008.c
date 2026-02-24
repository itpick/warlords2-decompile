// Warlords II - Decompiled 68k Code
// Segment: CODE_008
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 12 bytes

void FUN_0000000c(void)

{
  return;
}



// Function: FUN_00000018 at 00000018
// Size: 18 bytes

void FUN_00000018(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}



// Function: FUN_0000002a at 0000002a
// Size: 12 bytes

void FUN_0000002a(void)

{
  return;
}



// Function: FUN_00000036 at 00000036
// Size: 26 bytes

void FUN_00000036(void)

{
  return;
}



// Function: FUN_00000050 at 00000050
// Size: 82 bytes

void FUN_00000050(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  undefined1 local_8 [4];
  
  FUN_0000000c(local_8);
  sVar1 = param_3[1];
  sVar2 = param_1[1];
  *param_2 = *param_3 + *param_1;
  param_2[1] = sVar1 + sVar2;
  return;
}



// Function: FUN_000000a2 at 000000a2
// Size: 82 bytes

void FUN_000000a2(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  undefined1 local_8 [4];
  
  FUN_0000000c(local_8);
  sVar1 = param_3[1];
  sVar2 = param_1[1];
  *param_2 = *param_1 - *param_3;
  param_2[1] = sVar2 - sVar1;
  return;
}



// Function: FUN_000000f4 at 000000f4
// Size: 30 bytes

void FUN_000000f4(short *param_1,short *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}



// Function: FUN_00000112 at 00000112
// Size: 46 bytes

undefined4 FUN_00000112(short *param_1,short *param_2)

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



// Function: FUN_00000140 at 00000140
// Size: 46 bytes

undefined4 FUN_00000140(short *param_1,short *param_2)

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



// Function: FUN_0000016e at 0000016e
// Size: 12 bytes

void FUN_0000016e(void)

{
  return;
}



// Function: FUN_0000017a at 0000017a
// Size: 12 bytes

void FUN_0000017a(void)

{
  return;
}



// Function: FUN_00000186 at 00000186
// Size: 16 bytes

void FUN_00000186(void)

{
  return;
}



// Function: FUN_00000190 at 00000190
// Size: 10 bytes

void FUN_00000190(void)

{
  return;
}



// Function: FUN_000001a0 at 000001a0
// Size: 8 bytes

void FUN_000001a0(short *param_1,short *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  return;
}



// Function: FUN_000001a8 at 000001a8
// Size: 36 bytes

void FUN_000001a8(void)

{
  short *psVar1;
  short *in_A0;
  int unaff_A6;
  
  psVar1 = *(short **)(unaff_A6 + 0xc);
  *in_A0 = *psVar1 + *in_A0;
  in_A0[1] = psVar1[1] + in_A0[1];
  in_A0[2] = psVar1[2] + in_A0[2];
  in_A0[3] = psVar1[3] + in_A0[3];
  return;
}



// Function: FUN_000001cc at 000001cc
// Size: 112 bytes

void FUN_000001cc(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar2 = param_3[1];
  sVar3 = param_1[1];
  sVar1 = *param_3;
  sVar4 = param_1[2];
  sVar5 = param_3[1];
  sVar6 = param_1[3];
  *param_2 = *param_3 + *param_1;
  param_2[1] = sVar2 + sVar3;
  param_2[2] = sVar1 + sVar4;
  param_2[3] = sVar5 + sVar6;
  return;
}



// Function: FUN_0000023c at 0000023c
// Size: 36 bytes

void FUN_0000023c(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_1 = sVar1 + *param_1;
  param_1[1] = sVar2 + param_1[1];
  param_1[2] = sVar1 + param_1[2];
  param_1[3] = sVar2 + param_1[3];
  return;
}



// Function: FUN_00000260 at 00000260
// Size: 36 bytes

void FUN_00000260(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_1 = *param_1 - sVar1;
  param_1[1] = param_1[1] - sVar2;
  param_1[2] = param_1[2] - sVar1;
  param_1[3] = param_1[3] - sVar2;
  return;
}



// Function: FUN_00000284 at 00000284
// Size: 42 bytes

void FUN_00000284(short *param_1,short *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}



// Function: FUN_000002ae at 000002ae
// Size: 66 bytes

undefined4 FUN_000002ae(short *param_1,short *param_2)

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



// Function: FUN_000002f0 at 000002f0
// Size: 66 bytes

undefined4 FUN_000002f0(short *param_1,short *param_2)

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



// Function: FUN_00000332 at 00000332
// Size: 40 bytes

undefined4 FUN_00000332(short *param_1)

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



// Function: FUN_0000035a at 0000035a
// Size: 54 bytes

void FUN_0000035a(short *param_1)

{
  short sVar1;
  
  if (param_1[2] < *param_1) {
    sVar1 = *param_1;
    *param_1 = param_1[2];
    param_1[2] = sVar1;
  }
  if (param_1[3] < param_1[1]) {
    sVar1 = param_1[1];
    param_1[1] = param_1[3];
    param_1[3] = sVar1;
  }
  return;
}



// Function: FUN_00000390 at 00000390
// Size: 50 bytes

undefined4 FUN_00000390(short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_2._0_1_ == '\0') {
    uVar1 = CONCAT22(*param_1 >> 0xf,param_1[2] - *param_1);
  }
  else {
    uVar1 = CONCAT22(param_1[1] >> 0xf,param_1[3] - param_1[1]);
  }
  return uVar1;
}



// Function: FUN_000003c2 at 000003c2
// Size: 76 bytes

void FUN_000003c2(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = param_1[1];
  sVar2 = param_1[3];
  *param_2 = param_1[2] - *param_1;
  param_2[1] = sVar2 - sVar1;
  return;
}



// Function: FUN_0000040e at 0000040e
// Size: 64 bytes

undefined4 FUN_0000040e(short *param_1,short *param_2)

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



// Function: FUN_0000044e at 0000044e
// Size: 32 bytes

void FUN_0000044e(ushort *param_1)

{
  *param_1 = *param_1 & 0xff0f;
  *param_1 = *param_1 | 0x20;
  *param_1 = *param_1 & 0xfff0;
  *param_1 = *param_1 | 10;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_0000046e at 0000046e
// Size: 74 bytes

void FUN_0000046e(ushort *param_1,short param_2,ushort param_3)

{
  *param_1 = *param_1 & 0xfff;
  *param_1 = param_2 << 0xc | *param_1;
  *param_1 = *param_1 & 0xf0ff;
  *param_1 = (param_3 & 0xf) << 8 | *param_1;
  *param_1 = *param_1 & 0xff0f;
  *param_1 = *param_1 | 0x20;
  *param_1 = *param_1 & 0xfff0;
  *param_1 = *param_1 | 10;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_000004b8 at 000004b8
// Size: 46 bytes

void FUN_000004b8(void)

{
  return;
}



// Function: FUN_000004e6 at 000004e6
// Size: 56 bytes

void FUN_000004e6(ushort *param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  
  FUN_000004b8(param_1,param_2,(*param_1 & 0xf00) >> 8);
  FUN_00001fe8(extraout_A0);
  return;
}



// Function: FUN_0000051e at 0000051e
// Size: 232 bytes

void FUN_0000051e(byte *param_1,byte *param_2,undefined4 param_3)

{
  short sVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  
  if (((int)(*param_1 + 1) < (int)param_3._0_2_) && ((short)(ushort)*param_1 < param_3._2_2_)) {
    param_3._0_2_ = *param_1 + 1;
  }
  if ((int)param_3._2_2_ < (int)((uint)*param_2 + (int)param_3._0_2_)) {
    uVar3 = (param_3._2_2_ - param_3._0_2_) + 1;
  }
  else {
    uVar3 = (ushort)*param_2;
  }
  sVar1 = uVar3 + param_3._0_2_ + -1;
  if ((int)param_3._2_2_ < (int)(((uint)*param_1 - (int)param_3._0_2_) + sVar1 + 2)) {
    param_3._2_2_ = param_3._2_2_ - sVar1;
  }
  else {
    param_3._2_2_ = ((ushort)*param_1 - param_3._0_2_) + 1;
  }
  func_0x000076f8(param_1 + sVar1 + 1,param_1 + param_3._0_2_,(int)param_3._2_2_);
  pbVar2 = param_1 + param_3._0_2_;
  for (iVar4 = (int)(short)uVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
    param_2 = param_2 + 1;
    *pbVar2 = *param_2;
    pbVar2 = pbVar2 + 1;
  }
  *param_1 = (char)sVar1 + (char)param_3._2_2_;
  return;
}



// Function: FUN_00000606 at 00000606
// Size: 44 bytes

void FUN_00000606(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 extraout_A0;
  undefined1 auStack_104 [256];
  
  FUN_00000806(auStack_104,param_2,param_3);
  FUN_0000051e(param_1,extraout_A0);
  return;
}



// Function: FUN_00000632 at 00000632
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000632(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x702) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x702) = 1;
    _DAT_000269e2 = 0;
  }
  _DAT_000269e2 = (short)((_DAT_000269e2 + 1) % 8);
  pbVar1 = (byte *)(_DAT_000269e2 * 0x100 + 0x269e4);
  pbVar3 = param_1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar3 = pbVar3 + 1;
    *pbVar1 = *pbVar3;
    pbVar1 = pbVar1 + 1;
  }
  *(undefined1 *)(_DAT_000269e2 * 0x100 + 0x269e4 + (int)(short)(ushort)*param_1) = 0;
  return;
}



// Function: FUN_000006b6 at 000006b6
// Size: 112 bytes

int FUN_000006b6(byte *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int extraout_A0;
  byte *pbVar4;
  undefined4 local_108;
  byte abStack_104 [256];
  
  local_108 = (uint)*param_1;
  pbVar2 = abStack_104;
  pbVar4 = param_1;
  for (uVar1 = local_108; uVar1 != 0; uVar1 = uVar1 - 1) {
    pbVar4 = pbVar4 + 1;
    *pbVar2 = *pbVar4;
    pbVar2 = pbVar2 + 1;
  }
  abStack_104[(short)(ushort)*param_1] = 0;
  func_0x00007720(abStack_104 + ((param_3 >> 0x18) - 1),param_2);
  if (extraout_A0 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (extraout_A0 - (int)abStack_104) + 1;
  }
  return iVar3;
}



// Function: FUN_00000726 at 00000726
// Size: 86 bytes

void FUN_00000726(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte abStack_104 [256];
  
  pbVar1 = abStack_104;
  pbVar3 = param_2;
  for (uVar2 = (uint)*param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar3 = pbVar3 + 1;
    *pbVar1 = *pbVar3;
    pbVar1 = pbVar1 + 1;
  }
  abStack_104[(short)(ushort)*param_2] = 0;
  FUN_000006b6(param_1,abStack_104);
  return;
}



// Function: FUN_0000077c at 0000077c
// Size: 12 bytes

void FUN_0000077c(void)

{
  return;
}



// Function: FUN_00000788 at 00000788
// Size: 126 bytes

void FUN_00000788(byte *param_1,undefined4 param_2)

{
  if (((0 < param_2._0_2_) && (0 < param_2._2_2_)) && (param_2._0_2_ <= (short)(ushort)*param_1)) {
    if ((int)(uint)*param_1 < (int)param_2._2_2_ + (int)param_2._0_2_) {
      *param_1 = (char)((uint)param_2 >> 0x10) - 1;
    }
    else {
      func_0x000076f8(param_1 + param_2._0_2_,param_1 + (int)param_2._2_2_ + (int)param_2._0_2_,
                      ((uint)*param_1 - ((int)param_2._2_2_ + (int)param_2._0_2_)) + 1);
      *param_1 = *param_1 - (char)param_2;
    }
  }
  return;
}



// Function: FUN_00000806 at 00000806
// Size: 112 bytes

byte * FUN_00000806(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if (param_2 == (byte *)0x0) {
    bVar1 = 0;
  }
  else {
    local_c = 0xff;
    local_8 = -1;
    pbVar3 = param_2;
    do {
      local_8 = local_8 + 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (local_8 < 0xff) {
      piVar4 = &local_8;
    }
    else {
      piVar4 = &local_c;
    }
    bVar1 = (byte)*piVar4;
  }
  *param_1 = bVar1;
  pbVar3 = param_1 + 1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
    param_2 = param_2 + 1;
  }
  return param_1 + 1;
}



// Function: FUN_00000876 at 00000876
// Size: 44 bytes

undefined1 * FUN_00000876(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  *param_1 = 4;
  iVar1 = 4;
  puVar2 = param_1 + 1;
  puVar3 = &stack0x00000008;
  do {
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  return param_1 + 1;
}



// Function: FUN_000008a2 at 000008a2
// Size: 208 bytes

byte * FUN_000008a2(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_104 [256];
  
  if (param_3 == (byte *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = -1;
    pbVar5 = param_3;
    do {
      sVar3 = sVar3 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  if ((int)((uint)*param_2 + (int)sVar3) < 0x100) {
    local_104[0] = *param_2 + (char)sVar3;
  }
  else {
    local_104[0] = 0xff;
  }
  pbVar5 = local_104;
  pbVar6 = param_2;
  for (uVar4 = (uint)*param_2; pbVar5 = pbVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    pbVar6 = pbVar6 + 1;
    *pbVar5 = *pbVar6;
  }
  pbVar5 = local_104 + *param_2 + 1;
  for (iVar2 = (uint)local_104[0] - (uint)*param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pbVar5 = *param_3;
    pbVar5 = pbVar5 + 1;
    param_3 = param_3 + 1;
  }
  pbVar5 = local_104;
  pbVar6 = param_1;
  for (iVar2 = local_104[0] + 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  return param_1;
}



// Function: FUN_00000972 at 00000972
// Size: 190 bytes

byte * FUN_00000972(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_104 [256];
  
  if ((uint)*param_3 + (uint)*param_2 < 0x100) {
    local_104[0] = *param_3 + *param_2;
  }
  else {
    local_104[0] = 0xff;
  }
  pbVar2 = local_104;
  pbVar4 = param_2;
  for (uVar3 = (uint)*param_2; pbVar2 = pbVar2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    pbVar4 = pbVar4 + 1;
    *pbVar2 = *pbVar4;
  }
  pbVar2 = local_104 + *param_2 + 1;
  for (iVar1 = (uint)local_104[0] - (uint)*param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    param_3 = param_3 + 1;
    *pbVar2 = *param_3;
    pbVar2 = pbVar2 + 1;
  }
  pbVar2 = local_104;
  pbVar4 = param_1;
  for (iVar1 = local_104[0] + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar4 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  return param_1;
}



// Function: FUN_00000a30 at 00000a30
// Size: 46 bytes

void FUN_00000a30(undefined4 param_1,undefined4 param_2)

{
  FUN_0000051e(param_1,param_2,0xff);
  return;
}



// Function: FUN_00000a5e at 00000a5e
// Size: 34 bytes

/* WARNING: Removing unreachable block (ram,0x00000a7a) */

void FUN_00000a5e(byte *param_1,undefined4 param_2)

{
  *param_1 = *param_1 + 1;
  param_1[(short)(ushort)*param_1] = param_2._0_1_;
  return;
}



// Function: FUN_00000a80 at 00000a80
// Size: 86 bytes

byte * FUN_00000a80(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2 == (byte *)0x0) {
    *param_1 = 0;
    pbVar4 = (byte *)0x0;
  }
  else {
    uVar3 = 0xffffffff;
    pbVar4 = param_2;
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (uVar3 < 0x100) {
      *param_1 = (byte)uVar3;
    }
    else {
      *param_1 = 0xff;
    }
    pbVar4 = param_1 + 1;
    pbVar2 = pbVar4;
    for (uVar3 = (uint)*param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar2 = *param_2;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return pbVar4;
}



// Function: FUN_00000ad6 at 00000ad6
// Size: 110 bytes

byte * FUN_00000ad6(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if (param_2 == (byte *)0x0) {
    bVar1 = 0;
  }
  else {
    local_c = 0x3f;
    local_8 = -1;
    pbVar3 = param_2;
    do {
      local_8 = local_8 + 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (local_8 < 0x3f) {
      piVar4 = &local_8;
    }
    else {
      piVar4 = &local_c;
    }
    bVar1 = (byte)*piVar4;
  }
  *param_1 = bVar1;
  pbVar3 = param_1 + 1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
    param_2 = param_2 + 1;
  }
  return param_1 + 1;
}



// Function: FUN_00000b44 at 00000b44
// Size: 46 bytes

void FUN_00000b44(undefined4 param_1,undefined4 param_2)

{
  FUN_0000051e(param_1,param_2,0x3f);
  return;
}



// Function: FUN_00000b72 at 00000b72
// Size: 110 bytes

byte * FUN_00000b72(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if (param_2 == (byte *)0x0) {
    bVar1 = 0;
  }
  else {
    local_c = 0x20;
    local_8 = -1;
    pbVar3 = param_2;
    do {
      local_8 = local_8 + 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (local_8 < 0x20) {
      piVar4 = &local_8;
    }
    else {
      piVar4 = &local_c;
    }
    bVar1 = (byte)*piVar4;
  }
  *param_1 = bVar1;
  pbVar3 = param_1 + 1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
    param_2 = param_2 + 1;
  }
  return param_1 + 1;
}



// Function: FUN_00000be0 at 00000be0
// Size: 110 bytes

byte * FUN_00000be0(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if (param_2 == (byte *)0x0) {
    bVar1 = 0;
  }
  else {
    local_c = 0x1f;
    local_8 = -1;
    pbVar3 = param_2;
    do {
      local_8 = local_8 + 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (local_8 < 0x1f) {
      piVar4 = &local_8;
    }
    else {
      piVar4 = &local_c;
    }
    bVar1 = (byte)*piVar4;
  }
  *param_1 = bVar1;
  pbVar3 = param_1 + 1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
    param_2 = param_2 + 1;
  }
  return param_1 + 1;
}



// Function: FUN_00000c4e at 00000c4e
// Size: 34 bytes

void FUN_00000c4e(byte *param_1,undefined4 param_2)

{
  *param_1 = *param_1 + 1;
  if (*param_1 < 0x20) {
    param_1[(short)(ushort)*param_1] = param_2._0_1_;
  }
  else {
    *param_1 = *param_1 - 1;
  }
  return;
}



// Function: FUN_00000c70 at 00000c70
// Size: 94 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c70(void)

{
  char cVar1;
  
  FUN_00000d40();
  cVar1 = FUN_00000190();
  if (cVar1 == '\0') {
    func_0x00000198();
  }
  FUN_00000e06(0x25b08);
  cVar1 = FUN_000001a8(0x25b08);
  if (cVar1 == '\0') {
    func_0x00000198();
  }
  _DAT_000260a8 = 0x1c28;
  return;
}



// Function: FUN_00000cce at 00000cce
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000cce(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000cd8 at 00000cd8
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000cd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000d40 at 00000d40
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000d40(void)

{
  FUN_00000cd8(0xa237);
  FUN_00000cd8(0xa230);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000dd4 at 00000dd4
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000dd4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e06 at 00000e06
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e06(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e28 at 00000e28
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e28(void)

{
  char in_NF;
  bool in_ZF;
  char in_VF;
  bool in_CF;
  
  if (in_VF != in_NF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001190 at 00001190
// Size: 82 bytes

void FUN_00001190(void)

{
  FUN_00001272();
  FUN_00001ee8();
  func_0x00001e70(FUN_00001b48);
  func_0x00001ed0();
  FUN_00001b48();
  func_0x00001ed0();
  FUN_00001ee8();
  return;
}



// Function: FUN_000011e2 at 000011e2
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001202) */

void FUN_000011e2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001208 at 00001208
// Size: 28 bytes

void FUN_00001208(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2._0_2_;
  param_1[1] = param_2._2_2_;
  param_1[2] = param_3._0_2_;
  return;
}



// Function: FUN_00001224 at 00001224
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00001224(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_0000124a at 0000124a
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000124a(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00001272 at 00001272
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001272(void)

{
  func_0x00001e70(0x1b0,0x434f4445);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001348 at 00001348
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001348(void)

{
  int unaff_D3;
  undefined4 *puVar1;
  int unaff_A2;
  int unaff_A6;
  
  if (unaff_D3 < *(int *)(unaff_A6 + -0x14)) {
    puVar1 = (undefined4 *)(unaff_A6 + -0x10);
  }
  else {
    puVar1 = (undefined4 *)(unaff_A6 + -0x14);
  }
  *(short *)(unaff_A2 + 0x14) = (short)*puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000013d8 at 000013d8
// Size: 22 bytes

void FUN_000013d8(void)

{
  FUN_00001f40();
  return;
}



// Function: FUN_000013ee at 000013ee
// Size: 18 bytes

void FUN_000013ee(undefined4 param_1)

{
  FUN_00001412(param_1);
  return;
}



// Function: FUN_00001400 at 00001400
// Size: 18 bytes

void FUN_00001400(undefined4 param_1)

{
  FUN_00001490(param_1);
  return;
}



// Function: FUN_00001412 at 00001412
// Size: 126 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001412(undefined2 param_1)

{
  int extraout_A0;
  int extraout_A0_00;
  int iVar1;
  undefined2 extraout_A0w;
  
  if (_DAT_00025aac == 0) {
    func_0x00001fc8(0x98);
    iVar1 = 0;
    if (extraout_A0 != 0) {
      FUN_00001ff8((short)extraout_A0,0x3f18,0x2800,0x1000);
      iVar1 = extraout_A0_00;
    }
    _DAT_00025aac = iVar1;
    func_0x00002000((short)iVar1);
  }
  FUN_00001f78((short)_DAT_00025aac,param_1);
  func_0x00001bf0(extraout_A0w);
  return;
}



// Function: FUN_00001490 at 00001490
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001490(undefined4 param_1)

{
  if (_DAT_00025aac != 0) {
    func_0x00001f88(_DAT_00025aac,param_1);
  }
  return;
}



// Function: FUN_000014b2 at 000014b2
// Size: 18 bytes

void FUN_000014b2(undefined4 param_1)

{
  FUN_00001412(param_1);
  return;
}



// Function: FUN_000014c4 at 000014c4
// Size: 18 bytes

void FUN_000014c4(undefined4 param_1)

{
  FUN_00001490(param_1);
  return;
}



// Function: FUN_000014d6 at 000014d6
// Size: 180 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000014d6(void)

{
  int iVar1;
  
  FUN_00000c70();
  _DAT_00025d08 = 0;
  _DAT_00025d0a = 0;
  _DAT_00025d12 = 0;
  _DAT_00025d16 = 0;
  _DAT_00025d0e = _DAT_00025f52;
  _DAT_00025f52 = 0x25cd4;
  iVar1 = func_0x000076a8(0x5cd4);
  if (iVar1 != 0) {
    if (_DAT_00025d08 != 0) {
      if (_DAT_00025d0a == 0) {
        _DAT_00025d0a = 0x820001;
      }
      FUN_00000e28((short)((uint)_DAT_00025d0a >> 0x10));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001190();
  func_0x00001b98();
  FUN_00001b30();
  FUN_00001b40();
  func_0x00004b28();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000015a0 at 000015a0
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000015a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001a48 at 00001a48
// Size: 232 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a48(void)

{
  undefined4 *puVar1;
  int unaff_D7;
  undefined4 in_A0;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  undefined4 *extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  undefined4 *extraout_A0_11;
  int extraout_A0_12;
  int extraout_A0_13;
  int extraout_A0_14;
  int extraout_A0_15;
  int extraout_A0_16;
  int extraout_A0_17;
  int extraout_A0_18;
  int extraout_A0_19;
  int extraout_A0_20;
  int extraout_A0_21;
  int extraout_A0_22;
  int extraout_A0_23;
  int extraout_A0_24;
  int extraout_A0_25;
  int extraout_A0_26;
  int extraout_A0_27;
  int extraout_A0_28;
  int extraout_A0_29;
  int extraout_A0_30;
  int *piVar2;
  undefined4 *in_A1;
  int unaff_A6;
  
  *in_A1 = in_A0;
  *(undefined4 *)(unaff_D7 + 0x2e) = 0x20202020;
  *(undefined4 *)(unaff_D7 + 0x32) = 0;
  *(undefined4 *)(unaff_D7 + 0x36) = 0;
  *in_A1 = 0x1ce3e;
  if (DAT_000264d0 != '\0') {
    func_0x00006670();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0x20) = extraout_A0;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      func_0x00004618();
      **(undefined4 **)(unaff_A6 + -0x20) = 0x1cf22;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000066d0();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -8) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      FUN_00001348();
      puVar1 = *(undefined4 **)(unaff_A6 + -8);
      *puVar1 = 0x1c386;
      *(undefined1 *)(puVar1 + 0x29) = 0;
      *(undefined4 *)((int)puVar1 + 0xa6) = 0;
      FUN_00000806((int)puVar1 + 0xaa,0);
      *(undefined4 *)(*(int *)(unaff_A6 + -8) + 0x1aa) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000066f8();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x00007140();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006710();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_02;
      func_0x00007148();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006728();
    FUN_000013ee();
    if (extraout_A0_03 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_03;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_03;
      func_0x00007150();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006740();
    FUN_000013ee();
    if (extraout_A0_04 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_04;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_04;
      func_0x00007158();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067a8();
    FUN_000013ee();
    if (extraout_A0_05 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_05;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_05;
      func_0x00007168();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067c0();
    FUN_000013ee();
    if (extraout_A0_06 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_06;
      FUN_000013d8();
      *extraout_A0_06 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_06 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_06 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_06 + 0x36) = 0;
      *extraout_A0_06 = 0x1adca;
      *extraout_A0_06 = 0x1aece;
      *(undefined1 *)((int)extraout_A0_06 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006840();
    FUN_000013ee();
    if (extraout_A0_07 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_07;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_07;
      func_0x00007188();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006810();
    FUN_000013ee();
    if (extraout_A0_08 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_08;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_08;
      func_0x00007178();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006828();
    FUN_000013ee();
    if (extraout_A0_09 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_09;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_09;
      func_0x00007180();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006870();
    FUN_000013ee();
    if (extraout_A0_10 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_10;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_10;
      func_0x00007190();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006898();
    FUN_000013ee();
    if (extraout_A0_11 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_11;
      FUN_000013d8();
      *extraout_A0_11 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_11 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_11 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_11 + 0x36) = 0;
      *extraout_A0_11 = 0x1815e;
      *(undefined2 *)((int)extraout_A0_11 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068b0();
    FUN_000013ee();
    if (extraout_A0_12 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_12;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_12;
      func_0x000071a0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068c8();
    FUN_000013ee();
    if (extraout_A0_13 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_13;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_13;
      func_0x000071a8();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068f0();
    FUN_000013ee();
    if (extraout_A0_14 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_14;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_14;
      func_0x000071b0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006928();
    FUN_000013ee();
    if (extraout_A0_15 != 0) {
      *(int *)(unaff_A6 + -0x14) = extraout_A0_15;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_15;
      func_0x00004618();
      puVar1 = *(undefined4 **)(unaff_A6 + -0x14);
      *puVar1 = 0x18e36;
      *(undefined4 *)((int)puVar1 + 0xb2) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006858();
    FUN_000013ee();
    if (extraout_A0_16 != 0) {
      *(int *)(unaff_A6 + -0xc) = extraout_A0_16;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_16;
      FUN_000015a0();
      puVar1 = *(undefined4 **)(unaff_A6 + -0xc);
      *puVar1 = 0x19876;
      *(undefined2 *)(puVar1 + 0x1f) = 0;
      *(undefined2 *)((int)puVar1 + 0x7e) = 0xffff;
      _DAT_00028bec = _DAT_00028bec + 1;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069a0();
    FUN_000013ee();
    if (extraout_A0_17 != 0) {
      *(int *)(unaff_A6 + -0x24) = extraout_A0_17;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_17;
      func_0x00004618();
      **(undefined4 **)(unaff_A6 + -0x24) = 0x16cb2;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee();
    if (extraout_A0_18 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0_18;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_18;
      FUN_000013d8();
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0_19 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_19;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_19;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_20 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_20;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_20;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_21 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_21;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_21;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_22 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_22;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_22;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_23;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_24;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_25;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_26;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_27;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_28;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_29;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_30 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_30;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_30;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001b30 at 00001b30
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b30(void)

{
  undefined4 *puVar1;
  int in_A0;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  undefined4 *extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  undefined4 *extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int extraout_A0_11;
  int extraout_A0_12;
  int extraout_A0_13;
  int extraout_A0_14;
  int extraout_A0_15;
  int extraout_A0_16;
  int extraout_A0_17;
  int extraout_A0_18;
  int extraout_A0_19;
  int extraout_A0_20;
  int extraout_A0_21;
  int extraout_A0_22;
  int extraout_A0_23;
  int extraout_A0_24;
  int extraout_A0_25;
  int extraout_A0_26;
  int extraout_A0_27;
  int *piVar2;
  int unaff_A6;
  
  if (in_A0 != 0) {
    *(int *)(unaff_A6 + -0xd6) = in_A0;
    *(int *)(unaff_A6 + -0xda) = in_A0;
    func_0x00007140();
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006710();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      *(int *)(unaff_A6 + -0xda) = extraout_A0;
      func_0x00007148();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006728();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_00;
      func_0x00007150();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006740();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x00007158();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067a8();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_02;
      func_0x00007168();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067c0();
    FUN_000013ee();
    if (extraout_A0_03 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_03;
      FUN_000013d8();
      *extraout_A0_03 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_03 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_03 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_03 + 0x36) = 0;
      *extraout_A0_03 = 0x1adca;
      *extraout_A0_03 = 0x1aece;
      *(undefined1 *)((int)extraout_A0_03 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006840();
    FUN_000013ee();
    if (extraout_A0_04 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_04;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_04;
      func_0x00007188();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006810();
    FUN_000013ee();
    if (extraout_A0_05 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_05;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_05;
      func_0x00007178();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006828();
    FUN_000013ee();
    if (extraout_A0_06 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_06;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_06;
      func_0x00007180();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006870();
    FUN_000013ee();
    if (extraout_A0_07 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_07;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_07;
      func_0x00007190();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006898();
    FUN_000013ee();
    if (extraout_A0_08 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_08;
      FUN_000013d8();
      *extraout_A0_08 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_08 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_08 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_08 + 0x36) = 0;
      *extraout_A0_08 = 0x1815e;
      *(undefined2 *)((int)extraout_A0_08 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068b0();
    FUN_000013ee();
    if (extraout_A0_09 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_09;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_09;
      func_0x000071a0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068c8();
    FUN_000013ee();
    if (extraout_A0_10 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_10;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_10;
      func_0x000071a8();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068f0();
    FUN_000013ee();
    if (extraout_A0_11 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_11;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_11;
      func_0x000071b0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006928();
    FUN_000013ee();
    if (extraout_A0_12 != 0) {
      *(int *)(unaff_A6 + -0x14) = extraout_A0_12;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_12;
      func_0x00004618();
      puVar1 = *(undefined4 **)(unaff_A6 + -0x14);
      *puVar1 = 0x18e36;
      *(undefined4 *)((int)puVar1 + 0xb2) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006858();
    FUN_000013ee();
    if (extraout_A0_13 != 0) {
      *(int *)(unaff_A6 + -0xc) = extraout_A0_13;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_13;
      FUN_000015a0();
      puVar1 = *(undefined4 **)(unaff_A6 + -0xc);
      *puVar1 = 0x19876;
      *(undefined2 *)(puVar1 + 0x1f) = 0;
      *(undefined2 *)((int)puVar1 + 0x7e) = 0xffff;
      _DAT_00028bec = _DAT_00028bec + 1;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069a0();
    FUN_000013ee();
    if (extraout_A0_14 != 0) {
      *(int *)(unaff_A6 + -0x24) = extraout_A0_14;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_14;
      func_0x00004618();
      **(undefined4 **)(unaff_A6 + -0x24) = 0x16cb2;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee();
    if (extraout_A0_15 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0_15;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_15;
      FUN_000013d8();
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0_16 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_16;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_16;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_17 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_17;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_17;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_18 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_18;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_18;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_19 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_19;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_19;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_20;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_21;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_22;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_23;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_24;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_25;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_26;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_27 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_27;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_27;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001b40 at 00001b40
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b40(void)

{
  undefined4 *puVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  undefined4 *extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  undefined4 *extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int extraout_A0_11;
  int extraout_A0_12;
  int extraout_A0_13;
  int extraout_A0_14;
  int extraout_A0_15;
  int extraout_A0_16;
  int extraout_A0_17;
  int extraout_A0_18;
  int extraout_A0_19;
  int extraout_A0_20;
  int extraout_A0_21;
  int extraout_A0_22;
  int extraout_A0_23;
  int extraout_A0_24;
  int extraout_A0_25;
  int extraout_A0_26;
  int extraout_A0_27;
  int *piVar2;
  int unaff_A6;
  
  func_0x00007140();
  if (DAT_000264d0 != '\0') {
    func_0x00006710();
    FUN_000013ee(0xb2);
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      *(int *)(unaff_A6 + -0xda) = extraout_A0;
      func_0x00007148(extraout_A0);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006728();
    FUN_000013ee(0xb4);
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_00;
      func_0x00007150(extraout_A0_00);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006740();
    FUN_000013ee(0x42);
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x00007158(extraout_A0_01);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067a8();
    FUN_000013ee(0xac);
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_02;
      func_0x00007168(extraout_A0_02);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067c0();
    FUN_000013ee(0x3c);
    if (extraout_A0_03 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_03;
      FUN_000013d8(extraout_A0_03);
      *extraout_A0_03 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_03 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_03 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_03 + 0x36) = 0;
      *extraout_A0_03 = 0x1adca;
      *extraout_A0_03 = 0x1aece;
      *(undefined1 *)((int)extraout_A0_03 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006840();
    FUN_000013ee(0x3a);
    if (extraout_A0_04 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_04;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_04;
      func_0x00007188(extraout_A0_04);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006810();
    FUN_000013ee(0xa4);
    if (extraout_A0_05 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_05;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_05;
      func_0x00007178(extraout_A0_05);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006828();
    FUN_000013ee(0xb2);
    if (extraout_A0_06 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_06;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_06;
      func_0x00007180(extraout_A0_06);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006870();
    FUN_000013ee(0x3a);
    if (extraout_A0_07 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_07;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_07;
      func_0x00007190(extraout_A0_07);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006898();
    FUN_000013ee(0x3c);
    if (extraout_A0_08 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_08;
      FUN_000013d8(extraout_A0_08);
      *extraout_A0_08 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_08 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_08 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_08 + 0x36) = 0;
      *extraout_A0_08 = 0x1815e;
      *(undefined2 *)((int)extraout_A0_08 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068b0();
    FUN_000013ee(0x3a);
    if (extraout_A0_09 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_09;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_09;
      func_0x000071a0(extraout_A0_09);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068c8();
    FUN_000013ee(0x3c);
    if (extraout_A0_10 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_10;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_10;
      func_0x000071a8(extraout_A0_10);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068f0();
    FUN_000013ee(0x54);
    if (extraout_A0_11 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_11;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_11;
      func_0x000071b0(extraout_A0_11);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006928();
    FUN_000013ee(0xb6);
    if (extraout_A0_12 != 0) {
      *(int *)(unaff_A6 + -0x14) = extraout_A0_12;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_12;
      func_0x00004618(*(undefined4 *)(unaff_A6 + -0x14));
      puVar1 = *(undefined4 **)(unaff_A6 + -0x14);
      *puVar1 = 0x18e36;
      *(undefined4 *)((int)puVar1 + 0xb2) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006858();
    FUN_000013ee(0x80);
    if (extraout_A0_13 != 0) {
      *(int *)(unaff_A6 + -0xc) = extraout_A0_13;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_13;
      FUN_000015a0(*(undefined4 *)(unaff_A6 + -0xc));
      puVar1 = *(undefined4 **)(unaff_A6 + -0xc);
      *puVar1 = 0x19876;
      *(undefined2 *)(puVar1 + 0x1f) = 0;
      *(undefined2 *)((int)puVar1 + 0x7e) = 0xffff;
      _DAT_00028bec = _DAT_00028bec + 1;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069a0();
    FUN_000013ee(0xb2);
    if (extraout_A0_14 != 0) {
      *(int *)(unaff_A6 + -0x24) = extraout_A0_14;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_14;
      func_0x00004618(*(undefined4 *)(unaff_A6 + -0x24));
      **(undefined4 **)(unaff_A6 + -0x24) = 0x16cb2;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee(0x3a);
    if (extraout_A0_15 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0_15;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_15;
      FUN_000013d8(*(undefined4 *)(unaff_A6 + -4));
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee(0x7c);
    if (extraout_A0_16 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_16;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_16;
      FUN_000015a0(*(undefined4 *)(unaff_A6 + -0x28));
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee(0xb0);
    if (extraout_A0_17 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_17;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_17;
      func_0x000071e0(extraout_A0_17);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee(0xa4);
    if (extraout_A0_18 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_18;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_18;
      FUN_00001348(*(undefined4 *)(unaff_A6 + -0x2c));
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee(0xb8);
    if (extraout_A0_19 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_19;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_19;
      func_0x000071e8(extraout_A0_19);
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028d22 = extraout_A0_20;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0(0xae);
    _DAT_00028864 = extraout_A0_21;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0(22000);
    _DAT_00028854 = extraout_A0_22;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0(0x2f8e);
    _DAT_0002884c = extraout_A0_23;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028850 = extraout_A0_24;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0(0x4440);
    _DAT_00028858 = extraout_A0_25;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0(0x3a);
    _DAT_00027d18 = extraout_A0_26;
  }
  FUN_000013ee(0x1f0);
  piVar2 = (int *)0x0;
  if (extraout_A0_27 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_27;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_27;
    FUN_00001a48(*(undefined4 *)(unaff_A6 + -0x10));
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001b48 at 00001b48
// Size: 853 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b48(void)

{
  undefined4 *puVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  undefined4 *extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  undefined4 *extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int extraout_A0_11;
  int extraout_A0_12;
  int extraout_A0_13;
  int extraout_A0_14;
  int extraout_A0_15;
  int extraout_A0_16;
  int extraout_A0_17;
  int extraout_A0_18;
  int extraout_A0_19;
  int extraout_A0_20;
  int extraout_A0_21;
  int extraout_A0_22;
  int extraout_A0_23;
  int extraout_A0_24;
  int extraout_A0_25;
  int extraout_A0_26;
  int extraout_A0_27;
  int *piVar2;
  int unaff_A6;
  
  if (DAT_000264d0 != '\0') {
    func_0x00006710();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      *(int *)(unaff_A6 + -0xda) = extraout_A0;
      func_0x00007148();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006728();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_00;
      func_0x00007150();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006740();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x00007158();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067a8();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_02;
      func_0x00007168();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067c0();
    FUN_000013ee();
    if (extraout_A0_03 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_03;
      FUN_000013d8();
      *extraout_A0_03 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_03 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_03 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_03 + 0x36) = 0;
      *extraout_A0_03 = 0x1adca;
      *extraout_A0_03 = 0x1aece;
      *(undefined1 *)((int)extraout_A0_03 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006840();
    FUN_000013ee();
    if (extraout_A0_04 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_04;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_04;
      func_0x00007188();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006810();
    FUN_000013ee();
    if (extraout_A0_05 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_05;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_05;
      func_0x00007178();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006828();
    FUN_000013ee();
    if (extraout_A0_06 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_06;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_06;
      func_0x00007180();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006870();
    FUN_000013ee();
    if (extraout_A0_07 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_07;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_07;
      func_0x00007190();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006898();
    FUN_000013ee();
    if (extraout_A0_08 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0xd6) = extraout_A0_08;
      FUN_000013d8();
      *extraout_A0_08 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_08 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_08 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_08 + 0x36) = 0;
      *extraout_A0_08 = 0x1815e;
      *(undefined2 *)((int)extraout_A0_08 + 0x3a) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068b0();
    FUN_000013ee();
    if (extraout_A0_09 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_09;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_09;
      func_0x000071a0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068c8();
    FUN_000013ee();
    if (extraout_A0_10 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_10;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_10;
      func_0x000071a8();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000068f0();
    FUN_000013ee();
    if (extraout_A0_11 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_11;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_11;
      func_0x000071b0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006928();
    FUN_000013ee();
    if (extraout_A0_12 != 0) {
      *(int *)(unaff_A6 + -0x14) = extraout_A0_12;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_12;
      func_0x00004618();
      puVar1 = *(undefined4 **)(unaff_A6 + -0x14);
      *puVar1 = 0x18e36;
      *(undefined4 *)((int)puVar1 + 0xb2) = 0;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006858();
    FUN_000013ee();
    if (extraout_A0_13 != 0) {
      *(int *)(unaff_A6 + -0xc) = extraout_A0_13;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_13;
      FUN_000015a0();
      puVar1 = *(undefined4 **)(unaff_A6 + -0xc);
      *puVar1 = 0x19876;
      *(undefined2 *)(puVar1 + 0x1f) = 0;
      *(undefined2 *)((int)puVar1 + 0x7e) = 0xffff;
      _DAT_00028bec = _DAT_00028bec + 1;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069a0();
    FUN_000013ee();
    if (extraout_A0_14 != 0) {
      *(int *)(unaff_A6 + -0x24) = extraout_A0_14;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_14;
      func_0x00004618();
      **(undefined4 **)(unaff_A6 + -0x24) = 0x16cb2;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee();
    if (extraout_A0_15 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0_15;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_15;
      FUN_000013d8();
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0_16 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_16;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_16;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_17 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_17;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_17;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_18 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_18;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_18;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_19 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_19;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_19;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_20;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_21;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_22;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_23;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_24;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_25;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_26;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_27 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_27;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_27;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ea0 at 00001ea0
// Size: 71 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ea0(void)

{
  undefined4 *puVar1;
  int in_A0;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int extraout_A0_11;
  int extraout_A0_12;
  int extraout_A0_13;
  int *piVar2;
  int unaff_A6;
  
  *(undefined4 *)(in_A0 + 0xb2) = 0;
  if (DAT_000264d0 != '\0') {
    func_0x00006858();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0xc) = extraout_A0;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      FUN_000015a0();
      puVar1 = *(undefined4 **)(unaff_A6 + -0xc);
      *puVar1 = 0x19876;
      *(undefined2 *)(puVar1 + 0x1f) = 0;
      *(undefined2 *)((int)puVar1 + 0x7e) = 0xffff;
      _DAT_00028bec = _DAT_00028bec + 1;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069a0();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0x24) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      func_0x00004618();
      **(undefined4 **)(unaff_A6 + -0x24) = 0x16cb2;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      FUN_000013d8();
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_03 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_03;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_03;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_04 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_04;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_04;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_05 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_05;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_05;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_06;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_07;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_08;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_09;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_10;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_11;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_12;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_13 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_13;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_13;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ee8 at 00001ee8
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ee8(void)

{
  undefined4 *puVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int extraout_A0_11;
  int extraout_A0_12;
  int *piVar2;
  int in_A1;
  int unaff_A6;
  
  *(undefined2 *)(in_A1 + 0x7c) = 0;
  *(undefined2 *)(in_A1 + 0x7e) = 0xffff;
  _DAT_00028bec = _DAT_00028bec + 1;
  if (DAT_000264d0 != '\0') {
    func_0x000069a0();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0x24) = extraout_A0;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      func_0x00004618();
      **(undefined4 **)(unaff_A6 + -0x24) = 0x16cb2;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      FUN_000013d8();
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_02;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_03 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_03;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_03;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_04 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_04;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_04;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_05;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_06;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_07;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_08;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_09;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_10;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_11;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_12 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_12;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_12;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001f40 at 00001f40
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f40(void)

{
  undefined4 *puVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int extraout_A0_11;
  int *piVar2;
  int unaff_A6;
  
  if (DAT_000264d0 != '\0') {
    func_0x000069b8();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -4) = extraout_A0;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      FUN_000013d8();
      puVar1 = *(undefined4 **)(unaff_A6 + -4);
      *puVar1 = 0x2198c;
      *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)puVar1 + 0x32) = 0;
      *(undefined4 *)((int)puVar1 + 0x36) = 0;
      *puVar1 = 0x17146;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_03 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_03;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_03;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_04;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_05;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_06;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_07;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_08;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_09;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_10;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_11 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_11;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_11;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001f78 at 00001f78
// Size: 110 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f78(void)

{
  undefined4 *puVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int extraout_A0_10;
  int *piVar2;
  int unaff_A6;
  
  puVar1 = *(undefined4 **)(unaff_A6 + -4);
  *puVar1 = 0x2198c;
  *(undefined4 *)((int)puVar1 + 0x2e) = 0x20202020;
  *(undefined4 *)((int)puVar1 + 0x32) = 0;
  *(undefined4 *)((int)puVar1 + 0x36) = 0;
  *puVar1 = 0x17146;
  if (DAT_000264d0 != '\0') {
    func_0x000069d0();
    FUN_000013ee();
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0x28) = extraout_A0;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      FUN_000015a0();
      **(undefined4 **)(unaff_A6 + -0x28) = 0x1722a;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee();
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_00;
      func_0x000071e0();
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee();
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      FUN_00001348();
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee();
    if (extraout_A0_02 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_02;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_02;
      func_0x000071e8();
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0();
    _DAT_00028d22 = extraout_A0_03;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0();
    _DAT_00028864 = extraout_A0_04;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0();
    _DAT_00028854 = extraout_A0_05;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0();
    _DAT_0002884c = extraout_A0_06;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0();
    _DAT_00028850 = extraout_A0_07;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0();
    _DAT_00028858 = extraout_A0_08;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0();
    _DAT_00027d18 = extraout_A0_09;
  }
  FUN_000013ee();
  piVar2 = (int *)0x0;
  if (extraout_A0_10 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_10;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_10;
    FUN_00001a48();
    piVar2 = *(int **)(unaff_A6 + -0x10);
    *piVar2 = 0x21b02;
    *(undefined1 *)(piVar2 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar2;
  (**(code **)(*piVar2 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001fe8 at 00001fe8
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001fe8(void)

{
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int *piVar1;
  int unaff_A6;
  
  if (DAT_000264d0 != '\0') {
    func_0x00006a00();
    FUN_000013ee(0xb0);
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0;
      *(int *)(unaff_A6 + -0xda) = extraout_A0;
      func_0x000071e0(extraout_A0);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee(0xa4);
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      FUN_00001348(*(undefined4 *)(unaff_A6 + -0x2c));
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee(0xb8);
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x000071e8(extraout_A0_01);
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028d22 = extraout_A0_02;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0(0xae);
    _DAT_00028864 = extraout_A0_03;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0(22000);
    _DAT_00028854 = extraout_A0_04;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0(0x2f8e);
    _DAT_0002884c = extraout_A0_05;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028850 = extraout_A0_06;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0(0x4440);
    _DAT_00028858 = extraout_A0_07;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0(0x3a);
    _DAT_00027d18 = extraout_A0_08;
  }
  FUN_000013ee(0x1f0);
  piVar1 = (int *)0x0;
  if (extraout_A0_09 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_09;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_09;
    FUN_00001a48(*(undefined4 *)(unaff_A6 + -0x10));
    piVar1 = *(int **)(unaff_A6 + -0x10);
    *piVar1 = 0x21b02;
    *(undefined1 *)(piVar1 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar1;
  (**(code **)(*piVar1 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ff8 at 00001ff8
// Size: 465 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ff8(void)

{
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int extraout_A0_07;
  int extraout_A0_08;
  int extraout_A0_09;
  int *piVar1;
  int unaff_A6;
  
  FUN_000013ee(0xb0);
  if (extraout_A0 != 0) {
    *(int *)(unaff_A6 + -0xd6) = extraout_A0;
    *(int *)(unaff_A6 + -0xda) = extraout_A0;
    func_0x000071e0(extraout_A0);
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a18();
    FUN_000013ee(0xa4);
    if (extraout_A0_00 != 0) {
      *(int *)(unaff_A6 + -0x2c) = extraout_A0_00;
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_00;
      FUN_00001348(*(undefined4 *)(unaff_A6 + -0x2c));
      **(undefined4 **)(unaff_A6 + -0x2c) = 0x163d6;
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x00006a30();
    FUN_000013ee(0xb8);
    if (extraout_A0_01 != 0) {
      *(int *)(unaff_A6 + -0xd6) = extraout_A0_01;
      *(int *)(unaff_A6 + -0xda) = extraout_A0_01;
      func_0x000071e8(extraout_A0_01);
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028d22 = extraout_A0_02;
  }
  if (_DAT_00028864 == 0) {
    FUN_00001ea0(0xae);
    _DAT_00028864 = extraout_A0_03;
  }
  if (_DAT_00028854 == 0) {
    FUN_00001ea0(22000);
    _DAT_00028854 = extraout_A0_04;
  }
  if (_DAT_0002884c == 0) {
    FUN_00001ea0(0x2f8e);
    _DAT_0002884c = extraout_A0_05;
  }
  if (_DAT_00028850 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028850 = extraout_A0_06;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0(0x4440);
    _DAT_00028858 = extraout_A0_07;
  }
  if (_DAT_00027d18 == 0) {
    FUN_00001ea0(0x3a);
    _DAT_00027d18 = extraout_A0_08;
  }
  FUN_000013ee(0x1f0);
  piVar1 = (int *)0x0;
  if (extraout_A0_09 != 0) {
    *(int *)(unaff_A6 + -0x10) = extraout_A0_09;
    *(int *)(unaff_A6 + -0xd6) = extraout_A0_09;
    FUN_00001a48(*(undefined4 *)(unaff_A6 + -0x10));
    piVar1 = *(int **)(unaff_A6 + -0x10);
    *piVar1 = 0x21b02;
    *(undefined1 *)(piVar1 + 0x26) = 0;
  }
  _DAT_000297f4 = piVar1;
  (**(code **)(*piVar1 + 0x2a0))();
  func_0x00005998(_DAT_000297f4);
  if (_DAT_00021dc6 == -1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



