// Warlords II - Decompiled 68k Code
// Segment: CODE_007
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000146 at 00000146
// Size: 2380 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00000146(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar8;
  undefined1 *puVar9;
  int iVar13;
  short sVar14;
  int extraout_A0;
  short *psVar15;
  short *psVar16;
  undefined4 *puVar17;
  char *pcVar18;
  int extraout_A0_00;
  undefined1 *puVar19;
  int extraout_A0_01;
  undefined2 extraout_A0w;
  undefined1 *puVar20;
  int unaff_A5;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined1 auStack_10 [12];
  
  sVar14 = *(short *)(param_1 + 2);
  if (*(char *)(unaff_A5 + -0x703) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x703) = 1;
    _DAT_00027294 = -1;
  }
  iVar8 = _DAT_0002884c;
  if ((*(char *)(param_1 + 1) == '\0') && ((sVar14 < 0x31 || (0x49 < sVar14)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar5 = false;
  puVar19 = (undefined1 *)(sVar14 + -4);
  puVar9 = puVar19;
  if (puVar19 < (undefined1 *)0x56) {
    uVar7 = (undefined2)((uint)puVar19 >> 0x10);
    puVar9 = (undefined1 *)CONCAT22(uVar7,*(undefined2 *)((short)puVar19 * 2 + 0x1aa));
    switch(puVar19) {
    case (undefined1 *)0x0:
      puVar9 = (undefined1 *)func_0x00005ff0();
      break;
    case (undefined1 *)0x1:
      puVar9 = (undefined1 *)FUN_00003a78();
      break;
    case (undefined1 *)0x2:
      puVar9 = (undefined1 *)FUN_00002ae8();
      break;
    case (undefined1 *)0x3:
      puVar9 = (undefined1 *)
               FUN_00002b00((char)**(undefined4 **)(param_1 + 6) * '\x16' + (char)_DAT_00028854);
      break;
    case (undefined1 *)0x4:
      puVar9 = (undefined1 *)(**(short **)(param_1 + 6) * 0x16);
      if (puVar9 + _DAT_00028854 == _DAT_000288ac) {
        puVar9 = (undefined1 *)func_0x00002b08();
      }
      break;
    case (undefined1 *)0x5:
      puVar9 = (undefined1 *)(**(short **)(param_1 + 6) * 0x16);
      if (puVar9 + _DAT_00028854 == _DAT_000288ac) {
        puVar9 = (undefined1 *)func_0x00006000();
      }
      break;
    case (undefined1 *)0x6:
      puVar9 = (undefined1 *)FUN_00004980((char)*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x7:
      puVar9 = (undefined1 *)FUN_00001ac2((short)*(undefined4 *)(param_1 + 6));
      break;
    case (undefined1 *)0x8:
      iVar8 = *(int *)(param_1 + 6);
      puVar9 = (undefined1 *)
               func_0x000048c0(*(undefined2 *)(iVar8 + 2),(short)(iVar8 + 4),(char)iVar8 + '6');
      break;
    case (undefined1 *)0x9:
      func_0x00002c60(*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      puVar9 = (undefined1 *)FUN_00002c68();
      break;
    case (undefined1 *)0xa:
      puVar9 = (undefined1 *)FUN_00001be0((char)*(undefined4 *)(param_1 + 6));
      break;
    case (undefined1 *)0xb:
      puVar9 = (undefined1 *)FUN_00003c48((short)(**(int **)(param_1 + 6) * 0x16 + _DAT_00028854));
      break;
    case (undefined1 *)0xc:
      puVar9 = (undefined1 *)FUN_00003c40((short)(**(int **)(param_1 + 6) * 0x16 + _DAT_00028854));
      break;
    case (undefined1 *)0xd:
      puVar9 = (undefined1 *)func_0x000061d8((short)((uint)(*(int *)(param_1 + 6) + 2) >> 0x10));
      break;
    case (undefined1 *)0xe:
      puVar9 = (undefined1 *)
               FUN_00004910((char)**(undefined2 **)(param_1 + 6) * '\x16' + (char)_DAT_00028854);
      break;
    case (undefined1 *)0xf:
      puVar9 = (undefined1 *)func_0x000061e0((short)((uint)(*(int *)(param_1 + 6) + 2) >> 0x10));
      break;
    case (undefined1 *)0x10:
      psVar16 = *(short **)(param_1 + 6);
      sVar11 = 0x20;
      psVar15 = (short *)(*psVar16 * 0x42 + _DAT_0002884c + 0x15c4);
      do {
        psVar16 = psVar16 + 1;
        *psVar15 = *psVar16;
        sVar11 = sVar11 + -1;
        psVar15 = psVar15 + 1;
      } while (sVar11 != -1);
      puVar9 = (undefined1 *)func_0x00003f68();
      break;
    case (undefined1 *)0x11:
      psVar16 = *(short **)(param_1 + 6);
      puVar9 = (undefined1 *)(*psVar16 * 0xc);
      *(undefined4 *)(puVar9 + _DAT_0002884c + 0x1142) = *(undefined4 *)(psVar16 + 1);
      *(undefined4 *)(puVar9 + iVar8 + 0x1146) = *(undefined4 *)(psVar16 + 3);
      *(undefined4 *)(puVar9 + iVar8 + 0x114a) = *(undefined4 *)(psVar16 + 5);
      break;
    case (undefined1 *)0x12:
      psVar16 = *(short **)(param_1 + 6);
      sVar11 = 0xe;
      psVar15 = (short *)(*psVar16 * 0x1e + _DAT_0002884c + 0xd12);
      do {
        psVar16 = psVar16 + 1;
        *psVar15 = *psVar16;
        sVar11 = sVar11 + -1;
        psVar15 = psVar15 + 1;
      } while (sVar11 != -1);
      puVar9 = (undefined1 *)0xffff;
      break;
    case (undefined1 *)0x13:
      iVar8 = 0x10;
      puVar9 = (undefined1 *)(**(short **)(param_1 + 6) * 8 + _DAT_0002884c + 0x1582);
      psVar16 = *(short **)(param_1 + 6) + 1;
      do {
        *puVar9 = *(undefined1 *)psVar16;
        iVar8 = iVar8 + -1;
        puVar9 = puVar9 + 1;
        psVar16 = (short *)((int)psVar16 + 1);
      } while (iVar8 != 0);
      puVar9 = (undefined1 *)FUN_00002c68();
      break;
    case (undefined1 *)0x14:
      psVar16 = *(short **)(param_1 + 6);
      iVar8 = *psVar16 * 0x20 + _DAT_0002884c;
      sVar11 = *(short *)(iVar8 + 0x830);
      sVar12 = psVar16[0x10];
      sVar10 = 7;
      psVar16 = psVar16 + 1;
      puVar17 = (undefined4 *)(iVar8 + 0x812);
      do {
        *puVar17 = *(undefined4 *)psVar16;
        sVar10 = sVar10 + -1;
        psVar16 = psVar16 + 2;
        puVar17 = puVar17 + 1;
      } while (sVar10 != -1);
      puVar9 = (undefined1 *)FUN_00002c50();
      if (sVar11 != sVar12) {
        puVar9 = (undefined1 *)FUN_00002938();
      }
      break;
    case (undefined1 *)0x15:
      puVar9 = (undefined1 *)
               func_0x00003b50(*(undefined2 *)(*(int *)(param_1 + 6) + 2),
                               (char)*(undefined2 *)(*(int *)(param_1 + 6) + 6));
      break;
    case (undefined1 *)0x16:
      sVar11 = 10;
      puVar17 = (undefined4 *)(**(short **)(param_1 + 6) * 0x2c + _DAT_0002884c + 0x1422);
      psVar16 = *(short **)(param_1 + 6) + 1;
      do {
        *puVar17 = *(undefined4 *)psVar16;
        sVar11 = sVar11 + -1;
        puVar17 = puVar17 + 1;
        psVar16 = psVar16 + 2;
      } while (sVar11 != -1);
      puVar9 = (undefined1 *)0xffff;
      break;
    case (undefined1 *)0x17:
      psVar16 = *(short **)(param_1 + 6);
      iVar8 = *psVar16 * 0x14 + _DAT_0002884c;
      sVar11 = *(short *)(iVar8 + 0x186);
      sVar12 = 4;
      puVar17 = (undefined4 *)(iVar8 + 0x184);
      psVar15 = psVar16 + 1;
      do {
        *puVar17 = *(undefined4 *)psVar15;
        sVar12 = sVar12 + -1;
        puVar17 = puVar17 + 1;
        psVar15 = psVar15 + 2;
      } while (sVar12 != -1);
      puVar9 = (undefined1 *)(*psVar16 * 0x14);
      if (sVar11 != *(short *)(puVar9 + _DAT_0002884c + 0x186)) {
        puVar9 = (undefined1 *)FUN_00003f60();
      }
      break;
    case (undefined1 *)0x18:
      psVar16 = *(short **)(param_1 + 6);
      sVar11 = *psVar16;
      pcVar18 = (char *)(sVar11 * 0x14 + _DAT_0002884c + 0x224);
      psVar15 = psVar16 + 1;
      do {
        cVar4 = *(char *)psVar15;
        *pcVar18 = cVar4;
        pcVar18 = pcVar18 + 1;
        psVar15 = (short *)((int)psVar15 + 1);
      } while (cVar4 != '\0');
      *(short *)(sVar11 * 2 + _DAT_0002884c + 0x544) = psVar16[0xb];
      *(short *)(sVar11 * 2 + _DAT_0002884c + 0x594) = psVar16[0xc];
      puVar1 = (uint *)(_DAT_0002884c + 0x5e4 + (int)sVar11);
      *puVar1 = *puVar1 & 0xfcffffff | (*(byte *)((int)psVar16 + 0x1b) & 3) << 0x18;
      puVar9 = (undefined1 *)
               CONCAT31((int3)((uint)(sVar11 * 2) >> 8),*(byte *)((int)psVar16 + 0x1d));
      puVar1 = (uint *)(_DAT_0002884c + 0x5e4 + (int)sVar11);
      *puVar1 = *puVar1 & 0x3ffffff | (uint)*(byte *)((int)psVar16 + 0x1d) << 0x1a;
      break;
    case (undefined1 *)0x19:
      psVar16 = *(short **)(param_1 + 6);
      if ((int)psVar16[1] + (int)*(short *)(*psVar16 * 0x14 + _DAT_0002884c + 0x186) < 0) {
        *(undefined2 *)(*psVar16 * 0x14 + _DAT_0002884c + 0x186) = 30000;
      }
      else {
        psVar15 = (short *)(*psVar16 * 0x14 + _DAT_0002884c + 0x186);
        *psVar15 = psVar16[1] + *psVar15;
      }
      psVar16 = (short *)(*psVar16 * 0x14 + _DAT_0002884c + 0x186);
      if (*psVar16 < 0) {
        *psVar16 = 0;
      }
      puVar9 = (undefined1 *)FUN_00003f60();
      break;
    case (undefined1 *)0x1a:
      iVar8 = **(short **)(param_1 + 6) * 2;
      sVar11 = (*(short **)(param_1 + 6))[1];
      puVar9 = (undefined1 *)CONCAT22((short)((uint)iVar8 >> 0x10),sVar11);
      psVar16 = (short *)(iVar8 + _DAT_0002884c + 0x1122);
      *psVar16 = sVar11 + *psVar16;
      break;
    case (undefined1 *)0x1b:
      puVar9 = (undefined1 *)FUN_00004958((short)(**(short **)(param_1 + 6) * 0x16 + _DAT_00028854))
      ;
      break;
    case (undefined1 *)0x1c:
      puVar9 = (undefined1 *)FUN_000027e8(*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    default:
      goto switchD_000001a6_caseD_1d;
    case (undefined1 *)0x1e:
      FUN_00003ae0();
      puVar9 = (undefined1 *)func_0x00006e70(1,0);
      break;
    case (undefined1 *)0x1f:
      puVar9 = (undefined1 *)FUN_00004918();
      break;
    case (undefined1 *)0x20:
      psVar16 = *(short **)(param_1 + 6);
      puVar9 = (undefined1 *)CONCAT22((short)((uint)(psVar16[1] * 0xe0) >> 0x10),*psVar16);
      puVar1 = (uint *)(psVar16[1] * 0xe0 + _DAT_00028850 + 1 + *psVar16 * 2);
      *puVar1 = *puVar1 & 0xf0ffffff | (*(byte *)((int)psVar16 + 5) & 0xf) << 0x18;
      break;
    case (undefined1 *)0x21:
      iVar8 = (*(short **)(param_1 + 6))[1] * 0xe0;
      sVar11 = **(short **)(param_1 + 6);
      puVar9 = (undefined1 *)CONCAT22((short)((uint)iVar8 >> 0x10),sVar11);
      pbVar2 = (byte *)(iVar8 + _DAT_00028850 + 1 + sVar11 * 2);
      *pbVar2 = *pbVar2 | 0x10;
      break;
    case (undefined1 *)0x22:
      iVar8 = (*(short **)(param_1 + 6))[1] * 0xe0;
      sVar11 = **(short **)(param_1 + 6);
      puVar9 = (undefined1 *)CONCAT22((short)((uint)iVar8 >> 0x10),sVar11);
      pbVar2 = (byte *)(iVar8 + _DAT_00028850 + 1 + sVar11 * 2);
      *pbVar2 = *pbVar2 | 0x40;
      break;
    case (undefined1 *)0x23:
      puVar9 = (undefined1 *)
               FUN_000028e8((short)(**(short **)(param_1 + 6) * 0x42 + _DAT_0002884c + 0x15c4));
      break;
    case (undefined1 *)0x26:
      _DAT_00027294 = **(short **)(param_1 + 6);
      break;
    case (undefined1 *)0x27:
      if (_DAT_00027294 != -1) {
        puVar9 = (undefined1 *)FUN_00003e28();
        psVar16 = *(short **)(param_1 + 6);
        if (*psVar16 != 0) {
          puVar9 = (undefined1 *)(extraout_A0 + psVar16[2] * 200);
          iVar8 = (int)psVar16[1];
          puVar19 = puVar9;
          psVar16 = psVar16 + 3;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar19 = *(undefined1 *)psVar16;
            puVar19 = puVar19 + 1;
            psVar16 = (short *)((int)psVar16 + 1);
          }
        }
      }
      break;
    case (undefined1 *)0x28:
      puVar9 = (undefined1 *)(**(short **)(param_1 + 6) * 0x50 + _DAT_0002884c + 0x11a2);
      iVar8 = 0x50;
      puVar19 = puVar9;
      psVar16 = *(short **)(param_1 + 6) + 1;
      do {
        *puVar19 = *(undefined1 *)psVar16;
        iVar8 = iVar8 + -1;
        puVar19 = puVar19 + 1;
        psVar16 = (short *)((int)psVar16 + 1);
      } while (iVar8 != 0);
      break;
    case (undefined1 *)0x29:
      iVar8 = *(int *)(param_1 + 6);
      FUN_00003e28();
      puVar9 = (undefined1 *)(extraout_A0_00 + 0x3bc);
      iVar13 = 0x70;
      puVar19 = puVar9;
      puVar20 = (undefined1 *)(iVar8 + 2);
      do {
        *puVar19 = *puVar20;
        iVar13 = iVar13 + -1;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      } while (iVar13 != 0);
      break;
    case (undefined1 *)0x2c:
      if (**(short **)(param_1 + 6) != 0) {
        FUN_00002b68(0x450a,0xee);
      }
      puVar9 = (undefined1 *)(**(code **)(*_DAT_000266a8 + 0x8c))((short)_DAT_000266a8,0x24);
      break;
    case (undefined1 *)0x2f:
      puVar9 = (undefined1 *)CONCAT22(uVar7,**(short **)(param_1 + 6));
      if (**(short **)(param_1 + 6) == *(short *)(_DAT_0002884c + 0x110)) {
        puVar9 = (undefined1 *)func_0x00005ff8();
      }
      break;
    case (undefined1 *)0x46:
      break;
    case (undefined1 *)0x4a:
      puVar9 = (undefined1 *)FUN_00002bb8((char)*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x4b:
      puVar9 = (undefined1 *)FUN_00002bc0((char)*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x4c:
      puVar9 = (undefined1 *)FUN_00004c78((char)*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x4d:
      puVar9 = (undefined1 *)FUN_00003c88(*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x4e:
      puVar9 = (undefined1 *)thunk_FUN_00003f30(*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x4f:
      puVar9 = (undefined1 *)FUN_00003c98(*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      break;
    case (undefined1 *)0x50:
      puVar9 = (undefined1 *)FUN_00002848();
      break;
    case (undefined1 *)0x51:
      puVar9 = (undefined1 *)0x0;
      if (*(char *)(param_1 + 1) != '\0') {
        puVar9 = (undefined1 *)FUN_00002c58(*(undefined2 *)(*(int *)(param_1 + 6) + 2));
      }
      break;
    case (undefined1 *)0x53:
      puVar9 = (undefined1 *)switchD_00003332::caseD_0();
      break;
    case (undefined1 *)0x54:
      puVar3 = *(undefined2 **)(param_1 + 6);
      for (sVar11 = 0; sVar11 < 8; sVar11 = sVar11 + 1) {
        puVar9 = (undefined1 *)(sVar11 * 2);
        if (*(short *)(puVar9 + _DAT_0002884c + 0x138) != 0) {
          for (sVar12 = 0; sVar12 < 8; sVar12 = sVar12 + 1) {
            puVar9 = (undefined1 *)(sVar12 * 2);
            if ((*(short *)(puVar9 + _DAT_0002884c + 0x138) != 0) &&
               (puVar9 = (undefined1 *)(sVar12 * 2), *(short *)(puVar9 + _DAT_0002884c + 0xd0) == 0)
               ) {
              puVar9 = (undefined1 *)(sVar11 * 2);
              *(undefined2 *)(puVar9 + _DAT_0002884c + 0x1132) = *puVar3;
            }
          }
        }
      }
      break;
    case (undefined1 *)0x55:
      puVar9 = (undefined1 *)FUN_00001d92((char)*(undefined4 *)(param_1 + 6));
    }
  }
  else {
switchD_000001a6_caseD_1d:
    bVar5 = true;
  }
  if ((bVar5) && (bVar6)) {
    iVar8 = (int)sVar14;
    if (iVar8 == 0x28) {
      puVar9 = (undefined1 *)FUN_00002f10();
    }
    else if (iVar8 == 0x29) {
      puVar9 = (undefined1 *)FUN_00002f18();
    }
    else if (iVar8 == 0x2e) {
      puVar9 = (undefined1 *)FUN_00003320();
    }
    else if (iVar8 == 0x2f) {
      puVar9 = (undefined1 *)FUN_00001c18(0,0);
    }
    else if (iVar8 == 0x32) {
      puVar9 = (undefined1 *)(uint)*(byte *)(param_1 + 1);
      *(undefined2 *)(&DAT_00027282 + (int)puVar9 * 2) = 1;
      _DAT_00027292 = 1;
      for (sVar14 = 0; sVar14 < 1; sVar14 = sVar14 + 1) {
        if (*(short *)(&DAT_00027282 + sVar14 * 2) == 0) {
          _DAT_00027292 = 0;
          return puVar9;
        }
      }
    }
    else {
      puVar9 = (undefined1 *)(iVar8 + -0x3f);
      if (puVar9 == (undefined1 *)0x0) {
        uVar22 = 0;
        iVar8 = _DAT_0002884c + 0x176;
        puVar9 = auStack_10;
        func_0x000076f8((short)puVar9,(short)iVar8,0xc);
        uVar21 = 0;
        uVar7 = (undefined2)((uint)*(undefined4 *)(param_1 + 6) >> 0x10);
        iVar13 = _DAT_0002884c + 0x176;
        func_0x000076f8((short)iVar13,(short)*(undefined4 *)(param_1 + 6),0xc);
        FUN_00000e00((short)((uint)iVar13 >> 0x10),uVar7,uVar21,(short)((uint)puVar9 >> 0x10),
                     (short)((uint)iVar8 >> 0x10),uVar22);
        func_0x000073b0(0x32);
        uVar7 = 0;
        if (extraout_A0_01 != 0) {
          func_0x00005c78((char)extraout_A0_01);
          uVar7 = extraout_A0w;
        }
        FUN_00000e00();
        func_0x00005c80(uVar7,0x1e,(short)*(undefined4 *)(_DAT_000297f4 + 0x80));
        (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x108))
                  ((short)*(int **)(_DAT_000297f4 + 0x80),uVar7);
        puVar9 = (undefined1 *)func_0x000076f8(_DAT_0002884c + 0x176,(short)auStack_10,0xc);
      }
    }
  }
  return puVar9;
}



// Function: FUN_00000b3e at 00000b3e
// Size: 26 bytes

void FUN_00000b3e(undefined2 param_1)

{
  FUN_00002bd8(param_1);
  return;
}



// Function: FUN_00000b58 at 00000b58
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b58(void)

{
  FUN_00001c18();
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00000bc8 at 00000bc8
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bc8(void)

{
  FUN_00001c18();
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00000c38 at 00000c38
// Size: 36 bytes

void FUN_00000c38(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00000c5c at 00000c5c
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c5c(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00000c9c at 00000c9c
// Size: 66 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c9c(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00000cde at 00000cde
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000cde(void)

{
  FUN_00001c18();
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00000e00 at 00000e00
// Size: 50 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e00(void)

{
  bool in_ZF;
  
  if ((in_ZF) && (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00000e32 at 00000e32
// Size: 40 bytes

void FUN_00000e32(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00000e5a at 00000e5a
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e5a(void)

{
  FUN_00001c18();
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00000eec at 00000eec
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000eec(void)

{
  FUN_00001c18();
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00000f7e at 00000f7e
// Size: 62 bytes

void FUN_00000f7e(undefined2 *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 auStack_1a [11];
  
  sVar1 = 10;
  puVar2 = auStack_1a;
  do {
    *puVar2 = *param_1;
    sVar1 = sVar1 + -1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00000fbc at 00000fbc
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000fbc(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00000ffc at 00000ffc
// Size: 110 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ffc(undefined2 *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 auStack_1a [11];
  
  if ((param_1 != (undefined2 *)0x0) && (*(char *)(_DAT_00028854 + 5) != -1)) {
    sVar1 = 10;
    puVar2 = auStack_1a;
    do {
      *puVar2 = *param_1;
      sVar1 = sVar1 + -1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    } while (sVar1 != -1);
    FUN_00001c18();
    FUN_00001c18(0,0);
  }
  return;
}



// Function: FUN_0000106a at 0000106a
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000106a(undefined4 param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_46 [33];
  
  sVar1 = 0x20;
  puVar2 = (undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4);
  puVar3 = auStack_46;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000010b6 at 000010b6
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000010b6(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001104 at 00001104
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001104(undefined4 param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_22 [15];
  
  sVar1 = 0xe;
  puVar2 = (undefined2 *)(param_1._0_2_ * 0x1e + _DAT_0002884c + 0xd12);
  puVar3 = auStack_22;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001150 at 00001150
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001150(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_14 [16];
  
  iVar1 = 0x10;
  puVar2 = auStack_14;
  puVar3 = (undefined1 *)(param_1._0_2_ * 8 + _DAT_0002884c + 0x1582);
  do {
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  FUN_00001c18();
  return;
}



// Function: FUN_000011aa at 000011aa
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000011aa(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_24 [8];
  
  sVar1 = 7;
  puVar2 = (undefined4 *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x812);
  puVar3 = auStack_24;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000011f8 at 000011f8
// Size: 64 bytes

void FUN_000011f8(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001238 at 00001238
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001238(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_30 [11];
  
  sVar1 = 10;
  puVar2 = (undefined4 *)(param_1._0_2_ * 0x2c + _DAT_0002884c + 0x1422);
  puVar3 = auStack_30;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001284 at 00001284
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001284(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_18 [5];
  
  sVar1 = 4;
  puVar2 = (undefined4 *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x184);
  puVar3 = auStack_18;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000012d0 at 000012d0
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012d0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_20 [20];
  undefined2 local_c;
  undefined2 local_a;
  ushort local_8;
  ushort local_6;
  
  pcVar2 = acStack_20;
  pcVar3 = (char *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x224);
  do {
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_c = *(undefined2 *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x544);
  local_a = *(undefined2 *)(param_1._0_2_ * 2 + _DAT_0002884c + 0x594);
  local_8 = (ushort)((uint)(*(int *)(_DAT_0002884c + 0x5e4 + (int)param_1._0_2_) << 6) >> 0x1e);
  local_6 = (ushort)((uint)*(undefined4 *)(_DAT_0002884c + 0x5e4 + (int)param_1._0_2_) >> 0x1a);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_0000137c at 0000137c
// Size: 52 bytes

void FUN_0000137c(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000013b0 at 000013b0
// Size: 38 bytes

void FUN_000013b0(void)

{
  FUN_00001c18();
  return;
}



// Function: FUN_000013d6 at 000013d6
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013d6(void)

{
  FUN_00001c18();
  return;
}



// Function: FUN_0000140e at 0000140e
// Size: 76 bytes

void FUN_0000140e(undefined2 param_1)

{
  undefined1 local_a [2];
  undefined2 local_8;
  short local_6;
  
  local_8 = param_1;
  local_6 = FUN_00002ad0(0x10019);
  local_6 = local_6 + 100;
  FUN_00001c18((short)((uint)local_a >> 0x10),4);
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_0000145a at 0000145a
// Size: 36 bytes

void FUN_0000145a(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_0000147e at 0000147e
// Size: 36 bytes

void FUN_0000147e(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000014a2 at 000014a2
// Size: 58 bytes

void FUN_000014a2(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000014dc at 000014dc
// Size: 52 bytes

void FUN_000014dc(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001510 at 00001510
// Size: 52 bytes

void FUN_00001510(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001544 at 00001544
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001544(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001590 at 00001590
// Size: 28 bytes

void FUN_00001590(void)

{
  FUN_00002f10();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000015ac at 000015ac
// Size: 28 bytes

void FUN_000015ac(void)

{
  FUN_00002f18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000015c8 at 000015c8
// Size: 202 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_000015c8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int extraout_A0;
  short *psVar6;
  undefined1 local_d8 [2];
  short local_d6;
  short local_d4 [3];
  short local_ce;
  undefined1 auStack_cc [200];
  
  FUN_00003e28();
  sVar5 = 0;
  FUN_00001c18((short)((uint)local_d8 >> 0x10),2);
  FUN_00001c18(0,0);
  local_d4[1] = 0;
  for (iVar4 = 0; iVar4 < 0x42c; iVar4 = iVar4 + 200) {
    local_d6 = 200;
    local_d4[0] = 0x42c - (short)iVar4;
    if (local_d4[0] < 200) {
      psVar6 = local_d4;
    }
    else {
      psVar6 = &local_d6;
    }
    local_d4[2] = *psVar6;
    puVar1 = auStack_cc;
    puVar2 = (undefined1 *)(extraout_A0 + iVar4);
    for (iVar3 = (int)local_d4[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    local_ce = sVar5;
    FUN_00001c18((short)((uint)(local_d4 + 1) >> 0x10),0xce);
    FUN_00001c18(0,0);
    sVar5 = sVar5 + 1;
  }
  return;
}



// Function: FUN_00001692 at 00001692
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001692(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_54 [80];
  
  iVar1 = 0x50;
  puVar2 = auStack_54;
  puVar3 = (undefined1 *)(param_1._0_2_ * 0x50 + _DAT_0002884c + 0x11a2);
  do {
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_000016ec at 000016ec
// Size: 86 bytes

void FUN_000016ec(void)

{
  int iVar1;
  int extraout_A0;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_76 [2];
  undefined1 auStack_74 [112];
  
  FUN_00003e28();
  iVar1 = 0x70;
  puVar2 = auStack_74;
  puVar3 = (undefined1 *)(extraout_A0 + 0x3bc);
  do {
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  FUN_00001c18((short)((uint)local_76 >> 0x10),0x72);
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001742 at 00001742
// Size: 46 bytes

void FUN_00001742(void)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  FUN_00003320();
  puVar2 = &stack0x00000004;
  uVar1 = 0x2e;
  FUN_00001c18((short)((uint)puVar2 >> 0x10),2);
  FUN_00001770(uVar1,(short)puVar2);
  return;
}



// Function: FUN_00001770 at 00001770
// Size: 10 bytes

undefined4 FUN_00001770(void)

{
  return 1;
}



// Function: FUN_0000177a at 0000177a
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000177a(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 auStack_12 [12];
  undefined2 local_6;
  
  iVar1 = 0xc;
  puVar2 = auStack_12;
  puVar3 = (undefined1 *)(_DAT_0002884c + 0x176);
  do {
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  local_6 = FUN_00002ad0(0x17530);
  puVar2 = auStack_12;
  uVar4 = 0x3f;
  FUN_00001c18((short)((uint)puVar2 >> 0x10),0xe);
  FUN_00001770(uVar4,(short)puVar2);
  return;
}



// Function: FUN_000017d4 at 000017d4
// Size: 38 bytes

void FUN_000017d4(void)

{
  FUN_00001c18();
  return;
}



// Function: FUN_000017fa at 000017fa
// Size: 52 bytes

void FUN_000017fa(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_0000182e at 0000182e
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000182e(undefined2 param_1)

{
  undefined1 local_a [2];
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = param_1;
  local_6 = FUN_00002ad0(0x10005);
  FUN_00001c18((short)((uint)local_a >> 0x10),6);
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_000018c2 at 000018c2
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000018c2(undefined2 param_1)

{
  undefined1 local_a [2];
  undefined2 local_8;
  short local_6;
  
  local_8 = param_1;
  local_6 = FUN_00002ad0(0x1000a);
  local_6 = local_6 + 5;
  FUN_00001c18((short)((uint)local_a >> 0x10),6);
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_0000195a at 0000195a
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000195a(undefined4 param_1,undefined4 param_2)

{
  if (param_2._0_2_ == 0) {
    FUN_00002ad0(0x10019);
  }
  else {
    FUN_00002ad0(0x1000f);
  }
  FUN_00001c18();
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) ||
     ((_DAT_0002883e == 0 &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)))) {
    FUN_00001c18();
  }
  return;
}



// Function: FUN_00001a12 at 00001a12
// Size: 40 bytes

void FUN_00001a12(void)

{
  FUN_00001c18();
  FUN_00001c18(0,0);
  return;
}



// Function: FUN_00001a3a at 00001a3a
// Size: 44 bytes

void FUN_00001a3a(void)

{
  FUN_00001c18();
  return;
}



// Function: FUN_00001a66 at 00001a66
// Size: 92 bytes

void FUN_00001a66(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)(param_1 + 0x1a);
  uVar1 = FUN_00002aa0();
  *(undefined2 *)(param_1 + 0x1a) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0x1c);
  uVar2 = FUN_00002aa0(uVar2);
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  uVar2 = *(undefined2 *)(param_1 + 0x1e);
  uVar1 = FUN_00002aa0(uVar1);
  *(undefined2 *)(param_1 + 0x1e) = uVar1;
  uVar2 = FUN_00002aa0(uVar2);
  *(undefined2 *)(param_1 + 0x20) = uVar2;
  FUN_00001c18((short)((uint)param_1 >> 0x10),0x36);
  return;
}



// Function: FUN_00001ac2 at 00001ac2
// Size: 286 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ac2(short *param_1,undefined4 param_2)

{
  short sVar1;
  
  _DAT_000288b0 = 0;
  _DAT_000288ac = *(int *)(param_1 + 1) * 0x16 + _DAT_00028854;
  if (*(char *)(_DAT_000288ac + 4) == '\x1c') {
    _DAT_000288b0 = _DAT_000288ac;
  }
  for (sVar1 = 0; sVar1 < *param_1; sVar1 = sVar1 + 1) {
    *(int *)(&DAT_000288b4 + sVar1 * 4) = *(int *)(param_1 + sVar1 * 2 + 3) * 0x16 + _DAT_00028854;
    *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) =
         *(ushort *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0xc) | 1;
    if ((_DAT_000288b0 == 0) && (*(char *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 4) == '\x1c')) {
      _DAT_000288b0 = *(int *)(&DAT_000288b4 + sVar1 * 4);
    }
  }
  for (; sVar1 < 8; sVar1 = sVar1 + 1) {
    *(undefined4 *)(&DAT_000288b4 + sVar1 * 4) = 0;
  }
  _DAT_000288f8 = *param_1;
  _DAT_000288f4 = (short)(1 < _DAT_000288f8);
  for (sVar1 = 1; sVar1 < _DAT_000288f8; sVar1 = sVar1 + 1) {
    *(short *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x12) = param_1[0x13];
    *(short *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x14) = param_1[0x14];
  }
  if ((param_2._0_1_ != '\0') &&
     (sVar1 = FUN_00002850(*(undefined2 *)(_DAT_000288ac + 2)), sVar1 != 0)) {
    func_0x00002858(*(undefined2 *)(_DAT_000288ac + 2));
  }
  return;
}



// Function: FUN_00001be0 at 00001be0
// Size: 55 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001be0(short *param_1)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < 0x1d; sVar1 = sVar1 + 1) {
    *(undefined1 *)((int)sVar1 + *param_1 * 0x1d + _DAT_0002884c + 0x60c) =
         *(undefined1 *)((int)param_1 + sVar1 + 2);
  }
  FUN_00003ae0();
  return;
}



// Function: FUN_00001c18 at 00001c18
// Size: 44 bytes

void FUN_00001c18(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_a;
  
  local_e = param_2;
  local_d = 0;
  local_a = 0;
  FUN_00000146(&local_e);
  return;
}



// Function: FUN_00001c44 at 00001c44
// Size: 46 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c44(void)

{
  if (_DAT_0002883e == 0) {
    _DAT_000144ec = 0xffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001cc8 at 00001cc8
// Size: 46 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cc8(void)

{
  short sVar1;
  
  sVar1 = FUN_00001e26();
  if (sVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d08(void)

{
  short in_D0w;
  short unaff_D3w;
  short unaff_D4w;
  int unaff_A2;
  
  while( true ) {
    if ((*(short *)(unaff_A2 + (int)in_D0w * (int)unaff_D3w) != 0) &&
       (((int)unaff_D4w == (int)*(char *)(unaff_A2 + 7 + unaff_D3w * 0x36) || (unaff_D4w < 0)))) {
      func_0x00007700(unaff_D3w * 0x36 + unaff_A2,0,0x36);
    }
    unaff_D3w = unaff_D3w + 1;
    if (0xff < unaff_D3w) break;
    in_D0w = 0x36;
  }
  if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
      (*(short *)(unaff_D3w * 2 + _DAT_0002884c + 0xd0) == 0)) &&
     (unaff_D4w == *(short *)(_DAT_0002884c + 0x110))) {
    _DAT_000144ec = 0xffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d18 at 00001d18
// Size: 112 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d18(void)

{
  char in_D0b;
  short unaff_D3w;
  short unaff_D4w;
  int unaff_A2;
  
  do {
    if (((int)unaff_D4w == (int)in_D0b) || (unaff_D4w < 0)) {
      func_0x00007700(unaff_D3w * 0x36 + unaff_A2,0,0x36);
    }
    do {
      unaff_D3w = unaff_D3w + 1;
      if (0xff < unaff_D3w) {
        if ((((_DAT_0002883e != 0) && (_DAT_00028840 != 0)) &&
            (*(short *)(unaff_D3w * 2 + _DAT_0002884c + 0xd0) == 0)) &&
           (unaff_D4w == *(short *)(_DAT_0002884c + 0x110))) {
          _DAT_000144ec = 0xffff;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while (*(short *)(unaff_A2 + unaff_D3w * 0x36) == 0);
    in_D0b = *(char *)(unaff_A2 + 7 + unaff_D3w * 0x36);
  } while( true );
}



// Function: FUN_00001d92 at 00001d92
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d92(int param_1)

{
  short sVar1;
  
  if (((-1 < *(char *)(param_1 + 7)) && (*(char *)(param_1 + 7) < '\b')) &&
     (sVar1 = FUN_00001e26(), sVar1 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001e26 at 00001e26
// Size: 34 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001e26(void)

{
  if (_DAT_0002727c != 0) {
    return 1;
  }
  _DAT_0002727c = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e5e at 00001e5e
// Size: 20 bytes

void FUN_00001e5e(void)

{
  FUN_00001e26();
  return;
}



// Function: FUN_00001e72 at 00001e72
// Size: 268 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e72(void)

{
  undefined2 uVar1;
  short sVar2;
  int *extraout_A0;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined2 local_16 [6];
  undefined2 local_a;
  short local_8;
  undefined2 local_6;
  
  local_6 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
  FUN_00002800(0x5420,0xdc);
  if (extraout_A0 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*extraout_A0 + 0x84))();
  (**(code **)(*extraout_A0 + 0x84))();
  uVar3 = (undefined2)((uint)extraout_A0 >> 0x10);
  (**(code **)(*extraout_A0 + 0x84))();
  for (sVar2 = 0; sVar2 < 6; sVar2 = sVar2 + 1) {
    uVar1 = (**(code **)(*extraout_A0 + 0x84))();
    local_16[sVar2] = uVar1;
  }
  local_a = (**(code **)(*extraout_A0 + 0x84))();
  uVar4 = 0x3c;
  local_8 = (**(code **)(*extraout_A0 + 0x84))();
  FUN_00002818((short)extraout_A0);
  sVar2 = FUN_00002ad0(100,uVar3,uVar4);
  if (local_8 < sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = FUN_00001f9e();
  if (sVar2 == 0) {
    FUN_00001fba();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001f9e at 00001f9e
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001f9e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001fba at 00001fba
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001fba(void)

{
  undefined4 extraout_A0;
  
  FUN_00001d08(_DAT_00027278);
  _DAT_00027278 = extraout_A0;
  return 1;
}



// Function: FUN_00001fd6 at 00001fd6
// Size: 126 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001fd6(void)

{
  short sVar1;
  int extraout_A0;
  
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
  sVar1 = FUN_00002840(0x44415420,0x144dc);
  if (sVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00002800(0x44415420,0x144dc);
  if (extraout_A0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002278 at 00002278
// Size: 92 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002278(void)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 local_720 [910];
  
  for (sVar1 = 0; sVar1 < 0xd; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 0xe; sVar2 = sVar2 + 1) {
      puVar3 = local_720 + sVar2 * 0x41 + sVar1 * 5;
      *puVar3 = 0xffff;
      puVar3[4] = 0xffff;
      puVar3[3] = 0xffff;
      puVar3[2] = 0xffff;
      puVar3[1] = 0xffff;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026e6 at 000026e6
// Size: 198 bytes

void FUN_000026e6(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2._2_2_ == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_2._0_2_ * 0x82 + param_1 + 4 + (param_2._2_2_ + -1) * 10);
  }
  *param_3 = uVar1;
  if (param_2._2_2_ == 0xc) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_2._0_2_ * 0x82 + param_1 + 2 + (param_2._2_2_ + 1) * 10);
  }
  param_3[1] = uVar1;
  if (param_2._0_2_ == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)((param_2._0_2_ + -1) * 0x82 + param_1 + 8 + param_2._2_2_ * 10);
  }
  param_3[2] = uVar1;
  if (param_2._0_2_ == 0xd) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)((param_2._0_2_ + 1) * 0x82 + param_1 + 6 + param_2._2_2_ * 10);
  }
  param_3[3] = uVar1;
  return;
}



// Function: FUN_000027ac at 000027ac
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000027ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000027e8 at 000027e8
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000027e8(void)

{
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  short sVar3;
  short unaff_D5w;
  short *unaff_A2;
  int unaff_A3;
  
  do {
    if (*unaff_A2 != *(short *)(FUN_000018c2 + unaff_D3w * 0x7e + unaff_A3 + 2)) goto LAB_00002842;
    do {
      if ((((unaff_A2[1] < 0) || (unaff_A2[1] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c6)))
          && ((unaff_A2[2] < 0 || (unaff_A2[2] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c8)))
             )) && ((unaff_A2[3] < 0 ||
                    (unaff_A2[3] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18ca))))) {
        unaff_D4w = unaff_D4w + 1;
      }
LAB_00002842:
      unaff_D3w = unaff_D3w + 1;
      if (unaff_D5w <= unaff_D3w) {
        if (unaff_D4w == 0) {
          FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar1 = FUN_00002ad0(unaff_D4w);
        sVar3 = 0;
        sVar2 = 0;
        do {
          if (unaff_D5w <= sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((((*unaff_A2 < 0) ||
               (*unaff_A2 == *(short *)(FUN_000018c2 + sVar2 * 0x7e + unaff_A3 + 2))) &&
              ((unaff_A2[1] < 0 || (unaff_A2[1] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c6)))))
             && (((unaff_A2[2] < 0 || (unaff_A2[2] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c8)))
                 && ((unaff_A2[3] < 0 ||
                     (unaff_A2[3] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18ca))))))) {
            if (sVar3 == sVar1) {
              halt_baddata();
            }
            sVar3 = sVar3 + 1;
          }
          sVar2 = sVar2 + 1;
        } while( true );
      }
    } while (*unaff_A2 < 0);
  } while( true );
}



// Function: FUN_00002800 at 00002800
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002800(void)

{
  short in_D0w;
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  short sVar3;
  short unaff_D5w;
  short *unaff_A2;
  int unaff_A3;
  
  do {
    if (unaff_A2[1] != *(short *)((int)in_D0w * (int)unaff_D3w + unaff_A3 + 0x18c6))
    goto LAB_00002842;
    do {
      if (((unaff_A2[2] < 0) || (unaff_A2[2] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c8)))
         && ((unaff_A2[3] < 0 || (unaff_A2[3] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18ca))))
         ) {
        unaff_D4w = unaff_D4w + 1;
      }
LAB_00002842:
      do {
        unaff_D3w = unaff_D3w + 1;
        if (unaff_D5w <= unaff_D3w) {
          if (unaff_D4w == 0) {
            FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          sVar1 = FUN_00002ad0(unaff_D4w);
          sVar3 = 0;
          sVar2 = 0;
          do {
            if (unaff_D5w <= sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if ((((*unaff_A2 < 0) ||
                 (*unaff_A2 == *(short *)(FUN_000018c2 + sVar2 * 0x7e + unaff_A3 + 2))) &&
                (((unaff_A2[1] < 0 || (unaff_A2[1] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c6)))
                 && ((unaff_A2[2] < 0 ||
                     (unaff_A2[2] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c8))))))) &&
               ((unaff_A2[3] < 0 || (unaff_A2[3] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18ca)))))
            {
              if (sVar3 == sVar1) {
                halt_baddata();
              }
              sVar3 = sVar3 + 1;
            }
            sVar2 = sVar2 + 1;
          } while( true );
        }
      } while ((-1 < *unaff_A2) &&
              (*unaff_A2 != *(short *)(FUN_000018c2 + unaff_D3w * 0x7e + unaff_A3 + 2)));
    } while (unaff_A2[1] < 0);
    in_D0w = 0x7e;
  } while( true );
}



// Function: FUN_00002818 at 00002818
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002818(void)

{
  short in_D0w;
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  short sVar3;
  short unaff_D5w;
  short *unaff_A2;
  int unaff_A3;
  
  do {
    if (unaff_A2[2] != *(short *)((int)in_D0w * (int)unaff_D3w + unaff_A3 + 0x18c8))
    goto LAB_00002842;
    do {
      if ((unaff_A2[3] < 0) || (unaff_A2[3] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18ca))) {
        unaff_D4w = unaff_D4w + 1;
      }
LAB_00002842:
      do {
        unaff_D3w = unaff_D3w + 1;
        if (unaff_D5w <= unaff_D3w) {
          if (unaff_D4w == 0) {
            FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          sVar1 = FUN_00002ad0(unaff_D4w);
          sVar3 = 0;
          sVar2 = 0;
          do {
            if (unaff_D5w <= sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if ((((*unaff_A2 < 0) ||
                 (*unaff_A2 == *(short *)(FUN_000018c2 + sVar2 * 0x7e + unaff_A3 + 2))) &&
                ((unaff_A2[1] < 0 || (unaff_A2[1] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c6))))
                ) && (((unaff_A2[2] < 0 ||
                       (unaff_A2[2] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c8))) &&
                      ((unaff_A2[3] < 0 ||
                       (unaff_A2[3] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18ca))))))) {
              if (sVar3 == sVar1) {
                halt_baddata();
              }
              sVar3 = sVar3 + 1;
            }
            sVar2 = sVar2 + 1;
          } while( true );
        }
      } while (((-1 < *unaff_A2) &&
               (*unaff_A2 != *(short *)(FUN_000018c2 + unaff_D3w * 0x7e + unaff_A3 + 2))) ||
              ((-1 < unaff_A2[1] &&
               (unaff_A2[1] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c6)))));
    } while (unaff_A2[2] < 0);
    in_D0w = 0x7e;
  } while( true );
}



// Function: FUN_00002828 at 00002828
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002828(void)

{
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  short sVar3;
  short unaff_D5w;
  short *unaff_A2;
  int unaff_A3;
  
  do {
    if ((unaff_A2[3] < 0) || (unaff_A2[3] == *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18ca))) {
      unaff_D4w = unaff_D4w + 1;
    }
    do {
      unaff_D3w = unaff_D3w + 1;
      if (unaff_D5w <= unaff_D3w) {
        if (unaff_D4w == 0) {
          FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar1 = FUN_00002ad0(unaff_D4w);
        sVar3 = 0;
        sVar2 = 0;
        do {
          if (unaff_D5w <= sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (((((*unaff_A2 < 0) ||
                (*unaff_A2 == *(short *)(FUN_000018c2 + sVar2 * 0x7e + unaff_A3 + 2))) &&
               ((unaff_A2[1] < 0 || (unaff_A2[1] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c6)))))
              && ((unaff_A2[2] < 0 || (unaff_A2[2] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c8)))
                 )) && ((unaff_A2[3] < 0 ||
                        (unaff_A2[3] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18ca))))) {
            if (sVar3 == sVar1) {
              halt_baddata();
            }
            sVar3 = sVar3 + 1;
          }
          sVar2 = sVar2 + 1;
        } while( true );
      }
    } while ((((-1 < *unaff_A2) &&
              (*unaff_A2 != *(short *)(FUN_000018c2 + unaff_D3w * 0x7e + unaff_A3 + 2))) ||
             ((-1 < unaff_A2[1] && (unaff_A2[1] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c6))
              ))) || ((-1 < unaff_A2[2] &&
                      (unaff_A2[2] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c8)))));
  } while( true );
}



// Function: FUN_00002840 at 00002840
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002840(void)

{
  short sVar1;
  short unaff_D3w;
  short sVar2;
  short unaff_D4w;
  short sVar3;
  short unaff_D5w;
  short *unaff_A2;
  int unaff_A3;
  
  do {
    unaff_D4w = unaff_D4w + 1;
    do {
      unaff_D3w = unaff_D3w + 1;
      if (unaff_D5w <= unaff_D3w) {
        if (unaff_D4w == 0) {
          FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar1 = FUN_00002ad0(unaff_D4w);
        sVar3 = 0;
        sVar2 = 0;
        do {
          if (unaff_D5w <= sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (((((*unaff_A2 < 0) ||
                (*unaff_A2 == *(short *)(FUN_000018c2 + sVar2 * 0x7e + unaff_A3 + 2))) &&
               ((unaff_A2[1] < 0 || (unaff_A2[1] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c6)))))
              && ((unaff_A2[2] < 0 || (unaff_A2[2] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c8)))
                 )) && ((unaff_A2[3] < 0 ||
                        (unaff_A2[3] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18ca))))) {
            if (sVar3 == sVar1) {
              halt_baddata();
            }
            sVar3 = sVar3 + 1;
          }
          sVar2 = sVar2 + 1;
        } while( true );
      }
    } while (((((-1 < *unaff_A2) &&
               (*unaff_A2 != *(short *)(FUN_000018c2 + unaff_D3w * 0x7e + unaff_A3 + 2))) ||
              ((-1 < unaff_A2[1] &&
               (unaff_A2[1] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c6))))) ||
             ((-1 < unaff_A2[2] && (unaff_A2[2] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c8))
              ))) || ((-1 < unaff_A2[3] &&
                      (unaff_A2[3] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18ca)))));
  } while( true );
}



// Function: FUN_00002848 at 00002848
// Size: 126 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002848(void)

{
  short sVar1;
  short sVar2;
  short unaff_D4w;
  short sVar3;
  short unaff_D5w;
  short *unaff_A2;
  int unaff_A3;
  
  if (unaff_D4w == 0) {
    FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = FUN_00002ad0();
  sVar3 = 0;
  sVar2 = 0;
  do {
    if (unaff_D5w <= sVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((((*unaff_A2 < 0) || (*unaff_A2 == *(short *)(FUN_000018c2 + sVar2 * 0x7e + unaff_A3 + 2)))
         && ((unaff_A2[1] < 0 || (unaff_A2[1] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c6))))) &&
        ((unaff_A2[2] < 0 || (unaff_A2[2] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18c8))))) &&
       ((unaff_A2[3] < 0 || (unaff_A2[3] == *(short *)(sVar2 * 0x7e + unaff_A3 + 0x18ca))))) {
      if (sVar3 == sVar1) {
        halt_baddata();
      }
      sVar3 = sVar3 + 1;
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_00002850 at 00002850
// Size: 23 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002850(void)

{
  FUN_00002ad0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000028e8 at 000028e8
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000028e8(void)

{
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  short *unaff_A2;
  int unaff_A3;
  
  do {
    if (unaff_D4w == unaff_D6w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_D4w = unaff_D4w + 1;
    do {
      unaff_D3w = unaff_D3w + 1;
      if (unaff_D5w <= unaff_D3w) {
        halt_baddata();
      }
    } while (((((-1 < *unaff_A2) &&
               (*unaff_A2 != *(short *)(FUN_000018c2 + unaff_D3w * 0x7e + unaff_A3 + 2))) ||
              ((-1 < unaff_A2[1] &&
               (unaff_A2[1] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c6))))) ||
             ((-1 < unaff_A2[2] && (unaff_A2[2] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18c8))
              ))) || ((-1 < unaff_A2[3] &&
                      (unaff_A2[3] != *(short *)(unaff_D3w * 0x7e + unaff_A3 + 0x18ca)))));
  } while( true );
}



// Function: FUN_0000290a at 0000290a
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000290a(void)

{
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002938 at 00002938
// Size: 396 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002938(void)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  byte unaff_D2b;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short unaff_D5w;
  short sVar8;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  if ((unaff_D2b | 0x70) != 0) {
    for (sVar7 = 0; sVar7 < 0x9c; sVar7 = sVar7 + 1) {
      for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
        if (*(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02') {
          unaff_D5w = unaff_D5w + 1;
        }
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
      }
    }
    if (unaff_D5w < 5000) {
      FUN_00001d18(_DAT_00027270);
      _DAT_00027270 = extraout_A0;
    }
    else {
      *(undefined2 *)(unaff_A6 + -0x12) = 0;
      *(undefined4 *)(unaff_A6 + -0x10) = 0;
      *(undefined4 *)(unaff_A6 + -0xc) = 0;
      *(undefined4 *)(unaff_A6 + -8) = 0;
      *(undefined4 *)(unaff_A6 + -4) = 0;
      *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
      _DAT_00025f52 = unaff_A6 + -0x46;
      iVar3 = func_0x000076a8(unaff_A6 + -0x46);
      if (iVar3 == 0) {
        sVar4 = 0x70;
        for (sVar7 = 0; sVar7 < 0x9c; sVar7 = sVar7 + 1) {
          for (sVar5 = 0;
              ((sVar8 = sVar4, sVar5 < 0x70 &&
               (sVar8 = sVar5,
               *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar4));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              *(undefined1 *)((sVar5 + -10) * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
          sVar4 = sVar8;
        }
        sVar7 = 0x9c;
        sVar4 = 0x70;
        while (sVar8 = sVar4, sVar5 = sVar7 + -1, sVar7 != 0) {
          for (sVar6 = 0;
              ((sVar7 = sVar5, sVar4 = sVar8, sVar6 < 0x70 &&
               (sVar4 = sVar6,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar6 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar6 + -1 != (int)sVar8));
              sVar6 = sVar6 + 1) {
            if (-1 < sVar6 + -10) {
              pbVar1 = (byte *)((sVar6 + -10) * 0x9c + _DAT_00027270 + (int)sVar5);
              *pbVar1 = *pbVar1 | 2;
            }
          }
        }
        sVar7 = 0x9c;
        while (sVar4 = sVar7 + -1, sVar7 != 0) {
          for (sVar5 = 0; sVar7 = sVar4, sVar5 < 0x70; sVar5 = sVar5 + 1) {
            if (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x03') {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 1;
            }
            else {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 0;
            }
          }
        }
        sVar4 = 0;
        for (sVar7 = 0; sVar7 < 0x9c; sVar7 = sVar7 + 1) {
          sVar5 = 0x70;
          while (((sVar8 = sVar5 + -1, sVar6 = sVar4, sVar5 != 0 &&
                  (sVar6 = sVar8,
                  *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar8 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar8 + 1 != (int)sVar4))) {
            sVar5 = sVar8;
            if (sVar8 + 10 < 0x70) {
              pbVar1 = (byte *)((sVar8 + 10) * 0x9c + _DAT_00027270 + (int)sVar7);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar4 = sVar6;
        }
        sVar7 = 0;
        sVar4 = 0x9c;
        while (sVar8 = sVar7, sVar5 = sVar4 + -1, sVar4 != 0) {
          sVar6 = 0x70;
          while (((sVar2 = sVar6 + -1, sVar7 = sVar8, sVar4 = sVar5, sVar6 != 0 &&
                  (sVar7 = sVar2,
                  *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar8))) {
            sVar6 = sVar2;
            if (sVar2 + 10 < 0x70) {
              pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar5);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar7 = 0x9c;
        while (sVar4 = sVar7 + -1, sVar7 != 0) {
          for (sVar5 = 0; sVar7 = sVar4, sVar5 < 0x70; sVar5 = sVar5 + 1) {
            if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) & 1) == 0) &&
               (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) != '\f')) {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 0;
            }
            else {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 1;
            }
          }
        }
        sVar4 = 0x9c;
        for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
          for (sVar5 = 0;
              ((sVar8 = sVar4, sVar5 < 0x9c &&
               (sVar8 = sVar5,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar4));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              pbVar1 = (byte *)(sVar7 * 0x9c + _DAT_00027270 + sVar5 + -10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar4 = sVar8;
        }
        sVar7 = 0x70;
        sVar4 = 0x9c;
        while (sVar8 = sVar4, sVar5 = sVar7 + -1, sVar7 != 0) {
          for (sVar6 = 0;
              ((sVar7 = sVar5, sVar4 = sVar8, sVar6 < 0x9c &&
               (sVar4 = sVar6,
               *(char *)((*(uint *)(sVar6 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar6 + -1 != (int)sVar8));
              sVar6 = sVar6 + 1) {
            if (-1 < sVar6 + -10) {
              pbVar1 = (byte *)(sVar5 * 0x9c + _DAT_00027270 + sVar6 + -10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar7 = 0x9c;
        while (sVar4 = sVar7 + -1, sVar7 != 0) {
          for (sVar5 = 0; sVar7 = sVar4, sVar5 < 0x70; sVar5 = sVar5 + 1) {
            if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) & 1) == 0) &&
               (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) != '\f')) {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 0;
            }
            else {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 1;
            }
          }
        }
        sVar4 = 0;
        for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
          sVar5 = 0x9c;
          while (((sVar8 = sVar5 + -1, sVar6 = sVar4, sVar5 != 0 &&
                  (sVar6 = sVar8,
                  *(char *)((*(uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar8 + 1 != (int)sVar4))) {
            sVar5 = sVar8;
            if (sVar8 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar7 * 0x9c + _DAT_00027270 + sVar8 + 10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar4 = sVar6;
        }
        sVar7 = 0;
        sVar4 = 0x70;
        while (sVar8 = sVar7, sVar5 = sVar4 + -1, sVar4 != 0) {
          sVar6 = 0x9c;
          while (((sVar2 = sVar6 + -1, sVar7 = sVar8, sVar4 = sVar5, sVar6 != 0 &&
                  (sVar7 = sVar2,
                  *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar8))) {
            sVar6 = sVar2;
            if (sVar2 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar5 * 0x9c + _DAT_00027270 + sVar2 + 10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar7 = 0x9c;
        while (sVar4 = sVar7 + -1, sVar7 != 0) {
          for (sVar5 = 0; sVar7 = sVar4, sVar5 < 0x70; sVar5 = sVar5 + 1) {
            if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) & 1) == 0) &&
               (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) != '\f')) {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 0;
            }
            else {
              *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar4) = 1;
            }
          }
        }
        for (sVar7 = 0; sVar7 < 0x9c; sVar7 = sVar7 + 1) {
          for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
            if (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
        _DAT_00027270 = extraout_A0_00;
      }
      else {
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0_01;
        func_0x00001c10();
      }
    }
  }
  return;
}



// Function: FUN_00002aa0 at 00002aa0
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002aa0(void)

{
  byte *pbVar1;
  short sVar2;
  int in_D0;
  int in_D1;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  do {
    sVar4 = unaff_D4w;
    sVar6 = unaff_D3w;
    if (in_D1 != in_D0) {
      if (-1 < unaff_D3w + -10) {
        pbVar1 = (byte *)((unaff_D3w + -10) * 0x9c + _DAT_00027270 + (int)unaff_D4w);
        *pbVar1 = *pbVar1 | 2;
      }
      unaff_D3w = unaff_D3w + 1;
      goto LAB_00002ad2;
    }
    do {
      unaff_D5w = sVar6;
      unaff_D4w = sVar4 + -1;
      if (sVar4 == 0) {
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) == '\x03') {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
          }
        }
        sVar6 = 0;
        for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
          sVar3 = 0x70;
          while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
                  (sVar5 = sVar7,
                  *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
            sVar3 = sVar7;
            if (sVar7 + 10 < 0x70) {
              pbVar1 = (byte *)((sVar7 + 10) * 0x9c + _DAT_00027270 + (int)sVar4);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar6 = sVar5;
        }
        sVar4 = 0;
        sVar6 = 0x9c;
        while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
          sVar5 = 0x70;
          while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
                  (sVar4 = sVar2,
                  *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x70) {
              pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar3);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
          }
        }
        sVar6 = 0x9c;
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          for (sVar3 = 0;
              ((sVar7 = sVar6, sVar3 < 0x9c &&
               (sVar7 = sVar3,
               *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar3 + -1 != (int)sVar6));
              sVar3 = sVar3 + 1) {
            if (-1 < sVar3 + -10) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar3 + -10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar6 = sVar7;
        }
        sVar4 = 0x70;
        sVar6 = 0x9c;
        while (sVar7 = sVar6, sVar3 = sVar4 + -1, sVar4 != 0) {
          for (sVar5 = 0;
              ((sVar4 = sVar3, sVar6 = sVar7, sVar5 < 0x9c &&
               (sVar6 = sVar5,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar7));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar5 + -10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
          }
        }
        sVar6 = 0;
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          sVar3 = 0x9c;
          while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
                  (sVar5 = sVar7,
                  *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
            sVar3 = sVar7;
            if (sVar7 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar7 + 10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar6 = sVar5;
        }
        sVar4 = 0;
        sVar6 = 0x70;
        while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
          sVar5 = 0x9c;
          while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
                  (sVar4 = sVar2,
                  *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar2 + 10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
          }
        }
        for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
          for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
            if (*(char *)(sVar6 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0;
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
        return;
      }
      unaff_D3w = 0;
LAB_00002ad2:
      sVar4 = unaff_D4w;
      sVar6 = unaff_D5w;
    } while ((0x6f < unaff_D3w) ||
            (sVar6 = unaff_D3w,
            *(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) != '\x02'));
    in_D0 = (int)unaff_D5w;
    in_D1 = unaff_D3w + -1;
  } while( true );
}



// Function: FUN_00002ad0 at 00002ad0
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ad0(void)

{
  byte *pbVar1;
  short sVar2;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  do {
    unaff_D3w = unaff_D3w + 1;
    while (((sVar4 = unaff_D5w, 0x6f < unaff_D3w ||
            (sVar4 = unaff_D3w,
            *(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) != '\x02')) || (unaff_D3w + -1 == (int)unaff_D5w))) {
      unaff_D5w = sVar4;
      if (unaff_D4w == 0) {
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) == '\x03') {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
          }
        }
        sVar6 = 0;
        for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
          sVar3 = 0x70;
          while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
                  (sVar5 = sVar7,
                  *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
            sVar3 = sVar7;
            if (sVar7 + 10 < 0x70) {
              pbVar1 = (byte *)((sVar7 + 10) * 0x9c + _DAT_00027270 + (int)sVar4);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar6 = sVar5;
        }
        sVar4 = 0;
        sVar6 = 0x9c;
        while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
          sVar5 = 0x70;
          while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
                  (sVar4 = sVar2,
                  *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x70) {
              pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar3);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
          }
        }
        sVar6 = 0x9c;
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          for (sVar3 = 0;
              ((sVar7 = sVar6, sVar3 < 0x9c &&
               (sVar7 = sVar3,
               *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar3 + -1 != (int)sVar6));
              sVar3 = sVar3 + 1) {
            if (-1 < sVar3 + -10) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar3 + -10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar6 = sVar7;
        }
        sVar4 = 0x70;
        sVar6 = 0x9c;
        while (sVar7 = sVar6, sVar3 = sVar4 + -1, sVar4 != 0) {
          for (sVar5 = 0;
              ((sVar4 = sVar3, sVar6 = sVar7, sVar5 < 0x9c &&
               (sVar6 = sVar5,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar7));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar5 + -10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
          }
        }
        sVar6 = 0;
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          sVar3 = 0x9c;
          while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
                  (sVar5 = sVar7,
                  *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
            sVar3 = sVar7;
            if (sVar7 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar7 + 10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar6 = sVar5;
        }
        sVar4 = 0;
        sVar6 = 0x70;
        while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
          sVar5 = 0x9c;
          while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
                  (sVar4 = sVar2,
                  *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar2 + 10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar6 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
            }
          }
        }
        for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
          for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
            if (*(char *)(sVar6 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0;
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
        return;
      }
      unaff_D4w = unaff_D4w + -1;
      unaff_D3w = 0;
    }
    if (-1 < unaff_D3w + -10) {
      pbVar1 = (byte *)((unaff_D3w + -10) * 0x9c + _DAT_00027270 + (int)unaff_D4w);
      *pbVar1 = *pbVar1 | 2;
    }
  } while( true );
}



// Function: FUN_00002ae8 at 00002ae8
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ae8(void)

{
  byte *pbVar1;
  short sVar2;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  while( true ) {
    for (; unaff_D3w < 0x70; unaff_D3w = unaff_D3w + 1) {
      if (*(char *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) == '\x03') {
        *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 1;
      }
      else {
        *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 0;
      }
    }
    if (unaff_D4w == 0) break;
    unaff_D3w = 0;
    unaff_D4w = unaff_D4w + -1;
  }
  sVar6 = 0;
  for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
    sVar3 = 0x70;
    while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
            (sVar5 = sVar7,
            *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
      sVar3 = sVar7;
      if (sVar7 + 10 < 0x70) {
        pbVar1 = (byte *)((sVar7 + 10) * 0x9c + _DAT_00027270 + (int)sVar4);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar6 = sVar5;
  }
  sVar4 = 0;
  sVar6 = 0x9c;
  while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
    sVar5 = 0x70;
    while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
            (sVar4 = sVar2,
            *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
      sVar5 = sVar2;
      if (sVar2 + 10 < 0x70) {
        pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar3);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar4 = 0x9c;
  while (sVar6 = sVar4 + -1, sVar4 != 0) {
    for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
      if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
         (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
        *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
      }
      else {
        *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
      }
    }
  }
  sVar6 = 0x9c;
  for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
    for (sVar3 = 0;
        ((sVar7 = sVar6, sVar3 < 0x9c &&
         (sVar7 = sVar3,
         *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar3 + -1 != (int)sVar6)); sVar3 = sVar3 + 1) {
      if (-1 < sVar3 + -10) {
        pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar3 + -10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar6 = sVar7;
  }
  sVar4 = 0x70;
  sVar6 = 0x9c;
  while (sVar7 = sVar6, sVar3 = sVar4 + -1, sVar4 != 0) {
    for (sVar5 = 0;
        ((sVar4 = sVar3, sVar6 = sVar7, sVar5 < 0x9c &&
         (sVar6 = sVar5,
         *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar5 + -1 != (int)sVar7)); sVar5 = sVar5 + 1) {
      if (-1 < sVar5 + -10) {
        pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar5 + -10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar4 = 0x9c;
  while (sVar6 = sVar4 + -1, sVar4 != 0) {
    for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
      if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
         (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
        *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
      }
      else {
        *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
      }
    }
  }
  sVar6 = 0;
  for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
    sVar3 = 0x9c;
    while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
            (sVar5 = sVar7,
            *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
      sVar3 = sVar7;
      if (sVar7 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar7 + 10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar6 = sVar5;
  }
  sVar4 = 0;
  sVar6 = 0x70;
  while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
    sVar5 = 0x9c;
    while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
            (sVar4 = sVar2,
            *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
      sVar5 = sVar2;
      if (sVar2 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar2 + 10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar4 = 0x9c;
  while (sVar6 = sVar4 + -1, sVar4 != 0) {
    for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
      if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
         (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
        *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
      }
      else {
        *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
      }
    }
  }
  for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
    for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
      if (*(char *)(sVar6 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x01') {
        *unaff_A2 = 0xff;
      }
      unaff_A2 = unaff_A2 + 1;
    }
  }
  FUN_00001d18(_DAT_00027270);
  _DAT_00027270 = extraout_A0;
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00002b00 at 00002b00
// Size: 103 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b00(void)

{
  byte *pbVar1;
  short sVar2;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  do {
    *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 1;
    while( true ) {
      unaff_D3w = unaff_D3w + 1;
      while (0x6f < unaff_D3w) {
        if (unaff_D4w == 0) {
          sVar6 = 0;
          for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
            sVar3 = 0x70;
            while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
                    (sVar5 = sVar7,
                    *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) +
                              _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
              sVar3 = sVar7;
              if (sVar7 + 10 < 0x70) {
                pbVar1 = (byte *)((sVar7 + 10) * 0x9c + _DAT_00027270 + (int)sVar4);
                *pbVar1 = *pbVar1 | 4;
              }
            }
            sVar6 = sVar5;
          }
          sVar4 = 0;
          sVar6 = 0x9c;
          while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
            sVar5 = 0x70;
            while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
                    (sVar4 = sVar2,
                    *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) +
                              _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
              sVar5 = sVar2;
              if (sVar2 + 10 < 0x70) {
                pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar3);
                *pbVar1 = *pbVar1 | 8;
              }
            }
          }
          sVar4 = 0x9c;
          while (sVar6 = sVar4 + -1, sVar4 != 0) {
            for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
              if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
                 (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
                *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
              }
              else {
                *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
              }
            }
          }
          sVar6 = 0x9c;
          for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
            for (sVar3 = 0;
                ((sVar7 = sVar6, sVar3 < 0x9c &&
                 (sVar7 = sVar3,
                 *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                           _DAT_0002884c + 0x711) == '\x02')) && (sVar3 + -1 != (int)sVar6));
                sVar3 = sVar3 + 1) {
              if (-1 < sVar3 + -10) {
                pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar3 + -10);
                *pbVar1 = *pbVar1 | 4;
              }
            }
            sVar6 = sVar7;
          }
          sVar4 = 0x70;
          sVar6 = 0x9c;
          while (sVar7 = sVar6, sVar3 = sVar4 + -1, sVar4 != 0) {
            for (sVar5 = 0;
                ((sVar4 = sVar3, sVar6 = sVar7, sVar5 < 0x9c &&
                 (sVar6 = sVar5,
                 *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                           _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar7));
                sVar5 = sVar5 + 1) {
              if (-1 < sVar5 + -10) {
                pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar5 + -10);
                *pbVar1 = *pbVar1 | 8;
              }
            }
          }
          sVar4 = 0x9c;
          while (sVar6 = sVar4 + -1, sVar4 != 0) {
            for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
              if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
                 (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
                *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
              }
              else {
                *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
              }
            }
          }
          sVar6 = 0;
          for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
            sVar3 = 0x9c;
            while (((sVar7 = sVar3 + -1, sVar5 = sVar6, sVar3 != 0 &&
                    (sVar5 = sVar7,
                    *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                              _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar6))) {
              sVar3 = sVar7;
              if (sVar7 + 10 < 0x9c) {
                pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar7 + 10);
                *pbVar1 = *pbVar1 | 4;
              }
            }
            sVar6 = sVar5;
          }
          sVar4 = 0;
          sVar6 = 0x70;
          while (sVar7 = sVar4, sVar3 = sVar6 + -1, sVar6 != 0) {
            sVar5 = 0x9c;
            while (((sVar2 = sVar5 + -1, sVar4 = sVar7, sVar6 = sVar3, sVar5 != 0 &&
                    (sVar4 = sVar2,
                    *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                              _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
              sVar5 = sVar2;
              if (sVar2 + 10 < 0x9c) {
                pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar2 + 10);
                *pbVar1 = *pbVar1 | 8;
              }
            }
          }
          sVar4 = 0x9c;
          while (sVar6 = sVar4 + -1, sVar4 != 0) {
            for (sVar3 = 0; sVar4 = sVar6, sVar3 < 0x70; sVar3 = sVar3 + 1) {
              if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) & 1) == 0) &&
                 (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) != '\f')) {
                *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 0;
              }
              else {
                *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) = 1;
              }
            }
          }
          for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
            for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
              if (*(char *)(sVar6 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x01') {
                *unaff_A2 = 0xff;
              }
              unaff_A2 = unaff_A2 + 1;
            }
          }
          FUN_00001d18(_DAT_00027270);
          _DAT_00027270 = extraout_A0;
          _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
          return;
        }
        unaff_D4w = unaff_D4w + -1;
        unaff_D3w = 0;
      }
      if (*(char *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) == '\x03') break;
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 0;
    }
  } while( true );
}



// Function: FUN_00002b68 at 00002b68
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b68(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short unaff_D4w;
  short sVar6;
  short unaff_D5w;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  while (sVar6 = unaff_D5w, unaff_D4w = unaff_D4w + 1, unaff_D4w < 0x9c) {
    sVar3 = 0x70;
    while (((sVar5 = sVar3 + -1, unaff_D5w = sVar6, sVar3 != 0 &&
            (unaff_D5w = sVar5,
            *(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + 1 != (int)sVar6))) {
      sVar3 = sVar5;
      if (sVar5 + 10 < 0x70) {
        pbVar1 = (byte *)((sVar5 + 10) * 0x9c + _DAT_00027270 + (int)unaff_D4w);
        *pbVar1 = *pbVar1 | 4;
      }
    }
  }
  sVar6 = 0;
  sVar3 = 0x9c;
  while (sVar7 = sVar6, sVar5 = sVar3 + -1, sVar3 != 0) {
    sVar4 = 0x70;
    while (((sVar2 = sVar4 + -1, sVar6 = sVar7, sVar3 = sVar5, sVar4 != 0 &&
            (sVar6 = sVar2,
            *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
      sVar4 = sVar2;
      if (sVar2 + 10 < 0x70) {
        pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar5);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar6 = 0x9c;
  while (sVar3 = sVar6 + -1, sVar6 != 0) {
    for (sVar5 = 0; sVar6 = sVar3, sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) & 1) == 0) &&
         (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) != '\f')) {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) = 0;
      }
      else {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) = 1;
      }
    }
  }
  sVar3 = 0x9c;
  for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
    for (sVar5 = 0;
        ((sVar7 = sVar3, sVar5 < 0x9c &&
         (sVar7 = sVar5,
         *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar6 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar5 + -1 != (int)sVar3)); sVar5 = sVar5 + 1) {
      if (-1 < sVar5 + -10) {
        pbVar1 = (byte *)(sVar6 * 0x9c + _DAT_00027270 + sVar5 + -10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar3 = sVar7;
  }
  sVar6 = 0x70;
  sVar3 = 0x9c;
  while (sVar7 = sVar3, sVar5 = sVar6 + -1, sVar6 != 0) {
    for (sVar4 = 0;
        ((sVar6 = sVar5, sVar3 = sVar7, sVar4 < 0x9c &&
         (sVar3 = sVar4,
         *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar4 + -1 != (int)sVar7)); sVar4 = sVar4 + 1) {
      if (-1 < sVar4 + -10) {
        pbVar1 = (byte *)(sVar5 * 0x9c + _DAT_00027270 + sVar4 + -10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar6 = 0x9c;
  while (sVar3 = sVar6 + -1, sVar6 != 0) {
    for (sVar5 = 0; sVar6 = sVar3, sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) & 1) == 0) &&
         (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) != '\f')) {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) = 0;
      }
      else {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) = 1;
      }
    }
  }
  sVar3 = 0;
  for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
    sVar5 = 0x9c;
    while (((sVar7 = sVar5 + -1, sVar4 = sVar3, sVar5 != 0 &&
            (sVar4 = sVar7,
            *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar6 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar3))) {
      sVar5 = sVar7;
      if (sVar7 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar6 * 0x9c + _DAT_00027270 + sVar7 + 10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar3 = sVar4;
  }
  sVar6 = 0;
  sVar3 = 0x70;
  while (sVar7 = sVar6, sVar5 = sVar3 + -1, sVar3 != 0) {
    sVar4 = 0x9c;
    while (((sVar2 = sVar4 + -1, sVar6 = sVar7, sVar3 = sVar5, sVar4 != 0 &&
            (sVar6 = sVar2,
            *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
      sVar4 = sVar2;
      if (sVar2 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar5 * 0x9c + _DAT_00027270 + sVar2 + 10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar6 = 0x9c;
  while (sVar3 = sVar6 + -1, sVar6 != 0) {
    for (sVar5 = 0; sVar6 = sVar3, sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) & 1) == 0) &&
         (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) != '\f')) {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) = 0;
      }
      else {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar3) = 1;
      }
    }
  }
  for (sVar6 = 0; sVar6 < 0x9c; sVar6 = sVar6 + 1) {
    for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
      if (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar6) == '\x01') {
        *unaff_A2 = 0xff;
      }
      unaff_A2 = unaff_A2 + 1;
    }
  }
  FUN_00001d18(_DAT_00027270);
  _DAT_00027270 = extraout_A0;
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00002bb8 at 00002bb8
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002bb8(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  sVar6 = 0;
  sVar5 = 0x9c;
  while (sVar7 = sVar6, sVar4 = sVar5 + -1, sVar5 != 0) {
    sVar3 = 0x70;
    while (((sVar2 = sVar3 + -1, sVar6 = sVar7, sVar5 = sVar4, sVar3 != 0 &&
            (sVar6 = sVar2,
            *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
      sVar3 = sVar2;
      if (sVar2 + 10 < 0x70) {
        pbVar1 = (byte *)((sVar2 + 10) * 0x9c + _DAT_00027270 + (int)sVar4);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar6 = 0x9c;
  while (sVar5 = sVar6 + -1, sVar6 != 0) {
    for (sVar4 = 0; sVar6 = sVar5, sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) & 1) == 0) &&
         (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) != '\f')) {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) = 0;
      }
      else {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) = 1;
      }
    }
  }
  sVar5 = 0x9c;
  for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
    for (sVar4 = 0;
        ((sVar7 = sVar5, sVar4 < 0x9c &&
         (sVar7 = sVar4,
         *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar6 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar4 + -1 != (int)sVar5)); sVar4 = sVar4 + 1) {
      if (-1 < sVar4 + -10) {
        pbVar1 = (byte *)(sVar6 * 0x9c + _DAT_00027270 + sVar4 + -10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar5 = sVar7;
  }
  sVar6 = 0x70;
  sVar5 = 0x9c;
  while (sVar7 = sVar5, sVar4 = sVar6 + -1, sVar6 != 0) {
    for (sVar3 = 0;
        ((sVar6 = sVar4, sVar5 = sVar7, sVar3 < 0x9c &&
         (sVar5 = sVar3,
         *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar3 + -1 != (int)sVar7)); sVar3 = sVar3 + 1) {
      if (-1 < sVar3 + -10) {
        pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar3 + -10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar6 = 0x9c;
  while (sVar5 = sVar6 + -1, sVar6 != 0) {
    for (sVar4 = 0; sVar6 = sVar5, sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) & 1) == 0) &&
         (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) != '\f')) {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) = 0;
      }
      else {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) = 1;
      }
    }
  }
  sVar5 = 0;
  for (sVar6 = 0; sVar6 < 0x70; sVar6 = sVar6 + 1) {
    sVar4 = 0x9c;
    while (((sVar7 = sVar4 + -1, sVar3 = sVar5, sVar4 != 0 &&
            (sVar3 = sVar7,
            *(char *)((*(uint *)(sVar7 * 0xe0 + _DAT_00028850 + sVar6 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar7 + 1 != (int)sVar5))) {
      sVar4 = sVar7;
      if (sVar7 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar6 * 0x9c + _DAT_00027270 + sVar7 + 10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar5 = sVar3;
  }
  sVar6 = 0;
  sVar5 = 0x70;
  while (sVar7 = sVar6, sVar4 = sVar5 + -1, sVar5 != 0) {
    sVar3 = 0x9c;
    while (((sVar2 = sVar3 + -1, sVar6 = sVar7, sVar5 = sVar4, sVar3 != 0 &&
            (sVar6 = sVar2,
            *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar7))) {
      sVar3 = sVar2;
      if (sVar2 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar2 + 10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar6 = 0x9c;
  while (sVar5 = sVar6 + -1, sVar6 != 0) {
    for (sVar4 = 0; sVar6 = sVar5, sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) & 1) == 0) &&
         (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) != '\f')) {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) = 0;
      }
      else {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar5) = 1;
      }
    }
  }
  for (sVar6 = 0; sVar6 < 0x9c; sVar6 = sVar6 + 1) {
    for (sVar5 = 0; sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar6) == '\x01') {
        *unaff_A2 = 0xff;
      }
      unaff_A2 = unaff_A2 + 1;
    }
  }
  FUN_00001d18(_DAT_00027270);
  _DAT_00027270 = extraout_A0;
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00002bc0 at 00002bc0
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002bc0(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  bool bVar8;
  
  do {
    sVar3 = 0x70;
    while (((sVar7 = sVar3 + -1, sVar5 = unaff_D5w, sVar3 != 0 &&
            (sVar5 = sVar7,
            *(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) == '\x02')) && (sVar7 + 1 != (int)unaff_D5w))) {
      sVar3 = sVar7;
      if (sVar7 + 10 < 0x70) {
        pbVar1 = (byte *)((sVar7 + 10) * 0x9c + _DAT_00027270 + (int)unaff_D4w);
        *pbVar1 = *pbVar1 | 8;
      }
    }
    bVar8 = unaff_D4w != 0;
    unaff_D4w = unaff_D4w + -1;
    unaff_D5w = sVar5;
  } while (bVar8);
  sVar3 = 0x9c;
  while (sVar7 = sVar3 + -1, sVar3 != 0) {
    for (sVar5 = 0; sVar3 = sVar7, sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
         (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
      }
      else {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
      }
    }
  }
  sVar7 = 0x9c;
  for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
    for (sVar5 = 0;
        ((sVar6 = sVar7, sVar5 < 0x9c &&
         (sVar6 = sVar5,
         *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar5 + -1 != (int)sVar7)); sVar5 = sVar5 + 1) {
      if (-1 < sVar5 + -10) {
        pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar5 + -10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar7 = sVar6;
  }
  sVar3 = 0x70;
  sVar7 = 0x9c;
  while (sVar6 = sVar7, sVar5 = sVar3 + -1, sVar3 != 0) {
    for (sVar4 = 0;
        ((sVar3 = sVar5, sVar7 = sVar6, sVar4 < 0x9c &&
         (sVar7 = sVar4,
         *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) + _DAT_0002884c +
                  0x711) == '\x02')) && (sVar4 + -1 != (int)sVar6)); sVar4 = sVar4 + 1) {
      if (-1 < sVar4 + -10) {
        pbVar1 = (byte *)(sVar5 * 0x9c + _DAT_00027270 + sVar4 + -10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar3 = 0x9c;
  while (sVar7 = sVar3 + -1, sVar3 != 0) {
    for (sVar5 = 0; sVar3 = sVar7, sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
         (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
      }
      else {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
      }
    }
  }
  sVar7 = 0;
  for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
    sVar5 = 0x9c;
    while (((sVar6 = sVar5 + -1, sVar4 = sVar7, sVar5 != 0 &&
            (sVar4 = sVar6,
            *(char *)((*(uint *)(sVar6 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar6 + 1 != (int)sVar7))) {
      sVar5 = sVar6;
      if (sVar6 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar6 + 10);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    sVar7 = sVar4;
  }
  sVar3 = 0;
  sVar7 = 0x70;
  while (sVar6 = sVar3, sVar5 = sVar7 + -1, sVar7 != 0) {
    sVar4 = 0x9c;
    while (((sVar2 = sVar4 + -1, sVar3 = sVar6, sVar7 = sVar5, sVar4 != 0 &&
            (sVar3 = sVar2,
            *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar5 * 2) >> 0x18) + _DAT_0002884c
                     + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar6))) {
      sVar4 = sVar2;
      if (sVar2 + 10 < 0x9c) {
        pbVar1 = (byte *)(sVar5 * 0x9c + _DAT_00027270 + sVar2 + 10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
  }
  sVar3 = 0x9c;
  while (sVar7 = sVar3 + -1, sVar3 != 0) {
    for (sVar5 = 0; sVar3 = sVar7, sVar5 < 0x70; sVar5 = sVar5 + 1) {
      if (((*(byte *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
         (*(char *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
      }
      else {
        *(undefined1 *)(sVar5 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
      }
    }
  }
  for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
    for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
      if (*(char *)(sVar7 * 0x9c + _DAT_00027270 + (int)sVar3) == '\x01') {
        *unaff_A2 = 0xff;
      }
      unaff_A2 = unaff_A2 + 1;
    }
  }
  FUN_00001d18(_DAT_00027270);
  _DAT_00027270 = extraout_A0;
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00002bd8 at 00002bd8
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002bd8(void)

{
  byte *pbVar1;
  short sVar2;
  uint in_D0;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short unaff_D5w;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  while ((sVar4 = unaff_D4w, sVar7 = unaff_D3w, *(char *)(in_D0 + _DAT_0002884c + 0x711) != '\x02'
         || (unaff_D3w + 1 == (int)unaff_D5w))) {
    do {
      unaff_D4w = sVar4 + -1;
      if (sVar4 == 0) {
        sVar4 = 0x9c;
        while (sVar7 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar7, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        sVar7 = 0x9c;
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          for (sVar3 = 0;
              ((sVar6 = sVar7, sVar3 < 0x9c &&
               (sVar6 = sVar3,
               *(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar3 + -1 != (int)sVar7));
              sVar3 = sVar3 + 1) {
            if (-1 < sVar3 + -10) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar3 + -10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar7 = sVar6;
        }
        sVar4 = 0x70;
        sVar7 = 0x9c;
        while (sVar6 = sVar7, sVar3 = sVar4 + -1, sVar4 != 0) {
          for (sVar5 = 0;
              ((sVar4 = sVar3, sVar7 = sVar6, sVar5 < 0x9c &&
               (sVar7 = sVar5,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar6));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar5 + -10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar7 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar7, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        sVar7 = 0;
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          sVar3 = 0x9c;
          while (((sVar6 = sVar3 + -1, sVar5 = sVar7, sVar3 != 0 &&
                  (sVar5 = sVar6,
                  *(char *)((*(uint *)(sVar6 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar6 + 1 != (int)sVar7))) {
            sVar3 = sVar6;
            if (sVar6 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar6 + 10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar7 = sVar5;
        }
        sVar4 = 0;
        sVar7 = 0x70;
        while (sVar6 = sVar4, sVar3 = sVar7 + -1, sVar7 != 0) {
          sVar5 = 0x9c;
          while (((sVar2 = sVar5 + -1, sVar4 = sVar6, sVar7 = sVar3, sVar5 != 0 &&
                  (sVar4 = sVar2,
                  *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar6))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar2 + 10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar4 = 0x9c;
        while (sVar7 = sVar4 + -1, sVar4 != 0) {
          for (sVar3 = 0; sVar4 = sVar7, sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (((*(byte *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
          for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
            if (*(char *)(sVar7 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0;
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
        return;
      }
      sVar3 = 0x70;
      unaff_D5w = sVar7;
LAB_00002c2a:
      unaff_D3w = sVar3 + -1;
      sVar4 = unaff_D4w;
      sVar7 = unaff_D5w;
    } while (sVar3 == 0);
    in_D0 = *(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18;
  }
  sVar3 = unaff_D3w;
  if (0x6f < unaff_D3w + 10) goto LAB_00002c2a;
  pbVar1 = (byte *)((unaff_D3w + 10) * 0x9c + _DAT_00027270 + (int)unaff_D4w);
  *pbVar1 = *pbVar1 | 8;
  goto LAB_00002c2a;
}



// Function: FUN_00002c50 at 00002c50
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c50(void)

{
  byte *pbVar1;
  short sVar2;
  int in_D0;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int in_A0;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  do {
    if (((*(byte *)(in_D0 + in_A0 + (int)unaff_D4w) & 1) == 0) &&
       (*(char *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) != '\f')) {
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 0;
    }
    else {
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 1;
    }
    unaff_D3w = unaff_D3w + 1;
    while (0x6f < unaff_D3w) {
      if (unaff_D4w == 0) {
        sVar7 = 0x9c;
        for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
          for (sVar4 = 0;
              ((sVar6 = sVar7, sVar4 < 0x9c &&
               (sVar6 = sVar4,
               *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar4 + -1 != (int)sVar7));
              sVar4 = sVar4 + 1) {
            if (-1 < sVar4 + -10) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar4 + -10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar7 = sVar6;
        }
        sVar3 = 0x70;
        sVar7 = 0x9c;
        while (sVar6 = sVar7, sVar4 = sVar3 + -1, sVar3 != 0) {
          for (sVar5 = 0;
              ((sVar3 = sVar4, sVar7 = sVar6, sVar5 < 0x9c &&
               (sVar7 = sVar5,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar6));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar5 + -10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar3 = 0x9c;
        while (sVar7 = sVar3 + -1, sVar3 != 0) {
          for (sVar4 = 0; sVar3 = sVar7, sVar4 < 0x70; sVar4 = sVar4 + 1) {
            if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        sVar7 = 0;
        for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
          sVar4 = 0x9c;
          while (((sVar6 = sVar4 + -1, sVar5 = sVar7, sVar4 != 0 &&
                  (sVar5 = sVar6,
                  *(char *)((*(uint *)(sVar6 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar6 + 1 != (int)sVar7))) {
            sVar4 = sVar6;
            if (sVar6 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar6 + 10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar7 = sVar5;
        }
        sVar3 = 0;
        sVar7 = 0x70;
        while (sVar6 = sVar3, sVar4 = sVar7 + -1, sVar7 != 0) {
          sVar5 = 0x9c;
          while (((sVar2 = sVar5 + -1, sVar3 = sVar6, sVar7 = sVar4, sVar5 != 0 &&
                  (sVar3 = sVar2,
                  *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar6))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar2 + 10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar3 = 0x9c;
        while (sVar7 = sVar3 + -1, sVar3 != 0) {
          for (sVar4 = 0; sVar3 = sVar7, sVar4 < 0x70; sVar4 = sVar4 + 1) {
            if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
          for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
            if (*(char *)(sVar7 * 0x9c + _DAT_00027270 + (int)sVar3) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0;
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
        return;
      }
      unaff_D4w = unaff_D4w + -1;
      unaff_D3w = 0;
    }
    in_D0 = unaff_D3w * 0x9c;
    in_A0 = _DAT_00027270;
  } while( true );
}



// Function: FUN_00002c58 at 00002c58
// Size: 15 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c58(void)

{
  byte *pbVar1;
  short sVar2;
  uint in_D0;
  uint in_D1;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  do {
    if (((in_D1 & in_D0) == 0) &&
       (*(char *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) != '\f')) {
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 0;
    }
    else {
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 1;
    }
    unaff_D3w = unaff_D3w + 1;
    while (0x6f < unaff_D3w) {
      if (unaff_D4w == 0) {
        sVar7 = 0x9c;
        for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
          for (sVar4 = 0;
              ((sVar6 = sVar7, sVar4 < 0x9c &&
               (sVar6 = sVar4,
               *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar4 + -1 != (int)sVar7));
              sVar4 = sVar4 + 1) {
            if (-1 < sVar4 + -10) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar4 + -10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar7 = sVar6;
        }
        sVar3 = 0x70;
        sVar7 = 0x9c;
        while (sVar6 = sVar7, sVar4 = sVar3 + -1, sVar3 != 0) {
          for (sVar5 = 0;
              ((sVar3 = sVar4, sVar7 = sVar6, sVar5 < 0x9c &&
               (sVar7 = sVar5,
               *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar6));
              sVar5 = sVar5 + 1) {
            if (-1 < sVar5 + -10) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar5 + -10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar3 = 0x9c;
        while (sVar7 = sVar3 + -1, sVar3 != 0) {
          for (sVar4 = 0; sVar3 = sVar7, sVar4 < 0x70; sVar4 = sVar4 + 1) {
            if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        sVar7 = 0;
        for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
          sVar4 = 0x9c;
          while (((sVar6 = sVar4 + -1, sVar5 = sVar7, sVar4 != 0 &&
                  (sVar5 = sVar6,
                  *(char *)((*(uint *)(sVar6 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar6 + 1 != (int)sVar7))) {
            sVar4 = sVar6;
            if (sVar6 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar6 + 10);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          sVar7 = sVar5;
        }
        sVar3 = 0;
        sVar7 = 0x70;
        while (sVar6 = sVar3, sVar4 = sVar7 + -1, sVar7 != 0) {
          sVar5 = 0x9c;
          while (((sVar2 = sVar5 + -1, sVar3 = sVar6, sVar7 = sVar4, sVar5 != 0 &&
                  (sVar3 = sVar2,
                  *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                            _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar6))) {
            sVar5 = sVar2;
            if (sVar2 + 10 < 0x9c) {
              pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar2 + 10);
              *pbVar1 = *pbVar1 | 8;
            }
          }
        }
        sVar3 = 0x9c;
        while (sVar7 = sVar3 + -1, sVar3 != 0) {
          for (sVar4 = 0; sVar3 = sVar7, sVar4 < 0x70; sVar4 = sVar4 + 1) {
            if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
               (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
            }
            else {
              *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
            }
          }
        }
        for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
          for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
            if (*(char *)(sVar7 * 0x9c + _DAT_00027270 + (int)sVar3) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0;
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
        return;
      }
      unaff_D4w = unaff_D4w + -1;
      unaff_D3w = 0;
    }
    in_D0 = CONCAT31((int3)((uint)(unaff_D3w * 0x9c) >> 8),
                     *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w));
    in_D1 = 1;
  } while( true );
}



// Function: FUN_00002c68 at 00002c68
// Size: 566 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c68(void)

{
  byte *pbVar1;
  short sVar2;
  int in_D0;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int in_A0;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  
  do {
    if (*(char *)(in_D0 + in_A0 + (int)unaff_D4w) != '\f') {
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 0;
      goto LAB_00002c9a;
    }
    do {
      *(undefined1 *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) = 1;
LAB_00002c9a:
      unaff_D3w = unaff_D3w + 1;
      while (0x6f < unaff_D3w) {
        if (unaff_D4w == 0) {
          sVar7 = 0x9c;
          for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
            for (sVar4 = 0;
                ((sVar6 = sVar7, sVar4 < 0x9c &&
                 (sVar6 = sVar4,
                 *(char *)((*(uint *)(sVar4 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                           _DAT_0002884c + 0x711) == '\x02')) && (sVar4 + -1 != (int)sVar7));
                sVar4 = sVar4 + 1) {
              if (-1 < sVar4 + -10) {
                pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar4 + -10);
                *pbVar1 = *pbVar1 | 4;
              }
            }
            sVar7 = sVar6;
          }
          sVar3 = 0x70;
          sVar7 = 0x9c;
          while (sVar6 = sVar7, sVar4 = sVar3 + -1, sVar3 != 0) {
            for (sVar5 = 0;
                ((sVar3 = sVar4, sVar7 = sVar6, sVar5 < 0x9c &&
                 (sVar7 = sVar5,
                 *(char *)((*(uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                           _DAT_0002884c + 0x711) == '\x02')) && (sVar5 + -1 != (int)sVar6));
                sVar5 = sVar5 + 1) {
              if (-1 < sVar5 + -10) {
                pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar5 + -10);
                *pbVar1 = *pbVar1 | 8;
              }
            }
          }
          sVar3 = 0x9c;
          while (sVar7 = sVar3 + -1, sVar3 != 0) {
            for (sVar4 = 0; sVar3 = sVar7, sVar4 < 0x70; sVar4 = sVar4 + 1) {
              if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
                 (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
                *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
              }
              else {
                *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
              }
            }
          }
          sVar7 = 0;
          for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
            sVar4 = 0x9c;
            while (((sVar6 = sVar4 + -1, sVar5 = sVar7, sVar4 != 0 &&
                    (sVar5 = sVar6,
                    *(char *)((*(uint *)(sVar6 * 0xe0 + _DAT_00028850 + sVar3 * 2) >> 0x18) +
                              _DAT_0002884c + 0x711) == '\x02')) && (sVar6 + 1 != (int)sVar7))) {
              sVar4 = sVar6;
              if (sVar6 + 10 < 0x9c) {
                pbVar1 = (byte *)(sVar3 * 0x9c + _DAT_00027270 + sVar6 + 10);
                *pbVar1 = *pbVar1 | 4;
              }
            }
            sVar7 = sVar5;
          }
          sVar3 = 0;
          sVar7 = 0x70;
          while (sVar6 = sVar3, sVar4 = sVar7 + -1, sVar7 != 0) {
            sVar5 = 0x9c;
            while (((sVar2 = sVar5 + -1, sVar3 = sVar6, sVar7 = sVar4, sVar5 != 0 &&
                    (sVar3 = sVar2,
                    *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) +
                              _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)sVar6))) {
              sVar5 = sVar2;
              if (sVar2 + 10 < 0x9c) {
                pbVar1 = (byte *)(sVar4 * 0x9c + _DAT_00027270 + sVar2 + 10);
                *pbVar1 = *pbVar1 | 8;
              }
            }
          }
          sVar3 = 0x9c;
          while (sVar7 = sVar3 + -1, sVar3 != 0) {
            for (sVar4 = 0; sVar3 = sVar7, sVar4 < 0x70; sVar4 = sVar4 + 1) {
              if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) & 1) == 0) &&
                 (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) != '\f')) {
                *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 0;
              }
              else {
                *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar7) = 1;
              }
            }
          }
          for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
            for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
              if (*(char *)(sVar7 * 0x9c + _DAT_00027270 + (int)sVar3) == '\x01') {
                *unaff_A2 = 0xff;
              }
              unaff_A2 = unaff_A2 + 1;
            }
          }
          FUN_00001d18(_DAT_00027270);
          _DAT_00027270 = extraout_A0;
          _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
          return;
        }
        unaff_D4w = unaff_D4w + -1;
        unaff_D3w = 0;
      }
    } while ((*(byte *)(unaff_D3w * 0x9c + _DAT_00027270 + (int)unaff_D4w) & 1) != 0);
    in_D0 = unaff_D3w * 0x9c;
    in_A0 = _DAT_00027270;
  } while( true );
}



// Function: FUN_00002f10 at 00002f10
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f10(void)

{
  byte *pbVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  undefined1 in_ZF;
  
  do {
    sVar4 = unaff_D5w;
    if ((((bool)in_ZF) ||
        (sVar4 = unaff_D4w,
        *(char *)((*(uint *)(unaff_D4w * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) != '\x02')) || (unaff_D4w + 1 == (int)unaff_D5w)) {
      if (unaff_D3w == 0) {
        sVar4 = 0x9c;
        while (sVar3 = sVar4 + -1, sVar4 != 0) {
          for (sVar2 = 0; sVar4 = sVar3, sVar2 < 0x70; sVar2 = sVar2 + 1) {
            if (((*(byte *)(sVar2 * 0x9c + _DAT_00027270 + (int)sVar3) & 1) == 0) &&
               (*(char *)(sVar2 * 0x9c + _DAT_00027270 + (int)sVar3) != '\f')) {
              *(undefined1 *)(sVar2 * 0x9c + _DAT_00027270 + (int)sVar3) = 0;
            }
            else {
              *(undefined1 *)(sVar2 * 0x9c + _DAT_00027270 + (int)sVar3) = 1;
            }
          }
        }
        for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
          for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
            if (*(char *)(sVar3 * 0x9c + _DAT_00027270 + (int)sVar4) == '\x01') {
              *unaff_A2 = 0xff;
            }
            unaff_A2 = unaff_A2 + 1;
          }
        }
        FUN_00001d18(_DAT_00027270);
        _DAT_00027270 = extraout_A0;
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
        return;
      }
      sVar3 = 0x9c;
      unaff_D3w = unaff_D3w + -1;
      unaff_D5w = sVar4;
    }
    else {
      sVar3 = unaff_D4w;
      if (unaff_D4w + 10 < 0x9c) {
        pbVar1 = (byte *)(unaff_D3w * 0x9c + _DAT_00027270 + unaff_D4w + 10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
    unaff_D4w = sVar3 + -1;
    in_ZF = sVar3 == 0;
  } while( true );
}



// Function: FUN_00002f18 at 00002f18
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f18(void)

{
  byte *pbVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  short sVar4;
  short unaff_D5w;
  undefined4 extraout_A0;
  undefined1 *unaff_A2;
  int unaff_A6;
  undefined1 in_ZF;
  
  while (!(bool)in_ZF) {
    sVar3 = 0x9c;
    while (((sVar2 = sVar3 + -1, sVar4 = unaff_D5w, sVar3 != 0 &&
            (sVar4 = sVar2,
            *(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + unaff_D3w * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) == '\x02')) && (sVar2 + 1 != (int)unaff_D5w))) {
      sVar3 = sVar2;
      if (sVar2 + 10 < 0x9c) {
        pbVar1 = (byte *)(unaff_D3w * 0x9c + _DAT_00027270 + sVar2 + 10);
        *pbVar1 = *pbVar1 | 8;
      }
    }
    in_ZF = unaff_D3w == 0;
    unaff_D3w = unaff_D3w + -1;
    unaff_D5w = sVar4;
  }
  sVar3 = 0x9c;
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    for (sVar4 = 0; sVar3 = sVar2, sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (((*(byte *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar2) & 1) == 0) &&
         (*(char *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar2) != '\f')) {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar2) = 0;
      }
      else {
        *(undefined1 *)(sVar4 * 0x9c + _DAT_00027270 + (int)sVar2) = 1;
      }
    }
  }
  for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
    for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
      if (*(char *)(sVar2 * 0x9c + _DAT_00027270 + (int)sVar3) == '\x01') {
        *unaff_A2 = 0xff;
      }
      unaff_A2 = unaff_A2 + 1;
    }
  }
  FUN_00001d18(_DAT_00027270);
  _DAT_00027270 = extraout_A0;
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00003008 at 00003008
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003320 at 00003320
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003320(void)

{
  int in_D0;
  short unaff_D3w;
  short sVar1;
  int iVar2;
  undefined2 *unaff_A2;
  undefined4 unaff_A3;
  int unaff_A4;
  int unaff_A6;
  short sStack00000004;
  undefined2 uStack00000006;
  undefined1 uStack00000008;
  
  while( true ) {
    sStack00000004 = (short)unaff_A6;
    switch(in_D0) {
    case 0:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -4) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -4) >> 8);
      sStack00000004 = 0x4085;
      func_0x000076c0();
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      break;
    case 1:
      uStack00000006 = (undefined2)((uint)((int)unaff_A2 + 0x13) >> 0x10);
      uStack00000008 = (undefined1)((uint)((int)unaff_A2 + 0x13) >> 8);
      sStack00000004 = sStack00000004 + -0x90;
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4074,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8)
                     );
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8a);
      unaff_A2[3] = *(undefined2 *)(unaff_A6 + -0x8e);
      *(undefined1 *)((int)unaff_A2 + 0x53) = 0;
      for (sVar1 = 0; sVar1 < 0x40; sVar1 = sVar1 + 1) {
        *(char *)((int)unaff_A2 + sVar1 + 0x13) = *(char *)((int)unaff_A2 + sVar1 + 0x13) + -0x30;
      }
      break;
    case 2:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -0xf2) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -0xf2) >> 8);
      sStack00000004 = sStack00000004 + -0xee;
      func_0x000076c0(unaff_A6 + -0x86,0x14042,unaff_A6 + -4,unaff_A6 + -8,(short)(unaff_A6 + -0x8c)
                      ,(short)(unaff_A6 + -0x90),(short)(unaff_A6 + -0xe0),(short)(unaff_A6 + -0xe4)
                     );
      unaff_A2[7] = *(undefined2 *)(unaff_A6 + -2);
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -0x8a);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8e);
      unaff_A2[3] = *(undefined2 *)(unaff_A6 + -0xde);
      unaff_A2[4] = *(undefined2 *)(unaff_A6 + -0xe2);
      unaff_A2[5] = *(undefined2 *)(unaff_A6 + -0xe8);
      unaff_A2[6] = *(undefined2 *)(unaff_A6 + -0xec);
      unaff_A2[8] = *(undefined2 *)(unaff_A6 + -0xf0);
      break;
    case 3:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -0x90) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -0x90) >> 8);
      sStack00000004 = sStack00000004 + -0x8c;
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4036,(short)(unaff_A6 + -4));
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8a);
      unaff_A2[3] = *(undefined2 *)(unaff_A6 + -0x8e);
      break;
    case 4:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -0x8c) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -0x8c) >> 8);
      sStack00000004 = sStack00000004 + -8;
      func_0x000076c0((short)(unaff_A6 + -0x86),0x402c);
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8a);
      break;
    case 5:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -8) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -8) >> 8);
      sStack00000004 = sStack00000004 + -4;
      func_0x000076c0((short)(unaff_A6 + -0x86));
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      break;
    case 6:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -0xe0) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -0xe0) >> 8);
      sStack00000004 = sStack00000004 + -0x90;
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4016,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8)
                     );
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8a);
      unaff_A2[3] = *(undefined2 *)(unaff_A6 + -0x8e);
      unaff_A2[4] = *(undefined2 *)(unaff_A6 + -0xde);
      break;
    case 7:
      uStack00000006 = (undefined2)((uint)(unaff_A6 + -0xea) >> 0x10);
      uStack00000008 = (undefined1)((uint)(unaff_A6 + -0xea) >> 8);
      sStack00000004 = sStack00000004 + -0xe4;
      func_0x000076c0(unaff_A6 + -0x86,0x14001,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8),
                      (short)(unaff_A6 + -0x8c),(short)(unaff_A6 + -0x90));
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8a);
      unaff_A2[3] = *(undefined2 *)(unaff_A6 + -0x8e);
      unaff_A2[4] = *(undefined2 *)(unaff_A6 + -0xde);
      unaff_A2[5] = *(undefined2 *)(unaff_A6 + -0xe2);
      unaff_A2[6] = *(undefined2 *)(unaff_A6 + -0xe8);
      break;
    case 8:
      uStack00000006 = (undefined2)((uint)((int)unaff_A2 + 0x13) >> 0x10);
      uStack00000008 = (undefined1)((uint)((int)unaff_A2 + 0x13) >> 8);
      sStack00000004 = sStack00000004 + -0xe4;
      func_0x000076c0(unaff_A6 + -0x86,0x1405d,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8),
                      (short)(unaff_A6 + -0x8c),(short)(unaff_A6 + -0x90));
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      unaff_A2[1] = *(undefined2 *)(unaff_A6 + -6);
      unaff_A2[2] = *(undefined2 *)(unaff_A6 + -0x8a);
      unaff_A2[3] = *(undefined2 *)(unaff_A6 + -0x8e);
      unaff_A2[4] = *(undefined2 *)(unaff_A6 + -0xde);
      unaff_A2[5] = *(undefined2 *)(unaff_A6 + -0xe2);
      *(undefined1 *)((int)unaff_A2 + 0x53) = 0;
      for (sVar1 = 0; sVar1 < 0x40; sVar1 = sVar1 + 1) {
        *(char *)((int)unaff_A2 + sVar1 + 0x13) = *(char *)((int)unaff_A2 + sVar1 + 0x13) + -0x30;
      }
    }
    for (sVar1 = 0; sVar1 < 7; sVar1 = sVar1 + 1) {
      if (unaff_A2[sVar1] == 0xff) {
        unaff_A2[sVar1] = 0;
      }
      else if (unaff_A2[sVar1] == 0) {
        unaff_A2[sVar1] = 1;
      }
      else if (unaff_A2[sVar1] == 1) {
        unaff_A2[sVar1] = 0xff;
      }
    }
    unaff_D3w = unaff_D3w + 1;
    if (9 < unaff_D3w) break;
    iVar2 = unaff_D3w * 0x54 + unaff_A4;
    unaff_A2 = (undefined2 *)(iVar2 + 0x2ce);
    uStack00000008 = 0;
    _sStack00000004 = unaff_A6 + -0x88;
    FUN_00002828();
    *(char *)(iVar2 + 0x2e0) = *(char *)(unaff_A6 + -0x88) + -0x30;
    in_D0 = (int)*(char *)(iVar2 + 0x2e0);
  }
  for (sVar1 = 0; sVar1 < 4; sVar1 = sVar1 + 1) {
    uStack00000008 = 0;
    _sStack00000004 = unaff_A6 + -0x88;
    FUN_00002828();
    func_0x000076c0((short)(unaff_A6 + -0x88),0x4085,(short)(unaff_A6 + -4));
    *(undefined2 *)(sVar1 * 2 + unaff_A4 + 0x616) = *(undefined2 *)(unaff_A6 + -2);
  }
  uStack00000008 = 1;
  sStack00000004 = (short)((uint)unaff_A3 >> 0x10);
  uStack00000006 = (undefined2)unaff_A3;
  FUN_00002818();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0x9c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: caseD_0 at 00003348
// Size: 826 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_00003332::caseD_0(void)

{
  char cVar1;
  short unaff_D3w;
  short sVar2;
  int iVar3;
  undefined2 *unaff_A2;
  int unaff_A4;
  int unaff_A6;
  
code_r0x00003348:
  cVar1 = (char)unaff_A6;
  func_0x000076c0((short)(unaff_A6 + -0x86),0x4085,cVar1 + -4);
  *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
  goto switchD_00003332_default;
  do {
    iVar3 = unaff_D3w * 0x54 + unaff_A4;
    unaff_A2 = (undefined2 *)(iVar3 + 0x2ce);
    FUN_00002828();
    *(char *)(iVar3 + 0x2e0) = *(char *)(unaff_A6 + -0x88) + -0x30;
    sVar2 = (short)unaff_A6;
    switch(*(undefined1 *)(iVar3 + 0x2e0)) {
    case 0:
      goto code_r0x00003348;
    case 1:
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4074,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8)
                      ,(short)(unaff_A6 + -0x8c),sVar2 + -0x90,(char)iVar3 + -0x1f);
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8a);
      *(undefined2 *)(iVar3 + 0x2d4) = *(undefined2 *)(unaff_A6 + -0x8e);
      *(undefined1 *)(iVar3 + 0x321) = 0;
      for (sVar2 = 0; sVar2 < 0x40; sVar2 = sVar2 + 1) {
        *(char *)(iVar3 + 0x2e1 + (int)sVar2) = *(char *)(iVar3 + 0x2e1 + (int)sVar2) + -0x30;
      }
    default:
switchD_00003332_default:
      for (sVar2 = 0; sVar2 < 7; sVar2 = sVar2 + 1) {
        if (unaff_A2[sVar2] == 0xff) {
          unaff_A2[sVar2] = 0;
        }
        else if (unaff_A2[sVar2] == 0) {
          unaff_A2[sVar2] = 1;
        }
        else if (unaff_A2[sVar2] == 1) {
          unaff_A2[sVar2] = 0xff;
        }
      }
      unaff_D3w = unaff_D3w + 1;
      if (9 < unaff_D3w) {
        for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
          FUN_00002828();
          func_0x000076c0((short)(unaff_A6 + -0x88),0x4085,(short)(unaff_A6 + -4));
          *(undefined2 *)(sVar2 * 2 + unaff_A4 + 0x616) = *(undefined2 *)(unaff_A6 + -2);
        }
        FUN_00002818();
        _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0x9c);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      break;
    case 2:
      func_0x000076c0(unaff_A6 + -0x86,0x14042,unaff_A6 + -4,unaff_A6 + -8,(short)(unaff_A6 + -0x8c)
                      ,(short)(unaff_A6 + -0x90),(short)(unaff_A6 + -0xe0),(short)(unaff_A6 + -0xe4)
                      ,(short)(unaff_A6 + -0xea),sVar2 + -0xee,cVar1 + '\x0e');
      *(undefined2 *)(iVar3 + 0x2dc) = *(undefined2 *)(unaff_A6 + -2);
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -0x8a);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8e);
      *(undefined2 *)(iVar3 + 0x2d4) = *(undefined2 *)(unaff_A6 + -0xde);
      *(undefined2 *)(iVar3 + 0x2d6) = *(undefined2 *)(unaff_A6 + -0xe2);
      *(undefined2 *)(iVar3 + 0x2d8) = *(undefined2 *)(unaff_A6 + -0xe8);
      *(undefined2 *)(iVar3 + 0x2da) = *(undefined2 *)(unaff_A6 + -0xec);
      *(undefined2 *)(iVar3 + 0x2de) = *(undefined2 *)(unaff_A6 + -0xf0);
      break;
    case 3:
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4036,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8)
                      ,sVar2 + -0x8c,cVar1 + 'p');
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8a);
      *(undefined2 *)(iVar3 + 0x2d4) = *(undefined2 *)(unaff_A6 + -0x8e);
      break;
    case 4:
      func_0x000076c0((short)(unaff_A6 + -0x86),0x402c,(short)(unaff_A6 + -4),sVar2 + -8,cVar1 + 't'
                     );
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8a);
      break;
    case 5:
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4026,sVar2 + -4,cVar1 + -8);
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      break;
    case 6:
      func_0x000076c0((short)(unaff_A6 + -0x86),0x4016,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8)
                      ,(short)(unaff_A6 + -0x8c),sVar2 + -0x90,cVar1 + ' ');
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8a);
      *(undefined2 *)(iVar3 + 0x2d4) = *(undefined2 *)(unaff_A6 + -0x8e);
      *(undefined2 *)(iVar3 + 0x2d6) = *(undefined2 *)(unaff_A6 + -0xde);
      break;
    case 7:
      func_0x000076c0(unaff_A6 + -0x86,0x14001,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8),
                      (short)(unaff_A6 + -0x8c),(short)(unaff_A6 + -0x90),(short)(unaff_A6 + -0xe0),
                      sVar2 + -0xe4,cVar1 + '\x16');
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8a);
      *(undefined2 *)(iVar3 + 0x2d4) = *(undefined2 *)(unaff_A6 + -0x8e);
      *(undefined2 *)(iVar3 + 0x2d6) = *(undefined2 *)(unaff_A6 + -0xde);
      *(undefined2 *)(iVar3 + 0x2d8) = *(undefined2 *)(unaff_A6 + -0xe2);
      *(undefined2 *)(iVar3 + 0x2da) = *(undefined2 *)(unaff_A6 + -0xe8);
      break;
    case 8:
      func_0x000076c0(unaff_A6 + -0x86,0x1405d,(short)(unaff_A6 + -4),(short)(unaff_A6 + -8),
                      (short)(unaff_A6 + -0x8c),(short)(unaff_A6 + -0x90),(short)(unaff_A6 + -0xe0),
                      sVar2 + -0xe4,(char)iVar3 + -0x1f);
      *unaff_A2 = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(iVar3 + 0x2d0) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(iVar3 + 0x2d2) = *(undefined2 *)(unaff_A6 + -0x8a);
      *(undefined2 *)(iVar3 + 0x2d4) = *(undefined2 *)(unaff_A6 + -0x8e);
      *(undefined2 *)(iVar3 + 0x2d6) = *(undefined2 *)(unaff_A6 + -0xde);
      *(undefined2 *)(iVar3 + 0x2d8) = *(undefined2 *)(unaff_A6 + -0xe2);
      *(undefined1 *)(iVar3 + 0x321) = 0;
      for (sVar2 = 0; sVar2 < 0x40; sVar2 = sVar2 + 1) {
        *(char *)(iVar3 + 0x2e1 + (int)sVar2) = *(char *)(iVar3 + 0x2e1 + (int)sVar2) + -0x30;
      }
      break;
    }
  } while( true );
}



// Function: FUN_000036c4 at 000036c4
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000036c4(void)

{
  undefined4 extraout_A0;
  
  FUN_00001d08(_DAT_00027268);
  _DAT_00027268 = extraout_A0;
  _DAT_0002726c = 0;
  return;
}



// Function: FUN_000036e4 at 000036e4
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000036e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003a78 at 00003a78
// Size: 102 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003a78(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  short in_D0w;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short unaff_D4w;
  short unaff_D6w;
  short unaff_D7w;
  int iVar6;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
code_r0x00003a78:
  *(short *)(unaff_A6 + -0x18) = (short)((in_D0w + 9) % 0x40);
  for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
    if (*(short *)(sVar3 * 2 + unaff_D4w * 8 + _DAT_0002726c + 0x300) == 0) {
      *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
    }
    else {
      *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
           *(undefined2 *)
            (unaff_A6 + -0xe +
            *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)) *
            2);
    }
  }
  do {
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(_DAT_0002726c + 0x810);
      sVar3 = *(short *)(*(short *)(unaff_A6 + -0x13e) * 2 + _DAT_0002726c + 0x388);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x3aa) != 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
      }
    }
    if (*(char *)(unaff_A6 + -0x2d) == '\0') {
      if (*(short *)(unaff_A6 + -0x138) == 8) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
        unaff_A3 = unaff_A3 + 2;
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
        unaff_A4 = unaff_A4 + 2;
      }
      else {
        *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                    (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
        unaff_A3 = unaff_A3 + 1;
        *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                    (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
        unaff_A4 = unaff_A4 + 1;
      }
    }
    else if (*(short *)(unaff_A6 + -0x138) == 8) {
      if (*(short *)(unaff_A6 + -0x16) != 1) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
      }
      if (*(short *)(unaff_A6 + -0x14) != 1) {
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
      }
      unaff_A3 = unaff_A3 + 2;
      if (*(short *)(unaff_A6 + -0x12) != 1) {
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
      }
      if (*(short *)(unaff_A6 + -0x10) != 1) {
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
      }
      unaff_A4 = unaff_A4 + 2;
    }
    else {
      *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                  (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
      unaff_A3 = unaff_A3 + 1;
      *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                  (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
      unaff_A4 = unaff_A4 + 1;
    }
    unaff_D6w = unaff_D6w + 1;
    while (0x6f < unaff_D6w) {
      unaff_D7w = unaff_D7w + 1;
      if (0x9b < unaff_D7w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_A3 = *(char **)(unaff_A6 + -0x2a);
      unaff_A4 = unaff_A3 + *(short *)(unaff_A6 + -0x13a);
      *(char **)(unaff_A6 + -0x2a) = unaff_A4;
      *(char **)(unaff_A6 + -0x2a) = unaff_A4 + *(short *)(unaff_A6 + -0x13a);
      unaff_D6w = 0;
    }
    uVar1 = *(undefined4 *)(unaff_D7w * 0xe0 + _DAT_00028850 + unaff_D6w * 2);
    iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
    *(int *)(unaff_A6 + -0x142) = iVar6;
    *(ushort *)(unaff_A6 + -0x36) = (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b);
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x146) = iVar6;
      *(ushort *)(unaff_A6 + -0x13e) =
           (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b) - 1;
    }
    uVar5 = (ushort)(byte)((uint)uVar1 >> 0x18);
    iVar6 = *(short *)(_DAT_0002726c + (short)uVar5 * 2) * 0x54 + _DAT_0002726c;
    puVar2 = (undefined2 *)(iVar6 + 0x810);
    switch(*(undefined1 *)(iVar6 + 0x822)) {
    case 0:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
      }
      break;
    case 1:
      goto code_r0x000039ea;
    case 2:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        sVar4 = FUN_00004b9e(unaff_D7w);
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe + sVar4 * 2)
        ;
      }
      break;
    case 3:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) * 2);
      }
      FUN_00003f30();
      return;
    case 4:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x432) * 2);
      }
      break;
    case 5:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) * 2);
      }
      break;
    case 6:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 7:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -2);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 8:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar4 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar4;
      sVar4 = sVar4 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar4;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar4 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -6);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar4 * 2)
                         ) * 2);
        }
      }
      FUN_00003f30();
      return;
    }
  } while( true );
code_r0x000039ea:
  unaff_D4w = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
  *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
  *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
  *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
  *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
  sVar3 = (short)((unaff_D7w * 2) % 8);
  *(short *)(unaff_A6 + -0x30) = sVar3;
  sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
  *(short *)(unaff_A6 + -0x1e) = sVar3;
  *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
  *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
  in_D0w = *(short *)(unaff_A6 + -0x1e);
  goto code_r0x00003a78;
}



// Function: FUN_00003ae0 at 00003ae0
// Size: 505 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003ae0(void)

{
  short sVar1;
  short sVar2;
  short unaff_D6w;
  short unaff_D7w;
  short *in_A0;
  undefined2 *unaff_A2;
  int unaff_A6;
  
  *in_A0 = *in_A0 + -0x3043;
  sVar1 = *(short *)((int)in_A0 * 2 + _DAT_0002726c + 0x180);
  *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
  *(undefined2 *)(unaff_A6 + -0xc) = unaff_A2[1];
  *(undefined2 *)(unaff_A6 + -10) = unaff_A2[2];
  *(undefined2 *)(unaff_A6 + -8) = unaff_A2[3];
  *(undefined2 *)(unaff_A6 + -6) = unaff_A2[4];
  *(undefined2 *)(unaff_A6 + -4) = unaff_A2[5];
  *(int *)(unaff_A6 + -0x34) = (int)unaff_A2 + 0x13;
  sVar2 = (short)((unaff_D7w * 2) % 8);
  *(short *)(unaff_A6 + -0x30) = sVar2;
  sVar2 = sVar2 * 8 + (short)((unaff_D6w * 2) % 8);
  *(short *)(unaff_A6 + -0x1e) = sVar2;
  *(short *)(unaff_A6 + -0x1c) = (short)((sVar2 + 1) % 0x40);
  *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
  *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
  for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
    if (*(short *)(sVar2 * 2 + sVar1 * 8 + _DAT_0002726c + 0x4ba) == 2) {
      *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -6);
    }
    else if (*(short *)(sVar2 * 2 + sVar1 * 8 + _DAT_0002726c + 0x4ba) == 3) {
      *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -4);
    }
    else if (*(short *)(sVar2 * 2 + sVar1 * 8 + _DAT_0002726c + 0x4ba) == 0) {
      *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
    }
    else {
      *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
           *(undefined2 *)
            (unaff_A6 + -0xe +
            *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar2 * 2)) *
            2);
    }
  }
  FUN_00003f30();
  return;
}



// Function: FUN_00003c40 at 00003c40
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003c40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003c48 at 00003c48
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003c48(void)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  short unaff_D6w;
  short unaff_D7w;
  int iVar5;
  undefined2 *unaff_A2;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
code_r0x00003c48:
  *(undefined2 *)(unaff_A6 + -10) = unaff_A2[2];
  *(undefined2 *)(unaff_A6 + -8) = unaff_A2[3];
  *(undefined2 *)(unaff_A6 + -6) = unaff_A2[4];
  *(undefined2 *)(unaff_A6 + -4) = unaff_A2[5];
  *(undefined2 *)(unaff_A6 + -2) = unaff_A2[6];
  for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
    sVar2 = FUN_00004b9e(unaff_D7w);
    *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe + sVar2 * 2);
  }
  do {
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(_DAT_0002726c + 0x810);
      sVar4 = *(short *)(*(short *)(unaff_A6 + -0x13e) * 2 + _DAT_0002726c + 0x388);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x3aa) != 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
      }
    }
    if (*(char *)(unaff_A6 + -0x2d) == '\0') {
      if (*(short *)(unaff_A6 + -0x138) == 8) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
        unaff_A3 = unaff_A3 + 2;
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
        unaff_A4 = unaff_A4 + 2;
      }
      else {
        *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                    (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
        unaff_A3 = unaff_A3 + 1;
        *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                    (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
        unaff_A4 = unaff_A4 + 1;
      }
    }
    else if (*(short *)(unaff_A6 + -0x138) == 8) {
      if (*(short *)(unaff_A6 + -0x16) != 1) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
      }
      if (*(short *)(unaff_A6 + -0x14) != 1) {
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
      }
      unaff_A3 = unaff_A3 + 2;
      if (*(short *)(unaff_A6 + -0x12) != 1) {
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
      }
      if (*(short *)(unaff_A6 + -0x10) != 1) {
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
      }
      unaff_A4 = unaff_A4 + 2;
    }
    else {
      *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                  (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
      unaff_A3 = unaff_A3 + 1;
      *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                  (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
      unaff_A4 = unaff_A4 + 1;
    }
    unaff_D6w = unaff_D6w + 1;
    while (0x6f < unaff_D6w) {
      unaff_D7w = unaff_D7w + 1;
      if (0x9b < unaff_D7w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_A3 = *(char **)(unaff_A6 + -0x2a);
      unaff_A4 = unaff_A3 + *(short *)(unaff_A6 + -0x13a);
      *(char **)(unaff_A6 + -0x2a) = unaff_A4;
      *(char **)(unaff_A6 + -0x2a) = unaff_A4 + *(short *)(unaff_A6 + -0x13a);
      unaff_D6w = 0;
    }
    uVar1 = *(undefined4 *)(unaff_D7w * 0xe0 + _DAT_00028850 + unaff_D6w * 2);
    iVar5 = unaff_D7w * 0x70 + _DAT_00028858;
    *(int *)(unaff_A6 + -0x142) = iVar5;
    *(ushort *)(unaff_A6 + -0x36) = (ushort)((uint)(*(int *)(iVar5 + unaff_D6w) << 3) >> 0x1b);
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      iVar5 = unaff_D7w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x146) = iVar5;
      *(ushort *)(unaff_A6 + -0x13e) =
           (ushort)((uint)(*(int *)(iVar5 + unaff_D6w) << 3) >> 0x1b) - 1;
    }
    uVar3 = (ushort)(byte)((uint)uVar1 >> 0x18);
    iVar5 = *(short *)(_DAT_0002726c + (short)uVar3 * 2) * 0x54 + _DAT_0002726c;
    unaff_A2 = (undefined2 *)(iVar5 + 0x810);
    switch(*(undefined1 *)(iVar5 + 0x822)) {
    case 0:
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
      }
      break;
    case 1:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar5 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar5 + 0x816);
      *(int *)(unaff_A6 + -0x34) = iVar5 + 0x823;
      sVar2 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar2;
      sVar2 = sVar2 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar2;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar2 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar2 * 2)
                         ) * 2);
        }
      }
      break;
    case 2:
      goto code_r0x00003c3e;
    case 3:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar5 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar5 + 0x816);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) * 2);
      }
      FUN_00003f30();
      return;
    case 4:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar5 + 0x814);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x432) * 2);
      }
      break;
    case 5:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300) * 2);
      }
      break;
    case 6:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar5 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar5 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar5 + 0x818);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 7:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar5 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar5 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar5 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar5 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar5 + 0x81c);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -2);
        }
        else if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 8:
      sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar5 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar5 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar5 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar5 + 0x81a);
      *(int *)(unaff_A6 + -0x34) = iVar5 + 0x823;
      sVar2 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar2;
      sVar2 = sVar2 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar2;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar2 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
        if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -6);
        }
        else if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar2 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar2 * 2)
                         ) * 2);
        }
      }
      FUN_00003f30();
      return;
    }
  } while( true );
