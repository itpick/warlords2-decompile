// Warlords II - Decompiled 68k Code
// Segment: CODE_023
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000006e at 0000006e
// Size: 144 bytes

void FUN_0000006e(int *param_1,undefined4 param_2)

{
  undefined4 *extraout_A0;
  undefined4 uVar1;
  
  uVar1 = 0x84;
  func_0x000073b0(0x108);
  if (extraout_A0 != (undefined4 *)0x0) {
    uVar1 = 0x9a;
    func_0x00002428(extraout_A0);
    *extraout_A0 = 0x1b462;
    *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x32) = 0;
    *(undefined2 *)(extraout_A0 + 0xd) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x106) = 0;
  }
  func_0x00002430(extraout_A0,0x57a,param_1,
                  CONCAT13(1,(int3)CONCAT22((short)((uint)uVar1 >> 0x10),CONCAT11(1,(char)uVar1))),
                  param_1);
  *(int **)((int)extraout_A0 + 0x2e) = param_1;
  *(undefined2 *)((int)extraout_A0 + 0x32) = param_2._0_2_;
  *(undefined2 *)(extraout_A0 + 0xd) = param_2._2_2_;
  (**(code **)(*param_1 + 0x104))(param_1,extraout_A0);
  param_1[0x74] = (int)extraout_A0;
  return;
}



// Function: FUN_000000fe at 000000fe
// Size: 200 bytes

void FUN_000000fe(int *param_1)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 *extraout_A0_00;
  
  if (param_1[0x74] != 0) {
    FUN_00000996();
    cVar1 = FUN_00000de0(param_1[0x74],extraout_A0);
    if ((cVar1 != '\0') && (*(char *)(param_1[0x74] + 0x108) == '\0')) {
      FUN_00000b08(param_1[0x74]);
      return;
    }
  }
  func_0x000073b0(0x116);
  if (extraout_A0_00 != (undefined4 *)0x0) {
    func_0x00002428(extraout_A0_00);
    *extraout_A0_00 = 0x1b462;
    *(undefined4 *)((int)extraout_A0_00 + 0x2e) = 0;
    *(undefined2 *)((int)extraout_A0_00 + 0x32) = 0;
    *(undefined2 *)(extraout_A0_00 + 0xd) = 0;
    *(undefined2 *)((int)extraout_A0_00 + 0x106) = 0;
    *extraout_A0_00 = 0x1b512;
    *(undefined1 *)(extraout_A0_00 + 0x42) = 0;
    *(undefined2 *)((int)extraout_A0_00 + 0x10a) = 0;
  }
  FUN_00000a0a(extraout_A0_00,param_1);
  (**(code **)(*param_1 + 0x104))(param_1,extraout_A0_00);
  param_1[0x74] = (int)extraout_A0_00;
  return;
}



// Function: FUN_000001c6 at 000001c6
// Size: 66 bytes

undefined4 FUN_000001c6(int param_1,undefined4 param_2)

{
  if ((param_2._0_1_ == '\x01') && (*(char *)(param_1 + 0x80) != '\0')) {
    *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x82) + 1;
    if (*(short *)(param_1 + 0x82) == 7) {
      *(undefined2 *)(param_1 + 0x82) = 0;
    }
    func_0x00003a58(param_1);
  }
  return 0;
}



// Function: FUN_00000208 at 00000208
// Size: 676 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000208(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  uVar3 = (undefined1)param_2;
  uVar2 = (undefined2)param_1;
  if ((*(char *)(_DAT_000297f4 + 0x92) != '\0') ||
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 0)) {
    func_0x00003778(uVar2,uVar3);
    return;
  }
  sVar1 = *(short *)(param_2 + 0x22);
  if (sVar1 == 3) {
LAB_000003ec:
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x8c))((short)*(int **)(param_1 + 0x7c),0x7d);
  }
  else {
    if (sVar1 == 4) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x8c))((short)*(int **)(param_1 + 0x7c),0x7a);
      return;
    }
    if (sVar1 == 5) {
      func_0x00003c58();
      return;
    }
    if (sVar1 != 8) {
      if (sVar1 == 9) {
        (**(code **)(**(int **)(param_1 + 0x7c) + 0x8c))((short)*(int **)(param_1 + 0x7c),0x7e);
        return;
      }
      if (sVar1 == 0xd) goto LAB_000003ec;
      if (sVar1 != 0x1b) {
        if (sVar1 == 0x1c) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x1d) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x1e) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x1f) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x20) {
          func_0x000048b0();
          return;
        }
        if ((((((sVar1 == 0x31) || (sVar1 == 0x32)) || (sVar1 == 0x33)) ||
             ((sVar1 == 0x34 || (sVar1 == 0x35)))) ||
            ((sVar1 == 0x36 || ((sVar1 == 0x37 || (sVar1 == 0x38)))))) || (sVar1 == 0x39)) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x61) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 99) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 100) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x65) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x71) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x73) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x77) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x78) {
          FUN_00001856();
          return;
        }
        if (sVar1 == 0x7a) {
          FUN_00001856();
          return;
        }
        if (sVar1 != 0x7f) {
          if (*(short *)(param_2 + 0x22) == 0x6f) {
            func_0x00003778(uVar2,uVar3);
            return;
          }
          *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x100;
          func_0x00003750(uVar2,uVar3);
          return;
        }
      }
    }
    if ((*(short *)(param_2 + 0x22) == 0x1b) && (*(short *)(param_2 + 0x24) != 0x47)) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x8c))((short)*(int **)(param_1 + 0x7c),0x80);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x8c))((short)*(int **)(param_1 + 0x7c),0x7c);
    }
  }
  return;
}



