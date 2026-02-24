// Warlords II - Decompiled 68k Code
// Segment: CODE_032
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000108 at 00000108
// Size: 302 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000108(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *extraout_A0;
  int extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*_DAT_000257ee + 0x68))();
  func_0x00001bf0(extraout_A0);
  (**(code **)(*extraout_A0 + 0x194))();
  iVar1 = (**(code **)(*extraout_A0 + 0x40c))();
  (**(code **)(*extraout_A0 + 0x198))();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8(auStack_4a);
  if (iVar2 == 0) {
    if (iVar1 == 0x646f6e65) {
      (**(code **)(*extraout_A0 + 0x400))();
      if (extraout_A0_00 != 0) {
        FUN_0000072c(extraout_A0_00);
      }
    }
    (**(code **)(*extraout_A0 + 0x3a0))();
    _DAT_00025f52 = local_10;
  }
  else {
    cVar3 = func_0x00000e18(extraout_A0);
    if (cVar3 != '\0') {
      (**(code **)(*extraout_A0 + 0x3a0))();
    }
    func_0x00001c10();
  }
  (**(code **)(*param_1 + 0x8c))((short)param_1,0x3fa);
  return;
}



// Function: FUN_00000236 at 00000236
// Size: 888 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000236(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int *extraout_A0;
  undefined1 extraout_A0b;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 auStack_104 [256];
  
  piVar1 = *(int **)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x3a) =
       *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0);
  for (sVar4 = 0; uVar5 = SUB42(piVar1,0), sVar4 < 8; sVar4 = sVar4 + 1) {
    (**(code **)(*piVar1 + 0x188))(uVar5,(char)sVar4 + '1');
    if (extraout_A0 != (int *)0x0) {
      func_0x00007320((short)auStack_104,(char)_DAT_0002884c + (char)sVar4 * '\x14');
      (**(code **)(*extraout_A0 + 0x3dc))((short)extraout_A0,extraout_A0b);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar4 + 0x6f31);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar4 + 0x68756d31);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar4 + 0x656e6831);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar4 + 0x6f627331);
      uVar5 = (undefined2)((uint)extraout_A0_00 >> 0x10);
      if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) == 0) {
        uVar6 = 1;
        iVar2 = func_0x00007710((short)_DAT_0002884c + sVar4 * 0x14,0xc5);
        if (iVar2 != 0) {
          uVar6 = (undefined1)((uint)(sVar4 + 0x64656131) >> 0x10);
          (**(code **)(*extraout_A0 + 0x188))((short)extraout_A0,(char)(sVar4 + 0x64656131));
          if (extraout_A0_04 != (int *)0x0) {
            (**(code **)(*extraout_A0_04 + 0x334))();
          }
        }
        if (extraout_A0_00 != (int *)0x0) {
          (**(code **)(*extraout_A0_00 + 0x334))();
          (**(code **)(*extraout_A0_00 + 0x70))((short)extraout_A0_00,uVar5,uVar6);
        }
        if (extraout_A0_01 != (int *)0x0) {
          (**(code **)(*extraout_A0_01 + 0x334))();
          (**(code **)(*extraout_A0_01 + 0x70))();
        }
        if (extraout_A0_02 != (int *)0x0) {
          (**(code **)(*extraout_A0_02 + 0x334))();
          (**(code **)(*extraout_A0_02 + 0x70))();
        }
        if (extraout_A0_03 != (int *)0x0) {
          (**(code **)(*extraout_A0_03 + 0x334))();
          (**(code **)(*extraout_A0_03 + 0x70))();
        }
      }
      else {
        if (extraout_A0_00 != (int *)0x0) {
          (**(code **)(*extraout_A0_00 + 0x3d8))();
        }
        if (extraout_A0_01 != (int *)0x0) {
          (**(code **)(*extraout_A0_01 + 0x42c))();
        }
        if (extraout_A0_02 != (int *)0x0) {
          (**(code **)(*extraout_A0_02 + 0x42c))();
        }
        if (extraout_A0_03 != (int *)0x0) {
          (**(code **)(*extraout_A0_03 + 0x42c))();
        }
      }
    }
  }
  (**(code **)(*piVar1 + 0x188))(uVar5,0x72);
  if (extraout_A0_05 != (int *)0x0) {
    (**(code **)(*extraout_A0_05 + 0x3a0))();
  }
  (**(code **)(*piVar1 + 0x188))(uVar5,99);
  uVar3 = 0;
  if (extraout_A0_06 != (int *)0x0) {
    uVar3 = (**(code **)(*extraout_A0_06 + 0x334))();
  }
  return uVar3;
}