code_r0x00003c3e:
  *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar5 + 0x812);
  goto code_r0x00003c48;
}



// Function: FUN_00003c88 at 00003c88
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003c88(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short unaff_D3w;
  short unaff_D6w;
  short unaff_D7w;
  int iVar6;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
LAB_00003c8a:
  for (; unaff_D3w < 4; unaff_D3w = unaff_D3w + 1) {
    sVar3 = FUN_00004b9e();
    *(undefined2 *)(unaff_A6 + -0x16 + unaff_D3w * 2) = *(undefined2 *)(unaff_A6 + -0xe + sVar3 * 2)
    ;
  }
  do {
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(_DAT_0002726c + 0x810);
      sVar3 = *(short *)(*(short *)(unaff_A6 + -0x13e) * 2 + _DAT_0002726c + 0x388);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x3aa) != 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
      }
    }
    if (*(char *)(unaff_A6 + -0x2d) == '\0') {
      if (*(short *)(unaff_A6 + -0x138) == 8) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
        unaff_A3 = unaff_A3 + 2;
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
        unaff_A4 = unaff_A4 + 2;
      }
      else {
        *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                    (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
        unaff_A3 = unaff_A3 + 1;
        *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                    (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
        unaff_A4 = unaff_A4 + 1;
      }
    }
    else if (*(short *)(unaff_A6 + -0x138) == 8) {
      if (*(short *)(unaff_A6 + -0x16) != 1) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
      }
      if (*(short *)(unaff_A6 + -0x14) != 1) {
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
      }
      unaff_A3 = unaff_A3 + 2;
      if (*(short *)(unaff_A6 + -0x12) != 1) {
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
      }
      if (*(short *)(unaff_A6 + -0x10) != 1) {
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
      }
      unaff_A4 = unaff_A4 + 2;
    }
    else {
      *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                  (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
      unaff_A3 = unaff_A3 + 1;
      *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                  (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
      unaff_A4 = unaff_A4 + 1;
    }
    unaff_D6w = unaff_D6w + 1;
    while (0x6f < unaff_D6w) {
      unaff_D7w = unaff_D7w + 1;
      if (0x9b < unaff_D7w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_A3 = *(char **)(unaff_A6 + -0x2a);
      unaff_A4 = unaff_A3 + *(short *)(unaff_A6 + -0x13a);
      *(char **)(unaff_A6 + -0x2a) = unaff_A4;
      *(char **)(unaff_A6 + -0x2a) = unaff_A4 + *(short *)(unaff_A6 + -0x13a);
      unaff_D6w = 0;
    }
    uVar1 = *(undefined4 *)(unaff_D7w * 0xe0 + _DAT_00028850 + unaff_D6w * 2);
    iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
    *(int *)(unaff_A6 + -0x142) = iVar6;
    *(ushort *)(unaff_A6 + -0x36) = (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b);
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x146) = iVar6;
      *(ushort *)(unaff_A6 + -0x13e) =
           (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b) - 1;
    }
    uVar5 = (ushort)(byte)((uint)uVar1 >> 0x18);
    iVar6 = *(short *)(_DAT_0002726c + (short)uVar5 * 2) * 0x54 + _DAT_0002726c;
    puVar2 = (undefined2 *)(iVar6 + 0x810);
    switch(*(undefined1 *)(iVar6 + 0x822)) {
    case 0:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
      }
      break;
    case 1:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar4 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar4;
      sVar4 = sVar4 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar4;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar4 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar4 * 2)
                         ) * 2);
        }
      }
      break;
    case 2:
      goto code_r0x00003c3e;
    case 3:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) * 2);
      }
      FUN_00003f30();
      return;
    case 4:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x432) * 2);
      }
      break;
    case 5:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) * 2);
      }
      break;
    case 6:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 7:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -2);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 8:
      sVar3 = *(short *)((short)uVar5 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar4 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar4;
      sVar4 = sVar4 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar4;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar4 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -6);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar4 * 2 + sVar3 * 8 + _DAT_0002726c + 0x4ba) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar4 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar4 * 2)
                         ) * 2);
        }
      }
      FUN_00003f30();
      return;
    }
  } while( true );
