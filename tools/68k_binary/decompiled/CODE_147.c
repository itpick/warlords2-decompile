// Warlords II - Decompiled 68k Code
// Segment: CODE_147
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 520 bytes

/* WARNING: Removing unreachable block (ram,0x00000334) */
/* WARNING: Removing unreachable block (ram,0x000002c8) */
/* WARNING: Removing unreachable block (ram,0x0000025c) */
/* WARNING: Removing unreachable block (ram,0x000001f0) */
/* WARNING: Removing unreachable block (ram,0x00000184) */
/* WARNING: Removing unreachable block (ram,0x00000118) */
/* WARNING: Removing unreachable block (ram,0x000000ac) */
/* WARNING: Removing unreachable block (ram,0x000000e2) */
/* WARNING: Removing unreachable block (ram,0x0000014e) */
/* WARNING: Removing unreachable block (ram,0x000001ba) */
/* WARNING: Removing unreachable block (ram,0x00000226) */
/* WARNING: Removing unreachable block (ram,0x00000292) */
/* WARNING: Removing unreachable block (ram,0x000002fe) */
/* WARNING: Removing unreachable block (ram,0x0000036a) */
/* WARNING: Removing unreachable block (ram,0x00000076) */

void FUN_0000000c(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 extraout_A0;
  undefined4 *puVar3;
  undefined1 auStack_17c [256];
  undefined4 local_7c [15];
  undefined4 local_40 [15];
  
  sVar1 = 0xe;
  puVar2 = (undefined4 *)&DAT_00013d70;
  puVar3 = local_40;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  sVar1 = 0xe;
  puVar2 = (undefined4 *)&DAT_00013d34;
  puVar3 = local_7c;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  if (DAT_000264d0 == '\0') {
    for (sVar1 = 0; sVar1 < 0xf; sVar1 = sVar1 + 1) {
      func_0x00007320(auStack_17c,local_40[sVar1],local_7c[sVar1]);
      FUN_00001c78(extraout_A0);
    }
    func_0x000073b0(10);
    return;
  }
  func_0x00005578();
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00000518 at 00000518
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000518(void)

{
  _DAT_000267d2 = 0x1c30;
                    /* WARNING: Subroutine does not return */
  FUN_00001bf0(0x1c30);
}



// Function: FUN_0000066a at 0000066a
// Size: 14 bytes

void FUN_0000066a(void)

{
  return;
}



// Function: FUN_00000678 at 00000678
// Size: 14 bytes

void FUN_00000678(void)

{
  func_0x000073b0(0x22);
  return;
}



// Function: FUN_000006a4 at 000006a4
// Size: 18 bytes

void FUN_000006a4(undefined4 param_1)

{
  FUN_00002120(param_1);
  return;
}



// Function: FUN_000006b6 at 000006b6
// Size: 14 bytes

void FUN_000006b6(void)

{
  return;
}



// Function: FUN_000006c4 at 000006c4
// Size: 14 bytes

void FUN_000006c4(void)

{
  func_0x000073b0(0x80);
  return;
}



// Function: FUN_000006f0 at 000006f0
// Size: 140 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006f0(undefined4 *param_1)

{
  func_0x000034c0(param_1);
  *param_1 = 0x1305c;
  func_0x00007208(param_1 + 0x10);
  _DAT_000266a8 = param_1;
  *(undefined4 *)((int)param_1 + 0x22) = 0x54455854;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x3f3f3f3f;
  *(undefined1 *)((int)param_1 + 0x2f) = 1;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  param_1[0x16] = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0xe) = 2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x3e) = 0;
  param_1[0x10] = _DAT_00025b56;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007d4 at 000007d4
// Size: 176 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007d4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000034c8((short)param_1,0);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    *(undefined4 *)((int)param_1 + 0x22) = param_2;
    *(undefined4 *)((int)param_1 + 0x1e) = param_3;
    FUN_00001c68();
    *(undefined4 *)((int)param_1 + 0x72) = extraout_A0;
    FUN_00001c68();
    *(undefined4 *)((int)param_1 + 0x76) = extraout_A0_00;
    FUN_00001c68();
    *(undefined4 *)((int)param_1 + 0x7a) = extraout_A0_01;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
  _DAT_000266a8 = 0;
  FUN_00001c10((short)((uint)local_14 >> 0x10));
  return;
}



// Function: FUN_000009c2 at 000009c2
// Size: 16 bytes

void FUN_000009c2(void)

{
  func_0x000073b0(0xc);
  return;
}



// Function: FUN_00000a08 at 00000a08
// Size: 18 bytes

void FUN_00000a08(void)

{
  func_0x000073b0(0xc);
  return;
}



// Function: FUN_00000a4c at 00000a4c
// Size: 208 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000a4c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  int local_e;
  int local_a;
  
  func_0x00001d38(param_3);
  FUN_00001cb8(&local_e);
  (**(code **)(local_e + 0xc))();
  do {
    iVar1 = local_a;
    cVar2 = FUN_00001cc8(&local_e);
    if (cVar2 == '\0') {
      return;
    }
    (**(code **)(*param_1 + 500))(param_1,iVar1);
    if (extraout_A0 != (int *)0x0) {
      cVar2 = (**(code **)(*extraout_A0 + 0x338))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*extraout_A0 + 0x2b8))();
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*extraout_A0 + 0x1d8))();
          if (cVar2 != '\0') {
            (**(code **)(*extraout_A0 + 0x15c))(extraout_A0,*(undefined4 *)(iVar1 + 0x18));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    (**(code **)(local_e + 0x10))();
  } while( true );
}



// Function: FUN_00000b32 at 00000b32
// Size: 14 bytes

void FUN_00000b32(void)

{
  func_0x000073b0(4);
  return;
}



