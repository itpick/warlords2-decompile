// Warlords II - Decompiled 68k Code
// Segment: CODE_052
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000e0 at 000000e0
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000e0(undefined2 param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = -1;
  sVar1 = (short)param_2;
  if ((param_2 < 0x70656131) || (0x70656137 < param_2)) {
    if ((param_2 < 0x686f7331) || (0x686f7337 < param_2)) {
      if ((0x77617230 < param_2) && (param_2 < 0x77617238)) {
        sVar2 = sVar1 + -0x7231;
      }
    }
    else {
      sVar2 = sVar1 + -0x7331;
    }
  }
  else {
    sVar2 = sVar1 + -0x6131;
  }
  if (sVar2 == -1) {
    if (param_2 == 0x7265706f) {
      func_0x00005360();
    }
    else if (param_2 == 0x61637469) {
      func_0x00005360();
    }
    else if (param_2 == 0x646f6e65) {
      func_0x00005360();
    }
    else {
      func_0x00005308(param_1,sVar1);
    }
  }
  else {
    func_0x00005360();
  }
  return;
}



// Function: FUN_000001e0 at 000001e0
// Size: 102 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001e0(int *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [8];
  
  if (*(char *)(param_1 + 0x1f) != '\0') {
    func_0x00004fe0(param_1,param_2);
    return;
  }
  local_1c = _DAT_00025b5a;
  local_18 = _DAT_00025b5e;
  local_14 = *(undefined4 *)((int)param_1 + 0x32);
  local_10 = *(undefined4 *)((int)param_1 + 0x36);
  (**(code **)(*param_1 + 0x148))(param_1,&local_1c,auStack_c);
  func_0x00005768(0x29622);
  return;
}



// Function: FUN_000002fe at 000002fe
// Size: 20 bytes

void FUN_000002fe(void)

{
  func_0x00005768(0x29622);
  return;
}



// Function: FUN_00000548 at 00000548
// Size: 346 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000548(void)

{
  short unaff_D3w;
  short unaff_D4w;
  int unaff_A6;
  
  do {
    func_0x00002378();
    while( true ) {
      do {
        unaff_D4w = unaff_D4w + 1;
        while (7 < unaff_D4w) {
          unaff_D3w = unaff_D3w + 1;
          if (7 < unaff_D3w) {
            return;
          }
          unaff_D4w = 0;
        }
      } while ((unaff_D3w != unaff_D4w) &&
              ((*(short *)(unaff_D3w * 2 + _DAT_0002884c + 0x138) == 0 ||
               (*(short *)(unaff_D4w * 2 + _DAT_0002884c + 0x138) == 0))));
      *(short *)(unaff_A6 + -4) = unaff_D4w * 0x1d + 0x1e;
      *(short *)(unaff_A6 + -2) = unaff_D3w * 0x20 + 0x21;
      if (unaff_D3w == unaff_D4w) break;
      if ((byte)((uint)(*(int *)(unaff_D3w * 8 + _DAT_0002884c + 0x1582 + (int)unaff_D4w) << 6) >>
                0x1e) == 2) {
        *(undefined2 *)(unaff_A6 + -0x14) = 0;
        *(undefined2 *)(unaff_A6 + -0x12) = 0x40;
        *(undefined2 *)(unaff_A6 + -0x10) = 0x1d;
        *(undefined2 *)(unaff_A6 + -0xe) = 0x60;
        func_0x00002378();
      }
      else if ((byte)((uint)(*(int *)(unaff_D3w * 8 + _DAT_0002884c + 0x1582 + (int)unaff_D4w) << 6)
                     >> 0x1e) == 0) {
        *(undefined2 *)(unaff_A6 + -0x1c) = 0;
        *(undefined2 *)(unaff_A6 + -0x1a) = 0;
        *(undefined2 *)(unaff_A6 + -0x18) = 0x1d;
        *(undefined2 *)(unaff_A6 + -0x16) = 0x20;
        func_0x00002378();
      }
    }
    *(undefined2 *)(unaff_A6 + -0xc) = 0;
    *(undefined2 *)(unaff_A6 + -10) = 0x20;
    *(undefined2 *)(unaff_A6 + -8) = 0x1d;
    *(undefined2 *)(unaff_A6 + -6) = 0x40;
  } while( true );
}



// Function: FUN_00000628 at 00000628
// Size: 102 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000628(int *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [8];
  
  if (param_1[0x2a] != 0) {
    func_0x00006c90(param_1,param_2);
    return;
  }
  local_1c = _DAT_00025b5a;
  local_18 = _DAT_00025b5e;
  local_14 = *(undefined4 *)((int)param_1 + 0x32);
  local_10 = *(undefined4 *)((int)param_1 + 0x36);
  (**(code **)(*param_1 + 0x148))(param_1,&local_1c,auStack_c);
  func_0x00005768(0x29622);
  return;
}



