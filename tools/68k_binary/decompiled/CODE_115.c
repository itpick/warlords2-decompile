// Warlords II - Decompiled 68k Code
// Segment: CODE_115
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 170 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(undefined2 *param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = *param_1;
  local_8 = param_1[1];
  if (((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1) &&
      (_DAT_00028842 != 0)) || (_DAT_00028844 != 0)) {
    func_0x00007418((short)((uint)_DAT_000288ac >> 0x10),2);
  }
  for (sVar1 = 0; sVar1 < param_2._0_2_; sVar1 = sVar1 + 1) {
    func_0x00006e40((short)&local_6,(short)&local_8);
    func_0x00007528(CONCAT22(local_6,local_8));
  }
  func_0x00007530(param_1[4]);
  return;
}



// Function: FUN_000000b6 at 000000b6
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000b6(void)

{
  if (_DAT_000288ac != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000001de at 000001de
// Size: 486 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001de(uint param_1)

{
  byte *pbVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  short *psVar6;
  short sVar7;
  short local_8;
  short local_6;
  
  if (param_1._0_2_ == 1) {
    FUN_0000325a(_DAT_000288ac[1],&local_6,&local_8);
    if ((local_6 == 0) || (local_8 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((param_1 & 8) == 0) || (bVar4)) || (local_8 == 0)) {
      if ((((param_1 & 0x20) != 0) && (!bVar4)) && (local_6 != 0)) {
        bVar4 = false;
        sVar7 = 8;
        while (sVar3 = sVar7 + -1, sVar7 != 0) {
          sVar7 = sVar3;
          if ((*(int *)(&DAT_000288b4 + sVar3 * 4) != 0) &&
             (*(char *)(_DAT_00028864 +
                       (short)*(char *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 4) * 6) != '\0')) {
            bVar4 = true;
          }
        }
        sVar7 = 8;
        while (sVar3 = sVar7 + -1, sVar7 != 0) {
          sVar7 = sVar3;
          if (*(int *)(&DAT_000288b4 + sVar3 * 4) != 0) {
            bVar5 = (*(ushort *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xc) & 0x1000) == 0 &&
                    *(char *)(_DAT_00028864 +
                             (short)*(char *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 4) * 6) == '\0';
            if ((bVar4) && (*(char *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 4) == '\x1c')) {
              bVar5 = false;
            }
            if (bVar5) {
              *(ushort *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xc) =
                   *(ushort *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xc) | 0x1000;
              *(undefined1 *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 7) = 0;
              _DAT_00028912 = 1;
            }
          }
        }
      }
    }
    else {
      sVar7 = 8;
      while (sVar3 = sVar7 + -1, sVar7 != 0) {
        sVar7 = sVar3;
        if ((*(int *)(&DAT_000288b4 + sVar3 * 4) != 0) &&
           ((*(ushort *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xc) & 0x1000) != 0)) {
          *(ushort *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xc) =
               *(ushort *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xc) & 0xefff;
          *(undefined1 *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 7) = 0;
          _DAT_00028912 = 2;
        }
      }
    }
  }
  psVar6 = _DAT_000288ac;
  pbVar1 = (byte *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + 1 + *_DAT_000288ac * 2);
  *pbVar1 = *pbVar1 | 0x10;
  puVar2 = (uint *)(psVar6[1] * 0xe0 + _DAT_00028850 + 1 + *_DAT_000288ac * 2);
  *puVar2 = *puVar2 & 0xf0ffffff | (*(byte *)(_DAT_0002884c + 0x111) & 0xf) << 0x18;
  return;
}



// Function: FUN_000003c4 at 000003c4
// Size: 1382 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000003c4(short *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short *psVar12;
  undefined2 uVar13;
  short local_80;
  short local_7e;
  char local_7b;
  short local_7a [3];
  short local_74;
  short local_72 [2];
  short local_6e;
  byte abStack_6d [101];
  short local_8;
  short local_6;
  
  local_6 = *param_1;
  local_8 = param_1[1];
  sVar8 = 0;
  sVar10 = 0;
  sVar9 = 0;
  local_7e = _DAT_000288f8;
  if (_DAT_000288f4 == 0) {
    local_7e = 1;
  }
  _DAT_00028912 = 0;
  _DAT_000276d6 =
       FUN_00003030((short)param_1,
                    (short)((uint)((byte *)((int)register0x0000003c + -0x6d) + 1) >> 0x10));
  sVar5 = 0;
  local_6e = _DAT_000276d6;
  do {
    if (local_6e <= sVar5) {
LAB_00000796:
      if (sVar8 != 0) {
        bVar2 = ((byte *)((int)register0x0000003c + -0x6d))[sVar8];
        FUN_0000000c((short)param_1);
        if (_DAT_000288f4 == 0) {
          local_7a[0] = (short)*(char *)((int)_DAT_000288ac + 7) - (ushort)bVar2;
          local_7a[1] = 0;
          if (local_7a[0] < 0) {
            psVar12 = local_7a + 1;
          }
          else {
            psVar12 = local_7a;
          }
          *(char *)((int)_DAT_000288ac + 7) = (char)*psVar12;
          if (*_DAT_000288ac != -1) {
            func_0x00007448((short)_DAT_000288ac);
          }
        }
        else {
          local_72[0] = _DAT_000288f6 - (ushort)bVar2;
          local_72[1] = 0;
          if (local_72[0] < 0) {
            psVar12 = local_72 + 1;
          }
          else {
            psVar12 = local_72;
          }
          _DAT_000288f6 = *psVar12;
          sVar10 = 8;
          while (sVar5 = sVar10 + -1, sVar10 != 0) {
            sVar10 = sVar5;
            if ((*(int *)(&DAT_000288b4 + sVar5 * 4) != 0) &&
               (*(char *)(*(int *)(&DAT_000288b4 + sVar5 * 4) + 5) != -1)) {
              local_7a[2] = (short)*(char *)(*(int *)(&DAT_000288b4 + sVar5 * 4) + 7) -
                            (ushort)bVar2;
              local_74 = 0;
              if (local_7a[2] < 0) {
                psVar12 = &local_74;
              }
              else {
                psVar12 = local_7a + 2;
              }
              *(char *)(*(int *)(&DAT_000288b4 + sVar5 * 4) + 7) = (char)*psVar12;
              func_0x00007448((short)*(undefined4 *)(&DAT_000288b4 + sVar5 * 4));
            }
          }
        }
      }
      sVar10 = _DAT_000288f6;
      if (_DAT_000288f4 == 0) {
        sVar10 = (short)*(char *)((int)_DAT_000288ac + 7);
      }
      sVar5 = FUN_0000092a();
      if (((sVar5 == 0) && (sVar10 < 2)) ||
         ((sVar8 != 0 &&
          ((((sVar9 != 5 && (sVar9 != 3)) &&
            (((byte *)((int)register0x0000003c + -0x6d))[sVar8 + 1] != 0xff)) &&
           (sVar10 < (short)(ushort)((byte *)((int)register0x0000003c + -0x6d))[sVar8 + 1])))))) {
        sVar9 = 2;
      }
      return sVar9;
    }
    local_7b = *(char *)(*(int *)(param_1 + 6) + (int)sVar5);
    if ((local_7b == -1) || (sVar4 = func_0x00006e40((short)&local_6,(short)&local_8), sVar4 == 0))
    {
      sVar9 = 4;
      goto LAB_00000796;
    }
    uVar3 = (ushort)((uint)(*(int *)(local_8 * 0xe0 + _DAT_00028850 + 1 + local_6 * 2) << 4) >> 0x10
                    );
    uVar6 = uVar3 >> 0xc;
    uVar7 = uVar3 >> 0xc;
    if (((((uVar6 != 0) && (uVar6 != *(ushort *)(_DAT_0002884c + 0x110))) && (uVar6 != 0xf)) &&
        (((iVar11 = *(short *)(_DAT_0002884c + 0x110) * 2,
          *(short *)(iVar11 + _DAT_0002884c + 0xd0) == 1 &&
          (*(short *)(iVar11 + _DAT_0002884c + 0xc0) == 2)) &&
         (((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                                 (int)(short)uVar6) << 6) >> 0x1e) == 0 &&
          ((*(char *)((*(uint *)(local_8 * 0xe0 + _DAT_00028850 + local_6 * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) == '\v' &&
           (*(short *)((short)uVar6 * 2 + _DAT_0002884c + 0xd0) == 0)))))))) &&
       ((sVar4 = FUN_00002b50(local_8), *(char *)(sVar4 * 0x20 + _DAT_0002884c + 0x82a) == '\x01' ||
        ((*(byte *)(local_8 * 0xe0 + _DAT_00028850 + 1 + local_6 * 2) & 0x40) == 0)))) {
      iVar11 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
      pbVar1 = (byte *)(iVar11 + (short)uVar6);
      *pbVar1 = *pbVar1 & 0xf3;
      pbVar1 = (byte *)(iVar11 + (short)uVar7);
      *pbVar1 = *pbVar1 | 4;
      iVar11 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
      pbVar1 = (byte *)(iVar11 + (short)uVar7);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(iVar11 + (short)uVar7);
      *pbVar1 = *pbVar1 | 1;
      sVar4 = *(short *)(_DAT_0002884c + 0x110);
      iVar11 = (short)uVar7 * 8 + _DAT_0002884c + 0x1582;
      pbVar1 = (byte *)(iVar11 + sVar4);
      *pbVar1 = *pbVar1 & 0xf3;
      pbVar1 = (byte *)(iVar11 + sVar4);
      *pbVar1 = *pbVar1 | 4;
      sVar4 = *(short *)(_DAT_0002884c + 0x110);
      iVar11 = (short)uVar7 * 8 + _DAT_0002884c + 0x1582;
      pbVar1 = (byte *)(iVar11 + sVar4);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(iVar11 + sVar4);
      *pbVar1 = *pbVar1 | 1;
      uVar13 = *(undefined2 *)(_DAT_0002884c + 0x110);
      func_0x00007468();
      func_0x00007468(uVar13);
    }
    if ((*(char *)((*(uint *)(local_8 * 0xe0 + _DAT_00028850 + local_6 * 2) >> 0x18) + _DAT_0002884c
                  + 0x711) == '\n') && (uVar3 >> 0xc != *(ushort *)(_DAT_0002884c + 0x110))) {
      sVar9 = 5;
      _DAT_0002890e = local_6;
      _DAT_00028910 = local_8;
      goto LAB_00000796;
    }
    if ((((*(byte *)(local_8 * 0xe0 + _DAT_00028850 + 1 + local_6 * 2) & 0x10) != 0) &&
        (uVar7 != *(ushort *)(_DAT_0002884c + 0x110))) &&
       ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                              (int)(short)uVar7) << 6) >> 0x1e) != 0)) {
      sVar9 = 3;
      _DAT_0002890e = local_6;
      _DAT_00028910 = local_8;
      goto LAB_00000796;
    }
    FUN_00002b28(local_8,(short)&local_80);
    if (((int)local_80 + (int)local_7e < 9) &&
       (((*(byte *)(local_8 * 0xe0 + _DAT_00028850 + 1 + local_6 * 2) & 0x10) == 0 ||
        (uVar7 == *(ushort *)(_DAT_0002884c + 0x110))))) {
      sVar8 = sVar10 + 1 + sVar8;
      sVar10 = 0;
    }
    else {
      sVar10 = sVar10 + 1;
    }
    sVar5 = sVar5 + 1;
  } while( true );
}



