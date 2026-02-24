// Warlords II - Decompiled 68k Code
// Segment: CODE_013
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000041a at 0000041a
// Size: 232 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000041a(int param_1)

{
  char cVar2;
  short sVar1;
  undefined4 *extraout_A0;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 auStack_ac [168];
  
  uVar5 = 0x5732;
  uVar4 = (undefined2)((uint)param_1 >> 0x10);
  func_0x00001a50((short)param_1,0x4447,0x57324420);
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  uVar7 = 0x80;
  puVar6 = auStack_ac;
  func_0x00007028((short)puVar6,uVar4,uVar5);
  uVar5 = 1000;
  uVar4 = 0x564d;
  puVar3 = auStack_ac;
  func_0x00006ed0((short)puVar3,0x2020,(short)((uint)puVar6 >> 0x10),uVar7);
  cVar2 = func_0x00007380(0x2020,(short)((uint)puVar3 >> 0x10),uVar4,uVar5);
  if (extraout_A0 == (undefined4 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((cVar2 != '\0') && (*(char *)*extraout_A0 == '\0')) {
    sVar1 = func_0x00001bd8();
    if (sVar1 == 2) {
      func_0x00001c10();
    }
  }
  *(char *)*extraout_A0 = cVar2;
  func_0x00006ee0((short)auStack_ac,(short)extraout_A0,0x2020);
  func_0x00001d08((short)extraout_A0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000b2e at 00000b2e
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b2e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000c22 at 00000c22
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000c22(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    cVar1 = func_0x00001d60(*(undefined4 *)(param_1 + 0x8c));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(param_1 + 0x8c) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}



// Function: FUN_00000cac at 00000cac
// Size: 510 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00000cac(int param_1)

{
  undefined1 uVar1;
  char cVar3;
  int iVar2;
  char cVar4;
  int unaff_D4;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *piVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 auStack_9a [76];
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0x80;
  puVar6 = auStack_9a;
  func_0x00007028((short)puVar6);
  func_0x00006ed0((short)auStack_9a,0x6b20,(short)((uint)puVar6 >> 0x10),uVar7);
  if (extraout_A0 == (int *)0x0) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = *(char *)*extraout_A0;
  }
  if (cVar4 == '\0') {
    cVar3 = func_0x00001d80();
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(*extraout_A0 + 1);
      goto LAB_00000e8c;
    }
  }
  local_4e = (int *)0x0;
  (**(code **)(*_DAT_000257ee + 0x68))((short)_DAT_000257ee,0);
  local_4e = extraout_A0_00;
  func_0x00001bf0((short)extraout_A0_00);
  uVar7 = *(undefined2 *)(_DAT_000297f4 + 0x50);
  *(ushort *)(_DAT_000297f4 + 0x50) = *(ushort *)(_DAT_000297f4 + 0x50) & 0xfbff;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8((short)auStack_4a);
  if (iVar2 == 0) {
    (**(code **)(*local_4e + 0x194))();
    unaff_D4 = (**(code **)(*local_4e + 0x40c))();
    (**(code **)(*local_4e + 0x188))((short)local_4e,0x6b20);
    if (extraout_A0_01 != (int *)0x0) {
      cVar4 = (**(code **)(*extraout_A0_01 + 0x428))();
      cVar4 = cVar4 == '\0';
    }
    (**(code **)(*local_4e + 0x3a0))();
    local_4e = (int *)0x0;
    _DAT_00025f52 = local_10;
  }
  else {
    if (local_4e != (int *)0x0) {
      (**(code **)(*local_4e + 0x3a0))();
    }
    local_4e = (int *)0x0;
    *(undefined2 *)(_DAT_000297f4 + 0x50) = uVar7;
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  *(undefined2 *)(_DAT_000297f4 + 0x50) = uVar7;
  *(bool *)(param_1 + 0x1a6) = unaff_D4 == 0x79657320;
  piVar5 = extraout_A0;
  if (extraout_A0 == (int *)0x0) {
    func_0x00001e98(2);
    piVar5 = extraout_A0_02;
  }
  *(char *)*piVar5 = cVar4;
  *(undefined1 *)(*piVar5 + 1) = *(undefined1 *)(param_1 + 0x1a6);
  func_0x00006ee0((short)auStack_9a,(short)piVar5,0x6b20,2);
  func_0x00001d08((short)piVar5);
LAB_00000e8c:
  uVar1 = *(undefined1 *)(param_1 + 0x1a6);
  func_0x00006ec8((short)auStack_9a);
  return uVar1;
}



// Function: FUN_00000eaa at 00000eaa
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000eaa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000f6e at 00000f6e
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f6e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000f84 at 00000f84
// Size: 14 bytes

void FUN_00000f84(void)

{
  FUN_00000f6e();
  return;
}



// Function: FUN_00000f92 at 00000f92
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f92(void)

{
  _DAT_fffff86a = DAT_0000020c;
  return;
}



// Function: FUN_00000faa at 00000faa
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000faa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001012 at 00001012
// Size: 98 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001012(void)

{
  if (_DAT_000273a8 == 0) {
    func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_0002736c = DAT_0002736c & 0x7f;
  DAT_0002739a = DAT_0002739a & 0x7f;
  _DAT_000140c4 = _DAT_000150f8;
  _DAT_000140c6 = _DAT_000150f6;
  func_0x00002358();
  return;
}



