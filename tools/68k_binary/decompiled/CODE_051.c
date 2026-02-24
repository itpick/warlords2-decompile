// Warlords II - Decompiled 68k Code
// Segment: CODE_051
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 70 bytes

void FUN_0000000c(int param_1,int *param_2)

{
  FUN_00000bbc(param_1,param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 4));
  (**(code **)(*param_2 + 0xc4))();
  return;
}



// Function: FUN_00000052 at 00000052
// Size: 14 bytes

undefined4 FUN_00000052(void)

{
  return 0x636f6d70;
}



// Function: FUN_00000060 at 00000060
// Size: 54 bytes

void FUN_00000060(int param_1,int *param_2)

{
  undefined1 local_5;
  
  FUN_0000000c(param_1,param_2);
  local_5 = *(undefined1 *)(param_1 + 10);
  (**(code **)(*param_2 + 0xbc))(param_2,&local_5,1);
  return;
}



// Function: FUN_00000096 at 00000096
// Size: 14 bytes

undefined4 FUN_00000096(void)

{
  return 0x64696d61;
}



// Function: FUN_000000a4 at 000000a4
// Size: 14 bytes

undefined4 FUN_000000a4(void)

{
  return 0x64726177;
}



// Function: FUN_000000b2 at 000000b2
// Size: 14 bytes

undefined4 FUN_000000b2(void)

{
  return 0x65726173;
}



// Function: FUN_000000c0 at 000000c0
// Size: 14 bytes

undefined4 FUN_000000c0(void)

{
  return 0x68696c69;
}



// Function: FUN_000000ce at 000000ce
// Size: 14 bytes

undefined4 FUN_000000ce(void)

{
  return 0x7265737a;
}



// Function: FUN_000000dc at 000000dc
// Size: 14 bytes

undefined4 FUN_000000dc(void)

{
  return 0x73656c65;
}



// Function: FUN_000000ea at 000000ea
// Size: 14 bytes

undefined4 FUN_000000ea(void)

{
  return 0x6672616d;
}



// Function: FUN_000000f8 at 000000f8
// Size: 14 bytes

undefined4 FUN_000000f8(void)

{
  return 0x73667261;
}



// Function: FUN_00000106 at 00000106
// Size: 14 bytes

undefined4 FUN_00000106(void)

{
  return 0x6c6e626f;
}



// Function: FUN_00000114 at 00000114
// Size: 14 bytes

undefined4 FUN_00000114(void)

{
  return 0x6c6e6c66;
}



// Function: FUN_00000122 at 00000122
// Size: 14 bytes

undefined4 FUN_00000122(void)

{
  return 0x6c6e7274;
}



// Function: FUN_00000130 at 00000130
// Size: 14 bytes

undefined4 FUN_00000130(void)

{
  return 0x6c6e7470;
}



// Function: FUN_0000013e at 0000013e
// Size: 14 bytes

undefined4 FUN_0000013e(void)

{
  return 0x6f76616c;
}



// Function: FUN_0000014c at 0000014c
// Size: 14 bytes

undefined4 FUN_0000014c(void)

{
  return 0x72726374;
}



// Function: FUN_0000015a at 0000015a
// Size: 140 bytes

void FUN_0000015a(int *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  int extraout_A0;
  undefined2 uVar3;
  undefined1 uVar4;
  
  FUN_000008ee(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x58))();
  (**(code **)(*param_2 + 0xd0))((short)param_2,(short)iVar1);
  if (0 < iVar1) {
    for (sVar2 = 1; sVar2 <= iVar1; sVar2 = sVar2 + 1) {
      uVar4 = 0xac;
      (**(code **)(*param_1 + 0x74))(param_1,(int)sVar2);
      uVar3 = (undefined2)((uint)param_2 >> 0x10);
      (**(code **)(*param_2 + 0xc0))();
      (**(code **)(*param_2 + 0x100))(param_2,(short)*(undefined4 *)(extraout_A0 + 2),uVar3,uVar4);
    }
  }
  return;
}



// Function: FUN_000001e6 at 000001e6
// Size: 86 bytes

void FUN_000001e6(int param_1,int *param_2)

{
  FUN_00000bbc(param_1,param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 4));
  (**(code **)(*param_2 + 0xc4))();
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0x16));
  return;
}



// Function: FUN_0000023c at 0000023c
// Size: 14 bytes

undefined4 FUN_0000023c(void)

{
  return 0x636e746c;
}



// Function: FUN_0000024a at 0000024a
// Size: 150 bytes

void FUN_0000024a(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uStack_20;
  undefined1 uVar5;
  
  FUN_00001536(param_1,param_2);
  uVar5 = 0x74;
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0x7c));
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_20 = SUB42(param_2,0);
  uVar3 = 0x84;
  uVar4 = uVar1;
  (**(code **)(*param_2 + 0xc4))();
  uVar2 = uVar1;
  (**(code **)(*param_2 + 0xc4))(uStack_20,uVar4,uVar5);
  (**(code **)(*param_2 + 0xc4))(uStack_20,uVar2,uVar3);
  (**(code **)(*param_2 + 0xe0))(param_2,param_1 + 0x84);
  uVar2 = *(undefined2 *)(param_1 + 0xa0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xc4))(uStack_20,uVar1,uVar2);
  return;
}



