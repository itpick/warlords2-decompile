// Warlords II - Decompiled 68k Code
// Segment: CODE_077
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 70 bytes

void FUN_0000000c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  FUN_00000618(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0xa0))();
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)(param_1 + 8) = uVar2;
  return;
}



// Function: FUN_00000052 at 00000052
// Size: 54 bytes

void FUN_00000052(int param_1,int *param_2)

{
  undefined1 local_5;
  
  FUN_0000000c(param_1,param_2);
  (**(code **)(*param_2 + 0x74))(param_2,&local_5,1);
  *(undefined1 *)(param_1 + 10) = local_5;
  return;
}



// Function: FUN_00000088 at 00000088
// Size: 130 bytes

void FUN_00000088(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 local_8;
  
  FUN_00000504((short)param_1,(char)param_2);
  iVar1 = (**(code **)(*param_2 + 0x88))();
  for (sVar3 = 0; sVar3 < iVar1; sVar3 = sVar3 + 1) {
    local_8 = 0;
    (**(code **)(*param_2 + 0x78))();
    cVar2 = (**(code **)(*param_2 + 0xb4))((short)param_2,(short)&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x90))((short)param_1,(short)local_8);
    }
  }
  return;
}



// Function: FUN_0000010a at 0000010a
// Size: 86 bytes

void FUN_0000010a(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  FUN_00000618(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0xa0))();
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x88))();
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  return;
}



// Function: FUN_00000160 at 00000160
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000160(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar3;
  undefined2 uVar2;
  undefined1 uVar4;
  int local_66;
  int local_62;
  int local_5e;
  int iStack_5a;
  int iStack_56;
  int iStack_52;
  int iStack_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000013f0((char)param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar4 = 0xc0;
    iVar1 = (**(code **)(*param_2 + 0x88))();
    param_1[0x1f] = iVar1;
    (**(code **)(*param_2 + 0x7c))();
    uVar3 = 0xe2;
    (**(code **)(*param_1 + 0x3a8))((short)param_1,uVar4);
    (**(code **)(*param_2 + 0x7c))();
    (**(code **)(*param_1 + 0x3a0))((short)param_1,uVar3);
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x82) = uVar3;
    (**(code **)(*param_2 + 0x98))(param_2,&iStack_5a);
    param_1[0x21] = iStack_5a;
    param_1[0x22] = iStack_56;
    param_1[0x23] = iStack_52;
    param_1[0x24] = iStack_4e;
    uVar2 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x28) = uVar2;
    if (*(short *)(param_1 + 0x28) != -1) {
      func_0x00001df0();
      param_1[0x25] = local_66;
      param_1[0x26] = local_62;
      param_1[0x27] = local_5e;
    }
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0xa2) = uVar3;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10((char)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_000002b0 at 000002b0
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002b0(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar5;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000160(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar5 = (**(code **)(*param_2 + 0x78))();
    *(undefined1 *)(param_1 + 0x2e) = uVar5;
    uVar2 = (**(code **)(*param_2 + 0x88))();
    uVar3 = (**(code **)(*param_2 + 0x88))();
    uVar4 = (**(code **)(*param_2 + 0x88))();
    (**(code **)(*param_1 + 0x3d0))(param_1,&DAT_00025b76,uVar2,uVar3,uVar4);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_0000038c at 0000038c
// Size: 162 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000038c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000002b0(param_1,param_2);
  (**(code **)(*param_1 + 0x344))();
  (**(code **)(*param_1 + 0x424))();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    func_0x000020e0();
    *(undefined4 *)((int)param_1 + 0xba) = extraout_A0;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_0000042e at 0000042e
// Size: 86 bytes

void FUN_0000042e(int param_1,int *param_2)

{
  undefined1 uVar2;
  undefined4 uVar1;
  
  FUN_0000010a(param_1,param_2);
  uVar2 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)(param_1 + 0x1e) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0xa0))();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xa0))();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}



// Function: FUN_00000484 at 00000484
// Size: 128 bytes

