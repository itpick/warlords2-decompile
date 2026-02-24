// Warlords II - Decompiled 68k Code
// Segment: CODE_080
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000076 at 00000076
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000076(void)

{
  func_0x00003e20(*(undefined4 *)(_DAT_000297f4 + 0x80),0x3fc);
  return;
}



// Function: FUN_00000098 at 00000098
// Size: 218 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000098(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  short asStack_202 [255];
  
  for (sVar2 = 2; sVar2 < 0xff; sVar2 = sVar2 + 1) {
    asStack_202[sVar2] = 0;
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    psVar4 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar2 = sVar1;
    if ((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar4 + 5)) &&
        (-1 < *psVar4)) && (1 < *(byte *)((int)psVar4 + 0x11))) {
      asStack_202[*(byte *)((int)psVar4 + 0x11)] = asStack_202[*(byte *)((int)psVar4 + 0x11)] + 1;
    }
  }
  for (uVar3 = 2; (short)uVar3 < 0xff; uVar3 = uVar3 + 1) {
    if (asStack_202[(short)uVar3] == 1) {
      sVar2 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar1 = sVar2 + -1, sVar2 != 0) {
        psVar4 = (short *)(sVar1 * 0x16 + _DAT_00028854);
        sVar2 = sVar1;
        if ((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar4 + 5)) &&
            (-1 < *psVar4)) && (uVar3 == *(byte *)((int)psVar4 + 0x11))) {
          *(byte *)((int)psVar4 + 0x11) = 0;
        }
      }
    }
  }
  return;
}



// Function: FUN_00000172 at 00000172
// Size: 350 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000172(void)