// Function: FUN_000002e0 at 000002e0
// Size: 14 bytes

undefined4 FUN_000002e0(void)

{
  return 0x73626172;
}



// Function: FUN_000002ee at 000002ee
// Size: 102 bytes

void FUN_000002ee(int param_1,int *param_2)

{
  FUN_0000024a(param_1,param_2);
  (**(code **)(*param_2 + 0xc0))();
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0xaa));
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0xae));
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0xb2));
  return;
}



// Function: FUN_00000354 at 00000354
// Size: 14 bytes

undefined4 FUN_00000354(void)

{
  return 0x73736272;
}



// Function: FUN_00000362 at 00000362
// Size: 22 bytes

void FUN_00000362(undefined4 param_1,undefined4 param_2)

{
  FUN_000002ee(param_1,param_2);
  return;
}



// Function: FUN_00000378 at 00000378
// Size: 14 bytes

undefined4 FUN_00000378(void)

{
  return 0x646c6f67;
}



// Function: FUN_00000386 at 00000386
// Size: 70 bytes

void FUN_00000386(int param_1,int *param_2)

{
  FUN_00001536(param_1,param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 0x7c));
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 0x80));
  return;
}



// Function: FUN_000003cc at 000003cc
// Size: 14 bytes

undefined4 FUN_000003cc(void)

{
  return 0x636c7573;
}



// Function: FUN_000003da at 000003da
// Size: 70 bytes

void FUN_000003da(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined2 uVar2;
  
  FUN_0000024a(param_1,param_2);
  uVar2 = *(undefined2 *)(param_1 + 0xa4);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_00000420 at 00000420
// Size: 14 bytes

undefined4 FUN_00000420(void)

{
  return 0x69636f6e;
}



// Function: FUN_0000042e at 0000042e
// Size: 70 bytes

void FUN_0000042e(undefined4 param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined1 uVar2;
  
  uVar2 = 0x48;
  FUN_0000024a(param_1,param_2);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xc4))();
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_00000474 at 00000474
// Size: 14 bytes

undefined4 FUN_00000474(void)

{
  return 0x7369636e;
}



// Function: FUN_00000482 at 00000482
// Size: 44 bytes

void FUN_00000482(undefined4 param_1,int *param_2)

{
  FUN_0000024a(param_1,param_2);
  (**(code **)(*param_2 + 0xcc))();
  return;
}



// Function: FUN_000004ae at 000004ae
// Size: 14 bytes

undefined4 FUN_000004ae(void)

{
  return 0x7061746e;
}



// Function: FUN_000004bc at 000004bc
// Size: 70 bytes

void FUN_000004bc(undefined4 param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined1 uVar2;
  
  uVar2 = 0xd6;
  FUN_0000024a(param_1,param_2);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xc4))();
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_00000502 at 00000502
// Size: 14 bytes

undefined4 FUN_00000502(void)

{
  return 0x70696374;
}



// Function: FUN_00000510 at 00000510
// Size: 44 bytes

void FUN_00000510(undefined4 param_1,int *param_2)

{
  FUN_0000024a(param_1,param_2);
  (**(code **)(*param_2 + 0xcc))();
  return;
}



// Function: FUN_0000053c at 0000053c
// Size: 22 bytes

void FUN_0000053c(undefined4 param_1,undefined4 param_2)

{
  FUN_00001420(param_1,param_2);
  return;
}



// Function: FUN_00000552 at 00000552
// Size: 14 bytes

undefined4 FUN_00000552(void)

{
  return 0x73746174;
}



// Function: FUN_00000560 at 00000560
// Size: 118 bytes

void FUN_00000560(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined2 uStack_18;
  undefined1 uVar6;
  
  uVar6 = 0x7a;
  FUN_0000024a(param_1,param_2);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  uVar5 = 0x8a;
  uVar4 = uVar1;
  (**(code **)(*param_2 + 0xc4))();
  uVar2 = uVar1;
  (**(code **)(*param_2 + 0xc4))(uStack_18,uVar4,uVar6);
  uVar4 = *(undefined2 *)(param_1 + 0xac);
  uVar3 = uVar1;
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar2,uVar5);
  uVar2 = *(undefined2 *)(param_1 + 0xa4);
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar3,uVar4);
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_000005d6 at 000005d6
// Size: 14 bytes

undefined4 FUN_000005d6(void)

{
  return 0x65646974;
}



// Function: FUN_000005e4 at 000005e4
// Size: 70 bytes

void FUN_000005e4(int param_1,int *param_2)

{
  FUN_00000560(param_1,param_2);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0xb6));
  return;
}



// Function: FUN_0000062a at 0000062a
// Size: 14 bytes

undefined4 FUN_0000062a(void)

{
  return 0x6e6d6272;
}



// Function: FUN_00000638 at 00000638
// Size: 98 bytes

void FUN_00000638(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_000005e4(param_1,param_2);
  uVar1 = (**(code **)(*param_1 + 0x418))();
  (**(code **)(*param_2 + 0xd0))(param_2,uVar1);
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)((int)param_1 + 0xba));
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)((int)param_1 + 0xbe));
  return;
}



// Function: FUN_0000069a at 0000069a
// Size: 14 bytes

undefined4 FUN_0000069a(void)

{
  return 0x74626f72;
}