code_r0x00003c3e:
  *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
  *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
  *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
  *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
  *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
  *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
  unaff_D3w = 0;
  goto LAB_00003c8a;
}



// Function: thunk_FUN_00003f30 at 00003c90
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00003f30(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short unaff_D6w;
  short unaff_D7w;
  int iVar6;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
  do {
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(_DAT_0002726c + 0x810);
      sVar5 = *(short *)(*(short *)(unaff_A6 + -0x13e) * 2 + _DAT_0002726c + 0x388);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x3aa) != 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
      }
    }
    if (*(char *)(unaff_A6 + -0x2d) == '\0') {
      if (*(short *)(unaff_A6 + -0x138) == 8) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
        unaff_A3 = unaff_A3 + 2;
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
        unaff_A4 = unaff_A4 + 2;
      }
      else {
        *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                    (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
        unaff_A3 = unaff_A3 + 1;
        *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                    (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
        unaff_A4 = unaff_A4 + 1;
      }
    }
    else if (*(short *)(unaff_A6 + -0x138) == 8) {
      if (*(short *)(unaff_A6 + -0x16) != 1) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
      }
      if (*(short *)(unaff_A6 + -0x14) != 1) {
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
      }
      unaff_A3 = unaff_A3 + 2;
      if (*(short *)(unaff_A6 + -0x12) != 1) {
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
      }
      if (*(short *)(unaff_A6 + -0x10) != 1) {
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
      }
      unaff_A4 = unaff_A4 + 2;
    }
    else {
      *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                  (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
      unaff_A3 = unaff_A3 + 1;
      *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                  (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
      unaff_A4 = unaff_A4 + 1;
    }
    unaff_D6w = unaff_D6w + 1;
    while (0x6f < unaff_D6w) {
      unaff_D7w = unaff_D7w + 1;
      if (0x9b < unaff_D7w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_A3 = *(char **)(unaff_A6 + -0x2a);
      unaff_A4 = unaff_A3 + *(short *)(unaff_A6 + -0x13a);
      *(char **)(unaff_A6 + -0x2a) = unaff_A4;
      *(char **)(unaff_A6 + -0x2a) = unaff_A4 + *(short *)(unaff_A6 + -0x13a);
      unaff_D6w = 0;
    }
    uVar1 = *(undefined4 *)(unaff_D7w * 0xe0 + _DAT_00028850 + unaff_D6w * 2);
    iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
    *(int *)(unaff_A6 + -0x142) = iVar6;
    *(ushort *)(unaff_A6 + -0x36) = (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b);
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x146) = iVar6;
      *(ushort *)(unaff_A6 + -0x13e) =
           (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b) - 1;
    }
    uVar4 = (ushort)(byte)((uint)uVar1 >> 0x18);
    iVar6 = *(short *)(_DAT_0002726c + (short)uVar4 * 2) * 0x54 + _DAT_0002726c;
    puVar2 = (undefined2 *)(iVar6 + 0x810);
    switch(*(undefined1 *)(iVar6 + 0x822)) {
    case 0:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar5 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
      }
      break;
    case 1:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar3 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar3;
      sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar3;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)
                         ) * 2);
        }
      }
      break;
    case 2:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        sVar3 = FUN_00004b9e(unaff_D7w);
        *(undefined2 *)(unaff_A6 + -0x16 + sVar5 * 2) = *(undefined2 *)(unaff_A6 + -0xe + sVar3 * 2)
        ;
      }
      break;
    case 3:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) * 2);
      }
      FUN_00003f30();
      return;
    case 4:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x432) * 2);
      }
      break;
    case 5:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) * 2);
      }
      break;
    case 6:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 7:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -2);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 8:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar3 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar3;
      sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar3;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -6);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)
                         ) * 2);
        }
      }
      FUN_00003f30();
      return;
    }
  } while( true );
}



