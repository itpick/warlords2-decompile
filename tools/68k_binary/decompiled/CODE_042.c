// Warlords II - Decompiled 68k Code
// Segment: CODE_042
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000f8 at 000000f8
// Size: 32 bytes

void FUN_000000f8(int param_1)

{
  if (*(int *)(param_1 + 0x1d0) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1d0) + 0x1b) = 0;
  }
  return;
}



// Function: FUN_00000118 at 00000118
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000152 at 00000152
// Size: 34 bytes

void FUN_00000152(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 8) = param_2._1_1_ + *(char *)(param_1 + 8);
  if ('\t' < *(char *)(param_1 + 8)) {
    *(undefined1 *)(param_1 + 8) = 9;
  }
  return;
}



// Function: FUN_00000174 at 00000174
// Size: 134 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000174(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = 0;
  do {
    if (999 < sVar1) {
LAB_000001a2:
      *param_2 = sVar1;
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(_DAT_0002884c + 0x111);
        *(undefined2 *)(param_1 + 0xc) = 0;
        *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 1;
        *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0x80;
        *(uint *)(param_1 + 0xe) =
             *(uint *)(param_1 + 0xe) & 0xfffffff |
             ((uint)(*(int *)(param_1 + 0xf) << 1) >> 0x19) << 0x1c;
        *(undefined1 *)(param_1 + 0x10) = 0xff;
        *(undefined1 *)(param_1 + 0x11) = 0;
        *(undefined2 *)(param_1 + 0x12) = 0xffff;
        *(undefined2 *)(param_1 + 0x14) = 0xffff;
      }
      return;
    }
    if (*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16) == -1) {
      iVar2 = sVar1 * 0x16 + _DAT_00028854;
      goto LAB_000001a2;
    }
    sVar1 = sVar1 + 1;
  } while( true );
}



// Function: FUN_000001fa at 000001fa
// Size: 120 bytes

void FUN_000001fa(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 5) = 0xff;
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf1;
  *(uint *)((int)param_1 + 0xf) =
       *(uint *)((int)param_1 + 0xf) & 0x80ffffff |
       ((uint)(*(int *)(param_1 + 7) << 4) >> 0x1d) << 0x18;
  *(uint *)(param_1 + 7) =
       *(uint *)(param_1 + 7) & 0xfffffff |
       ((uint)(*(int *)((int)param_1 + 0xf) << 1) >> 0x19) << 0x1c;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[10] = 0xffff;
  param_1[9] = 0xffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = param_1[7] & 0xfe7f;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  return;
}



// Function: FUN_00000272 at 00000272
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000272(void)

{
  short sVar1;
  short sVar2;
  
  for (sVar2 = 0; sVar2 < 0xc; sVar2 = sVar2 + 1) {
    *(undefined2 *)(&DAT_00015cbe + sVar2 * 2) = *(undefined2 *)(&DAT_00015cd6 + sVar2 * 2);
  }
  func_0x00007598();
  for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
    sVar1 = func_0x000075b8();
    if (sVar1 == 0) {
      if (sVar2 == 0) {
        _DAT_00015cc6 = 7;
      }
      else if (sVar2 == 1) {
        _DAT_00015cc8 = 7;
      }
      else if (sVar2 == 2) {
        _DAT_00015cca = 7;
      }
      else if (sVar2 == 3) {
        _DAT_00015cce = 7;
      }
    }
  }
  func_0x000075a0();
  return;
}



// Function: FUN_00000302 at 00000302
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000302(void)

{
  uint *puVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
    iVar8 = sVar5 * 0xe0 + _DAT_00028850;
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      pbVar2 = (byte *)(iVar8 + 1 + sVar4 * 2);
      *pbVar2 = *pbVar2 & 0xef;
      pbVar2 = (byte *)(iVar8 + 1 + sVar4 * 2);
      *pbVar2 = *pbVar2 | 0xf;
    }
  }
  sVar5 = *(short *)(_DAT_0002884c + 0x182);
  while (iVar8 = _DAT_00028854, sVar4 = sVar5 + -1, sVar5 != 0) {
    sVar3 = *(short *)(_DAT_00028854 + 2 + sVar4 * 0x16);
    sVar5 = sVar4;
    if (-1 < sVar3) {
      iVar7 = *(short *)(_DAT_00028854 + sVar4 * 0x16) * 2 + sVar3 * 0xe0 + _DAT_00028850;
      pbVar2 = (byte *)(iVar7 + 1);
      *pbVar2 = *pbVar2 | 0x10;
      puVar1 = (uint *)(iVar7 + 1);
      *puVar1 = *puVar1 & 0xf0ffffff | (*(byte *)(iVar8 + 5 + sVar4 * 0x16) & 0xf) << 0x18;
    }
  }
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar4 = sVar5 + -1, sVar5 != 0) {
    uVar6 = (ushort)*(char *)(sVar4 * 0x42 + _DAT_0002884c + 0x15d9);
    sVar5 = sVar4;
    if (uVar6 != 0xf) {
      puVar1 = (uint *)(*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 + 1
                       + *(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c4) * 2);
      *puVar1 = *puVar1 & 0xf0ffffff | (uVar6 & 0xf) << 0x18;
      puVar1 = (uint *)((*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0xe0 +
                        _DAT_00028850 + 1 + *(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c4) * 2);
      *puVar1 = *puVar1 & 0xf0ffffff | (uVar6 & 0xf) << 0x18;
      puVar1 = (uint *)(*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 + 1
                       + (*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c4) + 1) * 2);
      *puVar1 = *puVar1 & 0xf0ffffff | (uVar6 & 0xf) << 0x18;
      puVar1 = (uint *)((*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0xe0 +
                        _DAT_00028850 + 1 +
                       (*(short *)(sVar4 * 0x42 + _DAT_0002884c + 0x15c4) + 1) * 2);
      *puVar1 = *puVar1 & 0xf0ffffff | (uVar6 & 0xf) << 0x18;
    }
  }
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
    iVar8 = sVar5 * 0xe0 + _DAT_00028850;
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (((*(byte *)(iVar8 + 1 + sVar4 * 2) & 0x20) != 0) &&
         ((*(byte *)(iVar8 + 1 + sVar4 * 2) & 0x10) == 0)) {
        pbVar2 = (byte *)(iVar8 + 1 + sVar4 * 2);
        *pbVar2 = *pbVar2 & 0xdf;
      }
    }
  }
  return;
}



