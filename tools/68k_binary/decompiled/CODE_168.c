// Warlords II - Decompiled 68k Code
// Segment: CODE_168
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000070 at 00000070
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000070(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000008e at 0000008e
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000008e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000176 at 00000176
// Size: 112 bytes

byte FUN_00000176(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  short sVar13;
  short sVar14;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x15);
  bVar3 = *(byte *)(param_1 + 0x14);
  bVar4 = *(byte *)(param_1 + 0x16);
  bVar5 = *(byte *)(param_1 + 0x18);
  sVar13 = *(short *)(param_1 + 4);
  bVar6 = *(byte *)(param_1 + 9);
  sVar14 = *(short *)(param_1 + 4);
  bVar7 = *(byte *)(param_1 + 0x1e);
  bVar8 = *(byte *)(param_1 + 0x1f);
  bVar9 = *(byte *)(param_1 + 0x20);
  bVar10 = *(byte *)(param_1 + 0x21);
  bVar11 = *(byte *)(param_1 + 0x22);
  bVar12 = *(byte *)(param_1 + 0x23);
  if (*(char *)(param_1 + 0x1b) != '\0') {
    func_0x00007388();
  }
  return bVar12 & bVar11 & bVar10 & bVar9 & bVar8 & bVar7 & 0x6ff < sVar14 &
                                                            bVar6 & 0x604 < sVar13 &
                                                                    bVar5 & bVar4 & bVar3 & bVar2 & 
                                                  bVar1 & 1;
}



// Function: FUN_000001e6 at 000001e6
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000280 at 00000280
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000280(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000002aa at 000002aa
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000002aa(undefined4 param_1)

{
  func_0x00007398(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000368 at 00000368
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000368(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000071e at 0000071e
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000071e(uint param_1)

{
  if ((param_1 & 1) != 0) {
    param_1 = param_1 + 1;
  }
  if ((int)(_DAT_00000908 - param_1) < DAT_00000130) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