// Function: FUN_00000b6c at 00000b6c
// Size: 16 bytes

void FUN_00000b6c(void)

{
  func_0x000073b0(4);
  return;
}



// Function: FUN_00000bbe at 00000bbe
// Size: 14 bytes

void FUN_00000bbe(void)

{
  return;
}



// Function: FUN_00000bcc at 00000bcc
// Size: 14 bytes

void FUN_00000bcc(void)

{
  func_0x000073b0(4);
  return;
}



// Function: FUN_00000bf8 at 00000bf8
// Size: 198 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bf8(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000dd8(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    DAT_00026576 = 1;
    sVar2 = 0x10;
    puVar3 = (undefined4 *)&DAT_fffff87c;
    puVar4 = (undefined4 *)&DAT_0002652c;
    do {
      *puVar4 = *puVar3;
      sVar2 = sVar2 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar2 != -1);
    _DAT_00026574 = 0x78;
    DAT_0002652a = 0;
    DAT_00026577 = 1;
    DAT_00026579 = 0;
    func_0x00005ab8(param_1,0x100000a);
    (**(code **)(*param_1 + 0x78))((short)param_1,0xffff);
    uRam00026520 = 1;
    _DAT_00026522 = _DAT_00025b42 & 0x5a68;
                    /* WARNING: Subroutine does not return */
    FUN_00001bf0(_DAT_00026522);
  }
  (**(code **)(*param_1 + 0x4c))();
  FUN_00001c10();
  return;
}



// Function: FUN_00000ca0 at 00000ca0
// Size: 112 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ca0(void)