// Function: FUN_000004ea at 000004ea
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004ea(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  short *psVar5;
  int local_c;
  int local_8;
  
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    *(undefined2 *)(&DAT_00028810 + sVar2 * 2) = 0;
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    psVar5 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar2 = sVar1;
    if (((*(char *)((int)psVar5 + 5) < '\b') && (-1 < *psVar5)) && (-1 < psVar5[1])) {
      sVar3 = (short)*(char *)((int)psVar5 + 0xb);
      if ((psVar5[6] & 0x1000U) != 0) {
        local_c = 4;
        local_8 = (int)sVar3;
        if (sVar3 < 5) {
          piVar4 = &local_c;
        }
        else {
          piVar4 = &local_8;
        }
        sVar3 = (short)*piVar4;
      }
      *(short *)(&DAT_00028810 + *(char *)(_DAT_00028854 + 5 + sVar1 * 0x16) * 2) =
           sVar3 + *(short *)(&DAT_00028810 + *(char *)(_DAT_00028854 + 5 + sVar1 * 0x16) * 2);
    }
  }
  return;
}



// Function: FUN_00000592 at 00000592
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000592(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    *(undefined2 *)(&DAT_00028820 + sVar3 * 2) = 0;
  }
  for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x15c2); sVar3 = sVar3 + 1) {
    cVar1 = *(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9);
    if (cVar1 < '\b') {
      *(short *)(&DAT_00028820 + cVar1 * 2) =
           *(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15ee) + *(short *)(&DAT_00028820 + cVar1 * 2)
      ;
    }
  }
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    sVar2 = FUN_00000b66();
    *(short *)(&DAT_00028820 + sVar3 * 2) =
         sVar2 * *(short *)(&DAT_00028800 + sVar3 * 2) + *(short *)(&DAT_00028820 + sVar3 * 2);
  }
  return;
}



// Function: FUN_0000062a at 0000062a
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000062a(void)

{
  char cVar1;
  short sVar2;
  
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    *(undefined2 *)(&DAT_00028800 + sVar2 * 2) = 0;
  }
  for (sVar2 = 0; sVar2 < *(short *)(_DAT_0002884c + 0x15c2); sVar2 = sVar2 + 1) {
    cVar1 = *(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9);
    if (cVar1 < '\b') {
      *(short *)(&DAT_00028800 + cVar1 * 2) = *(short *)(&DAT_00028800 + cVar1 * 2) + 1;
    }
  }
  return;
}



// Function: FUN_00000680 at 00000680
// Size: 116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000680(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  do {
    if (*(short *)(_DAT_0002884c + 0x15c2) <= sVar3) {
      return 0xffffffff;
    }
    sVar1 = *(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c4);
    if ((sVar1 == param_1._0_2_) || ((int)sVar1 == param_1._0_2_ + -1)) {
      iVar2 = sVar3 * 0x42;
      sVar1 = *(short *)(iVar2 + _DAT_0002884c + 0x15c6);
      if ((sVar1 == param_1._2_2_) || (iVar2 = param_1._2_2_ + -1, sVar1 == iVar2)) {
        return CONCAT22((short)((uint)iVar2 >> 0x10),sVar3);
      }
    }
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_000006f4 at 000006f4
// Size: 90 bytes

undefined4 FUN_000006f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1._0_2_ == param_2._0_2_) {
    if (param_1._2_2_ < param_2._2_2_) {
      uVar1 = 4;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_1._2_2_ == param_2._2_2_) {
    if (param_1._0_2_ < param_2._0_2_) {
      uVar1 = 2;
    }
    else {
      uVar1 = 6;
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



// Function: FUN_0000074e at 0000074e
// Size: 480 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000074e(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 *extraout_A0;
  short *psVar4;
  undefined1 auStack_20 [22];
  undefined1 local_a [2];
  short local_8 [2];
  
  cVar1 = *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f0);
  sVar2 = func_0x000032b0(CONCAT22(param_1._0_2_,(short)cVar1));
  FUN_00000174((short)auStack_20,(short)local_a);
  if (extraout_A0 != (undefined2 *)0x0) {
    *extraout_A0 = *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4);
    extraout_A0[1] = *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6);
    *(char *)(extraout_A0 + 2) = cVar1;
    *(undefined1 *)((int)extraout_A0 + 5) =
         *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
    if (*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e6);
    }
    *(undefined1 *)(extraout_A0 + 3) = uVar3;
    if (*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e6);
    }
    *(undefined1 *)((int)extraout_A0 + 7) = uVar3;
    cVar1 = *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
    if ((cVar1 == '\x0f') || (*(short *)(cVar1 * 2 + _DAT_0002884c + 0xf0) == 0)) {
      *(undefined1 *)(extraout_A0 + 4) =
           *(undefined1 *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e2);
    }
    else {
      local_8[0] = *(char *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e2) + 2;
      local_8[1] = 9;
      if (local_8[0] < 10) {
        psVar4 = local_8;
      }
      else {
        psVar4 = local_8 + 1;
      }
      *(char *)(extraout_A0 + 4) = (char)*psVar4;
    }
    *(char *)((int)extraout_A0 + 9) = (char)((uint)param_1 >> 0x10);
    *(undefined1 *)(extraout_A0 + 5) = 0;
    *(char *)((int)extraout_A0 + 0xb) =
         *(char *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15ea) / '\x02';
    *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f1) = 0;
    *(byte *)((int)extraout_A0 + 0xf) = *(byte *)((int)extraout_A0 + 0xf) & 0x80;
    *(uint *)(extraout_A0 + 7) =
         *(uint *)(extraout_A0 + 7) & 0xfffffff |
         ((uint)(*(int *)((int)extraout_A0 + 0xf) << 1) >> 0x19) << 0x1c;
    *(undefined1 *)(extraout_A0 + 8) = 0xff;
    func_0x000061d8();
    *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f0) = 0xff;
    *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f1) = 0;
  }
  return;
}



