// Warlords II - Decompiled PPC Code
// Chunk 4 (functions 2000-2499)
// Decompiled by Ghidra 12.0.3

// Function: FUN_10094b40 at 10094b40
// Size: 1156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094b40(void)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  psVar1 = _FUN_1011662c;
  piVar2 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x6c656674);
  if (piVar2 != (int *)0x0) {
    uVar6 = (uint)*psVar1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x738) + (int)piVar2,
                 ('\x01' - ((1 < uVar6) + '\x01')) + (uVar6 != 0 && (uint)(1 < uVar6) <= uVar6 - 1),
                 1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x72696768);
  if (piVar2 != (int *)0x0) {
    uVar6 = (uint)*psVar1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x738) + (int)piVar2,
                 ('\x01' - ((1 < uVar6) + '\x01')) + (uVar6 != 0 && (uint)(1 < uVar6) <= uVar6 - 1),
                 1);
  }
  piVar2 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x75702020);
  piVar3 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x646f776e);
  piVar4 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x63617272);
  if ((piVar4 == (int *)0x0) ||
     (iVar5 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x818)), iVar5 == 0)) {
    piVar4 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                                 0x67726f75);
    if ((piVar4 == (int *)0x0) ||
       (iVar5 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x818)), iVar5 == 0)) {
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x660),0,1);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),0);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),1,1);
      }
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),1,1);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),1,1);
      }
    }
    else {
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x660),0,1);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),0);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),1,1);
      }
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),1,1);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),0,1);
      }
    }
  }
  else {
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),0,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),0);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),1,1);
    }
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x660),1,1);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),1);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),0,1);
    }
  }
  return;
}



// Function: FUN_10094fc4 at 10094fc4
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094fc4(void)

{
  int iVar1;
  int iVar2;
  
  FUN_10060608(0,1,0);
  iVar2 = 0;
  if (0 < _DAT_7c0802a6) {
    do {
      iVar1 = *(short *)(iVar2 * 2 + 0x612c0000) * 0x16;
      if (iVar2 != _DAT_38800002) {
        FUN_10061980((int)*(short *)(_DAT_60000000 + iVar1),
                     (int)*(short *)(_DAT_60000000 + iVar1 + 2),0);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_7c0802a6);
  }
  iVar2 = *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
  FUN_10061980((int)*(short *)(_DAT_60000000 + iVar2),(int)*(short *)(_DAT_60000000 + iVar2 + 2),1);
  FUN_10061354(0);
  return;
}



// Function: FUN_100950a4 at 100950a4
// Size: 652 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100950a4(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  _DAT_7c0802a6 = 0;
  sVar1 = *(short *)(_DAT_4bffe775 + 0x182);
  iVar4 = 1000;
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar2 = _DAT_60000000 + sVar1 * 0x16;
      if ((*(char *)(iVar2 + 4) == '\x1c') &&
         ((int)*(char *)(iVar2 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110))) {
        iVar2 = (int)_DAT_7c0802a6;
        _DAT_7c0802a6 = _DAT_7c0802a6 + 1;
        *(short *)(iVar2 * 2 + 0x612c0000) = sVar1;
      }
    } while (sVar1 != 0);
  }
  if (0 < _DAT_7c0802a6) {
    iVar2 = 0;
    if (0 < _DAT_7c0802a6) {
      do {
        iVar3 = *(short *)(iVar2 * 2 + 0x612c0000) * 0x16;
        iVar3 = FUN_1000a884((int)*(short *)(_DAT_4bffe775 + 0x17e),
                             (int)*(short *)(_DAT_4bffe775 + 0x180),
                             (int)*(short *)(_DAT_60000000 + iVar3),
                             (int)*(short *)(_DAT_60000000 + iVar3 + 2));
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
          _DAT_38800002 = (short)iVar2;
        }
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < _DAT_7c0802a6);
    }
    if (_DAT_4e800020 == (int *)0x0) {
      _DAT_4e800020 =
           (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),4000,
                               *(undefined4 *)(_DAT_57c407bd + 0x88));
      FUN_100db26c();
    }
    FUN_10094528();
    FUN_10094b40();
    FUN_10094fc4();
    local_48 = 0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_40 = _DAT_41820010;
    _DAT_41820010 = auStack_148;
    iVar4 = FUN_10000090(auStack_148);
    if (iVar4 == 0) {
      if (_DAT_4e800020 != (int *)0x0) {
        FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x810));
        FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x738));
        _DAT_4e800020 = (int *)0x0;
        FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3fa);
        FUN_1007c714(*(undefined4 *)(_DAT_57c407bd + 0x88),0x3fb);
      }
      _DAT_41820010 = local_40;
    }
    else {
      if (_DAT_4e800020 != (int *)0x0) {
        FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x738));
      }
      _DAT_4e800020 = (int *)0x0;
      FUN_100db158((int)local_48,local_44);
    }
  }
  return;
}



// Function: FUN_10095330 at 10095330
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10095330(void)

{
  undefined4 uVar1;
  
  FUN_1002bcd8();
  if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0xc + 0x1142) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004e384(3,0,0,0);
  }
  return uVar1;
}



// Function: FUN_100953a0 at 100953a0
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100953a0(void)

{
  _DAT_38800002 =
       (short)(_DAT_38800002 + 1) -
       (short)((_DAT_38800002 + 1) / (int)_DAT_7c0802a6) * _DAT_7c0802a6;
  FUN_10094528();
  FUN_10094fc4();
  FUN_10094b40();
  return;
}



// Function: FUN_100953f0 at 100953f0
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100953f0(void)

{
  int iVar1;
  
  iVar1 = (int)_DAT_38800002 + (int)_DAT_7c0802a6 + -1;
  _DAT_38800002 = (short)iVar1 - (short)(iVar1 / (int)_DAT_7c0802a6) * _DAT_7c0802a6;
  FUN_10094528();
  FUN_10094fc4();
  FUN_10094b40();
  return;
}



// Function: FUN_10095444 at 10095444
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10095444(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    iVar2 = _DAT_4bffe775 + iVar3 * 0x1e;
    if ((*(char *)(iVar2 + 0xd28) == '\x03') &&
       (*(short *)(iVar2 + 0xd2a) == (short)((uint)(param_1 - _DAT_60000000) / 0x16))) {
      if (*(char *)(iVar2 + 0xd26) == '\b') {
        iVar1 = (int)(short)((short)iVar1 + 1);
      }
      else {
        iVar2 = _DAT_4bffe775 + iVar3 * 0x1e;
        if (*(char *)(iVar2 + 0xd26) == '\x02') {
          iVar1 = (int)(short)((short)iVar1 + (short)*(char *)(iVar2 + 0xd27));
        }
      }
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x16);
  return iVar1;
}



// Function: FUN_100954fc at 100954fc
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100954fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar3 = _DAT_4bffe775 + iVar2 * 0x1e;
    if (((*(char *)(iVar3 + 0xd28) == '\x03') &&
        (*(short *)(iVar3 + 0xd2a) == (short)((uint)(param_1 - _DAT_60000000) / 0x16))) &&
       (*(char *)(iVar3 + 0xd26) == '\x01')) {
      iVar1 = (int)(short)((short)iVar1 + (short)*(char *)(iVar3 + 0xd27));
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x16);
  return iVar1;
}



// Function: FUN_10095584 at 10095584
// Size: 548 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095584(void)

{
  int *piVar1;
  int iVar2;
  short sVar4;
  short sVar5;
  undefined4 uVar3;
  int local_264;
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  undefined1 auStack_40 [28];
  
  piVar1 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x63617272);
  FUN_100db26c(piVar1);
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x818));
  if (iVar2 != 0) {
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x908));
    FUN_10033d54(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16,
                 (int)*(short *)(iVar2 * 2 + *(int *)(local_264 + -0x154) + -2));
    FUN_1009433c();
    iVar2 = _DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    sVar4 = FUN_100954fc();
    iVar2 = (int)(short)(*(char *)(iVar2 + 8) + sVar4);
    if (9 < iVar2) {
      iVar2 = 9;
    }
    sVar5 = FUN_10095444(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    sVar4 = *(short *)(iVar2 * 2 + *(int *)(local_264 + -0x1270));
    uVar3 = FUN_100954fc(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    iVar2 = *(int *)(local_264 + -0x127c);
    FUN_10001dd0(auStack_40,iVar2 + 0x10,uVar3);
    FUN_100b19f4(auStack_140,auStack_40);
    FUN_10090e0c(_DAT_4e800020,0x62617474,auStack_140,1);
    FUN_10001dd0(auStack_40,iVar2 + 0x14,(int)(short)(sVar4 + sVar5));
    FUN_100b19f4(auStack_240,auStack_40);
    FUN_10090e0c(_DAT_4e800020,0x636f6d6d,auStack_240,1);
    FUN_10094b40();
    iVar2 = *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    FUN_10008284((int)*(short *)(_DAT_60000000 + iVar2),(int)*(short *)(_DAT_60000000 + iVar2 + 2));
  }
  return;
}



// Function: FUN_100957a8 at 100957a8
// Size: 548 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100957a8(void)

{
  int *piVar1;
  int iVar2;
  short sVar4;
  short sVar5;
  undefined4 uVar3;
  int local_264;
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  undefined1 auStack_40 [28];
  
  piVar1 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x67726f75);
  FUN_100db26c(piVar1);
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x818));
  if (iVar2 != 0) {
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x908));
    FUN_10033c90(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16,
                 (int)*(short *)(iVar2 * 2 + *(int *)(local_264 + -0x150) + -2));
    FUN_1009433c();
    iVar2 = _DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    sVar4 = FUN_100954fc();
    iVar2 = (int)(short)(*(char *)(iVar2 + 8) + sVar4);
    if (9 < iVar2) {
      iVar2 = 9;
    }
    sVar5 = FUN_10095444(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    sVar4 = *(short *)(iVar2 * 2 + *(int *)(local_264 + -0x1270));
    uVar3 = FUN_100954fc(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    iVar2 = *(int *)(local_264 + -0x127c);
    FUN_10001dd0(auStack_40,iVar2 + 0x18,uVar3);
    FUN_100b19f4(auStack_140,auStack_40);
    FUN_10090e0c(_DAT_4e800020,0x62617474,auStack_140,1);
    FUN_10001dd0(auStack_40,iVar2 + 0x1c,(int)(short)(sVar4 + sVar5));
    FUN_100b19f4(auStack_240,auStack_40);
    FUN_10090e0c(_DAT_4e800020,0x636f6d6d,auStack_240,1);
    FUN_10094b40();
    iVar2 = *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    FUN_10008284((int)*(short *)(_DAT_60000000 + iVar2),(int)*(short *)(_DAT_60000000 + iVar2 + 2));
  }
  return;
}



// Function: FUN_100959cc at 100959cc
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100959cc(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1000;
  iVar3 = 0;
  if (0 < _DAT_7c0802a6) {
    do {
      iVar1 = *(short *)(iVar3 * 2 + 0x612c0000) * 0x16;
      iVar1 = FUN_1000a884((int)param_1,(int)param_2,(int)*(short *)(_DAT_60000000 + iVar1),
                           (int)*(short *)(_DAT_60000000 + iVar1 + 2));
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
        _DAT_38800002 = (short)iVar3;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < _DAT_7c0802a6);
  }
  FUN_10094528();
  FUN_10094fc4();
  FUN_10094b40();
  return;
}



// Function: FUN_10095a80 at 10095a80
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095a80(short param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short local_20 [2];
  
  iVar3 = *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
  FUN_1002122c((int)*(short *)(_DAT_60000000 + iVar3),(int)*(short *)(_DAT_60000000 + iVar3 + 2),
               local_20);
  if (param_1 < local_20[0]) {
    iVar3 = 0;
    sVar4 = 1;
    if (0 < local_20[0]) {
      do {
        if (*(int *)(&DAT_80410014 + iVar3 * 4) ==
            _DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16) {
          local_20[iVar3 + -8] = 0;
        }
        else {
          local_20[iVar3 + -8] = sVar4;
          sVar4 = sVar4 + 1;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < local_20[0]);
    }
    iVar3 = 0;
    if (0 < local_20[0]) {
      do {
        if (local_20[iVar3 + -8] == param_1) {
          iVar3 = *(int *)(&DAT_80410014 + iVar3 * 4);
          break;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < local_20[0]);
    }
    FUN_1000be58((int)*(char *)(iVar3 + 4),(int)*(char *)(iVar3 + 6),(int)*(char *)(iVar3 + 8),
                 (int)*(char *)(iVar3 + 0xb),(int)*(char *)(iVar3 + 7),(int)*(char *)(iVar3 + 10),0,
                 0);
  }
  else {
    FUN_1000a9e4(0,0,0);
    uVar1 = FUN_1005f678(0x85,1);
    uVar2 = FUN_1005f678(0x85,0);
    FUN_1000aaa8(uVar2,uVar1);
  }
  return;
}



// Function: FUN_10095c34 at 10095c34
// Size: 8 bytes

undefined1 * FUN_10095c34(void)

{
  return &DAT_8062fff8;
}



// Function: FUN_10095c44 at 10095c44
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10095c44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = _FUN_10117394;
  }
  return puVar1;
}



// Function: FUN_10095cb0 at 10095cb0
// Size: 196 bytes

void FUN_10095cb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar2);
  iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x63617272);
  if (iVar1 != 0) {
    FUN_100f4f94(iVar1,piVar2);
  }
  iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x67726f75);
  if (iVar1 != 0) {
    FUN_100f4f94(iVar1,piVar2);
  }
  FUN_10078a2c(param_1,param_2);
  return;
}



// Function: FUN_10095d74 at 10095d74
// Size: 264 bytes

void FUN_10095d74(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_2 == 8) {
    if ((param_3 != (int *)0x0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_3 + 0x818) + (int)param_3), iVar1 != 0)) {
      piVar3 = *(int **)(param_1 + 8);
      FUN_100db26c(piVar3);
      if (param_3[6] == 0x63617272) {
        uVar2 = 0x67726f75;
      }
      else {
        uVar2 = 0x63617272;
      }
      piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),uVar2);
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar3 + 0x840) + (int)piVar3,1);
      }
    }
    FUN_10094b40();
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_10095e7c at 10095e7c
// Size: 212 bytes

void FUN_10095e7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x646f776e) {
    FUN_10095584();
  }
  else if (iVar1 == 0x6c656674) {
    FUN_100953f0();
  }
  else if (iVar1 == 0x6f766572) {
    FUN_100959cc((ushort)((uint)param_2 >> 8) & 0x7f,(ushort)param_2 & 0xff);
  }
  else if (iVar1 == 0x72696768) {
    FUN_100953a0();
  }
  else if (iVar1 == 0x75702020) {
    FUN_100957a8();
  }
  else {
    FUN_100d5934();
  }
  return;
}



// Function: FUN_10095f50 at 10095f50
// Size: 328 bytes

void FUN_10095f50(undefined4 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if (param_2 == 0x646f6e65) {
      FUN_1009e534(0xf5);
    }
    else if (param_2 == 0x646f776e) {
      FUN_1009e534(0xfa);
    }
    else if (param_2 == 0x6c656674) {
      FUN_1009e534(0xf7);
    }
    else if (param_2 == 0x6f766572) {
      FUN_1000a9e4(0,0,0);
      FUN_1000aaa8(0x9421fff4,0x94220004);
    }
    else if (param_2 == 0x72696768) {
      FUN_1009e534(0xf6);
    }
    else if (param_2 == 0x75702020) {
      FUN_1009e534(0xfb);
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_10095a80((int)(short)((short)param_2 + -0x6d30),0);
  }
  return;
}



// Function: FUN_10096098 at 10096098
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096098(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  short local_28 [2];
  undefined4 local_24;
  
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    FUN_100462c8(0x1d);
  }
  else {
    iVar2 = *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    FUN_1002122c((int)*(short *)(_DAT_60000000 + iVar2),(int)*(short *)(_DAT_60000000 + iVar2 + 2),
                 local_28);
    if ((short)((short)param_2 + -0x6d30) < local_28[0]) {
      uVar1 = 0x28;
    }
    else {
      uVar1 = 0x1d;
    }
    FUN_100462c8(uVar1);
  }
  local_24 = CONCAT22(_DAT_607c0006,_DAT_607c0004);
  *param_3 = local_24;
  return;
}



// Function: FUN_10096188 at 10096188
// Size: 8 bytes

undefined4 FUN_10096188(void)

{
  return 0x4bfffef9;
}



// Function: FUN_10096198 at 10096198
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10096198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100e1f44(puVar1);
    *puVar1 = FUN_10117394;
  }
  return puVar1;
}



// Function: FUN_100961ec at 100961ec
// Size: 716 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100961ec(int *param_1,short param_2,undefined4 param_3)

{
  short sVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **local_8c;
  undefined1 auStack_68 [40];
  uint local_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_30 [20];
  
  if (param_1[6] == 0x63617272) {
    sVar1 = *(short *)(param_2 * 2 + 0x48000137);
  }
  else {
    sVar1 = *(short *)(param_2 * 2 + -0x7fbeffee);
  }
  iVar4 = (int)sVar1;
  ppuVar2 = local_8c;
  if (*(char *)(_DAT_4bffe775 + iVar4 * 0x1e + 0xd28) == '\0') {
    FUN_10001dd0(auStack_30,0x9422001c);
  }
  else if (*(char *)(_DAT_4bffe775 + iVar4 * 0x1e + 0xd26) == '\b') {
    FUN_10001dd0(auStack_30,0x94220024);
  }
  else {
    iVar3 = _DAT_4bffe775 + iVar4 * 0x1e;
    if (*(char *)(iVar3 + 0xd26) == '\x02') {
      FUN_10001dd0(auStack_30,0x9422002c,(int)*(char *)(iVar3 + 0xd27));
    }
    else {
      iVar3 = _DAT_4bffe775 + iVar4 * 0x1e;
      if (*(char *)(iVar3 + 0xd26) == '\x01') {
        FUN_10001dd0(auStack_30,0x94220034,(int)*(char *)(iVar3 + 0xd27));
      }
      else if (*(char *)(_DAT_4bffe775 + iVar4 * 0x1e + 0xd26) == '\x05') {
        FUN_10001dd0(auStack_30,0x9422003c);
      }
      else if (*(char *)(_DAT_4bffe775 + iVar4 * 0x1e + 0xd26) == '\x06') {
        FUN_10001dd0(auStack_30,0x94220040);
      }
      else {
        iVar3 = _DAT_4bffe775 + iVar4 * 0x1e;
        ppuVar2 = &.TVect::OCECToRString;
        if (*(char *)(iVar3 + 0xd26) == '\a') {
          FUN_10001dd0(auStack_30,0x94220048,(int)*(char *)(iVar3 + 0xd27));
          ppuVar2 = local_8c;
        }
      }
    }
  }
  FUN_10001dd0(auStack_68,ppuVar2[-0x49b] + 0x8c,_DAT_4bffe775 + iVar4 * 0x1e + 0xd12,auStack_30);
  FUN_100b1d90(param_3,auStack_68);
  local_40 = param_1[0x28];
  iStack_3c = param_1[0x29];
  iStack_38 = param_1[0x2a];
  FUN_100b1c84(param_3);
  iVar4 = FUN_100006f0();
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8c8));
  if (iVar3 + -2 < iVar4) {
    local_40 = local_40 | 0x2000;
  }
  FUN_100f0788(&local_40);
  return;
}



// Function: FUN_100964b8 at 100964b8
// Size: 92 bytes

void FUN_100964b8(int *param_1,undefined4 param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}



// Function: FUN_10096514 at 10096514
// Size: 100 bytes

void FUN_10096514(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  if (*(short *)(param_3 + 0x28) == 1) {
    FUN_100e4b48();
  }
  else if (*(int *)(param_1 + 0x18) == 0x67726f75) {
    FUN_100957a8();
  }
  else {
    FUN_10095584();
  }
  return;
}



// Function: FUN_10096578 at 10096578
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096578(void)

{
  FUN_100c1c8c(&DAT_8062fff8,_DAT_60000000,0x40,0x8062fb30,&DAT_281f0000);
  FUN_100c1c8c(0x4bfffef9,_DAT_38800002,0xb8,&DAT_48000cb5,&DAT_7c0803a6);
  return;
}



// Function: FUN_100965d4 at 100965d4
// Size: 8 bytes

undefined4 FUN_100965d4(void)

{
  return 0x8062fb34;
}



// Function: FUN_100965e4 at 100965e4
// Size: 128 bytes

undefined4 * FUN_100965e4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = &DAT_38800002;
  }
  return param_1;
}



// Function: FUN_10096664 at 10096664
// Size: 40 bytes

void FUN_10096664(void)

{
  FUN_100965e4(0);
  return;
}



// Function: FUN_1009668c at 1009668c
// Size: 184 bytes

void FUN_1009668c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x6974656d) {
    FUN_10054958();
  }
  else if (iVar1 == 0x6d617073) {
    FUN_10054994();
  }
  else if (iVar1 == 0x6d6f6e65) {
    FUN_10054824();
  }
  else if (iVar1 == 0x6f766572) {
    FUN_10054af4((ushort)((uint)param_2 >> 8) & 0x7f,(ushort)param_2 & 0xff);
  }
  else {
    FUN_100d5934();
  }
  return;
}



// Function: FUN_10096744 at 10096744
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096744(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x6974656d);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x660) + (int)piVar1,0,1);
    FUN_10117884((int)*(short *)(*piVar1 + 0xd8) + (int)piVar1,0);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x6d6f6e65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),0,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),0);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x6d617073);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),0,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),0);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_7fa83811 + (int)*(short *)(*_DAT_7fa83811 + 0x308),
                               0x646f6e65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),1,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),1);
  }
  return;
}



// Function: FUN_10096920 at 10096920
// Size: 232 bytes

void FUN_10096920(undefined4 param_1,int param_2)

{
  if (param_2 == 0x646f6e65) {
    FUN_1009e534(0x11d);
  }
  else if (param_2 == 0x6974656d) {
    FUN_1009e534(0x11a);
  }
  else if (param_2 == 0x6d617073) {
    FUN_1009e534(0x11c);
  }
  else if (param_2 == 0x6d6f6e65) {
    FUN_1009e534(0x11b);
  }
  else if (param_2 == 0x6f766572) {
    FUN_1000a9e4(0,0,0);
    FUN_1000aaa8(0x6000002c,0x6000003c);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_10096a10 at 10096a10
// Size: 128 bytes

undefined4 * FUN_10096a10(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x60000000;
  }
  return param_1;
}



// Function: FUN_10096a90 at 10096a90
// Size: 40 bytes

void FUN_10096a90(void)

{
  FUN_10096a10(0);
  return;
}



// Function: FUN_10096ab8 at 10096ab8
// Size: 168 bytes

void FUN_10096ab8(undefined4 param_1,int param_2)

{
  if (param_2 == 0x626c6573) {
    FUN_1009e534(0x14b);
  }
  else if (param_2 == 0x646f6e65) {
    FUN_1009e534(0x127);
  }
  else if (param_2 == 0x71756573) {
    FUN_1009e534(0x14c);
  }
  else if (param_2 == 0x74616b65) {
    FUN_1009e534(0x128);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_10096b60 at 10096b60
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096b60(void)

{
  FUN_100c1c8c(0x8062fb34,_DAT_8062fb38,0x40,&DAT_38800002,&DAT_281f0000);
  FUN_100c1c8c(0x48000ca5,_DAT_48000c95,0x40,0x60000000,&DAT_8062fb2c);
  return;
}



// Function: FUN_10096bbc at 10096bbc
// Size: 8 bytes

undefined1 * FUN_10096bbc(void)

{
  return &DAT_38800002;
}



// Function: FUN_10096bcc at 10096bcc
// Size: 104 bytes

undefined4 * FUN_10096bcc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb8), param_1 != (undefined4 *)0x0)) {
    FUN_100e1f44(param_1);
    *param_1 = 0x48000a75;
  }
  return param_1;
}



// Function: FUN_10096c34 at 10096c34
// Size: 40 bytes

void FUN_10096c34(void)

{
  FUN_10096bcc(0);
  return;
}



// Function: FUN_10096c5c at 10096c5c
// Size: 72 bytes

void FUN_10096c5c(undefined4 param_1,short param_2,undefined4 param_3)

{
  FUN_100b1d90(param_3,*(short *)(param_2 * 2 + 0x607cfffe) * 0x20 + 0x2c1d0000);
  return;
}



// Function: FUN_10096ca4 at 10096ca4
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096ca4(void)

{
  FUN_100c1c8c(&DAT_38800002,_DAT_60000000,0xb8,&DAT_80010040,&DAT_7c0803a6);
  return;
}



// Function: FUN_10096ce0 at 10096ce0
// Size: 8 bytes

undefined1 * FUN_10096ce0(void)

{
  return &DAT_30210038;
}



// Function: FUN_10096cf0 at 10096cf0
// Size: 108 bytes

undefined4 * FUN_10096cf0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &DAT_30210040;
  }
  return puVar1;
}



// Function: FUN_10096d5c at 10096d5c
// Size: 308 bytes

void FUN_10096d5c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_3 + 0x18);
  sVar1 = (short)uVar2;
  if ((uVar2 < 0x70656131) || (0x70656137 < uVar2)) {
    if ((uVar2 < 0x686f7331) || (0x686f7337 < uVar2)) {
      if ((uVar2 < 0x77617231) || (0x77617237 < uVar2)) {
        if (*(int *)(param_3 + 0x18) == 0x7265706f) {
          FUN_10026310();
        }
        else if (*(int *)(param_3 + 0x18) == 0x61637469) {
          FUN_100266e4(1);
        }
        else {
          FUN_100d5934();
        }
      }
      else {
        FUN_10026f70(2,(int)(short)(sVar1 + -0x7231));
      }
    }
    else {
      FUN_10026f70(1,(int)(short)(sVar1 + -0x7331));
    }
  }
  else {
    FUN_10026f70(0,(int)(short)(sVar1 + -0x6131));
  }
  return;
}



// Function: FUN_10096e90 at 10096e90
// Size: 348 bytes

void FUN_10096e90(undefined4 param_1,uint param_2)

{
  short sVar1;
  
  sVar1 = (short)param_2;
  if ((param_2 < 0x70656131) || (0x70656137 < param_2)) {
    if ((param_2 < 0x686f7331) || (0x686f7337 < param_2)) {
      if ((param_2 < 0x77617231) || (0x77617237 < param_2)) {
        if (param_2 == 0x7265706f) {
          FUN_1009e534(0x176);
        }
        else if (param_2 == 0x61637469) {
          FUN_1009e534(0x174);
        }
        else if (param_2 == 0x646f6e65) {
          FUN_1009e534(0x173);
        }
        else {
          FUN_10078c58();
        }
      }
      else {
        FUN_1009e534((int)(short)(sVar1 + -0x70b0));
      }
    }
    else {
      FUN_1009e534((int)(short)(sVar1 + -0x71b8));
    }
  }
  else {
    FUN_1009e534((int)(short)(sVar1 + -0x5fba));
  }
  return;
}



// Function: FUN_10096fec at 10096fec
// Size: 8 bytes

undefined1 * FUN_10096fec(void)

{
  return &DAT_7c0803a6;
}



// Function: FUN_10096ffc at 10096ffc
// Size: 84 bytes

undefined4 * FUN_10096ffc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x90);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10084ef0(puVar1);
    *puVar1 = &DAT_7c0803a6;
  }
  return puVar1;
}



// Function: FUN_10097050 at 10097050
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097050(int *param_1)

{
  int local_44;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  if (*(short *)(param_1 + 0x20) == -1) {
    local_18 = _DAT_41820018;
    local_14 = _DAT_4182001c;
    local_10 = param_1[0xd];
    local_c = param_1[0xe];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_18,auStack_20);
    FUN_100b2268(*(int *)(local_44 + -0x1d4) + 0x5fa);
    FUN_100021c0();
    FUN_100b0578(auStack_20);
    FUN_100021d8();
  }
  else {
    FUN_10084fac();
  }
  return;
}



// Function: FUN_10097108 at 10097108
// Size: 8 bytes

undefined1 * FUN_10097108(void)

{
  return &DAT_4e800020;
}



// Function: FUN_10097118 at 10097118
// Size: 84 bytes

undefined4 * FUN_10097118(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x80);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1010598c(puVar1);
    *puVar1 = &DAT_bbc1fff8;
  }
  return puVar1;
}



// Function: FUN_1009716c at 1009716c
// Size: 1312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009716c(void)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = _FUN_10116698;
  FUN_100b2268(&DAT_40860670);
  FUN_100021c0();
  FUN_10000270(2,0x1f,2,0x1f,0xe8);
  FUN_10000288(0,0xe8);
  iVar4 = 0;
  do {
    FUN_10000270((int)(short)((short)(iVar4 << 5) + 0x22),2,0x105);
    FUN_10000288(0,0x105);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 9);
  FUN_10000270(0x22,2,0x100);
  FUN_10000288(0x100,0);
  sVar2 = 0;
  do {
    FUN_10000270(2,(int)(short)(sVar2 * 0x1d + 0x1f),0x120);
    FUN_10000288(0x120,0);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 9);
  FUN_100b2268(&DAT_40860688);
  FUN_100021c0();
  FUN_10000270(0,0x1d,0xe8);
  FUN_10000288(0,0xe8);
  iVar4 = 0;
  do {
    FUN_10000270((int)(short)((short)(iVar4 << 5) + 0x20),0,0x105);
    FUN_10000288(0,0x105);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 9);
  FUN_10000270(0x20,0,0x100);
  FUN_10000288(0x100,0);
  sVar2 = 0;
  do {
    FUN_10000270(0,(int)(short)(sVar2 * 0x1d + 0x1d),0x120);
    FUN_10000288(0x120,0);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 9);
  FUN_100b2268(0x4086069a);
  FUN_100021c0();
  FUN_10000270(1,0x1e,0xe8);
  FUN_10000288(0,0xe8);
  iVar4 = 0;
  do {
    FUN_10000270((int)(short)((short)(iVar4 << 5) + 0x21),1);
    FUN_10000288(0,0x105);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 9);
  FUN_10000270(0x21,1);
  FUN_10000288(0x100,0);
  sVar2 = 0;
  do {
    FUN_10000270(1,(int)(short)(sVar2 * 0x1d + 0x1e));
    FUN_10000288(0x120,0);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 9);
  iVar4 = 0;
  do {
    if (*(short *)(_DAT_4bffe775 + iVar4 * 2 + 0x138) != 0) {
      FUN_10008c0c(iVar4,3,uVar1,(int)(short)((short)(iVar4 << 5) + 0x29),8);
      FUN_10008c0c(iVar4,3,uVar1,9,(int)(short)((short)iVar4 * 0x1d + 0x25));
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      sVar2 = (short)iVar3;
      if (iVar4 == iVar3) {
        FUN_100226b0(&local_20,0x180,0x1d,0x20,0x1d);
        FUN_1002269c(local_28,(int)(short)((short)(iVar4 << 5) + 0x21),
                     (int)(short)(sVar2 * 0x1d + 0x1e));
        FUN_1004602c(0x2f,local_20,local_1c,local_28[0],0x24,0xf);
      }
      else if ((*(short *)(_DAT_4bffe775 + iVar4 * 2 + 0x138) != 0) &&
              (*(short *)(_DAT_4bffe775 + iVar3 * 2 + 0x138) != 0)) {
        if ((*(uint *)(_DAT_4bffe775 + iVar4 * 0x10 + iVar3 * 2 + 0x1582) >> 0x1a & 3) == 2) {
          FUN_100226b0(&local_20,0x180,0,0x20,0x1d);
          FUN_1002269c(local_28,(int)(short)((short)(iVar4 << 5) + 0x21),
                       (int)(short)(sVar2 * 0x1d + 0x1e));
          FUN_1004602c(0x2f,local_20,local_1c,local_28[0],0x24,0xf);
        }
        else if ((*(uint *)(_DAT_4bffe775 + iVar4 * 0x10 + iVar3 * 2 + 0x1582) >> 0x1a & 3) == 0) {
          FUN_100226b0(&local_20,0x140,0,0x20,0x1d);
          FUN_1002269c(local_28,(int)(short)((short)(iVar4 << 5) + 0x21),
                       (int)(short)(sVar2 * 0x1d + 0x1e));
          FUN_1004602c(0x2f,local_20,local_1c,local_28[0],0x24,0xf);
        }
      }
      iVar3 = (int)(short)(sVar2 + 1);
    } while (iVar3 < 8);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  return;
}



// Function: FUN_1009768c at 1009768c
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1009768c(void)

{
  return FUN_10116698;
}



// Function: FUN_1009769c at 1009769c
// Size: 176 bytes

undefined4 * FUN_1009769c(undefined4 *param_1)

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
    *param_1 = &DAT_9421ffc0;
  }
  return param_1;
}



// Function: FUN_1009774c at 1009774c
// Size: 40 bytes

void FUN_1009774c(void)

{
  FUN_1009769c(0);
  return;
}



// Function: FUN_10097774 at 10097774
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097774(int *param_1)

{
  int local_44;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  if (param_1[0x2b] == 0) {
    local_18 = _DAT_41820018;
    local_14 = _DAT_4182001c;
    local_10 = param_1[0xd];
    local_c = param_1[0xe];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_18,auStack_20);
    FUN_100b2268(*(int *)(local_44 + -0x1d4) + 0x5fa);
    FUN_100021c0();
    FUN_100b0578(auStack_20);
    FUN_100021d8();
  }
  else {
    FUN_10070f64();
  }
  return;
}



// Function: FUN_1009782c at 1009782c
// Size: 156 bytes

void FUN_1009782c(int *param_1,short param_2,char param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == '\0') || ((int)*(short *)((int)param_1 + 0xaa) == (int)param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_100cfc24(param_1,(int)param_2,uVar1);
  if ((param_1[0x2b] == 0) && (param_1[0x2d] != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x3f8) + (int)param_1,param_1[0x2d],param_3);
    param_1[0x2d] = 0;
  }
  return;
}



// Function: FUN_100978c8 at 100978c8
// Size: 156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100978c8(void)

{
  FUN_100c1c8c(&DAT_30210038,_DAT_609e0000,0x40,&DAT_607f0000,&DAT_281f0000);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_40820024,0x90,&DAT_38600048,0x4bfdf005);
  FUN_100c1c8c(&DAT_4e800020,_DAT_60000000,0x80,&DAT_607f0000,&DAT_80410014);
  FUN_100c1c8c(&DAT_bfc1fff8,_DAT_281f0000,0xbc,&DAT_4082000c,&DAT_63e30000);
  return;
}



// Function: FUN_10097964 at 10097964
// Size: 8 bytes

undefined1 * FUN_10097964(void)

{
  return &DAT_48000034;
}



// Function: FUN_10097974 at 10097974
// Size: 104 bytes

undefined4 * FUN_10097974(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa0), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_289e0000;
  }
  return param_1;
}



// Function: FUN_100979dc at 100979dc
// Size: 40 bytes

void FUN_100979dc(void)

{
  FUN_10097974(0);
  return;
}



// Function: FUN_10097a04 at 10097a04
// Size: 52 bytes

void FUN_10097a04(int param_1)

{
  FUN_1005fa94(param_1 + 0x80,0,0);
  return;
}



// Function: FUN_10097a38 at 10097a38
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097a38(void)

{
  FUN_100c1c8c(&DAT_48000034,_DAT_40860014,0xa0,&DAT_33df000c,&DAT_80410014);
  return;
}



// Function: FUN_10097a74 at 10097a74
// Size: 8 bytes

undefined1 * FUN_10097a74(void)

{
  return &DAT_63c30000;
}



// Function: FUN_10097a84 at 10097a84
// Size: 128 bytes

undefined4 * FUN_10097a84(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x4bfff319;
  }
  return param_1;
}



// Function: FUN_10097b04 at 10097b04
// Size: 40 bytes

void FUN_10097b04(void)

{
  FUN_10097a84(0);
  return;
}



// Function: FUN_10097b2c at 10097b2c
// Size: 72 bytes

void FUN_10097b2c(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 0x18) == 0x626f6e75) {
    FUN_1003a760();
  }
  else {
    FUN_100d5934();
  }
  return;
}



// Function: FUN_10097b74 at 10097b74
// Size: 100 bytes

void FUN_10097b74(undefined4 param_1,int param_2)

{
  if (param_2 == 0x626f6e75) {
    FUN_1009e534(499);
  }
  else if (param_2 == 0x646f6e65) {
    FUN_1009e534(0x1f2);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_10097bd8 at 10097bd8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097bd8(void)

{
  FUN_100c1c8c(&DAT_63c30000,_DAT_60000000,0x40,0x93df0008,&DAT_281f0000);
  return;
}



// Function: FUN_10097c1c at 10097c1c
// Size: 108 bytes

undefined4 * FUN_10097c1c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = 0x8082fb48;
  }
  return puVar1;
}



// Function: FUN_10097c88 at 10097c88
// Size: 236 bytes

void FUN_10097c88(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  if ((piVar3 == (int *)0x0) ||
     (((sVar1 = *(short *)(param_2 + 0x24), sVar1 != 0xd && (sVar1 != 3)) && (sVar1 != 0x20)))) {
    FUN_100d599c(param_1,param_2);
  }
  else {
    piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x70696374);
    if ((piVar3 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0)), iVar2 == 0)) {
      FUN_100d599c(param_1,param_2);
    }
    else {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd0),piVar3[0x20],piVar3,0);
    }
  }
  return;
}



// Function: FUN_10097d74 at 10097d74
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097d74(void)

{
  FUN_100c1c8c(&DAT_8062fb2c,_DAT_909f0004,0x40,0x80a2fb4c,&DAT_281f0000);
  return;
}



// Function: FUN_10097db0 at 10097db0
// Size: 8 bytes

undefined4 FUN_10097db0(void)

{
  return 0x90be0038;
}



// Function: FUN_10097dc0 at 10097dc0
// Size: 116 bytes

undefined4 * FUN_10097dc0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &DAT_607f0000;
    *(undefined1 *)(puVar1 + 0x10) = 0;
  }
  return puVar1;
}



// Function: FUN_10097e34 at 10097e34
// Size: 52 bytes

void FUN_10097e34(int param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_10097c88();
  }
  return;
}



// Function: FUN_10097e68 at 10097e68
// Size: 740 bytes

void FUN_10097e68(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_3 + 0x18) == 0x72656a65) {
    FUN_10040cc0();
    *(undefined1 *)(param_1 + 0x40) = 1;
    piVar2 = *(int **)(param_1 + 8);
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),iVar3 + 0x6f666630
                                  );
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 0x660) + (int)piVar1,0,0);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 3);
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),iVar3 + 0x72656a30
                                  );
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 0x660) + (int)piVar1,1,0);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 4);
    piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x61636365);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),0,0);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),0);
    }
    piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x72656a65);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),0,0);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),0);
    }
    piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x70696374);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),1);
    }
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),iVar3 + 0x73696430
                                  );
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 4);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),1);
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
  }
  else {
    FUN_100d5934(param_1);
  }
  return;
}



// Function: FUN_1009814c at 1009814c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009814c(void)

{
  FUN_100c1c8c(0x90be0038,_DAT_63e30000,0x44,&DAT_80010048,&DAT_8062fb2c);
  return;
}



// Function: FUN_10098188 at 10098188
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10098188(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100014b8();
  FUN_10000318((int)_DAT_00000900);
  uVar2 = FUN_10003558(param_2,(int)param_3);
  FUN_10000318(uVar1);
  return uVar2;
}



// Function: FUN_100981f8 at 100981f8
// Size: 240 bytes

int FUN_100981f8(int param_1,short param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x4c), param_1 != 0)) {
    iVar2 = FUN_10098188(param_1,0x5072666c,(int)param_2);
    *(int *)(param_1 + 0x48) = iVar2;
    *(char *)(param_1 + 0x46) = '\x01' - (iVar2 == 0);
    iVar2 = FUN_10002b08(0xffff8000,0x70726566,0,param_1,param_1 + 2);
    if ((*(char *)(param_1 + 0x46) == '\0') || (iVar2 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *(bool *)(param_1 + 0x46) = bVar1;
    if (bVar1) {
      FUN_10002340(**(int **)(param_1 + 0x48) + 0xc,param_1 + 6,0x40);
    }
  }
  return param_1;
}



// Function: FUN_100982e8 at 100982e8
// Size: 56 bytes

void FUN_100982e8(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    FUN_100f5708();
  }
  return;
}



// Function: FUN_10098320 at 10098320
// Size: 260 bytes

int FUN_10098320(int param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_100014b8();
  if (*(char *)(param_1 + 0x46) == '\0') {
    local_20[0] = 0;
  }
  else {
    iVar2 = FUN_100032d0(param_1,1);
    if ((iVar2 != 0) && (iVar3 = FUN_10000678(), iVar3 == 0)) {
      local_20[0] = FUN_10003558(param_2,(int)param_3);
      if (local_20[0] != 0) {
        FUN_10002b50(local_20);
      }
      FUN_10003300(iVar2);
    }
    if (local_20[0] == 0) {
      local_20[0] = FUN_10098188(param_1,param_2,(int)param_3);
      if (local_20[0] != 0) {
        FUN_10002b50(local_20);
      }
    }
    FUN_10000318(uVar1);
  }
  return local_20[0];
}



// Function: FUN_10098424 at 10098424
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10098424(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100014b8();
  FUN_10000318((int)_DAT_00000900);
  uVar2 = FUN_100b1c84(param_3);
  uVar2 = FUN_10003540(param_2,uVar2);
  FUN_10000318(uVar1);
  return uVar2;
}



// Function: FUN_100984a4 at 100984a4
// Size: 344 bytes

int FUN_100984a4(int param_1,undefined4 param_2,byte *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_120 [256];
  int local_20;
  
  puVar5 = auStack_120;
  local_20 = 0;
  uVar1 = FUN_100014b8();
  if (*(char *)(param_1 + 0x46) == '\0') {
    local_20 = 0;
  }
  else {
    iVar2 = FUN_100032d0(param_1,1);
    if ((iVar2 != 0) && (iVar3 = FUN_10000678(), iVar3 == 0)) {
      uVar4 = FUN_100b1c84(param_3);
      local_20 = FUN_10003540(param_2,uVar4);
      if (local_20 != 0) {
        FUN_10002b50(&local_20);
      }
      FUN_10003300(iVar2);
    }
    if (local_20 == 0) {
      if ((puVar5 != (undefined1 *)0x0) ||
         (puVar5 = (undefined1 *)FUN_100f56e4(0x100), puVar5 != (undefined1 *)0x0)) {
        FUN_100012d8(param_3,puVar5,*param_3 + 1);
      }
      local_20 = FUN_10098424(param_1,param_2,puVar5);
      if (local_20 != 0) {
        FUN_10002b50(&local_20);
      }
    }
    FUN_10000318(uVar1);
  }
  return local_20;
}



// Function: FUN_100985fc at 100985fc
// Size: 536 bytes

void FUN_100985fc(int param_1,undefined4 param_2,undefined4 param_3,short param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack0000001c;
  short sStack00000026;
  int local_14c;
  undefined4 local_128;
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [256];
  
  if (*(char *)(param_1 + 0x46) != '\0') {
    puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x48);
    uStack0000001c = param_2;
    sStack00000026 = param_4;
    FUN_10002b68(param_1,*puVar5,puVar5[1],(int)*(short *)(puVar5 + 2));
    iVar1 = FUN_10000678();
    iVar2 = FUN_10000678();
    if ((((iVar2 == 0) || (iVar2 = FUN_10000678(), iVar2 == -0x30)) &&
        (iVar2 = FUN_100032d0(param_1,2), iVar2 != 0)) && (iVar3 = FUN_10000678(), iVar3 == 0)) {
      if (iVar1 == 0) {
        local_128 = FUN_10098188(param_1,0x53545220,(int)*(short *)(**(int **)(param_1 + 0x48) + 10)
                                );
        FUN_10002b50(&local_128);
        uVar4 = FUN_100b1c84(*(undefined4 *)(local_14c + -0xe4c));
        FUN_10002568(local_128,0x53545220,0xffffc005,uVar4);
        FUN_10001c98(local_128);
      }
      if (sStack00000026 == -1) {
        uVar4 = FUN_100b1c84(param_5);
        iVar1 = FUN_10003540(param_3,uVar4);
        if (iVar1 == 0) {
          sStack00000026 = FUN_100030a8(param_3);
        }
        else {
          FUN_10001758(iVar1,&stack0x00000026,auStack_124,auStack_120);
        }
      }
      iVar1 = FUN_10003558(param_3,(int)sStack00000026);
      if (iVar1 != 0) {
        FUN_10003480(iVar1);
      }
      FUN_10002b50(&stack0x0000001c);
      uVar4 = FUN_100b1c84(param_5);
      FUN_10002568(uStack0000001c,param_3,(int)sStack00000026,uVar4);
      FUN_100014e8(iVar2);
      FUN_10003300(iVar2);
    }
  }
  return;
}



// Function: FUN_10098814 at 10098814
// Size: 88 bytes

undefined4 FUN_10098814(void)

{
  undefined4 uVar1;
  int local_24;
  
  uVar1 = FUN_10000a98(&DAT_30210040,0x1c0,1);
  **(undefined4 **)(local_24 + -0x144) = uVar1;
  uVar1 = FUN_10000a98(*(undefined4 *)(local_24 + -0x1190),0x1c0,1);
  **(undefined4 **)(local_24 + -0x140) = uVar1;
  return 0;
}



// Function: FUN_1009886c at 1009886c
// Size: 144 bytes

void FUN_1009886c(int *param_1,char param_2)

{
  undefined1 *puVar1;
  int local_2c;
  
  if (((int)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
    if (param_2 == '\x01') {
      puVar1 = &DAT_bbc1fff8;
    }
    else {
      puVar1 = &DAT_4e800020;
    }
    FUN_100008b8(puVar1);
    FUN_100021c0(*(undefined4 *)(local_2c + -0x1184));
  }
  FUN_10000030();
  FUN_100026d0(1);
  FUN_10002eb0(9);
  FUN_10002d48(param_2);
  return;
}



// Function: FUN_100988fc at 100988fc
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100988fc(int *param_1,undefined1 param_2,int param_3)

{
  FUN_10000660(param_3);
  FUN_10000198(*param_1);
  FUN_10000000(param_3 + 4);
  *(undefined2 *)(param_3 + 0x16) = *(undefined2 *)(_DAT_80a2db8e + 0x44);
  *(undefined2 *)(param_3 + 0x18) = *(undefined2 *)(_DAT_80a2db8e + 0x4a);
  *(ushort *)(param_3 + 0x1a) = (ushort)*(byte *)(_DAT_80a2db8e + 0x46);
  if (((int)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
    FUN_10001ad0(param_3 + 0x1c);
    FUN_10003930(param_3 + 0x22);
  }
  FUN_1009886c(param_1,param_2);
  return;
}



// Function: FUN_100989b0 at 100989b0
// Size: 340 bytes

int FUN_100989b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_1009a974(param_1);
    }
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar2 = FUN_1009a974(param_1,*(int *)(param_1 + 8)), iVar1 == 0)) {
      iVar1 = iVar2;
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (iVar2 = FUN_100997dc(param_1), iVar1 == 0)) {
      iVar1 = iVar2;
    }
    iVar2 = FUN_1009b878(param_1);
    if (iVar1 == 0) {
      iVar1 = iVar2;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_10003588(*(int *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_10003588(*(int *)(param_1 + 0x1c));
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10003588(*(int *)(param_1 + 0x20));
    }
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + iVar2 * 4 + 0x24);
      if (iVar3 != 0) {
        FUN_10003588(iVar3);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    FUN_100025b0(param_1);
  }
  return iVar1;
}



// Function: FUN_10098b04 at 10098b04
// Size: 144 bytes

void FUN_10098b04(undefined4 *param_1)

{
  int local_2c;
  
  FUN_100026d0((int)*(short *)((int)param_1 + 0x16));
  FUN_10002eb0((int)*(short *)(param_1 + 6));
  FUN_10002d48((int)*(short *)((int)param_1 + 0x1a));
  if (((int)*(short *)(*(int *)(*(int *)(local_2c + -0xb0) + 0xca) + 6) & 0xc000U) != 0) {
    FUN_100008b8((int)param_1 + 0x22);
    FUN_100021c0(param_1 + 7);
  }
  FUN_100016f8(param_1 + 1);
  FUN_10000198(*param_1);
  return;
}



// Function: FUN_10098b94 at 10098b94
// Size: 836 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10098b94(int *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar3;
  undefined4 *puVar1;
  int iVar2;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_stack_00000038;
  uint in_stack_0000003c;
  short in_stack_00000042;
  undefined2 in_stack_00000046;
  short in_stack_0000004a;
  short in_stack_0000004e;
  short in_stack_00000052;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  undefined1 in_stack_0000005f;
  short in_stack_00000062;
  undefined4 in_stack_00000064;
  int local_94;
  undefined1 auStack_70 [40];
  
  uVar3 = FUN_100f1574(1);
  puVar1 = (undefined4 *)FUN_10001cf8(0x15c);
  **(undefined1 **)(local_94 + -0x3c) = uVar3;
  iVar2 = FUN_10002b20();
  *param_1 = (int)puVar1;
  if ((puVar1 != (undefined4 *)0x0) && (iVar2 == 0)) {
    *puVar1 = param_2;
    FUN_100988fc(puVar1,1,auStack_70);
    uVar5 = param_3[1];
    puVar1[0x25] = *param_3;
    puVar1[0x26] = uVar5;
    *(undefined1 *)(puVar1 + 0x1f) = param_4;
    *(undefined1 *)((int)puVar1 + 0x7d) = param_5;
    puVar1[0x19] = param_6;
    puVar1[0x1a] = param_7;
    puVar1[0x1b] = param_8;
    puVar1[0x1c] = in_stack_00000038;
    *(undefined2 *)(puVar1 + 0x20) = 0xffff;
    iVar2 = 0;
    do {
      if ((*(short *)(puVar1 + 0x1d) == iVar2) &&
         ((iVar4 = _DAT_4bffe775 + iVar2 * 2, *(short *)(iVar4 + 0xd0) != 0 ||
          (*(short *)(iVar4 + 0x138) == 0)))) {
        *(short *)(puVar1 + 0x1d) = *(short *)(puVar1 + 0x1d) + 1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    *(undefined1 *)((int)puVar1 + 0x85) = 1;
    *(undefined1 *)((int)puVar1 + 0x86) = 1;
    *(undefined2 *)(puVar1 + 0x23) = in_stack_00000046;
    puVar1[0x13] = in_stack_00000064;
    iVar2 = FUN_100990c0(puVar1,in_stack_0000003c);
    FUN_100992c8(puVar1);
    FUN_1009c544(puVar1,0);
    FUN_10000fd8(puVar1 + 0x25);
    FUN_1009886c(puVar1,0);
    if (iVar2 == 0) {
      if (((in_stack_0000003c & 1) != 0) &&
         (iVar2 = FUN_1009a8b8(puVar1,param_7,param_8,0xffffffff,in_stack_00000058 & 0xffffffef,
                               in_stack_0000005f,(int)in_stack_0000004e,puVar1 + 1), iVar2 == -0x2b)
         ) {
        *(undefined1 *)((int)puVar1 + 0x8f) = 0;
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        if ((in_stack_0000003c & 2) != 0) {
          iVar2 = FUN_1009a8b8(puVar1,param_7,param_8,in_stack_00000054,
                               in_stack_00000058 & 0xffffffef,in_stack_0000005f,
                               (int)in_stack_0000004a,puVar1 + 2);
        }
        if (iVar2 == 0) {
          if ((in_stack_0000003c & 4) != 0) {
            iVar2 = FUN_100996f8(puVar1,param_7,param_8,(int)in_stack_00000062,2,in_stack_0000005f,
                                 (int)in_stack_00000052);
          }
          if ((iVar2 == 0) && ((in_stack_0000003c & 8) != 0)) {
            iVar2 = FUN_1009b7cc(puVar1);
          }
        }
      }
    }
    FUN_1009886c(puVar1,1);
    if (iVar2 == 0) {
      *(undefined2 *)((int)puVar1 + 0x76) = 0xbe97;
      iVar4 = FUN_10001a88();
      puVar1[0x1e] = iVar4 + 6;
      FUN_10099f14(puVar1,in_stack_00000042);
      FUN_1009c380(puVar1,(int)in_stack_00000042,1);
      FUN_1009abf0(puVar1);
    }
    else {
      FUN_100989b0(puVar1);
      *param_1 = 0;
    }
    FUN_10098b04(auStack_70);
  }
  return iVar2;
}



// Function: FUN_10098ed8 at 10098ed8
// Size: 68 bytes

void FUN_10098ed8(int param_1)

{
  if (*(ushort *)(param_1 + 0x80) < 4) {
    return;
  }
  return;
}



// Function: FUN_10098f74 at 10098f74
// Size: 116 bytes

void FUN_10098f74(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10001728(0x63637462,2000);
  iVar2 = FUN_10000678();
  FUN_10002ce8(uVar1);
  if (iVar2 == 0) {
    FUN_10001e00(param_1,uVar1);
  }
  return;
}



// Function: FUN_10098fe8 at 10098fe8
// Size: 216 bytes

undefined4 FUN_10098fe8(int *param_1,short param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_11c [256];
  undefined1 auStack_1c [8];
  
  FUN_10003108(auStack_1c,0,0,0,0);
  FUN_100009d8(auStack_11c,(int)*(short *)(param_1 + 0x23),(int)param_2);
  iVar1 = FUN_10001068(*param_1,auStack_1c,auStack_11c,0,0,0,1,8);
  *param_3 = iVar1;
  if (iVar1 == 0) {
    uVar2 = FUN_10002b20();
  }
  else {
    uVar2 = 0;
    if (((int)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
      FUN_10098f74(*param_3);
    }
  }
  return uVar2;
}



// Function: FUN_100990c0 at 100990c0
// Size: 308 bytes

int FUN_100990c0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_1009886c(param_1,1);
  iVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    iVar1 = FUN_10098fe8(param_1,4,param_1 + 0x18);
  }
  if (iVar1 == 0) {
    if ((param_2 & 0x20) != 0) {
      iVar1 = FUN_10098fe8(param_1,10,param_1 + 0x1c);
    }
    if ((iVar1 == 0) && ((param_2 & 0x40) != 0)) {
      iVar1 = FUN_10098fe8(param_1,5,param_1 + 0x20);
    }
  }
  uVar2 = 0;
  do {
    if ((param_2 & 1 << (uVar2 & 0x3f)) != 0) {
      *(undefined1 *)(param_1 + uVar2 + 0x8f) = 1;
    }
    uVar2 = (uint)(short)((short)uVar2 + 1);
  } while ((int)uVar2 < 4);
  iVar3 = 0;
  do {
    if (iVar1 == 0) {
      iVar1 = FUN_10098fe8(param_1,(int)(short)((short)iVar3 + 0x11),param_1 + iVar3 * 4 + 0x24);
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 8);
  return iVar1;
}



// Function: FUN_100991f4 at 100991f4
// Size: 212 bytes

void FUN_100991f4(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = (param_3 & 0xff) * 8 + param_1;
  local_18 = *(undefined4 *)(iVar1 + 0x94);
  local_14 = *(undefined4 *)(iVar1 + 0x98);
  if ((param_2 != (int *)0x0) && (iVar1 = FUN_10002868(*param_2 + 8,&local_18), iVar1 == 0)) {
    FUN_100002b8(param_2);
    FUN_10003828(param_2,(int)local_18._2_2_,(int)local_18._0_2_);
    FUN_100038e8(param_2,(int)(short)(local_14._2_2_ - local_18._2_2_),
                 (int)(short)(local_14._0_2_ - local_18._0_2_));
    if (*(char *)(param_1 + 0x7c) != '\0') {
      FUN_10002388(param_2);
    }
  }
  return;
}



// Function: FUN_100992c8 at 100992c8
// Size: 1072 bytes

void FUN_100992c8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_110 [256];
  
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x98);
  FUN_10003108(param_1 + 0x9c,(int)(short)(*(short *)(param_1 + 0x116) + 10),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x12),
               (int)(short)(*(short *)(param_1 + 0x116) + 0x23),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x2b));
  FUN_100020e8(param_1 + 0x9c);
  iVar4 = 2;
  do {
    iVar2 = iVar4 * 8 + param_1;
    puVar3 = (undefined4 *)(iVar2 + 0x94);
    *puVar3 = *(undefined4 *)(iVar2 + 0x8c);
    *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar2 + 0x90);
    FUN_100033f0(puVar3,0,0x1f);
    FUN_100020e8(puVar3);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 5);
  FUN_10003108((undefined4 *)(param_1 + 0xd4),(int)(short)(*(short *)(param_1 + 0x116) + 0x2d),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x18),
               (int)(short)(*(short *)(param_1 + 0x11a) + -0x44),
               (int)(short)(*(short *)(param_1 + 0x118) + -0x2b));
  FUN_10003108(param_1 + 0xe4,(int)*(short *)(param_1 + 0xd6),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x26),(int)*(short *)(param_1 + 0xda),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x32));
  FUN_100009d8(auStack_110,(int)*(short *)(param_1 + 0x8c),0x10);
  FUN_1009886c(param_1,1);
  FUN_10003108(param_1 + 0xf4,(int)*(short *)(param_1 + 0xd6),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x38),(int)*(short *)(param_1 + 0xda),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x6a));
  sVar1 = FUN_100006f0(auStack_110);
  FUN_10003108(param_1 + 0xec,(int)*(short *)(param_1 + 0xd6),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x72),
               (int)(short)(*(short *)(param_1 + 0xd6) + sVar1),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x7e));
  sVar1 = FUN_10003420(0x6e);
  FUN_10003108(param_1 + 0xfc,(int)(short)(*(short *)(param_1 + 0xf2) + sVar1),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x72),(int)*(short *)(param_1 + 0xda),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x84));
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd8);
  FUN_10003348((undefined4 *)(param_1 + 0xdc),0xfffffffc,0xfffffffc);
  FUN_10003108(param_1 + 0xbc,(int)*(short *)(param_1 + 0xd6),
               (int)(short)(*(short *)(param_1 + 0x118) + -0x21),
               (int)(short)(*(short *)(param_1 + 0xd6) + 0x38),
               (int)(short)(*(short *)(param_1 + 0x118) + -0x11));
  FUN_10003108((undefined4 *)(param_1 + 0xcc),(int)(short)(*(short *)(param_1 + 0xda) + -0x38),
               (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xda),
               (int)*(short *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xd0);
  FUN_100033f0((undefined4 *)(param_1 + 0xc4),0xffffffbb,0);
  *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xc6) + 0x38;
  iVar4 = 0;
  do {
    sVar1 = *(short *)(param_1 + 0x94) + ((short)(iVar4 << 2) - (short)iVar4) * 8;
    FUN_10003108(iVar4 * 8 + param_1 + 0x11c,(int)(short)(*(short *)(param_1 + 0x9a) + -0x3c),
                 (int)(short)(sVar1 + 6),(int)(short)(*(short *)(param_1 + 0x9a) + -4),
                 (int)(short)(sVar1 + 0x16));
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  FUN_10003108(param_1 + 0x104,(int)(short)(*(short *)(param_1 + 0x11a) + -0x54),
               (int)(short)(*(short *)(param_1 + 0x114) + 5),
               (int)(short)(*(short *)(param_1 + 0x11a) + -0x44),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x15));
  FUN_10003108(param_1 + 0x10c,(int)*(short *)(param_1 + 0xd6),
               (int)(short)(*(short *)(param_1 + 0x114) + 5),
               (int)(short)(*(short *)(param_1 + 0x106) + -1),
               (int)(short)(*(short *)(param_1 + 0x114) + 0x15));
  FUN_100991f4(param_1,*(undefined4 *)(param_1 + 0x18),5);
  FUN_100991f4(param_1,*(undefined4 *)(param_1 + 0x1c),6);
  FUN_100991f4(param_1,*(undefined4 *)(param_1 + 0x20),7);
  iVar4 = 0;
  do {
    FUN_100991f4(param_1,*(undefined4 *)(param_1 + iVar4 * 4 + 0x24),iVar4 + 0x11U & 0xff);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1009ab84(param_1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1009ab84(param_1,*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_10099ab0(param_1);
  }
  FUN_1009c26c(param_1);
  return;
}



// Function: FUN_100996f8 at 100996f8
// Size: 228 bytes

int FUN_100996f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  short in_r9;
  int local_64;
  undefined4 local_2c [3];
  
  FUN_10001098(local_2c,(int)*(short *)((int)param_1 + 0xd6),(int)*(short *)(param_1 + 0x35));
  iVar1 = FUN_10001140(param_1 + 3,*param_1,local_2c[0],0xffffbec4,0,0,param_2,param_3);
  if (iVar1 == 0) {
    if (in_r9 != 0) {
      iVar1 = FUN_10001158(param_1[3],(int)in_r9);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_10002838(param_1[3],**(undefined4 **)(local_64 + -0x140));
    }
  }
  return iVar1;
}



// Function: FUN_100997dc at 100997dc
// Size: 80 bytes

undefined4 FUN_100997dc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10000408(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}



// Function: FUN_1009982c at 1009982c
// Size: 88 bytes

undefined4 FUN_1009982c(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else if (param_2 == '\0') {
    uVar1 = FUN_100009a8(*(undefined4 *)(param_1 + 0xc));
  }
  else {
    uVar1 = FUN_10000990(*(undefined4 *)(param_1 + 0xc));
  }
  return uVar1;
}



// Function: FUN_10099884 at 10099884
// Size: 64 bytes

undefined4 FUN_10099884(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100009c0(*(undefined4 *)(param_1 + 0xc),param_2);
  }
  return uVar1;
}



// Function: FUN_100998c4 at 100998c4
// Size: 60 bytes

undefined4 FUN_100998c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10002d90(*(undefined4 *)(param_1 + 0xc));
  }
  return uVar1;
}



// Function: FUN_10099900 at 10099900
// Size: 124 bytes

undefined4 FUN_10099900(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (((*(short *)(param_1 + 0x80) == 2) && (*(int **)(param_1 + 0xc) != (int *)0x0)) &&
     ((bool)param_2 != (*(char *)(**(int **)(param_1 + 0xc) + 6) != '\0'))) {
    if (param_2 != '\0') {
      uVar1 = FUN_10003810(*(undefined4 *)(param_1 + 0xc));
      return uVar1;
    }
    uVar1 = FUN_10000930(*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  }
  return 0;
}



// Function: FUN_1009997c at 1009997c
// Size: 308 bytes

int FUN_1009997c(int param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined1 uVar2;
  undefined4 uVar1;
  int iVar3;
  int local_3c;
  ushort local_18 [2];
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = -0x32;
  }
  else if (*(char *)(**(int **)(param_1 + 0xc) + 6) == '\0') {
    iVar3 = FUN_100029a0(*(undefined4 *)(param_1 + 0xc),local_18);
  }
  else {
    iVar3 = -0x620;
  }
  if (iVar3 == 0) {
    if ((local_18[0] & 1) == 0) {
      iVar3 = -0x652;
    }
    if ((iVar3 == 0) && (iVar3 = FUN_100000a8(*(undefined4 *)(param_1 + 0xc),param_2), iVar3 == 0))
    {
      uVar2 = FUN_100f1574(1);
      uVar1 = FUN_10001338(*param_2);
      *param_3 = uVar1;
      **(undefined1 **)(local_3c + -0x3c) = uVar2;
      iVar3 = FUN_10002b20();
      if ((iVar3 == 0) &&
         (iVar3 = FUN_100017d0(*(undefined4 *)(param_1 + 0xc),*param_3), iVar3 != 0)) {
        FUN_100025b0(*param_3);
        *param_2 = 0;
        *param_3 = 0;
      }
    }
  }
  return iVar3;
}



// Function: FUN_10099ab0 at 10099ab0
// Size: 64 bytes

void FUN_10099ab0(int param_1)

{
  FUN_100028b0(*(undefined4 *)(param_1 + 0xc),(int)*(short *)(param_1 + 0xd6),
               (int)*(short *)(param_1 + 0xd4));
  return;
}



// Function: FUN_10099af0 at 10099af0
// Size: 148 bytes

void FUN_10099af0(undefined4 param_1,int param_2)

{
  undefined1 auStack_38 [40];
  undefined1 auStack_10 [4];
  
  FUN_1009abf0(param_1);
  if (param_2 != 0) {
    FUN_100988fc(param_1,1,auStack_38);
    FUN_10003618(param_2,10);
    FUN_100007e0(8,auStack_10);
    FUN_10003618(param_2,0);
    FUN_10098b04(auStack_38);
  }
  return;
}



// Function: FUN_10099b84 at 10099b84
// Size: 112 bytes

int FUN_10099b84(int param_1)

{
  *(undefined1 *)(param_1 + 0x84) = 1;
  if (*(ushort *)(param_1 + 0x80) < 4) {
    return param_1;
  }
  return 0;
}



// Function: FUN_10099f14 at 10099f14
// Size: 168 bytes

void FUN_10099f14(int param_1,ushort param_2)

{
  if (*(ushort *)(param_1 + 0x80) != param_2) {
    *(undefined1 *)(param_1 + 0x84) = 1;
    if (*(ushort *)(param_1 + 0x80) < 4) {
      return;
    }
    FUN_10002c58(param_1 + 0xdc);
    *(ushort *)(param_1 + 0x80) = param_2;
    if (param_2 < 4) {
      return;
    }
    FUN_1009c434(param_1);
  }
  return;
}



// Function: FUN_1009a548 at 1009a548
// Size: 276 bytes

int FUN_1009a548(int param_1,ushort *param_2,uint *param_3)

{
  ushort uVar1;
  
  *param_3 = 1;
  uVar1 = *param_2;
  if ((param_2[7] & 0x800) != *(ushort *)(param_1 + 0x82)) {
    *(ushort *)(param_1 + 0x82) = param_2[7] & 0x800;
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  if ((uVar1 != 6) && (uVar1 != 1)) {
    if (uVar1 != 0) {
      *(undefined1 *)(param_1 + 0x84) = 1;
    }
    if (*(ushort *)(param_1 + 0x80) < 4) {
      return param_1;
    }
  }
  if (0xf < uVar1) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      FUN_1009abf0(param_1);
    }
    if (*(char *)(**(int **)(param_1 + 0xc) + 6) != '\0') {
      *param_3 = *param_3 | 8;
    }
    return 0;
  }
  return param_1;
}



// Function: FUN_1009a8b8 at 1009a8b8
// Size: 188 bytes

int FUN_1009a8b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,short param_7,undefined4 *param_8)

{
  int iVar1;
  int local_44;
  
  iVar1 = FUN_10003840(param_8,*param_1,param_1 + 0x35,0,0,param_4,param_2,param_3);
  if (iVar1 == 0) {
    if (param_7 != 0) {
      iVar1 = FUN_10003330(*param_8,(int)param_7);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_10001128(*param_8,**(undefined4 **)(local_44 + -0x144));
    }
  }
  return iVar1;
}



// Function: FUN_1009a974 at 1009a974
// Size: 56 bytes

undefined4 FUN_1009a974(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10000f48(param_2);
  }
  return uVar1;
}



// Function: FUN_1009a9ac at 1009a9ac
// Size: 64 bytes

void FUN_1009a9ac(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_100030f0(param_2);
  }
  else {
    FUN_10003498(param_2);
  }
  return;
}



// Function: FUN_1009a9ec at 1009a9ec
// Size: 48 bytes

void FUN_1009a9ec(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_10000978(param_2,param_3);
  return;
}



// Function: FUN_1009aa1c at 1009aa1c
// Size: 48 bytes

void FUN_1009aa1c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_10002610(param_2,param_3);
  return;
}



// Function: FUN_1009aa4c at 1009aa4c
// Size: 44 bytes

void FUN_1009aa4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10001038(param_2,param_3);
  return;
}



// Function: FUN_1009aa78 at 1009aa78
// Size: 268 bytes

int FUN_1009aa78(undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 uVar3;
  undefined4 uVar2;
  int local_3c;
  short local_18 [2];
  
  *param_3 = 0;
  iVar1 = FUN_100025c8(param_2,local_18);
  if (iVar1 == 0) {
    if ((local_18[0] != 3) && (local_18[0] != 4)) {
      iVar1 = -0x652;
    }
    if ((iVar1 == 0) && (iVar1 = FUN_100035e8(param_2,param_3), iVar1 == 0)) {
      uVar3 = FUN_100f1574(1);
      uVar2 = FUN_10001338(*param_3);
      *param_4 = uVar2;
      **(undefined1 **)(local_3c + -0x3c) = uVar3;
      iVar1 = FUN_10002b20();
      if ((iVar1 == 0) && (iVar1 = FUN_100022e0(param_2,*param_4), iVar1 != 0)) {
        FUN_100025b0(*param_4);
        *param_3 = 0;
        *param_4 = 0;
      }
    }
  }
  return iVar1;
}



// Function: FUN_1009ab84 at 1009ab84
// Size: 108 bytes

void FUN_1009ab84(int param_1,undefined4 param_2)

{
  FUN_10002880(param_2,(int)*(short *)(param_1 + 0xd6),(int)*(short *)(param_1 + 0xd4));
  FUN_10002898(param_2,(int)(short)(*(short *)(param_1 + 0xda) - *(short *)(param_1 + 0xd6)),
               (int)(short)(*(short *)(param_1 + 0xd8) - *(short *)(param_1 + 0xd4)));
  return;
}



// Function: FUN_1009abf0 at 1009abf0
// Size: 1372 bytes

/* WARNING: Removing unreachable block (ram,0x1009af70) */
/* WARNING: Removing unreachable block (ram,0x1009aea8) */
/* WARNING: Removing unreachable block (ram,0x1009afbc) */
/* WARNING: Removing unreachable block (ram,0x1009afc8) */
/* WARNING: Removing unreachable block (ram,0x1009afd4) */
/* WARNING: Removing unreachable block (ram,0x1009afe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009abf0(int param_1)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_18c [44];
  undefined1 auStack_160 [256];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_100988fc(param_1,1,auStack_18c);
  if ((*(int *)(param_1 + 0x20) != 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    sVar1 = *(short *)(param_1 + 0x88);
    if (*(short *)(param_1 + 0x82) == 0) {
      iVar5 = 10;
    }
    else {
      iVar5 = 0xb;
    }
    if (*(ushort *)(param_1 + 0x80) < 4) {
      return;
    }
    FUN_1009886c(param_1,1);
    if (*(int *)(param_1 + 0x20) != 0) {
      if ((int)sVar1 != (int)*(short *)(param_1 + 0x88)) {
        *(short *)(param_1 + 0x88) = sVar1;
        FUN_100009d8(auStack_160,(int)*(short *)(param_1 + 0x8c),(int)sVar1);
        FUN_10003168(*(undefined4 *)(param_1 + 0x20),auStack_160);
      }
      if (*(char *)(param_1 + 0x85) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 0;
        FUN_10003618(*(undefined4 *)(param_1 + 0x20),0xff);
      }
      if ((*(char *)(param_1 + 0x7e) == '\0') || (*(short *)(param_1 + 0x88) == 5)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      FUN_1009c850(*(undefined4 *)(param_1 + 0x20),uVar4);
      if ((*(char *)(param_1 + 0x7e) != '\0') && (*(short *)(param_1 + 0x88) != 5)) {
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x20);
      }
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (iVar5 != *(short *)(param_1 + 0x8a)) {
        *(short *)(param_1 + 0x8a) = (short)iVar5;
        FUN_100009d8(auStack_160,(int)*(short *)(param_1 + 0x8c),iVar5);
        FUN_10003168(*(undefined4 *)(param_1 + 0x1c),auStack_160);
      }
      if (*(char *)(param_1 + 0x86) != '\0') {
        *(undefined1 *)(param_1 + 0x86) = 0;
        FUN_10003618(*(undefined4 *)(param_1 + 0x1c),0xff);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  iVar5 = 0;
  do {
    FUN_10003618(*(undefined4 *)(param_1 + iVar5 * 4 + 0x24),0xff);
    if (((*(char *)(param_1 + 0x7e) == '\0') || (*(short *)(param_1 + 0x74) != iVar5)) ||
       (*(short *)(param_1 + 0x88) != 5)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    iVar6 = param_1 + iVar5 * 4;
    FUN_1009c850(*(undefined4 *)(iVar6 + 0x24),uVar4);
    if (((*(char *)(param_1 + 0x7e) != '\0') && (*(short *)(param_1 + 0x74) == iVar5)) &&
       (*(short *)(param_1 + 0x88) == 5)) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar6 + 0x24);
      FUN_10003618(*(undefined4 *)(param_1 + 0x20),0xff);
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 8);
  piVar7 = *(int **)(_DAT_38800000 + 0x84);
  if (piVar7 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x138));
    bVar2 = true;
    iVar5 = 0;
    do {
      if (((piVar7[iVar5 + 0x62] == 0) &&
          (iVar6 = _DAT_4bffe775 + iVar5 * 2, *(short *)(iVar6 + 0xd0) == 0)) &&
         (*(short *)(iVar6 + 0x138) != 0)) {
        bVar2 = false;
        break;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 8);
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined2 *)(param_1 + 0x74) = 8;
    }
  }
  if (((*(char *)(param_1 + 0x7e) != '\0') && (*(int *)(param_1 + 0x44) == 0)) &&
     (*(char *)(param_1 + 0x48) == '\0')) {
    if (piVar3 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x646f6e65);
    }
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x618),auStack_58);
      local_60 = 0xfffffffc;
      local_5c = 0xfffffffc;
      FUN_100e16b8(auStack_58,&local_60);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x350),auStack_58,1);
      local_48 = 4;
      local_44 = 4;
      local_40 = 4;
      local_3c = 4;
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x780),&local_48,1);
      uVar4 = FUN_100b2bb4(0);
      FUN_100b444c(uVar4,0x6f75746c,1);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x3f0),uVar4,0x7f,1);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738),0,1);
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    FUN_10003618(*(undefined4 *)(param_1 + 0x20),0xff);
  }
  FUN_10098b04(auStack_18c);
  return;
}



// Function: FUN_1009b310 at 1009b310
// Size: 160 bytes

void FUN_1009b310(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_10002598(*(undefined4 *)(param_1 + 0x60));
  iVar3 = **(int **)(param_1 + 0x60);
  uVar1 = FUN_10001c20(*(int **)(param_1 + 0x60));
  uVar4 = 0;
  if (uVar1 >> 3 != 0) {
    do {
      iVar2 = *(int *)(iVar3 + uVar4 * 8);
      if (iVar2 != 0) {
        FUN_10000960(iVar2);
      }
      uVar4 = (uint)(short)((short)uVar4 + 1);
      uVar1 = FUN_10001c20(*(undefined4 *)(param_1 + 0x60));
    } while (uVar4 < uVar1 >> 3);
  }
  FUN_10002ad8(*(undefined4 *)(param_1 + 0x60));
  return;
}



// Function: FUN_1009b3b0 at 1009b3b0
// Size: 760 bytes

int FUN_1009b3b0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  ushort *puVar16;
  int local_124;
  undefined4 local_100 [6];
  undefined4 local_e8;
  undefined1 local_e4 [42];
  undefined4 local_ba;
  undefined4 local_a6;
  undefined4 local_a2;
  uint local_9a;
  
  puVar15 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar3 = FUN_100f15e0(0);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  else {
    FUN_1009b310(param_1);
    FUN_10000ab0(*(undefined4 *)(param_1 + 0x60),0);
  }
  iVar4 = FUN_10002b20();
  if (iVar4 == 0) {
    puVar15 = (undefined4 *)FUN_100f15e0(0x200);
    iVar4 = FUN_10002b20();
    while (iVar4 == 0) {
      FUN_10002778(puVar15);
      FUN_10002598(puVar15);
      iVar4 = 0xad;
      puVar11 = local_e4;
      do {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
        bVar1 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar1);
      local_ba = *(undefined4 *)(param_1 + 100);
      local_a6 = *puVar15;
      local_a2 = FUN_10001c20(puVar15);
      iVar4 = FUN_10003090(local_e4,0);
      if (iVar4 != -0x657) {
        if (iVar4 == 0) {
          uVar14 = 0;
          puVar16 = (ushort *)*puVar15;
          if (local_9a != 0) goto LAB_1009b520;
        }
        break;
      }
      FUN_10002ad8(puVar15);
      iVar4 = FUN_10001c20(puVar15);
      FUN_10000ab0(puVar15,iVar4 + 0x200);
      iVar4 = FUN_10002b20();
    }
  }
  goto LAB_1009b67c;
  while( true ) {
    uVar3 = *(undefined4 *)(param_1 + 0x60);
    iVar4 = FUN_10001c20();
    FUN_10000ab0(uVar3,iVar4 + 8);
    iVar4 = FUN_10002b20();
    if (iVar4 != 0) {
      FUN_10000960(local_e8);
      break;
    }
    piVar7 = *(int **)(param_1 + 0x60);
    uVar8 = FUN_10001c20();
    iVar9 = *piVar7 + (uVar8 & 0xfffffff8);
    *(undefined4 *)(iVar9 + -8) = local_e8;
    *(undefined4 *)(iVar9 + -4) = uVar13;
    uVar14 = uVar14 + 1;
    puVar16 = (ushort *)((int)puVar16 + uVar10 + (uVar10 & 1) + iVar12 + iVar2);
    if (local_9a <= uVar14) break;
LAB_1009b520:
    iVar4 = *puVar16 + 2 + (*puVar16 + 2 & 1);
    uVar13 = *(undefined4 *)(iVar4 + (int)puVar16);
    uVar10 = *(ushort *)((int)puVar16 + iVar4 + 10) + 4;
    iVar2 = uVar10 + (uVar10 & 1) + iVar4 + 8;
    uVar10 = *(ushort *)((int)puVar16 + iVar2 + 2) + 4;
    iVar12 = uVar10 + (uVar10 & 1);
    uVar10 = *(int *)((int)puVar16 + iVar12 + iVar2) + 4;
    FUN_100021a8(puVar16,local_100);
    FUN_10003378(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(local_124 + -0x117c));
    uVar3 = FUN_10002c40(local_100[0]);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    uVar6 = FUN_10002bb0();
    FUN_10001a40(uVar5,uVar6,uVar3);
    iVar4 = FUN_10001f98(puVar16,&local_e8,*puVar16 + 2);
    if (iVar4 != 0) break;
  }
LAB_1009b67c:
  if (puVar15 != (undefined4 *)0x0) {
    FUN_10000960(puVar15);
  }
  return iVar4;
}



// Function: FUN_1009b6a8 at 1009b6a8
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1009b6a8(undefined4 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_34;
  
  iVar4 = (int)_DAT_9421ffc0;
  sVar1 = _DAT_9421ffc0 + 1;
  *(short *)(param_1 + 0x17) = _DAT_9421ffc0;
  _DAT_9421ffc0 = sVar1;
  iVar4 = FUN_10002f28(iVar4,&DAT_9001000c);
  param_1[0x16] = iVar4;
  if (iVar4 == 0) {
    iVar4 = FUN_10002b20();
  }
  else {
    FUN_10002088(param_1[0x16],0xffffffff);
    iVar4 = FUN_1009b3b0(param_1);
    if (iVar4 == 0) goto LAB_1009b750;
    FUN_10000f78((int)*(short *)(param_1 + 0x17));
    FUN_10002c28(param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_1009b750:
  iVar3 = 0;
  FUN_1009886c(param_1,0);
  uVar2 = FUN_100b1c84(*(undefined4 *)(local_34 + -0xe4c));
  iVar4 = FUN_10001068(*param_1,param_1 + 0x3f,uVar2,0,0xffff8001,(int)*(short *)(param_1 + 0x17),0,
                       0x3f9);
  param_1[0x14] = iVar4;
  if (iVar4 == 0) {
    iVar3 = FUN_10002b20();
  }
  return iVar3;
}



// Function: FUN_1009b7cc at 1009b7cc
// Size: 172 bytes

void FUN_1009b7cc(int param_1)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_1009886c(param_1,0);
  local_18 = *(undefined4 *)(param_1 + 0xf4);
  uStack_14 = *(undefined4 *)(param_1 + 0xf8);
  FUN_10003348(&local_18,2,2);
  local_20 = local_18;
  _local_1c = CONCAT22(30000,(short)uStack_14);
  FUN_100033f0(&local_18,0x1000,0x1000);
  uVar1 = FUN_10000480(&local_20,&local_18);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  FUN_1009b6a8(param_1);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return;
}



// Function: FUN_1009b878 at 1009b878
// Size: 208 bytes

undefined4 FUN_1009b878(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_10002700(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_10003588(*(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_10000f78((int)*(short *)(param_1 + 0x5c));
    FUN_10002c28(*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1009b310(param_1);
    FUN_10000960(*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return 0;
}



// Function: FUN_1009b948 at 1009b948
// Size: 384 bytes

undefined4 FUN_1009b948(int *param_1)

{
  int local_154;
  undefined1 auStack_130 [8];
  short local_128 [4];
  undefined1 auStack_120 [256];
  int local_20;
  int iStack_1c;
  
  if (*(char *)((int)param_1 + 0x5e) != '\0') {
    FUN_10001b18(local_128);
    FUN_100009d8(auStack_120,(int)*(short *)(param_1 + 0x23),0xf);
    FUN_10000270((int)*(short *)((int)param_1 + 0xe6),
                 (int)(short)(*(short *)(param_1 + 0x39) + local_128[0]));
    FUN_10000b88(auStack_120);
    FUN_100009d8(auStack_120,(int)*(short *)(param_1 + 0x23),0x10);
    FUN_10000270((int)*(short *)((int)param_1 + 0xee),
                 (int)(short)(*(short *)(param_1 + 0x3b) + local_128[0]));
    FUN_10000b88(auStack_120);
    local_20 = param_1[0x3d];
    iStack_1c = param_1[0x3e];
    FUN_100021d8(&local_20);
    if (((int)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
      FUN_10003930(auStack_130);
      FUN_100008b8(*(undefined4 *)(local_154 + -0x1188));
    }
    FUN_10003348(&local_20,1,1);
    FUN_10002c58(&local_20);
    FUN_1009886c(param_1,0);
    FUN_100027c0(&local_20,param_1[0x15]);
    FUN_10001fe0(param_1[0x14]);
    if (((int)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
      FUN_100008b8(auStack_130);
    }
  }
  return 0;
}



// Function: FUN_1009bac8 at 1009bac8
// Size: 108 bytes

undefined4 FUN_1009bac8(undefined4 param_1,ushort *param_2)

{
  if (*param_2 < 0x10) {
    return param_1;
  }
  return 0;
}



// Function: FUN_1009bed8 at 1009bed8
// Size: 160 bytes

undefined2 * FUN_1009bed8(undefined4 *param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 uVar4;
  undefined2 *puVar2;
  int iVar3;
  int local_3c;
  
  iVar1 = FUN_10001c20(param_1);
  uVar4 = FUN_100f1574(1);
  puVar2 = (undefined2 *)FUN_10001338(iVar1 + 4);
  **(undefined1 **)(local_3c + -0x3c) = uVar4;
  if ((puVar2 != (undefined2 *)0x0) && (iVar3 = FUN_10002b20(), iVar3 == 0)) {
    *puVar2 = param_2;
    puVar2[1] = (short)iVar1;
    FUN_10002340(*param_1,puVar2 + 2,iVar1);
  }
  return puVar2;
}



// Function: FUN_1009bf78 at 1009bf78
// Size: 376 bytes

int FUN_1009bf78(int param_1,undefined2 *param_2,int *param_3,undefined4 *param_4,undefined4 param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar4;
  undefined2 uVar3;
  int iVar5;
  int iVar6;
  int local_74;
  undefined4 local_50;
  undefined1 auStack_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined4 local_34;
  short local_30;
  int local_2e;
  
  FUN_10003738(auStack_4c);
  local_40 = *(undefined4 *)(param_1 + 0x4c);
  iVar5 = **(int **)(param_1 + 0x54);
  local_44 = param_5;
  uVar1 = FUN_10000768((int)*(short *)(iVar5 + 0x4a));
  iVar5 = FUN_1009bed8(*(undefined4 *)(iVar5 + 0x3e),uVar1);
  iVar2 = FUN_10002b20();
  iVar6 = 0;
  if (iVar2 == 0) {
    local_34 = param_4[1];
    local_30 = *(short *)(iVar5 + 2) + 4;
    local_38 = &local_50;
    local_2e = iVar5;
    FUN_10002598(*param_4);
    local_50 = *(undefined4 *)*param_4;
    uVar1 = FUN_10000a20(&local_38);
    uVar4 = FUN_100f1574(1);
    iVar6 = FUN_10001338(uVar1);
    **(undefined1 **)(local_74 + -0x3c) = uVar4;
    iVar2 = FUN_10002b20();
    if (iVar2 == 0) {
      uVar3 = FUN_10000a38(&local_38,iVar6);
      FUN_10002ad8(*param_4);
      *param_3 = iVar6;
      *param_2 = uVar3;
      iVar6 = 0;
      iVar2 = 0;
    }
  }
  if (iVar6 != 0) {
    FUN_100025b0(iVar6);
  }
  if (iVar5 != 0) {
    FUN_100025b0(iVar5);
  }
  return iVar2;
}



// Function: FUN_1009c0f0 at 1009c0f0
// Size: 344 bytes

int FUN_1009c0f0(int param_1,undefined2 *param_2,undefined4 *param_3)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if ((*(int *)(param_1 + 0x4c) == 0) ||
     (iVar1 = FUN_100000d8(*(int *)(param_1 + 0x4c),2), iVar1 == 0)) {
    iVar1 = -0x32;
LAB_1009c21c:
    if (iVar1 == 0) goto LAB_1009c234;
  }
  else {
    sVar3 = FUN_10001c50(*(undefined4 *)(param_1 + 0x50));
    iVar6 = (int)(short)(sVar3 + -1);
    if ((iVar6 < 0) || (iVar1 = FUN_10002bb0(*(undefined4 *)(param_1 + 0x58)), iVar1 <= iVar6)) {
      iVar1 = -0x32;
      goto LAB_1009c21c;
    }
    FUN_10002598(*(undefined4 *)(param_1 + 0x60));
    iVar4 = **(int **)(param_1 + 0x60);
    iVar5 = **(int **)(param_1 + 0x54);
    uVar2 = FUN_10000768((int)*(short *)(iVar5 + 0x4a));
    iVar5 = FUN_1009bed8(*(undefined4 *)(iVar5 + 0x3e),uVar2);
    iVar1 = FUN_10002b20();
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1009bf78(param_1,param_2,param_3,iVar4 + iVar6 * 8,iVar5), iVar1 == 0))
    goto LAB_1009c21c;
  }
  *param_2 = 0;
  *param_3 = 0;
LAB_1009c234:
  if (iVar5 != 0) {
    FUN_100025b0(iVar5);
  }
  FUN_10002ad8(*(undefined4 *)(param_1 + 0x60));
  return iVar1;
}



// Function: FUN_1009c26c at 1009c26c
// Size: 276 bytes

void FUN_1009c26c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)(param_1 + 0xf4);
  uStack_14 = *(undefined4 *)(param_1 + 0xf8);
  FUN_10003348(&local_18,2,2);
  local_1c = CONCAT22(30000,(short)uStack_14);
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    puVar1 = (undefined4 *)**(int **)(param_1 + 0x54);
    *puVar1 = local_18;
    puVar1[1] = local_1c;
    iVar2 = **(int **)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 8) = local_18;
    *(undefined4 *)(iVar2 + 0xc) = uStack_14;
    FUN_10002a90(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(char *)(param_1 + 0x5e) != '\0') {
      FUN_100002b8(*(int *)(param_1 + 0x50));
    }
    FUN_10003828(*(undefined4 *)(param_1 + 0x50),(int)*(short *)(param_1 + 0xfe),
                 (int)*(short *)(param_1 + 0xfc));
    FUN_100038e8(*(undefined4 *)(param_1 + 0x50),
                 (int)(short)(*(short *)(param_1 + 0x102) - *(short *)(param_1 + 0xfe)),
                 (int)(short)(*(short *)(param_1 + 0x100) - *(short *)(param_1 + 0xfc)));
    if (*(char *)(param_1 + 0x5e) != '\0') {
      FUN_10002388(*(undefined4 *)(param_1 + 0x50));
    }
  }
  return;
}



// Function: FUN_1009c380 at 1009c380
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009c380(int param_1,short param_2,char param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  short local_4;
  short local_2;
  
  iVar2 = (int)param_2;
  iVar4 = iVar2 * 6 + FUN_1011671c;
  uVar3 = *(undefined4 *)(param_1 + iVar2 * 8 + 0x9c);
  local_8._2_2_ = (short)uVar3;
  local_8._0_2_ = (short)((uint)uVar3 >> 0x10);
  _local_4 = CONCAT22(local_8._0_2_ + 0x20,local_8._2_2_ + 0x20);
  if (param_3 == '\0') {
    sVar1 = *(short *)(iVar4 + 2);
  }
  else {
    sVar1 = *(short *)(iVar4 + 4);
  }
  local_8 = uVar3;
  FUN_10000b40(&local_8,10,*(char *)(param_1 + iVar2 + 0x8f) == '\0',(int)sVar1);
  return;
}



// Function: FUN_1009c434 at 1009c434
// Size: 160 bytes

/* WARNING: Removing unreachable block (ram,0x1009c4f8) */

void FUN_1009c434(int param_1)

{
  undefined1 auStack_138 [40];
  undefined1 local_110;
  
  FUN_100988fc(param_1,1,auStack_138);
  if (3 < *(ushort *)(param_1 + 0x80)) {
    local_110 = 0;
    FUN_10098b04(auStack_138);
    return;
  }
  return;
}



// Function: FUN_1009c544 at 1009c544
// Size: 392 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1009c544(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_1011671c;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_100988fc(param_1,1,auStack_48);
    FUN_10000030();
    local_20 = *(undefined4 *)(param_1 + 0x114);
    uStack_1c = *(undefined4 *)(param_1 + 0x118);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_10001fe0(*(int *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_10001fe0(*(int *)(param_1 + 0x1c));
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10001fe0(*(int *)(param_1 + 0x20));
    }
    iVar6 = 0;
    do {
      iVar5 = *(int *)(param_1 + iVar6 * 4 + 0x24);
      if (iVar5 != 0) {
        FUN_10001fe0(iVar5);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < 8);
    iVar6 = 0;
    do {
      uVar3 = (uint)*(ushort *)(iVar6 * 6 + iVar1);
      uVar4 = (uint)*(ushort *)(param_1 + 0x80);
      uVar2 = FUN_1009c380(param_1,iVar6,
                           (uVar4 <= uVar3 && (uint)(uVar4 < uVar3) <= uVar3 - uVar4) -
                           (uVar4 < uVar3));
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < 4);
    if (*(ushort *)(param_1 + 0x80) < 4) {
      return uVar2;
    }
    FUN_1009ca0c(param_1);
    FUN_1009c434(param_1);
    FUN_10098b04(auStack_48);
  }
  return 0;
}



// Function: FUN_1009c744 at 1009c744
// Size: 268 bytes

int * FUN_1009c744(short *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10 [2];
  
  uVar3 = (int)param_1[3] - (int)param_1[1];
  uVar4 = (int)param_1[2] - (int)*param_1;
  FUN_10001098(local_10,(int)(short)(param_1[1] +
                                    (short)((int)uVar3 >> 1) +
                                    (ushort)((int)uVar3 < 0 && (uVar3 & 1) != 0)),
               (int)(short)(*param_1 +
                           (short)((int)uVar4 >> 1) + (ushort)((int)uVar4 < 0 && (uVar4 & 1) != 0)))
  ;
  FUN_10002fd0(local_10);
  piVar1 = (int *)FUN_10000e58();
  do {
    if (piVar1 == (int *)0x0) {
LAB_1009c82c:
      piVar1 = (int *)FUN_10001170();
      return piVar1;
    }
    iVar2 = FUN_100017b8(piVar1,0xd);
    if (((iVar2 != 0) && (iVar2 = FUN_100017b8(piVar1,0xf), iVar2 != 0)) &&
       (iVar2 = FUN_100016c8(local_10[0],*piVar1 + 0x22), iVar2 != 0)) {
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      goto LAB_1009c82c;
    }
    piVar1 = (int *)FUN_10000e88(piVar1);
  } while( true );
}



// Function: FUN_1009c850 at 1009c850
// Size: 444 bytes

void FUN_1009c850(int *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_84;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  uint uStack_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_10000660(&local_40);
  FUN_10000198(*(undefined4 *)(*param_1 + 4));
  FUN_10000000(auStack_58);
  FUN_10000030();
  local_2c = *(undefined4 *)(*param_1 + 8);
  local_28 = *(undefined4 *)(*param_1 + 0xc);
  FUN_10003348(&local_2c,0xfffffffc,0xfffffffc);
  FUN_100031b0(3,3);
  uVar3 = (int)local_28._0_2_ - (int)local_2c._0_2_;
  iVar4 = (int)(short)((short)((int)uVar3 >> 1) + (ushort)((int)uVar3 < 0 && (uVar3 & 1) != 0) + 3);
  if (param_2 == '\0') {
    FUN_10002130(0xb);
    FUN_10000738(&local_2c,iVar4,iVar4);
  }
  else {
    iVar2 = 0;
    if (*(char *)(*param_1 + 0x11) != '\0') {
      if (((int)*(short *)(*(int *)(*param_1 + 4) + 6) & 0xc000U) != 0) {
        FUN_10003930(auStack_60);
        FUN_10001ad0(&local_34);
        uStack_38 = uStack_30 & 0xffff0000;
        local_3c = local_34;
        uVar1 = FUN_1009c744(&local_2c);
        iVar2 = FUN_100029b8(uVar1,auStack_60,&local_3c);
      }
      if (iVar2 == 0) {
        FUN_10002118(*(int *)(local_84 + -0xb0) + 0xb2);
      }
      else {
        FUN_100021c0(&local_3c);
      }
    }
    FUN_10000738(&local_2c,iVar4,iVar4);
    if (iVar2 != 0) {
      FUN_100021c0(&local_34);
    }
  }
  FUN_100016f8(auStack_58);
  FUN_10000198(local_40);
  return;
}



// Function: FUN_1009ca0c at 1009ca0c
// Size: 132 bytes

void FUN_1009ca0c(int param_1)

{
  undefined1 auStack_30 [40];
  
  FUN_100988fc(param_1,1,auStack_30);
  if (DAT_28030000 == '\0') {
    FUN_10002c58(param_1 + 0x104);
  }
  else {
    FUN_10000b40(param_1 + 0x104,0,0,(int)*(short *)(param_1 + 0x76));
  }
  FUN_10098b04(auStack_30);
  return;
}



// Function: FUN_1009ca90 at 1009ca90
// Size: 76 bytes

void FUN_1009ca90(int param_1,int param_2)

{
  short sVar1;
  
  *(int *)(param_1 + 0x78) = param_2 + 6;
  sVar1 = *(short *)(param_1 + 0x76) + 1;
  *(short *)(param_1 + 0x76) = sVar1;
  if (-0x4162 < sVar1) {
    *(undefined2 *)(param_1 + 0x76) = 0xbe97;
  }
  FUN_1009ca0c();
  return;
}



// Function: FUN_1009cadc at 1009cadc
// Size: 116 bytes

void FUN_1009cadc(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x10);
  uVar1 = FUN_10001a88();
  if ((param_2 != DAT_28030000) || ((param_2 != '\0' && (*(uint *)(iVar2 + 0x78) <= uVar1)))) {
    DAT_28030000 = param_2;
    FUN_1009ca90(iVar2,uVar1);
  }
  return;
}



// Function: FUN_1009cb50 at 1009cb50
// Size: 116 bytes

void FUN_1009cb50(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x10);
  uVar1 = FUN_10001a88();
  if ((param_2 != DAT_28030000) || ((param_2 != '\0' && (*(uint *)(iVar2 + 0x78) <= uVar1)))) {
    DAT_28030000 = param_2;
    FUN_1009ca90(iVar2,uVar1);
  }
  return;
}



// Function: FUN_1009cbcc at 1009cbcc
// Size: 140 bytes

undefined4 * FUN_1009cbcc(undefined4 *param_1,undefined1 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa4), param_1 != (undefined4 *)0x0)) {
    FUN_100fa860(param_1);
    *param_1 = &DAT_609e0000;
    *(undefined1 *)(param_1 + 5) = param_2;
    *(undefined2 *)(param_1 + 0x25) = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return param_1;
}



// Function: FUN_1009cc58 at 1009cc58
// Size: 44 bytes

void FUN_1009cc58(void)

{
  FUN_1009cbcc(0,1);
  return;
}



// Function: FUN_1009cc84 at 1009cc84
// Size: 136 bytes

void FUN_1009cc84(int param_1,undefined4 param_2,short param_3)

{
  undefined4 local_98;
  undefined1 *local_94;
  undefined1 auStack_90 [132];
  
  if (*(char *)(param_1 + 0xa1) == '\0') {
    local_98 = param_2;
    local_94 = auStack_90;
    FUN_100022b0(&local_98,&local_94,(int)param_3);
    FUN_100fab28(param_1,auStack_90,(int)local_94 - (int)auStack_90);
  }
  else {
    FUN_100db26c(0);
  }
  return;
}



// Function: FUN_1009cd0c at 1009cd0c
// Size: 372 bytes

void FUN_1009cd0c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_100db26c(0);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    FUN_100fab28(param_1,param_1 + 0xa1,1);
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar1 = FUN_100fa934(param_1);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    FUN_100fab28(param_1,param_1 + 0x98,4);
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_3;
  if (param_3 + *(short *)(param_1 + 0x94) < 0x7f) {
    FUN_10002340(param_2,param_1 + *(short *)(param_1 + 0x94) + 0x15,param_3);
    *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x94) + (short)param_3;
  }
  else {
    iVar2 = 0x7f - *(short *)(param_1 + 0x94);
    FUN_10002340(param_2,param_1 + *(short *)(param_1 + 0x94) + 0x15,iVar2);
    FUN_1009cc84(param_1,param_1 + 0x15,0x7f);
    param_2 = iVar2 + param_2;
    for (param_3 = param_3 - iVar2; 0x7e < param_3; param_3 = param_3 + -0x7f) {
      FUN_1009cc84(param_1,param_2,0x7f);
      param_2 = param_2 + 0x7f;
    }
    if (param_3 != 0) {
      FUN_10002340(param_2,param_1 + 0x15,param_3);
    }
    *(short *)(param_1 + 0x94) = (short)param_3;
  }
  return;
}



// Function: FUN_1009ce80 at 1009ce80
// Size: 176 bytes

void FUN_1009ce80(int *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_1009cc84(param_1,(int)param_1 + 0x15,(int)*(short *)(param_1 + 0x25));
    *(undefined2 *)(param_1 + 0x25) = 0;
    FUN_100fa9fc(param_1,param_1[0x27]);
    FUN_100fab28(param_1,param_1 + 0x26,4);
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xb8) + (int)param_1);
    FUN_100fa9fc(param_1,uVar1);
  }
  FUN_100f930c(param_1);
  return;
}



// Function: FUN_1009cf30 at 1009cf30
// Size: 92 bytes

void FUN_1009cf30(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,(int)*(short *)(param_1 + 0x94));
    *(undefined2 *)(param_1 + 0x94) = 0;
  }
  FUN_100fa934(param_1);
  return;
}



// Function: FUN_1009cf8c at 1009cf8c
// Size: 120 bytes

void FUN_1009cf8c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,(int)*(short *)(param_1 + 0x94));
    *(undefined2 *)(param_1 + 0x94) = 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  FUN_100fa9fc(param_1,param_2);
  return;
}



// Function: FUN_1009d01c at 1009d01c
// Size: 92 bytes

void FUN_1009d01c(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,(int)*(short *)(param_1 + 0x94));
    *(undefined2 *)(param_1 + 0x94) = 0;
  }
  FUN_100fa998(param_1);
  return;
}



// Function: FUN_1009d078 at 1009d078
// Size: 100 bytes

void FUN_1009d078(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,(int)*(short *)(param_1 + 0x94));
    *(undefined2 *)(param_1 + 0x94) = 0;
  }
  FUN_100faa60(param_1,param_2);
  return;
}



// Function: FUN_1009d0dc at 1009d0dc
// Size: 368 bytes

void FUN_1009d0dc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_c0;
  int local_bc [4];
  undefined1 *local_ac;
  undefined1 auStack_a8 [132];
  
  piVar7 = local_bc;
  piVar6 = local_bc + 2;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    local_bc[3] = *(int *)(param_1 + 0x98);
    local_bc[2] = 0x7f;
    if (*(int *)(param_1 + 0x98) < 0x7f) {
      piVar6 = local_bc + 3;
    }
    iVar5 = *piVar6;
    iVar8 = (int)(short)iVar5;
    if (iVar8 == 0) {
      FUN_100db2f4(0xffffffd9);
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - iVar8;
    iVar1 = FUN_100fa934(param_1);
    iVar2 = FUN_100fa934(param_1);
    iVar3 = FUN_100fa998(param_1);
    local_bc[1] = 0x80;
    local_bc[0] = iVar3 - iVar2;
    if (0x80 < iVar3 - iVar2) {
      piVar7 = local_bc + 1;
    }
    FUN_100faac0(param_1,auStack_a8,*piVar7);
    sVar4 = 0x7f - (short)iVar5;
    *(short *)(param_1 + 0x94) = sVar4;
    local_c0 = param_1 + sVar4 + 0x15;
    local_ac = auStack_a8;
    FUN_10000450(&local_ac,&local_c0,iVar8);
    FUN_100fa9fc(param_1,local_ac + (iVar1 - (int)auStack_a8));
  }
  else {
    FUN_100d8c9c(0x3fc,0);
    FUN_100db158(0,0x820000);
  }
  return;
}



// Function: FUN_1009d24c at 1009d24c
// Size: 372 bytes

void FUN_1009d24c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_100db26c(0);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    FUN_100faac0(param_1,param_1 + 0xa1,1);
    FUN_100faac0(param_1,param_1 + 0x98,4);
    FUN_1009d0dc(param_1);
  }
  iVar2 = (int)(short)(0x7f - *(short *)(param_1 + 0x94));
  if (iVar2 < param_3) {
    if (iVar2 != 0) {
      FUN_10002340(param_1 + *(short *)(param_1 + 0x94) + 0x15,param_2,iVar2);
    }
    param_2 = param_2 + iVar2;
    for (param_3 = param_3 - iVar2; 0 < param_3; param_3 = param_3 - iVar2) {
      FUN_1009d0dc(param_1);
      local_20 = (int)(short)(0x7f - *(short *)(param_1 + 0x94));
      local_1c = param_3;
      piVar1 = &local_20;
      if (param_3 < local_20) {
        piVar1 = &local_1c;
      }
      iVar2 = *piVar1;
      FUN_10002340(param_1 + *(short *)(param_1 + 0x94) + 0x15,param_2);
      param_2 = iVar2 + param_2;
      *(short *)(param_1 + 0x94) = (short)iVar2 + *(short *)(param_1 + 0x94);
    }
  }
  else {
    FUN_10002340(param_1 + *(short *)(param_1 + 0x94) + 0x15,param_2,param_3);
    *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x94) + (short)param_3;
  }
  return;
}



// Function: FUN_1009d3c0 at 1009d3c0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3c0(void)

{
  FUN_100c1c8c(&DAT_48000054,_DAT_607f0000,0xa4,0x80a2fb48,0x90bf0004);
  return;
}



// Function: FUN_1009d3fc at 1009d3fc
// Size: 8 bytes

undefined4 FUN_1009d3fc(void)

{
  return 0x80e2fb4c;
}



// Function: FUN_1009d40c at 1009d40c
// Size: 120 bytes

undefined4 * FUN_1009d40c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = 0x60000000;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)((int)puVar1 + 0x41) = 0;
  }
  return puVar1;
}



// Function: FUN_1009d484 at 1009d484
// Size: 1612 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d484(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int local_8dc;
  undefined1 auStack_8b8 [256];
  undefined1 auStack_7b8 [28];
  undefined1 auStack_79c [60];
  undefined1 auStack_760 [80];
  undefined1 auStack_710 [256];
  undefined1 auStack_610 [256];
  undefined1 auStack_510 [20];
  undefined1 auStack_4fc [156];
  undefined4 local_460;
  undefined4 local_45c;
  undefined1 auStack_458 [256];
  undefined4 *local_358;
  char local_354;
  int *local_350;
  char local_34c;
  undefined1 auStack_348 [256];
  undefined1 auStack_248 [256];
  undefined1 auStack_148 [260];
  
  iVar6 = *(int *)(_DAT_57c407bd + 0x88);
  uVar7 = 0x20202020;
  iVar8 = -1;
  if ((iVar6 == 0) || (*(int *)(iVar6 + 0x148) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar5 = *(int *)(param_3 + 0x18);
  if (iVar5 == 0x63726564) {
    uVar7 = 0x6362616b;
    iVar8 = 0x411;
  }
  else if (iVar5 == 0x61646472) {
    uVar7 = 0x6162616b;
    iVar8 = 0x412;
  }
  else if (iVar5 == 0x7363656e) {
    uVar7 = 0x7362616b;
    iVar8 = 0x413;
    if (bVar1) {
      FUN_10117884((int)*(int **)(iVar6 + 0x148) +
                   (int)*(short *)(**(int **)(iVar6 + 0x148) + 0x2b8));
    }
  }
  else {
    FUN_100d5934(param_1,param_2,param_3);
  }
  uVar9 = 0;
  if (iVar8 != -1) {
    local_460 = 0xe;
    local_45c = 0xe;
    uVar9 = FUN_10078a30(param_1,uVar7,iVar8,&local_460,0);
  }
  if (*(int *)(param_3 + 0x18) == 0x63726564) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      FUN_100981f8(auStack_760,0x80);
      piVar3 = (int *)FUN_10098320(auStack_760,0x76657273,1);
      if (piVar3 != (int *)0x0) {
        local_350 = piVar3;
        local_34c = FUN_10000360(piVar3);
        FUN_10002598(local_350);
        FUN_100012d8(*piVar3 + 6,auStack_610,*(byte *)(*piVar3 + 6) + 1);
        FUN_10090e0c(uVar9,0x76657273,auStack_610,1);
        if (&stack0x00000000 != (undefined1 *)0x350) {
          FUN_10001b60(local_350,(int)local_34c);
        }
      }
      FUN_100ef510(piVar3);
      FUN_100f2214(4);
      puVar2 = (undefined4 *)FUN_1004130c();
      local_358 = puVar2;
      local_354 = FUN_10000360();
      FUN_10002598(local_358);
      FUN_100012d8((byte *)*puVar2,auStack_710,*(byte *)*puVar2 + 1);
      FUN_10090e0c(uVar9,0x6d656e75,auStack_710,1);
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (&stack0x00000000 != (undefined1 *)0x358) {
        FUN_10001b60(local_358,(int)local_354);
      }
      FUN_100982e8(auStack_760,2);
    }
  }
  else if (((*(int *)(param_3 + 0x18) == 0x7363656e) && (bVar1)) &&
          (*(char *)(param_1 + 0x41) == '\0')) {
    FUN_10117884((int)*(int **)(iVar6 + 0x148) + (int)*(short *)(**(int **)(iVar6 + 0x148) + 0x2b8))
    ;
    piVar3 = (int *)FUN_10052184(0x5343454e,10000,1);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0),auStack_7b8,0x54);
      FUN_100523a8(piVar3,1);
      FUN_100b19f4(auStack_8b8,auStack_7b8);
      FUN_10090e0c(uVar9,0x6e616d65,auStack_8b8,1);
    }
    iVar6 = FUN_10051f98(0x44415420,*(int *)(local_8dc + -0x1158) + 0x18,1);
    if (iVar6 == 0) {
      FUN_100b19f4(auStack_148,auStack_79c);
      FUN_10090e0c(uVar9,0x73747231,auStack_148,1);
    }
    else {
      FUN_10052490(iVar6,auStack_510,0xaa);
      FUN_100523a8(iVar6,1);
      iVar6 = 0;
      do {
        FUN_100b19f4(auStack_458,auStack_4fc + iVar6 * 0x1e);
        FUN_10090e0c(uVar9,iVar6 + 0x73747231,auStack_458,1);
        iVar6 = (int)(short)((short)iVar6 + 1);
      } while (iVar6 < 5);
      FUN_100b19f4(auStack_348,*(int *)(local_8dc + -0x1158) + 0x24);
      FUN_10090e0c(uVar9,0x62792020,auStack_348,1);
      FUN_100b19f4(auStack_248,auStack_510);
      FUN_10090e0c(uVar9,0x64657369,auStack_248,1);
    }
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  piVar10 = *(int **)(param_1 + 8);
  piVar3 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x63726564);
  if (piVar3 != (int *)0x0) {
    uVar4 = *(uint *)(param_3 + 0x18);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),
                 ('d' - ((0x63726564 < uVar4) + 'd')) +
                 (0x63726563 < uVar4 && (uint)(0x63726564 < uVar4) <= uVar4 + 0x9c8d9a9c),1);
  }
  piVar3 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x61646472);
  if (piVar3 != (int *)0x0) {
    uVar4 = *(uint *)(param_3 + 0x18);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),
                 ('r' - ((0x61646472 < uVar4) + 'r')) +
                 (0x61646471 < uVar4 && (uint)(0x61646472 < uVar4) <= uVar4 + 0x9e9b9b8e),1);
  }
  piVar3 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x7363656e);
  if (piVar3 != (int *)0x0) {
    if ((*(int *)(param_3 + 0x18) == 0x7363656e) || (!bVar1)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),uVar7,1);
  }
  return;
}



// Function: FUN_1009dae8 at 1009dae8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009dae8(void)

{
  FUN_100c1c8c(0x80e2fb4c,_DAT_90e60038,0x44,&DAT_57c807bd,&DAT_281f0000);
  return;
}



// Function: FUN_1009db24 at 1009db24
// Size: 8 bytes

undefined1 * FUN_1009db24(void)

{
  return &DAT_41820014;
}



// Function: FUN_1009db34 at 1009db34
// Size: 108 bytes

undefined4 * FUN_1009db34(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &DAT_4e800020;
  }
  return puVar1;
}



// Function: FUN_1009dba0 at 1009dba0
// Size: 128 bytes

void FUN_1009dba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x72657365) {
    FUN_100aeafc();
  }
  else if (iVar1 == 0x6c656674) {
    FUN_100aeb94();
  }
  else if (iVar1 == 0x72696768) {
    FUN_100aed40();
  }
  else {
    FUN_100d5934();
  }
  return;
}



// Function: FUN_1009dc20 at 1009dc20
// Size: 268 bytes

void FUN_1009dc20(undefined4 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d4a < param_2)) {
    if (param_2 == 0x63616e63) {
      FUN_1009e534(0x1ad);
    }
    else if (param_2 == 0x646f6e65) {
      FUN_1009e534(0x1ac);
    }
    else if (param_2 == 0x6c656674) {
      FUN_1009e534(0x1af);
    }
    else if (param_2 == 0x72657365) {
      FUN_1009e534(0x1ae);
    }
    else if (param_2 == 0x72696768) {
      FUN_1009e534(0x1b0);
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_100af0d4((int)(short)((short)param_2 + -0x6d30),0,0);
  }
  return;
}



// Function: FUN_1009dd2c at 1009dd2c
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009dd2c(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  undefined4 local_18;
  
  if ((param_2 < 0x61726d30) || (0x61726d4a < param_2)) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_18 = CONCAT22(_DAT_607c0006,_DAT_607c0004);
  *param_3 = local_18;
  return;
}



// Function: FUN_1009ddb0 at 1009ddb0
// Size: 8 bytes

undefined1 * FUN_1009ddb0(void)

{
  return &DAT_807f0008;
}



// Function: FUN_1009ddc0 at 1009ddc0
// Size: 148 bytes

undefined4 * FUN_1009ddc0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xbc), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)((int)param_1 + 0xaa) = 0;
    *(undefined2 *)(param_1 + 0x2b) = 0;
    *(undefined2 *)((int)param_1 + 0xae) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)((int)param_1 + 0xb2) = 0;
    *(undefined2 *)(param_1 + 0x2d) = 1;
    *(undefined2 *)((int)param_1 + 0xb6) = 0;
    *(undefined2 *)(param_1 + 0x2e) = 0;
    *param_1 = &DAT_38800000;
  }
  return param_1;
}



// Function: FUN_1009de54 at 1009de54
// Size: 40 bytes

void FUN_1009de54(void)

{
  FUN_1009ddc0(0);
  return;
}



// Function: FUN_1009de7c at 1009de7c
// Size: 820 bytes

void FUN_1009de7c(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,char param_6,char param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char cStack0000001f;
  int local_ec;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if (param_6 != '\0') {
    local_50 = *param_5;
    uStack_4c = param_5[1];
    cStack0000001f = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2d0),&local_50);
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
    FUN_100db26c(piVar1);
    if ((param_7 == '\0') &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x3a8) + (int)piVar1), iVar2 != 0)) {
      local_80 = 0xf;
      local_7c = 0xf;
      local_88 = 0xf;
      local_84 = 0xf;
      FUN_100e10b0(&local_a8,&local_50,&local_88);
      FUN_100e10f8(&local_b0,&local_50,&local_80);
      local_68 = local_b0;
      local_64 = local_ac;
      local_60 = local_a8;
      local_5c = local_a4;
      FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_68,auStack_a0);
      FUN_10002118(*(int *)(local_ec + -0xb0) + 0xb2);
      FUN_100b0578(auStack_a0);
      FUN_100021d8();
    }
    if (cStack0000001f == '\x01') {
      uVar4 = 0x61726d30;
      do {
        piVar3 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),uVar4);
        if (piVar3 != (int *)0x0) {
          local_58 = local_50;
          uStack_54 = uStack_4c;
          FUN_10117884((int)*(short *)(*piVar3 + 0x2d8) + (int)piVar3,&local_58);
          iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x538) + (int)piVar3,&local_58);
          if (iVar2 != 0) {
            FUN_100af268((int)(short)((short)uVar4 + -0x6d30));
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x61726d4b);
    }
    else if (cStack0000001f == '\x02') {
      FUN_100af52c();
    }
    if ((param_7 != '\0') &&
       (iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8)), iVar2 != 0)) {
      local_90 = 0xf;
      local_8c = 0xf;
      local_98 = 0xf;
      local_94 = 0xf;
      FUN_100e10b0(&local_c0,&local_50,&local_98);
      FUN_100e10f8(&local_c8,&local_50,&local_90);
      local_78 = local_c8;
      local_74 = local_c4;
      local_70 = local_c0;
      local_6c = local_bc;
      FUN_10000030();
      FUN_10002130(10);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_78,auStack_b8);
      FUN_10002118(*(int *)(local_ec + -0xb0) + 0xb2);
      FUN_100b0578(auStack_b8);
      FUN_100021d8();
    }
  }
  return;
}



// Function: FUN_1009e1b0 at 1009e1b0
// Size: 84 bytes

void FUN_1009e1b0(int param_1)

{
  FUN_100aeeec((int)(short)((short)*(undefined4 *)(param_1 + 0x18) + -0x6d30));
  return;
}



// Function: FUN_1009e2e0 at 1009e2e0
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009e2e0(void)

{
  FUN_100c1c8c(&DAT_41820014,_DAT_4bfff36d,0x40,0x60000000,&DAT_281f0000);
  FUN_100c1c8c(&DAT_807f0008,_DAT_281f0000,0xbc,&DAT_41820018,&DAT_57c407ff);
  return;
}



// Function: FUN_1009e33c at 1009e33c
// Size: 504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009e33c(short param_1,short param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_110 [260];
  
  iVar6 = (int)param_3;
  iVar5 = (int)param_2;
  iVar1 = (int)param_1;
  if ((iVar1 < 1) || (4 < iVar1)) {
    if ((iVar1 < 5) || (0x18 < iVar1)) {
      if ((iVar1 < 0x21) || (0x24 < iVar1)) {
        if ((iVar1 < 0x25) || (0x2c < iVar1)) {
          if ((0x2c < iVar1) && (iVar1 < 0x48)) {
            FUN_100af0d4((int)(short)(param_1 + -0x2d),iVar5,iVar6);
          }
        }
        else {
          FUN_1005eec8((int)(short)(param_1 + -0x25),iVar5,iVar6);
        }
      }
      else {
        uVar2 = FUN_10075d94(_DAT_57c407bd,
                             (int)*(short *)(_DAT_57c407bd + (short)(param_1 + -0x21) * 2 + 0x8c));
        local_110[0] = 0;
        FUN_100f2758(uVar2,local_110);
        if (local_110[local_110[0]] == 0xffffffc9) {
          local_110[0] = local_110[0] - 1;
        }
        FUN_1000a9e4(iVar5,iVar6,0);
        uVar2 = FUN_100b1b08(local_110);
        FUN_1000c3fc(&DAT_41820010,uVar2);
      }
    }
    else {
      FUN_10049ebc(1,(int)(short)(param_1 + -5));
    }
  }
  else if (-1 < *(char *)(_DAT_4bffe775 + _DAT_63e30000 * 0x42 + iVar1 + 0x1619)) {
    iVar3 = _DAT_4bffe775 + _DAT_63e30000 * 0x42;
    iVar4 = iVar3 + iVar1;
    FUN_1000ba58((int)*(char *)(iVar3 + iVar1 + 0x1619),(int)*(char *)(iVar4 + 0x161d),
                 (int)*(char *)(iVar4 + 0x1621),(int)*(char *)(iVar4 + 0x1629),
                 (int)*(char *)(iVar4 + 0x1625),iVar5,iVar6);
  }
  return;
}



// Function: FUN_1009e534 at 1009e534
// Size: 332 bytes

void FUN_1009e534(short param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar4;
  undefined4 uVar3;
  short sVar5;
  short local_88 [2];
  ushort local_84;
  short local_82;
  undefined1 auStack_80 [50];
  undefined1 auStack_4e [54];
  
  iVar2 = FUN_10051f98(0x484c5020,&DAT_41820028,1);
  bVar1 = false;
  if (iVar2 != 0) {
    FUN_10052490(iVar2,local_88,2);
    local_88[0] = FUN_100525a0((int)local_88[0]);
    uVar4 = FUN_100525a0((int)param_1);
    sVar5 = 0;
    do {
      FUN_10052490(iVar2,&local_84,0x68);
      sVar5 = sVar5 + 1;
      if (local_84 == uVar4) {
        bVar1 = true;
        break;
      }
    } while (sVar5 < local_88[0]);
    FUN_100523a8(iVar2,1);
    if (bVar1) {
      if (local_82 == 0) {
        FUN_1000a9e4(0,0,0);
        FUN_1000c3fc(auStack_80,auStack_4e);
      }
      else {
        uVar3 = FUN_100525a0((int)local_82);
        local_82 = (short)uVar3;
        FUN_1009e33c(uVar3,0,0);
      }
    }
  }
  return;
}



// Function: FUN_1009e680 at 1009e680
// Size: 8 bytes

undefined4 FUN_1009e680(void)

{
  return 0x4bfdef89;
}



// Function: FUN_1009e690 at 1009e690
// Size: 128 bytes

undefined4 * FUN_1009e690(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x60000000;
  }
  return param_1;
}



// Function: FUN_1009e710 at 1009e710
// Size: 40 bytes

void FUN_1009e710(void)

{
  FUN_1009e690(0);
  return;
}



// Function: FUN_1009e738 at 1009e738
// Size: 168 bytes

void FUN_1009e738(undefined4 param_1,int param_2)

{
  if (param_2 == 0x6f636375) {
    FUN_1009e534(0x120);
  }
  else if (param_2 == 0x70696c6c) {
    FUN_1009e534(0x11e);
  }
  else if (param_2 == 0x72617a65) {
    FUN_1009e534(0x11f);
  }
  else if (param_2 == 0x7361636b) {
    FUN_1009e534(0x121);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_1009e7e0 at 1009e7e0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009e7e0(void)

{
  FUN_100c1c8c(0x4bfdef89,_DAT_80010048,0x40,&DAT_30210040,&DAT_281f0000);
  return;
}



// Function: FUN_1009e81c at 1009e81c
// Size: 516 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009e81c(short param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  
  iVar2 = (int)param_1;
  uVar3 = iVar2 + 1;
  if (*(short *)(_DAT_4bfde0cd + iVar2 * 2 + 0x2c) < 3) {
    *(undefined4 *)(iVar2 * 4 + _DAT_4bfde0cd + 0x244) =
         *(undefined4 *)(iVar2 * 8 + _DAT_4bfde0cd + 0x8c);
    *(undefined4 *)(iVar2 * 4 + _DAT_4bfde0cd + 0x254) =
         *(undefined4 *)(iVar2 * 8 + _DAT_4bfde0cd + 0x90);
  }
  else {
    uVar4 = *(undefined4 *)(_DAT_4bfde0cd + iVar2 * 8 + 0x8c);
    iVar1 = iVar2 * 4;
    local_28._0_2_ = (short)((uint)uVar4 >> 0x10);
    local_28._2_2_ = (short)uVar4;
    local_28 = CONCAT22(local_28._0_2_ + *(short *)(_DAT_4bfde0cd + iVar1 + 0xac) * -10,
                        local_28._2_2_ + *(short *)(_DAT_4bfde0cd + iVar1 + 0xae) * -10);
    FUN_10051e1c(&local_28,(int)&local_28 + 2,0x10,1);
    *(undefined1 *)(_DAT_7c7dd9d6 + local_28._2_2_ * 0x70 + (int)local_28._0_2_ + 0x34a) = 7;
    FUN_10051d60((int)local_28._0_2_,(int)local_28._2_2_);
    *(undefined4 *)(iVar1 + _DAT_4bfde0cd + 0x244) = local_28;
    uVar4 = *(undefined4 *)(iVar2 * 8 + _DAT_4bfde0cd + 0x90);
    iVar2 = _DAT_4bfde0cd +
            (short)((short)uVar3 +
                   (short)(((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0)) * -4) * 4
    ;
    local_28._0_2_ = (short)((uint)uVar4 >> 0x10);
    local_28._2_2_ = (short)uVar4;
    local_28 = CONCAT22(local_28._0_2_ + *(short *)(iVar2 + 0xac) * -10,
                        local_28._2_2_ + *(short *)(iVar2 + 0xae) * -10);
    FUN_10051e1c(&local_28,(int)&local_28 + 2,0x10,1);
    *(undefined1 *)(_DAT_7c7dd9d6 + local_28._2_2_ * 0x70 + (int)local_28._0_2_ + 0x34a) = 7;
    FUN_10051d60((int)local_28._0_2_,(int)local_28._2_2_);
    *(undefined4 *)(iVar1 + _DAT_4bfde0cd + 0x254) = local_28;
  }
  return;
}



// Function: FUN_1009ea20 at 1009ea20
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ea20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    uVar4 = iVar6 + 1;
    iVar5 = _DAT_4bfde0cd + iVar6 * 4;
    iVar1 = (short)((short)uVar4 +
                   (short)(((int)uVar4 >> 2) + (uint)((int)uVar4 < 0 && (uVar4 & 3) != 0)) * -4) * 4
    ;
    iVar2 = _DAT_4bfde0cd + iVar1;
    if ((float)((double)CONCAT44(0x43300000,0x38U - (int)*(short *)(iVar5 + 0x254) ^ 0x80000000) -
               _DAT_7c0803a6) /
        (float)((double)CONCAT44(0x43300000,0x4eU - (int)*(short *)(iVar5 + 0x256) ^ 0x80000000) -
               _DAT_7c0803a6) <
        (float)((double)CONCAT44(0x43300000,0x38U - (int)*(short *)(iVar2 + 0x244) ^ 0x80000000) -
               _DAT_7c0803a6) /
        (float)((double)CONCAT44(0x43300000,0x4eU - (int)*(short *)(iVar2 + 0x246) ^ 0x80000000) -
               _DAT_7c0803a6)) {
      uVar3 = *(undefined4 *)(iVar5 + 0x254);
      *(undefined4 *)(iVar5 + 0x254) = *(undefined4 *)(iVar2 + 0x244);
      *(undefined4 *)(iVar1 + _DAT_4bfde0cd + 0x244) = uVar3;
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 4);
  return;
}



// Function: FUN_1009eb70 at 1009eb70
// Size: 124 bytes

int FUN_1009eb70(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  short sStack0000001e;
  
  sStack00000018 = (short)((uint)param_1 >> 0x10);
  iVar3 = (int)sStack00000018;
  sStack0000001c = (short)((uint)param_2 >> 0x10);
  iVar4 = (int)sStack0000001c;
  _sStack00000018 = param_1;
  _sStack0000001c = param_2;
  sVar1 = FUN_10003768(iVar3 - iVar4);
  sVar2 = FUN_10003768((int)sStack0000001a - (int)sStack0000001e);
  iVar3 = (int)sVar2;
  if ((int)sVar2 < (int)sVar1) {
    iVar3 = (int)sVar1;
  }
  return iVar3;
}



// Function: FUN_1009ebec at 1009ebec
// Size: 780 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ebec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  short sStack0000001e;
  
  sStack0000001c = (short)((uint)param_2 >> 0x10);
  sStack00000018 = (short)((uint)param_1 >> 0x10);
  sStack0000001a = (short)param_1;
  sStack0000001e = (short)param_2;
  _sStack00000018 = param_1;
  _sStack0000001c = param_2;
  if (sStack0000001c == sStack00000018) {
    if (sStack0000001a == sStack0000001e) {
      FUN_1002269c(param_3,0,0);
    }
    else if (sStack0000001e < sStack0000001a) {
      FUN_1002269c(param_3,0,0xffffffff);
    }
    else if (sStack0000001a < sStack0000001e) {
      FUN_1002269c(param_3,0,1);
    }
  }
  else if (sStack0000001e == sStack0000001a) {
    if (sStack00000018 == sStack0000001c) {
      FUN_1002269c(param_3,0,0);
    }
    else if (sStack0000001c < sStack00000018) {
      FUN_1002269c(param_3,0xffffffff,0);
    }
    else if (sStack00000018 < sStack0000001c) {
      FUN_1002269c(param_3,1,0);
    }
  }
  else {
    dVar1 = (double)(float)((double)CONCAT44(0x43300000,
                                             (int)sStack0000001e - (int)sStack0000001a ^ 0x80000000)
                           - _DAT_7c0803a6) /
            (double)(float)((double)CONCAT44(0x43300000,
                                             (int)sStack0000001c - (int)sStack00000018 ^ 0x80000000)
                           - _DAT_7c0803a6);
    if ((int)sStack0000001c < (int)sStack00000018) {
      if (dVar1 < _DAT_7c0803ae) {
        if (dVar1 < _DAT_7c0803b6) {
          if (dVar1 < _DAT_7c0803be) {
            if (dVar1 < _DAT_7c0803c6) {
              FUN_1002269c(param_3,0,1);
            }
            else {
              FUN_1002269c(param_3,0xffffffff,1);
            }
          }
          else {
            FUN_1002269c(param_3,0xffffffff,0);
          }
        }
        else {
          FUN_1002269c(param_3,0xffffffff,0xffffffff);
        }
      }
      else {
        FUN_1002269c(param_3,0,0xffffffff);
      }
    }
    else if (dVar1 < _DAT_7c0803ae) {
      if (dVar1 < _DAT_7c0803b6) {
        if (dVar1 < _DAT_7c0803be) {
          if (dVar1 < _DAT_7c0803c6) {
            FUN_1002269c(param_3,0,0xffffffff);
          }
          else {
            FUN_1002269c(param_3,1,0xffffffff);
          }
        }
        else {
          FUN_1002269c(param_3,1,0);
        }
      }
      else {
        FUN_1002269c(param_3,1,1);
      }
    }
    else {
      FUN_1002269c(param_3,0,1);
    }
  }
  return;
}



// Function: FUN_1009eef8 at 1009eef8
// Size: 844 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009eef8(short param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar8;
  short local_40;
  short local_3e;
  short local_38;
  short local_36;
  short sVar7;
  
  iVar8 = (int)param_1;
  *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 0x50 + 0x104) =
       *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 4 + 0x244);
  *(undefined2 *)(_DAT_4bfde0cd + iVar8 * 2 + 0xfc) = 1;
  iVar4 = iVar8 * 2 + _DAT_4bfde0cd;
  iVar5 = 0;
  bVar2 = false;
  if (*(short *)(iVar4 + 0x2c) < 3) {
    *(short *)(iVar4 + 0xfc) = *(short *)(iVar4 + 0xfc) + 1;
    *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 0x50 + 0x108) =
         *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 4 + 0x254);
  }
  else {
    iVar4 = _DAT_4bfde0cd + iVar8 * 4;
    sVar7 = *(short *)(iVar4 + 0x244);
    if ((((sVar7 == 0) || (sVar1 = *(short *)(iVar4 + 0x246), sVar1 == 0)) || (sVar7 == 0x6f)) ||
       (sVar1 == 0x9b)) {
      iVar4 = _DAT_4bfde0cd + iVar8 * 4;
      sVar7 = *(short *)(iVar4 + 0x254);
      if (((sVar7 == 0) || (sVar1 = *(short *)(iVar4 + 0x256), sVar1 == 0)) ||
         ((sVar7 == 0x6f || (sVar1 == 0x9b)))) {
        iVar4 = _DAT_4bfde0cd + iVar8 * 2;
        *(short *)(iVar4 + 0xfc) = *(short *)(iVar4 + 0xfc) + 1;
        *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 0x50 + 0x108) =
             *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 4 + 0x254);
        return;
      }
    }
    iVar4 = _DAT_4bfde0cd + iVar8 * 4;
    iVar4 = FUN_1009eb70(*(undefined4 *)(iVar4 + 0x254),*(undefined4 *)(iVar4 + 0x244));
    sVar7 = (short)(iVar4 / (*(short *)(_DAT_4bfde0cd + iVar8 * 2 + 0x2c) + -1));
    uVar6 = (uint)sVar7;
    do {
      iVar4 = iVar8 * 0x50;
      FUN_1009ebec(*(undefined4 *)(_DAT_4bfde0cd + iVar4 + iVar5 * 4 + 0x104),
                   *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 4 + 0x254),&local_40);
      iVar3 = iVar4 + _DAT_4bfde0cd + iVar5 * 4;
      local_36 = *(short *)(iVar3 + 0x104) + local_40 * sVar7;
      local_38 = *(short *)(iVar3 + 0x106) + sVar7 * local_3e;
      FUN_10051e1c(&local_36,&local_38,
                   (int)(short)((short)((int)uVar6 >> 1) +
                               (ushort)((int)uVar6 < 0 && (uVar6 & 1) != 0)),0);
      sVar1 = (short)iVar5;
      iVar5 = (int)(short)(sVar1 + 1);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_38 * 0x70 + (int)local_36 + 0x34a) = 7;
      FUN_10051d60((int)local_36,(int)local_38);
      FUN_1002269c(iVar4 + _DAT_4bfde0cd + iVar5 * 4 + 0x104,(int)local_36,(int)local_38);
      iVar3 = _DAT_4bfde0cd + iVar8 * 2;
      *(short *)(iVar3 + 0xfc) = *(short *)(iVar3 + 0xfc) + 1;
      iVar4 = FUN_1009eb70(*(undefined4 *)(iVar8 * 4 + _DAT_4bfde0cd + 0x254),
                           *(undefined4 *)(iVar4 + _DAT_4bfde0cd + iVar5 * 4 + 0x104));
      if ((iVar4 < (int)uVar6) ||
         (iVar4 = iVar8 * 2 + _DAT_4bfde0cd,
         *(short *)(iVar4 + 0x2c) + -1 <= (int)*(short *)(iVar4 + 0xfc))) {
        bVar2 = true;
      }
    } while (!bVar2);
    *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 0x50 + (short)(sVar1 + 2) * 4 + 0x104) =
         *(undefined4 *)(_DAT_4bfde0cd + iVar8 * 4 + 0x254);
    iVar4 = _DAT_4bfde0cd + iVar8 * 2;
    *(short *)(iVar4 + 0xfc) = *(short *)(iVar4 + 0xfc) + 1;
  }
  return;
}



// Function: FUN_1009f244 at 1009f244
// Size: 96 bytes

undefined4 FUN_1009f244(undefined4 param_1)

{
  short sStack00000018;
  short sStack0000001a;
  
  sStack00000018 = (short)((uint)param_1 >> 0x10);
  if (sStack00000018 == 0) {
    return 3;
  }
  sStack0000001a = (short)param_1;
  if (sStack0000001a == 0) {
    return 0;
  }
  if (sStack00000018 == 0x6f) {
    return 1;
  }
  if (sStack0000001a == 0x9b) {
    return 2;
  }
  return 0xffffffff;
}



// Function: FUN_1009f2a4 at 1009f2a4
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f2a4(short *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = _DAT_4bfde0cd + iVar3 * 4;
    if ((*param_1 == *(short *)(iVar2 + 0xbc)) && (param_1[1] == *(short *)(iVar2 + 0xbe))) break;
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 8);
  uVar1 = FUN_1005f230(1,5,(int)(short)((short)iVar3 + -2));
  *(undefined4 *)param_1 =
       *(undefined4 *)
        (_DAT_4bfde0cd +
         (short)((short)uVar1 +
                (short)(((int)uVar1 >> 3) + (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8) * 4 +
        0xbc);
  return;
}



// Function: FUN_1009f350 at 1009f350
// Size: 468 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f350(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack00000018;
  short sStack0000001c;
  short sStack0000001e;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  uStack00000018 = param_1;
  _sStack0000001c = param_2;
  local_20 = param_1;
  FUN_1009ebec(param_1,param_2,&local_30);
  bVar1 = false;
  do {
    FUN_1009ebec(local_20,_sStack0000001c,&local_28);
    iVar2 = FUN_1009eb70(local_20,_sStack0000001c);
    if (iVar2 < 3) {
      local_20 = CONCAT22(local_20._0_2_ + local_28._0_2_,local_20._2_2_ + local_28._2_2_);
    }
    else {
      iVar2 = FUN_1005f230(1,3,0);
      if (iVar2 == 1) {
        local_20 = CONCAT22(local_20._0_2_ + local_28._0_2_,local_20._2_2_ + local_28._2_2_);
      }
      else if (iVar2 == 2) {
        local_20 = CONCAT22(local_20._0_2_ + local_30._0_2_,local_20._2_2_ + local_30._2_2_);
      }
      else if (iVar2 == 3) {
        FUN_1009f2a4(&local_28);
        local_20 = CONCAT22(local_20._0_2_ + local_28._0_2_,local_20._2_2_ + local_28._2_2_);
        local_30 = local_28;
      }
    }
    FUN_10051dc8(&local_20,(int)&local_20 + 2);
    *(undefined1 *)(_DAT_7c7dd9d6 + local_20._2_2_ * 0x70 + (int)local_20._0_2_ + 0x34a) = 7;
    FUN_10051d60((int)local_20._0_2_,(int)local_20._2_2_);
    if ((local_20._0_2_ == sStack0000001c) && (local_20._2_2_ == sStack0000001e)) {
      bVar1 = true;
    }
  } while (!bVar1);
  return;
}



// Function: FUN_1009f524 at 1009f524
// Size: 832 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f524(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack00000018;
  short sStack0000001c;
  short sStack0000001e;
  int local_64;
  short local_40;
  short sStack_3e;
  short local_38;
  short local_36;
  undefined4 local_30;
  undefined2 local_28;
  
  uStack00000018 = param_1;
  _sStack0000001c = param_2;
  iVar4 = FUN_1009f244(param_1);
  iVar5 = FUN_1009f244(_sStack0000001c);
  if (iVar4 == iVar5) {
    FUN_1009ebec(uStack00000018,_sStack0000001c,&local_38);
    local_30 = uStack00000018;
    uVar3 = local_30;
    local_30._0_2_ = (short)((uint)uStack00000018 >> 0x10);
    bVar1 = local_30._0_2_ == sStack0000001c;
    local_30 = uVar3;
    if (bVar1) {
      local_30._2_2_ = (short)uStack00000018;
      bVar1 = local_30._2_2_ == sStack0000001e;
      if (bVar1) {
        return;
      }
    }
    do {
      do {
        local_30 = CONCAT22(local_30._0_2_ + local_38,local_30._2_2_ + local_36);
        FUN_10051dc8(&local_30,(int)&local_30 + 2);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_30._2_2_ * 0x70 + (int)local_30._0_2_ + 0x34a) = 7;
        FUN_10051d60((int)local_30._0_2_,(int)local_30._2_2_);
      } while (local_30._0_2_ != sStack0000001c);
    } while (local_30._2_2_ != sStack0000001e);
  }
  else {
    iVar6 = FUN_10003768(iVar4 - iVar5);
    if (iVar6 == 2) {
      FUN_1009f350(uStack00000018,_sStack0000001c);
    }
    else {
      iVar6 = FUN_10003768(iVar4 - iVar5);
      if (iVar6 == 3) {
        iVar5 = 0;
      }
      else {
        iVar6 = FUN_10003768(iVar4 - iVar5);
        if ((iVar6 == 1) && (local_28 = (undefined2)iVar4, iVar5 < iVar4)) {
          iVar5 = iVar4;
        }
      }
      uVar7 = *(undefined4 *)(**(int **)(local_64 + -0x2ac) + iVar5 * 4 + 0x7c);
      FUN_1009ebec(uStack00000018,uVar7,&local_38);
      local_30 = uStack00000018;
      uVar3 = local_30;
      local_30._0_2_ = (short)((uint)uStack00000018 >> 0x10);
      local_40 = (short)((uint)uVar7 >> 0x10);
      bVar1 = local_30._0_2_ != local_40;
      sStack_3e = (short)uVar7;
      local_30 = uVar3;
      if (bVar1) goto LAB_1009f704;
      local_30._2_2_ = (short)uStack00000018;
      uVar3 = uStack00000018;
      sVar2 = local_30._2_2_;
      while (local_30 = uVar3, sVar2 != sStack_3e) {
LAB_1009f704:
        do {
          local_30 = CONCAT22(local_30._0_2_ + local_38,local_30._2_2_ + local_36);
          FUN_10051dc8(&local_30,(int)&local_30 + 2);
          *(undefined1 *)(_DAT_7c7dd9d6 + local_30._2_2_ * 0x70 + (int)local_30._0_2_ + 0x34a) = 7;
          FUN_10051d60((int)local_30._0_2_,(int)local_30._2_2_);
        } while (local_30._0_2_ != local_40);
        uVar3 = local_30;
        sVar2 = local_30._2_2_;
      }
      FUN_1009ebec(_sStack0000001c,uVar7,&local_38);
      local_30 = _sStack0000001c;
      uVar3 = local_30;
      local_30._0_2_ = (short)((uint)_sStack0000001c >> 0x10);
      bVar1 = local_30._0_2_ != local_40;
      local_30 = uVar3;
      if (bVar1) goto LAB_1009f7c8;
      local_30._2_2_ = (short)_sStack0000001c;
      uVar3 = _sStack0000001c;
      sVar2 = local_30._2_2_;
      while (local_30 = uVar3, sVar2 != sStack_3e) {
LAB_1009f7c8:
        do {
          local_30 = CONCAT22(local_30._0_2_ + local_38,local_30._2_2_ + local_36);
          FUN_10051dc8(&local_30,(int)&local_30 + 2);
          *(undefined1 *)(_DAT_7c7dd9d6 + local_30._2_2_ * 0x70 + (int)local_30._0_2_ + 0x34a) = 7;
          FUN_10051d60((int)local_30._0_2_,(int)local_30._2_2_);
        } while (local_30._0_2_ != local_40);
        uVar3 = local_30;
        sVar2 = local_30._2_2_;
      }
    }
  }
  return;
}



// Function: FUN_1009f864 at 1009f864
// Size: 620 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f864(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  do {
    iVar7 = 0;
    if (0 < *(short *)(_DAT_4bfde0cd + iVar6 * 2 + 0xfc) + -1) {
      do {
        iVar3 = _DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4;
        sVar1 = *(short *)(iVar3 + 0x104);
        if ((((sVar1 == 0) || (sVar2 = *(short *)(iVar3 + 0x106), sVar2 == 0)) || (sVar1 == 0x6f))
           || (sVar2 == 0x9b)) {
          iVar3 = _DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4;
          sVar1 = *(short *)(iVar3 + 0x108);
          if (((sVar1 != 0) && (sVar2 = *(short *)(iVar3 + 0x10a), sVar2 != 0)) &&
             ((sVar1 != 0x6f && (sVar2 != 0x9b)))) goto LAB_1009f954;
          iVar3 = _DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4;
          FUN_1009f524(*(undefined4 *)(iVar3 + 0x104),*(undefined4 *)(iVar3 + 0x108));
        }
        else {
LAB_1009f954:
          iVar3 = _DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4;
          FUN_1009f350(*(undefined4 *)(iVar3 + 0x104),*(undefined4 *)(iVar3 + 0x108));
        }
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < *(short *)(_DAT_4bfde0cd + iVar6 * 2 + 0xfc) + -1);
    }
    uVar5 = iVar6 + 1;
    iVar4 = (int)(short)((short)uVar5 +
                        (short)(((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0)) * -4
                        );
    iVar3 = _DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4;
    sVar1 = *(short *)(iVar3 + 0x104);
    if (((sVar1 == 0) || (sVar2 = *(short *)(iVar3 + 0x106), sVar2 == 0)) ||
       ((sVar1 == 0x6f || (sVar2 == 0x9b)))) {
      iVar3 = _DAT_4bfde0cd + iVar4 * 0x50;
      sVar1 = *(short *)(iVar3 + 0x104);
      if ((((sVar1 != 0) && (sVar2 = *(short *)(iVar3 + 0x106), sVar2 != 0)) && (sVar1 != 0x6f)) &&
         (sVar2 != 0x9b)) goto LAB_1009fa78;
      FUN_1009f524(*(undefined4 *)(_DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4 + 0x104),
                   *(undefined4 *)(_DAT_4bfde0cd + iVar4 * 0x50 + 0x104));
    }
    else {
LAB_1009fa78:
      FUN_1009f350(*(undefined4 *)(_DAT_4bfde0cd + iVar6 * 0x50 + iVar7 * 4 + 0x104),
                   *(undefined4 *)(_DAT_4bfde0cd + iVar4 * 0x50 + 0x104));
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
    if (3 < iVar6) {
      return;
    }
  } while( true );
}



// Function: FUN_1009fad4 at 1009fad4
// Size: 388 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1009fad4(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = (int)param_2;
  if (*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar1 + 0x34a) == '\x03') {
    return 0;
  }
  if (*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar1 + 0x34a) == '\x01') {
    return 0;
  }
  if (((((iVar1 == 0) || (iVar2 == 0)) || (iVar1 == 0x6f)) || (iVar2 == 0x9b)) &&
     (*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar1 + 0x34a) == '\0')) {
    return 1;
  }
  if (*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar1 + 0x34b) == '\x02') {
    return 1;
  }
  if (*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar1 + 0x349) == '\x02') {
    return 1;
  }
  if (*(char *)(iVar2 * 0x70 + _DAT_7c7dd9d6 + iVar1 + 0x3ba) == '\x02') {
    return 1;
  }
  if (*(char *)(iVar2 * 0x70 + _DAT_7c7dd9d6 + iVar1 + 0x2da) == '\x02') {
    return 1;
  }
  return 0;
}



// Function: FUN_1009fc58 at 1009fc58
// Size: 700 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009fc58(void)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      iVar2 = _DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4;
      if (*(char *)(iVar2 + 0x34a) == '\a') {
        *(undefined1 *)(iVar2 + 0x34a) = 3;
      }
      else {
        *(undefined1 *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) = 0;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 0x9c);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 0x70);
  sVar3 = 0;
  do {
    iVar4 = 0;
    do {
      iVar5 = 0;
      do {
        iVar2 = FUN_1009fad4(iVar4,iVar5);
        if (iVar2 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) = 2;
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 0x9c);
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x70);
    iVar4 = 0;
    do {
      iVar5 = 0;
      do {
        iVar2 = FUN_1009fad4(iVar5,iVar4);
        if (iVar2 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar5 + 0x34a) = 2;
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 0x70);
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x9c);
    iVar4 = 0x6f;
    do {
      iVar5 = 0x9b;
      do {
        iVar2 = FUN_1009fad4(iVar4,iVar5);
        if (iVar2 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) = 2;
        }
        bVar1 = iVar5 != 0;
        iVar5 = (int)(short)((short)iVar5 + -1);
      } while (bVar1);
      bVar1 = iVar4 != 0;
      iVar4 = (int)(short)((short)iVar4 + -1);
    } while (bVar1);
    iVar4 = 0x9b;
    do {
      iVar5 = 0x6f;
      do {
        iVar2 = FUN_1009fad4(iVar5,iVar4);
        if (iVar2 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar5 + 0x34a) = 2;
        }
        bVar1 = iVar5 != 0;
        iVar5 = (int)(short)((short)iVar5 + -1);
      } while (bVar1);
      bVar1 = iVar4 != 0;
      iVar4 = (int)(short)((short)iVar4 + -1);
    } while (bVar1);
    sVar3 = sVar3 + 1;
  } while (sVar3 < 2);
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      iVar2 = _DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4;
      if (*(char *)(iVar2 + 0x34a) == '\x02') {
        *(undefined1 *)(iVar2 + 0x34a) = 2;
      }
      else {
        *(undefined1 *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) = 7;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 0x9c);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 0x70);
  FUN_10051d64();
  return;
}



// Function: FUN_1009ff14 at 1009ff14
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1009ff14(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = _DAT_4bfde0cd + iVar1 * 4;
    iVar3 = (int)param_1 + (int)*(short *)(iVar2 + 0xbc);
    if ((((-1 < iVar3) && (iVar2 = (int)param_2 + (int)*(short *)(iVar2 + 0xbe), -1 < iVar2)) &&
        (iVar3 < 0x70)) &&
       ((iVar2 < 0x9c && (*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar3 + 0x34a) == '\a')))) break;
    iVar1 = (int)(short)((short)iVar1 + 1);
    if (7 < iVar1) {
      return 0;
    }
  }
  return 1;
}



// Function: FUN_1009ffa4 at 1009ffa4
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1009ffa4(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = _DAT_4bfde0cd + iVar1 * 4;
    iVar3 = (int)param_1 + (int)*(short *)(iVar2 + 0xbc);
    if ((((-1 < iVar3) && (iVar2 = (int)param_2 + (int)*(short *)(iVar2 + 0xbe), -1 < iVar2)) &&
        (iVar3 < 0x70)) &&
       ((iVar2 < 0x9c &&
        ((int)*(char *)(_DAT_7c7dd9d6 + iVar2 * 0x70 + iVar3 + 0x34a) == (int)param_3)))) break;
    iVar1 = (int)(short)((short)iVar1 + 1);
    if (7 < iVar1) {
      return 0;
    }
  }
  return 1;
}



// Function: FUN_100a0038 at 100a0038
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0038(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      if (*(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) == '\x02') {
        iVar1 = FUN_1009ff14(iVar2,iVar3);
        if (iVar1 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) = 3;
          FUN_10051d60(iVar2,iVar3);
        }
        iVar1 = FUN_1009ffa4(iVar2,iVar3,5);
        if (iVar1 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) = 3;
          FUN_10051d60(iVar2,iVar3);
        }
        iVar1 = FUN_1009ffa4(iVar2,iVar3,6);
        if (iVar1 != 0) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) = 3;
          FUN_10051d60(iVar2,iVar3);
        }
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0x9c);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x70);
  return;
}



// Function: FUN_100a018c at 100a018c
// Size: 92 bytes

void FUN_100a018c(short param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < param_1) {
    do {
      FUN_100a8d88(1,0,1);
      sVar1 = sVar1 + 1;
    } while (sVar1 < param_1);
  }
  FUN_100a9628();
  return;
}



// Function: FUN_100a01e8 at 100a01e8
// Size: 172 bytes

void FUN_100a01e8(void)

{
  int iVar1;
  
  FUN_1009e81c(0);
  FUN_1009e81c(1);
  FUN_1009e81c(2);
  FUN_1009e81c(3);
  FUN_1009ea20();
  FUN_1009eef8(0);
  FUN_1009eef8(1);
  FUN_1009eef8(2);
  FUN_1009eef8(3);
  FUN_1009f864();
  FUN_1009fc58();
  FUN_100a0038();
  iVar1 = FUN_1005f230(1,100,0);
  if (iVar1 < 0x32) {
    FUN_1005f230(1,3,0xffffffff);
    FUN_100a018c();
  }
  FUN_100a0038();
  return;
}



// Function: FUN_100a029c at 100a029c
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100a029c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x160), param_1 != (undefined4 *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = _FUN_1011679c;
  }
  return param_1;
}



// Function: FUN_100a0304 at 100a0304
// Size: 40 bytes

void FUN_100a0304(void)

{
  FUN_100a029c(0);
  return;
}



// Function: FUN_100a032c at 100a032c
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a032c(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x88) == '\0') || (iVar1 = FUN_100efb60(), iVar1 != 0)) {
    if ((*(char *)(param_1 + 0x88) == '\0') && (*(int *)(param_1 + 4) == 0x834)) {
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  else {
    FUN_1007c618(*(undefined4 *)(param_1 + 0x18),(int)*(short *)(_DAT_817f0000 + 0x12),
                 (int)*(short *)(_DAT_817f0000 + 0x14));
  }
  return;
}



// Function: FUN_100a03b0 at 100a03b0
// Size: 360 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03b0(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 short param_6,short param_7)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  if (param_3 == 0x834) {
    *(undefined2 *)(param_1 + 0x15c) = 0;
    if (_DAT_817f0000 != (short *)0x0) {
      iVar2 = 7;
      do {
        if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
          *(int *)(param_1 + *(short *)(param_1 + 0x15c) * 4 + 0x13c) =
               *(int *)(&DAT_409e0034 + iVar2 * 4);
          puVar5 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
          iVar4 = param_1 + *(short *)(param_1 + 0x15c) * 0x16;
          uVar6 = puVar5[1];
          uVar7 = puVar5[2];
          uVar8 = puVar5[3];
          uVar9 = puVar5[4];
          uVar10 = puVar5[5];
          *(undefined4 *)(iVar4 + 0x8a) = *puVar5;
          *(undefined4 *)(iVar4 + 0x8e) = uVar6;
          *(undefined4 *)(iVar4 + 0x92) = uVar7;
          *(undefined4 *)(iVar4 + 0x96) = uVar8;
          *(undefined4 *)(iVar4 + 0x9a) = uVar9;
          *(uint *)(iVar4 + 0x9e) = uVar10 & 0xffff0000;
          *(short *)(param_1 + 0x15c) = *(short *)(param_1 + 0x15c) + 1;
        }
        bVar1 = iVar2 != 0;
        iVar2 = (int)(short)((short)iVar2 + -1);
      } while (bVar1);
    }
    FUN_10021524((int)param_6,(int)param_7,0);
  }
  uVar6 = FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x5f0),1);
  FUN_100c4548(param_1,param_3,param_2,0,1,param_2,param_4,uVar6);
  *(short *)(param_1 + 0x84) = param_6;
  *(short *)(param_1 + 0x86) = param_7;
  if (((int)param_6 == (int)*_DAT_817f0000) && ((int)param_7 == (int)_DAT_817f0000[1])) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x88) = uVar3;
  return;
}



// Function: FUN_100a0518 at 100a0518
// Size: 132 bytes

void FUN_100a0518(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined1 param_6,undefined1 param_7)

{
  FUN_100c4718(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((*(short *)(param_1 + 0x84) != (short)(param_5[1] / 0x28)) ||
     (*(short *)(param_1 + 0x86) != (short)(*param_5 / 0x28))) {
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  return;
}



// Function: FUN_100a059c at 100a059c
// Size: 64 bytes

void FUN_100a059c(int param_1)

{
  FUN_10021524((int)*(short *)(param_1 + 0x84),(int)*(short *)(param_1 + 0x86),0);
  return;
}



// Function: FUN_100a05dc at 100a05dc
// Size: 164 bytes

void FUN_100a05dc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x15c)) {
    do {
      iVar1 = param_1 + iVar3 * 0x16;
      puVar2 = *(undefined4 **)(param_1 + iVar3 * 4 + 0x13c);
      uVar4 = *(undefined4 *)(iVar1 + 0x8e);
      uVar5 = *(undefined4 *)(iVar1 + 0x92);
      uVar6 = *(undefined4 *)(iVar1 + 0x96);
      uVar7 = *(undefined4 *)(iVar1 + 0x9a);
      uVar8 = *(uint *)(iVar1 + 0x9e);
      *puVar2 = *(undefined4 *)(iVar1 + 0x8a);
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar2[4] = uVar7;
      puVar2[5] = uVar8 & 0xffff0000;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < *(short *)(param_1 + 0x15c));
  }
  if (*(short *)(param_1 + 0x15c) == 0) {
    FUN_1003fe5c();
  }
  else {
    FUN_10055c64(*(undefined4 *)(param_1 + 0x13c));
    FUN_1005cc8c();
  }
  return;
}



// Function: FUN_100a0690 at 100a0690
// Size: 108 bytes

undefined4 * FUN_100a0690(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x10c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_90010008;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0xd) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0x42) = 0;
  }
  return puVar1;
}



// Function: FUN_100a06fc at 100a06fc
// Size: 68 bytes

void FUN_100a06fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d8) == param_1)) {
    *(undefined4 *)(iVar1 + 0x1d8) = 0;
  }
  FUN_100c3e70();
  return;
}



// Function: FUN_100a0740 at 100a0740
// Size: 264 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0740(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  *(undefined2 *)(param_1 + 0x108) = 0;
  if (_DAT_817f0000 != 0) {
    iVar2 = 7;
    do {
      if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x108) * 4 + 0xe8) =
             *(int *)(&DAT_409e0034 + iVar2 * 4);
        puVar3 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
        iVar4 = param_1 + *(short *)(param_1 + 0x108) * 0x16;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        *(undefined4 *)(iVar4 + 0x38) = *puVar3;
        *(undefined4 *)(iVar4 + 0x3c) = uVar5;
        *(undefined4 *)(iVar4 + 0x40) = uVar6;
        *(undefined4 *)(iVar4 + 0x44) = uVar7;
        *(undefined4 *)(iVar4 + 0x48) = uVar8;
        *(uint *)(iVar4 + 0x4c) = uVar9 & 0xffff0000;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
      }
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  if (_DAT_41820018 == 0) {
    _DAT_41820018 = FUN_100f1640(0x8880);
  }
  FUN_10002340(_DAT_38800000,_DAT_41820018,0x8880);
  FUN_100419b0((int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),1);
  return;
}



// Function: FUN_100a0848 at 100a0848
// Size: 56 bytes

void FUN_100a0848(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  return;
}



// Function: FUN_100a0880 at 100a0880
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0880(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x108)) {
    do {
      iVar7 = param_1 + iVar6 * 0x16;
      puVar8 = *(undefined4 **)(param_1 + iVar6 * 4 + 0xe8);
      uVar1 = *(undefined4 *)(iVar7 + 0x3c);
      uVar2 = *(undefined4 *)(iVar7 + 0x40);
      uVar3 = *(undefined4 *)(iVar7 + 0x44);
      uVar4 = *(undefined4 *)(iVar7 + 0x48);
      uVar5 = *(uint *)(iVar7 + 0x4c);
      *puVar8 = *(undefined4 *)(iVar7 + 0x38);
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      puVar8[4] = uVar4;
      puVar8[5] = uVar5 & 0xffff0000;
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(param_1 + 0x108));
  }
  FUN_10002340(_DAT_41820018,_DAT_38800000,0x8880);
  FUN_10055c64(*(undefined4 *)(param_1 + 0xe8));
  FUN_1005cc8c();
  return;
}



// Function: FUN_100a0920 at 100a0920
// Size: 8 bytes

undefined1 * FUN_100a0920(void)

{
  return &DAT_9421ffc0;
}



// Function: FUN_100a0930 at 100a0930
// Size: 120 bytes

undefined4 * FUN_100a0930(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x118);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0xd) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0x42) = 0;
    *puVar1 = &DAT_41820014;
    *(undefined1 *)(puVar1 + 0x43) = 0;
    *(undefined2 *)((int)puVar1 + 0x10e) = 0;
  }
  return puVar1;
}



// Function: FUN_100a09a8 at 100a09a8
// Size: 352 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a09a8(int param_1,undefined4 param_2,undefined2 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  FUN_100db26c(_DAT_817f0000);
  FUN_100c3df8(param_1,0x57a,param_2,1,1,param_2);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined2 *)(param_1 + 0x34) = 0xffff;
  *(undefined2 *)(param_1 + 0x36) = 0xffff;
  *(undefined2 *)(param_1 + 0x10e) = param_3;
  *(undefined2 **)(param_1 + 0x110) = _DAT_817f0000;
  *(undefined2 *)(param_1 + 0x114) = *_DAT_817f0000;
  *(undefined2 *)(param_1 + 0x116) = _DAT_817f0000[1];
  *(undefined2 *)(param_1 + 0x108) = 0;
  if (_DAT_817f0000 != (undefined2 *)0x0) {
    iVar2 = 7;
    do {
      if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x108) * 4 + 0xe8) =
             *(int *)(&DAT_409e0034 + iVar2 * 4);
        puVar3 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
        iVar4 = param_1 + *(short *)(param_1 + 0x108) * 0x16;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        *(undefined4 *)(iVar4 + 0x38) = *puVar3;
        *(undefined4 *)(iVar4 + 0x3c) = uVar5;
        *(undefined4 *)(iVar4 + 0x40) = uVar6;
        *(undefined4 *)(iVar4 + 0x44) = uVar7;
        *(undefined4 *)(iVar4 + 0x48) = uVar8;
        *(uint *)(iVar4 + 0x4c) = uVar9 & 0xffff0000;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
      }
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  if (_DAT_41820018 == 0) {
    _DAT_41820018 = FUN_100f1640(0x8880);
  }
  FUN_10002340(_DAT_38800000,_DAT_41820018,0x8880);
  return;
}



// Function: FUN_100a0b08 at 100a0b08
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0b08(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  
  sVar1 = _DAT_817f0000[9];
  *(short *)(param_1 + 0x34) = sVar1;
  sVar2 = _DAT_817f0000[10];
  *(short *)(param_1 + 0x36) = sVar2;
  bVar3 = false;
  if ((_DAT_817f0000[9] == -1) || (_DAT_817f0000[10] == -1)) {
    *(short *)(param_1 + 0x34) = *_DAT_817f0000;
    *(short *)(param_1 + 0x36) = _DAT_817f0000[1];
  }
  FUN_10017170(param_1 + 0x34,param_1 + 0x36,(int)param_2);
  if (((_DAT_817f0000[9] == -1) || (_DAT_817f0000[10] == -1)) &&
     ((iVar4 = FUN_1003b4a4((int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),1),
      iVar4 == 10 || (iVar4 == 8)))) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    FUN_1002da54((int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36));
    *(undefined1 *)(param_1 + 0x1d) = 0;
    bVar3 = true;
  }
  if ((!bVar3) &&
     (((iVar4 = FUN_100419b0((int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),0),
       iVar4 == 1 || (iVar4 == 3)) || (iVar4 == 5)))) {
    _DAT_817f0000[9] = sVar1;
    _DAT_817f0000[10] = sVar2;
  }
  if ((*(char *)(param_1 + 0x1d) == '\0') ||
     ((*_DAT_817f0000 == *(short *)(param_1 + 0x114) &&
      (_DAT_817f0000[1] == *(short *)(param_1 + 0x116))))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x1d) = uVar5;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x228));
  }
  return;
}



// Function: FUN_100a0cf4 at 100a0cf4
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0cf4(int param_1)

{
  if ((*(short *)(_DAT_817f0000 + 0x12) != -1) && (*(short *)(_DAT_817f0000 + 0x14) != -1)) {
    FUN_100419b0((int)*(short *)(_DAT_817f0000 + 0x12),(int)*(short *)(_DAT_817f0000 + 0x14),0);
  }
  FUN_100a0b08(param_1,(int)*(short *)(param_1 + 0x10e));
  return;
}



// Function: FUN_100a0d60 at 100a0d60
// Size: 64 bytes

void FUN_100a0d60(int param_1)

{
  FUN_100419b0((int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),0);
  return;
}



// Function: FUN_100a0da0 at 100a0da0
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0da0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  *(undefined1 *)(param_1 + 0x10c) = 1;
  iVar6 = *(int *)(param_1 + 0x110);
  if ((*(short *)(iVar6 + 0x12) != -1) && (*(short *)(iVar6 + 0x14) != -1)) {
    *(short *)(param_1 + 0x34) = *(short *)(iVar6 + 0x12);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar6 + 0x14);
  }
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x108)) {
    do {
      iVar7 = param_1 + iVar6 * 0x16;
      iVar8 = param_1 + iVar6 * 4;
      puVar9 = *(undefined4 **)(iVar8 + 0xe8);
      uVar1 = *(undefined4 *)(iVar7 + 0x3c);
      uVar2 = *(undefined4 *)(iVar7 + 0x40);
      uVar3 = *(undefined4 *)(iVar7 + 0x44);
      uVar4 = *(undefined4 *)(iVar7 + 0x48);
      uVar5 = *(uint *)(iVar7 + 0x4c);
      *puVar9 = *(undefined4 *)(iVar7 + 0x38);
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      puVar9[4] = uVar4;
      puVar9[5] = uVar5 & 0xffff0000;
      *(undefined2 *)(*(int *)(iVar8 + 0xe8) + 0x12) = *(undefined2 *)(param_1 + 0x34);
      *(undefined2 *)(*(int *)(iVar8 + 0xe8) + 0x14) = *(undefined2 *)(param_1 + 0x36);
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(param_1 + 0x108));
  }
  FUN_10002340(_DAT_41820018,_DAT_38800000,0x8880);
  FUN_10055c64(*(undefined4 *)(param_1 + 0xe8));
  FUN_1005cc8c();
  return;
}



// Function: FUN_100a0e90 at 100a0e90
// Size: 116 bytes

undefined4 * FUN_100a0e90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x1e0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_607f0000;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0x41) = 0;
    *(undefined2 *)(puVar1 + 0x76) = 0;
    *(undefined2 *)((int)puVar1 + 0x1da) = 0xffff;
    *(undefined2 *)(puVar1 + 0x77) = 0xffff;
  }
  return puVar1;
}



// Function: FUN_100a0f04 at 100a0f04
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0f04(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  *(undefined2 *)(param_1 + 0x104) = 0;
  if (_DAT_817f0000 != 0) {
    iVar2 = 7;
    do {
      if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x104) * 4 + 0xe4) =
             *(int *)(&DAT_409e0034 + iVar2 * 4);
        puVar3 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
        iVar4 = param_1 + *(short *)(param_1 + 0x104) * 0x16;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        *(undefined4 *)(iVar4 + 0x34) = *puVar3;
        *(undefined4 *)(iVar4 + 0x38) = uVar5;
        *(undefined4 *)(iVar4 + 0x3c) = uVar6;
        *(undefined4 *)(iVar4 + 0x40) = uVar7;
        *(undefined4 *)(iVar4 + 0x44) = uVar8;
        *(uint *)(iVar4 + 0x48) = uVar9 & 0xffff0000;
        *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 1;
      }
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0x57d) {
    FUN_1003fd64();
  }
  else if (iVar2 == 0x57e) {
    FUN_1003fd90();
  }
  else if (iVar2 == 0x57f) {
    FUN_1003fdd8();
  }
  else if (iVar2 == 0x580) {
    FUN_1003fe5c();
  }
  else if (iVar2 == 0x834) {
    FUN_10021524((int)*(short *)(param_1 + 0x1da),(int)*(short *)(param_1 + 0x1dc),0);
  }
  return;
}



// Function: FUN_100a102c at 100a102c
// Size: 164 bytes

void FUN_100a102c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x1d8)) {
    do {
      iVar1 = param_1 + iVar3 * 0x16;
      puVar2 = *(undefined4 **)(param_1 + iVar3 * 4 + 0x1b8);
      uVar4 = *(undefined4 *)(iVar1 + 0x10a);
      uVar5 = *(undefined4 *)(iVar1 + 0x10e);
      uVar6 = *(undefined4 *)(iVar1 + 0x112);
      uVar7 = *(undefined4 *)(iVar1 + 0x116);
      uVar8 = *(uint *)(iVar1 + 0x11a);
      *puVar2 = *(undefined4 *)(iVar1 + 0x106);
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar2[4] = uVar7;
      puVar2[5] = uVar8 & 0xffff0000;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < *(short *)(param_1 + 0x1d8));
  }
  if (*(short *)(param_1 + 0x1d8) == 0) {
    FUN_1003fe5c();
  }
  else {
    FUN_10055c64(*(undefined4 *)(param_1 + 0x1b8));
    FUN_1005cc8c();
  }
  return;
}



// Function: FUN_100a10d0 at 100a10d0
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a10d0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  if (_DAT_817f0000 != 0) {
    iVar2 = 7;
    do {
      if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x1d8) * 4 + 0x1b8) =
             *(int *)(&DAT_409e0034 + iVar2 * 4);
        puVar3 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
        iVar4 = param_1 + *(short *)(param_1 + 0x1d8) * 0x16;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        *(undefined4 *)(iVar4 + 0x106) = *puVar3;
        *(undefined4 *)(iVar4 + 0x10a) = uVar5;
        *(undefined4 *)(iVar4 + 0x10e) = uVar6;
        *(undefined4 *)(iVar4 + 0x112) = uVar7;
        *(undefined4 *)(iVar4 + 0x116) = uVar8;
        *(uint *)(iVar4 + 0x11a) = uVar9 & 0xffff0000;
        *(short *)(param_1 + 0x1d8) = *(short *)(param_1 + 0x1d8) + 1;
      }
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x104)) {
    do {
      iVar4 = param_1 + iVar2 * 0x16;
      puVar3 = *(undefined4 **)(param_1 + iVar2 * 4 + 0xe4);
      uVar5 = *(undefined4 *)(iVar4 + 0x38);
      uVar6 = *(undefined4 *)(iVar4 + 0x3c);
      uVar7 = *(undefined4 *)(iVar4 + 0x40);
      uVar8 = *(undefined4 *)(iVar4 + 0x44);
      uVar9 = *(uint *)(iVar4 + 0x48);
      *puVar3 = *(undefined4 *)(iVar4 + 0x34);
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      puVar3[4] = uVar8;
      puVar3[5] = uVar9 & 0xffff0000;
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < *(short *)(param_1 + 0x104));
  }
  if (*(short *)(param_1 + 0x104) == 0) {
    FUN_1003fe5c();
  }
  else {
    FUN_10055c64(*(undefined4 *)(param_1 + 0xe4));
    FUN_1005cc8c();
  }
  return;
}



// Function: FUN_100a11f8 at 100a11f8
// Size: 104 bytes

undefined4 * FUN_100a11f8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x108);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_40820024;
    *(undefined2 *)(puVar1 + 0xc) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x32) = 0xffff;
    *(undefined2 *)(puVar1 + 0x41) = 0;
  }
  return puVar1;
}



// Function: FUN_100a1260 at 100a1260
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1260(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  *(undefined2 *)(param_1 + 0x104) = 0;
  if (_DAT_817f0000 != 0) {
    iVar2 = 7;
    do {
      if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x104) * 4 + 0xe4) =
             *(int *)(&DAT_409e0034 + iVar2 * 4);
        puVar3 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
        iVar4 = param_1 + *(short *)(param_1 + 0x104) * 0x16;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        *(undefined4 *)(iVar4 + 0x34) = *puVar3;
        *(undefined4 *)(iVar4 + 0x38) = uVar5;
        *(undefined4 *)(iVar4 + 0x3c) = uVar6;
        *(undefined4 *)(iVar4 + 0x40) = uVar7;
        *(undefined4 *)(iVar4 + 0x44) = uVar8;
        *(uint *)(iVar4 + 0x48) = uVar9 & 0xffff0000;
        *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 1;
      }
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(_DAT_817f0000 + 0x12);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(_DAT_817f0000 + 0x14);
  FUN_1003ffa8();
  return;
}



// Function: FUN_100a1330 at 100a1330
// Size: 36 bytes

void FUN_100a1330(void)

{
  FUN_1003ffa8();
  return;
}



// Function: FUN_100a1354 at 100a1354
// Size: 68 bytes

void FUN_100a1354(int param_1)

{
  FUN_100416f4((int)*(short *)(param_1 + 0x30),(int)*(short *)(param_1 + 0x32),0,1);
  return;
}



// Function: FUN_100a13a0 at 100a13a0
// Size: 112 bytes

undefined4 * FUN_100a13a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x10c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_41820014;
    *(undefined2 *)(puVar1 + 0xc) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x32) = 0xffff;
    *(undefined2 *)(puVar1 + 0xd) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x36) = 0xffff;
    *(undefined2 *)(puVar1 + 0x42) = 0;
  }
  return puVar1;
}



// Function: FUN_100a1410 at 100a1410
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1410(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  *(undefined2 *)(param_1 + 0x108) = 0;
  if (_DAT_817f0000 != 0) {
    iVar2 = 7;
    do {
      if (*(int *)(&DAT_409e0034 + iVar2 * 4) != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x108) * 4 + 0xe8) =
             *(int *)(&DAT_409e0034 + iVar2 * 4);
        puVar3 = *(undefined4 **)(&DAT_409e0034 + iVar2 * 4);
        iVar4 = param_1 + *(short *)(param_1 + 0x108) * 0x16;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        *(undefined4 *)(iVar4 + 0x38) = *puVar3;
        *(undefined4 *)(iVar4 + 0x3c) = uVar5;
        *(undefined4 *)(iVar4 + 0x40) = uVar6;
        *(undefined4 *)(iVar4 + 0x44) = uVar7;
        *(undefined4 *)(iVar4 + 0x48) = uVar8;
        *(uint *)(iVar4 + 0x4c) = uVar9 & 0xffff0000;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
      }
      bVar1 = iVar2 != 0;
      iVar2 = (int)(short)((short)iVar2 + -1);
    } while (bVar1);
  }
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(_DAT_817f0000 + 0x12);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(_DAT_817f0000 + 0x14);
  FUN_100416f4((int)*(short *)(param_1 + 0x30),(int)*(short *)(param_1 + 0x32),0,1);
  return;
}



// Function: FUN_100a14f4 at 100a14f4
// Size: 68 bytes

void FUN_100a14f4(int param_1)

{
  FUN_100416f4((int)*(short *)(param_1 + 0x30),(int)*(short *)(param_1 + 0x32),0,1);
  return;
}



// Function: FUN_100a1538 at 100a1538
// Size: 104 bytes

void FUN_100a1538(int param_1)

{
  if ((*(short *)(param_1 + 0x34) == -1) || (*(short *)(param_1 + 0x36) == -1)) {
    FUN_1003ffa8();
  }
  else {
    FUN_100416f4((int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),0,1);
  }
  return;
}



// Function: FUN_100a15a8 at 100a15a8
// Size: 92 bytes

undefined4 * FUN_100a15a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xb4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = 0x60000000;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
  }
  return puVar1;
}



// Function: FUN_100a1604 at 100a1604
// Size: 168 bytes

void FUN_100a1604(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 2;
    *(undefined2 *)(iVar1 + param_1 + 0x30) = *(undefined2 *)(&DAT_83bf0004 + iVar1);
    *(undefined2 *)(iVar1 + param_1 + 0x40) = *(undefined2 *)(&DAT_2c090000 + iVar1);
    *(undefined4 *)(param_1 + iVar2 * 4 + 0x50) = *(undefined4 *)(&DAT_819f0008 + iVar2 * 4);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 8);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0x836) {
    FUN_1005d0cc((int)*(short *)(param_1 + 0xb0));
  }
  else if (iVar2 == 0x578) {
    FUN_1005d240();
  }
  else if (iVar2 == 0x579) {
    FUN_1005d2dc();
  }
  return;
}



// Function: FUN_100a16ac at 100a16ac
// Size: 140 bytes

void FUN_100a16ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 2;
    *(undefined2 *)(&DAT_83bf0004 + iVar1) = *(undefined2 *)(param_1 + iVar1 + 0x70);
    *(undefined2 *)(&DAT_2c090000 + iVar1) = *(undefined2 *)(param_1 + iVar1 + 0x80);
    *(undefined4 *)(&DAT_819f0008 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4 + 0x90);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 8);
  FUN_1005c2d4(1);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}



// Function: FUN_100a1738 at 100a1738
// Size: 164 bytes

void FUN_100a1738(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 2;
    iVar4 = iVar1 + param_1;
    *(undefined2 *)(iVar4 + 0x70) = *(undefined2 *)(&DAT_83bf0004 + iVar1);
    *(undefined2 *)(iVar4 + 0x80) = *(undefined2 *)(&DAT_2c090000 + iVar1);
    iVar2 = iVar3 * 4;
    *(undefined4 *)(param_1 + iVar2 + 0x90) = *(undefined4 *)(&DAT_819f0008 + iVar2);
    *(undefined2 *)(&DAT_83bf0004 + iVar1) = *(undefined2 *)(iVar4 + 0x30);
    *(undefined2 *)(&DAT_2c090000 + iVar1) = *(undefined2 *)(iVar4 + 0x40);
    *(undefined4 *)(&DAT_819f0008 + iVar2) = *(undefined4 *)(param_1 + iVar2 + 0x50);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 8);
  FUN_1005c2d4(1);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}



// Function: FUN_100a17dc at 100a17dc
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a17dc(void)

{
  FUN_100c1c8c(&DAT_4e800020,_DAT_607f0000,0x160,&DAT_281f0000,&DAT_2c090000);
  FUN_100c1c8c(&DAT_bfc1fff8,_DAT_4082000c,0x10c,&DAT_63e30000,&DAT_41820070);
  FUN_100c1c8c(&DAT_9421ffc0,_DAT_48000034,0x118,&DAT_289e0000,&DAT_bfc1fff8);
  FUN_100c1c8c(&DAT_609e0000,_DAT_40860014,0x1e0,0x33df0008,&DAT_41820070);
  FUN_100c1c8c(&DAT_281f0000,_DAT_63c30000,0x108,0x4bfff215,&DAT_41820070);
  FUN_100c1c8c(&DAT_38600044,_DAT_60000000,0x10c,0x93df0004,&DAT_41820070);
  FUN_100c1c8c(0x4bfdef01,_DAT_8082fb50,0xb4,&DAT_909f0000,&DAT_41820070);
  return;
}



// Function: FUN_100a18e8 at 100a18e8
// Size: 8 bytes

undefined1 * FUN_100a18e8(void)

{
  return &DAT_80a2fb54;
}



// Function: FUN_100a18f8 at 100a18f8
// Size: 128 bytes

undefined4 * FUN_100a18f8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x48), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x90be0038;
  }
  return param_1;
}



// Function: FUN_100a1978 at 100a1978
// Size: 40 bytes

void FUN_100a1978(void)

{
  FUN_100a18f8(0);
  return;
}



// Function: FUN_100a19a0 at 100a19a0
// Size: 216 bytes

void FUN_100a19a0(int param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = 0;
  while ((piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                       iVar3 + 0x62757431), piVar1 == (int *)0x0 ||
         (*(char *)(piVar1 + 0x21) == '\0'))) {
    iVar3 = (int)(short)((short)iVar3 + 1);
    if (3 < iVar3) {
      return;
    }
  }
  if (3 < iVar3) {
    return;
  }
  *(short *)(param_1 + iVar3 * 2 + 0x40) = param_2 + -0x6761;
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_10117884((int)*(short *)(*piVar1 + 0x7a8) + (int)piVar1,(int)(short)(param_2 + -0x6761),1);
  return;
}



// Function: FUN_100a1a7c at 100a1a7c
// Size: 288 bytes

void FUN_100a1a7c(int param_1,uint param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_1 + 8);
  iVar5 = 0;
  do {
    uVar3 = iVar5 + 0x62757431;
    piVar2 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),uVar3);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x748) + (int)piVar2,
                   (param_2 <= uVar3 && (uint)(param_2 < uVar3) <= uVar3 - param_2) -
                   (param_2 < uVar3),1);
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 4);
  iVar5 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),param_2);
  if (iVar5 != 0) {
    sVar1 = *(short *)(iVar5 + 0xaa);
    piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x73686f72);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,sVar1 + 0x73686761);
    }
  }
  return;
}



// Function: FUN_100a1b9c at 100a1b9c
// Size: 140 bytes

void FUN_100a1b9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 0x18);
  if ((uVar1 < 0x73686f31) || (0x73686f4a < uVar1)) {
    uVar1 = *(uint *)(param_3 + 0x18);
    if ((uVar1 < 0x62757431) || (0x62757434 < uVar1)) {
      FUN_100d5934();
    }
    else {
      FUN_100a1a7c(param_1,uVar1);
    }
  }
  else {
    FUN_100a19a0(param_1,uVar1);
  }
  return;
}



// Function: FUN_100a1c28 at 100a1c28
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c28(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar4 = 0;
  do {
    iVar2 = iVar4 * 2 + param_1;
    *(undefined2 *)(iVar2 + 0x40) = *(undefined2 *)(_DAT_57c407bd + iVar4 * 2 + 0x8c);
    piVar1 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),iVar4 + 0x62757431);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x7a8) + (int)piVar1,(int)*(short *)(iVar2 + 0x40),1);
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 4);
  FUN_100a1a7c(param_1,0x62757431);
  return;
}



// Function: FUN_100a1ce8 at 100a1ce8
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ce8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_10075ee0(_DAT_57c407bd,iVar1,(int)*(short *)(param_1 + iVar1 * 2 + 0x40));
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 4);
  FUN_10075f80(_DAT_57c407bd);
  return;
}



// Function: FUN_100a1d50 at 100a1d50
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d50(void)

{
  FUN_100c1c8c(&DAT_80a2fb54,_DAT_63e30000,0x48,&DAT_80010048,&DAT_281f0000);
  return;
}



// Function: FUN_100a1d8c at 100a1d8c
// Size: 156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d8c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    do {
      cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar2 + 0x34a);
      if (((cVar1 == '\a') || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
        iVar3 = (int)(short)((short)iVar3 + 1);
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x9c);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x70);
  *(short *)(_DAT_4bfde0cd + 0x1f54) = (short)(iVar3 / 100) * *(short *)(_DAT_4bfde0cd + 0x3c);
  *(undefined2 *)(_DAT_4bfde0cd + 0x1f52) = 0;
  return;
}



// Function: FUN_100a1e28 at 100a1e28
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a1e28(void)

{
  return (int)(short)((((short)*(ushort *)(_DAT_4bfde0cd + 0x1f52) >> 0xf) -
                      ((short)*(ushort *)(_DAT_4bfde0cd + 0x1f54) >> 0xf)) +
                     (ushort)(*(ushort *)(_DAT_4bfde0cd + 0x1f54) <=
                             *(ushort *)(_DAT_4bfde0cd + 0x1f52)));
}



// Function: FUN_100a1e50 at 100a1e50
// Size: 1216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e50(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_68;
  short local_60 [8];
  int local_50;
  int local_4c;
  
  bVar1 = false;
  do {
    iVar2 = FUN_1005f230(1,0x70,0xffffffff);
    iVar3 = FUN_1005f230(1,0x9c,0xffffffff);
    if (*(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) == '\a') {
      bVar1 = true;
    }
  } while (!bVar1);
  iVar4 = FUN_1005f230(1,100,0);
  if (iVar4 < 0x41) {
    iVar4 = 0;
    do {
      sVar5 = FUN_1005f230(1,8,2);
      local_60[iVar4] = sVar5;
      iVar4 = (int)(short)((short)iVar4 + 1);
      sVar5 = 2;
    } while (iVar4 < 8);
    local_68 = 4;
  }
  else {
    iVar4 = 0;
    local_50 = iVar2;
    local_4c = iVar3;
    do {
      sVar5 = FUN_1005f230(1,10,5);
      local_60[iVar4] = sVar5;
      iVar4 = (int)(short)((short)iVar4 + 1);
      sVar5 = 4;
    } while (iVar4 < 8);
    local_68 = 6;
  }
  *(undefined1 *)(_DAT_7c7dd9d6 + (short)iVar3 * 0x70 + (int)(short)iVar2 + 0x34a) = 4;
  FUN_10051d60();
  *(short *)(_DAT_4bfde0cd + 0x1f52) = *(short *)(_DAT_4bfde0cd + 0x1f52) + 1;
  iVar4 = 0;
  do {
    uVar11 = 0;
    sVar9 = 0;
    local_88 = (short)iVar2;
    local_86 = (short)iVar3;
    if (0 < local_60[iVar4]) {
      do {
        iVar12 = _DAT_4bfde0cd + iVar4 * 4;
        local_88 = local_88 + *(short *)(iVar12 + 0xbc);
        local_86 = local_86 + *(short *)(iVar12 + 0xbe);
        FUN_10051dc8(&local_88,&local_86);
        iVar12 = _DAT_7c7dd9d6 + local_86 * 0x70 + (int)local_88;
        if (*(char *)(iVar12 + 0x34a) == '\a') {
          *(undefined1 *)(iVar12 + 0x34a) = 4;
          FUN_10051d60((int)local_88,(int)local_86);
          *(short *)(_DAT_4bfde0cd + 0x1f52) = *(short *)(_DAT_4bfde0cd + 0x1f52) + 1;
        }
        uVar7 = iVar4 + 2;
        uVar10 = iVar4 + 6;
        uVar11 = uVar11 + 1;
        iVar6 = (int)(short)(local_68 -
                            (((short)uVar11 >> 1) + (ushort)((short)uVar11 < 0 && (uVar11 & 1) != 0)
                            ));
        iVar12 = FUN_1005f230(1,iVar6,(int)(short)(sVar5 - (((short)uVar11 >> 2) +
                                                           (ushort)((short)uVar11 < 0 &&
                                                                   (uVar11 & 3) != 0))));
        iVar6 = FUN_1005f230(1,iVar6,(int)(short)(sVar5 - (short)uVar11 / 3));
        local_7e = local_88;
        local_80 = local_86;
        iVar13 = 0;
        if (0 < iVar12) {
          do {
            iVar8 = _DAT_4bfde0cd +
                    (short)((short)uVar7 +
                           ((short)((int)uVar7 >> 3) + (ushort)((int)uVar7 < 0 && (uVar7 & 7) != 0))
                           * -8) * 4;
            local_7e = local_7e + *(short *)(iVar8 + 0xbc);
            local_80 = local_80 + *(short *)(iVar8 + 0xbe);
            FUN_10051dc8(&local_7e,&local_80);
            iVar8 = _DAT_7c7dd9d6 + local_80 * 0x70 + (int)local_7e;
            if (*(char *)(iVar8 + 0x34a) == '\a') {
              *(undefined1 *)(iVar8 + 0x34a) = 4;
              FUN_10051d60((int)local_7e,(int)local_80);
              *(short *)(_DAT_4bfde0cd + 0x1f52) = *(short *)(_DAT_4bfde0cd + 0x1f52) + 1;
            }
            iVar13 = (int)(short)((short)iVar13 + 1);
          } while (iVar13 < iVar12);
        }
        local_82 = local_88;
        local_84 = local_86;
        iVar12 = 0;
        if (0 < iVar6) {
          do {
            iVar13 = _DAT_4bfde0cd +
                     (short)((short)uVar10 +
                            (short)(((int)uVar10 >> 3) +
                                   (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0)) * -8) * 4;
            local_82 = local_82 + *(short *)(iVar13 + 0xbc);
            local_84 = local_84 + *(short *)(iVar13 + 0xbe);
            FUN_10051dc8(&local_82,&local_84);
            iVar13 = _DAT_7c7dd9d6 + local_84 * 0x70 + (int)local_82;
            if (*(char *)(iVar13 + 0x34a) == '\a') {
              *(undefined1 *)(iVar13 + 0x34a) = 4;
              FUN_10051d60((int)local_82,(int)local_84);
              *(short *)(_DAT_4bfde0cd + 0x1f52) = *(short *)(_DAT_4bfde0cd + 0x1f52) + 1;
            }
            iVar12 = (int)(short)((short)iVar12 + 1);
          } while (iVar12 < iVar6);
        }
        sVar9 = sVar9 + 1;
      } while (sVar9 < local_60[iVar4]);
    }
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 8);
  return;
}



// Function: FUN_100a2310 at 100a2310
// Size: 1036 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2310(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      iVar4 = _DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6;
      if (*(char *)(iVar4 + 0x34a) == '\a') {
        bVar5 = *(char *)(iVar4 + 0x3ba) == '\x04';
        if (*(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x2da) == '\x04') {
          bVar5 = bVar5 + 1;
        }
        if (*(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34b) == '\x04') {
          bVar5 = bVar5 + 1;
        }
        if (*(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x349) == '\x04') {
          bVar5 = bVar5 + 1;
        }
        if (2 < bVar5) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34a) = 4;
          *(short *)(_DAT_4bfde0cd + 0x1f52) = *(short *)(_DAT_4bfde0cd + 0x1f52) + 1;
          FUN_10051d60(iVar6,iVar7);
        }
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 0x9c);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x70);
  iVar6 = 1;
  do {
    iVar7 = 1;
    do {
      iVar4 = _DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6;
      sVar2 = (short)iVar7;
      sVar3 = (short)iVar6;
      if (*(char *)(iVar4 + 0x34a) == '\x04') {
        if ((((*(char *)(iVar4 + 0x3bb) == '\x04') && (*(char *)(iVar4 + 0x2d9) == '\x04')) &&
            ((cVar1 = *(char *)(iVar4 + 0x2db), cVar1 == '\x05' ||
             ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
           ((iVar4 = iVar7 * 0x70 + _DAT_7c7dd9d6, *(char *)(iVar4 + iVar6 + 0x3b9) == '\x05' ||
            ((cVar1 = *(char *)(iVar6 + iVar4 + 0x3b9), cVar1 == '\x03' || (cVar1 == '\a')))))) {
          iVar4 = FUN_1005f230(1,10,0);
          if (iVar4 < 5) {
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x2db) = 4;
            FUN_10051d60((int)(short)(sVar3 + 1),(int)(short)(sVar2 + -1));
          }
          else {
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + -1 + 0x3ba) = 4;
            FUN_10051d60((int)(short)(iVar6 + -1),(int)(short)(sVar2 + 1));
          }
        }
        else {
          iVar4 = iVar7 * 0x70 + _DAT_7c7dd9d6;
          if (((*(char *)(iVar4 + iVar6 + 0x3b9) == '\x04') &&
              (iVar4 = iVar6 + iVar4, *(char *)(iVar4 + 0x2db) == '\x04')) &&
             ((((cVar1 = *(char *)(iVar4 + 0x2d9), cVar1 == '\x05' || (cVar1 == '\x03')) ||
               (cVar1 == '\a')) &&
              (((cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x3bb), cVar1 == '\x05' ||
                (cVar1 == '\x03')) || (cVar1 == '\a')))))) {
            iVar4 = FUN_1005f230(1,10,0);
            if (iVar4 < 5) {
              *(undefined1 *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + -1 + 0x2da) = 4;
              FUN_10051d60((int)(short)(iVar6 + -1),(int)(short)(sVar2 + -1));
            }
            else {
              *(undefined1 *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x3bb) = 4;
              FUN_10051d60((int)(short)(sVar3 + 1),(int)(short)(sVar2 + 1));
            }
          }
        }
      }
      iVar7 = (int)(short)(sVar2 + 1);
    } while (iVar7 < 0x9b);
    iVar6 = (int)(short)(sVar3 + 1);
  } while (iVar6 < 0x6f);
  return;
}



// Function: FUN_100a271c at 100a271c
// Size: 68 bytes

void FUN_100a271c(void)

{
  int iVar1;
  
  FUN_100a1d8c();
  iVar1 = FUN_100a1e28();
  while (iVar1 == 0) {
    FUN_100a1e50();
    FUN_100a2310();
    iVar1 = FUN_100a1e28();
  }
  return;
}



// Function: FUN_100a2760 at 100a2760
// Size: 380 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2760(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if (0 < *(short *)(_DAT_4bfde0cd + 0x34)) {
    sVar4 = 0;
    do {
      bVar1 = false;
      do {
        iVar2 = FUN_1005f230(1,0x70,0xffffffff);
        iVar3 = FUN_1005f230(1,0x9c,0xffffffff);
        if (*(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) == '\a') {
          bVar1 = true;
        }
      } while (!bVar1);
      *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) = 6;
      *(short *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe) = (short)iVar2;
      *(short *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe + 2) = (short)iVar3;
      *(undefined2 *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe + 4) = 2;
      *(undefined2 *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe + 6) = 0;
      *(short *)(_DAT_7c7dd9d6 + 0x348) = *(short *)(_DAT_7c7dd9d6 + 0x348) + 1;
      FUN_10051d60(iVar2,iVar3);
      sVar4 = sVar4 + 1;
    } while (sVar4 < *(short *)(_DAT_4bfde0cd + 0x34));
  }
  return;
}



// Function: FUN_100a28dc at 100a28dc
// Size: 380 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a28dc(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if (0 < *(short *)(_DAT_4bfde0cd + 0x36)) {
    sVar4 = 0;
    do {
      bVar1 = false;
      do {
        iVar2 = FUN_1005f230(1,0x70,0xffffffff);
        iVar3 = FUN_1005f230(1,0x9c,0xffffffff);
        if (*(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) == '\a') {
          bVar1 = true;
        }
      } while (!bVar1);
      *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar2 + 0x34a) = 5;
      *(short *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe) = (short)iVar2;
      *(short *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe + 2) = (short)iVar3;
      *(undefined2 *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe + 4) = 1;
      *(undefined2 *)(_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + 0x348) * 0xe + 6) = 0;
      *(short *)(_DAT_7c7dd9d6 + 0x348) = *(short *)(_DAT_7c7dd9d6 + 0x348) + 1;
      FUN_10051d60(iVar2,iVar3);
      sVar4 = sVar4 + 1;
    } while (sVar4 < *(short *)(_DAT_4bfde0cd + 0x36));
  }
  return;
}



// Function: FUN_100a2a58 at 100a2a58
// Size: 616 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2a58(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((1 < *(short *)(_DAT_7c7dd9d6 + 0x348)) && (iVar6 = 0, 0 < *(short *)(_DAT_7c7dd9d6 + 0x348)))
  {
    do {
      if (*(short *)(_DAT_7c7dd9d6 + iVar6 * 0xe + 4) == 1) {
        iVar1 = FUN_1005f230(1,2,0xffffffff);
        iVar2 = (int)(short)(*(short *)(_DAT_7c7dd9d6 + 0x348) + -1);
        if (iVar1 < iVar2) {
          iVar2 = iVar1;
        }
        *(short *)(_DAT_7c7dd9d6 + iVar6 * 0xe + 6) = (short)iVar2;
      }
      else {
        iVar1 = FUN_1005f230(1,4,0xffffffff);
        iVar2 = (int)(short)(*(short *)(_DAT_7c7dd9d6 + 0x348) + -1);
        if (iVar1 < iVar2) {
          iVar2 = iVar1;
        }
        *(short *)(_DAT_7c7dd9d6 + iVar6 * 0xe + 6) = (short)iVar2;
      }
      iVar2 = 0;
      if (0 < *(short *)(_DAT_7c7dd9d6 + iVar6 * 0xe + 6)) {
        do {
          iVar5 = 10000;
          iVar1 = -1;
          uVar4 = 0xffff;
          iVar7 = 0;
          if (0 < *(short *)(_DAT_7c7dd9d6 + 0x348)) {
            do {
              if (iVar7 != iVar6) {
                iVar3 = 0;
                if (0 < iVar2) {
                  do {
                    if (iVar7 == *(short *)(_DAT_7c7dd9d6 + iVar6 * 0xe + iVar3 * 2 + 8)) break;
                    iVar3 = (int)(short)((short)iVar3 + 1);
                  } while (iVar3 < iVar2);
                }
                if ((iVar3 == iVar2) &&
                   (iVar3 = FUN_1009eb70(*(undefined4 *)(_DAT_7c7dd9d6 + iVar7 * 0xe),
                                         *(undefined4 *)(_DAT_7c7dd9d6 + iVar6 * 0xe)),
                   iVar3 < iVar5)) {
                  iVar1 = iVar7;
                  iVar5 = iVar3;
                }
              }
              uVar4 = (undefined2)iVar1;
              iVar7 = (int)(short)((short)iVar7 + 1);
            } while (iVar7 < *(short *)(_DAT_7c7dd9d6 + 0x348));
          }
          *(undefined2 *)(_DAT_7c7dd9d6 + iVar6 * 0xe + iVar2 * 2 + 8) = uVar4;
          iVar2 = (int)(short)((short)iVar2 + 1);
        } while (iVar2 < *(short *)(iVar6 * 0xe + _DAT_7c7dd9d6 + 6));
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *(short *)(_DAT_7c7dd9d6 + 0x348));
  }
  return;
}



// Function: FUN_100a2cc0 at 100a2cc0
// Size: 1304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2cc0(undefined4 param_1,undefined4 param_2,short param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_r31;
  undefined4 uStack00000018;
  short sStack0000001c;
  short sStack0000001e;
  undefined4 local_80;
  short local_78;
  short local_76;
  short local_70;
  short local_6e;
  short local_68;
  short local_66 [3];
  short local_60;
  short local_5e [3];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  
  uStack00000018 = param_1;
  _sStack0000001c = param_2;
  local_50 = param_1;
  FUN_1009ebec(param_1,param_2,&local_80);
  bVar2 = false;
  do {
    FUN_1009ebec(local_50,_sStack0000001c,&local_58);
    iVar3 = FUN_1009eb70(local_50,_sStack0000001c);
    if (iVar3 < 3) {
      local_50 = CONCAT22(local_50._0_2_ + local_58._0_2_,local_50._2_2_ + local_58._2_2_);
      local_48 = local_58;
    }
    else {
      iVar3 = FUN_1005f230(1,3,0);
      if (iVar3 == 1) {
        local_50 = CONCAT22(local_50._0_2_ + local_58._0_2_,local_50._2_2_ + local_58._2_2_);
        local_48 = local_58;
      }
      else if (iVar3 == 2) {
        local_50 = CONCAT22(local_50._0_2_ + local_80._0_2_,local_50._2_2_ + local_80._2_2_);
        local_48 = local_80;
      }
      else if (iVar3 == 3) {
        FUN_1009f2a4(&local_58);
        local_50 = CONCAT22(local_50._0_2_ + local_58._0_2_,local_50._2_2_ + local_58._2_2_);
        local_80 = local_58;
        local_48 = local_58;
      }
    }
    iVar3 = 0;
    do {
      iVar5 = _DAT_4bfde0cd + iVar3 * 4;
      if ((local_48._0_2_ == *(short *)(iVar5 + 0xbc)) &&
         (local_48._2_2_ == *(short *)(iVar5 + 0xbe))) {
        unaff_r31 = iVar3;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    uVar4 = unaff_r31 + 2;
    uVar6 = unaff_r31 + 6;
    iVar3 = _DAT_4bfde0cd +
            (short)((short)uVar4 +
                   (short)(((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0)) * -8) * 4
    ;
    local_60 = local_50._0_2_ + *(short *)(iVar3 + 0xbc);
    local_5e[0] = local_50._2_2_ + *(short *)(iVar3 + 0xbe);
    iVar5 = _DAT_4bfde0cd +
            (short)((short)uVar6 +
                   (short)(((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8) * 4
    ;
    local_70 = local_50._0_2_ + *(short *)(iVar5 + 0xbc);
    local_6e = local_50._2_2_ + *(short *)(iVar5 + 0xbe);
    local_68 = local_50._0_2_ + *(short *)(iVar3 + 0xbc) * 2;
    local_66[0] = local_50._2_2_ + *(short *)(iVar3 + 0xbe) * 2;
    local_78 = local_50._0_2_ + *(short *)(iVar5 + 0xbc) * 2;
    local_76 = local_50._2_2_ + *(short *)(iVar5 + 0xbe) * 2;
    FUN_10051dc8(&local_50,(int)&local_50 + 2);
    cVar1 = *(char *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a);
    if ((cVar1 == '\a') || (cVar1 == '\x05')) {
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = param_4
      ;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
    }
    if ((local_50._0_2_ == sStack0000001c) && (local_50._2_2_ == sStack0000001e)) {
      bVar2 = true;
    }
    if (param_3 == 2) {
      FUN_10051dc8(&local_60,local_5e);
      cVar1 = *(char *)(_DAT_7c7dd9d6 + local_5e[0] * 0x70 + (int)local_60 + 0x34a);
      if ((cVar1 == '\a') || (cVar1 == '\x05')) {
        *(undefined1 *)(_DAT_7c7dd9d6 + local_5e[0] * 0x70 + (int)local_60 + 0x34a) = param_4;
        FUN_10051d60((int)local_60,(int)local_5e[0]);
      }
      cVar1 = *(char *)(_DAT_7c7dd9d6 + local_6e * 0x70 + (int)local_70 + 0x34a);
      if ((cVar1 == '\a') || (cVar1 == '\x05')) {
        *(undefined1 *)(_DAT_7c7dd9d6 + local_6e * 0x70 + (int)local_70 + 0x34a) = param_4;
        FUN_10051d60();
      }
    }
    if (param_3 == 3) {
      FUN_10051dc8(&local_68,local_66);
      cVar1 = *(char *)(_DAT_7c7dd9d6 + local_66[0] * 0x70 + (int)local_68 + 0x34a);
      if ((cVar1 == '\a') || (cVar1 == '\x05')) {
        *(undefined1 *)(_DAT_7c7dd9d6 + local_66[0] * 0x70 + (int)local_68 + 0x34a) = param_4;
        FUN_10051d60((int)local_68,(int)local_66[0]);
      }
      cVar1 = *(char *)(_DAT_7c7dd9d6 + local_76 * 0x70 + (int)local_78 + 0x34a);
      if ((cVar1 == '\a') || (cVar1 == '\x05')) {
        *(undefined1 *)(_DAT_7c7dd9d6 + local_76 * 0x70 + (int)local_78 + 0x34a) = param_4;
        FUN_10051d60();
      }
    }
  } while (!bVar2);
  return;
}



// Function: FUN_100a31d8 at 100a31d8
// Size: 168 bytes

void FUN_100a31d8(undefined4 param_1)

{
  short sVar2;
  undefined4 uVar1;
  short sStack00000018;
  short sStack0000001a;
  undefined4 local_10;
  
  _sStack00000018 = param_1;
  local_10._0_2_ = FUN_1005f230(1,5,0xfffffff6);
  local_10._0_2_ = sStack00000018 + local_10._0_2_;
  sVar2 = FUN_1005f230(1,5,0xfffffff6);
  local_10 = CONCAT22(local_10._0_2_,sStack0000001a + sVar2);
  FUN_10051dc8(&local_10,(int)&local_10 + 2);
  uVar1 = FUN_1005f230(1,2,1);
  FUN_100a2cc0(_sStack00000018,local_10,uVar1,5);
  return;
}



// Function: FUN_100a3280 at 100a3280
// Size: 56 bytes

void FUN_100a3280(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  
  uStack00000018 = param_1;
  uStack0000001c = param_2;
  FUN_100a2cc0(param_1,param_2,3,5);
  return;
}



// Function: FUN_100a32b8 at 100a32b8
// Size: 76 bytes

void FUN_100a32b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  
  uStack00000018 = param_1;
  uStack0000001c = param_2;
  uVar1 = FUN_1005f230(1,2,1);
  FUN_100a2cc0(uStack00000018,uStack0000001c,uVar1,6);
  return;
}



// Function: FUN_100a3304 at 100a3304
// Size: 168 bytes

void FUN_100a3304(undefined4 param_1)

{
  short sVar2;
  undefined4 uVar1;
  short sStack00000018;
  short sStack0000001a;
  undefined4 local_10;
  
  _sStack00000018 = param_1;
  local_10._0_2_ = FUN_1005f230(1,5,0xfffffff6);
  local_10._0_2_ = sStack00000018 + local_10._0_2_;
  sVar2 = FUN_1005f230(1,5,0xfffffff6);
  local_10 = CONCAT22(local_10._0_2_,sStack0000001a + sVar2);
  FUN_10051dc8(&local_10,(int)&local_10 + 2);
  uVar1 = FUN_1005f230(1,2,1);
  FUN_100a2cc0(_sStack00000018,local_10,uVar1,6);
  return;
}



// Function: FUN_100a33ac at 100a33ac
// Size: 544 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((1 < *(short *)(_DAT_7c7dd9d6 + 0x348)) && (iVar3 = 0, 0 < *(short *)(_DAT_7c7dd9d6 + 0x348)))
  {
    do {
      iVar2 = _DAT_7c7dd9d6 + iVar3 * 0xe;
      if (*(short *)(iVar2 + 4) == 1) {
        if (*(short *)(iVar2 + 6) == 0) {
          FUN_100a31d8(*(undefined4 *)(_DAT_7c7dd9d6 + iVar3 * 0xe));
        }
        else {
          iVar2 = 0;
          if (0 < *(short *)(_DAT_7c7dd9d6 + iVar3 * 0xe + 6)) {
            do {
              iVar1 = *(short *)(_DAT_7c7dd9d6 + iVar3 * 0xe + iVar2 * 2 + 8) * 0xe;
              if (*(short *)(_DAT_7c7dd9d6 + iVar1 + 4) == 1) {
                FUN_100a3280(*(undefined4 *)(iVar3 * 0xe + _DAT_7c7dd9d6),
                             *(undefined4 *)(iVar1 + _DAT_7c7dd9d6));
              }
              else {
                FUN_100a32b8(*(undefined4 *)(_DAT_7c7dd9d6 + iVar3 * 0xe),
                             *(undefined4 *)
                              (_DAT_7c7dd9d6 +
                              *(short *)(_DAT_7c7dd9d6 + iVar3 * 0xe + iVar2 * 2 + 8) * 0xe));
              }
              iVar2 = (int)(short)((short)iVar2 + 1);
            } while (iVar2 < *(short *)(_DAT_7c7dd9d6 + iVar3 * 0xe + 6));
          }
        }
      }
      else if (*(short *)(_DAT_7c7dd9d6 + iVar3 * 0xe + 6) == 0) {
        FUN_100a3304(*(undefined4 *)(iVar3 * 0xe + _DAT_7c7dd9d6));
      }
      else {
        iVar2 = 0;
        if (0 < *(short *)(_DAT_7c7dd9d6 + iVar3 * 0xe + 6)) {
          do {
            iVar1 = iVar3 * 0xe;
            FUN_100a32b8(*(undefined4 *)(_DAT_7c7dd9d6 + iVar1),
                         *(undefined4 *)
                          (_DAT_7c7dd9d6 + *(short *)(_DAT_7c7dd9d6 + iVar1 + iVar2 * 2 + 8) * 0xe))
            ;
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < *(short *)(iVar1 + _DAT_7c7dd9d6 + 6));
        }
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < *(short *)(_DAT_7c7dd9d6 + 0x348));
  }
  return;
}



// Function: FUN_100a35cc at 100a35cc
// Size: 992 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35cc(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      if ((((iVar4 != 0) && (iVar5 != 0)) && (iVar4 != 0x6f)) && (iVar5 != 0x9b)) {
        iVar3 = _DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4;
        if (*(char *)(iVar3 + 0x34a) == '\a') {
          if (((*(char *)(iVar3 + 0x3ba) == '\x06') && (*(char *)(iVar3 + 0x34b) == '\x06')) &&
             ((*(char *)(iVar3 + 0x349) == '\x06' && (*(char *)(iVar3 + 0x2da) == '\x06')))) {
            *(undefined1 *)(iVar3 + 0x34a) = 6;
            FUN_10051d60(iVar4,iVar5);
          }
          iVar3 = iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4;
          if (((*(char *)(iVar3 + 0x3ba) == '\x05') && (*(char *)(iVar3 + 0x34b) == '\x05')) &&
             ((*(char *)(iVar3 + 0x349) == '\x05' && (*(char *)(iVar3 + 0x2da) == '\x05')))) {
            *(undefined1 *)(iVar3 + 0x34a) = 5;
            FUN_10051d60(iVar4,iVar5);
          }
        }
      }
      if ((*(char *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) == '\x06') &&
         (iVar3 = FUN_1009ffa4(iVar4,iVar5,3), iVar3 != 0)) {
        *(undefined1 *)(iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4 + 0x34a) = 7;
        FUN_10051d60(iVar4,iVar5);
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 0x9c);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 0x70);
  iVar4 = 1;
  do {
    iVar5 = 1;
    do {
      iVar3 = _DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4;
      sVar1 = (short)iVar5;
      sVar2 = (short)iVar4;
      if (*(char *)(iVar3 + 0x34a) == '\x06') {
        if (((*(char *)(iVar3 + 0x3bb) == '\x06') && (*(char *)(iVar3 + 0x2d9) == '\x06')) &&
           (*(char *)(iVar3 + 0x2db) != '\x06')) {
          if (*(char *)(iVar3 + 0x3b9) == '\x06') {
LAB_100a38a8:
            iVar3 = iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4;
            if (((*(char *)(iVar3 + 0x2db) == '\x06') && (*(char *)(iVar3 + 0x2d9) != '\x06')) &&
               (*(char *)(iVar3 + 0x3bb) != '\x06')) {
              iVar3 = FUN_1005f230(1,10,0);
              if (iVar3 < 6) {
                *(undefined1 *)(iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4 + -1 + 0x2da) = 6;
                FUN_10051d60((int)(short)(iVar4 + -1),(int)(short)(sVar1 + -1));
              }
              else {
                *(undefined1 *)(iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4 + 0x3bb) = 6;
                FUN_10051d60((int)(short)(sVar2 + 1),(int)(short)(sVar1 + 1));
              }
            }
          }
          else {
            iVar3 = FUN_1005f230(1,10,0);
            if (iVar3 < 6) {
              *(undefined1 *)(iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4 + 0x2db) = 6;
              FUN_10051d60((int)(short)(sVar2 + 1),(int)(short)(sVar1 + -1));
            }
            else {
              *(undefined1 *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + -1 + 0x3ba) = 6;
              FUN_10051d60((int)(short)(iVar4 + -1),(int)(short)(sVar1 + 1));
            }
          }
        }
        else if (*(char *)(iVar5 * 0x70 + _DAT_7c7dd9d6 + iVar4 + 0x3b9) == '\x06')
        goto LAB_100a38a8;
      }
      iVar5 = (int)(short)(sVar1 + 1);
    } while (iVar5 < 0x9b);
    iVar4 = (int)(short)(sVar2 + 1);
    if (0x6e < iVar4) {
      return;
    }
  } while( true );
}



// Function: FUN_100a39ac at 100a39ac
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39ac(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_1002b83c();
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar4 = 0;
      do {
        cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar2 + 0x34a);
        if (((cVar1 != '\x06') && (cVar1 != '\x05')) &&
           (iVar3 = FUN_1009ffa4(iVar2,iVar4,6), iVar3 != 0)) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar2 + 0x34a) = 5;
          FUN_10051d60(iVar2,iVar4);
        }
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < 0x9c);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0x70);
  }
  return;
}



// Function: FUN_100a3a80 at 100a3a80
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3a80(void)

{
  *(undefined2 *)(_DAT_7c7dd9d6 + 0x348) = 0;
  FUN_100a2760();
  FUN_100a28dc();
  FUN_100a2a58();
  FUN_100a33ac();
  FUN_100a35cc();
  FUN_100a39ac();
  return;
}



// Function: FUN_100a3acc at 100a3acc
// Size: 664 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3acc(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  do {
    iVar8 = 0;
    do {
      uVar5 = iVar8 + iVar7;
      if ((uVar5 == 0) ||
         (uVar2 = uVar5 - 1,
         ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) !=
         ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar6 = _DAT_7c7dd9d6 + iVar7 * 0x70 + iVar8;
      if ((((*(char *)(iVar6 + 0x34a) == '\n') && (*(char *)(iVar6 + 0x2da) != '\n')) &&
          (*(char *)(iVar6 + 0x349) != '\n')) && ((0 < iVar8 && (0 < iVar7)))) {
        iVar6 = iVar7 * 0xe0;
        iVar3 = iVar8 * 2;
        *(uint *)(_DAT_38800000 + iVar6 + iVar3) =
             (int)*(short *)(_DAT_4bfde0cd + 0x6e4) << 0x18 |
             *(uint *)(_DAT_38800000 + iVar6 + iVar3) & 0xffffff;
        iVar4 = iVar6 + _DAT_38800000 + iVar3;
        *(uint *)(iVar4 + 2) =
             (*(short *)(_DAT_4bfde0cd + 0x6e4) + 1) * 0x1000000 | *(uint *)(iVar4 + 2) & 0xffffff;
        iVar4 = iVar6 + _DAT_38800000 + iVar3;
        *(uint *)(iVar4 + 0xe0) =
             (*(short *)(_DAT_4bfde0cd + 0x6e4) + 0x10) * 0x1000000 |
             *(uint *)(iVar4 + 0xe0) & 0xffffff;
        iVar3 = iVar6 + _DAT_38800000 + iVar3;
        *(uint *)(iVar3 + 0xe2) =
             (*(short *)(_DAT_4bfde0cd + 0x6e4) + 0x11) * 0x1000000 |
             *(uint *)(iVar3 + 0xe2) & 0xffffff;
      }
      else if (*(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar8 + 0x34a) == '\v') {
        iVar6 = _DAT_38800000 + iVar7 * 0xe0;
        *(uint *)(iVar6 + iVar8 * 2) =
             (int)*(short *)(_DAT_4bfde0cd + (short)(ushort)!bVar1 * 2 + 0x724) << 0x18 |
             *(uint *)(iVar6 + iVar8 * 2) & 0xffffff;
      }
      else {
        iVar6 = (int)*(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar8 + 0x34a);
        if (iVar6 != 10) {
          iVar3 = _DAT_38800000 + iVar7 * 0xe0;
          *(uint *)(iVar3 + iVar8 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + iVar6 * 0x40 + (short)(ushort)!bVar1 * 2 + 0x464) <<
               0x18 | *(uint *)(iVar3 + iVar8 * 2) & 0xffffff;
        }
      }
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < 0x70);
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 0x9c);
  iVar7 = 0;
  do {
    iVar8 = _DAT_4bffe775 + iVar7 * 0x20;
    iVar6 = _DAT_38800000 + *(short *)(iVar8 + 0x814) * 0xe0;
    iVar8 = *(short *)(iVar8 + 0x812) * 2;
    *(uint *)(iVar6 + iVar8) =
         (int)*(short *)(_DAT_4bfde0cd + 0x728) << 0x18 | *(uint *)(iVar6 + iVar8) & 0xffffff;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 8);
  return;
}



// Function: FUN_100a3d64 at 100a3d64
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a3d64(short param_1,short param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar6 = 0;
  do {
    iVar3 = _DAT_4bfde0cd + uVar6 * 4;
    iVar5 = (int)(short)(param_1 + *(short *)(iVar3 + 0xbc));
    iVar3 = (int)(short)(param_2 + *(short *)(iVar3 + 0xbe));
    bVar2 = 0x9b < iVar3 || (0x6f < iVar5 || (iVar3 < 0 || iVar5 < 0));
    cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar5 + 0x34a);
    if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x01')) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = (int)(short)((ushort)iVar4 | (ushort)(1 << (uVar6 & 0x3f)));
    }
    uVar6 = (uint)(short)((short)uVar6 + 1);
  } while ((int)uVar6 < 8);
  return iVar4;
}



// Function: FUN_100a3e44 at 100a3e44
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a3e44(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  uVar4 = 0;
  do {
    iVar1 = _DAT_4bfde0cd + uVar4 * 4;
    iVar3 = (int)(short)(param_1 + *(short *)(iVar1 + 0xbc));
    iVar1 = (int)(short)(param_2 + *(short *)(iVar1 + 0xbe));
    if (*(char *)(_DAT_7c7dd9d6 + iVar1 * 0x70 + iVar3 + 0x34a) == '\x04' ||
        (0x9b < iVar1 || (0x6f < iVar3 || (iVar1 < 0 || iVar3 < 0)))) {
      iVar2 = (int)(short)((ushort)iVar2 | (ushort)(1 << (uVar4 & 0x3f)));
    }
    uVar4 = (uint)(short)((short)uVar4 + 1);
  } while ((int)uVar4 < 8);
  return iVar2;
}



// Function: FUN_100a3f14 at 100a3f14
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a3f14(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  uVar4 = 0;
  do {
    iVar1 = _DAT_4bfde0cd + uVar4 * 4;
    iVar3 = (int)(short)(param_1 + *(short *)(iVar1 + 0xbc));
    iVar1 = (int)(short)(param_2 + *(short *)(iVar1 + 0xbe));
    if (*(char *)(_DAT_7c7dd9d6 + iVar1 * 0x70 + iVar3 + 0x34a) == '\x06' ||
        (0x9b < iVar1 || (0x6f < iVar3 || (iVar1 < 0 || iVar3 < 0)))) {
      iVar2 = (int)(short)((ushort)iVar2 | (ushort)(1 << (uVar4 & 0x3f)));
    }
    uVar4 = (uint)(short)((short)uVar4 + 1);
  } while ((int)uVar4 < 8);
  return iVar2;
}



// Function: FUN_100a3fe4 at 100a3fe4
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a3fe4(short param_1,short param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar6 = 0;
  do {
    iVar3 = _DAT_4bfde0cd + uVar6 * 4;
    iVar5 = (int)(short)(param_1 + *(short *)(iVar3 + 0xbc));
    iVar3 = (int)(short)(param_2 + *(short *)(iVar3 + 0xbe));
    bVar2 = 0x9b < iVar3 || (0x6f < iVar5 || (iVar3 < 0 || iVar5 < 0));
    cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar5 + 0x34a);
    if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = (int)(short)((ushort)iVar4 | (ushort)(1 << (uVar6 & 0x3f)));
    }
    uVar6 = (uint)(short)((short)uVar6 + 1);
  } while ((int)uVar6 < 8);
  return iVar4;
}



// Function: FUN_100a40bc at 100a40bc
// Size: 2320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a40bc(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = FUN_1002b83c();
  iVar9 = 0;
  do {
    iVar10 = 0;
    do {
      cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        iVar4 = FUN_100a3d64(iVar10,iVar9);
        uVar6 = iVar10 + iVar9;
        if ((uVar6 == 0) ||
           (uVar5 = uVar6 - 1,
           ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) !=
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (*(char *)(_DAT_4bfde0cd + iVar4 + 0x264) < '\0') {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 8;
          iVar7 = _DAT_38800000 + iVar9 * 0xe0;
          iVar4 = iVar10 * 2;
          *(uint *)(iVar7 + iVar4) =
               (int)*(short *)(_DAT_4bfde0cd + (short)(ushort)!bVar2 * 2 + 0x664) << 0x18 |
               *(uint *)(iVar7 + iVar4) & 0xffffff;
          FUN_100a6364(iVar10,iVar9);
          iVar7 = iVar9 * 0xe0 + _DAT_38800000;
          *(uint *)(iVar7 + iVar4) = *(uint *)(iVar7 + iVar4) & 0xff7fffff;
        }
        else {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 2;
          iVar7 = _DAT_38800000 + iVar9 * 0xe0;
          *(uint *)(iVar7 + iVar10 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + *(char *)(_DAT_4bfde0cd + iVar4 + 0x264) * 4 +
                               (short)(ushort)!bVar2 * 2 + 0x4e4) << 0x18 |
               *(uint *)(iVar7 + iVar10 * 2) & 0xffffff;
        }
      }
      iVar10 = (int)(short)((short)iVar10 + 1);
    } while (iVar10 < 0x70);
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x9c);
  iVar9 = 0;
  do {
    iVar10 = 0;
    do {
      if (*(char *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) == '\x04') {
        iVar4 = FUN_100a3e44(iVar10,iVar9);
        uVar6 = iVar9 + iVar10;
        if ((uVar6 == 0) ||
           (uVar5 = uVar6 - 1,
           ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) !=
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar7 = (int)(short)(ushort)!bVar2;
        if (*(char *)(_DAT_4bfde0cd + iVar4 + 0x264) < '\0') {
          iVar4 = FUN_1005f230(1,10,0);
          if (iVar4 < 6) {
            iVar4 = _DAT_38800000 + iVar9 * 0xe0;
            *(uint *)(iVar4 + iVar10 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + iVar7 * 2 + 0x624) << 0x18 |
                 *(uint *)(iVar4 + iVar10 * 2) & 0xffffff;
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 7;
          }
          else {
            iVar4 = _DAT_38800000 + iVar9 * 0xe0;
            *(uint *)(iVar4 + iVar10 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + iVar7 * 2 + 0x598) << 0x18 |
                 *(uint *)(iVar4 + iVar10 * 2) & 0xffffff;
          }
        }
        else {
          iVar8 = _DAT_38800000 + iVar9 * 0xe0;
          *(uint *)(iVar8 + iVar10 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + *(char *)(_DAT_4bfde0cd + iVar4 + 0x264) * 4 +
                               iVar7 * 2 + 0x564) << 0x18 | *(uint *)(iVar8 + iVar10 * 2) & 0xffffff
          ;
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 4;
        }
      }
      iVar10 = (int)(short)((short)iVar10 + 1);
    } while (iVar10 < 0x70);
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x9c);
  iVar9 = 0;
  do {
    iVar10 = 0;
    do {
      if (*(char *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) == '\x06') {
        iVar4 = FUN_100a3f14(iVar10,iVar9);
        uVar6 = iVar9 + iVar10;
        if ((uVar6 == 0) ||
           (uVar5 = uVar6 - 1,
           ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) !=
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar7 = (int)(short)(ushort)!bVar2;
        if (*(char *)(_DAT_4bfde0cd + iVar4 + 0x264) < '\0') {
          if (iVar3 == 0) {
            iVar4 = _DAT_38800000 + iVar9 * 0xe0;
            *(uint *)(iVar4 + iVar10 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + iVar7 * 2 + 0x624) << 0x18 |
                 *(uint *)(iVar4 + iVar10 * 2) & 0xffffff;
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 7;
          }
          else {
            iVar4 = _DAT_38800000 + iVar9 * 0xe0;
            *(uint *)(iVar4 + iVar10 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + iVar7 * 2 + 0x5a4) << 0x18 |
                 *(uint *)(iVar4 + iVar10 * 2) & 0xffffff;
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 5;
          }
        }
        else {
          iVar8 = _DAT_38800000 + iVar9 * 0xe0;
          *(uint *)(iVar8 + iVar10 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + *(char *)(_DAT_4bfde0cd + iVar4 + 0x264) * 4 +
                               iVar7 * 2 + 0x5e4) << 0x18 | *(uint *)(iVar8 + iVar10 * 2) & 0xffffff
          ;
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + iVar10 + 0x34a) = 6;
        }
      }
      iVar10 = (int)(short)((short)iVar10 + 1);
    } while (iVar10 < 0x70);
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x9c);
  iVar3 = 0;
  do {
    iVar9 = 0;
    do {
      if (*(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) == '\x05') {
        iVar10 = FUN_100a3fe4(iVar9,iVar3);
        uVar6 = iVar3 + iVar9;
        if ((uVar6 == 0) ||
           (uVar5 = uVar6 - 1,
           ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) !=
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar4 = (int)(short)(ushort)!bVar2;
        if (*(char *)(_DAT_4bfde0cd + iVar10 + 0x264) < '\0') {
          iVar10 = FUN_1005f230(1,10,0);
          if (iVar10 < 6) {
            iVar10 = _DAT_38800000 + iVar3 * 0xe0;
            *(uint *)(iVar10 + iVar9 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + iVar4 * 2 + 0x624) << 0x18 |
                 *(uint *)(iVar10 + iVar9 * 2) & 0xffffff;
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) = 7;
          }
          else {
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) = 5;
            iVar10 = _DAT_38800000 + iVar3 * 0xe0;
            *(uint *)(iVar10 + iVar9 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd +
                                 *(char *)(iVar3 * 0x70 + _DAT_7c7dd9d6 + iVar9 + 0x34a) * 0x40 +
                                 iVar4 * 2 + 0x498) << 0x18 |
                 *(uint *)(iVar10 + iVar9 * 2) & 0xffffff;
          }
        }
        else {
          iVar7 = _DAT_38800000 + iVar3 * 0xe0;
          *(uint *)(iVar7 + iVar9 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + *(char *)(_DAT_4bfde0cd + iVar10 + 0x264) * 4 +
                               iVar4 * 2 + 0x5a4) << 0x18 | *(uint *)(iVar7 + iVar9 * 2) & 0xffffff;
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) = 5;
        }
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < 0x70);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x9c);
  iVar3 = 0;
  do {
    iVar9 = 0;
    do {
      if (*(char *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) == '\b') {
        uVar6 = iVar9 + iVar3;
        if ((uVar6 == 0) ||
           (uVar5 = uVar6 - 1,
           ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) !=
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar10 = FUN_1005f230(1,10,0);
        if (iVar10 < 7) {
          iVar10 = _DAT_38800000 + iVar3 * 0xe0;
          *(uint *)(iVar10 + iVar9 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + (short)(ushort)!bVar2 * 2 + 0x664) << 0x18 |
               *(uint *)(iVar10 + iVar9 * 2) & 0xffffff;
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) = 8;
        }
        else {
          iVar10 = FUN_1005f230(1,4,0);
          *(uint *)(iVar3 * 0xe0 + _DAT_38800000 + iVar9 * 2) =
               (int)*(short *)(_DAT_4bfde0cd + iVar10 * 4 + 0x664) << 0x18 |
               *(uint *)(_DAT_38800000 + iVar3 * 0xe0 + iVar9 * 2) & 0xffffff;
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar3 * 0x70 + iVar9 + 0x34a) = 8;
        }
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < 0x70);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x9c);
  return;
}



// Function: FUN_100a49cc at 100a49cc
// Size: 52 bytes

void FUN_100a49cc(void)

{
  FUN_100a3acc();
  FUN_100a40bc();
  FUN_100a40bc();
  return;
}



// Function: FUN_100a4a00 at 100a4a00
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a4a00(short param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    iVar4 = _DAT_4bfde0cd + uVar2 * 4;
    iVar3 = (int)(short)(param_1 + *(short *)(iVar4 + 0xdc));
    iVar4 = (int)(short)(param_2 + *(short *)(iVar4 + 0xde));
    if ((((-1 < iVar3) && (-1 < iVar4)) && (iVar3 < 0x70)) &&
       ((iVar4 < 0x9c &&
        (((*(uint *)(_DAT_807f0004 + iVar4 * 0x70 + iVar3) >> 0x18 & 0x1f) != 0 ||
         (*(char *)(_DAT_4bffe775 + (*(uint *)(_DAT_38800000 + iVar4 * 0xe0 + iVar3 * 2) >> 0x18) +
                   0x711) == '\x01')))))) {
      iVar1 = (int)(short)((ushort)iVar1 | (ushort)(1 << (uVar2 & 0x3f)));
    }
    uVar2 = (uint)(short)((short)uVar2 + 1);
  } while ((int)uVar2 < 8);
  return iVar1;
}



// Function: FUN_100a4ae8 at 100a4ae8
// Size: 804 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4ae8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  do {
    iVar8 = 0;
    do {
      if ((*(uint *)(_DAT_807f0004 + iVar7 * 0x70 + iVar8) >> 0x18 & 0x1f) != 0) {
        iVar2 = FUN_100a4a00(iVar8,iVar7);
        uVar5 = iVar7 + iVar8;
        if ((uVar5 == 0) ||
           (uVar4 = uVar5 - 1,
           ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) !=
           ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (*(char *)(_DAT_4bfde0cd + iVar2 + 0x364) < '\0') {
          iVar2 = FUN_1005f230(1,10,0);
          if (iVar2 < 6) {
            iVar2 = _DAT_38800000 + iVar7 * 0xe0;
            *(uint *)(iVar2 + iVar8 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + (short)(ushort)!bVar1 * 2 + 0x624) << 0x18 |
                 *(uint *)(iVar2 + iVar8 * 2) & 0xffffff;
            *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar8 + 0x34a) = 7;
          }
          else {
            iVar2 = _DAT_38800000 + iVar7 * 0xe0;
            *(uint *)(iVar2 + iVar8 * 2) =
                 (int)*(short *)(_DAT_4bfde0cd + (short)(ushort)!bVar1 * 2 + 0x5d8) << 0x18 |
                 *(uint *)(iVar2 + iVar8 * 2) & 0xffffff;
          }
        }
        else {
          iVar3 = _DAT_807f0004 + iVar7 * 0x70;
          *(uint *)(iVar3 + iVar8) =
               (*(char *)(_DAT_4bfde0cd + iVar2 + 0x364) + 1) * 0x1000000 & 0x1f000000U |
               *(uint *)(iVar3 + iVar8) & 0xe0ffffff;
        }
      }
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < 0x70);
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 0x9c);
  iVar7 = FUN_1005f230(1,10,10);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      sVar6 = 0;
      do {
        iVar2 = FUN_1005f230(1,0x70,0xffffffff);
        iVar3 = FUN_1005f230(1,0x9c,0xffffffff);
        iVar3 = _DAT_807f0004 + iVar3 * 0x70;
        uVar5 = *(uint *)(iVar3 + iVar2);
        if ((uVar5 >> 0x18 & 0x1f) == 2) {
          *(uint *)(iVar3 + iVar2) = uVar5 & 0xe0ffffff | 0x11000000;
          break;
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 < 10000);
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < iVar7);
  }
  iVar7 = FUN_1005f230(1,10,10);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      sVar6 = 0;
      do {
        iVar2 = FUN_1005f230(1,0x70,0xffffffff);
        iVar3 = FUN_1005f230(1,0x9c,0xffffffff);
        iVar3 = _DAT_807f0004 + iVar3 * 0x70;
        uVar5 = *(uint *)(iVar3 + iVar2);
        if ((uVar5 >> 0x18 & 0x1f) == 1) {
          *(uint *)(iVar3 + iVar2) = uVar5 & 0xe0ffffff | 0x10000000;
          break;
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 < 10000);
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < iVar7);
  }
  return;
}



// Function: FUN_100a4e0c at 100a4e0c
// Size: 1196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4e0c(void)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar10;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar11;
  undefined1 uVar12;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined **local_194;
  undefined4 local_170;
  undefined1 auStack_164 [256];
  short local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  iVar3 = FUN_1005f230(1,0x1e,0x28);
  puVar4 = (undefined2 *)FUN_100f1640(iVar3 * 0x68 + 2);
  uVar10 = FUN_100525a0(iVar3);
  *puVar4 = uVar10;
  iVar15 = 0;
  iVar14 = 0;
  ppuVar2 = &.TVect::OCECToRString;
  if (0 < iVar3) {
    do {
      bVar1 = false;
      do {
        iVar5 = FUN_1005f230(1,0x70,0xffffffff);
        iVar6 = FUN_1005f230(1,0x9c,0xffffffff);
        if ((*(char *)(_DAT_4bffe775 + (*(uint *)(_DAT_38800000 + iVar6 * 0xe0 + iVar5 * 2) >> 0x18)
                      + 0x711) == '\a') && (iVar7 = FUN_1009ffa4(iVar5,iVar6,10), iVar7 == 0)) {
          iVar7 = FUN_1009ffa4(iVar5,iVar6,9);
          if ((iVar7 == 0) &&
             ((*(uint *)(_DAT_807f0004 + iVar6 * 0x70 + iVar5) >> 0x18 & 0x1f) == 0)) {
            bVar1 = true;
          }
        }
      } while (!bVar1);
      iVar7 = _DAT_38800000 + iVar6 * 0xe0;
      *(uint *)(iVar7 + iVar5 * 2) = *(uint *)(iVar7 + iVar5 * 2) & 0xffffff;
      uVar10 = FUN_100525a0(iVar5);
      puVar4[iVar14 * 0x34 + 1] = uVar10;
      uVar10 = FUN_100525a0(iVar6);
      puVar4[iVar14 * 0x34 + 2] = uVar10;
      iVar7 = FUN_1005f230(1,10,0);
      if ((iVar7 < 4) && (iVar15 < *(short *)(_DAT_4bfde0cd + 0x18b0))) {
        FUN_10001e78(puVar4 + iVar14 * 0x34 + 3,_DAT_4bfde0cd + iVar15 * 0x3c + 0x18b2);
        FUN_10001e78(puVar4 + iVar14 * 0x34 + 0x1c,iVar15 * 0x3c + _DAT_4bfde0cd + 0x18d0);
        iVar15 = (int)(short)((short)iVar15 + 1);
      }
      else {
        iVar7 = FUN_1002bf64(iVar5,iVar6,0xe,0);
        iVar7 = iVar7 * 0x42;
        sVar11 = FUN_1000a884(iVar5,iVar6,(int)*(short *)(_DAT_4bffe775 + iVar7 + 0x1604),
                              (int)*(short *)(_DAT_4bffe775 + iVar7 + 0x1606));
        iVar5 = FUN_1002c970(iVar5,iVar6,(int)*(short *)(iVar7 + _DAT_4bffe775 + 0x1604),
                             (int)*(short *)(iVar7 + _DAT_4bffe775 + 0x1606));
        FUN_10001dd0(puVar4 + iVar14 * 0x34 + 3,_DAT_4bfde0cd + 0x1888,
                     iVar7 + _DAT_4bffe775 + 0x1608);
        FUN_10001dd0(puVar4 + iVar14 * 0x34 + 0x1c,_DAT_4bfde0cd + 0x189c,(int)(short)(sVar11 << 1),
                     *(undefined4 *)(&DAT_7c0803a6 + iVar5 * 4));
      }
      iVar14 = (int)(short)((short)iVar14 + 1);
      ppuVar2 = local_194;
    } while (iVar14 < iVar3);
  }
  local_64 = 0;
  local_60 = 0;
  local_5c = (undefined1 *)0x0;
  local_58 = 0;
  local_54 = 0;
  piVar13 = *(int **)(*(int *)(*(int *)ppuVar2[-0x155] + 0x88) + 0x148);
  FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x2b8));
  uVar12 = FUN_100f1574(1);
  uVar8 = FUN_10001fc8(1000);
  *local_194[-0xf] = uVar12;
  FUN_100db26c();
  local_5c = _DAT_41820010;
  _DAT_41820010 = auStack_164;
  iVar14 = FUN_10000090(auStack_164);
  if (iVar14 == 0) {
    piVar13 = (int *)FUN_100fab98(0);
    FUN_100fac48(piVar13,uVar8,1000);
    FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x170),puVar4,iVar3 * 0x68 + 2);
    FUN_100f57c8(piVar13);
    uVar9 = FUN_100b1c84(local_194[-0x393]);
    FUN_10002568(uVar8,0x53474e20,10000,uVar9);
    FUN_100db328();
    FUN_100002a0(uVar8);
    FUN_100ef580(puVar4);
    _DAT_41820010 = local_5c;
  }
  else {
    FUN_100ef580(puVar4);
    FUN_100f57c8(local_170);
    iVar3 = FUN_100ef2f8(uVar8);
    if (iVar3 == 0) {
      FUN_100ef510(uVar8);
    }
    FUN_100db158((int)local_64,local_60);
  }
  return;
}



// Function: FUN_100a52b8 at 100a52b8
// Size: 3496 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a52b8(void)

{
  undefined1 uVar5;
  int iVar1;
  undefined4 uVar2;
  short sVar4;
  int iVar3;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_8f4;
  undefined1 auStack_8d0 [256];
  undefined1 auStack_7d0 [256];
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined1 local_6bc [156];
  undefined1 auStack_620 [6];
  byte local_61a [66];
  undefined1 local_5d8 [256];
  undefined1 local_4d8 [256];
  undefined1 local_3d8 [256];
  undefined1 auStack_2d8 [20];
  undefined1 auStack_2c4 [8];
  undefined1 auStack_2bc [30];
  undefined2 local_29e;
  undefined1 auStack_29c [8];
  undefined1 auStack_294 [8];
  undefined2 local_28c;
  undefined2 local_28a;
  undefined2 local_288;
  undefined2 local_286;
  undefined1 auStack_280 [256];
  undefined1 auStack_180 [256];
  short local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *local_68;
  undefined4 local_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  
  local_80 = 0;
  local_7c = 0;
  local_78 = (undefined1 *)0x0;
  local_74 = 0;
  local_70 = 0;
  iVar8 = *(int *)(_DAT_57c407bd + 0x88);
  FUN_10117884((int)*(int **)(iVar8 + 0x148) + (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x2b8));
  uVar5 = FUN_100f1574(1);
  local_64 = FUN_10001fc8(0x8880);
  uRam00000000 = uVar5;
  FUN_100db26c();
  local_78 = _DAT_41820010;
  _DAT_41820010 = auStack_180;
  iVar1 = FUN_10000090(auStack_180);
  if (iVar1 == 0) {
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,1000);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x170),
                 **(undefined4 **)(local_8f4 + -0x548),0x8880);
    local_68 = (int *)FUN_100f57c8(local_68);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x4d415020,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    uVar5 = FUN_100f1574(1);
    local_64 = FUN_10001fc8(0x4440);
    uRam00000000 = uVar5;
    FUN_100db26c();
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,1000);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x170),
                 **(undefined4 **)(local_8f4 + -0x54c),0x4440);
    local_68 = (int *)FUN_100f57c8(local_68);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x52442020,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    uVar5 = FUN_100f1574(1);
    local_64 = FUN_10001fc8(1000);
    uRam00000000 = uVar5;
    FUN_100db26c();
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,1000);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x170),
                 **(int **)(local_8f4 + -0x2ac) + 0x1f56,
                 (int)*(short *)(**(int **)(local_8f4 + -0x2ac) + 0x1064));
    local_68 = (int *)FUN_100f57c8(local_68);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x43545920,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    uVar5 = FUN_100f1574(1);
    local_64 = FUN_10001fc8(1000);
    uRam00000000 = uVar5;
    FUN_100db26c();
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,1000);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x170),
                 **(int **)(local_8f4 + -0x2ac) + 0x3e96,
                 (int)*(short *)(**(int **)(local_8f4 + -0x2ac) + 0x1066));
    local_68 = (int *)FUN_100f57c8(local_68);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x53504320,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    FUN_10000318((int)**(short **)(local_8f4 + -0xb4));
    local_64 = FUN_10003540(0x44415420,*(undefined4 *)(local_8f4 + -0x1090));
    FUN_100db26c();
    FUN_10002ce8(local_64);
    FUN_10117884((int)*(int **)(iVar8 + 0x148) + (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x2b8))
    ;
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x49544d20,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    FUN_10000318((int)**(short **)(local_8f4 + -0xb4));
    local_64 = FUN_10003558(0x50494354,0x3eb);
    FUN_100db26c();
    FUN_10002ce8(local_64);
    FUN_10117884((int)*(int **)(iVar8 + 0x148) + (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x2b8))
    ;
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x50494354,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    FUN_10117884((int)*(int **)(iVar8 + 0x148) + (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x178),
                 auStack_620);
    uVar5 = FUN_100f1574(1);
    local_64 = FUN_10001fc8(0x3c);
    uRam00000000 = uVar5;
    FUN_100db26c();
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,10);
    FUN_100012d8(local_61a,auStack_7d0,local_61a[0] + 1);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x1d0),auStack_7d0);
    local_68 = (int *)FUN_100f57c8(local_68);
    FUN_100b19f4(auStack_280,*(int *)(local_8f4 + -0x1090) + 0xc);
    FUN_100012d8(local_61a,auStack_8d0,local_61a[0] + 1);
    FUN_100b1f6c(auStack_280,auStack_8d0);
    uVar2 = FUN_100b1c84(auStack_280);
    FUN_10002568(local_64,0x4e414d45,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    FUN_100012d8(local_61a,auStack_280,local_61a[0] + 1);
    uVar2 = FUN_100b1b08(auStack_280);
    iVar1 = *(int *)(local_8f4 + -0x1090);
    FUN_10001dd0(auStack_2d8,iVar1 + 0x10,uVar2);
    uVar2 = FUN_100b1b08(auStack_280);
    FUN_10001dd0(auStack_2c4,iVar1 + 0x18,uVar2);
    uVar2 = FUN_100b1b08(auStack_280);
    FUN_10001dd0(auStack_2bc,iVar1 + 0x20,uVar2);
    sVar4 = FUN_100012c0(auStack_2c4);
    local_29e = FUN_100525a0((int)sVar4);
    uVar2 = FUN_100b1b08(auStack_280);
    FUN_10001dd0(auStack_29c,iVar1 + 0x28,uVar2);
    uVar2 = FUN_100b1b08(auStack_280);
    FUN_10001dd0(auStack_294,iVar1 + 0x30,uVar2);
    piVar7 = *(int **)(local_8f4 + -0x544);
    local_28c = FUN_100525a0((int)*(short *)(*piVar7 + 0x1602));
    local_28a = FUN_100525a0((int)*(short *)(*piVar7 + 0x810));
    local_288 = FUN_100525a0(8);
    local_286 = FUN_100525a0((int)*(short *)(*piVar7 + 0x162));
    uVar5 = FUN_100f1574(1);
    local_64 = FUN_10001fc8(0x54);
    uRam00000000 = uVar5;
    FUN_100db26c();
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,10);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x170),auStack_2d8,0x54);
    local_68 = (int *)FUN_100f57c8(local_68);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_10002568(local_64,0x5343454e,10000,uVar2);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    local_6d0 = *(undefined4 *)(iVar1 + 0x38);
    uStack_6cc = *(undefined4 *)(iVar1 + 0x3c);
    uStack_6c8 = *(undefined4 *)(iVar1 + 0x40);
    iVar1 = 0;
    do {
      local_6bc[iVar1 * 0x1e] = 0;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 5);
    uVar5 = FUN_100f1574(1);
    local_64 = FUN_10001fc8(0xaa);
    uRam00000000 = uVar5;
    FUN_100db26c();
    local_68 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_68,local_64,10);
    FUN_10117884((int)local_68 + (int)*(short *)(*local_68 + 0x170),&local_6d0,0xaa);
    local_68 = (int *)FUN_100f57c8(local_68);
    FUN_10002568(local_64,0x44415420,0x2742,*(int *)(local_8f4 + -0x1090) + 0x44);
    FUN_100db328();
    FUN_100002a0(local_64);
    local_64 = 0;
    if (**(char **)(local_8f4 + -0x1438) != '\0') {
      FUN_1007ee44(iVar8);
      uVar2 = FUN_10003558(0x4e414d45,20000);
      FUN_100db328();
      local_3d8[0] = 0;
      FUN_10001758(uVar2,auStack_60,auStack_5c,local_3d8);
      iVar1 = FUN_100b1b08(local_3d8);
      uVar5 = FUN_100f1574(1);
      local_64 = FUN_10001fc8(0x3c);
      uRam00000000 = uVar5;
      FUN_100db26c();
      local_68 = (int *)FUN_100fab98(0);
      FUN_100fac48(local_68,local_64,10);
      piVar7 = local_68;
      iVar6 = *local_68;
      iVar3 = FUN_100012c0(iVar1 + 8);
      FUN_10117884((int)piVar7 + (int)*(short *)(iVar6 + 0x170),iVar1 + 8,iVar3 + 1);
      local_68 = (int *)FUN_100f57c8(local_68);
      FUN_10117884((int)*(int **)(iVar8 + 0x148) +
                   (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x2b8));
      FUN_10002568(local_64,0x44415420,0x2738,*(int *)(local_8f4 + -0x1090) + 0x50);
      FUN_100db328();
      FUN_100002a0(local_64);
    }
    local_64 = 0;
    if (**(char **)(local_8f4 + -0x1434) != '\0') {
      FUN_1007ef3c(iVar8);
      uVar2 = FUN_10003558(0x4e414d45,25000);
      FUN_100db328();
      local_4d8[0] = 0;
      FUN_10001758(uVar2,auStack_58,auStack_54,local_4d8);
      iVar1 = FUN_100b1b08(local_4d8);
      uVar5 = FUN_100f1574(1);
      local_64 = FUN_10001fc8(0x3c);
      uRam00000000 = uVar5;
      FUN_100db26c();
      local_68 = (int *)FUN_100fab98(0);
      FUN_100fac48(local_68,local_64,10);
      piVar7 = local_68;
      iVar6 = *local_68;
      iVar3 = FUN_100012c0(iVar1 + 8);
      FUN_10117884((int)piVar7 + (int)*(short *)(iVar6 + 0x170),iVar1 + 8,iVar3 + 1);
      local_68 = (int *)FUN_100f57c8(local_68);
      FUN_10117884((int)*(int **)(iVar8 + 0x148) +
                   (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x2b8));
      FUN_10002568(local_64,0x44415420,0x2739,*(int *)(local_8f4 + -0x1090) + 0x5c);
      FUN_100db328();
      FUN_100002a0(local_64);
    }
    local_64 = 0;
    if (**(char **)(local_8f4 + -0x1430) != '\0') {
      FUN_1007f034(iVar8);
      uVar2 = FUN_10003558(0x4e414d45,15000);
      FUN_100db328();
      local_5d8[0] = 0;
      FUN_10001758(uVar2,auStack_50,auStack_4c,local_5d8);
      iVar1 = FUN_100b1b08(local_5d8);
      uVar5 = FUN_100f1574(1);
      local_64 = FUN_10001fc8(0x3c);
      uRam00000000 = uVar5;
      FUN_100db26c();
      local_68 = (int *)FUN_100fab98(0);
      FUN_100fac48(local_68,local_64,10);
      piVar7 = local_68;
      iVar6 = *local_68;
      iVar3 = FUN_100012c0(iVar1 + 9);
      FUN_10117884((int)piVar7 + (int)*(short *)(iVar6 + 0x170),iVar1 + 9,iVar3 + 1);
      local_68 = (int *)FUN_100f57c8(local_68);
      FUN_10117884((int)*(int **)(iVar8 + 0x148) +
                   (int)*(short *)(**(int **)(iVar8 + 0x148) + 0x2b8));
      FUN_10002568(local_64,0x44415420,0x273a,*(int *)(local_8f4 + -0x1090) + 0x68);
      FUN_100db328();
      FUN_100002a0(local_64);
    }
    _DAT_41820010 = local_78;
  }
  else {
    local_68 = (int *)FUN_100f57c8(local_68);
    iVar1 = FUN_100ef2f8(local_64);
    if (iVar1 == 0) {
      local_64 = FUN_100ef510(local_64);
    }
    FUN_100db158((int)local_80,local_7c);
  }
  return;
}



// Function: FUN_100a6060 at 100a6060
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6060(void)

{
  undefined1 uVar4;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar5;
  int local_15c;
  undefined4 local_138;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = (undefined1 *)0x0;
  local_24 = 0;
  local_20 = 0;
  piVar5 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x148);
  FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x2b8));
  uVar4 = FUN_100f1574(1);
  uVar1 = FUN_10001fc8(0x2ee1);
  **(undefined1 **)(local_15c + -0x3c) = uVar4;
  FUN_100db26c();
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar2 = FUN_10000090(auStack_130);
  if (iVar2 == 0) {
    uVar3 = FUN_100fab98(0);
    FUN_100fac48(uVar3,uVar1,1000);
    FUN_10058c64(uVar3,**(undefined4 **)(local_15c + -0x544));
    FUN_100f57c8(uVar3);
    uVar3 = FUN_100b1c84(*(undefined4 *)(local_15c + -0xe4c));
    FUN_10002568(uVar1,0x53434e20,10000,uVar3);
    FUN_100db328();
    FUN_100002a0(uVar1);
    _DAT_41820010 = local_28;
  }
  else {
    FUN_100f57c8(local_138);
    iVar2 = FUN_100ef2f8(uVar1);
    if (iVar2 == 0) {
      FUN_100ef510(uVar1);
    }
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100a6204 at 100a6204
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6204(void)

{
  FUN_100a4ae8();
  FUN_100514d8(_DAT_80410014,0x5c);
  FUN_100a7248();
  FUN_100ab334();
  FUN_100514d8(_DAT_80410014,0x5e);
  FUN_100a88d0();
  FUN_100514d8(_DAT_80410014,0x60);
  FUN_100a4e0c();
  FUN_100514d8(_DAT_80410014,0x62);
  FUN_100a52b8();
  FUN_100a6060();
  return;
}



// Function: FUN_100a6298 at 100a6298
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a6298(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c;
  
  piVar3 = *(int **)(*(int *)(_DAT_57c407bd + 0x88) + 0x14c);
  FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2b8));
  iVar1 = FUN_10052184(0x53434e20,30000,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (_DAT_4bffe775 == 0) {
      _DAT_4bffe775 = FUN_100f1640(0x2fcc);
    }
    FUN_1005668c(iVar1,_DAT_4bffe775);
    FUN_100523a8(iVar1,1);
    *(undefined2 *)(_DAT_4bffe775 + 0x162) = **(undefined2 **)(local_2c + -0x143c);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100a6364 at 100a6364
// Size: 348 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6364(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short local_28;
  short local_26;
  
  iVar1 = FUN_1005f230(1,5,3);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_1005f230(1,8,0xffffffff);
      sVar3 = FUN_1005f230(1,3,0);
      local_26 = param_1 + sVar3 * *(short *)(_DAT_4bfde0cd + iVar2 * 4 + 0xbc);
      iVar2 = FUN_1005f230(1,8,0xffffffff);
      sVar3 = FUN_1005f230(1,3,0);
      local_28 = param_2 + sVar3 * *(short *)(_DAT_4bfde0cd + iVar2 * 4 + 0xbe);
      FUN_10051dc8(&local_26,&local_28);
      iVar2 = _DAT_7c7dd9d6 + local_28 * 0x70 + (int)local_26;
      if (*(char *)(iVar2 + 0x34a) == '\a') {
        *(undefined1 *)(iVar2 + 0x34a) = 8;
        FUN_10051d60((int)local_26,(int)local_28);
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < iVar1);
  }
  return;
}



// Function: FUN_100a64c0 at 100a64c0
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a64c0(void)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  sVar7 = 0;
  bVar3 = false;
  do {
    iVar4 = FUN_1005f230(1,0x66,5);
    iVar5 = FUN_1005f230(1,0x92,5);
    sVar2 = (short)iVar5;
    sVar1 = (short)iVar4;
    if (*(char *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) == '\a') {
      if (sVar7 < 4) {
        iVar6 = FUN_1009ffa4(iVar4,iVar5,3);
        if (iVar6 != 0) {
          bVar3 = true;
        }
        iVar6 = FUN_1009ffa4((int)(short)(sVar1 + 1),iVar5,3);
        if (iVar6 != 0) {
          bVar3 = true;
        }
        iVar6 = FUN_1009ffa4(iVar4,(int)(short)(sVar2 + 1),3);
        if (iVar6 != 0) {
          bVar3 = true;
        }
        iVar6 = FUN_1009ffa4((int)(short)(sVar1 + 1),(int)(short)(sVar2 + 1),3);
        if (iVar6 != 0) {
          bVar3 = true;
        }
        sVar7 = sVar7 + 1;
      }
      else {
        bVar3 = true;
      }
    }
  } while (!bVar3);
  *(undefined1 *)(_DAT_7c7dd9d6 + iVar5 * 0x70 + iVar4 + 0x34a) = 8;
  FUN_10051d60(iVar4,iVar5);
  FUN_100a6364(iVar4,iVar5);
  FUN_100a6364((int)(short)(sVar1 + 1),(int)(short)(sVar2 + 1));
  FUN_100a6364((int)(short)(sVar1 + -1),(int)(short)(sVar2 + -1));
  FUN_100a6364((int)(short)(sVar1 + -1),(int)(short)(sVar2 + 1));
  FUN_100a6364((int)(short)(sVar1 + 1),(int)(short)(sVar2 + -1));
  return;
}



// Function: FUN_100a66a8 at 100a66a8
// Size: 96 bytes

void FUN_100a66a8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1005f230(1,3,0);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_100a64c0();
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < iVar1);
  }
  return;
}



// Function: FUN_100a6708 at 100a6708
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6708(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar3 = 0;
    do {
      iVar2 = _DAT_7c7dd9d6 + iVar3 * 0x70 + iVar1;
      if (((*(char *)(iVar2 + 0x34a) == '\n') && (*(char *)(iVar2 + 0x2da) != '\n')) &&
         (*(char *)(iVar2 + 0x349) != '\n')) {
        *(short *)(_DAT_4bfde0cd + 0xa84) = *(short *)(_DAT_4bfde0cd + 0xa84) + 1;
        *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x1602) * 0x42 + 0x1604) =
             (short)iVar1;
        *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x1602) * 0x42 + 0x1606) =
             (short)iVar3;
        *(short *)(_DAT_4bffe775 + 0x1602) = *(short *)(_DAT_4bffe775 + 0x1602) + 1;
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0x9c);
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 0x70);
  return;
}



// Function: FUN_100a67e0 at 100a67e0
// Size: 776 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a67e0(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  iVar6 = _FUN_10116820;
  sVar9 = 0;
  bVar5 = false;
  do {
    iVar7 = FUN_1005f230(1,0x66,5);
    iVar8 = FUN_1005f230(1,0x92,5);
    bVar4 = true;
    iVar11 = 0;
    do {
      iVar10 = _DAT_7c7dd9d6 + (iVar8 + *(short *)(iVar11 * 2 + iVar6)) * 0x70;
      if (*(char *)(iVar10 + iVar7 + *(short *)(&DAT_4e800020 + iVar11 * 2) + 0x34a) == '\x03') {
LAB_100a68a8:
        bVar4 = false;
      }
      else {
        cVar1 = *(char *)(iVar7 + *(short *)(&DAT_4e800020 + iVar11 * 2) + iVar10 + 0x34a);
        if ((((cVar1 == '\x02') || (cVar1 == '\n')) || (cVar1 == '\x06')) || (cVar1 == '\x05'))
        goto LAB_100a68a8;
      }
      sVar2 = (short)iVar7;
      sVar3 = (short)iVar8;
      iVar10 = FUN_1009ffa4((int)(short)(sVar2 + *(short *)(&DAT_4e800020 + iVar11 * 2)),
                            (int)(short)(sVar3 + *(short *)(iVar11 * 2 + iVar6)),10);
      if (iVar10 != 0) {
        bVar4 = false;
      }
      iVar10 = FUN_1009ffa4((int)(short)(sVar2 + *(short *)(&DAT_4e800020 + iVar11 * 2) + 1),
                            (int)(short)(sVar3 + *(short *)(iVar11 * 2 + iVar6) + 1),10);
      if (iVar10 != 0) {
        bVar4 = false;
      }
      iVar10 = FUN_1009ffa4((int)(short)(sVar2 + *(short *)(&DAT_4e800020 + iVar11 * 2) + -1),
                            (int)(short)(sVar3 + *(short *)(iVar11 * 2 + iVar6) + -1),10);
      if (iVar10 != 0) {
        bVar4 = false;
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < 4);
    if (bVar4) {
      if (sVar9 < 4) {
        iVar11 = FUN_1009ffa4(iVar7,iVar8,3);
        if (iVar11 != 0) {
          bVar5 = true;
        }
        iVar11 = FUN_1009ffa4((int)(short)(sVar2 + 1),iVar8,3);
        if (iVar11 != 0) {
          bVar5 = true;
        }
        iVar11 = FUN_1009ffa4(iVar7,(int)(short)(sVar3 + 1),3);
        if (iVar11 != 0) {
          bVar5 = true;
        }
        iVar11 = FUN_1009ffa4((int)(short)(sVar2 + 1),(int)(short)(sVar3 + 1),3);
        if (iVar11 != 0) {
          bVar5 = true;
        }
        sVar9 = sVar9 + 1;
      }
      else {
        bVar5 = true;
      }
    }
    if (bVar5) {
      *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x1602) * 0x42 + 0x1604) = sVar2;
      *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x1602) * 0x42 + 0x1606) = sVar3;
      *(short *)(_DAT_4bffe775 + 0x1602) = *(short *)(_DAT_4bffe775 + 0x1602) + 1;
      iVar11 = 0;
      do {
        iVar10 = iVar8 + *(short *)(iVar11 * 2 + iVar6);
        sVar9 = *(short *)(&DAT_4e800020 + iVar11 * 2);
        *(undefined1 *)(_DAT_7c7dd9d6 + iVar10 * 0x70 + iVar7 + sVar9 + 0x34a) = 10;
        FUN_10051d60((int)(short)(iVar7 + sVar9),(int)(short)iVar10);
        iVar11 = (int)(short)((short)iVar11 + 1);
      } while (iVar11 < 4);
      return;
    }
  } while( true );
}



// Function: FUN_100a6ae8 at 100a6ae8
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ae8(void)

{
  int iVar1;
  
  *(undefined2 *)(_DAT_4bffe775 + 0x1602) = 0;
  FUN_100a6708();
  FUN_10049e68();
  FUN_10025f98();
  iVar1 = (int)*(short *)(_DAT_4bfde0cd + 0xa84);
  if (iVar1 < *(short *)(_DAT_4bfde0cd + 0x2a)) {
    do {
      FUN_100a67e0(iVar1);
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < *(short *)(_DAT_4bfde0cd + 0x2a));
  }
  return;
}



// Function: FUN_100a6b68 at 100a6b68
// Size: 976 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6b68(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  short *psVar4;
  short sVar8;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar9;
  
  psVar4 = FUN_10116820;
  bVar3 = false;
  if (*FUN_10116820 == -1) {
    sVar8 = FUN_1005f230(1,0x10,0xffffffff);
    *psVar4 = sVar8;
  }
  uVar9 = (uint)*psVar4;
  sVar8 = 1;
  do {
    iVar5 = FUN_1005f230(1,0x14,(int)(short)((short)((int)((uVar9 + (((int)uVar9 >> 2) +
                                                                    (uint)((int)uVar9 < 0 &&
                                                                          (uVar9 & 3) != 0)) * -4) *
                                                          0x70) >> 2) + 3));
    iVar6 = FUN_1005f230(1,0x1f,(int)(short)((short)((int)((((int)uVar9 >> 2) +
                                                           (uint)((int)uVar9 < 0 && (uVar9 & 3) != 0
                                                                 )) * 0x9c) >> 2) + 3));
    if ((((int)*(char *)(_DAT_7c7dd9d6 + iVar6 * 0x70 + iVar5 + 0x34a) == (int)param_1) &&
        (iVar7 = FUN_1009ffa4(iVar5,iVar6,10), iVar7 == 0)) &&
       (iVar7 = FUN_1009ffa4(iVar5,iVar6,0xb), iVar7 == 0)) {
      iVar7 = FUN_1009ffa4((int)(short)((short)iVar5 + -3),iVar6,0xb);
      if ((iVar7 == 0) &&
         (iVar7 = FUN_1009ffa4((int)(short)((short)iVar5 + 3),iVar6,0xb), iVar7 == 0)) {
        iVar7 = FUN_1009ffa4(iVar5,(int)(short)((short)iVar6 + -3),0xb);
        if ((iVar7 == 0) &&
           (iVar7 = FUN_1009ffa4(iVar5,(int)(short)((short)iVar6 + 3),0xb), iVar7 == 0)) {
          bVar3 = true;
        }
      }
    }
    if (bVar3) goto LAB_100a6eec;
    bVar1 = sVar8 < 0x32;
    sVar8 = sVar8 + 1;
  } while (bVar1);
  bVar3 = false;
  sVar8 = 1;
  do {
    iVar5 = FUN_1005f230(1,0x66,5);
    iVar6 = FUN_1005f230(1,0x92,5);
    if ((((int)*(char *)(_DAT_7c7dd9d6 + iVar6 * 0x70 + iVar5 + 0x34a) == (int)param_1) &&
        (iVar7 = FUN_1009ffa4(iVar5,iVar6,10), iVar7 == 0)) &&
       (iVar7 = FUN_1009ffa4(iVar5,iVar6,0xb), iVar7 == 0)) {
      bVar3 = true;
    }
    if (bVar3) goto LAB_100a6eec;
    bVar1 = sVar8 < 0x32;
    sVar8 = sVar8 + 1;
  } while (bVar1);
  FUN_1005f230(1,0x66,5);
  FUN_1005f230(1,0x92,5);
  bVar3 = false;
  sVar8 = 1;
  do {
    iVar5 = FUN_1005f230(1,0x66,5);
    iVar6 = FUN_1005f230(1,0x92,5);
    cVar2 = *(char *)(_DAT_7c7dd9d6 + iVar6 * 0x70 + iVar5 + 0x34a);
    if ((cVar2 != '\n') && (cVar2 != '\v')) {
      bVar3 = true;
    }
  } while ((!bVar3) && (bVar1 = sVar8 < 0x32, sVar8 = sVar8 + 1, bVar1));
LAB_100a6eec:
  *param_2 = (short)iVar5;
  *param_3 = (short)iVar6;
  uVar9 = (int)*psVar4 + 1;
  *psVar4 = (short)uVar9 +
            (short)(((int)uVar9 >> 4) + (uint)((int)uVar9 < 0 && (uVar9 & 0xf) != 0)) * -0x10;
  return;
}



// Function: FUN_100a6f38 at 100a6f38
// Size: 784 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6f38(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  undefined **local_16c;
  undefined1 auStack_148 [16];
  short local_138;
  short local_136;
  undefined1 auStack_134 [256];
  
  *(undefined2 *)(_DAT_4bffe775 + 0x810) = 0x28;
  sVar8 = 0;
  iVar9 = 0;
  do {
    *(undefined2 *)(_DAT_4bffe775 + iVar9 * 0x20 + 0x814) = 0xffff;
    iVar6 = iVar9 * 0x20 + _DAT_4bffe775;
    *(undefined2 *)(iVar6 + 0x812) = *(undefined2 *)(iVar6 + 0x814);
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x28);
  iVar9 = 0;
  ppuVar1 = &.TVect::OCECToRString;
  if (0 < *(short *)(_DAT_4bffe775 + 0x810)) {
    do {
      sVar5 = (short)((iVar9 * 10) / (int)*(short *)(_DAT_4bffe775 + 0x810));
      if (sVar8 != sVar5) {
        FUN_100514d8(_DAT_80410014,(int)(short)(sVar5 + 0x46));
        sVar8 = sVar5;
      }
      FUN_100a6b68(7,&local_136,&local_138);
      iVar6 = iVar9 * 0x20;
      *(short *)(_DAT_4bffe775 + iVar6 + 0x812) = local_136;
      *(short *)(iVar6 + _DAT_4bffe775 + 0x814) = local_138;
      *(undefined1 *)(_DAT_7c7dd9d6 + local_138 * 0x70 + (int)local_136 + 0x34a) = 0xb;
      if (*(char *)(iVar6 + _DAT_4bffe775 + 0x82a) == '\x01') {
        iVar6 = FUN_1005f230(1,10,0xffffffff);
        puVar7 = ppuVar1[-0x422];
        FUN_10001dd0(auStack_134,puVar7 + 0x44,_DAT_4bfde0cd + iVar6 * 10 + 0x1000);
        FUN_10001e78(_DAT_4bffe775 + iVar9 * 0x20 + 0x816,auStack_134);
        FUN_10001dd0(auStack_134,puVar7 + 0x50,iVar9,iVar9 * 0x20 + _DAT_4bffe775 + 0x816);
      }
      else {
        iVar2 = FUN_1005f230(1,(int)*(short *)(_DAT_4bfde0cd + 0xed2),0xffffffff);
        iVar3 = FUN_1005f230(1,10,0xffffffff);
        iVar4 = FUN_1005f230(1,10,0xffffffff);
        FUN_10001dd0(auStack_148,ppuVar1[-0x422],_DAT_4bfde0cd + iVar4 * 10 + 0xf38,
                     _DAT_4bfde0cd + iVar3 * 10 + 0xf9c);
        FUN_10001dd0(auStack_134,_DAT_4bfde0cd + iVar2 * 0x14 + 0xed4,auStack_148);
        FUN_10001e78(iVar6 + _DAT_4bffe775 + 0x816,auStack_134);
        FUN_10001dd0(auStack_134,local_16c[-0x422] + 8,iVar9,iVar6 + _DAT_4bffe775 + 0x816);
      }
      FUN_10001e78(_DAT_4bfde0cd + *(short *)(_DAT_4bfde0cd + 0x1066) + 0x3e96,auStack_134);
      sVar5 = FUN_100012c0(auStack_134);
      *(short *)(_DAT_4bfde0cd + 0x1066) = *(short *)(_DAT_4bfde0cd + 0x1066) + sVar5;
      iVar9 = (int)(short)((short)iVar9 + 1);
      ppuVar1 = local_16c;
    } while (iVar9 < *(short *)(_DAT_4bffe775 + 0x810));
  }
  return;
}



// Function: FUN_100a7248 at 100a7248
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7248(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar5 = 0;
    do {
      if (*(uint *)(_DAT_38800000 + iVar3 * 0xe0 + iVar5 * 2) >> 0x18 == 0x60) {
        iVar1 = iVar4 * 0x42;
        *(short *)(_DAT_4bffe775 + iVar1 + 0x1604) = (short)iVar5;
        *(short *)(iVar1 + _DAT_4bffe775 + 0x1606) = (short)iVar3;
        *(undefined1 *)(iVar1 + _DAT_4bffe775 + 0x1619) = 0xf;
        uVar2 = FUN_1005f230(1,3,2);
        *(undefined1 *)(iVar1 + _DAT_4bffe775 + 0x1618) = uVar2;
        iVar4 = (int)(short)((short)iVar4 + 1);
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 0x70);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x9c);
  *(short *)(_DAT_4bffe775 + 0x1602) = (short)iVar4;
  return;
}



// Function: FUN_100a7344 at 100a7344
// Size: 308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a7344(short param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  short local_28;
  short local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  uVar1 = (uint)param_1;
  local_20 = (short)((uVar1 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * -4)
                    * 7) * 4;
  local_1e = ((short)((int)uVar1 >> 2) + (ushort)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 0x4e;
  local_1c = 0x1c;
  local_1a = 0x4e;
  sVar5 = 0;
  do {
    iVar2 = FUN_1005f230(1,(int)*(short *)(_DAT_4bffe775 + 0x1602),0xffffffff);
    iVar3 = _DAT_4bffe775 + iVar2 * 0x42;
    FUN_1002269c(&local_28,(int)*(short *)(iVar3 + 0x1604),(int)*(short *)(iVar3 + 0x1606));
    if (((int)local_28 < (int)local_20) || ((int)local_1c + (int)local_20 <= (int)local_28)) {
LAB_100a7444:
      bVar4 = false;
    }
    else {
      if (((int)local_26 < (int)local_1e) || ((int)local_1e + (int)local_1a <= (int)local_26))
      goto LAB_100a7444;
      bVar4 = true;
    }
    if ((200 < sVar5) || (sVar5 = sVar5 + 1, bVar4)) {
      return iVar2;
    }
  } while( true );
}



// Function: FUN_100a7480 at 100a7480
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7480(short *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar5;
  int iVar4;
  short sVar6;
  
  iVar1 = (int)param_2;
  if (iVar1 < 6) {
    sVar6 = 0x62;
    sVar5 = (short)(iVar1 << 1);
  }
  else {
    sVar6 = 0x80;
    sVar5 = (short)(iVar1 << 1) + -0xc;
  }
  iVar2 = (int)(short)(sVar6 + sVar5);
  iVar1 = param_1[1] * 0xe0;
  iVar3 = *param_1 * 2;
  *(uint *)(_DAT_38800000 + iVar1 + iVar3) =
       iVar2 << 0x18 | *(uint *)(_DAT_38800000 + iVar1 + iVar3) & 0xffffff;
  iVar4 = iVar1 + _DAT_38800000 + iVar3;
  *(uint *)(iVar4 + 2) = (iVar2 + 1) * 0x1000000 | *(uint *)(iVar4 + 2) & 0xffffff;
  iVar4 = iVar1 + _DAT_38800000 + iVar3;
  *(uint *)(iVar4 + 0xe0) = (iVar2 + 0x10) * 0x1000000 | *(uint *)(iVar4 + 0xe0) & 0xffffff;
  iVar3 = iVar1 + _DAT_38800000 + iVar3;
  *(uint *)(iVar3 + 0xe2) = (iVar2 + 0x11) * 0x1000000 | *(uint *)(iVar3 + 0xe2) & 0xffffff;
  return;
}



// Function: FUN_100a7544 at 100a7544
// Size: 700 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7544(void)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  short sVar7;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar8;
  int iVar9;
  int iVar10;
  short local_48 [10];
  
  sVar7 = 0;
LAB_100a7564:
  sVar7 = sVar7 + 1;
  iVar10 = 0;
  do {
    local_48[iVar10] = 0;
    *(undefined2 *)(_DAT_4bffe775 + iVar10 * 0x14 + 0x18a) = 0xff9c;
    *(undefined2 *)(iVar10 * 0x14 + _DAT_4bffe775 + 0x18c) = 0xff9c;
    iVar10 = (int)(short)((short)iVar10 + 1);
  } while (iVar10 < 8);
  iVar10 = 0;
  do {
    bVar2 = false;
    do {
      iVar4 = FUN_1005f230(1,8,0xffffffff);
      if (local_48[iVar4] == 0) {
        local_48[iVar4] = 1;
        bVar2 = true;
      }
    } while (!bVar2);
    bVar2 = false;
    sVar8 = 0;
    do {
      iVar5 = FUN_100a7344(iVar4);
      iVar9 = _DAT_4bffe775 + iVar5 * 0x42;
      sVar1 = *(short *)(iVar9 + 0x1604);
      if ((((0x3f < sVar1) && (sVar1 < 0x31)) && (sVar1 = *(short *)(iVar9 + 0x1606), 0x55 < sVar1))
         && (sVar1 < 0x47)) {
        iVar9 = 0;
        bVar3 = true;
        do {
          iVar6 = FUN_10003768((int)*(short *)(_DAT_4bffe775 + iVar5 * 0x42 + 0x1604) -
                               (int)*(short *)(_DAT_4bffe775 + iVar9 * 0x14 + 0x18a));
          if ((iVar6 < 0x14) ||
             (iVar6 = FUN_10003768((int)*(short *)(iVar5 * 0x42 + _DAT_4bffe775 + 0x1606) -
                                   (int)*(short *)(_DAT_4bffe775 + iVar9 * 0x14 + 0x18c)),
             iVar6 < 0x14)) {
            bVar3 = false;
            break;
          }
          iVar9 = (int)(short)((short)iVar9 + 1);
        } while (iVar9 < 8);
        if (bVar3) {
          bVar2 = true;
        }
      }
      sVar8 = sVar8 + 1;
      if (bVar2) {
        if (sVar8 < 100) goto LAB_100a770c;
        break;
      }
    } while (sVar8 < 100);
    if (sVar7 < 10) goto LAB_100a7564;
LAB_100a770c:
    *(undefined2 *)(_DAT_4bfde0cd + iVar4 * 2 + 0x1d72) =
         *(undefined2 *)(_DAT_4bfde0cd + iVar10 * 2 + 0x1d62);
    *(undefined2 *)(_DAT_4bffe775 + iVar10 * 0x14 + 0x18a) =
         *(undefined2 *)(_DAT_4bffe775 + iVar5 * 0x42 + 0x1604);
    *(undefined2 *)(iVar10 * 0x14 + _DAT_4bffe775 + 0x18c) =
         *(undefined2 *)(iVar5 * 0x42 + _DAT_4bffe775 + 0x1606);
    iVar10 = (int)(short)((short)iVar10 + 1);
    if (7 < iVar10) {
      iVar10 = 0;
      do {
        iVar4 = _DAT_4bffe775 + iVar10 * 0x14;
        iVar4 = FUN_1002be50((int)*(short *)(iVar4 + 0x18a),(int)*(short *)(iVar4 + 0x18c));
        *(char *)(_DAT_4bffe775 + iVar4 * 0x42 + 0x1619) = (char)iVar10;
        FUN_100a7480(iVar4 * 0x42 + _DAT_4bffe775 + 0x1604,iVar10);
        iVar10 = (int)(short)((short)iVar10 + 1);
      } while (iVar10 < 8);
      return;
    }
  } while( true );
}



// Function: FUN_100a7804 at 100a7804
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a7804(short param_1)

{
  int iVar1;
  
  if (*(char *)(_DAT_4bffe775 + param_1 * 0x42 + 0x1619) == '\x0f') {
    iVar1 = FUN_1005f230(1,4,0xffffffff);
    if (_DAT_90010008 != 0) {
      iVar1 = (int)(short)((short)iVar1 + 4);
    }
    if (_DAT_9421ffc0 != 0) {
      iVar1 = (int)(short)((short)iVar1 + 2);
    }
    if (_DAT_28030000 != 0) {
      iVar1 = (int)(short)((short)iVar1 + -1);
    }
    if (_DAT_40820008 != 0) {
      iVar1 = (int)(short)((short)iVar1 + -2);
    }
    if (8 < iVar1) {
      iVar1 = 9;
    }
    if (iVar1 < 1) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 9;
  }
  return iVar1;
}



// Function: FUN_100a78f0 at 100a78f0
// Size: 812 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a78f0(short param_1)

{
  int iVar1;
  short sVar2;
  int local_54;
  undefined1 local_30 [24];
  
  iVar1 = FUN_1005f230(1,10,0);
  if (iVar1 < 7) {
    sVar2 = 3;
  }
  else {
    sVar2 = 2;
  }
  local_30[0] = DAT_bbc20080;
  iVar1 = FUN_1005f230(1,0x14,0xffffffff);
  FUN_10001e78(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xa86);
  if (sVar2 == 3) {
    iVar1 = FUN_1005f230(1,0x14,0xffffffff);
    FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xb4e);
  }
  iVar1 = FUN_1005f230(1,10,0);
  if (iVar1 < 7) {
    if (**(short **)(local_54 + -0x106c) == 0) {
      if (**(short **)(local_54 + -0x1070) == 0) {
        if (**(short **)(local_54 + -0x1078) == 0) {
          if (**(short **)(local_54 + -0x1068) == 0) {
            iVar1 = FUN_1005f230(1,10,0);
            if (iVar1 < 5) {
              iVar1 = FUN_1005f230(1,10,0xffffffff);
              FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xe6e);
            }
            else {
              iVar1 = FUN_1005f230(1,0x14,0xffffffff);
              FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xc16);
            }
          }
          else {
            iVar1 = FUN_1005f230(1,10,0xffffffff);
            FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xe0a);
          }
        }
        else {
          iVar1 = FUN_1005f230(1,10,0xffffffff);
          FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xd42);
        }
      }
      else {
        iVar1 = FUN_1005f230(1,10,0xffffffff);
        FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xcde);
      }
    }
    else {
      iVar1 = FUN_1005f230(1,10,0xffffffff);
      FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xda6);
    }
  }
  else {
    iVar1 = FUN_1005f230(1,0x14,0xffffffff);
    FUN_100003a8(local_30,_DAT_4bfde0cd + iVar1 * 10 + 0xc16);
  }
  FUN_10001e78(**(int **)(local_54 + -0x544) + param_1 * 0x42 + 0x1608,local_30);
  return;
}



// Function: FUN_100a7c1c at 100a7c1c
// Size: 964 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7c1c(short param_1,short param_2)

{
  short sVar5;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  undefined1 auStack_12c [256];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  
  iVar7 = (int)param_1;
  FUN_100a78f0(iVar7);
  sVar5 = FUN_1005f230(1,8,0);
  *(short *)(_DAT_4bffe775 + iVar7 * 0x42 + 0x162e) = param_2 * 2 + sVar5 + 0xe;
  iVar1 = FUN_1005f230(1,3,(int)(short)(param_2 + -2));
  iVar2 = FUN_1005f230(1,3,(int)(short)(param_2 + -2));
  local_2c = (undefined2)iVar1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  local_2a = (undefined2)iVar1;
  if (8 < iVar1) {
    iVar1 = 9;
  }
  local_28 = (undefined2)iVar2;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  local_26 = (undefined2)iVar2;
  if (8 < iVar2) {
    iVar2 = 9;
  }
  if ((((_DAT_28030000 == 0) && (_DAT_40820008 == 0)) && (_DAT_48000054 == 0)) ||
     (iVar3 = FUN_1005f230(1,100,0), 0x4f < iVar3)) {
    iVar3 = FUN_1005f230(1,100,0);
    if (iVar3 < 0x32) {
      iVar3 = FUN_1005f230(1,10,0xffffffff);
      iVar6 = _DAT_4bfde0cd + iVar3 * 0x10 + 0x16a8;
      iVar3 = FUN_1005f230(1,10,0xffffffff);
      iVar3 = _DAT_4bfde0cd + iVar3 * 0x10 + 0x1748;
      FUN_1005f230(1,10,0xffffffff);
    }
    else {
      iVar3 = FUN_1005f230(1,10,0xffffffff);
      iVar6 = _DAT_4bfde0cd + iVar3 * 0x10 + 0x14c8;
      iVar3 = FUN_1005f230(1,10,0xffffffff);
      iVar3 = _DAT_4bfde0cd + iVar3 * 0x10 + 0x1568;
      FUN_1005f230(1,10,0xffffffff);
    }
  }
  else {
    if (_DAT_40820008 == 0) {
      if (_DAT_48000054 == 0) {
        FUN_1005f230(1,4,0xffffffff);
      }
      else {
        FUN_1005f230(1,4,3);
      }
    }
    else {
      FUN_1005f230(1,2,7);
    }
    iVar3 = FUN_1005f230(1,10,0xffffffff);
    iVar6 = _DAT_4bfde0cd + iVar3 * 0x10 + 0x12e8;
    iVar3 = FUN_1005f230(1,10,0xffffffff);
    iVar3 = _DAT_4bfde0cd + iVar3 * 0x10 + 5000;
  }
  iVar4 = FUN_1005f230(1,3,0xffffffff);
  FUN_10001dd0(auStack_12c,0xbbc20084,iVar7,_DAT_4bffe775 + iVar7 * 0x42 + 0x1608,
               _DAT_4bfde0cd + iVar1 * 0x30 + iVar4 * 0x10 + 0x1068,
               _DAT_4bfde0cd + iVar2 * 0x10 + 0x1248,iVar6,iVar3);
  FUN_10001e78(_DAT_4bfde0cd + *(short *)(_DAT_4bfde0cd + 0x1064) + 0x1f56,auStack_12c);
  sVar5 = FUN_100012c0(auStack_12c);
  *(short *)(_DAT_4bfde0cd + 0x1064) = *(short *)(_DAT_4bfde0cd + 0x1064) + sVar5;
  return;
}



// Function: FUN_100a7fe0 at 100a7fe0
// Size: 1560 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7fe0(short param_1,ushort param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = (int)param_1;
  iVar4 = _DAT_4bffe775 + iVar7 * 0x42;
  iVar6 = (int)(short)((short)(((int)*(short *)(iVar4 + 0x1604) << 2) / 0x70) +
                      (short)(((int)*(short *)(iVar4 + 0x1606) << 1) / 0x9c << 2));
  sVar2 = FUN_1005f230(1,4,0xffffffff);
  sVar2 = ((short)param_2 >> 1) + (ushort)((short)param_2 < 0 && (param_2 & 1) != 0) + sVar2;
  iVar4 = 0;
  if (_DAT_28030000 != 0) {
    sVar2 = sVar2 + 1;
  }
  if (_DAT_48000054 != 0) {
    sVar2 = sVar2 + 1;
  }
  iVar8 = (int)sVar2;
  if (3 < iVar8) {
    iVar8 = 4;
  }
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  FUN_10048ccc();
  iVar9 = 0;
  do {
    iVar3 = _DAT_4bfde0cd + iVar9 * 0x10;
    FUN_1004a178((int)*(short *)(iVar3 + 0x1d82),iVar3 + 0x1d8c,iVar3 + 0x1d8a,iVar3 + 0x1d8e,
                 iVar3 + 0x1d90);
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 0x1d);
  FUN_10049010();
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      sVar2 = *(short *)(_DAT_4bfde0cd + iVar9 * 0x10 + 0x1d82);
      if ((_DAT_60640000 != 0) || (*(char *)(_DAT_281f0000 + sVar2 * 6 + 4) == '\0')) {
        iVar5 = _DAT_4bfde0cd + iVar9 * 0x10;
        iVar3 = FUN_1005f230(1,10,0xffffffff);
        if (iVar3 < *(short *)(iVar5 + 0x1d84)) {
          bVar1 = *(short *)(iVar5 + 0x1d88) == 7;
          if ((*(short *)(_DAT_4bfde0cd + iVar9 * 0x10 + 0x1d88) == 4) && (_DAT_28030000 != 0)) {
            bVar1 = true;
          }
          if ((*(short *)(_DAT_4bfde0cd + iVar9 * 0x10 + 0x1d88) == 5) && (_DAT_48000054 != 0)) {
            bVar1 = true;
          }
          if ((*(short *)(_DAT_4bfde0cd + iVar9 * 0x10 + 0x1d88) == 3) && (_DAT_90010008 != 0)) {
            bVar1 = true;
          }
          if (*(short *)(_DAT_4bfde0cd + iVar9 * 0x10 + 0x1d86) ==
              *(short *)(_DAT_4bfde0cd + iVar6 * 2 + 0x1d72)) {
            bVar1 = true;
          }
          if ((sVar2 == 5) && (_DAT_90010008 == 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            iVar3 = iVar7 * 0x42;
            *(char *)(_DAT_4bffe775 + iVar3 + iVar4 + 0x161a) = (char)sVar2;
            iVar5 = iVar9 * 0x10;
            *(char *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x161e) =
                 (char)*(undefined2 *)(_DAT_4bfde0cd + iVar5 + 0x1d8c);
            *(char *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x162a) =
                 (char)*(undefined2 *)(iVar5 + _DAT_4bfde0cd + 0x1d8e);
            *(char *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x1622) =
                 (char)*(undefined2 *)(iVar5 + _DAT_4bfde0cd + 0x1d8a);
            *(char *)(iVar3 + _DAT_4bffe775 + iVar4 + 0x1626) =
                 (char)*(undefined2 *)(iVar5 + _DAT_4bfde0cd + 0x1d90);
            iVar4 = (int)(short)((short)iVar4 + 1);
          }
        }
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while ((iVar9 < 0x1d) && (iVar4 < iVar8));
  }
  if (iVar4 == 0) {
    iVar4 = iVar7 * 0x42;
    *(char *)(_DAT_4bffe775 + iVar4 + 0x161a) = (char)*(undefined2 *)(_DAT_4bfde0cd + 0x1d82);
    *(char *)(iVar4 + _DAT_4bffe775 + 0x161e) = (char)*(undefined2 *)(_DAT_4bfde0cd + 0x1d8c);
    *(char *)(iVar4 + _DAT_4bffe775 + 0x162a) = (char)*(undefined2 *)(_DAT_4bfde0cd + 0x1d8e);
    *(char *)(iVar4 + _DAT_4bffe775 + 0x1622) = (char)*(undefined2 *)(_DAT_4bfde0cd + 0x1d8a);
    *(char *)(iVar4 + _DAT_4bffe775 + 0x1626) = (char)*(undefined2 *)(_DAT_4bfde0cd + 0x1d90);
    iVar4 = 1;
  }
  if (((6 < (short)param_2) && (iVar9 = FUN_1005f230(1,10,0xffffffff), iVar9 < 5)) && (iVar4 < 4)) {
    iVar3 = 0;
    iVar9 = iVar8;
    if (0 < iVar4) {
      do {
        iVar9 = iVar4;
        if (*(char *)(_DAT_281f0000 + *(char *)(_DAT_4bffe775 + iVar7 * 0x42 + iVar3 + 0x161a) * 6)
            != '\0') break;
        iVar3 = (int)(short)((short)iVar3 + 1);
        iVar9 = iVar8;
      } while (iVar3 < iVar4);
    }
    iVar8 = 0;
    if (iVar4 < iVar9) {
      while( true ) {
        iVar5 = _DAT_4bfde0cd + iVar8 * 0x10;
        iVar3 = *(short *)(iVar5 + 0x1d82) * 6;
        if (((*(char *)(_DAT_281f0000 + iVar3) != '\0') &&
            (*(char *)(_DAT_281f0000 + iVar3 + 4) == '\0')) &&
           ((((*(short *)(iVar5 + 0x1d86) == *(short *)(iVar6 * 2 + _DAT_4bfde0cd + 0x1d72) ||
              (*(short *)(iVar5 + 0x1d88) == 7)) ||
             ((*(short *)(iVar5 + 0x1d88) == 4 && (_DAT_28030000 != 0)))) ||
            ((*(short *)(_DAT_4bfde0cd + iVar8 * 0x10 + 0x1d88) == 5 && (_DAT_48000054 != 0))))))
        break;
        iVar8 = (int)(short)((short)iVar8 + 1);
        if ((0x1c < iVar8) || (iVar9 <= iVar4)) goto joined_r0x100a85a0;
      }
      iVar6 = iVar7 * 0x42;
      iVar8 = iVar8 * 0x10;
      *(char *)(_DAT_4bffe775 + iVar6 + iVar4 + 0x161a) =
           (char)*(undefined2 *)(_DAT_4bfde0cd + iVar8 + 0x1d82);
      *(char *)(iVar6 + _DAT_4bffe775 + iVar4 + 0x161e) =
           (char)*(undefined2 *)(iVar8 + _DAT_4bfde0cd + 0x1d8c);
      *(char *)(iVar6 + _DAT_4bffe775 + iVar4 + 0x162a) =
           (char)*(undefined2 *)(iVar8 + _DAT_4bfde0cd + 0x1d8e);
      *(char *)(iVar6 + _DAT_4bffe775 + iVar4 + 0x1622) =
           (char)*(undefined2 *)(iVar8 + _DAT_4bfde0cd + 0x1d8a);
      *(char *)(iVar6 + _DAT_4bffe775 + iVar4 + 0x1626) =
           (char)*(undefined2 *)(iVar8 + _DAT_4bfde0cd + 0x1d90);
      iVar4 = (int)(short)((short)iVar4 + 1);
    }
  }
joined_r0x100a85a0:
  for (; iVar4 < 4; iVar4 = (int)(short)((short)iVar4 + 1)) {
    *(undefined1 *)(_DAT_4bffe775 + iVar7 * 0x42 + iVar4 + 0x161a) = 0xff;
  }
  return;
}



// Function: FUN_100a85f8 at 100a85f8
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a85f8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  undefined1 auStack_60 [68];
  
  iVar1 = FUN_1005f230(2,3,0);
  sVar5 = 0;
  if (0 < iVar1) {
    do {
      sVar5 = sVar5 + 1;
      iVar2 = FUN_1005f230(1,(int)*(short *)(_DAT_4bffe775 + 0x1602),0xffffffff);
      iVar3 = FUN_10048c3c(iVar2);
      if (iVar3 < 4) {
        uVar4 = FUN_10032d4c();
        FUN_10049628(uVar4,auStack_60);
        iVar2 = iVar2 * 0x42;
        *(char *)(_DAT_4bffe775 + iVar2 + iVar3 + 0x161a) = (char)uVar4;
        *(char *)(iVar2 + _DAT_4bffe775 + iVar3 + 0x161e) = (char)auStack_60._24_2_;
        *(char *)(iVar2 + _DAT_4bffe775 + iVar3 + 0x162a) = (char)auStack_60._26_2_;
        *(char *)(iVar2 + _DAT_4bffe775 + iVar3 + 0x1622) = (char)auStack_60._22_2_;
        *(char *)(iVar2 + _DAT_4bffe775 + iVar3 + 0x1626) = (char)auStack_60._28_2_;
        iVar1 = (int)(short)((short)iVar1 + -1);
      }
    } while ((0 < iVar1) && (sVar5 < 100));
  }
  return;
}



// Function: FUN_100a8724 at 100a8724
// Size: 424 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8724(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [22];
  short local_4a;
  
  iVar7 = 0;
  do {
    iVar3 = _DAT_4bffe775 + iVar7 * 0x14;
    iVar3 = FUN_1002be50((int)*(short *)(iVar3 + 0x18a),(int)*(short *)(iVar3 + 0x18c));
    if (-1 < iVar3) {
      iVar2 = 3;
      do {
        iVar4 = iVar2;
        if (*(char *)(_DAT_4bffe775 + iVar3 * 0x42 + iVar2 + 0x161a) < '\0') break;
        iVar4 = (int)(short)((short)iVar2 + -1);
        bVar1 = iVar2 != 0;
        iVar2 = iVar4;
      } while (bVar1);
      if (iVar4 < 0) {
        iVar4 = 3;
      }
      sVar5 = 0;
      do {
        iVar2 = FUN_1005f230(1,0x1c,0xffffffff);
        if ((iVar2 != 5) && (*(char *)(_DAT_281f0000 + iVar2 * 6 + 4) == '\0')) {
          sVar5 = sVar5 + 1;
          iVar6 = 0;
          do {
            if (*(char *)(_DAT_4bffe775 + iVar3 * 0x42 + iVar6 + 0x161a) == iVar2) {
              if (iVar6 < 4) goto LAB_100a887c;
              break;
            }
            iVar6 = (int)(short)((short)iVar6 + 1);
          } while (iVar6 < 4);
          FUN_10049628(iVar2,auStack_60);
          if (4 < local_4a) {
            if (sVar5 < 0x28) {
              *(char *)(_DAT_4bffe775 + iVar3 * 0x42 + iVar4 + 0x161a) = (char)iVar2;
            }
            break;
          }
        }
LAB_100a887c:
      } while (sVar5 < 0x28);
    }
    iVar7 = (int)(short)((short)iVar7 + 1);
    if (7 < iVar7) {
      return;
    }
  } while( true );
}



// Function: FUN_100a88d0 at 100a88d0
// Size: 1208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a88d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
    do {
      _DAT_40820008 = 0;
      _DAT_48000054 = 0;
      _DAT_9421ffc0 = 0;
      _DAT_28030000 = 0;
      _DAT_90010008 = 0;
      iVar2 = iVar4 * 0x42;
      iVar1 = FUN_1009ffa4((int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1604),
                           (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),3);
      if ((((iVar1 != 0) ||
           (iVar1 = FUN_1009ffa4((int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1604) + 1),
                                 (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),3), iVar1 != 0)) ||
          (iVar1 = FUN_1009ffa4((int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1604),
                                (int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1606) + 1),3),
          iVar1 != 0)) ||
         (iVar2 = FUN_1009ffa4((int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1604) + 1),
                               (int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1606) + 1),3),
         iVar2 != 0)) {
        _DAT_90010008 = 1;
      }
      iVar2 = iVar4 * 0x42;
      iVar1 = FUN_1009ffa4((int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1604),
                           (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),4);
      if (((iVar1 != 0) ||
          (iVar1 = FUN_1009ffa4((int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1604) + 1),
                                (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),4), iVar1 != 0)) ||
         ((iVar1 = FUN_1009ffa4((int)*(short *)(iVar2 + _DAT_4bffe775 + 0x1604),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),4),
          iVar1 != 0 ||
          (iVar2 = FUN_1009ffa4((int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1604) + 1),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),4),
          iVar2 != 0)))) {
        _DAT_28030000 = 1;
      }
      iVar2 = iVar4 * 0x42;
      iVar1 = FUN_1009ffa4((int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1604),
                           (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),0);
      if (((iVar1 != 0) ||
          (iVar1 = FUN_1009ffa4((int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1604) + 1),
                                (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),0), iVar1 != 0)) ||
         ((iVar1 = FUN_1009ffa4((int)*(short *)(iVar2 + _DAT_4bffe775 + 0x1604),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),0),
          iVar1 != 0 ||
          (iVar2 = FUN_1009ffa4((int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1604) + 1),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),0),
          iVar2 != 0)))) {
        _DAT_9421ffc0 = 1;
      }
      iVar2 = iVar4 * 0x42;
      iVar1 = FUN_1009ffa4((int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1604),
                           (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),5);
      if ((((iVar1 != 0) ||
           (iVar1 = FUN_1009ffa4((int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1604) + 1),
                                 (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),5), iVar1 != 0)) ||
          (iVar1 = FUN_1009ffa4((int)*(short *)(iVar2 + _DAT_4bffe775 + 0x1604),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),5),
          iVar1 != 0)) ||
         (iVar2 = FUN_1009ffa4((int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1604) + 1),
                               (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),5),
         iVar2 != 0)) {
        _DAT_48000054 = 1;
      }
      iVar2 = iVar4 * 0x42;
      iVar1 = FUN_1009ffa4((int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1604),
                           (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),8);
      if (((iVar1 != 0) ||
          (iVar1 = FUN_1009ffa4((int)(short)(*(short *)(_DAT_4bffe775 + iVar2 + 0x1604) + 1),
                                (int)*(short *)(_DAT_4bffe775 + iVar2 + 0x1606),8), iVar1 != 0)) ||
         ((iVar1 = FUN_1009ffa4((int)*(short *)(iVar2 + _DAT_4bffe775 + 0x1604),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),8),
          iVar1 != 0 ||
          (iVar2 = FUN_1009ffa4((int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1604) + 1),
                                (int)(short)(*(short *)(iVar2 + _DAT_4bffe775 + 0x1606) + 1),8),
          iVar2 != 0)))) {
        _DAT_40820008 = 1;
      }
      uVar3 = FUN_100a7804(iVar4);
      FUN_100a7c1c(iVar4,uVar3);
      FUN_100a7fe0(iVar4,uVar3);
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < *(short *)(_DAT_4bffe775 + 0x1602));
  }
  if (_DAT_60640000 != 0) {
    FUN_100a85f8();
  }
  FUN_100a8724();
  return;
}



// Function: FUN_100a8d88 at 100a8d88
// Size: 2096 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8d88(short param_1,short param_2,short param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_70;
  undefined4 local_68;
  short local_60;
  short local_5e;
  undefined4 local_58;
  undefined4 local_50;
  
  bVar3 = false;
  if (param_3 == 0) {
    sVar7 = 0;
    do {
      iVar9 = FUN_1005f230(1,0x70,0xffffffff);
      iVar12 = FUN_1005f230(1,0x9c,0xffffffff);
      local_70 = CONCAT22((short)iVar9,(short)iVar12);
      cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar12 * 0x70 + iVar9 + 0x34a);
      if ((cVar1 == '\x05') || (cVar1 == '\x06')) break;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 200);
    sVar7 = 0;
    do {
      sVar6 = FUN_1005f230(1,0x70,0xffffffff);
      iVar9 = FUN_1005f230(1,0x9c,0xffffffff);
      local_68 = CONCAT22(sVar6,(short)iVar9);
      cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar9 * 0x70 + (int)sVar6 + 0x34a);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) break;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 200);
  }
  else {
    uVar4 = FUN_1005f230(1,0x9c,0xffffffff);
    local_70 = (uint)uVar4;
    uVar5 = FUN_1005f230(1,0x9c,0xffffffff);
    local_68 = CONCAT22(0x6f,uVar5);
  }
  local_58 = local_70;
  if ((local_70._0_2_ == local_68._0_2_) && (local_70._2_2_ == local_68._2_2_)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  do {
    if (bVar2) {
      return;
    }
    FUN_1009ebec(local_58,local_68,&local_60);
    iVar12 = 0;
    iVar9 = -1;
    do {
      iVar10 = _DAT_4bfde0cd + iVar12 * 4;
      if ((*(short *)(iVar10 + 0xbc) == local_60) && (*(short *)(iVar10 + 0xbe) == local_5e)) {
        iVar9 = iVar12;
      }
      iVar12 = (int)(short)((short)iVar12 + 1);
    } while (iVar12 < 8);
    uVar8 = iVar9 + 1;
    iVar12 = (int)(short)((short)uVar8 +
                         ((short)((int)uVar8 >> 3) + (ushort)((int)uVar8 < 0 && (uVar8 & 7) != 0)) *
                         -8);
    uVar8 = iVar9 + 7;
    iVar10 = (int)(short)((short)uVar8 +
                         (short)(((int)uVar8 >> 3) + (uint)((int)uVar8 < 0 && (uVar8 & 7) != 0)) *
                         -8);
    if (param_2 != 0) {
      iVar11 = _DAT_4bfde0cd + iVar9 * 4;
      if (*(char *)(_DAT_7c7dd9d6 + ((int)local_58._2_2_ + (int)*(short *)(iVar11 + 0xbe)) * 0x70 +
                    (int)local_58._0_2_ + (int)*(short *)(iVar11 + 0xbc) + 0x34a) == '\x02') {
        if (bVar3) {
          bVar2 = true;
        }
        iVar9 = _DAT_4bfde0cd + iVar9 * 4;
        if ((*(char *)(_DAT_7c7dd9d6 + ((int)local_58._2_2_ + (int)*(short *)(iVar9 + 0xbe)) * 0x70
                       + (int)local_58._0_2_ + (int)*(short *)(iVar9 + 0xbc) + 0x34a) == '\x02') &&
           (!bVar3)) {
          bVar3 = true;
        }
      }
    }
    if (param_1 == 0) {
      local_50 = local_58;
      iVar9 = (int)&local_50 + 2;
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      iVar12 = _DAT_4bfde0cd + iVar12 * 4;
      local_50._0_2_ = local_58._0_2_ + *(short *)(iVar12 + 0xbc);
      local_50._2_2_ = local_58._2_2_ + *(short *)(iVar12 + 0xbe);
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      iVar12 = _DAT_4bfde0cd + iVar10 * 4;
      local_50 = CONCAT22(local_58._0_2_ + *(short *)(iVar12 + 0xbc),
                          local_58._2_2_ + *(short *)(iVar12 + 0xbe));
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
    }
    else {
      local_50 = local_58;
      iVar9 = (int)&local_50 + 2;
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      iVar12 = iVar12 * 4;
      local_50._0_2_ = local_58._0_2_ + *(short *)(_DAT_4bfde0cd + iVar12 + 0xbc);
      local_50._2_2_ = local_58._2_2_ + *(short *)(_DAT_4bfde0cd + iVar12 + 0xbe);
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      iVar10 = iVar10 * 4;
      local_50._0_2_ = local_58._0_2_ + *(short *)(_DAT_4bfde0cd + iVar10 + 0xbc);
      local_50._2_2_ = local_58._2_2_ + *(short *)(_DAT_4bfde0cd + iVar10 + 0xbe);
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      local_50._0_2_ = local_58._0_2_ + *(short *)(iVar12 + _DAT_4bfde0cd + 0xbc) * 2;
      local_50._2_2_ = local_58._2_2_ + *(short *)(iVar12 + _DAT_4bfde0cd + 0xbe) * 2;
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      local_50 = CONCAT22(local_58._0_2_ + *(short *)(iVar10 + _DAT_4bfde0cd + 0xbc) * 2,
                          local_58._2_2_ + *(short *)(iVar10 + _DAT_4bfde0cd + 0xbe) * 2);
      FUN_10051dc8(&local_50,iVar9);
      *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
      FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      if (param_3 != 0) {
        local_50._0_2_ = local_58._0_2_ + *(short *)(iVar12 + _DAT_4bfde0cd + 0xbc) * 3;
        local_50._2_2_ = local_58._2_2_ + *(short *)(iVar12 + _DAT_4bfde0cd + 0xbe) * 3;
        FUN_10051dc8(&local_50,iVar9);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
        FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
        local_50 = CONCAT22(local_58._0_2_ + *(short *)(iVar10 + _DAT_4bfde0cd + 0xbc) * 3,
                            local_58._2_2_ + *(short *)(iVar10 + _DAT_4bfde0cd + 0xbe) * 3);
        FUN_10051dc8(&local_50,iVar9);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) = 2;
        FUN_10051d60((int)local_50._0_2_,(int)local_50._2_2_);
      }
    }
    sVar7 = local_58._0_2_ + local_60;
    local_58._2_2_ = local_58._2_2_ + local_5e;
    local_58 = CONCAT22(sVar7,local_58._2_2_);
    if ((sVar7 == local_68._0_2_) && (local_58._2_2_ == local_68._2_2_)) {
      bVar2 = true;
    }
    uVar8 = FUN_1005f230(1,4,0);
  } while (3 < uVar8);
  return;
}



// Function: FUN_100a9628 at 100a9628
// Size: 1504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9628(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34a);
      uVar4 = 0;
      if (((cVar1 == '\a') || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
        cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x3ba);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar4 = 1;
        }
        cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x2da);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar4 = uVar4 + 1;
        }
        cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34b);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar4 = uVar4 + 1;
        }
        iVar5 = _DAT_7c7dd9d6 + iVar7 * 0x70;
        if (*(char *)(iVar5 + iVar6 + 0x349) == '\x03') {
LAB_100a9768:
          uVar4 = uVar4 + 1;
        }
        else if (*(char *)(iVar5 + iVar6 + 0x349) == '\x02') goto LAB_100a9768;
        if (2 < uVar4) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34a) = 2;
          FUN_10051d60(iVar6,iVar7);
        }
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 0x9c);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x70);
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      if ((((*(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34a) == '\x03') &&
           (iVar5 = FUN_1009ffa4(iVar6,iVar7,7), iVar5 == 0)) &&
          (iVar5 = FUN_1009ffa4(iVar6,iVar7,5), iVar5 == 0)) &&
         (iVar5 = FUN_1009ffa4(iVar6,iVar7,6), iVar5 == 0)) {
        *(undefined1 *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x34a) = 2;
        FUN_10051d60(iVar6,iVar7);
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 0x9c);
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x70);
  iVar6 = 1;
  do {
    iVar7 = 1;
    do {
      cVar1 = *(char *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x34a);
      sVar2 = (short)iVar7;
      sVar3 = (short)iVar6;
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x3bb);
        if (((cVar1 == '\x02') || (cVar1 == '\x03')) &&
           ((iVar5 = iVar7 * 0x70 + _DAT_7c7dd9d6, *(char *)(iVar5 + iVar6 + 0x2d9) == '\x02' ||
            (*(char *)(iVar5 + iVar6 + 0x2d9) == '\x03')))) {
          cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x2db);
          if ((cVar1 == '\x05') || ((cVar1 == '\x04' || (cVar1 == '\a')))) {
            iVar5 = iVar7 * 0x70 + _DAT_7c7dd9d6;
            if (*(char *)(iVar5 + iVar6 + 0x3b9) != '\x05') {
              cVar1 = *(char *)(iVar6 + iVar5 + 0x3b9);
              if ((cVar1 != '\x04') && (cVar1 != '\a')) goto LAB_100a9a50;
            }
            iVar5 = FUN_1005f230(1,10,0);
            if (iVar5 < 5) {
              *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + 0x2db) = 3;
              FUN_10051d60((int)(short)(sVar3 + 1),(int)(short)(sVar2 + -1));
            }
            else {
              *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 * 0x70 + iVar6 + -1 + 0x3ba) = 3;
              FUN_10051d60((int)(short)(iVar6 + -1),(int)(short)(sVar2 + 1));
            }
            goto LAB_100a9bd4;
          }
        }
LAB_100a9a50:
        iVar5 = iVar7 * 0x70 + _DAT_7c7dd9d6;
        if (*(char *)(iVar5 + iVar6 + 0x3b9) != '\x02') {
          if (*(char *)(iVar5 + iVar6 + 0x3b9) != '\x03') goto LAB_100a9bd4;
        }
        cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x2db);
        if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
          iVar5 = iVar7 * 0x70 + _DAT_7c7dd9d6;
          if (*(char *)(iVar5 + iVar6 + 0x2d9) != '\x05') {
            cVar1 = *(char *)(iVar6 + iVar5 + 0x2d9);
            if ((cVar1 != '\x04') && (cVar1 != '\a')) goto LAB_100a9bd4;
          }
          cVar1 = *(char *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x3bb);
          if ((cVar1 == '\x05') || ((cVar1 == '\x04' || (cVar1 == '\a')))) {
            iVar5 = FUN_1005f230(1,10,0);
            if (iVar5 < 5) {
              *(undefined1 *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + -1 + 0x2da) = 3;
              FUN_10051d60((int)(short)(iVar6 + -1),(int)(short)(sVar2 + -1));
            }
            else {
              *(undefined1 *)(iVar7 * 0x70 + _DAT_7c7dd9d6 + iVar6 + 0x3bb) = 3;
              FUN_10051d60((int)(short)(sVar3 + 1),(int)(short)(sVar2 + 1));
            }
          }
        }
      }
LAB_100a9bd4:
      iVar7 = (int)(short)(sVar2 + 1);
    } while (iVar7 < 0x9b);
    iVar6 = (int)(short)(sVar3 + 1);
    if (0x6e < iVar6) {
      return;
    }
  } while( true );
}



// Function: FUN_100a9c08 at 100a9c08
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9c08(void)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)(_DAT_4bfde0cd + 0x3a)) {
    do {
      FUN_100a8d88(0,1,0);
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(_DAT_4bfde0cd + 0x3a));
  }
  sVar1 = 0;
  if (0 < *(short *)(_DAT_4bfde0cd + 0x38)) {
    do {
      FUN_100a8d88(1,1,0);
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(_DAT_4bfde0cd + 0x38));
  }
  FUN_100a9628();
  FUN_100a0038();
  FUN_100a35cc();
  FUN_100a39ac();
  FUN_100a9628();
  FUN_100a0038();
  return;
}



// Function: FUN_100a9ce0 at 100a9ce0
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a9ce0(short param_1,short param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(_DAT_7c7dd9d6 + param_2 * 0x70 + (int)param_1 + 0x34a);
  if (((cVar1 != '\a') && (cVar1 != '\x04')) && (cVar1 != '\x05')) {
    return 0;
  }
  return 1;
}



// Function: FUN_100a9d34 at 100a9d34
// Size: 580 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100a9d34(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = -1;
  sVar6 = -1;
  if ((*(short *)(param_1 + 400) == -1) && (sVar2 = param_2, param_2 != 0)) {
    do {
      sVar2 = sVar2 + -1;
      iVar8 = (int)sVar2;
      sVar1 = *(short *)(_DAT_4bffe775 + 0x1602);
      iVar7 = 10000;
      if (sVar1 != 0) {
        do {
          sVar1 = sVar1 + -1;
          iVar4 = _DAT_4bffe775 + sVar1 * 0x42;
          iVar4 = FUN_1000a884((int)*(short *)(param_1 + iVar8 * 2),
                               (int)*(short *)(param_1 + iVar8 * 2 + 100),
                               (int)*(short *)(iVar4 + 0x1604),(int)*(short *)(iVar4 + 0x1606));
          if (iVar4 < iVar7) {
            iVar7 = iVar4;
          }
        } while (sVar1 != 0);
      }
      *(short *)(param_1 + iVar8 * 2 + 400) = (short)iVar7;
    } while (iVar8 != 0);
  }
  sVar2 = param_2;
  if (param_2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar8 = (int)sVar2;
      iVar7 = 10000;
      if (*(short *)(param_1 + iVar8 * 2 + 300) == 0) {
        sVar1 = param_2;
        if (param_2 != 0) {
          do {
            sVar1 = sVar1 + -1;
            iVar4 = sVar1 * 2;
            iVar3 = param_1 + iVar4;
            if ((*(short *)(iVar3 + 300) != 0) &&
               (iVar4 = FUN_1000a884((int)*(short *)(param_1 + iVar8 * 2),
                                     (int)*(short *)(param_1 + iVar8 * 2 + 100),
                                     (int)*(short *)(param_1 + iVar4),(int)*(short *)(iVar3 + 100)),
               iVar4 < iVar7)) {
              iVar7 = iVar4;
            }
          } while (sVar1 != 0);
        }
        *(short *)(param_1 + iVar8 * 2 + 500) = (short)iVar7;
      }
    } while (iVar8 != 0);
  }
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      iVar8 = (int)param_2;
      iVar7 = param_1 + iVar8 * 2;
      if ((*(short *)(iVar7 + 300) == 0) && (9 < *(short *)(iVar7 + 500))) {
        sVar2 = 0x1e - *(short *)(iVar7 + 400);
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        sVar1 = FUN_1005f230(1,0xf,1);
        if (sVar6 < (short)(sVar2 + sVar1)) {
          iVar5 = iVar8;
          sVar6 = sVar2 + sVar1;
        }
      }
    } while (iVar8 != 0);
  }
  return iVar5;
}



// Function: FUN_100a9f78 at 100a9f78
// Size: 972 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9f78(int param_1)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  
  iVar6 = 0;
  iVar7 = 1;
  do {
    iVar9 = 1;
    do {
      uVar2 = *(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar9 * 2) >> 0x18;
      sVar10 = (short)iVar9;
      sVar8 = (short)iVar7;
      if ((((uVar2 == 0x26) || (uVar2 == 0x16)) &&
          ((uVar2 = *(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar9 * 2 + 2) >> 0x18, uVar2 == 0x28
           || (uVar2 == 0x18)))) ||
         (((uVar2 = *(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar9 * 2) >> 0x18, uVar2 == 0x21 ||
           (uVar2 == 0x11)) &&
          ((uVar2 = *(uint *)(iVar7 * 0xe0 + _DAT_38800000 + iVar9 * 2 + 0xe0) >> 0x18,
           uVar2 == 0x24 || (uVar2 == 0x14)))))) {
        bVar3 = false;
        bVar1 = *(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar9 * 2) >> 0x18 == 0x26;
        if (bVar1) {
          iVar4 = FUN_100a9ce0((int)(short)(sVar10 + -1),iVar7);
          if ((iVar4 == 0) || (iVar4 = FUN_100a9ce0((int)(short)(sVar10 + 2),iVar7), iVar4 == 0)) {
            iVar4 = FUN_100a9ce0(iVar9,(int)(short)(sVar8 + -1));
            if ((iVar4 != 0) && (iVar9 = FUN_100a9ce0(iVar9,(int)(short)(sVar8 + 2)), iVar9 != 0)) {
              bVar3 = true;
            }
          }
          else {
            bVar3 = true;
          }
        }
        if ((bVar3) && (iVar6 < 0x32)) {
          *(short *)(param_1 + iVar6 * 2) = sVar10;
          iVar9 = param_1 + iVar6 * 2;
          *(short *)(iVar9 + 100) = sVar8;
          *(ushort *)(iVar9 + 200) = (ushort)bVar1;
          iVar6 = (int)(short)((short)iVar6 + 1);
        }
      }
      iVar9 = (int)(short)(sVar10 + 1);
    } while (iVar9 < 0x6e);
    iVar7 = (int)(short)(sVar8 + 1);
  } while (iVar7 < 0x9a);
  if (iVar6 != 0) {
    iVar7 = FUN_100a9d34(param_1,iVar6);
    while (iVar7 != -1) {
      iVar9 = param_1 + iVar7 * 2;
      *(undefined2 *)(iVar9 + 300) = 1;
      sVar8 = *(short *)(param_1 + iVar7 * 2);
      iVar4 = (int)sVar8;
      iVar7 = (int)*(short *)(iVar9 + 100);
      if (*(short *)(iVar9 + 200) == 0) {
        iVar5 = _DAT_38800000 + iVar7 * 0xe0;
        iVar9 = iVar4 * 2;
        *(uint *)(iVar5 + iVar9) = *(uint *)(iVar5 + iVar9) & 0xffffff | 0x84000000;
        iVar9 = iVar7 * 0xe0 + _DAT_38800000 + iVar9;
        *(uint *)(iVar9 + 0xe0) = *(uint *)(iVar9 + 0xe0) & 0xffffff | 0x94000000;
        iVar7 = iVar7 * 0x70;
        *(undefined1 *)(iVar7 + _DAT_7c7dd9d6 + iVar4 + 0x3ba) = 1;
        iVar9 = iVar7 + _DAT_7c7dd9d6 + iVar4;
        *(undefined1 *)(iVar9 + 0x34a) = *(undefined1 *)(iVar9 + 0x3ba);
        iVar9 = iVar7 + _DAT_807f0004 + iVar4;
        *(uint *)(iVar9 + 0xe0) = *(uint *)(iVar9 + 0xe0) & 0xe0ffffff | 0x1000000;
        iVar4 = iVar7 + _DAT_807f0004 + iVar4;
        *(uint *)(iVar4 + -0x70) = *(uint *)(iVar4 + -0x70) & 0xe0ffffff | 0x1000000;
      }
      else {
        iVar5 = _DAT_38800000 + iVar7 * 0xe0;
        iVar9 = iVar4 * 2;
        *(uint *)(iVar5 + iVar9) = *(uint *)(iVar5 + iVar9) & 0xffffff | 0x85000000;
        iVar9 = iVar7 * 0xe0 + _DAT_38800000 + iVar9;
        *(uint *)(iVar9 + 2) = *(uint *)(iVar9 + 2) & 0xffffff | 0x86000000;
        iVar7 = iVar7 * 0x70;
        *(undefined1 *)(_DAT_7c7dd9d6 + iVar7 + iVar4 + 0x34b) = 1;
        iVar4 = iVar7 + _DAT_7c7dd9d6 + iVar4;
        *(undefined1 *)(iVar4 + 0x34a) = *(undefined1 *)(iVar4 + 0x34b);
        *(uint *)(iVar7 + _DAT_807f0004 + (int)(short)(sVar8 + 2)) =
             *(uint *)(iVar7 + _DAT_807f0004 + (int)(short)(sVar8 + 2)) & 0xe0ffffff | 0x1000000;
        *(uint *)(iVar7 + _DAT_807f0004 + (int)(short)(sVar8 + -1)) =
             *(uint *)(iVar7 + _DAT_807f0004 + (int)(short)(sVar8 + -1)) & 0xe0ffffff | 0x1000000;
      }
      iVar7 = FUN_100a9d34(param_1,iVar6);
    }
  }
  return;
}



// Function: FUN_100aa344 at 100aa344
// Size: 144 bytes

int FUN_100aa344(int param_1,short param_2,short param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 10000;
  iVar4 = 0x31;
  do {
    iVar2 = (int)*(short *)(param_1 + iVar4 * 2);
    if ((iVar2 != -1) &&
       (iVar2 = FUN_1000a884((int)param_2,(int)param_3,iVar2,
                             (int)*(short *)(param_1 + iVar4 * 2 + 100)), iVar2 < iVar3)) {
      iVar3 = iVar2;
    }
    bVar1 = iVar4 != 0;
    iVar4 = (int)(short)((short)iVar4 + -1);
  } while (bVar1);
  return iVar3;
}



// Function: FUN_100aa3dc at 100aa3dc
// Size: 560 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100aa3dc(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = -1;
  sVar7 = -1;
  if (*(short *)(param_1 + 400) == -1) {
    iVar9 = 0x31;
    do {
      iVar8 = 10000;
      if (*(short *)(param_1 + iVar9 * 2) != -1) {
        sVar5 = *(short *)(_DAT_4bffe775 + 0x1602);
        if (sVar5 != 0) {
          do {
            sVar5 = sVar5 + -1;
            iVar4 = _DAT_4bffe775 + sVar5 * 0x42;
            iVar4 = FUN_1000a884((int)*(short *)(param_1 + iVar9 * 2),
                                 (int)*(short *)(param_1 + iVar9 * 2 + 100),
                                 (int)*(short *)(iVar4 + 0x1604),(int)*(short *)(iVar4 + 0x1606));
            if (iVar4 < iVar8) {
              iVar8 = iVar4;
            }
          } while (sVar5 != 0);
        }
        *(short *)(param_1 + iVar9 * 2 + 400) = (short)iVar8;
      }
      bVar1 = iVar9 != 0;
      iVar9 = (int)(short)((short)iVar9 + -1);
    } while (bVar1);
  }
  iVar9 = 0x31;
  do {
    iVar8 = 10000;
    if ((*(short *)(param_1 + iVar9 * 2 + 300) == 0) && (*(short *)(param_1 + iVar9 * 2) != -1)) {
      iVar4 = 0x31;
      do {
        iVar3 = param_1 + iVar4 * 2;
        if ((*(short *)(iVar3 + 300) != 0) &&
           (iVar3 = FUN_1000a884((int)*(short *)(param_1 + iVar9 * 2),
                                 (int)*(short *)(param_1 + iVar9 * 2 + 100),
                                 (int)*(short *)(param_1 + iVar4 * 2),(int)*(short *)(iVar3 + 100)),
           iVar3 < iVar8)) {
          iVar8 = iVar3;
        }
        bVar1 = iVar4 != 0;
        iVar4 = (int)(short)((short)iVar4 + -1);
      } while (bVar1);
      *(short *)(param_1 + iVar9 * 2 + 500) = (short)iVar8;
    }
    bVar1 = iVar9 != 0;
    iVar9 = (int)(short)((short)iVar9 + -1);
  } while (bVar1);
  iVar9 = 0x31;
  do {
    iVar8 = param_1 + iVar9 * 2;
    if (*(short *)(iVar8 + 300) == 0) {
      if (*(short *)(param_1 + iVar9 * 2) != -1) {
        sVar5 = 0x1e - *(short *)(iVar8 + 400);
        if (sVar5 < 0) {
          sVar5 = 0;
        }
        sVar2 = FUN_1005f230(1,0xf,1);
        if (sVar7 < (short)(sVar5 + sVar2)) {
          iVar6 = iVar9;
          sVar7 = sVar5 + sVar2;
        }
      }
    }
    bVar1 = iVar9 != 0;
    iVar9 = (int)(short)((short)iVar9 + -1);
  } while (bVar1);
  return iVar6;
}



// Function: FUN_100aa60c at 100aa60c
// Size: 428 bytes

/* WARNING: Removing unreachable block (ram,0x100aa804) */
/* WARNING: Removing unreachable block (ram,0x100aa81c) */
/* WARNING: Removing unreachable block (ram,0x100aa824) */
/* WARNING: Removing unreachable block (ram,0x100aa834) */
/* WARNING: Removing unreachable block (ram,0x100aa83c) */
/* WARNING: Removing unreachable block (ram,0x100aa84c) */
/* WARNING: Removing unreachable block (ram,0x100aa854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa60c(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = 0;
  iVar3 = 1;
  do {
    iVar4 = 1;
    do {
      iVar1 = FUN_1005f230(1,2,0xffffffff);
      if ((iVar1 == 0) && ((*(uint *)(_DAT_38800000 + iVar3 * 0xe0 + iVar4 * 2) >> 0x18) - 0x20 < 6)
         ) {
        return;
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x6e);
    iVar3 = (int)(short)((short)iVar3 + 1);
    if (0x99 < iVar3) {
      *(undefined2 *)(param_1 + 400) = 0xffff;
      iVar3 = FUN_100aa3dc(param_1);
      if (iVar3 != -1) {
        do {
          sVar2 = sVar2 + 1;
          iVar4 = param_1 + iVar3 * 2;
          *(undefined2 *)(iVar4 + 300) = 1;
          iVar4 = _DAT_38800000 + *(short *)(iVar4 + 100) * 0xe0;
          iVar3 = *(short *)(param_1 + iVar3 * 2) * 2;
          *(uint *)(iVar4 + iVar3) = *(uint *)(iVar4 + iVar3) | 0x800000;
          iVar3 = FUN_100aa3dc(param_1);
          if (iVar3 == -1) {
            return;
          }
        } while (sVar2 < 10);
      }
      return;
    }
  } while( true );
}



// Function: FUN_100aa938 at 100aa938
// Size: 188 bytes

void FUN_100aa938(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x31;
  do {
    iVar2 = param_1 + iVar3 * 2;
    *(undefined2 *)(iVar2 + 500) = 0xffff;
    *(undefined2 *)(iVar2 + 400) = 0xffff;
    *(undefined2 *)(iVar2 + 200) = 0xffff;
    *(undefined2 *)(iVar2 + 100) = 0xffff;
    *(undefined2 *)(param_1 + iVar3 * 2) = 0xffff;
    *(undefined2 *)(iVar2 + 300) = 0;
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  FUN_100a9f78(param_1);
  iVar3 = 0x31;
  do {
    iVar2 = param_1 + iVar3 * 2;
    if (*(short *)(iVar2 + 300) == 0) {
      *(undefined2 *)(iVar2 + 500) = 0xffff;
      *(undefined2 *)(iVar2 + 400) = 0xffff;
      *(undefined2 *)(iVar2 + 200) = 0xffff;
      *(undefined2 *)(iVar2 + 100) = 0xffff;
      *(undefined2 *)(iVar3 * 2 + param_1) = 0xffff;
    }
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  FUN_100aa60c(param_1);
  return;
}



// Function: FUN_100aa9f4 at 100aa9f4
// Size: 392 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100aa9f4(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar9;
  int iVar8;
  
  do {
    sVar9 = 0x4f;
    do {
      iVar4 = FUN_1005f230(1,(int)*(short *)(_DAT_4bffe775 + 0x1602),0xffffffff);
      if (*(char *)(iVar4 + param_1 + 600) == '\0') break;
      bVar1 = sVar9 != 0;
      iVar4 = -1;
      sVar9 = sVar9 + -1;
    } while (bVar1);
    if (iVar4 == -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + iVar4 + 600) = 1;
    iVar6 = _DAT_4bffe775 + iVar4 * 0x42;
    sVar9 = *(short *)(iVar6 + 0x1604);
    sVar2 = *(short *)(iVar6 + 0x1606);
    sVar3 = *(short *)(_DAT_4bffe775 + 0x1602);
    iVar6 = -1;
    iVar7 = -1;
    if (sVar3 != 0) {
      do {
        sVar3 = sVar3 + -1;
        iVar8 = (int)sVar3;
        if ((((*(char *)(param_1 + iVar8 + 600) == '\0') &&
             (iVar5 = _DAT_4bffe775 + iVar8 * 0x42,
             iVar5 = FUN_1000a884((int)sVar9,(int)sVar2,(int)*(short *)(iVar5 + 0x1604),
                                  (int)*(short *)(iVar5 + 0x1606)), 0x1d < iVar5)) && (iVar5 < 0x47)
            ) && (iVar5 = FUN_1005f230(1,1000,0), iVar7 < iVar5)) {
          iVar6 = iVar8;
          iVar7 = iVar5;
        }
      } while (iVar8 != 0);
    }
    if (iVar6 != -1) {
      *(undefined1 *)(iVar6 + param_1 + 600) = 1;
      *param_2 = (short)iVar4;
      *param_3 = (short)iVar6;
      return 1;
    }
  } while( true );
}



// Function: FUN_100aab7c at 100aab7c
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100aab7c(short param_1,short param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  
  sVar6 = 7;
  while( true ) {
    iVar5 = FUN_1005f230(1,0xc,0xffffffff);
    *(undefined4 *)param_3 = *(undefined4 *)(&DAT_609e0000 + iVar5 * 4);
    sVar3 = *param_3;
    *param_3 = sVar3 + param_1;
    sVar4 = param_3[1];
    param_3[1] = sVar4 + param_2;
    cVar2 = *(char *)(_DAT_7c7dd9d6 + (short)(sVar4 + param_2) * 0x70 +
                      (int)(short)(sVar3 + param_1) + 0x34a);
    if (((cVar2 == '\a') || (cVar2 == '\x04')) || (cVar2 == '\x05')) break;
    bVar1 = sVar6 == 0;
    sVar6 = sVar6 + -1;
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}



// Function: FUN_100aac68 at 100aac68
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aac68(int param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(_DAT_4bffe775 + 0x1602) != 0) {
    sVar1 = *(short *)(_DAT_4bffe775 + 0x1602);
    do {
      sVar1 = sVar1 + -1;
      iVar3 = (int)sVar1;
      iVar2 = _DAT_4bffe775 + iVar3 * 0x42;
      iVar2 = FUN_1000a884((int)param_2,(int)param_3,(int)*(short *)(iVar2 + 0x1604),
                           (int)*(short *)(iVar2 + 0x1606));
      if (iVar2 < 10) {
        *(undefined1 *)(param_1 + iVar3 + 600) = 1;
      }
    } while (iVar3 != 0);
  }
  return;
}



// Function: FUN_100aad1c at 100aad1c
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_100aad1c(undefined4 param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  char local_110 [200];
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  undefined2 local_40;
  undefined2 local_3e;
  char *local_3c;
  short local_38;
  short local_36 [3];
  
  local_3e = 1;
  local_40 = 0;
  local_48 = param_2;
  local_46 = param_3;
  local_44 = param_4;
  local_42 = param_5;
  local_3c = local_110;
  iVar2 = FUN_10043e60(&local_48);
  sVar6 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = 0;
    local_38 = param_3;
    local_36[0] = param_2;
    do {
      sVar6 = sVar6 + 1;
      if ((((local_36[0] == param_4) && (local_38 == param_5)) ||
          (cVar1 = local_110[iVar2], cVar1 == -1)) ||
         (iVar4 = FUN_10017170(local_36,&local_38,cVar1), iVar4 == 0)) break;
      if (((*(uint *)(_DAT_807f0004 + local_38 * 0x70 + (int)local_36[0]) >> 0x18 & 0x1f) != 0) &&
         (param_6 != 0)) {
        return 1;
      }
      iVar4 = (int)local_36[0];
      cVar1 = *(char *)(_DAT_7c7dd9d6 + local_38 * 0x70 + iVar4 + 0x34a);
      if (((cVar1 != '\x03') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
        iVar5 = local_38 * 0x70 + _DAT_807f0004;
        *(uint *)(iVar5 + iVar4) = *(uint *)(iVar5 + iVar4) & 0xe0ffffff | 0x1000000;
        FUN_10051d60((int)local_36[0],(int)local_38);
      }
      if (5 < sVar6) {
        FUN_100aac68(param_1,(int)local_36[0],(int)local_38);
        sVar6 = 0;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 200);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_100aaed8 at 100aaed8
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100aaed8(undefined4 param_1,short param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  short local_28;
  short local_26;
  short local_20;
  short local_1e;
  
  iVar2 = _DAT_4bffe775 + param_2 * 0x42;
  iVar2 = FUN_100aab7c((int)*(short *)(iVar2 + 0x1604),(int)*(short *)(iVar2 + 0x1606),&local_20);
  if ((iVar2 == 0) ||
     (iVar2 = _DAT_4bffe775 + param_3 * 0x42,
     iVar2 = FUN_100aab7c((int)*(short *)(iVar2 + 0x1604),(int)*(short *)(iVar2 + 0x1606),&local_28)
     , iVar2 == 0)) {
    return 0;
  }
  if ((local_20 == local_28) && (local_1e == local_26)) {
    return 0;
  }
  uVar1 = FUN_100aad1c(param_1,(int)local_20,(int)local_1e,(int)local_28,(int)local_26,0);
  return uVar1;
}



// Function: FUN_100aafb8 at 100aafb8
// Size: 628 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aafb8(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short local_28;
  short local_26;
  
  piVar4 = (int *)FUN_100f15e0(700,0);
  _DAT_4bee98a5 = piVar4;
  if (piVar4 != (int *)0x0) {
    FUN_10002598(piVar4);
  }
  _DAT_80410014 = *piVar4;
  FUN_100514d8(_DAT_80410014,0x51);
  FUN_100a49cc();
  iVar8 = 0;
  do {
    iVar7 = 0;
    do {
      iVar5 = _DAT_38800000 + iVar7 * 0xe0;
      *(uint *)(iVar5 + iVar8 * 2) = *(uint *)(iVar5 + iVar8 * 2) & 0xff7fffff;
      iVar5 = _DAT_807f0004 + iVar7 * 0x70;
      *(uint *)(iVar5 + iVar8) = *(uint *)(iVar5 + iVar8) & 0xe0ffffff;
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 0x9c);
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 0x70);
  FUN_100514d8(_DAT_80410014,0x52);
  FUN_100aa938(_DAT_80410014);
  iVar8 = 99;
  do {
    *(undefined1 *)(_DAT_80410014 + iVar8 + 600) = 0;
    bVar1 = iVar8 != 0;
    iVar8 = (int)(short)((short)iVar8 + -1);
  } while (bVar1);
  FUN_100514d8(_DAT_80410014,0x53);
  iVar8 = FUN_100aa9f4(_DAT_80410014,&local_26,&local_28);
  sVar3 = 4;
  while (iVar8 != 0) {
    sVar6 = sVar3;
    if ((sVar3 < 10) && (iVar8 = FUN_1005f230(1,3,0xffffffff), iVar8 == 0)) {
      sVar6 = sVar3 + 1;
      FUN_100514d8(_DAT_80410014,(int)(short)(sVar3 + 0x50));
    }
    FUN_10044110(0xe,1);
    FUN_100aaed8(_DAT_80410014,(int)local_26,(int)local_28);
    iVar8 = FUN_100aa9f4(_DAT_80410014,&local_26,&local_28);
    sVar3 = sVar6;
  }
  FUN_100ef510(_DAT_4bee98a5);
  iVar8 = 0;
  do {
    iVar7 = 0;
    do {
      cVar2 = *(char *)(_DAT_7c7dd9d6 + iVar8 * 0x70 + iVar7 + 0x34a);
      if ((cVar2 == '\v') || (cVar2 == '\n')) {
        iVar5 = _DAT_807f0004 + iVar8 * 0x70;
        *(uint *)(iVar5 + iVar7) = *(uint *)(iVar5 + iVar7) & 0xe0ffffff;
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 0x70);
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 0x9c);
  return;
}



// Function: FUN_100ab22c at 100ab22c
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab22c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_1005f230(1,5,0xffffffff);
    FUN_10001e78(_DAT_4bffe775 + iVar2 * 0x14,_DAT_4bfde0cd + iVar2 * 100 + iVar1 * 0x14 + 0x764);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 8);
  return;
}



// Function: FUN_100ab2c4 at 100ab2c4
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab2c4(void)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_1005f230(3,0x32,0x14);
    *(undefined2 *)(_DAT_4bffe775 + iVar2 * 0x14 + 0x186) = uVar1;
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 8);
  return;
}



// Function: FUN_100ab334 at 100ab334
// Size: 52 bytes

void FUN_100ab334(void)

{
  FUN_100a7544();
  FUN_100ab22c();
  FUN_100ab2c4();
  return;
}



// Function: FUN_100ab368 at 100ab368
// Size: 1660 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab368(short param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar9;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  short local_48;
  short local_46;
  undefined4 local_40;
  
  iVar3 = FUN_1005f230(1,0x70,0xffffffff);
  iVar4 = FUN_1005f230(1,0x9c,0xffffffff);
  local_60 = CONCAT22((short)iVar3,(short)iVar4);
  sVar9 = FUN_1005f230(1,0x70,0xffffffff);
  iVar5 = FUN_1005f230(1,0x9c,0xffffffff);
  local_58 = CONCAT22(sVar9,(short)iVar5);
  if ((iVar3 == sVar9) && (iVar4 == iVar5)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  do {
    if (bVar2) {
      return;
    }
    FUN_1009ebec(local_60,local_58,&local_48);
    iVar4 = 0;
    iVar3 = -1;
    do {
      iVar11 = _DAT_4bfde0cd + iVar4 * 4;
      if ((*(short *)(iVar11 + 0xbc) == local_48) && (*(short *)(iVar11 + 0xbe) == local_46)) {
        iVar3 = iVar4;
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 8);
    uVar6 = iVar3 + 1;
    iVar4 = (int)(short)((short)uVar6 +
                        (short)(((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8
                        );
    uVar6 = iVar3 + 7;
    iVar3 = (int)(short)((short)uVar6 +
                        (short)(((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8
                        );
    local_50._2_2_ = (short)local_60;
    local_50._0_2_ = (short)((uint)local_60 >> 0x10);
    if (param_1 == 0) {
LAB_100ab738:
      if (*(char *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a) == '\x06')
      {
        iVar7 = (int)&local_40 + 2;
        local_40 = local_60;
        FUN_10051dc8(&local_40,iVar7);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 5;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar4 = iVar4 * 4;
        iVar11 = _DAT_4bfde0cd + iVar4;
        local_40._0_2_ = local_50._0_2_ + *(short *)(iVar11 + 0xbc);
        local_40._2_2_ = local_50._2_2_ + *(short *)(iVar11 + 0xbe);
        FUN_10051dc8(&local_40,iVar7);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 5;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar3 = iVar3 * 4;
        iVar11 = _DAT_4bfde0cd + iVar3;
        local_40._0_2_ = local_50._0_2_ + *(short *)(iVar11 + 0xbc);
        local_40._2_2_ = local_50._2_2_ + *(short *)(iVar11 + 0xbe);
        FUN_10051dc8(&local_40,iVar7);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 5;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar4 = iVar4 + _DAT_4bfde0cd;
        local_40._0_2_ = local_50._0_2_ + *(short *)(iVar4 + 0xbc) * 2;
        local_40._2_2_ = local_50._2_2_ + *(short *)(iVar4 + 0xbe) * 2;
        FUN_10051dc8(&local_40,iVar7);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 5;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar3 = iVar3 + _DAT_4bfde0cd;
        local_40 = CONCAT22(local_50._0_2_ + *(short *)(iVar3 + 0xbc) * 2,
                            local_50._2_2_ + *(short *)(iVar3 + 0xbe) * 2);
        FUN_10051dc8(&local_40,iVar7);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 5;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
      }
    }
    else {
      cVar1 = *(char *)(_DAT_7c7dd9d6 + local_50._2_2_ * 0x70 + (int)local_50._0_2_ + 0x34a);
      if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
        iVar10 = (int)&local_40 + 2;
        local_40 = local_60;
        FUN_10051dc8(&local_40,iVar10);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 7;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar11 = iVar4 * 4;
        iVar7 = _DAT_4bfde0cd + iVar11;
        local_40._0_2_ = local_50._0_2_ + *(short *)(iVar7 + 0xbc);
        local_40._2_2_ = local_50._2_2_ + *(short *)(iVar7 + 0xbe);
        FUN_10051dc8(&local_40,iVar10);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 7;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar7 = iVar3 * 4;
        iVar8 = _DAT_4bfde0cd + iVar7;
        local_40._0_2_ = local_50._0_2_ + *(short *)(iVar8 + 0xbc);
        local_40._2_2_ = local_50._2_2_ + *(short *)(iVar8 + 0xbe);
        FUN_10051dc8(&local_40,iVar10);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 7;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar11 = iVar11 + _DAT_4bfde0cd;
        local_40._0_2_ = local_50._0_2_ + *(short *)(iVar11 + 0xbc) * 2;
        local_40._2_2_ = local_50._2_2_ + *(short *)(iVar11 + 0xbe) * 2;
        FUN_10051dc8(&local_40,iVar10);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 7;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
        iVar7 = iVar7 + _DAT_4bfde0cd;
        local_40 = CONCAT22(local_50._0_2_ + *(short *)(iVar7 + 0xbc) * 2,
                            local_50._2_2_ + *(short *)(iVar7 + 0xbe) * 2);
        FUN_10051dc8(&local_40,iVar10);
        *(undefined1 *)(_DAT_7c7dd9d6 + local_40._2_2_ * 0x70 + (int)local_40._0_2_ + 0x34a) = 7;
        FUN_10051d60((int)local_40._0_2_,(int)local_40._2_2_);
      }
      if (param_1 == 0) goto LAB_100ab738;
    }
    local_50._0_2_ = local_50._0_2_ + local_48;
    local_50._2_2_ = local_50._2_2_ + local_46;
    local_60 = local_50;
    if ((local_50._0_2_ == sVar9) && (local_50._2_2_ == (short)iVar5)) {
      bVar2 = true;
    }
  } while( true );
}



// Function: FUN_100ab9e4 at 100ab9e4
// Size: 384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab9e4(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      if ((((iVar3 != 0) && (iVar4 != 0)) && (iVar3 != 0x6f)) &&
         ((iVar4 != 0x9b &&
          (iVar1 = _DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3, *(char *)(iVar1 + 0x34a) == '\x05')))) {
        bVar2 = *(char *)(iVar1 + 0x3ba) == '\x06';
        if (*(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x2da) == '\x06') {
          bVar2 = bVar2 + 1;
        }
        if (*(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x34b) == '\x06') {
          bVar2 = bVar2 + 1;
        }
        if (*(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x349) == '\x06') {
          bVar2 = bVar2 + 1;
        }
        if (2 < bVar2) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x34a) = 6;
          FUN_10051d60(iVar3,iVar4);
        }
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x9c);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x70);
  return;
}



// Function: FUN_100abb68 at 100abb68
// Size: 384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abb68(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      if ((((iVar3 != 0) && (iVar4 != 0)) && (iVar3 != 0x6f)) &&
         ((iVar4 != 0x9b &&
          (iVar1 = _DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3, *(char *)(iVar1 + 0x34a) == '\a')))) {
        bVar2 = *(char *)(iVar1 + 0x3ba) == '\x05';
        if (*(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x2da) == '\x05') {
          bVar2 = bVar2 + 1;
        }
        if (*(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x34b) == '\x05') {
          bVar2 = bVar2 + 1;
        }
        if (*(char *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x349) == '\x05') {
          bVar2 = bVar2 + 1;
        }
        if (2 < bVar2) {
          *(undefined1 *)(_DAT_7c7dd9d6 + iVar4 * 0x70 + iVar3 + 0x34a) = 5;
          FUN_10051d60(iVar3,iVar4);
        }
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x9c);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x70);
  return;
}



// Function: FUN_100abcec at 100abcec
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abcec(void)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)(_DAT_4bfde0cd + 0x40)) {
    do {
      FUN_100ab368(0);
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(_DAT_4bfde0cd + 0x40));
  }
  sVar1 = 0;
  if (0 < *(short *)(_DAT_4bfde0cd + 0x3e)) {
    do {
      FUN_100ab368(1);
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(_DAT_4bfde0cd + 0x3e));
  }
  FUN_100ab9e4();
  FUN_100abb68();
  FUN_100a39ac();
  return;
}



// Function: FUN_100abd8c at 100abd8c
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100abd8c(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = _DAT_38800000 + param_2 * 0xe0;
  if ((*(uint *)(iVar1 + param_1 * 2) >> 0x15 & 1) == 0) {
    if ((int)(short)*(char *)(_DAT_4bffe775 + 0x711 +
                             (*(uint *)(_DAT_38800000 + param_2 * 0xe0 + param_1 * 2) >> 0x18)) - 4U
        < 8) {
      return iVar1;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Function: FUN_100abe94 at 100abe94
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100abe94(undefined4 param_1)

{
  undefined4 uStack00000018;
  short local_8;
  short local_6;
  
  local_8 = 0;
  uStack00000018 = param_1;
  FUN_1003aeb0(2,0,0,param_1);
  local_6 = 0;
  if (0 < _DAT_93430000) {
    do {
      if (*(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + local_6 * 2) * 0x1e + 0xd26) ==
          '\x01') {
        local_8 = local_8 + *(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + local_6 * 2) * 0x1e
                                     + 0xd27);
      }
      local_6 = local_6 + 1;
    } while (local_6 < _DAT_93430000);
  }
  return (int)local_8;
}



// Function: FUN_100abf8c at 100abf8c
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100abf8c(undefined4 param_1)

{
  undefined4 uStack00000018;
  short local_8;
  short local_6;
  
  local_8 = 0;
  uStack00000018 = param_1;
  FUN_1003aeb0(2,0,0,param_1);
  local_6 = 0;
  if (0 < _DAT_93430000) {
    do {
      if (*(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + local_6 * 2) * 0x1e + 0xd26) ==
          '\x02') {
        local_8 = local_8 + *(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + local_6 * 2) * 0x1e
                                     + 0xd27);
      }
      if (*(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + local_6 * 2) * 0x1e + 0xd26) == '\b')
      {
        local_8 = local_8 + 1;
      }
      local_6 = local_6 + 1;
    } while (local_6 < _DAT_93430000);
  }
  return (int)local_8;
}



// Function: FUN_100ac0cc at 100ac0cc
// Size: 8412 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0cc(short param_1,short param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  char cVar15;
  int iVar16;
  short sStack0000001a;
  short sStack0000001e;
  char acStack_80f5 [32];
  char acStack_80d5 [32589];
  short local_150;
  ushort local_14e;
  short local_14c;
  short local_14a;
  short local_146;
  short local_144;
  short sStack_12a;
  short local_126;
  short local_124;
  int aiStack_120 [8];
  undefined1 local_100;
  int local_fc;
  short local_f8;
  char acStack_f5 [32];
  char acStack_d5 [9];
  short local_cc;
  undefined4 local_c8;
  short local_c4;
  short local_c2;
  short local_c0;
  undefined1 auStack_bc [32];
  short local_9c;
  short local_9a;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8a;
  short local_88;
  undefined2 local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  undefined2 local_4e;
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
  short local_38;
  short local_36;
  short local_34;
  short local_32;
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
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  undefined2 local_10;
  short local_e;
  short local_c;
  short local_a;
  undefined2 local_8;
  short local_6;
  short local_4;
  short local_2;
  
  bVar6 = false;
  local_14e = 0;
  local_14c = 0;
  local_14a = 0;
  local_146 = 0;
  local_144 = 0;
  bVar4 = false;
  bVar7 = false;
  bVar5 = false;
  bVar10 = false;
  bVar11 = false;
  bVar8 = false;
  bVar9 = false;
  bVar2 = false;
  bVar3 = false;
  sStack0000001a = param_1;
  sStack0000001e = param_2;
  sVar12 = FUN_100abd8c((int)param_1,(int)param_2);
  DAT_2c1b0000 = (char)*(undefined2 *)(_DAT_4bffe775 + 0x110);
  DAT_41820040 = (byte)((uint)*(undefined4 *)
                               (_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x10)
                 & 0xf;
  if (DAT_41820040 < 8) {
    sStack_12a = (short)(char)DAT_41820040;
  }
  else {
    sStack_12a = 8;
  }
  if (*(char *)(_DAT_4bffe775 + 0x711 +
               (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18)) ==
      '\n') {
    DAT_309dffff = '\x04';
    local_126 = 0;
    if (0 < *(short *)(_DAT_4bffe775 + 0x1602)) {
      do {
        if (((*(short *)(_DAT_4bffe775 + 0x1604 + local_126 * 0x42) == sStack0000001a) ||
            ((int)*(short *)(_DAT_4bffe775 + 0x1604 + local_126 * 0x42) == sStack0000001a + -1)) &&
           ((*(short *)(_DAT_4bffe775 + local_126 * 0x42 + 0x1606) == sStack0000001e ||
            ((int)*(short *)(_DAT_4bffe775 + local_126 * 0x42 + 0x1606) == sStack0000001e + -1))))
        break;
        local_126 = local_126 + 1;
      } while (local_126 < *(short *)(_DAT_4bffe775 + 0x1602));
    }
    local_124 = 4;
    while (local_124 != 0) {
      local_124 = local_124 + -1;
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
      *(undefined2 *)(&DAT_7c84d1d6 + local_124 * 2) =
           *(undefined2 *)
            (_DAT_38800000 +
             ((int)*(short *)(_DAT_4bffe775 + local_126 * 0x42 + 0x1606) +
             (int)*(short *)(local_124 * 2 + -0x7f5d04b0)) * 0xe0 +
            ((int)*(short *)(_DAT_4bffe775 + 0x1604 + local_126 * 0x42) +
            (int)*(short *)(local_124 * 2 + -0x6f410000)) * 2);
      *(short *)(&DAT_7ffc2014 + local_124 * 2) =
           *(short *)(_DAT_4bffe775 + 0x1604 + local_126 * 0x42) +
           *(short *)(local_124 * 2 + -0x6f410000);
      *(short *)(&DAT_3bc00000 + local_124 * 2) =
           *(short *)(_DAT_4bffe775 + local_126 * 0x42 + 0x1606) +
           *(short *)(local_124 * 2 + -0x7f5d04b0);
    }
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
    *_FUN_101174e8 = _DAT_4bffe775 + 0x1604 + local_126 * 0x42;
  }
  else {
    DAT_309dffff = '\x01';
    _DAT_7c84d1d6 =
         CONCAT22(*(undefined2 *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2),
                  DAT_7c84d1d6_2);
    _DAT_7ffc2014 = sStack0000001a;
    _DAT_3bc00000 = sStack0000001e;
    *_FUN_101174e8 = 0;
  }
  local_124 = 0;
  do {
    aiStack_120[local_124] = *(int *)(&DAT_409e0034 + local_124 * 4);
    *(undefined4 *)(&DAT_409e0034 + local_124 * 4) = 0;
    local_124 = local_124 + 1;
  } while (local_124 < 8);
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
  _DAT_7f8be040 = 0;
  local_124 = 0;
  do {
    if (aiStack_120[local_124] != 0) {
      iVar16 = (int)_DAT_7f8be040;
      _DAT_7f8be040 = _DAT_7f8be040 + 1;
      *(int *)(&DAT_409e0034 + iVar16 * 4) = aiStack_120[local_124];
    }
    local_124 = local_124 + 1;
  } while (local_124 < 8);
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
  bVar1 = 1 < _DAT_7f8be040;
  if (bVar1) {
    local_100 = 1;
  }
  else {
    local_100 = 0;
  }
  _DAT_8382fb2c = (ushort)bVar1;
  if (_DAT_8382fb2c == 0) {
    local_fc = 1;
  }
  else {
    local_fc = (int)_DAT_7f8be040;
  }
  DAT_4086ffcc = (char)local_fc;
  local_126 = 0;
  if ('\0' < DAT_4086ffcc) {
    do {
      (&DAT_bbc1fff8)[local_126] = 1;
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_4086ffcc);
  }
  if (_DAT_8382fb2c == 0) {
    _DAT_9421ffc8 = _DAT_817f0000;
  }
  else {
    local_126 = 0;
    if ('\0' < DAT_4086ffcc) {
      do {
        *(undefined4 *)(&DAT_9421ffc8 + local_126 * 4) =
             *(undefined4 *)(&DAT_409e0034 + local_126 * 4);
        local_126 = local_126 + 1;
      } while ((int)local_126 < (int)DAT_4086ffcc);
    }
  }
  DAT_30210040 = '\0';
  if (DAT_309dffff == '\x04') {
    local_f8 = *(short *)(_DAT_4bffe775 + 0x182) + -1;
    sVar13 = *(short *)(_DAT_4bffe775 + 0x182);
    while (sVar14 = local_f8, local_f8 = sVar14, sVar13 != 0) {
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
      if (((*(char *)(_DAT_60000000 + sVar14 * 0x16 + 5) !=
            (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) &&
          (_DAT_7ffc2014 <= *(short *)(_DAT_60000000 + sVar14 * 0x16))) &&
         (((int)*(short *)(_DAT_60000000 + sVar14 * 0x16) <= _DAT_7ffc2014 + 1 &&
          ((_DAT_3bc00000 <= *(short *)(_DAT_60000000 + sVar14 * 0x16 + 2) &&
           ((int)*(short *)(_DAT_60000000 + sVar14 * 0x16 + 2) <= _DAT_3bc00000 + 1)))))) {
        iVar16 = (int)DAT_30210040;
        DAT_30210040 = DAT_30210040 + '\x01';
        *(int *)(&DAT_90010008 + iVar16 * 4) = _DAT_60000000 + sVar14 * 0x16;
      }
      local_f8 = sVar14 + -1;
      sVar13 = sVar14;
    }
  }
  else {
    local_f8 = *(short *)(_DAT_4bffe775 + 0x182) + -1;
    sVar13 = *(short *)(_DAT_4bffe775 + 0x182);
    while (sVar14 = local_f8, local_f8 = sVar14, sVar13 != 0) {
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
      if (((*(char *)(_DAT_60000000 + sVar14 * 0x16 + 5) !=
            (char)*(undefined2 *)(_DAT_4bffe775 + 0x110)) &&
          (*(short *)(_DAT_60000000 + sVar14 * 0x16) == _DAT_7ffc2014)) &&
         (*(short *)(_DAT_60000000 + sVar14 * 0x16 + 2) == _DAT_3bc00000)) {
        iVar16 = (int)DAT_30210040;
        DAT_30210040 = DAT_30210040 + '\x01';
        *(int *)(&DAT_90010008 + iVar16 * 4) = _DAT_60000000 + sVar14 * 0x16;
      }
      local_f8 = sVar14 + -1;
      sVar13 = sVar14;
    }
  }
  local_126 = 0;
  if ('\0' < DAT_30210040) {
    do {
      (&DAT_4e800020)[local_126] = 1;
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_30210040);
  }
  if (((*(char *)(_DAT_4bffe775 + 0x711 +
                 (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18)) ==
        '\x02') ||
      (*(char *)(_DAT_4bffe775 + 0x711 +
                (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18)) ==
       '\x03')) ||
     (*(char *)(_DAT_4bffe775 + 0x711 +
               (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18)) ==
      '\x06')) {
    bVar4 = true;
  }
  local_126 = 0;
  local_100 = bVar1;
  if ('\0' < DAT_30210040) {
    do {
      acStack_f5[local_126 + 1] =
           *(char *)(_DAT_4bffe775 + 0x60c + sStack_12a * 0x1d +
                    (int)*(char *)(*(int *)(&DAT_90010008 + local_126 * 4) + 4));
      if ((!bVar2) && (*(char *)(*(int *)(&DAT_90010008 + local_126 * 4) + 4) == '\x1c')) {
        bVar2 = true;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_30210040);
  }
  local_126 = 0;
  if ('\0' < DAT_4086ffcc) {
    do {
      acStack_d5[local_126 + 1] =
           *(char *)(_DAT_4bffe775 + 0x60c + DAT_2c1b0000 * 0x1d +
                    (int)*(char *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 4));
      if ((!bVar3) && (*(char *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 4) == '\x1c')) {
        bVar3 = true;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_4086ffcc);
  }
  local_126 = 0;
  if ('\0' < DAT_30210040) {
    do {
      if ((((bVar4) && ((*(ushort *)(*(int *)(&DAT_90010008 + local_126 * 4) + 0xc) & 0x1000) == 0))
          && (*(char *)(_DAT_281f0000 + *(char *)(*(int *)(&DAT_90010008 + local_126 * 4) + 4) * 6)
              != '\0')) && (bVar2)) {
        acStack_f5[local_126 + 1] = acStack_f5[local_126 + 1] + 'P';
        break;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_30210040);
  }
  local_126 = 0;
  if ('\0' < DAT_4086ffcc) {
    do {
      if (((bVar4) && ((*(ushort *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 0xc) & 0x1000) == 0))
         && ((*(char *)(_DAT_281f0000 + *(char *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 4) * 6)
              != '\0' && (bVar3)))) {
        acStack_d5[local_126 + 1] = acStack_d5[local_126 + 1] + 'P';
        break;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_4086ffcc);
  }
  local_126 = 1;
  if ('\x01' < DAT_4086ffcc) {
    do {
      if (((acStack_d5[local_126 + 1] < acStack_d5[local_126]) &&
          (local_cc = local_126, 0 < local_126)) &&
         (acStack_d5[local_126 + 1] < acStack_d5[local_126])) {
        do {
          local_c8 = *(undefined4 *)(&DAT_9421ffc8 + local_cc * 4);
          *(undefined4 *)(&DAT_9421ffc8 + local_cc * 4) =
               *(undefined4 *)(&DAT_9421ffc8 + (local_cc + -1) * 4);
          *(undefined4 *)(&DAT_9421ffc8 + (local_cc + -1) * 4) = local_c8;
          local_c4 = (short)acStack_d5[local_cc + 1];
          acStack_d5[local_cc + 1] = acStack_d5[local_cc];
          acStack_d5[local_cc] = (char)local_c4;
          local_cc = local_cc + -1;
          if (local_cc < 1) break;
        } while (acStack_d5[local_cc + 1] < acStack_d5[local_cc]);
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_4086ffcc);
  }
  local_126 = 1;
  if ('\x01' < DAT_30210040) {
    do {
      if (((acStack_f5[local_126 + 1] < acStack_f5[local_126]) &&
          (local_cc = local_126, 0 < local_126)) &&
         (acStack_f5[local_126 + 1] < acStack_f5[local_126])) {
        do {
          local_c8 = *(undefined4 *)(&DAT_90010008 + local_cc * 4);
          *(undefined4 *)(&DAT_90010008 + local_cc * 4) =
               *(undefined4 *)(&DAT_90010008 + (local_cc + -1) * 4);
          *(undefined4 *)(&DAT_90010008 + (local_cc + -1) * 4) = local_c8;
          local_c4 = (short)acStack_f5[local_cc + 1];
          acStack_f5[local_cc + 1] = acStack_f5[local_cc];
          acStack_f5[local_cc] = (char)local_c4;
          local_cc = local_cc + -1;
          if (local_cc < 1) break;
        } while (acStack_f5[local_cc + 1] < acStack_f5[local_cc]);
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_30210040);
  }
  local_126 = (short)DAT_4086ffcc;
  while (local_126 != 0) {
    local_126 = local_126 + -1;
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
    *(undefined1 *)(local_126 + 0x2c9d0000) = 1;
    *(undefined1 *)(local_126 + 0x40850028) =
         *(undefined1 *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 4);
  }
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
  local_126 = (short)DAT_30210040;
  while (local_126 != 0) {
    local_126 = local_126 + -1;
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
    (&DAT_63e30000)[local_126] = 1;
    (&DAT_38800000)[local_126] = *(undefined1 *)(*(int *)(&DAT_90010008 + local_126 * 4) + 4);
  }
                    /* WARNING: Read-only address (ram,0x101174e8) is written */
  local_c2 = 0;
  local_c0 = 0;
  local_126 = 0;
  if ('\0' < DAT_4086ffcc) {
    do {
      FUN_10049628((int)*(char *)(local_126 + 0x40850028),auStack_bc);
      if (*(char *)(local_126 + 0x40850028) == '\x1c') {
        local_c4 = FUN_100abe94(*(undefined4 *)(&DAT_9421ffc8 + local_126 * 4));
        local_c4 = *(char *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 8) + local_c4;
        if (local_c0 < local_c4) {
          local_7c = 9;
          local_7a = local_c4;
          if (9 < local_c4) {
            local_7a = 9;
          }
          local_78 = local_7a;
          local_c0 = local_7a;
        }
      }
      if (local_88 == 1) {
        bVar7 = true;
      }
      if (local_88 == 2) {
        bVar10 = true;
      }
      if (local_88 == 3) {
        bVar11 = true;
      }
      if (local_88 == 4) {
        bVar6 = true;
      }
      if (local_8a != 0) {
        local_76 = local_144;
        local_74 = local_8a;
        if (local_144 < local_8a) {
          local_72 = local_144;
        }
        else {
          local_72 = local_8a;
        }
        local_70 = local_72;
        local_144 = local_72;
      }
      if ((sVar12 == 0) && (local_94 != 0)) {
        local_6e = local_14c;
        local_6c = local_94;
        if (local_94 < local_14c) {
          local_6a = local_14c;
        }
        else {
          local_6a = local_94;
        }
        local_68 = local_6a;
        local_14c = local_6a;
      }
      if ((sVar12 == 1) && (local_92 != 0)) {
        local_66 = local_14c;
        local_64 = local_92;
        if (local_92 < local_14c) {
          local_62 = local_14c;
        }
        else {
          local_62 = local_92;
        }
        local_60 = local_62;
        local_14c = local_62;
      }
      if ((sVar12 == 2) && (local_90 != 0)) {
        local_5e = local_14c;
        local_5c = local_90;
        if (local_90 < local_14c) {
          local_5a = local_14c;
        }
        else {
          local_5a = local_90;
        }
        local_58 = local_5a;
        local_14c = local_5a;
      }
      if ((sVar12 == 3) && (local_8e != 0)) {
        local_56 = local_14c;
        local_54 = local_8e;
        if (local_8e < local_14c) {
          local_52 = local_14c;
        }
        else {
          local_52 = local_8e;
        }
        local_50 = local_52;
        local_14c = local_52;
      }
      if (*(char *)(local_126 + 0x40850028) == '\x1c') {
        sVar13 = FUN_100abf8c(*(undefined4 *)(&DAT_9421ffc8 + local_126 * 4));
        local_c2 = local_c2 + sVar13;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_4086ffcc);
  }
  sVar13 = local_c2 + *(short *)(FUN_1011662c + local_c0 * 2);
  local_c2 = 0;
  local_c0 = 0;
  local_126 = 0;
  if ('\0' < DAT_30210040) {
    do {
      FUN_10049628((int)(char)(&DAT_38800000)[local_126],auStack_bc);
      if ((&DAT_38800000)[local_126] == '\x1c') {
        local_c4 = FUN_100abe94(*(undefined4 *)(&DAT_90010008 + local_126 * 4));
        local_c4 = *(char *)(*(int *)(&DAT_90010008 + local_126 * 4) + 8) + local_c4;
        if (local_c0 < local_c4) {
          local_4e = 9;
          local_4c = local_c4;
          if (9 < local_c4) {
            local_4c = 9;
          }
          local_4a = local_4c;
          local_c0 = local_4c;
        }
      }
      if (local_88 == 1) {
        bVar5 = true;
      }
      if (local_88 == 2) {
        bVar8 = true;
      }
      if (local_88 == 3) {
        bVar9 = true;
      }
      if (local_8a != 0) {
        local_48 = local_14a;
        local_46 = local_8a;
        if (local_14a < local_8a) {
          local_44 = local_14a;
        }
        else {
          local_44 = local_8a;
        }
        local_42 = local_44;
        local_14a = local_44;
      }
      if (local_88 == 4) {
        local_14e = 1;
      }
      if ((sVar12 == 0) && (local_94 != 0)) {
        local_40 = local_146;
        local_3e = local_94;
        if (local_94 < local_146) {
          local_3c = local_146;
        }
        else {
          local_3c = local_94;
        }
        local_3a = local_3c;
        local_146 = local_3c;
      }
      if ((sVar12 == 1) && (local_92 != 0)) {
        local_38 = local_146;
        local_36 = local_92;
        if (local_92 < local_146) {
          local_34 = local_146;
        }
        else {
          local_34 = local_92;
        }
        local_32 = local_34;
        local_146 = local_34;
      }
      if ((sVar12 == 2) && (local_90 != 0)) {
        local_30 = local_146;
        local_2e = local_90;
        if (local_90 < local_146) {
          local_2c = local_146;
        }
        else {
          local_2c = local_90;
        }
        local_2a = local_2c;
        local_146 = local_2c;
      }
      if ((sVar12 == 3) && (local_8e != 0)) {
        local_28 = local_146;
        local_26 = local_8e;
        if (local_8e < local_146) {
          local_24 = local_146;
        }
        else {
          local_24 = local_8e;
        }
        local_22 = local_24;
        local_146 = local_24;
      }
      if ((&DAT_38800000)[local_126] == '\x1c') {
        sVar14 = FUN_100abf8c(*(undefined4 *)(&DAT_90010008 + local_126 * 4));
        local_c2 = local_c2 + sVar14;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_30210040);
  }
  if ((bVar5) || (!bVar6)) {
    local_150 = 0;
  }
  else {
    local_150 = 1;
  }
  if ((bVar7) || ((sVar12 != 0 && (local_14e == 0)))) {
    local_14e = 0;
  }
  else {
    if ((_DAT_7c84d1d6 >> 0x15 & 1) == 0) {
      if (*(char *)(_DAT_4bffe775 + 0x711 +
                   (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18))
          == '\v') {
        local_14e = 2;
      }
      else if (*(char *)(_DAT_4bffe775 + 0x711 +
                        (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >>
                        0x18)) == '\n') {
        local_14e = (ushort)*(char *)(_DAT_7c0802a6 + 0x14);
      }
    }
    else {
      local_14e = 1;
    }
    if (DAT_41820040 == 0xf) {
      local_14e = ((short)local_14e >> 1) + (ushort)((short)local_14e < 0 && (local_14e & 1) != 0);
    }
  }
  local_20 = 0;
  if (!bVar8) {
    local_20 = sVar13;
  }
  if (!bVar9) {
    local_20 = local_20 + local_14c;
  }
  local_1c = local_20 + local_150;
  local_1e = *(short *)(_DAT_4bffe775 + 0x112);
  if (local_1e < local_1c) {
    local_1c = local_1e;
  }
  local_1a = local_1c;
  local_20 = local_1c + local_14a;
  local_18 = 0;
  if (!bVar10) {
    local_18 = local_c2 + *(short *)(FUN_1011662c + local_c0 * 2);
  }
  if (!bVar11) {
    local_18 = local_18 + local_146;
  }
  local_14 = local_18 + local_14e;
  local_16 = *(short *)(_DAT_4bffe775 + 0x112);
  if (local_16 < local_14) {
    local_14 = local_16;
  }
  local_12 = local_14;
  local_18 = local_14 + local_144;
  local_126 = 0;
  if ('\0' < DAT_4086ffcc) {
    do {
      FUN_10049628((int)*(char *)(local_126 + 0x40850028),auStack_bc);
      *(undefined1 *)(local_126 + 0x636c0000) = 0;
      if (((*(ushort *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 0xc) & 0x1000) == 0) ||
         ((*(char *)(_DAT_4bffe775 + 0x711 +
                    (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18))
           != '\x02' &&
          (*(char *)(_DAT_4bffe775 + 0x711 +
                    (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18))
           != '\x03')))) {
        *(char *)(local_126 + 0x480000ed) =
             *(char *)(*(int *)(&DAT_9421ffc8 + local_126 * 4) + 8) + (char)local_20;
        if (*(char *)(local_126 + 0x40850028) == '\x1c') {
          cVar15 = FUN_100abe94(*(undefined4 *)(&DAT_9421ffc8 + local_126 * 4));
          *(char *)(local_126 + 0x480000ed) = *(char *)(local_126 + 0x480000ed) + cVar15;
        }
        if ((sVar12 == 0) && (local_9c != 0)) {
          *(char *)(local_126 + 0x480000ed) = *(char *)(local_126 + 0x480000ed) + (char)local_9c;
        }
        if ((sVar12 == 1) && (local_9a != 0)) {
          *(char *)(local_126 + 0x480000ed) = *(char *)(local_126 + 0x480000ed) + (char)local_9a;
        }
        if ((sVar12 == 2) && (local_98 != 0)) {
          *(char *)(local_126 + 0x480000ed) = *(char *)(local_126 + 0x480000ed) + (char)local_98;
        }
        if ((sVar12 == 3) && (local_96 != 0)) {
          *(char *)(local_126 + 0x480000ed) = *(char *)(local_126 + 0x480000ed) + (char)local_96;
        }
        local_10 = 0xf;
        local_e = (short)*(char *)(local_126 + 0x480000ed);
        local_c = local_e;
        if (0xf < local_e) {
          local_c = 0xf;
        }
        local_a = local_c;
        *(char *)(local_126 + 0x480000ed) = (char)local_c;
      }
      else {
        *(undefined1 *)(local_126 + 0x480000ed) = 4;
        *(undefined1 *)(local_126 + 0x636c0000) = 1;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_4086ffcc);
  }
  local_126 = 0;
  if ('\0' < DAT_30210040) {
    do {
      FUN_10049628((int)(char)(&DAT_38800000)[local_126],auStack_bc);
      (&DAT_80410014)[local_126] = 0;
      if (((*(ushort *)(*(int *)(&DAT_90010008 + local_126 * 4) + 0xc) & 0x1000) == 0) ||
         ((*(char *)(_DAT_4bffe775 + 0x711 +
                    (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18))
           != '\x02' &&
          (*(char *)(_DAT_4bffe775 + 0x711 +
                    (*(uint *)(_DAT_38800000 + sStack0000001e * 0xe0 + sStack0000001a * 2) >> 0x18))
           != '\x03')))) {
        (&DAT_7ffaf810)[local_126] =
             *(char *)(*(int *)(&DAT_90010008 + local_126 * 4) + 8) + (char)local_18;
        if ((&DAT_38800000)[local_126] == '\x1c') {
          cVar15 = FUN_100abe94(*(undefined4 *)(&DAT_90010008 + local_126 * 4));
          (&DAT_7ffaf810)[local_126] = (&DAT_7ffaf810)[local_126] + cVar15;
        }
        if ((sVar12 == 0) && (local_9c != 0)) {
          (&DAT_7ffaf810)[local_126] = (&DAT_7ffaf810)[local_126] + (char)local_9c;
        }
        if ((sVar12 == 1) && (local_9a != 0)) {
          (&DAT_7ffaf810)[local_126] = (&DAT_7ffaf810)[local_126] + (char)local_9a;
        }
        if ((sVar12 == 2) && (local_98 != 0)) {
          (&DAT_7ffaf810)[local_126] = (&DAT_7ffaf810)[local_126] + (char)local_98;
        }
        if ((sVar12 == 3) && (local_96 != 0)) {
          (&DAT_7ffaf810)[local_126] = (&DAT_7ffaf810)[local_126] + (char)local_96;
        }
        local_8 = 0xf;
        local_6 = (short)(char)(&DAT_7ffaf810)[local_126];
        local_4 = local_6;
        if (0xf < local_6) {
          local_4 = 0xf;
        }
        local_2 = local_4;
        (&DAT_7ffaf810)[local_126] = (char)local_4;
      }
      else {
        (&DAT_7ffaf810)[local_126] = 4;
        (&DAT_80410014)[local_126] = 1;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)DAT_30210040);
  }
  return;
}



// Function: FUN_100ae1a8 at 100ae1a8
// Size: 936 bytes

void FUN_100ae1a8(short param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  short sStack0000001a;
  undefined **local_294;
  short local_270;
  undefined1 auStack_264 [80];
  undefined1 auStack_214 [256];
  short local_114;
  int local_110;
  int local_10c;
  undefined1 auStack_108 [260];
  
  ppuVar1 = &.TVect::OCECToRString;
  sStack0000001a = param_1;
  if (param_1 == 0) {
    local_270 = 0;
    do {
      piVar2 = (int *)FUN_10117884((int)*(int **)ppuVar1[-0x415] +
                                   (int)*(short *)(**(int **)ppuVar1[-0x415] + 0x308),
                                   local_270 + 0x73696431);
      if (piVar2 != (int *)0x0) {
        if (*(short *)((int)piVar2 + 0x82) != 0) {
          *(undefined2 *)((int)piVar2 + 0x82) = 0;
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x488));
        }
        if (*(short *)(*(int *)local_294[-0x151] + 0x110) != *(short *)(piVar2 + 0x20)) {
          *(short *)(piVar2 + 0x20) = *(short *)(*(int *)local_294[-0x151] + 0x110);
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
        }
      }
      local_270 = local_270 + 1;
      ppuVar1 = local_294;
    } while (local_270 < 2);
    FUN_1003206c(2,0xe0,0xff,0xf9);
    uVar3 = FUN_1005f678(0x80,1);
    FUN_10001dd0(auStack_264,uVar3,
                 *(int *)local_294[-0x151] + *(short *)(*(int *)local_294[-0x151] + 0x110) * 0x14);
    FUN_100b19f4(auStack_214,auStack_264);
    FUN_10090e0c(*(undefined4 *)local_294[-0x415],0x73756274,auStack_214,1);
  }
  FUN_1003206c(2,0xe0,0xff,0xf9);
  local_270 = 0;
  do {
    local_114 = 0;
    do {
      if ((int)*(char *)(*(int *)ppuVar1[-0x151] + 0x60c +
                         *(short *)(*(int *)ppuVar1[-0x151] + 0x110) * 0x1d + (int)local_114) ==
          (int)local_270) break;
      local_114 = local_114 + 1;
    } while (local_114 < 0x1d);
    local_110 = FUN_10117884((int)*(int **)ppuVar1[-0x415] +
                             (int)*(short *)(**(int **)ppuVar1[-0x415] + 0x308),
                             local_270 + 0x61726d30);
    if (local_110 != 0) {
      FUN_10079ee8(local_110,(int)local_114,(int)*(short *)(*(int *)local_294[-0x151] + 0x110),1);
      if (*(short *)local_294[-0x414] == local_270) {
        local_10c = *(short *)(*(int *)local_294[-0x151] + 0x110) + 2;
      }
      else {
        local_10c = 1;
      }
      FUN_1007a018(local_110,(int)(short)local_10c,0,0,1);
    }
    if (sStack0000001a == 0) {
      FUN_10001dd0(auStack_264,local_294[-0x418],local_270 + 1);
      FUN_100b19f4(auStack_108,auStack_264);
      FUN_10090e0c(*(undefined4 *)local_294[-0x415],local_270 + 0x73747230,auStack_108,1);
    }
    local_270 = local_270 + 1;
    ppuVar1 = local_294;
    if (0x1a < local_270) {
      return;
    }
  } while( true );
}



// Function: FUN_100ae550 at 100ae550
// Size: 556 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae550(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_34;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_80df0004 + (int)*(short *)(*_DAT_80df0004 + 0x308),
                               0x6c656674);
  piVar2 = (int *)FUN_10117884(**(int **)(local_34 + -0x1054) +
                               (int)*(short *)(*(int *)**(int **)(local_34 + -0x1054) + 0x308),
                               0x72696768);
  if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    if (**(short **)(local_34 + -0x1050) < 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),1,1);
    }
    else if (**(short **)(local_34 + -0x1050) == 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),0,1);
    }
    else if (**(short **)(local_34 + -0x1050) == 0x1a) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),0,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),1,1);
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),0,1);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),0,1);
    }
  }
  return;
}



// Function: FUN_100ae77c at 100ae77c
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae77c(void)

{
  _DAT_90e60038 = FUN_100ef580(_DAT_90e60038);
  _DAT_57c807bd = FUN_100ef580(_DAT_90e60038);
  return;
}



// Function: FUN_100ae7c4 at 100ae7c4
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae7c4(void)

{
  undefined2 local_8;
  
  local_8 = 0;
  do {
    *(undefined1 *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_8)
         = *(undefined1 *)(_DAT_90e60038 + local_8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  _DAT_90e60038 = FUN_100ef580(_DAT_90e60038);
  _DAT_57c807bd = FUN_100ef580(_DAT_90e60038);
  return;
}



// Function: FUN_100ae86c at 100ae86c
// Size: 656 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_100ae86c(void)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **local_154;
  short local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  undefined1 *local_10;
  int local_c;
  undefined1 *local_4;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_80df0004 == 0) {
    uVar2 = FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x11f8,
                         *(undefined4 *)(_DAT_57c407bd + 0x88));
    puVar4 = (undefined4 *)local_154[-0x415];
    *puVar4 = uVar2;
    FUN_100db26c(*puVar4);
    ppuVar1 = local_154;
  }
  *(undefined2 *)ppuVar1[-0x414] = 0xffff;
  uVar2 = FUN_100f1640(0x1d);
  *(undefined4 *)ppuVar1[-0x413] = uVar2;
  uVar2 = FUN_100f1640(0x1d);
  *(undefined4 *)ppuVar1[-0x412] = uVar2;
  local_130 = 0;
  do {
    *(undefined1 *)(*(int *)ppuVar1[-0x413] + (int)local_130) =
         *(undefined1 *)
          (*(int *)ppuVar1[-0x151] + 0x60c + *(short *)(*(int *)ppuVar1[-0x151] + 0x110) * 0x1d +
          (int)local_130);
    local_130 = local_130 + 1;
  } while (local_130 < 0x1d);
  FUN_100ae1a8(0);
  FUN_100ae550();
  local_14 = auStack_12c;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *(undefined4 *)ppuVar1[-0x14c];
  *(undefined1 **)ppuVar1[-0x14c] = auStack_12c;
  local_10 = local_14;
  iVar3 = FUN_10000090();
  if (iVar3 == 0) {
    if (*(int *)local_154[-0x415] != 0) {
      local_c = FUN_10117884((int)*(int **)local_154[-0x415] +
                             (int)*(short *)(**(int **)local_154[-0x415] + 0x810));
      if (local_c == 0x646f6e65) {
        FUN_100ae77c();
      }
      else {
        FUN_100ae7c4();
      }
      FUN_10117884((int)*(int **)local_154[-0x415] +
                   (int)*(short *)(**(int **)local_154[-0x415] + 0x738));
    }
    *(undefined4 *)local_154[-0x415] = 0;
    *(undefined4 *)local_154[-0x14c] = local_24;
  }
  else {
    if (*(int *)local_154[-0x415] != 0) {
      FUN_10117884((int)*(int **)local_154[-0x415] +
                   (int)*(short *)(**(int **)local_154[-0x415] + 0x738));
    }
    *(undefined4 *)local_154[-0x415] = 0;
    local_4 = auStack_12c;
    FUN_100db158((int)local_2c,local_28);
  }
  return;
}



// Function: FUN_100aeafc at 100aeafc
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeafc(void)

{
  undefined2 local_8;
  
  local_8 = 0;
  do {
    *(undefined1 *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_8)
         = *(undefined1 *)(_DAT_4bffe775 + 0x6f4 + (int)local_8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  _DAT_80e2fb54 = 0xffff;
  FUN_100ae1a8(1);
  FUN_100ae550();
  return;
}



// Function: FUN_100aeb94 at 100aeb94
// Size: 428 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeb94(void)

{
  undefined1 uVar1;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_8 = 0;
  do {
    if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                      (int)local_8) == (int)_DAT_80e2fb54) {
      local_6 = local_8;
      break;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  local_8 = 0;
  do {
    if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                      (int)local_8) == _DAT_80e2fb54 + -1) {
      local_4 = local_8;
      break;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  uVar1 = *(undefined1 *)
           (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_6);
  *(undefined1 *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_6) =
       *(undefined1 *)
        (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_4);
  *(undefined1 *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_4) =
       uVar1;
  _DAT_80e2fb54 = _DAT_80e2fb54 + -1;
  FUN_100ae1a8(1);
  FUN_100ae550();
  return;
}



// Function: FUN_100aed40 at 100aed40
// Size: 428 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aed40(void)

{
  undefined1 uVar1;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_8 = 0;
  do {
    if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                      (int)local_8) == (int)_DAT_80e2fb54) {
      local_6 = local_8;
      break;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  local_8 = 0;
  do {
    if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                      (int)local_8) == _DAT_80e2fb54 + 1) {
      local_4 = local_8;
      break;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  uVar1 = *(undefined1 *)
           (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_6);
  *(undefined1 *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_6) =
       *(undefined1 *)
        (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_4);
  *(undefined1 *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_4) =
       uVar1;
  _DAT_80e2fb54 = _DAT_80e2fb54 + 1;
  FUN_100ae1a8(1);
  FUN_100ae550();
  return;
}



// Function: FUN_100aeeec at 100aeeec
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeeec(short param_1)

{
  undefined1 uVar1;
  short sVar2;
  short sStack0000001a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  if (_DAT_80e2fb54 == param_1) {
    _DAT_80e2fb54 = -1;
    sVar2 = _DAT_80e2fb54;
  }
  else {
    sVar2 = param_1;
    if (-1 < _DAT_80e2fb54) {
      local_8 = 0;
      do {
        if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                          (int)local_8) == (int)_DAT_80e2fb54) {
          local_6 = local_8;
          break;
        }
        local_8 = local_8 + 1;
      } while (local_8 < 0x1d);
      local_8 = 0;
      do {
        if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                          (int)local_8) == (int)param_1) {
          local_4 = local_8;
          break;
        }
        local_8 = local_8 + 1;
      } while (local_8 < 0x1d);
      uVar1 = *(undefined1 *)
               (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_6);
      *(undefined1 *)
       (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_6) =
           *(undefined1 *)
            (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_4);
      *(undefined1 *)
       (_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_4) = uVar1;
      _DAT_80e2fb54 = -1;
      sVar2 = _DAT_80e2fb54;
    }
  }
  _DAT_80e2fb54 = sVar2;
  sStack0000001a = param_1;
  FUN_100ae1a8(1);
  FUN_100ae550();
  return;
}



// Function: FUN_100af0d4 at 100af0d4
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af0d4(short param_1,short param_2,short param_3)

{
  short sStack0000001a;
  short sStack0000001e;
  short sStack00000022;
  undefined2 local_48;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  
  local_48 = 0;
  do {
    if ((int)*(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d +
                      (int)local_48) == (int)param_1) break;
    local_48 = local_48 + 1;
  } while (local_48 < 0x1d);
  sStack0000001a = param_1;
  sStack0000001e = param_2;
  sStack00000022 = param_3;
  FUN_10049628((int)local_48);
  FUN_1000ba58((int)local_48,(int)local_2c,(int)local_2e,(int)local_2a,(int)local_28,
               (int)sStack0000001e,(int)sStack00000022);
  return;
}



// Function: FUN_100af1a0 at 100af1a0
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af1a0(undefined2 param_1)

{
  undefined2 uStack0000001a;
  undefined2 local_8;
  
  local_8 = 0;
  _DAT_41820014 = param_1;
  _DAT_80e2fb54 = param_1;
  do {
    *(undefined1 *)(_DAT_57c807bd + local_8) = *(undefined1 *)(_DAT_90e60038 + local_8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  uStack0000001a = param_1;
  FUN_100ae1a8(1);
  FUN_100ae550();
  if (_DAT_80df0004 != (int *)0x0) {
    FUN_10117884((int)_DAT_80df0004 + (int)*(short *)(*_DAT_80df0004 + 0x4c8));
  }
  return;
}



// Function: FUN_100af268 at 100af268
// Size: 708 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af268(short param_1)

{
  char *pcVar1;
  short sStack0000001a;
  undefined2 local_10;
  undefined2 local_8;
  
  if (param_1 < _DAT_41820014) {
    local_8 = 0;
    do {
      pcVar1 = (char *)(_DAT_57c807bd + local_8);
      if (((int)*pcVar1 < (int)param_1) || ((int)_DAT_41820014 <= (int)*pcVar1)) {
        if ((int)*pcVar1 == (int)_DAT_41820014) {
          *(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_8)
               = (char)param_1;
        }
        else {
          *(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_8)
               = *pcVar1;
        }
      }
      else {
        *(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_8) =
             *pcVar1 + '\x01';
      }
      local_8 = local_8 + 1;
    } while (local_8 < 0x1d);
  }
  else {
    local_10 = 0;
    do {
      pcVar1 = (char *)(_DAT_57c807bd + local_10);
      if (((int)_DAT_41820014 < (int)*pcVar1) && ((int)*pcVar1 <= (int)param_1)) {
        *(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_10)
             = *pcVar1 + -1;
      }
      else if ((int)*pcVar1 == (int)_DAT_41820014) {
        *(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_10)
             = (char)param_1;
      }
      else {
        *(char *)(_DAT_4bffe775 + 0x60c + *(short *)(_DAT_4bffe775 + 0x110) * 0x1d + (int)local_10)
             = *pcVar1;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 0x1d);
  }
  sStack0000001a = param_1;
  _DAT_80e2fb54 = param_1;
  FUN_100ae1a8(1);
  FUN_100ae550();
  if (_DAT_80df0004 != (int *)0x0) {
    FUN_10117884((int)_DAT_80df0004 + (int)*(short *)(*_DAT_80df0004 + 0x4c8));
  }
  return;
}



// Function: FUN_100af52c at 100af52c
// Size: 40 bytes

void FUN_100af52c(void)

{
  FUN_100ae1a8(1);
  FUN_100ae550();
  return;
}



// Function: FUN_100af554 at 100af554
// Size: 60 bytes

void FUN_100af554(uint *param_1)

{
  if ((*param_1 & 8) == 0) {
    *(uint **)((int)param_1 + ((*param_1 >> 8) - 4)) = param_1;
  }
  return;
}



// Function: FUN_100af590 at 100af590
// Size: 196 bytes

uint * FUN_100af590(uint *param_1,uint param_2,char param_3,int param_4)

{
  uint uVar1;
  
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xffffff0f | 0x10;
  if ((param_2 & 0xff) == 0) {
    *param_1 = *param_1 & 0xfffffff7;
  }
  else {
    *param_1 = uVar1 & 0xffffff0f | 0x18;
  }
  if (param_3 == '\0') {
    *param_1 = *param_1 & 0xfffffffb;
  }
  else {
    *param_1 = *param_1 | 4;
  }
  *param_1 = *param_1 & 0xff | param_4 << 8 | 3;
  if (param_2 == 0) {
    FUN_100af554(param_1);
  }
  return param_1;
}



// Function: FUN_100af654 at 100af654
// Size: 96 bytes

bool FUN_100af654(uint *param_1,uint *param_2)

{
  if (*param_1 >> 8 == *param_2 >> 8) {
    return param_2 < param_1;
  }
  return *param_2 >> 8 < *param_1 >> 8;
}



// Function: FUN_100af6b4 at 100af6b4
// Size: 116 bytes

int FUN_100af6b4(int param_1)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x10), param_1 != 0)) {
    FUN_100af590(param_1,1,1,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return param_1;
}



// Function: FUN_100af728 at 100af728
// Size: 152 bytes

int FUN_100af728(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) || (param_1 = FUN_100b0c24(0x30), param_1 != 0)) {
    FUN_100b0c48(param_1,0,1,0);
    *(undefined1 **)(param_1 + 0x10) = &DAT_807f0004;
    FUN_100af6b4(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = param_3;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return param_1;
}



// Function: FUN_100af7c0 at 100af7c0
// Size: 104 bytes

void FUN_100af7c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x88),iVar1);
    iVar1 = iVar2;
  }
  return;
}



// Function: FUN_100af828 at 100af828
// Size: 148 bytes

void FUN_100af828(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined1 **)(param_1 + 0x10) = &DAT_807f0004;
    FUN_100af7c0(param_1);
    FUN_100b0b34(param_1,0);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100b0b10(param_1);
    }
  }
  return;
}



// Function: FUN_100af8c8 at 100af8c8
// Size: 188 bytes

uint * FUN_100af8c8(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x7fffffff;
  puVar1 = (uint *)0x0;
  do {
    iVar3 = (*param_1 >> 8) - param_2;
    if ((-1 < iVar3) && (iVar3 < iVar2)) {
      puVar1 = param_1;
      iVar2 = iVar3;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)param_1;
    }
    if (param_2 < *param_1 >> 8) {
      param_1 = (uint *)param_1[2];
    }
    else if (*param_1 >> 8 < param_2) {
      param_1 = (uint *)param_1[3];
    }
    else if (param_3 == (uint *)0x0) {
      param_1 = (uint *)param_1[2];
    }
    else if (param_1 < param_3) {
      param_1 = (uint *)param_1[3];
    }
    else {
      param_1 = (uint *)param_1[2];
    }
  } while (param_1 != (uint *)0x0);
  return puVar1;
}



// Function: FUN_100af984 at 100af984
// Size: 140 bytes

void FUN_100af984(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint local_10 [2];
  
  FUN_100af8c8(param_1,*param_2 >> 8,param_2,local_10);
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = local_10[0];
  iVar1 = FUN_100af654(param_2,local_10[0]);
  if (iVar1 == 0) {
    *(uint **)(local_10[0] + 8) = param_2;
  }
  else {
    *(uint **)(local_10[0] + 0xc) = param_2;
  }
  return;
}



// Function: FUN_100afa10 at 100afa10
// Size: 40 bytes

void FUN_100afa10(int param_1)

{
  FUN_100af984(param_1 + 0x20);
  return;
}



// Function: FUN_100afa38 at 100afa38
// Size: 216 bytes

void FUN_100afa38(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  piVar1 = (int *)FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x58),param_2);
  *piVar1 = (int)(piVar1 + 3);
  piVar1[1] = param_2 - 0xc;
  piVar1[2] = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = piVar1;
  iVar3 = *piVar1 + piVar1[1] + -0x10;
  if (iVar3 != 0) {
    FUN_100af590(iVar3,1,0,0);
  }
  uVar2 = 0;
  if (*piVar1 != 0) {
    uVar2 = FUN_100af590(*piVar1,0,1,piVar1[1] + -0x10);
  }
  FUN_100afa10(param_1,uVar2);
  return;
}



// Function: FUN_100afb10 at 100afb10
// Size: 36 bytes

void FUN_100afb10(void)

{
  FUN_100afa38();
  return;
}



// Function: FUN_100afb34 at 100afb34
// Size: 40 bytes

void FUN_100afb34(int param_1)

{
  FUN_100afb10(param_1,*(undefined4 *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100afb5c at 100afb5c
// Size: 148 bytes

void FUN_100afb5c(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x1c) < param_2) {
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  if (*(uint *)(param_1 + 0x18) < param_3) {
    *(uint *)(param_1 + 0x18) = param_3;
  }
  uVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x30));
  if (uVar1 < param_2) {
    FUN_100afb10(param_1,param_2);
  }
  else {
    FUN_100afb10(param_1,param_3);
  }
  return;
}



// Function: FUN_100afbf0 at 100afbf0
// Size: 140 bytes

void FUN_100afbf0(undefined4 param_1,uint *param_2,int *param_3,int *param_4)

{
  for (; param_2 != (uint *)0x0; param_2 = (uint *)param_2[3]) {
    FUN_100afbf0(param_1,param_2[2],param_3,param_4);
    *param_4 = *param_4 + 1;
    *param_3 = *param_3 + (*param_2 >> 8);
  }
  return;
}



// Function: FUN_100afc7c at 100afc7c
// Size: 88 bytes

void FUN_100afc7c(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *param_3 = 0;
  *param_2 = 0;
  FUN_100afbf0(param_1,param_1,param_2,param_3);
  *param_3 = *param_3 + -1;
  return;
}



// Function: FUN_100afcd4 at 100afcd4
// Size: 88 bytes

int FUN_100afcd4(int param_1)

{
  int local_10;
  int local_c;
  
  FUN_100afc7c(param_1 + 0x20,&local_c,&local_10);
  return local_c + local_10 * -4;
}



// Function: FUN_100afd2c at 100afd2c
// Size: 68 bytes

void FUN_100afd2c(int param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  FUN_100af8c8(param_1 + 0x20,param_2,0,0);
  return;
}



// Function: FUN_100afd70 at 100afd70
// Size: 104 bytes

void FUN_100afd70(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      iVar3 = *(int *)(iVar2 + 8);
    }
    return;
  }
  iVar2 = *(int *)(param_2 + 4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 0)) {
    do {
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 == 0) {
        return;
      }
      bVar1 = iVar2 == *(int *)(iVar3 + 0xc);
      iVar2 = iVar3;
    } while (bVar1);
  }
  return;
}



// Function: FUN_100afdd8 at 100afdd8
// Size: 236 bytes

void FUN_100afdd8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
    iVar1 = FUN_100afd70(param_1,param_2);
  }
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar2;
  }
  if (iVar1 == *(int *)(iVar2 + 8)) {
    *(int *)(iVar2 + 8) = iVar3;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar3;
  }
  if (iVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 4);
    if (*(int *)(iVar2 + 8) == param_2) {
      *(int *)(iVar2 + 8) = iVar1;
    }
    else {
      *(int *)(iVar2 + 0xc) = iVar1;
    }
    *(int *)(iVar1 + 4) = iVar2;
    iVar2 = *(int *)(param_2 + 8);
    *(int *)(iVar1 + 8) = iVar2;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar1;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(int *)(*(int *)(iVar1 + 0xc) + 4) = iVar1;
    }
  }
  return;
}



// Function: FUN_100afec4 at 100afec4
// Size: 40 bytes

void FUN_100afec4(int param_1)

{
  FUN_100afdd8(param_1 + 0x20);
  return;
}



// Function: FUN_100afeec at 100afeec
// Size: 360 bytes

uint * FUN_100afeec(int param_1,int param_2,int *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = param_2 + 4;
  if (uVar5 < 0x14) {
    uVar5 = 0x14;
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 + 1;
  }
  puVar1 = (uint *)FUN_100afd2c(param_1,uVar5);
  if ((puVar1 == (uint *)0x0) && (uVar3 = *(uint *)(param_1 + 0x18), uVar3 != 0)) {
    if (uVar3 < uVar5 + 0x24) {
      uVar3 = uVar5 + 0x24;
    }
    FUN_100afb10(param_1,uVar3);
    puVar1 = (uint *)FUN_100afd2c(param_1,uVar5);
  }
  *param_3 = 0;
  puVar4 = (uint *)0x0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *puVar1 | 8;
    FUN_100afec4(param_1,puVar1);
    if (0x13 < (*puVar1 >> 8) - uVar5) {
      uVar2 = 0;
      if (uVar5 + (int)puVar1 != 0) {
        uVar2 = FUN_100af590(uVar5 + (int)puVar1,0,1);
      }
      FUN_100afa10(param_1,uVar2);
      *puVar1 = *puVar1 & 0xff | uVar5 << 8;
    }
    *(uint *)((int)puVar1 + (*puVar1 >> 8)) = *(uint *)((int)puVar1 + (*puVar1 >> 8)) | 4;
    puVar4 = puVar1 + 1;
    *param_3 = (*puVar1 >> 8) - 4;
  }
  return puVar4;
}



// Function: FUN_100b0060 at 100b0060
// Size: 24 bytes

int FUN_100b0060(undefined4 param_1,int param_2)

{
  return (*(uint *)(param_2 + -4) >> 8) - 4;
}



// Function: FUN_100b0078 at 100b0078
// Size: 176 bytes

uint * FUN_100b0078(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)0x0;
  if (((*param_2 & 8) == 0) && ((*param_2 & 4) == 0)) {
    puVar1 = (uint *)param_2[-1];
    *puVar1 = *puVar1 & 0xff | ((*puVar1 >> 8) + (*param_2 >> 8)) * 0x100;
    FUN_100af554(puVar1);
  }
  return puVar1;
}



// Function: FUN_100b0128 at 100b0128
// Size: 220 bytes

void FUN_100b0128(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 + -4);
  *puVar3 = *puVar3 & 0xfffffff7;
  FUN_100af554(puVar3);
  uVar1 = *puVar3 >> 8;
  *(uint *)((int)puVar3 + uVar1) = *(uint *)((int)puVar3 + uVar1) & 0xfffffffb;
  iVar2 = FUN_100b0078(param_1,(int)puVar3 + uVar1);
  if (iVar2 != 0) {
    FUN_100afec4(param_1,(int)puVar3 + uVar1);
  }
  iVar2 = FUN_100b0078(param_1,puVar3);
  if (iVar2 == 0) {
    FUN_100afa10(param_1,puVar3);
  }
  else {
    FUN_100afec4(param_1,iVar2);
    FUN_100afa10(param_1,iVar2);
  }
  return;
}



// Function: FUN_100b0214 at 100b0214
// Size: 12 bytes

void FUN_100b0214(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



// Function: FUN_100b0220 at 100b0220
// Size: 124 bytes

void FUN_100b0220(int param_1)

{
  undefined1 auStack_18 [16];
  
  FUN_100af7c0(param_1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_100af6b4(auStack_18);
  FUN_100b0214(param_1 + 0x20,auStack_18);
  FUN_100afb10(param_1,*(undefined4 *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100b02d0 at 100b02d0
// Size: 84 bytes

int FUN_100b02d0(int param_1)

{
  if (param_1 == 0) {
    param_1 = FUN_100f56e4(4);
  }
  return param_1;
}



// Function: FUN_100b0324 at 100b0324
// Size: 68 bytes

undefined1 * FUN_100b0324(short *param_1)

{
  FUN_10001dd0(&DAT_33de0001,&DAT_38800000,(int)param_1[1],(int)*param_1);
  return &DAT_33de0001;
}



// Function: FUN_100b0368 at 100b0368
// Size: 28 bytes

void FUN_100b0368(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



// Function: FUN_100b0384 at 100b0384
// Size: 4 bytes

void FUN_100b0384(void)

{
  return;
}



// Function: FUN_100b0388 at 100b0388
// Size: 20 bytes

int FUN_100b0388(int param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 2;
}



// Function: FUN_100b039c at 100b039c
// Size: 108 bytes

void FUN_100b039c(undefined4 *param_1,short *param_2,short *param_3)

{
  undefined4 *puStack00000018;
  undefined4 local_18;
  
  puStack00000018 = param_1;
  FUN_100b02d0(&local_18);
  local_18 = CONCAT22(*param_2 + *param_3,param_2[1] + param_3[1]);
  *puStack00000018 = local_18;
  return;
}



// Function: FUN_100b0408 at 100b0408
// Size: 108 bytes

void FUN_100b0408(undefined4 *param_1,short *param_2,short *param_3)

{
  undefined4 *puStack00000018;
  undefined4 local_18;
  
  puStack00000018 = param_1;
  FUN_100b02d0(&local_18);
  local_18 = CONCAT22(*param_2 - *param_3,param_2[1] - param_3[1]);
  *puStack00000018 = local_18;
  return;
}



// Function: FUN_100b0498 at 100b0498
// Size: 36 bytes

void FUN_100b0498(short *param_1,short *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}



// Function: FUN_100b04bc at 100b04bc
// Size: 52 bytes

undefined4 FUN_100b04bc(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100b04f0 at 100b04f0
// Size: 52 bytes

undefined4 FUN_100b04f0(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100b0524 at 100b0524
// Size: 80 bytes

undefined1 * FUN_100b0524(short *param_1)

{
  FUN_10001dd0(&DAT_7c1ee800,&DAT_38800010,(int)param_1[1],(int)*param_1,(int)param_1[3],
               (int)param_1[2]);
  return &DAT_7c1ee800;
}



// Function: FUN_100b0574 at 100b0574
// Size: 4 bytes

void FUN_100b0574(void)

{
  return;
}



// Function: FUN_100b0578 at 100b0578
// Size: 4 bytes

void FUN_100b0578(void)

{
  return;
}



// Function: FUN_100b057c at 100b057c
// Size: 20 bytes

int FUN_100b057c(int param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 4;
}



// Function: FUN_100b0590 at 100b0590
// Size: 68 bytes

void FUN_100b0590(short *param_1,short *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + param_2[2];
  param_1[3] = param_1[3] + param_2[3];
  return;
}



// Function: FUN_100b05d4 at 100b05d4
// Size: 68 bytes

void FUN_100b05d4(short *param_1,short *param_2,short *param_3)

{
  *param_2 = *param_1 + *param_3;
  param_2[1] = param_1[1] + param_3[1];
  param_2[2] = param_1[2] + *param_3;
  param_2[3] = param_1[3] + param_3[1];
  return;
}



// Function: FUN_100b0618 at 100b0618
// Size: 68 bytes

void FUN_100b0618(short *param_1,short *param_2,short *param_3)

{
  *param_2 = *param_1 - *param_3;
  param_2[1] = param_1[1] - param_3[1];
  param_2[2] = param_1[2] - *param_3;
  param_2[3] = param_1[3] - param_3[1];
  return;
}



// Function: FUN_100b065c at 100b065c
// Size: 60 bytes

void FUN_100b065c(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_1 = sVar1 + *param_1;
  param_1[1] = sVar2 + param_1[1];
  param_1[2] = sVar1 + param_1[2];
  param_1[3] = sVar2 + param_1[3];
  return;
}



// Function: FUN_100b0698 at 100b0698
// Size: 60 bytes

void FUN_100b0698(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_1 = *param_1 - sVar1;
  param_1[1] = param_1[1] - sVar2;
  param_1[2] = param_1[2] - sVar1;
  param_1[3] = param_1[3] - sVar2;
  return;
}



// Function: FUN_100b06d4 at 100b06d4
// Size: 68 bytes

void FUN_100b06d4(short *param_1,short *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}



// Function: FUN_100b0718 at 100b0718
// Size: 84 bytes

undefined4 FUN_100b0718(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100b076c at 100b076c
// Size: 52 bytes

undefined4 FUN_100b076c(short *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[3] < param_1[1]) || (param_1[2] < *param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100b07a0 at 100b07a0
// Size: 208 bytes

void FUN_100b07a0(short *param_1,short *param_2,short *param_3)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_3;
  if (*param_3 < *param_1) {
    sVar2 = *param_1;
  }
  *param_2 = sVar2;
  sVar2 = param_3[1];
  if (param_3[1] < param_1[1]) {
    sVar2 = param_1[1];
  }
  param_2[1] = sVar2;
  sVar2 = param_3[2];
  if (param_1[2] < param_3[2]) {
    sVar2 = param_1[2];
  }
  param_2[2] = sVar2;
  sVar2 = param_3[3];
  if (param_1[3] < param_3[3]) {
    sVar2 = param_1[3];
  }
  param_2[3] = sVar2;
  iVar1 = FUN_100b076c(param_2);
  if (iVar1 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return;
}



// Function: FUN_100b0870 at 100b0870
// Size: 52 bytes

undefined4 FUN_100b0870(short *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[1] < param_1[3]) && (*param_1 < param_1[2])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100b08a4 at 100b08a4
// Size: 48 bytes

int FUN_100b08a4(short *param_1,char param_2)

{
  if (param_2 == '\0') {
    return (int)(short)(param_1[2] - *param_1);
  }
  return (int)(short)(param_1[3] - param_1[1]);
}



// Function: FUN_100b08d4 at 100b08d4
// Size: 64 bytes

void FUN_100b08d4(undefined4 *param_1,short *param_2)

{
  undefined4 local_8;
  
  local_8 = CONCAT22(param_2[2] - *param_2,param_2[3] - param_2[1]);
  *param_1 = local_8;
  return;
}



// Function: FUN_100b0914 at 100b0914
// Size: 76 bytes

undefined4 FUN_100b0914(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_2 < *param_1) || (param_1[2] <= *param_2)) || (param_2[1] < param_1[1])) ||
     (param_1[3] <= param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100b0960 at 100b0960
// Size: 176 bytes

undefined1 * FUN_100b0960(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint local_10 [2];
  
  puVar1 = (undefined1 *)
           FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x60),param_2,local_10);
  if (puVar1 != (undefined1 *)0x0) {
    if ((*(char *)(param_1 + 4) != '\0') && (uVar2 = 0, puVar3 = puVar1, local_10[0] != 0)) {
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_10[0]);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + local_10[0];
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return puVar1;
}



// Function: FUN_100b0a18 at 100b0a18
// Size: 192 bytes

void FUN_100b0a18(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x68),param_2);
    if ((*(char *)(param_1 + 5) != '\0') && (uVar2 = 0, puVar3 = param_2, uVar1 != 0)) {
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x70),param_2);
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) - uVar1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}



// Function: FUN_100b0b10 at 100b0b10
// Size: 36 bytes

void FUN_100b0b10(void)

{
  FUN_100025b0();
  return;
}



// Function: FUN_100b0b34 at 100b0b34
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b0b34(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[4] = &DAT_281f0000;
    puVar4 = _DAT_4180ffe0;
    puVar2 = (undefined4 *)0x0;
    while (puVar1 = puVar4, puVar1 != (undefined4 *)0x0) {
      if (param_1 == puVar1) {
        if (puVar2 == (undefined4 *)0x0) {
          _DAT_4180ffe0 =
               (undefined4 *)FUN_10117884((int)*(short *)(puVar1[4] + 0x18) + (int)puVar1);
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar3 = FUN_10117884((int)puVar1 + (int)*(short *)(puVar1[4] + 0x18));
          *puVar2 = uVar3;
          puVar4 = (undefined4 *)0x0;
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_10117884((int)puVar1 + (int)*(short *)(puVar1[4] + 0x18));
        puVar2 = puVar1;
      }
    }
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100b0b10(param_1);
    }
  }
  return;
}



// Function: FUN_100b0c24 at 100b0c24
// Size: 36 bytes

void FUN_100b0c24(void)

{
  FUN_100b21e4();
  return;
}



// Function: FUN_100b0c48 at 100b0c48
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_100b0c48(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_100b0c24(0x14);
    if (param_1 != (undefined4 *)0x0) {
      param_1[4] = &DAT_281f0000;
      *(undefined1 *)((int)param_1 + 6) = param_2;
      *(undefined1 *)(param_1 + 1) = param_3;
      *(undefined1 *)((int)param_1 + 5) = param_4;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = _DAT_4180ffe0;
      _DAT_4180ffe0 = param_1;
    }
  }
  else {
    param_1[4] = &DAT_281f0000;
    *(undefined1 *)((int)param_1 + 6) = param_2;
    *(undefined1 *)(param_1 + 1) = param_3;
    *(undefined1 *)((int)param_1 + 5) = param_4;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = _DAT_4180ffe0;
    _DAT_4180ffe0 = param_1;
  }
  return param_1;
}



// Function: FUN_100b0d0c at 100b0d0c
// Size: 40 bytes

void FUN_100b0d0c(undefined4 param_1,undefined4 param_2)

{
  FUN_100b21e4(param_2);
  return;
}



// Function: FUN_100b0d34 at 100b0d34
// Size: 240 bytes

int FUN_100b0d34(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uStack00000020;
  uint local_18;
  
  puVar2 = &local_18;
  uStack00000020 = param_3;
  local_18 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x68),param_2);
  iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x60),uStack00000020,param_4)
  ;
  if (iVar1 == 0) {
    if (uStack00000020 <= local_18) {
      return param_2;
    }
  }
  else {
    if (uStack00000020 <= local_18) {
      puVar2 = &stack0x00000020;
    }
    FUN_10002340(param_2,iVar1,*puVar2);
    FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x70),param_2);
  }
  return iVar1;
}



// Function: FUN_100b0e24 at 100b0e24
// Size: 40 bytes

void FUN_100b0e24(undefined4 param_1,undefined4 param_2)

{
  FUN_100025b0(param_2);
  return;
}



// Function: FUN_100b0e4c at 100b0e4c
// Size: 64 bytes

ushort * FUN_100b0e4c(ushort *param_1)

{
  if (param_1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  *param_1 = *param_1 & 0xff00 | 0x2a;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// Function: FUN_100b0e8c at 100b0e8c
// Size: 112 bytes

ushort * FUN_100b0e8c(ushort *param_1,short param_2,ushort param_3)

{
  if (param_1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  *param_1 = (param_3 & 0xf) << 8 | param_2 << 0xc | 0x2a;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// Function: FUN_100b0efc at 100b0efc
// Size: 36 bytes

int FUN_100b0efc(ushort *param_1,int param_2)

{
  return (int)param_1 + (-2 - param_2 * ((int)(*param_1 & 0xf00) >> 8));
}



// Function: FUN_100b0f20 at 100b0f20
// Size: 52 bytes

void FUN_100b0f20(ushort *param_1,uint param_2,char param_3)

{
  ushort uVar1;
  
  uVar1 = (ushort)(1 << (param_2 & 0x3f));
  if (param_3 != '\0') {
    *param_1 = *param_1 | uVar1;
    return;
  }
  *param_1 = *param_1 & ~uVar1;
  return;
}



// Function: FUN_100b0f54 at 100b0f54
// Size: 92 bytes

void FUN_100b0f54(ushort *param_1,undefined4 param_2,undefined1 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_100b0efc();
  FUN_100b0f20(uVar2,(int)(uVar1 & 0xf00) >> 8,param_3);
  return;
}



// Function: FUN_100b0fb0 at 100b0fb0
// Size: 148 bytes

undefined2 * FUN_100b0fb0(undefined2 *param_1,short param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  
  if (param_1 == (undefined2 *)0x0) {
    param_1 = (undefined2 *)0x0;
  }
  else {
    *param_1 = 0;
    puVar2 = param_1 + 1;
    uVar1 = 0;
    if ((int)param_2 != 0) {
      do {
        if (puVar2 != (undefined2 *)0x0) {
          FUN_100b0e8c(puVar2,param_3,uVar1);
        }
        puVar2 = (undefined2 *)((int)puVar2 + param_4);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)(int)param_2);
    }
  }
  return param_1;
}



// Function: FUN_100b1044 at 100b1044
// Size: 20 bytes

int FUN_100b1044(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 * param_3 + 2;
}



// Function: FUN_100b1058 at 100b1058
// Size: 220 bytes

int FUN_100b1058(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  short sVar2;
  
  if ((param_1 != 0) || (param_1 = FUN_100b0c24(0xbc), param_1 != 0)) {
    FUN_100af728(param_1,param_2,param_3);
    *(undefined1 **)(param_1 + 0x10) = &DAT_57c407ff;
    *(undefined1 **)(param_1 + 0x34) = &DAT_41820010;
    FUN_101175c4(param_1 + 0x38,0x10,8,&DAT_63e30000);
    *(undefined2 *)(param_1 + 0xb8) = param_4;
    *(undefined2 *)(param_1 + 0x30) = 0;
    iVar1 = **(int **)(param_1 + 0x34);
    while (iVar1 != 0) {
      sVar2 = *(short *)(param_1 + 0x30) + 1;
      *(short *)(param_1 + 0x30) = sVar2;
      iVar1 = *(int *)(*(int *)(param_1 + 0x34) + sVar2 * 4);
    }
  }
  return param_1;
}



// Function: FUN_100b1134 at 100b1134
// Size: 220 bytes

int FUN_100b1134(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined2 param_5)

{
  int iVar1;
  short sVar2;
  
  if ((param_1 != 0) || (param_1 = FUN_100b0c24(0xbc), param_1 != 0)) {
    FUN_100af728(param_1,param_3,param_4);
    *(undefined1 **)(param_1 + 0x10) = &DAT_57c407ff;
    *(undefined4 *)(param_1 + 0x34) = param_2;
    FUN_101175c4(param_1 + 0x38,0x10,8,&DAT_63e30000);
    *(undefined2 *)(param_1 + 0xb8) = param_5;
    *(undefined2 *)(param_1 + 0x30) = 0;
    iVar1 = **(int **)(param_1 + 0x34);
    while (iVar1 != 0) {
      sVar2 = *(short *)(param_1 + 0x30) + 1;
      *(short *)(param_1 + 0x30) = sVar2;
      iVar1 = *(int *)(*(int *)(param_1 + 0x34) + sVar2 * 4);
    }
  }
  return param_1;
}



// Function: FUN_100b1210 at 100b1210
// Size: 36 bytes

void FUN_100b1210(void)

{
  FUN_100afb34();
  return;
}



// Function: FUN_100b1234 at 100b1234
// Size: 140 bytes

void FUN_100b1234(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined1 **)(param_1 + 0x10) = &DAT_57c407ff;
    FUN_10117690(param_1 + 0x38,0x10,8,0x4bfdee85,0,0);
    FUN_100af828(param_1,0);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100b0b10(param_1);
    }
  }
  return;
}



// Function: FUN_100b12c0 at 100b12c0
// Size: 136 bytes

uint FUN_100b12c0(int param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_108 [260];
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    do {
      if (param_2 + 2U <= *(uint *)(*(int *)(param_1 + 0x34) + uVar1 * 4)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(int)*(short *)(param_1 + 0x30));
  }
  FUN_100b19f4(auStack_108,&DAT_41820018);
  FUN_100db368(auStack_108);
  return 0xffffffff;
}



// Function: FUN_100b1348 at 100b1348
// Size: 12 bytes

undefined4 FUN_100b1348(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// Function: FUN_100b1354 at 100b1354
// Size: 16 bytes

void FUN_100b1354(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_100b1364 at 100b1364
// Size: 256 bytes

void FUN_100b1364(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_18 [4];
  
  iVar1 = FUN_100afeec(param_1,(int)*(short *)(param_1 + 0xb8) *
                               *(int *)(*(int *)(param_1 + 0x34) + param_2 * 4) + 2,auStack_18);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_100b0fb0(iVar1,(int)*(short *)(param_1 + 0xb8),param_2,
                         *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x34)));
  }
  if ((iVar2 != 0) && (uVar4 = 0, *(short *)(param_1 + 0xb8) != 0)) {
    do {
      uVar3 = FUN_100b1044(iVar2,uVar4,*(undefined4 *)(*(int *)(param_1 + 0x34) + param_2 * 4));
      FUN_100b0f54(uVar3,*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x34)),0);
      FUN_100b1354(param_1 + param_2 * 8 + 0x38,uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(int)*(short *)(param_1 + 0xb8));
  }
  return;
}



// Function: FUN_100b1464 at 100b1464
// Size: 20 bytes

int FUN_100b1464(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 4);
  return iVar1;
}



// Function: FUN_100b1478 at 100b1478
// Size: 160 bytes

int FUN_100b1478(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b1348(param_1 + param_2 * 8 + 0x38);
  if (iVar1 == 0) {
    FUN_100b1364(param_1,param_2);
  }
  iVar1 = FUN_100b1464(param_1 + param_2 * 8 + 0x38);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_100b0f54(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x34) + param_2 * 4),1);
    iVar1 = iVar1 + 2;
  }
  return iVar1;
}



// Function: FUN_100b1518 at 100b1518
// Size: 148 bytes

void FUN_100b1518(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (*(uint *)(*(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x30) * 4 + -4) < param_2 + 2U) {
    FUN_100afeec(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_100b12c0(param_1);
    *param_3 = *(int *)(*(int *)(param_1 + 0x34) + iVar1 * 4) + -2;
    FUN_100b1478(param_1,iVar1);
  }
  return;
}



// Function: FUN_100b15ac at 100b15ac
// Size: 92 bytes

int FUN_100b15ac(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)(*(ushort *)(param_2 + -2) & 0xf0) >> 4 == 1) {
    iVar1 = FUN_100b0060();
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) +
                    ((int)(*(ushort *)(param_2 + -2) & 0xf000) >> 0xc) * 4) + -2;
  }
  return iVar1;
}



// Function: FUN_100b1608 at 100b1608
// Size: 76 bytes

void FUN_100b1608(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4);
  while (uVar1 = uVar2, uVar1 != 0) {
    if ((uVar1 < param_2) || (param_3 < uVar1)) {
      uVar2 = *(uint *)(uVar1 + 4);
      param_1 = uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(uVar1 + 4);
      uVar2 = *(uint *)(uVar1 + 4);
    }
  }
  return;
}



// Function: FUN_100b1654 at 100b1654
// Size: 276 bytes

void FUN_100b1654(int param_1,ushort *param_2)

{
  short *psVar1;
  int iVar2;
  
  FUN_100b0f54(param_2,*(undefined4 *)
                        (*(int *)(param_1 + 0x34) + ((int)(*param_2 & 0xf000) >> 0xc) * 4),0);
  FUN_100b1354(param_1 + ((int)(*param_2 & 0xf000) >> 0xc) * 8 + 0x38,param_2);
  psVar1 = (short *)FUN_100b0efc(param_2,*(undefined4 *)
                                          (*(int *)(param_1 + 0x34) +
                                          ((int)(*param_2 & 0xf000) >> 0xc) * 4));
  if (*psVar1 == 0) {
    iVar2 = (int)((ushort)psVar1[1] & 0xf000) >> 0xc;
    FUN_100b1608(param_1 + iVar2 * 8 + 0x38,psVar1,
                 (int)psVar1 +
                 (int)*(short *)(param_1 + 0xb8) * *(int *)(*(int *)(param_1 + 0x34) + iVar2 * 4) +
                 2);
    FUN_100b0128(param_1,psVar1);
  }
  return;
}



// Function: FUN_100b1768 at 100b1768
// Size: 80 bytes

void FUN_100b1768(undefined4 param_1,int param_2)

{
  if ((int)(*(ushort *)(param_2 + -2) & 0xf0) >> 4 == 1) {
    FUN_100b0128();
  }
  else {
    FUN_100b1654(param_1,param_2 + -2);
  }
  return;
}



// Function: FUN_100b17b8 at 100b17b8
// Size: 104 bytes

int FUN_100b17b8(int param_1)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(8), param_1 != 0)) {
    FUN_100b0e4c(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}



// Function: FUN_100b1820 at 100b1820
// Size: 20 bytes

void FUN_100b1820(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}



// Function: FUN_100b1834 at 100b1834
// Size: 64 bytes

void FUN_100b1834(int param_1,uint param_2)

{
  if (((param_1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    FUN_100f5708();
  }
  return;
}



// Function: FUN_100b1874 at 100b1874
// Size: 140 bytes

void FUN_100b1874(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [12];
  
  FUN_100b17b8(auStack_18);
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x30)) {
    do {
      FUN_100b1820(iVar1 * 8 + param_1 + 0x38,auStack_18);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(short *)(param_1 + 0x30));
  }
  FUN_100b0220(param_1);
  FUN_100b1834(auStack_18,2);
  return;
}



// Function: FUN_100b1900 at 100b1900
// Size: 244 bytes

void FUN_100b1900(byte *param_1,byte *param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  
  iVar2 = (int)param_3;
  iVar3 = (int)param_4;
  iVar4 = *param_1 + 1;
  if ((iVar4 < iVar2) && ((int)(uint)*param_1 < iVar3)) {
    iVar2 = (int)(short)iVar4;
  }
  sVar1 = (short)iVar2;
  if (iVar3 < (int)(iVar2 + (uint)*param_2)) {
    uVar6 = (uint)(short)((param_4 - sVar1) + 1);
  }
  else {
    uVar6 = (uint)*param_2;
  }
  sVar5 = sVar1 + (short)uVar6 + -1;
  if (iVar3 < (int)(((uint)*param_1 - iVar2) + (int)sVar5 + 2)) {
    param_4 = param_4 - sVar5;
  }
  else {
    param_4 = ((ushort)*param_1 - sVar1) + 1;
  }
  FUN_100012d8(param_1 + iVar2,param_1 + sVar5 + 1,(int)param_4);
  FUN_100012d8(param_2 + 1,param_1 + iVar2,uVar6);
  *param_1 = (char)sVar5 + (char)param_4;
  return;
}



// Function: FUN_100b19f4 at 100b19f4
// Size: 188 bytes

undefined1 * FUN_100b19f4(undefined1 *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int local_18;
  int local_14;
  
  piVar1 = &local_18;
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)FUN_100f56e4(0x100), param_1 != (undefined1 *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      local_14 = FUN_100012c0(param_2);
      local_18 = 0xff;
      if (local_14 < 0xff) {
        piVar1 = &local_14;
      }
      uVar2 = (undefined1)*piVar1;
    }
    *param_1 = uVar2;
    FUN_100012d8(param_2,param_1 + 1);
  }
  return param_1;
}



// Function: FUN_100b1ab0 at 100b1ab0
// Size: 88 bytes

void FUN_100b1ab0(undefined4 param_1,undefined4 param_2,short param_3,short param_4)

{
  undefined1 auStack_110 [256];
  
  FUN_100b19f4(auStack_110);
  FUN_100b1900(param_1,auStack_110,(int)param_3,(int)param_4);
  return;
}



// Function: FUN_100b1b08 at 100b1b08
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100b1b08(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (int)_DAT_60000000 + 1;
  _DAT_60000000 =
       (short)uVar1 + (short)(((int)uVar1 >> 3) + (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8;
  FUN_100012d8(param_1 + 1,_DAT_60000000 * 0x100 + 0x2c990000,*param_1);
  iVar2 = (int)_DAT_60000000;
  *(undefined1 *)(iVar2 * 0x100 + (uint)*param_1 + 0x2c990000) = 0;
  return iVar2 * 0x100 + 0x2c990000;
}



// Function: FUN_100b1b90 at 100b1b90
// Size: 136 bytes

uint FUN_100b1b90(byte *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_111 [257];
  
  puVar3 = auStack_111 + 1;
  FUN_100012d8(param_1 + 1,puVar3,*param_1);
  puVar3[*param_1] = 0;
  iVar1 = FUN_10002958(auStack_111 + (param_3 & 0xff),param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (iVar1 - (int)puVar3) + 1;
  }
  return uVar2 & 0xff;
}



// Function: FUN_100b1c18 at 100b1c18
// Size: 108 bytes

void FUN_100b1c18(undefined4 param_1,byte *param_2,undefined1 param_3)

{
  undefined1 auStack_110 [256];
  
  FUN_100012d8(param_2 + 1,auStack_110,*param_2);
  auStack_110[*param_2] = 0;
  FUN_100b1b90(param_1,auStack_110,param_3);
  return;
}



// Function: FUN_100b1c84 at 100b1c84
// Size: 4 bytes

void FUN_100b1c84(void)

{
  return;
}



// Function: FUN_100b1c88 at 100b1c88
// Size: 148 bytes

void FUN_100b1c88(byte *param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2;
  if (((0 < iVar1) && (iVar2 = (int)param_3, 0 < iVar2)) && (iVar1 <= (int)(uint)*param_1)) {
    if ((int)(uint)*param_1 < iVar2 + iVar1) {
      *param_1 = (char)param_2 - 1;
    }
    else {
      FUN_100012d8(param_1 + iVar1 + iVar2,param_1 + iVar1,((uint)*param_1 - (iVar1 + iVar2)) + 1);
      *param_1 = *param_1 - (char)param_3;
    }
  }
  return;
}



// Function: FUN_100b1d1c at 100b1d1c
// Size: 116 bytes

undefined1 * FUN_100b1d1c(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)FUN_100f56e4(0x100), param_1 != (undefined1 *)0x0)) {
    *param_1 = 4;
    FUN_100012d8(&stack0x0000001c,param_1 + 1,4);
  }
  return param_1;
}



// Function: FUN_100b1d90 at 100b1d90
// Size: 128 bytes

undefined1 * FUN_100b1d90(undefined1 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_100012c0(param_2);
    if (uVar1 < 0x100) {
      *param_1 = (char)uVar1;
    }
    else {
      *param_1 = 0xff;
    }
    FUN_100012d8(param_2,param_1 + 1,*param_1);
  }
  return param_1;
}



// Function: FUN_100b1e10 at 100b1e10
// Size: 192 bytes

void FUN_100b1e10(byte *param_1,byte *param_2,int param_3)

{
  short sVar1;
  
  *param_1 = 0;
  if (param_3 == 0) {
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_100012c0(param_3);
  }
  if ((int)((uint)*param_2 + (int)sVar1) < 0x100) {
    *param_1 = *param_2 + (char)sVar1;
  }
  else {
    *param_1 = 0xff;
  }
  FUN_100012d8(param_2 + 1,param_1 + 1,*param_2);
  FUN_100012d8(param_3,param_1 + *param_2 + 1,(uint)*param_1 - (uint)*param_2);
  return;
}



// Function: FUN_100b1ed0 at 100b1ed0
// Size: 156 bytes

void FUN_100b1ed0(byte *param_1,byte *param_2,byte *param_3)

{
  *param_1 = 0;
  if ((uint)*param_2 + (uint)*param_3 < 0x100) {
    *param_1 = *param_2 + *param_3;
  }
  else {
    *param_1 = 0xff;
  }
  FUN_100012d8(param_2 + 1,param_1 + 1,*param_2);
  FUN_100012d8(param_3 + 1,param_1 + *param_2 + 1,(uint)*param_1 - (uint)*param_2);
  return;
}



// Function: FUN_100b1f6c at 100b1f6c
// Size: 72 bytes

byte * FUN_100b1f6c(byte *param_1,undefined4 param_2)

{
  FUN_100b1900(param_1,param_2,*param_1 + 1,0xff);
  return param_1;
}



// Function: FUN_100b1fb4 at 100b1fb4
// Size: 56 bytes

void FUN_100b1fb4(byte *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *param_1 + 1;
  *param_1 = bVar1;
  if (bVar1 < 0x100) {
    param_1[bVar1] = param_2;
  }
  else {
    *param_1 = *param_1 - 1;
  }
  return;
}



// Function: FUN_100b1fec at 100b1fec
// Size: 188 bytes

undefined1 * FUN_100b1fec(undefined1 *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int local_18;
  int local_14;
  
  piVar1 = &local_18;
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)FUN_100f56e4(0x40), param_1 != (undefined1 *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      local_14 = FUN_100012c0(param_2);
      local_18 = 0x3f;
      if (local_14 < 0x3f) {
        piVar1 = &local_14;
      }
      uVar2 = (undefined1)*piVar1;
    }
    *param_1 = uVar2;
    FUN_100012d8(param_2,param_1 + 1);
  }
  return param_1;
}



// Function: FUN_100b20a8 at 100b20a8
// Size: 72 bytes

byte * FUN_100b20a8(byte *param_1,undefined4 param_2)

{
  FUN_100b1900(param_1,param_2,*param_1 + 1,0x3f);
  return param_1;
}



// Function: FUN_100b20f0 at 100b20f0
// Size: 188 bytes

undefined1 * FUN_100b20f0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int local_18;
  int local_14;
  
  piVar1 = &local_18;
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)FUN_100f56e4(0x21), param_1 != (undefined1 *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      local_14 = FUN_100012c0(param_2);
      local_18 = 0x20;
      if (local_14 < 0x20) {
        piVar1 = &local_14;
      }
      uVar2 = (undefined1)*piVar1;
    }
    *param_1 = uVar2;
    FUN_100012d8(param_2,param_1 + 1);
  }
  return param_1;
}



// Function: FUN_100b21ac at 100b21ac
// Size: 56 bytes

void FUN_100b21ac(byte *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *param_1 + 1;
  *param_1 = bVar1;
  if (bVar1 < 0x20) {
    param_1[bVar1] = param_2;
  }
  else {
    *param_1 = *param_1 - 1;
  }
  return;
}



// Function: FUN_100b21e4 at 100b21e4
// Size: 128 bytes

undefined4 FUN_100b21e4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r30;
  
  if (DAT_80010048 != '\0') {
    unaff_r30 = FUN_100f1574(1);
  }
  uVar1 = FUN_10001338(param_1);
  if (DAT_80010048 != '\0') {
    FUN_100f1574(unaff_r30);
  }
  FUN_100db26c(uVar1);
  return uVar1;
}



// Function: FUN_100b2264 at 100b2264
// Size: 4 bytes

void FUN_100b2264(void)

{
  return;
}



// Function: FUN_100b2268 at 100b2268
// Size: 4 bytes

void FUN_100b2268(void)

{
  return;
}



// Function: FUN_100b226c at 100b226c
// Size: 68 bytes

undefined4 FUN_100b226c(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100b22b0 at 100b22b0
// Size: 48 bytes

bool FUN_100b22b0(void)

{
  int iVar1;
  
  iVar1 = FUN_100b226c();
  return iVar1 == 0;
}



// Function: FUN_100b22e0 at 100b22e0
// Size: 140 bytes

undefined4 * FUN_100b22e0(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x74);
    }
    FUN_100ebaf8(param_1,uVar1,param_3);
    *param_1 = &DAT_30210040;
  }
  return param_1;
}



// Function: FUN_100b236c at 100b236c
// Size: 136 bytes

undefined4 * FUN_100b236c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x74);
    }
    FUN_100ebaf8(param_1,uVar1,1);
    *param_1 = &DAT_30210040;
  }
  return param_1;
}



// Function: FUN_100b23f4 at 100b23f4
// Size: 108 bytes

void FUN_100b23f4(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_30210040;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100b2460 at 100b2460
// Size: 136 bytes

undefined4 FUN_100b2460(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100b24e8 at 100b24e8
// Size: 136 bytes

undefined4 FUN_100b24e8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100b2570 at 100b2570
// Size: 8 bytes

undefined1 * FUN_100b2570(void)

{
  return &DAT_7c0803a6;
}



// Function: FUN_100b2578 at 100b2578
// Size: 124 bytes

undefined4 * FUN_100b2578(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_bbc1fff8;
    param_1[1] = 0x20202020;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



// Function: FUN_100b25f4 at 100b25f4
// Size: 132 bytes

undefined4 * FUN_100b25f4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x10), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_4e800020;
    param_1[1] = 0x636f6d70;
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}



// Function: FUN_100b2678 at 100b2678
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100b2678(void)

{
  return _FUN_101168a0;
}



// Function: FUN_100b2680 at 100b2680
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100b2680(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = FUN_101168a0;
    param_1[1] = 0x64696d61;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



// Function: FUN_100b26fc at 100b26fc
// Size: 8 bytes

undefined1 * FUN_100b26fc(void)

{
  return &DAT_90010008;
}



// Function: FUN_100b2704 at 100b2704
// Size: 124 bytes

undefined4 * FUN_100b2704(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_9421ffc0;
    param_1[1] = 0x64726177;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



// Function: FUN_100b2780 at 100b2780
// Size: 8 bytes

undefined1 * FUN_100b2780(void)

{
  return &DAT_607f0000;
}



// Function: FUN_100b2788 at 100b2788
// Size: 124 bytes

undefined4 * FUN_100b2788(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_809f0004;
    param_1[1] = 0x65726173;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



// Function: FUN_100b2804 at 100b2804
// Size: 8 bytes

undefined4 FUN_100b2804(void)

{
  return 0x80a40008;
}



// Function: FUN_100b280c at 100b280c
// Size: 104 bytes

undefined4 * FUN_100b280c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0x80c50024;
  }
  return param_1;
}



// Function: FUN_100b2874 at 100b2874
// Size: 8 bytes

undefined4 FUN_100b2874(void)

{
  return 0x8186002c;
}



// Function: FUN_100b287c at 100b287c
// Size: 124 bytes

undefined4 * FUN_100b287c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0xa8660028;
    param_1[1] = 0x68696c69;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



// Function: FUN_100b28f8 at 100b28f8
// Size: 8 bytes

undefined4 FUN_100b28f8(void)

{
  return 0x7c651814;
}



// Function: FUN_100b2900 at 100b2900
// Size: 104 bytes

undefined4 * FUN_100b2900(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0x48000fb9;
  }
  return param_1;
}



// Function: FUN_100b2968 at 100b2968
// Size: 8 bytes

undefined1 * FUN_100b2968(void)

{
  return &DAT_80410014;
}



// Function: FUN_100b2970 at 100b2970
// Size: 104 bytes

undefined4 * FUN_100b2970(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_63e30000;
  }
  return param_1;
}



// Function: FUN_100b29d8 at 100b29d8
// Size: 8 bytes

undefined1 * FUN_100b29d8(void)

{
  return &DAT_80010048;
}



// Function: FUN_100b29e0 at 100b29e0
// Size: 104 bytes

undefined4 * FUN_100b29e0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_30210040;
  }
  return param_1;
}



// Function: FUN_100b2a48 at 100b2a48
// Size: 8 bytes

undefined1 * FUN_100b2a48(void)

{
  return &DAT_7c0803a6;
}



// Function: FUN_100b2a50 at 100b2a50
// Size: 104 bytes

undefined4 * FUN_100b2a50(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_bbe1fffc;
  }
  return param_1;
}



// Function: FUN_100b2ab8 at 100b2ab8
// Size: 8 bytes

undefined1 * FUN_100b2ab8(void)

{
  return &DAT_4e800020;
}



// Function: FUN_100b2ac0 at 100b2ac0
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100b2ac0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = _FUN_101168ec;
  }
  return param_1;
}



// Function: FUN_100b2b28 at 100b2b28
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100b2b28(void)

{
  return FUN_101168ec;
}



// Function: FUN_100b2b30 at 100b2b30
// Size: 124 bytes

undefined4 * FUN_100b2b30(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_90010008;
    param_1[1] = 0x7265737a;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



// Function: FUN_100b2bac at 100b2bac
// Size: 8 bytes

undefined1 * FUN_100b2bac(void)

{
  return &DAT_9421ffc0;
}



// Function: FUN_100b2bb4 at 100b2bb4
// Size: 104 bytes

undefined4 * FUN_100b2bb4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_28030000;
  }
  return param_1;
}



// Function: FUN_100b2c1c at 100b2c1c
// Size: 8 bytes

undefined1 * FUN_100b2c1c(void)

{
  return &DAT_41820040;
}



// Function: FUN_100b2c24 at 100b2c24
// Size: 124 bytes

undefined4 * FUN_100b2c24(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = 0x8082fb58;
    param_1[1] = 0x73656c65;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



// Function: FUN_100b2ca0 at 100b2ca0
// Size: 8 bytes

undefined1 * FUN_100b2ca0(void)

{
  return &DAT_90830024;
}



// Function: FUN_100b2ca8 at 100b2ca8
// Size: 104 bytes

undefined4 * FUN_100b2ca8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = &DAT_38a00000;
  }
  return param_1;
}



// Function: FUN_100b2d10 at 100b2d10
// Size: 68 bytes

void FUN_100b2d10(int param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_100f5274(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



// Function: FUN_100b2d54 at 100b2d54
// Size: 48 bytes

void FUN_100b2d54(undefined4 param_1)

{
  FUN_100b2d10(param_1,0x64696d61,0);
  return;
}



// Function: FUN_100b2d84 at 100b2d84
// Size: 48 bytes

void FUN_100b2d84(undefined4 param_1)

{
  FUN_100b2d10(param_1,0x64726177,0);
  return;
}



// Function: FUN_100b2db4 at 100b2db4
// Size: 48 bytes

void FUN_100b2db4(undefined4 param_1)

{
  FUN_100b2d10(param_1,0x65726173,0);
  return;
}



// Function: FUN_100b2de4 at 100b2de4
// Size: 48 bytes

void FUN_100b2de4(undefined4 param_1)

{
  FUN_100b2d10(param_1,0x68696c69,0);
  return;
}



// Function: FUN_100b2e14 at 100b2e14
// Size: 48 bytes

void FUN_100b2e14(undefined4 param_1)

{
  FUN_100b2d10(param_1,0x7265737a,0);
  return;
}



// Function: FUN_100b2e44 at 100b2e44
// Size: 48 bytes

void FUN_100b2e44(undefined4 param_1)

{
  FUN_100b2d10(param_1,0x73656c65,0);
  return;
}



// Function: FUN_100b2e74 at 100b2e74
// Size: 888 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b2e74(void)

{
  uint uVar1;
  undefined4 local_198 [4];
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_158 [4];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_118 [260];
  
  local_158[0] = CONCAT22(_DAT_b0a30000,_DAT_b0a30002);
  local_158[1] = CONCAT22(_DAT_b0a30004,_DAT_b0a30006);
  local_158[2] = CONCAT22(_DAT_b0a30008,_DAT_b0a3000a);
  local_158[3] = CONCAT22(_DAT_b0a3000c,_DAT_b0a3000e);
  uStack_148 = CONCAT22(_DAT_b0a30010,_DAT_b0a30012);
  uStack_144 = CONCAT22(_DAT_b0a30014,_DAT_b0a30016);
  uStack_140 = CONCAT22(_DAT_b0a30018,_DAT_b0a3001a);
  uStack_13c = CONCAT22(_DAT_b0a3001c,_DAT_b0a3001e);
  local_138 = CONCAT22(_DAT_b0a30020,_DAT_b0a30022);
  uStack_134 = CONCAT22(_DAT_b0a30024,_DAT_b0a30026);
  uStack_130 = CONCAT22(_DAT_b0a30028,_DAT_b0a3002a);
  uStack_12c = CONCAT22(_DAT_b0a3002c,_DAT_b0a3002e);
  uStack_128 = CONCAT22(_DAT_b0a30030,_DAT_b0a30032);
  uStack_124 = CONCAT22(_DAT_b0a30034,_DAT_b0a30036);
  uStack_120 = CONCAT22(_DAT_b0a30038,_DAT_b0a3003a);
  local_198[0] = CONCAT22(_DAT_b0a30002,_DAT_b0a30004);
  local_198[1] = CONCAT22(_DAT_b0a30006,_DAT_b0a30008);
  local_198[2] = CONCAT22(_DAT_b0a3000a,_DAT_b0a3000c);
  local_198[3] = CONCAT22(_DAT_b0a3000e,_DAT_b0a30010);
  uStack_188 = CONCAT22(_DAT_b0a30012,_DAT_b0a30014);
  uStack_184 = CONCAT22(_DAT_b0a30016,_DAT_b0a30018);
  uStack_180 = CONCAT22(_DAT_b0a3001a,_DAT_b0a3001c);
  uStack_17c = CONCAT22(_DAT_b0a3001e,_DAT_b0a30020);
  local_178 = CONCAT22(_DAT_b0a30022,_DAT_b0a30024);
  uStack_174 = CONCAT22(_DAT_b0a30026,_DAT_b0a30028);
  uStack_170 = CONCAT22(_DAT_b0a3002a,_DAT_b0a3002c);
  uStack_16c = CONCAT22(_DAT_b0a3002e,_DAT_b0a30030);
  uStack_168 = CONCAT22(_DAT_b0a30032,_DAT_b0a30034);
  uStack_164 = CONCAT22(_DAT_b0a30036,_DAT_b0a30038);
  uStack_160 = CONCAT22(_DAT_b0a3003a,uRamb0a3003c);
  if (DAT_4bfde391 != '\0') {
    FUN_100b2570();
    FUN_100b25f4(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2678();
    FUN_100b2680(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b26fc();
    FUN_100b2704(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2780();
    FUN_100b2788(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2804();
    FUN_100b280c(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2874();
    FUN_100b287c(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b28f8();
    FUN_100b2900(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2968();
    FUN_100b2970(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b29d8();
    FUN_100b29e0(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2a48();
    FUN_100b2a50(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2ab8();
    FUN_100b2ac0(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2b28();
    FUN_100b2b30(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2bac();
    FUN_100b2bb4(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2c1c();
    FUN_100b2c24(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100b2ca0();
    FUN_100b2ca8(0);
  }
  uVar1 = 0;
  do {
    FUN_100b19f4(auStack_118,local_158[uVar1]);
    FUN_100ed954(auStack_118,local_198[uVar1]);
    uVar1 = (uint)(short)((short)uVar1 + 1);
  } while (uVar1 < 0xf);
  _DAT_41860018 = FUN_100b2680(0);
  FUN_100b2d54();
  _DAT_63830000 = FUN_100b2704(0);
  FUN_100b2d84();
  _DAT_4bfddf4d = FUN_100b2788(0);
  FUN_100b2db4();
  _DAT_60000000 = FUN_100b287c(0);
  FUN_100b2de4();
  _DAT_38600000 = FUN_100b2b30(0);
  FUN_100b2e14();
  _DAT_48000008 = FUN_100b2c24(0);
  FUN_100b2e44();
  return;
}



// Function: FUN_100b31f4 at 100b31f4
// Size: 40 bytes

void FUN_100b31f4(void)

{
  FUN_100b2578(0);
  return;
}



// Function: FUN_100b3220 at 100b3220
// Size: 72 bytes

void FUN_100b3220(int *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  return;
}



// Function: FUN_100b3268 at 100b3268
// Size: 116 bytes

void FUN_100b3268(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  FUN_100f5100(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 8) = uVar2;
  return;
}



// Function: FUN_100b32dc at 100b32dc
// Size: 116 bytes

void FUN_100b32dc(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 8));
  return;
}



// Function: FUN_100b3354 at 100b3354
// Size: 128 bytes

void FUN_100b3354(undefined4 param_1,char param_2,short param_3,short param_4,short param_5)

{
  FUN_10000270((int)param_3,(int)param_4);
  if (param_2 == '\x01') {
    FUN_10000288((int)(short)(param_5 - param_3),0);
  }
  else {
    FUN_10000288(0,(int)(short)(param_5 - param_4));
  }
  return;
}



// Function: FUN_100b33d8 at 100b33d8
// Size: 76 bytes

void FUN_100b33d8(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x4d0));
  }
  return;
}



// Function: FUN_100b3438 at 100b3438
// Size: 40 bytes

void FUN_100b3438(void)

{
  FUN_100b25f4(0);
  return;
}



// Function: FUN_100b3460 at 100b3460
// Size: 72 bytes

void FUN_100b3460(int param_1,undefined1 param_2)

{
  FUN_100b2d10(param_1,0x636f6d70,1);
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}



// Function: FUN_100b34b4 at 100b34b4
// Size: 104 bytes

void FUN_100b34b4(int param_1,int *param_2)

{
  undefined1 local_10 [4];
  
  FUN_100b3268(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_10,1);
  *(undefined1 *)(param_1 + 0xc) = local_10[0];
  return;
}



// Function: FUN_100b351c at 100b351c
// Size: 104 bytes

void FUN_100b351c(int param_1,int *param_2)

{
  undefined1 local_10 [4];
  
  FUN_100b32dc(param_1,param_2);
  local_10[0] = *(undefined1 *)(param_1 + 0xc);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),local_10,1);
  return;
}



// Function: FUN_100b3584 at 100b3584
// Size: 964 bytes

void FUN_100b3584(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2d0 [6];
  short local_2ca;
  undefined1 auStack_2b8 [4];
  short local_2b4;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [4];
  short local_28c;
  short local_28a;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [276];
  undefined4 local_154;
  undefined1 auStack_150 [276];
  undefined4 local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  
  if (*(char *)(param_1 + 3) != '\0') {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_278);
    FUN_100e17d8(param_3,auStack_2a0,auStack_278);
    iVar1 = FUN_100e1a08(auStack_2a0);
    if (iVar1 == 0) {
      FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_278,&local_38);
      if (((int)*(char *)(param_1 + 3) & 0x80U) != 0) {
        FUN_10001260();
        FUN_10002940();
      }
      if ((*(byte *)(param_1 + 3) & 0xf) == 0xf) {
        FUN_100b0578(&local_38);
        FUN_100021d8();
      }
      else {
        if ((*(byte *)(param_1 + 3) & 1) != 0) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,(int)local_36,(int)local_38
                       ,(int)local_32);
        }
        if ((*(byte *)(param_1 + 3) & 2) != 0) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,(int)local_36,(int)local_38
                       ,(int)local_34);
        }
        if ((*(byte *)(param_1 + 3) & 4) != 0) {
          FUN_10000000(auStack_2b8);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,(int)local_36,
                       (int)(short)(local_34 - local_2b4),(int)local_32);
        }
        if ((*(byte *)(param_1 + 3) & 8) != 0) {
          FUN_10000000(auStack_2d0);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,
                       (int)(short)(local_32 - local_2ca),(int)local_38,(int)local_34);
        }
      }
      if ((*(byte *)(param_1 + 3) & 0x20) != 0) {
        FUN_100b0578(&local_38);
        FUN_100034e0();
      }
      if ((*(byte *)(param_1 + 3) & 0x40) != 0) {
        uVar2 = FUN_100b0578(&local_38);
        FUN_10000738(uVar2,0x10,0x10);
      }
      if (((int)*(char *)(param_1 + 3) & 0x80U) != 0) {
        FUN_100ee64c(auStack_268);
        FUN_100ee64c(auStack_150);
        FUN_100012a8();
        FUN_10001e30(local_154);
        FUN_100005a0(local_154,local_3c);
        FUN_10000000(auStack_290);
        FUN_10001ec0(local_3c,(int)local_28a,(int)local_28c);
        FUN_10000108(local_3c,local_154,local_3c);
        FUN_10000b58(local_3c);
        FUN_100ee77c(auStack_150,2);
        FUN_100ee77c(auStack_268,2);
      }
    }
  }
  return;
}



// Function: FUN_100b3950 at 100b3950
// Size: 40 bytes

void FUN_100b3950(void)

{
  FUN_100b2680(0);
  return;
}



// Function: FUN_100b3984 at 100b3984
// Size: 64 bytes

void FUN_100b3984(undefined4 param_1,int *param_2)

{
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x418));
  return;
}



// Function: FUN_100b39cc at 100b39cc
// Size: 40 bytes

void FUN_100b39cc(void)

{
  FUN_100b2704(0);
  return;
}



// Function: FUN_100b3a00 at 100b3a00
// Size: 80 bytes

void FUN_100b3a00(undefined4 param_1,int *param_2,undefined4 param_3)

{
  FUN_10000030();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x478),param_3);
  return;
}



// Function: FUN_100b3a58 at 100b3a58
// Size: 40 bytes

void FUN_100b3a58(void)

{
  FUN_100b2788(0);
  return;
}



// Function: FUN_100b3a8c at 100b3a8c
// Size: 100 bytes

void FUN_100b3a8c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_10);
  FUN_100b0578(auStack_10);
  FUN_10002c58();
  return;
}



// Function: FUN_100b3af8 at 100b3af8
// Size: 40 bytes

void FUN_100b3af8(void)

{
  FUN_100b287c(0);
  return;
}



// Function: FUN_100b3b2c at 100b3b2c
// Size: 64 bytes

void FUN_100b3b2c(undefined4 param_1,int *param_2)

{
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x428));
  return;
}



// Function: FUN_100b3b74 at 100b3b74
// Size: 40 bytes

void FUN_100b3b74(void)

{
  FUN_100b2b30(0);
  return;
}



// Function: FUN_100b3ba8 at 100b3ba8
// Size: 64 bytes

void FUN_100b3ba8(undefined4 param_1,int *param_2)

{
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x750));
  return;
}



// Function: FUN_100b3bf0 at 100b3bf0
// Size: 40 bytes

void FUN_100b3bf0(void)

{
  FUN_100b2c24(0);
  return;
}



// Function: FUN_100b3c24 at 100b3c24
// Size: 88 bytes

void FUN_100b3c24(undefined4 param_1,int *param_2,undefined4 param_3,char param_4,char param_5)

{
  FUN_10000030();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x468),(int)param_4,(int)param_5);
  return;
}



