// Warlords II - Decompiled 68k Code
// Segment: CODE_057
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 1442 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000000c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined2 uVar7;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined2 extraout_A0w;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined1 extraout_A0b;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  undefined1 auStack_1fc [256];
  undefined1 auStack_fc [20];
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [10];
  undefined1 local_9e;
  undefined1 auStack_9c [76];
  undefined2 local_50;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2._0_1_ != '\0') {
    uVar9 = 0x80;
    uVar7 = (undefined2)((uint)auStack_9c >> 0x10);
    func_0x00007028((char)auStack_9c);
    func_0x00006ed0((char)auStack_9c,0x7475,uVar7,uVar9);
    uVar9 = (undefined1)((uint)extraout_A0 >> 0x10);
    FUN_00001d08((char)extraout_A0);
    func_0x00006ec8((short)auStack_9c,uVar9);
  }
  (**(code **)(*_DAT_000257ee + 0x68))((short)_DAT_000257ee,(char)((uint)param_1 >> 0x10));
  local_8 = extraout_A0_00;
  FUN_00001bf0((char)extraout_A0_00);
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar4 = func_0x000076a8((short)auStack_4e);
  uVar9 = (undefined1)((uint)local_8 >> 0x10);
  if (iVar4 == 0) {
    if (param_2._0_1_ != '\0') {
      _DAT_00015260 = 0;
      uVar10 = 1;
      uVar8 = 1;
      FUN_00003e0c(1,0,(char)local_8);
      func_0x00002a90();
      FUN_000030cc();
      piVar1 = *(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142);
      uVar7 = (undefined2)((uint)piVar1 >> 0x10);
      local_50 = (**(code **)(*piVar1 + 0x160))();
      FUN_00002808(0x454e,1,uVar7,uVar8,uVar10,uVar9);
      if (extraout_A0_01 == (int *)0x0) {
        uVar7 = 0xdff7;
      }
      else {
        uVar8 = 0;
        puVar11 = auStack_fc;
        uVar9 = (undefined1)((uint)extraout_A0_01 >> 0x10);
        (**(code **)(*extraout_A0_01 + 0x74))((short)extraout_A0_01,(short)puVar11,0x54);
        func_0x00002818((short)extraout_A0_01,uVar9,(short)((uint)puVar11 >> 0x10),uVar8);
        uVar7 = SUB42(auStack_e8,0);
      }
      func_0x00007718((short)param_1 + 0x169,uVar7,10);
      *(undefined1 *)((int)param_1 + 0x173) = 0;
      for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
        func_0x00007718((short)auStack_a8,(short)(_DAT_0002884c + sVar6 * 0x14),10);
        local_9e = 0;
        func_0x00007718((short)((int)param_1 + sVar6 * 0xb + 0x174),(char)auStack_a8,10);
        *(undefined1 *)((int)param_1 + sVar6 * 0xb + 0x17e) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00004262(0,(char)local_8);
    FUN_0000482a((short)local_8);
    uVar5 = FUN_00004104((char)local_8);
    if (*(short *)(_DAT_0002884c + 0x12e) == 0) {
      (**(code **)(*local_8 + 0x400))();
      FUN_00001bf4(extraout_A0w);
      (**(code **)(*local_8 + 0x188))((char)local_8,0x6561);
      if (extraout_A0_02 != (int *)0x0) {
        (**(code **)(*extraout_A0_02 + 0x42c))();
      }
      (**(code **)(*local_8 + 0x188))((short)local_8,0x65);
      if (extraout_A0_03 != (int *)0x0) {
        bVar2 = false;
        for (sVar6 = 0; uVar7 = SUB42(extraout_A0_03,0), sVar6 < 8; sVar6 = sVar6 + 1) {
          cVar3 = (char)sVar6;
          (**(code **)(*extraout_A0_03 + 0x188))(uVar7,cVar3 + '0');
          if (extraout_A0_04 != (int *)0x0) {
            func_0x00007320((short)auStack_1fc,(char)_DAT_0002884c + cVar3 * '\x14');
            uVar9 = 0xfc;
            (**(code **)(*extraout_A0_04 + 0x410))((short)extraout_A0_04,extraout_A0b);
            (**(code **)(*extraout_A0_04 + 0x3a0))((short)extraout_A0_04,uVar9);
          }
          if (*(short *)(sVar6 * 2 + _DAT_0002884c + 0x138) == 0) {
            (**(code **)(*extraout_A0_03 + 0x188))(uVar7,cVar3 + '0');
            if (extraout_A0_05 != (int *)0x0) {
              (**(code **)(*extraout_A0_05 + 0x334))();
            }
          }
          else if ((bVar2) || (*(short *)(sVar6 * 2 + _DAT_0002884c + 0xd0) != 0)) {
            *(undefined2 *)(sVar6 * 2 + _DAT_0002884c + 0xd0) = 1;
          }
          else {
            (**(code **)(*extraout_A0_03 + 1000))(uVar7,cVar3 + '0');
            *(undefined2 *)(sVar6 * 2 + _DAT_0002884c + 0xd0) = 0;
            bVar2 = true;
          }
        }
        if (!bVar2) {
          for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
            if (*(short *)(sVar6 * 2 + _DAT_0002884c + 0x138) != 0) {
              (**(code **)(*extraout_A0_03 + 1000))(uVar7,(char)sVar6 + '0');
              *(undefined2 *)(sVar6 * 2 + _DAT_0002884c + 0xd0) = 0;
            }
          }
        }
      }
      (**(code **)(*local_8 + 0x188))((short)local_8,0x70);
      if (extraout_A0_06 != (int *)0x0) {
        uVar7 = 0;
        for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
          if (((*(short *)(sVar6 * 2 + _DAT_0002884c + 0x138) != 0) &&
              (*(short *)(sVar6 * 2 + _DAT_0002884c + 0xd0) == 1)) &&
             (*(short *)(sVar6 * 2 + _DAT_0002884c + 0xc0) != 3)) {
            uVar7 = *(undefined2 *)(sVar6 * 2 + _DAT_0002884c + 0xc0);
            break;
          }
        }
        for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
          if ((*(short *)(sVar6 * 2 + _DAT_0002884c + 0x138) != 0) &&
             (*(short *)(sVar6 * 2 + _DAT_0002884c + 0xd0) == 1)) {
            *(undefined2 *)(sVar6 * 2 + _DAT_0002884c + 0xc0) = uVar7;
          }
        }
        (**(code **)(*extraout_A0_06 + 1000))((short)extraout_A0_06,(char)uVar7 + '0');
      }
      (**(code **)(*local_8 + 0x194))();
      (**(code **)(*local_8 + 0x194))();
      (**(code **)(*local_8 + 0x188))((char)local_8,0x7075);
      uVar5 = 0;
      if (extraout_A0_07 != (int *)0x0) {
        FUN_000048f8((char)extraout_A0_07[0x29]);
        (**(code **)(*extraout_A0_07 + 0x26c))();
        uVar5 = (**(code **)(*extraout_A0_07 + 0x268))();
      }
    }
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
      local_8 = (int *)0x0;
    }
    (**(code **)(*param_1 + 0x164))();
    uVar5 = FUN_00001c10((short)((uint)local_18 >> 0x10));
  }
  return uVar5;
}



// Function: FUN_000005b2 at 000005b2
// Size: 50 bytes

void FUN_000005b2(int param_1,undefined4 param_2)

{
  FUN_000015b8(param_1,param_2);
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  FUN_00002370((short)param_1 + 0x88);
  return;
}



// Function: FUN_000005e4 at 000005e4
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005e4(int *param_1)

{
  undefined1 auStack_36 [50];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_36);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000a2e at 00000a2e
// Size: 70 bytes

void FUN_00000a2e(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_000031a8(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x7e) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x7c) = uVar1;
  return;
}