// Function: FUN_0000092e at 0000092e
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000092e(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  *(undefined2 *)(*(char *)(param_1 + 10) * 2 + _DAT_0002884c + 0x544) = 0;
  sVar1 = (short)*(char *)(param_1 + 10);
  func_0x00007490();
  func_0x00006e60(0x20000,(short)((uint)param_1 >> 0x10),sVar1);
  if ((0 < _DAT_000283d8) &&
     (*(char *)((*(uint *)(param_2._2_2_ * 0xe0 + _DAT_00028850 + param_2._0_2_ * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\x02')) {
    func_0x00002a10();
    uVar2 = 0;
  }
  for (sVar1 = 0; sVar1 < _DAT_000283d8; sVar1 = sVar1 + 1) {
    *(undefined1 *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd28) = uVar2;
    *(undefined2 *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd2a) = 0;
    *(short *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd2c) = param_2._0_2_
    ;
    *(short *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd2e) = param_2._2_2_
    ;
    func_0x00007460();
  }
  return;
}



// Function: FUN_00000a3a at 00000a3a
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a3a(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 4) == '\x1c') {
    if ((int)((*(uint *)(_DAT_0002884c + 0x5e4 + (int)(short)*(char *)(param_1 + 10)) >> 0x1a) +
             (int)param_2._0_2_) < 0x3c) {
      puVar2 = (uint *)(_DAT_0002884c + 0x5e4 + (int)(short)*(char *)(param_1 + 10));
      *puVar2 = *puVar2 & 0x3ffffff |
                (uint)(byte)((char)((uint)param_2 >> 0x10) +
                            (byte)((uint)*(undefined4 *)
                                          (_DAT_0002884c + 0x5e4 +
                                          (int)(short)*(char *)(param_1 + 10)) >> 0x1a)) << 0x1a;
    }
    else {
      cVar3 = *(char *)(param_1 + 10);
      iVar4 = _DAT_0002884c + 0x5e4;
      pbVar1 = (byte *)(iVar4 + (short)cVar3);
      *pbVar1 = *pbVar1 & 3;
      pbVar1 = (byte *)(iVar4 + (short)cVar3);
      *pbVar1 = *pbVar1 | 0xf0;
    }
  }
  return;
}



// Function: FUN_00000ac6 at 00000ac6
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000ac6(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = 0;
  for (sVar2 = 0; sVar2 < 0x1c; sVar2 = sVar2 + 1) {
    if (*(char *)(_DAT_00028864 + 4 + sVar2 * 6) != '\0') {
      sVar1 = sVar1 + 1;
    }
  }
  if (param_1._0_2_ == 0) {
    sVar1 = func_0x00002ad0(sVar1);
  }
  else {
    sVar1 = func_0x00002ad0(sVar1);
  }
  sVar2 = 0;
  for (sVar3 = 0; sVar3 < 0x1c; sVar3 = sVar3 + 1) {
    if (*(char *)(_DAT_00028864 + 4 + sVar3 * 6) != '\0') {
      if (sVar2 == sVar1) break;
      sVar2 = sVar2 + 1;
    }
  }
  if (((0x1b < sVar3) || (sVar3 < 0)) || (*(char *)(_DAT_00028864 + 4 + sVar3 * 6) == '\0')) {
    sVar3 = 0x19;
  }
  return sVar3;
}



// Function: FUN_00000b66 at 00000b66
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000b66(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = 0;
  sVar1 = *(short *)(_DAT_0002884c + 0x182);
  while( true ) {
    sVar2 = sVar1 + -1;
    if (sVar1 == 0) break;
    iVar4 = sVar2 * 0x16 + _DAT_00028854;
    sVar1 = sVar2;
    if (((int)param_1._0_2_ == (int)*(char *)(iVar4 + 5)) && (*(char *)(iVar4 + 4) == '\x1c')) {
      func_0x00006e60(0x20000);
      for (sVar2 = 0; sVar2 < _DAT_000283d8; sVar2 = sVar2 + 1) {
        iVar4 = *(short *)(&DAT_00027fda + sVar2 * 2) * 0x1e + _DAT_0002884c;
        if (*(char *)(iVar4 + 0xd26) == '\a') {
          sVar3 = *(char *)(iVar4 + 0xd27) + sVar3;
        }
      }
    }
  }
  return sVar3;
}



// Function: FUN_00000bf8 at 00000bf8
// Size: 66 bytes

undefined4 FUN_00000bf8(void)

{
  undefined4 uVar1;
  char cStack00000018;
  char cStack00000019;
  
  if (cStack00000018 == '\x06') {
    uVar1 = 1;
  }
  else if (cStack00000018 == '\x05') {
    uVar1 = 1;
  }
  else if ((cStack00000018 == '\x02') && ('\x01' < cStack00000019)) {
    uVar1 = 1;
  }
  else if (cStack00000018 == '\b') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00000c3a at 00000c3a
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c3a(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  if (_DAT_00027fc8 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc8 + 0x188))(_DAT_00027fc8,0x6c62616b);
    func_0x000048a8(extraout_A0);
    (**(code **)(*_DAT_00027fc8 + 0x188))(_DAT_00027fc8,0x7362616b);
    func_0x000048a8(extraout_A0_00);
  }
  return;
}



// Function: FUN_00000c8c at 00000c8c
// Size: 1254 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c8c(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  if (_DAT_000288ac == (short *)0x0) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar2 = *_DAT_000288ac;
    sVar3 = _DAT_000288ac[1];
  }
  sVar4 = *(short *)(_DAT_0002884c + 0x182);
  do {
    sVar1 = sVar4 + -1;
    if (sVar4 == 0) break;
    iVar5 = sVar1 * 0x16 + _DAT_00028854;
    sVar4 = sVar1;
  } while ((*(char *)(iVar5 + 4) != '\x1c') ||
          ((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(iVar5 + 5)));
  if (*(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) + _DAT_0002884c +
               0x711) == '\v') {
    sVar4 = 0;
    while ((sVar4 < *(short *)(_DAT_0002884c + 0x810) &&
           ((iVar5 = sVar4 * 0x20 + _DAT_0002884c, sVar2 != *(short *)(iVar5 + 0x812) ||
            (sVar3 != *(short *)(iVar5 + 0x814)))))) {
      sVar4 = sVar4 + 1;
    }
  }
  func_0x00006da0(_DAT_000297f4,0x583);
  func_0x00006da0(_DAT_000297f4,0x584);
  func_0x00006da0(_DAT_000297f4,0x585);
  func_0x00006da0(_DAT_000297f4,0x586);
  func_0x00006da0(_DAT_000297f4,0x5dc);
  func_0x00006da0(_DAT_000297f4,0x5dd);
  func_0x00006da0(_DAT_000297f4,0x5de);
  func_0x00006da0(_DAT_000297f4,0x5df);
  func_0x00006da0(_DAT_000297f4,0x5e0);
  func_0x00006da0(_DAT_000297f4,0x5e1);
  func_0x00006da0(_DAT_000297f4,0x5e2);
  func_0x00006da0(_DAT_000297f4,0x5e3);
  func_0x00006da0(_DAT_000297f4,0x640);
  func_0x00006da0(_DAT_000297f4,0x642);
  func_0x00006da0(_DAT_000297f4,0x643);
  func_0x00006da0(_DAT_000297f4,0x6a4);
  func_0x00006da0(_DAT_000297f4,0x6a5);
  func_0x00006da0(_DAT_000297f4,0x6a6);
  func_0x00006da0(_DAT_000297f4,0x6a7);
  func_0x00006da0(_DAT_000297f4,0x6a8);
  func_0x00006da0(_DAT_000297f4,0x6a9);
  uVar7 = 1;
  uVar6 = 0;
  func_0x00004828(0);
  func_0x00006da0(_DAT_000297f4,0x6aa,uVar6,uVar7);
  func_0x00006da0(_DAT_000297f4,0x6ab);
  func_0x00006da0(_DAT_000297f4,0x708);
  func_0x00006da0(_DAT_000297f4,0x709);
  func_0x00006da0(_DAT_000297f4,0x70a);
  func_0x00006da0(_DAT_000297f4,0x70b);
  func_0x00006da0(_DAT_000297f4,0x70c);
  func_0x00006da0(_DAT_000297f4,0x70d);
  func_0x00006da0(_DAT_000297f4,0x76c);
  func_0x00006da0(_DAT_000297f4,0x773);
  FUN_00000c3a();
  return;
}



