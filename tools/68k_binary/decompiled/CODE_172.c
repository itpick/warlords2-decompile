// Warlords II - Decompiled 68k Code
// Segment: CODE_172
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000001a at 0000001a
// Size: 44 bytes

void FUN_0000001a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x58);
  if (extraout_A0 != 0) {
    FUN_00000046(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000046 at 00000046
// Size: 88 bytes

void FUN_00000046(undefined4 *param_1)

{
  func_0x00002428(param_1);
  *param_1 = 0x88d2;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  return;
}



// Function: FUN_0000009e at 0000009e
// Size: 388 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000009e(int *param_1,int *param_2,undefined2 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 uVar6;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x110))((char)param_2,(char)param_3);
    uVar6 = extraout_A0w;
  }
  func_0x00002430(param_1,param_3,uVar6);
  *(int **)((int)param_1 + 0x2e) = param_2;
  *(int *)((int)param_1 + 0x32) = param_2[0x1f];
  iVar3 = **(int **)((int)param_1 + 0x32);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(iVar3 + 0x20);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(iVar3 + 0x22);
  sVar5 = *(short *)(iVar3 + 0x22) - *(short *)(iVar3 + 0x20);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar3 = func_0x000076a8(auStack_4a);
  if (iVar3 == 0) {
    if (param_4._0_1_ != '\0') {
      func_0x00001e98((char)sVar5);
      if (0 < sVar5) {
        puVar1 = (undefined1 *)
                 ((int)*(short *)((int)param_1 + 0x36) +
                 **(int **)(**(int **)((int)param_1 + 0x32) + 0x3e));
        puVar2 = (undefined1 *)*extraout_A0;
        for (iVar3 = (int)sVar5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(undefined4 **)((int)param_1 + 0x3a) = extraout_A0;
      *(short *)((int)param_1 + 0x52) = *(short *)((int)param_1 + 0x36) - *(short *)(param_1 + 0xe);
      func_0x00001e98(0);
      *(undefined4 *)((int)param_1 + 0x4e) = extraout_A0_00;
    }
    if ((*(char *)((int)param_2 + 0xbd) == '\x01') &&
       (cVar4 = (**(code **)(*param_2 + 0x410))
                          ((short)param_2,
                           (char)*(undefined2 *)(**(int **)((int)param_1 + 0x32) + 0x20),
                           (char)*(undefined2 *)(**(int **)((int)param_1 + 0x32) + 0x22)),
       cVar4 != '\0')) {
      func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10((char)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_0000024e at 0000024e
// Size: 14 bytes

void FUN_0000024e(void)

{
  return;
}



// Function: FUN_0000025c at 0000025c
// Size: 44 bytes

void FUN_0000025c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x5a);
  if (extraout_A0 != 0) {
    func_0x00007000(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000288 at 00000288
// Size: 66 bytes

void FUN_00000288(int param_1,undefined4 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_0000009e(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(bool *)(param_1 + 0x1c) = param_3 != 0x68;
  return;
}



// Function: FUN_000002ca at 000002ca
// Size: 14 bytes

void FUN_000002ca(void)

{
  return;
}



// Function: FUN_000002d8 at 000002d8
// Size: 44 bytes

void FUN_000002d8(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x58);
  if (extraout_A0 != 0) {
    func_0x00007008(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000304 at 00000304
// Size: 518 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000304(int *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined4 extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int *piVar3;
  int extraout_A0_02;
  int extraout_A0_03;
  undefined4 local_5e;
  int local_5a;
  int local_56;
  int local_52;
  int local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_5e = 0x25252525;
  FUN_0000009e((short)param_1,(short)param_2,0x69);
  local_4e = 0;
  local_52 = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    func_0x00001e98(0);
    local_52 = extraout_A0;
    if (*(char *)(param_2 + 0xbd) == '\x01') {
      func_0x00001e98(0);
      local_4e = extraout_A0_00;
    }
    sVar2 = (**(code **)(*_DAT_000264b2 + 0xd8))
                      ((short)_DAT_000264b2,(short)local_52,(char)&local_5e);
    if (sVar2 < 1) {
      func_0x00001d08((char)local_52);
      func_0x00001d08((short)local_4e);
    }
    else {
      *(int *)((int)param_1 + 0x46) = local_52;
      *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)(**(int **)((int)param_1 + 0x32) + 0x20)
      ;
      *(short *)(param_1 + 0x11) = sVar2 + *(short *)((int)param_1 + 0x42);
      *(short *)((int)param_1 + 0x52) =
           sVar2 - (*(short *)(param_1 + 0xe) - *(short *)((int)param_1 + 0x36));
      if (*(char *)(param_2 + 0xbd) == '\x01') {
        iVar1 = (**(code **)(*(int *)_DAT_000264b2[0x12] + 0x364))
                          ((short)(int *)_DAT_000264b2[0x12],(short)local_4e,0x6c);
        if (iVar1 < 1) {
          func_0x00001d08((char)local_4e);
          local_4e = extraout_A0_01;
        }
        else {
          *(int *)((int)param_1 + 0x4a) = local_4e;
          param_1[0x15] = iVar1 - param_1[0x15];
        }
      }
      if (*(int *)((int)param_1 + 0x4e) != 0) {
        local_5a = 0;
        local_56 = param_1[0x15] + (int)*(short *)((int)param_1 + 0x52);
        if (local_56 < 1) {
          piVar3 = &local_5a;
        }
        else {
          piVar3 = &local_56;
        }
        func_0x00001ec0((short)*(undefined4 *)((int)param_1 + 0x4e),(char)*piVar3);
      }
      func_0x00001e60();
    }
    _DAT_00025f52 = local_10;
  }
  else {
    if (local_52 != *(int *)((int)param_1 + 0x46)) {
      func_0x00001d08((char)local_52);
      local_52 = extraout_A0_02;
    }
    if (local_4e != *(int *)((int)param_1 + 0x4a)) {
      func_0x00001d08((char)local_4e);
      local_4e = extraout_A0_03;
    }
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_0000050a at 0000050a
// Size: 14 bytes

void FUN_0000050a(void)

{
  return;
}



// Function: FUN_00000518 at 00000518
// Size: 44 bytes

void FUN_00000518(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x72);
  if (extraout_A0 != 0) {
    func_0x00007010(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000544 at 00000544
// Size: 86 bytes

void FUN_00000544(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0000009e(param_1,param_2,param_4);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0xaa);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0xae);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0xb2);
  *(undefined4 *)(param_1 + 0x66) = *param_3;
  *(undefined4 *)(param_1 + 0x6a) = param_3[1];
  *(undefined4 *)(param_1 + 0x6e) = param_3[2];
  *(undefined2 *)(param_1 + 0x58) = param_5._0_2_;
  return;
}



// Function: FUN_0000059a at 0000059a
// Size: 14 bytes

void FUN_0000059a(void)

{
  return;
}



// Function: FUN_000005a8 at 000005a8
// Size: 14 bytes

void FUN_000005a8(void)

{
  return;
}



// Function: FUN_000005b6 at 000005b6
// Size: 44 bytes

void FUN_000005b6(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x5c);
  if (extraout_A0 != 0) {
    func_0x00007018(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000005e2 at 000005e2
// Size: 220 bytes

int FUN_000005e2(undefined2 param_1,int param_2)

{
  int iVar1;
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar2;
  int extraout_A0_00;
  undefined2 extraout_A0w_00;
  int extraout_A0_01;
  undefined2 extraout_A0w_01;
  
  if ((param_2 == 0x67) || (param_2 == 0x68)) {
    func_0x000073b0(0x5a);
    uVar2 = 0;
    if (extraout_A0 != 0) {
      func_0x00007000((char)extraout_A0);
      uVar2 = extraout_A0w;
    }
    iVar1 = FUN_00000288(uVar2,param_1,(char)param_2);
  }
  else if (param_2 == 0x69) {
    func_0x000073b0(0x58);
    uVar2 = 0;
    if (extraout_A0_00 != 0) {
      func_0x00007008((char)extraout_A0_00);
      uVar2 = extraout_A0w_00;
    }
    iVar1 = FUN_00000304(uVar2,(char)param_1);
  }
  else {
    iVar1 = param_2 + -0x6a;
    if (iVar1 == 0) {
      func_0x000073b0(0x58);
      uVar2 = 0;
      if (extraout_A0_01 != 0) {
        FUN_00000046((char)extraout_A0_01);
        uVar2 = extraout_A0w_01;
      }
      iVar1 = FUN_0000009e(uVar2,param_1,(short)param_2);
    }
  }
  return iVar1;
}



// Function: FUN_000006be at 000006be
// Size: 368 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006be(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uStackY_20;
  undefined2 uStack_1c;
  undefined2 uVar3;
  int local_8;
  
  uStackY_20 = SUB42(param_1,0);
  switch(param_2) {
  case 0x67:
  case 0x68:
  case 0x6a:
    *(undefined1 *)((int)param_1 + 0xce) = 0;
    (**(code **)(*param_1 + 0x3a0))(uStackY_20,param_2);
    (**(code **)(*param_1 + 0x108))(uStackY_20,extraout_A0);
    break;
  case 0x69:
    local_8 = 0x25252525;
    iVar1 = (**(code **)(*_DAT_000264b2 + 0xd8))((short)_DAT_000264b2,0,&local_8);
    if (local_8 == 0x54455854) {
      if (-1 < iVar1) {
        uStack_1c = (undefined2)((uint)param_1[0x20] >> 0x10);
        uVar3 = (undefined2)param_1[0x20];
        func_0x000075d0();
        if ((int)*(short *)(param_1 + 0x27) - CONCAT22(uStack_1c,uVar3) <
            iVar1 - ((int)*(short *)(*(int *)param_1[0x1f] + 0x22) -
                    (int)*(short *)(*(int *)param_1[0x1f] + 0x20))) {
          func_0x00001bd0();
        }
        else {
          *(undefined1 *)((int)param_1 + 0xce) = 0;
          (**(code **)(*param_1 + 0x3a0))(uStackY_20,(short)param_2);
          (**(code **)(*param_1 + 0x108))(uStackY_20,extraout_A0w);
        }
      }
    }
    else {
      func_0x00005c18(uStackY_20,param_2);
    }
    break;
  default:
    func_0x00005c18(uStackY_20,param_2);
    break;
  case 0x6e:
    cVar2 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar2 != '\0') {
      *(undefined1 *)((int)param_1 + 0xce) = 0;
      (**(code **)(*param_1 + 0x3e4))();
      (**(code **)(*param_1 + 0x3ac))();
      *(undefined1 *)(param_1 + 0x30) = 1;
      (**(code **)(*param_1 + 0x260))();
    }
  }
  return;
}



