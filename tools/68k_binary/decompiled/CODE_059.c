// Warlords II - Decompiled 68k Code
// Segment: CODE_059
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000096 at 00000096
// Size: 30 bytes

void FUN_00000096(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x158))
            (*(int **)(param_1 + 0x2e),*(undefined4 *)(param_1 + 4));
  return;
}



// Function: FUN_000000b4 at 000000b4
// Size: 18 bytes

void FUN_000000b4(undefined4 param_1)

{
  func_0x00000df0(param_1);
  return;
}



// Function: FUN_000000c6 at 000000c6
// Size: 32 bytes

void FUN_000000c6(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 != param_1) {
    FUN_00001c10();
  }
  return;
}



// Function: FUN_000000e6 at 000000e6
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000e6(int param_1,int param_2)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_90 [35];
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
  sVar1 = 0x22;
  puVar2 = (undefined2 *)(param_2 + 4);
  puVar3 = auStack_90;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000126 at 00000126
// Size: 222 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000216) */
/* WARNING: Removing unreachable block (ram,0x0000021e) */
/* WARNING: Removing unreachable block (ram,0x00000236) */

void FUN_00000126(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 *extraout_A0;
  undefined2 *extraout_A0_00;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_156 [34];
  undefined1 auStack_134 [34];
  undefined1 auStack_112 [64];
  undefined1 auStack_d2 [64];
  undefined2 local_92 [71];
  
  func_0x00007358(auStack_d2,0xc49c);
  func_0x00007358(auStack_112,0xc49c);
  local_92[0]._0_1_ = 0;
  func_0x00007350(param_2,0xc49c);
  if (DAT_00025b23 == '\0') {
    func_0x00007368(auStack_156,0xc498);
    sVar1 = 0x10;
    puVar2 = extraout_A0_00;
    puVar3 = local_92;
    do {
      *puVar3 = *puVar2;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (sVar1 != -1);
  }
  else {
    func_0x00007368(auStack_134,0xc49a);
    sVar1 = 0x10;
    puVar2 = extraout_A0;
    puVar3 = local_92;
    do {
      *puVar3 = *puVar2;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (sVar1 != -1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000240 at 00000240
// Size: 56 bytes

short FUN_00000240(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined1 auStack_7e [58];
  undefined4 local_44;
  undefined4 local_3a;
  
  sVar1 = (**(code **)(*param_1 + 0xbc))(param_1,auStack_7e);
  if (sVar1 == 0) {
    *param_2 = local_44;
    *param_3 = local_3a;
  }
  return sVar1;
}



// Function: FUN_00000278 at 00000278
// Size: 28 bytes

undefined2 FUN_00000278(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  func_0x00007608();
  return uVar1;
}



// Function: FUN_00000294 at 00000294
// Size: 74 bytes

short FUN_00000294(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined1 auStack_7e [48];
  undefined4 local_4e;
  
  func_0x00001ce0(auStack_7e,0x7a);
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1,auStack_7e);
  if (sVar1 == 0) {
    *param_2 = local_4e;
  }
  else {
    *param_2 = 0;
  }
  return sVar1;
}



// Function: FUN_000002de at 000002de
// Size: 78 bytes

short FUN_000002de(int *param_1,uint *param_2)

{
  short sVar1;
  undefined1 auStack_7e [62];
  ushort local_40;
  
  func_0x00001ce0(auStack_7e,0x7a);
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1,auStack_7e);
  if (sVar1 == 0) {
    *param_2 = (uint)local_40;
  }
  else {
    *param_2 = 0;
  }
  return sVar1;
}



// Function: FUN_0000032c at 0000032c
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000032c(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_2 + 0x1c) = 0xffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000358 at 00000358
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000424 at 00000424
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000424(int param_1)

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



// Function: FUN_00000450 at 00000450
// Size: 104 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000450(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint local_4c;
  uint local_48;
  undefined1 auStack_44 [64];
  
  local_4c = 0x40;
  local_48 = *(byte *)(param_1 + 10) + 1;
  if (local_48 < 0x40) {
    puVar4 = &local_48;
  }
  else {
    puVar4 = &local_4c;
  }
  puVar2 = auStack_44;
  puVar3 = (undefined1 *)(param_1 + 10);
  for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 **)(param_2 + 0x12) = auStack_44;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000004ca at 000004ca
// Size: 30 bytes

undefined2 FUN_000004ca(undefined4 param_1,undefined4 param_2)

{
  undefined2 local_c;
  
  func_0x00007618();
  local_c = (undefined2)((uint)param_2 >> 0x10);
  return local_c;
}



// Function: FUN_000004e8 at 000004e8
// Size: 34 bytes

undefined2 FUN_000004e8(int param_1,undefined4 param_2)

{
  func_0x00007628(param_2,*(undefined2 *)(param_1 + 0x60));
  return (short)((uint)param_2 >> 0x10);
}



// Function: FUN_0000050a at 0000050a
// Size: 68 bytes

short FUN_0000050a(int *param_1)

{
  short sVar1;
  undefined1 auStack_70 [108];
  
  sVar1 = (**(code **)(*param_1 + 0xa4))(param_1,auStack_70);
  if (sVar1 == 0) {
    sVar1 = (**(code **)(*param_1 + 0x140))(param_1,auStack_70);
  }
  return sVar1;
}



// Function: FUN_0000054e at 0000054e
// Size: 24 bytes

void FUN_0000054e(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x5b) = param_2._0_1_;
  *(undefined1 *)(param_1 + 0x5c) = param_2._2_1_;
  return;
}



// Function: FUN_00000566 at 00000566
// Size: 34 bytes

undefined2 FUN_00000566(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00007600(param_2,param_3);
  return (short)((uint)param_2 >> 0x10);
}



// Function: FUN_00000588 at 00000588
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00000588(int *param_1,byte *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar3;
  byte **ppbVar4;
  byte *local_21c;
  byte local_204 [256];
  byte local_104 [256];
  
  local_21c = param_2;
  iVar2 = (**(code **)(*(int *)param_2 + 0x124))();
  if ((char)iVar2 == '\0') {
    if (*(char *)((int)param_1 + 0x12a) != '\0') {
      iVar2 = 0x78;
      *param_3 = *param_3 + 0x78;
    }
  }
  else {
    local_104[0] = 0;
    local_204[0] = 0;
    local_21c = local_104;
    (**(code **)(*_DAT_000266a8 + 0x29c))();
    (**(code **)(*param_1 + 0x1e8))(param_1,local_204);
    ppbVar4 = (byte **)&stack0xfffffde8;
    if (local_204[0] == 0) {
      iVar2 = (int)(local_104[0] == 0);
      if (local_104[0] != 0) {
        iVar2 = local_104[0] + 0x19;
        *param_4 = iVar2 + *param_4;
      }
    }
    else {
      iVar2 = local_204[0] + 0x19;
      *param_4 = iVar2 + *param_4;
    }
    if ((*(char *)((int)param_1 + 0x12a) != '\0') && (*(int *)((int)param_1 + 0x12e) != 0)) {
      iVar2 = *(int *)((int)param_1 + 0x12e);
      func_0x000075d0();
      ppbVar4 = &local_21c;
      iVar2 = iVar2 + 0x18;
      *param_4 = iVar2 + *param_4;
    }
    if (*(char *)((int)param_1 + 299) != '\0') {
      *(int **)((int)ppbVar4 + -4) = param_1;
      pcVar1 = *(code **)(**(int **)((int)ppbVar4 + -4) + 0x17c);
      *(undefined4 *)((int)ppbVar4 + -8) = 0x648;
      (*pcVar1)();
      iVar2 = 0;
      if (extraout_A0 != 0) {
        *(undefined4 *)((int)ppbVar4 + -4) = 0x16;
        *(undefined4 *)((int)ppbVar4 + -8) = 0x65a;
        func_0x000073b0();
        uVar3 = 0;
        if (extraout_A0_00 != 0) {
          *(int *)((int)ppbVar4 + -4) = extraout_A0_00;
          *(undefined4 *)((int)ppbVar4 + -8) = 0x672;
          func_0x00003160();
          uVar3 = extraout_A0_01;
        }
        *(undefined4 *)((int)ppbVar4 + -4) = uVar3;
        *(undefined4 *)((int)ppbVar4 + -8) = 0x67e;
        func_0x00003168();
        *(undefined1 *)((int)ppbVar4 + -6) = 0;
        *(int *)((int)ppbVar4 + -10) = extraout_A0;
        *(undefined4 *)((int)ppbVar4 + -0xe) = uVar3;
        pcVar1 = *(code **)(**(int **)((int)ppbVar4 + -0xe) + 0x100);
        *(undefined4 *)((int)ppbVar4 + -0x12) = 0x68e;
        (*pcVar1)();
        *(undefined4 *)((int)ppbVar4 + -0x12) = uVar3;
        pcVar1 = *(code **)(**(int **)((int)ppbVar4 + -0x12) + 0x60);
        *(undefined4 *)((int)ppbVar4 + -0x16) = 0x69a;
        iVar2 = (*pcVar1)();
        *param_4 = iVar2 + 0x18 + *param_4;
        *(undefined4 *)((int)ppbVar4 + -0x16) = uVar3;
        pcVar1 = *(code **)(**(int **)((int)ppbVar4 + -0x16) + 0x4c);
        *(undefined4 *)((int)ppbVar4 + -0x1a) = 0x6ac;
        iVar2 = (*pcVar1)();
      }
    }
  }
  return iVar2;
}



// Function: FUN_000006c8 at 000006c8
// Size: 8 bytes

void FUN_000006c8(void)

{
  return;
}



// Function: FUN_000006d0 at 000006d0
// Size: 106 bytes

void FUN_000006d0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x1c8))(param_1,param_2);
  if ((*(char *)((int)param_1 + 0x12a) != '\0') && (*(int *)((int)param_1 + 0x12e) != 0)) {
    (**(code **)(*param_1 + 0x1cc))(param_1,param_2);
  }
  if (*(char *)((int)param_1 + 299) != '\0') {
    (**(code **)(*param_1 + 0x1d0))(param_1,param_2);
  }
  return;
}



