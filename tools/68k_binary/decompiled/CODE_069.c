// Warlords II - Decompiled 68k Code
// Segment: CODE_069
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000050 at 00000050
// Size: 68 bytes

void FUN_00000050(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x72);
  }
  FUN_000025a0(param_1,uVar1);
  *param_1 = 0x134a4;
  return;
}



// Function: FUN_00000094 at 00000094
// Size: 58 bytes

undefined4 FUN_00000094(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x134a4;
    uVar1 = func_0x000025a8((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00002590((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_000000ce at 000000ce
// Size: 70 bytes

void FUN_000000ce(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xc))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x94))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_00000114 at 00000114
// Size: 70 bytes

void FUN_00000114(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x10))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x94))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_0000015a at 0000015a
// Size: 8 bytes

void FUN_0000015a(void)

{
  return;
}



// Function: FUN_00000162 at 00000162
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000162(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000001ae at 000001ae
// Size: 8 bytes

void FUN_000001ae(void)

{
  return;
}



// Function: FUN_000001b6 at 000001b6
// Size: 30 bytes

void FUN_000001b6(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x26c))();
  }
  return;
}



// Function: FUN_000001d4 at 000001d4
// Size: 10 bytes

undefined4 FUN_000001d4(void)

{
  return 1;
}



// Function: FUN_000001de at 000001de
// Size: 414 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001de(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar4;
  undefined1 auStack_f6 [70];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [74];
  undefined1 auStack_56 [74];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined1 *puVar3;
  
  if (*(char *)((int)param_1 + 10) != '\0') {
    (**(code **)(*param_2 + 0x214))(param_2,auStack_b0);
    FUN_000037d2(param_3,auStack_f6,auStack_b0);
    cVar1 = FUN_000039dc(auStack_f6);
    if (cVar1 == '\0') {
      puVar3 = auStack_b0;
      (**(code **)(*param_2 + 0x148))(param_2,puVar3,&local_c);
      uVar2 = (undefined2)((uint)puVar3 >> 0x10);
      if ((*(byte *)((int)param_1 + 10) & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)param_1 + 10) & 0xf) == 0xf) {
        func_0x00007258(&local_c);
        return;
      }
      if ((*(byte *)((int)param_1 + 10) & 1) != 0) {
        uVar4 = CONCAT13(1,(int3)CONCAT22(uVar2,local_a));
        (**(code **)(*param_1 + 100))(param_1,uVar4,CONCAT22(local_c,local_6));
        uVar2 = (undefined2)((uint)uVar4 >> 0x10);
      }
      if ((*(byte *)((int)param_1 + 10) & 2) != 0) {
        (**(code **)(*param_1 + 100))
                  (param_1,CONCAT22(uVar2,local_a) & 0xffffff,CONCAT22(local_c,local_8));
      }
      if ((*(byte *)((int)param_1 + 10) & 4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)param_1 + 10) & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)((int)param_1 + 10) & 0x20) != 0) {
        func_0x00007258(&local_c);
        return;
      }
      if ((*(byte *)((int)param_1 + 10) & 0x40) != 0) {
        func_0x00007258(&local_c);
        return;
      }
      if ((*(byte *)((int)param_1 + 10) & 0x80) != 0) {
        FUN_00001c90(auStack_a0);
        FUN_00001c90(auStack_56);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}



// Function: FUN_0000045c at 0000045c
// Size: 22 bytes

void FUN_0000045c(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x210))();
  return;
}



// Function: FUN_00000472 at 00000472
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000472(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000048e at 0000048e
// Size: 36 bytes

void FUN_0000048e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_2 + 0x148))(param_2,param_3,auStack_c);
  func_0x00007258(auStack_c);
  return;
}



// Function: FUN_000004bc at 000004bc
// Size: 22 bytes

void FUN_000004bc(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x218))();
  return;
}



// Function: FUN_000004d2 at 000004d2
// Size: 22 bytes

void FUN_000004d2(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x3ac))();
  return;
}



// Function: FUN_000004e8 at 000004e8
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000004e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000508 at 00000508
// Size: 98 bytes

void FUN_00000508(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_14);
  FUN_000037d2(param_3,auStack_2c,auStack_14);
  cVar1 = FUN_000039dc(auStack_2c);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x148))(param_2,auStack_14,auStack_1c);
    func_0x00007258(auStack_1c);
    return;
  }
  return;
}



// Function: FUN_00000574 at 00000574
// Size: 136 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000574(undefined4 param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 extraout_A0b;
  undefined2 *puVar2;
  undefined1 auStack_30 [16];
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 auStack_1c [16];
  undefined1 auStack_c [8];
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_1c);
  FUN_000037d2(param_3,auStack_30,auStack_1c);
  cVar1 = FUN_000039dc(auStack_30);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x148))(param_2,auStack_1c,auStack_c);
    local_20 = 1;
    local_1e = 1;
    puVar2 = &local_20;
    func_0x00007260((short)auStack_c);
    func_0x00007238(extraout_A0b,puVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000063c at 0000063c
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000063c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_3e [34];
  undefined1 auStack_1c [24];
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_1c);
  FUN_000037d2(param_3,auStack_3e,auStack_1c);
  cVar1 = FUN_000039dc(auStack_3e);
  if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000006c8 at 000006c8
// Size: 120 bytes

void FUN_000006c8(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_1c);
  FUN_000037d2(param_3,auStack_2c,auStack_1c);
  uVar2 = (undefined2)((uint)param_3 >> 0x10);
  cVar1 = FUN_000039dc(auStack_2c);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x148))(param_2,auStack_1c,&local_c);
    (**(code **)(*param_1 + 100))
              (param_1,CONCAT22(uVar2,local_a) & 0xffffff,CONCAT22(local_c,local_8));
  }
  return;
}



// Function: FUN_00000740 at 00000740
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000740(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_3e [34];
  undefined1 auStack_1c [24];
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_1c);
  FUN_000037d2(param_3,auStack_3e,auStack_1c);
  cVar1 = FUN_000039dc(auStack_3e);
  if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000007ca at 000007ca
// Size: 122 bytes

void FUN_000007ca(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_6;
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_1c);
  FUN_000037d2(param_3,auStack_2c,auStack_1c);
  uVar2 = (undefined2)((uint)param_3 >> 0x10);
  cVar1 = FUN_000039dc(auStack_2c);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x148))(param_2,auStack_1c,&local_c);
    (**(code **)(*param_1 + 100))
              (param_1,CONCAT13(1,(int3)CONCAT22(uVar2,local_a)),CONCAT22(local_c,local_6));
  }
  return;
}



// Function: FUN_00000844 at 00000844
// Size: 98 bytes

void FUN_00000844(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_14);
  FUN_000037d2(param_3,auStack_2c,auStack_14);
  cVar1 = FUN_000039dc(auStack_2c);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x148))(param_2,auStack_14,auStack_1c);
    func_0x00007258(auStack_1c);
    return;
  }
  return;
}



// Function: FUN_000008b0 at 000008b0
// Size: 98 bytes

void FUN_000008b0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_2 + 0x214))(param_2,auStack_14);
  FUN_000037d2(param_3,auStack_2c,auStack_14);
  cVar1 = FUN_000039dc(auStack_2c);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x148))(param_2,auStack_14,auStack_1c);
    func_0x00007258(auStack_1c);
    return;
  }
  return;
}



// Function: FUN_00000922 at 00000922
// Size: 38 bytes

undefined4 FUN_00000922(undefined4 param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 < *param_2) {
    uVar1 = 1;
  }
  else if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00000948 at 00000948
// Size: 118 bytes

void FUN_00000948(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  short sVar2;
  char *extraout_A0;
  undefined1 local_a [2];
  int local_8;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (0 < iVar1) {
    for (sVar2 = 1; sVar2 <= iVar1; sVar2 = sVar2 + 1) {
      (**(code **)(*param_1 + 0x74))(param_1,(int)sVar2);
      if ((param_2 == *(int *)(extraout_A0 + 2)) && (param_3._0_1_ == *extraout_A0)) {
        return;
      }
    }
  }
  local_8 = param_2;
  (**(code **)(*param_1 + 0x88))(param_1,local_a);
  return;
}



// Function: FUN_000009be at 000009be
// Size: 30 bytes

void FUN_000009be(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return;
}



// Function: FUN_000009dc at 000009dc
// Size: 28 bytes

undefined1 FUN_000009dc(int *param_1,undefined4 param_2)

{
  undefined1 *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return *extraout_A0;
}



// Function: FUN_000009f8 at 000009f8
// Size: 16 bytes

undefined1 FUN_000009f8(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



// Function: FUN_00000a08 at 00000a08
// Size: 18 bytes

void FUN_00000a08(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2._0_1_;
  return;
}



// Function: FUN_00000a1a at 00000a1a
// Size: 16 bytes

void FUN_00000a1a(void)

{
  return;
}



// Function: FUN_00000a2a at 00000a2a
// Size: 68 bytes

void FUN_00000a2a(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x12) != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x12) + 0x84))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x12) + 0x74))();
  }
  return;
}



// Function: FUN_00000a6e at 00000a6e
// Size: 106 bytes

undefined4 FUN_00000a6e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x98))((int *)param_1[2],param_2,param_3,param_4);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0x9c))(extraout_A0,param_2,param_3,param_4);
  }
  return uVar1;
}



// Function: FUN_00000ad8 at 00000ad8
// Size: 106 bytes

undefined4 FUN_00000ad8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x68))((int *)param_1[2],param_2,param_3,param_4);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xa4))(extraout_A0,param_2,param_3,param_4);
  }
  return uVar1;
}



// Function: FUN_00000b42 at 00000b42
// Size: 78 bytes

undefined4 FUN_00000b42(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x90))();
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xb4))();
  }
  return uVar1;
}



// Function: FUN_00000b90 at 00000b90
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_00000b90(int *param_1)

