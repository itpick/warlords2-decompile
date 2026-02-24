// Warlords II - Decompiled 68k Code
// Segment: CODE_001
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000286 at 00000286
// Size: 116 bytes

void FUN_00000286(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 local_8;
  
  iVar3 = 0;
  pbVar6 = (byte *)(param_1 + 1);
  for (iVar4 = *param_1; 0 < iVar4; iVar4 = iVar4 + -1) {
    bVar1 = *pbVar6;
    if ((bVar1 & 0x80) == 0) {
      pbVar5 = pbVar6 + 2;
      sVar2 = CONCAT11(bVar1,pbVar6[1]);
      if ((bVar1 & 0x40) == 0) {
        bVar1 = *pbVar5;
        pbVar5 = pbVar6 + 4;
        local_8 = CONCAT31(CONCAT21(sVar2,bVar1),pbVar6[3]);
        iVar3 = (local_8 << 2) >> 1;
      }
      else {
        iVar3 = ((short)(sVar2 << 2) >> 1) + iVar3;
      }
    }
    else {
      iVar3 = (short)(char)(bVar1 * '\x02') + iVar3;
      pbVar5 = pbVar6 + 1;
    }
    *(int *)(param_2 + iVar3) = param_3 + *(int *)(param_2 + iVar3);
    pbVar6 = pbVar5;
  }
  return;
}



// Function: FUN_000002fa at 000002fa
// Size: 44 bytes

void FUN_000002fa(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00000286();
  FUN_00000286(extraout_A0);
  FUN_00000286(extraout_A0_00);
  return;
}



// Function: FUN_00000326 at 00000326
// Size: 50 bytes

void FUN_00000326(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00000286();
  FUN_00000286(extraout_A0);
  FUN_00000286(extraout_A0_00);
  return;
}



// Function: FUN_00000360 at 00000360
// Size: 34 bytes

void FUN_00000360(void)

{
  return;
}



// Function: FUN_0000059c at 0000059c
// Size: 36 bytes

undefined4 FUN_0000059c(void)

{
  undefined4 *puVar1;
  int unaff_A5;
  
  while( true ) {
    puVar1 = *(undefined4 **)(unaff_A5 + -0x7ea);
    if (puVar1 == (undefined4 *)0x0) break;
    *(undefined4 *)(unaff_A5 + -0x7ea) = *puVar1;
    (*(code *)puVar1[1])(puVar1[2]);
  }
  return 0;
}



// Function: FUN_000005c0 at 000005c0
// Size: 10 bytes

int FUN_000005c0(void)

{
  int in_D0;
  int in_D1;
  
  return in_D1 * in_D0;
}



// Function: FUN_000005f2 at 000005f2
// Size: 10 bytes

uint FUN_000005f2(void)

{
  uint in_D0;
  uint in_D1;
  
  return in_D0 / in_D1;
}



// Function: FUN_00000672 at 00000672
// Size: 10 bytes

uint FUN_00000672(void)

{
  uint in_D0;
  uint in_D1;
  
  return in_D0 % in_D1;
}



// Function: FUN_0000068a at 0000068a
// Size: 72 bytes

uint FUN_0000068a(void)

{
  ushort uVar1;
  int in_D0;
  uint uVar2;
  uint in_D1;
  short sVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = (ushort)((uint)in_D0 >> 0x10);
  if (in_D1 >> 0x10 != 0) {
    uVar2 = (uint)uVar1;
    uVar4 = in_D0 << 0x10;
    sVar3 = 0xf;
    do {
      bVar5 = CARRY4(uVar4,uVar4);
      uVar4 = uVar4 * 2;
      uVar2 = uVar2 * 2 + (uint)bVar5;
      if (in_D1 <= uVar2) {
        uVar2 = uVar2 - in_D1;
      }
      sVar3 = sVar3 + -1;
    } while (sVar3 != -1);
    return uVar2;
  }
  uVar2 = (uint)uVar1;
  if (uVar1 != 0) {
    uVar2 = uVar2 % (in_D1 & 0xffff) << 0x10;
  }
  return CONCAT22((short)(uVar2 >> 0x10),(short)in_D0) % (in_D1 & 0xffff);
}



// Function: FUN_00000a8e at 00000a8e
// Size: 58 bytes

void FUN_00000a8e(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[2] + 0x94))((int *)param_1[2],param_1[1]);
  }
  return;
}