// Function: FUN_000004ac at 000004ac
// Size: 388 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000004ac(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = (short)(*param_4._2_4_ / 0x28);
  sVar4 = (short)(param_4._2_4_[1] / 0x28);
  if (param_2._0_1_ == 0) {
    _DAT_00028df8 = sVar4;
    _DAT_00028dfa = sVar5;
    if ((sVar4 == *_DAT_000288ac) && (sVar5 == _DAT_000288ac[1])) {
      DAT_00028dfc = '\0';
    }
    else {
      DAT_00028dfc = '\x01';
    }
  }
  cVar1 = *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c +
                   0x711);
  if (((cVar1 == '\n') || ((*(byte *)(sVar5 * 0xe0 + _DAT_00028850 + 1 + sVar4 * 2) & 0x10) != 0))
     && ((ushort)((uint)(*(int *)(sVar5 * 0xe0 + _DAT_00028850 + 1 + sVar4 * 2) << 4) >> 0x1c) !=
         *(ushort *)(_DAT_0002884c + 0x110))) {
    sVar3 = 0;
  }
  else {
    cVar2 = FUN_00001d78();
    if (cVar2 == '\0') {
      if (_DAT_000288fa == 2) {
        sVar3 = 6;
      }
      else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        sVar3 = 2;
      }
      else {
        sVar3 = 6;
      }
    }
    else {
      sVar3 = 0xb;
    }
  }
  if ((short)(sVar3 + 1000) == *(short *)(param_1 + 0xac)) {
    if ((param_2._0_1_ != 2) &&
       (((sVar4 != _DAT_00028df8 || (sVar5 != _DAT_00028dfa)) || (DAT_00028dfc != '\0')))) {
      if ((param_4._6_1_ != '\0') && ((short)(sVar3 + 1000) != 1000)) {
        if ((sVar4 == *_DAT_000288ac) && (sVar5 == _DAT_000288ac[1])) {
          FUN_000016da();
        }
        else if ((sVar4 != _DAT_000288ac[9]) || (sVar5 != _DAT_000288ac[10])) {
          func_0x00002bd0(sVar5,1);
        }
      }
      DAT_00028dfc = '\x01';
    }
    if (param_2._0_1_ != 0) {
      if (param_2._0_1_ != 1) {
        return param_2._0_1_ - 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000006a8 at 000006a8
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006a8(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x82) != '\0') && (cVar1 = FUN_00001d78(), cVar1 == '\0')) {
    FUN_0000006e(*(undefined4 *)(param_1 + 0x16),*(undefined4 *)(_DAT_000288ac + 0x12));
    return;
  }
  if ((*(char *)(param_1 + 0x82) == '\0') && (*(int *)(param_1 + 4) == 0x834)) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  return;
}



// Function: FUN_00000700 at 00000700
// Size: 98 bytes

void FUN_00000700(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_00000f20(param_1);
  if (((short)(param_4._2_4_[1] / 0x28) != *(short *)(param_1 + 0x7e)) ||
     ((short)(*param_4._2_4_ / 0x28) != *(short *)(param_1 + 0x80))) {
    *(undefined1 *)(param_1 + 0x82) = 1;
  }
  return;
}



// Function: FUN_00000762 at 00000762
// Size: 26 bytes

void FUN_00000762(int param_1)

{
  FUN_000014a4(*(undefined2 *)(param_1 + 0x80));
  return;
}



// Function: FUN_0000077c at 0000077c
// Size: 98 bytes

void FUN_0000077c(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  for (sVar2 = 0; sVar2 < *(short *)(param_1 + 0x154); sVar2 = sVar2 + 1) {
    sVar1 = 10;
    puVar3 = (undefined2 *)(sVar2 * 0x16 + param_1 + 0x84);
    puVar4 = *(undefined2 **)(sVar2 * 4 + param_1 + 0x134);
    do {
      *puVar4 = *puVar3;
      sVar1 = sVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar1 != -1);
  }
  if (*(short *)(param_1 + 0x154) == 0) {
    FUN_000016c6();
  }
  else {
    func_0x00002b00(*(undefined4 *)(param_1 + 0x134));
    func_0x000048d0();
  }
  return;
}



// Function: FUN_000007de at 000007de
// Size: 14 bytes

void FUN_000007de(void)

{
  return;
}



// Function: FUN_000007ec at 000007ec
// Size: 72 bytes

void FUN_000007ec(void)

{
  undefined4 *extraout_A0;
  
  func_0x000073b0(0x108);
  if (extraout_A0 != (undefined4 *)0x0) {
    func_0x00002428(extraout_A0);
    *extraout_A0 = 0x1b462;
    *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x32) = 0;
    *(undefined2 *)(extraout_A0 + 0xd) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x106) = 0;
  }
  return;
}



// Function: FUN_00000834 at 00000834
// Size: 56 bytes

void FUN_00000834(int param_1)

{
  if ((*(int *)(param_1 + 0x2e) != 0) && (*(int *)(*(int *)(param_1 + 0x2e) + 0x1d0) == param_1)) {
    *(undefined4 *)(*(int *)(param_1 + 0x2e) + 0x1d0) = 0;
  }
  FUN_00000ec8(param_1);
  return;
}