// Function: FUN_00000a74 at 00000a74
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000a74(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e10 at 00000e10
// Size: 38 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(void)

{
  char cVar1;
  int unaff_A6;
  
  cVar1 = FUN_00001d60(_DAT_00028bee);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_A6 + -6) = _DAT_00028bee;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000010c0 at 000010c0
// Size: 32 bytes

void FUN_000010c0(int *param_1)

{
  (**(code **)(*param_1 + 0x6c))(param_1,10,param_1,0);
  return;
}



// Function: FUN_000010e0 at 000010e0
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000010e0(int *param_1)

{
  undefined1 auStack_5e [90];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_5e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000015b8 at 000015b8
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000015b8(void)

{
  int unaff_A6;
  
  func_0x00007258(unaff_A6 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001760 at 00001760
// Size: 1120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00001760(int param_1,undefined2 param_2,int *param_3,undefined1 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar7;
  uint uVar4;
  short sVar6;
  uint uVar5;
  short sVar8;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *extraout_A0_02;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar2 = *(undefined4 *)(_DAT_000297f4 + 0x80);
  iVar3 = *(int *)((int)param_3 + 0x16);
  if (iVar3 == 0x61646472) {
    uVar5 = FUN_00003ed8((char)uVar2);
  }
  else {
    uVar11 = SUB41(piVar1,0);
    uVar10 = (undefined1)((uint)piVar1 >> 0x10);
    if (((iVar3 == 0x636f6d30) || (iVar3 == 0x636f6d31)) || (iVar3 == 0x636f6d32)) {
      for (sVar8 = 0; sVar8 < 8; sVar8 = sVar8 + 1) {
        *(short *)(sVar8 * 2 + _DAT_0002884c + 0xc0) =
             (short)*(undefined4 *)((int)param_3 + 0x16) + -0x6d30;
      }
      uVar5 = FUN_0000482a(uVar11);
      DAT_00027d36 = 1;
    }
    else if (iVar3 == 0x65646974) {
      FUN_00003208(uVar11);
      FUN_00001bf4((char)param_1);
      (**(code **)(*piVar1 + 0x188))(piVar1,0x7075);
      FUN_00001bf0(extraout_A0);
      (**(code **)(*extraout_A0 + 0x440))((short)extraout_A0,piVar1);
      uVar5 = FUN_00004fb4();
      *(undefined1 *)(extraout_A0 + 0x73) = 0;
    }
    else {
      uVar12 = SUB41(param_3,0);
      if ((((iVar3 == 0x656e6831) || (iVar3 == 0x656e6832)) ||
          ((iVar3 == 0x656e6833 || ((iVar3 == 0x656e6834 || (iVar3 == 0x656e6835)))))) ||
         ((iVar3 == 0x656e6836 || ((iVar3 == 0x656e6837 || (iVar3 == 0x656e6838)))))) {
        uVar2 = *(undefined4 *)((int)param_3 + 0x16);
        bVar7 = (**(code **)(*param_3 + 0x428))();
        uVar5 = (short)((short)uVar2 + -0x6831) * 2;
        *(ushort *)(uVar5 + _DAT_0002884c + 0xf0) = (ushort)bVar7;
      }
      else {
        if (iVar3 != 0x66657765) {
          if (iVar3 == 0x676f2020) {
            uVar10 = 0x3c;
            func_0x000073b0(0x32);
            if (extraout_A0_01 != (undefined4 *)0x0) {
              uVar10 = 0x52;
              func_0x00002428((char)extraout_A0_01);
              *extraout_A0_01 = 0x1ee88;
              *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
            }
            FUN_00002430(extraout_A0_01,3000,(short)piVar1,uVar10,0);
            *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 3000;
            uVar5 = (**(code **)(*piVar1 + 0x104))((short)piVar1,extraout_A0_01);
            return uVar5;
          }
          if (iVar3 == 0x67726561) {
            (**(code **)(*param_3 + 0x428))(uVar12,uVar11);
            uVar5 = FUN_00004d20(uVar10);
            DAT_00027d36 = 1;
            return uVar5;
          }
          if ((((((iVar3 == 0x69636f31) || (iVar3 == 0x69636f32)) || (iVar3 == 0x69636f33)) ||
               ((iVar3 == 0x69636f34 || (iVar3 == 0x69636f35)))) || (iVar3 == 0x69636f36)) ||
             ((iVar3 == 0x69636f37 || (iVar3 == 0x69636f38)))) {
            uVar5 = FUN_000027c8(uVar10);
            return uVar5;
          }
          if (iVar3 == 0x6d61696c) {
            (**(code **)(*piVar1 + 0x188))(uVar11,0x72);
            if (extraout_A0_00 != (int *)0x0) {
              (**(code **)(*param_3 + 0x428))();
              (**(code **)(*extraout_A0_00 + 0x3a0))();
            }
            bVar7 = (**(code **)(*param_3 + 0x428))();
            *(ushort *)(_DAT_0002884c + 0x2f8c) = (ushort)bVar7;
            return (uint)bVar7;
          }
          if (iVar3 != 0x6d6f7265) {
            if (iVar3 == 0x706f7075) {
              (**(code **)(*param_3 + 0x440))(uVar12,uVar11);
              uVar5 = FUN_00004fb4(uVar10);
              return uVar5;
            }
            if ((((iVar3 != 0x726f6c31) && (iVar3 != 0x726f6c32)) && (iVar3 != 0x726f6c33)) &&
               (((iVar3 != 0x726f6c34 && (iVar3 != 0x726f6c35)) &&
                ((iVar3 != 0x726f6c36 && ((iVar3 != 0x726f6c37 && (iVar3 != 0x726f6c38)))))))) {
              if ((((iVar3 != 0x73696430) && (iVar3 != 0x73696431)) && (iVar3 != 0x73696432)) &&
                 (((iVar3 != 0x73696433 && (iVar3 != 0x73696434)) &&
                  ((iVar3 != 0x73696435 && ((iVar3 != 0x73696436 && (iVar3 != 0x73696437)))))))) {
                uVar5 = FUN_00004a30(param_1,param_2,uVar12,param_4);
                return uVar5;
              }
              uVar4 = 0;
              for (uVar5 = 0x73696430; uVar5 < 0x73696438; uVar5 = uVar5 + 1) {
                bVar9 = uVar5 != *(uint *)((int)param_3 + 0x16);
                uVar4 = (uint)bVar9;
                *(ushort *)((uVar5 + 0x8c969bd0) * 2 + _DAT_0002884c + 0xd0) = (ushort)bVar9;
              }
              DAT_00027d36 = 1;
              return uVar4;
            }
            uVar5 = FUN_000046aa(uVar10);
            DAT_00027d36 = 1;
            return uVar5;
          }
        }
        if ((*(int *)((int)param_3 + 0x16) == 0x6d6f7265) &&
           ((**(code **)(*piVar1 + 0x188))(uVar11,0x65), extraout_A0_02 != (int *)0x0)) {
          sVar6 = (**(code **)(*extraout_A0_02 + 0x3e4))();
          for (sVar8 = 0; sVar8 < 8; sVar8 = sVar8 + 1) {
            *(ushort *)(sVar8 * 2 + _DAT_0002884c + 0xd0) =
                 (ushort)(sVar8 != (short)(sVar6 + -0x6430));
          }
        }
        uVar10 = 0x82;
        (**(code **)(*piVar1 + 0x198))();
        uVar5 = FUN_0000000c((short)uVar2,uVar10);
      }
    }
  }
  return uVar5;
}



// Function: FUN_00001bc0 at 00001bc0
// Size: 48 bytes

void FUN_00001bc0(int param_1,int param_2)

{
  if (param_2 == 3000) {
    FUN_00004986(*(undefined4 *)(param_1 + 8));
    FUN_00001bf0();
    return;
  }
  FUN_00005bf0(param_1,param_2);
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 4 bytes

void FUN_00001bf0(void)

{
  return;
}



// Function: FUN_00001bf4 at 00001bf4
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf4(int param_1)

{
  short sVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  
  (**(code **)(**(int **)(param_1 + 8) + 0x188))((short)*(int **)(param_1 + 8),0x7075);
  FUN_00001bf0(extraout_A0);
  (**(code **)(*extraout_A0 + 0x434))();
  FUN_00001bf0(extraout_A0_00);
  sVar1 = (**(code **)(*extraout_A0 + 0x454))();
  if (3 < sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001bf0((short)_DAT_00027d2a);
  sVar1 = (**(code **)(*_DAT_00027d2a + 0x58))();
  if (sVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_00027d38 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c10 at 00001c10
// Size: 162 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  short sVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  int in_A1;
  undefined2 uStack00000004;
  
  (**(code **)(in_A1 + 0x188))();
  FUN_00001bf0(extraout_A0);
  (**(code **)(*extraout_A0 + 0x434))();
  FUN_00001bf0(extraout_A0_00);
  sVar1 = (**(code **)(*extraout_A0 + 0x454))();
  if (3 < sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack00000004 = (undefined2)((uint)_DAT_00027d2a >> 0x10);
  FUN_00001bf0();
  sVar1 = (**(code **)(*_DAT_00027d2a + 0x58))();
  if (sVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_00027d38 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d08 at 00001d08
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d60 at 00001d60
// Size: 28 bytes

void FUN_00001d60(void)

{
  int *unaff_A3;
  
  (**(code **)(*unaff_A3 + 0x418))();
  return;
}



// Function: FUN_00001d7c at 00001d7c
// Size: 70 bytes

undefined2 FUN_00001d7c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  uint uVar2;
  
  func_0x00007310(param_2 + 4);
  uVar1 = 0x1dae;
  func_0x00007310(param_3 + 4,extraout_A0);
  uVar2 = CONCAT22((short)((uint)uVar1 >> 0x10),(ushort)(byte)uVar1) & 0xffffff;
  func_0x00007638(uVar2,extraout_A0_00);
  return (short)(uVar2 >> 0x10);
}



// Function: FUN_00001dc2 at 00001dc2
// Size: 152 bytes

void FUN_00001dc2(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 local_11e;
  undefined1 local_11a [256];
  undefined2 local_1a [11];
  
  iVar1 = (**(code **)(*param_2 + 0x88))();
  for (iVar4 = 1; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    local_11a[0] = 0;
    local_11e = (**(code **)(*param_2 + 0x88))();
    (**(code **)(*param_2 + 0x74))(param_2,local_11a,0x100);
    for (sVar3 = 0; sVar3 < 0xb; sVar3 = sVar3 + 1) {
      uVar2 = (**(code **)(*param_2 + 0x84))();
      local_1a[sVar3] = uVar2;
    }
    (**(code **)(*param_1 + 0x88))(param_1,&local_11e);
  }
  return;
}



// Function: FUN_00001e5a at 00001e5a
// Size: 70 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e5a(int *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 *extraout_A0;
  undefined2 uVar4;
  undefined2 uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  uVar5 = (undefined2)((uint)iVar1 >> 0x10);
  uVar4 = (undefined2)((uint)param_2 >> 0x10);
  (**(code **)(*param_2 + 0xd0))((short)param_2,(short)iVar1);
  (**(code **)(*_DAT_00027d2a + 0x78))((short)_DAT_00027d2a,uVar4,uVar5);
  for (sVar2 = 1; sVar2 <= iVar1; sVar2 = sVar2 + 1) {
    (**(code **)(*_DAT_00027d2a + 0x74))((short)_DAT_00027d2a,(char)sVar2);
    (**(code **)(*param_2 + 0xd0))((char)param_2,(short)*extraout_A0);
    (**(code **)(*param_2 + 0xbc))(param_2,(short)(extraout_A0 + 1),0x100);
    for (sVar3 = 0; sVar3 < 0xb; sVar3 = sVar3 + 1) {
      (**(code **)(*param_2 + 0xcc))();
    }
  }
  (**(code **)(*_DAT_00027d2a + 0x78))();
  return;
}



// Function: thunk_FUN_00001f0a at 00001ea0
// Size: 2 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00001f0a(void)

{
  short unaff_D3w;
  short sVar1;
  int unaff_D5;
  int *unaff_A3;
  
  for (; unaff_D3w <= unaff_D5; unaff_D3w = unaff_D3w + 1) {
    (**(code **)(*_DAT_00027d2a + 0x74))((short)_DAT_00027d2a,(char)unaff_D3w);
    (**(code **)(*unaff_A3 + 0xd0))();
    (**(code **)(*unaff_A3 + 0xbc))();
    for (sVar1 = 0; sVar1 < 0xb; sVar1 = sVar1 + 1) {
      (**(code **)(*unaff_A3 + 0xcc))();
    }
  }
  (**(code **)(*_DAT_00027d2a + 0x78))();
  return;
}



// Function: FUN_00001ea8 at 00001ea8
// Size: 98 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ea8(void)

{
  short unaff_D3w;
  short sVar1;
  int unaff_D5;
  int *unaff_A3;
  int *unaff_A4;
  
  do {
    (**(code **)(*unaff_A4 + 0x74))((short)unaff_A4,(char)unaff_D3w);
    (**(code **)(*unaff_A3 + 0xd0))();
    (**(code **)(*unaff_A3 + 0xbc))();
    for (sVar1 = 0; sVar1 < 0xb; sVar1 = sVar1 + 1) {
      (**(code **)(*unaff_A3 + 0xcc))();
    }
    unaff_D3w = unaff_D3w + 1;
    unaff_A4 = _DAT_00027d2a;
  } while (unaff_D3w <= unaff_D5);
  (**(code **)(*_DAT_00027d2a + 0x78))();
  return;
}



// Function: FUN_00001f0a at 00001f0a
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f0a(void)

{
  short unaff_D3w;
  short sVar1;
  int unaff_D5;
  int *unaff_A3;
  
  for (; unaff_D3w <= unaff_D5; unaff_D3w = unaff_D3w + 1) {
    (**(code **)(*_DAT_00027d2a + 0x74))((short)_DAT_00027d2a,(char)unaff_D3w);
    (**(code **)(*unaff_A3 + 0xd0))();
    (**(code **)(*unaff_A3 + 0xbc))();
    for (sVar1 = 0; sVar1 < 0xb; sVar1 = sVar1 + 1) {
      (**(code **)(*unaff_A3 + 0xcc))();
    }
  }
  (**(code **)(*_DAT_00027d2a + 0x78))();
  return;
}



// Function: FUN_00001f2e at 00001f2e
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f2e(void)

{
  short sVar1;
  int extraout_A0;
  undefined1 local_11;
  undefined1 local_d;
  undefined1 local_b;
  undefined1 local_9;
  undefined1 local_7;
  undefined1 local_5;
  
  if (_DAT_00028864 == 0) {
    thunk_FUN_00001f0a(0xae);
    _DAT_00028864 = extraout_A0;
  }
  for (sVar1 = 0; sVar1 < 0x1d; sVar1 = sVar1 + 1) {
    func_0x000049a8();
    *(undefined1 *)(_DAT_00028864 + sVar1 * 6) = local_b;
    *(undefined1 *)(_DAT_00028864 + 1 + sVar1 * 6) = local_9;
    *(undefined1 *)(_DAT_00028864 + 2 + sVar1 * 6) = local_7;
    *(undefined1 *)(_DAT_00028864 + 3 + sVar1 * 6) = local_5;
    *(undefined1 *)(_DAT_00028864 + 5 + sVar1 * 6) = local_d;
    *(undefined1 *)(_DAT_00028864 + 4 + sVar1 * 6) = local_11;
  }
  return;
}



// Function: FUN_00001fce at 00001fce
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001fce(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000020c0 at 000020c0
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000020c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002358 at 00002358
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002370 at 00002370
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002370(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002380 at 00002380
// Size: 772 bytes

/* WARNING: Removing unreachable block (ram,0x00002672) */
/* WARNING: Removing unreachable block (ram,0x0000252c) */
/* WARNING: Removing unreachable block (ram,0x00002558) */
/* WARNING: Removing unreachable block (ram,0x00002552) */
/* WARNING: Removing unreachable block (ram,0x0000255c) */
/* WARNING: Removing unreachable block (ram,0x00002568) */
/* WARNING: Removing unreachable block (ram,0x00002562) */
/* WARNING: Removing unreachable block (ram,0x0000256c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002380(void)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  char cVar6;
  short sVar5;
  char unaff_D3b;
  char unaff_D4b;
  char unaff_D6b;
  undefined1 uVar7;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  undefined4 unaff_A3;
  int unaff_A6;
  short sStack00000004;
  undefined1 uStack00000006;
  
  (**(code **)(*_DAT_000257ee + 0x68))();
  _DAT_00027fbc = extraout_A0;
  FUN_00001bf0();
  if (unaff_D6b == '\0') {
    iVar4 = 0xe0;
  }
  else {
    iVar4 = 0x70;
  }
  iVar4 = (*(short *)(unaff_A6 + -0x2a) + -3) - iVar4;
  *(undefined4 *)(unaff_A6 + -0x34) = 0x9c;
  *(undefined4 *)(unaff_A6 + -0x30) = 0x70;
  *(undefined4 *)(unaff_A6 + -0x44) = 0x138;
  *(undefined4 *)(unaff_A6 + -0x40) = 0xe0;
  piVar3 = _DAT_00027fbc;
  sVar2 = (short)unaff_A6;
  if (unaff_D3b == '\0') {
    uStack00000006 = 0;
    if ((unaff_D4b == '\0') && (unaff_D6b == '\0')) {
      sStack00000004 = sVar2 + -0x34;
    }
    else {
      sStack00000004 = sVar2 + -0x44;
    }
    *(undefined4 *)(unaff_A6 + -0x3a2) = *(undefined4 *)((int)_DAT_00027fbc + 0x2a);
    *(int *)(unaff_A6 + -0x39e) = iVar4;
    cVar6 = (char)unaff_A6;
    func_0x000060f0((short)piVar3,cVar6 + '^');
    sStack00000004 = 0x6f76;
    uStack00000006 = 0x65;
    (**(code **)(*_DAT_00027fbc + 0x188))();
    sStack00000004 = (short)((uint)extraout_A0_00 >> 0x10);
    uStack00000006 = (undefined1)((uint)extraout_A0_00 >> 8);
    _DAT_00027fc0 = extraout_A0_00;
    FUN_00001bf0();
    (**(code **)(*_DAT_000257ee + 0x68))();
    _DAT_00027fc8 = extraout_A0_01;
    FUN_00001bf0();
    *(undefined4 *)(unaff_A6 + -0x3aa) = 0x27;
    *(undefined4 *)(unaff_A6 + -0x3a6) = 0x70;
    *(undefined4 *)(unaff_A6 + -0x34) = *(undefined4 *)(unaff_A6 + -0x3aa);
    *(undefined4 *)(unaff_A6 + -0x30) = *(undefined4 *)(unaff_A6 + -0x3a6);
    iVar1 = _DAT_00027fc8;
    *(undefined4 *)(unaff_A6 + -0x44) = *(undefined4 *)(_DAT_00027fc8 + 0x32);
    *(undefined4 *)(unaff_A6 + -0x40) = *(undefined4 *)(iVar1 + 0x36);
    if (unaff_D6b == '\0') {
      sVar5 = (short)*(undefined4 *)(_DAT_00027fc8 + 0x2a);
    }
    else {
      sVar5 = (short)*(undefined4 *)((int)_DAT_00027fbc + 0x32) +
              (short)*(undefined4 *)((int)_DAT_00027fbc + 0x2a) + 0x10;
    }
    uStack00000006 = 0;
    if (*(short *)(unaff_A6 + -0x2c) < 0x1e0) {
      sStack00000004 = sVar2 + -0x44;
    }
    else {
      sStack00000004 = sVar2 + -0x34;
    }
    *(int *)(unaff_A6 + -0x3b2) = (int)sVar5;
    *(int *)(unaff_A6 + -0x3ae) = iVar4;
    func_0x000060f0((short)iVar1,cVar6 + 'N');
    sStack00000004 = (short)((uint)unaff_A3 >> 0x10);
    uStack00000006 = (undefined1)((uint)unaff_A3 >> 8);
    (**(code **)(*(int *)CONCAT22((short)((uint)_DAT_000257ee >> 0x10),(short)_DAT_000257ee) + 0x68)
    )();
    sStack00000004 = (short)((uint)extraout_A0_02 >> 0x10);
    uStack00000006 = (undefined1)((uint)extraout_A0_02 >> 8);
    _DAT_00027fc4 = extraout_A0_02;
    FUN_00001bf0();
    iVar1 = *(int *)(_DAT_00027fc8 + 0x32) + *(int *)(_DAT_00027fc8 + 0x2a);
    *(int *)(unaff_A6 + -0x3c) = iVar1 + 0x10;
    *(int *)(unaff_A6 + -0x38) = iVar4;
    iVar4 = _DAT_00027fc4;
    *(undefined4 *)(unaff_A6 + -0xa2) = *(undefined4 *)(_DAT_00027fc4 + 0x32);
    *(undefined4 *)(unaff_A6 + -0x9e) = *(undefined4 *)(iVar4 + 0x36);
    *(undefined4 *)(unaff_A6 + -0x74) = 0x81;
    *(undefined4 *)(unaff_A6 + -0x70) = 0xe0;
    *(undefined4 *)(unaff_A6 + -0x5c) = 0x78;
    *(undefined4 *)(unaff_A6 + -0x58) = 0x70;
    if (unaff_D6b == '\0') {
      if (((int)*(short *)(unaff_A6 + -0x2c) - *(int *)(_DAT_00027fc4 + 0x32)) + -4 <= iVar1 + 3) {
        iVar4 = *(int *)(_DAT_00027fc4 + 0x32);
        *(undefined4 *)(unaff_A6 + -0x41e) = *(undefined4 *)(_DAT_00027fc4 + 0x2e);
        *(int *)(unaff_A6 + -0x3ba) = (*(short *)(unaff_A6 + -0x2c) - iVar4) + -4;
        *(undefined4 *)(unaff_A6 + -0x3b6) = *(undefined4 *)(unaff_A6 + -0x41e);
        *(undefined4 *)(unaff_A6 + -0x3c) = *(undefined4 *)(unaff_A6 + -0x3ba);
        *(undefined4 *)(unaff_A6 + -0x38) = *(undefined4 *)(unaff_A6 + -0x3b6);
        sStack00000004 = (short)((uint)(unaff_A6 + -0xa2) >> 0x10);
        uStack00000006 = (undefined1)((uint)(unaff_A6 + -0xa2) >> 8);
        func_0x000038b8(cVar6 + -0x3c);
        return;
      }
      sStack00000004 = (short)((uint)(unaff_A6 + -0x74) >> 0x10);
      uStack00000006 = (undefined1)((uint)(unaff_A6 + -0x74) >> 8);
      func_0x000038b8(cVar6 + -0x3c);
      return;
    }
    sStack00000004 = (short)((uint)(unaff_A6 + -0x5c) >> 0x10);
    uStack00000006 = (undefined1)((uint)(unaff_A6 + -0x5c) >> 8);
    func_0x000038b8(cVar6 + -0x3c);
    return;
  }
  sStack00000004 = (short)((uint)(unaff_A6 + -0x4b8) >> 0x10);
  uStack00000006 = (undefined1)((uint)(unaff_A6 + -0x4b8) >> 8);
  FUN_00003980();
  sStack00000004 = (short)((uint)(unaff_A6 + -0x4b8) >> 0x10);
  uStack00000006 = (undefined1)((uint)(unaff_A6 + -0x4b8) >> 8);
  cVar6 = func_0x000038e8();
  if (unaff_D4b != '\0') {
    cVar6 = '\x01';
  }
  uStack00000006 = 0;
  if (cVar6 != '\0') {
    sStack00000004 = sVar2 + -0x44;
    if (cVar6 == '\0') {
      uVar7 = (undefined1)((uint)(unaff_A6 + -0x44) >> 0x10);
    }
    else {
      uVar7 = (undefined1)((uint)(unaff_A6 + -0x34) >> 0x10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00003918(sVar2 + -0x84,uVar7);
  }
  FUN_00002430();
  return;
}



// Function: FUN_00002430 at 00002430
// Size: 30 bytes

void FUN_00002430(void)

{
  int unaff_A6;
  
                    /* WARNING: Subroutine does not return */
  FUN_00003918(unaff_A6 + -0x84);
}



// Function: FUN_000027c8 at 000027c8
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000027c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002800 at 00002800
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002800(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002808 at 00002808
// Size: 30 bytes

void FUN_00002808(void)

{
  undefined4 *in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x14a) = *(undefined4 *)(unaff_A6 + -4);
  *(undefined4 *)(unaff_A6 + -0x146) = *in_A0;
  *(undefined4 *)(unaff_A6 + -0x142) = in_A0[1];
  *(undefined4 *)(unaff_A6 + -0xb2) = *(undefined4 *)(unaff_A6 + -0x14e);
  *(undefined4 *)(unaff_A6 + -0xae) = *(undefined4 *)(unaff_A6 + -0x14a);
  *(undefined4 *)(unaff_A6 + -0xaa) = *(undefined4 *)(unaff_A6 + -0x146);
  *(undefined4 *)(unaff_A6 + -0xa6) = *(undefined4 *)(unaff_A6 + -0x142);
  func_0x000038b8(unaff_A6 + -8,unaff_A6 + -0x500,unaff_A6 + -0xa2);
  return;
}



// Function: FUN_00002828 at 00002828
// Size: 20 bytes

void FUN_00002828(void)

{
  undefined4 *in_A0;
  undefined4 *in_A1;
  int unaff_A6;
  
  *in_A1 = *in_A0;
  func_0x000038b8(unaff_A6 + -8,unaff_A6 + -0x500,unaff_A6 + -0xa2);
  return;
}



// Function: FUN_00002840 at 00002840
// Size: 52 bytes

void FUN_00002840(void)

{
  undefined4 *in_A0;
  int unaff_A6;
  
  *(undefined4 **)(unaff_A6 + -0x3da) = in_A0;
  *(undefined4 *)(unaff_A6 + -0x15e) = *(undefined4 *)(unaff_A6 + -8);
  *(undefined4 *)(unaff_A6 + -0x15a) = *(undefined4 *)(unaff_A6 + -4);
  *(undefined4 *)(unaff_A6 + -0x156) = *in_A0;
  *(undefined4 *)(unaff_A6 + -0x152) = in_A0[1];
  *(undefined4 *)(unaff_A6 + -0xc2) = *(undefined4 *)(unaff_A6 + -0x15e);
  *(undefined4 *)(unaff_A6 + -0xbe) = *(undefined4 *)(unaff_A6 + -0x15a);
  *(undefined4 *)(unaff_A6 + -0xba) = *(undefined4 *)(unaff_A6 + -0x156);
  *(undefined4 *)(unaff_A6 + -0xb6) = *(undefined4 *)(unaff_A6 + -0x152);
  FUN_00002c9e();
  return;
}



// Function: FUN_000028d0 at 000028d0
// Size: 58 bytes

void FUN_000028d0(void)

{
  undefined4 *in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x17e) = *(undefined4 *)(unaff_A6 + -8);
  *(undefined4 *)(unaff_A6 + -0x17a) = *(undefined4 *)(unaff_A6 + -4);
  *(undefined4 *)(unaff_A6 + -0x176) = *in_A0;
  *(undefined4 *)(unaff_A6 + -0x172) = in_A0[1];
  *(undefined4 *)(unaff_A6 + -0xb2) = *(undefined4 *)(unaff_A6 + -0x17e);
  *(undefined4 *)(unaff_A6 + -0xae) = *(undefined4 *)(unaff_A6 + -0x17a);
  *(undefined4 *)(unaff_A6 + -0xaa) = *(undefined4 *)(unaff_A6 + -0x176);
  *(undefined4 *)(unaff_A6 + -0xa6) = *(undefined4 *)(unaff_A6 + -0x172);
  func_0x000038b8(unaff_A6 + -8,unaff_A6 + -0x518,unaff_A6 + -0x5c);
  return;
}



// Function: FUN_000029a8 at 000029a8
// Size: 9 bytes

void FUN_000029a8(void)

{
  int unaff_A6;
  
                    /* WARNING: Subroutine does not return */
  FUN_00003918(unaff_A6 + -0x18);
}



// Function: FUN_000029e8 at 000029e8
// Size: 20 bytes

void FUN_000029e8(void)

{
  undefined4 *in_A0;
  undefined4 *in_A1;
  int unaff_A6;
  
  *in_A1 = *in_A0;
  in_A1[1] = in_A0[1];
  in_A1[2] = in_A0[2];
                    /* WARNING: Subroutine does not return */
  FUN_00003918(unaff_A6 + -0x18);
}



// Function: FUN_00002a18 at 00002a18
// Size: 76 bytes

void FUN_00002a18(void)

{
  int unaff_A6;
  
  func_0x000038c0();
  *(undefined4 **)(unaff_A6 + -0x3f6) = (undefined4 *)(unaff_A6 + -0x530);
  *(undefined4 *)(unaff_A6 + -0x1be) = *(undefined4 *)(unaff_A6 + -0x530);
  *(undefined4 *)(unaff_A6 + -0x1ba) = *(undefined4 *)(unaff_A6 + -0x52c);
  *(undefined4 *)(unaff_A6 + -0x1b6) = **(undefined4 **)(unaff_A6 + -0x3fa);
  *(undefined4 *)(unaff_A6 + -0x1b2) = (*(undefined4 **)(unaff_A6 + -0x3fa))[1];
  *(undefined4 *)(unaff_A6 + -0xc2) = *(undefined4 *)(unaff_A6 + -0x1be);
  *(undefined4 *)(unaff_A6 + -0xbe) = *(undefined4 *)(unaff_A6 + -0x1ba);
  *(undefined4 *)(unaff_A6 + -0xba) = *(undefined4 *)(unaff_A6 + -0x1b6);
  *(undefined4 *)(unaff_A6 + -0xb6) = *(undefined4 *)(unaff_A6 + -0x1b2);
  FUN_00002c9e();
  return;
}



// Function: FUN_00002ad0 at 00002ad0
// Size: 8 bytes

void FUN_00002ad0(void)

{
  undefined4 in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x406) = in_A0;
                    /* WARNING: Subroutine does not return */
  FUN_00003918(unaff_A6 + -0x18);
}



// Function: FUN_00002ad8 at 00002ad8
// Size: 8 bytes

void FUN_00002ad8(void)

{
  int unaff_A6;
  
                    /* WARNING: Subroutine does not return */
  FUN_00003918(unaff_A6 + -0x18);
}



// Function: FUN_00002ae0 at 00002ae0
// Size: 10 bytes

void FUN_00002ae0(void)

{
  int unaff_A6;
  
                    /* WARNING: Subroutine does not return */
  FUN_00003918(unaff_A6 + -0x18);
}



// Function: FUN_00002b60 at 00002b60
// Size: 59 bytes

void FUN_00002b60(void)

{
  undefined4 *in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x1ee) = *in_A0;
  *(undefined4 *)(unaff_A6 + -0x1ea) = in_A0[1];
  *(undefined4 *)(unaff_A6 + -0x1e6) = **(undefined4 **)(unaff_A6 + -0x40e);
  *(undefined4 *)(unaff_A6 + -0x1e2) = (*(undefined4 **)(unaff_A6 + -0x40e))[1];
  *(undefined4 *)(unaff_A6 + -0xc2) = *(undefined4 *)(unaff_A6 + -0x1ee);
  *(undefined4 *)(unaff_A6 + -0xbe) = *(undefined4 *)(unaff_A6 + -0x1ea);
  *(undefined4 *)(unaff_A6 + -0xba) = *(undefined4 *)(unaff_A6 + -0x1e6);
  *(undefined4 *)(unaff_A6 + -0xb6) = *(undefined4 *)(unaff_A6 + -0x1e2);
  FUN_00002c9e();
  return;
}



// Function: FUN_00002ba0 at 00002ba0
// Size: 53 bytes

void FUN_00002ba0(void)

{
  int iVar1;
  short unaff_D5w;
  int in_A0;
  int unaff_A6;
  
  iVar1 = *(int *)(in_A0 + 0x32);
  *(undefined4 *)(unaff_A6 + -0x41e) = *(undefined4 *)(in_A0 + 0x2e);
  *(int *)(unaff_A6 + -0x3ba) = (unaff_D5w - iVar1) + -4;
  *(undefined4 *)(unaff_A6 + -0x3b6) = *(undefined4 *)(unaff_A6 + -0x41e);
  *(undefined4 *)(unaff_A6 + -0x3c) = *(undefined4 *)(unaff_A6 + -0x3ba);
  *(undefined4 *)(unaff_A6 + -0x38) = *(undefined4 *)(unaff_A6 + -0x3b6);
  func_0x000038b8(unaff_A6 + -0x3c,unaff_A6 + -0x550,unaff_A6 + -0xa2);
  return;
}



// Function: FUN_00002c9e at 00002c9e
// Size: 386 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c9e(void)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  short sVar4;
  char unaff_D3b;
  char unaff_D4b;
  int unaff_D5;
  int unaff_D7;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  int unaff_A6;
  undefined2 uVar5;
  
  piVar3 = _DAT_00027fc4;
  sVar2 = (short)unaff_A6;
  (**(code **)(*_DAT_00027fc4 + 0x1ac))((short)_DAT_00027fc4,sVar2 + -0x18);
  *(undefined4 *)((int)piVar3 + 0xc2) = *(undefined4 *)(unaff_A6 + -0x18);
  *(undefined4 *)((int)piVar3 + 0xc6) = *(undefined4 *)(unaff_A6 + -0x14);
  *(undefined4 *)((int)piVar3 + 0xca) = *(undefined4 *)(unaff_A6 + -0x10);
  *(undefined4 *)((int)piVar3 + 0xce) = *(undefined4 *)(unaff_A6 + -0xc);
  *(undefined4 *)((int)piVar3 + 0xd2) = *(undefined4 *)(unaff_A6 + -0xb2);
  *(undefined4 *)((int)piVar3 + 0xd6) = *(undefined4 *)(unaff_A6 + -0xae);
  *(undefined4 *)((int)piVar3 + 0xda) = *(undefined4 *)(unaff_A6 + -0xaa);
  *(undefined4 *)((int)piVar3 + 0xde) = *(undefined4 *)(unaff_A6 + -0xa6);
  *(undefined4 *)((int)piVar3 + 0xe2) = *(undefined4 *)(unaff_A6 + -0xc2);
  *(undefined4 *)((int)piVar3 + 0xe6) = *(undefined4 *)(unaff_A6 + -0xbe);
  *(undefined4 *)((int)piVar3 + 0xea) = *(undefined4 *)(unaff_A6 + -0xba);
  *(undefined4 *)((int)piVar3 + 0xee) = *(undefined4 *)(unaff_A6 + -0xb6);
  (**(code **)(*_DAT_000257ee + 0x68))();
  _DAT_00027fb4 = extraout_A0;
  FUN_00001bf0((short)extraout_A0);
  if (unaff_D3b == '\0') {
    *(int *)(unaff_A6 + -0x22a) = (unaff_D5 - *(int *)((int)_DAT_00027fb4 + 0x2a)) + -0x10;
    *(int *)(unaff_A6 + -0x226) = unaff_D7 + -6;
    (**(code **)(*_DAT_00027fb4 + 0x1c0))((short)_DAT_00027fb4,sVar2 + -0x22a);
  }
  else {
    (**(code **)(*_DAT_00027fb4 + 0x1ac))((short)_DAT_00027fb4,sVar2 + -0x54);
  }
  if (unaff_D4b != '\0') {
    cVar1 = (char)unaff_A6;
    FUN_000038a0((char)_DAT_00027fb4 + '2',cVar1 + -0x54);
    *(undefined2 **)(unaff_A6 + -0x41a) = (undefined2 *)(unaff_A6 + -0x554);
    *(undefined2 *)(unaff_A6 + -0x3be) = *(undefined2 *)(unaff_A6 + -0x554);
    *(undefined2 *)(unaff_A6 + -0x3bc) = *(undefined2 *)(unaff_A6 + -0x552);
    FUN_000038a0((short)_DAT_00027fb4 + 0x32,cVar1 + -0x58,cVar1 + 'B');
    *(undefined2 **)(unaff_A6 + -0x416) = (undefined2 *)(unaff_A6 + -0x558);
    *(undefined2 *)(unaff_A6 + -0x3c2) = *(undefined2 *)(unaff_A6 + -0x558);
    *(undefined2 *)(unaff_A6 + -0x3c0) = *(undefined2 *)(unaff_A6 + -0x556);
    (**(code **)(*_DAT_00027fb4 + 1000))((short)_DAT_00027fb4,cVar1 + '>');
  }
  (**(code **)(*_DAT_00027fb4 + 0x188))((char)_DAT_00027fb4,0x20);
  uVar5 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  _DAT_00027fb8 = extraout_A0_00;
  FUN_00001bf0((char)extraout_A0_00);
  (**(code **)(*_DAT_00027fb8 + 0x2fc))((short)_DAT_00027fb8,uVar5);
  if (extraout_A0_01 != 0) {
    *(undefined1 *)(*(int *)(extraout_A0_01 + 0x8c) + 0x46) = 0;
    *(undefined1 *)(*(int *)(extraout_A0_01 + 0x8c) + 0x47) = 0;
    *(undefined1 *)(*(int *)(extraout_A0_01 + 0x90) + 0x46) = 0;
    *(undefined1 *)(*(int *)(extraout_A0_01 + 0x90) + 0x47) = 0;
  }
  for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
    *(int *)(unaff_A6 + -0x442) = _DAT_000297f4;
    func_0x00005ea0((char)_DAT_000297f4,
                    (char)*(undefined2 *)(sVar4 * 2 + *(int *)(unaff_A6 + -0x442) + 0x84));
  }
  _DAT_00027fce = 0xffff;
  _DAT_00027fcc = 0xffff;
  _DAT_00027fd0 = 0;
  if (*(short *)(unaff_A6 + 10) != 0) {
    FUN_00002ba0();
    FUN_000028d0();
    sVar4 = FUN_00002f00();
    if (sVar4 == 0) {
      func_0x00007590();
    }
    else {
      *(undefined2 *)(unaff_A6 + 10) = 0;
    }
  }
  func_0x00003a90();
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32b) != '\0')) {
    (**(code **)(*_DAT_00027fbc + 0x194))();
    *(undefined1 *)(_DAT_00027fbc + 0x28) = 1;
    (**(code **)(*_DAT_00027fbc + 0x26c))();
    (**(code **)(*_DAT_00027fbc + 0x268))();
  }
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32c) != '\0')) {
    (**(code **)(*_DAT_00027fc4 + 0x194))();
    *(undefined1 *)(_DAT_00027fc4 + 0x28) = 1;
    (**(code **)(*_DAT_00027fc4 + 0x26c))();
    (**(code **)(*_DAT_00027fc4 + 0x268))();
  }
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32d) != '\0')) {
    (**(code **)(*_DAT_00027fc8 + 0x194))();
    *(undefined1 *)(_DAT_00027fc8 + 0x28) = 1;
    (**(code **)(*_DAT_00027fc8 + 0x26c))();
    (**(code **)(*_DAT_00027fc8 + 0x268))();
  }
  (**(code **)(*_DAT_00027fb4 + 0x194))();
  (**(code **)(*_DAT_00027fb4 + 0x26c))();
  (**(code **)(*_DAT_00027fb4 + 0x268))();
  (**(code **)(*_DAT_00027fb4 + 0x3c4))();
  (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,(short)_DAT_00027fb4[0x25]);
  _DAT_00027fb2 = 1;
  func_0x00003a98();
  FUN_00004970();
  if (*(short *)(unaff_A6 + 10) != 0) {
    (**(code **)(*_DAT_00027fb4 + 0x26c))();
    FUN_00002b60();
    piVar3 = _DAT_00027fb8;
    if (*(short *)(_DAT_0002884c + 0x124) == 0) {
      func_0x00006e70(1,0);
      FUN_00003ae0();
    }
    else {
      *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
      (**(code **)(*piVar3 + 0x26c))();
      (**(code **)(*piVar3 + 0x268))();
    }
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    if (unaff_D4b != '\0') {
      func_0x00002b68(0xea,0xb6);
    }
    *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00006ec8(sVar2 + -0x37a);
  return;
}