{
  char cVar1;
  
  if ((*(int *)((int)param_1 + 0x16) != 0x7fffffff) &&
     (cVar1 = (**(code **)(*param_1 + 0x84))(), cVar1 != '\0')) {
    if (*(int *)((int)param_1 + 0x1a) != 0) {
      return *(int *)((int)param_1 + 0x16) + *(int *)((int)param_1 + 0x1a);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0x7fffffff;
}



// Function: FUN_00000bda at 00000bda
// Size: 124 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000bda(int *param_1,undefined4 param_2)

{
  char cVar2;
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (*(int *)((int)param_1 + 0x16) != 0x7fffffff) {
    cVar2 = (**(code **)(*param_1 + 0x84))();
    if (cVar2 != '\0') {
      if (param_2._0_1_ == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = (**(code **)(*param_1 + 100))();
      if ((cVar2 == '\0') && (param_2._0_1_ == '\x01')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x60))();
  }
  return uVar1;
}



// Function: FUN_00000c6c at 00000c6c
// Size: 10 bytes

undefined4 FUN_00000c6c(void)

{
  return 0;
}



// Function: FUN_00000c76 at 00000c76
// Size: 52 bytes

undefined4 FUN_00000c76(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0xc4))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_00000caa at 00000caa
// Size: 62 bytes

undefined4 FUN_00000caa(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 200))(extraout_A0,param_2,param_3);
  }
  return uVar1;
}



// Function: FUN_00000ce8 at 00000ce8
// Size: 56 bytes

undefined4 FUN_00000ce8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xcc))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_00000d20 at 00000d20
// Size: 22 bytes

bool FUN_00000d20(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// Function: FUN_00000d36 at 00000d36
// Size: 20 bytes

void FUN_00000d36(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}



// Function: FUN_00000d4a at 00000d4a
// Size: 48 bytes

void FUN_00000d4a(int param_1)

{
  undefined4 extraout_A0;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x70))();
    *(undefined4 *)(param_1 + 0xc) = extraout_A0;
  }
  return;
}



// Function: FUN_00000d7a at 00000d7a
// Size: 40 bytes

void FUN_00000d7a(undefined4 *param_1)

{
  FUN_0000254c(param_1);
  *param_1 = 0x11ea0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  return;
}



// Function: FUN_00000da2 at 00000da2
// Size: 22 bytes

void FUN_00000da2(undefined4 param_1,undefined4 param_2)

{
  FUN_00002592(param_1,param_2);
  return;
}



// Function: FUN_00000db8 at 00000db8
// Size: 32 bytes

void FUN_00000db8(int param_1)

{
  undefined4 extraout_A0;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x1a));
  *(undefined4 *)(param_1 + 0x1a) = extraout_A0;
  func_0x000050d8(param_1);
  return;
}



// Function: FUN_00000dd8 at 00000dd8
// Size: 8 bytes

void FUN_00000dd8(void)

{
  return;
}



// Function: FUN_00000de0 at 00000de0
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000de0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_A0;
  undefined2 uVar3;
  
  (**(code **)(*param_1 + 0x11c))();
  uVar2 = 0;
  if ((extraout_A0 != (int *)0x0) &&
     (uVar2 = (**(code **)(*extraout_A0 + 0xa4))(), (char)uVar2 != '\0')) {
    iVar1 = extraout_A0[1];
    uVar3 = 0;
    FUN_000026b0(0x65);
    uVar2 = (**(code **)(*_DAT_000266a8 + 0x244))(_DAT_000266a8,(short)((uint)iVar1 >> 0x10),uVar3);
  }
  return uVar2;
}



// Function: FUN_00000e10 at 00000e10
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(void)

{
  FUN_000026b0(0x65);
  (**(code **)(*_DAT_000266a8 + 0x244))();
  return;
}



// Function: FUN_00000e4e at 00000e4e
// Size: 12 bytes

void FUN_00000e4e(void)

{
  return;
}



// Function: FUN_00000e5a at 00000e5a
// Size: 522 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e5a(int *param_1,int *param_2)

{
  short sVar1;
  char cVar3;
  int iVar2;
  int *extraout_A0;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_2;
  if (param_2 != (int *)0x0) {
    cVar3 = (**(code **)(*param_2 + 0xa8))();
    if ((cVar3 != '\0') || (cVar3 = (**(code **)(*local_8 + 0xa4))(), cVar3 != '\0')) {
      (**(code **)(*param_1 + 0x118))();
    }
    local_1a = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4e;
    iVar2 = func_0x000076a8(auStack_4e);
    if (iVar2 == 0) {
      if ((*(short *)(_DAT_000266a8 + 0x6a) == 1) &&
         (cVar3 = (**(code **)(*local_8 + 0x7c))(), cVar3 != '\0')) {
        FUN_00001ee8();
      }
      (**(code **)(*local_8 + 0x84))();
      *(undefined1 *)((int)local_8 + 0x1a) = 1;
      _DAT_00025f52 = local_14;
    }
    else {
      if (_DAT_000264b2[0x12] == *(int *)((int)local_8 + 0x1e)) {
        (**(code **)(*_DAT_000264b2 + 0x100))
                  ((short)_DAT_000264b2,*(undefined4 *)((int)local_8 + 0x22),
                   *(undefined4 *)((int)local_8 + 0x26));
        *(undefined4 *)((int)local_8 + 0x22) = 0;
      }
      sVar1 = *(short *)((int)local_8 + 6);
      if (local_8 == *(int **)((int)param_1 + 0x1a)) {
        *(undefined4 *)((int)param_1 + 0x1a) = 0;
      }
      (**(code **)(*local_8 + 0x98))();
      cVar3 = (**(code **)(*local_8 + 0x58))();
      if (cVar3 != '\0') {
        FUN_00000e10(local_8);
        local_8 = extraout_A0;
      }
      iVar2 = (int)sVar1;
      uVar4 = local_1a;
      uVar5 = local_18;
      FUN_00001be8();
      FUN_00001c10((short)((uint)local_18 >> 0x10),uVar4,uVar5,iVar2);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x90))();
    }
    cVar3 = (**(code **)(*local_8 + 0xa4))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*local_8 + 0x58))();
      if (cVar3 == '\0') {
        (**(code **)(*local_8 + 0x98))();
      }
      else {
        (**(code **)(*local_8 + 0x98))();
        FUN_00000e10(local_8);
      }
    }
    else {
      *(int **)((int)param_1 + 0x1a) = local_8;
      (**(code **)(*local_8 + 0x94))();
    }
    return;
  }
  return;
}



// Function: FUN_00001064 at 00001064
// Size: 16 bytes

void FUN_00001064(void)

{
  return;
}



// Function: FUN_00001074 at 00001074
// Size: 22 bytes

void FUN_00001074(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3._0_1_;
  return;
}



// Function: FUN_0000108a at 0000108a
// Size: 104 bytes

undefined1 FUN_0000108a(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  *(undefined1 *)((int)param_1 + 6) = 0;
  if (*(int *)(*param_1 + 0xa4) != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
      cVar1 = (**(code **)(*(int *)*param_1 + 0x1d8))();
      if (cVar1 != '\0') {
        *(undefined1 *)((int)param_1 + 6) = 1;
        goto LAB_000010e8;
      }
    }
    uVar2 = (**(code **)(*(int *)*param_1 + 0x420))();
    *(undefined1 *)((int)param_1 + 5) = uVar2;
    if (*(char *)((int)param_1 + 5) != '\0') {
      (**(code **)(*(int *)*param_1 + 0x424))();
    }
  }
LAB_000010e8:
  return *(undefined1 *)((int)param_1 + 6);
}



// Function: FUN_000010f2 at 000010f2
// Size: 72 bytes

void FUN_000010f2(int *param_1)

{
  char cVar1;
  
  if (((*(int *)(*param_1 + 0xa4) != 0) && (*(char *)((int)param_1 + 6) == '\0')) &&
     (*(char *)((int)param_1 + 5) != '\0')) {
    cVar1 = (**(code **)(*(int *)*param_1 + 0x420))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)*param_1 + 0x424))();
    }
  }
  return;
}



// Function: FUN_0000113a at 0000113a
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000113a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000011d8 at 000011d8
// Size: 40 bytes

void FUN_000011d8(int *param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_14);
  FUN_00003a66(auStack_14,param_2);
  return;
}



// Function: FUN_00001200 at 00001200
// Size: 280 bytes

void FUN_00001200(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined1 extraout_A0b;
  undefined1 extraout_A0b_00;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  byte local_31;
  int local_30;
  int local_2c;
  short local_28;
  short local_26;
  undefined1 auStack_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_24);
  sVar1 = (short)param_1;
  FUN_0000362e(sVar1 + 0x84);
  uVar2 = (undefined1)extraout_A0;
  puVar4 = &local_3a;
  FUN_0000362e((short)auStack_24,(short)((uint)puVar4 >> 0x10),(short)((uint)extraout_A0 >> 0x10));
  uVar3 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  FUN_000032fc((char)extraout_A0_00,(short)puVar4,uVar2);
  FUN_0000362e(sVar1 + 0x84,uVar3);
  uVar2 = (undefined1)extraout_A0_01;
  puVar4 = &local_42;
  FUN_0000362e((short)auStack_24,(short)((uint)puVar4 >> 0x10),(short)((uint)extraout_A0_01 >> 0x10)
              );
  FUN_000032c2(extraout_A0b,(short)puVar4,uVar2);
  local_14 = local_42;
  local_10 = local_3e;
  local_c = local_3a;
  local_8 = local_36;
  *param_2 = local_42;
  param_2[1] = local_3e;
  param_2[2] = local_3a;
  param_2[3] = local_36;
  (**(code **)(*param_1 + 0x3b8))(sVar1,(short)&local_31);
  if ((local_31 & 0x80) != 0) {
    func_0x00007208(&local_28);
    (**(code **)(*param_1 + 0x3c0))((char)param_1,&local_28);
    local_30 = (int)local_28;
    local_2c = (int)local_26;
    piVar5 = &local_30;
    FUN_0000362e((short)param_2,(short)((uint)piVar5 >> 0x10));
    FUN_00003384(extraout_A0b_00,(short)piVar5);
  }
  return;
}



// Function: FUN_00001318 at 00001318
// Size: 50 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001318(int *param_1)

