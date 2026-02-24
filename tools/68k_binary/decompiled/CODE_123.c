// Warlords II - Decompiled 68k Code
// Segment: CODE_123
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000074 at 00000074
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000074(void)

{
  if (_DAT_000288ac == 0) {
    FUN_00000098();
  }
  else {
    FUN_00000248();
  }
  func_0x00004970();
  return;
}



// Function: FUN_00000098 at 00000098
// Size: 432 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000098(void)

{
  short sVar1;
  short sVar2;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  
  if (_DAT_00028840 != 0) {
    func_0x000073f0();
    FUN_00000262();
    if (extraout_A0 == 0) {
      func_0x000073f8();
      func_0x00003ae0();
      func_0x00002a20();
    }
    else {
      func_0x00007400(extraout_A0);
      func_0x00002a28();
    }
    func_0x000048d0();
    func_0x00004970();
  }
  if ((*(short *)(_DAT_0002884c + 0x12e) != 0) && (_DAT_000288ac != (short *)0x0)) {
    if ((*(byte *)(_DAT_0002884c + 0x134) & 8) == 0) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 8;
      func_0x00002ae0(0x190003);
      func_0x00003c60(extraout_A0_00);
    }
    if ((*(byte *)(_DAT_0002884c + 0x134) & 0x10) == 0) {
      for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
        sVar1 = func_0x00004938(CONCAT22(*(short *)(&DAT_00015c1a + sVar2 * 2) + *_DAT_000288ac,
                                         *(short *)(&DAT_00015c0a + sVar2 * 2) + _DAT_000288ac[1]));
        if ((-1 < sVar1) &&
           ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) !=
            (int)*(short *)(_DAT_0002884c + 0x110))) {
          *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x10;
          func_0x00002ae0(0x190004);
          func_0x00003c60(extraout_A0_01);
          break;
        }
      }
    }
    if ((((*(byte *)(_DAT_0002884c + 0x134) & 0x80) == 0) &&
        (*(char *)((*(uint *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + *_DAT_000288ac * 2) >> 0x18)
                   + _DAT_0002884c + 0x711) == '\v')) && (*(char *)(_DAT_000288ac + 2) == '\x1c')) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x80;
      func_0x00002ae0(0x190005);
      func_0x00003c60(extraout_A0_02);
    }
  }
  return;
}



// Function: FUN_00000248 at 00000248
// Size: 26 bytes

void FUN_00000248(void)

{
  func_0x000073f0();
  func_0x00007408();
  FUN_00000098();
  return;
}



// Function: FUN_00000262 at 00000262
// Size: 390 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00000262(void)

{
  ushort *puVar1;
  short sVar2;
  short sVar4;
  short sVar5;
  int iVar3;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short *psVar10;
  short local_6;
  
  local_6 = 10000;
  sVar6 = *(short *)(_DAT_0002884c + 0x182);
  sVar8 = -1;
  sVar9 = 10000;
  sVar7 = -1;
  while( true ) {
    sVar2 = sVar6 + -1;
    if (sVar6 == 0) break;
    psVar10 = (short *)(sVar2 * 0x16 + _DAT_00028854);
    sVar6 = sVar2;
    if ((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar10 + 5)) &&
       (sVar5 = *psVar10, -1 < sVar5)) {
      if (((psVar10[6] & 1U) != 0) && ((psVar10[6] & 0x40U) == 0)) {
        sVar4 = func_0x000076d8((int)*(short *)(_DAT_00028854 + 2 + sVar2 * 0x16) -
                                (int)_DAT_00027e84);
        sVar5 = func_0x000076d8((int)sVar5 - (int)_DAT_00027e82);
        sVar4 = sVar4 + sVar5;
        if (sVar4 == 0) {
          sVar4 = 9000;
        }
        if ((*(ushort *)(_DAT_00028854 + 0xc + sVar2 * 0x16) & 0x200) == 0) {
          if (sVar4 < sVar9) {
            sVar9 = sVar4;
            sVar7 = sVar2;
          }
        }
        else if (sVar4 < local_6) {
          sVar8 = sVar2;
          local_6 = sVar4;
        }
      }
    }
  }
  if (sVar7 == -1) {
    if (sVar8 == -1) {
      iVar3 = 0;
    }
    else {
      psVar10 = (short *)(sVar8 * 0x16 + _DAT_00028854);
      _DAT_00027e82 = *psVar10;
      _DAT_00027e84 = psVar10[1];
      sVar6 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar9 = sVar6 + -1, sVar6 != 0) {
        iVar3 = sVar9 * 0x16 + _DAT_00028854;
        sVar6 = sVar9;
        if (*(char *)(_DAT_0002884c + 0x111) == *(char *)(iVar3 + 5)) {
          puVar1 = (ushort *)(iVar3 + 0xc);
          *puVar1 = *puVar1 & 0xfdff;
        }
      }
      iVar3 = sVar8 * 0x16;
    }
  }
  else {
    iVar3 = sVar7 * 0x16;
    _DAT_00027e82 = *(short *)(iVar3 + _DAT_00028854);
    _DAT_00027e84 = ((short *)(iVar3 + _DAT_00028854))[1];
  }
  return iVar3;
}



