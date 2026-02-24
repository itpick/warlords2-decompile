// Warlords II - Decompiled 68k Code
// Segment: CODE_117
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(void)

{
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000035c at 0000035c
// Size: 866 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000035c(void)

{
  uint *puVar1;
  undefined2 uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  short sVar9;
  
  sVar9 = 0;
  uVar2 = *(undefined2 *)(_DAT_0002884c + 0x110);
  sVar6 = 100;
  while (sVar5 = sVar6 + -1, sVar6 != 0) {
    sVar7 = 6;
    while (sVar4 = sVar7 + -1, sVar6 = sVar5, sVar7 != 0) {
      *(undefined1 *)(sVar5 * 6 + _DAT_0002897c + (int)sVar4) = 0xff;
      *(undefined1 *)((int)sVar4 + sVar5 * 6 + _DAT_0002897c + 600) = 0;
      sVar7 = sVar4;
    }
  }
  *(undefined2 *)(_DAT_0002884c + 0x110) = 0;
  func_0x00004990(1);
  for (sVar6 = 0; sVar6 < *(short *)(_DAT_0002884c + 0x15c2); sVar6 = sVar6 + 1) {
    cVar3 = *(char *)(sVar6 * 0x42 + _DAT_0002884c + 0x15d9);
    uVar8 = (ushort)cVar3;
    sVar5 = (short)((sVar6 * 0x14) / (int)*(short *)(_DAT_0002884c + 0x15c2));
    if (sVar9 != sVar5) {
      func_0x000029a0();
      sVar9 = sVar5;
    }
    *(undefined1 *)(sVar6 * 0x42 + _DAT_0002884c + 0x15d9) = *(undefined1 *)(_DAT_0002884c + 0x111);
    puVar1 = (uint *)(*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 + 1 +
                     *(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (*(byte *)(_DAT_0002884c + 0x111) & 0xf) << 0x18;
    puVar1 = (uint *)((*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0xe0 + _DAT_00028850
                      + 1 + (*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) + 1) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (*(byte *)(_DAT_0002884c + 0x111) & 0xf) << 0x18;
    puVar1 = (uint *)((*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0xe0 + _DAT_00028850
                      + 1 + *(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (*(byte *)(_DAT_0002884c + 0x111) & 0xf) << 0x18;
    puVar1 = (uint *)(*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 + 1 +
                     (*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) + 1) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (*(byte *)(_DAT_0002884c + 0x111) & 0xf) << 0x18;
    func_0x00002e10(*(undefined2 *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4),1);
    sVar5 = FUN_000006be();
    if (sVar5 == 0) {
      func_0x00002e10(*(undefined2 *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4),1);
      FUN_000006be();
    }
    *(char *)(sVar6 * 0x42 + _DAT_0002884c + 0x15d9) = cVar3;
    puVar1 = (uint *)(*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 + 1 +
                     *(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (uVar8 & 0xf) << 0x18;
    puVar1 = (uint *)((*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0xe0 + _DAT_00028850
                      + 1 + (*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) + 1) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (uVar8 & 0xf) << 0x18;
    puVar1 = (uint *)((*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0xe0 + _DAT_00028850
                      + 1 + *(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (uVar8 & 0xf) << 0x18;
    puVar1 = (uint *)(*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 + 1 +
                     (*(short *)(sVar6 * 0x42 + _DAT_0002884c + 0x15c4) + 1) * 2);
    *puVar1 = *puVar1 & 0xf0ffffff | (uVar8 & 0xf) << 0x18;
  }
  func_0x000029a0();
  *(undefined2 *)(_DAT_0002884c + 0x110) = uVar2;
  return;
}



// Function: FUN_000009ce at 000009ce
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000009ce(undefined2 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar5 = 1000;
  sVar4 = -1;
  while( true ) {
    sVar1 = sVar3 + -1;
    if (sVar3 == 0) break;
    sVar3 = sVar1;
    if (*(char *)((*(uint *)(*(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 + *(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4) * 2)
                  >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      iVar6 = sVar1 * 0x42 + _DAT_0002884c;
      if (*(byte *)(iVar6 + 0x15f3) == param_2._0_2_) {
        sVar2 = func_0x00006e48(param_1,*(undefined2 *)(iVar6 + 0x15c6));
        if (sVar2 < sVar5) {
          sVar5 = sVar2;
          sVar4 = sVar1;
        }
      }
    }
  }
  return sVar4;
}



// Function: FUN_00000a8e at 00000a8e
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a8e(void)

{
  short sVar1;
  
  FUN_0000000c();
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    *(undefined2 *)(sVar1 * 2 + _DAT_0002884c + 0x1122) = 0;
    *(undefined2 *)(sVar1 * 2 + _DAT_0002884c + 0x1132) = 0xffff;
  }
  return;
}



// Function: FUN_00000ad2 at 00000ad2
// Size: 270 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ad2(void)

{
  byte *pbVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      if (*(short *)(_DAT_0002884c + 0x11c) == 0) {
        iVar5 = sVar3 * 8 + _DAT_0002884c + 0x1582;
        *(byte *)(iVar5 + sVar4) = *(byte *)(iVar5 + sVar4) & 0xf3;
        *(byte *)(iVar5 + sVar4) = *(byte *)(iVar5 + sVar4) | 8;
        puVar2 = (uint *)(sVar3 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
        *puVar2 = *puVar2 & 0xfcffffff | ((uint)(*(int *)(iVar5 + sVar4) << 4) >> 0x1e) << 0x18;
      }
      else {
        iVar5 = sVar3 * 8 + _DAT_0002884c + 0x1582;
        pbVar1 = (byte *)(iVar5 + sVar4);
        *pbVar1 = *pbVar1 & 0xf3;
        puVar2 = (uint *)(sVar3 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
        *puVar2 = *puVar2 & 0xfcffffff | ((uint)(*(int *)(iVar5 + sVar4) << 4) >> 0x1e) << 0x18;
      }
      pbVar1 = (byte *)(sVar3 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
      *pbVar1 = *pbVar1 & 0xef;
      pbVar1 = (byte *)(sVar3 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
      *pbVar1 = *pbVar1 & 0xdf;
    }
  }
  return;
}



// Function: FUN_00000be0 at 00000be0
// Size: 468 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000be0(void)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short unaff_D4w;
  short *psVar7;
  undefined2 *extraout_A0;
  int iVar8;
  undefined1 auStack_22 [22];
  short local_c;
  undefined1 local_a [2];
  short local_8 [2];
  
  sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
  do {
    do {
      sVar1 = sVar6 + -1;
      if (sVar6 == 0) {
        return;
      }
      sVar6 = sVar1;
    } while (*(char *)((*(uint *)(*(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                  _DAT_00028850 +
                                 *(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                       _DAT_0002884c + 0x711) != '\n');
    bVar2 = false;
    if (*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
      if (*(short *)(_DAT_0002884c + 0x11a) == 0) {
        bVar2 = true;
      }
      else if (0 < *(short *)(_DAT_0002884c + 0x11a)) {
        local_c = *(short *)(_DAT_0002884c + 0x11a) + -2;
        local_8[0] = func_0x00002ad0(4);
        local_8[1] = 3;
        if (local_8[0] < 4) {
          psVar7 = local_8;
        }
        else {
          psVar7 = local_8 + 1;
        }
        unaff_D4w = *psVar7;
      }
    }
    else {
      unaff_D4w = 3;
    }
    if (!bVar2) {
      if (*(short *)(_DAT_0002884c + 0x128) == 0) {
        sVar3 = 1;
      }
      else {
        sVar3 = func_0x00002ad0(4);
      }
      while (sVar3 != 0) {
        sVar4 = FUN_00000db4(*(undefined2 *)(unaff_D4w * 2 + 0x15ba2));
        if (sVar4 == 0) {
          bVar2 = true;
          break;
        }
        sVar4 = sVar1;
        sVar5 = func_0x000032b0((short)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15f0));
        iVar8 = sVar1 * 0x42 + _DAT_0002884c;
        *(undefined1 *)(iVar8 + 0x15f0) = *(undefined1 *)(sVar5 + iVar8 + 0x15da);
        func_0x00004948(sVar4);
        sVar3 = sVar3 + -1;
      }
    }
    if ((bVar2) &&
       (func_0x00004908((short)auStack_22,(short)local_a), extraout_A0 != (undefined2 *)0x0)) {
      *(undefined1 *)((int)extraout_A0 + 5) = 0xf;
      *(undefined1 *)(extraout_A0 + 2) = 0xb;
      *extraout_A0 = *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4);
      extraout_A0[1] = *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6);
      *(undefined1 *)(extraout_A0 + 4) = 1;
      func_0x000061d8((short)((uint)extraout_A0 >> 0x10));
    }
  } while( true );
}



// Function: FUN_00000db4 at 00000db4
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00000db4(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  short local_14 [3];
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_c = 0;
  sVar3 = -1;
  sVar2 = 4;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    iVar5 = (int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c;
    local_6 = (short)*(char *)(iVar5 + 0x15da);
    sVar2 = sVar1;
    if (-1 < local_6) {
      local_14[0] = (short)*(char *)(iVar5 + 0x15de);
      if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xf0) == 0) {
        local_14[2] = 0;
      }
      else {
        local_14[2] = 2;
      }
      local_14[2] = local_14[2] + *(char *)(iVar5 + 0x15e2);
      local_e = 9;
      if (local_14[2] < 10) {
        psVar4 = local_14 + 2;
      }
      else {
        psVar4 = &local_e;
      }
      local_8 = *psVar4;
      if (*(char *)(_DAT_00028864 + 5 + local_6 * 6) == '\x01') {
        local_8 = local_8 + 2;
      }
      if ((param_1._2_2_ != 6) && (local_8 < 3)) {
        local_14[0] = local_14[0] + 1;
      }
      local_14[1] = 10;
      if (local_14[0] < 0xb) {
        psVar4 = local_14;
      }
      else {
        psVar4 = local_14 + 1;
      }
      if (((*(char *)(_DAT_00028864 + local_6 * 6) != '\0') || (param_1._2_2_ != 4)) &&
         (local_a = local_8 * *(short *)(param_1._2_2_ * 2 + 0x15b86) +
                    *(short *)(param_1._2_2_ * 2 + 0x15b94) * (10 - *psVar4) +
                    (short)(((int)(short)*(char *)((int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c
                                                  + 0x15e6) *
                            (int)*(short *)(param_1._2_2_ * 2 + 0x15b78)) / 2), local_c < local_a))
      {
        sVar3 = local_6;
        local_c = local_a;
      }
    }
  }
  if (sVar3 != -1) {
    sVar2 = func_0x000032b0(sVar3);
    *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f0) = (char)sVar3;
    iVar5 = param_1._0_2_ * 0x42 + _DAT_0002884c;
    *(undefined1 *)(iVar5 + 0x15f1) = *(undefined1 *)(sVar2 + iVar5 + 0x15de);
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f6) = 0;
  }
  return sVar3 != -1;
}



// Function: FUN_00000f68 at 00000f68
// Size: 1536 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f68(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 uVar9;
  short sVar10;
  short sVar11;
  short unaff_D4w;
  short sVar12;
  short *psVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  short asStackY_10054 [32719];
  short local_60;
  short local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  short local_56;
  short local_54 [40];
  
  sVar11 = *(short *)(_DAT_0002884c + 0x810);
  local_58 = 4;
  local_5a = 3;
  local_5c = 2;
  FUN_0000193a(0x15a4a,0x15a46,0x15a44,0x40003);
  FUN_0000185e();
  sVar8 = (short)((sVar11 * 2) / 10);
  sVar11 = sVar8;
  FUN_00001568();
  local_5e = func_0x00002ad0(3,sVar11);
  local_60 = sVar8;
  if (local_5e < sVar8) {
    psVar13 = &local_5e;
  }
  else {
    psVar13 = &local_60;
  }
  sVar11 = *psVar13;
  for (sVar6 = 0; sVar6 < *(short *)(_DAT_0002884c + 0x810); sVar6 = sVar6 + 1) {
    pbVar1 = (byte *)(*(short *)(sVar6 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 + _DAT_00028850 + 1 +
                     *(short *)(sVar6 * 0x20 + _DAT_0002884c + 0x812) * 2);
    *pbVar1 = *pbVar1 & 0xbf;
    local_54[sVar6] = 0;
    if (*(char *)(sVar6 * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      local_54[sVar6] = 1;
    }
  }
  for (sVar6 = *(short *)(_DAT_0002884c + 0x810); sVar6 < 0x28; sVar6 = sVar6 + 1) {
    local_54[sVar6] = 1;
  }
  sVar6 = func_0x00002ad0(0x10005);
  sVar6 = sVar6 + *(short *)(_DAT_0002884c + 0x810) / 3 + 8;
  puVar19 = &stack0xffffff62;
  if (0x16 < sVar6) {
    sVar6 = 0x16;
  }
  for (sVar10 = 8; sVar10 < sVar6; sVar10 = sVar10 + 1) {
    if (((int)sVar10 < sVar11 + 8) || (sVar8 + 8 <= (int)sVar10)) {
      sVar12 = 0;
      local_56 = 0;
      do {
        do {
          do {
            if (local_56 != 0) goto LAB_000011ec;
            sVar12 = sVar12 + 1;
            uVar2 = *(undefined2 *)(_DAT_0002884c + 0x810);
            *(undefined2 *)(puVar19 + -2) = 0xffff;
            *(undefined2 *)(puVar19 + -4) = uVar2;
            *(undefined2 *)(puVar19 + -6) = 1;
            *(undefined4 *)(puVar19 + -10) = 0x1130;
            unaff_D4w = func_0x00002ad0();
            puVar14 = (undefined2 *)(sVar10 * 0x1e + _DAT_0002884c + 0xd30);
            sVar7 = 0xe;
            puVar19 = puVar19 + -6;
            do {
              puVar17 = puVar19;
              puVar14 = puVar14 + -1;
              *(undefined2 *)(puVar17 + -2) = *puVar14;
              sVar7 = sVar7 + -1;
              puVar19 = puVar17 + -2;
            } while (sVar7 != -1);
            *(undefined4 *)(puVar17 + -6) = 0x1150;
            sVar7 = func_0x00004968();
            puVar19 = puVar17 + 0x22;
          } while ((sVar7 != 0) && (*(short *)(unaff_D4w * 0x20 + _DAT_0002884c + 0x82e) == 0));
          puVar14 = (undefined2 *)(sVar10 * 0x1e + _DAT_0002884c + 0xd30);
          sVar7 = 0xe;
          do {
            puVar18 = puVar19;
            puVar14 = puVar14 + -1;
            *(undefined2 *)(puVar18 + -2) = *puVar14;
            sVar7 = sVar7 + -1;
            puVar19 = puVar18 + -2;
          } while (sVar7 != -1);
          *(undefined4 *)(puVar18 + -6) = 0x118a;
          sVar7 = func_0x00004968();
          puVar19 = puVar18 + 0x1c;
        } while ((sVar7 == 0) && (*(short *)(unaff_D4w * 0x20 + _DAT_0002884c + 0x82e) != 0));
        if (local_54[unaff_D4w] == 0) {
          local_56 = 1;
          local_54[unaff_D4w] = 1;
        }
      } while (sVar12 < 0x65);
      *(undefined1 *)(sVar10 * 0x1e + _DAT_0002884c + 0xd28) = 0;
      *(short *)(sVar10 * 0x1e + _DAT_0002884c + 0xd2a) = unaff_D4w;
LAB_000011ec:
      if (sVar12 < 0x65) {
        *(undefined1 *)(sVar10 * 0x1e + _DAT_0002884c + 0xd28) = 2;
        *(short *)(sVar10 * 0x1e + _DAT_0002884c + 0xd2a) = unaff_D4w;
        *(undefined1 *)(unaff_D4w * 0x20 + _DAT_0002884c + 0x82a) = 2;
        *(char *)(unaff_D4w * 0x20 + _DAT_0002884c + 0x82b) = (char)sVar10;
      }
    }
    else {
      *(undefined1 *)(sVar10 * 0x1e + _DAT_0002884c + 0xd28) = 0;
    }
  }
  for (; sVar6 < 0x16; sVar6 = sVar6 + 1) {
    *(undefined1 *)(sVar6 * 0x1e + _DAT_0002884c + 0xd28) = 0;
  }
  for (sVar11 = 0; sVar11 < *(short *)(_DAT_0002884c + 0x810); sVar11 = sVar11 + 1) {
    if (local_54[sVar11] == 0) {
      if (*(short *)(sVar11 * 0x20 + _DAT_0002884c + 0x82e) == 0) {
        bVar5 = true;
        for (sVar8 = 0; sVar8 < 8; sVar8 = sVar8 + 1) {
          if (*(short *)(sVar8 * 2 + _DAT_0002884c + 0x138) != 0) {
            iVar15 = sVar11 * 0x20 + _DAT_0002884c;
            uVar2 = *(undefined2 *)(iVar15 + 0x812);
            iVar16 = sVar8 * 0x14 + _DAT_0002884c;
            uVar3 = *(undefined2 *)(iVar16 + 0x18c);
            uVar4 = *(undefined2 *)(iVar16 + 0x18a);
            *(undefined2 *)(puVar19 + -2) = *(undefined2 *)(iVar15 + 0x814);
            *(undefined2 *)(puVar19 + -4) = uVar2;
            *(undefined2 *)(puVar19 + -6) = uVar3;
            *(undefined2 *)(puVar19 + -8) = uVar4;
            *(undefined4 *)(puVar19 + -0xc) = 0x131c;
            sVar6 = func_0x00006e48();
            if (sVar6 < 0xf) {
              bVar5 = false;
              break;
            }
          }
        }
        if (bVar5) {
          *(undefined2 *)(puVar19 + -2) = 0xffff;
          *(undefined2 *)(puVar19 + -4) = 5;
          *(undefined2 *)(puVar19 + -6) = 1;
          *(undefined4 *)(puVar19 + -10) = 0x1346;
          sVar8 = func_0x00002ad0();
          *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82a) = *(undefined1 *)(sVar8 + 0x15a3a);
        }
        else {
          *(undefined2 *)(puVar19 + -2) = 0xffff;
          *(undefined2 *)(puVar19 + -4) = 3;
          *(undefined2 *)(puVar19 + -6) = 1;
          *(undefined4 *)(puVar19 + -10) = 0x1376;
          sVar8 = func_0x00002ad0();
          *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82a) = *(undefined1 *)(sVar8 + 0x15a36);
        }
      }
      else {
        *(undefined2 *)(puVar19 + -2) = 0xffff;
        *(undefined2 *)(puVar19 + -4) = 3;
        *(undefined2 *)(puVar19 + -6) = 1;
        *(undefined4 *)(puVar19 + -10) = 0x1296;
        sVar8 = func_0x00002ad0();
        *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82a) = *(undefined1 *)(sVar8 + 0x15a40);
      }
      *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82b) = 0;
      local_54[sVar11] = 1;
    }
  }
  sVar11 = 0;
  do {
    if (*(short *)(_DAT_0002884c + 0x810) <= sVar11) {
      return;
    }
    if (*(char *)(sVar11 * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82c) = 0;
    }
    else if (*(char *)(sVar11 * 0x20 + _DAT_0002884c + 0x82a) == '\x05') {
      if (*(short *)(sVar11 * 0x20 + _DAT_0002884c + 0x82e) == 0) {
        bVar5 = true;
        for (sVar8 = 0; sVar8 < 8; sVar8 = sVar8 + 1) {
          if (*(short *)(sVar8 * 2 + _DAT_0002884c + 0x138) != 0) {
            iVar15 = sVar11 * 0x20 + _DAT_0002884c;
            uVar2 = *(undefined2 *)(iVar15 + 0x812);
            iVar16 = sVar8 * 0x14 + _DAT_0002884c;
            uVar3 = *(undefined2 *)(iVar16 + 0x18c);
            uVar4 = *(undefined2 *)(iVar16 + 0x18a);
            *(undefined2 *)(puVar19 + -2) = *(undefined2 *)(iVar15 + 0x814);
            *(undefined2 *)(puVar19 + -4) = uVar2;
            *(undefined2 *)(puVar19 + -6) = uVar3;
            *(undefined2 *)(puVar19 + -8) = uVar4;
            *(undefined4 *)(puVar19 + -0xc) = 0x14b6;
            sVar6 = func_0x00006e48();
            if (sVar6 < 0xf) {
              bVar5 = false;
              break;
            }
          }
        }
        if (bVar5) {
          *(undefined2 *)(puVar19 + -2) = 0xffff;
          *(undefined2 *)(puVar19 + -4) = local_5a;
          *(undefined2 *)(puVar19 + -6) = 1;
          *(undefined4 *)(puVar19 + -10) = 0x14e0;
          sVar8 = func_0x00002ad0();
          *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82c) = *(undefined1 *)(sVar8 + 0x15a46);
        }
        else {
          *(undefined2 *)(puVar19 + -2) = 0xffff;
          *(undefined2 *)(puVar19 + -4) = local_5c;
          *(undefined2 *)(puVar19 + -6) = 1;
          *(undefined4 *)(puVar19 + -10) = 0x1510;
          sVar8 = func_0x00002ad0();
          *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82c) = *(undefined1 *)(sVar8 + 0x15a44);
        }
      }
      else {
        *(undefined2 *)(puVar19 + -2) = 0xffff;
        *(undefined2 *)(puVar19 + -4) = local_58;
        *(undefined2 *)(puVar19 + -6) = 1;
        *(undefined4 *)(puVar19 + -10) = 0x142e;
        sVar8 = func_0x00002ad0();
        *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82c) = *(undefined1 *)(sVar8 + 0x15a4a);
      }
    }
    else {
      *(undefined2 *)(puVar19 + -2) = 0;
      *(undefined4 *)(puVar19 + -6) = 0x10009;
      *(undefined4 *)(puVar19 + -10) = 0x153c;
      uVar9 = func_0x00002ad0();
      *(undefined1 *)(sVar11 * 0x20 + _DAT_0002884c + 0x82c) = uVar9;
    }
    sVar11 = sVar11 + 1;
  } while( true );
}



// Function: FUN_00001568 at 00001568
// Size: 742 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001568(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int unaff_D6;
  int extraout_A0;
  undefined2 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  short local_664 [8];
  short asStack_654 [14];
  undefined4 local_638;
  char local_633;
  undefined1 auStack_632 [2];
  undefined1 local_630;
  undefined2 local_5e2;
  char local_5e0 [19];
  char local_5cd [11];
  undefined2 auStack_5c2 [735];
  
  local_5e2 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  FUN_00002808(0x4d20,1);
  if (extraout_A0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar12 = (undefined2)extraout_A0;
  FUN_00002820(uVar12,(char)auStack_632,2);
  local_630 = 0;
  func_0x000076c0(auStack_632,0x5a32,(short)&local_638);
  FUN_00002820(extraout_A0,auStack_632,2);
  puVar11 = &stack0xfffff97c;
  for (iVar4 = 0; iVar4 < local_638; iVar4 = iVar4 + 1) {
    FUN_00002820(uVar12,(char)local_5e0 + (char)iVar4 * '\x1e',0x14);
    local_5cd[iVar4 * 0x1e] = '\0';
    FUN_00002820(extraout_A0,(short)auStack_632,1);
    FUN_00002820(extraout_A0,&local_633,1);
    local_5cd[iVar4 * 0x1e + 1] = local_633 + -0x30;
    FUN_00002820(extraout_A0,auStack_632,1);
    FUN_00002820(extraout_A0,&local_633,1);
    local_5cd[iVar4 * 0x1e + 2] = local_633 + -0x30;
    FUN_00002820(extraout_A0,auStack_632,2);
    iVar5 = 0;
    while( true ) {
      sVar3 = -1;
      pcVar7 = local_5e0 + iVar4 * 0x1e;
      do {
        sVar3 = sVar3 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (sVar3 <= iVar5) break;
      if (local_5e0[iVar5 + iVar4 * 0x1e] == ' ') {
        local_5e0[iVar5 + iVar4 * 0x1e] = '\0';
      }
      if (local_5e0[iVar5 + iVar4 * 0x1e] == '_') {
        local_5e0[iVar5 + iVar4 * 0x1e] = ' ';
      }
      iVar5 = iVar5 + 1;
    }
  }
  FUN_00002818(uVar12);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    local_664[iVar4] = -1;
  }
  iVar4 = 8;
LAB_00001848:
  if (0x15 < iVar4) {
    *(undefined2 *)(puVar11 + -2) = local_5e2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = false;
LAB_000017d8:
  do {
    if (bVar2) break;
    *(undefined2 *)(puVar11 + -2) = 0xffff;
    *(undefined2 *)(puVar11 + -4) = local_638._2_2_;
    *(undefined2 *)(puVar11 + -6) = 1;
    *(undefined4 *)(puVar11 + -10) = 0x1744;
    sVar3 = func_0x00002ad0();
    unaff_D6 = (int)sVar3;
    bVar2 = true;
    for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
      if (unaff_D6 == local_664[iVar5]) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
LAB_0000179e:
      if (bVar2) {
        puVar6 = auStack_5c2 + unaff_D6 * 0xf;
        sVar3 = 0xe;
        do {
          puVar10 = puVar11;
          puVar6 = puVar6 + -1;
          *(undefined2 *)(puVar10 + -2) = *puVar6;
          sVar3 = sVar3 + -1;
          puVar11 = puVar10 + -2;
        } while (sVar3 != -1);
        *(undefined4 *)(puVar10 + -6) = 0x17c0;
        sVar3 = func_0x00004968();
        puVar11 = puVar10 + 0x1c;
        if ((sVar3 == 0) && (param_1._0_2_ + 8 <= iVar4)) {
          bVar2 = true;
          goto LAB_000017d8;
        }
      }
      bVar2 = false;
      goto LAB_000017d8;
    }
    puVar6 = auStack_5c2 + unaff_D6 * 0xf;
    sVar3 = 0xe;
    do {
      puVar9 = puVar11;
      puVar6 = puVar6 + -1;
      *(undefined2 *)(puVar9 + -2) = *puVar6;
      sVar3 = sVar3 + -1;
      puVar11 = puVar9 + -2;
    } while (sVar3 != -1);
    *(undefined4 *)(puVar9 + -6) = 0x1788;
    sVar3 = func_0x00004968();
    puVar11 = puVar9 + 0x1c;
    if ((sVar3 == 0) || (param_1._0_2_ + 8 <= iVar4)) goto LAB_0000179e;
    bVar2 = true;
  } while( true );
  local_664[iVar4] = (short)unaff_D6;
  pcVar7 = (char *)(iVar4 * 0x1e + _DAT_0002884c + 0xd12);
  pcVar8 = local_5e0 + unaff_D6 * 0x1e;
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  *(char *)(iVar4 * 0x1e + _DAT_0002884c + 0xd26) = local_5cd[unaff_D6 * 0x1e + 1];
  *(char *)(iVar4 * 0x1e + _DAT_0002884c + 0xd27) = local_5cd[unaff_D6 * 0x1e + 2];
  iVar4 = iVar4 + 1;
  goto LAB_00001848;
}



// Function: FUN_0000185e at 0000185e
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000185e(void)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short unaff_D4w;
  int iVar4;
  
  sVar1 = *(short *)(_DAT_0002884c + 0x810);
  for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x810); sVar3 = sVar3 + 1) {
    *(undefined2 *)(sVar3 * 0x20 + _DAT_0002884c + 0x82e) = 0;
    *(undefined2 *)(sVar3 * 0x20 + _DAT_0002884c + 0x830) = 0xff;
  }
  for (sVar3 = 0; sVar3 < (short)((sVar1 * 3) / 10); sVar3 = sVar3 + 1) {
    bVar2 = false;
    while (!bVar2) {
      unaff_D4w = func_0x00002ad0(*(undefined2 *)(_DAT_0002884c + 0x810));
      iVar4 = unaff_D4w * 0x20 + _DAT_0002884c;
      if ((*(char *)(iVar4 + 0x82a) != '\x01') && (*(short *)(iVar4 + 0x82e) == 0)) {
        bVar2 = true;
      }
    }
    *(undefined2 *)(unaff_D4w * 0x20 + _DAT_0002884c + 0x82e) = 1;
    if (*(short *)(_DAT_0002884c + 0x11e) != 0) {
      *(undefined2 *)(unaff_D4w * 0x20 + _DAT_0002884c + 0x830) = 0;
    }
  }
  return;
}



// Function: FUN_0000193a at 0000193a
// Size: 380 bytes

void FUN_0000193a(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short asStack_100b6 [28];
  short asStack_1007e [32730];
  short local_b6 [29];
  short local_7c [40];
  short local_2c;
  short local_26;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_e;
  short local_c;
  
  sVar5 = 0;
  for (sVar4 = 0; sVar4 < 0x1d; sVar4 = sVar4 + 1) {
    if (((sVar4 != 0x1c) && (sVar4 != 5)) && (func_0x000049a8(), local_12 != 0)) {
      local_b6[sVar5] = sVar4;
      local_7c[sVar5] =
           (local_18 + local_1a + local_16 + local_14) * 3 + local_2c + local_c * 2 + local_e * 2 +
           local_26 / 5;
      sVar5 = sVar5 + 1;
    }
  }
  for (sVar4 = 1; sVar4 < sVar5; sVar4 = sVar4 + 1) {
    sVar3 = sVar4;
    if (local_7c[sVar4] < local_7c[sVar4 + -1]) {
      for (; 0 < sVar3; sVar3 = sVar3 + -1) {
        iVar2 = sVar3 + -1;
        if (local_7c[sVar3] < local_7c[iVar2]) {
          sVar1 = local_7c[sVar3];
          local_7c[sVar3] = local_7c[iVar2];
          local_7c[iVar2] = sVar1;
          sVar1 = local_b6[sVar3];
          local_b6[sVar3] = local_b6[iVar2];
          local_b6[iVar2] = sVar1;
        }
      }
    }
  }
  sVar5 = sVar5 + -1;
  for (sVar4 = 0; sVar4 < param_4._0_2_; sVar4 = sVar4 + 1) {
    *(char *)(param_1 + sVar4) = (char)local_b6[sVar5];
    if (0 < sVar5) {
      sVar5 = sVar5 + -1;
    }
  }
  for (sVar4 = 0; sVar4 < param_4._2_2_; sVar4 = sVar4 + 1) {
    *(char *)(param_2 + sVar4) = (char)local_b6[sVar5];
    if (0 < sVar5) {
      sVar5 = sVar5 + -1;
    }
  }
  sVar5 = 0;
  for (sVar4 = 0; sVar4 < param_5._0_2_; sVar4 = sVar4 + 1) {
    *(char *)(param_3 + sVar4) = (char)local_b6[sVar5];
    if (0 < sVar5) {
      sVar5 = sVar5 + 1;
    }
  }
  return;
}



// Function: FUN_00001ab6 at 00001ab6
// Size: 1046 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ab6(void)

{
  byte *pbVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int extraout_A0;
  short *psVar6;
  short local_14 [3];
  short local_e;
  short local_c [3];
  short local_6;
  
  sVar5 = 0;
  uVar3 = 1;
  func_0x00003ea0();
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    sVar2 = func_0x00004938(*(undefined2 *)(sVar4 * 0x14 + _DAT_0002884c + 0x18c));
    if (sVar2 < 0) {
      *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0xd0) = 1;
      *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0x138) = 0;
    }
  }
  _DAT_00028848 = 0;
  *(undefined2 *)(_DAT_0002884c + 0x118) = 0;
  *(undefined2 *)(_DAT_0002884c + 0x15e) = 0;
  *(undefined2 *)(_DAT_0002884c + 0x136) = 1;
  *(undefined2 *)(_DAT_0002884c + 0x182) = 10;
  *(undefined2 *)(_DAT_0002884c + 0x158) = 0;
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0xd0) == 0) {
      sVar5 = sVar5 + 1;
    }
  }
  if (((*(short *)(_DAT_0002884c + 0x124) != 0) && (0 < sVar5)) && (_DAT_0002883e == 0)) {
    uVar3 = 0;
  }
  if ((*(short *)(_DAT_0002884c + 0x124) != 0) && (sVar5 == 1)) {
    _DAT_00027fd8 = 1;
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0x148) = uVar3;
    if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) == 0) {
      *(undefined2 *)(sVar4 * 0x14 + _DAT_0002884c + 0x186) = 0;
    }
  }
  FUN_00000f68();
  if (_DAT_00028854 == 0) {
                    /* WARNING: Call to offcut address within same function */
    func_0x00001ea0(22000);
    _DAT_00028854 = extraout_A0;
  }
  sVar4 = 1000;
  while (sVar5 = sVar4 + -1, sVar4 != 0) {
    *(undefined1 *)(_DAT_00028854 + 5 + sVar5 * 0x16) = 0xff;
    *(undefined2 *)(_DAT_00028854 + sVar5 * 0x16) = 0xffff;
    *(undefined2 *)(_DAT_00028854 + 2 + sVar5 * 0x16) = 0xffff;
    sVar4 = sVar5;
  }
  _DAT_000288b0 = 0;
  _DAT_000288ac = 0;
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    *(undefined4 *)(&DAT_000288b4 + sVar4 * 4) = 0;
  }
  FUN_00001ecc();
  func_0x000049f8();
  func_0x00003b40();
  FUN_00000a8e();
  FUN_00000be0();
  sVar4 = *(short *)(_DAT_0002884c + 0x110);
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    sVar5 = 0;
    while ((sVar2 = sVar4, sVar5 < 8 &&
           (sVar2 = sVar5, *(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) != 0))) {
      sVar5 = sVar5 + 1;
    }
    sVar4 = sVar2;
    func_0x000047a8();
  }
  *(undefined2 *)(_DAT_0002884c + 0x17e) = *(undefined2 *)(sVar4 * 0x14 + _DAT_0002884c + 0x18a);
  *(undefined2 *)(_DAT_0002884c + 0x180) = *(undefined2 *)(sVar4 * 0x14 + _DAT_0002884c + 0x18c);
  sVar4 = _DAT_000150f8 / 0x28;
  sVar5 = _DAT_000150f6 / 0x28;
  local_c[2] = *(short *)(_DAT_0002884c + 0x17e) - sVar4 / 2;
  local_6 = 0;
  if (local_c[2] < 0) {
    psVar6 = &local_6;
  }
  else {
    psVar6 = local_c + 2;
  }
  *(short *)(_DAT_0002884c + 0x178) = *psVar6;
  local_c[0] = *(short *)(_DAT_0002884c + 0x180) - sVar5 / 2;
  local_c[1] = 0;
  if (local_c[0] < 0) {
    psVar6 = local_c + 1;
  }
  else {
    psVar6 = local_c;
  }
  *(short *)(_DAT_0002884c + 0x176) = *psVar6;
  local_14[2] = sVar4 + *(short *)(_DAT_0002884c + 0x178) + -1;
  local_e = 0x6f;
  if (local_14[2] < 0x70) {
    psVar6 = local_14 + 2;
  }
  else {
    psVar6 = &local_e;
  }
  *(short *)(_DAT_0002884c + 0x17c) = *psVar6;
  local_14[0] = sVar5 + *(short *)(_DAT_0002884c + 0x176) + -1;
  local_14[1] = 0x9b;
  if (local_14[0] < 0x9c) {
    psVar6 = local_14;
  }
  else {
    psVar6 = local_14 + 1;
  }
  *(short *)(_DAT_0002884c + 0x17a) = *psVar6;
  for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
    for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
      pbVar1 = (byte *)(sVar5 * 0xe0 + _DAT_00028850 + 1 + sVar4 * 2);
      *pbVar1 = *pbVar1 & 0xdf;
      pbVar1 = (byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4);
      *pbVar1 = *pbVar1 & 0xbf;
    }
  }
  FUN_00002572();
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    uVar3 = func_0x00002ad0(8);
    *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0x1122) = uVar3;
  }
  FUN_00000ad2();
  func_0x00007570();
  if (_DAT_0002883e != 0) {
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      func_0x000074f8();
    }
  }
  return;
}