{
  byte *pbVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  
  sVar2 = *(short *)(_DAT_0002884c + 0x110);
  bVar3 = false;
  bVar4 = false;
  pbVar1 = (byte *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
  *pbVar1 = *pbVar1 & 0xdf;
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    if (sVar5 != sVar2) {
      if ((byte)((uint)(*(int *)(sVar5 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 6) >> 0x1e) !=
          (byte)((uint)(*(int *)(sVar5 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 4) >> 0x1e)) {
        if ((byte)((uint)(*(int *)(sVar5 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 4) >> 0x1e) <
            (byte)((uint)(*(int *)(sVar5 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 6) >> 0x1e))
        {
          bVar3 = true;
        }
        else {
          bVar4 = true;
        }
      }
    }
  }
  if ((bVar3) || (bVar4)) {
    pbVar1 = (byte *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
    *pbVar1 = *pbVar1 | 0x10;
  }
  if ((bVar3) && (!bVar4)) {
    pbVar1 = (byte *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
    *pbVar1 = *pbVar1 | 0x20;
  }
  return;
}



// Function: FUN_000002d0 at 000002d0
// Size: 1092 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002d0(void)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 in_stack_ffffff48;
  
  sVar2 = *(short *)(_DAT_0002884c + 0x110);
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    if ((sVar4 != sVar2) &&
       ((byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 6) >> 0x1e) !=
        (byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e))) {
      if ((byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 6) >> 0x1e) <
          (byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)) {
        puVar1 = (uint *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
        *puVar1 = *puVar1 & 0xfcffffff |
                  ((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)
                  << 0x18;
        puVar1 = (uint *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
        *puVar1 = *puVar1 & 0xfcffffff |
                  ((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)
                  << 0x18;
        if ((byte)((uint)(*(int *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 4) >> 0x1e) <
            (byte)((uint)(*(int *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 6) >> 0x1e))
        {
          puVar1 = (uint *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
          *puVar1 = *puVar1 & 0xf3ffffff |
                    ((uint)(*(int *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 6) >> 0x1e)
                    << 0x1a;
        }
        if ((byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)
            == 2) {
          in_stack_ffffff48 = CONCAT22(sVar2,CONCAT11(9,(char)in_stack_ffffff48));
          func_0x00006e50(in_stack_ffffff48,CONCAT22(sVar2,sVar4),0);
          if (*(short *)(_DAT_0002884c + 0x15a) != 0) {
            if ((_DAT_00028952 == 0) &&
               (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              FUN_00002ad8(0x700001,_DAT_0002884c + sVar4 * 0x14);
              in_stack_ffffff48 = 0x278a8;
              func_0x000076d0(0x278a8,extraout_A0);
              func_0x00003e50(0x278a8,CONCAT22(0x14,*(undefined2 *)(_DAT_0002884c + 0x110)));
            }
          }
        }
      }
      else if ((byte)((uint)(*(int *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2) << 4) >> 0x1e
                     ) <=
               (byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e
                     )) {
        puVar1 = (uint *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4);
        *puVar1 = *puVar1 & 0xfcffffff |
                  ((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)
                  << 0x18;
        puVar1 = (uint *)(sVar4 * 8 + _DAT_0002884c + 0x1582 + (int)sVar2);
        *puVar1 = *puVar1 & 0xfcffffff |
                  ((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)
                  << 0x18;
        if ((byte)((uint)(*(int *)(sVar2 * 8 + _DAT_0002884c + 0x1582 + (int)sVar4) << 4) >> 0x1e)
            == 0) {
          in_stack_ffffff48 = CONCAT22(sVar2,CONCAT11(10,(char)in_stack_ffffff48));
          func_0x00006e50(in_stack_ffffff48,CONCAT22(sVar2,sVar4),0);
          if (*(short *)(_DAT_0002884c + 0x15a) != 0) {
            if ((_DAT_00028952 == 0) &&
               (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              FUN_00002ad8(0x700000,_DAT_0002884c + sVar4 * 0x14);
              in_stack_ffffff48 = 0x278a8;
              func_0x000076d0(0x278a8,extraout_A0_00);
              func_0x00003e50(0x278a8,CONCAT22(0x14,*(undefined2 *)(_DAT_0002884c + 0x110)));
            }
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00000714 at 00000714
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000714(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  if ((short)param_1._0_2_ < 8) {
    sVar1 = 0;
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      if (*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) {
        sVar1 = sVar1 + 1;
      }
    }
    if (sVar1 == 1) {
      iVar3 = (short)param_1._0_2_ * 0x14 + _DAT_0002884c;
      *(undefined2 *)(iVar3 + 0x18a) = *(undefined2 *)(iVar3 + 0x194);
      iVar3 = (short)param_1._0_2_ * 0x14 + _DAT_0002884c;
      *(undefined2 *)(iVar3 + 0x18c) = *(undefined2 *)(iVar3 + 0x196);
    }
    else {
      func_0x00004930();
      sVar1 = func_0x00004938(*(undefined4 *)((short)param_1._0_2_ * 0x14 + _DAT_0002884c + 0x194));
      if ((-1 < sVar1) &&
         (*(char *)((*(uint *)(*(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                               _DAT_00028850 + *(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4) * 2
                              ) >> 0x18) + _DAT_0002884c + 0x711) != '\n')) {
        sVar1 = -1;
      }
      if ((*(short *)((short)param_1._0_2_ * 2 + 0x28800) == 0) ||
         ((-1 < sVar1 &&
          ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == (int)(short)param_1._0_2_)))) {
        iVar3 = (short)param_1._0_2_ * 0x14 + _DAT_0002884c;
        *(undefined2 *)(iVar3 + 0x18a) = *(undefined2 *)(iVar3 + 0x194);
        iVar3 = (short)param_1._0_2_ * 0x14 + _DAT_0002884c;
        *(undefined2 *)(iVar3 + 0x18c) = *(undefined2 *)(iVar3 + 0x196);
      }
      else {
        sVar1 = func_0x00002b58(*(undefined4 *)((short)param_1._0_2_ * 0x14 + _DAT_0002884c + 0x18a)
                                ,(uint)param_1._0_2_ << 0x10);
        if (-1 < sVar1) {
          *(undefined2 *)((short)param_1._0_2_ * 0x14 + _DAT_0002884c + 0x18a) =
               *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4);
          *(undefined2 *)((short)param_1._0_2_ * 0x14 + _DAT_0002884c + 0x18c) =
               *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6);
        }
      }
    }
  }
  return;
}



// Function: FUN_000008b8 at 000008b8
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008b8(void)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  
  sVar4 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar2 = sVar4 + -1, sVar4 != 0) {
    iVar5 = sVar2 * 0x16 + _DAT_00028854;
    sVar4 = sVar2;
    if ((*(char *)(iVar5 + 4) == '\x1c') &&
       ((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar5 + 5))) {
      uVar1 = *(ushort *)(_DAT_0002884c + 0x5e4 + (int)(short)*(char *)(iVar5 + 10));
      bVar3 = (byte)(uVar1 >> 8);
      if (((byte)(((uint)uVar1 << 0x16) >> 0x1e) == 0) && (0xe < bVar3 >> 2)) {
        FUN_00000996();
      }
      else if (((byte)(((uint)uVar1 << 0x16) >> 0x1e) == 1) && (0x1d < bVar3 >> 2)) {
        FUN_00000996();
      }
      else if (((byte)(((uint)uVar1 << 0x16) >> 0x1e) == 2) && (0x3b < bVar3 >> 2)) {
        FUN_00000996();
      }
    }
  }
  return;
}



// Function: FUN_00000996 at 00000996
// Size: 996 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000996(undefined4 param_1)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  undefined4 extraout_A0_03;
  undefined2 extraout_A0w_08;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 auStack_77c [256];
  undefined1 auStack_67c [256];
  undefined1 auStack_57c [256];
  undefined1 auStack_47c [256];
  undefined1 auStack_37c [256];
  undefined1 auStack_27c [256];
  undefined1 auStack_17c [256];
  int local_7c;
  undefined1 auStack_78 [40];
  short local_50;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  iVar8 = param_1._0_2_ * 0x16 + _DAT_00028854;
  cVar3 = *(char *)(iVar8 + 8);
  sVar7 = (short)*(char *)(iVar8 + 10);
  puVar1 = (uint *)(_DAT_0002884c + 0x5e4 + (int)sVar7);
  *puVar1 = *puVar1 & 0xfcffffff |
            ((byte)((byte)((uint)(*(int *)(_DAT_0002884c + 0x5e4 + (int)sVar7) << 6) >> 0x1e) + 1) &
            3) << 0x18;
  func_0x00004900(param_1._0_2_ * 0x16 + (short)_DAT_00028854);
  iVar8 = param_1._0_2_ * 0x16 + _DAT_00028854;
  cVar4 = *(char *)(iVar8 + 8);
  local_50 = 2;
  pcVar2 = (char *)(iVar8 + 6);
  *pcVar2 = *pcVar2 + '\x02';
  if ((_DAT_00028952 == 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    (**(code **)(*_DAT_00027fbc + 0x268))();
    (**(code **)(*_DAT_00027fc4 + 0x268))();
    (**(code **)(*_DAT_00027fc8 + 0x268))();
    uVar11 = 7;
    FUN_000029e8();
    local_8 = (int *)0x0;
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10),
               uVar11);
    local_8 = extraout_A0;
    FUN_00001bf0((short)extraout_A0);
    local_1a = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4e;
    iVar8 = func_0x000076a8((short)auStack_4e);
    if (iVar8 == 0) {
      (**(code **)(*local_8 + 0x188))((short)local_8,0x65);
      if (extraout_A0_00 != (int *)0x0) {
        (**(code **)(*extraout_A0_00 + 0x3d8))();
      }
      if (*(short *)(sVar7 * 2 + _DAT_0002884c + 0x594) == 0) {
        sVar6 = 0;
      }
      else {
        sVar6 = 6;
      }
      FUN_00002ad8(sVar6);
      func_0x00007320((short)auStack_17c,extraout_A0w);
      uVar10 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      uVar9 = 0x6e61;
      uVar11 = (undefined2)((uint)local_8 >> 0x10);
      uVar12 = 0x88;
      func_0x00006e38((short)local_8,0x6d65,(short)extraout_A0_01);
      func_0x00007320((short)auStack_27c,sVar7 * 0x14 + (short)_DAT_0002884c + 0x224,uVar11,uVar9,
                      uVar10);
      uVar10 = (undefined2)((uint)extraout_A0_02 >> 0x10);
      uVar9 = 0x6c69;
      uVar11 = (undefined2)((uint)local_8 >> 0x10);
      func_0x00006e38((short)local_8,0x6e31,(short)extraout_A0_02);
      FUN_00002ad8(sVar6 + 1,uVar11,uVar9,uVar10,uVar12);
      func_0x00007320(auStack_37c,extraout_A0w_00);
      func_0x00006e38(local_8,0x6c696e32,extraout_A0w_01);
      FUN_00002ad8(sVar6 + 2);
      func_0x00007320(auStack_47c,extraout_A0w_02);
      func_0x00006e38(local_8,0x6c696e33,extraout_A0w_03);
      FUN_00002ad8(sVar6 + 3);
      func_0x00007320(auStack_57c,extraout_A0w_04);
      func_0x00006e38(local_8,0x6c696e34,extraout_A0w_05);
      FUN_00002ad8(sVar6 + 4);
      func_0x00007320(auStack_67c,extraout_A0w_06);
      func_0x00006e38(local_8,0x6c696e35,extraout_A0w_07);
      iVar8 = param_1._0_2_ * 0x16 + _DAT_00028854;
      local_7c = _DAT_0002884c + 0x5e4;
      FUN_00002ad8(CONCAT22(param_1._2_2_,sVar6 + 5),
                   ((uint)(*(int *)(local_7c + sVar7) << 6) >> 0x1e) + 1,(int)*(char *)(iVar8 + 8),
                   (int)(short)((short)cVar4 - (short)cVar3),(int)*(char *)(iVar8 + 6),(int)local_50
                  );
      func_0x000076d0(auStack_78,extraout_A0_03);
      func_0x00007320(auStack_77c,(short)auStack_78);
      func_0x00006e38(local_8,0x6c696e36,extraout_A0w_08);
      (**(code **)(*local_8 + 0x40c))();
      (**(code **)(*local_8 + 0x3a0))();
      _DAT_00025f52 = local_14;
    }
    else {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 0x3a0))();
      }
      local_8 = (int *)0x0;
      func_0x00001c10((short)((uint)local_18 >> 0x10));
    }
  }
  return;
}



// Function: FUN_00000d7a at 00000d7a
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000d7a(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  func_0x00006e60(0x20000);
  for (sVar1 = 0; sVar1 < _DAT_000283d8; sVar1 = sVar1 + 1) {
    if (*(char *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd26) == '\x06') {
      sVar2 = sVar2 + 1;
    }
  }
  return sVar2;
}



// Function: FUN_00000dd0 at 00000dd0
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000dd0(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  FUN_000028d8();
  while (!bVar1) {
    if (*(short *)(_DAT_0002884c + 0x118) != 0) {
      *(short *)(_DAT_0002884c + 0x136) = *(short *)(_DAT_0002884c + 0x136) + 1;
      FUN_000028d0();
      *(undefined2 *)(_DAT_0002884c + 0x118) = 0;
      FUN_000028e0();
      FUN_000028c0();
      FUN_000028c8();
      func_0x00003ab0(0);
    }
    *(undefined2 *)(_DAT_0002884c + 0x110) =
         *(undefined2 *)(*(short *)(_DAT_0002884c + 0x174) * 2 + _DAT_0002884c + 0x164);
    iVar2 = _DAT_0002884c;
    *(short *)(_DAT_0002884c + 0x174) = *(short *)(_DAT_0002884c + 0x174) + 1;
    if (7 < *(short *)(iVar2 + 0x174)) {
      *(undefined2 *)(_DAT_0002884c + 0x118) = 1;
    }
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0x138) != 0) {
      bVar1 = true;
    }
  }
  return 0;
}



// Function: FUN_00000e84 at 00000e84
// Size: 116 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e84(void)

{
  short sVar1;
  
  if ((*(short *)(_DAT_0002884c + 0x15c) != 0) && (*(short *)(_DAT_0002884c + 0x158) != 0)) {
    return;
  }
  sVar1 = 0;
  while ((sVar1 < 8 &&
         ((*(short *)(sVar1 * 2 + _DAT_0002884c + 0x138) == 0 ||
          (*(short *)(sVar1 * 2 + _DAT_0002884c + 0xd0) != 0))))) {
    sVar1 = sVar1 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001284 at 00001284
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001284(void)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined2 extraout_D0u;
  undefined2 extraout_D0u_00;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int extraout_A0;
  short *psVar11;
  int iVar12;
  short local_c;
  short local_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  sVar10 = 0;
  if ((_DAT_00028840 == 0) ||
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar5 = false;
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
    local_c = 1;
    local_a = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar11 = &local_c;
    }
    else {
      psVar11 = &local_a;
    }
    if ((*psVar11 == 1) || (_DAT_00028840 == 0)) {
      return 0;
    }
  }
  func_0x000049b0();
  sVar9 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar8 = sVar9 + -1, sVar9 != 0) {
    psVar11 = (short *)(sVar8 * 0x16 + _DAT_00028854);
    sVar9 = sVar8;
    if ((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar11 + 5)) {
      if (((*psVar11 == -1) && (psVar11[1] == -1)) && (*(char *)(psVar11 + 8) == 'e')) {
        *(undefined1 *)(psVar11 + 8) = 0x66;
        func_0x00007448(sVar8 * 0x16 + (short)_DAT_00028854);
      }
      else {
        psVar11 = (short *)(sVar8 * 0x16 + _DAT_00028854);
        if (((*psVar11 == -1) && (psVar11[1] == -1)) && (*(char *)(psVar11 + 8) == 'f')) {
          sVar7 = func_0x000049c0(0,(short)&uStack_6,(short)&uStack_8);
          if ((sVar7 == 0) || (sVar7 = FUN_000017c4(uStack_6), sVar7 == 0)) {
            iVar12 = _DAT_00028854;
            if ((uint)(*(int *)(_DAT_00028854 + 0xf + sVar8 * 0x16) << 1) >> 0x19 ==
                (int)*(char *)(_DAT_00028854 + 9 + sVar8 * 0x16)) {
              func_0x00007440(sVar8 * 0x16 + (short)_DAT_00028854);
            }
            else {
              puVar1 = (uint *)(_DAT_00028854 + 0xf + sVar8 * 0x16);
              *puVar1 = *puVar1 & 0x80ffffff |
                        (*(byte *)(_DAT_00028854 + 9 + sVar8 * 0x16) & 0x7f) << 0x18;
              *(undefined1 *)(iVar12 + 0x10 + sVar8 * 0x16) = 0x65;
              func_0x00007448(sVar8 * 0x16 + (short)_DAT_00028854);
            }
          }
          else {
            if (bVar4) {
              *(undefined1 *)(_DAT_00027ed2 + sVar10) = 0;
              *(int *)(sVar10 * 4 + _DAT_00027ed2 + 400) = sVar8 * 0x16 + _DAT_00028854;
              *(undefined1 *)(_DAT_00027ed2 + 100 + (int)sVar10) =
                   *(undefined1 *)(_DAT_00028854 + 4 + sVar8 * 0x16);
              *(undefined1 *)(sVar10 + _DAT_00027ed2 + 200) =
                   *(undefined1 *)(_DAT_00028854 + 9 + sVar8 * 0x16);
              *(byte *)(sVar10 + _DAT_00027ed2 + 300) =
                   (byte)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar8 * 0x16) << 1) >> 0x19);
            }
            *(undefined2 *)(_DAT_00028854 + sVar8 * 0x16) = uStack_6;
            *(undefined2 *)(_DAT_00028854 + 2 + sVar8 * 0x16) = uStack_8;
            iVar12 = _DAT_00028854;
            pbVar2 = (byte *)(_DAT_00028854 + 0xf + sVar8 * 0x16);
            *pbVar2 = *pbVar2 & 0x80;
            puVar1 = (uint *)(iVar12 + 0xe + sVar8 * 0x16);
            *puVar1 = *puVar1 & 0xfffffff |
                      ((uint)(*(int *)(iVar12 + 0xf + sVar8 * 0x16) << 1) >> 0x19) << 0x1c;
            *(undefined1 *)(iVar12 + 0x10 + sVar8 * 0x16) = 0xff;
            sVar10 = sVar10 + 1;
            func_0x00007448(sVar8 * 0x16 + (short)_DAT_00028854);
          }
        }
      }
    }
  }
  for (sVar9 = 0; sVar9 < *(short *)(_DAT_0002884c + 0x15c2); sVar9 = sVar9 + 1) {
    iVar12 = sVar9 * 0x42 + _DAT_0002884c;
    if (((int)*(char *)(iVar12 + 0x15d9) == (int)*(short *)(_DAT_0002884c + 0x110)) &&
       (pcVar3 = (char *)(iVar12 + 0x15f1), '\0' < *pcVar3)) {
      *pcVar3 = *pcVar3 + -1;
      pcVar3 = (char *)(sVar9 * 0x42 + _DAT_0002884c + 0x15f1);
      if (*pcVar3 < '\x01') {
        *pcVar3 = '\0';
      }
      func_0x00007450();
      pcVar3 = (char *)(sVar9 * 0x42 + _DAT_0002884c + 0x15f1);
      if (*pcVar3 < '\x01') {
        *pcVar3 = '\0';
        if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 1) {
          bVar5 = true;
        }
        else {
          sVar8 = func_0x000049c0(0,(short)&uStack_6,(short)&uStack_8);
          if ((sVar8 != 0) || (*(short *)(sVar9 * 0x42 + _DAT_0002884c + 0x15f6) != 0)) {
            if (*(short *)(sVar9 * 0x42 + _DAT_0002884c + 0x15f6) == 0) {
              sVar8 = -1;
              if (bVar4) {
                *(undefined1 *)(_DAT_00027ed2 + sVar10) = 2;
              }
            }
            else {
              sVar8 = func_0x00004938(*(undefined2 *)(sVar9 * 0x42 + _DAT_0002884c + 0x15fa));
              if (bVar4) {
                *(undefined1 *)(_DAT_00027ed2 + sVar10) = 1;
              }
              if (sVar8 < 0) {
                sVar8 = *(short *)(_DAT_0002884c + 0x110) + 100;
              }
            }
            FUN_00001858(uStack_6,sVar8);
            if (bVar4) {
              *(int *)(sVar10 * 4 + _DAT_00027ed2 + 400) = extraout_A0;
              *(undefined1 *)(_DAT_00027ed2 + 100 + (int)sVar10) = *(undefined1 *)(extraout_A0 + 4);
              *(char *)(sVar10 + _DAT_00027ed2 + 200) = (char)sVar9;
              *(char *)(sVar10 + _DAT_00027ed2 + 300) = (char)sVar8;
            }
            sVar10 = sVar10 + 1;
          }
        }
      }
    }
  }
  if (bVar4) {
    *(char *)(_DAT_00027ed2 + 800) = (char)sVar10;
  }
  func_0x000049b8();
  uVar6 = extraout_D0u;
  if ((bVar4) && (bVar5)) {
    FUN_00002b68(0x56e9,0x56c6);
    uVar6 = extraout_D0u_00;
  }
  return CONCAT22(uVar6,sVar10);
}



// Function: FUN_000013d8 at 000013d8
// Size: 820 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000013d8(void)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined2 extraout_D0u;
  undefined2 extraout_D0u_00;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D7w;
  int extraout_A0;
  short *psVar7;
  int iVar8;
  int unaff_A6;
  
  do {
    sVar5 = FUN_000017c4();
    if (sVar5 != 0) {
      if (unaff_D5w != 0) {
        *(undefined1 *)(_DAT_00027ed2 + unaff_D4w) = 0;
        *(int *)(unaff_D4w * 4 + _DAT_00027ed2 + 400) = unaff_D3w * 0x16 + _DAT_00028854;
        *(undefined1 *)(_DAT_00027ed2 + 100 + (int)unaff_D4w) =
             *(undefined1 *)(_DAT_00028854 + 4 + unaff_D3w * 0x16);
        *(undefined1 *)(unaff_D4w + _DAT_00027ed2 + 200) =
             *(undefined1 *)(_DAT_00028854 + 9 + unaff_D3w * 0x16);
        *(byte *)(unaff_D4w + _DAT_00027ed2 + 300) =
             (byte)((uint)(*(int *)(_DAT_00028854 + 0xf + unaff_D3w * 0x16) << 1) >> 0x19);
      }
      *(undefined2 *)(_DAT_00028854 + unaff_D3w * 0x16) = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(_DAT_00028854 + 2 + unaff_D3w * 0x16) = *(undefined2 *)(unaff_A6 + -4);
      iVar8 = _DAT_00028854;
      pbVar2 = (byte *)(_DAT_00028854 + 0xf + unaff_D3w * 0x16);
      *pbVar2 = *pbVar2 & 0x80;
      puVar1 = (uint *)(iVar8 + 0xe + unaff_D3w * 0x16);
      *puVar1 = *puVar1 & 0xfffffff |
                ((uint)(*(int *)(iVar8 + 0xf + unaff_D3w * 0x16) << 1) >> 0x19) << 0x1c;
      *(undefined1 *)(iVar8 + 0x10 + unaff_D3w * 0x16) = 0xff;
      unaff_D4w = unaff_D4w + 1;
      func_0x00007448();
      sVar5 = unaff_D3w;
      goto LAB_00001534;
    }
    do {
      iVar8 = _DAT_00028854;
      sVar5 = unaff_D3w;
      if ((uint)(*(int *)(_DAT_00028854 + 0xf + unaff_D3w * 0x16) << 1) >> 0x19 ==
          (int)*(char *)(_DAT_00028854 + 9 + unaff_D3w * 0x16)) {
        func_0x00007440();
      }
      else {
        puVar1 = (uint *)(_DAT_00028854 + 0xf + unaff_D3w * 0x16);
        *puVar1 = *puVar1 & 0x80ffffff |
                  (*(byte *)(_DAT_00028854 + 9 + unaff_D3w * 0x16) & 0x7f) << 0x18;
        *(undefined1 *)(iVar8 + 0x10 + unaff_D3w * 0x16) = 0x65;
        func_0x00007448();
      }
LAB_00001534:
      do {
        while( true ) {
          do {
            unaff_D3w = sVar5 + -1;
            if (sVar5 == 0) {
              for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x15c2); sVar5 = sVar5 + 1) {
                iVar8 = sVar5 * 0x42 + _DAT_0002884c;
                if ((int)*(char *)(iVar8 + 0x15d9) == (int)*(short *)(_DAT_0002884c + 0x110)) {
                  pcVar3 = (char *)(iVar8 + 0x15f1);
                  *(char **)(unaff_A6 + -0xc) = pcVar3;
                  if ('\0' < *pcVar3) {
                    *pcVar3 = *pcVar3 + -1;
                    pcVar3 = (char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15f1);
                    *(char **)(unaff_A6 + -0x10) = pcVar3;
                    if (*pcVar3 < '\x01') {
                      *pcVar3 = '\0';
                    }
                    func_0x00007450();
                    pcVar3 = (char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15f1);
                    *(char **)(unaff_A6 + -0x14) = pcVar3;
                    if (*pcVar3 < '\x01') {
                      *pcVar3 = '\0';
                      if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c +
                                    0x186) < 1) {
                        unaff_D7w = 1;
                      }
                      else {
                        sVar6 = func_0x000049c0(0,(short)(unaff_A6 + -2));
                        if ((sVar6 != 0) || (*(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15f6) != 0)
                           ) {
                          if (*(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15f6) == 0) {
                            sVar6 = -1;
                            if (unaff_D5w != 0) {
                              *(undefined1 *)(_DAT_00027ed2 + unaff_D4w) = 2;
                            }
                          }
                          else {
                            *(int *)(unaff_A6 + -0x18) = sVar5 * 0x42 + _DAT_0002884c;
                            sVar6 = func_0x00004938();
                            if (unaff_D5w != 0) {
                              *(undefined1 *)(_DAT_00027ed2 + unaff_D4w) = 1;
                            }
                            if (sVar6 < 0) {
                              sVar6 = *(short *)(_DAT_0002884c + 0x110) + 100;
                            }
                          }
                          FUN_00001858(*(undefined2 *)(unaff_A6 + -2));
                          if (unaff_D5w != 0) {
                            *(int *)(unaff_D4w * 4 + _DAT_00027ed2 + 400) = extraout_A0;
                            *(undefined1 *)(_DAT_00027ed2 + 100 + (int)unaff_D4w) =
                                 *(undefined1 *)(extraout_A0 + 4);
                            *(char *)(unaff_D4w + _DAT_00027ed2 + 200) = (char)sVar5;
                            *(char *)(unaff_D4w + _DAT_00027ed2 + 300) = (char)sVar6;
                          }
                          unaff_D4w = unaff_D4w + 1;
                        }
                      }
                    }
                  }
                }
              }
              if (unaff_D5w != 0) {
                *(char *)(_DAT_00027ed2 + 800) = (char)unaff_D4w;
              }
              func_0x000049b8();
              uVar4 = extraout_D0u;
              if ((unaff_D5w != 0) && (unaff_D7w != 0)) {
                FUN_00002b68(0x56e9);
                uVar4 = extraout_D0u_00;
              }
              return CONCAT22(uVar4,unaff_D4w);
            }
            psVar7 = (short *)(unaff_D3w * 0x16 + _DAT_00028854);
            sVar5 = unaff_D3w;
          } while ((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)((int)psVar7 + 5));
          if (((*psVar7 != -1) || (psVar7[1] != -1)) || (*(char *)(psVar7 + 8) != 'e')) break;
          *(undefined1 *)(psVar7 + 8) = 0x66;
          func_0x00007448();
        }
        psVar7 = (short *)(unaff_D3w * 0x16 + _DAT_00028854);
      } while (((*psVar7 != -1) || (psVar7[1] != -1)) || (*(char *)(psVar7 + 8) != 'f'));
      sVar5 = func_0x000049c0(0,(short)unaff_A6 + -2);
    } while (sVar5 == 0);
  } while( true );
}