{
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_14,auStack_1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001366 at 00001366
// Size: 140 bytes

void FUN_00001366(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x1f) {
    (**(code **)(*param_1 + 0x3a8))();
  }
  else if (param_2 == 0x20) {
    (**(code **)(*param_1 + 0x3a8))();
  }
  else if (param_2 == 0x21) {
    (**(code **)(*param_1 + 0x3a8))();
  }
  else {
    FUN_0000305a(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000013f2 at 000013f2
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000013f2(int param_1)

{
  char cVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = func_0x00004cc0(param_1);
  if (cVar1 != '\0') {
    local_10 = *(undefined4 *)(param_1 + 0x94);
    local_c = *(undefined4 *)(param_1 + 0x98);
    local_8 = *(undefined4 *)(param_1 + 0x9c);
    FUN_00001df8(&local_10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00001434 at 00001434
// Size: 54 bytes

void FUN_00001434(int *param_1)

{
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_14,auStack_1c);
  func_0x00007258(auStack_1c);
  return;
}



// Function: FUN_00001474 at 00001474
// Size: 16 bytes

undefined1 FUN_00001474(int param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



// Function: FUN_00001484 at 00001484
// Size: 144 bytes

void FUN_00001484(int *param_1,undefined4 param_2)

{
  undefined1 extraout_A0b;
  int *piVar1;
  byte local_11;
  int local_10;
  int local_c;
  short local_8;
  short local_6;
  
  (**(code **)(*param_1 + 0x304))(param_1,param_2);
  (**(code **)(*param_1 + 0x3b8))(param_1,&local_11);
  if ((local_11 & 0x80) != 0) {
    func_0x00007208(&local_8);
    (**(code **)(*param_1 + 0x3c0))(param_1,&local_8);
    local_10 = (int)local_8;
    local_c = (int)local_6;
    piVar1 = &local_10;
    FUN_0000362e((short)param_2);
    FUN_00003384(extraout_A0b,piVar1);
  }
  return;
}



// Function: FUN_00001514 at 00001514
// Size: 16 bytes

undefined4 FUN_00001514(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// Function: FUN_00001524 at 00001524
// Size: 160 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001524(int *param_1,undefined4 param_2)

{
  char cVar1;
  int extraout_A0;
  undefined1 auStack_c [8];
  
  cVar1 = (**(code **)(*param_1 + 0x420))();
  if (cVar1 == '\0') {
    func_0x00004c98(param_1,param_2);
    return;
  }
  if (DAT_00025816 != '\0') {
    DAT_00025816 = 0;
    (**(code **)(*param_1 + 0x3d4))();
    DAT_00025816 = '\x01';
    if (extraout_A0 != 0) {
      (**(code **)(*param_1 + 0x30c))(param_1,auStack_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined4 *)(*(int *)param_1[0x29] + 4) = _DAT_fffff8e8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001616 at 00001616
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001616(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000017d8 at 000017d8
// Size: 42 bytes

undefined4 FUN_000017d8(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xa4) == 0) || (*(char *)(**(int **)(param_1 + 0xa4) + 0x10) != -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00001802 at 00001802
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00001802(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00001822 at 00001822
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00001822(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00001842 at 00001842
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_00001842(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    puVar2 = &DAT_00025b76;
    puVar3 = param_2;
    for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000188c at 0000188c
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000188c(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000018ac at 000018ac
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000018ac(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000018cc at 000018cc
// Size: 48 bytes

void FUN_000018cc(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (param_2._0_1_ == '\0') {
      *(undefined1 *)(**(int **)(param_1 + 0xa4) + 0x10) = 0;
    }
    else {
      *(undefined1 *)(**(int **)(param_1 + 0xa4) + 0x10) = 0xff;
    }
  }
  return;
}



// Function: FUN_000018fc at 000018fc
// Size: 44 bytes

void FUN_000018fc(int *param_1)

{
  (**(code **)(*param_1 + 0x424))();
  func_0x00005260(param_1);
  return;
}



// Function: FUN_00001928 at 00001928
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001928(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000199c at 0000199c
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000199c(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001a10 at 00001a10
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001a10(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001a84 at 00001a84
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001a84(int param_1)

{
  undefined1 auStack_e [2];
  undefined1 auStack_c [8];
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00001074(auStack_c,param_1);
    FUN_0000108a(auStack_c);
    FUN_00001ca8((short)auStack_e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001afc at 00001afc
// Size: 16 bytes

undefined4 FUN_00001afc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb2);
}



// Function: FUN_00001b0c at 00001b0c
// Size: 16 bytes

undefined4 FUN_00001b0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xae);
}



// Function: FUN_00001b1c at 00001b1c
// Size: 16 bytes

undefined4 FUN_00001b1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xaa);
}



// Function: FUN_00001b2c at 00001b2c
// Size: 108 bytes

void FUN_00001b2c(int *param_1,int param_2)

{
  if (param_2 != *(int *)((int)param_1 + 0xb2)) {
    *(int *)((int)param_1 + 0xb2) = param_2;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    for (; 0x7fff < param_2; param_2 = param_2 >> 1) {
      *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
    }
    (**(code **)(*param_1 + 0x408))();
    if (*(int *)((int)param_1 + 0xb2) < *(int *)((int)param_1 + 0xaa)) {
      (**(code **)(*param_1 + 0x3ec))((short)param_1,(short)*(undefined4 *)((int)param_1 + 0xb2));
    }
  }
  return;
}



// Function: FUN_00001b98 at 00001b98
// Size: 80 bytes

void FUN_00001b98(int *param_1,int param_2)

{
  if (param_2 != *(int *)((int)param_1 + 0xae)) {
    *(int *)((int)param_1 + 0xae) = param_2;
    (**(code **)(*param_1 + 0x40c))();
    if (*(int *)((int)param_1 + 0xaa) < *(int *)((int)param_1 + 0xae)) {
      (**(code **)(*param_1 + 0x3ec))((short)param_1,(short)*(undefined4 *)((int)param_1 + 0xae));
    }
  }
  return;
}



// Function: FUN_00001be8 at 00001be8
// Size: 18 bytes

void FUN_00001be8(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x3ec))();
  return;
}



// Function: FUN_00001bfa at 00001bfa
// Size: 22 bytes

void FUN_00001bfa(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00001dc8(*(undefined4 *)((int)param_1 + 0xae),param_2,
                       *(undefined4 *)((int)param_1 + 0xb2));
  if (iVar1 != *(int *)((int)param_1 + 0xaa)) {
    *(int *)((int)param_1 + 0xaa) = iVar1;
    (**(code **)(*param_1 + 0x414))();
  }
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 48 bytes

void FUN_00001c10(void)

{
  int iVar1;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined1 uStack00000006;
  
  iVar1 = FUN_00001dc8(*(undefined4 *)((int)unaff_A2 + 0xae));
  if (iVar1 != *(int *)((int)unaff_A2 + 0xaa)) {
    *(int *)((int)unaff_A2 + 0xaa) = iVar1;
    uStack00000006 = *(undefined1 *)(unaff_A6 + 0x10);
    uStack00000004 = (undefined2)(iVar1 >> ((int)*(short *)(unaff_A2 + 0x2a) & 0x3fU));
    (**(code **)(*unaff_A2 + 0x414))();
  }
  return;
}



// Function: FUN_00001c40 at 00001c40
// Size: 16 bytes

void FUN_00001c40(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x414))();
  return;
}



// Function: FUN_00001c50 at 00001c50
// Size: 64 bytes

void FUN_00001c50(int *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x3e4))(param_1,param_4);
  (**(code **)(*param_1 + 1000))(param_1,param_3);
  (**(code **)(*param_1 + 0x3ec))(param_1,param_2);
  return;
}



// Function: FUN_00001c90 at 00001c90
// Size: 18 bytes

void FUN_00001c90(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x3ec))();
  return;
}



// Function: FUN_00001ca2 at 00001ca2
// Size: 6 bytes

undefined2 FUN_00001ca2(int *param_1)

{
  char cVar2;
  short sVar1;
  undefined2 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x74))();
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else {
    sVar1 = (**(code **)(*param_1 + 0x400))();
    if (sVar1 == 1) {
      uVar3 = 2;
    }
    else if (sVar1 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
  }
  return uVar3;
}



// Function: FUN_00001ca8 at 00001ca8
// Size: 72 bytes

undefined2 FUN_00001ca8(void)

{
  char cVar2;
  short sVar1;
  undefined2 uVar3;
  int unaff_A6;
  
  cVar2 = (**(code **)(**(int **)(unaff_A6 + 8) + 0x74))();
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else {
    sVar1 = (**(code **)(**(int **)(unaff_A6 + 8) + 0x400))();
    if (sVar1 == 1) {
      uVar3 = 2;
    }
    else if (sVar1 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
  }
  return uVar3;
}



// Function: FUN_00001cf0 at 00001cf0
// Size: 108 bytes

void FUN_00001cf0(int *param_1)

{
  char cVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *(undefined2 *)((int)param_1 + 0x52);
  local_6 = *(undefined2 *)(param_1 + 0x15);
  local_10 = *(undefined4 *)((int)param_1 + 0x56);
  local_c = *(undefined4 *)((int)param_1 + 0x5a);
  func_0x00004e98((char)param_1);
  cVar1 = func_0x00007240((short)((int)param_1 + 0x52),(short)&local_8);
  if ((cVar1 == '\0') &&
     (cVar1 = FUN_000033a2((short)param_1 + 0x56,(char)&local_10), cVar1 == '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x41c))();
  return;
}



// Function: FUN_00001d5c at 00001d5c
// Size: 108 bytes

void FUN_00001d5c(int *param_1,undefined4 param_2)

{
  bool bVar1;
  
  if (param_2._0_2_ != 0) {
    if ((param_2._0_2_ == 0x14) || (param_2._0_2_ == 0x16)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((bVar1) && (*(int *)((int)param_1 + 0xae) < *(int *)((int)param_1 + 0xaa))) ||
       ((!bVar1 && (*(int *)((int)param_1 + 0xaa) < *(int *)((int)param_1 + 0xb2))))) {
      (**(code **)(*param_1 + 0x42c))();
    }
    (**(code **)(*param_1 + 0x268))();
    (**(code **)(*param_1 + 0x1d8))();
  }
  return;
}



// Function: FUN_00001dc8 at 00001dc8
// Size: 10 bytes

void FUN_00001dc8(void)

{
  return;
}



// Function: FUN_00001dd2 at 00001dd2
// Size: 38 bytes

void FUN_00001dd2(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00001dc8(*(int *)((int)param_1 + 0xae) - *(int *)((int)param_1 + 0xaa),param_2,
                         *(int *)((int)param_1 + 0xb2) - *(int *)((int)param_1 + 0xaa));
    (**(code **)(*param_1 + 0x3ec))(param_1,*(int *)((int)param_1 + 0xaa) + iVar1);
  }
  return;
}



// Function: FUN_00001df8 at 00001df8
// Size: 44 bytes

void FUN_00001df8(void)

{
  int in_D0;
  int *unaff_A2;
  
  FUN_00001dc8(in_D0 - *(int *)((int)unaff_A2 + 0xaa));
  (**(code **)(*unaff_A2 + 0x3ec))();
  return;
}



// Function: FUN_00001e24 at 00001e24
// Size: 74 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e24(int *param_1,undefined4 param_2)

{
  undefined1 local_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x144))(param_1,&local_c,param_2);
  local_8 = local_c;
  local_6 = local_a;
  func_0x00007210(&local_8,local_10,param_1[0x29]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ee8 at 00001ee8
// Size: 18 bytes

void FUN_00001ee8(void)

{
  code *in_A1;
  
  (*in_A1)();
  return;
}



// Function: FUN_00001fa2 at 00001fa2
// Size: 66 bytes

void FUN_00001fa2(int *param_1,undefined4 param_2)

{
  if ((param_2._0_2_ == 0x16) || (param_2._0_2_ == 0x14)) {
    (**(code **)(*param_1 + 0x428))(param_1,0xffffffff);
  }
  else {
    (**(code **)(*param_1 + 0x428))(param_1,1);
  }
  return;
}



// Function: FUN_00001fe4 at 00001fe4
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001fe4(int *param_1,undefined4 param_2)

{
  undefined1 local_78 [4];
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x144))(param_1,&local_74,param_2);
  local_8 = local_74;
  local_6 = local_72;
  func_0x00007210(&local_8,local_78,param_1[0x29]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002184 at 00002184
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002184(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x420))();
  if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001524(param_1,param_2);
  return;
}



// Function: FUN_0000221c at 0000221c
// Size: 166 bytes

void FUN_0000221c(int *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int local_68 [25];
  
  cVar2 = '\0';
  FUN_000025e0((short)local_68,(char)*(undefined4 *)((int)param_1 + 0xba));
  func_0x000025f0((short)local_68);
  piVar3 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    cVar1 = (**(code **)(*piVar3 + 0x3b8))((short)piVar3,param_2._1_1_);
    cVar2 = cVar1 + cVar2;
    FUN_000025f8((short)local_68);
    piVar3 = extraout_A0_00;
  }
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x428))((short)param_1,cVar2);
  }
  func_0x000025e8((char)local_68);
  return;
}



// Function: FUN_000022c2 at 000022c2
// Size: 58 bytes

void FUN_000022c2(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xc5dc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0x40;
  return;
}



// Function: FUN_000022fc at 000022fc
// Size: 44 bytes

void FUN_000022fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00000dd8(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  return;
}



// Function: FUN_00002328 at 00002328
// Size: 30 bytes

void FUN_00002328(void)

{
  return;
}



// Function: FUN_00002346 at 00002346
// Size: 10 bytes

undefined4 FUN_00002346(void)

{
  return 1;
}



// Function: FUN_00002350 at 00002350
// Size: 10 bytes

undefined4 FUN_00002350(void)

{
  return 1;
}



// Function: FUN_0000235a at 0000235a
// Size: 10 bytes

undefined4 FUN_0000235a(void)

{
  return 1;
}



// Function: FUN_00002364 at 00002364
// Size: 10 bytes

undefined4 FUN_00002364(void)

{
  return 0;
}



// Function: FUN_0000236e at 0000236e
// Size: 66 bytes

undefined4 FUN_0000236e(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x68))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x6c))(extraout_A0,param_1[1],param_1[2],param_1);
  }
  return uVar1;
}