// Function: FUN_000006a8 at 000006a8
// Size: 44 bytes

void FUN_000006a8(int param_1,int *param_2)

{
  FUN_00001536(param_1,param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 0x7c));
  return;
}



// Function: FUN_000006d4 at 000006d4
// Size: 14 bytes

undefined4 FUN_000006d4(void)

{
  return 0x6275746e;
}



// Function: FUN_000006e2 at 000006e2
// Size: 70 bytes

void FUN_000006e2(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined2 uVar2;
  
  FUN_0000024a(param_1,param_2);
  uVar2 = *(undefined2 *)(param_1 + 0xb8);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_00000728 at 00000728
// Size: 14 bytes

undefined4 FUN_00000728(void)

{
  return 0x63686b62;
}



// Function: FUN_00000736 at 00000736
// Size: 98 bytes

void FUN_00000736(int *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_1e;
  undefined2 uVar2;
  
  FUN_0000024a(param_1,param_2);
  (**(code **)(*param_1 + 0x428))();
  (**(code **)(*param_2 + 0xc4))();
  uVar2 = *(undefined2 *)(param_1 + 0x2e);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_1e = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(uStack_1e,uVar1,uVar2);
  return;
}



// Function: FUN_00000798 at 00000798
// Size: 14 bytes

undefined4 FUN_00000798(void)

{
  return 0x72616462;
}



// Function: FUN_000007a6 at 000007a6
// Size: 98 bytes

void FUN_000007a6(int *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_1e;
  undefined2 uVar2;
  
  FUN_0000024a(param_1,param_2);
  (**(code **)(*param_1 + 0x428))();
  (**(code **)(*param_2 + 0xc4))();
  uVar2 = *(undefined2 *)(param_1 + 0x2e);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_1e = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(uStack_1e,uVar1,uVar2);
  return;
}



// Function: FUN_00000808 at 00000808
// Size: 86 bytes

void FUN_00000808(int param_1,int *param_2)

{
  FUN_000001e6(param_1,param_2);
  (**(code **)(*param_2 + 0xc4))();
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 0x20));
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 0x24));
  return;
}



// Function: FUN_0000085e at 0000085e
// Size: 144 bytes

void FUN_0000085e(int param_1,int *param_2)

{
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_00000bbc(param_1,param_2);
  local_8 = *(undefined2 *)(param_1 + 4);
  local_6 = *(undefined2 *)(param_1 + 6);
  (**(code **)(*param_2 + 0xd4))(param_2,&local_8);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xbc))(param_2,param_1 + 10,8);
  (**(code **)(*param_2 + 0xbc))(param_2,param_1 + 0x12,6);
  (**(code **)(*param_2 + 0xbc))(param_2,param_1 + 0x18,6);
  return;
}



// Function: FUN_000008ee at 000008ee
// Size: 86 bytes

void FUN_000008ee(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined2 uVar2;
  
  FUN_00000bbc(param_1,param_2);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar1,uVar2);
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



// Function: FUN_00000944 at 00000944
// Size: 238 bytes

undefined4 FUN_00000944(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  short sVar4;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((uint)param_2 >> 0x10);
  uVar8 = (undefined2)((uint)param_1 >> 0x10);
  uVar9 = uVar10;
  FUN_00000bbc((short)param_1,(char)param_2);
  uVar7 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 0x16) >> 0x10);
  uVar6 = SUB42(param_2,0);
  uVar3 = uVar10;
  (**(code **)(*param_2 + 0xe8))(uVar6,(short)*(undefined4 *)((int)param_1 + 0x16));
  (**(code **)(*param_2 + 0xc4))(uVar6,uVar3,uVar7,uVar8,uVar9);
  (**(code **)(*param_2 + 0xd0))(param_2,param_1[3]);
  sVar4 = 0;
  uVar1 = (**(code **)(*param_2 + 0x58))();
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_1 + 0xec))();
  piVar5 = extraout_A0;
  while (piVar5 != (int *)0x0) {
    sVar4 = sVar4 + 1;
    (**(code **)(*param_2 + 0x100))(uVar6,(short)piVar5);
    (**(code **)(*piVar5 + 0x70))();
    piVar5 = extraout_A0_00;
  }
  uVar2 = 0;
  if (sVar4 != 0) {
    uVar3 = (**(code **)(*param_2 + 0x58))();
    uVar9 = (undefined2)((uint)uVar1 >> 0x10);
    (**(code **)(*param_2 + 0x5c))(uVar6,(short)uVar1);
    (**(code **)(*param_2 + 0xcc))(uVar6,uVar10,uVar9);
    uVar2 = (**(code **)(*param_2 + 0x5c))(param_2,uVar3);
  }
  return uVar2;
}



// Function: FUN_00000a32 at 00000a32
// Size: 14 bytes

undefined4 FUN_00000a32(void)

{
  return 0x66776e64;
}



// Function: FUN_00000a40 at 00000a40
// Size: 14 bytes

undefined4 FUN_00000a40(void)

{
  return 0x67726964;
}



// Function: FUN_00000a4e at 00000a4e
// Size: 236 bytes

