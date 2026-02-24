// Warlords II - Decompiled 68k Code
// Segment: CODE_139
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000080 at 00000080
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000080(undefined4 param_1,undefined4 param_2)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x1122);
  *psVar1 = param_2._0_2_ + *psVar1;
  FUN_000000d4(*(undefined2 *)(param_1._2_2_ * 0x42 + _DAT_0002884c + 0x15c6));
  func_0x00004930();
  func_0x00004920();
  func_0x00004928();
  return;
}



// Function: FUN_000000d4 at 000000d4
// Size: 36 bytes

void FUN_000000d4(undefined2 param_1)

{
  FUN_000000f8(param_1);
  func_0x00006e70(0x10001,0);
  return;
}



// Function: FUN_000000f8 at 000000f8
// Size: 392 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000000f8(undefined2 param_1)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar6;
  int iVar5;
  short sVar7;
  int iVar8;
  int iVar9;
  
  sVar6 = func_0x00004938(param_1);
  iVar9 = sVar6 * 0x42 + _DAT_0002884c;
  iVar5 = *(char *)(iVar9 + 0x15d9) * 2 + 0xa0;
  sVar7 = *(short *)(iVar9 + 0x15c4);
  sVar2 = *(short *)(iVar9 + 0x15c6);
  *(char *)(iVar9 + 0x15d9) = '\x0f';
  *(undefined1 *)(sVar6 * 0x42 + _DAT_0002884c + 0x15f3) = 0xf;
  puVar1 = (uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar7 * 2);
  *puVar1 = *puVar1 & 0xffffff | iVar5 * 0x1000000;
  sVar3 = (short)iVar5;
  puVar1 = (uint *)((sVar2 + 1) * 0xe0 + _DAT_00028850 + sVar7 * 2);
  *puVar1 = *puVar1 & 0xffffff | (sVar3 + 0x10) * 0x1000000;
  puVar1 = (uint *)(sVar2 * 0xe0 + _DAT_00028850 + (sVar7 + 1) * 2);
  *puVar1 = *puVar1 & 0xffffff | (sVar3 + 1) * 0x1000000;
  puVar1 = (uint *)((sVar2 + 1) * 0xe0 + _DAT_00028850 + (sVar7 + 1) * 2);
  *puVar1 = *puVar1 & 0xffffff | (sVar3 + 0x11) * 0x1000000;
  iVar5 = sVar6 * 0x42;
  *(undefined2 *)(iVar5 + _DAT_0002884c + 0x15f6) = 0;
  for (sVar7 = 0; sVar7 < *(short *)(_DAT_0002884c + 0x15c2); sVar7 = sVar7 + 1) {
    iVar5 = sVar7 * 0x42;
    iVar9 = iVar5 + _DAT_0002884c;
    if (*(short *)(iVar9 + 0x15f6) != 0) {
      iVar8 = sVar6 * 0x42 + _DAT_0002884c;
      uVar4 = (undefined2)((uint)(sVar6 * 0x42) >> 0x10);
      iVar5 = CONCAT22(uVar4,*(short *)(iVar9 + 0x15f8));
      if ((*(short *)(iVar9 + 0x15f8) == *(short *)(iVar8 + 0x15c4)) &&
         (iVar5 = CONCAT22(uVar4,*(short *)(iVar9 + 0x15fa)),
         *(short *)(iVar9 + 0x15fa) == *(short *)(iVar8 + 0x15c6))) {
        *(undefined1 *)(iVar9 + 0x15f1) = 0;
        *(undefined2 *)(sVar7 * 0x42 + _DAT_0002884c + 0x15fa) = 0;
        *(undefined2 *)(sVar7 * 0x42 + _DAT_0002884c + 0x15f8) = 0;
        *(undefined2 *)(sVar7 * 0x42 + _DAT_0002884c + 0x15f6) = 0;
        iVar5 = sVar7 * 0x42;
        *(undefined1 *)(iVar5 + _DAT_0002884c + 0x15f0) = 0xff;
      }
    }
  }
  return CONCAT22((short)((uint)iVar5 >> 0x10),sVar6);
}



