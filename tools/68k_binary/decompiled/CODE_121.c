// Warlords II - Decompiled 68k Code
// Segment: CODE_121
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000e2 at 000000e2
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000e2(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = 0;
  do {
    if (999 < sVar1) {
LAB_00000110:
      if (iVar2 != 0) {
        if (*(short *)(_DAT_0002884c + 0x182) <= sVar1) {
          *(short *)(_DAT_0002884c + 0x182) = sVar1 + 1;
        }
        *(undefined1 *)(iVar2 + 5) = *(undefined1 *)(_DAT_0002884c + 0x111);
        *(undefined2 *)(iVar2 + 0xc) = 0;
        *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) | 1;
        *(byte *)(iVar2 + 0xf) = *(byte *)(iVar2 + 0xf) & 0x80;
        *(uint *)(iVar2 + 0xe) =
             *(uint *)(iVar2 + 0xe) & 0xfffffff |
             ((uint)(*(int *)(iVar2 + 0xf) << 1) >> 0x19) << 0x1c;
        *(undefined1 *)(iVar2 + 0x10) = 0xff;
        *(undefined1 *)(iVar2 + 0x11) = 0;
        *(undefined2 *)(iVar2 + 0x12) = 0xffff;
        *(undefined2 *)(iVar2 + 0x14) = 0xffff;
      }
      return;
    }
    if (*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16) == -1) {
      iVar2 = sVar1 * 0x16 + _DAT_00028854;
      goto LAB_00000110;
    }
    sVar1 = sVar1 + 1;
  } while( true );
}



// Function: FUN_00000356 at 00000356
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000356(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short asStack_202 [255];
  
  for (sVar2 = 2; sVar2 < 0xff; sVar2 = sVar2 + 1) {
    asStack_202[sVar2] = 0;
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    psVar3 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar2 = sVar1;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar3 + 5)) &&
       (-1 < *psVar3)) {
      asStack_202[*(byte *)((int)psVar3 + 0x11)] = 1;
    }
  }
  sVar2 = 1;
  while( true ) {
    if (0xfe < sVar2) {
      return 0;
    }
    if (asStack_202[sVar2] == 0) break;
    sVar2 = sVar2 + 1;
  }
  return sVar2;
}



// Function: FUN_000003d8 at 000003d8
// Size: 10 bytes

undefined4 FUN_000003d8(void)

{
  return 0;
}



// Function: FUN_000003e2 at 000003e2
// Size: 66 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000003e2(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  while( true ) {
    if (*(short *)(_DAT_0002884c + 0x810) <= sVar1) {
      return 0xffffffff;
    }
    iVar2 = sVar1 * 0x20 + _DAT_0002884c;
    if ((*(short *)(iVar2 + 0x812) == param_1._0_2_) && (*(short *)(iVar2 + 0x814) == param_1._2_2_)
       ) break;
    sVar1 = sVar1 + 1;
  }
  return CONCAT22((short)((uint)(sVar1 * 0x20) >> 0x10),sVar1);
}



// Function: FUN_00000424 at 00000424
// Size: 190 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000424(undefined2 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = -1;
  sVar4 = 1000;
  sVar2 = 0;
  do {
    if (*(short *)(_DAT_0002884c + 0x15c2) <= sVar2) {
      return sVar3;
    }
    if ((*(short *)(_DAT_0002884c + 0x124) == 0) || (param_2._2_2_ == 0)) {
LAB_0000046c:
      sVar1 = func_0x00006e48(param_1,*(undefined4 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c4));
      if ((sVar1 < sVar4) &&
         ((param_2._0_2_ == 0xe ||
          ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) == (int)param_2._0_2_)))) {
        sVar4 = sVar1;
        sVar3 = sVar2;
      }
    }
    else {
      sVar1 = func_0x00002860(*(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6),0x20002);
      if (sVar1 != 0) goto LAB_0000046c;
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_000004e2 at 000004e2
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004e2(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  if (_DAT_00027fc8 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc8 + 0x188))(_DAT_00027fc8,0x6c62616b);
    FUN_00000534(extraout_A0);
    (**(code **)(*_DAT_00027fc8 + 0x188))(_DAT_00027fc8,0x7362616b);
    FUN_00000534(extraout_A0_00);
  }
  return;
}