// Function: FUN_0000073a at 0000073a
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000073a(int *param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  char local_290 [256];
  char local_190 [396];
  
  cVar1 = (**(code **)(*param_2 + 0x124))();
  if (cVar1 != '\0') {
    local_190[0] = '\0';
    local_290[0] = '\0';
    (**(code **)(*_DAT_000266a8 + 0x29c))((short)_DAT_000266a8,(char)local_190);
    (**(code **)(*param_1 + 0x1e8))((short)param_1,(short)local_290);
    if (local_290[0] != '\0') {
      uVar2 = 0x7a2;
      FUN_00001ea8();
      func_0x00007310((short)local_290,uVar2);
      return;
    }
    if (local_190[0] != '\0') {
      uVar2 = 0x874;
      FUN_00001ea8();
      func_0x00007310((short)local_190,uVar2);
      return;
    }
  }
  return;
}



// Function: FUN_0000092c at 0000092c
// Size: 114 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000092c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x12e) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x124))();
    if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_8 = *(undefined4 *)(param_1 + 0x12e);
    FUN_00001eb0(&local_8);
    FUN_00001e28(local_8,0x50524e54);
    FUN_00001c08();
  }
  return;
}



// Function: FUN_000009d6 at 000009d6
// Size: 402 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000009d6(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_A0;
  undefined4 extraout_A0_00;
  int extraout_A0_01;
  int *extraout_A0_02;
  int *piVar3;
  undefined2 uVar4;
  undefined1 auStack_90 [52];
  undefined2 local_5c;
  undefined4 local_5a;
  undefined1 *local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x17c))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = (**(code **)(*param_2 + 0x124))();
    if ((char)uVar1 != '\0') {
      FUN_00001e98(0x32);
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar2 = func_0x000076a8((short)auStack_4a);
      uVar4 = (undefined2)((uint)extraout_A0_00 >> 0x10);
      if (iVar2 == 0) {
        func_0x000073b0(0x20);
        piVar3 = (int *)0x0;
        if (extraout_A0_01 != 0) {
          func_0x00003138((char)extraout_A0_01);
          piVar3 = extraout_A0_02;
        }
        uVar4 = (undefined2)((uint)piVar3 >> 0x10);
        func_0x00003140((short)piVar3,(short)extraout_A0_00,10);
        local_5c = 0;
        local_5a = 0;
        local_52 = 0;
        local_4e = 0;
        local_56 = _DAT_00025f52;
        _DAT_00025f52 = auStack_90;
        iVar2 = func_0x000076a8((short)auStack_90);
        if (iVar2 == 0) {
          (**(code **)(*piVar3 + 0x100))((short)piVar3,(short)extraout_A0);
          (**(code **)(*piVar3 + 0x4c))();
          _DAT_00025f52 = local_56;
        }
        else {
          func_0x00000e10((char)piVar3);
          FUN_00001c10((short)((uint)local_5a >> 0x10),uVar4);
        }
        FUN_00001e28((short)extraout_A0_00,0x5347,2);
        uVar1 = FUN_00001c08();
        _DAT_00025f52 = local_10;
      }
      else {
        FUN_00001d08((char)extraout_A0_00);
        uVar1 = FUN_00001c10((short)((uint)local_14 >> 0x10),uVar4);
      }
    }
  }
  return uVar1;
}



// Function: FUN_00000b68 at 00000b68
// Size: 172 bytes

void FUN_00000b68(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(int *)param_1[0x4e] + 0x90))();
  if ((cVar2 == '\0') || ((param_2 != 0x1e && (param_2 != 0x1f)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (param_2 == 0x21)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0x1dc))((short)param_1,0xc);
  }
  if ((*(char *)((int)param_1 + 0x133) != '\0') || (param_2 != 0x21)) {
    (**(code **)(*param_1 + 0x118))();
  }
  (**(code **)(*(int *)param_1[0x4e] + 0x80))((int *)param_1[0x4e],(short)param_2);
  return;
}



// Function: FUN_00000c14 at 00000c14
// Size: 84 bytes

void FUN_00000c14(int *param_1,undefined4 param_2)

{
  undefined4 in_stack_ffffffe4;
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x154))(param_1,0);
  uVar1 = CONCAT13(1,(int3)CONCAT22((short)((uint)in_stack_ffffffe4 >> 0x10),
                                    (ushort)(byte)in_stack_ffffffe4));
  func_0x00007638(uVar1,param_2,(int)param_1 + 0x1e);
  if ((short)((uint)uVar1 >> 0x10) != 0) {
    (**(code **)(*param_1 + 400))(param_1,param_2);
  }
  return;
}