// Function: FUN_000023b0 at 000023b0
// Size: 78 bytes

void FUN_000023b0(int param_1,undefined4 param_2,ushort *param_3)

{
  FUN_000022fc(param_1,0,0,param_2);
  *(uint *)(param_1 + 4) = (uint)*param_3;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_3 + 6);
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// Function: FUN_000023fe at 000023fe
// Size: 30 bytes

bool FUN_000023fe(int param_1)

{
  return (*(ushort *)(param_1 + 0x20) & 0x80) != 0;
}



// Function: FUN_0000241c at 0000241c
// Size: 30 bytes

bool FUN_0000241c(int param_1)

{
  return (*(ushort *)(param_1 + 0x20) & 0x100) != 0;
}



// Function: FUN_0000243a at 0000243a
// Size: 30 bytes

bool FUN_0000243a(int param_1)

{
  return (*(ushort *)(param_1 + 0x20) & 0x200) != 0;
}



// Function: FUN_00002458 at 00002458
// Size: 30 bytes

bool FUN_00002458(int param_1)

{
  return (*(ushort *)(param_1 + 0x20) & 0x400) != 0;
}



// Function: FUN_00002476 at 00002476
// Size: 30 bytes

bool FUN_00002476(int param_1)

{
  return (*(ushort *)(param_1 + 0x20) & 0x800) != 0;
}



// Function: FUN_00002494 at 00002494
// Size: 30 bytes

bool FUN_00002494(int param_1)

{
  return (*(ushort *)(param_1 + 0x20) & 0x1000) != 0;
}



// Function: FUN_000024b2 at 000024b2
// Size: 26 bytes

bool FUN_000024b2(int param_1)

{
  return *(short *)(param_1 + 0x12) == 5;
}



// Function: FUN_000024cc at 000024cc
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000024cc(undefined4 param_1)

{
  (**(code **)(*_DAT_000266a8 + 0x16c))(_DAT_000266a8,param_1);
  return;
}



// Function: FUN_000024e8 at 000024e8
// Size: 10 bytes

undefined4 FUN_000024e8(void)

{
  return 0;
}



// Function: FUN_000024f2 at 000024f2
// Size: 22 bytes

bool FUN_000024f2(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// Function: FUN_00002508 at 00002508
// Size: 20 bytes

void FUN_00002508(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}



// Function: FUN_0000251c at 0000251c
// Size: 48 bytes

void FUN_0000251c(int param_1)

{
  undefined4 extraout_A0;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x5c))();
    *(undefined4 *)(param_1 + 0xc) = extraout_A0;
  }
  return;
}



// Function: FUN_0000254c at 0000254c
// Size: 68 bytes

void FUN_0000254c(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xc4be;
  param_1[1] = 0;
  param_1[3] = 0x7fffffff;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[2] = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0x20202020;
  return;
}



// Function: FUN_00002590 at 00002590
// Size: 2 bytes

void FUN_00002590(void)

{
  return;
}



// Function: FUN_00002592 at 00002592
// Size: 14 bytes

void FUN_00002592(int param_1,undefined4 param_2)

{
  FUN_00000dd8(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_000025a0 at 000025a0
// Size: 13 bytes

void FUN_000025a0(void)

{
  int unaff_A6;
  
  *(undefined4 *)(*(int *)(unaff_A6 + 8) + 4) = *(undefined4 *)(unaff_A6 + 0xc);
  return;
}



// Function: FUN_000025ae at 000025ae
// Size: 8 bytes

void FUN_000025ae(void)

{
  return;
}



// Function: FUN_000025b6 at 000025b6
// Size: 32 bytes

void FUN_000025b6(int *param_1)

{
  (**(code **)(*param_1 + 0x6c))(param_1,0x1a,param_1,0);
  return;
}



// Function: FUN_000025d6 at 000025d6
// Size: 6 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000025d6(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*_DAT_000266a8 + 0x1a4))();
  if (extraout_A0 == param_1) {
    uVar1 = 1;
  }
  else {
    cVar2 = (**(code **)(*extraout_A0 + 200))();
    if (cVar2 == '\0') {
      uVar1 = 0;
    }
    else {
      (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,param_1);
      uVar1 = 1;
    }
  }
  return uVar1;
}



// Function: FUN_000025e0 at 000025e0
// Size: 22 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000025e0(void)

{
  undefined4 in_D0;
  char cVar2;
  undefined4 uVar1;
  int *extraout_A0;
  int unaff_A6;
  bool in_ZF;
  int *in_stack_00000000;
  
  if (in_ZF) {
    (**(code **)(*in_stack_00000000 + 0x1a4))();
    if (extraout_A0 == *(int **)(unaff_A6 + 8)) {
      uVar1 = 1;
    }
    else {
      cVar2 = (**(code **)(*extraout_A0 + 200))();
      if (cVar2 == '\0') {
        uVar1 = 0;
      }
      else {
        (**(code **)(*_DAT_000266a8 + 0x1a0))();
        uVar1 = 1;
      }
    }
    return uVar1;
  }
  return in_D0;
}



// Function: FUN_000025f8 at 000025f8
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000025f8(void)

{
  char cVar1;
  int *in_stack_00000000;
  
  cVar1 = (**(code **)(*in_stack_00000000 + 200))();
  if (cVar1 != '\0') {
    (**(code **)(*_DAT_000266a8 + 0x1a0))();
  }
  return cVar1 != '\0';
}



// Function: FUN_0000262e at 0000262e
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0000262e(void)

{
  int iVar1;
  int *extraout_A0;
  
  (**(code **)(*_DAT_000266a8 + 0x1a4))();
  iVar1 = (**(code **)(*extraout_A0 + 0xa8))();
  if (iVar1 != 0) {
    (**(code **)(*extraout_A0 + 0xb0))(extraout_A0,iVar1);
  }
  else {
    (**(code **)(*extraout_A0 + 0xac))();
    (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,_DAT_000266a8);
  }
  return iVar1 == 0;
}



// Function: FUN_000026a0 at 000026a0
// Size: 16 bytes

undefined1 FUN_000026a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



// Function: FUN_000026b0 at 000026b0
// Size: 18 bytes

void FUN_000026b0(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2._0_1_;
  return;
}



// Function: FUN_000026c2 at 000026c2
// Size: 74 bytes

void FUN_000026c2(int *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  if (extraout_A0 == 0) {
    FUN_00001bfa();
  }
  else {
    FUN_0000270c(extraout_A0,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_0000270c at 0000270c
// Size: 98 bytes

void FUN_0000270c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*extraout_A0 + 0x9c))(extraout_A0,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_0000276e at 0000276e
// Size: 48 bytes

undefined4 FUN_0000276e(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = FUN_0000279e(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_0000279e at 0000279e
// Size: 78 bytes

void FUN_0000279e(int *param_1,undefined4 param_2)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x84))(param_1,param_2);
  }
  else {
    (**(code **)(*extraout_A0 + 0xa0))(extraout_A0,param_2);
  }
  return;
}



// Function: FUN_000027ec at 000027ec
// Size: 10 bytes

undefined4 FUN_000027ec(void)

{
  return 0;
}



// Function: FUN_000027f6 at 000027f6
// Size: 254 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_000027f6(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_A0;
  int *piVar3;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  if (param_1[3] != 0x7fffffff) {
    cVar1 = (**(code **)(*param_1 + 0x74))();
    if (cVar1 != '\0') {
      if (param_1[4] == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = param_1[3] + param_1[4];
      goto LAB_0000283e;
    }
  }
  iVar2 = 0x7fffffff;
LAB_0000283e:
  local_14 = 0x12858;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    local_10 = (int *)param_1[2];
    local_c = local_10;
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0x70))();
      local_8 = extraout_A0;
    }
  }
  (**(code **)(local_14 + 0xc))();
  piVar3 = local_10;
  while( true ) {
    cVar1 = FUN_00000d20(&local_14);
    if (cVar1 == '\0') break;
    local_1c = (**(code **)(*piVar3 + 0x5c))();
    local_18 = iVar2;
    if (iVar2 < local_1c) {
      piVar3 = &local_18;
    }
    else {
      piVar3 = &local_1c;
    }
    iVar2 = *piVar3;
    (**(code **)(local_14 + 0x10))();
    piVar3 = local_c;
  }
  return iVar2;
}



