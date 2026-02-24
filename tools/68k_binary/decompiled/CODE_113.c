// Warlords II - Decompiled 68k Code
// Segment: CODE_113
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 154 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000000c(undefined4 param_1,short *param_2)

{
  undefined4 uVar1;
  short sVar2;
  
  if (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\v') {
    sVar2 = func_0x00002b50(param_1._2_2_);
    if (sVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      *param_2 = (short)*(char *)(sVar2 * 0x20 + _DAT_0002884c + 0x82a);
      if (*param_2 == 1) {
        uVar1 = CONCAT22((short)((uint)(sVar2 * 0x20) >> 0x10),sVar2);
      }
      else if ((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x40) == 0
              ) {
        uVar1 = CONCAT22((short)((uint)(param_1._2_2_ * 0xe0) >> 0x10),sVar2);
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_000000a6 at 000000a6
// Size: 650 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000000a6(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined2 extraout_D0u;
  undefined4 uVar5;
  uint uVar6;
  short sVar8;
  int iVar7;
  uint uVar9;
  short unaff_D6w;
  
  bVar3 = true;
  uVar9 = 0;
  uVar5 = *(undefined4 *)(_DAT_000288ac + 7);
  uVar6 = 0;
  if ((((_DAT_000288ac == (short *)0x0) || (param_1 < 0)) || (param_1._2_2_ < 0)) ||
     ((0x6f < param_1._0_2_ || (0x9b < param_1._2_2_)))) {
    uVar5 = 0;
  }
  else {
    while (uVar4 = (undefined2)(uVar6 >> 0x10), bVar3) {
      bVar3 = false;
      func_0x00002da8(*(undefined4 *)_DAT_000288ac);
      unaff_D6w = func_0x00002bc8();
      if (((*_DAT_000288ac == _DAT_000288ac[9]) && (_DAT_000288ac[1] == _DAT_000288ac[10])) &&
         (*_DAT_000288ac != -1)) {
        unaff_D6w = 4;
        _DAT_000288ac[10] = -1;
        _DAT_000288ac[9] = -1;
        func_0x00007448(_DAT_000288ac);
      }
      uVar6 = (uint)unaff_D6w;
      if (uVar6 < 6) {
        uVar6 = (uint)(ushort)(unaff_D6w >> 0xf) << 0x10;
        switch(unaff_D6w) {
        case 2:
          uVar6 = func_0x00007408();
          break;
        case 3:
          uVar6 = func_0x00002c20(CONCAT22(_DAT_0002890e,_DAT_00028910));
          uVar9 = uVar6 & 0xffff;
          if ((short)uVar6 != 0) {
            bVar3 = true;
          }
          break;
        case 4:
          uVar6 = (int)(short)(ushort)((uint)uVar5 >> 0x1c) - 3;
          if ((uVar6 == 0) && (_DAT_000288b0 != 0)) {
            iVar7 = 0;
            sVar8 = *(short *)(_DAT_0002884c + 0x182);
            do {
              uVar6 = CONCAT22((short)((uint)iVar7 >> 0x10),sVar8);
              sVar2 = sVar8 + -1;
              if (sVar8 == 0) goto LAB_00000296;
              iVar7 = sVar2 * 0x16;
              sVar8 = sVar2;
            } while (iVar7 + _DAT_00028854 != _DAT_000288b0);
            uVar6 = func_0x00002b50(*(undefined4 *)(sVar2 * 0x16 + _DAT_00028854));
            if ((short)uVar6 != -1) {
              uVar6 = func_0x00002c88(CONCAT22(sVar2,(short)uVar6));
            }
LAB_00000296:
            for (sVar8 = 0; sVar8 < 8; sVar8 = sVar8 + 1) {
              if ((*(int *)(&DAT_000288b4 + sVar8 * 4) != 0) &&
                 (*(char *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 5) != -1)) {
                *(byte *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 0xe) =
                     *(byte *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 0xe) & 0xf;
                *(byte *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 0xe) =
                     *(byte *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 0xe) & 0xf1;
                uVar6 = func_0x00007448(*(undefined4 *)(&DAT_000288b4 + sVar8 * 4));
              }
            }
          }
          break;
        case 5:
          uVar6 = CONCAT22((short)((uint)(_DAT_00028910 * 0xe0) >> 0x10),_DAT_0002890e);
          if (*(char *)((*(uint *)(_DAT_00028910 * 0xe0 + _DAT_00028850 + _DAT_0002890e * 2) >> 0x18
                        ) + _DAT_0002884c + 0x711) == '\n') {
            sVar8 = func_0x00004938(CONCAT22(_DAT_0002890e,_DAT_00028910));
            cVar1 = *(char *)(sVar8 * 0x42 + _DAT_0002884c + 0x15d9);
            uVar6 = CONCAT31((int3)((uint)(sVar8 * 0x42) >> 8),cVar1);
            if (cVar1 != *(char *)(_DAT_0002884c + 0x111)) {
              uVar6 = func_0x00002c98(CONCAT22(sVar8,_DAT_0002890e));
              uVar9 = uVar6 & 0xffff;
            }
            if ((short)uVar9 != 0) {
              uVar6 = func_0x00002da8(CONCAT22(_DAT_0002890e,_DAT_00028910));
              bVar3 = true;
            }
          }
        }
      }
      if (*(char *)((int)_DAT_000288ac + 5) == -1) {
        bVar3 = false;
      }
    }
    if (param_2._0_2_ == 0) {
      func_0x00007408();
      func_0x000073f8();
      uVar4 = extraout_D0u;
    }
    uVar5 = CONCAT22(uVar4,unaff_D6w);
  }
  return uVar5;
}



// Function: FUN_0000033c at 0000033c
// Size: 206 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000033c(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  short *psVar6;
  undefined2 auStackY_10014 [32750];
  undefined2 local_14 [8];
  
  sVar5 = 8;
  while (sVar5 != 0) {
    local_14[(short)(sVar5 + -1)] = 0xffff;
    sVar5 = sVar5 + -1;
  }
  func_0x00003e38((short)local_14,0);
  uVar4 = (int)*(char *)(_DAT_00028854 + 7 + param_1._0_2_ * 0x16) / 5 + 1;
  while( true ) {
    if (*(char *)(_DAT_00028854 + 7 + param_1._0_2_ * 0x16) < '\x02') {
      return param_1._0_2_ * 0x16;
    }
    psVar6 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
    sVar5 = *psVar6;
    sVar1 = psVar6[1];
    FUN_0000040a(param_1._2_2_);
    psVar6 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
    if ((sVar5 == *psVar6) && (sVar1 == psVar6[1])) {
      return param_1._0_2_ * 0x16;
    }
    uVar3 = param_1._0_2_ * 0x16;
    if (*(char *)(uVar3 + _DAT_00028854 + 7) < '\x04') {
      return uVar3;
    }
    if ((short)uVar4 == 0) break;
    uVar2 = *(ushort *)(uVar3 + _DAT_00028854 + 0xc);
    if ((uVar2 & 0x20) == 0) {
      return uVar2 & 0x20;
    }
    uVar4 = (uint)(ushort)((short)uVar4 - 1);
  }
  return uVar3;
}



// Function: FUN_0000040a at 0000040a
// Size: 422 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000040a(undefined4 param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  undefined1 auStackY_8072 [32740];
  undefined1 auStack_72 [104];
  short local_a;
  undefined1 local_6 [2];
  
  sVar4 = FUN_00000d02();
  if (sVar4 != 0) {
    if ((local_a != 0) && ((local_a != 1 || (sVar4 = FUN_000005b0(), sVar4 != 0)))) {
      if (local_a != 2) {
        return;
      }
      sVar4 = FUN_00000842();
      if (sVar4 != 0) {
        return;
      }
    }
    FUN_00000adc();
    return;
  }
  if ((*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + param_1._0_2_ * 0x16) * 6) !=
       '\0') && (sVar4 = FUN_00000bd4((short)((uint)local_6 >> 0x10)), sVar4 != 0)) {
    FUN_00000adc();
    return;
  }
  sVar4 = 100;
  while (sVar4 != 0) {
    auStack_72[(short)(sVar4 + -1)] = 0;
    sVar4 = sVar4 + -1;
  }
  if ((param_1._2_2_ != -1) && (sVar4 = func_0x00002dc0(), sVar4 != 0xff)) {
    FUN_00000adc();
    return;
  }
  iVar3 = _DAT_00028854;
  pbVar1 = (byte *)(_DAT_00028854 + 0xe + param_1._0_2_ * 0x16);
  *pbVar1 = *pbVar1 & 0xf;
  pbVar1 = (byte *)(iVar3 + 0xf + param_1._0_2_ * 0x16);
  *pbVar1 = *pbVar1 & 0x80;
  puVar2 = (ushort *)(iVar3 + 0xc + param_1._0_2_ * 0x16);
  *puVar2 = *puVar2 & 0xffdf;
  *(undefined2 *)(_DAT_00028854 + 0x14 + param_1._0_2_ * 0x16) = 0xffff;
  *(undefined2 *)(_DAT_00028854 + 0x12 + param_1._0_2_ * 0x16) = 0xffff;
  *(undefined1 *)(_DAT_00028854 + 0x11 + param_1._0_2_ * 0x16) = 0;
  psVar5 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
  if (*psVar5 == -1) {
    return;
  }
  func_0x00007448(psVar5);
  return;
}