// Function: FUN_0000086c at 0000086c
// Size: 142 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000086c(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  int extraout_A0;
  undefined2 *puVar5;
  
  *(undefined2 *)(param_1 + 0x106) = 0;
  if (_DAT_000288ac != 0) {
    sVar3 = 8;
    while (sVar1 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar1;
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        *(undefined4 *)(*(short *)(param_1 + 0x106) * 4 + param_1 + 0xe6) =
             *(undefined4 *)(&DAT_000288b4 + sVar1 * 4);
        sVar2 = 10;
        puVar4 = *(undefined2 **)(&DAT_000288b4 + sVar1 * 4);
        puVar5 = (undefined2 *)(*(short *)(param_1 + 0x106) * 0x16 + param_1 + 0x36);
        do {
          *puVar5 = *puVar4;
          sVar2 = sVar2 + -1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (sVar2 != -1);
        *(short *)(param_1 + 0x106) = *(short *)(param_1 + 0x106) + 1;
      }
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028d22 = extraout_A0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000918 at 00000918
// Size: 22 bytes

void FUN_00000918(int *param_1)

{
  (**(code **)(*param_1 + 0x84))();
  return;
}



// Function: FUN_0000092e at 0000092e
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000092e(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  for (sVar2 = 0; sVar2 < *(short *)(param_1 + 0x106); sVar2 = sVar2 + 1) {
    sVar1 = 10;
    puVar3 = (undefined2 *)(sVar2 * 0x16 + param_1 + 0x36);
    puVar4 = *(undefined2 **)(sVar2 * 4 + param_1 + 0xe6);
    do {
      *puVar4 = *puVar3;
      sVar1 = sVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar1 != -1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000996 at 00000996
// Size: 14 bytes

void FUN_00000996(void)

{
  return;
}



// Function: FUN_000009a4 at 000009a4
// Size: 14 bytes

void FUN_000009a4(void)

{
  return;
}



// Function: FUN_000009b2 at 000009b2
// Size: 88 bytes

void FUN_000009b2(void)

{
  undefined4 *extraout_A0;
  
  func_0x000073b0(0x116);
  if (extraout_A0 != (undefined4 *)0x0) {
    func_0x00002428(extraout_A0);
    *extraout_A0 = 0x1b462;
    *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x32) = 0;
    *(undefined2 *)(extraout_A0 + 0xd) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x106) = 0;
    *extraout_A0 = 0x1b512;
    *(undefined1 *)(extraout_A0 + 0x42) = 0;
    *(undefined2 *)((int)extraout_A0 + 0x10a) = 0;
  }
  return;
}



// Function: FUN_00000a0a at 00000a0a
// Size: 244 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a0a(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  int extraout_A0;
  undefined2 *puVar5;
  
  FUN_00001bf0(_DAT_000288ac);
  func_0x00002430(param_1,0x57a,param_2);
  *(undefined4 *)(param_1 + 0x2e) = param_2;
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  *(undefined2 *)(param_1 + 0x34) = 0xffff;
  *(undefined2 *)(param_1 + 0x10a) = param_3._0_2_;
  *(undefined1 *)(param_1 + 0x10c) = param_3._2_1_;
  *(undefined2 **)(param_1 + 0x10e) = _DAT_000288ac;
  *(undefined2 *)(param_1 + 0x112) = *_DAT_000288ac;
  *(undefined2 *)(param_1 + 0x114) = _DAT_000288ac[1];
  *(undefined2 *)(param_1 + 0x106) = 0;
  if (_DAT_000288ac != (undefined2 *)0x0) {
    sVar3 = 8;
    while (sVar1 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar1;
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        *(undefined4 *)(*(short *)(param_1 + 0x106) * 4 + param_1 + 0xe6) =
             *(undefined4 *)(&DAT_000288b4 + sVar1 * 4);
        sVar2 = 10;
        puVar4 = *(undefined2 **)(&DAT_000288b4 + sVar1 * 4);
        puVar5 = (undefined2 *)(*(short *)(param_1 + 0x106) * 0x16 + param_1 + 0x36);
        do {
          *puVar5 = *puVar4;
          sVar2 = sVar2 + -1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (sVar2 != -1);
        *(short *)(param_1 + 0x106) = *(short *)(param_1 + 0x106) + 1;
      }
    }
  }
  if (_DAT_00028d22 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028d22 = extraout_A0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000b08 at 00000b08
// Size: 402 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b08(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  undefined1 uVar7;
  
  psVar4 = _DAT_000288ac;
  bVar3 = false;
  *(short *)(param_1 + 0x32) = _DAT_000288ac[9];
  psVar5 = _DAT_000288ac;
  sVar1 = psVar4[9];
  *(short *)(param_1 + 0x34) = _DAT_000288ac[10];
  sVar2 = psVar5[10];
  if ((_DAT_000288ac[9] == -1) || (_DAT_000288ac[10] == -1)) {
    *(short *)(param_1 + 0x32) = *_DAT_000288ac;
    *(short *)(param_1 + 0x34) = _DAT_000288ac[1];
  }
  func_0x00006e40((short)(param_1 + 0x32),(short)param_1 + 0x34);
  if ((param_2._2_1_ == '\0') && ((_DAT_000288ac[9] == -1 || (_DAT_000288ac[10] == -1)))) {
    sVar6 = func_0x00006e68(*(undefined2 *)(param_1 + 0x34));
    if ((sVar6 == 10) || (sVar6 == 8)) {
      *(undefined1 *)(param_1 + 0x2a) = 0;
      func_0x00002cc0((char)*(undefined2 *)(param_1 + 0x34));
      bVar3 = true;
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
  }
  if (!bVar3) {
    if (param_2._2_1_ == '\0') {
      sVar6 = func_0x00002bd8(*(undefined2 *)(param_1 + 0x34));
      if (((sVar6 == 1) || (sVar6 == 3)) || (sVar6 == 5)) {
        _DAT_000288ac[9] = sVar1;
        _DAT_000288ac[10] = sVar2;
      }
    }
    else {
      sVar6 = func_0x00002bd0(*(undefined2 *)(param_1 + 0x34),1);
      if (sVar6 == 0) {
        _DAT_000288ac[9] = sVar1;
        _DAT_000288ac[10] = sVar2;
      }
    }
  }
  if ((*(char *)(param_1 + 0x1b) == '\0') ||
     (((param_2._2_1_ == '\0' && (*_DAT_000288ac == *(short *)(param_1 + 0x112))) &&
      (_DAT_000288ac[1] == *(short *)(param_1 + 0x114))))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0x1b) = uVar7;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 1;
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x118))();
  }
  return;
}



// Function: FUN_00000c9a at 00000c9a
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c9a(int param_1)

{
  if (((*(char *)(param_1 + 0x10c) == '\0') && (*(short *)(_DAT_000288ac + 0x12) != -1)) &&
     (*(short *)(_DAT_000288ac + 0x14) != -1)) {
    func_0x00002bd8(*(undefined2 *)(_DAT_000288ac + 0x14));
  }
  FUN_00000b08((short)param_1);
  return;
}



// Function: FUN_00000cea at 00000cea
// Size: 28 bytes

void FUN_00000cea(int param_1)

{
  func_0x00002bd8(*(undefined2 *)(param_1 + 0x34));
  return;
}



// Function: FUN_00000d06 at 00000d06
// Size: 166 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000d06(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  *(undefined1 *)(param_1 + 0x108) = 1;
  if ((*(short *)(*(int *)(param_1 + 0x10e) + 0x12) != -1) &&
     (*(short *)(*(int *)(param_1 + 0x10e) + 0x14) != -1)) {
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(param_1 + 0x10e) + 0x12);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(*(int *)(param_1 + 0x10e) + 0x14);
  }
  for (sVar2 = 0; sVar2 < *(short *)(param_1 + 0x106); sVar2 = sVar2 + 1) {
    sVar1 = 10;
    puVar3 = (undefined2 *)(sVar2 * 0x16 + param_1 + 0x36);
    puVar4 = *(undefined2 **)(sVar2 * 4 + param_1 + 0xe6);
    do {
      *puVar4 = *puVar3;
      sVar1 = sVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar1 != -1);
    *(undefined2 *)(*(int *)(sVar2 * 4 + param_1 + 0xe6) + 0x12) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(*(int *)(sVar2 * 4 + param_1 + 0xe6) + 0x14) = *(undefined2 *)(param_1 + 0x34);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000dc8 at 00000dc8
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00000dc8(int param_1)

{
  short sVar1;
  short sVar3;
  int iVar2;
  short sVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  *(undefined2 *)(param_1 + 0x102) = 0;
  if (_DAT_000288ac != 0) {
    sVar4 = 8;
    while (sVar1 = sVar4 + -1, sVar4 != 0) {
      sVar4 = sVar1;
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        *(undefined4 *)(*(short *)(param_1 + 0x102) * 4 + param_1 + 0xe2) =
             *(undefined4 *)(&DAT_000288b4 + sVar1 * 4);
        sVar3 = 10;
        puVar5 = *(undefined2 **)(&DAT_000288b4 + sVar1 * 4);
        puVar6 = (undefined2 *)(*(short *)(param_1 + 0x102) * 0x16 + param_1 + 0x32);
        do {
          *puVar6 = *puVar5;
          sVar3 = sVar3 + -1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (sVar3 != -1);
        *(short *)(param_1 + 0x102) = *(short *)(param_1 + 0x102) + 1;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0x57d) {
    iVar2 = FUN_00001676();
  }
  else if (iVar2 == 0x57e) {
    iVar2 = func_0x00002af0();
  }
  else if (iVar2 == 0x57f) {
    iVar2 = FUN_0000168a();
  }
  else if (iVar2 == 0x580) {
    iVar2 = FUN_000016c6();
  }
  else {
    iVar2 = iVar2 + -0x834;
    if (iVar2 == 0) {
      iVar2 = FUN_000014a4(*(undefined4 *)(param_1 + 0x1d6));
    }
  }
  return iVar2;
}



// Function: FUN_00000de0 at 00000de0
// Size: 162 bytes

int FUN_00000de0(void)

{
  short sVar1;
  short sVar3;
  int iVar2;
  short sVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int unaff_A2;
  
  sVar4 = 8;
  while (sVar1 = sVar4 + -1, sVar4 != 0) {
    sVar4 = sVar1;
    if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
      *(undefined4 *)(*(short *)(unaff_A2 + 0x102) * 4 + unaff_A2 + 0xe2) =
           *(undefined4 *)(&DAT_000288b4 + sVar1 * 4);
      sVar3 = 10;
      puVar5 = *(undefined2 **)(&DAT_000288b4 + sVar1 * 4);
      puVar6 = (undefined2 *)(*(short *)(unaff_A2 + 0x102) * 0x16 + unaff_A2 + 0x32);
      do {
        *puVar6 = *puVar5;
        sVar3 = sVar3 + -1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (sVar3 != -1);
      *(short *)(unaff_A2 + 0x102) = *(short *)(unaff_A2 + 0x102) + 1;
    }
  }
  iVar2 = *(int *)(unaff_A2 + 4);
  if (iVar2 == 0x57d) {
    iVar2 = FUN_00001676();
  }
  else if (iVar2 == 0x57e) {
    iVar2 = func_0x00002af0();
  }
  else if (iVar2 == 0x57f) {
    iVar2 = FUN_0000168a();
  }
  else if (iVar2 == 0x580) {
    iVar2 = FUN_000016c6();
  }
  else {
    iVar2 = iVar2 + -0x834;
    if (iVar2 == 0) {
      iVar2 = FUN_000014a4(*(undefined4 *)(unaff_A2 + 0x1d6));
    }
  }
  return iVar2;
}



// Function: FUN_00000e82 at 00000e82
// Size: 74 bytes

void FUN_00000e82(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  for (sVar2 = 0; sVar2 < *(short *)(param_1 + 0x1d4); sVar2 = sVar2 + 1) {
    sVar1 = 10;
    puVar3 = (undefined2 *)(sVar2 * 0x16 + param_1 + 0x104);
    puVar4 = *(undefined2 **)(sVar2 * 4 + param_1 + 0x1b4);
    do {
      *puVar4 = *puVar3;
      sVar1 = sVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar1 != -1);
  }
  if (*(short *)(param_1 + 0x1d4) == 0) {
    FUN_000016c6();
  }
  else {
    func_0x00002b00(*(undefined4 *)(param_1 + 0x1b4));
    func_0x000048d0();
  }
  return;
}



// Function: FUN_00000ec8 at 00000ec8
// Size: 22 bytes

void FUN_00000ec8(void)

{
  func_0x000048d0();
  return;
}



// Function: FUN_00000ee4 at 00000ee4
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ee4(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  *(undefined2 *)(param_1 + 0x1d4) = 0;
  if (_DAT_000288ac != 0) {
    sVar3 = 8;
    while (sVar2 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar2;
      if (*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) {
        *(undefined4 *)(*(short *)(param_1 + 0x1d4) * 4 + param_1 + 0x1b4) =
             *(undefined4 *)(&DAT_000288b4 + sVar2 * 4);
        sVar1 = 10;
        puVar4 = *(undefined2 **)(&DAT_000288b4 + sVar2 * 4);
        puVar5 = (undefined2 *)(*(short *)(param_1 + 0x1d4) * 0x16 + param_1 + 0x104);
        do {
          *puVar5 = *puVar4;
          sVar1 = sVar1 + -1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (sVar1 != -1);
        *(short *)(param_1 + 0x1d4) = *(short *)(param_1 + 0x1d4) + 1;
      }
    }
  }
  for (sVar3 = 0; sVar3 < *(short *)(param_1 + 0x102); sVar3 = sVar3 + 1) {
    sVar2 = 10;
    puVar4 = (undefined2 *)(sVar3 * 0x16 + param_1 + 0x32);
    puVar5 = *(undefined2 **)(sVar3 * 4 + param_1 + 0xe2);
    do {
      *puVar5 = *puVar4;
      sVar2 = sVar2 + -1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (sVar2 != -1);
  }
  if (*(short *)(param_1 + 0x102) == 0) {
    FUN_000016c6();
  }
  else {
    func_0x00002b00(*(undefined4 *)(param_1 + 0xe2));
    func_0x000048d0();
  }
  return;
}



// Function: FUN_00000f20 at 00000f20
// Size: 122 bytes

void FUN_00000f20(void)

{
  short sVar1;
  short sVar2;
  short unaff_D3w;
  undefined2 *in_A0;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int unaff_A2;
  
  do {
    sVar1 = 10;
    puVar3 = (undefined2 *)(*(short *)(unaff_A2 + 0x1d4) * 0x16 + unaff_A2 + 0x104);
    do {
      *puVar3 = *in_A0;
      sVar1 = sVar1 + -1;
      in_A0 = in_A0 + 1;
      puVar3 = puVar3 + 1;
    } while (sVar1 != -1);
    *(short *)(unaff_A2 + 0x1d4) = *(short *)(unaff_A2 + 0x1d4) + 1;
    sVar1 = unaff_D3w;
    do {
      unaff_D3w = sVar1 + -1;
      if (sVar1 == 0) {
        for (sVar1 = 0; sVar1 < *(short *)(unaff_A2 + 0x102); sVar1 = sVar1 + 1) {
          sVar2 = 10;
          puVar3 = (undefined2 *)(sVar1 * 0x16 + unaff_A2 + 0x32);
          puVar4 = *(undefined2 **)(sVar1 * 4 + unaff_A2 + 0xe2);
          do {
            *puVar4 = *puVar3;
            sVar2 = sVar2 + -1;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (sVar2 != -1);
        }
        if (*(short *)(unaff_A2 + 0x102) == 0) {
          FUN_000016c6();
        }
        else {
          func_0x00002b00(*(undefined4 *)(unaff_A2 + 0xe2));
          func_0x000048d0();
        }
        return;
      }
      sVar1 = unaff_D3w;
    } while (*(int *)(&DAT_000288b4 + unaff_D3w * 4) == 0);
    *(undefined4 *)(*(short *)(unaff_A2 + 0x1d4) * 4 + unaff_A2 + 0x1b4) =
         *(undefined4 *)(&DAT_000288b4 + unaff_D3w * 4);
    in_A0 = *(undefined2 **)(&DAT_000288b4 + unaff_D3w * 4);
  } while( true );
}



// Function: FUN_00000f9a at 00000f9a
// Size: 134 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f9a(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  *(undefined2 *)(param_1 + 0x102) = 0;
  if (_DAT_000288ac != 0) {
    sVar3 = 8;
    while (sVar1 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar1;
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        *(undefined4 *)(*(short *)(param_1 + 0x102) * 4 + param_1 + 0xe2) =
             *(undefined4 *)(&DAT_000288b4 + sVar1 * 4);
        sVar2 = 10;
        puVar4 = *(undefined2 **)(&DAT_000288b4 + sVar1 * 4);
        puVar5 = (undefined2 *)(*(short *)(param_1 + 0x102) * 0x16 + param_1 + 0x32);
        do {
          *puVar5 = *puVar4;
          sVar2 = sVar2 + -1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (sVar2 != -1);
        *(short *)(param_1 + 0x102) = *(short *)(param_1 + 0x102) + 1;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(_DAT_000288ac + 0x12);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(_DAT_000288ac + 0x14);
  FUN_000016da();
  return;
}



// Function: FUN_00001020 at 00001020
// Size: 14 bytes

void FUN_00001020(void)

{
  FUN_000016da();
  return;
}



// Function: FUN_0000102e at 0000102e
// Size: 30 bytes

void FUN_0000102e(int param_1)

{
  func_0x00002bd0(*(undefined2 *)(param_1 + 0x30),1);
  return;
}



// Function: FUN_0000104c at 0000104c
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000104c(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  *(undefined2 *)(param_1 + 0x106) = 0;
  if (_DAT_000288ac != 0) {
    sVar3 = 8;
    while (sVar1 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar1;
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        *(undefined4 *)(*(short *)(param_1 + 0x106) * 4 + param_1 + 0xe6) =
             *(undefined4 *)(&DAT_000288b4 + sVar1 * 4);
        sVar2 = 10;
        puVar4 = *(undefined2 **)(&DAT_000288b4 + sVar1 * 4);
        puVar5 = (undefined2 *)(*(short *)(param_1 + 0x106) * 0x16 + param_1 + 0x36);
        do {
          *puVar5 = *puVar4;
          sVar2 = sVar2 + -1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (sVar2 != -1);
        *(short *)(param_1 + 0x106) = *(short *)(param_1 + 0x106) + 1;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(_DAT_000288ac + 0x12);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(_DAT_000288ac + 0x14);
  func_0x00002bd0(*(undefined2 *)(param_1 + 0x30),1);
  return;
}



// Function: FUN_000010e0 at 000010e0
// Size: 30 bytes

void FUN_000010e0(int param_1)

{
  func_0x00002bd0(*(undefined2 *)(param_1 + 0x30),1);
  return;
}



// Function: FUN_000010fe at 000010fe
// Size: 60 bytes

void FUN_000010fe(int param_1)

{
  if ((*(short *)(param_1 + 0x32) == -1) || (*(short *)(param_1 + 0x34) == -1)) {
    FUN_000016da();
  }
  else {
    func_0x00002bd0(*(undefined2 *)(param_1 + 0x34),1);
  }
  return;
}



// Function: FUN_0000113a at 0000113a
// Size: 122 bytes

int FUN_0000113a(int param_1)

{
  int iVar1;
  short sVar2;
  
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    *(undefined2 *)(param_1 + 0x2e + sVar2 * 2) = *(undefined2 *)(&DAT_00027c90 + sVar2 * 2);
    *(undefined2 *)(param_1 + 0x3e + sVar2 * 2) = *(undefined2 *)(&DAT_00027ca0 + sVar2 * 2);
    *(undefined4 *)(param_1 + 0x4e + sVar2 * 4) = *(undefined4 *)(&DAT_00027c70 + sVar2 * 4);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x578) {
    iVar1 = FUN_00001d14();
  }
  else if (iVar1 == 0x579) {
    iVar1 = FUN_00001d6c();
  }
  else {
    iVar1 = iVar1 + -0x836;
    if (iVar1 == 0) {
      iVar1 = func_0x00002f78();
    }
  }
  return iVar1;
}



// Function: FUN_000011b4 at 000011b4
// Size: 110 bytes

void FUN_000011b4(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    *(undefined2 *)(&DAT_00027c90 + sVar1 * 2) = *(undefined2 *)(param_1 + 0x6e + sVar1 * 2);
    *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = *(undefined2 *)(param_1 + 0x7e + sVar1 * 2);
    *(undefined4 *)(&DAT_00027c70 + sVar1 * 4) = *(undefined4 *)(sVar1 * 4 + param_1 + 0x8e);
  }
  uVar2 = 1;
  func_0x00002b18();
  FUN_00001994(uVar2);
  func_0x000048d0();
  func_0x00004970();
  return;
}



// Function: FUN_00001222 at 00001222
// Size: 146 bytes

void FUN_00001222(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    *(undefined2 *)(param_1 + 0x6e + sVar1 * 2) = *(undefined2 *)(&DAT_00027c90 + sVar1 * 2);
    *(undefined2 *)(param_1 + 0x7e + sVar1 * 2) = *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2);
    *(undefined4 *)(sVar1 * 4 + param_1 + 0x8e) = *(undefined4 *)(&DAT_00027c70 + sVar1 * 4);
    *(undefined2 *)(&DAT_00027c90 + sVar1 * 2) = *(undefined2 *)(param_1 + 0x2e + sVar1 * 2);
    *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = *(undefined2 *)(param_1 + 0x3e + sVar1 * 2);
    *(undefined4 *)(&DAT_00027c70 + sVar1 * 4) = *(undefined4 *)(param_1 + 0x4e + sVar1 * 4);
  }
  uVar2 = 1;
  func_0x00002b18();
  FUN_00001994(uVar2);
  func_0x000048d0();
  func_0x00004970();
  return;
}



// Function: FUN_000012b4 at 000012b4
// Size: 408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012b4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar5;
  short sVar4;
  undefined4 *extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 in_stack_ffffffc4;
  undefined4 uVar6;
  
  if (*(char *)(_DAT_000297f4 + 0x91) == '\0') {
    cVar5 = (**(code **)(*param_3 + 0x88))();
    if (cVar5 == '\0') {
      if (*(int *)((int)param_1 + 0x36) < 0x71) {
        sVar4 = 1;
      }
      else {
        sVar4 = 2;
      }
      iVar2 = param_2[1];
      iVar1 = *param_2;
      if (param_1[0x29] == 0) {
        cVar5 = FUN_00001d78();
        if (cVar5 == '\0') {
          func_0x000073b0(0x7e);
          uVar6 = 0;
          if (extraout_A0_00 != 0) {
            func_0x000024a0(extraout_A0_00);
            uVar6 = extraout_A0_01;
          }
          func_0x000024a8(uVar6,400,param_1,
                          CONCAT22((short)((uint)in_stack_ffffffc4 >> 0x10),
                                   (ushort)(byte)in_stack_ffffffc4) & 0xffffff,0,param_1,0,param_2);
          (**(code **)(*param_1 + 0x108))(param_1,uVar6);
        }
        else {
          piVar3 = *(int **)(_DAT_000297f4 + 0x80);
          uVar6 = 0x134c;
          func_0x000073b0(0x108);
          if (extraout_A0 != (undefined4 *)0x0) {
            uVar6 = 0x1362;
            func_0x00002428(extraout_A0);
            *extraout_A0 = 0x1b722;
            *(undefined2 *)((int)extraout_A0 + 0x2e) = 0xffff;
            *(undefined2 *)(extraout_A0 + 0xc) = 0xffff;
            *(undefined2 *)((int)extraout_A0 + 0x32) = 0xffff;
            *(undefined2 *)(extraout_A0 + 0xd) = 0xffff;
            *(undefined2 *)((int)extraout_A0 + 0x106) = 0;
          }
          func_0x00002430(extraout_A0,0x835,piVar3,
                          CONCAT13(1,(int3)CONCAT22((short)((uint)uVar6 >> 0x10),
                                                    CONCAT11(1,(char)uVar6))),piVar3);
          *(ushort *)((int)extraout_A0 + 0x2e) = (ushort)(iVar2 / (int)sVar4) & 0xff;
          *(ushort *)(extraout_A0 + 0xc) = (ushort)(iVar1 / (int)sVar4) & 0xff;
          (**(code **)(*piVar3 + 0x104))(piVar3,extraout_A0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x6c))
                  (param_1,(iVar2 / (int)sVar4 & 0xffU) * 0x100 + 0x8000 +
                           (iVar1 / (int)sVar4 & 0xffU),param_1,param_3);
      }
    }
    else {
      func_0x00005318(param_1,param_2,param_3);
    }
  }
  return;
}



// Function: FUN_0000144c at 0000144c
// Size: 88 bytes

void FUN_0000144c(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  
  if (param_4._6_1_ != '\0') {
    if (*(int *)(param_1 + 0x36) < 0x71) {
      sVar1 = 1;
    }
    else {
      sVar1 = 2;
    }
    func_0x00003af8((ushort)(*param_4._2_4_ / (int)sVar1) & 0xff);
  }
  return;
}



// Function: FUN_000014a4 at 000014a4
// Size: 466 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000014a4(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  int unaff_A5;
  undefined1 local_6 [2];
  
  if (*(char *)(unaff_A5 + -0x711) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x711) = 1;
    _DAT_000288fe = 0;
  }
  if (*(char *)(unaff_A5 + -0x712) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x712) = 1;
    _DAT_00028902 = 1000;
  }
  func_0x00002b28(param_1,local_6);
  func_0x00002b38(2,0);
  _DAT_000288ac = _DAT_000288d4;
  func_0x00007400(_DAT_000288d4);
  func_0x000048d0();
  func_0x00004970();
  if (*(short *)(_DAT_0002884c + 0x12e) != 0) {
    if ((*(byte *)(_DAT_0002884c + 0x134) & 8) == 0) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 8;
      func_0x00002ae0(0x190003);
      func_0x00003c60(extraout_A0);
    }
    if ((*(byte *)(_DAT_0002884c + 0x134) & 0x10) == 0) {
      for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
        sVar1 = func_0x00004938(CONCAT22(*(short *)(&DAT_00015c1a + sVar2 * 2) + *_DAT_000288ac,
                                         *(short *)(&DAT_00015c0a + sVar2 * 2) + _DAT_000288ac[1]));
        if ((-1 < sVar1) &&
           ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) !=
            (int)*(short *)(_DAT_0002884c + 0x110))) {
          *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x10;
          func_0x00002ae0(0x190004);
          func_0x00003c60(extraout_A0_00);
          break;
        }
      }
    }
    if ((((*(byte *)(_DAT_0002884c + 0x134) & 0x80) == 0) &&
        (*(char *)((*(uint *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + *_DAT_000288ac * 2) >> 0x18)
                   + _DAT_0002884c + 0x711) == '\v')) && (*(char *)(_DAT_000288ac + 2) == '\x1c')) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x80;
      func_0x00002ae0(0x190005);
      func_0x00003c60(extraout_A0_01);
    }
  }
  return;
}