// Function: FUN_0000170c at 0000170c
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000170c(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  func_0x000049b0();
  for (sVar3 = 0; (int)sVar3 < (int)*(char *)(_DAT_00027ed2 + 800); sVar3 = sVar3 + 1) {
    if (*(char *)(_DAT_00027ed2 + sVar3) != '\0') {
      cVar1 = *(char *)(sVar3 + _DAT_00027ed2 + 200);
      sVar2 = func_0x000032b0(CONCAT22((short)cVar1,
                                       (short)*(char *)((short)cVar1 * 0x42 + _DAT_0002884c + 0x15f0
                                                       )));
      iVar4 = (short)*(char *)(sVar3 + _DAT_00027ed2 + 200) * 0x42 + _DAT_0002884c;
      *(undefined1 *)(iVar4 + 0x15f1) = *(undefined1 *)(sVar2 + iVar4 + 0x15de);
      func_0x00007450();
    }
  }
  func_0x000049b8();
  func_0x00004918();
  func_0x00003ae0();
  return;
}



// Function: FUN_000017c4 at 000017c4
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000017c4(undefined4 param_1,undefined4 param_2)

{
  short sVar2;
  undefined4 uVar1;
  
  sVar2 = func_0x00004938();
  if ((sVar2 < 0) ||
     ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) ==
      (int)*(short *)(_DAT_0002884c + 0x110))) {
    if (*(char *)(_DAT_00028864 + param_1._0_2_ * 6) == '\0') {
      if (*(short *)(*(char *)((*(uint *)(param_2._0_2_ * 0xe0 + _DAT_00028850 + param_1._2_2_ * 2)
                               >> 0x18) + _DAT_0002884c + 0x711) * 2 + 0x15cbe) < 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001858 at 00001858
// Size: 472 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001858(undefined4 param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 *extraout_A0;
  short *psVar4;
  int iVar5;
  undefined1 auStack_20 [22];
  short local_a [2];
  undefined1 local_6 [2];
  
  cVar1 = *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f0);
  sVar2 = func_0x000032b0((short)cVar1);
  func_0x00004908((short)auStack_20,(short)local_6);
  if (extraout_A0 != (undefined2 *)0x0) {
    if (param_2._2_2_ == -1) {
      *extraout_A0 = param_1._2_2_;
      extraout_A0[1] = param_2._0_2_;
    }
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
    iVar5 = param_1._0_2_ * 0x42 + _DAT_0002884c;
    if ((*(char *)(iVar5 + 0x15d9) == '\x0f') ||
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xf0) == 0)) {
      *(undefined1 *)(extraout_A0 + 4) =
           *(undefined1 *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e2);
    }
    else {
      local_a[0] = *(char *)(sVar2 + iVar5 + 0x15e2) + 2;
      local_a[1] = 9;
      if (local_a[0] < 10) {
        psVar4 = local_a;
      }
      else {
        psVar4 = local_a + 1;
      }
      *(char *)(extraout_A0 + 4) = (char)*psVar4;
    }
    *(char *)((int)extraout_A0 + 9) = (char)((uint)param_1 >> 0x10);
    *(undefined1 *)(extraout_A0 + 5) = 0;
    *(char *)((int)extraout_A0 + 0xb) =
         *(char *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15ea) / '\x02';
    *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f1) = 0;
    if (param_2._2_2_ == -1) {
      *(byte *)((int)extraout_A0 + 0xf) = *(byte *)((int)extraout_A0 + 0xf) & 0x80;
      *(uint *)(extraout_A0 + 7) =
           *(uint *)(extraout_A0 + 7) & 0xfffffff |
           ((uint)(*(int *)((int)extraout_A0 + 0xf) << 1) >> 0x19) << 0x1c;
      *(undefined1 *)(extraout_A0 + 8) = 0xff;
      func_0x00007438((short)extraout_A0);
    }
    else {
      *extraout_A0 = 0xffff;
      extraout_A0[1] = 0xffff;
      *(uint *)((int)extraout_A0 + 0xf) =
           *(uint *)((int)extraout_A0 + 0xf) & 0x80ffffff | (param_2 & 0x7f) << 0x18;
      *(undefined1 *)(extraout_A0 + 8) = 0x65;
      func_0x00007438((short)extraout_A0);
    }
  }
  return;
}