void FUN_00000484(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 local_8;
  
  FUN_00000618(param_1,param_2);
  (**(code **)(*param_2 + 0x8c))(param_2,&local_8);
  *(undefined4 *)(param_1 + 4) = local_8;
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 8) = uVar1;
  (**(code **)(*param_2 + 0x74))(param_2,param_1 + 10,8);
  (**(code **)(*param_2 + 0x9c))(param_2,param_1 + 0x12);
  (**(code **)(*param_2 + 0x9c))(param_2,param_1 + 0x18);
  return;
}



// Function: FUN_00000504 at 00000504
// Size: 86 bytes

void FUN_00000504(int param_1,int *param_2)

{
  undefined2 uVar2;
  undefined4 uVar1;
  
  FUN_00000618(param_1,param_2);
  uVar2 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x88))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



// Function: FUN_0000055a at 0000055a
// Size: 154 bytes

void FUN_0000055a(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar4;
  int iVar2;
  short sVar3;
  char cVar5;
  short sVar6;
  undefined4 local_8;
  
  FUN_00000618(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0xa0))();
  *(undefined4 *)((int)param_1 + 0x16) = uVar1;
  uVar4 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)(param_1 + 5) = uVar4;
  iVar2 = (**(code **)(*param_2 + 0x88))();
  param_1[3] = iVar2;
  sVar3 = (**(code **)(*param_2 + 0x84))();
  for (sVar6 = 0; sVar6 < sVar3; sVar6 = sVar6 + 1) {
    local_8 = 0;
    cVar5 = (**(code **)(*param_2 + 0xb4))(param_2,&local_8);
    if (cVar5 != '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1,local_8);
    }
  }
  return;
}



// Function: FUN_000005f4 at 000005f4
// Size: 36 bytes

void FUN_000005f4(int param_1,undefined4 param_2)

{
  FUN_00001692(param_1,param_2);
  *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x6c) = 0x80;
  return;
}



// Function: FUN_00000618 at 00000618
// Size: 8 bytes

void FUN_00000618(void)

{
  return;
}



// Function: FUN_00000620 at 00000620
// Size: 326 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000620(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uStack_6a;
  undefined4 uStack_66;
  undefined4 uStack_62;
  undefined4 uStack_5e;
  undefined1 auStack_5a [8];
  undefined1 auStack_52 [8];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = SUB42(param_1,0);
  FUN_000013f0(uVar4,(char)param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    for (cVar3 = '\0'; cVar3 < '\x02'; cVar3 = cVar3 + '\x01') {
      iVar1 = (**(code **)(*param_2 + 0xa0))();
      param_1[cVar3 + 0x25] = iVar1;
    }
    (**(code **)(*param_2 + 0x90))((short)param_2,(char)auStack_52);
    (**(code **)(*param_2 + 0x90))((char)param_2,(short)auStack_5a);
    (**(code **)(*param_2 + 0x7c))();
    (**(code **)(*param_2 + 0x7c))();
    (**(code **)(*param_2 + 0x98))(param_2,(short)&uStack_6a);
    *(undefined4 *)((int)param_1 + 0xa6) = uStack_6a;
    *(undefined4 *)((int)param_1 + 0xaa) = uStack_66;
    *(undefined4 *)((int)param_1 + 0xae) = uStack_62;
    *(undefined4 *)((int)param_1 + 0xb2) = uStack_5e;
    uVar2 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0xb6) = uVar2;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  uVar2 = 0x46;
  (**(code **)(*param_1 + 0x3a4))(uVar4,(short)auStack_52);
  (**(code **)(*param_1 + 0x3a8))(uVar4,(short)auStack_5a,uVar2);
  return;
}



// Function: FUN_00000766 at 00000766
// Size: 14 bytes

void FUN_00000766(void)

{
  return;
}



// Function: FUN_00000774 at 00000774
// Size: 44 bytes

void FUN_00000774(void)