// Function: FUN_000028fc at 000028fc
// Size: 124 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000028fc(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xec))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x60))();
  }
  if (param_1[3] != 0x7fffffff) {
    uVar1 = (**(code **)(*param_1 + 0x74))();
    if ((char)uVar1 != '\0') {
      if (param_2._0_1_ == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = (**(code **)(*param_1 + 0x60))();
      if (((char)uVar1 == '\0') && (param_2._0_1_ == '\x01')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return uVar1;
}



// Function: FUN_0000298e at 0000298e
// Size: 10 bytes

undefined4 FUN_0000298e(void)

{
  return 0;
}



// Function: FUN_00002998 at 00002998
// Size: 48 bytes

undefined4 FUN_00002998(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = FUN_000029f8(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_000029c8 at 000029c8
// Size: 48 bytes

undefined4 FUN_000029c8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = FUN_00002a46(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_000029f8 at 000029f8
// Size: 78 bytes

void FUN_000029f8(int *param_1,undefined4 param_2)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x7c))(param_1,param_2);
  }
  else {
    (**(code **)(*extraout_A0 + 0xa8))(extraout_A0,param_2);
  }
  return;
}



// Function: FUN_00002a46 at 00002a46
// Size: 78 bytes

void FUN_00002a46(int *param_1,undefined4 param_2)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x80))(param_1,param_2);
  }
  else {
    (**(code **)(*extraout_A0 + 0xac))(extraout_A0,param_2);
  }
  return;
}



// Function: FUN_00002a94 at 00002a94
// Size: 78 bytes

void FUN_00002a94(int *param_1,undefined4 param_2)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x8c))(param_1,param_2);
  }
  else {
    (**(code **)(*extraout_A0 + 0xb0))(extraout_A0,param_2);
  }
  return;
}



// Function: FUN_00002ae2 at 00002ae2
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002ae2(int *param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *extraout_A0;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  (**(code **)(*param_1 + 0x5c))();
  if (extraout_A0 == (int *)0x0) {
    iVar2 = (int)_DAT_00025f58;
    iVar3 = func_0x000076d8((int)param_2[1] - (int)param_3[1]);
    if ((iVar3 <= iVar2) &&
       (iVar2 = (int)_DAT_00025f56, iVar3 = func_0x000076d8((int)*param_2 - (int)*param_3),
       iVar3 <= iVar2)) {
      return 1;
    }
    uVar1 = 0;
  }
  else {
    local_8 = *param_3;
    local_6 = param_3[1];
    local_c = *param_2;
    local_a = param_2[1];
    uVar1 = (**(code **)(*extraout_A0 + 0x78))(extraout_A0,&local_c,&local_8);
  }
  return uVar1;
}



// Function: FUN_00002b96 at 00002b96
// Size: 48 bytes

undefined4 FUN_00002b96(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x94))();
  }
  return uVar1;
}



// Function: FUN_00002bc6 at 00002bc6
// Size: 66 bytes

void FUN_00002bc6(int *param_1)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x90))();
  }
  else {
    (**(code **)(*extraout_A0 + 0xb4))();
  }
  return;
}



// Function: FUN_00002c08 at 00002c08
// Size: 66 bytes

undefined4
FUN_00002c08(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0xb8))(extraout_A0,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



// Function: FUN_00002c4a at 00002c4a
// Size: 16 bytes

void FUN_00002c4a(void)

{
  return;
}



// Function: FUN_00002c5a at 00002c5a
// Size: 54 bytes

void FUN_00002c5a(int *param_1)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x100))();
  }
  return;
}



// Function: FUN_00002c90 at 00002c90
// Size: 16 bytes

undefined4 FUN_00002c90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x16);
}



// Function: FUN_00002ca0 at 00002ca0
// Size: 16 bytes

undefined4 FUN_00002ca0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// Function: FUN_00002cb0 at 00002cb0
// Size: 16 bytes

void FUN_00002cb0(void)

{
  return;
}



// Function: FUN_00002cc0 at 00002cc0
// Size: 68 bytes

void FUN_00002cc0(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x84))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 8) + 0x74))();
  }
  return;
}



// Function: FUN_00002d04 at 00002d04
// Size: 168 bytes

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00002d04(int param_1,int param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  int *piVar2;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_14 = 0x12858;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  if ((param_1 != 0) &&
     (local_10 = *(int **)(param_1 + 8), local_c = local_10, local_10 != (int *)0x0)) {
    (**(code **)(*local_10 + 0x70))();
    local_8 = extraout_A0;
  }
  (**(code **)(local_14 + 0xc))();
  piVar2 = local_10;
  while ((cVar1 = FUN_00000d20(&local_14), cVar1 != '\0' && (piVar2[1] != param_2))) {
    (**(code **)(local_14 + 0x10))();
    piVar2 = local_c;
  }
  return;
}



// Function: FUN_00002dac at 00002dac
// Size: 170 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00002dac(int param_1)

{
  char cVar1;
  undefined4 local_c;
  
  local_c = (int *)0x0;
  if (param_1 != 0) {
    local_c = *(int **)(param_1 + 8);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 0x70))();
    }
  }
  (*_DAT_00012864)();
  while( true ) {
    cVar1 = FUN_00000d20(0xec);
    if (cVar1 == '\0') break;
    (**(code **)(*local_c + 0x80))();
    (*_DAT_00012868)();
  }
  return;
}



// Function: FUN_00002e56 at 00002e56
// Size: 52 bytes

undefined4 FUN_00002e56(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xec))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0x7c))();
  }
  return uVar1;
}



// Function: FUN_00002e8a at 00002e8a
// Size: 92 bytes

void FUN_00002e8a(int *param_1,int *param_2)

{
  char cVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  if (extraout_A0 == (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x58))();
    if (cVar1 != '\0') {
      FUN_00000e10(param_2);
    }
  }
  else {
    (**(code **)(*extraout_A0 + 0x104))(extraout_A0,param_2);
  }
  return;
}



// Function: FUN_00002ee6 at 00002ee6
// Size: 94 bytes

undefined4 FUN_00002ee6(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_1 + 0x5c))();
    if (extraout_A0 == (int *)0x0) {
      uVar1 = (**(code **)(*param_2 + 0x58))();
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_00000e10(param_2);
      }
    }
    else {
      uVar1 = (**(code **)(*extraout_A0 + 0x108))(extraout_A0,param_2);
    }
  }
  return uVar1;
}



// Function: FUN_00002f44 at 00002f44
// Size: 32 bytes

void FUN_00002f44(int *param_1)

{
  (**(code **)(*param_1 + 0x6c))(param_1,0x19,param_1,0);
  return;
}



// Function: FUN_00002f64 at 00002f64
// Size: 10 bytes

void FUN_00002f64(void)

{
  return;
}



// Function: FUN_00002f6e at 00002f6e
// Size: 32 bytes

void FUN_00002f6e(int *param_1)

{
  (**(code **)(*param_1 + 0x6c))(param_1,0x1b,param_1,0);
  return;
}



// Function: FUN_00002f8e at 00002f8e
// Size: 8 bytes

void FUN_00002f8e(void)

{
  return;
}



// Function: FUN_00002f96 at 00002f96
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00002f96(int param_1)

{
  int extraout_A0;
  
  (**(code **)(*_DAT_000266a8 + 0x1a4))();
  return extraout_A0 == param_1;
}



// Function: FUN_00002fb8 at 00002fb8
// Size: 10 bytes

undefined4 FUN_00002fb8(void)

{
  return 0;
}



// Function: FUN_00002fc2 at 00002fc2
// Size: 10 bytes

undefined4 FUN_00002fc2(void)

{
  return 0;
}



// Function: FUN_00002fcc at 00002fcc
// Size: 126 bytes

uint FUN_00002fcc(int *param_1,int param_2)

{
  uint uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  if (extraout_A0 == (int *)0x0) {
    if (((*(short *)(param_2 + 0x12) == 3) || (*(short *)(param_2 + 0x12) == 4)) ||
       (uVar1 = *(ushort *)(param_2 + 0x12) - 5, uVar1 == 0)) {
      *(short *)(param_2 + 0x22) = (short)(char)*(undefined4 *)(param_2 + 0x14);
      uVar1 = *(uint *)(param_2 + 0x14) & 0xff00;
      *(short *)(param_2 + 0x24) = (short)(uVar1 >> 8);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0x88))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_0000304a at 0000304a
// Size: 8 bytes

void FUN_0000304a(void)

{
  return;
}



// Function: FUN_00003052 at 00003052
// Size: 8 bytes

void FUN_00003052(void)

{
  return;
}



// Function: FUN_0000305a at 0000305a
// Size: 62 bytes

undefined4 FUN_0000305a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x6c))(extraout_A0,param_2,param_3,param_4);
  }
  return uVar1;
}