// Function: FUN_00001676 at 00001676
// Size: 20 bytes

void FUN_00001676(void)

{
  func_0x00002af8();
  func_0x00004970();
  return;
}



// Function: FUN_0000168a at 0000168a
// Size: 20 bytes

void FUN_0000168a(void)

{
  FUN_000018d0();
  func_0x00004970();
  return;
}



// Function: FUN_0000169e at 0000169e
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000169e(void)

{
  if (_DAT_000288ac != 0) {
    func_0x00003af8(*(undefined2 *)(_DAT_000288ac + 2));
    func_0x00004970();
  }
  return;
}



// Function: FUN_000016c6 at 000016c6
// Size: 20 bytes

void FUN_000016c6(void)

{
  func_0x00002ae8();
  func_0x00004970();
  return;
}



// Function: FUN_000016da at 000016da
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016da(void)

{
  short sVar1;
  
  if (((_DAT_000288ac != 0) && (-1 < *(short *)(_DAT_000288ac + 0x12))) &&
     (-1 < *(short *)(_DAT_000288ac + 0x14))) {
    for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x12) = 0xffff;
        *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x14) = 0xffff;
      }
    }
    _DAT_000276d2 = 0;
    func_0x00003ae0();
  }
  if ((_DAT_0002883e == 0) || (_DAT_00028840 != 0)) {
    func_0x00004970();
  }
  return;
}



