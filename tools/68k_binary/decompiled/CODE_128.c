// Warlords II - Decompiled 68k Code
// Segment: CODE_128
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000003a at 0000003a
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000003a(undefined4 param_1)

{
  FUN_00000100(*(undefined2 *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x814));
  return;
}



// Function: FUN_0000006a at 0000006a
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000006a(undefined4 param_1)

{
  FUN_00000232(*(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6));
  return;
}



// Function: FUN_00000098 at 00000098
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000098(undefined4 param_1)

{
  FUN_00000232(*(undefined2 *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x814));
  return;
}



// Function: FUN_000000c8 at 000000c8
// Size: 28 bytes

void FUN_000000c8(int param_1)

{
  FUN_00000100(*(undefined2 *)(param_1 + 2));
  return;
}



// Function: FUN_000000e4 at 000000e4
// Size: 28 bytes

void FUN_000000e4(int param_1)

{
  FUN_00000232(*(undefined2 *)(param_1 + 2));
  return;
}



// Function: FUN_00000100 at 00000100
// Size: 306 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000100(undefined4 param_1)

{
  short sVar1;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if ((*(short *)(_DAT_0002884c + 0x124) == 0) ||
     ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x20) != 0)) {
    local_a = param_1._0_2_ * 2;
    param_1._2_2_ = param_1._2_2_ * 2;
    sVar1 = param_1._2_2_ + -1;
    local_8 = param_1._2_2_ + 4;
    local_6 = local_a + 4;
    local_c = param_1._2_2_;
    func_0x00002390(_DAT_000273a2,&local_c);
    func_0x00002398(_DAT_000273a2,sVar1);
    func_0x00002398(_DAT_000273a2,param_1._2_2_ + 4);
    func_0x00002398(_DAT_000273a2,sVar1);
    func_0x00002398(_DAT_000273a2,sVar1);
  }
  return;
}



// Function: FUN_00000232 at 00000232
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000232(undefined4 param_1)

{
  short sVar1;
  
  if ((*(short *)(_DAT_0002884c + 0x124) == 0) ||
     ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x20) != 0)) {
    sVar1 = param_1._2_2_ * 2 + -2;
    func_0x00002398(_DAT_000273a2,sVar1,sVar1);
    func_0x00002398(_DAT_000273a2,param_1._2_2_ * 2 + 5);
    func_0x00002398(_DAT_000273a2,sVar1);
    func_0x00002398(_DAT_000273a2,sVar1);
  }
  return;
}



// Function: FUN_0000030e at 0000030e
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000030e(undefined4 param_1,undefined4 param_2)

{
  if (((*(short *)(_DAT_0002884c + 0x124) == 0) ||
      ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x20) != 0)) &&
     ((*(short *)(_DAT_0002884c + 0x124) == 0 ||
      ((*(byte *)(param_2._2_2_ * 0x70 + _DAT_00028858 + (int)param_2._0_2_) & 0x20) != 0)))) {
    func_0x00002398(_DAT_000273a2,param_1._2_2_ * 2 + -2,param_2._2_2_ * 2 + -2);
  }
  return;
}