// Function: FUN_00001a30 at 00001a30
// Size: 214 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a30(void)

{
  byte *pbVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  
  sVar5 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar5 + -1, sVar5 != 0) {
    psVar6 = (short *)(sVar4 * 0x16 + _DAT_00028854);
    sVar5 = sVar4;
    if (((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar6 + 5)) &&
        ((~psVar6[6] & 1U) != 0)) && (*(char *)(psVar6 + 3) <= *(char *)((int)psVar6 + 7))) {
      sVar4 = *psVar6;
      sVar2 = psVar6[1];
      cVar3 = *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                        _DAT_0002884c + 0x711);
      if (((((cVar3 == '\a') || (cVar3 == '\x04')) ||
           ((cVar3 == '\x05' || ((cVar3 == '\x01' || (cVar3 == '\b')))))) || (cVar3 == '\t')) ||
         ((uint)(*(int *)(sVar2 * 0x70 + _DAT_00028858 + (int)sVar4) << 3) >> 0x1b != 0)) {
        pbVar1 = (byte *)(sVar2 * 0xe0 + _DAT_00028850 + 1 + sVar4 * 2);
        *pbVar1 = *pbVar1 | 0x20;
      }
    }
  }
  return;
}



// Function: FUN_00001b06 at 00001b06
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b06(void)

{
  ushort *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    iVar4 = sVar2 * 0x16 + _DAT_00028854;
    sVar3 = sVar2;
    if (*(char *)(_DAT_0002884c + 0x111) == *(char *)(iVar4 + 5)) {
      puVar1 = (ushort *)(iVar4 + 0xc);
      *puVar1 = *puVar1 & 0xffbf;
      puVar1 = (ushort *)(_DAT_00028854 + 0xc + sVar2 * 0x16);
      *puVar1 = *puVar1 & 0xfdff;
    }
  }
  iVar4 = *(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c;
  _DAT_00027e82 = *(undefined2 *)(iVar4 + 0x18a);
  _DAT_00027e84 = *(undefined2 *)(iVar4 + 0x18c);
  return;
}



// Function: FUN_00001b78 at 00001b78
// Size: 121 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b78(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 auStack_54 [80];
  
  sVar3 = 0;
  bVar1 = true;
  *(undefined2 *)(_DAT_0002884c + 0x15a) =
       *(undefined2 *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x148);
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if ((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      sVar3 = sVar3 + 1;
      bVar1 = false;
    }
  }
  if ((sVar3 == 1) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
    _DAT_000276e4 = 1;
  }
  else {
    _DAT_000276e4 = 0;
  }
  if (bVar1) {
    *(undefined2 *)(_DAT_0002884c + 0x15a) = 1;
  }
  if (((1 < sVar3) && (*(short *)(_DAT_0002884c + 0x124) != 0)) &&
     (*(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x148) == 0)) {
    *(undefined2 *)(_DAT_0002884c + 0x15a) = 0;
  }
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    func_0x00003b28();
    func_0x00003b58();
    if ((bVar1) || ((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)))) {
      func_0x000047a8();
    }
  }
  if ((bVar1) || ((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)))) {
    func_0x00006e70(0x10001,0);
  }
  func_0x000076d0(auStack_54,0x1520c,_DAT_0002884c + param_1._0_2_ * 0x14);
  func_0x00003e50(auStack_54,param_1._0_2_);
  func_0x00003318();
  uVar5 = 0;
  func_0x00003320();
  uVar4 = 5;
  func_0x00003320(uVar5);
  FUN_000002d0();
  func_0x00004930();
  func_0x00003ab0(0,uVar4);
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 269 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  int unaff_A6;
  undefined2 uVar1;
  undefined2 uVar2;
  
  _DAT_000276e4 = 1;
  if (unaff_D4w != 0) {
    *(undefined2 *)(_DAT_0002884c + 0x15a) = 1;
  }
  if (((1 < unaff_D5w) && (*(short *)(_DAT_0002884c + 0x124) != 0)) &&
     (*(short *)(unaff_D6w * 2 + _DAT_0002884c + 0x148) == 0)) {
    *(undefined2 *)(_DAT_0002884c + 0x15a) = 0;
  }
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    func_0x00003b28();
    func_0x00003b58();
    if ((unaff_D4w != 0) || ((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)))) {
      func_0x000047a8();
    }
  }
  if ((unaff_D4w != 0) || ((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)))) {
    func_0x00006e70(0x10001,0);
  }
  func_0x000076d0(unaff_A6 + -0x50,0x1520c,_DAT_0002884c + unaff_D6w * 0x14);
  func_0x00003e50(unaff_A6 + -0x50,unaff_D6w);
  func_0x00003318();
  uVar2 = 0;
  func_0x00003320();
  uVar1 = 5;
  func_0x00003320(uVar2);
  FUN_000002d0();
  func_0x00004930();
  func_0x00003ab0(0,uVar1);
  return;
}



// Function: FUN_00001cfe at 00001cfe
// Size: 38 bytes

void FUN_00001cfe(void)

{
  FUN_00000098();
  FUN_000029ba();
  FUN_00001a30();
  func_0x00004930();
  FUN_00001b06();
  return;
}



// Function: FUN_00001d24 at 00001d24
// Size: 212 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d24(undefined4 param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (0 < *(short *)(param_1._0_2_ * 2 + 0x28800)) {
    func_0x00006e90();
    sVar1 = FUN_00002d68();
    if (sVar1 != 0) {
      func_0x00003bd8();
    }
    FUN_000008b8();
    FUN_00002bc4();
    FUN_00001284();
    func_0x000074e8();
    func_0x00006e90();
    if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) != 0) {
      FUN_00002878(0);
    }
    FUN_00000076();
    func_0x00006e90();
    return;
  }
  uVar4 = 0;
  uVar2 = 0;
  func_0x00003ab0(0);
  func_0x00003318();
  uVar3 = 0x19;
  func_0x00003320(uVar2,uVar4);
  uVar2 = 0x32;
  func_0x00003320(uVar3);
  uVar3 = 0x4b;
  func_0x00003320(uVar2);
  func_0x00003320(uVar3);
  FUN_00000dd0();
  *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e06 at 00001e06
// Size: 234 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e06(void)

{
  ushort *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  func_0x00007570();
  if (_DAT_0002883e != 0) {
    sVar3 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar2 = sVar3 + -1, sVar3 != 0) {
      iVar5 = sVar2 * 0x16 + _DAT_00028854;
      sVar4 = (short)*(char *)(iVar5 + 5);
      sVar3 = sVar2;
      if ((sVar4 != -1) && (*(short *)(sVar4 * 2 + _DAT_0002884c + 0xd0) == 1)) {
        puVar1 = (ushort *)(iVar5 + 0xc);
        *puVar1 = *puVar1 & 0xfdbf;
      }
    }
    FUN_000029ba();
  }
  sVar3 = 8;
  while (sVar3 != 0) {
    *(undefined4 *)((short)(sVar3 + -1) * 4 + 0x288b4) = 0;
    sVar3 = sVar3 + -1;
  }
  _DAT_000288ac = 0;
  _DAT_000288b0 = 0;
  func_0x00003a78();
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    func_0x00003b30();
  }
  if (_DAT_00028842 == 0) {
    sVar3 = FUN_00000dd0();
    if (sVar3 == 0) {
      *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    sVar3 = FUN_00000dd0();
    if (sVar3 == 0) {
      *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00001f02 at 00001f02
// Size: 518 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f02(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined1 auStack_54 [80];
  
  sVar4 = 0;
  bVar1 = true;
  bVar2 = false;
  *(undefined2 *)(_DAT_0002884c + 0x15a) =
       *(undefined2 *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x148);
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    if ((*(short *)(sVar3 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      sVar4 = sVar4 + 1;
      bVar1 = false;
    }
  }
  if ((sVar4 == 1) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
    _DAT_000276e4 = 1;
  }
  else {
    _DAT_000276e4 = 0;
  }
  if (bVar1) {
    *(undefined2 *)(_DAT_0002884c + 0x15a) = 1;
  }
  if (((1 < sVar4) && (*(short *)(_DAT_0002884c + 0x124) != 0)) &&
     (*(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x148) == 0)) {
    *(undefined2 *)(_DAT_0002884c + 0x15a) = 0;
  }
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    bVar2 = true;
    func_0x00003b28();
    func_0x00003b58();
    if ((bVar1) || ((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)))) {
      func_0x000047a8();
    }
  }
  if ((bVar1) || ((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)))) {
    func_0x00006e70(1,0);
  }
  iVar9 = _DAT_0002884c + param_1._0_2_ * 0x14;
  uVar10 = 1;
  puVar8 = auStack_54;
  func_0x000076d0((short)puVar8,0x520c,(short)iVar9);
  uVar7 = 0;
  puVar6 = auStack_54;
  func_0x00003e50((short)puVar6);
  func_0x00003318();
  uVar5 = 0;
  func_0x00003320((short)((uint)puVar6 >> 0x10),uVar7,(short)((uint)puVar8 >> 0x10),uVar10,
                  (short)((uint)iVar9 >> 0x10));
  func_0x00003320(uVar5);
  if (*(short *)(param_1._0_2_ * 2 + 0x28800) < 1) {
    uVar10 = 0;
    uVar7 = 0;
    func_0x00003ab0(0);
    func_0x00003318();
    uVar5 = 0x19;
    func_0x00003320(uVar7,uVar10);
    uVar7 = 0x32;
    func_0x00003320(uVar5);
    uVar5 = 0x4b;
    func_0x00003320(uVar7);
    func_0x00003320(uVar5);
  }
  else {
    func_0x00006e90();
    FUN_00000076();
    func_0x00006e90();
    sVar4 = 8;
    while (sVar4 != 0) {
      *(undefined4 *)((short)(sVar4 + -1) * 4 + 0x288b4) = 0;
      sVar4 = sVar4 + -1;
    }
    _DAT_000288ac = 0;
    _DAT_000288b0 = 0;
    func_0x00003a78();
    if (bVar2) {
      func_0x00003b30();
    }
  }
  return;
}