// Function: FUN_00001754 at 00001754
// Size: 250 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001754(void)

{
  short sVar1;
  short sVar2;
  
  if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
    func_0x00007570();
    func_0x00003fc8();
    if (_DAT_00028840 != 0) {
      func_0x00002b60();
    }
    func_0x00003b30();
    _DAT_000288b0 = 0;
    _DAT_000288ac = 0;
    for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
      *(undefined4 *)(&DAT_000288b4 + sVar1 * 4) = 0;
    }
    if (_DAT_00028840 != 0) {
      func_0x00003a78();
      func_0x00003ae0();
    }
    func_0x00003a98();
    _DAT_00028842 = _DAT_00028840;
    if (_DAT_0002883e == 0) {
      sVar1 = 0;
      for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
        if ((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
           (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 0)) {
          sVar1 = sVar1 + 1;
        }
      }
      if ((1 < sVar1) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
        func_0x00003a90();
      }
    }
    sVar1 = func_0x00002f00();
    if (sVar1 == 0) {
      *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00001856 at 00001856
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001856(undefined4 param_1)

{
  if (_DAT_000288ac != 0) {
    if (param_1._0_1_ == '5') {
      FUN_0000169e();
    }
    else {
      switch(param_1._0_1_) {
      case '1':
        break;
      case '2':
        break;
      case '3':
        break;
      case '4':
        break;
      case '6':
        break;
      case '7':
        break;
      case '8':
        break;
      case '9':
      }
      func_0x00002be0();
    }
  }
  return;
}



// Function: FUN_000018d0 at 000018d0
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000018d0(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = _DAT_00027fb8;
  if (_DAT_000288ac != 0) {
    if ((*(short *)(_DAT_0002884c + 0x124) == 0) ||
       (sVar3 = func_0x00003b38(), (*(char *)(sVar3 + 0x150fc) == '\0') == true)) {
      func_0x00003ae8(CONCAT22(*(undefined2 *)(iVar2 + 0x86),*(undefined2 *)(iVar2 + 0x84)));
    }
    if (_DAT_000288f4 == 0) {
      *(ushort *)(_DAT_000288ac + 0xc) = *(ushort *)(_DAT_000288ac + 0xc) & 0xfffe;
      *(undefined1 *)(_DAT_000288ac + 0x11) = 1;
    }
    else {
      sVar3 = 8;
      while (sVar1 = sVar3 + -1, sVar3 != 0) {
        sVar3 = sVar1;
        if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
          *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) =
               *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) & 0xfffe;
          *(undefined1 *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x11) = 1;
        }
      }
    }
    func_0x00002af8();
    return 1;
  }
  return 0;
}



