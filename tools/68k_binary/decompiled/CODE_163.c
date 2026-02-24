// Warlords II - Decompiled 68k Code
// Segment: CODE_163
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000009a at 0000009a
// Size: 18 bytes

void FUN_0000009a(undefined4 param_1)

{
  func_0x00000df0(param_1);
  return;
}



// Function: FUN_000000ac at 000000ac
// Size: 18 bytes

void FUN_000000ac(undefined4 param_1)

{
  func_0x00000df0(param_1);
  return;
}



// Function: FUN_000000be at 000000be
// Size: 18 bytes

void FUN_000000be(undefined4 param_1)

{
  func_0x00000df0(param_1);
  return;
}



// Function: FUN_000000d0 at 000000d0
// Size: 108 bytes

void FUN_000000d0(undefined2 param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  func_0x00004a50((short)local_68,param_1);
  func_0x00004a58((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x1a8))();
    func_0x00004a60((short)local_68);
    piVar2 = extraout_A0_00;
  }
  func_0x00002510((short)local_68);
  return;
}



// Function: FUN_0000013c at 0000013c
// Size: 30 bytes

undefined2 FUN_0000013c(undefined4 param_1,undefined4 param_2)

{
  undefined2 local_c;
  
  func_0x00007610();
  local_c = (undefined2)((uint)param_2 >> 0x10);
  return local_c;
}



// Function: FUN_0000015a at 0000015a
// Size: 30 bytes

undefined2 FUN_0000015a(undefined4 param_1,undefined4 param_2)

{
  undefined2 local_c;
  
  func_0x00007620();
  local_c = (undefined2)((uint)param_2 >> 0x10);
  return local_c;
}



// Function: FUN_00000178 at 00000178
// Size: 34 bytes

undefined2 FUN_00000178(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x000075f8(param_2,param_3);
  return (short)((uint)param_2 >> 0x10);
}



// Function: FUN_0000019a at 0000019a
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000019a(int param_1)

{
  if (*(short *)(param_1 + 0x60) != -0x7ffe) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000001f2 at 000001f2
// Size: 80 bytes

void FUN_000001f2(int *param_1,undefined4 param_2)

{
  if (*(char *)((int)param_1 + 0x12a) != '\0') {
    (**(code **)(*param_1 + 0x1bc))(param_1,param_2);
  }
  if (*(char *)((int)param_1 + 299) != '\0') {
    (**(code **)(*param_1 + 0x1c0))(param_1,param_2);
  }
  return;
}



// Function: FUN_00000242 at 00000242
// Size: 158 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000242(int param_1,int *param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 local_8;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x138) + 0x90))();
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = (**(code **)(*param_2 + 0x124))();
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_8 = 0x78;
  if (*(int *)(param_1 + 0x12e) == 0) {
    func_0x00001e98(0x78);
    *(undefined4 *)(param_1 + 0x12e) = extraout_A0;
  }
  func_0x000073a0(*(undefined4 *)(param_1 + 0x12e));
  (**(code **)(*param_2 + 0x134))(param_2,(short)**(undefined4 **)(param_1 + 0x12e),(short)&local_8)
  ;
  func_0x00001c00();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000332 at 00000332
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000332(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000046a at 0000046a
// Size: 112 bytes

void FUN_0000046a(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte local_44 [64];
  
  local_44[0] = 0;
  (**(code **)(*(int *)param_1[0x4e] + 0xa0))((int *)param_1[0x4e],local_44);
  pbVar2 = (byte *)((int)param_1 + 0x1e);
  pbVar3 = local_44;
  for (iVar1 = local_44[0] + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar2 = *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  (**(code **)(*(int *)param_1[0x4e] + 0x5c))();
  (**(code **)(*param_1 + 0x154))(param_1,0);
  return;
}



// Function: FUN_000004da at 000004da
// Size: 70 bytes

void FUN_000004da(int *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)param_1[0x4e] + 0x5c))();
  (**(code **)(*(int *)param_1[0x4e] + 0x9c))((int *)param_1[0x4e],param_2);
  (**(code **)(*param_1 + 0x154))(param_1,1);
  return;
}



// Function: FUN_00000520 at 00000520
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000520(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 auStack_4a [52];
  short local_16;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar3 = func_0x000076a8((char)auStack_4a);
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x1dc))((short)param_1,0xd);
    (**(code **)(*param_1 + 0x118))();
    (**(code **)(*param_1 + 0x120))();
    cVar4 = (**(code **)(*(int *)param_1[0x4e] + 0x90))();
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 300))();
    }
    else {
      (**(code **)(*(int *)param_1[0x4e] + 0x5c))();
    }
    (**(code **)(*param_1 + 0x154))((short)param_1,0);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    if (local_16 == -0x2b) {
      local_16 = -0x4e21;
    }
    if (local_14 == 0) {
      puVar1 = &DAT_00025fa8;
      puVar2 = (undefined1 *)((int)param_1 + 0x1e);
      for (iVar3 = *(byte *)((int)param_1 + 0x1e) + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar1 = *puVar2;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    uVar7 = 3;
    uVar6 = (undefined2)local_14;
    sVar5 = local_16;
    func_0x00001be8((short)((uint)local_14 >> 0x10),0x82);
    func_0x00001c10((short)((uint)local_14 >> 0x10),sVar5,uVar6,uVar7);
  }
  return;
}



// Function: FUN_00000658 at 00000658
// Size: 34 bytes

void FUN_00000658(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x1b8))
            (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_0000067a at 0000067a
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000067a(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1[2] != 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = func_0x000076a8((short)auStack_4a);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)param_1[2] + 0x90))();
      func_0x00001c00();
      uVar6 = 1;
      uVar5 = 0;
      piVar1 = (int *)param_1[2];
      uVar4 = (undefined2)((uint)piVar1 >> 0x10);
      (**(code **)(*piVar1 + 0x148))((short)piVar1,0,uVar3);
      *(undefined1 *)(param_1 + 3) = 1;
      (**(code **)(*param_1 + 0x60))((short)param_1,uVar4,uVar5,uVar6);
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*param_1 + 0x70))();
      func_0x00001c10((short)((uint)local_14 >> 0x10));
    }
    (**(code **)(*(int *)param_1[2] + 0x74))();
    func_0x00001c00();
    (**(code **)(*(int *)param_1[2] + 300))();
  }
  return;
}



// Function: FUN_0000075e at 0000075e
// Size: 132 bytes

void FUN_0000075e(int *param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uStack_6e;
  int local_68 [25];
  
  uStack_6e = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x1c4))();
  (**(code **)(*param_1 + 0x26c))();
  func_0x00004b40(local_68,uStack_6e);
  func_0x00004b48(local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x1a8))();
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  func_0x00002798((short)local_68);
  return;
}