// Function: FUN_00003c98 at 00003c98
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003c98(void)

{
  short sVar1;
  int in_D0;
  short sVar2;
  undefined2 *unaff_A2;
  int unaff_A6;
  
  sVar1 = *(short *)(in_D0 * 2 + _DAT_0002726c + 0x180);
  *(undefined2 *)(unaff_A6 + -0xe) = *unaff_A2;
  *(undefined2 *)(unaff_A6 + -0xc) = unaff_A2[1];
  *(undefined2 *)(unaff_A6 + -10) = unaff_A2[2];
  *(undefined2 *)(unaff_A6 + -8) = unaff_A2[3];
  for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
    *(undefined2 *)(unaff_A6 + -0x16 + sVar2 * 2) =
         *(undefined2 *)
          (unaff_A6 + -0xe + *(short *)(sVar2 * 2 + sVar1 * 8 + _DAT_0002726c + 0x4ba) * 2);
  }
  FUN_00003f30();
  return;
}



// Function: FUN_00003e28 at 00003e28
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003e28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003f30 at 00003f30
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003f30(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short unaff_D6w;
  short unaff_D7w;
  int iVar6;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
  do {
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(_DAT_0002726c + 0x810);
      sVar5 = *(short *)(*(short *)(unaff_A6 + -0x13e) * 2 + _DAT_0002726c + 0x388);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x3aa) != 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
      }
    }
    if (*(char *)(unaff_A6 + -0x2d) == '\0') {
      if (*(short *)(unaff_A6 + -0x138) == 8) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
        unaff_A3 = unaff_A3 + 2;
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
        unaff_A4 = unaff_A4 + 2;
      }
      else {
        *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                    (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
        unaff_A3 = unaff_A3 + 1;
        *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                    (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
        unaff_A4 = unaff_A4 + 1;
      }
    }
    else if (*(short *)(unaff_A6 + -0x138) == 8) {
      if (*(short *)(unaff_A6 + -0x16) != 1) {
        *unaff_A3 = *(char *)(unaff_A6 + -0x15);
      }
      if (*(short *)(unaff_A6 + -0x14) != 1) {
        unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
      }
      unaff_A3 = unaff_A3 + 2;
      if (*(short *)(unaff_A6 + -0x12) != 1) {
        *unaff_A4 = *(char *)(unaff_A6 + -0x11);
      }
      if (*(short *)(unaff_A6 + -0x10) != 1) {
        unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
      }
      unaff_A4 = unaff_A4 + 2;
    }
    else {
      *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                  (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
      unaff_A3 = unaff_A3 + 1;
      *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                  (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
      unaff_A4 = unaff_A4 + 1;
    }
    unaff_D6w = unaff_D6w + 1;
    while (0x6f < unaff_D6w) {
      unaff_D7w = unaff_D7w + 1;
      if (0x9b < unaff_D7w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_A3 = *(char **)(unaff_A6 + -0x2a);
      unaff_A4 = unaff_A3 + *(short *)(unaff_A6 + -0x13a);
      *(char **)(unaff_A6 + -0x2a) = unaff_A4;
      *(char **)(unaff_A6 + -0x2a) = unaff_A4 + *(short *)(unaff_A6 + -0x13a);
      unaff_D6w = 0;
    }
    uVar1 = *(undefined4 *)(unaff_D7w * 0xe0 + _DAT_00028850 + unaff_D6w * 2);
    iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
    *(int *)(unaff_A6 + -0x142) = iVar6;
    *(ushort *)(unaff_A6 + -0x36) = (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b);
    if (*(short *)(unaff_A6 + -0x36) != 0) {
      iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x146) = iVar6;
      *(ushort *)(unaff_A6 + -0x13e) =
           (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b) - 1;
    }
    uVar4 = (ushort)(byte)((uint)uVar1 >> 0x18);
    iVar6 = *(short *)(_DAT_0002726c + (short)uVar4 * 2) * 0x54 + _DAT_0002726c;
    puVar2 = (undefined2 *)(iVar6 + 0x810);
    switch(*(undefined1 *)(iVar6 + 0x822)) {
    case 0:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar5 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
      }
      break;
    case 1:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar3 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar3;
      sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar3;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)
                         ) * 2);
        }
      }
      break;
    case 2:
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        sVar3 = FUN_00004b9e(unaff_D7w);
        *(undefined2 *)(unaff_A6 + -0x16 + sVar5 * 2) = *(undefined2 *)(unaff_A6 + -0xe + sVar3 * 2)
        ;
      }
      break;
    case 3:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) * 2);
      }
      FUN_00003f30();
      return;
    case 4:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x432) * 2);
      }
      break;
    case 5:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
             *(undefined2 *)
              (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) * 2);
      }
      break;
    case 6:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 7:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -2);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
          *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
        }
      }
      break;
    case 8:
      sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
      *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
      *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
      *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
      *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
      *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
      sVar3 = (short)((unaff_D7w * 2) % 8);
      *(short *)(unaff_A6 + -0x30) = sVar3;
      sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
      *(short *)(unaff_A6 + -0x1e) = sVar3;
      *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
      *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
      *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
      for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
        if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 2) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -6);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 3) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -4);
        }
        else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 0) {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
        }
        else {
          *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
               *(undefined2 *)
                (unaff_A6 + -0xe +
                *(char *)(*(int *)(unaff_A6 + -0x34) + (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)
                         ) * 2);
        }
      }
      FUN_00003f30();
      return;
    }
  } while( true );
}