// Function: FUN_00001994 at 00001994
// Size: 604 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001994(undefined4 param_1)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort auStackY_1004e [12];
  ushort auStackY_10036 [8];
  short asStackY_10026 [9];
  ushort auStackY_10014 [32724];
  ushort local_4e [8];
  short sStack_3e;
  short local_3c;
  short local_3a;
  short local_38;
  ushort local_36 [8];
  short local_26 [8];
  undefined2 uStack_16;
  ushort local_14 [8];
  
  local_38 = *(short *)((int)_DAT_000288ac + 0x12);
  local_3a = *(short *)((int)_DAT_000288ac + 0x14);
  local_3c = _DAT_000276d6;
  _DAT_000288ac = (undefined4 *)0x0;
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    *(undefined4 *)(&DAT_000288b4 + sVar4 * 4) = 0;
  }
  _DAT_000288f8 = 0;
  for (sVar4 = 0; sVar4 < _DAT_00027cc2; sVar4 = sVar4 + 1) {
    if (*(short *)(&DAT_00027ca0 + sVar4 * 2) != 0) {
      if (_DAT_000288ac == (undefined4 *)0x0) {
        _DAT_000288ac = *(undefined4 **)(&DAT_00027c70 + sVar4 * 4);
      }
      *(undefined4 *)(&DAT_000288b4 + _DAT_000288f8 * 4) =
           *(undefined4 *)(&DAT_00027c70 + sVar4 * 4);
      *(ushort *)(*(int *)(&DAT_00027c70 + sVar4 * 4) + 0xc) =
           *(ushort *)(*(int *)(&DAT_00027c70 + sVar4 * 4) + 0xc) | 1;
      _DAT_000288f8 = _DAT_000288f8 + 1;
    }
  }
  _DAT_000288f4 = (short)(1 < _DAT_000288f8);
  for (sVar4 = 1; sVar4 < _DAT_000288f8; sVar4 = sVar4 + 1) {
    *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar4 * 4) + 0x12) =
         *(undefined2 *)((int)_DAT_000288ac + 0x12);
    *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar4 * 4) + 0x14) = *(undefined2 *)(_DAT_000288ac + 5)
    ;
  }
  func_0x00007418();
  sVar7 = 0;
  sVar4 = 0;
  do {
    if (_DAT_00027cc2 <= sVar4) {
      sVar4 = -1;
      for (sVar6 = 0; sVar6 < _DAT_00027cc2; sVar6 = sVar6 + 1) {
        if ((sVar6 == 0) ||
           (*(short *)(&DAT_00027c90 + sVar6 * 2) != *(short *)(&DAT_00027c90 + (sVar6 + -1) * 2)))
        {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          sVar4 = sVar4 + 1;
          local_4e[sVar4] = (ushort)*(byte *)(*(int *)(&DAT_00027c70 + sVar6 * 4) + 0x11);
          local_26[sVar4] = 0;
          local_14[sVar4] = *(ushort *)(*(int *)(&DAT_00027c70 + sVar6 * 4) + 0xc) & 1;
        }
        local_26[sVar4] = local_26[sVar4] + 1;
      }
      for (sVar6 = 0; sVar6 < (short)(sVar4 + 1); sVar6 = sVar6 + 1) {
        if (local_26[sVar6] == 1) {
          if (local_14[sVar6] == 0) {
            uVar3 = 2;
          }
          else {
            uVar3 = 0;
          }
          local_14[sVar6] = uVar3;
        }
        else {
          if (local_14[sVar6] == 0) {
            uVar3 = 3;
          }
          else {
            uVar3 = 1;
          }
          local_14[sVar6] = uVar3;
        }
      }
      sVar5 = 0;
      for (sVar6 = 0; sVar6 < (short)(sVar4 + 1); sVar6 = sVar6 + 1) {
        if ((local_14[sVar6] == 2) || (local_14[sVar6] == 0)) {
          uStack_16 = 0;
        }
        else if (local_14[sVar6] == 3) {
          uStack_16 = 1;
        }
        else {
          sVar7 = sVar7 + -1;
          if (sVar7 < 1) {
            uStack_16 = func_0x00002b40();
          }
          else {
            uStack_16 = local_36[sVar7];
          }
        }
        sStack_3e = local_26[sVar6] + sVar5;
        for (sVar1 = sVar5; sVar1 < sStack_3e; sVar1 = sVar1 + 1) {
          *(undefined1 *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 0x11) = (undefined1)uStack_16;
          func_0x00007448(*(undefined4 *)(&DAT_00027c70 + sVar5 * 4));
          sVar5 = sVar5 + 1;
        }
      }
      func_0x00007410(*(undefined4 *)((int)_DAT_000288ac + 0x12));
      if ((((param_1._0_2_ == 0) && (*(short *)((int)_DAT_000288ac + 0x12) == local_38)) &&
          (*(short *)(_DAT_000288ac + 5) == local_3a)) && (_DAT_000276d6 == local_3c)) {
        func_0x00003ae8(*_DAT_000288ac);
        if (_DAT_000288f8 < 2) {
          func_0x00003a80(*_DAT_000288ac);
        }
        else {
          func_0x00003a88(*_DAT_000288ac);
        }
      }
      else {
        func_0x00003ae0();
      }
      (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))
                ((short)*(int **)(_DAT_000297f4 + 0x80),0,0);
      return;
    }
    if ((*(char *)(*(int *)(&DAT_00027c70 + sVar4 * 4) + 0x11) != '\0') &&
       (*(char *)(*(int *)(&DAT_00027c70 + sVar4 * 4) + 0x11) != '\x01')) {
      bVar2 = false;
      for (sVar6 = 0; sVar6 < sVar7; sVar6 = sVar6 + 1) {
        if (local_36[sVar6] == (ushort)*(byte *)(*(int *)(&DAT_00027c70 + sVar4 * 4) + 0x11)) {
          bVar2 = true;
          break;
        }
      }
      if (!bVar2) {
        local_36[sVar7] = (ushort)*(byte *)(*(int *)(&DAT_00027c70 + sVar4 * 4) + 0x11);
        sVar7 = sVar7 + 1;
      }
    }
    sVar4 = sVar4 + 1;
  } while( true );
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D7w;
  int unaff_A6;
  undefined1 in_ZF;
  
  do {
    if ((bool)in_ZF) {
      *(undefined2 *)(unaff_A6 + -0x12) = 1;
    }
    else {
      unaff_D7w = unaff_D7w + -1;
      if (unaff_D7w < 1) {
        uVar3 = func_0x00002b40();
        *(undefined2 *)(unaff_A6 + -0x12) = uVar3;
      }
      else {
        *(undefined2 *)(unaff_A6 + -0x12) = *(undefined2 *)(unaff_A6 + -0x32 + unaff_D7w * 2);
      }
    }
    while( true ) {
      *(short *)(unaff_A6 + -0x3a) = *(short *)(unaff_A6 + -0x22 + unaff_D3w * 2) + unaff_D4w;
      for (sVar2 = unaff_D4w; sVar2 < *(short *)(unaff_A6 + -0x3a); sVar2 = sVar2 + 1) {
        *(undefined1 *)(*(int *)(&DAT_00027c70 + unaff_D4w * 4) + 0x11) =
             *(undefined1 *)(unaff_A6 + -0x11);
        func_0x00007448(*(undefined4 *)(&DAT_00027c70 + unaff_D4w * 4));
        unaff_D4w = unaff_D4w + 1;
      }
      unaff_D3w = unaff_D3w + 1;
      if (unaff_D5w <= unaff_D3w) {
        func_0x00007410(*(undefined4 *)((int)_DAT_000288ac + 0x12));
        if ((((*(short *)(unaff_A6 + 8) == 0) &&
             (*(short *)((int)_DAT_000288ac + 0x12) == *(short *)(unaff_A6 + -0x34))) &&
            (*(short *)(_DAT_000288ac + 5) == *(short *)(unaff_A6 + -0x36))) &&
           (_DAT_000276d6 == *(short *)(unaff_A6 + -0x38))) {
          func_0x00003ae8(*_DAT_000288ac);
          if (_DAT_000288f8 < 2) {
            func_0x00003a80(*_DAT_000288ac);
          }
          else {
            func_0x00003a88(*_DAT_000288ac);
          }
        }
        else {
          func_0x00003ae0();
        }
        (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))(*(int **)(_DAT_000297f4 + 0x80),0,0);
        return;
      }
      iVar1 = unaff_A6 + -0x10;
      if ((*(short *)(iVar1 + unaff_D3w * 2) != 2) && (*(short *)(iVar1 + unaff_D3w * 2) != 0))
      break;
      *(undefined2 *)(unaff_A6 + -0x12) = 0;
    }
    in_ZF = *(short *)(iVar1 + unaff_D3w * 2) == 3;
  } while( true );
}