// Function: FUN_00002108 at 00002108
// Size: 716 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002108(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x709) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x709) = 1;
    _DAT_000276ea = 0xffff;
  }
  bVar2 = true;
  if ((_DAT_0002883e == 0) || (*(char *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x192) == '\0')) {
    _DAT_00028840 = 1;
  }
  else {
    _DAT_00028840 = 0;
  }
  _DAT_00028846 = *(short *)(_DAT_0002884c + 0x110);
  if (((_DAT_0002883e == 0) || (_DAT_00028840 != 0)) || (*(short *)(_DAT_0002884c + 0x124) == 0)) {
    _DAT_0002884a = 0;
  }
  else {
    _DAT_0002884a = 1;
  }
  if (_DAT_0002883e != 0) {
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      if ((*(short *)(sVar4 * 2 + _DAT_0002884c + 0xd0) == 0) &&
         (*(char *)(sVar4 * 0x14 + _DAT_0002884c + 0x192) == '\0')) {
        _DAT_00028846 = sVar4;
      }
    }
  }
  if ((_DAT_00028840 != 0) && (_DAT_00028848 == 0)) {
    _DAT_00028848 = 1;
  }
  _DAT_00028844 = _DAT_00028840;
  FUN_00002ae8();
  _DAT_000276e4 = 0;
  if (_DAT_00027fd8 != 0) {
    _DAT_00027fd8 = 0;
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) != 0) {
        *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0x148) = 1;
      }
    }
  }
  sVar4 = 0;
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    if ((*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      sVar4 = sVar4 + 1;
    }
  }
  if (_DAT_00028840 == 0) {
    uVar3 = *(undefined2 *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x148);
  }
  else {
    uVar3 = 1;
  }
  *(undefined2 *)(_DAT_0002884c + 0x15a) = uVar3;
  if (((_DAT_0002883e == 0) && (1 < sVar4)) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
    bVar2 = false;
  }
  if (((_DAT_0002883e != 0) && (_DAT_00028840 == 0)) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
    bVar2 = false;
  }
  FUN_000002d0();
  func_0x00003b28();
  func_0x00004930();
  func_0x00004928();
  func_0x00004920();
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    func_0x00003b58();
  }
  if ((*(short *)(_DAT_0002884c + 0x124) != 0) && (_DAT_00028840 != 0)) {
    func_0x000047a8();
  }
  _DAT_000276ea = param_1._0_2_;
  func_0x000047a8();
  func_0x00003a98();
  FUN_00000098();
  FUN_000029ba();
  FUN_00001a30();
  if (_DAT_00028840 != 0) {
    FUN_00002bc4();
  }
  FUN_00001b06();
  func_0x00003a78();
  func_0x00007568();
  func_0x00003ab0(0);
  if (bVar2) {
    func_0x00003af8(*(undefined2 *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x18c));
    func_0x00006e70(1,0);
  }
  if (_DAT_00028840 == 0) {
    iVar1 = *(int *)(_DAT_000297f4 + 0x80);
    *(undefined2 *)(iVar1 + 0x1d4) = 0;
    func_0x00003e20((short)iVar1,0x3ef);
  }
  else {
    FUN_000023d4();
  }
  return;
}



// Function: FUN_000023d4 at 000023d4
// Size: 664 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000023d4(void)

{
  int iVar1;
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar3;
  int extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *extraout_A0_02;
  int extraout_A0_03;
  int *extraout_A0_04;
  int extraout_A0_05;
  int *extraout_A0_06;
  undefined2 extraout_A0w_00;
  short *psVar2;
  int *extraout_A0_07;
  undefined2 extraout_A0w_01;
  undefined1 auStack_23a [256];
  undefined1 auStack_13a [256];
  undefined1 auStack_3a [50];
  short local_8;
  short local_6;
  
  if (_DAT_000276e6 != (int *)0x0) {
    (**(code **)(*_DAT_000276e6 + 0x198))();
    func_0x000073b0(0x2e);
    uVar3 = 0;
    if (extraout_A0 != 0) {
      func_0x000070e8((char)extraout_A0);
      uVar3 = extraout_A0w;
    }
    func_0x00006dd0(uVar3,(char)_DAT_000276e6);
    (**(code **)(*_DAT_000276e6 + 0x104))((short)_DAT_000276e6,uVar3);
    _DAT_000276e6 = (int *)0x0;
  }
  if (DAT_000264d0 != '\0') {
    func_0x000067e8();
    func_0x000073b0(0xaa);
    if (extraout_A0_00 != 0) {
      func_0x00007170((char)extraout_A0_00);
    }
  }
  if (DAT_000264d0 != '\0') {
    func_0x000069e8();
    func_0x000073b0(0x3a);
    if (extraout_A0_01 != (undefined4 *)0x0) {
      FUN_000013d8((char)extraout_A0_01);
      *extraout_A0_01 = 0x2198c;
      *(undefined4 *)((int)extraout_A0_01 + 0x2e) = 0x20202020;
      *(undefined4 *)((int)extraout_A0_01 + 0x32) = 0;
      *(undefined4 *)((int)extraout_A0_01 + 0x36) = 0;
      *extraout_A0_01 = 0x1adca;
      *extraout_A0_01 = 0x16bb4;
    }
  }
  (**(code **)(*_DAT_000257ee + 0x68))
            ((short)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
  FUN_00001bf0((char)extraout_A0_02);
  (**(code **)(*extraout_A0_02 + 0x400))();
  if (extraout_A0_03 != 0) {
    *(undefined4 *)(extraout_A0_03 + 0x24) = 0x70696374;
    *(undefined4 *)(extraout_A0_03 + 0x20) = 0x70696374;
  }
  (**(code **)(*extraout_A0_02 + 0x188))((short)extraout_A0_02,0x74);
  if ((extraout_A0_04 != (int *)0x0) &&
     ((**(code **)(*extraout_A0_04 + 0x228))(), extraout_A0_05 != 0)) {
    iVar1 = (short)(ushort)*(byte *)(*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 +
                                                _DAT_0002884c + 0xa0) + 0x1f034) * 6;
    *(undefined4 *)(extraout_A0_05 + 0x12) = *(undefined4 *)(iVar1 + 0x29052);
    *(undefined2 *)(extraout_A0_05 + 0x16) = *(undefined2 *)(iVar1 + 0x29056);
  }
  _DAT_000276e6 = extraout_A0_02;
  *(undefined1 *)(_DAT_000297f4 + 0x91) = 1;
  (**(code **)(*extraout_A0_02 + 0x188))((short)extraout_A0_02,0x65);
  if (extraout_A0_06 != (int *)0x0) {
    func_0x00007320((short)auStack_13a,
                    (short)_DAT_0002884c + *(short *)(_DAT_0002884c + 0x110) * 0x14);
    (**(code **)(*extraout_A0_06 + 1000))((short)extraout_A0_06,extraout_A0w_00);
  }
  local_8 = 1;
  local_6 = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar2 = &local_8;
  }
  else {
    psVar2 = &local_6;
  }
  func_0x000076d0((short)auStack_3a,0x5204,(char)*psVar2);
  (**(code **)(*extraout_A0_02 + 0x188))(extraout_A0_02,0x726e);
  if (extraout_A0_07 != (int *)0x0) {
    func_0x00007320((short)auStack_23a,(short)auStack_3a);
    (**(code **)(*extraout_A0_07 + 1000))((short)extraout_A0_07,extraout_A0w_01);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026a0 at 000026a0
// Size: 640 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000026a0(undefined4 param_1)

{
  int iVar1;
  char cVar3;
  short sVar2;
  short sVar4;
  short *psVar5;
  int extraout_A0;
  undefined1 extraout_A0b;
  undefined1 uVar6;
  short local_8;
  short local_6;
  
  local_8 = 1;
  local_6 = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar5 = &local_8;
  }
  else {
    psVar5 = &local_6;
  }
  sVar4 = *psVar5;
  if (param_1._0_2_ == -1) {
    (**(code **)(*_DAT_00027fb8 + 0x2fc))();
    if (extraout_A0 != 0) {
      uVar6 = 0xe;
      (**(code **)(**(int **)(extraout_A0 + 0x8c) + 0x3a0))();
      (**(code **)(**(int **)(extraout_A0 + 0x90) + 0x3a0))
                ((short)*(int **)(extraout_A0 + 0x90),uVar6);
    }
    do {
      cVar3 = func_0x000029d8();
    } while (cVar3 != '\0');
    (**(code **)(*_DAT_000276e6 + 0x3a0))();
    _DAT_000276e6 = (int *)0x0;
    sVar4 = 0;
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      if ((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
         (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 0)) {
        sVar4 = sVar4 + 1;
      }
    }
    if ((1 < sVar4) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
      func_0x00006e70(1,0);
      func_0x00003af8((char)*(undefined2 *)
                             (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x18c));
    }
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    FUN_00002b48(0xffff);
    if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) != 0) {
      FUN_00002878(0);
    }
    FUN_00002a18();
    iVar1 = *(int *)(_DAT_000297f4 + 0x80);
    *(undefined2 *)(iVar1 + 0x1d4) = 0;
    func_0x00003e20((short)iVar1,0xef);
  }
  else if ((*(short *)(_DAT_0002884c + 0x15c) == 0) || (*(short *)(_DAT_0002884c + 0x158) != 0)) {
    if ((*(short *)(_DAT_0002884c + 0x15e) == 0) || (*(short *)(_DAT_0002884c + 0x160) != 0)) {
      if (param_1._0_2_ < 1) {
        func_0x00003aa0();
        func_0x00003aa8();
      }
      if ((_DAT_00028840 != 0) && (param_1._0_2_ < 1)) {
        FUN_000008b8();
        sVar2 = FUN_00002d68();
        if (sVar2 != 0) {
          if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
            FUN_000029e8();
          }
          func_0x00003be8();
          (**(code **)(*_DAT_00027fb4 + 0x268))();
          (**(code **)(*_DAT_00027fbc + 0x268))();
          (**(code **)(*_DAT_00027fc4 + 0x268))();
          (**(code **)(*_DAT_00027fc8 + 0x268))();
          return;
        }
        if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
          FUN_000029e8();
        }
      }
      if (((_DAT_00028840 == 0) || (1 < param_1._0_2_)) || (sVar4 != 1)) {
        if ((param_1._0_2_ < 3) && (sVar2 = FUN_00001284(), sVar2 != 0)) {
          FUN_0000170c();
        }
        func_0x00004920();
        func_0x000048d0();
        func_0x00004970();
        if (((*(short *)(_DAT_0002884c + 0x12e) != 0) && (sVar4 == 2)) &&
           ((*(byte *)(_DAT_0002884c + 0x134) & 0x40) == 0)) {
          *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x40;
          FUN_00002ae0(7);
          func_0x00003c60(extraout_A0b);
        }
      }
      else {
        func_0x000047f0((char)*(undefined2 *)
                               (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x18a));
      }
    }
    else {
      FUN_00002870();
    }
  }
  else {
    func_0x00003348();
  }
  return;
}