{
  int extraout_A0;
  
  func_0x000073b0(8);
  if (extraout_A0 != 0) {
    FUN_000007a0(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000007a0 at 000007a0
// Size: 40 bytes

void FUN_000007a0(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x9012;
  param_1[1] = 0;
  return;
}



// Function: FUN_000007c8 at 000007c8
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007c8(int *param_1)

{
  int iVar1;
  int extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000dd8(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    func_0x000020e0();
    param_1[1] = extraout_A0;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00000848 at 00000848
// Size: 14 bytes

void FUN_00000848(void)

{
  return;
}



// Function: FUN_00000856 at 00000856
// Size: 44 bytes

void FUN_00000856(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xe);
  if (extraout_A0 != 0) {
    FUN_00000882(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000882 at 00000882
// Size: 48 bytes

void FUN_00000882(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x9072;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  return;
}



// Function: FUN_000008b2 at 000008b2
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008b2(int *param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000dd8(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    func_0x00001e98(0);
    *(undefined4 *)((int)param_1 + 10) = extraout_A0;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00000936 at 00000936
// Size: 34 bytes

undefined1 FUN_00000936(int *param_1)

{
  undefined1 local_5;
  
  (**(code **)(*param_1 + 0x74))(param_1,&local_5,1);
  return local_5;
}



// Function: FUN_00000958 at 00000958
// Size: 34 bytes

undefined1 FUN_00000958(int *param_1)

{
  undefined1 local_5;
  
  (**(code **)(*param_1 + 0x74))(param_1,&local_5,1);
  return local_5;
}



// Function: FUN_0000097a at 0000097a
// Size: 36 bytes

void FUN_0000097a(int *param_1,undefined2 *param_2)

{
  *param_2 = 0;
  (**(code **)(*param_1 + 0x74))(param_1,(int)param_2 + 1,1);
  return;
}



// Function: FUN_0000099e at 0000099e
// Size: 34 bytes

undefined2 FUN_0000099e(int *param_1)

{
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x74))(param_1,&local_6,2);
  return local_6;
}



// Function: FUN_000009c0 at 000009c0
// Size: 34 bytes

undefined4 FUN_000009c0(int *param_1)

{
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x74))(param_1,&local_8,4);
  return local_8;
}



// Function: FUN_000009e2 at 000009e2
// Size: 98 bytes

void FUN_000009e2(int *param_1,byte *param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x74))(param_1,(short)param_2,1);
  if ((int)param_3._0_2_ < (int)(*param_2 + 1)) {
    func_0x00001c00();
  }
  else {
    (**(code **)(*param_1 + 0x74))(param_1,(short)param_2 + 1,*param_2);
  }
  return;
}



// Function: FUN_00000a44 at 00000a44
// Size: 140 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a44(int *param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  if (-1 < iVar1) {
    func_0x00001e98(iVar1);
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00001d08(extraout_A0);
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00000b02 at 00000b02
// Size: 62 bytes

bool FUN_00000b02(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_A0;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  uVar2 = (**(code **)(*param_1 + 0xa0))();
  iVar3 = (**(code **)(*param_1 + 0x58))();
  iVar4 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0xa4))(param_1,(short)local_104);
  *param_2 = 0;
  FUN_000014f0(uVar2,local_104);
  *param_2 = extraout_A0;
  iVar1 = *param_2;
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x5c))(param_1,iVar4 + iVar3);
  }
  return iVar1 != 0;
}



// Function: FUN_00000b40 at 00000b40
// Size: 55 bytes

bool FUN_00000b40(void)

{
  int iVar1;
  int extraout_A0;
  int *unaff_A2;
  int *unaff_A3;
  
  (**(code **)(*unaff_A2 + 0xa4))();
  *unaff_A3 = 0;
  FUN_000014f0();
  *unaff_A3 = extraout_A0;
  iVar1 = *unaff_A3;
  if (iVar1 == 0) {
    (**(code **)(*unaff_A2 + 0x5c))();
  }
  return iVar1 != 0;
}



// Function: FUN_00000b78 at 00000b78
// Size: 24 bytes

void FUN_00000b78(void)

{
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x5c))();
  return;
}



// Function: FUN_00000b90 at 00000b90
// Size: 238 bytes

bool FUN_00000b90(int *param_1,undefined4 *param_2)

