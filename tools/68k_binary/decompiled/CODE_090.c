// Warlords II - Decompiled 68k Code
// Segment: CODE_090
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short sVar2;
  char acStack_8068 [32764];
  char acStack_68 [100];
  
  sVar2 = 100;
  while (sVar2 != 0) {
    acStack_68[(short)(sVar2 + -1)] = '\0';
    sVar2 = sVar2 + -1;
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    sVar2 = sVar1;
    if ((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16)
         ) && ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar1 * 0x16) >> 0x1c) == 1)) &&
       ((int)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar1 * 0x16) << 1) >> 0x19) <
        (int)*(short *)(_DAT_0002884c + 0x15c2))) {
      acStack_68[(short)(ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar1 * 0x16) << 1) >> 0x19)]
           = acStack_68
             [(short)(ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar1 * 0x16) << 1) >> 0x19)] +
             '\x01';
    }
  }
  sVar2 = 0;
  while( true ) {
    if (9 < sVar2) {
      return;
    }
    sVar1 = FUN_000000fc();
    if (sVar1 == 0) break;
    sVar2 = sVar2 + 1;
  }
  return;
}



// Function: FUN_000000fc at 000000fc
// Size: 418 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000000fc(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  undefined1 auStack_12 [6];
  short local_c;
  short local_a [3];
  
  sVar5 = 0;
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
LAB_0000028a:
  do {
    sVar1 = sVar4 + -1;
    if (sVar4 == 0) {
      return sVar5;
    }
    sVar4 = sVar1;
  } while (((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) !=
            (int)*(short *)(_DAT_0002884c + 0x110)) ||
          ((param_1._0_2_ != 0 && (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) != '\x01'))));
  if (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) == '\x01') {
    func_0x00002d90(CONCAT22(sVar1,1));
    *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 3;
  }
  sVar2 = func_0x00002db8((short)((uint)auStack_12 >> 0x10));
  if (sVar2 == 0) goto code_r0x0000018c;
  goto LAB_000001fc;
code_r0x0000018c:
  cVar3 = *(char *)(_DAT_00028978 + 0x56 + (int)sVar1);
  if ((cVar3 == '\x03') || (cVar3 == '\x02')) {
    *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 4;
  }
  if ((*(short *)(_DAT_0002884c + 0x128) == 0) &&
     (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) == '\x05')) {
    local_a[1] = 1;
    local_a[2] = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar6 = local_a + 1;
    }
    else {
      psVar6 = local_a + 2;
    }
    if (*psVar6 < 6) {
LAB_000001fc:
      sVar5 = sVar5 + 1;
      cVar3 = FUN_0000029e();
      if (cVar3 == '\0') {
        sVar2 = func_0x00002dc0();
        if (sVar2 == 0xff) {
          *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 4;
        }
        else {
          *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 3;
        }
      }
      else {
        local_c = 1;
        local_a[0] = *(short *)(_DAT_0002884c + 0x136);
        if (*(short *)(_DAT_0002884c + 0x136) < 2) {
          psVar6 = &local_c;
        }
        else {
          psVar6 = local_a;
        }
        FUN_000007b0(CONCAT22(sVar1,(ushort)(10 < *psVar6)));
        *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 2;
      }
    }
  }
  goto LAB_0000028a;
}