// Function: FUN_00002870 at 00002870
// Size: 6 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002870(void)

{
  short sVar1;
  short unaff_D3w;
  short unaff_D4w;
  undefined2 extraout_A0w;
  
  func_0x00003aa0();
  func_0x00003aa8();
  if ((_DAT_00028840 != 0) && (unaff_D3w < 1)) {
    FUN_000008b8();
    sVar1 = FUN_00002d68();
    if (sVar1 != 0) {
      if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
        FUN_000029e8();
      }
      func_0x00003be8();
      (**(code **)(*_DAT_00027fb4 + 0x268))();
      (**(code **)(*_DAT_00027fbc + 0x268))();
      (**(code **)(*_DAT_00027fc4 + 0x268))();
      (**(code **)(*_DAT_00027fc8 + 0x268))();
      return;
    }
    if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
      FUN_000029e8();
    }
  }
  if (((_DAT_00028840 == 0) || (1 < unaff_D3w)) || (unaff_D4w != 1)) {
    if ((unaff_D3w < 3) && (sVar1 = FUN_00001284(), sVar1 != 0)) {
      FUN_0000170c();
    }
    func_0x00004920();
    func_0x000048d0();
    func_0x00004970();
    if (((*(short *)(_DAT_0002884c + 0x12e) != 0) && (unaff_D4w == 2)) &&
       ((*(byte *)(_DAT_0002884c + 0x134) & 0x40) == 0)) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x40;
      FUN_00002ae0(7);
      func_0x00003c60(extraout_A0w);
    }
  }
  else {
    func_0x000047f0(*(undefined2 *)
                     (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x18a));
  }
  return;
}



// Function: FUN_00002878 at 00002878
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002878(void)

{
  short sVar1;
  short unaff_D3w;
  short unaff_D4w;
  undefined2 extraout_A0w;
  
  if ((_DAT_00028840 != 0) && (unaff_D3w < 1)) {
    FUN_000008b8();
    sVar1 = FUN_00002d68();
    if (sVar1 != 0) {
      if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
        FUN_000029e8();
      }
      func_0x00003be8();
      (**(code **)(*_DAT_00027fb4 + 0x268))();
      (**(code **)(*_DAT_00027fbc + 0x268))();
      (**(code **)(*_DAT_00027fc4 + 0x268))();
      (**(code **)(*_DAT_00027fc8 + 0x268))();
      return;
    }
    if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
      FUN_000029e8();
    }
  }
  if (((_DAT_00028840 == 0) || (1 < unaff_D3w)) || (unaff_D4w != 1)) {
    if ((unaff_D3w < 3) && (sVar1 = FUN_00001284(), sVar1 != 0)) {
      FUN_0000170c();
    }
    func_0x00004920();
    func_0x000048d0();
    func_0x00004970();
    if (((*(short *)(_DAT_0002884c + 0x12e) != 0) && (unaff_D4w == 2)) &&
       ((*(byte *)(_DAT_0002884c + 0x134) & 0x40) == 0)) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x40;
      FUN_00002ae0(7);
      func_0x00003c60(extraout_A0w);
    }
  }
  else {
    func_0x000047f0(*(undefined2 *)
                     (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x18a));
  }
  return;
}



// Function: FUN_000028c0 at 000028c0
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028c0(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x268))();
  (**(code **)(*_DAT_00027fbc + 0x268))();
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  return;
}



// Function: FUN_000028c8 at 000028c8
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028c8(void)

{
  code *in_A1;
  
  (*in_A1)();
  (**(code **)(*_DAT_00027fbc + 0x268))();
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  return;
}



// Function: FUN_000028d0 at 000028d0
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028d0(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x268))();
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  return;
}



// Function: FUN_000028d8 at 000028d8
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028d8(void)

{
  code *in_A1;
  
  (*in_A1)();
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  return;
}



// Function: FUN_000028e0 at 000028e0
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028e0(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  return;
}



// Function: FUN_000029ba at 000029ba
// Size: 45 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000029ba(void)

{
  char cVar2;
  short sVar1;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  short asStack_8 [2];
  
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar3 + -1, sVar3 != 0) {
    psVar5 = (short *)(sVar4 * 0x16 + _DAT_00028854);
    sVar3 = sVar4;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar5 + 5)) &&
       (-1 < *psVar5)) {
      if (*(char *)((int)psVar5 + 7) < '\x03') {
        cVar2 = *(char *)(_DAT_00028854 + 7 + sVar4 * 0x16);
      }
      else {
        cVar2 = '\x02';
      }
      if ((*(ushort *)(_DAT_00028854 + 0xc + sVar4 * 0x16) & 0x1000) == 0) {
        iVar6 = sVar4 * 0x16 + _DAT_00028854;
        *(char *)(iVar6 + 7) = *(char *)(iVar6 + 6) + cVar2;
      }
      else {
        *(char *)(_DAT_00028854 + 7 + sVar4 * 0x16) = cVar2 + '\x14';
      }
      psVar5 = (short *)(sVar4 * 0x16 + _DAT_00028854);
      if ((psVar5[9] == *psVar5) && (psVar5[10] == psVar5[1])) {
        psVar5[9] = -1;
        *(undefined2 *)(_DAT_00028854 + 0x14 + sVar4 * 0x16) = 0xffff;
      }
    }
  }
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar3 + -1, sVar3 != 0) {
    iVar6 = sVar4 * 0x16 + _DAT_00028854;
    sVar3 = sVar4;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar6 + 5)) &&
       (*(char *)(iVar6 + 4) == '\x1c')) {
      sVar1 = FUN_00000d7a(iVar6);
      if (sVar1 != 0) {
        FUN_00002b28(*(undefined4 *)(sVar4 * 0x16 + _DAT_00028854),asStack_8);
        for (sVar4 = 0; sVar4 < asStack_8[0]; sVar4 = sVar4 + 1) {
          sVar1 = (short)*(char *)(*(int *)(sVar4 * 4 + 0x288d4) + 6) +
                  (short)*(char *)(*(int *)(sVar4 * 4 + 0x288d4) + 7);
          if (0x62 < sVar1) {
            sVar1 = 99;
          }
          *(char *)(*(int *)(sVar4 * 4 + 0x288d4) + 7) = (char)sVar1;
        }
      }
    }
  }
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar3 + -1, sVar3 != 0) {
    sVar3 = sVar4;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(_DAT_00028854 + 5 + sVar4 * 0x16))
       && ((cVar2 = *(char *)(_DAT_00028854 + 7 + sVar4 * 0x16), 'c' < cVar2 || (cVar2 < '\0')))) {
      *(undefined1 *)(_DAT_00028854 + 7 + sVar4 * 0x16) = 99;
    }
  }
  return;
}



// Function: FUN_000029e8 at 000029e8
// Size: 49 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000029e8(void)

{
  int in_D0;
  char cVar2;
  short sVar1;
  short unaff_D3w;
  short sVar3;
  short sVar4;
  int in_A0;
  short *psVar5;
  short *unaff_A3;
  int iVar6;
  int unaff_A6;
  
  while( true ) {
    if ((*(short *)(in_A0 + 0x110) == in_D0) && (-1 < *unaff_A3)) {
      if (*(char *)((int)unaff_A3 + 7) < '\x03') {
        cVar2 = *(char *)(_DAT_00028854 + 7 + unaff_D3w * 0x16);
      }
      else {
        cVar2 = '\x02';
      }
      if ((*(ushort *)(_DAT_00028854 + 0xc + unaff_D3w * 0x16) & 0x1000) == 0) {
        iVar6 = unaff_D3w * 0x16 + _DAT_00028854;
        *(char *)(iVar6 + 7) = *(char *)(iVar6 + 6) + cVar2;
      }
      else {
        *(char *)(_DAT_00028854 + 7 + unaff_D3w * 0x16) = cVar2 + '\x14';
      }
      psVar5 = (short *)(unaff_D3w * 0x16 + _DAT_00028854);
      if ((psVar5[9] == *psVar5) && (psVar5[10] == psVar5[1])) {
        psVar5[9] = -1;
        *(undefined2 *)(_DAT_00028854 + 0x14 + unaff_D3w * 0x16) = 0xffff;
      }
    }
    if (unaff_D3w == 0) break;
    unaff_A3 = (short *)((short)(unaff_D3w + -1) * 0x16 + _DAT_00028854);
    in_D0 = (int)*(char *)((int)unaff_A3 + 5);
    in_A0 = _DAT_0002884c;
    unaff_D3w = unaff_D3w + -1;
  }
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar3 + -1, sVar3 != 0) {
    iVar6 = sVar4 * 0x16 + _DAT_00028854;
    sVar3 = sVar4;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar6 + 5)) &&
       (*(char *)(iVar6 + 4) == '\x1c')) {
      sVar1 = FUN_00000d7a(iVar6);
      if (sVar1 != 0) {
        FUN_00002b28(*(undefined4 *)(sVar4 * 0x16 + _DAT_00028854),unaff_A6 + -4);
        for (sVar4 = 0; sVar4 < *(short *)(unaff_A6 + -4); sVar4 = sVar4 + 1) {
          sVar1 = (short)*(char *)(*(int *)(sVar4 * 4 + 0x288d4) + 6) +
                  (short)*(char *)(*(int *)(sVar4 * 4 + 0x288d4) + 7);
          if (0x62 < sVar1) {
            sVar1 = 99;
          }
          *(char *)(*(int *)(sVar4 * 4 + 0x288d4) + 7) = (char)sVar1;
        }
      }
    }
  }
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar3 + -1, sVar3 != 0) {
    sVar3 = sVar4;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(_DAT_00028854 + 5 + sVar4 * 0x16))
       && ((*(undefined1 *)(unaff_A6 + -1) = *(undefined1 *)(_DAT_00028854 + 7 + sVar4 * 0x16),
           'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
      *(undefined1 *)(_DAT_00028854 + 7 + sVar4 * 0x16) = 99;
    }
  }
  return;
}



