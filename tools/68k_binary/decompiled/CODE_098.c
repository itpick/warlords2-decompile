// Warlords II - Decompiled 68k Code
// Segment: CODE_098
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 518 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  FUN_00000266();
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    FUN_00000564();
  }
  sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
  while( true ) {
    while( true ) {
      do {
        sVar1 = sVar3 + -1;
        if (sVar3 == 0) {
          return;
        }
        iVar4 = sVar1 * 0x42 + _DAT_0002884c;
        sVar3 = sVar1;
      } while (*(char *)(iVar4 + 0x15d9) != *(char *)(_DAT_0002884c + 0x111));
      *(undefined2 *)(iVar4 + 0x15f6) = 0;
      *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15f8) = 0xffff;
      *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15fa) = 0xffff;
      sVar2 = func_0x00002dd8();
      if (sVar2 == 0) break;
      func_0x00007450();
    }
    if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 0x28) &&
       (iVar4 = *(short *)(_DAT_0002884c + 0x110) * 2,
       *(short *)(iVar4 + 0x28820) < *(short *)(iVar4 + 0x28810))) break;
    switch(*(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1)) {
    default:
      func_0x00002b98(3,0);
      break;
    case 2:
      if ((*(byte *)(sVar1 + _DAT_00028978 + 0x11e) & 2) == 0) {
        func_0x00002b78();
      }
      func_0x00002b98(4,0);
      break;
    case 3:
      if (*(short *)(_DAT_0002884c + 0x11a) == 0) {
        func_0x00002b98(1,0);
      }
      else {
        func_0x00002b98(2,0);
      }
      break;
    case 4:
      func_0x00002b98(2,0);
      break;
    case 5:
    case 6:
    case 7:
      func_0x00002b98(3,0);
      break;
    case 8:
      *(undefined1 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15f1) = 0;
      break;
    case 0xb:
      func_0x00002b98(4,0);
      break;
    case 0xd:
      if ((*(byte *)(sVar1 + _DAT_00028978 + 0x11e) & 2) == 0) {
        func_0x00002b78();
      }
      func_0x00002b98(4,0);
    }
    func_0x00007450();
  }
  func_0x00007450();
  return;
}



// Function: FUN_00000266 at 00000266
// Size: 158 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000266(void)

{
  char *pcVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar3 = sVar4 + -1, sVar4 != 0) {
    sVar4 = sVar3;
    if (((int)*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) ==
         (int)*(short *)(_DAT_0002884c + 0x110)) &&
       (pcVar1 = (char *)(sVar3 + _DAT_00028978 + 0x56), *pcVar1 == '\x06')) {
      *pcVar1 = '\b';
      psVar2 = (short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15f6);
      if (*psVar2 != 0) {
        *psVar2 = 0;
        func_0x00007450();
      }
    }
  }
  sVar4 = 4;
  while (sVar3 = sVar4 + -1, sVar4 != 0) {
    sVar4 = sVar3;
    if (*(short *)(sVar3 * 0x5c + _DAT_00028978 + 0x24c) != 0) {
      FUN_00000304();
    }
  }
  return;
}



