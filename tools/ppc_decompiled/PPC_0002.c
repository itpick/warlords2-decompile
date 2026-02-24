// Warlords II - Decompiled PPC Code
// Chunk 2 (functions 1000-1499)
// Decompiled by Ghidra 12.0.3

// Function: FUN_100376d8 at 100376d8
// Size: 1540 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100376d8(ushort param_1,short param_2)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int local_3ac;
  undefined1 auStack_388 [256];
  undefined1 auStack_288 [256];
  undefined1 auStack_188 [256];
  undefined1 auStack_88 [84];
  
  psVar1 = _FUN_10115e4c;
  if (param_1 != 0) {
    if (_DAT_61230000 == (int *)0x0) {
      if (DAT_4bfde391 != '\0') {
        FUN_10080548();
        FUN_10080558(0);
      }
      if (DAT_4bfde391 != '\0') {
        FUN_10080848();
        FUN_10080858(0);
      }
      _DAT_61230000 =
           (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xdac,
                               *(undefined4 *)(_DAT_57c407bd + 0x88));
      FUN_100db26c();
      FUN_10035e9c();
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                                 0x6e616d65);
    if (piVar2 != (int *)0x0) {
      uVar3 = FUN_1005f678(0x5c,(int)*psVar1);
      FUN_100b19f4(auStack_188,uVar3);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_188,param_1 & 0xff);
    }
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x636f6d6d);
  if (piVar2 != (int *)0x0) {
    iVar5 = 1 - *psVar1;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),
                 iVar5 + ((int)*psVar1 - (uint)(iVar5 == 0)) & 0xff,1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x62617267);
  if (piVar2 != (int *)0x0) {
    uVar6 = (uint)*psVar1;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),
                 ('\x01' - ((1 < uVar6) + '\x01')) + (uVar6 != 0 && (uint)(1 < uVar6) <= uVar6 - 1),
                 1);
  }
  if ((param_2 == 0) && (param_1 == 0)) {
LAB_100379bc:
    if (param_2 != 0) goto LAB_100379c4;
LAB_10037a34:
    if ((param_1 == 0) && (param_2 == 0)) goto LAB_10037c58;
  }
  else {
    FUN_10001dd0(auStack_88,*(int *)(local_3ac + -0x1a70) + 0x3c,(int)_DAT_80410014);
    piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                                 0x7475726e);
    if (piVar2 != (int *)0x0) {
      if ((param_2 == 0) && (param_1 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      FUN_100b19f4(auStack_288,auStack_88);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_288,uVar3);
    }
    if (param_1 == 0) goto LAB_100379bc;
    if (*psVar1 == 1) {
      FUN_10036d3c(1);
    }
    else {
      FUN_1003606c();
    }
    if (param_1 == 0) goto LAB_100379bc;
LAB_100379c4:
    if (*psVar1 != 1) goto LAB_10037a34;
    if (_DAT_61230000 != (int *)0x0) {
      piVar2 = (int *)FUN_10117884((int)*(short *)(*_DAT_61230000 + 0x308) + (int)_DAT_61230000,
                                   0x67726170);
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
      }
    }
    FUN_10037444();
    if (param_1 == 0) {
      FUN_10036d3c(0);
      goto LAB_10037a34;
    }
  }
  if (*psVar1 != 1) {
    if (_DAT_61230000 != (int *)0x0) {
      piVar2 = (int *)FUN_10117884((int)*(short *)(*_DAT_61230000 + 0x308) + (int)_DAT_61230000,
                                   0x67726170);
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
      }
    }
    _DAT_80010040 =
         _DAT_30210040 +
         (short)(((int)_DAT_80410014 * (int)_DAT_30210044) / (**(short **)(local_3ac + -0x348) + -1)
                );
    _DAT_80010042 = _DAT_30210042 + -2;
    _DAT_80010046 = _DAT_30210042 + _DAT_30210046 + 6;
    _DAT_80010044 = _DAT_80010040;
    FUN_10000030();
    FUN_100479f4(0xd);
    FUN_1003a9c4((int)_DAT_80010040,(int)_DAT_80010042,(int)_DAT_80010044,(int)_DAT_80010046,
                 **(undefined4 **)(local_3ac + -0x350));
    if (*psVar1 == 3) {
      psVar4 = (short *)FUN_10036024((int)_DAT_80410014);
      iVar5 = 0;
      sVar7 = 0;
      iVar8 = 0;
      do {
        if (sVar7 < *psVar4) {
          iVar5 = iVar8;
          sVar7 = *psVar4;
        }
        psVar4 = psVar4 + 1;
        iVar8 = (int)(short)((short)iVar8 + 1);
      } while (iVar8 < 8);
      uVar3 = FUN_1005f678(0x5d,(int)*psVar1);
      FUN_10001dd0(auStack_88,uVar3,(int)_DAT_80410014,_DAT_4bffe775 + iVar5 * 0x14);
    }
    else {
      iVar5 = FUN_10117884((int)_DAT_80410014);
      sVar7 = *(short *)(_DAT_4bffe775 + 0x110);
      uVar3 = FUN_1005f678(0x5d,(int)*psVar1);
      FUN_10001dd0(auStack_88,uVar3,(int)_DAT_80410014,(int)*(short *)(iVar5 + sVar7 * 2));
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                                 0x636f6d6d);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_388,auStack_88);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_388,1);
    }
  }
LAB_10037c58:
  if (param_1 != 0) {
    FUN_10060608(0,0,0);
  }
  if ((param_2 != 0) || (param_1 != 0)) {
    uVar3 = FUN_10037690((int)_DAT_80410014);
    FUN_10062228(0,uVar3);
    FUN_10061354(0);
  }
  FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 800));
  return;
}



// Function: FUN_10037cdc at 10037cdc
// Size: 652 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10037cdc(void)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_34;
  
  psVar1 = _FUN_10115e4c;
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x63697479);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x748) + (int)piVar2,*psVar1 == 0,1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x6576656e);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*psVar1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x748) + (int)piVar2,
                 ('\x01' - ((1 < uVar3) + '\x01')) + (uVar3 != 0 && (uint)(1 < uVar3) <= uVar3 - 1),
                 1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x676f6c64);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*psVar1;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x748),
                 ('\x02' - ((2 < uVar3) + '\x02')) + (1 < uVar3 && (uint)(2 < uVar3) <= uVar3 - 2),1
                );
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x77696e6e);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*psVar1;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x748),
                 ('\x03' - ((3 < uVar3) + '\x03')) + (2 < uVar3 && (uint)(3 < uVar3) <= uVar3 - 3),1
                );
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x6c656674);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)_DAT_80410014;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),
                 ('\x01' - ((1 < uVar3) + '\x01')) + (uVar3 != 0 && (uint)(1 < uVar3) <= uVar3 - 1),
                 1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x72696768);
  if (piVar2 != (int *)0x0) {
    uVar3 = (int)**(short **)(local_34 + -0x348) - 1;
    uVar4 = (uint)_DAT_80410014;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),
                 (uVar3 <= uVar4 && (uint)(uVar3 < uVar4) <= uVar4 - uVar3) - (uVar3 < uVar4),1);
  }
  return;
}



// Function: FUN_10037f68 at 10037f68
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10037f68(void)

{
  if (_DAT_80410014 != 0) {
    FUN_10002ad8();
  }
  FUN_100ef510(_DAT_80410014);
  _DAT_4bfffe7d = FUN_100ef580(_DAT_4bfffe7d);
  return;
}



// Function: FUN_10037fc4 at 10037fc4
// Size: 32 bytes

void FUN_10037fc4(void)

{
  FUN_10037f68();
  return;
}



// Function: FUN_10037fe4 at 10037fe4
// Size: 504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10037fe4(short param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  short local_18;
  short local_16;
  
  *_FUN_10115e4c = param_1;
  if (param_1 == 4) {
    FUN_10035d7c();
  }
  else {
    FUN_1007f0a4(*(undefined4 *)(_DAT_57c407bd + 0x88),(int)param_1);
    local_18 = *(short *)(_DAT_4bffe775 + 0x136);
    sVar4 = local_18;
    if (local_18 < 2) {
      sVar4 = 1;
    }
    if (sVar4 < 2) {
      uVar1 = FUN_1005f678(0x5e,1);
      uVar2 = FUN_1005f678(0x5e,0);
      FUN_1003ced4(uVar2,uVar1);
    }
    else {
      local_16 = *(short *)(_DAT_4bffe775 + 0x136);
      _DAT_4bee8b21 = local_16;
      if (local_16 < 2) {
        _DAT_4bee8b21 = 1;
      }
      if (0xc9 < _DAT_4bee8b21) {
        _DAT_4bee8b21 = 0xc9;
      }
      _DAT_80410014 = _DAT_4bee8b21 + -1;
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = _DAT_41820010;
      _DAT_41820010 = auStack_130;
      iVar3 = FUN_10000090(auStack_130);
      if (iVar3 == 0) {
        FUN_100376d8(1,1);
        FUN_10037cdc();
        if (_DAT_61230000 != (int *)0x0) {
          FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x810));
          FUN_10037fc4();
          FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x738));
          _DAT_61230000 = (int *)0x0;
        }
        _DAT_41820010 = local_28;
      }
      else {
        if (_DAT_61230000 != (int *)0x0) {
          FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x738));
        }
        _DAT_61230000 = (int *)0x0;
        FUN_100db158((int)local_30,local_2c);
      }
    }
  }
  return;
}



// Function: FUN_100381dc at 100381dc
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100381dc(short param_1)

{
  int *piVar1;
  undefined4 local_2c;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                               0x67726170);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  **(short **)(local_2c + -0x1a54) = param_1;
  FUN_1007f0a4(*(undefined4 *)(**(int **)(local_2c + -0x554) + 0x88),(int)param_1);
  FUN_100376d8(1,1);
  FUN_10037cdc();
  return;
}



// Function: FUN_10038288 at 10038288
// Size: 924 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038288(short param_1,int param_2)

{
  float fVar1;
  short *psVar2;
  short sVar3;
  undefined **ppuVar4;
  int *piVar5;
  uint uVar6;
  undefined **local_54;
  uint local_2c;
  undefined8 local_20;
  
  psVar2 = _FUN_10115e4c;
  if (param_1 == 0) {
    uVar6 = *(uint *)(param_2 + 4);
    if (*_FUN_10115e4c == 1) {
      local_2c = ((int)*psRam10115e50 + (int)psRam10115e50[2]) - 1;
      if (((int)uVar6 <= (int)local_2c) && (local_2c = uVar6, (int)uVar6 < (int)*psRam10115e50)) {
        local_2c = (int)*psRam10115e50;
      }
      local_20 = (double)(CONCAT44(0x43300000,(int)*psRam10115e50) ^ 0x80000000);
      fVar1 = ((float)((double)CONCAT44(0x43300000,local_2c ^ 0x80000000) - _DAT_90bf0068) -
              (float)(local_20 - _DAT_90bf0068)) /
              (float)((double)CONCAT44(0x43300000,(int)psRam10115e50[2] ^ 0x80000000) -
                     _DAT_90bf0068);
    }
    else {
      local_2c = ((int)_DAT_30210040 + (int)_DAT_30210044) - 1;
      if (((int)uVar6 <= (int)local_2c) && (local_2c = uVar6, (int)uVar6 < (int)_DAT_30210040)) {
        local_2c = (int)_DAT_30210040;
      }
      local_20 = (double)(CONCAT44(0x43300000,(int)_DAT_30210040) ^ 0x80000000);
      fVar1 = ((float)((double)CONCAT44(0x43300000,local_2c ^ 0x80000000) - _DAT_90bf0068) -
              (float)(local_20 - _DAT_90bf0068)) /
              (float)((double)CONCAT44(0x43300000,(int)_DAT_30210044 ^ 0x80000000) - _DAT_90bf0068);
    }
    local_20._6_2_ =
         (short)(int)(fVar1 * (float)((double)CONCAT44(0x43300000,
                                                       (int)_DAT_4bee8b21 - 1U ^ 0x80000000) -
                                     _DAT_90bf0068));
    sVar3 = local_20._6_2_ + 1;
    if ((short)(local_20._6_2_ + 1) == _DAT_80410014) {
      return;
    }
  }
  else {
    sVar3 = _DAT_80410014 + param_1;
  }
  _DAT_80410014 = sVar3;
  if (*_FUN_10115e4c == 1) {
LAB_10038530:
    if (_DAT_61230000 != (int *)0x0) {
      piVar5 = (int *)FUN_10117884((int)*(short *)(*_DAT_61230000 + 0x308) + (int)_DAT_61230000,
                                   0x67726170);
      if (piVar5 != (int *)0x0) {
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x4d0));
      }
      piVar5 = (int *)FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x308),
                                   0x7475726e);
      if (piVar5 != (int *)0x0) {
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x4d0));
      }
      FUN_10036d3c(0);
      FUN_10117884((int)_DAT_61230000 + (int)*(short *)(*_DAT_61230000 + 0x4c8));
      goto LAB_10038608;
    }
  }
  else {
    ppuVar4 = &.TVect::OCECToRString;
    if ((_DAT_61230000 != (int *)0x0) &&
       (piVar5 = (int *)FUN_10117884((int)*(short *)(*_DAT_61230000 + 0x308) + (int)_DAT_61230000,
                                     0x67726170), ppuVar4 = local_54, piVar5 != (int *)0x0)) {
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x3a8));
    }
    FUN_100479f4(0xffffffff);
    FUN_1003a9c4((int)_DAT_80010040,(int)_DAT_80010042,(int)_DAT_80010044,(int)_DAT_80010046,
                 *(undefined4 *)ppuVar4[-0xd4]);
    if (*psVar2 == 1) goto LAB_10038530;
  }
  FUN_100376d8(0,1);
LAB_10038608:
  FUN_10037cdc();
  return;
}



// Function: FUN_10038624 at 10038624
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038624(undefined2 param_1)

{
  _DAT_30630008 = param_1;
  FUN_100358d4(1);
  FUN_10035ccc();
  return;
}



// Function: FUN_1003865c at 1003865c
// Size: 516 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003865c(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_48 [18];
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    local_48[iVar4 * 2 + 1] = 0;
    local_48[iVar4 * 2] = 0;
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    if ('\0' < *(char *)(_DAT_4bffe775 + iVar4 * 0x2c + 0x1422)) {
      iVar3 = (int)(short)((short)iVar3 + 1);
      local_48[iVar4 * 2] = 1;
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    if (('\x01' < *(char *)(_DAT_4bffe775 + iVar4 * 0x2c + 0x1422)) && (iVar3 < 10)) {
      iVar3 = (int)(short)((short)iVar3 + 1);
      local_48[iVar4 * 2 + 1] = 1;
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    if ((local_48[iVar4 * 2] != 0) && (local_48[iVar4 * 2 + 1] == 0)) {
      *(undefined1 *)(_DAT_4bffe775 + iVar4 * 0x2c + 0x1422) = 1;
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar6 = 0;
    do {
      if (local_48[iVar6 + iVar5 * 2] != 0) {
        *(char *)(param_1 + iVar4 * 0x16) = (char)iVar5;
        iVar2 = iVar5 * 0x2c;
        iVar1 = param_1 + iVar4 * 0x16;
        *(undefined1 *)(iVar1 + 1) = *(undefined1 *)(_DAT_4bffe775 + iVar2 + iVar6 + 0x1423);
        *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(iVar2 + _DAT_4bffe775 + iVar6 * 2 + 0x1426);
        *(undefined2 *)(iVar1 + 4) = *(undefined2 *)(iVar2 + _DAT_4bffe775 + iVar6 * 2 + 0x142a);
        FUN_10001e78(iVar1 + 6,iVar2 + _DAT_4bffe775 + iVar6 * 0x10 + 0x142e);
        iVar4 = (int)(short)((short)iVar4 + 1);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < 2);
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  *param_2 = (short)iVar3 * 0x16;
  return iVar3;
}



// Function: FUN_10038860 at 10038860
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038860(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(_DAT_4bffe775 + iVar1 * 0x2c + 0x1422) = 0;
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 8);
  return;
}



// Function: FUN_10038890 at 10038890
// Size: 976 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038890(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  short sVar7;
  undefined4 uVar8;
  uint uVar9;
  int local_1dc;
  undefined2 local_1b8 [2];
  undefined1 auStack_1b4 [224];
  undefined1 auStack_d4 [16];
  short local_c4;
  short local_c2;
  undefined2 local_c0 [8];
  undefined1 local_b0 [104];
  undefined4 local_48;
  short local_44;
  short local_42;
  
  uVar8 = *(undefined4 *)(*(int *)(_DAT_57c407bd + 0x88) + 0x160);
  local_44 = *(short *)(_DAT_4bffe775 + 0x136);
  sVar7 = local_44;
  if (local_44 < 2) {
    sVar7 = 1;
  }
  if (sVar7 == 2) {
    iVar1 = FUN_100522dc(uVar8,6,0);
    if (iVar1 == 0) {
      return;
    }
    local_48 = 4;
    FUN_100524d4(iVar1,&local_48);
    FUN_100523a8(iVar1,1);
  }
  else {
    local_42 = *(short *)(_DAT_4bffe775 + 0x136);
    sVar7 = local_42;
    if (local_42 < 2) {
      sVar7 = 1;
    }
    if (0xc9 < sVar7) {
      return;
    }
  }
  uVar2 = FUN_100522dc(uVar8,1,0);
  FUN_10052490(uVar2,&local_48,4);
  FUN_100523a8(uVar2,1);
  piVar3 = (int *)FUN_100522dc(uVar8,2,0);
  iVar1 = *piVar3;
  uVar8 = FUN_10117884((int)piVar3 + (int)*(short *)(iVar1 + 0xb8),iVar1,
                       *(undefined4 *)(iVar1 + 0xbc));
  FUN_10117884((int)piVar3 + (int)*(short *)(iVar1 + 0xb0),uVar8);
  iVar1 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      iVar5 = _DAT_4bffe775 + iVar1 * 0x42;
      iVar5 = -(int)*(char *)(_DAT_4bffe775 +
                              (*(uint *)(_DAT_38800000 + *(short *)(iVar5 + 0x1606) * 0xe0 +
                                        *(short *)(iVar5 + 0x1604) * 2) >> 0x18) + 0x711);
      iVar4 = iVar5 + 10;
      if ((iVar4 + (-(uint)(iVar4 == 0) - (iVar5 + 9)) & 0xff) == 0) {
        uVar6 = *(undefined1 *)(_DAT_4bffe775 + iVar1 * 0x42 + 0x1619);
      }
      else {
        uVar6 = 0xff;
      }
      local_b0[iVar1] = uVar6;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  iVar1 = 0;
  do {
    local_c0[iVar1] = *(undefined2 *)(_DAT_4bffe775 + iVar1 * 0x14 + 0x186);
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 8);
  FUN_10050bb0(auStack_d4);
  FUN_1002bdc4();
  local_1b8[0] = FUN_1003865c(auStack_1b4,&local_c2);
  sVar7 = *(short *)(_DAT_4bffe775 + 0x1602) + local_c2;
  local_c4 = sVar7 + 0x34;
  uVar9 = (uint)*(short *)(_DAT_4bffe775 + 0x1602);
  if (uVar9 + (((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) * -2 == 1) {
    uVar9 = (uint)(short)(*(short *)(_DAT_4bffe775 + 0x1602) + 1);
    local_c4 = sVar7 + 0x35;
  }
  FUN_100524d4(piVar3,&local_c4,2);
  FUN_100524d4(piVar3,local_c0,0x10);
  FUN_100524d4(piVar3,auStack_d4,0x10);
  FUN_100524d4(piVar3,*(undefined4 *)(local_1dc + -0x324),0x10);
  FUN_100524d4(piVar3,local_b0,uVar9);
  FUN_100524d4(piVar3,local_1b8,2);
  FUN_100524d4(piVar3,auStack_1b4,(int)local_c2);
  local_48 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xa8));
  FUN_10052518(piVar3,0,0);
  FUN_100524d4(piVar3,&local_48,4);
  FUN_100523a8(piVar3,1);
  FUN_10038860();
  return;
}



// Function: FUN_10038c60 at 10038c60
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038c60(short param_1,char param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  iVar4 = _DAT_4bffe775 + iVar2 * 0x2c;
  cVar1 = *(char *)(iVar4 + 0x1422);
  uVar3 = (uint)cVar1;
  if ((int)uVar3 < 2) {
    *(char *)(iVar4 + 0x1422) = cVar1 + '\x01';
  }
  else {
    iVar4 = _DAT_4bffe775 + iVar2 * 0x2c;
    uVar3 = (uint)(*(char *)(iVar4 + 0x1423) <= *(char *)(iVar4 + 0x1424));
    if (*(char *)(_DAT_4bffe775 + iVar2 * 0x2c + uVar3 + 0x1423) <= param_2) {
      return;
    }
  }
  iVar4 = iVar2 * 0x2c;
  *(char *)(_DAT_4bffe775 + iVar4 + uVar3 + 0x1423) = param_2;
  *(undefined2 *)(iVar4 + _DAT_4bffe775 + uVar3 * 2 + 0x1426) = param_3;
  *(undefined2 *)(iVar4 + _DAT_4bffe775 + uVar3 * 2 + 0x142a) = param_4;
  if (param_5 == 0) {
    *(undefined1 *)(_DAT_4bffe775 + iVar2 * 0x2c + uVar3 * 0x10 + 0x142e) = DAT_90bf0094;
  }
  else {
    FUN_10001e78(iVar4 + _DAT_4bffe775 + uVar3 * 0x10 + 0x142e,param_5);
  }
  return;
}



// Function: FUN_10038d8c at 10038d8c
// Size: 556 bytes

void FUN_10038d8c(int param_1,int param_2,int param_3,short param_4,short param_5,short param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_f0 [22];
  short local_da;
  short local_d4;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_bc;
  short local_ba;
  short asStack_b2 [32];
  short asStack_72 [35];
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if (((iVar4 != 0x1c) && (iVar4 != 5)) && (FUN_10049628(iVar4,auStack_f0), local_c0 != 0)) {
      asStack_72[iVar3 + 1] = (short)iVar4;
      asStack_b2[iVar3 + 1] =
           local_da + (local_c8 + local_c6 + local_c4 + local_c2) * 3 + local_ba * 2 + local_bc * 2
           + local_d4 / 5;
      iVar3 = (int)(short)((short)iVar3 + 1);
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 0x1d);
  iVar4 = 1;
  if (1 < iVar3) {
    do {
      iVar2 = iVar4;
      if (asStack_b2[iVar4 + 1] < asStack_b2[iVar4]) {
        for (; 0 < iVar2; iVar2 = (int)(short)((short)iVar2 + -1)) {
          sVar1 = asStack_b2[iVar2 + 1];
          if (sVar1 < asStack_b2[iVar2]) {
            asStack_b2[iVar2 + 1] = asStack_b2[iVar2];
            asStack_b2[iVar2] = sVar1;
            sVar1 = asStack_72[iVar2 + 1];
            asStack_72[iVar2 + 1] = asStack_72[iVar2];
            asStack_72[iVar2] = sVar1;
          }
        }
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < iVar3);
  }
  iVar4 = (int)(short)((short)iVar3 + -1);
  iVar3 = 0;
  if (0 < param_4) {
    do {
      *(char *)(param_1 + iVar3) = (char)asStack_72[iVar4 + 1];
      if (0 < iVar4) {
        iVar4 = (int)(short)((short)iVar4 + -1);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < param_4);
  }
  iVar3 = 0;
  if (0 < param_5) {
    do {
      *(char *)(param_2 + iVar3) = (char)asStack_72[iVar4 + 1];
      if (0 < iVar4) {
        iVar4 = (int)(short)((short)iVar4 + -1);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < param_5);
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < param_6) {
    do {
      *(char *)(param_3 + iVar3) = (char)asStack_72[iVar4 + 1];
      if (0 < iVar4) {
        iVar4 = (int)(short)((short)iVar4 + 1);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < param_6);
  }
  return;
}



// Function: FUN_10038fb8 at 10038fb8
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038fb8(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  sVar4 = (short)((*(short *)(_DAT_4bffe775 + 0x810) * 3) / 10);
  iVar5 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      *(undefined2 *)(_DAT_4bffe775 + iVar5 * 0x20 + 0x82e) = 0;
      *(undefined2 *)(iVar5 * 0x20 + _DAT_4bffe775 + 0x830) = 0xff;
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  sVar2 = 0;
  if (0 < sVar4) {
    do {
      bVar1 = false;
      do {
        iVar5 = FUN_1005f230(1,(int)*(short *)(_DAT_4bffe775 + 0x810),0xffffffff);
        iVar3 = _DAT_4bffe775 + iVar5 * 0x20;
        if ((*(char *)(iVar3 + 0x82a) != '\x01') && (*(short *)(iVar3 + 0x82e) == 0)) {
          bVar1 = true;
        }
      } while (!bVar1);
      *(undefined2 *)(_DAT_4bffe775 + iVar5 * 0x20 + 0x82e) = 1;
      if (*(short *)(_DAT_4bffe775 + 0x11e) != 0) {
        *(undefined2 *)(iVar5 * 0x20 + _DAT_4bffe775 + 0x830) = 0;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < sVar4);
  }
  return;
}



// Function: FUN_100390e4 at 100390e4
// Size: 156 bytes

undefined4 FUN_100390e4(void)

{
  undefined4 in_r8;
  char cStack0000002c;
  char cStack0000002d;
  
  cStack0000002c = (char)((uint)in_r8 >> 0x18);
  if (cStack0000002c == '\x06') {
    return 1;
  }
  if (cStack0000002c == '\x05') {
    return 1;
  }
  if ((cStack0000002c == '\x02') &&
     (cStack0000002d = (char)((uint)in_r8 >> 0x10), '\x01' < cStack0000002d)) {
    return 1;
  }
  if (cStack0000002c == '\b') {
    return 1;
  }
  return 0;
}



// Function: FUN_10039180 at 10039180
// Size: 1004 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039180(short param_1)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_6bc;
  char local_698 [4];
  undefined1 auStack_694 [2];
  undefined1 local_692;
  int local_644;
  char local_640 [4];
  undefined4 auStack_63c [3];
  char local_62d;
  undefined4 local_62c;
  undefined4 auStack_628 [370];
  short local_60 [26];
  
  piVar4 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x2b8));
  iVar2 = FUN_10052184(0x49544d20,10000,1);
  if (iVar2 != 0) {
    FUN_10052490(iVar2,auStack_694,2);
    local_692 = 0;
    FUN_10001398(auStack_694,*(undefined4 *)(local_6bc + -0x1a4c),&local_644);
    FUN_10052490(iVar2,auStack_694,2);
    iVar6 = 0;
    if (0 < local_644) {
      do {
        iVar7 = iVar6 * 0x1e;
        FUN_10052490(iVar2,local_640 + iVar7,0x14);
        (&local_62d)[iVar7] = '\0';
        FUN_10052490(iVar2,auStack_694,1);
        FUN_10052490(iVar2,local_698,1);
        *(char *)((int)auStack_628 + iVar7 + -4) = local_698[0] + -0x30;
        FUN_10052490(iVar2,auStack_694,1);
        FUN_10052490(iVar2,local_698,1);
        *(char *)((int)auStack_628 + iVar7 + -3) = local_698[0] + -0x30;
        FUN_10052490(iVar2,auStack_694,2);
        sVar3 = FUN_100012c0(local_640 + iVar7);
        iVar7 = 0;
        if (0 < sVar3) {
          do {
            iVar5 = iVar6 * 0x1e + iVar7;
            if (local_640[iVar5] == ' ') {
              local_640[iVar5] = '\0';
            }
            iVar5 = iVar6 * 0x1e + iVar7;
            if (local_640[iVar5] == '_') {
              local_640[iVar5] = ' ';
            }
            iVar7 = iVar7 + 1;
            sVar3 = FUN_100012c0(local_640 + iVar6 * 0x1e);
          } while (iVar7 < sVar3);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_644);
    }
    FUN_100523a8(iVar2,1);
    iVar2 = 0;
    do {
      local_60[iVar2] = -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar2 = 8;
    do {
      do {
        iVar6 = FUN_1005f230(1,(int)(short)local_644,0xffffffff);
        bVar1 = true;
        iVar7 = 0;
        if (0 < iVar2) {
          do {
            if (local_60[iVar7] == iVar6) {
              bVar1 = false;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar2);
        }
        if (bVar1) {
          iVar7 = iVar6 * 0x1e;
          iVar7 = FUN_100390e4(*(undefined4 *)(local_640 + iVar7),
                               *(undefined4 *)((int)auStack_63c + iVar7),
                               *(undefined4 *)((int)auStack_63c + iVar7 + 4),
                               *(undefined4 *)((int)auStack_63c + iVar7 + 8),
                               *(undefined4 *)(&stack0xfffff9d0 + iVar7),
                               *(undefined4 *)((int)auStack_628 + iVar7 + -4),
                               *(undefined4 *)((int)auStack_628 + iVar7),
                               *(undefined4 *)((int)auStack_628 + iVar7 + 4));
          if ((iVar7 == 0) || (param_1 + 8 <= iVar2)) {
            if (bVar1) {
              iVar7 = iVar6 * 0x1e;
              iVar7 = FUN_100390e4(*(undefined4 *)(local_640 + iVar7),
                                   *(undefined4 *)((int)auStack_63c + iVar7),
                                   *(undefined4 *)((int)auStack_63c + iVar7 + 4),
                                   *(undefined4 *)((int)auStack_63c + iVar7 + 8),
                                   *(undefined4 *)(&stack0xfffff9d0 + iVar7),
                                   *(undefined4 *)((int)auStack_628 + iVar7 + -4),
                                   *(undefined4 *)((int)auStack_628 + iVar7),
                                   *(undefined4 *)((int)auStack_628 + iVar7 + 4));
              if ((iVar7 == 0) && (param_1 + 8 <= iVar2)) {
                bVar1 = true;
                goto LAB_100394e8;
              }
            }
            goto LAB_100394e4;
          }
          bVar1 = true;
        }
        else {
LAB_100394e4:
          bVar1 = false;
        }
LAB_100394e8:
      } while (!bVar1);
      local_60[iVar2] = (short)iVar6;
      iVar7 = iVar2 * 0x1e;
      FUN_10001e78(_DAT_4bffe775 + iVar7 + 0xd12);
      *(undefined1 *)(iVar7 + _DAT_4bffe775 + 0xd26) =
           *(undefined1 *)((int)auStack_628 + iVar6 * 0x1e + -4);
      *(undefined1 *)(iVar7 + _DAT_4bffe775 + 0xd27) =
           *(undefined1 *)((int)auStack_628 + iVar6 * 0x1e + -3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x16);
  }
  return;
}



// Function: FUN_1003956c at 1003956c
// Size: 1772 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003956c(void)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short local_a0 [40];
  undefined2 local_50;
  
  iVar8 = (int)(short)(((int)*(short *)(_DAT_4bffe775 + 0x810) << 1) / 10);
  FUN_10038d8c(0x31210038,&DAT_607f0000,&DAT_609e0000,4,3,2);
  FUN_10038fb8();
  FUN_10039180(iVar8);
  iVar2 = FUN_1005f230(2,3,1);
  local_50 = (undefined2)iVar2;
  iVar9 = iVar8;
  if (iVar2 < iVar8) {
    iVar9 = iVar2;
  }
  iVar2 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      iVar5 = _DAT_4bffe775 + iVar2 * 0x20;
      iVar7 = _DAT_38800000 + *(short *)(iVar5 + 0x814) * 0xe0;
      iVar5 = *(short *)(iVar5 + 0x812) * 2;
      *(uint *)(iVar7 + iVar5) = *(uint *)(iVar7 + iVar5) & 0xffbfffff;
      local_a0[iVar2] = 0;
      if (*(char *)(iVar2 * 0x20 + _DAT_4bffe775 + 0x82a) == '\x01') {
        local_a0[iVar2] = 1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  for (sVar6 = *(short *)(_DAT_4bffe775 + 0x810); sVar6 < 0x28; sVar6 = sVar6 + 1) {
    local_a0[sVar6] = 1;
  }
  sVar6 = FUN_1005f230(1,5,0xfffffffd);
  iVar2 = (int)(short)(*(short *)(_DAT_4bffe775 + 0x810) / 3 + sVar6 + 8);
  if (0x16 < iVar2) {
    iVar2 = 0x16;
  }
  iVar5 = 8;
  if (8 < iVar2) {
    do {
      if ((iVar5 < iVar9 + 8) || (iVar8 + 8 <= iVar5)) {
        sVar6 = 0;
        bVar1 = false;
        do {
          sVar6 = sVar6 + 1;
          iVar7 = FUN_1005f230(1,(int)*(short *)(_DAT_4bffe775 + 0x810),0xffffffff);
          iVar4 = _DAT_4bffe775 + iVar5 * 0x1e;
          iVar4 = FUN_100390e4(*(undefined4 *)(iVar4 + 0xd12),*(undefined4 *)(iVar4 + 0xd16),
                               *(undefined4 *)(iVar4 + 0xd1a),*(undefined4 *)(iVar4 + 0xd1e),
                               *(undefined4 *)(iVar4 + 0xd22),*(undefined4 *)(iVar4 + 0xd26),
                               *(undefined4 *)(iVar4 + 0xd2a),*(undefined4 *)(iVar4 + 0xd2e));
          if ((iVar4 == 0) || (*(short *)(_DAT_4bffe775 + iVar7 * 0x20 + 0x82e) != 0)) {
            iVar4 = _DAT_4bffe775 + iVar5 * 0x1e;
            iVar4 = FUN_100390e4(*(undefined4 *)(iVar4 + 0xd12),*(undefined4 *)(iVar4 + 0xd16),
                                 *(undefined4 *)(iVar4 + 0xd1a),*(undefined4 *)(iVar4 + 0xd1e),
                                 *(undefined4 *)(iVar4 + 0xd22),*(undefined4 *)(iVar4 + 0xd26),
                                 *(undefined4 *)(iVar4 + 0xd2a),*(undefined4 *)(iVar4 + 0xd2e));
            if ((iVar4 != 0) || (*(short *)(_DAT_4bffe775 + iVar7 * 0x20 + 0x82e) == 0)) {
              if (local_a0[iVar7] == 0) {
                local_a0[iVar7] = 1;
                bVar1 = true;
              }
              if (100 < sVar6) {
                *(undefined1 *)(_DAT_4bffe775 + iVar5 * 0x1e + 0xd28) = 0;
                *(short *)(iVar5 * 0x1e + _DAT_4bffe775 + 0xd2a) = (short)iVar7;
                break;
              }
            }
          }
        } while (!bVar1);
        if (sVar6 < 0x65) {
          *(undefined1 *)(_DAT_4bffe775 + iVar5 * 0x1e + 0xd28) = 2;
          *(short *)(iVar5 * 0x1e + _DAT_4bffe775 + 0xd2a) = (short)iVar7;
          *(undefined1 *)(_DAT_4bffe775 + iVar7 * 0x20 + 0x82a) = 2;
          *(char *)(iVar7 * 0x20 + _DAT_4bffe775 + 0x82b) = (char)iVar5;
        }
      }
      else {
        *(undefined1 *)(_DAT_4bffe775 + iVar5 * 0x1e + 0xd28) = 0;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < iVar2);
  }
  for (; iVar2 < 0x16; iVar2 = (int)(short)((short)iVar2 + 1)) {
    *(undefined1 *)(_DAT_4bffe775 + iVar2 * 0x1e + 0xd28) = 0;
  }
  iVar9 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      if (local_a0[iVar9] == 0) {
        if (*(short *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82e) == 0) {
          bVar1 = true;
          iVar2 = 0;
          do {
            if ((*(short *)(_DAT_4bffe775 + iVar2 * 2 + 0x138) != 0) &&
               (iVar8 = _DAT_4bffe775 + iVar2 * 0x14, iVar5 = _DAT_4bffe775 + iVar9 * 0x20,
               iVar8 = FUN_1000a884((int)*(short *)(iVar8 + 0x18a),(int)*(short *)(iVar8 + 0x18c),
                                    (int)*(short *)(iVar5 + 0x812),(int)*(short *)(iVar5 + 0x814)),
               iVar8 < 0xf)) {
              bVar1 = false;
              break;
            }
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < 8);
          if (bVar1) {
            iVar2 = FUN_1005f230(1,5,0xffffffff);
            *(undefined1 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82a) = (&DAT_2c050000)[iVar2];
          }
          else {
            iVar2 = FUN_1005f230(1,3,0xffffffff);
            *(undefined1 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82a) =
                 *(undefined1 *)(iVar2 + -0x6bde0048);
          }
        }
        else {
          iVar2 = FUN_1005f230(1,3,0xffffffff);
          *(undefined1 *)(iVar9 * 0x20 + _DAT_4bffe775 + 0x82a) = (&DAT_a8bf0002)[iVar2];
        }
        *(undefined1 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82b) = 0;
        local_a0[iVar9] = 1;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  iVar9 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      iVar2 = _DAT_4bffe775 + iVar9 * 0x20;
      if (*(char *)(iVar2 + 0x82a) == '\x01') {
        *(undefined1 *)(iVar2 + 0x82c) = 0;
      }
      else {
        iVar2 = _DAT_4bffe775 + iVar9 * 0x20;
        if (*(char *)(iVar2 + 0x82a) == '\x05') {
          if (*(short *)(iVar2 + 0x82e) == 0) {
            bVar1 = true;
            iVar2 = 0;
            do {
              if ((*(short *)(_DAT_4bffe775 + iVar2 * 2 + 0x138) != 0) &&
                 (iVar8 = _DAT_4bffe775 + iVar2 * 0x14, iVar5 = _DAT_4bffe775 + iVar9 * 0x20,
                 iVar8 = FUN_1000a884((int)*(short *)(iVar8 + 0x18a),(int)*(short *)(iVar8 + 0x18c),
                                      (int)*(short *)(iVar5 + 0x812),(int)*(short *)(iVar5 + 0x814))
                 , iVar8 < 0xf)) {
                bVar1 = false;
                break;
              }
              iVar2 = (int)(short)((short)iVar2 + 1);
            } while (iVar2 < 8);
            if (bVar1) {
              iVar2 = FUN_1005f230(1,3,0xffffffff);
              *(undefined1 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82c) = (&DAT_607f0000)[iVar2];
            }
            else {
              iVar2 = FUN_1005f230(1,2,0xffffffff);
              *(undefined1 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82c) = (&DAT_609e0000)[iVar2];
            }
          }
          else {
            iVar2 = FUN_1005f230(1,4,0xffffffff);
            *(undefined1 *)(iVar9 * 0x20 + _DAT_4bffe775 + 0x82c) =
                 *(undefined1 *)(iVar2 + 0x31210038);
          }
        }
        else {
          uVar3 = FUN_1005f230(1,9,0);
          *(undefined1 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82c) = uVar3;
        }
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  return;
}



// Function: FUN_10039c58 at 10039c58
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10039c58(short param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(_DAT_4bffe775 + 0x182) == 0) {
    iVar2 = 0;
  }
  else {
    sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
    iVar2 = 0;
    do {
      sVar1 = sVar1 + -1;
      iVar4 = _DAT_60000000 + sVar1 * 0x16;
      if (((int)*(char *)(iVar4 + 5) == (int)param_1) && (*(char *)(iVar4 + 4) == '\x1c')) {
        FUN_1003aeb0(2,0,0,iVar4);
        iVar4 = 0;
        if (0 < _DAT_93430000) {
          do {
            iVar3 = _DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar4 * 2) * 0x1e;
            if (*(char *)(iVar3 + 0xd26) == '\a') {
              iVar2 = (int)(short)((short)iVar2 + (short)*(char *)(iVar3 + 0xd27));
            }
            iVar4 = (int)(short)((short)iVar4 + 1);
          } while (iVar4 < _DAT_93430000);
        }
      }
    } while (sVar1 != 0);
  }
  return iVar2;
}



// Function: FUN_10039d80 at 10039d80
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10039d80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1003aeb0(2,0,0,param_1);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < _DAT_93430000) {
    do {
      if (*(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar2 * 2) * 0x1e + 0xd26) == '\x06')
      {
        iVar1 = (int)(short)((short)iVar1 + 1);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_93430000);
  }
  return iVar1;
}



// Function: FUN_10039e24 at 10039e24
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10039e24(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1003aeb0(2,0,0,param_1);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < _DAT_93430000) {
    do {
      if (*(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar2 * 2) * 0x1e + 0xd26) == '\x05')
      {
        iVar1 = (int)(short)((short)iVar1 + 1);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_93430000);
  }
  return iVar1;
}



// Function: FUN_10039ec8 at 10039ec8
// Size: 556 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039ec8(short param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(_DAT_4bffe775 + 0x11e) != 0) {
    FUN_10063784();
  }
  iVar3 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      iVar1 = _DAT_4bffe775 + iVar3 * 0x20;
      if (*(char *)(iVar1 + 0x82a) == '\x01') {
        iVar2 = _DAT_38800000 + *(short *)(iVar1 + 0x814) * 0xe0;
        iVar1 = *(short *)(iVar1 + 0x812) * 2;
        *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) & 0xffffff | 0xb000000;
      }
      else {
        iVar1 = _DAT_4bffe775 + iVar3 * 0x20;
        if (*(short *)(iVar1 + 0x82e) == 0) {
          iVar1 = _DAT_4bffe775 + iVar3 * 0x20;
          iVar2 = _DAT_38800000 + *(short *)(iVar1 + 0x814) * 0xe0;
          iVar1 = *(short *)(iVar1 + 0x812) * 2;
          *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) & 0xffffff | 0xc000000;
        }
        else if (((int)*(short *)(iVar1 + 0x830) & 1 << ((int)param_1 & 0x3fU)) == 0) {
          if (*(short *)(_DAT_4bffe775 + 0x11e) == 0) {
            iVar1 = _DAT_4bffe775 + iVar3 * 0x20;
            iVar2 = _DAT_38800000 + *(short *)(iVar1 + 0x814) * 0xe0;
            iVar1 = *(short *)(iVar1 + 0x812) * 2;
            *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) & 0xffffff | 0xa000000;
          }
          else {
            iVar1 = _DAT_4bffe775 + iVar3 * 0x20;
            iVar2 = _DAT_38800000 + *(short *)(iVar1 + 0x814) * 0xe0;
            iVar1 = *(short *)(iVar1 + 0x812) * 2;
            *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) & 0xffffff | 0x9000000;
          }
        }
        else {
          iVar2 = _DAT_38800000 + *(short *)(iVar1 + 0x814) * 0xe0;
          iVar1 = *(short *)(iVar1 + 0x812) * 2;
          *(uint *)(iVar2 + iVar1) = *(uint *)(iVar2 + iVar1) & 0xffffff | 0xa000000;
        }
      }
      if (*(short *)(_DAT_4bffe775 + 0x11e) != 0) {
        iVar1 = _DAT_4bffe775 + iVar3 * 0x20;
        FUN_10064498(0,(int)*(short *)(iVar1 + 0x812),(int)*(short *)(iVar1 + 0x814));
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  if (*(short *)(_DAT_4bffe775 + 0x11e) != 0) {
    FUN_10064104();
  }
  return;
}



// Function: FUN_1003a0f4 at 1003a0f4
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003a0f4(short param_1)

{
  if (*(byte *)(_DAT_4bffe775 + param_1 * 0x1e + 0xd28) < 4) {
    return (int)param_1;
  }
  return 1;
}



// Function: FUN_1003a230 at 1003a230
// Size: 968 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a230(int *param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 auStack_258 [256];
  undefined1 auStack_158 [254];
  short local_5a [25];
  
  uVar10 = 0;
  sVar6 = 8;
  iVar11 = 0;
  do {
    iVar5 = (int)(short)((short)iVar11 + 1);
    local_5a[iVar11 + 1] = sVar6;
    sVar6 = sVar6 + 1;
    iVar11 = iVar5;
  } while (sVar6 < 0x16);
  iVar11 = 1;
  if (1 < iVar5) {
    do {
      if (0 < iVar11) {
        iVar8 = _DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e;
        iVar7 = _DAT_4bffe775 + local_5a[iVar11] * 0x1e;
        cVar1 = *(char *)(iVar7 + 0xd26);
        cVar2 = *(char *)(iVar8 + 0xd26);
        iVar9 = iVar11;
        if ((cVar2 < cVar1) ||
           ((cVar2 == cVar1 && (*(char *)(iVar8 + 0xd27) < *(char *)(iVar7 + 0xd27))))) {
          while( true ) {
            sVar6 = local_5a[iVar9 + 1];
            local_5a[iVar9 + 1] = local_5a[iVar9];
            local_5a[iVar9] = sVar6;
            iVar9 = (int)(short)((short)iVar9 + -1);
            if (iVar9 < 1) break;
            iVar8 = _DAT_4bffe775 + local_5a[iVar9 + 1] * 0x1e;
            iVar7 = _DAT_4bffe775 + local_5a[iVar9] * 0x1e;
            cVar1 = *(char *)(iVar7 + 0xd26);
            cVar2 = *(char *)(iVar8 + 0xd26);
            if ((cVar1 <= cVar2) &&
               ((cVar2 != cVar1 || (*(char *)(iVar7 + 0xd27) <= *(char *)(iVar8 + 0xd27))))) break;
          }
        }
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < iVar5);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    do {
      piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar11 + 0x69746530);
      if (piVar3 != (int *)0x0) {
        FUN_100b19f4(auStack_158,_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd12);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_158,1);
      }
      if (*(char *)(_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd26) == '\x01') {
        uVar10 = 1;
      }
      else if (*(char *)(_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd26) == '\x02') {
        uVar10 = 2;
      }
      else if (*(char *)(_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd26) == '\x05') {
        uVar10 = 3;
      }
      else if (*(char *)(_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd26) == '\x06') {
        uVar10 = 4;
      }
      else if (*(char *)(_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd26) == '\a') {
        uVar10 = 5;
      }
      uVar4 = FUN_1005f678(0xa8,uVar10);
      FUN_10001dd0(&DAT_2c9f0000,uVar4,
                   (int)*(char *)(_DAT_4bffe775 + local_5a[iVar11 + 1] * 0x1e + 0xd27));
      piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar11 + 0x626f6e30);
      if (piVar3 != (int *)0x0) {
        FUN_100b19f4(auStack_258,&DAT_2c9f0000);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_258,1);
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < iVar5);
  }
  return;
}



// Function: FUN_1003a5f8 at 1003a5f8
// Size: 4 bytes

void FUN_1003a5f8(void)

{
  return;
}



// Function: FUN_1003a5fc at 1003a5fc
// Size: 356 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a5fc(void)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xe1a,
                               *(undefined4 *)(_DAT_57c407bd + 0x88));
  FUN_100db26c();
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    FUN_1003a230(piVar1);
    FUN_1003a5f8();
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 800));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x810));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    _DAT_41820010 = local_24;
  }
  else {
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1);
    }
    FUN_100db158((int)local_2c,local_28);
  }
  return;
}



// Function: FUN_1003a760 at 1003a760
// Size: 52 bytes

void FUN_1003a760(void)

{
  FUN_1005f6b0(0x45,0);
  FUN_10040040();
  return;
}



// Function: FUN_1003a794 at 1003a794
// Size: 508 bytes

void FUN_1003a794(int param_1,short param_2,short param_3,short param_4,short param_5,int param_6,
                 short param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_154;
  undefined4 local_130;
  undefined4 local_12c [65];
  
  if (param_1 == 0) {
    return;
  }
  iVar4 = (int)param_5;
  iVar3 = (int)param_4;
  iVar6 = (int)param_3;
  iVar5 = (int)param_2;
  FUN_10000870(local_12c,&local_130);
  FUN_10000888(*(undefined4 *)(param_1 + 0x10),0);
  if (**(char **)(local_154 + -0x199c) == '\0') {
    if (param_6 != 0) {
      iVar1 = iVar6;
      if (iVar5 == iVar3) {
        for (; iVar1 <= iVar4; iVar1 = (int)(short)((short)iVar1 + 1)) {
          FUN_10000d38(iVar5,iVar1,param_6);
          param_6 = param_6 + 6;
        }
      }
      else {
        iVar1 = iVar5;
        if (iVar6 == iVar4) {
          for (; iVar1 <= iVar3; iVar1 = (int)(short)((short)iVar1 + 1)) {
            FUN_10000d38(iVar1,iVar6,param_6);
            param_6 = param_6 + 6;
          }
        }
      }
    }
  }
  else if (param_6 != 0) {
    if (iVar5 == iVar3) {
      for (; iVar6 <= iVar4; iVar6 = (int)(short)((short)iVar6 + 1)) {
        uVar2 = FUN_100b2268(param_6);
        FUN_100008e8(iVar5,iVar6,uVar2);
        param_6 = param_6 + 6;
      }
    }
    else if (iVar6 == iVar4) {
      for (; iVar5 <= iVar3; iVar5 = (int)(short)((short)iVar5 + 1)) {
        uVar2 = FUN_100b2268(param_6);
        FUN_100008e8(iVar5,iVar6,uVar2);
        param_6 = param_6 + 6;
      }
    }
    goto LAB_1003a9a0;
  }
  FUN_100b2268(param_7 * 6 + *(int *)(local_154 + -0x1d4));
  FUN_100021c0();
  FUN_10000270(iVar5,iVar6);
  FUN_10001d88(iVar3,iVar4);
LAB_1003a9a0:
  FUN_10000888(local_12c[0],local_130);
  return;
}



// Function: FUN_1003a9c4 at 1003a9c4
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a9c4(short param_1,short param_2,short param_3,short param_4,int param_5)

{
  int iVar1;
  undefined4 local_20;
  
  iVar1 = _FUN_10116698;
  if (param_5 == 0) {
    FUN_10000270((int)param_1,(int)param_2);
    FUN_10001d88((int)param_3,(int)param_4);
  }
  else {
    FUN_10000660(&local_20);
    *(undefined4 *)(iVar1 + 0x10) = local_20;
    FUN_1003a794(iVar1,(int)param_1,(int)param_2,(int)param_3,(int)param_4,param_5,0xff);
  }
  return;
}



// Function: FUN_1003aa68 at 1003aa68
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003aa68(void)

{
  int *piVar1;
  int local_2c;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 0x308),
                               0x6c697374);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x8b0) + (int)piVar1,(int)*(short *)(piVar1 + 0x20));
    FUN_10117884((int)*(short *)(*piVar1 + 0x8d8) + (int)piVar1,(int)**(short **)(local_2c + -0x294)
                );
    FUN_10117884((int)*(short *)(*piVar1 + 0x8f0) + (int)piVar1,
                 (int)(short)(**(short **)(local_2c + -0x33c) + 1),0,1,1);
  }
  return;
}



// Function: FUN_1003ab38 at 1003ab38
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ab38(void)

{
  int local_12c;
  undefined1 auStack_108 [256];
  
  if (_DAT_4086000c == (int *)0x0) {
    _DAT_4086000c =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),
                             (int)_DAT_7c0803a6,*(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 800));
  FUN_100b19f4(auStack_108,*(undefined4 *)(local_12c + -0x334));
  FUN_10090e0c(_DAT_4086000c,0x6e616d65,auStack_108,1);
  FUN_1003aa68();
  return;
}



// Function: FUN_1003abfc at 1003abfc
// Size: 692 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003abfc(undefined4 param_1,undefined4 param_2,short param_3,undefined2 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_15c;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  _DAT_7c0803a6 = param_4;
  FUN_10001e78(&DAT_4e800020);
  _DAT_30210038 = param_3;
  **(undefined4 **)(local_15c + -0x330) = param_1;
  _DAT_607d0000 = 0;
  if (_DAT_93430000 < 2) {
    _DAT_607d0002 = 0xffff;
  }
  else {
    _DAT_607d0002 = 1;
  }
  if (_DAT_93430000 < 3) {
    _DAT_607d0004 = 0xffff;
  }
  else {
    _DAT_607d0004 = 2;
  }
  if (_DAT_93430000 < 4) {
    _DAT_607d0006 = 0xffff;
  }
  else {
    _DAT_607d0006 = 3;
  }
  if (_DAT_93430000 < 5) {
    _DAT_607d0008 = 0xffff;
  }
  else {
    _DAT_607d0008 = 4;
  }
  while (4 < _DAT_30210038) {
    _DAT_30210038 = _DAT_30210038 + -1;
    iVar3 = 0;
    do {
      *(short *)(&DAT_607d0000 + iVar3 * 2) = *(short *)(&DAT_607d0000 + iVar3 * 2) + 1;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 5);
  }
  FUN_1003ab38();
  if (_DAT_4086000c != (int *)0x0) {
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = _DAT_41820010;
    _DAT_41820010 = auStack_138;
    iVar3 = FUN_10000090(auStack_138);
    if (iVar3 == 0) {
      iVar3 = FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 0x810));
      FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 0x328));
      bVar1 = false;
      if (((iVar3 == 0x6f6b2020) &&
          (piVar2 = (int *)FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 0x308)
                                        ,0x6c697374), piVar2 != (int *)0x0)) &&
         (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x908) + (int)piVar2), 0 < iVar3)) {
        FUN_10117884((int)(short)((short)iVar3 + -1));
        bVar1 = true;
      }
      if (!bVar1) {
        FUN_10117884(0xffffffff);
      }
      FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 0x738));
      _DAT_4086000c = (int *)0x0;
      _DAT_41820010 = local_30;
    }
    else {
      if (_DAT_4086000c != (int *)0x0) {
        FUN_10117884((int)_DAT_4086000c + (int)*(short *)(*_DAT_4086000c + 0x738));
      }
      _DAT_4086000c = (int *)0x0;
      FUN_100db158((int)local_38,local_34);
    }
  }
  return;
}



// Function: FUN_1003aeb0 at 1003aeb0
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003aeb0(ushort param_1)

{
  _DAT_93430000 = 0;
  if (param_1 < 0xb) {
    return;
  }
  return;
}



// Function: FUN_1003b3b0 at 1003b3b0
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b3b0(void)

{
  if (DAT_80bf0024 == '\0') {
    FUN_100462c8(0x4f);
    FUN_1000a094(&DAT_90010008);
    FUN_10001290(_DAT_9421ffd8);
    FUN_10002c10();
  }
  else {
    FUN_100462c8(0xf);
    FUN_1000a094(&DAT_9421ffc8);
    FUN_10001290(_DAT_90010018);
    FUN_10002c10();
  }
  FUN_1000a12c(0x386000ff,0x28,0x28,8,0);
  FUN_1000a008(0x386000ff,0xff);
  FUN_1000a12c(0xbb41ffe8,0xe0,0x138,1,0,0);
  return;
}



// Function: FUN_1003b4a4 at 1003b4a4
// Size: 1364 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1003b4a4(short param_1,short param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (_DAT_48000178 != 0) {
    return 0;
  }
  iVar9 = (int)param_2;
  iVar10 = (int)param_1;
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 0) {
    return 0;
  }
  if (param_3 == '\0') {
    iVar9 = FUN_100efb60();
    if (iVar9 != 0) {
      return 0xb;
    }
    return 1;
  }
  uVar7 = *(uint *)(_DAT_38800000 + iVar9 * 0xe0 + iVar10 * 2);
  iVar11 = (int)(short)((ushort)(uVar7 >> 0x10) & 0xf);
  cVar1 = *(char *)(_DAT_4bffe775 + (uVar7 >> 0x18) + 0x711);
  if (_DAT_817f0000 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000a884(iVar10,iVar9,(int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
  }
  if (_DAT_817f0000 == (short *)0x0) {
    cVar8 = '\a';
  }
  else {
    cVar8 = *(char *)(_DAT_4bffe775 +
                      (*(uint *)(_DAT_38800000 + _DAT_817f0000[1] * 0xe0 + *_DAT_817f0000 * 2) >>
                      0x18) + 0x711);
  }
  uVar6 = (ushort)((uint)*(undefined4 *)(_DAT_38800000 + iVar9 * 0xe0 + iVar10 * 2) >> 0x14) & 1;
  iVar9 = FUN_10009630(1,iVar10,iVar9);
  iVar10 = FUN_100efbcc();
  iVar4 = FUN_100efba8();
  if (iVar4 != 0) {
    return 4;
  }
  if (iVar9 == 0) {
    return 0;
  }
  if (_DAT_817f0000 == (short *)0x0) goto LAB_1003b8a0;
  if (((iVar3 < 2) && (iVar11 != *(short *)(_DAT_4bffe775 + 0x110))) &&
     ((cVar1 == '\n' || (uVar6 != 0)))) {
    if ((_DAT_817f0000[6] & 0x1000U) != 0) {
      if (((((_DAT_4beeb891 == 1) && (cVar8 == '\x03')) && (cVar1 != '\x03')) &&
          ((cVar1 != '\x02' && (cVar1 != '\n')))) && (cVar1 != '\x01')) goto LAB_1003b840;
      if ((_DAT_817f0000[6] & 0x1000U) != 0) goto LAB_1003b774;
    }
    if (((_DAT_4beeb891 != 1) || (cVar1 != '\x03')) ||
       ((cVar8 == '\x03' || (((cVar8 == '\x02' || (cVar8 == '\n')) || (cVar8 == '\x01')))))) {
LAB_1003b774:
      if ((*(short *)(_DAT_4bffe775 + 0x11c) == 0) || (iVar11 == 0xf)) {
        uVar5 = 8;
      }
      else if (cVar1 == '\n') {
        if ((*(uint *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x10 + iVar11 * 2 +
                      0x1582) >> 0x1a & 3) == 2) {
          uVar5 = 8;
        }
        else {
          uVar5 = 10;
        }
      }
      else if ((*(uint *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x10 + iVar11 * 2 +
                         0x1582) >> 0x1a & 3) == 0) {
        uVar5 = 10;
      }
      else {
        uVar5 = 8;
      }
      if ((iVar10 == 0) || (*(short *)(_DAT_4bffe775 + 300) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return uVar5;
      }
      return 9;
    }
  }
LAB_1003b840:
  if ((_DAT_817f0000 != (short *)0x0) && (iVar9 = FUN_100efb60(), iVar9 != 0)) {
    if (((cVar1 == '\n') || (uVar6 != 0)) && (iVar11 != *(short *)(_DAT_4bffe775 + 0x110))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      return 0;
    }
    return 0xb;
  }
LAB_1003b8a0:
  if ((cVar1 == '\n') && (iVar11 != *(short *)(_DAT_4bffe775 + 0x110))) {
    if (iVar10 == 0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
    }
  }
  else if ((_DAT_817f0000 == (short *)0x0) || (iVar3 < 1)) {
    if ((uVar6 == 0) || (iVar11 != *(short *)(_DAT_4bffe775 + 0x110))) {
      if (cVar1 == '\v') {
        if (iVar10 == 0) {
          uVar5 = 7;
        }
        else {
          uVar5 = 0;
        }
      }
      else if (cVar1 == '\n') {
        if (iVar10 == 0) {
          uVar5 = 3;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else if (iVar10 == 0) {
      uVar5 = 5;
    }
    else {
      uVar5 = 0;
    }
  }
  else if (iVar10 == 0) {
    if (_DAT_4beeb891 == 2) {
      uVar5 = 6;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      uVar5 = 2;
    }
    else {
      uVar5 = 6;
    }
  }
  else if ((uVar6 == 0) || (iVar11 != *(short *)(_DAT_4bffe775 + 0x110))) {
    if (cVar1 == '\v') {
      uVar5 = 7;
    }
    else if (cVar1 == '\n') {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 5;
  }
  return uVar5;
}



// Function: FUN_1003b9f8 at 1003b9f8
// Size: 1648 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b9f8(void)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_6c [68];
  
  iVar6 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      iVar7 = 0;
      do {
        iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
        if (*(char *)(iVar5 + 0x161a) == '\x05') {
          *(undefined1 *)(iVar5 + 0x161a) = 0xff;
        }
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < 4);
      iVar7 = 0;
      do {
        iVar5 = iVar7;
        if (*(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x161a) == -1) {
          for (; iVar5 < 3; iVar5 = (int)(short)((short)iVar5 + 1)) {
            iVar2 = _DAT_4bffe775 + iVar6 * 0x42 + iVar5;
            *(undefined1 *)(iVar2 + 0x161a) = *(undefined1 *)(iVar2 + 0x161b);
          }
          *(undefined1 *)(_DAT_4bffe775 + iVar6 * 0x42 + 0x161d) = 0xff;
        }
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < 4);
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  iVar6 = 0;
  do {
    FUN_10049628(iVar6,auStack_6c);
    iVar7 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        iVar5 = 0;
        do {
          iVar2 = iVar7 * 0x42;
          iVar4 = _DAT_4bffe775 + iVar2 + iVar5;
          if (*(char *)(iVar4 + 0x161a) == iVar6) {
            *(char *)(iVar4 + 0x1622) = (char)auStack_6c._22_2_;
            *(char *)(_DAT_4bffe775 + iVar2 + iVar5 + 0x161e) = (char)auStack_6c._24_2_;
            *(char *)(iVar2 + _DAT_4bffe775 + iVar5 + 0x1626) = (char)auStack_6c._28_2_;
            *(char *)(iVar2 + _DAT_4bffe775 + iVar5 + 0x162a) = (char)auStack_6c._26_2_;
          }
          iVar5 = (int)(short)((short)iVar5 + 1);
        } while (iVar5 < 4);
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x1d);
  iVar6 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      FUN_100496c8(iVar6);
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  iVar6 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      iVar7 = 0;
      do {
        if (*(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x161a) < '\0') break;
        iVar5 = FUN_1005f230(1,100,0);
        if (iVar5 < 10) {
          iVar5 = FUN_1005f230(1,100,0);
          if (iVar5 < 0x3c) {
            sVar3 = *(char *)(iVar6 * 0x42 + _DAT_4bffe775 + iVar7 + 0x1622) + 1;
            if (8 < sVar3) {
              sVar3 = 9;
            }
            *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1622) = (char)sVar3;
          }
          else {
            sVar3 = *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1622) + -1;
            if (sVar3 < 2) {
              sVar3 = 1;
            }
            *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1622) = (char)sVar3;
          }
        }
        iVar5 = FUN_1005f230(1,100,0);
        if (iVar5 < 0x14) {
          iVar5 = FUN_1005f230(1,100,0);
          if (iVar5 < 10) {
            iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
            *(char *)(iVar5 + 0x1626) = *(char *)(iVar5 + 0x1626) + '\x04';
          }
          else if (iVar5 < 0x3c) {
            iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
            *(char *)(iVar5 + 0x1626) = *(char *)(iVar5 + 0x1626) + '\x02';
          }
          else if (iVar5 < 0x5f) {
            sVar3 = *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1626) + -2;
            if (sVar3 < 3) {
              sVar3 = 2;
            }
            *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1626) = (char)sVar3;
          }
          else {
            sVar3 = *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1626) + -4;
            if (sVar3 < 3) {
              sVar3 = 2;
            }
            *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x1626) = (char)sVar3;
          }
        }
        iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
        if (*(char *)(iVar5 + 0x1626) < '\x06') {
          *(undefined1 *)(iVar5 + 0x1626) = 6;
        }
        iVar5 = FUN_1005f230(1,100,0);
        if (iVar5 < 10) {
          iVar5 = FUN_1005f230(1,100,0);
          if (iVar5 < 0x3c) {
            iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
            bVar1 = *(byte *)(iVar5 + 0x162a);
            *(byte *)(iVar5 + 0x162a) =
                 bVar1 - (((char)bVar1 >> 2) + ((char)bVar1 < '\0' && (bVar1 & 3) != 0));
          }
          else {
            iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
            bVar1 = *(byte *)(iVar5 + 0x162a);
            *(byte *)(iVar5 + 0x162a) =
                 bVar1 + ((char)bVar1 >> 2) + ((char)bVar1 < '\0' && (bVar1 & 3) != 0);
          }
        }
        iVar5 = FUN_1005f230(1,100,0);
        if (iVar5 < 10) {
          iVar5 = FUN_1005f230(1,100,0);
          if (iVar5 < 0x3c) {
            sVar3 = *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x161e) + -1;
            if (sVar3 < 2) {
              sVar3 = 1;
            }
            *(char *)(_DAT_4bffe775 + iVar6 * 0x42 + iVar7 + 0x161e) = (char)sVar3;
          }
          else {
            iVar5 = _DAT_4bffe775 + iVar6 * 0x42 + iVar7;
            *(char *)(iVar5 + 0x161e) = *(char *)(iVar5 + 0x161e) + '\x01';
          }
        }
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < 4);
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  return;
}



// Function: FUN_1003c068 at 1003c068
// Size: 768 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c068(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short local_40 [8];
  short local_30 [10];
  
  iVar7 = -1;
  iVar3 = 7;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar3 * 2 + 0x138) == 0) {
      *(undefined2 *)(_DAT_4bffe775 + iVar3 * 0x14 + 0x194) = 0xffff;
      *(undefined2 *)(iVar3 * 0x14 + _DAT_4bffe775 + 0x196) = 0xffff;
    }
    else {
      iVar6 = iVar3 * 0x14 + _DAT_4bffe775;
      *(undefined2 *)(iVar6 + 0x194) = *(undefined2 *)(iVar6 + 0x18a);
      iVar6 = iVar3 * 0x14 + _DAT_4bffe775;
      *(undefined2 *)(iVar6 + 0x196) = *(undefined2 *)(iVar6 + 0x18c);
    }
    iVar6 = _DAT_4bffe775 + iVar3 * 0x14;
    sVar2 = *(short *)(iVar6 + 0x18a);
    local_30[iVar3] = sVar2;
    local_40[iVar3] = *(short *)(iVar6 + 0x18c);
    iVar6 = FUN_1002be50((int)sVar2);
    if (-1 < iVar6) {
      if (*(short *)(_DAT_4bffe775 + iVar3 * 2 + 0x138) == 0) {
        FUN_1002ca18(_DAT_4bffe775 + iVar6 * 0x42 + 0x1604,0xf);
        *(undefined1 *)(iVar6 * 0x42 + _DAT_4bffe775 + 0x1619) = 0xf;
      }
      else {
        FUN_1002ca18(_DAT_4bffe775 + iVar6 * 0x42 + 0x1604,iVar3);
        *(char *)(iVar6 * 0x42 + _DAT_4bffe775 + 0x1619) = (char)iVar3;
        iVar7 = iVar3;
      }
    }
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  if ((iVar7 != -1) && (*(short *)(_DAT_4bffe775 + 0x128) != 0)) {
    iVar3 = FUN_1002bf64((int)local_30[iVar7],(int)local_40[iVar7],0xf,0);
    while (-1 < iVar3) {
      FUN_1002ca18(_DAT_4bffe775 + iVar3 * 0x42 + 0x1604,iVar7);
      *(char *)(iVar3 * 0x42 + _DAT_4bffe775 + 0x1619) = (char)iVar7;
      iVar6 = FUN_1005f230(1,10,0xffffffff);
      if (iVar6 < 5) {
        iVar3 = _DAT_4bffe775 + iVar7 * 0x14;
        local_30[iVar7] = *(short *)(iVar3 + 0x18a);
        local_40[iVar7] = *(short *)(iVar3 + 0x18c);
      }
      else {
        iVar3 = _DAT_4bffe775 + iVar3 * 0x42;
        local_30[iVar7] = *(short *)(iVar3 + 0x1604);
        local_40[iVar7] = *(short *)(iVar3 + 0x1606);
      }
      do {
        uVar5 = iVar7 + 1;
        iVar7 = (int)(short)((short)uVar5 +
                            (short)(((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0))
                            * -8);
      } while (*(short *)(_DAT_4bffe775 + iVar7 * 2 + 0x138) == 0);
      iVar3 = FUN_1002bf64((int)local_30[iVar7],(int)local_40[iVar7],0xf,0);
    }
  }
  FUN_1003b9f8();
  iVar7 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      uVar4 = FUN_10048c90(iVar7);
      *(undefined1 *)(_DAT_4bffe775 + iVar7 * 0x42 + 0x1618) = uVar4;
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  return;
}



// Function: FUN_1003c368 at 1003c368
// Size: 1232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c368(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  FUN_10049e68();
  FUN_10025f98();
  sVar7 = 0;
  iVar8 = 0;
  uVar4 = 1;
  do {
    iVar3 = _DAT_4bffe775 + iVar8 * 0x14;
    iVar3 = FUN_1002be50((int)*(short *)(iVar3 + 0x18a),(int)*(short *)(iVar3 + 0x18c));
    if (iVar3 < 0) {
      *(undefined2 *)(_DAT_4bffe775 + iVar8 * 2 + 0xd0) = 1;
      *(undefined2 *)(iVar8 * 2 + _DAT_4bffe775 + 0x138) = 0;
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  *(undefined2 *)(_DAT_4bffe775 + 0x118) = 0;
  *(undefined2 *)(_DAT_4bffe775 + 0x15e) = 0;
  *(undefined2 *)(_DAT_4bffe775 + 0x136) = 1;
  *(undefined2 *)(_DAT_4bffe775 + 0x182) = 10;
  *(undefined2 *)(_DAT_4bffe775 + 0x158) = 0;
  iVar8 = 0;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar8 * 2 + 0xd0) == 0) {
      sVar7 = sVar7 + 1;
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  if (((*(short *)(_DAT_4bffe775 + 0x124) != 0) &&
      (uVar4 = (ushort)(sVar7 < 1), *(short *)(_DAT_4bffe775 + 0x124) != 0)) && (sVar7 == 1)) {
    _DAT_807f0028 = 1;
  }
  iVar8 = 0;
  do {
    *(ushort *)(_DAT_4bffe775 + iVar8 * 2 + 0x148) = uVar4;
    if (*(short *)(iVar8 * 2 + _DAT_4bffe775 + 0x138) == 0) {
      *(undefined2 *)(_DAT_4bffe775 + iVar8 * 0x14 + 0x186) = 0;
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  FUN_1003956c();
  if (_DAT_60000000 == 0) {
    _DAT_60000000 = FUN_100f1640(22000);
  }
  iVar8 = 999;
  do {
    iVar3 = iVar8 * 0x16;
    *(undefined1 *)(_DAT_60000000 + iVar3 + 5) = 0xff;
    *(undefined2 *)(iVar3 + _DAT_60000000) = 0xffff;
    *(undefined2 *)(iVar3 + _DAT_60000000 + 2) = 0xffff;
    bVar1 = iVar8 != 0;
    iVar8 = (int)(short)((short)iVar8 + -1);
  } while (bVar1);
  _DAT_57e31838 = 0;
  _DAT_817f0000 = 0;
  iVar8 = 0;
  do {
    *(undefined4 *)(&DAT_409e0034 + iVar8 * 4) = 0;
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  FUN_1003c068();
  FUN_100099cc();
  FUN_100090f0();
  FUN_10025f2c();
  FUN_1002cbbc();
  iVar8 = (int)*(short *)(_DAT_4bffe775 + 0x110);
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    iVar3 = 0;
    do {
      iVar8 = iVar3;
      if (*(short *)(_DAT_4bffe775 + iVar8 * 2 + 0xd0) == 0) break;
      iVar3 = (int)(short)((short)iVar8 + 1);
      iVar8 = (int)*(short *)(_DAT_4bffe775 + 0x110);
    } while (iVar3 < 8);
    FUN_100635e0(iVar8);
  }
  *(undefined2 *)(_DAT_4bffe775 + 0x17e) = *(undefined2 *)(_DAT_4bffe775 + iVar8 * 0x14 + 0x18a);
  *(undefined2 *)(_DAT_4bffe775 + 0x180) = *(undefined2 *)(iVar8 * 0x14 + _DAT_4bffe775 + 0x18c);
  uVar4 = _DAT_909a0000 / 0x28;
  uVar5 = _DAT_30840001 / 0x28;
  sVar7 = *(short *)(_DAT_4bffe775 + 0x17e) -
          (((short)uVar4 >> 1) + (ushort)((short)uVar4 < 0 && (uVar4 & 1) != 0));
  if (sVar7 < 0) {
    sVar7 = 0;
  }
  *(short *)(_DAT_4bffe775 + 0x178) = sVar7;
  sVar7 = *(short *)(_DAT_4bffe775 + 0x180) -
          (((short)uVar5 >> 1) + (ushort)((short)uVar5 < 0 && (uVar5 & 1) != 0));
  if (sVar7 < 0) {
    sVar7 = 0;
  }
  *(short *)(_DAT_4bffe775 + 0x176) = sVar7;
  sVar7 = *(short *)(_DAT_4bffe775 + 0x178) + uVar4 + -1;
  if (0x6f < sVar7) {
    sVar7 = 0x6f;
  }
  *(short *)(_DAT_4bffe775 + 0x17c) = sVar7;
  sVar7 = *(short *)(_DAT_4bffe775 + 0x176) + uVar5 + -1;
  if (0x9b < sVar7) {
    sVar7 = 0x9b;
  }
  *(short *)(_DAT_4bffe775 + 0x17a) = sVar7;
  iVar8 = 0;
  do {
    iVar3 = 0;
    do {
      iVar6 = _DAT_38800000 + iVar3 * 0xe0;
      *(uint *)(iVar6 + iVar8 * 2) = *(uint *)(iVar6 + iVar8 * 2) & 0xffdfffff;
      iVar6 = _DAT_807f0004 + iVar3 * 0x70;
      *(uint *)(iVar6 + iVar8) = *(uint *)(iVar6 + iVar8) & 0xbfffffff;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0x9c);
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 0x70);
  FUN_1005bbe8();
  iVar8 = 0;
  do {
    uVar2 = FUN_1005f230(1,8,0);
    *(undefined2 *)(_DAT_4bffe775 + iVar8 * 2 + 0x1122) = uVar2;
    if ((*(short *)(_DAT_4bffe775 + 0x116) != 0) &&
       (iVar3 = _DAT_4bffe775 + iVar8 * 2, *(short *)(iVar3 + 0xd0) == 0)) {
      *(short *)(iVar3 + 0x1122) = *(short *)(iVar3 + 0x1122) + 400;
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  FUN_100275ec();
  return;
}



// Function: FUN_1003c838 at 1003c838
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c838(void)

{
  undefined2 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  if (*(short *)(_DAT_4bffe775 + 0x122) == 0) {
    iVar4 = 0;
    do {
      *(short *)(_DAT_4bffe775 + iVar4 * 2 + 0x164) = (short)iVar4;
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 8);
  }
  else {
    iVar4 = 0;
    do {
      *(short *)(_DAT_4bffe775 + iVar4 * 2 + 0x164) = (short)iVar4;
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 8);
    sVar3 = 0;
    do {
      iVar4 = FUN_1005f230(1,8,0xffffffff);
      iVar2 = FUN_1005f230(1,8,0xffffffff);
      iVar2 = _DAT_4bffe775 + iVar2 * 2;
      uVar1 = *(undefined2 *)(iVar2 + 0x164);
      *(undefined2 *)(iVar2 + 0x164) = *(undefined2 *)(_DAT_4bffe775 + iVar4 * 2 + 0x164);
      *(undefined2 *)(iVar4 * 2 + _DAT_4bffe775 + 0x164) = uVar1;
      sVar3 = sVar3 + 1;
    } while (sVar3 < 0x14);
  }
  *(undefined2 *)(_DAT_4bffe775 + 0x174) = 0;
  return;
}



// Function: FUN_1003c938 at 1003c938
// Size: 396 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c938(int param_1)

{
  int iVar1;
  int local_254;
  undefined1 auStack_230 [256];
  int *local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_130 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 != 0) {
    if (local_130 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*local_130 + 0x738) + (int)local_130);
      local_130 = (int *)0x0;
    }
    FUN_100db158((int)local_2c,local_28);
    return;
  }
  if (param_1 != 0) {
    local_130 = (int *)FUN_10117884(**(int **)(local_254 + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_254 + -0x1e4) + 200),
                                    0x3fc,0);
    if (local_130 == (int *)0x0) {
      _DAT_41820010 = (undefined1 *)local_24;
      return;
    }
    FUN_10117884((int)*(short *)(*local_130 + 800) + (int)local_130);
    FUN_100b19f4(auStack_230,param_1);
    FUN_10090e0c(local_130,0x31737472,auStack_230,1);
  }
  if (local_130 != (int *)0x0) {
    FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x810));
    FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x738));
  }
  _DAT_41820010 = (undefined1 *)local_24;
  return;
}



// Function: FUN_1003cac4 at 1003cac4
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cac4(undefined4 param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int local_2c;
  
  iVar1 = FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x308),0x696e666f);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)
             (*(short *)(**(int **)(local_2c + -0x544) +
                         *(short *)(**(int **)(local_2c + -0x544) + 0x110) * 2 + 0xa0) * 6 +
             *(int *)(local_2c + -0x1d4));
    uVar2 = puVar3[1];
    *(undefined4 *)(iVar1 + 0x9e) = *puVar3;
    *(uint *)(iVar1 + 0xa2) = uVar2 & 0xffff0000;
    FUN_10081040(iVar1,param_1);
    if (0 < param_2) {
      FUN_1005f144((int)param_2);
    }
  }
  return;
}



// Function: FUN_1003cb84 at 1003cb84
// Size: 848 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cb84(void)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined **local_a4;
  undefined1 auStack_80 [84];
  
  ppuVar5 = &.TVect::OCECToRString;
  FUN_1002bdc4();
  bVar4 = false;
  iVar10 = 0;
  while ((iVar9 = _DAT_4bffe775 + iVar10 * 2, *(short *)(iVar9 + 0x138) == 0 ||
         (*(short *)(iVar9 + 0xd0) != 0))) {
    iVar10 = (int)(short)((short)iVar10 + 1);
    if (7 < iVar10) {
LAB_1003cbf8:
      iVar10 = 0;
      do {
        if ((*(short *)(_DAT_4bffe775 + iVar10 * 2 + 0x138) != 0) &&
           (*(short *)(&DAT_8062dac4 + iVar10 * 2) == 0)) {
          sVar2 = *(short *)(_DAT_4bffe775 + 0x182);
          if (sVar2 != 0) {
            do {
              sVar2 = sVar2 + -1;
              iVar11 = (int)sVar2;
              iVar9 = iVar11 * 0x16;
              cVar1 = *(char *)(_DAT_60000000 + iVar9 + 5);
              if (cVar1 == (char)iVar10) {
                if (*(char *)(_DAT_60000000 + iVar9 + 4) == '\x1c') {
                  uVar3 = *(undefined2 *)(_DAT_4bffe775 + 0x110);
                  *(short *)(_DAT_4bffe775 + 0x110) = (short)cVar1;
                  FUN_1002e5c0(_DAT_60000000 + iVar9,(int)*(short *)(_DAT_60000000 + iVar9),
                               (int)*(short *)(_DAT_60000000 + iVar9 + 2));
                  *(undefined2 *)(_DAT_4bffe775 + 0x110) = uVar3;
                }
                FUN_100214e8(_DAT_60000000 + iVar11 * 0x16);
              }
            } while (iVar11 != 0);
          }
          FUN_10038c60(iVar10,4,iVar10,0,ppuVar5[-0x685]);
          uVar6 = FUN_1005f678(0xc,0xffffffff);
          FUN_10001dd0(auStack_80,uVar6,_DAT_4bffe775 + iVar10 * 0x14);
          if (*(short *)(_DAT_4bffe775 + iVar10 * 2 + 0xd0) == 0) {
            if (*(char *)(*(int *)(_DAT_57c407bd + 0x88) + 0x16e) == '\0') {
              FUN_1003c938(auStack_80);
            }
            else {
              FUN_1007fd6c(*(int *)(_DAT_57c407bd + 0x88),iVar10,8,auStack_80);
            }
          }
          else if (bVar4) {
            FUN_1003c938(auStack_80);
          }
          else {
            FUN_1003cac4(auStack_80,100);
          }
          *(undefined2 *)(_DAT_4bffe775 + iVar10 * 2 + 0x138) = 0;
          *(undefined2 *)(_DAT_4bffe775 + iVar10 * 0x14 + 0x186) = 0;
          iVar9 = 0;
          do {
            iVar11 = _DAT_4bffe775 + iVar10 * 0x10 + iVar9 * 2;
            *(uint *)(iVar11 + 0x1582) = *(uint *)(iVar11 + 0x1582) & 0xcfffffff | 0x10000000;
            iVar11 = iVar10 * 0x10 + _DAT_4bffe775 + iVar9 * 2;
            uVar8 = *(uint *)(iVar11 + 0x1582);
            *(uint *)(iVar11 + 0x1582) = (uVar8 >> 0x1c & 3) << 0x1a | uVar8 & 0xf3ffffff;
            iVar11 = _DAT_4bffe775 + iVar9 * 0x10 + iVar10 * 2;
            *(uint *)(iVar11 + 0x1582) = *(uint *)(iVar11 + 0x1582) & 0xcfffffff | 0x10000000;
            iVar11 = iVar9 * 0x10 + _DAT_4bffe775 + iVar10 * 2;
            uVar8 = *(uint *)(iVar11 + 0x1582);
            *(uint *)(iVar11 + 0x1582) = (uVar8 >> 0x1c & 3) << 0x1a | uVar8 & 0xf3ffffff;
            iVar9 = (int)(short)((short)iVar9 + 1);
          } while (iVar9 < 8);
          piVar7 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                                       0x7475726e);
          ppuVar5 = local_a4;
          if (piVar7 != (int *)0x0) {
            FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x4d0));
            FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x4c8));
          }
        }
        iVar10 = (int)(short)((short)iVar10 + 1);
      } while (iVar10 < 8);
      return;
    }
  }
  bVar4 = true;
  goto LAB_1003cbf8;
}



// Function: FUN_1003ced4 at 1003ced4
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ced4(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_35c;
  undefined1 auStack_338 [256];
  undefined1 auStack_238 [256];
  int *local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_138 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 != 0) {
    if (local_138 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*local_138 + 0x738) + (int)local_138);
      local_138 = (int *)0x0;
    }
    FUN_100db158((int)local_34,local_30);
    return;
  }
  if (param_1 != 0) {
    local_138 = (int *)FUN_10117884(**(int **)(local_35c + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_35c + -0x1e4) + 200),
                                    0x3fc,0);
    if (local_138 == (int *)0x0) {
      _DAT_41820010 = (undefined1 *)local_2c;
      return;
    }
    FUN_10117884((int)*(short *)(*local_138 + 800) + (int)local_138);
    FUN_100b19f4(auStack_238,param_1);
    FUN_10090e0c(local_138,0x32737431,auStack_238,1);
    FUN_100b19f4(auStack_338,param_2);
    FUN_10090e0c(local_138,0x32737432,auStack_338,1);
  }
  if (local_138 != (int *)0x0) {
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0x810));
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0x738));
  }
  _DAT_41820010 = (undefined1 *)local_2c;
  return;
}



// Function: FUN_1003d094 at 1003d094
// Size: 1096 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d094(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int unaff_r26;
  uint uVar10;
  int iVar11;
  int local_9c;
  undefined1 auStack_78 [84];
  
  FUN_1002bdc4();
  uVar10 = 0;
  iVar11 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      iVar5 = _DAT_4bffe775 + iVar11 * 0x42;
      iVar5 = -(int)*(char *)(_DAT_4bffe775 +
                              (*(uint *)(_DAT_38800000 + *(short *)(iVar5 + 0x1606) * 0xe0 +
                                        *(short *)(iVar5 + 0x1604) * 2) >> 0x18) + 0x711);
      iVar8 = iVar5 + 10;
      if ((iVar8 + (-(uint)(iVar8 == 0) - (iVar5 + 9)) & 0xff) == 0) {
        uVar10 = (uint)(short)((short)uVar10 + 1);
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  sVar9 = 0;
  sVar7 = 0;
  bVar6 = true;
  bVar2 = false;
  iVar11 = 7;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar11 * 2 + 0x138) != 0) {
      bVar6 = false;
    }
    iVar5 = _DAT_4bffe775 + iVar11 * 2;
    if (*(short *)(iVar5 + 0xd0) == 0) {
      if (*(short *)(iVar5 + 0x138) == 0) {
        *(undefined2 *)(iVar5 + 0xd0) = 1;
        bVar2 = true;
        goto LAB_1003d1b4;
      }
LAB_1003d1cc:
      if (*(short *)(_DAT_4bffe775 + iVar11 * 2 + 0xd0) == 0) {
        sVar7 = sVar7 + 1;
        bVar2 = true;
        unaff_r26 = iVar11;
      }
      iVar5 = _DAT_4bffe775 + iVar11 * 2;
      if ((*(short *)(iVar5 + 0x138) != 0) && (*(short *)(iVar5 + 0xd0) == 1)) {
        sVar9 = sVar9 + 1;
      }
    }
    else {
LAB_1003d1b4:
      if (*(short *)(_DAT_4bffe775 + iVar11 * 2 + 0x138) != 0) goto LAB_1003d1cc;
    }
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  if (bVar6) {
    uVar3 = FUN_1005f678(0xd,1);
    uVar4 = FUN_1005f678(0xd,0);
    FUN_1003ced4(uVar4,uVar3);
    uVar3 = FUN_1005f678(0xd,3);
    uVar4 = FUN_1005f678(0xd,2);
    FUN_1003ced4(uVar4,uVar3);
  }
  if (*(short *)(_DAT_4bffe775 + 0x15c) == 0) {
    if ((sVar7 == 0) && (bVar2)) {
      uVar3 = FUN_1005f678(0xe,1);
      uVar4 = FUN_1005f678(0xe,0);
      FUN_1003ced4(uVar4,uVar3);
    }
    if (*(short *)(_DAT_4bffe775 + 0x15c) == 0) {
      if (((sVar7 == 1) && (sVar9 == 0)) &&
         ((int)(((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) <
          (int)*(short *)(&DAT_8062dac4 + unaff_r26 * 2))) {
        *(undefined2 *)(_DAT_4bffe775 + 0x15c) = 1;
        FUN_10038c60(unaff_r26,7,unaff_r26,0,0x61240004);
      }
      if (*(short *)(_DAT_4bffe775 + 0x15c) == 0) {
        if ((sVar7 == 0) && (sVar9 == 1)) {
          *(undefined2 *)(_DAT_4bffe775 + 0x15c) = 1;
          iVar11 = 0;
          do {
            if (*(short *)(_DAT_4bffe775 + iVar11 * 2 + 0x138) != 0) break;
            iVar11 = (int)(short)((short)iVar11 + 1);
          } while (iVar11 < 8);
          uVar3 = FUN_1005f678(0x10,0);
          FUN_10001dd0(auStack_78,uVar3,_DAT_4bffe775 + iVar11 * 0x14);
          FUN_1003c938(auStack_78);
          *(undefined2 *)(_DAT_4bffe775 + iVar11 * 2 + 0xd0) = 0;
          FUN_10038c60(iVar11,7,iVar11,0,*(int *)(local_9c + -0x1a14) + 8);
        }
        if (((*(short *)(_DAT_4bffe775 + 0x15c) == 0) && (sVar7 == 1)) &&
           ((0 < sVar9 && (*(short *)(_DAT_4bffe775 + 0x15e) == 0)))) {
          iVar11 = 0;
          iVar5 = 0;
          do {
            iVar8 = _DAT_4bffe775 + iVar5 * 2;
            if (((*(short *)(iVar8 + 0x138) != 0) && (*(short *)(iVar8 + 0xd0) == 1)) &&
               (iVar11 < *(short *)(&DAT_8062dac4 + iVar5 * 2))) {
              iVar11 = (int)*(short *)(&DAT_8062dac4 + iVar5 * 2);
            }
            iVar5 = (int)(short)((short)iVar5 + 1);
          } while (iVar5 < 8);
          uVar10 = (uint)*(short *)(_DAT_4bffe775 + 0x1602);
          if (((int)(((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) <
               (int)*(short *)(&DAT_8062dac4 + unaff_r26 * 2)) &&
             ((int)(iVar11 + ((int)uVar10 >> 3) + (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0)) <
              (int)*(short *)(&DAT_8062dac4 + unaff_r26 * 2))) {
            *(undefined2 *)(_DAT_4bffe775 + 0x15e) = 1;
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_1003d4dc at 1003d4dc
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d4dc(void)

{
  bool bVar1;
  
  bVar1 = false;
  do {
    if (*(short *)(_DAT_4bffe775 + 0x118) != 0) {
      *(short *)(_DAT_4bffe775 + 0x136) = *(short *)(_DAT_4bffe775 + 0x136) + 1;
      FUN_1003c838();
      *(undefined2 *)(_DAT_4bffe775 + 0x118) = 0;
      FUN_1003cb84();
      FUN_1003d094();
      FUN_10025f94();
      FUN_1002ce38();
      FUN_10038890();
      FUN_10064850(1,0);
    }
    *(undefined2 *)(_DAT_4bffe775 + 0x110) =
         *(undefined2 *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x174) * 2 + 0x164);
    *(short *)(_DAT_4bffe775 + 0x174) = *(short *)(_DAT_4bffe775 + 0x174) + 1;
    if (7 < *(short *)(_DAT_4bffe775 + 0x174)) {
      *(undefined2 *)(_DAT_4bffe775 + 0x118) = 1;
    }
    if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x138) != 0) {
      bVar1 = true;
    }
  } while (!bVar1);
  return;
}



// Function: FUN_1003d5d4 at 1003d5d4
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d5d4(void)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **local_2c;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_60690000 != (int *)0x0) {
    *(undefined1 *)((int)_DAT_60690000 + 0xbe) = 1;
    FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x4d0));
    FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x4c8));
    ppuVar1 = local_2c;
  }
  piVar2 = *(int **)ppuVar1[-0x541];
  if ((piVar2 != (int *)0x0) &&
     (piVar2 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,0x6f766572),
     piVar2 != (int *)0x0)) {
    *(undefined1 *)(piVar2 + 0x25) = 1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
    FUN_10117884((int)*(short *)(*piVar2 + 0x4c8) + (int)piVar2);
  }
  return;
}



// Function: FUN_1003d6c4 at 1003d6c4
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d6c4(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x308),
                               0x696e666f);
  if (piVar1 != (int *)0x0) {
    *(undefined1 *)(piVar1 + 0x2a) = 0;
    FUN_10117884((int)*(short *)(*piVar1 + 0x488) + (int)piVar1);
  }
  return;
}



// Function: FUN_1003d734 at 1003d734
// Size: 1268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d734(int *param_1)

{
  char cVar2;
  int *piVar1;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int local_3c;
  
  if (param_1 != (int *)0x0) {
    cVar2 = FUN_10056534();
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x68656c70);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,0,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6d6f7665);
    if (piVar1 != (int *)0x0) {
      if ((_DAT_817f0000 == 0) ||
         (**(short **)(local_3c + -0x1a10) <= **(short **)(local_3c + -0x1a04))) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),uVar5,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e657874);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),cVar2 == '\0',1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6c656176);
    if (piVar1 != (int *)0x0) {
      if ((cVar2 == '\0') || (_DAT_817f0000 == 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),uVar5,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x67756172);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),_DAT_817f0000 == 0,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657365);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),_DAT_817f0000 == 0,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x70617468);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),_DAT_817f0000 == 0,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64656c65);
    if (piVar1 != (int *)0x0) {
      if (((_DAT_817f0000 == 0) || (*(short *)(_DAT_817f0000 + 0x12) < 0)) ||
         (*(short *)(_DAT_817f0000 + 0x14) < 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),uVar5,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x63656e74);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),_DAT_817f0000 == 0,1);
    }
    iVar6 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar6 + 0x73637230);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),0,1);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < 8);
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6469706c);
    if (piVar1 != (int *)0x0) {
      iVar6 = 0x3ef;
      if ((*(short *)(_DAT_4bffe775 + 0x11c) != 0) &&
         (uVar3 = *(uint *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x12 + 0x1582),
         (uVar3 >> 0x1e & 1) != 0)) {
        if ((int)uVar3 < 0) {
          sVar4 = 2;
        }
        else {
          sVar4 = 1;
        }
        iVar6 = (int)(short)(sVar4 + 0x3ef);
      }
      if (*(short *)((int)piVar1 + 0xaa) != iVar6) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7a8),iVar6,1);
      }
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),
                   *(short *)(_DAT_4bffe775 + 0x11c) == 0,1);
    }
  }
  return;
}



// Function: FUN_1003dc28 at 1003dc28
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dc28(void)

{
  if (_DAT_7c7f1814 != (int *)0x0) {
    FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),0x6c62616b);
    FUN_1003d734();
    FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),0x7362616b);
    FUN_1003d734();
  }
  return;
}



// Function: FUN_1003dcb4 at 1003dcb4
// Size: 1020 bytes

void FUN_1003dcb4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6d6f7665);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e657874);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6c656176);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x67756172);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657365);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x70617468);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64656c65);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x63656e74);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6469706c);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x68656c70);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    iVar2 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar2 + 0x73637230);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    iVar2 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar2 + 0x62757431);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 4);
  }
  return;
}



// Function: FUN_1003e0b0 at 1003e0b0
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e0b0(void)

{
  if (_DAT_7c7f1814 != (int *)0x0) {
    FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),0x6c62616b);
    FUN_1003dcb4();
    FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),0x7362616b);
    FUN_1003dcb4();
  }
  return;
}



// Function: FUN_1003e13c at 1003e13c
// Size: 5420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e13c(undefined4 param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar14;
  uint uVar12;
  short sVar13;
  uint uVar15;
  int iVar16;
  int iVar17;
  short sStack0000001e;
  int local_56c;
  undefined4 local_548;
  undefined1 *local_544;
  uint local_528;
  undefined1 *local_510;
  undefined1 local_508 [256];
  int local_408;
  int iStack_404;
  int iStack_400;
  int iStack_3fc;
  int *local_3f8;
  char local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  int local_3d0;
  int local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  int local_3b8;
  int local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  short local_398;
  short local_396;
  undefined4 local_390;
  undefined4 local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int iStack_374;
  int local_370;
  int local_36c;
  undefined1 auStack_368 [72];
  char local_320;
  byte local_31f;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined1 auStack_308 [80];
  char local_2b8;
  char local_2b7;
  char local_2b6;
  undefined1 auStack_2b4 [8];
  undefined4 local_2ac;
  undefined4 *local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 auStack_29c [8];
  undefined4 local_294;
  undefined4 local_290;
  undefined1 auStack_28c [8];
  undefined4 local_284;
  undefined4 local_280;
  undefined1 auStack_27c [8];
  undefined4 local_274;
  undefined4 local_270;
  undefined1 auStack_26c [8];
  undefined1 auStack_264 [8];
  undefined4 *local_25c;
  undefined4 local_258;
  int local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined1 auStack_248 [8];
  int local_240;
  int local_23c;
  int local_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [8];
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined1 auStack_1d0 [8];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  int *local_50;
  
  local_544 = local_508;
  puVar8 = &local_3b0;
  local_508[0] = 0;
  local_548 = 0x3c;
  local_510 = auStack_368;
  sStack0000001e = param_2;
  FUN_10001bd8(_DAT_28030000 + 0x32,&local_548);
  FUN_100db2f4();
  local_320 = local_528 < 0x300000;
  FUN_100b08d4(&local_398,*(int *)(local_56c + -0xb0) + 0x56);
  if (local_528 < 0x300000) {
    if (0x280 < local_396) {
      local_396 = 0x280;
    }
    if (0x1e0 < local_398) {
      local_398 = 0x1e0;
    }
  }
  uVar15 = (uint)local_396;
  uVar12 = (uint)(0x27f < uVar15);
  local_31f = (0x27f < uVar15) - (!CARRY4(uVar15,uVar12) && !CARRY4(uVar15,uVar15 + uVar12)) & 1;
  local_31c = *(undefined4 *)(**(int **)(local_56c + -0x554) + 0x88);
  local_318 = 0;
  local_314 = 0;
  local_310 = 0;
  local_30c = 0;
  local_3e0 = 0;
  local_3dc = 0;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3c8 = 0;
  local_3c4 = 0;
  local_3c0 = 0;
  local_3bc = 0;
  local_3f0 = 0;
  local_3ec = 0;
  local_3e8 = 0;
  local_3e4 = 0;
  FUN_100981f8(auStack_308,0x80);
  piVar1 = (int *)FUN_10098320(auStack_308,0x57696e64,1000);
  uVar12 = (uint)(piVar1 != (int *)0x0);
  local_2b8 = '\x01';
  local_2b7 = '\x01';
  local_2b6 = '\x01';
  if (piVar1 == (int *)0x0) goto LAB_1003e634;
  local_3f8 = piVar1;
  local_3f4 = FUN_10000360(piVar1);
  FUN_10002598(local_3f8);
  iVar11 = *piVar1;
  local_318 = *(undefined4 *)(iVar11 + 8);
  local_314 = *(undefined4 *)(iVar11 + 0xc);
  local_310 = *(undefined4 *)(iVar11 + 0x10);
  local_30c = *(undefined4 *)(iVar11 + 0x14);
  iVar11 = *piVar1;
  local_3e0 = *(undefined4 *)(iVar11 + 0x18);
  local_3dc = *(undefined4 *)(iVar11 + 0x1c);
  local_3d8 = *(undefined4 *)(iVar11 + 0x20);
  local_3d4 = *(undefined4 *)(iVar11 + 0x24);
  iVar11 = *piVar1;
  local_2b8 = *(char *)(iVar11 + 0x28);
  local_3c8 = *(undefined4 *)(iVar11 + 0x2c);
  local_3c4 = *(undefined4 *)(iVar11 + 0x30);
  local_3c0 = *(undefined4 *)(iVar11 + 0x34);
  local_3bc = *(undefined4 *)(iVar11 + 0x38);
  iVar11 = *piVar1;
  local_2b6 = *(char *)(iVar11 + 0x3c);
  local_3f0 = *(undefined4 *)(iVar11 + 0x40);
  local_3ec = *(undefined4 *)(iVar11 + 0x44);
  local_3e8 = *(undefined4 *)(iVar11 + 0x48);
  local_3e4 = *(undefined4 *)(iVar11 + 0x4c);
  local_2b7 = *(char *)(*piVar1 + 0x50);
  piVar2 = (int *)FUN_10001ef0();
  uVar15 = uVar12;
  if ((*(char *)*piVar1 != '\0') && (*(int *)(*piVar2 + 0x1e) == 0)) {
    FUN_100b08d4(auStack_2b4,*(int *)(local_56c + -0xb0) + 0x56);
    uVar15 = FUN_100b04f0(*piVar1 + 2,auStack_2b4);
  }
  uVar12 = 0;
  if (uVar15 != 0) {
    local_2ac = FUN_10003360();
    local_2a8 = &local_318;
    puVar3 = &local_3a8;
    if ((&local_3a8 != (undefined4 *)0x0) ||
       (puVar3 = (undefined4 *)FUN_100f56e4(0x10), puVar3 != (undefined4 *)0x0)) {
      puVar10 = local_2a8;
      *puVar3 = *local_2a8;
      puVar3[1] = puVar10[1];
      puVar3[2] = puVar10[2];
      puVar3[3] = puVar10[3];
    }
    local_2a4 = 3;
    local_2a0 = 3;
    FUN_100e16b8(&local_3a8);
    if (uVar15 == 0) {
LAB_1003e4ac:
      bVar14 = false;
    }
    else {
      FUN_100e12b8(&local_3a8);
      uVar4 = FUN_100b0578(auStack_29c);
      iVar11 = FUN_10001e60(uVar4,local_2ac);
      if (iVar11 == 0) goto LAB_1003e4ac;
      bVar14 = true;
    }
    local_3a8 = local_3e0;
    local_3a4 = local_3dc;
    local_3a0 = local_3d8;
    local_39c = local_3d4;
    local_294 = 3;
    local_290 = 3;
    FUN_100e16b8(&local_3a8);
    if (bVar14) {
      FUN_100e12b8(&local_3a8);
      uVar4 = FUN_100b0578(auStack_28c);
      iVar11 = FUN_10001e60(uVar4,local_2ac);
      if (iVar11 == 0) goto LAB_1003e51c;
      bVar14 = true;
    }
    else {
LAB_1003e51c:
      bVar14 = false;
    }
    local_3a8 = local_3c8;
    local_3a4 = local_3c4;
    local_3a0 = local_3c0;
    local_39c = local_3bc;
    local_284 = 3;
    local_280 = 3;
    FUN_100e16b8(&local_3a8);
    if (bVar14) {
      FUN_100e12b8(&local_3a8);
      uVar4 = FUN_100b0578(auStack_27c);
      iVar11 = FUN_10001e60(uVar4,local_2ac);
      if (iVar11 == 0) goto LAB_1003e58c;
      bVar14 = true;
    }
    else {
LAB_1003e58c:
      bVar14 = false;
    }
    local_3a8 = local_3f0;
    local_3a4 = local_3ec;
    local_3a0 = local_3e8;
    local_39c = local_3e4;
    local_274 = 3;
    local_270 = 3;
    FUN_100e16b8(&local_3a8);
    if (bVar14) {
      FUN_100e12b8(&local_3a8);
      uVar4 = FUN_100b0578(auStack_26c);
      iVar11 = FUN_10001e60(uVar4,local_2ac);
      if (iVar11 != 0) {
        uVar12 = 1;
        goto LAB_1003e604;
      }
    }
    uVar12 = 0;
  }
LAB_1003e604:
  if (&stack0x00000000 != (undefined1 *)0x3f8) {
    FUN_10001b60(local_3f8,(int)local_3f4);
  }
LAB_1003e634:
  FUN_100ef510(piVar1);
  if (local_320 == '\0') {
    sVar13 = 0;
  }
  else {
    sVar13 = 10;
  }
  uVar4 = FUN_10117884(**(int **)(local_56c + -0x1e4) +
                       (int)*(short *)(*(int *)**(int **)(local_56c + -0x1e4) + 200),sVar13 + 0x3ea,
                       local_31c);
  **(undefined4 **)(local_56c + -0x1504) = uVar4;
  FUN_100db26c();
  if (local_31f == 0) {
    iVar11 = 0xe0;
  }
  else {
    iVar11 = 0x70;
  }
  iVar9 = (int)local_396;
  iVar16 = (iVar9 - iVar11) + -3;
  local_390 = 0x9c;
  local_38c = 0x70;
  local_3b0 = 0x138;
  local_3ac = 0xe0;
  uVar4 = **(undefined4 **)(local_56c + -0x1504);
  if (uVar12 == 0) {
    local_258 = *(undefined4 *)(**(int **)(local_56c + -0x1504) + 0x2c);
    if ((local_320 == '\0') && (local_31f == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    puVar3 = puVar8;
    if (bVar14) {
      puVar3 = &local_390;
    }
    if ((local_320 == '\0') && (local_31f == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    puVar10 = &local_390;
    if (bVar14) {
      puVar10 = puVar8;
    }
    local_254 = iVar16;
    FUN_1007723c(uVar4,&local_258,puVar3,puVar10,0);
  }
  else {
    FUN_100e1a64(auStack_264,&local_3e0);
    iVar5 = FUN_100e11fc(&local_390,auStack_264);
    if (local_320 != '\0') {
      iVar5 = 1;
    }
    puVar3 = puVar8;
    local_25c = &local_390;
    if (iVar5 != 0) {
      puVar3 = &local_390;
      local_25c = puVar8;
    }
    uVar6 = FUN_100e1580(&local_3e0,0);
    FUN_1007723c(uVar4,uVar6,puVar3,local_25c,0);
  }
  uVar4 = FUN_10117884(**(int **)(local_56c + -0x1504) +
                       (int)*(short *)(*(int *)**(int **)(local_56c + -0x1504) + 0x308),0x6f766572);
  **(undefined4 **)(local_56c + -0x169c) = uVar4;
  FUN_100db26c();
  iVar5 = FUN_10117884(**(int **)(local_56c + -0x1e4) +
                       (int)*(short *)(*(int *)**(int **)(local_56c + -0x1e4) + 200),0x3ec,local_31c
                      );
  piVar1 = *(int **)(local_56c + -0x16a0);
  *piVar1 = iVar5;
  FUN_100db26c();
  local_250 = 0x27;
  local_24c = 0x70;
  local_390 = 0x27;
  local_38c = 0x70;
  iVar5 = *piVar1;
  local_3b0 = *(undefined4 *)(iVar5 + 0x34);
  local_3ac = *(undefined4 *)(iVar5 + 0x38);
  if (uVar12 == 0) {
    if (local_31f == 0) {
      sVar13 = (short)*(undefined4 *)(**(int **)(local_56c + -0x16a0) + 0x2c);
    }
    else {
      sVar13 = (short)*(undefined4 *)(**(int **)(local_56c + -0x1504) + 0x2c) +
               (short)*(undefined4 *)(**(int **)(local_56c + -0x1504) + 0x34) + 0x10;
    }
    local_240 = (int)sVar13;
    puVar3 = &local_390;
    if (local_398 < 0x1e0) {
      puVar3 = puVar8;
      puVar8 = &local_390;
    }
    local_23c = iVar16;
    FUN_1007723c(iVar5,&local_240,puVar8,puVar3,0);
  }
  else {
    FUN_100e1a64(auStack_248,&local_3f0);
    iVar7 = FUN_100e11fc(&local_390,auStack_248);
    puVar3 = &local_390;
    if (iVar7 != 0) {
      puVar3 = puVar8;
      puVar8 = &local_390;
    }
    uVar4 = FUN_100e1580(&local_3f0,0);
    FUN_1007723c(iVar5,uVar4,puVar8,puVar3,0);
  }
  iVar5 = FUN_10117884(**(int **)(local_56c + -0x1e4) +
                       (int)*(short *)(*(int *)**(int **)(local_56c + -0x1e4) + 200),0x3eb,local_31c
                      );
  piVar1 = *(int **)(local_56c + -0x18fc);
  *piVar1 = iVar5;
  FUN_100db26c();
  iVar7 = *(int *)(**(int **)(local_56c + -0x16a0) + 0x2c) +
          *(int *)(**(int **)(local_56c + -0x16a0) + 0x34);
  iVar17 = iVar7 + 0x10;
  iVar5 = *piVar1;
  local_228 = *(undefined4 *)(iVar5 + 0x34);
  uStack_224 = *(undefined4 *)(iVar5 + 0x38);
  local_3d0 = 0x81;
  local_3cc = 0xe0;
  local_3b8 = 0x78;
  local_3b4 = 0x70;
  local_388 = iVar17;
  local_384 = iVar16;
  if (uVar12 == 0) {
    if (local_31f == 0) {
      if (iVar7 + 3 < ((int)local_398 - *(int *)(**(int **)(local_56c + -0x18fc) + 0x34)) + -4) {
        FUN_100e10b0(&local_f0,&local_388,&local_3d0);
        local_e8 = local_388;
        local_e4 = local_384;
        local_e0 = local_f0;
        local_dc = local_ec;
        local_380 = local_388;
        local_37c = local_384;
        local_378 = local_f0;
        iStack_374 = local_ec;
        uVar4 = FUN_100e1580(&local_380,1);
        FUN_100e10f8(&local_d8,uVar4,&local_3b8);
        piVar1 = (int *)FUN_100e1580(&local_380,1);
        local_d0 = local_d8;
        local_cc = local_d4;
        iStack_400 = *piVar1;
        iStack_3fc = piVar1[1];
        local_408 = local_d8;
        iStack_404 = local_d4;
        local_c8 = iStack_400;
        local_c4 = iStack_3fc;
        uVar4 = FUN_100e1580(&local_380,1);
        FUN_100e10f8(&local_c0,uVar4,&local_228);
        piVar1 = (int *)FUN_100e1580(&local_380,1);
        local_b8 = local_c0;
        local_b4 = local_bc;
        iStack_230 = *piVar1;
        iStack_22c = piVar1[1];
        local_238 = local_c0;
        iStack_234 = local_bc;
        iVar17 = local_398 + 0xd;
        local_b0 = iStack_230;
        local_ac = iStack_22c;
      }
      else {
        iVar17 = ((int)local_398 - *(int *)(**(int **)(local_56c + -0x18fc) + 0x34)) + -4;
        local_384 = *(int *)(**(int **)(local_56c + -0x18fc) + 0x30);
        local_388 = iVar17;
        local_a8 = iVar17;
        local_a4 = local_384;
        FUN_100e10b0(&local_a0,&local_388,&local_228);
        local_98 = local_388;
        local_94 = local_384;
        local_90 = local_a0;
        local_8c = local_9c;
        local_380 = local_388;
        local_37c = local_384;
        local_378 = local_a0;
        iStack_374 = local_9c;
        local_408 = local_a0 - local_3d0;
        iStack_3fc = local_384 + local_3cc;
        local_84 = local_384;
        local_80 = local_a0;
        iStack_404 = local_384;
        iStack_400 = local_a0;
        local_238 = local_a0 - local_3b8;
        iStack_22c = local_384 + local_3b4;
        local_74 = local_384;
        local_70 = local_a0;
        iStack_234 = local_384;
        iStack_230 = local_a0;
        local_88 = local_408;
        local_7c = iStack_3fc;
        local_78 = local_238;
        local_6c = iStack_22c;
      }
    }
    else {
      FUN_100e10b0(&local_138,&local_388,&local_3b8,0x70,&local_238);
      local_130 = local_388;
      local_12c = local_384;
      local_128 = local_138;
      local_124 = local_134;
      local_380 = local_388;
      local_37c = local_384;
      local_378 = local_138;
      iStack_374 = local_134;
      uVar4 = FUN_100e1580(&local_380,1);
      FUN_100e10f8(&local_120,uVar4,&local_228);
      piVar1 = (int *)FUN_100e1580(&local_380,1);
      local_118 = local_120;
      local_114 = local_11c;
      iStack_400 = *piVar1;
      iStack_3fc = piVar1[1];
      local_408 = local_120;
      iStack_404 = local_11c;
      local_110 = iStack_400;
      local_10c = iStack_3fc;
      uVar4 = FUN_100e1580(&local_380,1);
      FUN_100e10f8(&local_108,uVar4,&local_3d0);
      piVar1 = (int *)FUN_100e1580(&local_380,1);
      local_100 = local_108;
      local_fc = local_104;
      iStack_230 = *piVar1;
      iStack_22c = piVar1[1];
      local_238 = local_108;
      iStack_234 = local_104;
      iVar17 = local_398 + 0xd;
      local_f8 = iStack_230;
      local_f4 = iStack_22c;
    }
  }
  else {
    piVar1 = (int *)FUN_100e1580(&local_3c8,0);
    local_370 = *piVar1;
    local_36c = piVar1[1];
    FUN_100e1a64(auStack_220,&local_3c8);
    iVar16 = FUN_100e11fc(&local_228,auStack_220);
    if (iVar16 == 0) {
      FUN_100e1a64(auStack_1d0,&local_3c8);
      iVar16 = FUN_100e11fc(&local_3d0,auStack_1d0);
      if (iVar16 == 0) {
        FUN_100e10b0(&local_180,&local_370,&local_3b8);
        local_178 = local_370;
        local_174 = local_36c;
        local_170 = local_180;
        local_16c = local_17c;
        local_380 = local_370;
        local_37c = local_36c;
        local_378 = local_180;
        iStack_374 = local_17c;
        FUN_100e10b0(&local_168,&local_370,&local_228);
        local_160 = local_370;
        local_15c = local_36c;
        local_158 = local_168;
        local_154 = local_164;
        local_408 = local_370;
        iStack_404 = local_36c;
        iStack_400 = local_168;
        iStack_3fc = local_164;
        FUN_100e10b0(&local_150,&local_370,&local_3b8);
        local_148 = local_370;
        local_144 = local_36c;
        local_140 = local_150;
        local_13c = local_14c;
        local_238 = local_370;
        iStack_234 = local_36c;
        iStack_230 = local_150;
        iStack_22c = local_14c;
      }
      else {
        FUN_100e10b0(&local_1c8,&local_370,&local_3d0);
        local_1c0 = local_370;
        local_1bc = local_36c;
        local_1b8 = local_1c8;
        local_1b4 = local_1c4;
        local_380 = local_370;
        local_37c = local_36c;
        local_378 = local_1c8;
        iStack_374 = local_1c4;
        FUN_100e10b0(&local_1b0,&local_370,&local_3b8);
        local_1a8 = local_370;
        local_1a4 = local_36c;
        local_1a0 = local_1b0;
        local_19c = local_1ac;
        local_408 = local_370;
        iStack_404 = local_36c;
        iStack_400 = local_1b0;
        iStack_3fc = local_1ac;
        FUN_100e10b0(&local_198,&local_370,&local_228);
        local_190 = local_370;
        local_18c = local_36c;
        local_188 = local_198;
        local_184 = local_194;
        local_238 = local_370;
        iStack_234 = local_36c;
        iStack_230 = local_198;
        iStack_22c = local_194;
      }
    }
    else {
      FUN_100e10b0(&local_218,&local_370,&local_228);
      local_210 = local_370;
      local_20c = local_36c;
      local_208 = local_218;
      local_204 = local_214;
      local_380 = local_370;
      local_37c = local_36c;
      local_378 = local_218;
      iStack_374 = local_214;
      FUN_100e10b0(&local_200,&local_370,&local_3d0);
      local_1f8 = local_370;
      local_1f4 = local_36c;
      local_1f0 = local_200;
      local_1ec = local_1fc;
      local_408 = local_370;
      iStack_404 = local_36c;
      iStack_400 = local_200;
      iStack_3fc = local_1fc;
      FUN_100e10b0(&local_1e8,&local_370,&local_3b8);
      local_1e0 = local_370;
      local_1dc = local_36c;
      local_1d8 = local_1e8;
      local_1d4 = local_1e4;
      local_238 = local_370;
      iStack_234 = local_36c;
      iStack_230 = local_1e8;
      iStack_22c = local_1e4;
    }
  }
  piVar1 = (int *)**(undefined4 **)(local_56c + -0x18fc);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x350),&local_380,0);
  piVar1[0x32] = local_380;
  piVar1[0x33] = local_37c;
  piVar1[0x34] = local_378;
  piVar1[0x35] = iStack_374;
  piVar1[0x36] = local_408;
  piVar1[0x37] = iStack_404;
  piVar1[0x38] = iStack_400;
  piVar1[0x39] = iStack_3fc;
  piVar1[0x3a] = local_238;
  piVar1[0x3b] = iStack_234;
  piVar1[0x3c] = iStack_230;
  piVar1[0x3d] = iStack_22c;
  _DAT_80410014 =
       (int *)FUN_10117884(**(int **)(local_56c + -0x1e4) +
                           (int)*(short *)(*(int *)**(int **)(local_56c + -0x1e4) + 200),0x3e9,
                           local_31c);
  FUN_100db26c();
  if (uVar12 == 0) {
    local_64 = (iVar9 - iVar11) + -9;
    local_68 = (iVar17 - _DAT_80410014[0xb]) + -0x10;
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x378),&local_68,0);
  }
  else {
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x350),&local_318,0);
  }
  piVar1 = _DAT_80410014;
  if (local_320 != '\0') {
    iVar11 = *_DAT_80410014;
    puVar8 = (undefined4 *)FUN_100e0f78(auStack_60,_DAT_80410014 + 0xd);
    puVar3 = (undefined4 *)FUN_100e0f78(auStack_58,piVar1 + 0xd);
    FUN_10117884((int)piVar1 + (int)*(short *)(iVar11 + 0x7c8),*puVar3,*puVar8);
  }
  iVar11 = FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),0x6d617020);
  piVar1 = *(int **)(local_56c + -0x14f4);
  *piVar1 = iVar11;
  FUN_100db26c();
  iVar11 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x5f0),1);
  if (iVar11 != 0) {
    *(undefined1 *)(*(int *)(iVar11 + 0x90) + 0x48) = 0;
    *(undefined1 *)(*(int *)(iVar11 + 0x90) + 0x49) = 0;
    *(undefined1 *)(*(int *)(iVar11 + 0x94) + 0x48) = 0;
    *(undefined1 *)(*(int *)(iVar11 + 0x94) + 0x49) = 0;
  }
  iVar11 = 0;
  piVar2 = *(int **)(local_56c + -0x554);
  local_50 = piVar1;
  do {
    FUN_10075ee0(*piVar2,iVar11,(int)*(short *)(*piVar2 + iVar11 * 2 + 0x8c));
    iVar11 = (int)(short)((short)iVar11 + 1);
  } while (iVar11 < 4);
  if (sStack0000001e != 0) {
    FUN_1003c838();
    FUN_1003d4dc();
    FUN_10064850(1,1);
    FUN_1003c368();
  }
  FUN_1003d5d4();
  if ((uVar12 == 0) || (local_2b8 != '\0')) {
    piVar1 = *(int **)(local_56c + -0x1504);
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 800));
    *(undefined1 *)(*piVar1 + 0xa4) = 1;
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4d0));
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
  }
  if ((uVar12 == 0) || (local_2b6 != '\0')) {
    piVar1 = *(int **)(local_56c + -0x18fc);
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 800));
    *(undefined1 *)(*piVar1 + 0xa4) = 1;
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4d0));
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
  }
  if ((uVar12 == 0) || (local_2b7 != '\0')) {
    piVar1 = *(int **)(local_56c + -0x16a0);
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 800));
    *(undefined1 *)(*piVar1 + 0xa4) = 1;
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4d0));
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
  }
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 800));
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4d0));
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x780));
  FUN_10117884(**(int **)(local_56c + -0xedc) +
               (int)*(short *)(*(int *)**(int **)(local_56c + -0xedc) + 0x338),_DAT_80410014[0x26]);
  **(undefined2 **)(local_56c + -0x1bc0) = 1;
  FUN_1003d6c4();
  FUN_1003dc28();
  if (sStack0000001e != 0) {
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4d0));
    FUN_1003e0b0();
    if (*(short *)(**(int **)(local_56c + -0x544) + 0x124) == 0) {
      FUN_10060608(1,1,0);
      FUN_10007f78();
    }
    else {
      piVar1 = *(int **)(local_56c + -0x14f4);
      *(undefined1 *)(*piVar1 + 0xbe) = 1;
      FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4d0));
      FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
    }
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
    iVar11 = **(int **)(local_56c + -0x554);
    *(undefined1 *)(iVar11 + 0x9a) = 1;
    uVar4 = FUN_10001a88();
    *(undefined4 *)(iVar11 + 0x9c) = uVar4;
  }
  FUN_100982e8(auStack_308,2);
  return;
}



// Function: FUN_1003f674 at 1003f674
// Size: 116 bytes

void FUN_1003f674(short param_1,short param_2,short param_3)

{
  FUN_1003dc28();
  if (param_1 != 0) {
    FUN_10007f78();
  }
  if (param_2 != 0) {
    FUN_10060608(1,1,0);
  }
  if (param_3 != 0) {
    FUN_1005cc8c();
  }
  return;
}



// Function: FUN_1003f6e8 at 1003f6e8
// Size: 1660 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f6e8(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  char cVar10;
  undefined4 uVar8;
  ushort uVar9;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  bVar14 = _DAT_817f0000 != (short *)0x0;
  uVar11 = 0;
  sVar4 = 0;
  bVar2 = false;
  if (bVar14) {
    sVar5 = *_DAT_817f0000;
  }
  else {
    sVar5 = 0;
  }
  iVar13 = (int)sVar5;
  if (bVar14) {
    sVar5 = _DAT_817f0000[1];
  }
  else {
    sVar5 = 0;
  }
  iVar12 = (int)sVar5;
  cVar1 = *(char *)(_DAT_4bffe775 + (*(uint *)(_DAT_38800000 + iVar12 * 0xe0 + iVar13 * 2) >> 0x18)
                   + 0x711);
  if (bVar14) {
    cVar10 = *(char *)(_DAT_817f0000 + 2);
  }
  else {
    cVar10 = -1;
  }
  sVar5 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar5 != 0) {
    do {
      sVar5 = sVar5 + -1;
      iVar6 = _DAT_60000000 + sVar5 * 0x16;
      if ((*(char *)(iVar6 + 4) == '\x1c') &&
         ((int)*(char *)(iVar6 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110))) {
        uVar11 = 1;
        break;
      }
    } while (sVar5 != 0);
  }
  if ((cVar1 == '\v') && (iVar6 = 0, 0 < *(short *)(_DAT_4bffe775 + 0x810))) {
    do {
      iVar7 = _DAT_4bffe775 + iVar6 * 0x20;
      if ((*(short *)(iVar7 + 0x812) == iVar13) && (*(short *)(iVar7 + 0x814) == iVar12)) {
        uVar3 = (uint)*(char *)(iVar7 + 0x82a);
        sVar4 = (1 - ((1 < uVar3) + 1)) + (ushort)(uVar3 != 0 && (uint)(1 < uVar3) <= uVar3 - 1);
        bVar2 = true;
        break;
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  FUN_10075570(_DAT_57c407bd,0x583,1);
  FUN_10075570(_DAT_57c407bd,0x584,bVar14);
  if ((bVar14) && (cVar1 == '\t')) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_10075570(_DAT_57c407bd,0x585,uVar8);
  FUN_10075570(_DAT_57c407bd,0x586,
               *(ushort *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) & 0xff);
  FUN_10075570(_DAT_57c407bd,0x5dc,1);
  FUN_10075570(_DAT_57c407bd,0x5dd,1);
  FUN_10075570(_DAT_57c407bd,0x5de,1);
  FUN_10075570(_DAT_57c407bd,0x5df,1);
  FUN_10075570(_DAT_57c407bd,0x5e0,1);
  FUN_10075570(_DAT_57c407bd,0x5e1,1);
  FUN_10075570(_DAT_57c407bd,0x5e2,*(ushort *)(_DAT_4bffe775 + 0x11c) & 0xff);
  FUN_10075570(_DAT_57c407bd,0x5e3,*(ushort *)(_DAT_4bffe775 + 0x11e) & 0xff);
  FUN_10075570(_DAT_57c407bd,0x640,uVar11);
  if (((((bVar14) && (cVar10 == '\x1c')) &&
       (iVar6 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x1e,
       *(char *)(iVar6 + 0xd28) == '\x03')) &&
      ((((short *)(_DAT_60000000 + *(short *)(iVar6 + 0xd2a) * 0x16) == _DAT_817f0000 &&
        ((*(uint *)(_DAT_807f0004 + iVar12 * 0x70 + iVar13) >> 0x1e & 1) == 0)) &&
       ((cVar1 != '\n' && ((cVar1 != '\v' && (cVar1 != '\x02')))))))) && (cVar1 != '\x03')) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_10075570(_DAT_57c407bd,0x641,uVar8);
  FUN_10075570(_DAT_57c407bd,0x642,uVar11);
  if (((bVar2) && (bVar14)) &&
     (((cVar10 == '\x1c' || (sVar4 != 0)) &&
      (((cVar1 == '\v' && ((*(uint *)(_DAT_38800000 + iVar12 * 0xe0 + iVar13 * 2) >> 0x16 & 1) == 0)
        ) && ('\0' < *(char *)((int)_DAT_817f0000 + 7))))))) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  FUN_10075570(_DAT_57c407bd,0x643,uVar11);
  FUN_10075570(_DAT_57c407bd,0x6a4,1);
  FUN_10075570(_DAT_57c407bd,0x6a5,1);
  FUN_10075570(_DAT_57c407bd,0x6a6,1);
  FUN_10075570(_DAT_57c407bd,0x6a7,
               (-1 - *(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2)) +
               (uint)(*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) == 0) >>
               0x1f);
  FUN_10075570(_DAT_57c407bd,0x6a8,
               (-1 - *(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2)) +
               (uint)(*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) == 0) >>
               0x1f);
  FUN_10075570(_DAT_57c407bd,0x6a9,
               (-1 - *(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2)) +
               (uint)(*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) == 0) >>
               0x1f);
  iVar13 = FUN_1002c200(0,0,1);
  iVar12 = -iVar13 + -1;
  FUN_10075570(_DAT_57c407bd,0x6aa,iVar12 + (-(uint)(iVar12 == 0) - (-iVar13 + -2)) & 0xff);
  FUN_10075570(_DAT_57c407bd,0x6ab,bVar14);
  uVar9 = *(ushort *)(_DAT_4bffe775 + 0x136);
  if ((short)uVar9 < 2) {
    uVar9 = 1;
  }
  bVar2 = (ushort)(uVar9 < 2) == (short)uVar9 >> 0x1f;
  FUN_10075570(_DAT_57c407bd,0x708,bVar2);
  FUN_10075570(_DAT_57c407bd,0x709,bVar2);
  FUN_10075570(_DAT_57c407bd,0x70a,bVar2);
  FUN_10075570(_DAT_57c407bd,0x70b,bVar2);
  FUN_10075570(_DAT_57c407bd,0x70c,bVar2);
  FUN_10075570(_DAT_57c407bd,0x70d,bVar2);
  if ((*(char *)(*(int *)(_DAT_57c407bd + 0x88) + 0x144) == '\0') ||
     (*(short *)(_DAT_4bffe775 + 0x15c) != 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  FUN_10075570(_DAT_57c407bd,0x76c,uVar11);
  FUN_10075570(_DAT_57c407bd,0x773,uVar11);
  FUN_1003dc28();
  return;
}



// Function: FUN_1003fd64 at 1003fd64
// Size: 44 bytes

void FUN_1003fd64(void)

{
  FUN_10055f30();
  FUN_1003dc28();
  return;
}



// Function: FUN_1003fd90 at 1003fd90
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fd90(void)

{
  if (_DAT_817f0000 == 0) {
    FUN_10055f30();
  }
  else {
    FUN_1005638c();
  }
  FUN_1003dc28();
  return;
}



// Function: FUN_1003fdd8 at 1003fdd8
// Size: 44 bytes

void FUN_1003fdd8(void)

{
  FUN_1005641c();
  FUN_1003dc28();
  return;
}



// Function: FUN_1003fe04 at 1003fe04
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fe04(void)

{
  if (_DAT_817f0000 != (short *)0x0) {
    FUN_1000848c((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
    FUN_1003dc28();
  }
  return;
}



// Function: FUN_1003fe5c at 1003fe5c
// Size: 56 bytes

void FUN_1003fe5c(void)

{
  FUN_100219a8(1,1,1);
  FUN_1003dc28();
  return;
}



// Function: FUN_1003fe94 at 1003fe94
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fe94(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_817f0000 != (short *)0x0) {
    if ((_DAT_817f0000[9] < 0) || (_DAT_817f0000[10] < 0)) {
      if (_DAT_817f0000 != (short *)0x0) {
        FUN_1000848c((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
      }
    }
    else {
      iVar1 = (int)*_DAT_817f0000;
      if ((((iVar1 < *(short *)(_DAT_4bffe775 + 0x178)) ||
           (*(short *)(_DAT_4bffe775 + 0x17c) < iVar1)) ||
          (iVar2 = (int)_DAT_817f0000[1], iVar2 < *(short *)(_DAT_4bffe775 + 0x176))) ||
         (*(short *)(_DAT_4bffe775 + 0x17a) < iVar2)) {
        FUN_1000848c((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
      }
      else if ((*(short *)(_DAT_4bffe775 + 0x17e) == _DAT_817f0000[9]) &&
              (*(short *)(_DAT_4bffe775 + 0x180) == _DAT_817f0000[10])) {
        FUN_1000848c(iVar1,iVar2);
      }
      else {
        FUN_1000848c((int)_DAT_817f0000[9],(int)_DAT_817f0000[10]);
      }
    }
  }
  FUN_1003dc28();
  return;
}



// Function: FUN_1003ffa8 at 1003ffa8
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ffa8(void)

{
  int iVar1;
  
  if (((_DAT_817f0000 != 0) && (-1 < *(short *)(_DAT_817f0000 + 0x12))) &&
     (-1 < *(short *)(_DAT_817f0000 + 0x14))) {
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_409e0034 + iVar1 * 4) != 0) {
        *(undefined2 *)(*(int *)(&DAT_409e0034 + iVar1 * 4) + 0x12) = 0xffff;
        *(undefined2 *)(*(int *)(&DAT_409e0034 + iVar1 * 4) + 0x14) = 0xffff;
      }
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 8);
    _DAT_38a00001 = 0;
    FUN_10007f78();
  }
  FUN_1003dc28();
  return;
}



// Function: FUN_10040040 at 10040040
// Size: 636 bytes

/* WARNING: Removing unreachable block (ram,0x10040278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040040(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int local_154;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_57c407bd + (int)*(short *)(*_DAT_57c407bd + 0x328));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
  }
  piVar1 = (int *)**(undefined4 **)(local_154 + -0x1698);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
  }
  piVar1 = (int *)**(undefined4 **)(local_154 + -0x1504);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
  }
  piVar1 = (int *)**(undefined4 **)(local_154 + -0x18fc);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
  }
  piVar1 = (int *)**(undefined4 **)(local_154 + -0x16a0);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
  }
  FUN_1005f738(param_1);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    piVar1 = (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),0x406
                                 ,_DAT_57c407bd[0x22]);
    FUN_100db26c();
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x67667820);
    FUN_100db26c();
    FUN_10001e78(iVar2 + 0x80,param_1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 800));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x810));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    _DAT_41820010 = local_24;
  }
  else {
    FUN_100db158((int)local_2c,local_28);
  }
  return;
}



// Function: FUN_100402bc at 100402bc
// Size: 36 bytes

void FUN_100402bc(void)

{
  FUN_10040040();
  return;
}



// Function: FUN_100402e0 at 100402e0
// Size: 84 bytes

void FUN_100402e0(void)

{
  FUN_100402bc(0x6124000c);
  FUN_100402bc(0x6124001c);
  FUN_100402bc(0x6124002c);
  FUN_1003dc28();
  return;
}



// Function: FUN_10040334 at 10040334
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040334(void)

{
  int iVar1;
  undefined4 local_24;
  
  iVar1 = FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x308),0x696e666f);
  if (iVar1 != 0) {
    FUN_10080cf0(iVar1,(int)*(short *)(**(int **)(local_24 + -0x544) + 0x110));
  }
  return;
}



// Function: FUN_1004039c at 1004039c
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004039c(short param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x308),0x696e666f);
  if (iVar1 != 0) {
    FUN_10080fe4(iVar1,(int)param_1);
  }
  return;
}



// Function: FUN_10040408 at 10040408
// Size: 852 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040408(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined1 auStack_738 [256];
  undefined1 auStack_638 [256];
  undefined1 auStack_538 [256];
  undefined1 auStack_438 [256];
  undefined1 auStack_338 [256];
  undefined1 auStack_238 [512];
  
  piVar1 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                               0x73747231);
  if (piVar1 != (int *)0x0) {
    FUN_100b19f4(auStack_238,param_2);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_238,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                               0x73747232);
  if (piVar1 != (int *)0x0) {
    FUN_100b19f4(auStack_338,param_3);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_338,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                               0x73747233);
  if (piVar1 != (int *)0x0) {
    FUN_100b19f4(auStack_438,param_4);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_438,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                               0x73747234);
  if (piVar1 != (int *)0x0) {
    FUN_100b19f4(auStack_538,param_5);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_538,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                               0x73747235);
  if (piVar1 != (int *)0x0) {
    FUN_100b19f4(auStack_638,param_6);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_638,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x308),
                               0x73747236);
  if (piVar1 != (int *)0x0) {
    FUN_100b19f4(auStack_738,param_7);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_738,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  }
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
  return;
}



// Function: FUN_10040788 at 10040788
// Size: 424 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040788(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 local_24;
  
  _DAT_4beeb7d5 = (ushort)(_DAT_80410014 != (int *)0x0);
  if (_DAT_4beeb7d5 == 0) {
    FUN_10075894(_DAT_57c407bd);
    piVar1 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x3f2,
                                 *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
    _DAT_80410014 = piVar1;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 800));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
    _DAT_4beeb7d5 = 1;
  }
  uVar2 = FUN_1005f678(0x8b,6);
  uVar3 = FUN_1005f678(0x8b,5);
  uVar4 = FUN_1005f678(0x8b,4);
  uVar5 = FUN_1005f678(0x8b,3);
  uVar6 = FUN_1005f678(0x8b,2);
  uVar7 = FUN_1005f678(0x8b,1);
  uVar8 = FUN_1005f678(0x8b,0);
  FUN_10040408(uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  local_28 = 0xca;
  local_24 = 0x3c;
  FUN_100513b4(_DAT_80410014,&local_28,0x3f3);
  FUN_100514d8(_DAT_80410014,0);
  return;
}



// Function: FUN_10040930 at 10040930
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040930(void)

{
  if (_DAT_4beeb7d5 != 0) {
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x738));
    _DAT_80410014 = (int *)0x0;
    _DAT_4beeb7d5 = 0;
  }
  return;
}



// Function: FUN_1004099c at 1004099c
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004099c(short param_1)

{
  FUN_100514d8(_DAT_80410014,(int)param_1);
  return;
}



// Function: FUN_100409d0 at 100409d0
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100409d0(void)

{
  int iVar1;
  
  FUN_100095fc();
  *(undefined2 *)(_DAT_4bffe775 + 0x124) = 0;
  FUN_1003f674(1,1,1);
  iVar1 = *(int *)(_DAT_57c407bd + 0x88);
  *(undefined2 *)(iVar1 + 0x1dc) = 0;
  FUN_1007c714(iVar1,0x3ef);
  return;
}



// Function: FUN_10040a38 at 10040a38
// Size: 496 bytes

/* WARNING: Removing unreachable block (ram,0x10040bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a38(void)

{
  int iVar1;
  int *piVar2;
  int local_14c;
  undefined1 auStack_124 [256];
  short local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
  FUN_10117884(**(int **)(local_14c + -0x1504) +
               (int)*(short *)(*(int *)**(int **)(local_14c + -0x1504) + 0x4c8));
  FUN_10117884(**(int **)(local_14c + -0x18fc) +
               (int)*(short *)(*(int *)**(int **)(local_14c + -0x18fc) + 0x4c8));
  FUN_10117884(**(int **)(local_14c + -0x16a0) +
               (int)*(short *)(*(int *)**(int **)(local_14c + -0x16a0) + 0x4c8));
  FUN_10092484(3);
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = _DAT_41820010;
  _DAT_41820010 = auStack_124;
  iVar1 = FUN_10000090(auStack_124);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10117884(**(int **)(local_14c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_14c + -0x1e4) + 200),
                                 0x119e,*(undefined4 *)(**(int **)(local_14c + -0x554) + 0x88));
    FUN_100db26c();
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    _DAT_41820010 = local_1c;
  }
  else {
    FUN_100db158((int)local_24,local_20);
  }
  *(undefined2 *)(**(int **)(local_14c + -0x544) + 0x158) = 1;
  FUN_100409d0();
  return;
}



// Function: FUN_10040c28 at 10040c28
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040c28(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = _DAT_4bffe775 + iVar1 * 2;
    if ((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 1)) {
      *(undefined2 *)(iVar2 + 0x138) = 0;
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 8);
  *(undefined2 *)(_DAT_4bffe775 + 0x15c) = 1;
  FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),7,(int)*(short *)(_DAT_4bffe775 + 0x110),0,
               0x61240060);
  FUN_10040a38();
  return;
}



// Function: FUN_10040cc0 at 10040cc0
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040cc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_10092484(10);
  iVar1 = 0;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar1 * 2 + 0x138) != 0) {
      iVar3 = 0;
      do {
        iVar2 = _DAT_4bffe775 + iVar3 * 2;
        if ((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 0)) {
          *(undefined2 *)(_DAT_4bffe775 + iVar1 * 2 + 0x1132) =
               *(undefined2 *)(_DAT_4bffe775 + 0x110);
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 8);
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 8);
  return;
}



// Function: FUN_10040d68 at 10040d68
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040d68(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_57c407bd + 0x88);
  *(undefined2 *)(iVar1 + 0x1dc) = 0;
  FUN_1007c714(iVar1,0x3ef);
  return;
}



// Function: FUN_10040da4 at 10040da4
// Size: 532 bytes

/* WARNING: Removing unreachable block (ram,0x10040f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040da4(void)

{
  int iVar1;
  int *piVar2;
  int local_154;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
  FUN_10117884(**(int **)(local_154 + -0x1504) +
               (int)*(short *)(*(int *)**(int **)(local_154 + -0x1504) + 0x4c8));
  FUN_10117884(**(int **)(local_154 + -0x18fc) +
               (int)*(short *)(*(int *)**(int **)(local_154 + -0x18fc) + 0x4c8));
  FUN_10117884(**(int **)(local_154 + -0x16a0) +
               (int)*(short *)(*(int *)**(int **)(local_154 + -0x16a0) + 0x4c8));
  FUN_10092484(9);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),
                                 0x1194,*(undefined4 *)(**(int **)(local_154 + -0x554) + 0x88));
    FUN_100db26c();
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
    *(undefined2 *)(**(int **)(local_154 + -0x544) + 0x160) = 1;
    iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    if (iVar1 == 0x61636365) {
      FUN_10040c28();
    }
    else {
      FUN_10040d68();
    }
    _DAT_41820010 = local_24;
  }
  else {
    FUN_100db158((int)local_2c,local_28);
  }
  return;
}



// Function: FUN_10040fb8 at 10040fb8
// Size: 308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040fb8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if (*(short *)(_DAT_4bffe775 + 0x15c) == 0) {
    FUN_10027448();
    FUN_1003e0b0();
    FUN_10008f70();
    _DAT_57e31838 = 0;
    _DAT_817f0000 = 0;
    iVar3 = 0;
    do {
      *(undefined4 *)(&DAT_409e0034 + iVar3 * 4) = 0;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    FUN_1002c85c();
    FUN_10007f78();
    FUN_1003d6c4();
    sVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = _DAT_4bffe775 + iVar3 * 2;
      if ((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 0)) {
        sVar4 = sVar4 + 1;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    if ((1 < sVar4) && (*(short *)(_DAT_4bffe775 + 0x124) != 0)) {
      FUN_1003d5d4();
    }
    FUN_1003d4dc();
    iVar3 = _DAT_57c407bd;
    *(undefined1 *)(_DAT_57c407bd + 0x9a) = 1;
    uVar1 = FUN_10001a88();
    *(undefined4 *)(iVar3 + 0x9c) = uVar1;
  }
  return;
}



// Function: FUN_100410ec at 100410ec
// Size: 540 bytes

/* WARNING: Removing unreachable block (ram,0x100412dc) */
/* WARNING: Removing unreachable block (ram,0x100412ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100410ec(void)

{
  int iVar1;
  int iVar2;
  
  if ((*(short *)(_DAT_4bffe775 + 0x15c) == 0) || (*(short *)(_DAT_4bffe775 + 0x158) == 0)) {
    iVar2 = 0;
    do {
      iVar1 = _DAT_4bffe775 + iVar2 * 2;
      if ((*(short *)(iVar1 + 0x138) != 0) && (*(short *)(iVar1 + 0xd0) == 0)) break;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    FUN_100013f8(0xffffffff,0);
    FUN_10039ec8((int)*(short *)(_DAT_4bffe775 + 0x110));
    FUN_1002b91c();
    FUN_10044110((int)*(short *)(_DAT_4bffe775 + 0x110),1);
    FUN_10027040();
    FUN_1006616c();
    FUN_1002febc((int)*(short *)(_DAT_4bffe775 + 0x110));
    FUN_10009700();
    iVar2 = FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x5f0),1);
    if ((iVar2 != 0) &&
       (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 1)) {
      FUN_10117884((int)*(int **)(iVar2 + 0x90) + (int)*(short *)(**(int **)(iVar2 + 0x90) + 0x738),
                   1,1);
      FUN_10117884((int)*(int **)(iVar2 + 0x94) + (int)*(short *)(**(int **)(iVar2 + 0x94) + 0x738),
                   1,1);
    }
    FUN_10075894(_DAT_57c407bd);
    if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 1) {
      FUN_10092484(2);
      _DAT_80410014 = *(undefined2 *)(_DAT_4bffe775 + 0x110);
      FUN_100651cc();
    }
    else {
      FUN_10065b2c((int)*(short *)(_DAT_4bffe775 + 0x110));
      _DAT_80410014 = *(undefined2 *)(_DAT_4bffe775 + 0x110);
    }
  }
  return;
}



// Function: FUN_1004130c at 1004130c
// Size: 260 bytes

undefined4 FUN_1004130c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 auStack_20 [8];
  
  puVar3 = *(undefined4 **)(*param_1 + 6);
  FUN_10000b70(puVar3);
  uVar1 = FUN_10000360(puVar3);
  FUN_10002598(puVar3);
  local_22 = 0;
  local_24 = 0;
  local_28 = 0;
  FUN_10001098(local_30,0);
  iVar2 = FUN_10000a98(*puVar3,0xff80,1);
  FUN_100db26c();
  *(undefined1 *)(iVar2 + 0x11) = 0;
  FUN_10003240(iVar2,0xff80,0x84,param_1,&local_28,local_30[0],auStack_20);
  FUN_100ef5f0(iVar2);
  FUN_10001b60(puVar3,uVar1);
  return local_28;
}



// Function: FUN_10041410 at 10041410
// Size: 284 bytes

char FUN_10041410(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [2];
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 auStack_20 [8];
  
  puVar3 = *(undefined4 **)(*param_1 + 6);
  FUN_10000b70(puVar3);
  uVar1 = FUN_10000360(puVar3);
  FUN_10002598(puVar3);
  local_22 = 0;
  local_24 = 0;
  local_28 = 0;
  FUN_10001098(local_30,0);
  iVar2 = FUN_10000a98(*puVar3,0xff80,1);
  FUN_100db26c();
  *(undefined1 *)(iVar2 + 0x11) = 0;
  FUN_10003240(iVar2,0xff80,0x80,param_1,&local_28,local_30[0],auStack_20);
  FUN_100ef5f0(iVar2);
  FUN_10001b60(puVar3,uVar1);
  return ('T' - ((0x43555354 < local_28) + 'T')) +
         (0x43555353 < local_28 && (uint)(0x43555354 < local_28) <= local_28 + 0xbcaaacac);
}



// Function: FUN_1004152c at 1004152c
// Size: 308 bytes

undefined4 FUN_1004152c(undefined4 param_1,undefined2 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack00000018;
  undefined2 uStack0000001e;
  undefined4 local_28 [3];
  
  uStack00000018 = param_1;
  uStack0000001e = param_2;
  if ((param_3 == (int *)0x0) || (iVar2 = FUN_10041410(param_3), iVar2 == 0)) {
    local_28[0] = FUN_10000330((int)(char)uStack00000018);
  }
  else {
    puVar4 = *(undefined4 **)(*param_3 + 6);
    FUN_10000b70(puVar4);
    uVar3 = FUN_10000360(puVar4);
    uVar1 = uStack00000018;
    FUN_10002598(puVar4);
    local_28[0] = 0;
    iVar2 = FUN_10000a98(*puVar4,0xff80,1);
    FUN_100db26c();
    *(undefined1 *)(iVar2 + 0x11) = 0;
    FUN_10003240(iVar2,0xff80,0x106,param_3,local_28,uVar1,&stack0x0000001e);
    FUN_100ef5f0(iVar2);
    FUN_10001b60(puVar4,uVar3);
  }
  return local_28[0];
}



// Function: FUN_10041660 at 10041660
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041660(short param_1,short param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _FUN_10115d6c;
  iVar3 = 0;
  cVar1 = *param_3;
  while (cVar1 != -1) {
    param_1 = param_1 + *(short *)((uint)(byte)param_3[iVar3] * 2 + iVar2);
    param_2 = param_2 + *(short *)(&DAT_4e800020 + (uint)(byte)param_3[iVar3] * 2);
    *(short *)(&DAT_2c040000 + iVar3 * 4) = param_1;
    *(short *)(iVar3 * 4 + 0x2c040002) = param_2;
    iVar3 = (int)(short)((short)iVar3 + 1);
    if (199 < iVar3) break;
    cVar1 = param_3[iVar3];
  }
  _DAT_2c030001 = 0;
  _DAT_38a00001 = (short)iVar3;
  _DAT_80830000 = param_1;
  _DAT_80830002 = param_2;
  return;
}



// Function: FUN_100416f4 at 100416f4
// Size: 428 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100416f4(short param_1,short param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  short sVar2;
  undefined1 auStack_160 [200];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [108];
  
  if (_DAT_817f0000 != (short *)0x0) {
    iVar1 = FUN_10009630(1,(int)param_1,(int)param_2);
    if (iVar1 != 0) {
      if (((int)param_1 == (int)*_DAT_817f0000) && ((int)param_2 == (int)_DAT_817f0000[1])) {
        iVar1 = 0;
        do {
          if (*(int *)(&DAT_409e0034 + iVar1 * 4) != 0) {
            *(undefined2 *)(*(int *)(&DAT_409e0034 + iVar1 * 4) + 0x12) = 0xffff;
            *(undefined2 *)(*(int *)(&DAT_409e0034 + iVar1 * 4) + 0x14) = 0xffff;
          }
          iVar1 = (int)(short)((short)iVar1 + 1);
        } while (iVar1 < 8);
        FUN_10007f78();
      }
      else {
        iVar1 = 0;
        do {
          if (*(int *)(&DAT_409e0034 + iVar1 * 4) != 0) {
            *(short *)(*(int *)(&DAT_409e0034 + iVar1 * 4) + 0x12) = param_1;
            *(short *)(*(int *)(&DAT_409e0034 + iVar1 * 4) + 0x14) = param_2;
          }
          iVar1 = (int)(short)((short)iVar1 + 1);
        } while (iVar1 < 8);
        FUN_100445a8(auStack_98,auStack_160);
        iVar1 = FUN_10043e60(auStack_98);
        if (iVar1 == 0) {
          FUN_10093928();
        }
        else {
          FUN_10041660((int)*_DAT_817f0000,(int)_DAT_817f0000[1],auStack_160);
          sVar2 = _DAT_918a0000;
          if (_DAT_8382fb2c == 0) {
            sVar2 = (short)*(char *)((int)_DAT_817f0000 + 7);
          }
          _DAT_4182000c = FUN_10044728(auStack_98,(int)sVar2,auStack_88);
          FUN_10007f78();
          if (param_4 != 0) {
            FUN_1003dc28();
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_100418a0 at 100418a0
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100418a0(short param_1)

{
  FUN_1007ff2c(*(undefined4 *)(_DAT_57c407bd + 0x88),(int)param_1);
  return;
}



// Function: FUN_100418d8 at 100418d8
// Size: 116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100418d8(char param_1)

{
  undefined4 in_r9;
  
  if (_DAT_817f0000 != 0) {
    if (param_1 == 0x35) {
      FUN_1003fe04();
    }
    else {
      if ((int)param_1 - 0x31U < 9) {
        return;
      }
      FUN_100418a0(in_r9);
    }
  }
  return;
}



// Function: FUN_100419b0 at 100419b0
// Size: 840 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100419b0(short param_1,short param_2,char param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_44;
  
  iVar2 = _FUN_10115d6c;
  iVar5 = (int)param_2;
  iVar4 = (int)param_1;
  FUN_10117884((int)*(int **)(_DAT_57c407bd + 0x88) +
               (int)*(short *)(**(int **)(_DAT_57c407bd + 0x88) + 0x38),0,0);
  if ((((_DAT_817f0000 == (short *)0x0) || (iVar4 < 0)) || (iVar5 < 0)) ||
     ((0x6f < iVar4 || (0x9b < iVar5)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_10017cb4(iVar4,iVar5,0);
    if ((*_DAT_817f0000 == _DAT_817f0000[9]) && (_DAT_817f0000[1] == _DAT_817f0000[10])) {
      _DAT_817f0000[10] = -1;
      _DAT_817f0000[9] = _DAT_817f0000[10];
    }
    if (iVar4 == 0) {
      FUN_10007f78();
    }
    if (iVar4 == 2) {
      if (param_3 == '\0') {
        if (((_DAT_817f0000 == (short *)0x0) || (iVar2 = (int)_DAT_817f0000[9], iVar2 == -1)) ||
           (iVar4 = (int)_DAT_817f0000[10], iVar4 == -1)) {
          if (_DAT_817f0000 == (short *)0x0) {
            sVar3 = *(short *)(_DAT_4bffe775 + 0x17e);
          }
          else {
            sVar3 = *_DAT_817f0000;
          }
          iVar2 = (int)sVar3;
          if (_DAT_817f0000 == (short *)0x0) {
            iVar4 = (int)*(short *)(_DAT_4bffe775 + 0x180);
          }
          else {
            iVar4 = (int)_DAT_817f0000[1];
          }
        }
        FUN_100836dc(**(undefined4 **)(local_44 + -0x14f4),iVar2,iVar4);
      }
      else {
        FUN_100562e0();
        FUN_100219a8(1,1,1);
      }
      if (*(short *)(_DAT_4bffe775 + 0x12e) != 0) {
        sVar3 = *(short *)(_DAT_4bffe775 + 0x136);
        if (sVar3 < 2) {
          sVar3 = 1;
        }
        if (sVar3 == 1) {
          FUN_1005f6b0(0x19,9);
          FUN_10040040();
        }
      }
      iVar4 = 2;
    }
    else {
      FUN_1003dc28();
      if (*(short *)(_DAT_4bffe775 + 0x12e) != 0) {
        if ((*(uint *)(_DAT_4bffe775 + 0x134) >> 0x1c & 1) == 0) {
          iVar5 = 0;
          do {
            iVar1 = FUN_1002be50((int)(short)(*_DAT_817f0000 + *(short *)(iVar5 * 2 + iVar2)),
                                 (int)(short)(_DAT_817f0000[1] +
                                             *(short *)(&DAT_4e800020 + iVar5 * 2)));
            if ((-1 < iVar1) &&
               ((int)*(char *)(_DAT_4bffe775 + iVar1 * 0x42 + 0x1619) !=
                (int)*(short *)(_DAT_4bffe775 + 0x110))) {
              *(uint *)(_DAT_4bffe775 + 0x134) = *(uint *)(_DAT_4bffe775 + 0x134) | 0x10000000;
              FUN_1005f6b0(0x19,4);
              FUN_10040040();
              break;
            }
            iVar5 = (int)(short)((short)iVar5 + 1);
          } while (iVar5 < 8);
        }
        if (((-1 < (int)*(uint *)(_DAT_4bffe775 + 0x134)) &&
            (*(char *)((*(uint *)(**(int **)(local_44 + -0x548) + _DAT_817f0000[1] * 0xe0 +
                                 *_DAT_817f0000 * 2) >> 0x18) + _DAT_4bffe775 + 0x711) == '\v')) &&
           (*(char *)(_DAT_817f0000 + 2) == '\x1c')) {
          *(uint *)(_DAT_4bffe775 + 0x134) = *(uint *)(_DAT_4bffe775 + 0x134) | 0x80000000;
          FUN_1005f6b0(0x19,5);
          FUN_10040040();
        }
      }
    }
  }
  return iVar4;
}



// Function: FUN_10041cf8 at 10041cf8
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041cf8(void)

{
  int iVar1;
  
  FUN_10117884((int)*(int **)(_DAT_57c407bd + 0x88) +
               (int)*(short *)(**(int **)(_DAT_57c407bd + 0x88) + 0x228));
  if ((_DAT_817f0000 != 0) && (-1 < *(short *)(_DAT_817f0000 + 0x12))) {
    FUN_100419b0((int)*(short *)(_DAT_817f0000 + 0x12),(int)*(short *)(_DAT_817f0000 + 0x14),1);
  }
  iVar1 = FUN_1005619c();
  while (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) | 0x200;
    if (-1 < *(short *)(iVar1 + 0x12)) {
      FUN_10055c64(iVar1);
      FUN_1005cc8c();
      FUN_100419b0((int)*(short *)(_DAT_817f0000 + 0x12),(int)*(short *)(_DAT_817f0000 + 0x14),1);
    }
    iVar1 = FUN_1005619c();
  }
  FUN_1003dc28();
  return;
}



// Function: FUN_10041de8 at 10041de8
// Size: 1032 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041de8(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [200];
  undefined1 auStack_b0 [108];
  
  _DAT_7f8be040 = 0;
  _DAT_918a0000 = 100;
  bVar4 = true;
  bVar5 = true;
  bVar6 = false;
  bVar7 = 0;
  bVar8 = false;
  bVar2 = false;
  bVar1 = false;
  bVar3 = false;
  if ((_DAT_817f0000 != (short *)0x0) &&
     (_DAT_57e31838 = _DAT_817f0000, *(char *)(_DAT_817f0000 + 2) != '\x1c')) {
    _DAT_57e31838 = (short *)0x0;
  }
  iVar11 = 0;
  do {
    iVar10 = *(int *)(&DAT_409e0034 + iVar11 * 4);
    if (iVar10 != 0) {
      iVar12 = (int)*(char *)(iVar10 + 4);
      uVar9 = *(ushort *)(iVar10 + 0xc) & 0x1000;
      _DAT_7f8be040 = _DAT_7f8be040 + 1;
      if (*(char *)(iVar10 + 7) < (char)_DAT_918a0000) {
        _DAT_918a0000 = (short)*(char *)(iVar10 + 7);
      }
      if ((iVar12 == 0x1c) &&
         (iVar10 = FUN_10039e24(*(undefined4 *)(&DAT_409e0034 + iVar11 * 4)), iVar10 != 0)) {
        bVar3 = true;
      }
      if (((*(char *)(_DAT_281f0000 + iVar12 * 6) == '\0') || (uVar9 != 0)) &&
         (bVar4 = false, uVar9 != 0)) {
        bVar1 = true;
      }
      if (iVar12 == 0x1c) {
LAB_10041f38:
        if (*(char *)(_DAT_281f0000 + iVar12 * 6) != '\0') goto LAB_10041f54;
      }
      else {
        if (*(char *)(_DAT_281f0000 + iVar12 * 6) == '\0') {
          bVar5 = false;
          goto LAB_10041f38;
        }
LAB_10041f54:
        if (uVar9 == 0) {
          bVar6 = true;
        }
      }
      if (*(char *)(_DAT_281f0000 + iVar12 * 6 + 3) != '\0') {
        bVar2 = true;
      }
      if (*(char *)(_DAT_281f0000 + iVar12 * 6 + 2) != '\0') {
        bVar7 = 1;
      }
      if (*(char *)(_DAT_281f0000 + iVar12 * 6 + 1) != '\0') {
        bVar8 = true;
      }
      if ((_DAT_57e31838 == (short *)0x0) && (iVar12 == 0x1c)) {
        _DAT_57e31838 = *(short **)(&DAT_409e0034 + iVar11 * 4);
      }
    }
    iVar11 = (int)(short)((short)iVar11 + 1);
    if (7 < iVar11) {
      _DAT_8382fb2c =
           ((_DAT_7f8be040 < 2) + 2) -
           ((ushort)((_DAT_7f8be040 < 2) < 0xfffffffe) - ((short)_DAT_7f8be040 >> 0xf)) & 1;
      _DAT_4beeb891 = 1;
      _DAT_7c0803a6 = 0;
      if (bVar1) {
        _DAT_7c0803a6 = 8;
      }
      else if (bVar2) {
        _DAT_4beeb891 = 0;
      }
      else if (((bVar3) || (bVar4)) || ((bVar5 && (bVar6)))) {
        _DAT_4beeb891 = 2;
      }
      else {
        _DAT_7c0803a6 = (ushort)bVar7;
        if (bVar8) {
          _DAT_7c0803a6 = _DAT_7c0803a6 | 2;
        }
      }
      if (_DAT_817f0000 == (short *)0x0) {
        _DAT_817f0000 = _DAT_409e0034;
      }
      iVar11 = 7;
      do {
        if (_DAT_817f0000 != (short *)0x0) {
          if (*(int *)(&DAT_409e0034 + iVar11 * 4) != 0) {
            *(short *)(*(int *)(&DAT_409e0034 + iVar11 * 4) + 0x12) = _DAT_817f0000[9];
            *(short *)(*(int *)(&DAT_409e0034 + iVar11 * 4) + 0x14) = _DAT_817f0000[10];
          }
        }
        bVar1 = iVar11 != 0;
        iVar11 = (int)(short)((short)iVar11 + -1);
      } while (bVar1);
      if (((*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) &&
          (-1 < _DAT_817f0000[9])) && (-1 < _DAT_817f0000[10])) {
        FUN_100445a8();
        FUN_10043e60(auStack_188);
        _DAT_4182000c = FUN_10044728(auStack_188,(int)_DAT_918a0000,auStack_b0);
        FUN_10041660((int)*_DAT_817f0000,(int)_DAT_817f0000[1],auStack_178);
      }
      else {
        _DAT_4182000c = 0;
        _DAT_38a00001 = 0;
        _DAT_2c030001 = 0;
      }
      return;
    }
  } while( true );
}



// Function: FUN_100421f0 at 100421f0
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100421f0(int param_1,int param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  uVar7 = 0;
  iVar8 = 0;
  bVar1 = false;
  bVar4 = false;
  bVar2 = true;
  bVar3 = true;
  if (0 < param_3) {
    do {
      iVar6 = *(int *)(param_1 + iVar8 * 4);
      if (iVar6 != 0) {
        if (*(short *)(param_2 + iVar8 * 2) != 0) {
          iVar9 = (int)*(char *)(iVar6 + 4);
          uVar5 = *(ushort *)(iVar6 + 0xc) & 0x1000;
          if (iVar9 == 0x1c) {
            iVar6 = FUN_10039e24(iVar6);
            if (iVar6 != 0) {
              bVar1 = true;
            }
          }
          if ((*(char *)(_DAT_281f0000 + iVar9 * 6) == '\0') || (uVar5 != 0)) {
            bVar2 = false;
          }
          if (iVar9 == 0x1c) {
LAB_100422d0:
            if (*(char *)(_DAT_281f0000 + iVar9 * 6) == '\0') goto LAB_100422f8;
          }
          else if (*(char *)(_DAT_281f0000 + iVar9 * 6) == '\0') {
            bVar3 = false;
            goto LAB_100422d0;
          }
          if (uVar5 == 0) {
            bVar4 = true;
          }
        }
      }
LAB_100422f8:
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < param_3);
  }
  if (((bVar1) || (bVar2)) || ((bVar3 && (bVar4)))) {
    uVar7 = 1;
  }
  return uVar7;
}



// Function: FUN_10042344 at 10042344
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042344(int param_1,int param_2,short param_3)

{
  char cVar1;
  int iVar2;
  
  _DAT_918a0000 = 100;
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if ((*(short *)(param_2 + iVar2 * 2) != 0) &&
         (cVar1 = *(char *)(*(int *)(param_1 + iVar2 * 4) + 7), (int)cVar1 < (int)_DAT_918a0000)) {
        _DAT_918a0000 = (short)cVar1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < param_3);
  }
  return;
}



// Function: FUN_100423a0 at 100423a0
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100423a0(short param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = _DAT_41820014;
  if (_DAT_41820014 != (int *)0x0) {
    FUN_10002598(_DAT_41820014);
  }
  _DAT_8062fb6c = *piVar2;
  iVar3 = 199;
  do {
    iVar4 = param_1 * 0xd6;
    *(undefined1 *)(_DAT_8062fb6c + iVar4 + iVar3 + 0xe) = 0;
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  *(undefined2 *)(iVar4 + _DAT_8062fb6c) = 0;
  *(undefined2 *)(_DAT_8062fb6c + iVar4 + 2) = 0;
  *(undefined2 *)(_DAT_8062fb6c + iVar4 + 4) = 0;
  *(undefined2 *)(_DAT_8062fb6c + iVar4 + 6) = 0;
  *(undefined2 *)(iVar4 + _DAT_8062fb6c + 8) = 0;
  *(undefined2 *)(iVar4 + _DAT_8062fb6c + 10) = 0;
  *(undefined2 *)(iVar4 + _DAT_8062fb6c + 0xc) = 0;
  if (_DAT_41820014 != (int *)0x0) {
    FUN_10002ad8(_DAT_41820014);
  }
  return;
}



// Function: FUN_1004248c at 1004248c
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004248c(void)

{
  bool bVar1;
  int iVar2;
  
  if (_DAT_3860ffff != 0) {
    iVar2 = 0x13;
    do {
      FUN_100423a0(iVar2);
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  return;
}



// Function: FUN_100424e4 at 100424e4
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100424e4(void)

{
  undefined **ppuVar1;
  undefined **local_34;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_4bee8a85 == (int *)0x0) {
    _DAT_4bee8a85 = (int *)FUN_100f15e0(0x8880,0);
  }
  else {
    if (*_DAT_4bee8a85 == 0) {
      FUN_100004e0(_DAT_4bee8a85,0x8880);
      FUN_100db1ec();
    }
    FUN_10000048(_DAT_4bee8a85);
    ppuVar1 = local_34;
  }
  if (_DAT_30630014 == 0) {
    _DAT_30630014 = FUN_100f15e0(0x4440,0,0);
  }
  if (_DAT_41820014 == 0) {
    _DAT_41820014 = FUN_100f15e0(0x10b8,0,0);
  }
  *(undefined2 *)ppuVar1[-0x67f] = 1;
  FUN_1004248c();
  return;
}



// Function: FUN_100425c0 at 100425c0
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100425c0(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_20;
  short local_1e;
  
  iVar3 = (int)param_3;
  iVar2 = _DAT_8062fb6c + iVar3 * 0xd6;
  local_1e = *(short *)(iVar2 + 6);
  local_20 = *(short *)(iVar2 + 8);
  iVar2 = 0;
  do {
    if (*(char *)(_DAT_8062fb6c + iVar3 * 0xd6 + iVar2 + 0xe) == -1) {
      return -1;
    }
    if ((local_1e == param_1) && (local_20 == param_2)) {
      return iVar2;
    }
    iVar1 = FUN_10017170(&local_1e,&local_20,
                         *(undefined1 *)(_DAT_8062fb6c + iVar3 * 0xd6 + iVar2 + 0xe));
    if (iVar1 == 0) {
      return -1;
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 200);
  return -1;
}



// Function: FUN_100426b4 at 100426b4
// Size: 280 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100426b4(short *param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_2;
  if (param_1[2] == *(short *)(iVar2 * 0xd6 + _DAT_8062fb6c + 10)) {
    uVar1 = 0;
    iVar4 = _DAT_8062fb6c + param_2 * 0xd6;
    if ((((param_1[3] == *(short *)(iVar4 + 0xc)) && (param_1[5] == *(short *)(iVar4 + 2))) &&
        (param_1[4] == *(short *)(iVar4 + 4))) &&
       (iVar4 = FUN_100425c0((int)*param_1,(int)param_1[1],iVar2), iVar4 != -1)) {
      iVar3 = 0;
      for (; iVar4 < 200; iVar4 = (int)(short)((short)iVar4 + 1)) {
        *(undefined1 *)(*(int *)(param_1 + 6) + iVar3) =
             *(undefined1 *)(_DAT_8062fb6c + iVar2 * 0xd6 + iVar4 + 0xe);
        iVar3 = (int)(short)((short)iVar3 + 1);
      }
      *(undefined2 *)(_DAT_8062fb6c + iVar2 * 0xd6) = 2;
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100427cc at 100427cc
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100427cc(undefined4 param_1,short param_2)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **local_44;
  
  puVar1 = _DAT_41820014;
  uVar4 = 0;
  ppuVar2 = &.TVect::OCECToRString;
  if (_DAT_41820014 != (undefined4 *)0x0) {
    FUN_10002598(_DAT_41820014);
    ppuVar2 = local_44;
  }
  *(undefined4 *)ppuVar2[-0xc5] = *puVar1;
  puVar1 = _DAT_4bee8a85;
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002598(_DAT_4bee8a85);
    ppuVar2 = local_44;
  }
  _DAT_80410014 = *puVar1;
  *(undefined1 **)ppuVar2[-0xc1] = &DAT_80410014;
  if (param_2 == 0) {
    iVar5 = FUN_100426b4(param_1,0);
    if (iVar5 != 0) {
      uVar4 = 1;
    }
  }
  else {
    iVar5 = 1;
    do {
      iVar3 = FUN_100426b4(param_1,iVar5);
      if (iVar3 != 0) {
        uVar4 = 1;
        break;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 0x14);
  }
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002ad8(_DAT_4bee8a85);
  }
  if (_DAT_41820014 != (undefined4 *)0x0) {
    FUN_10002ad8(_DAT_41820014);
  }
  return uVar4;
}



// Function: FUN_100428dc at 100428dc
// Size: 328 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100428dc(short *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  cVar1 = *(char *)(_DAT_4bffe775 +
                    (*(uint *)(_DAT_38800000 + param_1[1] * 0xe0 + *param_1 * 2) >> 0x18) + 0x711);
  iVar5 = (int)*(char *)(_DAT_4bffe775 +
                         (*(uint *)(_DAT_38800000 + param_1[3] * 0xe0 + param_1[2] * 2) >> 0x18) +
                        0x711);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((iVar5 == 2) || (iVar5 == 3)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (param_1[5] != 2) {
    if (bVar3) {
      if (!bVar4) {
        return 0;
      }
    }
    else if (bVar4) {
      return 0;
    }
    if (*(short *)(iVar5 * 2 + -0x64370000) == 0) {
      return 0;
    }
  }
  uVar2 = FUN_100184dc((int)*param_1,(int)param_1[1],(int)param_1[2],(int)param_1[3]);
  **(undefined1 **)(param_1 + 6) = uVar2;
  return 1;
}



// Function: FUN_10042a24 at 10042a24
// Size: 400 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10042a24(short param_1,short param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sStack0000001a;
  short sStack0000001e;
  
  iVar3 = 0;
  iVar4 = 0;
  sStack0000001a = param_1;
  if (*(char *)(_DAT_4bffe775 +
                (*(uint *)(_DAT_38800000 + param_2 * 0xe0 + param_1 * 2 + -2) >> 0x18) + 0x711) ==
      '\n') {
    sStack0000001a = param_1 + -1;
  }
  sStack0000001e = param_2;
  if (*(char *)(_DAT_4bffe775 +
                (*(uint *)(_DAT_38800000 + param_2 * 0xe0 + sStack0000001a * 2 + -0xe0) >> 0x18) +
               0x711) == '\n') {
    sStack0000001e = param_2 + -1;
  }
  while( true ) {
    if (*(short *)(iVar4 * 2 + 0x48000150) == -1) {
      return iVar3;
    }
    if (iVar3 != 0) break;
    iVar2 = FUN_10017170(&stack0x0000001a,&stack0x0000001e,(int)*(short *)(iVar4 * 2 + 0x48000150));
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = *(char *)(_DAT_4bffe775 +
                      (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18
                      ) + 0x711);
    if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) {
      iVar3 = 1;
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  }
  return iVar3;
}



// Function: FUN_10042bb4 at 10042bb4
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042bb4(short param_1,short param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 3;
  do {
    iVar3 = _DAT_4bffe775 + param_1 * 0x42;
    iVar5 = (int)(short)(*(short *)(iVar3 + 0x1604) + *(short *)(iVar4 * 2 + 0x48000148));
    iVar3 = (int)(short)(*(short *)(iVar3 + 0x1606) + *(short *)(iVar4 * 2 + 0x38600001));
    *(char *)(_DAT_60000000 + iVar5 * 0x9c + iVar3) = (char)_DAT_9bc90014;
    if (param_2 == 0) {
      if ((*(uint *)(_DAT_38800000 + iVar3 * 0xe0 + iVar5 * 2) >> 0x10 & 0xf) ==
          (int)*(short *)(_DAT_4bffe775 + 0x110)) {
        iVar2 = FUN_10042a24(iVar5,iVar3);
        if (iVar2 != 0) {
          iVar2 = _DAT_60000000 + iVar5 * 0x9c;
          *(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) | 0x18;
        }
      }
      else {
        *(undefined1 *)(_DAT_60000000 + iVar5 * 0x9c + iVar3) = 0;
      }
    }
    else {
      iVar2 = FUN_10042a24(iVar5,iVar3);
      if (iVar2 != 0) {
        iVar2 = _DAT_60000000 + iVar5 * 0x9c;
        *(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) | 0x18;
      }
    }
    iVar5 = _DAT_60000000 + iVar5 * 0x9c;
    *(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 0x80;
    bVar1 = iVar4 != 0;
    iVar4 = (int)(short)((short)iVar4 + -1);
  } while (bVar1);
  return;
}



// Function: FUN_10042d2c at 10042d2c
// Size: 440 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042d2c(int param_1,short param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  
  sVar3 = _DAT_2c840000;
  if ((_DAT_809f0004 == 0) && ((iVar7 = (int)param_2, _DAT_2c840000 != 0 || (iVar7 != 0)))) {
    cVar1 = *(char *)(_DAT_4bffe775 +
                      (*(uint *)(_DAT_38800000 + *(short *)(param_1 + 6) * 0xe0 +
                                *(short *)(param_1 + 4) * 2) >> 0x18) + 0x711);
    sVar2 = *(short *)(_DAT_4bffe775 + 0x1602);
    sVar3 = param_2;
    if (sVar2 != 0) {
      do {
        sVar2 = sVar2 + -1;
        iVar8 = (int)sVar2;
        if (cVar1 == '\n') {
          iVar5 = _DAT_4bffe775 + iVar8 * 0x42;
          iVar4 = (int)*(short *)(iVar5 + 0x1604);
          if ((iVar4 <= *(short *)(param_1 + 4)) && ((int)*(short *)(param_1 + 4) <= iVar4 + 1)) {
            iVar4 = (int)*(short *)(iVar5 + 0x1606);
            if ((iVar4 <= *(short *)(param_1 + 6)) && ((int)*(short *)(param_1 + 6) <= iVar4 + 1)) {
              FUN_10042bb4(iVar8,iVar7);
            }
          }
        }
        if ((_DAT_38a0ffff == 0) &&
           (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 1)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (((bVar6) && (*(char *)(_DAT_4bffe775 + iVar8 * 0x42 + 0x1619) == '\x0f')) &&
           (*(short *)(param_1 + 10) == 1)) {
          FUN_10042bb4(iVar8,iVar7);
        }
        sVar3 = param_2;
      } while (iVar8 != 0);
    }
  }
  _DAT_2c840000 = sVar3;
  return;
}



// Function: FUN_10042ee4 at 10042ee4
// Size: 868 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042ee4(int param_1,short param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar10;
  int iVar9;
  
  sVar3 = *(short *)(param_1 + 4);
  sVar4 = *(short *)(param_1 + 6);
  _DAT_48000241 = 0;
  bVar5 = true;
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    if ((_DAT_38a0ffff == 0) &&
       (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) != 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_10042f74;
  }
  bVar5 = false;
LAB_10042f74:
  FUN_10042d2c(param_1,1);
  if (*(short *)(param_1 + 10) == 1) {
    if (param_2 < 10) {
      _DAT_48000241 = 0x1e;
    }
    else {
      _DAT_48000241 = 10;
    }
    cVar1 = *(char *)(_DAT_4bffe775 + (*(uint *)(_DAT_38800000 + sVar4 * 0xe0 + sVar3 * 2) >> 0x18)
                     + 0x711);
    if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
      _DAT_48000241 = 0x14;
    }
    iVar8 = 0x6f;
    do {
      iVar7 = *_DAT_4bffff89 + iVar8 * 0x138;
      iVar6 = _DAT_60000000 + iVar8 * 0x9c;
      iVar9 = 0x9b;
      do {
        *(undefined2 *)(iVar7 + iVar9 * 2) = 30000;
        if ((((bVar5) && ((*(uint *)(_DAT_807f0004 + iVar9 * 0x70 + iVar8) >> 0x1d & 1) == 0)) &&
            ((iVar8 != sVar3 || (iVar9 != sVar4)))) || ((*(byte *)(iVar6 + iVar9) & 7) == 0)) {
          *(undefined2 *)(iVar7 + iVar9 * 2) = 0x7531;
        }
        bVar10 = iVar9 != 0;
        iVar9 = (int)(short)((short)iVar9 + -1);
      } while (bVar10);
      bVar10 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar10);
  }
  else if (*(short *)(param_1 + 10) == 0) {
    iVar8 = 0x6f;
    do {
      iVar9 = 0x9b;
      do {
        *(undefined2 *)(*_DAT_4bffff89 + iVar8 * 0x138 + iVar9 * 2) = 30000;
        if ((((iVar8 != *(short *)(param_1 + 4)) && (iVar9 != *(short *)(param_1 + 6))) &&
            ((bVar5 && ((*(uint *)(_DAT_807f0004 + iVar9 * 0x70 + iVar8) >> 0x1d & 1) == 0)))) ||
           ((*(byte *)(_DAT_60000000 + iVar8 * 0x9c + iVar9) & 8) == 0)) {
          *(undefined2 *)(*_DAT_4bffff89 + iVar8 * 0x138 + iVar9 * 2) = 0x7531;
        }
        bVar10 = iVar9 != 0;
        iVar9 = (int)(short)((short)iVar9 + -1);
      } while (bVar10);
      bVar10 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar10);
  }
  else {
    iVar8 = 0x6f;
    do {
      iVar9 = 0x9b;
      do {
        *(undefined2 *)(*_DAT_4bffff89 + iVar8 * 0x138 + iVar9 * 2) = 30000;
        if (((((iVar8 != *(short *)(param_1 + 4)) && (iVar9 != *(short *)(param_1 + 6))) && (bVar5))
            && ((*(uint *)(_DAT_807f0004 + iVar9 * 0x70 + iVar8) >> 0x1d & 1) == 0)) ||
           ((bVar2 = *(byte *)(_DAT_60000000 + iVar8 * 0x9c + iVar9), (bVar2 & 0x80) != 0 &&
            ((bVar2 & 7) == 0)))) {
          *(undefined2 *)(*_DAT_4bffff89 + iVar8 * 0x138 + iVar9 * 2) = 0x7531;
        }
        bVar10 = iVar9 != 0;
        iVar9 = (int)(short)((short)iVar9 + -1);
      } while (bVar10);
      bVar10 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar10);
  }
  return;
}



// Function: FUN_10043248 at 10043248
// Size: 1884 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_10043248(short *param_1,short param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  short *psVar9;
  short sVar11;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ushort local_88;
  undefined2 local_86;
  short local_84;
  short local_80;
  short local_7a;
  short local_74;
  short local_6e;
  short local_68;
  short local_62;
  short local_58;
  
  local_86 = 1;
  local_84 = 3;
  bVar6 = false;
  if ((_DAT_809f0004 == 0) || (param_2 == 0)) {
    if ((param_1[4] & 0x10U) == 0) {
      if (param_2 == 0) {
        _DAT_60000000 = 0;
      }
      else {
      }
      if (param_2 == 0) {
        local_80 = 6;
      }
      else if (_DAT_809f0004 == 0) {
        local_80 = 0x32;
      }
      else {
        local_80 = 0x14;
      }
    }
    else {
      _DAT_60000000 = _DAT_60000000 & 0xffff;
      local_80 = _DAT_80010040;
    }
    local_7a = *param_1;
    if (param_1[2] < *param_1) {
      local_7a = param_1[2];
    }
    local_7a = local_7a - local_80;
    if (local_7a < 0) {
      local_7a = 0;
    }
    local_74 = param_1[1];
    if (param_1[3] < param_1[1]) {
      local_74 = param_1[3];
    }
    local_74 = local_74 - local_80;
    if (local_74 < 0) {
      local_74 = 0;
    }
    local_6e = *param_1;
    if (*param_1 < param_1[2]) {
      local_6e = param_1[2];
    }
    local_6e = local_6e + local_80;
    if (0x6f < local_6e) {
      local_6e = 0x6f;
    }
    local_68 = param_1[1];
    if (param_1[1] < param_1[3]) {
      local_68 = param_1[3];
    }
    local_68 = local_68 + local_80;
    if (0x9b < local_68) {
      local_68 = 0x9b;
    }
    sVar3 = *param_1;
    sVar4 = param_1[1];
    do {
      bVar7 = false;
      if (((param_1[4] & 0x10U) != 0) && (_DAT_60000000 == local_80)) {
        return local_86;
      }
      local_62 = param_1[2] + _DAT_60000000;
      if (0x6f < local_62) {
        local_62 = 0x6f;
      }
      iVar14 = (int)(short)(param_1[3] + _DAT_60000000);
      if (0x9b < iVar14) {
        iVar14 = 0x9b;
      }
      if (local_6e <= local_62) {
        local_62 = local_6e;
      }
      if (local_68 <= iVar14) {
        iVar14 = (int)local_68;
      }
      if (local_74 < 0) {
        local_58 = 0;
      }
      else {
        local_58 = local_74;
      }
      iVar17 = (int)(short)(param_1[2] - _DAT_60000000);
      if (iVar17 < 0) {
        iVar17 = 0;
      }
      if (iVar17 <= local_7a) {
        iVar17 = (int)local_7a;
      }
      if (iVar17 <= local_62) {
        do {
          iVar15 = *_DAT_4bffff89 + iVar17 * 0x138;
          iVar16 = (int)(short)(param_1[3] - _DAT_60000000);
          if (iVar16 < local_58) {
            iVar16 = (int)local_58;
          }
          for (; iVar16 <= iVar14; iVar16 = (int)(short)((short)iVar16 + 1)) {
            sVar5 = *(short *)(iVar15 + iVar16 * 2);
            if (sVar5 < 1) {
              bVar1 = *(byte *)(_DAT_60000000 + iVar17 * 0x9c + iVar16);
              *(short *)(iVar16 * 2 + iVar15) = -sVar5;
              bVar7 = true;
              if (_DAT_809f0004 == 0) {
                sVar11 = 0;
              }
              else {
                sVar11 = 9;
              }
              iVar10 = (int)sVar11;
              if (iVar16 == 0) {
                if (iVar17 == 0) {
                  iVar10 = 1;
                }
                else if (iVar17 == 0x6f) {
                  iVar10 = 3;
                }
                else {
                  iVar10 = 2;
                }
              }
              else if (iVar16 == 0x9b) {
                if (iVar17 == 0) {
                  iVar10 = 6;
                }
                else if (iVar17 == 0x6f) {
                  iVar10 = 8;
                }
                else {
                  iVar10 = 7;
                }
              }
              else if (iVar17 == 0) {
                iVar10 = 4;
              }
              else if (iVar17 == 0x6f) {
                iVar10 = 5;
              }
              iVar10 = (int)*(short *)(iVar10 * 2 + 0x2f050000);
              sVar11 = *(short *)(&DAT_a8bf0002 + iVar10 * 2);
              while (sVar11 != -10) {
                iVar8 = (int)(short)((short)iVar17 + sVar11);
                iVar13 = (int)(short)((short)iVar10 + 1);
                iVar10 = (int)(short)((short)iVar16 + *(short *)(iVar10 * 2 + 0x40860018));
                iVar12 = *_DAT_4bffff89 + iVar8 * 0x138;
                psVar9 = (short *)(iVar12 + iVar10 * 2);
                if (*(short *)(iVar12 + iVar10 * 2) != 0x7531) {
                  bVar2 = *(byte *)(_DAT_60000000 + iVar8 * 0x9c + iVar10);
                  local_88 = bVar2 & 7;
                  if ((iVar8 == sVar3) && (iVar10 == sVar4)) {
                    if (((param_1[5] != 1) || ((bVar1 & 0x10) != 0)) ||
                       (((bVar2 & 0x10) != 0 || ((bVar2 & 8) == (bVar1 & 8))))) {
                      local_88 = 1;
LAB_10043894:
                      iVar10 = (int)-*psVar9;
                      if ((int)-*psVar9 < (int)*psVar9) {
                        iVar10 = (int)*psVar9;
                      }
                      if ((int)-sVar5 + (int)(short)local_88 < iVar10) {
                        *psVar9 = sVar5 - local_88;
                      }
                    }
                  }
                  else {
                    if (param_1[5] == 2) {
                      if (((bVar2 & 8) == 0) || ((bVar2 & 0x10) != 0)) {
                        if ((bVar2 & 7) == 0) {
                          local_88 = 2;
                        }
                        if (2 < local_88) {
                          local_88 = 2;
                        }
                      }
                      else {
                        local_88 = 2;
                      }
                      goto LAB_10043894;
                    }
                    if (param_1[5] == 0) {
                      if (((bVar2 & 8) != 0) || ((bVar2 & 0x80) != 0)) goto LAB_10043894;
                      *psVar9 = 0x7531;
                    }
                    else if ((((bVar1 & 0x10) != 0) || ((bVar2 & 0x10) != 0)) ||
                            ((bVar2 & 8) == (bVar1 & 8))) {
                      if (((param_1[4] != 0) && (2 < local_88)) &&
                         ((((param_1[4] & 1U) != 0 && ((bVar2 & 0x20) != 0)) ||
                          (((param_1[4] & 2U) != 0 && ((bVar2 & 0x40) != 0)))))) {
                        local_88 = 2;
                      }
                      if (((((bVar1 & 8) == 0) || ((bVar1 & 0x10) != 0)) && ((bVar2 & 8) != 0)) &&
                         ((bVar2 & 0x10) == 0)) {
                        local_88 = local_88 + _DAT_48000241;
                      }
                      goto LAB_10043894;
                    }
                  }
                }
                iVar10 = iVar13;
                sVar11 = *(short *)(&DAT_a8bf0002 + iVar13 * 2);
              }
              if (((iVar17 == sVar3) && (iVar16 == sVar4)) && ((param_1[4] & 0x10U) == 0)) {
                bVar6 = true;
              }
            }
          }
          iVar17 = (int)(short)((short)iVar17 + 1);
        } while (iVar17 <= local_62);
      }
      if ((bVar6) && (local_84 != 0)) {
        local_84 = local_84 + -1;
      }
      _DAT_60000000 = CONCAT22(_DAT_60000000 + 1,DAT_60000000_2);
      if ((!bVar7) && (local_84 = 0, !bVar6)) {
        local_86 = 0;
      }
    } while (local_84 != 0);
  }
  else {
    local_86 = 0;
  }
  return local_86;
}



// Function: FUN_100439a4 at 100439a4
// Size: 736 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100439a4(short *param_1)

{
  byte bVar1;
  short sVar3;
  int iVar2;
  short sVar4;
  uint uVar5;
  uint unaff_r15;
  int unaff_r16;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_6c;
  short local_48;
  
  sVar3 = FUN_10003768((int)*(short *)(*_DAT_4bffff89 + *param_1 * 0x138 + param_1[1] * 2));
  local_48 = 0;
  iVar8 = (int)param_1[1];
  iVar9 = (int)*param_1;
  do {
    bVar7 = 0;
    if ((iVar9 == param_1[2]) && (iVar8 == param_1[3])) {
      return;
    }
    if (param_1[5] == 1) {
      bVar7 = *(byte *)(_DAT_60000000 + iVar9 * 0x9c + iVar8);
      unaff_r16 = (int)(short)(bVar7 & 8);
      bVar7 = bVar7 & 0x10;
    }
    iVar2 = FUN_100184dc(iVar9,iVar8,(int)param_1[2],(int)param_1[3]);
    iVar6 = -1;
    iVar10 = -1;
    iVar11 = 0;
    do {
      uVar5 = iVar2 + *(short *)(iVar11 * 2 + *(int *)(local_6c + -0x19d8));
      uVar5 = (uint)(short)((short)uVar5 +
                           (short)(((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0)) *
                           -8);
      iVar13 = (int)(short)((short)iVar9 + *(short *)(uVar5 * 2 + *(int *)(local_6c + -0x19d4)));
      iVar12 = (int)(short)((short)iVar8 + *(short *)(uVar5 * 2 + *(int *)(local_6c + -0x19d0)));
      if (((((_DAT_809f0004 != 0) && ((uVar5 & 1) != 0)) &&
           (((*(byte *)(_DAT_60000000 + iVar13 * 0x9c + iVar12) & 8) == 0 ||
            (*(char *)(**(int **)(local_6c + -0x544) +
                       (*(uint *)(**(int **)(local_6c + -0x548) + iVar12 * 0xe0 + iVar13 * 2) >>
                       0x18) + 0x711) == '\x01')))) ||
          (((iVar13 < 0 || (0x6f < iVar13)) || (iVar12 < 0)))) ||
         (((0x9b < iVar12 ||
           (sVar4 = *(short *)(*_DAT_4bffff89 + iVar13 * 0x138 + iVar12 * 2), sVar4 == 30000)) ||
          (sVar4 == 0x7531)))) goto LAB_10043c20;
      if (((bVar7 == 0) &&
          (bVar1 = *(byte *)(_DAT_60000000 + iVar13 * 0x9c + iVar12), (bVar1 & 0x10) == 0)) &&
         (param_1[5] == 1)) {
        if (unaff_r16 == 0) {
          if ((*(byte *)(_DAT_60000000 + iVar13 * 0x9c + iVar12) & 8) == 0) goto LAB_10043bc8;
        }
        else if ((bVar1 & 8) != 0) goto LAB_10043bc8;
      }
      else {
LAB_10043bc8:
        sVar4 = FUN_10003768((int)*(short *)(*_DAT_4bffff89 + iVar13 * 0x138 + iVar12 * 2));
        if ((sVar4 < sVar3) || (((_DAT_809f0004 != 0 && (iVar10 == -1)) && (sVar4 == sVar3)))) {
          unaff_r15 = uVar5;
          iVar6 = iVar12;
          iVar10 = iVar13;
          sVar3 = sVar4;
        }
      }
LAB_10043c20:
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < 8);
    if ((local_48 < 0xc6) && (iVar10 != -1)) {
      *(char *)(*(int *)(param_1 + 6) + (int)local_48) = (char)unaff_r15;
      local_48 = local_48 + 1;
      iVar8 = iVar6;
      iVar9 = iVar10;
    }
    else {
      param_1[2] = (short)iVar9;
      param_1[3] = (short)iVar8;
    }
  } while( true );
}



// Function: FUN_10043c84 at 10043c84
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043c84(short param_1,undefined2 *param_2,short param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = _DAT_41820014;
  iVar5 = -1;
  iVar6 = 10000;
  bVar1 = true;
  if (_DAT_41820014 != (int *)0x0) {
    FUN_10002598(_DAT_41820014);
  }
  _DAT_8062fb6c = *piVar2;
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar4 = iVar3;
      if (*(short *)(_DAT_8062fb6c + iVar4 * 0xd6) == 0) break;
      iVar3 = _DAT_8062fb6c + iVar4 * 0xd6;
      iVar3 = FUN_1000a884((int)*(short *)(iVar3 + 10),(int)*(short *)(iVar3 + 0xc),
                           (int)*(short *)(iVar3 + 6),(int)*(short *)(iVar3 + 8));
      if (iVar3 < iVar6) {
        iVar5 = iVar4;
        iVar6 = iVar3;
      }
      iVar3 = (int)(short)((short)iVar4 + 1);
      iVar4 = -1;
    } while (iVar3 < 0x14);
    if (iVar4 == -1) {
      bVar1 = iVar5 != -1;
      if (iVar6 < param_1) {
        iVar4 = iVar5;
      }
      if (iVar4 == -1) {
        bVar1 = false;
      }
    }
  }
  if (bVar1) {
    iVar5 = 199;
    do {
      *(undefined1 *)(_DAT_8062fb6c + iVar4 * 0xd6 + iVar5 + 0xe) =
           *(undefined1 *)(*(int *)(param_2 + 6) + iVar5);
      bVar1 = iVar5 != 0;
      iVar5 = (int)(short)((short)iVar5 + -1);
    } while (bVar1);
    iVar4 = iVar4 * 0xd6;
    *(undefined2 *)(_DAT_8062fb6c + iVar4) = 2;
    *(undefined2 *)(iVar4 + _DAT_8062fb6c + 2) = param_2[5];
    *(undefined2 *)(iVar4 + _DAT_8062fb6c + 4) = param_2[4];
    *(undefined2 *)(iVar4 + _DAT_8062fb6c + 6) = *param_2;
    *(undefined2 *)(iVar4 + _DAT_8062fb6c + 8) = param_2[1];
    *(undefined2 *)(iVar4 + _DAT_8062fb6c + 10) = param_2[2];
    *(undefined2 *)(iVar4 + _DAT_8062fb6c + 0xc) = param_2[3];
  }
  if (_DAT_41820014 != (int *)0x0) {
    FUN_10002ad8(_DAT_41820014);
  }
  return;
}



// Function: FUN_10043e60 at 10043e60
// Size: 688 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10043e60(short *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_1000a884((int)param_1[2],(int)param_1[3],(int)*param_1,(int)param_1[1]);
  iVar6 = 0;
  if ((((param_1[2] < 0) || (param_1[3] < 0)) || (0x6f < param_1[2])) || (0x9b < param_1[3])) {
    return 0;
  }
  if (_DAT_3860ffff == 0) {
    FUN_100424e4();
  }
  iVar5 = 199;
  do {
    *(undefined1 *)(*(int *)(param_1 + 6) + iVar5) = 0xff;
    bVar1 = iVar5 != 0;
    iVar5 = (int)(short)((short)iVar5 + -1);
  } while (bVar1);
  if ((param_1[4] & 0x10U) == 0) {
    iVar5 = FUN_100427cc(param_1,0);
    if (iVar5 != 0) {
      return 1;
    }
    if ((0xe < iVar4) && (iVar5 = FUN_100427cc(param_1,1), iVar5 != 0)) {
      return 1;
    }
    if ((iVar4 == 1) && (iVar5 = FUN_100428dc(param_1), iVar5 != 0)) {
      return 1;
    }
  }
  puVar3 = _DAT_4bee8a85;
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002598(_DAT_4bee8a85);
  }
  piVar2 = _DAT_30630014;
  _DAT_80410014 = *puVar3;
  _DAT_4bffff89 = (int *)&DAT_80410014;
  if (_DAT_30630014 != (int *)0x0) {
    FUN_10002598(_DAT_30630014);
  }
  _DAT_60000000 = *piVar2;
  FUN_10042ee4(param_1,iVar4);
  if ((*(short *)(*_DAT_4bffff89 + param_1[2] * 0x138 + param_1[3] * 2) != 0x7531) ||
     ((*(byte *)(_DAT_60000000 + param_1[2] * 0x9c + (int)param_1[3]) & 0x80) != 0)) {
    *(undefined2 *)(*_DAT_4bffff89 + param_1[2] * 0x138 + param_1[3] * 2) = 0xffff;
    iVar5 = 0;
    do {
      iVar6 = FUN_10043248(param_1,iVar5);
      iVar5 = (int)(short)((short)iVar5 + 1);
      if (iVar6 != 0) break;
    } while (iVar5 < 2);
    if ((iVar6 == 1) && ((param_1[4] & 0x10U) == 0)) {
      FUN_100439a4(param_1);
      if (iVar4 < 0xf) {
        FUN_10043c84(iVar4,param_1,0);
      }
      else {
        FUN_10043c84(iVar4,param_1,1);
      }
    }
  }
  FUN_10042d2c(param_1,0);
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002ad8(_DAT_4bee8a85);
  }
  if (_DAT_30630014 != (int *)0x0) {
    FUN_10002ad8(_DAT_30630014);
  }
  return iVar6;
}



// Function: FUN_10044110 at 10044110
// Size: 888 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044110(short param_1,short param_2)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined **local_5c;
  
  if (_DAT_3860ffff == 0) {
    FUN_100424e4();
  }
  puVar4 = _DAT_4bee8a85;
  if ((param_2 != 0) || (_DAT_30210038 != param_1)) {
    _DAT_809f0004 = (ushort)(param_1 == 0xe);
    ppuVar5 = &.TVect::OCECToRString;
    _DAT_30210038 = param_1;
    if (_DAT_4bee8a85 != (undefined4 *)0x0) {
      FUN_10002598(_DAT_4bee8a85);
      ppuVar5 = local_5c;
    }
    _DAT_80410014 = *puVar4;
    *(undefined1 **)ppuVar5[-0xc1] = &DAT_80410014;
    piVar3 = _DAT_30630014;
    if (_DAT_30630014 != (int *)0x0) {
      FUN_10002598(_DAT_30630014);
    }
    _DAT_60000000 = *piVar3;
    iVar6 = 0x6f;
    do {
      iVar10 = 0x9b;
      do {
        iVar8 = (int)*(char *)(_DAT_4bffe775 +
                               (*(uint *)(_DAT_38800000 + iVar10 * 0xe0 + iVar6 * 2) >> 0x18) +
                              0x711);
        if (param_1 == 0xe) {
          if ((*(uint *)(_DAT_807f0004 + iVar10 * 0x70 + iVar6) >> 0x18 & 0x1f) == 0) {
            uVar7 = (undefined1)*(undefined2 *)(&DAT_39200000 + iVar8 * 2);
          }
          else {
            uVar7 = 1;
          }
          *(undefined1 *)(_DAT_60000000 + iVar6 * 0x9c + iVar10) = uVar7;
        }
        else {
          if ((*(uint *)(_DAT_807f0004 + iVar10 * 0x70 + iVar6) >> 0x18 & 0x1f) == 0) {
            uVar7 = (undefined1)*(undefined2 *)(iVar8 * 2 + -0x64370000);
          }
          else {
            uVar7 = 1;
          }
          *(undefined1 *)(_DAT_60000000 + iVar6 * 0x9c + iVar10) = uVar7;
        }
        if (iVar8 - 1U < 10) {
          return;
        }
        if ((*(uint *)(_DAT_38800000 + iVar10 * 0xe0 + iVar6 * 2) >> 0x17 & 1) != 0) {
          iVar8 = _DAT_60000000 + iVar6 * 0x9c;
          *(byte *)(iVar8 + iVar10) = *(byte *)(iVar8 + iVar10) | 0x10;
        }
        bVar1 = iVar10 != 0;
        iVar10 = (int)(short)((short)iVar10 + -1);
      } while (bVar1);
      bVar1 = iVar6 != 0;
      iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    sVar2 = *(short *)(_DAT_4bffe775 + 0x1602);
    if (sVar2 != 0) {
      do {
        sVar2 = sVar2 + -1;
        iVar6 = sVar2 * 0x42;
        iVar10 = _DAT_4bffe775 + iVar6;
        iVar9 = (int)*(short *)(iVar10 + 0x1604);
        iVar8 = (int)*(short *)(iVar10 + 0x1606);
        iVar10 = -(int)*(char *)(_DAT_4bffe775 +
                                 (*(uint *)(_DAT_38800000 + iVar8 * 0xe0 + iVar9 * 2) >> 0x18) +
                                0x711);
        iVar11 = iVar10 + 10;
        if (((iVar11 + (-(uint)(iVar11 == 0) - (iVar10 + 9)) & 0xff) != 0) &&
           (iVar10 = FUN_10042a24(iVar9,iVar8), iVar10 != 0)) {
          iVar6 = iVar6 + _DAT_4bffe775;
          iVar10 = (int)*(short *)(iVar6 + 0x1606);
          iVar6 = *(short *)(iVar6 + 0x1604) * 0x9c;
          *(byte *)(_DAT_60000000 + iVar6 + iVar10) =
               *(byte *)(_DAT_60000000 + iVar6 + iVar10) | 0x18;
          iVar8 = iVar6 + _DAT_60000000 + iVar10;
          *(byte *)(iVar8 + 0x9c) = *(byte *)(iVar8 + 0x9c) | 0x18;
          iVar8 = iVar6 + _DAT_60000000 + iVar10;
          *(byte *)(iVar8 + 1) = *(byte *)(iVar8 + 1) | 0x18;
          iVar10 = iVar6 + _DAT_60000000 + iVar10;
          *(byte *)(iVar10 + 0x9d) = *(byte *)(iVar10 + 0x9d) | 0x18;
        }
      } while (sVar2 != 0);
    }
    if (_DAT_4bee8a85 != (undefined4 *)0x0) {
      FUN_10002ad8(_DAT_4bee8a85);
    }
    if (_DAT_30630014 != (int *)0x0) {
      FUN_10002ad8(_DAT_30630014);
    }
  }
  return;
}



// Function: FUN_100445a8 at 100445a8
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100445a8(undefined2 *param_1,undefined4 param_2)

{
  *param_1 = *_DAT_817f0000;
  param_1[1] = _DAT_817f0000[1];
  param_1[2] = _DAT_817f0000[9];
  param_1[3] = _DAT_817f0000[10];
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[5] = _DAT_4beeb891;
  param_1[4] = _DAT_7c0803a6;
  return;
}



// Function: FUN_100445fc at 100445fc
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_100445fc(int param_1,short param_2,short param_3,short param_4,short *param_5)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(_DAT_60000000 + param_2 * 0x9c + (int)param_3);
  bVar2 = bVar1 & 7;
  if (*param_5 != 0) {
    return 0x80;
  }
  if (*(short *)(param_1 + 10) == 2) {
    if (((bVar1 & 8) != 0) && ((bVar1 & 0x10) == 0)) {
      return 2;
    }
    if ((bVar1 & 7) == 0) {
      bVar2 = 2;
    }
    if (bVar2 < 3) {
      return bVar2;
    }
    return 2;
  }
  if (*(short *)(param_1 + 10) != 1) {
    return bVar2;
  }
  if ((bVar1 & 0x10) == 0) {
    if (param_4 == 0) {
      if ((bVar1 & 8) == 0) goto LAB_100446d8;
    }
    else if ((bVar1 & 8) != 0) goto LAB_100446d8;
    *param_5 = 1;
  }
LAB_100446d8:
  if (((*(ushort *)(param_1 + 8) != 0) && (2 < bVar2)) &&
     ((((*(ushort *)(param_1 + 8) & 1) != 0 && ((bVar1 & 0x20) != 0)) ||
      (((*(ushort *)(param_1 + 8) & 2) != 0 && ((bVar1 & 0x40) != 0)))))) {
    bVar2 = 2;
  }
  return bVar2;
}



// Function: FUN_10044728 at 10044728
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10044728(short *param_1,short param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined **local_64;
  undefined2 local_3e;
  short local_3c;
  short local_3a;
  
  local_3a = *param_1;
  local_3c = param_1[1];
  uVar2 = param_1[4];
  local_3e = 0;
  iVar7 = 0;
  iVar9 = 0;
  if (param_3 != 0) {
    iVar8 = 99;
    do {
      *(undefined1 *)(param_3 + iVar8) = 0xff;
      bVar1 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar1);
  }
  puVar3 = _DAT_4bee8a85;
  ppuVar4 = &.TVect::OCECToRString;
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002598(_DAT_4bee8a85);
    ppuVar4 = local_64;
  }
  _DAT_80410014 = *puVar3;
  *(undefined1 **)ppuVar4[-0xc1] = &DAT_80410014;
  puVar3 = _DAT_30630014;
  if (_DAT_30630014 != (undefined4 *)0x0) {
    FUN_10002598(_DAT_30630014);
    ppuVar4 = local_64;
  }
  *(undefined4 *)ppuVar4[-0xc0] = *puVar3;
  iVar8 = 0;
  do {
    if ((*(char *)(*(int *)(param_1 + 6) + iVar8) == -1) ||
       (iVar5 = FUN_10017170(&local_3a,&local_3c,*(char *)(*(int *)(param_1 + 6) + iVar8)),
       iVar5 == 0)) break;
    iVar5 = FUN_100445fc(param_1,(int)local_3a,(int)local_3c,uVar2 & 8,&local_3e);
    iVar5 = iVar9 + iVar5;
    iVar9 = (int)(short)iVar5;
    if ((param_3 != 0) && (iVar8 < 100)) {
      if (iVar9 < 0xff) {
        uVar6 = (undefined1)iVar5;
      }
      else {
        uVar6 = 0xff;
      }
      *(undefined1 *)(param_3 + iVar8) = uVar6;
    }
    if (iVar9 <= param_2) {
      iVar7 = (int)(short)((short)iVar7 + 1);
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 100);
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002ad8(_DAT_4bee8a85);
  }
  if (_DAT_30630014 != (undefined4 *)0x0) {
    FUN_10002ad8(_DAT_30630014);
  }
  return iVar7;
}



// Function: FUN_100448e4 at 100448e4
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100448e4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 ushort param_5)

{
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  ushort local_d0;
  undefined2 local_ce;
  undefined1 *local_cc;
  undefined1 auStack_c8 [200];
  
  local_cc = auStack_c8;
  local_d0 = param_5 | 0x10;
  local_d8 = param_2;
  local_d6 = param_3;
  local_d4 = param_2;
  local_d2 = param_3;
  local_ce = param_4;
  _DAT_80010040 = param_1;
  FUN_10043e60(&local_d8);
  return;
}



// Function: FUN_10044950 at 10044950
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10044950(void)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined **local_2c;
  
  if (_DAT_3860ffff == 0) {
    FUN_100424e4();
  }
  puVar1 = _DAT_4bee8a85;
  ppuVar2 = &.TVect::OCECToRString;
  if (_DAT_4bee8a85 != (undefined4 *)0x0) {
    FUN_10002598(_DAT_4bee8a85);
    ppuVar2 = local_2c;
  }
  _DAT_80410014 = *puVar1;
  *(undefined1 **)ppuVar2[-0xc1] = &DAT_80410014;
  return &DAT_80410014;
}



// Function: FUN_100449bc at 100449bc
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100449bc(void)

{
  undefined4 local_2c;
  
  if (_DAT_4bee8a85 != 0) {
    FUN_10002ad8();
  }
  FUN_10001f50(_DAT_4bee8a85);
  **(undefined2 **)(local_2c + -0x19fc) = 0;
  return;
}



// Function: FUN_10044a10 at 10044a10
// Size: 592 bytes

undefined4 FUN_10044a10(int param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int local_6c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_10000b70(param_2);
    if (*param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*param_2 + 2);
      uVar6 = *(undefined4 *)(*param_2 + 6);
      local_34._2_2_ = (short)uVar6;
      local_38._2_2_ = (short)uVar2;
      iVar9 = (int)(short)(local_34._2_2_ - local_38._2_2_);
      local_34._0_2_ = (short)((uint)uVar6 >> 0x10);
      local_38._0_2_ = (short)((uint)uVar2 >> 0x10);
      iVar8 = (int)(short)(local_34._0_2_ - local_38._0_2_);
      local_38 = uVar2;
      local_34 = uVar6;
      iVar3 = FUN_1000a12c(param_1,iVar9,iVar8,8,0,1);
      if (iVar3 == 0) {
        FUN_100db1ec();
        uVar2 = 0;
      }
      else {
        iVar3 = FUN_10001d70(*(undefined4 *)(*(int *)(param_1 + 0x10) + 2));
        if (iVar3 == 0) {
          piVar4 = (int *)FUN_10001170();
          sVar1 = *(short *)(**(int **)(*piVar4 + 0x16) + 0x20);
          FUN_10003108(auStack_40,0,0,iVar9,iVar8);
          uVar5 = FUN_100f1574(1);
          if (sVar1 == 8) {
            uVar7 = 0;
            uVar2 = 0;
          }
          else {
            uVar7 = 8;
            uVar2 = **(undefined4 **)(local_6c + -0x1cc);
          }
          FUN_10003198(param_1 + 0x10,uVar7,auStack_40,uVar2,0,0x10000000);
          **(undefined1 **)(local_6c + -0x3c) = uVar5;
          iVar3 = FUN_10001d70(*(undefined4 *)(*(int *)(param_1 + 0x10) + 2));
          if (iVar3 == 0) {
            return 0;
          }
        }
        FUN_10000870(&local_44,&local_48);
        iVar3 = *(int *)(param_1 + 0x10);
        FUN_10000888(iVar3,0);
        FUN_10003108(&local_38,0,0,iVar9,iVar8);
        FUN_10000b70(param_2);
        FUN_100b2268(0x408600a0);
        FUN_100008b8();
        FUN_100b2268(0x4086069a);
        FUN_100021c0();
        FUN_10000750(param_2,&local_38);
        FUN_10003468(*(undefined4 *)(iVar3 + 2));
        FUN_10000888(local_44,local_48);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// Function: FUN_10044c60 at 10044c60
// Size: 216 bytes

void FUN_10044c60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short sVar4;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_110 [256];
  
  sVar4 = FUN_100012c0(param_3);
  while( true ) {
    sVar4 = sVar4 + -1;
    iVar1 = (int)sVar4;
    if (iVar1 < 0) break;
    if ((*(char *)(param_3 + iVar1) == ' ') || (*(char *)(param_3 + iVar1) == '.')) {
      *(undefined1 *)(param_3 + iVar1) = 0;
    }
  }
  uVar2 = FUN_100012c0(param_3);
  if (8 < uVar2) {
    *(undefined1 *)(param_3 + 8) = 0;
  }
  FUN_100b19f4(auStack_110,param_3);
  uVar3 = FUN_100b1c84(auStack_110);
  uVar3 = FUN_10003540(0x50494354,uVar3);
  FUN_100db328();
  FUN_10044a10(param_1,uVar3);
  return;
}



// Function: FUN_10044d38 at 10044d38
// Size: 84 bytes

void FUN_10044d38(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10001728(0x50494354,(int)param_2);
  FUN_100db328();
  FUN_10044a10(param_1,uVar1);
  return;
}



// Function: FUN_10044d8c at 10044d8c
// Size: 832 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044d8c(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_d4;
  ushort local_98 [2];
  undefined1 auStack_94 [56];
  undefined1 auStack_5c [56];
  
  iVar7 = (int)param_1;
  puVar3 = auStack_94;
  uVar1 = FUN_100014b8();
  if (((*(uint *)(&DAT_8186000c + iVar7 * 0x14) >> 0x18 & 1) == 0) ||
     (iVar2 = FUN_100001e0(&DAT_80df0024,*(int *)(local_d4 + -0x19c8) + 0x8c), iVar2 == 0)) {
    if (*(uint *)(&DAT_8186000c + iVar7 * 0x14) >> 0x1e == 3) {
      FUN_1007ee44(*(undefined4 *)(_DAT_57c407bd + 0x88));
      if (iVar7 == 0x2a) {
        FUN_10001dd0(puVar3,*(int *)(local_d4 + -0x19c8) + 0xb4,&DAT_419e0020);
      }
      else {
        FUN_10001dd0(puVar3,*(int *)(local_d4 + -0x19c8) + 0xc0,&DAT_419e0020,iVar7 + -0x10);
      }
    }
    else if (*(uint *)(&DAT_8186000c + iVar7 * 0x14) >> 0x1e == 1) {
      piVar6 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x2b8));
      puVar3 = (undefined1 *)FUN_1005f6b0(3,iVar7);
    }
    else if (*(uint *)(&DAT_8186000c + iVar7 * 0x14) >> 0x1e == 2) {
      piVar6 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x14c);
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x2b8));
      puVar3 = (undefined1 *)FUN_1005f6b0(3,iVar7);
    }
    else {
      FUN_100efc78((int)**(short **)(local_d4 + -0x60));
      puVar3 = (undefined1 *)FUN_1005f6b0(3,iVar7);
    }
  }
  else {
    FUN_1007f034(*(undefined4 *)(_DAT_57c407bd + 0x88));
    if (iVar7 == 9) {
      FUN_10001dd0(puVar3,*(int *)(local_d4 + -0x19c8) + 0x90,&DAT_80df0024);
    }
    else if (iVar7 == 5) {
      FUN_10001dd0(puVar3,*(int *)(local_d4 + -0x19c8) + 0x98,&DAT_80df0024);
    }
    else if (iVar7 == 0x26) {
      FUN_10001dd0(puVar3,*(int *)(local_d4 + -0x19c8) + 0xa0,&DAT_80df0024);
    }
    else {
      FUN_10001dd0(puVar3,*(int *)(local_d4 + -0x19c8) + 0xa8,&DAT_80df0024,iVar7 + -0x47);
    }
  }
  iVar2 = FUN_10044c60(*(undefined4 *)(iVar7 * 0x14 + -0x7e79fff0),auStack_5c,puVar3);
  if (iVar2 == 0) {
    FUN_100db26c(0);
  }
  iVar7 = iVar7 * 0x14;
  uVar5 = *(uint *)(&DAT_8186000c + iVar7);
  *(uint *)(&DAT_8186000c + iVar7) = uVar5 | 0x20000000;
  if ((uVar5 & 0x4000000) != 0) {
    uVar4 = FUN_10001290(*(undefined4 *)(*(int *)(iVar7 + -0x7e79fff0) + 0x10));
    iVar2 = FUN_10001d70(uVar4);
    if (iVar2 != 0) {
      local_98[0] = (ushort)((uint)*(undefined4 *)(&DAT_8186000c + iVar7) >> 0x19) & 1;
      FUN_1005262c(local_98,*(undefined4 *)(iVar7 + -0x7e79fff0),
                   *(undefined4 *)(iVar7 + -0x7e79ffe8),(int)*(short *)(iVar7 + -0x7e79ffe4));
      *(uint *)(&DAT_8186000c + iVar7) =
           ((int)(short)local_98[0] & 1U) << 0x19 | *(uint *)(&DAT_8186000c + iVar7) & 0xfdffffff;
      FUN_10003468(uVar4);
    }
  }
  FUN_10000318(uVar1);
  return;
}



// Function: FUN_100450f4 at 100450f4
// Size: 124 bytes

void FUN_100450f4(short param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x14;
  *(uint *)(&DAT_8186000c + iVar1) = *(uint *)(&DAT_8186000c + iVar1) & 0xddffffff;
  FUN_1000a094(*(undefined4 *)(iVar1 + -0x7e79fff0));
  if ((*(uint *)(&DAT_8186000c + iVar1) >> 0x1a & 1) != 0) {
    FUN_1000a094(*(undefined4 *)(iVar1 + -0x7e79ffe8));
  }
  return;
}



// Function: FUN_10045170 at 10045170
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045170(void)

{
  int iVar1;
  
  FUN_100099cc();
  iVar1 = 0;
  if (0 < _DAT_a8660008) {
    do {
      if (((*(uint *)(&DAT_8186000c + iVar1 * 0x14) >> 0x1d & 1) != 0) &&
         (*(uint *)(&DAT_8186000c + iVar1 * 0x14) >> 0x1e != 0)) {
        FUN_100450f4(iVar1);
      }
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < _DAT_a8660008);
  }
  return;
}



// Function: FUN_100451f4 at 100451f4
// Size: 184 bytes

void FUN_100451f4(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  uVar1 = FUN_10001290(*(undefined4 *)(*(int *)(iVar3 * 0x14 + -0x7e79fff0) + 0x10));
  iVar2 = FUN_10001d70(uVar1);
  if (iVar2 == 0) {
    FUN_10044d8c(iVar3);
    FUN_10001d70(uVar1);
  }
  if ((*(uint *)(&DAT_8186000c + iVar3 * 0x14) >> 0x1a & 1) != 0) {
    FUN_10001290(*(undefined4 *)(*(int *)(iVar3 * 0x14 + -0x7e79ffe8) + 0x10));
    FUN_10001d70();
  }
  return;
}



// Function: FUN_1004530c at 1004530c
// Size: 228 bytes

void FUN_1004530c(short param_1)

{
  int iVar1;
  undefined1 auStack_148 [256];
  undefined1 auStack_48 [60];
  
  iVar1 = (int)param_1;
  if (*(int *)(*(int *)(iVar1 * 0x14 + -0x7e79fff0) + 0x10) == 0) {
    FUN_10001dd0(auStack_48,0x2f8900ec,iVar1);
    FUN_100b19f4(auStack_148,auStack_48);
    FUN_100b1c84(auStack_148);
    FUN_100023b8();
  }
  else {
    iVar1 = iVar1 * 0x14;
    FUN_10001290(*(undefined4 *)(*(int *)(iVar1 + -0x7e79fff0) + 0x10));
    FUN_10003468();
    if ((*(uint *)(&DAT_8186000c + iVar1) >> 0x1a & 1) != 0) {
      FUN_10001290(*(undefined4 *)(*(int *)(iVar1 + -0x7e79ffe8) + 0x10));
      FUN_10003468();
    }
  }
  return;
}



// Function: FUN_100453f0 at 100453f0
// Size: 1752 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100453f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_414;
  undefined1 auStack_3e4 [80];
  undefined1 auStack_394 [72];
  undefined1 auStack_34c [256];
  undefined1 auStack_24c [256];
  undefined1 auStack_14c [256];
  ushort local_4c [2];
  char local_48 [16];
  undefined1 auStack_38 [8];
  
  local_4c[0] = 0;
  _DAT_6000000c = _DAT_2f89011c & 0xff000000;
  _DAT_60000000 = _DAT_2f890110;
  _DAT_60000004 = _DAT_2f890114;
  _DAT_60000008 = _DAT_2f890118;
  iVar2 = FUN_1005f36c(0x44415420,0x60000000);
  if ((iVar2 != 0) && (iVar2 = FUN_10051f98(0x44415420,0x60000000,1), iVar2 != 0)) {
    FUN_10052490(iVar2,local_48,10);
    FUN_100523a8(iVar2,1);
    local_48[7] = 0;
    iVar2 = 0;
    do {
      cVar1 = local_48[iVar2];
      if (((cVar1 == ' ') || (cVar1 == '\r')) || (cVar1 == '\t')) {
        local_48[iVar2] = '\0';
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    iVar2 = FUN_100001e0(local_48,0x2f890120);
    if (iVar2 != 0) {
      FUN_100b19f4(auStack_14c,local_48);
      FUN_100b19f4(auStack_24c,*(int *)(local_414 + -0x19c8) + 0x124);
      uVar3 = FUN_100b1c84(auStack_24c);
      uVar4 = FUN_100b1c84(auStack_14c);
      iVar2 = FUN_10001998(uVar4,uVar3,0,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(**(int **)(local_414 + -0x554) + 0x88);
        if (*(int *)(iVar2 + 0x154) == 0) {
          FUN_100b19f4(auStack_34c,local_48);
          FUN_10027a58(3,auStack_34c,0,auStack_394);
          FUN_1007eea4(iVar2,auStack_394);
          FUN_10117884((int)*(int **)(iVar2 + 0x154) +
                       (int)*(short *)(**(int **)(iVar2 + 0x154) + 0x118));
        }
        else {
          FUN_1007ef3c(iVar2);
        }
        iVar2 = *(int *)(local_414 + -0x19c8);
        FUN_10001dd0(auStack_3e4,iVar2 + 300,local_48);
        FUN_10044d8c(0x1a);
        FUN_10044d8c(0x1b);
        FUN_10001290(*(undefined4 *)(_DAT_8186022c + 0x10));
        FUN_10002c10();
        FUN_10044d8c(0x29);
        FUN_10001290(*(undefined4 *)(_DAT_81860344 + 0x10));
        FUN_10002c10();
        iVar2 = FUN_10044c60(0x48001995,iVar2 + 0x134,auStack_3e4);
        if (iVar2 != 0) {
          if (_DAT_480019a5 != 0) {
            FUN_10009a98(_DAT_480019a5);
          }
          FUN_1005262c(local_4c,0x48001995,&DAT_7c7f1814,0xf4);
          if (_DAT_7c7f1824 != 0) {
            FUN_10009a98(_DAT_7c7f1824);
          }
          FUN_100451f4(0x1a);
          FUN_10009b48(_DAT_81860218,0x168,0,0x28,0x28,0x48001995,0x50,200);
          FUN_1004530c(0x1a);
          FUN_100451f4(0x1b);
          if (*(int *)(_DAT_8186022c + 0x10) != 0) {
            FUN_10009a98(*(int *)(_DAT_8186022c + 0x10));
          }
          iVar2 = 0;
          do {
            iVar5 = 0;
            do {
              FUN_10009b48(0x48001995,0x50,200,0x28,0x28,_DAT_8186022c,
                           (int)(short)((short)(iVar5 * 5) * 8),(int)(short)((short)(iVar2 * 5) * 8)
                          );
              iVar5 = (int)(short)((short)iVar5 + 1);
            } while (iVar5 < 0xe);
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < 2);
          iVar2 = 2;
          do {
            iVar5 = 0;
            do {
              FUN_10009b48(0x48001995,0x50,200,0x28,0x28,_DAT_8186022c,
                           (int)(short)((short)(iVar5 * 5) * 8),(int)(short)((short)(iVar2 * 5) * 8)
                          );
              iVar5 = (int)(short)((short)iVar5 + 1);
            } while (iVar5 < 4);
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < 4);
          iVar2 = 4;
          do {
            iVar5 = 0;
            do {
              FUN_10009b48(0x48001995,0x50,200,0x28,0x28,_DAT_8186022c,
                           (int)(short)((short)(iVar5 * 5) * 8),(int)(short)((short)(iVar2 * 5) * 8)
                          );
              iVar5 = (int)(short)((short)iVar5 + 1);
            } while (iVar5 < 0x10);
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < 6);
          FUN_10009d38(0x48001995,0,0xa0,0x50,0x50,_DAT_8186022c,0,0);
          FUN_10009d38(0x48001995,0,0,0x1e0,0x50,_DAT_8186022c,0x50,0);
          FUN_10009d38(0x48001995,0x1e0,0,0xa0,0x50,_DAT_8186022c,0,0x50);
          FUN_10009d38(0x48001995,0,0x50,0x280,0x50,_DAT_8186022c,0,0xa0);
          FUN_1004530c(0x1b);
          if (*(int *)(_DAT_8186022c + 0x10) != 0) {
            FUN_10009b00(*(int *)(_DAT_8186022c + 0x10));
          }
          FUN_100451f4(0x29);
          if (*(int *)(_DAT_81860344 + 0x10) != 0) {
            FUN_10009a98(*(int *)(_DAT_81860344 + 0x10));
          }
          uVar3 = FUN_100226b0(auStack_38,0xc0,0x28,0x180,0x28);
          FUN_10047cbc(_DAT_81860344,uVar3,0xf4);
          FUN_10009d38(0x48001995,0x50,0xa0,0x180,0x28,_DAT_81860344,0xc0,0x28);
          if (_DAT_7c7f1824 != 0) {
            FUN_10009b00(_DAT_7c7f1824);
          }
          FUN_1000a094(0x48001995);
          FUN_1000a094(&DAT_7c7f1814);
          local_4c[0] = (ushort)(_DAT_81860340 >> 0x19) & 1;
          FUN_1005262c(local_4c,_DAT_81860344,_DAT_8186034c,0xf4);
          _DAT_81860340 = ((int)(short)local_4c[0] & 1U) << 0x19 | _DAT_81860340 & 0xfdffffff;
          FUN_1004530c(0x29);
          if (*(int *)(_DAT_81860344 + 0x10) != 0) {
            FUN_10009b00(*(int *)(_DAT_81860344 + 0x10));
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_10045ac8 at 10045ac8
// Size: 1092 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045ac8(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_30c;
  undefined1 auStack_2e8 [72];
  undefined1 auStack_2a0 [256];
  undefined1 auStack_1a0 [72];
  undefined1 auStack_158 [256];
  char local_58 [40];
  
  iVar4 = *(int *)(_DAT_57c407bd + 0x88);
  FUN_10117884((int)*(int **)(iVar4 + 0x148) + (int)*(short *)(**(int **)(iVar4 + 0x148) + 0x2b8));
  FUN_100099cc();
  iVar3 = *(int *)(local_30c + -0x19c8);
  _DAT_60000000 = *(undefined4 *)(iVar3 + 0x138);
  _DAT_60000004 = *(undefined4 *)(iVar3 + 0x13c);
  _DAT_60000008 = *(undefined4 *)(iVar3 + 0x140);
  _DAT_6000000c = *(uint *)(iVar3 + 0x144) & 0xff000000;
  FUN_10117884((int)*(int **)(iVar4 + 0x148) + (int)*(short *)(**(int **)(iVar4 + 0x148) + 0x2b8));
  iVar3 = FUN_1005f36c(0x44415420,0x60000000);
  bVar2 = false;
  if ((iVar3 != 0) && (iVar3 = FUN_10051f98(0x44415420,0x60000000,1), iVar3 != 0)) {
    FUN_10052490(iVar3,local_58,8);
    FUN_100523a8(iVar3,1);
    local_58[7] = 0;
    iVar3 = 0;
    do {
      cVar1 = local_58[iVar3];
      if (((cVar1 == ' ') || (cVar1 == '\r')) || (cVar1 == '\t')) {
        local_58[iVar3] = '\0';
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar3 = FUN_100001e0(local_58,*(int *)(local_30c + -0x19c8) + 0x148);
    if (iVar3 != 0) {
      bVar2 = true;
    }
  }
  if (bVar2) {
    iVar3 = 0;
    do {
      *(uint *)(iVar3 * 0x14 + -0x7e79feb4) = *(uint *)(iVar3 * 0x14 + -0x7e79feb4) | 0xc0000000;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 9);
    _DAT_81860354 = _DAT_81860354 | 0xc0000000;
    FUN_10001e78(&DAT_419e0020,local_58);
    if (*(int *)(iVar4 + 0x150) == 0) {
      FUN_100b19f4(auStack_158,local_58);
      FUN_10027a58(2,auStack_158,0,auStack_1a0);
      FUN_1007edac(iVar4,auStack_1a0);
      FUN_10117884((int)*(int **)(iVar4 + 0x150) +
                   (int)*(short *)(**(int **)(iVar4 + 0x150) + 0x118));
    }
  }
  else {
    iVar3 = 0;
    do {
      *(uint *)(iVar3 * 0x14 + -0x7e79feb4) =
           *(uint *)(iVar3 * 0x14 + -0x7e79feb4) & 0x3fffffff | 0x80000000;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 9);
    _DAT_81860354 = _DAT_81860354 & 0x3fffffff | 0x80000000;
    DAT_419e0020 = *(undefined1 *)(*(int *)(local_30c + -0x19c8) + 0x14c);
    FUN_10001dd0(0x60000000,*(int *)(local_30c + -0x19c8) + 0x150,local_58);
  }
  iVar3 = *(int *)(local_30c + -0x19c8);
  _DAT_60000000 = *(undefined4 *)(iVar3 + 0x15c);
  _DAT_60000004 = *(undefined4 *)(iVar3 + 0x160);
  _DAT_60000008 = *(undefined4 *)(iVar3 + 0x164);
  _DAT_6000000c = *(uint *)(iVar3 + 0x168) & 0xff000000;
  FUN_10117884((int)*(int **)(iVar4 + 0x148) + (int)*(short *)(**(int **)(iVar4 + 0x148) + 0x2b8));
  iVar3 = FUN_1005f36c(0x44415420,0x60000000);
  bVar2 = false;
  if ((iVar3 != 0) && (iVar3 = FUN_10051f98(0x44415420,0x60000000,1), iVar3 != 0)) {
    FUN_10052490(iVar3,local_58,8);
    FUN_100523a8(iVar3,1);
    local_58[7] = 0;
    iVar3 = 0;
    do {
      cVar1 = local_58[iVar3];
      if (((cVar1 == ' ') || (cVar1 == '\r')) || (cVar1 == '\t')) {
        local_58[iVar3] = '\0';
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar3 = FUN_100001e0(local_58,*(int *)(local_30c + -0x19c8) + 0x16c);
    if (iVar3 != 0) {
      FUN_10001dd0(0x60000000,*(int *)(local_30c + -0x19c8) + 0x170,local_58);
      bVar2 = true;
    }
  }
  if (bVar2) {
    FUN_10001e78(&DAT_80df0024,local_58);
    if (*(int *)(iVar4 + 0x158) == 0) {
      FUN_100b19f4(auStack_2a0,local_58);
      FUN_10027a58(4,auStack_2a0,0,auStack_2e8);
      FUN_1007ef9c(iVar4,auStack_2e8);
      FUN_10117884((int)*(int **)(iVar4 + 0x158) +
                   (int)*(short *)(**(int **)(iVar4 + 0x158) + 0x118));
    }
  }
  else {
    DAT_80df0024 = *(undefined1 *)(*(int *)(local_30c + -0x19c8) + 0x180);
  }
  FUN_10117884((int)*(int **)(iVar4 + 0x148) + (int)*(short *)(**(int **)(iVar4 + 0x148) + 0x2b8));
  FUN_100453f0();
  return;
}



// Function: FUN_10045f0c at 10045f0c
// Size: 288 bytes

void FUN_10045f0c(short param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = *(int *)(iVar5 * 0x14 + -0x7e79fff0);
  bVar1 = true;
  if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) {
    iVar4 = FUN_10001290(iVar4);
    if (iVar4 != 0) {
      iVar2 = FUN_10001d70(iVar4);
      if (iVar2 != 0) {
        FUN_10003468(iVar4);
        bVar1 = false;
      }
    }
  }
  uVar3 = *(uint *)(&DAT_8186000c + iVar5 * 0x14) >> 0x1a & 1;
  if ((((uVar3 != 0) && (iVar4 = *(int *)(iVar5 * 0x14 + -0x7e79ffe8), iVar4 != 0)) &&
      (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) &&
     ((iVar4 = FUN_10001290(iVar4), iVar4 != 0 && (iVar2 = FUN_10001d70(iVar4), iVar2 != 0)))) {
    FUN_10003468(iVar4);
    uVar3 = 0;
  }
  if ((bVar1) || (uVar3 != 0)) {
    FUN_10044d8c(iVar5);
  }
  return;
}



// Function: FUN_1004602c at 1004602c
// Size: 304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004602c(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sStack0000001c;
  short sStack0000001e;
  short sStack00000020;
  short sStack00000022;
  short sStack00000024;
  short sStack00000026;
  
  iVar2 = (int)param_1;
  _sStack0000001c = param_2;
  _sStack00000020 = param_3;
  _sStack00000024 = param_4;
  if ((*(uint *)(&DAT_8186000c + iVar2 * 0x14) >> 0x1d & 1) == 0) {
    iVar1 = 0;
    if (0 < _DAT_a8660008) {
      do {
        if ((*(uint *)(&DAT_8186000c + iVar1 * 0x14) >> 0x1d & 1) != 0) {
          if (*(char *)(iVar1 * 0x14 + -0x7e79ffec) == *(char *)(iVar2 * 0x14 + -0x7e79ffec)) {
            FUN_100450f4(iVar1);
            break;
          }
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < _DAT_a8660008);
    }
    FUN_10044d8c(iVar2);
  }
  else {
    FUN_10045f0c(iVar2);
  }
  FUN_10009b48(*(undefined4 *)(iVar2 * 0x14 + -0x7e79fff0),(int)sStack0000001c,(int)sStack0000001e,
               (int)sStack00000020,(int)sStack00000022,_FUN_10116698,(int)sStack00000024,
               (int)sStack00000026);
  return;
}



// Function: FUN_1004615c at 1004615c
// Size: 364 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004615c(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sStack0000001c;
  short sStack0000001e;
  short sStack00000020;
  short sStack00000022;
  short sStack00000024;
  short sStack00000026;
  
  iVar2 = (int)param_1;
  _sStack0000001c = param_2;
  _sStack00000020 = param_3;
  _sStack00000024 = param_4;
  if ((*(uint *)(&DAT_8186000c + iVar2 * 0x14) >> 0x1d & 1) == 0) {
    iVar1 = 0;
    if (0 < _DAT_a8660008) {
      do {
        if ((*(uint *)(&DAT_8186000c + iVar1 * 0x14) >> 0x1d & 1) != 0) {
          if (*(char *)(iVar1 * 0x14 + -0x7e79ffec) == *(char *)(iVar2 * 0x14 + -0x7e79ffec)) {
            FUN_100450f4(iVar1);
            break;
          }
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < _DAT_a8660008);
    }
    FUN_10044d8c(iVar2);
  }
  else {
    FUN_10045f0c(iVar2);
  }
  if ((*(uint *)(&DAT_8186000c + iVar2 * 0x14) >> 0x1a & 1) == 0) {
    FUN_10047a64(*(undefined4 *)(iVar2 * 0x14 + -0x7e79fff0),&stack0x0000001c,(int)sStack00000024,
                 (int)sStack00000026);
  }
  else {
    FUN_10009d38(*(undefined4 *)(iVar2 * 0x14 + -0x7e79fff0),(int)sStack0000001c,(int)sStack0000001e
                 ,(int)sStack00000020,(int)sStack00000022,_FUN_10116698,(int)sStack00000024,
                 (int)sStack00000026);
  }
  return;
}



// Function: FUN_100462c8 at 100462c8
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100462c8(short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if ((*(uint *)(&DAT_8186000c + iVar2 * 0x14) >> 0x1d & 1) == 0) {
    iVar1 = 0;
    if (0 < _DAT_a8660008) {
      do {
        if ((*(uint *)(&DAT_8186000c + iVar1 * 0x14) >> 0x1d & 1) != 0) {
          if (*(char *)(iVar1 * 0x14 + -0x7e79ffec) == *(char *)(iVar2 * 0x14 + -0x7e79ffec)) {
            FUN_100450f4(iVar1);
            break;
          }
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < _DAT_a8660008);
    }
    FUN_10044d8c(iVar2);
  }
  else {
    FUN_10045f0c(iVar2);
  }
  return;
}



// Function: FUN_1004639c at 1004639c
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004639c(short param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [30];
  short local_3a;
  
  iVar1 = FUN_10048c3c((int)param_1);
  iVar3 = 0;
  if (iVar1 < 2) {
    iVar3 = 0;
  }
  else {
    iVar4 = 1;
    if (1 < iVar1) {
      do {
        FUN_10049628((int)*(char *)(_DAT_4bffe775 + param_1 * 0x42 + iVar4 + 0x161a),auStack_58);
        uVar2 = FUN_10003768((int)local_3a);
        iVar3 = (int)(short)((short)iVar3 +
                            ((short)uVar2 >> 1) + (ushort)((short)uVar2 < 0 && (uVar2 & 1) != 0));
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < iVar1);
    }
  }
  return iVar3;
}



// Function: FUN_1004645c at 1004645c
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004645c(short param_1)

{
  int iVar1;
  ushort uVar2;
  undefined1 auStack_48 [30];
  short local_2a;
  
  iVar1 = FUN_10048c3c((int)param_1);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    FUN_10049628((int)*(char *)(_DAT_4bffe775 + param_1 * 0x42 + iVar1 + 0x1619),auStack_48);
    uVar2 = FUN_10003768((int)local_2a);
    iVar1 = (int)(short)(((short)uVar2 >> 1) + (ushort)((short)uVar2 < 0 && (uVar2 & 1) != 0));
  }
  return iVar1;
}



// Function: FUN_100464fc at 100464fc
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100464fc(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_57c407bd + 0x88);
  *(undefined2 *)(iVar1 + 0x1de) = _DAT_48000008;
  FUN_1007c714(iVar1,0x3f0);
  return;
}



// Function: FUN_1004653c at 1004653c
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004653c(void)

{
  undefined4 uVar1;
  
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004e384(4,0,0,0);
  }
  FUN_100464fc(uVar1);
  return;
}



// Function: FUN_100465a8 at 100465a8
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100465a8(short param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  int local_84;
  undefined1 auStack_60 [30];
  short local_42;
  
  psVar3 = _FUN_101175bc;
  iVar8 = (int)param_1;
  *_FUN_101175bc = 0;
  _DAT_4e800020 = 0;
  iVar4 = FUN_10048c3c(iVar8);
  if (0 < iVar4) {
    iVar4 = iVar4 + -1;
    *puRam101175c0 = (short)iVar4;
    iVar2 = iVar8 * 0x42;
    FUN_10049628((int)*(char *)(_DAT_4bffe775 + iVar2 + iVar4 + 0x161a),auStack_60);
    *(short *)(*psVar3 * 2 + _FUN_101175c4) =
         (short)*(char *)(iVar2 + _DAT_4bffe775 + iVar4 + 0x161a);
    uVar5 = FUN_10003768((int)local_42);
    sVar7 = (short)((int)uVar5 >> 1) + (ushort)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    sVar1 = *psVar3;
    *(short *)(sVar1 * 2 + *(int *)(local_84 + -0x2d8)) = sVar7;
    _DAT_4e800020 = _DAT_4e800020 + sVar7;
    *psVar3 = sVar1 + 1;
    *(undefined1 *)(iVar2 + _DAT_4bffe775 + iVar4 + 0x161a) = 0xff;
    uVar6 = FUN_10048c90(iVar8);
    *(undefined1 *)(iVar2 + _DAT_4bffe775 + 0x1618) = uVar6;
  }
  return;
}



// Function: FUN_100466d4 at 100466d4
// Size: 1704 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100466d4(short param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_914;
  undefined1 auStack_8f0 [256];
  undefined1 auStack_7f0 [256];
  undefined1 auStack_6f0 [256];
  undefined1 auStack_5f0 [256];
  undefined1 auStack_4f0 [256];
  undefined1 auStack_3f0 [256];
  undefined1 auStack_2f0 [2];
  undefined1 auStack_2ee [62];
  undefined1 auStack_2b0 [80];
  undefined1 auStack_260 [256];
  short local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  undefined4 local_150;
  int *local_148;
  undefined1 auStack_144 [256];
  
  iVar2 = FUN_101175c4;
  iVar7 = _FUN_101175c4;
  psVar1 = _FUN_101175bc;
  local_148 = (int *)0x0;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = 0;
  local_158 = _DAT_41820010;
  _DAT_41820010 = auStack_260;
  iVar3 = FUN_10000090(auStack_260);
  if (iVar3 == 0) {
    local_148 = (int *)FUN_10117884(**(int **)(local_914 + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_914 + -0x1e4) + 200),
                                    0xee2,*(undefined4 *)(**(int **)(local_914 + -0x554) + 0x88));
    FUN_100db26c();
    iVar3 = FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x7f8));
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x24) = 0x70696374;
    }
    piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x68656164);
    if (piVar4 != (int *)0x0) {
      uVar5 = FUN_1005f678(0x45,(int)param_1);
      FUN_100b19f4(auStack_5f0,uVar5);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_5f0,0);
    }
    FUN_1003206c(2,0xe0,0xff,0xf9);
    uVar5 = FUN_1005f678(0x46,(int)param_1);
    FUN_10001dd0(auStack_2b0,uVar5,_DAT_4bffe775 + **(short **)(local_914 + -0x19a8) * 0x42 + 0x1608
                );
    piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x73747231);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_6f0,auStack_2b0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_6f0,0);
    }
    uVar5 = FUN_1005f678(0x47,0);
    FUN_10001dd0(auStack_2b0,uVar5,(int)**(short **)(local_914 + -0x2e8));
    piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x73747232);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_7f0,auStack_2b0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_7f0,0);
    }
    uVar5 = FUN_1005f678(0x48,*psVar1 != 1);
    FUN_10001dd0(auStack_2b0,uVar5,(int)*psVar1);
    piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x73747233);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_8f0,auStack_2b0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_8f0,0);
    }
    uVar5 = FUN_1005f678(0x49,**(short **)(local_914 + -0x2e0) != 1);
    FUN_10001dd0(auStack_2b0,uVar5,(int)**(short **)(local_914 + -0x2e0));
    piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x73747234);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_144,auStack_2b0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_144,0);
    }
    iVar3 = 0;
    if (0 < *psVar1) {
      do {
        iVar6 = FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),iVar3 + 0x61726d31
                            );
        if (iVar6 != 0) {
          FUN_10079ee8(iVar6,(int)*(short *)(iVar3 * 2 + iVar7),
                       (int)*(short *)(_DAT_4bffe775 + 0x110),0);
          FUN_1007a018(iVar6,1,0,0,0);
        }
        FUN_10049628((int)*(short *)(iVar3 * 2 + iVar7),auStack_2f0);
        piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),
                                     iVar3 + 0x74797031);
        if (piVar4 != (int *)0x0) {
          FUN_100b19f4(auStack_3f0,auStack_2ee);
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_3f0,0);
        }
        FUN_10001dd0(auStack_2b0,*(undefined4 *)(local_914 + -0x19ac),
                     (int)*(short *)(iVar3 * 2 + iVar2));
        piVar4 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),
                                     iVar3 + 0x676f6c31);
        if (piVar4 != (int *)0x0) {
          FUN_100b19f4(auStack_4f0,auStack_2b0);
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_4f0,0);
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < *psVar1);
    }
    for (; iVar3 < 3; iVar3 = (int)(short)((short)iVar3 + 1)) {
      iVar7 = FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),iVar3 + 0x61726d31);
      if (iVar7 != 0) {
        FUN_10079ee8(iVar7,0xffffffff,(int)*(short *)(_DAT_4bffe775 + 0x110),0);
        FUN_1007a018(iVar7,1,0,0,0);
      }
    }
    FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x810));
    FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x738));
    _DAT_41820010 = local_158;
  }
  else {
    if (local_148 != (int *)0x0) {
      FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x738));
      local_148 = (int *)0x0;
    }
    FUN_100db158((int)local_160,local_15c);
  }
  return;
}



// Function: FUN_10046d7c at 10046d7c
// Size: 352 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10046d7c(void)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  int iVar4;
  
  iVar1 = FUN_1004645c((int)_DAT_48000008);
  iVar4 = iVar1 + *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186);
  if (30000 < iVar4) {
    iVar4 = 30000;
  }
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) = (short)iVar4;
  FUN_100465a8((int)_DAT_48000008);
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) {
    FUN_100466d4(0);
    FUN_1003f674(0,0,1);
    _DAT_38600000 = 0;
  }
  sVar3 = FUN_1005f230(1,5,0);
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) =
       *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) + sVar3;
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1004e384(1,0,iVar1,0);
  }
  return uVar2;
}



// Function: FUN_10046edc at 10046edc
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046edc(short param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_68 [30];
  short local_4a;
  
  iVar5 = FUN_101175c4;
  iVar4 = _FUN_101175c4;
  psVar3 = _FUN_101175bc;
  iVar10 = (int)param_1;
  *_FUN_101175bc = 0;
  _DAT_4e800020 = 0;
  *puRam101175c0 = 1;
  iVar6 = FUN_10048c3c(iVar10);
  if (1 < iVar6) {
    iVar11 = 1;
    if (1 < iVar6) {
      do {
        iVar2 = iVar10 * 0x42;
        FUN_10049628((int)*(char *)(_DAT_4bffe775 + iVar2 + iVar11 + 0x161a),auStack_68);
        *(short *)(*psVar3 * 2 + iVar4) = (short)*(char *)(iVar2 + _DAT_4bffe775 + iVar11 + 0x161a);
        uVar7 = FUN_10003768((int)local_4a);
        sVar9 = (short)((int)uVar7 >> 1) + (ushort)((int)uVar7 < 0 && (uVar7 & 1) != 0);
        sVar1 = *psVar3;
        *(short *)(sVar1 * 2 + iVar5) = sVar9;
        _DAT_4e800020 = _DAT_4e800020 + sVar9;
        *psVar3 = sVar1 + 1;
        *(undefined1 *)(iVar2 + _DAT_4bffe775 + iVar11 + 0x161a) = 0xff;
        iVar11 = (int)(short)((short)iVar11 + 1);
      } while (iVar11 < iVar6);
    }
    uVar8 = FUN_10048c90(iVar10);
    *(undefined1 *)(_DAT_4bffe775 + iVar10 * 0x42 + 0x1618) = uVar8;
  }
  return;
}



// Function: FUN_1004702c at 1004702c
// Size: 356 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004702c(void)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  int iVar4;
  
  iVar1 = FUN_1004639c((int)_DAT_48000008);
  FUN_10046edc((int)_DAT_48000008);
  iVar4 = iVar1 + *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186);
  if (30000 < iVar4) {
    iVar4 = 30000;
  }
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) = (short)iVar4;
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) {
    FUN_100466d4(1);
    FUN_1003f674(0,0,1);
    _DAT_38600000 = 0;
  }
  sVar3 = FUN_1005f230(1,10,0);
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) =
       *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) + sVar3 + 5;
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1004e384(1,0,iVar1,0);
  }
  return uVar2;
}



// Function: FUN_10047190 at 10047190
// Size: 356 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10047190(void)

{
  short sVar2;
  undefined4 uVar1;
  int iVar3;
  int local_84;
  undefined1 auStack_60 [80];
  
  FUN_10001dd0(auStack_60,0x8041001c,_DAT_4bffe775 + _DAT_48000008 * 0x42 + 0x1608);
  FUN_1003c938(auStack_60);
  FUN_10117884(**(int **)(local_84 + -0x14f4) +
               (int)*(short *)(*(int *)**(int **)(local_84 + -0x14f4) + 0x4d0));
  iVar3 = _DAT_4bffe775 + _DAT_48000008 * 0x42;
  FUN_1004f438((int)*(short *)(iVar3 + 0x1604),(int)*(short *)(iVar3 + 0x1606),_DAT_38600000 == 0);
  _DAT_38600000 = 0;
  sVar2 = FUN_1005f230(1,0xf);
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) =
       *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) + sVar2 + 10;
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004e384(2,0,0,0);
  }
  return uVar1;
}



// Function: FUN_100472f4 at 100472f4
// Size: 1792 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100472f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_724;
  undefined1 auStack_700 [256];
  undefined1 auStack_600 [256];
  undefined1 auStack_500 [256];
  undefined1 auStack_400 [256];
  undefined1 auStack_300 [256];
  undefined1 auStack_200 [80];
  undefined1 auStack_1b0 [80];
  undefined1 auStack_160 [256];
  short local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int *local_48;
  
  iVar6 = (int)param_4;
  sVar1 = *(short *)(_DAT_4bffe775 + 0x110);
  _DAT_38600000 = 1;
  _DAT_48000008 = param_4;
  uVar2 = FUN_1005f678(0x43,0xffffffff);
  FUN_10001dd0(auStack_1b0,uVar2,param_1);
  uVar2 = FUN_1005f678(0x44,0xffffffff);
  FUN_10001dd0(auStack_200,uVar2,param_2);
  local_48 = (int *)0x0;
  local_48 = (int *)FUN_10117884(**(int **)(local_724 + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_724 + -0x1e4) + 200),0xed8
                                 ,*(undefined4 *)(**(int **)(local_724 + -0x554) + 0x88));
  FUN_100013f8(8,0);
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  local_58 = _DAT_41820010;
  _DAT_41820010 = auStack_160;
  iVar3 = FUN_10000090(auStack_160);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x68656164);
    if (piVar4 != (int *)0x0) {
      uVar2 = FUN_1005f678(0x42,0);
      FUN_100b19f4(auStack_300,uVar2);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_300,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x73747231);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_400,auStack_1b0);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_400,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x73747232);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_500,auStack_200);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_500,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x73747233);
    if (piVar4 != (int *)0x0) {
      uVar2 = FUN_1005f678(0x42,1);
      FUN_100b19f4(auStack_600,uVar2);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_600,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x73747234);
    if (piVar4 != (int *)0x0) {
      uVar2 = FUN_1005f678(0x42,2);
      FUN_100b19f4(auStack_700,uVar2);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_700,0);
    }
    uVar2 = 0x6f636375;
    if (*(short *)(_DAT_4bffe775 + 0x11e) != 0) {
      iVar3 = sVar1 * 0xc + _DAT_4bffe775;
      if (*(short *)(iVar3 + 0x1142) != 0) {
        if (**(int **)(local_724 + -0x3f0) ==
            **(int **)(local_724 + -0x540) + *(short *)(iVar3 + 0x1146) * 0x16) {
          if ((*(short *)(iVar3 + 0x1144) == 5) && (*(short *)(iVar3 + 0x1148) == iVar6)) {
            uVar2 = 0x72617a65;
          }
          else if (*(short *)(_DAT_4bffe775 + sVar1 * 0xc + 0x1144) == 6) {
            iVar3 = FUN_1004639c(iVar6);
            if (iVar3 == 0) {
              iVar3 = FUN_1004645c(iVar6);
              if (iVar3 != 0) {
                uVar2 = 0x70696c6c;
              }
            }
            else {
              uVar2 = 0x7361636b;
            }
          }
        }
      }
    }
    iVar3 = FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x7f8));
    if (iVar3 != 0) {
      FUN_10078c94(iVar3,uVar2,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x70696c6c);
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      iVar3 = FUN_1004645c(iVar6);
      FUN_10117884((int)piVar4 + (int)*(short *)(iVar5 + 0x738),iVar3 == 0,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x7361636b);
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      iVar3 = FUN_1004639c(iVar6);
      FUN_10117884((int)piVar4 + (int)*(short *)(iVar5 + 0x738),iVar3 == 0,0);
    }
    piVar4 = (int *)FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x308),0x72617a65);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),
                   *(short *)(_DAT_4bffe775 + 0x114) == 0,0);
    }
    if ((*(short *)(_DAT_4bffe775 + 0x12e) != 0) && (_DAT_2c03ffff == 0)) {
      _DAT_2c03ffff = 1;
      FUN_1005f6b0(0x19,10);
      FUN_10040040();
    }
    iVar3 = FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x810));
    FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x328));
    if (iVar3 == 0x6f636375) {
      FUN_1004653c();
    }
    else if (iVar3 == 0x70696c6c) {
      FUN_10046d7c();
    }
    else if (iVar3 == 0x72617a65) {
      FUN_10047190();
    }
    else if (iVar3 == 0x7361636b) {
      FUN_1004702c();
    }
    FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x738));
    _DAT_41820010 = local_58;
  }
  else {
    if (local_48 != (int *)0x0) {
      FUN_10117884((int)local_48 + (int)*(short *)(*local_48 + 0x738));
      local_48 = (int *)0x0;
    }
    FUN_100db158((int)local_60,local_5c);
  }
  return;
}



// Function: FUN_100479f4 at 100479f4
// Size: 112 bytes

undefined4 FUN_100479f4(short param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 != -1) {
    FUN_100b2268(iVar1 * 6 + 0x408600a0);
    FUN_100021c0();
  }
  DAT_4082000c = iVar1 == -1;
  return 0;
}



// Function: FUN_10047a64 at 10047a64
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047a64(undefined4 param_1,short *param_2,short param_3,short param_4)

{
  FUN_10009b48(param_1,(int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3],_FUN_10116698,
               (int)param_3,(int)param_4);
  return;
}



// Function: FUN_10047abc at 10047abc
// Size: 512 bytes

void FUN_10047abc(short *param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  iVar2 = (int)param_2;
  if (iVar3 < iVar2) {
    FUN_100479f4(iVar3);
    sVar1 = param_1[3];
    FUN_10000270((int)(short)(*param_1 + param_1[2] + -1),(int)param_1[1]);
    FUN_10000288(0,(int)(short)(sVar1 + -1));
    sVar1 = param_1[2];
    FUN_10000270((int)*param_1,(int)(short)(param_1[1] + param_1[3] + -1));
    FUN_10000288((int)(short)(sVar1 + -1),0);
    FUN_100479f4(iVar2);
    sVar1 = param_1[2];
    FUN_10000270((int)*param_1,(int)param_1[1]);
    FUN_10000288((int)(short)(sVar1 + -1),0);
    sVar1 = param_1[3];
    FUN_10000270((int)*param_1,(int)param_1[1]);
    FUN_10000288(0,(int)(short)(sVar1 + -1));
  }
  else {
    FUN_100479f4(iVar2);
    sVar1 = param_1[2];
    FUN_10000270((int)*param_1,(int)param_1[1]);
    FUN_10000288((int)sVar1,0);
    sVar1 = param_1[3];
    FUN_10000270((int)*param_1,(int)param_1[1]);
    FUN_10000288(0,(int)sVar1);
    FUN_100479f4(iVar3);
    sVar1 = param_1[3];
    FUN_10000270((int)(short)(*param_1 + param_1[2] + -1),(int)param_1[1]);
    FUN_10000288(0,(int)(short)(sVar1 + -1));
    sVar1 = param_1[2];
    FUN_10000270((int)*param_1,(int)(short)(param_1[1] + param_1[3] + -1));
    FUN_10000288((int)(short)(sVar1 + -1),0);
  }
  return;
}



// Function: FUN_10047cbc at 10047cbc
// Size: 196 bytes

void FUN_10047cbc(int param_1,undefined4 *param_2,short param_3)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  if (param_1 != 0) {
    FUN_10000870(&local_24,&local_28);
    FUN_10000888(*(undefined4 *)(param_1 + 0x10),0);
    FUN_10003108(auStack_30,(int)local_20._0_2_,(int)local_20._2_2_,
                 (int)(short)(local_20._0_2_ + local_1c._0_2_),
                 (int)(short)(local_20._2_2_ + local_1c._2_2_));
    FUN_100479f4((int)param_3);
    FUN_10002148(auStack_30);
    FUN_10000888(local_24,local_28);
  }
  return;
}



// Function: FUN_10047d80 at 10047d80
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10047d80(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if ((int)*(char *)(_DAT_4bffe775 + param_1 * 0x42 + iVar2 + 0x161a) == (int)param_2) break;
    iVar1 = (int)(short)((short)iVar1 + 1);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 4);
  if (3 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



// Function: FUN_10047de8 at 10047de8
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047de8(short param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1;
  *param_3 = 0;
  if ((iVar1 == -2) || (99 < iVar1)) {
    iVar1 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        iVar3 = _DAT_4bffe775 + iVar1 * 0x42;
        if (((*(short *)(iVar3 + 0x1636) != 0) &&
            ((int)*(char *)(iVar3 + 0x1619) == (int)*(short *)(_DAT_4bffe775 + 0x110))) &&
           (*(short *)(iVar3 + 0x1638) == -2)) {
          *(short *)(param_2 + *param_3 * 2) = (short)iVar1;
          *param_3 = *param_3 + 1;
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < *(short *)(_DAT_4bffe775 + 0x1602));
      return;
    }
  }
  else {
    iVar3 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        iVar4 = _DAT_4bffe775 + iVar3 * 0x42;
        if (((*(short *)(iVar4 + 0x1636) != 0) &&
            (iVar2 = iVar1 * 0x42 + _DAT_4bffe775,
            *(short *)(iVar4 + 0x1638) == *(short *)(iVar2 + 0x1604))) &&
           (*(short *)(iVar4 + 0x163a) == *(short *)(iVar2 + 0x1606))) {
          *(short *)(param_2 + *param_3 * 2) = (short)iVar3;
          *param_3 = *param_3 + 1;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
  }
  return;
}



// Function: FUN_10047f28 at 10047f28
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047f28(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10047d80((int)_DAT_63e30000,(int)_DAT_809f0014);
  *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1630) = (char)_DAT_809f0014;
  iVar2 = _DAT_4bffe775 + _DAT_63e30000 * 0x42;
  *(undefined1 *)(iVar2 + 0x1631) = *(undefined1 *)(iVar2 + iVar1 + 0x161e);
  FUN_100230e8(1);
  FUN_10025598();
  FUN_1002279c();
  return;
}



// Function: FUN_10047fc8 at 10047fc8
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047fc8(short param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + (int)param_1 + 0x161a);
  if (-1 < cVar1) {
    _DAT_809f0014 = (short)cVar1;
  }
  FUN_10047f28();
  FUN_10117884((int)*(int **)(_DAT_57c407bd + 0x88) +
               (int)*(short *)(**(int **)(_DAT_57c407bd + 0x88) + 0x38),0,0);
  return;
}



// Function: FUN_10048054 at 10048054
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048054(void)

{
  *(undefined1 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1631) = 0;
  *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1636) = 0;
  *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1638) = 0xffff;
  *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x163a) = 0xffff;
  _DAT_809f0014 = 0xffff;
  *(undefined1 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1630) = 0xff;
  FUN_100230e8(1);
  FUN_10025598();
  FUN_1002279c();
  return;
}



// Function: FUN_10048138 at 10048138
// Size: 596 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048138(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_20 [2];
  undefined1 auStack_1c [8];
  
  iVar3 = (int)param_2;
  iVar2 = (int)param_1;
  if (((param_3 == 1) && (iVar1 = FUN_100efbcc(), iVar1 == 0)) && (_DAT_4bffffb9 == 0)) {
    iVar1 = FUN_1002bf64(iVar2,iVar3,(int)*(short *)(_DAT_4bffe775 + 0x110),0);
    if (iVar1 != _DAT_63e30000) {
      FUN_10025758(2,iVar2,iVar3);
    }
  }
  else {
    if (*(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1631) < '\x01') {
      return;
    }
    iVar2 = FUN_1002c120(iVar2,iVar3);
    FUN_10047de8(iVar2,auStack_1c,local_20);
    if (iVar2 == _DAT_63e30000) {
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1636) = 0;
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1638) = 0xffff;
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x163a) = 0xffff;
      FUN_100230e8(1);
      FUN_10025598();
    }
    else if (local_20[0] < 4) {
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1636) = 1;
      if (iVar2 < 100) {
        *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1638) =
             *(undefined2 *)(_DAT_4bffe775 + iVar2 * 0x42 + 0x1604);
        *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x163a) =
             *(undefined2 *)(iVar2 * 0x42 + _DAT_4bffe775 + 0x1606);
      }
      else {
        *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1638) = 0xfffe;
        *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x163a) = 0xfffe;
      }
      FUN_100230e8(1);
      FUN_10025598();
    }
  }
  FUN_1002279c();
  return;
}



// Function: FUN_1004838c at 1004838c
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004838c(void)

{
  if (_DAT_63e30000 == 2) {
    FUN_10061a98(0,2,0xfffffffe);
    FUN_10061354(0);
  }
  else if (_DAT_63e30000 == 3) {
    if (_DAT_60680000 == 0) {
      FUN_10061a98(0,3,0xfffffffe);
    }
    else {
      FUN_10062968(0,3);
    }
    FUN_10061354(0);
  }
  return;
}



// Function: FUN_10048434 at 10048434
// Size: 852 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048434(short param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_830 [256];
  undefined1 auStack_730 [256];
  undefined1 auStack_630 [256];
  undefined1 auStack_530 [256];
  undefined1 auStack_430 [256];
  undefined1 auStack_330 [256];
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [260];
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x308),
                                 0x746f7331);
    FUN_100db26c(piVar1);
    piVar2 = (int *)FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x308),
                                 0x746f7332);
    FUN_100db26c(piVar2);
    if (_DAT_4bffffb9 == 1) {
      uVar3 = FUN_1005f678(0x9c,2);
      FUN_100b19f4(auStack_730,uVar3);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_730,1);
      uVar3 = FUN_1005f678(0x9c,3);
      FUN_100b19f4(auStack_830,uVar3);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_830,1);
    }
    else {
      uVar3 = FUN_1005f678(0x9c,0);
      FUN_100b19f4(auStack_530,uVar3);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_530,1);
      uVar3 = FUN_1005f678(0x9c,1);
      FUN_100b19f4(auStack_630,uVar3);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_630,1);
    }
  }
  else {
    piVar1 = (int *)FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x308),
                                 0x66727331);
    FUN_100db26c(piVar1);
    piVar2 = (int *)FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x308),
                                 0x66727332);
    FUN_100db26c(piVar2);
    if (_DAT_4bffffb9 == 2) {
      uVar3 = FUN_1005f678(0x9d,2);
      FUN_100b19f4(auStack_330,uVar3);
      FUN_10117884((int)*(short *)(*piVar1 + 0x7c8) + (int)piVar1,auStack_330,1);
      uVar3 = FUN_1005f678(0x9d,3);
      FUN_100b19f4(auStack_430,uVar3);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_430,1);
    }
    else {
      uVar3 = FUN_1005f678(0x9d,0);
      FUN_100b19f4(auStack_130,uVar3);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_130,1);
      uVar3 = FUN_1005f678(0x9d,1);
      FUN_100b19f4(auStack_230,uVar3);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_230,1);
    }
  }
  return;
}



// Function: FUN_10048788 at 10048788
// Size: 580 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048788(short param_1)

{
  undefined1 auStack_18 [8];
  short local_10 [4];
  
  if (param_1 == 2) {
    _DAT_60680000 = (ushort)(_DAT_60680000 == 0);
    FUN_1004838c();
  }
  else if (param_1 == 0) {
    if (_DAT_4bffffb9 == 0) {
      _DAT_4bffffb9 = 1;
      FUN_10061a98(0,(int)_DAT_63e30000,0xffffffff);
      FUN_10061354(0);
      FUN_10048434(0);
    }
    else if (_DAT_4bffffb9 == 1) {
      _DAT_4bffffb9 = 0;
      FUN_1004838c();
      FUN_10048434(0);
    }
    else if (_DAT_4bffffb9 == 2) {
      _DAT_4bffffb9 = 1;
      FUN_10061a98(0,(int)_DAT_63e30000,0xffffffff);
      FUN_10061354(0);
      FUN_10048434(0);
      FUN_10048434(1);
    }
  }
  else if (param_1 == 1) {
    if (_DAT_4bffffb9 == 0) {
      _DAT_4bffffb9 = 2;
      FUN_10047de8((int)_DAT_63e30000,auStack_18,local_10);
      FUN_10061a98(0,(int)_DAT_63e30000,(int)local_10[0]);
      FUN_10061354(0);
      FUN_10048434(1);
    }
    else if (_DAT_4bffffb9 == 1) {
      _DAT_4bffffb9 = 2;
      FUN_10047de8((int)_DAT_63e30000,auStack_18,local_10);
      FUN_10061a98(0,(int)_DAT_63e30000,(int)local_10[0]);
      FUN_10061354(0);
      FUN_10048434(0);
      FUN_10048434(1);
    }
    else if (_DAT_4bffffb9 == 2) {
      _DAT_4bffffb9 = 0;
      FUN_1004838c();
      FUN_10048434(1);
    }
  }
  FUN_10117884((int)*(int **)(_DAT_57c407bd + 0x88) +
               (int)*(short *)(**(int **)(_DAT_57c407bd + 0x88) + 0x38),0,0);
  FUN_1002279c();
  return;
}



// Function: FUN_100489cc at 100489cc
// Size: 624 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100489cc(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_40;
  short local_3e;
  short local_3c [4];
  undefined1 auStack_34 [12];
  
  iVar5 = (int)param_2;
  iVar4 = (int)param_1;
  if ((param_3 == 1) && (iVar1 = FUN_100efbcc(), iVar1 != 0)) {
    FUN_10048138(iVar4,iVar5,1);
    _DAT_4bffffb9 = 0;
  }
  else {
    iVar1 = FUN_1002c120(iVar4,iVar5);
    FUN_10047de8(iVar1,auStack_34,&local_40);
    FUN_10047de8((int)_DAT_63e30000,local_3c,&local_3e);
    if ((((_DAT_4bffffb9 == 2) &&
         ((((iVar2 = (int)local_3e, 0 < iVar2 && (local_40 + iVar2 < 5)) && (local_3c[0] != iVar1))
          && ((local_3c[1] != iVar1 && (local_3c[2] != iVar1)))))) && (local_3c[3] != iVar1)) &&
       (iVar3 = 0, 0 < iVar2)) {
      do {
        if (iVar1 < 100) {
          *(undefined2 *)(_DAT_4bffe775 + local_3c[iVar3] * 0x42 + 0x1638) =
               *(undefined2 *)(_DAT_4bffe775 + iVar1 * 0x42 + 0x1604);
          *(undefined2 *)(_DAT_4bffe775 + local_3c[iVar3] * 0x42 + 0x163a) =
               *(undefined2 *)(iVar1 * 0x42 + _DAT_4bffe775 + 0x1606);
        }
        else {
          *(undefined2 *)(_DAT_4bffe775 + local_3c[iVar3] * 0x42 + 0x1638) = 0xfffe;
          *(undefined2 *)(_DAT_4bffe775 + local_3c[iVar3] * 0x42 + 0x163a) = 0xfffe;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < local_3e);
    }
    if (_DAT_4bffffb9 == 1) {
      FUN_10048138(iVar4,iVar5,(int)param_3);
    }
    iVar4 = (int)_DAT_63e30000;
    if ((_DAT_4bffffb9 != 1) && (iVar1 < 100)) {
      iVar4 = iVar1;
    }
    _DAT_4bffffb9 = 0;
    iVar4 = _DAT_4bffe775 + iVar4 * 0x42;
    FUN_10025758(3,(int)*(short *)(iVar4 + 0x1604),(int)*(short *)(iVar4 + 0x1606));
    FUN_1004838c();
    FUN_10048434(0);
    FUN_10048434(1);
    FUN_1002279c();
  }
  return;
}



// Function: FUN_10048c3c at 10048c3c
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10048c3c(short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (-1 < *(char *)(_DAT_4bffe775 + param_1 * 0x42 + iVar2 + 0x161a)) {
      iVar1 = (int)(short)((short)iVar1 + 1);
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 4);
  return iVar1;
}



// Function: FUN_10048c90 at 10048c90
// Size: 60 bytes

undefined4 FUN_10048c90(short param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10048c3c((int)param_1);
  if (iVar1 < 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// Function: FUN_10048ccc at 10048ccc
// Size: 836 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048ccc(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 uVar8;
  short sVar9;
  int *piVar10;
  undefined2 *puVar11;
  int local_74;
  char local_50 [40];
  
  if (_DAT_480000ec == (int *)0x0) {
    DAT_90010008 = DAT_3860ffff;
    piVar10 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
    FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
    _DAT_6000000c = _DAT_3861000f & 0xff000000;
    _DAT_60000000 = _DAT_38610003;
    _DAT_60000004 = _DAT_38610007;
    _DAT_60000008 = _DAT_3861000b;
    iVar5 = FUN_1005f36c(0x44415420,0x60000000);
    bVar3 = false;
    if ((iVar5 != 0) && (iVar5 = FUN_10051f98(0x44415420,0x60000000,1), iVar5 != 0)) {
      FUN_10052490(iVar5,local_50,8);
      FUN_100523a8(iVar5,1);
      local_50[7] = 0;
      iVar5 = 0;
      do {
        cVar1 = local_50[iVar5];
        if (((cVar1 == ' ') || (cVar1 == '\r')) || (cVar1 == '\t')) {
          local_50[iVar5] = '\0';
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 8);
      iVar5 = FUN_100001e0(local_50,*(int *)(local_74 + -0x1998) + 0x14);
      if (iVar5 != 0) {
        FUN_10001e78(&DAT_90010008,local_50);
        bVar3 = true;
      }
    }
    if (bVar3) {
      FUN_10001dd0(0x60000000,*(int *)(local_74 + -0x1998) + 0x18,&DAT_90010008);
      FUN_1007ee44(*(undefined4 *)(_DAT_57c407bd + 0x88));
    }
    else {
      uVar6 = FUN_1005f6b0(0x15,0);
      FUN_10001dd0(0x60000000,uVar6,(int)*(short *)(**(int **)(local_74 + -0x544) + 0x162));
      piVar10 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x14c);
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
    }
    piVar10 = (int *)FUN_10051f98(0x44415420,0x60000000,1);
    FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0xb8));
    piVar7 = (int *)FUN_100f15e0();
    _DAT_480000ec = piVar7;
    if (piVar7 != (int *)0x0) {
      FUN_10002598(piVar7);
    }
    _DAT_9421ffa8 = *piVar7;
    iVar5 = 0;
    do {
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x100));
      uVar8 = FUN_100525a0();
      iVar4 = _DAT_9421ffa8;
      iVar2 = iVar5 * 0x3e;
      *(undefined2 *)(_DAT_9421ffa8 + iVar2) = uVar8;
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0xe0),iVar4 + iVar2 + 2,0x14);
      puVar11 = (undefined2 *)(iVar2 + _DAT_9421ffa8 + 0x16);
      sVar9 = 0;
      do {
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x100));
        uVar8 = FUN_100525a0();
        *puVar11 = uVar8;
        sVar9 = sVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (sVar9 < 0x14);
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 0x1d);
    FUN_100523a8(piVar10,1);
    if (_DAT_480000ec != (int *)0x0) {
      FUN_10002ad8(_DAT_480000ec);
    }
  }
  piVar10 = _DAT_480000ec;
  if (_DAT_480000ec != (int *)0x0) {
    FUN_10002598(_DAT_480000ec);
  }
  _DAT_9421ffa8 = *piVar10;
  return;
}



// Function: FUN_10049010 at 10049010
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049010(void)

{
  if (_DAT_480000ec != 0) {
    FUN_10002ad8();
  }
  return;
}



// Function: FUN_10049048 at 10049048
// Size: 1500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049048(short param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int local_3ac;
  undefined1 auStack_388 [256];
  undefined1 auStack_288 [256];
  undefined1 auStack_188 [256];
  undefined1 auStack_88 [84];
  
  if (param_1 == 0) {
    iVar7 = 0;
    do {
      piVar2 = (int *)FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x308),
                                   iVar7 + 0x73696431);
      if (piVar2 != (int *)0x0) {
        if (*(short *)((int)piVar2 + 0x82) != 0) {
          *(undefined2 *)((int)piVar2 + 0x82) = 0;
          FUN_10117884((int)*(short *)(*piVar2 + 0x488) + (int)piVar2);
        }
        if (*(short *)(_DAT_4bffe775 + 0x110) != *(short *)(piVar2 + 0x20)) {
          *(short *)(piVar2 + 0x20) = *(short *)(_DAT_4bffe775 + 0x110);
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
        }
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 2);
    FUN_1003206c(2,0xe0,0xff,0xf9);
    uVar3 = FUN_1005f678(0x71,1);
    FUN_10001dd0(auStack_88,uVar3,_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14,
                 _DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1608);
    FUN_100b19f4(auStack_288,auStack_88);
    FUN_10090e0c(_DAT_2c840000,0x73756274,auStack_288,1);
    uVar3 = FUN_1005f678(0x71,2);
    FUN_10001dd0(auStack_88,uVar3,
                 (int)*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186));
    FUN_100b19f4(auStack_388,auStack_88);
    FUN_10090e0c(_DAT_2c840000,0x6d6f6e65,auStack_388,1);
  }
  iVar7 = 0;
  do {
    iVar4 = FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x308),
                         iVar7 + 0x70726f30);
    if (iVar4 != 0) {
      iVar5 = (int)*(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar7 + 0x161a);
      if (iVar5 < 0) {
        iVar5 = -1;
      }
      FUN_10079ee8(iVar4,(int)(short)iVar5,(int)*(short *)(_DAT_4bffe775 + 0x110),1);
      if (_DAT_809f0014 == iVar7) {
        sVar6 = *(short *)(_DAT_4bffe775 + 0x110) + 2;
      }
      else {
        sVar6 = 1;
      }
      FUN_1007a018(iVar4,(int)sVar6,0,0,1);
    }
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 4);
  FUN_10048ccc();
  FUN_1003206c(2,0xe0,0xff,0xf9);
  iVar4 = 0;
  iVar7 = 0;
  do {
    if ((-1 < *(short *)(_DAT_9421ffa8 + iVar4 * 0x3e + 0x1e)) && (iVar7 < 0x14)) {
      bVar1 = false;
      iVar5 = 0;
      do {
        if ((int)*(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar5 + 0x161a) ==
            (int)*(short *)(_DAT_9421ffa8 + iVar4 * 0x3e)) {
          bVar1 = true;
          break;
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 4);
      piVar2 = (int *)FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x308),
                                   iVar7 + 0x61726d30);
      if (piVar2 != (int *)0x0) {
        if ((*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) <
             *(short *)(_DAT_9421ffa8 + iVar4 * 0x3e + 0x1e)) || (bVar1)) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
        }
        FUN_10079ee8(piVar2,(int)*(short *)(_DAT_9421ffa8 + iVar4 * 0x3e),
                     (int)*(short *)(_DAT_4bffe775 + 0x110),1);
        FUN_1007a018(piVar2,1,0,iVar5 == 0,1);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),iVar5);
      }
      if (param_1 == 0) {
        FUN_10001dd0(auStack_88,*(int *)(local_3ac + -0x1998) + 0x60,
                     (int)*(short *)(_DAT_9421ffa8 + iVar4 * 0x3e + 0x1e));
        FUN_100b19f4(auStack_188,auStack_88);
        FUN_10090e0c(_DAT_2c840000,iVar7 + 0x73747230,auStack_188,1);
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
    if (0x1b < iVar4) {
      for (; iVar7 < 0x1c; iVar7 = (int)(short)((short)iVar7 + 1)) {
        piVar2 = (int *)FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x308),
                                     iVar7 + 0x61726d30);
        if (piVar2 != (int *)0x0) {
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),0,0);
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),0);
        }
        if (param_1 == 0) {
          FUN_10090e0c(_DAT_2c840000,iVar7 + 0x73747230,&DAT_7c0803a6,1);
        }
      }
      FUN_10049010();
      return;
    }
  } while( true );
}



// Function: FUN_10049624 at 10049624
// Size: 4 bytes

void FUN_10049624(void)

{
  return;
}



// Function: FUN_10049628 at 10049628
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049628(short param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  FUN_10048ccc();
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)(_DAT_9421ffa8 + iVar2 * 0x3e);
    if (*(short *)(_DAT_9421ffa8 + iVar2 * 0x3e) == param_1) {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      param_2[4] = uVar6;
      param_2[5] = uVar7;
      param_2[6] = uVar8;
      param_2[7] = uVar9;
      uVar3 = puVar1[9];
      uVar4 = puVar1[10];
      uVar5 = puVar1[0xb];
      uVar6 = puVar1[0xc];
      uVar7 = puVar1[0xd];
      uVar8 = puVar1[0xe];
      uVar10 = puVar1[0xf];
      param_2[8] = puVar1[8];
      param_2[9] = uVar3;
      param_2[10] = uVar4;
      param_2[0xb] = uVar5;
      param_2[0xc] = uVar6;
      param_2[0xd] = uVar7;
      param_2[0xe] = uVar8;
      param_2[0xf] = uVar10 & 0xffff0000;
      break;
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x1d);
  FUN_10049010();
  return;
}



// Function: FUN_100496c8 at 100496c8
// Size: 564 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100496c8(short param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short local_70 [4];
  undefined1 auStack_68 [30];
  short local_4a;
  short asStack_2a [7];
  
  iVar5 = (int)param_1;
  if (-1 < *(char *)(_DAT_4bffe775 + iVar5 * 0x42 + 0x161a)) {
    iVar9 = 0;
    do {
      cVar1 = *(char *)(_DAT_4bffe775 + iVar5 * 0x42 + iVar9 + 0x161a);
      local_70[iVar9] = (short)cVar1;
      if (cVar1 < 0) break;
      FUN_10049628((int)cVar1,auStack_68);
      sVar4 = FUN_10003768((int)local_4a);
      asStack_2a[iVar9 + 1] = sVar4;
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < 4);
    iVar10 = 1;
    if (1 < iVar9) {
      do {
        if ((0 < iVar10) && (iVar6 = iVar10, asStack_2a[iVar10 + 1] < asStack_2a[iVar10])) {
          do {
            sVar4 = asStack_2a[iVar6 + 1];
            asStack_2a[iVar6 + 1] = asStack_2a[iVar6];
            asStack_2a[iVar6] = sVar4;
            iVar3 = iVar5 * 0x42;
            iVar7 = _DAT_4bffe775 + iVar3 + iVar6;
            uVar2 = *(undefined1 *)(iVar7 + 0x161a);
            *(undefined1 *)(iVar7 + 0x161a) = *(undefined1 *)(iVar7 + 0x1619);
            iVar8 = iVar6 + -1;
            *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar8 + 0x161a) = uVar2;
            iVar7 = iVar3 + _DAT_4bffe775 + iVar6;
            uVar2 = *(undefined1 *)(iVar7 + 0x1622);
            *(undefined1 *)(iVar7 + 0x1622) = *(undefined1 *)(iVar7 + 0x1621);
            *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar8 + 0x1622) = uVar2;
            iVar7 = iVar3 + _DAT_4bffe775 + iVar6;
            uVar2 = *(undefined1 *)(iVar7 + 0x162a);
            *(undefined1 *)(iVar7 + 0x162a) = *(undefined1 *)(iVar7 + 0x1629);
            *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar8 + 0x162a) = uVar2;
            iVar7 = iVar3 + _DAT_4bffe775 + iVar6;
            uVar2 = *(undefined1 *)(iVar7 + 0x1626);
            *(undefined1 *)(iVar7 + 0x1626) = *(undefined1 *)(iVar7 + 0x1625);
            *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar8 + 0x1626) = uVar2;
            iVar6 = iVar3 + _DAT_4bffe775 + iVar6;
            uVar2 = *(undefined1 *)(iVar6 + 0x161e);
            *(undefined1 *)(iVar6 + 0x161e) = *(undefined1 *)(iVar6 + 0x161d);
            *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar8 + 0x161e) = uVar2;
            iVar6 = (int)(short)iVar8;
            if (iVar6 < 1) break;
          } while (asStack_2a[iVar6 + 1] < asStack_2a[iVar6]);
        }
        iVar10 = (int)(short)((short)iVar10 + 1);
      } while (iVar10 < iVar9);
    }
  }
  return;
}



// Function: FUN_100498fc at 100498fc
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100498fc(void)

{
  FUN_100496c8((int)_DAT_63e30000);
  FUN_10025d10();
  return;
}



// Function: FUN_10049930 at 10049930
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049930(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = 3;
  while( true ) {
    iVar4 = iVar2;
    if (iVar2 == 0) break;
    iVar3 = _DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar2;
    if (((*(char *)(iVar3 + 0x161a) < '\0') && (-1 < *(char *)(iVar3 + 0x1619))) ||
       (iVar4 = (int)(short)((short)iVar2 + -1), bVar1 = iVar2 == 0, iVar2 = iVar4, bVar1)) break;
  }
  _DAT_809f0014 = (undefined2)iVar4;
  if (_DAT_2c840000 == (int *)0x0) {
    _DAT_2c840000 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xcee,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10049048(0);
  FUN_10049624();
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    if (_DAT_2c840000 != (int *)0x0) {
      FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x810));
      FUN_100498fc();
      FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x738));
    }
    _DAT_2c840000 = (int *)0x0;
    _DAT_41820010 = local_20;
  }
  else {
    if (_DAT_2c840000 != (int *)0x0) {
      FUN_10117884((int)_DAT_2c840000 + (int)*(short *)(*_DAT_2c840000 + 0x738));
    }
    _DAT_2c840000 = (int *)0x0;
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_10049aec at 10049aec
// Size: 840 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049aec(short param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_10048ccc();
  iVar5 = _DAT_9421ffa8;
  iVar6 = 0;
  iVar4 = 0;
  do {
    if ((-1 < *(short *)(_DAT_9421ffa8 + iVar6 * 0x3e + 0x1e)) && (iVar4 < 0x14)) {
      iVar7 = iVar6;
      if (iVar4 == param_1) break;
      iVar4 = (int)(short)((short)iVar4 + 1);
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
    iVar7 = (int)param_1;
  } while (iVar6 < 0x1c);
  iVar6 = _DAT_4bffe775 + _DAT_63e30000 * 0x42;
  cVar1 = *(char *)(iVar6 + 0x1630);
  iVar4 = (int)_DAT_809f0014;
  iVar7 = iVar7 * 0x3e;
  *(char *)(iVar6 + iVar4 + 0x161a) = (char)*(undefined2 *)(_DAT_9421ffa8 + iVar7);
  iVar5 = iVar5 + iVar7;
  *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar4 + 0x161e) =
       (char)*(undefined2 *)(iVar5 + 0x18);
  *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar4 + 0x162a) =
       (char)*(undefined2 *)(iVar5 + 0x1a);
  *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar4 + 0x1622) =
       (char)*(undefined2 *)(iVar5 + 0x16);
  *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar4 + 0x1626) =
       (char)*(undefined2 *)(iVar5 + 0x1c);
  uVar3 = FUN_10048c90((int)_DAT_63e30000);
  *(undefined1 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1618) = uVar3;
  iVar5 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14;
  *(short *)(iVar5 + 0x186) = *(short *)(iVar5 + 0x186) - *(short *)(iVar7 + _DAT_9421ffa8 + 0x1e);
  FUN_10049010();
  if ('\0' < *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1631)) {
    bVar2 = false;
    iVar5 = 0;
    do {
      if (*(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar5 + 0x161a) == cVar1) {
        bVar2 = true;
        break;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 4);
    if (!bVar2) {
      *(undefined1 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1631) = 0;
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1636) = 0;
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1638) = 0xffff;
      *(undefined2 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x163a) = 0xffff;
      *(undefined1 *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1630) = 0xff;
    }
  }
  if ((_DAT_809f0014 < 3) &&
     (*(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + (int)_DAT_809f0014 + 0x161b) < '\0')) {
    _DAT_809f0014 = _DAT_809f0014 + 1;
  }
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) {
    FUN_10049048(0);
    FUN_10049624();
  }
  return;
}



// Function: FUN_10049e34 at 10049e34
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049e34(undefined2 param_1)

{
  _DAT_809f0014 = param_1;
  FUN_10049048(1);
  FUN_10049624();
  return;
}



// Function: FUN_10049e68 at 10049e68
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049e68(void)

{
  if (_DAT_480000ec != 0) {
    FUN_100ef510(_DAT_480000ec);
    _DAT_480000ec = 0;
  }
  return;
}



// Function: FUN_10049ebc at 10049ebc
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049ebc(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_10048ccc();
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((-1 < *(short *)(_DAT_9421ffa8 + iVar1 * 0x3e + 0x1e)) && (iVar2 < 0x14)) {
      iVar3 = iVar1;
      if (iVar2 == param_2) break;
      iVar2 = (int)(short)((short)iVar2 + 1);
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
    iVar3 = (int)param_2;
  } while (iVar1 < 0x1c);
  if (param_1 != 0) {
    iVar1 = _DAT_9421ffa8 + iVar3 * 0x3e;
    FUN_1000ba58((int)*(short *)(_DAT_9421ffa8 + iVar3 * 0x3e),(int)*(short *)(iVar1 + 0x18),
                 (int)*(short *)(iVar1 + 0x16),(int)*(short *)(iVar1 + 0x1a),
                 (int)*(short *)(iVar1 + 0x1c),0);
  }
  FUN_10049010();
  return;
}



// Function: FUN_10049fa8 at 10049fa8
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049fa8(short param_1,short param_2,short param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  FUN_10048ccc();
  iVar4 = _DAT_9421ffa8;
  iVar3 = param_1 * 0x42;
  iVar1 = param_3 * 0x3e;
  *(char *)(_DAT_4bffe775 + iVar3 + iVar5 + 0x161a) = (char)*(undefined2 *)(_DAT_9421ffa8 + iVar1);
  iVar4 = iVar4 + iVar1;
  *(char *)(iVar3 + _DAT_4bffe775 + iVar5 + 0x161e) = (char)*(undefined2 *)(iVar4 + 0x18);
  *(char *)(iVar3 + _DAT_4bffe775 + iVar5 + 0x162a) = (char)*(undefined2 *)(iVar4 + 0x1a);
  *(char *)(iVar3 + _DAT_4bffe775 + iVar5 + 0x1622) = (char)*(undefined2 *)(iVar4 + 0x16);
  *(char *)(iVar3 + _DAT_4bffe775 + iVar5 + 0x1626) = (char)*(undefined2 *)(iVar4 + 0x1c);
  uVar2 = FUN_10048c90((int)param_1);
  *(undefined1 *)(iVar3 + _DAT_4bffe775 + 0x1618) = uVar2;
  iVar3 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14;
  *(short *)(iVar3 + 0x186) = *(short *)(iVar3 + 0x186) - *(short *)(iVar1 + _DAT_9421ffa8 + 0x1e);
  FUN_10049010();
  return;
}



// Function: FUN_1004a0c4 at 1004a0c4
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004a0c4(short param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                undefined2 *param_5,undefined2 *param_6)

{
  int iVar1;
  int iVar2;
  
  FUN_10048ccc();
  iVar2 = 0;
  do {
    iVar1 = _DAT_9421ffa8 + iVar2 * 0x3e;
    if (*(short *)(_DAT_9421ffa8 + iVar2 * 0x3e) == param_1) {
      *param_5 = *(undefined2 *)(iVar1 + 0x1e);
      *param_2 = *(undefined2 *)(iVar1 + 0x18);
      *param_3 = *(undefined2 *)(iVar1 + 0x16);
      *param_4 = *(undefined2 *)(iVar1 + 0x1a);
      *param_6 = *(undefined2 *)(iVar1 + 0x1c);
      break;
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x1d);
  FUN_10049010();
  return iVar2;
}



// Function: FUN_1004a178 at 1004a178
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a178(short param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_10048ccc();
  iVar1 = 0;
  do {
    iVar2 = _DAT_9421ffa8 + iVar1 * 0x3e;
    if (*(short *)(_DAT_9421ffa8 + iVar1 * 0x3e) == param_1) {
      *param_2 = *(undefined2 *)(iVar2 + 0x18);
      *param_3 = *(undefined2 *)(iVar2 + 0x16);
      *param_4 = *(undefined2 *)(iVar2 + 0x1a);
      *param_5 = *(undefined2 *)(iVar2 + 0x1c);
      break;
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 0x1d);
  FUN_10049010();
  return;
}



// Function: FUN_1004a21c at 1004a21c
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004a21c(short param_1)

{
  int iVar1;
  
  FUN_10048ccc();
  iVar1 = 0;
  do {
    if (*(short *)(_DAT_9421ffa8 + iVar1 * 0x3e) == param_1) {
      FUN_10001e78(0x60dc0000,_DAT_9421ffa8 + iVar1 * 0x3e + 2);
      break;
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 0x1d);
  FUN_10049010();
  return 0x60dc0000;
}



// Function: FUN_1004a2a8 at 1004a2a8
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a2a8(void)

{
  int *piVar1;
  
  if (_DAT_4186001c == (int *)0x0) {
    piVar1 = (int *)FUN_100f15e0(0x324);
    _DAT_4186001c = piVar1;
    if (piVar1 != (int *)0x0) {
      FUN_10002598(piVar1);
    }
    _DAT_80410014 = *piVar1;
    *(undefined1 *)(_DAT_80410014 + 800) = 0;
    if (_DAT_4186001c != (int *)0x0) {
      FUN_10002ad8(_DAT_4186001c);
    }
  }
  piVar1 = _DAT_4186001c;
  if (_DAT_4186001c != (int *)0x0) {
    FUN_10002598(_DAT_4186001c);
  }
  _DAT_80410014 = *piVar1;
  return;
}



// Function: FUN_1004a350 at 1004a350
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1004a350(short param_1,short param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short local_40 [6];
  
  iVar5 = 0;
  do {
    iVar1 = param_1 * 0x42;
    iVar2 = iVar5 * 2;
    FUN_1002122c((int)(short)(*(short *)(_DAT_4bffe775 + iVar1 + 0x1604) +
                             *(short *)(&DAT_8185002c + iVar2)),
                 (int)(short)(*(short *)(_DAT_4bffe775 + iVar1 + 0x1606) +
                             *(short *)(&DAT_80bf0024 + iVar2)),local_40 + iVar5);
    if (local_40[iVar5] < 8) {
      *param_3 = *(short *)(_DAT_4bffe775 + iVar1 + 0x1604) + *(short *)(&DAT_8185002c + iVar2);
      *param_4 = *(short *)(iVar1 + _DAT_4bffe775 + 0x1606) + *(short *)(&DAT_80bf0024 + iVar2);
      return 1;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 4);
  if (param_2 != 0) {
    sVar4 = 0;
    do {
      sVar3 = FUN_1005f230(1,3,0xfffffffe);
      iVar5 = param_1 * 0x42;
      *param_3 = *(short *)(_DAT_4bffe775 + iVar5 + 0x1604) + sVar3;
      sVar3 = FUN_1005f230(1,3,0xfffffffe);
      sVar3 = *(short *)(iVar5 + _DAT_4bffe775 + 0x1606) + sVar3;
      *param_4 = sVar3;
      sVar4 = sVar4 + 1;
      if ((*(uint *)(_DAT_38800000 + sVar3 * 0xe0 + *param_3 * 2) >> 0x14 & 1) == 0) {
        return 1;
      }
    } while (sVar4 < 0x14);
  }
  return 0;
}



// Function: FUN_1004a4f4 at 1004a4f4
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004a4f4(short param_1,short param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002be50((int)param_2,(int)param_3);
  if ((iVar1 < 0) ||
     ((int)*(char *)(_DAT_4bffe775 + iVar1 * 0x42 + 0x1619) ==
      (int)*(short *)(_DAT_4bffe775 + 0x110))) {
    if (*(char *)(_DAT_281f0000 + param_1 * 6) == '\0') {
      if (*(short *)(*(char *)(_DAT_4bffe775 +
                               (*(uint *)(_DAT_38800000 + param_3 * 0xe0 + param_2 * 2) >> 0x18) +
                              0x711) * 2 + -0x64370000) < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1004a5f0 at 1004a5f0
// Size: 556 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_1004a5f0(short param_1,short param_2,short param_3,short param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = (uint)param_4;
  iVar8 = (int)param_1;
  cVar1 = *(char *)(_DAT_4bffe775 + iVar8 * 0x42 + 0x1630);
  iVar4 = FUN_10047d80(iVar8,(int)cVar1);
  psVar5 = (short *)FUN_10021434();
  if (psVar5 != (short *)0x0) {
    if (uVar7 == 0xffffffff) {
      *psVar5 = param_2;
      psVar5[1] = param_3;
    }
    *(char *)(psVar5 + 2) = cVar1;
    iVar3 = iVar8 * 0x42;
    *(undefined1 *)((int)psVar5 + 5) = *(undefined1 *)(_DAT_4bffe775 + iVar3 + 0x1619);
    *(undefined1 *)(psVar5 + 3) = *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x1626);
    *(undefined1 *)((int)psVar5 + 7) = *(undefined1 *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x1626);
    if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xf0) == 0) {
      *(undefined1 *)(psVar5 + 4) = *(undefined1 *)(_DAT_4bffe775 + iVar8 * 0x42 + iVar4 + 0x1622);
    }
    else {
      sVar6 = *(char *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x1622) + 2;
      if (9 < sVar6) {
        sVar6 = 9;
      }
      *(char *)(psVar5 + 4) = (char)sVar6;
    }
    *(char *)((int)psVar5 + 9) = (char)param_1;
    *(undefined1 *)(psVar5 + 5) = 0;
    bVar2 = *(byte *)(_DAT_4bffe775 + iVar8 * 0x42 + iVar4 + 0x162a);
    *(char *)((int)psVar5 + 0xb) = ((char)bVar2 >> 1) + ((char)bVar2 < '\0' && (bVar2 & 1) != 0);
    *(undefined1 *)(iVar8 * 0x42 + _DAT_4bffe775 + 0x1631) = 0;
    if (uVar7 == 0xffffffff) {
      *(uint *)(psVar5 + 6) = *(uint *)(psVar5 + 6) & 0xffff0f80;
      *(undefined1 *)(psVar5 + 8) = 0xff;
      iVar4 = _DAT_38800000 + psVar5[1] * 0xe0;
      *(uint *)(iVar4 + *psVar5 * 2) = *(uint *)(iVar4 + *psVar5 * 2) | 0x100000;
    }
    else {
      if ((int)uVar7 < 100) {
        *psVar5 = -1;
        psVar5[1] = -1;
      }
      else {
        *psVar5 = -2;
        psVar5[1] = -1;
      }
      *(uint *)(psVar5 + 6) = uVar7 & 0x7f | *(uint *)(psVar5 + 6) & 0xffffff80;
      *(undefined1 *)(psVar5 + 8) = 0x65;
    }
  }
  return psVar5;
}



// Function: FUN_1004a81c at 1004a81c
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a81c(void)

{
  if (_DAT_4186001c != 0) {
    FUN_10002ad8();
  }
  return;
}



// Function: FUN_1004a854 at 1004a854
// Size: 1832 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004a854(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30 [2];
  
  FUN_1004a2a8();
  FUN_10034130();
  *(undefined1 *)(_DAT_80410014 + 800) = 0;
  sVar2 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar6 = (int)sVar2;
      iVar3 = _DAT_60000000 + iVar6 * 0x16;
      if ((int)*(char *)(iVar3 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110)) {
        if (((*(short *)(iVar6 * 0x16 + _DAT_60000000) == -1) && (*(short *)(iVar3 + 2) == -1)) &&
           (*(char *)(iVar3 + 0x10) == 'e')) {
          *(undefined1 *)(iVar3 + 0x10) = 0x66;
        }
        else {
          iVar3 = _DAT_60000000 + iVar6 * 0x16;
          if (((*(short *)(_DAT_60000000 + iVar6 * 0x16) == -2) && (*(short *)(iVar3 + 2) == -1)) &&
             (*(char *)(iVar3 + 0x10) == 'e')) {
            *(undefined1 *)(iVar3 + 0x10) = 0x66;
          }
          else {
            iVar4 = iVar6 * 0x16;
            iVar3 = _DAT_60000000 + iVar4;
            if (((*(short *)(_DAT_60000000 + iVar4) == -1) && (*(short *)(iVar3 + 2) == -1)) &&
               (*(char *)(iVar3 + 0x10) == 'f')) {
              iVar3 = FUN_1004a350((ushort)*(undefined4 *)(iVar3 + 0xc) & 0x7f,0,local_30,&local_32)
              ;
              if ((iVar3 == 0) ||
                 (iVar3 = FUN_1004a4f4((int)*(char *)(iVar4 + _DAT_60000000 + 4),(int)local_30[0],
                                       (int)local_32), iVar3 == 0)) {
                iVar3 = _DAT_60000000 + iVar6 * 0x16;
                if ((*(uint *)(iVar3 + 0xc) & 0x7f) == (int)*(char *)(iVar3 + 9)) {
                  FUN_100214e8(iVar3);
                }
                else {
                  iVar3 = _DAT_60000000 + iVar6 * 0x16;
                  *(uint *)(iVar3 + 0xc) =
                       (int)*(char *)(iVar3 + 9) & 0x7fU | *(uint *)(iVar3 + 0xc) & 0xffffff80;
                  *(undefined1 *)(iVar6 * 0x16 + _DAT_60000000 + 0x10) = 0x65;
                }
              }
              else {
                *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800)) = 0;
                iVar3 = iVar6 * 0x16;
                *(int *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) * 4 + 400) =
                     _DAT_60000000 + iVar3;
                *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 100) =
                     *(undefined1 *)(iVar3 + _DAT_60000000 + 4);
                *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 200) =
                     *(undefined1 *)(iVar3 + _DAT_60000000 + 9);
                *(byte *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 300) =
                     (byte)*(undefined4 *)(iVar3 + _DAT_60000000 + 0xc) & 0x7f;
                *(short *)(iVar3 + _DAT_60000000) = local_30[0];
                *(short *)(iVar3 + _DAT_60000000 + 2) = local_32;
                *(uint *)(iVar3 + _DAT_60000000 + 0xc) =
                     *(uint *)(iVar3 + _DAT_60000000 + 0xc) & 0xffffff80;
                uVar5 = *(uint *)(iVar3 + _DAT_60000000 + 0xc);
                *(uint *)(iVar3 + _DAT_60000000 + 0xc) = (uVar5 & 0xf) << 0xc | uVar5 & 0xffff0fff;
                *(undefined1 *)(iVar3 + _DAT_60000000 + 0x10) = 0xff;
                *(char *)(_DAT_80410014 + 800) = *(char *)(_DAT_80410014 + 800) + '\x01';
              }
            }
            else {
              iVar3 = iVar6 * 0x16;
              if (((*(short *)(_DAT_60000000 + iVar3) == -2) &&
                  (*(short *)(_DAT_60000000 + iVar3 + 2) == -1)) &&
                 (*(char *)(_DAT_60000000 + iVar3 + 0x10) == 'f')) {
                iVar4 = FUN_10034074((int)*(short *)(_DAT_4bffe775 + 0x110),&local_34,&local_36);
                FUN_1002122c((int)local_34,(int)local_36,&local_38);
                if (((iVar4 == 0) || (7 < local_38)) ||
                   (iVar3 = FUN_1004a4f4((int)*(char *)(iVar3 + _DAT_60000000 + 4),(int)local_34,
                                         (int)local_36), iVar3 == 0)) {
                  iVar3 = iVar6 * 0x16;
                  *(undefined2 *)(_DAT_60000000 + iVar3) = 0xffff;
                  iVar4 = iVar3 + _DAT_60000000;
                  *(uint *)(iVar4 + 0xc) =
                       (int)*(char *)(iVar4 + 9) & 0x7fU | *(uint *)(iVar4 + 0xc) & 0xffffff80;
                  *(undefined1 *)(iVar3 + _DAT_60000000 + 0x10) = 0x65;
                }
                else {
                  *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800)) = 0;
                  iVar3 = iVar6 * 0x16;
                  *(int *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) * 4 + 400) =
                       _DAT_60000000 + iVar3;
                  *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 100) =
                       *(undefined1 *)(iVar3 + _DAT_60000000 + 4);
                  *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 200) =
                       *(undefined1 *)(iVar3 + _DAT_60000000 + 9);
                  *(byte *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 300) =
                       (byte)*(undefined4 *)(iVar3 + _DAT_60000000 + 0xc) & 0x7f;
                  *(short *)(iVar3 + _DAT_60000000) = local_34;
                  *(short *)(iVar3 + _DAT_60000000 + 2) = local_36;
                  *(uint *)(iVar3 + _DAT_60000000 + 0xc) =
                       *(uint *)(iVar3 + _DAT_60000000 + 0xc) & 0xffffff80;
                  uVar5 = *(uint *)(iVar3 + _DAT_60000000 + 0xc);
                  *(uint *)(iVar3 + _DAT_60000000 + 0xc) = (uVar5 & 0xf) << 0xc | uVar5 & 0xffff0fff
                  ;
                  *(undefined1 *)(iVar3 + _DAT_60000000 + 0x10) = 0xff;
                  *(char *)(_DAT_80410014 + 800) = *(char *)(_DAT_80410014 + 800) + '\x01';
                }
              }
            }
          }
        }
      }
    } while (iVar6 != 0);
  }
  iVar3 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      iVar6 = iVar3 * 0x42;
      iVar4 = _DAT_4bffe775 + iVar6;
      if (((int)*(char *)(iVar4 + 0x1619) == (int)*(short *)(_DAT_4bffe775 + 0x110)) &&
         ('\0' < *(char *)(iVar4 + 0x1631))) {
        *(char *)(iVar4 + 0x1631) = *(char *)(iVar4 + 0x1631) + -1;
        if ((*(char *)(_DAT_4bffe775 + iVar6 + 0x1631) < '\x01') &&
           (*(undefined1 *)(_DAT_4bffe775 + iVar6 + 0x1631) = 0,
           0 < *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186))) {
          iVar4 = FUN_1004a350(iVar3,0,local_30,&local_32);
          if (iVar4 == 0) {
            if (*(short *)(iVar6 + _DAT_4bffe775 + 0x1636) == 0) goto LAB_1004af34;
LAB_1004ae34:
            iVar6 = _DAT_4bffe775 + iVar3 * 0x42;
            iVar6 = FUN_1002be50((int)*(short *)(iVar6 + 0x1638),(int)*(short *)(iVar6 + 0x163a));
            *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800)) = 1;
            if (iVar6 < 0) {
              iVar6 = (int)(short)(*(short *)(_DAT_4bffe775 + 0x110) + 100);
            }
          }
          else {
            if (*(short *)(_DAT_4bffe775 + iVar3 * 0x42 + 0x1636) != 0) goto LAB_1004ae34;
            *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800)) = 2;
            iVar6 = -1;
          }
          iVar4 = FUN_1004a5f0(iVar3,(int)local_30[0],(int)local_32,iVar6);
          if (iVar4 != 0) {
            *(int *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) * 4 + 400) = iVar4;
            *(undefined1 *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 100) =
                 *(undefined1 *)(iVar4 + 4);
            *(char *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 200) = (char)iVar3;
            *(char *)(_DAT_80410014 + *(char *)(_DAT_80410014 + 800) + 300) = (char)iVar6;
            *(char *)(_DAT_80410014 + 800) = *(char *)(_DAT_80410014 + 800) + '\x01';
          }
        }
      }
LAB_1004af34:
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  cVar1 = *(char *)(_DAT_80410014 + 800);
  FUN_1004a81c();
  return (int)cVar1;
}



// Function: FUN_1004af7c at 1004af7c
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004af7c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_1004a2a8();
  iVar3 = 0;
  if ('\0' < *(char *)(_DAT_80410014 + 800)) {
    do {
      if (*(char *)(_DAT_80410014 + iVar3) != '\0') {
        iVar2 = (int)*(char *)(_DAT_80410014 + iVar3 + 200);
        iVar2 = FUN_10047d80(iVar2,(int)*(char *)(_DAT_4bffe775 + iVar2 * 0x42 + 0x1630));
        iVar1 = _DAT_4bffe775 + *(char *)(_DAT_80410014 + iVar3 + 200) * 0x42;
        *(undefined1 *)(iVar1 + 0x1631) = *(undefined1 *)(iVar1 + iVar2 + 0x161e);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < *(char *)(_DAT_80410014 + 800));
  }
  FUN_1004a81c();
  FUN_1002b91c();
  FUN_10007f78();
  return;
}



// Function: FUN_1004b06c at 1004b06c
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004b06c(void)

{
  char cVar1;
  
  FUN_1004a2a8();
  cVar1 = *(char *)(_DAT_80410014 + 800);
  FUN_1004a81c();
  return (int)cVar1;
}



// Function: FUN_1004b0b8 at 1004b0b8
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004b0b8(void)

{
  int iVar1;
  
  FUN_1004a2a8();
  iVar1 = (int)*(char *)(_DAT_80410014 + 800);
  if (4 < iVar1) {
    iVar1 = 5;
  }
  _DAT_a8650028 = (undefined2)iVar1;
  _DAT_60bb0000 = 0;
  FUN_1004a81c();
  return;
}



// Function: FUN_1004b11c at 1004b11c
// Size: 436 bytes

/* WARNING: Removing unreachable block (ram,0x1004b204) */
/* WARNING: Removing unreachable block (ram,0x1004b214) */
/* WARNING: Removing unreachable block (ram,0x1004b21c) */
/* WARNING: Removing unreachable block (ram,0x1004b224) */
/* WARNING: Removing unreachable block (ram,0x1004b1fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004b11c(short param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),3,0,0,
               _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 10) * 0x14 + 0x224);
  uVar2 = _DAT_57e31838 - _DAT_60000000;
  if (param_1 == 0) {
    iVar1 = FUN_1005f230(1,0xb,0xffffffff);
    uVar3 = *(ushort *)(iVar1 * 2 + 0x48001959);
  }
  else {
    iVar1 = FUN_1005f230(1,5,0xffffffff);
    if ((iVar1 == 0) && (*(short *)(_DAT_4bffe775 + 0x114) != 0)) {
      uVar3 = 5;
    }
    else {
      uVar3 = 4;
    }
  }
  *(undefined2 *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) = 1;
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1146) =
       (short)(uVar2 / 0x16);
  *(ushort *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1144) = uVar3;
  if (6 < uVar3) {
    return;
  }
  return;
}



// Function: FUN_1004bc90 at 1004bc90
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004bc90(void)

{
  FUN_1004b11c(0);
  FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x5e3);
  return;
}



// Function: FUN_1004bcd0 at 1004bcd0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004bcd0(void)

{
  FUN_1002bef8((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
  FUN_10052900();
  return;
}



// Function: FUN_1004bd0c at 1004bd0c
// Size: 940 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004bd0c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_4b4;
  undefined1 auStack_490 [256];
  undefined1 auStack_390 [256];
  undefined1 auStack_290 [256];
  undefined1 auStack_190 [80];
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_10092484(5);
  iVar1 = FUN_1002bef8((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
  if (_DAT_7fa83811 == (int *)0x0) {
    _DAT_7fa83811 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x100e,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 800));
  uVar2 = FUN_1005f678(0x14,0);
  FUN_10001dd0(auStack_190,uVar2,_DAT_4bffe775 + iVar1 * 0x20 + 0x816);
  FUN_100b19f4(auStack_290,auStack_190);
  FUN_10090e0c(_DAT_7fa83811,0x6c696e31,auStack_290,1);
  uVar2 = FUN_1005f678(0x14,1);
  FUN_100b19f4(auStack_390,uVar2);
  FUN_10090e0c(_DAT_7fa83811,0x6c696e32,auStack_390,1);
  uVar2 = FUN_1005f678(0x14,2);
  FUN_100b19f4(auStack_490,uVar2);
  FUN_10090e0c(_DAT_7fa83811,0x6c696e33,auStack_490,1);
  piVar3 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x71756573);
  if (piVar3 != (int *)0x0) {
    if (((*(short *)(_DAT_4bffe775 + 0x11e) == 0) ||
        (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 0xc + _DAT_4bffe775 + 0x1142) != 0)) ||
       (**(int **)(local_4b4 + -0x3f0) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),uVar2,1);
  }
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = _DAT_41820010;
  _DAT_41820010 = auStack_140;
  iVar1 = FUN_10000090(auStack_140);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
    FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
    _DAT_7fa83811 = (int *)0x0;
    FUN_10117884(**(int **)(local_4b4 + -0x1698) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x1698) + 0x4c8));
    FUN_10117884(**(int **)(local_4b4 + -0x1504) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x1504) + 0x4c8));
    FUN_10117884(**(int **)(local_4b4 + -0x18fc) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x18fc) + 0x4c8));
    FUN_10117884(**(int **)(local_4b4 + -0x16a0) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x16a0) + 0x4c8));
    if (iVar1 == 0x71756573) {
      FUN_1004bc90();
    }
    else {
      FUN_1004bcd0();
    }
    _DAT_41820010 = local_38;
  }
  else {
    if (_DAT_7fa83811 != (int *)0x0) {
      FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
    }
    _DAT_7fa83811 = (int *)0x0;
    FUN_100db158((int)local_40,local_3c);
  }
  return;
}



// Function: FUN_1004c0b8 at 1004c0b8
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004c0b8(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1ea8 [260];
  undefined1 auStack_1da4 [80];
  undefined4 local_1d54;
  undefined4 local_1d50;
  undefined4 uStack_1d4c;
  
  iVar1 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc;
  local_1d54 = *(undefined4 *)(iVar1 + 0x1142);
  uStack_1d4c = *(undefined4 *)(iVar1 + 0x114a);
  local_1d50._0_2_ = (short)((uint)*(undefined4 *)(iVar1 + 0x1146) >> 0x10);
  iVar2 = (int)local_1d50._0_2_;
  local_1d50 = *(undefined4 *)(iVar1 + 0x1146);
  FUN_10001dd0(auStack_1da4,0x7c63f814,
               _DAT_4bffe775 + *(char *)(_DAT_60000000 + iVar2 * 0x16 + 10) * 0x14 + 0x224);
  FUN_100b19f4(auStack_1ea8,auStack_1da4);
  FUN_10090e0c(_DAT_7fa83811,0x73747231,auStack_1ea8,1);
  if (local_1d54._2_2_ < 7) {
    return;
  }
  return;
}



// Function: FUN_1004d0d0 at 1004d0d0
// Size: 820 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004d0d0(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar1 = *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) != 0;
  iVar5 = *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1146) * 0x16;
  iVar4 = _DAT_60000000 + iVar5;
  if (((*(short *)(_DAT_60000000 + iVar5) < 0) || (*(short *)(iVar4 + 2) < 0)) ||
     (*(char *)(iVar4 + 4) != '\x1c')) {
    bVar1 = false;
  }
  if (_DAT_7fa83811 == (int *)0x0) {
    _DAT_7fa83811 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x1068,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 800));
  if (!bVar1) {
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x7469746c);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),1,1);
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x7363726f);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),0,1);
    }
    uVar3 = FUN_1005f678(0x15,0xffffffff);
    FUN_100b19f4(auStack_238,uVar3);
    FUN_10090e0c(_DAT_7fa83811,0x6e6f6e65,auStack_238,1);
  }
  FUN_10060608(0,0,0);
  if (bVar1) {
    FUN_1004c0b8();
    iVar4 = *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1146) * 0x16;
    FUN_10061980((int)*(short *)(_DAT_60000000 + iVar4),(int)*(short *)(_DAT_60000000 + iVar4 + 2),1
                );
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar4 = FUN_10000090(auStack_138);
  if (iVar4 == 0) {
    FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
    FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
    _DAT_7fa83811 = (int *)0x0;
    _DAT_41820010 = local_30;
  }
  else {
    if (_DAT_7fa83811 != (int *)0x0) {
      FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
    }
    _DAT_7fa83811 = (int *)0x0;
    FUN_100db158((int)local_38,local_34);
  }
  FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3fa);
  return;
}



// Function: FUN_1004d404 at 1004d404
// Size: 400 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004d404(ushort param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_8a8 [256];
  undefined1 auStack_7a8 [256];
  undefined1 auStack_6a8 [256];
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 uStack_5a0;
  undefined1 auStack_598 [1364];
  
  iVar2 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc;
  local_5a8 = *(undefined4 *)(iVar2 + 0x1142);
  uStack_5a0 = *(undefined4 *)(iVar2 + 0x114a);
  local_5a4._0_2_ = (short)((uint)*(undefined4 *)(iVar2 + 0x1146) >> 0x10);
  iVar3 = (int)local_5a4._0_2_;
  local_5a4 = *(undefined4 *)(iVar2 + 0x1146);
  FUN_10001dd0(auStack_598,0x7c63f824,
               _DAT_4bffe775 + *(char *)(_DAT_60000000 + iVar3 * 0x16 + 10) * 0x14 + 0x224);
  FUN_100b19f4(auStack_6a8,auStack_598);
  FUN_10090e0c(_DAT_7fa83811,0x73747231,auStack_6a8,1);
  uVar1 = FUN_1005f678(0x1d,0);
  FUN_100b19f4(auStack_7a8,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747232,auStack_7a8,1);
  uVar1 = FUN_1005f678(0x1d,1);
  FUN_100b19f4(auStack_8a8,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747233,auStack_8a8,1);
  if (param_1 < 4) {
    return;
  }
  return;
}



// Function: FUN_1004d938 at 1004d938
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004d938(void)

{
  short local_18 [4];
  
  FUN_1002122c((int)*_DAT_57e31838,(int)_DAT_57e31838[1],local_18);
  _DAT_817f0000 = _DAT_57e31838;
  if (0 < local_18[0]) {
    FUN_10021a3c((int)local_18[0],&DAT_80410014,0);
    FUN_10055c64(_DAT_817f0000);
  }
  FUN_1003f674(1,1,1);
  return;
}



// Function: FUN_1004d9cc at 1004d9cc
// Size: 496 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004d9cc(short param_1,short param_2)

{
  int iVar1;
  int local_154;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_10060608(1,1,0);
  if (_DAT_7fa83811 == (int *)0x0) {
    _DAT_7fa83811 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x1068,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 800));
  FUN_10060608(0,0,0);
  FUN_1004d404((int)param_1,(int)param_2);
  iVar1 = *(short *)(**(int **)(local_154 + -0x544) +
                     *(short *)(**(int **)(local_154 + -0x544) + 0x110) * 0xc + 0x1146) * 0x16;
  FUN_10061980((int)*(short *)(**(int **)(local_154 + -0x540) + iVar1),
               (int)*(short *)(**(int **)(local_154 + -0x540) + iVar1 + 2),1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
    FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
    _DAT_7fa83811 = (int *)0x0;
    FUN_1004d938();
    _DAT_41820010 = local_28;
  }
  else {
    if (_DAT_7fa83811 != (int *)0x0) {
      FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
    }
    _DAT_7fa83811 = (int *)0x0;
    FUN_100db158((int)local_30,local_2c);
  }
  FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3fa);
  return;
}



// Function: FUN_1004dbbc at 1004dbbc
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004dbbc(short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = _DAT_4bffe775 + iVar1 * 0x20;
  if (*(short *)(iVar2 + 0x82e) == 0) {
    return 0;
  }
  if (((int)*(short *)(_DAT_4bffe775 + iVar1 * 0x20 + 0x830) &
      1 << ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0x3fU)) != 0) {
    return 0;
  }
  if (*(char *)(_DAT_4bffe775 + iVar1 * 0x20 + 0x82a) == '\0') {
    return 0;
  }
  if (*(char *)(_DAT_4bffe775 + iVar1 * 0x20 + 0x82a) == '\x01') {
    return 0;
  }
  if ((*(uint *)(_DAT_38800000 + *(short *)(iVar2 + 0x814) * 0xe0 + *(short *)(iVar2 + 0x812) * 2)
       >> 0x16 & 1) != 0) {
    return 0;
  }
  return 1;
}



// Function: FUN_1004dc94 at 1004dc94
// Size: 1120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004dc94(undefined2 *param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1146) * 0x16;
  bVar1 = true;
  if (*(char *)(_DAT_4bffe775 +
                (*(uint *)(_DAT_38800000 + *(short *)(_DAT_60000000 + iVar6 + 2) * 0xe0 +
                          *(short *)(_DAT_60000000 + iVar6) * 2) >> 0x18) + 0x711) != '\n') {
    iVar6 = 0;
    do {
      if ((*(char *)(_DAT_281f0000 + iVar6 * 6 + 4) == '\x02') &&
         (*(char *)(iVar6 * 6 + _DAT_281f0000) == '\0')) {
        bVar1 = false;
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < 0x1c);
  }
  iVar9 = 0;
  iVar6 = 0;
  do {
    iVar7 = _DAT_4bffe775 + iVar9 * 0x1e;
    if (((*(char *)(iVar7 + 0xd28) == '\0') &&
        (iVar7 = FUN_100390e4(*(undefined4 *)(iVar7 + 0xd12),*(undefined4 *)(iVar7 + 0xd16),
                              *(undefined4 *)(iVar7 + 0xd1a),*(undefined4 *)(iVar7 + 0xd1e),
                              *(undefined4 *)(iVar7 + 0xd22),*(undefined4 *)(iVar7 + 0xd26),
                              *(undefined4 *)(iVar7 + 0xd2a),*(undefined4 *)(iVar7 + 0xd2e)),
        iVar7 != 0)) && ((7 < iVar9 || (iVar9 == *(short *)(_DAT_4bffe775 + 0x110))))) {
      iVar6 = (int)(short)((short)iVar6 + 1);
    }
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x16);
  iVar9 = 0;
  sVar5 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      iVar7 = FUN_1004dbbc(iVar9);
      if (iVar7 != 0) {
        sVar5 = sVar5 + 1;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  if (0 < iVar6) {
    iVar9 = FUN_1005f230(1,3,0);
    if (iVar9 == 1) {
      iVar6 = FUN_1005f230(1,iVar6,0);
      iVar7 = 0;
      iVar9 = 0;
      do {
        iVar8 = _DAT_4bffe775 + iVar7 * 0x1e;
        if (((*(char *)(iVar8 + 0xd28) == '\0') &&
            (iVar8 = FUN_100390e4(*(undefined4 *)(iVar8 + 0xd12),*(undefined4 *)(iVar8 + 0xd16),
                                  *(undefined4 *)(iVar8 + 0xd1a),*(undefined4 *)(iVar8 + 0xd1e),
                                  *(undefined4 *)(iVar8 + 0xd22),*(undefined4 *)(iVar8 + 0xd26),
                                  *(undefined4 *)(iVar8 + 0xd2a),*(undefined4 *)(iVar8 + 0xd2e)),
            iVar8 != 0)) &&
           (((7 < iVar7 || (iVar7 == *(short *)(_DAT_4bffe775 + 0x110))) &&
            (iVar9 = (int)(short)((short)iVar9 + 1), iVar9 == iVar6)))) break;
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < 0x16);
      *param_1 = (short)iVar7;
      return 0;
    }
    if (0 < iVar6) goto LAB_1004e05c;
  }
  if ((0 < sVar5) && (iVar6 = FUN_1005f230(1,3,0), iVar6 == 1)) {
    sVar5 = 10000;
    iVar6 = 0;
    uVar4 = 0;
    iVar9 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
      do {
        iVar7 = FUN_1004dbbc(iVar9);
        if (iVar7 != 0) {
          sVar2 = FUN_10003768((int)*(short *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x812) -
                               (int)*(short *)(_DAT_60000000 +
                                              *(short *)(_DAT_4bffe775 +
                                                         *(short *)(_DAT_4bffe775 + 0x110) * 0xc +
                                                        0x1146) * 0x16));
          sVar3 = FUN_10003768((int)*(short *)(iVar9 * 0x20 + _DAT_4bffe775 + 0x814) -
                               (int)*(short *)(_DAT_60000000 +
                                               *(short *)(_DAT_4bffe775 +
                                                          *(short *)(_DAT_4bffe775 + 0x110) * 0xc +
                                                         0x1146) * 0x16 + 2));
          if (sVar3 < sVar2) {
            sVar3 = sVar2;
          }
          if (sVar3 < sVar5) {
            iVar6 = iVar9;
            sVar5 = sVar3;
          }
        }
        uVar4 = (undefined2)iVar6;
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
    }
    *param_1 = uVar4;
    return 1;
  }
LAB_1004e05c:
  if ((bVar1) &&
     ((599 < *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) ||
      (iVar6 = FUN_1005f230(1,2,0xffffffff), iVar6 != 0)))) {
    uVar4 = FUN_1005f230(1,3,2);
    *param_1 = uVar4;
    return 3;
  }
  uVar4 = FUN_1005f230(2,1000,1000);
  *param_1 = uVar4;
  return 2;
}



// Function: FUN_1004e0f4 at 1004e0f4
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e0f4(ushort param_1)

{
  if (param_1 < 4) {
    return;
  }
  FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),2,0,0,
               _DAT_4bffe775 +
               *(char *)(_DAT_60000000 +
                         *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1146
                                   ) * 0x16 + 10) * 0x14 + 0x224);
  FUN_1003357c(_DAT_60000000 +
               *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1146) * 0x16,
               10);
  return;
}



// Function: FUN_1004e384 at 1004e384
// Size: 496 bytes

/* WARNING: Removing unreachable block (ram,0x1004f2c4) */
/* WARNING: Removing unreachable block (ram,0x1004f308) */
/* WARNING: Removing unreachable block (ram,0x1004f324) */
/* WARNING: Removing unreachable block (ram,0x1004f32c) */
/* WARNING: Removing unreachable block (ram,0x1004f330) */
/* WARNING: Removing unreachable block (ram,0x1004f338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004e384(short param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(_DAT_4bffe775 + 0x110);
  if (*(char *)(_DAT_60000000 + *(short *)(_DAT_4bffe775 + iVar4 * 0xc + 0x1146) * 0x16 + 5) ==
      iVar4) {
    if ((int)param_1 + 1U < 6) {
      FUN_101174e8 = &DAT_90010008;
      return (int)param_1;
    }
  }
  else {
    if ((_DAT_38a0ffff == 0) && (*(short *)(iVar4 * 2 + _DAT_4bffe775 + 0xd0) != 1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar1 = FUN_1005f678(0x21,1,(int)param_3,&DAT_9421ffc8,&DAT_4086ffcc);
      uVar2 = FUN_1005f678(0x21,0);
      FUN_1003ced4(uVar2,uVar1);
    }
    *(undefined2 *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) = 0;
  }
  return 0;
}



// Function: FUN_1004f388 at 1004f388
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f388(void)

{
  int local_7c;
  undefined1 auStack_58 [84];
  
  _DAT_607a0000 = _DAT_80410014;
  _DAT_83e2fb7c = _DAT_4beec4a1;
  FUN_10001dd0(auStack_58,&DAT_80410014,_DAT_4bffe775 + _DAT_63e30000 * 0x42 + 0x1608);
  FUN_10050ffc(*(int *)(local_7c + -0x1970) + 0xc,*(int *)(local_7c + -0x1970) + 0x18,
               *(int *)(local_7c + -0x1970) + 0x30,auStack_58,*(int *)(local_7c + -0x1970) + 0x38,
               *(undefined4 *)(local_7c + -0x196c),0);
  return;
}



// Function: FUN_1004f438 at 1004f438
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004f438(short param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = FUN_1002be50((int)param_1,(int)param_2);
  iVar6 = iVar3 * 0x42;
  iVar4 = _DAT_4bffe775 + iVar6;
  iVar7 = (int)(short)(*(char *)(iVar4 + 0x1619) * 2 + 0xa0);
  sVar1 = *(short *)(iVar4 + 0x1604);
  sVar2 = *(short *)(iVar4 + 0x1606);
  *(undefined1 *)(iVar4 + 0x1619) = 0xf;
  *(undefined1 *)(iVar6 + _DAT_4bffe775 + 0x1633) = 0xf;
  iVar4 = sVar2 * 0xe0;
  iVar5 = sVar1 * 2;
  *(uint *)(_DAT_38800000 + iVar4 + iVar5) =
       iVar7 << 0x18 | *(uint *)(_DAT_38800000 + iVar4 + iVar5) & 0xffffff;
  iVar8 = iVar4 + _DAT_38800000 + iVar5;
  *(uint *)(iVar8 + 0xe0) = (iVar7 + 0x10) * 0x1000000 | *(uint *)(iVar8 + 0xe0) & 0xffffff;
  iVar8 = iVar4 + _DAT_38800000 + iVar5;
  *(uint *)(iVar8 + 2) = (iVar7 + 1) * 0x1000000 | *(uint *)(iVar8 + 2) & 0xffffff;
  iVar5 = iVar4 + _DAT_38800000 + iVar5;
  *(uint *)(iVar5 + 0xe2) = (iVar7 + 0x11) * 0x1000000 | *(uint *)(iVar5 + 0xe2) & 0xffffff;
  if (*(short *)(iVar6 + _DAT_4bffe775 + 0x1636) != 0) {
    *(undefined2 *)(iVar6 + _DAT_4bffe775 + 0x1636) = 0;
  }
  iVar6 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      iVar4 = iVar6 * 0x42;
      iVar5 = _DAT_4bffe775 + iVar4;
      if (((*(short *)(iVar5 + 0x1636) != 0) &&
          (iVar7 = iVar3 * 0x42 + _DAT_4bffe775,
          *(short *)(iVar5 + 0x1638) == *(short *)(iVar7 + 0x1604))) &&
         (*(short *)(iVar5 + 0x163a) == *(short *)(iVar7 + 0x1606))) {
        *(undefined1 *)(iVar5 + 0x1631) = 0;
        *(short *)(iVar4 + _DAT_4bffe775 + 0x163a) =
             (short)*(char *)(iVar4 + _DAT_4bffe775 + 0x1631);
        *(undefined2 *)(_DAT_4bffe775 + iVar4 + 0x1638) =
             *(undefined2 *)(_DAT_4bffe775 + iVar4 + 0x163a);
        *(undefined2 *)(_DAT_4bffe775 + iVar4 + 0x1636) =
             *(undefined2 *)(_DAT_4bffe775 + iVar4 + 0x1638);
        *(undefined1 *)(iVar4 + _DAT_4bffe775 + 0x1630) = 0xff;
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  return iVar3;
}



// Function: FUN_1004f620 at 1004f620
// Size: 68 bytes

void FUN_1004f620(short param_1,short param_2)

{
  FUN_1004f438((int)param_1,(int)param_2,1);
  FUN_10060608(1,1,0);
  return;
}



// Function: FUN_1004f664 at 1004f664
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f664(void)

{
  short sVar1;
  
  sVar1 = FUN_1005f230(1,0x19,0);
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) =
       *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0x1122) + sVar1 + 100;
  FUN_1004f620((int)_DAT_607a0000,(int)_DAT_83e2fb7c,10);
  FUN_1002bdc4();
  FUN_1002bbd4();
  FUN_1002bcd8();
  return;
}



// Function: FUN_1004f704 at 1004f704
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1004f704(void)

{
  int iVar1;
  
  _DAT_40820020 = 0;
  iVar1 = 0;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar1 * 2 + 0x138) == 0) {
      *(undefined2 *)(iVar1 * 2 + 0x2c1a0000) = 1;
    }
    else {
      *(undefined2 *)(iVar1 * 2 + 0x2c1a0000) = 0;
    }
    *(undefined2 *)(&DAT_40820034 + iVar1 * 2) = 0;
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 8);
  FUN_1002bdc4();
  if (_DAT_80bf0004 < 5) {
    return &DAT_80bf0004;
  }
  return (undefined1 *)0x0;
}



// Function: FUN_1004fbb8 at 1004fbb8
// Size: 36 bytes

void FUN_1004fbb8(void)

{
  FUN_1004b0b8();
  return;
}



// Function: FUN_1004fbdc at 1004fbdc
// Size: 1560 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fbdc(void)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_94;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  
  uVar2 = _FUN_10116698;
  if (_DAT_80bf0004 == 3) {
    FUN_1004fbb8();
  }
  else {
    piVar3 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                                 0x62617267);
    if ((piVar3 != (int *)0x0) &&
       (iVar4 = FUN_10117884((int)*(short *)(*piVar3 + 0x3a8) + (int)piVar3), iVar4 != 0)) {
      FUN_100462c8(5);
      if (_DAT_4e800030 != 0) {
        FUN_10009a98();
      }
      iVar4 = 0;
      do {
        if (*(short *)(iVar4 * 2 + 0x2c1a0000) == 0) {
          local_4e = *(short *)(&DAT_80df0020 + iVar4 * 2);
          local_4a = 8;
          local_50 = 9;
          if (_DAT_40820020 < 1) {
            local_4c = 1;
          }
          else {
            if (*(short *)(&DAT_40820034 + iVar4 * 2) < 0) {
              *(undefined2 *)(&DAT_40820034 + iVar4 * 2) = 0;
            }
            local_4c = (short)((*(short *)(&DAT_40820034 + iVar4 * 2) * 0xf0) / (int)_DAT_40820020);
          }
          if (local_4c < 1) {
            local_4c = 1;
          }
          uVar5 = (uint)local_4c;
          iVar6 = (int)(short)(local_4c +
                              (short)(((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0)
                                     ) * -8);
          iVar7 = 0;
          bVar1 = false;
          do {
            if (iVar7 == (short)((short)((int)uVar5 >> 3) +
                                (ushort)((int)uVar5 < 0 && (uVar5 & 7) != 0))) {
              bVar1 = true;
              if (0 < iVar6) {
                FUN_10009b48(&DAT_4e800020,(int)*(short *)(&DAT_90bf000c + iVar4 * 4),
                             (int)*(short *)(iVar4 * 4 + -0x6f40fff2),iVar6,8,uVar2,
                             (int)(short)(local_50 + (short)(iVar7 << 3)),(int)local_4e);
              }
            }
            else {
              FUN_10009b48(&DAT_4e800020,(int)*(short *)(&DAT_90bf000c + iVar4 * 4),
                           (int)*(short *)(iVar4 * 4 + -0x6f40fff2),8,8,uVar2,
                           (int)(short)(local_50 + (short)(iVar7 << 3)),(int)local_4e);
              iVar7 = (int)(short)((short)iVar7 + 1);
            }
            FUN_100226b0(auStack_58,(int)(short)(local_50 + -1),(int)(short)(local_4e + -1),
                         (int)(short)(local_4c + 2),(int)(short)(local_4a + 2));
            FUN_10047abc(auStack_58,0xfc,0xf8);
          } while (!bVar1);
        }
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < 8);
      FUN_100479f4(0xfc);
      FUN_10000270(7,0x16);
      FUN_10000288(0xf0,0);
      FUN_10000270(7,0x10);
      FUN_10000288(0,6);
      FUN_10000270(0x43,0x12);
      FUN_10000288(0,4);
      FUN_10000270(0x7f,0x10);
      FUN_10000288(0,6);
      FUN_10000270(0xbb,0x12);
      FUN_10000288(0,4);
      FUN_10000270(0xf7,0x10);
      FUN_10000288(0,6);
      FUN_100479f4(0xf8);
      FUN_10000270(9,0x18);
      FUN_10000288(0xf0,0);
      FUN_10000270(9,0x12);
      FUN_10000288(0,6);
      FUN_10000270(0x45,0x14);
      FUN_10000288(0,4);
      FUN_10000270(0x81,0x12);
      FUN_10000288(0,6);
      FUN_10000270(0xbd,0x14);
      FUN_10000288(0,4);
      FUN_10000270(0xf9,0x12);
      FUN_10000288(0,6);
      FUN_100479f4(0xe0);
      FUN_10000270(9,0x17);
      FUN_10000288(0xf0,0);
      FUN_10000270(8,0x11);
      FUN_10000288(0,6);
      FUN_10000270(0x44,0x13);
      FUN_10000288(0,4);
      FUN_10000270(0x80,0x11);
      FUN_10000288(0,6);
      FUN_10000270(0xbc,0x13);
      FUN_10000288(0,4);
      FUN_10000270(0xf8,0x11);
      FUN_10000288(0,6);
      FUN_1003206c(2,0xe0,0xff,0xf9);
      FUN_10001dd0(auStack_68,*(undefined4 *)(local_94 + -0x1968),(int)_DAT_40820020);
      FUN_1005f200((int)_DAT_7cc5301c,(int)_DAT_7cc5301e,auStack_68);
      uVar5 = (uint)_DAT_40820020;
      iVar4 = *(int *)(local_94 + -0x1968);
      FUN_10001dd0(auStack_68,iVar4 + 4,
                   ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0));
      FUN_1005f1d0((int)_DAT_7cc53018,(int)_DAT_7cc5301a,auStack_68);
      FUN_1005f1d0((int)_DAT_7cc53014,(int)_DAT_7cc53016,iVar4 + 8);
      if (_DAT_4e800030 != 0) {
        FUN_10009b00(_DAT_4e800030);
      }
    }
  }
  return;
}



// Function: FUN_100501f4 at 100501f4
// Size: 632 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100501f4(ushort param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_3d4;
  undefined1 auStack_3b0 [256];
  undefined1 auStack_2b0 [256];
  undefined1 auStack_1b0 [296];
  undefined1 local_88 [80];
  
  if ((param_1 != 0) && (_DAT_90bf0008 == (int *)0x0)) {
    _DAT_90bf0008 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xe74,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  uVar1 = FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x7f8));
  FUN_100db26c(uVar1);
  piVar2 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x6e616d65);
  if (piVar2 != (int *)0x0) {
    uVar1 = FUN_1005f678(0x4a,(int)(short)_DAT_80bf0004);
    FUN_100b19f4(auStack_1b0,uVar1);
    FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_1b0,param_1 & 0xff);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x64657363);
  if (piVar2 != (int *)0x0) {
    uVar1 = FUN_1005f678(0x4b,(int)(short)_DAT_80bf0004);
    FUN_100b19f4(auStack_2b0,uVar1);
    FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_2b0,param_1 & 0xff);
  }
  FUN_1004f704();
  FUN_1004fbdc();
  iVar3 = **(int **)(local_3d4 + -0x544) + *(short *)(**(int **)(local_3d4 + -0x544) + 0x110) * 2;
  FUN_1003206c(2,(int)*(short *)(iVar3 + 0xa0),(int)*(short *)(iVar3 + 0xb0),0xf9);
  local_88[0] = *(undefined1 *)(*(int *)(local_3d4 + -0x1968) + 0xc);
  if (_DAT_80bf0004 < 5) {
    return;
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x706c6179);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_3b0,local_88);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_3b0,param_1 & 0xff);
  }
  return;
}



// Function: FUN_10050830 at 10050830
// Size: 536 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050830(void)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x61726d79);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x748) + (int)piVar1,_DAT_80bf0004 == 0,1);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x63697479);
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)_DAT_80bf0004;
    FUN_10117884((int)*(short *)(*piVar1 + 0x748) + (int)piVar1,
                 ('\x01' - ((1 < uVar2) + '\x01')) + (uVar2 != 0 && (uint)(1 < uVar2) <= uVar2 - 1),
                 1);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x676f6c64);
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)_DAT_80bf0004;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x748),
                 ('\x02' - ((2 < uVar2) + '\x02')) + (1 < uVar2 && (uint)(2 < uVar2) <= uVar2 - 2),1
                );
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x70726f64);
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)_DAT_80bf0004;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x748),
                 ('\x03' - ((3 < uVar2) + '\x03')) + (2 < uVar2 && (uint)(3 < uVar2) <= uVar2 - 3),1
                );
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x77696e6e);
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)_DAT_80bf0004;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x748),
                 ('\x04' - ((4 < uVar2) + '\x04')) + (3 < uVar2 && (uint)(4 < uVar2) <= uVar2 - 4),1
                );
  }
  return;
}



// Function: FUN_10050a48 at 10050a48
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050a48(short param_1)

{
  _DAT_80bf0004 = param_1;
  FUN_1007f094(*(undefined4 *)(_DAT_57c407bd + 0x88),(int)param_1);
  FUN_100501f4(1);
  FUN_10050830();
  if (_DAT_90bf0008 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_90bf0008 + 800) + (int)_DAT_90bf0008);
    FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x810));
    FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x738));
    _DAT_90bf0008 = (int *)0x0;
  }
  return;
}



// Function: FUN_10050b10 at 10050b10
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050b10(short param_1)

{
  int *piVar1;
  
  _DAT_80bf0004 = param_1;
  FUN_1007f094(*(undefined4 *)(_DAT_57c407bd + 0x88),(int)param_1);
  piVar1 = (int *)FUN_10117884((int)_DAT_90bf0008 + (int)*(short *)(*_DAT_90bf0008 + 0x308),
                               0x62617267);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  FUN_100501f4(1);
  FUN_10050830();
  return;
}



// Function: FUN_10050bb0 at 10050bb0
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050bb0(int param_1)

{
  int iVar1;
  
  _DAT_80bf0004 = 4;
  FUN_1004f704();
  iVar1 = 0;
  do {
    *(undefined2 *)(iVar1 * 2 + param_1) = *(undefined2 *)(&DAT_40820034 + iVar1 * 2);
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 8);
  return;
}



// Function: FUN_10050c0c at 10050c0c
// Size: 1008 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050c0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,short param_7,undefined2 param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_668 [256];
  undefined1 auStack_568 [256];
  undefined1 auStack_468 [256];
  undefined1 local_368 [256];
  undefined4 local_268;
  undefined4 local_264;
  undefined1 auStack_260 [256];
  short local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  undefined4 local_150;
  int *local_148;
  undefined1 auStack_144 [256];
  
  local_148 = (int *)0x0;
  local_148 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xd48,
                                  *(undefined4 *)(_DAT_57c407bd + 0x88));
  FUN_100db26c();
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = 0;
  local_158 = _DAT_41820010;
  _DAT_41820010 = auStack_260;
  iVar1 = FUN_10000090(auStack_260);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x68656164);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_468,param_1);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_468,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x73747231);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_568,param_2);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_568,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x73747232);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_668,param_3);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_668,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x6e616d65);
    FUN_100db26c(piVar2);
    *(undefined2 *)(piVar2 + 0x2d) = param_8;
    FUN_100b19f4(auStack_144,param_4);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_144,0);
    if (param_7 == 0) {
      piVar3 = (int *)FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x308),0x63616e63);
      if (piVar3 != (int *)0x0) {
        local_268 = 0xffff8300;
        local_264 = 0xffff8300;
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x370),&local_268,0);
      }
    }
    FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 800));
    iVar1 = FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x810));
    FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x328));
    if (iVar1 == 0x6f6b2020) {
      local_368[0] = 0;
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7a0),local_368);
      FUN_100b1b08(local_368);
      FUN_10117884();
    }
    else {
      FUN_10117884();
    }
    FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x738));
    _DAT_41820010 = local_158;
  }
  else {
    if (local_148 != (int *)0x0) {
      FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x738));
    }
    local_148 = (int *)0x0;
    FUN_100db158((int)local_160,local_15c);
  }
  return;
}



// Function: FUN_10050ffc at 10050ffc
// Size: 952 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_660 [256];
  undefined1 auStack_560 [256];
  undefined1 auStack_460 [256];
  undefined1 auStack_360 [256];
  undefined1 auStack_260 [256];
  int *local_160;
  undefined1 auStack_15c [256];
  short local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_160 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xd52,
                                  *(undefined4 *)(_DAT_57c407bd + 0x88));
  FUN_100db26c();
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = _DAT_41820010;
  _DAT_41820010 = auStack_15c;
  iVar1 = FUN_10000090(auStack_15c);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x68656164);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_260,param_1);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_260,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x73747231);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_360,param_2);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_360,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x73747232);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_460,param_3);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_460,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x73747233);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_560,param_4);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_560,0);
    }
    piVar2 = (int *)FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x73747234);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_660,param_5);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_660,0);
    }
    FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 800));
    iVar1 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x810));
    FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x328));
    if (iVar1 == 0x6f6b2020) {
      if (param_6 != 0) {
        FUN_10117884();
      }
    }
    else if (param_7 != 0) {
      FUN_10117884();
    }
    FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x738));
    _DAT_41820010 = local_54;
  }
  else {
    if (local_160 != (int *)0x0) {
      FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x738));
    }
    local_160 = (int *)0x0;
    FUN_100db158((int)local_5c,local_58);
  }
  return;
}



// Function: FUN_100513b4 at 100513b4
// Size: 292 bytes

void FUN_100513b4(undefined4 param_1,undefined4 param_2,short param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_5c;
  short local_38;
  short local_36;
  int local_30;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  piVar1 = (int *)FUN_10000720((int)param_3);
  iVar3 = *piVar1;
  local_28 = *(undefined2 *)(iVar3 + 2);
  local_26 = *(undefined2 *)(iVar3 + 4);
  local_24 = *(undefined2 *)(iVar3 + 6);
  local_22 = *(undefined2 *)(iVar3 + 8);
  puVar2 = (undefined4 *)FUN_100f56e4(0xdc);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100cdb5c(puVar2);
    *puVar2 = *(undefined4 *)(local_5c + -0x1948);
    *(undefined2 *)(puVar2 + 0x2c) = 0;
    *(undefined2 *)((int)puVar2 + 0xb2) = 0;
    *(undefined2 *)(puVar2 + 0x2d) = 0;
    puVar2[0x31] = 0;
    *(undefined2 *)(puVar2 + 0x32) = 0;
    puVar2[0x36] = 0;
  }
  FUN_100b08d4(&local_38,&local_28);
  local_30 = (int)local_38;
  local_2c = (int)local_36;
  FUN_100d08c4(puVar2,param_1,param_2,&local_30,5,5,(int)param_3);
  puVar2[6] = 0x70726f67;
  *(undefined2 *)((int)puVar2 + 0xb2) = 100;
  FUN_100861b8(puVar2,0,1);
  return;
}



// Function: FUN_100514d8 at 100514d8
// Size: 284 bytes

void FUN_100514d8(int *param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int local_14c;
  undefined1 auStack_128 [256];
  undefined1 auStack_28 [16];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x70726f67);
  if (iVar1 != 0) {
    FUN_100861b8(iVar1,(int)param_2,1);
  }
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73747235);
  if (piVar2 != (int *)0x0) {
    FUN_10001dd0(auStack_28,*(undefined4 *)(local_14c + -0x194c),(int)param_2);
    FUN_100b19f4(auStack_128,auStack_28);
    FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_128,0);
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  }
  return;
}



// Function: FUN_100515f4 at 100515f4
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100515f4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_38800000 == 0) {
    _DAT_38800000 = FUN_100f1640(0x8880);
  }
  if (_DAT_807f0004 == 0) {
    _DAT_807f0004 = FUN_100f1640(0x4440);
  }
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      *(undefined1 *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar3 + 0x34a) = 2;
      iVar1 = iVar2 * 0x70 + _DAT_807f0004;
      *(uint *)(iVar1 + iVar3) = *(uint *)(iVar1 + iVar3) & 0xe0ffffff;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0x9c);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x70);
  return;
}



// Function: FUN_100516c0 at 100516c0
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100516c0(void)

{
  FUN_100514d8(_DAT_80410014,0);
  FUN_100a6298();
  FUN_100515f4();
  FUN_100a01e8();
  FUN_100514d8(_DAT_80410014,10);
  FUN_100a3a80();
  FUN_100514d8(_DAT_80410014,0x14);
  FUN_100abcec();
  FUN_100514d8(_DAT_80410014,0x1e);
  FUN_100a9c08();
  FUN_100514d8(_DAT_80410014,0x28);
  FUN_100a271c();
  FUN_100514d8(_DAT_80410014,0x32);
  FUN_100a66a8();
  FUN_100514d8(_DAT_80410014,0x3c);
  FUN_100a6ae8();
  FUN_100514d8(_DAT_80410014,0x46);
  FUN_100a6f38();
  FUN_100514d8(_DAT_80410014,0x50);
  FUN_100aafb8();
  FUN_100514d8(_DAT_80410014,0x5a);
  FUN_100a6204();
  FUN_100514d8(_DAT_80410014,100);
  return;
}



// Function: FUN_100517f8 at 100517f8
// Size: 1384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100517f8(short param_1,short param_2,short param_3,short param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined **local_ac;
  undefined1 auStack_88 [72];
  undefined4 local_40;
  undefined4 local_3c;
  
  local_40 = 0xca;
  local_3c = 0x3c;
  FUN_100513b4(_DAT_80410014,&local_40,0x3f3);
  piVar2 = (int *)FUN_100f15e0(0x5dd6);
  ppuVar1 = &.TVect::OCECToRString;
  if (piVar2 != (int *)0x0) {
    FUN_10002598(piVar2);
    ppuVar1 = local_ac;
  }
  _DAT_4bfde0cd = (undefined2 *)*piVar2;
  piVar3 = (int *)FUN_100f15e0(0x478a,_DAT_4bfde0cd,0x478a,0);
  if (piVar3 != (int *)0x0) {
    FUN_10002598(piVar3);
    ppuVar1 = local_ac;
  }
  _DAT_7c7dd9d6 = (undefined2 *)*piVar3;
  FUN_10000318((int)*(short *)ppuVar1[-0x2d]);
  piVar4 = (int *)FUN_10051f98(0x44415420,local_ac[-0x653] + 0x24,1);
  if (piVar4 == (int *)0x0) {
    FUN_100db26c(0);
  }
  sVar6 = 0;
  puVar8 = _DAT_4bfde0cd;
  do {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    uVar5 = FUN_100525a0();
    *puVar8 = uVar5;
    sVar6 = sVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (sVar6 < 0x132);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0x132,0x200);
  puVar8 = _DAT_4bfde0cd + 0x232;
  sVar6 = 0;
  do {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    uVar5 = FUN_100525a0();
    *puVar8 = uVar5;
    sVar6 = sVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (sVar6 < 0x180);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0x3b2,800);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
  uVar5 = FUN_100525a0();
  _DAT_4bfde0cd[0x542] = uVar5;
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0x543,0x44c);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
  uVar5 = FUN_100525a0();
  _DAT_4bfde0cd[0x769] = uVar5;
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0x76a,400);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
  uVar5 = FUN_100525a0();
  _DAT_4bfde0cd[0x832] = uVar5;
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
  uVar5 = FUN_100525a0();
  _DAT_4bfde0cd[0x833] = uVar5;
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0x834,0x848);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
  uVar5 = FUN_100525a0();
  _DAT_4bfde0cd[0xc58] = uVar5;
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0xc59,0x4b0);
  puVar8 = _DAT_4bfde0cd + 0xeb1;
  sVar6 = 0;
  do {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    uVar5 = FUN_100525a0();
    *puVar8 = uVar5;
    sVar6 = sVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (sVar6 < 0xfa);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_4bfde0cd + 0xfab,16000);
  sVar6 = 0;
  puVar8 = _DAT_7c7dd9d6;
  do {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    uVar5 = FUN_100525a0();
    *puVar8 = uVar5;
    sVar6 = sVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (sVar6 < 0x1a5);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),_DAT_7c7dd9d6 + 0x1a5,0x4440);
  FUN_100523a8(piVar4,1);
  _DAT_4bfde0cd[0x15] = _DAT_4bfde0cd[0x15] + _DAT_4bfde0cd[param_3 + 0x37];
  _DAT_4bfde0cd[0x1e] = _DAT_4bfde0cd[0x1e] + _DAT_4bfde0cd[param_4 + 0x30];
  _DAT_4bfde0cd[0x1b] = _DAT_4bfde0cd[0x1b] + _DAT_4bfde0cd[param_2 + 0x22];
  _DAT_4bfde0cd[0x1a] = _DAT_4bfde0cd[0x1a] + _DAT_4bfde0cd[param_2 + 0x22];
  _DAT_4bfde0cd[0x1c] = _DAT_4bfde0cd[0x1c] + _DAT_4bfde0cd[param_1 + 0x29];
  _DAT_4bfde0cd[0x1d] = _DAT_4bfde0cd[0x1d] + _DAT_4bfde0cd[param_1 + 0x29];
  FUN_100516c0();
  if (piVar2 != (int *)0x0) {
    FUN_10002ad8(piVar2);
  }
  FUN_100ef510(piVar2);
  if (piVar3 != (int *)0x0) {
    FUN_10002ad8(piVar3);
  }
  FUN_100ef510(piVar3);
  iVar7 = *(int *)(_DAT_57c407bd + 0x88);
  FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x178),
               auStack_88);
  FUN_1007ec7c(iVar7,auStack_88);
  FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x118));
  return;
}



// Function: FUN_10051d60 at 10051d60
// Size: 4 bytes

void FUN_10051d60(void)

{
  return;
}



// Function: FUN_10051d64 at 10051d64
// Size: 96 bytes

void FUN_10051d64(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      FUN_10051d60(iVar1,iVar2);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0x9c);
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 0x70);
  return;
}



// Function: FUN_10051dc8 at 10051dc8
// Size: 84 bytes

void FUN_10051dc8(short *param_1,short *param_2)

{
  if (*param_1 < 1) {
    *param_1 = 0;
  }
  if (*param_2 < 1) {
    *param_2 = 0;
  }
  if (0x6f < *param_1) {
    *param_1 = 0x6f;
  }
  if (0x9b < *param_2) {
    *param_2 = 0x9b;
  }
  return;
}



// Function: FUN_10051e1c at 10051e1c
// Size: 380 bytes

void FUN_10051e1c(short *param_1,short *param_2,short param_3,short param_4)

{
  short sVar2;
  short sVar3;
  int iVar1;
  short sVar4;
  short sVar5;
  
  sVar2 = FUN_1005f230(1,(int)param_3,0);
  sVar3 = FUN_1005f230(1,3,0xfffffffe);
  *param_1 = *param_1 + sVar3 * sVar2;
  sVar2 = FUN_1005f230(1,(int)param_3,0);
  sVar3 = FUN_1005f230(1,3,0xfffffffe);
  *param_2 = *param_2 + sVar3 * sVar2;
  iVar1 = FUN_1005f230(1,100,0);
  if ((iVar1 < 0x1e) && (param_4 != 0)) {
    sVar2 = *param_1;
    sVar3 = *param_2;
    sVar5 = 0x6f - sVar2;
    sVar4 = 0x9b - sVar3;
    if ((sVar2 <= sVar3) && ((sVar2 <= sVar5 && (sVar2 <= sVar4)))) {
      *param_1 = 0;
    }
    if (((sVar3 <= sVar2) && (sVar3 <= sVar5)) && (sVar3 <= sVar4)) {
      *param_2 = 0;
    }
    if (((sVar5 <= sVar3) && (sVar5 <= sVar2)) && (sVar5 <= sVar4)) {
      *param_1 = 0x6f;
    }
    if (((sVar4 <= sVar3) && (sVar4 <= sVar2)) && (sVar4 <= sVar5)) {
      *param_2 = 0x9b;
    }
  }
  FUN_10051dc8(param_1,param_2);
  return;
}



// Function: FUN_10051f98 at 10051f98
// Size: 492 bytes

undefined4 FUN_10051f98(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar5;
  undefined4 uVar4;
  int local_14c;
  short local_128 [2];
  byte local_124 [256];
  undefined1 auStack_24 [8];
  
  FUN_100b19f4(local_124);
  if (local_124[(short)(local_124[0] - 3)] == 0x2e) {
    local_124[0] = local_124[0] - 4;
  }
  uVar1 = FUN_100b1b90(local_124,0x80ff002c,1);
  FUN_100b1c88(local_124,1,uVar1);
  uVar1 = FUN_100b1b90(local_124,0x80ff0030,1);
  FUN_100b1c88(local_124,1,uVar1);
  uVar1 = FUN_10000420();
  FUN_10003450(0);
  uVar2 = FUN_100b1c84(local_124);
  iVar3 = FUN_10002238(param_1,uVar2);
  if ((iVar3 == 0) && (((param_3 & 1) != 0 || ((param_3 & 4) == 0)))) {
    return 0;
  }
  FUN_10003450(uVar1);
  if ((iVar3 == 0) && ((param_3 & 4) != 0)) {
    uVar5 = FUN_100f1574(1);
    uVar1 = FUN_10000948(0);
    **(undefined1 **)(local_14c + -0x3c) = uVar5;
    FUN_100db26c();
    uVar2 = FUN_100030a8(param_1);
    local_128[0] = (short)uVar2;
    uVar4 = FUN_100b1c84(local_124);
    FUN_10002568(uVar1,param_1,uVar2,uVar4);
    FUN_100db328();
  }
  else {
    FUN_10001758(iVar3,local_128,auStack_24,local_124);
    FUN_100db328();
  }
  uVar1 = FUN_100fb260(0);
  FUN_100fb300(uVar1,param_1,(int)local_128[0]);
  return uVar1;
}



// Function: FUN_10052184 at 10052184
// Size: 344 bytes

undefined4 FUN_10052184(undefined4 param_1,short param_2,ushort param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar5;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_44;
  short local_20 [2];
  undefined1 auStack_1c [4];
  
  uVar1 = FUN_10000420();
  FUN_10003450(0);
  iVar2 = FUN_10001728(param_1,(int)param_2);
  if (iVar2 == 0) {
    if (((param_3 & 1) != 0) || ((param_3 & 4) == 0)) {
      FUN_100db328();
    }
  }
  FUN_10003450(uVar1);
  if ((iVar2 == 0) && ((param_3 & 4) != 0)) {
    uVar5 = FUN_100f1574(1);
    uVar1 = FUN_10000948(0);
    **(undefined1 **)(local_44 + -0x3c) = uVar5;
    FUN_100db26c();
    uVar3 = FUN_100030a8(param_1);
    local_20[0] = (short)uVar3;
    uVar4 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(uVar1,param_1,uVar3,uVar4);
    FUN_100db328();
  }
  else {
    FUN_10001758(iVar2,local_20,auStack_1c,&DAT_7c0803a6);
    FUN_100db328();
  }
  uVar1 = FUN_100fb260(0);
  FUN_100fb300(uVar1,param_1,(int)local_20[0]);
  return uVar1;
}



// Function: FUN_100522dc at 100522dc
// Size: 204 bytes

int * FUN_100522dc(int *param_1,ushort param_2,char param_3)

{
  int *piVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  FUN_100db2f4();
  if (param_3 == '\0') {
    piVar1 = (int *)FUN_100fa860(0);
    FUN_100fa8f8(piVar1,param_1);
  }
  else {
    piVar1 = (int *)FUN_1009cbcc(0,(param_2 & 2) != 0);
    FUN_100fa8f8(piVar1,param_1);
  }
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0),0);
  return piVar1;
}



// Function: FUN_100523a8 at 100523a8
// Size: 232 bytes

void FUN_100523a8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0xb8),param_2,iVar2,
                         *(undefined4 *)(iVar2 + 0xbc));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0xb0),uVar1);
    if ((param_2 & 0xff) != 0) {
      uVar1 = FUN_100fa850();
      iVar2 = FUN_100f5278(param_1,uVar1);
      if (iVar2 != 0) {
        FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0xd8));
        FUN_100db2f4();
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  return;
}



// Function: FUN_10052490 at 10052490
// Size: 68 bytes

void FUN_10052490(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  }
  return;
}



// Function: FUN_100524d4 at 100524d4
// Size: 68 bytes

void FUN_100524d4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  }
  return;
}



// Function: FUN_10052518 at 10052518
// Size: 96 bytes

void FUN_10052518(int *param_1,undefined4 param_2,short param_3)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xb0) + (int)param_1,param_2,(int)param_3);
  }
  return;
}



// Function: FUN_100525a0 at 100525a0
// Size: 44 bytes

int FUN_100525a0(ushort param_1)

{
  return (int)(short)(param_1 * 0x100 + (param_1 >> 8));
}



// Function: FUN_100525cc at 100525cc
// Size: 60 bytes

int FUN_100525cc(uint param_1)

{
  return param_1 * 0x1000000 + (param_1 >> 8 & 0xff) * 0x10000 + (param_1 >> 0x10 & 0xff) * 0x100 +
         (param_1 >> 0x18);
}



// Function: FUN_10052608 at 10052608
// Size: 36 bytes

void FUN_10052608(void)

{
  FUN_10032040();
  return;
}



// Function: FUN_1005262c at 1005262c
// Size: 724 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005262c(short *param_1,int param_2,int param_3,short param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
  undefined4 uVar9;
  int iVar10;
  int local_64;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  
  FUN_10000870(&local_3c,&local_40);
  iVar2 = FUN_10009a98(*(undefined4 *)(param_2 + 0x10));
  bVar1 = false;
  iVar10 = 0;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    iVar10 = FUN_10001290(*(int *)(param_3 + 0x10));
  }
  if (iVar10 != 0) {
    FUN_10001560(iVar10);
    iVar3 = FUN_10001d70(iVar10);
    if (iVar3 == 0) {
      bVar1 = true;
    }
    else {
      FUN_10003468(iVar10);
    }
  }
  if ((*param_1 == 0) || (bVar1)) {
    uVar4 = FUN_10001290(*(undefined4 *)(param_2 + 0x10));
    FUN_100db26c();
    uVar5 = FUN_10001560(uVar4);
    iVar10 = FUN_1000a12c(param_3,(int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 6),1,0,
                          (uVar5 & 0x40) != 0);
    if (iVar10 == 0) {
      FUN_100db26c(0);
    }
    *param_1 = 1;
  }
  uVar4 = FUN_10009a98(*(undefined4 *)(param_3 + 0x10));
  FUN_10000888(*(undefined4 *)(param_3 + 0x10),0);
  local_32 = *(undefined2 *)(param_2 + 4);
  local_34 = *(undefined2 *)(param_2 + 6);
  local_38 = 0;
  local_36 = 0;
  psVar8 = (short *)(param_4 * 6 + *(int *)(local_64 + -0x1d4));
  iVar10 = 0;
  do {
    iVar3 = **(int **)(iVar2 + 0x2a) + iVar10 * 8;
    if (((*(short *)(iVar3 + 10) == *psVar8) && (*(short *)(iVar3 + 0xe) == psVar8[2])) &&
       (*(short *)(iVar3 + 0xc) == psVar8[1])) break;
    iVar10 = (int)(short)((short)iVar10 + 1);
  } while (iVar10 < 0x100);
  if (iVar10 != 0x100) {
    iVar3 = *_DAT_2f1f0000 + iVar10 * 8;
    *(undefined2 *)(iVar3 + 10) = 0xffff;
    *(undefined2 *)(iVar3 + 0xe) = 0xffff;
    *(undefined2 *)(iVar3 + 0xc) = 0xffff;
    uVar9 = *(undefined4 *)(iVar2 + 0x2a);
    *(int **)(iVar2 + 0x2a) = _DAT_2f1f0000;
    uVar6 = FUN_100b0578(&local_38);
    uVar7 = FUN_100b0578(&local_38);
    FUN_100008d0(iVar2,uVar4,uVar7,uVar6,0,0);
    *(undefined4 *)(iVar2 + 0x2a) = uVar9;
    iVar2 = iVar10 * 8 + *_DAT_2f1f0000;
    *(undefined2 *)(iVar2 + 10) = 0;
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0xc) = 0;
  }
  FUN_10000888(local_3c,local_40);
  FUN_10009b00(*(undefined4 *)(param_2 + 0x10));
  FUN_10009b00(*(undefined4 *)(param_3 + 0x10));
  return;
}



// Function: FUN_10052900 at 10052900
// Size: 936 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052900(short param_1)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_5c;
  
  iVar10 = (int)param_1;
  iVar8 = -1;
  iVar7 = -1;
  iVar6 = -1;
  iVar5 = -1;
  iVar12 = 0;
  iVar11 = iVar5;
  iVar13 = iVar6;
  iVar9 = iVar8;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      iVar5 = iVar11;
      iVar6 = iVar13;
      iVar8 = iVar9;
      if ((((*(char *)(_DAT_4bffe775 + iVar12 * 0x20 + 0x82a) == '\x01') &&
           (iVar8 = iVar12, -1 < iVar9)) && (iVar5 = iVar12, iVar8 = iVar9, -1 < iVar11)) &&
         ((iVar5 = iVar11, iVar6 = iVar12, -1 < iVar13 && (iVar6 = iVar13, iVar7 < 0)))) {
        iVar7 = iVar12;
      }
      iVar12 = (int)(short)((short)iVar12 + 1);
      iVar11 = iVar5;
      iVar13 = iVar6;
      iVar9 = iVar8;
    } while (iVar12 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  iVar11 = 0;
  iVar13 = 0;
  do {
    iVar9 = _DAT_817f0000;
    if (_DAT_8382fb2c != 0) {
      iVar9 = *(int *)(&DAT_409e0034 + iVar13 * 4);
    }
    if (iVar9 != 0) {
      sVar1 = (short)iVar11;
      if (iVar10 == iVar8) {
        if ((*(ushort *)(iVar9 + 0xc) & 2) == 0) {
          FUN_10021200(iVar9,1);
          *(ushort *)(iVar9 + 0xc) = *(ushort *)(iVar9 + 0xc) | 2;
          iVar11 = (int)(short)(sVar1 + 1);
          if (*(char *)(iVar9 + 4) == '\x1c') {
            FUN_1003357c(iVar9,1);
          }
        }
      }
      else if (iVar10 == iVar5) {
        if ((*(ushort *)(iVar9 + 0xc) & 4) == 0) {
          FUN_10021200(iVar9,1);
          *(ushort *)(iVar9 + 0xc) = *(ushort *)(iVar9 + 0xc) | 4;
          iVar11 = (int)(short)(sVar1 + 1);
          if (*(char *)(iVar9 + 4) == '\x1c') {
            FUN_1003357c(iVar9,1);
          }
        }
      }
      else if (iVar10 == iVar6) {
        if ((*(ushort *)(iVar9 + 0xc) & 8) == 0) {
          FUN_10021200(iVar9,1);
          *(ushort *)(iVar9 + 0xc) = *(ushort *)(iVar9 + 0xc) | 8;
          iVar11 = (int)(short)(sVar1 + 1);
          if (*(char *)(iVar9 + 4) == '\x1c') {
            FUN_1003357c(iVar9,1);
          }
        }
      }
      else if ((iVar10 == iVar7) && ((*(ushort *)(iVar9 + 0xc) & 0x10) == 0)) {
        FUN_10021200(iVar9,1);
        *(ushort *)(iVar9 + 0xc) = *(ushort *)(iVar9 + 0xc) | 0x10;
        iVar11 = (int)(short)(sVar1 + 1);
        if (*(char *)(iVar9 + 4) == '\x1c') {
          FUN_1003357c(iVar9,1);
        }
      }
      if (_DAT_8382fb2c == 0) break;
    }
    iVar13 = (int)(short)((short)iVar13 + 1);
  } while (iVar13 < 8);
  if (iVar11 == 0) {
    uVar2 = FUN_1005f678(0x38,0);
    FUN_10001dd0(0x60000000,uVar2);
  }
  else if (iVar11 == 1) {
    uVar2 = FUN_1005f678(0x39,0);
    FUN_10001dd0(0x60000000,uVar2);
  }
  else {
    uVar2 = FUN_1005f678(0x39,1);
    FUN_10001dd0(0x60000000,uVar2,iVar11);
  }
  if ((**(short **)(local_5c + -0x1a74) == 0) &&
     (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    uVar2 = FUN_1005f678(0x39,2);
    FUN_1003ced4(0x60000000,uVar2);
  }
  piVar4 = *(int **)(**(int **)(local_5c + -0x554) + 0x88);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x228));
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x38),0,0);
  return;
}



// Function: FUN_10052ca8 at 10052ca8
// Size: 524 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052ca8(void)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined **local_54;
  
  ppuVar5 = &.TVect::OCECToRString;
  if (*(short *)(_DAT_4bffe775 + 0x810) < 1) {
    _DAT_93430000 = 0;
  }
  else {
    iVar10 = 0;
    iVar9 = 0;
    bVar4 = false;
    bVar3 = false;
    do {
      iVar8 = _DAT_4bffe775 + iVar9 * 0x20;
      if (*(short *)(iVar8 + 0x82e) != 0) {
        if (((int)*(short *)(iVar8 + 0x830) & 1 << ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0x3fU))
            == 0) {
          if (((*(uint *)(_DAT_38800000 + *(short *)(iVar8 + 0x814) * 0xe0 +
                         *(short *)(iVar8 + 0x812) * 2) >> 0x16 & 1) == 0) &&
             (iVar6 = FUN_1000a884((int)*(short *)(iVar8 + 0x812),(int)*(short *)(iVar8 + 0x814),
                                   (int)_DAT_3860000c,(int)_DAT_607a0000), iVar8 = _DAT_4bffe775,
             iVar6 < 0x23)) {
            sVar2 = (short)iVar10;
            if (*(char *)(iVar9 * 0x20 + _DAT_4bffe775 + 0x82a) == '\x04') {
              if (!bVar3) {
                *(undefined2 *)(&DAT_2f090000 + iVar10 * 2) = 0xffff;
                uVar7 = *(uint *)((int)ppuVar5[-0x650] + 4);
                *(undefined4 *)(iVar10 * 0x20 + 0x2c1d0000) = *(undefined4 *)ppuVar5[-0x650];
                *(uint *)(iVar10 * 0x20 + 0x2c1d0004) = uVar7 & 0xff000000;
                iVar10 = (int)(short)(sVar2 + 1);
                bVar3 = true;
              }
            }
            else if (*(char *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82a) == '\x05') {
              if (!bVar4) {
                *(undefined2 *)(&DAT_2f090000 + iVar10 * 2) = 0xfffe;
                uVar7 = *(uint *)(ppuVar5[-0x650] + 0xc);
                *(undefined4 *)(iVar10 * 0x20 + 0x2c1d0000) = *(undefined4 *)(ppuVar5[-0x650] + 8);
                *(uint *)(iVar10 * 0x20 + 0x2c1d0004) = uVar7 & 0xffffff00;
                iVar10 = (int)(short)(sVar2 + 1);
                bVar4 = true;
              }
            }
            else {
              iVar6 = _DAT_4bffe775 + iVar9 * 0x20;
              if (*(char *)(iVar6 + 0x82a) == '\x02') {
                cVar1 = *(char *)(iVar6 + 0x82b);
                *(short *)(&DAT_2f090000 + iVar10 * 2) = (short)cVar1;
                FUN_10001e78(iVar10 * 0x20 + 0x2c1d0000,iVar8 + cVar1 * 0x1e + 0xd12);
                iVar10 = (int)(short)(sVar2 + 1);
                ppuVar5 = local_54;
              }
            }
          }
        }
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
    _DAT_93430000 = (undefined2)iVar10;
  }
  return;
}



// Function: FUN_10052eb4 at 10052eb4
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052eb4(void)

{
  undefined4 local_2c;
  
  if (_DAT_7fa83811 == (int *)0x0) {
    _DAT_7fa83811 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x1004,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 800));
  FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x4c8));
  **(undefined2 **)(local_2c + -0x1938) = 1;
  return;
}



// Function: FUN_10052f6c at 10052f6c
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052f6c(undefined4 param_1)

{
  undefined1 auStack_108 [256];
  
  FUN_100b19f4(auStack_108,param_1);
  FUN_10090e0c(_DAT_7fa83811,_DAT_41820028 + 0x6c696e30,auStack_108,1);
  _DAT_41820028 = _DAT_41820028 + 1;
  return;
}



// Function: FUN_10052fdc at 10052fdc
// Size: 304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052fdc(undefined2 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_10052ca8();
  FUN_10092484(6);
  FUN_10052eb4(0xffffffff);
  uVar1 = FUN_1005f678(0x3b,0);
  FUN_10001dd0(0x60000000,uVar1,_DAT_4bffe775 + *(char *)(_DAT_57e31838 + 10) * 0x14 + 0x224);
  FUN_10052f6c(0x60000000);
  FUN_10092b10(0);
  FUN_10075894(_DAT_57c407bd);
  FUN_1003c938(0);
  FUN_1005f144(0x14);
  if (_DAT_7fa83811 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_7fa83811 + 0x738) + (int)_DAT_7fa83811);
  }
  _DAT_7fa83811 = (int *)0x0;
  FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3fa);
  iVar2 = *(int *)(_DAT_57c407bd + 0x88);
  *(undefined2 *)(iVar2 + 0x1de) = param_1;
  FUN_1007c714(iVar2,0x3f8);
  return;
}



// Function: FUN_1005310c at 1005310c
// Size: 408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1005310c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  
  FUN_1003aeb0(2,0,0,_DAT_57e31838);
  iVar3 = 0;
  sVar5 = 0;
  if (0 < _DAT_93430000) {
    do {
      iVar2 = _DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar3 * 2) * 0x1e;
      if (*(char *)(iVar2 + 0xd26) == '\x01') {
        sVar5 = sVar5 + *(char *)(iVar2 + 0xd27);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < _DAT_93430000);
  }
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  sVar4 = 0;
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar3 = sVar1 * 0x16;
      if ((*(short *)(_DAT_60000000 + iVar3) == *_DAT_57e31838) &&
         (*(short *)(_DAT_60000000 + iVar3 + 2) == _DAT_57e31838[1])) {
        sVar4 = sVar4 + 1;
      }
    } while (sVar1 != 0);
  }
  iVar3 = FUN_1005f230(1,100,0);
  return (short)(sVar4 * 3 +
                 ((*(char *)(_DAT_57e31838 + 4) + sVar5) -
                 *(short *)(_DAT_4bffe775 + *(char *)(param_1 + 0x1a) * 2 + 0x1046)) * 5 + 0x5a) <
         iVar3;
}



// Function: FUN_100532a4 at 100532a4
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100532a4(void)

{
  short local_10 [4];
  
  _DAT_817f0000 = FUN_1002122c((int)_DAT_3860000c,(int)_DAT_607a0000,local_10);
  if (_DAT_57e31838 != 0) {
    _DAT_817f0000 = _DAT_57e31838;
  }
  if (0 < local_10[0]) {
    FUN_10021a3c((int)local_10[0],&DAT_80410014,0);
    FUN_10055c64(_DAT_817f0000);
  }
  return;
}



// Function: FUN_10053330 at 10053330
// Size: 408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10053330(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short local_20 [2];
  
  iVar4 = (int)(short)(*(short *)(_DAT_4bffe775 + 0x182) + -1);
  iVar3 = iVar4;
  if (*(short *)(_DAT_4bffe775 + 0x182) != 0) {
    do {
      iVar3 = iVar4;
      if ((short *)(_DAT_60000000 + iVar4 * 0x16) == _DAT_57e31838) break;
      iVar3 = (int)(short)((short)iVar4 + -1);
      bVar1 = iVar4 != 0;
      iVar4 = iVar3;
    } while (bVar1);
  }
  FUN_1003aeb0(3,(int)*_DAT_57e31838,(int)_DAT_57e31838[1],0);
  iVar4 = 0;
  if (0 < _DAT_93430000) {
    do {
      *(short *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar4 * 2) * 0x1e + 0xd2a) =
           (short)iVar3;
      *(undefined1 *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar4 * 2) * 0x1e + 0xd28) = 3;
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < _DAT_93430000);
  }
  _DAT_817f0000 = (short *)FUN_1002122c((int)*_DAT_57e31838,(int)_DAT_57e31838[1],local_20);
  if (_DAT_57e31838 != (short *)0x0) {
    _DAT_817f0000 = _DAT_57e31838;
  }
  FUN_10021a3c((int)local_20[0],&DAT_80410014,0);
  FUN_10055c64(_DAT_817f0000);
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1004e384(3,0,0,0);
  }
  return uVar2;
}



// Function: FUN_100534c8 at 100534c8
// Size: 880 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100534c8(short param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 auStack_160 [16];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x70696374);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xd8) + (int)piVar1,0);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x646f6e65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x660) + (int)piVar1,1,1);
    FUN_10117884((int)*(short *)(*piVar1 + 0xd8) + (int)piVar1,1);
  }
  if (param_1 != 0) {
    piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x74616b65);
    if (piVar1 == (int *)0x0) goto LAB_10053730;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),1,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),1);
  }
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_160);
    local_168 = 0xfffffffc;
    local_164 = 0xfffffffc;
    FUN_100e16b8(auStack_160,&local_168);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x350),auStack_160,0);
    local_150 = 4;
    local_14c = 4;
    local_148 = 4;
    local_144 = 4;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x780),&local_150,0);
    uVar2 = FUN_100b2bb4(0);
    FUN_100b444c(uVar2,0x6f75746c,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3f0),uVar2,0x7f,1);
    iVar3 = FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x7f8));
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x24) = piVar1[6];
    }
  }
LAB_10053730:
  if (_DAT_7fa83811 != (int *)0x0) {
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = _DAT_41820010;
    _DAT_41820010 = auStack_140;
    iVar3 = FUN_10000090(auStack_140);
    if (iVar3 == 0) {
      iVar3 = FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
      FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
      _DAT_7fa83811 = (int *)0x0;
      if (iVar3 == 0x646f6e65) {
        FUN_100532a4();
      }
      else {
        FUN_10053330();
      }
      _DAT_41820010 = local_38;
    }
    else {
      if (_DAT_7fa83811 != (int *)0x0) {
        FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
      }
      _DAT_7fa83811 = (int *)0x0;
      FUN_100db158((int)local_40,local_3c);
    }
  }
  return;
}



// Function: FUN_10053838 at 10053838
// Size: 432 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_10053838(short param_1,short param_2,short param_3)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar5;
  short sVar6;
  undefined2 *puVar4;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_70 [23];
  undefined1 uStack_59;
  undefined2 local_54;
  undefined1 uStack_53;
  short local_30 [2];
  
  FUN_10049628((int)param_1,auStack_70);
  sVar7 = 10;
  bVar2 = false;
  iVar8 = (int)param_2;
  iVar10 = (int)param_3;
  iVar12 = (int)param_3;
  iVar13 = (int)param_2;
  do {
    iVar9 = iVar13;
    iVar11 = iVar12;
    FUN_1002122c(iVar9,iVar11,local_30);
    if ((local_30[0] < 8) &&
       (((*(uint *)(_DAT_38800000 + iVar11 * 0xe0 + iVar9 * 2) >> 0x10 & 0xf) ==
         (int)*(short *)(_DAT_4bffe775 + 0x110) || (local_30[0] == 0)))) {
      bVar2 = true;
      iVar12 = iVar11;
      iVar13 = iVar9;
    }
    else {
      sVar5 = FUN_1005f230(1,3,0xfffffffe);
      sVar1 = (short)iVar9;
      sVar6 = FUN_1005f230(1,3,0xfffffffe);
      sVar3 = (short)iVar11;
      sVar7 = sVar7 + -1;
      iVar9 = iVar8;
      iVar11 = iVar10;
      iVar12 = (int)(short)(sVar3 + sVar6);
      iVar13 = (int)(short)(sVar1 + sVar5);
      if (sVar7 == 0) {
        return (undefined2 *)0x0;
      }
    }
    iVar8 = iVar9;
    iVar10 = iVar11;
  } while (!bVar2);
  puVar4 = (undefined2 *)FUN_10021434();
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = (short)iVar9;
    puVar4[1] = (short)iVar11;
    *(char *)(puVar4 + 2) = (char)param_1;
    *(char *)((int)puVar4 + 5) = (char)*(undefined2 *)(_DAT_4bffe775 + 0x110);
    *(undefined1 *)(puVar4 + 3) = uStack_53;
    *(undefined1 *)((int)puVar4 + 7) = uStack_53;
    *(undefined1 *)(puVar4 + 4) = uStack_59;
    *(undefined1 *)((int)puVar4 + 9) = 0;
    *(undefined1 *)(puVar4 + 5) = 0;
    *(undefined1 *)((int)puVar4 + 0xb) = 0;
    iVar8 = _DAT_38800000 + iVar11 * 0xe0;
    iVar9 = iVar9 * 2;
    *(uint *)(iVar8 + iVar9) = *(uint *)(iVar8 + iVar9) | 0x100000;
    iVar8 = iVar11 * 0xe0 + _DAT_38800000;
    *(uint *)(iVar8 + iVar9) =
         ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0xfU) << 0x10 |
         *(uint *)(iVar8 + iVar9) & 0xfff0ffff;
  }
  return puVar4;
}



// Function: FUN_100539e8 at 100539e8
// Size: 2708 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100539e8(int param_1,short param_2,short param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined **local_6c;
  short local_48 [4];
  
  iVar12 = (int)param_3;
  iVar11 = (int)param_2;
  if ((_DAT_38a0ffff == 0) &&
     (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 1)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar2 = FUN_1002bef8(iVar11,iVar12);
  FUN_1002c85c();
  if (!bVar10) {
    FUN_10030c3c((int)*_DAT_57e31838,(int)_DAT_57e31838[1],0);
    FUN_10052eb4(uVar2);
    FUN_10092b10(0);
  }
  FUN_1003357c(_DAT_57e31838,3);
  ppuVar1 = &.TVect::OCECToRString;
  if (*(char *)(param_1 + 0x18) != '\x05') {
    if (*(char *)(param_1 + 0x1a) == '\0') {
      if (!bVar10) {
        FUN_1005f678(0x33,0);
        FUN_10052f6c();
        FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
        ppuVar1 = local_6c;
      }
    }
    else {
      if (!bVar10) {
        cVar8 = *(char *)(_DAT_4bffe775 + *(char *)(param_1 + 0x1a) * 0x10 + 0xfa6);
        if (('@' < cVar8) && (cVar8 < '[')) {
          cVar8 = cVar8 + ' ';
        }
        if ((((cVar8 == 'a') || (cVar8 == 'e')) || (cVar8 == 'o')) ||
           ((cVar8 == 'i' || (cVar8 == 'u')))) {
          uVar2 = FUN_1005f678(0x34,3);
          FUN_10001dd0(0x60000000,uVar2,_DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224,
                       _DAT_4bffe775 + *(char *)(param_1 + 0x1a) * 0x10 + 0xfa6);
        }
        else {
          uVar2 = FUN_1005f678(0x34,0);
          FUN_10001dd0(0x60000000,uVar2,_DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224,
                       _DAT_4bffe775 + *(char *)(param_1 + 0x1a) * 0x10 + 0xfa6);
        }
        FUN_10052f6c(0x60000000);
        FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
        FUN_10092b10(1);
        ppuVar1 = local_6c;
      }
      iVar5 = FUN_1005310c(param_1);
      if (iVar5 != 0) {
        FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),1,0xfffffffe,0,
                     _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224);
        iVar11 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x5a;
        *(short *)(iVar11 + 0x11a6) = *(short *)(iVar11 + 0x11a6) + 1;
        FUN_1003aeb0(2,0,0,_DAT_57e31838);
        iVar11 = 0;
        if (0 < _DAT_93430000) {
          do {
            if (*(short *)(&DAT_2f090000 + iVar11 * 2) < 8) {
              iVar12 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x5a;
              *(short *)(iVar12 + 0x11aa) = *(short *)(iVar12 + 0x11aa) + 1;
            }
            iVar11 = (int)(short)((short)iVar11 + 1);
          } while (iVar11 < _DAT_93430000);
        }
        FUN_1002e5c0(_DAT_57e31838,(int)*_DAT_57e31838,(int)_DAT_57e31838[1]);
        FUN_100214e8(_DAT_57e31838);
        _DAT_57e31838 = (short *)0x0;
        _DAT_817f0000 = 0;
        FUN_1002b91c();
        if (bVar10) {
          return;
        }
        FUN_1005f678(0x34,1);
        FUN_10052f6c();
        FUN_100534c8(0);
        FUN_1003fe5c();
        FUN_1005cc8c();
        piVar9 = *(int **)ppuVar1[-0x53d];
        if (piVar9 == (int *)0x0) {
          return;
        }
        FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x4d0));
        return;
      }
      if (!bVar10) {
        FUN_1005f678(0x34,2);
        FUN_10052f6c();
        FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
        ppuVar1 = local_6c;
      }
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
  }
  cVar8 = *(char *)(param_1 + 0x18);
  if (cVar8 == '\x02') {
    if (bVar10) {
      *(undefined1 *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd28) = 3;
      *(short *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd2a) =
           (short)((uint)((int)_DAT_57e31838 - *(int *)ppuVar1[-0x150]) / 0x16);
      *(undefined2 *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd2c) = 0;
      *(undefined2 *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd2e) = 0;
    }
    else {
      uVar2 = FUN_1005f678(0x35,0);
      FUN_10001dd0(0x60000000,uVar2,_DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224,
                   _DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd12);
      FUN_10052f6c(0x60000000);
      *(undefined1 *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd28) = 1;
      *(undefined2 *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd2a) = 0;
      *(short *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd2c) = param_2;
      *(short *)(_DAT_4bffe775 + *(char *)(param_1 + 0x19) * 0x1e + 0xd2e) = param_3;
      FUN_100534c8(1);
    }
    FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),6,(int)*(char *)(param_1 + 0x19),0,
                 _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224);
    iVar12 = _DAT_38800000 + iVar12 * 0xe0;
    *(uint *)(iVar12 + iVar11 * 2) = *(uint *)(iVar12 + iVar11 * 2) | 0x400000;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else if (cVar8 == '\x04') {
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar2 = FUN_1005f230(3,500,500);
    }
    else {
      uVar2 = FUN_1005f230(3,1000,1000);
    }
    iVar12 = _DAT_38800000 + iVar12 * 0xe0;
    *(uint *)(iVar12 + iVar11 * 2) = *(uint *)(iVar12 + iVar11 * 2) | 0x400000;
    iVar11 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14;
    *(short *)(iVar11 + 0x186) = (short)uVar2 + *(short *)(iVar11 + 0x186);
    if (!bVar10) {
      uVar3 = FUN_1005f678(0x36,0);
      FUN_10001dd0(0x60000000,uVar3,_DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224,
                   uVar2);
      FUN_10052f6c(0x60000000);
      FUN_100534c8(0);
    }
    FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),6,0x66,0,
                 _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224);
  }
  else if (cVar8 == '\x05') {
    iVar5 = _DAT_38800000 + iVar12 * 0xe0;
    *(uint *)(iVar5 + iVar11 * 2) = *(uint *)(iVar5 + iVar11 * 2) | 0x400000;
    iVar5 = FUN_1005f230(1,2,0);
    if (*(short *)(param_1 + 0x1c) != 0) {
      iVar5 = (int)(short)((short)iVar5 + 2);
    }
    if (iVar5 < 2) {
      uVar2 = FUN_1004a21c((int)*(char *)(param_1 + 0x1a));
      uVar3 = FUN_1005f678(0x37,0);
      FUN_10001dd0(0x60000000,uVar3,uVar2,
                   _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224);
    }
    else {
      uVar2 = FUN_1004a21c((int)*(char *)(param_1 + 0x1a));
      uVar3 = FUN_1005f678(0x37,1);
      FUN_10001dd0(0x60000000,uVar3,iVar5,uVar2,
                   _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224);
    }
    if (!bVar10) {
      FUN_10052f6c(0x60000000);
      FUN_100534c8(0);
    }
    iVar6 = _DAT_38800000 + iVar12 * 0xe0;
    *(uint *)(iVar6 + iVar11 * 2) = *(uint *)(iVar6 + iVar11 * 2) | 0x400000;
    cVar8 = *(char *)(param_1 + 0x1a);
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        psVar4 = (short *)FUN_10053838((int)cVar8,iVar11,iVar12);
        if (psVar4 != (short *)0x0) {
          iVar7 = _DAT_38800000 + psVar4[1] * 0xe0;
          *(uint *)(iVar7 + *psVar4 * 2) = *(uint *)(iVar7 + *psVar4 * 2) | 0x100000;
        }
        iVar6 = (int)(short)((short)iVar6 + 1);
      } while (iVar6 < iVar5);
    }
    FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),6,100,0,
                 _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 5) * 0x14 + 0x224);
    if (_DAT_817f0000 != 0) {
      if ((_DAT_38a0ffff == 0) &&
         (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 1)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) {
        FUN_1002122c(iVar11,iVar12,local_48);
        FUN_10021a3c((int)local_48[0],local_6c[-0xfd],0);
        FUN_10055c64(_DAT_817f0000);
        FUN_1005cc8c();
      }
    }
  }
  return;
}



// Function: FUN_1005447c at 1005447c
// Size: 824 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005447c(void)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r31;
  
  if ((_DAT_817f0000 != (short *)0x0) && ('\0' < *(char *)((int)_DAT_817f0000 + 7))) {
    _DAT_3860000c = *_DAT_817f0000;
    iVar6 = (int)_DAT_3860000c;
    _DAT_607a0000 = _DAT_817f0000[1];
    iVar5 = (int)_DAT_607a0000;
    cVar3 = *(char *)(_DAT_4bffe775 +
                      (short)(ushort)(byte)((uint)*(undefined4 *)
                                                   (_DAT_38800000 + iVar5 * 0xe0 + iVar6 * 2) >>
                                           0x18) + 0x711);
    iVar4 = 0;
    if (cVar3 == '\v') {
      unaff_r31 = FUN_1002bef8(iVar6,iVar5);
      if (unaff_r31 < 0) {
        cVar3 = '\a';
      }
      else {
        iVar4 = _DAT_4bffe775 + unaff_r31 * 0x20 + 0x812;
      }
    }
    if (_DAT_57e31838 == 0) {
      if ((cVar3 == '\v') && (*(char *)(iVar4 + 0x18) == '\x01')) {
        FUN_10052900(unaff_r31);
      }
    }
    else if ((cVar3 == '\v') &&
            ((*(uint *)(_DAT_38800000 + iVar5 * 0xe0 + iVar6 * 2) >> 0x16 & 1) == 0)) {
      if (*(char *)(iVar4 + 0x18) == '\x03') {
        FUN_1003357c(_DAT_57e31838,3);
        FUN_10038c60((int)*(short *)(_DAT_4bffe775 + 0x110),6,0x65,0,
                     _DAT_4bffe775 + *(char *)(_DAT_57e31838 + 10) * 0x14 + 0x224);
        if ((_DAT_38a0ffff == 0) &&
           (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_100126a4(unaff_r31);
          iVar4 = _DAT_38800000 + iVar5 * 0xe0;
          *(uint *)(iVar4 + iVar6 * 2) = *(uint *)(iVar4 + iVar6 * 2) | 0x400000;
        }
        else {
          FUN_10052fdc(unaff_r31);
          iVar4 = _DAT_38800000 + iVar5 * 0xe0;
          *(uint *)(iVar4 + iVar6 * 2) = *(uint *)(iVar4 + iVar6 * 2) | 0x400000;
        }
      }
      else if (*(char *)(iVar4 + 0x18) == '\x01') {
        if ((_DAT_38a0ffff == 0) &&
           (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_10052900(unaff_r31);
        }
        else {
          FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3f9);
        }
      }
      else {
        FUN_100539e8(iVar4,iVar6,iVar5);
      }
      piVar2 = *(int **)(_DAT_57c407bd + 0x88);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x228));
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x38),0,0);
    }
  }
  return;
}



// Function: FUN_100547b4 at 100547b4
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100547b4(undefined4 param_1)

{
  undefined1 auStack_108 [256];
  
  FUN_100b19f4(auStack_108,param_1);
  FUN_10090e0c(_DAT_7fa83811,_DAT_41820028 + 0x6c696e30,auStack_108,1);
  _DAT_41820028 = _DAT_41820028 + 1;
  return;
}



// Function: FUN_10054824 at 10054824
// Size: 260 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054824(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_34;
  
  iVar1 = FUN_1005f230(3,500,500);
  iVar3 = iVar1 + *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186);
  if (30000 < iVar3) {
    iVar3 = 30000;
  }
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) = (short)iVar3;
  FUN_1005f678(0x3c,0);
  FUN_100547b4();
  uVar2 = FUN_1005f678(0x3c,1);
  FUN_10001dd0(0x60000000,uVar2,iVar1);
  FUN_100547b4(0x60000000);
  uVar2 = FUN_10117884(**(int **)(local_34 + -0x193c) +
                       (int)*(short *)(*(int *)**(int **)(local_34 + -0x193c) + 0x7f8));
  FUN_100db26c();
  FUN_10096744(uVar2);
  return;
}



// Function: FUN_10054928 at 10054928
// Size: 48 bytes

void FUN_10054928(void)

{
  FUN_10060608(1,1,0);
  return;
}



// Function: FUN_10054958 at 10054958
// Size: 60 bytes

void FUN_10054958(void)

{
  FUN_10052ca8();
  FUN_1003abfc(&DAT_809f0004,0x811f0018,0,0x1022);
  return;
}



// Function: FUN_10054994 at 10054994
// Size: 352 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054994(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x7f8));
  FUN_100db26c();
  FUN_10096744(uVar1);
  piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x646f6e65);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x660) + (int)piVar2,0,1);
    FUN_10117884((int)*(short *)(*piVar2 + 0xd8) + (int)piVar2,0);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x6f766572);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
    *(undefined1 *)((int)piVar2 + 0x4a) = 1;
  }
  FUN_1005f678(0x3d,0);
  FUN_100547b4();
  FUN_1005f678(0x3d,1);
  FUN_100547b4();
  FUN_1005f678(0x3d,2);
  FUN_100547b4();
  return;
}



// Function: FUN_10054af4 at 10054af4
// Size: 660 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054af4(short param_1,short param_2)

{
  short sVar3;
  undefined4 uVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  undefined2 local_30;
  short local_2e;
  undefined2 local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  sVar3 = FUN_1005f230(1,5,8);
  local_28 = param_1 - sVar3;
  local_26 = FUN_1005f230(1,5,8);
  local_26 = param_2 - local_26;
  local_24 = FUN_1005f230(1,10,0xf);
  local_22 = FUN_1005f230(1,10,0xf);
  if ((short)(param_1 - sVar3) < 0) {
    local_28 = 0;
  }
  if (local_26 < 0) {
    local_26 = 0;
  }
  if (0x6f < (int)local_28 + (int)local_24) {
    local_24 = 0x6f - local_28;
  }
  if (0x9b < (int)local_26 + (int)local_22) {
    local_22 = 0x9b - local_26;
  }
  iVar4 = (int)local_28;
  local_30 = (undefined2)(iVar4 << 1);
  local_2e = local_26 << 1;
  local_2c = (undefined2)((int)local_24 << 1);
  local_2a = local_22 << 1;
  if (iVar4 < iVar4 + local_24) {
    do {
      iVar5 = (int)local_26;
      if (iVar5 < iVar5 + local_22) {
        do {
          FUN_1000931c((int)*(short *)(_DAT_4bffe775 + 0x110),iVar4,iVar5);
          iVar5 = (int)(short)((short)iVar5 + 1);
        } while (iVar5 < (int)local_26 + (int)local_22);
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < (int)local_28 + (int)local_24);
  }
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) {
    FUN_100635e0((int)*(short *)(_DAT_4bffe775 + 0x110));
    FUN_100479f4(0);
    FUN_100226d4(&local_30);
    FUN_1005f144(10);
    FUN_10060608(1,1,0);
    uVar1 = FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x7f8));
    FUN_100db26c();
    FUN_10096744(uVar1);
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x6f766572);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),0);
      *(undefined1 *)((int)piVar2 + 0x4a) = 0;
    }
  }
  return;
}



// Function: FUN_10054d88 at 10054d88
// Size: 1664 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054d88(short param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_cc;
  undefined1 auStack_a8 [128];
  
  if (param_1 < 0) {
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x6974656d);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x660) + (int)piVar2,1,1);
      FUN_10117884((int)*(short *)(*piVar2 + 0xd8) + (int)piVar2,1);
      FUN_10117884((int)*(short *)(*piVar2 + 0x738) + (int)piVar2,
                   **(short **)(local_cc + -0x294) + -1 +
                   (uint)(**(short **)(local_cc + -0x294) != 0) >> 0x1f,1);
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x6d6f6e65);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),1,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x6d617073);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),1,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),
                   *(short *)(_DAT_4bffe775 + 0x124) == 0,1);
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                                 0x646f6e65);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),0,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),0);
    }
  }
  else {
    sVar1 = *(short *)(&DAT_2f090000 + param_1 * 2);
    iVar5 = (int)sVar1;
    if (iVar5 == -1) {
      FUN_1005f678(0x3f,2);
      FUN_100547b4();
      FUN_1005f678(0x3f,1);
      FUN_100547b4();
      iVar7 = 0;
      iVar5 = 0;
      iVar6 = 10000;
      if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
        do {
          iVar4 = _DAT_4bffe775 + iVar7 * 0x20;
          if (((*(short *)(iVar4 + 0x82e) != 0) &&
              (((int)*(short *)(iVar4 + 0x830) &
               1 << ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0x3fU)) == 0)) &&
             ((iVar4 = FUN_1000a884((int)*(short *)(iVar4 + 0x812),(int)*(short *)(iVar4 + 0x814),
                                    (int)_DAT_3860000c,(int)_DAT_607a0000), iVar4 < 0x23 &&
              ((iVar4 = _DAT_4bffe775 + iVar7 * 0x20, *(char *)(iVar4 + 0x82a) == '\x04' &&
               (iVar4 = FUN_1000a884((int)*(short *)(iVar4 + 0x812),(int)*(short *)(iVar4 + 0x814),
                                     (int)_DAT_3860000c,(int)_DAT_607a0000), iVar4 < iVar6)))))) {
            iVar5 = iVar7;
            iVar6 = iVar4;
          }
          iVar7 = (int)(short)((short)iVar7 + 1);
        } while (iVar7 < *(short *)(_DAT_4bffe775 + 0x810));
      }
    }
    else if (iVar5 == -2) {
      FUN_1005f678(0x3f,3);
      FUN_100547b4();
      FUN_1005f678(0x3f,1);
      FUN_100547b4();
      iVar7 = 0;
      iVar5 = 0;
      iVar6 = 10000;
      if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
        do {
          iVar4 = _DAT_4bffe775 + iVar7 * 0x20;
          if ((((*(short *)(iVar4 + 0x82e) != 0) &&
               (((int)*(short *)(iVar4 + 0x830) &
                1 << ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0x3fU)) == 0)) &&
              (iVar4 = FUN_1000a884((int)*(short *)(iVar4 + 0x812),(int)*(short *)(iVar4 + 0x814),
                                    (int)_DAT_3860000c,(int)_DAT_607a0000), iVar4 < 0x23)) &&
             ((iVar4 = _DAT_4bffe775 + iVar7 * 0x20, *(char *)(iVar4 + 0x82a) == '\x05' &&
              (iVar4 = FUN_1000a884((int)*(short *)(iVar4 + 0x812),(int)*(short *)(iVar4 + 0x814),
                                    (int)_DAT_3860000c,(int)_DAT_607a0000), iVar4 < iVar6)))) {
            iVar5 = iVar7;
            iVar6 = iVar4;
          }
          iVar7 = (int)(short)((short)iVar7 + 1);
        } while (iVar7 < *(short *)(_DAT_4bffe775 + 0x810));
      }
    }
    else {
      uVar3 = FUN_1005f678(0x3f,0);
      FUN_10001dd0(auStack_a8,uVar3,_DAT_4bffe775 + iVar5 * 0x1e + 0xd12);
      FUN_100547b4(auStack_a8);
      FUN_1005f678(0x3f,1);
      FUN_100547b4();
      iVar5 = 0;
      if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
        do {
          if (*(char *)(_DAT_4bffe775 + iVar5 * 0x20 + 0x82b) == (char)sVar1) break;
          iVar5 = (int)(short)((short)iVar5 + 1);
        } while (iVar5 < *(short *)(_DAT_4bffe775 + 0x810));
      }
    }
    iVar6 = iVar5 * 0x20;
    *(ushort *)(_DAT_4bffe775 + iVar6 + 0x830) =
         *(ushort *)(_DAT_4bffe775 + iVar6 + 0x830) |
         (ushort)(1 << ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0x3fU));
    FUN_1000931c((int)*(short *)(_DAT_4bffe775 + 0x110),
                 (int)*(short *)(iVar6 + _DAT_4bffe775 + 0x812),
                 (int)*(short *)(iVar6 + _DAT_4bffe775 + 0x814));
    FUN_100635e0((int)*(short *)(_DAT_4bffe775 + 0x110));
    FUN_10039ec8((int)*(short *)(_DAT_4bffe775 + 0x110));
    FUN_10060608(0,1,0);
    uVar3 = FUN_1005f678(0x3f,7);
    FUN_10001dd0(0x60000000,uVar3,iVar6 + _DAT_4bffe775 + 0x816);
    FUN_100547b4(0x60000000);
    FUN_1002c4b8(iVar5,8);
    FUN_1002c66c(iVar5,8);
    FUN_1002c734((int)*_DAT_57e31838,(int)_DAT_57e31838[1],
                 (int)*(short *)(iVar6 + _DAT_4bffe775 + 0x812),
                 (int)*(short *)(iVar6 + _DAT_4bffe775 + 0x814),8);
    FUN_10061980((int)*_DAT_57e31838,(int)_DAT_57e31838[1],1);
    FUN_10061354(0);
    uVar3 = FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x7f8));
    FUN_100db26c();
    FUN_10096744(uVar3);
  }
  return;
}



// Function: FUN_10055408 at 10055408
// Size: 944 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055408(short param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_664;
  undefined1 auStack_640 [256];
  undefined1 auStack_540 [256];
  undefined1 auStack_440 [256];
  undefined1 auStack_340 [256];
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if (_DAT_7fa83811 == (int *)0x0) {
    _DAT_7fa83811 =
         (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x1018,
                             *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
  }
  FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 800));
  uVar1 = FUN_1005f678(0x40,0);
  FUN_100b19f4(auStack_240,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747231,auStack_240,1);
  uVar1 = FUN_1005f678(0x40,1);
  FUN_100b19f4(auStack_340,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747232,auStack_340,1);
  uVar1 = FUN_1005f678(0x40,2);
  FUN_100b19f4(auStack_440,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747233,auStack_440,1);
  uVar1 = FUN_1005f678(0x40,3);
  FUN_100b19f4(auStack_540,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747234,auStack_540,1);
  uVar1 = FUN_1005f678(0x40,4);
  FUN_100b19f4(auStack_640,uVar1);
  FUN_10090e0c(_DAT_7fa83811,0x73747235,auStack_640,1);
  piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x6974656d);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x738) + (int)piVar2,
                 **(short **)(local_664 + -0x294) + -1 +
                 (uint)(**(short **)(local_664 + -0x294) != 0) >> 0x1f,1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x6d617073);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x738) + (int)piVar2,
                 *(short *)(**(int **)(local_664 + -0x544) + 0x124) == 0,1);
  }
  FUN_100614ac(0,(int)param_1);
  FUN_10061354(0);
  **(undefined2 **)(local_664 + -0x1938) = 1;
  if (_DAT_7fa83811 != (int *)0x0) {
    FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x810));
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = _DAT_41820010;
    _DAT_41820010 = auStack_140;
    iVar3 = FUN_10000090(auStack_140);
    if (iVar3 == 0) {
      FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x738));
      _DAT_7fa83811 = (int *)0x0;
      FUN_10054928();
      _DAT_41820010 = local_38;
    }
    else {
      if (_DAT_7fa83811 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*_DAT_7fa83811 + 0x738) + (int)_DAT_7fa83811);
      }
      _DAT_7fa83811 = (int *)0x0;
      FUN_100db158((int)local_40,local_3c);
    }
  }
  FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3fa);
  return;
}



// Function: FUN_100557b8 at 100557b8
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100557b8(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  sVar2 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar3 = sVar2 * 0x16;
      iVar5 = _DAT_60000000 + iVar3;
      if (*(char *)(iVar5 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) {
        if (((-(int)*(short *)(iVar5 + 0xc) - 1U & 1) != 0) &&
           (*(char *)(iVar5 + 6) <= *(char *)(iVar5 + 7))) {
          iVar4 = (int)*(short *)(_DAT_60000000 + iVar3);
          iVar3 = (int)*(short *)(iVar5 + 2);
          cVar1 = *(char *)((*(uint *)(_DAT_38800000 + iVar3 * 0xe0 + iVar4 * 2) >> 0x18) +
                            _DAT_4bffe775 + 0x711);
          if ((cVar1 != '\a') && (cVar1 != '\x04')) {
            if ((((cVar1 != '\x05') && (cVar1 != '\x01')) && (cVar1 != '\b')) && (cVar1 != '\t')) {
              if ((*(uint *)(_DAT_807f0004 + iVar3 * 0x70 + iVar4) >> 0x18 & 0x1f) == 0)
              goto LAB_100558dc;
            }
          }
          iVar3 = _DAT_38800000 + iVar3 * 0xe0;
          *(uint *)(iVar3 + iVar4 * 2) = *(uint *)(iVar3 + iVar4 * 2) | 0x200000;
        }
      }
LAB_100558dc:
    } while (sVar2 != 0);
  }
  return;
}



// Function: FUN_100558f8 at 100558f8
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100558f8(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar2 = sVar1 * 0x16;
      iVar3 = _DAT_60000000 + iVar2;
      if (*(char *)(iVar3 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) {
        *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xffbf;
        iVar2 = _DAT_60000000 + iVar2;
        *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xfdff;
      }
    } while (sVar1 != 0);
  }
  iVar2 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14;
  _DAT_63a50000 = *(undefined2 *)(iVar2 + 0x18a);
  _DAT_807f0028 = *(undefined2 *)(iVar2 + 0x18c);
  return 1;
}



// Function: FUN_100559ac at 100559ac
// Size: 500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100559ac(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  iVar6 = -1;
  iVar7 = -1;
  sVar9 = 10000;
  sVar8 = 10000;
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar10 = (int)sVar1;
      iVar5 = iVar10 * 0x16;
      if ((*(char *)(_DAT_60000000 + iVar5 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) &&
         (sVar4 = *(short *)(iVar5 + _DAT_60000000), -1 < sVar4)) {
        uVar2 = *(ushort *)(_DAT_60000000 + iVar5 + 0xc);
        if (((uVar2 & 1) != 0) && ((uVar2 & 0x40) == 0)) {
          sVar3 = FUN_10003768((int)*(short *)(iVar5 + _DAT_60000000 + 2) - (int)_DAT_807f0028);
          sVar4 = FUN_10003768((int)sVar4 - (int)_DAT_63a50000);
          sVar4 = sVar4 + sVar3;
          if (sVar4 == 0) {
            sVar4 = 9000;
          }
          if ((*(ushort *)(_DAT_60000000 + iVar10 * 0x16 + 0xc) & 0x200) == 0) {
            if (sVar4 < sVar9) {
              iVar6 = iVar10;
              sVar9 = sVar4;
            }
          }
          else if (sVar4 < sVar8) {
            iVar7 = iVar10;
            sVar8 = sVar4;
          }
        }
      }
    } while (iVar10 != 0);
  }
  if (iVar6 == -1) {
    if (iVar7 == -1) {
      iVar6 = 0;
    }
    else {
      _DAT_63a50000 = *(short *)(_DAT_60000000 + iVar7 * 0x16);
      _DAT_807f0028 = *(short *)(_DAT_60000000 + iVar7 * 0x16 + 2);
      sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
      if (sVar1 != 0) {
        do {
          sVar1 = sVar1 + -1;
          iVar6 = _DAT_60000000 + sVar1 * 0x16;
          if (*(char *)(iVar6 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) {
            *(ushort *)(iVar6 + 0xc) = *(ushort *)(iVar6 + 0xc) & 0xfdff;
          }
        } while (sVar1 != 0);
      }
      iVar6 = _DAT_60000000 + iVar7 * 0x16;
    }
  }
  else {
    _DAT_63a50000 = *(short *)(_DAT_60000000 + iVar6 * 0x16);
    iVar6 = _DAT_60000000 + iVar6 * 0x16;
    _DAT_807f0028 = *(short *)(iVar6 + 2);
  }
  return iVar6;
}



// Function: FUN_10055ba0 at 10055ba0
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10055ba0(short param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  _DAT_8382fb2c = param_1;
  if (_DAT_409e0038 == 0) {
    _DAT_8382fb2c = 0;
  }
  _DAT_57e31838 = 0;
  if (param_1 != 0) {
    iVar3 = 7;
    do {
      iVar2 = *(int *)(&DAT_409e0034 + iVar3 * 4);
      if (iVar2 != 0) {
        *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) | 1;
        if (*(char *)(*(int *)(&DAT_409e0034 + iVar3 * 4) + 4) == '\x1c') {
          _DAT_57e31838 = *(int *)(&DAT_409e0034 + iVar3 * 4);
        }
      }
      bVar1 = iVar3 != 0;
      iVar3 = (int)(short)((short)iVar3 + -1);
    } while (bVar1);
    return 1;
  }
  *(ushort *)(_DAT_817f0000 + 0xc) = *(ushort *)(_DAT_817f0000 + 0xc) | 1;
  if (*(char *)(_DAT_817f0000 + 4) == '\x1c') {
    _DAT_57e31838 = _DAT_817f0000;
  }
  return 1;
}



// Function: FUN_10055c64 at 10055c64
// Size: 716 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10055c64(short *param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar10;
  int iVar9;
  int iVar11;
  int iVar12;
  char cVar13;
  
  iVar8 = (int)*(short *)(_DAT_4bffe775 + 0x110);
  iVar12 = 0;
  cVar13 = -1;
  if (iVar8 == 0xf) {
    iVar8 = 8;
  }
  iVar8 = _DAT_4bffe775 + iVar8 * 0x1d;
  if ((_DAT_38a0ffff == 0) &&
     (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) != 1)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((!bVar10) && (iVar6 = FUN_10021f6c((int)*param_1,(int)param_1[1]), iVar6 != 0)) {
    return 0;
  }
  cVar1 = *(char *)((int)param_1 + 0x11);
  sVar3 = *param_1;
  sVar4 = param_1[1];
  iVar6 = 7;
  do {
    *(undefined4 *)(&DAT_409e0034 + iVar6 * 4) = 0;
    bVar10 = iVar6 != 0;
    iVar6 = (int)(short)((short)iVar6 + -1);
  } while (bVar10);
  sVar5 = *(short *)(_DAT_4bffe775 + 0x182);
  iVar6 = 0;
  if (sVar5 != 0) {
    do {
      sVar5 = sVar5 + -1;
      iVar9 = (int)sVar5;
      iVar7 = _DAT_60000000 + iVar9 * 0x16;
      iVar11 = iVar6;
      if ((((*(short *)(_DAT_60000000 + iVar9 * 0x16) == sVar3) && (*(short *)(iVar7 + 2) == sVar4))
          && (*(char *)(iVar7 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110))) &&
         (((*(char *)(iVar7 + 0x11) == cVar1 && (cVar1 != '\0')) ||
          (param_1 == (short *)(_DAT_60000000 + iVar9 * 0x16))))) {
        iVar11 = _DAT_60000000 + iVar9 * 0x16;
        *(ushort *)(iVar11 + 0xc) = *(ushort *)(iVar11 + 0xc) | 0x200;
        iVar11 = (int)(short)((short)iVar6 + 1);
        iVar7 = iVar9 * 0x16 + _DAT_60000000;
        *(int *)(&DAT_409e0034 + iVar6 * 4) = iVar7;
        cVar2 = *(char *)(iVar8 + 0x60c + (int)*(char *)(iVar7 + 4));
        if (cVar13 < cVar2) {
          iVar12 = iVar9;
          cVar13 = cVar2;
        }
      }
      iVar6 = iVar11;
    } while (iVar9 != 0);
  }
  _DAT_817f0000 = (short *)(_DAT_60000000 + iVar12 * 0x16);
  FUN_10041de8();
  if (_DAT_8382fb2c != 0) {
    FUN_10021a3c((int)_DAT_7f8be040,&DAT_409e0034,0);
  }
  FUN_1005c7b0();
  *(undefined1 *)(_DAT_60690000 + 0x84) = 0;
  FUN_10055ba0(1);
  if ((*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) ||
     ((*(short *)(_DAT_4bffe775 + 0x15a) != 0 &&
      ((_DAT_80010050 == 0 ||
       (iVar12 = FUN_10007e10((int)*_DAT_817f0000,(int)_DAT_817f0000[1],1),
       *(char *)(iVar12 + _FUN_10115cc4) != '\x0e')))))) {
    FUN_100836dc(_DAT_60690000,(int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
  }
  return 1;
}



// Function: FUN_10055f30 at 10055f30
// Size: 620 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10055f30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _FUN_10115d6c;
  FUN_1002c85c();
  iVar3 = _DAT_60690000;
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    iVar2 = FUN_10007e10((int)*(short *)(_DAT_60690000 + 0x8a),(int)*(short *)(_DAT_60690000 + 0x88)
                         ,1);
    if ((*(char *)(iVar2 + _FUN_10115cc4) == '\0') != true) goto LAB_10055fb0;
  }
  FUN_10008284((int)*(short *)(iVar3 + 0x8a),(int)*(short *)(iVar3 + 0x88));
LAB_10055fb0:
  iVar3 = FUN_100559ac();
  if (iVar3 == 0) {
    _DAT_817f0000 = (short *)0x0;
    FUN_10007f78();
    FUN_10093928();
  }
  else {
    FUN_10055c64(iVar3);
    FUN_10093984();
  }
  FUN_1005cc8c();
  FUN_1003dc28();
  if ((*(short *)(_DAT_4bffe775 + 0x12e) != 0) && (_DAT_817f0000 != (short *)0x0)) {
    if ((*(uint *)(_DAT_4bffe775 + 0x134) >> 0x1b & 1) == 0) {
      *(uint *)(_DAT_4bffe775 + 0x134) = *(uint *)(_DAT_4bffe775 + 0x134) | 0x8000000;
      FUN_1005f6b0(0x19,3);
      FUN_10040040();
    }
    if ((*(uint *)(_DAT_4bffe775 + 0x134) >> 0x1c & 1) == 0) {
      iVar3 = 0;
      do {
        iVar2 = FUN_1002be50((int)(short)(*_DAT_817f0000 + *(short *)(iVar3 * 2 + iVar1)),
                             (int)(short)(_DAT_817f0000[1] + *(short *)(&DAT_4e800020 + iVar3 * 2)))
        ;
        if (-1 < iVar2) {
          if ((int)*(char *)(_DAT_4bffe775 + iVar2 * 0x42 + 0x1619) !=
              (int)*(short *)(_DAT_4bffe775 + 0x110)) {
            *(uint *)(_DAT_4bffe775 + 0x134) = *(uint *)(_DAT_4bffe775 + 0x134) | 0x10000000;
            FUN_1005f6b0(0x19,4);
            FUN_10040040();
            break;
          }
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 8);
    }
    if (-1 < (int)*(uint *)(_DAT_4bffe775 + 0x134)) {
      if ((*(char *)((*(uint *)(_DAT_38800000 + _DAT_817f0000[1] * 0xe0 + *_DAT_817f0000 * 2) >>
                     0x18) + _DAT_4bffe775 + 0x711) == '\v') &&
         (*(char *)(_DAT_817f0000 + 2) == '\x1c')) {
        *(uint *)(_DAT_4bffe775 + 0x134) = *(uint *)(_DAT_4bffe775 + 0x134) | 0x80000000;
        FUN_1005f6b0(0x19,5);
        FUN_10040040();
      }
    }
  }
  return 1;
}



// Function: FUN_1005619c at 1005619c
// Size: 324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005619c(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  iVar6 = -1;
  sVar7 = 10000;
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar8 = (int)sVar1;
      iVar5 = iVar8 * 0x16;
      if ((*(char *)(_DAT_60000000 + iVar5 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) &&
         (sVar4 = *(short *)(iVar5 + _DAT_60000000), -1 < sVar4)) {
        uVar2 = *(ushort *)(_DAT_60000000 + iVar5 + 0xc);
        if (((uVar2 & 1) != 0) && ((uVar2 & 0x40) == 0)) {
          sVar3 = FUN_10003768((int)*(short *)(iVar5 + _DAT_60000000 + 2) - (int)_DAT_807f0028);
          sVar4 = FUN_10003768((int)sVar4 - (int)_DAT_63a50000);
          sVar4 = sVar4 + sVar3;
          if (sVar4 == 0) {
            sVar4 = 9000;
          }
          if (((*(ushort *)(_DAT_60000000 + iVar8 * 0x16 + 0xc) & 0x200) == 0) && (sVar4 < sVar7)) {
            iVar6 = iVar8;
            sVar7 = sVar4;
          }
        }
      }
    } while (iVar8 != 0);
  }
  if (iVar6 == -1) {
    iVar6 = 0;
  }
  else {
    _DAT_63a50000 = *(short *)(_DAT_60000000 + iVar6 * 0x16);
    iVar6 = _DAT_60000000 + iVar6 * 0x16;
    _DAT_807f0028 = *(short *)(iVar6 + 2);
  }
  return iVar6;
}



// Function: FUN_100562e0 at 100562e0
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100562e0(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_817f0000 == 0) {
    uVar2 = 0;
  }
  else if (_DAT_8382fb2c == 0) {
    *(ushort *)(_DAT_817f0000 + 0xc) = *(ushort *)(_DAT_817f0000 + 0xc) | 0x40;
    uVar2 = 1;
  }
  else {
    iVar4 = 7;
    do {
      iVar3 = *(int *)(&DAT_409e0034 + iVar4 * 4);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) | 0x40;
      }
      bVar1 = iVar4 != 0;
      iVar4 = (int)(short)((short)iVar4 + -1);
    } while (bVar1);
    _DAT_38a00001 = 0;
    FUN_10007f78();
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_1005638c at 1005638c
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005638c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_60690000;
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    iVar2 = FUN_10007e10((int)*(short *)(_DAT_60690000 + 0x8a),(int)*(short *)(_DAT_60690000 + 0x88)
                         ,1);
    if ((*(char *)(iVar2 + _FUN_10115cc4) == '\0') != true) goto LAB_100563f8;
  }
  FUN_10008284((int)*(short *)(iVar1 + 0x8a),(int)*(short *)(iVar1 + 0x88));
LAB_100563f8:
  FUN_100562e0();
  FUN_10055f30();
  return;
}



// Function: FUN_1005641c at 1005641c
// Size: 280 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1005641c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = _DAT_60690000;
  if (_DAT_817f0000 != 0) {
    if ((*(short *)(_DAT_4bffe775 + 0x124) == 0) ||
       (iVar2 = FUN_10007e10((int)*(short *)(_DAT_60690000 + 0x8a),
                             (int)*(short *)(_DAT_60690000 + 0x88),1),
       (*(char *)(iVar2 + _FUN_10115cc4) == '\0') == true)) {
      FUN_10008284((int)*(short *)(iVar4 + 0x8a),(int)*(short *)(iVar4 + 0x88));
    }
    if (_DAT_8382fb2c == 0) {
      *(ushort *)(_DAT_817f0000 + 0xc) = *(ushort *)(_DAT_817f0000 + 0xc) & 0xfffe;
      *(undefined1 *)(_DAT_817f0000 + 0x11) = 1;
    }
    else {
      iVar4 = 7;
      do {
        iVar2 = *(int *)(&DAT_409e0034 + iVar4 * 4);
        if (iVar2 != 0) {
          *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xfffe;
          *(undefined1 *)(*(int *)(&DAT_409e0034 + iVar4 * 4) + 0x11) = 1;
        }
        bVar1 = iVar4 != 0;
        iVar4 = (int)(short)((short)iVar4 + -1);
      } while (bVar1);
    }
    uVar3 = FUN_10055f30();
    return uVar3;
  }
  return 0;
}



// Function: FUN_10056534 at 10056534
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10056534(void)

{
  short sVar1;
  ushort uVar2;
  short sVar4;
  short sVar5;
  undefined4 uVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  iVar8 = -1;
  iVar7 = -1;
  sVar10 = 10000;
  sVar9 = 10000;
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar11 = (int)sVar1;
      iVar6 = iVar11 * 0x16;
      if ((*(char *)(_DAT_60000000 + iVar6 + 5) == (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) &&
         (sVar5 = *(short *)(iVar6 + _DAT_60000000), -1 < sVar5)) {
        uVar2 = *(ushort *)(_DAT_60000000 + iVar6 + 0xc);
        if (((uVar2 & 1) != 0) && ((uVar2 & 0x40) == 0)) {
          sVar4 = FUN_10003768((int)*(short *)(iVar6 + _DAT_60000000 + 2) - (int)_DAT_807f0028);
          sVar5 = FUN_10003768((int)sVar5 - (int)_DAT_63a50000);
          sVar5 = sVar5 + sVar4;
          if (sVar5 == 0) {
            sVar5 = 9000;
          }
          if ((*(ushort *)(_DAT_60000000 + iVar11 * 0x16 + 0xc) & 0x200) == 0) {
            if (sVar5 < sVar10) {
              iVar8 = iVar11;
              sVar10 = sVar5;
            }
          }
          else if (sVar5 < sVar9) {
            iVar7 = iVar11;
            sVar9 = sVar5;
          }
        }
      }
    } while (iVar11 != 0);
  }
  if (iVar8 == -1) {
    if (iVar7 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_1005668c at 1005668c
// Size: 3240 bytes

void FUN_1005668c(int *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar3;
  undefined1 uVar4;
  uint uVar2;
  short sVar6;
  uint uVar5;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  
  FUN_100db26c(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,0xa0);
  iVar7 = 0;
  do {
    iVar8 = param_2 + iVar7 * 2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    iVar1 = FUN_100525a0();
    *(short *)(iVar8 + 0xa0) = (short)iVar1;
    if (iVar1 == 0) {
      *(undefined2 *)(iVar8 + 0xa0) = 0xff;
    }
    else {
      iVar1 = param_2 + iVar7 * 2;
      if (*(short *)(iVar1 + 0xa0) == 0xf) {
        *(undefined2 *)(iVar1 + 0xa0) = 0;
      }
    }
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    iVar8 = param_2 + iVar7 * 2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    iVar1 = FUN_100525a0();
    *(short *)(iVar8 + 0xb0) = (short)iVar1;
    if (iVar1 == 0) {
      *(undefined2 *)(iVar8 + 0xb0) = 0xff;
    }
    else {
      iVar1 = param_2 + iVar7 * 2;
      if (*(short *)(iVar1 + 0xb0) == 0xf) {
        *(undefined2 *)(iVar1 + 0xb0) = 0;
      }
    }
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0xc0) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0xd0) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0xe0) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0xf0) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 0x100,0x10);
  puVar9 = (undefined2 *)(param_2 + 0x110);
  sVar6 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *puVar9 = uVar3;
    sVar6 = sVar6 + 1;
    puVar9 = puVar9 + 1;
  } while (sVar6 < 0x12);
  uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
  *(undefined1 *)(param_2 + 0x134) = uVar4;
  puVar9 = (undefined2 *)(param_2 + 0x136);
  sVar6 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *puVar9 = uVar3;
    sVar6 = sVar6 + 1;
    puVar9 = puVar9 + 1;
  } while (sVar6 < 0x27);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    iVar1 = param_2 + iVar7 * 0x14;
    *(undefined2 *)(iVar1 + 0x184) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x186) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x188) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x18a) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x18c) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x18e) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 400) = uVar3;
    uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
    *(undefined1 *)(iVar1 + 0x192) = uVar4;
    uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
    *(undefined1 *)(iVar1 + 0x193) = uVar4;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x194) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x196) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 0x224,800);
  puVar9 = (undefined2 *)(param_2 + 0x544);
  sVar6 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *puVar9 = uVar3;
    sVar6 = sVar6 + 1;
    puVar9 = puVar9 + 1;
  } while (sVar6 < 0x50);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 0x5e4,0x22c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  uVar3 = FUN_100525a0();
  *(undefined2 *)(param_2 + 0x810) = uVar3;
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    iVar1 = param_2 + iVar7 * 0x20;
    *(undefined2 *)(iVar1 + 0x812) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x814) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar1 + 0x816,0x17);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x82e) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x830) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 0x28);
  iVar7 = 0;
  do {
    iVar1 = param_2 + iVar7 * 0x1e;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar1 + 0xd12,0x17);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0xd2a) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0xd2c) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0xd2e) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 0x16);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 0xfa6,0xa0);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0x1046) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 10);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0x105a) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 100);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0x1122) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(param_2 + iVar7 * 2 + 0x1132) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    iVar1 = param_2 + iVar7 * 0xc;
    *(undefined2 *)(iVar1 + 0x1142) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x1144) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x1146) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x1148) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x114a) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x114c) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    iVar1 = 0;
    do {
      iVar8 = 0;
      do {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
        uVar3 = FUN_100525a0();
        *(undefined2 *)(param_2 + iVar7 * 0x50 + iVar1 * 10 + iVar8 * 2 + 0x11a2) = uVar3;
        iVar8 = (int)(short)((short)iVar8 + 1);
      } while (iVar8 < 5);
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 8);
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar7 = 0;
  do {
    iVar1 = param_2 + iVar7 * 0x2c;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar1 + 0x1422,3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x1426) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x1428) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x142a) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar1 + 0x142c) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar1 + 0x142e,0x20);
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 0x1582,0x40);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  uVar3 = FUN_100525a0();
  *(undefined2 *)(param_2 + 0x1602) = uVar3;
  iVar7 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    iVar8 = param_2 + iVar7 * 0x42;
    *(undefined2 *)(iVar8 + 0x1604) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x1606) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar8 + 0x1608,0x26);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x162e) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar8 + 0x1630,5);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x1636) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x1638) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x163a) = uVar3;
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
    uVar5 = *(uint *)(iVar8 + 0x163c);
    *(uint *)(iVar8 + 0x163c) = iVar1 << 0x18 | uVar5 & 0xffffff;
    uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
    *(uint *)(iVar8 + 0x163c) = (uVar2 & 0xff) << 0x10 | iVar1 << 0x18 | uVar5 & 0xffff;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x163e) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x1640) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x1642) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    uVar3 = FUN_100525a0();
    *(undefined2 *)(iVar8 + 0x1644) = uVar3;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 100);
  return;
}



// Function: FUN_10057334 at 10057334
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057334(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8));
  uVar1 = FUN_10052184(0x4d415020,10000,1);
  if (_DAT_38800000 == 0) {
    _DAT_38800000 = FUN_100f1640(0x8880);
  }
  FUN_10052490(uVar1,_DAT_38800000,0x8880);
  FUN_100523a8(uVar1,1);
  uVar1 = FUN_10052184(0x52442020,10000,1);
  if (_DAT_807f0004 == 0) {
    _DAT_807f0004 = FUN_100f1640(0x4440);
  }
  FUN_10052490(uVar1,_DAT_807f0004,0x4440);
  FUN_100523a8(uVar1,1);
  return;
}



// Function: FUN_10057448 at 10057448
// Size: 936 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10057448(short param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_1f4;
  undefined1 auStack_1d0 [72];
  undefined1 auStack_188 [256];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [72];
  
  if (param_1 != 0) {
    uVar1 = FUN_1005f678(0x88,6);
    uVar2 = FUN_1005f678(0x88,5);
    uVar3 = FUN_1005f678(0x88,4);
    uVar4 = FUN_1005f678(0x88,3);
    uVar5 = FUN_1005f678(0x88,2);
    uVar6 = FUN_1005f678(0x88,1);
    uVar7 = FUN_1005f678(0x88,0);
    FUN_10040408(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
    local_88 = 0xca;
    local_84 = 0x3c;
    FUN_100513b4(_DAT_80410014,&local_88,0x3f3);
    FUN_100514d8(_DAT_80410014,0);
  }
  piVar8 = (int *)FUN_100fb260(0);
  FUN_100fb300(piVar8,0x5343454e,10000);
  FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0xe0),0x4bee8f55,0x54);
  FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x90));
  uVar1 = FUN_10052184(0x53434e20,10000,1);
  if (_DAT_4bffe775 == 0) {
    _DAT_4bffe775 = FUN_100f1640(0x2fcc);
  }
  FUN_1005668c(uVar1,_DAT_4bffe775);
  FUN_100523a8(uVar1,1);
  iVar12 = *(int *)(_DAT_57c407bd + 0x88);
  FUN_100db26c(iVar12);
  piVar8 = *(int **)(iVar12 + 0x148);
  FUN_100db26c(piVar8);
  FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x178),auStack_80);
  FUN_10000318((int)**(short **)(local_1f4 + -0xb4));
  FUN_10001dd0(&DAT_2c9f0000,*(undefined4 *)(local_1f4 + -0x1928),
               (int)*(short *)(_DAT_4bffe775 + 0x162));
  FUN_100b19f4(auStack_188,&DAT_2c9f0000);
  FUN_10027a58(1,auStack_188,0,auStack_1d0);
  FUN_1007ed14(iVar12,auStack_1d0);
  FUN_10117884((int)*(int **)(iVar12 + 0x14c) + (int)*(short *)(**(int **)(iVar12 + 0x14c) + 0x118))
  ;
  if (param_1 != 0) {
    FUN_100514d8(_DAT_80410014,0x14);
  }
  if (**(short **)(local_1f4 + -0x16a4) != 0) {
    *(undefined2 *)(_DAT_4bffe775 + 0x162) = **(undefined2 **)(local_1f4 + -0x143c);
  }
  FUN_10045170();
  FUN_10045ac8();
  FUN_10057334();
  if (param_1 != 0) {
    FUN_100514d8(_DAT_80410014,0x3c);
  }
  FUN_1001d15c();
  if (param_1 != 0) {
    FUN_100514d8(_DAT_80410014,100);
    FUN_1005f144(10);
  }
  FUN_1002869c();
  iVar12 = 0;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar12 * 2 + 0x138) == 0) {
      iVar10 = *(int *)(local_1f4 + -0x1928);
      puVar11 = (undefined4 *)(_DAT_4bffe775 + iVar12 * 0x14);
      uVar1 = *(undefined4 *)(iVar10 + 0x10);
      uVar9 = *(uint *)(iVar10 + 0x14);
      *puVar11 = *(undefined4 *)(iVar10 + 0xc);
      puVar11[1] = uVar1;
      puVar11[2] = uVar9 & 0xff000000;
      *(undefined2 *)(iVar12 * 2 + _DAT_4bffe775 + 0xc0) = 3;
    }
    iVar12 = (int)(short)((short)iVar12 + 1);
  } while (iVar12 < 8);
  return 1;
}



// Function: FUN_100577f0 at 100577f0
// Size: 520 bytes

void FUN_100577f0(void)

{
  char cVar9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  int *piVar10;
  int iVar11;
  int local_64;
  char local_40 [6];
  undefined1 local_3a;
  short local_38 [4];
  
  iVar11 = 0;
  do {
    cVar9 = FUN_1005f230(1,0x5a,0);
    local_40[iVar11] = cVar9 + ' ';
    iVar11 = (int)(short)((short)iVar11 + 1);
  } while (iVar11 < 6);
  local_3a = 0;
  uVar1 = FUN_1005f678(0x89,6);
  uVar2 = FUN_1005f678(0x89,5);
  uVar3 = FUN_1005f678(0x89,4);
  uVar4 = FUN_1005f678(0x89,3);
  uVar5 = FUN_1005f678(0x89,2);
  uVar6 = FUN_1005f678(0x89,1);
  uVar7 = FUN_1005f678(0x89,0);
  FUN_10040408(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  iVar11 = 0;
  do {
    if (*(short *)(&DAT_63830000 + iVar11 * 2) == 7) {
      sVar8 = FUN_1005f230(1,7,0xffffffff);
    }
    else {
      sVar8 = *(short *)(&DAT_63830000 + iVar11 * 2);
    }
    local_38[iVar11] = sVar8;
    iVar11 = (int)(short)((short)iVar11 + 1);
  } while (iVar11 < 4);
  FUN_100517f8((int)local_38[0],(int)local_38[1],(int)local_38[2],(int)local_38[3]);
  FUN_10001e78(0x4bee8f91,0x7c03e800);
  FUN_10001e78(0x4bee8f69,0x7c03e800);
  FUN_10001e78(0x4bee8f99,local_40);
  FUN_10045170();
  FUN_10045ac8();
  piVar10 = *(int **)(*(int *)(**(int **)(local_64 + -0x554) + 0x88) + 0x148);
  FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
  FUN_10057448(0);
  *(undefined2 *)(**(int **)(local_64 + -0x544) + 0x162) = **(undefined2 **)(local_64 + -0x143c);
  return;
}



// Function: FUN_100579f8 at 100579f8
// Size: 1124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100579f8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int local_9c;
  undefined1 auStack_78 [80];
  
  piVar2 = (int *)FUN_100f56e4(0x20);
  if (piVar2 != (int *)0x0) {
    FUN_100d8824(piVar2);
    *piVar2 = (int)&DAT_809f0004;
  }
  _DAT_60000000 = piVar2;
  FUN_100d88b4(piVar2,0,0x11c);
  FUN_100981f8(auStack_78,0x80);
  iVar3 = FUN_10098320(auStack_78,0x4c697374,1000);
  if (iVar3 != 0) {
    uVar4 = FUN_100fab98(0);
    FUN_100fac48(uVar4,iVar3,0);
    FUN_1008bd08(_DAT_60000000,uVar4);
    FUN_100f57c8(uVar4);
  }
  FUN_100ef510(iVar3);
  puVar5 = (undefined4 *)FUN_10098320(auStack_78,0x4f70746e,1000);
  if (puVar5 == (undefined4 *)0x0) {
    _DAT_48000f11 = 0;
  }
  else {
    _DAT_48000f11 = *(int *)*puVar5;
  }
  FUN_100ef510(puVar5);
  if (_DAT_48000f11 == -3) {
    puVar5 = (undefined4 *)FUN_10098320(auStack_78,0x54656d70,1000);
    if (puVar5 == (undefined4 *)0x0) {
      _DAT_48000f11 = 0;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
      _DAT_4800006c = *puVar5;
      FUN_100012d8(puVar5 + 1,&DAT_48000070,*(byte *)(puVar5 + 1) + 1);
      _DAT_48000170 = puVar5[0x41];
      _DAT_48000174 = puVar5[0x42];
      _DAT_48000178 = puVar5[0x43];
      _DAT_4800017c = puVar5[0x44];
      _DAT_48000180 = puVar5[0x45];
      _DAT_48000184 = puVar5[0x46] & 0xffff0000;
    }
  }
  sVar6 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
  iVar3 = (int)sVar6;
  uVar7 = _DAT_48000f11 + -1 + (uint)(_DAT_48000f11 != 0) >> 0x1f;
  if ((iVar3 != 0) && (iVar8 = 1, 0 < iVar3)) {
    do {
      piVar2 = (int *)FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar8
                                  );
      if (*piVar2 == _DAT_48000f11) {
        uVar7 = 1;
        _DAT_48000f11 = iVar8;
      }
      *piVar2 = iVar8;
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 <= iVar3);
  }
  if (uVar7 == 0) {
    _DAT_48000f11 = 0;
  }
  if (_DAT_48000f11 == -3) {
    iVar3 = 0;
    do {
      *(ushort *)(&DAT_3860ffff + iVar3 * 2) = (ushort)(byte)(&DAT_48000070)[iVar3];
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0xb);
  }
  else if (_DAT_48000f11 < 1) {
    iVar3 = 0;
    do {
      *(undefined2 *)(&DAT_3860ffff + iVar3 * 2) =
           *(undefined2 *)(&DAT_4182000c + iVar3 * 2 + _DAT_48000f11 * -0x16);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0xb);
  }
  else {
    uVar4 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe8),1);
    iVar3 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),_DAT_48000f11);
    iVar8 = 0;
    do {
      *(undefined2 *)(&DAT_3860ffff + iVar8 * 2) = *(undefined2 *)(iVar3 + iVar8 * 2 + 0x104);
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < 0xb);
    FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe8),uVar4);
  }
  piVar2 = (int *)FUN_10098320(auStack_78,0x4c657665,1000);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    iVar8 = 0;
    do {
      iVar1 = iVar8 * 2;
      if (*(short *)(_DAT_4bffe775 + iVar1 + 0x138) != 0) {
        if (*(short *)(iVar3 + iVar1) == 3) {
          *(undefined2 *)(_DAT_4bffe775 + iVar1 + 0xd0) = 1;
          *(undefined2 *)(iVar1 + _DAT_4bffe775 + 0xc0) = 3;
        }
        else {
          iVar1 = iVar8 * 2;
          if (*(short *)(iVar3 + iVar1) == 5) {
            *(undefined2 *)(iVar1 + _DAT_4bffe775 + 0xd0) = 0;
            *(undefined2 *)(iVar1 + _DAT_4bffe775 + 0xc0) = 2;
          }
          else {
            iVar1 = iVar8 * 2;
            *(undefined2 *)(_DAT_4bffe775 + iVar1 + 0xd0) = 1;
            *(undefined2 *)(iVar1 + _DAT_4bffe775 + 0xc0) = *(undefined2 *)(iVar1 + iVar3);
          }
        }
      }
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < 8);
    *(undefined2 *)(_DAT_4bffe775 + 0x116) = *(undefined2 *)(iVar3 + 0x10);
  }
  **(int **)(local_9c + -0x190c) = _DAT_48000f11;
  FUN_100982e8(auStack_78,2);
  return;
}



// Function: FUN_10057e5c at 10057e5c
// Size: 1644 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057e5c(short param_1,short param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  short sVar11;
  int iVar9;
  short sVar12;
  undefined4 uVar10;
  char cVar13;
  undefined1 auStack_130 [260];
  
  if (param_1 < 0) {
    sVar11 = 8;
    sVar4 = 0;
  }
  else {
    sVar11 = param_1 + 1;
    sVar4 = param_1;
  }
  piVar2 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x308),0x73696465);
  if (piVar2 == (int *)0x0) {
    for (; uVar1 = (uint)sVar4, (int)uVar1 < (int)sVar11; sVar4 = sVar4 + 1) {
      piVar2 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x308),
                                   uVar1 + 0x636c7531);
      if (((param_1 < 0) || (param_2 != 0)) && (piVar2 != (int *)0x0)) {
        FUN_100b19f4(auStack_130,_DAT_4bffe775 + uVar1 * 0x14);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7b0),auStack_130,0);
      }
      if (*(short *)(_DAT_4bffe775 + uVar1 * 2 + 0xd0) == 0) {
        sVar12 = 4;
      }
      else {
        sVar12 = *(short *)(_DAT_4bffe775 + uVar1 * 2 + 0xc0);
      }
      iVar7 = (int)sVar12;
      iVar9 = _DAT_4bffe775 + uVar1 * 2;
      if ((*(short *)(iVar9 + 0xd0) == 1) && (*(short *)(iVar9 + 0xe0) != 0)) {
        iVar7 = (int)(short)(*(short *)(iVar9 + 0xc0) + 7);
      }
      if (iVar7 == 4) {
        if ((uVar1 == 0) ||
           (uVar5 = uVar1 - 1,
           ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) !=
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          sVar12 = 5;
        }
        else {
          sVar12 = 4;
        }
        iVar7 = (int)sVar12;
      }
      if (*(short *)(_DAT_4bffe775 + uVar1 * 2 + 0x138) == 0) {
        iVar7 = 6;
      }
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     uVar1 + 0x69636f31);
      }
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7a8),
                     (int)(short)((short)iVar7 + 0xbcc),0);
        iVar9 = -iVar7 + 6;
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),
                     iVar9 + (-(uint)(iVar9 == 0) - (-iVar7 + 5)) & 0xff);
        if ((iVar7 == 6) || (iVar7 == 3)) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0;
        }
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),uVar10,0);
        if (param_2 == 0) {
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x488));
        }
      }
      if (6 < iVar7) {
        iVar7 = (int)(short)((short)iVar7 + -7);
      }
      if (iVar7 == 5) {
        iVar7 = 4;
      }
      if (iVar7 == 6) {
        iVar7 = 3;
      }
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     uVar1 + 0x726f6c31);
      }
      if (piVar3 != (int *)0x0) {
        if ((param_2 == 0) && (*(short *)(piVar3 + 0x20) != iVar7)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        *(short *)(piVar3 + 0x20) = (short)iVar7;
        if (bVar8) {
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x488));
        }
      }
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     uVar1 + 0x63686131);
      }
      if (piVar3 == (int *)0x0) {
LAB_1005845c:
        if (param_2 != 0) goto LAB_10058464;
      }
      else {
        iVar9 = (int)*(short *)(_DAT_4bffe775 + uVar1 * 2 + 0xe0);
        iVar6 = piVar3[0x2c];
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 2000),iVar9,1);
        if (iVar6 == iVar9) {
          if ((iVar7 == 4) || (iVar7 == 3)) {
            cVar13 = '\x01';
          }
          else {
            cVar13 = '\0';
          }
          if (*(char *)((int)piVar3 + 0x85) != cVar13) goto LAB_100583c8;
          bVar8 = false;
        }
        else {
LAB_100583c8:
          bVar8 = true;
        }
        if ((iVar7 == 4) || (iVar7 == 3)) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0;
        }
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),uVar10,1);
        if (!bVar8) goto LAB_1005845c;
        if (param_2 == 0) {
          iVar9 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x3a8));
          if (iVar9 != 0) {
            FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
          }
          goto LAB_1005845c;
        }
LAB_10058464:
        if ((piVar2 != (int *)0x0) &&
           (iVar9 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8)), iVar9 != 0)) {
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
        }
      }
    }
  }
  else {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),0x73696430);
    iVar9 = 0;
    do {
      iVar7 = _DAT_4bffe775 + iVar9 * 2;
      if ((*(short *)(iVar7 + 0x138) != 0) && (*(short *)(iVar7 + 0xd0) == 0)) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),iVar9 + 0x73696430);
        break;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < 8);
    piVar2 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x308),0x636f6d70);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),0x636f6d30);
      iVar9 = 0;
      do {
        iVar7 = _DAT_4bffe775 + iVar9 * 2;
        if ((*(short *)(iVar7 + 0xd0) == 1) && (iVar7 = (int)*(short *)(iVar7 + 0xc0), iVar7 != 3))
        {
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),iVar7 + 0x636f6d30);
          return;
        }
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < 8);
    }
  }
  return;
}



// Function: FUN_100584c8 at 100584c8
// Size: 472 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100584c8(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined1 auStack_110 [256];
  
  sVar2 = _DAT_38610009 +
          ((_DAT_38610005 * 3 + _DAT_38610003 * 3 + _DAT_38610001 * 3 + _DAT_3860ffff * 3) -
          _DAT_38610007);
  if (_DAT_3861000b != 0xf) {
    if (_DAT_3861000b == 1) {
      sVar2 = sVar2 + 3;
    }
    else if (_DAT_3861000b == 0) {
      sVar2 = sVar2 + 6;
    }
  }
  if (0x13 < sVar2) {
    sVar2 = 0x14;
  }
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar6 = _DAT_4bffe775 + iVar5 * 2;
    if (((*(short *)(iVar6 + 0x138) != 0) && (*(short *)(iVar6 + 0xd0) == 1)) &&
       (*(short *)(iVar6 + 0xc0) != 3)) {
      iVar3 = (int)(short)(*(short *)(iVar6 + 0xc0) + (short)iVar3 + 1);
      iVar4 = (int)(short)((short)iVar4 + 1);
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  if (iVar4 == 0) {
    sVar7 = 0x50;
  }
  else {
    sVar7 = (short)((iVar3 * 0x50) / (iVar4 * 3));
  }
  if (0x4d < sVar7) {
    sVar7 = 0x50;
  }
  uVar1 = FUN_1005f678(7,0);
  FUN_10001dd0(&DAT_80410014,uVar1,(int)(short)(sVar7 + sVar2));
  FUN_100b19f4(auStack_110,&DAT_80410014);
  FUN_10090e0c(param_1,0x64696666,auStack_110,1);
  return;
}



// Function: FUN_100586a0 at 100586a0
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100586a0(int *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  sVar2 = 0;
  iVar5 = 0;
  do {
    iVar3 = _DAT_4bffe775 + iVar5 * 2;
    if (((*(short *)(iVar3 + 0x138) != 0) && (*(short *)(iVar3 + 0xd0) == 1)) &&
       (*(short *)(iVar3 + 0xc0) != 3)) {
      sVar2 = sVar2 + 1;
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar5 + 0x63686131);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 2000) + (int)piVar1,
                     *(short *)(iVar5 * 2 + _DAT_4bffe775 + 0xe0) != 0,1);
      }
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73656c65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),sVar2 == 0,1);
  }
  iVar5 = 0;
  uVar4 = 0;
  do {
    iVar3 = _DAT_4bffe775 + iVar5 * 2;
    if ((*(short *)(iVar3 + 0x138) != 0) && (*(short *)(iVar3 + 0xc0) != 3)) {
      uVar4 = (uint)(short)((short)uVar4 + 1);
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x676f2020);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),
                 (uint)(uVar4 < 2) - ((int)uVar4 >> 0x1f),1);
  }
  return;
}



// Function: FUN_1005887c at 1005887c
// Size: 1000 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005887c(short param_1,short param_2,short param_3,short param_4,int *param_5)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **local_18c;
  undefined4 local_168;
  undefined4 local_164;
  int *local_160;
  undefined1 auStack_15c [256];
  short local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((param_2 != 0) && (param_4 == 2)) {
    _DAT_a8650028 = *(short *)(_DAT_4bffe775 + 0x120);
  }
  ppuVar1 = &.TVect::OCECToRString;
  if (param_4 != 1) {
    FUN_10075894(_DAT_57c407bd);
    local_160 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x3f2
                                    ,*(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
    _DAT_80410014 = local_160;
    if (_DAT_60000000 != (int *)0x0) {
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x738));
      _DAT_60000000 = (int *)0x0;
    }
    FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 800));
    FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x4c8));
    ppuVar1 = local_18c;
  }
  if ((ppuVar1[-5][0x34] != '\0') && (iVar2 = FUN_100276ec(), iVar2 != 0)) {
    FUN_10040408(0,0,ppuVar1[-0x64a] + 0x18,0,0,0,0);
    FUN_10092484(0);
    FUN_100929a0();
  }
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = _DAT_41820010;
  _DAT_41820010 = auStack_15c;
  iVar2 = FUN_10000090(auStack_15c);
  if (iVar2 == 0) {
    if (_DAT_a8650028 == 0) {
      if (param_3 != 0) {
        FUN_10057448(1);
      }
    }
    else if (param_1 == 0) {
      if (param_3 != 0) {
        FUN_10057448(1);
      }
    }
    else if (param_3 != 0) {
      FUN_100577f0();
    }
    *(short *)(_DAT_4bffe775 + 0x120) = _DAT_a8650028;
    if (param_4 != 1) {
      FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x738));
      _DAT_80410014 = (int *)0x0;
    }
    _DAT_41820010 = local_54;
  }
  else {
    if ((param_4 != 1) && (_DAT_80410014 != (int *)0x0)) {
      FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x738));
      _DAT_80410014 = (int *)0x0;
    }
    FUN_100db158((int)local_5c,local_58);
  }
  if (*(short *)(_DAT_4bffe775 + 0x12e) == 0) {
    if (param_4 != 1) {
      FUN_100579f8();
    }
    if (param_2 != 0) {
      FUN_10057e5c(0xffffffff,0,param_5);
      FUN_100584c8(param_5);
    }
    FUN_100586a0(param_5);
  }
  else {
    iVar2 = 0;
    do {
      *(undefined2 *)(&DAT_3860ffff + iVar2 * 2) = *(undefined2 *)(&DAT_4182000c + iVar2 * 2);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0xb);
    FUN_1005f6b0(0x19,8);
    FUN_10040040();
    local_168 = 0xffff8300;
    local_164 = 0xffff8300;
    FUN_10117884((int)param_5 + (int)*(short *)(*param_5 + 0x370),&local_168,0);
    *(undefined1 *)((int)param_5 + 0xb1) = 1;
    *(undefined1 *)((int)param_5 + 0xb5) = 1;
    *(undefined1 *)((int)param_5 + 0xb2) = 1;
    *(undefined1 *)(param_5 + 0x2d) = 1;
    *(undefined1 *)((int)param_5 + 0xb3) = 1;
    puVar3 = (undefined4 *)FUN_100f56e4(0x34);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_100c3d2c(puVar3);
      *puVar3 = local_18c[-0x504];
      puVar3[0xc] = 0;
    }
    FUN_100c3df8(puVar3,3000,param_5,0,0,0);
    puVar3[0xc] = 3000;
    FUN_10117884((int)param_5 + (int)*(short *)(*param_5 + 0x200),puVar3);
  }
  return;
}



// Function: FUN_10058c64 at 10058c64
// Size: 3864 bytes

void FUN_10058c64(int *param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
  FUN_100db26c(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,0xa0);
  iVar6 = 0;
  do {
    iVar3 = (int)*(short *)(param_2 + iVar6 * 2 + 0xa0);
    if (iVar3 == 0xff) {
      iVar3 = 0;
    }
    else if (iVar3 == 0) {
      iVar3 = 0xf;
    }
    iVar5 = *param_1;
    uVar1 = FUN_100525a0(iVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = (int)*(short *)(param_2 + iVar6 * 2 + 0xb0);
    if (iVar3 == 0xff) {
      iVar3 = 0;
    }
    else if (iVar3 == 0) {
      iVar3 = 0xf;
    }
    iVar5 = *param_1;
    uVar1 = FUN_100525a0(iVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0xc0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0xd0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0xe0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0xf0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x100,0x10);
  psVar7 = (short *)(param_2 + 0x110);
  sVar2 = 0;
  do {
    iVar6 = *param_1;
    uVar1 = FUN_100525a0((int)*psVar7);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar6 + 400),uVar1);
    sVar2 = sVar2 + 1;
    psVar7 = psVar7 + 1;
  } while (sVar2 < 0x12);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(undefined1 *)(param_2 + 0x134));
  psVar7 = (short *)(param_2 + 0x136);
  sVar2 = 0;
  do {
    iVar6 = *param_1;
    uVar1 = FUN_100525a0((int)*psVar7);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar6 + 400),uVar1);
    sVar2 = sVar2 + 1;
    psVar7 = psVar7 + 1;
  } while (sVar2 < 0x27);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    iVar5 = param_2 + iVar6 * 0x14;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x184));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x186));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x188));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x18a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x18c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x18e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 400));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(undefined1 *)(iVar5 + 0x192));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(undefined1 *)(iVar5 + 0x193));
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x194));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x196));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x224,800);
  psVar7 = (short *)(param_2 + 0x544);
  sVar2 = 0;
  do {
    iVar6 = *param_1;
    uVar1 = FUN_100525a0((int)*psVar7);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar6 + 400),uVar1);
    sVar2 = sVar2 + 1;
    psVar7 = psVar7 + 1;
  } while (sVar2 < 0x50);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x5e4,0x22c);
  iVar6 = *param_1;
  uVar1 = FUN_100525a0((int)*(short *)(param_2 + 0x810));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar6 + 400),uVar1);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    iVar5 = param_2 + iVar6 * 0x20;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x812));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x814));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar5 + 0x816,0x17);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x82e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x830));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x28);
  iVar6 = 0;
  do {
    iVar3 = param_2 + iVar6 * 0x1e;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar3 + 0xd12,0x17);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0xd2a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0xd2c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0xd2e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x16);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0xfa6,0xa0);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0x1046));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 10);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0x105a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 100);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0x1122));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 2 + 0x1132));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    iVar5 = param_2 + iVar6 * 0xc;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1142));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1144));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1146));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1148));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x114a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x114c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = 0;
    do {
      iVar5 = 0;
      do {
        iVar4 = *param_1;
        uVar1 = FUN_100525a0((int)*(short *)(param_2 + iVar6 * 0x50 + iVar3 * 10 + iVar5 * 2 +
                                            0x11a2));
        FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar1);
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 5);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  iVar6 = 0;
  do {
    iVar3 = param_2 + iVar6 * 0x2c;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar3 + 0x1422,3);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0x1426));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0x1428));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0x142a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    iVar5 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar3 + 0x142c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar3 + 0x142e,0x20);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x1582,0x40);
  iVar6 = *param_1;
  uVar1 = FUN_100525a0((int)*(short *)(param_2 + 0x1602));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar6 + 400),uVar1);
  iVar6 = 0;
  do {
    iVar3 = *param_1;
    iVar5 = param_2 + iVar6 * 0x42;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1604));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1606));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar5 + 0x1608,0x26);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x162e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar5 + 0x1630,5);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1636));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1638));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x163a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(uint *)(iVar5 + 0x163c) >> 0x18)
    ;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),
                 *(uint *)(iVar5 + 0x163c) >> 0x10 & 0xff);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x163e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1640));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1642));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100525a0((int)*(short *)(iVar5 + 0x1644));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 400),uVar1);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 100);
  return;
}



// Function: FUN_10059b7c at 10059b7c
// Size: 432 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059b7c(short param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(short *)(_DAT_4bffe775 + iVar2 * 2 + 0x138) == 0) {
    FUN_100586a0(param_2);
  }
  else {
    iVar1 = _DAT_4bffe775 + iVar2 * 2;
    if (*(short *)(iVar1 + 0xd0) == 0) {
      *(undefined2 *)(iVar1 + 0xd0) = 1;
      *(undefined2 *)(iVar2 * 2 + _DAT_4bffe775 + 0xc0) = 0;
    }
    else {
      iVar1 = _DAT_4bffe775 + iVar2 * 2;
      if (*(short *)(iVar1 + 0xc0) == 2) {
        *(undefined2 *)(iVar1 + 0xc0) = 3;
      }
      else {
        iVar1 = _DAT_4bffe775 + iVar2 * 2;
        if (*(short *)(iVar1 + 0xc0) == 3) {
          *(undefined2 *)(iVar1 + 0xc0) = 0;
          *(undefined2 *)(iVar2 * 2 + _DAT_4bffe775 + 0xd0) = 0;
        }
        else {
          iVar1 = _DAT_4bffe775 + iVar2 * 2;
          *(short *)(iVar1 + 0xc0) = *(short *)(iVar1 + 0xc0) + 1;
        }
      }
    }
    *(undefined2 *)(_DAT_4bffe775 + iVar2 * 2 + 0xe0) = 0;
    if ((param_2 != (int *)0x0) &&
       (iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),iVar2 + 0x726f6c31),
       iVar1 != 0)) {
      FUN_100878fc(iVar1);
    }
    FUN_10057e5c(iVar2,0,param_2);
    FUN_100584c8(param_2);
    FUN_100586a0(param_2);
  }
  return;
}



// Function: FUN_10059d2c at 10059d2c
// Size: 4 bytes

void FUN_10059d2c(void)

{
  return;
}



// Function: FUN_10059d30 at 10059d30
// Size: 1408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059d30(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short sVar9;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_58c;
  undefined1 auStack_568 [256];
  undefined1 auStack_468 [256];
  int *local_368;
  byte local_364 [256];
  undefined1 auStack_264 [256];
  short local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_14c [260];
  
  local_368 = (int *)0x0;
  local_368 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xbcd,
                                  *(undefined4 *)(_DAT_57c407bd + 0x88));
  FUN_100db26c();
  iVar2 = FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x7f8));
  local_164 = 0;
  local_160 = 0;
  local_158 = 0;
  local_154 = 0;
  local_15c = _DAT_41820010;
  _DAT_41820010 = auStack_264;
  iVar3 = FUN_10000090(auStack_264);
  if (iVar3 != 0) {
    if (local_368 != (int *)0x0) {
      FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x738));
    }
    local_368 = (int *)0x0;
    FUN_100db158((int)local_164,local_160);
    return;
  }
  FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 800));
  FUN_10059d2c();
  iVar3 = FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x810));
  piVar10 = *(int **)(iVar2 + 0x58);
  FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x328));
  if (iVar3 != 0x6f6b2020) {
    FUN_100f57c8(_DAT_60000000);
    _DAT_60000000 = piVar10;
    goto LAB_1005a230;
  }
  piVar4 = (int *)FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x308),0x4c697374);
  if (piVar4 != (int *)0x0) {
    local_364[0] = 0;
    iVar3 = FUN_10117884((int)*(short *)(*piVar4 + 0x908) + (int)piVar4);
    if ((iVar3 == 0) &&
       (piVar4 = (int *)FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x308),0x6e616d65
                                    ), piVar4 != (int *)0x0)) {
      FUN_10117884((int)*(short *)(*piVar4 + 0x7a0) + (int)piVar4,local_364);
      sVar9 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
      iVar11 = (int)sVar9;
      iVar12 = 1;
      if (0 < iVar11) {
        do {
          iVar5 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar12);
          uVar6 = FUN_100b1c84(local_364);
          uVar7 = FUN_100b1c84(iVar5 + 4);
          iVar8 = FUN_10001998(uVar7,uVar6,0,0);
          if (iVar8 != 0) {
            if (iVar12 <= iVar11) {
              bVar1 = true;
              iVar11 = 0;
              goto LAB_10059fd4;
            }
            break;
          }
          iVar12 = (int)(short)((short)iVar12 + 1);
        } while (iVar12 <= iVar11);
      }
      FUN_100b19f4(auStack_468,*(int *)(local_58c + -0x1928) + 0x34);
      uVar6 = FUN_100b1c84(local_364);
      uVar7 = FUN_100b1c84(auStack_468);
      iVar11 = FUN_10001998(uVar7,uVar6,0,0);
      iVar12 = -1;
      if (iVar11 == 0) {
        FUN_100b19f4(auStack_568,*(int *)(local_58c + -0x1928) + 0x40);
        uVar6 = FUN_100b1c84(local_364);
        uVar7 = FUN_100b1c84(auStack_568);
        iVar11 = FUN_10001998(uVar7,uVar6,0,0);
        if (iVar11 == 0) {
          FUN_100b19f4(auStack_14c,*(int *)(local_58c + -0x1928) + 0x50);
          uVar6 = FUN_100b1c84(local_364);
          uVar7 = FUN_100b1c84(auStack_14c);
          iVar11 = FUN_10001998(uVar7,uVar6,0,0);
          if (iVar11 != 0) {
            iVar12 = 2;
          }
        }
        else {
          iVar12 = 1;
        }
      }
      else {
        iVar12 = 0;
      }
      if (iVar12 != -1) {
        bVar1 = true;
        iVar11 = 0;
        do {
          if (*(short *)(iVar2 + iVar11 * 2 + 0x40) !=
              *(short *)(&DAT_4182000c + iVar11 * 2 + iVar12 * 0x16)) {
            bVar1 = false;
            break;
          }
          iVar11 = (int)(short)((short)iVar11 + 1);
        } while (iVar11 < 0xb);
        if (bVar1) {
          iVar3 = (int)(short)((short)iVar12 + 1);
        }
      }
    }
    goto LAB_1005a174;
  }
  goto LAB_1005a1f8;
  while (iVar11 = (int)(short)((short)iVar11 + 1), iVar11 < 0xb) {
LAB_10059fd4:
    if (*(short *)(iVar2 + iVar11 * 2 + 0x40) != *(short *)(iVar11 * 2 + iVar5 + 0x104)) {
      bVar1 = false;
      break;
    }
  }
  if (bVar1) {
    iVar3 = (int)(short)((short)iVar12 + 3);
  }
LAB_1005a174:
  if (iVar3 == 0) {
    _DAT_48000f11 = -3;
    _DAT_4800006c = 1;
    FUN_100012d8(local_364,&DAT_48000070,local_364[0] + 1);
    iVar3 = 0;
    do {
      *(undefined2 *)(&DAT_48000170 + iVar3 * 2) = *(undefined2 *)(iVar2 + iVar3 * 2 + 0x40);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0xb);
  }
  else {
    if (iVar3 < 4) {
      _DAT_48000f11 = 1 - iVar3;
    }
    else {
      _DAT_48000f11 = iVar3 + -3;
    }
    _DAT_4800006c = 0;
  }
LAB_1005a1f8:
  FUN_100586a0(param_1);
  FUN_100f57c8(piVar10);
  **(undefined1 **)(local_58c + -0x1414) = 1;
LAB_1005a230:
  FUN_10117884((int)local_368 + (int)*(short *)(*local_368 + 0x738));
  _DAT_41820010 = (undefined1 *)local_15c;
  return;
}



// Function: FUN_1005a2b0 at 1005a2b0
// Size: 32 bytes

void FUN_1005a2b0(void)

{
  FUN_10059d30();
  return;
}



// Function: FUN_1005a2d0 at 1005a2d0
// Size: 988 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a2d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar6;
  undefined4 uVar5;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_1bc;
  undefined1 auStack_198 [80];
  undefined1 auStack_148 [256];
  undefined2 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_30;
  
  if ((DAT_38600000 == '\0') && (_DAT_80df0020 == _DAT_48000f11)) {
    return;
  }
  local_30 = (int *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar4 = FUN_10000090(auStack_148);
  if (iVar4 == 0) {
    FUN_100981f8(auStack_198,0x80);
    uVar6 = FUN_100f1574(1);
    local_30 = (int *)FUN_10001fc8(4);
    uRam00000000 = uVar6;
    if (local_30 != (int *)0x0) {
      uVar5 = FUN_100fab98(0);
      FUN_100fac48(uVar5,local_30,0x11c);
      FUN_1008bdb8(**(undefined4 **)(local_1bc + -0x1418),uVar5);
      FUN_100f57c8(uVar5);
      FUN_100985fc(auStack_198,local_30,0x4c697374,1000,&DAT_7c0803a6);
    }
    local_30 = (int *)FUN_100ef510(local_30);
    uVar6 = FUN_100f1574(1);
    local_30 = (int *)FUN_10001fc8(4);
    uRam00000000 = uVar6;
    if (local_30 != (undefined4 *)0x0) {
      *(int *)*local_30 = _DAT_48000f11;
      FUN_100985fc(auStack_198,local_30,0x4f70746e,1000,&DAT_7c0803a6);
    }
    local_30 = (int *)FUN_100ef510(local_30);
    if (_DAT_48000f11 == -3) {
      uVar6 = FUN_100f1574(1);
      local_30 = (int *)FUN_10001fc8(0x11c);
      uRam00000000 = uVar6;
      if (local_30 != (undefined4 *)0x0) {
        puVar11 = (undefined4 *)*local_30;
        *puVar11 = _DAT_4800006c;
        FUN_100012d8(&DAT_48000070,puVar11 + 1,DAT_48000070 + 1);
        uVar3 = _DAT_48000180;
        uVar2 = _DAT_4800017c;
        uVar1 = _DAT_48000178;
        uVar5 = _DAT_48000174;
        uVar9 = _DAT_48000184 & 0xffff0000;
        puVar11[0x41] = _DAT_48000170;
        puVar11[0x42] = uVar5;
        puVar11[0x43] = uVar1;
        puVar11[0x44] = uVar2;
        puVar11[0x45] = uVar3;
        puVar11[0x46] = uVar9;
        FUN_100985fc(auStack_198,local_30,0x54656d70,1000,&DAT_7c0803a6);
      }
      local_30 = (int *)FUN_100ef510(local_30);
    }
    uVar6 = FUN_100f1574(1);
    local_30 = (int *)FUN_10001fc8(0x12);
    uRam00000000 = uVar6;
    if (local_30 != (int *)0x0) {
      iVar4 = *local_30;
      uVar7 = 0;
      iVar10 = 0;
      do {
        iVar8 = _DAT_4bffe775 + iVar10 * 2;
        if ((*(short *)(iVar8 + 0x138) != 0) && (*(short *)(iVar8 + 0xc0) == 1)) {
          uVar7 = 1;
          break;
        }
        iVar10 = (int)(short)((short)iVar10 + 1);
      } while (iVar10 < 8);
      iVar10 = 0;
      do {
        if (*(short *)(_DAT_4bffe775 + iVar10 * 2 + 0x138) == 0) {
          *(undefined2 *)(iVar10 * 2 + iVar4) = uVar7;
        }
        else if (*(short *)(_DAT_4bffe775 + iVar10 * 2 + 0xc0) == 3) {
          *(undefined2 *)(iVar10 * 2 + iVar4) = 3;
        }
        else if (*(short *)(_DAT_4bffe775 + iVar10 * 2 + 0xd0) == 0) {
          *(undefined2 *)(iVar10 * 2 + iVar4) = 5;
        }
        else {
          *(undefined2 *)(iVar10 * 2 + iVar4) = *(undefined2 *)(_DAT_4bffe775 + iVar10 * 2 + 0xc0);
        }
        iVar10 = (int)(short)((short)iVar10 + 1);
      } while (iVar10 < 8);
      *(undefined2 *)(iVar4 + 0x10) = *(undefined2 *)(_DAT_4bffe775 + 0x116);
      FUN_100985fc(auStack_198,local_30,0x4c657665,1000,&DAT_7c0803a6);
    }
    local_30 = (int *)FUN_100ef510(local_30);
    _DAT_41820010 = local_40;
    FUN_100982e8(auStack_198,2);
  }
  else {
    FUN_100ef510(local_30);
  }
  return;
}



// Function: FUN_1005a6ac at 1005a6ac
// Size: 1052 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a6ac(int *param_1)

{
  short sVar3;
  undefined1 uVar4;
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_94;
  undefined1 auStack_70 [84];
  
  piVar5 = *(int **)(_DAT_57c407bd + 0x88);
  *(undefined1 *)(piVar5 + 0x51) = 1;
  FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x38),0);
  if (*(short *)(_DAT_4bffe775 + 0x12e) == 0) {
    piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73696465);
    if (piVar5 != (int *)0x0) {
      sVar3 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7c0));
      iVar7 = 0;
      do {
        *(ushort *)(_DAT_4bffe775 + iVar7 * 2 + 0xd0) = (ushort)(iVar7 != (short)(sVar3 + -0x6430));
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < 8);
    }
    piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x636f6d70);
    if (piVar5 != (int *)0x0) {
      sVar3 = FUN_10117884((int)*(short *)(*piVar5 + 0x7c0) + (int)piVar5);
      iVar7 = 0;
      do {
        *(short *)(_DAT_4bffe775 + iVar7 * 2 + 0xc0) = sVar3 + -0x6d30;
        *(undefined2 *)(iVar7 * 2 + _DAT_4bffe775 + 0xe0) = 0;
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < 8);
    }
    FUN_1005a2d0();
    FUN_100981f8(auStack_70,0x80);
    uVar4 = FUN_100f1574(1);
    puVar1 = (undefined4 *)FUN_10000948(1);
    **(undefined1 **)(local_94 + -0x3c) = uVar4;
    if (puVar1 != (undefined4 *)0x0) {
      *(bool *)*puVar1 = piVar5 == (int *)0x0;
      FUN_100985fc(auStack_70,puVar1,0x53657475,1000,*(undefined4 *)(local_94 + -0xe4c));
      FUN_10000960(puVar1);
    }
    FUN_100982e8(auStack_70,2);
  }
  iVar7 = 0;
  do {
    iVar6 = _DAT_4bffe775 + iVar7 * 2;
    if (*(short *)(iVar6 + 0x138) == 0) {
      *(undefined2 *)(iVar6 + 0xd0) = 1;
      *(undefined2 *)(iVar7 * 2 + _DAT_4bffe775 + 0xc0) = 0;
    }
    iVar6 = iVar7 * 2;
    if (*(short *)(_DAT_4bffe775 + iVar6 + 0xc0) == 3) {
      *(undefined2 *)(_DAT_4bffe775 + iVar6 + 0x138) = 0;
      *(undefined2 *)(_DAT_4bffe775 + iVar6 + 0xd0) = 1;
      *(undefined2 *)(_DAT_4bffe775 + iVar6 + 0xc0) = 0;
      iVar6 = _DAT_4bffe775 + iVar7 * 0x14;
      iVar6 = FUN_1002be50((int)*(short *)(iVar6 + 0x18a),(int)*(short *)(iVar6 + 0x18c));
      if (-1 < iVar6) {
        *(undefined1 *)(_DAT_4bffe775 + iVar6 * 0x42 + 0x1619) = 0xf;
      }
    }
    iVar6 = _DAT_4bffe775 + iVar7 * 2;
    if (*(short *)(iVar6 + 0xd0) == 0) {
      *(undefined2 *)(iVar6 + 0xc0) = 2;
    }
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  FUN_10092c5c(1);
  *(undefined2 *)(_DAT_4bffe775 + 0x11a) = _DAT_3860ffff;
  *(undefined2 *)(_DAT_4bffe775 + 0x11c) = _DAT_38610001;
  *(undefined2 *)(_DAT_4bffe775 + 0x11e) = _DAT_38610003;
  *(undefined2 *)(_DAT_4bffe775 + 0x124) = _DAT_38610005;
  *(undefined2 *)(_DAT_4bffe775 + 0x12a) = _DAT_38610007;
  *(undefined2 *)(_DAT_4bffe775 + 0x132) = _DAT_38610009;
  *(undefined2 *)(_DAT_4bffe775 + 0x114) = _DAT_3861000b;
  *(undefined2 *)(_DAT_4bffe775 + 0x126) = _DAT_3861000d;
  *(undefined2 *)(_DAT_4bffe775 + 0x128) = _DAT_3861000f;
  *(undefined2 *)(_DAT_4bffe775 + 300) = _DAT_38610011;
  *(undefined2 *)(_DAT_4bffe775 + 0x122) = _DAT_38610013;
  *(undefined2 *)(_DAT_4bffe775 + 0x130) = 0;
  FUN_1000c67c();
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x328));
    uVar2 = FUN_1007a894(0);
    FUN_1007a95c(uVar2,param_1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),uVar2);
  }
  FUN_1003e13c(0,1);
  return;
}



// Function: FUN_1005aac8 at 1005aac8
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005aac8(short param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    *(undefined2 *)(_DAT_4bffe775 + 0x116) = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar2 = _DAT_4bffe775 + iVar3 * 2;
      if (*(short *)(iVar2 + 0x138) != 0) {
        *(undefined2 *)(iVar2 + 0xd0) = 1;
        iVar2 = iVar3 * 2 + _DAT_4bffe775;
        if (*(short *)(iVar2 + 0xc0) != 2) {
          *(undefined2 *)(iVar2 + 0xe0) = 0;
        }
        *(undefined2 *)(_DAT_4bffe775 + iVar3 * 2 + 0xc0) = 2;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    piVar1 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x636f6d70);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),0x636f6d32);
    }
    *(undefined2 *)(_DAT_4bffe775 + 0x116) = 1;
  }
  FUN_10057e5c(0xffffffff,0,param_2);
  FUN_100584c8(param_2);
  FUN_100586a0(param_2);
  return;
}



// Function: FUN_1005abf4 at 1005abf4
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005abf4(short param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (iVar4 < 3) {
    iVar2 = 0;
    do {
      *(undefined2 *)(&DAT_3860ffff + iVar2 * 2) =
           *(undefined2 *)(&DAT_4182000c + iVar4 * 0x16 + iVar2 * 2);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0xb);
    _DAT_48000f11 = -iVar4;
  }
  else {
    sVar1 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
    if ((int)sVar1 < iVar4 + -3) {
      iVar4 = 0;
      do {
        *(undefined2 *)(&DAT_3860ffff + iVar4 * 2) = *(undefined2 *)(&DAT_48000170 + iVar4 * 2);
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < 0xb);
      _DAT_48000f11 = -3;
    }
    else {
      iVar2 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar4 + -3);
      iVar3 = 0;
      do {
        *(undefined2 *)(&DAT_3860ffff + iVar3 * 2) = *(undefined2 *)(iVar2 + iVar3 * 2 + 0x104);
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 0xb);
      _DAT_48000f11 = iVar4 + -3;
    }
  }
  FUN_100584c8(param_2);
  FUN_100586a0(param_2);
  return;
}



// Function: FUN_1005ad34 at 1005ad34
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ad34(short param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  local_18[0] = _DAT_4beeb74d;
  if (param_2 == 0) {
    uVar1 = 0x4beeb755;
  }
  else {
    uVar1 = 0x4beeb751;
  }
  iVar2 = _DAT_4bffe775 + param_1 * 2;
  FUN_10001dd0(param_3,0x4beeb759,(int)*(char *)((int)local_18 + (int)*(short *)(iVar2 + 0xc0)),
               (int)*(short *)(iVar2 + 0xe0),uVar1);
  return;
}



// Function: FUN_1005adc4 at 1005adc4
// Size: 352 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1005adc4(short param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  short local_30 [12];
  
  DAT_2c9f0000 = 0;
  FUN_1005ad34((int)_DAT_60000000,0,auStack_58);
  piVar1 = (int *)FUN_10051f98(0x44455343,auStack_58,1);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1);
    iVar3 = FUN_100f1640(iVar2);
    FUN_10052490(piVar1,iVar3,iVar2);
    FUN_100523a8(piVar1,1);
    local_30[0] = 0;
    iVar5 = 1;
    iVar7 = 0;
    iVar6 = iVar5;
    if (0 < iVar2) {
      do {
        iVar5 = iVar6;
        if (*(char *)(iVar3 + iVar7) == '\r') {
          *(undefined1 *)(iVar7 + iVar3) = 0;
          sVar4 = (short)iVar7 + 2;
          iVar7 = (int)sVar4;
          iVar5 = (int)(short)((short)iVar6 + 1);
          local_30[iVar6] = sVar4;
        }
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while ((iVar7 < iVar2) && (iVar6 = iVar5, iVar5 < 9));
    }
    if ((int)param_1 < iVar5 + -1) {
      FUN_10001e78(&DAT_2c9f0000,iVar3 + local_30[param_1]);
    }
    FUN_100ef580(iVar3);
  }
  return &DAT_2c9f0000;
}



// Function: FUN_1005af24 at 1005af24
// Size: 672 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005af24(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_254;
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  
  if (*(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xd0) == 1) {
    iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657331);
    FUN_100db26c();
    local_30 = *(undefined4 *)(iVar5 + 0x98);
    uStack_2c = (undefined2)((uint)*(undefined4 *)(iVar5 + 0x9c) >> 0x10);
    local_2a = (undefined2)*(undefined4 *)(iVar5 + 0x9c);
    uStack_28 = (undefined2)((uint)*(undefined4 *)(iVar5 + 0xa0) >> 0x10);
    uStack_26 = (undefined2)*(undefined4 *)(iVar5 + 0xa0);
    if (*(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xc0) == 0) {
      puVar2 = (undefined4 *)FUN_100b2264(0x408600be);
      uStack_26 = (undefined2)((uint)puVar2[1] >> 0x10);
      local_2a = (undefined2)((uint)*puVar2 >> 0x10);
      uStack_28 = (undefined2)*puVar2;
      uStack_24 = 0;
    }
    else if (*(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xc0) == 1) {
      puVar2 = (undefined4 *)FUN_100b2264(0x408600ca);
      uStack_26 = (undefined2)((uint)puVar2[1] >> 0x10);
      local_2a = (undefined2)((uint)*puVar2 >> 0x10);
      uStack_28 = (undefined2)*puVar2;
      uStack_24 = 0;
    }
    else if (*(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xc0) == 2) {
      puVar2 = (undefined4 *)FUN_100b2264(0x408600d6);
      uStack_26 = (undefined2)((uint)puVar2[1] >> 0x10);
      local_2a = (undefined2)((uint)*puVar2 >> 0x10);
      uStack_28 = (undefined2)*puVar2;
      uStack_24 = 0;
    }
    iVar5 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar5 + 0x64657331);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x790),&local_30,0);
        uVar3 = FUN_1005adc4((int)(short)((short)iVar5 + 1));
        FUN_100b19f4(auStack_130,uVar3);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_130,0);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 6);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  }
  else {
    iVar5 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar5 + 0x64657331);
      if (piVar1 != (int *)0x0) {
        if (iVar5 == 1) {
          iVar4 = *(int *)(local_254 + -0x1928) + 0x78;
        }
        else {
          iVar4 = *(int *)(local_254 + -0x1928) + 0x7c;
        }
        FUN_100b19f4(auStack_230,iVar4);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),auStack_230,1);
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 6);
  }
  return;
}



// Function: FUN_1005b1c4 at 1005b1c4
// Size: 804 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1c4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_118 [256];
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73696465);
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x448) + (int)piVar2), iVar3 != 0)) {
    iVar1 = *(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xa0) * 6;
    uVar4 = *(uint *)(iVar1 + 0x408600a4);
    *(undefined4 *)(iVar3 + 0x12) = *(undefined4 *)(iVar1 + 0x408600a0);
    *(uint *)(iVar3 + 0x16) = uVar4 & 0xffff0000;
  }
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657363);
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x448) + (int)piVar2), iVar3 != 0)) {
    iVar1 = *(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xa0) * 6;
    uVar4 = *(uint *)(iVar1 + 0x408600a4);
    *(undefined4 *)(iVar3 + 0x12) = *(undefined4 *)(iVar1 + 0x408600a0);
    *(uint *)(iVar3 + 0x16) = uVar4 & 0xffff0000;
  }
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e616d65);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_118,_DAT_4bffe775 + _DAT_60000000 * 0x14);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_118,1);
  }
  iVar3 = 0;
  do {
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),iVar3 + 0x73696431
                                );
    if (piVar2 != (int *)0x0) {
      if (*(short *)((int)piVar2 + 0x82) != 0) {
        *(undefined2 *)((int)piVar2 + 0x82) = 0;
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x488));
      }
      if (_DAT_60000000 != *(short *)(piVar2 + 0x20)) {
        *(short *)(piVar2 + 0x20) = _DAT_60000000;
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
      }
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 3);
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x4c697374);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x8b0),(int)*(short *)(piVar2 + 0x20));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x8d8),(int)_DAT_93430000);
    if (_DAT_93430000 != 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x8f0),
                   (int)(short)(*(short *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xe0) + 1),0,1,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4b8),1);
    }
  }
  FUN_1005af24(param_1);
  return;
}



// Function: FUN_1005b4e8 at 1005b4e8
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b4e8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int local_134;
  undefined1 local_110 [260];
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e616d65);
  if (piVar1 != (int *)0x0) {
    local_110[0] = 0;
    FUN_10117884((int)*(short *)(*piVar1 + 0x7a0) + (int)piVar1,local_110);
    uVar2 = FUN_100b1b08(local_110);
    FUN_10001e78(**(int **)(local_134 + -0x544) + _DAT_60000000 * 0x14,uVar2);
  }
  FUN_10057e5c((int)_DAT_60000000,1,param_2);
  FUN_100586a0(param_2);
  return;
}



// Function: FUN_1005b5c0 at 1005b5c0
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b5c0(void)

{
  undefined4 local_2c;
  
  FUN_10001e78(_DAT_4bffe775 + _DAT_60000000 * 0x14,0x93a30004);
  *(undefined2 *)(_DAT_4bffe775 + _DAT_60000000 * 2 + 0xe0) = **(undefined2 **)(local_2c + -0x28c);
  return;
}



// Function: FUN_1005b62c at 1005b62c
// Size: 780 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b62c(short param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int local_16c;
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  short local_2c;
  
  iVar4 = (int)param_1;
  if (*(short *)(_DAT_4bffe775 + iVar4 * 2 + 0x138) == 0) {
    FUN_100586a0(param_2);
  }
  else {
    _DAT_809f0000 = *(undefined2 *)(_DAT_4bffe775 + iVar4 * 2 + 0xe0);
    _DAT_60000000 = param_1;
    FUN_10001e78(0x93a30004,_DAT_4bffe775 + iVar4 * 0x14);
    local_2c = 0;
    do {
      *(undefined2 *)(local_2c * 2 + 0x4082ffb8) = 0xffff;
      local_2c = local_2c + 1;
    } while (local_2c < 5);
    iVar4 = _DAT_4bffe775 + iVar4 * 2;
    if (*(short *)(iVar4 + 0xd0) == 1) {
      FUN_1003aeb0(7,(int)*(short *)(iVar4 + 0xc0),0xffffffff,0);
      local_2c = 0;
      do {
        sVar3 = local_2c;
        if (_DAT_93430000 <= local_2c) {
          sVar3 = -1;
        }
        *(short *)(local_2c * 2 + 0x4082ffb8) = sVar3;
        local_2c = local_2c + 1;
      } while (local_2c < 0x1e);
    }
    else {
      _DAT_93430000 = 0;
    }
    if (**(char **)(local_16c + -0x528) != '\0') {
      FUN_1008f3b4();
      puVar1 = (undefined4 *)FUN_100f56e4(0x84);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_1010598c(puVar1);
        *puVar1 = *(undefined4 *)(local_16c + -0x1908);
      }
    }
    piVar2 = (int *)FUN_10117884(**(int **)(local_16c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_16c + -0x1e4) + 200),0xbce
                                 ,*(undefined4 *)(**(int **)(local_16c + -0x554) + 0x88));
    FUN_100db26c();
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_3c = _DAT_41820010;
    _DAT_41820010 = auStack_144;
    iVar4 = FUN_10000090(auStack_144);
    if (iVar4 == 0) {
      FUN_1005b1c4(piVar2);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
      iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x328));
      if (iVar4 == 0x6f6b2020) {
        FUN_1005b4e8(piVar2,param_2);
      }
      else {
        FUN_1005b5c0();
      }
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
      _DAT_41820010 = local_3c;
    }
    else {
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
      }
      FUN_100db158((int)local_44,local_40);
    }
  }
  return;
}



// Function: FUN_1005b938 at 1005b938
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b938(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = _DAT_4bffe775 + iVar3 * 2;
    if (((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 1)) &&
       (*(short *)(iVar2 + 0xc0) != 3)) {
      FUN_1003aeb0(7,(int)*(short *)(iVar2 + 0xc0),0xffffffff,0);
      uVar1 = FUN_1005f230(1,(int)(short)(_DAT_93430000 + -1),0);
      *(undefined2 *)(iVar3 * 2 + _DAT_4bffe775 + 0xe0) = uVar1;
      FUN_10057e5c(iVar3,0,param_1);
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 8);
  FUN_100586a0(param_1);
  return;
}



// Function: FUN_1005ba1c at 1005ba1c
// Size: 460 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ba1c(short param_1,short param_2,undefined1 *param_3,undefined1 *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_b4;
  short local_90;
  short local_8e;
  undefined1 auStack_8c [50];
  undefined1 auStack_5a [54];
  
  piVar2 = (int *)FUN_100522dc(*(undefined4 *)(*(int *)(_DAT_57c407bd + 0x88) + 0x15c),1,0);
  bVar1 = false;
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x100));
    iVar3 = FUN_100525a0();
    iVar4 = FUN_100525a0((int)param_1);
    iVar5 = FUN_100525a0((int)param_2);
    iVar9 = 0;
    do {
      FUN_10052490(piVar2,&local_90,0x68);
      if ((local_90 == iVar4) && (local_8e == iVar5)) {
        bVar1 = true;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while ((!bVar1) && (iVar9 < iVar3));
    FUN_100523a8(piVar2,1);
    if (bVar1) {
      FUN_10001e78(param_3,auStack_8c);
      FUN_10001e78(param_4,auStack_5a);
    }
    else {
      puVar8 = *(undefined1 **)(local_b4 + -0x1904);
      *param_3 = *puVar8;
      *param_4 = puVar8[4];
    }
    iVar3 = FUN_100001e0(param_3,*(int *)(local_b4 + -0x1904) + 8);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_100001e0(param_4,*(int *)(local_b4 + -0x1904) + 0xc), iVar3 == 0)) {
      uVar6 = FUN_100525a0(iVar4);
      uVar7 = FUN_100525a0(iVar5);
      FUN_10001dd0(param_3,*(int *)(local_b4 + -0x1904) + 0x10,uVar6,uVar7);
    }
  }
  return;
}



// Function: FUN_1005bbe8 at 1005bbe8
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005bbe8(void)

{
  short sVar3;
  int iVar1;
  int iVar2;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x2b8));
  piVar4 = (int *)FUN_10052184(0x53474e20,10000,1);
  if (piVar4 != (int *)0x0) {
    sVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xb8));
    iVar5 = (int)sVar3;
    iVar1 = FUN_100f1640(iVar5);
    if (iVar1 != 0) {
      FUN_10052490(piVar4,iVar1,iVar5);
      FUN_100523a8(piVar4,1);
      iVar2 = FUN_100522dc(*(undefined4 *)(*(int *)(_DAT_57c407bd + 0x88) + 0x15c),6,0);
      if (iVar2 == 0) {
        FUN_100ef580(iVar1);
      }
      else {
        FUN_100524d4(iVar2,iVar1,iVar5);
        FUN_100523a8(iVar2,1);
        FUN_100ef580(iVar1);
      }
    }
  }
  return;
}



// Function: FUN_1005bd28 at 1005bd28
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005bd28(void)

{
  int iVar1;
  
  iVar1 = FUN_100522dc(*(undefined4 *)(*(int *)(_DAT_57c407bd + 0x88) + 0x15c),6,0);
  if (iVar1 != 0) {
    FUN_100524d4(iVar1,_DAT_90830008,(int)_DAT_907f0000);
    FUN_100523a8(iVar1,1);
    FUN_100ef580(_DAT_90830008);
  }
  return;
}



// Function: FUN_1005bdb8 at 1005bdb8
// Size: 1308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005bdb8(void)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  short sVar6;
  int iVar4;
  undefined4 uVar5;
  int *piVar7;
  int iVar8;
  int local_47c;
  undefined1 auStack_458 [256];
  undefined1 auStack_358 [256];
  undefined1 local_258 [256];
  undefined1 auStack_158 [256];
  short local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_40;
  
  if (_DAT_817f0000 != (short *)0x0) {
    bVar1 = false;
    if (*(char *)(_DAT_4bffe775 +
                  (*(uint *)(_DAT_38800000 + _DAT_817f0000[1] * 0xe0 + *_DAT_817f0000 * 2) >> 0x18)
                 + 0x711) == '\t') {
      piVar7 = *(int **)(_DAT_57c407bd + 0x88);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x228));
      piVar3 = (int *)FUN_100522dc(piVar7[0x57],1,0);
      if (piVar3 != (int *)0x0) {
        sVar6 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xb8));
        **(short **)(local_47c + -0x284) = sVar6;
        _DAT_90830008 = (short *)FUN_100f1640((int)sVar6);
        FUN_10052490(piVar3,_DAT_90830008,(int)sVar6);
        FUN_100523a8(piVar3,1);
        sVar6 = *_DAT_90830008;
        _DAT_41820054 = _DAT_90830008 + 1;
        iVar8 = 0;
        do {
          iVar4 = FUN_100525a0((int)_DAT_41820054[iVar8 * 0x34]);
          if ((iVar4 == *_DAT_817f0000) &&
             (iVar4 = FUN_100525a0((int)_DAT_41820054[iVar8 * 0x34 + 1]), iVar4 == _DAT_817f0000[1])
             ) {
            bVar1 = true;
          }
          sVar2 = (short)iVar8;
          iVar8 = (int)(short)(sVar2 + 1);
          if (bVar1) {
            local_40 = (int *)0x0;
            local_58 = 0;
            local_54 = 0;
            local_4c = 0;
            local_48 = 0;
            local_50 = _DAT_41820010;
            _DAT_2c1c0000 = sVar2;
            _DAT_41820010 = auStack_158;
            iVar8 = FUN_10000090(auStack_158);
            if (iVar8 == 0) {
              local_40 = (int *)FUN_10117884(**(int **)(local_47c + -0x1e4) +
                                             (int)*(short *)(*(int *)**(int **)(local_47c + -0x1e4)
                                                            + 200),0xf3c,piVar7);
              FUN_100db26c();
              piVar3 = (int *)FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x308),
                                           0x6c696e31);
              if (piVar3 != (int *)0x0) {
                FUN_100b19f4(auStack_358,_DAT_41820054 + _DAT_2c1c0000 * 0x34 + 2);
                FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_358,0);
              }
              piVar3 = (int *)FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x308),
                                           0x6c696e32);
              if (piVar3 != (int *)0x0) {
                FUN_100b19f4(auStack_458,_DAT_41820054 + _DAT_2c1c0000 * 0x34 + 0x1b);
                FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_458,0);
              }
              FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 800));
              iVar8 = FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x810));
              FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x328));
              if (iVar8 == 0x6f6b2020) {
                local_258[0] = 0;
                piVar3 = (int *)FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x308),
                                             0x6c696e31);
                if (piVar3 != (int *)0x0) {
                  FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7a0),local_258);
                  uVar5 = FUN_100b1b08(local_258);
                  FUN_10001e78(_DAT_41820054 + _DAT_2c1c0000 * 0x34 + 2,uVar5);
                }
                piVar3 = (int *)FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x308),
                                             0x6c696e32);
                if (piVar3 != (int *)0x0) {
                  FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7a0),local_258);
                  uVar5 = FUN_100b1b08(local_258);
                  FUN_10001e78(_DAT_41820054 + _DAT_2c1c0000 * 0x34 + 0x1b,uVar5);
                }
                FUN_1005bd28(local_40);
              }
              FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x738));
              _DAT_41820010 = (undefined1 *)local_50;
              return;
            }
            if (local_40 != (int *)0x0) {
              FUN_10117884((int)local_40 + (int)*(short *)(*local_40 + 0x738));
            }
            local_40 = (int *)0x0;
            FUN_100db158((int)local_58,local_54);
            return;
          }
        } while (iVar8 < sVar6);
        FUN_100ef580(_DAT_90830008);
      }
    }
  }
  return;
}



// Function: FUN_1005c2d4 at 1005c2d4
// Size: 768 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005c2d4(short param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  iVar5 = (int)*(short *)(_DAT_4bffe775 + 0x110);
  if (iVar5 == 0xf) {
    iVar5 = 8;
  }
  iVar5 = _DAT_4bffe775 + iVar5 * 0x1d + 0x60c;
  if ((param_1 != 0) && (iVar4 = 1, 1 < _DAT_281f0000)) {
    do {
      sVar1 = *(short *)(iVar4 * 2 + -0x7c40fffe);
      if ((((*(short *)(&DAT_83bf0004 + iVar4 * 2) < sVar1) ||
           ((*(short *)(&DAT_83bf0004 + iVar4 * 2) == sVar1 &&
            (*(char *)(iVar5 + *(char *)(*(int *)(iVar4 * 4 + -0x7e60fffc) + 4)) <
             *(char *)(iVar5 + *(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4)))))) &&
          (0 < iVar4)) &&
         ((sVar1 = *(short *)(iVar4 * 2 + -0x7c40fffe), iVar6 = iVar4,
          *(short *)(&DAT_83bf0004 + iVar4 * 2) < sVar1 ||
          ((*(short *)(&DAT_83bf0004 + iVar4 * 2) == sVar1 &&
           (*(char *)(iVar5 + *(char *)(*(int *)(iVar4 * 4 + -0x7e60fffc) + 4)) <
            *(char *)(iVar5 + *(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4)))))))) {
        while( true ) {
          iVar2 = iVar6 * 4;
          uVar8 = *(undefined4 *)(&DAT_819f0008 + iVar2);
          *(undefined4 *)(&DAT_819f0008 + iVar2) = *(undefined4 *)(iVar2 + -0x7e60fffc);
          *(undefined4 *)(iVar2 + -0x7e60fffc) = uVar8;
          iVar2 = iVar6 * 2;
          uVar7 = *(undefined2 *)(&DAT_83bf0004 + iVar2);
          *(undefined2 *)(&DAT_83bf0004 + iVar2) = *(undefined2 *)(iVar2 + -0x7c40fffe);
          *(undefined2 *)(iVar2 + -0x7c40fffe) = uVar7;
          uVar7 = *(undefined2 *)(&DAT_2c090000 + iVar2);
          *(undefined2 *)(&DAT_2c090000 + iVar2) = *(undefined2 *)(iVar2 + 0x2c08fffe);
          *(undefined2 *)(iVar2 + 0x2c08fffe) = uVar7;
          iVar6 = (int)(short)((short)iVar6 + -1);
          if (iVar6 < 1) break;
          sVar1 = *(short *)(iVar6 * 2 + -0x7c40fffe);
          if ((sVar1 <= *(short *)(&DAT_83bf0004 + iVar6 * 2)) &&
             ((*(short *)(&DAT_83bf0004 + iVar6 * 2) != sVar1 ||
              (*(char *)(iVar5 + *(char *)(*(int *)(&DAT_819f0008 + iVar6 * 4) + 4)) <=
               *(char *)(iVar5 + *(char *)(*(int *)(iVar6 * 4 + -0x7e60fffc) + 4)))))) break;
        }
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < _DAT_281f0000);
  }
  _DAT_40820010 = 0;
  iVar5 = 1;
  if (1 < _DAT_281f0000) {
    do {
      if (*(short *)(&DAT_83bf0004 + iVar5 * 2) == *(short *)(iVar5 * 2 + -0x7c40fffe)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = 0;
      }
      *(undefined2 *)(&DAT_40820010 + iVar5 * 2) = uVar7;
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < _DAT_281f0000);
  }
  bVar3 = false;
  iVar5 = 0;
  if (0 < _DAT_281f0000) {
    do {
      if (*(short *)(&DAT_2c090000 + iVar5 * 2) != 0) {
        bVar3 = true;
        iVar4 = 0;
        if (0 < _DAT_281f0000) goto LAB_1005c538;
        break;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < _DAT_281f0000);
  }
  goto LAB_1005c5a8;
LAB_1005c538:
  do {
    if (*(short *)(&DAT_2c090000 + iVar4 * 2) == 0) {
      if (*(short *)(&DAT_83bf0004 + iVar4 * 2) == *(short *)(&DAT_83bf0004 + iVar5 * 2))
      goto LAB_1005c578;
    }
    else if (*(short *)(&DAT_83bf0004 + iVar4 * 2) != *(short *)(&DAT_83bf0004 + iVar5 * 2)) {
LAB_1005c578:
      bVar3 = false;
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < _DAT_281f0000);
LAB_1005c5a8:
  if (bVar3) {
    _DAT_635f0000 = (undefined2)iVar5;
    *(undefined2 *)(&DAT_40820010 + iVar5 * 2) = 1;
  }
  else {
    _DAT_635f0000 = 0xffff;
  }
  return;
}



// Function: FUN_1005c5d4 at 1005c5d4
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005c5d4(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  short local_30 [4];
  
  sVar6 = -1;
  if (_DAT_8382fb2c == 0) {
    _DAT_7f8be040 = 1;
    _DAT_409e0034 = _DAT_817f0000;
  }
  FUN_1002122c((int)*_DAT_817f0000,(int)_DAT_817f0000[1],local_30);
  FUN_10021a3c((int)local_30[0],&DAT_80410014,0);
  iVar2 = (int)local_30[0];
  iVar3 = 0;
  uVar7 = 0xffffffff;
  if (0 < iVar2) {
    do {
      iVar4 = 0;
      bVar1 = false;
      if (0 < _DAT_7f8be040) {
        do {
          if (*(int *)(&DAT_409e0034 + iVar4 * 4) == *(int *)(&DAT_80410014 + iVar3 * 4)) {
            bVar1 = true;
            break;
          }
          iVar4 = (int)(short)((short)iVar4 + 1);
        } while (iVar4 < _DAT_7f8be040);
      }
      uVar5 = (uint)*(byte *)(*(int *)(&DAT_80410014 + iVar3 * 4) + 0x11);
      if (((uVar7 == uVar5) && (uVar5 != 0)) && (-1 < sVar6)) {
        *(undefined2 *)(&DAT_40820010 + iVar3 * 2) = 0xffff;
      }
      else {
        *(undefined2 *)(&DAT_40820010 + iVar3 * 2) = 0;
        sVar6 = sVar6 + 1;
      }
      *(short *)(&DAT_83bf0004 + iVar3 * 2) = sVar6;
      *(undefined4 *)(&DAT_819f0008 + iVar3 * 4) = *(undefined4 *)(&DAT_80410014 + iVar3 * 4);
      if (bVar1) {
        *(undefined2 *)(&DAT_2c090000 + iVar3 * 2) = 1;
      }
      else {
        *(undefined2 *)(&DAT_2c090000 + iVar3 * 2) = 0;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
      uVar7 = uVar5;
    } while (iVar3 < iVar2);
  }
  for (; iVar2 < 8; iVar2 = (int)(short)((short)iVar2 + 1)) {
    iVar3 = iVar2 * 2;
    *(undefined2 *)(&DAT_2c090000 + iVar3) = 0;
    *(undefined2 *)(&DAT_83bf0004 + iVar3) = 0xffff;
    *(undefined2 *)(&DAT_40820010 + iVar3) = 0xffff;
    *(undefined4 *)(&DAT_819f0008 + iVar2 * 4) = 0;
  }
  _DAT_281f0000 = local_30[0];
  FUN_1005c2d4(0);
  return;
}



// Function: FUN_1005c7b0 at 1005c7b0
// Size: 32 bytes

void FUN_1005c7b0(void)

{
  FUN_1005c5d4();
  return;
}



// Function: FUN_1005c7d0 at 1005c7d0
// Size: 1212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005c7d0(short param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar10;
  ushort uVar9;
  int iVar8;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ushort local_80 [8];
  short local_70 [8];
  ushort local_60 [8];
  ushort local_50 [10];
  
  sVar5 = _DAT_4182000c;
  sVar1 = *(short *)((int)_DAT_817f0000 + 0x12);
  sVar2 = *(short *)((int)_DAT_817f0000 + 0x14);
  _DAT_817f0000 = (short *)0x0;
  iVar14 = 0;
  do {
    *(undefined4 *)(&DAT_409e0034 + iVar14 * 4) = 0;
    iVar14 = (int)(short)((short)iVar14 + 1);
  } while (iVar14 < 8);
  iVar14 = 0;
  uVar12 = 0;
  uVar13 = uVar12;
  if (0 < _DAT_281f0000) {
    do {
      uVar12 = uVar13;
      if (*(short *)(&DAT_2c090000 + iVar14 * 2) != 0) {
        if (_DAT_817f0000 == (short *)0x0) {
          _DAT_817f0000 = *(short **)(&DAT_819f0008 + iVar14 * 4);
        }
        uVar12 = (uint)(short)((short)uVar13 + 1);
        iVar11 = *(int *)(&DAT_819f0008 + iVar14 * 4);
        *(int *)(&DAT_409e0034 + uVar13 * 4) = iVar11;
        *(ushort *)(iVar11 + 0xc) = *(ushort *)(iVar11 + 0xc) | 1;
      }
      iVar14 = (int)(short)((short)iVar14 + 1);
      uVar13 = uVar12;
    } while (iVar14 < _DAT_281f0000);
  }
  _DAT_7f8be040 = (short)uVar12;
  _DAT_8382fb2c =
       ((uVar12 < 2) + 2) - ((ushort)((uVar12 < 2) < 0xfffffffe) - (short)((int)uVar12 >> 0x1f)) & 1
  ;
  iVar14 = 1;
  if (1 < (int)uVar12) {
    do {
      *(short *)(*(int *)(&DAT_409e0034 + iVar14 * 4) + 0x12) = _DAT_817f0000[9];
      *(short *)(*(int *)(&DAT_409e0034 + iVar14 * 4) + 0x14) = _DAT_817f0000[10];
      iVar14 = (int)(short)((short)iVar14 + 1);
    } while (iVar14 < _DAT_7f8be040);
  }
  iVar14 = 0;
  iVar15 = 0;
  iVar11 = iVar14;
  if (0 < _DAT_281f0000) {
    do {
      iVar14 = iVar11;
      if ((*(char *)(*(int *)(&DAT_819f0008 + iVar15 * 4) + 0x11) != '\0') &&
         (*(char *)(*(int *)(&DAT_819f0008 + iVar15 * 4) + 0x11) != '\x01')) {
        iVar7 = 0;
        bVar10 = false;
        if (0 < iVar11) {
          do {
            if (local_50[iVar7] == (ushort)*(byte *)(*(int *)(&DAT_819f0008 + iVar15 * 4) + 0x11)) {
              bVar10 = true;
              break;
            }
            iVar7 = (int)(short)((short)iVar7 + 1);
          } while (iVar7 < iVar11);
        }
        if (!bVar10) {
          iVar14 = (int)(short)((short)iVar11 + 1);
          local_50[iVar11] = (ushort)*(byte *)(*(int *)(&DAT_819f0008 + iVar15 * 4) + 0x11);
        }
      }
      iVar15 = (int)(short)((short)iVar15 + 1);
      iVar11 = iVar14;
    } while (iVar15 < _DAT_281f0000);
  }
  iVar15 = 0;
  iVar11 = -1;
  if (0 < _DAT_281f0000) {
    do {
      if ((iVar15 == 0) ||
         (*(short *)(&DAT_83bf0004 + iVar15 * 2) != *(short *)(iVar15 * 2 + -0x7c40fffe))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        iVar11 = (int)(short)((short)iVar11 + 1);
        iVar7 = *(int *)(&DAT_819f0008 + iVar15 * 4);
        local_80[iVar11] = (ushort)*(byte *)(iVar7 + 0x11);
        local_70[iVar11] = 0;
        local_60[iVar11] = *(ushort *)(iVar7 + 0xc) & 1;
      }
      local_70[iVar11] = local_70[iVar11] + 1;
      iVar15 = (int)(short)((short)iVar15 + 1);
    } while (iVar15 < _DAT_281f0000);
  }
  iVar11 = (int)(short)((short)iVar11 + 1);
  iVar15 = 0;
  if (0 < iVar11) {
    do {
      if (local_70[iVar15] == 1) {
        if (local_60[iVar15] == 0) {
          uVar9 = 2;
        }
        else {
          uVar9 = 0;
        }
        local_60[iVar15] = uVar9;
      }
      else {
        if (local_60[iVar15] == 0) {
          uVar9 = 3;
        }
        else {
          uVar9 = 1;
        }
        local_60[iVar15] = uVar9;
      }
      iVar15 = (int)(short)((short)iVar15 + 1);
    } while (iVar15 < iVar11);
  }
  iVar7 = 0;
  iVar15 = 0;
  if (0 < iVar11) {
    do {
      if ((local_60[iVar7] == 2) || (local_60[iVar7] == 0)) {
        uVar6 = 0;
      }
      else if (local_60[iVar7] == 3) {
        uVar6 = 1;
      }
      else {
        iVar14 = (int)(short)((short)iVar14 + -1);
        if (iVar14 < 1) {
          uVar6 = FUN_10021d50();
        }
        else {
          uVar6 = (undefined1)local_50[iVar14];
        }
      }
      sVar3 = local_70[iVar7];
      sVar4 = (short)iVar15;
      for (iVar8 = iVar15; iVar8 < (short)(sVar4 + sVar3); iVar8 = (int)(short)((short)iVar8 + 1)) {
        *(undefined1 *)(*(int *)(&DAT_819f0008 + iVar15 * 4) + 0x11) = uVar6;
        iVar15 = (int)(short)((short)iVar15 + 1);
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < iVar11);
  }
  FUN_10041de8();
  if ((((param_1 == 0) && (_DAT_817f0000[9] == sVar1)) && (_DAT_817f0000[10] == sVar2)) &&
     (_DAT_4182000c == sVar5)) {
    FUN_10008284((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
    if (_DAT_7f8be040 < 2) {
      FUN_1002c8e8((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
    }
    else {
      FUN_1002c92c((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
    }
  }
  else {
    FUN_10007f78();
  }
  FUN_10117884((int)*(int **)(_DAT_57c407bd + 0x88) +
               (int)*(short *)(**(int **)(_DAT_57c407bd + 0x88) + 0x38),0,0);
  return;
}



// Function: FUN_1005cc8c at 1005cc8c
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005cc8c(void)

{
  int iVar1;
  
  _DAT_2c9effff = 0;
  iVar1 = FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x308),0x696e666f);
  if (iVar1 != 0) {
    FUN_100810e8(iVar1);
  }
  FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x4c8));
  return;
}



// Function: FUN_1005cd18 at 1005cd18
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1005cd18(void)

{
  int iVar1;
  
  if (_DAT_817f0000 == 0) {
    return 0;
  }
  if (_DAT_281f0000 != 1) {
    iVar1 = 0;
    if (0 < _DAT_281f0000) {
      do {
        if (*(short *)(&DAT_2c090000 + iVar1 * 2) == 0) {
          return 0;
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < _DAT_281f0000);
    }
    return 1;
  }
  return 1;
}



// Function: FUN_1005cd90 at 1005cd90
// Size: 620 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005cd90(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  short *psVar4;
  int local_74;
  undefined1 auStack_50 [60];
  
  _DAT_2c9effff = 1;
  if ((_DAT_90df0010 == 0) || (0xe0 < *(int *)(_DAT_90df0010 + 0x38))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((_DAT_90df0010 == 0) || (0x70 < *(int *)(_DAT_90df0010 + 0x38))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar3 = (undefined4 *)&DAT_80ff000c;
  }
  else if (bVar2) {
    puVar3 = (undefined4 *)&DAT_811f0010;
  }
  else {
    puVar3 = (undefined4 *)0x7f074040;
  }
  if (bVar1) {
    psVar4 = (short *)&DAT_41980024;
  }
  else if (bVar2) {
    psVar4 = (short *)0x813f0024;
  }
  else {
    psVar4 = (short *)&DAT_81890014;
  }
  FUN_1003206c(2,0xe0,0xff,0xf9);
  FUN_1004602c(8,_DAT_41860048,_DAT_4186004c,*puVar3,0x24,0xf);
  FUN_10001dd0(auStack_50,0x909f0008,
               (int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2));
  FUN_1005f1a0((int)*psVar4,(int)psVar4[1],auStack_50);
  FUN_1004602c(8,_DAT_41860050,_DAT_41860054,puVar3[1],0x24,0xf);
  FUN_10001dd0(auStack_50,*(int *)(local_74 + -0x1900) + 4,
               (int)*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186));
  FUN_1005f1a0((int)psVar4[2],(int)psVar4[3],auStack_50);
  FUN_1004602c(8,_DAT_41860058,_DAT_4186005c,puVar3[2],0x24,0xf);
  FUN_10001dd0(auStack_50,*(int *)(local_74 + -0x1900) + 0xc,
               (int)*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + *(int *)(local_74 + -0x274)))
  ;
  FUN_1005f1a0((int)psVar4[4],(int)psVar4[5],auStack_50);
  FUN_1004602c(8,_DAT_41860060,_DAT_41860064,puVar3[3],0x24,0xf);
  FUN_10001dd0(auStack_50,*(int *)(local_74 + -0x1900) + 0x14,
               (int)*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + *(int *)(local_74 + -0x270)))
  ;
  FUN_1005f1a0((int)psVar4[6],(int)psVar4[7],auStack_50);
  return;
}



// Function: FUN_1005cffc at 1005cffc
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005cffc(short param_1)

{
  short sVar1;
  int iVar2;
  
  FUN_10117884((int)*(int **)(_DAT_57c407bd + 0x88) +
               (int)*(short *)(**(int **)(_DAT_57c407bd + 0x88) + 0x228));
  sVar1 = *(short *)(&DAT_83bf0004 + param_1 * 2);
  iVar2 = 0;
  if (0 < _DAT_281f0000) {
    do {
      *(ushort *)(&DAT_2c090000 + iVar2 * 2) =
           (ushort)(*(short *)(&DAT_83bf0004 + iVar2 * 2) == sVar1);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_281f0000);
  }
  FUN_1005c2d4(0);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}



// Function: FUN_1005d0cc at 1005d0cc
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d0cc(short param_1)

{
  int iVar1;
  int iVar2;
  short local_10 [8];
  
  iVar1 = (int)param_1;
  if (*(short *)(&DAT_2c090000 + iVar1 * 2) == 0) {
    iVar2 = 0;
    if (0 < _DAT_281f0000) {
      do {
        if (*(short *)(&DAT_2c090000 + iVar2 * 2) != 0) {
          iVar2 = (int)*(short *)(&DAT_83bf0004 + iVar2 * 2);
          break;
        }
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < _DAT_281f0000);
    }
    iVar1 = iVar1 * 2;
    *(short *)(&DAT_83bf0004 + iVar1) = (short)iVar2;
    *(ushort *)(&DAT_2c090000 + iVar1) = (ushort)(*(short *)(&DAT_2c090000 + iVar1) == 0);
  }
  else {
    iVar2 = 0;
    do {
      local_10[iVar2] = 0;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    iVar2 = 0;
    if (0 < _DAT_281f0000) {
      do {
        local_10[*(short *)(&DAT_83bf0004 + iVar2 * 2)] =
             local_10[*(short *)(&DAT_83bf0004 + iVar2 * 2)] + 1;
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < _DAT_281f0000);
    }
    if (local_10[*(short *)(&DAT_83bf0004 + iVar1 * 2)] != 1) {
      iVar2 = 0;
      do {
        if (local_10[iVar2] == 0) break;
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < 8);
      iVar1 = iVar1 * 2;
      *(ushort *)(&DAT_2c090000 + iVar1) = (ushort)(*(short *)(&DAT_2c090000 + iVar1) == 0);
      *(short *)(&DAT_83bf0004 + iVar1) = (short)iVar2;
    }
  }
  FUN_1005c2d4(1);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}



// Function: FUN_1005d240 at 1005d240
// Size: 156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d240(void)

{
  int iVar1;
  
  if (_DAT_817f0000 != 0) {
    iVar1 = 0;
    if (0 < _DAT_281f0000) {
      do {
        *(undefined2 *)(&DAT_83bf0004 + iVar1 * 2) = 0;
        *(undefined2 *)(&DAT_2c090000 + iVar1 * 2) = 1;
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < _DAT_281f0000);
    }
    FUN_1005c2d4(1);
    FUN_1005c7d0(0);
    FUN_1005cc8c();
    FUN_1003dc28();
  }
  return;
}



// Function: FUN_1005d2dc at 1005d2dc
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d2dc(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < _DAT_281f0000) {
    do {
      *(short *)(&DAT_83bf0004 + iVar1 * 2) = (short)iVar1;
      *(undefined2 *)(&DAT_2c090000 + iVar1 * 2) = 0;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < _DAT_281f0000);
  }
  _DAT_2c090000 = 1;
  FUN_1005c2d4();
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}



// Function: FUN_1005d364 at 1005d364
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d364(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)param_3;
  iVar1 = (int)param_1;
  iVar2 = (int)param_2;
  if (_DAT_2c9effff == 0) {
    if ((int)uVar4 < 8) {
      if ((int)uVar4 < (int)_DAT_281f0000) {
        iVar3 = *(int *)(&DAT_819f0008 + uVar4 * 4);
        FUN_1000be58((int)*(char *)(iVar3 + 4),(int)*(char *)(iVar3 + 6),(int)*(char *)(iVar3 + 8),
                     (int)*(char *)(iVar3 + 0xb),(int)*(char *)(iVar3 + 7),
                     (int)*(char *)(iVar3 + 10),iVar1,iVar2);
      }
      else {
        FUN_1000a9e4(iVar1,iVar2,0);
        FUN_1000aaa8(0x909f0030,0x909f003c);
      }
    }
    else {
      FUN_1000a9e4(iVar1,iVar2,0);
      FUN_1000aaa8(0x909f0058,0x909f0068);
    }
  }
  else {
    FUN_1000a9e4(iVar1,iVar2,0);
    if (uVar4 < 4) {
      return;
    }
  }
  return;
}



// Function: FUN_1005d598 at 1005d598
// Size: 944 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d598(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar11;
  int iVar10;
  int iVar12;
  int iVar13;
  undefined1 auStack_8c [32];
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_58;
  int local_4c;
  short local_48;
  
  iVar10 = FUN_1011662c;
  iVar1 = FUN_100abd8c((int)*_DAT_817f0000,(int)_DAT_817f0000[1]);
  sVar11 = 0;
  iVar13 = 0;
  sVar6 = 0;
  sVar7 = 0;
  sVar4 = 0;
  sVar8 = 0;
  sVar9 = 0;
  sVar2 = 0;
  if (0 < _DAT_281f0000) {
    do {
      sVar6 = sVar2;
      if (*(short *)(&DAT_2c090000 + iVar13 * 2) != 0) {
        iVar12 = *(int *)(&DAT_819f0008 + iVar13 * 4);
        if ((*(ushort *)(iVar12 + 0xc) & 0x1000) == 0) {
          if (*(char *)(iVar12 + 4) == 0x1c) {
            sVar2 = FUN_100abe94(iVar12);
            iVar5 = (int)(short)(sVar2 + *(char *)(iVar12 + 8));
            if (8 < iVar5) {
              iVar5 = 9;
            }
            sVar2 = *(short *)(iVar5 * 2 + iVar10);
            sVar3 = FUN_100abf8c(iVar12);
            sVar11 = sVar3 + sVar11 + sVar2;
          }
          else {
            FUN_10049628((int)*(char *)(iVar12 + 4),auStack_8c);
            if (((local_5e == 0) || (iVar1 != 3)) || (local_5e <= sVar9)) {
              if (((local_60 == 0) || (iVar1 != 2)) || (local_60 <= sVar8)) {
                if (((local_62 == 0) || (iVar1 != 1)) || (local_62 <= sVar4)) {
                  if (((local_64 == 0) || (iVar1 != 0)) || (local_64 <= sVar7)) {
                    if (local_58 == 4) {
                      sVar6 = 1;
                    }
                  }
                  else {
                    sVar11 = sVar11 + (local_64 - sVar7);
                    sVar7 = local_64;
                  }
                }
                else {
                  sVar11 = sVar11 + (local_62 - sVar4);
                  sVar4 = local_62;
                }
              }
              else {
                sVar11 = sVar11 + (local_60 - sVar8);
                sVar8 = local_60;
              }
            }
            else {
              sVar11 = sVar11 + (local_5e - sVar9);
              sVar9 = local_5e;
            }
          }
        }
      }
      iVar13 = (int)(short)((short)iVar13 + 1);
      sVar2 = sVar6;
    } while (iVar13 < _DAT_281f0000);
  }
  sVar8 = sVar11 + sVar6;
  if (*(short *)(_DAT_4bffe775 + 0x112) < (short)(sVar11 + sVar6)) {
    sVar8 = *(short *)(_DAT_4bffe775 + 0x112);
  }
  iVar13 = 0;
  if (0 < _DAT_281f0000) {
    local_4c = iVar10;
    do {
      if (*(short *)(&DAT_2c090000 + iVar13 * 2) != 0) {
        iVar12 = *(int *)(&DAT_819f0008 + iVar13 * 4);
        iVar10 = (int)*(char *)(iVar12 + 4);
        *(short *)(iVar13 * 2 + param_1) = (short)*(char *)(iVar12 + 8);
        if (iVar10 != 0x1c) {
          FUN_10049628(iVar10,auStack_8c);
        }
        if ((*(ushort *)(iVar12 + 0xc) & 0x1000) == 0) {
          if (iVar10 == 0x1c) {
            sVar4 = FUN_100abe94(iVar12);
            *(short *)(param_1 + iVar13 * 2) = *(short *)(param_1 + iVar13 * 2) + sVar4;
          }
          else if ((local_66 == 0) || (iVar1 != 3)) {
            if ((local_68 == 0) || (iVar1 != 2)) {
              if ((local_6a == 0) || (iVar1 != 1)) {
                if ((local_6c != 0) && (iVar1 == 0)) {
                  *(short *)(param_1 + iVar13 * 2) = local_6c + *(short *)(param_1 + iVar13 * 2);
                }
              }
              else {
                *(short *)(param_1 + iVar13 * 2) = local_6a + *(short *)(param_1 + iVar13 * 2);
              }
            }
            else {
              *(short *)(param_1 + iVar13 * 2) = local_68 + *(short *)(param_1 + iVar13 * 2);
            }
          }
          else {
            *(short *)(param_1 + iVar13 * 2) = local_66 + *(short *)(param_1 + iVar13 * 2);
          }
        }
        else {
          *(undefined2 *)(param_1 + iVar13 * 2) = 4;
        }
        local_48 = *(short *)(param_1 + iVar13 * 2);
        sVar4 = local_48;
        if (8 < local_48) {
          sVar4 = 9;
        }
        *(short *)(param_1 + iVar13 * 2) = sVar4 + sVar8;
      }
      iVar13 = (int)(short)((short)iVar13 + 1);
    } while (iVar13 < _DAT_281f0000);
  }
  return;
}



// Function: FUN_1005d948 at 1005d948
// Size: 1084 bytes

undefined1 * FUN_1005d948(short param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_74;
  undefined1 auStack_50 [32];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  
  uVar1 = FUN_1005f678(0xa4,0);
  FUN_10001e78(&DAT_2c9f0000,uVar1);
  if ((param_2 == 0) || ((*(ushort *)(param_2 + 0xc) & 0x1000) == 0)) {
    if (param_1 == 0x1c) {
      if (param_2 != 0) {
        sVar2 = FUN_100abe94(param_2);
        iVar4 = (int)(short)(*(char *)(param_2 + 8) + sVar2);
        if (9 < iVar4) {
          iVar4 = 9;
        }
        sVar2 = *(short *)(iVar4 * 2 + *(int *)(local_74 + -0x1270));
        sVar3 = FUN_100abf8c(param_2);
        iVar4 = (int)(short)(sVar2 + sVar3);
        iVar5 = (int)*(short *)(**(int **)(local_74 + -0x544) + 0x112);
        if (iVar5 < iVar4) {
          iVar4 = iVar5;
        }
        uVar1 = FUN_1005f678(0xa4,2);
        FUN_10001dd0(&DAT_2c9f0000,uVar1,iVar4);
        goto LAB_1005dd68;
      }
    }
    else {
      FUN_10049628((int)param_1,auStack_50);
    }
    if (local_1c == 2) {
      uVar1 = FUN_1005f678(0xa4,3);
      FUN_10001e78(&DAT_2c9f0000,uVar1);
    }
    else if (local_1c == 3) {
      uVar1 = FUN_1005f678(0xa4,4);
      FUN_10001e78(&DAT_2c9f0000,uVar1);
    }
    else if (local_20 == 0) {
      if ((((local_22 == 0) || (local_24 == 0)) || (local_26 == 0)) || (local_28 == 0)) {
        if (local_1c == 1) {
          uVar1 = FUN_1005f678(0xa4,6);
          FUN_10001e78(&DAT_2c9f0000,uVar1);
        }
        else if (local_1e == 0) {
          if (local_22 == 0) {
            if (local_24 == 0) {
              if (local_26 == 0) {
                if (local_28 == 0) {
                  if (local_2a == 0) {
                    if (local_2c == 0) {
                      if (local_2e == 0) {
                        if (local_30 != 0) {
                          uVar1 = FUN_1005f678(0xa4,0xf);
                          FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_30);
                        }
                      }
                      else {
                        uVar1 = FUN_1005f678(0xa4,0xe);
                        FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_2e);
                      }
                    }
                    else {
                      uVar1 = FUN_1005f678(0xa4,0xd);
                      FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_2c);
                    }
                  }
                  else {
                    uVar1 = FUN_1005f678(0xa4,0xc);
                    FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_2a);
                  }
                }
                else {
                  uVar1 = FUN_1005f678(0xa4,0xb);
                  FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_28);
                }
              }
              else {
                uVar1 = FUN_1005f678(0xa4,10);
                FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_26);
              }
            }
            else {
              uVar1 = FUN_1005f678(0xa4,9);
              FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_24);
            }
          }
          else {
            uVar1 = FUN_1005f678(0xa4,8);
            FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_22);
          }
        }
        else {
          uVar1 = FUN_1005f678(0xa4,7);
          FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_1e);
        }
      }
      else {
        uVar1 = FUN_1005f678(0xa4,0x10);
        FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_28);
      }
    }
    else {
      uVar1 = FUN_1005f678(0xa4,5);
      FUN_10001dd0(&DAT_2c9f0000,uVar1,(int)local_26);
    }
  }
  else {
    uVar1 = FUN_1005f678(0xa4,1);
    FUN_10001e78(&DAT_2c9f0000,uVar1);
  }
LAB_1005dd68:
  return &DAT_2c9f0000;
}



// Function: FUN_1005dd84 at 1005dd84
// Size: 2324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005dd84(short param_1,short param_2,short param_3)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  short sVar6;
  undefined4 uVar5;
  int iVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  short sStack00000022;
  int local_19c;
  undefined1 auStack_178 [16];
  undefined4 local_168 [2];
  undefined1 auStack_160 [256];
  short asStack_60 [8];
  short local_50;
  
  sStack00000022 = param_3;
  piVar3 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x73746163);
  if ((piVar3 != (int *)0x0) &&
     (iVar4 = FUN_10117884((int)*(short *)(*piVar3 + 0x3a8) + (int)piVar3), iVar4 != 0)) {
    if (param_1 != 0) {
      FUN_10001dd0(&DAT_2c9f0000,*(int *)(local_19c + -0x1900) + 0x104,
                   (int)*(short *)(_DAT_4bffe775 + 0x112));
      piVar3 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                                   0x6d617862);
      if (piVar3 != (int *)0x0) {
        FUN_100b19f4(auStack_160,&DAT_2c9f0000);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_160,1);
      }
    }
    FUN_1005d598(asStack_60);
    sVar9 = sStack00000022;
    local_50 = sStack00000022;
    if (param_2 == 0) {
      local_50 = 0;
      sVar9 = 7;
    }
    FUN_1003206c(2,0xe0,0xff,0xf9);
    iVar4 = 0;
    if (0 < _DAT_281f0000) {
      do {
        piVar3 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                                     iVar4 + 0x63686530);
        if (piVar3 != (int *)0x0) {
          if (*(short *)(&DAT_40820010 + iVar4 * 2) != -1) {
            FUN_100850e8(piVar3,8,*(short *)(&DAT_40820010 + iVar4 * 2) * 8 + -0x7c3d04c8,0x24,0xf,1
                        );
          }
          if (piVar3 != (int *)0x0) {
            iVar7 = -(int)*(short *)(&DAT_40820010 + iVar4 * 2) + -1;
            FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x660),
                         iVar7 + (-(uint)(iVar7 == 0) -
                                 (-(int)*(short *)(&DAT_40820010 + iVar4 * 2) + -2)) & 0xff,1);
            iVar7 = -(int)*(short *)(&DAT_40820010 + iVar4 * 2) + -1;
            FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),
                         iVar7 + (-(uint)(iVar7 == 0) -
                                 (-(int)*(short *)(&DAT_40820010 + iVar4 * 2) + -2)) & 0xff);
          }
        }
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < _DAT_281f0000);
    }
    for (; sVar2 = local_50, iVar4 < 8; iVar4 = (int)(short)((short)iVar4 + 1)) {
      piVar3 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                                   iVar4 + 0x63686530);
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),0);
      }
    }
    for (; iVar4 = (int)sVar2, iVar4 <= sVar9; sVar2 = sVar2 + 1) {
      piVar3 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                                   iVar4 + 0x61726d30);
      if (piVar3 != (int *)0x0) {
        if (iVar4 < _DAT_281f0000) {
          uVar8 = (int)*(short *)(_DAT_4bffe775 + 0x110) +
                  (int)*(short *)(&DAT_83bf0004 + iVar4 * 2);
          sVar6 = *(short *)(&DAT_2c090000 + iVar4 * 2);
          FUN_10079ee8(piVar3,(int)*(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4),
                       (int)*(short *)(_DAT_4bffe775 + 0x110),1);
          FUN_1007a018(piVar3,(int)(short)((short)uVar8 +
                                           (short)(((int)uVar8 >> 3) +
                                                  (uint)((int)uVar8 < 0 && (uVar8 & 7) != 0)) * -8 +
                                          2),0,sVar6 == 0,1);
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),1);
          iVar7 = (int)*(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4);
          if (iVar7 == 0x1c) {
LAB_1005e27c:
            iVar7 = iVar4 * 4;
            FUN_1005f1a0((int)(short)(*(short *)(&DAT_57c4063e + iVar7) + 0x30),
                         (int)(short)(*(short *)(iVar7 + 0x57c40640) + 5),
                         _DAT_4bffe775 + *(char *)(*(int *)(&DAT_819f0008 + iVar7) + 10) * 0x14 +
                         0x224);
          }
          else {
            if ((*(char *)(_DAT_281f0000 + iVar7 * 6 + 4) == '\0') &&
               (uVar8 = 0, '\0' < *(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 10))) {
              do {
                iVar7 = iVar4 * 4;
                FUN_1002269c(local_168,
                             (int)(short)(*(short *)(&DAT_57c4063e + iVar7) +
                                          (short)(((int)uVar8 >> 1) +
                                                 (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0)) * 8 +
                                         0x20),
                             (int)(short)(*(short *)(iVar7 + 0x57c40640) +
                                          ((short)uVar8 +
                                          ((short)((int)uVar8 >> 1) +
                                          (ushort)((int)uVar8 < 0 && (uVar8 & 1) != 0)) * -2) * 9 +
                                         8));
                FUN_1004602c(8,*(undefined4 *)(&DAT_7c7f1814 + uVar8 * 8),
                             *(undefined4 *)(&DAT_7c7f1818 + uVar8 * 8),local_168[0],0x24,0xf);
                uVar8 = (uint)(short)((short)uVar8 + 1);
              } while ((int)uVar8 < (int)*(char *)(*(int *)(&DAT_819f0008 + iVar7) + 10));
            }
            if (*(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4) == '\x1c') goto LAB_1005e27c;
            iVar7 = iVar4 * 4;
            uVar5 = FUN_1004a21c((int)*(char *)(*(int *)(&DAT_819f0008 + iVar7) + 4));
            FUN_1005f1a0((int)(short)(*(short *)(&DAT_57c4063e + iVar7) + 0x30),
                         (int)(short)(*(short *)(iVar7 + 0x57c40640) + 5),uVar5);
          }
          iVar7 = *(int *)(&DAT_819f0008 + iVar4 * 4);
          cVar1 = *(char *)(iVar7 + 8);
          iVar10 = (int)cVar1;
          if (*(char *)(iVar7 + 4) == '\x1c') {
            sVar6 = FUN_100abe94(iVar7);
            iVar10 = (int)(short)(cVar1 + sVar6);
          }
          if (9 < iVar10) {
            iVar10 = 9;
          }
          FUN_10001dd0(auStack_178,*(int *)(local_19c + -0x1900) + 0x110,iVar10);
          iVar7 = iVar4 * 4;
          FUN_1005f1a0((int)(short)(*(short *)(&DAT_57c4063e + iVar7) + 0xa8),
                       (int)(short)(*(short *)(iVar7 + 0x57c40640) + 5),auStack_178);
          if (*(short *)(&DAT_2c090000 + iVar4 * 2) != 0) {
            FUN_10001dd0(auStack_178,*(int *)(local_19c + -0x1900) + 0x114,(int)asStack_60[iVar4]);
            FUN_1005f1a0((int)(short)(*(short *)(&DAT_57c4063e + iVar7) + 0xb8),
                         (int)(short)(*(short *)(iVar7 + 0x57c40640) + 5),auStack_178);
          }
          iVar7 = iVar4 * 4;
          FUN_10001dd0(auStack_178,*(int *)(local_19c + -0x1900) + 0x11c,
                       (int)*(char *)(*(int *)(&DAT_819f0008 + iVar7) + 7));
          FUN_1005f1a0((int)(short)(*(short *)(&DAT_57c4063e + iVar7) + 0xe8),
                       (int)(short)(*(short *)(iVar7 + 0x57c40640) + 5),auStack_178);
          FUN_1002269c(local_168,(int)(short)(*(short *)(&DAT_57c4063e + iVar7) + 0x100),
                       (int)(short)(*(short *)(iVar7 + 0x57c40640) + 8));
          iVar10 = (int)*(char *)(*(int *)(&DAT_819f0008 + iVar7) + 4);
          if ((*(char *)(_DAT_281f0000 + iVar10 * 6) == '\0') &&
             ((iVar10 != 0x1c || (iVar7 = FUN_10039e24(*(int *)(&DAT_819f0008 + iVar7)), iVar7 == 0)
              ))) {
            if ((*(ushort *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 0xc) & 0x1000) == 0) {
              iVar7 = _DAT_281f0000 + *(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4) * 6;
              if (*(char *)(iVar7 + 1) == '\0') {
                if (*(char *)(_DAT_281f0000 + *(char *)(*(int *)(&DAT_819f0008 + iVar4 * 4) + 4) * 6
                             + 2) != '\0') {
                  FUN_1004602c(8,_DAT_60000000,_DAT_60000004,local_168[0],0x24,0xf);
                }
              }
              else if (*(char *)(iVar7 + 2) == '\0') {
                FUN_1004602c(8,**(undefined4 **)(local_19c + -0x132c),
                             *(undefined4 *)(*(int *)(local_19c + -0x132c) + 4),local_168[0],0x24,
                             0xf);
              }
              else {
                FUN_1004602c(8,**(undefined4 **)(local_19c + -0x1330),
                             (*(undefined4 **)(local_19c + -0x1330))[1],local_168[0],0x24,0xf);
              }
            }
            else {
              FUN_1004602c(8,**(undefined4 **)(local_19c + -0x1538),
                           (*(undefined4 **)(local_19c + -0x1538))[1],local_168[0],0x24,0xf);
            }
          }
          else {
            FUN_1004602c(8,**(undefined4 **)(local_19c + -0x1334),
                         *(undefined4 *)(*(int *)(local_19c + -0x1334) + 4),local_168[0],0x24,0xf);
          }
          iVar4 = iVar4 * 4;
          uVar5 = FUN_1005d948((int)*(char *)(*(int *)(&DAT_819f0008 + iVar4) + 4));
          FUN_1005f1a0((int)(short)(*(short *)(&DAT_57c4063e + iVar4) + 0x130),
                       (int)(short)(*(short *)(iVar4 + 0x57c40640) + 5),uVar5);
        }
        else {
          FUN_10079ee8(piVar3,0xffffffff,(int)*(short *)(_DAT_4bffe775 + 0x110),1);
          FUN_1007a018(piVar3,1,0,0,1);
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),0);
        }
      }
    }
  }
  return;
}



// Function: FUN_1005e698 at 1005e698
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e698(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x67726f75);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,
                 (uint)((uint)(int)_DAT_281f0000 < 2) - ((int)_DAT_281f0000 >> 0x1f),1);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x756e6772);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,
                 (uint)((uint)(int)_DAT_281f0000 < 2) - ((int)_DAT_281f0000 >> 0x1f),1);
  }
  return;
}



// Function: FUN_1005e794 at 1005e794
// Size: 48 bytes

void FUN_1005e794(void)

{
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  return;
}



// Function: FUN_1005e7c4 at 1005e7c4
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e7c4(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_281f0000 = _DAT_480018b1;
  iVar2 = 0;
  if (0 < _DAT_480018b1) {
    do {
      *(undefined4 *)(&DAT_819f0008 + iVar2 * 4) = *(undefined4 *)(iVar2 * 4 + -0x6ebeffc8);
      iVar1 = iVar2 * 2;
      *(undefined2 *)(&DAT_83bf0004 + iVar1) = *(undefined2 *)(iVar1 + 0x39400000);
      *(undefined2 *)(&DAT_2c090000 + iVar1) = *(undefined2 *)(&DAT_63e30000 + iVar1);
      *(undefined2 *)(&DAT_40820010 + iVar1) = *(undefined2 *)(iVar1 + 0x40850044);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_281f0000);
  }
  _DAT_635f0000 = _DAT_61440000;
  return;
}



// Function: FUN_1005e858 at 1005e858
// Size: 548 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e858(void)

{
  int iVar1;
  int iVar2;
  int local_154;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (_DAT_817f0000 != 0) {
    _DAT_480018b1 = _DAT_281f0000;
    iVar2 = 0;
    if (0 < _DAT_281f0000) {
      do {
        *(undefined4 *)(iVar2 * 4 + -0x6ebeffc8) = *(undefined4 *)(&DAT_819f0008 + iVar2 * 4);
        iVar1 = iVar2 * 2;
        *(undefined2 *)(iVar1 + 0x39400000) = *(undefined2 *)(&DAT_83bf0004 + iVar1);
        *(undefined2 *)(&DAT_63e30000 + iVar1) = *(undefined2 *)(&DAT_2c090000 + iVar1);
        *(undefined2 *)(iVar1 + 0x40850044) = *(undefined2 *)(&DAT_40820010 + iVar1);
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < _DAT_480018b1);
    }
    _DAT_61440000 = _DAT_635f0000;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = _DAT_41820010;
    _DAT_41820010 = auStack_130;
    iVar2 = FUN_10000090(auStack_130);
    if (iVar2 == 0) {
      _DAT_a8690010 =
           (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                               (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),0xe24,
                               *(undefined4 *)(**(int **)(local_154 + -0x554) + 0x88));
      FUN_100db26c();
      FUN_1005dd84(1,0,0xffffffff);
      FUN_1005e698();
      FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 800));
      iVar2 = FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x810));
      if (iVar2 == 0x6f6b2020) {
        FUN_1005e794();
      }
      else {
        FUN_1005e7c4();
      }
      FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x738));
      _DAT_a8690010 = (int *)0x0;
      _DAT_41820010 = local_28;
    }
    else {
      if (_DAT_a8690010 != (int *)0x0) {
        FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x738));
      }
      _DAT_a8690010 = (int *)0x0;
      FUN_100db158((int)local_30,local_2c);
    }
  }
  return;
}



// Function: FUN_1005ea7c at 1005ea7c
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ea7c(short param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short local_10 [8];
  
  iVar1 = (int)param_1;
  if (*(short *)(&DAT_2c090000 + iVar1 * 2) == 0) {
    iVar3 = 0;
    if (0 < _DAT_281f0000) {
      do {
        if (*(short *)(&DAT_2c090000 + iVar3 * 2) != 0) {
          iVar3 = (int)*(short *)(&DAT_83bf0004 + iVar3 * 2);
          break;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < _DAT_281f0000);
    }
    iVar1 = iVar1 * 2;
    *(short *)(&DAT_83bf0004 + iVar1) = (short)iVar3;
    *(ushort *)(&DAT_2c090000 + iVar1) = (ushort)(*(short *)(&DAT_2c090000 + iVar1) == 0);
  }
  else {
    iVar3 = 0;
    do {
      local_10[iVar3] = 0;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar3 = 0;
    if (0 < _DAT_281f0000) {
      do {
        local_10[*(short *)(&DAT_83bf0004 + iVar3 * 2)] =
             local_10[*(short *)(&DAT_83bf0004 + iVar3 * 2)] + 1;
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < _DAT_281f0000);
    }
    if (local_10[*(short *)(&DAT_83bf0004 + iVar1 * 2)] != 1) {
      iVar3 = 0;
      do {
        if (local_10[iVar3] == 0) break;
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 8);
      iVar1 = iVar1 * 2;
      *(ushort *)(&DAT_2c090000 + iVar1) = (ushort)(*(short *)(&DAT_2c090000 + iVar1) == 0);
      *(short *)(&DAT_83bf0004 + iVar1) = (short)iVar3;
    }
  }
  FUN_1005c2d4(1);
  FUN_1005dd84(0,0,0xffffffff);
  piVar2 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x73746163);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  FUN_1005e698();
  return;
}



// Function: FUN_1005ec38 at 1005ec38
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ec38(short param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)(&DAT_83bf0004 + param_1 * 2);
  iVar3 = 0;
  if (0 < _DAT_281f0000) {
    do {
      *(ushort *)(&DAT_2c090000 + iVar3 * 2) =
           (ushort)(*(short *)(&DAT_83bf0004 + iVar3 * 2) == sVar1);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < _DAT_281f0000);
  }
  FUN_1005c2d4(0);
  FUN_1005dd84(0,0,0xffffffff);
  piVar2 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x73746163);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
  }
  FUN_1005e698();
  return;
}



// Function: FUN_1005ed24 at 1005ed24
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ed24(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_281f0000) {
    do {
      *(undefined2 *)(&DAT_83bf0004 + iVar2 * 2) = 0;
      *(undefined2 *)(&DAT_2c090000 + iVar2 * 2) = 1;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_281f0000);
  }
  FUN_1005c2d4(1);
  FUN_1005dd84(0,0,0xffffffff);
  piVar1 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x73746163);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  FUN_1005e698();
  return;
}



// Function: FUN_1005edf4 at 1005edf4
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005edf4(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_281f0000) {
    do {
      *(short *)(&DAT_83bf0004 + iVar2 * 2) = (short)iVar2;
      *(undefined2 *)(&DAT_2c090000 + iVar2 * 2) = 0;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_281f0000);
  }
  _DAT_2c090000 = 1;
  FUN_1005c2d4(1);
  FUN_1005dd84(0,0,0xffffffff);
  piVar1 = (int *)FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x308),
                               0x73746163);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  FUN_1005e698();
  return;
}



// Function: FUN_1005eec8 at 1005eec8
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005eec8(short param_1,short param_2,short param_3)

{
  int iVar1;
  
  if ((int)param_1 < (int)_DAT_281f0000) {
    iVar1 = *(int *)(&DAT_819f0008 + param_1 * 4);
    FUN_1000be58((int)*(char *)(iVar1 + 4),(int)*(char *)(iVar1 + 6),(int)*(char *)(iVar1 + 8),
                 (int)*(char *)(iVar1 + 0xb),(int)*(char *)(iVar1 + 7),(int)*(char *)(iVar1 + 10),
                 (int)param_2,(int)param_3);
  }
  else {
    FUN_1000a9e4((int)param_2,(int)param_3,0);
    FUN_1000aaa8(0x909f0128,0x909f0134);
  }
  return;
}



// Function: FUN_1005ef84 at 1005ef84
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005ef84(void)

{
  int iVar1;
  int local_154;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  _DAT_4086003c = 0;
  if ((_DAT_41820014 != 0) || (_DAT_41820014 = FUN_100f1640(0x3a), _DAT_41820014 != 0)) {
    iVar1 = 0;
    do {
      *(short *)(_DAT_41820014 +
                *(char *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + iVar1 + 0x60c)
                * 2) = (short)iVar1;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 0x1d);
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = _DAT_41820010;
    _DAT_41820010 = auStack_130;
    iVar1 = FUN_10000090(auStack_130);
    if (iVar1 == 0) {
      _DAT_a8690010 =
           (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                               (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),0xe10,
                               *(undefined4 *)(**(int **)(local_154 + -0x554) + 0x88));
      FUN_100db26c();
      FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 800));
      FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x810));
      FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x738));
      _DAT_a8690010 = (int *)0x0;
      _DAT_41820010 = local_28;
    }
    else {
      if (_DAT_a8690010 != (int *)0x0) {
        FUN_10117884((int)_DAT_a8690010 + (int)*(short *)(*_DAT_a8690010 + 0x738));
      }
      _DAT_a8690010 = (int *)0x0;
      FUN_100db158((int)local_30,local_2c);
    }
  }
  return;
}



// Function: FUN_1005f144 at 1005f144
// Size: 92 bytes

void FUN_1005f144(short param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10001a88();
  uVar2 = FUN_10001a88();
  while (uVar2 < (uint)(iVar1 + param_1 * 3)) {
    uVar2 = FUN_10001a88();
  }
  return;
}



// Function: FUN_1005f1a0 at 1005f1a0
// Size: 48 bytes

void FUN_1005f1a0(short param_1,short param_2,undefined4 param_3)

{
  FUN_10032860((int)param_1,(int)param_2,param_3,0xfffffffe);
  return;
}



// Function: FUN_1005f1d0 at 1005f1d0
// Size: 48 bytes

void FUN_1005f1d0(short param_1,short param_2,undefined4 param_3)

{
  FUN_10032860((int)param_1,(int)param_2,param_3,1);
  return;
}



// Function: FUN_1005f200 at 1005f200
// Size: 48 bytes

void FUN_1005f200(short param_1,short param_2,undefined4 param_3)

{
  FUN_10032860((int)param_1,(int)param_2,param_3,0xffffffff);
  return;
}



// Function: FUN_1005f230 at 1005f230
// Size: 252 bytes

int FUN_1005f230(short param_1,short param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int local_54;
  short sStack_1a;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0) {
    iVar1 = (int)param_3;
  }
  else {
    iVar7 = (int)param_1;
    sVar5 = 0;
    iVar1 = 0;
    if (0 < iVar7) {
      do {
        uVar2 = FUN_10002970();
        pdVar4 = *(double **)(local_54 + -0x18c8);
        sStack_1a = (short)(int)((ABS((double)(float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000
                                                                      ) - pdVar4[2])) / *pdVar4) *
                                 (double)(float)((double)CONCAT44(0x43300000,uVar3 ^ 0x80000000) -
                                                pdVar4[2]) + pdVar4[1]);
        sVar5 = sVar5 + sStack_1a;
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < iVar7);
    }
    iVar1 = (int)(short)(sVar5 + param_3);
    iVar6 = param_3 + iVar7;
    if (iVar1 < iVar6) {
      iVar1 = (int)(short)iVar6;
    }
    else {
      iVar7 = iVar7 * uVar3 + (int)param_3;
      if (iVar7 < iVar1) {
        iVar1 = (int)(short)iVar7;
      }
    }
  }
  return iVar1;
}



// Function: FUN_1005f32c at 1005f32c
// Size: 64 bytes

void FUN_1005f32c(void)

{
  int local_2c;
  undefined4 local_8;
  
  FUN_10001908(&local_8);
  *(undefined4 *)(*(int *)(local_2c + -0xb0) + 0x4c) = local_8;
  return;
}



// Function: FUN_1005f36c at 1005f36c
// Size: 268 bytes

bool FUN_1005f36c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte local_118 [260];
  
  FUN_100b19f4(local_118);
  if (local_118[(short)(local_118[0] - 3)] == 0x2e) {
    local_118[0] = local_118[0] - 4;
  }
  uVar1 = FUN_100b1b90(local_118,&DAT_8041002c,1);
  FUN_100b1c88(local_118,1,uVar1);
  uVar1 = FUN_100b1b90(local_118,&DAT_80410030,1);
  FUN_100b1c88(local_118,1,uVar1);
  uVar1 = FUN_10000420();
  FUN_10003450(0);
  uVar2 = FUN_100b1c84(local_118);
  iVar3 = FUN_10003540(param_1,uVar2);
  FUN_10003450(uVar1);
  return iVar3 != 0;
}



// Function: FUN_1005f478 at 1005f478
// Size: 148 bytes

void FUN_1005f478(void)

{
  undefined4 uVar1;
  undefined4 local_24;
  
  uVar1 = FUN_10002238(0x44415420,0x80410034);
  **(undefined4 **)(local_24 + -600) = uVar1;
  FUN_100db328();
  uVar1 = FUN_10002238(0x44415420,*(int *)(local_24 + -0x18c8) + 0x28);
  **(undefined4 **)(local_24 + -0x254) = uVar1;
  FUN_100db328();
  uVar1 = FUN_10002238(0x44415420,*(int *)(local_24 + -0x18c8) + 0x30);
  **(undefined4 **)(local_24 + -0x250) = uVar1;
  FUN_100db328();
  return;
}



// Function: FUN_1005f50c at 1005f50c
// Size: 364 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005f50c(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = (int)param_3;
  *(undefined1 *)(_DAT_809f000c * 0x50 + 0x61480000) = 0;
  iVar1 = param_1 * 4;
  FUN_10000b70(**(undefined4 **)(&DAT_48000018 + iVar1));
  piVar5 = (int *)**(undefined4 **)(&DAT_48000018 + iVar1);
  if (piVar5 != (int *)0x0) {
    FUN_10002598(piVar5);
  }
  iVar3 = *piVar5;
  iVar1 = FUN_100525a0((int)*(short *)(param_2 * 4 + iVar3));
  iVar2 = FUN_100525a0((int)*(short *)(param_2 * 4 + iVar3 + 2));
  if (iVar6 < 0) {
    iVar6 = FUN_1005f230(1,iVar2,0xffffffff);
  }
  if (iVar2 + -1 < iVar6) {
    iVar6 = (int)(short)(iVar2 + -1);
  }
  iVar1 = FUN_100525a0((int)*(short *)(iVar3 + iVar1 + iVar6 * 2));
  FUN_10001e78(_DAT_809f000c * 0x50 + 0x61480000,iVar3 + iVar1);
  if (**(int **)(&DAT_48000018 + param_1 * 4) != 0) {
    FUN_10002ad8(**(int **)(&DAT_48000018 + param_1 * 4));
  }
  iVar1 = (int)_DAT_809f000c;
  uVar4 = iVar1 + 1;
  _DAT_809f000c =
       (short)uVar4 + (short)(((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0)) * -8;
  return iVar1 * 0x50 + 0x61480000;
}



// Function: FUN_1005f678 at 1005f678
// Size: 56 bytes

void FUN_1005f678(short param_1,short param_2)

{
  FUN_1005f50c(0,(int)param_1,(int)param_2);
  return;
}



// Function: FUN_1005f6b0 at 1005f6b0
// Size: 56 bytes

void FUN_1005f6b0(short param_1,short param_2)

{
  FUN_1005f50c(1,(int)param_1,(int)param_2);
  return;
}



// Function: FUN_1005f6e8 at 1005f6e8
// Size: 80 bytes

void FUN_1005f6e8(int *param_1,short *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  *param_2 = pcVar1[1] * 10 + *pcVar1 * 100 + (short)pcVar1[2] + -0x14d0;
  *param_1 = *param_1 + 3;
  return;
}



// Function: FUN_1005f738 at 1005f738
// Size: 340 bytes

int FUN_1005f738(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  short sVar7;
  char *pcVar6;
  short local_20 [2];
  char *local_1c;
  
  local_20[0] = 0;
  piVar4 = (int *)FUN_10051f98(0x47465820,param_1,1);
  bVar2 = false;
  if (piVar4 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar7 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xb8));
    pcVar6 = (char *)FUN_100f1640((int)sVar7);
    if (pcVar6 != (char *)0x0) {
      local_1c = pcVar6;
      FUN_10052490(piVar4,pcVar6,(int)sVar7);
      do {
        cVar1 = *local_1c;
        pcVar3 = local_1c;
        while (cVar1 != '#') {
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
        }
        local_1c = pcVar3 + 2;
        if (pcVar3[1] == 'D') {
          FUN_1005f6e8(&local_1c,local_20);
          bVar2 = true;
        }
        else if (pcVar3[1] == 'E') {
          bVar2 = true;
        }
      } while (!bVar2);
      FUN_100ef580(pcVar6);
    }
    FUN_100523a8(piVar4,1);
    iVar5 = (int)local_20[0];
  }
  return iVar5;
}



// Function: FUN_1005f88c at 1005f88c
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005f88c(int *param_1,short *param_2)

{
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 1);
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + _DAT_61490000;
  param_2[1] = param_2[1] + _DAT_638c0000;
  return;
}



// Function: FUN_1005f97c at 1005f97c
// Size: 152 bytes

void FUN_1005f97c(int *param_1,int param_2)

{
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 2);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 4);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 6);
  *param_1 = *param_1 + 1;
  return;
}



// Function: FUN_1005fa94 at 1005fa94
// Size: 508 bytes

/* WARNING: Removing unreachable block (ram,0x1005ffec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005fa94(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  char *pcVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  int local_124;
  char *local_60;
  
  _DAT_61490000 = param_2;
  _DAT_638c0000 = param_3;
  sVar3 = FUN_100014b8();
  piVar5 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
  FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x2b8));
  piVar5 = (int *)FUN_10051f98(0x47465820,param_1,1);
  if (piVar5 == (int *)0x0) {
    FUN_10000318((int)**(short **)(local_124 + -0xb4));
    piVar5 = (int *)FUN_10051f98(0x47465820,param_1,1);
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  sVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xb8));
  local_60 = (char *)FUN_100f1640((int)sVar4);
  if (local_60 == (char *)0x0) {
    FUN_100523a8(piVar5,1);
    FUN_10000318((int)sVar3);
    return;
  }
  FUN_10052490(piVar5,local_60,(int)sVar4);
  do {
    cVar1 = *local_60;
    pcVar2 = local_60;
    while (cVar1 != '#') {
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    local_60 = pcVar2 + 2;
  } while (0x12 < (int)pcVar2[1] - 0x42U);
  return;
}



// Function: FUN_10060078 at 10060078
// Size: 1384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10060078(undefined4 *param_1,short param_2)

{
  bool bVar1;
  bool bVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined **local_7c;
  short local_4c;
  short sStack_4a;
  short local_48;
  short local_46;
  
  ppuVar3 = &.TVect::OCECToRString;
  if ((((*(short *)(_DAT_4bffe775 + 0x124) == 0) ||
       (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) == 0)) ||
      (*(short *)(_DAT_4bffe775 + 0x15a) != 0)) || (_DAT_7fc60774 != 0)) {
    if (_DAT_28090000 == (int *)0x0) {
      cVar4 = '\0';
    }
    else {
      _DAT_90bf000c = _DAT_28090000 + 0x20;
      cVar4 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
      ppuVar3 = local_7c;
    }
    if (cVar4 != '\0') {
      if ((_DAT_28090000[0x29] == 0) && (*(int *)(*(int *)ppuVar3[-0x5a7] + 0x38) < 0x71)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (((param_1 == (undefined4 *)0x0) || (8 < *(short *)(param_1 + 1))) ||
         (8 < *(short *)((int)param_1 + 6))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      piVar11 = _DAT_90bf000c;
      if (bVar2) {
        piVar11 = (int *)ppuVar3[-0x62c];
      }
      puVar5 = param_1;
      if (param_1 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)ppuVar3[-0x62b];
      }
      local_4c = (short)((uint)*puVar5 >> 0x10);
      sStack_4a = (short)*puVar5;
      local_48 = (short)((uint)puVar5[1] >> 0x10);
      local_46 = (short)puVar5[1];
      iVar13 = 0;
      if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
        do {
          iVar10 = _DAT_4bffe775 + iVar13 * 0x42;
          sVar7 = *(short *)(iVar10 + 0x1604);
          iVar14 = (int)sVar7;
          sVar8 = *(short *)(iVar10 + 0x1606);
          iVar10 = (int)sVar8;
          if (*(short *)(_DAT_4bffe775 + 0x124) == 0) goto LAB_10060350;
          if ((param_1 == (undefined4 *)0x0) ||
             (((((short)(local_4c + -8) <= iVar14 &&
                (iVar14 <= (int)(short)(local_4c + -8) + (int)(short)(local_48 + 0xc) + -1)) &&
               ((short)(sStack_4a + -8) <= iVar10)) &&
              (iVar10 <= (int)(short)(sStack_4a + -8) + (int)(short)(local_46 + 0xc) + -1)))) {
            if (*(short *)ppuVar3[-0x62a] == 0) {
              iVar6 = _DAT_807f0004 + iVar10 * 0x70;
              if ((((*(uint *)(iVar6 + iVar14) >> 0x1d & 1) != 0) ||
                  ((*(uint *)(iVar6 + (short)(sVar7 + 1)) >> 0x1d & 1) != 0)) ||
                 (((*(uint *)(iVar6 + iVar14 + 0x70) >> 0x1d & 1) != 0 ||
                  ((*(uint *)(iVar6 + (short)(sVar7 + 1) + 0x70) >> 0x1d & 1) != 0)))) {
LAB_10060350:
                if (!bVar1) {
                  sVar7 = (short)(iVar14 << 1);
                }
                sVar7 = sVar7 + -1;
                if (!bVar1) {
                  sVar8 = (short)(iVar10 << 1);
                }
                sVar8 = sVar8 + -1;
                if (bVar2) {
                  uVar9 = _DAT_48000225;
                  if (bVar1) {
                    uVar9 = ((short)_DAT_48000225 >> 1) +
                            (ushort)((short)_DAT_48000225 < 0 && (_DAT_48000225 & 1) != 0);
                  }
                  sVar7 = sVar7 - uVar9;
                  uVar9 = _DAT_48000227;
                  if (bVar1) {
                    uVar9 = ((short)_DAT_48000227 >> 1) +
                            (ushort)((short)_DAT_48000227 < 0 && (_DAT_48000227 & 1) != 0);
                  }
                  sVar8 = sVar8 - uVar9;
                }
                iVar10 = _DAT_4bffe775 + iVar13 * 0x42;
                iVar10 = -(int)*(char *)(_DAT_4bffe775 +
                                         (*(uint *)(*(int *)ppuVar3[-0x152] +
                                                    *(short *)(iVar10 + 0x1606) * 0xe0 +
                                                   *(short *)(iVar10 + 0x1604) * 2) >> 0x18) + 0x711
                                        );
                iVar14 = iVar10 + 10;
                if ((iVar14 + (-(uint)(iVar14 == 0) - (iVar10 + 9)) & 0xff) == 0) {
                  if (*(char *)(_DAT_4bffe775 + iVar13 * 0x42 + 0x1619) == '\x0f') {
                    iVar10 = 8;
                  }
                  else {
                    iVar10 = (int)*(char *)(_DAT_4bffe775 + iVar13 * 0x42 + 0x1619);
                  }
                }
                else {
                  iVar10 = -1;
                }
                if (-1 < iVar10) {
                  if (bVar1) {
                    uVar12 = 0x50;
                  }
                  else {
                    uVar12 = 9;
                  }
                  FUN_100462c8(uVar12);
                  FUN_100451f4(uVar12);
                  iVar10 = iVar10 * 8;
                  FUN_10009d38(ppuVar3[-0x8e],(int)*(short *)(&DAT_30a40001 + iVar10),
                               (int)*(short *)(iVar10 + 0x30a40003),
                               (int)*(short *)(iVar10 + 0x30a40005),
                               (int)*(short *)(iVar10 + 0x30a40007),piVar11,(int)sVar7,(int)sVar8);
                  FUN_1004530c(uVar12);
                }
                if (iVar13 == param_2) {
                  iVar10 = (int)(short)(sVar7 + -1);
                  iVar14 = (int)(short)(sVar8 + -1);
                  FUN_1000a714(_DAT_90bf000c,iVar10,iVar14,10,0);
                  FUN_1000a714(_DAT_90bf000c,iVar10,(int)(short)(sVar8 + 9),10,0);
                  FUN_1000a7cc(_DAT_90bf000c,iVar10,iVar14,10,0);
                  FUN_1000a7cc(_DAT_90bf000c,(int)(short)(sVar7 + 9),iVar14,10,0);
                }
              }
            }
            else {
              iVar6 = _DAT_807f0004 + iVar10 * 0x70;
              if (((*(int *)(iVar6 + iVar14) < 0) || (*(int *)(iVar6 + (short)(sVar7 + 1)) < 0)) ||
                 ((*(int *)(iVar6 + iVar14 + 0x70) < 0 ||
                  (*(int *)(iVar6 + (short)(sVar7 + 1) + 0x70) < 0)))) goto LAB_10060350;
            }
          }
          iVar13 = (int)(short)((short)iVar13 + 1);
        } while (iVar13 < *(short *)(_DAT_4bffe775 + 0x1602));
      }
    }
  }
  return;
}



// Function: FUN_10060608 at 10060608
// Size: 3404 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10060608(short param_1,short param_2,uint *param_3)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined **ppuVar6;
  char cVar16;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short *psVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  short *psVar14;
  int *piVar15;
  uint uVar17;
  int iVar18;
  ushort uVar19;
  undefined *puVar20;
  int iVar21;
  short sStack0000001a;
  short sStack0000001e;
  undefined **local_114;
  short local_e8;
  short local_e6;
  short local_e4;
  short local_e2;
  short local_e0;
  short local_de;
  short local_dc;
  short local_da;
  short local_d8;
  short local_d6;
  short local_d4;
  short local_d2;
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  ushort local_bc;
  ushort local_ba;
  short local_b8;
  short sStack_b6;
  short local_b4;
  short local_b2;
  undefined4 local_b0;
  undefined4 local_ac;
  short local_a8;
  uint local_a4;
  uint uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  short local_94 [4];
  undefined4 local_8c;
  undefined4 local_88;
  short local_84 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [48];
  
  ppuVar6 = &.TVect::OCECToRString;
  psVar10 = (short *)&local_b0;
  sStack0000001a = param_1;
  sStack0000001e = param_2;
  if (*(short *)(_DAT_4bffe775 + 0x124) == 0) {
LAB_10060714:
    if (((param_3 != (uint *)0x0) && (*(short *)(param_3 + 1) < 9)) &&
       (*(short *)((int)param_3 + 6) < 9)) {
      local_a8 = 1;
      goto LAB_10060740;
    }
  }
  else {
    if (((*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) != 0) &&
        (*(short *)(_DAT_4bffe775 + 0x15a) == 0)) && (_DAT_7fc60774 == 0)) {
      return;
    }
    if (((*(short *)(_DAT_4bffe775 + 0x124) == 0) ||
        (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) == 0)) ||
       ((*(short *)(_DAT_4bffe775 + 0x15a) == 0 || (_DAT_80010050 == 0)))) goto LAB_10060714;
    if (param_3 != (uint *)0x0) {
      FUN_1009142c();
      return;
    }
  }
  local_a8 = 0;
LAB_10060740:
  if ((DAT_98c4000b == '\0') && (_DAT_98c40010 == 0)) {
    FUN_1000a12c(0x98c40000,0x20,0x20,8,0);
  }
  if (param_3 == (uint *)0x0) {
    local_b0 = _DAT_57c3063e;
    local_ac = _DAT_57c30642;
    FUN_100226b0(&local_a4,0,0,0x70,0x9c);
  }
  else {
    local_a4 = *param_3;
    uStack_a0 = param_3[1];
    uVar17 = (uint)(short)(*(short *)param_3 << 1);
    local_b0 = CONCAT22((short)(((int)uVar17 >> 4) + (uint)((int)uVar17 < 0 && (uVar17 & 0xf) != 0))
                        * 0x10,(short)*param_3 << 1);
    uVar17 = (int)(short)(*(short *)(param_3 + 1) << 1) - 1;
    local_ac = CONCAT22((short)(((int)uVar17 >> 4) + (uint)((int)uVar17 < 0 && (uVar17 & 0xf) != 0))
                        * 0x10 + 0x10,*(short *)((int)param_3 + 6) << 1);
    if (local_a8 != 0) {
      uVar17 = *param_3;
      _DAT_63430000 = (short)(uVar17 >> 0x10);
      sVar1 = (short)(((int)_DAT_63430000 >> 2) << 2);
      _DAT_63430002 = (short)uVar17;
      _DAT_63430000 = CONCAT22(sVar1,_DAT_63430002);
      _DAT_63430004 = (short)(param_3[1] >> 0x10);
      _DAT_63430006 = (short)param_3[1];
      _DAT_63430004 = CONCAT22((short)((_DAT_63430004 + -1 >> 3) << 3) + 8,_DAT_63430006);
      if (sVar1 < 0) {
        _DAT_63430000 = uVar17 & 0xffff;
        _DAT_63430004 = CONCAT22(8,_DAT_63430006);
      }
      if (_DAT_63430002 < 0) {
        _DAT_63430000 = _DAT_63430000 & 0xffff0000;
        _DAT_63430004 = CONCAT22(_DAT_63430004,8);
      }
      if (0x70 < (int)_DAT_63430000 + (int)_DAT_63430004) {
        _DAT_63430000 = CONCAT22(0x68,_DAT_63430002);
        _DAT_63430004 = CONCAT22(8,_DAT_63430006);
      }
      if (0x9c < (int)_DAT_63430002 + (int)_DAT_63430006) {
        _DAT_63430000 = CONCAT22(_DAT_63430000,0x94);
        _DAT_63430004 = CONCAT22(_DAT_63430004,8);
      }
      _DAT_80010060 = (short)(_DAT_63430000 >> 0x10);
      sVar1 = _DAT_80010060;
      _DAT_80010060 = _DAT_80010060 + -4;
      _DAT_80010062 = (short)_DAT_63430000;
      sVar3 = _DAT_80010062;
      uVar19 = _DAT_80010062 - 4;
      _DAT_80010060 = CONCAT22(_DAT_80010060,uVar19);
      _DAT_80010064 = (short)((uint)_DAT_63430004 >> 0x10);
      sVar4 = _DAT_80010064;
      _DAT_80010064 = _DAT_80010064 + 8;
      _DAT_80010066 = (short)_DAT_63430004;
      sVar5 = _DAT_80010066;
      _DAT_80010066 = _DAT_80010066 + 8;
      if (_DAT_80010060 < 0) {
        _DAT_80010060 = (uint)uVar19;
      }
      if (_DAT_80010062 < 0) {
        _DAT_80010060 = _DAT_80010060 & 0xffff0000;
      }
      if (0x70 < (int)_DAT_80010060 + (int)_DAT_80010064) {
        _DAT_80010060 = CONCAT22(0x60,_DAT_80010062);
        _DAT_80010064 = CONCAT22(0x10,_DAT_80010066);
      }
      if (0x9c < (int)_DAT_80010062 + (int)_DAT_80010066) {
        _DAT_80010060 = CONCAT22(_DAT_80010060,0x8c);
        _DAT_80010064 = CONCAT22(_DAT_80010064,0x10);
      }
      FUN_100226b0(&DAT_7c1ee800,(int)(short)(sVar1 << 1),(int)(short)(sVar3 << 1),
                   (int)(short)(sVar4 << 1),(int)(short)(sVar5 << 1));
      FUN_100226b0(&DAT_48000225,(int)(short)(_DAT_80010060 << 1),(int)(short)(_DAT_80010062 << 1),
                   (int)(short)(_DAT_80010064 << 1),(int)(short)(_DAT_80010066 << 1));
      FUN_1002269c(&DAT_33de0001,(int)_DAT_7c1ee800,(int)_DAT_7c1ee802);
      FUN_100226b0(&DAT_30210058,0,0,(int)(short)_DAT_48000229,(int)(short)_DAT_4800022b);
      FUN_100226b0(&DAT_4180ffc4,(int)(short)(_DAT_7c1ee800 - _DAT_48000225),
                   (int)(short)(_DAT_7c1ee802 - _DAT_48000227),(int)_DAT_7c1ee804,(int)_DAT_7c1ee806
                  );
    }
  }
  if (((sStack0000001a == 0) || (_DAT_30210048 == 0)) || (sStack0000001e != 0)) {
    if (_DAT_28090000 == (int *)0x0) {
      cVar16 = '\0';
    }
    else {
      _DAT_90bf000c = _DAT_28090000 + 0x20;
      cVar16 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
      ppuVar6 = local_114;
    }
    if (cVar16 != '\0') {
      bVar2 = false;
      iVar21 = 0;
      if ((*(int *)(ppuVar6[-0x66f] + 0x90) != 0) &&
         (iVar18 = *(int *)(*(int *)(ppuVar6[-0x66f] + 0x90) + 0x10), iVar18 != 0)) {
        iVar21 = FUN_10001290(iVar18);
        ppuVar6 = local_114;
      }
      if ((iVar21 == 0) || (iVar18 = FUN_10001d70(iVar21), ppuVar6 = local_114, iVar18 == 0)) {
        bVar2 = true;
      }
      else {
        FUN_10003468(iVar21);
      }
      if (bVar2) {
        FUN_100462c8(7);
        FUN_10039ec8((int)*(short *)(*(int *)ppuVar6[-0x151] + 0x110));
      }
      FUN_100451f4(7);
      if ((*(int *)(*(int *)ppuVar6[-0x53c] + 0xa4) == 0) &&
         (*(int *)(*(int *)ppuVar6[-0x5a7] + 0x38) < 0x71)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      sStack_b6 = (short)local_b0;
      _local_b8 = CONCAT22((short)((int)local_b0 >> 0x11) +
                           (ushort)((int)local_b0 < 0 && (local_b0 & 0x10000) != 0),
                           (sStack_b6 >> 1) + (ushort)(sStack_b6 < 0 && (local_b0 & 1) != 0));
      local_b2 = (short)local_ac;
      _local_b4 = CONCAT22((short)((int)local_ac >> 0x11) +
                           (ushort)((int)local_ac < 0 && (local_ac & 0x10000) != 0),
                           (local_b2 >> 1) + (ushort)(local_b2 < 0 && (local_ac & 1) != 0));
      if (bVar2) {
        psVar10 = &local_b8;
      }
      if (*(short *)(*(int *)ppuVar6[-0x151] + 0x124) == 0) {
        FUN_10000870(&local_7c,&local_78);
        FUN_10000888(_DAT_90bf000c[4],0);
        puVar20 = local_114[-0x87];
        uVar7 = FUN_10009a98(*(undefined4 *)(puVar20 + 0x10));
        uVar8 = FUN_10009a98(_DAT_90bf000c[4]);
        local_d2 = local_b0._0_2_ + local_ac._0_2_;
        local_d4 = local_b0._2_2_ + local_ac._2_2_;
        local_d8 = local_b0._2_2_;
        local_d6 = local_b0._0_2_;
        local_de = *psVar10;
        local_e0 = psVar10[1];
        local_da = local_de + psVar10[2];
        local_dc = local_e0 + psVar10[3];
        FUN_10066bf4();
        FUN_10067270();
        uVar9 = FUN_100b0578(&local_e0);
        uVar11 = FUN_100b0578(&local_d8);
        FUN_100008d0(uVar7,uVar8,uVar11,uVar9,0,0);
        FUN_10009b00(*(undefined4 *)(puVar20 + 0x10));
        FUN_10009b00(_DAT_90bf000c[4]);
        FUN_10066c80(auStack_74,2);
        FUN_10000888(local_7c,local_78);
      }
      else if (local_a8 == 0) {
        FUN_10047cbc(_DAT_90bf000c,psVar10,0xff);
        FUN_10000870(&local_8c,&local_88);
        FUN_10000888(_DAT_90bf000c[4],0);
        FUN_10067270();
        uVar7 = FUN_10009a98(*(undefined4 *)(local_114[-0x87] + 0x10));
        uVar8 = FUN_10009a98(*(undefined4 *)(local_114[-0x86] + 0x10));
        uVar9 = FUN_10009a98(_DAT_90bf000c[4]);
        local_c2 = local_b0._0_2_ + local_ac._0_2_;
        local_c4 = local_b0._2_2_ + local_ac._2_2_;
        local_c8 = local_b0._2_2_;
        local_c6 = local_b0._0_2_;
        psVar14 = local_84;
        if ((psVar14 != (short *)0x0) ||
           (psVar14 = (short *)FUN_100f56e4(8), psVar14 != (short *)0x0)) {
          *psVar14 = local_c8;
          psVar14[1] = local_c6;
          psVar14[2] = local_c4;
          psVar14[3] = local_c2;
        }
        local_e6 = *psVar10;
        local_e8 = psVar10[1];
        local_e2 = local_e6 + psVar10[2];
        local_e4 = local_e8 + psVar10[3];
        FUN_10000888(_DAT_90bf000c[4],0);
        uVar11 = FUN_100b0578(&local_e8);
        uVar12 = FUN_100b0578(local_84);
        uVar13 = FUN_100b0578(&local_c8);
        FUN_100012f0(uVar7,uVar8,uVar9,uVar13,uVar12,uVar11);
        FUN_10009b00(*(undefined4 *)(local_114[-0x87] + 0x10));
        FUN_10009b00(*(undefined4 *)(local_114[-0x86] + 0x10));
        FUN_10009b00(_DAT_90bf000c[4]);
        FUN_10000888(local_8c,local_88);
        FUN_100b2268(local_114[-0x75]);
        FUN_100008b8();
        FUN_100b2268(local_114[-0x75] + 0x5fa);
        FUN_100021c0();
      }
      else {
        FUN_10047cbc(0x98c40000,ppuVar6[-0x88],0xff);
        FUN_10000870(&local_9c,&local_98);
        FUN_10000888(_DAT_98c40010,0);
        FUN_10067270();
        uVar7 = FUN_10009a98(*(undefined4 *)(local_114[-0x87] + 0x10));
        uVar8 = FUN_10009a98(*(undefined4 *)(local_114[-0x86] + 0x10));
        uVar9 = FUN_10009a98(_DAT_98c40010);
        local_ce = _DAT_48000225;
        local_d0 = _DAT_48000227;
        local_ca = _DAT_48000225 + _DAT_48000229;
        local_cc = _DAT_48000227 + _DAT_4800022b;
        psVar10 = local_94;
        if ((psVar10 != (short *)0x0) ||
           (psVar10 = (short *)FUN_100f56e4(8), psVar10 != (short *)0x0)) {
          *psVar10 = local_d0;
          psVar10[1] = local_ce;
          psVar10[2] = local_cc;
          psVar10[3] = local_ca;
        }
        local_ba = _DAT_48000229;
        local_bc = _DAT_4800022b;
        local_c0 = 0;
        local_be = 0;
        if (bVar2) {
          local_ba = ((short)_DAT_48000229 >> 1) +
                     (ushort)((short)_DAT_48000229 < 0 && (_DAT_48000229 & 1) != 0);
          local_bc = ((short)_DAT_4800022b >> 1) +
                     (ushort)((short)_DAT_4800022b < 0 && (_DAT_4800022b & 1) != 0);
        }
        FUN_10000888(_DAT_90bf000c[4],0);
        uVar11 = FUN_100b0578(&local_c0);
        uVar12 = FUN_100b0578(local_94);
        uVar13 = FUN_100b0578(&local_d0);
        FUN_100012f0(uVar7,uVar8,uVar9,uVar13,uVar12,uVar11);
        FUN_10009b00(_DAT_98c40010);
        FUN_10009b00(*(undefined4 *)(local_114[-0x86] + 0x10));
        FUN_10009b00(*(undefined4 *)(local_114[-0x87] + 0x10));
        FUN_10000888(local_9c,local_98);
        FUN_100b2268(local_114[-0x75]);
        FUN_100008b8();
        FUN_100b2268(local_114[-0x75] + 0x5fa);
        FUN_100021c0();
      }
      FUN_1004530c(7);
      if ((sStack0000001a == 0) || ((*(short *)local_114[-0x629] != 0 && (sStack0000001e == 0)))) {
        *(undefined2 *)local_114[-0x629] = 0;
      }
      else {
        FUN_10060078(&local_a4,0xffffffff);
        *(undefined2 *)local_114[-0x629] = 1;
      }
      ppuVar6 = local_114;
      if (local_a8 != 0) {
        if (*(int *)(*(int *)local_114[-0x53c] + 0xa4) == 0) {
          FUN_100913cc();
        }
        if (bVar2) {
          _DAT_4180ffc4 =
               ((short)_DAT_4180ffc4 >> 1) +
               (ushort)((short)_DAT_4180ffc4 < 0 && (_DAT_4180ffc4 & 1) != 0);
          _DAT_4180ffc6 =
               ((short)_DAT_4180ffc6 >> 1) +
               (ushort)((short)_DAT_4180ffc6 < 0 && (_DAT_4180ffc6 & 1) != 0);
          _DAT_4180ffc8 =
               ((short)_DAT_4180ffc8 >> 1) +
               (ushort)((short)_DAT_4180ffc8 < 0 && (_DAT_4180ffc8 & 1) != 0);
          _DAT_4180ffca =
               ((short)_DAT_4180ffca >> 1) +
               (ushort)((short)_DAT_4180ffca < 0 && (_DAT_4180ffca & 1) != 0);
          _DAT_33de0001 =
               ((short)_DAT_33de0001 >> 1) +
               (ushort)((short)_DAT_33de0001 < 0 && (_DAT_33de0001 & 1) != 0);
          _DAT_33de0003 =
               ((short)_DAT_33de0003 >> 1) +
               (ushort)((short)_DAT_33de0003 < 0 && (_DAT_33de0003 & 1) != 0);
        }
        FUN_10009b48(0x98c40000,(int)(short)_DAT_4180ffc4,(int)(short)_DAT_4180ffc6,
                     (int)(short)_DAT_4180ffc8,(int)(short)_DAT_4180ffca,_DAT_90bf000c,
                     (int)(short)_DAT_33de0001,(int)(short)_DAT_33de0003);
        if (*(int *)(*(int *)local_114[-0x53c] + 0xa4) == 0) {
          FUN_1009142c();
        }
      }
    }
    if ((*(int *)(*(int *)ppuVar6[-0x53c] + 0xa4) == 0) &&
       (piVar15 = (int *)FUN_10117884((int)*(int **)ppuVar6[-0x541] +
                                      (int)*(short *)(**(int **)ppuVar6[-0x541] + 0x308),0x6f766572)
       , piVar15 != (int *)0x0)) {
      *(undefined1 *)(piVar15 + 0x25) = 0;
      FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x4d0));
      FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x4c8));
    }
  }
  return;
}



// Function: FUN_10061354 at 10061354
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10061354(short *param_1)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  char cVar3;
  undefined **local_4c;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = _FUN_10116698;
  ppuVar2 = &.TVect::OCECToRString;
  if (_DAT_28090000 == (int *)0x0) {
    cVar3 = '\0';
  }
  else {
    _DAT_90bf000c = _DAT_28090000 + 0x20;
    cVar3 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    ppuVar2 = local_4c;
  }
  if (cVar3 != '\0') {
    if (param_1 == (short *)0x0) {
      local_20 = *(undefined4 *)ppuVar2[-0x62b];
      local_1c = *(undefined4 *)((int)ppuVar2[-0x62b] + 4);
    }
    else {
      local_20 = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_1c = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    if (_DAT_28090000[0x29] == 0) {
      FUN_10009b48(_DAT_90bf000c,(int)local_20._0_2_,(int)local_20._2_2_,(int)local_1c._0_2_,
                   (int)local_1c._2_2_,uVar1,(int)local_20._0_2_,(int)local_20._2_2_);
      FUN_1009142c();
    }
    else {
      FUN_10009b48(_DAT_90bf000c,(int)local_20._0_2_,(int)local_20._2_2_,(int)local_1c._0_2_,
                   (int)local_1c._2_2_,uVar1,(int)local_20._0_2_,(int)local_20._2_2_);
    }
  }
  return;
}



// Function: FUN_100614ac at 100614ac
// Size: 1236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100614ac(short *param_1,short param_2)

{
  bool bVar1;
  short sVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  undefined **local_84;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  short local_44;
  short sStack_42;
  short local_40;
  short local_3e;
  
  ppuVar3 = &.TVect::OCECToRString;
  psVar8 = (short *)&DAT_57c3063e;
  if (_DAT_28090000 == (int *)0x0) {
    cVar4 = '\0';
  }
  else {
    _DAT_90bf000c = _DAT_28090000 + 0x20;
    cVar4 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    ppuVar3 = local_84;
  }
  if (cVar4 != '\0') {
    if (param_1 != (short *)0x0) {
      psVar8 = param_1;
    }
    local_44 = (short)((uint)*(undefined4 *)psVar8 >> 0x10);
    sStack_42 = (short)*(undefined4 *)psVar8;
    local_40 = (short)((uint)*(undefined4 *)(psVar8 + 2) >> 0x10);
    local_3e = (short)*(undefined4 *)(psVar8 + 2);
    _local_44 = CONCAT22(local_44 + -3,sStack_42 + -3);
    _local_40 = CONCAT22(local_40 + 4,local_3e + 4);
    if (param_1 == (short *)0x0) {
      local_4c = _DAT_57c3063e;
      local_48 = _DAT_57c30642;
      FUN_100226b0(&local_54,0,0,0x70,0x9c);
    }
    else {
      local_54 = *(undefined4 *)param_1;
      uStack_50 = *(undefined4 *)(param_1 + 2);
      local_4c = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_48 = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    bVar1 = false;
    iVar9 = 0;
    if ((*(int *)(ppuVar3[-0x66f] + 0x90) != 0) &&
       (iVar5 = *(int *)(*(int *)(ppuVar3[-0x66f] + 0x90) + 0x10), iVar5 != 0)) {
      iVar9 = FUN_10001290(iVar5);
    }
    if ((iVar9 == 0) || (iVar5 = FUN_10001d70(iVar9), iVar5 == 0)) {
      bVar1 = true;
    }
    else {
      FUN_10003468(iVar9);
    }
    if (bVar1) {
      FUN_100462c8(7);
      FUN_10039ec8((int)*(short *)(_DAT_4bffe775 + 0x110));
    }
    FUN_100451f4(7);
    if (*(short *)(_DAT_4bffe775 + 0x124) == 0) {
      FUN_10009b48(&DAT_7c0803a6,(int)local_4c._0_2_,(int)local_4c._2_2_,(int)local_48._0_2_,
                   (int)local_48._2_2_,_DAT_90bf000c,(int)local_4c._0_2_,(int)local_4c._2_2_);
    }
    else {
      FUN_10047cbc(_DAT_90bf000c,&local_4c,0xff);
      FUN_10009d38(&DAT_7c0803a6,(int)local_4c._0_2_,(int)local_4c._2_2_,(int)local_48._0_2_,
                   (int)local_48._2_2_,_DAT_90bf000c,(int)local_4c._0_2_,(int)local_4c._2_2_);
    }
    FUN_1004530c(7);
    iVar9 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
      do {
        iVar5 = _DAT_4bffe775 + iVar9 * 0x20;
        iVar10 = (int)*(short *)(iVar5 + 0x812);
        iVar5 = (int)*(short *)(iVar5 + 0x814);
        if ((local_44 <= iVar10) && (iVar10 < (int)local_40 + (int)local_44)) {
          if (((sStack_42 <= iVar5) && (iVar5 < (int)sStack_42 + (int)local_3e)) &&
             (((*(short *)(_DAT_4bffe775 + 0x124) == 0 ||
               ((*(uint *)(_DAT_807f0004 + iVar5 * 0x70 + iVar10) >> 0x1d & 1) != 0)) &&
              (iVar6 = _DAT_4bffe775 + iVar9 * 0x20,
              ((int)*(short *)(iVar6 + 0x830) &
              1 << ((int)*(short *)(_DAT_4bffe775 + 0x110) & 0x3fU)) != 0)))) {
            if (*(char *)(iVar6 + 0x82a) == '\x01') {
              iVar6 = 2;
            }
            else if ((*(uint *)(_DAT_38800000 + iVar5 * 0xe0 + iVar10 * 2) >> 0x16 & 1) == 0) {
              if (*(short *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x82e) == 0) {
                sVar7 = 0;
              }
              else {
                sVar7 = 3;
              }
              iVar6 = (int)sVar7;
            }
            else {
              iVar6 = 1;
            }
            sVar7 = (short)(iVar5 << 1);
            iVar5 = (int)(short)(sVar7 + -1);
            sVar2 = (short)(((short)((short)(iVar10 << 1) + -1) + 4 >> 3) << 3);
            iVar10 = (int)sVar2;
            FUN_100462c8(9);
            FUN_100451f4(9);
            iVar6 = iVar6 * 8;
            FUN_10009d38(0x7fffd814,(int)*(short *)(&DAT_7c0803a6 + iVar6),
                         (int)*(short *)(&DAT_7c0803a8 + iVar6),
                         (int)*(short *)(&DAT_7c0803aa + iVar6),
                         (int)*(short *)(&DAT_7c0803ac + iVar6),_DAT_90bf000c,iVar10,iVar5);
            if (iVar9 == param_2) {
              FUN_1000a714(_DAT_90bf000c,iVar10,iVar5,0xc,0);
              FUN_1000a714(_DAT_90bf000c,iVar10,(int)(short)(sVar7 + 8),0xc,0);
              FUN_1000a7cc(_DAT_90bf000c,iVar10,iVar5,10,0);
              FUN_1000a7cc(_DAT_90bf000c,(int)(short)(sVar2 + 0xb),iVar5,10,0);
            }
            FUN_1004530c(9);
          }
        }
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
    }
  }
  return;
}



// Function: FUN_10061980 at 10061980
// Size: 280 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10061980(short param_1,short param_2,short param_3)

{
  int iVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined **local_44;
  
  ppuVar2 = &.TVect::OCECToRString;
  if (_DAT_28090000 == (int *)0x0) {
    cVar3 = '\0';
  }
  else {
    _DAT_90bf000c = _DAT_28090000 + 0x20;
    cVar3 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    ppuVar2 = local_44;
  }
  if (cVar3 != '\0') {
    iVar5 = (int)(short)(param_2 * 2 + -6);
    iVar4 = (int)(short)(((short)(param_1 * 2 + -6) + 4 >> 3) << 3);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    FUN_100462c8(9);
    iVar1 = param_3 * 8;
    FUN_10009d38(ppuVar2[-0x8e],(int)*(short *)(iVar1 + -0x445e000c),
                 (int)*(short *)(iVar1 + -0x445e000a),(int)*(short *)(iVar1 + -0x445e0008),
                 (int)*(short *)(iVar1 + -0x445e0006),_DAT_90bf000c,iVar4,iVar5);
  }
  return;
}



// Function: FUN_10061a98 at 10061a98
// Size: 1936 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10061a98(short *param_1,short param_2,short param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  ushort uVar9;
  int unaff_r24;
  int unaff_r25;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined **local_a4;
  undefined4 local_74;
  undefined4 uStack_70;
  short local_6c [4];
  short local_64;
  short local_62;
  short local_60 [2];
  undefined4 local_5c;
  undefined4 local_58;
  short local_54;
  short local_52;
  short local_50 [2];
  
  ppuVar2 = &.TVect::OCECToRString;
  iVar10 = (int)param_3;
  iVar11 = (int)param_2;
  local_54 = 0;
  if (_DAT_28090000 == (int *)0x0) {
    cVar3 = '\0';
  }
  else {
    _DAT_90bf000c = _DAT_28090000 + 0x20;
    cVar3 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    ppuVar2 = local_a4;
  }
  if (cVar3 != '\0') {
    if (param_1 == (short *)0x0) {
      local_5c = *(undefined4 *)ppuVar2[-0x62b];
      local_58 = *(undefined4 *)((int)ppuVar2[-0x62b] + 4);
      FUN_100226b0(&local_74,0,0,0x70,0x9c);
    }
    else {
      local_74 = *(undefined4 *)param_1;
      uStack_70 = *(undefined4 *)(param_1 + 2);
      local_5c = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_58 = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    bVar1 = false;
    iVar13 = 0;
    if ((*(int *)(ppuVar2[-0x66f] + 0x90) != 0) &&
       (iVar8 = *(int *)(*(int *)(ppuVar2[-0x66f] + 0x90) + 0x10), iVar8 != 0)) {
      iVar13 = FUN_10001290(iVar8);
    }
    if ((iVar13 == 0) || (iVar8 = FUN_10001d70(iVar13), iVar8 == 0)) {
      bVar1 = true;
    }
    else {
      FUN_10003468(iVar13);
    }
    if (bVar1) {
      FUN_100462c8(7);
      FUN_10039ec8((int)*(short *)(_DAT_4bffe775 + 0x110));
    }
    FUN_100451f4(7);
    if (*(short *)(_DAT_4bffe775 + 0x124) == 0) {
      FUN_10009b48(&DAT_7c0803a6,(int)local_5c._0_2_,(int)local_5c._2_2_,(int)local_58._0_2_,
                   (int)local_58._2_2_,_DAT_90bf000c,(int)local_5c._0_2_,(int)local_5c._2_2_);
    }
    else {
      FUN_10047cbc(_DAT_90bf000c,&local_5c,0xff);
      FUN_10009d38(&DAT_7c0803a6,(int)local_5c._0_2_,(int)local_5c._2_2_,(int)local_58._0_2_,
                   (int)local_58._2_2_,_DAT_90bf000c,(int)local_5c._0_2_,(int)local_5c._2_2_);
    }
    FUN_1004530c(7);
    iVar13 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        if ((int)*(char *)(_DAT_4bffe775 + iVar13 * 0x42 + 0x1619) ==
            (int)*(short *)(_DAT_4bffe775 + 0x110)) {
          if (iVar10 == -1) {
            FUN_10047de8(iVar13,local_6c,local_60);
            iVar8 = local_60[0] + 1;
joined_r0x10061d7c:
            if ((4 < iVar8) && (iVar13 != iVar11)) goto LAB_10061e90;
          }
          else if (-1 < iVar10) {
            FUN_10047de8(iVar13,local_6c,local_60);
            iVar8 = iVar10 + local_60[0];
            goto joined_r0x10061d7c;
          }
          iVar8 = _DAT_4bffe775 + iVar13 * 0x42;
          if (*(char *)(iVar8 + 0x1631) < '\x01') {
            sVar5 = 3;
          }
          else {
            sVar5 = 0;
          }
          iVar12 = (int)sVar5;
          sVar7 = *(short *)(iVar8 + 0x1604) * 2;
          uVar4 = sVar7 - 2;
          sVar5 = *(short *)(iVar8 + 0x1606) * 2;
          if ((-1 < iVar11) && (iVar11 == iVar13)) {
            if (iVar12 == 0) {
              sVar6 = 4;
            }
            else {
              sVar6 = 6;
            }
            iVar12 = (int)sVar6;
            unaff_r25 = (int)(short)(sVar7 + 2);
            unaff_r24 = (int)(short)(sVar5 + 2);
          }
          uVar9 = uVar4 & 7;
          if (uVar9 == 7) {
            uVar9 = 6;
          }
          FUN_100462c8(9);
          iVar12 = iVar12 * 8;
          FUN_10009d38(0x7fffd814,(int)*(short *)(&DAT_4e800020 + iVar12),
                       (int)(short)(*(short *)(iVar12 + 0x4e800022) +
                                   uVar9 * *(short *)(iVar12 + 0x4e800026)),
                       (int)*(short *)(&DAT_4e800024 + iVar12),(int)*(short *)(iVar12 + 0x4e800026),
                       _DAT_90bf000c,(int)(short)(((int)(short)uVar4 >> 3) << 3),
                       (int)(short)(sVar5 + -1));
        }
LAB_10061e90:
        iVar13 = (int)(short)((short)iVar13 + 1);
      } while (iVar13 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
    if (-1 < iVar11) {
      iVar10 = _DAT_4bffe775 + iVar11 * 0x42;
      if (*(short *)(iVar10 + 0x1636) != 0) {
        if (*(short *)(iVar10 + 0x1638) == -2) {
          iVar10 = FUN_10034074((int)*(short *)(_DAT_4bffe775 + 0x110),&local_52,local_50);
          local_54 = 1;
          if (iVar10 != 0) {
            local_62 = (short)((int)local_52 << 1);
            local_64 = (short)((int)local_50[0] << 1);
            FUN_10061980((int)local_52,(int)local_50[0],1);
            FUN_100479f4(7);
            FUN_1003a794(_DAT_90bf000c,unaff_r25,unaff_r24,(int)local_62,(int)local_64,0,7);
          }
        }
        iVar10 = _DAT_4bffe775 + iVar11 * 0x42;
        if ((*(short *)(iVar10 + 0x1636) != 0) && (*(short *)(iVar10 + 0x1638) != -2)) {
          iVar10 = FUN_1002be50((int)*(short *)(iVar10 + 0x1638),(int)*(short *)(iVar10 + 0x163a));
          iVar10 = _DAT_4bffe775 + iVar10 * 0x42;
          local_62 = *(short *)(iVar10 + 0x1604) * 2;
          uVar4 = local_62 - 2;
          sVar5 = *(short *)(iVar10 + 0x1606) * 2;
          local_62 = local_62 + 2;
          local_64 = sVar5 + 2;
          if (*(char *)(iVar10 + 0x1631) < '\x01') {
            sVar7 = 5;
          }
          else {
            sVar7 = 1;
          }
          uVar9 = uVar4 & 7;
          if (uVar9 == 7) {
            uVar9 = 6;
          }
          FUN_100462c8(9);
          iVar10 = sVar7 * 8;
          FUN_10009d38(0x7fffd814,(int)*(short *)(&DAT_4e800020 + iVar10),
                       (int)(short)(*(short *)(iVar10 + 0x4e800022) +
                                   uVar9 * *(short *)(iVar10 + 0x4e800026)),
                       (int)*(short *)(&DAT_4e800024 + iVar10),(int)*(short *)(iVar10 + 0x4e800026),
                       _DAT_90bf000c,(int)(short)(((int)(short)uVar4 >> 3) << 3),
                       (int)(short)(sVar5 + -1));
          FUN_100479f4(7);
          FUN_1003a794(_DAT_90bf000c,unaff_r25,unaff_r24,(int)local_62,(int)local_64,0,7);
        }
      }
      FUN_10047de8(iVar11,local_6c,local_60);
      iVar10 = 0;
      if (0 < local_60[0]) {
        do {
          iVar11 = _DAT_4bffe775 + local_6c[iVar10] * 0x42;
          local_62 = *(short *)(iVar11 + 0x1604) * 2;
          uVar9 = local_62 - 2;
          sVar5 = *(short *)(iVar11 + 0x1606) * 2;
          local_62 = local_62 + 2;
          local_64 = sVar5 + 2;
          uVar4 = uVar9 & 7;
          if (uVar4 == 7) {
            uVar4 = 6;
          }
          FUN_100462c8(9);
          FUN_10009d38(0x7fffd814,(int)_DAT_4e800030,
                       (int)(short)(_DAT_4e800032 + uVar4 * _DAT_4e800036),(int)_DAT_4e800034,
                       (int)_DAT_4e800036,_DAT_90bf000c,(int)(short)(((int)(short)uVar9 >> 3) << 3),
                       (int)(short)(sVar5 + -1));
          FUN_100479f4(8);
          FUN_1003a794(_DAT_90bf000c,unaff_r25,unaff_r24,(int)local_62,(int)local_64,0,8);
          iVar10 = (int)(short)((short)iVar10 + 1);
        } while (iVar10 < local_60[0]);
      }
    }
    iVar10 = FUN_10034074((int)*(short *)(_DAT_4bffe775 + 0x110),&local_62,&local_64);
    if ((iVar10 != 0) && (local_54 == 0)) {
      FUN_10061980((int)local_62,(int)local_64,0);
    }
  }
  return;
}



// Function: FUN_10062228 at 10062228
// Size: 896 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062228(undefined4 param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (((*(short *)(_DAT_4bffe775 + 0x124) == 0) ||
      (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) == 0)) ||
     (*(short *)(_DAT_4bffe775 + 0x15a) != 0)) {
    if (_DAT_28090000 == (int *)0x0) {
      cVar4 = '\0';
    }
    else {
      _DAT_90bf000c = _DAT_28090000 + 0x20;
      cVar4 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    }
    if ((cVar4 != '\0') && (iVar9 = 0, 0 < *(short *)(_DAT_4bffe775 + 0x1602))) {
      do {
        iVar8 = _DAT_4bffe775 + iVar9 * 0x42;
        sVar1 = *(short *)(iVar8 + 0x1604);
        iVar10 = (int)sVar1;
        iVar8 = (int)*(short *)(iVar8 + 0x1606);
        if (*(short *)(_DAT_4bffe775 + 0x124) == 0) {
LAB_100623c0:
          sVar3 = (short)(iVar8 << 1);
          uVar5 = (short)(iVar10 << 1) - 1;
          uVar2 = uVar5 & 7;
          sVar1 = (short)(((int)(short)uVar5 >> 3) << 3);
          if (*(char *)(param_2 + iVar9) == -1) {
            iVar8 = -1;
          }
          else if (*(char *)(param_2 + iVar9) == '\x0f') {
            iVar8 = 8;
          }
          else {
            iVar8 = (int)*(char *)(param_2 + iVar9);
          }
          if (iVar8 < 0) {
            FUN_100462c8(9);
            FUN_100451f4(9);
            FUN_10009d38(0x7fffd814,(int)_DAT_30a40041,
                         (int)(short)(_DAT_30a40043 + uVar2 * _DAT_30a40047),(int)_DAT_30a40045,
                         (int)_DAT_30a40047,_DAT_90bf000c,(int)sVar1,(int)(short)(sVar3 + -1));
            FUN_1004530c(9);
            FUN_100479f4(0xff);
            iVar8 = (int)(short)(uVar2 + sVar1 + 1);
            iVar10 = (int)(short)(uVar2 + sVar1 + 6);
            FUN_1003a794(_DAT_90bf000c,iVar8,(int)sVar3,iVar10,(int)(short)(sVar3 + 5),0,0xff);
            FUN_1003a794(_DAT_90bf000c,iVar8,(int)(short)(sVar3 + 6),iVar10,(int)sVar3,0,0xff);
          }
          else {
            FUN_100462c8(9);
            FUN_100451f4(9);
            iVar8 = iVar8 * 8;
            FUN_10009d38(0x7fffd814,(int)*(short *)(&DAT_30a40001 + iVar8),
                         (int)(short)(*(short *)(iVar8 + 0x30a40003) +
                                     uVar2 * *(short *)(iVar8 + 0x30a40007)),
                         (int)*(short *)(iVar8 + 0x30a40005),(int)*(short *)(iVar8 + 0x30a40007),
                         _DAT_90bf000c,(int)sVar1,(int)(short)(sVar3 + -1));
            FUN_1004530c(9);
          }
        }
        else {
          iVar7 = _DAT_807f0004 + iVar8 * 0x70;
          if ((((*(uint *)(iVar7 + iVar10) >> 0x1d & 1) != 0) ||
              (iVar6 = (int)(short)(sVar1 + 1), (*(uint *)(iVar7 + iVar6) >> 0x1d & 1) != 0)) ||
             (((*(uint *)(iVar7 + iVar10 + 0x70) >> 0x1d & 1) != 0 ||
              ((*(uint *)(iVar7 + iVar6 + 0x70) >> 0x1d & 1) != 0)))) goto LAB_100623c0;
        }
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
  }
  return;
}



// Function: FUN_100625a8 at 100625a8
// Size: 960 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100625a8(undefined4 param_1,short param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = iRam10116010;
  iVar2 = _FUN_1011600c;
  iVar8 = (int)param_3;
  if (((*(short *)(_DAT_4bffe775 + 0x124) == 0) ||
      (*(short *)(*(short *)(_DAT_4bffe775 + 0x110) * 2 + _DAT_4bffe775 + 0xd0) == 0)) ||
     (*(short *)(_DAT_4bffe775 + 0x15a) != 0)) {
    if (_DAT_28090000 == (int *)0x0) {
      cVar4 = '\0';
    }
    else {
      _DAT_90bf000c = _DAT_28090000 + 0x20;
      cVar4 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    }
    if (cVar4 != '\0') {
      iVar9 = 0;
      do {
        iVar10 = 0;
        do {
          iVar7 = _DAT_38800000 + iVar10 * 0xe0;
          *(uint *)(iVar7 + iVar9 * 2) = *(uint *)(iVar7 + iVar9 * 2) & 0xffefffff;
          iVar10 = (int)(short)((short)iVar10 + 1);
        } while (iVar10 < 0x9c);
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < 0x70);
      iVar9 = 0;
      if (0 < *(short *)(_DAT_4bffe775 + 0x182)) {
        do {
          iVar10 = (int)*(short *)(_DAT_60000000 + iVar9 * 0x16);
          iVar7 = (int)*(short *)(_DAT_60000000 + iVar9 * 0x16 + 2);
          if (((((-1 < iVar10) && (-1 < iVar7)) &&
               (((*(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar10 * 2) >> 0x14 & 1) == 0 ||
                (-1 < iVar8)))) &&
              ((iVar5 = _DAT_38800000 + iVar7 * 0xe0,
               *(uint *)(iVar5 + iVar10 * 2) = *(uint *)(iVar5 + iVar10 * 2) | 0x100000,
               *(short *)(_DAT_4bffe775 + 0x124) == 0 ||
               ((*(uint *)(_DAT_807f0004 + iVar7 * 0x70 + iVar10) >> 0x1d & 1) != 0)))) &&
             ((param_5 == 0 ||
              (*(char *)(_DAT_4bffe775 +
                         (*(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar10 * 2) >> 0x18) + 0x711) !=
               '\n')))) {
            iVar5 = (int)*(char *)(_DAT_60000000 + iVar9 * 0x16 + 5);
            if (iVar5 == 0xf) {
              iVar5 = 8;
            }
            if ((((param_4 == 0) || (iVar5 != *(short *)(_DAT_4bffe775 + 0x110))) &&
                ((param_2 < 0 || ((int)*(char *)(_DAT_60000000 + iVar9 * 0x16 + 5) == (int)param_2))
                )) && ((iVar8 < 0 || (*(char *)(_DAT_60000000 + iVar9 * 0x16 + 4) == iVar8)))) {
              iVar7 = (int)(short)((short)(iVar7 << 1) + -1);
              uVar6 = (short)(iVar10 << 1) - 1;
              iVar10 = (int)(short)(((int)(short)uVar6 >> 3) << 3);
              if (iVar10 < 0) {
                iVar10 = 0;
              }
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              FUN_100462c8(9);
              FUN_100451f4(9);
              sVar1 = *(short *)(iVar2 + 6);
              FUN_10009d38(0x7fffd814,(int)*(short *)(iVar5 * 4 + iVar3),
                           (int)(short)(*(short *)(iVar5 * 4 + iVar3 + 2) + (uVar6 & 7) * sVar1),
                           (int)*(short *)(iVar2 + 4),(int)sVar1,_DAT_90bf000c,iVar10,iVar7);
              FUN_1004530c(9);
            }
          }
          iVar9 = (int)(short)((short)iVar9 + 1);
        } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x182));
      }
    }
  }
  return;
}



// Function: FUN_10062968 at 10062968
// Size: 2360 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062968(short *param_1,short param_2)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  undefined **ppuVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short sStack0000001e;
  undefined **local_16c;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  short local_12c [4];
  short local_124 [2];
  short local_120 [100];
  short local_58;
  short local_56;
  short local_54 [2];
  short *local_50;
  undefined1 *local_4c;
  
  ppuVar4 = &.TVect::OCECToRString;
  local_58 = 0;
  sStack0000001e = param_2;
  if (_DAT_28090000 == (int *)0x0) {
    cVar5 = '\0';
  }
  else {
    _DAT_90bf000c = _DAT_28090000 + 0x20;
    cVar5 = FUN_10117884((int)_DAT_28090000 + (int)*(short *)(*_DAT_28090000 + 0x3a8));
    ppuVar4 = local_16c;
  }
  if (cVar5 != '\0') {
    if (param_1 == (short *)0x0) {
      local_134 = *(undefined4 *)ppuVar4[-0x62b];
      local_130 = *(undefined4 *)((int)ppuVar4[-0x62b] + 4);
      FUN_100226b0(&local_13c,0,0,0x70,0x9c);
    }
    else {
      local_13c = *(undefined4 *)param_1;
      uStack_138 = *(undefined4 *)(param_1 + 2);
      local_134 = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_130 = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    bVar2 = false;
    iVar15 = 0;
    if ((*(int *)(ppuVar4[-0x66f] + 0x90) != 0) &&
       (iVar11 = *(int *)(*(int *)(ppuVar4[-0x66f] + 0x90) + 0x10), iVar11 != 0)) {
      iVar15 = FUN_10001290(iVar11);
    }
    if ((iVar15 == 0) || (iVar11 = FUN_10001d70(iVar15), iVar11 == 0)) {
      bVar2 = true;
    }
    else {
      FUN_10003468(iVar15);
    }
    if (bVar2) {
      FUN_100462c8(7);
      FUN_10039ec8((int)*(short *)(_DAT_4bffe775 + 0x110));
    }
    FUN_100451f4(7);
    if (*(short *)(_DAT_4bffe775 + 0x124) == 0) {
      FUN_10009b48(&DAT_7c0803a6,(int)local_134._0_2_,(int)local_134._2_2_,(int)local_130._0_2_,
                   (int)local_130._2_2_,_DAT_90bf000c,(int)local_134._0_2_,(int)local_134._2_2_);
    }
    else {
      FUN_10047cbc(_DAT_90bf000c,&local_134,0xff);
      FUN_10009d38(&DAT_7c0803a6,(int)local_134._0_2_,(int)local_134._2_2_,(int)local_130._0_2_,
                   (int)local_130._2_2_,_DAT_90bf000c,(int)local_134._0_2_,(int)local_134._2_2_);
    }
    FUN_1004530c(7);
    iVar15 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        local_120[iVar15] = 0;
        iVar15 = (int)(short)((short)iVar15 + 1);
      } while (iVar15 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
    iVar15 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        if (((int)*(char *)(_DAT_4bffe775 + iVar15 * 0x42 + 0x1619) ==
             (int)*(short *)(_DAT_4bffe775 + 0x110)) && (local_120[iVar15] == 0)) {
          local_120[iVar15] = 1;
          FUN_10047de8(iVar15,local_12c,local_124);
          iVar11 = _DAT_4bffe775 + iVar15 * 0x42;
          if (*(char *)(iVar11 + 0x1631) < '\x01') {
            sVar9 = 3;
          }
          else {
            sVar9 = 0;
          }
          iVar14 = (int)sVar9;
          if (*(short *)(_DAT_4bffe775 + iVar15 * 0x42 + 0x1636) != 0) {
            iVar14 = 2;
          }
          if (0 < local_124[0]) {
            if (*(char *)(_DAT_4bffe775 + iVar15 * 0x42 + 0x1631) < '\x01') {
              sVar9 = 5;
            }
            else {
              sVar9 = 1;
            }
            iVar14 = (int)sVar9;
          }
          sVar9 = *(short *)(iVar11 + 0x1604) * 2;
          uVar8 = sVar9 - 2;
          sVar3 = *(short *)(iVar11 + 0x1606) * 2;
          iVar13 = (int)(short)(sVar9 + 2);
          iVar11 = (int)(short)(sVar3 + 2);
          uVar12 = uVar8 & 7;
          if (uVar12 == 7) {
            uVar12 = 6;
          }
          FUN_100462c8(9);
          iVar14 = iVar14 * 8;
          FUN_10009d38(0x7fffd814,(int)*(short *)(&DAT_4e800020 + iVar14),
                       (int)(short)(*(short *)(iVar14 + 0x4e800022) +
                                   uVar12 * *(short *)(iVar14 + 0x4e800026)),
                       (int)*(short *)(&DAT_4e800024 + iVar14),(int)*(short *)(iVar14 + 0x4e800026),
                       _DAT_90bf000c,(int)(short)(((int)(short)uVar8 >> 3) << 3),
                       (int)(short)(sVar3 + -1));
          iVar14 = _DAT_4bffe775 + iVar15 * 0x42;
          if (*(short *)(iVar14 + 0x1636) != 0) {
            if (*(short *)(iVar14 + 0x1638) == -2) {
              local_58 = 2;
            }
            iVar14 = _DAT_4bffe775 + iVar15 * 0x42;
            if ((*(short *)(iVar14 + 0x1636) != 0) && (*(short *)(iVar14 + 0x1638) != -2)) {
              iVar14 = FUN_1002be50((int)*(short *)(iVar14 + 0x1638),
                                    (int)*(short *)(iVar14 + 0x163a));
              local_120[iVar14] = 1;
              iVar14 = _DAT_4bffe775 + iVar14 * 0x42;
              sVar3 = *(short *)(iVar14 + 0x1604) * 2;
              uVar12 = sVar3 - 2;
              sVar9 = *(short *)(iVar14 + 0x1606) * 2;
              if (*(char *)(iVar14 + 0x1631) < '\x01') {
                sVar10 = 5;
              }
              else {
                sVar10 = 1;
              }
              uVar8 = uVar12 & 7;
              if (uVar8 == 7) {
                uVar8 = 6;
              }
              FUN_100462c8(9);
              iVar14 = sVar10 * 8;
              FUN_10009d38(0x7fffd814,(int)*(short *)(&DAT_4e800020 + iVar14),
                           (int)(short)(*(short *)(iVar14 + 0x4e800022) +
                                       uVar8 * *(short *)(iVar14 + 0x4e800026)),
                           (int)*(short *)(&DAT_4e800024 + iVar14),
                           (int)*(short *)(iVar14 + 0x4e800026),_DAT_90bf000c,
                           (int)(short)(((int)(short)uVar12 >> 3) << 3),(int)(short)(sVar9 + -1));
              FUN_100479f4(7);
              FUN_1003a794(_DAT_90bf000c,(int)(short)(sVar3 + 2),(int)(short)(sVar9 + 2),iVar13,
                           iVar11,0,7);
            }
          }
          iVar14 = 0;
          if (0 < local_124[0]) {
            do {
              iVar6 = (int)local_12c[iVar14];
              local_120[iVar6] = 1;
              iVar6 = _DAT_4bffe775 + iVar6 * 0x42;
              sVar9 = *(short *)(iVar6 + 0x1604) * 2;
              uVar8 = sVar9 - 2;
              sVar3 = *(short *)(iVar6 + 0x1606) * 2;
              uVar12 = uVar8 & 7;
              if (uVar12 == 7) {
                uVar12 = 6;
              }
              FUN_100462c8(9);
              FUN_10009d38(0x7fffd814,(int)_DAT_4e800030,
                           (int)(short)(_DAT_4e800032 + uVar12 * _DAT_4e800036),(int)_DAT_4e800034,
                           (int)_DAT_4e800036,_DAT_90bf000c,
                           (int)(short)(((int)(short)uVar8 >> 3) << 3),(int)(short)(sVar3 + -1));
              FUN_100479f4(8);
              FUN_1003a794(_DAT_90bf000c,(int)(short)(sVar9 + 2),(int)(short)(sVar3 + 2),iVar13,
                           iVar11,0,8);
              iVar14 = (int)(short)((short)iVar14 + 1);
            } while (iVar14 < local_124[0]);
          }
        }
        iVar15 = (int)(short)((short)iVar15 + 1);
      } while (iVar15 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
    iVar15 = FUN_10034074((int)*(short *)(_DAT_4bffe775 + 0x110),&local_56,local_54);
    if (iVar15 != 0) {
      if (local_58 == 0) {
        local_58 = 1;
      }
      if (iVar15 != 0) {
        uVar7 = (uint)local_58;
        FUN_10061980((int)local_56,(int)local_54[0],
                     (int)(short)((2 - ((2 < uVar7) + 2)) +
                                 (ushort)(1 < uVar7 && (uint)(2 < uVar7) <= uVar7 - 2)));
        if (uVar7 == 2) {
          iVar15 = 0;
          local_4c = &DAT_80410014;
          local_50 = local_12c;
          do {
            iVar11 = _DAT_4bffe775 + iVar15 * 0x42;
            if (((*(short *)(iVar11 + 0x1636) != 0) && (*(short *)(iVar11 + 0x1638) == -2)) &&
               ((int)*(char *)(iVar11 + 0x1619) == (int)*(short *)(_DAT_4bffe775 + 0x110))) {
              sVar9 = *(short *)(iVar11 + 0x1604);
              sVar3 = *(short *)(iVar11 + 0x1606);
              sVar10 = local_56 << 1;
              sVar1 = local_54[0] << 1;
              FUN_100479f4(8);
              FUN_1003a794(_DAT_90bf000c,(int)(short)(sVar9 * 2 + 2),(int)(short)(sVar3 * 2 + 2),
                           (int)sVar10,(int)sVar1,0,8);
            }
            iVar15 = (int)(short)((short)iVar15 + 1);
          } while (iVar15 < 100);
        }
      }
    }
    if (-1 < sStack0000001e) {
      iVar15 = _DAT_4bffe775 + sStack0000001e * 0x42;
      sVar9 = *(short *)(iVar15 + 0x1604) * 2;
      sVar3 = *(short *)(iVar15 + 0x1606) * 2;
      iVar15 = (int)(short)(sVar9 + -3);
      iVar11 = (int)(short)(sVar3 + -2);
      FUN_1000a714(_DAT_90bf000c,iVar15,iVar11,0xb,0);
      FUN_1000a714(_DAT_90bf000c,iVar15,(int)(short)(sVar3 + 9),0xb,0);
      FUN_1000a7cc(_DAT_90bf000c,iVar15,iVar11,0xb,0);
      FUN_1000a7cc(_DAT_90bf000c,(int)(short)(sVar9 + 8),iVar11,0xb,0);
    }
  }
  return;
}



// Function: FUN_100632a0 at 100632a0
// Size: 832 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100632a0(short param_1,short param_2,short param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    if (((*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) ||
        (*(short *)(_DAT_4bffe775 + 0x15a) != 0)) &&
       (FUN_10080030(*(undefined4 *)(_DAT_57c407bd + 0x88)), _DAT_80010050 == 0)) {
      uVar1 = *(uint *)(_DAT_38800000 + param_2 * 0xe0 + param_1 * 2);
      if (((*(char *)(_DAT_4bffe775 + (uVar1 >> 0x18) + 0x711) == '\n') ||
          ((uVar1 >> 0x15 & 1) != 0)) || (_DAT_4beeb891 == 2)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        FUN_100226b0(&local_38,(int)(short)(param_1 + -2),(int)(short)(param_2 + -2),5,5);
      }
      else {
        FUN_100226b0(&local_38,(int)(short)(param_1 + -1),(int)(short)(param_2 + -1),3,3);
      }
      if (local_38 < 0) {
        local_34 = local_38 + local_34;
        local_38 = 0;
      }
      if (local_36 < 0) {
        local_32 = local_36 + local_32;
        local_36 = 0;
      }
      if (0x6f < (int)local_38 + (int)local_34) {
        local_34 = (local_34 - (short)((int)local_38 + (int)local_34)) + 0x6f;
      }
      if (0x9b < (int)local_36 + (int)local_32) {
        local_32 = (local_32 - (short)((int)local_36 + (int)local_32)) + 0x9b;
      }
      local_30 = local_38 << 1;
      local_2e = local_36 << 1;
      local_2c = local_34 << 1;
      local_2a = local_32 << 1;
      FUN_10000870(&local_3c,&local_40);
      FUN_10000888(_DAT_bb41fff8,0);
      FUN_100b2268(0x408600a0);
      FUN_100021c0();
      FUN_100b2268(0x4086069a);
      FUN_100021c0();
      if (_DAT_bb41fff8 != 0) {
        FUN_10009a98(_DAT_bb41fff8);
      }
      iVar3 = (int)local_30;
      if (iVar3 <= iVar3 + local_2c) {
        do {
          iVar4 = (int)local_2e;
          if (iVar4 <= iVar4 + local_2a) {
            do {
              FUN_10009fa8(0xbb41ffe8,iVar3,iVar4,0xff);
              iVar4 = (int)(short)((short)iVar4 + 1);
            } while (iVar4 <= (int)local_2e + (int)local_2a);
          }
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 <= (int)local_30 + (int)local_2c);
      }
      if (_DAT_bb41fff8 != 0) {
        FUN_10009b00(_DAT_bb41fff8);
      }
      FUN_10000888(local_3c,local_40);
      FUN_100913cc();
      FUN_10060608((int)param_3,1,&local_38);
    }
  }
  return;
}



// Function: FUN_100635e0 at 100635e0
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100635e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_28;
  short local_26;
  undefined2 local_24;
  short local_22;
  
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    FUN_10000870(&local_34,&local_38);
    FUN_10000888(_DAT_bb41fff8,0);
    FUN_100b2268(0x408600a0);
    FUN_100021c0();
    FUN_100b2268(0x4086069a);
    FUN_100021c0();
    if (_DAT_bb41fff8 != 0) {
      FUN_10009a98(_DAT_bb41fff8);
    }
    FUN_1000a008(0xbb41ffe8,0);
    FUN_100b2268(0x4086069a);
    FUN_100021c0();
    local_30 = 2;
    local_2e = 0;
    iVar1 = 0;
    do {
      local_28 = 0;
      local_26 = (short)(iVar1 << 1);
      local_24 = 2;
      local_22 = local_26 + 2;
      iVar2 = 0;
      do {
        if ((*(uint *)(_DAT_807f0004 + iVar2 * 0x70 + iVar1) >> 0x1d & 1) != 0) {
          FUN_100b0578(&local_28);
          FUN_10002148();
        }
        FUN_100b065c(&local_28,&local_30);
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < 0x9c);
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 0x70);
    if (_DAT_bb41fff8 != 0) {
      FUN_10009b00(_DAT_bb41fff8);
    }
    FUN_10000888(local_34,local_38);
  }
  return;
}



// Function: FUN_10063784 at 10063784
// Size: 884 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063784(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_5c;
  
  piVar4 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x14c);
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x2b8));
  uVar2 = FUN_1005f6b0(0x17,0);
  FUN_10001dd0(0x60000000,uVar2,(int)*(short *)(**(int **)(local_5c + -0x544) + 0x162));
  piVar4 = (int *)FUN_10051f98(0x44415420,0x60000000,1);
  _DAT_38600000 = FUN_100f1640(0x100);
  _DAT_4082000c = FUN_100f1640(0x100);
  _DAT_2c030000 = FUN_100f1640(0x100);
  _DAT_9421ffa8 = FUN_100f1640(0x100);
  _DAT_90010008 = FUN_100f1640(0x14);
  _DAT_bf21ffe4 = FUN_100f1640(0x14);
  _DAT_7c0802a6 = FUN_100f1640(0x14);
  _DAT_4e800020 = FUN_100f1640(0x14);
  _DAT_60db0000 = FUN_100f1640(0x20);
  _DAT_60f90000 = FUN_100f1640(0x20);
  _DAT_48000124 = FUN_100f1640(0x20);
  FUN_10052490(piVar4,_DAT_38600000,0x100);
  FUN_10052490(piVar4,_DAT_4082000c,0x100);
  FUN_10052490(piVar4,_DAT_2c030000,0x100);
  FUN_10052490(piVar4,_DAT_9421ffa8,0x100);
  iVar5 = 0;
  do {
    iVar1 = _DAT_60db0000;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    iVar3 = FUN_100525a0();
    *(short *)(iVar1 + iVar5 * 2) = (short)iVar3;
    if (iVar3 == 0) {
      *(undefined2 *)(iVar5 * 2 + iVar1) = 0xff;
    }
    else if (*(short *)(_DAT_60db0000 + iVar5 * 2) == 0xf) {
      *(undefined2 *)(_DAT_60db0000 + iVar5 * 2) = 0;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 0x10);
  iVar5 = 0;
  do {
    iVar1 = _DAT_60f90000;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    iVar3 = FUN_100525a0();
    *(short *)(iVar1 + iVar5 * 2) = (short)iVar3;
    if (iVar3 == 0) {
      *(undefined2 *)(iVar5 * 2 + iVar1) = 0xff;
    }
    else if (*(short *)(_DAT_60f90000 + iVar5 * 2) == 0xf) {
      *(undefined2 *)(_DAT_60f90000 + iVar5 * 2) = 0;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 0x10);
  iVar5 = 0;
  do {
    iVar1 = _DAT_48000124;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x100));
    iVar3 = FUN_100525a0();
    *(short *)(iVar1 + iVar5 * 2) = (short)iVar3;
    if (iVar3 == 0) {
      *(undefined2 *)(iVar5 * 2 + iVar1) = 0xff;
    }
    else if (*(short *)(_DAT_48000124 + iVar5 * 2) == 0xf) {
      *(undefined2 *)(iVar5 * 2 + _DAT_48000124) = 0;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 0x10);
  FUN_10052490(piVar4,_DAT_90010008,0x14);
  FUN_10052490(piVar4,_DAT_bf21ffe4,0x14);
  FUN_10052490(piVar4,_DAT_7c0802a6,0x14);
  FUN_10052490(piVar4,_DAT_4e800020,0x14);
  FUN_100523a8(piVar4,1);
  return;
}



// Function: FUN_10063af8 at 10063af8
// Size: 1548 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063af8(int *param_1,short param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar5;
  char *pcVar4;
  int *piVar6;
  short sVar7;
  int *piVar8;
  int *piVar9;
  short sVar11;
  uint *puVar10;
  undefined4 *puVar12;
  int iVar13;
  short sVar14;
  ushort uVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  int *piStack00000018;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  char acStack_8160 [28608];
  int local_118c;
  undefined2 local_1168;
  undefined2 local_1166;
  undefined2 local_1164;
  undefined2 local_1162;
  undefined2 local_1160 [256];
  short local_f60 [256];
  undefined2 local_d60 [256];
  short local_b60 [256];
  short local_960 [256];
  short local_760 [256];
  short local_560 [256];
  short local_360 [256];
  char local_160 [256];
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  
  piStack00000018 = param_1;
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  local_60 = FUN_10000720(0x3f4);
  if (local_60 != 0) {
    local_1168 = 0;
    local_1166 = 0;
    local_1164 = 0x138;
    local_1162 = 0xe0;
    uVar3 = FUN_100b0578(&local_1168);
    iVar18 = local_60;
    FUN_10000750(local_60,uVar3);
    FUN_10001c98(iVar18);
  }
  iVar18 = 0;
  do {
    cVar5 = FUN_1005f230(1,3,1);
    local_160[iVar18] = cVar5;
    local_5c = iVar18 + 1;
    iVar18 = (int)(short)local_5c;
  } while (iVar18 < 0x100);
  iVar19 = 0;
  iVar18 = 0;
  piVar6 = *(int **)(local_118c + -0x20c);
  piVar8 = *(int **)(local_118c + -0x210);
  piVar9 = *(int **)(local_118c + -0x214);
  local_58 = param_4;
  local_54 = param_5;
  do {
    if (*(char *)(_DAT_38600000 + iVar18) < 0x10) {
      sVar7 = *(short *)(_DAT_60ba0000 + *(char *)(_DAT_38600000 + iVar18) * 2);
    }
    else {
      sVar7 = (short)*(char *)(_DAT_38600000 + iVar18);
    }
    local_360[iVar18] = sVar7;
    if (*(char *)(iVar18 + _DAT_4082000c) < 0x10) {
      sVar7 = *(short *)(_DAT_60ba0000 + *(char *)(iVar18 + _DAT_4082000c) * 2);
    }
    else {
      sVar7 = (short)*(char *)(_DAT_4082000c + iVar18);
    }
    local_560[iVar18] = sVar7;
    if (*(char *)(iVar18 + _DAT_2c030000) < 0x10) {
      sVar7 = *(short *)(_DAT_60ba0000 + *(char *)(iVar18 + _DAT_2c030000) * 2);
    }
    else {
      sVar7 = (short)*(char *)(_DAT_2c030000 + iVar18);
    }
    local_760[iVar18] = sVar7;
    if (*(char *)(iVar18 + _DAT_9421ffa8) < 0x10) {
      sVar7 = *(short *)(_DAT_60ba0000 + *(char *)(iVar18 + _DAT_9421ffa8) * 2);
    }
    else {
      sVar7 = (short)*(char *)(_DAT_9421ffa8 + iVar18);
    }
    local_960[iVar18] = sVar7;
    local_b60[iVar18] = *(short *)(_DAT_60ba0000 + *(char *)(iVar18 + _DAT_90010008) * 2);
    local_d60[iVar18] = *(undefined2 *)(_DAT_60ba0000 + *(char *)(iVar18 + *piVar6) * 2);
    local_f60[iVar18] = *(short *)(_DAT_60ba0000 + *(char *)(iVar18 + *piVar8) * 2);
    local_1160[iVar18] = *(undefined2 *)(_DAT_60ba0000 + *(char *)(iVar18 + *piVar9) * 2);
    iVar18 = (int)(short)((short)iVar18 + 1);
  } while (iVar18 < 0x100);
  iVar18 = FUN_10001d70(piStack00000018);
  piVar6 = piStack00000018;
  if (iVar18 != 0) {
    pcVar4 = (char *)FUN_10002cb8();
    uVar2 = *(ushort *)(*piVar6 + 4) & 0x7fff;
    local_50 = 1;
    sVar7 = 0;
    sVar11 = 0;
    iVar18 = 0;
    do {
      pcVar20 = pcVar4 + (short)uVar2;
      pcVar17 = pcVar20 + (short)uVar2;
      sVar11 = sVar11 + 1;
      if (0xf < sVar11) {
        local_50 = 1;
        FUN_10000888(uStack00000020,uStack00000024);
        sVar7 = sVar7 + 1;
        FUN_100b2268(*(int *)(local_118c + -0x1d4) + 0x5fa);
        FUN_100021c0();
        FUN_100514d8(**(undefined4 **)(local_118c + -0x1924),(int)(short)(sVar7 * 10));
        FUN_10000888(uStack00000028,0);
        local_50 = 1;
        sVar11 = 0;
      }
      puVar12 = (undefined4 *)(**(int **)(local_118c + -0x548) + iVar18 * 0xe0);
      puVar10 = (uint *)(**(int **)(local_118c + -0x54c) + iVar18 * 0x70);
      sVar14 = 0;
      do {
        uVar15 = (ushort)(byte)((uint)*puVar12 >> 0x18);
        puVar12 = (undefined4 *)((int)puVar12 + 2);
        uVar16 = *puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        if ((uVar16 & 0x1f000000) != 0) {
          uVar15 = ((byte)(uVar16 >> 0x18) & 0x1f) - 1;
        }
        iVar13 = (int)(short)uVar15;
        if ((iVar13 < 0x50) || (0x5f < iVar13)) {
          if ((uVar16 & 0x1f000000) == 0) {
            if (param_2 == 8) {
              if (local_360[iVar13] != 5) {
                *pcVar4 = (char)local_360[iVar13];
              }
              if (local_560[iVar13] != 5) {
                pcVar4[1] = (char)local_560[iVar13];
              }
              pcVar4 = pcVar4 + 2;
              if (local_760[iVar13] != 5) {
                *pcVar20 = (char)local_760[iVar13];
              }
              if (local_960[iVar13] != 5) {
                pcVar20[1] = (char)local_960[iVar13];
              }
              pcVar20 = pcVar20 + 2;
            }
            else {
              *pcVar4 = (char)local_560[iVar13] + (char)((int)local_360[iVar13] << 4);
              pcVar4 = pcVar4 + 1;
              *pcVar20 = (char)local_960[iVar13] + (char)((int)local_760[iVar13] << 4);
              pcVar20 = pcVar20 + 1;
            }
          }
          else if (param_2 == 8) {
            *pcVar4 = (char)local_b60[iVar13];
            pcVar4[1] = (char)local_d60[iVar13];
            pcVar4 = pcVar4 + 2;
            *pcVar20 = (char)local_f60[iVar13];
            pcVar20[1] = (char)local_1160[iVar13];
            pcVar20 = pcVar20 + 2;
          }
          else {
            *pcVar4 = (char)local_d60[iVar13] + (char)((int)local_b60[iVar13] << 4);
            pcVar4 = pcVar4 + 1;
            *pcVar20 = (char)local_1160[iVar13] + (char)((int)local_f60[iVar13] << 4);
            pcVar20 = pcVar20 + 1;
          }
        }
        else {
          sVar1 = (short)iVar19;
          if (param_2 == 8) {
            *pcVar4 = local_160[(short)(sVar1 + 1)];
            pcVar4[1] = local_160[(short)(sVar1 + 2)];
            pcVar4 = pcVar4 + 2;
            *pcVar20 = local_160[(short)(sVar1 + 3)];
            iVar19 = (int)(short)(sVar1 + 4);
            pcVar20[1] = local_160[iVar19];
            pcVar20 = pcVar20 + 2;
          }
          else {
            *pcVar4 = local_160[(short)(sVar1 + 2)] + local_160[(short)(sVar1 + 1)] * '\x10';
            pcVar4 = pcVar4 + 1;
            iVar19 = (int)(short)(sVar1 + 4);
            *pcVar20 = local_160[iVar19] + local_160[(short)(sVar1 + 3)] * '\x10';
            pcVar20 = pcVar20 + 1;
          }
          if (0xff < iVar19) {
            iVar19 = 0;
          }
        }
        sVar14 = sVar14 + 1;
      } while (sVar14 < 0x70);
      iVar18 = (int)(short)((short)iVar18 + 1);
      pcVar4 = pcVar17;
    } while (iVar18 < 0x9c);
    local_50 = 1;
    FUN_10003468(piStack00000018);
  }
  return;
}



// Function: FUN_10064104 at 10064104
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064104(void)

{
  FUN_100ef580(_DAT_38600000);
  FUN_100ef580(_DAT_4082000c);
  FUN_100ef580(_DAT_2c030000);
  FUN_100ef580(_DAT_9421ffa8);
  FUN_100ef580(_DAT_90010008);
  FUN_100ef580(_DAT_bf21ffe4);
  FUN_100ef580(_DAT_7c0802a6);
  FUN_100ef580(_DAT_4e800020);
  FUN_100ef580(_DAT_60db0000);
  FUN_100ef580(_DAT_60f90000);
  FUN_100ef580(_DAT_48000124);
  return;
}



// Function: FUN_100641d0 at 100641d0
// Size: 712 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100641d0(void)

{
  short sVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined **local_6c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  bVar11 = _DAT_80410014 == (int *)0x0;
  ppuVar2 = &.TVect::OCECToRString;
  if (bVar11) {
    FUN_10075894(_DAT_57c407bd);
    piVar3 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x3f2,
                                 *(undefined4 *)(_DAT_57c407bd + 0x88));
    FUN_100db26c();
    _DAT_80410014 = piVar3;
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 800));
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4c8));
    ppuVar2 = local_6c;
  }
  uVar4 = FUN_1005f678(0x8a,6);
  uVar5 = FUN_1005f678(0x8a,5);
  uVar6 = FUN_1005f678(0x8a,4);
  uVar7 = FUN_1005f678(0x8a,3);
  uVar8 = FUN_1005f678(0x8a,2);
  uVar9 = FUN_1005f678(0x8a,1);
  uVar10 = FUN_1005f678(0x8a,0);
  FUN_10040408(uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4);
  local_38 = 0xca;
  local_34 = 0x3c;
  FUN_100513b4(_DAT_80410014,&local_38,0x3f3);
  FUN_100514d8(_DAT_80410014,0);
  FUN_10063784();
  *(undefined4 *)ppuVar2[-0x7a] = *(undefined4 *)ppuVar2[-0x7b];
  FUN_100451f4(7);
  FUN_10000870(&local_3c,&local_40);
  uVar4 = *(undefined4 *)(local_6c[-0x87] + 0x10);
  FUN_10000888(uVar4,0);
  piVar3 = (int *)FUN_10001290(uVar4);
  sVar1 = *(short *)(*piVar3 + 0x20);
  FUN_100b2268(0x408600a0);
  FUN_100021c0();
  FUN_100b2268(0x4086069a);
  FUN_100021c0();
  FUN_10063af8(piVar3,(int)sVar1,local_3c,local_40,uVar4);
  FUN_1004530c(7);
  FUN_10000888(local_3c,local_40);
  FUN_100514d8(_DAT_80410014,100);
  FUN_10064104();
  if (bVar11) {
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x738));
    _DAT_80410014 = (int *)0x0;
  }
  return;
}



// Function: FUN_10064498 at 10064498
// Size: 952 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064498(short param_1,short param_2,short param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_54;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  iVar10 = (int)param_3;
  iVar11 = (int)param_2;
  if (param_1 != 0) {
    FUN_10063784();
  }
  _DAT_60ba0000 = _DAT_60db0000;
  FUN_100462c8(7);
  FUN_100451f4(7);
  FUN_10000870(local_2c,&local_30);
  FUN_10000888(_DAT_7c0803b6,0);
  FUN_100b2268(0x408600a0);
  FUN_100021c0();
  FUN_100b2268(0x4086069a);
  FUN_100021c0();
  uVar7 = (ushort)(byte)((uint)*(undefined4 *)
                                (**(int **)(local_54 + -0x548) + iVar10 * 0xe0 + iVar11 * 2) >> 0x18
                        );
  iVar12 = **(int **)(local_54 + -0x54c) + iVar10 * 0x70;
  uVar9 = iVar12 + iVar11;
  uVar8 = *(uint *)(iVar12 + iVar11) >> 0x18 & 0x1f;
  bVar1 = uVar8 == 0;
  if (!bVar1) {
    uVar7 = (short)uVar8 - 1;
  }
  iVar12 = (int)(short)uVar7;
  if ((iVar12 < 0x50) || (0x5f < iVar12)) {
    if (bVar1) {
      uVar8 = **(uint **)(local_54 + -0x1f8);
      bVar2 = *(byte *)(uVar8 + iVar12);
      uVar9 = (uint)bVar2;
    }
    else {
      bVar2 = *(byte *)(**(int **)(local_54 + -0x208) + iVar12);
    }
    FUN_10009fa8(&DAT_7c0803a6,(int)(short)(iVar11 << 1),(int)(short)(iVar10 << 1),
                 (int)*(short *)(_DAT_60ba0000 + (char)bVar2 * 2),uVar8,uVar9);
    if (bVar1) {
      cVar3 = *(char *)(**(int **)(local_54 + -0x1fc) + iVar12);
    }
    else {
      cVar3 = *(char *)(**(int **)(local_54 + -0x20c) + iVar12);
    }
    FUN_10009fa8(&DAT_7c0803a6,(int)(short)((short)(iVar11 << 1) + 1),(int)(short)(iVar10 << 1),
                 (int)*(short *)(_DAT_60ba0000 + cVar3 * 2));
    if (bVar1) {
      cVar3 = *(char *)(**(int **)(local_54 + -0x200) + iVar12);
    }
    else {
      cVar3 = *(char *)(**(int **)(local_54 + -0x210) + iVar12);
    }
    FUN_10009fa8(&DAT_7c0803a6,(int)(short)(iVar11 << 1),(int)(short)((short)(iVar10 << 1) + 1),
                 (int)*(short *)(_DAT_60ba0000 + cVar3 * 2));
    if (bVar1) {
      cVar3 = *(char *)(**(int **)(local_54 + -0x204) + iVar12);
    }
    else {
      cVar3 = *(char *)(**(int **)(local_54 + -0x214) + iVar12);
    }
    FUN_10009fa8(&DAT_7c0803a6,(int)(short)((short)(iVar11 << 1) + 1),
                 (int)(short)((short)(iVar10 << 1) + 1),(int)*(short *)(_DAT_60ba0000 + cVar3 * 2));
    FUN_1004530c(7);
    FUN_10000888(local_2c[0],local_30);
    if (param_1 != 0) {
      FUN_10064104();
    }
  }
  else {
    uVar6 = FUN_1005f230(1,3,1);
    sVar4 = (short)(iVar11 << 1);
    sVar5 = (short)(iVar10 << 1);
    FUN_10009fa8(&DAT_7c0803a6,(int)sVar4,(int)sVar5,uVar6);
    uVar6 = FUN_1005f230(1,3,1);
    FUN_10009fa8(&DAT_7c0803a6,(int)(short)(sVar4 + 1),(int)sVar5,uVar6);
    uVar6 = FUN_1005f230(1,3,1);
    FUN_10009fa8(&DAT_7c0803a6,(int)sVar4,(int)(short)(sVar5 + 1),uVar6);
    uVar6 = FUN_1005f230(1,3,1);
    FUN_10009fa8(&DAT_7c0803a6,(int)(short)(sVar4 + 1),(int)(short)(sVar5 + 1),uVar6);
    if (_DAT_7c0803b6 != 0) {
      FUN_10009b00(_DAT_7c0803b6);
    }
    FUN_10000888(local_2c[0],local_30);
  }
  return;
}



// Function: FUN_10064850 at 10064850
// Size: 1588 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064850(short param_1,short param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1fc;
  undefined1 auStack_1d8 [8];
  undefined2 local_1d0;
  short local_1ce;
  undefined2 local_1cc;
  short local_1ca;
  undefined2 local_1c8;
  short local_1c6;
  undefined2 local_1c4;
  short local_1c2;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  int local_1b4;
  short local_1b0 [7];
  ushort auStack_1a2 [9];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188 [2];
  short local_180 [8];
  short local_170 [8];
  short local_160;
  undefined1 auStack_15c [24];
  undefined1 auStack_144 [256];
  
  if (_DAT_80410014 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*_DAT_80410014 + 0x308) + (int)_DAT_80410014,
                                 0x7475726e);
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x3a8) + (int)piVar2);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = piVar2[0xe];
  iVar6 = 0;
  iVar7 = 0;
  iVar3 = 0;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar7 * 2 + 0x138) != 0) {
      iVar6 = (int)(short)((short)iVar6 + 1);
    }
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  if (iVar6 == 0) {
    return;
  }
  iVar7 = 0;
  do {
    local_170[iVar7] = 0;
    local_180[iVar7] = -1;
    auStack_1a2[iVar7 + 1] = 0;
    local_1b0[iVar7] = 0;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  iVar8 = 0;
  iVar7 = 0;
  do {
    sVar1 = *(short *)(_DAT_4bffe775 + iVar8 * 2 + 0x164);
    if (*(short *)(_DAT_4bffe775 + sVar1 * 2 + 0x138) != 0) {
      local_180[iVar7] = sVar1;
      local_170[iVar7] = (short)iVar4 + (short)(iVar7 - iVar6) * 0x10;
      if ((int)sVar1 == (int)*(short *)(_DAT_4bffe775 + 0x110)) {
        iVar3 = iVar7;
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  if (iVar3 == 0) {
    if (iVar6 == 1) goto LAB_10064a08;
    auStack_1a2[1] = 1;
  }
  else {
    if (iVar6 != 1) {
      if (iVar3 == iVar6 + -1) {
        auStack_1a2[iVar6] = (ushort)(1 < iVar6);
        local_1b0[iVar6 + -2] = 1;
      }
      else {
        auStack_1a2[iVar3 + 1] = (ushort)(1 < iVar6);
        local_1b0[iVar3 + -1] = 1;
      }
      goto LAB_10064a90;
    }
LAB_10064a08:
    auStack_1a2[1] = 0;
  }
  local_1b0[iVar6 + -1] = 1;
LAB_10064a90:
  if (param_1 != 0) {
    local_1bc = _DAT_4182001c;
    local_1b8 = piVar2[0xd];
    local_1c0 = _DAT_41820018 + 1;
    local_1b4 = piVar2[0xe] + -0x80;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x288),&local_1c0,auStack_1d8);
    FUN_100b0578(auStack_1d8);
    FUN_10002c58();
    local_160 = *(short *)(_DAT_4bffe775 + 0x136);
    iVar3 = (int)local_160;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    FUN_10001dd0(auStack_15c,*(undefined4 *)(local_1fc + -0x188c),iVar3);
    FUN_100b19f4(auStack_144,auStack_15c);
    FUN_10000270(2,0xc);
    FUN_100b1c84(auStack_144);
    FUN_10000b88();
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        FUN_1002269c(local_188,(int)local_170[iVar3],2);
        uVar5 = (uint)local_180[iVar3];
        FUN_100226b0(&local_190,
                     (int)(short)((short)(((int)uVar5 >> 2) +
                                         (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * 0x10 + 0x70),
                     (int)(short)((short)((uVar5 + (((int)uVar5 >> 2) +
                                                   (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * -4)
                                         * 7) * 2 + 0x5e),0x10,0xe);
        FUN_1004615c(9,local_190,local_18c,local_188[0]);
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < iVar6);
    }
  }
  iVar4 = -1;
  iVar3 = -1;
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      if (local_1b0[iVar7] != 0) {
        iVar4 = iVar7;
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < iVar6);
  }
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      if (auStack_1a2[iVar7 + 1] != 0) {
        iVar3 = iVar7;
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < iVar6);
  }
  if (param_1 == 0) {
    if ((-1 < iVar4) && (param_2 == 0)) {
      FUN_100479f4(0);
      sVar1 = local_170[iVar4];
      local_1c6 = sVar1 + -3;
      local_1c2 = sVar1 + 0xe;
      local_1c8 = 1;
      local_1c4 = 0x10;
      FUN_100b0578(&local_1c8);
      FUN_10002148();
      FUN_1002269c(local_188,(int)sVar1,2);
      uVar5 = (uint)local_180[iVar4];
      FUN_100226b0(&local_190,
                   (int)(short)((short)(((int)uVar5 >> 2) +
                                       (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * 0x10 + 0x70),
                   (int)(short)((short)((uVar5 + (((int)uVar5 >> 2) +
                                                 (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * -4) *
                                       7) * 2 + 0x5e),0x10,0xe);
      FUN_1004615c(9,local_190,local_18c,local_188[0]);
    }
    if ((-1 < iVar3) && (param_2 == 0)) {
      FUN_100479f4(0xff);
      sVar1 = local_170[iVar3];
      local_1ce = sVar1 + -3;
      local_1ca = sVar1 + 0xe;
      local_1d0 = 1;
      local_1cc = 0x10;
      FUN_100b0578(&local_1d0);
      FUN_10002148();
      FUN_1002269c(local_188,(int)sVar1,2);
      uVar5 = (uint)local_180[iVar3];
      FUN_100226b0(&local_190,
                   (int)(short)((short)(((int)uVar5 >> 2) +
                                       (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * 0x10 + 0x70),
                   (int)(short)((short)((uVar5 + (((int)uVar5 >> 2) +
                                                 (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * -4) *
                                       7) * 2 + 0x5e),0x10,0xe);
      FUN_1004615c(9,local_190,local_18c,local_188[0]);
    }
  }
  FUN_100b2268(*(undefined4 *)(local_1fc + -0x1d4));
  FUN_100008b8();
  FUN_100b2268(*(int *)(local_1fc + -0x1d4) + 0x5fa);
  FUN_100021c0();
  return;
}



// Function: FUN_10064e84 at 10064e84
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064e84(void)

{
  int iVar1;
  
  FUN_1002bcd8();
  FUN_1002bbd4();
  iVar1 = *(short *)(_DAT_4bffe775 + 0x110) * 2;
  iVar1 = (int)*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) +
          ((int)*(short *)(&DAT_3bc00000 + iVar1) - (int)*(short *)(iVar1 + 0x2c9d0000));
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (30000 < iVar1) {
    iVar1 = 30000;
  }
  *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) = (short)iVar1;
  return;
}



// Function: FUN_10064f24 at 10064f24
// Size: 680 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064f24(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  char cVar5;
  int iVar4;
  int iVar6;
  short local_20 [4];
  
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar6 = (int)sVar1;
      iVar2 = _DAT_60000000 + iVar6 * 0x16;
      if (((int)*(char *)(iVar2 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110)) &&
         (-1 < *(short *)(iVar6 * 0x16 + _DAT_60000000))) {
        if (*(char *)(iVar2 + 7) < '\x03') {
          cVar5 = *(char *)(_DAT_60000000 + iVar6 * 0x16 + 7);
        }
        else {
          cVar5 = '\x02';
        }
        iVar2 = _DAT_60000000 + iVar6 * 0x16;
        if ((*(ushort *)(iVar2 + 0xc) & 0x1000) == 0) {
          iVar2 = _DAT_60000000 + iVar6 * 0x16;
          *(char *)(iVar2 + 7) = *(char *)(iVar2 + 6) + cVar5;
        }
        else {
          *(char *)(iVar2 + 7) = cVar5 + '\x14';
        }
        iVar2 = iVar6 * 0x16;
        iVar4 = _DAT_60000000 + iVar2;
        if ((*(short *)(iVar4 + 0x12) == *(short *)(_DAT_60000000 + iVar2)) &&
           (*(short *)(iVar4 + 0x14) == *(short *)(iVar4 + 2))) {
          *(undefined2 *)(iVar4 + 0x12) = 0xffff;
          *(undefined2 *)(iVar2 + _DAT_60000000 + 0x14) = 0xffff;
        }
      }
    } while (iVar6 != 0);
  }
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar6 = sVar1 * 0x16;
      iVar2 = _DAT_60000000 + iVar6;
      if ((((int)*(char *)(iVar2 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110)) &&
          (*(char *)(iVar2 + 4) == '\x1c')) && (iVar2 = FUN_10039d80(iVar2), iVar2 != 0)) {
        FUN_1002122c((int)*(short *)(iVar6 + _DAT_60000000),
                     (int)*(short *)(iVar6 + _DAT_60000000 + 2),local_20);
        iVar2 = 0;
        if (0 < local_20[0]) {
          do {
            sVar3 = (short)*(char *)(*(int *)(&DAT_80410014 + iVar2 * 4) + 7) +
                    (short)*(char *)(*(int *)(&DAT_80410014 + iVar2 * 4) + 6);
            if (0x62 < sVar3) {
              sVar3 = 99;
            }
            *(char *)(*(int *)(&DAT_80410014 + iVar2 * 4) + 7) = (char)sVar3;
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < local_20[0]);
        }
      }
    } while (sVar1 != 0);
  }
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar6 = (int)sVar1;
      iVar2 = _DAT_60000000 + iVar6 * 0x16;
      if (((int)*(char *)(iVar2 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110)) &&
         ((cVar5 = *(char *)(iVar2 + 7), 'c' < cVar5 || (cVar5 < '\0')))) {
        *(undefined1 *)(_DAT_60000000 + iVar6 * 0x16 + 7) = 99;
      }
    } while (iVar6 != 0);
  }
  return;
}



// Function: FUN_100651cc at 100651cc
// Size: 820 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100651cc(short param_1)

{
  bool bVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8c;
  undefined1 auStack_68 [84];
  
  iVar6 = (int)param_1;
  *(undefined2 *)(_DAT_4bffe775 + 0x15a) = *(undefined2 *)(_DAT_4bffe775 + iVar6 * 2 + 0x148);
  sVar3 = 0;
  iVar5 = 0;
  bVar1 = true;
  do {
    iVar4 = _DAT_4bffe775 + iVar5 * 2;
    if ((*(short *)(iVar4 + 0x138) != 0) && (*(short *)(iVar4 + 0xd0) == 0)) {
      sVar3 = sVar3 + 1;
      bVar1 = false;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  if ((sVar3 == 1) && (*(short *)(_DAT_4bffe775 + 0x124) != 0)) {
    _DAT_80010050 = 1;
  }
  else {
    _DAT_80010050 = 0;
  }
  if (bVar1) {
    *(undefined2 *)(_DAT_4bffe775 + 0x15a) = 1;
  }
  if (1 < sVar3) {
    if (*(short *)(_DAT_4bffe775 + 0x124) == 0) goto LAB_1006530c;
    if (*(short *)(_DAT_4bffe775 + iVar6 * 2 + 0x148) == 0) {
      *(undefined2 *)(_DAT_4bffe775 + 0x15a) = 0;
    }
  }
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    FUN_10008e8c();
    FUN_10009520();
    if ((bVar1) || ((*(short *)(_DAT_4bffe775 + 0x15a) != 0 && (_DAT_80010050 == 0)))) {
      FUN_100635e0(iVar6);
    }
  }
LAB_1006530c:
  if ((bVar1) || ((*(short *)(_DAT_4bffe775 + 0x15a) != 0 && (_DAT_80010050 == 0)))) {
    FUN_10060608(1,1,0);
  }
  FUN_10001dd0(auStack_68,&DAT_90010010,_DAT_4bffe775 + iVar6 * 0x14);
  FUN_1003cac4(auStack_68,0);
  FUN_10040334();
  FUN_1004039c(0);
  FUN_1004039c(5);
  FUN_10027150();
  FUN_1002bdc4();
  if (*(short *)(iVar6 * 2 + *(int *)(local_8c + -0x324)) < 1) {
    FUN_10064850(0,0);
    FUN_10040334();
    FUN_1004039c(0x19);
    FUN_1004039c(0x32);
    FUN_1004039c(0x4b);
    FUN_1004039c(100);
    FUN_1003d4dc();
    iVar5 = **(int **)(local_8c + -0x554);
    *(undefined1 *)(iVar5 + 0x9a) = 1;
    uVar2 = FUN_10001a88();
    *(undefined4 *)(iVar5 + 0x9c) = uVar2;
  }
  else {
    FUN_100929a0();
    iVar5 = FUN_10032a24();
    if (iVar5 != 0) {
      FUN_10033548();
    }
    FUN_10033b4c();
    FUN_10064e84();
    FUN_1004a854();
    FUN_10021e20();
    FUN_10064f24();
    FUN_100557b8();
    FUN_1002bdc4();
    FUN_100558f8();
    FUN_100929a0();
    if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) != 0) {
      FUN_1004e384(0xffffffff,0,0,0);
    }
    FUN_1000c648(1);
    FUN_100929a0();
  }
  return;
}



// Function: FUN_10065500 at 10065500
// Size: 700 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065500(short param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_94;
  undefined1 auStack_70 [84];
  
  iVar6 = (int)param_1;
  *(undefined2 *)(_DAT_4bffe775 + 0x15a) = *(undefined2 *)(_DAT_4bffe775 + iVar6 * 2 + 0x148);
  sVar3 = 0;
  iVar5 = 0;
  bVar2 = false;
  bVar1 = true;
  do {
    iVar4 = _DAT_4bffe775 + iVar5 * 2;
    if ((*(short *)(iVar4 + 0x138) != 0) && (*(short *)(iVar4 + 0xd0) == 0)) {
      sVar3 = sVar3 + 1;
      bVar1 = false;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  if ((sVar3 == 1) && (*(short *)(_DAT_4bffe775 + 0x124) != 0)) {
    _DAT_80010050 = 1;
  }
  else {
    _DAT_80010050 = 0;
  }
  if (bVar1) {
    *(undefined2 *)(_DAT_4bffe775 + 0x15a) = 1;
  }
  if (1 < sVar3) {
    if (*(short *)(_DAT_4bffe775 + 0x124) == 0) goto LAB_1006564c;
    if (*(short *)(_DAT_4bffe775 + iVar6 * 2 + 0x148) == 0) {
      *(undefined2 *)(_DAT_4bffe775 + 0x15a) = 0;
    }
  }
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    FUN_10008e8c();
    FUN_10009520();
    bVar2 = true;
    if ((bVar1) || ((*(short *)(_DAT_4bffe775 + 0x15a) != 0 && (_DAT_80010050 == 0)))) {
      FUN_100635e0(iVar6);
    }
  }
LAB_1006564c:
  if ((bVar1) || ((*(short *)(_DAT_4bffe775 + 0x15a) != 0 && (_DAT_80010050 == 0)))) {
    FUN_10060608(1,1,0);
  }
  FUN_10001dd0(auStack_70,&DAT_90010014,_DAT_4bffe775 + iVar6 * 0x14);
  FUN_1003cac4(auStack_70,0);
  FUN_10040334();
  FUN_1004039c(0);
  FUN_1004039c(5);
  if (*(short *)(iVar6 * 2 + *(int *)(local_94 + -0x324)) < 1) {
    FUN_10064850(0,0);
    FUN_10040334();
    FUN_1004039c(0x19);
    FUN_1004039c(0x32);
    FUN_1004039c(0x4b);
    FUN_1004039c(100);
  }
  else {
    FUN_100929a0();
    FUN_1000c648(1);
    FUN_100929a0();
    iVar5 = 7;
    do {
      *(undefined4 *)(&DAT_409e0034 + iVar5 * 4) = 0;
      bVar1 = iVar5 != 0;
      iVar5 = (int)(short)((short)iVar5 + -1);
    } while (bVar1);
    **(undefined4 **)(local_94 + -0x1c0) = 0;
    **(undefined4 **)(local_94 + -0x3f0) = 0;
    FUN_1002c85c();
    if (bVar2) {
      FUN_10008f70();
    }
  }
  return;
}



// Function: FUN_100657bc at 100657bc
// Size: 880 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100657bc(void)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined **local_284;
  undefined1 auStack_260 [256];
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [256];
  short local_28;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_9421ffc0 != (int *)0x0) {
    FUN_10117884((int)_DAT_9421ffc0 + (int)*(short *)(*_DAT_9421ffc0 + 0x328));
    uVar2 = FUN_1007a894(0);
    FUN_1007a95c(uVar2,_DAT_9421ffc0);
    FUN_10117884((int)_DAT_9421ffc0 + (int)*(short *)(*_DAT_9421ffc0 + 0x200),uVar2);
    _DAT_9421ffc0 = (int *)0x0;
    ppuVar1 = local_284;
  }
  if (*ppuVar1[-0x14a] != '\0') {
    FUN_100852b8();
    FUN_100852c8(0);
  }
  if (*ppuVar1[-0x14a] != '\0') {
    FUN_100909d0();
    puVar3 = (undefined4 *)FUN_100f56e4(0x40);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_100d568c(puVar3);
      puVar3[0xd] = 0x20202020;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      *puVar3 = ppuVar1[-0x4c0];
    }
  }
  piVar4 = (int *)FUN_10117884((int)*(int **)ppuVar1[-0x79] +
                               (int)*(short *)(**(int **)ppuVar1[-0x79] + 200),0xc1c,
                               *(undefined4 *)(_DAT_57c407bd + 0x88));
  FUN_100db26c(piVar4);
  iVar5 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7f8));
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x28) = 0x70696374;
    *(undefined4 *)(iVar5 + 0x24) = 0x70696374;
  }
  piVar6 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x70696374);
  if ((piVar6 != (int *)0x0) &&
     (iVar5 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x448)), iVar5 != 0)) {
    uVar7 = *(uint *)((int)(local_284[-0x75] +
                           *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xa0)
                           * 6) + 4);
    *(undefined4 *)(iVar5 + 0x12) =
         *(undefined4 *)
          (local_284[-0x75] +
          *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xa0) * 6);
    *(uint *)(iVar5 + 0x16) = uVar7 & 0xffff0000;
  }
  _DAT_9421ffc0 = piVar4;
  *(undefined1 *)(_DAT_57c407bd + 0x99) = 1;
  piVar6 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x6e616d65);
  if (piVar6 != (int *)0x0) {
    FUN_100b19f4(auStack_128,_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14);
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),auStack_128,0);
  }
  local_28 = *(short *)(_DAT_4bffe775 + 0x136);
  iVar5 = (int)local_28;
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  FUN_10001dd0(auStack_160,local_284[-0x623] + 0x10,iVar5);
  piVar6 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x7475726e);
  if (piVar6 != (int *)0x0) {
    FUN_100b19f4(auStack_260,auStack_160);
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),auStack_260,0);
  }
  FUN_100939e0();
  FUN_100013f8(0xffffffff,0);
  FUN_1003e0b0();
  FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 800));
  return;
}



// Function: FUN_10065b2c at 10065b2c
// Size: 504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065b2c(short param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  FUN_100219a8(0,1,1);
  _DAT_80010050 = 0;
  bVar1 = true;
  if (_DAT_807f0028 != 0) {
    _DAT_807f0028 = 0;
    iVar3 = 0;
    do {
      iVar2 = _DAT_4bffe775 + iVar3 * 2;
      if (*(short *)(iVar2 + 0x138) != 0) {
        *(undefined2 *)(iVar2 + 0x148) = 1;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
  }
  sVar4 = 0;
  iVar3 = 0;
  do {
    iVar2 = _DAT_4bffe775 + iVar3 * 2;
    if ((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 0)) {
      sVar4 = sVar4 + 1;
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 8);
  if (1 < sVar4) {
    if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
      bVar1 = false;
    }
  }
  *(undefined2 *)(_DAT_4bffe775 + 0x15a) = 1;
  FUN_10027150();
  FUN_10008e8c();
  FUN_1002bdc4();
  FUN_1002bcd8();
  FUN_1002bbd4();
  if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
    FUN_10009520();
    if (*(short *)(_DAT_4bffe775 + 0x124) != 0) {
      FUN_100635e0((int)param_1);
    }
  }
  _DAT_607f0000 = param_1;
  FUN_1003d6c4();
  FUN_10021e20();
  FUN_10064f24();
  FUN_100557b8();
  FUN_10064e84();
  FUN_100558f8();
  FUN_1002c85c();
  FUN_10064850(0,0);
  if (bVar1) {
    iVar3 = _DAT_4bffe775 + param_1 * 0x14;
    FUN_1000848c((int)*(short *)(iVar3 + 0x18a),(int)*(short *)(iVar3 + 0x18c));
    FUN_10060608(1,1,0);
  }
  FUN_100657bc();
  return;
}



// Function: FUN_10065d24 at 10065d24
// Size: 1096 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065d24(short param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r4;
  int iVar3;
  short sVar4;
  int local_3c;
  
  sVar4 = *(short *)(_DAT_4bffe775 + 0x136);
  if (sVar4 < 2) {
    sVar4 = 1;
  }
  if (param_1 == -1) {
    iVar1 = FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x5f0),1);
    if (iVar1 != 0) {
      FUN_10117884((int)*(int **)(iVar1 + 0x90) + (int)*(short *)(**(int **)(iVar1 + 0x90) + 0x738),
                   0,1);
      FUN_10117884((int)*(int **)(iVar1 + 0x94) + (int)*(short *)(**(int **)(iVar1 + 0x94) + 0x738),
                   0,1);
    }
    iVar1 = FUN_10091b80();
    while (iVar1 != 0) {
      iVar1 = FUN_10091b80();
    }
    FUN_10117884((int)_DAT_9421ffc0 + (int)*(short *)(*_DAT_9421ffc0 + 0x738));
    _DAT_9421ffc0 = (int *)0x0;
    sVar4 = 0;
    iVar1 = 0;
    do {
      iVar3 = _DAT_4bffe775 + iVar1 * 2;
      if ((*(short *)(iVar3 + 0x138) != 0) && (*(short *)(iVar3 + 0xd0) == 0)) {
        sVar4 = sVar4 + 1;
      }
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 8);
    if ((1 < sVar4) && (*(short *)(_DAT_4bffe775 + 0x124) != 0)) {
      FUN_10060608(1,1,0);
      iVar1 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14;
      FUN_1000848c((int)*(short *)(iVar1 + 0x18a),(int)*(short *)(iVar1 + 0x18c));
    }
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
    FUN_10021f6c(0xffffffff,0xffffffff);
    uVar2 = 0;
    if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) != 0) {
      FUN_1004e384(0xffffffff,0,0,0);
      uVar2 = extraout_r4;
    }
    FUN_10092c5c(5,uVar2);
    iVar1 = *(int *)(**(int **)(local_3c + -0x554) + 0x88);
    *(undefined2 *)(iVar1 + 0x1dc) = 0;
    FUN_1007c714(iVar1,0x3ef);
  }
  else if ((*(short *)(_DAT_4bffe775 + 0x15c) == 0) || (*(short *)(_DAT_4bffe775 + 0x158) != 0)) {
    if ((*(short *)(_DAT_4bffe775 + 0x15e) == 0) || (*(short *)(_DAT_4bffe775 + 0x160) != 0)) {
      if (param_1 < 1) {
        FUN_10033b4c();
        iVar1 = FUN_10032a24();
        if (iVar1 != 0) {
          if (*(short *)(_DAT_4bffe775 + 0x15c) == 0) {
            FUN_10092484(4);
          }
          FUN_1003442c();
          FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
          FUN_10117884(**(int **)(local_3c + -0x1504) +
                       (int)*(short *)(*(int *)**(int **)(local_3c + -0x1504) + 0x4c8));
          FUN_10117884(**(int **)(local_3c + -0x18fc) +
                       (int)*(short *)(*(int *)**(int **)(local_3c + -0x18fc) + 0x4c8));
          FUN_10117884(**(int **)(local_3c + -0x16a0) +
                       (int)*(short *)(*(int *)**(int **)(local_3c + -0x16a0) + 0x4c8));
          return;
        }
        if (*(short *)(_DAT_4bffe775 + 0x15c) == 0) {
          FUN_10092484(1);
        }
      }
      if ((param_1 < 2) && (sVar4 == 1)) {
        iVar1 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14;
        FUN_10025758(2,(int)*(short *)(iVar1 + 0x18a),(int)*(short *)(iVar1 + 0x18c));
      }
      else {
        if ((param_1 < 3) && (iVar1 = FUN_1004a854(), iVar1 != 0)) {
          FUN_1004af7c();
        }
        FUN_1005cc8c();
        FUN_1003dc28();
        if (((*(short *)(_DAT_4bffe775 + 0x12e) != 0) && (sVar4 == 2)) &&
           ((*(uint *)(_DAT_4bffe775 + 0x134) >> 0x1e & 1) == 0)) {
          *(uint *)(_DAT_4bffe775 + 0x134) = *(uint *)(_DAT_4bffe775 + 0x134) | 0x40000000;
          FUN_1005f6b0(0x19,7);
          FUN_10040040();
        }
      }
    }
    else {
      FUN_10040da4();
    }
  }
  else {
    FUN_10040a38();
  }
  return;
}



// Function: FUN_1006616c at 1006616c
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006616c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(_DAT_4bffe775 + 0x182) != 0) {
    sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
    do {
      sVar1 = sVar1 + -1;
      iVar3 = sVar1 * 0x16;
      iVar2 = _DAT_60000000 + iVar3;
      if ((((int)*(char *)(iVar2 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110)) &&
          (*(short *)(iVar2 + 0xc) != 0)) &&
         (iVar2 = FUN_1002be50((int)*(short *)(_DAT_60000000 + iVar3),(int)*(short *)(iVar2 + 2)),
         -1 < iVar2)) {
        *(ushort *)(_DAT_60000000 + iVar3 + 0xc) = *(ushort *)(_DAT_60000000 + iVar3 + 0xc) & 0xefff
        ;
      }
    } while (sVar1 != 0);
  }
  return;
}



// Function: FUN_10066234 at 10066234
// Size: 136 bytes

undefined8 FUN_10066234(undefined4 *param_1)

{
  FUN_100cda40(param_1);
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((int)param_1 + 0xb2) = 0;
  *param_1 = &DAT_90010008;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0xba) = 0;
  param_1[0x2c] = 0x40004;
  *param_1 = 0x813f0014;
  return CONCAT44(param_1 + 0x2c,param_1);
}



// Function: FUN_100662bc at 100662bc
// Size: 8 bytes

undefined1 * FUN_100662bc(void)

{
  return &DAT_2c090000;
}



// Function: FUN_100662c4 at 100662c4
// Size: 104 bytes

undefined4 * FUN_100662c4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_41820020;
  }
  return param_1;
}



// Function: FUN_1006632c at 1006632c
// Size: 8 bytes

undefined4 FUN_1006632c(void)

{
  return 0x809f0018;
}



// Function: FUN_10066334 at 10066334
// Size: 104 bytes

undefined4 * FUN_10066334(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0x7c892040;
  }
  return param_1;
}



// Function: FUN_1006639c at 1006639c
// Size: 8 bytes

undefined4 FUN_1006639c(void)

{
  return 0x40840014;
}



// Function: FUN_100663a4 at 100663a4
// Size: 104 bytes

undefined4 * FUN_100663a4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100662c4(param_1);
    *param_1 = 0x88690000;
  }
  return param_1;
}



// Function: FUN_1006640c at 1006640c
// Size: 8 bytes

undefined4 FUN_1006640c(void)

{
  return 0x7c630774;
}



// Function: FUN_10066414 at 10066414
// Size: 104 bytes

undefined4 * FUN_10066414(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_5463063e;
  }
  return param_1;
}



// Function: FUN_1006647c at 1006647c
// Size: 8 bytes

undefined1 * FUN_1006647c(void)

{
  return &DAT_4800014c;
}



// Function: FUN_10066484 at 10066484
// Size: 104 bytes

undefined4 * FUN_10066484(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_a8bf0002;
  }
  return param_1;
}



// Function: FUN_100664ec at 100664ec
// Size: 8 bytes

undefined4 FUN_100664ec(void)

{
  return 0x2f050000;
}



// Function: FUN_100664f4 at 100664f4
// Size: 104 bytes

undefined4 * FUN_100664f4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_419a0050;
  }
  return param_1;
}



// Function: FUN_1006655c at 1006655c
// Size: 8 bytes

undefined1 * FUN_1006655c(void)

{
  return &DAT_807f0028;
}



// Function: FUN_10066564 at 10066564
// Size: 104 bytes

undefined4 * FUN_10066564(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0x309f003d;
  }
  return param_1;
}



// Function: FUN_100665cc at 100665cc
// Size: 8 bytes

undefined1 * FUN_100665cc(void)

{
  return &DAT_38a00001;
}



// Function: FUN_100665d4 at 100665d4
// Size: 104 bytes

undefined4 * FUN_100665d4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0x4beec599;
  }
  return param_1;
}



// Function: FUN_1006663c at 1006663c
// Size: 8 bytes

undefined1 * FUN_1006663c(void)

{
  return &DAT_80410014;
}



// Function: FUN_10066644 at 10066644
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10066644(undefined4 *param_1)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xe0), param_1 != (undefined4 *)0x0)) {
    FUN_100d4908(param_1);
    *param_1 = &DAT_2c030001;
    uVar1 = _DAT_41820010 & 0xffff0000;
    *(undefined4 *)((int)param_1 + 0xda) = _DAT_4182000c;
    *(uint *)((int)param_1 + 0xde) = uVar1;
    uVar1 = _DAT_38610003 & 0xffff0000;
    param_1[0x35] = _DAT_3860ffff;
    param_1[0x36] = uVar1;
    param_1[0x31] = 0;
    param_1[0x32] = 1;
    param_1[0x33] = 0xe;
    param_1[0x34] = 0xf;
  }
  return param_1;
}



// Function: FUN_10066700 at 10066700
// Size: 8 bytes

undefined4 FUN_10066700(void)

{
  return 0x4800011c;
}



// Function: FUN_10066708 at 10066708
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10066708(undefined4 *param_1)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xe0), param_1 != (undefined4 *)0x0)) {
    FUN_100d4ea4(param_1);
    *param_1 = 0x309f003c;
    uVar1 = _DAT_41820010 & 0xffff0000;
    *(undefined4 *)((int)param_1 + 0xda) = _DAT_4182000c;
    *(uint *)((int)param_1 + 0xde) = uVar1;
    uVar1 = _DAT_38610003 & 0xffff0000;
    param_1[0x35] = _DAT_3860ffff;
    param_1[0x36] = uVar1;
    param_1[0x31] = 0;
    param_1[0x32] = 2;
    param_1[0x33] = 0xc;
    param_1[0x34] = 0xe;
  }
  return param_1;
}



// Function: FUN_100667c4 at 100667c4
// Size: 8 bytes

undefined4 FUN_100667c4(void)

{
  return 0x30bf003d;
}



// Function: FUN_100667cc at 100667cc
// Size: 8 bytes

undefined4 FUN_100667cc(void)

{
  return 0x30df003e;
}



// Function: FUN_100667d4 at 100667d4
// Size: 8 bytes

undefined1 * FUN_100667d4(void)

{
  return &DAT_909f001c;
}



// Function: FUN_100667dc at 100667dc
// Size: 8 bytes

undefined4 FUN_100667dc(void)

{
  return 0x90bf0014;
}



// Function: FUN_100667e4 at 100667e4
// Size: 8 bytes

undefined1 * FUN_100667e4(void)

{
  return &DAT_90df0018;
}



// Function: FUN_100667ec at 100667ec
// Size: 8 bytes

undefined4 FUN_100667ec(void)

{
  return 0x887f003d;
}



// Function: FUN_100667f4 at 100667f4
// Size: 176 bytes

undefined4 * FUN_100667f4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xbc), param_1 != (undefined4 *)0x0)) {
    FUN_100cda40(param_1);
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)((int)param_1 + 0xb2) = 0;
    *param_1 = &DAT_90010008;
    param_1[0x2d] = 0;
    *(undefined2 *)(param_1 + 0x2e) = 1;
    *(undefined1 *)((int)param_1 + 0xba) = 0;
    param_1[0x2c] = 0x40004;
    *param_1 = 0x7c630774;
  }
  return param_1;
}



// Function: FUN_100668a4 at 100668a4
// Size: 848 bytes

void FUN_100668a4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_2c;
  
  uVar1 = FUN_10000a98(&DAT_5463063e,0x3d0,1);
  **(undefined4 **)(local_2c + -0x1804) = uVar1;
  uVar1 = FUN_10000a98(*(undefined4 *)(local_2c + -0x1800),0x3d0,1);
  **(undefined4 **)(local_2c + -0x17fc) = uVar1;
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100662bc();
    FUN_100662c4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006632c();
    FUN_10066334(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006639c();
    FUN_100663a4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006640c();
    FUN_10066414(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006647c();
    FUN_10066484(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100664ec();
    FUN_100664f4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006655c();
    FUN_10066564(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100665cc();
    FUN_100665d4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006663c();
    FUN_10066644(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_10066700();
    FUN_10066708(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667c4();
    puVar2 = (undefined4 *)FUN_100f56e4(0xec);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_10066708(puVar2);
      *puVar2 = *(undefined4 *)(local_2c + -0x17f8);
      *(undefined2 *)(puVar2 + 0x38) = 0xffff;
      puVar2[0x39] = 0;
      *(undefined1 *)(puVar2 + 0x3a) = 1;
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667cc();
    puVar2 = (undefined4 *)FUN_100f56e4(200);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100d451c(puVar2);
      *puVar2 = *(undefined4 *)(local_2c + -0x17f4);
      puVar2[0x31] = 0;
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667d4();
    puVar2 = (undefined4 *)FUN_100f56e4(0xb4);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100cd9a4(puVar2);
      *puVar2 = *(undefined4 *)(local_2c + -0x17f0);
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667dc();
    iVar3 = FUN_100f56e4(0xc0);
    if (iVar3 != 0) {
      FUN_10066234(iVar3);
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667e4();
    puVar2 = (undefined4 *)FUN_100f56e4(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100b2578(puVar2);
      *puVar2 = *(undefined4 *)(local_2c + -0x17ec);
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667ec();
    FUN_100667f4(0);
  }
  return;
}



// Function: FUN_10066bf4 at 10066bf4
// Size: 140 bytes

int FUN_10066bf4(int param_1)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x2a), param_1 != 0)) {
    FUN_100ef8c8(param_1);
    FUN_100ef824(param_1 + 6);
    FUN_10000000(param_1 + 0xc);
    FUN_100f0688(param_1 + 0x1e);
  }
  return param_1;
}



// Function: FUN_10066c80 at 10066c80
// Size: 132 bytes

void FUN_10066c80(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_100f0538(param_1);
    FUN_100f03e8(param_1 + 6);
    FUN_100016f8(param_1 + 0xc);
    FUN_100f0788(param_1 + 0x1e);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10066d04 at 10066d04
// Size: 240 bytes

undefined4 * FUN_10066d04(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100b02d0(param_1 + 7);
    param_1[3] = 0;
    param_1[2] = 0;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    FUN_100b057c(param_1,0);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_100b057c(param_1,1);
    FUN_100b0384();
    FUN_10002fd0();
    uVar1 = FUN_100ed918();
    param_1[9] = uVar1;
    FUN_10105830(param_1 + 4);
    param_1[3] = param_1[9];
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return param_1;
}



// Function: FUN_10066df4 at 10066df4
// Size: 112 bytes

void FUN_10066df4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_10105920(param_1 + 0x10);
    uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10066e64 at 10066e64
// Size: 648 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10066e64(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [8];
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [276];
  undefined4 local_2c;
  
  if (DAT_7c0903af == '\0') {
    *param_2 = 1;
    bVar5 = *(char *)(param_1 + 0x2c) == '\0';
    *(bool *)(param_1 + 0x2c) = bVar5;
  }
  else {
    bVar5 = false;
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = FUN_10000e58();
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    else {
      uVar1 = FUN_10000e88(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar2 = FUN_100017b8(*(undefined4 *)(param_1 + 8),0xd);
        if ((iVar2 == 0) || (iVar2 = FUN_100017b8(*(undefined4 *)(param_1 + 8),0xf), iVar2 == 0)) {
          uVar1 = FUN_10000e88(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(param_1 + 8) = uVar1;
        }
        else {
          *param_2 = *(undefined2 *)(**(int **)(**(int **)(param_1 + 8) + 0x16) + 0x20);
          local_158 = *(undefined4 *)(**(int **)(param_1 + 8) + 0x22);
          uStack_154 = *(undefined4 *)(**(int **)(param_1 + 8) + 0x26);
          local_148 = local_158;
          local_144 = uStack_154;
          uVar1 = FUN_100b0574(auStack_150);
          uVar3 = FUN_100b0578(param_1);
          uVar4 = FUN_100b0578(&local_158);
          iVar2 = FUN_10000e70(uVar4,uVar3,uVar1);
          bVar5 = true;
          if (iVar2 == 0) {
            uVar1 = FUN_10000e88(*(undefined4 *)(param_1 + 8));
            *(undefined4 *)(param_1 + 8) = uVar1;
            bVar5 = false;
          }
          else {
            FUN_100b057c(auStack_150,0);
            FUN_100b0384();
            FUN_10003318();
            FUN_100b057c(auStack_150,1);
            FUN_100b0384();
            FUN_10003318();
            FUN_100ee64c(auStack_140);
            uVar1 = local_2c;
            uVar3 = FUN_100b0578(auStack_150);
            FUN_10003150(uVar1,uVar3);
            FUN_10002be0(local_2c,*(undefined4 *)(param_1 + 0xc),local_2c);
            FUN_10002be0(local_2c,*(undefined4 *)(_DAT_80a2db8e + 0x18),local_2c);
            FUN_10001548(local_2c);
            FUN_100ee77c(auStack_140,2);
          }
        }
      } while ((*(int *)(param_1 + 8) != 0) && (bVar5 == false));
    }
  }
  return bVar5;
}



// Function: FUN_100670ec at 100670ec
// Size: 140 bytes

char * FUN_100670ec(char *param_1,char param_2)

{
  undefined4 *puVar1;
  
  if (((param_1 != (char *)0x0) || (param_1 = (char *)FUN_100f56e4(1), param_1 != (char *)0x0)) &&
     (*param_1 = param_2, param_2 != '\0')) {
    if (param_2 == '\x01') {
      puVar1 = (undefined4 *)&DAT_480000f4;
    }
    else {
      puVar1 = (undefined4 *)&DAT_2c870000;
    }
    FUN_100035d0(*puVar1);
  }
  return param_1;
}



// Function: FUN_10067178 at 10067178
// Size: 128 bytes

void FUN_10067178(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      if (*param_1 == '\x01') {
        puVar1 = (undefined4 *)&DAT_480000f4;
      }
      else {
        puVar1 = (undefined4 *)&DAT_2c870000;
      }
      FUN_100030c0(*puVar1);
    }
    if ((param_1 != (char *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10067270 at 10067270
// Size: 76 bytes

void FUN_10067270(void)

{
  int local_24;
  
  FUN_100b2268(&DAT_3860ffff);
  FUN_100021c0();
  FUN_100b2268(*(undefined4 *)(local_24 + -0xc38));
  FUN_100008b8();
  FUN_10000030();
  return;
}



// Function: FUN_100672bc at 100672bc
// Size: 1412 bytes

void FUN_100672bc(byte *param_1,short *param_2,undefined1 param_3,short param_4,int *param_5,
                 undefined4 param_6,short param_7,short param_8)

{
  byte bVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uStack00000023;
  short in_stack_0000003a;
  short in_stack_0000003e;
  short in_stack_00000042;
  undefined1 auStack_254 [48];
  undefined1 auStack_224 [8];
  short local_21c [2];
  undefined2 local_218;
  undefined2 local_216;
  undefined2 local_210;
  undefined2 local_20e;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_200;
  undefined2 local_1fe;
  short local_1f8 [2];
  short local_1f4;
  undefined1 auStack_1f0 [48];
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  short local_1a0;
  short local_19c [4];
  char local_194 [256];
  undefined4 local_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined2 local_78;
  undefined2 local_76;
  undefined1 *local_70;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  
  iVar7 = (int)param_4;
  uStack00000023 = param_3;
  FUN_10066bf4(auStack_1f0);
  local_1c0 = param_5[0x26];
  iStack_1bc = param_5[0x27];
  iStack_1b8 = param_5[0x28];
  FUN_100f0788(&local_1c0);
  FUN_100b2264(auStack_224);
  FUN_10001ad0();
  FUN_100ee844(auStack_1b0,uStack00000023);
  local_1a0 = FUN_100ef96c(auStack_1a8);
  psVar2 = local_1f8;
  if ((local_1f8 != (short *)0x0) || (psVar2 = (short *)FUN_100f56e4(8), psVar2 != (short *)0x0)) {
    *psVar2 = *param_2;
    psVar2[1] = param_2[1];
    psVar2[2] = param_2[2];
    psVar2[3] = param_2[3];
  }
  FUN_100b08d4(local_19c,local_1f8);
  uVar4 = (uint)*param_1;
  FUN_10002f88(local_194,param_1 + 1,uVar4);
  local_194[uVar4] = '\0';
  iVar5 = 1;
  iVar6 = 0;
  if (uVar4 != 0) {
    local_94 = 0;
    do {
      if ((local_194[iVar6] == '\r') || (local_194[iVar6] == '\n')) {
        iVar5 = (int)(short)((short)iVar5 + 1);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < (int)uVar4);
  }
  uVar4 = (int)local_19c[0] - local_1a0 * iVar5;
  local_1f8[0] = local_1f8[0] +
                 (short)((int)uVar4 >> 1) + (ushort)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  local_1f4 = (short)(local_1a0 * iVar5) + local_1f8[0];
  FUN_100e1448(auStack_88,local_1f8);
  FUN_10117884((int)param_5 + (int)*(short *)(*param_5 + 0x288),auStack_88,auStack_90);
  local_78 = 0xffff;
  local_76 = 0xffff;
  FUN_100b06d4(auStack_90);
  FUN_10066d04(auStack_254,auStack_90);
  iVar5 = FUN_10066e64(auStack_254,local_21c);
  if (iVar5 != 0) {
    local_70 = auStack_90;
    do {
      if (3 < local_21c[0]) {
        iVar5 = FUN_10117884((int)param_5 + (int)*(short *)(*param_5 + 0x758));
        if (iVar5 == 0) {
          if (param_7 != 0xff) {
            iVar5 = (int)param_7;
            if (*(char *)(param_5 + 0x21) != '\0') {
              iVar5 = (int)in_stack_0000003a;
            }
            FUN_100b2268(iVar5 * 6 + 0x408600a0);
            FUN_100021c0();
            local_200 = 1;
            local_1fe = 0;
            FUN_100b05d4(local_1f8,auStack_6c,&local_200);
            bVar1 = *param_1;
            uVar3 = FUN_100b1b08(param_1);
            FUN_100efdd0(uVar3,bVar1,auStack_6c,iVar7,0,0,0);
            local_208 = 1;
            local_206 = 1;
            FUN_100b05d4(local_1f8,auStack_64,&local_208);
            bVar1 = *param_1;
            uVar3 = FUN_100b1b08(param_1);
            FUN_100efdd0(uVar3,bVar1,auStack_64,iVar7,0,0,0,0);
          }
          if (param_8 != 0xff) {
            iVar5 = (int)param_8;
            if (*(char *)(param_5 + 0x21) != '\0') {
              iVar5 = (int)in_stack_0000003e;
            }
            FUN_100b2268(iVar5 * 6 + 0x408600a0);
            FUN_100021c0();
            local_210 = 0xffff;
            local_20e = 0;
            FUN_100b05d4(local_1f8,auStack_5c,&local_210);
            bVar1 = *param_1;
            uVar3 = FUN_100b1b08(param_1);
            FUN_100efdd0(uVar3,bVar1,auStack_5c,iVar7,0,0,0);
            local_218 = 0xffff;
            local_216 = 0xffff;
            FUN_100b05d4(local_1f8,auStack_54,&local_218);
            bVar1 = *param_1;
            uVar3 = FUN_100b1b08(param_1);
            FUN_100efdd0(uVar3,bVar1,auStack_54,iVar7,0,0,0,0);
          }
        }
        iVar5 = FUN_10117884((int)param_5 + (int)*(short *)(*param_5 + 0x758));
        if (iVar5 == 0) {
          if (*(char *)(param_5 + 0x21) == '\0') {
            FUN_100b2268(param_6);
            FUN_100021c0();
          }
          else {
            FUN_100b2268(auStack_224);
            FUN_100021c0();
          }
        }
        else {
          FUN_100b2268(in_stack_00000042 * 6 + 0x408600a0);
          FUN_100021c0();
        }
      }
      bVar1 = *param_1;
      uVar3 = FUN_100b1b08(param_1);
      FUN_100efdd0(uVar3,bVar1,local_1f8,iVar7,0,0,0);
      iVar5 = FUN_10066e64(auStack_254,local_21c);
    } while (iVar5 != 0);
  }
  FUN_10066df4(auStack_254,2);
  FUN_100ee8e8(auStack_1b0,2);
  FUN_10066c80(auStack_1f0,2);
  return;
}



// Function: FUN_10067848 at 10067848
// Size: 40 bytes

void FUN_10067848(void)

{
  FUN_10066334(0);
  return;
}



// Function: FUN_10067870 at 10067870
// Size: 52 bytes

void FUN_10067870(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x77686261,param_2);
  return;
}



// Function: FUN_100678a4 at 100678a4
// Size: 256 bytes

void FUN_100678a4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_24);
  FUN_10066d04(auStack_58,auStack_24);
  iVar1 = FUN_10066e64(auStack_58,local_28);
  while (iVar1 != 0) {
    if (3 < local_28[0]) {
      FUN_100f03e8(&DAT_80df0024);
      FUN_100b0578(auStack_24);
      FUN_10002c58();
    }
    iVar1 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_88,2);
  return;
}



// Function: FUN_100679ac at 100679ac
// Size: 40 bytes

void FUN_100679ac(void)

{
  FUN_100662c4(0);
  return;
}



// Function: FUN_100679d4 at 100679d4
// Size: 52 bytes

void FUN_100679d4(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x67726261,param_2);
  return;
}



// Function: FUN_10067a08 at 10067a08
// Size: 256 bytes

void FUN_10067a08(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_24);
  FUN_10066d04(auStack_58,auStack_24);
  iVar1 = FUN_10066e64(auStack_58,local_28);
  while (iVar1 != 0) {
    if (3 < local_28[0]) {
      FUN_100f03e8(&DAT_4182000c);
      FUN_100b0578(auStack_24);
      FUN_10002c58();
    }
    iVar1 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_88,2);
  return;
}



// Function: FUN_10067b10 at 10067b10
// Size: 40 bytes

void FUN_10067b10(void)

{
  FUN_100663a4(0);
  return;
}



// Function: FUN_10067b38 at 10067b38
// Size: 60 bytes

void FUN_10067b38(int *param_1,undefined1 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),param_2);
  return;
}



// Function: FUN_10067b74 at 10067b74
// Size: 496 bytes

void FUN_10067b74(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10067a08(param_1,param_2,param_3);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar1 = FUN_10066e64(auStack_68,local_38);
  while (iVar1 != 0) {
    if (3 < local_38[0]) {
      FUN_100f0538(&DAT_80df0024);
      FUN_10000270((int)(short)(local_2e + -1),(int)local_34);
      FUN_10001d88((int)local_32,(int)local_34);
      FUN_10001d88((int)local_32,(int)local_30);
      FUN_100f0538(&DAT_39200001);
      FUN_10000270((int)(short)(local_32 + 1),(int)(short)(local_30 + -1));
      FUN_10001d88((int)(short)(local_2e + -1),(int)(short)(local_30 + -1));
      FUN_10001d88((int)(short)(local_2e + -1),(int)(short)(local_34 + 1));
    }
    iVar1 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}



// Function: FUN_10067d6c at 10067d6c
// Size: 40 bytes

void FUN_10067d6c(void)

{
  FUN_10066484(0);
  return;
}



// Function: FUN_10067d94 at 10067d94
// Size: 52 bytes

void FUN_10067d94(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x33646c74,param_2);
  return;
}



// Function: FUN_10067dc8 at 10067dc8
// Size: 452 bytes

void FUN_10067dc8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_2e;
  
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar1 = FUN_10066e64(auStack_68,local_38);
  while (iVar1 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(0x80a2db7e);
      FUN_10000270((int)local_32,(int)local_34);
      FUN_10001d88((int)local_2e,(int)local_34);
    }
    else {
      FUN_100f0538(&DAT_39200001);
      FUN_10000270((int)local_32,(int)local_34);
      FUN_10001d88((int)local_2e,(int)local_34);
      FUN_100f0538(&DAT_80df0024);
      FUN_10000270((int)local_32,(int)(short)(local_34 + 1));
      FUN_10001d88((int)local_2e,(int)(short)(local_34 + 1));
    }
    iVar1 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}



// Function: FUN_10067f94 at 10067f94
// Size: 40 bytes

void FUN_10067f94(void)

{
  FUN_100664f4(0);
  return;
}



// Function: FUN_10067fbc at 10067fbc
// Size: 52 bytes

void FUN_10067fbc(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x33646c62,param_2);
  return;
}



// Function: FUN_10067ff0 at 10067ff0
// Size: 468 bytes

void FUN_10067ff0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  short local_38 [2];
  undefined1 auStack_34 [2];
  short local_32;
  short local_30;
  short local_2e;
  
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,auStack_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar1 = FUN_10066e64(auStack_68,local_38);
  while (iVar1 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(0x80a2db7e);
      FUN_10000270((int)local_32,(int)(short)(local_30 + -1));
      FUN_10001d88((int)local_2e,(int)(short)(local_30 + -1));
    }
    else {
      FUN_100f0538(&DAT_39200001);
      FUN_10000270((int)local_32,(int)(short)(local_30 + -1));
      FUN_10001d88((int)local_2e,(int)(short)(local_30 + -1));
      FUN_100f0538(&DAT_80df0024);
      FUN_10000270((int)local_32,(int)local_30);
      FUN_10001d88((int)local_2e,(int)local_30);
    }
    iVar1 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}



// Function: FUN_100681cc at 100681cc
// Size: 40 bytes

void FUN_100681cc(void)

{
  FUN_100665d4(0);
  return;
}



// Function: FUN_100681f4 at 100681f4
// Size: 52 bytes

void FUN_100681f4(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x33646c6c,param_2);
  return;
}



// Function: FUN_10068228 at 10068228
// Size: 452 bytes

void FUN_10068228(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar1 = FUN_10066e64(auStack_68,local_38);
  while (iVar1 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(0x80a2db7e);
      FUN_10000270((int)local_32,(int)local_34);
      FUN_10001d88((int)local_32,(int)local_30);
    }
    else {
      FUN_100f0538(&DAT_39200001);
      FUN_10000270((int)local_32,(int)local_34);
      FUN_10001d88((int)local_32,(int)local_30);
      FUN_100f0538(&DAT_80df0024);
      FUN_10000270((int)(short)(local_32 + 1),(int)local_34);
      FUN_10001d88((int)(short)(local_32 + 1),(int)local_30);
    }
    iVar1 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}



// Function: FUN_100683f4 at 100683f4
// Size: 40 bytes

void FUN_100683f4(void)

{
  FUN_10066564(0);
  return;
}



// Function: FUN_1006841c at 1006841c
// Size: 52 bytes

void FUN_1006841c(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x33646c72,param_2);
  return;
}



// Function: FUN_10068450 at 10068450
// Size: 468 bytes

void FUN_10068450(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  short local_38 [2];
  short local_34 [2];
  short local_30;
  short local_2e;
  
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar1 = FUN_10066e64(auStack_68,local_38);
  while (iVar1 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(0x80a2db7e);
      FUN_10000270((int)(short)(local_2e + -1),(int)local_34[0]);
      FUN_10001d88((int)(short)(local_2e + -1),(int)local_30);
    }
    else {
      FUN_100f0538(&DAT_39200001);
      FUN_10000270((int)(short)(local_2e + -1),(int)local_34[0]);
      FUN_10001d88((int)(short)(local_2e + -1),(int)local_30);
      FUN_100f0538(&DAT_80df0024);
      FUN_10000270((int)local_2e,(int)local_34[0]);
      FUN_10001d88((int)local_2e,(int)local_30);
    }
    iVar1 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}



// Function: FUN_1006862c at 1006862c
// Size: 40 bytes

void FUN_1006862c(void)

{
  FUN_10066414(0);
  return;
}



// Function: FUN_10068654 at 10068654
// Size: 52 bytes

void FUN_10068654(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x33646672,param_2);
  return;
}



// Function: FUN_10068688 at 10068688
// Size: 668 bytes

void FUN_10068688(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar1 = FUN_10066e64(auStack_68,local_38);
  while (iVar1 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(0x80a2db7e);
      uVar2 = FUN_100b0574(&local_34);
      FUN_10003348(uVar2,1,1);
      FUN_100b0578(&local_34);
      FUN_100021d8();
      uVar2 = FUN_100b0574(&local_34);
      FUN_10003348(uVar2,0xffffffff,0xffffffff);
    }
    else {
      FUN_100b2268(&DAT_40860688);
      FUN_100021c0();
      FUN_10000270((int)local_2e,(int)local_34);
      FUN_10001d88((int)local_32,(int)local_34);
      FUN_10001d88((int)local_32,(int)local_30);
      FUN_100b2268(&DAT_40860670);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_32 + 1),(int)(short)(local_30 + -1));
      FUN_10001d88((int)(short)(local_2e + -1),(int)(short)(local_30 + -1));
      FUN_10001d88((int)(short)(local_2e + -1),(int)(short)(local_34 + 1));
      FUN_100b2268(0x4086069a);
      FUN_100021c0();
      uVar2 = FUN_100b0574(&local_34);
      FUN_10003348(uVar2,1,1);
      FUN_100b0578(&local_34);
      FUN_100021d8();
      uVar2 = FUN_100b0574(&local_34);
      FUN_10003348(uVar2,0xffffffff,0xffffffff);
    }
    iVar1 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}



// Function: FUN_1006892c at 1006892c
// Size: 40 bytes

void FUN_1006892c(void)

{
  FUN_10066644(0);
  return;
}



// Function: FUN_10068954 at 10068954
// Size: 276 bytes

void FUN_10068954(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_4c;
  int local_20 [2];
  int local_18;
  
  FUN_10105d28(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),
                 *(int *)(local_4c + -0x1d4) + 0x540,0);
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xda) = *(undefined4 *)(iVar1 + 0x18);
    *(uint *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xe;
  iVar1 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}



// Function: FUN_10068a68 at 10068a68
// Size: 244 bytes

void FUN_10068a68(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_20 [2];
  int local_18;
  
  FUN_100d49ac(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xda) = *(undefined4 *)(iVar1 + 0x18);
    *(uint *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xe;
  iVar1 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}



// Function: FUN_10068b5c at 10068b5c
// Size: 88 bytes

void FUN_10068b5c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100c7f28(param_1);
  uVar2 = *(uint *)(param_1 + 0xde);
  *(undefined4 *)(iVar1 + 0xda) = *(undefined4 *)(param_1 + 0xda);
  *(uint *)(iVar1 + 0xde) = uVar2 & 0xffff0000;
  uVar2 = *(uint *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(uint *)(iVar1 + 0xd8) = uVar2 & 0xffff0000;
  return;
}



// Function: FUN_10068bb4 at 10068bb4
// Size: 36 bytes

void FUN_10068bb4(void)

{
  FUN_100c8068();
  return;
}



// Function: FUN_10068bd8 at 10068bd8
// Size: 392 bytes

void FUN_10068bd8(int *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_16c [48];
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined1 auStack_134 [16];
  undefined2 local_124;
  short local_122;
  undefined1 local_11c [260];
  
  local_11c[0] = 0;
  FUN_10066bf4(auStack_16c);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_134);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_134,&local_13c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_11c);
  puVar1 = &local_124;
  if ((&local_124 != (undefined2 *)0x0) ||
     (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
    *puVar1 = local_13c;
    puVar1[1] = local_13a;
    puVar1[2] = local_138;
    puVar1[3] = local_136;
  }
  local_122 = local_122 + (short)param_1[0x34] + 3;
  FUN_100672bc(local_11c,&local_124,0,0xfffffffe,param_1,param_1 + 0x35);
  FUN_10066c80(auStack_16c,2);
  return;
}



// Function: FUN_10068d60 at 10068d60
// Size: 108 bytes

void FUN_10068d60(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}



// Function: FUN_10068dcc at 10068dcc
// Size: 372 bytes

void FUN_10068dcc(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}



// Function: FUN_10068f40 at 10068f40
// Size: 172 bytes

void FUN_10068f40(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &local_10;
  piVar1 = &local_8;
  local_4 = param_2;
  local_8 = param_1[0x2e];
  if (param_2 < param_1[0x2e]) {
    piVar1 = &local_4;
  }
  local_c = param_1[0x2d];
  local_10 = *piVar1;
  if (*piVar1 < param_1[0x2d]) {
    piVar2 = &local_c;
  }
  if ((*piVar2 != param_1[0x2c]) && (param_1[0x2c] = *piVar2, param_3 != '\0')) {
    FUN_10117884((int)*(short *)(*param_1 + 0x480) + (int)param_1,param_1 + 0x31);
  }
  return;
}



// Function: FUN_10068fec at 10068fec
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068fec(int *param_1,char param_2,char param_3)

{
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_60000000,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_60000000,0x7a,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}



// Function: FUN_100690b0 at 100690b0
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100690b0(int *param_1,char param_2,char param_3)

{
  if (param_2 != *(char *)((int)param_1 + 0x85)) {
    *(char *)((int)param_1 + 0x85) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_41860018,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_41860018,0x75,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}



// Function: FUN_10069174 at 10069174
// Size: 484 bytes

void FUN_10069174(int *param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_174 [48];
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined1 auStack_13c [16];
  undefined2 local_12c;
  short local_12a;
  undefined1 local_124 [256];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_174);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_13c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_13c,&local_144);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,auStack_24);
  FUN_10067270();
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  else {
    uVar1 = FUN_100b0574(auStack_24);
    FUN_10003348(uVar1,2,2);
    FUN_100b0578(auStack_24);
    FUN_100021d8();
  }
  local_124[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_124);
  puVar2 = &local_12c;
  if ((&local_12c != (undefined2 *)0x0) ||
     (puVar2 = (undefined2 *)FUN_100f56e4(8), puVar2 != (undefined2 *)0x0)) {
    *puVar2 = local_144;
    puVar2[1] = local_142;
    puVar2[2] = local_140;
    puVar2[3] = local_13e;
  }
  local_12a = local_12a + (short)param_1[0x34] + 3;
  FUN_100672bc(local_124,&local_12c,0,0xfffffffe,param_1,param_1 + 0x35,0xff);
  FUN_10066c80(auStack_174,2);
  return;
}



// Function: FUN_10069358 at 10069358
// Size: 368 bytes

void FUN_10069358(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [4];
  int local_34;
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_38);
  local_34 = local_34 + param_1[0x34];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_38,auStack_24);
  FUN_10066d04(auStack_68,auStack_24);
  iVar1 = FUN_10066e64(auStack_68,local_28);
  while (iVar1 != 0) {
    if (local_28[0] < 2) {
      uVar2 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar2,1,1);
      FUN_10002118(0x80a2db76);
      FUN_10002130(0xb);
      FUN_100b0578(auStack_24);
      FUN_10002148();
      uVar2 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar2,0xffffffff,0xffffffff);
    }
    iVar1 = FUN_10066e64(auStack_68,local_28);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_98,2);
  return;
}



// Function: FUN_100694c8 at 100694c8
// Size: 564 bytes

void FUN_100694c8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  short local_30 [2];
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  
  FUN_10066bf4(auStack_90);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,&local_2c);
  FUN_10066d04(auStack_60,&local_2c);
  iVar1 = FUN_10066e64(auStack_60,local_30);
  while (iVar1 != 0) {
    if (local_30[0] < 3) {
      FUN_100f0538(&DAT_3860ffff);
    }
    else {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
      if (iVar1 == 0) {
        FUN_100b2268(0x4086066a);
        FUN_100021c0();
        FUN_10000270((int)(short)(local_2a + 1),(int)(short)(local_28 + -1));
        FUN_10001d88((int)(short)(local_26 + -1),(int)(short)(local_28 + -1));
        FUN_10001d88((int)(short)(local_26 + -1),(int)(short)(local_2c + 1));
        FUN_100b2268(&DAT_40860682);
        FUN_100021c0();
        FUN_10000270((int)local_26,(int)local_2c);
        FUN_10001d88((int)local_2a,(int)local_2c);
        FUN_10001d88((int)local_2a,(int)local_28);
        FUN_100f0538(&DAT_3860ffff);
      }
      else {
        FUN_100f0538(&DAT_48000008);
      }
    }
    uVar2 = FUN_100b0574(&local_2c);
    FUN_10003348(uVar2,1,1);
    FUN_100b0578(&local_2c);
    FUN_100021d8();
    uVar2 = FUN_100b0574(&local_2c);
    FUN_10003348(uVar2,0xffffffff,0xffffffff);
    iVar1 = FUN_10066e64(auStack_60,local_30);
  }
  FUN_10066df4(auStack_60,2);
  FUN_10066c80(auStack_90,2);
  return;
}



// Function: FUN_100696fc at 100696fc
// Size: 448 bytes

void FUN_100696fc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_ac;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  short local_28 [2];
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,&local_24);
  uVar1 = FUN_100b0574(&local_24);
  FUN_10003348(uVar1,2,2);
  FUN_100b2268(*(int *)(local_ac + -0x1d4) + 0x5be);
  FUN_100008b8();
  FUN_100b0578(&local_24);
  FUN_10002c58();
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (iVar2 != 0) {
    FUN_10066d04(auStack_58,&local_24);
    iVar2 = FUN_10066e64(auStack_58,local_28);
    while (iVar2 != 0) {
      if ((2 < local_28[0]) &&
         (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758)), iVar2 != 0)) {
        FUN_100f0538(&DAT_48000008);
      }
      FUN_10000270((int)(short)(local_22 + -1),(int)local_20);
      FUN_10001d88((int)(short)(local_1e + -1),(int)local_24);
      FUN_10000270((int)local_22,(int)local_24);
      FUN_10001d88((int)local_1e,(int)local_20);
      iVar2 = FUN_10066e64(auStack_58,local_28);
    }
    FUN_10066df4(auStack_58,2);
  }
  FUN_10066c80(auStack_88,2);
  return;
}



// Function: FUN_100698bc at 100698bc
// Size: 80 bytes

void FUN_100698bc(int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = param_2[1];
  param_1[0x35] = *param_2;
  param_1[0x36] = uVar1 & 0xffff0000;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_10069914 at 10069914
// Size: 40 bytes

void FUN_10069914(void)

{
  FUN_10066708(0);
  return;
}



// Function: FUN_1006993c at 1006993c
// Size: 276 bytes

void FUN_1006993c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_4c;
  int local_20 [2];
  int local_18;
  
  FUN_100d52ec(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),
                 *(int *)(local_4c + -0x1d4) + 0x540,0);
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xda) = *(undefined4 *)(iVar1 + 0x18);
    *(uint *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xc;
  iVar1 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}



// Function: FUN_10069a50 at 10069a50
// Size: 244 bytes

void FUN_10069a50(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_20 [2];
  int local_18;
  
  FUN_100d4f48(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xda) = *(undefined4 *)(iVar1 + 0x18);
    *(uint *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xc;
  iVar1 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}



// Function: FUN_10069b44 at 10069b44
// Size: 88 bytes

void FUN_10069b44(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100c7f28(param_1);
  uVar2 = *(uint *)(param_1 + 0xde);
  *(undefined4 *)(iVar1 + 0xda) = *(undefined4 *)(param_1 + 0xda);
  *(uint *)(iVar1 + 0xde) = uVar2 & 0xffff0000;
  uVar2 = *(uint *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(uint *)(iVar1 + 0xd8) = uVar2 & 0xffff0000;
  return;
}



// Function: FUN_10069b9c at 10069b9c
// Size: 392 bytes

void FUN_10069b9c(int *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_16c [48];
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined1 auStack_134 [16];
  undefined2 local_124;
  short local_122;
  undefined1 local_11c [260];
  
  local_11c[0] = 0;
  FUN_10066bf4(auStack_16c);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_134);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_134,&local_13c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_11c);
  puVar1 = &local_124;
  if ((&local_124 != (undefined2 *)0x0) ||
     (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
    *puVar1 = local_13c;
    puVar1[1] = local_13a;
    puVar1[2] = local_138;
    puVar1[3] = local_136;
  }
  local_122 = local_122 + (short)param_1[0x34] + 4;
  FUN_100672bc(local_11c,&local_124,0,0xfffffffe,param_1,param_1 + 0x35);
  FUN_10066c80(auStack_16c,2);
  return;
}



// Function: FUN_10069d24 at 10069d24
// Size: 108 bytes

void FUN_10069d24(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}



// Function: FUN_10069d90 at 10069d90
// Size: 372 bytes

void FUN_10069d90(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}



// Function: FUN_10069f04 at 10069f04
// Size: 160 bytes

void FUN_10069f04(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &local_10;
  piVar1 = &local_8;
  local_4 = param_2;
  local_8 = param_1[0x2e];
  if (param_2 < param_1[0x2e]) {
    piVar1 = &local_4;
  }
  local_c = param_1[0x2d];
  local_10 = *piVar1;
  if (*piVar1 < param_1[0x2d]) {
    piVar2 = &local_c;
  }
  if (*piVar2 != param_1[0x2c]) {
    param_1[0x2c] = *piVar2;
    FUN_10117884((int)*(short *)(*param_1 + 0x480) + (int)param_1,param_1 + 0x31);
  }
  return;
}



// Function: FUN_10069fa4 at 10069fa4
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10069fa4(int *param_1,char param_2,char param_3)

{
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_60000000,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_60000000,0x7a,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}



// Function: FUN_1006a068 at 1006a068
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006a068(int *param_1,char param_2,char param_3)

{
  if (param_2 != *(char *)((int)param_1 + 0x85)) {
    *(char *)((int)param_1 + 0x85) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_41860018,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_41860018,0x75,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}



// Function: FUN_1006a12c at 1006a12c
// Size: 616 bytes

void FUN_1006a12c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int local_1a4;
  undefined1 auStack_174 [48];
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined1 auStack_13c [16];
  undefined2 local_12c;
  short local_12a;
  undefined1 local_124 [256];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_174);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_13c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_13c,&local_144);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,auStack_24);
  FUN_10067270();
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  else {
    uVar1 = FUN_100b0574(auStack_24);
    FUN_10003348(uVar1,1,1);
    FUN_100b0578(auStack_24);
    FUN_100034e0();
    uVar1 = FUN_100b0574(auStack_24);
    FUN_10003348(uVar1,1,1);
    FUN_100f03e8((int)param_1 + 0xda);
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1);
    if (iVar2 == 0) {
      FUN_100b0578(auStack_24);
      FUN_10003390();
    }
    else {
      FUN_10002118(*(int *)(local_1a4 + -0xb0) + 0xc2);
      FUN_100b0578(auStack_24);
      FUN_100034e0();
    }
  }
  local_124[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_124);
  puVar3 = &local_12c;
  if ((&local_12c != (undefined2 *)0x0) ||
     (puVar3 = (undefined2 *)FUN_100f56e4(8), puVar3 != (undefined2 *)0x0)) {
    *puVar3 = local_144;
    puVar3[1] = local_142;
    puVar3[2] = local_140;
    puVar3[3] = local_13e;
  }
  local_12a = local_12a + (short)param_1[0x34] + 4;
  FUN_100672bc(local_124,&local_12c,0,0xfffffffe,param_1,param_1 + 0x35,0xff);
  FUN_10066c80(auStack_174,2);
  return;
}



// Function: FUN_1006a394 at 1006a394
// Size: 368 bytes

void FUN_1006a394(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [4];
  int local_34;
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_38);
  local_34 = local_34 + param_1[0x34];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_38,auStack_24);
  FUN_10066d04(auStack_68,auStack_24);
  iVar1 = FUN_10066e64(auStack_68,local_28);
  while (iVar1 != 0) {
    if (local_28[0] < 2) {
      uVar2 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar2,1,1);
      FUN_10002118(0x80a2db76);
      FUN_10002130(0xb);
      FUN_100b0578(auStack_24);
      FUN_10002148();
      uVar2 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar2,0xffffffff,0xffffffff);
    }
    iVar1 = FUN_10066e64(auStack_68,local_28);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_98,2);
  return;
}



// Function: FUN_1006a504 at 1006a504
// Size: 304 bytes

void FUN_1006a504(int *param_1)

{
  int iVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,auStack_24);
  FUN_10066d04(auStack_58,auStack_24);
  iVar1 = FUN_10066e64(auStack_58,local_28);
  while (iVar1 != 0) {
    if (2 < local_28[0]) {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
      if (iVar1 == 0) {
        FUN_100f0538(&DAT_3860ffff);
      }
      else {
        FUN_100f0538(&DAT_48000008);
      }
    }
    FUN_100b0578(auStack_24);
    FUN_100034e0();
    iVar1 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_88,2);
  return;
}



// Function: FUN_1006a634 at 1006a634
// Size: 2996 bytes

void FUN_1006a634(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_f4;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  short local_40 [2];
  short local_3c;
  short local_3a;
  
  FUN_10066bf4(auStack_d0);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,&local_3c);
  uVar1 = FUN_100b0574(&local_3c);
  FUN_10003348(uVar1,1,1);
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar2 == 0) {
    FUN_100f03e8(*(undefined4 *)(local_f4 + -0xc38));
  }
  else {
    FUN_100f03e8((int)param_1 + 0xda);
  }
  FUN_100b0578(&local_3c);
  FUN_10003390();
  uVar1 = FUN_100b0574(&local_3c);
  FUN_10003348(uVar1,0xffffffff,0xffffffff);
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
    if (iVar2 == 0) {
      FUN_10066d04(auStack_70,&local_3c);
      iVar2 = FUN_10066e64(auStack_70,local_40);
      while (iVar2 != 0) {
        if (2 < local_40[0]) {
          FUN_100f0538(&DAT_4182000c);
          FUN_10000270((int)(short)(local_3a + 6),(int)(short)(local_3c + 2));
          FUN_10001d88((int)(short)(local_3a + 3),(int)(short)(local_3c + 5));
          FUN_10000270((int)(short)(local_3a + 4),(int)(short)(local_3c + 5));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 2));
          FUN_10000270((int)(short)(local_3a + 3),(int)(short)(local_3c + 5));
          FUN_10001d88((int)(short)(local_3a + 3),(int)(short)(local_3c + 7));
          FUN_100f0538(&DAT_2f890000);
          FUN_10000270((int)(short)(local_3a + 3),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 4),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 4),(int)(short)(local_3c + 6));
          FUN_10001d88((int)(short)(local_3a + 6),(int)(short)(local_3c + 6));
          FUN_10001d88((int)(short)(local_3a + 6),(int)(short)(local_3c + 4));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 4));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 3));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 3));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 2));
          FUN_10000270((int)(short)(local_3a + 5),(int)(short)(local_3c + 5));
          FUN_10001d88((int)(short)(local_3a + 5),(int)(short)(local_3c + 5));
          FUN_10000270((int)(short)(local_3a + 7),(int)(short)(local_3c + 5));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 5));
          FUN_10000270((int)(short)(local_3a + 5),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 5),(int)(short)(local_3c + 7));
          FUN_100f0538(&DAT_39200000);
          FUN_10000270((int)(short)(local_3a + 3),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 5),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 5),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 6),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 6),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 6));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 6));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 4));
          FUN_100f0538(&DAT_39200001);
          FUN_10000270((int)(short)(local_3a + 6),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 2));
          FUN_100f0538(&DAT_48000008);
          FUN_10000270((int)(short)(local_3a + 4),(int)(short)(local_3c + 10));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 10));
          FUN_10000270((int)(short)(local_3a + 8),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 8));
          FUN_10000270((int)(short)(local_3a + 10),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 10),(int)(short)(local_3c + 4));
        }
        iVar2 = FUN_10066e64(auStack_70,local_40);
      }
      FUN_10066df4(auStack_70,2);
    }
  }
  else {
    FUN_10066d04(auStack_a0,&local_3c);
    iVar2 = FUN_10066e64(auStack_a0,local_40);
    while (iVar2 != 0) {
      if (local_40[0] < 3) {
        FUN_100f0538(&DAT_3860ffff);
      }
      else {
        iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
        if (iVar2 == 0) {
          FUN_100f0538(&DAT_4182000c);
          FUN_10000270((int)(short)(local_3a + 9),(int)(short)(local_3c + 5));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 7));
          FUN_10000270((int)(short)(local_3a + 5),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 9));
          FUN_100f0538(&DAT_2f890000);
          FUN_10000270((int)(short)(local_3a + 3),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 4),(int)(short)(local_3c + 9));
          FUN_10000270((int)(short)(local_3a + 9),(int)(short)(local_3c + 3));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 4));
          FUN_100f0538(&DAT_39200000);
          FUN_10000270((int)(short)(local_3a + 2),(int)(short)(local_3c + 9));
          FUN_10001d88((int)(short)(local_3a + 2),(int)(short)(local_3c + 8));
          FUN_10001d88((int)(short)(local_3a + 3),(int)(short)(local_3c + 8));
          FUN_10000270((int)(short)(local_3a + 8),(int)(short)(local_3c + 3));
          FUN_10001d88((int)(short)(local_3a + 8),(int)(short)(local_3c + 2));
          FUN_10001d88((int)(short)(local_3a + 9),(int)(short)(local_3c + 2));
          FUN_100f0538(&DAT_39200001);
          FUN_10000270((int)(short)(local_3a + 2),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 2),(int)(short)(local_3c + 4));
          FUN_10001d88((int)(short)(local_3a + 4),(int)(short)(local_3c + 2));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 2));
          FUN_100f0538(&DAT_48000008);
          FUN_10000270((int)(short)(local_3a + 1),(int)(short)(local_3c + 7));
          FUN_10001d88((int)(short)(local_3a + 1),(int)(short)(local_3c + 4));
          FUN_10001d88((int)(short)(local_3a + 4),(int)(short)(local_3c + 1));
          FUN_10001d88((int)(short)(local_3a + 7),(int)(short)(local_3c + 1));
          FUN_10000270((int)(short)(local_3a + 2),(int)(short)(local_3c + 2));
          FUN_10001d88((int)(short)(local_3a + 2),(int)(short)(local_3c + 2));
          FUN_100f0538(&DAT_3860ffff);
        }
        else {
          FUN_100f0538(&DAT_48000008);
        }
      }
      uVar1 = FUN_100b0574(&local_3c);
      FUN_10003348(uVar1,3,3);
      uVar1 = FUN_100b0578(&local_3c);
      FUN_100019e0(uVar1,0x80a2db7e);
      uVar1 = FUN_100b0574(&local_3c);
      FUN_10003348(uVar1,0xfffffffd,0xfffffffd);
      iVar2 = FUN_10066e64(auStack_a0,local_40);
    }
    FUN_10066df4(auStack_a0,2);
  }
  FUN_10066c80(auStack_d0,2);
  return;
}



// Function: FUN_1006b1e8 at 1006b1e8
// Size: 80 bytes

void FUN_1006b1e8(int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = param_2[1];
  param_1[0x35] = *param_2;
  param_1[0x36] = uVar1 & 0xffff0000;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_1006b240 at 1006b240
// Size: 160 bytes

undefined4 * FUN_1006b240(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x1dc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100f58a4(puVar1);
    *puVar1 = 0x815f0024;
    puVar2 = puVar1 + 0x36;
    if ((puVar2 != (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)FUN_100f56e4(0x100), puVar2 != (undefined4 *)0x0)) {
      FUN_100012d8(&DAT_7c0803a6,puVar2,DAT_7c0803a6 + 1);
    }
    *(undefined1 *)(puVar1 + 0x76) = 1;
  }
  return puVar1;
}



// Function: FUN_1006b2e0 at 1006b2e0
// Size: 92 bytes

void FUN_1006b2e0(int param_1,undefined4 param_2)

{
  FUN_100012d8(&DAT_7c0803a6,param_2,DAT_7c0803a6 + 1);
  FUN_100f659c(param_1,param_1 + 0xd8);
  return;
}



// Function: FUN_1006b33c at 1006b33c
// Size: 100 bytes

void FUN_1006b33c(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xc2);
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(int *)(param_1 + 0x8c) = (int)sVar1 + *(int *)(param_1 + 0x8c);
  FUN_100f5bd8(param_1);
  *(short *)(param_1 + 0xc2) = sVar1;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) - (int)sVar1;
  return;
}



// Function: FUN_1006b3a0 at 1006b3a0
// Size: 440 bytes

void FUN_1006b3a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [2];
  short local_22;
  short local_1e;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_44);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_44,auStack_24);
  local_1e = local_22 + *(short *)((int)param_1 + 0xc2) + -5;
  FUN_100b2264(auStack_4c);
  FUN_10001ad0();
  FUN_100672bc(param_1 + 0x36,auStack_24,0,(int)*(short *)((int)param_1 + 0xc6),param_1,auStack_4c);
  FUN_100f6318(param_1,param_2);
  if (*(char *)(param_1 + 0x76) == '\0') {
    *(undefined1 *)(param_1 + 0x76) = 1;
    FUN_10117884((int)*(short *)(*param_1 + 0x600) + (int)param_1,auStack_34);
    iVar3 = *param_1;
    uVar1 = FUN_100e1580(auStack_34,0);
    FUN_10117884((int)*(short *)(iVar3 + 0x2d0) + (int)param_1,uVar1);
    iVar3 = *param_1;
    uVar1 = FUN_100e1580(auStack_34,1);
    FUN_10117884((int)*(short *)(iVar3 + 0x2d0) + (int)param_1,uVar1);
    piVar2 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x138) + (int)param_1);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x480),auStack_34);
  }
  return;
}



// Function: FUN_1006b558 at 1006b558
// Size: 100 bytes

void FUN_1006b558(int param_1,undefined1 param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xc2);
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(int *)(param_1 + 0x8c) = (int)sVar1 + *(int *)(param_1 + 0x8c);
  FUN_100c8f30(param_1,param_2);
  *(short *)(param_1 + 0xc2) = sVar1;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) - (int)sVar1;
  return;
}



// Function: FUN_1006b5c4 at 1006b5c4
// Size: 92 bytes

undefined4 * FUN_1006b5c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(200);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d451c(puVar1);
    *puVar1 = 0xa91f0002;
    puVar1[0x31] = 0;
  }
  return puVar1;
}



// Function: FUN_1006b620 at 1006b620
// Size: 88 bytes

void FUN_1006b620(int *param_1)

{
  FUN_10105d28(param_1);
  if (param_1[0x31] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x850) + (int)param_1);
  }
  return;
}



// Function: FUN_1006b678 at 1006b678
// Size: 96 bytes

void FUN_1006b678(int *param_1)

{
  FUN_100d45c0(param_1);
  if (param_1[0x31] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x850) + (int)param_1);
  }
  return;
}



// Function: FUN_1006b6d8 at 1006b6d8
// Size: 80 bytes

int * FUN_1006b6d8(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100c7f28();
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x850));
  return piVar1;
}



// Function: FUN_1006b728 at 1006b728
// Size: 36 bytes

void FUN_1006b728(void)

{
  FUN_100c8068();
  return;
}



// Function: FUN_1006b74c at 1006b74c
// Size: 108 bytes

void FUN_1006b74c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}



// Function: FUN_1006b7b8 at 1006b7b8
// Size: 372 bytes

void FUN_1006b7b8(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}



// Function: FUN_1006b92c at 1006b92c
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b92c(int *param_1,char param_2,char param_3)

{
  int iVar1;
  
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_60000000,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_60000000,0x7a,0);
    }
    if ((param_3 != '\0') &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x678)), iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}



// Function: FUN_1006ba08 at 1006ba08
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ba08(int *param_1,char param_2,char param_3)

{
  if (param_2 != *(char *)((int)param_1 + 0x85)) {
    *(char *)((int)param_1 + 0x85) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),_DAT_41860018,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,_DAT_41860018,0x75,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}



// Function: FUN_1006bacc at 1006bacc
// Size: 148 bytes

void FUN_1006bacc(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = 0x818a000c;
  }
  FUN_100b2d10(puVar1,0x33646261,1);
  param_1[0x31] = (int)puVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar1,0,0);
  return;
}



// Function: FUN_1006bb60 at 1006bb60
// Size: 208 bytes

void FUN_1006bb60(int *param_1)

{
  int local_15c;
  undefined1 auStack_12c [8];
  undefined1 auStack_124 [16];
  undefined1 local_114 [260];
  
  local_114[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_124);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_124,auStack_12c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_114);
  FUN_100672bc(local_114,auStack_12c,0,1,param_1,*(undefined4 *)(local_15c + -0x1830),0xf5,0xf9);
  return;
}



// Function: FUN_1006bc30 at 1006bc30
// Size: 460 bytes

void FUN_1006bc30(int *param_1)

{
  int iVar1;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  short local_30 [2];
  undefined1 auStack_2c [20];
  
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_2c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_2c,auStack_68);
  FUN_10066d04(auStack_60,auStack_68);
  iVar1 = FUN_10066e64(auStack_60,local_30);
  while (iVar1 != 0) {
    if (local_30[0] < 4) {
      if (*(char *)(param_1 + 0x21) == '\0') {
        FUN_10117884(param_1[0x31] + (int)*(short *)(*(int *)param_1[0x31] + 0xb8),param_1,
                     auStack_2c);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_2c);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_2c);
        FUN_10117884(param_1[0x31] + (int)*(short *)(*(int *)param_1[0x31] + 0xb8),param_1,
                     auStack_2c);
      }
    }
    else {
      FUN_10117884(param_1[0x31] + (int)*(short *)(*(int *)param_1[0x31] + 0xb8),param_1,auStack_2c)
      ;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_2c);
    }
    iVar1 = FUN_10066e64(auStack_60,local_30);
  }
  FUN_10066df4(auStack_60,2);
  FUN_10066c80(auStack_98,2);
  return;
}



// Function: FUN_1006bdfc at 1006bdfc
// Size: 380 bytes

void FUN_1006bdfc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [48];
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_68);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_68,auStack_24);
  uVar1 = FUN_100b0574(auStack_24);
  FUN_10003348(uVar1,1,1);
  FUN_10066d04(auStack_58,auStack_24);
  iVar2 = FUN_10066e64(auStack_58,local_28);
  while (iVar2 != 0) {
    if (local_28[0] < 2) {
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,1,1);
      FUN_10002118(0x80a2db76);
      FUN_10002130(0xb);
      FUN_100b0578(auStack_24);
      FUN_10002148();
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,0xffffffff,0xffffffff);
    }
    iVar2 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_98,2);
  return;
}



// Function: FUN_1006bf80 at 1006bf80
// Size: 84 bytes

undefined4 * FUN_1006bf80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = 0x818a000c;
  }
  return puVar1;
}



// Function: FUN_1006bfd4 at 1006bfd4
// Size: 56 bytes

void FUN_1006bfd4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100b0578(param_2);
  FUN_10000738(uVar1,10,10);
  return;
}



// Function: FUN_1006c00c at 1006c00c
// Size: 380 bytes

void FUN_1006c00c(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(param_2[1] + 1),(int)(short)(*param_2 + 1));
    FUN_10001d88((int)(short)(param_2[1] + 1),(int)(short)(*param_2 + 1));
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(param_2[1] + 2),(int)(short)(*param_2 + 2));
    FUN_10001d88((int)(short)(param_2[1] + 2),(int)(short)(*param_2 + 2));
  }
  else {
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(param_2[1] + 1),(int)(short)(*param_2 + 1));
    FUN_10001d88((int)(short)(param_2[1] + 1),(int)(short)(*param_2 + 1));
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(param_2[1] + 2),(int)(short)(*param_2 + 2));
    FUN_10001d88((int)(short)(param_2[1] + 2),(int)(short)(*param_2 + 2));
  }
  return;
}



// Function: FUN_1006c188 at 1006c188
// Size: 380 bytes

void FUN_1006c188(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(param_2[3] + -2),(int)(short)(*param_2 + 1));
    FUN_10001d88((int)(short)(param_2[3] + -2),(int)(short)(*param_2 + 1));
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(param_2[3] + -3),(int)(short)(*param_2 + 2));
    FUN_10001d88((int)(short)(param_2[3] + -3),(int)(short)(*param_2 + 2));
  }
  else {
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(param_2[3] + -2),(int)(short)(*param_2 + 1));
    FUN_10001d88((int)(short)(param_2[3] + -2),(int)(short)(*param_2 + 1));
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(param_2[3] + -3),(int)(short)(*param_2 + 2));
    FUN_10001d88((int)(short)(param_2[3] + -3),(int)(short)(*param_2 + 2));
  }
  return;
}



// Function: FUN_1006c304 at 1006c304
// Size: 380 bytes

void FUN_1006c304(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(*(short *)(param_2 + 2) + 1),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 2) + 1),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(*(short *)(param_2 + 2) + 2),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 2) + 2),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
  }
  else {
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(*(short *)(param_2 + 2) + 1),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 2) + 1),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(*(short *)(param_2 + 2) + 2),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 2) + 2),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
  }
  return;
}



// Function: FUN_1006c480 at 1006c480
// Size: 380 bytes

void FUN_1006c480(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -3),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -3),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
  }
  else {
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -3),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -3),
                 (int)(short)(*(short *)(param_2 + 4) + -3));
  }
  return;
}



// Function: FUN_1006c5fc at 1006c5fc
// Size: 1552 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c5fc(undefined4 param_1,short *param_2,char param_3)

{
  short *psVar1;
  undefined4 uVar2;
  short local_30 [4];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  psVar1 = &local_28;
  if ((&local_28 != (short *)0x0) || (psVar1 = (short *)FUN_100f56e4(8), psVar1 != (short *)0x0)) {
    *psVar1 = *param_2;
    psVar1[1] = param_2[1];
    psVar1[2] = param_2[2];
    psVar1[3] = param_2[3];
  }
  psVar1 = local_30;
  if ((local_30 != (short *)0x0) || (psVar1 = (short *)FUN_100f56e4(8), psVar1 != (short *)0x0)) {
    *psVar1 = *param_2;
    psVar1[1] = param_2[1];
    psVar1[2] = param_2[2];
    psVar1[3] = param_2[3];
  }
  if (param_3 == '\0') {
    FUN_100b2268(&DAT_40860682);
    FUN_100021c0();
    FUN_10000270((int)(short)(local_26 + 2),(int)(short)(local_24 + -1));
    FUN_10001d88((int)(short)(local_22 + -3),(int)(short)(local_24 + -1));
    FUN_10000270((int)(short)(local_22 + -1),(int)(short)(local_24 + -3));
    FUN_10001d88((int)(short)(local_22 + -1),(int)(short)(local_28 + 2));
    uVar2 = FUN_100b0574(&local_28);
    FUN_10003348(uVar2,1,1);
    FUN_100f0538(&DAT_80df0024);
    FUN_10000270((int)local_26,(int)(short)(local_24 + -2));
    FUN_10001d88((int)local_26,(int)(short)(local_28 + 1));
    FUN_10000270((int)(short)(local_26 + 1),(int)local_28);
    FUN_10001d88((int)(short)(local_22 + -2),(int)local_28);
    FUN_100b2268(&DAT_4086067c);
    FUN_100021c0();
    FUN_10000270((int)(short)(local_26 + 1),(int)(short)(local_24 + -1));
    FUN_10001d88((int)(short)(local_22 + -2),(int)(short)(local_24 + -1));
    FUN_10000270((int)(short)(local_22 + -1),(int)(short)(local_24 + -2));
    FUN_10001d88((int)(short)(local_22 + -1),(int)(short)(local_28 + 1));
    FUN_1006c00c(param_1,local_30,_DAT_80df0024,_DAT_80df0028,_DAT_80df0024,_DAT_80df0028,0);
    FUN_1006c188(param_1,local_30,CONCAT22(_DAT_40860676,uRam40860678),
                 CONCAT22(_DAT_4086067a,_DAT_4086067c),CONCAT22(_DAT_40860676,uRam40860678),
                 CONCAT22(_DAT_4086067a,_DAT_4086067c),0);
    FUN_1006c304(param_1,local_30,CONCAT22(_DAT_40860676,uRam40860678),
                 CONCAT22(_DAT_4086067a,_DAT_4086067c),CONCAT22(_DAT_40860676,uRam40860678),
                 CONCAT22(_DAT_4086067a,_DAT_4086067c),0);
    FUN_1006c480(param_1,local_30,CONCAT22(_DAT_4086067c,uRam4086067e),
                 CONCAT22(_DAT_40860680,_DAT_40860682),CONCAT22(_DAT_40860682,uRam40860684),
                 CONCAT22(_DAT_40860686,_DAT_40860688),0);
  }
  else {
    FUN_100b2268(&DAT_40860688);
    FUN_100021c0();
    FUN_10000270((int)local_26,(int)(short)(local_24 + -3));
    FUN_10001d88((int)local_26,(int)(short)(local_28 + 2));
    FUN_10000270((int)(short)(local_26 + 2),(int)local_28);
    FUN_10001d88((int)(short)(local_22 + -3),(int)local_28);
    FUN_100b2268(&DAT_40860664);
    FUN_100021c0();
    FUN_10000270((int)(short)(local_26 + 2),(int)(short)(local_24 + -1));
    FUN_10001d88((int)(short)(local_22 + -3),(int)(short)(local_24 + -1));
    FUN_10000270((int)(short)(local_22 + -1),(int)(short)(local_24 + -3));
    FUN_10001d88((int)(short)(local_22 + -1),(int)(short)(local_28 + 2));
    uVar2 = FUN_100b0574(&local_28);
    FUN_10003348(uVar2,1,1);
    FUN_100b2268(&DAT_40860682);
    FUN_100021c0();
    FUN_10000270((int)local_26,(int)(short)(local_24 + -2));
    FUN_10001d88((int)local_26,(int)(short)(local_28 + 1));
    FUN_10000270((int)(short)(local_26 + 1),(int)local_28);
    FUN_10001d88((int)(short)(local_22 + -2),(int)local_28);
    FUN_100b2268(&DAT_40860670);
    FUN_100021c0();
    FUN_10000270((int)(short)(local_26 + 1),(int)(short)(local_24 + -1));
    FUN_10001d88((int)(short)(local_22 + -2),(int)(short)(local_24 + -1));
    FUN_10000270((int)(short)(local_22 + -1),(int)(short)(local_24 + -2));
    FUN_10001d88((int)(short)(local_22 + -1),(int)(short)(local_28 + 1));
    FUN_1006c00c(param_1,local_30,CONCAT22(_DAT_40860682,uRam40860684),
                 CONCAT22(_DAT_40860686,_DAT_40860688),CONCAT22(_DAT_40860688,uRam4086068a),
                 _DAT_4086068c,param_3);
    FUN_1006c188(param_1,local_30,CONCAT22(_DAT_40860682,uRam40860684),
                 CONCAT22(_DAT_40860686,_DAT_40860688),CONCAT22(_DAT_40860688,uRam4086068a),
                 _DAT_4086068c,param_3);
    FUN_1006c304(param_1,local_30,CONCAT22(_DAT_40860682,uRam40860684),
                 CONCAT22(_DAT_40860686,_DAT_40860688),CONCAT22(_DAT_40860688,uRam4086068a),
                 _DAT_4086068c,param_3);
    FUN_1006c480(param_1,local_30,_DAT_40860664,_DAT_40860668,_DAT_40860670,
                 CONCAT22(_DAT_40860674,_DAT_40860676),param_3);
  }
  return;
}



// Function: FUN_1006cc0c at 1006cc0c
// Size: 1680 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cc0c(undefined4 param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = *param_2;
  local_24 = param_2[1];
  local_40 = *param_2;
  uStack_3c = param_2[1];
  if (param_3 == '\0') {
    FUN_100eef6c(auStack_38,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_38);
    FUN_10000270((int)(short)(local_28._2_2_ + 2),(int)(short)(local_24._0_2_ + -1));
    FUN_10001d88((int)(short)(local_24._2_2_ + -3),(int)(short)(local_24._0_2_ + -1));
    FUN_10000270((int)(short)(local_24._2_2_ + -1),(int)(short)(local_24._0_2_ + -3));
    FUN_10001d88((int)(short)(local_24._2_2_ + -1),(int)(short)(local_28._0_2_ + 2));
    uVar1 = FUN_100b0574(&local_28);
    FUN_10003348(uVar1,1,1);
    FUN_100f0538(&DAT_80df0024);
    FUN_10000270((int)local_28._2_2_,(int)(short)(local_24._0_2_ + -2));
    FUN_10001d88((int)local_28._2_2_,(int)(short)(local_28._0_2_ + 1));
    FUN_10000270((int)(short)(local_28._2_2_ + 1),(int)local_28._0_2_);
    FUN_10001d88((int)(short)(local_24._2_2_ + -2),(int)local_28._0_2_);
    FUN_100eef6c(auStack_38,0xffff8000,0xffff8000,0xffff8000);
    FUN_100f0538(auStack_38);
    FUN_10000270((int)(short)(local_28._2_2_ + 1),(int)(short)(local_24._0_2_ + -1));
    FUN_10001d88((int)(short)(local_24._2_2_ + -2),(int)(short)(local_24._0_2_ + -1));
    FUN_10000270((int)(short)(local_24._2_2_ + -1),(int)(short)(local_24._0_2_ + -2));
    FUN_10001d88((int)(short)(local_24._2_2_ + -1),(int)(short)(local_28._0_2_ + 1));
    FUN_1006c00c(param_1,&local_40,_DAT_80df0024,_DAT_80df0028,_DAT_80df0024,_DAT_80df0028,0);
    FUN_100eef6c(&local_30,0xffff8000,0xffff8000,0xffff8000);
    FUN_1006c188(param_1,&local_40,local_30,local_2c,local_30,local_2c,0);
    FUN_1006c304(param_1,&local_40,local_30,local_2c,local_30,local_2c,0);
    FUN_100eef6c(&local_30,0xffff8000,0xffff8000,0xffff8000);
    FUN_100eef6c(&local_48,0x2000,0x2000,0x2000);
    FUN_1006c480(param_1,&local_40,local_30,local_2c,local_48,local_44,0);
  }
  else {
    FUN_100eef6c(auStack_38,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_38);
    FUN_10000270((int)local_28._2_2_,(int)(short)(local_24._0_2_ + -3));
    FUN_10001d88((int)local_28._2_2_,(int)(short)(local_28._0_2_ + 2));
    FUN_10000270((int)(short)(local_28._2_2_ + 2),(int)local_28._0_2_);
    FUN_10001d88((int)(short)(local_24._2_2_ + -3),(int)local_28._0_2_);
    FUN_100eef6c(auStack_38,0xffffc000,0xffffc000,0xffffc000);
    FUN_100f0538(auStack_38);
    FUN_10000270((int)(short)(local_28._2_2_ + 2),(int)(short)(local_24._0_2_ + -1));
    FUN_10001d88((int)(short)(local_24._2_2_ + -3),(int)(short)(local_24._0_2_ + -1));
    FUN_10000270((int)(short)(local_24._2_2_ + -1),(int)(short)(local_24._0_2_ + -3));
    FUN_10001d88((int)(short)(local_24._2_2_ + -1),(int)(short)(local_28._0_2_ + 2));
    uVar1 = FUN_100b0574(&local_28);
    FUN_10003348(uVar1,1,1);
    FUN_100eef6c(auStack_38,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_38);
    FUN_10000270((int)local_28._2_2_,(int)(short)(local_24._0_2_ + -2));
    FUN_10001d88((int)local_28._2_2_,(int)(short)(local_28._0_2_ + 1));
    FUN_10000270((int)(short)(local_28._2_2_ + 1),(int)local_28._0_2_);
    FUN_10001d88((int)(short)(local_24._2_2_ + -2),(int)local_28._0_2_);
    FUN_100eef6c(auStack_38,0xffffc000,0xffffc000,0xffffc000);
    FUN_100f0538(auStack_38);
    FUN_10000270((int)(short)(local_28._2_2_ + 1),(int)(short)(local_24._0_2_ + -1));
    FUN_10001d88((int)(short)(local_24._2_2_ + -2),(int)(short)(local_24._0_2_ + -1));
    FUN_10000270((int)(short)(local_24._2_2_ + -1),(int)(short)(local_24._0_2_ + -2));
    FUN_10001d88((int)(short)(local_24._2_2_ + -1),(int)(short)(local_28._0_2_ + 1));
    FUN_100eef6c(&local_30,0x2000,0x2000,0x2000);
    FUN_100eef6c(&local_48,0x2000,0x2000,0x2000);
    FUN_1006c00c(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
    FUN_100eef6c(&local_30,0x2000,0x2000,0x2000);
    FUN_100eef6c(&local_48,0x2000,0x2000,0x2000);
    FUN_1006c188(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
    FUN_1006c304(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
    FUN_100eef6c(&local_30,0xffffc000,0xffffc000,0xffffc000);
    FUN_100eef6c(&local_48,0xffffc000,0xffffc000,0xffffc000);
    FUN_1006c480(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
  }
  return;
}



// Function: FUN_1006d29c at 1006d29c
// Size: 1096 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006d29c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [48];
  short local_48 [2];
  undefined4 local_44;
  uint uStack_40;
  undefined1 auStack_3c [8];
  
  FUN_10066bf4(auStack_b8);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),auStack_88);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_88,auStack_3c);
  FUN_10066d04(auStack_78,auStack_3c);
  iVar1 = FUN_10066e64(auStack_78,local_48);
  while (iVar1 != 0) {
    if (local_48[0] < 8) {
      if (local_48[0] == 4) {
        if (*(char *)(param_2 + 0x21) == '\0') {
          iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
          if (iVar1 == 0) {
            FUN_100eef6c(&local_44,0xffffc000,0xffffc000,0xffffc000);
          }
          else {
            local_44 = _DAT_4182000c;
            uStack_40 = _DAT_41820010 & 0xffff0000;
          }
        }
        else {
          FUN_100eef6c(&local_44,0xffff8000,0xffff8000,0xffff8000);
        }
        FUN_100f0538(&local_44);
        uVar2 = FUN_100b0578(auStack_3c);
        FUN_10002cd0(uVar2,10,10);
        iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
        if (iVar1 == 0) {
          FUN_100f0538(&DAT_3860ffff);
        }
        else {
          FUN_100f0538(&DAT_48000008);
        }
        FUN_1006bfd4(param_1,auStack_3c);
        uVar2 = FUN_100b0574(auStack_3c);
        FUN_10003348(uVar2,1,1);
        iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
        if (iVar1 == 0) {
          FUN_1006cc0c(param_1,auStack_3c,*(undefined1 *)(param_2 + 0x21));
        }
        uVar2 = FUN_100b0574(auStack_3c);
        FUN_10003348(uVar2,0xffffffff,0xffffffff);
      }
      else if (local_48[0] < 4) {
        if (*(char *)(param_2 + 0x21) == '\0') {
          FUN_100f03e8(&DAT_80df0024);
          uVar2 = FUN_100b0578(auStack_3c);
          FUN_10000b28(uVar2,10,10);
          FUN_100f0538(&DAT_3860ffff);
          FUN_1006bfd4(param_1,auStack_3c);
        }
        else {
          uVar2 = FUN_100b0578(auStack_3c);
          FUN_10000b10(uVar2,10,10);
          FUN_100f0538(&DAT_3860ffff);
          FUN_1006bfd4(param_1,auStack_3c);
        }
      }
    }
    else {
      if (*(char *)(param_2 + 0x21) == '\0') {
        iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
        if (iVar1 == 0) {
          iVar1 = 0xf7;
        }
        else {
          iVar1 = 0xf6;
        }
      }
      else {
        iVar1 = 0xf9;
      }
      FUN_100b2268(iVar1 * 6 + 0x408600a0);
      FUN_100021c0();
      uVar2 = FUN_100b0578(auStack_3c);
      FUN_10002cd0(uVar2,10,10);
      iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
      if (iVar1 == 0) {
        FUN_100f0538(&DAT_3860ffff);
      }
      else {
        FUN_100b2268(&DAT_40860682);
        FUN_100021c0();
      }
      FUN_1006bfd4(param_1,auStack_3c);
      uVar2 = FUN_100b0574(auStack_3c);
      FUN_10003348(uVar2,1,1);
      iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
      if (iVar1 == 0) {
        FUN_1006c5fc(param_1,auStack_3c,*(undefined1 *)(param_2 + 0x21));
      }
      uVar2 = FUN_100b0574(auStack_3c);
      FUN_10003348(uVar2,0xffffffff,0xffffffff);
    }
    iVar1 = FUN_10066e64(auStack_78,local_48);
  }
  FUN_10066df4(auStack_78,2);
  FUN_10066c80(auStack_b8,2);
  return;
}



// Function: FUN_1006d6ec at 1006d6ec
// Size: 84 bytes

undefined4 * FUN_1006d6ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = 0x480017a9;
  }
  return puVar1;
}



// Function: FUN_1006d740 at 1006d740
// Size: 3252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006d740(int param_1,int *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  int local_cc;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [16];
  undefined2 local_60;
  undefined2 local_5e;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  
  FUN_10066bf4(auStack_a8);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_70,&local_48);
  psVar1 = &local_50;
  if ((&local_50 != (short *)0x0) || (psVar1 = (short *)FUN_100f56e4(8), psVar1 != (short *)0x0)) {
    *psVar1 = local_48;
    psVar1[1] = local_46;
    psVar1[2] = local_44;
    psVar1[3] = local_42;
  }
  local_60 = 0xffee;
  local_5e = 0xffee;
  FUN_100b06d4(&local_50,&local_60);
  if ((*(ushort *)(param_1 + 0xc) & 1) != 0) {
    local_50 = local_50 + 0x12;
  }
  if ((*(ushort *)(param_1 + 0xc) & 2) != 0) {
    local_4c = local_4c + -0x12;
  }
  if ((*(ushort *)(param_1 + 0xc) & 4) != 0) {
    local_4e = local_4e + 0x12;
  }
  if ((*(ushort *)(param_1 + 0xc) & 8) != 0) {
    local_4a = local_4a + -0x12;
  }
  if (*(char *)(param_2 + 0x21) == '\0') {
    iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
    if (iVar3 == 0) {
      iVar3 = 0xf7;
    }
    else {
      iVar3 = 0xf6;
    }
  }
  else {
    iVar3 = 0xf9;
  }
  FUN_100b2268(iVar3 * 6 + 0x408600a0);
  FUN_100021c0();
  uVar2 = FUN_100b0578(&local_50);
  FUN_10002cd0(uVar2,10,10);
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar3 == 0) {
    FUN_100f0538(*(undefined4 *)(local_cc + -0x1830));
  }
  else {
    FUN_100b2268(&DAT_40860682);
    FUN_100021c0();
  }
  FUN_1006bfd4(param_1,&local_50);
  if ((*(ushort *)(param_1 + 0xc) & 1) == 0) {
    FUN_10000270((int)local_46,(int)local_48);
    FUN_10001d88((int)(short)(local_42 + -1),(int)local_48);
  }
  if ((*(ushort *)(param_1 + 0xc) & 2) == 0) {
    FUN_10000270((int)local_46,(int)(short)(local_44 + -1));
    FUN_10001d88((int)(short)(local_42 + -1),(int)(short)(local_44 + -1));
  }
  if ((*(ushort *)(param_1 + 0xc) & 4) == 0) {
    FUN_10000270((int)local_46,(int)local_48);
    FUN_10001d88((int)local_46,(int)(short)(local_44 + -1));
  }
  if ((*(ushort *)(param_1 + 0xc) & 8) == 0) {
    FUN_10000270((int)(short)(local_42 + -1),(int)local_48);
    FUN_10001d88((int)(short)(local_42 + -1),(int)(short)(local_44 + -1));
  }
  uVar2 = FUN_100b0574(&local_48);
  FUN_10003348(uVar2,1,1);
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar3 == 0) {
    local_56 = 0;
    local_52 = 0;
    local_58 = 0;
    local_54 = 0;
    if ((*(ushort *)(param_1 + 0xc) & 1) != 0) {
      local_58 = 2;
    }
    if ((*(ushort *)(param_1 + 0xc) & 2) != 0) {
      local_54 = 2;
    }
    if ((*(ushort *)(param_1 + 0xc) & 4) != 0) {
      local_56 = 2;
    }
    if ((*(ushort *)(param_1 + 0xc) & 8) != 0) {
      local_52 = 2;
    }
    psVar1 = &local_40;
    if ((&local_40 != (short *)0x0) || (psVar1 = (short *)FUN_100f56e4(8), psVar1 != (short *)0x0))
    {
      *psVar1 = local_48;
      psVar1[1] = local_46;
      psVar1[2] = local_44;
      psVar1[3] = local_42;
    }
    if (*(char *)(param_2 + 0x21) == '\0') {
      FUN_100b2268(&DAT_40860682);
      FUN_100021c0();
      uVar4 = local_56;
      if (local_54 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)(short)(local_3c + -1));
      if (local_54 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)(short)(local_3c + -1));
      if (local_52 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)(short)(local_3a + -1),(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_52 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)(short)(local_3a + -1),(int)(short)(local_40 + uVar4));
      uVar2 = FUN_100b0574(&local_40);
      FUN_10003348(uVar2,1,1);
      local_58 = ((short)local_58 >> 1) + (ushort)((short)local_58 < 0 && (local_58 & 1) != 0);
      local_54 = ((short)local_54 >> 1) + (ushort)((short)local_54 < 0 && (local_54 & 1) != 0);
      local_56 = ((short)local_56 >> 1) + (ushort)((short)local_56 < 0 && (local_56 & 1) != 0);
      local_52 = ((short)local_52 >> 1) + (ushort)((short)local_52 < 0 && (local_52 & 1) != 0);
      FUN_100f0538(&DAT_80df0024);
      if (local_56 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)local_3e,(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_56 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)local_3e,(int)(short)(local_40 + uVar4));
      uVar4 = local_56;
      if (local_58 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)local_40);
      if (local_58 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)local_40);
      FUN_100b2268(&DAT_4086067c);
      FUN_100021c0();
      uVar4 = local_56;
      if (local_54 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)(short)(local_3c + -1));
      if (local_54 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)(short)(local_3c + -1));
      if (local_52 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)(short)(local_3a + -1),(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_52 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)(short)(local_3a + -1),(int)(short)(local_40 + uVar4));
      FUN_1006c00c(param_1,&local_50,_DAT_80df0024,_DAT_80df0028,_DAT_80df0024,_DAT_80df0028,
                   *(undefined1 *)(param_2 + 0x21));
      FUN_1006c188(param_1,&local_50,CONCAT22(_DAT_40860676,uRam40860678),
                   CONCAT22(_DAT_4086067a,_DAT_4086067c),CONCAT22(_DAT_40860676,uRam40860678),
                   CONCAT22(_DAT_4086067a,_DAT_4086067c),1);
      FUN_1006c304(param_1,&local_50,CONCAT22(_DAT_40860676,uRam40860678),
                   CONCAT22(_DAT_4086067a,_DAT_4086067c),CONCAT22(_DAT_40860676,uRam40860678),
                   CONCAT22(_DAT_4086067a,_DAT_4086067c),1);
      FUN_1006c480(param_1,&local_50,CONCAT22(_DAT_4086067c,uRam4086067e),
                   CONCAT22(_DAT_40860680,_DAT_40860682),CONCAT22(_DAT_40860682,uRam40860684),
                   CONCAT22(_DAT_40860686,_DAT_40860688),1);
    }
    else {
      FUN_100b2268(&DAT_40860688);
      FUN_100021c0();
      if (local_56 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)local_3e,(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_56 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)local_3e,(int)(short)(local_40 + uVar4));
      uVar4 = local_56;
      if (local_58 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)local_40);
      if (local_58 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)local_40);
      FUN_100b2268(&DAT_40860664);
      FUN_100021c0();
      uVar4 = local_56;
      if (local_54 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)(short)(local_3c + -1));
      if (local_54 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)(short)(local_3c + -1));
      if (local_52 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)(short)(local_3a + -1),(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_52 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)(short)(local_3a + -1),(int)(short)(local_40 + uVar4));
      uVar2 = FUN_100b0574(&local_40);
      FUN_10003348(uVar2,1,1);
      local_58 = ((short)local_58 >> 1) + (ushort)((short)local_58 < 0 && (local_58 & 1) != 0);
      local_54 = ((short)local_54 >> 1) + (ushort)((short)local_54 < 0 && (local_54 & 1) != 0);
      local_56 = ((short)local_56 >> 1) + (ushort)((short)local_56 < 0 && (local_56 & 1) != 0);
      local_52 = ((short)local_52 >> 1) + (ushort)((short)local_52 < 0 && (local_52 & 1) != 0);
      FUN_100b2268(&DAT_40860682);
      FUN_100021c0();
      if (local_56 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)local_3e,(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_56 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)local_3e,(int)(short)(local_40 + uVar4));
      uVar4 = local_56;
      if (local_58 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)local_40);
      if (local_58 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)local_40);
      FUN_100b2268(&DAT_40860670);
      FUN_100021c0();
      uVar4 = local_56;
      if (local_54 == 0) {
        uVar4 = 0;
      }
      FUN_10000270((int)(short)(local_3e + uVar4),(int)(short)(local_3c + -1));
      if (local_54 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_52;
      }
      FUN_10001d88((local_3a - iVar3) + -1,(int)(short)(local_3c + -1));
      if (local_52 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(short)local_54;
      }
      FUN_10000270((int)(short)(local_3a + -1),(local_3c - iVar3) + -1);
      uVar4 = local_58;
      if (local_52 == 0) {
        uVar4 = 0;
      }
      FUN_10001d88((int)(short)(local_3a + -1),(int)(short)(local_40 + uVar4));
      FUN_1006c00c(param_1,&local_50,CONCAT22(_DAT_40860682,uRam40860684),
                   CONCAT22(_DAT_40860686,_DAT_40860688),CONCAT22(_DAT_40860688,uRam4086068a),
                   _DAT_4086068c,1);
      FUN_1006c188(param_1,&local_50,CONCAT22(_DAT_40860682,uRam40860684),
                   CONCAT22(_DAT_40860686,_DAT_40860688),CONCAT22(_DAT_40860688,uRam4086068a),
                   _DAT_4086068c,1);
      FUN_1006c304(param_1,&local_50,CONCAT22(_DAT_40860682,uRam40860684),
                   CONCAT22(_DAT_40860686,_DAT_40860688),CONCAT22(_DAT_40860688,uRam4086068a),
                   _DAT_4086068c,1);
      FUN_1006c480(param_1,&local_50,_DAT_40860664,_DAT_40860668,_DAT_40860670,
                   CONCAT22(_DAT_40860674,_DAT_40860676),1);
    }
  }
  uVar2 = FUN_100b0574(&local_48);
  FUN_10003348(uVar2,0xffffffff,0xffffffff);
  FUN_10066c80(auStack_a8,2);
  return;
}



// Function: FUN_1006e3fc at 1006e3fc
// Size: 84 bytes

undefined4 * FUN_1006e3fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = 0x409a000c;
  }
  return puVar1;
}



// Function: FUN_1006e450 at 1006e450
// Size: 1812 bytes

void FUN_1006e450(undefined4 param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int local_9c;
  ushort local_78;
  ushort local_76;
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [16];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  FUN_10066bf4(auStack_70);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),auStack_40);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_40,&local_30);
  FUN_100b08d4(&local_78,&local_30);
  sVar4 = ((short)local_76 >> 1) + (ushort)((short)local_76 < 0 && (local_76 & 1) != 0);
  sVar5 = ((short)local_78 >> 1) + (ushort)((short)local_78 < 0 && (local_78 & 1) != 0);
  if (*(char *)(param_2 + 0x21) == '\0') {
    iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
    if (iVar3 == 0) {
      iVar3 = 0xf7;
    }
    else {
      iVar3 = 0xf6;
    }
  }
  else {
    iVar3 = 0xf9;
  }
  FUN_100b2268(iVar3 * 6 + 0x408600a0);
  FUN_100021c0();
  iVar3 = (int)(short)(local_2e + sVar4);
  sVar2 = local_30;
  if (iVar3 <= local_2a + -1) {
    do {
      FUN_10000270(iVar3,(int)sVar2);
      FUN_10000288(-(int)sVar4,(int)sVar5);
      if (iVar3 < local_2a + -1) {
        FUN_10000270(iVar3,(int)(short)(sVar2 + 1));
        FUN_10000288(-(int)sVar4,(int)(short)(sVar5 + -1));
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
      sVar2 = sVar2 + 1;
    } while (iVar3 <= local_2a + -1);
  }
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar3 == 0) {
    FUN_100f0538(*(undefined4 *)(local_9c + -0x1830));
  }
  else {
    FUN_100b2268(&DAT_40860682);
    FUN_100021c0();
  }
  FUN_10000270((int)(short)(local_2e + sVar4 + -1),(int)local_30);
  FUN_10000288((int)(short)(1 - sVar4),(int)(short)(sVar5 + -1));
  FUN_10000270((int)(short)(local_2a - sVar4),(int)local_30);
  FUN_10000288((int)(short)(sVar4 + -1),(int)(short)(sVar5 + -1));
  FUN_10000270((int)(short)(sVar4 + local_2e + -1),(int)(short)(local_2c + -1));
  FUN_10000288((int)(short)(1 - sVar4),(int)(short)(1 - sVar5));
  FUN_10000270((int)(short)(local_2a - sVar4),(int)(short)(local_2c + -1));
  FUN_10000288((int)(short)(sVar4 + -1),(int)(short)(1 - sVar5));
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar3 == 0) {
    if (*(char *)(param_2 + 0x21) == '\0') {
      FUN_100f0538(*(undefined4 *)(local_9c + -0xc38));
      FUN_10000270((int)(short)(local_2e + sVar4 + -1),(int)(short)(local_30 + 2));
      iVar3 = (int)(short)(sVar5 + -3);
      FUN_10000288((int)(short)(3 - sVar4),iVar3);
      FUN_100b2268(&DAT_40860676);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2a - sVar4),(int)(short)(local_30 + 2));
      FUN_10000288((int)(short)(sVar4 + -3),iVar3);
      FUN_10000270((int)(short)(local_2e + 2),(int)(short)(local_2c - sVar5));
      FUN_10000288((int)(short)(sVar4 + -3),iVar3);
      FUN_10000270((int)(short)(sVar4 + local_2e + -1),(int)(short)(local_2c + -2));
      FUN_10000288(0,0);
      FUN_10000270((int)(short)(local_2a + -2),(int)(short)(sVar5 + local_30 + -1));
      FUN_10000288(0,0);
      FUN_100b2268(&DAT_4086067c);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2a + -3),(int)(short)(local_2c - sVar5));
      FUN_10000288((int)(short)(3 - sVar4),iVar3);
      FUN_100b2268(&DAT_40860682);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2a + -2),(int)(short)(local_2c - sVar5));
      FUN_10000288((int)(short)(2 - sVar4),(int)(short)(sVar5 + -2));
    }
    else {
      FUN_100b2268(&DAT_40860688);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2e + sVar4 + -1),(int)(short)(local_30 + 1));
      FUN_10000288((int)(short)(2 - sVar4),(int)(short)(sVar5 + -2));
      FUN_100b2268(&DAT_40860682);
      FUN_100021c0();
      FUN_10000270((int)(short)(sVar4 + local_2e + -1),(int)(short)(local_30 + 2));
      iVar1 = (int)(short)(sVar5 + -3);
      FUN_10000288((int)(short)(3 - sVar4),iVar1);
      FUN_10000270((int)(short)(local_2a - sVar4),(int)(short)(local_30 + 1));
      iVar3 = (int)(short)(sVar4 + -3);
      FUN_10000288(iVar3,iVar1);
      FUN_10000270((int)(short)(local_2e + 1),(int)(short)(local_2c - sVar5));
      FUN_10000288(iVar3,iVar1);
      FUN_100b2268(&DAT_4086067c);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2a - sVar4),(int)(short)(local_30 + 2));
      FUN_10000288(iVar3,iVar1);
      FUN_10000270((int)(short)(local_2e + 2),(int)(short)(local_2c - sVar5));
      FUN_10000288(iVar3,iVar1);
      FUN_100b2268(&DAT_40860670);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2a + -2),(int)(short)(sVar5 + local_30 + -1));
      FUN_10000288((int)(short)(1 - sVar4),(int)(short)(sVar5 + -1));
      FUN_100b2268(0x4086066a);
      FUN_100021c0();
      FUN_10000270((int)(short)(local_2a + -2),(int)(short)(sVar5 + local_30));
      FUN_10000288((int)(short)(2 - sVar4),(int)(short)(sVar5 + -2));
    }
    FUN_10066c80(auStack_70,2);
  }
  else {
    FUN_10066c80(auStack_70,2);
  }
  return;
}



// Function: FUN_1006eb6c at 1006eb6c
// Size: 84 bytes

undefined4 * FUN_1006eb6c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = &DAT_48000008;
  }
  return puVar1;
}



// Function: FUN_1006ebc0 at 1006ebc0
// Size: 52 bytes

void FUN_1006ebc0(undefined4 param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x33646961,param_2);
  return;
}



// Function: FUN_1006ebf4 at 1006ebf4
// Size: 772 bytes

void FUN_1006ebf4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int local_fc;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined2 local_38 [4];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  short local_28 [2];
  
  FUN_10066bf4(auStack_d8);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),auStack_a8);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_a8,&local_30);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar1 == 0) {
    FUN_100f0538(*(undefined4 *)(local_fc + -0x1830));
  }
  else {
    FUN_100f0538(*(undefined4 *)(local_fc + -0x17e4));
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_30);
  uVar2 = FUN_100b0574(&local_30);
  FUN_10003348(uVar2,1,1);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar1 == 0) {
    FUN_10066d04(auStack_68,&local_30);
    iVar1 = FUN_10066e64(auStack_68,local_28);
    while (iVar1 != 0) {
      if (local_28[0] < 8) {
        if (local_28[0] == 4) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf8),&local_30,
                       *(undefined1 *)(param_2 + 0x21));
        }
        else if (local_28[0] < 4) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),&local_30,
                       *(undefined1 *)(param_2 + 0x21));
        }
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0),&local_30,
                     *(undefined1 *)(param_2 + 0x21));
      }
      iVar1 = FUN_10066e64(auStack_68,local_28);
    }
    FUN_10066df4(auStack_68,2);
  }
  else {
    FUN_10066d04(auStack_98,&local_30);
    iVar1 = FUN_10066e64(auStack_98,local_28);
    while (iVar1 != 0) {
      if (local_28[0] < 4) {
        puVar3 = local_38;
        if ((local_38 != (undefined2 *)0x0) ||
           (puVar3 = (undefined2 *)FUN_100f56e4(8), puVar3 != (undefined2 *)0x0)) {
          *puVar3 = local_30;
          puVar3[1] = local_2e;
          puVar3[2] = local_2c;
          puVar3[3] = local_2a;
        }
        FUN_10067270();
        uVar2 = FUN_100b0574(local_38);
        FUN_10003348(uVar2,0xffffffff,0xffffffff);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),local_38);
      }
      iVar1 = FUN_10066e64(auStack_98,local_28);
    }
    FUN_10066df4(auStack_98,2);
  }
  FUN_10066c80(auStack_d8,2);
  return;
}



// Function: FUN_1006eef8 at 1006eef8
// Size: 1284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006eef8(int *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  int local_7c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint uStack_34;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  local_50 = *param_2;
  uStack_4c = param_2[1];
  if (param_3 == '\0') {
    local_38 = _DAT_2f890000;
    uStack_34 = _DAT_2f890004 & 0xffff0000;
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    FUN_100eef6c(&local_38,0x7777,0x7777,0x7777);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    uVar1 = FUN_100b0574(&local_48);
    FUN_10003348(uVar1,1,1);
    FUN_100f0538(&DAT_80df0024);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    local_38 = _DAT_48000008;
    uStack_34 = _DAT_4800000c & 0xffff0000;
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_50,_DAT_80df0024,
                 _DAT_80df0028,_DAT_80df0024,_DAT_80df0028);
    FUN_100eef6c(&local_40,0xffffcccc,0xffffcccc,0xffffcccc);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_50,local_40,local_3c,
                 local_40,local_3c);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_50,local_40,local_3c,
                 local_40,local_3c);
    FUN_100eef6c(&local_40,0x5555,0x5555,0x5555);
    FUN_100eef6c(&local_58,0x4444,0x4444,0x4444);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_50,local_40,local_3c,
                 local_58,local_54,0);
    local_38 = _DAT_2f890000;
    uStack_34 = _DAT_2f890004;
  }
  else {
    FUN_100eef6c(&local_38,0x4444,0x4444,0x4444);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    FUN_100eef6c(&local_38,0xffffcccc,0xffffcccc,0xffffcccc);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    uVar1 = FUN_100b0574(&local_48);
    FUN_10003348(uVar1,1,1);
    FUN_100eef6c(&local_38,0x5555,0x5555,0x5555);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    local_38 = **(undefined4 **)(local_7c + -0x17e8);
    uStack_34 = (*(undefined4 **)(local_7c + -0x17e8))[1] & 0xffff0000;
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    FUN_100eef6c(&local_40,0x4444,0x4444,0x4444);
    FUN_100eef6c(&local_58,0x2222,0x2222,0x2222);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_50,local_40,local_3c,
                 local_58,local_54);
    local_40 = _DAT_48000008;
    local_3c = _DAT_4800000c & 0xffff0000;
    FUN_100eef6c(&local_58,0x7777,0x7777,0x7777);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_50,local_40,local_3c,
                 local_58,local_54);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_50,local_40,local_3c,
                 local_58,local_54);
    local_40 = _DAT_2f890000;
    local_3c = _DAT_2f890004 & 0xffff0000;
    FUN_100eef6c(&local_58,0xffffcccc,0xffffcccc,0xffffcccc);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_50,local_40,local_3c,
                 local_58,local_54,param_3);
    local_38 = _DAT_48000008;
    uStack_34 = _DAT_4800000c;
  }
  uStack_34 = uStack_34 & 0xffff0000;
  uVar1 = FUN_100b0574(&local_48);
  FUN_10003348(uVar1,1,1);
  FUN_100f0538(&local_38);
  FUN_100b0578(&local_48);
  FUN_10002148();
  return;
}



// Function: FUN_1006f3fc at 1006f3fc
// Size: 1312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f3fc(int *param_1,undefined4 *param_2,char param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  local_40 = *param_2;
  uStack_3c = param_2[1];
  if (param_3 == '\0') {
    FUN_100eef6c(auStack_30,0xffffc000,0xffffc000,0xffffc000,uStack_3c,param_6,auStack_48);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffff8000,0xffff8000,0xffff8000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    uVar1 = FUN_100b0574(&local_38);
    FUN_10003348(uVar1,1,1);
    FUN_100f0538(&DAT_80df0024);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffff8000,0xffff8000,0xffff8000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_40,_DAT_80df0024,
                 _DAT_80df0028,_DAT_80df0024,_DAT_80df0028);
    FUN_100eef6c(&local_28,0xffffc000,0xffffc000,0xffffc000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0x2000,0x2000,0x2000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_40,local_28,local_24,
                 local_28,local_24,0);
    FUN_100eef6c(auStack_30,0xffffc000,0xffffc000,0xffffc000);
  }
  else {
    FUN_100eef6c(auStack_30,0x2000,0x2000,0x2000,uStack_3c,param_6,auStack_48);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffffc000,0xffffc000,0xffffc000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    uVar1 = FUN_100b0574(&local_38);
    FUN_10003348(uVar1,1,1);
    FUN_100eef6c(auStack_30,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffffc000,0xffffc000,0xffffc000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    FUN_100eef6c(&local_28,0x2000,0x2000,0x2000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0xffff8000,0xffff8000,0xffff8000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0xffff8000,0xffff8000,0xffff8000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0xffffc000,0xffffc000,0xffffc000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_40,local_28,local_24,
                 local_28,local_24,param_3);
    FUN_100eef6c(auStack_30,0xffff8000,0xffff8000,0xffff8000);
  }
  uVar1 = FUN_100b0574(&local_38);
  FUN_10003348(uVar1,1,1);
  FUN_100f0538(auStack_30);
  FUN_100b0578(&local_38);
  FUN_10002148();
  return;
}



// Function: FUN_1006f91c at 1006f91c
// Size: 264 bytes

void FUN_1006f91c(int *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  FUN_10067270();
  local_28 = *param_2;
  uStack_24 = param_2[1];
  local_20 = local_28;
  uStack_1c = uStack_24;
  FUN_10002118(0x80a2db86);
  FUN_10000708(0x1e);
  FUN_100b0578(&local_20);
  FUN_10002148();
  FUN_10002118(0x80a2db76);
  FUN_10000708(0x21);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_20);
  uVar1 = FUN_100b0574(&local_20);
  FUN_10003348(uVar1,1,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_20);
  if (param_3 != '\0') {
    FUN_100b0578(&local_28);
    FUN_10001da0();
  }
  return;
}



// Function: FUN_1006fa24 at 1006fa24
// Size: 264 bytes

void FUN_1006fa24(undefined4 param_1,short *param_2)

{
  FUN_10000270((int)param_2[1],(int)(short)(param_2[2] + -2));
  FUN_10001d88((int)param_2[1],(int)(short)(*param_2 + 1));
  FUN_10000270((int)(short)(param_2[1] + 1),(int)*param_2);
  FUN_10001d88((int)(short)(param_2[3] + -2),(int)*param_2);
  FUN_10000270((int)(short)(param_2[1] + 1),(int)(short)(param_2[2] + -1));
  FUN_10001d88((int)(short)(param_2[3] + -2),(int)(short)(param_2[2] + -1));
  FUN_10000270((int)(short)(param_2[3] + -1),(int)(short)(param_2[2] + -2));
  FUN_10001d88((int)(short)(param_2[3] + -1),(int)(short)(*param_2 + 1));
  return;
}



// Function: FUN_1006fb2c at 1006fb2c
// Size: 104 bytes

void FUN_1006fb2c(undefined4 param_1,short *param_2)

{
  FUN_10000270((int)param_2[1],(int)(short)(param_2[2] + -2));
  FUN_10001d88((int)param_2[1],(int)*param_2);
  FUN_10001d88((int)(short)(param_2[3] + -2),(int)*param_2);
  return;
}



// Function: FUN_1006fb94 at 1006fb94
// Size: 120 bytes

void FUN_1006fb94(undefined4 param_1,short *param_2)

{
  FUN_10000270((int)param_2[1],(int)(short)(param_2[2] + -1));
  FUN_10001d88((int)(short)(param_2[3] + -1),(int)(short)(param_2[2] + -1));
  FUN_10001d88((int)(short)(param_2[3] + -1),(int)*param_2);
  return;
}



// Function: FUN_1006fc0c at 1006fc0c
// Size: 176 bytes

void FUN_1006fc0c(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  FUN_100f0538(&stack0x00000028);
  FUN_10000270((int)param_2[1],(int)*param_2);
  FUN_10001d88((int)param_2[1],(int)*param_2);
  FUN_100f0538(&stack0x00000020);
  FUN_10000270((int)(short)(param_2[1] + 1),(int)(short)(*param_2 + 1));
  FUN_10001d88((int)(short)(param_2[1] + 1),(int)(short)(*param_2 + 1));
  return;
}



// Function: FUN_1006fcbc at 1006fcbc
// Size: 192 bytes

void FUN_1006fcbc(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  FUN_100f0538(&stack0x00000020);
  FUN_10000270((int)(short)(param_2[3] + -1),(int)*param_2);
  FUN_10001d88((int)(short)(param_2[3] + -1),(int)*param_2);
  FUN_100f0538(&stack0x00000028);
  FUN_10000270((int)(short)(param_2[3] + -2),(int)(short)(*param_2 + 1));
  FUN_10001d88((int)(short)(param_2[3] + -2),(int)(short)(*param_2 + 1));
  return;
}



// Function: FUN_1006fd7c at 1006fd7c
// Size: 192 bytes

void FUN_1006fd7c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  FUN_100f0538(&stack0x00000020);
  FUN_10000270((int)*(short *)(param_2 + 2),(int)(short)(*(short *)(param_2 + 4) + -1));
  FUN_10001d88((int)*(short *)(param_2 + 2),(int)(short)(*(short *)(param_2 + 4) + -1));
  FUN_100f0538(&stack0x00000028);
  FUN_10000270((int)(short)(*(short *)(param_2 + 2) + 1),(int)(short)(*(short *)(param_2 + 4) + -2))
  ;
  FUN_10001d88((int)(short)(*(short *)(param_2 + 2) + 1),(int)(short)(*(short *)(param_2 + 4) + -2))
  ;
  return;
}



// Function: FUN_1006fe3c at 1006fe3c
// Size: 380 bytes

void FUN_1006fe3c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -1),
                 (int)(short)(*(short *)(param_2 + 4) + -1));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -1),
                 (int)(short)(*(short *)(param_2 + 4) + -1));
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
  }
  else {
    FUN_100f0538(&stack0x00000020);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -1),
                 (int)(short)(*(short *)(param_2 + 4) + -1));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -1),
                 (int)(short)(*(short *)(param_2 + 4) + -1));
    FUN_100f0538(&stack0x00000028);
    FUN_10000270((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
    FUN_10001d88((int)(short)(*(short *)(param_2 + 6) + -2),
                 (int)(short)(*(short *)(param_2 + 4) + -2));
  }
  return;
}



// Function: FUN_1006ffc0 at 1006ffc0
// Size: 136 bytes

undefined4 * FUN_1006ffc0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb4), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_2c03ffff;
    *(undefined2 *)(param_1 + 0x2a) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xaa) = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0xffffffff;
  }
  return param_1;
}



// Function: FUN_10070048 at 10070048
// Size: 40 bytes

void FUN_10070048(void)

{
  FUN_1006ffc0(0);
  return;
}



// Function: FUN_10070070 at 10070070
// Size: 184 bytes

void FUN_10070070(int *param_1)

{
  short in_r9;
  undefined2 in_r10;
  undefined4 in_stack_00000038;
  
  FUN_100c6c0c(param_1);
  *(undefined2 *)((int)param_1 + 0xaa) = in_r10;
  param_1[0x20] = 0x44c;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),(int)in_r9,in_stack_00000038,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),1);
  return;
}



// Function: FUN_10070128 at 10070128
// Size: 136 bytes

void FUN_10070128(int *param_1)

{
  FUN_10105d28(param_1);
  param_1[0x20] = 0x44c;
  *(undefined2 *)((int)param_1 + 0xaa) = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),(int)(short)param_1[0x1e],0xffffffff
               ,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),1);
  return;
}



// Function: FUN_100701b0 at 100701b0
// Size: 136 bytes

int FUN_100701b0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = FUN_10105d2c(param_1);
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined2 *)(iVar1 + 0xaa) = *(undefined2 *)(param_1 + 0xaa);
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10003630(&local_10,(int)*(short *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(iVar1 + 0xac) = local_10;
    FUN_100db2a4();
  }
  return iVar1;
}



// Function: FUN_10070238 at 10070238
// Size: 76 bytes

void FUN_10070238(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_10070284 at 10070284
// Size: 88 bytes

void FUN_10070284(int param_1)

{
  *(undefined2 *)(param_1 + 0xa8) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10003600(*(undefined4 *)(param_1 + 0xac),1);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// Function: FUN_100702dc at 100702dc
// Size: 56 bytes

void FUN_100702dc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
  return;
}



// Function: FUN_10070314 at 10070314
// Size: 172 bytes

void FUN_10070314(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 local_120 [2];
  undefined1 local_11c [256];
  undefined1 auStack_1c [8];
  
  local_11c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0));
  param_1[0x2b] = param_2;
  FUN_10001758(param_2,local_120,auStack_1c,local_11c);
  iVar1 = FUN_10000678();
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x2a) = local_120[0];
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100703c0 at 100703c0
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100703c0(int *param_1,short param_2,int param_3,char param_4)

{
  int iVar1;
  int local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  if (param_2 != -1) {
    local_34 = _DAT_41820010;
    _DAT_41820010 = auStack_13c;
    iVar1 = FUN_10000090(auStack_13c);
    if (iVar1 == 0) {
      FUN_10003630(&local_140,(int)param_2,param_1[0x2c]);
      FUN_100db2a4(local_140);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0));
      param_1[0x2b] = local_140;
      *(short *)(param_1 + 0x2a) = param_2;
      param_1[0x2c] = param_3;
      _DAT_41820010 = local_34;
    }
    else {
      FUN_100db158((int)local_3c,local_38);
    }
    if (param_4 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}



// Function: FUN_100704d4 at 100704d4
// Size: 76 bytes

void FUN_100704d4(int *param_1,undefined2 param_2,char param_3)

{
  *(undefined2 *)((int)param_1 + 0xaa) = param_2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_10070520 at 10070520
// Size: 88 bytes

void FUN_10070520(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),0);
  FUN_101088b0(param_1,param_2);
  return;
}



