// Warlords II - Decompiled 68k Code
// Segment: CODE_127
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000014a at 0000014a
// Size: 482 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000014a(undefined4 param_1)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1._0_2_ == 0) {
    func_0x00002ad8(0xa60006,0);
    func_0x00002b68(extraout_A0);
    func_0x00002ad8(0xa60007,0);
    func_0x00002b68(extraout_A0_00);
    func_0x00002ad8(0xa60008,0);
    func_0x00002b68(extraout_A0_01);
    func_0x00002ad8(0xa6000a);
    func_0x00002ad8(0xa60009,extraout_A0_02);
    func_0x00002b68(extraout_A0_03);
    func_0x00003ae0();
  }
  for (sVar2 = 0; sVar2 < *(short *)(_DAT_0002884c + 0x15c2); sVar2 = sVar2 + 1) {
    iVar5 = sVar2 * 0x42 + _DAT_0002884c;
    if ((int)*(char *)(iVar5 + 0x15d9) == (int)*(short *)(_DAT_0002884c + 0x110)) {
      func_0x000027f0(*(undefined4 *)(iVar5 + 0x15c4));
    }
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar3 = sVar2 + -1, sVar2 != 0) {
    puVar4 = (undefined4 *)(sVar3 * 0x16 + _DAT_00028854);
    sVar2 = sVar3;
    if ((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)puVar4 + 5)) {
      if (*(char *)(puVar4 + 1) == '\x1c') {
        func_0x00004950(puVar4,*puVar4);
      }
      func_0x00004910(sVar3 * 0x16 + _DAT_00028854);
    }
  }
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
      for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
        pbVar1 = (byte *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2);
        *pbVar1 = *pbVar1 | 0x20;
      }
    }
    func_0x000047a8();
    func_0x00006e70(0x10001,0);
    func_0x00003ae0();
  }
  _DAT_000288b0 = 0;
  _DAT_000288ac = 0;
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    *(undefined4 *)(&DAT_000288b4 + sVar2 * 4) = 0;
  }
  func_0x00004918();
  func_0x00003a78();
  if (param_1._0_2_ == 1) {
    func_0x00002ad8(0xa60005);
    func_0x00002ad8(0xa60004,extraout_A0_04);
    func_0x00002b68(extraout_A0_05);
  }
  return;
}