// Function: FUN_00001172 at 00001172
// Size: 1038 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001172(undefined4 param_1)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auStack_110 [200];
  ushort local_48;
  short local_46;
  int local_44 [8];
  undefined1 auStack_24 [16];
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  bVar4 = true;
  local_6 = 1;
  local_a = 0;
  local_c = 0;
  local_e = 0;
  local_10 = 0;
  local_12 = 0;
  local_8 = 0;
  bVar3 = false;
  local_14 = 0;
  for (sVar7 = 0; sVar7 < 8; sVar7 = sVar7 + 1) {
    local_44[sVar7] = *(int *)(&DAT_000288b4 + sVar7 * 4);
    *(undefined4 *)(&DAT_000288b4 + sVar7 * 4) = 0;
  }
  sVar8 = 0;
  for (sVar7 = 0; sVar7 < 8; sVar7 = sVar7 + 1) {
    if (local_44[sVar7] != 0) {
      *(int *)(&DAT_000288b4 + sVar8 * 4) = local_44[sVar7];
      sVar8 = sVar8 + 1;
    }
  }
  _DAT_000288f8 = 0;
  _DAT_000288f6 = 100;
  if ((_DAT_000288ac != 0) &&
     (_DAT_000288b0 = _DAT_000288ac, *(char *)(_DAT_000288ac + 4) != '\x1c')) {
    _DAT_000288b0 = 0;
  }
  bVar2 = false;
  for (sVar7 = 0; sVar7 < 8; sVar7 = sVar7 + 1) {
    if (*(int *)(&DAT_000288b4 + sVar7 * 4) != 0) {
      local_48 = *(ushort *)(*(int *)(&DAT_000288b4 + sVar7 * 4) + 0xc) & 0x1000;
      if (*(char *)(_DAT_00028864 + (short)*(char *)(*(int *)(&DAT_000288b4 + sVar7 * 4) + 4) * 6)
          == '\0') {
        if ((local_48 == 0) && (*(char *)(*(int *)(&DAT_000288b4 + sVar7 * 4) + 4) == 0x1c)) {
          bVar3 = true;
        }
      }
      else {
        bVar2 = true;
      }
    }
  }
  if ((bVar2) && (bVar3)) {
    local_14 = 1;
  }
  bVar3 = false;
  for (sVar7 = 0; sVar7 < 8; sVar7 = sVar7 + 1) {
    if (*(int *)(&DAT_000288b4 + sVar7 * 4) != 0) {
      sVar8 = (short)*(char *)(*(int *)(&DAT_000288b4 + sVar7 * 4) + 4);
      local_46 = (short)*(char *)(*(int *)(&DAT_000288b4 + sVar7 * 4) + 7);
      uVar1 = *(ushort *)(*(int *)(&DAT_000288b4 + sVar7 * 4) + 0xc) & 0x1000;
      _DAT_000288f8 = _DAT_000288f8 + 1;
      iVar5 = (int)DAT_000288f7;
      if (local_46 < iVar5) {
        _DAT_000288f6 = local_46;
      }
      if (((sVar8 == 0x1c) && (uVar1 == 0)) &&
         (sVar6 = func_0x00006e58(*(undefined4 *)(&DAT_000288b4 + sVar7 * 4)), sVar6 != 0)) {
        local_a = 1;
      }
      if ((*(char *)(_DAT_00028864 + sVar8 * 6) == '\0') || (uVar1 != 0)) {
        bVar4 = false;
      }
      if (uVar1 == 0) {
        if ((*(char *)(_DAT_00028864 + sVar8 * 6) == '\0') && ((sVar8 != 0x1c || (local_14 == 0))))
        {
          local_8 = 1;
        }
      }
      else {
        local_c = 1;
      }
      if ((sVar8 != 0x1c) && (*(char *)(_DAT_00028864 + sVar8 * 6) == '\0')) {
        local_6 = 0;
      }
      if (uVar1 != 0) {
        local_6 = 0;
      }
      if ((*(char *)(_DAT_00028864 + sVar8 * 6) != '\0') && (uVar1 == 0)) {
        bVar3 = true;
      }
      if (*(char *)(_DAT_00028864 + 3 + sVar8 * 6) != '\0') {
        local_e = 1;
      }
      if (*(char *)(_DAT_00028864 + 2 + sVar8 * 6) != '\0') {
        local_12 = 1;
      }
      if (*(char *)(_DAT_00028864 + 1 + sVar8 * 6) != '\0') {
        local_10 = 1;
      }
      if ((_DAT_000288b0 == 0) && (sVar8 == 0x1c)) {
        _DAT_000288b0 = *(int *)(&DAT_000288b4 + sVar7 * 4);
      }
    }
  }
  _DAT_000288f4 = (short)(1 < _DAT_000288f8);
  if (local_e == 0) {
    if (((local_a != 0) || (bVar4)) || ((local_6 != 0 && (bVar3)))) {
      _DAT_000288fa = 2;
    }
    else {
      _DAT_000288fa = 1;
    }
  }
  else {
    _DAT_000288fa = 0;
  }
  _DAT_000288fc = 0;
  if (local_c == 0) {
    if (_DAT_000288fa == 1) {
      if (local_8 != 0) {
        _DAT_000288fc = 0x20;
      }
      if (local_12 != 0) {
        _DAT_000288fc = _DAT_000288fc | 1;
      }
      if (local_10 != 0) {
        _DAT_000288fc = _DAT_000288fc | 2;
      }
    }
  }
  else {
    _DAT_000288fc = 8;
    if (local_8 != 0) {
      _DAT_000288fc = 0x28;
    }
  }
  if (_DAT_000288ac == 0) {
    _DAT_000288ac = _DAT_000288b4;
  }
  sVar7 = 8;
  while (sVar8 = sVar7 + -1, sVar7 != 0) {
    sVar7 = sVar8;
    if ((_DAT_000288ac != 0) && (*(int *)(&DAT_000288b4 + sVar8 * 4) != 0)) {
      *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 0x12) = param_1._0_2_;
      *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar8 * 4) + 0x14) = param_1._2_2_;
    }
  }
  if (((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
      (-1 < *(short *)(_DAT_000288ac + 0x12))) && (-1 < *(short *)(_DAT_000288ac + 0x14))) {
    func_0x00002c08(auStack_24,auStack_110);
    func_0x00002c00(auStack_24);
    _DAT_000276d6 = func_0x00002c10(auStack_24);
    func_0x00002bf8(*(undefined2 *)(_DAT_000288ac + 2),auStack_110);
  }
  else {
    _DAT_000276d6 = 0;
    _DAT_000276d2 = 0;
    _DAT_000276d4 = 0;
  }
  return;
}



