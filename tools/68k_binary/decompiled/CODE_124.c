// Warlords II - Decompiled 68k Code
// Segment: CODE_124
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000022 at 00000022
// Size: 34 bytes

void FUN_00000022(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2._0_2_;
  param_1[1] = param_2._2_2_;
  param_1[2] = param_3._0_2_;
  param_1[3] = param_3._2_2_;
  return;
}



// Function: FUN_00000044 at 00000044
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(undefined4 param_1,undefined4 param_2)

{
  DAT_000284d4 = param_1._0_1_;
  _DAT_000284d6 = param_1._2_2_;
  _DAT_000284d8 = param_2._0_2_;
  _DAT_000284da = param_2._2_2_;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000000f2 at 000000f2
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000f2(undefined4 param_1)

{
  undefined1 auStack_104 [256];
  
  func_0x00007320(auStack_104,param_1);
  func_0x00007310(auStack_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000011a at 0000011a
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000011a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000022c at 0000022c
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000022c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000734 at 00000734
// Size: 60 bytes

void FUN_00000734(undefined4 param_1,undefined4 param_2)

{
  undefined2 extraout_A0w;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  func_0x00007640(local_104,(int)param_2._0_2_);
  func_0x000072f8((short)local_104);
  FUN_0000011a(param_1,extraout_A0w);
  return;
}



// Function: FUN_00000770 at 00000770
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000770(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007b0 at 000007b0
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007dc at 000007dc
// Size: 184 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_000007dc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((DAT_000283f8 != '\0') && (param_3 != 0)) {
    if (param_1._0_2_ == param_2._0_2_) {
      if (param_1._2_2_ <= param_2._2_2_) {
        iVar1 = func_0x00005768(param_3,CONCAT22(param_1._2_2_,param_1._0_2_));
        return iVar1;
      }
    }
    else if ((param_1._2_2_ == param_2._2_2_) && (param_1._0_2_ <= param_2._0_2_)) {
      iVar1 = func_0x00005768(param_3,CONCAT22(param_1._2_2_,param_1._0_2_));
      return iVar1;
    }
    return param_3;
  }
  if (param_3 != 0) {
    if (param_1._0_2_ == param_2._0_2_) {
      if (param_1._2_2_ <= param_2._2_2_) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((param_1._2_2_ == param_2._2_2_) && (param_1._0_2_ <= param_2._0_2_)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar1 = func_0x00005768(param_4._0_2_ * 6 + 0x29052);
  return iVar1;
}



// Function: FUN_000008be at 000008be
// Size: 20 bytes

void FUN_000008be(void)

{
  func_0x000049f8();
  func_0x00002350();
  return;
}



// Function: FUN_000008d2 at 000008d2
// Size: 50 bytes

undefined4 FUN_000008d2(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (param_1._0_2_ == -1) {
    DAT_000283f8 = 1;
    return 0;
  }
  uVar1 = func_0x00005768(param_1._0_2_ * 6 + 0x29052);
  return uVar1;
}



// Function: FUN_00000910 at 00000910
// Size: 32 bytes

short FUN_00000910(undefined4 param_1)

{
  return param_1._0_2_ * 0x100 + (param_1._0_2_ >> 8);
}



// Function: FUN_00000930 at 00000930
// Size: 58 bytes

int FUN_00000930(uint param_1)

{
  return param_1 * 0x1000000 + (param_1 >> 8 & 0xff) * 0x10000 + (param_1 >> 0x10 & 0xff) * 0x100 +
         (param_1 >> 0x18);
}



// Function: FUN_0000096a at 0000096a
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000096a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000996 at 00000996
// Size: 30 bytes

void FUN_00000996(undefined2 param_1,undefined4 param_2)

{
  FUN_0000011a(param_1,param_2);
  return;
}



// Function: FUN_000009b4 at 000009b4
// Size: 30 bytes

void FUN_000009b4(undefined2 param_1,undefined4 param_2)

{
  FUN_0000011a(param_1,param_2);
  return;
}



// Function: FUN_000009d2 at 000009d2
// Size: 30 bytes

void FUN_000009d2(undefined2 param_1,undefined4 param_2)

{
  FUN_0000011a(param_1,param_2);
  return;
}



// Function: FUN_000009f0 at 000009f0
// Size: 152 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000009f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x70b) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x70b) = 1;
    _DAT_00027948 = 0;
  }
  if (param_1._2_2_ != 0) {
    if (0 < param_1._0_2_) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)param_2._0_2_ < (int)param_2._0_2_ + (int)param_1._0_2_) {
      param_2._0_2_ = param_2._0_2_ + param_1._0_2_;
    }
    else {
      iVar1 = (int)param_1._0_2_ * (int)param_1._2_2_ + (int)param_2._0_2_;
      if (iVar1 < param_2._0_2_) {
        param_2._0_2_ = (short)iVar1;
      }
    }
  }
  return param_2._0_2_;
}



// Function: FUN_00000b6c at 00000b6c
// Size: 24 bytes

void FUN_00000b6c(void)

{
  FUN_00000b9e();
  return;
}



// Function: FUN_00000b84 at 00000b84
// Size: 26 bytes

void FUN_00000b84(void)

{
  FUN_00000b9e();
  return;
}



// Function: FUN_00000b9e at 00000b9e
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b9e(void)

{
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x70c) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x70c) = 1;
    _DAT_00027bca = 0;
  }
  (&DAT_0002794a)[_DAT_00027bca * 0x50] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