// Function: FUN_00000c68 at 00000c68
// Size: 156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c68(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  code *pcVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_5 = 0xe865;
  *param_6 = _DAT_00025b72;
  if ((param_2 == 0x1e) || (param_2 == 0x20)) {
    sVar2 = 1;
  }
  else if (param_2 == 0x21) {
    sVar2 = 2;
  }
  else {
    sVar2 = 0;
  }
  if (sVar2 == 0) {
    local_c = 0xc316;
    local_10 = param_3;
    func_0x00007350();
    puVar3 = (undefined4 *)&stack0xfffffff8;
  }
  else {
    local_c = param_3;
    puVar3 = &local_10;
    local_10 = CONCAT22(sVar2,0xfa);
    func_0x00007658();
  }
  *(undefined4 *)((int)puVar3 + -4) = param_4;
  *(undefined4 *)((int)puVar3 + -8) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar3 + -8) + 0x18c);
  *(undefined4 *)((int)puVar3 + -0xc) = 0xcda;
  (*pcVar1)();
  *param_7 = 0;
  *param_8 = _DAT_0000a23c;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = 0;
  return;
}



// Function: FUN_00000d04 at 00000d04
// Size: 24 bytes

void FUN_00000d04(undefined4 param_1,undefined4 param_2)

{
  func_0x00007350(param_2,0xc316);
  return;
}



// Function: FUN_00000d1c at 00000d1c
// Size: 38 bytes

void FUN_00000d1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x1b0))(*(int **)(param_1 + 4),param_2,param_3,param_4);
  return;
}



// Function: FUN_00000d42 at 00000d42
// Size: 72 bytes

void FUN_00000d42(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  
  (**(code **)(*(int *)param_1[1] + 0x1b4))((int *)param_1[1],param_1[2],param_2,param_3);
  cVar1 = (**(code **)(*param_1 + 0x94))();
  if (cVar1 != '\0') {
    *param_3 = *param_3 + 0x11e;
  }
  return;
}



// Function: FUN_00000d8a at 00000d8a
// Size: 34 bytes

void FUN_00000d8a(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x1c4))(*(int **)(param_1 + 4),param_2);
  return;
}



// Function: FUN_00000e00 at 00000e00
// Size: 2 bytes

void FUN_00000e00(void)

{
  return;
}



// Function: FUN_00000e02 at 00000e02
// Size: 174 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e02(int param_1,byte *param_2)

{
  uint uVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_144;
  byte abStack_143 [63];
  byte local_104;
  byte abStack_103 [255];
  
  local_104 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xd0))(*(int **)(param_1 + 8),&local_104);
  }
  if (local_104 == 0) {
    (**(code **)(*_DAT_000266a8 + 0x29c))(_DAT_000266a8,&local_104);
  }
  if (0x3f < local_104) {
    local_104 = 0x3f;
  }
  local_144 = local_104;
  pbVar3 = abStack_143;
  pbVar4 = abStack_103;
  for (uVar1 = (uint)local_104; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pbVar3 = *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  sVar2 = 0xf;
  pbVar3 = &local_144;
  pbVar4 = param_2;
  do {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar3;
    sVar2 = sVar2 + -1;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  } while (sVar2 != -1);
  if (0x13 < *param_2) {
    *param_2 = 0x13;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000ef4 at 00000ef4
// Size: 38 bytes

undefined4 FUN_00000ef4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x124))();
  }
  return uVar1;
}



// Function: FUN_00000f1a at 00000f1a
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f1a(int param_1,undefined4 param_2)

{
  undefined1 local_330 [2];
  undefined2 uStack_32e;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined1 local_2c8 [4];
  undefined1 auStack_2c4 [100];
  undefined1 auStack_260 [2];
  undefined1 auStack_25e [256];
  undefined4 local_15e;
  undefined4 local_15a;
  undefined1 auStack_156 [78];
  undefined1 local_108 [256];
  undefined4 *local_8;
  
  local_108[0] = 0;
  func_0x00007208((char)auStack_156);
  func_0x00007320((short)auStack_25e,0xc116);
  (**(code **)(**(int **)(param_1 + 4) + 0x1d8))
            (*(int **)(param_1 + 4),param_2,local_108,auStack_25e,auStack_260,auStack_156,&local_15a
             ,&local_15e,auStack_2c4,(short)local_2c8,(short)&local_8);
  FUN_00001cf0(0xfffffffe,(short)_DAT_00025cd0,(short)_DAT_000267d2);
  FUN_00001c00();
  if (local_8 == (undefined4 *)0x0) {
    local_8 = &param_2;
  }
  if (DAT_00025b38 != '\0') {
    (**(code **)(*_DAT_000264b2 + 0xe8))();
    func_0x00007310((short)local_108);
    return;
  }
  FUN_00001f10(local_15a._2_2_,(short)local_8,(char)auStack_2d8);
  FUN_00001f10(local_15e._2_2_,(short)local_8,(char)auStack_2e8);
  (**(code **)(*_DAT_000264b2 + 0xe8))();
  func_0x00007210((short)auStack_156,(short)local_330);
  func_0x00007310((short)local_108,uStack_32e);
  return;
}