// Function: FUN_00000534 at 00000534
// Size: 638 bytes

undefined4 FUN_00000534(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int *extraout_A0_08;
  int *extraout_A0_09;
  int *extraout_A0_10;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x188))(param_1,0x6d6f7665);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6e657874);
    if (extraout_A0_00 != (int *)0x0) {
      (**(code **)(*extraout_A0_00 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6c656176);
    if (extraout_A0_01 != (int *)0x0) {
      (**(code **)(*extraout_A0_01 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x67756172);
    if (extraout_A0_02 != (int *)0x0) {
      (**(code **)(*extraout_A0_02 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x64657365);
    if (extraout_A0_03 != (int *)0x0) {
      (**(code **)(*extraout_A0_03 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x70617468);
    if (extraout_A0_04 != (int *)0x0) {
      (**(code **)(*extraout_A0_04 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x64656c65);
    if (extraout_A0_05 != (int *)0x0) {
      (**(code **)(*extraout_A0_05 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x63656e74);
    if (extraout_A0_06 != (int *)0x0) {
      (**(code **)(*extraout_A0_06 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6469706c);
    if (extraout_A0_07 != (int *)0x0) {
      (**(code **)(*extraout_A0_07 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x68656c70);
    uVar1 = 0;
    if (extraout_A0_08 != (int *)0x0) {
      uVar1 = (**(code **)(*extraout_A0_08 + 0x3a0))();
    }
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      (**(code **)(*param_1 + 0x188))(param_1,sVar2 + 0x73637230);
      uVar1 = 0;
      if (extraout_A0_09 != (int *)0x0) {
        uVar1 = (**(code **)(*extraout_A0_09 + 0x3a0))();
      }
    }
    for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
      (**(code **)(*param_1 + 0x188))(param_1,sVar2 + 0x62757431);
      uVar1 = 0;
      if (extraout_A0_10 != (int *)0x0) {
        uVar1 = (**(code **)(*extraout_A0_10 + 0x3a0))();
      }
    }
  }
  return uVar1;
}



// Function: FUN_000007b2 at 000007b2
// Size: 354 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000007b2(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_A0;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w_00;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 auStack_34e [256];
  undefined1 auStack_24e [256];
  undefined1 auStack_14e [256];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar1 = func_0x000076a8((char)auStack_4e);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = (**(code **)(*_DAT_000257ee + 0x68))((short)_DAT_000257ee,0);
      local_8 = extraout_A0;
      if (extraout_A0 != (int *)0x0) {
        (**(code **)(*extraout_A0 + 0x194))();
        if (param_2 == 0) {
          func_0x00007320((short)auStack_14e,(short)param_1);
          uVar2 = func_0x00006e38((short)local_8,0x7472,extraout_A0w);
        }
        else {
          func_0x00007320((short)auStack_24e,(short)param_1);
          uVar5 = (undefined2)((uint)extraout_A0_00 >> 0x10);
          uVar4 = 0x3273;
          uVar3 = (undefined2)((uint)local_8 >> 0x10);
          func_0x00006e38((short)local_8,0x7431,(short)extraout_A0_00);
          func_0x00007320(auStack_34e,(short)param_2,uVar3,uVar4,uVar5);
          uVar2 = func_0x00006e38(local_8,0x32737432,extraout_A0w_00);
        }
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x40c))();
      uVar2 = (**(code **)(*local_8 + 0x3a0))();
    }
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
      local_8 = (int *)0x0;
    }
    uVar2 = func_0x00001c10((short)((uint)local_18 >> 0x10));
  }
  return uVar2;
}