// Function: FUN_00001d14 at 00001d14
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d14(void)

{
  short sVar1;
  undefined2 uVar2;
  
  if (_DAT_000288ac != 0) {
    for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
      *(undefined2 *)(&DAT_00027c90 + sVar1 * 2) = 0;
      *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = 1;
    }
    uVar2 = 1;
    func_0x00002b18();
    FUN_00001994(uVar2);
    func_0x000048d0();
    func_0x00004970();
  }
  return;
}



// Function: FUN_00001d6c at 00001d6c
// Size: 10 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d6c(void)

{
  short sVar1;
  undefined2 uVar2;
  
  for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
    *(short *)(&DAT_00027c90 + sVar1 * 2) = sVar1;
    *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = 0;
  }
  _DAT_00027ca0 = 1;
  uVar2 = 1;
  func_0x00002b18();
  FUN_00001994(uVar2);
  func_0x000048d0();
  func_0x00004970();
  return;
}



// Function: FUN_00001d78 at 00001d78
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d78(void)

{
  short unaff_D3w;
  undefined1 *in_A0;
  undefined2 uVar1;
  
  while( true ) {
    *(short *)(in_A0 + unaff_D3w * 2) = unaff_D3w;
    *(undefined2 *)(&DAT_00027ca0 + unaff_D3w * 2) = 0;
    unaff_D3w = unaff_D3w + 1;
    if (_DAT_00027cc2 <= unaff_D3w) break;
    in_A0 = &DAT_00027c90;
  }
  _DAT_00027ca0 = 1;
  uVar1 = 1;
  func_0x00002b18();
  FUN_00001994(uVar1);
  func_0x000048d0();
  func_0x00004970();
  return;
}



// Function: FUN_00001ea0 at 00001ea0
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