// Function: FUN_0000092a at 0000092a
// Size: 380 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000092a(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  if ((_DAT_000288ac == (short *)0x0) || (param_1._0_2_ != 1)) {
    return 0;
  }
  sVar1 = *_DAT_000288ac;
  sVar2 = _DAT_000288ac[1];
  if ((*(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar1 * 2) >> 0x18) + _DAT_0002884c +
                0x711) == '\v') && (sVar3 = FUN_00002b50(sVar2), -1 < sVar3)) {
    if (*(char *)(sVar3 * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      return 1;
    }
    if ((*(byte *)(sVar2 * 0xe0 + _DAT_00028850 + 1 + sVar1 * 2) & 0x40) == 0) {
      return 1;
    }
  }
  sVar3 = sVar1 + -1;
  do {
    if (sVar1 + 1 < (int)sVar3) {
      return 0;
    }
    for (sVar4 = sVar2 + -1; (int)sVar4 <= sVar2 + 1; sVar4 = sVar4 + 1) {
      if ((((-1 < sVar3) && (-1 < sVar4)) && (sVar3 < 0x70)) && (sVar4 < 0x9c)) {
        if (*(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\n') {
          return 1;
        }
        if (((*(byte *)(sVar4 * 0xe0 + _DAT_00028850 + 1 + sVar3 * 2) & 0x10) != 0) &&
           ((int)*(char *)(_DAT_0002884c + 0x111) !=
            (uint)(*(int *)(sVar4 * 0xe0 + _DAT_00028850 + 1 + sVar3 * 2) << 4) >> 0x1c)) {
          return 1;
        }
        if ((uint)(*(int *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3) << 3) >> 0x1b != 0) {
          return 1;
        }
      }
    }
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_00000aa6 at 00000aa6
// Size: 100 bytes

undefined4 FUN_00000aa6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1._0_2_ == param_2._0_2_) && (param_1._2_2_ == param_2._2_2_)) {
    uVar1 = 0xff;
  }
  else if (param_1._0_2_ == param_2._0_2_) {
    if (param_2._2_2_ < param_1._2_2_) {
      uVar1 = 0;
    }
    else {
      uVar1 = 4;
    }
  }
  else if (param_1._2_2_ == param_2._2_2_) {
    if (param_2._0_2_ < param_1._0_2_) {
      uVar1 = 6;
    }
    else {
      uVar1 = 2;
    }
  }
  else if (param_2._0_2_ < param_1._0_2_) {
    if (param_2._2_2_ < param_1._2_2_) {
      uVar1 = 7;
    }
    else {
      uVar1 = 5;
    }
  }
  else if (param_2._2_2_ < param_1._2_2_) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



// Function: FUN_00000b0a at 00000b0a
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000b0a(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 extraout_D0u;
  short sVar3;
  undefined4 uVar2;
  undefined2 uVar4;
  undefined1 auStack_dc [200];
  undefined1 auStack_14 [16];
  
  *(undefined2 *)((int)_DAT_000288ac + 0x12) = param_1._0_2_;
  *(undefined2 *)(_DAT_000288ac + 5) = param_1._2_2_;
  FUN_00002fe2(auStack_14,auStack_dc);
  sVar3 = FUN_000012c6(auStack_14);
  if (sVar3 == 0) {
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
      FUN_00002a20();
    }
    *(undefined2 *)((int)_DAT_000288ac + 0x12) = 0xffff;
    *(undefined2 *)(_DAT_000288ac + 5) = 0xffff;
    func_0x00007448(_DAT_000288ac);
    uVar2 = 1;
  }
  else {
    func_0x00007448(_DAT_000288ac);
    if (param_2._0_2_ == 0) {
      FUN_00001258(*_DAT_000288ac,auStack_dc);
    }
    else {
      _DAT_000276d6 = 0;
      _DAT_000276d2 = 0;
      _DAT_000276d4 = 0;
    }
    uVar2 = FUN_000003c4(auStack_14);
    uVar4 = (undefined2)uVar2;
    if (_DAT_00028912 != 0) {
      uVar2 = FUN_00000c06();
      uVar4 = 2;
    }
    uVar1 = (undefined2)((uint)uVar2 >> 0x10);
    if (param_2._0_2_ == 0) {
      FUN_00002b10();
      func_0x000048d0();
      uVar1 = extraout_D0u;
    }
    uVar2 = CONCAT22(uVar1,uVar4);
  }
  return uVar2;
}



// Function: FUN_00000c06 at 00000c06
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c06(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 8;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    sVar2 = sVar1;
    if ((*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) &&
       (*(char *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 5) != -1)) {
      func_0x00007448(*(undefined4 *)(&DAT_000288b4 + sVar1 * 4));
    }
  }
  return;
}



// Function: FUN_00000c56 at 00000c56
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c56(undefined4 param_1)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  
  sVar4 = 0;
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    psVar5 = (short *)(sVar2 * 0x16 + _DAT_00028854);
    sVar3 = sVar2;
    if ((param_1._0_2_ == *psVar5) && (param_1._2_2_ == psVar5[1])) {
      sVar4 = sVar4 + 1;
    }
  }
  if (sVar4 == 0) {
    pbVar1 = (byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2);
    *pbVar1 = *pbVar1 & 0xef;
    pbVar1 = (byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2);
    *pbVar1 = *pbVar1 & 0xdf;
  }
  return;
}



// Function: FUN_00000cce at 00000cce
// Size: 388 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000cce(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined1 auStack_dc [200];
  undefined1 auStack_14 [16];
  
  if (_DAT_000288ac == (short *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = func_0x000049e0();
    if (sVar2 == 0) {
      uVar1 = 0;
    }
    else if ((param_1._0_2_ == *_DAT_000288ac) && (param_1._2_2_ == _DAT_000288ac[1])) {
      func_0x000073e8();
      uVar1 = 1;
    }
    else {
      for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
        if (*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) {
          *(short *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 0x12) = param_1._0_2_;
          *(short *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 0x14) = param_1._2_2_;
        }
      }
      FUN_00002fe2((short)auStack_14,auStack_dc);
      sVar2 = FUN_000012c6((short)auStack_14);
      if (sVar2 == 0) {
        for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
          if (*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) {
            *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 0x12) = 0xffff;
            *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 0x14) = 0xffff;
            func_0x00007448(*(undefined4 *)(&DAT_000288b4 + sVar2 * 4));
          }
        }
        FUN_00002a20();
        uVar1 = 0;
      }
      else {
        for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
          if (*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) {
            func_0x00007448(*(undefined4 *)(&DAT_000288b4 + sVar2 * 4));
          }
        }
        FUN_00001258(_DAT_000288ac[1],auStack_dc);
        _DAT_000276d6 = FUN_00003030((short)auStack_14);
        func_0x00003ae0();
        if (param_2 != 0) {
          func_0x00004970();
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



// Function: FUN_00000e52 at 00000e52
// Size: 778 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000e52(int param_1,undefined4 param_2)

{
  undefined2 extraout_D0u;
  undefined2 uVar1;
  undefined2 extraout_D0u_00;
  undefined4 uVar2;
  short sVar4;
  int iVar3;
  short sVar5;
  short sVar6;
  short *psVar7;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  short local_8;
  short local_6;
  
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))((short)*(int **)(_DAT_000297f4 + 0x80),0,0)
  ;
  if ((((_DAT_000288ac == (short *)0x0) || (param_1 < 0)) || (param_1._2_2_ < 0)) ||
     ((0x6f < param_1._0_2_ || (0x9b < param_1._2_2_)))) {
    uVar2 = 0;
  }
  else {
    if (_DAT_000288f4 == 0) {
      _DAT_000288ac[6] = _DAT_000288ac[6] | 0x200;
      _DAT_000288ac[9] = param_1._0_2_;
      _DAT_000288ac[10] = param_1._2_2_;
    }
    else {
      sVar4 = 8;
      while (sVar6 = sVar4 + -1, sVar4 != 0) {
        sVar4 = sVar6;
        if (*(int *)(&DAT_000288b4 + sVar6 * 4) != 0) {
          *(ushort *)(*(int *)(&DAT_000288b4 + sVar6 * 4) + 0xc) =
               *(ushort *)(*(int *)(&DAT_000288b4 + sVar6 * 4) + 0xc) | 0x200;
          *(short *)(*(int *)(&DAT_000288b4 + sVar6 * 4) + 0x12) = param_1._0_2_;
          *(short *)(*(int *)(&DAT_000288b4 + sVar6 * 4) + 0x14) = param_1._2_2_;
        }
      }
    }
    sVar4 = FUN_00000b0a();
    if ((*_DAT_000288ac == _DAT_000288ac[9]) && (_DAT_000288ac[1] == _DAT_000288ac[10])) {
      _DAT_000288ac[10] = -1;
      _DAT_000288ac[9] = -1;
    }
    if (sVar4 == 0) {
      func_0x00003ae0();
    }
    if (sVar4 == 2) {
      if (param_2._0_1_ == '\0') {
        if (((_DAT_000288ac == (short *)0x0) || (_DAT_000288ac[9] == -1)) ||
           (_DAT_000288ac[10] == -1)) {
          psVar7 = _DAT_000288ac;
          if (_DAT_000288ac == (short *)0x0) {
            psVar7 = (short *)(_DAT_0002884c + 0x17e);
          }
          sVar4 = *psVar7;
          if (_DAT_000288ac == (short *)0x0) {
            psVar7 = (short *)(_DAT_0002884c + 0x180);
          }
          else {
            psVar7 = _DAT_000288ac + 1;
          }
          sVar6 = *psVar7;
        }
        else {
          sVar4 = _DAT_000288ac[9];
          sVar6 = _DAT_000288ac[10];
        }
        func_0x00003a60((short)_DAT_00027fb8,CONCAT22(sVar4,sVar6));
      }
      else {
        func_0x00007408();
        func_0x000073f8();
      }
      if (*(short *)(_DAT_0002884c + 0x12e) != 0) {
        local_8 = 1;
        local_6 = *(short *)(_DAT_0002884c + 0x136);
        if (*(short *)(_DAT_0002884c + 0x136) < 2) {
          psVar7 = &local_8;
        }
        else {
          psVar7 = &local_6;
        }
        if (*psVar7 == 1) {
          func_0x00002ae0(0x190009);
          func_0x00003c60(extraout_A0);
        }
      }
      uVar2 = 2;
    }
    else {
      iVar3 = func_0x00004970();
      uVar1 = (undefined2)((uint)iVar3 >> 0x10);
      if (*(short *)(_DAT_0002884c + 0x12e) != 0) {
        if ((*(byte *)(_DAT_0002884c + 0x134) & 0x10) == 0) {
          for (sVar6 = 0; uVar1 = (undefined2)((uint)iVar3 >> 0x10), sVar6 < 8; sVar6 = sVar6 + 1) {
            iVar3 = func_0x00004938(CONCAT22(*(short *)(&DAT_00015c1a + sVar6 * 2) + *_DAT_000288ac,
                                             *(short *)(&DAT_00015c0a + sVar6 * 2) +
                                             _DAT_000288ac[1]));
            sVar5 = (short)iVar3;
            if ((-1 < sVar5) &&
               (iVar3 = (int)*(short *)(_DAT_0002884c + 0x110),
               *(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9) != iVar3)) {
              *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x10;
              func_0x00002ae0(0x190004);
              func_0x00003c60(extraout_A0_00);
              uVar1 = extraout_D0u;
              break;
            }
          }
        }
        if ((((*(byte *)(_DAT_0002884c + 0x134) & 0x80) == 0) &&
            (uVar1 = (undefined2)((uint)(_DAT_000288ac[1] * 0xe0) >> 0x10),
            *(char *)((*(uint *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + *_DAT_000288ac * 2) >>
                      0x18) + _DAT_0002884c + 0x711) == '\v')) &&
           (*(char *)(_DAT_000288ac + 2) == '\x1c')) {
          *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x80;
          func_0x00002ae0(0x190005);
          func_0x00003c60(extraout_A0_01);
          uVar1 = extraout_D0u_00;
        }
      }
      uVar2 = CONCAT22(uVar1,sVar4);
    }
  }
  return uVar2;
}