// Function: FUN_0000121a at 0000121a
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000121a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined2 uVar7;
  int iVar4;
  short sVar8;
  int iVar5;
  int iVar6;
  undefined4 uVar9;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iStack_15e;
  undefined4 uStack_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined1 local_14e [256];
  undefined1 auStack_4e [52];
  undefined2 uStack_1a;
  int iStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  local_152 = 0;
  local_156 = 0;
  local_14e[0] = 0;
  piStack_8 = (int *)0x0;
  uStack_1a = 0;
  iStack_18 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  puStack_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar3 = func_0x000076a8((char)auStack_4e);
  if (iVar3 == 0) {
    FUN_00000e00();
    uVar11 = (undefined1)((uint)param_2 >> 0x10);
    piVar1 = (int *)param_1[1];
    uVar7 = (undefined2)((uint)piVar1 >> 0x10);
    (**(code **)(*piVar1 + 0x1a8))((char)piVar1,(char)param_2);
    piStack_8 = extraout_A0;
    FUN_00000e00(uVar7,uVar11);
    uVar11 = SUB41(piStack_8,0);
    if (param_3._0_1_ == '\0') {
      uVar12 = (undefined1)param_1[2];
      (**(code **)(*piStack_8 + 0x68))(uVar11,uVar12);
    }
    else {
      (**(code **)(*param_1 + 0x7c))((char)param_1,(char)param_2,(char)((uint)piStack_8 >> 0x10));
      uVar12 = uVar11;
    }
    uVar11 = SUB41(piStack_8,0);
    (**(code **)(*piStack_8 + 0x154))(uVar11,uVar12);
    uVar10 = (undefined2)param_2;
    (**(code **)(*param_1 + 0x68))(param_1,(short)piStack_8,uVar10,(short)&param_4);
    uVar7 = (**(code **)(*piStack_8 + 0xf4))((short)piStack_8,(short)&iStack_15e);
    FUN_00001c00();
    iStack_15e = iStack_15e + -1;
    (**(code **)(*piStack_8 + 0xf0))((short)piStack_8,(short)&uStack_15a);
    FUN_00001c00(uVar7);
    uVar7 = SUB42(param_1,0);
    (**(code **)(*param_1 + 0x6c))(uVar7,(short)&local_152,(short)&local_156);
    iVar3 = FUN_00001240(local_152,uStack_15a);
    iVar4 = FUN_00001240(local_156,uStack_15a);
    if (iStack_15e < iVar3 + iVar4) {
      bVar2 = false;
      uVar11 = SUB41(&local_152,0);
      sVar8 = (**(code **)(*piStack_8 + 0xd8))((short)piStack_8,uVar11,(char)&local_156);
      if (sVar8 == 0) {
        uVar11 = (undefined1)local_156;
        iVar5 = FUN_00001240(uVar11,(char)uStack_15a._2_2_);
        iVar6 = FUN_00001240((short)local_152,uStack_15a._2_2_);
        if (iVar3 + iVar4 <= iStack_15e + iVar5 + iVar6) {
          if ((*(char *)((int)param_1 + 0xd) == '\x01') || (*(char *)((int)param_1 + 0xd) == '\x03')
             ) {
            (**(code **)(*piStack_8 + 0xd0))((char)piStack_8,(char)local_14e);
            func_0x00007310(0x5b76,(short)local_14e);
            return;
          }
          if (*(char *)((int)param_1 + 0xd) == '\x02') {
            bVar2 = true;
          }
        }
      }
      else if (sVar8 != -0x2b) {
        uVar11 = (undefined1)sVar8;
        FUN_00001c10(0);
      }
      if (bVar2) {
        (**(code **)(*param_1 + 0x84))(uVar7,uVar10,uVar11,(char)piStack_8);
      }
      else {
        FUN_00001c10(0);
      }
    }
    else if ((*(char *)((int)param_1 + 0xd) == '\x01') || (*(char *)((int)param_1 + 0xd) == '\0')) {
      (**(code **)(*param_1 + 0x88))(uVar7,uVar10,uVar11,(char)piStack_8);
    }
    else {
      (**(code **)(*param_1 + 0x84))(uVar7,uVar10,uVar11,(char)piStack_8);
    }
    if (param_4._0_1_ == '\0') {
      (**(code **)(*piStack_8 + 0xd0))((char)piStack_8,(char)local_14e);
      (**(code **)(*(int *)param_1[1] + 0x1d4))((short)(int *)param_1[1],(short)local_14e);
      *(undefined1 *)(param_1 + 3) = 1;
      (**(code **)(*(int *)param_1[2] + 0x68))((int *)param_1[2],(short)piStack_8);
      (**(code **)(*(int *)param_1[2] + 300))();
      (**(code **)(*(int *)param_1[2] + 0x94))();
      FUN_00001c00();
    }
    _DAT_00025f52 = puStack_14;
  }
  else {
    FUN_00000e00();
    if (piStack_8 != (int *)0x0) {
      (**(code **)(*piStack_8 + 0xec))();
      if (iStack_18 == 0) {
        (**(code **)(*piStack_8 + 0xd0))((char)piStack_8,0xa8);
      }
      func_0x00000e10((char)piStack_8);
      piStack_8 = extraout_A0_00;
    }
    if (param_3._0_1_ == '\0') {
      uVar9 = 0x820002;
    }
    else if (param_4._0_1_ == '\0') {
      uVar9 = 0x820007;
    }
    else {
      uVar9 = 0x820008;
    }
    uVar12 = (undefined1)uVar9;
    uVar11 = (undefined1)iStack_18;
    uVar7 = uStack_1a;
    FUN_00001be8((char)((uint)iStack_18 >> 0x10),(char)((uint)uVar9 >> 0x10));
    FUN_00001c10((short)((uint)iStack_18 >> 0x10),uVar7,uVar11,uVar12);
  }
  (**(code **)(*piStack_8 + 0xec))();
  (**(code **)(*piStack_8 + 0x4c))();
  return;
}



// Function: FUN_00001240 at 00001240
// Size: 936 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001240(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined1 uVar9;
  undefined2 uVar7;
  undefined4 uVar5;
  short sVar8;
  int iVar6;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  int *unaff_A2;
  int unaff_A6;
  undefined1 uVar10;
  
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(undefined2 *)(unaff_A6 + -0x16) = 0;
  *(undefined4 *)(unaff_A6 + -0x14) = 0;
  *(undefined4 *)(unaff_A6 + -0x10) = 0;
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(int *)(unaff_A6 + -0x10) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x4a;
  cVar2 = (char)unaff_A6;
  iVar4 = func_0x000076a8(cVar2 + -0x4a);
  if (iVar4 == 0) {
    uVar9 = FUN_00000e00();
    *(undefined1 *)(unaff_A6 + -0x15c) = uVar9;
    (**(code **)(*(int *)unaff_A2[1] + 0x1a8))();
    *(undefined4 *)(unaff_A6 + -4) = extraout_A0;
    FUN_00000e00();
    if (*(char *)(unaff_A6 + -0x15b) == '\0') {
      uVar9 = (undefined1)unaff_A2[2];
      (**(code **)(**(int **)(unaff_A6 + -4) + 0x68))((char)*(int **)(unaff_A6 + -4),uVar9);
    }
    else {
      uVar9 = (undefined1)*(undefined4 *)(unaff_A6 + -4);
      (**(code **)(*unaff_A2 + 0x7c))();
    }
    (**(code **)(**(int **)(unaff_A6 + -4) + 0x154))((char)*(int **)(unaff_A6 + -4),uVar9);
    (**(code **)(*unaff_A2 + 0x68))();
    sVar3 = (short)unaff_A6;
    uVar7 = (**(code **)(**(int **)(unaff_A6 + -4) + 0xf4))
                      ((short)*(int **)(unaff_A6 + -4),sVar3 + -0x15a);
    FUN_00001c00();
    *(int *)(unaff_A6 + -0x15a) = *(int *)(unaff_A6 + -0x15a) + -1;
    (**(code **)(**(int **)(unaff_A6 + -4) + 0xf0))((short)*(int **)(unaff_A6 + -4),sVar3 + -0x156);
    FUN_00001c00(uVar7);
    (**(code **)(*unaff_A2 + 0x6c))();
    uVar5 = FUN_00001240(*(undefined4 *)(unaff_A6 + -0x14e),*(undefined4 *)(unaff_A6 + -0x156));
    *(undefined4 *)(unaff_A6 + -0x160) = uVar5;
    iVar4 = FUN_00001240(*(undefined4 *)(unaff_A6 + -0x152),*(undefined4 *)(unaff_A6 + -0x156));
    iVar4 = *(int *)(unaff_A6 + -0x160) + iVar4;
    if (*(int *)(unaff_A6 + -0x15a) < iVar4) {
      bVar1 = false;
      sVar8 = (**(code **)(**(int **)(unaff_A6 + -4) + 0xd8))
                        ((short)*(int **)(unaff_A6 + -4),cVar2 + -0x4e,cVar2 + -0x52);
      if (sVar8 == 0) {
        uVar5 = FUN_00001240((char)*(undefined4 *)(unaff_A6 + -0x152),
                             (char)*(undefined4 *)(unaff_A6 + -0x156));
        *(undefined4 *)(unaff_A6 + -0x160) = uVar5;
        iVar6 = FUN_00001240((short)*(undefined4 *)(unaff_A6 + -0x14e),
                             (short)*(undefined4 *)(unaff_A6 + -0x156));
        if (iVar4 <= *(int *)(unaff_A6 + -0x15a) + *(int *)(unaff_A6 + -0x160) + iVar6) {
          if ((*(char *)((int)unaff_A2 + 0xd) == '\x01') ||
             (*(char *)((int)unaff_A2 + 0xd) == '\x03')) {
            (**(code **)(**(int **)(unaff_A6 + -4) + 0xd0))
                      ((char)*(int **)(unaff_A6 + -4),cVar2 + -0x4a);
            func_0x00007310(0x5b76,sVar3 + -0x14a);
            return;
          }
          if (*(char *)((int)unaff_A2 + 0xd) == '\x02') {
            bVar1 = true;
          }
        }
      }
      else if (sVar8 != -0x2b) {
        FUN_00001c10(0);
      }
      if (bVar1) {
        (**(code **)(*unaff_A2 + 0x84))();
      }
      else {
        FUN_00001c10(0);
      }
    }
    else if ((*(char *)((int)unaff_A2 + 0xd) == '\x01') || (*(char *)((int)unaff_A2 + 0xd) == '\0'))
    {
      (**(code **)(*unaff_A2 + 0x88))();
    }
    else {
      (**(code **)(*unaff_A2 + 0x84))();
    }
    if (*(char *)(unaff_A6 + 0x14) == '\0') {
      (**(code **)(**(int **)(unaff_A6 + -4) + 0xd0))((char)*(int **)(unaff_A6 + -4),cVar2 + -0x4a);
      (**(code **)(*(int *)unaff_A2[1] + 0x1d4))((short)(int *)unaff_A2[1],sVar3 + -0x14a);
      *(undefined1 *)(unaff_A2 + 3) = 1;
      (**(code **)(*(int *)unaff_A2[2] + 0x68))
                ((int *)unaff_A2[2],(short)*(undefined4 *)(unaff_A6 + -4));
      (**(code **)(*(int *)unaff_A2[2] + 300))();
      (**(code **)(*(int *)unaff_A2[2] + 0x94))();
      FUN_00001c00();
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0x10);
  }
  else {
    FUN_00000e00();
    if (*(int *)(unaff_A6 + -4) != 0) {
      (**(code **)(**(int **)(unaff_A6 + -4) + 0xec))();
      if (*(int *)(unaff_A6 + -0x14) == 0) {
        (**(code **)(**(int **)(unaff_A6 + -4) + 0xd0))((char)*(int **)(unaff_A6 + -4),0xa8);
      }
      func_0x00000e10((char)*(undefined4 *)(unaff_A6 + -4));
      *(undefined4 *)(unaff_A6 + -4) = extraout_A0_00;
    }
    if (*(char *)(unaff_A6 + -0x15b) == '\0') {
      uVar5 = 0x820002;
    }
    else if (*(char *)(unaff_A6 + 0x14) == '\0') {
      uVar5 = 0x820007;
    }
    else {
      uVar5 = 0x820008;
    }
    uVar10 = (undefined1)uVar5;
    uVar9 = (undefined1)*(undefined4 *)(unaff_A6 + -0x14);
    uVar7 = *(undefined2 *)(unaff_A6 + -0x16);
    FUN_00001be8((char)((uint)*(undefined4 *)(unaff_A6 + -0x14) >> 0x10),(char)((uint)uVar5 >> 0x10)
                );
    FUN_00001c10((short)((uint)*(undefined4 *)(unaff_A6 + -0x14) >> 0x10),uVar7,uVar9,uVar10);
  }
  (**(code **)(**(int **)(unaff_A6 + -4) + 0xec))();
  (**(code **)(**(int **)(unaff_A6 + -4) + 0x4c))();
  return;
}