// Function: FUN_000003e8 at 000003e8
// Size: 564 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000003e8(short *param_1)

{
  ushort *puVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  char cVar11;
  short sVar12;
  short *psVar13;
  short local_a;
  
  local_a = 0;
  if (*(short *)(_DAT_0002884c + 0x110) == 0xf) {
    iVar8 = 8;
  }
  else {
    iVar8 = (int)*(short *)(_DAT_0002884c + 0x110);
  }
  iVar8 = iVar8 * 0x1d + _DAT_0002884c;
  if ((_DAT_00028952 == 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) && (sVar9 = func_0x00002b48(param_1[1]), sVar9 != 0)) {
    return 0;
  }
  cVar3 = *(char *)((int)param_1 + 0x11);
  sVar9 = *param_1;
  sVar2 = param_1[1];
  sVar10 = 8;
  while (sVar10 != 0) {
    *(undefined4 *)(&DAT_000288b4 + (short)(sVar10 + -1) * 4) = 0;
    sVar10 = sVar10 + -1;
  }
  sVar10 = *(short *)(_DAT_0002884c + 0x182);
  cVar11 = -1;
  sVar12 = 0;
  while (sVar6 = sVar10 + -1, sVar10 != 0) {
    psVar13 = (short *)(sVar6 * 0x16 + _DAT_00028854);
    sVar10 = sVar6;
    if ((((sVar9 == *psVar13) && (sVar2 == psVar13[1])) &&
        (*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar13 + 5))) &&
       (((cVar3 == *(char *)((int)psVar13 + 0x11) && (cVar3 != '\0')) ||
        (param_1 == (short *)(sVar6 * 0x16 + _DAT_00028854))))) {
      puVar1 = (ushort *)(_DAT_00028854 + 0xc + sVar6 * 0x16);
      *puVar1 = *puVar1 | 0x200;
      sVar5 = local_a + 1;
      *(int *)(&DAT_000288b4 + local_a * 4) = sVar6 * 0x16 + _DAT_00028854;
      cVar4 = *(char *)(iVar8 + 0x60c + (int)(short)*(char *)(_DAT_00028854 + 4 + sVar6 * 0x16));
      local_a = sVar5;
      if (cVar11 < cVar4) {
        cVar11 = cVar4;
        sVar12 = sVar6;
      }
    }
  }
  _DAT_000288ac = sVar12 * 0x16 + _DAT_00028854;
  func_0x00004980(*(undefined2 *)(_DAT_000288ac + 0x14));
  if (_DAT_000288f4 != 0) {
    func_0x00002b38(2,0);
  }
  FUN_0000077a();
  *(undefined1 *)(_DAT_00027fb8 + 0x80) = 0;
  FUN_000006e2();
  if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) ||
     ((*(short *)(_DAT_0002884c + 0x15a) != 0 &&
      ((_DAT_000276e4 == 0 ||
       (sVar9 = func_0x00003b38(*(undefined2 *)(_DAT_000288ac + 2)),
       *(char *)(sVar9 + 0x150fc) != '\x0e')))))) {
    func_0x00003a60((short)_DAT_00027fb8,*(undefined2 *)(_DAT_000288ac + 2));
  }
  return 1;
}