void FUN_00000a4e(int *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar1 = 0;
  uVar2 = 0;
  uVar10 = SUB42(param_2,0);
  FUN_00001536((short)param_1,uVar10);
  if (0 < *(short *)(param_1 + 0x1f)) {
    uVar1 = (**(code **)(*param_1 + 0x3e4))();
  }
  if (0 < *(short *)((int)param_1 + 0x7e)) {
    uVar2 = (**(code **)(*param_1 + 0x3e0))();
  }
  uVar6 = *(undefined2 *)(param_1 + 0x1f);
  uVar3 = (undefined2)((uint)param_2 >> 0x10);
  uVar8 = uVar3;
  (**(code **)(*param_2 + 0xcc))();
  uVar7 = *(undefined2 *)((int)param_1 + 0x7e);
  uVar9 = uVar3;
  (**(code **)(*param_2 + 0xcc))(uVar10,uVar8,uVar6);
  uVar8 = uVar3;
  (**(code **)(*param_2 + 0xcc))(uVar10,uVar9,uVar7);
  uVar6 = uVar3;
  (**(code **)(*param_2 + 0xcc))(uVar10,uVar8,uVar1);
  uVar1 = *(undefined2 *)(param_1 + 0x23);
  uVar7 = uVar3;
  (**(code **)(*param_2 + 0xcc))(uVar10,uVar6,uVar2);
  uVar2 = *(undefined2 *)((int)param_1 + 0x8e);
  uVar5 = 0xfe;
  uVar6 = uVar3;
  (**(code **)(*param_2 + 0xcc))(uVar10,uVar7,uVar1);
  uVar4 = 0xe;
  uVar1 = uVar3;
  (**(code **)(*param_2 + 0xc4))(uVar10,uVar6,uVar2);
  (**(code **)(*param_2 + 0xc4))(uVar10,uVar1,uVar5);
  (**(code **)(*param_2 + 0xc4))(uVar10,uVar3,uVar4);
  return;
}



// Function: FUN_00000b3a at 00000b3a
// Size: 14 bytes

undefined4 FUN_00000b3a(void)

{
  return 0x74787467;
}



// Function: FUN_00000b48 at 00000b48
// Size: 48 bytes

void FUN_00000b48(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined2 uVar2;
  
  FUN_00000a4e(param_1,param_2);
  uVar2 = *(undefined2 *)(param_1 + 0xa8);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xc4))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_00000b78 at 00000b78
// Size: 22 bytes

void FUN_00000b78(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0xc4))();
  return;
}



// Function: FUN_00000b8e at 00000b8e
// Size: 14 bytes

undefined4 FUN_00000b8e(void)

{
  return 0x6c737467;
}



// Function: FUN_00000b9c at 00000b9c
// Size: 32 bytes

void FUN_00000b9c(int *param_1)

{
  undefined4 extraout_A0;
  
  (**(code **)(*param_1 + 8))();
  func_0x00001c80(extraout_A0);
  return;
}



// Function: FUN_00000bbc at 00000bbc
// Size: 8 bytes

void FUN_00000bbc(void)

{
  return;
}



// Function: FUN_00000bc4 at 00000bc4
// Size: 14 bytes

undefined4 FUN_00000bc4(void)

{
  return 0x706f7070;
}



// Function: FUN_00000bd2 at 00000bd2
// Size: 206 bytes

void FUN_00000bd2(int *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined2 local_18;
  
  FUN_0000024a(param_1,param_2);
  uVar1 = (**(code **)(*param_1 + 0x448))();
  uVar3 = (undefined2)((uint)param_2 >> 0x10);
  local_18 = SUB42(param_2,0);
  uVar4 = uVar3;
  (**(code **)(*param_2 + 0xcc))();
  uVar2 = (**(code **)(*param_1 + 0x440))();
  uVar5 = uVar3;
  (**(code **)(*param_2 + 0xcc))(local_18,uVar4,uVar1);
  uVar4 = *(undefined2 *)((int)param_1 + 0xba);
  uVar6 = 0x34;
  uVar1 = uVar3;
  (**(code **)(*param_2 + 0xcc))(local_18,uVar5,uVar2);
  uVar5 = uVar3;
  (**(code **)(*param_2 + 0xc0))(local_18,uVar1,uVar4);
  uVar4 = *(undefined2 *)((int)param_1 + 0xbe);
  uVar1 = uVar3;
  (**(code **)(*param_2 + 0xcc))(local_18,uVar5,uVar6);
  (**(code **)(*param_2 + 0xc4))(local_18,uVar1,uVar4);
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)((int)param_1 + 0xc2));
  uVar4 = *(undefined2 *)(param_1 + 0x32);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(local_18,uVar3,uVar4);
  return;
}



// Function: FUN_00000ca0 at 00000ca0
// Size: 14 bytes

undefined4 FUN_00000ca0(void)

{
  return 0x7363726c;
}



// Function: FUN_00000cae at 00000cae
// Size: 186 bytes

