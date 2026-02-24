// Warlords II - Decompiled 68k Code
// Segment: CODE_130
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000122 at 00000122
// Size: 728 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000122(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  short sVar4;
  int extraout_A0;
  short *psVar5;
  undefined4 extraout_A0_00;
  int *extraout_A0_01;
  undefined1 auStackY_8078 [32380];
  undefined2 uVar6;
  undefined1 auStack_176 [220];
  undefined2 local_9a;
  undefined1 auStack_98 [16];
  undefined2 local_88 [8];
  undefined1 local_78 [100];
  short local_14;
  short local_12 [3];
  short local_c;
  short local_a;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(*(int *)(_DAT_000297f4 + 0x80) + 0x15a);
  local_12[1] = 1;
  local_12[2] = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar5 = local_12 + 1;
  }
  else {
    psVar5 = local_12 + 2;
  }
  if (*psVar5 == 2) {
    func_0x00002810(uVar1);
    if (extraout_A0 == 0) {
      return;
    }
    local_8 = 4;
    func_0x00002830(extraout_A0,&local_8,4);
    func_0x00002818((short)extraout_A0);
  }
  else {
    local_14 = 1;
    local_12[0] = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar5 = &local_14;
    }
    else {
      psVar5 = local_12;
    }
    if (0xc9 < *psVar5) {
      return;
    }
  }
  func_0x00002810(uVar1);
  uVar6 = (undefined2)((uint)&local_8 >> 0x10);
  uVar2 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  func_0x00002820((short)extraout_A0_00,(char)&local_8,4);
  uVar3 = 2;
  func_0x00002818((short)extraout_A0_00,uVar2,uVar6);
  func_0x00002810((short)uVar1,uVar3);
  uVar2 = (**(code **)(*extraout_A0_01 + 0x60))();
  uVar6 = SUB42(extraout_A0_01,0);
  (**(code **)(*extraout_A0_01 + 0x5c))(uVar6,uVar2);
  for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x15c2); sVar4 = sVar4 + 1) {
    if (*(char *)((*(uint *)(*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 + *(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c4) * 2)
                  >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      uVar3 = *(undefined1 *)(sVar4 * 0x42 + _DAT_0002884c + 0x15d9);
    }
    else {
      uVar3 = 0xff;
    }
    local_78[sVar4] = uVar3;
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    local_88[sVar4] = *(undefined2 *)(sVar4 * 0x14 + _DAT_0002884c + 0x186);
  }
  func_0x00003f58(auStack_98);
  func_0x00004930();
  local_9a = FUN_0000041e(auStack_176,&local_c);
  local_a = local_c + *(short *)(_DAT_0002884c + 0x15c2) + 0x34;
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
  if ((int)sVar4 % 2 == 1) {
    sVar4 = sVar4 + 1;
    local_a = local_a + 1;
  }
  func_0x00002830(extraout_A0_01,&local_a,2);
  func_0x00002830((char)extraout_A0_01,(short)local_88,0x10);
  func_0x00002830(uVar6,(short)auStack_98,0x10);
  func_0x00002830(uVar6,0x8800,0x10);
  func_0x00002830(extraout_A0_01,local_78,(int)sVar4);
  func_0x00002830(extraout_A0_01,&local_9a,2);
  func_0x00002830(extraout_A0_01,auStack_176,(int)local_c);
  local_8 = (**(code **)(*extraout_A0_01 + 0x58))();
  func_0x00002838(extraout_A0_01,0);
  func_0x00002830(extraout_A0_01,&local_8,4);
  (**(code **)(*extraout_A0_01 + 100))(extraout_A0_01,local_8);
  func_0x00002818(uVar6);
  FUN_000003fa();
  return;
}



// Function: FUN_000003fa at 000003fa
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003fa(void)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    *(undefined1 *)(sVar1 * 0x2c + _DAT_0002884c + 0x1422) = 0;
  }
  return;
}