// Function: FUN_000005ae at 000005ae
// Size: 382 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000005ae(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar4;
  undefined4 uVar3;
  int *extraout_A0;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = *(undefined4 *)((int)piVar1 + 0x26);
  (**(code **)(*piVar1 + 0x188))(piVar1,0x646f6e65);
  iVar2 = *(int *)((int)param_3 + 0x16);
  if (iVar2 == 0x61646472) {
    uVar3 = func_0x00003ed8(uVar3);
  }
  else if (((((iVar2 == 0x68756d31) || (iVar2 == 0x68756d32)) || (iVar2 == 0x68756d33)) ||
           ((iVar2 == 0x68756d34 || (iVar2 == 0x68756d35)))) ||
          ((iVar2 == 0x68756d36 || ((iVar2 == 0x68756d37 || (iVar2 == 0x68756d38)))))) {
    cVar4 = (**(code **)(*param_3 + 0x428))();
    *(ushort *)((*(int *)((int)param_3 + 0x16) + -0x68756d31) * 2 + _DAT_0002884c + 0xd0) =
         (ushort)(cVar4 == '\0');
    (**(code **)(*piVar1 + 0x188))
              (piVar1,(short)((short)*(undefined4 *)((int)param_3 + 0x16) + -0x6d31) + 0x69636f31);
    uVar3 = 0;
    if (extraout_A0 != (int *)0x0) {
      uVar3 = (**(code **)(*extraout_A0 + 0x3d8))();
    }
  }
  else {
    uVar3 = func_0x00004a30(param_1,param_2,param_3,param_4);
  }
  return uVar3;
}



// Function: FUN_0000072c at 0000072c
// Size: 440 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000072c(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int *extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined1 auStack_104 [256];
  
  piVar1 = *(int **)(param_1 + 8);
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    (**(code **)(*piVar1 + 0x188))((short)piVar1,(char)sVar5 + '1');
    if (extraout_A0 != (int *)0x0) {
      func_0x00007320((short)auStack_104,(short)_DAT_0002884c + sVar5 * 0x14);
      (**(code **)(*extraout_A0 + 0x3dc))((short)extraout_A0,extraout_A0w);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar5 + 0x6d31);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar5 + 0x656e6831);
      (**(code **)(*extraout_A0 + 0x188))(extraout_A0,sVar5 + 0x6f627331);
      if ((*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) != 0) ||
         (iVar2 = func_0x00007710((short)_DAT_0002884c + sVar5 * 0x14,0xc5), iVar2 == 0)) {
        if (extraout_A0_00 != (int *)0x0) {
          cVar3 = (**(code **)(*extraout_A0_00 + 0x428))();
          *(ushort *)(sVar5 * 2 + _DAT_0002884c + 0xd0) = (ushort)(cVar3 == '\0');
        }
        if (extraout_A0_01 != (int *)0x0) {
          bVar4 = (**(code **)(*extraout_A0_01 + 0x428))();
          *(ushort *)(sVar5 * 2 + _DAT_0002884c + 0xf0) = (ushort)bVar4;
        }
        if (extraout_A0_02 != (int *)0x0) {
          bVar4 = (**(code **)(*extraout_A0_02 + 0x428))();
          *(ushort *)(sVar5 * 2 + _DAT_0002884c + 0x148) = (ushort)bVar4;
        }
      }
    }
  }
  if ((*(short *)(param_1 + 0x3a) !=
       *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0)) &&
     (*(char *)(_DAT_000297f4 + 0x92) == '\0')) {
    *(undefined1 *)(_DAT_000297f4 + 0x93) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