// Function: FUN_00000746 at 00000746
// Size: 96 bytes

void FUN_00000746(int *param_1)

{
  FUN_00000548((short)param_1);
  if ((param_1[0x2a] == 0) && (param_1[0x2c] != 0)) {
    (**(code **)(*param_1 + 0x200))((short)param_1,(short)param_1[0x2c]);
    param_1[0x2c] = 0;
  }
  return;
}



// Function: FUN_000007a6 at 000007a6
// Size: 266 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007a6(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_A0;
  int *piVar3;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(short *)(_DAT_0002884c + 0x11c) != 0) {
    if (_DAT_0002883a == (int *)0x0) {
      (**(code **)(*_DAT_000257ee + 0x68))();
      _DAT_0002883a = extraout_A0;
      func_0x00001bf0(extraout_A0);
    }
    _DAT_00015cbc = 1;
    (**(code **)(*_DAT_0002883a + 0x194))();
    FUN_000008b0();
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
      piVar3 = _DAT_0002883a;
      uVar2 = (**(code **)(*_DAT_0002883a + 0x40c))();
      (**(code **)(*_DAT_0002883a + 0x3a0))((short)_DAT_0002883a,piVar3,uVar2);
      _DAT_0002883a = (int *)0x0;
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_0002883a != (int *)0x0) {
        (**(code **)(*_DAT_0002883a + 0x3a0))();
      }
      _DAT_0002883a = (int *)0x0;
      func_0x00001c10();
    }
  }
  return;
}



// Function: FUN_000008b0 at 000008b0
// Size: 366 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000008b0(void)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 extraout_A0w;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined1 extraout_A0b;
  undefined1 extraout_A0b_00;
  int *extraout_A0_02;
  undefined2 auStackY_1002e [8];
  short asStackY_1001e [32610];
  undefined1 uVar3;
  undefined1 auStack_12e [256];
  undefined2 local_2e [8];
  short local_1e [8];
  short local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*_DAT_0002883a + 0x400))();
  uVar3 = 0xd6;
  func_0x00001bf0((char)extraout_A0w);
  local_c = 7;
  local_8 = 0x14;
  func_0x000048f0(extraout_A0w,0x616b,(short)((uint)&local_c >> 0x10),uVar3);
  (**(code **)(*extraout_A0 + 0x188))(extraout_A0,0x67726964);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x26c))();
  }
  uVar1 = FUN_0000114c((short)&local_e,(char)local_1e,(char)local_2e);
  for (sVar2 = 0; sVar2 < local_e; sVar2 = sVar2 + 1) {
    (**(code **)(*extraout_A0 + 0x188))((char)extraout_A0,(char)sVar2 + '1');
    if (extraout_A0_01 != (int *)0x0) {
      if (*(short *)((int)extraout_A0_01 + 0x7e) != 2) {
        *(undefined2 *)((int)extraout_A0_01 + 0x7e) = 2;
      }
      if (local_1e[sVar2] != *(short *)(extraout_A0_01 + 0x1f)) {
        *(short *)(extraout_A0_01 + 0x1f) = local_1e[sVar2];
        (**(code **)(*extraout_A0_01 + 0x26c))();
      }
    }
    func_0x00002ad8((char)local_2e[sVar2]);
    func_0x00007320((short)auStack_12e,extraout_A0b);
    uVar1 = func_0x00006e38((short)extraout_A0,sVar2 + 0x6231,extraout_A0b_00);
  }
  for (; sVar2 < 8; sVar2 = sVar2 + 1) {
    (**(code **)(*extraout_A0 + 0x188))((char)extraout_A0,(char)sVar2 + '1');
    uVar1 = 0;
    if (extraout_A0_02 != (int *)0x0) {
      uVar1 = (**(code **)(*extraout_A0_02 + 0x334))();
    }
  }
  return uVar1;
}



// Function: FUN_00000a1e at 00000a1e
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a1e(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_A0;
  int *piVar3;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(short *)(_DAT_0002884c + 0x11c) != 0) {
    if (_DAT_0002883a == (int *)0x0) {
      (**(code **)(*_DAT_000257ee + 0x68))();
      _DAT_0002883a = extraout_A0;
      func_0x00001bf0(extraout_A0);
    }
    (**(code **)(*_DAT_0002883a + 0x194))();
    _DAT_00015cbc = 0;
    FUN_00000b2a();
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
      piVar3 = _DAT_0002883a;
      uVar2 = (**(code **)(*_DAT_0002883a + 0x40c))();
      (**(code **)(*_DAT_0002883a + 0x3a0))((short)_DAT_0002883a,piVar3,uVar2);
      _DAT_0002883a = (int *)0x0;
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_0002883a != (int *)0x0) {
        (**(code **)(*_DAT_0002883a + 0x3a0))();
      }
      _DAT_0002883a = (int *)0x0;
      func_0x00001c10();
    }
  }
  return;
}