// Function: FUN_00002a18 at 00002a18
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a18(void)

{
  short sVar1;
  short unaff_D3w;
  short sVar2;
  char unaff_D4b;
  short sVar3;
  short *psVar4;
  int iVar5;
  int unaff_A6;
  
  do {
    if ((*(ushort *)(_DAT_00028854 + 0xc + unaff_D3w * 0x16) & 0x1000) == 0) {
      iVar5 = unaff_D3w * 0x16 + _DAT_00028854;
      *(char *)(iVar5 + 7) = *(char *)(iVar5 + 6) + unaff_D4b;
    }
    else {
      *(char *)(_DAT_00028854 + 7 + unaff_D3w * 0x16) = unaff_D4b + '\x14';
    }
    psVar4 = (short *)(unaff_D3w * 0x16 + _DAT_00028854);
    sVar2 = unaff_D3w;
    if ((psVar4[9] == *psVar4) && (psVar4[10] == psVar4[1])) {
      psVar4[9] = -1;
      *(undefined2 *)(_DAT_00028854 + 0x14 + unaff_D3w * 0x16) = 0xffff;
    }
    do {
      unaff_D3w = sVar2 + -1;
      if (sVar2 == 0) {
        sVar2 = *(short *)(_DAT_0002884c + 0x182);
        while (sVar3 = sVar2 + -1, sVar2 != 0) {
          iVar5 = sVar3 * 0x16 + _DAT_00028854;
          sVar2 = sVar3;
          if ((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar5 + 5)) &&
              (*(char *)(iVar5 + 4) == '\x1c')) && (sVar1 = FUN_00000d7a(iVar5), sVar1 != 0)) {
            FUN_00002b28(*(undefined4 *)(sVar3 * 0x16 + _DAT_00028854),unaff_A6 + -4);
            for (sVar3 = 0; sVar3 < *(short *)(unaff_A6 + -4); sVar3 = sVar3 + 1) {
              sVar1 = (short)*(char *)(*(int *)(sVar3 * 4 + 0x288d4) + 6) +
                      (short)*(char *)(*(int *)(sVar3 * 4 + 0x288d4) + 7);
              if (0x62 < sVar1) {
                sVar1 = 99;
              }
              *(char *)(*(int *)(sVar3 * 4 + 0x288d4) + 7) = (char)sVar1;
            }
          }
        }
        sVar2 = *(short *)(_DAT_0002884c + 0x182);
        while (sVar3 = sVar2 + -1, sVar2 != 0) {
          sVar2 = sVar3;
          if (((int)*(short *)(_DAT_0002884c + 0x110) ==
               (int)*(char *)(_DAT_00028854 + 5 + sVar3 * 0x16)) &&
             ((*(undefined1 *)(unaff_A6 + -1) = *(undefined1 *)(_DAT_00028854 + 7 + sVar3 * 0x16),
              'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
            *(undefined1 *)(_DAT_00028854 + 7 + sVar3 * 0x16) = 99;
          }
        }
        return;
      }
      psVar4 = (short *)(unaff_D3w * 0x16 + _DAT_00028854);
      sVar2 = unaff_D3w;
    } while (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)((int)psVar4 + 5)) ||
            (*psVar4 < 0));
    if (*(char *)((int)psVar4 + 7) < '\x03') {
      unaff_D4b = *(char *)(_DAT_00028854 + 7 + unaff_D3w * 0x16);
    }
    else {
      unaff_D4b = '\x02';
    }
  } while( true );
}



// Function: FUN_00002ad8 at 00002ad8
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ad8(void)

{
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  int unaff_A4;
  int unaff_A6;
  
  do {
    sVar1 = FUN_00000d7a(unaff_A4);
    sVar2 = unaff_D3w;
    if (sVar1 != 0) {
      FUN_00002b28(*(undefined4 *)(unaff_D3w * 0x16 + _DAT_00028854),unaff_A6 + -4);
      for (sVar1 = 0; sVar1 < *(short *)(unaff_A6 + -4); sVar1 = sVar1 + 1) {
        sVar3 = (short)*(char *)(*(int *)(sVar1 * 4 + 0x288d4) + 6) +
                (short)*(char *)(*(int *)(sVar1 * 4 + 0x288d4) + 7);
        if (0x62 < sVar3) {
          sVar3 = 99;
        }
        *(char *)(*(int *)(sVar1 * 4 + 0x288d4) + 7) = (char)sVar3;
      }
    }
    do {
      unaff_D3w = sVar2 + -1;
      if (sVar2 == 0) {
        sVar2 = *(short *)(_DAT_0002884c + 0x182);
        while (sVar1 = sVar2 + -1, sVar2 != 0) {
          sVar2 = sVar1;
          if (((int)*(short *)(_DAT_0002884c + 0x110) ==
               (int)*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16)) &&
             ((*(undefined1 *)(unaff_A6 + -1) = *(undefined1 *)(_DAT_00028854 + 7 + sVar1 * 0x16),
              'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
            *(undefined1 *)(_DAT_00028854 + 7 + sVar1 * 0x16) = 99;
          }
        }
        return;
      }
      unaff_A4 = unaff_D3w * 0x16 + _DAT_00028854;
      sVar2 = unaff_D3w;
    } while (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(unaff_A4 + 5)) ||
            (*(char *)(unaff_A4 + 4) != '\x1c'));
  } while( true );
}



// Function: FUN_00002ae0 at 00002ae0
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ae0(void)