// Function: FUN_00002e20 at 00002e20
// Size: 224 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e20(void)

{
  int *piVar1;
  short sVar2;
  char unaff_D3b;
  char unaff_D4b;
  int unaff_A2;
  int unaff_A6;
  
  *(undefined1 *)(*(int *)(unaff_A2 + 0x8c) + 0x46) = 0;
  *(undefined1 *)(*(int *)(unaff_A2 + 0x8c) + 0x47) = 0;
  *(undefined1 *)(*(int *)(unaff_A2 + 0x90) + 0x46) = 0;
  *(undefined1 *)(*(int *)(unaff_A2 + 0x90) + 0x47) = 0;
  for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
    *(int *)(unaff_A6 + -0x442) = _DAT_000297f4;
    func_0x00005ea0((short)_DAT_000297f4,
                    *(undefined2 *)(sVar2 * 2 + *(int *)(unaff_A6 + -0x442) + 0x84));
  }
  _DAT_00027fce = 0xffff;
  _DAT_00027fcc = 0xffff;
  _DAT_00027fd0 = 0;
  if (*(short *)(unaff_A6 + 10) != 0) {
    FUN_00002ba0();
    FUN_000028d0();
    sVar2 = FUN_00002f00();
    if (sVar2 == 0) {
      func_0x00007590();
    }
    else {
      *(undefined2 *)(unaff_A6 + 10) = 0;
    }
  }
  func_0x00003a90();
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32b) != '\0')) {
    (**(code **)(*_DAT_00027fbc + 0x194))();
    *(undefined1 *)(_DAT_00027fbc + 0x28) = 1;
    (**(code **)(*_DAT_00027fbc + 0x26c))();
    (**(code **)(*_DAT_00027fbc + 0x268))();
  }
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32c) != '\0')) {
    (**(code **)(*_DAT_00027fc4 + 0x194))();
    *(undefined1 *)(_DAT_00027fc4 + 0x28) = 1;
    (**(code **)(*_DAT_00027fc4 + 0x26c))();
    (**(code **)(*_DAT_00027fc4 + 0x268))();
  }
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32d) != '\0')) {
    (**(code **)(*_DAT_00027fc8 + 0x194))();
    *(undefined1 *)(_DAT_00027fc8 + 0x28) = 1;
    (**(code **)(*_DAT_00027fc8 + 0x26c))();
    (**(code **)(*_DAT_00027fc8 + 0x268))();
  }
  (**(code **)(*_DAT_00027fb4 + 0x194))();
  (**(code **)(*_DAT_00027fb4 + 0x26c))();
  (**(code **)(*_DAT_00027fb4 + 0x268))();
  (**(code **)(*_DAT_00027fb4 + 0x3c4))();
  (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,_DAT_00027fb4[0x25]);
  _DAT_00027fb2 = 1;
  func_0x00003a98();
  FUN_00004970();
  if (*(short *)(unaff_A6 + 10) != 0) {
    (**(code **)(*_DAT_00027fb4 + 0x26c))();
    FUN_00002b60();
    piVar1 = _DAT_00027fb8;
    if (*(short *)(_DAT_0002884c + 0x124) == 0) {
      func_0x00006e70(1,0);
      FUN_00003ae0();
    }
    else {
      *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
      (**(code **)(*piVar1 + 0x26c))();
      (**(code **)(*piVar1 + 0x268))();
    }
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    if (unaff_D4b != '\0') {
      func_0x00002b68(0x59ea,0x59b6);
    }
    *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00006ec8((short)unaff_A6 + -0x37a);
  return;
}