// Function: FUN_0000061c at 0000061c
// Size: 198 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000061c(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  
  if (_DAT_000288ac == (short *)0x0) {
    uVar2 = 0;
  }
  else {
    if (_DAT_000288f4 == 0) {
      if (*_DAT_000288ac != -1) {
        _DAT_000288ac[6] = _DAT_000288ac[6] | 0x40;
      }
    }
    else {
      sVar3 = 8;
      while (sVar1 = sVar3 + -1, sVar3 != 0) {
        sVar3 = sVar1;
        if ((*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) &&
           (**(short **)(&DAT_000288b4 + sVar1 * 4) != -1)) {
          *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) =
               *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) | 0x40;
        }
      }
    }
    _DAT_000276d2 = 0;
    if (_DAT_000288ac == (short *)0x0) {
      sVar3 = func_0x00002850(0xffff);
      if (sVar3 != 0) {
        func_0x00002858(0xffff);
      }
    }
    else {
      sVar3 = func_0x00002850(_DAT_000288ac[1]);
      if (sVar3 != 0) {
        func_0x00002858(_DAT_000288ac[1]);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_000006e2 at 000006e2
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000006e2(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  _DAT_000288f4 = param_1._0_2_;
  if (_DAT_000288b8 == 0) {
    _DAT_000288f4 = 0;
  }
  _DAT_000288b0 = 0;
  if (param_1._0_2_ == 0) {
    *(ushort *)(_DAT_000288ac + 0xc) = *(ushort *)(_DAT_000288ac + 0xc) | 1;
    if (*(char *)(_DAT_000288ac + 4) == '\x1c') {
      _DAT_000288b0 = _DAT_000288ac;
    }
  }
  else {
    sVar2 = 8;
    while (sVar1 = sVar2 + -1, sVar2 != 0) {
      sVar2 = sVar1;
      if ((*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) &&
         (*(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) =
               *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) | 1,
         *(char *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 4) == '\x1c')) {
        _DAT_000288b0 = *(int *)(&DAT_000288b4 + sVar1 * 4);
      }
    }
  }
  return 1;
}



// Function: FUN_0000077a at 0000077a
// Size: 14 bytes

void FUN_0000077a(void)

{
  FUN_00000788();
  return;
}



// Function: FUN_00000788 at 00000788
// Size: 342 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000788(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  short local_6;
  
  sVar5 = -1;
  if (_DAT_000288f4 == 0) {
    _DAT_000288f8 = 1;
    _DAT_000288b4 = _DAT_000288ac;
  }
  func_0x00002b28(*(undefined2 *)(_DAT_000288ac + 2),(short)&local_6);
  func_0x00002b38(2,0);
  sVar2 = 0;
  uVar6 = 0xffff;
  do {
    sVar3 = local_6;
    if (local_6 <= sVar2) {
      for (; sVar3 < 8; sVar3 = sVar3 + 1) {
        *(undefined2 *)(&DAT_00027ca0 + sVar3 * 2) = 0;
        *(undefined2 *)(&DAT_00027c90 + sVar3 * 2) = 0xffff;
        *(undefined2 *)(&DAT_00027cb0 + sVar3 * 2) = 0xffff;
        *(undefined4 *)(&DAT_00027c70 + sVar3 * 4) = 0;
      }
      _DAT_00027cc2 = local_6;
      FUN_000008de();
      return;
    }
    bVar1 = false;
    for (sVar3 = 0; sVar3 < _DAT_000288f8; sVar3 = sVar3 + 1) {
      if (*(int *)(&DAT_000288b4 + sVar3 * 4) == *(int *)(&DAT_000288d4 + sVar2 * 4)) {
        bVar1 = true;
        break;
      }
    }
    uVar4 = (ushort)*(byte *)(*(int *)(&DAT_000288d4 + sVar2 * 4) + 0x11);
    if (((uVar6 == uVar4) && (uVar4 != 0)) && (-1 < sVar5)) {
      *(undefined2 *)(&DAT_00027cb0 + sVar2 * 2) = 0xffff;
    }
    else {
      *(undefined2 *)(&DAT_00027cb0 + sVar2 * 2) = 0;
      sVar5 = sVar5 + 1;
    }
    *(short *)(&DAT_00027c90 + sVar2 * 2) = sVar5;
    *(undefined4 *)(&DAT_00027c70 + sVar2 * 4) = *(undefined4 *)(&DAT_000288d4 + sVar2 * 4);
    if (bVar1) {
      *(undefined2 *)(&DAT_00027ca0 + sVar2 * 2) = 1;
    }
    else {
      *(undefined2 *)(&DAT_00027ca0 + sVar2 * 2) = 0;
    }
    sVar2 = sVar2 + 1;
    uVar6 = uVar4;
  } while( true );
}



