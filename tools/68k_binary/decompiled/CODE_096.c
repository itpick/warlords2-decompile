// Warlords II - Decompiled 68k Code
// Segment: CODE_096
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short local_8;
  short local_6;
  
  if ((*(short *)(_DAT_00028978 + 0xe) != 0) &&
     (399 < *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186))) {
    func_0x00002ad0(10);
    sVar1 = FUN_0000027c();
    *(short *)(_DAT_00028978 + 0x10) = sVar1;
    if ((sVar1 != -1) &&
       (((func_0x00002b88(), 2 < local_6 &&
         (local_8 + 100 <=
          (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186))) &&
        (sVar1 = FUN_000001c2(), sVar1 != -1)))) {
      FUN_0000011c(sVar1);
    }
  }
  return;
}



// Function: FUN_0000011c at 0000011c
// Size: 166 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000011c(short param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  
  uVar1 = func_0x00002b88();
  func_0x000027f8();
  sVar3 = param_1;
  uVar2 = func_0x00002b80();
  sVar4 = param_1;
  func_0x000032e8(uVar2,sVar3);
  sVar3 = param_1;
  func_0x00003300(sVar4,uVar1);
  *(short *)(_DAT_00028978 + 0x16) = *(short *)(_DAT_00028978 + 0x16) + 1;
  *(undefined1 *)(param_1 * 0x42 + _DAT_0002884c + 0x15f1) = 0;
  *(undefined2 *)(param_1 * 0x42 + _DAT_0002884c + 0x15f6) = 0;
  *(undefined1 *)(_DAT_00028978 + 0x56 + (int)param_1) = 5;
  func_0x00007450(sVar3);
  func_0x000049a0();
  return 1;
}



// Function: FUN_000001c2 at 000001c2
// Size: 186 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000001c2(undefined4 param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  
  uVar8 = 0xffff;
  sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar7 = -1;
  while( true ) {
    sVar3 = sVar6 + -1;
    if (sVar6 == 0) break;
    sVar6 = sVar3;
    if (*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) == *(char *)(_DAT_0002884c + 0x111)) {
      bVar4 = true;
      sVar5 = 4;
      while( true ) {
        sVar2 = sVar5 + -1;
        if (sVar5 == 0) break;
        sVar5 = sVar2;
        if ((int)*(char *)((int)sVar2 + sVar3 * 0x42 + _DAT_0002884c + 0x15da) == (int)param_1._0_2_
           ) {
          bVar4 = false;
        }
      }
      if ((bVar4) && (*(char *)(_DAT_00028978 + 0x56 + (int)sVar3) != '\x02')) {
        sVar5 = func_0x00002df8();
        if (sVar5 == 0) {
          bVar1 = *(byte *)(sVar3 + _DAT_00028978 + 0xba);
          if ((short)uVar8 < (short)(ushort)bVar1) {
            uVar8 = (ushort)bVar1;
            sVar7 = sVar3;
          }
        }
      }
    }
  }
  return sVar7;
}



// Function: FUN_0000027c at 0000027c
// Size: 432 bytes

short FUN_0000027c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  short local_4a [4];
  undefined1 auStack_42 [22];
  short local_2c;
  short local_2a;
  short local_26;
  short local_24;
  short local_22;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_c;
  short local_a;
  short local_8;
  
  sVar5 = -1;
  sVar6 = 0;
  local_4a[2] = 0;
  if (param_1._0_2_ == 0) {
    sVar1 = 800;
    local_4a[3] = 4;
  }
  else {
    sVar1 = 0x5dc;
    local_4a[3] = 5;
  }
  while( true ) {
    for (sVar4 = 0; sVar4 < 0x1d; sVar4 = sVar4 + 1) {
      func_0x000049a8((short)((uint)auStack_42 >> 0x10));
      if (((((local_12 == 0) && (sVar4 != 0x1c)) && (sVar4 != 5)) &&
          ((-1 < local_24 && (local_24 != 0)))) && (local_24 <= sVar1)) {
        sVar3 = local_2c - local_2a;
        if (local_4a[3] <= local_2c) {
          if ((int)local_24 <= sVar1 + -200) {
            sVar3 = sVar3 + 1;
          }
          if ((int)local_24 <= sVar1 + -400) {
            sVar3 = sVar3 + 1;
          }
          if (0xb < local_26) {
            sVar3 = sVar3 + 1;
          }
          if (0xf < local_26) {
            sVar3 = sVar3 + 1;
          }
          if (local_c != 0) {
            sVar3 = sVar3 + 1;
          }
          if ((local_a != 0) || (local_8 != 0)) {
            sVar3 = sVar3 + 1;
          }
          if (((local_14 != 0) || (local_16 != 0)) || (local_18 != 0)) {
            sVar3 = sVar3 + 1;
          }
          if (local_1a != 0) {
            sVar3 = sVar3 + 1;
          }
          if (local_22 != 0) {
            sVar3 = sVar3 + 1;
          }
          if (local_10 != 0) {
            sVar3 = sVar3 + 2;
          }
        }
        if (1 < sVar3) {
          sVar2 = func_0x00002ad0(sVar3 * 2);
          sVar3 = sVar2 + sVar3;
        }
        if ((sVar6 < sVar3) || ((sVar3 == sVar6 && (sVar2 = func_0x00002ad0(2), sVar2 != 0)))) {
          sVar6 = sVar3;
          sVar5 = sVar4;
        }
      }
    }
    if ((sVar5 != -1) || (3 < local_4a[2])) break;
    local_4a[2] = local_4a[2] + 1;
    sVar1 = sVar1 + 500;
    local_4a[0] = local_4a[3] + -1;
    local_4a[1] = 1;
    if ((short)(local_4a[3] + -1) < 1) {
      psVar7 = local_4a + 1;
    }
    else {
      psVar7 = local_4a;
    }
    local_4a[3] = *psVar7;
  }
  return sVar5;
}