// Function: FUN_0000115c at 0000115c
// Size: 30 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000115c(void)

{
  func_0x00005ed0(*(undefined4 *)(_DAT_000297f4 + 0x80));
  return;
}



// Function: FUN_0000117a at 0000117a
// Size: 142 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000117a(void)

{
  int extraout_A0;
  
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x118))();
  if ((_DAT_000288ac != 0) && (-1 < *(short *)(_DAT_000288ac + 0x12))) {
    func_0x000073e0(*(undefined4 *)(_DAT_000288ac + 0x12));
  }
  while( true ) {
    FUN_000032c0();
    if (extraout_A0 == 0) break;
    *(ushort *)(extraout_A0 + 0xc) = *(ushort *)(extraout_A0 + 0xc) | 0x200;
    if (-1 < *(short *)(extraout_A0 + 0x12)) {
      func_0x00002b00(extraout_A0);
      func_0x000048d0();
      func_0x000073e0(*(undefined4 *)(_DAT_000288ac + 0x12));
    }
  }
  func_0x00004970();
  return;
}



// Function: FUN_00001208 at 00001208
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001208(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  
  _DAT_000288f6 = 100;
  for (sVar2 = 0; sVar2 < param_3._0_2_; sVar2 = sVar2 + 1) {
    if ((*(short *)(param_2 + sVar2 * 2) != 0) &&
       (cVar1 = *(char *)(*(int *)(param_1 + sVar2 * 4) + 7), (int)cVar1 < (int)_DAT_000288f6)) {
      _DAT_000288f6 = (short)cVar1;
    }
  }
  return;
}



// Function: FUN_00001258 at 00001258
// Size: 110 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001258(undefined4 param_1,int param_2)

{
  int iVar1;
  
  for (_DAT_000276d2 = 0; (_DAT_000276d2 < 200 && (*(char *)(param_2 + _DAT_000276d2) != -1));
      _DAT_000276d2 = _DAT_000276d2 + 1) {
    iVar1 = (uint)*(byte *)(param_2 + _DAT_000276d2) * 2;
    param_1._0_2_ = *(short *)(&DAT_00015c1a + iVar1) + param_1._0_2_;
    param_1._2_2_ = *(short *)(&DAT_00015c0a + iVar1) + param_1._2_2_;
    *(short *)(&DAT_000273ae + _DAT_000276d2 * 4) = param_1._0_2_;
    *(short *)(&DAT_000273b0 + _DAT_000276d2 * 4) = param_1._2_2_;
  }
  _DAT_000276d4 = 0;
  _DAT_000276ce = param_1._0_2_;
  _DAT_000276d0 = param_1._2_2_;
  return;
}