// Function: FUN_000003ae at 000003ae
// Size: 538 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003ae(undefined4 param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  
  if (*(short *)(_DAT_0002884c + 0x11e) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (sVar2 = 0; sVar2 < *(short *)(_DAT_0002884c + 0x810); sVar2 = sVar2 + 1) {
    if (*(char *)(sVar2 * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      puVar1 = (uint *)(*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 + _DAT_00028850 +
                       *(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x812) * 2);
      *puVar1 = *puVar1 & 0xffffff | 0xb000000;
    }
    else {
      iVar3 = sVar2 * 0x20 + _DAT_0002884c;
      if ((*(short *)(iVar3 + 0x82e) == 0) ||
         ((1 << ((int)param_1._0_2_ & 0x3fU) & (int)*(short *)(iVar3 + 0x830)) == 0)) {
        if ((*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x82e) == 0) ||
           (*(short *)(_DAT_0002884c + 0x11e) != 0)) {
          if (*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x82e) == 0) {
            puVar1 = (uint *)(*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 +
                              _DAT_00028850 + *(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x812) * 2);
            *puVar1 = *puVar1 & 0xffffff | 0xc000000;
          }
          else {
            puVar1 = (uint *)(*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 +
                              _DAT_00028850 + *(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x812) * 2);
            *puVar1 = *puVar1 & 0xffffff | 0x9000000;
          }
        }
        else {
          puVar1 = (uint *)(*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 + _DAT_00028850
                           + *(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x812) * 2);
          *puVar1 = *puVar1 & 0xffffff | 0xa000000;
        }
      }
      else {
        puVar1 = (uint *)(*(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 + _DAT_00028850 +
                         *(short *)(sVar2 * 0x20 + _DAT_0002884c + 0x812) * 2);
        *puVar1 = *puVar1 & 0xffffff | 0xa000000;
      }
    }
    if (*(short *)(_DAT_0002884c + 0x11e) != 0) {
      FUN_000018ec();
    }
  }
  if (*(short *)(_DAT_0002884c + 0x11e) != 0) {
    func_0x000075a0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000610 at 00000610
// Size: 860 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00000610(short *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar6;
  short sVar5;
  short sVar7;
  short *psVar8;
  int iVar9;
  undefined2 uVar10;
  short sVar11;
  undefined4 uVar12;
  undefined4 local_1e;
  undefined4 local_1a;
  short local_16;
  short local_14;
  short sStack_12;
  short local_10;
  short sStack_e;
  undefined4 local_c;
  undefined4 local_8;
  
  if (_DAT_00028cce == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    _DAT_000273a2 = _DAT_00028cce + 0x1f;
    bVar6 = (**(code **)(*_DAT_00028cce + 0x1d8))();
    uVar4 = (uint)bVar6;
  }
  if ((char)uVar4 != '\0') {
    psVar8 = param_1;
    if (param_1 == (short *)0x0) {
      psVar8 = (short *)&DAT_00015a18;
    }
    local_14 = (short)((uint)*(undefined4 *)psVar8 >> 0x10);
    sStack_12 = (short)*(undefined4 *)psVar8;
    local_10 = (short)((uint)*(undefined4 *)(psVar8 + 2) >> 0x10);
    sStack_e = (short)*(undefined4 *)(psVar8 + 2);
    _local_14 = CONCAT22(local_14 + -3,sStack_12 + -3);
    _local_10 = CONCAT22(local_10 + 4,sStack_e + 4);
    if (param_1 == (short *)0x0) {
      local_c = _DAT_00015a18;
      local_8 = _DAT_00015a1c;
      func_0x00002a48((short)&local_1e,0,0x70009c);
    }
    else {
      local_1e = *(undefined4 *)param_1;
      local_1a = *(undefined4 *)(param_1 + 2);
      local_c = CONCAT22(*param_1 * 2,param_1[1] * 2);
      local_8 = CONCAT22(param_1[2] * 2,param_1[3] * 2);
    }
    uVar4 = func_0x00002380(0x140d0,local_c._2_2_,local_8._2_2_,(short)_DAT_000273a2,local_c,0);
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      uVar4 = func_0x00002380(0x140ec,local_c._2_2_,local_8._2_2_,(short)_DAT_000273a2,local_c,
                              0x10024);
    }
    for (sVar7 = 0; sVar7 < *(short *)(_DAT_0002884c + 0x810); sVar7 = sVar7 + 1) {
      uVar4 = sVar7 * 0x20;
      psVar8 = (short *)(uVar4 + _DAT_0002884c + 0x812);
      sVar11 = *psVar8;
      sVar1 = *(short *)(uVar4 + _DAT_0002884c + 0x814);
      if (local_14 <= sVar11) {
        uVar4 = (uint)sVar11;
        if (((int)uVar4 < (int)local_10 + (int)local_14) && (sStack_12 <= sVar1)) {
          uVar4 = (uint)sVar1;
          if (((int)uVar4 < (int)sStack_e + (int)sStack_12) &&
             ((*(short *)(_DAT_0002884c + 0x124) == 0 ||
              (uVar4 = func_0x00002860(*(undefined4 *)psVar8,0x10001), (short)uVar4 != 0)))) {
            iVar9 = sVar7 * 0x20 + _DAT_0002884c;
            uVar4 = 0;
            if ((1 << ((int)_DAT_00028846 & 0x3fU) & (int)*(short *)(iVar9 + 0x830)) != 0) {
              if (*(char *)(iVar9 + 0x82a) == '\x01') {
                sVar5 = 2;
              }
              else if ((*(byte *)(sVar1 * 0xe0 + _DAT_00028850 + 1 + sVar11 * 2) & 0x40) == 0) {
                if (*(short *)(sVar7 * 0x20 + _DAT_0002884c + 0x82e) == 0) {
                  sVar5 = 0;
                }
                else {
                  sVar5 = 3;
                }
              }
              else {
                sVar5 = 1;
              }
              sVar2 = sVar11 * 2 + -5;
              sVar1 = sVar1 * 2;
              uVar3 = sVar1 - 4;
              uVar4 = func_0x00002380(0x14140,*(undefined2 *)(&DAT_00015dca + sVar5 * 8),
                                      *(undefined2 *)(&DAT_00015dce + sVar5 * 8),
                                      (short)_DAT_000273a2,CONCAT22(sVar2,uVar3),0x10024);
              if (sVar7 == param_2._0_2_) {
                iVar9 = (uint)uVar3 << 0x10;
                uVar12 = CONCAT22(uVar3,sVar11 * 2 + 6);
                uVar10 = (undefined2)((uint)_DAT_000273a2 >> 0x10);
                sVar11 = sVar2;
                func_0x00002398((short)_DAT_000273a2);
                func_0x00002398(_DAT_000273a2,CONCAT22(sVar2,sVar1 + 5),sVar1 + 5,uVar10,sVar11,
                                uVar12,iVar9);
                local_16 = sVar1 + 5;
                func_0x00002398(_DAT_000273a2,uVar3);
                uVar4 = func_0x00002398(_DAT_000273a2,uVar3);
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}



// Function: FUN_0000096c at 0000096c
// Size: 1066 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000096c(short *param_1,int param_2)

{
  short sVar1;
  char cVar5;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar6;
  short asStackY_10016 [32711];
  undefined4 local_2e;
  undefined4 local_2a;
  int local_26;
  int local_22;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16 [4];
  short local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  if (_DAT_00028cce == (int *)0x0) {
    cVar5 = '\0';
  }
  else {
    _DAT_000273a2 = _DAT_00028cce + 0x1f;
    cVar5 = (**(code **)(*_DAT_00028cce + 0x1d8))();
  }
  if (cVar5 != '\0') {
    if (param_1 == (short *)0x0) {
      local_c = _DAT_00015a18;
      local_8 = _DAT_00015a1c;
      func_0x00002a48((short)&local_2e,0,0x70009c);
    }
    else {
      local_2e = *(undefined4 *)param_1;
      local_2a = *(undefined4 *)(param_1 + 2);
      local_c = CONCAT22(*param_1 * 2,param_1[1] * 2);
      local_8 = CONCAT22(param_1[2] * 2,param_1[3] * 2);
    }
    func_0x00002380(0x140d0,local_c._2_2_,local_8._2_2_,(short)_DAT_000273a2,local_c,0);
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      func_0x00002380(0x140ec,local_c._2_2_,local_8._2_2_,(short)_DAT_000273a2,local_c,0x10024);
    }
    for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x15c2); sVar3 = sVar3 + 1) {
      if ((int)*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)*(short *)(_DAT_0002884c + 0x110)) {
        if (param_2._2_2_ == -1) {
          func_0x000032b8();
          iVar6 = local_e + 1;
joined_r0x00000b26:
          if ((4 < iVar6) && (sVar3 != param_2._0_2_)) goto LAB_00000bd4;
        }
        else if (-1 < param_2._2_2_) {
          func_0x000032b8();
          iVar6 = (int)param_2._2_2_ + (int)local_e;
          goto joined_r0x00000b26;
        }
        iVar6 = sVar3 * 0x42 + _DAT_0002884c;
        if (*(char *)(iVar6 + 0x15f1) < '\x01') {
          sVar2 = 3;
        }
        else {
          sVar2 = 0;
        }
        sVar4 = *(short *)(iVar6 + 0x15c4) * 2;
        sVar1 = *(short *)(iVar6 + 0x15c6) * 2;
        if ((-1 < param_2) && (param_2._0_2_ == sVar3)) {
          if (sVar2 == 0) {
            sVar2 = 4;
          }
          else {
            sVar2 = 6;
          }
          local_1c = sVar4 + 2;
          local_1e = sVar1 + 2;
        }
        func_0x00002380(0x14140,*(undefined2 *)(sVar2 * 8 + 0x15222),
                        *(undefined2 *)(sVar2 * 8 + 0x15226),(short)_DAT_000273a2,
                        CONCAT22(sVar4 + -2,sVar1 + -1),0x10024);
      }
LAB_00000bd4:
    }
    if (-1 < param_2) {
      iVar6 = param_2._0_2_ * 0x42 + _DAT_0002884c;
      if (*(short *)(iVar6 + 0x15f6) != 0) {
        sVar3 = func_0x00004938(*(undefined4 *)(iVar6 + 0x15f8));
        local_22 = sVar3 * 0x42 + _DAT_0002884c;
        sVar3 = *(short *)(local_22 + 0x15c4) * 2;
        sVar2 = *(short *)(local_22 + 0x15c6) * 2;
        local_18 = sVar3 + 2;
        local_1a = sVar2 + 2;
        if (*(char *)(local_22 + 0x15f1) < '\x01') {
          sVar4 = 5;
        }
        else {
          sVar4 = 1;
        }
        func_0x00002380(0x14140,*(undefined2 *)(sVar4 * 8 + 0x15222),
                        *(undefined2 *)(sVar4 * 8 + 0x15226),(short)_DAT_000273a2,
                        CONCAT22(sVar3 + -2,sVar2 + -1),0x10024);
        func_0x00002398(_DAT_000273a2,local_1e);
      }
      func_0x000032b8();
      for (sVar3 = 0; sVar3 < local_e; sVar3 = sVar3 + 1) {
        local_26 = local_16[sVar3] * 0x42 + _DAT_0002884c;
        sVar2 = *(short *)(local_26 + 0x15c4) * 2;
        sVar4 = *(short *)(local_26 + 0x15c6) * 2;
        local_18 = sVar2 + 2;
        local_1a = sVar4 + 2;
        func_0x00002380(0x14140,_DAT_00015232,_DAT_00015236,(short)_DAT_000273a2,
                        CONCAT22(sVar2 + -2,sVar4 + -1),0x10024);
        func_0x00002398(_DAT_000273a2,local_1e);
      }
    }
  }
  return;
}



// Function: FUN_00000d96 at 00000d96
// Size: 458 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d96(undefined4 param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar5;
  short sVar4;
  short sVar6;
  ushort uVar7;
  int iVar8;
  
  if (((*(short *)(_DAT_0002884c + 0x124) == 0) ||
      (*(short *)(_DAT_00028846 * 2 + _DAT_0002884c + 0xd0) == 0)) ||
     (*(short *)(_DAT_0002884c + 0x15a) != 0)) {
    if (_DAT_00028cce == (int *)0x0) {
      cVar5 = '\0';
    }
    else {
      _DAT_000273a2 = _DAT_00028cce + 0x1f;
      cVar5 = (**(code **)(*_DAT_00028cce + 0x1d8))();
    }
    if (cVar5 != '\0') {
      for (sVar6 = 0; sVar6 < *(short *)(_DAT_0002884c + 0x15c2); sVar6 = sVar6 + 1) {
        iVar8 = sVar6 * 0x42 + _DAT_0002884c;
        psVar1 = (short *)(iVar8 + 0x15c4);
        sVar2 = *psVar1;
        sVar3 = *(short *)(iVar8 + 0x15c6);
        if ((*(short *)(_DAT_0002884c + 0x124) == 0) ||
           (sVar4 = func_0x00002860(*(undefined4 *)psVar1,0x20002), sVar4 != 0)) {
          sVar2 = sVar2 * 2 + -1;
          sVar3 = sVar3 * 2;
          if (*(char *)(param_2 + sVar6) == -1) {
            uVar7 = 0xffff;
          }
          else if (*(char *)(param_2 + sVar6) == '\x0f') {
            uVar7 = 8;
          }
          else {
            uVar7 = (ushort)*(char *)(param_2 + sVar6);
          }
          if ((short)uVar7 < 0) {
            func_0x00003b18(0xf0000,_DAT_000273a2,CONCAT22(sVar2,sVar3 + -1));
            func_0x00002398(_DAT_000273a2,sVar3);
            func_0x00002398(_DAT_000273a2,sVar3 + 6);
          }
          else {
            func_0x00003b18((uint)uVar7 << 0x10,_DAT_000273a2,CONCAT22(sVar2,sVar3 + -1));
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00000f60 at 00000f60
// Size: 558 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f60(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar4;
  short sVar3;
  short sVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  
  if (((*(short *)(_DAT_0002884c + 0x124) == 0) ||
      (*(short *)(_DAT_00028846 * 2 + _DAT_0002884c + 0xd0) == 0)) ||
     (*(short *)(_DAT_0002884c + 0x15a) != 0)) {
    if (_DAT_00028cce == (int *)0x0) {
      cVar4 = '\0';
    }
    else {
      _DAT_000273a2 = _DAT_00028cce + 0x1f;
      cVar4 = (**(code **)(*_DAT_00028cce + 0x1d8))();
    }
    if (cVar4 != '\0') {
      for (sVar5 = 0; sVar5 < 0x70; sVar5 = sVar5 + 1) {
        for (sVar6 = 0; sVar6 < 0x9c; sVar6 = sVar6 + 1) {
          pbVar1 = (byte *)(sVar6 * 0xe0 + _DAT_00028850 + 1 + sVar5 * 2);
          *pbVar1 = *pbVar1 & 0xef;
        }
      }
      for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x182); sVar5 = sVar5 + 1) {
        psVar8 = (short *)(sVar5 * 0x16 + _DAT_00028854);
        sVar6 = *psVar8;
        sVar7 = psVar8[1];
        uVar2 = *(undefined4 *)psVar8;
        if (((((-1 < sVar6) && (-1 < sVar7)) &&
             (((*(byte *)(sVar7 * 0xe0 + _DAT_00028850 + 1 + sVar6 * 2) & 0x10) == 0 ||
              (-1 < param_2._2_2_)))) &&
            ((pbVar1 = (byte *)(sVar7 * 0xe0 + _DAT_00028850 + 1 + sVar6 * 2),
             *pbVar1 = *pbVar1 | 0x10, *(short *)(_DAT_0002884c + 0x124) == 0 ||
             (sVar3 = func_0x00002860(uVar2,0x10001), sVar3 != 0)))) &&
           ((param_3._2_2_ == 0 ||
            (*(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar6 * 2) >> 0x18) + _DAT_0002884c
                      + 0x711) != '\n')))) {
          sVar3 = (short)*(char *)(_DAT_00028854 + 5 + sVar5 * 0x16);
          if (sVar3 == 0xf) {
            sVar3 = 8;
          }
          if ((((param_3._0_2_ == 0) || (sVar3 != _DAT_00028846)) &&
              ((param_2 < 0 ||
               ((int)param_2._0_2_ == (int)*(char *)(_DAT_00028854 + 5 + sVar5 * 0x16))))) &&
             ((param_2._2_2_ < 0 ||
              ((int)param_2._2_2_ == (int)*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16))))) {
            sVar6 = sVar6 * 2 + -1;
            sVar7 = sVar7 * 2 + -1;
            if (sVar6 < 0) {
              sVar6 = 0;
            }
            if (sVar7 < 0) {
              sVar7 = 0;
            }
            func_0x00003b18(CONCAT22(sVar3,7),_DAT_000273a2,CONCAT22(sVar6,sVar7));
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_0000118e at 0000118e
// Size: 1318 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000118e(short *param_1,int param_2)

{
  char cVar4;
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar5;
  int iVar6;
  short asStackY_100e0 [6];
  short asStackY_100d4 [32693];
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 local_fe;
  undefined4 local_fa;
  short local_f6;
  short local_f4;
  int local_f2;
  int local_ee;
  int local_ea;
  short local_e6;
  short local_e4;
  short local_e2;
  short local_e0 [4];
  short local_d8;
  short local_d6;
  short local_d4 [100];
  undefined4 local_c;
  undefined4 local_8;
  
  if (_DAT_00028cce == (int *)0x0) {
    cVar4 = '\0';
  }
  else {
    _DAT_000273a2 = _DAT_00028cce + 0x1f;
    cVar4 = (**(code **)(*_DAT_00028cce + 0x1d8))();
  }
  if (cVar4 != '\0') {
    if (param_1 == (short *)0x0) {
      local_c = _DAT_00015a18;
      local_8 = _DAT_00015a1c;
      func_0x00002a48((short)&local_fe,0,0x70009c);
    }
    else {
      local_fe = *(undefined4 *)param_1;
      local_fa = *(undefined4 *)(param_1 + 2);
      local_c = CONCAT22(*param_1 * 2,param_1[1] * 2);
      local_8 = CONCAT22(param_1[2] * 2,param_1[3] * 2);
    }
    func_0x00002380(0x140d0,local_c._2_2_,local_8._2_2_,(short)_DAT_000273a2,local_c,0);
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      func_0x00002380(0x140ec,local_c._2_2_,local_8._2_2_,(short)_DAT_000273a2,local_c,0x10024);
    }
    for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x15c2); sVar5 = sVar5 + 1) {
      local_d4[sVar5] = 0;
    }
    for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x15c2); sVar5 = sVar5 + 1) {
      if (((int)*(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9) == (int)_DAT_00028846) &&
         (local_d4[sVar5] == 0)) {
        local_d4[sVar5] = 1;
        func_0x000032b8();
        iVar6 = sVar5 * 0x42 + _DAT_0002884c;
        if (*(char *)(iVar6 + 0x15f1) < '\x01') {
          sVar1 = 3;
        }
        else {
          sVar1 = 0;
        }
        if (*(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15f6) != 0) {
          sVar1 = 2;
        }
        if (0 < local_e6) {
          if (*(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
            sVar1 = 5;
          }
          else {
            sVar1 = 1;
          }
        }
        sVar3 = *(short *)(iVar6 + 0x15c4) * 2;
        sVar2 = *(short *)(iVar6 + 0x15c6) * 2;
        local_e2 = sVar3 + 2;
        local_e4 = sVar2 + 2;
        func_0x00002380(0x14140,*(undefined2 *)(sVar1 * 8 + 0x15222),
                        *(undefined2 *)(sVar1 * 8 + 0x15226),(short)_DAT_000273a2,
                        CONCAT22(sVar3 + -2,sVar2 + -1),0x10024);
        iVar6 = sVar5 * 0x42 + _DAT_0002884c;
        if (*(short *)(iVar6 + 0x15f6) != 0) {
          sVar1 = func_0x00004938(*(undefined4 *)(iVar6 + 0x15f8));
          local_d4[sVar1] = 1;
          local_ea = sVar1 * 0x42 + _DAT_0002884c;
          sVar1 = *(short *)(local_ea + 0x15c4) * 2;
          sVar3 = *(short *)(local_ea + 0x15c6) * 2;
          local_d6 = sVar1 + 2;
          local_d8 = sVar3 + 2;
          if (*(char *)(local_ea + 0x15f1) < '\x01') {
            sVar2 = 5;
          }
          else {
            sVar2 = 1;
          }
          func_0x00002380(0x14140,*(undefined2 *)(sVar2 * 8 + 0x15222),
                          *(undefined2 *)(sVar2 * 8 + 0x15226),(short)_DAT_000273a2,
                          CONCAT22(sVar1 + -2,sVar3 + -1),0x10024);
          func_0x00002398(_DAT_000273a2);
        }
        for (sVar1 = 0; sVar1 < local_e6; sVar1 = sVar1 + 1) {
          local_d4[local_e0[sVar1]] = 1;
          local_ee = local_e0[sVar1] * 0x42 + _DAT_0002884c;
          sVar3 = *(short *)(local_ee + 0x15c4) * 2;
          sVar2 = *(short *)(local_ee + 0x15c6) * 2;
          local_d6 = sVar3 + 2;
          local_d8 = sVar2 + 2;
          func_0x00002380(0x14140,_DAT_00015232,_DAT_00015236,(short)_DAT_000273a2,
                          CONCAT22(sVar3 + -2,sVar2 + -1),0x10024);
          func_0x00002398(_DAT_000273a2);
        }
      }
    }
    if (-1 < param_2) {
      local_f2 = param_2._0_2_ * 0x42 + _DAT_0002884c;
      sVar5 = *(short *)(local_f2 + 0x15c4) * 2;
      sVar1 = *(short *)(local_f2 + 0x15c6) * 2;
      local_f4 = sVar5 + 7;
      iVar6 = (uint)(ushort)(sVar1 - 2) << 0x10;
      uVar8 = CONCAT22(sVar1 + -2,local_f4);
      sVar3 = sVar5 + -3;
      uVar7 = (undefined2)((uint)_DAT_000273a2 >> 0x10);
      func_0x00002398((short)_DAT_000273a2);
      func_0x00002398(_DAT_000273a2,CONCAT22(sVar5 + -3,sVar1 + 9),sVar1 + 9,uVar7,sVar3,uVar8,iVar6
                     );
      local_f6 = sVar1 + 8;
      func_0x00002398(_DAT_000273a2,CONCAT22(sVar5 + -3,sVar1 + -2));
      func_0x00002398(_DAT_000273a2,sVar1 + -2);
    }
  }
  return;
}



// Function: FUN_000016b4 at 000016b4
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016b4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  
  if (_DAT_00028cce == (int *)0x0) {
    cVar1 = '\0';
  }
  else {
    _DAT_000273a2 = _DAT_00028cce + 0x1f;
    cVar1 = (**(code **)(*_DAT_00028cce + 0x1d8))();
  }
  if (cVar1 != '\0') {
    sVar3 = param_1._0_2_ * 2 + -6;
    sVar2 = param_1._2_2_ * 2 + -6;
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    if (sVar2 < 0) {
      sVar2 = 0;
    }
    func_0x00002380(0x14140,*(undefined2 *)(param_2._0_2_ * 8 + 0x15212),
                    *(undefined2 *)(param_2._0_2_ * 8 + 0x15216),_DAT_000273a2,CONCAT22(sVar3,sVar2)
                    ,0x10024);
  }
  return;
}



// Function: FUN_00001770 at 00001770
// Size: 298 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001770(void)

{
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 local_c;
  undefined4 local_8;
  
  if (_DAT_00027fd4 == (int *)0x0) {
    func_0x00006d80(_DAT_000297f4);
    (**(code **)(*_DAT_000257ee + 0x68))();
    func_0x00001bf0(extraout_A0);
    _DAT_00027fd4 = extraout_A0;
    (**(code **)(*extraout_A0 + 0x194))();
    (**(code **)(*extraout_A0 + 0x268))();
  }
  func_0x00002ad8(0x8a0006);
  func_0x00002ad8(0x8a0005,extraout_A0_00);
  func_0x00002ad8(4,extraout_A0_01);
  func_0x00002ad8(3,extraout_A0w);
  func_0x00002ad8(2,extraout_A0w_00);
  func_0x00002ad8(0x8a0001,extraout_A0w_01);
  func_0x00002ad8(0x8a0000,extraout_A0_02);
  func_0x000029a8(extraout_A0_03);
  local_c = 0xca;
  local_8 = 0x3c;
  func_0x00003328(_DAT_00027fd4,(short)&local_c);
  func_0x00003330((short)_DAT_00027fd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000018ec at 000018ec
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001964) */

void FUN_000018ec(undefined4 param_1,undefined4 param_2)

{
  if (param_1._0_2_ == 0) {
    func_0x000075b0(CONCAT22(param_1._2_2_,param_2._0_2_));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



