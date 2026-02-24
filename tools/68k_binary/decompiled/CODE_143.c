// Warlords II - Decompiled 68k Code
// Segment: CODE_143
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000005a at 0000005a
// Size: 66 bytes

void FUN_0000005a(void)

{
  ushort uVar1;
  
  for (uVar1 = 1; (short)uVar1 < 0x27; uVar1 = uVar1 + 1) {
    if (*(char *)((short)uVar1 * 0x1c + 0x140a7) != '\0') {
      FUN_000002ee((short)(uVar1 & 0xff) * 0x1c + 0x14098);
    }
  }
  return;
}



// Function: FUN_0000009c at 0000009c
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000009c(void)

{
  short sVar1;
  
  sVar1 = 1;
  while( true ) {
    if (0x26 < sVar1) {
      return;
    }
    if (*(int *)(sVar1 * 0x1c + 0x140ac) != 0) break;
    sVar1 = sVar1 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000100 at 00000100
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000100(undefined4 param_1)

{
  if (*(int *)((short)(ushort)param_1._0_1_ * 0x1c + 0x140ac) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_0000016c at 0000016c
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000016c(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000001ae at 000001ae
// Size: 56 bytes

void FUN_000001ae(undefined4 param_1)

{
  FUN_000002ee((short)(ushort)param_1._0_1_ * 0x1c + 0x14098);
  return;
}



// Function: FUN_000001e6 at 000001e6
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000002ee at 000002ee
// Size: 290 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002ee(short *param_1)

{
  int iVar1;
  undefined2 extraout_A0w;
  undefined4 extraout_A0;
  undefined1 auStack_120 [284];
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*param_1 != 0)) {
    iVar1 = *(int *)(_DAT_000297f4 + 0x80);
    switch(param_1[6]) {
    case 1:
      (**(code **)(**(int **)(iVar1 + 0x146) + 0x160))();
      break;
    case 2:
    case 5:
      func_0x00006e00(iVar1);
      break;
    case 3:
      func_0x00006e08(iVar1);
      break;
    case 4:
      func_0x00006e10(iVar1);
      break;
    case 7:
    case 8:
    case 9:
    case 10:
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x142) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    case 6:
      (**(code **)(**(int **)(iVar1 + 0x142) + 0x160))();
    }
    if (*param_1 == -1) {
      func_0x00007320((short)auStack_120,(short)param_1 + 2,0x4354);
      func_0x00007310(extraout_A0w);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 10) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*param_1 == 0) {
    FUN_000001e6();
    *(undefined4 *)(param_1 + 10) = extraout_A0;
    func_0x00001bf0((short)*(undefined4 *)(param_1 + 10));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000654 at 00000654
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000654(undefined4 param_1)

{
  FUN_000002ee(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000778 at 00000778
// Size: 52 bytes

void FUN_00000778(int param_1)

{
  FUN_000002ee(param_1);
  func_0x00001bf0(*(undefined4 *)(param_1 + 0x14));
  return;
}



// Function: FUN_000008e8 at 000008e8
// Size: 36 bytes

void FUN_000008e8(int param_1)

{
  FUN_000002ee(param_1);
  func_0x00001bf0(*(undefined4 *)(param_1 + 0x14));
  return;
}



// Function: FUN_000009f8 at 000009f8
// Size: 30 bytes

void FUN_000009f8(int param_1)

{
  FUN_000002ee(param_1);
  func_0x00001bf0(*(undefined4 *)(param_1 + 0x14));
  return;
}



// Function: FUN_00000a98 at 00000a98
// Size: 30 bytes

void FUN_00000a98(int param_1)

{
  FUN_000002ee(param_1);
  func_0x00001bf0(*(undefined4 *)(param_1 + 0x14));
  return;
}