// Function: FUN_00001580 at 00001580
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00001580(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 local_6;
  
  local_6 = 0;
  bVar2 = true;
  bVar3 = true;
  bVar5 = false;
  bVar4 = false;
  for (sVar7 = 0; sVar7 < param_3._0_2_; sVar7 = sVar7 + 1) {
    if ((*(int *)(param_1 + sVar7 * 4) != 0) && (*(short *)(param_2 + sVar7 * 2) != 0)) {
      sVar8 = (short)*(char *)(*(int *)(param_1 + sVar7 * 4) + 4);
      uVar1 = *(ushort *)(*(int *)(param_1 + sVar7 * 4) + 0xc) & 0x1000;
      if ((sVar8 == 0x1c) &&
         ((uVar1 == 0 && (sVar6 = func_0x00006e58(*(undefined4 *)(param_1 + sVar7 * 4)), sVar6 != 0)
          ))) {
        bVar4 = true;
      }
      if ((*(char *)(_DAT_00028864 + sVar8 * 6) == '\0') || (uVar1 != 0)) {
        bVar2 = false;
      }
      if ((sVar8 != 0x1c) && (*(char *)(_DAT_00028864 + sVar8 * 6) == '\0')) {
        bVar3 = false;
      }
      if (uVar1 != 0) {
        bVar3 = false;
      }
      if ((*(char *)(_DAT_00028864 + sVar8 * 6) != '\0') && (uVar1 == 0)) {
        bVar5 = true;
      }
    }
  }
  if (((bVar4) || (bVar2)) || ((bVar3 && (bVar5)))) {
    local_6 = 1;
  }
  return local_6;
}