{
  short sVar2;
  short sVar3;
  int iVar1;
  short sVar4;
  undefined2 extraout_A0w;
  undefined4 extraout_A0;
  int local_108;
  char local_104 [256];
  
  local_104[0] = '\0';
  (**(code **)(*param_1 + 0x74))(param_1,(short)&local_108,4);
  sVar2 = (**(code **)(*param_1 + 0x58))();
  sVar3 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0xa4))(param_1,(short)local_104);
  if (local_104[0] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x108))((short)param_1,(short)local_108);
  }
  else {
    FUN_00000b78((short)local_104);
    sVar4 = FUN_00000b40(extraout_A0w);
    iVar1 = (int)sVar4;
    (**(code **)(*param_1 + 0x10c))(param_1,local_108,sVar4);
  }
  *param_2 = 0;
  if (iVar1 != 0) {
    func_0x00000b68();
    *param_2 = extraout_A0;
  }
  else {
    (**(code **)(*param_1 + 0x5c))((short)param_1,sVar3 + sVar2);
  }
  return iVar1 != 0 || local_108 == 0;
}



// Function: FUN_00000c7e at 00000c7e
// Size: 62 bytes

void FUN_00000c7e(int *param_1,undefined2 *param_2)

{
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x00007208(&local_8);
  (**(code **)(*param_1 + 0x74))(param_1,&local_8,4);
  *param_2 = local_8;
  param_2[1] = local_6;
  return;
}



// Function: FUN_00000cbc at 00000cbc
// Size: 30 bytes

void FUN_00000cbc(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2,8);
  return;
}



// Function: FUN_00000cda at 00000cda
// Size: 30 bytes

void FUN_00000cda(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2,8);
  return;
}



// Function: FUN_00000cf8 at 00000cf8
// Size: 30 bytes

void FUN_00000cf8(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2,0x10);
  return;
}



// Function: FUN_00000d16 at 00000d16
// Size: 30 bytes

void FUN_00000d16(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2,6);
  return;
}



// Function: FUN_00000d34 at 00000d34
// Size: 34 bytes

undefined4 FUN_00000d34(int *param_1)

{
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x74))(param_1,&local_8,4);
  return local_8;
}



// Function: FUN_00000d56 at 00000d56
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000d56(int *param_1,int *param_2)

{
  short sVar2;
  char cVar3;
  int iVar1;
  int *extraout_A0;
  int extraout_A0_00;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar3 = '\0';
  (**(code **)(*param_1 + 0x6c))();
  sVar2 = (**(code **)(*param_1 + 0x84))();
  if (sVar2 == 0) {
    *param_2 = 0;
    cVar3 = '\x01';
  }
  else if (sVar2 == 1) {
    (**(code **)(*param_1 + 0x74))((short)param_1,(char)&local_4e,4);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x5c))((char)extraout_A0,local_4e);
      *param_2 = extraout_A0_00;
    }
    if (*param_2 != 0) {
      cVar3 = '\x01';
    }
  }
  else {
    if (sVar2 == 2) {
      cVar3 = (**(code **)(*param_1 + 0xac))((char)param_1,param_2);
    }
    else {
      cVar3 = '\0';
      if (sVar2 == 3) {
        cVar3 = (**(code **)(*param_1 + 0xb0))((char)param_1,param_2);
      }
    }
    if (cVar3 != '\0') {
      if (extraout_A0 != (int *)0x0) {
        local_4e = (**(code **)(*extraout_A0 + 0x58))((short)extraout_A0,(short)*param_2);
      }
      uStack_16 = 0;
      uStack_14 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      puStack_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar1 = func_0x000076a8(auStack_4a);
      if (iVar1 == 0) {
        if (*param_2 != 0) {
          (**(code **)(*(int *)*param_2 + 0x40))((char)(int *)*param_2,param_1);
        }
        _DAT_00025f52 = puStack_10;
      }
      else {
        *param_2 = 0;
        func_0x00001c10();
      }
    }
  }
  return cVar3;
}



// Function: FUN_00000dd8 at 00000dd8
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000dd8(void)