// Function: FUN_00002f00 at 00002f00
// Size: 452 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f00(void)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char unaff_D3b;
  char unaff_D4b;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined2 uStack00000006;
  undefined2 uStack00000008;
  undefined2 uStack0000000a;
  
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32c) != '\0')) {
    uStack00000008 = (undefined2)((uint)_DAT_00027fc4 >> 0x10);
    uStack0000000a = SUB42(_DAT_00027fc4,0);
    uStack00000004 = 0;
    uStack00000006 = 0x2f1e;
    (**(code **)(*_DAT_00027fc4 + 0x194))();
    *(undefined1 *)(_DAT_00027fc4 + 0x28) = 1;
    uStack00000004 = (undefined2)((uint)_DAT_00027fc4 >> 0x10);
    uStack00000006 = SUB42(_DAT_00027fc4,0);
    (**(code **)(*_DAT_00027fc4 + 0x26c))();
    (**(code **)(*_DAT_00027fc4 + 0x268))();
  }
  if ((unaff_D3b == '\0') || (*(char *)(unaff_A6 + -0x32d) != '\0')) {
    uStack00000008 = (undefined2)((uint)_DAT_00027fc8 >> 0x10);
    uStack0000000a = SUB42(_DAT_00027fc8,0);
    uStack00000004 = 0;
    uStack00000006 = 0x2f68;
    (**(code **)(*_DAT_00027fc8 + 0x194))();
    *(undefined1 *)(_DAT_00027fc8 + 0x28) = 1;
    uStack00000004 = (undefined2)((uint)_DAT_00027fc8 >> 0x10);
    uStack00000006 = SUB42(_DAT_00027fc8,0);
    (**(code **)(*_DAT_00027fc8 + 0x26c))();
    (**(code **)(*_DAT_00027fc8 + 0x268))();
  }
  uStack00000008 = (undefined2)((uint)_DAT_00027fb4 >> 0x10);
  uStack0000000a = SUB42(_DAT_00027fb4,0);
  uStack00000004 = 0;
  uStack00000006 = 0x2fa8;
  (**(code **)(*_DAT_00027fb4 + 0x194))();
  uStack00000004 = (undefined2)((uint)_DAT_00027fb4 >> 0x10);
  uStack00000006 = SUB42(_DAT_00027fb4,0);
  (**(code **)(*_DAT_00027fb4 + 0x26c))();
  (**(code **)(*_DAT_00027fb4 + 0x268))();
  (**(code **)(*_DAT_00027fb4 + 0x3c4))();
  (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,_DAT_00027fb4[0x25]);
  _DAT_00027fb2 = 1;
  func_0x00003a98();
  FUN_00004970();
  if (*(short *)(unaff_A6 + 10) != 0) {
    uStack00000008 = (undefined2)((uint)_DAT_00027fb4 >> 0x10);
    uStack0000000a = SUB42(_DAT_00027fb4,0);
    uStack00000004 = 0;
    uStack00000006 = 0x3022;
    (**(code **)(*_DAT_00027fb4 + 0x26c))();
    uStack00000004 = 0;
    uStack00000006 = 0x3028;
    FUN_00002b60();
    piVar1 = _DAT_00027fb8;
    if (*(short *)(_DAT_0002884c + 0x124) == 0) {
      uStack00000008 = 0;
      uStack0000000a = 0;
      uStack00000004 = 1;
      uStack00000006 = 1;
      func_0x00006e70();
      FUN_00003ae0();
    }
    else {
      *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
      uStack00000008 = (undefined2)((uint)piVar1 >> 0x10);
      uVar2 = uStack00000008;
      uStack0000000a = SUB42(piVar1,0);
      uVar3 = uStack0000000a;
      uStack00000004 = 0;
      uStack00000006 = 0x3066;
      (**(code **)(*piVar1 + 0x26c))();
      uStack00000004 = uVar2;
      uStack00000006 = uVar3;
      (**(code **)(*piVar1 + 0x268))();
    }
    uStack00000008 = (undefined2)((uint)_DAT_00027fb4 >> 0x10);
    uStack0000000a = SUB42(_DAT_00027fb4,0);
    uStack00000004 = 0;
    uStack00000006 = 0x3084;
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    if (unaff_D4b != '\0') {
      uStack00000008 = 1;
      uStack0000000a = 0x59b6;
      uStack00000004 = 1;
      uStack00000006 = 0x59ea;
      func_0x00002b68();
    }
    *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack0000000a = 0xffff;
  _uStack00000006 = unaff_A6 + -0x37a;
  uStack00000004 = 0x30c2;
  func_0x00006ec8();
  return;
}



// Function: FUN_000030cc at 000030cc
// Size: 108 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000030cc(void)