// Function: FUN_0000029e at 0000029e
// Size: 670 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_0000029e(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int *piVar9;
  short *psVar10;
  int iVar11;
  short asStackY_10024 [8];
  short asStackY_10014 [32727];
  short local_36;
  int local_2e [2];
  ushort local_26;
  short local_24 [8];
  short local_14 [8];
  
  sVar3 = func_0x00002dc8();
  local_26 = (ushort)(*(short *)(_DAT_0002884c + 0x124) != 0);
  if (*(short *)(_DAT_0002884c + 0x11a) == 0) {
    sVar4 = 1;
  }
  else {
    sVar4 = 8;
  }
  if (sVar3 < 5) {
    sVar5 = 2;
  }
  else {
    sVar5 = 0;
  }
  sVar5 = sVar5 + (ushort)(sVar3 < 0xf);
  if (*(short *)(_DAT_00028978 + 0x48) != 0) {
    sVar5 = sVar5 + 2;
  }
  sVar3 = 0;
  sVar6 = 8;
  while (sVar6 != 0) {
    sVar3 = *(short *)((short)(sVar6 + -1) * 2 + _DAT_00028978 + 0x40c) + sVar3;
    sVar6 = sVar6 + -1;
  }
  local_2e[0] = (int)sVar3;
  local_2e[1] = 2;
  if (sVar3 < 3) {
    piVar9 = local_2e;
  }
  else {
    piVar9 = local_2e + 1;
  }
  sVar5 = (short)*piVar9 + sVar5;
  sVar3 = 8;
  while (sVar6 = sVar3 + -1, sVar3 != 0) {
    local_24[sVar6] = -1;
    local_14[sVar6] = -1;
    sVar3 = sVar6;
  }
  sVar3 = sVar5;
  sVar6 = *(short *)(_DAT_0002884c + 0x182);
  sVar8 = 0;
  do {
    while( true ) {
      do {
        do {
          sVar2 = sVar6 + -1;
          sVar7 = sVar8;
          if (sVar6 == 0) goto LAB_0000041a;
          sVar6 = sVar2;
        } while ((((*(char *)(_DAT_0002884c + 0x111) != *(char *)(_DAT_00028854 + 5 + sVar2 * 0x16))
                  || ((uint)(*(int *)(_DAT_00028854 + 0xe + sVar2 * 0x16) << 4) >> 0x1d != 0)) ||
                 ((*(ushort *)(_DAT_00028854 + 0xc + sVar2 * 0x16) & 0x40) != 0)) ||
                ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar2 * 0x16) >> 0x1c) != 0));
        psVar10 = (short *)(sVar2 * 0x16 + _DAT_00028854);
        iVar11 = param_1._0_2_ * 0x42 + _DAT_0002884c;
      } while ((*(short *)(iVar11 + 0x15c4) != *psVar10) ||
              (*(short *)(iVar11 + 0x15c6) != psVar10[1]));
      if (sVar3 == 0) break;
      sVar3 = sVar3 + -1;
    }
    sVar7 = sVar8 + 1;
    local_14[sVar8] = sVar2;
    sVar8 = sVar7;
  } while (sVar7 < 8);
LAB_0000041a:
  if (sVar7 == 0) {
    local_26 = 0;
  }
  else {
    local_36 = 0;
    while( true ) {
      sVar8 = 0;
      sVar3 = -1;
      sVar6 = 8;
      while (sVar7 = sVar6 + -1, sVar6 != 0) {
        sVar6 = sVar7;
        if ((local_14[sVar7] != -1) &&
           (cVar1 = *(char *)(_DAT_00028854 + 6 + local_14[sVar7] * 0x16), (int)sVar8 < (int)cVar1))
        {
          sVar8 = (short)cVar1;
          sVar3 = sVar7;
        }
      }
      if (sVar3 == -1) break;
      local_24[local_36] = local_14[sVar3];
      local_14[sVar3] = -1;
      local_36 = local_36 + 1;
    }
    while( true ) {
      sVar6 = 0;
      sVar3 = 8;
      while (sVar3 != 0) {
        local_14[(short)(sVar3 + -1)] = -1;
        sVar3 = sVar3 + -1;
      }
      sVar3 = 0;
      while ((sVar3 < 8 && (sVar6 < sVar4))) {
        if (local_24[sVar3] != -1) {
          local_14[sVar6] = local_24[sVar3];
          local_24[sVar3] = -1;
          sVar6 = sVar6 + 1;
        }
        sVar3 = sVar3 + 1;
      }
      if ((sVar6 == 0) ||
         (((sVar5 == 0 && (*(short *)(_DAT_0002884c + 0x124) != 0)) &&
          (sVar3 = func_0x00002dc8(), sVar3 < 0xf)))) break;
      FUN_0000053c(sVar6,param_2._0_2_,(short)local_14,&local_26);
    }
  }
  return local_26;
}