// Function: FUN_00001ecc at 00001ecc
// Size: 588 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ecc(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined2 auStackY_10024 [8];
  undefined2 auStackY_10014 [32739];
  undefined2 local_24 [8];
  undefined2 local_14 [8];
  
  sVar5 = -1;
  sVar3 = 8;
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
      *(undefined2 *)(sVar2 * 0x14 + _DAT_0002884c + 0x194) = 0xffff;
      *(undefined2 *)(sVar2 * 0x14 + _DAT_0002884c + 0x196) = 0xffff;
    }
    else {
      iVar6 = sVar2 * 0x14 + _DAT_0002884c;
      *(undefined2 *)(iVar6 + 0x194) = *(undefined2 *)(iVar6 + 0x18a);
      iVar6 = sVar2 * 0x14 + _DAT_0002884c;
      *(undefined2 *)(iVar6 + 0x196) = *(undefined2 *)(iVar6 + 0x18c);
    }
    iVar6 = sVar2 * 0x14 + _DAT_0002884c;
    local_14[sVar2] = *(undefined2 *)(iVar6 + 0x18a);
    local_24[sVar2] = *(undefined2 *)(iVar6 + 0x18c);
    sVar1 = func_0x00004938(local_24[sVar2]);
    sVar3 = sVar2;
    if (-1 < sVar1) {
      if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) == 0) {
        func_0x000028e8((short)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4));
        *(undefined1 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) = 0xf;
      }
      else {
        func_0x000028e8((short)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4));
        *(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) = (char)sVar2;
        sVar5 = sVar2;
      }
    }
  }
  if ((sVar5 != -1) && (*(short *)(_DAT_0002884c + 0x128) != 0)) {
    while (sVar3 = func_0x00002b58(local_24[sVar5],0), -1 < sVar3) {
      iVar6 = sVar3 * 0x42 + _DAT_0002884c + 0x15c4;
      sVar2 = sVar5;
      func_0x000028e8((short)iVar6);
      *(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) = (char)sVar5;
      sVar2 = func_0x00002ad0(10,(short)((uint)iVar6 >> 0x10),sVar2);
      if (sVar2 < 5) {
        iVar6 = sVar5 * 0x14 + _DAT_0002884c;
        local_14[sVar5] = *(undefined2 *)(iVar6 + 0x18a);
        local_24[sVar5] = *(undefined2 *)(iVar6 + 0x18c);
      }
      else {
        iVar6 = sVar3 * 0x42 + _DAT_0002884c;
        local_14[sVar5] = *(undefined2 *)(iVar6 + 0x15c4);
        local_24[sVar5] = *(undefined2 *)(iVar6 + 0x15c6);
      }
      do {
        sVar5 = (short)((sVar5 + 1) % 8);
      } while (*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) == 0);
    }
  }
  FUN_00002118();
  for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x15c2); sVar5 = sVar5 + 1) {
    uVar4 = func_0x000032d0();
    *(undefined1 *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d8) = uVar4;
  }
  return;
}