{
  char cVar1;
  bool bVar2;
  short sVar5;
  int iVar3;
  int iVar4;
  short sVar6;
  int extraout_A0;
  char *pcVar7;
  int extraout_A0_00;
  int extraout_A0_01;
  char *pcVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 auStack_82 [2];
  undefined2 uStack_80;
  undefined1 auStack_7e [2];
  undefined2 uStack_7c;
  undefined1 auStack_7a [2];
  undefined2 uStack_78;
  undefined2 uStack_30;
  undefined2 local_2e;
  char acStack_2c [8];
  undefined1 uStack_24;
  
  bVar2 = false;
  iVar4 = *(int *)(_DAT_000297f4 + 0x80);
  local_2e = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  pcVar7 = &DAT_000278f8;
  pcVar8 = &DAT_00015791;
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  (**(code **)(**(int **)(iVar4 + 0x142) + 0x160))();
  sVar5 = FUN_00002840(0x20,0xf8);
  if ((sVar5 != 0) && (FUN_00002800(0x20,0xf8), extraout_A0 != 0)) {
    uVar12 = 0;
    uVar10 = (undefined2)((uint)acStack_2c >> 0x10);
    uVar9 = (undefined1)((uint)extraout_A0 >> 0x10);
    func_0x00002820((char)extraout_A0,(char)acStack_2c,8);
    func_0x00002818((short)extraout_A0,uVar9,uVar10,uVar12);
    uStack_24 = 0;
    for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
      if (((acStack_2c[sVar5] == ' ') || (acStack_2c[sVar5] == '\r')) || (acStack_2c[sVar5] == '\t')
         ) {
        acStack_2c[sVar5] = '\0';
      }
    }
    iVar3 = func_0x00007710((char)acStack_2c,0x90);
    if (iVar3 != 0) {
      bVar2 = true;
    }
  }
  if (!bVar2) {
    pcVar7 = acStack_2c;
    pcVar8 = &DAT_0001578a;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  pcVar7 = &DAT_00027f3c;
  pcVar8 = acStack_2c;
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(iVar4 + 0x146) != 0) {
    pcVar7 = &DAT_00027f16;
    pcVar8 = &DAT_00015783;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar9 = 0x86;
    uStack_30 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
    pcVar7 = &DAT_000278f8;
    pcVar8 = &DAT_00015776;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00002800(0x20,0xf8,uVar9);
    if (extraout_A0_00 != 0) {
      for (sVar5 = 0; sVar5 < 0x24; sVar5 = sVar5 + 1) {
        FUN_00002828((short)extraout_A0_00,0x78a8);
      }
      uVar13 = 10;
      uVar11 = 2;
      uVar9 = (undefined1)((uint)extraout_A0_00 >> 0x10);
      FUN_00002828((short)extraout_A0_00,0x7f16);
      func_0x00002818((char)extraout_A0_00,uVar9,uVar11,uVar13);
    }
    uVar9 = 0x16;
    func_0x000076d0(0xf8,0x6d);
    FUN_00002800(0x4c20,0xf8,uVar9);
    if (extraout_A0_01 != 0) {
      sVar5 = 0;
      while ((sVar5 < 3 &&
             (sVar6 = FUN_00002828((short)extraout_A0_01,(short)acStack_2c), 0 < sVar6))) {
        func_0x000076c0((short)acStack_2c,100,(char)auStack_7a,(char)auStack_7e,(char)auStack_82);
        iVar4 = sVar5 * 6;
        *(undefined2 *)(&DAT_00027f2a + iVar4) = uStack_78;
        *(undefined2 *)(iVar4 + 0x27f2c) = uStack_7c;
        *(undefined2 *)(iVar4 + 0x27f2e) = uStack_80;
        sVar5 = sVar5 + 1;
      }
      for (; sVar5 < 3; sVar5 = sVar5 + 1) {
        *(undefined2 *)(&DAT_00027f2a + sVar5 * 6) = 0xffff;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003138 at 00003138
// Size: 111 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003138(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short unaff_D4w;
  int extraout_A0;
  char *pcVar7;
  int extraout_A0_00;
  int extraout_A0_01;
  char *pcVar8;
  int unaff_A3;
  int unaff_A6;
  undefined1 uVar9;
  undefined1 uVar10;
  
  FUN_00002800(0x20,0xf8);
  cVar2 = (char)unaff_A6;
  if (extraout_A0 != 0) {
    uVar4 = (undefined2)((uint)(unaff_A6 + -0x28) >> 0x10);
    uVar9 = (undefined1)((uint)extraout_A0 >> 0x10);
    func_0x00002820((char)extraout_A0,(char)(unaff_A6 + -0x28));
    func_0x00002818((short)extraout_A0,uVar9,uVar4);
    *(undefined1 *)(unaff_A6 + -0x20) = 0;
    for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
      iVar3 = unaff_A6 + -0x28;
      if (((*(char *)(iVar3 + sVar6) == ' ') || (*(char *)(iVar3 + sVar6) == '\r')) ||
         (*(char *)(iVar3 + sVar6) == '\t')) {
        *(undefined1 *)(unaff_A6 + -0x28 + (int)sVar6) = 0;
      }
    }
    iVar3 = func_0x00007710(cVar2 + -0x28);
    if (iVar3 != 0) {
      unaff_D4w = 1;
    }
  }
  if (unaff_D4w == 0) {
    pcVar7 = (char *)(unaff_A6 + -0x28);
    pcVar8 = &DAT_0001578a;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  pcVar7 = &DAT_00027f3c;
  pcVar8 = (char *)(unaff_A6 + -0x28);
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(unaff_A3 + 0x146) != 0) {
    pcVar7 = &DAT_00027f16;
    pcVar8 = &DAT_00015783;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar9 = 0x86;
    uVar4 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
    *(undefined2 *)(unaff_A6 + -0x2c) = uVar4;
    pcVar7 = &DAT_000278f8;
    pcVar8 = &DAT_00015776;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00002800(0x20,0xf8,uVar9);
    if (extraout_A0_00 != 0) {
      for (sVar6 = 0; sVar6 < 0x24; sVar6 = sVar6 + 1) {
        FUN_00002828((short)extraout_A0_00);
      }
      uVar10 = 2;
      uVar9 = (undefined1)((uint)extraout_A0_00 >> 0x10);
      FUN_00002828((short)extraout_A0_00);
      func_0x00002818((char)extraout_A0_00,uVar9,uVar10);
    }
    uVar9 = 0x16;
    func_0x000076d0(0xf8);
    FUN_00002800(0x4c20,0xf8,uVar9);
    if (extraout_A0_01 != 0) {
      sVar6 = 0;
      while ((sVar6 < 3 && (sVar5 = FUN_00002828((short)extraout_A0_01), 0 < sVar5))) {
        func_0x000076c0((short)(unaff_A6 + -0x28),100,cVar2 + -0x76,cVar2 + -0x7a);
        iVar3 = sVar6 * 6;
        *(undefined2 *)(&DAT_00027f2a + iVar3) = *(undefined2 *)(unaff_A6 + -0x74);
        *(undefined2 *)(iVar3 + 0x27f2c) = *(undefined2 *)(unaff_A6 + -0x78);
        *(undefined2 *)(iVar3 + 0x27f2e) = *(undefined2 *)(unaff_A6 + -0x7c);
        sVar6 = sVar6 + 1;
      }
      for (; sVar6 < 3; sVar6 = sVar6 + 1) {
        *(undefined2 *)(&DAT_00027f2a + sVar6 * 6) = 0xffff;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000031a8 at 000031a8
// Size: 420 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031a8(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  short unaff_D3w;
  short sVar6;
  short unaff_D4w;
  char *pcVar7;
  int extraout_A0;
  int extraout_A0_00;
  char *pcVar8;
  int unaff_A3;
  int unaff_A6;
  char in_NF;
  char in_VF;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  
  while (in_VF != in_NF) {
    iVar3 = unaff_A6 + -0x28;
    if (((*(char *)(iVar3 + unaff_D3w) == ' ') || (*(char *)(iVar3 + unaff_D3w) == '\r')) ||
       (*(char *)(iVar3 + unaff_D3w) == '\t')) {
      *(undefined1 *)(unaff_A6 + -0x28 + (int)unaff_D3w) = 0;
    }
    in_NF = (short)(unaff_D3w + -7) < 0;
    in_VF = SBORROW2(unaff_D3w + 1,8);
    unaff_D3w = unaff_D3w + 1;
  }
  cVar2 = (char)unaff_A6;
  iVar3 = func_0x00007710(cVar2 + -0x28,0x5790);
  if (iVar3 != 0) {
    unaff_D4w = 1;
  }
  if (unaff_D4w == 0) {
    pcVar7 = (char *)(unaff_A6 + -0x28);
    pcVar8 = &DAT_0001578a;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  pcVar7 = &DAT_00027f3c;
  pcVar8 = (char *)(unaff_A6 + -0x28);
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(unaff_A3 + 0x146) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7 = &DAT_00027f16;
  pcVar8 = &DAT_00015783;
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar9 = 0x86;
  uVar4 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
  *(undefined2 *)(unaff_A6 + -0x2c) = uVar4;
  pcVar7 = &DAT_000278f8;
  pcVar8 = &DAT_00015776;
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00002800(0x5420,0xf8,uVar9);
  if (extraout_A0 != 0) {
    for (sVar6 = 0; uVar4 = (undefined2)extraout_A0, sVar6 < 0x24; sVar6 = sVar6 + 1) {
      FUN_00002828(uVar4,0x78a8);
    }
    uVar11 = 10;
    uVar10 = 2;
    uVar9 = (undefined1)((uint)extraout_A0 >> 0x10);
    FUN_00002828(uVar4,0x7f16);
    func_0x00002818(uVar4,uVar9,uVar10,uVar11);
  }
  uVar9 = 0x16;
  func_0x000076d0(0xf8,0x576d);
  FUN_00002800(0x50414c20,0x78f8,uVar9);
  if (extraout_A0_00 != 0) {
    for (sVar6 = 0; sVar6 < 3; sVar6 = sVar6 + 1) {
      sVar5 = FUN_00002828((short)extraout_A0_00,(short)unaff_A6 + -0x28);
      if (sVar5 < 1) break;
      func_0x000076c0(unaff_A6 + -0x28,0x5764,cVar2 + -0x76,cVar2 + -0x7a,(short)unaff_A6 + -0x7e);
      iVar3 = sVar6 * 6;
      *(undefined2 *)(&DAT_00027f2a + iVar3) = *(undefined2 *)(unaff_A6 + -0x74);
      *(undefined2 *)(iVar3 + 0x27f2c) = *(undefined2 *)(unaff_A6 + -0x78);
      *(undefined2 *)(iVar3 + 0x27f2e) = *(undefined2 *)(unaff_A6 + -0x7c);
    }
    for (; sVar6 < 3; sVar6 = sVar6 + 1) {
      *(undefined2 *)(&DAT_00027f2a + sVar6 * 6) = 0xffff;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003208 at 00003208
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003208(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003848 at 00003848
// Size: 86 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003848(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  int extraout_A0;
  int extraout_A0_00;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w_00;
  undefined4 extraout_A0_02;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  undefined1 auStack_2a6 [256];
  undefined1 auStack_1a6 [326];
  char acStack_60 [80];
  undefined2 uStack_10;
  char acStack_e [10];
  
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  pcVar8 = &DAT_000278f8;
  pcVar9 = &DAT_00015730;
  do {
    cVar10 = *pcVar9;
    *pcVar8 = cVar10;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  } while (cVar10 != '\0');
  (**(code **)(**(int **)(iVar1 + 0x142) + 0x160))();
  uVar3 = FUN_00002840(0x5420,0xf8);
  if ((short)uVar3 != 0) {
    FUN_00002800(0x5420,0xf8);
    uVar3 = 0;
    if (extraout_A0 != 0) {
      uVar13 = 0;
      uVar5 = (undefined2)((uint)acStack_e >> 0x10);
      uVar11 = (undefined1)((uint)extraout_A0 >> 0x10);
      func_0x00002820((short)extraout_A0,(char)acStack_e,10);
      func_0x00002818((char)extraout_A0,uVar11,uVar5,uVar13);
      acStack_e[8] = 0;
      for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
        if (((acStack_e[sVar6] == ' ') || (acStack_e[sVar6] == '\r')) || (acStack_e[sVar6] == '\t'))
        {
          acStack_e[sVar6] = '\0';
        }
      }
      iVar4 = func_0x00007710((char)acStack_e,0x90);
      uVar3 = 0;
      if (iVar4 != 0) {
        pcVar8 = &DAT_00027f4c;
        pcVar9 = acStack_e;
        do {
          cVar10 = *pcVar9;
          *pcVar8 = cVar10;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar10 != '\0');
        uVar11 = 0x48;
        (**(code **)(**(int **)(iVar1 + 0x146) + 0x160))();
        FUN_00002800(0x20,0x78f8,uVar11);
        if (extraout_A0_00 != 0) {
          uVar13 = 0;
          uVar5 = (undefined2)((uint)acStack_e >> 0x10);
          uVar11 = (undefined1)((uint)extraout_A0_00 >> 0x10);
          func_0x00002820((short)extraout_A0_00,(char)acStack_e,10);
          func_0x00002818((char)extraout_A0_00,uVar11,uVar5,uVar13);
          acStack_e[7] = 0;
          for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
            if (((acStack_e[sVar6] == ' ') || (acStack_e[sVar6] == '\r')) ||
               (acStack_e[sVar6] == '\t')) {
              acStack_e[sVar6] = '\0';
            }
          }
        }
        func_0x00007320((short)auStack_2a6,0x7f4c);
        func_0x00007310(extraout_A0w);
        uVar12 = (undefined1)((uint)extraout_A0_01 >> 0x10);
        func_0x00007320((char)auStack_1a6,(short)acStack_e,(short)extraout_A0_01);
        uVar11 = 0xf8;
        func_0x00007310(extraout_A0w_00);
        uVar5 = (undefined2)((uint)extraout_A0_02 >> 0x10);
        func_0x000075e8(uVar11,(short)extraout_A0_02);
        if (*(int *)(iVar1 + 0x14e) != 0) {
          uStack_10 = func_0x00006e08((char)*(undefined4 *)(_DAT_000297f4 + 0x80),uVar5,uVar12);
          for (sVar6 = 0; sVar6 < 3; sVar6 = sVar6 + 1) {
            cVar10 = (char)sVar6;
            func_0x000076d0(acStack_60,0x5752,0x7f4c,cVar10);
            if (acStack_60[0] == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = 0xffff;
            }
            *(undefined2 *)((short)(ushort)(byte)(cVar10 + 0x1f) * 0x1c + 0x14098) = uVar5;
            pcVar8 = (char *)((short)(ushort)(byte)(cVar10 + 0x1f) * 0x1c + 0x1409a);
            pcVar9 = acStack_60;
            do {
              cVar2 = *pcVar9;
              *pcVar8 = cVar2;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_00002358();
            FUN_00002370((ushort)(byte)(cVar10 + 0x1f) * 0x1c + 0x4098);
          }
          for (sVar6 = 0; sVar6 < 2; sVar6 = sVar6 + 1) {
            for (sVar7 = 0; sVar7 < 0xe; sVar7 = sVar7 + 1) {
              FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar6 * 0x28,0);
            }
          }
          for (sVar6 = 2; sVar6 < 4; sVar6 = sVar6 + 1) {
            for (sVar7 = 0; sVar7 < 4; sVar7 = sVar7 + 1) {
              FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar6 * 0x28,0);
            }
          }
          for (sVar6 = 4; sVar6 < 6; sVar6 = sVar6 + 1) {
            for (sVar7 = 0; sVar7 < 0x10; sVar7 = sVar7 + 1) {
              FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar6 * 0x28,0);
            }
          }
          FUN_00002380(0x14434,0,0x500050,0x44a4,0,0x24);
          FUN_00002380(0x143fc,0,0xa00050,0x144a4,0x500000,0x10024);
          FUN_00002380(0x143fc,0xa00000,0xa00050,0x144a4,0xf00000,0x10024);
          FUN_00002380(0x143fc,0x1400000,0xa00050,0x144a4,0x1900000,0x10024);
          FUN_00002380(0x143fc,0x1e00000,0xa00050,0x144a4,0x50,0x10024);
          FUN_00002380(0x14418,0,0xa00050,0x144a4,0xa0,0x10024);
          FUN_00002380(0x14418,0xa00000,0xa00050,0x144a4,0xa000a0,0x10024);
          FUN_00002380(0x14418,0x1400000,0xa00050,0x144a4,0x14000a0,0x10024);
          FUN_00002380(0x14418,0x1e00000,0xa00050,0x144a4,0x1e000a0,0x10024);
          for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
            FUN_00002380(0x14434,CONCAT22((sVar6 % 4) * 0x28 + 0x50,(sVar6 / 4) * 0x28),0x280028,
                         0x44c0,0x28,0);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return uVar3;
}



// Function: FUN_000038a0 at 000038a0
// Size: 117 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000038a0(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined2 extraout_A0u;
  int extraout_A0;
  int extraout_A0_00;
  char *pcVar6;
  char *pcVar7;
  int unaff_A3;
  int unaff_A6;
  undefined2 uStack00000004;
  char cVar8;
  undefined1 uVar9;
  
  FUN_00002800(0x5420);
  if (extraout_A0 != 0) {
    uStack00000004 = 0;
    uVar9 = (undefined1)((uint)extraout_A0 >> 0x10);
    func_0x00002820((short)extraout_A0);
    func_0x00002818((char)extraout_A0,uVar9);
    *(undefined1 *)(unaff_A6 + -2) = 0;
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      iVar2 = unaff_A6 + -10;
      if (((*(char *)(iVar2 + sVar4) == ' ') || (*(char *)(iVar2 + sVar4) == '\r')) ||
         (*(char *)(iVar2 + sVar4) == '\t')) {
        *(undefined1 *)(unaff_A6 + -10 + (int)sVar4) = 0;
      }
    }
    uStack00000004 = 1;
    iVar2 = func_0x00007710();
    if (iVar2 != 0) {
      pcVar6 = &DAT_00027f4c;
      pcVar7 = (char *)(unaff_A6 + -10);
      do {
        cVar8 = *pcVar7;
        *pcVar6 = cVar8;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar8 != '\0');
      uStack00000004 = (undefined2)((uint)*(int **)(unaff_A3 + 0x146) >> 0x10);
      (**(code **)(**(int **)(unaff_A3 + 0x146) + 0x160))();
      FUN_00002800(0x20,0x78f8);
      if (extraout_A0_00 != 0) {
        uStack00000004 = 0;
        uVar9 = (undefined1)((uint)extraout_A0_00 >> 0x10);
        func_0x00002820((short)extraout_A0_00);
        func_0x00002818((char)extraout_A0_00,uVar9);
        *(undefined1 *)(unaff_A6 + -3) = 0;
        for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
          iVar2 = unaff_A6 + -10;
          if (((*(char *)(iVar2 + sVar4) == ' ') || (*(char *)(iVar2 + sVar4) == '\r')) ||
             (*(char *)(iVar2 + sVar4) == '\t')) {
            *(undefined1 *)(unaff_A6 + -10 + (int)sVar4) = 0;
          }
        }
      }
      uStack00000004 = 0x7f4c;
      func_0x00007320();
      func_0x00007310();
      func_0x00007320((char)unaff_A6 + '^');
      uVar9 = 0xf8;
      func_0x00007310();
      uVar3 = extraout_A0u;
      func_0x000075e8(uVar9);
      if (*(int *)(unaff_A3 + 0x14e) != 0) {
        uVar3 = func_0x00006e08((char)*(undefined4 *)(_DAT_000297f4 + 0x80),uVar3);
        *(undefined2 *)(unaff_A6 + -0xc) = uVar3;
        for (sVar4 = 0; sVar4 < 3; sVar4 = sVar4 + 1) {
          cVar8 = (char)sVar4;
          func_0x000076d0(unaff_A6 + -0x5c,0x5752,0x7f4c,cVar8);
          if (*(char *)(unaff_A6 + -0x5c) == '\0') {
            uVar3 = 0;
          }
          else {
            uVar3 = 0xffff;
          }
          *(undefined2 *)((short)(ushort)(byte)(cVar8 + 0x1f) * 0x1c + 0x14098) = uVar3;
          pcVar6 = (char *)((short)(ushort)(byte)(cVar8 + 0x1f) * 0x1c + 0x1409a);
          pcVar7 = (char *)(unaff_A6 + -0x5c);
          do {
            cVar1 = *pcVar7;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00002358();
          FUN_00002370((ushort)(byte)(cVar8 + 0x1f) * 0x1c + 0x4098);
        }
        for (sVar4 = 0; sVar4 < 2; sVar4 = sVar4 + 1) {
          for (sVar5 = 0; sVar5 < 0xe; sVar5 = sVar5 + 1) {
            FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar4 * 0x28,0);
          }
        }
        for (sVar4 = 2; sVar4 < 4; sVar4 = sVar4 + 1) {
          for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
            FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar4 * 0x28,0);
          }
        }
        for (sVar4 = 4; sVar4 < 6; sVar4 = sVar4 + 1) {
          for (sVar5 = 0; sVar5 < 0x10; sVar5 = sVar5 + 1) {
            FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar4 * 0x28,0);
          }
        }
        FUN_00002380(0x14434,0,0x500050,0x44a4,0,0x24);
        FUN_00002380(0x143fc,0,0xa00050,0x144a4,0x500000,0x10024);
        FUN_00002380(0x143fc,0xa00000,0xa00050,0x144a4,0xf00000,0x10024);
        FUN_00002380(0x143fc,0x1400000,0xa00050,0x144a4,0x1900000,0x10024);
        FUN_00002380(0x143fc,0x1e00000,0xa00050,0x144a4,0x50,0x10024);
        FUN_00002380(0x14418,0,0xa00050,0x144a4,0xa0,0x10024);
        FUN_00002380(0x14418,0xa00000,0xa00050,0x144a4,0xa000a0,0x10024);
        FUN_00002380(0x14418,0x1400000,0xa00050,0x144a4,0x14000a0,0x10024);
        FUN_00002380(0x14418,0x1e00000,0xa00050,0x144a4,0x1e000a0,0x10024);
        for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
          FUN_00002380(0x14434,CONCAT22((sVar4 % 4) * 0x28 + 0x50,(sVar4 / 4) * 0x28),0x280028,
                       0x44c0,0x28,0);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}



// Function: FUN_00003918 at 00003918
// Size: 104 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003918(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined1 extraout_A0u;
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_00;
  char *pcVar6;
  char *pcVar7;
  int unaff_A3;
  int unaff_A6;
  char cVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  iVar2 = func_0x00007710((char)unaff_A6 + -10);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar6 = &DAT_00027f4c;
  pcVar7 = (char *)(unaff_A6 + -10);
  do {
    cVar8 = *pcVar7;
    *pcVar6 = cVar8;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar8 != '\0');
  uVar9 = 0x48;
  (**(code **)(**(int **)(unaff_A3 + 0x146) + 0x160))();
  FUN_00002800(0x20,0x78f8,uVar9);
  if (extraout_A0 != 0) {
    uVar3 = (undefined2)((uint)(unaff_A6 + -10) >> 0x10);
    uVar9 = (undefined1)((uint)extraout_A0 >> 0x10);
    func_0x00002820((short)extraout_A0,(char)(unaff_A6 + -10));
    func_0x00002818((char)extraout_A0,uVar9,uVar3);
    *(undefined1 *)(unaff_A6 + -3) = 0;
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      iVar2 = unaff_A6 + -10;
      if (((*(char *)(iVar2 + sVar4) == ' ') || (*(char *)(iVar2 + sVar4) == '\r')) ||
         (*(char *)(iVar2 + sVar4) == '\t')) {
        *(undefined1 *)(unaff_A6 + -10 + (int)sVar4) = 0;
      }
    }
  }
  func_0x00007320((short)unaff_A6 + -0x2a2);
  func_0x00007310();
  uVar9 = extraout_A0u;
  func_0x00007320((char)unaff_A6 + '^',(short)unaff_A6 + -10);
  uVar10 = 0xf8;
  func_0x00007310(extraout_A0w);
  uVar3 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  func_0x000075e8(uVar10,(short)extraout_A0_00);
  if (*(int *)(unaff_A3 + 0x14e) != 0) {
    uVar3 = func_0x00006e08((char)*(undefined4 *)(_DAT_000297f4 + 0x80),uVar3,uVar9);
    *(undefined2 *)(unaff_A6 + -0xc) = uVar3;
    for (sVar4 = 0; sVar4 < 3; sVar4 = sVar4 + 1) {
      cVar8 = (char)sVar4;
      func_0x000076d0(unaff_A6 + -0x5c,0x5752,0x7f4c,cVar8);
      if (*(char *)(unaff_A6 + -0x5c) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xffff;
      }
      *(undefined2 *)((short)(ushort)(byte)(cVar8 + 0x1f) * 0x1c + 0x14098) = uVar3;
      pcVar6 = (char *)((short)(ushort)(byte)(cVar8 + 0x1f) * 0x1c + 0x1409a);
      pcVar7 = (char *)(unaff_A6 + -0x5c);
      do {
        cVar1 = *pcVar7;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00002358();
      FUN_00002370((ushort)(byte)(cVar8 + 0x1f) * 0x1c + 0x4098);
    }
    for (sVar4 = 0; sVar4 < 2; sVar4 = sVar4 + 1) {
      for (sVar5 = 0; sVar5 < 0xe; sVar5 = sVar5 + 1) {
        FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar4 * 0x28,0);
      }
    }
    for (sVar4 = 2; sVar4 < 4; sVar4 = sVar4 + 1) {
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar4 * 0x28,0);
      }
    }
    for (sVar4 = 4; sVar4 < 6; sVar4 = sVar4 + 1) {
      for (sVar5 = 0; sVar5 < 0x10; sVar5 = sVar5 + 1) {
        FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar4 * 0x28,0);
      }
    }
    FUN_00002380(0x14434,0,0x500050,0x44a4,0,0x24);
    FUN_00002380(0x143fc,0,0xa00050,0x144a4,0x500000,0x10024);
    FUN_00002380(0x143fc,0xa00000,0xa00050,0x144a4,0xf00000,0x10024);
    FUN_00002380(0x143fc,0x1400000,0xa00050,0x144a4,0x1900000,0x10024);
    FUN_00002380(0x143fc,0x1e00000,0xa00050,0x144a4,0x50,0x10024);
    FUN_00002380(0x14418,0,0xa00050,0x144a4,0xa0,0x10024);
    FUN_00002380(0x14418,0xa00000,0xa00050,0x144a4,0xa000a0,0x10024);
    FUN_00002380(0x14418,0x1400000,0xa00050,0x144a4,0x14000a0,0x10024);
    FUN_00002380(0x14418,0x1e00000,0xa00050,0x144a4,0x1e000a0,0x10024);
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      FUN_00002380(0x14434,CONCAT22((sVar4 % 4) * 0x28 + 0x50,(sVar4 / 4) * 0x28),0x280028,0x44c0,
                   0x28,0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003980 at 00003980
// Size: 278 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00003ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003980(void)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_A3;
  int unaff_A6;
  
  func_0x00002818();
  *(undefined1 *)(unaff_A6 + -3) = 0;
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    iVar2 = unaff_A6 + -10;
    if (((*(char *)(iVar2 + sVar5) == ' ') || (*(char *)(iVar2 + sVar5) == '\r')) ||
       (*(char *)(iVar2 + sVar5) == '\t')) {
      *(undefined1 *)(unaff_A6 + -10 + (int)sVar5) = 0;
    }
  }
  func_0x00007320();
  func_0x00007310();
  func_0x00007320();
  func_0x00007310();
  func_0x000075e8();
  if (*(int *)(unaff_A3 + 0x14e) != 0) {
    uVar4 = func_0x00006e08();
    *(undefined2 *)(unaff_A6 + -0xc) = uVar4;
    for (sVar5 = 0; sVar5 < 3; sVar5 = sVar5 + 1) {
      func_0x000076d0(unaff_A6 + -0x5c,0x5752,0x7f4c);
      if (*(char *)(unaff_A6 + -0x5c) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xffff;
      }
      cVar3 = (char)sVar5;
      *(undefined2 *)((short)(ushort)(byte)(cVar3 + 0x1f) * 0x1c + 0x14098) = uVar4;
      pcVar7 = (char *)((short)(ushort)(byte)(cVar3 + 0x1f) * 0x1c + 0x1409a);
      pcVar8 = (char *)(unaff_A6 + -0x5c);
      do {
        cVar1 = *pcVar8;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00002358();
      FUN_00002370((ushort)(byte)(cVar3 + 0x1f) * 0x1c + 0x4098);
    }
    for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
      for (sVar6 = 0; sVar6 < 0xe; sVar6 = sVar6 + 1) {
        FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar5 * 0x28);
      }
    }
    for (sVar5 = 2; sVar5 < 4; sVar5 = sVar5 + 1) {
      for (sVar6 = 0; sVar6 < 4; sVar6 = sVar6 + 1) {
        FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar5 * 0x28);
      }
    }
    for (sVar5 = 4; sVar5 < 6; sVar5 = sVar5 + 1) {
      for (sVar6 = 0; sVar6 < 0x10; sVar6 = sVar6 + 1) {
        FUN_00002380(0x14488,0x2580028,0x280028,0x44a4,sVar5 * 0x28);
      }
    }
    FUN_00002380(0x14434,0,0x500050,0x44a4,0);
    FUN_00002380(0x143fc,0,0xa00050,0x144a4,0x500000,0x10024);
    FUN_00002380(0x143fc,0xa00000,0xa00050,0x144a4,0xf00000,0x10024);
    FUN_00002380(0x143fc,0x1400000,0xa00050,0x144a4,0x1900000,0x10024);
    FUN_00002380(0x143fc,0x1e00000,0xa00050,0x144a4,0x50,0x10024);
    FUN_00002380(0x14418,0,0xa00050,0x144a4,0xa0,0x10024);
    FUN_00002380(0x14418,0xa00000,0xa00050,0x144a4,0xa000a0,0x10024);
    FUN_00002380(0x14418,0x1400000,0xa00050,0x144a4,0x14000a0,0x10024);
    FUN_00002380(0x14418,0x1e00000,0xa00050,0x144a4,0x1e000a0,0x10024);
    for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
      FUN_00002380(0x14434,CONCAT22((sVar5 % 4) * 0x28 + 0x50,(sVar5 / 4) * 0x28),0x280028,0x44c0,
                   0x28);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003ae0 at 00003ae0
// Size: 386 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003ae0(void)

{
  undefined2 uVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  char *in_A0;
  char *pcVar4;
  int unaff_A6;
  char cVar5;
  
  while( true ) {
    pcVar4 = (char *)(unaff_A6 + -0x5c);
    do {
      cVar5 = *pcVar4;
      *in_A0 = cVar5;
      in_A0 = in_A0 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar5 != '\0');
    FUN_00002358();
    FUN_00002370((ushort)(byte)((char)unaff_D3w + 0x1f) * 0x1c + 0x4098);
    unaff_D3w = unaff_D3w + 1;
    if (2 < unaff_D3w) break;
    cVar5 = (char)unaff_D3w;
    func_0x000076d0(unaff_A6 + -0x5c,0x15752,0x7f4c,cVar5);
    if (*(char *)(unaff_A6 + -0x5c) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffff;
    }
    *(undefined2 *)((short)(ushort)(byte)(cVar5 + 0x1f) * 0x1c + 0x14098) = uVar1;
    in_A0 = (char *)((short)(ushort)(byte)(cVar5 + 0x1f) * 0x1c + 0x1409a);
  }
  for (sVar3 = 0; sVar3 < 2; sVar3 = sVar3 + 1) {
    for (sVar2 = 0; sVar2 < 0xe; sVar2 = sVar2 + 1) {
      FUN_00002380(0x14488,0x2580028,0x280028,0x144a4,sVar3 * 0x28,0);
    }
  }
  for (sVar3 = 2; sVar3 < 4; sVar3 = sVar3 + 1) {
    for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
      FUN_00002380(0x14488,0x2580028,0x280028,0x144a4,sVar3 * 0x28,0);
    }
  }
  for (sVar3 = 4; sVar3 < 6; sVar3 = sVar3 + 1) {
    for (sVar2 = 0; sVar2 < 0x10; sVar2 = sVar2 + 1) {
      FUN_00002380(0x14488,0x2580028,0x280028,0x144a4,sVar3 * 0x28,0);
    }
  }
  FUN_00002380(0x14434,0,0x500050,0x144a4,0,0x24);
  FUN_00002380(0x143fc,0,0xa00050,0x144a4,0x500000,0x10024);
  FUN_00002380(0x143fc,0xa00000,0xa00050,0x144a4,0xf00000,0x10024);
  FUN_00002380(0x143fc,0x1400000,0xa00050,0x144a4,0x1900000,0x10024);
  FUN_00002380(0x143fc,0x1e00000,0xa00050,0x144a4,0x50,0x10024);
  FUN_00002380(0x14418,0,0xa00050,0x144a4,0xa0,0x10024);
  FUN_00002380(0x14418,0xa00000,0xa00050,0x144a4,0xa000a0,0x10024);
  FUN_00002380(0x14418,0x1400000,0xa00050,0x144a4,0x14000a0,0x10024);
  FUN_00002380(0x14418,0x1e00000,0xa00050,0x144a4,0x1e000a0,0x10024);
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    FUN_00002380(0x14434,CONCAT22((sVar3 % 4) * 0x28 + 0x50,(sVar3 / 4) * 0x28),0x280028,0x144c0,
                 0x28,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003c60 at 00003c60
// Size: 378 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003c60(void)

{
  short sVar1;
  short sStack0000002c;
  short sStack00000038;
  undefined4 uStack0000003a;
  
  FUN_00002380(0x143fc,0xa00000);
  FUN_00002380(0x143fc,0x1400000,0xa00050,0x144a4,0x1900000,0x10024);
  FUN_00002380(0x143fc,0x1e00000,0xa00050,0x144a4,0x50,0x10024);
  FUN_00002380(0x14418,0,0xa00050,0x144a4,0xa0,0x10024);
  FUN_00002380(0x14418,0xa00000,0xa00050,0x144a4,0xa000a0,0x10024);
  FUN_00002380(0x14418,0x1400000,0xa00050,0x144a4,0x14000a0,0x10024);
  FUN_00002380(0x14418,0x1e00000,0xa00050,0x144a4,0x1e000a0,0x10024);
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    uStack0000003a = 0x280000;
    sStack00000038 = sVar1 * 0x30 + 0xc0;
    sStack0000002c = (sVar1 % 4) * 0x28 + 0x50;
    FUN_00002380();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003de4 at 00003de4
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003de4(void)

{
  if (_DAT_00027ee8 != 0) {
    FUN_00001d08(_DAT_00027ee8);
    _DAT_00027ee8 = 0;
  }
  return;
}



// Function: FUN_00003e0c at 00003e0c
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003e0c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar2;
  int iVar1;
  short sVar3;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 *extraout_A0_01;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uStack_56;
  undefined4 uStack_52;
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((param_1._2_2_ != 0) && (param_2._2_2_ == 2)) {
    _DAT_00027722 = *(short *)(_DAT_0002884c + 0x120);
  }
  local_4e = (int *)0x0;
  if (param_2._2_2_ != 1) {
    uVar5 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
    func_0x00006d80((short)_DAT_000297f4);
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10),
               uVar5);
    local_4e = extraout_A0;
    FUN_00001bf0((char)extraout_A0);
    _DAT_00027fd4 = local_4e;
    if (_DAT_000297f8 != (int *)0x0) {
      (**(code **)(*_DAT_000297f8 + 0x3a0))();
      _DAT_000297f8 = (int *)0x0;
    }
    (**(code **)(*local_4e + 0x194))();
    (**(code **)(*local_4e + 0x268))();
  }
  if (DAT_00025b39 != '\0') {
    cVar2 = func_0x000029b0();
    if (cVar2 != '\0') {
      FUN_000029a8(0,0,0x5487,0,0,0,0);
      FUN_000029e8();
      func_0x00006e90();
    }
  }
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  puStack_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    if (_DAT_00027722 == 0) {
      if (param_2._0_2_ != 0) {
        func_0x00002bb0();
      }
    }
    else if (param_1._0_2_ == 0) {
      if (param_2._0_2_ != 0) {
        func_0x00002bb0();
      }
    }
    else if (param_2._0_2_ != 0) {
      FUN_00004e14();
    }
    *(short *)(_DAT_0002884c + 0x120) = _DAT_00027722;
    if (param_2._2_2_ != 1) {
      (**(code **)(*local_4e + 0x3a0))();
      _DAT_00027fd4 = (int *)0x0;
    }
    _DAT_00025f52 = puStack_10;
  }
  else {
    if ((param_2._2_2_ != 1) && (_DAT_00027fd4 != (int *)0x0)) {
      (**(code **)(*_DAT_00027fd4 + 0x3a0))();
      _DAT_00027fd4 = (int *)0x0;
    }
    FUN_00001c10((short)((uint)uStack_14 >> 0x10));
  }
  uVar5 = SUB42(param_3,0);
  if (*(short *)(_DAT_0002884c + 0x12e) == 0) {
    if (param_2._2_2_ != 1) {
      FUN_000050b6();
    }
    if (param_1._2_2_ != 0) {
      FUN_00004262(0,uVar5);
      FUN_0000482a(uVar5);
    }
    FUN_00004104(uVar5);
  }
  else {
    for (sVar3 = 0; sVar3 < 0xb; sVar3 = sVar3 + 1) {
      *(undefined2 *)(&DAT_00015498 + sVar3 * 2) = *(undefined2 *)(&DAT_000154ae + sVar3 * 2);
    }
    FUN_00002ae0(8);
    uVar6 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    uVar4 = 0x24;
    FUN_00003c60((short)extraout_A0_00);
    uStack_56 = 0xffff8300;
    uStack_52 = 0xffff8300;
    (**(code **)(*param_3 + 0x1bc))(uVar5,(char)&uStack_56,uVar6);
    *(undefined1 *)((int)param_3 + 0xad) = 1;
    *(undefined1 *)((int)param_3 + 0xb1) = 1;
    *(undefined1 *)((int)param_3 + 0xae) = 1;
    *(undefined1 *)(param_3 + 0x2c) = 1;
    *(undefined1 *)((int)param_3 + 0xaf) = 1;
    func_0x000073b0(0x32);
    uVar6 = SUB42(extraout_A0_01,0);
    if (extraout_A0_01 != (undefined4 *)0x0) {
      uVar4 = 0x86;
      func_0x00002428(uVar6);
      *extraout_A0_01 = 0x1ee88;
      *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0;
    }
    FUN_00002430(uVar6,3000,uVar5,uVar4,0);
    *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 3000;
    (**(code **)(*param_3 + 0x104))(param_3,uVar6);
  }
  return;
}