// Function: FUN_00001638 at 00001638
// Size: 354 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001638(int *param_1,undefined2 param_2,undefined4 param_3,int *param_4)

{
  char cVar4;
  short sVar2;
  int iVar1;
  undefined2 uVar3;
  undefined1 auStack_ba [108];
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_4e = param_4;
  cVar4 = (**(code **)(*param_1 + 0x74))((short)param_1,param_2,(char)((uint)auStack_ba >> 0x10));
  (**(code **)(*param_1 + 0x70))();
  sVar2 = (**(code **)(*local_4e + 0x8c))();
  if ((sVar2 != 0) && (sVar2 != -0x2b)) {
    FUN_00001c10(0);
  }
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*local_4e + 0x80))();
    FUN_00001c00();
    if (cVar4 != '\0') {
      (**(code **)(*local_4e + 0x140))((char)local_4e,(short)auStack_ba);
      FUN_00001c00();
    }
    uVar3 = (**(code **)(*local_4e + 0x90))();
    FUN_00001c00();
    (**(code **)(*param_1 + 100))((short)param_1,(char)local_4e,uVar3);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*local_4e + 0x70))();
    (**(code **)(*local_4e + 0x8c))();
    FUN_00001c10((short)((uint)local_14 >> 0x10));
  }
  (**(code **)(*local_4e + 0x70))();
  FUN_00001c00();
  return;
}



// Function: FUN_0000179a at 0000179a
// Size: 116 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000179a(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 local_d6 [66];
  undefined1 local_94 [70];
  int *local_4e;
  
  local_4e = param_4;
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  (**(code **)(*local_4e + 0xc0))(local_4e,local_94);
  local_d6[0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,local_d6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001b32 at 00001b32
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001b32(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  iVar2 = (**(code **)(*param_1 + 0x60))();
  if (iVar2 < param_3 + iVar1) {
    (**(code **)(*param_1 + 100))(param_1,param_3 + iVar1);
  }
  (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)((int)param_1 + 0xe));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001bb0 at 00001bb0
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bb0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  undefined1 uVar3;
  undefined1 auStack_14c [257];
  char local_4b;
  undefined1 auStack_4a [52];
  short sStack_16;
  int iStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_4b = '\0';
  while (local_4b == '\0') {
    sStack_16 = 0;
    iStack_14 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    puStack_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = func_0x000076a8(auStack_4a);
    if (iVar2 == 0) {
      local_4b = '\x01';
      uVar3 = SUB41(param_1,0);
      FUN_00000b68(uVar3,param_2);
      piVar1 = _DAT_00027fb8;
      if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
        if (*(short *)(_DAT_0002884c + 0x124) != 0) {
          *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
          (**(code **)(*piVar1 + 0x26c))();
          (**(code **)(*piVar1 + 0x268))();
          piVar1 = _DAT_00027fc0;
          *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
          (**(code **)(*piVar1 + 0x26c))();
          (**(code **)(*piVar1 + 0x268))();
        }
        *(undefined1 *)((int)param_1 + 0x1e1) = 0;
        auStack_14c[0] = 0;
        (**(code **)(*param_1 + 0x18c))(uVar3,auStack_14c);
        func_0x000072f8((short)auStack_14c);
        func_0x00002b68(0xdfc8,extraout_A0w);
        func_0x000073b0(0x32);
        if (extraout_A0 != (undefined4 *)0x0) {
          uVar3 = 0xcc;
          func_0x00002428(extraout_A0);
          *extraout_A0 = 0x1ee88;
          *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
        }
        func_0x00002430(extraout_A0,10,(short)_DAT_000297f4,uVar3,0);
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
        (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0);
      }
      _DAT_00025f52 = puStack_10;
    }
    else if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
      FUN_00001c10();
    }
    else {
      if ((iStack_14 != 0x820000) && (sStack_16 != -0x2c)) {
        (**(code **)(*_DAT_000297f4 + 0x270))();
      }
      if (sStack_16 == -0x2c) {
        local_4b = '\0';
        param_2 = 0x20;
      }
      else {
        (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
        func_0x00001bf0(extraout_A0_00);
        (**(code **)(*extraout_A0_00 + 0x194))();
        iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
        (**(code **)(*extraout_A0_00 + 0x3a0))();
        if (iVar2 == 0x73617665) {
          local_4b = '\0';
          param_2 = 0x20;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x1e1) = 0;
          *(undefined4 *)((int)param_1 + 0x126) = 0;
          uVar3 = 0xe2;
          func_0x000073b0(0x32);
          if (extraout_A0_01 != (undefined4 *)0x0) {
            uVar3 = 0xf8;
            func_0x00002428(extraout_A0_01);
            *extraout_A0_01 = 0x1ee88;
            *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
          }
          func_0x00002430(extraout_A0_01,10,(short)_DAT_000297f4,uVar3,0);
          *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
          (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0_01);
        }
      }
    }
  }
  return;
}