void FUN_00000cae(int param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_00001536((short)param_1,(char)param_2);
  for (cVar1 = '\0'; uVar3 = SUB42(param_2,0), uVar2 = (undefined2)((uint)param_2 >> 0x10),
      cVar1 < '\x02'; cVar1 = cVar1 + '\x01') {
    (**(code **)(*param_2 + 0xe8))(uVar3,(char)*(undefined4 *)(cVar1 * 4 + param_1 + 0x94));
  }
  (**(code **)(*param_2 + 0xd8))(uVar3,(char)param_1 + '|');
  (**(code **)(*param_2 + 0xd8))(uVar3,(char)param_1 + -100);
  for (cVar1 = '\0'; cVar1 < '\x02'; cVar1 = cVar1 + '\x01') {
    (**(code **)(*param_2 + 0xc4))();
  }
  uVar4 = (undefined2)((uint)(param_1 + 0xa6) >> 0x10);
  (**(code **)(*param_2 + 0xe0))(uVar3,(char)(param_1 + 0xa6));
  (**(code **)(*param_2 + 0xc4))(uVar3,uVar2,uVar4);
  return;
}



// Function: FUN_00000d68 at 00000d68
// Size: 30 bytes

void FUN_00000d68(int *param_1)

{
  (**(code **)(*param_1 + 0xbc))(param_1,&stack0x00000008,1);
  return;
}



// Function: FUN_00000d86 at 00000d86
// Size: 30 bytes

void FUN_00000d86(int *param_1)

{
  (**(code **)(*param_1 + 0xbc))(param_1,&stack0x00000008,1);
  return;
}



// Function: FUN_00000da4 at 00000da4
// Size: 28 bytes

void FUN_00000da4(int *param_1)

{
  (**(code **)(*param_1 + 0xbc))(param_1,&stack0x00000009,1);
  return;
}



// Function: FUN_00000dc0 at 00000dc0
// Size: 2 bytes

void FUN_00000dc0(void)

{
  return;
}



// Function: FUN_00000dc2 at 00000dc2
// Size: 29 bytes

void FUN_00000dc2(int *param_1)

{
  (**(code **)(*param_1 + 0xbc))(param_1,&stack0x00000008,2);
  return;
}



// Function: FUN_00000de0 at 00000de0
// Size: 30 bytes

void FUN_00000de0(int *param_1)

{
  (**(code **)(*param_1 + 0xbc))(param_1,&stack0x00000008,4);
  return;
}



// Function: FUN_00000dfe at 00000dfe
// Size: 18 bytes

void FUN_00000dfe(int *param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  int *extraout_A0;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uStack_e;
  char cStack_9;
  undefined1 auStack_8 [2];
  undefined2 uStack_6;
  
  sVar1 = 2;
  cStack_9 = '\0';
  uVar3 = SUB42(param_1,0);
  if (param_2 == (int *)0x0) {
    sVar1 = 0;
  }
  else {
    if (param_3._0_1_ != '\0') {
      sVar1 = 3;
    }
    (**(code **)(*param_1 + 0x6c))();
    if (extraout_A0 != (int *)0x0) {
      uStack_e = (**(code **)(*extraout_A0 + 0x58))
                           ((short)extraout_A0,(short)param_2,(short)((uint)&cStack_9 >> 0x10));
      if (cStack_9 == '\0') {
        sVar1 = 1;
      }
    }
  }
  (**(code **)(*param_1 + 0xcc))();
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(*param_1 + 0xbc))(uVar3,(char)&uStack_e,4);
    }
    else {
      uVar2 = SUB41(param_2,0);
      if (sVar1 == 2) {
        (**(code **)(*param_1 + 0xf4))(uVar3,uVar2,(short)auStack_8);
      }
      else {
        (**(code **)(*param_1 + 0xf8))(uVar3,uVar2,(short)auStack_8);
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 0x44))(uVar2,uVar3);
      }
      (**(code **)(*param_1 + 0xfc))((char)param_1,uStack_6);
    }
  }
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 226 bytes

void FUN_00000e10(void)

{
  undefined4 uVar1;
  short unaff_D3w;
  int *extraout_A0;
  int *unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  
  *(undefined1 *)(unaff_A6 + -5) = 0;
  if (unaff_A3 == (int *)0x0) {
    unaff_D3w = 0;
  }
  else {
    if (*(char *)(unaff_A6 + 0x10) != '\0') {
      unaff_D3w = 3;
    }
    (**(code **)(*unaff_A2 + 0x6c))();
    if (extraout_A0 != (int *)0x0) {
      uVar1 = (**(code **)(*extraout_A0 + 0x58))();
      *(undefined4 *)(unaff_A6 + -10) = uVar1;
      if (*(char *)(unaff_A6 + -5) == '\0') {
        unaff_D3w = 1;
      }
    }
  }
  (**(code **)(*unaff_A2 + 0xcc))();
  if (unaff_D3w != 0) {
    if (unaff_D3w == 1) {
      (**(code **)(*unaff_A2 + 0xbc))();
    }
    else {
      if (unaff_D3w == 2) {
        (**(code **)(*unaff_A2 + 0xf4))();
      }
      else {
        (**(code **)(*unaff_A2 + 0xf8))();
      }
      if (unaff_A3 != (int *)0x0) {
        (**(code **)(*unaff_A3 + 0x44))();
      }
      (**(code **)(*unaff_A2 + 0xfc))();
    }
  }
  return;
}



// Function: FUN_00000ef2 at 00000ef2
// Size: 266 bytes