// Function: FUN_00003f60 at 00003f60
// Size: 271 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003f60(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int in_D0;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D6w;
  short unaff_D7w;
  int iVar6;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
  do {
    if (*(short *)(in_D0 + unaff_D4w * 8 + _DAT_0002726c + 0x3aa) != 0) {
      *(undefined2 *)(unaff_A6 + -0x16 + unaff_D3w * 2) = *(undefined2 *)(unaff_A6 + -0xe);
    }
    unaff_D3w = unaff_D3w + 1;
    while (3 < unaff_D3w) {
      do {
        if (*(char *)(unaff_A6 + -0x2d) == '\0') {
          if (*(short *)(unaff_A6 + -0x138) == 8) {
            *unaff_A3 = *(char *)(unaff_A6 + -0x15);
            unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
            unaff_A3 = unaff_A3 + 2;
            *unaff_A4 = *(char *)(unaff_A6 + -0x11);
            unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
            unaff_A4 = unaff_A4 + 2;
          }
          else {
            *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                        (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
            unaff_A3 = unaff_A3 + 1;
            *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                        (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
            unaff_A4 = unaff_A4 + 1;
          }
        }
        else if (*(short *)(unaff_A6 + -0x138) == 8) {
          if (*(short *)(unaff_A6 + -0x16) != 1) {
            *unaff_A3 = *(char *)(unaff_A6 + -0x15);
          }
          if (*(short *)(unaff_A6 + -0x14) != 1) {
            unaff_A3[1] = *(char *)(unaff_A6 + -0x13);
          }
          unaff_A3 = unaff_A3 + 2;
          if (*(short *)(unaff_A6 + -0x12) != 1) {
            *unaff_A4 = *(char *)(unaff_A6 + -0x11);
          }
          if (*(short *)(unaff_A6 + -0x10) != 1) {
            unaff_A4[1] = *(char *)(unaff_A6 + -0xf);
          }
          unaff_A4 = unaff_A4 + 2;
        }
        else {
          *unaff_A3 = (char)*(undefined2 *)(unaff_A6 + -0x14) +
                      (char)((int)*(short *)(unaff_A6 + -0x16) << 4);
          unaff_A3 = unaff_A3 + 1;
          *unaff_A4 = (char)*(undefined2 *)(unaff_A6 + -0x10) +
                      (char)((int)*(short *)(unaff_A6 + -0x12) << 4);
          unaff_A4 = unaff_A4 + 1;
        }
        unaff_D6w = unaff_D6w + 1;
        while (0x6f < unaff_D6w) {
          unaff_D7w = unaff_D7w + 1;
          if (0x9b < unaff_D7w) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_A3 = *(char **)(unaff_A6 + -0x2a);
          unaff_A4 = unaff_A3 + *(short *)(unaff_A6 + -0x13a);
          *(char **)(unaff_A6 + -0x2a) = unaff_A4;
          *(char **)(unaff_A6 + -0x2a) = unaff_A4 + *(short *)(unaff_A6 + -0x13a);
          unaff_D6w = 0;
        }
        uVar1 = *(undefined4 *)(unaff_D7w * 0xe0 + _DAT_00028850 + unaff_D6w * 2);
        iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
        *(int *)(unaff_A6 + -0x142) = iVar6;
        *(ushort *)(unaff_A6 + -0x36) = (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b);
        if (*(short *)(unaff_A6 + -0x36) != 0) {
          iVar6 = unaff_D7w * 0x70 + _DAT_00028858;
          *(int *)(unaff_A6 + -0x146) = iVar6;
          *(ushort *)(unaff_A6 + -0x13e) =
               (ushort)((uint)(*(int *)(iVar6 + unaff_D6w) << 3) >> 0x1b) - 1;
        }
        uVar4 = (ushort)(byte)((uint)uVar1 >> 0x18);
        iVar6 = *(short *)(_DAT_0002726c + (short)uVar4 * 2) * 0x54 + _DAT_0002726c;
        puVar2 = (undefined2 *)(iVar6 + 0x810);
        switch(*(undefined1 *)(iVar6 + 0x822)) {
        case 0:
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
            *(undefined2 *)(unaff_A6 + -0x16 + sVar5 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
          }
          break;
        case 1:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
          *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
          sVar3 = (short)((unaff_D7w * 2) % 8);
          *(short *)(unaff_A6 + -0x30) = sVar3;
          sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
          *(short *)(unaff_A6 + -0x1e) = sVar3;
          *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
          *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
          *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
            }
            else {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                   *(undefined2 *)
                    (unaff_A6 + -0xe +
                    *(char *)(*(int *)(unaff_A6 + -0x34) +
                             (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)) * 2);
            }
          }
          break;
        case 2:
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
          *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
          *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
          *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
          for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
            sVar3 = FUN_00004b9e(unaff_D7w);
            *(undefined2 *)(unaff_A6 + -0x16 + sVar5 * 2) =
                 *(undefined2 *)(unaff_A6 + -0xe + sVar3 * 2);
          }
          break;
        case 3:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                 *(undefined2 *)
                  (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) * 2);
          }
          FUN_00003f30();
          return;
        case 4:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                 *(undefined2 *)
                  (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x432) * 2);
          }
          break;
        case 5:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                 *(undefined2 *)
                  (unaff_A6 + -0xe + *(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) * 2);
          }
          break;
        case 6:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
          *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
            }
            else {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                   *(undefined2 *)
                    (unaff_A6 + -0xe +
                    *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
              *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
            }
          }
          break;
        case 7:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
          *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
          *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
          *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar6 + 0x81c);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 2) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -4);
            }
            else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 3) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -2);
            }
            else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x300) == 0) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
            }
            else {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                   *(undefined2 *)
                    (unaff_A6 + -0xe +
                    *(char *)(unaff_A6 + -0x136 + (int)*(short *)(unaff_A6 + -0x26)) * 2);
              *(short *)(unaff_A6 + -0x26) = (short)((*(short *)(unaff_A6 + -0x26) + 1) % 0xff);
            }
          }
          break;
        case 8:
          sVar5 = *(short *)((short)uVar4 * 2 + _DAT_0002726c + 0x180);
          *(undefined2 *)(unaff_A6 + -0xe) = *puVar2;
          *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(iVar6 + 0x812);
          *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(iVar6 + 0x814);
          *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar6 + 0x816);
          *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar6 + 0x818);
          *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar6 + 0x81a);
          *(int *)(unaff_A6 + -0x34) = iVar6 + 0x823;
          sVar3 = (short)((unaff_D7w * 2) % 8);
          *(short *)(unaff_A6 + -0x30) = sVar3;
          sVar3 = sVar3 * 8 + (short)((unaff_D6w * 2) % 8);
          *(short *)(unaff_A6 + -0x1e) = sVar3;
          *(short *)(unaff_A6 + -0x1c) = (short)((sVar3 + 1) % 0x40);
          *(short *)(unaff_A6 + -0x1a) = (short)((*(short *)(unaff_A6 + -0x1e) + 8) % 0x40);
          *(short *)(unaff_A6 + -0x18) = (short)((*(short *)(unaff_A6 + -0x1e) + 9) % 0x40);
          for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
            if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 2) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -6);
            }
            else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 3) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -4);
            }
            else if (*(short *)(sVar3 * 2 + sVar5 * 8 + _DAT_0002726c + 0x4ba) == 0) {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) = *(undefined2 *)(unaff_A6 + -0xe);
            }
            else {
              *(undefined2 *)(unaff_A6 + -0x16 + sVar3 * 2) =
                   *(undefined2 *)
                    (unaff_A6 + -0xe +
                    *(char *)(*(int *)(unaff_A6 + -0x34) +
                             (int)*(short *)(unaff_A6 + -0x1e + sVar3 * 2)) * 2);
            }
          }
          FUN_00003f30();
          return;
        }
      } while (*(short *)(unaff_A6 + -0x36) == 0);
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(_DAT_0002726c + 0x810);
      unaff_D4w = *(short *)(*(short *)(unaff_A6 + -0x13e) * 2 + _DAT_0002726c + 0x388);
      unaff_D3w = 0;
    }
    in_D0 = unaff_D3w * 2;
  } while( true );
}