// Function: FUN_0000041e at 0000041e
// Size: 396 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000041e(int param_1,undefined2 *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char *pcVar6;
  char *pcVar7;
  short local_24 [16];
  
  sVar5 = 0;
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    local_24[sVar2 * 2 + 1] = 0;
    local_24[sVar2 * 2] = 0;
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if ('\0' < *(char *)(sVar2 * 0x2c + _DAT_0002884c + 0x1422)) {
      sVar5 = sVar5 + 1;
      local_24[sVar2 * 2] = 1;
    }
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if (('\x01' < *(char *)(sVar2 * 0x2c + _DAT_0002884c + 0x1422)) && (sVar5 < 10)) {
      sVar5 = sVar5 + 1;
      local_24[sVar2 * 2 + 1] = 1;
    }
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if ((local_24[sVar2 * 2] != 0) && (local_24[sVar2 * 2 + 1] == 0)) {
      *(undefined1 *)(sVar2 * 0x2c + _DAT_0002884c + 0x1422) = 1;
    }
  }
  sVar2 = 0;
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    for (sVar4 = 0; sVar4 < 2; sVar4 = sVar4 + 1) {
      if (local_24[sVar3 * 2 + (int)sVar4] != 0) {
        *(char *)(param_1 + sVar2 * 0x16) = (char)sVar3;
        *(undefined1 *)(param_1 + 1 + sVar2 * 0x16) =
             *(undefined1 *)((int)sVar4 + sVar3 * 0x2c + _DAT_0002884c + 0x1423);
        *(undefined2 *)(param_1 + 2 + sVar2 * 0x16) =
             *(undefined2 *)(sVar4 * 2 + sVar3 * 0x2c + _DAT_0002884c + 0x1426);
        *(undefined2 *)(param_1 + 4 + sVar2 * 0x16) =
             *(undefined2 *)(sVar4 * 2 + sVar3 * 0x2c + _DAT_0002884c + 0x142a);
        pcVar6 = (char *)(param_1 + 6 + sVar2 * 0x16);
        pcVar7 = (char *)(sVar4 * 0x10 + sVar3 * 0x2c + _DAT_0002884c + 0x142e);
        do {
          cVar1 = *pcVar7;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        sVar2 = sVar2 + 1;
      }
    }
  }
  *param_2 = (short)(sVar5 * 0x16);
  return CONCAT22((short)((uint)(sVar5 * 0x16) >> 0x10),sVar5);
}



// Function: FUN_000005aa at 000005aa
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005aa(void)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  if (*(short *)(_DAT_0002884c + 0x122) == 0) {
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      *(short *)(sVar4 * 2 + _DAT_0002884c + 0x164) = sVar4;
    }
  }
  else {
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      *(short *)(sVar4 * 2 + _DAT_0002884c + 0x164) = sVar4;
    }
    for (sVar4 = 0; sVar4 < 0x14; sVar4 = sVar4 + 1) {
      sVar2 = func_0x00002ad0(0x10008);
      sVar3 = func_0x00002ad0(8);
      uVar1 = *(undefined2 *)(sVar3 * 2 + _DAT_0002884c + 0x164);
      *(undefined2 *)(sVar3 * 2 + _DAT_0002884c + 0x164) =
           *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0x164);
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0x164) = uVar1;
    }
  }
  *(undefined2 *)(_DAT_0002884c + 0x174) = 0;
  return;
}



// Function: FUN_0000068a at 0000068a
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000068a(void)

{
  short sVar1;
  
  func_0x00004930();
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    if ((*(short *)(sVar1 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(&DAT_00028800 + sVar1 * 2) == 0)) {
      func_0x00007550();
    }
  }
  return;
}



// Function: FUN_000006d2 at 000006d2
// Size: 914 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006d2(void)