// Function: FUN_0000053c at 0000053c
// Size: 628 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000053c(undefined4 param_1,int param_2,int param_3,undefined2 *param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  int unaff_A5;
  byte abStackY_8012 [8];
  byte abStackY_800a [32720];
  undefined2 uVar10;
  byte abStack_12 [6];
  short local_c;
  byte abStack_a [6];
  
  sVar5 = 100;
  if (*(char *)(unaff_A5 + -0x713) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x713) = 1;
    _DAT_0002890c = 0xffff;
  }
  while( true ) {
    sVar3 = 8;
    while (sVar2 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar2;
      if ((*(short *)(param_3 + sVar2 * 2) != -1) &&
         ((int)*(short *)(_DAT_0002884c + 0x110) !=
          (int)*(char *)(_DAT_00028854 + 5 + *(short *)(param_3 + sVar2 * 2) * 0x16))) {
        *(undefined2 *)(param_3 + sVar2 * 2) = 0xffff;
      }
    }
    uVar10 = (undefined2)param_3;
    if (*(short *)(_DAT_0002884c + 0x11a) != 0) {
      func_0x00002de8(uVar10);
    }
    local_c = 1000;
    sVar3 = func_0x00002db8((short)((uint)abStack_12 >> 0x10),(short)((uint)abStack_a >> 0x10));
    if (sVar3 == 0) {
      return;
    }
    sVar3 = 6;
    uVar9 = 0xffff;
    while (sVar2 = sVar3 + -1, sVar3 != 0) {
      bVar1 = abStack_12[sVar2];
      uVar4 = (ushort)bVar1;
      sVar3 = sVar2;
      if (((uVar4 != 0xff) && ((*(byte *)((short)uVar4 + _DAT_00028978 + 0x11e) & 1) == 0)) &&
         (*param_4 = 0, *(char *)(param_2 + (short)uVar4) < '\x03')) {
        if (*(short *)(_DAT_0002884c + 0x11a) != 0) {
          sVar5 = func_0x00002cb8(*(undefined2 *)((short)uVar4 * 0x42 + _DAT_0002884c + 0x15c6));
        }
        if (0x4a < sVar5) {
          sVar6 = func_0x00002ad0(10);
          if (abStack_a[sVar2] < 0x29) {
            sVar7 = 0;
          }
          else {
            sVar7 = 10;
          }
          if (abStack_a[sVar2] < 0x33) {
            sVar8 = 0;
          }
          else {
            sVar8 = 0x1e;
          }
          sVar2 = (100 - sVar5) +
                  sVar8 + sVar7 + sVar6 + (ushort)abStack_a[sVar2] +
                                  *(char *)(param_2 + (short)uVar4) * 10;
          if (sVar2 < local_c) {
            local_c = sVar2;
            uVar9 = (ushort)bVar1;
          }
        }
      }
    }
    if (uVar9 == 0xffff) break;
    *(char *)(param_2 + (short)uVar9) = (char)param_1 + *(char *)(param_2 + (short)uVar9);
    _DAT_0002890a = param_1._0_2_;
    _DAT_0002890c = uVar9;
    func_0x00003e38(uVar10,uVar9);
    func_0x00002c38();
    if ((int)*(char *)((short)uVar9 * 0x42 + _DAT_0002884c + 0x15d9) !=
        (int)*(short *)(_DAT_0002884c + 0x110)) {
      return;
    }
    func_0x00007518();
    if (*(short *)(_DAT_00028978 + 0x48) != 0) {
      return;
    }
    sVar3 = func_0x00002dc8(*(undefined2 *)((short)uVar9 * 0x42 + _DAT_0002884c + 0x15c6));
    if (sVar3 < 10) {
      return;
    }
  }
  if (((*(short *)(_DAT_0002884c + 0x124) != 0) && (_DAT_0002890a == param_1._0_2_)) &&
     (_DAT_0002890c != 0xffff)) {
    func_0x00003e38(uVar10,_DAT_0002890c);
  }
  return;
}