// Function: FUN_00003ed8 at 00003ed8
// Size: 556 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003ed8(void)

{
  char in_D0b;
  int iVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  short unaff_D5w;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  
  if (in_D0b != '\0') {
    FUN_000029a8(0,0,0x5487,0,0,0,0);
    FUN_000029e8();
    func_0x00006e90();
  }
  *(undefined2 *)(unaff_A6 + -0x12) = 0;
  *(undefined4 *)(unaff_A6 + -0x10) = 0;
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar1 = func_0x000076a8((short)unaff_A6 + -0x46);
  if (iVar1 == 0) {
    if (_DAT_00027722 == 0) {
      if (unaff_D4w != 0) {
        func_0x00002bb0();
      }
    }
    else if (*(short *)(unaff_A6 + 8) == 0) {
      if (unaff_D4w != 0) {
        func_0x00002bb0();
      }
    }
    else if (unaff_D4w != 0) {
      FUN_00004e14();
    }
    *(short *)(_DAT_0002884c + 0x120) = _DAT_00027722;
    if (unaff_D3w != 1) {
      (**(code **)(**(int **)(unaff_A6 + -0x4a) + 0x3a0))();
      _DAT_00027fd4 = (int *)0x0;
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
  }
  else {
    if ((unaff_D3w != 1) && (_DAT_00027fd4 != (int *)0x0)) {
      (**(code **)(*_DAT_00027fd4 + 0x3a0))();
      _DAT_00027fd4 = (int *)0x0;
    }
    FUN_00001c10((short)((uint)*(undefined4 *)(unaff_A6 + -0x10) >> 0x10));
  }
  if (*(short *)(_DAT_0002884c + 0x12e) == 0) {
    if (unaff_D3w != 1) {
      FUN_000050b6();
    }
    if (unaff_D5w != 0) {
      FUN_00004262(0);
      FUN_0000482a();
    }
    FUN_00004104();
  }
  else {
    for (sVar2 = 0; sVar2 < 0xb; sVar2 = sVar2 + 1) {
      *(undefined2 *)(&DAT_00015498 + sVar2 * 2) = *(undefined2 *)(&DAT_000154ae + sVar2 * 2);
    }
    FUN_00002ae0(8);
    FUN_00003c60(extraout_A0w);
    *(undefined4 *)(unaff_A6 + -0x52) = 0xffff8300;
    *(undefined4 *)(unaff_A6 + -0x4e) = 0xffff8300;
    (**(code **)(*unaff_A2 + 0x1bc))();
    *(undefined1 *)((int)unaff_A2 + 0xad) = 1;
    *(undefined1 *)((int)unaff_A2 + 0xb1) = 1;
    *(undefined1 *)((int)unaff_A2 + 0xae) = 1;
    *(undefined1 *)(unaff_A2 + 0x2c) = 1;
    *(undefined1 *)((int)unaff_A2 + 0xaf) = 1;
    func_0x000073b0(0x32);
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0x56) = extraout_A0;
      func_0x00002428((short)extraout_A0);
      *extraout_A0 = 0x1ee88;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    }
    FUN_00002430((short)extraout_A0,3000);
    *(undefined4 *)((int)extraout_A0 + 0x2e) = 3000;
    (**(code **)(*unaff_A2 + 0x104))();
  }
  return;
}