// Function: FUN_00000b2a at 00000b2a
// Size: 1416 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00000b2a(undefined4 param_1)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  undefined2 extraout_A0w;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  int *extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 auStack_162 [256];
  int local_62;
  short local_5e;
  int local_5c;
  int local_58;
  short local_54;
  int local_52;
  int local_4e;
  short local_4a;
  int local_48;
  short local_44;
  short local_42;
  int local_40;
  int local_3c;
  short local_38;
  int local_36;
  int local_32;
  short local_2e;
  int local_2c;
  int local_28;
  undefined2 local_24;
  short local_22;
  undefined2 local_20;
  short local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*_DAT_0002883a + 0x400))();
  uVar6 = 0x52;
  func_0x00001bf0((char)extraout_A0w);
  local_1c = 7;
  local_18 = 0x14;
  piVar1 = (int *)func_0x000048f0(extraout_A0w,0x616b,(char)((uint)&local_1c >> 0x10),uVar6);
  uVar6 = SUB41(extraout_A0,0);
  if (param_1._0_2_ == 0) {
    (**(code **)(*extraout_A0 + 0x188))(uVar6,0x65);
    if (extraout_A0_00 != (int *)0x0) {
      if (*(short *)((int)extraout_A0_00 + 0x7e) != 3) {
        *(undefined2 *)((int)extraout_A0_00 + 0x7e) = 3;
      }
      if (_DAT_00028846 != *(short *)(extraout_A0_00 + 0x1f)) {
        *(short *)(extraout_A0_00 + 0x1f) = _DAT_00028846;
        (**(code **)(*extraout_A0_00 + 0x26c))();
      }
    }
    func_0x00007320((short)auStack_162,(char)_DAT_0002884c + (char)_DAT_00028846 * '\x14');
    piVar1 = (int *)func_0x00006e38((short)extraout_A0,0x6d65,extraout_A0b);
  }
  sVar2 = 0;
  cVar3 = '\0';
  do {
    if (7 < sVar2) {
      return piVar1;
    }
    if (sVar2 != _DAT_00028846) {
      (**(code **)(*extraout_A0 + 0x188))(uVar6,cVar3 + '1');
      if (extraout_A0_01 != (int *)0x0) {
        if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
          (**(code **)(*extraout_A0_01 + 0x334))();
        }
        else {
          if (*(short *)((int)extraout_A0_01 + 0x7e) != 3) {
            *(undefined2 *)((int)extraout_A0_01 + 0x7e) = 3;
          }
          if (sVar2 != *(short *)(extraout_A0_01 + 0x1f)) {
            *(short *)(extraout_A0_01 + 0x1f) = sVar2;
            (**(code **)(*extraout_A0_01 + 0x26c))();
          }
        }
      }
      (**(code **)(*extraout_A0 + 0x188))(uVar6,cVar3 + '1');
      if (extraout_A0_02 != 0) {
        if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
          FUN_0000152c((char)extraout_A0_02);
        }
        else {
          local_c = 0;
          local_a = 0;
          local_8 = 0x28;
          local_6 = 0x28;
          local_1e = (ushort)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 +
                                             (int)*(short *)(_DAT_0002884c + 0x110)) << 6) >> 0x1e)
                     * 0x28;
          local_20 = 0x1d;
          uVar4 = 0x16;
          func_0x00007278((char)&local_c,(char)&local_20);
          func_0x00003b70(extraout_A0_02,(short)((uint)&local_c >> 0x10),0x24,uVar4);
        }
      }
      (**(code **)(*extraout_A0 + 0x188))(uVar6,cVar3 + '1');
      if (extraout_A0_03 != 0) {
        if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) {
          local_38 = *(short *)(_DAT_0002884c + 0x110);
          local_32 = _DAT_0002884c + 0x1582;
          local_36 = sVar2 * 8 + local_32;
          local_2e = *(short *)(_DAT_0002884c + 0x110);
          local_28 = _DAT_0002884c + 0x1582;
          local_2c = sVar2 * 8 + local_28;
          if ((byte)((uint)(*(int *)(local_2c + local_2e) << 6) >> 0x1e) !=
              (byte)((uint)(*(int *)(local_36 + local_38) << 4) >> 0x1e)) {
            local_14 = 0;
            local_12 = 0;
            local_10 = 0x28;
            local_e = 0x28;
            local_42 = *(short *)(_DAT_0002884c + 0x110);
            local_3c = _DAT_0002884c + 0x1582;
            local_40 = sVar2 * 8 + local_3c;
            local_44 = (ushort)((uint)(*(int *)(local_40 + local_42) << 4) >> 0x1e) * 0x28;
            local_24 = 0x1d;
            uVar4 = 0x3a;
            local_22 = local_44;
            func_0x00007278((char)&local_14,(char)&local_24);
            func_0x00003b70(extraout_A0_03,(short)((uint)&local_14 >> 0x10),0x24,uVar4);
            goto LAB_00000e58;
          }
        }
        FUN_0000152c((char)extraout_A0_03);
      }