// Function: FUN_00001be8 at 00001be8
// Size: 23 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001be8(void)

{
  int *piVar1;
  int iVar2;
  int in_A0;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  undefined1 uVar3;
  
  while( true ) {
    _DAT_00025f52 = in_A0;
    iVar2 = func_0x000076a8(unaff_A6 + -0x46);
    if (iVar2 == 0) {
      *(undefined1 *)(unaff_A6 + -0x47) = 1;
      FUN_00000b68();
      piVar1 = _DAT_00027fb8;
      if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
        if (*(short *)(_DAT_0002884c + 0x124) != 0) {
          *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
          (**(code **)(*piVar1 + 0x26c))();
          (**(code **)(*piVar1 + 0x268))();
          piVar1 = _DAT_00027fc0;
          *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
          (**(code **)(*piVar1 + 0x26c))();
          (**(code **)(*piVar1 + 0x268))();
        }
        *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
        *(undefined1 *)(unaff_A6 + -0x148) = 0;
        (**(code **)(*unaff_A2 + 0x18c))();
        func_0x000072f8((short)unaff_A6 + -0x148);
        func_0x00002b68(0xdfc8,extraout_A0w);
        func_0x000073b0(0x32);
        if (extraout_A0 != (undefined4 *)0x0) {
          *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
          func_0x00002428(extraout_A0);
          *extraout_A0 = 0x1ee88;
          *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
        }
        func_0x00002430(extraout_A0,10,(short)_DAT_000297f4);
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
        (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0);
      }
      _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
    }
    else if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
      FUN_00001c10();
    }
    else {
      if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
        (**(code **)(*_DAT_000297f4 + 0x270))();
      }
      if (*(short *)(unaff_A6 + -0x12) == -0x2c) {
        *(undefined1 *)(unaff_A6 + -0x47) = 0;
      }
      else {
        (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
        func_0x00001bf0(extraout_A0_00);
        (**(code **)(*extraout_A0_00 + 0x194))();
        iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
        (**(code **)(*extraout_A0_00 + 0x3a0))();
        if (iVar2 == 0x73617665) {
          *(undefined1 *)(unaff_A6 + -0x47) = 0;
        }
        else {
          *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
          *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
          uVar3 = 0xe2;
          func_0x000073b0(0x32);
          if (extraout_A0_01 != (undefined4 *)0x0) {
            *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
            uVar3 = 0xf8;
            func_0x00002428(extraout_A0_01);
            *extraout_A0_01 = 0x1ee88;
            *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
          }
          func_0x00002430(extraout_A0_01,10,(short)_DAT_000297f4,uVar3,0);
          *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
          (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0_01);
        }
      }
    }
    if (*(char *)(unaff_A6 + -0x47) != '\0') break;
    *(undefined2 *)(unaff_A6 + -0x12) = 0;
    *(undefined4 *)(unaff_A6 + -0x10) = 0;
    *(undefined4 *)(unaff_A6 + -0xc) = 0;
    *(undefined4 *)(unaff_A6 + -8) = 0;
    *(undefined4 *)(unaff_A6 + -4) = 0;
    *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
    in_A0 = unaff_A6 + -0x46;
  }
  return;
}



// Function: FUN_00001c00 at 00001c00
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c00(void)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  undefined1 uVar3;
  
  do {
    *(undefined1 *)(unaff_A6 + -0x47) = 1;
    FUN_00000b68();
    piVar1 = _DAT_00027fb8;
    if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
      if (*(short *)(_DAT_0002884c + 0x124) != 0) {
        *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
        (**(code **)(*piVar1 + 0x26c))();
        (**(code **)(*piVar1 + 0x268))();
        piVar1 = _DAT_00027fc0;
        *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
        (**(code **)(*piVar1 + 0x26c))();
        (**(code **)(*piVar1 + 0x268))();
      }
      *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
      *(undefined1 *)(unaff_A6 + -0x148) = 0;
      (**(code **)(*unaff_A2 + 0x18c))();
      func_0x000072f8((short)unaff_A6 + -0x148);
      func_0x00002b68(0xdfc8,extraout_A0w);
      func_0x000073b0(0x32);
      if (extraout_A0 != (undefined4 *)0x0) {
        *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
        func_0x00002428(extraout_A0);
        *extraout_A0 = 0x1ee88;
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      }
      func_0x00002430(extraout_A0,10,(short)_DAT_000297f4);
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
      (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0);
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
    while( true ) {
      if (*(char *)(unaff_A6 + -0x47) != '\0') {
        return;
      }
      *(undefined2 *)(unaff_A6 + -0x12) = 0;
      *(undefined4 *)(unaff_A6 + -0x10) = 0;
      *(undefined4 *)(unaff_A6 + -0xc) = 0;
      *(undefined4 *)(unaff_A6 + -8) = 0;
      *(undefined4 *)(unaff_A6 + -4) = 0;
      *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
      _DAT_00025f52 = unaff_A6 + -0x46;
      iVar2 = func_0x000076a8(unaff_A6 + -0x46);
      if (iVar2 == 0) break;
      if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
        FUN_00001c10();
      }
      else {
        if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
          (**(code **)(*_DAT_000297f4 + 0x270))();
        }
        if (*(short *)(unaff_A6 + -0x12) == -0x2c) {
          *(undefined1 *)(unaff_A6 + -0x47) = 0;
        }
        else {
          (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
          func_0x00001bf0(extraout_A0_00);
          (**(code **)(*extraout_A0_00 + 0x194))();
          iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
          (**(code **)(*extraout_A0_00 + 0x3a0))();
          if (iVar2 == 0x73617665) {
            *(undefined1 *)(unaff_A6 + -0x47) = 0;
          }
          else {
            *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
            *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
            uVar3 = 0xe2;
            func_0x000073b0(0x32);
            if (extraout_A0_01 != (undefined4 *)0x0) {
              *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
              uVar3 = 0xf8;
              func_0x00002428(extraout_A0_01);
              *extraout_A0_01 = 0x1ee88;
              *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
            }
            func_0x00002430(extraout_A0_01,10,(short)_DAT_000297f4,uVar3,0);
            *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
            (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0_01);
          }
        }
      }
    }
  } while( true );
}