// Function: FUN_00003098 at 00003098
// Size: 98 bytes

void FUN_00003098(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*extraout_A0 + 0xa4))(extraout_A0,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000030fa at 000030fa
// Size: 16 bytes

undefined4 FUN_000030fa(int param_1)

{
  return *(undefined4 *)(param_1 + 6);
}



// Function: FUN_0000310a at 0000310a
// Size: 28 bytes

void FUN_0000310a(int param_1,undefined2 *param_2)

{
  short sVar1;
  undefined2 *puVar2;
  
  sVar1 = 0x22;
  puVar2 = (undefined2 *)(param_1 + 4);
  do {
    *param_2 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != -1);
  return;
}



// Function: FUN_00003126 at 00003126
// Size: 96 bytes

void FUN_00003126(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_4c [16];
  uint local_c;
  uint local_8;
  
  local_c = 0x40;
  local_8 = *(byte *)(param_1 + 10) + 1;
  if (local_8 < 0x40) {
    puVar4 = &local_8;
  }
  else {
    puVar4 = &local_c;
  }
  puVar5 = auStack_4c;
  puVar2 = (undefined1 *)(param_1 + 10);
  for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar5 = *puVar2;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = puVar2 + 1;
  }
  sVar3 = 0xf;
  puVar5 = auStack_4c;
  do {
    *param_2 = *puVar5;
    sVar3 = sVar3 + -1;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  } while (sVar3 != -1);
  return;
}



// Function: FUN_00003186 at 00003186
// Size: 24 bytes

bool FUN_00003186(int param_1)

{
  return *(char *)(param_1 + 0x5a) != '\x02';
}



// Function: FUN_0000319e at 0000319e
// Size: 52 bytes

byte * FUN_0000319e(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *param_2 + 1;
  pbVar2 = (byte *)(param_1 + 10);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar2 = *param_2;
    pbVar2 = pbVar2 + 1;
    param_2 = param_2 + 1;
  }
  return (byte *)(param_1 + 10);
}



// Function: FUN_000031d2 at 000031d2
// Size: 188 bytes

void FUN_000031d2(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_28;
  int local_24 [3];
  int local_18;
  int local_14 [3];
  undefined1 local_8 [4];
  
  func_0x00007208(local_8);
  local_18 = 0x7fff;
  local_14[0] = *param_1;
  local_14[1] = 0xffff8000;
  if (*param_1 < -0x7fff) {
    piVar2 = local_14 + 1;
  }
  else {
    piVar2 = local_14;
  }
  local_14[2] = *piVar2;
  if (*piVar2 < 0x7fff) {
    piVar2 = local_14 + 2;
  }
  else {
    piVar2 = &local_18;
  }
  local_28 = 0x7fff;
  local_24[0] = param_1[1];
  local_24[1] = 0xffff8000;
  if (param_1[1] < -0x7fff) {
    piVar3 = local_24 + 1;
  }
  else {
    piVar3 = local_24;
  }
  local_24[2] = *piVar3;
  if (*piVar3 < 0x7fff) {
    piVar3 = local_24 + 2;
  }
  else {
    piVar3 = &local_28;
  }
  iVar1 = *piVar3;
  *param_2 = (short)*piVar2;
  param_2[1] = (short)iVar1;
  return;
}



// Function: FUN_0000328e at 0000328e
// Size: 26 bytes

void FUN_0000328e(void)

{
  return;
}



// Function: FUN_000032a8 at 000032a8
// Size: 26 bytes

void FUN_000032a8(void)

{
  return;
}



// Function: FUN_000032c2 at 000032c2
// Size: 58 bytes

void FUN_000032c2(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = param_3[1];
  *param_2 = *param_3 + *param_1;
  param_2[1] = iVar2 + iVar1;
  return;
}



// Function: FUN_000032fc at 000032fc
// Size: 58 bytes

void FUN_000032fc(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = param_3[1];
  *param_2 = *param_1 - *param_3;
  param_2[1] = iVar1 - iVar2;
  return;
}



// Function: FUN_00003336 at 00003336
// Size: 48 bytes

void FUN_00003336(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_2 = -*param_1;
  param_2[1] = -iVar1;
  return;
}



// Function: FUN_00003366 at 00003366
// Size: 30 bytes

void FUN_00003366(int *param_1,int *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  return;
}



// Function: FUN_00003384 at 00003384
// Size: 30 bytes

void FUN_00003384(int *param_1,int *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}



// Function: FUN_000033a2 at 000033a2
// Size: 46 bytes

undefined4 FUN_000033a2(int *param_1,int *param_2)

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



// Function: FUN_000033d0 at 000033d0
// Size: 46 bytes

undefined4 FUN_000033d0(int *param_1,int *param_2)

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



// Function: FUN_000033fe at 000033fe
// Size: 46 bytes

undefined4 FUN_000033fe(int *param_1,int *param_2)

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



// Function: FUN_0000342c at 0000342c
// Size: 68 bytes

void FUN_0000342c(int *param_1,int *param_2)

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



// Function: FUN_00003470 at 00003470
// Size: 346 bytes

void FUN_00003470(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_4c;
  int local_48 [3];
  int local_3c;
  int local_38 [3];
  int local_2c;
  int local_28 [3];
  int local_1c;
  int local_18 [5];
  
  local_18[1] = 0xffff8000;
  local_18[2] = *param_1;
  if (*param_1 < -0x7fff) {
    piVar4 = local_18 + 1;
  }
  else {
    piVar4 = local_18 + 2;
  }
  local_1c = 0x7fff;
  local_18[0] = *piVar4;
  if (*piVar4 < 0x7fff) {
    piVar4 = local_18;
  }
  else {
    piVar4 = &local_1c;
  }
  local_28[1] = 0xffff8000;
  local_28[2] = param_1[1];
  if (param_1[1] < -0x7fff) {
    piVar5 = local_28 + 1;
  }
  else {
    piVar5 = local_28 + 2;
  }
  local_2c = 0x7fff;
  local_28[0] = *piVar5;
  if (*piVar5 < 0x7fff) {
    piVar5 = local_28;
  }
  else {
    piVar5 = &local_2c;
  }
  iVar1 = *piVar5;
  local_38[1] = 0xffff8000;
  local_38[2] = param_1[2];
  if (param_1[2] < -0x7fff) {
    piVar5 = local_38 + 1;
  }
  else {
    piVar5 = local_38 + 2;
  }
  local_3c = 0x7fff;
  local_38[0] = *piVar5;
  if (*piVar5 < 0x7fff) {
    piVar5 = local_38;
  }
  else {
    piVar5 = &local_3c;
  }
  iVar2 = *piVar5;
  local_48[1] = 0xffff8000;
  local_48[2] = param_1[3];
  if (param_1[3] < -0x7fff) {
    piVar5 = local_48 + 1;
  }
  else {
    piVar5 = local_48 + 2;
  }
  local_4c = 0x7fff;
  local_48[0] = *piVar5;
  if (*piVar5 < 0x7fff) {
    piVar5 = local_48;
  }
  else {
    piVar5 = &local_4c;
  }
  iVar3 = *piVar5;
  *param_2 = (short)*piVar4;
  param_2[1] = (short)iVar1;
  param_2[2] = (short)iVar2;
  param_2[3] = (short)iVar3;
  return;
}



// Function: FUN_000035ca at 000035ca
// Size: 50 bytes

void FUN_000035ca(int *param_1,short *param_2)

{
  *param_1 = (int)*param_2;
  param_1[1] = (int)param_2[1];
  param_1[2] = (int)param_2[2];
  param_1[3] = (int)param_2[3];
  return;
}



// Function: FUN_000035fc at 000035fc
// Size: 50 bytes

void FUN_000035fc(int *param_1,short *param_2)

{
  *param_1 = (int)*param_2;
  param_1[1] = (int)param_2[1];
  param_1[2] = (int)param_2[2];
  param_1[3] = (int)param_2[3];
  return;
}



// Function: FUN_0000362e at 0000362e
// Size: 26 bytes

void FUN_0000362e(void)

{
  return;
}



// Function: FUN_00003648 at 00003648
// Size: 26 bytes

void FUN_00003648(void)

{
  return;
}



// Function: FUN_00003662 at 00003662
// Size: 88 bytes

void FUN_00003662(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  iVar3 = param_3[1];
  iVar4 = param_1[2];
  iVar1 = *param_3;
  iVar5 = param_1[3];
  iVar6 = param_3[1];
  *param_2 = *param_3 + *param_1;
  param_2[1] = iVar3 + iVar2;
  param_2[2] = iVar1 + iVar4;
  param_2[3] = iVar6 + iVar5;
  return;
}



// Function: FUN_000036ba at 000036ba
// Size: 88 bytes

void FUN_000036ba(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  iVar3 = param_3[1];
  iVar4 = param_1[2];
  iVar1 = *param_3;
  iVar5 = param_1[3];
  iVar6 = param_3[1];
  *param_2 = *param_1 - *param_3;
  param_2[1] = iVar2 - iVar3;
  param_2[2] = iVar4 - iVar1;
  param_2[3] = iVar5 - iVar6;
  return;
}



// Function: FUN_00003712 at 00003712
// Size: 42 bytes

void FUN_00003712(int *param_1,int *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = *param_2 + param_1[2];
  param_1[3] = param_2[1] + param_1[3];
  return;
}



// Function: FUN_0000373c at 0000373c
// Size: 42 bytes

void FUN_0000373c(int *param_1,int *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}



// Function: FUN_00003766 at 00003766
// Size: 42 bytes

void FUN_00003766(int *param_1,int *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}



// Function: FUN_00003790 at 00003790
// Size: 66 bytes

undefined4 FUN_00003790(int *param_1,int *param_2)

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



// Function: FUN_000037d2 at 000037d2
// Size: 230 bytes