// Function: FUN_00001670 at 00001670
// Size: 648 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001670(undefined4 param_1)

{
  byte *pbVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  byte bVar8;
  short sVar9;
  undefined4 extraout_A0;
  int extraout_A0_00;
  int iVar10;
  
  uVar5 = FUN_00000272();
  if (_DAT_00027f78 == 0) {
    uVar5 = func_0x00002e30();
  }
  if ((param_1._2_2_ != 0) || (param_1._0_2_ != _DAT_00027fb0)) {
    _DAT_00027fb0 = param_1._0_2_;
    _DAT_00027f7a = (ushort)(param_1._0_2_ == 0xe);
    func_0x00002d52(_DAT_00027f5c);
    _DAT_00027f6c = &DAT_00027f68;
    _DAT_00027f68 = extraout_A0;
    func_0x00002d52(_DAT_00027f60);
    sVar9 = 0x70;
    _DAT_00027f70 = extraout_A0_00;
    while (sVar6 = sVar9 + -1, sVar9 != 0) {
      iVar10 = sVar6 * 0x9c + _DAT_00027f70;
      sVar7 = 0x9c;
      while (sVar3 = sVar7 + -1, sVar9 = sVar6, sVar7 != 0) {
        uVar4 = *(ushort *)(sVar3 * 0xe0 + _DAT_00028850 + sVar6 * 2);
        sVar9 = (short)*(char *)((uint)(uVar4 >> 8) + _DAT_0002884c + 0x711);
        if (param_1._0_2_ == 0xe) {
          if ((byte)((uint)(*(int *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar6) << 3) >> 0x1b) == 0)
          {
            bVar8 = (byte)*(undefined2 *)(sVar9 * 2 + 0x158e4);
          }
          else {
            bVar8 = 1;
          }
        }
        else if ((byte)((uint)(*(int *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar6) << 3) >> 0x1b) ==
                 0) {
          bVar8 = (byte)*(undefined2 *)(&DAT_00015cbe + sVar9 * 2);
        }
        else {
          bVar8 = 1;
        }
        switch(sVar9) {
        default:
          bVar8 = bVar8 | 0x10;
          break;
        case 1:
          bVar8 = bVar8 | 0x18;
        case 2:
        case 3:
          bVar8 = bVar8 | 8;
          break;
        case 4:
          bVar8 = bVar8 | 0x50;
          break;
        case 5:
          bVar8 = bVar8 | 0x30;
          break;
        case 10:
          if ((uVar4 & 0xf) != param_1._0_2_) {
            bVar8 = 0;
          }
          sVar9 = FUN_00001912(CONCAT22(sVar6,sVar3));
          if (sVar9 != 0) {
            bVar8 = bVar8 | 8;
          }
          bVar8 = bVar8 | 0x90;
        }
        if ((uVar4 & 0x80) != 0) {
          bVar8 = bVar8 | 0x18;
        }
        *(byte *)(iVar10 + sVar3) = bVar8;
        sVar7 = sVar3;
      }
    }
    sVar9 = *(short *)(_DAT_0002884c + 0x15c2);
    while (sVar6 = sVar9 + -1, sVar9 != 0) {
      iVar10 = sVar6 * 0x42 + _DAT_0002884c;
      psVar2 = (short *)(iVar10 + 0x15c4);
      sVar7 = *psVar2;
      sVar3 = *(short *)(iVar10 + 0x15c6);
      sVar9 = sVar6;
      if (((*(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\0') == true) &&
         (sVar6 = FUN_00001912(*(undefined4 *)psVar2), sVar6 != 0)) {
        pbVar1 = (byte *)(sVar7 * 0x9c + _DAT_00027f70 + (int)sVar3);
        *pbVar1 = *pbVar1 | 0x18;
        iVar10 = (sVar7 + 1) * 0x9c;
        pbVar1 = (byte *)(iVar10 + _DAT_00027f70 + (int)sVar3);
        *pbVar1 = *pbVar1 | 0x18;
        pbVar1 = (byte *)(sVar7 * 0x9c + _DAT_00027f70 + sVar3 + 1);
        *pbVar1 = *pbVar1 | 0x18;
        pbVar1 = (byte *)(iVar10 + _DAT_00027f70 + sVar3 + 1);
        *pbVar1 = *pbVar1 | 0x18;
      }
    }
    if (_DAT_00027f5c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = 0;
    if (_DAT_00027f60 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar5;
}



// Function: FUN_00001912 at 00001912
// Size: 234 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001912(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar4 = 0;
  sVar5 = 0;
  if (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + (param_1._0_2_ + -1) * 2) >> 0x18)
                + _DAT_0002884c + 0x711) == '\n') {
    param_1._0_2_ = param_1._0_2_ + -1;
  }
  iVar1 = (param_1._2_2_ + -1) * 0xe0;
  iVar2 = CONCAT22((short)((uint)iVar1 >> 0x10),param_1._0_2_);
  if (*(char *)((*(uint *)(iVar1 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) + _DAT_0002884c +
               0x711) == '\n') {
    param_1._2_2_ = param_1._2_2_ + -1;
  }
  while ((*(short *)(&DAT_000157ce + sVar5 * 2) != -1 && (sVar4 == 0))) {
    sVar3 = func_0x00006e40(&param_1,(int)&param_1 + 2);
    if (sVar3 == 0) {
      return 0;
    }
    iVar1 = (int)*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >>
                           0x18) + _DAT_0002884c + 0x711);
    iVar2 = 0;
    if (((iVar1 == 1) || (iVar2 = 0, iVar1 == 2)) || (iVar2 = iVar1 + -3, iVar2 == 0)) {
      sVar4 = 1;
    }
    sVar5 = sVar5 + 1;
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),sVar4);
}