// Function: FUN_000007b0 at 000007b0
// Size: 706 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007b0(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  short asStackY_10024 [8];
  short asStackY_10014 [32733];
  short local_36;
  short local_2e [4];
  short local_26;
  short local_24 [8];
  short local_14 [8];
  
  iVar9 = param_1._0_2_ * 0x42 + _DAT_0002884c;
  local_26 = *(short *)(iVar9 + 0x15c4);
  local_2e[3] = *(short *)(iVar9 + 0x15c6);
  sVar3 = func_0x00002dc8(local_2e[3]);
  local_2e[2] = 0;
  sVar5 = 4;
  while (sVar4 = sVar5 + -1, sVar5 != 0) {
    sVar5 = sVar4;
    if (*(short *)(sVar4 * 0x5c + _DAT_00028978 + 0x24c) != 0) {
      local_2e[2] = 1;
    }
  }
  if (sVar3 < 5) {
    sVar5 = 2;
  }
  else {
    sVar5 = 0;
  }
  sVar5 = sVar5 + (ushort)(sVar3 < 0xf);
  if (*(short *)(_DAT_00028978 + 0x48) != 0) {
    sVar5 = sVar5 + 2;
  }
  local_2e[0] = 0;
  sVar3 = 8;
  while (sVar3 != 0) {
    local_2e[0] = *(short *)((short)(sVar3 + -1) * 2 + _DAT_00028978 + 0x40c) + local_2e[0];
    sVar3 = sVar3 + -1;
  }
  local_2e[1] = 2;
  if (local_2e[0] < 3) {
    psVar10 = local_2e;
  }
  else {
    psVar10 = local_2e + 1;
  }
  sVar3 = *psVar10;
  sVar4 = 8;
  while (sVar6 = sVar4 + -1, sVar4 != 0) {
    local_24[sVar6] = -1;
    local_14[sVar6] = -1;
    sVar4 = sVar6;
  }
  sVar4 = sVar3 + sVar5;
  sVar6 = *(short *)(_DAT_0002884c + 0x182);
  sVar8 = 0;
  do {
    while( true ) {
      do {
        sVar2 = sVar6 + -1;
        sVar7 = sVar8;
        if (sVar6 == 0) goto LAB_0000096e;
        sVar6 = sVar2;
      } while ((((((*(char *)(_DAT_0002884c + 0x111) != *(char *)(_DAT_00028854 + 5 + sVar2 * 0x16))
                  || ((uint)(*(int *)(_DAT_00028854 + 0xe + sVar2 * 0x16) << 4) >> 0x1d != 0)) ||
                 (iVar9 = sVar2 * 0x16 + _DAT_00028854, (*(ushort *)(iVar9 + 0xc) & 0x40) != 0)) ||
                (((*(char *)(iVar9 + 4) == '\x1c' && (local_2e[2] != 0)) ||
                 (((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar2 * 0x16) >> 0x1c) != 0 ||
                  ((param_1._2_2_ != 0 &&
                   (*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + sVar2 * 0x16) * 6
                             ) == '\0')))))))) ||
               (psVar10 = (short *)(sVar2 * 0x16 + _DAT_00028854), local_26 != *psVar10)) ||
              (local_2e[3] != psVar10[1]));
      if (sVar4 == 0) break;
      sVar4 = sVar4 + -1;
    }
    sVar7 = sVar8 + 1;
    local_14[sVar8] = sVar2;
    sVar8 = sVar7;
  } while (sVar7 < 8);
LAB_0000096e:
  if (sVar7 == 0) {
    return;
  }
  local_36 = 0;
  while( true ) {
    sVar8 = 0;
    sVar4 = -1;
    sVar6 = 8;
    while (sVar7 = sVar6 + -1, sVar6 != 0) {
      sVar6 = sVar7;
      if ((local_14[sVar7] != -1) &&
         (cVar1 = *(char *)(_DAT_00028854 + 6 + local_14[sVar7] * 0x16), (int)sVar8 < (int)cVar1)) {
        sVar8 = (short)cVar1;
        sVar4 = sVar7;
      }
    }
    if (sVar4 == -1) break;
    local_24[local_36] = local_14[sVar4];
    local_14[sVar4] = -1;
    local_36 = local_36 + 1;
  }
  do {
    sVar4 = 8;
    while (sVar4 != 0) {
      local_14[(short)(sVar4 + -1)] = -1;
      sVar4 = sVar4 + -1;
    }
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      if (local_24[sVar4] != -1) {
        local_14[0] = local_24[sVar4];
        local_24[sVar4] = -1;
        break;
      }
    }
    if (local_14[0] == -1) {
      return;
    }
    if ((((short)(sVar3 + sVar5) == 0) && (*(short *)(_DAT_0002884c + 0x124) != 0)) &&
       (sVar4 = func_0x00002dc8(*(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6)),
       sVar4 < 0xf)) {
      return;
    }
    func_0x00002c40();
  } while( true );
}