LAB_00000e58:
      (**(code **)(*extraout_A0 + 0x188))(uVar6,cVar3 + '1');
      uVar5 = (undefined2)((uint)extraout_A0_04 >> 0x10);
      if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
        if (extraout_A0_04 != (int *)0x0) {
          uVar4 = 0xff;
          (**(code **)(*extraout_A0_04 + 0x3d8))();
          (**(code **)(*extraout_A0_04 + 0x70))((short)extraout_A0_04,uVar5,uVar4);
        }
      }
      else {
        local_4a = *(short *)(_DAT_0002884c + 0x110);
        local_48 = _DAT_0002884c + 0x1582;
        local_4e = local_4a * 8 + local_48;
        if ((byte)((uint)(*(int *)(local_4e + sVar2) << 4) >> 0x1e) == 0) {
          if (extraout_A0_04 != (int *)0x0) {
            (**(code **)(*extraout_A0_04 + 0x3a8))();
          }
        }
        else if (extraout_A0_04 != (int *)0x0) {
          (**(code **)(*extraout_A0_04 + 0x3a8))();
        }
      }
      (**(code **)(*extraout_A0 + 0x188))(uVar6,cVar3 + '1');
      uVar5 = (undefined2)((uint)extraout_A0_05 >> 0x10);
      if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
        if (extraout_A0_05 != (int *)0x0) {
          uVar4 = 0xff;
          (**(code **)(*extraout_A0_05 + 0x3d8))();
          (**(code **)(*extraout_A0_05 + 0x70))((short)extraout_A0_05,uVar5,uVar4);
        }
      }
      else {
        local_54 = *(short *)(_DAT_0002884c + 0x110);
        local_52 = _DAT_0002884c + 0x1582;
        local_58 = local_54 * 8 + local_52;
        if ((byte)((uint)(*(int *)(local_58 + sVar2) << 4) >> 0x1e) == 1) {
          if (extraout_A0_05 != (int *)0x0) {
            (**(code **)(*extraout_A0_05 + 0x3a8))();
          }
        }
        else if (extraout_A0_05 != (int *)0x0) {
          (**(code **)(*extraout_A0_05 + 0x3a8))();
        }
      }
      (**(code **)(*extraout_A0 + 0x188))(uVar6,cVar3 + '1');
      uVar5 = (undefined2)((uint)extraout_A0_06 >> 0x10);
      piVar1 = extraout_A0_06;
      if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
        if (extraout_A0_06 != (int *)0x0) {
          uVar4 = 0xff;
          (**(code **)(*extraout_A0_06 + 0x3d8))();
          piVar1 = (int *)(**(code **)(*extraout_A0_06 + 0x70))((short)extraout_A0_06,uVar5,uVar4);
        }
      }
      else {
        local_5e = *(short *)(_DAT_0002884c + 0x110);
        local_5c = _DAT_0002884c + 0x1582;
        local_62 = local_5e * 8 + local_5c;
        if ((byte)((uint)(*(int *)(local_62 + sVar2) << 4) >> 0x1e) == 2) {
          if (extraout_A0_06 != (int *)0x0) {
            piVar1 = (int *)(**(code **)(*extraout_A0_06 + 0x3a8))();
          }
        }
        else if (extraout_A0_06 != (int *)0x0) {
          piVar1 = (int *)(**(code **)(*extraout_A0_06 + 0x3a8))();
        }
      }
      cVar3 = cVar3 + '\x01';
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_000010b2 at 000010b2
// Size: 154 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000010b2(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  
  sVar3 = _DAT_00028846;
  uVar2 = param_1 >> 0x10;
  if ((*(short *)(_DAT_00028846 * 2 + _DAT_0002884c + 0xd0) == 0) &&
     (_DAT_00028846 <= param_1._2_2_)) {
    param_1._2_2_ = param_1._2_2_ + 1;
  }
  puVar1 = (uint *)(_DAT_00028846 * 8 + _DAT_0002884c + 0x1582 + (int)param_1._2_2_);
  *puVar1 = *puVar1 & 0xf3ffffff | (uVar2 & 3) << 0x1a;
  if (*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0) {
    FUN_00000b2a();
  }
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))(*(int **)(_DAT_000297f4 + 0x80),0,0);
  return;
}