// Function: FUN_00000304 at 00000304
// Size: 608 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000304(undefined4 param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined2 auStackY_10020 [4];
  undefined2 auStackY_10018 [5];
  short asStackY_1000e [32743];
  undefined2 auStack_20 [4];
  undefined2 auStack_18 [4];
  short local_10;
  short local_e [4];
  short local_6;
  
  iVar8 = param_1._0_2_ * 0x5c + _DAT_00028978;
  iVar1 = iVar8 + 0x252;
  if ((*(ushort *)(iVar8 + 0x2a6) & 0x10) == 0) {
    if ((*(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) & 8) == 0) {
      sVar7 = *(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a4);
    }
    else {
      sVar7 = 0x10;
    }
  }
  else {
    sVar7 = 0xc;
  }
  sVar3 = 4;
  while (sVar5 = sVar3 + -1, sVar3 != 0) {
    auStack_20[sVar5] = 0xffff;
    auStack_18[sVar5] = 0xffff;
    local_e[sVar5] = -1;
    *(undefined2 *)(iVar1 + sVar5 * 2) = 0xffff;
    sVar3 = sVar5;
  }
  uVar4 = *(ushort *)(_DAT_0002884c + 0x15c2);
  while (uVar2 = uVar4 - 1, uVar4 != 0) {
    uVar4 = uVar2;
    if (((((((int)*(char *)((short)uVar2 * 0x42 + _DAT_0002884c + 0x15d9) ==
             (int)*(short *)(_DAT_0002884c + 0x110)) &&
           (sVar3 = func_0x00002d80((uint)uVar2 << 0x10), sVar3 != 0)) &&
          (((*(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) & 0x10) == 0 ||
           ((*(byte *)((short)uVar2 + _DAT_00028978 + 0x11e) & 8) != 0)))) &&
         (((*(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) & 8) == 0 ||
          ((*(byte *)((short)uVar2 + _DAT_00028978 + 0x11e) & 0x80) != 0)))) &&
        (((*(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) & 0x20) == 0 ||
         ((*(byte *)((short)uVar2 + _DAT_00028978 + 0x11e) & 0x40) != 0)))) &&
       (((((*(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) & 0x38) != 0 ||
          ((*(byte *)((short)uVar2 + _DAT_00028978 + 0x11e) & 200) == 0)) &&
         (sVar3 = func_0x00002df8(), sVar3 != 0)) &&
        ((int)sVar7 <= (int)*(char *)((int)local_6 + (short)uVar2 * 0x42 + _DAT_0002884c + 0x15e6)))
       )) {
      sVar5 = -1;
      local_10 = 100;
      sVar3 = 0;
      while ((sVar6 = sVar5, sVar3 < 4 && (sVar6 = sVar3, *(short *)(iVar1 + sVar3 * 2) != -1))) {
        if (local_e[sVar3] < local_10) {
          local_10 = local_e[sVar3];
          sVar5 = sVar3;
        }
        sVar3 = sVar3 + 1;
      }
      if ((sVar6 != -1) &&
         ((*(short *)(iVar1 + sVar6 * 2) == -1 ||
          ((int)local_10 <=
           (int)*(char *)((int)local_6 + (short)uVar2 * 0x42 + _DAT_0002884c + 0x15e2))))) {
        *(ushort *)(iVar1 + sVar6 * 2) = uVar2;
        local_e[sVar6] =
             (short)*(char *)((int)local_6 + (short)uVar2 * 0x42 + _DAT_0002884c + 0x15e2);
      }
    }
  }
  for (sVar7 = 0; sVar7 < 4; sVar7 = sVar7 + 1) {
    if (*(short *)(iVar1 + sVar7 * 2) != -1) {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)*(short *)(iVar1 + sVar7 * 2)) = 6;
    }
  }
  return;
}



// Function: FUN_00000564 at 00000564
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000564(void)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  byte abStack_800a [32752];
  byte abStack_a [6];
  
  sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar2 = sVar6 + -1, sVar6 != 0) {
    sVar6 = sVar2;
    if ((*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) == *(char *)(_DAT_0002884c + 0x111)) &&
       (*(char *)(_DAT_00028978 + 0x56 + (int)sVar2) == '\x03')) {
      sVar4 = func_0x00002db8();
      if (sVar4 != 0) {
        bVar3 = false;
        sVar4 = 6;
        while (sVar1 = sVar4 + -1, sVar4 != 0) {
          uVar5 = (ushort)abStack_a[sVar1];
          sVar4 = sVar1;
          if (((uVar5 != 0xff) &&
              (*(char *)((short)uVar5 * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f')) &&
             ((*(byte *)((short)uVar5 + _DAT_00028978 + 0x11e) & 1) == 0)) {
            bVar3 = true;
          }
        }
        if (!bVar3) {
          *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar2) = 2;
        }
      }
    }
  }
  return;
}