void FUN_000037d2(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = *param_3;
  local_18 = *param_1;
  if (*param_3 < *param_1) {
    piVar2 = &local_18;
  }
  else {
    piVar2 = &local_1c;
  }
  local_14 = *piVar2;
  local_24 = param_3[1];
  local_20 = param_1[1];
  if (param_3[1] < param_1[1]) {
    piVar2 = &local_20;
  }
  else {
    piVar2 = &local_24;
  }
  local_10 = *piVar2;
  local_2c = param_3[2];
  local_28 = param_1[2];
  if (param_1[2] < param_3[2]) {
    piVar2 = &local_28;
  }
  else {
    piVar2 = &local_2c;
  }
  local_c = *piVar2;
  local_34 = param_3[3];
  local_30 = param_1[3];
  if (param_1[3] < param_3[3]) {
    piVar2 = &local_30;
  }
  else {
    piVar2 = &local_34;
  }
  local_8 = *piVar2;
  cVar1 = FUN_0000397e(&local_14);
  if (cVar1 == '\0') {
    local_10 = 0;
    local_14 = 0;
    local_8 = 0;
    local_c = 0;
  }
  *param_2 = local_14;
  param_2[1] = local_10;
  param_2[2] = local_c;
  param_2[3] = local_8;
  return;
}



// Function: FUN_000038b8 at 000038b8
// Size: 198 bytes

void FUN_000038b8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [5];
  
  local_1c = *param_3;
  local_18[0] = *param_1;
  if (*param_1 < *param_3) {
    piVar4 = local_18;
  }
  else {
    piVar4 = &local_1c;
  }
  local_24 = param_3[1];
  local_20 = param_1[1];
  if (param_1[1] < param_3[1]) {
    piVar5 = &local_20;
  }
  else {
    piVar5 = &local_24;
  }
  iVar1 = *piVar5;
  local_2c = param_3[2];
  local_28 = param_1[2];
  if (param_3[2] < param_1[2]) {
    piVar5 = &local_28;
  }
  else {
    piVar5 = &local_2c;
  }
  iVar2 = *piVar5;
  local_34 = param_3[3];
  local_30 = param_1[3];
  if (param_3[3] < param_1[3]) {
    piVar5 = &local_30;
  }
  else {
    piVar5 = &local_34;
  }
  iVar3 = *piVar5;
  *param_2 = *piVar4;
  param_2[1] = iVar1;
  param_2[2] = iVar2;
  param_2[3] = iVar3;
  return;
}



// Function: FUN_0000397e at 0000397e
// Size: 40 bytes

undefined4 FUN_0000397e(int *param_1)

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



// Function: FUN_000039a6 at 000039a6
// Size: 54 bytes

void FUN_000039a6(int *param_1)

{
  int iVar1;
  
  if (param_1[2] < *param_1) {
    iVar1 = *param_1;
    *param_1 = param_1[2];
    param_1[2] = iVar1;
  }
  if (param_1[3] < param_1[1]) {
    iVar1 = param_1[1];
    param_1[1] = param_1[3];
    param_1[3] = iVar1;
  }
  return;
}



// Function: FUN_000039dc at 000039dc
// Size: 40 bytes

undefined4 FUN_000039dc(int *param_1)

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



// Function: FUN_00003a04 at 00003a04
// Size: 34 bytes

int FUN_00003a04(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_2._0_1_ == '\0') {
    iVar1 = param_1[2] - *param_1;
  }
  else {
    iVar1 = param_1[3] - param_1[1];
  }
  return iVar1;
}



// Function: FUN_00003a26 at 00003a26
// Size: 64 bytes

void FUN_00003a26(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  iVar2 = param_1[1];
  *param_2 = param_1[2] - *param_1;
  param_2[1] = iVar1 - iVar2;
  return;
}



// Function: FUN_00003a66 at 00003a66
// Size: 64 bytes

undefined4 FUN_00003a66(int *param_1,int *param_2)

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



// Function: FUN_00003aa6 at 00003aa6
// Size: 66 bytes

undefined4 FUN_00003aa6(int *param_1,int *param_2)

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



// Function: FUN_00003ae8 at 00003ae8
// Size: 48 bytes

void FUN_00003ae8(short *param_1,int *param_2)

{
  *param_2 = (int)*param_1;
  param_2[1] = (int)param_1[1];
  param_2[2] = (int)param_1[2];
  param_2[3] = (int)param_1[3];
  return;
}



// Function: FUN_00003b18 at 00003b18
// Size: 324 bytes

undefined4 FUN_00003b18(int *param_1,int param_2)

{
  short sVar1;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar2;
  undefined2 uVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x74))();
  uVar5 = SUB42(param_1,0);
  if ((cVar3 == '\0') || (*(char *)((int)param_1 + 0xb6) == '\0')) {
    uVar2 = FUN_00002998(uVar5,(char)param_2);
  }
  else {
    sVar1 = *(short *)(param_2 + 0x22);
    if (sVar1 == 1) {
      (**(code **)(*param_1 + 0x150))(uVar5,0x5a);
      uVar2 = (**(code **)(*param_1 + 0x268))();
    }
    else if (sVar1 == 4) {
      (**(code **)(*param_1 + 0x150))(uVar5,0xf4);
      uVar2 = (**(code **)(*param_1 + 0x268))();
    }
    else if (sVar1 == 0xb) {
      uVar2 = 0;
      if (param_1[0x23] != 0) {
        uVar4 = (**(code **)(*param_1 + 0x3b8))(uVar5,0x16);
        (**(code **)(*(int *)param_1[0x23] + 0x428))((short)(int *)param_1[0x23],uVar4);
        uVar2 = (**(code **)(*param_1 + 0x268))();
      }
    }
    else if (sVar1 == 0xc) {
      uVar2 = 0;
      if (param_1[0x23] != 0) {
        uVar4 = (**(code **)(*param_1 + 0x3b8))(uVar5,0x17);
        (**(code **)(*(int *)param_1[0x23] + 0x428))((short)(int *)param_1[0x23],uVar4);
        uVar2 = (**(code **)(*param_1 + 0x268))();
      }
    }
    else {
      uVar2 = FUN_00002998(uVar5,(char)param_2);
    }
  }
  return uVar2;
}



// Function: FUN_00003c5c at 00003c5c
// Size: 390 bytes

void FUN_00003c5c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *piVar2;
  int *extraout_A0_07;
  int *extraout_A0_08;
  int *extraout_A0_09;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *param_2;
  local_8 = param_2[1];
  for (cVar1 = '\0'; cVar1 < '\x02'; cVar1 = cVar1 + '\x01') {
    FUN_0000328e((short)&local_c);
    if (*extraout_A0 < 0) {
      iVar4 = (int)param_1 + 0x3a;
      FUN_0000328e((short)iVar4);
      local_14 = -*extraout_A0_00;
      FUN_0000328e((short)&local_c,(short)((uint)iVar4 >> 0x10));
      local_10 = *extraout_A0_01;
      if (local_14 < *extraout_A0_01) {
        piVar2 = &local_10;
      }
      else {
        piVar2 = &local_14;
      }
      iVar4 = *piVar2;
      FUN_0000328e((short)&local_c);
      *extraout_A0_02 = iVar4;
    }
    else {
      FUN_0000328e((short)&local_c);
      if (0 < *extraout_A0_03) {
        iVar5 = (int)param_1 + 0x3a;
        uVar3 = 2;
        FUN_0000328e((short)iVar5);
        iVar4 = *extraout_A0_04;
        piVar2 = param_1 + 0x21;
        FUN_0000328e((short)piVar2,(short)((uint)iVar5 >> 0x10));
        local_1c = *extraout_A0_05 - iVar4;
        FUN_0000328e((short)&local_c,(short)((uint)piVar2 >> 0x10),uVar3);
        local_18 = *extraout_A0_06;
        if (*extraout_A0_06 < local_1c) {
          piVar2 = &local_18;
        }
        else {
          piVar2 = &local_1c;
        }
        iVar4 = *piVar2;
        FUN_0000328e((short)&local_c);
        *extraout_A0_07 = iVar4;
      }
    }
    puVar6 = &local_c;
    FUN_0000328e((short)puVar6);
    iVar4 = *extraout_A0_08;
    FUN_0000328e((short)((int)param_1 + 0x3a),(short)((uint)puVar6 >> 0x10));
    *extraout_A0_09 = iVar4 + *extraout_A0_09;
  }
  cVar1 = FUN_000033a2((short)&local_c,0x5a);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1e0))();
    (**(code **)(*param_1 + 500))();
    if (param_3._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x3b0))((char)param_1,(short)&local_c);
    }
  }
  return;
}



// Function: FUN_00003de2 at 00003de2
// Size: 70 bytes

void FUN_00003de2(int param_1)

{
  func_0x00004cd0(param_1);
  if (*(int *)(param_1 + 0x90) != 0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x26c))();
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x26c))();
  }
  return;
}



// Function: FUN_00003e28 at 00003e28
// Size: 12 bytes

void FUN_00003e28(void)

{
  return;
}



// Function: FUN_00003e34 at 00003e34
// Size: 28 bytes

void FUN_00003e34(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_3._0_1_ * 4 + param_1 + 0x8c) = param_2;
  return;
}



// Function: FUN_00003e50 at 00003e50
// Size: 338 bytes