{
  ushort uVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  ushort unaff_D5w;
  short sVar6;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined1 in_stack_ffffff87;
  undefined4 uVar7;
  undefined1 auStack_58 [80];
  short local_8;
  short local_6;
  
  local_6 = 0;
  func_0x00004930();
  for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x15c2); sVar3 = sVar3 + 1) {
    if (*(char *)((*(uint *)(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 + *(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c4) * 2)
                  >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      local_6 = local_6 + 1;
    }
  }
  sVar6 = 0;
  sVar3 = 0;
  local_8 = 1;
  bVar2 = false;
  uVar4 = 8;
  while( true ) {
    uVar1 = uVar4 - 1;
    if (uVar4 == 0) break;
    if (*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0x138) != 0) {
      local_8 = 0;
    }
    if ((*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0xd0) == 0) &&
       (*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0x138) == 0)) {
      bVar2 = true;
      *(undefined2 *)((short)uVar1 * 2 + _DAT_0002884c + 0xd0) = 1;
    }
    if ((*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      bVar2 = true;
      sVar3 = sVar3 + 1;
      unaff_D5w = uVar1;
    }
    uVar4 = uVar1;
    if ((*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)((short)uVar1 * 2 + _DAT_0002884c + 0xd0) == 1)) {
      sVar6 = sVar6 + 1;
    }
  }
  if (local_8 != 0) {
    func_0x00002ad8(0xd0001);
    func_0x00002ad8(0xd0000,extraout_A0);
    func_0x00002b68(extraout_A0_00);
    func_0x00002ad8(0xd0003);
    uVar7 = extraout_A0_01;
    func_0x00002ad8(0xd0002,extraout_A0_01);
    in_stack_ffffff87 = (undefined1)uVar7;
    func_0x00002b68(extraout_A0_02);
  }
  if (((*(short *)(_DAT_0002884c + 0x15c) == 0) && (sVar3 == 0)) && (bVar2)) {
    func_0x00002ad8(0xe0001);
    func_0x00002ad8(0xe0000,extraout_A0_03);
    in_stack_ffffff87 = 0xa0;
    func_0x00002b68(extraout_A0_04);
  }
  if (((*(short *)(_DAT_0002884c + 0x15c) == 0) && (sVar3 == 1)) &&
     ((sVar6 == 0 && ((int)local_6 / 2 < (int)*(short *)(&DAT_00028800 + (short)unaff_D5w * 2))))) {
    *(undefined2 *)(_DAT_0002884c + 0x15c) = 1;
    func_0x00006e50(CONCAT22(unaff_D5w,CONCAT11(7,in_stack_ffffff87)),(uint)unaff_D5w << 0x10,
                    0x15985);
  }
  if (((*(short *)(_DAT_0002884c + 0x15c) == 0) && (sVar3 == 0)) && (sVar6 == 1)) {
    *(undefined2 *)(_DAT_0002884c + 0x15c) = 1;
    sVar5 = 0;
    while ((sVar5 < 8 && (*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) == 0))) {
      sVar5 = sVar5 + 1;
    }
    func_0x00002ad8(0x100000,_DAT_0002884c + sVar5 * 0x14);
    func_0x000076d0(auStack_58,extraout_A0_05);
    func_0x00002b68(auStack_58,0);
    *(undefined2 *)(sVar5 * 2 + _DAT_0002884c + 0xd0) = 0;
    func_0x00006e50();
  }
  if ((((*(short *)(_DAT_0002884c + 0x15c) == 0) && (sVar3 == 1)) && (0 < sVar6)) &&
     (*(short *)(_DAT_0002884c + 0x15e) == 0)) {
    sVar3 = 0;
    for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
      if (((*(short *)(sVar6 * 2 + _DAT_0002884c + 0x138) != 0) &&
          (*(short *)(sVar6 * 2 + _DAT_0002884c + 0xd0) == 1)) &&
         (sVar3 < *(short *)(&DAT_00028800 + sVar6 * 2))) {
        sVar3 = *(short *)(&DAT_00028800 + sVar6 * 2);
      }
    }
    if (((int)*(short *)(_DAT_0002884c + 0x15c2) / 2 <
         (int)*(short *)(&DAT_00028800 + (short)unaff_D5w * 2)) &&
       ((int)*(short *)(_DAT_0002884c + 0x15c2) / 8 + (int)sVar3 <
        (int)*(short *)(&DAT_00028800 + (short)unaff_D5w * 2))) {
      *(undefined2 *)(_DAT_0002884c + 0x15e) = 1;
    }
  }
  return;
}



