// Warlords II - Decompiled 68k Code
// Segment: CODE_047
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000098 at 00000098
// Size: 64 bytes

void FUN_00000098(undefined4 param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 local_8;
  
  sVar1 = 0x12;
  if (param_2 == 0x646f6e65) {
    sVar1 = 0x10;
  }
  local_8 = CONCAT22(*(undefined2 *)(sVar1 * 0x1c + 0x140aa),*(undefined2 *)(sVar1 * 0x1c + 0x140a8)
                    );
  *param_3 = local_8;
  return;
}



// Function: FUN_000000d8 at 000000d8
// Size: 78 bytes

void FUN_000000d8(int param_1)

{
  if ((*(uint *)(param_1 + 0x16) < 0x70726f30) || (0x70726f33 < *(uint *)(param_1 + 0x16))) {
    FUN_000005ac();
  }
  else {
    FUN_00000856();
  }
  return;
}



// Function: FUN_00000126 at 00000126
// Size: 1094 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000126(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w_00;
  int extraout_A0_02;
  int *extraout_A0_03;
  char *pcVar8;
  undefined1 extraout_A0b;
  int *extraout_A0_04;
  char *pcVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int iVar14;
  undefined1 uVar15;
  undefined1 auStack_354 [256];
  undefined1 auStack_254 [256];
  undefined1 auStack_154 [256];
  char acStack_54 [80];
  
  if (param_1._0_2_ == 0) {
    for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
      (**(code **)(*_DAT_00027ede + 0x188))((short)_DAT_00027ede,(char)sVar5 + '1');
      if (extraout_A0 != (int *)0x0) {
        if (*(short *)((int)extraout_A0 + 0x7e) != 5) {
          *(undefined2 *)((int)extraout_A0 + 0x7e) = 5;
          (**(code **)(*extraout_A0 + 0x248))();
        }
        if (_DAT_00028846 != *(short *)(extraout_A0 + 0x1f)) {
          *(short *)(extraout_A0 + 0x1f) = _DAT_00028846;
          (**(code **)(*extraout_A0 + 0x26c))();
        }
      }
    }
    func_0x00002a50(0xe0,0xf9);
    iVar2 = _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c8;
    uVar15 = (undefined1)((uint)iVar2 >> 0x10);
    iVar14 = _DAT_0002884c + _DAT_00028846 * 0x14;
    func_0x00002ad8(1,(short)iVar14,(char)iVar2);
    uVar12 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    uVar10 = (undefined1)((uint)acStack_54 >> 0x10);
    func_0x000076d0((short)acStack_54,(short)extraout_A0_00);
    func_0x00007320((short)auStack_154,(short)acStack_54,uVar10,uVar12,(short)((uint)iVar14 >> 0x10)
                    ,uVar15);
    func_0x00006e38(_DAT_00027ede,0x6274,extraout_A0w);
    func_0x00002ad8(0x710002,(int)*(short *)(_DAT_00028846 * 0x14 + _DAT_0002884c + 0x186));
    func_0x000076d0(acStack_54,extraout_A0_01);
    func_0x00007320(auStack_254,(short)acStack_54);
    func_0x00006e38(_DAT_00027ede,0x6d6f6e65,extraout_A0w_00);
  }
  for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
    (**(code **)(*_DAT_00027ede + 0x188))((short)_DAT_00027ede,(char)sVar5 + '0');
    if (extraout_A0_02 != 0) {
      uVar10 = 0xf8;
      func_0x00004768((char)extraout_A0_02,(char)_DAT_00028846);
      func_0x00004778((short)extraout_A0_02,0,uVar10);
    }
  }
  func_0x000027f8();
  func_0x00002a50(0xe0,0xf9);
  sVar5 = 0;
  sVar6 = 0;
  do {
    if (0x1b < sVar5) {
      for (; sVar6 < 0x1c; sVar6 = sVar6 + 1) {
        uVar10 = (undefined1)((uint)(sVar6 + 0x61726d30) >> 0x10);
        (**(code **)(*_DAT_00027ede + 0x188))((short)_DAT_00027ede,(char)(sVar6 + 0x61726d30));
        if (extraout_A0_04 != (int *)0x0) {
          uVar15 = (undefined1)((uint)extraout_A0_04 >> 0x10);
          (**(code **)(*extraout_A0_04 + 0x334))();
          (**(code **)(*extraout_A0_04 + 0x70))((char)extraout_A0_04,uVar15,uVar10);
        }
        if (param_1._0_2_ == 0) {
          func_0x00006e38((char)_DAT_00027ede,(char)sVar6 + '0',0x76);
        }
      }
      func_0x000049a0();
      return;
    }
    if ((-1 < *(short *)(_DAT_00027ee2 + 0x1e + sVar5 * 0x3e)) && (sVar6 < 0x14)) {
      bVar3 = false;
      for (sVar7 = 0; sVar7 < 4; sVar7 = sVar7 + 1) {
        if ((int)*(char *)((int)sVar7 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da) ==
            (int)*(short *)(_DAT_00027ee2 + sVar5 * 0x3e)) {
          bVar3 = true;
          break;
        }
      }
      (**(code **)(*_DAT_00027ede + 0x188))((short)_DAT_00027ede,(char)sVar6 + '0');
      if (extraout_A0_03 != (int *)0x0) {
        if (((*(short *)(_DAT_00027ee2 + 0x1e + sVar5 * 0x3e) == 0) ||
            (*(short *)(_DAT_00028846 * 0x14 + _DAT_0002884c + 0x186) <
             *(short *)(_DAT_00027ee2 + 0x1e + sVar5 * 0x3e))) || (bVar3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        uVar12 = *(undefined2 *)(_DAT_00027ee2 + sVar5 * 0x3e);
        uVar15 = (undefined1)((uint)extraout_A0_03 >> 0x10);
        uVar10 = 0x30;
        func_0x00004768((char)extraout_A0_03,(char)_DAT_00028846);
        uVar4 = (ushort)!bVar3;
        uVar13 = 1;
        uVar11 = (undefined2)((uint)extraout_A0_03 >> 0x10);
        func_0x00004778((short)extraout_A0_03,0,uVar10);
        (**(code **)(*extraout_A0_03 + 0x70))
                  ((char)extraout_A0_03,uVar11,uVar13,uVar4,uVar15,uVar12);
      }
      if (param_1._0_2_ == 0) {
        if (*(short *)(_DAT_00027ee2 + 0x1e + sVar5 * 0x3e) == 0) {
          pcVar8 = acStack_54;
          pcVar9 = &DAT_00015714;
          do {
            cVar1 = *pcVar9;
            *pcVar8 = cVar1;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
        }
        else {
          func_0x000076d0((char)acStack_54,0x570e,
                          (char)*(undefined2 *)(_DAT_00027ee2 + 0x1e + sVar5 * 0x3e));
        }
        func_0x00007320((char)auStack_354,(char)acStack_54);
        func_0x00006e38((char)_DAT_00027ede,(char)sVar6 + '0',extraout_A0b);
      }
      sVar6 = sVar6 + 1;
    }
    sVar5 = sVar5 + 1;
  } while( true );
}



// Function: FUN_0000056c at 0000056c
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000056c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = _DAT_00015dee;
  func_0x00003300();
  uVar1 = _DAT_00015dee;
  func_0x00007450(uVar2);
  func_0x00007558(_DAT_00015dee,uVar1);
  func_0x00004800();
  return;
}



// Function: FUN_000005ac at 000005ac
// Size: 682 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005ac(undefined4 param_1)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined2 uVar9;
  
  func_0x000027f8();
  sVar7 = 0;
  for (sVar5 = 0; sVar6 = param_1._0_2_, sVar5 < 0x1c; sVar5 = sVar5 + 1) {
    if ((-1 < *(short *)(_DAT_00027ee2 + 0x1e + sVar5 * 0x3e)) && (sVar7 < 0x14)) {
      sVar6 = sVar5;
      if (sVar7 == param_1._0_2_) break;
      sVar7 = sVar7 + 1;
    }
  }
  iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
  cVar2 = *(char *)(iVar8 + 0x15f0);
  *(char *)(_DAT_00027ee6 + iVar8 + 0x15da) = (char)*(undefined2 *)(_DAT_00027ee2 + sVar6 * 0x3e);
  *(char *)((int)_DAT_00027ee6 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15de) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x18 + sVar6 * 0x3e);
  *(char *)((int)_DAT_00027ee6 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ea) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x1a + sVar6 * 0x3e);
  *(char *)((int)_DAT_00027ee6 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15e2) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x16 + sVar6 * 0x3e);
  *(char *)((int)_DAT_00027ee6 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15e6) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x1c + sVar6 * 0x3e);
  uVar4 = func_0x000032d0();
  *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8) = uVar4;
  psVar1 = (short *)(_DAT_00028846 * 0x14 + _DAT_0002884c + 0x186);
  *psVar1 = *psVar1 - *(short *)(_DAT_00027ee2 + 0x1e + sVar6 * 0x3e);
  func_0x000049a0();
  if ('\0' < *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1)) {
    bVar3 = false;
    for (sVar7 = 0; sVar7 < 4; sVar7 = sVar7 + 1) {
      if ((int)*(char *)((int)sVar7 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da) ==
          (int)(short)cVar2) {
        bVar3 = true;
        break;
      }
    }
    if (!bVar3) {
      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) = 0;
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f6) = 0;
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f8) = 0xffff;
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15fa) = 0xffff;
      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f0) = 0xff;
    }
  }
  iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
  *(undefined1 *)(iVar8 + 0x15f0) = *(undefined1 *)(_DAT_00027ee6 + iVar8 + 0x15da);
  iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
  *(undefined1 *)(iVar8 + 0x15f1) = *(undefined1 *)(_DAT_00027ee6 + iVar8 + 0x15de);
  if ((_DAT_00027ee6 < 3) &&
     (*(char *)((int)_DAT_00027ee6 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15db) < '\0')) {
    _DAT_00027ee6 = _DAT_00027ee6 + 1;
  }
  uVar9 = 0;
  FUN_00000126();
  sVar7 = _DAT_00015dee;
  func_0x00007450(uVar9);
  func_0x00007488(sVar7);
  return;
}



// Function: FUN_00000856 at 00000856
// Size: 26 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000856(undefined4 param_1)

{
  _DAT_00027ee6 = param_1._0_2_;
  FUN_00000126();
  return;
}



// Function: FUN_00000870 at 00000870
// Size: 118 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000870(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  func_0x000027f8();
  sVar3 = 0;
  for (sVar2 = 0; sVar1 = param_1._0_2_, sVar2 < 0x1c; sVar2 = sVar2 + 1) {
    if ((-1 < *(short *)(_DAT_00027ee2 + 0x1e + sVar2 * 0x3e)) && (sVar3 < 0x14)) {
      sVar1 = sVar2;
      if (sVar3 == param_1._0_2_) break;
      sVar3 = sVar3 + 1;
    }
  }
  func_0x00005320(*(undefined2 *)(sVar1 * 0x3e + _DAT_00027ee2 + 0x18));
  func_0x000049a0();
  return;
}