void FUN_00003e50(int *param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  int *extraout_A0_01;
  undefined1 extraout_A0b;
  int *extraout_A0_02;
  undefined4 extraout_A0_03;
  int *extraout_A0_04;
  undefined1 extraout_A0b_00;
  int *extraout_A0_05;
  int *piVar4;
  int *extraout_A0_06;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int local_2c [3];
  int local_20;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  uVar5 = (undefined1)((uint)param_1 >> 0x10);
  (**(code **)(*param_1 + 0x304))((short)param_1,(char)auStack_14);
  for (cVar2 = '\0'; uVar7 = (undefined2)((uint)param_3 >> 0x10), cVar2 < '\x02';
      cVar2 = cVar2 + '\x01') {
    FUN_000032a8((char)param_3);
    local_2c[2] = *extraout_A0;
    local_20 = FUN_00003a04((char)auStack_14,uVar7);
    if (local_20 < local_2c[2]) {
      piVar4 = &local_20;
    }
    else {
      piVar4 = local_2c + 2;
    }
    iVar1 = *piVar4;
    FUN_0000362e((short)auStack_14);
    uVar7 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    uVar6 = 0xd0;
    FUN_0000328e((char)extraout_A0_00);
    iVar3 = *extraout_A0_01;
    FUN_00003648((char)param_2,uVar6);
    FUN_000032a8(extraout_A0b,uVar7);
    iVar3 = (*extraout_A0_02 + iVar1) - iVar3;
    if (iVar3 < 1) {
      FUN_0000362e((short)auStack_14);
      uVar7 = (undefined2)((uint)extraout_A0_03 >> 0x10);
      uVar6 = 0x14;
      FUN_0000328e((char)extraout_A0_03);
      iVar3 = *extraout_A0_04;
      FUN_00003648((char)param_2,uVar6);
      FUN_000032a8(extraout_A0b_00,uVar7);
      local_2c[0] = (*extraout_A0_05 - iVar1) - iVar3;
      local_2c[1] = 0;
      if (local_2c[0] < 1) {
        piVar4 = local_2c;
      }
      else {
        piVar4 = local_2c + 1;
      }
      iVar3 = *piVar4;
    }
    FUN_0000328e((char)auStack_1c);
    *extraout_A0_06 = iVar3;
  }
  uVar7 = (undefined2)((uint)auStack_1c >> 0x10);
  (**(code **)(*param_1 + 0x3c0))((char)param_1,(char)auStack_1c);
  FUN_00004400(param_1,param_2,(short)param_3,uVar5,uVar7);
  return;
}



// Function: FUN_00003fa2 at 00003fa2
// Size: 116 bytes

void FUN_00003fa2(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_000033a2((short)param_2,0x5a);
  if (cVar1 != '\0') {
    if (param_1[0x23] != 0) {
      (**(code **)(*(int *)param_1[0x23] + 0x428))((short)(int *)param_1[0x23],(char)*param_2);
    }
    if (param_1[0x24] != 0) {
      (**(code **)(*(int *)param_1[0x24] + 0x428))((short)(int *)param_1[0x24],(char)param_2[1]);
    }
    (**(code **)(*param_1 + 0x3b4))((short)param_1,(short)param_2);
  }
  return;
}



// Function: FUN_00004016 at 00004016
// Size: 270 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004016(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_86 [16];
  undefined1 auStack_76 [16];
  undefined1 auStack_66 [16];
  undefined1 auStack_56 [74];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  cVar2 = FUN_000039dc((int)param_1 + 0x5e);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x338))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x1d8))();
      if (cVar2 != '\0') {
        iVar1 = **(int **)(_DAT_fffff8e8 + 0x1c);
        local_c = *(undefined2 *)(iVar1 + 2);
        local_a = *(undefined2 *)(iVar1 + 4);
        local_8 = *(undefined2 *)(iVar1 + 6);
        local_6 = *(undefined2 *)(iVar1 + 8);
        cVar2 = func_0x000072a0(&local_c);
        if (cVar2 == '\0') {
          FUN_000035ca(auStack_66,&local_c);
          FUN_000036ba(auStack_66,auStack_86,param_2,auStack_76,auStack_66);
          FUN_000037d2(auStack_86);
          cVar2 = FUN_000039dc(auStack_76);
          if (cVar2 == '\0') {
            FUN_00001c90(auStack_56);
            func_0x00007258(&local_c);
            return;
          }
          (**(code **)(*param_1 + 0x274))(param_1,&local_c);
          if (param_3._0_1_ == '\0') {
            (**(code **)(*param_1 + 0x268))();
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00004234 at 00004234
// Size: 246 bytes

int FUN_00004234(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_D3;
  int iVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *piVar4;
  int *extraout_A0_02;
  int local_14 [4];
  
  FUN_0000328e(param_1 + 0x27);
  iVar1 = *extraout_A0;
  iVar3 = iVar1;
  if (((param_2._2_2_ != 0x14) && (param_2._2_2_ != 0x15)) &&
     ((param_2._2_2_ == 0x16 || (iVar3 = unaff_D3, param_2._2_2_ == 0x17)))) {
    FUN_0000328e((int)param_1 + 0x32);
    iVar3 = *extraout_A0_00 - iVar1;
  }
  if ((param_2._2_2_ == 0x14) || (param_2._2_2_ == 0x16)) {
    iVar3 = -iVar3;
  }
  if ((*(char *)((int)param_1 + (short)param_2._0_1_ + 0xa4) != '\0') && (iVar1 != 0)) {
    FUN_0000328e((int)param_1 + 0x3a);
    local_14[0] = *extraout_A0_01 + iVar3;
    local_14[1] = 0;
    if (*extraout_A0_01 + iVar3 < 0) {
      piVar4 = local_14 + 1;
    }
    else {
      piVar4 = local_14;
    }
    iVar2 = *piVar4 % iVar1;
    if (iVar2 != 0) {
      if (iVar3 < 1) {
        iVar3 = (iVar1 - iVar2) + iVar3;
      }
      else {
        iVar3 = iVar3 - iVar2;
      }
    }
  }
  local_14[2] = 0;
  local_14[3] = 0;
  FUN_0000328e(local_14 + 2);
  *extraout_A0_02 = iVar3;
  (**(code **)(*param_1 + 0x3b4))(param_1,(short)local_14 + 8);
  return iVar3;
}



// Function: FUN_0000432a at 0000432a
// Size: 82 bytes

void FUN_0000432a(int *param_1,undefined2 param_2)

{
  short sVar1;
  char cVar2;
  undefined1 auStack_c [8];
  
  sVar1 = (short)param_1;
  cVar2 = FUN_000033a2(sVar1 + 0x3a,(char)param_2);
  if (cVar2 != '\0') {
    FUN_000032fc(param_2,(short)auStack_c,sVar1 + 0x3a);
    (**(code **)(*param_1 + 0x3c0))(sVar1,(short)auStack_c);
  }
  return;
}



// Function: FUN_0000437c at 0000437c
// Size: 60 bytes

void FUN_0000437c(int *param_1)

{
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x290))(param_1,auStack_14,(short)param_1 + 0x32);
  return;
}



// Function: FUN_000043b8 at 000043b8
// Size: 72 bytes

void FUN_000043b8(int *param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = *(undefined4 *)((int)param_1 + 0x32);
  local_10 = *(undefined4 *)((int)param_1 + 0x36);
  local_c = *(undefined4 *)((int)param_1 + 0x32);
  local_8 = *(undefined4 *)((int)param_1 + 0x36);
  (**(code **)(*param_1 + 0x290))(param_1,&local_14,0x25b5a);
  return;
}



// Function: FUN_00004400 at 00004400
// Size: 98 bytes

void FUN_00004400(int *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    local_14 = *param_2;
    local_10 = param_2[1];
    local_c = param_2[2];
    local_8 = param_2[3];
    (**(code **)(*param_1 + 0x158))(param_1,&local_14);
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x290))
              (*(int **)((int)param_1 + 0x1e),&local_14,param_3);
  }
  return;
}



// Function: FUN_00004462 at 00004462
// Size: 38 bytes

void FUN_00004462(int *param_1)

{
  (**(code **)(*param_1 + 0x290))(param_1,0x25b62,0x25b5a);
  return;
}



// Function: FUN_00004488 at 00004488
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004488(undefined4 param_1,int param_2)

{
  short sVar1;
  
  if ((*(char *)(_DAT_000297f4 + 0x92) == '\0') &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) {
    sVar1 = *(short *)(param_2 + 0x22);
    if (sVar1 == 0x1c) {
      sVar1 = 0x34;
    }
    else if (sVar1 == 0x1d) {
      sVar1 = 0x36;
    }
    else if (sVar1 == 0x1e) {
      sVar1 = 0x38;
    }
    else if (sVar1 == 0x1f) {
      sVar1 = 0x32;
    }
    if ((sVar1 < 0x31) || (0x39 < sVar1)) {
      FUN_0000276e(param_1,param_2);
    }
    else {
      switch(sVar1) {
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x33:
        break;
      case 0x34:
        break;
      case 0x36:
        break;
      case 0x37:
        break;
      case 0x38:
        break;
      case 0x39:
      }
      func_0x00005ed0(*(undefined4 *)(_DAT_000297f4 + 0x80));
    }
  }
  else {
    FUN_0000276e(param_1,param_2);
  }
  return;
}



// Function: FUN_0000458a at 0000458a
// Size: 72 bytes

bool FUN_0000458a(int *param_1)

{
  char cVar2;
  undefined2 uVar1;
  
  cVar2 = FUN_0000262e(param_1);
  if (cVar2 != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x488))();
    *(undefined2 *)((int)param_1 + 0xb2) = uVar1;
    (**(code **)(*param_1 + 0x424))();
  }
  return cVar2 != '\0';
}



// Function: FUN_000045d2 at 000045d2
// Size: 234 bytes

void FUN_000045d2(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar3;
  short sVar2;
  
  bVar1 = *(byte *)((int)param_2 + 0x23);
  cVar3 = (**(code **)(*param_2 + 0x84))();
  if (((((cVar3 != '\0') || (cVar3 = (**(code **)(*param_2 + 0x88))(), cVar3 != '\0')) ||
       (cVar3 = (**(code **)(*param_2 + 0x7c))(), cVar3 != '\0')) ||
      ((cVar3 = (**(code **)(*param_2 + 0x78))(), cVar3 != '\0' || (bVar1 < 0x1c)))) ||
     (0x1f < bVar1)) {
    FUN_00002998(param_1,param_2);
    return;
  }
  sVar2 = (**(code **)(*param_1 + 0x488))();
  if ((bVar1 == 0x1c) || (bVar1 == 0x1e)) {
    sVar2 = sVar2 + -1;
  }
  else if ((bVar1 == 0x1d) || (bVar1 == 0x1f)) {
    sVar2 = sVar2 + 1;
  }
  if ((sVar2 != 0) && (sVar2 <= *(short *)(param_1 + 0x1f))) {
    (**(code **)(*param_1 + 0x47c))();
    (**(code **)(*param_1 + 0x260))();
    return;
  }
  FUN_00001c40();
  return;
}



// Function: FUN_000046bc at 000046bc
// Size: 72 bytes

undefined4 FUN_000046bc(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  cVar2 = FUN_000025d6(param_1);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(short *)((int)param_1 + 0xb2) != 0) {
      (**(code **)(*param_1 + 0x47c))();
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00004704 at 00004704
// Size: 8 bytes

void FUN_00004704(void)

{
  return;
}