{
  undefined4 uVar1;
  int iVar2;
  char unaff_D3b;
  short unaff_D4w;
  int *unaff_A2;
  int *unaff_A3;
  int *unaff_A4;
  int unaff_A6;
  bool in_ZF;
  
  if (in_ZF) {
    unaff_D3b = (**(code **)(*unaff_A3 + 0xac))();
  }
  else if (unaff_D4w == 3) {
    unaff_D3b = (**(code **)(*unaff_A3 + 0xb0))();
  }
  if (unaff_D3b != '\0') {
    *(undefined1 *)(unaff_A6 + -0x4b) = 0;
    if (unaff_A4 != (int *)0x0) {
      uVar1 = (**(code **)(*unaff_A4 + 0x58))();
      *(undefined4 *)(unaff_A6 + -0x4a) = uVar1;
    }
    *(undefined2 *)(unaff_A6 + -0x12) = 0;
    *(undefined4 *)(unaff_A6 + -0x10) = 0;
    *(undefined4 *)(unaff_A6 + -0xc) = 0;
    *(undefined4 *)(unaff_A6 + -8) = 0;
    *(undefined4 *)(unaff_A6 + -4) = 0;
    *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
    _DAT_00025f52 = unaff_A6 + -0x46;
    iVar2 = func_0x000076a8(unaff_A6 + -0x46);
    if (iVar2 == 0) {
      if (*unaff_A2 != 0) {
        (**(code **)(*(int *)*unaff_A2 + 0x40))();
      }
      _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
    }
    else {
      *unaff_A2 = 0;
      func_0x00001c10();
    }
  }
  return unaff_D3b;
}



// Function: FUN_00000ea0 at 00000ea0
// Size: 64 bytes

void FUN_00000ea0(int *param_1)

{
  uint uVar1;
  undefined1 uStack_5;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x74))(param_1,&uStack_5,1);
  }
  return;
}



// Function: FUN_00000ee0 at 00000ee0
// Size: 14 bytes

void FUN_00000ee0(void)

{
  return;
}



// Function: FUN_00000eee at 00000eee
// Size: 14 bytes

void FUN_00000eee(void)

{
  return;
}



// Function: FUN_00000efc at 00000efc
// Size: 44 bytes

void FUN_00000efc(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x12);
  if (extraout_A0 != 0) {
    FUN_00000f28(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000f28 at 00000f28
// Size: 40 bytes

void FUN_00000f28(undefined4 *param_1)

{
  FUN_00000882(param_1);
  *param_1 = 0x9182;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  return;
}



// Function: FUN_00000f50 at 00000f50
// Size: 28 bytes

void FUN_00000f50(int param_1,undefined4 param_2)

{
  FUN_000008b2(param_1);
  *(undefined4 *)(param_1 + 0xe) = param_2;
  return;
}



// Function: FUN_00000f6c at 00000f6c
// Size: 60 bytes

void FUN_00000f6c(int param_1,undefined2 param_2)

{
  func_0x00001bf0(*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0xe) + 0x134))
            (*(int **)(param_1 + 0xe),param_2,(short)&stack0x0000000c);
  func_0x00001c00();
  return;
}



// Function: FUN_00000fa8 at 00000fa8
// Size: 14 bytes

void FUN_00000fa8(void)

{
  return;
}



// Function: FUN_00000fb6 at 00000fb6
// Size: 44 bytes