// Function: FUN_000008de at 000008de
// Size: 558 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008de(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  
  if (*(short *)(_DAT_0002884c + 0x110) == 0xf) {
    iVar4 = 8;
  }
  else {
    iVar4 = (int)*(short *)(_DAT_0002884c + 0x110);
  }
  iVar4 = iVar4 * 0x1d + _DAT_0002884c + 0x60c;
  if (param_1._0_2_ != 0) {
    for (sVar6 = 1; sVar6 < _DAT_00027cc2; sVar6 = sVar6 + 1) {
      iVar7 = (sVar6 + -1) * 2;
      sVar2 = sVar6;
      if ((*(short *)(&DAT_00027c90 + sVar6 * 2) < *(short *)(&DAT_00027c90 + iVar7)) ||
         ((*(short *)(&DAT_00027c90 + sVar6 * 2) == *(short *)(&DAT_00027c90 + iVar7) &&
          (*(char *)(iVar4 + (short)*(char *)(*(int *)(&DAT_00027c70 + (sVar6 + -1) * 4) + 4)) <
           *(char *)(iVar4 + (short)*(char *)(*(int *)(&DAT_00027c70 + sVar6 * 4) + 4)))))) {
        while ((0 < sVar2 &&
               ((iVar7 = (sVar2 + -1) * 2,
                *(short *)(&DAT_00027c90 + sVar2 * 2) < *(short *)(&DAT_00027c90 + iVar7) ||
                ((*(short *)(&DAT_00027c90 + sVar2 * 2) == *(short *)(&DAT_00027c90 + iVar7) &&
                 (*(char *)(iVar4 + (short)*(char *)(*(int *)(&DAT_00027c70 + (sVar2 + -1) * 4) + 4)
                           ) <
                  *(char *)(iVar4 + (short)*(char *)(*(int *)(&DAT_00027c70 + sVar2 * 4) + 4))))))))
              ) {
          uVar1 = *(undefined4 *)(&DAT_00027c70 + sVar2 * 4);
          iVar7 = (sVar2 + -1) * 4;
          *(undefined4 *)(&DAT_00027c70 + sVar2 * 4) = *(undefined4 *)(&DAT_00027c70 + iVar7);
          *(undefined4 *)(&DAT_00027c70 + iVar7) = uVar1;
          uVar5 = *(undefined2 *)(&DAT_00027c90 + sVar2 * 2);
          iVar7 = (sVar2 + -1) * 2;
          *(undefined2 *)(&DAT_00027c90 + sVar2 * 2) = *(undefined2 *)(&DAT_00027c90 + iVar7);
          *(undefined2 *)(&DAT_00027c90 + iVar7) = uVar5;
          uVar5 = *(undefined2 *)(&DAT_00027ca0 + sVar2 * 2);
          *(undefined2 *)(&DAT_00027ca0 + sVar2 * 2) = *(undefined2 *)(&DAT_00027ca0 + iVar7);
          *(undefined2 *)(&DAT_00027ca0 + iVar7) = uVar5;
          sVar2 = sVar2 + -1;
        }
      }
    }
  }
  _DAT_00027cb0 = 0;
  for (sVar6 = 1; sVar6 < _DAT_00027cc2; sVar6 = sVar6 + 1) {
    if (*(short *)(&DAT_00027c90 + sVar6 * 2) == *(short *)(&DAT_00027c90 + (sVar6 + -1) * 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = 0;
    }
    *(undefined2 *)(&DAT_00027cb0 + sVar6 * 2) = uVar5;
  }
  bVar3 = false;
  _DAT_00027cc0 = 0;
  while( true ) {
    if (_DAT_00027cc2 <= _DAT_00027cc0) goto LAB_00000ae4;
    if (*(short *)(&DAT_00027ca0 + _DAT_00027cc0 * 2) != 0) break;
    _DAT_00027cc0 = _DAT_00027cc0 + 1;
  }
  bVar3 = true;
  for (sVar6 = 0; sVar6 < _DAT_00027cc2; sVar6 = sVar6 + 1) {
    if (((*(short *)(&DAT_00027ca0 + sVar6 * 2) == 0) ||
        (*(short *)(&DAT_00027c90 + sVar6 * 2) != *(short *)(&DAT_00027c90 + _DAT_00027cc0 * 2))) &&
       ((*(short *)(&DAT_00027ca0 + sVar6 * 2) != 0 ||
        (*(short *)(&DAT_00027c90 + sVar6 * 2) == *(short *)(&DAT_00027c90 + _DAT_00027cc0 * 2)))))
    {
      bVar3 = false;
    }
  }
LAB_00000ae4:
  if (bVar3) {
    *(undefined2 *)(&DAT_00027cb0 + _DAT_00027cc0 * 2) = 1;
  }
  else {
    _DAT_00027cc0 = -1;
  }
  return;
}



