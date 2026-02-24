// Warlords II - Decompiled 68k Code
// Segment: CODE_171
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000017a at 0000017a
// Size: 30 bytes

void FUN_0000017a(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x94))(*(int **)(param_1 + 4),param_2);
  return;
}



// Function: FUN_00000198 at 00000198
// Size: 54 bytes

bool FUN_00000198(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  iVar2 = (**(code **)(*param_1 + 0x58))();
  return iVar1 <= iVar2;
}



// Function: FUN_000001ce at 000001ce
// Size: 10 bytes

undefined4 FUN_000001ce(void)

{
  return 0;
}



// Function: FUN_000001d8 at 000001d8
// Size: 10 bytes

undefined4 FUN_000001d8(void)

{
  return 0;
}



// Function: FUN_000001e2 at 000001e2
// Size: 62 bytes

undefined4 FUN_000001e2(int param_1,int param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    for (sVar1 = 0; sVar1 < *(short *)(param_1 + 8); sVar1 = sVar1 + 1) {
      if (param_2 == *(int *)(**(int **)(param_1 + 10) + sVar1 * 8)) {
        return *(undefined4 *)(**(int **)(param_1 + 10) + 4 + sVar1 * 8);
      }
    }
  }
  return 0;
}



// Function: FUN_00000220 at 00000220
// Size: 88 bytes

void FUN_00000220(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
    func_0x00001ec0(*(undefined4 *)(param_1 + 10),(int)*(short *)(param_1 + 8) << 3);
    *(int *)(**(int **)(param_1 + 10) + (*(short *)(param_1 + 8) + -1) * 8) = param_2;
    *(undefined4 *)(**(int **)(param_1 + 10) + 4 + (*(short *)(param_1 + 8) + -1) * 8) = param_3;
  }
  return;
}



// Function: FUN_00000278 at 00000278
// Size: 8 bytes

void FUN_00000278(void)

{
  return;
}



// Function: FUN_00000280 at 00000280
// Size: 8 bytes

void FUN_00000280(void)

{
  return;
}



// Function: FUN_00000288 at 00000288
// Size: 18 bytes

void FUN_00000288(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_0000029a at 0000029a
// Size: 16 bytes

void FUN_0000029a(void)

{
  return;
}



// Function: FUN_000002aa at 000002aa
// Size: 58 bytes

undefined4 FUN_000002aa(int param_1)

{
  undefined4 local_8;
  
  func_0x00001bf0(*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0xe) + 0xb0))((short)*(int **)(param_1 + 0xe),(short)&local_8);
  func_0x00001c00();
  return local_8;
}



// Function: FUN_000002e4 at 000002e4
// Size: 58 bytes

undefined4 FUN_000002e4(int param_1)

{
  undefined4 local_8;
  
  func_0x00001bf0(*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0xe) + 0xac))((short)*(int **)(param_1 + 0xe),(short)&local_8);
  func_0x00001c00();
  return local_8;
}



// Function: FUN_0000031e at 0000031e
// Size: 60 bytes

void FUN_0000031e(int param_1,undefined2 param_2)

{
  func_0x00001bf0(*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0xe) + 0x148))(*(int **)(param_1 + 0xe),param_2);
  func_0x00001c00();
  return;
}



// Function: FUN_0000035a at 0000035a
// Size: 54 bytes

void FUN_0000035a(int param_1,undefined2 param_2)

{
  func_0x00001bf0(*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0xe) + 0x144))((short)*(int **)(param_1 + 0xe),param_2);
  func_0x00001c00();
  return;
}



// Function: FUN_00000390 at 00000390
// Size: 16 bytes

undefined4 FUN_00000390(int param_1)

{
  return *(undefined4 *)(param_1 + 0x12);
}



// Function: FUN_000003a0 at 000003a0
// Size: 16 bytes

undefined4 FUN_000003a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x16);
}



// Function: FUN_000003b0 at 000003b0
// Size: 46 bytes

int FUN_000003b0(int param_1,int param_2)

{
  int *piVar1;
  int local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = *(int *)(param_1 + 0x1a);
  if (param_2 < *(int *)(param_1 + 0x1a)) {
    piVar1 = &local_8;
  }
  else {
    piVar1 = &local_c;
  }
  return *piVar1;
}



// Function: FUN_000003de at 000003de
// Size: 72 bytes

void FUN_000003de(int param_1,int param_2)

{
  if (param_2 < 0) {
    func_0x00001c00();
  }
  else if (*(int *)(param_1 + 0x16) < param_2) {
    param_2 = *(int *)(param_1 + 0x16);
  }
  *(int *)(param_1 + 0x12) = param_2;
  func_0x00001c00();
  return;
}



// Function: FUN_00000426 at 00000426
// Size: 52 bytes

void FUN_00000426(int param_1,int param_2)

{
  func_0x00001ec0(*(undefined4 *)(param_1 + 0xe),param_2);
  if (param_2 < *(int *)(param_1 + 0x12)) {
    *(int *)(param_1 + 0x12) = param_2;
  }
  *(int *)(param_1 + 0x16) = param_2;
  return;
}



// Function: FUN_0000045a at 0000045a
// Size: 16 bytes

undefined4 FUN_0000045a(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe);
}



// Function: FUN_0000046a at 0000046a
// Size: 72 bytes

void FUN_0000046a(int param_1,int param_2)

{
  if (param_2 < 0) {
    func_0x00001c00();
  }
  else if (*(int *)(param_1 + 0x12) < param_2) {
    param_2 = *(int *)(param_1 + 0x12);
  }
  *(int *)(param_1 + 0xe) = param_2;
  func_0x00001c00();
  return;
}



// Function: FUN_000004b2 at 000004b2
// Size: 16 bytes

undefined4 FUN_000004b2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x12);
}



// Function: FUN_000004c2 at 000004c2
// Size: 30 bytes

void FUN_000004c2(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0xe)) {
    *(int *)(param_1 + 0xe) = param_2;
  }
  *(int *)(param_1 + 0x12) = param_2;
  return;
}



// Function: FUN_000004e0 at 000004e0
// Size: 16 bytes

undefined4 FUN_000004e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x12);
}



// Function: FUN_000004f0 at 000004f0
// Size: 18 bytes

void FUN_000004f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x12) = param_2;
  return;
}



// Function: FUN_00000502 at 00000502
// Size: 16 bytes

undefined4 FUN_00000502(int param_1)

{
  return *(undefined4 *)(param_1 + 0x16);
}



// Function: FUN_00000512 at 00000512
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000512(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



