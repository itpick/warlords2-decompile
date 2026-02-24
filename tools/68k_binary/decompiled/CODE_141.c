// Warlords II - Decompiled 68k Code
// Segment: CODE_141
// Decompiled by Ghidra 12.0.3

// Function: FUN_000001b2 at 000001b2
// Size: 414 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000001b2(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  undefined2 extraout_A0w;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined2 uVar3;
  undefined1 auStack_104 [256];
  
  uVar3 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x188))(uVar3,0x65);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x228))();
    if (extraout_A0_00 != 0) {
      *(undefined4 *)(extraout_A0_00 + 0x12) = _DAT_00029592;
      *(undefined2 *)(extraout_A0_00 + 0x16) = _DAT_00029596;
    }
  }
  (**(code **)(*param_1 + 0x188))(uVar3,0x65);
  if (extraout_A0_01 != (int *)0x0) {
    func_0x00007320((short)auStack_104,(short)_DAT_0002884c + _DAT_00027e70 * 0x14);
    (**(code **)(*extraout_A0_01 + 1000))((short)extraout_A0_01,extraout_A0w);
  }
  for (sVar2 = 0; sVar2 < 3; sVar2 = sVar2 + 1) {
    (**(code **)(*param_1 + 0x188))(uVar3,(char)sVar2 + '1');
    if (extraout_A0_02 != (int *)0x0) {
      if (*(short *)((int)extraout_A0_02 + 0x7e) != 5) {
        *(undefined2 *)((int)extraout_A0_02 + 0x7e) = 5;
        (**(code **)(*extraout_A0_02 + 0x248))();
      }
      if (_DAT_00027e70 != *(short *)(extraout_A0_02 + 0x1f)) {
        *(short *)(extraout_A0_02 + 0x1f) = _DAT_00027e70;
        (**(code **)(*extraout_A0_02 + 0x26c))();
      }
    }
  }
  (**(code **)(*param_1 + 0x188))(uVar3,0x61);
  if (extraout_A0_03 != (int *)0x0) {
    (**(code **)(*extraout_A0_03 + 0x3ec))
              ((short)extraout_A0_03,*(short *)(_DAT_00027e70 * 2 + _DAT_0002884c + 0xf0) != 0);
  }
  (**(code **)(*param_1 + 0x188))(uVar3,0x65);
  uVar1 = 0;
  if (extraout_A0_04 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0_04 + 0x3ec))
                      ((short)extraout_A0_04,
                       *(short *)(_DAT_00027e70 * 2 + _DAT_0002884c + 0x148) != 0);
  }
  return uVar1;
}



// Function: FUN_00000350 at 00000350
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00000350(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = (char *)(_DAT_00027e70 * 0x14 + _DAT_0002884c);
  pcVar3 = pcVar2;
  pcVar4 = &DAT_00027e72;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}



// Function: FUN_0000037c at 0000037c
// Size: 274 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000037c(int *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int *extraout_A0;
  char *extraout_A0_00;
  char *pcVar3;
  int *extraout_A0_01;
  int *extraout_A0_02;
  char *pcVar4;
  undefined1 local_104 [256];
  
  (**(code **)(*param_1 + 0x188))(param_1,0x6e616d65);
  if (extraout_A0 != (int *)0x0) {
    local_104[0] = 0;
    (**(code **)(*extraout_A0 + 0x3d4))(extraout_A0,local_104);
    func_0x000072f8(local_104);
    pcVar3 = (char *)(_DAT_00027e70 * 0x14 + _DAT_0002884c);
    pcVar4 = extraout_A0_00;
    do {
      cVar1 = *pcVar4;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_1 + 0x188))(param_1,0x656e6861);
  if (extraout_A0_01 != (int *)0x0) {
    bVar2 = (**(code **)(*extraout_A0_01 + 0x428))();
    *(ushort *)(_DAT_00027e70 * 2 + _DAT_0002884c + 0xf0) = (ushort)bVar2;
  }
  (**(code **)(*param_1 + 0x188))(param_1,0x6f627365);
  if (extraout_A0_02 != (int *)0x0) {
    bVar2 = (**(code **)(*extraout_A0_02 + 0x428))();
    *(ushort *)(_DAT_00027e70 * 2 + _DAT_0002884c + 0x148) = (ushort)bVar2;
  }
  func_0x00003ec8(CONCAT22(_DAT_00027e70,1),param_2);
  func_0x00003ec0(param_2);
  return;
}