// Function: FUN_0000114c at 0000114c
// Size: 390 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000114c(short *param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = 0;
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) != 0) {
      *(short *)(param_2 + sVar3 * 2) = sVar4;
      sVar3 = sVar3 + 1;
    }
  }
  *param_1 = sVar3;
  for (sVar4 = 1; sVar3 = sVar4, sVar4 < *param_1; sVar4 = sVar4 + 1) {
    for (; (*(short *)(*(short *)(param_2 + sVar3 * 2) * 2 + _DAT_0002884c + 0x1122) <
            *(short *)(*(short *)(param_2 + (sVar3 + -1) * 2) * 2 + _DAT_0002884c + 0x1122) &&
           (0 < sVar3)); sVar3 = sVar3 + -1) {
      uVar1 = *(undefined2 *)(param_2 + sVar3 * 2);
      iVar2 = (sVar3 + -1) * 2;
      *(undefined2 *)(param_2 + sVar3 * 2) = *(undefined2 *)(param_2 + iVar2);
      *(undefined2 *)(param_2 + iVar2) = uVar1;
    }
  }
  switch(*param_1) {
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *param_3 = 0;
    param_3[1] = 7;
    break;
  case 3:
    *param_3 = 0;
    param_3[1] = 3;
    param_3[2] = 7;
    break;
  case 4:
    *param_3 = 0;
    param_3[1] = 1;
    param_3[2] = 5;
    param_3[3] = 7;
    break;
  case 5:
    *param_3 = 0;
    param_3[1] = 1;
    param_3[2] = 3;
    param_3[3] = 5;
    param_3[4] = 7;
    break;
  case 6:
    *param_3 = 0;
    param_3[1] = 1;
    param_3[2] = 3;
    param_3[3] = 5;
    param_3[4] = 6;
    param_3[5] = 7;
    break;
  case 7:
    *param_3 = 0;
    param_3[1] = 1;
    param_3[2] = 3;
    param_3[3] = 4;
    param_3[4] = 5;
    param_3[5] = 6;
    param_3[6] = 7;
    break;
  case 8:
    *param_3 = 0;
    param_3[1] = 1;
    param_3[2] = 2;
    param_3[3] = 3;
    param_3[4] = 4;
    param_3[5] = 5;
    param_3[6] = 6;
    param_3[7] = 7;
  }
  return;
}



// Function: FUN_000012e4 at 000012e4
// Size: 584 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012e4(void)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  
  sVar2 = *(short *)(_DAT_0002884c + 0x110);
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    if (((sVar4 != sVar2) &&
        ((byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 6) >> 0x1e) !=
         (byte)((uint)*(undefined4 *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) >> 0x1e))) &&
       (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) != 0)) {
      uVar5 = (ushort)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 6) >>
                      0x1e);
      uVar6 = (ushort)((uint)*(undefined4 *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) >>
                      0x1e);
      if ((uVar5 == 2) && (uVar6 == 0)) {
        sVar3 = func_0x00002ad0(10);
        func_0x000074a0(sVar3 + 10);
      }
      else if ((uVar5 == 1) && (uVar6 == 0)) {
        sVar3 = func_0x00002ad0(2);
        func_0x000074a0(sVar3 + 1);
      }
      else if ((uVar5 == 2) && (uVar6 == 1)) {
        sVar3 = func_0x00002ad0(2);
        func_0x000074a0(sVar3 + 1);
      }
      puVar1 = (uint *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
      *puVar1 = *puVar1 & 0x3fffffff |
                (*(uint *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) & 0x3000000) << 6;
      func_0x00007468();
      if ((byte)((uint)*(undefined4 *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) >> 0x1e) <
          (byte)((uint)*(undefined4 *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) >> 0x1e)) {
        puVar1 = (uint *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
        *puVar1 = *puVar1 & 0x3fffffff |
                  *(uint *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) & 0xc0000000;
        func_0x00007468();
      }
    }
  }
  return;
}



// Function: FUN_0000152c at 0000152c
// Size: 40 bytes

void FUN_0000152c(int *param_1)

{
  if (*(char *)(param_1 + 0x1f) != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



