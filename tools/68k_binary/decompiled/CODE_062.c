// Warlords II - Decompiled 68k Code
// Segment: CODE_062
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000028 at 00000028
// Size: 50 bytes

void FUN_00000028(void)

{
  FUN_0000005a(0x159a6);
  FUN_0000005a(0x15997);
  FUN_0000005a(0x15986);
  func_0x00004970();
  return;
}



// Function: FUN_0000005a at 0000005a
// Size: 444 bytes

/* WARNING: Removing unreachable block (ram,0x000001ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000005a(char *param_1)

{
  char cVar1;
  int iVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  char *pcVar3;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*_DAT_000297f4 + 0x198))();
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x268))();
  }
  if (_DAT_00027fb4 != (int *)0x0) {
    (**(code **)(*_DAT_00027fb4 + 0x268))();
  }
  if (_DAT_00027fbc != (int *)0x0) {
    (**(code **)(*_DAT_00027fbc + 0x268))();
  }
  if (_DAT_00027fc4 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc4 + 0x268))();
  }
  if (_DAT_00027fc8 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc8 + 0x268))();
  }
  FUN_00000216(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8((short)auStack_4a);
  if (iVar2 == 0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    func_0x00001bf0(extraout_A0_00);
    (**(code **)(*extraout_A0_00 + 0x188))((short)extraout_A0_00,0x7820);
    func_0x00001bf0((short)extraout_A0_01);
    pcVar3 = (char *)(extraout_A0_01 + 0x7c);
    do {
      cVar1 = *param_1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*extraout_A0_00 + 0x194))();
    (**(code **)(*extraout_A0_00 + 0x40c))();
    (**(code **)(*extraout_A0_00 + 0x3a0))();
    _DAT_00025f52 = local_10;
  }
  else {
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00000216 at 00000216
// Size: 222 bytes

undefined2 FUN_00000216(undefined2 param_1)

{
  char *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  int *extraout_A0;
  char *extraout_A0_00;
  undefined2 local_a;
  char *local_8;
  
  bVar2 = false;
  local_a = 0;
  func_0x00002800(0x5820,param_1);
  if (extraout_A0 == (int *)0x0) {
    local_a = 0;
  }
  else {
    uVar3 = (**(code **)(*extraout_A0 + 0x60))();
    func_0x00001ea0(uVar3);
    if (extraout_A0_00 != (char *)0x0) {
      local_8 = extraout_A0_00;
      func_0x00002820((short)extraout_A0,(short)extraout_A0_00,(char)uVar3);
      while (!bVar2) {
        for (; *local_8 != '#'; local_8 = local_8 + 1) {
        }
        pcVar1 = local_8 + 1;
        local_8 = local_8 + 2;
        if (*pcVar1 == 'D') {
          FUN_000007ea((short)&local_8,(char)&local_a);
          bVar2 = true;
        }
        else if (*pcVar1 == 'E') {
          bVar2 = true;
        }
      }
      func_0x00001d18((char)extraout_A0_00);
    }
    func_0x00002818((short)extraout_A0);
  }
  return local_a;
}



// Function: FUN_000002f4 at 000002f4
// Size: 768 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002f4(undefined2 param_1,undefined4 param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  int *extraout_A0;
  char *extraout_A0_00;
  char **ppcVar5;
  undefined2 uVar6;
  undefined2 local_a8;
  short local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  undefined1 local_70 [2];
  undefined1 auStack_6e [80];
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  char *local_8;
  
  bVar2 = false;
  _DAT_00027bcc = param_2._0_2_;
  _DAT_00027bce = param_2._2_2_;
  uVar3 = 0x2a;
  local_e = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  func_0x00002800(0x47465820,param_1,uVar3);
  if (extraout_A0 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (**(code **)(*extraout_A0 + 0x60))();
  func_0x00001ea0(uVar3);
  if (extraout_A0_00 != (char *)0x0) {
    ppcVar5 = (char **)0x0;
    local_8 = extraout_A0_00;
    func_0x00002820((short)extraout_A0,(char)extraout_A0_00,uVar3);
    while (uVar6 = (undefined2)((uint)ppcVar5 >> 0x10), !bVar2) {
      for (; *local_8 != '#'; local_8 = local_8 + 1) {
      }
      pcVar1 = local_8 + 1;
      local_8 = local_8 + 2;
      switch(*pcVar1) {
      case 'B':
        FUN_00000832((char)&local_8,(char)local_70);
        FUN_000008f6(&local_8,(short)&local_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'C':
        FUN_000008f6((char)&local_8,(char)&local_c);
        ppcVar5 = &local_8;
        FUN_00000940(ppcVar5,(short)auStack_6e);
        func_0x00002ac0(CONCAT22(local_c,local_a),auStack_6e);
        break;
      case 'E':
        bVar2 = true;
        break;
      case 'F':
        FUN_000007ea((char)&local_8,(char)&local_a8);
        ppcVar5 = (char **)CONCAT13(2,(int3)CONCAT22(uVar6,local_a8));
        func_0x00002a50(ppcVar5,0xf9);
        break;
      case 'G':
        FUN_000008a2((char)&local_8,(char)&local_1e);
        FUN_000007ea(&local_8,(short)&local_a6);
        FUN_000008f6(&local_8,&local_c);
        if (local_a6 == 100) {
          bVar4 = 0x15;
        }
        else if (local_a6 == 0x65) {
          bVar4 = 6;
        }
        else if (local_a6 == 0x66) {
          bVar4 = 0x24;
        }
        else {
          bVar4 = 0xe;
        }
        local_a4 = local_a;
        local_a2 = local_c;
        local_78 = local_1c;
        local_76 = local_1e;
        local_74 = local_18 + local_1c;
        local_72 = local_1a + local_1e;
        ppcVar5 = (char **)((short)(ushort)bVar4 * 0x1c + 0x14098);
        func_0x00002378(ppcVar5,(short)&local_78,(char)&local_a4,0x24);
        break;
      case 'H':
        func_0x00002a50(0xe0,0xf9);
        break;
      case 'I':
        FUN_00000832((char)&local_8,(char)local_70);
        FUN_000008f6(&local_8,(short)&local_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'L':
        FUN_000008f6((char)&local_8,(char)&local_c);
        ppcVar5 = &local_8;
        FUN_00000940(ppcVar5,(short)auStack_6e);
        func_0x00002ab8(CONCAT22(local_c,local_a),auStack_6e);
        break;
      case 'R':
        FUN_000008f6((char)&local_8,(char)&local_c);
        ppcVar5 = &local_8;
        FUN_00000940(ppcVar5,(short)auStack_6e);
        func_0x00002ac8(CONCAT22(local_c,local_a),auStack_6e);
        break;
      case 'T':
        func_0x00002a50(0xe0,0xf9);
      }
    }
    func_0x00001d18((char)extraout_A0_00);
  }
  func_0x00002818((short)extraout_A0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007ea at 000007ea
// Size: 72 bytes

void FUN_000007ea(int *param_1,short *param_2)

{
  *param_2 = (*(char *)(*param_1 + 1) + -0x30) * 10 + (*(char *)*param_1 + -0x30) * 100 +
             *(char *)(*param_1 + 2) + -0x30;
  *param_1 = *param_1 + 3;
  return;
}



// Function: FUN_00000832 at 00000832
// Size: 112 bytes

void FUN_00000832(int *param_1,short *param_2)

{
  *param_2 = (*(char *)(*param_1 + 1) + -0x30) * 1000 + (*(char *)*param_1 + -0x30) * 10000 +
             (*(char *)(*param_1 + 2) + -0x30) * 100 + (*(char *)(*param_1 + 3) + -0x30) * 10 +
             *(char *)(*param_1 + 4) + -0x30;
  *param_1 = *param_1 + 5;
  return;
}



// Function: FUN_000008a2 at 000008a2
// Size: 84 bytes

void FUN_000008a2(int *param_1,int param_2)

{
  *param_1 = *param_1 + 1;
  FUN_000007ea(param_1,param_2);
  *param_1 = *param_1 + 1;
  FUN_000007ea(param_1,param_2 + 2);
  *param_1 = *param_1 + 1;
  FUN_000007ea(param_1,param_2 + 4);
  *param_1 = *param_1 + 1;
  FUN_000007ea(param_1,param_2 + 6);
  *param_1 = *param_1 + 1;
  return;
}



// Function: FUN_000008f6 at 000008f6
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008f6(int *param_1,short *param_2)

{
  *param_1 = *param_1 + 1;
  FUN_000007ea(param_1,param_2);
  *param_1 = *param_1 + 1;
  FUN_000007ea(param_1,param_2 + 1);
  *param_1 = *param_1 + 1;
  *param_2 = _DAT_00027bcc + *param_2;
  param_2[1] = _DAT_00027bce + param_2[1];
  return;
}



// Function: FUN_00000940 at 00000940
// Size: 50 bytes

void FUN_00000940(int *param_1,int param_2)

{
  short sVar1;
  
  *param_1 = *param_1 + 1;
  sVar1 = 0;
  while (*(char *)*param_1 != '|') {
    *(undefined1 *)(param_2 + sVar1) = *(undefined1 *)*param_1;
    *param_1 = *param_1 + 1;
    sVar1 = sVar1 + 1;
  }
  *(undefined1 *)(param_2 + sVar1) = 0;
  return;
}