{
  short in_D0w;
  short unaff_D3w;
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int unaff_A6;
  
  do {
    sVar1 = unaff_D3w;
    if (in_D0w != 0) {
      FUN_00002b28(*(undefined4 *)(unaff_D3w * 0x16 + _DAT_00028854));
      for (sVar2 = 0; sVar2 < *(short *)(unaff_A6 + -4); sVar2 = sVar2 + 1) {
        sVar3 = (short)*(char *)(*(int *)(sVar2 * 4 + 0x288d4) + 6) +
                (short)*(char *)(*(int *)(sVar2 * 4 + 0x288d4) + 7);
        if (0x62 < sVar3) {
          sVar3 = 99;
        }
        *(char *)(*(int *)(sVar2 * 4 + 0x288d4) + 7) = (char)sVar3;
      }
    }
    do {
      unaff_D3w = sVar1 + -1;
      if (sVar1 == 0) {
        sVar1 = *(short *)(_DAT_0002884c + 0x182);
        while (sVar2 = sVar1 + -1, sVar1 != 0) {
          sVar1 = sVar2;
          if (((int)*(short *)(_DAT_0002884c + 0x110) ==
               (int)*(char *)(_DAT_00028854 + 5 + sVar2 * 0x16)) &&
             ((*(undefined1 *)(unaff_A6 + -1) = *(undefined1 *)(_DAT_00028854 + 7 + sVar2 * 0x16),
              'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
            *(undefined1 *)(_DAT_00028854 + 7 + sVar2 * 0x16) = 99;
          }
        }
        return;
      }
      iVar4 = unaff_D3w * 0x16 + _DAT_00028854;
      sVar1 = unaff_D3w;
    } while (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(iVar4 + 5)) ||
            (*(char *)(iVar4 + 4) != '\x1c'));
    in_D0w = FUN_00000d7a();
  } while( true );
}



// Function: FUN_00002ae8 at 00002ae8
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ae8(void)

{
  short sVar1;
  short in_D0w;
  short unaff_D3w;
  short sVar2;
  int iVar3;
  int unaff_A6;
  
  do {
    FUN_00002b28(*(undefined4 *)((int)in_D0w * (int)unaff_D3w + _DAT_00028854),unaff_A6 + -4);
    for (sVar1 = 0; sVar2 = unaff_D3w, sVar1 < *(short *)(unaff_A6 + -4); sVar1 = sVar1 + 1) {
      sVar2 = (short)*(char *)(*(int *)(sVar1 * 4 + 0x288d4) + 6) +
              (short)*(char *)(*(int *)(sVar1 * 4 + 0x288d4) + 7);
      if (0x62 < sVar2) {
        sVar2 = 99;
      }
      *(char *)(*(int *)(sVar1 * 4 + 0x288d4) + 7) = (char)sVar2;
    }
    do {
      do {
        unaff_D3w = sVar2 + -1;
        if (sVar2 == 0) {
          sVar1 = *(short *)(_DAT_0002884c + 0x182);
          while (sVar2 = sVar1 + -1, sVar1 != 0) {
            sVar1 = sVar2;
            if (((int)*(short *)(_DAT_0002884c + 0x110) ==
                 (int)*(char *)(_DAT_00028854 + 5 + sVar2 * 0x16)) &&
               ((*(undefined1 *)(unaff_A6 + -1) = *(undefined1 *)(_DAT_00028854 + 7 + sVar2 * 0x16),
                'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
              *(undefined1 *)(_DAT_00028854 + 7 + sVar2 * 0x16) = 99;
            }
          }
          return;
        }
        iVar3 = unaff_D3w * 0x16 + _DAT_00028854;
        sVar2 = unaff_D3w;
      } while (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(iVar3 + 5)) ||
              (*(char *)(iVar3 + 4) != '\x1c'));
      sVar1 = FUN_00000d7a(iVar3);
    } while (sVar1 == 0);
    in_D0w = 0x16;
  } while( true );
}



// Function: FUN_00002b28 at 00002b28
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b28(void)

{
  short sVar1;
  short in_D0w;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  int in_A0;
  int iVar3;
  int unaff_A6;
  
  do {
    sVar2 = in_D0w + *(char *)(in_A0 + 7);
    if (0x62 < sVar2) {
      sVar2 = 99;
    }
    *(char *)(*(int *)(unaff_D4w * 4 + 0x288d4) + 7) = (char)sVar2;
    unaff_D4w = unaff_D4w + 1;
    while (sVar2 = unaff_D3w, *(short *)(unaff_A6 + -4) <= unaff_D4w) {
      do {
        do {
          unaff_D3w = sVar2 + -1;
          if (sVar2 == 0) {
            sVar2 = *(short *)(_DAT_0002884c + 0x182);
            while (sVar1 = sVar2 + -1, sVar2 != 0) {
              sVar2 = sVar1;
              if (((int)*(short *)(_DAT_0002884c + 0x110) ==
                   (int)*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16)) &&
                 ((*(undefined1 *)(unaff_A6 + -1) =
                        *(undefined1 *)(_DAT_00028854 + 7 + sVar1 * 0x16),
                  'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
                *(undefined1 *)(_DAT_00028854 + 7 + sVar1 * 0x16) = 99;
              }
            }
            return;
          }
          iVar3 = unaff_D3w * 0x16 + _DAT_00028854;
          sVar2 = unaff_D3w;
        } while (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(iVar3 + 5)) ||
                (*(char *)(iVar3 + 4) != '\x1c'));
        sVar1 = FUN_00000d7a(iVar3);
      } while (sVar1 == 0);
      FUN_00002b28(*(undefined4 *)(unaff_D3w * 0x16 + _DAT_00028854),unaff_A6 + -4);
      unaff_D4w = 0;
    }
    in_D0w = (short)*(char *)(*(int *)(unaff_D4w * 4 + 0x288d4) + 6);
    in_A0 = *(int *)(unaff_D4w * 4 + 0x288d4);
  } while( true );
}



// Function: FUN_00002b48 at 00002b48
// Size: 31 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b48(void)

{
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  int iVar3;
  int unaff_A6;
  
  do {
    unaff_D4w = unaff_D4w + 1;
    while (sVar2 = unaff_D3w, *(short *)(unaff_A6 + -4) <= unaff_D4w) {
      do {
        do {
          unaff_D3w = sVar2 + -1;
          if (sVar2 == 0) {
            sVar2 = *(short *)(_DAT_0002884c + 0x182);
            while (sVar1 = sVar2 + -1, sVar2 != 0) {
              sVar2 = sVar1;
              if (((int)*(short *)(_DAT_0002884c + 0x110) ==
                   (int)*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16)) &&
                 ((*(undefined1 *)(unaff_A6 + -1) =
                        *(undefined1 *)(_DAT_00028854 + 7 + sVar1 * 0x16),
                  'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
                *(undefined1 *)(_DAT_00028854 + 7 + sVar1 * 0x16) = 99;
              }
            }
            return;
          }
          iVar3 = unaff_D3w * 0x16 + _DAT_00028854;
          sVar2 = unaff_D3w;
        } while (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(iVar3 + 5)) ||
                (*(char *)(iVar3 + 4) != '\x1c'));
        sVar1 = FUN_00000d7a(iVar3);
      } while (sVar1 == 0);
      FUN_00002b28(*(undefined4 *)(unaff_D3w * 0x16 + _DAT_00028854),unaff_A6 + -4);
      unaff_D4w = 0;
    }
    sVar2 = (short)*(char *)(*(int *)(unaff_D4w * 4 + 0x288d4) + 6) +
            (short)*(char *)(*(int *)(unaff_D4w * 4 + 0x288d4) + 7);
    if (0x62 < sVar2) {
      sVar2 = 99;
    }
    *(char *)(*(int *)(unaff_D4w * 4 + 0x288d4) + 7) = (char)sVar2;
  } while( true );
}



// Function: FUN_00002b68 at 00002b68
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b68(void)

{
  short in_D0w;
  short unaff_D3w;
  int unaff_A6;
  
  while( true ) {
    if (((int)*(short *)(_DAT_0002884c + 0x110) ==
         (int)*(char *)(_DAT_00028854 + 5 + (int)in_D0w * (int)unaff_D3w)) &&
       ((*(undefined1 *)(unaff_A6 + -1) = *(undefined1 *)(_DAT_00028854 + 7 + unaff_D3w * 0x16),
        'c' < *(char *)(unaff_A6 + -1) || (*(char *)(unaff_A6 + -1) < '\0')))) {
      *(undefined1 *)(_DAT_00028854 + 7 + unaff_D3w * 0x16) = 99;
    }
    if (unaff_D3w == 0) break;
    in_D0w = 0x16;
    unaff_D3w = unaff_D3w + -1;
  }
  return;
}



// Function: FUN_00002bc4 at 00002bc4
// Size: 142 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002bc4(void)

{
  int iVar1;
  
  func_0x00004928();
  func_0x00004920();
  iVar1 = *(short *)(_DAT_0002884c + 0x110) * 2;
  iVar1 = ((int)*(short *)(iVar1 + 0x28820) - (int)*(short *)(iVar1 + 0x28810)) +
          (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (30000 < iVar1) {
    iVar1 = 30000;
  }
  *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) = (short)iVar1;
  func_0x00007488();
  return;
}



// Function: FUN_00002c52 at 00002c52
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c52(void)

{
  ushort *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  sVar4 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar2 = sVar4 + -1, sVar4 != 0) {
    iVar5 = sVar2 * 0x16 + _DAT_00028854;
    sVar4 = sVar2;
    if (((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar5 + 5)) &&
       (*(short *)(iVar5 + 0xc) != 0)) {
      sVar3 = func_0x00004938(*(undefined2 *)(iVar5 + 2));
      if (-1 < sVar3) {
        puVar1 = (ushort *)(_DAT_00028854 + 0xc + sVar2 * 0x16);
        *puVar1 = *puVar1 & 0xefff;
      }
    }
  }
  return;
}



// Function: FUN_00002cc4 at 00002cc4
// Size: 142 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002cc4(void)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int extraout_A0;
  undefined4 extraout_A0_00;
  byte *pbVar6;
  int iVar7;
  
  bVar1 = true;
  sVar4 = 0;
  uVar5 = 0;
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      if ((*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0) &&
         (*(short *)(sVar3 * 2 + _DAT_0002884c + 0x138) != 0)) {
        sVar4 = sVar4 + 1;
      }
      if (*(short *)(sVar3 * 2 + _DAT_0002884c + 0x138) == 0) {
        uVar5 = (ushort)(1 << ((int)sVar3 & 0x3fU)) | uVar5;
      }
    }
    FUN_00002d52(_DAT_00028860);
    _DAT_0002885c = extraout_A0;
    for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x15c2); sVar3 = sVar3 + 1) {
      if (*(char *)((*(uint *)(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                               _DAT_00028850 + *(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c4) * 2
                              ) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
        iVar7 = sVar3 * 0x42 + _DAT_0002884c;
        pbVar6 = (byte *)((int)*(short *)(iVar7 + 0x15c4) +
                         *(short *)(iVar7 + 0x15c6) * 0x70 + extraout_A0);
        if ((byte)(pbVar6[1] | *pbVar6 | pbVar6[0x70] | pbVar6[0x71] | (byte)uVar5) != 0xff) {
          bVar1 = false;
          break;
        }
      }
    }
    if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1) {
      *(undefined2 *)(_DAT_0002884c + 0x124) = 0;
      func_0x00003b60();
      if (sVar4 < 1) {
        uVar2 = 0xf;
      }
      else {
        uVar2 = 0x19;
      }
      FUN_00002ad8(0x130000,CONCAT22(uVar2,*(undefined2 *)(_DAT_0002884c + 0x110)));
      func_0x00003e50(extraout_A0_00);
    }
  }
  return;
}



// Function: FUN_00002d52 at 00002d52
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002d52(void)

{
  int in_D0;
  undefined2 uVar2;
  undefined4 uVar1;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  byte unaff_D6b;
  undefined4 extraout_A0;
  undefined1 *puVar3;
  int iVar4;
  int unaff_A6;
  
  do {
    if (*(char *)((*(uint *)(*(short *)(in_D0 + _DAT_0002884c + 0x15c6) * 0xe0 + _DAT_00028850 +
                            *(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\n') {
      iVar4 = unaff_D3w * 0x42 + _DAT_0002884c;
      puVar3 = (undefined1 *)
               ((int)*(short *)(iVar4 + 0x15c4) + *(short *)(iVar4 + 0x15c6) * 0x70 + _DAT_0002885c)
      ;
      *(undefined1 *)(unaff_A6 + -4) = *puVar3;
      *(undefined1 *)(unaff_A6 + -3) = puVar3[1];
      *(undefined1 *)(unaff_A6 + -2) = puVar3[0x70];
      *(undefined1 *)(unaff_A6 + -1) = puVar3[0x71];
      if ((byte)(*(byte *)(unaff_A6 + -3) | *(byte *)(unaff_A6 + -4) | *(byte *)(unaff_A6 + -2) |
                 *(byte *)(unaff_A6 + -1) | unaff_D6b) != 0xff) {
        unaff_D4w = 0;
LAB_00002e0e:
        if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar1 = 0;
        if (unaff_D4w != 0) {
          *(undefined2 *)(_DAT_0002884c + 0x124) = 0;
          func_0x00003b60();
          if (unaff_D5w < 1) {
            uVar2 = 0xf;
          }
          else {
            uVar2 = 0x19;
          }
          FUN_00002ad8(0x130000,CONCAT22(uVar2,*(undefined2 *)(_DAT_0002884c + 0x110)));
          uVar1 = func_0x00003e50(extraout_A0);
        }
        return uVar1;
      }
    }
    unaff_D3w = unaff_D3w + 1;
    if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D3w) goto LAB_00002e0e;
    in_D0 = unaff_D3w * 0x42;
  } while( true );
}



// Function: FUN_00002d68 at 00002d68
// Size: 252 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002d68(void)

{
  int in_D0;
  undefined2 uVar2;
  undefined4 uVar1;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  byte unaff_D6b;
  int in_A0;
  undefined4 extraout_A0;
  undefined1 *puVar3;
  int iVar4;
  int unaff_A6;
  
  do {
    if (*(char *)((*(uint *)(in_D0 + in_A0 +
                            *(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\n') {
      iVar4 = unaff_D3w * 0x42 + _DAT_0002884c;
      puVar3 = (undefined1 *)
               ((int)*(short *)(iVar4 + 0x15c4) + *(short *)(iVar4 + 0x15c6) * 0x70 + _DAT_0002885c)
      ;
      *(undefined1 *)(unaff_A6 + -4) = *puVar3;
      *(undefined1 *)(unaff_A6 + -3) = puVar3[1];
      *(undefined1 *)(unaff_A6 + -2) = puVar3[0x70];
      *(undefined1 *)(unaff_A6 + -1) = puVar3[0x71];
      if ((byte)(*(byte *)(unaff_A6 + -3) | *(byte *)(unaff_A6 + -4) | *(byte *)(unaff_A6 + -2) |
                 *(byte *)(unaff_A6 + -1) | unaff_D6b) != 0xff) {
        unaff_D4w = 0;
LAB_00002e0e:
        if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar1 = 0;
        if (unaff_D4w != 0) {
          *(undefined2 *)(_DAT_0002884c + 0x124) = 0;
          func_0x00003b60();
          if (unaff_D5w < 1) {
            uVar2 = 0xf;
          }
          else {
            uVar2 = 0x19;
          }
          FUN_00002ad8(0x130000,CONCAT22(uVar2,*(undefined2 *)(_DAT_0002884c + 0x110)));
          uVar1 = func_0x00003e50(extraout_A0);
        }
        return uVar1;
      }
    }
    unaff_D3w = unaff_D3w + 1;
    if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D3w) goto LAB_00002e0e;
    in_D0 = *(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0;
    in_A0 = _DAT_00028850;
  } while( true );
}