{
  undefined4 unaff_A5;
  bool in_CF;
  
  if (!in_CF) {
    _DAT_00026522 = _DAT_00025b42 & 0x5a68;
                    /* WARNING: Subroutine does not return */
    FUN_00001bf0(_DAT_00026522);
  }
  _DAT_00026528 = 0;
  _DAT_00026518 = unaff_A5;
  func_0x00005a20(0x265fc,0x5a58);
  func_0x00005a10(0x265e0,0x5a60);
  func_0x00005a18(0x265ee,0x5a50);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000daa at 00000daa
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000daa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000dd8 at 00000dd8
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000dd8(void)

{
  undefined4 *unaff_A2;
  
  if (*(short *)*unaff_A2 < 1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e16 at 00000e16
// Size: 14 bytes

void FUN_00000e16(void)

{
  return;
}



// Function: FUN_00000e24 at 00000e24
// Size: 16 bytes

void FUN_00000e24(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00000e5c at 00000e5c
// Size: 26 bytes

void FUN_00000e5c(undefined4 param_1,undefined4 param_2)

{
  FUN_000020c0(param_1,param_2);
  return;
}



// Function: FUN_00000e76 at 00000e76
// Size: 14 bytes

void FUN_00000e76(void)

{
  return;
}



// Function: FUN_00000e84 at 00000e84
// Size: 16 bytes

void FUN_00000e84(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00000ebc at 00000ebc
// Size: 26 bytes

void FUN_00000ebc(undefined4 param_1,undefined4 param_2)

{
  FUN_000020c0(param_1,param_2);
  return;
}



// Function: FUN_00000ed6 at 00000ed6
// Size: 186 bytes

/* WARNING: Removing unreachable block (ram,0x0000109c) */
/* WARNING: Removing unreachable block (ram,0x000010c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ed6(void)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 != 0) {
    FUN_00001c10();
    return;
  }
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_000010f6 at 000010f6
// Size: 14 bytes

void FUN_000010f6(void)

{
  return;
}



// Function: FUN_00001104 at 00001104
// Size: 14 bytes

void FUN_00001104(void)

{
  func_0x000073b0(0x56);
  return;
}



// Function: FUN_00001130 at 00001130
// Size: 92 bytes

void FUN_00001130(undefined4 *param_1)

{
  FUN_00001300(param_1);
  *param_1 = 0x12408;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_1 + 0x1e);
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_1 + 0x22);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_1 + 0x26);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_1 + 0x2a);
  return;
}



// Function: FUN_0000118c at 0000118c
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000118c(int *param_1)

{
  FUN_00001308(param_1,0x636c6970);
  (**(code **)(*param_1 + 0xec))();
  _DAT_000264b2 = param_1;
  return;
}



// Function: FUN_000011c0 at 000011c0
// Size: 36 bytes

void FUN_000011c0(int *param_1)

{
  int extraout_A0;
  
  (**(code **)(*param_1 + 0xdc))();
  param_1[0x14] = extraout_A0;
                    /* WARNING: Subroutine does not return */
  FUN_00001bf0(extraout_A0);
}



// Function: FUN_0000123a at 0000123a
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000123a(void)

{
  int extraout_A0;
  
  (**(code **)(*_DAT_000257ee + 0x68))();
  if (extraout_A0 != 0) {
    *(undefined1 *)(extraout_A0 + 0xb3) = 1;
    *(undefined1 *)(extraout_A0 + 0x46) = 0;
    *(undefined1 *)(extraout_A0 + 0x47) = 0;
  }
  return extraout_A0;
}



// Function: FUN_00001276 at 00001276
// Size: 16 bytes

void FUN_00001276(void)

{
  func_0x000073b0(0x56);
  return;
}



// Function: FUN_000012e8 at 000012e8
// Size: 22 bytes

void FUN_000012e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00002430(param_1,param_2,param_3);
  return;
}



// Function: FUN_00001300 at 00001300
// Size: 8 bytes

byte FUN_00001300(void)

{
  byte in_D0b;
  
  return in_D0b | 0x30;
}



// Function: FUN_00001308 at 00001308
// Size: 14 bytes

void FUN_00001308(void)

{
  return;
}



// Function: FUN_00001316 at 00001316
// Size: 14 bytes

void FUN_00001316(void)

{
  func_0x000073b0(4);
  return;
}



// Function: FUN_00001330 at 00001330
// Size: 18 bytes

void FUN_00001330(void)

{
  undefined4 in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -4) = in_A0;
  func_0x00006f78();
  return;
}



// Function: FUN_00001342 at 00001342
// Size: 14 bytes

void FUN_00001342(void)

{
  return;
}



// Function: FUN_00001350 at 00001350
// Size: 14 bytes

void FUN_00001350(void)

{
  func_0x000073b0(0xc);
  return;
}



// Function: FUN_0000137c at 0000137c
// Size: 4 bytes

void FUN_0000137c(void)

{
  return;
}



// Function: FUN_00001380 at 00001380
// Size: 10 bytes

void FUN_00001380(void)

{
  return;
}



// Function: FUN_0000138a at 0000138a
// Size: 14 bytes

void FUN_0000138a(void)

{
  func_0x000073b0(0xe);
  return;
}



// Function: FUN_000013a0 at 000013a0
// Size: 22 bytes

void FUN_000013a0(void)

{
  undefined4 in_D0;
  undefined4 in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -8) = in_D0;
  *(undefined4 *)(unaff_A6 + -4) = in_A0;
  FUN_00000ca0();
  return;
}



// Function: FUN_000013b6 at 000013b6
// Size: 1 bytes

void FUN_000013b6(void)

{
  return;
}



// Function: FUN_000013b8 at 000013b8
// Size: 12 bytes

byte FUN_000013b8(void)

{
  byte in_D0b;
  
  return in_D0b | 0xf9;
}



// Function: FUN_000013c4 at 000013c4
// Size: 14 bytes

void FUN_000013c4(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_000013f0 at 000013f0
// Size: 14 bytes

void FUN_000013f0(void)

{
  return;
}



// Function: FUN_000013fe at 000013fe
// Size: 14 bytes

void FUN_000013fe(void)

{
  return;
}



// Function: FUN_0000140c at 0000140c
// Size: 14 bytes

void FUN_0000140c(void)

{
  func_0x000073b0(0x84);
  return;
}



// Function: FUN_00001438 at 00001438
// Size: 52 bytes

void FUN_00001438(undefined4 *param_1)

{
  FUN_000015a0(param_1);
  *param_1 = 0x105f4;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  return;
}



// Function: FUN_0000146c at 0000146c
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000146c(undefined4 param_1,undefined4 param_2)

{
  func_0x000031a8(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000149a at 0000149a
// Size: 180 bytes

/* WARNING: Removing unreachable block (ram,0x0000158a) */
/* WARNING: Removing unreachable block (ram,0x000015f6) */
/* WARNING: Removing unreachable block (ram,0x00001662) */
/* WARNING: Removing unreachable block (ram,0x000016ce) */
/* WARNING: Removing unreachable block (ram,0x0000173a) */
/* WARNING: Removing unreachable block (ram,0x000017a6) */
/* WARNING: Removing unreachable block (ram,0x0000151e) */
/* WARNING: Removing unreachable block (ram,0x00001538) */
/* WARNING: Removing unreachable block (ram,0x0000154a) */
/* WARNING: Removing unreachable block (ram,0x00001770) */
/* WARNING: Removing unreachable block (ram,0x00001704) */
/* WARNING: Removing unreachable block (ram,0x00001698) */
/* WARNING: Removing unreachable block (ram,0x0000162c) */
/* WARNING: Removing unreachable block (ram,0x000015c0) */
/* WARNING: Removing unreachable block (ram,0x000014e8) */
/* WARNING: Removing unreachable block (ram,0x00001554) */

void FUN_0000149a(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  undefined1 auStack_f04 [256];
  undefined1 auStack_e04 [256];
  undefined1 auStack_d04 [256];
  undefined1 auStack_c04 [256];
  undefined1 auStack_b04 [256];
  undefined1 auStack_a04 [256];
  undefined1 auStack_904 [256];
  undefined1 auStack_804 [256];
  undefined1 auStack_704 [256];
  undefined1 auStack_604 [256];
  undefined1 auStack_504 [256];
  undefined1 auStack_404 [256];
  undefined1 auStack_304 [256];
  undefined1 auStack_204 [256];
  undefined1 auStack_104 [256];
  
  if (DAT_00025b3d != '\0') {
    return;
  }
  if (DAT_000264d0 != '\0') {
    func_0x00004318();
    func_0x000073b0(0x84);
    return;
  }
  func_0x00007320(auStack_104,0x105e8,0x646c6f67);
  FUN_00001c78(extraout_A0);
  func_0x00007320(auStack_204,0x105de,0x636e746c);
  FUN_00001c78(extraout_A0_00);
  func_0x00007320(auStack_304,0x105d6,0x6275746e);
  FUN_00001c78(extraout_A0_01);
  func_0x00007320(auStack_404,0x105cc,0x63686b62);
  FUN_00001c78(extraout_A0_02);
  func_0x00007320(auStack_504,0x105c5,0x72616462);
  FUN_00001c78(extraout_A0_03);
  func_0x00007320(auStack_604,0x105bc,0x636c7573);
  FUN_00001c78(extraout_A0_04);
  func_0x00007320(auStack_704,0x105b6,0x69636f6e);
  FUN_00001c78(extraout_A0_05);
  func_0x00007320(auStack_804,0x105aa,0x7369636e);
  FUN_00001c78(extraout_A0_06);
  func_0x00007320(auStack_904,0x105a1,0x70696374);
  FUN_00001c78(extraout_A0_07);
  func_0x00007320(auStack_a04,0x1059a,0x706f7070);
  FUN_00001c78(extraout_A0_08);
  func_0x00007320(auStack_b04,0x1058e,0x73746174);
  FUN_00001c78(extraout_A0_09);
  func_0x00007320(auStack_c04,0x10584,0x65646974);
  FUN_00001c78(extraout_A0_10);
  func_0x00007320(auStack_d04,0x10578,0x6e6d6272);
  FUN_00001c78(extraout_A0_11);
  func_0x00007320(auStack_e04,0x1056e,0x7061746e);
  FUN_00001c78(extraout_A0_12);
  func_0x00007320(auStack_f04,0x1055c,0x74626f72);
  FUN_00001c78(extraout_A0_13);
  func_0x000073b0(8);
  return;
}



// Function: FUN_00001508 at 00001508
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001508(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000015a0 at 000015a0
// Size: 76 bytes

/* WARNING: Removing unreachable block (ram,0x00001770) */
/* WARNING: Removing unreachable block (ram,0x00001704) */
/* WARNING: Removing unreachable block (ram,0x00001698) */
/* WARNING: Removing unreachable block (ram,0x0000162c) */
/* WARNING: Removing unreachable block (ram,0x00001662) */
/* WARNING: Removing unreachable block (ram,0x000016ce) */
/* WARNING: Removing unreachable block (ram,0x0000173a) */
/* WARNING: Removing unreachable block (ram,0x000017a6) */
/* WARNING: Removing unreachable block (ram,0x000015f6) */

void FUN_000015a0(void)

{
  undefined4 in_D0;
  undefined4 in_A0;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  int unaff_A6;
  bool in_ZF;
  
  if (!in_ZF) {
    *(undefined4 *)(unaff_A6 + -0xf04) = in_D0;
    *(undefined4 *)(unaff_A6 + -0xf08) = in_A0;
    func_0x00004568();
  }
  if (DAT_000264d0 == '\0') {
    func_0x00007320(unaff_A6 + -0x100,0x105e8);
    FUN_00001c78(extraout_A0);
    func_0x00007320(unaff_A6 + -0x200,0x105de,0x636e746c);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(unaff_A6 + -0x300,0x105d6,0x6275746e);
    FUN_00001c78(extraout_A0_01);
    func_0x00007320(unaff_A6 + -0x400,0x105cc,0x63686b62);
    FUN_00001c78(extraout_A0_02);
    func_0x00007320(unaff_A6 + -0x500,0x105c5,0x72616462);
    FUN_00001c78(extraout_A0_03);
    func_0x00007320(unaff_A6 + -0x600,0x105bc,0x636c7573);
    FUN_00001c78(extraout_A0_04);
    func_0x00007320(unaff_A6 + -0x700,0x105b6,0x69636f6e);
    FUN_00001c78(extraout_A0_05);
    func_0x00007320(unaff_A6 + -0x800,0x105aa,0x7369636e);
    FUN_00001c78(extraout_A0_06);
    func_0x00007320(unaff_A6 + -0x900,0x105a1,0x70696374);
    FUN_00001c78(extraout_A0_07);
    func_0x00007320(unaff_A6 + -0xa00,0x1059a,0x706f7070);
    FUN_00001c78(extraout_A0_08);
    func_0x00007320(unaff_A6 + -0xb00,0x1058e,0x73746174);
    FUN_00001c78(extraout_A0_09);
    func_0x00007320(unaff_A6 + -0xc00,0x10584,0x65646974);
    FUN_00001c78(extraout_A0_10);
    func_0x00007320(unaff_A6 + -0xd00,0x10578,0x6e6d6272);
    FUN_00001c78(extraout_A0_11);
    func_0x00007320(unaff_A6 + -0xe00,0x1056e,0x7061746e);
    FUN_00001c78(extraout_A0_12);
    func_0x00007320(unaff_A6 + -0xf00,0x1055c,0x74626f72);
    FUN_00001c78(extraout_A0_13);
    func_0x000073b0(8);
    return;
  }
  func_0x00004348();
  func_0x000073b0();
  return;
}



// Function: FUN_00001608 at 00001608
// Size: 24 bytes

/* WARNING: Removing unreachable block (ram,0x00001770) */
/* WARNING: Removing unreachable block (ram,0x00001704) */
/* WARNING: Removing unreachable block (ram,0x00001698) */
/* WARNING: Removing unreachable block (ram,0x000016ce) */
/* WARNING: Removing unreachable block (ram,0x0000173a) */
/* WARNING: Removing unreachable block (ram,0x000017a6) */
/* WARNING: Removing unreachable block (ram,0x00001662) */

void FUN_00001608(void)

{
  int in_A0;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  int unaff_A6;
  
  if (in_A0 != 0) {
    *(int *)(unaff_A6 + -0xf04) = in_A0;
    *(int *)(unaff_A6 + -0xf08) = in_A0;
    func_0x00004388();
  }
  if (DAT_000264d0 == '\0') {
    func_0x00007320(unaff_A6 + -0x100,0x105e8);
    FUN_00001c78(extraout_A0);
    func_0x00007320(unaff_A6 + -0x200,0x105de,0x636e746c);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(unaff_A6 + -0x300,0x105d6,0x6275746e);
    FUN_00001c78(extraout_A0_01);
    func_0x00007320(unaff_A6 + -0x400,0x105cc,0x63686b62);
    FUN_00001c78(extraout_A0_02);
    func_0x00007320(unaff_A6 + -0x500,0x105c5,0x72616462);
    FUN_00001c78(extraout_A0_03);
    func_0x00007320(unaff_A6 + -0x600,0x105bc,0x636c7573);
    FUN_00001c78(extraout_A0_04);
    func_0x00007320(unaff_A6 + -0x700,0x105b6,0x69636f6e);
    FUN_00001c78(extraout_A0_05);
    func_0x00007320(unaff_A6 + -0x800,0x105aa,0x7369636e);
    FUN_00001c78(extraout_A0_06);
    func_0x00007320(unaff_A6 + -0x900,0x105a1,0x70696374);
    FUN_00001c78(extraout_A0_07);
    func_0x00007320(unaff_A6 + -0xa00,0x1059a,0x706f7070);
    FUN_00001c78(extraout_A0_08);
    func_0x00007320(unaff_A6 + -0xb00,0x1058e,0x73746174);
    FUN_00001c78(extraout_A0_09);
    func_0x00007320(unaff_A6 + -0xc00,0x10584,0x65646974);
    FUN_00001c78(extraout_A0_10);
    func_0x00007320(unaff_A6 + -0xd00,0x10578,0x6e6d6272);
    FUN_00001c78(extraout_A0_11);
    func_0x00007320(unaff_A6 + -0xe00,0x1056e,0x7061746e);
    FUN_00001c78(extraout_A0_12);
    func_0x00007320(unaff_A6 + -0xf00,0x1055c,0x74626f72);
    FUN_00001c78(extraout_A0_13);
    func_0x000073b0(8);
    return;
  }
  func_0x000043a0();
  func_0x000073b0();
  return;
}



// Function: FUN_00001620 at 00001620
// Size: 56 bytes

/* WARNING: Removing unreachable block (ram,0x00001770) */
/* WARNING: Removing unreachable block (ram,0x00001704) */
/* WARNING: Removing unreachable block (ram,0x00001698) */
/* WARNING: Removing unreachable block (ram,0x000016ce) */
/* WARNING: Removing unreachable block (ram,0x0000173a) */
/* WARNING: Removing unreachable block (ram,0x000017a6) */
/* WARNING: Removing unreachable block (ram,0x00001662) */

void FUN_00001620(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  int unaff_A6;
  
  if (DAT_000264d0 == '\0') {
    func_0x00007320(unaff_A6 + -0x100,0x105e8);
    FUN_00001c78(extraout_A0);
    func_0x00007320(unaff_A6 + -0x200,0x105de,0x636e746c);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(unaff_A6 + -0x300,0x105d6,0x6275746e);
    FUN_00001c78(extraout_A0_01);
    func_0x00007320(unaff_A6 + -0x400,0x105cc,0x63686b62);
    FUN_00001c78(extraout_A0_02);
    func_0x00007320(unaff_A6 + -0x500,0x105c5,0x72616462);
    FUN_00001c78(extraout_A0_03);
    func_0x00007320(unaff_A6 + -0x600,0x105bc,0x636c7573);
    FUN_00001c78(extraout_A0_04);
    func_0x00007320(unaff_A6 + -0x700,0x105b6,0x69636f6e);
    FUN_00001c78(extraout_A0_05);
    func_0x00007320(unaff_A6 + -0x800,0x105aa,0x7369636e);
    FUN_00001c78(extraout_A0_06);
    func_0x00007320(unaff_A6 + -0x900,0x105a1,0x70696374);
    FUN_00001c78(extraout_A0_07);
    func_0x00007320(unaff_A6 + -0xa00,0x1059a,0x706f7070);
    FUN_00001c78(extraout_A0_08);
    func_0x00007320(unaff_A6 + -0xb00,0x1058e,0x73746174);
    FUN_00001c78(extraout_A0_09);
    func_0x00007320(unaff_A6 + -0xc00,0x10584,0x65646974);
    FUN_00001c78(extraout_A0_10);
    func_0x00007320(unaff_A6 + -0xd00,0x10578,0x6e6d6272);
    FUN_00001c78(extraout_A0_11);
    func_0x00007320(unaff_A6 + -0xe00,0x1056e,0x7061746e);
    FUN_00001c78(extraout_A0_12);
    func_0x00007320(unaff_A6 + -0xf00,0x1055c,0x74626f72);
    FUN_00001c78(extraout_A0_13);
    func_0x000073b0(8);
    return;
  }
  func_0x000043a0();
  func_0x000073b0();
  return;
}



// Function: FUN_00001678 at 00001678
// Size: 669 bytes

/* WARNING: Removing unreachable block (ram,0x00001770) */
/* WARNING: Removing unreachable block (ram,0x00001704) */
/* WARNING: Removing unreachable block (ram,0x0000173a) */
/* WARNING: Removing unreachable block (ram,0x000017a6) */
/* WARNING: Removing unreachable block (ram,0x000016ce) */

void FUN_00001678(void)

{
  undefined4 in_D0;
  undefined4 in_A0;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  int unaff_A6;
  bool in_ZF;
  
  if (!in_ZF) {
    *(undefined4 *)(unaff_A6 + -0xf04) = in_D0;
    *(undefined4 *)(unaff_A6 + -0xf08) = in_A0;
    func_0x00004408();
  }
  if (DAT_000264d0 == '\0') {
    func_0x00007320(unaff_A6 + -0x100,0x105e8);
    FUN_00001c78(extraout_A0);
    func_0x00007320(unaff_A6 + -0x200,0x105de,0x636e746c);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(unaff_A6 + -0x300,0x105d6,0x6275746e);
    FUN_00001c78(extraout_A0_01);
    func_0x00007320(unaff_A6 + -0x400,0x105cc,0x63686b62);
    FUN_00001c78(extraout_A0_02);
    func_0x00007320(unaff_A6 + -0x500,0x105c5,0x72616462);
    FUN_00001c78(extraout_A0_03);
    func_0x00007320(unaff_A6 + -0x600,0x105bc,0x636c7573);
    FUN_00001c78(extraout_A0_04);
    func_0x00007320(unaff_A6 + -0x700,0x105b6,0x69636f6e);
    FUN_00001c78(extraout_A0_05);
    func_0x00007320(unaff_A6 + -0x800,0x105aa,0x7369636e);
    FUN_00001c78(extraout_A0_06);
    func_0x00007320(unaff_A6 + -0x900,0x105a1,0x70696374);
    FUN_00001c78(extraout_A0_07);
    func_0x00007320(unaff_A6 + -0xa00,0x1059a,0x706f7070);
    FUN_00001c78(extraout_A0_08);
    func_0x00007320(unaff_A6 + -0xb00,0x1058e,0x73746174);
    FUN_00001c78(extraout_A0_09);
    func_0x00007320(unaff_A6 + -0xc00,0x10584,0x65646974);
    FUN_00001c78(extraout_A0_10);
    func_0x00007320(unaff_A6 + -0xd00,0x10578,0x6e6d6272);
    FUN_00001c78(extraout_A0_11);
    func_0x00007320(unaff_A6 + -0xe00,0x1056e,0x7061746e);
    FUN_00001c78(extraout_A0_12);
    func_0x00007320(unaff_A6 + -0xf00,0x1055c,0x74626f72);
    FUN_00001c78(extraout_A0_13);
    func_0x000073b0(8);
    return;
  }
  func_0x00004620();
  func_0x000073b0();
  return;
}



// Function: FUN_00001a32 at 00001a32
// Size: 40 bytes

void FUN_00001a32(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x10102;
  param_1[1] = 0;
  return;
}



// Function: FUN_00001a5a at 00001a5a
// Size: 18 bytes

void FUN_00001a5a(undefined4 param_1)

{
  FUN_00000dd8(param_1);
  return;
}



// Function: FUN_00001a6c at 00001a6c
// Size: 258 bytes

/* WARNING: Removing unreachable block (ram,0x00001ae6) */
/* WARNING: Removing unreachable block (ram,0x00001ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a6c(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined1 auStack_304 [256];
  undefined1 auStack_204 [256];
  undefined1 auStack_104 [256];
  
  if (DAT_000264d0 == '\0') {
    func_0x00007320(auStack_104,0xbb32,0x67726964);
    FUN_00001c78(extraout_A0);
    func_0x00007320(auStack_204,0xbb24,0x74787467);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(auStack_304,0xbb16,0x6c737467);
    FUN_00001c78(extraout_A0_01);
    FUN_00001c68();
    _DAT_00025de6 = extraout_A0_02;
    FUN_00001c68();
    _DAT_00025dea = extraout_A0_03;
    FUN_00001c68();
    _DAT_00025dee = extraout_A0_04;
    FUN_00001c68();
    _DAT_00025df2 = extraout_A0_05;
    FUN_00001c68();
    _DAT_00025df6 = extraout_A0_06;
    DAT_00025b3e = 1;
    return;
  }
  func_0x000045a8();
  func_0x000073b0(0x9c);
  return;
}



// Function: FUN_00001bc2 at 00001bc2
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bc2(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
                    /* WARNING: Subroutine does not return */
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 14 bytes

byte FUN_00001bf0(void)

{
  byte in_D0b;
  
  return in_D0b | 0xf8;
}



// Function: FUN_00001bfe at 00001bfe
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bfe(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_0000256a();
  FUN_00001df0();
  FUN_00001df0();
  FUN_00001df0();
  FUN_00001bc2(0x25d22,0x1c50);
  FUN_00001c68();
  _DAT_00025cc8 = extraout_A0;
  func_0x00007258(0x25b4e,0);
  func_0x00007310(0x25b76,extraout_A0_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c10 at 00001c10
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  int in_A0;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  *(int *)(in_A0 + -4) = *(int *)(in_A0 + -4) + 6;
  FUN_00001df0();
  FUN_00001df0();
  FUN_00001df0();
  FUN_00001bc2(0x25d22,0x1c50);
  FUN_00001c68();
  _DAT_00025cc8 = extraout_A0;
  func_0x00007258(0x25b4e,0);
  func_0x00007310(0x25b76,extraout_A0_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c68 at 00001c68
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c68(void)

{
  func_0x00007310(0x25b76);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c78 at 00001c78
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001cb8 at 00001cb8
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cb8(void)

{
  int *unaff_A4;
  int unaff_A6;
  
  *unaff_A4 = *unaff_A4 + -3;
  _DAT_000257a0 = *(undefined4 *)(unaff_A6 + -4);
  *(undefined2 *)(unaff_A6 + -0x1c) = 4;
  *(undefined2 *)(unaff_A6 + -0x1a) = 4;
  func_0x00007288(0x2579c,unaff_A6 + -0x1c);
  func_0x000072b8(unaff_A6 + -8,unaff_A6 + -0x2c);
  *(undefined2 *)(unaff_A6 + -0x20) = 0x50;
  *(undefined2 *)(unaff_A6 + -0x1e) = 0x50;
  *(undefined2 *)(unaff_A6 + -0x10) = *(undefined2 *)(unaff_A6 + -0x20);
  *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(unaff_A6 + -0x1e);
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(unaff_A6 + -0x2c);
  *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(unaff_A6 + -0x2a);
  _DAT_000257a4 = *(undefined4 *)(unaff_A6 + -0x10);
  _DAT_000257a8 = (short)((uint)*(undefined4 *)(unaff_A6 + -0xc) >> 0x10);
  _DAT_000257a8 = CONCAT22(_DAT_000257a8 + -8,(short)*(undefined4 *)(unaff_A6 + -0xc));
  _DAT_000257ac = *(undefined4 *)(unaff_A6 + -8);
  _DAT_000257b0 = *(undefined4 *)(unaff_A6 + -4);
  *(undefined2 *)(unaff_A6 + -0x24) = 0x10;
  *(undefined2 *)(unaff_A6 + -0x22) = 0x10;
  func_0x00007288(&DAT_000257ac,unaff_A6 + -0x24);
  FUN_00000b6c();
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00001cc8 at 00001cc8
// Size: 159 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cc8(void)

{
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -0x1a) = 4;
  func_0x00007288(0x2579c,unaff_A6 + -0x1c);
  func_0x000072b8(unaff_A6 + -8,unaff_A6 + -0x2c);
  *(undefined2 *)(unaff_A6 + -0x20) = 0x50;
  *(undefined2 *)(unaff_A6 + -0x1e) = 0x50;
  *(undefined2 *)(unaff_A6 + -0x10) = *(undefined2 *)(unaff_A6 + -0x20);
  *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(unaff_A6 + -0x1e);
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(unaff_A6 + -0x2c);
  *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(unaff_A6 + -0x2a);
  _DAT_000257a4 = *(undefined4 *)(unaff_A6 + -0x10);
  _DAT_000257a8 = (short)((uint)*(undefined4 *)(unaff_A6 + -0xc) >> 0x10);
  _DAT_000257a8 = CONCAT22(_DAT_000257a8 + -8,(short)*(undefined4 *)(unaff_A6 + -0xc));
  _DAT_000257ac = *(undefined4 *)(unaff_A6 + -8);
  _DAT_000257b0 = *(undefined4 *)(unaff_A6 + -4);
  *(undefined2 *)(unaff_A6 + -0x24) = 0x10;
  *(undefined2 *)(unaff_A6 + -0x22) = 0x10;
  func_0x00007288(&DAT_000257ac,unaff_A6 + -0x24);
  FUN_00000b6c();
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00001df0 at 00001df0
// Size: 106 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001eec) */
/* WARNING: Removing unreachable block (ram,0x00001e80) */
/* WARNING: Removing unreachable block (ram,0x00001eb6) */
/* WARNING: Removing unreachable block (ram,0x00001f22) */
/* WARNING: Removing unreachable block (ram,0x00001e4a) */

void FUN_00001df0(void)

{
  int in_A0;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  int unaff_A6;
  
  if (in_A0 != 0) {
    *(int *)(unaff_A6 + -0x930) = in_A0;
    *(int *)(unaff_A6 + -0x934) = in_A0;
    FUN_00001620();
  }
  if (DAT_000264d0 == '\0') {
    func_0x00007320(unaff_A6 + -300,0xa21e);
    FUN_00001c78(extraout_A0);
    func_0x00007320(unaff_A6 + -0x22c,0xa21e,0x64666c74);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(unaff_A6 + -0x32c,0xa210,0x696e6340);
    FUN_00001c78(extraout_A0_01);
    func_0x00007320(unaff_A6 + -0x42c,0xa208,0x77696e64);
    FUN_00001c78(extraout_A0_02);
    func_0x00007320(unaff_A6 + -0x52c,0xa1fd,0x73626172);
    FUN_00001c78(extraout_A0_03);
    func_0x00007320(unaff_A6 + -0x62c,0xa1ea,0x73736272);
    FUN_00001c78(extraout_A0_04);
    func_0x00007320(unaff_A6 + -0x72c,0xa1e0,0x7363726c);
    FUN_00001c78(extraout_A0_05);
    func_0x00007320(unaff_A6 + -0x82c,0xa1d6,0x7472616b);
    FUN_00001c78(extraout_A0_06);
    func_0x00007320((short)unaff_A6 + -0x92c,0xa1d0,0x6c697374);
    FUN_00001c78(extraout_A0_07);
    FUN_0000000c();
    FUN_00002328();
    FUN_00001276();
    FUN_00000518();
    *(undefined4 *)(unaff_A6 + -0x18) = 0;
    *(undefined4 *)(unaff_A6 + -0x14) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001678();
  func_0x000073b0();
  return;
}



// Function: FUN_00001e98 at 00001e98
// Size: 448 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001f22) */
/* WARNING: Removing unreachable block (ram,0x00001eec) */

void FUN_00001e98(void)

{
  undefined4 in_D0;
  undefined4 in_A0;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  int unaff_A6;
  bool in_ZF;
  
  if (!in_ZF) {
    *(undefined4 *)(unaff_A6 + -0x930) = in_D0;
    *(undefined4 *)(unaff_A6 + -0x934) = in_A0;
    FUN_000013b8();
  }
  if (DAT_000264d0 == '\0') {
    func_0x00007320(unaff_A6 + -300,0xa21e,0x76696577);
    FUN_00001c78(extraout_A0);
    func_0x00007320(unaff_A6 + -0x22c,0xa21e,0x64666c74);
    FUN_00001c78(extraout_A0_00);
    func_0x00007320(unaff_A6 + -0x32c,0xa210,0x696e6340);
    FUN_00001c78(extraout_A0_01);
    func_0x00007320(unaff_A6 + -0x42c,0xa208,0x77696e64);
    FUN_00001c78(extraout_A0_02);
    func_0x00007320(unaff_A6 + -0x52c,0xa1fd,0x73626172);
    FUN_00001c78(extraout_A0_03);
    func_0x00007320(unaff_A6 + -0x62c,0xa1ea,0x73736272);
    FUN_00001c78(extraout_A0_04);
    func_0x00007320(unaff_A6 + -0x72c,0xa1e0,0x7363726c);
    FUN_00001c78(extraout_A0_05);
    func_0x00007320(unaff_A6 + -0x82c,0xa1d6,0x7472616b);
    FUN_00001c78(extraout_A0_06);
    func_0x00007320((short)unaff_A6 + -0x92c,0xa1d0,0x6c697374);
    FUN_00001c78(extraout_A0_07);
    FUN_0000000c();
    FUN_00002328();
    FUN_00001276();
    FUN_00000518();
    *(undefined4 *)(unaff_A6 + -0x18) = 0;
    *(undefined4 *)(unaff_A6 + -0x14) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001508();
  func_0x000073b0(0xb8);
  return;
}



// Function: FUN_000020c0 at 000020c0
// Size: 20 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000020c0(void)

{
  int unaff_A6;
  
  _DAT_ffffffa8 = *(undefined4 *)(unaff_A6 + -0x28);
  return;
}



// Function: FUN_000020d4 at 000020d4
// Size: 14 bytes

void FUN_000020d4(void)

{
  return;
}



// Function: FUN_000020e2 at 000020e2
// Size: 16 bytes

void FUN_000020e2(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_0000211a at 0000211a
// Size: 4 bytes

void FUN_0000211a(undefined4 param_1)

{
  FUN_000020c0(param_1,0);
  return;
}



// Function: FUN_00002120 at 00002120
// Size: 18 bytes

void FUN_00002120(void)

{
  int unaff_A6;
  
  FUN_000020c0(*(undefined4 *)(unaff_A6 + 8));
  return;
}



// Function: FUN_00002132 at 00002132
// Size: 14 bytes

void FUN_00002132(void)

{
  return;
}



// Function: FUN_00002140 at 00002140
// Size: 16 bytes

void FUN_00002140(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00002178 at 00002178
// Size: 24 bytes

void FUN_00002178(undefined4 param_1)

{
  FUN_000020c0(param_1,0);
  return;
}



// Function: FUN_00002190 at 00002190
// Size: 52 bytes

void FUN_00002190(int *param_1,int param_2,undefined2 param_3)

{
  int local_c;
  undefined2 local_6;
  
  if (0 < param_2) {
    local_c = param_2;
    local_6 = param_3;
    (**(code **)(*param_1 + 0x88))(param_1,&local_c);
  }
  return;
}



// Function: FUN_000021c4 at 000021c4
// Size: 14 bytes

void FUN_000021c4(void)

{
  return;
}



// Function: FUN_000021d2 at 000021d2
// Size: 16 bytes

void FUN_000021d2(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_0000220a at 0000220a
// Size: 17 bytes

void FUN_0000220a(undefined4 param_1)

{
                    /* WARNING: Call to offcut address within same function */
  func_0x00002210(param_1);
  return;
}



// Function: FUN_0000221c at 0000221c
// Size: 240 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000221c(uint *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  short sVar8;
  short sVar9;
  uint *extraout_A0;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  
  puVar14 = param_1;
  func_0x000075d0(param_1);
  FUN_00001e98(puVar14);
  func_0x00007398(param_1);
  func_0x00007398(extraout_A0);
  puVar2 = (undefined2 *)(_DAT_00025b42 & *param_1);
  puVar3 = (undefined1 *)(_DAT_00025b42 & *extraout_A0);
  uVar1 = *puVar2;
  sVar8 = *(byte *)(puVar2 + 7) + 0xf;
  puVar4 = puVar2;
  puVar5 = puVar3;
  for (iVar10 = (int)sVar8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  pbVar12 = (byte *)((int)sVar8 + (int)puVar2);
  pbVar13 = puVar3 + sVar8;
  sVar8 = 0;
  func_0x000075d0();
  pbVar11 = (byte *)((int)param_1 + (int)pbVar12);
  for (; (pbVar12 < pbVar11 && (*pbVar12 != 0)); pbVar12 = pbVar12 + 4) {
    sVar9 = *pbVar12 + 5;
    pbVar6 = pbVar12;
    pbVar7 = pbVar13;
    for (iVar10 = (int)sVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pbVar7 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    }
    pbVar12 = pbVar12 + sVar9;
    pbVar13 = pbVar13 + sVar9;
    if (((uint)pbVar12 & 1) == 1) {
      pbVar12 = pbVar12 + 1;
    }
    sVar8 = sVar8 + 1;
    FUN_00002190(_DAT_00025a34,*(undefined4 *)pbVar12,CONCAT22(uVar1,sVar8));
  }
  *pbVar13 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002328 at 00002328
// Size: 18 bytes

void FUN_00002328(void)

{
  func_0x000073b0(0x1e);
  return;
}



// Function: FUN_00002530 at 00002530
// Size: 14 bytes

void FUN_00002530(void)

{
  return;
}



// Function: FUN_0000253e at 0000253e
// Size: 14 bytes

void FUN_0000253e(void)

{
  func_0x000073b0(0xc);
  return;
}



// Function: FUN_0000256a at 0000256a
// Size: 14 bytes

void FUN_0000256a(void)

{
  FUN_00000ed6();
  return;
}



// Function: FUN_00002578 at 00002578
// Size: 118 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002578(void)

{
  undefined4 extraout_A0;
  undefined1 auStack_104 [256];
  
  if (DAT_00025b3f == '\0') {
    if (DAT_000264d0 != '\0') {
      func_0x00004660();
      func_0x000073b0(0xd2);
      return;
    }
    func_0x00007320(auStack_104,0x88ca,0x74657677);
    FUN_00001c78(extraout_A0);
    if (_DAT_00025854 == 0) {
      _DAT_00025854 = 0x6c0;
                    /* WARNING: Subroutine does not return */
      FUN_00001bf0(0x6c0);
    }
    DAT_00025b3f = '\x01';
  }
  return;
}



// Function: FUN_0000260c at 0000260c
// Size: 14 bytes

void FUN_0000260c(void)

{
  return;
}



// Function: FUN_0000261a at 0000261a
// Size: 14 bytes

void FUN_0000261a(void)

{
  func_0x000073b0(4);
  return;
}



// Function: FUN_00002646 at 00002646
// Size: 26 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002646(undefined4 param_1)

{
  FUN_00000dd8(param_1);
  _DAT_000257ee = param_1;
  return;
}