// Function: FUN_00002118 at 00002118
// Size: 1114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002118(void)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  short local_5e;
  short local_5c [3];
  short local_56;
  short local_54 [3];
  short local_4e;
  short local_4c;
  short local_4a [4];
  undefined1 auStack_42 [23];
  undefined1 local_2b;
  undefined1 local_29;
  undefined1 local_27;
  undefined1 local_25;
  
  for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x15c2); sVar4 = sVar4 + 1) {
    for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
      pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15da);
      if (*pcVar1 == '\x05') {
        *pcVar1 = -1;
      }
      pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15da);
      local_4a[sVar3] = (short)*pcVar1;
      *pcVar1 = -1;
    }
    sVar2 = 0;
    for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
      if (local_4a[sVar3] != -1) {
        *(char *)((int)sVar2 + sVar4 * 0x42 + _DAT_0002884c + 0x15da) = (char)local_4a[sVar3];
        sVar2 = sVar2 + 1;
      }
    }
  }
  for (sVar4 = 0; sVar4 < 0x1d; sVar4 = sVar4 + 1) {
    func_0x000049a8((short)((uint)auStack_42 >> 0x10));
    for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x15c2); sVar3 = sVar3 + 1) {
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        iVar6 = (int)sVar2 + sVar3 * 0x42 + _DAT_0002884c;
        if ((int)*(char *)(iVar6 + 0x15da) == (int)sVar4) {
          *(undefined1 *)(iVar6 + 0x15e2) = local_2b;
          *(undefined1 *)((int)sVar2 + sVar3 * 0x42 + _DAT_0002884c + 0x15de) = local_29;
          *(undefined1 *)((int)sVar2 + sVar3 * 0x42 + _DAT_0002884c + 0x15e6) = local_25;
          *(undefined1 *)((int)sVar2 + sVar3 * 0x42 + _DAT_0002884c + 0x15ea) = local_27;
        }
      }
    }
  }
  for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x15c2); sVar4 = sVar4 + 1) {
    func_0x00003300();
  }
  for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x15c2); sVar4 = sVar4 + 1) {
    sVar3 = 0;
    while ((sVar3 < 4 && (-1 < *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15da)))) {
      sVar2 = func_0x00002ad0(100);
      if (sVar2 < 10) {
        sVar2 = func_0x00002ad0(100);
        if (sVar2 < 0x3c) {
          local_4e = 9;
          local_4c = *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e2) + 1;
          if (local_4c < 9) {
            psVar5 = &local_4c;
          }
          else {
            psVar5 = &local_4e;
          }
          *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e2) = (char)*psVar5;
        }
        else {
          local_54[1] = 1;
          local_54[2] = *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e2) + -1;
          if (local_54[2] < 2) {
            psVar5 = local_54 + 1;
          }
          else {
            psVar5 = local_54 + 2;
          }
          *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e2) = (char)*psVar5;
        }
      }
      sVar2 = func_0x00002ad0(100);
      if (sVar2 < 0x14) {
        sVar2 = func_0x00002ad0(100);
        if (sVar2 < 10) {
          pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6);
          *pcVar1 = *pcVar1 + '\x04';
        }
        else if (sVar2 < 0x3c) {
          pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6);
          *pcVar1 = *pcVar1 + '\x02';
        }
        else if (sVar2 < 0x5f) {
          local_56 = 2;
          local_54[0] = *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6) + -2;
          if (local_54[0] < 3) {
            psVar5 = &local_56;
          }
          else {
            psVar5 = local_54;
          }
          *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6) = (char)*psVar5;
        }
        else {
          local_5c[1] = 2;
          local_5c[2] = *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6) + -4;
          if (local_5c[2] < 3) {
            psVar5 = local_5c + 1;
          }
          else {
            psVar5 = local_5c + 2;
          }
          *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6) = (char)*psVar5;
        }
      }
      pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6);
      if (*pcVar1 < '\x06') {
        *pcVar1 = '\x06';
      }
      sVar2 = func_0x00002ad0(100);
      if (sVar2 < 10) {
        sVar2 = func_0x00002ad0(100);
        if (sVar2 < 0x3c) {
          pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15ea);
          *pcVar1 = *pcVar1 - *pcVar1 / '\x04';
        }
        else {
          pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15ea);
          *pcVar1 = *pcVar1 / '\x04' + *pcVar1;
        }
      }
      sVar2 = func_0x00002ad0(100);
      if (sVar2 < 10) {
        sVar2 = func_0x00002ad0(100);
        if (sVar2 < 0x3c) {
          local_5e = 1;
          local_5c[0] = *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15de) + -1;
          if (local_5c[0] < 2) {
            psVar5 = &local_5e;
          }
          else {
            psVar5 = local_5c;
          }
          *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15de) = (char)*psVar5;
        }
        else {
          pcVar1 = (char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15de);
          *pcVar1 = *pcVar1 + '\x01';
        }
      }
      sVar3 = sVar3 + 1;
    }
  }
  return;
}