// Function: FUN_00001c08 at 00001c08
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c08(void)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  undefined1 uVar3;
  
  do {
    FUN_00000b68();
    piVar1 = _DAT_00027fb8;
    if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
      if (*(short *)(_DAT_0002884c + 0x124) != 0) {
        *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
        (**(code **)(*piVar1 + 0x26c))();
        (**(code **)(*piVar1 + 0x268))();
        piVar1 = _DAT_00027fc0;
        *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
        (**(code **)(*piVar1 + 0x26c))();
        (**(code **)(*piVar1 + 0x268))();
      }
      *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
      *(undefined1 *)(unaff_A6 + -0x148) = 0;
      (**(code **)(*unaff_A2 + 0x18c))();
      func_0x000072f8((short)unaff_A6 + -0x148);
      func_0x00002b68(0xdfc8,extraout_A0w);
      func_0x000073b0(0x32);
      if (extraout_A0 != (undefined4 *)0x0) {
        *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
        func_0x00002428();
        *extraout_A0 = 0x1ee88;
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      }
      func_0x00002430(extraout_A0,10,(short)_DAT_000297f4);
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
      (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0);
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
    while( true ) {
      if (*(char *)(unaff_A6 + -0x47) != '\0') {
        return;
      }
      *(undefined2 *)(unaff_A6 + -0x12) = 0;
      *(undefined4 *)(unaff_A6 + -0x10) = 0;
      *(undefined4 *)(unaff_A6 + -0xc) = 0;
      *(undefined4 *)(unaff_A6 + -8) = 0;
      *(undefined4 *)(unaff_A6 + -4) = 0;
      *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
      _DAT_00025f52 = unaff_A6 + -0x46;
      iVar2 = func_0x000076a8();
      if (iVar2 == 0) break;
      if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
        FUN_00001c10();
      }
      else {
        if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
          (**(code **)(*_DAT_000297f4 + 0x270))();
        }
        if (*(short *)(unaff_A6 + -0x12) == -0x2c) {
          *(undefined1 *)(unaff_A6 + -0x47) = 0;
        }
        else {
          (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
          func_0x00001bf0();
          (**(code **)(*extraout_A0_00 + 0x194))();
          iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
          (**(code **)(*extraout_A0_00 + 0x3a0))();
          if (iVar2 == 0x73617665) {
            *(undefined1 *)(unaff_A6 + -0x47) = 0;
          }
          else {
            *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
            *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
            uVar3 = 0xe2;
            func_0x000073b0();
            if (extraout_A0_01 != (undefined4 *)0x0) {
              *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
              uVar3 = 0xf8;
              func_0x00002428();
              *extraout_A0_01 = 0x1ee88;
              *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
            }
            func_0x00002430(extraout_A0_01,10,(short)_DAT_000297f4,uVar3);
            *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
            (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0_01);
          }
        }
      }
    }
    *(undefined1 *)(unaff_A6 + -0x47) = 1;
  } while( true );
}



// Function: FUN_00001c10 at 00001c10
// Size: 223 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  
  do {
    piVar1 = _DAT_00027fb8;
    if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
      if (*(short *)(_DAT_0002884c + 0x124) != 0) {
        *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
        (**(code **)(*piVar1 + 0x26c))();
        (**(code **)(*piVar1 + 0x268))();
        piVar1 = _DAT_00027fc0;
        *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
        (**(code **)(*piVar1 + 0x26c))();
        (**(code **)(*piVar1 + 0x268))();
      }
      *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
      *(undefined1 *)(unaff_A6 + -0x148) = 0;
      (**(code **)(*unaff_A2 + 0x18c))();
      func_0x000072f8((short)unaff_A6 + -0x148);
      func_0x00002b68(0xdfc8,extraout_A0w);
      func_0x000073b0(0x32);
      if (extraout_A0 != (undefined4 *)0x0) {
        *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
        func_0x00002428();
        *extraout_A0 = 0x1ee88;
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      }
      func_0x00002430(extraout_A0,10,(short)_DAT_000297f4);
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
      (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0);
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
    while( true ) {
      if (*(char *)(unaff_A6 + -0x47) != '\0') {
        return;
      }
      *(undefined2 *)(unaff_A6 + -0x12) = 0;
      *(undefined4 *)(unaff_A6 + -0x10) = 0;
      *(undefined4 *)(unaff_A6 + -0xc) = 0;
      *(undefined4 *)(unaff_A6 + -8) = 0;
      *(undefined4 *)(unaff_A6 + -4) = 0;
      *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
      _DAT_00025f52 = unaff_A6 + -0x46;
      iVar2 = func_0x000076a8();
      if (iVar2 == 0) break;
      if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
        FUN_00001c10();
      }
      else {
        if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
          (**(code **)(*(int *)CONCAT22((short)((uint)_DAT_000297f4 >> 0x10),(short)_DAT_000297f4) +
                      0x270))();
        }
        if (*(short *)(unaff_A6 + -0x12) == -0x2c) {
          *(undefined1 *)(unaff_A6 + -0x47) = 0;
        }
        else {
          (**(code **)(*(int *)CONCAT22((short)((uint)_DAT_000257ee >> 0x10),(short)_DAT_000257ee) +
                      0x68))();
                    /* WARNING: Call to offcut address within same function */
          func_0x00001bf0();
          (**(code **)(*extraout_A0_00 + 0x194))();
          iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
          (**(code **)(*extraout_A0_00 + 0x3a0))();
          if (iVar2 == 0x73617665) {
            *(undefined1 *)(unaff_A6 + -0x47) = 0;
          }
          else {
            *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
            *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
            func_0x000073b0();
            if (extraout_A0_01 != (undefined4 *)0x0) {
              *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
              func_0x00002428();
              *extraout_A0_01 = 0x1ee88;
              *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
            }
            func_0x00002430(extraout_A0_01,10,(short)_DAT_000297f4);
            *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
            (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0_01);
          }
        }
      }
    }
    *(undefined1 *)(unaff_A6 + -0x47) = 1;
    FUN_00000b68();
  } while( true );
}



// Function: FUN_00001cf0 at 00001cf0
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cf0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_D3;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  
  do {
    func_0x00002430(unaff_D3);
    *(undefined4 *)((int)unaff_D3 + 0x2e) = 10;
    (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,unaff_D3);
    do {
      _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
      while( true ) {
        if (*(char *)(unaff_A6 + -0x47) != '\0') {
          return;
        }
        *(undefined2 *)(unaff_A6 + -0x12) = 0;
        *(undefined4 *)(unaff_A6 + -0x10) = 0;
        *(undefined4 *)(unaff_A6 + -0xc) = 0;
        *(undefined4 *)(unaff_A6 + -8) = 0;
        *(undefined4 *)(unaff_A6 + -4) = 0;
        *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
        _DAT_00025f52 = unaff_A6 + -0x46;
        iVar2 = func_0x000076a8();
        if (iVar2 == 0) break;
        if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
          FUN_00001c10();
        }
        else {
          if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
            (**(code **)(*_DAT_000297f4 + 0x270))();
          }
          if (*(short *)(unaff_A6 + -0x12) == -0x2c) {
            *(undefined1 *)(unaff_A6 + -0x47) = 0;
          }
          else {
            (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
            func_0x00001bf0();
            (**(code **)(*extraout_A0_00 + 0x194))();
            iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
            (**(code **)(*extraout_A0_00 + 0x3a0))();
            if (iVar2 == 0x73617665) {
              *(undefined1 *)(unaff_A6 + -0x47) = 0;
            }
            else {
              *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
              *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
              func_0x000073b0();
              if (extraout_A0_01 != (undefined4 *)0x0) {
                *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
                func_0x00002428();
                *extraout_A0_01 = 0x1ee88;
                *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
              }
              func_0x00002430(extraout_A0_01);
              *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
              (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0_01);
            }
          }
        }
      }
      *(undefined1 *)(unaff_A6 + -0x47) = 1;
      FUN_00000b68();
      piVar1 = _DAT_00027fb8;
    } while (*(char *)(_DAT_0002884c + 0x2f8d) == '\0');
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
      (**(code **)(*piVar1 + 0x26c))();
      (**(code **)(*piVar1 + 0x268))();
      piVar1 = _DAT_00027fc0;
      *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
      (**(code **)(*piVar1 + 0x26c))();
      (**(code **)(*piVar1 + 0x268))();
    }
    *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
    *(undefined1 *)(unaff_A6 + -0x148) = 0;
    (**(code **)(*unaff_A2 + 0x18c))();
    func_0x000072f8();
    func_0x00002b68();
    func_0x000073b0(0x32);
    unaff_D3 = extraout_A0;
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
      func_0x00002428();
      *extraout_A0 = 0x1ee88;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    }
  } while( true );
}



