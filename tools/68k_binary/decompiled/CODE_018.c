// Warlords II - Decompiled 68k Code
// Segment: CODE_018
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000c4 at 000000c4
// Size: 184 bytes

void FUN_000000c4(int *param_1,undefined1 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int extraout_A0;
  undefined2 uVar3;
  int local_14;
  int local_c;
  
  uVar3 = SUB42(param_1,0);
  func_0x00004580(uVar3,param_2);
  (**(code **)(*param_1 + 0x228))();
  if (extraout_A0 == 0) {
    (**(code **)(*param_1 + 0x3c8))(uVar3,0x9592);
  }
  else {
    uVar1 = *(undefined2 *)(extraout_A0 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xd2) = *(undefined4 *)(extraout_A0 + 0x18);
    *(undefined2 *)((int)param_1 + 0xd6) = uVar1;
    (**(code **)(*param_1 + 0x3c8))(uVar3,(short)extraout_A0 + 0x12);
  }
  (**(code **)(*param_1 + 0x39c))(uVar3,0xec);
  iVar2 = ((local_c - local_14) + -0xc) / 2;
  param_1[0x2f] = iVar2 + param_1[0x2f];
  param_1[0x31] = iVar2 + param_1[0x31];
  return;
}



// Function: FUN_0000017c at 0000017c
// Size: 50 bytes

void FUN_0000017c(int *param_1,undefined4 param_2)

{
  func_0x000015b8(param_1,param_2);
  if (param_1[0x2f] == 0) {
    (**(code **)(*param_1 + 0x42c))();
  }
  return;
}



// Function: FUN_000001ae at 000001ae
// Size: 110 bytes

void FUN_000001ae(int *param_1)

{
  undefined4 *extraout_A0;
  
  func_0x000073b0(10);
  if (extraout_A0 != (undefined4 *)0x0) {
    func_0x00005378((char)extraout_A0);
    *extraout_A0 = 0x233d8;
  }
  func_0x00005380((short)extraout_A0,0x6261);
  param_1[0x2f] = (int)extraout_A0;
  (**(code **)(*param_1 + 0x1fc))(param_1,extraout_A0);
  return;
}



// Function: FUN_0000021c at 0000021c
// Size: 82 bytes

void FUN_0000021c(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0x32;
  func_0x000015b8(param_1,param_2);
  param_1[0x1f] = 0x44c;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  (**(code **)(*param_1 + 0x3dc))(param_1,0xffff,uVar1);
  (**(code **)(*param_1 + 0x70))();
  return;
}



// Function: FUN_0000026e at 0000026e
// Size: 58 bytes

void FUN_0000026e(int *param_1,undefined4 param_2)

{
  FUN_0000021c(param_1,param_2);
  param_1[0x1f] = 0x44e;
  if (param_1[0x2c] == 0) {
    (**(code **)(*param_1 + 0x3f0))();
  }
  return;
}



// Function: FUN_000002a8 at 000002a8
// Size: 108 bytes

void FUN_000002a8(int *param_1)

{
  int *extraout_A0;
  undefined1 uVar1;
  
  func_0x000073b0(10);
  if (extraout_A0 != (int *)0x0) {
    func_0x00005378((char)extraout_A0);
    *extraout_A0 = 0x23540;
  }
  uVar1 = 0xf2;
  (**(code **)(*extraout_A0 + 0x78))();
  param_1[0x2c] = (int)extraout_A0;
  (**(code **)(*param_1 + 0x1fc))(param_1,extraout_A0,uVar1);
  return;
}



// Function: FUN_00000314 at 00000314
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000314(undefined4 param_1,undefined4 param_2)

{
  func_0x00004698(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000382 at 00000382
// Size: 234 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000382(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000038b8(param_2,&local_2c,param_3);
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = local_2c;
  local_8 = local_28;
  (**(code **)(*param_1 + 0x1ac))(param_1,&local_14);
  func_0x000038a0(param_4,&local_30);
  func_0x000038a0(param_3,&local_34);
  local_1c = CONCAT22(local_34,local_32);
  local_18 = CONCAT22(local_30,local_2e);
  param_1[0x23] = local_1c;
  param_1[0x24] = local_18;
  local_24 = 1;
  local_22 = 1;
  local_20 = 1;
  local_1e = 1;
  func_0x00007268(param_1 + 0x23,&local_24);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000004a2 at 000004a2
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004a2(undefined4 param_1,undefined4 param_2)

{
  func_0x00004698(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000510 at 00000510
// Size: 8 bytes

void FUN_00000510(void)

{
  return;
}



// Function: FUN_00000518 at 00000518
// Size: 32 bytes

void FUN_00000518(int param_1,undefined4 param_2)

{
  func_0x00001320(param_1,param_2);
  *(undefined4 *)(param_1 + 0x22) = param_2;
  return;
}



// Function: FUN_00000538 at 00000538
// Size: 526 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000538(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  int *extraout_A0_01;
  char *pcVar6;
  undefined1 extraout_A0b_00;
  char *pcVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 auStack_25a [256];
  undefined1 auStack_15a [256];
  undefined1 auStack_5a [84];
  undefined2 local_6;
  
  piVar1 = *(int **)(param_1 + 8);
  (**(code **)(*piVar1 + 0x188))((char)piVar1,0x65);
  if (extraout_A0 != (int *)0x0) {
    iVar3 = -1;
    pcVar7 = (char *)(param_2 + 0x169);
    do {
      iVar3 = iVar3 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      local_6 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
      func_0x00002808(0x454e,1);
      if (extraout_A0_00 != (int *)0x0) {
        uVar10 = 0;
        uVar9 = (undefined1)((uint)auStack_5a >> 0x10);
        uVar8 = (undefined2)((uint)extraout_A0_00 >> 0x10);
        (**(code **)(*extraout_A0_00 + 0x74))((short)extraout_A0_00,(char)auStack_5a,0x54);
        func_0x00002818((short)extraout_A0_00,uVar8,uVar9,uVar10);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00007320((char)auStack_15a,(char)(char *)(param_2 + 0x169));
    (**(code **)(*extraout_A0 + 1000))((char)extraout_A0,extraout_A0b);
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    (**(code **)(*piVar1 + 0x188))((char)piVar1,(char)sVar5 + '0');
    if (extraout_A0_01 != (int *)0x0) {
      if ((*(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) == 0) &&
         (*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) != 0)) {
        pcVar7 = (char *)(sVar5 * 0xb + param_2 + 0x174);
        iVar3 = -1;
        pcVar6 = pcVar7;
        do {
          iVar3 = iVar3 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (iVar3 == 0) {
          pcVar7 = (char *)(sVar5 * 0x14 + _DAT_0002884c);
        }
      }
      else {
        if ((*(short *)(sVar5 * 2 + _DAT_0002884c + 0xc0) == 3) ||
           (*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) == 0)) {
          pcVar7 = &DAT_00014f4e;
        }
        else {
          pcVar7 = &DAT_00014f3e;
        }
        sVar4 = -1;
        pcVar6 = pcVar7;
        do {
          sVar4 = sVar4 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        *(short *)(extraout_A0_01 + 0x2c) = sVar4;
        (**(code **)(*extraout_A0_01 + 0x70))();
        (**(code **)(*extraout_A0_01 + 0x3c8))((char)extraout_A0_01,0x9622);
      }
      func_0x00007320((char)auStack_25a,(char)pcVar7);
      (**(code **)(*extraout_A0_01 + 1000))((char)extraout_A0_01,extraout_A0b_00);
    }
  }
  func_0x00003ee0((char)param_1);
  return;
}



