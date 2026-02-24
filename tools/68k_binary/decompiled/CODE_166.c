// Warlords II - Decompiled 68k Code
// Segment: CODE_166
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000064 at 00000064
// Size: 14 bytes

void FUN_00000064(void)

{
  return;
}



// Function: FUN_00000072 at 00000072
// Size: 44 bytes

void FUN_00000072(void)

{
  int extraout_A0;
  
  func_0x000073b0(100);
  if (extraout_A0 != 0) {
    FUN_0000009e(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000009e at 0000009e
// Size: 120 bytes

void FUN_0000009e(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xc330;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0x54455854;
  *(undefined4 *)((int)param_1 + 0x52) = 0x3f3f3f3f;
  *(undefined2 *)((int)param_1 + 0x56) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 2;
  *(undefined1 *)((int)param_1 + 0x5b) = 1;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x8002;
  *(undefined2 *)((int)param_1 + 0x62) = 0x8002;
  return;
}



// Function: FUN_00000116 at 00000116
// Size: 62 bytes

void FUN_00000116(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00000dd8(param_1);
  *(undefined4 *)(param_1 + 0x4e) = param_2;
  *(undefined4 *)(param_1 + 0x52) = param_3;
  *(undefined1 *)(param_1 + 0x59) = param_4._0_1_;
  *(undefined1 *)(param_1 + 0x5a) = param_4._2_1_;
  *(undefined1 *)(param_1 + 0x5d) = param_5._0_1_;
  *(undefined1 *)(param_1 + 0x5e) = param_5._2_1_;
  return;
}



// Function: FUN_00000154 at 00000154
// Size: 80 bytes

short FUN_00000154(int *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  sVar2 = 0;
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    sVar1 = (**(code **)(*param_1 + 0x84))();
  }
  if (*(char *)((int)param_1 + 0x5a) != '\x02') {
    sVar2 = (**(code **)(*param_1 + 0x88))();
  }
  if (sVar1 != 0) {
    sVar2 = sVar1;
  }
  return sVar2;
}



// Function: FUN_000001a4 at 000001a4
// Size: 46 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001a4(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
  sVar1 = 0x22;
  puVar2 = (undefined2 *)(param_1 + 4);
  puVar3 = auStack_4a;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000001dc at 000001dc
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001dc(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
  sVar1 = 0x22;
  puVar2 = (undefined2 *)(param_1 + 4);
  puVar3 = auStack_4a;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000216 at 00000216
// Size: 102 bytes

short FUN_00000216(int *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  sVar2 = 0;
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    sVar1 = (**(code **)(*param_1 + 0x98))();
  }
  if (((*(char *)((int)param_1 + 0x5a) != '\x02') &&
      (sVar2 = (**(code **)(*param_1 + 0x9c))(), *(char *)((int)param_1 + 0x5a) == '\x01')) &&
     (sVar2 != 0)) {
    sVar2 = 0;
  }
  if (sVar1 != 0) {
    sVar2 = sVar1;
  }
  return sVar2;
}



// Function: FUN_0000027c at 0000027c
// Size: 114 bytes

short FUN_0000027c(int *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  sVar2 = 0;
  if ((*(char *)((int)param_1 + 0x59) != '\0') && (*(char *)((int)param_1 + 0x5d) != '\0')) {
    sVar1 = (**(code **)(*param_1 + 0x98))();
  }
  if ((((*(char *)((int)param_1 + 0x5a) != '\x02') && (*(char *)((int)param_1 + 0x5e) != '\0')) &&
      (sVar2 = (**(code **)(*param_1 + 0x9c))(), *(char *)((int)param_1 + 0x5a) == '\x01')) &&
     (sVar2 != 0)) {
    sVar2 = 0;
  }
  if (sVar1 != 0) {
    sVar2 = sVar1;
  }
  return sVar2;
}



// Function: FUN_000002ee at 000002ee
// Size: 194 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000002ee(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint local_c6;
  uint local_c2;
  undefined1 auStack_be [64];
  undefined1 auStack_7e [122];
  
  if (*(short *)(param_1 + 0x60) == -0x7ffe) {
    local_c6 = 0x40;
    local_c2 = *(byte *)(param_1 + 10) + 1;
    if (local_c2 < 0x40) {
      puVar4 = &local_c2;
    }
    else {
      puVar4 = &local_c6;
    }
    puVar2 = auStack_be;
    puVar3 = (undefined1 *)(param_1 + 10);
    for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    func_0x00001ce0(auStack_7e,0x7a);
    switch(param_2._0_1_) {
    case 0:
    case 2:
    case 3:
      break;
    case 1:
      break;
    case 4:
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000003e6 at 000003e6
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000432) */

undefined4 FUN_000003e6(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
  if (*(short *)(param_1 + 0x62) == -0x7ffe) {
    sVar1 = 0x22;
    puVar2 = (undefined2 *)(param_1 + 4);
    puVar3 = auStack_4a;
    do {
      *puVar3 = *puVar2;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00000442 at 00000442
// Size: 16 bytes

undefined2 FUN_00000442(int param_1)

{
  return *(undefined2 *)(param_1 + 4);
}



// Function: FUN_00000452 at 00000452
// Size: 24 bytes

bool FUN_00000452(int param_1)

{
  return *(short *)(param_1 + 0x60) != -0x7ffe;
}



// Function: FUN_0000046a at 0000046a
// Size: 24 bytes

bool FUN_0000046a(int param_1)

{
  return *(short *)(param_1 + 0x62) != -0x7ffe;
}



// Function: FUN_00000482 at 00000482
// Size: 136 bytes

undefined4 FUN_00000482(int param_1,int *param_2)

{
  short sVar2;
  int iVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar3;
  undefined1 local_44 [64];
  
  local_44[0] = 0;
  sVar2 = (**(code **)(*param_2 + 0x100))();
  if ((sVar2 == *(short *)(param_1 + 4)) &&
     (iVar1 = (**(code **)(*param_2 + 0xb4))(), iVar1 == *(int *)(param_1 + 6))) {
    (**(code **)(*param_2 + 0xd0))(param_2,local_44);
    func_0x00007310(param_1 + 10);
    uVar3 = 0x4e6;
    func_0x00007310(local_44,extraout_A0);
    uVar3 = CONCAT13(1,(int3)CONCAT22((short)((uint)uVar3 >> 0x10),(ushort)(byte)uVar3));
    func_0x000075e8(uVar3,extraout_A0_00);
    if ((char)((uint)uVar3 >> 0x18) != '\0') {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_0000050a at 0000050a
// Size: 16 bytes

undefined1 FUN_0000050a(int param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