void FUN_00000fb6(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x20);
  if (extraout_A0 != 0) {
    FUN_00000fe2(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000fe2 at 00000fe2
// Size: 58 bytes

void FUN_00000fe2(undefined4 *param_1)

{
  FUN_00000882(param_1);
  *param_1 = 0x9292;
  *(undefined4 *)((int)param_1 + 0x1a) = 1;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  return;
}



// Function: FUN_0000101c at 0000101c
// Size: 168 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000101c(int *param_1,int param_2,undefined4 param_3)

{
  char cVar2;
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000008b2(param_1);
  *(undefined4 *)((int)param_1 + 0x1a) = param_3;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  if (param_2 == 0) {
    return 0;
  }
  cVar2 = func_0x00001d60(param_2);
  if (cVar2 != '\0') {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  func_0x000075d0();
  *(int *)((int)param_1 + 0x16) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000010e4 at 000010e4
// Size: 98 bytes

void FUN_000010e4(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x16) - *(int *)(param_1 + 0x12);
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  if (0 < param_3) {
    puVar2 = (undefined1 *)(*(int *)(param_1 + 0x12) + **(int **)(param_1 + 0xe));
    for (iVar1 = param_3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    *(int *)(param_1 + 0x12) = param_3 + *(int *)(param_1 + 0x12);
  }
  func_0x00001c00();
  return;
}



// Function: FUN_00001146 at 00001146
// Size: 14 bytes

void FUN_00001146(void)

{
  return;
}



// Function: FUN_00001154 at 00001154
// Size: 44 bytes

void FUN_00001154(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x16);
  if (extraout_A0 != 0) {
    FUN_00001180(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001180 at 00001180
// Size: 44 bytes

void FUN_00001180(undefined4 *param_1)

{
  FUN_00000882(param_1);
  *param_1 = 0x93a6;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  return;
}



// Function: FUN_000011ac at 000011ac
// Size: 18 bytes

void FUN_000011ac(undefined4 param_1)

{
  FUN_000008b2(param_1);
  return;
}



// Function: FUN_000011be at 000011be
// Size: 14 bytes

void FUN_000011be(void)

{
  return;
}



// Function: FUN_000011cc at 000011cc
// Size: 44 bytes

void FUN_000011cc(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x1a);
  if (extraout_A0 != 0) {
    FUN_000011f8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000011f8 at 000011f8
// Size: 48 bytes

void FUN_000011f8(undefined4 *param_1)

{
  FUN_00000882(param_1);
  *param_1 = 0x94b6;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  return;
}



// Function: FUN_00001228 at 00001228
// Size: 126 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001228(int *param_1)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000008b2(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
  func_0x00001c10();
  return;
}



// Function: FUN_000012e6 at 000012e6
// Size: 108 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000012e6(int *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  (**(code **)(*param_1 + 0x60))();
  (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)((int)param_1 + 0xe));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001382 at 00001382
// Size: 44 bytes

void FUN_00001382(int param_1,int *param_2)

{
  undefined1 uVar1;
  
  FUN_0000010a(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  return;
}



// Function: FUN_000013ae at 000013ae
// Size: 66 bytes

void FUN_000013ae(int *param_1,undefined4 param_2)

{
  FUN_0000055a(param_1,param_2);
  (**(code **)(*param_1 + 300))(param_1,param_2);
  (**(code **)(*param_1 + 0x130))(param_1,param_2);
  return;
}



// Function: FUN_000013f0 at 000013f0
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013f0(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar2;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 uStack_62;
  undefined4 uStack_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)((int)param_1 + 0x7a) = uVar3;
    (**(code **)(*param_2 + 0x90))((short)param_2,&local_52);
    *(undefined4 *)((int)param_1 + 0x2a) = local_52;
    *(undefined4 *)((int)param_1 + 0x2e) = local_4e;
    (**(code **)(*param_2 + 0x90))(param_2,(short)&local_5a);
    *(undefined4 *)((int)param_1 + 0x32) = local_5a;
    *(undefined4 *)((int)param_1 + 0x36) = local_56;
    (**(code **)(*param_2 + 0x74))(param_2,&local_64,1);
    (**(code **)(*param_2 + 0x74))(param_2,&local_63,1);
    *(undefined1 *)((int)param_1 + 0x43) = local_63;
    *(undefined1 *)((int)param_1 + 0x42) = local_64;
    uVar4 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x14) = uVar4;
    uVar4 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x51) = uVar4;
    uVar4 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x46) = uVar4;
    uVar4 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x47) = uVar4;
    uVar3 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)((int)param_1 + 0x4a) = uVar3;
    uVar4 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x12) = uVar4;
    uVar4 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x49) = uVar4;
    uVar3 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x13) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)((int)param_1 + 0x4e) = uVar3;
    uStack_5e = 0;
    cVar5 = (**(code **)(*param_2 + 0xb4))(param_2,&uStack_5e);
    if (cVar5 == '\0') {
      *(undefined4 *)((int)param_1 + 0x6e) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x6e) = uStack_5e;
    }
    uStack_62 = 0;
    cVar5 = (**(code **)(*param_2 + 0xb4))(param_2,&uStack_62);
    if (cVar5 == '\0') {
      *(undefined4 *)((int)param_1 + 0x72) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x72) = uStack_62;
    }
    uVar2 = (**(code **)(*param_2 + 0x88))();
    *(undefined4 *)((int)param_1 + 0x76) = uVar2;
    (**(code **)(*param_2 + 0xa0))();
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_000014f0 at 000014f0
// Size: 210 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000014f0(void)