void FUN_00000ef2(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  if (param_2 == (int *)0x0) {
    iVar1 = 0x20202020;
  }
  else {
    (**(code **)(*param_2 + 8))();
    iVar1 = func_0x00001c80(extraout_A0);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,iVar1);
  uVar2 = (**(code **)(*param_1 + 0x58))();
  *param_3 = uVar2;
  (**(code **)(*param_1 + 0xd0))(param_1,0x7fffffff);
  if (param_2 == (int *)0x0) {
    func_0x00007350(local_104,0x9610);
  }
  else {
    FUN_00000dc0(param_2,local_104);
    if (iVar1 != 0x20202020) {
      FUN_000014e8(iVar1);
      if (extraout_A0_00 != 0) {
        sVar3 = FUN_00000b3a(extraout_A0_00);
        FUN_00000b78(local_104);
        sVar4 = func_0x00000b40(extraout_A0_01);
        if ((sVar4 != 0) && (sVar3 == sVar4)) {
          func_0x00007350(local_104,0x9610);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0xec))(param_1,local_104);
  return;
}



// Function: FUN_00000ffc at 00000ffc
// Size: 214 bytes

void FUN_00000ffc(int *param_1,int param_2,undefined4 *param_3)

{
  short sVar3;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_108 [256];
  int local_8;
  
  local_108[0] = 0;
  if (param_2 == 0) {
    local_8 = 0;
  }
  else {
    sVar3 = func_0x00000dc8(param_2);
    local_8 = (int)sVar3;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,&local_8,4);
  uVar1 = (**(code **)(*param_1 + 0x58))();
  *param_3 = uVar1;
  (**(code **)(*param_1 + 0xd0))(param_1,0x7fffffff);
  if (param_2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,local_8);
    if (iVar2 == 0) {
      FUN_00000dc0(param_2,local_108);
      (**(code **)(*param_1 + 0x10c))(param_1,local_8,local_8);
      goto LAB_000010b8;
    }
  }
  func_0x00007350(local_108,0x9610);
LAB_000010b8:
  (**(code **)(*param_1 + 0xec))(param_1,local_108);
  return;
}



// Function: FUN_000010d2 at 000010d2
// Size: 88 bytes

void FUN_000010d2(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  (**(code **)(*param_1 + 0xd0))(param_1,iVar1 - param_2);
  (**(code **)(*param_1 + 0x5c))(param_1,iVar1);
  return;
}



// Function: FUN_0000112a at 0000112a
// Size: 30 bytes

void FUN_0000112a(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xbc))(param_1,param_2,4);
  return;
}



// Function: FUN_00001148 at 00001148
// Size: 30 bytes

void FUN_00001148(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xbc))(param_1,param_2,8);
  return;
}



// Function: FUN_00001166 at 00001166
// Size: 30 bytes

void FUN_00001166(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xbc))(param_1,param_2,8);
  return;
}



// Function: FUN_00001184 at 00001184
// Size: 30 bytes

void FUN_00001184(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xbc))(param_1,param_2,0x10);
  return;
}



// Function: FUN_000011a2 at 000011a2
// Size: 30 bytes

void FUN_000011a2(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xbc))(param_1,param_2,6);
  return;
}



// Function: FUN_000011c0 at 000011c0
// Size: 30 bytes

void FUN_000011c0(int *param_1)

{
  (**(code **)(*param_1 + 0xbc))(param_1,&stack0x00000008,4);
  return;
}



// Function: FUN_000011de at 000011de
// Size: 68 bytes

void FUN_000011de(int *param_1)

{
  uint uVar1;
  undefined1 local_5;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  if ((uVar1 & 1) != 0) {
    local_5 = 0;
    (**(code **)(*param_1 + 0xbc))(param_1,&local_5,1);
  }
  return;
}



// Function: FUN_00001222 at 00001222
// Size: 40 bytes

void FUN_00001222(int *param_1,byte *param_2)

{
  (**(code **)(*param_1 + 0xbc))(param_1,param_2,*param_2 + 1);
  return;
}



// Function: FUN_0000124a at 0000124a
// Size: 80 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000124a(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff);
    return;
  }
  func_0x000075d0(param_2);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000012c2 at 000012c2
// Size: 60 bytes

void FUN_000012c2(int param_1,undefined2 param_2)

{
  FUN_00001bf0(*(undefined4 *)(param_1 + 0xe));
  (**(code **)(**(int **)(param_1 + 0xe) + 0x164))
            (*(int **)(param_1 + 0xe),param_2,(short)&stack0x0000000c);
  func_0x00001c00();
  return;
}



// Function: FUN_000012fe at 000012fe
// Size: 92 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000012fe(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
    func_0x00001c00();
  }
  iVar1 = *(int *)((int)param_1 + 0x16) - *(int *)((int)param_1 + 0x12);
  if (iVar1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x110))((short)param_1,(short)param_3 - (short)iVar1);
    (**(code **)(*param_1 + 100))(param_1,iVar1 + *(int *)((int)param_1 + 0x16));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000013ac at 000013ac
// Size: 58 bytes

void FUN_000013ac(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 < 0) {
    func_0x00001c00();
  }
  *(int *)(param_1 + 0xe) = param_3 + *(int *)(param_1 + 0xe);
  if (*(int *)(param_1 + 0x12) < *(int *)(param_1 + 0xe)) {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_1 + 0xe);
  }
  return;
}



// Function: FUN_000013e6 at 000013e6
// Size: 44 bytes

void FUN_000013e6(undefined4 param_1,int *param_2)

{
  FUN_000001e6(param_1,param_2);
  (**(code **)(*param_2 + 0xc4))();
  return;
}



