/*
 * wave2_macapp3.c - Reconstructed functions (wave2_macapp3)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 689 functions in address range wave2_macapp3
 */

#include "warlords2.h"

/* Helper macros for Ghidra patterns */
#ifndef CONCAT22
#define CONCAT22(hi, lo) ((int)(((unsigned int)(unsigned short)(hi) << 16) | (unsigned short)(lo)))
#endif
#ifndef CONCAT44
#define CONCAT44(hi, lo) ((long long)(((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo)))
#endif
#ifndef ZEXT48
#define ZEXT48(x) ((unsigned long long)(unsigned int)(x))
#endif
#ifndef SUB41
#define SUB41(x, n) ((char)((x) >> ((n) * 8)))
#endif
#ifndef SUB42
#define SUB42(x, n) ((short)((x) >> ((n) * 8)))
#endif

/* Forward declarations to avoid conflicting types */
void FUN_100e02c4(int *param_1,long long param_2,char param_3,char param_4);
void FUN_100e053c(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_100e0c0c(int param_1);
void FUN_100e0c54(void);
void FUN_100e0d4c(void);
void FUN_100e0d80(int param_1);
void FUN_100e0dc8(void);
void FUN_100e0f3c(void);
void FUN_100e0f78(int *param_1,int *param_2);
long long FUN_100e1088(long long param_1,char param_2);
long long FUN_100e109c(long long param_1,char param_2);
int * FUN_100e10b0(int *param_1,int *param_2,int *param_3);
int * FUN_100e10f8(int *param_1,int *param_2,int *param_3);
int * FUN_100e1140(int *param_1,int *param_2);
void FUN_100e1180(int *param_1,int *param_2);
void FUN_100e11a4(int *param_1,int *param_2);
long long FUN_100e11c8(int *param_1,int *param_2);
long long FUN_100e11fc(int *param_1,int *param_2);
long long FUN_100e1230(int *param_1,int *param_2);
void FUN_100e1264(int *param_1,int *param_2);
void FUN_100e12b8(int *param_1,short *param_2);
int * FUN_100e1448(int *param_1,short *param_2);
int * FUN_100e14e4(int *param_1,short *param_2);
long long FUN_100e1580(long long param_1,char param_2);
long long FUN_100e1594(long long param_1,char param_2);
void FUN_100e15a8(int *param_1,int *param_2,int *param_3);
void FUN_100e15ec(int *param_1,int *param_2,int *param_3);
void FUN_100e1630(int *param_1,int *param_2);
void FUN_100e16b8(int *param_1,int *param_2);
long long FUN_100e16fc(int *param_1,int *param_2);
long long FUN_100e1750(int *param_1,int *param_2);
long long FUN_100e17a4(int *param_1);
void FUN_100e17d8(int *param_1,int *param_2,int *param_3);
void FUN_100e18f4(int *param_1,int *param_2,int *param_3);
void FUN_100e19d4(int *param_1);
long long FUN_100e1a08(int *param_1);
long long FUN_100e1a3c(unsigned int *param_1,char param_2);
int * FUN_100e1a64(int *param_1,int *param_2);
long long FUN_100e1aac(int *param_1,int *param_2);
long long FUN_100e1af8(int *param_1,int *param_2);
void FUN_100e1b4c(short *param_1,int *param_2);
int * FUN_100e1b78(int *param_1);
void FUN_100e1be0(void);
void FUN_100e1c08(void);
int FUN_100e1c48(int param_1,char param_2,int *param_3,int *param_4,
                int *param_5,char param_6);
void FUN_100e1db0(void);
int * FUN_100e2124(int *param_1);
void FUN_100e21b8(void);
void FUN_100e21e0(int *param_1);
void FUN_100e2298(int param_1);
void FUN_100e22dc(int *param_1,short param_2,short param_3);
long long FUN_100e24f0(int param_1,short param_2,short *param_3,short *param_4,int *param_5);
short FUN_100e2758(int param_1,long long param_2);
short FUN_100e2874(int *param_1,short param_2);
void FUN_100e290c(int *param_1,short param_2,short param_3,short param_4);
long long FUN_100e2b98(int *param_1,short param_2,short param_3);
void FUN_100e2d2c(void);
int * FUN_100e2d54(int *param_1);
void FUN_100e2f58(int param_1);
void FUN_100e2fe8(int *param_1,int *param_2);
void FUN_100e3274(int *param_1,int *param_2);
void FUN_100e342c(int *param_1,short param_2,long long param_3);
void FUN_100e34f0(int *param_1,short param_2,long long param_3);
void FUN_100e35ac(int param_1,long long param_2);
long long FUN_100e363c(int param_1,int param_2);
void FUN_100e3688(int param_1,int param_2,int *param_3);
void FUN_100e381c(int *param_1,short param_2,short param_3,int *param_4);
void FUN_100e3960(int *param_1,long long param_2,char param_3,short *param_4,
                 short param_5,short *param_6,short param_7,short param_8);
void FUN_100e3c08(int *param_1,int *param_2,unsigned int *param_3);
void FUN_100e41e4(int *param_1,char param_2,char param_3);
void FUN_100e424c(int *param_1,long long param_2,char param_3,char param_4);
void FUN_100e43a4(int *param_1,int param_2,short param_3,short param_4,char param_5);
int * FUN_100e448c(int *param_1,int param_2);
void FUN_100e4508(int *param_1,int param_2,short param_3,short param_4,char param_5);
int * FUN_100e45f0(int *param_1,int param_2);
int * FUN_100e466c(int *param_1,long long param_2);
void FUN_100e4700(int *param_1,int *param_2);
unsigned long long FUN_100e4754(int param_1);
unsigned long long FUN_100e4770(int param_1);
long long FUN_100e478c(long long param_1);
void FUN_100e47ec(int *param_1,int *param_2);
void FUN_100e4840(int *param_1,int param_2);
int * FUN_100e4930(int *param_1);
void FUN_100e49f8(int *param_1,int *param_2,long long param_3,char param_4,char param_5);
void FUN_100e4b48(int *param_1,long long param_2,int *param_3);
void FUN_100e4c54(int *param_1,int *param_2);
void FUN_100e50a4(int *param_1,short param_2,short param_3,int *param_4);
void FUN_100e538c(int *param_1,short param_2,short param_3);
void FUN_100e54e8(int *param_1,short param_2,short param_3);
void FUN_100e5644(int *param_1,short param_2);
void FUN_100e5688(int *param_1,short param_2);
void FUN_100e56cc(int *param_1,short param_2);
void FUN_100e5720(int *param_1,short param_2);
void FUN_100e5774(long long param_1,int *param_2);
long long FUN_100e590c(int param_1,short param_2);
long long FUN_100e596c(int param_1,short param_2);
void FUN_100e59cc(int *param_1,int param_2);
void FUN_100e5a38(int *param_1);
int FUN_100e5ac4(int *param_1,int *param_2,short *param_3);
void FUN_100e5c60(int *param_1,short param_2,short param_3,short param_4);
void FUN_100e5dac(int *param_1,short param_2,short param_3,short param_4);
void FUN_100e5ef8(int *param_1,short param_2,short param_3);
void FUN_100e5f54(int *param_1,short param_2,short param_3);
void FUN_100e5fb0(int *param_1,short param_2,short param_3);
void FUN_100e6000(int *param_1,short param_2,short param_3);
void FUN_100e6050(int param_1,int param_2);
int FUN_100e60a0(int param_1);
void FUN_100e60d4(long long param_1,int *param_2);
void FUN_100e6274(int param_1,short param_2,short param_3,int *param_4);
void FUN_100e63b8(int *param_1,char param_2);
void FUN_100e65bc(int *param_1,short param_2,short param_3,short param_4);
void FUN_100e67d4(int *param_1,short param_2,short param_3,short param_4);
void FUN_100e69ec(int *param_1,int param_2,char param_3,char param_4,
                 char param_5);
void FUN_100e6a58(int *param_1,char param_2);
void FUN_100e6ab8(int *param_1,long long param_2,char param_3,char param_4,char param_5);
void FUN_100e6cb0(int *param_1,short *param_2,char param_3,char param_4,
                 char param_5);
void FUN_100e6d74(int *param_1,int param_2,int *param_3);
void FUN_100e6e30(int *param_1,int param_2,int *param_3);
void FUN_100e6eec(void);
void FUN_100e6f20(int *param_1,int *param_2);
void FUN_100e7110(int param_1,int *param_2);
void FUN_100e7184(int *param_1,short param_2,long long param_3);
int FUN_100e7244(int *param_1);
void FUN_100e72a4(int *param_1);
void FUN_100e7360(int param_1);
void FUN_100e73a0(long long param_1,long long param_2,long long param_3);
void FUN_100e73ec(void);
long long FUN_100e7420(int *param_1,int param_2);
void FUN_100e74c8(int *param_1,short param_2,short param_3);
void FUN_100e7508(int *param_1,short param_2);
void FUN_100e754c(int *param_1,short param_2);
void FUN_100e75a0(int *param_1,unsigned char *param_2);
short FUN_100e76f4(int *param_1);
void FUN_100e7740(int *param_1,short param_2);
void FUN_100e777c(int *param_1);
void FUN_100e77b8(long long param_1,long long param_2,long long param_3);
void FUN_100e7808(int *param_1,int param_2);
void FUN_100e7848(int *param_1,short param_2,short param_3);
void FUN_100e7898(int *param_1,short param_2);
void FUN_100e78dc(int *param_1,short param_2);
void FUN_100e792c(int *param_1,short param_2);
void FUN_100e797c(int *param_1,short param_2);
short FUN_100e79cc(int *param_1);
void FUN_100e7a18(int param_1,long long param_2,char param_3);
void FUN_100e7abc(int *param_1,int param_2,char param_3,char param_4,
                 char param_5);
void FUN_100e7b08(long long param_1,short param_2,char param_3,char param_4,
                 char param_5);
void FUN_100e7b78(int *param_1,short param_2,short param_3,short param_4);
void FUN_100e7bbc(int *param_1,short param_2);
void FUN_100e7c0c(void);
void FUN_100e7c34(int param_1);
void FUN_100e7c90(int param_1,int *param_2);
void FUN_100e7d58(int param_1,int *param_2);
void FUN_100e7ed8(int param_1);
int * FUN_100e7f84(int *param_1,char param_2,long long param_3,long long param_4,
                  int *param_5,char param_6);
void FUN_100e8108(int param_1);
int * FUN_100e81c4(int *param_1);
void FUN_100e822c(void);
void FUN_100e8254(int param_1,short *param_2);
int * FUN_100e83cc(int *param_1,char param_2,long long param_3,long long param_4,
                  int *param_5,char param_6);
int * FUN_100e85b8(int *param_1);
void FUN_100e8620(void);
void FUN_100e8648(int param_1);
void FUN_100e8684(int param_1,int param_2);
int * FUN_100e86bc(int *param_1);
void FUN_100e8724(void);
void FUN_100e874c(int param_1);
void FUN_100e8788(int param_1,short *param_2);
short FUN_100e87b8(int *param_1);
short FUN_100e87fc(int *param_1);
short FUN_100e8900(int *param_1);
short FUN_100e8944(int *param_1);
void FUN_100e8a48(int param_1);
void FUN_100e8a90(int param_1);
void FUN_100e8b88(void);
void FUN_100e8db4(void);
void FUN_100e8ddc(int *param_1,int *param_2);
void FUN_100e8f24(int param_1);
void FUN_100e8f6c(int param_1,int *param_2);
void FUN_100e9010(void);
int * FUN_100e904c(int *param_1);
void FUN_100e9124(long long param_1);
void FUN_100e9150(void);
long long FUN_100e9174(void);
long long FUN_100e91b4(int *param_1);
long long FUN_100e9200(long long param_1,long long param_2);
void FUN_100e9260(long long param_1,int param_2);
void FUN_100e92d4(long long param_1,int *param_2);
void FUN_100e931c(long long param_1,long long param_2,int *param_3);
void FUN_100e9368(void);
void FUN_100e93b8(int *param_1,int *param_2,int *param_3);
int FUN_100e93f8(int *param_1,int param_2,int param_3);
int FUN_100e947c(int *param_1,int param_2);
void FUN_100e9508(int *param_1,int param_2);
void FUN_100e9548(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5);
long long FUN_100e960c(int *param_1,long long param_2,long long param_3,long long param_4,
                     long long param_5);
void FUN_100e97a4(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5);
void FUN_100e98ac(int *param_1);
void FUN_100e991c(int *param_1,long long param_2,long long param_3);
void FUN_100e9994(int *param_1,long long param_2,long long param_3);
int FUN_100e99d0(int *param_1,long long param_2);
void FUN_100e9a8c(int *param_1,long long param_2);
void FUN_100e9b38(int *param_1,int param_2);
long long FUN_100e9bac(int *param_1);
void FUN_100e9bfc(int *param_1);
void FUN_100e9cb8(int *param_1);
int FUN_100e9d10(int *param_1,int param_2);
long long FUN_100e9e20(int *param_1);
void FUN_100e9e88(void);
void FUN_100e9eb0(int *param_1,long long param_2,int param_3);
long long FUN_100e9f6c(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100ea07c(int *param_1,long long param_2);
void FUN_100ea0c4(int *param_1,long long param_2,int param_3);
void FUN_100ea17c(int *param_1,long long param_2);
void FUN_100ea1bc(int *param_1,long long param_2);
void FUN_100ea200(int *param_1);
long long FUN_100ea238(int *param_1);
void FUN_100ea2b4(int *param_1);
long long FUN_100ea2ec(int *param_1);
void FUN_100ea368(long long param_1,int param_2);
void FUN_100ea3d8(long long param_1,int *param_2);
void FUN_100ea490(void);
void FUN_100ea4e4(int *param_1);
void FUN_100ea5a0(int *param_1);
int FUN_100ea5f8(int *param_1,long long param_2);
void FUN_100ea6b4(int *param_1,long long param_2);
void FUN_100ea760(int *param_1,int param_2);
int FUN_100ea7d4(int *param_1,int param_2,int param_3);
long long FUN_100ea860(int *param_1);
int FUN_100ea8b0(int *param_1,int param_2);
int FUN_100ea9c0(int *param_1,int param_2);
void FUN_100eaa4c(int *param_1,int param_2);
void FUN_100eaab4(int *param_1,int *param_2,int *param_3);
long long FUN_100eaaf4(int *param_1);
void FUN_100eabb4(void);
void FUN_100eac00(int *param_1,long long param_2);
void FUN_100eac48(long long param_1,int param_2);
void FUN_100eacb8(long long param_1,int *param_2);
void FUN_100ead70(void);
int FUN_100eadc4(int *param_1,long long param_2);
void FUN_100eae80(int *param_1,long long param_2);
void FUN_100eaf2c(int *param_1);
long long FUN_100eaf94(int *param_1);
int FUN_100eafe4(int *param_1,int param_2);
long long FUN_100eb0e4(int *param_1);
void FUN_100eb15c(int *param_1,int *param_2,int *param_3);
void FUN_100eb19c(int *param_1,int param_2,int param_3);
int FUN_100eb20c(int *param_1,int param_2);
void FUN_100eb284(int *param_1,int param_2);
int FUN_100eb2c4(int *param_1,long long param_2,long long param_3);
int * FUN_100eb328(int *param_1);
void FUN_100eb390(void);
long long FUN_100eb3b8(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100eb4c8(int *param_1,long long param_2);
void FUN_100eb510(int *param_1,long long param_2,int param_3);
void FUN_100eb5cc(int *param_1,long long param_2,int param_3);
void FUN_100eb684(int *param_1,long long param_2);
void FUN_100eb6c4(int *param_1,long long param_2);
void FUN_100eb708(int *param_1);
long long FUN_100eb740(int *param_1);
void FUN_100eb7bc(void);
void FUN_100eb8b0(int param_1,int param_2);
int FUN_100eb8d0(int param_1);
int * FUN_100eba50(int *param_1,long long param_2,long long param_3,long long param_4,
            char param_5);
void FUN_100ebce8(void);
void FUN_100ebd0c(int param_1);
void FUN_100ebd68(int param_1,int param_2,int param_3);
void FUN_100ebeb4(int param_1,int param_2,int param_3);
void FUN_100ebf58(int param_1);
int * FUN_100ebf7c(int *param_1,long long param_2,char param_3);
void FUN_100ebff4(int *param_1,unsigned long long param_2);
long long FUN_100ec060(int *param_1);
long long FUN_100ec0e8(int *param_1);
long long FUN_100ec254(int *param_1);
int * FUN_100ec3d4(int *param_1,long long param_2,char param_3);
void FUN_100ec44c(int *param_1,unsigned long long param_2);
long long FUN_100ec4b8(int *param_1);
long long FUN_100ec540(int *param_1);
void FUN_100ec62c(long long param_1,short param_2,long long param_3);
void FUN_100ec6ac(long long param_1,short param_2);
long long FUN_100ec72c(long long param_1,long long param_2,short *param_3);
void FUN_100ec8ec(int param_1);
long long FUN_100eca54(int param_1,short *param_2,short *param_3);
void FUN_100ecb28(long long param_1,long long param_2,long long param_3);
long long FUN_100ecb90(long long param_1,long long param_2,long long param_3);
long long FUN_100ecbf0(long long param_1,long long param_2,long long param_3,long long param_4);
void FUN_100ecc68(void);
void FUN_100eccc0(void);
void FUN_100ecd8c(void);
long long FUN_100ecdec(int param_1,char param_2);
void FUN_100eceb0(long long param_1,long long param_2,short *param_3);
long long FUN_100ecf28(long long param_1,short param_2);
int FUN_100ee0a0(int param_1);
long long FUN_100ee1b4(void);
void FUN_100ee208(long long param_1,unsigned char *param_2);
long long FUN_100ee254(unsigned char *param_1,unsigned char *param_2);
unsigned long long FUN_100ee320(unsigned char *param_1,short *param_2,short *param_3);
int FUN_100ee448(int param_1);
long long FUN_100ee588(unsigned char *param_1,unsigned char *param_2,short param_3,short param_4);
void FUN_100ee624(void);
void FUN_100ee648(void);
int FUN_100ee64c(int param_1);
void FUN_100ee720(int param_1);
void FUN_100ee77c(unsigned long long param_1,unsigned long long param_2);
void FUN_100ee7e8(void);
unsigned char * FUN_100ee844(unsigned char *param_1,unsigned char param_2);
void FUN_100ee8e8(char *param_1,unsigned long long param_2);
int * FUN_100ee970(int *param_1);
int * FUN_100ee9e8(int *param_1,char param_2);
int FUN_100eea60(int param_1);
void FUN_100eea74(long long param_1,int param_2);
unsigned long long FUN_100eeaac(long long param_1);
long long FUN_100eeb0c(long long param_1);
void FUN_100eeb9c(int param_1);
long long FUN_100eebf4(long long param_1,int param_2);
void FUN_100eec88(int param_1);
unsigned int FUN_100eecf8(unsigned int param_1);
void FUN_100eed08(long long param_1,int param_2,unsigned char param_3);
void FUN_100eedb4(short *param_1,char param_2,char param_3,char param_4);
long long FUN_100eeefc(unsigned short param_1);
void FUN_100eef6c(short *param_1,short param_2,short param_3,short param_4);
long long FUN_100eef94(void);
int FUN_100eeff4(unsigned short param_1);
long long FUN_100ef0e4(int param_1);
void FUN_100ef228(long long param_1,long long param_2);
void FUN_100ef284(unsigned char *param_1,long long param_2);
int FUN_100ef2bc(unsigned int *param_1);
long long FUN_100ef330(int *param_1);
long long FUN_100ef38c(unsigned int *param_1);
long long FUN_100ef548(int param_1);
long long FUN_100ef5b8(int param_1);
void FUN_100ef628(short param_1);
void FUN_100ef658(long long param_1);
short FUN_100ef6e4(unsigned char *param_1);
short FUN_100ef96c(short *param_1);
unsigned long long FUN_100efab0(void);
int FUN_100efb00(short param_1);
void FUN_100efb60(void);
void FUN_100efb84(void);
void FUN_100efba8(void);
void FUN_100efbcc(void);
void FUN_100efbf0(void);
int FUN_100efc14(long long param_1);
int FUN_100efcc0(int param_1,int param_2);
void FUN_100efcd4(long long param_1,short param_2);
void FUN_100efdd0(long long param_1,long long param_2,int *param_3,short param_4,
                 char param_5,long long param_6,char param_7,char param_8);
void FUN_100f01ac(long long param_1,short *param_2,short param_3,char param_4);
int FUN_100f0334(int param_1,int param_2,int param_3);
short FUN_100f038c(short param_1);
void FUN_100f083c(short *param_1,short param_2,char param_3,short param_4,
                 int *param_5);
void FUN_100f0864(char param_1);
void FUN_100f08a4(void);
int FUN_100f08f4(long long param_1,long long param_2,short param_3);
void FUN_100f0928(void);
void FUN_100f0a04(int param_1,long long param_2);
void FUN_100f0a4c(long long param_1,long long param_2);
long long FUN_100f0b50(int *param_1);
void FUN_100f0bd4(int *param_1,long long param_2,long long param_3);
void FUN_100f0c3c(long long param_1,long long param_2);
int FUN_100f0cc8(char param_1,int *param_2);
void FUN_100f0e74(void);
char FUN_100f0eec(void);
void FUN_100f0f18(unsigned long long param_1);
void FUN_100f1228(void);
void FUN_100f12e4(int *param_1,int *param_2);
int FUN_100f1300(void);
void FUN_100f16a0(long long param_1);
void FUN_100f16f8(long long param_1,long long param_2);
void FUN_100f1758(int *param_1,int *param_2);
long long FUN_100f1860(long long param_1,int *param_2);
int * FUN_100f18ec(void);
void FUN_100f1940(long long param_1);
void FUN_100f199c(int *param_1,short param_2,short param_3);
short FUN_100f19ec(int *param_1,short param_2);
int * FUN_100f1a88(void);
void FUN_100f1adc(long long param_1);
long long FUN_100f1b38(long long param_1,int *param_2);
void FUN_100f1bbc(int *param_1,int param_2,short *param_3,unsigned short *param_4);
unsigned long long FUN_100f1d2c(int *param_1,short param_2,short param_3);
void FUN_100f1e0c(int *param_1,int param_2,short param_3,short param_4);
void FUN_100f1e6c(int *param_1,int param_2,short param_3,short param_4);
void FUN_100f1f7c(int *param_1,long long param_2);
int * FUN_100f210c(void);
void FUN_100f2160(void);
void FUN_100f2184(int *param_1,short param_2);
void FUN_100f2204(void);
short FUN_100f2270(short param_1);
long long FUN_100f2348(short param_1);
void FUN_100f23ac(long long param_1,short param_2,short param_3);
void FUN_100f2454(void);
void FUN_100f24a8(short param_1,char param_2);
void FUN_100f25a8(void);
char FUN_100f25b8(void);
void FUN_100f25c4(void);
char FUN_100f25d4(void);
int FUN_100f2680(long long param_1);
void FUN_100f2704(short param_1,short param_2);
void FUN_100f2758(long long param_1,long long param_2);
int * FUN_100f2844(int *param_1);
void FUN_100f29e8(int *param_1,short param_2);
int FUN_100f2d20(long long param_1);
void FUN_100f2d70(int *param_1);
long long FUN_100f2da4(int *param_1,char param_2);
void FUN_100f2e44(int *param_1,char param_2,int param_3);
void FUN_100f2f30(int *param_1,char param_2,int param_3);
int * FUN_100f2ff0(int *param_1);
void FUN_100f3064(void);
void FUN_100f3088(void);
void FUN_100f30ac(int *param_1,unsigned long long param_2);
void FUN_100f3118(long long param_1,long long param_2);
void FUN_100f3284(long long param_1,long long param_2);
void FUN_100f32f0(long long param_1,short param_2,short param_3);
void FUN_100f3348(long long param_1,short param_2,short param_3,short param_4,
                 char param_5);
void FUN_100f3388(void);
void FUN_100f33ac(int *param_1);
int * FUN_100f3444(int *param_1);
void FUN_100f34ac(void);
void FUN_100f34d4(int param_1,short param_2);
void FUN_100f364c(int param_1);
void FUN_100f374c(long long param_1,long long param_2,long long param_3);
void FUN_100f39f8(long long param_1,char *param_2,short param_3,short param_4,
                 long long param_5);
void FUN_100f3b08(long long param_1,long long param_2);
void FUN_100f3bb4(void);
long long FUN_100f3c5c(long long param_1);
int * FUN_100f3c98(int *param_1);
void FUN_100f3d30(void);
void FUN_100f3d60(int *param_1,unsigned short param_2,int *param_3,short *param_4,int param_5);
void FUN_100f4310(int *param_1);
void FUN_100f43e0(int *param_1,long long param_2,int *param_3);
void FUN_100f4478(int *param_1,long long param_2,long long param_3,long long param_4,
                 int param_5);
void FUN_100f4514(void);
void FUN_100f455c(long long param_1,short param_2,short param_3);
int FUN_100f4c40(int *param_1);
unsigned long long FUN_100f4ce0(int param_1);
long long FUN_100f4d20(int param_1);
void FUN_100f4d84(void);
void FUN_100f4e30(void);
long long FUN_100f4e74(int *param_1,long long param_2);
void FUN_100f4f0c(int *param_1,long long param_2,long long param_3);
void FUN_100f4f94(int *param_1,long long param_2);
void FUN_100f500c(int *param_1);
void FUN_100f5088(int *param_1);
void FUN_100f50c0(int *param_1);
void FUN_100f5100(void);
void FUN_100f5104(void);
void FUN_100f5108(int *param_1);
void FUN_100f5184(int *param_1,long long param_2);
void FUN_100f51f4(int *param_1);
void FUN_100f5234(int *param_1);
void FUN_100f5278(int *param_1,long long param_2);
long long FUN_100f52cc(long long param_1);
void FUN_100f5338(void);
void FUN_100f535c(void);
void FUN_100f5360(void);
void FUN_100f53a0(int param_1,short param_2);
long long FUN_100f53ec(short *param_1,short param_2,long long param_3);
int FUN_100f5468(int param_1);
short * FUN_100f54b4(short *param_1);
void FUN_100f5500(short *param_1);
void FUN_100f55ec(void);
char FUN_100f5748(void);
char FUN_100f5754(char param_1);
long long FUN_100f576c(unsigned int param_1);
int FUN_100f5790(void);
void FUN_100f5838(void);
int FUN_100f585c(void);
void FUN_100f5948(void);
void FUN_100f5970(int *param_1);
void FUN_100f5bd8(int *param_1,long long param_2,long long param_3);
void FUN_100f5ed8(int *param_1,int *param_2);
void FUN_100f6118(int *param_1,int *param_2);
int FUN_100f629c(int *param_1);
void FUN_100f6318(void);
void FUN_100f633c(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100f63c4(int *param_1,int *param_2);
void FUN_100f655c(int *param_1);
void FUN_100f659c(int *param_1,long long param_2);
void FUN_100f6664(int *param_1);
void FUN_100f66d0(int *param_1);
short FUN_100f6708(int *param_1);
short FUN_100f6790(int *param_1);
void FUN_100f6810(int *param_1,short param_2,long long param_3);
void FUN_100f6898(int *param_1);
void FUN_100f690c(int *param_1);
void FUN_100f6944(int *param_1,short param_2,char param_3);
void FUN_100f6984(int *param_1,long long param_2,short param_3,char param_4);
void FUN_100f6a0c(int *param_1,long long param_2);
void FUN_100f6a48(void);
unsigned long long FUN_100f6a84(int param_1,int param_2,int param_3,long long param_4,
                      char param_5);
void FUN_100f6c74(void);
void FUN_100f6c9c(int *param_1,int param_2,long long param_3,long long param_4,char param_5,
                 char param_6,long long param_7,char param_8);
int FUN_100f6e68(int param_1);
void FUN_100f6f98(int param_1);
void FUN_100f6ff8(int *param_1,int *param_2);
void FUN_100f71ec(int param_1,int *param_2);
void FUN_100f7310(int *param_1);
void FUN_100f74fc(int *param_1,int *param_2);
void FUN_100f764c(int param_1,char param_2);
void FUN_100f7848(int *param_1,long long param_2,int *param_3);
void FUN_100f7a5c(int param_1,char param_2);
void FUN_100f7adc(int *param_1,int param_2);
void FUN_100f7d30(int *param_1,int *param_2,char param_3);
void FUN_100f7f54(int param_1);
void FUN_100f7fec(int *param_1,int *param_2);
void FUN_100f813c(int *param_1,long long param_2,char param_3);
void FUN_100f82f4(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_100f84c8(int *param_1,int *param_2,char param_3);
void FUN_100f8588(int *param_1,int *param_2,char param_3);
long long FUN_100f8730(int *param_1,unsigned int param_2,long long param_3);
int * FUN_100f8850(int *param_1,unsigned int param_2,short param_3);
void FUN_100f8a58(int *param_1,int *param_2,char param_3);
void FUN_100f8bcc(int *param_1);
void FUN_100f8cec(void);
int * FUN_100f8d30(int *param_1);
void FUN_100f8da0(void);
void FUN_100f8dc8(int *param_1);
void FUN_100f8e7c(int param_1);
int * FUN_100f8ec0(int param_1);
unsigned long long FUN_100f8fa8(int param_1,unsigned long long param_2,char param_3,char *param_4);
void FUN_100f90fc(int param_1);
int * FUN_100f913c(int *param_1);
void FUN_100f91b8(void);
void FUN_100f91e0(int *param_1);
int FUN_100f9298(int *param_1);
void FUN_100f930c(int param_1);
void FUN_100f93c8(void);
char FUN_100f93ec(int *param_1);
char FUN_100f943c(int *param_1);
void FUN_100f948c(int *param_1,short *param_2);
short FUN_100f94d8(int *param_1);
int FUN_100f9528(int *param_1);
void FUN_100f9578(int *param_1,unsigned char *param_2,short param_3);
int * FUN_100f960c(int *param_1);
int FUN_100f9734(int *param_1,int *param_2);
int FUN_100f9838(int *param_1,int *param_2);
void FUN_100f99c0(int *param_1,int *param_2);
void FUN_100f9a28(int *param_1,long long param_2);
void FUN_100f9a64(int *param_1,long long param_2);
void FUN_100f9aa0(int *param_1,long long param_2);
void FUN_100f9adc(int *param_1,long long param_2);
int FUN_100f9b18(int *param_1);
long long FUN_100f9b68(int *param_1,int *param_2);
void FUN_100f9d78(int *param_1);
void FUN_100f9de4(int param_1,int param_2,int param_3);
void FUN_100f9e88(void);
void FUN_100f9eac(int *param_1,char param_2);
void FUN_100f9ef0(int *param_1,char param_2);
void FUN_100f9f34(int *param_1,short param_2);
void FUN_100f9f7c(int *param_1,short param_2);
void FUN_100f9fc0(int *param_1,int param_2);
void FUN_100fa004(int *param_1,int *param_2,char param_3);
void FUN_100fa1b4(int *param_1,int *param_2,int *param_3);
void FUN_100fa340(int *param_1,long long param_2,int *param_3);
void FUN_100fa490(int *param_1,long long param_2);
void FUN_100fa534(int *param_1,int param_2);
void FUN_100fa578(int *param_1,long long param_2);
void FUN_100fa5b4(int *param_1,long long param_2);
void FUN_100fa5f0(int *param_1,long long param_2);
void FUN_100fa62c(int *param_1,long long param_2);
void FUN_100fa668(int *param_1,int param_2);
void FUN_100fa6ac(int *param_1);
void FUN_100fa724(int *param_1,unsigned char *param_2);
void FUN_100fa770(int *param_1,int *param_2);
int FUN_100fa850(void);
int * FUN_100fa860(int *param_1);
void FUN_100fa8d0(void);
void FUN_100fa8f8(int param_1,int param_2);
int FUN_100fa934(int param_1);
int FUN_100fa998(int param_1);
void FUN_100fa9fc(int param_1,long long param_2);
void FUN_100faa60(int param_1,long long param_2);
void FUN_100faac0(int param_1,long long param_2,int param_3);
void FUN_100fab28(int param_1,long long param_2,int param_3);
int * FUN_100fab98(int *param_1);
void FUN_100fac20(void);
void FUN_100fac48(int *param_1,long long param_2,int param_3);
void FUN_100fad64(int *param_1);
int FUN_100fae08(int param_1,int param_2);
void FUN_100fae3c(int param_1,int param_2);
void FUN_100faeac(int param_1,long long param_2);
void FUN_100faefc(int param_1,long long param_2,long long param_3);
void FUN_100faf98(int *param_1,long long param_2,long long param_3);
int * FUN_100fb0a4(int *param_1);
void FUN_100fb118(void);
void FUN_100fb140(void);
void FUN_100fb16c(int param_1,int param_2);
void FUN_100fb1fc(int param_1,long long param_2,int param_3);
void FUN_100fb2d8(void);
void FUN_100fb44c(int param_1,long long param_2);
void FUN_100fb4a4(int *param_1,long long param_2,long long param_3);
void FUN_100fb588(int *param_1,long long param_2,unsigned int param_3);
void FUN_100fb694(void);
int * FUN_100fb780(int *param_1);
int * FUN_100fb7f0(int *param_1);
void FUN_100fb88c(void);
void FUN_100fb8b4(int *param_1);
void FUN_100fb99c(int param_1,int param_2,int param_3,int param_4);
void FUN_100fba2c(int param_1,int param_2);
void FUN_100fbac0(int param_1,int *param_2,char param_3);
void FUN_100fbd5c(int *param_1,int *param_2,char param_3);
void FUN_100fc344(void);
void FUN_100fc36c(int param_1);
void FUN_100fc3c8(int param_1,int *param_2,char param_3);
void FUN_100fc43c(void);
int * FUN_100fc4ac(int *param_1);
void FUN_100fc530(void);
void FUN_100fc558(int param_1,char param_2);
void FUN_100fc59c(int param_1,int *param_2);
void FUN_100fc5f4(int param_1,int *param_2);
void FUN_100fc64c(int *param_1,int *param_2);
void FUN_100fc6dc(int *param_1,char param_2);
void FUN_100fc7b4(int *param_1,long long param_2,char param_3);
void FUN_100fc96c(void);
int * FUN_100fc998(int *param_1);
void FUN_100fca00(void);
void FUN_100fca28(long long param_1,char param_2);
void FUN_100fca50(int *param_1,char param_2);
int * FUN_100fcc6c(int *param_1);
void FUN_100fccd4(void);
void FUN_100fccfc(int *param_1,char param_2);
void FUN_100fcd44(void);
int * FUN_100fcdd4(int *param_1);
void FUN_100fce5c(void);
void FUN_100fce84(int param_1,int param_2,int param_3);
void FUN_100fcee0(int param_1);
int * FUN_100fcfd4(int *param_1);
void FUN_100fd03c(void);
void FUN_100fd064(void);
long long FUN_100fd0a0(int *param_1);
int * FUN_100fd110(int *param_1);
void FUN_100fd1a4(void);
void FUN_100fd1cc(int *param_1,long long param_2,int param_3);
void FUN_100fd2cc(int param_1);
void FUN_100fd310(int param_1);
void FUN_100fd3cc(int param_1);
int FUN_100fd434(int param_1,char param_2,long long param_3,int *param_4,int *param_5);
long long FUN_100fd5ec(int param_1);
int * FUN_100fd648(int *param_1);
void FUN_100fd6c0(void);
void FUN_100fd6e8(int param_1);
void FUN_100fd73c(int param_1);
void FUN_100fd790(void);
int FUN_100fda44(int param_1,short *param_2);
void FUN_100fdbb4(void);
int * FUN_100fdc64(int *param_1);
void FUN_100fdd08(void);
void FUN_100fdd30(int *param_1,int *param_2,long long param_3,char param_4);
void FUN_100fdf48(int param_1);
void FUN_100fdfcc(int param_1);
void FUN_100fe054(int param_1);
void FUN_100fe154(int param_1);
void FUN_100fe1e8(int param_1);
void FUN_100fe228(int param_1);
void FUN_100fe32c(int *param_1);
void FUN_100fe3c0(int *param_1);
void FUN_100fe430(int param_1,int param_2,int param_3);
void FUN_100fe488(int *param_1);
void FUN_100fe4e4(int *param_1);
void FUN_100fe5c0(int *param_1);
int * FUN_100fe660(int *param_1);
void FUN_100fe6c8(void);
void FUN_100fe6f0(int param_1,long long param_2,long long param_3);
void FUN_100fe754(int param_1);
void FUN_100fe78c(int *param_1);
void FUN_100fe9d8(int param_1);
int * FUN_100fea14(int *param_1);
void FUN_100fea7c(void);
void FUN_100feaa4(int *param_1,int param_2);
int * FUN_100fed30(int *param_1);
void FUN_100fed98(void);
void FUN_100fedc0(int param_1,int param_2,int *param_3,long long param_4,short param_5);
void FUN_100fee4c(int param_1,long long param_2);
void FUN_100fee9c(int param_1,long long param_2);
void FUN_100fef48(int *param_1);
void FUN_100fefa8(int *param_1);
void FUN_100ff048(int *param_1);
int FUN_100ff0a0(void);
int * FUN_100ff0b0(int *param_1);
void FUN_100ff118(void);
void FUN_100ff140(int *param_1,long long param_2,short param_3);
void FUN_100ff22c(int param_1);
void FUN_100ff268(int param_1,short param_2);
void FUN_100ff330(int param_1,unsigned int *param_2,short param_3);
void FUN_100ff550(int param_1,int *param_2,short param_3);
void FUN_100ff640(int param_1,unsigned int *param_2,short param_3,short param_4);
void FUN_100ff91c(int *param_1,short param_2);
void FUN_100ffba0(int *param_1);
void FUN_100ffbdc(int *param_1);
void FUN_100ffd90(int *param_1);
void FUN_100ffe50(void);

/* Extern declarations for Ghidra globals */
extern long iRam10117094;
extern long iRam101170c0;
extern long iRam101177f0;
extern long iRam10117838;
extern long iRam1011788c;
extern unsigned char *pbRam10116a54;
extern pint *piRam10115e14;
extern pint *piRam10115e1c;
extern pint *piRam101169c4;
extern pint *piRam101169f4;
extern pint *piRam10116c3c;
extern pint *piRam101170b4;
extern pint *piRam1011710c;
extern pint *piRam10117114;
extern pint *piRam10117118;
extern pint *piRam1011716c;
extern pint *piRam10117808;
extern pint *piRam10117834;
extern pint *piRam10117844;
extern unsigned int *puRam10116070;
extern unsigned int *puRam10116a40;
extern unsigned int *puRam10116a48;
extern unsigned int *puRam10116bc0;
extern unsigned int *puRam10116c3c;
extern unsigned int *puRam10116c68;
extern unsigned int *puRam10116da0;
extern unsigned int *puRam10116f1c;
extern unsigned int *puRam10116f38;
extern unsigned int *puRam10116f4c;
extern unsigned int *puRam10116fa8;
extern unsigned int *puRam10116ff8;
extern unsigned int *puRam1011704c;
extern unsigned int *puRam10117098;
extern unsigned int *puRam101170c4;
extern unsigned int *puRam101170c8;
extern unsigned int *puRam101170cc;
extern unsigned int *puRam10117108;
extern unsigned int *puRam10117110;
extern unsigned int *puRam10117114;
extern unsigned int *puRam1011712c;
extern unsigned int *puRam10117154;
extern unsigned int *puRam10117158;
extern unsigned int *puRam10117164;
extern unsigned int *puRam1011716c;
extern unsigned int *puRam10117170;
extern unsigned int *puRam1011717c;
extern unsigned int *puRam1011718c;
extern unsigned int *puRam101171c4;
extern unsigned int *puRam10117208;
extern unsigned int *puRam10117230;
extern unsigned int *puRam10117268;
extern unsigned int *puRam101172b0;
extern unsigned int *puRam10117370;
extern unsigned int *puRam10117820;
extern unsigned int *puRam10117824;
extern unsigned int *puRam10117828;
extern unsigned int *puRam1011782c;
extern unsigned int *puRam10117830;
extern unsigned int *puRam10117850;
extern unsigned int *puRam10117860;
extern unsigned int uRam101152e4;
extern unsigned int uRam10116610;
extern unsigned int uRam10116744;
extern unsigned int uRam10116938;
extern unsigned int uRam101169bc;
extern unsigned int uRam10116a54;
extern unsigned int uRam10116a84;
extern unsigned int uRam10116a90;
extern unsigned int uRam10116bbc;
extern unsigned int uRam10116bc0;
extern unsigned int uRam10116c40;
extern unsigned int uRam10116c7c;
extern unsigned int uRam10116da0;
extern unsigned int uRam10116f14;
extern unsigned int uRam10116f20;
extern unsigned int uRam10116f28;
extern unsigned int uRam10116f3c;
extern unsigned int uRam10116f40;
extern unsigned int uRam10116f44;
extern unsigned int uRam10116f50;
extern unsigned int uRam10116f58;
extern unsigned int uRam10116f60;
extern unsigned int uRam10116f74;
extern unsigned int uRam10116f8c;
extern unsigned int uRam10116f90;
extern unsigned int uRam10116fac;
extern unsigned int uRam10116ff0;
extern unsigned int uRam10116ffc;
extern unsigned int uRam1011700c;
extern unsigned int uRam10117010;
extern unsigned int uRam10117034;
extern unsigned int uRam1011703c;
extern unsigned int uRam10117040;
extern unsigned int uRam10117050;
extern unsigned int uRam10117084;
extern unsigned int uRam1011708c;
extern unsigned int uRam10117090;
extern unsigned int uRam101170bc;
extern unsigned int uRam101170e0;
extern unsigned int uRam101170e4;
extern unsigned int uRam101170ec;
extern unsigned int uRam10117104;
extern unsigned int uRam10117120;
extern unsigned int uRam10117130;
extern unsigned int uRam1011714c;
extern unsigned int uRam1011715c;
extern unsigned int uRam10117168;
extern unsigned int uRam10117174;
extern unsigned int uRam10117180;
extern unsigned int uRam10117184;
extern unsigned int uRam10117190;
extern unsigned int uRam10117198;
extern unsigned int uRam101171a0;
extern unsigned int uRam101171c8;
extern unsigned int uRam101171f8;
extern unsigned int uRam1011720c;
extern unsigned int uRam10117218;
extern unsigned int uRam10117234;
extern unsigned int uRam10117248;
extern unsigned int uRam10117250;
extern unsigned int uRam1011726c;
extern unsigned int uRam10117288;
extern unsigned int uRam101172a8;
extern unsigned int uRam101172b4;

/* Address: 0x100e02c4 Size: 560 bytes */
void FUN_100e02c4(int *param_1,long long param_2,char param_3,char param_4)

{
  int *puVar1;
  char cVar4;
  long long uVar2;
  int iVar3;
  char uStack00000023;
  int *in_stack_00000028;
  char auStack_1a4 [112];
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  uStack00000023 = param_3;
  cVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,param_4,auStack_1a4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  uVar2 = FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x110));
  if (((int)uVar2 != 0) && ((int)uVar2 != -0x2b)) {
    FUN_100db158(uVar2,0);
  }
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puVar1;
  *puVar1 = auStack_134;
  iVar3 = FUN_10000090(auStack_134);
  if (iVar3 == 0) {
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xf8));
    FUN_100db2f4();
    if (cVar4 != '\0') {
      FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x278),auStack_1a4)
      ;
      FUN_100db2f4();
    }
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x118));
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),in_stack_00000028,uStack00000023);
    *puVar1 = local_2c;
  }
  else {
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xd8));
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x110));
    FUN_100db158(local_34,local_30);
  }
  FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xd8));
  FUN_100db2f4();
  return;
}

/* Address: 0x100e053c Size: 1240 bytes */
void FUN_100e053c(int *param_1,long long param_2,long long param_3,char param_4)

{
  int *puVar1;
  int iVar3;
  int iVar4;
  long long uVar2;
  unsigned int *puVar5;
  char in_stack_00000023;
  int *in_stack_00000028;
  unsigned int local_3a8;
  char auStack_3a4 [64];
  int local_364;
  short local_360 [2];
  char auStack_35c [112];
  char auStack_2ec [30];
  unsigned char local_2ce;
  char local_27c [64];
  short local_23c [3];
  unsigned char local_236 [66];
  char auStack_1f4 [256];
  short local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  unsigned int local_4c [19];
  
  puVar1 = puRam10117370;
  puVar5 = &local_3a8;
  local_27c[0] = 0;
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,param_4,auStack_35c);
  FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x178),local_23c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),local_27c);
  FUN_10002b08(local_23c[0],0x74656d70,1,local_360,&local_364);
  FUN_100db2f4();
  FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xd0),local_360[0],
               local_364,local_27c);
  FUN_100db2f4();
  local_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_ec = *puVar1;
  *puVar1 = auStack_1f4;
  iVar4 = FUN_10000090(auStack_1f4);
  if (iVar4 == 0) {
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xf8));
    FUN_100db2f4();
    if (iVar3 != 0) {
      FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x278),auStack_35c)
      ;
      FUN_100db2f4();
    }
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x118));
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),in_stack_00000028,in_stack_00000023
                );
    *puVar1 = local_ec;
  }
  else {
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xd8));
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x110));
    FUN_100db158(local_f4,local_f0);
  }
  FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xd8));
  FUN_100db2f4();
  if (in_stack_00000023 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  }
  local_ec = *puVar1;
  *puVar1 = auStack_1f4;
  iVar3 = FUN_10000090(auStack_1f4);
  if (iVar3 == 0) {
    if ((*(char *)(param_1 + 3) == '\0') || (param_4 == '\0')) {
      FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 600),local_23c);
      FUN_100db2f4();
    }
    else {
      FUN_100eed08(auStack_2ec,0x6c,0);
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x140),auStack_2ec);
      FUN_100db2f4();
      if ((local_2ce & 1) != 0) {
        FUN_100db2f4(0xffffffffffffffd3);
      }
      FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x200),param_1[2]);
      FUN_100db2f4();
      uVar2 = FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x110));
      if (((int)uVar2 != 0) && ((int)uVar2 != -0x2b)) {
        FUN_100db158(uVar2,0);
      }
    }
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0xa8),local_23c);
    *puVar1 = local_ec;
  }
  else {
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x110));
    if ((*(char *)(param_1 + 3) != '\0') && (in_stack_00000023 == '\0')) {
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x120));
    }
    local_3a8 = local_236[0] + 1;
    local_4c[0] = 0x40;
    if (0x3f < local_3a8) {
      puVar5 = local_4c;
    }
    FUN_100012d8(local_236,auStack_3a4,*puVar5);
    FUN_10117884((int)in_stack_00000028 + (int)*(short *)(*in_stack_00000028 + 0x298),auStack_3a4);
    FUN_100db158(local_f4,local_f0);
  }
  return;
}

/* Address: 0x100e0c0c Size: 72 bytes */
void FUN_100e0c0c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x298));
  }
  return;
}

/* Address: 0x100e0c54 Size: 60 bytes */
void FUN_100e0c54(void)

{
  FUN_100c1c8c(uRam10116f14,*puRam10116f1c,0x10,uRam10116f20,uRam10116938);
  return;
}

/* Address: 0x100e0d4c Size: 40 bytes */
void FUN_100e0d4c(void)

{
  FUN_100e0ca0(0);
  return;
}

/* Address: 0x100e0d80 Size: 64 bytes */
void FUN_100e0d80(int param_1)

{
  FUN_1011001c(param_1);
  *(short *)(*(int *)(param_1 + 0x80) + 0x6c) = 0x80;
  return;
}

/* Address: 0x100e0dc8 Size: 224 bytes */
void FUN_100e0dc8(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = piRam101169c4;
  FUN_10110c38();
  piVar2 = (int *)*piVar1;
  piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x330),0);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x768) + (int)piVar2);
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x140) + (int)piVar2), iVar3 != 0)) {
      piVar1 = (int *)*piVar1;
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x338),piVar2);
      FUN_10117884((int)*(short *)(*piVar2 + 400) + (int)piVar2,1);
    }
  }
  return;
}

/* Address: 0x100e0f3c Size: 60 bytes */
void FUN_100e0f3c(void)

{
  FUN_100c1c8c(uRam10116f28,*puRam10116f38,200,uRam10116f3c,uRam10116f40);
  return;
}

/* Address: 0x100e0f78 Size: 272 bytes */
void FUN_100e0f78(int *param_1,int *param_2)

{
  int *piVar1;
  int *puVar2;
  int *piVar3;
  int *puVar4;
  int *puStack00000018;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [48];
  
  piVar3 = &local_48;
  piVar1 = &local_3c;
  puVar4 = &local_38;
  puVar2 = &local_34;
  puStack00000018 = param_1;
  FUN_100b02d0(local_30);
  if (-0x8000 < *param_2) {
    piVar1 = &local_40;
  }
  if (*piVar1 < 0x7fff) {
    puVar2 = &local_44;
  }
  if (-0x8000 < param_2[1]) {
    piVar3 = &local_4c;
  }
  if (*piVar3 < 0x7fff) {
    puVar4 = &local_50;
  }
  *puStack00000018 = CONCAT22((short)*puVar2,(short)*puVar4);
  return;
}

/* Address: 0x100e1088 Size: 20 bytes */
long long FUN_100e1088(long long param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 4;
}

/* Address: 0x100e109c Size: 20 bytes */
long long FUN_100e109c(long long param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 4;
}

/* Address: 0x100e10b0 Size: 72 bytes */
int * FUN_100e10b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = iVar1 + iVar2;
  return param_1;
}

/* Address: 0x100e10f8 Size: 72 bytes */
int * FUN_100e10f8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = iVar1 - iVar2;
  return param_1;
}

/* Address: 0x100e1140 Size: 64 bytes */
int * FUN_100e1140(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = -*param_2;
  param_1[1] = -iVar1;
  return param_1;
}

/* Address: 0x100e1180 Size: 36 bytes */
void FUN_100e1180(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  return;
}

/* Address: 0x100e11a4 Size: 36 bytes */
void FUN_100e11a4(int *param_1,int *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}

/* Address: 0x100e11c8 Size: 52 bytes */
long long FUN_100e11c8(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e11fc Size: 52 bytes */
long long FUN_100e11fc(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100e1230 Size: 52 bytes */
long long FUN_100e1230(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((*param_1 < *param_2) && (param_1[1] < param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100e1264 Size: 84 bytes */
void FUN_100e1264(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    *param_1 = *param_2;
  }
  if (param_2[2] < *param_1) {
    *param_1 = param_2[2];
  }
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[3] < param_1[1]) {
    param_1[1] = param_2[3];
  }
  return;
}

/* Address: 0x100e12b8 Size: 400 bytes */
void FUN_100e12b8(int *param_1,short *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_70;
  int local_6c [3];
  int local_60;
  int local_5c [3];
  int local_50;
  int local_4c [3];
  int local_40;
  int local_3c [15];
  
  piVar8 = &local_70;
  piVar4 = local_6c + 1;
  piVar7 = &local_60;
  piVar3 = local_5c + 1;
  piVar6 = &local_50;
  piVar2 = local_4c + 1;
  piVar5 = &local_40;
  piVar1 = local_3c + 1;
  local_3c[2] = *param_1;
  local_3c[1] = 0xffff8000;
  if (-0x8000 < *param_1) {
    piVar1 = local_3c + 2;
  }
  local_3c[0] = *piVar1;
  local_40 = 0x7fff;
  if (*piVar1 < 0x7fff) {
    piVar5 = local_3c;
  }
  *param_2 = (short)*piVar5;
  local_4c[2] = param_1[1];
  local_4c[1] = 0xffff8000;
  if (-0x8000 < param_1[1]) {
    piVar2 = local_4c + 2;
  }
  local_4c[0] = *piVar2;
  local_50 = 0x7fff;
  if (*piVar2 < 0x7fff) {
    piVar6 = local_4c;
  }
  param_2[1] = (short)*piVar6;
  local_5c[2] = param_1[2];
  local_5c[1] = 0xffff8000;
  if (-0x8000 < param_1[2]) {
    piVar3 = local_5c + 2;
  }
  local_5c[0] = *piVar3;
  local_60 = 0x7fff;
  if (*piVar3 < 0x7fff) {
    piVar7 = local_5c;
  }
  param_2[2] = (short)*piVar7;
  local_6c[2] = param_1[3];
  local_6c[1] = 0xffff8000;
  if (-0x8000 < param_1[3]) {
    piVar4 = local_6c + 2;
  }
  local_6c[0] = *piVar4;
  local_70 = 0x7fff;
  if (*piVar4 < 0x7fff) {
    piVar8 = local_6c;
  }
  param_2[3] = (short)*piVar8;
  return;
}

/* Address: 0x100e1448 Size: 156 bytes */
int * FUN_100e1448(int *param_1,short *param_2)

{
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_100f56e4(0x10);
    if (param_1 != (int *)0x0) {
      *param_1 = (int)*param_2;
      param_1[1] = (int)param_2[1];
      param_1[2] = (int)param_2[2];
      param_1[3] = (int)param_2[3];
    }
  }
  else {
    *param_1 = (int)*param_2;
    param_1[1] = (int)param_2[1];
    param_1[2] = (int)param_2[2];
    param_1[3] = (int)param_2[3];
  }
  return param_1;
}

/* Address: 0x100e14e4 Size: 156 bytes */
int * FUN_100e14e4(int *param_1,short *param_2)

{
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_100f56e4(0x10);
    if (param_1 != (int *)0x0) {
      *param_1 = (int)*param_2;
      param_1[1] = (int)param_2[1];
      param_1[2] = (int)param_2[2];
      param_1[3] = (int)param_2[3];
    }
  }
  else {
    *param_1 = (int)*param_2;
    param_1[1] = (int)param_2[1];
    param_1[2] = (int)param_2[2];
    param_1[3] = (int)param_2[3];
  }
  return param_1;
}

/* Address: 0x100e1580 Size: 20 bytes */
long long FUN_100e1580(long long param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 8;
}

/* Address: 0x100e1594 Size: 20 bytes */
long long FUN_100e1594(long long param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 8;
}

/* Address: 0x100e15a8 Size: 68 bytes */
void FUN_100e15a8(int *param_1,int *param_2,int *param_3)

{
  *param_2 = *param_1 + *param_3;
  param_2[1] = param_1[1] + param_3[1];
  param_2[2] = param_1[2] + *param_3;
  param_2[3] = param_1[3] + param_3[1];
  return;
}

/* Address: 0x100e15ec Size: 68 bytes */
void FUN_100e15ec(int *param_1,int *param_2,int *param_3)

{
  *param_2 = *param_1 - *param_3;
  param_2[1] = param_1[1] - param_3[1];
  param_2[2] = param_1[2] - *param_3;
  param_2[3] = param_1[3] - param_3[1];
  return;
}

/* Address: 0x100e1630 Size: 68 bytes */
void FUN_100e1630(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + *param_2;
  param_1[3] = param_1[3] + param_2[1];
  return;
}

/* Address: 0x100e16b8 Size: 68 bytes */
void FUN_100e16b8(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}

/* Address: 0x100e16fc Size: 84 bytes */
long long FUN_100e16fc(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100e1750 Size: 84 bytes */
long long FUN_100e1750(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e17a4 Size: 52 bytes */
long long FUN_100e17a4(int *param_1)

{
  long long uVar1;
  
  if ((param_1[3] < param_1[1]) || (param_1[2] < *param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e17d8 Size: 284 bytes */
void FUN_100e17d8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [5];
  
  piVar5 = &local_30;
  piVar4 = &local_28;
  piVar3 = &local_20;
  piVar2 = &local_18;
  local_14[0] = *param_1;
  local_18 = *param_3;
  if (local_18 < local_14[0]) {
    piVar2 = local_14;
  }
  *param_2 = *piVar2;
  local_1c = param_1[1];
  local_20 = param_3[1];
  if (local_20 < local_1c) {
    piVar3 = &local_1c;
  }
  param_2[1] = *piVar3;
  local_24 = param_1[2];
  local_28 = param_3[2];
  if (local_24 < local_28) {
    piVar4 = &local_24;
  }
  param_2[2] = *piVar4;
  local_2c = param_1[3];
  local_30 = param_3[3];
  if (local_2c < local_30) {
    piVar5 = &local_2c;
  }
  param_2[3] = *piVar5;
  iVar1 = FUN_100e17a4(param_2);
  if (iVar1 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return;
}

/* Address: 0x100e18f4 Size: 224 bytes */
void FUN_100e18f4(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [5];
  
  piVar4 = &local_30;
  piVar3 = &local_28;
  piVar2 = &local_20;
  piVar1 = &local_18;
  local_14[0] = *param_1;
  local_18 = *param_3;
  if (*param_1 < *param_3) {
    piVar1 = local_14;
  }
  *param_2 = *piVar1;
  local_1c = param_1[1];
  local_20 = param_3[1];
  if (param_1[1] < param_3[1]) {
    piVar2 = &local_1c;
  }
  param_2[1] = *piVar2;
  local_24 = param_1[2];
  local_28 = param_3[2];
  if (param_3[2] < param_1[2]) {
    piVar3 = &local_24;
  }
  param_2[2] = *piVar3;
  local_2c = param_1[3];
  local_30 = param_3[3];
  if (param_3[3] < param_1[3]) {
    piVar4 = &local_2c;
  }
  param_2[3] = *piVar4;
  return;
}

/* Address: 0x100e19d4 Size: 52 bytes */
void FUN_100e19d4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_1[2] < iVar1) {
    *param_1 = param_1[2];
    param_1[2] = iVar1;
  }
  iVar1 = param_1[1];
  if (param_1[3] < iVar1) {
    param_1[1] = param_1[3];
    param_1[3] = iVar1;
  }
  return;
}

/* Address: 0x100e1a08 Size: 52 bytes */
long long FUN_100e1a08(int *param_1)

{
  long long uVar1;
  
  if ((param_1[1] < param_1[3]) && (*param_1 < param_1[2])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e1a3c Size: 40 bytes */
long long FUN_100e1a3c(unsigned int *param_1,char param_2)

{
  if (param_2 == '\0') {
    return (unsigned long long)param_1[2] - (unsigned long long)*param_1;
  }
  return (unsigned long long)param_1[3] - (unsigned long long)param_1[1];
}

/* Address: 0x100e1a64 Size: 72 bytes */
int * FUN_100e1a64(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[3];
  iVar2 = param_2[1];
  *param_1 = param_2[2] - *param_2;
  param_1[1] = iVar1 - iVar2;
  return param_1;
}

/* Address: 0x100e1aac Size: 76 bytes */
long long FUN_100e1aac(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((((*param_2 < *param_1) || (param_1[2] <= *param_2)) || (param_2[1] < param_1[1])) ||
     (param_1[3] <= param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e1af8 Size: 84 bytes */
long long FUN_100e1af8(int *param_1,int *param_2)

{
  long long uVar1;
  
  if ((((*param_2 < *param_1) || (param_1[2] < param_2[2])) || (param_2[1] < param_1[1])) ||
     (param_1[3] < param_2[3])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e1b4c Size: 36 bytes */
void FUN_100e1b4c(short *param_1,int *param_2)

{
  *param_2 = (int)*param_1;
  param_2[1] = (int)param_1[1];
  param_2[2] = (int)param_1[2];
  param_2[3] = (int)param_1[3];
  return;
}

/* Address: 0x100e1b78 Size: 104 bytes */
int * FUN_100e1b78(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x84),
     param_1 != (int *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x256));
  }
  return param_1;
}

/* Address: 0x100e1be0 Size: 40 bytes */
void FUN_100e1be0(void)

{
  FUN_100e1b78(0);
  return;
}

/* Address: 0x100e1c08 Size: 64 bytes */
void FUN_100e1c08(void)

{
  FUN_100c4548();
  return;
}

/* Address: 0x100e1c48 Size: 344 bytes */
int FUN_100e1c48(int param_1,char param_2,int *param_3,int *param_4,
                int *param_5,char param_6)

{
  int uVar1;
  int *ppuVar2;
  int iVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char auStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  ppuVar2 = 0 /* TVect base */;
  if (((param_2 != '\0') && (param_2 == '\x01')) && (param_6 != '\0')) {
    FUN_100e1140(auStack_38,(unsigned long long)*(unsigned int *)(param_1 + 0x40) + 0x3c);
    FUN_100e10f8(&local_40,(unsigned long long)*(unsigned int *)(param_1 + 0x40) + 0x88,
                 (unsigned long long)*(unsigned int *)(param_1 + 0x40) + 0x3c);
    FUN_100e10f8(&local_48,param_3,param_5);
    local_30 = local_48;
    local_2c = local_44;
    local_28 = local_40;
    local_24 = local_3c;
    FUN_100e1264(auStack_38,&local_30);
    iVar3 = FUN_100e11c8(auStack_38,(*(int*)((char*)ppuVar2 - 0x338)));
    if (iVar3 != 0) {
      FUN_10117884((int)*(int **)(param_1 + 0x40) +
                   (int)*(short *)(**(int **)(param_1 + 0x40) + 0x778),auStack_38,1);
      FUN_10117884((int)*(int **)(param_1 + 0x40) +
                   (int)*(short *)(**(int **)(param_1 + 0x40) + 0x4c8));
    }
    FUN_100e1180(param_5,auStack_38);
    uVar1 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = uVar1;
    uVar1 = param_5[1];
    *param_3 = *param_5;
    param_3[1] = uVar1;
  }
  return param_1;
}

/* Address: 0x100e1db0 Size: 60 bytes */
void FUN_100e1db0(void)

{
  FUN_100c1c8c(uRam10116f44,*puRam10116f4c,0x84,uRam10116f50,uRam10116bbc);
  return;
}

/* Address: 0x100e2124 Size: 148 bytes */
int * FUN_100e2124(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1c),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x24a));
    param_1[6] = 0;
    *(short *)((int)param_1 + 6) = 0;
    *(short *)(param_1 + 3) = 1;
    *(short *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *(short *)(param_1 + 5) = 0;
    *(short *)((int)param_1 + 0xe) = 0;
    param_1[4] = 0;
  }
  return param_1;
}

/* Address: 0x100e21b8 Size: 40 bytes */
void FUN_100e21b8(void)

{
  FUN_100e2124(0);
  return;
}

/* Address: 0x100e21e0 Size: 184 bytes */
void FUN_100e21e0(int *param_1)

{
  int *puVar1;
  int iVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100f5274(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    iVar2 = FUN_100f15e0(0);
    param_1[6] = iVar2;
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100e2298 Size: 68 bytes */
void FUN_100e2298(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x18) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100e22dc Size: 532 bytes */
void FUN_100e22dc(int *param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short local_30 [2];
  int local_2c;
  short local_28 [2];
  char auStack_24 [36];
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,local_28,local_30,
                       auStack_24);
  if (iVar2 != 0) {
    sVar4 = 1;
    if (0 < param_3) {
      do {
        param_1[4] = param_1[4] - (int)*(short *)(*(int *)param_1[6] + local_28[0] * 4 + 2);
        iVar2 = *(int *)param_1[6];
        *(short *)(iVar2 + local_28[0] * 4) = *(short *)(iVar2 + local_28[0] * 4) + -1;
        iVar2 = local_28[0] * 4;
        if (*(short *)(*(int *)param_1[6] + iVar2) < local_30[0]) {
          local_30[0] = 1;
          if (*(short *)(*(int *)param_1[6] + iVar2) == 0) {
            local_2c = FUN_100020b8((int *)param_1[6],iVar2,0,4,&local_2c,0);
            FUN_100db1ec();
            sVar1 = *(short *)(param_1 + 5);
            *(short *)(param_1 + 5) = sVar1 + -1;
            if ((0 < local_28[0]) && (local_28[0] < (short)(sVar1 + -1))) {
              iVar5 = local_28[0] * 4;
              iVar3 = iVar5 + *(int *)param_1[6];
              if (*(short *)(iVar3 + -2) == *(short *)(iVar3 + 2)) {
                local_30[0] = *(short *)(iVar3 + -4) + 1;
                iVar3 = iVar5 + *(int *)param_1[6];
                *(short *)(iVar3 + -4) =
                     *(short *)(iVar3 + -4) + *(short *)(iVar5 + *(int *)param_1[6]);
                local_2c = FUN_100020b8(param_1[6],iVar2,0,4,&local_2c,0);
                FUN_100db1ec();
                local_28[0] = local_28[0] + -1;
                *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + -1;
              }
            }
          }
          else {
            local_28[0] = local_28[0] + 1;
          }
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 <= param_3);
    }
    *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - param_3;
    *(short *)(param_1 + 1) = 0;
    *(short *)((int)param_1 + 6) = 0;
    param_1[2] = 0;
    *(short *)(param_1 + 3) = 1;
  }
  return;
}

/* Address: 0x100e24f0 Size: 616 bytes */
long long FUN_100e24f0(int param_1,short param_2,short *param_3,short *param_4,int *param_5)

{
  long long uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((*(short *)(param_1 + 0x14) < 1) || (*(short *)(param_1 + 0xe) < param_2)) || (param_2 < 1))
  {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
    param_2 = 0;
    uVar1 = 0;
  }
  else {
    iVar5 = (int)param_2;
    if (iVar5 == *(short *)(param_1 + 4)) {
      *param_3 = *(short *)(param_1 + 6);
      *param_5 = *(int *)(param_1 + 8);
      *param_4 = *(short *)(param_1 + 0xc);
      uVar1 = 1;
    }
    else {
      sVar2 = FUN_10003768((long long)param_2 - (long long)*(short *)(param_1 + 4));
      iVar6 = (int)param_2;
      if ((sVar2 < iVar5) && (*(short *)**(int **)(param_1 + 0x18) < iVar6)) {
        if (((int)*(short *)(param_1 + 0xe) - (int)param_2) + 1 < (int)sVar2) {
          sVar2 = *(short *)(param_1 + 0x14) + -1;
          *param_3 = sVar2;
          iVar4 = sVar2 * 4;
          sVar2 = *(short *)(**(int **)(param_1 + 0x18) + iVar4);
          *param_5 = *(int *)(param_1 + 0x10) -
                     (int)sVar2 * (int)*(short *)(**(int **)(param_1 + 0x18) + iVar4 + 2);
          iVar4 = (int)(short)(*(short *)(param_1 + 0xe) - sVar2);
        }
        else {
          *param_3 = *(short *)(param_1 + 6);
          *param_5 = *(int *)(param_1 + 8);
          iVar4 = (int)(short)(*(short *)(param_1 + 4) - *(short *)(param_1 + 0xc));
        }
      }
      else {
        *param_3 = 0;
        *param_5 = 0;
        iVar4 = 0;
      }
      if (iVar4 < iVar6) {
        if (iVar4 + *(short *)(**(int **)(param_1 + 0x18) + *param_3 * 4) < iVar6) {
          do {
            sVar3 = *(short *)(**(int **)(param_1 + 0x18) + *param_3 * 4);
            *param_5 = *param_5 +
                       (int)sVar3 * (int)*(short *)(**(int **)(param_1 + 0x18) + *param_3 * 4 + 2);
            sVar3 = sVar3 + (short)iVar4;
            iVar4 = (int)sVar3;
            sVar2 = *param_3;
            *param_3 = sVar2 + 1;
          } while ((int)*(short *)(**(int **)(param_1 + 0x18) + (short)(sVar2 + 1) * 4) + (int)sVar3
                   < iVar5);
        }
      }
      else {
        do {
          sVar2 = *param_3;
          *param_3 = sVar2 + -1;
          iVar5 = (short)(sVar2 + -1) * 4;
          sVar2 = *(short *)(**(int **)(param_1 + 0x18) + iVar5);
          *param_5 = *param_5 - (int)sVar2 * (int)*(short *)(**(int **)(param_1 + 0x18) + iVar5 + 2)
          ;
          sVar2 = (short)iVar4 - sVar2;
          iVar4 = (int)sVar2;
        } while (iVar6 <= sVar2);
      }
      *param_4 = param_2 - (short)iVar4;
      uVar1 = 1;
    }
  }
  *(short *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 6) = *param_3;
  *(int *)(param_1 + 8) = *param_5;
  *(short *)(param_1 + 0xc) = *param_4;
  return uVar1;
}

/* Address: 0x100e2758 Size: 284 bytes */
short FUN_100e2758(int param_1,long long param_2)

{
  int uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_10;
  int local_c;
  short local_8;
  short sStack_6;
  
  piVar5 = &local_10;
  sVar2 = 0;
  iVar6 = (int)param_2;
  if (((-1 < iVar6) && (iVar6 <= *(int *)(param_1 + 0x10))) && (0 < *(short *)(param_1 + 0x14))) {
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar4 = (int)*(short *)(**(int **)(param_1 + 0x18) + 2);
      if (0 < iVar4) {
        local_c = iVar6 / iVar4 + 1;
        local_10 = (int)*(short *)(param_1 + 0xe);
        if (local_c < *(short *)(param_1 + 0xe)) {
          piVar5 = &local_c;
        }
        sVar2 = (short)*piVar5;
      }
    }
    else if (iVar6 == 0) {
      sVar2 = 1;
    }
    else {
      param_2 = param_2 + 1;
      sVar2 = 0;
      iVar6 = 0;
      if (-1 < (long long)*(short *)(param_1 + 0x14) + -1) {
        do {
          uVar1 = *(int *)(**(int **)(param_1 + 0x18) + iVar6 * 4);
          sStack_6 = (short)uVar1;
          local_8 = (short)((unsigned int)uVar1 >> 0x10);
          param_2 = param_2 - (long long)(int)sStack_6 * (long long)(int)local_8;
          sVar2 = local_8 + sVar2;
          if (param_2 < 1) {
            return sVar2 + (short)((int)param_2 / (int)sStack_6);
          }
          sVar3 = (short)iVar6 + 1;
          iVar6 = (int)sVar3;
        } while ((int)sVar3 <= *(short *)(param_1 + 0x14) + -1);
      }
      sVar2 = *(short *)(param_1 + 0xe);
    }
  }
  return sVar2;
}

/* Address: 0x100e2874 Size: 152 bytes */
short FUN_100e2874(int *param_1,short param_2)

{
  int iVar1;
  short uVar2;
  short local_10;
  char auStack_e [2];
  char auStack_c [12];
  
  if (*(short *)(param_1 + 5) == 1) {
    uVar2 = *(short *)(*(int *)param_1[6] + 2);
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,&local_10,auStack_e
                         ,auStack_c);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(short *)(*(int *)param_1[6] + local_10 * 4 + 2);
    }
  }
  return uVar2;
}

/* Address: 0x100e290c Size: 652 bytes */
void FUN_100e290c(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c [2];
  char auStack_28 [40];
  
  iVar3 = (int)param_4;
  if (((*(short *)((int)param_1 + 0xe) < param_2) && (0 < *(short *)(param_1 + 5))) &&
     (iVar1 = *(int *)param_1[6] + *(short *)(param_1 + 5) * 4, *(short *)(iVar1 + -2) == iVar3)) {
    *(short *)(iVar1 + -4) = *(short *)(iVar1 + -4) + param_3;
    goto LAB_100e2b4c;
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,local_2c,local_38,
                       auStack_28);
  if (iVar1 != 0) {
    iVar1 = *(int *)param_1[6];
    iVar2 = local_2c[0] * 4;
    if (*(short *)(iVar1 + iVar2 + 2) == iVar3) {
      *(short *)(iVar2 + iVar1) = *(short *)(iVar1 + iVar2) + param_3;
      goto LAB_100e2b4c;
    }
  }
  if (((0 < local_2c[0]) && (local_38[0] == 1)) &&
     (iVar1 = local_2c[0] * 4 + *(int *)param_1[6], *(short *)(iVar1 + -2) == iVar3)) {
    *(short *)(iVar1 + -4) = *(short *)(iVar1 + -4) + param_3;
    goto LAB_100e2b4c;
  }
  iVar1 = FUN_10001c20(param_1[6]);
  local_34 = param_3;
  local_32 = param_4;
  if (local_38[0] < 2) {
    if (*(short *)((int)param_1 + 0xe) < param_2) goto LAB_100e2a60;
LAB_100e2a68:
    FUN_100020b8(param_1[6],((long long)local_2c[0] & 0x3fffffffU) << 2,0,0,&local_34,4);
    FUN_100db1ec();
    *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 1;
  }
  else {
    if (*(short *)((int)param_1 + 0xe) < param_2) {
LAB_100e2a60:
      local_2c[0] = *(short *)(param_1 + 5);
      goto LAB_100e2a68;
    }
    iVar2 = local_2c[0] * 4;
    local_30 = (*(short *)(*(int *)param_1[6] + iVar2) - local_38[0]) + 1;
    local_2e = *(short *)(iVar2 + *(int *)param_1[6] + 2);
    *(short *)(iVar2 + *(int *)param_1[6]) = local_38[0] + -1;
    FUN_100020b8(param_1[6],((long long)local_2c[0] & 0x3fffffffU) * 4 + 4,0,0,&local_34,8);
    FUN_100db1ec();
    *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 2;
  }
  iVar2 = FUN_10001c20(param_1[6]);
  if (iVar2 <= iVar1) {
    FUN_100db158(0xffffffffffffff94,0);
  }
LAB_100e2b4c:
  *(short *)(param_1 + 1) = 0;
  *(short *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = 1;
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + param_3;
  param_1[4] = param_1[4] + param_3 * iVar3;
  return;
}

/* Address: 0x100e2b98 Size: 396 bytes */
long long FUN_100e2b98(int *param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  unsigned long long uVar4;
  long long lVar5;
  unsigned int local_28;
  short local_24;
  short local_22 [17];
  
  lVar5 = 0;
  if (*(short *)(param_1 + 5) == 1) {
    lVar5 = (long long)(int)param_3 * (long long)(int)*(short *)(*(int *)param_1[6] + 2);
  }
  else if (param_2 == 1) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_3,local_22,&local_24,
                         &local_28);
    if (iVar2 != 0) {
      lVar5 = (unsigned long long)local_28 +
              (long long)(int)local_24 *
              (long long)(int)*(short *)(*(int *)param_1[6] + local_22[0] * 4 + 2);
    }
  }
  else {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,local_22,&local_24,
                         &local_28);
    if (iVar2 != 0) {
      sVar1 = *(short *)(*(int *)param_1[6] + local_22[0] * 4 + 2);
      iVar2 = (int)local_24;
      uVar4 = (unsigned long long)local_28;
      iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_3 + param_2 + -1,
                           local_22,&local_24,&local_28);
      if (iVar3 != 0) {
        lVar5 = (unsigned long long)local_28 +
                ((long long)(int)local_24 *
                 (long long)(int)*(short *)(*(int *)param_1[6] + local_22[0] * 4 + 2) -
                (uVar4 + (long long)(iVar2 + -1) * (long long)(int)sVar1));
      }
    }
  }
  return lVar5;
}

/* Address: 0x100e2d2c Size: 40 bytes */
void FUN_100e2d2c(void)

{
  FUN_100e1df4(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int * FUN_100e2d54(int *param_1) { return 0; }































































































































/* Address: 0x100e2f58 Size: 132 bytes */
void FUN_100e2f58(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x98));
  *(int *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x84));
  *(int *)(param_1 + 0x84) = uVar1;
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x88));
  *(int *)(param_1 + 0x88) = uVar1;
  FUN_10106060(param_1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e2fe8(int *param_1,int *param_2) { }



















































































































































/* Address: 0x100e3274 Size: 440 bytes */
void FUN_100e3274(int *param_1,int *param_2)

{
  long long uVar1;
  long long uVar2;
  
  FUN_101097e8(param_1,param_2);
  uVar2 = 0;
  uVar1 = 0;
  if (0 < *(short *)(param_1 + 0x20)) {
    uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7c0) + (int)param_1,1);
  }
  if (0 < *(short *)((int)param_1 + 0x82)) {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7b8) + (int)param_1,1);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x20));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0x82));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),uVar2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x24));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0x92));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x23));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x8d)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x8e)
              );
  return;
}

/* Address: 0x100e342c Size: 196 bytes */
void FUN_100e342c(int *param_1,short param_2,long long param_3)

{
  long long uVar1;
  short local_18;
  short local_16;
  short local_12;
  
  FUN_10000030();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,&local_18);
  FUN_10000270(local_12,local_18);
  uVar1 = FUN_100b08a4(&local_18,0);
  FUN_10000288(0,uVar1);
  if (param_2 == 1) {
    FUN_10000270(local_16,local_18);
    uVar1 = FUN_100b08a4(&local_18,0);
    FUN_10000288(0,uVar1);
  }
  return;
}

/* Address: 0x100e34f0 Size: 188 bytes */
void FUN_100e34f0(int *param_1,short param_2,long long param_3)

{
  long long uVar1;
  short local_18;
  short local_16;
  short local_14;
  
  FUN_10000030();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,&local_18);
  FUN_10000270(local_16,local_14);
  uVar1 = FUN_100b08a4(&local_18,1);
  FUN_10000288(uVar1,0);
  if (param_2 == 1) {
    FUN_10000270(local_16,local_18);
    uVar1 = FUN_100b08a4(&local_18,1);
    FUN_10000288(uVar1,0);
  }
  return;
}

/* Address: 0x100e35ac Size: 144 bytes */
void FUN_100e35ac(int param_1,long long param_2)

{
  long long uVar1;
  long long uVar2;
  int local_18;
  int local_14;
  
  FUN_101074b8(param_1,param_2);
  local_14 = *(int *)(*(int *)(param_1 + 0x84) + 0x10);
  local_18 = *(int *)(*(int *)(param_1 + 0x88) + 0x10);
  uVar1 = FUN_100e1580(param_2,0);
  uVar2 = FUN_100e1580(param_2,1);
  FUN_100e10b0(uVar2,uVar1,&local_18);
  return;
}

/* Address: 0x100e363c Size: 76 bytes */
long long FUN_100e363c(int param_1,int param_2)

{
  long long uVar1;
  short sStack0000001c;
  short sStack0000001e;
  
  sStack0000001e = (short)param_2;
  if ((((sStack0000001e < 1) ||
       (sStack0000001c = (short)((unsigned int)param_2 >> 0x10), sStack0000001c < 1)) ||
      (*(short *)(param_1 + 0x82) < sStack0000001e)) ||
     (*(short *)(param_1 + 0x80) < sStack0000001c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100e3688 Size: 404 bytes */
void FUN_100e3688(int param_1,int param_2,int *param_3)

{
  int _sStack0000001c;
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sStack0000001c;
  short sStack0000001e;
  
  sStack0000001e = (short)param_2;
  sVar2 = sStack0000001e;
  if (sStack0000001e < 1) {
    iVar3 = piRam10116c3c[1];
    iVar4 = piRam10116c3c[2];
    iVar1 = piRam10116c3c[3];
    *param_3 = *piRam10116c3c;
    param_3[1] = iVar3;
    param_3[2] = iVar4;
    param_3[3] = iVar1;
  }
  else {
    sStack0000001c = (short)((unsigned int)param_2 >> 0x10);
    if (((sStack0000001c < 1) || (*(short *)(param_1 + 0x82) < sStack0000001e)) ||
       (*(short *)(param_1 + 0x80) < sStack0000001c)) {
      iVar3 = piRam10116c3c[1];
      iVar4 = piRam10116c3c[2];
      iVar1 = piRam10116c3c[3];
      *param_3 = *piRam10116c3c;
      param_3[1] = iVar3;
      param_3[2] = iVar4;
      param_3[3] = iVar1;
    }
    else {
      _sStack0000001c = param_2;
      iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                           (int)*(short *)(**(int **)(param_1 + 0x84) + 200),sVar2);
      if (*(short *)(*(int *)(param_1 + 0x84) + 0x14) == 1) {
        param_3[1] = iVar3 * (sVar2 + -1);
      }
      else {
        iVar4 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                             (int)*(short *)(**(int **)(param_1 + 0x84) + 0xd0),1,
                             sStack0000001e + -1);
        param_3[1] = iVar4;
      }
      param_3[3] = param_3[1] + iVar3;
      sVar2 = sStack0000001c;
      iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                           (int)*(short *)(**(int **)(param_1 + 0x88) + 200),sStack0000001c);
      if (*(short *)(*(int *)(param_1 + 0x88) + 0x14) == 1) {
        *param_3 = iVar3 * (sVar2 + -1);
      }
      else {
        iVar4 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                             (int)*(short *)(**(int **)(param_1 + 0x88) + 0xd0),1,
                             sStack0000001c + -1);
        *param_3 = iVar4;
      }
      param_3[2] = *param_3 + iVar3;
    }
  }
  return;
}

/* Address: 0x100e381c Size: 324 bytes */
void FUN_100e381c(int *param_1,short param_2,short param_3,int *param_4)

{
  int uVar1;
  int iVar4;
  int iVar5;
  int uVar2;
  int uVar3;
  
  if (param_2 < 1) {
    uVar1 = puRam10116c3c[1];
    uVar2 = puRam10116c3c[2];
    uVar3 = puRam10116c3c[3];
    *param_4 = *puRam10116c3c;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
  }
  else if ((param_3 < 1) ||
          ((int)*(short *)((int)param_1 + 0x82) < (int)param_2 + (int)param_3 + -1)) {
    uVar1 = puRam10116c3c[1];
    uVar2 = puRam10116c3c[2];
    uVar3 = puRam10116c3c[3];
    *param_4 = *puRam10116c3c;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
  }
  else {
    if (*(short *)(param_1[0x21] + 0x14) == 1) {
      iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
      iVar5 = iVar4 * (param_2 + -1);
      iVar4 = iVar4 * param_3;
    }
    else {
      iVar5 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           param_2 + -1);
      iVar4 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),param_2,
                           param_3);
    }
    uVar1 = *(int *)(param_1[0x22] + 0x10);
    *param_4 = 0;
    param_4[1] = iVar5;
    param_4[2] = uVar1;
    param_4[3] = iVar5 + iVar4;
  }
  return;
}

/* Address: 0x100e3960 Size: 680 bytes */
void FUN_100e3960(int *param_1,long long param_2,char param_3,short *param_4,
                 short param_5,short *param_6,short param_7,short param_8)

{
  int iVar1;
  int uVar3;
  short sVar4;
  int iVar6;
  long long uVar5;
  int *in_stack_00000038;
  int *in_stack_0000003c;
  short *in_stack_00000040;
  char auStack_158 [8];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  char auStack_140 [276];
  int local_2c;
  int iVar2;
  
  if (param_3 == '\0') {
    local_150 = CONCAT22(*param_4,param_8);
    local_14c = CONCAT22(param_5,param_8);
    *(int *)param_6 = local_150;
    *(int *)(param_6 + 2) = local_14c;
  }
  else {
    local_148 = CONCAT22(param_7,*param_4);
    local_144 = CONCAT22(param_7,param_5);
    *(int *)param_6 = local_148;
    *(int *)(param_6 + 2) = local_144;
  }
  iVar6 = in_stack_0000003c[1];
  iVar1 = in_stack_0000003c[2];
  iVar2 = in_stack_0000003c[3];
  *in_stack_00000038 = *in_stack_0000003c;
  in_stack_00000038[1] = iVar6;
  in_stack_00000038[2] = iVar1;
  in_stack_00000038[3] = iVar2;
  if (*param_6 != *in_stack_00000040) {
    iVar6 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                         *param_6 + -1);
    *in_stack_00000038 = iVar6;
  }
  sVar4 = param_6[2];
  if (sVar4 != in_stack_00000040[2]) {
    if (sVar4 == *param_6) {
      iVar6 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 200),sVar4);
      in_stack_00000038[2] = *in_stack_00000038 + iVar6;
    }
    else {
      iVar6 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                           param_6[2]);
      in_stack_00000038[2] = iVar6;
    }
  }
  if (param_6[1] != in_stack_00000040[1]) {
    iVar6 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                         param_6[1] + -1);
    in_stack_00000038[1] = iVar6;
  }
  sVar4 = param_6[3];
  if (sVar4 != in_stack_00000040[3]) {
    if (sVar4 == param_6[1]) {
      iVar6 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 200),sVar4);
      in_stack_00000038[3] = in_stack_00000038[1] + iVar6;
    }
    else {
      iVar6 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           param_6[3]);
      in_stack_00000038[3] = iVar6;
    }
  }
  iVar6 = in_stack_00000038[1];
  iVar1 = in_stack_00000038[2];
  iVar2 = in_stack_00000038[3];
  *in_stack_0000003c = *in_stack_00000038;
  in_stack_0000003c[1] = iVar6;
  in_stack_0000003c[2] = iVar1;
  in_stack_0000003c[3] = iVar2;
  FUN_100ee64c(auStack_140);
  FUN_10000138(local_2c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),in_stack_00000038,auStack_158);
  uVar3 = local_2c;
  uVar5 = FUN_100b0578(auStack_158);
  FUN_10003150(uVar3,uVar5);
  FUN_10003060(local_2c,param_2,param_2);
  uVar3 = *(int *)(param_6 + 2);
  *(int *)in_stack_00000040 = *(int *)param_6;
  *(int *)(in_stack_00000040 + 2) = uVar3;
  *param_4 = 0;
  FUN_100ee77c(auStack_140,2);
  return;
}

/* Address: 0x100e3c08 Size: 1500 bytes */
void FUN_100e3c08(int *param_1,int *param_2,unsigned int *param_3)

{
  short *psVar1;
  short *puVar2;
  int *puVar3;
  int iVar6;
  int uVar7;
  int uVar8;
  int uVar9;
  long long uVar4;
  long long uVar5;
  short *puVar10;
  int *puVar11;
  short sVar12;
  short sVar13;
  int local_104;
  char auStack_d4 [16];
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  short local_b4;
  short local_b2;
  short local_b0;
  short local_ae;
  short local_aa;
  short local_a8;
  short local_a6;
  char auStack_a4 [8];
  char auStack_9c [8];
  short local_94 [12];
  char auStack_7c [8];
  int local_74;
  int uStack_70;
  int uStack_6c;
  int uStack_68;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_54 [42];
  
  puVar3 = puRam1011782c;
  puVar10 = local_94;
  FUN_100b02d0(&local_5c);
  FUN_10000138(param_3);
  iVar6 = FUN_10000060(param_2);
  if ((iVar6 == 0) &&
     (iVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar6 != 0)) {
    psVar1 = (short *)*param_2;
    if (*psVar1 == 10) {
      sVar13 = psVar1[1];
      local_aa = psVar1[2];
      local_a8 = psVar1[3];
      local_a6 = psVar1[4];
      uVar7 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           local_aa + -1);
      uVar8 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                           sVar13 + -1);
      uVar9 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           local_a6 + -1);
      local_bc = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                              local_a8 + -1);
      local_c4 = uVar8;
      local_c0 = uVar7;
      local_b8 = uVar9;
      local_74 = uVar8;
      uStack_70 = uVar7;
      uStack_6c = local_bc;
      uStack_68 = uVar9;
      FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_74,
                   (unsigned long long)*param_3 + 2);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x620),auStack_d4);
      iVar6 = *param_1;
      uVar4 = FUN_100e1580(auStack_d4,0);
      uVar5 = FUN_100b057c(&local_b4,0,uVar4);
      FUN_10117884(uVar5,(int)param_1 + (int)*(short *)(iVar6 + 0x868),uVar4);
      iVar6 = *param_1;
      uVar4 = FUN_100e1580(auStack_d4,1);
      uVar5 = FUN_100b057c(&local_b4,1);
      FUN_10117884(uVar5,(int)param_1 + (int)*(short *)(iVar6 + 0x868),uVar4);
      FUN_10000600(*puVar3,local_b2,local_b4,local_ae + 1,local_b0 + 1);
      FUN_10002be0(param_2,*puVar3,*puVar3);
      iVar6 = *(int *)*puVar3;
      local_64 = *(short *)(iVar6 + 2);
      local_62 = *(short *)(iVar6 + 4);
      local_60 = *(short *)(iVar6 + 6);
      local_5e = *(short *)(iVar6 + 8);
      puVar2 = *(short **)(local_104 + -0xb00);
      if ((((char*)0) != (char *)0x94) ||
         (puVar10 = (short *)FUN_100f56e4(8), puVar10 != (short *)0x0)) {
        *puVar10 = *puVar2;
        puVar10[1] = puVar2[1];
        puVar10[2] = puVar2[2];
        puVar10[3] = puVar2[3];
      }
      uVar4 = FUN_100efc14(&local_64);
      if ((int)uVar4 == 0) {
        sVar13 = local_62;
        if (local_62 < local_5e) {
          do {
            local_54[0] = 0;
            sVar12 = local_64;
            local_5a = sVar13;
            if (local_64 < local_60) {
              do {
                local_5c = sVar12;
                puVar11 = (int *)FUN_100b0368(auStack_a4,&local_5c);
                iVar6 = FUN_100033c0(*puVar11,*puVar3);
                if (iVar6 == 0) {
                  if (0 < local_54[0]) {
                    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,uVar4,
                                 local_54,sVar12 + -1,auStack_7c,sVar12,sVar13);
                  }
                }
                else if (local_54[0] == 0) {
                  local_54[0] = sVar12;
                }
                sVar12 = sVar12 + 1;
              } while (sVar12 < local_60);
            }
            if (0 < local_54[0]) {
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,uVar4,local_54,
                           local_60 + -1,auStack_7c,sVar12,sVar13);
            }
            sVar13 = sVar13 + 1;
          } while (sVar13 < local_5e);
        }
      }
      else {
        sVar13 = local_64;
        if (local_64 < local_60) {
          do {
            local_54[0] = 0;
            sVar12 = local_62;
            local_5c = sVar13;
            if (local_62 < local_5e) {
              do {
                local_5a = sVar12;
                puVar11 = (int *)FUN_100b0368(auStack_9c,&local_5c);
                iVar6 = FUN_100033c0(*puVar11,*puVar3);
                if (iVar6 == 0) {
                  if (0 < local_54[0]) {
                    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,uVar4,
                                 local_54,sVar12 + -1,auStack_7c,sVar13,sVar12);
                  }
                }
                else if (local_54[0] == 0) {
                  local_54[0] = sVar12;
                }
                sVar12 = sVar12 + 1;
              } while (sVar12 < local_5e);
            }
            if (0 < local_54[0]) {
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,uVar4,local_54,
                           local_5e + -1,auStack_7c,sVar13,sVar12);
            }
            sVar13 = sVar13 + 1;
          } while (sVar13 < local_60);
        }
      }
    }
  }
  return;
}

/* Address: 0x100e41e4 Size: 104 bytes */
void FUN_100e41e4(int *param_1,char param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_10000060(param_1[0x26]);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x748) + (int)param_1,param_1[0x26],param_2,param_3);
  }
  return;
}

/* Address: 0x100e424c Size: 344 bytes */
void FUN_100e424c(int *param_1,long long param_2,char param_3,char param_4)

{
  int *puVar1;
  int iVar2;
  char auStack_130 [276];
  int local_1c;
  
  puVar1 = puRam10117820;
  if (param_3 != param_4) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar2 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,param_2,*puVar1);
      iVar2 = (int)param_3 + (int)param_4;
      if (iVar2 == 3) {
        FUN_10000030();
        FUN_10002130(10);
        FUN_100f08a4();
        FUN_10000588(*puVar1);
      }
      else if (iVar2 == 6) {
        FUN_100ee64c(auStack_130);
        FUN_100005a0(*puVar1,local_1c);
        FUN_100005b8(local_1c,1,1);
        FUN_10000030();
        FUN_100f08a4();
        FUN_100005d0(local_1c);
        FUN_100ee77c(auStack_130,2);
      }
      else if (iVar2 == 5) {
        FUN_10000030();
        FUN_100f08a4();
        FUN_100005d0(*puVar1);
      }
    }
  }
  return;
}

/* Address: 0x100e43a4 Size: 232 bytes */
void FUN_100e43a4(int *param_1,int param_2,short param_3,short param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10 [4];
  
  piVar2 = &local_18;
  piVar1 = local_10;
  if (param_2 == 0) {
    *(short *)((int)param_1 + 6) = 0xffff;
    *(short *)(param_1 + 2) = 0xffff;
    *(char *)((int)param_1 + 10) = 1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  else {
    local_10[1] = 1;
    local_10[0] = (int)param_3;
    if (local_10[0] < 1) {
      piVar1 = local_10 + 1;
    }
    *(short *)((int)param_1 + 6) = (short)*piVar1;
    local_14 = (int)*(short *)(param_2 + 0x80);
    local_18 = (int)param_4;
    if (local_14 < local_18) {
      piVar2 = &local_14;
    }
    *(short *)(param_1 + 2) = (short)*piVar2;
    *(char *)((int)param_1 + 10) = param_5;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  return;
}

/* Address: 0x100e448c Size: 124 bytes */
int * FUN_100e448c(int *param_1,int param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    *param_1 = (*(int*)((char*)ppuVar1 - 0x249));
    FUN_100e43a4(param_1,param_2,1,*(short *)(param_2 + 0x80),1);
  }
  return param_1;
}

/* Address: 0x100e4508 Size: 232 bytes */
void FUN_100e4508(int *param_1,int param_2,short param_3,short param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10 [4];
  
  piVar2 = &local_18;
  piVar1 = local_10;
  if (param_2 == 0) {
    *(short *)((int)param_1 + 6) = 0xffff;
    *(short *)(param_1 + 2) = 0xffff;
    *(char *)((int)param_1 + 10) = 1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  else {
    local_10[1] = 1;
    local_10[0] = (int)param_3;
    if (local_10[0] < 1) {
      piVar1 = local_10 + 1;
    }
    *(short *)((int)param_1 + 6) = (short)*piVar1;
    local_14 = (int)*(short *)(param_2 + 0x82);
    local_18 = (int)param_4;
    if (local_14 < local_18) {
      piVar2 = &local_14;
    }
    *(short *)(param_1 + 2) = (short)*piVar2;
    *(char *)((int)param_1 + 10) = param_5;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  return;
}

/* Address: 0x100e45f0 Size: 124 bytes */
int * FUN_100e45f0(int *param_1,int param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    *param_1 = (*(int*)((char*)ppuVar1 - 0x248));
    FUN_100e4508(param_1,param_2,1,*(short *)(param_2 + 0x82),1);
  }
  return param_1;
}

/* Address: 0x100e466c Size: 148 bytes */
int * FUN_100e466c(int *param_1,long long param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x24),
     param_1 != (int *)0x0)) {
    *param_1 = (*(int*)((char*)ppuVar1 - 0x247));
    FUN_100b02d0(param_1 + 1);
    FUN_100e448c(param_1 + 3,param_2);
    FUN_100e45f0(param_1 + 6,param_2);
    *(char *)(param_1 + 2) = 1;
  }
  return param_1;
}

/* Address: 0x100e4700 Size: 84 bytes */
void FUN_100e4700(int *param_1,int *param_2)

{
  int *piStack00000018;
  
  piStack00000018 = param_1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x10));
  *piStack00000018 = param_2[1];
  return;
}

/* Address: 0x100e4754 Size: 28 bytes */
unsigned long long FUN_100e4754(int param_1)

{
  long long lVar1;
  
  lVar1 = -(long long)*(short *)(param_1 + 4) + -1;
  return lVar1 + (-(unsigned long long)(lVar1 == 0) - (-(long long)*(short *)(param_1 + 4) + -2)) & 0xff;
}

/* Address: 0x100e4770 Size: 28 bytes */
unsigned long long FUN_100e4770(int param_1)

{
  long long lVar1;
  
  lVar1 = -(long long)*(short *)(param_1 + 4) + -1;
  return lVar1 + (-(unsigned long long)(lVar1 == 0) - (-(long long)*(short *)(param_1 + 4) + -2)) & 0xff;
}

/* Address: 0x100e478c Size: 96 bytes */
long long FUN_100e478c(long long param_1)

{
  int iVar1;
  long long uVar2;
  
  iVar1 = FUN_100e4754(param_1 + 0xc);
  if ((iVar1 == 0) && (iVar1 = FUN_100e4770(param_1 + 0x18), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x100e47ec Size: 84 bytes */
void FUN_100e47ec(int *param_1,int *param_2)

{
  int *piStack00000018;
  
  piStack00000018 = param_1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  *piStack00000018 = param_2[1];
  return;
}

/* Address: 0x100e4840 Size: 240 bytes */
void FUN_100e4840(int *param_1,int param_2)

{
  int iVar1;
  char auStack_40 [40];
  int local_18 [6];
  
  if (param_2 == 0x6e) {
    FUN_100e466c(auStack_40,param_1);
    FUN_100e4700(local_18,auStack_40);
    iVar1 = FUN_100e478c(auStack_40);
    while (iVar1 != 0) {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),local_18[0]);
      if (iVar1 != 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x838) + (int)param_1,local_18[0],1,1,1);
      }
      FUN_100e47ec(local_18,auStack_40);
      iVar1 = FUN_100e478c(auStack_40);
    }
  }
  else {
    FUN_100c6178(param_1);
  }
  return;
}

/* Address: 0x100e4930 Size: 200 bytes */
int * FUN_100e4930(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa0),
     param_1 != (int *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x246));
    FUN_100b02d0(param_1 + 0x23);
    FUN_100b02d0(param_1 + 0x24);
    param_1[0x23] = *(int *)(*(int*)((char*)ppuVar1 - 0x398));
    *(char *)((int)param_1 + 0x89) = 0;
    *(char *)((int)param_1 + 0x8a) = 0;
    param_1[0x27] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0xffffffff;
    param_1[0x26] = 0;
    *(char *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return param_1;
}

/* Address: 0x100e49f8 Size: 336 bytes */
void FUN_100e49f8(int *param_1,int *param_2,long long param_3,char param_4,char param_5
                 )

{
  int *puVar1;
  long long uVar2;
  int iVar3;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x5f0),0);
  FUN_100c4548(param_1,0,param_2,0,0,0,param_2,uVar2);
  *(char *)(param_1 + 0x22) = param_4;
  *(char *)((int)param_1 + 0x89) = param_5;
  *(char *)((int)param_1 + 0x3d) = 0;
  param_1[0x21] = (int)param_2;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puVar1;
  *puVar1 = auStack_134;
  iVar3 = FUN_10000090(auStack_134);
  if (iVar3 == 0) {
    uVar2 = FUN_100ed918();
    param_1[0x26] = (int)uVar2;
    FUN_100005a0(*(int *)(param_1[0x21] + 0x94),uVar2);
    iVar3 = *(int *)(param_1[0x21] + 0x98);
    param_1[0x25] = iVar3;
    FUN_10000138(iVar3);
    iVar3 = FUN_100ed918();
    param_1[0x27] = iVar3;
    *puVar1 = local_2c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_34,local_30);
  }
  return;
}

/* Address: 0x100e4b48 Size: 268 bytes */
void FUN_100e4b48(int *param_1,long long param_2,int *param_3)

{
  int iVar4;
  long long uVar1;
  long long uVar2;
  long long uVar3;
  int local_20 [8];
  
  FUN_100b02d0(local_20);
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),param_2,local_20);
  if ((iVar4 != 0) &&
     (iVar4 = FUN_10117884((int)*(short *)(*param_1 + 0x740) + (int)param_1,local_20[0]), iVar4 != 0
     )) {
    uVar1 = FUN_100e4930(0);
    uVar2 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xe8));
    uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xf0));
    FUN_100e49f8(uVar1,param_1,param_2,uVar3,uVar2);
    FUN_10117884((int)*(short *)(*param_1 + 0x208) + (int)param_1,uVar1);
  }
  return;
}

/* Address: 0x100e4c54 Size: 1104 bytes */
void FUN_100e4c54(int *param_1,int *param_2)

{
  int uVar1;
  unsigned short uVar2;
  int *piVar4;
  long long uVar3;
  int *puVar5;
  int *puVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  unsigned long long uVar10;
  char cVar11;
  short *psVar12;
  int *piVar13;
  short *psVar14;
  int *piVar15;
  int *piVar16;
  short *psVar17;
  int *piVar18;
  int *piVar19;
  short local_98 [4];
  int local_90 [4];
  int local_80;
  int uStack_7c;
  int uStack_78;
  int uStack_74;
  int local_70;
  int uStack_6c;
  int uStack_68;
  int uStack_64;
  short local_60;
  short sStack_5e;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  short local_48;
  short sStack_46;
  int local_40;
  int local_3c;
  int local_38;
  int local_34 [13];
  
  psVar12 = (short *)(((char*)0) + -0x98);
  piVar13 = (int *)(((char*)0) + -0x90);
  piVar16 = (int *)(((char*)0) + -0x80);
  piVar18 = (int *)(((char*)0) + -0x70);
  psVar14 = (short *)(((char*)0) + -0x60);
  piVar15 = (int *)(((char*)0) + -0x58);
  psVar17 = (short *)(((char*)0) + -0x48);
  piVar19 = (int *)(((char*)0) + -0x40);
  FUN_100b02d0(psVar14);
  FUN_100b02d0(psVar17);
  piVar4 = piVar13;
  if ((((char*)0) != (char *)0x90) ||
     (piVar4 = (int *)FUN_100f56e4(0x10), piVar4 != (int *)0x0)) {
    *piVar4 = *param_2;
    piVar4[1] = param_2[1];
    piVar4[2] = param_2[2];
    piVar4[3] = param_2[3];
  }
  FUN_100b02d0(psVar12);
  piVar4 = piVar15;
  if ((((char*)0) != (char *)0x58) ||
     (piVar4 = (int *)FUN_100f56e4(0x10), piVar4 != (int *)0x0)) {
    *piVar4 = *param_2;
    piVar4[1] = param_2[1];
    piVar4[2] = param_2[2];
    piVar4[3] = param_2[3];
  }
  if ((0 < *(short *)(param_1 + 0x20)) && (0 < *(short *)((int)param_1 + 0x82))) {
    iVar7 = *param_1;
    uVar3 = FUN_100e1580(piVar13,0);
    FUN_10117884(psVar14,(int)param_1 + (int)*(short *)(iVar7 + 0x868),uVar3);
    iVar7 = *param_1;
    uVar3 = FUN_100e1580(piVar13,1);
    FUN_10117884(psVar17,(int)param_1 + (int)*(short *)(iVar7 + 0x868),uVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),*(int *)psVar14,piVar19);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),*(int *)psVar17,piVar16);
    puVar5 = (int *)FUN_100e1580(piVar19,0);
    puVar6 = (int *)FUN_100e1580(piVar16,0);
    uVar1 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    *piVar15 = *piVar16;
    *(int *)(((char*)0) + -0x54) = *(int *)(((char*)0) + -0x7c);
    *(int *)(((char*)0) + -0x50) = *(int *)(((char*)0) + -0x78);
    *(int *)(((char*)0) + -0x4c) = *(int *)(((char*)0) + -0x74);
    *(int *)psVar12 = *(int *)psVar14;
    *piVar18 = *piVar15;
    *(int *)(((char*)0) + -0x6c) = *(int *)(((char*)0) + -0x54);
    *(int *)(((char*)0) + -0x68) = *(int *)(((char*)0) + -0x50);
    *(int *)(((char*)0) + -100) = *(int *)(((char*)0) + -0x4c);
    uVar2 = *(unsigned short *)(param_1 + 0x24);
    if ((int)(local_38 - (((int)(short)uVar2 >> 1) + (unsigned int)((short)uVar2 < 0 && (uVar2 & 1) != 0)))
        <= *piVar13) {
      *psVar12 = *psVar12 + 1;
      iVar7 = FUN_100e1a3c(piVar19,0);
      *piVar18 = *piVar18 + iVar7;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x750),*(int *)psVar12,
                 *(int *)psVar17,piVar18);
    if (*(char *)((int)param_1 + 0x8d) != '\0') {
      *piVar19 = *piVar15;
      *(int *)(((char*)0) + -0x3c) = *(int *)(((char*)0) + -0x54);
      *(int *)(((char*)0) + -0x38) = *(int *)(((char*)0) + -0x50);
      *(int *)(((char*)0) + -0x34) = *(int *)(((char*)0) + -0x4c);
      uVar10 = (unsigned long long)*(short *)(param_1[0x21] + 0x14);
      cVar11 = ('\x01' - ((1 < uVar10) + '\x01')) +
               (uVar10 != 0 && (unsigned long long)(1 < uVar10) <= uVar10 - 1);
      if (cVar11 != '\0') {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
      }
      for (; sStack_5e <= sStack_46; sStack_5e = sStack_5e + 1) {
        if (cVar11 == '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),sStack_5e);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),sStack_5e,piVar19);
      }
    }
    if (*(char *)(param_1 + 0x23) != '\0') {
      *piVar19 = *piVar15;
      *(int *)(((char*)0) + -0x3c) = *(int *)(((char*)0) + -0x54);
      *(int *)(((char*)0) + -0x38) = *(int *)(((char*)0) + -0x50);
      *(int *)(((char*)0) + -0x34) = *(int *)(((char*)0) + -0x4c);
      uVar10 = (unsigned long long)*(short *)(param_1[0x22] + 0x14);
      cVar11 = ('\x01' - ((1 < uVar10) + '\x01')) +
               (uVar10 != 0 && (unsigned long long)(1 < uVar10) <= uVar10 - 1);
      iVar7 = 0;
      if (cVar11 != '\0') {
        iVar7 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),1);
      }
      sVar9 = *psVar14;
      if (sVar9 <= *psVar17) {
        do {
          if (cVar11 == '\0') {
            iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),sVar9);
            local_38 = *piVar19 + iVar8;
          }
          else {
            local_38 = *piVar19 + iVar7;
          }
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),sVar9,piVar19);
          *piVar19 = local_38;
          sVar9 = sVar9 + 1;
        } while (sVar9 <= *psVar17);
      }
    }
  }
  FUN_101088b0(param_1,piVar15);
  return;
}

/* Address: 0x100e50a4 Size: 740 bytes */

void FUN_100e50a4(int *param_1,short param_2,short param_3,int *param_4)

{
  unsigned short uVar1;
  int *piVar3;
  long long uVar2;
  int iVar4;
  short sVar5;
  int unaff_r21;
  char *puVar6;
  char *puVar7;
  int *piVar8;
  short sStack0000001c;
  short sStack00000020;
  char auStack_170 [276];
  int local_5c;
  char auStack_58 [8];
  int local_50;
  int local_48 [2];
  int local_40;
  
  puVar6 = ((char*)0) + -0x170;
  puVar7 = ((char*)0) + -0x58;
  piVar8 = (int *)(((char*)0) + -0x48);
  piVar3 = piVar8;
  if ((((char*)0) != (char *)0x48) ||
     (piVar3 = (int *)FUN_100f56e4(0x10), piVar3 != (int *)0x0)) {
    *piVar3 = *param_4;
    piVar3[1] = param_4[1];
    piVar3[2] = param_4[2];
    piVar3[3] = param_4[3];
  }
  uVar1 = *(unsigned short *)(param_1 + 0x24);
  *piVar8 = *piVar8 + ((int)(short)uVar1 >> 1) + (unsigned int)((short)uVar1 < 0 && (uVar1 & 1) != 0);
  if (*(short *)(param_1[0x21] + 0x14) == 1) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
  }
  if (*(short *)(param_1[0x22] + 0x14) == 1) {
    unaff_r21 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),1);
  }
  FUN_100ee64c(puVar6);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x640),local_5c);
  for (; sStack0000001c <= sStack00000020; sStack0000001c = sStack0000001c + 1) {
    iVar4 = *piVar8;
    sVar5 = *(short *)(param_1 + 0x24);
    local_40 = unaff_r21;
    if (*(short *)(param_1[0x22] + 0x14) != 1) {
      local_40 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),sStack0000001c);
    }
    local_40 = local_40 + (iVar4 - sVar5);
    for (sVar5 = param_2; sVar5 <= param_3; sVar5 = sVar5 + 1) {
      if (*(short *)(param_1[0x21] + 0x14) != 1) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),sVar5);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),piVar8,puVar7);
      uVar2 = FUN_100b0578(puVar7);
      iVar4 = FUN_10001e60(uVar2,local_5c);
      if (iVar4 != 0) {
        local_50 = CONCAT22(sStack0000001c,(short)local_50);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758),local_50,piVar8);
      }
    }
    *piVar8 = local_40 + *(short *)(param_1 + 0x24);
  }
  FUN_100ee77c(puVar6,2);
  return;
}

/* Address: 0x100e538c Size: 348 bytes */
void FUN_100e538c(int *param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int local_38 [3];
  int local_2c;
  char auStack_28 [40];
  
  if (0 < param_2) {
    piVar2 = local_38;
    piVar1 = local_38 + 2;
    if ((0 < param_3) && ((int)param_2 + (int)param_3 + -1 <= (int)*(short *)((int)param_1 + 0x82)))
    {
      local_2c = 1;
      local_38[2] = (int)param_2;
      if (local_38[2] < 1) {
        piVar1 = &local_2c;
      }
      local_38[1] = 1;
      local_38[0] = ((int)*(short *)((int)param_1 + 0x82) - (int)param_2) + 1;
      if (local_38[0] < 1) {
        piVar2 = local_38 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(short)*piVar1,(short)*piVar2,
                   auStack_28);
      FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xb0),param_2,param_3);
      *(short *)((int)param_1 + 0x82) = *(short *)((int)param_1 + 0x82) - param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_28);
    }
  }
  return;
}

/* Address: 0x100e54e8 Size: 348 bytes */
void FUN_100e54e8(int *param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int local_38 [3];
  int local_2c;
  char auStack_28 [40];
  
  if (0 < param_2) {
    piVar2 = local_38;
    piVar1 = local_38 + 2;
    if ((0 < param_3) && ((int)param_2 + (int)param_3 + -1 <= (int)*(short *)(param_1 + 0x20))) {
      local_2c = 1;
      local_38[2] = (int)param_2;
      if (local_38[2] < 1) {
        piVar1 = &local_2c;
      }
      local_38[1] = 1;
      local_38[0] = ((int)*(short *)(param_1 + 0x20) - (int)param_2) + 1;
      if (local_38[0] < 1) {
        piVar2 = local_38 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(short)*piVar1,(short)*piVar2,
                   auStack_28);
      FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xb0),param_2,param_3);
      *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) - param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_28);
    }
  }
  return;
}

/* Address: 0x100e5644 Size: 68 bytes */
void FUN_100e5644(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),1,param_2);
  return;
}

/* Address: 0x100e5688 Size: 68 bytes */
void FUN_100e5688(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),1,param_2);
  return;
}

/* Address: 0x100e56cc Size: 84 bytes */
void FUN_100e56cc(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),
               (*(short *)((int)param_1 + 0x82) - param_2) + 1,param_2);
  return;
}

/* Address: 0x100e5720 Size: 84 bytes */
void FUN_100e5720(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),
               (*(short *)(param_1 + 0x20) - param_2) + 1,param_2);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e5774(long long param_1,int *param_2) { }




























































/* Address: 0x100e590c Size: 96 bytes */
long long FUN_100e590c(int param_1,short param_2)

{
  long long uVar1;
  
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x82) < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                         (int)*(short *)(**(int **)(param_1 + 0x84) + 200));
  }
  return uVar1;
}

/* Address: 0x100e596c Size: 96 bytes */
long long FUN_100e596c(int param_1,short param_2)

{
  long long uVar1;
  
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x80) < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                         (int)*(short *)(**(int **)(param_1 + 0x88) + 200));
  }
  return uVar1;
}

/* Address: 0x100e59cc Size: 108 bytes */
void FUN_100e59cc(int *param_1,int param_2)

{
  int uStack0000001c;
  char auStack_18 [24];
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),param_2,auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_18);
  return;
}

/* Address: 0x100e5a38 Size: 140 bytes */
void FUN_100e5a38(int *param_1)

{
  int *puVar1;
  int iVar2;
  
  puVar1 = puRam10117830;
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,param_1[0x25],*puVar1);
    FUN_10117884((int)*(short *)(*param_1 + 0x4e8) + (int)param_1,*puVar1);
  }
  return;
}

/* Address: 0x100e5ac4 Size: 412 bytes */
int FUN_100e5ac4(int *param_1,int *param_2,short *param_3)

{
  unsigned short uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_54;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_10117884(param_3,(int)param_1 + (int)*(short *)(*param_1 + 0x860),param_2);
  iVar3 = FUN_100b04bc(param_3,*(int *)(local_54 + -0xe60));
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x760) + (int)param_1,*(int *)param_3,&local_28);
    uVar1 = *(unsigned short *)((int)param_1 + 0x92);
    local_2c = ((int)(short)uVar1 >> 1) + (unsigned int)((short)uVar1 < 0 && (uVar1 & 1) != 0);
    uVar1 = *(unsigned short *)(param_1 + 0x24);
    local_30 = ((int)(short)uVar1 >> 1) + (unsigned int)((short)uVar1 < 0 && (uVar1 & 1) != 0);
    FUN_100e16b8(&local_28,&local_30);
    iVar4 = 1;
    if (0 < *(short *)((int)param_1 + 0x92)) {
      if (param_2[1] < local_24) {
        iVar4 = 3;
      }
      else if (local_1c <= param_2[1]) {
        sVar2 = param_3[1];
        param_3[1] = sVar2 + 1;
        iVar4 = 3;
        if (*(short *)((int)param_1 + 0x82) < (short)(sVar2 + 1)) {
          iVar4 = 0;
        }
      }
    }
    if (0 < *(short *)(param_1 + 0x24)) {
      if (*param_2 < local_28) {
        if (iVar4 == 3) {
          iVar4 = 4;
        }
        else {
          iVar4 = 2;
        }
      }
      else if (local_20 <= *param_2) {
        if (iVar4 == 3) {
          iVar4 = 4;
        }
        else {
          iVar4 = 2;
        }
        sVar2 = *param_3;
        *param_3 = sVar2 + 1;
        if (*(short *)(param_1 + 0x20) < (short)(sVar2 + 1)) {
          iVar4 = 0;
        }
      }
    }
  }
  return iVar4;
}

/* Address: 0x100e5c60 Size: 332 bytes */
void FUN_100e5c60(int *param_1,short param_2,short param_3,short param_4)

{
  int *piVar1;
  int *piVar2;
  int local_40 [3];
  int local_34;
  char auStack_30 [48];
  
  if (0 < param_2) {
    piVar2 = local_40;
    piVar1 = local_40 + 2;
    if (0 < param_3) {
      FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xa8),param_2,param_3,
                   param_4);
      *(short *)((int)param_1 + 0x82) = *(short *)((int)param_1 + 0x82) + param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      local_34 = 1;
      local_40[2] = (int)param_2;
      if (local_40[2] < 1) {
        piVar1 = &local_34;
      }
      local_40[1] = 1;
      local_40[0] = ((int)*(short *)((int)param_1 + 0x82) - (int)param_2) + 1;
      if (local_40[0] < 1) {
        piVar2 = local_40 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(short)*piVar1,(short)*piVar2,
                   auStack_30);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_30);
    }
  }
  return;
}

/* Address: 0x100e5dac Size: 332 bytes */
void FUN_100e5dac(int *param_1,short param_2,short param_3,short param_4)

{
  int *piVar1;
  int *piVar2;
  int local_40 [3];
  int local_34;
  char auStack_30 [48];
  
  if (0 < param_2) {
    piVar2 = local_40;
    piVar1 = local_40 + 2;
    if (0 < param_3) {
      FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xa8),param_2,param_3,
                   param_4);
      *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      local_34 = 1;
      local_40[2] = (int)param_2;
      if (local_40[2] < 1) {
        piVar1 = &local_34;
      }
      local_40[1] = 1;
      local_40[0] = ((int)*(short *)(param_1 + 0x20) - (int)param_2) + 1;
      if (local_40[0] < 1) {
        piVar2 = local_40 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(short)*piVar1,(short)*piVar2,
                   auStack_30);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_30);
    }
  }
  return;
}

/* Address: 0x100e5ef8 Size: 92 bytes */
void FUN_100e5ef8(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),*(short *)((int)param_1 + 0x82) + 1,
               param_2,param_3);
  return;
}

/* Address: 0x100e5f54 Size: 92 bytes */
void FUN_100e5f54(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),*(short *)(param_1 + 0x20) + 1,
               param_2,param_3);
  return;
}

/* Address: 0x100e5fb0 Size: 80 bytes */
void FUN_100e5fb0(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),1,param_2,param_3);
  return;
}

/* Address: 0x100e6000 Size: 80 bytes */
void FUN_100e6000(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),1,param_2,param_3);
  return;
}

/* Address: 0x100e6050 Size: 80 bytes */
void FUN_100e6050(int param_1,int param_2)

{
  int *puVar1;
  int uStack0000001c;
  char auStack_10 [16];
  
  uStack0000001c = param_2;
  puVar1 = (int *)FUN_100b0368(auStack_10,((char*)0 + 0x0000001c));
  FUN_100033c0(*puVar1,*(int *)(param_1 + 0x94));
  return;
}

/* Address: 0x100e60a0 Size: 52 bytes */
int FUN_100e60a0(int param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10000060(*(int *)(param_1 + 0x94));
  return lVar1 == 0;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e60d4(long long param_1,int *param_2) { }



























































/* Address: 0x100e6274 Size: 324 bytes */
void FUN_100e6274(int param_1,short param_2,short param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    iVar4 = piRam10116c3c[1];
    iVar3 = piRam10116c3c[2];
    iVar1 = piRam10116c3c[3];
    *param_4 = *piRam10116c3c;
    param_4[1] = iVar4;
    param_4[2] = iVar3;
    param_4[3] = iVar1;
  }
  else if ((param_3 < 1) || ((int)*(short *)(param_1 + 0x80) < (int)param_2 + (int)param_3 + -1)) {
    iVar4 = piRam10116c3c[1];
    iVar3 = piRam10116c3c[2];
    iVar1 = piRam10116c3c[3];
    *param_4 = *piRam10116c3c;
    param_4[1] = iVar4;
    param_4[2] = iVar3;
    param_4[3] = iVar1;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x88);
    if (*(short *)(piVar2 + 5) == 1) {
      iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 200) + (int)piVar2,1);
      iVar4 = iVar3 * (param_2 + -1);
      iVar3 = iVar3 * param_3;
    }
    else {
      iVar4 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                           (int)*(short *)(**(int **)(param_1 + 0x88) + 0xd0),1,param_2 + -1);
      iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                           (int)*(short *)(**(int **)(param_1 + 0x88) + 0xd0),param_2,param_3);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x10);
    *param_4 = iVar4;
    param_4[1] = 0;
    param_4[2] = iVar4 + iVar3;
    param_4[3] = iVar1;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e63b8(int *param_1,char param_2) { }




































































/* Address: 0x100e65bc Size: 536 bytes */
void FUN_100e65bc(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_58 [3];
  int local_4c;
  int local_48 [2];
  char auStack_40 [64];
  
  piVar5 = local_58;
  piVar4 = local_58 + 2;
  piVar3 = local_48;
  if ((1 < *(short *)(param_1[0x21] + 0x14)) ||
     (sVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7b8) + (int)param_1,1), sVar2 != param_4)) {
    local_48[1] = 1;
    local_48[0] = (int)param_2;
    if (local_48[0] < 1) {
      piVar3 = local_48 + 1;
    }
    iVar1 = *piVar3;
    local_4c = 1;
    local_58[2] = ((int)*(short *)((int)param_1 + 0x82) - (int)param_2) + 1;
    if (local_58[2] < 1) {
      piVar4 = &local_4c;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(short)iVar1,(short)*piVar4,
                 auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xb0),param_2,param_3);
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xa8),param_2,param_3,
                 param_4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    local_58[1] = 1;
    local_58[0] = ((int)*(short *)((int)param_1 + 0x82) - (int)param_2) + 1;
    if (local_58[0] < 1) {
      piVar5 = local_58 + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(short)iVar1,(short)*piVar5,
                 auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
  }
  return;
}

/* Address: 0x100e67d4 Size: 536 bytes */
void FUN_100e67d4(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_58 [3];
  int local_4c;
  int local_48 [2];
  char auStack_40 [64];
  
  piVar5 = local_58;
  piVar4 = local_58 + 2;
  piVar3 = local_48;
  if ((*(short *)(param_1[0x22] + 0x14) != 1) ||
     (sVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7c0) + (int)param_1,1), sVar2 != param_4)) {
    local_48[1] = 1;
    local_48[0] = (int)param_2;
    if (local_48[0] < 1) {
      piVar3 = local_48 + 1;
    }
    iVar1 = *piVar3;
    local_4c = 1;
    local_58[2] = ((int)*(short *)(param_1 + 0x20) - (int)param_2) + 1;
    if (local_58[2] < 1) {
      piVar4 = &local_4c;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(short)iVar1,(short)*piVar4,
                 auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
    FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xb0),param_2,param_3);
    FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xa8),param_2,param_3,
                 param_4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    local_58[1] = 1;
    local_58[0] = ((int)*(short *)(param_1 + 0x20) - (int)param_2) + 1;
    if (local_58[0] < 1) {
      piVar5 = local_58 + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(short)iVar1,(short)*piVar5,
                 auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
  }
  return;
}

/* Address: 0x100e69ec Size: 108 bytes */
void FUN_100e69ec(int *param_1,int param_2,char param_3,char param_4,
                 char param_5)

{
  int _uStack0000001c;
  short uStack0000001c;
  short uStack0000001e;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  uStack0000001c = (short)((unsigned int)param_2 >> 0x10);
  local_8 = uStack0000001c;
  uStack0000001e = (short)param_2;
  local_6 = uStack0000001e;
  local_4 = uStack0000001c;
  local_2 = uStack0000001e;
  _uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850),&local_8,param_3,param_4,param_5);
  return;
}

/* Address: 0x100e6a58 Size: 96 bytes */
void FUN_100e6a58(int *param_1,char param_2)

{
  FUN_10000138(param_1[0x27]);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),param_1[0x27],0,param_2,1);
  return;
}

/* Address: 0x100e6ab8 Size: 504 bytes */
void FUN_100e6ab8(int *param_1,long long param_2,char param_3,char param_4,char param_5)

{
  int *puVar1;
  int *puVar2;
  long long uVar3;
  char auStack_140 [276];
  int local_2c;
  
  puVar2 = puRam10117828;
  puVar1 = puRam10117824;
  if (param_4 != '\0') {
    FUN_100005a0(param_1[0x25],*puRam10117824);
  }
  FUN_100ee64c(auStack_140);
  FUN_10000600(local_2c,1,1,*(short *)((int)param_1 + 0x82) + 1,*(short *)(param_1 + 0x20) + 1);
  FUN_10002be0(param_2,local_2c,local_2c);
  if (param_3 == '\0') {
    if (param_5 != '\0') {
      FUN_100005a0(local_2c,param_1[0x25]);
      goto LAB_100e6bbc;
    }
  }
  else if (param_5 != '\0') {
    FUN_10003060(local_2c,param_1[0x25],param_1[0x25]);
    goto LAB_100e6bbc;
  }
  FUN_10000108(param_1[0x25],local_2c,param_1[0x25]);
LAB_100e6bbc:
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b0),param_1);
  FUN_100005a0(param_1[0x25],param_1[0x26]);
  if (param_4 != '\0') {
    uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x470));
    FUN_10000108(*puVar1,param_1[0x25],*puVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),*puVar2,uVar3,1);
    FUN_10000108(param_1[0x25],*puVar1,*puVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),*puVar2,1,uVar3);
  }
  FUN_100ee77c(auStack_140,2);
  return;
}

/* Address: 0x100e6cb0 Size: 184 bytes */
void FUN_100e6cb0(int *param_1,short *param_2,char param_3,char param_4,
                 char param_5)

{
  int iVar1;
  
  iVar1 = FUN_100b0718(param_2,uRam10116da0);
  if (iVar1 == 0) {
    FUN_10000600(param_1[0x27],param_2[1],*param_2,param_2[3] + 1,param_2[2] + 1);
  }
  else {
    FUN_10000138(param_1[0x27]);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),param_1[0x27],param_3,param_4,
               param_5);
  return;
}

/* Address: 0x100e6d74 Size: 188 bytes */
void FUN_100e6d74(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *puStack00000018;
  int local_44;
  
  puStack00000018 = param_1;
  iVar1 = FUN_10117884((int)*(int **)(param_2 + 0x84) +
                       (int)*(short *)(**(int **)(param_2 + 0x84) + 0xc0),param_3[1]);
  iVar2 = FUN_10117884((int)*(int **)(param_2 + 0x88) +
                       (int)*(short *)(**(int **)(param_2 + 0x88) + 0xc0),*param_3);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    *puStack00000018 = **(int **)(local_44 + -0xe60);
  }
  else {
    *puStack00000018 = CONCAT22((short)iVar2,(short)iVar1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e6e30(int *param_1,int param_2,int *param_3) { }



























/* Address: 0x100e6eec Size: 40 bytes */
void FUN_100e6eec(void)

{
  FUN_100e1ea4(0);
  return;
}

/* Address: 0x100e6f20 Size: 496 bytes */
void FUN_100e6f20(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  char uVar4;
  int local_140;
  int iStack_13c;
  int iStack_138;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100e2fe8(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x2b) = (short)uVar2;
    if ((int)uVar2 != -1) {
      FUN_100f06dc(uVar2,&local_140);
      param_1[0x28] = local_140;
      param_1[0x29] = iStack_13c;
      param_1[0x2a] = iStack_138;
    }
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)(param_1 + 0x2c) = uVar4;
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x880));
  if (0 < *(short *)(param_1 + 0x20)) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x7c0) + (int)param_1,1);
    if (iVar3 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),1,
                   *(short *)(param_1 + 0x20),
                   *(short *)((int)param_1 + 0xb2) + *(short *)(param_1 + 0x24));
    }
  }
  if ((*(short *)((int)param_1 + 0x82) == 1) && (*(char *)((int)param_1 + 0x45) != '\x05')) {
    iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
    if (iVar3 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828),1,
                   *(short *)((int)param_1 + 0x82),(short)param_1[0xe]);
    }
  }
  return;
}

/* Address: 0x100e7110 Size: 116 bytes */
void FUN_100e7110(int param_1,int *param_2)

{
  FUN_100e3274(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xac));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xb0));
  return;
}

/* Address: 0x100e7184 Size: 192 bytes */

void FUN_100e7184(int *param_1,short param_2,long long param_3)

{
  int iVar1;
  int in_stack_0000001c;
  char auStack_120 [8];
  char local_118 [280];
  
  local_118[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878),in_stack_0000001c,local_118);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),param_2);
  if (0 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_3,auStack_120);
    FUN_100f01ac(local_118,auStack_120,*(short *)((int)param_1 + 0xae),
                 *(char *)(param_1 + 0x2c));
  }
  return;
}

/* Address: 0x100e7244 Size: 96 bytes */
int FUN_100e7244(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1010900c(param_1);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x888) + (int)param_1);
  }
  return iVar1 != 0;
}

/* Address: 0x100e72a4 Size: 188 bytes */
void FUN_100e72a4(int *param_1)

{
  short uVar1;
  int local_4c;
  char auStack_28 [8];
  int local_20;
  short local_1c [3];
  unsigned short local_16;
  
  FUN_10000660(&local_20);
  FUN_10000198(**(int **)(local_4c + -0x98));
  FUN_100ee844(auStack_28,*(char *)(param_1 + 0x2c));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  uVar1 = FUN_100ef96c(local_1c);
  *(short *)((int)param_1 + 0xb2) = uVar1;
  *(unsigned short *)(param_1 + 0x2d) =
       local_1c[0] + ((short)local_16 >> 1) + (unsigned short)((short)local_16 < 0 && (local_16 & 1) != 0);
  FUN_100ee8e8(auStack_28,2);
  FUN_10000198(local_20);
  return;
}

/* Address: 0x100e7360 Size: 64 bytes */
void FUN_100e7360(int param_1)

{
  int local_10;
  int uStack_c;
  int uStack_8;
  
  local_10 = *(int *)(param_1 + 0xa0);
  uStack_c = *(int *)(param_1 + 0xa4);
  uStack_8 = *(int *)(param_1 + 0xa8);
  FUN_100f0788(&local_10);
  FUN_10000030();
  return;
}

/* Address: 0x100e73a0 Size: 68 bytes */
void FUN_100e73a0(long long param_1,long long param_2,long long param_3)

{
  FUN_100012d8(pbRam10116a54,param_3,(unsigned long long)*pbRam10116a54 + 1);
  return;
}

/* Address: 0x100e73ec Size: 40 bytes */
void FUN_100e73ec(void)

{
  FUN_100e1f44(0);
  return;
}

/* Address: 0x100e7420 Size: 124 bytes */
long long FUN_100e7420(int *param_1,int param_2)

{
  int _uStack0000001c;
  int iVar1;
  long long uVar2;
  short uStack0000001c;
  
  _uStack0000001c = param_2;
  iVar1 = FUN_100e363c(param_1,param_2);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x8a0) + (int)param_1,uStack0000001c),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x100e74c8 Size: 64 bytes */
void FUN_100e74c8(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),param_2,param_3);
  return;
}

/* Address: 0x100e7508 Size: 68 bytes */
void FUN_100e7508(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8a8),1,param_2);
  return;
}

/* Address: 0x100e754c Size: 84 bytes */
void FUN_100e754c(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8a8),
               (*(short *)(param_1 + 0x20) - param_2) + 1,param_2);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e75a0(int *param_1,unsigned char *param_2) { }

























/* Address: 0x100e76f4 Size: 76 bytes */
short FUN_100e76f4(int *param_1)

{
  short local_10 [8];
  
  FUN_10117884(local_10,(int)param_1 + (int)*(short *)(*param_1 + 0x7b0));
  return local_10[0];
}

/* Address: 0x100e7740 Size: 60 bytes */
void FUN_100e7740(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),param_2);
  return;
}

/* Address: 0x100e777c Size: 60 bytes */
void FUN_100e777c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
  return;
}

/* Address: 0x100e77b8 Size: 68 bytes */
void FUN_100e77b8(long long param_1,long long param_2,long long param_3)

{
  FUN_100012d8(pbRam10116a54,param_3,(unsigned long long)*pbRam10116a54 + 1);
  return;
}

/* Address: 0x100e7808 Size: 64 bytes */
void FUN_100e7808(int *param_1,int param_2)

{
  int _uStack0000001c;
  short uVar1;
  short uStack0000001c;
  
  uStack0000001c = (short)((unsigned int)param_2 >> 0x10);
  uVar1 = uStack0000001c;
  _uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x890),uVar1);
  return;
}

/* Address: 0x100e7848 Size: 80 bytes */
void FUN_100e7848(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),param_2,param_3,
               *(short *)((int)param_1 + 0xb2) + *(short *)(param_1 + 0x24));
  return;
}

/* Address: 0x100e7898 Size: 68 bytes */
void FUN_100e7898(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8d0),1,param_2);
  return;
}

/* Address: 0x100e78dc Size: 80 bytes */
void FUN_100e78dc(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8d0),*(short *)(param_1 + 0x20) + 1,
               param_2);
  return;
}

/* Address: 0x100e792c Size: 80 bytes */
void FUN_100e792c(int *param_1,short param_2)

{
  int local_8;
  
  local_8 = CONCAT22(param_2,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x800),local_8);
  return;
}

/* Address: 0x100e797c Size: 80 bytes */
void FUN_100e797c(int *param_1,short param_2)

{
  int local_8;
  
  local_8 = CONCAT22(param_2,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810),local_8);
  return;
}

/* Address: 0x100e79cc Size: 76 bytes */
short FUN_100e79cc(int *param_1)

{
  short local_10 [8];
  
  FUN_10117884(local_10,(int)param_1 + (int)*(short *)(*param_1 + 0x820));
  return local_10[0];
}

/* Address: 0x100e7a18 Size: 164 bytes */
void FUN_100e7a18(int param_1,long long param_2,char param_3)

{
  int iVar1;
  int local_18;
  int uStack_14;
  
  local_18 = *(int *)(param_1 + 0x34);
  uStack_14 = *(int *)(param_1 + 0x38);
  FUN_1010b818(param_1,param_2,param_3);
  if ((*(short *)(param_1 + 0x82) == 1) &&
     (iVar1 = FUN_100e11c8((int *)(param_1 + 0x34),&local_18), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x84);
    *(int *)(iVar1 + 0x10) =
         *(int *)(iVar1 + 0x10) +
         (*(int *)(param_1 + 0x38) - (int)*(short *)(**(int **)(iVar1 + 0x18) + 2));
    *(short *)(**(int **)(*(int *)(param_1 + 0x84) + 0x18) + 2) =
         (short)*(int *)(param_1 + 0x38);
  }
  return;
}

/* Address: 0x100e7abc Size: 76 bytes */
void FUN_100e7abc(int *param_1,int param_2,char param_3,char param_4,
                 char param_5)

{
  int _uStack0000001c;
  short uVar1;
  short uStack0000001c;
  
  uStack0000001c = (short)((unsigned int)param_2 >> 0x10);
  uVar1 = uStack0000001c;
  _uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),uVar1,param_3,param_4,param_5);
  return;
}

/* Address: 0x100e7b08 Size: 112 bytes */
void FUN_100e7b08(long long param_1,short param_2,char param_3,char param_4,
                 char param_5)

{
  int *piVar1;
  int local_10 [2];
  int local_8;
  
  piVar1 = local_10;
  local_10[1] = 1;
  local_10[0] = (int)param_2;
  if (1 < local_10[0]) {
    piVar1 = local_10 + 1;
  }
  local_8 = CONCAT22(param_2,(short)*piVar1);
  FUN_100e69ec(param_1,local_8,param_3,param_4,param_5);
  return;
}

/* Address: 0x100e7b78 Size: 68 bytes */
void FUN_100e7b78(int *param_1,short param_2,short param_3,short param_4)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),param_2,param_3,param_4);
  return;
}

/* Address: 0x100e7bbc Size: 72 bytes */
void FUN_100e7bbc(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828),1,1,param_2);
  return;
}

/* Address: 0x100e7c0c Size: 40 bytes */
void FUN_100e7c0c(void)

{
  FUN_100e4930(0);
  return;
}

/* Address: 0x100e7c34 Size: 92 bytes */
void FUN_100e7c34(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x98));
  *(int *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = uVar1;
  *(int *)(param_1 + 0x94) = 0;
  FUN_100c3e70(param_1);
  return;
}

/* Address: 0x100e7c90 Size: 200 bytes */
void FUN_100e7c90(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x8c) = *param_2;
  if ((*(char *)(param_1 + 0x88) != '\0') &&
     (iVar3 = FUN_10000060(*(int *)(param_1 + 0x98)), iVar3 == 0)) {
    iVar3 = **(int **)(param_1 + 0x98);
    sVar1 = *(short *)(iVar3 + 2);
    sVar2 = *(short *)(iVar3 + 6);
    if (*(short *)(param_1 + 0x8e) < *(short *)(iVar3 + 4)) {
      *(short *)(param_1 + 0x8e) = *(short *)(iVar3 + 8) + -1;
    }
    else {
      *(short *)(param_1 + 0x8e) = *(short *)(iVar3 + 4);
    }
    if (*(short *)(param_1 + 0x8c) < sVar1) {
      *(short *)(param_1 + 0x8c) = sVar2 + -1;
    }
    else {
      *(short *)(param_1 + 0x8c) = sVar1;
    }
  }
  return;
}

/* Address: 0x100e7d58 Size: 384 bytes */
void FUN_100e7d58(int param_1,int *param_2)

{
  int iVar2;
  int *puVar3;
  int *puVar4;
  long long uVar1;
  char auStack_30 [4];
  short local_2c;
  short local_2a;
  char auStack_28 [8];
  char auStack_20 [32];
  
  iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                       (int)*(short *)(**(int **)(param_1 + 0x84) + 0x740),*param_2);
  if (iVar2 != 0) {
    if ((*(char *)(*(int *)(param_1 + 0x84) + 0x8e) == '\0') && (*(char *)(param_1 + 0x88) != '\0'))
    {
      uVar1 = FUN_100b0574(auStack_30);
      puVar3 = (int *)FUN_100b0368(auStack_28,param_2);
      puVar4 = (int *)FUN_100b0368(auStack_20,param_1 + 0x8c);
      FUN_10000c00(*puVar4,*puVar3,uVar1);
      local_2a = local_2a + 1;
      local_2c = local_2c + 1;
    }
    else {
      FUN_100b0574(auStack_30);
      FUN_10003108();
    }
    uVar1 = FUN_100b0578(auStack_30);
    FUN_10003150(*(int *)(param_1 + 0x94),uVar1);
    if ((*(char *)(param_1 + 0x89) != '\0') && (*(char *)(*(int *)(param_1 + 0x84) + 0x8e) == '\0'))
    {
      if (*(char *)(param_1 + 0x8a) == '\0') {
        FUN_10003060(*(int *)(param_1 + 0x98),*(int *)(param_1 + 0x94),
                     *(int *)(param_1 + 0x94));
      }
      else {
        FUN_10000108(*(int *)(param_1 + 0x98),*(int *)(param_1 + 0x94),
                     *(int *)(param_1 + 0x94));
      }
    }
  }
  return;
}

/* Address: 0x100e7ed8 Size: 160 bytes */
void FUN_100e7ed8(int param_1)

{
  FUN_10000108(*(int *)(param_1 + 0x98),*(int *)(param_1 + 0x94),
               *(int *)(param_1 + 0x9c));
  FUN_10117884((int)*(int **)(param_1 + 0x84) + (int)*(short *)(**(int **)(param_1 + 0x84) + 0x748),
               *(int *)(param_1 + 0x9c),4,1);
  FUN_10000108(*(int *)(param_1 + 0x94),*(int *)(param_1 + 0x98),
               *(int *)(param_1 + 0x9c));
  FUN_10117884((int)*(int **)(param_1 + 0x84) + (int)*(short *)(**(int **)(param_1 + 0x84) + 0x748),
               *(int *)(param_1 + 0x9c),1,4);
  return;
}

/* Address: 0x100e7f84 Size: 388 bytes */
int * FUN_100e7f84(int *param_1,char param_2,long long param_3,long long param_4,
                  int *param_5,char param_6)

{
  int *puVar1;
  char uVar3;
  int iVar2;
  int local_48;
  int uStack_44;
  char auStack_40 [16];
  int local_30 [2];
  char auStack_28 [40];
  
  if (param_6 != '\0') {
    FUN_100b02d0(local_30);
    local_48 = *param_5;
    uStack_44 = param_5[1];
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x600),auStack_40);
    FUN_100e1264(&local_48,auStack_40);
    FUN_10117884(local_30,param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x860),&local_48);
    if ((param_2 == '\0') &&
       (FUN_10117884((int)*(short *)(*param_1 + 0x1c8) + (int)param_1,local_30),
       *(char *)((int)param_1 + 0x89) != '\0')) {
      puVar1 = (int *)FUN_100b0368(auStack_28,param_1 + 0x23);
      uVar3 = FUN_100033c0(*puVar1,*(int *)(param_1[0x21] + 0x94));
      *(char *)((int)param_1 + 0x8a) = uVar3;
    }
    iVar2 = FUN_100b04bc(local_30,param_1 + 0x24);
    if (iVar2 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0),local_30);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
      FUN_100005a0(param_1[0x25],param_1[0x26]);
      param_1[0x24] = local_30[0];
    }
  }
  return param_1;
}

/* Address: 0x100e8108 Size: 180 bytes */
void FUN_100e8108(int param_1)

{
  int *piVar1;
  int iVar2;
  int *puVar3;
  
  piVar1 = *(int **)(param_1 + 0x84);
  if (*(char *)((int)piVar1 + 0x8e) == '\0') {
    FUN_10117884((int)*(int **)(param_1 + 0x84) +
                 (int)*(short *)(**(int **)(param_1 + 0x84) + 0x848),*(int *)(param_1 + 0x94)
                 ,0,0,1);
  }
  else {
    iVar2 = *piVar1;
    puVar3 = (int *)FUN_100b057c((unsigned long long)**(unsigned int **)(param_1 + 0x94) + 2,0);
    FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0x838),*puVar3,0,0,1);
  }
  return;
}

/* Address: 0x100e81c4 Size: 104 bytes */
int * FUN_100e81c4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa0),
     param_1 != (int *)0x0)) {
    FUN_100e4930(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x243));
  }
  return param_1;
}

/* Address: 0x100e822c Size: 40 bytes */
void FUN_100e822c(void)

{
  FUN_100e81c4(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e8254(int param_1,short *param_2) { }












































/* Address: 0x100e83cc Size: 484 bytes */
int * FUN_100e83cc(int *param_1,char param_2,long long param_3,long long param_4,
                  int *param_5,char param_6)

{
  int *puVar1;
  char uVar3;
  int iVar2;
  char auStack_50 [16];
  int local_40;
  int uStack_3c;
  int local_38 [2];
  char auStack_30 [8];
  char auStack_28 [40];
  
  FUN_100b02d0(local_38);
  if (param_6 != '\0') {
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x600),auStack_50);
    local_40 = *param_5;
    uStack_3c = param_5[1];
    FUN_100e1264(&local_40,auStack_50);
    FUN_10117884(local_38,param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x860),&local_40);
    if ((param_2 == '\0') &&
       (FUN_10117884((int)*(short *)(*param_1 + 0x1c8) + (int)param_1,local_38),
       *(char *)((int)param_1 + 0x89) != '\0')) {
      puVar1 = (int *)FUN_100b0368(auStack_30,param_1 + 0x23);
      uVar3 = FUN_100033c0(*puVar1,*(int *)(param_1[0x21] + 0x94));
      *(char *)((int)param_1 + 0x8a) = uVar3;
    }
    iVar2 = FUN_100b04bc(local_38,param_1 + 0x24);
    if (iVar2 != 0) {
      if (((*(char *)(param_1 + 0x22) == '\0') && (param_2 != '\0')) &&
         (FUN_10117884((int)*(short *)(*param_1 + 0x1c8) + (int)param_1,local_38),
         *(char *)((int)param_1 + 0x89) != '\0')) {
        puVar1 = (int *)FUN_100b0368(auStack_28,param_1 + 0x23);
        uVar3 = FUN_100033c0(*puVar1,*(int *)(param_1[0x21] + 0x94));
        *(char *)((int)param_1 + 0x8a) = uVar3;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0),local_38);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
      FUN_100005a0(param_1[0x25],param_1[0x26]);
      param_1[0x24] = local_38[0];
    }
  }
  return param_1;
}

/* Address: 0x100e85b8 Size: 104 bytes */
int * FUN_100e85b8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa0),
     param_1 != (int *)0x0)) {
    FUN_100e81c4(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x241));
  }
  return param_1;
}

/* Address: 0x100e8620 Size: 40 bytes */
void FUN_100e8620(void)

{
  FUN_100e85b8(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e8648(int param_1) { }













/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e8684(int param_1,int param_2) { }













/* Address: 0x100e86bc Size: 104 bytes */
int * FUN_100e86bc(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa0),
     param_1 != (int *)0x0)) {
    FUN_100e81c4(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x23f));
  }
  return param_1;
}

/* Address: 0x100e8724 Size: 40 bytes */
void FUN_100e8724(void)

{
  FUN_100e86bc(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e874c(int param_1) { }













/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e8788(int param_1,short *param_2) { }













/* Address: 0x100e87b8 Size: 68 bytes */
short FUN_100e87b8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  return *(short *)(param_1 + 1);
}

/* Address: 0x100e87fc Size: 108 bytes */
short FUN_100e87fc(int *param_1)

{
  int iVar1;
  short uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = *(short *)(param_1 + 1);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x18) + (int)param_1);
    uVar2 = *(short *)(param_1 + 1);
  }
  return uVar2;
}

/* Address: 0x100e8900 Size: 68 bytes */
short FUN_100e8900(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  return *(short *)(param_1 + 1);
}

/* Address: 0x100e8944 Size: 108 bytes */
short FUN_100e8944(int *param_1)

{
  int iVar1;
  short uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = *(short *)(param_1 + 1);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x18) + (int)param_1);
    uVar2 = *(short *)(param_1 + 1);
  }
  return uVar2;
}

/* Address: 0x100e8a48 Size: 72 bytes */
void FUN_100e8a48(int param_1)

{
  short uVar1;
  
  uVar1 = FUN_100e87b8(param_1 + 0xc);
  *(short *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100e8900(param_1 + 0x18);
  *(short *)(param_1 + 6) = uVar1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e8a90(int param_1) { }













































































/* Address: 0x100e8b88 Size: 336 bytes */
void FUN_100e8b88(void)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int uVar4;
  int *ppuVar5;
  
  uVar4 = uRam10116f90;
  uVar3 = uRam10116f8c;
  uVar2 = uRam10116f60;
  uVar1 = uRam10116f58;
  ppuVar5 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116f74,*puRam10116fa8,0x1c,uRam10116fac,uRam10116938);
  FUN_100c1c8c(uVar1,*(int *)(*(int*)((char*)ppuVar5 - 0x23c)),0xa0,(*(int*)((char*)ppuVar5 - 0x23b)),(*(int*)((char*)ppuVar5 - 0x309)));
  FUN_100c1c8c(uVar2,*(int *)(*(int*)((char*)ppuVar5 - 0x23a)),0xb8,(*(int*)((char*)ppuVar5 - 0x239)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x24e)),*(int *)(*(int*)((char*)ppuVar5 - 0x238)),0xb8,(*(int*)((char*)ppuVar5 - 0x237)),uVar2);
  FUN_100c1c8c(uVar3,*(int *)(*(int*)((char*)ppuVar5 - 0x236)),0xa0,(*(int*)((char*)ppuVar5 - 0x235)),(*(int*)((char*)ppuVar5 - 0x339)));
  FUN_100c1c8c(uVar4,*(int *)(*(int*)((char*)ppuVar5 - 0x234)),0xa0,(*(int*)((char*)ppuVar5 - 0x233)),uVar3);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x242)),*(int *)(*(int*)((char*)ppuVar5 - 0x232)),0xa0,(*(int*)((char*)ppuVar5 - 0x231)),uVar4);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x240)),*(int *)(*(int*)((char*)ppuVar5 - 0x230)),0xa0,(*(int*)((char*)ppuVar5 - 0x22f)),uVar4);
  *(int *)(*(int*)((char*)ppuVar5 - 0x22e)) = 0xffffffff;
  return;
}

/* Address: 0x100e8db4 Size: 40 bytes */
void FUN_100e8db4(void)

{
  FUN_100e8cec(0);
  return;
}

/* Address: 0x100e8ddc Size: 328 bytes */
void FUN_100e8ddc(int *param_1,int *param_2)

{
  int iVar2;
  unsigned char *pbVar3;
  unsigned long long uVar1;
  unsigned long long uVar4;
  int local_13c;
  
  uVar4 = ZEXT48(((char*)0)) - 0x118;
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if ((((iVar2 == 0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar2 == 0)) &&
      (0x1f < *(short *)(param_2 + 9))) && (*(short *)(param_2 + 9) < 0x80)) {
    if (param_1[0x48] <= *(int *)((int)param_2 + 0x1a) - param_1[0x49]) {
      FUN_100b1d90(param_1 + 8,(unsigned long long)*(unsigned int *)(local_13c + -0x8b4) + 0x1c);
    }
    pbVar3 = (unsigned char *)(param_1 + 8);
    FUN_100b1fb4(pbVar3,(char)*(short *)(param_2 + 9));
    uVar1 = uVar4;
    if (((uVar4 & 0xffffffff) != 0) || (uVar1 = FUN_100f56e4(0x100), (uVar1 & 0xffffffff) != 0)) {
      FUN_100012d8(pbVar3,uVar1,(unsigned long long)*pbVar3 + 1);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),uVar4);
    param_1[0x49] = *(int *)((int)param_2 + 0x1a);
  }
  else {
    FUN_100bfe54(param_1,param_2);
  }
  return;
}

/* Address: 0x100e8f24 Size: 72 bytes */
void FUN_100e8f24(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x1a0));
  }
  return;
}

/* Address: 0x100e8f6c Size: 156 bytes */
void FUN_100e8f6c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar1 == 0)) &&
      (0x1f < *(short *)(param_2 + 9))) && (*(short *)(param_2 + 9) < 0x80)) {
    *(int *)(param_1 + 0x124) = *(int *)((int)param_2 + 0x1a);
  }
  else {
    FUN_100bfef0(param_1,param_2);
  }
  return;
}

/* Address: 0x100e9010 Size: 60 bytes */
void FUN_100e9010(void)

{
  FUN_100c1c8c(uRam10116ff0,*puRam10116ff8,0x128,uRam10116ffc,uRam10116610);
  return;
}

/* Address: 0x100e904c Size: 112 bytes */
int * FUN_100e904c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x24),
     param_1 != (int *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x227));
    param_1[8] = 0;
  }
  return param_1;
}

/* Address: 0x100e9124 Size: 44 bytes */
void FUN_100e9124(long long param_1)

{
  FUN_100d88b4(param_1,0,4);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100e9150(void) { }











/* Address: 0x100e9174 Size: 64 bytes */
long long FUN_100e9174(void)

{
  long long uVar1;
  
  uVar1 = FUN_100e90bc(0);
  FUN_100e9150();
  return uVar1;
}

/* Address: 0x100e91b4 Size: 76 bytes */
long long FUN_100e91b4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  }
  return 0;
}

/* Address: 0x100e9200 Size: 96 bytes */
long long FUN_100e9200(long long param_1,long long param_2)

{
  int iVar2;
  long long lVar1;
  
  if ((int)param_1 != (int)param_2) {
    iVar2 = FUN_10003858(param_2 - param_1);
    lVar1 = FUN_100034c8();
    param_1 = param_1 + (lVar1 - (long long)((int)lVar1 / iVar2) * (long long)iVar2);
  }
  return param_1;
}

/* Address: 0x100e9260 Size: 116 bytes */
void FUN_100e9260(long long param_1,int param_2)

{
  int *puVar1;
  
  puVar1 = (int *)
           FUN_10117884((int)*(int **)(param_2 + 0xc) +
                        (int)*(short *)(**(int **)(param_2 + 0xc) + 0xe0),param_1);
  **(int **)(param_2 + 8) = *puVar1;
  FUN_10117884(**(int **)(param_2 + 8),**(int **)(param_2 + 4));
  return;
}

/* Address: 0x100e92d4 Size: 72 bytes */
void FUN_100e92d4(long long param_1,int *param_2)

{
  FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0x158),*(int *)*param_2
               ,param_1);
  return;
}

/* Address: 0x100e931c Size: 68 bytes */
void FUN_100e931c(long long param_1,long long param_2,int *param_3)

{
  FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x158),param_1,param_2);
  return;
}

/* Address: 0x100e9368 Size: 40 bytes */
void FUN_100e9368(void)

{
  FUN_100e904c(0);
  return;
}

/* Address: 0x100e93b8 Size: 64 bytes */
void FUN_100e93b8(int *param_1,int *param_2,int *param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158),*param_2,*param_3);
  return;
}

/* Address: 0x100e93f8 Size: 132 bytes */
int FUN_100e93f8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int uStack0000001c;
  int uStack00000020;
  int local_18;
  char *local_14;
  char *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (char *)((char*)0 + 0x00000020);
  local_14 = (char *)((char*)0 + 0x0000001c);
  local_c = &local_18;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  local_8 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),uRam1011700c,&local_14);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  return local_18;
}

/* Address: 0x100e947c Size: 140 bytes */
int FUN_100e947c(int *param_1,int param_2)

{
  int iVar1;
  int iStack0000001c;
  int local_10;
  char *local_c;
  int *local_8;
  
  local_c = (char *)((char*)0 + 0x0000001c);
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    iStack0000001c = param_2;
    local_8 = param_1;
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),uRam10117010,&local_c,
                         &local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
  }
  return local_10;
}

/* Address: 0x100e9508 Size: 64 bytes */
void FUN_100e9508(int *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),((char*)0 + 0x0000001c));
  return;
}

/* Address: 0x100e9548 Size: 196 bytes */
void FUN_100e9548(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5)

{
  long long lVar1;
  
  if ((int)param_2 < (int)param_3) {
    lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0),param_2,param_3,param_4,
                         param_5);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),param_2,lVar1,param_4,param_5);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),lVar1 + 1,param_3,param_4,param_5)
    ;
  }
  return;
}

/* Address: 0x100e960c Size: 408 bytes */
long long FUN_100e960c(int *param_1,long long param_2,long long param_3,long long param_4,
                     long long param_5)

{
  long long uVar1;
  long long uVar2;
  int iVar3;
  int local_28;
  int local_24 [9];
  
  if ((int)param_2 < (int)param_3) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_2);
    param_2 = param_2 + -1;
    param_3 = param_3 + 1;
    while( true ) {
      do {
        param_3 = param_3 + -1;
        uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_3);
        iVar3 = FUN_10117884(uVar1,uVar2,param_5);
      } while (iVar3 < 0);
      do {
        param_2 = param_2 + 1;
        uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_2);
        iVar3 = FUN_10117884(uVar1,uVar2,param_5);
      } while (0 < iVar3);
      if ((int)param_3 <= (int)param_2) break;
      local_24[0] = FUN_10117884((int)*(short *)(*param_1 + 0x120) + (int)param_1,param_2);
      local_28 = FUN_10117884((int)*(short *)(*param_1 + 0x120) + (int)param_1,param_3);
      FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,param_2,&local_28,1);
      FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,param_3,local_24,1);
    }
  }
  return param_3;
}

/* Address: 0x100e97a4 Size: 264 bytes */
void FUN_100e97a4(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5)

{
  long long uVar1;
  int local_28;
  int local_24 [9];
  
  uVar1 = FUN_100e9200(param_2,param_3);
  local_24[0] = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_2);
  local_28 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),uVar1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),param_2,&local_28,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),uVar1,local_24,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),param_2,param_3,param_4,param_5);
  return;
}

/* Address: 0x100e98ac Size: 112 bytes */
void FUN_100e98ac(int *param_1)

{
  int iVar1;
  int local_2c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if (0 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x1a0) + (int)param_1,1,param_1[2],
                 *(int *)(local_2c + -0x88c),param_1);
  }
  return;
}

/* Address: 0x100e991c Size: 120 bytes */
void FUN_100e991c(int *param_1,long long param_2,long long param_3)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if (0 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x1a0) + (int)param_1,1,param_1[2],param_2,param_3);
  }
  return;
}

/* Address: 0x100e9994 Size: 60 bytes */
void FUN_100e9994(int *param_1,long long param_2,long long param_3)

{
  char auStack_8 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),param_2,param_3,auStack_8);
  return;
}

/* Address: 0x100e99d0 Size: 88 bytes */
int FUN_100e99d0(int *param_1,long long param_2)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  return *puVar1;
}

/* Address: 0x100e9a8c Size: 88 bytes */
void FUN_100e9a8c(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,1);
  return;
}

/* Address: 0x100e9b38 Size: 116 bytes */
void FUN_100e9b38(int *param_1,int param_2)

{
  long long uVar1;
  
  if ((param_2 != 0) &&
     (uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140)), (int)uVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x178) + (int)param_1,uVar1);
  }
  return;
}

/* Address: 0x100e9bac Size: 80 bytes */
long long FUN_100e9bac(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),1);
  }
  return uVar1;
}

/* Address: 0x100e9bfc Size: 188 bytes */
void FUN_100e9bfc(int *param_1)

{
  long long uVar1;
  int iVar2;
  char auStack_148 [328];
  
  FUN_100ebf7c(auStack_148,param_1,1);
  uVar1 = FUN_100ec060(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_100f57c8(uVar1);
    uVar1 = FUN_100ec0e8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  FUN_100ebff4(auStack_148,2);
  return;
}

/* Address: 0x100e9cb8 Size: 88 bytes */
void FUN_100e9cb8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}

/* Address: 0x100e9d10 Size: 272 bytes */
int FUN_100e9d10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_148 [82];
  
  if (param_2 != 0) {
    FUN_100ebaf8(local_148,param_1,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),iVar1);
      if (iVar2 == param_2) {
        FUN_100ebc68(local_148,2);
        return iVar1;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar1 = local_148[1];
      iVar2 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0;
}

/* Address: 0x100e9e20 Size: 80 bytes */
long long FUN_100e9e20(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
  }
  return uVar1;
}

/* Address: 0x100e9e88 Size: 40 bytes */
void FUN_100e9e88(void)

{
  FUN_100e90bc(0);
  return;
}

/* Address: 0x100e9eb0 Size: 88 bytes */
void FUN_100e9eb0(int *param_1,long long param_2,int param_3)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  *puVar1 = param_3;
  return;
}

/* Address: 0x100e9f6c Size: 272 bytes */
long long FUN_100e9f6c(int param_1,long long param_2,long long param_3,int *param_4)

{
  int iVar1;
  int local_150 [84];
  
  FUN_100ebaf8(local_150,param_1,1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  *param_4 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while( true ) {
    if (iVar1 == 0) {
      *param_4 = *(int *)(param_1 + 8) + 1;
      FUN_100ebc68(local_150,2);
      return 0;
    }
    iVar1 = FUN_10117884(*param_4,param_3);
    if (iVar1 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    *param_4 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return 1;
}

/* Address: 0x100ea07c Size: 72 bytes */
void FUN_100ea07c(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(unsigned long long)(unsigned int)param_1[2] + 1,
               param_2,1);
  return;
}

/* Address: 0x100ea0c4 Size: 96 bytes */
void FUN_100ea0c4(int *param_1,long long param_2,int param_3)

{
  int uStack00000020;
  
  uStack00000020 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,((char*)0 + 0x00000020),1);
  return;
}

/* Address: 0x100ea17c Size: 64 bytes */
void FUN_100ea17c(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c0),1,param_2);
  return;
}

/* Address: 0x100ea1bc Size: 68 bytes */
void FUN_100ea1bc(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c0),(unsigned long long)(unsigned int)param_1[2] + 1,
               param_2);
  return;
}

/* Address: 0x100ea200 Size: 56 bytes */
void FUN_100ea200(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  return;
}

/* Address: 0x100ea238 Size: 124 bytes */
long long FUN_100ea238(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),param_1[2]);
  }
  return uVar1;
}

/* Address: 0x100ea2b4 Size: 56 bytes */
void FUN_100ea2b4(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  return;
}

/* Address: 0x100ea2ec Size: 124 bytes */
long long FUN_100ea2ec(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),1);
  }
  return uVar1;
}

/* Address: 0x100ea368 Size: 112 bytes */
void FUN_100ea368(long long param_1,int param_2)

{
  int uVar1;
  
  uVar1 = FUN_10117884((int)*(int **)(param_2 + 0xc) +
                       (int)*(short *)(**(int **)(param_2 + 0xc) + 0x128),param_1);
  **(int **)(param_2 + 8) = uVar1;
  FUN_10117884(**(int **)(param_2 + 8),**(int **)(param_2 + 4));
  return;
}

/* Address: 0x100ea3d8 Size: 72 bytes */
void FUN_100ea3d8(long long param_1,int *param_2)

{
  FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0x168),*(int *)*param_2
               ,param_1);
  return;
}

/* Address: 0x100ea490 Size: 40 bytes */
void FUN_100ea490(void)

{
  FUN_100ea428(0);
  return;
}

/* Address: 0x100ea4e4 Size: 188 bytes */
void FUN_100ea4e4(int *param_1)

{
  long long uVar1;
  int iVar2;
  char auStack_148 [328];
  
  FUN_100ec170(auStack_148,param_1,1);
  uVar1 = FUN_100ec2c4(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_100ef510(uVar1);
    uVar1 = FUN_100ec34c(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  FUN_100ec1e8(auStack_148,2);
  return;
}

/* Address: 0x100ea5a0 Size: 88 bytes */
void FUN_100ea5a0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}

/* Address: 0x100ea5f8 Size: 88 bytes */
int FUN_100ea5f8(int *param_1,long long param_2)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  return *puVar1;
}

/* Address: 0x100ea6b4 Size: 88 bytes */
void FUN_100ea6b4(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,1);
  return;
}

/* Address: 0x100ea760 Size: 116 bytes */
void FUN_100ea760(int *param_1,int param_2)

{
  long long uVar1;
  
  if ((param_2 != 0) &&
     (uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x148)), (int)uVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x130) + (int)param_1,uVar1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100ea7d4(int *param_1,int param_2,int param_3) { return 0; }


























/* Address: 0x100ea860 Size: 80 bytes */
long long FUN_100ea860(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),1);
  }
  return uVar1;
}

/* Address: 0x100ea8b0 Size: 272 bytes */
int FUN_100ea8b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_148 [82];
  
  if (param_2 != 0) {
    FUN_100ebaf8(local_148,param_1,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),iVar1);
      if (iVar2 == param_2) {
        FUN_100ebc68(local_148,2);
        return iVar1;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar1 = local_148[1];
      iVar2 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100ea9c0(int *param_1,int param_2) { return 0; }

























/* Address: 0x100eaa4c Size: 64 bytes */
void FUN_100eaa4c(int *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),((char*)0 + 0x0000001c));
  return;
}

/* Address: 0x100eaab4 Size: 64 bytes */
void FUN_100eaab4(int *param_1,int *param_2,int *param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),*param_2,*param_3);
  return;
}

/* Address: 0x100eaaf4 Size: 80 bytes */
long long FUN_100eaaf4(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),param_1[2]);
  }
  return uVar1;
}

/* Address: 0x100eabb4 Size: 40 bytes */
void FUN_100eabb4(void)

{
  FUN_100eab4c(0);
  return;
}

/* Address: 0x100eac00 Size: 72 bytes */
void FUN_100eac00(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(unsigned long long)(unsigned int)param_1[2] + 1,
               param_2,1);
  return;
}

/* Address: 0x100eac48 Size: 112 bytes */
void FUN_100eac48(long long param_1,int param_2)

{
  int uVar1;
  
  uVar1 = FUN_10117884((int)*(int **)(param_2 + 0xc) +
                       (int)*(short *)(**(int **)(param_2 + 0xc) + 0x120),param_1);
  **(int **)(param_2 + 8) = uVar1;
  FUN_10117884(**(int **)(param_2 + 8),**(int **)(param_2 + 4));
  return;
}

/* Address: 0x100eacb8 Size: 72 bytes */
void FUN_100eacb8(long long param_1,int *param_2)

{
  FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0x158),*(int *)*param_2
               ,param_1);
  return;
}

/* Address: 0x100ead70 Size: 40 bytes */
void FUN_100ead70(void)

{
  FUN_100ead08(0);
  return;
}

/* Address: 0x100eadc4 Size: 88 bytes */
int FUN_100eadc4(int *param_1,long long param_2)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  return *puVar1;
}

/* Address: 0x100eae80 Size: 88 bytes */
void FUN_100eae80(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,1);
  return;
}

/* Address: 0x100eaf2c Size: 104 bytes */
void FUN_100eaf2c(int *param_1)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x148));
  if ((int)uVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x128) + (int)param_1,uVar1);
  }
  return;
}

/* Address: 0x100eaf94 Size: 80 bytes */
long long FUN_100eaf94(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),1);
  }
  return uVar1;
}

/* Address: 0x100eafe4 Size: 256 bytes */
int FUN_100eafe4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_148 [82];
  
  FUN_100ebaf8(local_148,param_1,1);
  FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
  iVar1 = local_148[1];
  iVar2 = FUN_100ebf44(local_148);
  while( true ) {
    if (iVar2 == 0) {
      FUN_100ebc68(local_148,2);
      return 0;
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),iVar1);
    if (iVar2 == param_2) break;
    FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
  }
  FUN_100ebc68(local_148,2);
  return iVar1;
}

/* Address: 0x100eb0e4 Size: 80 bytes */
long long FUN_100eb0e4(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
  }
  return uVar1;
}

/* Address: 0x100eb15c Size: 64 bytes */
void FUN_100eb15c(int *param_1,int *param_2,int *param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158),*param_2,*param_3);
  return;
}

/* Address: 0x100eb19c Size: 112 bytes */
void FUN_100eb19c(int *param_1,int param_2,int param_3)

{
  int uStack0000001c;
  int uStack00000020;
  int local_18;
  char *local_14;
  char *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (char *)((char*)0 + 0x00000020);
  local_14 = (char *)((char*)0 + 0x0000001c);
  local_c = &local_18;
  local_18 = 0;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  local_8 = param_1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),uRam1011703c,&local_14);
  return;
}

/* Address: 0x100eb20c Size: 120 bytes */
int FUN_100eb20c(int *param_1,int param_2)

{
  int iVar1;
  int uStack0000001c;
  int local_10;
  char *local_c;
  int *local_8;
  
  local_c = (char *)((char*)0 + 0x0000001c);
  uStack0000001c = param_2;
  local_8 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),uRam10117040,&local_c,
                       &local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  return local_10;
}

/* Address: 0x100eb284 Size: 64 bytes */
void FUN_100eb284(int *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),((char*)0 + 0x0000001c));
  return;
}

/* Address: 0x100eb2c4 Size: 92 bytes */
int FUN_100eb2c4(int *param_1,long long param_2,long long param_3)

{
  int iVar1;
  int local_8 [2];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),param_2,param_3,local_8);
  if (iVar1 == 0) {
    local_8[0] = 0;
  }
  return local_8[0];
}

/* Address: 0x100eb328 Size: 104 bytes */
int * FUN_100eb328(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x20),
     param_1 != (int *)0x0)) {
    FUN_100ead08(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x216));
  }
  return param_1;
}

/* Address: 0x100eb390 Size: 40 bytes */
void FUN_100eb390(void)

{
  FUN_100eb328(0);
  return;
}

/* Address: 0x100eb3b8 Size: 272 bytes */
long long FUN_100eb3b8(int param_1,long long param_2,long long param_3,int *param_4)

{
  int iVar1;
  int local_150 [84];
  
  FUN_100ebaf8(local_150,param_1,1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  *param_4 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while( true ) {
    if (iVar1 == 0) {
      *param_4 = *(int *)(param_1 + 8) + 1;
      FUN_100ebc68(local_150,2);
      return 0;
    }
    iVar1 = FUN_10117884(*param_4,param_3);
    if (iVar1 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    *param_4 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return 1;
}

/* Address: 0x100eb4c8 Size: 72 bytes */
void FUN_100eb4c8(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(unsigned long long)(unsigned int)param_1[2] + 1,
               param_2,1);
  return;
}

/* Address: 0x100eb510 Size: 88 bytes */
void FUN_100eb510(int *param_1,long long param_2,int param_3)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  *puVar1 = param_3;
  return;
}

/* Address: 0x100eb5cc Size: 96 bytes */
void FUN_100eb5cc(int *param_1,long long param_2,int param_3)

{
  int uStack00000020;
  
  uStack00000020 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,((char*)0 + 0x00000020),1);
  return;
}

/* Address: 0x100eb684 Size: 64 bytes */
void FUN_100eb684(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),1,param_2);
  return;
}

/* Address: 0x100eb6c4 Size: 68 bytes */
void FUN_100eb6c4(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),(unsigned long long)(unsigned int)param_1[2] + 1,
               param_2);
  return;
}

/* Address: 0x100eb708 Size: 56 bytes */
void FUN_100eb708(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  return;
}

/* Address: 0x100eb740 Size: 124 bytes */
long long FUN_100eb740(int *param_1)

{
  long long uVar1;
  
  if (param_1[2] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),param_1[2]);
  }
  return uVar1;
}

/* Address: 0x100eb7bc Size: 244 bytes */

void FUN_100eb7bc(void)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int uVar4;
  int *ppuVar5;
  
  uVar4 = uRam10117034;
  uVar3 = (*(int*)0x1011701c);
  uVar2 = uRam10116a90;
  uVar1 = uRam101169bc;
  ppuVar5 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116a90,*puRam1011704c,0x24,uRam10117050,uRam101169bc);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x222)),*(int *)(*(int*)((char*)ppuVar5 - 0x213)),0x24,(*(int*)((char*)ppuVar5 - 0x212)),uVar2);
  FUN_100c1c8c(uVar3,*(int *)(*(int*)((char*)ppuVar5 - 0x211)),0x20,(*(int*)((char*)ppuVar5 - 0x210)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x21d)),*(int *)(*(int*)((char*)ppuVar5 - 0x20f)),0x20,(*(int*)((char*)ppuVar5 - 0x20e)),uVar3);
  FUN_100c1c8c(uVar4,*(int *)(*(int*)((char*)ppuVar5 - 0x20d)),0x20,(*(int*)((char*)ppuVar5 - 0x20c)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x217)),*(int *)(*(int*)((char*)ppuVar5 - 0x20b)),0x20,(*(int*)((char*)ppuVar5 - 0x20a)),uVar4);
  return;
}

/* Address: 0x100eb8b0 Size: 32 bytes */
void FUN_100eb8b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x130);
    *(int *)(param_1 + 0x130) = iVar1;
    *(int *)(param_1 + 300) = param_2;
    *(int *)(iVar1 + 300) = param_1;
    *(int *)(param_2 + 0x130) = param_1;
  }
  return;
}

/* Address: 0x100eb8d0 Size: 64 bytes */
int FUN_100eb8d0(int param_1)

{
  int uVar1;
  
  if (*(int *)(param_1 + 0x130) == param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x130);
  }
  *(int *)(*(int *)(param_1 + 0x130) + 300) = *(int *)(param_1 + 300);
  *(int *)(*(int *)(param_1 + 300) + 0x130) = *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = param_1;
  *(int *)(param_1 + 300) = param_1;
  return uVar1;
}

/* Address: 0x100eba50 Size: 168 bytes */
int *
FUN_100eba50(int *param_1,long long param_2,long long param_3,long long param_4,
            char param_5)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    *param_1 = (*(int*)((char*)ppuVar1 - 0x208));
    *(short *)(param_1 + 0x46) = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    FUN_100eb91c(param_1,param_2,param_3,param_4,param_5,param_1 + 6);
  }
  return param_1;
}

/* Address: 0x100ebce8 Size: 36 bytes */
void FUN_100ebce8(void)

{
  FUN_100ebbe0();
  return;
}

/* Address: 0x100ebd0c Size: 92 bytes */
void FUN_100ebd0c(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      return;
    }
    *(int *)(param_1 + 4) = 0;
    return;
  }
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return;
  }
  *(int *)(param_1 + 4) = 0;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ebd68(int param_1,int param_2,int param_3) { }



























































/* Address: 0x100ebeb4 Size: 144 bytes */
void FUN_100ebeb4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (param_2 <= iVar1) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
    }
    if (param_2 <= *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0xc) = param_3 + *(int *)(param_1 + 0xc);
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      if (param_2 < *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = param_3 + *(int *)(param_1 + 4);
      }
    }
    else if (param_2 <= *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = param_3 + *(int *)(param_1 + 4);
    }
    iVar2 = *(int *)(param_1 + 0x130);
    if (iVar2 == *(int *)(*(int *)(param_1 + 0x10) + 4)) break;
    iVar1 = *(int *)(iVar2 + 8);
    param_1 = iVar2;
  }
  return;
}

/* Address: 0x100ebf58 Size: 36 bytes */
void FUN_100ebf58(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 8);
    return;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0xc);
  return;
}

/* Address: 0x100ebf7c Size: 120 bytes */
int * FUN_100ebf7c(int *param_1,long long param_2,char param_3)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    FUN_100ebaf8(param_1,param_2,param_3);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x207));
  }
  return param_1;
}














/* Address: 0x100ebff4 Size: 108 bytes */
void FUN_100ebff4(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10117084;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}












/* Address: 0x100ec060 Size: 136 bytes */
long long FUN_100ec060(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar1;
}
















/* Address: 0x100ec0e8 Size: 136 bytes */
long long FUN_100ec0e8(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar1;
}
















/* Address: 0x100ec254 Size: 112 bytes */
long long FUN_100ec254(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x128),param_1[1]);
  }
  return uVar1;
}

/* Address: 0x100ec3d4 Size: 120 bytes */
int * FUN_100ec3d4(int *param_1,long long param_2,char param_3)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    FUN_100ebaf8(param_1,param_2,param_3);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x205));
  }
  return param_1;
}

/* Address: 0x100ec44c Size: 108 bytes */
void FUN_100ec44c(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam1011708c;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: 0x100ec4b8 Size: 136 bytes */
long long FUN_100ec4b8(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar1;
}

/* Address: 0x100ec540 Size: 136 bytes */
long long FUN_100ec540(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar1;
}

/* Address: 0x100ec62c Size: 128 bytes */
void FUN_100ec62c(long long param_1,short param_2,long long param_3)

{
  int local_28;
  short local_24 [2];
  char auStack_20 [32];
  
  FUN_100b1d90(param_3,uRam10117090);
  FUN_10002730(param_1,param_2,local_24,&local_28,auStack_20);
  if (local_24[0] == 4) {
    FUN_100038d0(local_28,param_3);
  }
  return;
}

/* Address: 0x100ec6ac Size: 128 bytes */
void FUN_100ec6ac(long long param_1,short param_2)

{
  short local_20 [2];
  int local_1c;
  char auStack_18 [8];
  char auStack_10 [16];
  
  FUN_10002730(param_1,param_2,local_20,&local_1c,auStack_18);
  if (local_20[0] == 4) {
    FUN_10003618(local_1c,10);
    FUN_100007e0(8,auStack_10);
    FUN_10003618(local_1c,0);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100ec72c(long long param_1,long long param_2,short *param_3) { return 0; }

























































/* Address: 0x100ec8ec Size: 360 bytes */
void FUN_100ec8ec(int param_1)

{
  long long uVar1;
  unsigned int uVar2;
  short sVar3;
  int local_6c;
  char auStack_48 [24];
  int local_30;
  int *local_2c;
  short local_28 [2];
  short local_24 [2];
  short local_20;
  
  sVar3 = *(short *)(param_1 + 0xa8);
  if (0 < sVar3) {
    local_28[0] = 0;
    local_2c = (int *)0x0;
    FUN_10000660(&local_30);
    FUN_10000198(param_1);
    uVar1 = FUN_100b0574(local_24);
    FUN_10002730(param_1,sVar3,local_28,&local_2c,uVar1);
    uVar1 = FUN_100b0574(local_24);
    FUN_10003348(uVar1,0xfffffffffffffffc,0xfffffffffffffffc);
    if (local_28[0] == 4) {
      FUN_10000000(auStack_48);
      FUN_10000030();
      FUN_100031b0(3,3);
      if (*(char *)(*local_2c + 0x11) == -1) {
        FUN_10002118((unsigned long long)*(unsigned int *)(local_6c + -0xb0) + 0xb2);
      }
      uVar2 = (int)local_20 - (int)local_24[0];
      sVar3 = (short)((int)uVar2 >> 1) + (unsigned short)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 2;
      uVar1 = FUN_100b0578(local_24);
      FUN_10000738(uVar1,sVar3,sVar3);
      FUN_100016f8(auStack_48);
    }
    FUN_10000198(local_30);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100eca54(int param_1,short *param_2,short *param_3) { return 0; }























































/* Address: 0x100ecb28 Size: 104 bytes */
void FUN_100ecb28(long long param_1,long long param_2,long long param_3)

{
  int *piVar1;
  
  piVar1 = (int *)*piRam101169c4;
  if (piVar1 == (int *)0x0) {
    FUN_100eca54(param_1,param_2,param_3);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x510) + (int)piVar1,param_1,param_2);
  }
  return;
}

/* Address: 0x100ecb90 Size: 96 bytes */
long long FUN_100ecb90(long long param_1,long long param_2,long long param_3)

{
  long long uVar1;
  
  if (*piRam101169c4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x518),param_1,
                         param_2,param_3);
  }
  return uVar1;
}

/* Address: 0x100ecbf0 Size: 120 bytes */
long long FUN_100ecbf0(long long param_1,long long param_2,long long param_3,long long param_4)

{
  long long uVar1;
  
  if (*piRam101169c4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x520),param_1,
                         param_2,param_3,param_4);
  }
  return uVar1;
}

/* Address: 0x100ecc68 Size: 88 bytes */
void FUN_100ecc68(void)

{
  int *piVar1;
  
  piVar1 = (int *)*piRam101169c4;
  if (piVar1 == (int *)0x0) {
    FUN_10001b00(2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1,2);
  }
  return;
}

/* Address: 0x100eccc0 Size: 188 bytes */
void FUN_100eccc0(void)

{
  int *piVar1;
  int *piVar2;
  int *puVar3;
  int *piVar4;
  int uVar5;
  int iVar6;
  int local_34;
  
  piVar4 = piRam10117370;
  puVar3 = puRam10116a48;
  piVar2 = piRam101169c4;
  FUN_10000438(1);
  iVar6 = local_34;
  FUN_100f5500(*(int *)(local_34 + -0x80c));
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xa8) + (int)piVar1);
    iVar6 = local_34;
  }
  uVar5 = FUN_100f57c8(*puVar3);
  *puVar3 = uVar5;
  FUN_10002a78(*(int *)(iVar6 + -0xac));
  iVar6 = *piVar4;
  if (iVar6 != 0) {
    *piVar4 = *(int *)(iVar6 + 0x108);
  }
  FUN_100f55ec();
  iVar6 = FUN_100f57c8(*piVar2);
  *piVar2 = iVar6;
  return;
}

/* Address: 0x100ecd8c Size: 96 bytes */
void FUN_100ecd8c(void)

{
  int uVar1;
  int iVar2;
  long long uVar3;
  
  iVar2 = iRam10117094;
  uVar3 = FUN_10001e18();
  uVar1 = *(int *)(iVar2 + 4);
  FUN_100eccc0();
  FUN_10003240(uVar1,0);
  FUN_100017a0(uVar3);
  return;
}

/* Address: 0x100ecdec Size: 196 bytes */
long long FUN_100ecdec(int param_1,char param_2)

{
  int *piVar1;
  int *ppuVar2;
  int **local_2c;
  
  ppuVar2 = 0 /* TVect base */;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x6e) != '\0') {
      ppuVar2 = 0 /* TVect base */;
      FUN_10113f84(param_1);
    }
    if (param_2 == '\0') {
      FUN_10000348(param_1);
    }
    else {
      if (param_1 == *(int *)((*(int*)((char*)ppuVar2 - 0x2c)) + 0xca)) {
        piVar1 = *(int **)(*(int*)((char*)ppuVar2 - 0x3b7));
        if (piVar1 != (int *)0x0) {
          FUN_10117884((int)*(short *)(*piVar1 + 0x4f8) + (int)piVar1);
          ppuVar2 = local_2c;
        }
        FUN_10000198(*(int *)(*(int*)((char*)ppuVar2 - 0x26)));
      }
      FUN_10002550(param_1);
    }
  }
  return 0;
}

/* Address: 0x100eceb0 Size: 120 bytes */
void FUN_100eceb0(long long param_1,long long param_2,short *param_3)

{
  short uVar1;
  int local_3c;
  int local_18 [6];
  
  FUN_10000660(local_18);
  FUN_10000198(**(int **)(local_3c + -0x98));
  FUN_100f0788(param_1);
  uVar1 = FUN_100ef96c(param_2);
  *param_3 = uVar1;
  FUN_10000198(local_18[0]);
  return;
}

/* Address: 0x100ecf28 Size: 96 bytes */
long long FUN_100ecf28(long long param_1,short param_2)

{
  int iVar1;
  long long uVar2;
  int local_10 [4];
  
  iVar1 = FUN_10000648(param_1,local_10);
  if ((iVar1 == 0) && ((local_10[0] >> ((int)param_2 & 0x3fU) & 1U) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* Address: 0x100ee0a0 Size: 276 bytes */
int FUN_100ee0a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_148 [82];
  
  piVar2 = piRam10117834;
  FUN_100ebaf8(local_148,*piRam10117834,1);
  FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
  iVar1 = local_148[1];
  iVar3 = FUN_100ebf44(local_148);
  while( true ) {
    if (iVar3 == 0) {
      FUN_100ebc68(local_148,2);
      return 0;
    }
    piVar4 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0xe0),iVar1);
    if (*piVar4 == param_1) break;
    FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
    iVar1 = local_148[1];
    iVar3 = FUN_100ebf44(local_148);
  }
  iVar1 = piVar4[1];
  FUN_100ebc68(local_148,2);
  return iVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100ee1b4(void) { return 0; }





























/* Address: 0x100ee208 Size: 76 bytes */
void FUN_100ee208(long long param_1,unsigned char *param_2)

{
  if ((long long)(((unsigned long long)*param_2 - 1) + (unsigned long long)((unsigned long long)*param_2 != 0) << 0x20) < 0) {
    FUN_100ee1b4();
  }
  else {
    FUN_100c21d0(param_2);
  }
  return;
}

/* Address: 0x100ee254 Size: 204 bytes */
long long FUN_100ee254(unsigned char *param_1,unsigned char *param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  long long lVar4;
  long long lVar5;
  int iVar6;
  
  lVar5 = 0;
  do {
    sVar3 = (short)lVar5 + 1;
    lVar5 = (long long)sVar3;
    iVar6 = 1;
    lVar4 = lVar5;
    if (*param_1 != 0) {
      do {
        sVar2 = sVar3 + (short)iVar6;
        if ((param_2[(short)(sVar2 + -1)] != param_1[iVar6]) ||
           (iVar1 = FUN_10001350(param_2,sVar2), iVar1 != 0)) {
          lVar4 = 0;
          break;
        }
        sVar2 = (short)iVar6 + 1;
        iVar6 = (int)sVar2;
      } while (sVar2 <= (short)(unsigned short)*param_1);
    }
    if ((0 < (int)lVar4) || ((int)(((unsigned int)*param_2 - (unsigned int)*param_1) + 1) <= (int)sVar3)) {
      return lVar4;
    }
  } while( true );
}

/* Address: 0x100ee320 Size: 296 bytes */
unsigned long long FUN_100ee320(unsigned char *param_1,short *param_2,short *param_3)

{
  int *ppuVar1;
  long long uVar2;
  char auStack_218 [256];
  char auStack_118 [280];
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100b19f4(auStack_118,(unsigned long long)uRam10117090 + 0x70);
  FUN_100b19f4(auStack_218,ZEXT48((*(int*)((char*)ppuVar1 - 0x204))) + 0x74);
  if ((long long)(((unsigned long long)*param_1 - 1) + (unsigned long long)((unsigned long long)*param_1 != 0) << 0x20) < 0) {
    *param_2 = 1;
    *param_3 = 0;
  }
  else {
    uVar2 = FUN_100ee254(auStack_118,param_1);
    *param_2 = (short)uVar2;
    if (0 < (int)uVar2) {
      FUN_100b1c88(param_1,uVar2,3);
      uVar2 = FUN_100ee254(auStack_218,param_1);
      if ((int)uVar2 == 0) {
        *param_3 = *param_2 + -1;
      }
      else {
        FUN_100b1c88(param_1,uVar2,3);
        *param_3 = ((unsigned short)*param_1 - (short)uVar2) + *param_2;
      }
    }
  }
  return ((-1 - (long long)*param_2) + (unsigned long long)((long long)*param_2 == 0) << 0x20) >> 0x3f;
}

/* Address: 0x100ee448 Size: 320 bytes */
int FUN_100ee448(int param_1)

{
  int *piVar1;
  int *piVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int local_148 [82];
  
  piVar2 = piRam10117834;
  if (param_1 != 0) {
    FUN_100ebaf8(local_148,*piRam10117834,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar4 = local_148[1];
    iVar5 = FUN_100ebf44(local_148);
    while (iVar5 != 0) {
      piVar1 = (int *)*piVar2;
      iVar5 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0),iVar4);
      if (*(int *)(iVar5 + 4) == param_1) {
        piVar2 = (int *)*piVar2;
        puVar6 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xe0),iVar4);
        uVar3 = *puVar6;
        FUN_100ebc68(local_148,2);
        return uVar3;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar4 = local_148[1];
      iVar5 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0x20202020;
}

/* Address: 0x100ee588 Size: 156 bytes */
long long FUN_100ee588(unsigned char *param_1,unsigned char *param_2,short param_3,short param_4)

{
  long long uVar1;
  
  if (param_3 < 1) {
    uVar1 = 0;
  }
  else {
    if (param_4 == 0) {
      FUN_100012d8(param_2,param_1,(unsigned long long)*param_2 + 1);
    }
    else {
      FUN_100b1c88(param_1,param_3,(unsigned short)*param_1 - param_4);
      FUN_100b1900(param_1,param_2,param_3,0xff);
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x100ee624 Size: 36 bytes */
void FUN_100ee624(void)

{
  FUN_100f56e4();
  return;
}

/* Address: 0x100ee648 Size: 4 bytes */
void FUN_100ee648(void)

{
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100ee64c(int param_1) { return 0; }



















































































/* Address: 0x100ee720 Size: 92 bytes */
void FUN_100ee720(int param_1)

{
  int uVar1;
  
  if (*piRam101170b4 == 0) {
    *piRam101170b4 = *(int *)(param_1 + 0x114);
    *(int *)(param_1 + 0x114) = 0;
  }
  else {
    uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x114));
    *(int *)(param_1 + 0x114) = uVar1;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ee77c(unsigned long long param_1,unsigned long long param_2) { }























/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ee7e8(void) { }











/* Address: stubbed - had compile errors on 64-bit */
unsigned char * FUN_100ee844(unsigned char *param_1,unsigned char param_2) { return 0; }
























/* Address: 0x100ee8e8 Size: 136 bytes */
void FUN_100ee8e8(char *param_1,unsigned long long param_2)

{
  if (param_1 != (char *)0x0) {
    if ((*(char *)(iRam1011788c + 0x27) != '\0') && (param_1[1] != '\0')) {
      FUN_10001b48(*param_1 == '\0');
    }
    if ((param_1 != (char *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}













/* Address: 0x100ee970 Size: 120 bytes */
int * FUN_100ee970(int *param_1)

{
  int iVar1;
  
  iVar1 = iRam101170c0;
  if ((param_1 != (int *)0x0) || (param_1 = (int *)FUN_100f56e4(0xc), param_1 != (int *)0x0)) {
    *param_1 = iVar1;
    *(char *)(param_1 + 2) = 1;
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x10));
  }
  return param_1;
}

/* Address: 0x100ee9e8 Size: 120 bytes */
int * FUN_100ee9e8(int *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = iRam101170c0;
  if ((param_1 != (int *)0x0) || (param_1 = (int *)FUN_100f56e4(0xc), param_1 != (int *)0x0)) {
    *param_1 = iVar1;
    *(char *)(param_1 + 2) = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x10));
  }
  return param_1;
}

/* Address: 0x100eea60 Size: 20 bytes */
int FUN_100eea60(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}

/* Address: 0x100eea74 Size: 56 bytes */
void FUN_100eea74(long long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x90);
  if ((iVar1 != 0) && (iVar1 == *piRam10117808)) {
    do {
      iVar1 = *(int *)(iVar1 + 0x90);
      if (iVar1 == 0) {
        return;
      }
    } while (iVar1 == *piRam10117808);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
unsigned long long FUN_100eeaac(long long param_1) { return 0; }



























/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100eeb0c(long long param_1) { return 0; }





























/* Address: 0x100eeb9c Size: 88 bytes */
void FUN_100eeb9c(int param_1)

{
  int uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_100eeb0c(param_1);
    *(int *)(param_1 + 4) = uVar1;
  }
  else {
    uVar1 = FUN_100eeaac(param_1);
    *(int *)(param_1 + 4) = uVar1;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100eebf4(long long param_1,int param_2) { return 0; }





































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100eec88(int param_1) { }

































/* FUN_100eecf8 defined elsewhere */


/* Address: stubbed - had compile errors on 64-bit */
void FUN_100eed08(long long param_1,int param_2,unsigned char param_3) { }













































/* Address: 0x100eedb4 Size: 328 bytes */
void FUN_100eedb4(short *param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  int *ppuVar2;
  short sVar5;
  long long uVar3;
  long long uVar4;
  unsigned int uVar6;
  int *piVar7;
  int local_38;
  int local_34;
  short local_30;
  short local_2e;
  short local_28;
  short local_26;
  
  ppuVar2 = 0 /* TVect base */;
  piVar7 = &local_38;
  FUN_100b08d4(&local_30,param_1);
  FUN_100b08d4(&local_28,ZEXT48((*(int*)((char*)ppuVar2 - 0x2c))) + 0x56);
  sVar5 = FUN_10000f00();
  local_28 = local_28 - sVar5;
  if (param_2 != '\0') {
    uVar6 = (int)local_26 - (int)local_2e;
    param_1[1] = (short)((int)uVar6 >> 1) + (unsigned short)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  }
  if (param_3 != '\0') {
    if (param_4 == '\0') {
      uVar6 = (int)local_28 - (int)local_30;
      *param_1 = (short)((int)uVar6 >> 1) + (unsigned short)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    }
    else {
      local_34 = (int)(short)(((int)local_28 - (int)local_30) / 5);
      local_38 = 10;
      if (10 < local_34) {
        piVar7 = &local_34;
      }
      iVar1 = *piVar7;
      sVar5 = FUN_10000f00();
      *param_1 = (short)iVar1 + sVar5;
    }
  }
  uVar3 = FUN_100b057c(param_1,0);
  uVar4 = FUN_100b057c(param_1,1);
  FUN_100b039c(uVar4,uVar3,&local_30);
  return;
}

/* Address: 0x100eeefc Size: 28 bytes */
long long FUN_100eeefc(unsigned short param_1)

{
  if ((param_1 & 0x800) == 0) {
    return 0;
  }
  return 1;
}

/* Address: 0x100eef6c Size: 40 bytes */
void FUN_100eef6c(short *param_1,short param_2,short param_3,short param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

/* Address: 0x100eef94 Size: 96 bytes */
long long FUN_100eef94(void)

{
  int iVar2;
  int iVar3;
  long long uVar1;
  
  iVar2 = FUN_100003d8(0xffffffffffffaa6e,1);
  iVar3 = FUN_100003d8(0xffffffffffffa86e,1);
  if (iVar3 == iVar2) {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}

/* Address: 0x100eeff4 Size: 148 bytes */
int FUN_100eeff4(unsigned short param_1)

{
  long long uVar1;
  short sVar4;
  long long lVar2;
  long long lVar3;
  
  uVar1 = FUN_100eeefc(param_1);
  if ((int)uVar1 == 1) {
    param_1 = param_1 & 0x7ff;
    sVar4 = FUN_100eef94();
    if (sVar4 <= (short)param_1) {
      param_1 = 0xa89f;
    }
  }
  lVar2 = FUN_100003d8(param_1,uVar1);
  lVar3 = FUN_100003d8(0xffffffffffffa89f,1);
  return lVar2 != lVar3;
}

/* Address: 0x100ef0e4 Size: 168 bytes */

long long FUN_100ef0e4(int param_1)

{
  long long lVar1;
  short sVar2;
  char local_20 [32];
  
  sVar2 = 0;
  do {
    sVar2 = sVar2 + 1;
    local_20[0] = *(char *)(param_1 + sVar2);
    lVar1 = FUN_10001350(local_20,0);
  } while (3 < (lVar1 + 1U & 0xffffffff));
  return lVar1;
}
















/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ef228(long long param_1,long long param_2) { }











/* FUN_100ef284 defined elsewhere */


/* Address: 0x100ef2bc Size: 60 bytes */
int FUN_100ef2bc(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    return false;
  }
  if (((unsigned int)param_1 & 1) == 1) {
    return false;
  }
  return (*param_1 & 1) == 0;
}

/* Address: 0x100ef330 Size: 92 bytes */
long long FUN_100ef330(int *param_1)

{
  int *puVar1;
  int iVar2;
  
  iVar2 = FUN_10001590();
  puVar1 = *(int **)(iVar2 + 8);
  while( true ) {
    if (puVar1 == (int *)0x0) {
      return 0;
    }
    if (puVar1 == param_1) break;
    puVar1 = (int *)*puVar1;
  }
  return 1;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100ef38c(unsigned int *param_1) { return 0; }























































































/* Address: 0x100ef548 Size: 56 bytes */
long long FUN_100ef548(int param_1)

{
  if (param_1 != 0) {
    FUN_100019c8();
  }
  return 0;
}

/* Address: 0x100ef5b8 Size: 56 bytes */
long long FUN_100ef5b8(int param_1)

{
  if (param_1 != 0) {
    FUN_10001a70();
  }
  return 0;
}








/* Address: 0x100ef628 Size: 48 bytes */
void FUN_100ef628(short param_1)

{
  if (param_1 == 0) {
    FUN_10002220();
  }
  return;
}

/* Address: 0x100ef658 Size: 104 bytes */
void FUN_100ef658(long long param_1)

{
  unsigned int *puVar2;
  long long uVar1;
  
  puVar2 = (unsigned int *)FUN_10001170();
  FUN_10003150(param_1,(unsigned long long)*puVar2 + 0x22);
  uVar1 = FUN_100016b0();
  FUN_10003060(uVar1,param_1,param_1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
short FUN_100ef6e4(unsigned char *param_1) { return 0; }
















































/* Address: 0x100ef96c Size: 76 bytes */
short FUN_100ef96c(short *param_1)

{
  FUN_10001b18(param_1);
  return *param_1 + param_1[1] + param_1[3];
}






/* Address: 0x100efab0 Size: 80 bytes */
unsigned long long FUN_100efab0(void)

{
  unsigned long long uVar1;
  int iVar2;
  
  uVar1 = FUN_10000360();
  iVar2 = FUN_10002b20();
  if (iVar2 == 0) {
    uVar1 = uVar1 & 0x80;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100efb00 Size: 96 bytes */
int FUN_100efb00(short param_1)

{
  unsigned char abStack_18 [24];
  
  FUN_10003570(abStack_18);
  return ((unsigned int)abStack_18[(int)param_1 >> 3] & 1 << ((int)param_1 & 7U)) != 0;
}

/* Address: 0x100efb60 Size: 36 bytes */
void FUN_100efb60(void)

{
  FUN_100efb00(0x37);
  return;
}

/* Address: 0x100efb84 Size: 36 bytes */
void FUN_100efb84(void)

{
  FUN_100efb00(0x3b);
  return;
}

/* Address: 0x100efba8 Size: 36 bytes */
void FUN_100efba8(void)

{
  FUN_100efb00(0x3a);
  return;
}

/* Address: 0x100efbcc Size: 36 bytes */
void FUN_100efbcc(void)

{
  FUN_100efb00(0x38);
  return;
}

/* Address: 0x100efbf0 Size: 36 bytes */
void FUN_100efbf0(void)

{
  FUN_10003690();
  return;
}

/* Address: 0x100efc14 Size: 100 bytes */
int FUN_100efc14(long long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100b08a4(param_1,1);
  iVar2 = FUN_100b08a4(param_1,0);
  return iVar2 < iVar1;
}

/* Address: 0x100efcc0 Size: 16 bytes */
int FUN_100efcc0(int param_1,int param_2)

{
  return (param_1 + param_2 + -1) / param_2;
}

/* Address: 0x100efcd4 Size: 252 bytes */
void FUN_100efcd4(long long param_1,short param_2)

{
  int *piVar1;
  long long uVar2;
  long long uVar3;
  int iVar6;
  long long lVar4;
  long long lVar5;
  int uVar7;
  int local_34;
  
  piVar1 = piRam10115e14;
  uVar2 = FUN_100b0578(param_1);
  uVar3 = FUN_100b0578(param_1);
  iVar6 = FUN_10000480(uVar3,uVar2);
  *piVar1 = iVar6;
  if (iVar6 != 0) {
    piVar1 = (int *)*piVar1;
    **(int **)(local_34 + -0x1a88) = *(int *)(*piVar1 + 0x26);
    **(int **)(local_34 + -0x378) = *(int *)(*piVar1 + 0x3e);
    lVar4 = FUN_10001338(((long long)param_2 + 7U & 0xfffffff8) + 0x148);
    if ((int)lVar4 != 0) {
      lVar5 = FUN_10002a60(lVar4);
      FUN_10003120(0,2,lVar4 + lVar5,lVar4);
      uVar7 = FUN_10000948((long long)param_2);
      **(int **)(local_34 + -0x1a84) = uVar7;
      FUN_10001590();
      FUN_10002fb8();
    }
  }
  return;
}

/* Address: 0x100efdd0 Size: 988 bytes */
void FUN_100efdd0(long long param_1,long long param_2,int *param_3,short param_4,
                 char param_5,long long param_6,char param_7,char param_8)

{
  int *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short uVar9;
  long long uVar6;
  int iVar8;
  long long uVar7;
  int *piVar10;
  long long uVar11;
  char *puVar12;
  int uVar13;
  char in_stack_0000003b;
  int local_d4;
  int local_b0;
  short local_ac [4];
  char auStack_a4 [8];
  char auStack_9c [8];
  int local_94;
  int local_4c [19];
  
  iVar4 = iRam101177f0;
  piVar3 = piRam10115e1c;
  piVar2 = piRam10115e14;
  piVar10 = &local_b0;
  puVar12 = auStack_9c;
  FUN_100ee844(auStack_a4,in_stack_0000003b);
  uVar11 = 0;
  if ((*piVar2 == 0) && (FUN_100efcd4(param_3,0x100), *piVar2 == 0)) {
    uVar11 = FUN_100b0578(param_3);
    FUN_100036d8(param_1,param_2,uVar11,param_4);
    FUN_100ee8e8(auStack_a4,2);
  }
  else {
    uVar9 = FUN_100ef96c(local_ac);
    uVar6 = FUN_100b0578(param_3);
    FUN_10000e70((unsigned long long)**(unsigned int **)(*(int *)(iVar4 + 0xca) + 0x1c) + 2,uVar6,
                 (unsigned long long)*(unsigned int *)*piVar2 + 8);
    puVar1 = *(int **)*piVar2;
    uVar13 = param_3[1];
    *puVar1 = *param_3;
    puVar1[1] = uVar13;
    if (param_8 == '\0') {
      *(short *)(*(int *)*piVar2 + 2) = *(short *)(*(int *)*piVar2 + 2) + -1;
      *(short *)(*(int *)*piVar2 + 6) = *(short *)(*(int *)*piVar2 + 6) + 1;
    }
    *(int *)(*(int *)*piVar2 + 0x52) = *(int *)(iVar4 + 0xca);
    *(short *)(*(int *)*piVar2 + 0x50) = *(short *)(*(int *)(iVar4 + 0xca) + 0x4a);
    *(short *)(*(int *)*piVar2 + 0x4a) = *(short *)(*(int *)(iVar4 + 0xca) + 0x44);
    *(char *)(*(int *)*piVar2 + 0x4c) = *(char *)(*(int *)(iVar4 + 0xca) + 0x46);
    *(short *)(*(int *)*piVar2 + 0x1a) = local_ac[0];
    *(short *)(*(int *)*piVar2 + 0x18) = uVar9;
    *(short *)(*(int *)*piVar2 + 0x3a) = param_4;
    if (param_5 == '\0') {
      *(short *)(*(int *)*piVar2 + 0x48) = 0xffff;
    }
    else {
      *(short *)(*(int *)*piVar2 + 0x48) = 0;
    }
    *(int *)(*(int *)*piVar2 + 0x26) = **(int **)(local_d4 + -0x1a88);
    iVar5 = local_d4;
    if ((int)param_6 != 0) {
      uVar11 = FUN_10000a98(param_6,0x29c82,1);
      FUN_100db26c(uVar11);
      *(int *)(*(int *)*piVar2 + 0x26) = (int)uVar11;
    }
    local_b0 = (int)param_2;
    if (*piVar3 != 0) {
      if (local_b0 < 0x101) {
        *(int *)(*(int *)*piVar2 + 0x3e) = *piVar3;
      }
      else {
        *(int *)(*(int *)*piVar2 + 0x3e) = **(int **)(iVar5 + -0x378);
      }
    }
    local_4c[0] = 32000;
    if (31999 < local_b0) {
      piVar10 = local_4c;
    }
    FUN_100030d8(param_1,*piVar10,*piVar2);
    if (param_7 == '\0') {
      iVar5 = *(int *)(*(int *)(iVar4 + 0xca) + 0x68);
      uVar6 = FUN_10000a98(*(int *)(local_d4 + -0x1a80),0x340,1);
      FUN_100db26c(uVar6);
      uVar13 = (int)uVar6;
      if (iVar5 == 0) {
        iVar8 = FUN_100efa80(*(int *)(iVar4 + 0xca));
        local_94 = uVar13;
        if (iVar8 == 0) {
          FUN_10002e98(puVar12);
          *(char **)(*(int *)(iVar4 + 0xca) + 0x68) = puVar12;
        }
        else {
          FUN_10002820(puVar12);
          *(char **)(*(int *)(iVar4 + 0xca) + 0x68) = puVar12;
        }
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar4 + 0xca) + 0x68);
        puVar12 = *(char **)(iVar8 + 8);
        *(int *)(iVar8 + 8) = uVar13;
      }
      uVar7 = FUN_100b0578(param_3);
      FUN_100027c0(uVar7,*piVar2);
      if (iVar5 == 0) {
        *(int *)(*(int *)(iVar4 + 0xca) + 0x68) = 0;
      }
      else {
        *(char **)(*(int *)(*(int *)(iVar4 + 0xca) + 0x68) + 8) = puVar12;
      }
      FUN_100ef5f0(uVar6);
    }
    else {
      uVar6 = FUN_100b0578(param_3);
      FUN_100027c0(uVar6,*piVar2);
    }
    FUN_100ef5f0(uVar11);
    FUN_100ee8e8(auStack_a4,2);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f01ac(long long param_1,short *param_2,short param_3,char param_4) { }













































































/* FUN_100f0334 defined elsewhere */


/* Address: 0x100f038c Size: 92 bytes */
short FUN_100f038c(short param_1)

{
  short sVar1;
  
  sVar1 = FUN_10002160(0x16);
  if (sVar1 != param_1) {
    FUN_10002ee0(param_1);
  }
  return sVar1;
}

/* Address: 0x100f083c Size: 40 bytes */
void FUN_100f083c(short *param_1,short param_2,char param_3,short param_4,
                 int *param_5)

{
  unsigned int uVar1;
  
  *param_1 = param_2;
  *(char *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  uVar1 = param_5[1];
  *(int *)(param_1 + 3) = *param_5;
  *(unsigned int *)(param_1 + 5) = uVar1 & 0xffff0000;
  return;
}

/* Address: 0x100f0864 Size: 64 bytes */
void FUN_100f0864(char param_1)

{
  if (param_1 == '\0') {
    FUN_100020a0(0);
  }
  else {
    FUN_100020a0(0xff);
  }
  return;
}

/* Address: 0x100f08a4 Size: 80 bytes */
void FUN_100f08a4(void)

{
  char local_8 [8];
  
  local_8[0] = FUN_10002280();
  FUN_10002e08(local_8,0);
  FUN_100031e0(local_8[0]);
  return;
}










/* Address: 0x100f08f4 Size: 52 bytes */
int FUN_100f08f4(long long param_1,long long param_2,short param_3)

{
  long long lVar1;
  
  lVar1 = FUN_10002490(param_1,param_2,param_3);
  return lVar1 == 0;
}

/* Address: 0x100f0928 Size: 220 bytes */
void FUN_100f0928(void)

{
  short *puVar1;
  short *puVar2;
  int *puVar3;
  int *puVar4;
  short *puVar5;
  short *puVar6;
  short *puVar7;
  short *puVar8;
  short *puVar9;
  
  puVar9 = puRam101170cc;
  puVar8 = puRam101170c8;
  puVar7 = puRam101170c4;
  puVar6 = puRam10116da0;
  puVar5 = puRam10116c68;
  puVar4 = puRam10116c3c;
  puVar3 = puRam10116bc0;
  puVar2 = puRam10116a40;
  puVar1 = puRam10116070;
  *puRam10116da0 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_100b19f4(uRam10116a54,(unsigned long long)uRam101170bc + 0x464);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar5 = 0xffff;
  puVar5[1] = 0xffff;
  puVar5[2] = 0xffff;
  *puVar9 = 0xffff;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar8 = 0;
  puVar8[1] = 0xffff;
  puVar8[2] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0xffff;
  return;
}

/* Address: 0x100f0a04 Size: 72 bytes */
void FUN_100f0a04(int param_1,long long param_2)

{
  int uStack00000018;
  
  uStack00000018 = param_1;
  FUN_100020b8(param_2,0,0,0,((char*)0 + 0x00000018),4);
  FUN_100db1ec();
  return;
}

/* Address: 0x100f0a4c Size: 260 bytes */
void FUN_100f0a4c(long long param_1,long long param_2)

{
  char uVar4;
  short sVar3;
  long long uVar1;
  int iVar2;
  short sVar5;
  char auStack_130 [256];
  char auStack_30 [4];
  short local_2c [22];
  
  uVar4 = FUN_10000420();
  FUN_10000438(0);
  sVar3 = FUN_10001c68(param_1);
  sVar5 = 1;
  if (0 < sVar3) {
    do {
      uVar1 = FUN_10001c80(param_1,sVar5);
      FUN_10001758(uVar1,local_2c,auStack_30,auStack_130);
      FUN_100f0864(0);
      uVar1 = FUN_10001728(param_1,local_2c[0]);
      FUN_100f0864(1);
      if (((int)uVar1 != 0) && (iVar2 = FUN_10000468(uVar1), iVar2 != 1)) {
        FUN_100f0a04(uVar1,param_2);
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 <= sVar3);
  }
  FUN_10000438(uVar4);
  return;
}

/* Address: 0x100f0b50 Size: 132 bytes */
long long FUN_100f0b50(int *param_1)

{
  long long uVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_10002b80();
    if ((param_1 == piVar2) || (piVar2 = (int *)FUN_10002b98(), param_1 == piVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* Address: 0x100f0bd4 Size: 104 bytes */
void FUN_100f0bd4(int *param_1,long long param_2,long long param_3)

{
  long long lVar1;
  short sVar2;
  
  param_1 = (int *)*param_1;
  lVar1 = FUN_10001c20();
  for (sVar2 = (short)((unsigned long long)(lVar1 << 0x20) >> 0x22); 0 < sVar2; sVar2 = sVar2 + -1) {
    FUN_10117884(*param_1,param_3);
    param_1 = param_1 + 1;
  }
  return;
}

/* Address: 0x100f0c3c Size: 140 bytes */
void FUN_100f0c3c(long long param_1,long long param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if (*piRam10117844 != 0) {
    ppuVar1 = 0 /* TVect base */;
    FUN_100f0bd4(*piRam10117844,param_1,param_2);
  }
  FUN_100f0bd4(*(int *)(*(int*)((char*)ppuVar1 - 0x16)),param_1,param_2);
  if (*(int *)(*(int*)((char*)ppuVar1 - 0x15)) != 0) {
    FUN_100f0bd4(*(int *)(*(int*)((char*)ppuVar1 - 0x15)),param_1,param_2);
  }
  return;
}

/* Address: 0x100f0cc8 Size: 116 bytes */
int FUN_100f0cc8(char param_1,int *param_2)

{
  char uStack0000001b;
  int local_4c;
  int local_28;
  int local_24;
  char *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  local_20 = ((char*)0 + 0x0000001b);
  local_14 = &local_28;
  local_18 = &local_24;
  *param_2 = 0;
  local_24 = 0;
  uStack0000001b = param_1;
  local_1c = param_2;
  local_28 = FUN_10001590();
  FUN_100f0c3c(*(int *)(local_4c + -0x7cc),&local_20);
  return local_24;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f0e74(void) { }




















/* Address: stubbed - had compile errors on 64-bit */
char FUN_100f0eec(void) { return 0; }









/* Address: 0x100f0f18 Size: 96 bytes */
void FUN_100f0f18(unsigned long long param_1)

{
  long long lVar1;
  int iVar2;
  
  if ((param_1 & 1) != 0) {
    param_1 = param_1 + 1;
  }
  lVar1 = FUN_10000498();
  iVar2 = FUN_100004b0();
  if ((int)(lVar1 - param_1) < iVar2) {
    FUN_100004c8(lVar1 - param_1);
  }
  return;
}

/* Address: 0x100f1228 Size: 60 bytes */
void FUN_100f1228(void)

{
  int iVar1;
  
  iVar1 = FUN_100f0eec();
  if (iVar1 == 0) {
    FUN_100db158(0xffffffffffffff94,0);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f12e4(int *param_1,int *param_2) { }







/* Address: stubbed - had compile errors on 64-bit */
int FUN_100f1300(void) { return 0; }

























/* Address: 0x100f16a0 Size: 88 bytes */
void FUN_100f16a0(long long param_1)

{
  char uVar1;
  int local_2c;
  
  uVar1 = FUN_100f1574(1);
  FUN_10002b50(param_1);
  **(char **)(local_2c + -0x3c) = uVar1;
  FUN_100db2f4();
  return;
}

/* Address: 0x100f16f8 Size: 96 bytes */
void FUN_100f16f8(long long param_1,long long param_2)

{
  char uVar1;
  int local_34;
  
  uVar1 = FUN_100f1574(1);
  FUN_10000ab0(param_1,param_2);
  **(char **)(local_34 + -0x3c) = uVar1;
  FUN_100db1ec();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f1758(int *param_1,int *param_2) { }











































/* Address: 0x100f1860 Size: 132 bytes */
long long FUN_100f1860(long long param_1,int *param_2)

{
  short *psVar2;
  long long uVar1;
  
  psVar2 = (short *)FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0xe0),
                                 param_1);
  if (*(short *)*param_2 < *psVar2) {
    uVar1 = 0xffffffffffffffff;
  }
  else if (*psVar2 < *(short *)*param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100f18ec Size: 84 bytes */
int * FUN_100f18ec(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100d8824(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x1ee));
  }
  return puVar2;
}

/* Address: 0x100f1940 Size: 44 bytes */
void FUN_100f1940(long long param_1)

{
  FUN_100d88b4(param_1,0,4);
  return;
}

/* Address: 0x100f199c Size: 80 bytes */
void FUN_100f199c(int *param_1,short param_2,short param_3)

{
  short local_8;
  short local_6;
  
  local_8 = param_2;
  local_6 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_8);
  return;
}

/* Address: 0x100f19ec Size: 148 bytes */
short FUN_100f19ec(int *param_1,short param_2)

{
  int iVar1;
  short uVar2;
  short uStack0000001e;
  int local_18;
  char *local_14;
  int *local_10;
  
  local_14 = (char *)((char*)0 + 0x0000001e);
  uStack0000001e = param_2;
  local_10 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),uRam101170ec,&local_14,
                       &local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_18);
    uVar2 = *(short *)(iVar1 + 2);
  }
  return uVar2;
}

/* Address: 0x100f1a88 Size: 84 bytes */
int * FUN_100f1a88(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100d8824(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x1eb));
  }
  return puVar2;
}

/* Address: 0x100f1adc Size: 44 bytes */
void FUN_100f1adc(long long param_1)

{
  FUN_100d88b4(param_1,0,8);
  return;
}

/* Address: 0x100f1b38 Size: 132 bytes */
long long FUN_100f1b38(long long param_1,int *param_2)

{
  int *piVar2;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0xe0),param_1)
  ;
  if (*(int *)*param_2 < *piVar2) {
    uVar1 = 0xffffffffffffffff;
  }
  else if (*piVar2 < *(int *)*param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f1bbc(int *param_1,int param_2,short *param_3,unsigned short *param_4) { }


















































/* Address: 0x100f1d2c Size: 224 bytes */
unsigned long long FUN_100f1d2c(int *param_1,short param_2,short param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned long long uVar3;
  long long lVar4;
  
  if ((long long)param_3 < 0) {
    uVar3 = (unsigned long long)param_3;
  }
  else {
    if (0 < param_3) {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
      lVar4 = 1;
      if (0 < iVar1) {
        do {
          puVar2 = (unsigned int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),lVar4);
          if ((param_2 == *(short *)(puVar2 + 1)) && (param_3 == *(short *)((int)puVar2 + 6))) {
            return (unsigned long long)*puVar2;
          }
          lVar4 = lVar4 + 1;
          iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
        } while ((int)lVar4 <= iVar1);
      }
    }
    uVar3 = ((long long)param_2 & 0xffffffU) << 8 | (long long)param_3;
  }
  return -uVar3;
}

/* Address: 0x100f1e0c Size: 96 bytes */
void FUN_100f1e0c(int *param_1,int param_2,short param_3,short param_4)

{
  int local_8;
  short local_4;
  short local_2;
  
  if (0 < param_2) {
    local_8 = param_2;
    local_4 = param_3;
    local_2 = param_4;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_8);
  }
  return;
}

/* Address: 0x100f1e6c Size: 272 bytes */
void FUN_100f1e6c(int *param_1,int param_2,short param_3,short param_4)

{
  int iVar1;
  long long lVar2;
  int local_20;
  short local_1c;
  short local_1a;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  lVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),lVar2,&local_20,1);
      if (local_1c == param_3) {
        if (param_4 <= local_1a) {
          local_1a = local_1a + 1;
          FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,lVar2,&local_20,1);
        }
      }
      lVar2 = lVar2 + 1;
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
    } while ((int)lVar2 <= iVar1);
  }
  local_20 = param_2;
  local_1c = param_3;
  local_1a = param_4;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_20);
  return;
}

/* Address: 0x100f1f7c Size: 336 bytes */
void FUN_100f1f7c(int *param_1,long long param_2)

{
  int iVar1;
  long long lVar2;
  short local_20;
  short local_1e;
  char auStack_1c [4];
  short local_18;
  short local_16;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),param_2,&local_1e,&local_20);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  lVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),lVar2,auStack_1c,1);
      if (local_18 == local_1e) {
        if (local_20 < local_16) {
          local_16 = local_16 + -1;
          FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,lVar2,auStack_1c,1);
        }
        else if (local_18 == local_1e) {
          if (local_16 == local_20) {
            FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),lVar2,1);
          }
        }
      }
      lVar2 = lVar2 + 1;
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
    } while ((int)lVar2 <= iVar1);
  }
  return;
}

/* Address: 0x100f210c Size: 84 bytes */
int * FUN_100f210c(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100ea428(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x1e8));
  }
  return puVar2;
}

/* Address: 0x100f2160 Size: 36 bytes */
void FUN_100f2160(void)

{
  FUN_100ea4b8();
  return;
}

/* Address: 0x100f2184 Size: 72 bytes */
void FUN_100f2184(int *param_1,short param_2)

{
  short uStack0000001e;
  char auStack_8 [8];
  
  uStack0000001e = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),uRam10117104,((char*)0 + 0x0000001e),
               auStack_8);
  return;
}

/* Address: 0x100f2204 Size: 16 bytes */
void FUN_100f2204(void)

{
  *puRam10117108 = 1;
  return;
}

/* Address: 0x100f2270 Size: 216 bytes */
short FUN_100f2270(short param_1)

{
  int *puVar1;
  long long uVar2;
  int iVar3;
  int local_14c;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar2 = FUN_100014b8();
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    FUN_10000318(**(short **)(local_14c + -0xb4));
    param_1 = FUN_10001728(0x4d454e55,param_1);
    *puVar1 = local_20;
  }
  else {
    FUN_10000318(uVar2);
    FUN_100db158(local_28,local_24);
  }
  FUN_10000318(uVar2);
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100f2348(short param_1) { return 0; }












/* Address: 0x100f23ac Size: 152 bytes */
void FUN_100f23ac(long long param_1,short param_2,short param_3)

{
  int *puVar1;
  
  FUN_10002088(param_1,param_3);
  puVar1 = (int *)FUN_10001728(0x6d637462,param_2);
  if (puVar1 != (int *)0x0) {
    FUN_10002598(puVar1);
    FUN_10002f58(*(short *)*puVar1,(short *)*puVar1 + 1);
    FUN_10002ad8(puVar1);
    FUN_10001c98(puVar1);
  }
  return;
}

/* Address: 0x100f2454 Size: 52 bytes */
void FUN_100f2454(void)

{
  FUN_100f2204();
  FUN_10003708();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f24a8(short param_1,char param_2) { }





































/* Address: 0x100f25a8 Size: 16 bytes */
void FUN_100f25a8(void)

{
  *puRam10117108 = 0;
  return;
}

/* Address: 0x100f25b8 Size: 12 bytes */
char FUN_100f25b8(void)

{
  return *puRam10117108;
}

/* Address: 0x100f25c4 Size: 16 bytes */
void FUN_100f25c4(void)

{
  *puRam10117110 = 0;
  return;
}

/* Address: 0x100f25d4 Size: 12 bytes */
char FUN_100f25d4(void)

{
  return *puRam10117110;
}

/* Address: 0x100f2680 Size: 132 bytes */
int FUN_100f2680(long long param_1)

{
  int *piVar1;
  int bVar2;
  short local_8;
  char auStack_6 [6];
  
  piVar1 = (int *)FUN_100f262c(param_1,auStack_6,&local_8);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else if ((local_8 < 1) || (0x1f < local_8)) {
    bVar2 = true;
  }
  else {
    bVar2 = (*(int *)(*piVar1 + 10) >> ((int)local_8 & 0x3fU) & 1U) != 0;
  }
  return bVar2;
}

/* Address: 0x100f2704 Size: 84 bytes */
void FUN_100f2704(short param_1,short param_2)

{
  FUN_10117884(*piRam10117114 + (int)*(short *)(*(int *)*piRam10117114 + 0x120),param_1,param_2);
  return;
}

/* Address: 0x100f2758 Size: 120 bytes */
void FUN_100f2758(long long param_1,long long param_2)

{
  long long uVar1;
  short local_10;
  char auStack_e [14];
  
  FUN_100b1d90(param_2,(unsigned long long)uRam101170e0 + 0x34);
  uVar1 = FUN_100f262c(param_1,auStack_e,&local_10);
  if ((int)uVar1 != 0) {
    FUN_10001500(uVar1,local_10,param_2);
  }
  return;
}

/* Address: 0x100f2844 Size: 420 bytes */
int * FUN_100f2844(int *param_1)

{
  unsigned char bVar1;
  short uVar2;
  int *puVar3;
  int *puVar4;
  short *puVar5;
  int iVar6;
  short sVar7;
  unsigned char *pbVar8;
  int iVar9;
  char *puVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  
  puVar3 = puRam10117114;
  FUN_10001c20(param_1);
  puVar4 = (int *)FUN_100f15e0();
  FUN_100ef9b8(param_1);
  FUN_100ef9b8(puVar4);
  puVar5 = (short *)FUN_100eecf8(*param_1);
  iVar6 = FUN_100eecf8(*puVar4);
  uVar2 = *puVar5;
  bVar1 = *(unsigned char *)(puVar5 + 7);
  iVar9 = (int)(short)(bVar1 + 0xf);
  FUN_10002340(puVar5,iVar6,iVar9);
  pbVar11 = (unsigned char *)(iVar9 + (int)puVar5);
  puVar10 = (char *)(iVar9 + iVar6);
  iVar6 = FUN_10001c20(param_1);
  pbVar8 = pbVar11 + iVar6;
  sVar7 = 0;
  if (pbVar11 < pbVar8) {
    bVar1 = *(unsigned char *)((int)puVar5 + (int)(short)(bVar1 + 0xf));
    while (bVar1 != 0) {
      bVar1 = *pbVar11;
      FUN_10002340(pbVar11,puVar10);
      pbVar12 = pbVar11 + (short)(bVar1 + 5);
      puVar10 = puVar10 + (short)(bVar1 + 5);
      if (((unsigned int)pbVar12 & 1) == 1) {
        pbVar12 = pbVar12 + 1;
      }
      sVar7 = sVar7 + 1;
      FUN_100f1e0c(*puVar3,*(int *)pbVar12,uVar2,sVar7);
      pbVar11 = pbVar12 + 4;
      if (pbVar8 <= pbVar11) break;
      bVar1 = pbVar12[4];
    }
  }
  *puVar10 = 0;
  iVar6 = FUN_100eecf8(*puVar4);
  FUN_100f16f8(puVar4,puVar10 + (1 - iVar6));
  FUN_10002ad8(param_1);
  FUN_10002ad8(puVar4);
  return puVar4;
}

/* Address: 0x100f29e8 Size: 108 bytes */
void FUN_100f29e8(int *param_1,short param_2)

{
  int local_2c;
  
  FUN_10117884(*piRam1011710c + (int)*(short *)(*(int *)*piRam1011710c + 0x158),param_1);
  FUN_100f199c(**(int **)(local_2c + -0x28),param_2,*(short *)*param_1);
  return;
}

/* Address: 0x100f2d20 Size: 80 bytes */
int FUN_100f2d20(long long param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10117884(*piRam1011710c + (int)*(short *)(*(int *)*piRam1011710c + 0x148),param_1);
  return lVar1 != 0;
}

/* Address: 0x100f2d70 Size: 36 bytes */
void FUN_100f2d70(int *param_1)

{
  if (*(int *)(*param_1 + 6) == *piRam10117118) {
    *(short *)(*param_1 + 2) = 0;
  }
  return;
}

/* Address: 0x100f2da4 Size: 160 bytes */
long long FUN_100f2da4(int *param_1,char param_2)

{
  short sVar1;
  int iVar3;
  long long uVar2;
  
  iVar3 = FUN_100ef2bc(param_1);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)*param_1;
    if (sVar1 == 1) {
      uVar2 = 0;
    }
    else if ((param_2 == '\0') || ((-1 < sVar1 && (sVar1 < 0xec)))) {
      if ((sVar1 < 1) || (0x3f < sVar1)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* Address: 0x100f2e44 Size: 236 bytes */
void FUN_100f2e44(int *param_1,char param_2,int param_3)

{
  int *ppuVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short local_18 [12];
  
  ppuVar1 = 0 /* TVect base */;
  iVar2 = FUN_100f2da4(param_1,param_2);
  if (iVar2 != 0) {
    sVar3 = *(short *)*param_1;
    *(unsigned char *)(sVar3 + param_3) = (unsigned char)*(int *)((short *)*param_1 + 5) & 1;
    *(int *)(*param_1 + 10) = 0;
    *(int *)(param_3 + sVar3 * 4 + 0x40) = *(int *)(*param_1 + 6);
    *(int *)(*param_1 + 6) = *(int *)(*(int*)((char*)ppuVar1 - 0x1e2));
    sVar3 = FUN_10002bb0(param_1);
    sVar4 = 1;
    if (0 < sVar3) {
      do {
        FUN_10003438(param_1,sVar4,local_18);
        if (local_18[0] != 0x1b) {
          FUN_100037b0(param_1,sVar4,0);
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 <= sVar3);
    }
  }
  return;
}

/* Address: 0x100f2f30 Size: 192 bytes */
void FUN_100f2f30(int *param_1,char param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned long long uVar3;
  
  iVar2 = FUN_100f2da4(param_1,param_2);
  if (iVar2 != 0) {
    uVar1 = *(unsigned int *)(*param_1 + 10);
    uVar3 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
      uVar3 = uVar3 | 1;
      *(int *)(*param_1 + 10) = (int)uVar3;
    }
    uVar3 = uVar3 & 1;
    if ((1 - ((1 < uVar3) + 1)) + (unsigned int)(uVar3 != 0 && (unsigned long long)(1 < uVar3) <= uVar3 - 1) !=
        (unsigned int)*(unsigned char *)(param_3 + *(short *)*param_1)) {
      FUN_100f2454();
    }
    *(int *)((short *)*param_1 + 3) =
         *(int *)(param_3 + *(short *)*param_1 * 4 + 0x40);
    if (*(short *)(*param_1 + 2) == 0) {
      FUN_100036f0(param_1);
    }
  }
  return;
}

/* Address: 0x100f2ff0 Size: 116 bytes */
int * FUN_100f2ff0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    FUN_100ec170(param_1,*(int *)(*(int*)((char*)ppuVar1 - 0x1e5)),1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1e0));
  }
  return param_1;
}

/* Address: 0x100f3064 Size: 36 bytes */
void FUN_100f3064(void)

{
  FUN_100ec2c4();
  return;
}

/* Address: 0x100f3088 Size: 36 bytes */
void FUN_100f3088(void)

{
  FUN_100ec34c();
  return;
}

/* Address: 0x100f30ac Size: 108 bytes */
void FUN_100f30ac(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10117120;
    FUN_100ec1e8(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f3118(long long param_1,long long param_2) { }













































































/* Address: 0x100f3284 Size: 108 bytes */
void FUN_100f3284(long long param_1,long long param_2)

{
  long long uVar1;
  long long uVar2;
  short local_10;
  char auStack_e [14];
  
  uVar1 = FUN_100f262c(param_1,auStack_e,&local_10);
  if ((int)uVar1 != 0) {
    uVar2 = FUN_100b1c84(param_2);
    FUN_10001a40(uVar1,local_10,uVar2);
  }
  return;
}

/* Address: 0x100f32f0 Size: 88 bytes */
void FUN_100f32f0(long long param_1,short param_2,short param_3)

{
  char local_108 [264];
  
  local_108[0] = 0;
  FUN_100009d8(local_108,param_2,param_3);
  FUN_100f3284(param_1,local_108);
  return;
}

/* Address: 0x100f3348 Size: 64 bytes */
void FUN_100f3348(long long param_1,short param_2,short param_3,short param_4,
                 char param_5)

{
  if (param_5 != '\0') {
    param_3 = param_4;
  }
  FUN_100f32f0(param_1,param_2,param_3);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f3388(void) { }











/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f33ac(int *param_1) { }

































/* Address: 0x100f3444 Size: 104 bytes */
int * FUN_100f3444(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1de));
  }
  return param_1;
}

/* Address: 0x100f34ac Size: 40 bytes */
void FUN_100f34ac(void)

{
  FUN_100f3444(0);
  return;
}

/* Address: 0x100f34d4 Size: 336 bytes */
void FUN_100f34d4(int param_1,short param_2)

{
  int iVar1;
  long long uVar2;
  int local_33c;
  char local_318 [256];
  char local_218 [256];
  char local_118 [280];
  
  FUN_100b19f4(local_318,(unsigned long long)uRam101170e0 + 0x38);
  FUN_100f5274(param_1);
  *(short *)(param_1 + 4) = 0xffff;
  *(short *)(param_1 + 6) = 0xffff;
  *(short *)(param_1 + 8) = 0xffff;
  *(short *)(param_1 + 10) = 0xffff;
  FUN_100f24a8(param_2,0);
  FUN_100022c8();
  iVar1 = local_33c;
  uVar2 = FUN_100f2348(1);
  if ((int)uVar2 != 0) {
    FUN_10001770(uVar2,0x44525652);
    iVar1 = local_33c;
  }
  local_118[0] = 0;
  FUN_100f2758(1,local_118);
  uVar2 = FUN_100b1c18(local_118,local_318,1);
  if ((int)uVar2 != 0) {
    local_218[0] = 0;
    FUN_10117884(**(int **)(iVar1 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(iVar1 + -0xedc) + 0x530),local_218);
    FUN_100b1c88(local_118,uVar2,local_318[0]);
    FUN_100b1900(local_118,local_218,uVar2,0xff);
    FUN_100f3284(1,local_118);
  }
  return;
}

/* Address: 0x100f364c Size: 240 bytes */
void FUN_100f364c(int param_1)

{
  int local_2c;
  
  if ((*(short *)(param_1 + 4) == *(short *)(param_1 + 6)) || (*(short *)(param_1 + 6) == -1)) {
    if (*(short *)(param_1 + 8) == *(short *)(param_1 + 10)) {
      return;
    }
    if (*(short *)(param_1 + 10) == -1) {
      return;
    }
  }
  FUN_100022c8();
  if (*(short *)(param_1 + 6) == -1) {
    FUN_100f24a8(*(short *)(param_1 + 4),0);
  }
  else {
    FUN_100f24a8(*(short *)(param_1 + 6),0);
    *(short *)(param_1 + 4) = *(short *)(param_1 + 6);
  }
  if (*(short *)(param_1 + 10) == -1) {
    FUN_100f24a8(*(short *)(param_1 + 8),1);
  }
  else {
    FUN_100f24a8(*(short *)(param_1 + 10),1);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 10);
  }
  FUN_10117884(**(int **)(local_2c + -0xedc) +
               (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x408));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f374c(long long param_1,long long param_2,long long param_3) { }













































































/* Address: 0x100f39f8 Size: 272 bytes */
void FUN_100f39f8(long long param_1,char *param_2,short param_3,short param_4,
                 long long param_5)

{
  int *puVar2;
  short sVar4;
  long long uVar1;
  int iVar3;
  int local_3c;
  char auStack_18 [2];
  char auStack_16 [22];
  
  puVar2 = (int *)FUN_100003f0(param_3);
  if ((puVar2 != (int *)0x0) && (*param_2 != '\0')) {
    sVar4 = FUN_10002bb0(puVar2);
    if (sVar4 < param_4) {
      param_4 = sVar4;
    }
    FUN_10000c48(puVar2,(unsigned long long)*(unsigned int *)(local_3c + -0x7c0) + 0x4c,param_4);
    uVar1 = FUN_100b1c84(param_2);
    FUN_10001a40(puVar2,param_4 + 1,uVar1);
    iVar3 = FUN_100f262c(param_5,auStack_18,auStack_16);
    if (iVar3 == 0) {
      FUN_100f1e6c(**(int **)(local_3c + -0x78c),param_5,*(short *)*puVar2,param_4 + 1);
    }
    FUN_100f2d70(puVar2);
  }
  return;
}

/* Address: 0x100f3b08 Size: 172 bytes */
void FUN_100f3b08(long long param_1,long long param_2)

{
  int *piVar1;
  long long uVar2;
  short local_18;
  short local_16 [11];
  
  piVar1 = piRam10117114;
  FUN_10117884(*piRam10117114 + (int)*(short *)(*(int *)*piRam10117114 + 0x118),param_2,local_16,
               &local_18);
  if (local_16[0] != 0) {
    uVar2 = FUN_100f2214(local_16[0]);
    if ((int)uVar2 != 0) {
      FUN_10003138(uVar2,local_18);
      FUN_100f2d70(uVar2);
    }
    FUN_100f1f7c(*piVar1,param_2);
  }
  return;
}

/* Address: 0x100f3bb4 Size: 168 bytes */
void FUN_100f3bb4(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam101169bc;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam101170e4,*puRam1011712c,0x20,uRam10117130,uRam101169bc);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x1ec)),*(int *)(*(int*)((char*)ppuVar2 - 0x1db)),0x20,(*(int*)((char*)ppuVar2 - 0x1da)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x1e9)),*(int *)(*(int*)((char*)ppuVar2 - 0x1d9)),0x20,(*(int*)((char*)ppuVar2 - 0x1d8)),(*(int*)((char*)ppuVar2 - 0x221)));
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x1df)),*(int *)(*(int*)((char*)ppuVar2 - 0x1d7)),0xc,(*(int*)((char*)ppuVar2 - 0x1d6)),(*(int*)((char*)ppuVar2 - 0x3da)));
  return;
}

/* Address: 0x100f3c5c Size: 52 bytes */
long long FUN_100f3c5c(long long param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10001a88();
  return lVar1 + param_1;
}

/* Address: 0x100f3c98 Size: 152 bytes */
int * FUN_100f3c98(int *param_1)

{
  int uVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x98),
     param_1 != (int *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = (*(int*)((char*)ppuVar2 - 0x1d4));
    uVar1 = *(int *)((int)(*(int*)((char*)ppuVar2 - 0x2c0)) + 4);
    *(int *)((int)param_1 + 0x8e) = *(int *)(*(int*)((char*)ppuVar2 - 0x2c0));
    *(int *)((int)param_1 + 0x92) = uVar1;
    param_1[0x22] = 0xffffffff;
    *(char *)(param_1 + 0x23) = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
  }
  return param_1;
}

/* Address: 0x100f3d30 Size: 40 bytes */
void FUN_100f3d30(void)

{
  FUN_100f3c98(0);
  return;
}

/* Address: 0x100f3d60 Size: 548 bytes */
void FUN_100f3d60(int *param_1,unsigned short param_2,int *param_3,short *param_4,int param_5)

{
  long long uVar1;
  long long uVar2;
  short *psVar3;
  int iVar4;
  int uStack00000028;
  int local_54;
  int local_30;
  int local_2c;
  int local_28;
  
  uStack00000028 = param_5;
  FUN_10000660(&local_30);
  FUN_10000198(*(int *)(local_54 + -0x24));
  if ((param_2 == 0) || (param_2 == 1)) {
    FUN_10001bf0(param_4[1],*param_4);
    uVar1 = FUN_100b08a4(param_4,0);
    uVar2 = FUN_100b08a4(param_4,1);
    FUN_10002b38(uVar2,uVar1);
    psVar3 = (short *)FUN_100b057c(param_4,0);
    local_2c = (int)*psVar3;
    local_28 = (int)psVar3[1];
    param_1[0xb] = local_2c;
    param_1[0xc] = local_28;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar4 != 0) {
    FUN_100b0384(((char*)0 + 0x00000028));
    FUN_10003318();
    FUN_100b057c(param_4,0);
    FUN_100b0384();
    FUN_10003318();
    FUN_100b057c(param_4,1);
    FUN_100b0384();
    FUN_10003318();
    FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1,(*(unsigned int *)(*param_3 + 10) & 1) != 0
                );
    if (param_2 < 4) {
      return;
    }
    FUN_100b057c(param_4,0);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_100b057c(param_4,1);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  }
  FUN_10000198(local_30);
  return;
}

/* Address: 0x100f4310 Size: 208 bytes */
void FUN_100f4310(int *param_1)

{
  int iVar1;
  int local_3c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  *(char *)(param_1 + 0x23) = 0;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (iVar1 == 0) {
    local_18 = 0;
    local_16 = 0;
    local_14 = 0;
    local_12 = 0;
    FUN_10002118((unsigned long long)*(unsigned int *)(local_3c + -0xb0) + 0xb2);
    FUN_10002130(7);
    FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,&local_18);
    FUN_100b0578(&local_18);
    FUN_10002148();
  }
  return;
}

/* Address: 0x100f43e0 Size: 152 bytes */
void FUN_100f43e0(int *param_1,long long param_2,int *param_3)

{
  short uVar1;
  char auStack_20 [32];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x390),auStack_20);
  uVar1 = FUN_100e1a3c(auStack_20,1);
  *(short *)(*param_3 + 2) = uVar1;
  uVar1 = FUN_100e1a3c(auStack_20,0);
  *(short *)(*param_3 + 4) = uVar1;
  return;
}

/* Address: 0x100f4478 Size: 156 bytes */
void FUN_100f4478(int *param_1,long long param_2,long long param_3,long long param_4,
                 int param_5)

{
  int uStack00000028;
  char auStack_20 [32];
  
  uStack00000028 = param_5;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x390),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,param_4);
  FUN_100b065c(param_4,((char*)0 + 0x00000028));
  return;
}

/* Address: 0x100f4514 Size: 36 bytes */
void FUN_100f4514(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100f455c Size: 340 bytes */
void FUN_100f455c(long long param_1,short param_2,short param_3)

{
  int iVar1;
  unsigned long long uVar2;
  short local_98;
  short local_96;
  
  iVar1 = FUN_10000bb8(param_2,param_3);
  local_98 = param_2;
  local_96 = param_3;
  if (iVar1 == 0) {
    iVar1 = FUN_10000bb8(param_2,0);
    local_96 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_10000bb8(0,0);
      local_98 = 0;
      if (iVar1 == 0) {
        uVar2 = 3;
        goto LAB_100f468c;
      }
    }
  }
  if (local_96 == 0) {
    if (local_98 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
LAB_100f468c:
  if (3 < uVar2) {
    return;
  }
  return;
}

/* Address: 0x100f4c40 Size: 160 bytes */
int FUN_100f4c40(int *param_1)

{
  int iVar1;
  char auStack_28 [6];
  char auStack_22 [6];
  char auStack_1c [6];
  char auStack_16 [22];
  
  iVar1 = FUN_1010900c(param_1,auStack_1c,auStack_16);
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),**(short **)param_1[0x21],1,
                 auStack_28);
    FUN_100f0538(auStack_28);
    FUN_100f03e8(auStack_22);
  }
  return iVar1 != 0;
}

/* Address: 0x100f4ce0 Size: 56 bytes */
unsigned long long FUN_100f4ce0(int param_1)

{
  unsigned long long uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = (unsigned long long)*(unsigned char *)(param_1 + 0x52);
  }
  else {
    uVar1 = FUN_1010b210();
  }
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100f4d20(int param_1) { return 0; }











/* Address: 0x100f4d84 Size: 60 bytes */
void FUN_100f4d84(void)

{
  FUN_100c1c8c(uRam1011714c,*puRam10117158,0x98,uRam1011715c,uRam10116c7c);
  return;
}

/* Address: 0x100f4e30 Size: 40 bytes */
void FUN_100f4e30(void)

{
  FUN_100f4dc8(0);
  return;
}

/* Address: 0x100f4e74 Size: 136 bytes */
long long FUN_100f4e74(int *param_1,long long param_2)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x30),param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18),param_2);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

/* Address: 0x100f4f0c Size: 120 bytes */
void FUN_100f4f0c(int *param_1,long long param_2,long long param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x48));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xc0) + (int)piVar1,param_1,param_2,param_3);
  }
  return;
}

/* Address: 0x100f4f94 Size: 120 bytes */
void FUN_100f4f94(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x48));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xa8) + (int)piVar1,param_1,param_2,0x7ffffffe);
  }
  return;
}

/* Address: 0x100f500c Size: 104 bytes */
void FUN_100f500c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x48));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1,param_1);
  }
  return;
}

/* Address: 0x100f5088 Size: 56 bytes */
void FUN_100f5088(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x98));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f50c0(int *param_1) { }













/* Address: 0x100f5100 Size: 4 bytes */
void FUN_100f5100(void)

{
  return;
}

/* Address: 0x100f5104 Size: 4 bytes */
void FUN_100f5104(void)

{
  return;
}

/* FUN_100f5108 defined elsewhere */













/* Address: 0x100f5184 Size: 112 bytes */
void FUN_100f5184(int *param_1,long long param_2)

{
  long long uVar1;
  unsigned char local_110 [272];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c17e0(uVar1,local_110);
  FUN_100012d8(local_110,param_2,(unsigned long long)local_110[0] + 1);
  return;
}

/* Address: 0x100f51f4 Size: 64 bytes */
void FUN_100f51f4(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c1950();
  return;
}

/* Address: 0x100f5234 Size: 64 bytes */
void FUN_100f5234(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c1d48();
  return;
}

/* Address: 0x100f5278 Size: 84 bytes */
void FUN_100f5278(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c1d68(uVar1,param_2,0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100f52cc(long long param_1) { return 0; }























/* Address: 0x100f5338 Size: 36 bytes */
void FUN_100f5338(void)

{
  FUN_100f5708();
  return;
}

/* Address: 0x100f535c Size: 4 bytes */
void FUN_100f535c(void)

{
  return;
}





/* Address: 0x100f5360 Size: 64 bytes */
void FUN_100f5360(void)

{
  FUN_100c1c8c(uRam10116938,*puRam10117164,4,uRam10117168,uRam10116938);
  return;
}

/* Address: 0x100f53a0 Size: 76 bytes */
void FUN_100f53a0(int param_1,short param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eeefc(param_2);
  uVar2 = FUN_100003d8(param_2,uVar1);
  *(int *)(param_1 + 4) = uVar2;
  return;
}

/* Address: 0x100f53ec Size: 124 bytes */
long long FUN_100f53ec(short *param_1,short param_2,long long param_3)

{
  int *piVar1;
  long long uVar2;
  
  piVar1 = piRam1011716c;
  FUN_100f53a0(param_1,param_2);
  *param_1 = param_2;
  *(int *)(param_1 + 6) = *piVar1;
  *piVar1 = (int)param_1;
  uVar2 = FUN_100eeefc(param_2);
  FUN_10001de8(param_3,param_2,uVar2);
  return 0;
}

/* Address: 0x100f5468 Size: 76 bytes */
int FUN_100f5468(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *piRam1011716c;
  if (iVar2 != param_1) {
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
      while ((iVar1 != param_1 && (iVar2 = *(int *)(iVar2 + 0xc), iVar2 != 0))) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
    }
    return iVar2;
  }
  return 0;
}

/* Address: 0x100f54b4 Size: 76 bytes */
short * FUN_100f54b4(short *param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = (short *)0x0;
  for (psVar1 = (short *)*puRam1011716c; (psVar1 != (short *)0x0 && (psVar1 != param_1));
      psVar1 = *(short **)(psVar1 + 6)) {
    if (*psVar1 == *param_1) {
      psVar2 = psVar1;
    }
  }
  return psVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f5500(short *param_1) { }









































































/* Address: 0x100f55ec Size: 84 bytes */
void FUN_100f55ec(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = piRam1011716c;
  iVar1 = *piRam1011716c;
  while (iVar1 != 0) {
    FUN_100f5500(*piVar2);
    iVar1 = *piVar2;
  }
  return;
}














/* Address: 0x100f5748 Size: 12 bytes */
char FUN_100f5748(void)

{
  return *puRam10117170;
}

/* FUN_100f5754 defined elsewhere */


/* Address: 0x100f576c Size: 36 bytes */
long long FUN_100f576c(unsigned int param_1)

{
  if ((param_1 != 0) && ((param_1 & 1) != 1)) {
    return 1;
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100f5790(void) { return 0; }















/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f5838(void) { }











/* Address: stubbed - had compile errors on 64-bit */
int FUN_100f585c(void) { return 0; }















/* Address: 0x100f5948 Size: 40 bytes */
void FUN_100f5948(void)

{
  FUN_100f58a4(0);
  return;
}

/* Address: 0x100f5970 Size: 164 bytes */
void FUN_100f5970(int *param_1)

{
  long long uVar1;
  long long lVar2;
  short sVar3;
  
  if (((*(char *)(param_1 + 0x32) != '\0') &&
      (uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x860) + (int)param_1), (int)uVar1 != 0)) &&
     (lVar2 = FUN_10002bb0(uVar1), (int)*(short *)(param_1 + 0x34) < (int)lVar2)) {
    do {
      FUN_10003138(uVar1,lVar2);
      sVar3 = (short)lVar2 + -1;
      lVar2 = (long long)sVar3;
    } while (*(short *)(param_1 + 0x34) < sVar3);
  }
  FUN_100c8068(param_1);
  return;
}

/* Address: 0x100f5bd8 Size: 756 bytes */
void FUN_100f5bd8(int *param_1,long long param_2,long long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar6;
  long long uVar3;
  short uVar8;
  short uVar9;
  long long uVar4;
  long long uVar5;
  int *piVar7;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int local_54;
  char auStack_50 [8];
  char auStack_48 [72];
  
  piVar2 = piRam10117808;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  iVar6 = FUN_100003f0();
  uVar8 = 0;
  if ((iVar6 == 0) &&
     (uVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x860) + (int)param_1), (int)uVar3 != 0)) {
    FUN_10002088(uVar3,0xffffffffffffffff);
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    uVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8a0));
  }
  iVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5e8));
  if (iVar6 == 0) {
    iVar6 = *piVar2;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_48);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_48,auStack_50);
  FUN_10000660(&local_54);
  FUN_10000198(iVar6);
  local_64 = param_1[0x26];
  iStack_60 = param_1[0x27];
  iStack_5c = param_1[0x28];
  FUN_100f0788(&local_64);
  FUN_10000030();
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850));
  uVar9 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  uVar4 = FUN_100b1c84(param_2);
  uVar5 = FUN_100b0578(auStack_50);
  piVar7 = (int *)FUN_10001068(iVar6,uVar5,uVar4,0,uVar9,*(short *)(param_1 + 0x30),
                               *(short *)((int)param_1 + 0xc2),uVar3);
  FUN_10000198(local_54);
  FUN_100db26c(piVar7);
  FUN_100db26c(*(int *)(*piVar7 + 0x1c));
  FUN_10003780(piVar7,param_1);
  *(int *)(iVar6 + 0x8c) = *(int *)**(int **)(iVar6 + 0x8c);
  param_1[0x2a] = (int)piVar7;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),*(char *)((int)param_1 + 0x85)
               ,0);
  iVar1 = *param_1;
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x8a0));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x7d8),param_3,1,uVar3,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),*piVar2 != iVar6);
  if (*(char *)(param_1 + 0x32) != '\0') {
    *(short *)(param_1 + 0x34) = uVar8;
  }
  return;
}

/* Address: 0x100f5ed8 Size: 576 bytes */
void FUN_100f5ed8(int *param_1,int *param_2)

{
  int uVar1;
  unsigned char *pbVar2;
  int *puVar3;
  unsigned long long uVar4;
  int iVar6;
  short uVar7;
  long long uVar5;
  char uVar8;
  unsigned long long uVar9;
  long long lVar10;
  
  puVar3 = puRam10117370;
  pbVar2 = pbRam10116a54;
  uVar9 = ZEXT48(((char*)0)) - 0x238;
  lVar10 = ZEXT48(((char*)0)) - 0x138;
  uVar4 = uVar9;
  if (((uVar9 & 0xffffffff) != 0) || (uVar4 = FUN_100f56e4(0x100), (uVar4 & 0xffffffff) != 0)) {
    FUN_100012d8(pbVar2,uVar4,(unsigned long long)*pbVar2 + 1);
  }
  FUN_100c6c9c(param_1,param_2);
  uVar1 = *puVar3;
  *puVar3 = (int)lVar10;
  iVar6 = FUN_10000090(lVar10);
  if (iVar6 == 0) {
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x30) = uVar7;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = uVar7;
    uVar8 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
    *(char *)(param_1 + 0x31) = uVar8;
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc6) = uVar7;
    uVar8 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)(param_1 + 0x32) = uVar8;
    iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
    param_1[0x33] = iVar6;
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xd2) = uVar7;
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x35) = uVar7;
    FUN_10117884((int)*(short *)(*param_1 + 0x868) + (int)param_1,uVar9);
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,uVar9,uVar5,0,0,0);
    *puVar3 = uVar1;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  return;
}

/* Address: 0x100f6118 Size: 388 bytes */
void FUN_100f6118(int *param_1,int *param_2)

{
  int iVar1;
  long long uVar2;
  
  FUN_100c6ea0(param_1,param_2);
  iVar1 = *param_2;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar1 + 400),uVar2);
  iVar1 = *param_2;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar1 + 400),uVar2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0xc2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*(char *)(param_1 + 0x31));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0xc6));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x32));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x33]);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0xd2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x35));
  return;
}

/* Address: 0x100f629c Size: 124 bytes */
int FUN_100f629c(int *param_1)

{
  int iVar2;
  long long lVar1;
  int bVar3;
  char auStack_18 [24];
  
  iVar2 = FUN_100c752c(param_1);
  if (iVar2 == 0) {
    bVar3 = false;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x630),auStack_18);
    lVar1 = FUN_100e1a08(auStack_18);
    bVar3 = lVar1 == 0;
  }
  return bVar3;
}

/* Address: 0x100f6318 Size: 36 bytes */
void FUN_100f6318(void)

{
  FUN_100c87e0();
  return;
}

/* Address: 0x100f633c Size: 136 bytes */
void FUN_100f633c(int *param_1,long long param_2,long long param_3,int param_4)

{
  int iVar1;
  int uStack00000024;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  uStack00000024 = param_4;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar1 == 0) {
    local_20 = param_1[0x26];
    iStack_1c = param_1[0x27];
    iStack_18 = param_1[0x28];
    FUN_100f0788(&local_20);
  }
  FUN_100c8640(param_1,param_2,param_3,uStack00000024);
  return;
}

/* Address: 0x100f63c4 Size: 408 bytes */
void FUN_100f63c4(int *param_1,int *param_2)

{
  int *puVar2;
  int iVar3;
  long long uVar1;
  char local_118 [280];
  
  puVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
  if (puVar2 != param_2) {
    if (puVar2 != (int *)0x0) {
      iVar3 = FUN_100f2d20(puVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_100ef2f8(puVar2);
        if (iVar3 == 0) {
          FUN_10002c28(puVar2);
        }
        else {
          FUN_10001c98(puVar2);
        }
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),0);
      FUN_100038e8(param_1[0x2a],0,0);
      FUN_10003588(param_1[0x2a]);
      param_1[0x2a] = 0;
    }
    if (param_2 != (int *)0x0) {
      *(short *)(param_1 + 0x30) = *(short *)*param_2;
      local_118[0] = 0;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x868),local_118);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),local_118,1,0,0,0);
      iVar3 = *param_1;
      uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x8a0));
      FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x7d8),1,1,uVar1,0);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f655c(int *param_1) { }













/* Address: 0x100f659c Size: 200 bytes */
void FUN_100f659c(int *param_1,long long param_2)

{
  unsigned char *pbVar1;
  int *piVar2;
  char auStack_110 [272];
  
  pbVar1 = pbRam10116a54;
  if (*(short *)((int)param_1 + 0xd2) == -1) {
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
    if (piVar2 == (int *)0x0) {
      FUN_100012d8(pbVar1,param_2,(unsigned long long)*pbVar1 + 1);
    }
    else {
      FUN_100012d8(*piVar2 + 0xe,auStack_110,(unsigned long long)*(unsigned char *)(*piVar2 + 0xe) + 1);
      FUN_100ef284(auStack_110,param_2);
    }
  }
  else {
    FUN_100009d8(param_2,*(short *)((int)param_1 + 0xd2),*(short *)(param_1 + 0x35));
  }
  return;
}

/* Address: 0x100f6664 Size: 108 bytes */
void FUN_100f6664(int *param_1)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x880));
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x890));
  FUN_100f2704(uVar2,uVar1);
  return;
}

/* Address: 0x100f66d0 Size: 56 bytes */
void FUN_100f66d0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  return;
}

/* Address: 0x100f6708 Size: 112 bytes */
short FUN_100f6708(int *param_1)

{
  int *piVar1;
  short sVar2;
  
  if ((((int *)param_1[0x2a] == (int *)0x0) ||
      (piVar1 = *(int **)(*(int *)param_1[0x2a] + 0x1c), piVar1 == (int *)0x0)) ||
     (sVar2 = *(short *)(*piVar1 + 8), sVar2 == 0)) {
    sVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  return sVar2;
}

/* Address: 0x100f6790 Size: 112 bytes */
short FUN_100f6790(int *param_1)

{
  int *piVar1;
  short sVar2;
  
  if ((((int *)param_1[0x2a] == (int *)0x0) ||
      (piVar1 = *(int **)(*(int *)param_1[0x2a] + 0x1c), piVar1 == (int *)0x0)) ||
     (sVar2 = *(short *)(*piVar1 + 6), sVar2 == 0)) {
    sVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  }
  return sVar2;
}

/* Address: 0x100f6810 Size: 136 bytes */
void FUN_100f6810(int *param_1,short param_2,long long param_3)

{
  unsigned char *pbVar1;
  long long uVar2;
  
  pbVar1 = pbRam10116a54;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
  if ((int)uVar2 == 0) {
    FUN_100012d8(pbVar1,param_3,(unsigned long long)*pbVar1 + 1);
  }
  else {
    FUN_10001500(uVar2,param_2,param_3);
  }
  return;
}

/* Address: 0x100f6898 Size: 116 bytes */
void FUN_100f6898(int *param_1)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
  if ((int)uVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0));
  }
  else {
    FUN_10002bb0(uVar1);
  }
  return;
}

/* Address: 0x100f690c Size: 56 bytes */
void FUN_100f690c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0));
  return;
}

/* Address: 0x100f6944 Size: 64 bytes */
void FUN_100f6944(int *param_1,short param_2,char param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_3);
  return;
}

/* Address: 0x100f6984 Size: 136 bytes */
void FUN_100f6984(int *param_1,long long param_2,short param_3,char param_4)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x858));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8b0),param_3,param_4);
  if (param_4 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x100f6a0c Size: 60 bytes */
void FUN_100f6a0c(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818),param_2,0);
  return;
}

/* Address: 0x100f6a48 Size: 60 bytes */
void FUN_100f6a48(void)

{
  FUN_100c1c8c(uRam10117174,*puRam1011717c,0xd8,uRam10117180,uRam10116c40);
  return;
}

/* Address: 0x100f6a84 Size: 248 bytes */
unsigned long long FUN_100f6a84(int param_1,int param_2,int param_3,long long param_4,
                      char param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piVar5;
  unsigned int *puVar6;
  int *puVar7;
  unsigned long long uVar4;
  int uStack0000001c;
  int uStack00000020;
  
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  piVar5 = (int *)FUN_100e1088(((char*)0 + 0x0000001c),param_5);
  if (*piVar5 == 0) {
    puVar6 = (unsigned int *)FUN_100e1088(((char*)0 + 0x0000001c),param_5);
    uVar4 = (unsigned long long)*puVar6;
  }
  else {
    puVar6 = (unsigned int *)FUN_100e1088(((char*)0 + 0x0000001c),param_5);
    uVar1 = *puVar6;
    piVar5 = (int *)FUN_100e1088(((char*)0 + 0x0000001c),param_5);
    iVar2 = *piVar5;
    piVar5 = (int *)FUN_100e1088(((char*)0 + 0x0000001c),param_5);
    iVar3 = *piVar5;
    puVar7 = (int *)FUN_100e1088(((char*)0 + 0x0000001c),param_5);
    uVar4 = FUN_100f0334(*puVar7,(long long)
                                 ((int)(param_1 +
                                       ((int)uVar1 >> 1) +
                                       (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)) / iVar2) *
                                 (long long)iVar3,param_4);
  }
  return uVar4;
}

/* Address: 0x100f6c74 Size: 40 bytes */
void FUN_100f6c74(void)

{
  FUN_100f6b8c(0);
  return;
}

/* Address: 0x100f6c9c Size: 460 bytes */
void FUN_100f6c9c(int *param_1,int param_2,long long param_3,long long param_4,char param_5,
                 char param_6,long long param_7,char param_8)

{
  int *puVar1;
  int iVar2;
  int uVar3;
  char in_stack_0000003b;
  int local_148;
  int local_144;
  char auStack_140 [256];
  short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  puVar1 = puRam10117370;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(int *)(param_2 + 0x28);
  }
  FUN_10105b08(param_1,uVar3,param_2,param_3,param_4,param_5,param_6);
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = *puVar1;
  *puVar1 = auStack_140;
  iVar2 = FUN_10000090(auStack_140);
  if (iVar2 == 0) {
    local_148 = 0x10;
    local_144 = 0x10;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),&local_148,0,0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),param_7,0);
    if (param_8 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,1);
    }
    if (in_stack_0000003b != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),0);
    }
    *puVar1 = local_38;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_40,local_3c);
  }
  if ((param_8 != '\0') || (in_stack_0000003b != '\0')) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),0);
  }
  return;
}

/* Address: 0x100f6e68 Size: 304 bytes */
int FUN_100f6e68(int param_1)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  unsigned int uVar5;
  int iVar6;
  int local_138;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar2 = puRam10117370;
  local_138 = FUN_10105d2c(param_1);
  *(int *)(local_138 + 0x90) = 0;
  *(int *)(local_138 + 0x94) = 0;
  uVar5 = 0;
  do {
    iVar6 = uVar5 * 4;
    if (*(int *)(param_1 + iVar6 + 0x90) != 0) {
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_2c = *puVar2;
      *puVar2 = auStack_134;
      iVar3 = FUN_10000090(auStack_134);
      if (iVar3 == 0) {
        piVar1 = *(int **)(param_1 + iVar6 + 0x90);
        uVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x88));
        *(int *)(iVar6 + local_138 + 0x90) = uVar4;
        piVar1 = *(int **)(iVar6 + local_138 + 0x90);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x860));
        *puVar2 = local_2c;
      }
      else {
        local_138 = FUN_100f57c8(local_138);
        FUN_100db158(local_34,local_30);
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 2);
  return local_138;
}

/* Address: 0x100f6f98 Size: 84 bytes */
void FUN_100f6f98(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x90));
  *(int *)(param_1 + 0x90) = uVar1;
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100f6ff8 Size: 500 bytes */
void FUN_100f6ff8(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar2;
  char uVar3;
  long long unaff_r23;
  long long unaff_r30;
  unsigned int uVar4;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  char auStack_150 [8];
  char auStack_148 [8];
  char auStack_140 [256];
  short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_24;
  int uStack_8;
  
  puVar1 = puRam10117370;
  local_24 = (int)unaff_r23;
  uStack_8 = (int)unaff_r30;
  FUN_1010937c(param_1,param_2);
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = *puVar1;
  *puVar1 = auStack_140;
  iVar2 = FUN_10000090(auStack_140);
  if (iVar2 == 0) {
    uVar4 = 0;
    do {
      iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
      param_1[uVar4 + 0x26] = iVar2;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 2);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x118),auStack_148);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x118),auStack_150);
    unaff_r30 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    unaff_r23 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x128),&local_160);
    param_1[0x2b] = local_160;
    param_1[0x2c] = iStack_15c;
    param_1[0x2d] = iStack_158;
    param_1[0x2e] = iStack_154;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)(param_1 + 0x2f) = uVar3;
    *puVar1 = local_38;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_40,local_3c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_148,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),auStack_150,unaff_r23,unaff_r30);
  return;
}

/* Address: 0x100f71ec Size: 292 bytes */
void FUN_100f71ec(int param_1,int *param_2)

{
  unsigned int uVar1;
  
  FUN_101097e8(param_1,param_2);
  uVar1 = 0;
  do {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),
                 *(int *)(param_1 + uVar1 * 4 + 0x98));
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0x80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0xa0);
  uVar1 = 0;
  do {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),
                 *(char *)(param_1 + uVar1 + 0xa8));
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),param_1 + 0xac);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xbc));
  return;
}

/* Address: 0x100f7310 Size: 492 bytes */
void FUN_100f7310(int *param_1)

{
  int bVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  char auStack_190 [8];
  int local_188;
  int uStack_184;
  int uStack_180;
  int uStack_17c;
  char auStack_178 [312];
  char auStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_10105d28(param_1);
  bVar1 = false;
  if (param_1[8] != 0) {
    uVar4 = 0;
    bVar1 = false;
    do {
      if ((param_1[uVar4 + 0x26] != 0x20202020) && (param_1[uVar4 + 0x24] == 0)) {
        piVar2 = (int *)FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x308),
                                     param_1[uVar4 + 0x26]);
        if (piVar2 != (int *)0x0) {
          FUN_10117884((int)*(short *)(*piVar2 + 0x860) + (int)piVar2,param_1);
          bVar1 = true;
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 2);
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar2 = (int *)FUN_10105660(auStack_178);
  iVar3 = FUN_100ebf44(auStack_178);
  while (iVar3 != 0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar2 = (int *)FUN_10105684(auStack_178);
    iVar3 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,0);
  if (bVar1) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),0);
  }
  FUN_101055f4(auStack_178,2);
  return;
}

/* Address: 0x100f74fc Size: 336 bytes */
void FUN_100f74fc(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_190 [8];
  int local_188;
  int uStack_184;
  int uStack_180;
  int uStack_17c;
  char auStack_178 [312];
  char auStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_10106d74(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x338),param_1);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar1 = (int *)FUN_10105660(auStack_178);
  iVar2 = FUN_100ebf44(auStack_178);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar1 = (int *)FUN_10105684(auStack_178);
    iVar2 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,0);
  FUN_101055f4(auStack_178,2);
  return;
}

/* Address: 0x100f764c Size: 504 bytes */
void FUN_100f764c(int param_1,char param_2)

{
  char uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar7;
  int iVar8;
  long long uVar6;
  int *piVar9;
  int *puVar10;
  unsigned int uVar11;
  int local_60;
  int local_5c;
  int local_58;
  int uStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar5 = iRam10117838;
  uVar11 = 0;
  do {
    piVar2 = *(int **)(param_1 + uVar11 * 4 + 0x90);
    if (piVar2 != (int *)0x0) {
      uVar1 = *(char *)(uVar11 + iVar5);
      local_40 = *(int *)(param_1 + 0x2c);
      local_3c = *(int *)(param_1 + 0x30);
      local_58 = *(int *)(param_1 + 0x34);
      uStack_54 = *(int *)(param_1 + 0x38);
      piVar7 = (int *)FUN_100e1088(&local_40,uVar11);
      iVar8 = param_1 + 0xac;
      uVar6 = FUN_100e1580(iVar8,0);
      piVar9 = (int *)FUN_100e1088(uVar6,uVar11);
      *piVar7 = *piVar7 + *piVar9 + -1;
      piVar7 = (int *)FUN_100e1088(&local_40,uVar1);
      piVar9 = (int *)FUN_100e1088(&local_58,uVar1);
      *piVar7 = *piVar7 + *piVar9;
      piVar7 = (int *)FUN_100e1088(&local_58,uVar11);
      iVar3 = *piVar7;
      uVar6 = FUN_100e1580(iVar8,0);
      piVar7 = (int *)FUN_100e1088(uVar6,uVar11);
      iVar4 = *piVar7;
      uVar6 = FUN_100e1580(iVar8,1);
      piVar7 = (int *)FUN_100e1088(uVar6,uVar11);
      iVar8 = *piVar7;
      piVar7 = (int *)FUN_100e1088(&local_58,uVar11);
      *piVar7 = (iVar3 - iVar4) + iVar8 + 2;
      puVar10 = (int *)FUN_100e1088(&local_58,uVar1);
      *puVar10 = 0x10;
      FUN_100e10b0(&local_60,&local_40,&local_58);
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_60;
      local_44 = local_5c;
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x350),&local_50,param_2);
    }
    uVar11 = uVar11 + 1 & 0xff;
  } while (uVar11 < 2);
  return;
}

/* Address: 0x100f7848 Size: 532 bytes */
void FUN_100f7848(int *param_1,long long param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar5;
  long long uVar4;
  int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  int uVar9;
  unsigned char bVar10;
  char auStack_30 [48];
  
  uVar9 = puRam10116bc0[1];
  *param_3 = *puRam10116bc0;
  param_3[1] = uVar9;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_30);
  bVar10 = 0;
  do {
    piVar5 = (int *)FUN_100e109c(param_2,bVar10);
    iVar8 = *piVar5;
    uVar4 = FUN_100e1580(auStack_30,0);
    piVar5 = (int *)FUN_100e1088(uVar4,bVar10);
    if (iVar8 < *piVar5) {
      puVar6 = (int *)FUN_100e1088(param_1 + 0xf,bVar10);
      uVar9 = *puVar6;
      uVar4 = FUN_100e1580(auStack_30,0);
      puVar7 = (unsigned int *)FUN_100e1088(uVar4,bVar10);
      uVar1 = *puVar7;
      puVar7 = (unsigned int *)FUN_100e109c(param_2,bVar10);
      iVar8 = FUN_100f6a84((unsigned long long)uVar1 - (unsigned long long)*puVar7,param_1[0x28],param_1[0x29],uVar9,
                           bVar10);
      piVar5 = (int *)FUN_100e1088(param_3,bVar10);
      *piVar5 = -iVar8;
    }
    else {
      piVar5 = (int *)FUN_100e109c(param_2,bVar10);
      iVar8 = *piVar5;
      uVar4 = FUN_100e1580(auStack_30,1);
      piVar5 = (int *)FUN_100e1088(uVar4,bVar10);
      if (*piVar5 < iVar8) {
        puVar7 = (unsigned int *)FUN_100e1088(param_1 + 0x22,bVar10);
        uVar1 = *puVar7;
        puVar7 = (unsigned int *)FUN_100e1088(param_1 + 0xf,bVar10);
        uVar2 = *puVar7;
        puVar7 = (unsigned int *)FUN_100e109c(param_2,bVar10);
        uVar3 = *puVar7;
        uVar4 = FUN_100e1580(auStack_30,1);
        puVar7 = (unsigned int *)FUN_100e1088(uVar4,bVar10);
        uVar9 = FUN_100f6a84((unsigned long long)uVar3 - (unsigned long long)*puVar7,param_1[0x28],param_1[0x29],
                             (unsigned long long)uVar1 - (unsigned long long)uVar2,bVar10);
        puVar6 = (int *)FUN_100e1088(param_3,bVar10);
        *puVar6 = uVar9;
      }
    }
    bVar10 = bVar10 + 1;
  } while (bVar10 < 2);
  return;
}

/* Address: 0x100f7a5c Size: 128 bytes */
void FUN_100f7a5c(int param_1,char param_2)

{
  int uVar1;
  long long uVar2;
  int *puVar3;
  
  uVar1 = uRam10116bc0;
  uVar2 = FUN_100ca078(0);
  puVar3 = (int *)FUN_100e1088(param_1 + 0x88,param_2);
  FUN_100ca110(uVar2,*(int *)(param_1 + 0x20),uVar1,uVar1,4,4,param_2,*puVar3);
  return;
}

/* Address: 0x100f7adc Size: 164 bytes */
void FUN_100f7adc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x2f) == '\0')) {
    FUN_100da080(param_1,param_2);
  }
  else {
    if ((int)*(short *)(param_2 + 0x24) - 1U < 0xc) {
      return;
    }
    FUN_100da080(param_1,param_2);
  }
  return;
}

/* Address: 0x100f7d30 Size: 548 bytes */
void FUN_100f7d30(int *param_1,int *param_2,char param_3)

{
  unsigned long long uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned char bVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int uStack_2c;
  
  uVar1 = ZEXT48(0 /* TVect base */);
  local_30 = *param_2;
  uStack_2c = param_2[1];
  bVar5 = 0;
  do {
    piVar2 = (int *)FUN_100e1088(&local_30,bVar5);
    if (*piVar2 < 0) {
      piVar2 = (int *)FUN_100e1088(&local_30,bVar5);
      local_38 = *piVar2;
      piVar2 = (int *)FUN_100e1088(param_1 + 0xf,bVar5);
      local_40 = -*piVar2;
      piVar2 = &local_40;
      if (local_40 < local_38) {
        piVar2 = &local_38;
      }
      iVar4 = *piVar2;
      piVar2 = (int *)FUN_100e1088(&local_30,bVar5);
      *piVar2 = iVar4;
    }
    else {
      piVar2 = (int *)FUN_100e1088(&local_30,bVar5);
      if (0 < *piVar2) {
        piVar2 = (int *)FUN_100e1088(&local_30,bVar5);
        local_34 = *piVar2;
        piVar2 = (int *)FUN_100e1088(param_1 + 0x22,bVar5);
        iVar4 = *piVar2;
        piVar2 = (int *)FUN_100e1088(param_1 + 0xf,bVar5);
        local_3c = iVar4 - *piVar2;
        piVar2 = &local_3c;
        if (local_34 < local_3c) {
          piVar2 = &local_34;
        }
        iVar4 = *piVar2;
        piVar2 = (int *)FUN_100e1088(&local_30,bVar5);
        *piVar2 = iVar4;
      }
    }
    piVar2 = (int *)FUN_100e1088(param_1 + 0xf,bVar5);
    piVar3 = (int *)FUN_100e1088(&local_30,bVar5);
    *piVar2 = *piVar2 + *piVar3;
    bVar5 = bVar5 + 1;
  } while (bVar5 < 2);
  iVar4 = FUN_100e11c8(&local_30,*(int *)((int)uVar1 + -0xce0));
  if (iVar4 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758),&local_30,1);
    }
  }
  return;
}

/* Address: 0x100f7f54 Size: 128 bytes */
void FUN_100f7f54(int param_1)

{
  int *piVar1;
  
  FUN_101091c4(param_1);
  piVar1 = *(int **)(param_1 + 0x94);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  return;
}

/* Address: 0x100f7fec Size: 336 bytes */
void FUN_100f7fec(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_190 [8];
  int local_188;
  int uStack_184;
  int uStack_180;
  int uStack_17c;
  char auStack_178 [312];
  char auStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x338),0);
  FUN_1010bf10(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar1 = (int *)FUN_10105660(auStack_178);
  iVar2 = FUN_100ebf44(auStack_178);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar1 = (int *)FUN_10105684(auStack_178);
    iVar2 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,0);
  FUN_101055f4(auStack_178,2);
  return;
}

/* Address: 0x100f813c Size: 440 bytes */
void FUN_100f813c(int *param_1,long long param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int local_30;
  int iStack_2c;
  char local_28 [40];
  
  uVar3 = 0;
  do {
    piVar1 = (int *)param_1[uVar3 + 0x24];
    if (((piVar1 == (int *)0x0) ||
        (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x3a8) + (int)piVar1), iVar2 == 0)) ||
       (iVar2 = FUN_10117884(param_1[uVar3 + 0x24] +
                             (int)*(short *)(*(int *)param_1[uVar3 + 0x24] + 0x838)), iVar2 == 0)) {
      local_28[uVar3] = '\0';
    }
    else {
      local_28[uVar3] = '\x01';
      if (param_3 == '\0') {
        FUN_100002b8(*(int *)(param_1[uVar3 + 0x24] + 0xa8));
      }
      else {
        FUN_10117884(param_1[uVar3 + 0x24] + (int)*(short *)(*(int *)param_1[uVar3 + 0x24] + 0x840),
                     0);
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 2);
  local_30 = param_1[0xd];
  iStack_2c = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),param_3);
  iVar2 = FUN_100e11c8(&local_30,param_1 + 0xd);
  if (iVar2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),param_1 + 0x20,0);
  }
  uVar3 = 0;
  do {
    if (local_28[uVar3] != '\0') {
      FUN_10117884(param_1[uVar3 + 0x24] + (int)*(short *)(*(int *)param_1[uVar3 + 0x24] + 0x840),1)
      ;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 2);
  return;
}

/* Address: 0x100f82f4 Size: 468 bytes */
void FUN_100f82f4(int *param_1,long long param_2,long long param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar5;
  long long uVar4;
  int *piVar6;
  int *puVar7;
  unsigned char bVar8;
  unsigned long long uVar9;
  unsigned int local_60;
  unsigned int local_5c;
  char auStack_58 [8];
  unsigned int local_50;
  unsigned int local_4c;
  char auStack_48 [72];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_48);
  bVar8 = 0;
  do {
    local_4c = FUN_100e1a3c(auStack_48,bVar8);
    puVar5 = (unsigned int *)FUN_100e109c(param_3,bVar8);
    local_5c = *puVar5;
    puVar5 = &local_5c;
    if ((int)local_4c < (int)local_5c) {
      puVar5 = &local_4c;
    }
    uVar1 = *puVar5;
    uVar4 = FUN_100e1594(param_2,0);
    puVar5 = (unsigned int *)FUN_100e109c(uVar4,bVar8);
    uVar2 = *puVar5;
    uVar4 = FUN_100e1580(auStack_48,1);
    puVar5 = (unsigned int *)FUN_100e1088(uVar4,bVar8);
    uVar9 = ((unsigned long long)uVar1 + (unsigned long long)uVar2) - (unsigned long long)*puVar5;
    if ((long long)uVar9 < 1) {
      local_50 = 0;
      uVar4 = FUN_100e1594(param_2,1);
      piVar6 = (int *)FUN_100e109c(uVar4,bVar8);
      iVar3 = *piVar6;
      uVar4 = FUN_100e1580(auStack_48,0);
      piVar6 = (int *)FUN_100e1088(uVar4,bVar8);
      local_60 = (iVar3 - uVar1) - *piVar6;
      puVar5 = &local_60;
      if ((int)local_50 < (int)local_60) {
        puVar5 = &local_50;
      }
      uVar9 = (unsigned long long)*puVar5;
    }
    puVar7 = (int *)FUN_100e1088(auStack_58,bVar8);
    *puVar7 = (int)uVar9;
    bVar8 = bVar8 + 1;
  } while (bVar8 < 2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),auStack_58,param_4);
  FUN_1010c1b0(param_1,param_2,param_3,param_4);
  return;
}

/* Address: 0x100f84c8 Size: 192 bytes */
void FUN_100f84c8(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_100e11c8(param_2,uRam10116bc0);
  if (iVar2 != 0) {
    piVar1 = (int *)param_1[0x24];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x848) + (int)piVar1,*param_2);
    }
    piVar1 = (int *)param_1[0x25];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x848) + (int)piVar1,param_2[1]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),param_2,param_3);
  }
  return;
}

/* Address: 0x100f8588 Size: 424 bytes */
void FUN_100f8588(int *param_1,int *param_2,char param_3)

{
  int uVar1;
  int iVar3;
  long long uVar2;
  char auStack_148 [276];
  int local_34;
  char auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar3 = FUN_100e1a08(param_1 + 0x18);
  if (iVar3 == 0) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x668) + (int)param_1);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar3 != 0)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x638) + (int)param_1,auStack_30);
      iVar3 = FUN_100b0870(auStack_30);
      if (iVar3 == 0) {
        local_28 = 0xffff8ad0;
        local_24 = 0xffff8ad0;
        local_20 = 30000;
        local_1c = 30000;
        iVar3 = FUN_100e1aac(&local_28,param_2);
        if (iVar3 == 0) {
          FUN_10117884((int)*(short *)(*param_1 + 0x4e0) + (int)param_1,auStack_30);
        }
        else {
          FUN_100ee64c(auStack_148);
          uVar1 = local_34;
          uVar2 = FUN_100b0578(auStack_30);
          FUN_10000f30(uVar2,-(short)param_2[1],-(short)*param_2,uVar1);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e8),local_34);
          FUN_100ee77c(auStack_148,2);
        }
        if (param_3 == '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
        }
      }
    }
  }
  return;
}

/* Address: 0x100f8730 Size: 288 bytes */
long long FUN_100f8730(int *param_1,unsigned int param_2,long long param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  long long lVar6;
  int local_28;
  int local_24;
  
  param_2 = param_2 & 0xff;
  local_28 = 0;
  local_24 = 0;
  lVar6 = param_3;
  if (*(char *)((int)param_1 + param_2 + 0xa8) != '\0') {
    piVar3 = (int *)FUN_100e1088(param_1 + 0x22,param_2);
    if ((int)param_3 != *piVar3) {
      piVar3 = param_1 + 0x28;
      puVar4 = (unsigned int *)FUN_100e1088(piVar3,param_2);
      uVar1 = *puVar4;
      piVar5 = (int *)FUN_100e1088(piVar3,param_2);
      iVar2 = *piVar5;
      piVar3 = (int *)FUN_100e1088(piVar3,param_2);
      lVar6 = (long long)
              ((int)(((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0) + (int)param_3)
              / iVar2) * (long long)*piVar3;
    }
  }
  piVar3 = (int *)FUN_100e1088(param_1 + 0xf,param_2);
  iVar2 = *piVar3;
  piVar3 = (int *)FUN_100e1088(&local_28,param_2);
  *piVar3 = (int)lVar6 - iVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),&local_28,1);
  return lVar6 - param_3;
}

/* Address: 0x100f8850 Size: 336 bytes */

int * FUN_100f8850(int *param_1,unsigned int param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  int *unaff_r31;
  unsigned int local_30;
  unsigned int local_2c [11];
  
  param_2 = param_2 & 0xff;
  puVar3 = &local_30;
  piVar2 = (int *)FUN_100e1088(param_1 + 0x28,param_2);
  iVar1 = *piVar2;
  if (3 < (int)param_3 - 0x14U) {
    if ((param_3 == 0x14) || (param_3 == 0x16)) {
      unaff_r31 = (int *)-(int)unaff_r31;
    }
    if ((*(char *)((int)param_1 + param_2 + 0xa8) != '\0') && (iVar1 != 0)) {
      local_2c[0] = 0;
      piVar2 = (int *)FUN_100e1088(param_1 + 0xf,param_2);
      local_30 = *piVar2 + (int)unaff_r31;
      if ((int)local_30 < (int)local_2c[0]) {
        puVar3 = local_2c;
      }
      iVar4 = *puVar3 - ((int)*puVar3 / iVar1) * iVar1;
      if (iVar4 != 0) {
        if ((int)unaff_r31 < 1) {
          unaff_r31 = (int *)((int)unaff_r31 + (iVar1 - iVar4));
        }
        else {
          unaff_r31 = (int *)((int)unaff_r31 - iVar4);
        }
      }
    }
    local_2c[1] = 0;
    local_2c[2] = 0;
    piVar2 = (int *)FUN_100e1088(local_2c + 1,param_2);
    *piVar2 = (int)unaff_r31;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),local_2c + 1,1);
    return unaff_r31;
  }
  return piVar2;
}

/* Address: 0x100f8a58 Size: 340 bytes */
void FUN_100f8a58(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24 [9];
  
  local_30 = param_1[0xf];
  iStack_2c = param_1[0x10];
  iVar1 = param_2[1];
  param_1[0x20] = *param_2;
  param_1[0x21] = iVar1;
  uVar3 = 0;
  do {
    local_24[0] = 0;
    piVar2 = (int *)FUN_100e109c(param_2,uVar3);
    iVar1 = *piVar2;
    piVar2 = (int *)FUN_100e1088(param_1 + 0xd,uVar3);
    local_28 = iVar1 - *piVar2;
    piVar2 = &local_28;
    if (local_28 < local_24[0]) {
      piVar2 = local_24;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)FUN_100e1088(param_1 + 0x22,uVar3);
    *piVar2 = iVar1;
    piVar2 = (int *)param_1[uVar3 + 0x24];
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c0),iVar1,param_3);
    }
    piVar2 = (int *)FUN_100e1088(param_1 + 0xf,uVar3);
    if (iVar1 < *piVar2) {
      piVar2 = (int *)FUN_100e1088(&local_30,uVar3);
      *piVar2 = iVar1;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298),&local_30,1);
  return;
}

/* Address: 0x100f8bcc Size: 288 bytes */
void FUN_100f8bcc(int *param_1)

{
  int *piVar1;
  int iVar2;
  char auStack_190 [8];
  int local_188;
  int uStack_184;
  int uStack_180;
  int uStack_17c;
  char auStack_178 [312];
  char auStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar1 = (int *)FUN_10105660(auStack_178);
  iVar2 = FUN_100ebf44(auStack_178);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar1 = (int *)FUN_10105684(auStack_178);
    iVar2 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,1);
  FUN_101055f4(auStack_178,2);
  return;
}

/* Address: 0x100f8cec Size: 60 bytes */
void FUN_100f8cec(void)

{
  FUN_100c1c8c(uRam10117184,*puRam1011718c,0xc0,uRam10117190,uRam10116c7c);
  return;
}

/* Address: 0x100f8d30 Size: 112 bytes */
int * FUN_100f8d30(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(8),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1c1));
    param_1[1] = 0;
  }
  return param_1;
}

/* Address: 0x100f8da0 Size: 40 bytes */
void FUN_100f8da0(void)

{
  FUN_100f8d30(0);
  return;
}

/* Address: 0x100f8dc8 Size: 180 bytes */
void FUN_100f8dc8(int *param_1)

{
  int *puVar1;
  int iVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100f5274(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    iVar2 = FUN_100e9174();
    param_1[1] = iVar2;
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100f8e7c Size: 68 bytes */
void FUN_100f8e7c(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 4));
  *(int *)(param_1 + 4) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int * FUN_100f8ec0(int param_1) { return 0; }





































































/* Address: 0x100f8fa8 Size: 340 bytes */
unsigned long long FUN_100f8fa8(int param_1,unsigned long long param_2,char param_3,char *param_4)

{
  unsigned long long uVar1;
  int iVar2;
  unsigned long long uVar3;
  char auStack_158 [4];
  unsigned int local_154;
  
  FUN_100ebf7c(auStack_158,*(int *)(param_1 + 4),1);
  uVar1 = FUN_100ec060(auStack_158);
  iVar2 = FUN_100ebf44(auStack_158);
  uVar3 = 0;
  do {
    if (iVar2 == 0) {
LAB_100f9040:
      if ((int)uVar3 == 0) {
        FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x1d0),
                     param_2);
        uVar3 = FUN_10117884((int)*(int **)(param_1 + 4) +
                             (int)*(short *)(**(int **)(param_1 + 4) + 0xa8));
        *param_4 = 1;
      }
      else if (param_3 == '\0') {
        *param_4 = 0;
      }
      else {
        FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x1b8),
                     uVar3,param_2);
        *param_4 = 1;
      }
      FUN_100ebff4(auStack_158,2);
      return uVar3;
    }
    if ((param_2 & 0xffffffff) == (uVar1 & 0xffffffff)) {
      uVar3 = (unsigned long long)local_154;
      goto LAB_100f9040;
    }
    uVar1 = FUN_100ec0e8(auStack_158);
    iVar2 = FUN_100ebf44(auStack_158);
  } while( true );
}

/* Address: 0x100f90fc Size: 56 bytes */
void FUN_100f90fc(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x120));
  return;
}

/* Address: 0x100f913c Size: 124 bytes */
int * FUN_100f913c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x10),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1bf));
    param_1[3] = 0;
    *(short *)(param_1 + 2) = 0;
    param_1[1] = 0;
  }
  return param_1;
}

/* Address: 0x100f91b8 Size: 40 bytes */
void FUN_100f91b8(void)

{
  FUN_100f913c(0);
  return;
}

/* Address: 0x100f91e0 Size: 184 bytes */
void FUN_100f91e0(int *param_1)

{
  int *puVar1;
  int iVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100f5274(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    iVar2 = FUN_100f15e0(0);
    param_1[3] = iVar2;
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100f9298 Size: 116 bytes */
int FUN_100f9298(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  return iVar1 <= iVar2;
}

/* Address: 0x100f930c Size: 84 bytes */
void FUN_100f930c(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 4));
  *(int *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0xc) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100f93c8 Size: 36 bytes */
void FUN_100f93c8(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100f93ec Size: 80 bytes */
char FUN_100f93ec(int *param_1)

{
  char local_8 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,1);
  return local_8[0];
}

/* Address: 0x100f943c Size: 80 bytes */
char FUN_100f943c(int *param_1)

{
  char local_8 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,1);
  return local_8[0];
}

/* Address: 0x100f948c Size: 76 bytes */
void FUN_100f948c(int *param_1,short *param_2)

{
  *param_2 = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),(int)param_2 + 1,1);
  return;
}

/* Address: 0x100f94d8 Size: 80 bytes */
short FUN_100f94d8(int *param_1)

{
  short local_8 [4];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,2);
  return local_8[0];
}

/* Address: 0x100f9528 Size: 80 bytes */
int FUN_100f9528(int *param_1)

{
  int local_8 [2];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,4);
  return local_8[0];
}

/* Address: 0x100f9578 Size: 148 bytes */
void FUN_100f9578(int *param_1,unsigned char *param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,1);
  if ((int)param_3 < (int)(*param_2 + 1)) {
    FUN_100db2f4(0xffffffffffffffce);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 1,*param_2);
  }
  return;
}

/* Address: 0x100f960c Size: 296 bytes */
int * FUN_100f960c(int *param_1)

{
  int *puVar1;
  long long uVar2;
  int *puVar4;
  int iVar5;
  long long uVar3;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108));
  puVar4 = (int *)0x0;
  if (-1 < (int)uVar2) {
    puVar4 = (int *)FUN_100f15e0(uVar2);
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = *puVar1;
    *puVar1 = auStack_130;
    iVar5 = FUN_10000090(auStack_130);
    if (iVar5 == 0) {
      uVar3 = FUN_10000360(puVar4);
      FUN_10002598(puVar4);
      FUN_100db1ec();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),*puVar4,uVar2);
      FUN_10001b60(puVar4,uVar3);
      *puVar1 = local_28;
    }
    else {
      puVar4 = (int *)FUN_100ef510(puVar4);
      FUN_100db158(local_30,local_2c);
    }
  }
  return puVar4;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100f9734(int *param_1,int *param_2) { return 0; }











































/* Address: 0x100f9838 Size: 392 bytes */
int FUN_100f9838(int *param_1,int *param_2)

{
  int bVar1;
  long long lVar2;
  long long lVar3;
  long long uVar4;
  int uVar5;
  int local_120;
  unsigned char local_11c [284];
  
  local_11c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),&local_120,4);
  lVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  lVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),local_11c,0x100);
  if ((long long)(((unsigned long long)local_11c[0] - 1) + (unsigned long long)((unsigned long long)local_11c[0] != 0) << 0x20)
      < 0) {
    uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),local_120);
  }
  else {
    FUN_100c2120(local_11c);
    uVar4 = FUN_100c1950();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x210),local_120,uVar4);
  }
  *param_2 = 0;
  bVar1 = (int)uVar4 != 0;
  if (bVar1) {
    uVar5 = FUN_100c208c((short)uVar4);
    *param_2 = uVar5;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),lVar2 + lVar3);
  }
  return bVar1 || local_120 == 0;
}

/* Address: 0x100f99c0 Size: 104 bytes */
void FUN_100f99c0(int *param_1,int *param_2)

{
  int *puStack00000018;
  int local_10 [4];
  
  puStack00000018 = param_1;
  FUN_100b02d0(local_10);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_10,4);
  *puStack00000018 = local_10[0];
  return;
}

/* Address: 0x100f9a28 Size: 60 bytes */
void FUN_100f9a28(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,8);
  return;
}

/* Address: 0x100f9a64 Size: 60 bytes */
void FUN_100f9a64(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,8);
  return;
}

/* Address: 0x100f9aa0 Size: 60 bytes */
void FUN_100f9aa0(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,0x10);
  return;
}

/* Address: 0x100f9adc Size: 60 bytes */
void FUN_100f9adc(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,6);
  return;
}

/* Address: 0x100f9b18 Size: 80 bytes */
int FUN_100f9b18(int *param_1)

{
  int local_8 [2];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,4);
  return local_8[0];
}

/* Address: 0x100f9b68 Size: 528 bytes */
long long FUN_100f9b68(int *param_1,int *param_2)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  long long uVar4;
  char local_140 [4];
  int local_13c;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  uVar4 = 0;
  if (iVar3 == 0) {
    *param_2 = 0;
    uVar4 = 1;
  }
  else if (iVar3 == 1) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),&local_13c,4);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0xb0) + (int)piVar2,local_13c);
      *param_2 = iVar3;
    }
    if (*param_2 != 0) {
      uVar4 = 1;
    }
  }
  else {
    if (iVar3 == 2) {
      uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x150),param_2);
    }
    else if (iVar3 == 3) {
      uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158),param_2);
    }
    if ((int)uVar4 != 0) {
      local_140[0] = 0;
      if (piVar2 != (int *)0x0) {
        local_13c = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xa8),*param_2,0,local_140)
        ;
      }
      local_38 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_30 = *puVar1;
      *puVar1 = auStack_138;
      iVar3 = FUN_10000090(auStack_138);
      if (iVar3 == 0) {
        param_2 = (int *)*param_2;
        if (param_2 != (int *)0x0) {
          FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x78),param_1);
        }
        *puVar1 = local_30;
      }
      else {
        *param_2 = 0;
        FUN_100db158(local_38,local_34);
      }
    }
  }
  return uVar4;
}

/* Address: 0x100f9d78 Size: 108 bytes */
void FUN_100f9d78(int *param_1)

{
  unsigned long long uVar1;
  char auStack_8 [8];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if ((uVar1 & 1) != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1,auStack_8,1);
  }
  return;
}

/* Address: 0x100f9de4 Size: 140 bytes */
void FUN_100f9de4(int param_1,int param_2,int param_3)

{
  short sVar1;
  
  if (param_2 != 0) {
    sVar1 = *(short *)(param_1 + 8) + 1;
    *(short *)(param_1 + 8) = sVar1;
    FUN_100f16f8(*(int *)(param_1 + 0xc),((long long)sVar1 & 0x1fffffffU) << 3);
    *(int *)(*(short *)(param_1 + 8) * 8 + **(int **)(param_1 + 0xc) + -8) = param_2;
    *(int *)(**(int **)(param_1 + 0xc) + *(short *)(param_1 + 8) * 8 + -4) = param_3;
  }
  return;
}

/* Address: 0x100f9e88 Size: 36 bytes */
void FUN_100f9e88(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100f9eac Size: 68 bytes */
void FUN_100f9eac(int *param_1,char param_2)

{
  char uStack0000001f;
  
  uStack0000001f = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),((char*)0 + 0x0000001f),1);
  return;
}

/* Address: 0x100f9ef0 Size: 68 bytes */
void FUN_100f9ef0(int *param_1,char param_2)

{
  char uStack0000001f;
  
  uStack0000001f = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),((char*)0 + 0x0000001f),1);
  return;
}

/* Address: 0x100f9f34 Size: 72 bytes */
void FUN_100f9f34(int *param_1,short param_2)

{
  int register0x0000000c;
  short uStack0000001e;
  
  uStack0000001e = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),
               (char *)((int)register0x0000000c + 0x1f),1);
  return;
}

/* Address: 0x100f9f7c Size: 68 bytes */
void FUN_100f9f7c(int *param_1,short param_2)

{
  short uStack0000001e;
  
  uStack0000001e = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),((char*)0 + 0x0000001e),2);
  return;
}

/* Address: 0x100f9fc0 Size: 68 bytes */
void FUN_100f9fc0(int *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),((char*)0 + 0x0000001c),4);
  return;
}

/* Address: 0x100fa004 Size: 432 bytes */
void FUN_100fa004(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_28;
  int local_24;
  char local_20 [32];
  
  local_20[0] = '\0';
  iVar2 = 2;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (param_3 != '\0') {
      iVar2 = 3;
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
    if (piVar1 != (int *)0x0) {
      local_28 = FUN_10117884((int)*(short *)(*piVar1 + 0xa8) + (int)piVar1,param_2,0,local_20);
      if (local_20[0] == '\0') {
        iVar2 = 1;
      }
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),iVar2);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1,&local_28,4);
    }
    else {
      if (iVar2 == 2) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e0),param_2,&local_24);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),param_2,&local_24);
      }
      if (param_2 != (int *)0x0) {
        FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x80),param_1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1f0),local_24);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fa1b4(int *param_1,int *param_2,int *param_3) { }















































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fa340(int *param_1,long long param_2,int *param_3) { }

































































/* Address: 0x100fa490 Size: 164 bytes */
void FUN_100fa490(int *param_1,long long param_2)

{
  long long lVar1;
  
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),lVar1 - param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),lVar1);
  return;
}

/* Address: 0x100fa534 Size: 68 bytes */
void FUN_100fa534(int *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),((char*)0 + 0x0000001c),4);
  return;
}

/* Address: 0x100fa578 Size: 60 bytes */
void FUN_100fa578(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,8);
  return;
}

/* Address: 0x100fa5b4 Size: 60 bytes */
void FUN_100fa5b4(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,8);
  return;
}

/* Address: 0x100fa5f0 Size: 60 bytes */
void FUN_100fa5f0(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,0x10);
  return;
}

/* Address: 0x100fa62c Size: 60 bytes */
void FUN_100fa62c(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,6);
  return;
}

/* Address: 0x100fa668 Size: 68 bytes */
void FUN_100fa668(int *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),((char*)0 + 0x0000001c),4);
  return;
}

/* Address: 0x100fa6ac Size: 120 bytes */
void FUN_100fa6ac(int *param_1)

{
  unsigned long long uVar1;
  char local_10 [16];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if ((uVar1 & 1) != 0) {
    local_10[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1,local_10,1);
  }
  return;
}

/* Address: 0x100fa724 Size: 76 bytes */
void FUN_100fa724(int *param_1,unsigned char *param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,(unsigned long long)*param_2 + 1);
  return;
}

/* Address: 0x100fa770 Size: 224 bytes */
void FUN_100fa770(int *param_1,int *param_2)

{
  long long uVar1;
  long long uVar2;
  
  if (param_2 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),0xffffffffffffffff);
  }
  else {
    uVar1 = FUN_10001c20(param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),uVar1,uVar1);
    uVar2 = FUN_10000360(param_2);
    FUN_10002598(param_2);
    FUN_100db1ec();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),*param_2,uVar1);
    FUN_10001b60(param_2,uVar2);
  }
  return;
}

/* Address: 0x100fa850 Size: 8 bytes */
int FUN_100fa850(void)

{
  return uRam10116744;
}

/* Address: 0x100fa860 Size: 112 bytes */
int * FUN_100fa860(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x14),
     param_1 != (int *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1be));
    param_1[4] = 0;
  }
  return param_1;
}

/* Address: 0x100fa8d0 Size: 40 bytes */
void FUN_100fa8d0(void)

{
  FUN_100fa860(0);
  return;
}

/* Address: 0x100fa8f8 Size: 60 bytes */
void FUN_100fa8f8(int param_1,int param_2)

{
  FUN_100f91e0(param_1);
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

/* Address: 0x100fa934 Size: 100 bytes */
int FUN_100fa934(int param_1)

{
  int local_10 [4];
  
  FUN_100db26c(*(int *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x158),
               local_10);
  FUN_100db2f4();
  return local_10[0];
}

/* Address: 0x100fa998 Size: 100 bytes */
int FUN_100fa998(int param_1)

{
  int local_10 [4];
  
  FUN_100db26c(*(int *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x150),
               local_10);
  FUN_100db2f4();
  return local_10[0];
}

/* Address: 0x100fa9fc Size: 100 bytes */
void FUN_100fa9fc(int param_1,long long param_2)

{
  FUN_100db26c(*(int *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x288),
               param_2,1);
  FUN_100db2f4();
  return;
}

/* Address: 0x100faa60 Size: 96 bytes */
void FUN_100faa60(int param_1,long long param_2)

{
  FUN_100db26c(*(int *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x280),
               param_2);
  FUN_100db2f4();
  return;
}

/* Address: 0x100faac0 Size: 104 bytes */
void FUN_100faac0(int param_1,long long param_2,int param_3)

{
  int uStack00000020;
  
  uStack00000020 = param_3;
  FUN_100db26c(*(int *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x260),
               param_2,((char*)0 + 0x00000020));
  FUN_100db2f4();
  return;
}

/* Address: 0x100fab28 Size: 104 bytes */
void FUN_100fab28(int param_1,long long param_2,int param_3)

{
  int uStack00000020;
  
  uStack00000020 = param_3;
  FUN_100db26c(*(int *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x2c0),
               param_2,((char*)0 + 0x00000020));
  FUN_100db2f4();
  return;
}

/* Address: 0x100fab98 Size: 136 bytes */
int * FUN_100fab98(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x24),
     param_1 != (int *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1bc));
    param_1[7] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    *(char *)(param_1 + 8) = 0;
    param_1[6] = 0;
  }
  return param_1;
}

/* Address: 0x100fac20 Size: 40 bytes */
void FUN_100fac20(void)

{
  FUN_100fab98(0);
  return;
}

/* Address: 0x100fac48 Size: 284 bytes */
void FUN_100fac48(int *param_1,long long param_2,int param_3)

{
  int *puVar1;
  int iVar2;
  char uVar3;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100f91e0(param_1);
  param_1[7] = param_3;
  param_1[5] = 0;
  if ((int)param_2 != 0) {
    iVar2 = FUN_100ef2f8(param_2);
    if (iVar2 != 0) {
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = *puVar1;
      *puVar1 = auStack_130;
      iVar2 = FUN_10000090(auStack_130);
      if (iVar2 == 0) {
        FUN_10000b70(param_2);
        FUN_100db328();
        *puVar1 = local_28;
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
        FUN_100db158(local_30,local_2c);
      }
    }
    iVar2 = FUN_10001c20(param_2);
    param_1[6] = iVar2;
    uVar3 = FUN_10000360(param_2);
    *(char *)(param_1 + 8) = uVar3;
    FUN_10000048(param_2);
    param_1[4] = (int)param_2;
  }
  return;
}

/* Address: 0x100fad64 Size: 148 bytes */
void FUN_100fad64(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if (param_1[4] != 0) {
    iVar1 = *param_1;
    uVar2 = FUN_10117884((int)*(short *)(iVar1 + 0xa8) + (int)param_1,param_1[4],iVar1,
                         *(int *)(iVar1 + 0xac));
    FUN_10117884((int)*(short *)(iVar1 + 0xc0) + (int)param_1,uVar2);
    FUN_10001b60(param_1[4],*(char *)(param_1 + 8));
  }
  FUN_100f930c(param_1);
  return;
}

/* Address: 0x100fae08 Size: 52 bytes */
int FUN_100fae08(int param_1,int param_2)

{
  int *piVar1;
  int local_8;
  int local_4;
  
  piVar1 = &local_8;
  local_4 = *(int *)(param_1 + 0x1c);
  local_8 = param_2;
  if (param_2 < *(int *)(param_1 + 0x1c)) {
    piVar1 = &local_4;
  }
  return *piVar1;
}

/* Address: 0x100fae3c Size: 112 bytes */
void FUN_100fae3c(int param_1,int param_2)

{
  long long in_r9;
  
  if (param_2 < 0) {
    FUN_100db2f4(0xffffffffffffffd8);
  }
  else if (*(int *)(param_1 + 0x18) < param_2) {
    in_r9 = 0xffffffffffffffd9;
    param_2 = *(int *)(param_1 + 0x18);
  }
  else {
    in_r9 = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  FUN_100db2f4(in_r9);
  return;
}

/* Address: 0x100faeac Size: 80 bytes */
void FUN_100faeac(int param_1,long long param_2)

{
  int iVar1;
  
  FUN_100f16f8(*(int *)(param_1 + 0x10),param_2);
  iVar1 = (int)param_2;
  if (iVar1 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}

/* Address: 0x100faefc Size: 156 bytes */
void FUN_100faefc(int param_1,long long param_2,long long param_3)

{
  long long lVar1;
  long long uVar2;
  int iVar3;
  
  lVar1 = (unsigned long long)*(unsigned int *)(param_1 + 0x18) - (unsigned long long)*(unsigned int *)(param_1 + 0x14);
  uVar2 = 0;
  if ((int)lVar1 < (int)param_3) {
    uVar2 = 0xffffffffffffffd9;
    param_3 = lVar1;
  }
  iVar3 = (int)param_3;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar2 = 0xffffffffffffffce;
    }
  }
  else {
    FUN_10002f88(param_2,(unsigned long long)**(unsigned int **)(param_1 + 0x10) +
                         (unsigned long long)*(unsigned int *)(param_1 + 0x14),param_3);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar3;
  }
  FUN_100db2f4(uVar2);
  return;
}

/* Address: 0x100faf98 Size: 260 bytes */
void FUN_100faf98(int *param_1,long long param_2,long long param_3)

{
  long long lVar1;
  long long uVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  if (iVar3 < 0) {
    FUN_100db2f4(0xffffffffffffffce);
  }
  if ((int)((unsigned long long)(unsigned int)param_1[6] - (unsigned long long)(unsigned int)param_1[5]) < iVar3) {
    lVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x218) + (int)param_1,
                         param_3 - ((unsigned long long)(unsigned int)param_1[6] - (unsigned long long)(unsigned int)param_1[5]));
    FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,lVar1 + (unsigned long long)(unsigned int)param_1[6]
                );
  }
  uVar2 = FUN_10000360(param_1[4]);
  FUN_10002598(param_1[4]);
  FUN_100db1ec();
  FUN_10002f88((unsigned long long)*(unsigned int *)param_1[4] + (unsigned long long)(unsigned int)param_1[5],param_2,param_3);
  FUN_10001b60(param_1[4],uVar2);
  iVar3 = iVar3 + param_1[5];
  param_1[5] = iVar3;
  if (param_1[6] < iVar3) {
    param_1[6] = iVar3;
  }
  return;
}

/* Address: 0x100fb0a4 Size: 116 bytes */
int * FUN_100fb0a4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x18),
     param_1 != (int *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1ba));
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return param_1;
}

/* Address: 0x100fb118 Size: 40 bytes */
void FUN_100fb118(void)

{
  FUN_100fb0a4(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fb140(void) { }











/* Address: 0x100fb16c Size: 112 bytes */
void FUN_100fb16c(int param_1,int param_2)

{
  long long in_r9;
  
  if (param_2 < 0) {
    FUN_100db2f4(0xffffffffffffffd8);
  }
  else if (*(int *)(param_1 + 0x14) < param_2) {
    in_r9 = 0xffffffffffffffd9;
    param_2 = *(int *)(param_1 + 0x14);
  }
  else {
    in_r9 = 0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  FUN_100db2f4(in_r9);
  return;
}

/* Address: 0x100fb1fc Size: 92 bytes */
void FUN_100fb1fc(int param_1,long long param_2,int param_3)

{
  if (param_3 < 0) {
    FUN_100db2f4(0xffffffffffffffce);
  }
  param_3 = *(int *)(param_1 + 0x10) + param_3;
  *(int *)(param_1 + 0x10) = param_3;
  if (*(int *)(param_1 + 0x14) < param_3) {
    *(int *)(param_1 + 0x14) = param_3;
  }
  return;
}

/* Address: 0x100fb2d8 Size: 40 bytes */
void FUN_100fb2d8(void)

{
  FUN_100fb260(0);
  return;
}

/* Address: 0x100fb44c Size: 88 bytes */
void FUN_100fb44c(int param_1,long long param_2)

{
  int iVar1;
  
  FUN_100016e0(*(int *)(param_1 + 0x10),param_2);
  FUN_100db328();
  iVar1 = (int)param_2;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return;
}

/* Address: 0x100fb4a4 Size: 228 bytes */
void FUN_100fb4a4(int *param_1,long long param_2,long long param_3)

{
  long long lVar1;
  int iVar3;
  long long uVar2;
  
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  lVar1 = lVar1 + param_3;
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8));
  if (iVar3 < (int)lVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,lVar1);
  }
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10001740(param_1[4],uVar2,param_2,param_3);
  FUN_100db328();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),lVar1);
  return;
}

/* Address: 0x100fb588 Size: 268 bytes */
void FUN_100fb588(int *param_1,long long param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar4;
  int iVar5;
  long long uVar2;
  long long lVar3;
  unsigned int *puVar6;
  unsigned int local_20;
  unsigned int local_1c [7];
  
  puVar6 = &local_20;
  local_1c[0] = param_3;
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8));
  local_20 = iVar5 - iVar4;
  if ((int)local_1c[0] < iVar5 - iVar4) {
    puVar6 = local_1c;
  }
  uVar1 = *puVar6;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10000ba0(param_1[4],uVar2,param_2,(unsigned long long)uVar1);
  FUN_100db328();
  iVar4 = *param_1;
  lVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xa8));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xb0),(unsigned long long)uVar1 + lVar3);
  return;
}

/* Address: 0x100fb694 Size: 236 bytes */
void FUN_100fb694(void)

{
  int uVar1;
  int uVar2;
  int *ppuVar3;
  
  uVar2 = uRam101171a0;
  uVar1 = uRam10116938;
  ppuVar3 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10117198,*puRam101171c4,8,uRam101171c8,uRam10116938);
  FUN_100c1c8c(uVar2,*(int *)(*(int*)((char*)ppuVar3 - 0x1b5)),0x10,(*(int*)((char*)ppuVar3 - 0x1b4)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x457)),*(int *)(*(int*)((char*)ppuVar3 - 0x1b3)),0x14,(*(int*)((char*)ppuVar3 - 0x1b2)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x1bd)),*(int *)(*(int*)((char*)ppuVar3 - 0x1b1)),0x24,(*(int*)((char*)ppuVar3 - 0x1b0)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x1bb)),*(int *)(*(int*)((char*)ppuVar3 - 0x1af)),0x18,(*(int*)((char*)ppuVar3 - 0x1ae)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x1b9)),*(int *)(*(int*)((char*)ppuVar3 - 0x1ad)),0x1c,(*(int*)((char*)ppuVar3 - 0x1ac)),uVar2);
  return;
}

/* Address: 0x100fb780 Size: 112 bytes */
int * FUN_100fb780(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc4),
     param_1 != (int *)0x0)) {
    FUN_100f6b8c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1a9));
    param_1[0x30] = 0;
  }
  return param_1;
}

/* Address: 0x100fb7f0 Size: 148 bytes */
int * FUN_100fb7f0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(200),
     param_1 != (int *)0x0)) {
    FUN_100f6b8c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1a7));
    FUN_100b02d0(param_1 + 0x31);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  return param_1;
}

/* Address: 0x100fb88c Size: 40 bytes */
void FUN_100fb88c(void)

{
  FUN_100fb780(0);
  return;
}

/* Address: 0x100fb8b4 Size: 196 bytes */
void FUN_100fb8b4(int *param_1)

{
  long long uVar1;
  int iVar2;
  char auStack_148 [328];
  
  FUN_100ebf7c(auStack_148,param_1[0x30],1);
  uVar1 = FUN_100ec060(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),uVar1);
    uVar1 = FUN_100ec0e8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_100f6f98(param_1);
  FUN_100ebff4(auStack_148,2);
  return;
}

/* Address: 0x100fb99c Size: 144 bytes */
void FUN_100fb99c(int param_1,int param_2,int param_3,int param_4)

{
  int uVar1;
  int local_10;
  int local_c;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 0xc0) = param_1;
    local_10 = param_4;
    local_c = param_3;
    FUN_100e0f78(param_2 + 0xc4,&local_10);
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar1 = FUN_100e9174();
      *(int *)(param_1 + 0xc0) = uVar1;
    }
    FUN_10117884((int)*(int **)(param_1 + 0xc0) +
                 (int)*(short *)(**(int **)(param_1 + 0xc0) + 0x150),param_2);
  }
  return;
}

/* Address: 0x100fba2c Size: 148 bytes */
void FUN_100fba2c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int uVar3;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 0xc0) = 0;
    piVar1 = *(int **)(param_1 + 0xc0);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x180) + (int)piVar1);
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 0xc0) +
                           (int)*(short *)(**(int **)(param_1 + 0xc0) + 0xf0));
      if (iVar2 != 0) {
        uVar3 = FUN_100f57c8(*(int *)(param_1 + 0xc0));
        *(int *)(param_1 + 0xc0) = uVar3;
      }
    }
  }
  return;
}

/* Address: 0x100fbac0 Size: 668 bytes */
void FUN_100fbac0(int param_1,int *param_2,char param_3)

{
  int uVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  unsigned char bVar7;
  char auStack_188 [312];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int uStack_3c;
  
  uVar1 = uRam10116bc0;
  FUN_100ebf7c(auStack_188,*(int *)(param_1 + 0xc0),1);
  piVar2 = (int *)FUN_100ec060(auStack_188);
  iVar3 = FUN_100ebf44(auStack_188);
  while (iVar3 != 0) {
    local_40 = *param_2;
    uStack_3c = param_2[1];
    bVar7 = 0;
    do {
      psVar4 = (short *)FUN_100b0388(piVar2 + 0x31,bVar7);
      if (*psVar4 != 0) {
        piVar5 = (int *)FUN_100e1088(&local_40,bVar7);
        if (*piVar5 < 0) {
          piVar5 = (int *)FUN_100e1088(&local_40,bVar7);
          local_48 = *piVar5;
          piVar5 = (int *)FUN_100e1088(piVar2 + 0xf,bVar7);
          local_50 = -*piVar5;
          piVar5 = &local_50;
          if (local_50 < local_48) {
            piVar5 = &local_48;
          }
          iVar3 = *piVar5;
          piVar5 = (int *)FUN_100e1088(&local_40,bVar7);
          *piVar5 = iVar3;
        }
        else {
          piVar5 = (int *)FUN_100e1088(&local_40,bVar7);
          if (0 < *piVar5) {
            piVar5 = (int *)FUN_100e1088(&local_40,bVar7);
            local_44 = *piVar5;
            piVar5 = (int *)FUN_100e1088(piVar2 + 0x22,bVar7);
            iVar3 = *piVar5;
            piVar5 = (int *)FUN_100e1088(piVar2 + 0xf,bVar7);
            local_4c = iVar3 - *piVar5;
            piVar5 = &local_4c;
            if (local_44 < local_4c) {
              piVar5 = &local_44;
            }
            iVar3 = *piVar5;
            piVar5 = (int *)FUN_100e1088(&local_40,bVar7);
            *piVar5 = iVar3;
          }
        }
        piVar5 = (int *)FUN_100e1088(piVar2 + 0xf,bVar7);
        piVar6 = (int *)FUN_100e1088(&local_40,bVar7);
        *piVar5 = *piVar5 + *piVar6;
      }
      bVar7 = bVar7 + 1;
    } while (bVar7 < 2);
    iVar3 = FUN_100e11c8(&local_40,uVar1);
    if (iVar3 != 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3b8));
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3e0));
    }
    piVar2 = (int *)FUN_100ec0e8(auStack_188);
    iVar3 = FUN_100ebf44(auStack_188);
  }
  FUN_100f7d30(param_1,param_2,param_3);
  FUN_100ebff4(auStack_188,2);
  return;
}

/* Address: 0x100fbd5c Size: 1504 bytes */

void FUN_100fbd5c(int *param_1,int *param_2,char param_3)

{
  int *puVar1;
  int uVar2;
  int iVar4;
  int iVar5;
  int *piVar6;
  long long uVar3;
  int local_654;
  int local_630;
  char auStack_62c [8];
  int local_624;
  int local_620;
  int local_61c;
  int local_618;
  char auStack_614 [312];
  char auStack_4dc [312];
  char auStack_3a4 [16];
  char auStack_394 [256];
  short local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  char auStack_27c [8];
  short local_274;
  short sStack_272;
  char auStack_26c [276];
  int local_158;
  char auStack_154 [276];
  int local_40;
  
  puVar1 = puRam10117370;
  iVar4 = FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x678));
  if (iVar4 != 0) {
    local_294 = 0;
    local_290 = 0;
    local_288 = 0;
    local_284 = 0;
    local_28c = *puVar1;
    *puVar1 = auStack_394;
    iVar4 = FUN_10000090(auStack_394);
    if (iVar4 == 0) {
      FUN_100ee64c(auStack_26c);
      FUN_10117884((int)*(short *)(*param_1 + 0x608) + (int)param_1,local_158);
      FUN_10117884((int)*(short *)(*param_1 + 0x2b0) + (int)param_1,local_158);
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x638),auStack_62c);
      local_624 = 0xffff8ad0;
      local_620 = 0xffff8ad0;
      local_61c = 30000;
      local_618 = 30000;
      iVar4 = local_654;
      iVar5 = FUN_100e1aac(&local_624,param_2);
      if (iVar5 == 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
        FUN_100ebf7c(auStack_614,param_1[0x30],1);
        piVar6 = (int *)FUN_100ec060(auStack_614);
        iVar4 = FUN_100ebf44(auStack_614);
        while (iVar4 != 0) {
          iVar4 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x668));
          if (iVar4 != 0) {
            if ((*param_2 == 0) || (*(short *)(piVar6 + 0x31) != 1)) {
              if ((param_2[1] != 0) && (*(short *)((int)piVar6 + 0xc6) == 1)) {
                FUN_10117884((int)*(short *)(*piVar6 + 0x4d0) + (int)piVar6);
              }
            }
            else {
              FUN_10117884((int)*(short *)(*piVar6 + 0x4d0) + (int)piVar6);
            }
          }
          piVar6 = (int *)FUN_100ec0e8(auStack_614);
          iVar4 = FUN_100ebf44(auStack_614);
        }
        FUN_100ebff4(auStack_614,2);
      }
      else {
        FUN_100ee64c(auStack_154);
        FUN_100ebf7c(auStack_4dc,param_1[0x30],1);
        piVar6 = (int *)FUN_100ec060(auStack_4dc);
        iVar5 = FUN_100ebf44(auStack_4dc);
        while (iVar5 != 0) {
          iVar4 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x668));
          if (iVar4 != 0) {
            iVar4 = piVar6[0x31];
            FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x618),auStack_3a4);
            FUN_10117884(piVar6[8] + (int)*(short *)(*(int *)piVar6[8] + 0x288),auStack_3a4,
                         auStack_27c);
            uVar2 = local_40;
            local_274 = (short)((unsigned int)iVar4 >> 0x10);
            if (param_2[1] == 0) {
LAB_100fc178:
              if ((*param_2 != 0) && (local_274 == 1)) {
LAB_100fc190:
                FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x608),local_40);
                FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x2b0),local_40);
                FUN_10003060(local_158,local_40,local_158);
              }
            }
            else {
              sStack_272 = (short)iVar4;
              if (((*param_2 == 0) || (sStack_272 != 0)) || (local_274 != 1)) {
                if (param_2[1] == 0) goto LAB_100fc178;
                if (((*param_2 != 0) && (sStack_272 == 1)) && (local_274 == 0)) {
                  uVar3 = FUN_100b0578(auStack_27c);
                  FUN_10000f30(uVar3,-(short)param_2[1],0,uVar2);
                  FUN_10117884(piVar6[8] + (int)*(short *)(*(int *)piVar6[8] + 0x4e8),local_40);
                  goto LAB_100fc1e8;
                }
                if ((param_2[1] == 0) || (sStack_272 != 1)) goto LAB_100fc178;
                goto LAB_100fc190;
              }
              uVar3 = FUN_100b0578(auStack_27c);
              FUN_10000f30(uVar3,0,-(short)*param_2,uVar2);
              FUN_10117884(piVar6[8] + (int)*(short *)(*(int *)piVar6[8] + 0x4e8),local_40);
            }
          }
LAB_100fc1e8:
          iVar4 = local_654;
          piVar6 = (int *)FUN_100ec0e8(auStack_4dc);
          iVar5 = FUN_100ebf44(auStack_4dc);
        }
        FUN_100ebff4(auStack_4dc,2);
        FUN_10002be0(local_158,*(int *)(*(int *)(*(int *)(iVar4 + -0xb0) + 0xca) + 0x1c),
                     local_158);
        FUN_10001e48(local_40);
        FUN_10001548(local_158);
        uVar2 = local_158;
        uVar3 = FUN_100b0578(auStack_62c);
        FUN_10000f30(uVar3,-(short)param_2[1],-(short)*param_2,uVar2);
        FUN_10001548(local_40);
        FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x4e8),local_158);
        FUN_100ee77c(auStack_154,2);
      }
      FUN_100ee77c(auStack_26c,2);
      *puVar1 = local_28c;
    }
    else {
      FUN_100ef5b8(local_630);
      FUN_100db158(local_294,local_290);
    }
    if (param_3 == '\0') {
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x4c8));
    }
  }
  return;
}

/* Address: 0x100fc344 Size: 40 bytes */
void FUN_100fc344(void)

{
  FUN_100fb7f0(0);
  return;
}

/* Address: 0x100fc36c Size: 92 bytes */
void FUN_100fc36c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc0);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x790),param_1);
  }
  FUN_100f6f98(param_1);
  return;
}

/* Address: 0x100fc3c8 Size: 116 bytes */
void FUN_100fc3c8(int param_1,int *param_2,char param_3)

{
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    local_4 = (int)*(short *)(param_1 + 0xc6) * param_2[1];
    local_8 = (int)*(short *)(param_1 + 0xc4) * *param_2;
    FUN_10117884((int)*(int **)(param_1 + 0xc0) +
                 (int)*(short *)(**(int **)(param_1 + 0xc0) + 0x778),&local_8,param_3);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fc43c(void) { }













/* Address: 0x100fc4ac Size: 132 bytes */
int * FUN_100fc4ac(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x2c),
     param_1 != (int *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1a1));
    *(char *)(param_1 + 8) = 1;
    *(char *)((int)param_1 + 0x21) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return param_1;
}

/* Address: 0x100fc530 Size: 40 bytes */
void FUN_100fc530(void)

{
  FUN_100fc4ac(0);
  return;
}

/* Address: 0x100fc558 Size: 68 bytes */
void FUN_100fc558(int param_1,char param_2)

{
  FUN_100bf5e4(param_1,0x74616262);
  *(char *)(param_1 + 0x20) = param_2;
  return;
}

/* Address: 0x100fc59c Size: 88 bytes */
void FUN_100fc59c(int param_1,int *param_2)

{
  char uVar1;
  
  FUN_100bf698(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 0x20) = uVar1;
  return;
}

/* Address: 0x100fc5f4 Size: 88 bytes */
void FUN_100fc5f4(int param_1,int *param_2)

{
  FUN_100bf728(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x20));
  return;
}

/* Address: 0x100fc64c Size: 144 bytes */
void FUN_100fc64c(int *param_1,int *param_2)

{
  int iVar1;
  long long uVar2;
  
  if ((param_2 == (int *)0x0) || (*(short *)(param_2 + 9) != 9)) {
    FUN_100bfe54(param_1);
  }
  else {
    iVar1 = *param_1;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x198),uVar2);
  }
  return;
}

/* Address: 0x100fc6dc Size: 192 bytes */
void FUN_100fc6dc(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0),param_2);
  if (param_1[10] == 0) {
    param_1[10] = param_1[9];
  }
  piVar1 = (int *)param_1[10];
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x180) + (int)piVar1), iVar2 != 0)) {
    FUN_10117884(param_1[10] + (int)*(short *)(*(int *)param_1[10] + 400),1);
  }
  return;
}

/* Address: 0x100fc7b4 Size: 440 bytes */
void FUN_100fc7b4(int *param_1,long long param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int bVar3;
  char auStack_150 [336];
  
  FUN_101054e0(auStack_150,param_2,param_3 == '\0');
  piVar1 = (int *)FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  do {
    if (iVar2 == 0) {
      FUN_101055f4(auStack_150,2);
      return;
    }
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0));
    if (((iVar2 == 0) ||
        (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x668) + (int)piVar1), iVar2 == 0)) ||
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1), iVar2 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((param_1[9] == 0) && (bVar3)) {
      param_1[9] = (int)piVar1;
    }
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x198));
    if (iVar2 == 0) {
      if (((*(char *)((int)param_1 + 0x21) != '\0') && (param_1[10] == 0)) && (bVar3)) {
        param_1[10] = (int)piVar1;
        FUN_101055f4(auStack_150,2);
        return;
      }
    }
    else {
      *(char *)((int)param_1 + 0x21) = 1;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),piVar1,param_3);
    }
    piVar1 = (int *)FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  } while( true );
}

/* Address: 0x100fc96c Size: 36 bytes */
void FUN_100fc96c(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100fc998 Size: 104 bytes */
int * FUN_100fc998(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x2c),
     param_1 != (int *)0x0)) {
    FUN_100fc4ac(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x19f));
  }
  return param_1;
}

/* Address: 0x100fca00 Size: 40 bytes */
void FUN_100fca00(void)

{
  FUN_100fc998(0);
  return;
}

/* Address: 0x100fca28 Size: 40 bytes */
void FUN_100fca28(long long param_1,char param_2)

{
  FUN_100fc558(param_1,param_2);
  return;
}

/* Address: 0x100fca50 Size: 460 bytes */
void FUN_100fca50(int *param_1,char param_2)

{
  int *piVar1;
  long long uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_30 [12];
  
  piVar1 = piRam101169c4;
  piVar3 = (int *)*piRam101169c4;
  iVar4 = *piVar3;
  uVar2 = FUN_10001050();
  piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(iVar4 + 0x3e0),uVar2);
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_10117884((int)*(short *)(*piVar3 + 0x818) + (int)piVar3);
    if (iVar4 == 0) {
      FUN_100ee9e8(local_30,param_2 == '\0');
      FUN_10117884((int)*(short *)(local_30[0] + 0x10) + (int)local_30);
      iVar4 = local_30[1];
      iVar5 = FUN_100eea60(local_30);
      while (iVar5 != 0) {
        piVar3 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x3e0),iVar4);
        if (((piVar3 != (int *)0x0) &&
            (iVar4 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x668)), iVar4 != 0)) &&
           (iVar4 = FUN_10117884((int)*(short *)(*piVar3 + 0x680) + (int)piVar3), iVar4 != 0)) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),piVar3,param_2);
        }
        FUN_10117884((int)*(short *)(local_30[0] + 0x18) + (int)local_30);
        iVar4 = local_30[1];
        iVar5 = FUN_100eea60(local_30);
      }
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),piVar3,param_2);
    }
  }
  return;
}

/* Address: 0x100fcc6c Size: 104 bytes */
int * FUN_100fcc6c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x2c),
     param_1 != (int *)0x0)) {
    FUN_100fc4ac(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x19d));
  }
  return param_1;
}

/* Address: 0x100fccd4 Size: 40 bytes */
void FUN_100fccd4(void)

{
  FUN_100fcc6c(0);
  return;
}

/* Address: 0x100fccfc Size: 72 bytes */
void FUN_100fccfc(int *param_1,char param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),param_1[2],param_2);
  return;
}

/* Address: 0x100fcd44 Size: 136 bytes */
void FUN_100fcd44(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10117218;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10117218,*puRam10117230,0x2c,uRam10117234,uRam10116610);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x1a0)),*(int *)(*(int*)((char*)ppuVar2 - 0x19a)),0x2c,(*(int*)((char*)ppuVar2 - 0x199)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x19e)),*(int *)(*(int*)((char*)ppuVar2 - 0x198)),0x2c,(*(int*)((char*)ppuVar2 - 0x197)),uVar1);
  return;
}

/* Address: 0x100fcdd4 Size: 136 bytes */
int * FUN_100fcdd4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x38),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x195));
    FUN_100b02d0(param_1 + 0xd);
    param_1[0xc] = 0;
    param_1[0xd] = *(int *)(*(int*)((char*)ppuVar1 - 0x398));
  }
  return param_1;
}

/* Address: 0x100fce5c Size: 40 bytes */
void FUN_100fce5c(void)

{
  FUN_100fcdd4(0);
  return;
}

/* Address: 0x100fce84 Size: 92 bytes */
void FUN_100fce84(int param_1,int param_2,int param_3)

{
  int uStack00000020;
  
  uStack00000020 = param_3;
  FUN_100c3df8(param_1,0,0,0,0,0);
  *(int *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x34) = uStack00000020;
  return;
}

/* Address: 0x100fcee0 Size: 236 bytes */
void FUN_100fcee0(int param_1)

{
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x660),0,0);
    *(char *)(*(int *)(param_1 + 0x30) + 0xb0) = 1;
    *(char *)(*(int *)(param_1 + 0x30) + 0xb5) = 0;
    local_18 = (int)*(short *)(param_1 + 0x34);
    local_14 = (int)*(short *)(param_1 + 0x36);
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x370),&local_18,0);
    FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 800))
    ;
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x780));
  }
  return;
}

/* Address: 0x100fcfd4 Size: 104 bytes */
int * FUN_100fcfd4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x84),
     param_1 != (int *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x193));
  }
  return param_1;
}

/* Address: 0x100fd03c Size: 40 bytes */
void FUN_100fd03c(void)

{
  FUN_100fcfd4(0);
  return;
}

/* Address: 0x100fd064 Size: 60 bytes */
void FUN_100fd064(void)

{
  FUN_100c4548();
  return;
}

/* Address: 0x100fd0a0 Size: 104 bytes */
long long FUN_100fd0a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = piRam101169c4;
  *(short *)(*piRam101169c4 + 0x70) = *(short *)(*piRam101169c4 + 0x70) + 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  *(short *)(*piVar1 + 0x70) = *(short *)(*piVar1 + 0x70) + -1;
  return 0;
}

/* Address: 0x100fd110 Size: 148 bytes */
int * FUN_100fd110(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x94),
     param_1 != (int *)0x0)) {
    FUN_100fcfd4(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x191));
    FUN_100b02d0((int)param_1 + 0x8e);
    *(char *)(param_1 + 0x23) = 0;
    *(int *)((int)param_1 + 0x8e) = *(int *)(*(int*)((char*)ppuVar1 - 0x398));
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  return param_1;
}

/* Address: 0x100fd1a4 Size: 40 bytes */
void FUN_100fd1a4(void)

{
  FUN_100fd110(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fd1cc(int *param_1,long long param_2,int param_3) { }





































































/* Address: 0x100fd2cc Size: 68 bytes */
void FUN_100fd2cc(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x88));
  *(int *)(param_1 + 0x88) = uVar1;
  FUN_100c3e70(param_1);
  return;
}

/* Address: 0x100fd310 Size: 188 bytes */
void FUN_100fd310(int param_1)

{
  unsigned int uVar1;
  long long uVar2;
  int local_18 [6];
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x84) + 0xa0);
    uVar2 = FUN_100b057c((unsigned long long)**(unsigned int **)(param_1 + 0x88) + 2,0);
    FUN_100b039c(local_18,uVar2,(unsigned long long)uVar1 + 0xba);
    if (uVar1 != 0) {
      uVar2 = FUN_100fcdd4(0);
      FUN_100fce84(uVar2,(unsigned long long)uVar1,local_18[0]);
      FUN_10117884((int)*(int **)(param_1 + 0x84) +
                   (int)*(short *)(**(int **)(param_1 + 0x84) + 0x208),uVar2);
    }
  }
  return;
}

/* Address: 0x100fd3cc Size: 104 bytes */
void FUN_100fd3cc(int param_1)

{
  int iVar1;
  char in_r8;
  int local_2c;
  
  if ((in_r8 != '\0') && (iVar1 = FUN_10000060(*(int *)(param_1 + 0x88)), iVar1 == 0)) {
    FUN_10002118((unsigned long long)*(unsigned int *)(local_2c + -0xb0) + 0xb2);
    FUN_10000588(*(int *)(param_1 + 0x88));
  }
  return;
}

/* Address: 0x100fd434 Size: 440 bytes */
int FUN_100fd434(int param_1,char param_2,long long param_3,int *param_4,int *param_5
                )

{
  int *piVar1;
  int iVar2;
  int *puVar5;
  long long lVar3;
  long long uVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  char auStack_28 [8];
  char auStack_20 [32];
  
  FUN_100e0f78(auStack_28,param_5);
  puVar5 = (int *)FUN_100b0368(auStack_20,auStack_28);
  lVar3 = FUN_100033c0(*puVar5,*(int *)(*(int *)(param_1 + 0x84) + 0x98));
  *(int *)(param_1 + 0x8c) = lVar3 == 0;
  if (param_2 == '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x84) + 0xa0);
    if (piVar1 != (int *)0x0) {
      uVar4 = FUN_10117884((int)*(short *)(*piVar1 + 0x7f0) + (int)piVar1,1);
      FUN_100005a0(*(int *)(piVar1[0x20] + 0x72),*(int *)(param_1 + 0x88));
      FUN_10117884((int)*(short *)(*piVar1 + 0x7f0) + (int)piVar1,uVar4);
      iVar2 = **(int **)(param_1 + 0x88);
      FUN_10001ec0(*(int **)(param_1 + 0x88),-(long long)*(short *)(iVar2 + 4),
                   -(long long)*(short *)(iVar2 + 2));
      uVar6 = FUN_100b08a4((unsigned long long)**(unsigned int **)(param_1 + 0x88) + 2,0);
      uVar7 = FUN_100b08a4((unsigned long long)**(unsigned int **)(param_1 + 0x88) + 2,1);
      FUN_10001ec0(*(int *)(param_1 + 0x88),
                   (short)param_4[1] -
                   ((short)((int)uVar7 >> 1) + (unsigned short)((int)uVar7 < 0 && (uVar7 & 1) != 0)),
                   (short)*param_4 -
                   ((short)((int)uVar6 >> 1) + (unsigned short)((int)uVar6 < 0 && (uVar6 & 1) != 0)));
    }
  }
  else {
    FUN_10001ec0(*(int *)(param_1 + 0x88),(short)param_5[1] - (short)param_4[1],
                 (short)*param_5 - (short)*param_4);
  }
  return param_1;
}

/* Address: 0x100fd5ec Size: 84 bytes */
long long FUN_100fd5ec(int param_1)

{
  int iVar1;
  long long uVar2;
  
  iVar1 = FUN_10000240();
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x8c) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* Address: 0x100fd648 Size: 120 bytes */
int * FUN_100fd648(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa4),
     param_1 != (int *)0x0)) {
    FUN_100f3c98(param_1);
    *param_1 = ppuVar1[-399];
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
  }
  return param_1;
}

/* Address: 0x100fd6c0 Size: 40 bytes */
void FUN_100fd6c0(void)

{
  FUN_100fd648(0);
  return;
}

/* Address: 0x100fd6e8 Size: 84 bytes */
void FUN_100fd6e8(int param_1)

{
  int *ppuVar1;
  long long uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar2 = FUN_100fd110(0);
  FUN_100fd1cc(uVar2,*(int *)(*(int*)((char*)ppuVar1 - 0x398)),param_1);
  *(int *)(param_1 + 0x9c) = (int)uVar2;
  return;
}

/* Address: 0x100fd73c Size: 84 bytes */
void FUN_100fd73c(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x98));
  *(int *)(param_1 + 0x98) = uVar1;
  FUN_10106060(param_1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fd790(void) { }













































































































































































/* Address: 0x100fda44 Size: 368 bytes */
int FUN_100fda44(int param_1,short *param_2)

{
  int uVar1;
  int iVar3;
  short *puVar4;
  long long uVar2;
  short *puVar5;
  char *puVar6;
  short *puVar7;
  short local_140 [4];
  char auStack_138 [276];
  int local_24;
  short local_20 [16];
  
  puVar5 = (short *)(((char*)0) + -0x140);
  puVar6 = ((char*)0) + -0x138;
  puVar7 = (short *)(((char*)0) + -0x20);
  iVar3 = FUN_10000060(*(int *)(param_1 + 0x98));
  if (iVar3 == 0) {
    uVar1 = *(int *)(param_1 + 0x98);
  }
  else {
    puVar4 = puVar7;
    if ((((char*)0) != (char *)0x20) ||
       (puVar4 = (short *)FUN_100f56e4(8), puVar4 != (short *)0x0)) {
      *puVar4 = *param_2;
      puVar4[1] = param_2[1];
      puVar4[2] = param_2[2];
      puVar4[3] = param_2[3];
    }
    FUN_100b057c(puVar7,0);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_100b057c(puVar7,1);
    FUN_100b0384();
    FUN_10002fd0();
    *puVar5 = 0xfff6;
    FUN_100b06d4(puVar7,puVar5);
    FUN_100ee64c(puVar6);
    uVar2 = FUN_100b0578(puVar7);
    FUN_10003150(local_24,uVar2);
    uVar2 = FUN_100016b0();
    FUN_10000108(uVar2,local_24,*(int *)(param_1 + 0x98));
    FUN_100005b8(*(int *)(param_1 + 0x98),4,4);
    FUN_100ee77c(puVar6,2);
    uVar1 = *(int *)(param_1 + 0x98);
  }
  return uVar1;
}

/* Address: 0x100fdbb4 Size: 168 bytes */
void FUN_100fdbb4(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10117250;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10117248,*puRam10117268,0x38,uRam1011726c,uRam10116a84);
  FUN_100c1c8c(uVar1,*(int *)(*(int*)((char*)ppuVar2 - 0x18c)),0x84,(*(int*)((char*)ppuVar2 - 0x18b)),(*(int*)((char*)ppuVar2 - 0x339)));
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x192)),*(int *)(*(int*)((char*)ppuVar2 - 0x18a)),0x94,(*(int*)((char*)ppuVar2 - 0x189)),uVar1);
  FUN_100c1c8c(ppuVar2[-400],*(int *)(*(int*)((char*)ppuVar2 - 0x188)),0xa4,(*(int*)((char*)ppuVar2 - 0x187)),(*(int*)((char*)ppuVar2 - 0x1d5)));
  return;
}

/* Address: 0x100fdc64 Size: 164 bytes */
int * FUN_100fdc64(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x5c),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x185));
    param_1[0xd] = 0;
    *(short *)((int)param_1 + 0x46) = 0;
    *(short *)(param_1 + 0x11) = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    *(short *)((int)param_1 + 0x3a) = 0;
    *(short *)(param_1 + 0xe) = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0xc] = 0;
    *(short *)(param_1 + 0x15) = 0;
  }
  return param_1;
}

/* Address: 0x100fdd08 Size: 40 bytes */
void FUN_100fdd08(void)

{
  FUN_100fdc64(0);
  return;
}

/* Address: 0x100fdd30 Size: 536 bytes */
void FUN_100fdd30(int *param_1,int *param_2,long long param_3,char param_4)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  int *puVar4;
  long long uVar5;
  short sVar6;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar2 = puRam10117370;
  uVar5 = 0;
  if (param_2 != (int *)0x0) {
    uVar5 = FUN_10117884((int)*(short *)(*param_2 + 0x218) + (int)param_2,param_3);
  }
  FUN_100c3df8(param_1,param_3,uVar5,1,1,uVar5);
  param_1[0xc] = (int)param_2;
  piVar1 = (int *)param_2[0x20];
  param_1[0xd] = (int)piVar1;
  iVar3 = *piVar1;
  *(short *)(param_1 + 0xe) = *(short *)(iVar3 + 0x20);
  *(short *)((int)param_1 + 0x3a) = *(short *)(iVar3 + 0x22);
  sVar6 = *(short *)(iVar3 + 0x22) - *(short *)(iVar3 + 0x20);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puVar2;
  *puVar2 = auStack_138;
  iVar3 = FUN_10000090(auStack_138);
  if (iVar3 == 0) {
    if (param_4 != '\0') {
      puVar4 = (int *)FUN_100f15e0(sVar6);
      if (0 < sVar6) {
        FUN_10002340((unsigned long long)**(unsigned int **)(*(int *)param_1[0xd] + 0x3e) +
                     (long long)*(short *)(param_1 + 0xe),*puVar4,sVar6);
      }
      param_1[0xf] = (int)puVar4;
      *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0xe) - *(short *)((int)param_1 + 0x3a);
      iVar3 = FUN_100f15e0(0);
      param_1[0x14] = iVar3;
    }
    if (*(char *)((int)param_2 + 0xc3) == '\x01') {
      iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x818),
                           *(short *)(*(int *)param_1[0xd] + 0x20),
                           *(short *)(*(int *)param_1[0xd] + 0x22));
      if (iVar3 != 0) {
        uVar5 = FUN_100f1574(1);
        iVar3 = FUN_10000618(param_1[0xd]);
        param_1[0x10] = iVar3;
        FUN_100f1574(uVar5);
        FUN_100db26c(param_1[0x10]);
        iVar3 = FUN_10001c20(param_1[0x10]);
        param_1[0x16] = iVar3;
      }
    }
    *puVar2 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_38,local_34);
  }
  return;
}

/* Address: 0x100fdf48 Size: 132 bytes */
void FUN_100fdf48(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0x3c));
  *(int *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0x40));
  *(int *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0x48));
  *(int *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0x4c));
  *(int *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = uVar1;
  FUN_100c3e70(param_1);
  return;
}

/* Address: 0x100fdfcc Size: 136 bytes */
void FUN_100fdfcc(int param_1)

{
  long long lVar1;
  int *puVar2;
  int local_18;
  int local_14 [5];
  
  puVar2 = &local_18;
  if (*(short *)(param_1 + 0x38) < *(short *)(param_1 + 0x3a)) {
    FUN_100015f0(*(int *)(param_1 + 0x34));
  }
  lVar1 = -((long long)*(short *)(param_1 + 0x54) + (unsigned long long)*(unsigned int *)(param_1 + 0x58));
  local_14[0] = (int)lVar1;
  local_18 = 0;
  if (0 < lVar1) {
    puVar2 = local_14;
  }
  FUN_100f16f8(*(int *)(param_1 + 0x50),*puVar2);
  return;
}

/* Address: 0x100fe054 Size: 256 bytes */
void FUN_100fe054(int param_1)

{
  int uVar1;
  int *puVar2;
  int iVar5;
  long long uVar3;
  long long uVar4;
  int iVar6;
  
  if (*(short *)(param_1 + 0x44) < *(short *)(param_1 + 0x46)) {
    uVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x84);
    iVar5 = FUN_10001c20(uVar1);
    uVar3 = FUN_100ef9b8(*(int *)(param_1 + 0x48));
    if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
      puVar2 = *(int **)(param_1 + 0x48);
      uVar4 = FUN_10001c20();
      FUN_10001608(*puVar2,uVar4,*(int *)(param_1 + 0x4c),*(int *)(param_1 + 0x34));
    }
    else {
      puVar2 = *(int **)(param_1 + 0x48);
      uVar4 = FUN_10001c20();
      FUN_10001620(*puVar2,uVar4,*(int *)(param_1 + 0x34));
    }
    FUN_10001b60(*(int *)(param_1 + 0x48),uVar3);
    iVar6 = FUN_10001c20(uVar1);
    if (iVar6 <= iVar5) {
      FUN_100db2f4(0xffffffffffffff94);
    }
    *(char *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
  }
  return;
}

/* Address: 0x100fe154 Size: 148 bytes */
void FUN_100fe154(int param_1)

{
  long long lVar1;
  int *puVar2;
  int local_18;
  int local_14 [5];
  
  puVar2 = &local_18;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_10000840(*(short *)(param_1 + 0x44),*(short *)(param_1 + 0x46),
                 *(int *)(param_1 + 0x34));
    FUN_100015f0(*(int *)(param_1 + 0x34));
  }
  lVar1 = (long long)*(short *)(param_1 + 0x54) + (unsigned long long)*(unsigned int *)(param_1 + 0x58);
  local_14[0] = (int)lVar1;
  local_18 = 0;
  if (0 < lVar1) {
    puVar2 = local_14;
  }
  FUN_100f16f8(*(int *)(param_1 + 0x50),*puVar2);
  return;
}

/* Address: 0x100fe1e8 Size: 64 bytes */
void FUN_100fe1e8(int param_1)

{
  FUN_10000840(*(short *)(param_1 + 0x38),*(short *)(param_1 + 0x3a),
               *(int *)(param_1 + 0x34));
  return;
}

/* Address: 0x100fe228 Size: 260 bytes */
void FUN_100fe228(int param_1)

{
  int uVar1;
  short sVar5;
  int iVar3;
  long long uVar2;
  int iVar4;
  
  FUN_10000840(*(short *)(param_1 + 0x38),*(short *)(param_1 + 0x38),
               *(int *)(param_1 + 0x34));
  sVar5 = FUN_10001c20(*(int *)(param_1 + 0x3c));
  if (0 < sVar5) {
    uVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x84);
    iVar3 = FUN_10001c20(uVar1);
    uVar2 = FUN_100ef9b8(*(int *)(param_1 + 0x3c));
    if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
      FUN_10001608(**(int **)(param_1 + 0x3c),sVar5,*(int *)(param_1 + 0x40),
                   *(int *)(param_1 + 0x34));
    }
    else {
      FUN_10001620(**(int **)(param_1 + 0x3c),sVar5,*(int *)(param_1 + 0x34));
    }
    FUN_10001b60(*(int *)(param_1 + 0x3c),uVar2);
    iVar4 = FUN_10001c20(uVar1);
    if (iVar4 <= iVar3) {
      FUN_100db2f4(0xffffffffffffff94);
    }
    *(char *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
  }
  return;
}

/* Address: 0x100fe32c Size: 148 bytes */
void FUN_100fe32c(int *param_1)

{
  if (param_1[1] != 0x68) {
    FUN_10117884((int)*(short *)(*param_1 + 0x160) + (int)param_1);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168));
  if (param_1[1] != 0x68) {
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  }
  return;
}

/* Address: 0x100fe3c0 Size: 112 bytes */
void FUN_100fe3c0(int *param_1)

{
  int iVar1;
  
  FUN_100c40c4(param_1);
  if ((param_1[0xc] != 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x140) + (int)param_1), iVar1 != 0)) {
    FUN_100f4f94(param_1[0xc],param_1);
  }
  return;
}

/* Address: 0x100fe430 Size: 88 bytes */
void FUN_100fe430(int param_1,int param_2,int param_3)

{
  if ((param_2 == 0x1c) && (param_3 == *(int *)(param_1 + 0x30))) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x228));
  }
  else {
    FUN_100c4148();
  }
  return;
}

/* Address: 0x100fe488 Size: 92 bytes */
void FUN_100fe488(int *param_1)

{
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  return;
}

/* Address: 0x100fe4e4 Size: 220 bytes */
void FUN_100fe4e4(int *param_1)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x338),param_1[0xc]);
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x180));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  if (param_1[1] != 0x68) {
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  }
  return;
}

/* Address: 0x100fe5c0 Size: 152 bytes */
void FUN_100fe5c0(int *param_1)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x338),param_1[0xc]);
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  return;
}

/* Address: 0x100fe660 Size: 104 bytes */
int * FUN_100fe660(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x60),
     param_1 != (int *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x183));
  }
  return param_1;
}

/* Address: 0x100fe6c8 Size: 40 bytes */
void FUN_100fe6c8(void)

{
  FUN_100fe660(0);
  return;
}

/* Address: 0x100fe6f0 Size: 100 bytes */
void FUN_100fe6f0(int param_1,long long param_2,long long param_3)

{
  long long lVar1;
  
  *(char *)(param_1 + 0x5c) = 0;
  FUN_100fdd30(param_1,param_2,param_3,1);
  *(char *)(param_1 + 0x1f) = 1;
  lVar1 = -param_3 + 0x68;
  *(char *)(param_1 + 0x1e) = (char)lVar1 + (-(lVar1 == 0) - ((char)-param_3 + 'g'));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fe754(int param_1) { }

















/* Address: 0x100fe78c Size: 588 bytes */
void FUN_100fe78c(int *param_1)

{
  int *puVar1;
  int iVar2;
  int local_1b4;
  char auStack_180 [16];
  int local_170;
  int uStack_16c;
  int uStack_168;
  int uStack_164;
  int local_160;
  int uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int *local_140;
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar1 = puRam10117370;
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_100f083c(auStack_180,1,0,0xc,*(int *)(local_1b4 + -0x1830));
  local_158 = 0x32;
  local_154 = 100;
  local_160 = 0x32;
  uStack_15c = 100;
  local_150 = 8;
  local_14c = 10;
  local_148 = 0;
  local_144 = 10;
  local_170 = 8;
  uStack_16c = 10;
  uStack_168 = 0;
  uStack_164 = 10;
  local_140 = (int *)FUN_100fff20(0);
  FUN_101001e0(local_140,0,0,*(int *)(local_1b4 + -0xce0),&local_160,0,4,&local_170);
  *(char *)((int)local_140 + 0xc2) = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = *puVar1;
  *puVar1 = auStack_13c;
  iVar2 = FUN_10000090(auStack_13c);
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x148) + (int)param_1);
    if (iVar2 == 0) {
      FUN_100f12a8();
    }
    *puVar1 = local_34;
  }
  else {
    local_140 = (int *)FUN_100f57c8(local_140);
    FUN_100db158(local_3c,local_38);
  }
  FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x828),param_1[0xf]);
  FUN_100f12a8();
  if (*(char *)((int)local_140 + 0xc3) == '\x01') {
    FUN_100015d8(0,0x7fff,param_1[0x10],0,local_140[0x20]);
  }
  FUN_100f12a8();
  *(char *)((int)local_140 + 0xc5) = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),local_140);
  *(char *)(param_1 + 0x17) = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100fe9d8(int param_1) { }















/* Address: 0x100fea14 Size: 104 bytes */
int * FUN_100fea14(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x5c),
     param_1 != (int *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x181));
  }
  return param_1;
}

/* Address: 0x100fea7c Size: 40 bytes */
void FUN_100fea7c(void)

{
  FUN_100fea14(0);
  return;
}

/* Address: 0x100feaa4 Size: 644 bytes */
void FUN_100feaa4(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int *puVar4;
  int iVar5;
  short sVar6;
  int *puVar7;
  int local_158;
  int local_154;
  int local_150 [2];
  int local_148;
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar4 = puRam10117370;
  piVar3 = piRam101169f4;
  puVar7 = &local_158;
  local_150[0] = 0x25252525;
  FUN_100fdd30(param_1,param_2,0x69,1);
  local_148 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = *puVar4;
  *puVar4 = auStack_144;
  iVar5 = FUN_10000090(auStack_144);
  if (iVar5 == 0) {
    iVar5 = FUN_100f15e0(0);
    if (*(char *)(param_2 + 0xc3) == '\x01') {
      local_148 = FUN_100f15e0(0);
    }
    piVar2 = (int *)*piVar3;
    sVar6 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x1a8),iVar5,local_150);
    if (sVar6 < 1) {
      FUN_100ef510(iVar5);
      FUN_100ef510(local_148);
    }
    else {
      param_1[0x12] = iVar5;
      sVar1 = *(short *)(*(int *)param_1[0xd] + 0x20);
      *(short *)(param_1 + 0x11) = sVar1;
      *(short *)((int)param_1 + 0x46) = sVar1 + sVar6;
      *(short *)(param_1 + 0x15) =
           sVar6 - (*(short *)((int)param_1 + 0x3a) - *(short *)(param_1 + 0xe));
      if (*(char *)(param_2 + 0xc3) == '\x01') {
        piVar3 = *(int **)(*piVar3 + 0x4c);
        iVar5 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x6c0),local_148,0x7374796c);
        if (iVar5 < 1) {
          FUN_100ef510(local_148);
        }
        else {
          param_1[0x13] = local_148;
          param_1[0x16] = iVar5 - param_1[0x16];
        }
      }
      local_154 = (int)
                  ((long long)*(short *)(param_1 + 0x15) + (unsigned long long)(unsigned int)param_1[0x16]);
      local_158 = 0;
      if (0 < (long long)((long long)*(short *)(param_1 + 0x15) + (unsigned long long)(unsigned int)param_1[0x16])) {
        puVar7 = &local_154;
      }
      FUN_100f16f8(param_1[0x14],*puVar7);
      FUN_100f12a8();
    }
    *puVar4 = local_3c;
  }
  else {
    if (param_1[0x12] != 0) {
      FUN_100ef510(0);
    }
    if (param_1[0x13] != 0) {
      FUN_100ef510(0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_44,local_40);
  }
  return;
}

/* Address: 0x100fed30 Size: 104 bytes */
int * FUN_100fed30(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x78),
     param_1 != (int *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x17f));
  }
  return param_1;
}

/* Address: 0x100fed98 Size: 40 bytes */
void FUN_100fed98(void)

{
  FUN_100fed30(0);
  return;
}

/* Address: 0x100fedc0 Size: 116 bytes */
void FUN_100fedc0(int param_1,int param_2,int *param_3,long long param_4,short param_5)

{
  int uVar1;
  int uVar2;
  
  FUN_100fdd30(param_1,param_2,param_4,0);
  uVar1 = *(int *)(param_2 + 0xb4);
  uVar2 = *(int *)(param_2 + 0xb8);
  *(int *)(param_1 + 0x5e) = *(int *)(param_2 + 0xb0);
  *(int *)(param_1 + 0x62) = uVar1;
  *(int *)(param_1 + 0x66) = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(int *)(param_1 + 0x6a) = *param_3;
  *(int *)(param_1 + 0x6e) = uVar1;
  *(int *)(param_1 + 0x72) = uVar2;
  *(short *)(param_1 + 0x5c) = param_5;
  return;
}

/* Address: 0x100fee4c Size: 80 bytes */
void FUN_100fee4c(int param_1,long long param_2)

{
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x808),
               *(short *)(param_1 + 0x38),*(short *)(param_1 + 0x3a),
               *(short *)(param_1 + 0x5c),param_2,1);
  return;
}

/* Address: 0x100fee9c Size: 172 bytes */
void FUN_100fee9c(int param_1,long long param_2)

{
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x3a8))
  ;
  FUN_100015d8(*(short *)(param_1 + 0x38),*(short *)(param_1 + 0x3a),param_2,1,
               *(int *)(param_1 + 0x34));
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x7f8))
  ;
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x770),
               1);
  *(char *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
  return;
}

/* Address: 0x100fef48 Size: 96 bytes */
void FUN_100fef48(int *param_1)

{
  int local_18;
  int uStack_14;
  int uStack_10;
  
  local_18 = *(int *)((int)param_1 + 0x6a);
  uStack_14 = *(int *)((int)param_1 + 0x6e);
  uStack_10 = *(int *)((int)param_1 + 0x72);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),&local_18);
  *(unsigned short *)(param_1 + 0x17) = *(unsigned short *)(param_1 + 0x17) & 0xffdf;
  return;
}

/* Address: 0x100fefa8 Size: 160 bytes */
void FUN_100fefa8(int *param_1)

{
  int local_18;
  int uStack_14;
  int uStack_10;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  if (*(char *)(param_1[0xc] + 0xc3) == '\0') {
    local_18 = *(int *)((int)param_1 + 0x5e);
    uStack_14 = *(int *)((int)param_1 + 0x62);
    uStack_10 = *(int *)((int)param_1 + 0x66);
    FUN_10117884((int)*(short *)(*param_1 + 0x188) + (int)param_1,&local_18);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),param_1[0x10]);
  }
  return;
}

/* Address: 0x100ff048 Size: 88 bytes */
void FUN_100ff048(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  return;
}

/* Address: 0x100ff0a0 Size: 8 bytes */
int FUN_100ff0a0(void)

{
  return uRam101172a8;
}

/* Address: 0x100ff0b0 Size: 104 bytes */
int * FUN_100ff0b0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x60),
     param_1 != (int *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x17d));
  }
  return param_1;
}

/* Address: 0x100ff118 Size: 40 bytes */
void FUN_100ff118(void)

{
  FUN_100ff0b0(0);
  return;
}

/* Address: 0x100ff140 Size: 236 bytes */
void FUN_100ff140(int *param_1,long long param_2,short param_3)

{
  short uVar1;
  int *puVar2;
  int iVar3;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = puRam10117370;
  FUN_100fdd30(param_1,param_2,0x78,1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar2;
  *puVar2 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    uVar1 = *(short *)(*(int *)param_1[0xd] + 0x20);
    *(short *)(param_1 + 0x11) = uVar1;
    *(short *)((int)param_1 + 0x46) = uVar1;
    param_1[0x12] = 0;
    iVar3 = FUN_100f15e0(0);
    param_1[0x12] = iVar3;
    *(char *)(param_1 + 0x17) = 0;
    *(short *)((int)param_1 + 0x5e) = param_3;
    *puVar2 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ff22c(int param_1) { }

















/* Address: 0x100ff268 Size: 200 bytes */
void FUN_100ff268(int param_1,short param_2)

{
  int register0x0000000c;
  long long uVar1;
  short sVar3;
  long long lVar2;
  int *puVar4;
  short uStack0000001e;
  int local_18;
  int local_14 [5];
  
  puVar4 = &local_18;
  uStack0000001e = param_2;
  uVar1 = FUN_100f1574(1);
  FUN_10001650((char *)((int)register0x0000000c + 0x1f),*(int *)(param_1 + 0x48),1);
  FUN_100db2f4();
  FUN_100f1574(uVar1);
  *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
  sVar3 = *(short *)(param_1 + 0x54) + 1;
  *(short *)(param_1 + 0x54) = sVar3;
  lVar2 = -((unsigned long long)*(unsigned int *)(param_1 + 0x58) + (long long)sVar3);
  local_14[0] = (int)lVar2;
  local_18 = 0;
  if (0 < lVar2) {
    puVar4 = local_14;
  }
  FUN_100f16f8(*(int *)(param_1 + 0x50),*puVar4);
  return;
}

/* Address: 0x100ff330 Size: 544 bytes */
void FUN_100ff330(int param_1,unsigned int *param_2,short param_3)

{
  short sVar1;
  int iVar3;
  long long lVar2;
  long long lVar4;
  short local_40;
  short local_3e;
  char auStack_3c [16];
  char local_2c [44];
  
  iVar3 = FUN_10001350(*param_2,param_3 + -1);
  lVar4 = 1;
  while (sVar1 = (short)lVar4, 0 < iVar3) {
    lVar4 = (long long)(short)(sVar1 + 1);
    iVar3 = FUN_10001350(*param_2,param_3 - (sVar1 + 1));
  }
  param_3 = param_3 - sVar1;
  if ((int)lVar4 == 1) {
    local_2c[0] = *(char *)(*param_2 + (int)param_3);
  }
  else {
    FUN_10002340((unsigned long long)*param_2 + (long long)param_3,local_2c,lVar4);
  }
  if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
    FUN_10000798((long long)param_3,auStack_3c,&local_3e,&local_40,*(int *)(param_1 + 0x34));
    iVar3 = FUN_100f08f4(auStack_3c,(unsigned long long)**(unsigned int **)(param_1 + 0x40) + 10,0xc);
    if (iVar3 == 0) {
      *(char *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
      lVar2 = FUN_10001c20(*(int *)(param_1 + 0x40));
      FUN_100f16f8(*(int *)(param_1 + 0x40),lVar2 + 0x14);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x14;
      FUN_10002340((unsigned long long)**(unsigned int **)(param_1 + 0x40) + 2,
                   (unsigned long long)**(unsigned int **)(param_1 + 0x40) + 0x16,lVar2 + -2);
      *(short *)**(int **)(param_1 + 0x40) = *(short *)**(int **)(param_1 + 0x40) + 1;
      iVar3 = **(int **)(param_1 + 0x40);
      *(short *)(iVar3 + 6) = local_3e;
      *(short *)(iVar3 + 8) = local_40;
      FUN_10002340(auStack_3c,iVar3 + 10,0xc);
    }
    *(int *)(**(int **)(param_1 + 0x40) + 2) = *(int *)(**(int **)(param_1 + 0x40) + 2) + -1;
  }
  lVar2 = FUN_10001c20(*(int *)(param_1 + 0x3c));
  FUN_100f16f8(*(int *)(param_1 + 0x50),lVar2 + lVar4 + (unsigned long long)*(unsigned int *)(param_1 + 0x58))
  ;
  FUN_100020b8(*(int *)(param_1 + 0x3c),0,0,0,local_2c,lVar4);
  FUN_100db1ec();
  *(short *)(param_1 + 0x38) = param_3;
  *(short *)(param_1 + 0x44) = param_3;
  *(short *)(param_1 + 0x46) = param_3;
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar1;
  return;
}

/* Address: 0x100ff550 Size: 240 bytes */
void FUN_100ff550(int param_1,int *param_2,short param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *puVar4;
  long long lVar5;
  int local_20;
  int local_1c [7];
  
  puVar4 = &local_20;
  iVar2 = FUN_10001350(*param_2,param_3 + -1);
  lVar5 = 1;
  while (sVar1 = (short)lVar5, 0 < iVar2) {
    lVar5 = (long long)(short)(sVar1 + 1);
    iVar2 = FUN_10001350(*param_2,param_3 - (sVar1 + 1));
  }
  lVar5 = -((*(short *)(param_1 + 0x54) - lVar5) + (unsigned long long)*(unsigned int *)(param_1 + 0x58));
  local_1c[0] = (int)lVar5;
  local_20 = 0;
  if (0 < lVar5) {
    puVar4 = local_1c;
  }
  FUN_100f16f8(*(int *)(param_1 + 0x50),*puVar4);
  sVar3 = *(short *)(param_1 + 0x46) - sVar1;
  *(short *)(param_1 + 0x46) = sVar3;
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar1;
  FUN_100f16f8(*(int *)(param_1 + 0x48),
               (long long)sVar3 - (long long)*(short *)(param_1 + 0x44));
  return;
}

/* Address: 0x100ff640 Size: 732 bytes */
void FUN_100ff640(int param_1,unsigned int *param_2,short param_3,short param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  long long lVar6;
  int *puVar7;
  long long lVar8;
  long long lVar9;
  int local_50;
  int local_4c;
  short local_48;
  short local_46;
  char auStack_44 [16];
  char local_34 [52];
  
  lVar8 = (long long)param_3;
  puVar7 = &local_50;
  iVar3 = FUN_10001c20(param_2);
  iVar4 = (int)param_3;
  if ((iVar4 == param_4) && (iVar4 < iVar3)) {
    lVar9 = 0;
    sVar5 = 0;
    if (iVar4 <= iVar3) {
      iVar4 = FUN_10001350(*param_2,lVar8);
      while (0 < iVar4) {
        sVar5 = (short)lVar9 + 1;
        lVar9 = (long long)sVar5;
        if (iVar3 < (int)(lVar8 + lVar9)) break;
        iVar4 = FUN_10001350(*param_2,(short)(lVar8 + lVar9));
      }
    }
    sVar5 = sVar5 + 1;
    lVar9 = (long long)sVar5;
    if (sVar5 == 1) {
      local_34[0] = *(char *)(*param_2 + (int)param_3);
    }
    else {
      FUN_10002340((unsigned long long)*param_2 + lVar8,local_34,lVar9);
    }
    if ((param_3 < *(short *)(param_1 + 0x44)) || (*(short *)(param_1 + 0x46) <= param_3)) {
      lVar6 = FUN_10001c20(*(int *)(param_1 + 0x3c));
      if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
        FUN_10000798(lVar8,auStack_44,&local_46,&local_48,*(int *)(param_1 + 0x34));
        iVar3 = FUN_100f08f4(auStack_44,
                             (short *)**(int **)(param_1 + 0x40) +
                             *(short *)**(int **)(param_1 + 0x40) * 10 + -5,0xc);
        if (iVar3 == 0) {
          *(char *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
          lVar8 = FUN_10001c20(*(int *)(param_1 + 0x40));
          FUN_100f16f8(*(int *)(param_1 + 0x40),lVar8 + 0x14);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x14;
          *(short *)**(int **)(param_1 + 0x40) =
               *(short *)**(int **)(param_1 + 0x40) + 1;
          psVar2 = (short *)**(int **)(param_1 + 0x40);
          sVar1 = *psVar2;
          *(int *)(psVar2 + sVar1 * 10 + -9) = (int)lVar6;
          psVar2[sVar1 * 10 + -7] = local_46;
          psVar2[sVar1 * 10 + -6] = local_48;
          FUN_10002340(auStack_44,psVar2 + sVar1 * 10 + -5,0xc);
        }
      }
      FUN_100f16f8(*(int *)(param_1 + 0x50),
                   lVar6 + lVar9 + (unsigned long long)*(unsigned int *)(param_1 + 0x58));
      FUN_100020b8(*(int *)(param_1 + 0x3c),lVar6,0,0,local_34,lVar9);
      FUN_100db1ec();
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar5;
    }
    else {
      lVar6 = -((*(short *)(param_1 + 0x54) - lVar9) + (unsigned long long)*(unsigned int *)(param_1 + 0x58));
      local_4c = (int)lVar6;
      local_50 = 0;
      if (0 < lVar6) {
        puVar7 = &local_4c;
      }
      FUN_100f16f8(*(int *)(param_1 + 0x50),*puVar7);
      *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) - sVar5;
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar5;
      FUN_100020b8(*(int *)(param_1 + 0x48),lVar8 - *(short *)(param_1 + 0x44),0,lVar9,
                   local_34,0);
      FUN_100db1ec();
    }
  }
  return;
}

/* Address: 0x100ff91c Size: 644 bytes */
void FUN_100ff91c(int *param_1,short param_2)

{
  short sVar1;
  int uVar2;
  int *puVar3;
  int iVar4;
  char uVar6;
  short sVar5;
  char auStack_148 [8];
  char local_140;
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar3 = puRam10117370;
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x4c8));
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  iVar4 = *(int *)param_1[0xd];
  sVar1 = *(short *)(iVar4 + 0x20);
  sVar5 = *(short *)(iVar4 + 0x22);
  uVar2 = *(int *)(iVar4 + 0x3e);
  FUN_100ee844(auStack_148,*(char *)(param_1[0xc] + 0xbe));
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = *puVar3;
  *puVar3 = auStack_13c;
  iVar4 = FUN_10000090(auStack_13c);
  if (iVar4 == 0) {
    uVar6 = FUN_100f1574(1);
    if (param_2 == 0x7f) {
      FUN_10117884((int)*(short *)(*param_1 + 0x1a0) + (int)param_1,uVar2,sVar1,sVar5);
    }
    else if (param_2 == 8) {
      if (((*(short *)(param_1 + 0xe) < sVar1) || (sVar1 < 1)) || (sVar1 != sVar5)) {
        if (*(short *)(param_1 + 0x11) < *(short *)((int)param_1 + 0x46)) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),uVar2,sVar1);
        }
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),uVar2,sVar1);
      }
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),param_2);
    }
    FUN_100f1574(uVar6);
    *puVar3 = local_34;
  }
  else {
    FUN_100f1574(local_140);
    FUN_100db158(local_3c,local_38);
  }
  if (param_2 == 0x7f) {
    if (sVar1 == sVar5) {
      sVar5 = FUN_10001c20(uVar2);
      if (sVar1 < sVar5) {
        FUN_100029e8(0x1d,param_1[0xd]);
        FUN_100029e8(8,param_1[0xd]);
      }
    }
    else {
      FUN_100015f0(param_1[0xd]);
    }
  }
  else {
    FUN_100029e8(param_2,param_1[0xd]);
  }
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  FUN_100ee8e8(auStack_148,2);
  return;
}

/* Address: 0x100ffba0 Size: 60 bytes */
void FUN_100ffba0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),*(short *)((int)param_1 + 0x5e)
              );
  return;
}

/* Address: 0x100ffbdc Size: 436 bytes */
void FUN_100ffbdc(int *param_1)

{
  int bVar1;
  int iVar3;
  long long lVar2;
  int *puVar4;
  char auStack_30 [16];
  int local_20;
  int local_1c;
  char auStack_18 [2];
  char auStack_16 [22];
  
  puVar4 = &local_20;
  iVar3 = FUN_10001c20(param_1[0xf]);
  if ((int)*(short *)((int)param_1 + 0x3a) - (int)*(short *)(param_1 + 0xe) == iVar3) {
    bVar1 = false;
    if ((*(char *)(param_1[0xc] + 0xc3) == '\x01') &&
       (*(short *)((int)param_1 + 0x3a) == *(short *)(param_1 + 0xe))) {
      FUN_10000798(*(short *)(param_1 + 0xe),auStack_30,auStack_18,auStack_16,param_1[0xd]);
      lVar2 = FUN_100f08f4(auStack_30,(unsigned long long)*(unsigned int *)param_1[0x10] + 10,0xc);
      bVar1 = lVar2 == 0;
    }
    if (bVar1) {
      param_1[0x13] = param_1[0x10];
    }
    FUN_100fe5c0(param_1);
    if (bVar1) {
      param_1[0x13] = 0;
    }
  }
  else {
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
    lVar2 = FUN_10001c20(param_1[0xf]);
    FUN_10000840((long long)*(short *)(param_1 + 0xe),*(short *)(param_1 + 0xe) + lVar2,param_1[0xd])
    ;
    FUN_100015f0(param_1[0xd]);
    local_1c = (int)-((long long)*(short *)(param_1 + 0x15) + (unsigned long long)(unsigned int)param_1[0x16]);
    local_20 = 0;
    if (0 < (long long)-((long long)*(short *)(param_1 + 0x15) + (unsigned long long)(unsigned int)param_1[0x16])) {
      puVar4 = &local_1c;
    }
    FUN_100f16f8(param_1[0x14],*puVar4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168));
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  }
  return;
}

/* Address: 0x100ffd90 Size: 76 bytes */
void FUN_100ffd90(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0));
  FUN_100fe4e4(param_1);
  return;
}

/* Address: 0x100ffe50 Size: 200 bytes */
void FUN_100ffe50(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10117288;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10117288,*puRam101172b0,0x5c,uRam101172b4,uRam10116a84);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x184)),*(int *)(*(int*)((char*)ppuVar2 - 0x17a)),0x60,(*(int*)((char*)ppuVar2 - 0x179)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x182)),*(int *)(*(int*)((char*)ppuVar2 - 0x178)),0x5c,(*(int*)((char*)ppuVar2 - 0x177)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x180)),*(int *)(*(int*)((char*)ppuVar2 - 0x176)),0x78,(*(int*)((char*)ppuVar2 - 0x175)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x17e)),*(int *)(*(int*)((char*)ppuVar2 - 0x174)),0x60,(*(int*)((char*)ppuVar2 - 0x173)),uVar1);
  return;
}