// Function: FUN_00002572 at 00002572
// Size: 226 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002572(void)

{
  short sVar1;
  int *extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  FUN_00002808(20000,1);
  if (extraout_A0 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = (**(code **)(*extraout_A0 + 0x60))();
  func_0x00001ea0((char)sVar1);
  if (extraout_A0_00 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  uVar2 = (undefined2)((uint)extraout_A0 >> 0x10);
  uVar3 = uVar4;
  FUN_00002820((short)extraout_A0,(char)extraout_A0_00,(int)sVar1);
  FUN_00002818((short)extraout_A0,uVar2,uVar3);
  FUN_00002810(*(undefined4 *)(*(int *)(_DAT_000297f4 + 0x80) + 0x156));
  if (extraout_A0_01 == 0) {
    func_0x00001d18(extraout_A0_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (undefined2)((uint)extraout_A0_01 >> 0x10);
  func_0x00002830((short)extraout_A0_01,(char)extraout_A0_00,(int)sVar1);
  FUN_00002818((short)extraout_A0_01,uVar3,uVar4);
  func_0x00001d18(extraout_A0_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002808 at 00002808
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002808(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002810 at 00002810
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002818 at 00002818
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002818(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002820 at 00002820
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002820(void)

{
  uint unaff_D7;
  int in_A0;
  
  *(uint *)(in_A0 + -4) = unaff_D7 | *(uint *)(in_A0 + -4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