// Function: FUN_000012c6 at 000012c6
// Size: 504 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001456) */
/* WARNING: Removing unreachable block (ram,0x00001460) */
/* WARNING: Removing unreachable block (ram,0x00001482) */
/* WARNING: Removing unreachable block (ram,0x0000136c) */
/* WARNING: Removing unreachable block (ram,0x0000137e) */
/* WARNING: Removing unreachable block (ram,0x0000138a) */
/* WARNING: Removing unreachable block (ram,0x00001398) */
/* WARNING: Removing unreachable block (ram,0x00001470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000012c6(short *param_1)

{
  ushort extraout_D0u;
  short sVar2;
  int iVar1;
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined2 uVar3;
  
  func_0x00006e48(param_1[3],param_1[1]);
  if ((((param_1[2] < 0) || (param_1[3] < 0)) || (0x6f < param_1[2])) || (0x9b < param_1[3])) {
    iVar1 = (uint)extraout_D0u << 0x10;
  }
  else {
    if (_DAT_00027f78 == 0) {
      func_0x00002e30();
    }
    sVar2 = 200;
    while (sVar2 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 6) + (int)(short)(sVar2 + -1)) = 0xff;
      sVar2 = sVar2 + -1;
    }
    uVar3 = SUB42(param_1,0);
    if (((param_1[4] & 0x10U) == 0) && (sVar2 = FUN_00002c5a(uVar3), sVar2 != 0)) {
      iVar1 = 1;
    }
    else {
      FUN_00002d52((short)_DAT_00027f5c);
      _DAT_00027f6c = (int *)&DAT_00027f68;
      _DAT_00027f68 = extraout_A0;
      FUN_00002d52((short)_DAT_00027f60);
      _DAT_00027f70 = extraout_A0_00;
      FUN_000025b8(uVar3);
      if ((*(short *)(param_1[2] * 0x138 + *_DAT_00027f6c + param_1[3] * 2) != 0x7531) ||
         ((*(byte *)(param_1[2] * 0x9c + _DAT_00027f70 + (int)param_1[3]) & 0x80) != 0)) {
        *(undefined2 *)(*param_1 * 0x138 + *_DAT_00027f6c + param_1[1] * 2) = 0xfff6;
        for (sVar2 = 0; sVar2 < 2; sVar2 = sVar2 + 1) {
          FUN_000015a8(uVar3);
        }
      }
      FUN_000027c8(uVar3);
      if (_DAT_00027f5c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (_DAT_00027f60 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



// Function: FUN_000014c2 at 000014c2
// Size: 230 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000014c2(short *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  
  cVar1 = *(char *)((*(uint *)(param_1[1] * 0xe0 + _DAT_00028850 + *param_1 * 2) >> 0x18) +
                    _DAT_0002884c + 0x711);
  sVar5 = (short)*(char *)((*(uint *)(param_1[3] * 0xe0 + _DAT_00028850 + param_1[2] * 2) >> 0x18) +
                           _DAT_0002884c + 0x711);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((sVar5 == 2) || (sVar5 == 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (*(short *)(sVar5 * 2 + 0x15cbe) != 7) {
    if (param_1[5] != 2) {
      if (((bVar2) && (!bVar3)) || ((!bVar2 && (bVar3)))) {
        return 0;
      }
      if (*(short *)(sVar5 * 2 + 0x15cbe) == 0) {
        return 0;
      }
    }
    uVar4 = FUN_00000aa6(param_1[1],param_1[3]);
    **(undefined1 **)(param_1 + 6) = uVar4;
    return 1;
  }
  return 0;
}



// Function: FUN_000015a8 at 000015a8
// Size: 1224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_000015a8(short *param_1,undefined4 param_2)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short *psVar5;
  int unaff_A5;
  short local_44 [3];
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34 [3];
  short local_2e;
  short local_2c [3];
  short local_26;
  short local_24 [3];
  short local_1e;
  short local_1c [3];
  short local_16;
  short local_14 [3];
  short local_e;
  short local_c [3];
  short local_6;
  
  uVar3 = 1;
  sVar2 = 3;
  sVar4 = 0;
  if (*(char *)(unaff_A5 + -0x70f) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x70f) = 1;
    _DAT_00027fac = 0;
  }
  local_c[2] = (short)(((int)*param_1 - (int)param_1[2]) / 2);
  local_6 = 1;
  if (local_c[2] < 1) {
    psVar5 = &local_6;
  }
  else {
    psVar5 = local_c + 2;
  }
  _DAT_00027fa8 = *psVar5;
  local_c[0] = (short)(((int)param_1[1] - (int)param_1[3]) / 2);
  local_c[1] = 1;
  if (local_c[0] < 1) {
    psVar5 = local_c + 1;
  }
  else {
    psVar5 = local_c;
  }
  _DAT_00027faa = *psVar5;
  local_14[2] = (short)(((int)param_1[2] - (int)*param_1) / 2);
  local_e = 1;
  if (local_14[2] < 1) {
    psVar5 = &local_e;
  }
  else {
    psVar5 = local_14 + 2;
  }
  _DAT_00027fa4 = *psVar5;
  local_14[0] = (short)(((int)param_1[3] - (int)param_1[1]) / 2);
  local_14[1] = 1;
  if (local_14[0] < 1) {
    psVar5 = local_14 + 1;
  }
  else {
    psVar5 = local_14;
  }
  _DAT_00027fa6 = *psVar5;
  _DAT_00027f80 = 0x6f;
  _DAT_00027f82 = 0x9b;
  _DAT_00027f90 = param_1;
  _DAT_00027f86 = 0;
  if ((_DAT_00027f7a == 0) || (param_2._0_2_ == 0)) {
    if ((param_1[4] & 0x10U) == 0) {
      if (param_2._0_2_ == 0) {
        _DAT_00027fa2 = 2;
        _DAT_00027fa0 = 2;
        _DAT_00027f9e = 2;
        _DAT_00027f9c = 2;
        _DAT_00027f84 = 6;
      }
      else if (_DAT_00027f7a == 0) {
        _DAT_00027f84 = 0x32;
      }
      else {
        _DAT_00027f84 = 0x14;
      }
    }
    else {
      _DAT_00027fa2 = 3;
      _DAT_00027fa0 = 3;
      _DAT_00027f9e = 3;
      _DAT_00027f9c = 3;
      _DAT_00027fa6 = 5;
      _DAT_00027fa4 = 5;
      _DAT_00027faa = 5;
      _DAT_00027fa8 = 5;
      _DAT_00027f84 = _DAT_00027f7c;
    }
    local_1c[2] = *param_1;
    local_16 = param_1[2];
    if (param_1[2] < *param_1) {
      psVar5 = &local_16;
    }
    else {
      psVar5 = local_1c + 2;
    }
    local_1c[0] = *psVar5 - _DAT_00027f84;
    local_1c[1] = 0;
    if ((short)(*psVar5 - _DAT_00027f84) < 0) {
      psVar5 = local_1c + 1;
    }
    else {
      psVar5 = local_1c;
    }
    _DAT_00027f8c = *psVar5;
    local_24[2] = param_1[1];
    local_1e = param_1[3];
    if (param_1[3] < param_1[1]) {
      psVar5 = &local_1e;
    }
    else {
      psVar5 = local_24 + 2;
    }
    local_24[0] = *psVar5 - _DAT_00027f84;
    local_24[1] = 0;
    if ((short)(*psVar5 - _DAT_00027f84) < 0) {
      psVar5 = local_24 + 1;
    }
    else {
      psVar5 = local_24;
    }
    _DAT_00027f8e = *psVar5;
    local_2c[2] = *param_1;
    local_26 = param_1[2];
    if (*param_1 < param_1[2]) {
      psVar5 = &local_26;
    }
    else {
      psVar5 = local_2c + 2;
    }
    local_2c[0] = *psVar5 + _DAT_00027f84;
    local_2c[1] = 0x6f;
    if ((short)(*psVar5 + _DAT_00027f84) < 0x70) {
      psVar5 = local_2c;
    }
    else {
      psVar5 = local_2c + 1;
    }
    _DAT_00027f88 = *psVar5;
    local_34[2] = param_1[1];
    local_2e = param_1[3];
    if (param_1[1] < param_1[3]) {
      psVar5 = &local_2e;
    }
    else {
      psVar5 = local_34 + 2;
    }
    local_34[0] = *psVar5 + _DAT_00027f84;
    local_34[1] = 0x9b;
    if ((short)(*psVar5 + _DAT_00027f84) < 0x9c) {
      psVar5 = local_34;
    }
    else {
      psVar5 = local_34 + 1;
    }
    _DAT_00027f8a = *psVar5;
    while ((sVar2 != 0 &&
           ((_DAT_00027f7e = 0, (param_1[4] & 0x10U) == 0 ||
            (bVar1 = sVar4 < _DAT_00027f84, sVar4 = sVar4 + 1, bVar1))))) {
      local_38 = _DAT_00027f9c + *param_1;
      local_36 = _DAT_00027f80;
      if (_DAT_00027f80 < (short)(_DAT_00027f9c + *param_1)) {
        psVar5 = &local_36;
      }
      else {
        psVar5 = &local_38;
      }
      _DAT_00027f98 = *psVar5;
      local_3c = _DAT_00027f9e + param_1[1];
      local_3a = _DAT_00027f82;
      if (_DAT_00027f82 < (short)(_DAT_00027f9e + param_1[1])) {
        psVar5 = &local_3a;
      }
      else {
        psVar5 = &local_3c;
      }
      _DAT_00027f9a = *psVar5;
      local_44[2] = *param_1 - _DAT_00027fa0;
      local_3e = 0;
      if ((short)(*param_1 - _DAT_00027fa0) < 0) {
        psVar5 = &local_3e;
      }
      else {
        psVar5 = local_44 + 2;
      }
      _DAT_00027f94 = *psVar5;
      local_44[0] = param_1[1] - _DAT_00027fa2;
      local_44[1] = 0;
      if ((short)(param_1[1] - _DAT_00027fa2) < 0) {
        psVar5 = local_44 + 1;
      }
      else {
        psVar5 = local_44;
      }
      _DAT_00027f96 = *psVar5;
      _DAT_00027fac = _DAT_00027fac + 1;
      if ((int)_DAT_00027fac % 3 == 0) {
        FUN_00001a70();
      }
      else if ((int)_DAT_00027fac % 3 == 1) {
        FUN_00001d3e();
      }
      else if ((int)_DAT_00027fac % 3 == 2) {
        FUN_00002014();
      }
      else {
        FUN_000022e6();
      }
      _DAT_00027f9c = _DAT_00027fa4 + _DAT_00027f9c;
      _DAT_00027f9e = _DAT_00027fa6 + _DAT_00027f9e;
      _DAT_00027fa0 = _DAT_00027fa8 + _DAT_00027fa0;
      _DAT_00027fa2 = _DAT_00027faa + _DAT_00027fa2;
      if ((_DAT_00027f86 != 0) && (sVar2 != 0)) {
        sVar2 = sVar2 + -1;
      }
      if ((_DAT_00027f7e == 0) && (sVar2 = 0, _DAT_00027f86 == 0)) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// Function: FUN_00001a70 at 00001a70
// Size: 718 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a70(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  ushort local_10 [3];
  short local_a;
  short local_8;
  short local_6;
  
  sVar3 = _DAT_00027f94;
  do {
    sVar4 = _DAT_00027f96;
    if (_DAT_00027f98 < sVar3) {
      return;
    }
LAB_00001d20:
    if (sVar4 <= _DAT_00027f9a) {
      if ((((_DAT_00027f8c <= sVar3) && (sVar3 <= _DAT_00027f88)) && (_DAT_00027f8e <= sVar4)) &&
         ((sVar4 <= _DAT_00027f8a &&
          (iVar9 = sVar3 * 0x138 + *_DAT_00027f6c, *(short *)(iVar9 + sVar4 * 2) < 1)))) {
        _DAT_00027f7e = 1;
        bVar1 = *(byte *)(sVar3 * 0x9c + _DAT_00027f70 + (int)sVar4);
        local_8 = -*(short *)(iVar9 + sVar4 * 2);
        *(short *)(iVar9 + sVar4 * 2) = local_8;
        if (_DAT_00027f7a == 0) {
          sVar5 = 0;
        }
        else {
          sVar5 = 9;
        }
        if (sVar4 == 0) {
          if (sVar3 == 0) {
            sVar5 = 1;
          }
          else if (sVar3 == _DAT_00027f80) {
            sVar5 = 3;
          }
          else {
            sVar5 = 2;
          }
        }
        else if (sVar4 == _DAT_00027f82) {
          if (sVar3 == 0) {
            sVar5 = 6;
          }
          else if (sVar3 == _DAT_00027f80) {
            sVar5 = 8;
          }
          else {
            sVar5 = 7;
          }
        }
        else if (sVar3 == 0) {
          sVar5 = 4;
        }
        else if (sVar3 == _DAT_00027f80) {
          sVar5 = 5;
        }
        local_6 = *(short *)(&DAT_000158d0 + sVar5 * 2);
LAB_00001ce6:
        do {
          if (*(short *)(local_6 * 2 + 0x15864) == -10) goto code_r0x00001cfa;
          local_a = *(short *)(local_6 * 2 + 0x15864) + sVar3;
          sVar5 = local_6 + 1;
          local_10[2] = *(short *)(local_6 * 2 + 0x157f8) + sVar4;
          psVar8 = (short *)((short)local_10[2] * 2 + local_a * 0x138 + *_DAT_00027f6c);
          local_6 = sVar5;
          if (*psVar8 != 0x7531) {
            bVar2 = *(byte *)(local_a * 0x9c + _DAT_00027f70 + (int)(short)local_10[2]);
            uVar6 = bVar2 & 7;
            if (*(short *)(_DAT_00027f90 + 10) == 2) {
              if (((bVar2 & 8) == 0) || ((bVar2 & 0x10) != 0)) {
                if ((bVar2 & 7) == 0) {
                  uVar6 = 2;
                }
                local_10[0] = uVar6;
                local_10[1] = 2;
                if (uVar6 < 3) {
                  puVar7 = local_10;
                }
                else {
                  puVar7 = local_10 + 1;
                }
                uVar6 = *puVar7;
              }
              else {
                uVar6 = 2;
              }
            }
            else {
              if ((bVar1 & 0x18 & bVar2) == 0) goto LAB_00001ce6;
              if (((*(short *)(_DAT_00027f90 + 8) != 0) && (2 < uVar6)) &&
                 ((((*(ushort *)(_DAT_00027f90 + 8) & 1) != 0 && ((bVar2 & 0x20) != 0)) ||
                  (((*(ushort *)(_DAT_00027f90 + 8) & 2) != 0 && ((bVar2 & 0x40) != 0)))))) {
                uVar6 = 2;
              }
              if ((bVar1 & 8) != 0) {
                if ((bVar1 & 0x10) == 0) {
                  if ((bVar2 & 0x10) != 0) {
                    uVar6 = _DAT_000158fc + uVar6;
                  }
                }
                else if (((bVar2 & 8) != 0) && ((bVar2 & 0x10) == 0)) {
                  uVar6 = _DAT_000158fc + uVar6;
                }
              }
            }
            iVar9 = func_0x000076d8((int)*psVar8);
            if ((int)(short)uVar6 + (int)local_8 < iVar9) {
              *psVar8 = -uVar6 - local_8;
            }
          }
        } while( true );
      }
      goto LAB_00001d1e;
    }
    sVar3 = sVar3 + 1;
  } while( true );
code_r0x00001cfa:
  if (((sVar3 == *(short *)(_DAT_00027f90 + 4)) && (sVar4 == *(short *)(_DAT_00027f90 + 6))) &&
     ((*(ushort *)(_DAT_00027f90 + 8) & 0x10) == 0)) {
    _DAT_00027f86 = 1;
  }
LAB_00001d1e:
  sVar4 = sVar4 + 1;
  goto LAB_00001d20;
}



// Function: FUN_00001d3e at 00001d3e
// Size: 726 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d3e(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  ushort local_10 [3];
  short local_a;
  short local_8;
  short local_6;
  
  sVar3 = _DAT_00027f98;
  do {
    sVar3 = sVar3 + -1;
    sVar4 = _DAT_00027f9a;
    if (sVar3 < _DAT_00027f94) {
      return;
    }
LAB_00001ff6:
    while (sVar4 = sVar4 + -1, _DAT_00027f96 <= sVar4) {
      if ((((_DAT_00027f8c <= sVar3) && (sVar3 <= _DAT_00027f88)) && (_DAT_00027f8e <= sVar4)) &&
         ((sVar4 <= _DAT_00027f8a &&
          (iVar9 = sVar3 * 0x138 + *_DAT_00027f6c, *(short *)(iVar9 + sVar4 * 2) < 1)))) {
        _DAT_00027f7e = 1;
        bVar1 = *(byte *)(sVar3 * 0x9c + _DAT_00027f70 + (int)sVar4);
        local_8 = -*(short *)(iVar9 + sVar4 * 2);
        *(short *)(iVar9 + sVar4 * 2) = local_8;
        if (_DAT_00027f7a == 0) {
          sVar5 = 0;
        }
        else {
          sVar5 = 9;
        }
        if (sVar4 == 0) {
          if (sVar3 == 0) {
            sVar5 = 1;
          }
          else if (sVar3 == _DAT_00027f80) {
            sVar5 = 3;
          }
          else {
            sVar5 = 2;
          }
        }
        else if (sVar4 == _DAT_00027f82) {
          if (sVar3 == 0) {
            sVar5 = 6;
          }
          else if (sVar3 == _DAT_00027f80) {
            sVar5 = 8;
          }
          else {
            sVar5 = 7;
          }
        }
        else if (sVar3 == 0) {
          sVar5 = 4;
        }
        else if (sVar3 == _DAT_00027f80) {
          sVar5 = 5;
        }
        local_6 = *(short *)(&DAT_000158d0 + sVar5 * 2);
LAB_00001fbc:
        do {
          if (*(short *)(local_6 * 2 + 0x15864) == -10) goto code_r0x00001fd0;
          local_a = *(short *)(local_6 * 2 + 0x15864) + sVar3;
          sVar5 = local_6 + 1;
          local_10[2] = *(short *)(local_6 * 2 + 0x157f8) + sVar4;
          psVar8 = (short *)((short)local_10[2] * 2 + local_a * 0x138 + *_DAT_00027f6c);
          local_6 = sVar5;
          if (*psVar8 != 0x7531) {
            bVar2 = *(byte *)(local_a * 0x9c + _DAT_00027f70 + (int)(short)local_10[2]);
            uVar6 = bVar2 & 7;
            if (*(short *)(_DAT_00027f90 + 10) == 2) {
              if (((bVar2 & 8) == 0) || ((bVar2 & 0x10) != 0)) {
                if ((bVar2 & 7) == 0) {
                  uVar6 = 2;
                }
                local_10[0] = uVar6;
                local_10[1] = 2;
                if (uVar6 < 3) {
                  puVar7 = local_10;
                }
                else {
                  puVar7 = local_10 + 1;
                }
                uVar6 = *puVar7;
              }
              else {
                uVar6 = 2;
              }
            }
            else {
              if ((bVar1 & 0x18 & bVar2) == 0) goto LAB_00001fbc;
              if (((*(short *)(_DAT_00027f90 + 8) != 0) && (2 < uVar6)) &&
                 ((((*(ushort *)(_DAT_00027f90 + 8) & 1) != 0 && ((bVar2 & 0x20) != 0)) ||
                  (((*(ushort *)(_DAT_00027f90 + 8) & 2) != 0 && ((bVar2 & 0x40) != 0)))))) {
                uVar6 = 2;
              }
              if ((bVar1 & 8) != 0) {
                if ((bVar1 & 0x10) == 0) {
                  if ((bVar2 & 0x10) != 0) {
                    uVar6 = _DAT_000158fc + uVar6;
                  }
                }
                else if (((bVar2 & 8) != 0) && ((bVar2 & 0x10) == 0)) {
                  uVar6 = _DAT_000158fc + uVar6;
                }
              }
            }
            iVar9 = func_0x000076d8((int)*psVar8);
            if ((int)(short)uVar6 + (int)local_8 < iVar9) {
              *psVar8 = -uVar6 - local_8;
            }
          }
        } while( true );
      }
    }
  } while( true );
code_r0x00001fd0:
  if (((sVar3 == *(short *)(_DAT_00027f90 + 4)) && (sVar4 == *(short *)(_DAT_00027f90 + 6))) &&
     ((*(ushort *)(_DAT_00027f90 + 8) & 0x10) == 0)) {
    _DAT_00027f86 = 1;
  }
  goto LAB_00001ff6;
}



// Function: FUN_00002014 at 00002014
// Size: 722 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002014(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  ushort local_10 [3];
  short local_a;
  short local_8;
  short local_6;
  
  sVar3 = _DAT_00027f94;
  do {
    sVar4 = _DAT_00027f9a;
    if (_DAT_00027f98 < sVar3) {
      return;
    }
LAB_000022c8:
    while (sVar4 = sVar4 + -1, _DAT_00027f96 <= sVar4) {
      if ((((_DAT_00027f8c <= sVar3) && (sVar3 <= _DAT_00027f88)) && (_DAT_00027f8e <= sVar4)) &&
         ((sVar4 <= _DAT_00027f8a &&
          (iVar9 = sVar3 * 0x138 + *_DAT_00027f6c, *(short *)(iVar9 + sVar4 * 2) < 1)))) {
        _DAT_00027f7e = 1;
        bVar1 = *(byte *)(sVar3 * 0x9c + _DAT_00027f70 + (int)sVar4);
        local_8 = -*(short *)(iVar9 + sVar4 * 2);
        *(short *)(iVar9 + sVar4 * 2) = local_8;
        if (_DAT_00027f7a == 0) {
          sVar5 = 0;
        }
        else {
          sVar5 = 9;
        }
        if (sVar4 == 0) {
          if (sVar3 == 0) {
            sVar5 = 1;
          }
          else if (sVar3 == _DAT_00027f80) {
            sVar5 = 3;
          }
          else {
            sVar5 = 2;
          }
        }
        else if (sVar4 == _DAT_00027f82) {
          if (sVar3 == 0) {
            sVar5 = 6;
          }
          else if (sVar3 == _DAT_00027f80) {
            sVar5 = 8;
          }
          else {
            sVar5 = 7;
          }
        }
        else if (sVar3 == 0) {
          sVar5 = 4;
        }
        else if (sVar3 == _DAT_00027f80) {
          sVar5 = 5;
        }
        local_6 = *(short *)(&DAT_000158d0 + sVar5 * 2);
LAB_0000228e:
        do {
          if (*(short *)(local_6 * 2 + 0x15864) == -10) goto code_r0x000022a2;
          local_a = *(short *)(local_6 * 2 + 0x15864) + sVar3;
          sVar5 = local_6 + 1;
          local_10[2] = *(short *)(local_6 * 2 + 0x157f8) + sVar4;
          psVar8 = (short *)((short)local_10[2] * 2 + local_a * 0x138 + *_DAT_00027f6c);
          local_6 = sVar5;
          if (*psVar8 != 0x7531) {
            bVar2 = *(byte *)(local_a * 0x9c + _DAT_00027f70 + (int)(short)local_10[2]);
            uVar6 = bVar2 & 7;
            if (*(short *)(_DAT_00027f90 + 10) == 2) {
              if (((bVar2 & 8) == 0) || ((bVar2 & 0x10) != 0)) {
                if ((bVar2 & 7) == 0) {
                  uVar6 = 2;
                }
                local_10[0] = uVar6;
                local_10[1] = 2;
                if (uVar6 < 3) {
                  puVar7 = local_10;
                }
                else {
                  puVar7 = local_10 + 1;
                }
                uVar6 = *puVar7;
              }
              else {
                uVar6 = 2;
              }
            }
            else {
              if ((bVar1 & 0x18 & bVar2) == 0) goto LAB_0000228e;
              if (((*(short *)(_DAT_00027f90 + 8) != 0) && (2 < uVar6)) &&
                 ((((*(ushort *)(_DAT_00027f90 + 8) & 1) != 0 && ((bVar2 & 0x20) != 0)) ||
                  (((*(ushort *)(_DAT_00027f90 + 8) & 2) != 0 && ((bVar2 & 0x40) != 0)))))) {
                uVar6 = 2;
              }
              if ((bVar1 & 8) != 0) {
                if ((bVar1 & 0x10) == 0) {
                  if ((bVar2 & 0x10) != 0) {
                    uVar6 = _DAT_000158fc + uVar6;
                  }
                }
                else if (((bVar2 & 8) != 0) && ((bVar2 & 0x10) == 0)) {
                  uVar6 = _DAT_000158fc + uVar6;
                }
              }
            }
            iVar9 = func_0x000076d8((int)*psVar8);
            if ((int)(short)uVar6 + (int)local_8 < iVar9) {
              *psVar8 = -uVar6 - local_8;
            }
          }
        } while( true );
      }
    }
    sVar3 = sVar3 + 1;
  } while( true );
code_r0x000022a2:
  if (((sVar3 == *(short *)(_DAT_00027f90 + 4)) && (sVar4 == *(short *)(_DAT_00027f90 + 6))) &&
     ((*(ushort *)(_DAT_00027f90 + 8) & 0x10) == 0)) {
    _DAT_00027f86 = 1;
  }
  goto LAB_000022c8;
}



// Function: FUN_000022e6 at 000022e6
// Size: 722 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022e6(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  ushort local_10 [3];
  short local_a;
  short local_8;
  short local_6;
  
  sVar3 = _DAT_00027f98;
LAB_000025a6:
  sVar3 = sVar3 + -1;
  sVar4 = _DAT_00027f96;
  if (sVar3 < _DAT_00027f94) {
    return;
  }
LAB_0000259a:
  if (sVar4 <= _DAT_00027f9a) {
    if ((((_DAT_00027f8c <= sVar3) && (sVar3 <= _DAT_00027f88)) && (_DAT_00027f8e <= sVar4)) &&
       ((sVar4 <= _DAT_00027f8a &&
        (iVar9 = sVar3 * 0x138 + *_DAT_00027f6c, *(short *)(iVar9 + sVar4 * 2) < 1)))) {
      _DAT_00027f7e = 1;
      bVar1 = *(byte *)(sVar3 * 0x9c + _DAT_00027f70 + (int)sVar4);
      local_8 = -*(short *)(iVar9 + sVar4 * 2);
      *(short *)(iVar9 + sVar4 * 2) = local_8;
      if (_DAT_00027f7a == 0) {
        sVar5 = 0;
      }
      else {
        sVar5 = 9;
      }
      if (sVar4 == 0) {
        if (sVar3 == 0) {
          sVar5 = 1;
        }
        else if (sVar3 == _DAT_00027f80) {
          sVar5 = 3;
        }
        else {
          sVar5 = 2;
        }
      }
      else if (sVar4 == _DAT_00027f82) {
        if (sVar3 == 0) {
          sVar5 = 6;
        }
        else if (sVar3 == _DAT_00027f80) {
          sVar5 = 8;
        }
        else {
          sVar5 = 7;
        }
      }
      else if (sVar3 == 0) {
        sVar5 = 4;
      }
      else if (sVar3 == _DAT_00027f80) {
        sVar5 = 5;
      }
      local_6 = *(short *)(&DAT_000158d0 + sVar5 * 2);
LAB_00002560:
      do {
        if (*(short *)(local_6 * 2 + 0x15864) == -10) goto code_r0x00002574;
        local_a = *(short *)(local_6 * 2 + 0x15864) + sVar3;
        sVar5 = local_6 + 1;
        local_10[2] = *(short *)(local_6 * 2 + 0x157f8) + sVar4;
        psVar8 = (short *)((short)local_10[2] * 2 + local_a * 0x138 + *_DAT_00027f6c);
        local_6 = sVar5;
        if (*psVar8 != 0x7531) {
          bVar2 = *(byte *)(local_a * 0x9c + _DAT_00027f70 + (int)(short)local_10[2]);
          uVar6 = bVar2 & 7;
          if (*(short *)(_DAT_00027f90 + 10) == 2) {
            if (((bVar2 & 8) == 0) || ((bVar2 & 0x10) != 0)) {
              if ((bVar2 & 7) == 0) {
                uVar6 = 2;
              }
              local_10[0] = uVar6;
              local_10[1] = 2;
              if (uVar6 < 3) {
                puVar7 = local_10;
              }
              else {
                puVar7 = local_10 + 1;
              }
              uVar6 = *puVar7;
            }
            else {
              uVar6 = 2;
            }
          }
          else {
            if ((bVar1 & 0x18 & bVar2) == 0) goto LAB_00002560;
            if (((*(short *)(_DAT_00027f90 + 8) != 0) && (2 < uVar6)) &&
               ((((*(ushort *)(_DAT_00027f90 + 8) & 1) != 0 && ((bVar2 & 0x20) != 0)) ||
                (((*(ushort *)(_DAT_00027f90 + 8) & 2) != 0 && ((bVar2 & 0x40) != 0)))))) {
              uVar6 = 2;
            }
            if ((bVar1 & 8) != 0) {
              if ((bVar1 & 0x10) == 0) {
                if ((bVar2 & 0x10) != 0) {
                  uVar6 = _DAT_000158fc + uVar6;
                }
              }
              else if (((bVar2 & 8) != 0) && ((bVar2 & 0x10) == 0)) {
                uVar6 = _DAT_000158fc + uVar6;
              }
            }
          }
          iVar9 = func_0x000076d8((int)*psVar8);
          if ((int)(short)uVar6 + (int)local_8 < iVar9) {
            *psVar8 = -uVar6 - local_8;
          }
        }
      } while( true );
    }
    goto LAB_00002598;
  }
  goto LAB_000025a6;
code_r0x00002574:
  if (((sVar3 == *(short *)(_DAT_00027f90 + 4)) && (sVar4 == *(short *)(_DAT_00027f90 + 6))) &&
     ((*(ushort *)(_DAT_00027f90 + 8) & 0x10) == 0)) {
    _DAT_00027f86 = 1;
  }
LAB_00002598:
  sVar4 = sVar4 + 1;
  goto LAB_0000259a;
}



// Function: FUN_000025b8 at 000025b8
// Size: 528 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025b8(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  short sVar10;
  undefined2 *puVar11;
  int iVar12;
  
  bVar8 = true;
  sVar2 = *(short *)(param_1 + 4);
  sVar3 = *(short *)(param_1 + 6);
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_0000260c;
  }
  bVar8 = false;
LAB_0000260c:
  FUN_000027c8(param_1);
  if (*(short *)(param_1 + 10) == 1) {
    sVar10 = 0x70;
    while (sVar6 = sVar10 + -1, sVar10 != 0) {
      iVar1 = *_DAT_00027f6c;
      iVar12 = sVar6 * 0x9c + _DAT_00027f70;
      sVar9 = 0x9c;
      while (sVar5 = sVar9 + -1, sVar10 = sVar6, sVar9 != 0) {
        bVar4 = *(byte *)(iVar12 + sVar5) & 7;
        puVar11 = (undefined2 *)(sVar5 * 2 + sVar6 * 0x138 + iVar1);
        *puVar11 = 30000;
        sVar9 = sVar5;
        if ((((bVar8) && ((*(byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar6) & 0x20) == 0)) ||
            (bVar4 == 0)) || (bVar4 == 7)) {
          *puVar11 = 0x7531;
        }
      }
    }
    bVar4 = *(byte *)(sVar2 * 0x9c + _DAT_00027f70 + (int)sVar3);
    if ((bVar4 & 7) != 7) {
      if ((bVar4 & 7) == 0) {
        if ((_DAT_00028952 == 0) &&
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) {
          return;
        }
      }
      *(undefined2 *)(sVar2 * 0x138 + *_DAT_00027f6c + sVar3 * 2) = 30000;
    }
  }
  else {
    sVar10 = 0x70;
    while (sVar6 = sVar10 + -1, sVar10 != 0) {
      iVar1 = *_DAT_00027f6c;
      iVar12 = sVar6 * 0x9c + _DAT_00027f70;
      sVar9 = 0x9c;
      while (sVar5 = sVar9 + -1, sVar10 = sVar6, sVar9 != 0) {
        bVar4 = *(byte *)(iVar12 + sVar5);
        puVar11 = (undefined2 *)(sVar5 * 2 + sVar6 * 0x138 + iVar1);
        *puVar11 = 30000;
        sVar9 = sVar5;
        if ((((bVar8) && ((*(byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar6) & 0x20) == 0)) ||
            (((*(byte *)(iVar12 + sVar5) & 0x80) != 0 && ((bVar4 & 7) == 0)))) || ((bVar4 & 7) == 7)
           ) {
          *puVar11 = 0x7531;
        }
      }
    }
    if ((*(byte *)(sVar2 * 0x9c + _DAT_00027f70 + (int)sVar3) & 7) != 7) {
      *(undefined2 *)(sVar2 * 0x138 + *_DAT_00027f6c + sVar3 * 2) = 30000;
    }
  }
  return;
}



// Function: FUN_000027c8 at 000027c8
// Size: 376 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000027c8(int param_1,undefined4 param_2)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int unaff_A5;
  bool bVar5;
  
  if (*(char *)(unaff_A5 + -0x710) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x710) = 1;
    _DAT_00027fae = 0;
  }
  if ((_DAT_00027f7a == 0) && ((_DAT_00027fae != 0 || (param_2._0_2_ != 0)))) {
    bVar5 = *(char *)((*(uint *)(*(short *)(param_1 + 6) * 0xe0 + _DAT_00028850 +
                                *(short *)(param_1 + 4) * 2) >> 0x18) + _DAT_0002884c + 0x711) ==
            '\n';
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) || (bVar5)) {
      sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
      while (sVar1 = sVar3 + -1, sVar3 != 0) {
        iVar4 = sVar1 * 0x42 + _DAT_0002884c;
        sVar3 = sVar1;
        if ((int)*(char *)(iVar4 + 0x15d9) != (int)*(short *)(_DAT_0002884c + 0x110)) {
          if ((((bVar5) && (*(short *)(iVar4 + 0x15c4) <= *(short *)(param_1 + 4))) &&
              ((int)*(short *)(param_1 + 4) <= *(short *)(iVar4 + 0x15c4) + 1)) &&
             ((*(short *)(iVar4 + 0x15c6) <= *(short *)(param_1 + 6) &&
              ((int)*(short *)(param_1 + 6) <= *(short *)(iVar4 + 0x15c6) + 1)))) {
            FUN_00002940();
          }
          if ((_DAT_00028952 == 0) &&
             (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f')) &&
             (*(short *)(param_1 + 10) == 1)) {
            FUN_00002940();
          }
        }
      }
      _DAT_00027fae = param_2._0_2_;
    }
  }
  return;
}



// Function: FUN_00002940 at 00002940
// Size: 134 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002940(undefined4 param_1)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  sVar4 = 4;
  while (sVar3 = sVar4 + -1, sVar4 != 0) {
    iVar6 = param_1._0_2_ * 0x42 + _DAT_0002884c;
    sVar2 = *(short *)(sVar3 * 2 + 0x157f0) + *(short *)(iVar6 + 0x15c4);
    sVar5 = *(short *)(sVar3 * 2 + 0x157e8) + *(short *)(iVar6 + 0x15c6);
    pbVar1 = (byte *)(sVar2 * 0x9c + _DAT_00027f70 + (int)sVar5);
    *pbVar1 = *pbVar1 & 0xf8;
    sVar4 = sVar3;
    if (param_1._2_2_ != 0) {
      pbVar1 = (byte *)(sVar2 * 0x9c + _DAT_00027f70 + (int)sVar5);
      *pbVar1 = DAT_00015cd3 | *pbVar1;
    }
  }
  return;
}



// Function: FUN_000029c6 at 000029c6
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000029c6(short *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  byte abStackY_80da [32726];
  ushort uStack_e0;
  ushort local_de;
  undefined2 uStack_dc;
  byte abStack_da [200];
  short local_12;
  short sStack_10;
  short sStack_e;
  short local_c;
  short sStack_a;
  short sStack_8;
  short local_6;
  
  sVar8 = 0;
  local_12 = 0;
  local_de = 0;
  iVar4 = func_0x000076d8((int)*(short *)(param_1[2] * 0x138 + *_DAT_00027f6c + param_1[3] * 2));
  iVar4 = iVar4 + 1;
  local_c = (short)iVar4;
  sVar9 = param_1[2];
  sVar10 = param_1[3];
  local_6 = 200;
  while( true ) {
    sVar7 = local_6;
    uVar3 = (undefined2)((uint)iVar4 >> 0x10);
    uVar5 = CONCAT22(uVar3,local_6);
    local_6 = local_6 + -1;
    if (sVar7 == 0) break;
    iVar4 = CONCAT22(uVar3,local_6);
    abStack_da[local_6] = 0xff;
  }
  while ((sVar9 != *param_1 || (sVar10 != param_1[1]))) {
    if (param_1[5] == 1) {
      uStack_e0 = *(byte *)(sVar9 * 0x9c + _DAT_00027f70 + (int)sVar10) & 0x18;
    }
    sStack_10 = -1;
    sStack_8 = -1;
    uVar5 = FUN_00000aa6(CONCAT22(sVar9,sVar10),*(undefined4 *)param_1);
    local_12 = (short)uVar5;
    for (local_6 = 0; local_6 < 8; local_6 = local_6 + 1) {
      uVar6 = ((int)*(short *)(local_6 * 2 + 0x157be) + (int)local_12) % 8;
      sStack_a = (short)uVar6;
      sVar2 = *(short *)(sStack_a * 2 + 0x157ae) + sVar9;
      sVar7 = *(short *)(sStack_a * 2 + 0x1579e);
      uVar5 = (uint)sVar7;
      sVar7 = sVar7 + sVar10;
      if ((((_DAT_00027f7a == 0) || (uVar5 = uVar6 & 1, (uVar6 & 1) == 0)) ||
          ((bVar1 = *(byte *)(sVar2 * 0x9c + _DAT_00027f70 + (int)sVar7), uVar5 = bVar1 & 8,
           (bVar1 & 8) != 0 &&
           (uVar5 = *(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18,
           *(char *)(uVar5 + _DAT_0002884c + 0x711) != '\x01')))) &&
         ((((-1 < sVar2 && (sVar2 < 0x70)) && (-1 < sVar7)) && (sVar7 < 0x9c)))) {
        uVar5 = sVar2 * 0x138;
        if (((*(short *)(uVar5 + *_DAT_00027f6c + sVar7 * 2) != 30000) &&
            (*(short *)(uVar5 + *_DAT_00027f6c + sVar7 * 2) != 0x7531)) &&
           ((param_1[5] != 1 ||
            (uVar5 = (uint)*(byte *)(sVar2 * 0x9c + _DAT_00027f70 + (int)sVar7),
            (uVar5 & (int)(short)uStack_e0) != 0)))) {
          uVar5 = func_0x000076d8((int)*(short *)(sVar2 * 0x138 + *_DAT_00027f6c + sVar7 * 2));
          sStack_e = (short)uVar5;
          if ((sStack_e < local_c) ||
             (((_DAT_00027f7a != 0 && (sStack_8 == -1)) && (sStack_e == local_c)))) {
            local_c = sStack_e;
            sStack_8 = sVar2;
            sStack_10 = sVar7;
            uStack_dc = sStack_a;
          }
        }
      }
    }
    if ((sVar8 < 0xc6) && (sStack_8 != -1)) {
      abStack_da[sVar8] = (byte)uStack_dc;
      sVar8 = sVar8 + 1;
      sVar9 = sStack_8;
      sVar10 = sStack_10;
    }
    else {
      *param_1 = sVar9;
      param_1[1] = sVar10;
    }
  }
  while (sVar8 != 0) {
    sVar8 = sVar8 + -1;
    uVar5 = (uint)local_de;
    *(char *)(*(int *)(param_1 + 6) + (int)(short)local_de) = (char)((abStack_da[sVar8] + 4) % 8);
    local_de = local_de + 1;
  }
  return uVar5;
}



// Function: FUN_00002a20 at 00002a20
// Size: 238 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00002a20(void)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  short in_D0w;
  uint uVar4;
  short sVar5;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  int in_A0;
  short *unaff_A2;
  int unaff_A6;
  
  while( true ) {
    *(undefined1 *)(in_A0 + in_D0w) = 0xff;
    sVar5 = *(short *)(unaff_A6 + -2);
    *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) + -1;
    uVar4 = 0;
    if (sVar5 == 0) break;
    in_A0 = unaff_A6 + -0xd6;
    in_D0w = *(short *)(unaff_A6 + -2);
  }
  while ((unaff_D6w != *unaff_A2 || (unaff_D7w != unaff_A2[1]))) {
    if (unaff_A2[5] == 1) {
      *(ushort *)(unaff_A6 + -0xdc) =
           *(byte *)(unaff_D6w * 0x9c + _DAT_00027f70 + (int)unaff_D7w) & 0x18;
    }
    *(undefined2 *)(unaff_A6 + -0xc) = 0xffff;
    *(undefined2 *)(unaff_A6 + -4) = 0xffff;
    uVar4 = FUN_00000aa6(CONCAT22(unaff_D6w,unaff_D7w),*(undefined4 *)unaff_A2);
    *(short *)(unaff_A6 + -0xe) = (short)uVar4;
    *(undefined2 *)(unaff_A6 + -2) = 0;
    while (*(short *)(unaff_A6 + -2) < 8) {
      sVar5 = (short)(((int)*(short *)(*(short *)(unaff_A6 + -2) * 2 + 0x157be) +
                      (int)*(short *)(unaff_A6 + -0xe)) % 8);
      *(short *)(unaff_A6 + -6) = sVar5;
      sVar3 = *(short *)(sVar5 * 2 + 0x157ae) + unaff_D6w;
      sVar5 = *(short *)(*(short *)(unaff_A6 + -6) * 2 + 0x1579e);
      uVar4 = (uint)sVar5;
      sVar5 = sVar5 + unaff_D7w;
      if ((((_DAT_00027f7a == 0) ||
           (uVar4 = *(ushort *)(unaff_A6 + -6) & 1, (*(ushort *)(unaff_A6 + -6) & 1) == 0)) ||
          ((bVar2 = *(byte *)(sVar3 * 0x9c + _DAT_00027f70 + (int)sVar5), uVar4 = bVar2 & 8,
           (bVar2 & 8) != 0 &&
           (uVar4 = *(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18,
           *(char *)(uVar4 + _DAT_0002884c + 0x711) != '\x01')))) &&
         ((((-1 < sVar3 && (sVar3 < 0x70)) && (-1 < sVar5)) && (sVar5 < 0x9c)))) {
        uVar4 = sVar3 * 0x138;
        if (((*(short *)(uVar4 + *_DAT_00027f6c + sVar5 * 2) != 30000) &&
            (*(short *)(uVar4 + *_DAT_00027f6c + sVar5 * 2) != 0x7531)) &&
           ((unaff_A2[5] != 1 ||
            (uVar4 = (uint)*(byte *)(sVar3 * 0x9c + _DAT_00027f70 + (int)sVar5),
            (uVar4 & (int)*(short *)(unaff_A6 + -0xdc)) != 0)))) {
          uVar4 = func_0x000076d8((int)*(short *)(sVar3 * 0x138 + *_DAT_00027f6c + sVar5 * 2));
          *(short *)(unaff_A6 + -10) = (short)uVar4;
          if (((short)uVar4 < *(short *)(unaff_A6 + -8)) ||
             (((_DAT_00027f7a != 0 && (*(short *)(unaff_A6 + -4) == -1)) &&
              (uVar4 = (uint)*(ushort *)(unaff_A6 + -10),
              *(ushort *)(unaff_A6 + -10) == *(ushort *)(unaff_A6 + -8))))) {
            *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(unaff_A6 + -10);
            *(short *)(unaff_A6 + -4) = sVar3;
            *(short *)(unaff_A6 + -0xc) = sVar5;
            *(undefined2 *)(unaff_A6 + -0xd8) = *(undefined2 *)(unaff_A6 + -6);
          }
        }
      }
      *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) + 1;
    }
    if ((unaff_D5w < 0xc6) && (*(short *)(unaff_A6 + -4) != -1)) {
      unaff_D6w = *(short *)(unaff_A6 + -4);
      unaff_D7w = *(short *)(unaff_A6 + -0xc);
      *(undefined1 *)(unaff_A6 + -0xd6 + (int)unaff_D5w) = *(undefined1 *)(unaff_A6 + -0xd7);
      unaff_D5w = unaff_D5w + 1;
    }
    else {
      *unaff_A2 = unaff_D6w;
      unaff_A2[1] = unaff_D7w;
    }
  }
  while (unaff_D5w != 0) {
    unaff_D5w = unaff_D5w + -1;
    bVar2 = *(byte *)(unaff_A6 + -0xd6 + (int)unaff_D5w);
    uVar1 = *(ushort *)(unaff_A6 + -0xda);
    uVar4 = (uint)uVar1;
    *(short *)(unaff_A6 + -0xda) = *(short *)(unaff_A6 + -0xda) + 1;
    *(char *)(*(int *)(unaff_A2 + 6) + (int)(short)uVar1) = (char)((bVar2 + 4) % 8);
  }
  return uVar4;
}



// Function: FUN_00002b10 at 00002b10
// Size: 26 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00002b10(void)

{
  ushort uVar1;
  byte bVar2;
  short sVar4;
  uint uVar3;
  short unaff_D3w;
  int unaff_D4;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  int in_A0;
  short *unaff_A2;
  int unaff_A6;
  
code_r0x00002b10:
  uVar3 = *(uint *)(in_A0 + unaff_D3w * 2) >> 0x18;
  if (*(char *)(uVar3 + _DAT_0002884c + 0x711) == '\x01') goto LAB_00002be6;
  do {
    if ((((-1 < unaff_D3w) && (unaff_D3w < 0x70)) && (sVar4 = (short)unaff_D4, -1 < sVar4)) &&
       (sVar4 < 0x9c)) {
      uVar3 = unaff_D3w * 0x138;
      if (((*(short *)(uVar3 + *_DAT_00027f6c + sVar4 * 2) != 30000) &&
          (*(short *)(uVar3 + *_DAT_00027f6c + sVar4 * 2) != 0x7531)) &&
         ((unaff_A2[5] != 1 ||
          (uVar3 = (uint)*(byte *)(unaff_D3w * 0x9c + _DAT_00027f70 + (int)sVar4),
          (uVar3 & (int)*(short *)(unaff_A6 + -0xdc)) != 0)))) {
        uVar3 = func_0x000076d8((int)*(short *)(unaff_D3w * 0x138 + *_DAT_00027f6c + sVar4 * 2));
        *(short *)(unaff_A6 + -10) = (short)uVar3;
        if (((short)uVar3 < *(short *)(unaff_A6 + -8)) ||
           (((_DAT_00027f7a != 0 && (*(short *)(unaff_A6 + -4) == -1)) &&
            (uVar3 = (uint)*(ushort *)(unaff_A6 + -10),
            *(ushort *)(unaff_A6 + -10) == *(ushort *)(unaff_A6 + -8))))) {
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(unaff_A6 + -10);
          *(short *)(unaff_A6 + -4) = unaff_D3w;
          *(short *)(unaff_A6 + -0xc) = sVar4;
          *(undefined2 *)(unaff_A6 + -0xd8) = *(undefined2 *)(unaff_A6 + -6);
        }
      }
    }
LAB_00002be6:
    while( true ) {
      *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) + 1;
      while (7 < *(short *)(unaff_A6 + -2)) {
        if ((unaff_D5w < 0xc6) && (*(short *)(unaff_A6 + -4) != -1)) {
          unaff_D6w = *(short *)(unaff_A6 + -4);
          unaff_D7w = *(short *)(unaff_A6 + -0xc);
          *(undefined1 *)(unaff_A6 + -0xd6 + (int)unaff_D5w) = *(undefined1 *)(unaff_A6 + -0xd7);
          unaff_D5w = unaff_D5w + 1;
        }
        else {
          *unaff_A2 = unaff_D6w;
          unaff_A2[1] = unaff_D7w;
        }
        if ((unaff_D6w == *unaff_A2) && (unaff_D7w == unaff_A2[1])) {
          while (unaff_D5w != 0) {
            unaff_D5w = unaff_D5w + -1;
            bVar2 = *(byte *)(unaff_A6 + -0xd6 + (int)unaff_D5w);
            uVar1 = *(ushort *)(unaff_A6 + -0xda);
            uVar3 = (uint)uVar1;
            *(short *)(unaff_A6 + -0xda) = *(short *)(unaff_A6 + -0xda) + 1;
            *(char *)(*(int *)(unaff_A2 + 6) + (int)(short)uVar1) = (char)((bVar2 + 4) % 8);
          }
          return uVar3;
        }
        if (unaff_A2[5] == 1) {
          *(ushort *)(unaff_A6 + -0xdc) =
               *(byte *)(unaff_D6w * 0x9c + _DAT_00027f70 + (int)unaff_D7w) & 0x18;
        }
        *(undefined2 *)(unaff_A6 + -0xc) = 0xffff;
        *(undefined2 *)(unaff_A6 + -4) = 0xffff;
        uVar3 = FUN_00000aa6(CONCAT22(unaff_D6w,unaff_D7w),*(undefined4 *)unaff_A2);
        *(short *)(unaff_A6 + -0xe) = (short)uVar3;
        *(undefined2 *)(unaff_A6 + -2) = 0;
      }
      sVar4 = (short)(((int)*(short *)(*(short *)(unaff_A6 + -2) * 2 + 0x157be) +
                      (int)*(short *)(unaff_A6 + -0xe)) % 8);
      *(short *)(unaff_A6 + -6) = sVar4;
      unaff_D3w = *(short *)(sVar4 * 2 + 0x157ae) + unaff_D6w;
      uVar3 = (uint)*(short *)(*(short *)(unaff_A6 + -6) * 2 + 0x1579e);
      unaff_D4 = uVar3 + (int)unaff_D7w;
      if ((_DAT_00027f7a == 0) ||
         (uVar3 = *(ushort *)(unaff_A6 + -6) & 1, (*(ushort *)(unaff_A6 + -6) & 1) == 0)) break;
      bVar2 = *(byte *)(unaff_D3w * 0x9c + _DAT_00027f70 + (int)(short)unaff_D4);
      uVar3 = bVar2 & 8;
      if ((bVar2 & 8) != 0) {
        in_A0 = (short)unaff_D4 * 0xe0 + _DAT_00028850;
        goto code_r0x00002b10;
      }
    }
  } while( true );
}



// Function: FUN_00002b28 at 00002b28
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b28(void)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  short *unaff_A2;
  int iVar4;
  int unaff_A6;
  
  do {
    if (((((-1 < unaff_D3w) && (unaff_D3w < 0x70)) && (-1 < unaff_D4w)) &&
        ((unaff_D4w < 0x9c &&
         (iVar4 = unaff_D3w * 0x138 + *_DAT_00027f6c, *(short *)(iVar4 + unaff_D4w * 2) != 30000))))
       && ((*(short *)(iVar4 + unaff_D4w * 2) != 0x7531 &&
           ((unaff_A2[5] != 1 ||
            (((ushort)*(byte *)(unaff_D3w * 0x9c + _DAT_00027f70 + (int)unaff_D4w) &
             *(ushort *)(unaff_A6 + -0xdc)) != 0)))))) {
      sVar3 = func_0x000076d8((int)*(short *)(unaff_D3w * 0x138 + *_DAT_00027f6c + unaff_D4w * 2));
      *(short *)(unaff_A6 + -10) = sVar3;
      if ((sVar3 < *(short *)(unaff_A6 + -8)) ||
         (((_DAT_00027f7a != 0 && (*(short *)(unaff_A6 + -4) == -1)) &&
          (*(short *)(unaff_A6 + -10) == *(short *)(unaff_A6 + -8))))) {
        *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(unaff_A6 + -10);
        *(short *)(unaff_A6 + -4) = unaff_D3w;
        *(short *)(unaff_A6 + -0xc) = unaff_D4w;
        *(undefined2 *)(unaff_A6 + -0xd8) = *(undefined2 *)(unaff_A6 + -6);
      }
    }
    do {
      *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) + 1;
      while (7 < *(short *)(unaff_A6 + -2)) {
        if ((unaff_D5w < 0xc6) && (*(short *)(unaff_A6 + -4) != -1)) {
          unaff_D6w = *(short *)(unaff_A6 + -4);
          unaff_D7w = *(short *)(unaff_A6 + -0xc);
          *(undefined1 *)(unaff_A6 + -0xd6 + (int)unaff_D5w) = *(undefined1 *)(unaff_A6 + -0xd7);
          unaff_D5w = unaff_D5w + 1;
        }
        else {
          *unaff_A2 = unaff_D6w;
          unaff_A2[1] = unaff_D7w;
        }
        if ((unaff_D6w == *unaff_A2) && (unaff_D7w == unaff_A2[1])) {
          while (unaff_D5w != 0) {
            unaff_D5w = unaff_D5w + -1;
            bVar1 = *(byte *)(unaff_A6 + -0xd6 + (int)unaff_D5w);
            sVar3 = *(short *)(unaff_A6 + -0xda);
            *(short *)(unaff_A6 + -0xda) = *(short *)(unaff_A6 + -0xda) + 1;
            *(char *)(*(int *)(unaff_A2 + 6) + (int)sVar3) = (char)((bVar1 + 4) % 8);
          }
          return;
        }
        if (unaff_A2[5] == 1) {
          *(ushort *)(unaff_A6 + -0xdc) =
               *(byte *)(unaff_D6w * 0x9c + _DAT_00027f70 + (int)unaff_D7w) & 0x18;
        }
        *(undefined2 *)(unaff_A6 + -0xc) = 0xffff;
        *(undefined2 *)(unaff_A6 + -4) = 0xffff;
        uVar2 = FUN_00000aa6(CONCAT22(unaff_D6w,unaff_D7w),*(undefined4 *)unaff_A2);
        *(undefined2 *)(unaff_A6 + -0xe) = uVar2;
        *(undefined2 *)(unaff_A6 + -2) = 0;
      }
      sVar3 = (short)(((int)*(short *)(*(short *)(unaff_A6 + -2) * 2 + 0x157be) +
                      (int)*(short *)(unaff_A6 + -0xe)) % 8);
      *(short *)(unaff_A6 + -6) = sVar3;
      unaff_D3w = *(short *)(sVar3 * 2 + 0x157ae) + unaff_D6w;
      unaff_D4w = *(short *)(*(short *)(unaff_A6 + -6) * 2 + 0x1579e) + unaff_D7w;
    } while (((_DAT_00027f7a != 0) && ((*(ushort *)(unaff_A6 + -6) & 1) != 0)) &&
            (((*(byte *)(unaff_D3w * 0x9c + _DAT_00027f70 + (int)unaff_D4w) & 8) == 0 ||
             (*(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18) +
                        _DAT_0002884c + 0x711) == '\x01'))));
  } while( true );
}



// Function: FUN_00002b50 at 00002b50
// Size: 266 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b50(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_D0;
  short sVar3;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  short *unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  
  do {
    if (((*(short *)(in_D0 + *unaff_A3 + unaff_D4w * 2) != 30000) &&
        (*(short *)(in_D0 + *unaff_A3 + unaff_D4w * 2) != 0x7531)) &&
       ((unaff_A2[5] != 1 ||
        (((ushort)*(byte *)(unaff_D3w * 0x9c + _DAT_00027f70 + (int)unaff_D4w) &
         *(ushort *)(unaff_A6 + -0xdc)) != 0)))) {
      sVar3 = func_0x000076d8((int)*(short *)(unaff_D3w * 0x138 + *_DAT_00027f6c + unaff_D4w * 2));
      *(short *)(unaff_A6 + -10) = sVar3;
      if ((sVar3 < *(short *)(unaff_A6 + -8)) ||
         (((_DAT_00027f7a != 0 && (*(short *)(unaff_A6 + -4) == -1)) &&
          (*(short *)(unaff_A6 + -10) == *(short *)(unaff_A6 + -8))))) {
        *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(unaff_A6 + -10);
        *(short *)(unaff_A6 + -4) = unaff_D3w;
        *(short *)(unaff_A6 + -0xc) = unaff_D4w;
        *(undefined2 *)(unaff_A6 + -0xd8) = *(undefined2 *)(unaff_A6 + -6);
      }
    }
    do {
      *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) + 1;
      while (7 < *(short *)(unaff_A6 + -2)) {
        if ((unaff_D5w < 0xc6) && (*(short *)(unaff_A6 + -4) != -1)) {
          unaff_D6w = *(short *)(unaff_A6 + -4);
          unaff_D7w = *(short *)(unaff_A6 + -0xc);
          *(undefined1 *)(unaff_A6 + -0xd6 + (int)unaff_D5w) = *(undefined1 *)(unaff_A6 + -0xd7);
          unaff_D5w = unaff_D5w + 1;
        }
        else {
          *unaff_A2 = unaff_D6w;
          unaff_A2[1] = unaff_D7w;
        }
        if ((unaff_D6w == *unaff_A2) && (unaff_D7w == unaff_A2[1])) {
          while (unaff_D5w != 0) {
            unaff_D5w = unaff_D5w + -1;
            bVar1 = *(byte *)(unaff_A6 + -0xd6 + (int)unaff_D5w);
            sVar3 = *(short *)(unaff_A6 + -0xda);
            *(short *)(unaff_A6 + -0xda) = *(short *)(unaff_A6 + -0xda) + 1;
            *(char *)(*(int *)(unaff_A2 + 6) + (int)sVar3) = (char)((bVar1 + 4) % 8);
          }
          return;
        }
        if (unaff_A2[5] == 1) {
          *(ushort *)(unaff_A6 + -0xdc) =
               *(byte *)(unaff_D6w * 0x9c + _DAT_00027f70 + (int)unaff_D7w) & 0x18;
        }
        *(undefined2 *)(unaff_A6 + -0xc) = 0xffff;
        *(undefined2 *)(unaff_A6 + -4) = 0xffff;
        uVar2 = FUN_00000aa6(CONCAT22(unaff_D6w,unaff_D7w),*(undefined4 *)unaff_A2);
        *(undefined2 *)(unaff_A6 + -0xe) = uVar2;
        *(undefined2 *)(unaff_A6 + -2) = 0;
      }
      sVar3 = (short)(((int)*(short *)(*(short *)(unaff_A6 + -2) * 2 + 0x157be) +
                      (int)*(short *)(unaff_A6 + -0xe)) % 8);
      *(short *)(unaff_A6 + -6) = sVar3;
      unaff_D3w = *(short *)(sVar3 * 2 + 0x157ae) + unaff_D6w;
      unaff_D4w = *(short *)(*(short *)(unaff_A6 + -6) * 2 + 0x1579e) + unaff_D7w;
    } while ((((_DAT_00027f7a != 0) && ((*(ushort *)(unaff_A6 + -6) & 1) != 0)) &&
             (((*(byte *)(unaff_D3w * 0x9c + _DAT_00027f70 + (int)unaff_D4w) & 8) == 0 ||
              (*(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x01')))) ||
            ((((unaff_D3w < 0 || (0x6f < unaff_D3w)) || (unaff_D4w < 0)) || (0x9b < unaff_D4w))));
    in_D0 = unaff_D3w * 0x138;
    unaff_A3 = _DAT_00027f6c;
  } while( true );
}



// Function: FUN_00002c5a at 00002c5a
// Size: 156 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00002c5a(undefined2 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  uVar3 = 0;
  FUN_00002d52((short)_DAT_00027f64);
  _DAT_00027f74 = extraout_A0;
  FUN_00002d52((short)_DAT_00027f5c);
  _DAT_00027f6c = &DAT_00027f68;
  _DAT_00027f68 = extraout_A0_00;
  if (param_2._0_2_ == 0) {
    sVar2 = FUN_00002cfa(param_1);
    if (sVar2 != 0) {
      uVar3 = 1;
    }
  }
  else {
    for (sVar2 = 1; sVar2 < 0x14; sVar2 = sVar2 + 1) {
      sVar1 = FUN_00002cfa(param_1);
      if (sVar1 != 0) {
        uVar3 = 1;
        break;
      }
    }
  }
  if (_DAT_00027f5c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_00027f64 == 0) {
    return uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002cfa at 00002cfa
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002cfa(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar4;
  uint uVar3;
  short sVar5;
  short sVar6;
  
  uVar4 = 0;
  uVar1 = param_2._0_2_ * 0xd6;
  if ((((*(short *)(param_1 + 4) == *(short *)(_DAT_00027f74 + 10 + uVar1)) &&
       (uVar1 = param_2._0_2_ * 0xd6,
       *(short *)(param_1 + 6) == *(short *)(_DAT_00027f74 + 0xc + uVar1))) &&
      (uVar1 = param_2._0_2_ * 0xd6,
      *(short *)(param_1 + 10) == *(short *)(_DAT_00027f74 + 2 + uVar1))) &&
     (uVar1 = param_2._0_2_ * 0xd6, *(short *)(param_1 + 8) == *(short *)(_DAT_00027f74 + 4 + uVar1)
     )) {
    uVar2 = FUN_00002db0(*(undefined2 *)(param_1 + 2));
    uVar3 = uVar2 & 0xffff;
    uVar1 = uVar2 & 0xffff0000;
    if ((short)uVar2 != -1) {
      sVar6 = 0;
      while (sVar5 = (short)uVar3, sVar5 < 200) {
        *(undefined1 *)(*(int *)(param_1 + 0xc) + (int)sVar6) =
             *(undefined1 *)(param_2._0_2_ * 0xd6 + _DAT_00027f74 + 0xe + (int)sVar5);
        sVar6 = sVar6 + 1;
        uVar3 = (uint)(ushort)(sVar5 + 1);
      }
      uVar1 = param_2._0_2_ * 0xd6;
      *(undefined2 *)(_DAT_00027f74 + uVar1) = 2;
      uVar4 = 1;
    }
  }
  return CONCAT22((short)(uVar1 >> 0x10),uVar4);
}



// Function: FUN_00002d52 at 00002d52
// Size: 94 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00002d52(void)

{
  short sVar1;
  short unaff_D3w;
  undefined2 unaff_D4w;
  short sVar2;
  int unaff_A2;
  bool in_ZF;
  
  if (in_ZF) {
    sVar1 = FUN_00002db0(*(undefined2 *)(unaff_A2 + 2));
    if (sVar1 != -1) {
      sVar2 = 0;
      for (; sVar1 < 200; sVar1 = sVar1 + 1) {
        *(undefined1 *)(*(int *)(unaff_A2 + 0xc) + (int)sVar2) =
             *(undefined1 *)(unaff_D3w * 0xd6 + _DAT_00027f74 + 0xe + (int)sVar1);
        sVar2 = sVar2 + 1;
      }
      *(undefined2 *)(_DAT_00027f74 + unaff_D3w * 0xd6) = 2;
      unaff_D4w = 1;
    }
  }
  return unaff_D4w;
}



// Function: FUN_00002db0 at 00002db0
// Size: 161 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002db0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short local_8;
  short local_6;
  
  local_6 = *(short *)(_DAT_00027f74 + 6 + param_2._0_2_ * 0xd6);
  local_8 = *(short *)(_DAT_00027f74 + 8 + param_2._0_2_ * 0xd6);
  sVar2 = 0;
  while( true ) {
    if (199 < sVar2) {
      return 0xffffffff;
    }
    if (*(char *)(param_2._0_2_ * 0xd6 + _DAT_00027f74 + 0xe + (int)sVar2) == -1) break;
    if ((local_6 == param_1._0_2_) && (local_8 == param_1._2_2_)) {
      return CONCAT22((short)((uint)(param_2._0_2_ * 0xd6) >> 0x10),sVar2);
    }
    sVar1 = func_0x00006e40(&local_6,&local_8);
    if (sVar1 == 0) {
      return 0xffffffff;
    }
    sVar2 = sVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_00002fe2 at 00002fe2
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fe2(undefined2 *param_1,undefined4 param_2)

{
  *param_1 = *_DAT_000288ac;
  param_1[1] = _DAT_000288ac[1];
  param_1[2] = _DAT_000288ac[9];
  param_1[3] = _DAT_000288ac[10];
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[5] = _DAT_000288fa;
  param_1[4] = _DAT_000288fc;
  return;
}



// Function: FUN_0000325a at 0000325a
// Size: 100 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0000325a(undefined4 param_1,ushort *param_2,ushort *param_3)

{
  byte bVar1;
  int extraout_A0;
  
  FUN_00002d52(_DAT_00027f60);
  bVar1 = *(byte *)(param_1._0_2_ * 0x9c + extraout_A0 + (int)param_1._2_2_);
  _DAT_00027f70 = extraout_A0;
  *param_2 = bVar1 & 8;
  *param_3 = bVar1 & 0x10;
  if (_DAT_00027f60 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return bVar1 & 7;
}



// Function: FUN_000032c0 at 000032c0
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032c0(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  
  sVar4 = *(short *)(_DAT_0002884c + 0x182);
  sVar6 = 10000;
  sVar5 = -1;
  while (sVar1 = sVar4 + -1, sVar4 != 0) {
    psVar7 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar4 = sVar1;
    if ((((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar7 + 5)) &&
         (sVar3 = *psVar7, -1 < sVar3)) && ((psVar7[6] & 1U) != 0)) && ((psVar7[6] & 0x40U) == 0)) {
      sVar2 = func_0x000076d8((int)*(short *)(_DAT_00028854 + 2 + sVar1 * 0x16) - (int)_DAT_00027e84
                             );
      sVar3 = func_0x000076d8((int)sVar3 - (int)_DAT_00027e82);
      sVar2 = sVar2 + sVar3;
      if (sVar2 == 0) {
        sVar2 = 9000;
      }
      if (((*(ushort *)(_DAT_00028854 + 0xc + sVar1 * 0x16) & 0x200) == 0) && (sVar2 < sVar6)) {
        sVar6 = sVar2;
        sVar5 = sVar1;
      }
    }
  }
  if (sVar5 != -1) {
    psVar7 = (short *)(sVar5 * 0x16 + _DAT_00028854);
    _DAT_00027e82 = *psVar7;
    _DAT_00027e84 = psVar7[1];
  }
  return;
}