// Function: FUN_000019fc at 000019fc
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000019fc(void)

{
  if (_DAT_00027ee8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00001a62 at 00001a62
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a62(void)

{
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  
  if (_DAT_00027ed6 == 0) {
    FUN_00001e98(0x322);
    _DAT_00027ed6 = extraout_A0;
    func_0x00002d52(extraout_A0);
    _DAT_00027ed2 = extraout_A0_00;
    *(undefined1 *)(extraout_A0_00 + 800) = 0;
    if (_DAT_00027ed6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00002d52(_DAT_00027ed6);
  _DAT_00027ed2 = extraout_A0_01;
  return;
}



// Function: FUN_00001ac2 at 00001ac2
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001ac2(void)

{
  if (_DAT_00027ed6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00001adc at 00001adc
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001adc(undefined4 param_1,short *param_2,short *param_3)

{
  undefined2 uVar1;
  undefined4 in_D0;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  short local_c [4];
  
  sVar2 = 0;
  sVar3 = 0;
  while( true ) {
    uVar1 = (undefined2)((uint)in_D0 >> 0x10);
    if (3 < sVar3) {
      if (param_1._2_2_ != 0) {
        for (sVar3 = 0; (uVar1 = (undefined2)((uint)in_D0 >> 0x10), sVar2 == 0 && (sVar3 < 0x14));
            sVar3 = sVar3 + 1) {
          uVar4 = 0xfffe;
          uVar1 = 1;
          sVar2 = func_0x00002ad0(3);
          *param_2 = sVar2 + *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4);
          sVar2 = func_0x00002ad0(3,uVar1,uVar4);
          *param_3 = sVar2 + *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6);
          in_D0 = CONCAT22((short)((uint)(*param_3 * 0xe0) >> 0x10),*param_2);
          sVar2 = (short)(-1 < *(int *)(*param_3 * 0xe0 + _DAT_00028850 + 1 + *param_2 * 2) << 3);
        }
      }
      return CONCAT22(uVar1,sVar2);
    }
    in_D0 = func_0x00002b28(*(short *)(&DAT_000156b6 + sVar3 * 2) +
                            *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6),
                            (short)local_c + sVar3 * 2);
    if (local_c[sVar3] < 8) break;
    sVar3 = sVar3 + 1;
  }
  *param_2 = *(short *)(&DAT_000156be + sVar3 * 2) +
             *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4);
  *param_3 = *(short *)(&DAT_000156b6 + sVar3 * 2) +
             *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6);
  return 1;
}



// Function: FUN_00001c34 at 00001c34
// Size: 384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c34(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  short *extraout_A0;
  undefined2 uVar6;
  short local_46;
  short local_44;
  undefined1 auStack_42 [23];
  undefined1 local_2b;
  undefined1 local_25;
  
  local_46 = 10;
  FUN_00001a16((short)((uint)auStack_42 >> 0x10));
  bVar1 = false;
  sVar5 = param_1._2_2_;
  sVar4 = param_2._0_2_;
  do {
    while( true ) {
      if (bVar1) {
        func_0x00002b30();
        if (extraout_A0 == (short *)0x0) {
          return;
        }
        *extraout_A0 = sVar5;
        extraout_A0[1] = sVar4;
        *(undefined1 *)(extraout_A0 + 2) = param_1._1_1_;
        *(undefined1 *)((int)extraout_A0 + 5) = *(undefined1 *)(_DAT_0002884c + 0x111);
        *(undefined1 *)(extraout_A0 + 3) = local_25;
        *(undefined1 *)((int)extraout_A0 + 7) = local_25;
        *(undefined1 *)(extraout_A0 + 4) = local_2b;
        *(undefined1 *)((int)extraout_A0 + 9) = 0;
        *(undefined1 *)(extraout_A0 + 5) = 0;
        *(undefined1 *)((int)extraout_A0 + 0xb) = 0;
        uVar3 = (undefined2)(((int)extraout_A0 - _DAT_00028854) / 0x16);
        uVar6 = (undefined2)((uint)extraout_A0 >> 0x10);
        func_0x00007438((short)extraout_A0);
        func_0x000074c8(sVar4,uVar6,uVar3);
        return;
      }
      func_0x00002b28(param_2._0_2_,(short)&local_44);
      if ((7 < local_44) ||
         ((((int)*(short *)(_DAT_0002884c + 0x110) !=
            (uint)(*(int *)(param_2._0_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._2_2_ * 2) << 4) >>
            0x1c && (local_44 != 0)) ||
          (*(short *)(&DAT_00015cbe +
                     (short)*(char *)((*(uint *)(param_2._0_2_ * 0xe0 + _DAT_00028850 +
                                                param_1._2_2_ * 2) >> 0x18) + _DAT_0002884c + 0x711)
                     * 2) == 7)))) break;
      bVar1 = true;
      sVar5 = param_1._2_2_;
      sVar4 = param_2._0_2_;
    }
    uVar6 = 0xfffe;
    uVar3 = 1;
    sVar2 = func_0x00002ad0(3);
    param_1._2_2_ = sVar2 + param_1._2_2_;
    sVar2 = func_0x00002ad0(3,uVar3,uVar6);
    param_2._0_2_ = sVar2 + param_2._0_2_;
    local_46 = local_46 + -1;
  } while (local_46 != 0);
  return;
}



// Function: FUN_00001db4 at 00001db4
// Size: 264 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001db4(undefined4 param_1)