// Function: FUN_00001412 at 00001412
// Size: 14 bytes

undefined4 FUN_00001412(void)

{
  return 0x74657677;
}



// Function: FUN_00001420 at 00001420
// Size: 198 bytes

void FUN_00001420(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uStack_18;
  undefined1 uVar7;
  
  uVar7 = 0x3a;
  FUN_00001536(param_1,param_2);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_18 = SUB42(param_2,0);
  uVar6 = 0x4a;
  uVar4 = uVar1;
  (**(code **)(*param_2 + 0xc4))();
  uVar5 = 0x5a;
  uVar2 = uVar1;
  (**(code **)(*param_2 + 0xc4))(uStack_18,uVar4,uVar7);
  uVar4 = uVar1;
  (**(code **)(*param_2 + 0xc4))(uStack_18,uVar2,uVar6);
  (**(code **)(*param_2 + 0xc4))(uStack_18,uVar4,uVar5);
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0x98));
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xe0))(param_2,param_1 + 0x88);
  uVar4 = *(undefined2 *)(param_1 + 0xba);
  uVar3 = uVar1;
  (**(code **)(*param_2 + 0xcc))();
  uVar2 = *(undefined2 *)(param_1 + 0xb6);
  (**(code **)(*param_2 + 0xcc))(uStack_18,uVar3,uVar4);
  (**(code **)(*param_2 + 0xc4))(uStack_18,uVar1,uVar2);
  return;
}



// Function: FUN_000014e6 at 000014e6
// Size: 1 bytes

undefined4 FUN_000014e6(void)

{
  return 0x76696577;
}



// Function: FUN_000014e8 at 000014e8
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001567) */

byte FUN_000014e8(void)

{
  byte in_D0b;
  
  return in_D0b | 0x3c;
}



// Function: FUN_000014f4 at 000014f4
// Size: 66 bytes

void FUN_000014f4(int *param_1,undefined4 param_2)

{
  FUN_00000944(param_1,param_2);
  (**(code **)(*param_1 + 0x134))(param_1,param_2);
  (**(code **)(*param_1 + 0x138))(param_1,param_2);
  return;
}



// Function: FUN_00001536 at 00001536
// Size: 354 bytes

void FUN_00001536(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uStack_40;
  undefined1 local_6;
  undefined1 local_5;
  
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xd8))(param_2,(int)param_1 + 0x2a);
  (**(code **)(*param_2 + 0xd8))(param_2,(int)param_1 + 0x32);
  local_5 = *(undefined1 *)((int)param_1 + 0x43);
  local_6 = *(undefined1 *)((int)param_1 + 0x42);
  (**(code **)(*param_2 + 0xbc))(param_2,&local_6,1);
  uVar6 = 0xaa;
  (**(code **)(*param_2 + 0xbc))(param_2,&local_5,1);
  uVar2 = (undefined2)((uint)param_2 >> 0x10);
  uStack_40 = SUB42(param_2,0);
  uVar8 = 0xba;
  uVar5 = uVar2;
  (**(code **)(*param_2 + 0xc4))();
  uVar7 = 0xca;
  uVar3 = uVar2;
  (**(code **)(*param_2 + 0xc4))(uStack_40,uVar5,uVar6);
  uVar6 = 0xda;
  uVar5 = uVar2;
  (**(code **)(*param_2 + 0xc4))(uStack_40,uVar3,uVar8);
  uVar4 = uVar2;
  (**(code **)(*param_2 + 0xc4))(uStack_40,uVar5,uVar7);
  uVar5 = *(undefined2 *)((int)param_1 + 0x4a);
  uVar7 = 0xfa;
  uVar3 = uVar2;
  (**(code **)(*param_2 + 0xcc))(uStack_40,uVar4,uVar6);
  uVar6 = 10;
  uVar4 = uVar2;
  (**(code **)(*param_2 + 0xc4))(uStack_40,uVar3,uVar5);
  uVar3 = uVar2;
  (**(code **)(*param_2 + 0xc4))(uStack_40,uVar4,uVar7);
  uVar5 = *(undefined2 *)(param_1 + 0x13);
  uVar4 = uVar2;
  (**(code **)(*param_2 + 0xcc))(uStack_40,uVar3,uVar6);
  uVar3 = *(undefined2 *)((int)param_1 + 0x4e);
  (**(code **)(*param_2 + 0xcc))(uStack_40,uVar4,uVar5);
  (**(code **)(*param_2 + 0x100))(param_2,(short)*(undefined4 *)((int)param_1 + 0x6e),uVar2,uVar3);
  (**(code **)(*param_2 + 0x100))(param_2,(short)*(undefined4 *)((int)param_1 + 0x72));
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)((int)param_1 + 0x76));
  uVar1 = (**(code **)(*param_1 + 0x3c))();
  (**(code **)(*param_2 + 0xe8))(param_2,uVar1);
  return;
}



// Function: FUN_00001698 at 00001698
// Size: 148 bytes

void FUN_00001698(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int local_68 [25];
  
  (**(code **)(*param_1 + 0x184))();
  (**(code **)(*param_2 + 0xcc))();
  func_0x00004b40(local_68,(short)param_1);
  func_0x00004b48(local_68);
  uVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*param_2 + 0x100))((short)param_2,(short)uVar2);
    func_0x00004b50(local_68);
    uVar2 = extraout_A0_00;
  }
  func_0x00002798((short)local_68);
  return;
}



