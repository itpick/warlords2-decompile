// Warlords II - Decompiled 68k Code
// Segment: CODE_116
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(void)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = 100;
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    *(undefined1 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f1) = 0;
    *(undefined1 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f2) = 0;
    *(undefined1 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f0) = 0;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15fa) = 0;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f8) = 0;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f6) = 0;
    *(undefined1 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15fd) = 0;
    puVar1 = (uint *)(sVar2 * 0x42 + _DAT_0002884c + 0x15fc);
    *puVar1 = *puVar1 & 0xffffff;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x1604) = 0;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x1602) = 0;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x1600) = 0;
    *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15fe) = 0;
    iVar4 = sVar2 * 0x42 + _DAT_0002884c;
    *(undefined1 *)(iVar4 + 0x15f3) = *(undefined1 *)(iVar4 + 0x15d9);
    *(undefined1 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f4) = 0;
    sVar3 = sVar2;
  }
  return;
}



// Function: FUN_0000010c at 0000010c
// Size: 66 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000010c(void)

{
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    func_0x000047a8();
  }
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000332 at 00000332
// Size: 774 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000332(undefined4 param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w;
  undefined1 extraout_A0b_00;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  int extraout_A0_03;
  int *extraout_A0_04;
  int *piVar5;
  undefined4 extraout_A0_05;
  int extraout_A0_06;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 auStack_52 [70];
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1._0_2_ != 0) {
    func_0x00002ad8(6);
    func_0x00002ad8(5,extraout_A0b);
    func_0x00002ad8(4,extraout_A0w);
    func_0x00002ad8(3,extraout_A0b_00);
    uVar11 = (undefined2)((uint)extraout_A0 >> 0x10);
    func_0x00002ad8(2,(short)extraout_A0);
    uVar10 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    func_0x00002ad8(1,(short)extraout_A0_00);
    uVar9 = (undefined2)((uint)extraout_A0_01 >> 0x10);
    func_0x00002ad8(0,(short)extraout_A0_01);
    uVar8 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    func_0x000029a8((short)extraout_A0_02);
    local_c = 0xca;
    local_8 = 0x3c;
    func_0x00003328(_DAT_00027fd4,(short)&local_c,uVar8,uVar9,uVar10,uVar11);
    func_0x00003330((short)_DAT_00027fd4);
  }
  func_0x000073b0(0x1a);
  piVar5 = (int *)0x0;
  if (extraout_A0_03 != 0) {
    func_0x00003180((char)extraout_A0_03);
    piVar5 = extraout_A0_04;
  }
  func_0x00003188((short)piVar5,0x454e);
  (**(code **)(*piVar5 + 0x74))((short)piVar5,0x7724,0x54);
  (**(code **)(*piVar5 + 0x4c))();
  if (param_1._0_2_ != 0) {
    func_0x00003330((short)_DAT_00027fd4);
  }
  func_0x00002808(20000,1);
  if (_DAT_0002884c == 0) {
    func_0x00001ea0(0x8e);
    _DAT_0002884c = extraout_A0_06;
  }
  uVar9 = (undefined2)((uint)_DAT_0002884c >> 0x10);
  uVar8 = (undefined2)((uint)extraout_A0_05 >> 0x10);
  func_0x00005e08((short)extraout_A0_05,(char)_DAT_0002884c);
  *(undefined2 *)(_DAT_0002884c + 0x2f8c) = 0;
  func_0x00002818((short)extraout_A0_05,uVar8,uVar9);
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  func_0x00001bf0((short)iVar1);
  piVar5 = *(int **)(iVar1 + 0x142);
  uVar8 = SUB42(piVar5,0);
  func_0x00001bf0(uVar8);
  (**(code **)(*piVar5 + 0xc0))(uVar8,(short)auStack_52);
  if (param_1._0_2_ != 0) {
    func_0x00003330((short)_DAT_00027fd4);
  }
  if (_DAT_00027722 != 0) {
    *(undefined2 *)(_DAT_0002884c + 0x162) = _DAT_00027778;
  }
  func_0x00002a90();
  func_0x00003eb0();
  func_0x00003eb8();
  func_0x000027f8();
  cVar4 = '\0';
  for (sVar2 = 0; sVar2 < 0x1d; sVar2 = sVar2 + 1) {
    if (*(short *)(_DAT_00027ee2 + sVar2 * 0x3e) != 5) {
      for (sVar3 = 0; sVar3 < 9; sVar3 = sVar3 + 1) {
        *(char *)((int)*(short *)(_DAT_00027ee2 + sVar2 * 0x3e) + sVar3 * 0x1d + _DAT_0002884c +
                 0x60c) = cVar4;
      }
      cVar4 = cVar4 + '\x01';
    }
  }
  func_0x000049a0();
  if (param_1._0_2_ != 0) {
    func_0x00003330((short)_DAT_00027fd4);
  }
  FUN_00000638();
  if (param_1._0_2_ != 0) {
    func_0x00003330((short)_DAT_00027fd4);
  }
  FUN_0000000c();
  if (param_1._0_2_ != 0) {
    uVar12 = 100;
    uVar8 = (undefined2)((uint)_DAT_00027fd4 >> 0x10);
    func_0x00003330((short)_DAT_00027fd4);
    func_0x00002ab0(uVar8,uVar12);
  }
  FUN_0000010c();
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
      pcVar6 = (char *)(sVar2 * 0x14 + _DAT_0002884c);
      pcVar7 = &DAT_0001547e;
      do {
        cVar4 = *pcVar7;
        *pcVar6 = cVar4;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xc0) = 3;
    }
  }
  return 1;
}



// Function: FUN_00000638 at 00000638
// Size: 206 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000638(void)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  int extraout_A0_02;
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  func_0x00002808(0x5020,1);
  if (_DAT_00028850 == 0) {
    func_0x00001ea0(0x8880);
    _DAT_00028850 = extraout_A0_00;
  }
  uVar4 = (undefined2)((uint)_DAT_00028850 >> 0x10);
  uVar2 = (undefined2)((uint)extraout_A0 >> 0x10);
  uVar1 = 0xa4;
  uVar3 = uVar2;
  func_0x00002820((short)extraout_A0,(char)_DAT_00028850,0x8880);
  func_0x00002818((short)extraout_A0,uVar3,uVar4);
  func_0x00002808(0x52442020,1,uVar2,uVar1);
  if (_DAT_00028858 == 0) {
    func_0x00001ea0(0x4440);
    _DAT_00028858 = extraout_A0_02;
  }
  uVar2 = (undefined2)((uint)_DAT_00028858 >> 0x10);
  uVar3 = (undefined2)((uint)extraout_A0_01 >> 0x10);
  func_0x00002820((short)extraout_A0_01,(char)_DAT_00028858,0x4440);
  func_0x00002818((short)extraout_A0_01,uVar3,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