{
  undefined1 in_D0b;
  undefined2 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar1;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  
  *(undefined1 *)(unaff_A2 + 0x47) = in_D0b;
  uVar2 = (**(code **)(*unaff_A3 + 0x84))();
  *(undefined2 *)(unaff_A2 + 0x4a) = uVar2;
  uVar3 = (**(code **)(*unaff_A3 + 0x7c))();
  *(undefined1 *)(unaff_A2 + 0x48) = uVar3;
  uVar3 = (**(code **)(*unaff_A3 + 0x7c))();
  *(undefined1 *)(unaff_A2 + 0x49) = uVar3;
  uVar2 = (**(code **)(*unaff_A3 + 0x84))();
  *(undefined2 *)(unaff_A2 + 0x4c) = uVar2;
  uVar2 = (**(code **)(*unaff_A3 + 0x84))();
  *(undefined2 *)(unaff_A2 + 0x4e) = uVar2;
  *(undefined4 *)(unaff_A6 + -0x5a) = 0;
  cVar4 = (**(code **)(*unaff_A3 + 0xb4))();
  if (cVar4 == '\0') {
    *(undefined4 *)(unaff_A2 + 0x6e) = 0;
  }
  else {
    *(undefined4 *)(unaff_A2 + 0x6e) = *(undefined4 *)(unaff_A6 + -0x5a);
  }
  *(undefined4 *)(unaff_A6 + -0x5e) = 0;
  cVar4 = (**(code **)(*unaff_A3 + 0xb4))();
  if (cVar4 == '\0') {
    *(undefined4 *)(unaff_A2 + 0x72) = 0;
  }
  else {
    *(undefined4 *)(unaff_A2 + 0x72) = *(undefined4 *)(unaff_A6 + -0x5e);
  }
  uVar1 = (**(code **)(*unaff_A3 + 0x88))();
  *(undefined4 *)(unaff_A2 + 0x76) = uVar1;
  (**(code **)(*unaff_A3 + 0xa0))();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_000015e0 at 000015e0
// Size: 178 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015e0(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_52;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000013f0(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x1f) = uVar2;
    (**(code **)(*param_2 + 0x90))((short)param_2,&local_52);
    *(undefined4 *)((int)param_1 + 0x7e) = local_52;
    *(undefined4 *)((int)param_1 + 0x82) = local_4e;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00001692 at 00001692
// Size: 540 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001692(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 uVar5;
  char cVar6;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_188;
  int *local_184;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined1 auStack_164 [16];
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined1 auStack_14c [256];
  undefined1 auStack_4c [52];
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  ushort local_6;
  
  local_184 = param_2;
  local_188 = param_1;
  FUN_000013f0();
  local_18 = 0;
  local_16 = 0;
  local_e = 0;
  local_a = 0;
  local_12 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4c;
  iVar4 = func_0x000076a8((short)auStack_4c);
  if (iVar4 != 0) {
    local_184 = param_1;
    local_188 = (int *)0x1906;
    (**(code **)(*param_1 + 0x4c))();
    local_188 = (int *)local_16;
    func_0x00001c10();
    *(byte *)(param_1 + 0x2a) = (byte)(local_6 >> 8) & 1;
    *(char *)((int)param_1 + 0xab) = (char)((int)(local_6 & 0x80) >> 7);
    *(char *)(param_1 + 0x2b) = (char)((int)(local_6 & 0x40) >> 6);
    *(char *)((int)param_1 + 0xa9) = (char)((int)(local_6 & 0x10) >> 4);
    *(char *)((int)param_1 + 0xaa) = (char)((int)(local_6 & 0x20) >> 5);
    *(char *)((int)param_1 + 0xb2) = (char)((int)(local_6 & 8) >> 3);
    *(char *)((int)param_1 + 0xb3) = (char)((int)(local_6 & 4) >> 2);
    *(char *)((int)param_1 + 0xb5) = (char)((int)(local_6 & 2) >> 1);
    return;
  }
  puVar2 = auStack_14c;
  puVar3 = &DAT_00025b76;
  for (iVar4 = DAT_00025b76 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_184 = (int *)auStack_164;
  local_188 = param_1;
  (**(code **)(*param_1 + 0x310))();
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x20) = uVar5;
  iVar4 = (**(code **)(*param_2 + 0xa0))();
  param_1[0x26] = iVar4;
  (**(code **)(*param_2 + 0x74))(param_2,&local_6,2);
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xbe) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x30) = uVar5;
  puVar8 = (undefined4 *)&stack0xfffffe80;
  if (*(short *)((int)param_1 + 0xbe) != -1) {
    local_184 = (int *)auStack_14c;
    local_188 = (int *)CONCAT22(*(undefined2 *)(param_1 + 0x30),*(undefined2 *)((int)param_1 + 0xbe)
                               );
    func_0x00007658();
    puVar8 = &local_188;
  }
  *(int **)((int)puVar8 + -4) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar8 + -4) + 0x410);
  *(undefined4 *)((int)puVar8 + -8) = 0x1798;
  cVar6 = (*pcVar1)();
  if (cVar6 == '\0') {
    *(int **)((int)puVar8 + -4) = param_1;
    pcVar1 = *(code **)(**(int **)((int)puVar8 + -4) + 0x39c);
    *(undefined4 *)((int)puVar8 + -8) = 0x17b0;
    (*pcVar1)();
    uVar7 = extraout_A0;
  }
  else {
    uVar7 = 0xffffffff;
  }
  *(undefined2 **)((int)puVar8 + -4) = &local_170;
  *(undefined1 **)((int)puVar8 + -8) = auStack_164;
  *(undefined4 *)((int)puVar8 + -0xc) = 0x17c2;
  func_0x00003900();
  local_154 = local_170;
  local_152 = local_16e;
  local_150 = local_16c;
  local_14e = local_16a;
  *(undefined4 *)((int)puVar8 + -0xc) = 0;
  *(undefined2 **)((int)puVar8 + -0x10) = &local_154;
  *(undefined4 *)((int)puVar8 + -0x14) = 0x17e8;
  func_0x00007258();
  *(undefined4 *)((int)puVar8 + -0x10) = extraout_A0_00;
  *(undefined1 **)((int)puVar8 + -0x14) = auStack_14c;
  *(undefined4 *)((int)puVar8 + -0x18) = 0x17f6;
  func_0x00007310();
  *(undefined4 *)((int)puVar8 + -0x14) = extraout_A0_01;
  *(undefined1 *)((int)puVar8 + -0x16) = 0;
  *(undefined2 *)((int)puVar8 + -0x18) = *(undefined2 *)(param_1 + 0x20);
  *(undefined4 *)((int)puVar8 + -0x1c) = uVar7;
  *(char *)((int)puVar8 + -0x1e) = (char)((int)(local_6 & 0x8000) >> 0xf);
  *(int **)((int)puVar8 + -0x22) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001994 at 00001994
// Size: 70 bytes

void FUN_00001994(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_000013f0(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x7c) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x7e) = uVar1;
  return;
}



// Function: FUN_000019da at 000019da
// Size: 44 bytes

undefined2 FUN_000019da(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 local_6;
  
  uVar1 = FUN_0000099e(param_1);
  local_6._1_1_ = (undefined1)uVar1;
  local_6._0_1_ = (undefined1)((ushort)uVar1 >> 8);
  local_6 = CONCAT11((undefined1)local_6,local_6._0_1_);
  return local_6;
}



// Function: FUN_00001a06 at 00001a06
// Size: 60 bytes

undefined4 FUN_00001a06(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  uVar3 = FUN_000009c0(param_1);
  local_8._3_1_ = (undefined1)uVar3;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = (undefined1)((uint)uVar3 >> 0x18);
  local_8._2_1_ = (undefined1)((uint)uVar3 >> 8);
  uVar1 = local_8._2_1_;
  local_8._1_1_ = (undefined1)((uint)uVar3 >> 0x10);
  local_8._2_2_ = CONCAT11(local_8._1_1_,local_8._0_1_);
  local_8 = CONCAT13(uVar2,CONCAT12(uVar1,local_8._2_2_));
  return local_8;
}