// Function: FUN_000005b0 at 000005b0
// Size: 658 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000005b0(undefined4 param_1,undefined4 param_2)

{
  ushort *puVar1;
  short sVar3;
  undefined4 uVar2;
  short sVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  short asStackY_10014 [32741];
  short local_1c;
  short local_1a;
  short local_18 [10];
  
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
  do {
    do {
      sVar5 = sVar4 + -1;
      sVar3 = -1;
      if (sVar4 == 0) goto LAB_000006ba;
      sVar4 = sVar5;
    } while ((((*(char *)((*(uint *)(*(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                     _DAT_00028850 +
                                    *(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                          + _DAT_0002884c + 0x711) != '\n') ||
              (iVar7 = sVar5 * 0x42 + _DAT_0002884c,
              (int)*(char *)(iVar7 + 0x15d9) == (int)*(short *)(_DAT_0002884c + 0x110))) ||
             (sVar5 == *(short *)(_DAT_00028978 + 0x46))) ||
            ((sVar3 = func_0x00006e48(*(undefined2 *)(iVar7 + 0x15c6),param_2._0_2_), 2 < sVar3 ||
             (sVar3 = func_0x00002da0(), sVar3 == 0))));
    if ((*(byte *)(sVar5 + _DAT_00028978 + 0x11e) & 1) != 0) {
      func_0x00002e08();
    }
    sVar3 = sVar5;
  } while ((*(byte *)(sVar5 + _DAT_00028978 + 0x11e) & 1) != 0);
LAB_000006ba:
  if (sVar3 == -1) {
    uVar2 = 0;
  }
  else {
    sVar4 = 8;
    while (sVar4 != 0) {
      local_18[(short)(sVar4 + -1) + 2] = -1;
      sVar4 = sVar4 + -1;
    }
    func_0x00003e38((short)local_18 + 4,0);
    sVar4 = func_0x00002cb8(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
    iVar7 = param_1._0_2_ * 0x16 + _DAT_00028854;
    if ((*(char *)(iVar7 + 4) == '\x1c') || ('\x03' < *(char *)(iVar7 + 8))) {
      sVar5 = 0x4b;
    }
    else if ((int)*(short *)(_DAT_00028978 + 6) < (int)*(short *)(_DAT_0002884c + 0x15c2) / 10) {
      sVar5 = 0x32;
    }
    else {
      local_1c = 1;
      local_1a = *(short *)(_DAT_0002884c + 0x136);
      if (*(short *)(_DAT_0002884c + 0x136) < 2) {
        psVar6 = &local_1c;
      }
      else {
        psVar6 = &local_1a;
      }
      local_18[0] = *psVar6 / 2;
      local_18[1] = 10;
      if (*psVar6 / 2 < 0xb) {
        psVar6 = local_18;
      }
      else {
        psVar6 = local_18 + 1;
      }
      if (*psVar6 < *(short *)(_DAT_00028978 + 2)) {
        sVar5 = 0x4b;
      }
      else {
        sVar5 = 0x28;
      }
    }
    if (sVar4 < sVar5) {
      uVar2 = 0;
    }
    else {
      sVar4 = 8;
      while (sVar4 != 0) {
        local_18[(short)(sVar4 + -1) + 2] = -1;
        sVar4 = sVar4 + -1;
      }
      puVar1 = (ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16);
      *puVar1 = *puVar1 & 0xffdf;
      iVar7 = param_1._0_2_ * 0x16 + _DAT_00028854;
      func_0x00007448((short)iVar7);
      func_0x00003e38((short)local_18 + 4,sVar3,(short)((uint)iVar7 >> 0x10));
      FUN_000000a6();
      uVar2 = 1;
    }
  }
  return uVar2;
}



// Function: FUN_00000842 at 00000842
// Size: 666 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000842(undefined4 param_1,undefined4 param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  int iVar3;
  short sVar5;
  undefined4 uVar4;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  short *psVar9;
  undefined2 auStackY_10016 [32748];
  undefined2 local_16 [8];
  short local_6;
  
  sVar5 = FUN_0000000c();
  if ((sVar5 == -1) ||
     (uVar8 = *(ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16), (uVar8 & 0x1000) != 0)) {
    uVar4 = 0;
  }
  else {
    if ((local_6 == 1) && (uVar6 = func_0x00002db0(), (uVar8 & uVar6) != 0)) {
      return 0;
    }
    if ((*(char *)(_DAT_00028854 + 4 + param_1._0_2_ * 0x16) == '\x1c') || (local_6 == 1)) {
      uVar8 = (ushort)((uint)(*(int *)(param_2._0_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._2_2_ * 2)
                             << 4) >> 0x1c);
      if ((uVar8 == 0xf) || (uVar8 == *(ushort *)(_DAT_0002884c + 0x110))) {
        sVar7 = 8;
        while (sVar7 != 0) {
          local_16[(short)(sVar7 + -1)] = 0xffff;
          sVar7 = sVar7 + -1;
        }
        func_0x00003e38((short)local_16,0);
        _DAT_000288ac[9] = param_1._2_2_;
        _DAT_000288ac[10] = param_2._0_2_;
        func_0x00007448((short)_DAT_000288ac);
        sVar7 = FUN_000000a6();
        if (sVar7 == 1) {
          uVar4 = 0;
        }
        else {
          psVar9 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
          if ((param_1._2_2_ == *psVar9) && (param_2._0_2_ == psVar9[1])) {
            _DAT_000288ac = psVar9;
            if (*(char *)(psVar9 + 2) == '\x1c') {
              func_0x00002c88(sVar5);
            }
            else {
              func_0x00003288();
            }
            if (local_6 == 5) {
              sVar5 = *(short *)(_DAT_0002884c + 0x182);
              while (sVar7 = sVar5 + -1, sVar5 != 0) {
                sVar5 = sVar7;
                if ((((*(char *)(_DAT_0002884c + 0x111) ==
                       *(char *)(_DAT_00028854 + 5 + sVar7 * 0x16)) &&
                     (*(uint *)(_DAT_00028854 + 0xe + sVar7 * 0x16) >> 0x1c == 0)) &&
                    (psVar9 = (short *)(sVar7 * 0x16 + _DAT_00028854),
                    *(char *)(_DAT_00028864 + 4 + (short)*(char *)(psVar9 + 2) * 6) != '\0')) &&
                   ((param_1._2_2_ == *psVar9 && (param_2._0_2_ == psVar9[1])))) {
                  psVar9[6] = psVar9[6] | 0x20;
                  func_0x00007448(sVar7 * 0x16 + (short)_DAT_00028854);
                }
              }
            }
          }
          else {
            if ((local_6 == 1) &&
               ((*(ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16) & 0x1000) != 0)) {
              uVar8 = func_0x00002db0();
              puVar1 = (ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16);
              *puVar1 = uVar8 | *puVar1;
            }
            puVar1 = (ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16);
            *puVar1 = *puVar1 | 0x40;
          }
          puVar1 = (ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16);
          *puVar1 = *puVar1 | 0x20;
          iVar3 = _DAT_00028854;
          pbVar2 = (byte *)(_DAT_00028854 + 0xe + param_1._0_2_ * 0x16);
          *pbVar2 = *pbVar2 & 0xf;
          pbVar2 = (byte *)(iVar3 + 0xf + param_1._0_2_ * 0x16);
          *pbVar2 = *pbVar2 & 0x80;
          *(undefined2 *)(iVar3 + 0x14 + param_1._0_2_ * 0x16) = 0xffff;
          *(undefined2 *)(_DAT_00028854 + 0x12 + param_1._0_2_ * 0x16) = 0xffff;
          func_0x00007448(param_1._0_2_ * 0x16 + (short)_DAT_00028854);
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// Function: FUN_00000adc at 00000adc
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000adc(undefined4 param_1,undefined4 param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  int iVar3;
  short sVar4;
  
  *(undefined2 *)(_DAT_00028854 + 0x12 + param_1._0_2_ * 0x16) = param_1._2_2_;
  *(undefined2 *)(_DAT_00028854 + 0x14 + param_1._0_2_ * 0x16) = param_2._0_2_;
  func_0x00007448(param_1._0_2_ * 0x16 + _DAT_00028854);
  func_0x00002b00(param_1._0_2_ * 0x16 + _DAT_00028854);
  sVar4 = FUN_000000a6();
  if (sVar4 == 1) {
    puVar1 = (ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16);
    *puVar1 = *puVar1 & 0xffdf;
    iVar3 = _DAT_00028854;
    pbVar2 = (byte *)(_DAT_00028854 + 0xe + param_1._0_2_ * 0x16);
    *pbVar2 = *pbVar2 & 0xf;
    pbVar2 = (byte *)(iVar3 + 0xf + param_1._0_2_ * 0x16);
    *pbVar2 = *pbVar2 & 0x80;
  }
  puVar1 = (ushort *)(_DAT_00028854 + 0xc + param_1._0_2_ * 0x16);
  *puVar1 = *puVar1 | 0x40;
  *(undefined2 *)(_DAT_00028854 + 0x14 + param_1._0_2_ * 0x16) = 0xffff;
  *(undefined2 *)(_DAT_00028854 + 0x12 + param_1._0_2_ * 0x16) = 0xffff;
  *(undefined1 *)(_DAT_00028854 + 0x11 + param_1._0_2_ * 0x16) = 0;
  func_0x00007448(param_1._0_2_ * 0x16 + _DAT_00028854);
  return;
}