{
  bool bVar1;
  short asStack_c [4];
  
  if ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
     ((*(short *)(_DAT_00028846 * 2 + _DAT_0002884c + 0xd0) == 0 ||
      (*(short *)(_DAT_0002884c + 0x15a) != 0)))) {
    FUN_000000f8(*(undefined4 *)(_DAT_000297f4 + 0x80));
    if ((_DAT_000276e4 == 0) && (_DAT_0002884a == 0)) {
      if ((*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                     _DAT_0002884c + 0x711) == '\n') ||
         (((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x20) != 0 ||
          (_DAT_000288fa == 2)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        func_0x00002a48(asStack_c,CONCAT22(param_1._0_2_ + -2,param_1._2_2_ + -2),0x50005);
      }
      else {
        func_0x00002a48(asStack_c,CONCAT22(param_1._0_2_ + -1,param_1._2_2_ + -1),0x30003);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_0000200a();
    return;
  }
  return;
}



// Function: FUN_00001e98 at 00001e98
// Size: 166 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e98(void)

{
  int iVar1;
  int unaff_A6;
  
  if (*(short *)(unaff_A6 + -8) < 0) {
    *(short *)(unaff_A6 + -4) = *(short *)(unaff_A6 + -8) + *(short *)(unaff_A6 + -4);
    *(undefined2 *)(unaff_A6 + -8) = 0;
  }
  if (*(short *)(unaff_A6 + -6) < 0) {
    *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -6) + *(short *)(unaff_A6 + -2);
    *(undefined2 *)(unaff_A6 + -6) = 0;
  }
  iVar1 = (int)*(short *)(unaff_A6 + -4) + (int)*(short *)(unaff_A6 + -8);
  if (0x6f < iVar1) {
    *(short *)(unaff_A6 + -4) = *(short *)(unaff_A6 + -4) - ((short)iVar1 + -0x6f);
  }
  iVar1 = (int)*(short *)(unaff_A6 + -2) + (int)*(short *)(unaff_A6 + -6);
  if (0x9b < iVar1) {
    *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) - ((short)iVar1 + -0x9b);
  }
  *(short *)(unaff_A6 + -0x10) = *(short *)(unaff_A6 + -8) * 2;
  *(short *)(unaff_A6 + -0xe) = *(short *)(unaff_A6 + -6) * 2;
  *(short *)(unaff_A6 + -0xc) = *(short *)(unaff_A6 + -4) * 2;
  *(short *)(unaff_A6 + -10) = *(short *)(unaff_A6 + -2) * 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000200a at 0000200a
// Size: 8 bytes

void FUN_0000200a(void)

{
  return;
}



// Function: FUN_00002012 at 00002012
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002012(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    if ((_DAT_000288fa == 2) ||
       (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\n')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      sVar4 = -2;
    }
    else {
      sVar4 = -1;
    }
    sVar4 = param_1._0_2_ + sVar4;
    if (bVar1) {
      param_1._0_2_ = param_1._0_2_ + 2;
      sVar3 = -2;
    }
    else {
      param_1._0_2_ = param_1._0_2_ + 1;
      sVar3 = -1;
    }
    if (bVar1) {
      sVar5 = param_1._2_2_ + 2;
    }
    else {
      sVar5 = param_1._2_2_ + 1;
    }
    for (; sVar2 = param_1._2_2_ + sVar3, sVar4 <= param_1._0_2_; sVar4 = sVar4 + 1) {
      for (; sVar2 <= sVar5; sVar2 = sVar2 + 1) {
        if ((((-1 < sVar4) && (sVar4 < 0x70)) && (-1 < sVar2)) &&
           ((sVar2 < 0x9c && ((*(byte *)(sVar2 * 0x70 + _DAT_00028858 + (int)sVar4) & 0x20) == 0))))
        {
          func_0x00007478(param_1._2_2_ + sVar3,sVar5);
          return 1;
        }
      }
    }
  }
  return 0;
}



// Function: FUN_00002132 at 00002132
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00002132(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(short *)(_DAT_0002884c + 0x124) == 0) {
    uVar1 = 1;
  }
  else if (param_1._0_2_ == 1) {
    if ((((param_1._2_2_ < *(short *)(_DAT_0002884c + 0x178)) ||
         (*(short *)(_DAT_0002884c + 0x17c) < param_1._2_2_)) ||
        (param_2._0_2_ < *(short *)(_DAT_0002884c + 0x176))) ||
       (*(short *)(_DAT_0002884c + 0x17a) < param_2._0_2_)) {
      uVar1 = (uint)(*(int *)(param_2._0_2_ * 0x70 + _DAT_00028858 + (int)param_1._2_2_) << 2) >>
              0x1f;
    }
    else {
      uVar1 = (uint)(*(char *)(((int)param_1._2_2_ - (int)*(short *)(_DAT_0002884c + 0x178)) * 0x9c
                               + _DAT_000273a8 +
                              (int)(short)(param_2._0_2_ - *(short *)(_DAT_0002884c + 0x176))) !=
                    '\x0e');
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_000021d6 at 000021d6
// Size: 112 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000021d6(undefined4 param_1,undefined4 param_2)

{
  int extraout_A0;
  bool bVar1;
  
  if (*(short *)(_DAT_0002884c + 0x124) == 0) {
    bVar1 = true;
  }
  else {
    func_0x00002d52(_DAT_00028860);
    _DAT_0002885c = extraout_A0;
    bVar1 = ((uint)*(byte *)(param_2._0_2_ * 0x70 + extraout_A0 + (int)param_1._2_2_) &
            1 << ((int)param_1._0_2_ & 0x3fU) & 0xffU) != 0;
    if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return bVar1;
}



// Function: FUN_00002248 at 00002248
// Size: 16 bytes

void FUN_00002248(void)

{
  DAT_0002736c = DAT_0002736c & 0x7f;
  return;
}



// Function: FUN_00002258 at 00002258
// Size: 8 bytes

void FUN_00002258(void)

{
  return;
}