// Function: FUN_00004104 at 00004104
// Size: 350 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004104(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined2 uVar3;
  
  for (sVar2 = 0; uVar3 = SUB42(param_1,0), sVar2 < 8; sVar2 = sVar2 + 1) {
    if ((((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
         (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 1)) &&
        (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xc0) != 3)) &&
       ((**(code **)(*param_1 + 0x188))(uVar3,(char)sVar2 + '1'), extraout_A0 != (int *)0x0)) {
      (**(code **)(*extraout_A0 + 0x3ec))
                ((short)extraout_A0,*(short *)(sVar2 * 2 + _DAT_0002884c + 0xf0) != 0);
    }
  }
  (**(code **)(*param_1 + 0x188))(uVar3,0x65);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x3a0))();
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
  }
  (**(code **)(*param_1 + 0x188))(uVar3,0x20);
  uVar1 = 0;
  if (extraout_A0_01 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0_01 + 0x3a0))();
  }
  return uVar1;
}



// Function: FUN_00004262 at 00004262
// Size: 1096 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004262(int param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  short sVar5;
  int iVar4;
  short sVar6;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined1 extraout_A0b;
  int *piVar7;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  char cVar11;
  undefined1 auStack_106 [256];
  short local_6;
  
  iVar4 = 0;
  if (param_2 != (int *)0x0) {
    if (param_1 < 0) {
      sVar5 = 0;
      local_6 = 8;
    }
    else {
      local_6 = param_1._0_2_ + 1;
      sVar5 = param_1._0_2_;
    }
    uVar10 = SUB42(param_2,0);
    (**(code **)(*param_2 + 0x188))(uVar10,0x65);
    if (extraout_A0 == (int *)0x0) {
      iVar4 = 0;
      for (; sVar5 < local_6; sVar5 = sVar5 + 1) {
        cVar3 = (char)sVar5;
        (**(code **)(*param_2 + 0x188))(uVar10,cVar3 + '1');
        uVar8 = SUB42(extraout_A0_01,0);
        if (((param_1 < 0) || (param_1._2_2_ != 0)) && (extraout_A0_01 != (int *)0x0)) {
          func_0x00007320((short)auStack_106,(char)_DAT_0002884c + cVar3 * '\x14');
          (**(code **)(*extraout_A0_01 + 0x3dc))(uVar8,extraout_A0b);
        }
        if (*(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) == 0) {
          sVar6 = 4;
        }
        else {
          sVar6 = *(short *)(sVar5 * 2 + _DAT_0002884c + 0xc0);
        }
        if (sVar6 == 4) {
          if ((sVar5 == 0) || ((int)sVar5 / 2 != (sVar5 + -1) / 2)) {
            sVar6 = 4;
          }
          else {
            sVar6 = 5;
          }
        }
        if (*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) == 0) {
          sVar6 = 6;
        }
        if (extraout_A0_01 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          (**(code **)(*extraout_A0_01 + 0x188))(uVar8,cVar3 + '1');
          piVar7 = extraout_A0_02;
        }
        if (piVar7 != (int *)0x0) {
          cVar11 = (char)sVar6 + -0x34;
          uVar9 = (undefined2)((uint)piVar7 >> 0x10);
          (**(code **)(*piVar7 + 0x3d8))();
          (**(code **)(*piVar7 + 0x70))((short)piVar7,uVar9,cVar11);
          (**(code **)(*piVar7 + 0x3a0))();
          if (param_1._2_2_ == 0) {
            (**(code **)(*piVar7 + 0x248))();
          }
        }
        if (6 < sVar6) {
          sVar6 = sVar6 + -7;
        }
        if (sVar6 == 5) {
          sVar6 = 4;
        }
        if (sVar6 == 6) {
          sVar6 = 3;
        }
        if (extraout_A0_01 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          (**(code **)(*extraout_A0_01 + 0x188))(uVar8,cVar3 + '1');
          piVar7 = extraout_A0_03;
        }
        if (piVar7 != (int *)0x0) {
          if ((param_1._2_2_ == 0) && (sVar6 != *(short *)(piVar7 + 0x1f))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          *(short *)(piVar7 + 0x1f) = sVar6;
          if (bVar2) {
            (**(code **)(*piVar7 + 0x248))();
          }
        }
        if (extraout_A0_01 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          (**(code **)(*extraout_A0_01 + 0x188))(uVar8,cVar3 + '1');
          piVar7 = extraout_A0_04;
        }
        iVar4 = 0;
        if (piVar7 != (int *)0x0) {
          sVar1 = *(short *)(sVar5 * 2 + _DAT_0002884c + 0xf0);
          iVar4 = *(int *)((int)piVar7 + 0xaa);
          (**(code **)(*piVar7 + 0x3ec))
                    ((short)piVar7,(char)*(undefined2 *)(sVar5 * 2 + _DAT_0002884c + 0xf0));
          if ((sVar1 == iVar4) && ((bool)*(char *)((int)piVar7 + 0x81) == (sVar6 == 3))) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          iVar4 = (**(code **)(*piVar7 + 0x3a0))();
          if (((bVar2) && (param_1._2_2_ == 0)) &&
             (iVar4 = (**(code **)(*piVar7 + 0x1d8))(), (char)iVar4 != '\0')) {
            iVar4 = (**(code **)(*piVar7 + 0x26c))();
          }
        }
        if (((param_1._2_2_ != 0) && (iVar4 = 0, extraout_A0_01 != (int *)0x0)) &&
           (iVar4 = (**(code **)(*extraout_A0_01 + 0x1d8))(), (char)iVar4 != '\0')) {
          iVar4 = (**(code **)(*extraout_A0_01 + 0x26c))();
        }
      }
    }
    else {
      (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,0x30);
      for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
        if ((*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) != 0) &&
           (*(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) == 0)) {
          (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,(char)sVar5 + '0');
          break;
        }
      }
      (**(code **)(*param_2 + 0x188))(uVar10,0x70);
      iVar4 = 0;
      if (extraout_A0_00 != (int *)0x0) {
        iVar4 = (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,0x30);
        for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
          iVar4 = sVar5 * 2;
          if ((*(short *)(iVar4 + _DAT_0002884c + 0xd0) == 1) &&
             (iVar4 = sVar5 * 2, *(short *)(iVar4 + _DAT_0002884c + 0xc0) != 3)) {
            iVar4 = (**(code **)(*extraout_A0_00 + 1000))
                              ((short)extraout_A0_00,
                               (char)*(undefined2 *)(sVar5 * 2 + _DAT_0002884c + 0xc0) + '0');
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



// Function: FUN_0000482a at 0000482a
// Size: 206 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000482a(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 extraout_A0;
  undefined2 extraout_A0w;
  undefined1 auStack_104 [256];
  
  sVar1 = _DAT_000154a2 +
          ((_DAT_0001549e * 3 + _DAT_0001549c * 3 + _DAT_0001549a * 3 + _DAT_00015498 * 3) -
          _DAT_000154a0);
  if (_DAT_000154a4 != 0xf) {
    if (_DAT_000154a4 == 1) {
      sVar1 = sVar1 + 3;
    }
    else if (_DAT_000154a4 == 0) {
      sVar1 = sVar1 + 6;
    }
  }
  if (0x13 < sVar1) {
    sVar1 = 0x14;
  }
  sVar4 = 0;
  sVar3 = 0;
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if (((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
        (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 1)) &&
       (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xc0) != 3)) {
      sVar4 = *(short *)(sVar2 * 2 + _DAT_0002884c + 0xc0) + 1 + sVar4;
      sVar3 = sVar3 + 1;
    }
  }
  if (sVar3 == 0) {
    sVar4 = 0x50;
  }
  else {
    sVar4 = (short)((sVar4 * 0x50) / (sVar3 * 3));
  }
  if (0x4d < sVar4) {
    sVar4 = 0x50;
  }
  FUN_00002ad8(0x70000,(int)(short)(sVar1 + sVar4));
  func_0x000076d0(0x27e52,extraout_A0);
  func_0x00007320(auStack_104,0x7e52);
  func_0x00006e38(param_1,0x64696666,extraout_A0w);
  return;
}



// Function: FUN_000048f8 at 000048f8
// Size: 119 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000048f8(void)

{
  short in_D0w;
  short sVar1;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  undefined4 extraout_A0;
  undefined2 extraout_A0w;
  int unaff_A6;
  
  do {
    unaff_D6w = in_D0w + 1 + unaff_D6w;
    unaff_D5w = unaff_D5w + 1;
    do {
      unaff_D4w = unaff_D4w + 1;
      if (7 < unaff_D4w) {
        if (unaff_D5w == 0) {
          sVar1 = 0x50;
        }
        else {
          sVar1 = (short)((unaff_D6w * 0x50) / (unaff_D5w * 3));
        }
        if (0x4d < sVar1) {
          sVar1 = 0x50;
        }
        FUN_00002ad8(0x70000,(int)(short)(unaff_D3w + sVar1));
        func_0x000076d0(0x27e52,extraout_A0);
        func_0x00007320(unaff_A6 + -0x100,0x7e52);
        func_0x00006e38(*(undefined4 *)(unaff_A6 + 8),0x64696666,extraout_A0w);
        return;
      }
    } while (((*(short *)(unaff_D4w * 2 + _DAT_0002884c + 0x138) == 0) ||
             (*(short *)(unaff_D4w * 2 + _DAT_0002884c + 0xd0) != 1)) ||
            (*(short *)(unaff_D4w * 2 + _DAT_0002884c + 0xc0) == 3));
    in_D0w = *(short *)(unaff_D4w * 2 + _DAT_0002884c + 0xc0);
  } while( true );
}