// Function: FUN_0000172c at 0000172c
// Size: 14 bytes

undefined4 FUN_0000172c(void)

{
  return 0x696e6340;
}



// Function: FUN_0000173a at 0000173a
// Size: 82 bytes

void FUN_0000173a(int param_1,int *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00001536(param_1,param_2);
  (**(code **)(*param_2 + 0xcc))();
  local_c = *(undefined4 *)(param_1 + 0x7e);
  local_8 = *(undefined4 *)(param_1 + 0x82);
  (**(code **)(*param_2 + 0xd8))(param_2,&local_c);
  return;
}



// Function: FUN_0000178c at 0000178c
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000178c(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 extraout_A0w;
  undefined1 auStack_104 [256];
  
  (**(code **)(*param_2 + 0xcc))();
  if (*(short *)(param_1 + 0x7c) != -1) {
    puVar2 = auStack_104;
    puVar3 = (undefined1 *)(param_1 + 0x86);
    for (iVar1 = *(byte *)(param_1 + 0x86) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x22) + 0x98))();
    (**(code **)(*_DAT_000257ee + 0x78))(_DAT_000257ee,extraout_A0w);
  }
  return;
}



// Function: FUN_0000180e at 0000180e
// Size: 164 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000180e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined4 uVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x7c))(param_1,param_2,0);
  uVar2 = extraout_A0;
  FUN_00001bf0((short)extraout_A0);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    func_0x00007310(param_4._0_2_);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00001d08(uVar2);
  func_0x00001c10();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000018dc at 000018dc
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000018dc(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    func_0x00001e98(0x400);
    uVar5 = 0xffff;
    uVar4 = (undefined2)((uint)param_1 >> 0x10);
    uVar6 = extraout_A0;
    (**(code **)(*param_1 + 0x80))();
    uVar3 = 0x300;
    uVar2 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    (**(code **)(*extraout_A0_00 + 0xcc))((short)extraout_A0_00,uVar4,uVar5,uVar6);
    (**(code **)(*extraout_A0_00 + 0x100))(extraout_A0_00,param_2,uVar2,uVar3);
    (**(code **)(*extraout_A0_00 + 0x4c))();
    _DAT_00025f52 = local_10;
  }
  else {
    FUN_00000e10(0);
    func_0x00001d08(0);
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_000019c4 at 000019c4
// Size: 14 bytes

undefined4 FUN_000019c4(void)

{
  return 0x77696e64;
}



// Function: FUN_000019d2 at 000019d2
// Size: 380 bytes

void FUN_000019d2(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uStack_38;
  undefined2 uVar2;
  ushort local_6;
  
  FUN_00001536(param_1,param_2);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_1 + 0x98));
  local_6 = (ushort)*(byte *)(param_1 + 0xb5) * 2 |
            (ushort)*(byte *)(param_1 + 0xb3) << 2 |
            (ushort)*(byte *)(param_1 + 0xb2) << 3 |
            (ushort)*(byte *)(param_1 + 0xa9) << 4 |
            (ushort)*(byte *)(param_1 + 0xaa) << 5 |
            (ushort)*(byte *)(param_1 + 0xac) << 6 |
            (ushort)*(byte *)(param_1 + 0xab) << 7 |
            (ushort)*(byte *)(param_1 + 0xa8) << 8 |
            (ushort)*(byte *)(param_1 + 0xa6) << 9 |
            (ushort)*(byte *)(param_1 + 0xa5) << 10 |
            (ushort)*(byte *)(param_1 + 0xa4) << 0xb |
            (ushort)*(byte *)(param_1 + 0xa3) << 0xc |
            (ushort)*(byte *)(param_1 + 0xa7) << 0xd |
            (ushort)*(byte *)(param_1 + 0xa1) << 0xe | (ushort)*(byte *)(param_1 + 0xa2) << 0xf;
  (**(code **)(*param_2 + 0xbc))(param_2,&local_6,2);
  uVar2 = *(undefined2 *)(param_1 + 0xbe);
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  uStack_38 = SUB42(param_2,0);
  (**(code **)(*param_2 + 0xcc))();
  (**(code **)(*param_2 + 0xcc))(uStack_38,uVar1,uVar2);
  return;
}



// Function: FUN_00001b4e at 00001b4e
// Size: 50 bytes

void FUN_00001b4e(undefined4 param_1)

{
  FUN_00000dc2(param_1);
  return;
}



// Function: FUN_00001b80 at 00001b80
// Size: 64 bytes

void FUN_00001b80(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 local_8;
  
  local_8._3_1_ = (undefined1)param_2;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = (undefined1)((uint)param_2 >> 0x18);
  local_8._2_1_ = (undefined1)((uint)param_2 >> 8);
  uVar1 = local_8._2_1_;
  local_8._1_1_ = (undefined1)((uint)param_2 >> 0x10);
  local_8._2_2_ = CONCAT11(local_8._1_1_,local_8._0_1_);
  local_8 = CONCAT13(uVar2,CONCAT12(uVar1,local_8._2_2_));
  FUN_00000de0(param_1,local_8);
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001bf0(void)

{
  bool in_VF;
  
  if (in_VF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



