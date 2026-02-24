// Warlords II - Decompiled 68k Code
// Segment: CODE_058
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000007e at 0000007e
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000007e(undefined4 param_1)

{
  undefined4 extraout_A0;
  
  if (_DAT_0002894e == 0) {
    func_0x00002e18();
  }
  if ((_DAT_00028952 == 0) || (param_1._0_2_ != *(short *)(_DAT_0002884c + 0x110))) {
    func_0x00002d52((short)*(undefined4 *)(param_1._0_2_ * 4 + 0x28954));
    _DAT_00028980 = extraout_A0;
  }
  return;
}



// Function: FUN_000000da at 000000da
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000000da(undefined4 param_1)

{
  int iVar1;
  
  if (((_DAT_00028952 == 0) || (param_1._0_2_ != *(short *)(_DAT_0002884c + 0x110))) &&
     (iVar1 = (int)param_1._0_2_, param_1._0_2_ = 0, *(int *)(iVar1 * 4 + 0x28954) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1._0_2_;
}



// Function: FUN_00000114 at 00000114
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000114(int param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  char cVar11;
  int iVar12;
  
  uVar7 = 0;
  cVar11 = -1;
  if (*(short *)(_DAT_0002884c + 0x110) == 0xf) {
    iVar5 = 8;
  }
  else {
    iVar5 = (int)*(short *)(_DAT_0002884c + 0x110);
  }
  iVar5 = iVar5 * 0x1d + _DAT_0002884c;
  sVar10 = 0;
  sVar9 = 0;
  for (sVar8 = 0; sVar8 < 8; sVar8 = sVar8 + 1) {
    if (*(short *)(param_1 + sVar8 * 2) != -1) {
      sVar9 = sVar9 + 1;
    }
  }
  if (sVar9 == 0) {
    uVar6 = 0;
  }
  else {
    if (1 < sVar9) {
      uVar7 = func_0x00002b40();
    }
    for (sVar9 = 0; sVar9 < 8; sVar9 = sVar9 + 1) {
      *(undefined4 *)(&DAT_000288b4 + sVar9 * 4) = 0;
    }
    _DAT_000288ac = 0;
    for (sVar9 = 0; sVar9 < 8; sVar9 = sVar9 + 1) {
      sVar8 = *(short *)(param_1 + sVar9 * 2);
      if (sVar8 != -1) {
        iVar12 = sVar8 * 0x16 + _DAT_00028854;
        *(int *)(&DAT_000288b4 + sVar10 * 4) = iVar12;
        iVar4 = _DAT_00028854;
        cVar3 = *(char *)(iVar5 + 0x60c +
                         (int)(short)*(char *)(*(int *)(&DAT_000288b4 + sVar10 * 4) + 4));
        if (cVar11 < cVar3) {
          cVar11 = cVar3;
          _DAT_000288ac = iVar12;
        }
        if (param_2._0_2_ != -1) {
          puVar1 = (uint *)(_DAT_00028854 + 0xe + sVar8 * 0x16);
          *puVar1 = *puVar1 & 0xfffffff | (param_2 >> 0x10) << 0x1c;
          puVar1 = (uint *)(iVar4 + 0xf + sVar8 * 0x16);
          *puVar1 = *puVar1 & 0x80ffffff | (param_2 & 0x7f) << 0x18;
          *(undefined1 *)(iVar4 + 0x11 + sVar8 * 0x16) = uVar7;
          func_0x00002dd0(sVar8 * 0x16 + _DAT_00028854,param_2);
        }
        puVar2 = (ushort *)(_DAT_00028854 + 0xc + sVar8 * 0x16);
        *puVar2 = *puVar2 & 0xff5f;
        if (param_3._0_2_ != 0) {
          puVar2 = (ushort *)(_DAT_00028854 + 0xc + sVar8 * 0x16);
          *puVar2 = param_3._0_2_ | *puVar2;
        }
        func_0x00007448(sVar8 * 0x16 + _DAT_00028854);
        sVar10 = sVar10 + 1;
      }
    }
    _DAT_000288f8 = sVar10;
    func_0x00007418();
    func_0x00007410(*(undefined2 *)(_DAT_000288ac + 0x14));
    uVar6 = 1;
  }
  return uVar6;
}



// Function: FUN_000002c8 at 000002c8
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000002c8(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  short asStackY_10014 [32756];
  short local_14 [8];
  
  sVar2 = 8;
  while (sVar2 != 0) {
    local_14[(short)(sVar2 + -1)] = -1;
    sVar2 = sVar2 + -1;
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  sVar3 = 0;
  do {
    do {
      sVar1 = sVar2 + -1;
      sVar4 = sVar3;
      if (sVar2 == 0) goto LAB_00000356;
      psVar5 = (short *)(sVar1 * 0x16 + _DAT_00028854);
      sVar2 = sVar1;
    } while ((((*(char *)(_DAT_0002884c + 0x111) != *(char *)((int)psVar5 + 5)) ||
              (param_1._0_2_ != *psVar5)) || (param_1._2_2_ != psVar5[1])) ||
            ((param_3._0_2_ != 0 && ((int)*(char *)((int)psVar5 + 7) < (int)param_3._0_2_))));
    sVar4 = sVar3 + 1;
    local_14[sVar3] = sVar1;
    sVar3 = sVar4;
  } while (sVar4 < 8);
LAB_00000356:
  if (sVar4 != 0) {
    func_0x00002de8(local_14);
  }
  if (param_2 != 0) {
    sVar2 = 8;
    while( true ) {
      sVar3 = sVar2 + -1;
      if (sVar2 == 0) break;
      *(short *)(param_2 + sVar3 * 2) = local_14[sVar3];
      sVar2 = sVar3;
    }
  }
  return sVar4;
}



// Function: FUN_0000038c at 0000038c
// Size: 594 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000038c(undefined4 param_1)

{
  byte *pbVar1;
  short sVar2;
  undefined1 uVar3;
  short sVar4;
  
  _DAT_00028978[0x25] = 0;
  *_DAT_00028978 = 0;
  _DAT_00028978[0x10] = 10;
  _DAT_00028978[0x11] = 0;
  _DAT_00028978[0x12] = 0;
  _DAT_00028978[6] = 0;
  _DAT_00028978[0xb] = 0;
  _DAT_00028978[0xc] = 0;
  _DAT_00028978[0xd] = 0;
  _DAT_00028978[0xe] = 0;
  _DAT_00028978[0xf] = 0;
  _DAT_00028978[0x26] = 0;
  _DAT_00028978[0x13] = 0;
  _DAT_00028978[0x14] = 0;
  _DAT_00028978[0x15] = 0;
  _DAT_00028978[0x16] = 0;
  _DAT_00028978[0x17] = 0;
  _DAT_00028978[0x18] = 0;
  _DAT_00028978[0x19] = 0;
  _DAT_00028978[0x1a] = 0;
  _DAT_00028978[0x1b] = 0;
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar2 = sVar4 + -1, sVar4 != 0) {
    if (*(short *)(_DAT_0002884c + 0x128) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
    *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0x56) = uVar3;
    *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0xba) = 0;
    *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0x11e) = 0;
    sVar4 = sVar2;
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      pbVar1 = (byte *)((int)_DAT_00028978 + sVar2 + 0x11e);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  if (*(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0xd0) == 0) {
    func_0x00002e28();
  }
  else {
    sVar4 = *(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0xc0);
    if (sVar4 == 0) {
      func_0x00002e28();
    }
    else if (sVar4 == 1) {
      func_0x00002e28();
    }
    else {
      func_0x00002e28();
    }
  }
  sVar4 = 4;
  while (sVar4 != 0) {
    _DAT_00028978[(short)(sVar4 + -1) * 0x2e + 0x126] = 0;
    sVar4 = sVar4 + -1;
  }
  sVar4 = 8;
  while (sVar2 = sVar4 + -1, sVar4 != 0) {
    _DAT_00028978[sVar2 + 0x20e] = 0;
    _DAT_00028978[sVar2 + 0x206] = 0;
    _DAT_00028978[sVar2 + 0x1fe] = 0;
    _DAT_00028978[sVar2 + 0x1f6] = 0;
    _DAT_00028978[sVar2 + 0x1ee] = 0;
    _DAT_00028978[sVar2 + 0x1e6] = 0;
    _DAT_00028978[sVar2 + 0x1de] = 0;
    sVar4 = sVar2;
  }
  return;
}



// Function: FUN_000005de at 000005de
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000005de(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_A0;
  int iVar3;
  
  if (_DAT_00027fc4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    (**(code **)(*_DAT_00027fc4 + 0x188))((short)_DAT_00027fc4,0x666f);
    iVar3 = extraout_A0;
  }
  uVar1 = 0;
  if (iVar3 != 0) {
    iVar2 = (short)(ushort)*(byte *)(*(short *)(param_2._2_2_ * 2 + _DAT_0002884c + 0xa0) + 0x1f034)
            * 6;
    *(undefined4 *)(iVar3 + 0x9a) = *(undefined4 *)(iVar2 + 0x29052);
    *(undefined2 *)(iVar3 + 0x9e) = *(undefined2 *)(iVar2 + 0x29056);
    uVar1 = func_0x00004790((short)iVar3,param_1);
    if (0 < param_2._0_2_) {
      uVar1 = func_0x00002ab0();
    }
  }
  return uVar1;
}