// Function: FUN_00004970 at 00004970
// Size: 22 bytes

void FUN_00004970(void)

{
  int unaff_A6;
  
  func_0x00006e38(*(undefined4 *)(unaff_A6 + 8));
  return;
}



// Function: FUN_00004986 at 00004986
// Size: 721 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004986(int *param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  undefined2 extraout_A0w;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 auStack_50 [76];
  
  _DAT_00028842 = 1;
  piVar1 = *(int **)(_DAT_000297f4 + 0x80);
  *(undefined1 *)(piVar1 + 0x50) = 1;
  (**(code **)(*piVar1 + 0x20))((short)piVar1,0,(short)piVar1);
  uVar7 = SUB42(param_1,0);
  if (*(short *)(_DAT_0002884c + 0x12e) == 0) {
    (**(code **)(*param_1 + 0x188))(uVar7,0x6465);
    if (extraout_A0 != (int *)0x0) {
      sVar2 = (**(code **)(*extraout_A0 + 0x3e4))();
      for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
        *(ushort *)(sVar4 * 2 + _DAT_0002884c + 0xd0) = (ushort)(sVar4 != (short)(sVar2 + -0x6430));
      }
    }
    (**(code **)(*param_1 + 0x188))(uVar7,0x6d70);
    if (extraout_A0_00 != (int *)0x0) {
      sVar2 = (**(code **)(*extraout_A0_00 + 0x3e4))();
      for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
        *(short *)(sVar4 * 2 + _DAT_0002884c + 0xc0) = sVar2 + -0x6d30;
        *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xe0) = 0;
      }
    }
    FUN_0000546c();
    uVar7 = 0x80;
    puVar6 = auStack_50;
    func_0x00007028((short)puVar6);
    FUN_00001ea8((short)((uint)puVar6 >> 0x10),uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar4 = 0;
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xd0) = 1;
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xc0) = 0;
    }
    if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xc0) == 3) {
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0x138) = 0;
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xd0) = 1;
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xc0) = 0;
      sVar3 = func_0x00004938(*(undefined2 *)(sVar2 * 0x14 + _DAT_0002884c + 0x18c));
      if (-1 < sVar3) {
        (&DAT_000015d9)[sVar3 * 0x42 + _DAT_0002884c] = 0xf;
      }
    }
    if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 0) {
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xc0) = 2;
      sVar4 = sVar4 + 1;
    }
  }
  if (sVar4 < 2) {
    *(undefined2 *)(_DAT_0002884c + 0x2f8c) = 0;
  }
  FUN_00002a18();
  *(undefined2 *)(_DAT_0002884c + 0x11a) = _DAT_00015498;
  *(undefined2 *)(_DAT_0002884c + 0x11c) = _DAT_0001549a;
  *(undefined2 *)(_DAT_0002884c + 0x11e) = _DAT_0001549c;
  *(undefined2 *)(_DAT_0002884c + 0x124) = _DAT_0001549e;
  *(undefined2 *)(_DAT_0002884c + 0x12a) = _DAT_000154a0;
  *(undefined2 *)(_DAT_0002884c + 0x132) = _DAT_000154a2;
  *(undefined2 *)(_DAT_0002884c + 0x114) = _DAT_000154a4;
  *(undefined2 *)(_DAT_0002884c + 0x126) = _DAT_000154a6;
  *(undefined2 *)(_DAT_0002884c + 0x128) = _DAT_000154a8;
  *(undefined2 *)(_DAT_0002884c + 300) = _DAT_000154aa;
  *(undefined2 *)(_DAT_0002884c + 0x122) = _DAT_000154ac;
  *(undefined2 *)(_DAT_0002884c + 0x130) = 0;
  FUN_00002e20();
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x198))();
    func_0x000073b0(0x2e);
    uVar5 = 0;
    if (extraout_A0_01 != 0) {
      func_0x000070e8((short)extraout_A0_01);
      uVar5 = extraout_A0w;
    }
    func_0x00006dd0(uVar5,uVar7);
    (**(code **)(*param_1 + 0x104))(param_1,uVar5);
  }
  FUN_00001fce(1);
  return;
}



// Function: FUN_00004a30 at 00004a30
// Size: 118 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004a30(void)

{
  short sVar1;
  short sVar2;
  int *extraout_A0;
  int in_A1;
  short unaff_A6w;
  short sStack00000004;
  
  (**(code **)(in_A1 + 0x188))();
  if (extraout_A0 != (int *)0x0) {
    sStack00000004 = (short)((uint)extraout_A0 >> 0x10);
    sVar1 = (**(code **)(*extraout_A0 + 0x3e4))();
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      *(short *)(sVar2 * 2 + _DAT_0002884c + 0xc0) = sVar1 + -0x6d30;
      *(undefined2 *)(sVar2 * 2 + _DAT_0002884c + 0xe0) = 0;
    }
  }
  sStack00000004 = 0;
  FUN_0000546c();
  sStack00000004 = unaff_A6w + -0x4c;
  func_0x00007028();
  FUN_00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00004e14 at 00004e14
// Size: 402 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004e14(void)

{
  char cVar2;
  undefined2 uVar1;
  short sVar3;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined4 extraout_A0;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined4 extraout_A0_00;
  char *pcVar4;
  char *pcVar5;
  char local_16 [6];
  undefined1 local_10;
  undefined2 local_e;
  undefined2 local_c [4];
  
  for (sVar3 = 0; sVar3 < 6; sVar3 = sVar3 + 1) {
    cVar2 = FUN_00002ad0(0x5a);
    local_16[sVar3] = cVar2 + ' ';
  }
  local_10 = 0;
  FUN_00002ad8(6);
  FUN_00002ad8(5,extraout_A0w);
  FUN_00002ad8(4,extraout_A0w_00);
  FUN_00002ad8(0x890003,extraout_A0w_01);
  FUN_00002ad8(2,extraout_A0);
  FUN_00002ad8(1,extraout_A0w_02);
  FUN_00002ad8(0x890000,extraout_A0w_03);
  FUN_000029a8(extraout_A0_00);
  for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
    if (*(short *)(&DAT_00015258 + sVar3 * 2) == 7) {
      uVar1 = FUN_00002ad0(7);
    }
    else {
      uVar1 = *(undefined2 *)(&DAT_00015258 + sVar3 * 2);
    }
    local_c[sVar3] = uVar1;
  }
  _DAT_000277c2 = 2;
  func_0x00006098(local_c[1],local_c[3],_DAT_000277c0);
  pcVar4 = &DAT_00027760;
  pcVar5 = &DAT_00015476;
  do {
    cVar2 = *pcVar5;
    *pcVar4 = cVar2;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  pcVar4 = &DAT_00027738;
  pcVar5 = &DAT_00015476;
  do {
    cVar2 = *pcVar5;
    *pcVar4 = cVar2;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  pcVar4 = &DAT_00027768;
  pcVar5 = local_16;
  do {
    cVar2 = *pcVar5;
    *pcVar4 = cVar2;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  func_0x00002a90();
  FUN_000030cc();
  local_e = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  func_0x00002bb0();
  *(undefined2 *)(_DAT_0002884c + 0x162) = _DAT_00027778;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00004fb4 at 00004fb4
// Size: 258 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004fb4(undefined4 param_1)

{
  short sVar1;
  int extraout_A0;
  
  if (param_1._0_2_ < 3) {
    for (sVar1 = 0; sVar1 < 0xb; sVar1 = sVar1 + 1) {
      *(undefined2 *)(&DAT_00015498 + sVar1 * 2) =
           *(undefined2 *)(&DAT_000154ae + sVar1 * 2 + param_1._0_2_ * 0x16);
    }
    _DAT_00027d2e = -(int)param_1._0_2_;
  }
  else {
    sVar1 = (**(code **)(*_DAT_00027d2a + 0x58))();
    if ((int)sVar1 < param_1._0_2_ + -3) {
      for (sVar1 = 0; sVar1 < 0xb; sVar1 = sVar1 + 1) {
        *(undefined2 *)(&DAT_00015498 + sVar1 * 2) = *(undefined2 *)(&DAT_00027e3c + sVar1 * 2);
      }
      _DAT_00027d2e = -3;
    }
    else {
      (**(code **)(*_DAT_00027d2a + 0x74))(_DAT_00027d2a,param_1._0_2_ + -3);
      for (sVar1 = 0; sVar1 < 0xb; sVar1 = sVar1 + 1) {
        *(undefined2 *)(&DAT_00015498 + sVar1 * 2) =
             *(undefined2 *)(sVar1 * 2 + extraout_A0 + 0x104);
      }
      _DAT_00027d2e = param_1._0_2_ + -3;
    }
  }
  FUN_0000482a();
  FUN_00004104();
  return;
}



// Function: FUN_000050b6 at 000050b6
// Size: 950 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000050b6(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  undefined2 extraout_A0w;
  undefined4 *extraout_A0_02;
  int *extraout_A0_03;
  undefined4 *puVar6;
  int *extraout_A0_04;
  int extraout_A0_05;
  int *extraout_A0_06;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 auStack_50 [76];
  
  func_0x000073b0(0x1e);
  if (extraout_A0 != (int *)0x0) {
    func_0x00006f88((char)extraout_A0);
    *extraout_A0 = 0x1840a;
  }
  uVar12 = 0x1a;
  uVar11 = 0;
  uVar10 = (undefined2)((uint)extraout_A0 >> 0x10);
  _DAT_00027d2a = extraout_A0;
  FUN_000020c0((short)extraout_A0,0);
  uVar9 = 0x80;
  puVar8 = auStack_50;
  func_0x00007028((short)puVar8,uVar10,uVar11,uVar12);
  func_0x00006ed0((short)auStack_50,0x7374,(short)((uint)puVar8 >> 0x10),uVar9);
  uVar9 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  if (extraout_A0_00 != 0) {
    func_0x000073b0(0x20);
    uVar10 = 0;
    if (extraout_A0_01 != 0) {
      FUN_00003138((char)extraout_A0_01);
      uVar10 = extraout_A0w;
    }
    func_0x00003140(uVar10,(short)extraout_A0_00,0);
    FUN_00001dc2((short)_DAT_00027d2a,uVar10);
    FUN_00000e10(uVar10);
  }
  FUN_00001d08((char)extraout_A0_00);
  func_0x00006ed0((short)auStack_50,0x746e,uVar9);
  if (extraout_A0_02 == (undefined4 *)0x0) {
    _DAT_00027d2e = 0;
  }
  else {
    _DAT_00027d2e = *(int *)*extraout_A0_02;
  }
  FUN_00001d08((char)extraout_A0_02);
  if (_DAT_00027d2e == -3) {
    func_0x00006ed0((short)auStack_50,0x6d70);
    if (extraout_A0_03 == (int *)0x0) {
      _DAT_00027d2e = 0;
    }
    else {
      puVar6 = (undefined4 *)*extraout_A0_03;
      _DAT_00027d38 = *puVar6;
      puVar8 = &DAT_00027d3c;
      puVar3 = puVar6 + 1;
      for (iVar2 = *(byte *)(puVar6 + 1) + 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *(undefined1 *)puVar3;
        puVar8 = puVar8 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      sVar4 = 10;
      puVar6 = puVar6 + 0x41;
      puVar7 = (undefined2 *)&DAT_00027e3c;
      do {
        *puVar7 = *(undefined2 *)puVar6;
        sVar4 = sVar4 + -1;
        puVar6 = (undefined4 *)((int)puVar6 + 2);
        puVar7 = puVar7 + 1;
      } while (sVar4 != -1);
    }
  }
  sVar4 = (**(code **)(*_DAT_00027d2a + 0x58))();
  bVar1 = _DAT_00027d2e < 1;
  if (sVar4 != 0) {
    for (sVar5 = 1; sVar5 <= sVar4; sVar5 = sVar5 + 1) {
      (**(code **)(*_DAT_00027d2a + 0x74))((short)_DAT_00027d2a,(char)sVar5);
      if (*extraout_A0_04 == _DAT_00027d2e) {
        _DAT_00027d2e = (int)sVar5;
        bVar1 = true;
      }
      *extraout_A0_04 = (int)sVar5;
    }
  }
  if (!bVar1) {
    _DAT_00027d2e = 0;
  }
  if (_DAT_00027d2e == -3) {
    for (sVar4 = 0; sVar4 < 0xb; sVar4 = sVar4 + 1) {
      *(ushort *)(&DAT_00015498 + sVar4 * 2) = (ushort)(byte)(&DAT_00027d3c)[sVar4];
    }
  }
  else if (_DAT_00027d2e < 1) {
    for (sVar4 = 0; sVar4 < 0xb; sVar4 = sVar4 + 1) {
      *(undefined2 *)(&DAT_00015498 + sVar4 * 2) =
           *(undefined2 *)(&DAT_000154ae + sVar4 * 2 + _DAT_00027d2e * -0x16);
    }
  }
  else {
    (**(code **)(*_DAT_00027d2a + 0x78))();
    (**(code **)(*_DAT_00027d2a + 0x74))((short)_DAT_00027d2a,(short)_DAT_00027d2e);
    for (sVar4 = 0; sVar4 < 0xb; sVar4 = sVar4 + 1) {
      *(undefined2 *)(&DAT_00015498 + sVar4 * 2) =
           *(undefined2 *)(sVar4 * 2 + extraout_A0_05 + 0x104);
    }
    (**(code **)(*_DAT_00027d2a + 0x78))();
  }
  func_0x00006ed0((short)auStack_50,0x7665);
  if (extraout_A0_06 != (int *)0x0) {
    iVar2 = *extraout_A0_06;
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) != 0) {
        if (*(short *)(iVar2 + sVar4 * 2) == 3) {
          *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xd0) = 1;
          *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xc0) = 3;
        }
        else if (*(short *)(iVar2 + sVar4 * 2) == 5) {
          *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xd0) = 0;
          *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xc0) = 2;
        }
        else {
          *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xd0) = 1;
          *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xc0) = *(undefined2 *)(iVar2 + sVar4 * 2);
        }
      }
    }
    *(undefined2 *)(_DAT_0002884c + 0x116) = *(undefined2 *)(iVar2 + 0x10);
  }
  _DAT_00027d32 = _DAT_00027d2e;
  func_0x00006ec8((short)auStack_50);
  return;
}



// Function: FUN_0000546c at 0000546c
// Size: 144 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000546c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_9a [76];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((DAT_00027d36 != '\0') || (_DAT_00027d32 != _DAT_00027d2e)) {
    local_8 = 0;
    local_1a = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4e;
    iVar1 = func_0x000076a8((short)auStack_4e);
    if (iVar1 == 0) {
      uVar3 = 0x80;
      puVar2 = auStack_9a;
      func_0x00007028((short)puVar2);
      FUN_00001ea8((short)((uint)puVar2 >> 0x10),uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00001d08((short)local_8);
  }
  return;
}



// Function: FUN_00005bf0 at 00005bf0
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005bf0(void)

{
  int unaff_A3;
  int unaff_A5;
  
  *(ushort *)(unaff_A5 + -2) =
       *(ushort *)(unaff_A5 + -2) & 0xf0f0 |
       ((*(byte *)(unaff_A3 + -1) & 0xf0) << 4 | *(byte *)(unaff_A3 + -1) & 0xf) + 0x4058;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



