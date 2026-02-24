// Warlords II - Decompiled 68k Code
// Segment: CODE_109
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000396 at 00000396
// Size: 540 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000396(void)

{
  ushort *puVar1;
  char cVar2;
  short sVar4;
  undefined4 uVar3;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined2 uVar9;
  
  sVar7 = 10000;
  sVar6 = -1;
  uVar9 = *(undefined2 *)(_DAT_000288ac + 2);
  for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x810); sVar5 = sVar5 + 1) {
    iVar8 = sVar5 * 0x20 + _DAT_0002884c;
    if (((*(short *)(iVar8 + 0x82e) != 0) &&
        ((1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU) & (int)*(short *)(iVar8 + 0x830)) ==
         0)) && (((*(byte *)(*(short *)(sVar5 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 + _DAT_00028850
                             + 1 + *(short *)(sVar5 * 0x20 + _DAT_0002884c + 0x812) * 2) & 0x40) ==
                  0 && (sVar4 = func_0x00006e48(*(undefined2 *)
                                                 (sVar5 * 0x20 + _DAT_0002884c + 0x814),uVar9),
                       sVar4 < 0x23)))) {
      if ((sVar6 == -1) &&
         (iVar8 = sVar5 * 0x20 + _DAT_0002884c, *(char *)(iVar8 + 0x82a) == '\x02')) {
        cVar2 = *(char *)((short)*(char *)(iVar8 + 0x82b) * 0x1e + _DAT_0002884c + 0xd26);
        if (cVar2 == '\x05') {
          if ((sVar4 < 0xb) && (sVar4 = sVar4 + 10, sVar4 < sVar7)) {
            sVar7 = sVar4;
            sVar6 = sVar5;
          }
        }
        else if (((cVar2 == '\x06') && (sVar4 < 0x10)) && (sVar4 = sVar4 + 10, sVar4 < sVar7)) {
          sVar7 = sVar4;
          sVar6 = sVar5;
        }
      }
      if ((*(char *)(sVar5 * 0x20 + _DAT_0002884c + 0x82a) == '\x05') && (sVar4 < sVar7)) {
        sVar7 = sVar4;
        sVar6 = sVar5;
      }
    }
  }
  if (sVar6 == -1) {
    uVar3 = 0;
  }
  else {
    puVar1 = (ushort *)(sVar6 * 0x20 + _DAT_0002884c + 0x830);
    *puVar1 = (ushort)(1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU)) | *puVar1;
    sVar5 = sVar6;
    func_0x00007470();
    iVar8 = sVar6 * 0x20 + _DAT_0002884c;
    uVar9 = *(undefined2 *)(iVar8 + 0x812);
    func_0x000049d8(*(undefined2 *)(iVar8 + 0x814));
    func_0x00002938(uVar9,sVar5);
    if (((*(short *)(_DAT_0002884c + 0x124) == 0) ||
        (((*(short *)(_DAT_0002884c + 0x15a) != 0 && (_DAT_000276e4 == 0)) && (_DAT_0002883e == 0)))
        ) || (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) {
      func_0x000047a8();
      func_0x00006e70(1,0);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_000005b2 at 000005b2
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000005b2(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  
  iVar7 = param_1._2_2_ * 0x20 + _DAT_0002884c;
  sVar1 = *(short *)(iVar7 + 0x812);
  sVar2 = *(short *)(iVar7 + 0x814);
  psVar6 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
  if (((sVar1 == *psVar6) && (sVar2 == psVar6[1])) && (*(char *)((int)psVar6 + 7) != '\0')) {
    if (*(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar1 * 2) >> 0x18) + _DAT_0002884c +
                 0x711) == '\v') {
      if ((*(char *)(param_1._2_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\x01') ||
         ((*(byte *)(sVar2 * 0xe0 + _DAT_00028850 + 1 + sVar1 * 2) & 0x40) == 0)) {
        _DAT_000288ac = param_1._0_2_ * 0x16 + _DAT_00028854;
        func_0x00003288();
        if ((*(char *)(param_1._2_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\x01') &&
           ((*(short *)(_DAT_0002884c + 0x11e) != 0 &&
            (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) == 0)))) {
          func_0x00003280();
        }
        if (*(char *)(_DAT_00028854 + 4 + param_1._0_2_ * 0x16) == '\x1c') {
          for (sVar5 = 0; sVar5 < _DAT_000288f8; sVar5 = sVar5 + 1) {
            if ((*(int *)(&DAT_000288b4 + sVar5 * 4) != 0) &&
               (**(short **)(&DAT_000288b4 + sVar5 * 4) != -1)) {
              *(ushort *)(*(int *)(&DAT_000288b4 + sVar5 * 4) + 0xc) =
                   *(ushort *)(*(int *)(&DAT_000288b4 + sVar5 * 4) + 0xc) & 0xffbf;
            }
          }
          if ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
             (*(char *)(param_1._2_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\x05')) {
            sVar5 = *(short *)(_DAT_0002884c + 0x182);
            while (sVar3 = sVar5 + -1, sVar5 != 0) {
              sVar5 = sVar3;
              if ((((*(char *)(_DAT_0002884c + 0x111) == *(char *)(_DAT_00028854 + 5 + sVar3 * 0x16)
                    ) && (*(uint *)(_DAT_00028854 + 0xe + sVar3 * 0x16) >> 0x1c == 0)) &&
                  (psVar6 = (short *)(sVar3 * 0x16 + _DAT_00028854),
                  *(char *)(_DAT_00028864 + 4 + (short)*(char *)(psVar6 + 2) * 6) != '\0')) &&
                 ((sVar1 == *psVar6 && (sVar2 == psVar6[1])))) {
                psVar6[6] = psVar6[6] | 0x20;
                func_0x00002c40(0xffff);
              }
            }
          }
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