// Function: FUN_00004096 at 00004096
// Size: 1548 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000046a6) */
/* WARNING: Removing unreachable block (ram,0x000046ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004096(undefined4 param_1)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short local_26;
  short local_22 [4];
  short local_1a [4];
  short local_12 [5];
  short local_8;
  short local_6;
  
  uVar2 = (ushort)((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) << 3)
                  >> 0x1b);
  if (uVar2 != 0) {
    local_26 = (ushort)((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_)
                              << 3) >> 0x1b) - 1;
  }
  uVar3 = (ushort)(byte)((uint)*(undefined4 *)
                                (param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18);
  iVar6 = *(short *)(_DAT_0002726c + (short)uVar3 * 2) * 0x54 + _DAT_0002726c;
  psVar1 = (short *)(iVar6 + 0x810);
  switch(*(undefined1 *)(iVar6 + 0x822)) {
  case 0:
    local_12[0] = *psVar1;
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      local_1a[sVar4] = local_12[0];
    }
    break;
  case 1:
    sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    local_12[2] = *(undefined2 *)(iVar6 + 0x814);
    local_12[3] = *(short *)(iVar6 + 0x816);
    local_22[0] = (short)((param_1._2_2_ * 2) % 8) * 8 + (short)((param_1._0_2_ * 2) % 8);
    local_22[1] = (short)((local_22[0] + 1) % 0x40);
    local_22[2] = (short)((local_22[0] + 8) % 0x40);
    local_22[3] = (short)((local_22[0] + 9) % 0x40);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300) == 0) {
        local_1a[sVar5] = local_12[0];
      }
      else {
        local_1a[sVar5] = local_12[*(char *)(iVar6 + 0x823 + (int)local_22[sVar5])];
      }
    }
    break;
  case 2:
    local_12[3] = *(short *)(iVar6 + 0x816);
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      local_1a[sVar4] = local_12[3];
    }
    break;
  case 3:
    sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    local_12[2] = *(undefined2 *)(iVar6 + 0x814);
    local_12[3] = *(short *)(iVar6 + 0x816);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      local_1a[sVar5] = local_12[*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba)];
    }
    break;
  case 4:
    sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    local_12[2] = *(undefined2 *)(iVar6 + 0x814);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      local_1a[sVar5] = local_12[*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x432)];
    }
    break;
  case 5:
    sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      local_1a[sVar5] = local_12[*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300)];
    }
    break;
  case 6:
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    local_12[2] = *(undefined2 *)(iVar6 + 0x814);
    local_12[3] = *(short *)(iVar6 + 0x816);
    local_12[4] = *(short *)(iVar6 + 0x818);
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      local_1a[sVar4] = local_12[sVar4 + 1];
    }
    break;
  case 7:
    sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    local_12[2] = *(undefined2 *)(iVar6 + 0x814);
    local_12[3] = *(short *)(iVar6 + 0x816);
    local_12[4] = *(short *)(iVar6 + 0x818);
    local_8 = *(short *)(iVar6 + 0x81a);
    local_6 = *(short *)(iVar6 + 0x81c);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 2) {
        local_1a[sVar5] = local_8;
      }
      else if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 3) {
        local_1a[sVar5] = local_6;
      }
      else if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x300) == 0) {
        local_1a[sVar5] = local_12[0];
      }
      else {
        local_1a[sVar5] = local_12[sVar5 + 1];
      }
    }
    break;
  case 8:
    sVar4 = *(short *)((short)uVar3 * 2 + _DAT_0002726c + 0x180);
    local_12[0] = *psVar1;
    local_12[1] = *(undefined2 *)(iVar6 + 0x812);
    local_12[2] = *(undefined2 *)(iVar6 + 0x814);
    local_12[3] = *(short *)(iVar6 + 0x816);
    local_12[4] = *(short *)(iVar6 + 0x818);
    local_8 = *(short *)(iVar6 + 0x81a);
    local_22[0] = (short)((param_1._2_2_ * 2) % 8) * 8 + (short)((param_1._0_2_ * 2) % 8);
    local_22[1] = (short)((local_22[0] + 1) % 0x40);
    local_22[2] = (short)((local_22[0] + 8) % 0x40);
    local_22[3] = (short)((local_22[0] + 9) % 0x40);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 2) {
        local_1a[sVar5] = local_12[4];
      }
      else if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 3) {
        local_1a[sVar5] = local_8;
      }
      else if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x4ba) == 0) {
        local_1a[sVar5] = local_12[0];
      }
      else {
        local_1a[sVar5] = local_12[*(char *)(iVar6 + 0x823 + (int)local_22[sVar5])];
      }
    }
  }
  if (uVar2 != 0) {
    local_12[0] = *(short *)(_DAT_0002726c + 0x810);
    sVar4 = *(short *)(local_26 * 2 + _DAT_0002726c + 0x388);
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      if (*(short *)(sVar5 * 2 + sVar4 * 8 + _DAT_0002726c + 0x3aa) != 0) {
        local_1a[sVar5] = local_12[0];
      }
    }
  }
  func_0x00005768(local_1a[0] * 6 + 0x29052,_DAT_00013ff8 + param_1._0_2_ * 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000046b6 at 000046b6
// Size: 602 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000046b6(void)

{
  char *pcVar1;
  char cVar3;
  short sVar2;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  char acStackY_8104 [32700];
  char local_104 [256];
  
  for (sVar5 = 0; sVar5 < 0xff; sVar5 = sVar5 + 1) {
    cVar3 = FUN_00002ad0(0x10005);
    local_104[sVar5] = cVar3;
  }
  sVar6 = 0;
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      *(undefined1 *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60) = 9;
    }
  }
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      sVar2 = *(short *)(_DAT_0002726c +
                        (short)(ushort)(byte)((uint)*(undefined4 *)
                                                     (sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2) >>
                                             0x18) * 2);
      iVar7 = *(int *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4);
      iVar8 = sVar2 * 0x54 + _DAT_0002726c;
      if (*(char *)(iVar8 + 0x822) == '\x02') {
        if (*(short *)(iVar8 + 0x820) == 0) {
          *(char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60) =
               local_104[sVar6] + (char)*(undefined2 *)(sVar2 * 0x54 + _DAT_0002726c + 0x81e);
        }
        else {
          *(char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60) =
               local_104[sVar6] * '\x04' +
               (char)*(undefined2 *)(sVar2 * 0x54 + _DAT_0002726c + 0x81e);
        }
        sVar6 = sVar6 + 1;
        if (0xfe < sVar6) {
          sVar6 = 0;
        }
      }
      if ((ushort)((uint)(iVar7 << 3) >> 0x1b) != 0) {
        pcVar1 = (char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60);
        *pcVar1 = (char)((*pcVar1 * 2) / 3);
      }
    }
  }
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 2) {
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 2) {
      if (*(char *)(*(short *)(_DAT_0002726c +
                              (short)(ushort)(byte)((uint)*(undefined4 *)
                                                           (sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2
                                                           ) >> 0x18) * 2) * 0x54 + _DAT_0002726c +
                   0x822) == '\x02') {
        sVar2 = FUN_00004a5e(CONCAT22(sVar4,sVar5));
        pcVar1 = (char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60);
        *pcVar1 = (char)(((int)sVar2 + (int)*pcVar1) / 2);
      }
    }
  }
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      sVar2 = *(short *)(_DAT_0002726c +
                        (short)(ushort)(byte)((uint)*(undefined4 *)
                                                     (sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2) >>
                                             0x18) * 2);
      iVar7 = *(int *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4);
      iVar8 = sVar2 * 0x54 + _DAT_0002726c;
      if (((*(char *)(iVar8 + 0x822) == '\x02') && (*(short *)(iVar8 + 0x820) != 0)) &&
         ((int)*(short *)(iVar8 + 0x81e) <=
          (int)*(char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60))) {
        iVar8 = (int)sVar6;
        sVar6 = sVar6 + 1;
        if (0xfe < sVar6) {
          sVar6 = 0;
        }
        if ((short)local_104[iVar8] < *(short *)(sVar2 * 0x54 + _DAT_0002726c + 0x820)) {
          pcVar1 = (char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60);
          *pcVar1 = (char)(((short)*pcVar1 * 3) / 2);
        }
        if ((ushort)((uint)(iVar7 << 3) >> 0x1b) != 0) {
          pcVar1 = (char *)((int)sVar5 + sVar4 * 0x9c + _DAT_0002726c + 0xb60);
          *pcVar1 = *pcVar1 / '\x02';
        }
      }
    }
  }
  for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
    for (sVar6 = 0; sVar6 < 0x9c; sVar6 = sVar6 + 1) {
      for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
        iVar7 = *(short *)(_DAT_0002726c +
                          (short)(ushort)(byte)((uint)*(undefined4 *)
                                                       (sVar6 * 0xe0 + _DAT_00028850 + sVar4 * 2) >>
                                               0x18) * 2) * 0x54 + _DAT_0002726c;
        if ((*(char *)(iVar7 + 0x822) == '\x02') && (*(short *)(iVar7 + 0x820) != 0)) {
          sVar2 = FUN_00004a5e(CONCAT22(sVar4,sVar6));
          pcVar1 = (char *)((int)sVar6 + sVar4 * 0x9c + _DAT_0002726c + 0xb60);
          *pcVar1 = (char)(((int)sVar2 + (int)*pcVar1) / 2);
        }
      }
    }
  }
  return;
}



// Function: FUN_00004910 at 00004910
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004910(void)

{
  char *pcVar1;
  int in_D0;
  short sVar2;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short unaff_D6w;
  short sVar5;
  uint unaff_D7;
  int in_A0;
  int iVar6;
  int unaff_A6;
  
  do {
    if (in_D0 <= *(char *)(unaff_D4w + in_A0 + 0xb60)) {
      *(short *)(unaff_A6 + -0x116) = (short)*(char *)(unaff_A6 + -0x100 + (int)unaff_D6w);
      unaff_D6w = unaff_D6w + 1;
      if (0xfe < unaff_D6w) {
        unaff_D6w = 0;
      }
      if (*(short *)(unaff_A6 + -0x116) < *(short *)(unaff_D5w * 0x54 + _DAT_0002726c + 0x820)) {
        pcVar1 = (char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
        *(char **)(unaff_A6 + -0x108) = pcVar1;
        *pcVar1 = (char)(((short)*pcVar1 * 3) / 2);
      }
      if ((short)unaff_D7 != 0) {
        pcVar1 = (char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
        *(char **)(unaff_A6 + -0x10c) = pcVar1;
        *pcVar1 = *pcVar1 / '\x02';
      }
    }
    do {
      unaff_D3w = unaff_D3w + 1;
      while (0x6f < unaff_D3w) {
        unaff_D4w = unaff_D4w + 1;
        if (0x9b < unaff_D4w) {
          for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
            for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
              for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
                iVar6 = *(short *)(_DAT_0002726c +
                                  (short)(ushort)(byte)((uint)*(undefined4 *)
                                                               (sVar4 * 0xe0 + _DAT_00028850 +
                                                               sVar3 * 2) >> 0x18) * 2) * 0x54 +
                        _DAT_0002726c;
                *(int *)(unaff_A6 + -0x110) = iVar6;
                if ((*(char *)(iVar6 + 0x822) == '\x02') && (*(short *)(iVar6 + 0x820) != 0)) {
                  sVar2 = FUN_00004a5e(sVar4);
                  pcVar1 = (char *)((int)sVar4 + sVar3 * 0x9c + _DAT_0002726c + 0xb60);
                  *(char **)(unaff_A6 + -0x114) = pcVar1;
                  *pcVar1 = (char)(((int)sVar2 + (int)*pcVar1) / 2);
                }
              }
            }
          }
          return;
        }
        unaff_D3w = 0;
      }
      unaff_D5w = *(short *)(_DAT_0002726c +
                            (short)(ushort)(byte)((uint)*(undefined4 *)
                                                         (unaff_D4w * 0xe0 + _DAT_00028850 +
                                                         unaff_D3w * 2) >> 0x18) * 2);
      iVar6 = unaff_D4w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x11e) = iVar6;
      unaff_D7 = (uint)(*(int *)(iVar6 + unaff_D3w) << 3) >> 0x1b;
      iVar6 = unaff_D5w * 0x54 + _DAT_0002726c;
    } while ((*(char *)(iVar6 + 0x822) != '\x02') || (*(short *)(iVar6 + 0x820) == 0));
    in_D0 = (int)*(short *)(iVar6 + 0x81e);
    in_A0 = unaff_D3w * 0x9c + _DAT_0002726c;
  } while( true );
}



// Function: FUN_00004918 at 00004918
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004918(void)

{
  char *pcVar1;
  int in_D0;
  short sVar2;
  int in_D1;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short unaff_D6w;
  short sVar5;
  uint unaff_D7;
  int iVar6;
  int unaff_A6;
  
  do {
    if (in_D0 <= in_D1) {
      *(short *)(unaff_A6 + -0x116) = (short)*(char *)(unaff_A6 + -0x100 + (int)unaff_D6w);
      unaff_D6w = unaff_D6w + 1;
      if (0xfe < unaff_D6w) {
        unaff_D6w = 0;
      }
      if (*(short *)(unaff_A6 + -0x116) < *(short *)(unaff_D5w * 0x54 + _DAT_0002726c + 0x820)) {
        pcVar1 = (char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
        *(char **)(unaff_A6 + -0x108) = pcVar1;
        *pcVar1 = (char)(((short)*pcVar1 * 3) / 2);
      }
      if ((short)unaff_D7 != 0) {
        pcVar1 = (char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
        *(char **)(unaff_A6 + -0x10c) = pcVar1;
        *pcVar1 = *pcVar1 / '\x02';
      }
    }
    do {
      unaff_D3w = unaff_D3w + 1;
      while (0x6f < unaff_D3w) {
        unaff_D4w = unaff_D4w + 1;
        if (0x9b < unaff_D4w) {
          for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
            for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
              for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
                iVar6 = *(short *)(_DAT_0002726c +
                                  (short)(ushort)(byte)((uint)*(undefined4 *)
                                                               (sVar4 * 0xe0 + _DAT_00028850 +
                                                               sVar3 * 2) >> 0x18) * 2) * 0x54 +
                        _DAT_0002726c;
                *(int *)(unaff_A6 + -0x110) = iVar6;
                if ((*(char *)(iVar6 + 0x822) == '\x02') && (*(short *)(iVar6 + 0x820) != 0)) {
                  sVar2 = FUN_00004a5e(sVar4);
                  pcVar1 = (char *)((int)sVar4 + sVar3 * 0x9c + _DAT_0002726c + 0xb60);
                  *(char **)(unaff_A6 + -0x114) = pcVar1;
                  *pcVar1 = (char)(((int)sVar2 + (int)*pcVar1) / 2);
                }
              }
            }
          }
          return;
        }
        unaff_D3w = 0;
      }
      unaff_D5w = *(short *)(_DAT_0002726c +
                            (short)(ushort)(byte)((uint)*(undefined4 *)
                                                         (unaff_D4w * 0xe0 + _DAT_00028850 +
                                                         unaff_D3w * 2) >> 0x18) * 2);
      iVar6 = unaff_D4w * 0x70 + _DAT_00028858;
      *(int *)(unaff_A6 + -0x11e) = iVar6;
      unaff_D7 = (uint)(*(int *)(iVar6 + unaff_D3w) << 3) >> 0x1b;
      iVar6 = unaff_D5w * 0x54 + _DAT_0002726c;
    } while ((*(char *)(iVar6 + 0x822) != '\x02') || (*(short *)(iVar6 + 0x820) == 0));
    in_D0 = (int)*(short *)(iVar6 + 0x81e);
    in_D1 = (int)*(char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
  } while( true );
}



// Function: FUN_00004958 at 00004958
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004958(void)

{
  char *pcVar1;
  int in_D0;
  short sVar2;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D6w;
  short sVar5;
  uint unaff_D7;
  int in_A0;
  int iVar6;
  int unaff_A6;
  
  do {
    pcVar1 = (char *)((int)unaff_D4w + in_D0 + in_A0 + 0xb60);
    *(char **)(unaff_A6 + -0x108) = pcVar1;
    *pcVar1 = (char)(((short)*pcVar1 * 3) / 2);
    do {
      if ((short)unaff_D7 != 0) {
        pcVar1 = (char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
        *(char **)(unaff_A6 + -0x10c) = pcVar1;
        *pcVar1 = *pcVar1 / '\x02';
      }
      do {
        unaff_D3w = unaff_D3w + 1;
        while (0x6f < unaff_D3w) {
          unaff_D4w = unaff_D4w + 1;
          if (0x9b < unaff_D4w) {
            for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
              for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
                for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
                  iVar6 = *(short *)(_DAT_0002726c +
                                    (short)(ushort)(byte)((uint)*(undefined4 *)
                                                                 (sVar4 * 0xe0 + _DAT_00028850 +
                                                                 sVar3 * 2) >> 0x18) * 2) * 0x54 +
                          _DAT_0002726c;
                  *(int *)(unaff_A6 + -0x110) = iVar6;
                  if ((*(char *)(iVar6 + 0x822) == '\x02') && (*(short *)(iVar6 + 0x820) != 0)) {
                    sVar2 = FUN_00004a5e(sVar4);
                    pcVar1 = (char *)((int)sVar4 + sVar3 * 0x9c + _DAT_0002726c + 0xb60);
                    *(char **)(unaff_A6 + -0x114) = pcVar1;
                    *pcVar1 = (char)(((int)sVar2 + (int)*pcVar1) / 2);
                  }
                }
              }
            }
            return;
          }
          unaff_D3w = 0;
        }
        sVar5 = *(short *)(_DAT_0002726c +
                          (short)(ushort)(byte)((uint)*(undefined4 *)
                                                       (unaff_D4w * 0xe0 + _DAT_00028850 +
                                                       unaff_D3w * 2) >> 0x18) * 2);
        iVar6 = unaff_D4w * 0x70 + _DAT_00028858;
        *(int *)(unaff_A6 + -0x11e) = iVar6;
        unaff_D7 = (uint)(*(int *)(iVar6 + unaff_D3w) << 3) >> 0x1b;
        iVar6 = sVar5 * 0x54 + _DAT_0002726c;
      } while (((*(char *)(iVar6 + 0x822) != '\x02') || (*(short *)(iVar6 + 0x820) == 0)) ||
              ((int)*(char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60) <
               (int)*(short *)(iVar6 + 0x81e)));
      *(short *)(unaff_A6 + -0x116) = (short)*(char *)(unaff_A6 + -0x100 + (int)unaff_D6w);
      unaff_D6w = unaff_D6w + 1;
      if (0xfe < unaff_D6w) {
        unaff_D6w = 0;
      }
    } while (*(short *)(sVar5 * 0x54 + _DAT_0002726c + 0x820) <= *(short *)(unaff_A6 + -0x116));
    in_D0 = unaff_D3w * 0x9c;
    in_A0 = _DAT_0002726c;
  } while( true );
}



// Function: FUN_00004980 at 00004980
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004980(void)

{
  char *pcVar1;
  int in_D0;
  short sVar2;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D6w;
  short sVar5;
  int iVar6;
  int iVar7;
  int unaff_A6;
  
  do {
    pcVar1 = (char *)((int)unaff_D4w + in_D0 + _DAT_0002726c + 0xb60);
    *(char **)(unaff_A6 + -0x10c) = pcVar1;
    *pcVar1 = *pcVar1 / '\x02';
    do {
      do {
        unaff_D3w = unaff_D3w + 1;
        while (0x6f < unaff_D3w) {
          unaff_D4w = unaff_D4w + 1;
          if (0x9b < unaff_D4w) {
            for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
              for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
                for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
                  iVar6 = *(short *)(_DAT_0002726c +
                                    (short)(ushort)(byte)((uint)*(undefined4 *)
                                                                 (sVar4 * 0xe0 + _DAT_00028850 +
                                                                 sVar3 * 2) >> 0x18) * 2) * 0x54 +
                          _DAT_0002726c;
                  *(int *)(unaff_A6 + -0x110) = iVar6;
                  if ((*(char *)(iVar6 + 0x822) == '\x02') && (*(short *)(iVar6 + 0x820) != 0)) {
                    sVar2 = FUN_00004a5e(sVar4);
                    pcVar1 = (char *)((int)sVar4 + sVar3 * 0x9c + _DAT_0002726c + 0xb60);
                    *(char **)(unaff_A6 + -0x114) = pcVar1;
                    *pcVar1 = (char)(((int)sVar2 + (int)*pcVar1) / 2);
                  }
                }
              }
            }
            return;
          }
          unaff_D3w = 0;
        }
        sVar5 = *(short *)(_DAT_0002726c +
                          (short)(ushort)(byte)((uint)*(undefined4 *)
                                                       (unaff_D4w * 0xe0 + _DAT_00028850 +
                                                       unaff_D3w * 2) >> 0x18) * 2);
        iVar6 = unaff_D4w * 0x70 + _DAT_00028858;
        *(int *)(unaff_A6 + -0x11e) = iVar6;
        iVar6 = *(int *)(iVar6 + unaff_D3w);
        iVar7 = sVar5 * 0x54 + _DAT_0002726c;
      } while (((*(char *)(iVar7 + 0x822) != '\x02') || (*(short *)(iVar7 + 0x820) == 0)) ||
              ((int)*(char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60) <
               (int)*(short *)(iVar7 + 0x81e)));
      *(short *)(unaff_A6 + -0x116) = (short)*(char *)(unaff_A6 + -0x100 + (int)unaff_D6w);
      unaff_D6w = unaff_D6w + 1;
      if (0xfe < unaff_D6w) {
        unaff_D6w = 0;
      }
      if (*(short *)(unaff_A6 + -0x116) < *(short *)(sVar5 * 0x54 + _DAT_0002726c + 0x820)) {
        pcVar1 = (char *)((int)unaff_D4w + unaff_D3w * 0x9c + _DAT_0002726c + 0xb60);
        *(char **)(unaff_A6 + -0x108) = pcVar1;
        *pcVar1 = (char)(((short)*pcVar1 * 3) / 2);
      }
    } while ((ushort)((uint)(iVar6 << 3) >> 0x1b) == 0);
    in_D0 = unaff_D3w * 0x9c;
  } while( true );
}



// Function: FUN_00004a5e at 00004a5e
// Size: 310 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004a5e(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short sVar5;
  short asStack_10014 [32755];
  short local_16;
  short local_14 [8];
  
  sVar5 = 0;
  local_16 = 0;
  switch(param_2._0_2_) {
  case 0:
    unaff_D4w = 3;
    local_14[0] = 6;
    local_14[1] = 7;
    local_14[2] = 0;
    break;
  case 1:
    unaff_D4w = 3;
    local_14[0] = 2;
    local_14[1] = 0;
    local_14[2] = 1;
    break;
  case 2:
    unaff_D4w = 3;
    local_14[0] = 4;
    local_14[1] = 5;
    local_14[2] = 6;
    break;
  case 3:
    unaff_D4w = 3;
    local_14[0] = 2;
    local_14[1] = 3;
    local_14[2] = 4;
    break;
  case 4:
    unaff_D4w = 8;
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      local_14[sVar3] = sVar3;
    }
  }
  for (sVar3 = 0; sVar3 < unaff_D4w; sVar3 = sVar3 + 1) {
    sVar1 = *(short *)(local_14[sVar3] * 2 + 0x13fe0) + param_1._0_2_;
    sVar4 = *(short *)(local_14[sVar3] * 2 + 0x13fd0) + param_1._2_2_;
    if ((((-1 < sVar1) && (-1 < sVar4)) && (sVar1 < 0x70)) && (sVar4 < 0x9c)) {
      local_16 = *(char *)((int)sVar4 + sVar1 * 0x9c + _DAT_0002726c + 0xb60) + local_16;
      sVar5 = sVar5 + 1;
    }
  }
  if (sVar5 == 0) {
    iVar2 = (int)*(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x9c + _DAT_0002726c + 0xb60);
  }
  else {
    iVar2 = (int)local_16 / (int)sVar5;
  }
  return iVar2;
}



// Function: FUN_00004b9e at 00004b9e
// Size: 190 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004b9e(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  short unaff_D4w;
  short unaff_D5w;
  
  sVar1 = FUN_00004a5e(param_1._2_2_);
  if ((param_2._0_2_ == 0) || (param_2._0_2_ == 1)) {
    unaff_D5w = (short)*(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x9c + _DAT_0002726c + 0xb60);
    unaff_D4w = sVar1;
  }
  else if ((param_2._0_2_ == 2) || (param_2._0_2_ == 3)) {
    unaff_D4w = (short)*(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x9c + _DAT_0002726c + 0xb60);
    unaff_D5w = sVar1;
  }
  uVar2 = unaff_D5w - unaff_D4w;
  if ((short)uVar2 < -5) {
    uVar3 = 0;
  }
  else if ((short)uVar2 < -2) {
    uVar3 = 1;
  }
  else if (uVar2 < 0x8000) {
    if ((short)uVar2 < 1) {
      uVar3 = 3;
    }
    else if ((short)uVar2 < 3) {
      uVar3 = 4;
    }
    else if ((short)uVar2 < 6) {
      uVar3 = 5;
    }
    else {
      uVar3 = 6;
    }
  }
  else {
    uVar3 = 2;
  }
  return CONCAT22(unaff_D4w >> 0xf,uVar3);
}



// Function: FUN_00004c5c at 00004c5c
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004c5c(undefined4 param_1)

{
  return CONCAT22((short)((uint)(param_1._0_2_ * 2) >> 0x10),
                  *(undefined2 *)(param_1._0_2_ * 2 + _DAT_0002726c + 0xb58));
}



// Function: FUN_00004c78 at 00004c78
// Size: 34 bytes

void FUN_00004c78(undefined4 param_1)

{
  *(undefined2 *)(param_1._0_2_ * 0x10 + 0x271e8 + param_1._2_2_ * 2) = 1;
  return;
}