// Function: FUN_00001d08 at 00001d08
// Size: 26 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d08(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  int *in_stack_00000000;
  
  do {
    (**(code **)(*in_stack_00000000 + 0x104))();
    do {
      _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
      while( true ) {
        if (*(char *)(unaff_A6 + -0x47) != '\0') {
          return;
        }
        *(undefined2 *)(unaff_A6 + -0x12) = 0;
        *(undefined4 *)(unaff_A6 + -0x10) = 0;
        *(undefined4 *)(unaff_A6 + -0xc) = 0;
        *(undefined4 *)(unaff_A6 + -8) = 0;
        *(undefined4 *)(unaff_A6 + -4) = 0;
        *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
        _DAT_00025f52 = unaff_A6 + -0x46;
        iVar2 = func_0x000076a8();
        if (iVar2 == 0) break;
        if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
          FUN_00001c10();
        }
        else {
          if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
            (**(code **)(*_DAT_000297f4 + 0x270))();
          }
          if (*(short *)(unaff_A6 + -0x12) == -0x2c) {
            *(undefined1 *)(unaff_A6 + -0x47) = 0;
          }
          else {
            (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
            func_0x00001bf0();
            (**(code **)(*extraout_A0_00 + 0x194))();
            iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
            (**(code **)(*extraout_A0_00 + 0x3a0))();
            if (iVar2 == 0x73617665) {
              *(undefined1 *)(unaff_A6 + -0x47) = 0;
            }
            else {
              *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
              *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
              func_0x000073b0();
              if (extraout_A0_01 != (undefined4 *)0x0) {
                *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
                func_0x00002428();
                *extraout_A0_01 = 0x1ee88;
                *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
              }
              func_0x00002430();
              *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 10;
              (**(code **)(*_DAT_000297f4 + 0x104))();
            }
          }
        }
      }
      *(undefined1 *)(unaff_A6 + -0x47) = 1;
      FUN_00000b68();
      piVar1 = _DAT_00027fb8;
    } while (*(char *)(_DAT_0002884c + 0x2f8d) == '\0');
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
      (**(code **)(*piVar1 + 0x26c))();
      (**(code **)(*piVar1 + 0x268))();
      piVar1 = _DAT_00027fc0;
      *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
      (**(code **)(*piVar1 + 0x26c))();
      (**(code **)(*piVar1 + 0x268))();
    }
    *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
    *(undefined1 *)(unaff_A6 + -0x148) = 0;
    (**(code **)(*unaff_A2 + 0x18c))();
    func_0x000072f8();
    func_0x00002b68();
    func_0x000073b0();
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
      func_0x00002428();
      *extraout_A0 = 0x1ee88;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    }
    func_0x00002430();
    *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
    in_stack_00000000 = _DAT_000297f4;
  } while( true );
}



// Function: FUN_00001e28 at 00001e28
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e28(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_D0;
  undefined4 *unaff_D3;
  undefined4 *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  undefined4 *in_A0;
  int *unaff_A2;
  int unaff_A6;
  
  do {
    *(undefined4 *)((int)in_A0 + 0x2e) = in_D0;
    (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,unaff_D3);
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (*(char *)(unaff_A6 + -0x47) != '\0') {
              return;
            }
            *(undefined2 *)(unaff_A6 + -0x12) = 0;
            *(undefined4 *)(unaff_A6 + -0x10) = 0;
            *(undefined4 *)(unaff_A6 + -0xc) = 0;
            *(undefined4 *)(unaff_A6 + -8) = 0;
            *(undefined4 *)(unaff_A6 + -4) = 0;
            *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
            _DAT_00025f52 = unaff_A6 + -0x46;
            iVar2 = func_0x000076a8();
            if (iVar2 != 0) break;
            *(undefined1 *)(unaff_A6 + -0x47) = 1;
            FUN_00000b68();
            piVar1 = _DAT_00027fb8;
            if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
              if (*(short *)(_DAT_0002884c + 0x124) != 0) {
                *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
                (**(code **)(*piVar1 + 0x26c))();
                (**(code **)(*piVar1 + 0x268))();
                piVar1 = _DAT_00027fc0;
                *(undefined1 *)(_DAT_00027fc0 + 0x26) = 1;
                (**(code **)(*piVar1 + 0x26c))();
                (**(code **)(*piVar1 + 0x268))();
              }
              *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
              *(undefined1 *)(unaff_A6 + -0x148) = 0;
              (**(code **)(*unaff_A2 + 0x18c))();
              func_0x000072f8();
              func_0x00002b68();
              func_0x000073b0();
              if (extraout_A0 != (undefined4 *)0x0) {
                *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0;
                func_0x00002428();
                *extraout_A0 = 0x1ee88;
                *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
              }
              func_0x00002430();
              *(undefined4 *)((int)extraout_A0 + 0x2e) = 10;
              (**(code **)(*_DAT_000297f4 + 0x104))(_DAT_000297f4,extraout_A0);
            }
            _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
          }
          if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') break;
          FUN_00001c10();
        }
        if ((*(int *)(unaff_A6 + -0x10) != 0x820000) && (*(short *)(unaff_A6 + -0x12) != -0x2c)) {
          (**(code **)(*_DAT_000297f4 + 0x270))();
        }
        if (*(short *)(unaff_A6 + -0x12) != -0x2c) break;
        *(undefined1 *)(unaff_A6 + -0x47) = 0;
      }
      (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Call to offcut address within same function */
      func_0x00001bf0();
      (**(code **)(*extraout_A0_00 + 0x194))();
      iVar2 = (**(code **)(*extraout_A0_00 + 0x40c))();
      (**(code **)(*extraout_A0_00 + 0x3a0))();
      if (iVar2 != 0x73617665) break;
      *(undefined1 *)(unaff_A6 + -0x47) = 0;
    }
    *(undefined1 *)((int)unaff_A2 + 0x1e1) = 0;
    *(undefined4 *)((int)unaff_A2 + 0x126) = 0;
    func_0x000073b0();
    if (extraout_A0_01 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0x14c) = extraout_A0_01;
      func_0x00002428();
      *extraout_A0_01 = 0x1ee88;
      *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
    }
    func_0x00002430();
    in_D0 = 10;
    unaff_D3 = extraout_A0_01;
    in_A0 = extraout_A0_01;
  } while( true );
}



// Function: FUN_00001e98 at 00001e98
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ea8 at 00001ea8
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ea8(void)

{
  _DAT_00009e64 = _DAT_00009e64 << 1;
  _DAT_00005f22 = _DAT_00005f22 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001eb0 at 00001eb0
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001eb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001f10 at 00001f10
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001f10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



