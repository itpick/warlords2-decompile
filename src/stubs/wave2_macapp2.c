/*
 * wave2_macapp2.c - Reconstructed functions (wave2_macapp2)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 1113 functions in address range wave2_macapp2
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
long long FUN_100b0060(long long param_1,int param_2);
unsigned int * FUN_100b0078(long long param_1,unsigned int *param_2);
void FUN_100b0128(long long param_1,long long param_2);
void FUN_100b0214(int *param_1,int *param_2);
void FUN_100b0220(int param_1);
int FUN_100b0324(short *param_1);
void FUN_100b0384(void);
long long FUN_100b0388(long long param_1,char param_2);
void FUN_100b039c(int *param_1,short *param_2,short *param_3);
void FUN_100b0408(int *param_1,short *param_2,short *param_3);
void FUN_100b0498(short *param_1,short *param_2);
long long FUN_100b04bc(short *param_1,short *param_2);
long long FUN_100b04f0(short *param_1,short *param_2);
int FUN_100b0524(short *param_1);
void FUN_100b0574(void);
void FUN_100b0590(short *param_1,short *param_2);
void FUN_100b05d4(short *param_1,short *param_2,short *param_3);
void FUN_100b0618(short *param_1,short *param_2,short *param_3);
void FUN_100b065c(short *param_1,short *param_2);
void FUN_100b0698(short *param_1,short *param_2);
long long FUN_100b0718(short *param_1,short *param_2);
long long FUN_100b076c(short *param_1);
void FUN_100b07a0(short *param_1,short *param_2,short *param_3);
long long FUN_100b0870(short *param_1);
short FUN_100b08a4(short *param_1,char param_2);
long long FUN_100b0914(short *param_1,short *param_2);
void FUN_100b0b10(void);
void FUN_100b0b34(int *param_1,unsigned long long param_2);
void FUN_100b0c24(void);
int FUN_100b0c48(int *param_1,char param_2,char param_3,char param_4);
void FUN_100b0d0c(long long param_1,long long param_2);
long long FUN_100b0d34(int param_1,long long param_2,unsigned int param_3,long long param_4);
void FUN_100b0e24(long long param_1,long long param_2);
unsigned short * FUN_100b0e4c(unsigned short *param_1);
unsigned short * FUN_100b0e8c(unsigned short *param_1,short param_2,unsigned short param_3);
int FUN_100b0efc(unsigned short *param_1,int param_2);
void FUN_100b0f20(unsigned short *param_1,unsigned int param_2,char param_3);
void FUN_100b0f54(unsigned short *param_1,long long param_2,char param_3);
short * FUN_100b0fb0(short *param_1,short param_2,long long param_3,int param_4);
long long FUN_100b1044(long long param_1,int param_2,int param_3);
void FUN_100b1234(int param_1,unsigned long long param_2);
unsigned int FUN_100b12c0(int param_1,int param_2);
int FUN_100b1348(int param_1);
void FUN_100b1354(int param_1,int param_2);
void FUN_100b1364(long long param_1,unsigned long long param_2);
int FUN_100b1464(int param_1);
long long FUN_100b1478(int param_1,int param_2);
void FUN_100b1518(int param_1,long long param_2,int *param_3);
long long FUN_100b15ac(int param_1,int param_2);
void FUN_100b1608(unsigned int param_1,unsigned int param_2,unsigned int param_3);
void FUN_100b1654(int param_1,unsigned short *param_2);
void FUN_100b1768(long long param_1,int param_2);
int FUN_100b17b8(int param_1);
void FUN_100b1820(short *param_1,short *param_2);
void FUN_100b1834(int param_1,unsigned long long param_2);
void FUN_100b1874(int param_1);
void FUN_100b1900(unsigned char *param_1,unsigned char *param_2,short param_3,short param_4);
void FUN_100b1ab0(long long param_1,long long param_2,short param_3,short param_4);
int FUN_100b1b08(unsigned char *param_1);
void FUN_100b1c18(long long param_1,unsigned char *param_2,char param_3);
char * FUN_100b1d1c(char *param_1,int param_2);
unsigned char * FUN_100b1f6c(unsigned char *param_1,long long param_2);
void FUN_100b1fb4(unsigned char *param_1,unsigned char param_2);
char * FUN_100b1fec(char *param_1,long long param_2);
unsigned char * FUN_100b20a8(unsigned char *param_1,long long param_2);
char * FUN_100b20f0(char *param_1,long long param_2);
void FUN_100b21ac(unsigned char *param_1,unsigned char param_2);
long long FUN_100b21e4(long long param_1);
int * FUN_100b22e0(int *param_1,int param_2,char param_3);
int * FUN_100b236c(int *param_1,int param_2);
void FUN_100b23f4(int *param_1,unsigned long long param_2);
long long FUN_100b2460(int *param_1);
long long FUN_100b24e8(int *param_1);
int FUN_100b2570(void);
int * FUN_100b2578(int *param_1);
int * FUN_100b25f4(int *param_1);
int FUN_100b2678(void);
int * FUN_100b2680(int *param_1);
int FUN_100b26fc(void);
int * FUN_100b2704(int *param_1);
int FUN_100b2780(void);
int * FUN_100b2788(int *param_1);
int FUN_100b2804(void);
int * FUN_100b280c(int *param_1);
int FUN_100b2874(void);
int * FUN_100b287c(int *param_1);
int FUN_100b28f8(void);
int * FUN_100b2900(int *param_1);
int FUN_100b2968(void);
int * FUN_100b2970(int *param_1);
int FUN_100b29d8(void);
int * FUN_100b29e0(int *param_1);
int FUN_100b2a48(void);
int * FUN_100b2a50(int *param_1);
int FUN_100b2ab8(void);
int * FUN_100b2ac0(int *param_1);
int FUN_100b2b28(void);
int * FUN_100b2b30(int *param_1);
int FUN_100b2bac(void);
int * FUN_100b2bb4(int *param_1);
int FUN_100b2c1c(void);
int * FUN_100b2c24(int *param_1);
int FUN_100b2ca0(void);
int * FUN_100b2ca8(int *param_1);
void FUN_100b2d10(int param_1,int param_2,char param_3);
void FUN_100b2d54(long long param_1);
void FUN_100b2d84(long long param_1);
void FUN_100b2db4(long long param_1);
void FUN_100b2de4(long long param_1);
void FUN_100b2e14(long long param_1);
void FUN_100b2e44(long long param_1);
void FUN_100b31f4(void);
void FUN_100b3220(int *param_1);
void FUN_100b3268(int param_1,int *param_2);
void FUN_100b32dc(int param_1,int *param_2);
void FUN_100b3354(long long param_1,char param_2,short param_3,short param_4,short param_5);
void FUN_100b33d8(long long param_1,int *param_2);
void FUN_100b3438(void);
void FUN_100b3460(int param_1,char param_2);
void FUN_100b34b4(int param_1,int *param_2);
void FUN_100b351c(int param_1,int *param_2);
void FUN_100b3584(int *param_1,int *param_2,long long param_3);
void FUN_100b3950(void);
void FUN_100b3984(long long param_1,int *param_2);
void FUN_100b39cc(void);
void FUN_100b3a00(long long param_1,int *param_2,long long param_3);
void FUN_100b3a58(void);
void FUN_100b3a8c(long long param_1,int *param_2,long long param_3);
void FUN_100b3af8(void);
void FUN_100b3b2c(long long param_1,int *param_2);
void FUN_100b3b74(void);
void FUN_100b3ba8(long long param_1,int *param_2);
void FUN_100b3bf0(void);
void FUN_100b3c24(long long param_1,int *param_2,long long param_3,char param_4,
                 char param_5);
void FUN_100b3c84(void);
void FUN_100b3cb8(long long param_1,int *param_2,long long param_3);
void FUN_100b3d70(void);
void FUN_100b3da4(long long param_1,int *param_2,long long param_3);
void FUN_100b3ed8(void);
void FUN_100b3f0c(int *param_1,int *param_2,long long param_3);
void FUN_100b4000(void);
void FUN_100b4034(int *param_1,int *param_2,long long param_3);
void FUN_100b4108(void);
void FUN_100b413c(int *param_1,int *param_2,long long param_3);
void FUN_100b4230(void);
void FUN_100b4264(int *param_1,int *param_2,long long param_3);
void FUN_100b4338(void);
void FUN_100b436c(long long param_1,int *param_2,long long param_3);
void FUN_100b4424(void);
void FUN_100b444c(long long param_1,long long param_2,char param_3);
void FUN_100b4480(long long param_1,int *param_2,long long param_3);
int * FUN_100b4540(int *param_1);
void FUN_100b45a8(void);
void FUN_100b45d0(long long param_1);
void FUN_100b45fc(int *param_1,int *param_2);
void FUN_100b46e0(int *param_1,int *param_2);
void FUN_100b4820(int *param_1,int param_2,char param_3);
int FUN_100b48f8(int *param_1);
char FUN_100b4934(int *param_1);
void FUN_100b4978(void);
void FUN_100b4c1c(long long param_1,long long param_2,long long param_3);
int * FUN_100b4eac(int *param_1);
void FUN_100b4f3c(void);
void FUN_100b4f64(int param_1,int *param_2,char param_3);
void FUN_100b4fb0(int param_1);
int * FUN_100b4ffc(int *param_1);
void FUN_100b5168(int param_1,long long param_2);
int FUN_100b51c4(int param_1);
int FUN_100b5244(int param_1);
void FUN_100b52b4(int param_1,long long param_2);
void FUN_100b530c(int param_1,int param_2);
void FUN_100b5378(int param_1,int param_2);
short FUN_100b53d4(int param_1,long long param_2);
int FUN_100b5444(int param_1,long long param_2);
void FUN_100b54b4(int param_1,long long param_2,long long param_3);
int FUN_100b5570(int param_1,long long param_2);
void FUN_100b55e0(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100b57b0(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100b5954(int param_1);
void FUN_100b5994(int param_1);
void FUN_100b59e0(int param_1,long long param_2,short param_3);
void FUN_100b5a34(int param_1,long long param_2,int param_3);
void FUN_100b5a88(int param_1,long long param_2,unsigned char *param_3);
void FUN_100b5b34(int param_1,long long param_2,int param_3);
void FUN_100b5b88(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100b5d64(int param_1,long long param_2,int param_3,int *param_4);
void FUN_100b5f50(int param_1);
void FUN_100b5f90(int param_1);
void FUN_100b5fd0(int param_1);
void FUN_100b6010(void);
long long FUN_100b604c(long long param_1,short *param_2,long long param_3);
int FUN_100b633c(int param_1);
int * FUN_100b6350(int *param_1,int param_2);
void FUN_100b63d8(int *param_1,unsigned long long param_2);
void FUN_100b6444(void);
void FUN_100b6468(void);
void FUN_100b648c(void);
int * FUN_100b660c(int *param_1);
void FUN_100b6674(void);
void FUN_100b66e4(void);
void FUN_100b6708(long long param_1,long long param_2);
int * FUN_100b67d4(int *param_1);
void FUN_100b683c(void);
void FUN_100b6864(void);
void FUN_100b691c(long long param_1,long long param_2);
char FUN_100b6954(int param_1);
int * FUN_100b69b8(int *param_1);
void FUN_100b6a20(void);
void FUN_100b6a48(int param_1);
void FUN_100b6a8c(long long param_1,long long param_2);
int * FUN_100b6acc(int *param_1);
void FUN_100b6b44(void);
void FUN_100b6b6c(int param_1,long long param_2,int param_3);
void FUN_100b6bbc(void);
void FUN_100b6f24(int param_1);
int * FUN_100b6f70(int *param_1);
void FUN_100b6fd8(void);
void FUN_100b7000(void);
void FUN_100b7024(int *param_1);
int * FUN_100b70f8(int *param_1);
void FUN_100b7168(void);
void FUN_100b7190(int *param_1);
int * FUN_100b7260(int *param_1);
void FUN_100b72c8(void);
void FUN_100b72f0(long long param_1,long long param_2);
void FUN_100b7328(void);
int * FUN_100b736c(int *param_1);
void FUN_100b73d4(void);
void FUN_100b73fc(int param_1,long long param_2);
void FUN_100b7464(void);
int * FUN_100b74ac(int *param_1);
void FUN_100b7614(void);
void FUN_100b763c(int *param_1,int param_2,int param_3);
long long FUN_100b7868(int param_1);
void FUN_100b78b4(int *param_1,char param_2);
void FUN_100b79d4(long long param_1,char param_2);
void FUN_100b7a24(int param_1);
void FUN_100b7a6c(int param_1,long long param_2);
unsigned long long FUN_100b7af0(int *param_1,unsigned long long param_2,short *param_3,long long param_4);
long long FUN_100b80e4(int *param_1,long long param_2,short *param_3);
void FUN_100b8334(long long param_1,short param_2);
int FUN_100b8360(int *param_1,long long param_2,int *param_3);
long long FUN_100b8560(long long param_1,int *param_2);
int * FUN_100b86b4(int *param_1);
void FUN_100b8ac4(int *param_1);
void FUN_100b8d14(int *param_1,long long param_2);
short FUN_100b8dd8(int *param_1,int param_2,short param_3);
void FUN_100b8f00(int param_1);
void FUN_100b8f48(int param_1);
void FUN_100b8f90(int *param_1,int param_2);
void FUN_100b928c(int *param_1,long long param_2);
void FUN_100b941c(long long param_1,long long param_2,long long param_3,long long param_4);
void FUN_100b960c(int *param_1,int *param_2);
void FUN_100b96c0(int *param_1,int param_2);
long long FUN_100b98c8(void);
void FUN_100b98f0(int param_1);
void FUN_100b993c(long long param_1,long long param_2);
void FUN_100b9c98(int *param_1);
void FUN_100b9dd8(int *param_1);
void FUN_100b9ef4(void);
void FUN_100b9f3c(int *param_1,long long param_2,long long param_3);
void FUN_100ba0c4(int *param_1,long long param_2,long long param_3);
void FUN_100ba248(void);
int FUN_100ba380(int *param_1);
long long FUN_100ba510(int *param_1,unsigned short param_2,long long param_3,long long param_4);
int * FUN_100ba6c8(int *param_1);
int * FUN_100ba810(int *param_1,char param_2);
int * FUN_100ba98c(int param_1);
int FUN_100bab34(void);
void FUN_100bad1c(int *param_1,int param_2);
void FUN_100bae0c(int param_1,long long param_2);
void FUN_100baf0c(long long param_1,int param_2);
void FUN_100baf70(int *param_1);
void FUN_100bafac(int *param_1,int param_2);
void FUN_100bb024(int *param_1,int *param_2);
void FUN_100bb0f8(int *param_1,int param_2);
void FUN_100bb188(int *param_1,int param_2);
void FUN_100bb3cc(int *param_1,int param_2);
void FUN_100bb500(int *param_1,int param_2);
void FUN_100bb6e8(int *param_1,long long param_2);
void FUN_100bb820(int *param_1,int param_2);
void FUN_100bb8b8(int *param_1,char param_2);
long long FUN_100bbb38(int *param_1,char param_2);
long long FUN_100bbdf8(int *param_1);
void FUN_100bbeec(int param_1,long long param_2,char param_3);
char FUN_100bbf84(int param_1);
void FUN_100bc020(int *param_1);
void FUN_100bc08c(void);
void FUN_100bc0cc(int *param_1);
void FUN_100bc124(int param_1);
void FUN_100bc15c(int *param_1);
void FUN_100bc200(void);
long long FUN_100bc24c(int param_1);
void FUN_100bc2a4(int param_1);
void FUN_100bc2cc(long long param_1,int *param_2);
void FUN_100bc3a4(int *param_1);
void FUN_100bc40c(void);
void FUN_100bc460(int *param_1,int param_2);
void FUN_100bc654(long long param_1,long long param_2);
int * FUN_100bc6ac(int *param_1,long long param_2);
int * FUN_100bc87c(int *param_1,long long param_2,int *param_3);
void FUN_100bcd44(long long param_1,int *param_2);
void FUN_100bce04(int *param_1,char param_2);
int FUN_100bcfac(int *param_1,char param_2);
void FUN_100bd190(int param_1,int *param_2);
void FUN_100bd284(int *param_1,int param_2);
void FUN_100bd2c8(int param_1);
void FUN_100bd300(long long param_1,int *param_2);
void FUN_100bd438(int *param_1,char param_2);
void FUN_100bd618(int param_1,unsigned long long param_2);
void FUN_100bd714(int *param_1,int *param_2);
void FUN_100bd7ac(int param_1,char param_2,long long param_3);
void FUN_100bd8f8(int *param_1);
void FUN_100bd9dc(int *param_1,long long param_2,int *param_3,long long param_4,
                 short *param_5,int *param_6,int *param_7,int *param_8);
void FUN_100bdb40(int param_1,long long param_2,int *param_3);
void FUN_100bdb88(long long param_1,short param_2,long long param_3);
void FUN_100bdbbc(int *param_1);
void FUN_100bdc54(int *param_1,int param_2);
void FUN_100bdca4(int *param_1,int param_2,long long param_3);
void FUN_100bddc4(int *param_1,int param_2);
void FUN_100bdf64(int *param_1,int param_2,long long param_3);
void FUN_100bdfe8(int *param_1,int param_2,long long param_3);
void FUN_100be108(int *param_1,int param_2);
int * FUN_100be2a8(int *param_1,long long param_2,int param_3);
void FUN_100be528(int *param_1);
void FUN_100be5e0(void);
void FUN_100be610(long long param_1,long long param_2);
void FUN_100be638(long long param_1,long long param_2);
void FUN_100be728(void);
long long FUN_100be874(int param_1,int *param_2);
int * FUN_100be91c(int *param_1);
void FUN_100be990(void);
void FUN_100be9b8(int *param_1,long long param_2,long long param_3);
void FUN_100beaa8(int param_1);
void FUN_100beafc(int param_1,long long param_2);
void FUN_100bebe4(void);
long long FUN_100bec0c(long long param_1,int param_2,int param_3);
void FUN_100bed54(void);
void FUN_100bee44(int param_1);
void FUN_100bee88(int param_1,int param_2);
int FUN_100beed0(int param_1,long long param_2);
void FUN_100beff0(int *param_1,long long param_2,long long param_3);
int FUN_100bf0ac(int param_1,long long param_2,long long param_3);
void FUN_100bf228(int param_1,int param_2);
void FUN_100bf2a8(int param_1,long long param_2);
int FUN_100bf3ec(int param_1,int param_2,long long param_3);
void FUN_100bf488(void);
void FUN_100bf5bc(void);
void FUN_100bf5e4(int param_1,int param_2);
void FUN_100bf620(void);
void FUN_100bf654(int param_1);
void FUN_100bf698(int param_1,int *param_2);
void FUN_100bf728(int param_1,int *param_2);
void FUN_100bf7c0(int *param_1,int *param_2);
void FUN_100bf864(int param_1,int param_2);
unsigned long long FUN_100bf8a4(int param_1);
void FUN_100bf928(int *param_1,int *param_2,int *param_3);
void FUN_100bfa20(int *param_1,int *param_2,int *param_3);
void FUN_100bfb28(int *param_1,int *param_2);
void FUN_100bfc50(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100bfd04(int *param_1,long long param_2);
void FUN_100bfda0(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100bfe54(int *param_1,long long param_2);
void FUN_100bfef0(int *param_1,long long param_2);
void FUN_100bff8c(int *param_1,long long param_2);
void FUN_100c0028(int *param_1);
void FUN_100c00b8(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5);
long long FUN_100c013c(int *param_1);
void FUN_100c01d4(int *param_1,char param_2);
long long FUN_100c02e0(int *param_1,long long param_2,long long param_3,int param_4);
long long FUN_100c0364(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100c03e8(int *param_1,long long param_2);
long long FUN_100c0454(int *param_1,long long param_2,long long param_3);
long long FUN_100c04d0(int *param_1,long long param_2);
int FUN_100c0544(int param_1);
void FUN_100c0564(int param_1);
void FUN_100c05c0(void);
void FUN_100c05fc(int param_1,long long param_2);
char FUN_100c0660(int param_1,short param_2,long long param_3);
void FUN_100c069c(int param_1,long long param_2);
void FUN_100c0700(int param_1);
void FUN_100c072c(int param_1,long long param_2);
void FUN_100c0790(int param_1,long long param_2);
void FUN_100c07c0(int param_1,long long param_2);
void FUN_100c0824(int param_1,long long param_2);
void FUN_100c0854(int param_1,long long param_2);
char FUN_100c08b8(int param_1);
void FUN_100c08e8(int param_1,long long param_2);
char FUN_100c094c(int param_1);
void FUN_100c097c(void);
long long FUN_100c09d0(short param_1,long long param_2);
long long FUN_100c0a3c(void);
long long FUN_100c0a94(void);
void FUN_100c0aec(long long param_1);
int * FUN_100c0b74(int *param_1);
int FUN_100c0bdc(int *param_1);
void FUN_100c0c18(int *param_1);
void FUN_100c0f70(int *param_1);
void FUN_100c1010(long long param_1);
void FUN_100c1070(void);
void FUN_100c10c8(int param_1);
void FUN_100c11f8(void);
void FUN_100c1220(int *param_1);
void FUN_100c1360(long long param_1,short param_2);
void FUN_100c13e4(int *param_1,char param_2);
char FUN_100c1424(int *param_1,char param_2,char param_3);
void FUN_100c149c(int *param_1,short param_2);
void FUN_100c14e8(int *param_1);
int * FUN_100c1554(long long param_1,short param_2);
void FUN_100c1668(void);
int * FUN_100c1764(void);
void FUN_100c17b8(long long param_1,long long param_2);
void FUN_100c17e0(int param_1,long long param_2);
long long FUN_100c1810(long long param_1,int *param_2,int *param_3);
int * FUN_100c18d4(void);
void FUN_100c1928(long long param_1,long long param_2);
short FUN_100c1950(int param_1);
long long FUN_100c1958(long long param_1,int *param_2,int *param_3);
int FUN_100c19e4(int param_1,unsigned char *param_2,short param_3,int param_4);
long long FUN_100c1a90(long long param_1,int param_2);
long long FUN_100c1b5c(long long param_1,int param_2);
void FUN_100c1bec(void);
void FUN_100c1c04(int param_1,int param_2);
void FUN_100c1c24(int param_1,long long param_2);
int * FUN_100c1c8c(int *param_1,int param_2,int param_3,int param_4,
            long long param_5);
long long FUN_100c1d0c(int *param_1);
int FUN_100c1d48(int param_1);
int FUN_100c1d50(int param_1,int param_2);
long long FUN_100c1d68(unsigned long long param_1,unsigned long long param_2,char param_3);
int * FUN_100c1e3c(int *param_1,unsigned long long param_2);
void FUN_100c1ed0(int param_1,int param_2);
int FUN_100c1fd8(short param_1);
long long FUN_100c208c(short param_1);
long long FUN_100c21d0(unsigned char *param_1);
void FUN_100c2250(void);
void FUN_100c25c8(int *param_1,unsigned long long param_2);
void FUN_100c267c(int param_1);
void FUN_100c26ec(int *param_1,long long param_2);
void FUN_100c27bc(void);
int * FUN_100c2824(int *param_1,int param_2,char param_3);
void FUN_100c28bc(int *param_1,unsigned long long param_2);
void FUN_100c293c(int *param_1);
void FUN_100c2994(int *param_1);
void FUN_100c2a04(int param_1);
int FUN_100c2a10(int *param_1);
int * FUN_100c2a54(int *param_1,long long param_2,char param_3);
void FUN_100c2b0c(int *param_1,unsigned long long param_2);
long long FUN_100c2b78(int param_1,int param_2);
long long FUN_100c2c80(int param_1,long long param_2,char param_3);
void FUN_100c2df4(int param_1);
void FUN_100c2e44(int param_1);
int * FUN_100c2ecc(int *param_1,int param_2);
void FUN_100c2f4c(int *param_1,unsigned long long param_2);
void FUN_100c2fb8(int param_1);
void FUN_100c300c(int param_1);
int * FUN_100c3064(int *param_1);
void FUN_100c3110(void);
void FUN_100c3138(int *param_1);
void FUN_100c3194(int *param_1,char param_2);
void FUN_100c32d4(int param_1);
void FUN_100c3320(int *param_1);
long long FUN_100c33f0(int param_1,long long param_2,int *param_3);
void FUN_100c3474(int *param_1);
int FUN_100c3544(void);
void FUN_100c35ac(int *param_1);
unsigned long long FUN_100c36b4(int param_1);
void FUN_100c371c(int *param_1,char param_2);
void FUN_100c3760(int *param_1,int *param_2,int param_3);
void FUN_100c39f4(int param_1);
void FUN_100c3a88(int param_1,long long param_2);
void FUN_100c3b20(int param_1,int param_2);
void FUN_100c3bf4(void);
short FUN_100c3c18(long long param_1,long long param_2,int *param_3);
void FUN_100c3ce8(void);
void FUN_100c3dd0(void);
void FUN_100c3e70(int *param_1);
void FUN_100c3ee0(int param_1);
void FUN_100c3f60(int param_1);
void FUN_100c4020(int *param_1);
void FUN_100c40c4(int *param_1);
void FUN_100c4148(int param_1,int param_2,int param_3,int param_4);
void FUN_100c423c(int *param_1);
void FUN_100c4280(int param_1);
void FUN_100c42d4(int *param_1,long long param_2);
void FUN_100c435c(int *param_1);
void FUN_100c4520(void);
void FUN_100c4548(int param_1,long long param_2,long long param_3,char param_4,
                 char param_5,long long param_6,int param_7,int param_8);
void FUN_100c45a4(int param_1,long long param_2);
unsigned long long FUN_100c45f0(int param_1);
void FUN_100c464c(long long param_1);
void FUN_100c46c8(int param_1,char param_2);
void FUN_100c4718(int param_1,char param_2);
int FUN_100c476c(int param_1,char param_2,long long param_3,long long param_4,long long param_5,
                char param_6);
void FUN_100c4814(int param_1);
void FUN_100c48a0(int *param_1);
void FUN_100c49c8(int *param_1,int param_2);
void FUN_100c4a88(int *param_1,char param_2);
void FUN_100c4b4c(int *param_1,char param_2,char param_3);
int * FUN_100c4c34(int *param_1,char param_2);
int * FUN_100c4dbc(int *param_1,int *param_2,int param_3);
int * FUN_100c4eec(int *param_1);
int * FUN_100c52b4(int *param_1);
int * FUN_100c5444(int *param_1);
void FUN_100c54b8(void);
void FUN_100c54e0(void);
void FUN_100c550c(int *param_1);
void FUN_100c5558(int param_1);
int * FUN_100c55a8(int *param_1);
void FUN_100c5618(void);
void FUN_100c5640(void);
void FUN_100c566c(void);
void FUN_100c579c(int *param_1);
void FUN_100c5838(int *param_1);
void FUN_100c5918(int param_1,short param_2);
int * FUN_100c59e8(int *param_1);
void FUN_100c5a58(void);
long long FUN_100c5a80(int param_1);
long long FUN_100c5acc(int *param_1);
long long FUN_100c5c24(int param_1);
void FUN_100c5c80(int *param_1);
void FUN_100c5cf8(void);
void FUN_100c5e34(void);
void FUN_100c5e5c(int param_1);
void FUN_100c6014(void);
void FUN_100c60bc(void);
void FUN_100c60e4(void);
void FUN_100c6108(void);
void FUN_100c6134(int param_1);
void FUN_100c6268(int *param_1);
void FUN_100c62b4(int *param_1);
void FUN_100c637c(int *param_1,int *param_2);
void FUN_100c66a8(int param_1);
void FUN_100c6758(void);
int * FUN_100c67b4(int *param_1,int param_2,char param_3);
char FUN_100c6824(int *param_1);
void FUN_100c68f4(int *param_1);
void FUN_100c698c(long long param_1,short param_2);
int * FUN_100c69f4(int *param_1);
void FUN_100c6a74(void);
void FUN_100c6a9c(int param_1,int *param_2);
void FUN_100c6be4(void);
void FUN_100c6c0c(int param_1,int param_2,long long param_3,long long param_4,char param_5,
                 char param_6,int *param_7);
void FUN_100c6c9c(int *param_1,int *param_2);
void FUN_100c6ea0(int param_1,int *param_2);
void FUN_100c6fa0(int param_1,long long param_2);
void FUN_100c7030(int *param_1,long long param_2);
void FUN_100c708c(int *param_1,int *param_2);
void FUN_100c7224(int *param_1);
void FUN_100c72c0(int *param_1,char param_2,char param_3);
void FUN_100c7384(int *param_1,long long param_2);
void FUN_100c73f0(int *param_1,int param_2);
void FUN_100c74b4(int *param_1);
int FUN_100c752c(int param_1);
void FUN_100c7598(int *param_1);
void FUN_100c7618(int *param_1,char param_2,char param_3);
void FUN_100c76f4(int *param_1,long long param_2,char param_3);
void FUN_100c775c(int *param_1,int *param_2,char param_3);
void FUN_100c77ac(int *param_1,int *param_2,char param_3);
void FUN_100c7804(int *param_1,long long param_2,char param_3);
void FUN_100c7888(int *param_1,long long param_2);
void FUN_100c7978(int *param_1,short param_2,char param_3);
void FUN_100c7a50(int *param_1,char *param_2);
void FUN_100c7ab8(int *param_1,int param_2);
void FUN_100c7b34(int param_1,int *param_2);
void FUN_100c7b70(int *param_1,int *param_2,char param_3);
void FUN_100c7bdc(int *param_1,char param_2,long long param_3,long long param_4,long long param_5);
void FUN_100c7e0c(void);
void FUN_100c7e34(int *param_1);
int * FUN_100c7f28(int param_1);
void FUN_100c8068(int *param_1);
void FUN_100c80ec(int *param_1,long long param_2);
void FUN_100c818c(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,short param_6);
void FUN_100c8340(int param_1,long long param_2,char param_3);
void FUN_100c8640(int *param_1,long long param_2);
void FUN_100c87e0(int *param_1,long long param_2);
unsigned int * FUN_100c8970(int *param_1);
long long FUN_100c8c48(int param_1);
long long FUN_100c8c84(int param_1);
void FUN_100c8cc0(int param_1,long long param_2);
long long FUN_100c8d28(int param_1);
long long FUN_100c8d64(int param_1);
void FUN_100c8da0(int param_1,unsigned char param_2,char param_3);
void FUN_100c8e80(int *param_1,long long param_2,char param_3);
void FUN_100c8ed8(int *param_1,long long param_2,char param_3);
void FUN_100c8f30(int *param_1,long long param_2);
void FUN_100c9074(int *param_1,long long param_2,char param_3);
void FUN_100c9148(int param_1,short param_2,char param_3);
void FUN_100c9200(int param_1,short param_2,char param_3);
void FUN_100c92b8(int *param_1,long long param_2,char param_3);
void FUN_100c9420(int param_1,short param_2,char param_3);
void FUN_100c94d8(int param_1,short param_2,short param_3,short param_4,
                 char param_5);
void FUN_100c95bc(int *param_1,int param_2,char param_3);
void FUN_100c9678(int *param_1,int param_2,char param_3);
void FUN_100c9714(int *param_1,long long param_2,char param_3);
void FUN_100c9790(int *param_1,long long param_2,long long param_3,long long param_4,
                 char param_5);
long long FUN_100c9824(int *param_1);
void FUN_100c98b4(int *param_1);
void FUN_100c99d8(void);
void FUN_100c9a00(int param_1);
void FUN_100c9a90(int *param_1,int *param_2);
void FUN_100c9be0(int param_1,int *param_2);
void FUN_100c9c8c(int *param_1,short param_2);
void FUN_100c9d68(int *param_1,long long param_2);
void FUN_100c9de8(int *param_1,long long param_2);
void FUN_100c9ff4(int *param_1,short param_2);
void FUN_100ca0e8(void);
void FUN_100ca110(int *param_1);
int FUN_100ca240(void);
void FUN_100ca280(int param_1);
void FUN_100ca378(int *param_1);
void FUN_100ca46c(void);
void FUN_100ca490(int *param_1,char param_2);
void FUN_100ca618(int param_1,int *param_2);
void FUN_100ca6e0(int *param_1);
void FUN_100ca754(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100ca96c(int *param_1,long long param_2);
void FUN_100caa4c(int *param_1,short param_2);
void FUN_100cab4c(void);
int * FUN_100cac1c(int *param_1);
void FUN_100cac84(long long param_1);
long long FUN_100cacb0(void);
int * FUN_100cacf8(int *param_1);
void FUN_100cad60(void);
void FUN_100cad88(void);
void FUN_100cadac(void);
void FUN_100cadd0(void);
void FUN_100cadf4(void);
void FUN_100cae18(void);
int * FUN_100cae44(int *param_1);
void FUN_100caeb8(void);
void FUN_100caee0(void);
void FUN_100caf04(int param_1);
void FUN_100caf58(int param_1,long long param_2,long long param_3,long long param_4);
void FUN_100cb010(int param_1,long long param_2,long long param_3,long long param_4);
int * FUN_100cb0a8(int *param_1,long long param_2,int param_3);
int * FUN_100cb124(int *param_1,long long param_2,int param_3);
long long FUN_100cb1b0(int *param_1);
void FUN_100cb254(void);
long long FUN_100cb278(int param_1);
void FUN_100cb2f0(int *param_1);
void FUN_100cb350(void);
void FUN_100cb374(int *param_1,unsigned long long param_2);
void FUN_100cb3e0(int *param_1,unsigned long long param_2);
void FUN_100cb44c(long long param_1,long long param_2,long long param_3,long long param_4);
int * FUN_100cb518(int *param_1,long long param_2,int param_3);
void FUN_100cb5a4(void);
void FUN_100cb5c8(void);
void FUN_100cb5ec(int *param_1,unsigned long long param_2);
void FUN_100cb658(int param_1,long long param_2);
int * FUN_100cb80c(int *param_1);
void FUN_100cb87c(void);
void FUN_100cb8a4(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100cb974(int param_1,long long param_2,unsigned int param_3);
unsigned int FUN_100cba1c(int param_1,long long param_2);
void FUN_100cbabc(int *param_1,long long param_2,unsigned int param_3);
void FUN_100cbbc4(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100cbce0(int *param_1,int *param_2,long long param_3,long long param_4,long long param_5);
void FUN_100cbdb4(void);
void FUN_100cbe7c(long long param_1,int *param_2);
void FUN_100cbef4(int param_1);
void FUN_100cc044(void);
void FUN_100cc06c(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100cc0fc(int *param_1,long long param_2,int param_3,int param_4,
                 int param_5);
void FUN_100cc14c(int *param_1,int param_2,int param_3,int param_4,
                 long long param_5);
void FUN_100cc1ac(int *param_1,int param_2,long long param_3);
int FUN_100cc218(int *param_1);
int FUN_100cc258(int *param_1);
void FUN_100cc294(int *param_1);
void FUN_100cc37c(void);
int * FUN_100cc430(int *param_1);
void FUN_100cc498(void);
unsigned long long FUN_100cc4d0(int *param_1);
int * FUN_100cc520(int *param_1);
void FUN_100cc594(void);
void FUN_100cc5d8(int param_1,int *param_2);
void FUN_100cc64c(int param_1,int *param_2);
int * FUN_100cc760(int *param_1);
void FUN_100cc7dc(void);
long long FUN_100cc810(long long param_1);
void FUN_100cc864(int param_1,int *param_2);
void FUN_100cc8cc(int param_1,int *param_2);
long long FUN_100cc974(long long param_1,int param_2);
int * FUN_100cca7c(int *param_1);
void FUN_100ccaf4(void);
void FUN_100ccb1c(int param_1,int *param_2);
void FUN_100ccc78(int param_1,int *param_2);
int FUN_100cccd0(int param_1);
long long FUN_100ccdb4(int param_1);
long long FUN_100cce60(int param_1,int param_2);
void FUN_100ccf5c(int param_1);
void FUN_100ccfb8(int param_1,long long param_2);
void FUN_100ccffc(void);
unsigned long long FUN_100cd0a4(long long param_1,int *param_2);
int FUN_100cd104(void);
int * FUN_100cd114(int *param_1);
void FUN_100cd198(void);
void FUN_100cd1c4(int param_1);
void FUN_100cd20c(int *param_1,int *param_2);
void FUN_100cd454(int *param_1);
void FUN_100cd610(int *param_1,long long param_2);
void FUN_100cd834(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_100cd8e0(void);
void FUN_100cdf78(void);
long long FUN_100ce4c8(void);
void FUN_100ce518(long long param_1);
void FUN_100ce568(unsigned char *param_1);
void FUN_100ce6f0(void);
void FUN_100ce718(int *param_1);
void FUN_100ce79c(int *param_1,int *param_2);
void FUN_100ce884(int param_1,int *param_2);
void FUN_100ce900(void);
int * FUN_100ce928(int *param_1);
void FUN_100cea44(int *param_1);
void FUN_100cea9c(int *param_1,int *param_2);
void FUN_100cec18(int param_1,int *param_2);
void FUN_100cec8c(int param_1,long long param_2,int *param_3,long long param_4);
void FUN_100ced8c(int *param_1,long long param_2);
void FUN_100cf054(int *param_1,long long param_2);
void FUN_100cf1a8(int param_1,long long param_2);
void FUN_100cf218(int param_1);
void FUN_100cf250(int *param_1,unsigned char *param_2,char param_3);
void FUN_100cf300(int *param_1,short param_2,short param_3,char param_4);
void FUN_100cf3d4(int param_1,int param_2);
void FUN_100cf4d0(void);
void FUN_100cf4f8(int *param_1);
int * FUN_100cf5fc(int param_1);
void FUN_100cf70c(int *param_1);
void FUN_100cf764(int *param_1,int *param_2);
void FUN_100cf870(int param_1,int *param_2);
void FUN_100cf8e4(int *param_1,long long param_2);
void FUN_100cfae0(int param_1);
void FUN_100cfb50(int *param_1,long long param_2,char param_3);
void FUN_100cfc24(int *param_1,short param_2,char param_3);
void FUN_100cfd68(void);
int * FUN_100cfd90(int param_1);
void FUN_100cfe98(int *param_1,int *param_2);
void FUN_100cff84(int param_1,int *param_2);
void FUN_100cffdc(int *param_1,long long param_2);
void FUN_100d0140(int param_1);
void FUN_100d0194(int *param_1,short param_2,char param_3);
void FUN_100d0230(void);
int * FUN_100d0258(int param_1);
void FUN_100d0368(int *param_1);
void FUN_100d03c0(int *param_1,int *param_2);
void FUN_100d04cc(int param_1,int *param_2);
void FUN_100d0540(int *param_1,long long param_2);
void FUN_100d068c(int param_1);
void FUN_100d06fc(int *param_1,long long param_2,char param_3);
void FUN_100d07a8(int *param_1,short param_2,char param_3);
void FUN_100d089c(void);
void FUN_100d08c4(int *param_1);
int * FUN_100d09bc(int param_1);
void FUN_100d0ab8(int *param_1);
void FUN_100d0b10(int *param_1,int *param_2);
void FUN_100d0bfc(int param_1,int *param_2);
void FUN_100d0c54(int *param_1,long long param_2);
void FUN_100d0d64(int param_1);
void FUN_100d0db8(int *param_1,long long param_2,char param_3);
void FUN_100d0e58(int *param_1,short param_2,char param_3);
int * FUN_100d0eec(int *param_1);
void FUN_100d0f60(void);
void FUN_100d0f88(int *param_1);
int FUN_100d1144(int param_1);
void FUN_100d12c4(int param_1);
void FUN_100d1330(int *param_1);
void FUN_100d1470(void);
void FUN_100d1494(int *param_1,int *param_2,char param_3);
long long FUN_100d19f8(int *param_1);
void FUN_100d1a88(int param_1,int *param_2);
void FUN_100d1bb8(void);
int * FUN_100d1be0(int param_1);
void FUN_100d1cc8(int *param_1);
void FUN_100d1d20(int *param_1,int *param_2);
void FUN_100d1ef0(int param_1,int *param_2);
void FUN_100d1fb8(int *param_1,char param_2,char param_3);
void FUN_100d2004(long long param_1,long long param_2);
void FUN_100d202c(int *param_1,long long param_2);
void FUN_100d2100(int param_1,long long param_2);
void FUN_100d2164(int *param_1,long long param_2,long long param_3,long long param_4,
                 short param_5);
void FUN_100d21ec(int param_1);
void FUN_100d2224(int *param_1,short param_2,char param_3);
void FUN_100d2270(int *param_1,long long param_2,char param_3);
void FUN_100d23b0(int *param_1,short param_2,short param_3,char param_4);
void FUN_100d2484(void);
void FUN_100d24ac(int *param_1);
void FUN_100d2504(int *param_1,int *param_2);
void FUN_100d25ec(int param_1,int *param_2);
void FUN_100d2660(void);
int FUN_100d2684(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100d26f8(int *param_1);
void FUN_100d2754(int *param_1);
void FUN_100d27f4(int *param_1,char param_2);
void FUN_100d285c(int *param_1,int param_2);
void FUN_100d2940(int param_1,char param_2,char param_3);
int FUN_100d29b0(int *param_1);
void FUN_100d2a84(int param_1,char *param_2);
void FUN_100d2b44(int *param_1,long long param_2,long long param_3,long long param_4,
                 short param_5);
void FUN_100d2bd8(int *param_1,char param_2);
void FUN_100d2cb4(void);
void FUN_100d2cd8(int param_1);
void FUN_100d2d14(int *param_1);
void FUN_100d2e28(int *param_1);
void FUN_100d2f00(int *param_1,long long param_2);
void FUN_100d3064(int param_1,short param_2,char param_3);
void FUN_100d30d4(int param_1,short param_2,short param_3,char param_4);
void FUN_100d3174(int *param_1,unsigned char *param_2,char param_3);
void FUN_100d33ac(int *param_1,char param_2);
void FUN_100d3414(int *param_1);
long long FUN_100d34d8(int param_1);
long long FUN_100d3550(int *param_1);
void FUN_100d35b8(void);
long long FUN_100d35dc(int param_1);
void FUN_100d3668(int *param_1,long long param_2,long long param_3);
void FUN_100d3700(void);
void FUN_100d3734(int *param_1,int *param_2);
void FUN_100d3860(int *param_1,int *param_2);
int FUN_100d3918(int *param_1);
void FUN_100d39d8(int *param_1,long long param_2,char param_3);
long long FUN_100d3a4c(int *param_1);
void FUN_100d3bac(void);
void FUN_100d3bd4(int param_1);
unsigned long long FUN_100d3c24(int *param_1);
int FUN_100d3c78(void);
void FUN_100d3d50(int param_1,int param_2);
void FUN_100d3d94(void);
void FUN_100d3dc8(int *param_1,int *param_2);
void FUN_100d3e94(int param_1,int *param_2);
void FUN_100d3eec(int *param_1,long long param_2,unsigned long long param_3,long long param_4);
void FUN_100d400c(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100d40b8(int *param_1,long long param_2);
void FUN_100d419c(int *param_1);
void FUN_100d421c(int *param_1);
void FUN_100d42d8(int *param_1,long long param_2,char param_3);
void FUN_100d4358(void);
void FUN_100d4598(void);
void FUN_100d45c0(void);
void FUN_100d4614(int *param_1,int *param_2);
void FUN_100d479c(int param_1,int *param_2);
void FUN_100d4810(int *param_1,long long param_2,int *param_3,long long param_4);
void FUN_100d4984(void);
void FUN_100d49ac(int *param_1);
void FUN_100d4a3c(int *param_1,int *param_2);
void FUN_100d4be0(int *param_1,int *param_2);
void FUN_100d4c98(int *param_1,long long param_2,long long param_3,long long param_4);
int FUN_100d4d08(int *param_1);
void FUN_100d4d4c(int *param_1,char param_2,char param_3);
void FUN_100d4d8c(int *param_1,unsigned long long param_2);
void FUN_100d4e00(int *param_1,unsigned int param_2,char param_3);
void FUN_100d4f20(void);
void FUN_100d4f48(int *param_1);
void FUN_100d5090(int *param_1,int *param_2);
void FUN_100d5234(int *param_1,int *param_2);
void FUN_100d52ec(int *param_1);
void FUN_100d5364(int *param_1,long long param_2,long long param_3,long long param_4);
int FUN_100d5470(int *param_1);
void FUN_100d54b4(int *param_1,char param_2,char param_3);
void FUN_100d54f4(int *param_1,unsigned long long param_2);
void FUN_100d5568(int *param_1,unsigned int param_2,char param_3);
void FUN_100d55fc(void);
void FUN_100d5718(void);
void FUN_100d5740(int param_1,char param_2,int param_3,int param_4);
void FUN_100d5794(int param_1,int *param_2);
void FUN_100d5824(int param_1,int *param_2);
void FUN_100d58b4(int param_1,int param_2,char param_3);
void FUN_100d5934(int *param_1,int param_2,int param_3);
void FUN_100d599c(int param_1,int param_2);
void FUN_100d5c20(int param_1,int param_2);
void FUN_100d5d64(int param_1);
void FUN_100d5dd8(void);
int * FUN_100d5e14(int *param_1,int param_2,char param_3);
int * FUN_100d5ea0(int *param_1,int param_2);
void FUN_100d5f28(int *param_1,unsigned long long param_2);
void FUN_100d5f94(void);
void FUN_100d5fb8(void);
int * FUN_100d5fe4(int *param_1);
void FUN_100d6054(void);
void FUN_100d607c(int param_1);
void FUN_100d60bc(int param_1,long long param_2,long long param_3);
int * FUN_100d6110(int *param_1);
void FUN_100d6180(void);
void FUN_100d61a8(int param_1);
void FUN_100d62a0(int param_1,long long param_2,long long param_3);
int * FUN_100d62f4(int *param_1);
void FUN_100d63ac(void);
void FUN_100d63d4(int *param_1);
void FUN_100d64bc(int param_1);
void FUN_100d656c(int param_1,long long param_2);
void FUN_100d65f0(int param_1,long long param_2);
void FUN_100d667c(int *param_1,long long param_2,long long param_3);
short FUN_100d6740(long long param_1);
void FUN_100d680c(int *param_1,int *param_2);
void FUN_100d68a8(int *param_1);
void FUN_100d6a1c(int *param_1);
void FUN_100d6a74(int param_1,long long param_2);
void FUN_100d6af4(int param_1,long long param_2);
void FUN_100d6b74(void);
void FUN_100d6b78(long long param_1,char param_2);
void FUN_100d6c08(int *param_1,char param_2);
void FUN_100d6e64(void);
void FUN_100d6e68(int *param_1);
void FUN_100d6ed4(void);
void FUN_100d6ef8(void);
void FUN_100d6f24(int param_1,int param_2);
void FUN_100d6f74(int param_1);
void FUN_100d7008(int param_1);
long long FUN_100d7100(int *param_1);
void FUN_100d720c(void);
void FUN_100d7230(void);
void FUN_100d7254(void);
void FUN_100d727c(void);
void FUN_100d72a0(int param_1,long long param_2,int param_3);
void FUN_100d72d8(int param_1,long long param_2);
void FUN_100d7318(long long param_1,unsigned char *param_2);
void FUN_100d73f4(long long param_1);
void FUN_100d749c(long long param_1);
void FUN_100d7554(long long param_1,long long param_2);
void FUN_100d7630(void);
int * FUN_100d76c0(int *param_1);
void FUN_100d779c(void);
void FUN_100d77c4(void);
void FUN_100d77e8(int param_1,int *param_2);
void FUN_100d78b4(int param_1,int *param_2);
void FUN_100d7990(long long param_1);
void FUN_100d79dc(int param_1);
void FUN_100d7a4c(long long param_1);
void FUN_100d7a98(void);
void FUN_100d7b78(void);
int * FUN_100d7d1c(int param_1);
void FUN_100d7e04(int param_1,int *param_2);
void FUN_100d7e94(int param_1,int *param_2);
void FUN_100d7f24(int *param_1,long long param_2,long long param_3);
void FUN_100d8078(int *param_1);
void FUN_100d80c8(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100d81a0(int param_1,int param_2);
long long FUN_100d81dc(int param_1,unsigned char param_2);
void FUN_100d8248(int *param_1);
void FUN_100d82c0(int *param_1,long long param_2,int *param_3,long long param_4);
void FUN_100d848c(int *param_1,int *param_2);
void FUN_100d85c8(int *param_1,long long param_2,long long param_3,int param_4);
void FUN_100d8690(int param_1,int param_2);
void FUN_100d87a0(long long param_1,int *param_2);
void FUN_100d888c(void);
long long FUN_100d88e4(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100d8a1c(int *param_1);
void FUN_100d8aa4(void);
void FUN_100d90bc(void);
void FUN_100d916c(int *param_1);
int * FUN_100d91e8(int *param_1);
void FUN_100d9250(void);
void FUN_100d9278(int param_1,long long param_2,short *param_3);
void FUN_100d9394(long long param_1);
void FUN_100d93dc(void);
int FUN_100d9444(int param_1);
void FUN_100d9464(int param_1);
int * FUN_100d94c8(int *param_1);
void FUN_100d9560(void);
void FUN_100d9588(int param_1,int param_2);
void FUN_100d95c4(void);
void FUN_100d95c8(int *param_1);
long long FUN_100d9608(int *param_1);
int FUN_100d96b0(void);
void FUN_100d9780(int param_1,char param_2);
void FUN_100d978c(int *param_1);
int * FUN_100d9860(int param_1);
int FUN_100d9a18(int param_1,int param_2);
int FUN_100d9a64(int param_1,int param_2);
void FUN_100d9abc(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100d9b64(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100d9be4(int *param_1,long long param_2);
void FUN_100d9c74(int *param_1,long long param_2);
void FUN_100d9cdc(int *param_1,long long param_2,long long param_3);
unsigned long long FUN_100d9d50(int *param_1);
void FUN_100d9eec(int *param_1,char param_2);
long long FUN_100d9fe8(void);
void FUN_100d9ff0(int *param_1,long long param_2);
void FUN_100da080(int *param_1,long long param_2);
void FUN_100da0e0(int *param_1,long long param_2);
void FUN_100da170(int *param_1,long long param_2);
void FUN_100da1d0(int *param_1,long long param_2);
long long FUN_100da2c0(int *param_1,int param_2,int param_3);
void FUN_100da474(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5);
long long FUN_100da500(int *param_1);
void FUN_100da564(void);
void FUN_100da5a0(int param_1,int *param_2);
void FUN_100da6b4(int param_1,int *param_2);
unsigned long long FUN_100da744(int param_1);
int * FUN_100da7c8(int param_1,int param_2);
void FUN_100da8c4(int param_1,char param_2);
long long FUN_100da9c8(int *param_1);
void FUN_100daa2c(int *param_1,int *param_2);
void FUN_100daac8(int *param_1,int *param_2);
void FUN_100dab70(int *param_1);
void FUN_100dabb8(int *param_1);
char FUN_100dabfc(unsigned long long param_1);
void FUN_100dac54(void);
void FUN_100dac58(int *param_1,int *param_2);
void FUN_100dad6c(int *param_1,int *param_2);
long long FUN_100daf30(void);
void FUN_100daf38(int *param_1,int param_2);
void FUN_100dafe8(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100db064(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_100db10c(void);
void FUN_100db22c(short param_1,int param_2,long long param_3);
void FUN_100db2a4(int param_1);
void FUN_100db368(long long param_1);
void FUN_100db3b8(int param_1);
long long FUN_100db500(long long param_1,long long param_2,char param_3,char param_4,
            char param_5,char param_6);
void FUN_100db57c(void);
void FUN_100db5a4(int *param_1);
void FUN_100db5f0(int *param_1,int *param_2);
void FUN_100db660(int *param_1,int param_2);
void FUN_100db6cc(int *param_1,int param_2);
long long FUN_100db770(int *param_1,long long param_2);
void FUN_100db864(int *param_1,int param_2);
long long FUN_100db90c(int *param_1,short param_2,long long param_3,long long param_4);
long long FUN_100dba30(int *param_1);
long long FUN_100dbadc(int *param_1);
long long FUN_100dbba0(int param_1);
long long FUN_100dbbf0(int param_1);
long long FUN_100dbc48(int *param_1);
void FUN_100dbcdc(int param_1);
void FUN_100dbde8(int param_1);
void FUN_100dbf50(int param_1);
long long FUN_100dc050(int *param_1);
long long FUN_100dc10c(int *param_1);
long long FUN_100dc1e0(int param_1,unsigned char param_2);
void FUN_100dc49c(int param_1,int param_2);
void FUN_100dc55c(int param_1);
void FUN_100dc5e8(int param_1,int param_2);
int FUN_100dc6c4(int *param_1);
void FUN_100dc720(int param_1);
void FUN_100dc748(int param_1);
long long FUN_100dc778(int *param_1,int *param_2);
void FUN_100dc7dc(int param_1,int param_2);
long long FUN_100dc8c0(int *param_1,int *param_2);
void FUN_100dc954(int param_1,long long param_2,long long param_3,long long param_4);
int FUN_100dca58(int *param_1);
void FUN_100dcab4(int param_1,int *param_2);
long long FUN_100dcb50(int param_1,long long param_2);
long long FUN_100dcce4(int *param_1,int *param_2,int *param_3);
long long FUN_100dcd54(int *param_1,short *param_2);
long long FUN_100dcdd4(int *param_1,int param_2);
long long FUN_100dce54(int *param_1,int param_2);
long long FUN_100dced4(int *param_1,int *param_2);
void FUN_100dcf5c(int param_1);
long long FUN_100dcf88(int *param_1,int *param_2);
long long FUN_100dd00c(int *param_1,unsigned int *param_2);
void FUN_100dd090(int param_1,int param_2);
void FUN_100dd0d4(int param_1,int param_2);
long long FUN_100dd178(int param_1,int *param_2);
int FUN_100dd260(int *param_1);
long long FUN_100dd2b8(int *param_1,char *param_2);
void FUN_100dd378(int *param_1);
long long FUN_100dd3bc(int param_1,short *param_2);
void FUN_100dd4d4(int param_1,long long param_2,long long param_3);
long long FUN_100dd508(int param_1,int param_2,int *param_3,char param_4);
void FUN_100dd588(int param_1,long long param_2);
void FUN_100dd660(int param_1,int param_2);
void FUN_100dd708(int param_1);
void FUN_100dd730(int param_1,long long param_2,short param_3);
void FUN_100dd768(int param_1,int param_2);
void FUN_100dd808(long long param_1,unsigned char *param_2);
long long FUN_100dd84c(int *param_1,char param_2);
void FUN_100dd8e0(int param_1);
long long FUN_100dd910(int param_1);
void FUN_100dd968(int param_1,long long param_2,long long param_3);
void FUN_100dd99c(void);
int * FUN_100dd9e0(int *param_1);
void FUN_100dda5c(void);
void FUN_100dda84(int *param_1,long long param_2,int param_3);
void FUN_100ddb80(void);
long long FUN_100ddbbc(long long param_1,long long param_2);
void FUN_100ddc10(int param_1);
void FUN_100ddc54(int param_1);
void FUN_100ddc8c(int param_1,short param_2,short param_3,char param_4);
void FUN_100dddb0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100de030(int param_1,int *param_2);
void FUN_100de188(int *param_1,int *param_2,char param_3);
void FUN_100de3d4(int *param_1,int *param_2);
void FUN_100de664(int param_1,int *param_2);
void FUN_100de77c(int *param_1,int *param_2);
void FUN_100de974(int param_1);
void FUN_100de9ac(int *param_1,char param_2);
void FUN_100dea60(int *param_1,long long param_2);
void FUN_100deae8(int *param_1);
void FUN_100decb0(int *param_1,unsigned long long param_2);
void FUN_100dedd4(int *param_1,long long param_2);
void FUN_100dee64(void);
void FUN_100df03c(int param_1,unsigned char *param_2);
void FUN_100df0d8(long long param_1,long long param_2);
void FUN_100df108(void);
int * FUN_100df14c(int *param_1);
void FUN_100df1d0(void);
void FUN_100df1f8(int param_1,int param_2,int param_3);
void FUN_100df23c(int *param_1);
void FUN_100df2b8(int param_1);
long long FUN_100df2f0(int param_1);
void FUN_100df33c(int param_1);
void FUN_100df384(int *param_1,long long param_2,int *param_3);
void FUN_100df404(int param_1,char param_2);
void FUN_100df450(int param_1,long long param_2,char param_3);
long long FUN_100df48c(int param_1,char param_2);
void FUN_100df560(int *param_1,int param_2);
void FUN_100df5bc(int param_1);
long long FUN_100df604(int param_1,long long param_2,char param_3,int param_4);
void FUN_100df6b4(int param_1,unsigned char *param_2);
long long FUN_100df830(int param_1);
void FUN_100df87c(int *param_1,char param_2);
void FUN_100df9e4(int param_1,long long param_2,long long param_3,int *param_4);
void FUN_100dfcd4(int *param_1,long long param_2,long long param_3,char param_4,char param_5);

/* Extern declarations for Ghidra globals */
extern long iRam10116a5c;
extern long iRam10116a68;
extern long iRam10116b20;
extern long iRam10116b24;
extern long iRam10116b80;
extern long iRam101177b0;
extern long iRam101177f0;
extern long iRam1011788c;
extern unsigned char *pbRam10116a54;
extern char *pcRam1011688c;
extern char *pcRam10116a4c;
extern char *pcRam10116a50;
extern char *pcRam10116c48;
extern pint *piRam101169c4;
extern pint *piRam101169f4;
extern pint *piRam10116a44;
extern pint *piRam10116a48;
extern pint *piRam10116a70;
extern pint *piRam101177ac;
extern pint *piRam101177d8;
extern pint *piRam101177e0;
extern pint *piRam101177fc;
extern pint *piRam10117800;
extern pint *piRam10117808;
extern pint *piRam10117818;
extern pint *piRam1011781c;
extern short *psRam10116888;
extern short *psRam10116a6c;
extern short *psRam10116e6c;
extern short *psRam101177d4;
extern short *psRam101177dc;
extern short *psRam101177f8;
extern unsigned int *puRam10116920;
extern unsigned int *puRam10116924;
extern unsigned int *puRam10116928;
extern unsigned int *puRam1011692c;
extern unsigned int *puRam10116930;
extern unsigned int *puRam101169c4;
extern unsigned int *puRam101169e0;
extern unsigned int *puRam10116a40;
extern unsigned int *puRam10116a6c;
extern unsigned int *puRam10116a88;
extern unsigned int *puRam10116afc;
extern unsigned int *puRam10116b18;
extern unsigned int *puRam10116b24;
extern unsigned int *puRam10116b28;
extern unsigned int *puRam10116b2c;
extern unsigned int *puRam10116b30;
extern unsigned int *puRam10116b34;
extern unsigned int *puRam10116b40;
extern unsigned int *puRam10116b48;
extern unsigned int *puRam10116b68;
extern unsigned int *puRam10116b8c;
extern unsigned int *puRam10116bc0;
extern unsigned int *puRam10116bdc;
extern unsigned int *puRam10116c18;
extern unsigned int *puRam10116c4c;
extern unsigned int *puRam10116c50;
extern unsigned int *puRam10116c6c;
extern unsigned int *puRam10116ccc;
extern unsigned int *puRam10116d0c;
extern unsigned int *puRam10116d34;
extern unsigned int *puRam10116da8;
extern unsigned int *puRam10116e24;
extern unsigned int *puRam10116e44;
extern unsigned int *puRam10116e90;
extern unsigned int *puRam10116eac;
extern unsigned int *puRam10116ecc;
extern unsigned int *puRam10116ee0;
extern unsigned int *puRam10116ef8;
extern unsigned int *puRam10116f08;
extern unsigned int *puRam10117370;
extern unsigned int *puRam101176bc;
extern unsigned int *puRam101177ac;
extern unsigned int *puRam101177b4;
extern unsigned int *puRam101177c0;
extern unsigned int *puRam101177d0;
extern unsigned int *puRam10117808;
extern unsigned int uRam10116100;
extern unsigned int uRam10116318;
extern unsigned int uRam10116610;
extern unsigned int uRam10116864;
extern unsigned int uRam10116870;
extern unsigned int uRam10116874;
extern unsigned int uRam10116878;
extern unsigned int uRam10116884;
extern unsigned int uRam10116890;
extern unsigned int uRam10116894;
extern unsigned int uRam101168a8;
extern unsigned int uRam101168b0;
extern unsigned int uRam101168b8;
extern unsigned int uRam101168c0;
extern unsigned int uRam101168c8;
extern unsigned int uRam101168d0;
extern unsigned int uRam101168d8;
extern unsigned int uRam101168e0;
extern unsigned int uRam101168e8;
extern unsigned int uRam101168f8;
extern unsigned int uRam10116900;
extern unsigned int uRam10116908;
extern unsigned int uRam10116934;
extern unsigned int uRam10116938;
extern unsigned int uRam101169bc;
extern unsigned int uRam101169c0;
extern unsigned int uRam101169d4;
extern unsigned int uRam101169e4;
extern unsigned int uRam101169f0;
extern unsigned int uRam101169f8;
extern unsigned int uRam10116a10;
extern unsigned int uRam10116a54;
extern unsigned int uRam10116a74;
extern unsigned int uRam10116a84;
extern unsigned int uRam10116a8c;
extern unsigned int uRam10116a90;
extern unsigned int uRam10116ae0;
extern unsigned int uRam10116af8;
extern unsigned int uRam10116b00;
extern unsigned int uRam10116b1c;
extern unsigned int uRam10116b64;
extern unsigned int uRam10116b6c;
extern unsigned int uRam10116b70;
extern unsigned int uRam10116b90;
extern unsigned int uRam10116b9c;
extern unsigned int uRam10116ba0;
extern unsigned int uRam10116ba4;
extern unsigned int uRam10116ba8;
extern unsigned int uRam10116bb4;
extern unsigned int uRam10116bbc;
extern unsigned int uRam10116bc0;
extern unsigned int uRam10116bc8;
extern unsigned int uRam10116be0;
extern unsigned int uRam10116be4;
extern unsigned int uRam10116c0c;
extern unsigned int uRam10116c1c;
extern unsigned int uRam10116c2c;
extern unsigned int uRam10116c34;
extern unsigned int uRam10116c40;
extern unsigned int uRam10116c54;
extern unsigned int uRam10116c70;
extern unsigned int uRam10116c7c;
extern unsigned int uRam10116ca0;
extern unsigned int uRam10116ca8;
extern unsigned int uRam10116cb0;
extern unsigned int uRam10116cb4;
extern unsigned int uRam10116cb8;
extern unsigned int uRam10116cc8;
extern unsigned int uRam10116cd0;
extern unsigned int uRam10116cec;
extern unsigned int uRam10116d2c;
extern unsigned int uRam10116d38;
extern unsigned int uRam10116d40;
extern unsigned int uRam10116d68;
extern unsigned int uRam10116d70;
extern unsigned int uRam10116dac;
extern unsigned int uRam10116e0c;
extern unsigned int uRam10116e28;
extern unsigned int uRam10116e3c;
extern unsigned int uRam10116e48;
extern unsigned int uRam10116e50;
extern unsigned int uRam10116e54;
extern unsigned int uRam10116e64;
extern unsigned int uRam10116e88;
extern unsigned int uRam10116e94;
extern unsigned int uRam10116e9c;
extern unsigned int uRam10116ea8;
extern unsigned int uRam10116eb0;
extern unsigned int uRam10116ed0;
extern unsigned int uRam10116ee4;
extern unsigned int uRam10116ee8;
extern unsigned int uRam10116eec;
extern unsigned int uRam10116ef4;
extern unsigned int uRam10116efc;
extern unsigned int uRam10116f00;
extern unsigned int uRam10116f0c;
extern unsigned int uRam101177a4;
extern unsigned int uRam101177a8;

/* Address: 0x100b0060 Size: 24 bytes */
long long FUN_100b0060(long long param_1,int param_2)

{
  return ((((unsigned long long)*(unsigned int *)(param_2 + -4) & 0xffffff00) << 0x20) >> 0x28) - 4;
}

/* Address: 0x100b0078 Size: 176 bytes */
unsigned int * FUN_100b0078(long long param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x0;
  if (((*param_2 & 8) == 0) && ((*param_2 & 4) == 0)) {
    puVar1 = (unsigned int *)param_2[-1];
    *puVar1 = *puVar1 & 0xff | ((*puVar1 >> 8) + (*param_2 >> 8)) * 0x100;
    FUN_100af554(puVar1);
  }
  return puVar1;
}

/* Address: 0x100b0128 Size: 220 bytes */
void FUN_100b0128(long long param_1,long long param_2)

{
  unsigned int uVar1;
  int iVar3;
  long long uVar2;
  long long lVar4;
  unsigned int *puVar5;
  
  param_2 = param_2 + -4;
  puVar5 = (unsigned int *)param_2;
  *puVar5 = *puVar5 & 0xfffffff7;
  FUN_100af554(param_2);
  lVar4 = param_2 + ((((unsigned long long)*puVar5 & 0xffffff00) << 0x20) >> 0x28);
  uVar1 = (unsigned int)((unsigned long long)*puVar5 & 0xffffff00) >> 8;
  *(unsigned int *)((int)puVar5 + uVar1) = *(unsigned int *)((int)puVar5 + uVar1) & 0xfffffffb;
  iVar3 = FUN_100b0078(param_1,lVar4);
  if (iVar3 != 0) {
    FUN_100afec4(param_1,lVar4);
  }
  uVar2 = FUN_100b0078(param_1,param_2);
  if ((int)uVar2 == 0) {
    FUN_100afa10(param_1,param_2);
  }
  else {
    FUN_100afec4(param_1,uVar2);
    FUN_100afa10(param_1,uVar2);
  }
  return;
}

/* Address: 0x100b0214 Size: 12 bytes */
void FUN_100b0214(int *param_1,int *param_2)

{
  int uVar1;
  int uVar2;
  int uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

/* Address: 0x100b0220 Size: 124 bytes */
void FUN_100b0220(int param_1)

{
  char auStack_18 [24];
  
  FUN_100af7c0(param_1);
  *(int *)(param_1 + 0x14) = 0;
  FUN_100af6b4(auStack_18);
  FUN_100b0214(param_1 + 0x20,auStack_18);
  FUN_100afb10(param_1,*(int *)(param_1 + 0x1c));
  return;
}

/* Address: 0x100b0324 Size: 68 bytes */
int FUN_100b0324(short *param_1)

{
  int uVar1;
  
  uVar1 = uRam101177a4;
  FUN_10001dd0(uRam101177a4,uRam10116864,param_1[1],*param_1);
  return uVar1;
}

/* Address: 0x100b0384 Size: 4 bytes */
void FUN_100b0384(void)

{
  return;
}

/* Address: 0x100b0388 Size: 20 bytes */
long long FUN_100b0388(long long param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 2;
}

/* Address: 0x100b039c Size: 108 bytes */
void FUN_100b039c(int *param_1,short *param_2,short *param_3)

{
  int *puStack00000018;
  int local_18;
  
  puStack00000018 = param_1;
  FUN_100b02d0(&local_18);
  local_18 = CONCAT22(*param_2 + *param_3,param_2[1] + param_3[1]);
  *puStack00000018 = local_18;
  return;
}

/* Address: 0x100b0408 Size: 108 bytes */
void FUN_100b0408(int *param_1,short *param_2,short *param_3)

{
  int *puStack00000018;
  int local_18;
  
  puStack00000018 = param_1;
  FUN_100b02d0(&local_18);
  local_18 = CONCAT22(*param_2 - *param_3,param_2[1] - param_3[1]);
  *puStack00000018 = local_18;
  return;
}

/* Address: 0x100b0498 Size: 36 bytes */
void FUN_100b0498(short *param_1,short *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}

/* Address: 0x100b04bc Size: 52 bytes */
long long FUN_100b04bc(short *param_1,short *param_2)

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

/* Address: 0x100b04f0 Size: 52 bytes */
long long FUN_100b04f0(short *param_1,short *param_2)

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

/* Address: 0x100b0524 Size: 80 bytes */
int FUN_100b0524(short *param_1)

{
  int uVar1;
  
  uVar1 = uRam101177a8;
  FUN_10001dd0(uRam101177a8,(unsigned long long)uRam10116864 + 0x10,param_1[1],*param_1,param_1[3],param_1[2]
              );
  return uVar1;
}

/* Address: 0x100b0574 Size: 4 bytes */
void FUN_100b0574(void)

{
  return;
}

/* Address: 0x100b0590 Size: 68 bytes */
void FUN_100b0590(short *param_1,short *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + param_2[2];
  param_1[3] = param_1[3] + param_2[3];
  return;
}

/* Address: 0x100b05d4 Size: 68 bytes */
void FUN_100b05d4(short *param_1,short *param_2,short *param_3)

{
  *param_2 = *param_1 + *param_3;
  param_2[1] = param_1[1] + param_3[1];
  param_2[2] = param_1[2] + *param_3;
  param_2[3] = param_1[3] + param_3[1];
  return;
}

/* Address: 0x100b0618 Size: 68 bytes */
void FUN_100b0618(short *param_1,short *param_2,short *param_3)

{
  *param_2 = *param_1 - *param_3;
  param_2[1] = param_1[1] - param_3[1];
  param_2[2] = param_1[2] - *param_3;
  param_2[3] = param_1[3] - param_3[1];
  return;
}

/* Address: 0x100b065c Size: 60 bytes */
void FUN_100b065c(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_1 = sVar1 + *param_1;
  param_1[1] = sVar2 + param_1[1];
  param_1[2] = sVar1 + param_1[2];
  param_1[3] = sVar2 + param_1[3];
  return;
}

/* Address: 0x100b0698 Size: 60 bytes */
void FUN_100b0698(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  *param_1 = *param_1 - sVar1;
  param_1[1] = param_1[1] - sVar2;
  param_1[2] = param_1[2] - sVar1;
  param_1[3] = param_1[3] - sVar2;
  return;
}

/* Address: 0x100b0718 Size: 84 bytes */
long long FUN_100b0718(short *param_1,short *param_2)

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

/* Address: 0x100b076c Size: 52 bytes */
long long FUN_100b076c(short *param_1)

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

/* Address: 0x100b07a0 Size: 208 bytes */
void FUN_100b07a0(short *param_1,short *param_2,short *param_3)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_3;
  if (*param_3 < *param_1) {
    sVar2 = *param_1;
  }
  *param_2 = sVar2;
  sVar2 = param_3[1];
  if (param_3[1] < param_1[1]) {
    sVar2 = param_1[1];
  }
  param_2[1] = sVar2;
  sVar2 = param_3[2];
  if (param_1[2] < param_3[2]) {
    sVar2 = param_1[2];
  }
  param_2[2] = sVar2;
  sVar2 = param_3[3];
  if (param_1[3] < param_3[3]) {
    sVar2 = param_1[3];
  }
  param_2[3] = sVar2;
  iVar1 = FUN_100b076c(param_2);
  if (iVar1 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return;
}

/* Address: 0x100b0870 Size: 52 bytes */
long long FUN_100b0870(short *param_1)

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

/* Address: 0x100b08a4 Size: 48 bytes */
short FUN_100b08a4(short *param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1[2] - *param_1;
  }
  return param_1[3] - param_1[1];
}

/* Address: 0x100b0914 Size: 76 bytes */
long long FUN_100b0914(short *param_1,short *param_2)

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

/* Address: 0x100b0b10 Size: 36 bytes */
void FUN_100b0b10(void)

{
  FUN_100025b0();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b0b34(int *param_1,unsigned long long param_2) { }



















































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b0c24(void) { }











/* Address: stubbed - had compile errors on 64-bit */
int FUN_100b0c48(int *param_1,char param_2,char param_3,char param_4) { return 0; }







































































































/* Address: 0x100b0d0c Size: 40 bytes */
void FUN_100b0d0c(long long param_1,long long param_2)

{
  FUN_100b21e4(param_2);
  return;
}

/* Address: 0x100b0d34 Size: 240 bytes */
long long FUN_100b0d34(int param_1,long long param_2,unsigned int param_3,long long param_4)

{
  long long uVar1;
  unsigned int *puVar2;
  unsigned int uStack00000020;
  unsigned int local_18 [6];
  
  puVar2 = local_18;
  uStack00000020 = param_3;
  local_18[0] = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x68),param_2);
  uVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x60),uStack00000020,param_4)
  ;
  if ((int)uVar1 == 0) {
    if (uStack00000020 <= local_18[0]) {
      return param_2;
    }
  }
  else {
    if (uStack00000020 <= local_18[0]) {
      puVar2 = ((char*)0 + 0x00000020);
    }
    FUN_10002340(param_2,uVar1,*puVar2);
    FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x70),param_2);
  }
  return uVar1;
}

/* Address: 0x100b0e24 Size: 40 bytes */
void FUN_100b0e24(long long param_1,long long param_2)

{
  FUN_100025b0(param_2);
  return;
}

/* Address: 0x100b0e4c Size: 64 bytes */
unsigned short * FUN_100b0e4c(unsigned short *param_1)

{
  if (param_1 == (unsigned short *)0x0) {
    return (unsigned short *)0x0;
  }
  *param_1 = *param_1 & 0xff00 | 0x2a;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

/* Address: 0x100b0e8c Size: 112 bytes */
unsigned short * FUN_100b0e8c(unsigned short *param_1,short param_2,unsigned short param_3)

{
  if (param_1 == (unsigned short *)0x0) {
    return (unsigned short *)0x0;
  }
  *param_1 = (param_3 & 0xf) << 8 | param_2 << 0xc | 0x2a;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

/* Address: 0x100b0efc Size: 36 bytes */
int FUN_100b0efc(unsigned short *param_1,int param_2)

{
  return (int)param_1 + (-2 - param_2 * ((int)(*param_1 & 0xf00) >> 8));
}

/* Address: 0x100b0f20 Size: 52 bytes */
void FUN_100b0f20(unsigned short *param_1,unsigned int param_2,char param_3)

{
  unsigned short uVar1;
  
  uVar1 = (unsigned short)(1 << (param_2 & 0x3f));
  if (param_3 != '\0') {
    *param_1 = *param_1 | uVar1;
    return;
  }
  *param_1 = *param_1 & ~uVar1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b0f54(unsigned short *param_1,long long param_2,char param_3) { }































/* Address: 0x100b0fb0 Size: 148 bytes */
short * FUN_100b0fb0(short *param_1,short param_2,long long param_3,int param_4)

{
  unsigned long long uVar1;
  short *puVar2;
  
  if (param_1 == (short *)0x0) {
    param_1 = (short *)0x0;
  }
  else {
    *param_1 = 0;
    puVar2 = param_1 + 1;
    uVar1 = 0;
    if (((long long)param_2 & 0xffffffffU) != 0) {
      do {
        if (puVar2 != (short *)0x0) {
          FUN_100b0e8c(puVar2,param_3,uVar1);
        }
        puVar2 = (short *)((int)puVar2 + param_4);
        uVar1 = uVar1 + 1;
      } while ((uVar1 & 0xffffffff) < ((long long)param_2 & 0xffffffffU));
    }
  }
  return param_1;
}

/* Address: 0x100b1044 Size: 20 bytes */
long long FUN_100b1044(long long param_1,int param_2,int param_3)

{
  return param_1 + (long long)param_2 * (long long)param_3 + 2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b1234(int param_1,unsigned long long param_2) { }





































/* Address: 0x100b12c0 Size: 136 bytes */
unsigned int FUN_100b12c0(int param_1,int param_2)

{
  unsigned int uVar1;
  char auStack_108 [264];
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    do {
      if (param_2 + 2U <= *(unsigned int *)(*(int *)(param_1 + 0x34) + uVar1 * 4)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (unsigned int)(int)*(short *)(param_1 + 0x30));
  }
  FUN_100b19f4(auStack_108,uRam10116874);
  FUN_100db368(auStack_108);
  return 0xffffffff;
}

/* Address: 0x100b1348 Size: 12 bytes */
int FUN_100b1348(int param_1)

{
  return *(int *)(param_1 + 4);
}

/* Address: 0x100b1354 Size: 16 bytes */
void FUN_100b1354(int param_1,int param_2)

{
  *(int *)(param_2 + 4) = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = param_2;
  return;
}

/* Address: 0x100b1364 Size: 256 bytes */
void FUN_100b1364(long long param_1,unsigned long long param_2)

{
  int iVar1;
  int iVar2;
  unsigned long long uVar3;
  long long uVar4;
  unsigned long long uVar5;
  char auStack_18 [24];
  
  iVar2 = (int)((param_2 & 0xffffffff) << 2);
  iVar1 = (int)param_1;
  uVar3 = FUN_100afeec(param_1,(long long)(int)*(short *)(iVar1 + 0xb8) *
                               (long long)*(int *)(*(int *)(iVar1 + 0x34) + iVar2) + 2,auStack_18);
  if ((uVar3 & 0xffffffff) != 0) {
    uVar3 = FUN_100b0fb0(uVar3,*(short *)(iVar1 + 0xb8),param_2,
                         *(int *)(iVar2 + *(int *)(iVar1 + 0x34)));
  }
  if (((int)uVar3 != 0) && (uVar5 = 0, *(short *)(iVar1 + 0xb8) != 0)) {
    do {
      iVar2 = (int)((param_2 & 0xffffffff) << 2);
      uVar4 = FUN_100b1044(uVar3,uVar5,*(int *)(*(int *)(iVar1 + 0x34) + iVar2));
      FUN_100b0f54(uVar4,*(int *)(iVar2 + *(int *)(iVar1 + 0x34)),0);
      FUN_100b1354(param_1 + (param_2 & 0x1fffffff) * 8 + 0x38,uVar4);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < ((long long)*(short *)(iVar1 + 0xb8) & 0xffffffffU));
  }
  return;
}

/* Address: 0x100b1464 Size: 20 bytes */
int FUN_100b1464(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = *(int *)(iVar1 + 4);
  return iVar1;
}

/* Address: 0x100b1478 Size: 160 bytes */
long long FUN_100b1478(int param_1,int param_2)

{
  int iVar2;
  long long lVar1;
  
  iVar2 = FUN_100b1348(param_1 + param_2 * 8 + 0x38);
  if (iVar2 == 0) {
    FUN_100b1364(param_1,param_2);
  }
  lVar1 = FUN_100b1464(param_1 + param_2 * 8 + 0x38);
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_100b0f54(lVar1,*(int *)(*(int *)(param_1 + 0x34) + param_2 * 4),1);
    lVar1 = lVar1 + 2;
  }
  return lVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b1518(int param_1,long long param_2,int *param_3) { }














































/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100b15ac(int param_1,int param_2) { return 0; }











































/* Address: 0x100b1608 Size: 76 bytes */
void FUN_100b1608(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 4);
  while (uVar1 = uVar2, uVar1 != 0) {
    if ((uVar1 < param_2) || (param_3 < uVar1)) {
      uVar2 = *(unsigned int *)(uVar1 + 4);
      param_1 = uVar1;
    }
    else {
      *(int *)(param_1 + 4) = *(int *)(uVar1 + 4);
      uVar2 = *(unsigned int *)(uVar1 + 4);
    }
  }
  return;
}

/* Address: 0x100b1654 Size: 276 bytes */
void FUN_100b1654(int param_1,unsigned short *param_2)

{
  int iVar1;
  short *psVar2;
  
  FUN_100b0f54(param_2,*(int *)
                        (*(int *)(param_1 + 0x34) + ((int)(*param_2 & 0xf000) >> 0xc) * 4),0);
  FUN_100b1354(param_1 + ((int)(*param_2 & 0xf000) >> 0xc) * 8 + 0x38,param_2);
  psVar2 = (short *)FUN_100b0efc(param_2,*(int *)
                                          (*(int *)(param_1 + 0x34) +
                                          ((int)(*param_2 & 0xf000) >> 0xc) * 4));
  if (*psVar2 == 0) {
    iVar1 = (int)((unsigned short)psVar2[1] & 0xf000) >> 0xc;
    FUN_100b1608(param_1 + iVar1 * 8 + 0x38,psVar2,
                 (int)psVar2 +
                 (int)*(short *)(param_1 + 0xb8) * *(int *)(*(int *)(param_1 + 0x34) + iVar1 * 4) +
                 2);
    FUN_100b0128(param_1,psVar2);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b1768(long long param_1,int param_2) { }































/* Address: 0x100b17b8 Size: 104 bytes */
int FUN_100b17b8(int param_1)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(8), param_1 != 0)) {
    FUN_100b0e4c(param_1);
    *(int *)(param_1 + 4) = 0;
  }
  return param_1;
}

/* Address: 0x100b1820 Size: 20 bytes */
void FUN_100b1820(short *param_1,short *param_2)

{
  *param_1 = *param_2;
  *(int *)(param_1 + 2) = *(int *)(param_2 + 2);
  return;
}

/* Address: 0x100b1834 Size: 64 bytes */
void FUN_100b1834(int param_1,unsigned long long param_2)

{
  if (((param_1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    FUN_100f5708();
  }
  return;
}

/* Address: 0x100b1874 Size: 140 bytes */
void FUN_100b1874(int param_1)

{
  int iVar1;
  char auStack_18 [24];
  
  FUN_100b17b8(auStack_18);
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x30)) {
    do {
      FUN_100b1820(iVar1 * 8 + param_1 + 0x38,auStack_18);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(short *)(param_1 + 0x30));
  }
  FUN_100b0220(param_1);
  FUN_100b1834(auStack_18,2);
  return;
}

/* Address: 0x100b1900 Size: 244 bytes */
void FUN_100b1900(unsigned char *param_1,unsigned char *param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned short uVar5;
  short sVar6;
  
  iVar2 = (int)param_3;
  iVar4 = *param_1 + 1;
  iVar3 = (int)param_4;
  if ((iVar4 < param_3) && ((int)(unsigned int)*param_1 < iVar3)) {
    iVar2 = (int)(short)iVar4;
  }
  sVar1 = (short)iVar2;
  if (iVar3 < (int)(iVar2 + (unsigned int)*param_2)) {
    uVar5 = (param_4 - sVar1) + 1;
  }
  else {
    uVar5 = (unsigned short)*param_2;
  }
  sVar6 = sVar1 + uVar5 + -1;
  if (iVar3 < (int)(((unsigned int)*param_1 - iVar2) + (int)sVar6 + 2)) {
    param_4 = param_4 - sVar6;
  }
  else {
    param_4 = ((unsigned short)*param_1 - sVar1) + 1;
  }
  FUN_100012d8(param_1 + iVar2,param_1 + sVar6 + 1,param_4);
  FUN_100012d8(param_2 + 1,param_1 + iVar2,uVar5);
  *param_1 = (char)sVar6 + (char)param_4;
  return;
}

/* Address: 0x100b1ab0 Size: 88 bytes */
void FUN_100b1ab0(long long param_1,long long param_2,short param_3,short param_4)

{
  char auStack_110 [272];
  
  FUN_100b19f4(auStack_110);
  FUN_100b1900(param_1,auStack_110,param_3,param_4);
  return;
}

/* Address: 0x100b1b08 Size: 136 bytes */
int FUN_100b1b08(unsigned char *param_1)

{
  short *psVar1;
  int iVar2;
  unsigned int uVar3;
  short sVar4;
  
  iVar2 = iRam101177b0;
  psVar1 = psRam10116888;
  uVar3 = (int)*psRam10116888 + 1;
  sVar4 = (short)uVar3 -
          (short)(((long long)((int)uVar3 >> 3) + (unsigned long long)((int)uVar3 < 0 && (uVar3 & 7) != 0) &
                  0xffffffff) << 3);
  *psRam10116888 = sVar4;
  FUN_100012d8(param_1 + 1,sVar4 * 0x100 + iVar2,*param_1);
  sVar4 = *psVar1;
  *(char *)(sVar4 * 0x100 + (unsigned int)*param_1 + iVar2) = 0;
  return sVar4 * 0x100 + iVar2;
}

/* Address: 0x100b1c18 Size: 108 bytes */
void FUN_100b1c18(long long param_1,unsigned char *param_2,char param_3)

{
  char auStack_110 [272];
  
  FUN_100012d8(param_2 + 1,auStack_110,*param_2);
  auStack_110[*param_2] = 0;
  FUN_100b1b90(param_1,auStack_110,param_3);
  return;
}

/* Address: 0x100b1d1c Size: 116 bytes */
char * FUN_100b1d1c(char *param_1,int param_2)

{
  int uStack0000001c;
  
  uStack0000001c = param_2;
  if ((param_1 != (char *)0x0) ||
     (param_1 = (char *)FUN_100f56e4(0x100), param_1 != (char *)0x0)) {
    *param_1 = 4;
    FUN_100012d8(((char*)0 + 0x0000001c),param_1 + 1,4);
  }
  return param_1;
}

/* FUN_100b1e10 defined elsewhere */


/* Address: 0x100b1f6c Size: 72 bytes */
unsigned char * FUN_100b1f6c(unsigned char *param_1,long long param_2)

{
  FUN_100b1900(param_1,param_2,*param_1 + 1,0xff);
  return param_1;
}

/* Address: 0x100b1fb4 Size: 56 bytes */
void FUN_100b1fb4(unsigned char *param_1,unsigned char param_2)

{
  unsigned char bVar1;
  
  bVar1 = *param_1 + 1;
  *param_1 = bVar1;
  if (bVar1 < 0x100) {
    param_1[bVar1] = param_2;
  }
  else {
    *param_1 = *param_1 - 1;
  }
  return;
}

/* Address: 0x100b1fec Size: 188 bytes */
char * FUN_100b1fec(char *param_1,long long param_2)

{
  int *piVar1;
  char uVar2;
  int local_18;
  int local_14 [5];
  
  piVar1 = &local_18;
  if ((param_1 != (char *)0x0) ||
     (param_1 = (char *)FUN_100f56e4(0x40), param_1 != (char *)0x0)) {
    if ((int)param_2 == 0) {
      uVar2 = 0;
    }
    else {
      local_14[0] = FUN_100012c0(param_2);
      local_18 = 0x3f;
      if (local_14[0] < 0x3f) {
        piVar1 = local_14;
      }
      uVar2 = (char)*piVar1;
    }
    *param_1 = uVar2;
    FUN_100012d8(param_2,param_1 + 1);
  }
  return param_1;
}

/* Address: 0x100b20a8 Size: 72 bytes */
unsigned char * FUN_100b20a8(unsigned char *param_1,long long param_2)

{
  FUN_100b1900(param_1,param_2,*param_1 + 1,0x3f);
  return param_1;
}

/* Address: 0x100b20f0 Size: 188 bytes */
char * FUN_100b20f0(char *param_1,long long param_2)

{
  int *piVar1;
  char uVar2;
  int local_18;
  int local_14 [5];
  
  piVar1 = &local_18;
  if ((param_1 != (char *)0x0) ||
     (param_1 = (char *)FUN_100f56e4(0x21), param_1 != (char *)0x0)) {
    if ((int)param_2 == 0) {
      uVar2 = 0;
    }
    else {
      local_14[0] = FUN_100012c0(param_2);
      local_18 = 0x20;
      if (local_14[0] < 0x20) {
        piVar1 = local_14;
      }
      uVar2 = (char)*piVar1;
    }
    *param_1 = uVar2;
    FUN_100012d8(param_2,param_1 + 1);
  }
  return param_1;
}

/* Address: 0x100b21ac Size: 56 bytes */
void FUN_100b21ac(unsigned char *param_1,unsigned char param_2)

{
  unsigned char bVar1;
  
  bVar1 = *param_1 + 1;
  *param_1 = bVar1;
  if (bVar1 < 0x20) {
    param_1[bVar1] = param_2;
  }
  else {
    *param_1 = *param_1 - 1;
  }
  return;
}

/* Address: 0x100b21e4 Size: 128 bytes */
long long FUN_100b21e4(long long param_1)

{
  char *pcVar1;
  long long uVar2;
  long long unaff_r30;
  
  pcVar1 = pcRam1011688c;
  if (*pcRam1011688c != '\0') {
    unaff_r30 = FUN_100f1574(1);
  }
  uVar2 = FUN_10001338(param_1);
  if (*pcVar1 != '\0') {
    FUN_100f1574(unaff_r30);
  }
  FUN_100db26c(uVar2);
  return uVar2;
}


















/* Address: 0x100b22e0 Size: 140 bytes */
int * FUN_100b22e0(int *param_1,int param_2,char param_3)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x74);
    }
    FUN_100ebaf8(param_1,uVar2,param_3);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x404));
  }
  return param_1;
}

/* Address: 0x100b236c Size: 136 bytes */
int * FUN_100b236c(int *param_1,int param_2)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x74);
    }
    FUN_100ebaf8(param_1,uVar2,1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x404));
  }
  return param_1;
}

/* Address: 0x100b23f4 Size: 108 bytes */
void FUN_100b23f4(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116890;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: 0x100b2460 Size: 136 bytes */
long long FUN_100b2460(int *param_1)

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

/* Address: 0x100b24e8 Size: 136 bytes */
long long FUN_100b24e8(int *param_1)

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

/* Address: 0x100b2570 Size: 8 bytes */
int FUN_100b2570(void)

{
  return uRam10116894;
}

/* Address: 0x100b2578 Size: 124 bytes */
int * FUN_100b2578(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x402));
    param_1[1] = 0x20202020;
    *(char *)(param_1 + 2) = 1;
  }
  return param_1;
}

/* Address: 0x100b25f4 Size: 132 bytes */
int * FUN_100b25f4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x10),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x401));
    param_1[1] = 0x636f6d70;
    *(char *)(param_1 + 2) = 1;
    *(char *)(param_1 + 3) = 0;
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100b2678(void) { return 0; }






/* Address: 0x100b2680 Size: 124 bytes */
int * FUN_100b2680(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3ff));
    param_1[1] = 0x64696d61;
    *(char *)(param_1 + 2) = 0;
  }
  return param_1;
}

/* Address: 0x100b26fc Size: 8 bytes */
int FUN_100b26fc(void)

{
  return uRam101168a8;
}

/* Address: 0x100b2704 Size: 124 bytes */
int * FUN_100b2704(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3fd));
    param_1[1] = 0x64726177;
    *(char *)(param_1 + 2) = 0;
  }
  return param_1;
}

/* Address: 0x100b2780 Size: 8 bytes */
int FUN_100b2780(void)

{
  return uRam101168b0;
}

/* Address: 0x100b2788 Size: 124 bytes */
int * FUN_100b2788(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3fb));
    param_1[1] = 0x65726173;
    *(char *)(param_1 + 2) = 0;
  }
  return param_1;
}

/* Address: 0x100b2804 Size: 8 bytes */
int FUN_100b2804(void)

{
  return uRam101168b8;
}

/* Address: 0x100b280c Size: 104 bytes */
int * FUN_100b280c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3f9));
  }
  return param_1;
}

/* Address: 0x100b2874 Size: 8 bytes */
int FUN_100b2874(void)

{
  return uRam101168c0;
}

/* Address: 0x100b287c Size: 124 bytes */
int * FUN_100b287c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3f7));
    param_1[1] = 0x68696c69;
    *(char *)(param_1 + 2) = 0;
  }
  return param_1;
}

/* Address: 0x100b28f8 Size: 8 bytes */
int FUN_100b28f8(void)

{
  return uRam101168c8;
}

/* Address: 0x100b2900 Size: 104 bytes */
int * FUN_100b2900(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3f5));
  }
  return param_1;
}

/* Address: 0x100b2968 Size: 8 bytes */
int FUN_100b2968(void)

{
  return uRam101168d0;
}

/* Address: 0x100b2970 Size: 104 bytes */
int * FUN_100b2970(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3f3));
  }
  return param_1;
}

/* Address: 0x100b29d8 Size: 8 bytes */
int FUN_100b29d8(void)

{
  return uRam101168d8;
}

/* Address: 0x100b29e0 Size: 104 bytes */
int * FUN_100b29e0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3f1));
  }
  return param_1;
}

/* Address: 0x100b2a48 Size: 8 bytes */
int FUN_100b2a48(void)

{
  return uRam101168e0;
}

/* Address: 0x100b2a50 Size: 104 bytes */
int * FUN_100b2a50(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3ef));
  }
  return param_1;
}

/* Address: 0x100b2ab8 Size: 8 bytes */
int FUN_100b2ab8(void)

{
  return uRam101168e8;
}

/* Address: 0x100b2ac0 Size: 104 bytes */
int * FUN_100b2ac0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3ed));
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100b2b28(void) { return 0; }






/* Address: 0x100b2b30 Size: 124 bytes */
int * FUN_100b2b30(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3eb));
    param_1[1] = 0x7265737a;
    *(char *)(param_1 + 2) = 0;
  }
  return param_1;
}

/* Address: 0x100b2bac Size: 8 bytes */
int FUN_100b2bac(void)

{
  return uRam101168f8;
}

/* Address: 0x100b2bb4 Size: 104 bytes */
int * FUN_100b2bb4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3e9));
  }
  return param_1;
}

/* Address: 0x100b2c1c Size: 8 bytes */
int FUN_100b2c1c(void)

{
  return uRam10116900;
}

/* Address: 0x100b2c24 Size: 124 bytes */
int * FUN_100b2c24(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = ppuVar1[-999];
    param_1[1] = 0x73656c65;
    *(char *)(param_1 + 2) = 0;
  }
  return param_1;
}

/* Address: 0x100b2ca0 Size: 8 bytes */
int FUN_100b2ca0(void)

{
  return uRam10116908;
}

/* Address: 0x100b2ca8 Size: 104 bytes */
int * FUN_100b2ca8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3e5));
  }
  return param_1;
}

/* Address: 0x100b2d10 Size: 68 bytes */
void FUN_100b2d10(int param_1,int param_2,char param_3)

{
  FUN_100f5274(param_1);
  *(int *)(param_1 + 4) = param_2;
  *(char *)(param_1 + 8) = param_3;
  return;
}

/* Address: 0x100b2d54 Size: 48 bytes */
void FUN_100b2d54(long long param_1)

{
  FUN_100b2d10(param_1,0x64696d61,0);
  return;
}

/* Address: 0x100b2d84 Size: 48 bytes */
void FUN_100b2d84(long long param_1)

{
  FUN_100b2d10(param_1,0x64726177,0);
  return;
}

/* Address: 0x100b2db4 Size: 48 bytes */
void FUN_100b2db4(long long param_1)

{
  FUN_100b2d10(param_1,0x65726173,0);
  return;
}

/* Address: 0x100b2de4 Size: 48 bytes */
void FUN_100b2de4(long long param_1)

{
  FUN_100b2d10(param_1,0x68696c69,0);
  return;
}

/* Address: 0x100b2e14 Size: 48 bytes */
void FUN_100b2e14(long long param_1)

{
  FUN_100b2d10(param_1,0x7265737a,0);
  return;
}

/* Address: 0x100b2e44 Size: 48 bytes */
void FUN_100b2e44(long long param_1)

{
  FUN_100b2d10(param_1,0x73656c65,0);
  return;
}

/* Address: 0x100b31f4 Size: 40 bytes */
void FUN_100b31f4(void)

{
  FUN_100b2578(0);
  return;
}

/* Address: 0x100b3220 Size: 72 bytes */
void FUN_100b3220(int *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  return;
}

/* Address: 0x100b3268 Size: 116 bytes */
void FUN_100b3268(int param_1,int *param_2)

{
  int uVar1;
  char uVar2;
  
  FUN_100f5100(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(int *)(param_1 + 4) = uVar1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 8) = uVar2;
  return;
}

/* Address: 0x100b32dc Size: 116 bytes */
void FUN_100b32dc(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 8));
  return;
}

/* Address: 0x100b3354 Size: 128 bytes */
void FUN_100b3354(long long param_1,char param_2,short param_3,short param_4,short param_5)

{
  FUN_10000270(param_3,param_4);
  if (param_2 == '\x01') {
    FUN_10000288(param_5 - param_3,0);
  }
  else {
    FUN_10000288(0,param_5 - param_4);
  }
  return;
}

/* Address: 0x100b33d8 Size: 76 bytes */
void FUN_100b33d8(long long param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x4d0));
  }
  return;
}

/* Address: 0x100b3438 Size: 40 bytes */
void FUN_100b3438(void)

{
  FUN_100b25f4(0);
  return;
}

/* Address: 0x100b3460 Size: 72 bytes */
void FUN_100b3460(int param_1,char param_2)

{
  FUN_100b2d10(param_1,0x636f6d70,1);
  *(char *)(param_1 + 0xc) = param_2;
  return;
}

/* Address: 0x100b34b4 Size: 104 bytes */
void FUN_100b34b4(int param_1,int *param_2)

{
  char local_10 [16];
  
  FUN_100b3268(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_10,1);
  *(char *)(param_1 + 0xc) = local_10[0];
  return;
}

/* Address: 0x100b351c Size: 104 bytes */
void FUN_100b351c(int param_1,int *param_2)

{
  char local_10 [16];
  
  FUN_100b32dc(param_1,param_2);
  local_10[0] = *(char *)(param_1 + 0xc);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),local_10,1);
  return;
}

/* Address: 0x100b3584 Size: 964 bytes */
void FUN_100b3584(int *param_1,int *param_2,long long param_3)

{
  int iVar2;
  long long uVar1;
  char auStack_2d0 [6];
  short local_2ca;
  char auStack_2b8 [4];
  short local_2b4;
  char auStack_2a0 [16];
  char auStack_290 [4];
  short local_28c;
  short local_28a;
  char auStack_278 [16];
  char auStack_268 [276];
  int local_154;
  char auStack_150 [276];
  int local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  
  if (*(char *)(param_1 + 3) != '\0') {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_278);
    FUN_100e17d8(param_3,auStack_2a0,auStack_278);
    iVar2 = FUN_100e1a08(auStack_2a0);
    if (iVar2 == 0) {
      FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_278,&local_38);
      if (((long long)*(char *)(param_1 + 3) & 0x80U) != 0) {
        FUN_10001260();
        FUN_10002940();
      }
      if ((*(unsigned char *)(param_1 + 3) & 0xf) == 0xf) {
        FUN_100b0578(&local_38);
        FUN_100021d8();
      }
      else {
        if ((*(unsigned char *)(param_1 + 3) & 1) != 0) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,local_36,local_38,local_32)
          ;
        }
        if ((*(unsigned char *)(param_1 + 3) & 2) != 0) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,local_36,local_38,local_34)
          ;
        }
        if ((*(unsigned char *)(param_1 + 3) & 4) != 0) {
          FUN_10000000(auStack_2b8);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,local_36,
                       local_34 - local_2b4,local_32);
        }
        if ((*(unsigned char *)(param_1 + 3) & 8) != 0) {
          FUN_10000000(auStack_2d0);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,local_32 - local_2ca,
                       local_38,local_34);
        }
      }
      if ((*(unsigned char *)(param_1 + 3) & 0x20) != 0) {
        FUN_100b0578(&local_38);
        FUN_100034e0();
      }
      if ((*(unsigned char *)(param_1 + 3) & 0x40) != 0) {
        uVar1 = FUN_100b0578(&local_38);
        FUN_10000738(uVar1,0x10,0x10);
      }
      if (((long long)*(char *)(param_1 + 3) & 0x80U) != 0) {
        FUN_100ee64c(auStack_268);
        FUN_100ee64c(auStack_150);
        FUN_100012a8();
        FUN_10001e30(local_154);
        FUN_100005a0(local_154,local_3c);
        FUN_10000000(auStack_290);
        FUN_10001ec0(local_3c,local_28a,local_28c);
        FUN_10000108(local_3c,local_154,local_3c);
        FUN_10000b58(local_3c);
        FUN_100ee77c(auStack_150,2);
        FUN_100ee77c(auStack_268,2);
      }
    }
  }
  return;
}

/* Address: 0x100b3950 Size: 40 bytes */
void FUN_100b3950(void)

{
  FUN_100b2680(0);
  return;
}

/* Address: 0x100b3984 Size: 64 bytes */
void FUN_100b3984(long long param_1,int *param_2)

{
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x418));
  return;
}

/* Address: 0x100b39cc Size: 40 bytes */
void FUN_100b39cc(void)

{
  FUN_100b2704(0);
  return;
}

/* Address: 0x100b3a00 Size: 80 bytes */
void FUN_100b3a00(long long param_1,int *param_2,long long param_3)

{
  FUN_10000030();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x478),param_3);
  return;
}

/* Address: 0x100b3a58 Size: 40 bytes */
void FUN_100b3a58(void)

{
  FUN_100b2788(0);
  return;
}

/* Address: 0x100b3a8c Size: 100 bytes */
void FUN_100b3a8c(long long param_1,int *param_2,long long param_3)

{
  char auStack_10 [16];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_10);
  FUN_100b0578(auStack_10);
  FUN_10002c58();
  return;
}

/* Address: 0x100b3af8 Size: 40 bytes */
void FUN_100b3af8(void)

{
  FUN_100b287c(0);
  return;
}

/* Address: 0x100b3b2c Size: 64 bytes */
void FUN_100b3b2c(long long param_1,int *param_2)

{
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x428));
  return;
}

/* Address: 0x100b3b74 Size: 40 bytes */
void FUN_100b3b74(void)

{
  FUN_100b2b30(0);
  return;
}

/* Address: 0x100b3ba8 Size: 64 bytes */
void FUN_100b3ba8(long long param_1,int *param_2)

{
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x750));
  return;
}

/* Address: 0x100b3bf0 Size: 40 bytes */
void FUN_100b3bf0(void)

{
  FUN_100b2c24(0);
  return;
}

/* Address: 0x100b3c24 Size: 88 bytes */
void FUN_100b3c24(long long param_1,int *param_2,long long param_3,char param_4,
                 char param_5)

{
  FUN_10000030();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x468),param_4,param_5);
  return;
}

/* Address: 0x100b3c84 Size: 40 bytes */
void FUN_100b3c84(void)

{
  FUN_100b280c(0);
  return;
}

/* Address: 0x100b3cb8 Size: 176 bytes */
void FUN_100b3cb8(long long param_1,int *param_2,long long param_3)

{
  int iVar1;
  char auStack_40 [16];
  char auStack_30 [8];
  char auStack_28 [40];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_28);
  FUN_100e17d8(param_3,auStack_40,auStack_28);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_28,auStack_30);
    FUN_100b0578(auStack_30);
    FUN_100021d8();
  }
  return;
}

/* Address: 0x100b3d70 Size: 40 bytes */
void FUN_100b3d70(void)

{
  FUN_100b2ca8(0);
  return;
}

/* Address: 0x100b3da4 Size: 300 bytes */
void FUN_100b3da4(long long param_1,int *param_2,long long param_3)

{
  int iVar2;
  long long uVar1;
  char auStack_48 [16];
  short local_38;
  short local_36;
  char auStack_30 [16];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_30);
  FUN_100e17d8(param_3,auStack_48,auStack_30);
  iVar2 = FUN_100e1a08(auStack_48);
  if (iVar2 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_30,&local_20);
    local_38 = 1;
    local_36 = 1;
    uVar1 = FUN_100b057c(&local_20,1);
    FUN_100b0498(uVar1,&local_38);
    FUN_100031b0(1,1);
    FUN_100b0578(&local_20);
    FUN_100021d8();
    FUN_10000270(local_1e + 1,local_1c);
    FUN_10001d88(local_1a,local_1c);
    FUN_10001d88(local_1a,local_20 + 1);
  }
  return;
}

/* Address: 0x100b3ed8 Size: 40 bytes */
void FUN_100b3ed8(void)

{
  FUN_100b2900(0);
  return;
}

/* Address: 0x100b3f0c Size: 236 bytes */
void FUN_100b3f0c(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  char auStack_60 [4];
  short local_5c;
  char auStack_48 [16];
  char auStack_38 [16];
  char auStack_28 [2];
  short local_26;
  short local_24;
  short local_22;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_38);
  FUN_100e17d8(param_3,auStack_48,auStack_38);
  iVar1 = FUN_100e1a08(auStack_48);
  if (iVar1 == 0) {
    FUN_10000000(auStack_60);
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_38,auStack_28);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,local_26,local_24 - local_5c,
                 local_22);
  }
  return;
}

/* Address: 0x100b4000 Size: 40 bytes */
void FUN_100b4000(void)

{
  FUN_100b2970(0);
  return;
}

/* Address: 0x100b4034 Size: 204 bytes */
void FUN_100b4034(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  char auStack_40 [16];
  char auStack_30 [16];
  short local_20;
  short local_1e;
  short local_1c;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_30);
  FUN_100e17d8(param_3,auStack_40,auStack_30);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_30,&local_20);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,local_1e,local_20,local_1c);
  }
  return;
}

/* Address: 0x100b4108 Size: 40 bytes */
void FUN_100b4108(void)

{
  FUN_100b29e0(0);
  return;
}

/* Address: 0x100b413c Size: 236 bytes */
void FUN_100b413c(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  char auStack_60 [6];
  short local_5a;
  char auStack_48 [16];
  char auStack_38 [16];
  short local_28 [2];
  short local_24;
  short local_22;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_38);
  FUN_100e17d8(param_3,auStack_48,auStack_38);
  iVar1 = FUN_100e1a08(auStack_48);
  if (iVar1 == 0) {
    FUN_10000000(auStack_60);
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_38,local_28);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0,local_22 - local_5a,local_28[0],
                 local_24);
  }
  return;
}

/* Address: 0x100b4230 Size: 40 bytes */
void FUN_100b4230(void)

{
  FUN_100b2a50(0);
  return;
}

/* Address: 0x100b4264 Size: 204 bytes */
void FUN_100b4264(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  char auStack_40 [16];
  char auStack_30 [16];
  short local_20;
  short local_1e;
  short local_1a;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_30);
  FUN_100e17d8(param_3,auStack_40,auStack_30);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_30,&local_20);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),1,local_1e,local_20,local_1a);
  }
  return;
}

/* Address: 0x100b4338 Size: 40 bytes */
void FUN_100b4338(void)

{
  FUN_100b2ac0(0);
  return;
}

/* Address: 0x100b436c Size: 176 bytes */
void FUN_100b436c(long long param_1,int *param_2,long long param_3)

{
  int iVar1;
  char auStack_40 [16];
  char auStack_30 [8];
  char auStack_28 [40];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_28);
  FUN_100e17d8(param_3,auStack_40,auStack_28);
  iVar1 = FUN_100e1a08(auStack_40);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_28,auStack_30);
    FUN_100b0578(auStack_30);
    FUN_100034e0();
  }
  return;
}

/* Address: 0x100b4424 Size: 40 bytes */
void FUN_100b4424(void)

{
  FUN_100b2bb4(0);
  return;
}

/* Address: 0x100b444c Size: 40 bytes */
void FUN_100b444c(long long param_1,long long param_2,char param_3)

{
  FUN_100b2d10(param_1,param_2,param_3);
  return;
}

/* Address: 0x100b4480 Size: 184 bytes */
void FUN_100b4480(long long param_1,int *param_2,long long param_3)

{
  int iVar2;
  long long uVar1;
  char auStack_40 [16];
  char auStack_30 [8];
  char auStack_28 [40];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_28);
  FUN_100e17d8(param_3,auStack_40,auStack_28);
  iVar2 = FUN_100e1a08(auStack_40);
  if (iVar2 == 0) {
    FUN_10117884((int)*(short *)(*param_2 + 0x288) + (int)param_2,auStack_28,auStack_30);
    uVar1 = FUN_100b0578(auStack_30);
    FUN_10000738(uVar1,0x10,0x10);
  }
  return;
}

/* Address: 0x100b4540 Size: 104 bytes */
int * FUN_100b4540(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x20),
     param_1 != (int *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3e1));
  }
  return param_1;
}

/* Address: 0x100b45a8 Size: 40 bytes */
void FUN_100b45a8(void)

{
  FUN_100b4540(0);
  return;
}

/* Address: 0x100b45d0 Size: 44 bytes */
void FUN_100b45d0(long long param_1)

{
  FUN_100d88b4(param_1,0,8);
  return;
}

/* Address: 0x100b45fc Size: 228 bytes */
void FUN_100b45fc(int *param_1,int *param_2)

{
  short sVar2;
  char uVar3;
  int iVar1;
  short sVar4;
  int local_20 [8];
  
  FUN_100d7e04(param_1,param_2);
  sVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  sVar4 = 0;
  if (0 < sVar2) {
    do {
      local_20[0] = 0;
      uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
      iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),local_20);
      if (iVar1 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),local_20[0],uVar3);
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < sVar2);
  }
  return;
}

/* Address: 0x100b46e0 Size: 264 bytes */
void FUN_100b46e0(int *param_1,int *param_2)

{
  long long uVar1;
  char *puVar2;
  short sVar3;
  int iVar4;
  
  FUN_100d7e94(param_1,param_2);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),uVar1);
  iVar4 = (int)uVar1;
  if ((0 < iVar4) && (sVar3 = 1, 0 < iVar4)) {
    do {
      puVar2 = (char *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),sVar3);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*puVar2);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),*(int *)(puVar2 + 4),1);
      sVar3 = sVar3 + 1;
    } while (sVar3 <= iVar4);
  }
  return;
}

/* Address: 0x100b4820 Size: 216 bytes */
void FUN_100b4820(int *param_1,int param_2,char param_3)

{
  short sVar2;
  char *pcVar1;
  short sVar3;
  char local_20 [4];
  int local_1c;
  
  sVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if ((0 < sVar2) && (sVar3 = 1, 0 < sVar2)) {
    do {
      pcVar1 = (char *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),sVar3);
      if ((*(int *)(pcVar1 + 4) == param_2) && (*pcVar1 == param_3)) {
        return;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 <= sVar2);
  }
  local_20[0] = param_3;
  local_1c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),local_20);
  return;
}

/* Address: 0x100b48f8 Size: 60 bytes */
int FUN_100b48f8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *(int *)(iVar1 + 4);
}

/* Address: 0x100b4934 Size: 68 bytes */
char FUN_100b4934(int *param_1)

{
  char *puVar1;
  
  puVar1 = (char *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *puVar1;
}

/* Address: 0x100b4978 Size: 676 bytes */
void FUN_100b4978(void)

{
  int uVar1;
  short *puVar2;
  short *puVar3;
  short *puVar4;
  short *puVar5;
  int *ppuVar6;
  
  puVar5 = puRam1011692c;
  puVar4 = puRam10116928;
  puVar3 = puRam10116924;
  puVar2 = puRam10116920;
  uVar1 = uRam10116100;
  ppuVar6 = 0 /* TVect base */;
  *puRam1011692c = 0xe3dd;
  puVar5[1] = 0xe3dd;
  puVar5[2] = 0xe3dd;
  *puVar4 = 0xc000;
  puVar4[1] = 0xc000;
  puVar4[2] = 0xc000;
  *puVar3 = 37000;
  puVar3[1] = 37000;
  puVar3[2] = 37000;
  *puVar2 = 20000;
  puVar2[1] = 20000;
  puVar2[2] = 20000;
  FUN_100c1c8c(uVar1,*puRam10116930,0xc,uRam10116934,uRam10116938);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x403)),*(int *)(*(int*)((char*)ppuVar6 - 0x3d9)),0x10,(*(int*)((char*)ppuVar6 - 0x3d8)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x400)),*(int *)(*(int*)((char*)ppuVar6 - 0x3d7)),0xc,(*(int*)((char*)ppuVar6 - 0x3d6)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3fe)),*(int *)(*(int*)((char*)ppuVar6 - 0x3d5)),0xc,(*(int*)((char*)ppuVar6 - 0x3d4)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3fc)),*(int *)(*(int*)((char*)ppuVar6 - 0x3d3)),0xc,(*(int*)((char*)ppuVar6 - 0x3d2)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3f8)),*(int *)(*(int*)((char*)ppuVar6 - 0x3d1)),0xc,(*(int*)((char*)ppuVar6 - 0x3d0)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3ec)),*(int *)(*(int*)((char*)ppuVar6 - 0x3cf)),0xc,(*(int*)((char*)ppuVar6 - 0x3ce)),uVar1);
  FUN_100c1c8c(ppuVar6[-1000],*(int *)(*(int*)((char*)ppuVar6 - 0x3cd)),0xc,(*(int*)((char*)ppuVar6 - 0x3cc)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3fa)),*(int *)(*(int*)((char*)ppuVar6 - 0x3cb)),0xc,(*(int*)((char*)ppuVar6 - 0x3ca)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3e6)),*(int *)(*(int*)((char*)ppuVar6 - 0x3c9)),0xc,(*(int*)((char*)ppuVar6 - 0x3c8)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3f6)),*(int *)(*(int*)((char*)ppuVar6 - 0x3c7)),0xc,(*(int*)((char*)ppuVar6 - 0x3c6)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3f4)),*(int *)(*(int*)((char*)ppuVar6 - 0x3c5)),0xc,(*(int*)((char*)ppuVar6 - 0x3c4)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3f2)),*(int *)(*(int*)((char*)ppuVar6 - 0x3c3)),0xc,(*(int*)((char*)ppuVar6 - 0x3c2)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3f0)),*(int *)(*(int*)((char*)ppuVar6 - 0x3c1)),0xc,(*(int*)((char*)ppuVar6 - 0x3c0)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3ee)),*(int *)(*(int*)((char*)ppuVar6 - 0x3bf)),0xc,(*(int*)((char*)ppuVar6 - 0x3be)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3ea)),*(int *)(*(int*)((char*)ppuVar6 - 0x3bd)),0xc,(*(int*)((char*)ppuVar6 - 0x3bc)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar6 - 0x3e2)),*(int *)(*(int*)((char*)ppuVar6 - 0x3bb)),0x20,(*(int*)((char*)ppuVar6 - 0x3ba)),(*(int*)((char*)ppuVar6 - 0x3b9)));
  return;
}

/* Address: 0x100b4c1c Size: 76 bytes */
void FUN_100b4c1c(long long param_1,long long param_2,long long param_3)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x268),param_1,param_2,
               param_3);
  return;
}

/* Address: 0x100b4eac Size: 144 bytes */
int * FUN_100b4eac(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1c),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3b2));
    param_1[3] = 1;
    *(short *)(param_1 + 4) = 0;
    param_1[5] = 0xffffffff;
    *(char *)(param_1 + 6) = 0;
    param_1[2] = 0;
  }
  return param_1;
}

/* Address: 0x100b4f3c Size: 40 bytes */
void FUN_100b4f3c(void)

{
  FUN_100b4eac(0);
  return;
}

/* Address: 0x100b4f64 Size: 76 bytes */
void FUN_100b4f64(int param_1,int *param_2,char param_3)

{
  int uVar1;
  
  FUN_100f5274(param_1);
  uVar1 = param_2[1];
  *(int *)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 8) = uVar1;
  *(char *)(param_1 + 0x18) = param_3;
  return;
}

/* Address: 0x100b4fb0 Size: 76 bytes */
void FUN_100b4fb0(int param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_10002a78(param_1 + 4);
  }
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100b4ffc Size: 364 bytes */
int * FUN_100b4ffc(int *param_1)

{
  int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int local_164;
  int local_140;
  int iStack_13c;
  char auStack_138 [8];
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  local_140 = param_1[1];
  iStack_13c = param_1[2];
  FUN_100018f0(0x6e756c6c,0,0,auStack_138);
  FUN_100db2f4();
  FUN_10000ca8(&local_140,auStack_138,param_1[3],*(short *)(param_1 + 4),param_1[5],
               **(int **)(local_164 + -0xed4),**(int **)(local_164 + -0xec4));
  FUN_100db2f4();
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  piVar4 = (int *)0x0;
  if ((uVar2 & 0xf) == 3) {
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = *puVar1;
    *puVar1 = auStack_130;
    iVar3 = FUN_10000090(auStack_130);
    if (iVar3 == 0) {
      piVar4 = (int *)FUN_100b4eac(0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xa8),auStack_138,1);
      *puVar1 = local_28;
    }
    else {
      FUN_10002a78(auStack_138);
      FUN_100db158(local_30,local_2c);
    }
  }
  else {
    FUN_10002a78(auStack_138);
    piVar4 = (int *)0x0;
  }
  return piVar4;
}

/* Address: 0x100b5168 Size: 84 bytes */
void FUN_100b5168(int param_1,long long param_2)

{
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  FUN_10000168(&local_8,0x61646472,0x2a2a2a2a,param_2);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b51c4 Size: 112 bytes */
int FUN_100b51c4(int param_1)

{
  int local_18;
  int local_14;
  int uStack_10;
  char auStack_c [4];
  char auStack_8 [8];
  
  local_14 = *(int *)(param_1 + 4);
  uStack_10 = *(int *)(param_1 + 8);
  FUN_10000cd8(&local_14,0x72746964,0x6c6f6e67,auStack_c,&local_18,4,auStack_8);
  FUN_100db2f4();
  return local_18;
}

/* Address: 0x100b5244 Size: 112 bytes */
int FUN_100b5244(int param_1)

{
  int local_18;
  int local_14;
  int uStack_10;
  char auStack_c [4];
  char auStack_8 [8];
  
  local_14 = *(int *)(param_1 + 4);
  uStack_10 = *(int *)(param_1 + 8);
  FUN_10000cd8(&local_14,0x7472616e,0x6c6f6e67,auStack_c,&local_18,4,auStack_8);
  FUN_100db2f4();
  return local_18;
}

/* Address: 0x100b52b4 Size: 76 bytes */
void FUN_100b52b4(int param_1,long long param_2)

{
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  FUN_10000cf0(&local_8,0x61646472,param_2);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b530c Size: 92 bytes */
void FUN_100b530c(int param_1,int param_2)

{
  int uStack0000001c;
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  uStack0000001c = param_2;
  FUN_10000d08(&local_8,0x72746964,0x6c6f6e67,((char*)0 + 0x0000001c),4);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5378 Size: 92 bytes */
void FUN_100b5378(int param_1,int param_2)

{
  int uStack0000001c;
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  uStack0000001c = param_2;
  FUN_10000d08(&local_8,0x7472616e,0x6c6f6e67,((char*)0 + 0x0000001c),4);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b53d4 Size: 112 bytes */
short FUN_100b53d4(int param_1,long long param_2)

{
  int local_18;
  int uStack_14;
  short local_10 [2];
  char auStack_c [4];
  char auStack_8 [8];
  
  local_18 = *(int *)(param_1 + 4);
  uStack_14 = *(int *)(param_1 + 8);
  local_10[0] = 0;
  FUN_10000d20(&local_18,param_2,0x73686f72,auStack_c,local_10,2,auStack_8);
  FUN_100db2f4();
  return local_10[0];
}

/* Address: 0x100b5444 Size: 112 bytes */
int FUN_100b5444(int param_1,long long param_2)

{
  int local_18;
  int uStack_14;
  int local_10;
  char auStack_c [4];
  char auStack_8 [8];
  
  local_18 = *(int *)(param_1 + 4);
  uStack_14 = *(int *)(param_1 + 8);
  local_10 = 0;
  FUN_10000d20(&local_18,param_2,0x6c6f6e67,auStack_c,&local_10,4,auStack_8);
  FUN_100db2f4();
  return local_10;
}

/* Address: 0x100b54b4 Size: 188 bytes */
void FUN_100b54b4(int param_1,long long param_2,long long param_3)

{
  int local_128;
  int uStack_124;
  unsigned int local_120;
  char local_11c;
  char auStack_11b [255];
  char auStack_1c [28];
  
  local_128 = *(int *)(param_1 + 4);
  uStack_124 = *(int *)(param_1 + 8);
  FUN_100b1d90(param_3,(unsigned long long)uRam101169c0 + 0x40);
  FUN_10000d20(&local_128,param_2,0x54455854,auStack_1c,auStack_11b,0xff,&local_120);
  FUN_100db2f4();
  if (0xff < (int)local_120) {
    local_120 = 0xff;
  }
  local_11c = (char)local_120;
  FUN_100012d8(&local_11c,param_3,(local_120 & 0xff) + 1);
  return;
}

/* Address: 0x100b5570 Size: 112 bytes */
int FUN_100b5570(int param_1,long long param_2)

{
  int local_18;
  int uStack_14;
  int local_10;
  char auStack_c [4];
  char auStack_8 [8];
  
  local_18 = *(int *)(param_1 + 4);
  uStack_14 = *(int *)(param_1 + 8);
  local_10 = 0;
  FUN_10000d20(&local_18,param_2,0x73656374,auStack_c,&local_10,4,auStack_8);
  FUN_100db2f4();
  return local_10;
}

/* Address: 0x100b55e0 Size: 464 bytes */
void FUN_100b55e0(int param_1,long long param_2,long long param_3,int *param_4)

{
  int *puVar1;
  int iVar3;
  long long lVar2;
  short sVar4;
  int local_170;
  int uStack_16c;
  char auStack_168 [4];
  char auStack_164 [4];
  char auStack_160 [4];
  int local_15c;
  char auStack_158 [8];
  int local_150;
  char auStack_14c [256];
  short local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  puVar1 = puRam10117370;
  local_170 = *(int *)(param_1 + 4);
  uStack_16c = *(int *)(param_1 + 8);
  FUN_10003510(&local_170,param_2,0x6c697374,auStack_158);
  FUN_100db2f4();
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = *puVar1;
  *puVar1 = auStack_14c;
  iVar3 = FUN_10000090(auStack_14c);
  if (iVar3 == 0) {
    FUN_10000d50(auStack_158,&local_15c);
    FUN_100db2f4();
    local_150 = FUN_100f1640(*(short *)(param_4 + 3));
    sVar4 = 1;
    if (0 < local_15c) {
      do {
        FUN_10000d68(auStack_158,sVar4,param_3,auStack_160,auStack_164,local_150,
                     *(short *)(param_4 + 3),auStack_168);
        FUN_100db2f4();
        iVar3 = *param_4;
        lVar2 = FUN_10117884((int)param_4 + (int)*(short *)(iVar3 + 0xa8),
                             *(int *)(iVar3 + 0xac));
        FUN_10117884((int)param_4 + (int)*(short *)(iVar3 + 0xb8),lVar2 + 1,local_150,1);
        sVar4 = sVar4 + 1;
      } while (sVar4 <= local_15c);
    }
    *puVar1 = local_44;
  }
  else {
    FUN_10002a78(auStack_158);
    local_150 = FUN_100ef580(0);
    FUN_100db158(local_4c,local_48);
  }
  FUN_10002a78(auStack_158);
  FUN_100ef580(local_150);
  return;
}

/* Address: 0x100b57b0 Size: 420 bytes */
void FUN_100b57b0(int param_1,long long param_2,long long param_3,int *param_4)

{
  int *puVar1;
  int iVar3;
  long long lVar2;
  short sVar4;
  int local_168;
  int uStack_164;
  char auStack_160 [4];
  int local_15c;
  char auStack_158 [8];
  char auStack_150 [4];
  int local_14c;
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  puVar1 = puRam10117370;
  local_168 = *(int *)(param_1 + 4);
  uStack_164 = *(int *)(param_1 + 8);
  FUN_10003510(&local_168,param_2,0x6c697374,auStack_158);
  FUN_100db2f4();
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puVar1;
  *puVar1 = auStack_148;
  iVar3 = FUN_10000090(auStack_148);
  if (iVar3 == 0) {
    local_14c = 0;
    FUN_10000d50(auStack_158,&local_15c);
    FUN_100db2f4();
    sVar4 = 1;
    if (0 < local_15c) {
      do {
        FUN_10000d80(auStack_158,sVar4,param_3,auStack_160,auStack_150);
        FUN_100db2f4();
        iVar3 = *param_4;
        lVar2 = FUN_10117884((int)param_4 + (int)*(short *)(iVar3 + 0xa8),
                             *(int *)(iVar3 + 0xac));
        FUN_10117884((int)param_4 + (int)*(short *)(iVar3 + 0xb8),lVar2 + 1,&local_14c,1);
        local_14c = 0;
        sVar4 = sVar4 + 1;
      } while (sVar4 <= local_15c);
    }
    *puVar1 = local_40;
  }
  else {
    FUN_10002a78(auStack_158);
    FUN_10002a78(auStack_150);
    FUN_100db158(local_48,local_44);
  }
  FUN_10002a78(auStack_158);
  return;
}

/* Address: 0x100b5954 Size: 64 bytes */
void FUN_100b5954(int param_1)

{
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  FUN_10003510(&local_8);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5994 Size: 76 bytes */
void FUN_100b5994(int param_1)

{
  int local_10;
  int uStack_c;
  
  local_10 = *(int *)(param_1 + 4);
  uStack_c = *(int *)(param_1 + 8);
  FUN_10000d20(&local_10);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b59e0 Size: 84 bytes */
void FUN_100b59e0(int param_1,long long param_2,short param_3)

{
  short uStack00000022;
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  uStack00000022 = param_3;
  FUN_10003528(&local_8,param_2,0x73686f72,((char*)0 + 0x00000022),2);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5a34 Size: 84 bytes */
void FUN_100b5a34(int param_1,long long param_2,int param_3)

{
  int uStack00000020;
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  uStack00000020 = param_3;
  FUN_10003528(&local_8,param_2,0x6c6f6e67,((char*)0 + 0x00000020),4);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5a88 Size: 172 bytes */
void FUN_100b5a88(int param_1,long long param_2,unsigned char *param_3)

{
  int uVar1;
  char *puVar2;
  int *puVar3;
  char *puVar4;
  int local_120;
  int uStack_11c;
  char local_118;
  char auStack_117 [279];
  
  puVar3 = (int *)(((char*)0) + -0x120);
  puVar4 = ((char*)0) + -0x118;
  uVar1 = *(int *)(param_1 + 8);
  *puVar3 = *(int *)(param_1 + 4);
  *(int *)(((char*)0) + -0x11c) = uVar1;
  puVar2 = puVar4;
  if ((((char*)0) != (char *)0x118) ||
     (puVar2 = (char *)FUN_100f56e4(0x100), puVar2 != (char *)0x0)) {
    FUN_100012d8(param_3,puVar2,(unsigned long long)*param_3 + 1);
  }
  FUN_10003528(puVar3,param_2,0x54455854,((char*)0) + -0x117,*puVar4);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5b34 Size: 84 bytes */
void FUN_100b5b34(int param_1,long long param_2,int param_3)

{
  int uStack00000020;
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  uStack00000020 = param_3;
  FUN_10003528(&local_8,param_2,0x73656374,((char*)0 + 0x00000020),4);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5b88 Size: 476 bytes */
void FUN_100b5b88(int param_1,long long param_2,long long param_3,int *param_4)

{
  int *puVar1;
  int iVar3;
  int iVar4;
  long long uVar2;
  int local_288;
  int uStack_284;
  char auStack_280 [4];
  int local_27c;
  char auStack_278 [256];
  short local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_160 [88];
  
  puVar1 = puRam10117370;
  local_27c = 0;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_170 = *puRam10117370;
  *puRam10117370 = auStack_278;
  iVar3 = FUN_10000090(auStack_278);
  if (iVar3 == 0) {
    local_288 = *(int *)(param_1 + 4);
    uStack_284 = *(int *)(param_1 + 8);
    FUN_10000db0(0,0,0,auStack_280);
    FUN_100db2f4();
    FUN_100ebaf8(local_160,param_4,1);
    FUN_10117884((int)*(short *)(local_160[0] + 0x10) + (int)local_160);
    iVar3 = local_160[1];
    iVar4 = FUN_100ebf44(local_160);
    while (iVar4 != 0) {
      uVar2 = FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0xe0),iVar3);
      FUN_10003918(auStack_280,iVar3,param_3,uVar2,*(short *)(param_4 + 3));
      FUN_100db2f4();
      FUN_10117884((int)*(short *)(local_160[0] + 0x18) + (int)local_160);
      iVar3 = local_160[1];
      iVar4 = FUN_100ebf44(local_160);
    }
    FUN_100ebc68(local_160,2);
    FUN_100036a8(&local_288,param_2,auStack_280);
    FUN_100db2f4();
    *puVar1 = local_170;
  }
  else {
    FUN_10002a78(auStack_280);
    FUN_100db2f4();
    FUN_100db158(local_178,local_174);
  }
  FUN_10002a78(auStack_280);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5d64 Size: 492 bytes */
void FUN_100b5d64(int param_1,long long param_2,int param_3,int *param_4)

{
  int *puVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_290;
  int uStack_28c;
  char auStack_288 [4];
  int local_284;
  int local_280;
  int local_27c;
  char auStack_278 [256];
  short local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_160 [88];
  
  puVar1 = puRam10117370;
  local_284 = 0;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_170 = *puRam10117370;
  *puRam10117370 = auStack_278;
  iVar2 = FUN_10000090(auStack_278);
  if (iVar2 == 0) {
    local_290 = *(int *)(param_1 + 4);
    uStack_28c = *(int *)(param_1 + 8);
    FUN_10000db0(0,0,0,auStack_288);
    FUN_100db2f4();
    FUN_100ebaf8(local_160,param_4,1);
    FUN_10117884((int)*(short *)(local_160[0] + 0x10) + (int)local_160);
    iVar2 = local_160[1];
    iVar3 = FUN_100ebf44(local_160);
    while (iVar3 != 0) {
      local_27c = 0;
      local_280 = param_3;
      puVar4 = (int *)FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0xe0),iVar2);
      local_27c = *puVar4;
      FUN_10002f10(auStack_288,iVar2,&local_280);
      FUN_100db2f4();
      FUN_10117884((int)*(short *)(local_160[0] + 0x18) + (int)local_160);
      iVar2 = local_160[1];
      iVar3 = FUN_100ebf44(local_160);
    }
    FUN_100ebc68(local_160,2);
    FUN_100036a8(&local_290,param_2,auStack_288);
    FUN_100db2f4();
    *puVar1 = local_170;
  }
  else {
    FUN_10002a78(auStack_288);
    FUN_100db2f4();
    FUN_100db158(local_178,local_174);
  }
  FUN_10002a78(auStack_288);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5f50 Size: 64 bytes */
void FUN_100b5f50(int param_1)

{
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  FUN_100036a8(&local_8);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5f90 Size: 64 bytes */
void FUN_100b5f90(int param_1)

{
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  FUN_10003528(&local_8);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b5fd0 Size: 64 bytes */
void FUN_100b5fd0(int param_1)

{
  int local_8;
  int uStack_4;
  
  local_8 = *(int *)(param_1 + 4);
  uStack_4 = *(int *)(param_1 + 8);
  FUN_10000e10(&local_8);
  FUN_100db2f4();
  return;
}

/* Address: 0x100b6010 Size: 60 bytes */
void FUN_100b6010(void)

{
  FUN_100c1c8c(uRam101169d4,*puRam101169e0,0x1c,uRam101169e4,uRam10116938);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100b604c(long long param_1,short *param_2,long long param_3) { return 0; }















































































































































































































































































/* Address: 0x100b633c Size: 20 bytes */
int FUN_100b633c(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}

/* Address: 0x100b6350 Size: 136 bytes */
int * FUN_100b6350(int *param_1,int param_2)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x5c);
    }
    FUN_100ebf7c(param_1,uVar2,1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3ac));
  }
  return param_1;
}

/* Address: 0x100b63d8 Size: 108 bytes */
void FUN_100b63d8(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam101169f0;
    FUN_100ebff4(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: 0x100b6444 Size: 36 bytes */
void FUN_100b6444(void)

{
  FUN_100ec060();
  return;
}

/* Address: 0x100b6468 Size: 36 bytes */
void FUN_100b6468(void)

{
  FUN_100ec0e8();
  return;
}

/* Address: 0x100b648c Size: 376 bytes */
void FUN_100b648c(void)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  int local_2c;
  
  piVar1 = piRam101169c4;
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x480),1,0xffffffffffffffff
              );
  *(char *)(**(int **)(local_2c + -0xeac) + 0x44) = 0;
  piVar2 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x340));
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x120));
  if (*(char *)(*piVar1 + 0x56) != '\0') {
    FUN_100f27d0(0x65,1);
    FUN_100f27d0(0x67,1);
    FUN_100f27d0(0x68,1);
    FUN_100f27d0(0x69,1);
    FUN_100f27d0(0x6a,1);
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x480),1,0);
  }
  piVar2 = (int *)FUN_100f2214(1);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x318));
    if ((*(unsigned int *)(*piVar2 + 10) & 1) == uVar3) {
      *(unsigned int *)(*piVar2 + 10) = *(unsigned int *)(*piVar2 + 10) ^ 1;
      FUN_100f2454();
    }
  }
  return;
}

/* Address: 0x100b660c Size: 104 bytes */
int * FUN_100b660c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x24),
     param_1 != (int *)0x0)) {
    FUN_100e904c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3a9));
  }
  return param_1;
}

/* Address: 0x100b6674 Size: 40 bytes */
void FUN_100b6674(void)

{
  FUN_100b660c(0);
  return;
}

/* Address: 0x100b66e4 Size: 36 bytes */
void FUN_100b66e4(void)

{
  FUN_100e9124();
  return;
}

/* Address: 0x100b6708 Size: 196 bytes */
void FUN_100b6708(long long param_1,long long param_2)

{
  int *puVar1;
  char uVar3;
  int iVar2;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  uVar3 = FUN_100f5754(0);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar1;
  *puVar1 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    FUN_100e9508(param_1,param_2);
    *puVar1 = local_24;
  }
  else {
    FUN_100f5754(uVar3);
    FUN_100db158(local_2c,local_28);
  }
  FUN_100f5754(uVar3);
  return;
}

/* Address: 0x100b67d4 Size: 104 bytes */
int * FUN_100b67d4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x30),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3a7));
  }
  return param_1;
}

/* Address: 0x100b683c Size: 40 bytes */
void FUN_100b683c(void)

{
  FUN_100b67d4(0);
  return;
}

/* Address: 0x100b6864 Size: 184 bytes */
void FUN_100b6864(void)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = puRam10117370;
  piVar1 = piRam101169c4;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puRam10117370;
  *puRam10117370 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    *(char *)(*piVar1 + 0x3c) = 1;
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x3a8));
    *puVar2 = local_20;
  }
  else {
    *(char *)(*piVar1 + 0x3c) = 0;
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100b691c Size: 56 bytes */
void FUN_100b691c(long long param_1,long long param_2)

{
  FUN_100c3df8(param_1,param_2,*puRam101169c4,0,0,0);
  return;
}

/* Address: 0x100b6954 Size: 92 bytes */
char FUN_100b6954(int param_1)

{
  int iVar1;
  char uVar2;
  
  iVar1 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x318));
  if (iVar1 == 0) {
    uVar2 = *(char *)(param_1 + 0x2d);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* Address: 0x100b69b8 Size: 104 bytes */
int * FUN_100b69b8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x30),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3a5));
  }
  return param_1;
}

/* Address: 0x100b6a20 Size: 40 bytes */
void FUN_100b6a20(void)

{
  FUN_100b69b8(0);
  return;
}

/* Address: 0x100b6a48 Size: 68 bytes */
void FUN_100b6a48(int param_1)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x380),
               *(int *)(param_1 + 4));
  return;
}

/* Address: 0x100b6a8c Size: 56 bytes */
void FUN_100b6a8c(long long param_1,long long param_2)

{
  FUN_100c3df8(param_1,param_2,*puRam101169c4,0,0,0);
  return;
}

/* Address: 0x100b6acc Size: 120 bytes */
int * FUN_100b6acc(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x40),
     param_1 != (int *)0x0)) {
    FUN_100c55a8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3a3));
    *(char *)((int)param_1 + 0x1e) = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}

/* Address: 0x100b6b44 Size: 40 bytes */
void FUN_100b6b44(void)

{
  FUN_100b6acc(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b6b6c(int param_1,long long param_2,int param_3) { }













/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b6bbc(void) { }















































































































































































































/* Address: 0x100b6f24 Size: 68 bytes */
void FUN_100b6f24(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100e91b4(*(int *)(param_1 + 0x3c));
  *(int *)(param_1 + 0x3c) = uVar1;
  FUN_100c550c(param_1);
  return;
}

/* Address: 0x100b6f70 Size: 104 bytes */
int * FUN_100b6f70(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x40),
     param_1 != (int *)0x0)) {
    FUN_100b6acc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x3a1));
  }
  return param_1;
}

/* Address: 0x100b6fd8 Size: 40 bytes */
void FUN_100b6fd8(void)

{
  FUN_100b6f70(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b7000(void) { }
















/* Address: 0x100b7024 Size: 204 bytes */
void FUN_100b7024(int *param_1)

{
  int *puVar1;
  int iVar2;
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
  local_1c = 0;
  local_18 = 0;
  local_20 = *puRam10117370;
  *puRam10117370 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    FUN_10117884(**(int **)(local_14c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x388),param_1[1],
                 param_1[0xf]);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),local_28,local_24);
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100b70f8 Size: 112 bytes */
int * FUN_100b70f8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x40),
     param_1 != (int *)0x0)) {
    FUN_100b6acc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x39f));
    *(char *)(param_1 + 0xe) = 1;
  }
  return param_1;
}

/* Address: 0x100b7168 Size: 40 bytes */
void FUN_100b7168(void)

{
  FUN_100b70f8(0);
  return;
}

/* Address: 0x100b7190 Size: 200 bytes */
void FUN_100b7190(int *param_1)

{
  int *puVar1;
  int iVar2;
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
  local_1c = 0;
  local_18 = 0;
  local_20 = *puRam10117370;
  *puRam10117370 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    FUN_10117884(**(int **)(local_14c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x390),param_1[0xf]);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),local_28,local_24);
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100b7260 Size: 104 bytes */
int * FUN_100b7260(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x30),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x39d));
  }
  return param_1;
}

/* Address: 0x100b72c8 Size: 40 bytes */
void FUN_100b72c8(void)

{
  FUN_100b7260(0);
  return;
}

/* Address: 0x100b72f0 Size: 56 bytes */
void FUN_100b72f0(long long param_1,long long param_2)

{
  FUN_100c3df8(param_1,param_2,*puRam101169c4,0,0,0);
  return;
}

/* Address: 0x100b7328 Size: 60 bytes */
void FUN_100b7328(void)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x4f0));
  return;
}

/* Address: 0x100b736c Size: 104 bytes */
int * FUN_100b736c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x30),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x39b));
  }
  return param_1;
}

/* Address: 0x100b73d4 Size: 40 bytes */
void FUN_100b73d4(void)

{
  FUN_100b736c(0);
  return;
}

/* Address: 0x100b73fc Size: 96 bytes */
void FUN_100b73fc(int param_1,long long param_2)

{
  FUN_100c3df8(param_1,param_2,*puRam101169c4,0,0,0);
  *(char *)(param_1 + 0x2c) = 0;
  *(char *)(param_1 + 0x2e) = 1;
  *(char *)(param_1 + 0x11) = 0x5f;
  return;
}

/* Address: 0x100b7464 Size: 64 bytes */
void FUN_100b7464(void)

{
  int *piVar1;
  
  piVar1 = (int *)*piRam101169c4;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),*(char *)((int)piVar1 + 0x31));
  return;
}

/* Address: 0x100b74ac Size: 360 bytes */
int * FUN_100b74ac(int *param_1)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x84),
     param_1 != (int *)0x0)) {
    FUN_100c604c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x399));
    FUN_100b02d0((int)param_1 + 0x42);
    *(int **)(*(int*)((char*)ppuVar1 - 0x3b7)) = param_1;
    param_1[9] = 0x54455854;
    param_1[8] = 0x3f3f3f3f;
    *(char *)((int)param_1 + 0x31) = 1;
    *(char *)((int)param_1 + 0x3b) = 0;
    *(char *)(param_1 + 0xf) = 0;
    *(int *)((int)param_1 + 0x32) = 0;
    *(int *)((int)param_1 + 0x36) = 0;
    *(short *)((int)param_1 + 0x3e) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x1f] = 0;
    param_1[0x17] = 0;
    *(short *)(param_1 + 0x1c) = 1;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x20] = 0;
    *(char *)((int)param_1 + 0x3a) = 2;
    *(char *)(param_1 + 0x1a) = 0;
    *(short *)(param_1 + 0x10) = 0;
    *(int *)((int)param_1 + 0x42) = *(int *)(*(int*)((char*)ppuVar1 - 0x398));
    uVar2 = FUN_10001a88();
    param_1[0x12] = uVar2;
    *(char *)(param_1 + 0xc) = 1;
    param_1[0x14] = 0x1c20;
    *(short *)(param_1 + 0x15) = 0xffff;
    *(short *)((int)param_1 + 0x72) = 0x80;
    *(short *)((int)param_1 + 0x76) = 0x81;
    *(short *)(param_1 + 0x1d) = 0x82;
    uVar2 = FUN_10001a88();
    param_1[0x13] = uVar2;
    param_1[0x1e] = 0;
    *(char *)((int)param_1 + 0x56) = 0;
    param_1[0x1b] = param_1;
    param_1[0x16] = 0;
    *(char *)((int)param_1 + 0x57) = 1;
  }
  return param_1;
}

/* Address: 0x100b7614 Size: 40 bytes */
void FUN_100b7614(void)

{
  FUN_100b74ac(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b763c(int *param_1,int param_2,int param_3) { }































































































































/* Address: 0x100b7868 Size: 76 bytes */
long long FUN_100b7868(int param_1)

{
  long long uVar1;
  
  uVar1 = FUN_100f3444(0);
  FUN_100f34d4(uVar1,*(short *)(param_1 + 0x76));
  return uVar1;
}

/* Address: 0x100b78b4 Size: 288 bytes */
void FUN_100b78b4(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_20 [8];
  
  FUN_10117884(*piRam101169f4 + (int)*(short *)(*(int *)*piRam101169f4 + 0x1c8),param_2);
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x770) + (int)piVar3);
    }
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = local_20[1];
    iVar2 = FUN_100eea60(local_20);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),0);
  return;
}

/* Address: 0x100b79d4 Size: 80 bytes */
void FUN_100b79d4(long long param_1,char param_2)

{
  if (*piRam10116a48 != 0) {
    FUN_10117884(*piRam10116a48 + (int)*(short *)(*(int *)*piRam10116a48 + 0xb0),param_2);
  }
  return;
}

/* Address: 0x100b7a24 Size: 72 bytes */
void FUN_100b7a24(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x5c) +
                 (int)*(short *)(**(int **)(param_1 + 0x5c) + 0x150));
  }
  return;
}

/* Address: 0x100b7a6c Size: 132 bytes */
void FUN_100b7a6c(int param_1,long long param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x60) +
                           (int)*(short *)(**(int **)(param_1 + 0x60) + 0x140),param_2), iVar1 == 0)
     ) {
    FUN_10117884((int)*(int **)(param_1 + 0x60) +
                 (int)*(short *)(**(int **)(param_1 + 0x60) + 0x150),param_2);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
unsigned long long FUN_100b7af0(int *param_1,unsigned long long param_2,short *param_3,long long param_4) { return 0; }









































































































































/* Address: 0x100b80e4 Size: 120 bytes */
long long FUN_100b80e4(int *param_1,long long param_2,short *param_3)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4f8));
  if ((int)*param_3 - 6U < 0x12) {
    return uVar1;
  }
  return 0;
}

/* Address: 0x100b8334 Size: 44 bytes */
void FUN_100b8334(long long param_1,short param_2)

{
  FUN_10001b00(param_2);
  return;
}

/* Address: 0x100b8360 Size: 512 bytes */
int FUN_100b8360(int *param_1,long long param_2,int *param_3)

{
  short sVar1;
  long long lVar2;
  int iVar3;
  short sVar4;
  int bVar5;
  char auStack_f8 [8];
  int local_f0;
  char auStack_ec [18];
  char *local_da;
  int *local_7c;
  char local_78 [64];
  char auStack_38 [4];
  char auStack_34 [4];
  char auStack_30 [48];
  
  FUN_100b02d0(auStack_f8);
  local_78[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x398),param_2,&local_f0,&local_7c,
               auStack_38,auStack_f8,auStack_34,auStack_30);
  FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x198),local_78);
  lVar2 = FUN_10001c20(local_7c);
  sVar1 = (short)((unsigned long long)(lVar2 << 0x20) >> 0x22);
  bVar5 = false;
  if (sVar1 == 0) {
    if (local_f0 == 0) {
      bVar5 = true;
    }
    else {
      iVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x140),auStack_ec);
      if (iVar3 == 0) {
        local_da = local_78;
        lVar2 = FUN_10117884(auStack_ec,0);
        bVar5 = lVar2 == 0;
      }
      else {
        bVar5 = false;
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < sVar1) {
      do {
        if (param_3[0x14] == *(int *)(*local_7c + iVar3 * 4)) {
          if (local_f0 == 0) {
            bVar5 = true;
          }
          else {
            iVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x140),auStack_ec);
            if (iVar3 == 0) {
              local_da = local_78;
              lVar2 = FUN_10117884(auStack_ec,0);
              bVar5 = lVar2 == 0;
            }
            else {
              bVar5 = false;
            }
          }
          break;
        }
        sVar4 = (short)iVar3 + 1;
        iVar3 = (int)sVar4;
      } while (sVar4 < sVar1);
    }
  }
  FUN_100ef510(local_7c);
  return bVar5;
}

/* Address: 0x100b8560 Size: 340 bytes */
long long FUN_100b8560(long long param_1,int *param_2)

{
  int iVar1;
  int uVar2;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  int *piVar6;
  char auStack_f8 [2];
  int local_f6;
  int uStack_f2;
  int uStack_ee;
  int uStack_ea;
  int uStack_e6;
  int uStack_e2;
  int local_de;
  int uStack_da;
  int uStack_d6;
  int uStack_d2;
  int uStack_ce;
  int uStack_ca;
  int local_c6;
  int uStack_c2;
  int uStack_be;
  int uStack_ba;
  int uStack_b6;
  int uStack_b2;
  int local_a8;
  int uStack_a4;
  int uStack_a0;
  int uStack_9c;
  int uStack_98;
  int uStack_94;
  int uStack_90;
  int local_8c;
  int uStack_88;
  int uStack_84;
  int uStack_80;
  int uStack_7c;
  int uStack_78;
  int uStack_74;
  int local_70;
  int uStack_6c;
  int uStack_68;
  int uStack_64;
  int uStack_60;
  int uStack_5c;
  int uStack_58;
  int local_54;
  int uStack_50;
  int uStack_4c;
  int uStack_48;
  int uStack_44;
  char local_40;
  
  uVar2 = uRam10116a54;
  local_40 = 0;
  uVar3 = FUN_100b1c84(uRam10116a54);
  uVar4 = FUN_100b1c84(uVar2);
  uVar5 = FUN_100b1c84(uVar2);
  uVar3 = FUN_10000ed0(uVar5,uVar4,0,&local_a8,auStack_f8,0,uVar3);
  uVar4 = 0;
  if ((int)uVar3 == 0) {
    piVar6 = (int *)FUN_100f15e0(0xfc);
    iVar1 = *piVar6;
    *(int *)(iVar1 + 0x4c) = local_a8;
    *(int *)(iVar1 + 0x50) = uStack_a4;
    *(int *)(iVar1 + 0x54) = uStack_a0;
    *(int *)(iVar1 + 0x58) = uStack_9c;
    *(int *)(iVar1 + 0x5c) = uStack_98;
    *(int *)(iVar1 + 0x60) = uStack_94;
    *(int *)(iVar1 + 100) = uStack_90;
    *(int *)(iVar1 + 0x68) = local_8c;
    *(int *)(iVar1 + 0x6c) = uStack_88;
    *(int *)(iVar1 + 0x70) = uStack_84;
    *(int *)(iVar1 + 0x74) = uStack_80;
    *(int *)(iVar1 + 0x78) = uStack_7c;
    *(int *)(iVar1 + 0x7c) = uStack_78;
    *(int *)(iVar1 + 0x80) = uStack_74;
    *(int *)(iVar1 + 0x84) = local_70;
    *(int *)(iVar1 + 0x88) = uStack_6c;
    *(int *)(iVar1 + 0x8c) = uStack_68;
    *(int *)(iVar1 + 0x90) = uStack_64;
    *(int *)(iVar1 + 0x94) = uStack_60;
    *(int *)(iVar1 + 0x98) = uStack_5c;
    *(int *)(iVar1 + 0x9c) = uStack_58;
    *(int *)(iVar1 + 0xa0) = local_54;
    *(int *)(iVar1 + 0xa4) = uStack_50;
    *(int *)(iVar1 + 0xa8) = uStack_4c;
    *(int *)(iVar1 + 0xac) = uStack_48;
    *(int *)(iVar1 + 0xb0) = uStack_44;
    iVar1 = *piVar6;
    *(int *)(iVar1 + 4) = local_f6;
    *(int *)(iVar1 + 8) = uStack_f2;
    *(int *)(iVar1 + 0xc) = uStack_ee;
    *(int *)(iVar1 + 0x10) = uStack_ea;
    *(int *)(iVar1 + 0x14) = uStack_e6;
    *(int *)(iVar1 + 0x18) = uStack_e2;
    *(int *)(iVar1 + 0x1c) = local_de;
    *(int *)(iVar1 + 0x20) = uStack_da;
    *(int *)(iVar1 + 0x24) = uStack_d6;
    *(int *)(iVar1 + 0x28) = uStack_d2;
    *(int *)(iVar1 + 0x2c) = uStack_ce;
    *(int *)(iVar1 + 0x30) = uStack_ca;
    *(int *)(iVar1 + 0x34) = local_c6;
    *(int *)(iVar1 + 0x38) = uStack_c2;
    *(int *)(iVar1 + 0x3c) = uStack_be;
    *(int *)(iVar1 + 0x40) = uStack_ba;
    *(int *)(iVar1 + 0x44) = uStack_b6;
    *(int *)(iVar1 + 0x48) = uStack_b2;
    *param_2 = 0x74617267;
    param_2[1] = piVar6;
    uVar4 = 1;
  }
  else if ((int)uVar3 != -0x80) {
    FUN_100db2f4(uVar3);
  }
  return uVar4;
}

/* Address: 0x100b86b4 Size: 1040 bytes */
int * FUN_100b86b4(int *param_1)

{
  int *puVar1;
  long long lVar2;
  int iVar7;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  long long uVar6;
  int *puVar8;
  short sVar9;
  int in_stack_0000001c;
  int *in_stack_00000020;
  int local_334;
  int local_304;
  int local_300;
  short local_2fc [2];
  int local_2f8;
  unsigned char local_2f4 [88];
  char auStack_29c [8];
  int ***local_294;
  int *local_290;
  int *local_28c;
  int *local_288;
  char auStack_284 [256];
  short local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  char auStack_16c [256];
  short local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_50;
  char auStack_4c [76];
  
  puVar1 = puRam10117370;
  FUN_100b02d0(auStack_29c);
  local_290 = (int *)0x0;
  local_288 = (int *)0x0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x398),in_stack_0000001c,&local_2f8,
               &local_28c,local_2fc,auStack_29c,&local_300,&local_304);
  lVar2 = FUN_10001c20(local_28c);
  sVar9 = (short)((unsigned long long)(lVar2 << 0x20) >> 0x22);
  if (sVar9 == 0) {
    sVar9 = -1;
    local_294 = &local_294;
  }
  else {
    FUN_100ef9b8(local_28c);
    local_294 = (int ***)*local_28c;
  }
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_64 = *puVar1;
  *puVar1 = auStack_16c;
  iVar7 = FUN_10000090(auStack_16c);
  if (iVar7 == 0) {
    local_288 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),
                                    in_stack_0000001c);
    iVar7 = local_334;
    FUN_100ef088(0xfffffffffffffffe,**(int **)(local_334 + -0xe48),
                 **(int **)(local_334 + -0xed4));
    FUN_100db2f4();
    if (local_290 == (int *)0x0) {
      local_290 = ((char*)0 + 0x0000001c);
    }
    FUN_10117884(**(int **)(iVar7 + -0xeac) +
                 (int)*(short *)(*(int *)**(int **)(iVar7 + -0xeac) + 0x1c8),1);
    uVar3 = FUN_10000a98(local_2f8,0x3d0,1);
    uVar4 = FUN_10000a98(local_300,4000,1);
    uVar5 = FUN_10000a98(local_304,0x3fd0,1);
    uVar6 = FUN_10000a98(local_50,0x36c0,1);
    puVar8 = (int *)FUN_100b0368(auStack_4c,auStack_29c);
    FUN_10002a30(uVar3,sVar9,local_294,local_2f4,local_2fc[0],*puVar8,uVar4,uVar5);
    FUN_100ef5f0(uVar3);
    FUN_100ef5f0(uVar4);
    FUN_100ef5f0(uVar5);
    FUN_100ef5f0(uVar6);
    FUN_10117884(**(int **)(local_334 + -0xeac) +
                 (int)*(short *)(*(int *)**(int **)(local_334 + -0xeac) + 0x1f0),1);
    param_1 = (int *)(unsigned int)local_2f4[0];
    if (local_2f4[0] != 0) {
      FUN_10117884((int)local_288 + (int)*(short *)(*local_288 + 0xb0),local_2f4);
    }
    *puVar1 = local_64;
  }
  else {
    local_28c = (int *)FUN_100ef510(local_28c);
    local_288 = (int *)FUN_100f57c8(local_288);
    FUN_100db158(local_6c,local_68);
  }
  local_28c = (int *)FUN_100ef510(local_28c);
  if (param_1 == (int *)0x0) {
    FUN_100f57c8(local_288);
  }
  else {
    local_184 = 0;
    local_180 = 0;
    local_178 = 0;
    local_174 = 0;
    local_17c = *puVar1;
    *puVar1 = auStack_284;
    iVar7 = FUN_10000090(auStack_284);
    if (iVar7 == 0) {
      iVar7 = FUN_100e9174();
      *in_stack_00000020 = iVar7;
      FUN_10117884(*in_stack_00000020 + (int)*(short *)(*(int *)*in_stack_00000020 + 0x1d0),
                   local_288);
      *puVar1 = local_17c;
    }
    else {
      if (*in_stack_00000020 != 0) {
        iVar7 = FUN_100f57c8(*in_stack_00000020);
        *in_stack_00000020 = iVar7;
      }
      local_288 = (int *)FUN_100f57c8(local_288);
      FUN_100db158(local_184,local_180);
    }
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b8ac4(int *param_1) { }











































































































































































































































/* Address: 0x100b8d14 Size: 132 bytes */
void FUN_100b8d14(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),param_2);
  if (piVar1 == (int *)0x0) {
    FUN_10003048(param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x740) + (int)piVar1);
  }
  return;
}

/* Address: 0x100b8dd8 Size: 296 bytes */
short FUN_100b8dd8(int *param_1,int param_2,short param_3)

{
  int uVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  
  if (param_3 == *(short *)(param_1 + 0x10)) {
    sVar4 = 1;
    if (0 < *(short *)((int)param_1 + 0x3e)) {
      iVar2 = FUN_10002628();
      if (*(int *)(param_2 + 0x1a) - param_1[0x12] < iVar2) {
        uVar1 = *(int *)(param_2 + 0x1e);
        piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
        iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe8),
                             *(int *)((int)param_1 + 0x42),uVar1);
        if (iVar2 != 0) {
          sVar4 = *(short *)((int)param_1 + 0x3e) + 1;
        }
      }
    }
    *(int *)((int)param_1 + 0x42) = *(int *)(param_2 + 0x1e);
    *(short *)(param_1 + 0x10) = param_3;
    *(short *)((int)param_1 + 0x3e) = sVar4;
  }
  else {
    *(int *)((int)param_1 + 0x42) = *(int *)(param_2 + 0x1e);
    *(short *)(param_1 + 0x10) = param_3;
    *(short *)((int)param_1 + 0x3e) = 1;
    sVar4 = 1;
  }
  return sVar4;
}

/* Address: 0x100b8f00 Size: 72 bytes */
void FUN_100b8f00(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x5c) +
                 (int)*(short *)(**(int **)(param_1 + 0x5c) + 0x180));
  }
  return;
}

/* Address: 0x100b8f48 Size: 72 bytes */
void FUN_100b8f48(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x60) +
                 (int)*(short *)(**(int **)(param_1 + 0x60) + 0x180));
  }
  return;
}

/* Address: 0x100b8f90 Size: 104 bytes */
void FUN_100b8f90(int *param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(unsigned int *)(param_2 + 4) < 0x18) {
      return;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250));
  }
  return;
}

/* Address: 0x100b928c Size: 400 bytes */
void FUN_100b928c(int *param_1,long long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char auStack_150 [336];
  
  piVar1 = (int *)FUN_100b4eac(0);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8),param_2,0);
  FUN_100ebf7c(auStack_150,param_1[0xb],0);
  piVar2 = (int *)FUN_100ec060(auStack_150);
  iVar3 = FUN_100ebf44(auStack_150);
  while (piVar5 = (int *)0x0, iVar3 != 0) {
    iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200));
    iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x160));
    piVar5 = piVar2;
    if (iVar4 == iVar3) break;
    piVar2 = (int *)FUN_100ec0e8(auStack_150);
    iVar3 = FUN_100ebf44(auStack_150);
  }
  if (piVar5 == (int *)0x0) {
    FUN_100f57c8(piVar1);
  }
  else {
    FUN_10117884(param_1[0xb] + (int)*(short *)(*(int *)param_1[0xb] + 0x180),piVar5);
    FUN_10117884((int)*(short *)(*piVar5 + 0x168) + (int)piVar5,piVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),piVar5);
  }
  FUN_100ebff4(auStack_150,2);
  return;
}

/* Address: 0x100b941c Size: 112 bytes */
void FUN_100b941c(long long param_1,long long param_2,long long param_3,long long param_4)

{
  if ((param_2 - 0x29U & 0xffffffff) < 4) {
    return;
  }
  FUN_100d9b64(param_1,param_2,param_3,param_4);
  return;
}

/* Address: 0x100b960c Size: 180 bytes */
void FUN_100b960c(int *param_1,int *param_2)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar2 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = *param_1;
    uVar1 = FUN_10000330(*(unsigned int *)((int)param_2 + 0x16) & 0xff);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x478),uVar1);
  }
  else {
    FUN_100d9c74(param_1,param_2);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100b96c0(int *param_1,int param_2) { }









































































































/* Address: 0x100b98c8 Size: 40 bytes */
long long FUN_100b98c8(void)

{
  FUN_100f535c();
  return 0;
}

/* Address: 0x100b98f0 Size: 76 bytes */
void FUN_100b98f0(int param_1)

{
  FUN_100db500(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x20),1,1,0,0);
  return;
}

/* Address: 0x100b993c Size: 112 bytes */
void FUN_100b993c(long long param_1,long long param_2)

{
  if ((param_2 - 1U & 0xffffffff) < 0x29) {
    return;
  }
  FUN_100c6178(param_1,param_2);
  return;
}

/* Address: 0x100b9c98 Size: 320 bytes */
void FUN_100b9c98(int *param_1)

{
  int *piVar1;
  int *piVar2;
  long long lVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = piRam10116a44;
  FUN_100da394(param_1);
  piVar1 = (int *)*piVar2;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0),*(short *)((int)param_1 + 0x72));
  piVar2 = (int *)*piVar2;
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8),*(short *)(param_1 + 0x1d));
  lVar3 = FUN_100f1264();
  FUN_100f27d0(1,1);
  FUN_100f27d0(0x24,(unsigned long long)((unsigned long long)(long long)*(short *)(param_1 + 0x1c) < 2) -
                    (((long long)*(short *)(param_1 + 0x1c) << 0x20) >> 0x3f));
  FUN_100f27d0(10,lVar3 == 0);
  FUN_100f27d0(0x14,lVar3 == 0);
  iVar4 = FUN_10001050();
  if ((iVar4 != 0) &&
     (iVar5 = FUN_10117884((int)*(short *)(*param_1 + 0x3e0) + (int)param_1,iVar4), iVar5 == 0)) {
    FUN_100f27d0(0x1f,*(char *)(iVar4 + 0x70) != '\0');
  }
  return;
}

/* Address: 0x100b9dd8 Size: 284 bytes */
void FUN_100b9dd8(int *param_1)

{
  int *puVar1;
  long long lVar2;
  int uVar3;
  int uVar4;
  int local_134;
  char local_110 [272];
  
  puVar1 = puRam101177d0;
  uVar4 = uRam10116a54;
  local_110[0] = 0;
  FUN_100f12a8();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x530),local_110);
  FUN_100009f0(local_110,uVar4,uVar4,uVar4);
  lVar2 = FUN_10001728(0x53545223,999);
  *(int *)*(int *)(local_134 + -0xb8) = lVar2 != 0;
  if (lVar2 != 0) {
    **(short **)(local_134 + -0xc4) = 1;
    uVar3 = FUN_10001a88();
    **(int **)(local_134 + -200) = uVar3;
    **(short **)(local_134 + -0xcc) = 300;
    FUN_100b1c84(uVar4);
    uVar4 = FUN_10001ae8();
    *puVar1 = uVar4;
    FUN_100db26c();
    FUN_100d8c9c(0xc9,*(int *)(local_134 + -0xe40));
    uVar4 = FUN_100ef510(*puVar1);
    *puVar1 = uVar4;
  }
  else {
    FUN_100d8e3c(0xc9);
  }
  return;
}

/* Address: 0x100b9ef4 Size: 72 bytes */
void FUN_100b9ef4(void)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar2 = FUN_100cae44(0);
  FUN_100caee0();
  *(int *)(*(int*)((char*)ppuVar1 - 0x38f)) = uVar2;
  return;
}

/* Address: 0x100b9f3c Size: 388 bytes */
void FUN_100b9f3c(int *param_1,long long param_2,long long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_28 [10];
  
  FUN_100ef658(param_3);
  FUN_100ee970(local_28);
  FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
  iVar1 = local_28[1];
  iVar2 = FUN_100eea60(local_28);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if ((((piVar3 != (int *)0x0) &&
         (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x668) + (int)piVar3), iVar2 != 0)) &&
        (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x568) + (int)piVar3), iVar2 != 0)) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x3a8) + (int)piVar3), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,*(int *)(iVar1 + 0x18));
      FUN_10000108(param_3,*(int *)(iVar1 + 0x18),param_3);
      FUN_10117884((int)*(short *)(*piVar3 + 0x2c8) + (int)piVar3,*(int *)(iVar1 + 0x18));
    }
    FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
    iVar1 = local_28[1];
    iVar2 = FUN_100eea60(local_28);
  }
  return;
}

/* Address: 0x100ba0c4 Size: 388 bytes */
void FUN_100ba0c4(int *param_1,long long param_2,long long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_28 [10];
  
  FUN_100ef658(param_3);
  FUN_100ee970(local_28);
  FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
  iVar1 = local_28[1];
  iVar2 = FUN_100eea60(local_28);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if ((((piVar3 != (int *)0x0) &&
         (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x668) + (int)piVar3), iVar2 != 0)) &&
        (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x578) + (int)piVar3), iVar2 != 0)) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x3a8) + (int)piVar3), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,*(int *)(iVar1 + 0x18));
      FUN_10000108(param_3,*(int *)(iVar1 + 0x18),param_3);
      FUN_10117884((int)*(short *)(*piVar3 + 0x2c8) + (int)piVar3,*(int *)(iVar1 + 0x18));
    }
    FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
    iVar1 = local_28[1];
    iVar2 = FUN_100eea60(local_28);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ba248(void) { }


































































































































/* Address: stubbed - had compile errors on 64-bit */
int FUN_100ba380(int *param_1) { return 0; }































































































































/* Address: 0x100ba510 Size: 288 bytes */
long long FUN_100ba510(int *param_1,unsigned short param_2,long long param_3,long long param_4)

{
  int iVar2;
  long long uVar1;
  long long uVar3;
  char auStack_40 [64];
  
  uVar3 = 0;
  if (*(short *)(param_1 + 0x1c) < 2) {
    FUN_10117884((int)*(short *)(*param_1 + 0x508) + (int)param_1,0);
  }
  iVar2 = FUN_100003c0(param_2 | 0x8000,auStack_40,param_3,param_4);
  if (iVar2 != 0) {
    uVar1 = FUN_100f5754(0);
    uVar3 = FUN_100d91e8(0);
    FUN_100f5754(uVar1);
    FUN_100d9278(uVar3,param_1,auStack_40);
  }
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x508) + (int)param_1,1);
  }
  return uVar3;
}

/* Address: 0x100ba6c8 Size: 260 bytes */
int * FUN_100ba6c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_20 [8];
  
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar3 = local_20[1];
  iVar1 = FUN_100eea60(local_20);
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar3);
    if (((piVar2 != (int *)0x0) &&
        (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x668) + (int)piVar2), iVar3 != 0)) &&
       (*(char *)((int)piVar2 + 0xb6) == '\0')) break;
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar3 = local_20[1];
    iVar1 = FUN_100eea60(local_20);
  }
  return piVar2;
}

/* Address: 0x100ba810 Size: 312 bytes */
int * FUN_100ba810(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_28 [10];
  
  FUN_100ee970(local_28);
  FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
  iVar3 = local_28[1];
  iVar1 = FUN_100eea60(local_28);
  do {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar3);
    if (((piVar2 != (int *)0x0) &&
        (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x668) + (int)piVar2), iVar3 != 0)) &&
       (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x680) + (int)piVar2), iVar3 != 0)) {
      if (*(char *)((int)piVar2 + 0xb6) == '\0') {
        return piVar2;
      }
      if (param_2 != '\0') {
        return piVar2;
      }
    }
    FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
    iVar3 = local_28[1];
    iVar1 = FUN_100eea60(local_28);
  } while( true );
}

/* Address: 0x100ba98c Size: 424 bytes */
int * FUN_100ba98c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_20 [2];
  int *local_18;
  
  local_18 = *(int **)(param_1 + 0x28);
  local_20[0] = iRam10116a68;
  local_20[1] = FUN_10117884((int)local_18 + (int)*(short *)(*local_18 + 0xa8));
  iVar1 = FUN_10117884((int)*(short *)(local_20[0] + 8) + (int)local_20);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10117884((int)local_18 + (int)*(short *)(*local_18 + 0x120),local_20[1]);
  }
  iVar1 = FUN_100b633c(local_20);
  while ((piVar3 = (int *)0x0, iVar1 != 0 &&
         (iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8)), piVar3 = piVar2,
         iVar1 == 0))) {
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = FUN_10117884((int)*(short *)(local_20[0] + 8) + (int)local_20);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_10117884((int)local_18 + (int)*(short *)(*local_18 + 0x120),local_20[1]);
    }
    iVar1 = FUN_100b633c(local_20);
  }
  if ((piVar3 != (int *)0x0) &&
     (iVar1 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xc0)), iVar1 == 0)) {
    FUN_10117884((int)*(int **)(param_1 + 0x28) +
                 (int)*(short *)(**(int **)(param_1 + 0x28) + 0x180),piVar3);
  }
  return piVar3;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100bab34(void) { return 0; }

























































































































/* Address: 0x100bad1c Size: 240 bytes */
void FUN_100bad1c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int bVar3;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),
                               *(int *)(param_2 + 0x16));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
  }
  else {
    bVar3 = (*(unsigned short *)(param_2 + 0x22) & 1) != 0;
    if ((*(char *)((int)piVar1 + 0xb6) != '\0') &&
       (piVar2 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x328) + (int)param_1),
       piVar2 != (int *)0x0)) {
      FUN_10001080(piVar2[0x20],bVar3);
      piVar1 = piVar2;
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x318),bVar3);
  }
  return;
}

/* Address: 0x100bae0c Size: 256 bytes */
void FUN_100bae0c(int param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  
  local_1c = *(int **)(param_1 + 100);
  local_20 = iRam10116a5c;
  local_18 = local_1c;
  if (local_1c == (int *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_10117884((int)*(short *)(*local_1c + 0xb0) + (int)local_1c);
  }
  FUN_10117884((int)*(short *)(local_20 + 0x10) + (int)&local_20);
  piVar1 = local_1c;
  iVar2 = FUN_100d9444(&local_20);
  while ((iVar2 != 0 &&
         (iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xc0),param_2), iVar2 == 0)))
  {
    FUN_10117884((int)*(short *)(local_20 + 0x18) + (int)&local_20);
    piVar1 = local_18;
    iVar2 = FUN_100d9444(&local_20);
  }
  return;
}

/* Address: 0x100baf0c Size: 100 bytes */
void FUN_100baf0c(long long param_1,int param_2)

{
  int local_10 [4];
  
  if ((short)((unsigned int)*(int *)(param_2 + 0x16) >> 0x10) != 0) {
    FUN_10001098(local_10,0x70,0x50);
    FUN_100010b0(local_10[0],*(int *)(param_2 + 0x16));
  }
  return;
}

/* Address: 0x100baf70 Size: 56 bytes */
void FUN_100baf70(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x260));
  return;
}

/* Address: 0x100bafac Size: 120 bytes */
void FUN_100bafac(int *param_1,int param_2)

{
  long long uVar1;
  int local_18;
  int uStack_14;
  int uStack_10;
  int uStack_c;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  local_18 = *(int *)(param_2 + 0x14);
  uStack_14 = *(int *)(param_2 + 0x18);
  uStack_10 = *(int *)(param_2 + 0x1c);
  uStack_c = *(int *)(param_2 + 0x20);
  uVar1 = FUN_100010c8(&local_18);
  if ((int)uVar1 != -0x6ac) {
    FUN_100db2f4(uVar1);
  }
  return;
}

/* Address: 0x100bb024 Size: 212 bytes */
void FUN_100bb024(int *param_1,int *param_2)

{
  int *piVar2;
  int iVar3;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x108),param_2);
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
  if (iVar3 == 0) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
    FUN_100d9ff0(uVar1,param_2);
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x340) + (int)param_1);
    FUN_100d9be4(uVar1,param_2);
  }
  return;
}

/* Address: 0x100bb0f8 Size: 144 bytes */
void FUN_100bb0f8(int *param_1,int param_2)

{
  int *piVar2;
  long long uVar1;
  
  *(char *)(param_2 + 0x10) = 0;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x108),param_2);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
  FUN_100da0e0(uVar1,param_2);
  return;
}

/* Address: 0x100bb188 Size: 580 bytes */
void FUN_100bb188(int *param_1,int param_2)

{
  long long uVar1;
  short uVar6;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_6c;
  int local_48;
  int uStack_44;
  int uStack_40;
  int uStack_3c;
  int local_38;
  short local_32;
  int local_2c;
  int local_28;
  
  uVar1 = FUN_100010e0(*(int *)(param_2 + 0x1e),&local_38);
  uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4a8),param_2,uVar1);
  *(short *)(param_2 + 0x28) = uVar6;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_38);
  iVar5 = (int)uVar1;
  if (iVar5 != 1) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x318) + (int)param_1);
    if ((iVar3 != 0) &&
       (piVar4 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x330) + (int)param_1,0),
       piVar2 != piVar4)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1,2);
      return;
    }
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        local_48 = *(int *)(param_2 + 0x14);
        uStack_44 = *(int *)(param_2 + 0x18);
        uStack_40 = *(int *)(param_2 + 0x1c);
        uStack_3c = *(int *)(param_2 + 0x20);
        FUN_100010f8(&local_48,local_38);
      }
      else if (piVar2 == (int *)0x0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
      }
      else {
        iVar5 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
        if (iVar5 != 0) {
          local_32 = *(short *)(param_2 + 0x20);
          local_2c = (int)*(short *)(param_2 + 0x1e);
          local_28 = (int)local_32;
          FUN_10117884((int)*(short *)(*piVar2 + 0x2b8) + (int)piVar2,&local_2c);
          FUN_10117884((int)*(short *)(*piVar2 + 0x540) + (int)piVar2,&local_2c,param_2,
                       **(int **)(local_6c + -0xe34));
        }
      }
      goto LAB_100bb3ac;
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  FUN_100014a0((unsigned long long)*(unsigned int *)(local_6c + -0xb0) + 0x5e);
  iVar5 = *param_1;
  uVar1 = FUN_10001110(*(int *)(param_2 + 0x1e));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 0x478),uVar1);
LAB_100bb3ac:
  iVar5 = FUN_10001a88();
  param_1[0x12] = iVar5;
  return;
}

/* Address: 0x100bb3cc Size: 308 bytes */
void FUN_100bb3cc(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_4c;
  int local_28;
  short local_22;
  int local_1c;
  int local_18;
  
  param_1[0x12] = *(int *)(param_2 + 0x1a);
  iVar1 = FUN_100010e0(*(int *)(param_2 + 0x1e),&local_28);
  if ((iVar1 != 1) && (iVar1 != 2)) {
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_28);
    if (piVar2 == (int *)0x0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
    }
    else {
      iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x3a8) + (int)piVar2);
      if (iVar1 != 0) {
        local_22 = *(short *)(param_2 + 0x20);
        local_1c = (int)*(short *)(param_2 + 0x1e);
        local_18 = (int)local_22;
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_1c);
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x548),&local_1c,param_2,
                     **(int **)(local_4c + -0xe34));
      }
    }
  }
  return;
}

/* Address: 0x100bb500 Size: 460 bytes */
void FUN_100bb500(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int bVar3;
  
  cVar1 = (char)((unsigned int)*(int *)(param_2 + 0x16) >> 0x18);
  if (cVar1 == '\x01') {
    bVar3 = (*(unsigned int *)(param_2 + 0x16) & 2) != 0;
    if ((*(unsigned int *)(param_2 + 0x16) & 1) == 0) {
      FUN_1011289c();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c0),bVar3);
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x330),0);
      if (iVar2 != 0) {
        FUN_10113c58(*(int *)(iVar2 + 0x80));
      }
    }
    else {
      iVar2 = FUN_1011289c();
      if (iVar2 != 0) {
        FUN_1011289c();
        FUN_10113c58();
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8),bVar3);
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x328));
      if (iVar2 != 0) {
        FUN_10113f5c(*(int *)(iVar2 + 0x80));
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x450));
  }
  else if (cVar1 == -6) {
    *(char *)(param_2 + 0x10) = 0;
    iVar2 = FUN_100033c0(*(int *)(param_2 + 0x1e),param_1[0x1f]);
    if (iVar2 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
    }
    iVar2 = FUN_100033c0(*(int *)(param_2 + 0x1e),param_1[0x20]);
    if (iVar2 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
    }
  }
  return;
}

/* Address: 0x100bb6e8 Size: 312 bytes */
void FUN_100bb6e8(int *param_1,long long param_2)

{
  int bVar1;
  int *puVar2;
  int iVar4;
  int *piVar5;
  long long lVar3;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = puRam10117370;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puRam10117370;
  *puRam10117370 = auStack_128;
  iVar4 = FUN_10000090(auStack_128);
  if (iVar4 == 0) {
    piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
    bVar1 = true;
    if (piVar5 != (int *)0x0) {
      lVar3 = FUN_10117884((int)*(short *)(*piVar5 + 400) + (int)piVar5,param_2);
      bVar1 = lVar3 == 0;
    }
    if (bVar1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x278),param_2);
    }
    *puVar2 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    FUN_100db158(local_28,local_24);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  return;
}

/* Address: 0x100bb820 Size: 152 bytes */
void FUN_100bb820(int *param_1,int param_2)

{
  int *piVar1;
  
  *(char *)(param_2 + 0x10) = 0;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),
                               *(int *)(param_2 + 0x16));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
  }
  return;
}

/* Address: 0x100bb8b8 Size: 640 bytes */
void FUN_100bb8b8(int *param_1,char param_2)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  int iVar4;
  int local_17c;
  char auStack_158 [256];
  short local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  
  puVar2 = puRam10117370;
  iVar4 = iRam10116a5c;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_50 = *puRam10117370;
  *puRam10117370 = auStack_158;
  iVar3 = FUN_10000090(auStack_158);
  if (iVar3 == 0) {
    if (param_2 == '\0') {
      if ((**(char **)(local_17c + -0xe54) == '\0') && (iVar3 = FUN_100f1264(), iVar3 != 0)) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e0));
      }
      else {
        iVar3 = FUN_10001a88();
        param_1[0x13] = iVar3;
      }
    }
    local_2c = (int *)param_1[0x19];
    local_30 = iVar4;
    local_28 = local_2c;
    if (local_2c == (int *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_10117884((int)local_2c + (int)*(short *)(*local_2c + 0xb0));
    }
    FUN_10117884((int)*(short *)(local_30 + 0x10) + (int)&local_30);
    piVar1 = local_2c;
    iVar3 = FUN_100d9444(&local_30);
    while (iVar3 != 0) {
      FUN_100d9eec(piVar1,param_2);
      FUN_10117884((int)*(short *)(local_30 + 0x18) + (int)&local_30);
      piVar1 = local_28;
      iVar3 = FUN_100d9444(&local_30);
    }
    local_3c = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
    local_40 = iVar4;
    local_38 = local_3c;
    if (local_3c == (int *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_10117884((int)*(short *)(*local_3c + 0xb0) + (int)local_3c);
    }
    FUN_10117884((int)*(short *)(local_40 + 0x10) + (int)&local_40);
    piVar1 = local_3c;
    iVar4 = FUN_100d9444(&local_40);
    while (iVar4 != 0) {
      FUN_100d9eec(piVar1,param_2);
      FUN_10117884((int)*(short *)(local_40 + 0x18) + (int)&local_40);
      piVar1 = local_38;
      iVar4 = FUN_100d9444(&local_40);
    }
    *puVar2 = local_50;
  }
  else {
    **(char **)(local_17c + -0xe50) = 1;
    FUN_100db158(local_58,local_54);
  }
  return;
}

/* Address: 0x100bbb38 Size: 576 bytes */
long long FUN_100bbb38(int *param_1,char param_2)

{
  int *piVar1;
  long long uVar2;
  int iVar5;
  long long lVar3;
  long long lVar4;
  int iVar6;
  int local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  
  iVar6 = iRam10116a5c;
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    local_34 = (int *)param_1[0x19];
    local_38 = iRam10116a5c;
    uVar2 = 0x7fffffff;
    local_30 = local_34;
    if (local_34 == (int *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_10117884((int)*(short *)(*local_34 + 0xb0) + (int)local_34,param_2);
    }
    FUN_10117884((int)*(short *)(local_38 + 0x10) + (int)&local_38);
    piVar1 = local_34;
    iVar5 = FUN_100d9444(&local_38);
    while (iVar5 != 0) {
      lVar3 = FUN_10001a88();
      lVar4 = FUN_100d9d50(piVar1);
      uVar2 = FUN_100f0334(0,lVar4 - lVar3,uVar2);
      FUN_10117884((int)*(short *)(local_38 + 0x18) + (int)&local_38);
      piVar1 = local_30;
      iVar5 = FUN_100d9444(&local_38);
    }
    local_44 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
    local_48 = iVar6;
    local_40 = local_44;
    if (local_44 == (int *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_10117884((int)*(short *)(*local_44 + 0xb0) + (int)local_44);
    }
    FUN_10117884((int)*(short *)(local_48 + 0x10) + (int)&local_48);
    piVar1 = local_44;
    iVar6 = FUN_100d9444(&local_48);
    while (iVar6 != 0) {
      lVar3 = FUN_10001a88();
      lVar4 = FUN_100d9d50(piVar1);
      uVar2 = FUN_100f0334(0,lVar4 - lVar3,uVar2);
      FUN_10117884((int)*(short *)(local_48 + 0x18) + (int)&local_48);
      piVar1 = local_40;
      iVar6 = FUN_100d9444(&local_48);
    }
  }
  return uVar2;
}

/* Address: 0x100bbdf8 Size: 244 bytes */
long long FUN_100bbdf8(int *param_1)

{
  long long uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_10001050();
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),uVar1);
  if ((iVar2 == 0) && ((int)uVar1 != 0)) {
    iVar2 = FUN_100efbf0(uVar1);
    if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x330),0);
    if ((piVar3 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x820)), iVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* Address: 0x100bbeec Size: 92 bytes */
void FUN_100bbeec(int param_1,long long param_2,char param_3)

{
  int uVar1;
  
  if (param_3 == '\0') {
    uVar1 = FUN_100d9a64(param_2,*(int *)(param_1 + 100));
    *(int *)(param_1 + 100) = uVar1;
  }
  else {
    uVar1 = FUN_100d9a18(param_2,*(int *)(param_1 + 100));
    *(int *)(param_1 + 100) = uVar1;
  }
  return;
}

/* Address: 0x100bbf84 Size: 124 bytes */
char FUN_100bbf84(int param_1)

{
  char local_28 [4];
  int local_24;
  int uStack_20;
  char auStack_1c [28];
  
  FUN_100011d0(auStack_1c);
  FUN_100db2f4();
  local_24 = *(int *)(param_1 + 0x32);
  uStack_20 = *(int *)(param_1 + 0x36);
  FUN_100011e8(auStack_1c,&local_24,local_28);
  FUN_100db2f4();
  return local_28[0];
}

/* Address: 0x100bc020 Size: 108 bytes */
void FUN_100bc020(int *param_1)

{
  int iVar1;
  int local_10;
  int uStack_c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar1 == 0) {
    local_10 = *(int *)((int)param_1 + 0x32);
    uStack_c = *(int *)((int)param_1 + 0x36);
    FUN_10001200(&local_10);
    FUN_100db2f4();
  }
  return;
}

/* Address: 0x100bc08c Size: 44 bytes */
void FUN_100bc08c(void)

{
  FUN_10002f40();
  return;
}

/* Address: 0x100bc0cc Size: 88 bytes */
void FUN_100bc0cc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
  return;
}

/* Address: 0x100bc124 Size: 56 bytes */
void FUN_100bc124(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_10000138(*(int *)(param_1 + 0x7c));
  }
  return;
}

/* Address: 0x100bc15c Size: 148 bytes */
void FUN_100bc15c(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  if (param_1[0x20] != 0) {
    FUN_10000138(param_1[0x20]);
  }
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (((iVar2 != 0) && (iVar2 = FUN_10003750(), iVar2 != 0)) &&
     (uVar1 = FUN_10002fe8(), (int)uVar1 != -0x35e)) {
    FUN_100db2f4(uVar1);
  }
  return;
}

/* Address: 0x100bc200 Size: 76 bytes */
void FUN_100bc200(void)

{
  if (*piRam10116a70 != 0) {
    FUN_10117884(*piRam10116a70 + (int)*(short *)(*(int *)*piRam10116a70 + 0x3b8));
  }
  return;
}

/* Address: 0x100bc24c Size: 88 bytes */
long long FUN_100bc24c(int param_1)

{
  int iVar1;
  long long uVar2;
  
  iVar1 = FUN_10000060(*(int *)(param_1 + 0x7c));
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x3b) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x100bc2a4 Size: 40 bytes */
void FUN_100bc2a4(int param_1)

{
  FUN_10000060(*(int *)(param_1 + 0x80));
  return;
}

/* Address: 0x100bc2cc Size: 208 bytes */
void FUN_100bc2cc(long long param_1,int *param_2)

{
  short sVar1;
  unsigned short uVar2;
  int iVar4;
  long long uVar3;
  unsigned short uVar5;
  int local_10 [4];
  
  FUN_100daf38(param_1,param_2);
  sVar1 = *(short *)(param_2 + 5);
  if (((sVar1 == 3) || (sVar1 == 4)) || (sVar1 == 5)) {
    iVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
    if (iVar4 != 0) {
      uVar5 = *(unsigned short *)((int)param_2 + 0x22);
      uVar2 = *(unsigned short *)((int)param_2 + 0x26);
      local_10[0] = 0;
      uVar3 = FUN_10002160(0x26);
      uVar5 = FUN_10002ca0(uVar3,uVar5 & 0xfe00 | uVar2 | 0x80,local_10);
      *(unsigned short *)(param_2 + 9) = uVar5 & 0xff;
      if ((uVar5 & 0xff) == 0) {
        *(unsigned short *)(param_2 + 9) = uVar5 & 0x10;
      }
    }
  }
  return;
}

/* Address: 0x100bc3a4 Size: 104 bytes */
void FUN_100bc3a4(int *param_1)

{
  char cVar1;
  
  *(char *)((int)param_1 + 0x3a) = 0;
  cVar1 = *(char *)(param_1 + 0xf);
  while (cVar1 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x300),1);
    cVar1 = *(char *)(param_1 + 0xf);
  }
  return;
}

/* Address: 0x100bc40c Size: 76 bytes */
void FUN_100bc40c(void)

{
  if (*piRam101169f4 != 0) {
    FUN_10117884(*piRam101169f4 + (int)*(short *)(*(int *)*piRam101169f4 + 0x1a0));
  }
  return;
}

/* Address: 0x100bc460 Size: 500 bytes */
void FUN_100bc460(int *param_1,int param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  int iVar4;
  short sVar5;
  char local_234 [256];
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  sVar5 = (short)((unsigned int)param_2 >> 0x10);
  if (sVar5 != 0) {
    iVar3 = FUN_100f2704(sVar5,(short)param_2);
    if ((iVar3 < 0) && (sVar5 == 1)) {
      local_234[0] = 0;
      uVar2 = FUN_100f2214(1);
      FUN_10001500(uVar2,(short)param_2,local_234);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f8),local_234);
    }
    else if ((iVar3 < 0x65) ||
            ((0x6a < iVar3 || (iVar4 = FUN_100015c0((short)iVar3 + -0x65), iVar4 == 0)))) {
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_2c = *puVar1;
      *puVar1 = auStack_134;
      iVar4 = FUN_10000090(auStack_134);
      if (iVar4 == 0) {
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),1);
        }
        uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340));
        FUN_100da1d0(uVar2,iVar3);
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),0);
        }
        *puVar1 = local_2c;
      }
      else {
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),0);
        }
        FUN_100db22c(local_34,local_30,(short)iVar3);
        FUN_100db158(local_34,local_30);
      }
    }
  }
  return;
}

/* Address: 0x100bc654 Size: 88 bytes */
void FUN_100bc654(long long param_1,long long param_2)

{
  int local_10 [4];
  
  FUN_10000660(local_10);
  FUN_100b1c84(param_2);
  FUN_100034b0();
  FUN_10000198(local_10[0]);
  return;
}

/* Address: 0x100bc6ac Size: 464 bytes */

int * FUN_100bc6ac(int *param_1,long long param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  char local_240 [256];
  int *local_140;
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar1 = puRam10117370;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = *puRam10117370;
  *puRam10117370 = auStack_13c;
  iVar3 = FUN_10000090(auStack_13c);
  if (iVar3 == 0) {
    iVar3 = *param_1;
    uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x378),param_2,0,
                         *(int *)(iVar3 + 0x37c));
    local_140 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x368),uVar2,0);
    FUN_100db26c();
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x250));
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 600),0);
    local_240[0] = 0;
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x290),local_240);
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x318),local_240);
    FUN_100f12a8();
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x260),0);
    *puVar1 = local_34;
  }
  else {
    local_140 = (int *)0x0;
    FUN_100db22c(local_3c,local_38,0x820005);
    FUN_100db158(local_3c,local_38);
  }
  return local_140;
}

/* Address: 0x100bc87c Size: 1224 bytes */

int * FUN_100bc87c(int *param_1,long long param_2,int *param_3)

{
  int uVar1;
  int *puVar2;
  int iVar4;
  int *piVar5;
  int iVar6;
  long long uVar3;
  short local_3f8;
  char auStack_3f4 [312];
  char local_2bc [256];
  unsigned int local_1bc;
  int local_1b8 [2];
  unsigned char local_1b0 [64];
  int *local_170;
  char auStack_16c [256];
  short local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_54;
  int local_50;
  
  puVar2 = puRam10117370;
  uVar1 = uRam10116a74;
  local_170 = (int *)0x0;
  local_3f8 = 0;
  local_50 = 0;
  FUN_100ebf7c(auStack_3f4,param_3,1);
  local_54 = (int *)FUN_100ec060(auStack_3f4);
  iVar4 = FUN_100ebf44(auStack_3f4);
  if (iVar4 != 0) {
    do {
      local_170 = (int *)0x0;
      local_1b0[0] = 0;
      FUN_10117884((int)local_54 + (int)*(short *)(*local_54 + 0x198),local_1b0);
      FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x180),local_54);
      local_6c = 0;
      local_68 = 0;
      local_60 = 0;
      local_5c = 0;
      local_64 = *puVar2;
      *puVar2 = auStack_16c;
      iVar4 = FUN_10000090(auStack_16c);
      if (iVar4 == 0) {
        FUN_100f12e4(local_1b8,&local_1bc);
        FUN_100f13e8(local_1b8[0],
                     (long long)((int)local_1bc >> 1) +
                     (unsigned long long)((int)local_1bc < 0 && (local_1bc & 1) != 0));
        piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x358),local_54);
        iVar4 = FUN_10117884((int)local_54 + (int)*(short *)(*local_54 + 0x228));
        if ((piVar5 == (int *)0x0) || (iVar4 != 0)) {
          iVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x348),param_2,local_54);
          if (iVar6 == 0) {
            FUN_100db158(0xffffffffffffb1da,0);
          }
          else {
            iVar6 = *param_1;
            uVar3 = FUN_10117884((int)*(short *)(iVar6 + 0x378) + (int)param_1,param_2,local_54,0,
                                 *(int *)(iVar6 + 0x37c));
            local_170 = (int *)FUN_10117884((int)*(short *)(iVar6 + 0x368) + (int)param_1,uVar3,
                                            local_54);
            FUN_100db26c();
            if (iVar4 == 0) {
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x278),0);
            }
            else {
              uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),param_2);
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x280),uVar3);
            }
            FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 600),0);
            if (iVar4 != 0) {
              local_2bc[0] = 0;
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x290),local_2bc);
              FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x318),local_2bc);
            }
            FUN_100f12a8();
            FUN_100f13e8(local_1b8[0],local_1bc);
            FUN_10117884((int)local_170 + (int)*(short *)(*local_170 + 0x260),0);
          }
        }
        else {
          FUN_10117884((int)*(short *)(*piVar5 + 0x268) + (int)piVar5,param_2,0);
          FUN_100f57c8(local_54);
          FUN_100f13e8(local_1b8[0],local_1bc);
        }
        *puVar2 = local_64;
      }
      else {
        if (local_68 == 0) {
          FUN_100012d8(local_1b0,uVar1,(unsigned long long)local_1b0[0] + 1);
        }
        FUN_100f57c8(local_54);
        local_170 = (int *)0x0;
        FUN_100f57c8(0);
        FUN_100f13e8(local_1b8[0],local_1bc);
        local_3f8 = local_6c;
        local_50 = local_68;
        if (local_68 == 0) {
          local_50 = 0x820006;
        }
      }
      local_54 = (int *)FUN_100ec0e8(auStack_3f4);
      iVar4 = FUN_100ebf44(auStack_3f4);
    } while ((iVar4 != 0) && (local_3f8 == 0));
  }
  FUN_100ebff4(auStack_3f4,2);
  if (local_3f8 != 0) {
    FUN_100db158(local_3f8,local_50);
  }
  return local_170;
}

/* Address: 0x100bcd44 Size: 84 bytes */
void FUN_100bcd44(long long param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0));
  }
  return;
}

/* Address: 0x100bce04 Size: 424 bytes */
void FUN_100bce04(int *param_1,char param_2)

{
  char uVar1;
  short sVar2;
  int *puVar3;
  int iVar5;
  long long uVar4;
  int local_154;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar3 = puRam10117370;
  uVar1 = *(char *)((int)param_1 + 0x31);
  *(char *)((int)param_1 + 0x31) = param_2;
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar3;
  *puVar3 = auStack_12c;
  iVar5 = FUN_10000090(auStack_12c);
  if (iVar5 == 0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_1 + 0x1f8) + (int)param_1);
    if ((int)uVar4 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x498) + (int)param_1,uVar4);
    }
    if (*(char *)((int)param_1 + 0x56) != '\0') {
      FUN_10117884(**(int **)(local_154 + -0xeac) +
                   (int)*(short *)(*(int *)**(int **)(local_154 + -0xeac) + 0x1d8));
      FUN_10117884((int)*(short *)(*param_1 + 0x4f8) + (int)param_1);
    }
    *puVar3 = local_24;
    sVar2 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      **(char **)(local_154 + -0xe50) = 0;
    }
  }
  else {
    *(char *)((int)param_1 + 0x31) = uVar1;
    sVar2 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      if (local_2c != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),local_2c,local_28);
      }
      FUN_100f2204();
    }
    else {
      FUN_100db158(local_2c,local_28);
    }
  }
  *(char *)((int)param_1 + 0x31) = uVar1;
  return;
}

/* Address: 0x100bcfac Size: 484 bytes */
int FUN_100bcfac(int *param_1,char param_2)

{
  int iVar2;
  long long lVar1;
  long long uVar3;
  long long uVar4;
  int local_4c;
  char auStack_28 [40];
  
  iVar2 = FUN_100014d0(*(short *)(param_1 + 0x15),auStack_28);
  uVar3 = 0;
  uVar4 = 0;
  if (iVar2 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x488) + (int)param_1);
    iVar2 = FUN_100014d0(*(short *)(param_1 + 0x15),auStack_28);
    if (iVar2 == 0) {
      uVar4 = FUN_10117884((int)*(short *)(*param_1 + 0x3f8) + (int)param_1);
      iVar2 = FUN_100014d0(*(short *)(param_1 + 0x15),auStack_28);
      if (iVar2 == 0) {
        uVar3 = FUN_10117884((int)*(short *)(*param_1 + 1000) + (int)param_1,param_2);
      }
      else {
        uVar4 = 0;
      }
    }
  }
  FUN_10002e68(0);
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x248),
                       *(short *)(param_1 + 0x15),uVar3,uVar4);
  if (lVar1 != 0) {
    if (*(char *)((int)param_1 + 0x3a) == '\x01') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),2);
      *(char *)((int)param_1 + 0x3a) = 0;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x498),lVar1);
    if (*(char *)((int)param_1 + 0x56) != '\0') {
      FUN_10117884(**(int **)(local_4c + -0xeac) +
                   (int)*(short *)(*(int *)**(int **)(local_4c + -0xeac) + 0x1d8));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4f8));
    }
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),
                 *(char *)((int)param_1 + 0x3a));
    *(char *)((int)param_1 + 0x3a) = 1;
  }
  return lVar1 != 0;
}

/* Address: 0x100bd190 Size: 244 bytes */
void FUN_100bd190(int param_1,int *param_2)

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
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puRam10117370;
  *puRam10117370 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0));
    if (iVar2 != 0) {
      FUN_10117884((int)*(int **)(param_1 + 0x28) +
                   (int)*(short *)(**(int **)(param_1 + 0x28) + 0x150),param_2);
    }
    *puVar1 = local_20;
  }
  else {
    iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    if (iVar2 != 0) {
      FUN_100f57c8(param_2);
    }
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100bd284 Size: 68 bytes */
void FUN_100bd284(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200));
  }
  return;
}

/* Address: 0x100bd2c8 Size: 56 bytes */
void FUN_100bd2c8(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(**(int **)(param_1 + 0x2c) + 0x150))
  ;
  return;
}

/* Address: 0x100bd300 Size: 140 bytes */
void FUN_100bd300(long long param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 != (int *)0x0) && (*(char *)(param_2 + 4) != '\0')) {
    FUN_100f2204();
  }
  FUN_100f1574(0);
  if ((param_2 != (int *)0x0) &&
     (iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8)), iVar1 != 0)) {
    FUN_100f57c8(param_2);
  }
  return;
}

/* Address: 0x100bd438 Size: 292 bytes */
void FUN_100bd438(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_44;
  int local_20 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),1);
  FUN_10117884(**(int **)(local_44 + -0xeac) +
               (int)*(short *)(*(int *)**(int **)(local_44 + -0xeac) + 0x1f0),param_2);
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),iVar1);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x778) + (int)piVar3);
    }
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = local_20[1];
    iVar2 = FUN_100eea60(local_20);
  }
  return;
}

/* Address: 0x100bd618 Size: 252 bytes */
void FUN_100bd618(int param_1,unsigned long long param_2)

{
  int iVar2;
  unsigned long long uVar1;
  long long uVar3;
  
  iVar2 = FUN_1010fab8(param_2);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_1011289c();
    uVar3 = FUN_1010fb3c();
  }
  else {
    uVar1 = FUN_10114d2c();
  }
  if ((uVar1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    if (iVar2 == 0) {
      if ((int)uVar3 == 0) {
        FUN_10003180(param_2);
      }
      else {
        FUN_10113c58(uVar1);
        iVar2 = FUN_10112710(param_2);
        if (iVar2 == 0) {
          FUN_10002dc0(param_2,uVar3);
        }
        else {
          FUN_10003000(param_2);
        }
        FUN_10113f5c(param_2);
      }
    }
    else {
      FUN_10003000(param_2);
    }
  }
  *(short *)(param_1 + 0x40) = 0;
  return;
}

/* Address: 0x100bd714 Size: 152 bytes */
void FUN_100bd714(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = param_1;
  }
  piVar1 = (int *)param_1[0x1b];
  if (param_2 != piVar1) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1);
    param_1[0x1b] = (int)param_2;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x450));
  }
  return;
}

/* Address: 0x100bd7ac Size: 332 bytes */
void FUN_100bd7ac(int param_1,char param_2,long long param_3)

{
  unsigned char *pbVar1;
  int iVar2;
  char *puVar3;
  long long uVar4;
  short *puVar5;
  short *puVar6;
  char *puVar7;
  int iVar8;
  char *puVar9;
  int local_24c;
  short local_228;
  short local_226;
  char auStack_224 [256];
  char local_124 [292];
  
  puVar5 = (short *)(((char*)0) + -0x228);
  puVar6 = (short *)(((char*)0) + -0x226);
  puVar7 = ((char*)0) + -0x224;
  puVar9 = ((char*)0) + -0x124;
  iVar8 = (int)param_3;
  if ((*(char *)(param_1 + 0x57) != param_2) || (*(int *)(param_1 + 0x58) != iVar8)) {
    if (iVar8 == -1) {
      uVar4 = 0xb;
    }
    else if (param_2 == '\0') {
      uVar4 = 6;
    }
    else {
      uVar4 = 5;
    }
    *puVar9 = 0;
    FUN_100009d8(puVar9,0xfa,uVar4);
    iVar2 = FUN_100ee320(puVar9,puVar6,puVar5);
    if (iVar2 != 0) {
      pbVar1 = *(unsigned char **)(local_24c + -0xe4c);
      puVar3 = puVar7;
      if ((((char*)0) != (char *)0x224) ||
         (puVar3 = (char *)FUN_100f56e4(0x100), puVar3 != (char *)0x0)) {
        FUN_100012d8(pbVar1,puVar3,(unsigned long long)*pbVar1 + 1);
      }
      if ((iVar8 != 0) && (iVar8 != -1)) {
        FUN_100f2758(param_3,puVar7);
      }
      FUN_100ee588(puVar9,puVar7,*puVar6,*puVar5);
    }
    FUN_100f3284(0x65,puVar9);
    *(char *)(param_1 + 0x57) = param_2;
    *(int *)(param_1 + 0x58) = iVar8;
  }
  return;
}

/* Address: 0x100bd8f8 Size: 212 bytes */
void FUN_100bd8f8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_2c;
  
  piVar2 = piRam10116a44;
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if ((iVar3 != 0) && (iVar3 = FUN_100f25b8(), iVar3 != 0)) {
    piVar1 = (int *)*piVar2;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8));
    FUN_100f3118(*(int *)(local_2c + -0xe24),0xffffffffffffffff);
    piVar2 = (int *)*piVar2;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd0));
    iVar3 = FUN_100f25b8();
    if (iVar3 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}

/* Address: 0x100bd9dc Size: 192 bytes */
void FUN_100bd9dc(int *param_1,long long param_2,int *param_3,long long param_4,
                 short *param_5,int *param_6,int *param_7,int *param_8)

{
  int *in_stack_00000038;
  int *in_stack_0000003c;
  int *in_stack_00000040;
  int local_6c;
  
  *param_5 = 0xe866;
  *param_6 = 0xffffffff;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a0),param_2,param_4);
  *param_3 = 0;
  *param_7 = 0;
  *param_8 = **(int **)(local_6c + -0xe20);
  *in_stack_00000038 = 0;
  *in_stack_0000003c = 0;
  *in_stack_00000040 = 0;
  return;
}

/* Address: 0x100bdb40 Size: 72 bytes */
void FUN_100bdb40(int param_1,long long param_2,int *param_3)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_100f15e0(4);
  *param_3 = puVar1;
  *(int *)*puVar1 = *(int *)(param_1 + 0x24);
  return;
}

/* Address: 0x100bdb88 Size: 52 bytes */
void FUN_100bdb88(long long param_1,short param_2,long long param_3)

{
  FUN_100d8e68(param_2,param_3);
  return;
}

/* Address: 0x100bdbbc Size: 152 bytes */
void FUN_100bdbbc(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int local_2c;
  
  if (((0 < param_1[0x14]) &&
      (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8)), iVar1 != 0)) &&
     (uVar2 = FUN_10001a88(), (unsigned int)param_1[0x13] < uVar2)) {
    **(char **)(local_2c + -0xe50) = 1;
    FUN_100d8e3c(0x88);
    iVar1 = FUN_10001a88();
    param_1[0x13] = iVar1 + param_1[0x14];
  }
  return;
}

/* Address: 0x100bdc54 Size: 80 bytes */
void FUN_100bdc54(int *param_1,int param_2)

{
  int uStack0000001c;
  int local_24;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x400),param_2);
  FUN_100014a0((unsigned long long)*(unsigned int *)(local_24 + -0xb0) + 0x5e);
  return;
}

/* Address: 0x100bdca4 Size: 288 bytes */
void FUN_100bdca4(int *param_1,int param_2,long long param_3)

{
  int _sStack0000001c;
  int *puVar1;
  int iVar2;
  int *piVar3;
  short sStack0000001c;
  short sStack0000001e;
  int local_28;
  int local_24;
  int local_20;
  char auStack_1c [28];
  
  _sStack0000001c = param_2;
  puVar1 = (int *)FUN_100b0368(auStack_1c,((char*)0 + 0x0000001c));
  iVar2 = FUN_100010e0(*puVar1,&local_28);
  if (iVar2 == 3) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_28);
    if ((piVar3 != (int *)0x0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x568) + (int)piVar3), iVar2 != 0)) {
      local_24 = (int)sStack0000001c;
      local_20 = (int)sStack0000001e;
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b8) + (int)piVar3,&local_24);
      FUN_10117884((int)*(short *)(*piVar3 + 0x588) + (int)piVar3,&local_24,param_1[0x1f]);
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,param_3);
    }
  }
  return;
}

/* Address: 0x100bddc4 Size: 184 bytes */
void FUN_100bddc4(int *param_1,int param_2)

{
  int iVar1;
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x430),uStack0000001c,param_1[0x1f]);
  iVar1 = FUN_10000060(param_1[0x1f]);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x420) + (int)param_1,uStack0000001c,param_1[0x1f]);
  }
  FUN_1010573c(uStack0000001c,param_1[0x1f]);
  return;
}

/* Address: 0x100bdf64 Size: 132 bytes */
void FUN_100bdf64(int *param_1,int param_2,long long param_3)

{
  int iVar2;
  long long uVar1;
  int uStack0000001c;
  
  uStack0000001c = param_2;
  iVar2 = FUN_10003750();
  if ((iVar2 != 0) && (uVar1 = FUN_10002fe8(), (int)uVar1 != -0x35e)) {
    FUN_100db2f4(uVar1);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x410),uStack0000001c,param_3);
  return;
}

/* Address: 0x100bdfe8 Size: 288 bytes */
void FUN_100bdfe8(int *param_1,int param_2,long long param_3)

{
  int _sStack0000001c;
  int *puVar1;
  int iVar2;
  int *piVar3;
  short sStack0000001c;
  short sStack0000001e;
  int local_28;
  int local_24;
  int local_20;
  char auStack_1c [28];
  
  _sStack0000001c = param_2;
  puVar1 = (int *)FUN_100b0368(auStack_1c,((char*)0 + 0x0000001c));
  iVar2 = FUN_100010e0(*puVar1,&local_28);
  if (iVar2 == 3) {
    piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),local_28);
    if ((piVar3 != (int *)0x0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x578) + (int)piVar3), iVar2 != 0)) {
      local_24 = (int)sStack0000001c;
      local_20 = (int)sStack0000001e;
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b8) + (int)piVar3,&local_24);
      FUN_10117884((int)*(short *)(*piVar3 + 0x590) + (int)piVar3,&local_24,param_3);
      FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,param_3);
    }
  }
  return;
}

/* Address: 0x100be108 Size: 184 bytes */
void FUN_100be108(int *param_1,int param_2)

{
  int iVar1;
  int uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448),uStack0000001c,param_1[0x20]);
  iVar1 = FUN_10000060(param_1[0x20]);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x438) + (int)param_1,uStack0000001c,param_1[0x20]);
  }
  FUN_1010573c(uStack0000001c,param_1[0x20]);
  return;
}

/* Address: 0x100be2a8 Size: 640 bytes */




int * FUN_100be2a8(int *param_1,long long param_2,int param_3)

{
  int *puVar1;
  int iVar2;
  int uStack00000020;
  int *in_stack_00000024;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_20;
  
  puVar1 = puRam10117370;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puRam10117370;
  *puRam10117370 = auStack_138;
  uStack00000020 = param_3;
  iVar2 = FUN_10000090(auStack_138);
  if (iVar2 == 0) {
    local_20 = (int *)FUN_10117884((int)in_stack_00000024 +
                                   (int)*(short *)(*in_stack_00000024 + 0x1b0),param_2,
                                   uStack00000020);
    if (local_20 != (int *)0x0) {
      iVar2 = FUN_10117884((int)*(short *)(*local_20 + 0x158) + (int)local_20);
      while (iVar2 == 0) {
        iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
        if (iVar2 != 0) {
          local_20 = (int *)FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x1b8));
        }
        if (local_20 == (int *)0x0) goto LAB_100be404;
        iVar2 = FUN_10117884((int)*(short *)(*local_20 + 0x158) + (int)local_20);
      }
      if (local_20 != (int *)0x0) {
        local_20 = (int *)FUN_10117884((int)*(short *)(*local_20 + 0x1c0) + (int)local_20);
      }
    }
LAB_100be404:
    *puVar1 = local_30;
  }
  else {
    if (in_stack_00000024 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*in_stack_00000024 + 0x128) + (int)in_stack_00000024);
      iVar2 = FUN_10117884((int)in_stack_00000024 + (int)*(short *)(*in_stack_00000024 + 0xa8));
      if (iVar2 != 0) {
        if (in_stack_00000024 == *(int **)(in_stack_00000024[6] + 0x1c)) {
          *(int *)(in_stack_00000024[6] + 0x1c) = 0;
        }
        FUN_100f57c8(in_stack_00000024);
      }
    }
    local_20 = (int *)0x0;
    FUN_100db158(local_38,local_34);
  }
  return local_20;
}

/* Address: 0x100be528 Size: 184 bytes */
void FUN_100be528(int *param_1)

{
  int *piVar1;
  
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x248),0x140,0,0);
  while (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0));
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x248),0x140,0,0);
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
  return;
}

/* Address: 0x100be5e0 Size: 48 bytes */
void FUN_100be5e0(void)

{
  FUN_1010de08(0);
  FUN_1010de98();
  return;
}

/* Address: 0x100be610 Size: 40 bytes */
void FUN_100be610(long long param_1,long long param_2)

{
  FUN_1010f990(param_2);
  return;
}

/* Address: 0x100be638 Size: 196 bytes */
void FUN_100be638(long long param_1,long long param_2)

{
  int *puVar1;
  int iVar2;
  int local_194;
  int local_170;
  int local_16c;
  int local_138;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puRam10117370;
  *puRam10117370 = auStack_130;
  iVar2 = FUN_10000090(auStack_130);
  if (iVar2 == 0) {
    local_170 = 0x3c;
    local_16c = (int)param_2;
    local_138 = 0;
    FUN_10001bd8(param_1 + 0x32,&local_170);
    FUN_100db2f4();
    *puVar1 = local_28;
  }
  else {
    FUN_100b1d90(param_2,(unsigned long long)*(unsigned int *)(local_194 + -0xeb8) + 0x3c4);
  }
  return;
}

/* Address: 0x100be728 Size: 332 bytes */
void FUN_100be728(void)

{
  int uVar1;
  int uVar2;
  int *ppuVar3;
  
  uVar2 = uRam10116a84;
  uVar1 = uRam10116a10;
  ppuVar3 = 0 /* TVect base */;
  FUN_100c1c8c(uRam101169f8,*puRam10116a88,0x24,uRam10116a8c,uRam10116a90);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x3a8)),*(int *)ppuVar3[-899],0x30,(*(int*)((char*)ppuVar3 - 0x382)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x3a6)),*(int *)(*(int*)((char*)ppuVar3 - 0x381)),0x30,(*(int*)((char*)ppuVar3 - 0x380)),uVar2);
  FUN_100c1c8c(uVar1,*(int *)(*(int*)((char*)ppuVar3 - 0x37f)),0x40,(*(int*)((char*)ppuVar3 - 0x37e)),(*(int*)((char*)ppuVar3 - 0x37d)));
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x3a2)),*(int *)(*(int*)((char*)ppuVar3 - 0x37c)),0x40,(*(int*)((char*)ppuVar3 - 0x37b)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x3a0)),*(int *)(*(int*)((char*)ppuVar3 - 0x37a)),0x40,(*(int*)((char*)ppuVar3 - 0x379)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x39e)),*(int *)(*(int*)((char*)ppuVar3 - 0x378)),0x30,(*(int*)((char*)ppuVar3 - 0x377)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x39c)),*(int *)(*(int*)((char*)ppuVar3 - 0x376)),0x30,(*(int*)((char*)ppuVar3 - 0x375)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x39a)),*(int *)(*(int*)((char*)ppuVar3 - 0x374)),0x84,(*(int*)((char*)ppuVar3 - 0x373)),(*(int*)((char*)ppuVar3 - 0x372)));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100be874(int param_1,int *param_2) { return 0; }





















/* Address: 0x100be91c Size: 116 bytes */
int * FUN_100be91c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x36f));
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}

/* Address: 0x100be990 Size: 40 bytes */
void FUN_100be990(void)

{
  FUN_100be91c(0);
  return;
}

/* Address: 0x100be9b8 Size: 240 bytes */
void FUN_100be9b8(int *param_1,long long param_2,long long param_3)

{
  int *puVar1;
  int iVar2;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100f5274(param_1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar2 = FUN_10000090(auStack_130);
  if (iVar2 == 0) {
    FUN_100b1c84(param_2);
    iVar2 = FUN_10001ae8();
    param_1[1] = iVar2;
    FUN_100db26c();
    FUN_100b1c84(param_3);
    iVar2 = FUN_10001ae8();
    param_1[2] = iVar2;
    FUN_100db26c();
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: 0x100beaa8 Size: 84 bytes */
void FUN_100beaa8(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef510(*(int *)(param_1 + 4));
  *(int *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100ef510(*(int *)(param_1 + 8));
  *(int *)(param_1 + 8) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100beafc(int param_1,long long param_2) { }












/* Address: 0x100bebe4 Size: 40 bytes */
void FUN_100bebe4(void)

{
  FUN_100beb7c(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100bec0c(long long param_1,int param_2,int param_3) { return 0; }





















/* Address: 0x100bed54 Size: 40 bytes */
void FUN_100bed54(void)

{
  FUN_100bece4(0);
  return;
}

/* Address: 0x100bee44 Size: 68 bytes */
void FUN_100bee44(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100e91b4(*(int *)(param_1 + 4));
  *(int *)(param_1 + 4) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100bee88 Size: 72 bytes */
void FUN_100bee88(int param_1,int param_2)

{
  int local_8 [2];
  
  local_8[0] = param_2;
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x160),
               uRam10116af8,local_8);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100beed0(int param_1,long long param_2) { return 0; }

























/* Address: 0x100beff0 Size: 188 bytes */
void FUN_100beff0(int *param_1,long long param_2,long long param_3)

{
  int *piVar2;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2);
  if (piVar2 == (int *)0x0) {
    uVar1 = FUN_100be91c(0);
    FUN_100be9b8(uVar1,param_2,param_3);
    FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x150),uVar1);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar2 + 0xa8) + (int)piVar2,param_3);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100bf0ac(int param_1,long long param_2,long long param_3) { return 0; }





































/* Address: 0x100bf228 Size: 128 bytes */
void FUN_100bf228(int param_1,int param_2)

{
  long long uVar1;
  int local_10 [4];
  
  local_10[0] = param_2;
  uVar1 = FUN_10117884((int)*(int **)(param_1 + 4) +
                       (int)*(short *)(**(int **)(param_1 + 4) + 0x160),uRam10116af8,local_10);
  if ((int)uVar1 != 0) {
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x180),
                 uVar1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100bf2a8(int param_1,long long param_2) { }





























/* Address: 0x100bf3ec Size: 156 bytes */
int FUN_100bf3ec(int param_1,int param_2,long long param_3)

{
  int iVar1;
  int local_34;
  int local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 4) +
                       (int)*(short *)(**(int **)(param_1 + 4) + 0x160),uRam10116af8,local_10);
  if (iVar1 != 0) {
    FUN_100012d8((unsigned char *)**(int **)(iVar1 + 8),param_3,
                 (unsigned long long)*(unsigned char *)**(int **)(iVar1 + 8) + 1);
  }
  else {
    FUN_100b1d90(param_3,(unsigned long long)*(unsigned int *)(local_34 + -0xdc4) + 0x2c);
  }
  return iVar1 != 0;
}

/* Address: 0x100bf488 Size: 136 bytes */
void FUN_100bf488(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116938;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116ae0,*puRam10116afc,0xc,uRam10116b00,uRam10116938);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x36e)),*(int *)(*(int*)((char*)ppuVar2 - 0x367)),0x24,(*(int*)((char*)ppuVar2 - 0x366)),ppuVar2[-900]);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x36c)),*(int *)(*(int*)((char*)ppuVar2 - 0x365)),8,(*(int*)((char*)ppuVar2 - 0x364)),uVar1);
  return;
}

/* Address: 0x100bf5bc Size: 40 bytes */
void FUN_100bf5bc(void)

{
  FUN_100bf518(0);
  return;
}

/* Address: 0x100bf5e4 Size: 60 bytes */
void FUN_100bf5e4(int param_1,int param_2)

{
  FUN_100f5274(param_1);
  *(int *)(param_1 + 4) = param_2;
  return;
}

/* Address: 0x100bf620 Size: 52 bytes */
void FUN_100bf620(void)

{
  int iVar1;
  
  iVar1 = FUN_100f5088();
  *(int *)(iVar1 + 0x14) = 0;
  *(int *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x10) = 0;
  return;
}

/* Address: 0x100bf654 Size: 68 bytes */
void FUN_100bf654(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x14));
  *(int *)(param_1 + 0x14) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100bf698 Size: 144 bytes */
void FUN_100bf698(int param_1,int *param_2)

{
  int uVar1;
  char uVar2;
  
  FUN_100f5100(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(int *)(param_1 + 4) = uVar1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 0xc) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(int *)(param_1 + 0x18) = uVar1;
  return;
}

/* Address: 0x100bf728 Size: 144 bytes */
void FUN_100bf728(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xc));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0x18));
  return;
}

/* Address: 0x100bf7c0 Size: 164 bytes */
void FUN_100bf7c0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)param_1[5];
    if (piVar1 == (int *)0x0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),param_1);
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x120),param_2);
    }
  }
  return;
}

/* Address: 0x100bf864 Size: 8 bytes */
void FUN_100bf864(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = param_2;
  return;
}

/* Address: 0x100bf8a4 Size: 132 bytes */
unsigned long long FUN_100bf8a4(int param_1)

{
  unsigned long long uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x14) +
                         (int)*(short *)(**(int **)(param_1 + 0x14) + 0x100));
    if (iVar2 == 0) {
      uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x14) +
                           (int)*(short *)(**(int **)(param_1 + 0x14) + 0xe0));
    }
    else {
      uVar1 = (unsigned long long)*(unsigned int *)(param_1 + 0x14);
    }
  }
  return uVar1;
}

/* Address: 0x100bf928 Size: 248 bytes */
void FUN_100bf928(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == param_3) {
      piVar1 = (int *)param_1[4];
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_2);
      }
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),param_1[4]);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 200),param_1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_2);
    }
    else {
      piVar1 = (int *)param_1[5];
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110),param_2);
      }
    }
  }
  return;
}

/* Address: 0x100bfa20 Size: 264 bytes */
void FUN_100bfa20(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == param_3) {
      piVar1 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),param_1);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 200),piVar1);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_2);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2);
    }
    else {
      piVar1 = (int *)param_1[5];
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x118),param_2);
      }
    }
  }
  return;
}

/* Address: 0x100bfb28 Size: 296 bytes */
void FUN_100bfb28(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == param_2) {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
    piVar1 = (int *)param_1[4];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 200) + (int)piVar1,piVar2);
    }
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd0),param_1[4]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),0);
  }
  else {
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128));
    }
  }
  return;
}

/* Address: 0x100bfc50 Size: 180 bytes */
void FUN_100bfc50(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128),param_2,param_3,param_4);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x130) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}

/* Address: 0x100bfd04 Size: 156 bytes */
void FUN_100bfd04(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x100),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100bfda0 Size: 180 bytes */
void FUN_100bfda0(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_2,param_3,param_4);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}

/* Address: 0x100bfe54 Size: 156 bytes */
void FUN_100bfe54(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf0),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x148) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100bfef0 Size: 156 bytes */
void FUN_100bfef0(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x150) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100bff8c Size: 156 bytes */
void FUN_100bff8c(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110),param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x158) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100c0028 Size: 144 bytes */
void FUN_100c0028(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x118));
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x160) + (int)piVar1);
  }
  return;
}

/* Address: 0x100c00b8 Size: 132 bytes */
void FUN_100c00b8(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x168) + (int)piVar1,param_2,param_3,param_4,param_5);
  }
  return;
}

/* Address: 0x100c013c Size: 152 bytes */
long long FUN_100c013c(int *param_1)

{
  long long lVar1;
  int iVar2;
  
  if (param_1[6] == 0x7fffffff) {
    lVar1 = 0x7fffffff;
  }
  else {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
    if (iVar2 == 0) {
      lVar1 = 0x7fffffff;
    }
    else if (param_1[7] == 0) {
      lVar1 = FUN_10001a88();
    }
    else {
      lVar1 = (unsigned long long)(unsigned int)param_1[7] + (unsigned long long)(unsigned int)param_1[6];
    }
  }
  return lVar1;
}

/* Address: 0x100c01d4 Size: 252 bytes */
void FUN_100c01d4(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if ((((param_1[6] != 0x7fffffff) &&
       (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x100) + (int)param_1), iVar2 != 0)) &&
      ((param_2 != '\x01' ||
       (iVar2 = FUN_10001a88(), (unsigned int)param_1[6] <= (unsigned int)(iVar2 - param_1[7]))))) &&
     ((iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),param_2), iVar2 == 0 &&
      (param_2 == '\x01')))) {
    iVar2 = FUN_10001a88();
    param_1[7] = iVar2;
  }
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100c02e0 Size: 132 bytes */
long long FUN_100c02e0(int *param_1,long long param_2,long long param_3,int param_4)

{
  int *piVar2;
  long long uVar1;
  int uStack00000024;
  
  uStack00000024 = param_4;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x170) + (int)piVar2,param_2,param_3,
                         uStack00000024);
  }
  return uVar1;
}

/* Address: 0x100c0364 Size: 132 bytes */
long long FUN_100c0364(int *param_1,long long param_2,long long param_3,int param_4)

{
  int *piVar2;
  long long uVar1;
  int uStack00000024;
  
  uStack00000024 = param_4;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x178) + (int)piVar2,param_2,param_3,
                         uStack00000024);
  }
  return uVar1;
}

/* Address: 0x100c03e8 Size: 108 bytes */
void FUN_100c03e8(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x180) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100c0454 Size: 124 bytes */
long long FUN_100c0454(int *param_1,long long param_2,long long param_3)

{
  int *piVar2;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x188) + (int)piVar2,param_2,param_3);
  }
  return uVar1;
}

/* Address: 0x100c04d0 Size: 116 bytes */
long long FUN_100c04d0(int *param_1,long long param_2)

{
  int *piVar2;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 400) + (int)piVar2,param_2);
  }
  return uVar1;
}

/* Address: 0x100c0544 Size: 20 bytes */
int FUN_100c0544(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}

/* Address: 0x100c0564 Size: 92 bytes */
void FUN_100c0564(int param_1)

{
  int uVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0xd8));
    *(int *)(param_1 + 0xc) = uVar1;
  }
  return;
}

/* Address: 0x100c05c0 Size: 60 bytes */
void FUN_100c05c0(void)

{
  FUN_100c1c8c(uRam10116610,*puRam10116b18,0x20,uRam10116b1c,uRam10116938);
  return;
}

/* Address: 0x100c05fc Size: 100 bytes */
void FUN_100c05fc(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0x390,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffa970,*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100c0660 Size: 60 bytes */
char FUN_100c0660(int param_1,short param_2,long long param_3)

{
  char uVar1;
  
  uVar1 = FUN_10003240(*(int *)(param_1 + 4),0x390,param_2,param_3);
  return uVar1;
}

/* Address: 0x100c069c Size: 100 bytes */
void FUN_100c069c(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffa850,*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100c0700 Size: 44 bytes */
void FUN_100c0700(int param_1)

{
  FUN_10003240(*(int *)(param_1 + 4),0);
  return;
}

/* Address: 0x100c072c Size: 100 bytes */
void FUN_100c072c(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0xc0,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffaa1c,*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100c0790 Size: 48 bytes */
void FUN_100c0790(int param_1,long long param_2)

{
  FUN_10003240(*(int *)(param_1 + 4),0xc0,param_2);
  return;
}

/* Address: 0x100c07c0 Size: 100 bytes */
void FUN_100c07c0(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0xc0,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffa851,*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100c0824 Size: 48 bytes */
void FUN_100c0824(int param_1,long long param_2)

{
  FUN_10003240(*(int *)(param_1 + 4),0xc0,param_2);
  return;
}

/* Address: 0x100c0854 Size: 100 bytes */
void FUN_100c0854(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0x10,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffa973,*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100c08b8 Size: 48 bytes */
char FUN_100c08b8(int param_1)

{
  char uVar1;
  
  uVar1 = FUN_10003240(*(int *)(param_1 + 4),0x10);
  return uVar1;
}

/* Address: 0x100c08e8 Size: 100 bytes */
void FUN_100c08e8(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0x10,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffa977,*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100c094c Size: 48 bytes */
char FUN_100c094c(int param_1)

{
  char uVar1;
  
  uVar1 = FUN_10003240(*(int *)(param_1 + 4),0x10);
  return uVar1;
}

/* Address: 0x100c097c Size: 84 bytes */
void FUN_100c097c(void)

{
  if (*piRam10116a48 != 0) {
    FUN_10117884(*piRam10116a48 + (int)*(short *)(*(int *)*piRam10116a48 + 0xd0),
                 *(short *)(iRam10116b24 + 100));
  }
  return;
}

/* Address: 0x100c09d0 Size: 108 bytes */
long long FUN_100c09d0(short param_1,long long param_2)

{
  long long uVar1;
  long long uVar2;
  int local_34;
  
  uVar1 = FUN_10001e18();
  FUN_100c097c();
  uVar2 = FUN_100c0660(*(int *)(local_34 + -0xd78),param_1,param_2);
  FUN_100017a0(uVar1);
  return uVar2;
}

/* Address: 0x100c0a3c Size: 88 bytes */
long long FUN_100c0a3c(void)

{
  long long uVar1;
  long long uVar2;
  int local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c097c();
  uVar2 = FUN_100c08b8(*(int *)(local_2c + -0xd74));
  FUN_100017a0(uVar1);
  return uVar2;
}

/* Address: 0x100c0a94 Size: 88 bytes */
long long FUN_100c0a94(void)

{
  long long uVar1;
  long long uVar2;
  int local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c097c();
  uVar2 = FUN_100c094c(*(int *)(local_2c + -0xd70));
  FUN_100017a0(uVar1);
  return uVar2;
}

/* Address: 0x100c0aec Size: 136 bytes */
void FUN_100c0aec(long long param_1)

{
  int *piVar1;
  int iVar2;
  long long uVar3;
  int local_34;
  
  iVar2 = iRam10116b24;
  uVar3 = FUN_10001e18();
  piVar1 = (int *)**(int **)(local_34 + -0xe58);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xd8) + (int)piVar1);
  }
  *(char *)(iVar2 + 0x18) = 1;
  *(int *)(iVar2 + 0x60) = (int)param_1;
  FUN_100c0790(*(int *)(local_34 + -0xd6c),param_1);
  FUN_100017a0(uVar3);
  return;
}

/* Address: 0x100c0b74 Size: 104 bytes */
int * FUN_100c0b74(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(4),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x35a));
  }
  return param_1;
}

/* Address: 0x100c0bdc Size: 60 bytes */
int FUN_100c0bdc(int *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  sVar1 = psVar2[1];
  psVar2[1] = sVar1 + 1;
  if (*psVar2 <= (short)(sVar1 + 1)) {
    psVar2[1] = 0;
  }
  return *(int *)(psVar2 + psVar2[1] * 2 + 2);
}

/* Address: 0x100c0c18 Size: 748 bytes */
void FUN_100c0c18(int *param_1)

{
  int uVar1;
  int iVar5;
  int *puVar6;
  int iVar7;
  int iVar9;
  long long uVar8;
  int *puVar10;
  int uVar11;
  int local_16c;
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar7 = iRam1011788c;
  puVar6 = puRam10117370;
  iVar5 = iRam10116b24;
  FUN_100f5274(param_1);
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puVar6;
  *puVar6 = auStack_148;
  iVar9 = FUN_10000090(auStack_148);
  if (iVar9 == 0) {
    *(char *)(iVar5 + 0x66) = 1;
    iVar9 = *(int *)(local_16c + -0xb0);
    uVar11 = *(int *)(iVar9 + 0x62);
    uVar1 = *(int *)(iVar9 + 0x66);
    uVar2 = *(int *)(iVar9 + 0x6a);
    uVar3 = *(int *)(iVar9 + 0x6e);
    uVar4 = *(int *)(iVar9 + 0x72);
    *(int *)(iVar5 + 0x1a) = *(int *)(iVar9 + 0x5e);
    *(int *)(iVar5 + 0x1e) = uVar11;
    *(int *)(iVar5 + 0x22) = uVar1;
    *(int *)(iVar5 + 0x26) = uVar2;
    *(int *)(iVar5 + 0x2a) = uVar3;
    *(int *)(iVar5 + 0x2e) = uVar4;
    uVar2 = *(int *)(iVar9 + 0x7a);
    uVar11 = *(int *)(iVar9 + 0x7e);
    uVar3 = *(int *)(iVar9 + 0x82);
    uVar4 = *(int *)(iVar9 + 0x86);
    uVar1 = *(int *)(iVar9 + 0x8a);
    *(int *)(iVar5 + 0x32) = *(int *)(iVar9 + 0x76);
    *(int *)(iVar5 + 0x36) = uVar2;
    *(int *)(iVar5 + 0x3a) = uVar11;
    *(int *)(iVar5 + 0x3e) = uVar3;
    *(int *)(iVar5 + 0x42) = uVar4;
    *(int *)(iVar5 + 0x46) = uVar1;
    uVar11 = *(int *)(iVar9 + 0x92);
    uVar3 = *(int *)(iVar9 + 0x96);
    uVar4 = *(int *)(iVar9 + 0x9a);
    uVar1 = *(int *)(iVar9 + 0x9e);
    *(int *)(iVar5 + 0x4a) = *(int *)(iVar9 + 0x8e);
    *(int *)(iVar5 + 0x4e) = uVar11;
    *(int *)(iVar5 + 0x52) = uVar3;
    *(int *)(iVar5 + 0x56) = uVar4;
    *(int *)(iVar5 + 0x5a) = uVar1;
    *(short *)(iVar5 + 100) = 0x78;
    *(char *)(iVar5 + 0x18) = 0;
    *(char *)(iVar5 + 0x67) = 1;
    *(char *)(iVar5 + 0x68) = 0;
    uVar8 = FUN_10117884((int)*(short *)(*param_1 + 0xa8) + (int)param_1,0x100);
    *(int *)(iVar5 + 0xb0) = (int)uVar8;
    if ((int)uVar8 == 0) {
      puVar10 = (int *)FUN_10001470(4);
      puVar10 = (int *)*puVar10;
      uVar11 = puVar10[1];
      uVar2 = puVar10[2];
      uVar1 = puVar10[3];
      uVar4 = puVar10[4];
      uVar3 = puVar10[5];
      *(int *)(iVar5 + 0x6a) = *puVar10;
      *(int *)(iVar5 + 0x6e) = uVar11;
      *(int *)(iVar5 + 0x72) = uVar2;
      *(int *)(iVar5 + 0x76) = uVar1;
      *(int *)(iVar5 + 0x7a) = uVar4;
      *(int *)(iVar5 + 0x7e) = uVar3;
      uVar2 = puVar10[7];
      uVar1 = puVar10[8];
      uVar4 = puVar10[9];
      uVar3 = puVar10[10];
      uVar11 = puVar10[0xb];
      *(int *)(iVar5 + 0x82) = puVar10[6];
      *(int *)(iVar5 + 0x86) = uVar2;
      *(int *)(iVar5 + 0x8a) = uVar1;
      *(int *)(iVar5 + 0x8e) = uVar4;
      *(int *)(iVar5 + 0x92) = uVar3;
      *(int *)(iVar5 + 0x96) = uVar11;
      uVar3 = puVar10[0xd];
      uVar4 = puVar10[0xe];
      uVar1 = puVar10[0xf];
      uVar11 = puVar10[0x10];
      *(int *)(iVar5 + 0x9a) = puVar10[0xc];
      *(int *)(iVar5 + 0x9e) = uVar3;
      *(int *)(iVar5 + 0xa2) = uVar4;
      *(int *)(iVar5 + 0xa6) = uVar1;
      *(int *)(iVar5 + 0xaa) = uVar11;
    }
    else {
      puVar10 = (int *)FUN_100c0bdc(uVar8);
      puVar10 = (int *)*puVar10;
      uVar2 = puVar10[1];
      uVar1 = puVar10[2];
      uVar4 = puVar10[3];
      uVar3 = puVar10[4];
      uVar11 = puVar10[5];
      *(int *)(iVar5 + 0x6a) = *puVar10;
      *(int *)(iVar5 + 0x6e) = uVar2;
      *(int *)(iVar5 + 0x72) = uVar1;
      *(int *)(iVar5 + 0x76) = uVar4;
      *(int *)(iVar5 + 0x7a) = uVar3;
      *(int *)(iVar5 + 0x7e) = uVar11;
      uVar1 = puVar10[7];
      uVar4 = puVar10[8];
      uVar3 = puVar10[9];
      uVar11 = puVar10[10];
      uVar2 = puVar10[0xb];
      *(int *)(iVar5 + 0x82) = puVar10[6];
      *(int *)(iVar5 + 0x86) = uVar1;
      *(int *)(iVar5 + 0x8a) = uVar4;
      *(int *)(iVar5 + 0x8e) = uVar3;
      *(int *)(iVar5 + 0x92) = uVar11;
      *(int *)(iVar5 + 0x96) = uVar2;
      uVar1 = puVar10[0xd];
      uVar4 = puVar10[0xe];
      uVar11 = puVar10[0xf];
      uVar3 = puVar10[0x10];
      *(int *)(iVar5 + 0x9a) = puVar10[0xc];
      *(int *)(iVar5 + 0x9e) = uVar1;
      *(int *)(iVar5 + 0xa2) = uVar4;
      *(int *)(iVar5 + 0xa6) = uVar11;
      *(int *)(iVar5 + 0xaa) = uVar3;
    }
    *(short *)(iVar5 + 0xb4) = 10;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),0x7fffffff);
    *(short *)(iVar5 + 0xc) = 1;
    uVar8 = FUN_100eecf8(*(int *)(local_16c + -0xd64));
    uVar11 = FUN_10000a98(uVar8,0x9802,1);
    *(int *)(iVar5 + 0xe) = uVar11;
    FUN_100db26c();
    *(short *)(iVar5 + 0x12) = 0x78;
    *(short *)(iVar5 + 0x14) = 0;
    uVar11 = FUN_10001e18();
    *(int *)(iVar5 + 4) = uVar11;
    iVar9 = local_16c;
    FUN_100c07c0(*(int *)(local_16c + -0xd60),*(int *)(local_16c + -0xd5c));
    FUN_100c069c(*(int *)(iVar9 + -0xd58),*(int *)(iVar9 + -0xd54));
    FUN_100c072c(*(int *)(iVar9 + -0xd6c),*(int *)(iVar9 + -0xd50));
    FUN_100007b0(iVar5 + 8);
    FUN_100db2f4();
    **(char **)(local_16c + -0xd4c) = 1;
    FUN_100c05fc(*(int *)(local_16c + -0xd78),*(int *)(local_16c + -0xd48));
    FUN_100c0854(*(int *)(local_16c + -0xd74),*(int *)(local_16c + -0xd44));
    if (*(char *)(iVar7 + 0x1d) != '\0') {
      FUN_100c08e8(*(int *)(local_16c + -0xd70),*(int *)(local_16c + -0xd40));
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),0x78);
    *puVar6 = local_40;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_48,local_44);
  }
  return;
}

/* Address: 0x100c0f70 Size: 160 bytes */
void FUN_100c0f70(int *param_1)

{
  int uVar1;
  int *piVar6;
  int iVar7;
  int uVar2;
  int uVar3;
  int uVar4;
  int uVar5;
  
  iVar7 = iRam10116b24;
  piVar6 = (int *)*piRam10116a48;
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar6 + 0xd8) + (int)piVar6);
  }
  if (param_1 == (int *)(iVar7 + 0x6a)) {
    *(char *)(iVar7 + 0x68) = 1;
  }
  else {
    *(char *)(iVar7 + 0x18) = 0;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[4];
    uVar5 = param_1[5];
    *(int *)(iVar7 + 0x1a) = *param_1;
    *(int *)(iVar7 + 0x1e) = uVar1;
    *(int *)(iVar7 + 0x22) = uVar2;
    *(int *)(iVar7 + 0x26) = uVar3;
    *(int *)(iVar7 + 0x2a) = uVar4;
    *(int *)(iVar7 + 0x2e) = uVar5;
    uVar1 = param_1[7];
    uVar2 = param_1[8];
    uVar3 = param_1[9];
    uVar4 = param_1[10];
    uVar5 = param_1[0xb];
    *(int *)(iVar7 + 0x32) = param_1[6];
    *(int *)(iVar7 + 0x36) = uVar1;
    *(int *)(iVar7 + 0x3a) = uVar2;
    *(int *)(iVar7 + 0x3e) = uVar3;
    *(int *)(iVar7 + 0x42) = uVar4;
    *(int *)(iVar7 + 0x46) = uVar5;
    uVar1 = param_1[0xd];
    uVar2 = param_1[0xe];
    uVar3 = param_1[0xf];
    uVar4 = param_1[0x10];
    *(int *)(iVar7 + 0x4a) = param_1[0xc];
    *(int *)(iVar7 + 0x4e) = uVar1;
    *(int *)(iVar7 + 0x52) = uVar2;
    *(int *)(iVar7 + 0x56) = uVar3;
    *(int *)(iVar7 + 0x5a) = uVar4;
  }
  return;
}

/* Address: 0x100c1010 Size: 96 bytes */
void FUN_100c1010(long long param_1)

{
  long long uVar1;
  int local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c0f70(param_1);
  FUN_100c0824(*(int *)(local_2c + -0xd60),param_1);
  FUN_100017a0(uVar1);
  return;
}

/* Address: 0x100c1070 Size: 88 bytes */
void FUN_100c1070(void)

{
  long long uVar1;
  int local_2c;
  
  uVar1 = FUN_10001e18();
  FUN_100c0f70((unsigned long long)*(unsigned int *)(local_2c + -0xb0) + 0x5e);
  FUN_100c0700(*(int *)(local_2c + -0xd58));
  FUN_100017a0(uVar1);
  return;
}

/* Address: 0x100c10c8 Size: 296 bytes */
void FUN_100c10c8(int param_1)

{
  int uVar1;
  int *puVar5;
  int uVar6;
  int iVar7;
  int *puVar8;
  int uVar2;
  int uVar3;
  int uVar4;
  
  puVar5 = puRam10116b24;
  uVar6 = FUN_100017a0(*(int *)(param_1 + -6));
  *puVar5 = uVar6;
  *(short *)((int)puVar5 + 0x12) = *(short *)(puVar5 + 0x19);
  iVar7 = FUN_100029d0();
  if (((iVar7 == 0) && (*(char *)((int)puVar5 + 0x66) != '\0')) &&
     (*(char *)((int)puVar5 + 0x67) != '\0')) {
    if (puVar5[0x2c] == 0) {
      if (*(char *)(puVar5 + 0x1a) == '\0') {
        FUN_100014a0((int)puVar5 + 0x6a);
      }
    }
    else {
      if (*(char *)(puVar5 + 0x1a) == '\0') {
        puVar5[0x2f] = 0;
      }
      if ((int)puVar5[0x2f] <= (int)puVar5[0x2e]) {
        puVar8 = (int *)FUN_100c0bdc(puVar5[0x2c]);
        puVar8 = (int *)*puVar8;
        uVar6 = puVar8[1];
        uVar1 = puVar8[2];
        uVar2 = puVar8[3];
        uVar3 = puVar8[4];
        uVar4 = puVar8[5];
        *(int *)((int)puVar5 + 0x6a) = *puVar8;
        *(int *)((int)puVar5 + 0x6e) = uVar6;
        *(int *)((int)puVar5 + 0x72) = uVar1;
        *(int *)((int)puVar5 + 0x76) = uVar2;
        *(int *)((int)puVar5 + 0x7a) = uVar3;
        *(int *)((int)puVar5 + 0x7e) = uVar4;
        uVar6 = puVar8[7];
        uVar1 = puVar8[8];
        uVar2 = puVar8[9];
        uVar3 = puVar8[10];
        uVar4 = puVar8[0xb];
        *(int *)((int)puVar5 + 0x82) = puVar8[6];
        *(int *)((int)puVar5 + 0x86) = uVar6;
        *(int *)((int)puVar5 + 0x8a) = uVar1;
        *(int *)((int)puVar5 + 0x8e) = uVar2;
        *(int *)((int)puVar5 + 0x92) = uVar3;
        *(int *)((int)puVar5 + 0x96) = uVar4;
        uVar6 = puVar8[0xd];
        uVar1 = puVar8[0xe];
        uVar2 = puVar8[0xf];
        uVar3 = puVar8[0x10];
        *(int *)((int)puVar5 + 0x9a) = puVar8[0xc];
        *(int *)((int)puVar5 + 0x9e) = uVar6;
        *(int *)((int)puVar5 + 0xa2) = uVar1;
        *(int *)((int)puVar5 + 0xa6) = uVar2;
        *(int *)((int)puVar5 + 0xaa) = uVar3;
        FUN_100014a0((int *)((int)puVar5 + 0x6a));
        puVar5[0x2f] = puVar5[0x2f] + 1;
      }
      *(short *)((int)puVar5 + 0x12) = *(short *)(puVar5 + 0x2d);
    }
  }
  FUN_100017a0(*puVar5);
  return;
}

/* Address: 0x100c11f8 Size: 40 bytes */
void FUN_100c11f8(void)

{
  FUN_100c0b74(0);
  return;
}

/* Address: 0x100c1220 Size: 308 bytes */
void FUN_100c1220(int *param_1)

{
  int iVar1;
  int iVar2;
  int uVar3;
  short sVar4;
  int iVar5;
  int local_34;
  
  iVar2 = iRam1011788c;
  iVar1 = iRam10116b24;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),1);
  if (**(char **)(local_34 + -0xd4c) != '\0') {
    FUN_10003078(iVar1 + 8);
  }
  if (*(int **)(iVar1 + 0xb0) != (int *)0x0) {
    iVar5 = 0;
    if (0 < *(short *)**(int **)(iVar1 + 0xb0)) {
      do {
        FUN_10001c98(*(int *)(**(int **)(iVar1 + 0xb0) + iVar5 * 4 + 4));
        sVar4 = (short)iVar5 + 1;
        iVar5 = (int)sVar4;
      } while (sVar4 < *(short *)**(int **)(iVar1 + 0xb0));
    }
    uVar3 = FUN_100ef510(*(int *)(iVar1 + 0xb0));
    *(int *)(iVar1 + 0xb0) = uVar3;
  }
  FUN_100f5500(*(int *)(local_34 + -0xd58));
  FUN_100f5500(*(int *)(local_34 + -0xd60));
  FUN_100f5500(*(int *)(local_34 + -0xd6c));
  FUN_100f5500(*(int *)(local_34 + -0xd78));
  FUN_100f5500(*(int *)(local_34 + -0xd74));
  if (*(char *)(iVar2 + 0x1d) != '\0') {
    FUN_100f5500(*(int *)(local_34 + -0xd70));
  }
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100c1360 Size: 132 bytes */
void FUN_100c1360(long long param_1,short param_2)

{
  int iVar1;
  
  iVar1 = iRam10116b24;
  if ((*(char *)(iRam10116b24 + 0x66) != '\0') && (*(char *)(iRam10116b24 + 0x67) != '\0')) {
    if (*(char *)(iRam10116b24 + 0x68) != '\0') {
      if (*(char *)(iRam10116b24 + 0x18) == '\0') {
        FUN_100014a0(iRam10116b24 + 0x1a);
      }
      else {
        FUN_10002850(*(int *)(iRam10116b24 + 0x60));
      }
    }
    *(short *)(iVar1 + 0x12) = param_2;
  }
  return;
}

/* Address: 0x100c13e4 Size: 64 bytes */
void FUN_100c13e4(int *param_1,char param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,1);
  return;
}

/* Address: 0x100c1424 Size: 120 bytes */
char FUN_100c1424(int *param_1,char param_2,char param_3)

{
  char uVar1;
  int iVar2;
  
  iVar2 = iRam10116b24;
  if (param_3 == '\0') {
    uVar1 = *(char *)(iRam10116b24 + 0x66);
    *(char *)(iRam10116b24 + 0x66) = param_2;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),*(short *)(iRam10116b24 + 100)
                 ,param_3);
    uVar1 = *(char *)(iVar2 + 0x66);
    *(char *)(iVar2 + 0x66) = param_2;
  }
  return uVar1;
}

/* Address: 0x100c149c Size: 76 bytes */
void FUN_100c149c(int *param_1,short param_2)

{
  if (0 < param_2) {
    *(short *)(iRam10116b24 + 100) = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  }
  return;
}

/* Address: 0x100c14e8 Size: 60 bytes */
void FUN_100c14e8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int * FUN_100c1554(long long param_1,short param_2) { return 0; }























































/* Address: 0x100c1668 Size: 244 bytes */
void FUN_100c1668(void)

{
  int *puVar1;
  short *puVar2;
  short *puVar3;
  short *puVar4;
  short *puVar5;
  short *puVar6;
  short *puVar7;
  
  puVar7 = puRam10116b48;
  puVar6 = puRam10116b40;
  puVar5 = puRam10116b34;
  puVar4 = puRam10116b30;
  puVar3 = puRam10116b2c;
  puVar2 = puRam10116b28;
  puVar1 = puRam10116b24;
  *puRam10116b24 = 0;
  puVar1[1] = 0;
  *(char *)(puVar1 + 6) = 0;
  puVar1[0x18] = 0;
  *(short *)(puVar1 + 0x19) = 0;
  *(char *)((int)puVar1 + 0x66) = 0;
  *(char *)((int)puVar1 + 0x67) = 0;
  *(char *)(puVar1 + 0x1a) = 0;
  puVar1[0x2c] = 0;
  *(short *)(puVar1 + 0x2d) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *puVar2 = 0;
  *(int *)(puVar2 + 2) = 0;
  *(int *)(puVar2 + 4) = 0;
  *(int *)(puVar2 + 6) = 0;
  *puVar7 = 0;
  *(int *)(puVar7 + 2) = 0;
  *(int *)(puVar7 + 4) = 0;
  *(int *)(puVar7 + 6) = 0;
  *puVar5 = 0;
  *(int *)(puVar5 + 2) = 0;
  *(int *)(puVar5 + 4) = 0;
  *(int *)(puVar5 + 6) = 0;
  *puVar6 = 0;
  *(int *)(puVar6 + 2) = 0;
  *(int *)(puVar6 + 4) = 0;
  *(int *)(puVar6 + 6) = 0;
  *puVar3 = 0;
  *(int *)(puVar3 + 2) = 0;
  *(int *)(puVar3 + 4) = 0;
  *(int *)(puVar3 + 6) = 0;
  *puVar4 = 0;
  *(int *)(puVar4 + 2) = 0;
  *(int *)(puVar4 + 4) = 0;
  *(int *)(puVar4 + 6) = 0;
  FUN_100c1c8c(uRam10116b64,*puRam10116b68,4,uRam10116b6c,uRam10116938);
  return;
}

/* Address: 0x100c1764 Size: 84 bytes */
int * FUN_100c1764(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100d8824(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x34b));
  }
  return puVar2;
}

/* Address: 0x100c17b8 Size: 40 bytes */
void FUN_100c17b8(long long param_1,long long param_2)

{
  FUN_100d88b4(param_1,param_2,4);
  return;
}

/* Address: 0x100c17e0 Size: 48 bytes */
void FUN_100c17e0(int param_1,long long param_2)

{
  FUN_100b19f4(param_2,*(int *)(param_1 + 8));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100c1810(long long param_1,int *param_2,int *param_3) { return 0; }



























/* Address: 0x100c18d4 Size: 84 bytes */
int * FUN_100c18d4(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100d8824(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x349));
  }
  return puVar2;
}

/* Address: 0x100c1928 Size: 40 bytes */
void FUN_100c1928(long long param_1,long long param_2)

{
  FUN_100d88b4(param_1,param_2,4);
  return;
}

/* Address: 0x100c1950 Size: 8 bytes */
short FUN_100c1950(int param_1)

{
  return *(short *)(param_1 + 0x10);
}

/* Address: 0x100c1958 Size: 140 bytes */
long long FUN_100c1958(long long param_1,int *param_2,int *param_3)

{
  int uVar1;
  int uVar2;
  int iVar4;
  int iVar5;
  long long uVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  iVar4 = FUN_100c1950(uVar2);
  iVar5 = FUN_100c1950(uVar1);
  if (iVar4 < iVar5) {
    uVar3 = 1;
  }
  else {
    iVar4 = FUN_100c1950(uVar2);
    iVar5 = FUN_100c1950(uVar1);
    if (iVar5 < iVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/* Address: 0x100c19e4 Size: 172 bytes */
int FUN_100c19e4(int param_1,unsigned char *param_2,short param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x108), param_1 != 0)) {
    iVar1 = param_1;
    if ((param_1 != 0) || (iVar1 = FUN_100f56e4(0x100), iVar1 != 0)) {
      FUN_100012d8(param_2,iVar1,(unsigned long long)*param_2 + 1);
    }
    *(short *)(param_1 + 0x100) = param_3;
    *(int *)(param_1 + 0x104) = param_4;
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100c1a90(long long param_1,int param_2) { return 0; }


























/* Address: 0x100c1b5c Size: 144 bytes */
long long FUN_100c1b5c(long long param_1,int param_2)

{
  short sVar2;
  long long uVar1;
  int local_10 [4];
  
  FUN_10117884((int)*(int **)(param_2 + 0x104) + (int)*(short *)(**(int **)(param_2 + 0x104) + 0xd8)
               ,param_1,local_10,1);
  sVar2 = FUN_100c1950(local_10[0]);
  if (*(short *)(param_2 + 0x100) < sVar2) {
    uVar1 = 0xffffffffffffffff;
  }
  else if (sVar2 < *(short *)(param_2 + 0x100)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100c1bec Size: 24 bytes */
void FUN_100c1bec(void)

{
  *psRam101177f8 = *psRam101177f8 + 1;
  return;
}

/* Address: 0x100c1c04 Size: 32 bytes */
void FUN_100c1c04(int param_1,int param_2)

{
  if (param_2 == param_1) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c1c24(int param_1,long long param_2) { }














































/* Address: 0x100c1c8c Size: 128 bytes */
int *
FUN_100c1c8c(int *param_1,int param_2,int param_3,int param_4,
            long long param_5)

{
  if ((param_1 != (int *)0x0) ||
     (param_1 = (int *)FUN_100f56e4(0x1c), param_1 != (int *)0x0)) {
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    FUN_100c1c24(param_1,param_5);
  }
  return param_1;
}














/* Address: 0x100c1d0c Size: 60 bytes */
long long FUN_100c1d0c(int *param_1)

{
  long long uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884();
  }
  return uVar1;
}

/* Address: 0x100c1d48 Size: 8 bytes */
int FUN_100c1d48(int param_1)

{
  return *(int *)(param_1 + 0xc);
}

/* Address: 0x100c1d50 Size: 24 bytes */
int FUN_100c1d50(int param_1,int param_2)

{
  if (param_2 == 1) {
    return *(int *)(param_1 + 0x14);
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100c1d68(unsigned long long param_1,unsigned long long param_2,char param_3) { return 0; }























































/* Address: 0x100c1e3c Size: 148 bytes */
int * FUN_100c1e3c(int *param_1,unsigned long long param_2)

{
  int *ppuVar1;
  int iVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x10), param_1 != (int *)0x0))
  {
    param_1[3] = (int)(*(int*)((char*)ppuVar1 - 0x348));
    param_1[1] = 0;
    param_1[2] = 0;
    iVar2 = FUN_10001338((param_2 & 0x3fffffff) << 2);
    *param_1 = iVar2;
    if (iVar2 != 0) {
      param_1[1] = (int)param_2;
    }
    FUN_100db26c(*param_1);
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c1ed0(int param_1,int param_2) { }





























































/* Address: 0x100c1fd8 Size: 180 bytes */
int FUN_100c1fd8(short param_1)

{
  int *piVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  int local_120;
  char auStack_11c [264];
  int local_14 [5];
  
  piVar2 = piRam10117800;
  ppuVar3 = 0 /* TVect base */;
  local_14[0] = 0;
  FUN_100c19e4(auStack_11c,uRam10116a54,param_1,*piRam10117800);
  piVar1 = (int *)*piVar2;
  iVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110),(*(int*)((char*)ppuVar3 - 0x347)),auStack_11c,
                       &local_120);
  if (iVar4 != 0) {
    piVar2 = (int *)*piVar2;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),local_120,local_14,1);
  }
  return local_14[0];
}

/* Address: 0x100c208c Size: 148 bytes */
long long FUN_100c208c(short param_1)

{
  int uVar1;
  long long uVar2;
  unsigned char local_110 [272];
  
  uVar1 = uRam10116a74;
  uVar2 = FUN_100c1fd8(param_1);
  if ((int)uVar2 == 0) {
    FUN_100b1d1c(local_110,param_1);
    FUN_100012d8(local_110,uVar1,(unsigned long long)local_110[0] + 1);
    FUN_100db158(0xffffffffffffb1d8,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c1d0c(uVar2);
  }
  return uVar2;
}

/* Address: 0x100c21d0 Size: 128 bytes */
long long FUN_100c21d0(unsigned char *param_1)

{
  int uVar1;
  long long uVar2;
  
  uVar1 = uRam10116a74;
  uVar2 = FUN_100c2120(param_1);
  if ((int)uVar2 == 0) {
    FUN_100012d8(param_1,uVar1,(unsigned long long)*param_1 + 1);
    FUN_100db158(0xffffffffffffb1d8,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c1d0c(uVar2);
  }
  return uVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c2250(void) { }



























































































































































/* Address: 0x100c25c8 Size: 116 bytes */
void FUN_100c25c8(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = iRam10116b80;
    if (*param_1 != 0) {
      FUN_100025b0(*param_1);
    }
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}

/* Address: 0x100c267c Size: 56 bytes */
void FUN_100c267c(int param_1)

{
  FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x10));
  return;
}

/* Address: 0x100c26ec Size: 208 bytes */
void FUN_100c26ec(int *param_1,long long param_2)

{
  unsigned int uVar1;
  long long uVar2;
  
  if ((param_1[2] < param_1[1]) && (*param_1 != 0)) {
    *(int *)(param_1[2] * 4 + *param_1) = (int)param_2;
    param_1[2] = param_1[2] + 1;
    return;
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 2;
  uVar2 = FUN_10001338(((unsigned long long)uVar1 & 0x3fffffff) * 4 + 8);
  FUN_100db26c();
  FUN_10002340(*param_1,uVar2,param_1[1] << 2);
  FUN_100025b0(*param_1);
  *param_1 = (int)uVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(param_1[3] + 0x10),param_2);
  return;
}

/* Address: 0x100c27bc Size: 104 bytes */
void FUN_100c27bc(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam101169bc;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116b70,*puRam10116b8c,0x20,uRam10116b90,uRam101169bc);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x34a)),*(int *)(*(int*)((char*)ppuVar2 - 0x343)),0x20,(*(int*)((char*)ppuVar2 - 0x342)),uVar1);
  return;
}

/* Address: 0x100c2824 Size: 152 bytes */
int * FUN_100c2824(int *param_1,int param_2,char param_3)

{
  int uVar1;
  
  uVar1 = uRam10116b9c;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_100f56e4(0x14);
    if (param_1 != (int *)0x0) {
      *param_1 = uVar1;
      param_1[1] = param_2;
      param_1[2] = 0;
      *(char *)(param_1 + 3) = param_3;
      param_1[4] = 0;
    }
  }
  else {
    *param_1 = uRam10116b9c;
    param_1[1] = param_2;
    param_1[2] = 0;
    *(char *)(param_1 + 3) = param_3;
    param_1[4] = 0;
  }
  return param_1;
}

























/* Address: 0x100c28bc Size: 120 bytes */
void FUN_100c28bc(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116b9c;
    if (param_1[4] != 0) {
      FUN_100c25c8(param_1[4],3);
    }
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}














/* Address: 0x100c293c Size: 88 bytes */
void FUN_100c293c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return;
}







/* Address: 0x100c2994 Size: 88 bytes */
void FUN_100c2994(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return;
}







/* Address: 0x100c2a04 Size: 12 bytes */
void FUN_100c2a04(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  return;
}






/* Address: 0x100c2a10 Size: 68 bytes */
int FUN_100c2a10(int *param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return lVar1 != 0;
}

/* Address: 0x100c2a54 Size: 184 bytes */
int * FUN_100c2a54(int *param_1,long long param_2,char param_3)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x14),
     param_1 != (int *)0x0)) {
    FUN_100c2824(param_1,param_2,param_3);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x340));
    if (param_3 == '\0') {
      uVar2 = FUN_100c1e3c(0,4);
      param_1[4] = uVar2;
    }
    else {
      uVar2 = FUN_100c1e3c(0,1);
      param_1[4] = uVar2;
    }
    FUN_100db26c(param_1[4]);
  }
  return param_1;
}
























/* Address: 0x100c2b0c Size: 108 bytes */
void FUN_100c2b0c(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116ba0;
    FUN_100c28bc(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}












/* Address: 0x100c2b78 Size: 264 bytes */
long long FUN_100c2b78(int param_1,int param_2)

{
  long long uVar1;
  int iVar2;
  long long lVar3;
  
  uVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
  if ((int)uVar1 != 0) {
    FUN_10117884(*(int *)(param_1 + 0x10) +
                 (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),uVar1);
    iVar2 = FUN_100c1d50(uVar1,1);
    if (param_2 == iVar2) {
      uVar1 = FUN_100c1d50(uVar1,2);
      return uVar1;
    }
    iVar2 = FUN_100c1d50(uVar1,2);
    lVar3 = 2;
    while (iVar2 != 0) {
      iVar2 = FUN_100c1d50(uVar1,lVar3);
      if (param_2 == iVar2) {
        uVar1 = FUN_100c1d50(uVar1,lVar3 + 1);
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      iVar2 = FUN_100c1d50(uVar1,lVar3);
    }
  }
  return 0;
}

/* Address: 0x100c2c80 Size: 372 bytes */
long long FUN_100c2c80(int param_1,long long param_2,char param_3)

{
  long long uVar1;
  int iVar3;
  long long uVar2;
  
  if (param_3 == '\0') {
    iVar3 = FUN_100c1d50(param_2,1);
    if (iVar3 == 0) {
      uVar1 = FUN_100c2b78(param_1,param_2);
      iVar3 = (int)uVar1;
      while ((iVar3 == 0 &&
             (uVar2 = FUN_10117884(*(int *)(param_1 + 0x10) +
                                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20))
             , (int)uVar2 != 0))) {
        uVar1 = FUN_100c2b78(param_1,uVar2);
        iVar3 = (int)uVar1;
      }
    }
    else {
      FUN_10117884(*(int *)(param_1 + 0x10) +
                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),param_2);
      uVar1 = FUN_100c1d50(param_2,1);
    }
  }
  else {
    uVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                         (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
    if ((int)uVar1 == 0) {
      FUN_10117884(*(int *)(param_1 + 0x10) +
                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),param_2);
      uVar1 = FUN_100c1d50(param_2,1);
    }
    else {
      FUN_10117884(*(int *)(param_1 + 0x10) +
                   (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x18),uVar1);
      uVar1 = FUN_100c2b78(param_1,param_2);
    }
  }
  return uVar1;
}

/* Address: 0x100c2df4 Size: 80 bytes */
void FUN_100c2df4(int param_1)

{
  int uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_100c2c80(param_1,*(int *)(param_1 + 8),*(char *)(param_1 + 0xc));
    *(int *)(param_1 + 8) = uVar1;
  }
  return;
}

/* Address: 0x100c2e44 Size: 136 bytes */
void FUN_100c2e44(int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
  while (iVar1 != 0) {
    iVar1 = FUN_10117884(*(int *)(param_1 + 0x10) +
                         (int)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x20));
  }
  uVar2 = FUN_100c2c80(param_1,*(int *)(param_1 + 4),*(char *)(param_1 + 0xc));
  *(int *)(param_1 + 8) = uVar2;
  return;
}

/* Address: 0x100c2ecc Size: 128 bytes */
int * FUN_100c2ecc(int *param_1,int param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1c),
     param_1 != (int *)0x0)) {
    FUN_100c2824(param_1,0,0);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x33f));
    param_1[5] = param_2;
    param_1[6] = 1;
  }
  return param_1;
}
















/* Address: 0x100c2f4c Size: 108 bytes */
void FUN_100c2f4c(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116ba4;
    FUN_100c28bc(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}












/* Address: 0x100c2fb8 Size: 84 bytes */
void FUN_100c2fb8(int param_1)

{
  int uVar1;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar1 = FUN_10117884(*(int *)(param_1 + 0x14) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x28));
  *(int *)(param_1 + 8) = uVar1;
  return;
}

/* Address: 0x100c300c Size: 80 bytes */
void FUN_100c300c(int param_1)

{
  int uVar1;
  
  *(int *)(param_1 + 0x18) = 1;
  uVar1 = FUN_10117884(*(int *)(param_1 + 0x14) +
                       (int)*(short *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x28));
  *(int *)(param_1 + 8) = uVar1;
  return;
}

/* Address: 0x100c3064 Size: 172 bytes */
int * FUN_100c3064(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x5c),
     param_1 != (int *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x33d));
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    *(char *)(param_1 + 0x11) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(short *)(param_1 + 10) = 0;
    *(short *)((int)param_1 + 0x2a) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = param_1[8];
    param_1[0xd] = param_1[9];
    param_1[0xe] = param_1[10];
    param_1[0xf] = param_1[0xb];
  }
  return param_1;
}

/* Address: 0x100c3110 Size: 40 bytes */
void FUN_100c3110(void)

{
  FUN_100c3064(0);
  return;
}

/* Address: 0x100c3138 Size: 92 bytes */
void FUN_100c3138(int *param_1)

{
  int local_2c;
  
  FUN_100bf5e4(param_1,0x636c6970);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  **(int **)(local_2c + -0xeac) = param_1;
  return;
}

/* Address: 0x100c3194 Size: 320 bytes */
void FUN_100c3194(int *param_1,char param_2)

{
  int *puVar1;
  int iVar2;
  int local_14c;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  if (param_2 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x1d,param_1);
    if ((param_1[0x13] != 0) && (*(char *)(param_1 + 0x16) == '\0')) {
      FUN_10002658();
      local_28 = 0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      local_20 = *puVar1;
      *puVar1 = auStack_128;
      iVar2 = FUN_10000090(auStack_128);
      if (iVar2 == 0) {
        FUN_10117884(param_1[0x13] + (int)*(short *)(*(int *)param_1[0x13] + 0x6c8));
        *puVar1 = local_20;
      }
      else {
        if (local_24 == 0) {
          local_24 = 0x82000b;
        }
        FUN_10117884(**(int **)(local_14c + -0xedc) +
                     (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x4d8),local_28,
                     local_24);
      }
      *(char *)(param_1 + 0x16) = 1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
    }
  }
  return;
}

/* Address: 0x100c32d4 Size: 76 bytes */
void FUN_100c32d4(int param_1)

{
  int uVar1;
  int *puVar4;
  int uVar2;
  int uVar3;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x3c);
  puVar4 = (int *)FUN_10002298();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(int *)(param_1 + 0x30) = *puVar4;
  *(int *)(param_1 + 0x34) = uVar1;
  *(int *)(param_1 + 0x38) = uVar2;
  *(int *)(param_1 + 0x3c) = uVar3;
  return;
}

/* Address: 0x100c3320 Size: 208 bytes */
void FUN_100c3320(int *param_1)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  if (*(short *)(param_1 + 10) != *(short *)(param_1 + 0xe)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x38) + (int)param_1,0x1e,param_1);
    FUN_10117884(param_1[0x13] + (int)*(short *)(*(int *)param_1[0x13] + 0x248));
    param_1[0x13] = 0;
    if ((0 < *(short *)((int)param_1 + 0x3a)) && (iVar1 = FUN_100f1264(), iVar1 != 0)) {
      FUN_10001368();
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8));
  }
  return;
}

/* Address: 0x100c33f0 Size: 132 bytes */
long long FUN_100c33f0(int param_1,long long param_2,int *param_3)

{
  int uVar1;
  long long uVar2;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x40);
    *param_3 = uVar1;
    uVar2 = FUN_10117884((int)*(int **)(param_1 + 0x4c) +
                         (int)*(short *)(**(int **)(param_1 + 0x4c) + 0x6c0),param_2,uVar1);
    if ((int)uVar2 < 0) {
      FUN_100db158((short)uVar2,0);
    }
  }
  return uVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c3474(int *param_1) { }



































/* Address: 0x100c3544 Size: 104 bytes */
int FUN_100c3544(void)

{
  int iVar1;
  
  iVar1 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),200,0);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0xb7) = 1;
    *(char *)(iVar1 + 0x48) = 0;
    *(char *)(iVar1 + 0x49) = 0;
  }
  return iVar1;
}

/* Address: 0x100c35ac Size: 264 bytes */
void FUN_100c35ac(int *param_1)

{
  int *puVar1;
  int iVar2;
  int local_154;
  int local_130;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puRam10117370;
  *puRam10117370 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    local_130 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8));
    *puVar1 = local_24;
  }
  else {
    local_130 = param_1[0x12];
    if (local_28 == 0) {
      local_28 = 0x82000a;
    }
    FUN_10117884(**(int **)(local_154 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_154 + -0xedc) + 0x4d8),local_2c,local_28);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1f8),local_130,0);
  *(char *)(param_1 + 0x16) = 1;
  return;
}

/* Address: 0x100c36b4 Size: 104 bytes */
unsigned long long FUN_100c36b4(int param_1)

{
  unsigned long long uVar1;
  
  uVar1 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x4b8));
  if ((int)uVar1 == 0) {
    uVar1 = (unsigned long long)*(unsigned int *)(param_1 + 0x48);
  }
  FUN_100db26c(uVar1);
  return uVar1;
}

/* Address: 0x100c371c Size: 68 bytes */
void FUN_100c371c(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  }
  return;
}

/* Address: 0x100c3760 Size: 660 bytes */
void FUN_100c3760(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char auStack_150 [336];
  
  piVar2 = (int *)param_1[0x15];
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x300) + (int)piVar2);
    if (iVar1 == 0) {
      piVar2 = (int *)param_1[0x15];
    }
    else {
      piVar2 = (int *)FUN_10117884((int)*(int **)(param_1[0x15] + 0x24) +
                                   (int)*(short *)(**(int **)(param_1[0x15] + 0x24) + 0x128));
    }
    FUN_1010556c(auStack_150,piVar2);
    piVar3 = (int *)FUN_10105660(auStack_150);
    iVar1 = FUN_100ebf44(auStack_150);
    while (iVar1 != 0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2e8),piVar3);
      iVar1 = FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x668));
      if (iVar1 != 0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x328));
      }
      piVar3 = (int *)FUN_10105684(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2e0),param_2);
    iVar1 = FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x668));
    if (iVar1 != 0) {
      FUN_10117884((int)*(short *)(*param_2 + 800) + (int)param_2);
    }
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x380));
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x520),0);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x4d0));
    FUN_10117884(param_1[0x15] + (int)*(short *)(*(int *)param_1[0x15] + 0x760));
    piVar2 = (int *)param_1[0x12];
    *(char *)(param_1 + 0x16) =
         (piVar2 <= param_2 && (unsigned int)(piVar2 < param_2) <= (unsigned int)((int)param_2 - (int)piVar2)) -
         (piVar2 < param_2);
    FUN_101055f4(auStack_150,2);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd8),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x24,param_1);
  param_1[0x13] = (int)param_2;
  param_1[0x14] = param_3;
  return;
}

/* Address: 0x100c39f4 Size: 148 bytes */
void FUN_100c39f4(int param_1)

{
  int *ppuVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c0028(param_1);
  FUN_100f27d0(0x23,1);
  uVar2 = FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar1 - 0x3b7)) +
                       (int)*(short *)(**(int **)(*(int*)((char*)ppuVar1 - 0x3b7)) + 0x330),0);
  uVar3 = (unsigned long long)*(unsigned int *)(param_1 + 0x54);
  FUN_100f3348(0x23,0xfa,3,4,
               (uVar2 <= uVar3 && (unsigned long long)(uVar2 < uVar3) <= uVar3 - uVar2) - (uVar2 < uVar3));
  return;
}

/* Address: 0x100c3a88 Size: 152 bytes */
void FUN_100c3a88(int param_1,long long param_2)

{
  int *piVar1;
  int *ppuVar2;
  int iVar3;
  int **local_2c;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  ppuVar2 = 0 /* TVect base */;
  if ((piVar1 != (int *)0x0) && (*(char *)(param_1 + 0x44) == '\0')) {
    iVar3 = FUN_10117884((int)*(short *)(*piVar1 + 0x6b8) + (int)piVar1,param_2);
    ppuVar2 = local_2c;
    if (iVar3 != 0) {
      *(char *)(param_1 + 0x44) = 1;
      *(int *)(param_1 + 0x40) = (int)param_2;
    }
  }
  if (*(char *)(*(int *)(*(int*)((char*)ppuVar2 - 0x3b7)) + 0x56) == '\0') {
    FUN_100f27d0(0x69,*(char *)(param_1 + 0x44));
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c3b20(int param_1,int param_2) { }



































































/* Address: 0x100c3bf4 Size: 36 bytes */
void FUN_100c3bf4(void)

{
  FUN_10001308();
  return;
}

/* Address: 0x100c3c18 Size: 124 bytes */
short FUN_100c3c18(long long param_1,long long param_2,int *param_3)

{
  long long uVar1;
  long long uVar2;
  short uVar3;
  
  uVar1 = FUN_100ef9b8(param_3);
  uVar2 = FUN_10001c20(param_3);
  uVar3 = FUN_10002c88(uVar2,param_2,*param_3);
  FUN_10001b60(param_3,uVar1);
  return uVar3;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c3ce8(void) { }







/* Address: 0x100c3dd0 Size: 40 bytes */
void FUN_100c3dd0(void)

{
  FUN_100c3d2c(0);
  return;
}

/* Address: 0x100c3e70 Size: 112 bytes */
void FUN_100c3e70(int *param_1)

{
  if (*(char *)((int)param_1 + 0x1f) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1);
    FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  }
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100c3ee0 Size: 128 bytes */
void FUN_100c3ee0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x20) == *(int *)(*piRam101169f4 + 0x4c)) {
      *(int *)(*piRam101169f4 + 0x50) = 0;
    }
    else {
      FUN_10117884((int)*(int **)(param_1 + 0x20) +
                   (int)*(short *)(**(int **)(param_1 + 0x20) + 0x248));
      *(int *)(param_1 + 0x20) = 0;
    }
  }
  return;
}

/* Address: 0x100c3f60 Size: 140 bytes */
void FUN_100c3f60(int param_1)

{
  if (((*(int *)(param_1 + 0x24) != 0) &&
      (*(int *)(param_1 + 0x24) != *(int *)(*piRam101169f4 + 0x4c))) &&
     ((*(int *)(param_1 + 0x28) == 0 || (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x18))))) {
    FUN_10117884((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x248));
    *(int *)(param_1 + 0x24) = 0;
  }
  return;
}

/* Address: 0x100c4020 Size: 164 bytes */
void FUN_100c4020(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x148));
  if ((iVar2 != 0) && (param_1[5] != 0)) {
    if (*(char *)(param_1 + 7) == '\0') {
      uVar1 = 0x65;
    }
    else {
      uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x150) + (int)param_1);
    }
    FUN_10117884(param_1[5] + (int)*(short *)(*(int *)param_1[5] + 0x38),uVar1,param_1);
  }
  return;
}

/* Address: 0x100c40c4 Size: 132 bytes */
void FUN_100c40c4(int *param_1)

{
  int iVar1;
  int local_2c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140));
  if ((iVar1 != 0) &&
     ((FUN_100f4f94(param_1[6],param_1), *(char *)((int)param_1 + 0x1f) != '\0' ||
      (param_1[1] == 0x69)))) {
    FUN_100f4f94(**(int **)(local_2c + -0xeac),param_1);
  }
  return;
}

/* Address: 0x100c4148 Size: 244 bytes */
void FUN_100c4148(int param_1,int param_2,int param_3,int param_4)

{
  if (((param_2 == 0x24) && (param_3 == *piRam101169f4)) && (*(int *)(param_1 + 4) == 0x69)) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x228));
    return;
  }
  if (param_2 == 0x23) {
    if ((param_3 == *piRam101169f4) && (param_4 == *(int *)(param_1 + 0x24))) {
      *(int *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x28) = 0;
      return;
    }
    if ((param_3 == *piRam101169f4) && (param_4 == *(int *)(param_1 + 0x20))) {
      *(int *)(param_1 + 0x20) = 0;
      return;
    }
  }
  if (((param_2 == 0x1c) && (param_3 == *(int *)(param_1 + 0x18))) || (param_2 == 0x1e)) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x228));
  }
  return;
}

/* Address: 0x100c423c Size: 56 bytes */
void FUN_100c423c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  return;
}

/* Address: 0x100c4280 Size: 76 bytes */
void FUN_100c4280(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x220),param_1);
  }
  return;
}

/* Address: 0x100c42d4 Size: 136 bytes */
void FUN_100c42d4(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = piRam101169f4;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8));
  param_1[9] = *(int *)(*piVar1 + 0x4c);
  param_1[10] = param_1[6];
  if ((int)param_2 != 0) {
    piVar1 = (int *)*piVar1;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x1f8),param_2);
    param_1[8] = (int)param_2;
  }
  return;
}

/* Address: 0x100c435c Size: 144 bytes */
void FUN_100c435c(int *param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),param_1[8]);
  }
  else if (param_1[9] != 0) {
    piVar1 = (int *)*piRam101169f4;
    if (piVar1[0x14] == param_1[6]) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x1f8) + (int)piVar1,param_1[9],param_1[10]);
    }
  }
  return;
}

/* Address: 0x100c4520 Size: 40 bytes */
void FUN_100c4520(void)

{
  FUN_100c43fc(0);
  return;
}

/* Address: 0x100c4548 Size: 92 bytes */
void FUN_100c4548(int param_1,long long param_2,long long param_3,char param_4,
                 char param_5,long long param_6,int param_7,int param_8)

{
  int uVar1;
  int *in_stack_00000038;
  
  FUN_100c3df8(param_1,param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 0x30) = param_7;
  *(int *)(param_1 + 0x40) = param_8;
  uVar1 = in_stack_00000038[1];
  *(int *)(param_1 + 0x34) = *in_stack_00000038;
  *(int *)(param_1 + 0x38) = uVar1;
  return;
}

/* Address: 0x100c45a4 Size: 76 bytes */
void FUN_100c45a4(int param_1,long long param_2)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x40) +
                 (int)*(short *)(**(int **)(param_1 + 0x40) + 0x778),param_2,1);
  }
  return;
}

/* Address: 0x100c45f0 Size: 92 bytes */
unsigned long long FUN_100c45f0(int param_1)

{
  int *piVar1;
  unsigned long long uVar2;
  long long lVar3;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 == (int *)0x0) {
    lVar3 = FUN_10000240();
    uVar2 = (unsigned long long)(lVar3 == 0);
  }
  else {
    uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x6f0));
  }
  return uVar2;
}

/* Address: 0x100c464c Size: 124 bytes */
void FUN_100c464c(long long param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x2b8),
                       param_1 + 0x34,*puRam10116a6c);
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0x18);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x220) + (int)piVar1);
    }
  }
  return;
}

/* Address: 0x100c46c8 Size: 80 bytes */
void FUN_100c46c8(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x6f8),param_2);
  }
  return;
}

/* Address: 0x100c4718 Size: 84 bytes */
void FUN_100c4718(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x700),param_2);
  }
  return;
}

/* Address: 0x100c476c Size: 168 bytes */
int FUN_100c476c(int param_1,char param_2,long long param_3,long long param_4,long long param_5,
                char param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x708),param_2,param_3,param_4,param_5,
                 param_6);
  }
  if ((param_2 == '\x02') &&
     ((piVar1 = *(int **)(param_1 + 0x30), piVar1 == (int *)0x0 ||
      (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x538) + (int)piVar1,param_5), iVar2 == 0))))
  {
    param_1 = 0;
  }
  return param_1;
}

/* Address: 0x100c4814 Size: 112 bytes */
void FUN_100c4814(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_10000198(*puRam10117808);
    FUN_100001f8(*(int *)(param_1 + 0x78));
    FUN_100ef580(*(int *)(param_1 + 0x78));
    *(int *)(param_1 + 0x78) = 0;
  }
  return;
}

/* Address: 0x100c48a0 Size: 268 bytes */
void FUN_100c48a0(int *param_1)

{
  int uVar1;
  int iVar3;
  long long uVar2;
  int local_2c;
  
  if (param_1[0xc] == 0) {
    if (param_1[0x1e] == 0) {
      iVar3 = FUN_100f1640(0x6c);
      param_1[0x1e] = iVar3;
      FUN_10000180(param_1[0x1e]);
    }
    uVar2 = FUN_100016b0();
    FUN_100005a0(uVar2,*(int *)(param_1[0x1e] + 0x18));
    iVar3 = param_1[0x1e];
    uVar1 = *(int *)(**(int **)(iVar3 + 0x18) + 6);
    *(int *)(iVar3 + 0x10) = *(int *)(**(int **)(iVar3 + 0x18) + 2);
    *(int *)(iVar3 + 0x14) = uVar1;
    FUN_10117884(**(int **)(local_2c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x4f8));
    FUN_10000198(param_1[0x1e]);
  }
  else {
    if (param_1[0x1e] != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x180) + (int)param_1);
    }
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  }
  return;
}

/* Address: 0x100c49c8 Size: 192 bytes */
void FUN_100c49c8(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_1[0x1e] = *(int *)(param_2 + 0x78);
    *(char *)(param_1 + 0x11) = *(char *)(param_2 + 0x44);
    param_1[0x1f] = *(int *)(param_2 + 0x7c);
    *(char *)(param_1 + 0x11) = *(char *)(param_2 + 0x44);
    iVar1 = *(int *)(param_2 + 0x4c);
    param_1[0x12] = *(int *)(param_2 + 0x48);
    param_1[0x13] = iVar1;
    iVar1 = *(int *)(param_2 + 0x54);
    param_1[0x14] = *(int *)(param_2 + 0x50);
    param_1[0x15] = iVar1;
    iVar1 = *(int *)(param_2 + 0x5c);
    param_1[0x16] = *(int *)(param_2 + 0x58);
    param_1[0x17] = iVar1;
    iVar1 = *(int *)(param_2 + 100);
    param_1[0x18] = *(int *)(param_2 + 0x60);
    param_1[0x19] = iVar1;
    iVar1 = *(int *)(param_2 + 0x6c);
    param_1[0x1a] = *(int *)(param_2 + 0x68);
    param_1[0x1b] = iVar1;
    iVar1 = *(int *)(param_2 + 0x74);
    param_1[0x1c] = *(int *)(param_2 + 0x70);
    param_1[0x1d] = iVar1;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  return;
}

/* Address: 0x100c4a88 Size: 196 bytes */
void FUN_100c4a88(int *param_1,char param_2)

{
  int *piVar1;
  int local_28;
  int iStack_24;
  char auStack_20 [32];
  
  if (*(char *)((int)param_1 + 0x3d) != '\0') {
    piVar1 = (int *)param_1[0xc];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x600),auStack_20);
      FUN_100e1264(param_1 + 0x16,auStack_20);
    }
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    local_28 = param_1[0x16];
    iStack_24 = param_1[0x17];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),*(char *)(param_1 + 0x11),
                 param_1 + 0x12,param_1 + 0x14,&local_28,param_2);
    param_1[0x16] = local_28;
    param_1[0x17] = iStack_24;
  }
  return;
}

/* Address: 0x100c4b4c Size: 232 bytes */
void FUN_100c4b4c(int *param_1,char param_2,char param_3)

{
  FUN_10000030();
  FUN_10002130(10);
  if (param_3 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),*(char *)(param_1 + 0x11),
                 param_1 + 0x18,param_1 + 0x1a,param_1 + 0x1c,param_2,0);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),*(char *)(param_1 + 0x11),
                 param_1 + 0x12,param_1 + 0x14,param_1 + 0x16,param_2,param_3);
    if (param_2 != '\0') {
      param_1[0x18] = param_1[0x12];
      param_1[0x19] = param_1[0x13];
      param_1[0x1a] = param_1[0x14];
      param_1[0x1b] = param_1[0x15];
      param_1[0x1c] = param_1[0x16];
      param_1[0x1d] = param_1[0x17];
    }
  }
  return;
}

/* Address: 0x100c4c34 Size: 392 bytes */
int * FUN_100c4c34(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar2 = param_1[0xc];
  local_30 = param_1[0x12];
  iStack_2c = param_1[0x13];
  local_38 = param_1[0x14];
  iStack_34 = param_1[0x15];
  local_40 = param_1[0x16];
  iStack_3c = param_1[0x17];
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),
                               *(char *)(param_1 + 0x11),&local_30,&local_38,&local_40,param_2
                              );
  param_1[0x12] = local_30;
  param_1[0x13] = iStack_2c;
  param_1[0x14] = local_38;
  param_1[0x15] = iStack_34;
  param_1[0x16] = local_40;
  param_1[0x17] = iStack_3c;
  if (piVar1 == param_1) {
    if (param_1[0xc] != iVar2) {
      FUN_10117884((int)*(short *)(*param_1 + 400) + (int)param_1,param_1);
    }
  }
  else {
    if (piVar1 == (int *)0x0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x180));
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 400),param_1);
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
    if (iVar2 != 0) {
      iVar2 = param_1[6];
      if ((iVar2 != 0) && (*(int **)(iVar2 + 0x1c) == param_1)) {
        *(int *)(iVar2 + 0x1c) = 0;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    }
  }
  return piVar1;
}

/* Address: 0x100c4dbc Size: 304 bytes */
int * FUN_100c4dbc(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iStack00000020;
  
  *(char *)(param_1 + 0x11) = 0;
  *(char *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  iVar1 = param_2[1];
  param_1[0x12] = *param_2;
  param_1[0x13] = iVar1;
  iVar1 = param_2[1];
  param_1[0x14] = *param_2;
  param_1[0x15] = iVar1;
  piVar2 = param_1 + 0x16;
  iVar1 = param_2[1];
  *piVar2 = *param_2;
  param_1[0x17] = iVar1;
  param_1[0x1f] = param_3;
  iStack00000020 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),1);
  param_1[0x12] = *piVar2;
  param_1[0x13] = param_1[0x17];
  param_1[0x14] = *piVar2;
  param_1[0x15] = param_1[0x17];
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),1);
  if (piVar2 != (int *)0x0) {
    piVar2[0x12] = piVar2[0x16];
    piVar2[0x13] = piVar2[0x17];
    piVar2[0x14] = piVar2[0x16];
    piVar2[0x15] = piVar2[0x17];
    FUN_10117884((int)*(short *)(*piVar2 + 0x198) + (int)piVar2,1,1);
  }
  return piVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
int * FUN_100c4eec(int *param_1) { return 0; }


































































































/* Address: stubbed - had compile errors on 64-bit */
int * FUN_100c52b4(int *param_1) { return 0; }


































































































































/* Address: 0x100c5444 Size: 116 bytes */
int * FUN_100c5444(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x38),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x335));
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  return param_1;
}

/* Address: 0x100c54b8 Size: 40 bytes */
void FUN_100c54b8(void)

{
  FUN_100c5444(0);
  return;
}

/* Address: 0x100c54e0 Size: 44 bytes */
void FUN_100c54e0(void)

{
  FUN_100c3df8();
  return;
}

/* Address: 0x100c550c Size: 76 bytes */
void FUN_100c550c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  FUN_100c3e70(param_1);
  return;
}







/* Address: 0x100c5558 Size: 72 bytes */
void FUN_100c5558(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x30));
  *(int *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x34));
  *(int *)(param_1 + 0x34) = uVar1;
  return;
}

/* Address: 0x100c55a8 Size: 112 bytes */
int * FUN_100c55a8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x3c),
     param_1 != (int *)0x0)) {
    FUN_100c5444(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x334));
    *(char *)(param_1 + 0xe) = 0;
  }
  return param_1;
}















/* Address: 0x100c5618 Size: 40 bytes */
void FUN_100c5618(void)

{
  FUN_100c55a8(0);
  return;
}

/* Address: 0x100c5640 Size: 44 bytes */
void FUN_100c5640(void)

{
  FUN_100c54e0();
  return;
}






/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c566c(void) { }



















































































































/* Address: 0x100c579c Size: 156 bytes */
void FUN_100c579c(int *param_1)

{
  int local_18;
  int uStack_14;
  int local_10;
  int uStack_c;
  
  if (param_1[0xc] != 0) {
    if (param_1[0xd] != 0) {
      local_10 = *(int *)(param_1[0xc] + 4);
      uStack_c = *(int *)(param_1[0xc] + 8);
      local_18 = *(int *)(param_1[0xd] + 4);
      uStack_14 = *(int *)(param_1[0xd] + 8);
      FUN_100037e0(&local_10,&local_18,0,0);
      FUN_10117884((int)*(short *)(*param_1 + 0x158) + (int)param_1);
    }
  }
  return;
}

/* Address: 0x100c5838 Size: 224 bytes */
void FUN_100c5838(int *param_1)

{
  int *puVar1;
  int iVar2;
  int local_14c;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  if (*(char *)(param_1 + 0xe) != '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puRam10117370;
    *puRam10117370 = auStack_128;
    iVar2 = FUN_10000090(auStack_128);
    if (iVar2 == 0) {
      FUN_100ef088(0xfffffffffffffffe,**(int **)(local_14c + -0xe48),
                   **(int **)(local_14c + -0xed4));
      FUN_100db2f4();
      *puVar1 = local_20;
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),local_28,local_24);
      FUN_100db158(local_28,local_24);
    }
  }
  FUN_100c4280(param_1);
  return;
}

/* Address: 0x100c5918 Size: 200 bytes */
void FUN_100c5918(int param_1,short param_2)

{
  char local_110 [272];
  
  if ((*(int *)(param_1 + 0x34) != 0) && (*(int *)(*(int *)(param_1 + 0x34) + 4) != 0x6e756c6c)) {
    local_110[0] = 0;
    FUN_100d8c30(param_2,0x80,local_110);
    FUN_10117884((int)*(int **)(param_1 + 0x34) +
                 (int)*(short *)(**(int **)(param_1 + 0x34) + 0x160),0x6572726e,param_2);
    FUN_10117884((int)*(int **)(param_1 + 0x34) +
                 (int)*(short *)(**(int **)(param_1 + 0x34) + 0x168),0x65727273,local_110);
  }
  return;
}

/* Address: 0x100c59e8 Size: 112 bytes */
int * FUN_100c59e8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x3c),
     param_1 != (int *)0x0)) {
    FUN_100c5444(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x332));
    *(char *)(param_1 + 0xe) = 0;
  }
  return param_1;
}

/* Address: 0x100c5a58 Size: 40 bytes */
void FUN_100c5a58(void)

{
  FUN_100c59e8(0);
  return;
}

/* Address: 0x100c5a80 Size: 76 bytes */
long long FUN_100c5a80(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x30) +
                         (int)*(short *)(**(int **)(param_1 + 0x30) + 200));
  }
  return uVar1;
}

/* Address: 0x100c5acc Size: 344 bytes */
long long FUN_100c5acc(int *param_1)

{
  long long uVar1;
  unsigned int uVar3;
  long long uVar2;
  int local_34;
  
  if (param_1[0xc] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar3 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0));
      if ((uVar3 & 0xf) == 3) {
        uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1);
        FUN_10117884((int)*(short *)(*param_1 + 0x168) + (int)param_1,uVar2);
      }
      else {
        uVar3 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0));
        if ((uVar3 & 0xf) == 2) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
          FUN_10117884(**(int **)(local_34 + -0xedc) +
                       (int)*(short *)(*(int *)**(int **)(local_34 + -0xedc) + 0x4a0),param_1);
          uVar1 = 0;
        }
      }
    }
    else {
      uVar3 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0));
      if (((uVar3 & 0xf) == 2) && (param_1[0xd] == 0)) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

/* Address: 0x100c5c24 Size: 84 bytes */
long long FUN_100c5c24(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    *(char *)(param_1 + 0x38) = 1;
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x30) +
                         (int)*(short *)(**(int **)(param_1 + 0x30) + 0xb0));
  }
  return uVar1;
}

/* Address: 0x100c5c80 Size: 120 bytes */
void FUN_100c5c80(int *param_1)

{
  unsigned int uVar1;
  
  if ((param_1[0xc] != 0) &&
     (uVar1 = FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0xd0)),
     (uVar1 & 0xf) == 1)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1);
  }
  return;
}

/* Address: 0x100c5cf8 Size: 204 bytes */
void FUN_100c5cf8(void)

{
  int uVar1;
  int uVar2;
  int *ppuVar3;
  
  uVar2 = uRam10116bc8;
  uVar1 = uRam10116a84;
  ppuVar3 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116a84,*puRam10116bdc,0x30,uRam10116be0,uRam10116be4);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x339)),*(int *)(*(int*)((char*)ppuVar3 - 0x32e)),0x84,(*(int*)((char*)ppuVar3 - 0x32d)),uVar1);
  FUN_100c1c8c(uVar2,*(int *)(*(int*)((char*)ppuVar3 - 0x32c)),0x38,(*(int*)((char*)ppuVar3 - 0x32b)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x37d)),*(int *)(*(int*)((char*)ppuVar3 - 0x32a)),0x3c,(*(int*)((char*)ppuVar3 - 0x329)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x333)),*(int *)(*(int*)((char*)ppuVar3 - 0x328)),0x3c,(*(int*)((char*)ppuVar3 - 0x327)),uVar2);
  return;
}

/* FUN_100c5dcc defined elsewhere */


/* Address: 0x100c5e34 Size: 40 bytes */
void FUN_100c5e34(void)

{
  FUN_100c5dcc(0);
  return;
}

/* Address: 0x100c5e5c Size: 440 bytes */
void FUN_100c5e5c(int param_1)

{
  int *piVar1;
  int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = puRam10117370;
  piVar1 = *(int **)(param_1 + 0x18);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar3 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x230));
  }
  if (piVar3 != (int *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puVar2;
    *puVar2 = auStack_128;
    iVar4 = FUN_10000090(auStack_128);
    if (iVar4 == 0) {
      if (*(char *)(piVar3 + 7) == '\0') {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x108));
      }
      else {
        FUN_10117884((int)*(short *)(*piVar3 + 0x110) + (int)piVar3);
      }
      *puVar2 = local_20;
    }
    else {
      iVar4 = piVar3[1];
      *(int *)(*(int *)(param_1 + 0x18) + 0x1c) = 0;
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x128));
      iVar5 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xa8));
      if (iVar5 != 0) {
        piVar3 = (int *)FUN_100f57c8(piVar3);
      }
      FUN_100db22c(local_28,local_24,(short)iVar4);
      FUN_100db158(local_28,local_24);
    }
    if (*(char *)((int)piVar3 + 0x1f) != '\0') {
      FUN_10117884((int)*(short *)(*piVar3 + 0x138) + (int)piVar3);
    }
    *(int *)(piVar3 + 7) = *(char *)(piVar3 + 7) == '\0';
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x118));
  }
  return;
}

/* Address: 0x100c6014 Size: 48 bytes */
void FUN_100c6014(void)

{
  FUN_100c3df8();
  return;
}

/* Address: 0x100c60bc Size: 40 bytes */
void FUN_100c60bc(void)

{
  FUN_100c604c(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c60e4(void) { }
















/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c6108(void) { }

















/* Address: 0x100c6134 Size: 68 bytes */
void FUN_100c6134(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x1c) = uVar1;
  FUN_100d978c(param_1);
  return;
}

/* Address: 0x100c6268 Size: 76 bytes */
void FUN_100c6268(int *param_1)

{
  FUN_100da3f0(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x210));
  return;
}

/* Address: 0x100c62b4 Size: 196 bytes */
void FUN_100c62b4(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_2c;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x230));
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0x140) + (int)piVar2), iVar3 != 0)) {
    cVar1 = *(char *)(piVar2 + 7);
    iVar3 = piVar2[1];
    FUN_100f27d0(0x65,1);
    FUN_10117884(**(int **)(local_2c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x480),cVar1 != '\0',iVar3)
    ;
  }
  return;
}

/* Address: 0x100c637c Size: 740 bytes */
void FUN_100c637c(int *param_1,int *param_2)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  int iVar4;
  int *piStack0000001c;
  int local_264;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar2 = puRam10117370;
  if (param_2 != (int *)0x0) {
    piStack0000001c = param_2;
    iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x148));
    if ((iVar3 != 0) ||
       (iVar3 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x140)),
       iVar3 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
    }
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_2c = *puVar2;
    *puVar2 = auStack_134;
    iVar3 = FUN_10000090(auStack_134);
    if (iVar3 == 0) {
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x100));
      *(char *)(piStack0000001c + 7) = 1;
      *puVar2 = local_2c;
    }
    else {
      piVar1 = (int *)**(int **)(local_264 + -0xeac);
      if (piVar1[0x13] == piStack0000001c[8]) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x1f8),piStack0000001c[9],
                     piStack0000001c[10]);
        piStack0000001c[9] = 0;
      }
      iVar3 = piStack0000001c[1];
      if (piStack0000001c == (int *)param_1[7]) {
        param_1[7] = 0;
      }
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x128));
      iVar4 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0xa8));
      if (iVar4 != 0) {
        piStack0000001c = (int *)FUN_100f57c8(piStack0000001c);
      }
      FUN_100db22c(local_34,local_30,(short)iVar3);
      FUN_100db158(local_34,local_30);
    }
    if (piStack0000001c != (int *)0x0) {
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x118));
    }
    iVar3 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x140));
    if (iVar3 == 0) {
      iVar3 = FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0xa8));
      if (iVar3 == 0) {
        FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x128));
      }
      else {
        FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x128));
        FUN_100f57c8(piStack0000001c);
      }
    }
    else {
      param_1[7] = (int)piStack0000001c;
      FUN_10117884((int)piStack0000001c + (int)*(short *)(*piStack0000001c + 0x120));
    }
  }
  return;
}

/* Address: 0x100c66a8 Size: 176 bytes */
void FUN_100c66a8(int param_1)

{
  int *piVar1;
  int iVar2;
  int uVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (*(char *)(piVar1 + 7) != '\0') {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8));
    }
    FUN_10117884((int)*(int **)(param_1 + 0x1c) +
                 (int)*(short *)(**(int **)(param_1 + 0x1c) + 0x128));
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x1c) +
                         (int)*(short *)(**(int **)(param_1 + 0x1c) + 0xa8));
    if (iVar2 != 0) {
      uVar3 = FUN_100f57c8(*(int *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x1c) = uVar3;
    }
  }
  return;
}

/* Address: 0x100c6758 Size: 92 bytes */
void FUN_100c6758(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116c0c,*puRam10116c18,0x30,uRam10116c1c,uRam10116a84);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x372)),*(int *)ppuVar1[-800],0x20,ppuVar1[-799],(*(int*)((char*)ppuVar1 - 0x31e)));
  return;
}

/* Address: 0x100c67b4 Size: 112 bytes */
int * FUN_100c67b4(int *param_1,int param_2,char param_3)

{
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_100f56e4(8);
    if (param_1 != (int *)0x0) {
      *param_1 = param_2;
      *(char *)(param_1 + 1) = param_3;
    }
  }
  else {
    *param_1 = param_2;
    *(char *)(param_1 + 1) = param_3;
  }
  return param_1;
}

/* Address: 0x100c6824 Size: 208 bytes */
char FUN_100c6824(int *param_1)

{
  int iVar1;
  char uVar2;
  
  *(char *)((int)param_1 + 6) = 0;
  if (*(int *)(*param_1 + 0xa8) == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 1) == '\0') ||
       (iVar1 = FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x3a8)), iVar1 == 0)) {
      iVar1 = FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x838));
      *(char *)((int)param_1 + 5) = (char)iVar1;
      if (iVar1 != 0) {
        FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x840),0);
      }
    }
    else {
      *(char *)((int)param_1 + 6) = 1;
    }
    uVar2 = *(char *)((int)param_1 + 6);
  }
  return uVar2;
}

/* Address: 0x100c68f4 Size: 152 bytes */
void FUN_100c68f4(int *param_1)

{
  int iVar1;
  
  if ((((*(int *)(*param_1 + 0xa8) != 0) && (*(char *)((int)param_1 + 6) == '\0')) &&
      (*(char *)((int)param_1 + 5) != '\0')) &&
     (iVar1 = FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x838)), iVar1 == 0)) {
    FUN_10117884(*param_1 + (int)*(short *)(*(int *)*param_1 + 0x840),1);
  }
  return;
}

/* Address: 0x100c698c Size: 96 bytes */
void FUN_100c698c(long long param_1,short param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10000a80();
  FUN_100db26c();
  FUN_10117884((int)*(short *)(*piVar1 + 0x858) + (int)piVar1,param_2);
  return;
}

/* Address: 0x100c69f4 Size: 128 bytes */
int * FUN_100c69f4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x88),
     param_1 != (int *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x31c));
    param_1[0x21] = 0;
    *(char *)((int)param_1 + 0x3e) = 1;
    *(char *)((int)param_1 + 0x3d) = 0;
  }
  return param_1;
}

/* Address: 0x100c6a74 Size: 40 bytes */
void FUN_100c6a74(void)

{
  FUN_100c69f4(0);
  return;
}

/* Address: 0x100c6a9c Size: 128 bytes */
void FUN_100c6a9c(int param_1,int *param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x5f0),1);
  FUN_100c4548(param_1,400,param_2,0,0,0,param_2,uVar1);
  *(int **)(param_1 + 0x84) = param_2;
  return;
}

/* Address: 0x100c6be4 Size: 40 bytes */
void FUN_100c6be4(void)

{
  FUN_100c6b2c(0);
  return;
}

/* Address: 0x100c6c0c Size: 132 bytes */
void FUN_100c6c0c(int param_1,int param_2,long long param_3,long long param_4,char param_5,
                 char param_6,int *param_7)

{
  int uVar1;
  int uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(int *)(param_2 + 0x28);
  }
  FUN_10105b08(param_1,uVar2,param_2,param_3,param_4,param_5,param_6);
  uVar2 = param_7[1];
  uVar1 = param_7[2];
  *(int *)(param_1 + 0x98) = *param_7;
  *(int *)(param_1 + 0x9c) = uVar2;
  *(int *)(param_1 + 0xa0) = uVar1;
  return;
}

/* Address: 0x100c6c9c Size: 516 bytes */
void FUN_100c6c9c(int *param_1,int *param_2)

{
  int iVar1;
  int *puVar2;
  int iVar4;
  long long uVar3;
  char uVar5;
  int local_158;
  int iStack_154;
  int iStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar2 = puRam10117370;
  FUN_1010937c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puVar2;
  *puVar2 = auStack_138;
  iVar4 = FUN_10000090(auStack_138);
  if (iVar4 == 0) {
    iVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x20] = iVar4;
    iVar4 = *param_1;
    iVar1 = *param_2;
    uVar3 = FUN_10117884((int)*(short *)(iVar1 + 0xf0) + (int)param_2,iVar4,iVar1,
                         *(int *)(iVar1 + 0xf4));
    FUN_10117884((int)*(short *)(iVar4 + 0x748) + (int)param_1,uVar3,0);
    iVar4 = *param_1;
    iVar1 = *param_2;
    uVar3 = FUN_10117884((int)*(short *)(iVar1 + 0xf0) + (int)param_2,iVar1,
                         *(int *)(iVar1 + 0xf4));
    FUN_10117884((int)*(short *)(iVar4 + 0x738) + (int)param_1,uVar3,0);
    uVar5 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)((int)param_1 + 0x86) = uVar5;
    FUN_10117884((int)*(short *)(*param_2 + 0x128) + (int)param_2,&local_148);
    param_1[0x22] = local_148;
    param_1[0x23] = iStack_144;
    param_1[0x24] = iStack_140;
    param_1[0x25] = iStack_13c;
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x29) = (short)uVar3;
    if ((int)uVar3 != -1) {
      FUN_100f06dc(uVar3,&local_158);
      param_1[0x26] = local_158;
      param_1[0x27] = iStack_154;
      param_1[0x28] = iStack_150;
    }
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0xa6) = uVar5;
    *puVar2 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_38,local_34);
  }
  return;
}

/* Address: 0x100c6ea0 Size: 256 bytes */
void FUN_100c6ea0(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0x80));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x84));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x85));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x86));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),param_1 + 0x88);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xa4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xa6));
  return;
}

/* Address: 0x100c6fa0 Size: 144 bytes */
void FUN_100c6fa0(int param_1,long long param_2)

{
  long long uVar1;
  char auStack_20 [8];
  char auStack_18 [24];
  
  FUN_10107758(param_1,param_2);
  if (*(char *)(param_1 + 0x86) == '\0') {
    FUN_100e1a64(auStack_18,param_2);
    FUN_100e10f8(auStack_20,auStack_18,param_1 + 0x34);
    uVar1 = FUN_100e1580(param_1 + 0x88,1);
    FUN_100e1180(uVar1,auStack_20);
  }
  return;
}

/* Address: 0x100c7030 Size: 92 bytes */
void FUN_100c7030(int *param_1,long long param_2)

{
  char auStack_18 [24];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_18);
  FUN_100e1aac(auStack_18,param_2);
  return;
}

/* Address: 0x100c708c Size: 408 bytes */
void FUN_100c708c(int *param_1,int *param_2)

{
  long long uVar1;
  long long uVar2;
  char local_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  short local_54;
  short local_52;
  char auStack_4c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_4c);
  uVar1 = FUN_100e1580(param_1 + 0x22,1);
  uVar2 = FUN_100e1580(auStack_4c,1);
  FUN_100e10f8(&local_64,uVar2,uVar1);
  uVar1 = FUN_100e1580(param_1 + 0x22,0);
  uVar2 = FUN_100e1580(auStack_4c,0);
  FUN_100e10b0(&local_6c,uVar2,uVar1);
  local_3c = local_6c;
  local_38 = local_68;
  local_34 = local_64;
  local_30 = local_60;
  *param_2 = local_6c;
  param_2[1] = local_68;
  param_2[2] = local_64;
  param_2[3] = local_60;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),local_70);
  if (((long long)local_70[0] & 0x80U) != 0) {
    FUN_100b02d0(&local_54);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),&local_54);
    local_5c = (int)local_54;
    local_58 = (int)local_52;
    uVar1 = FUN_100e1580(param_2,1);
    FUN_100e11a4(uVar1,&local_5c);
  }
  return;
}

/* Address: 0x100c7224 Size: 156 bytes */
void FUN_100c7224(int *param_1)

{
  int local_4c;
  char auStack_28 [8];
  char auStack_20 [32];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,auStack_28);
  FUN_10002118((unsigned long long)*(unsigned int *)(local_4c + -0xb0) + 0xb2);
  FUN_10002130(0xb);
  FUN_100b0578(auStack_28);
  FUN_10002148();
  return;
}

/* Address: 0x100c72c0 Size: 196 bytes */
void FUN_100c72c0(int *param_1,char param_2,char param_3)

{
  int *puVar1;
  
  puVar1 = puRam101177b4;
  if (param_2 != *(char *)((int)param_1 + 0x85)) {
    *(char *)((int)param_1 + 0x85) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*puVar1,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*puVar1,0x75,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c7384(int *param_1,long long param_2) { }




























/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c73f0(int *param_1,int param_2) { }



































/* Address: 0x100c74b4 Size: 120 bytes */
void FUN_100c74b4(int *param_1)

{
  char auStack_8 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
  FUN_100007e0(8,auStack_8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
  return;
}

/* Address: 0x100c752c Size: 108 bytes */
int FUN_100c752c(int param_1)

{
  int iVar1;
  int local_18;
  int uStack_14;
  int uStack_10;
  
  iVar1 = FUN_1010900c(param_1);
  if (iVar1 != 0) {
    local_18 = *(int *)(param_1 + 0x98);
    uStack_14 = *(int *)(param_1 + 0x9c);
    uStack_10 = *(int *)(param_1 + 0xa0);
    FUN_100f0788(&local_18);
    FUN_10000030();
  }
  return iVar1 != 0;
}

/* Address: 0x100c7598 Size: 128 bytes */
void FUN_100c7598(int *param_1)

{
  char auStack_28 [8];
  char auStack_20 [32];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,auStack_28);
  FUN_100b0578(auStack_28);
  FUN_10001da0();
  return;
}

/* Address: 0x100c7618 Size: 220 bytes */
void FUN_100c7618(int *param_1,char param_2,char param_3)

{
  int *puVar1;
  int iVar2;
  
  puVar1 = puRam101177c0;
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*puVar1,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*puVar1,0x7a,0);
    }
    if ((param_3 != '\0') &&
       (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x678)), iVar2 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}

/* Address: 0x100c76f4 Size: 104 bytes */
void FUN_100c76f4(int *param_1,long long param_2,char param_3)

{
  if ((*(char *)((int)param_1 + 0x86) != '\0') && (FUN_100e1630(param_1 + 0x22), param_3 != '\0')) {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x100c775c Size: 80 bytes */
void FUN_100c775c(int *param_1,int *param_2,char param_3)

{
  unsigned int uVar1;
  
  uVar1 = param_2[1];
  *(int *)((int)param_1 + 0x9e) = *param_2;
  *(unsigned int *)((int)param_1 + 0xa2) = uVar1 & 0xffff0000;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  }
  return;
}

/* Address: 0x100c77ac Size: 80 bytes */
void FUN_100c77ac(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  param_1[0x26] = *param_2;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  }
  return;
}

/* Address: 0x100c7804 Size: 132 bytes */
void FUN_100c7804(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
  local_18 = param_1[0xd];
  iStack_14 = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  if ((param_3 != '\0') && (iVar1 = FUN_100e11c8(param_1 + 0xd,&local_18), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x100c7888 Size: 232 bytes */
void FUN_100c7888(int *param_1,long long param_2)

{
  long long uVar1;
  char local_28 [4];
  int local_24;
  int local_20;
  short local_1c;
  short local_1a;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),local_28);
  if (((long long)local_28[0] & 0x80U) != 0) {
    FUN_100b02d0(&local_1c);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),&local_1c);
    local_24 = (int)local_1c;
    local_20 = (int)local_1a;
    uVar1 = FUN_100e1580(param_2,1);
    FUN_100e11a4(uVar1,&local_24);
  }
  return;
}

/* Address: 0x100c7978 Size: 216 bytes */
void FUN_100c7978(int *param_1,short param_2,char param_3)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x410),0x636f6d70);
  if (iVar2 == 0) {
    if (param_2 != 0) {
      uVar1 = FUN_100b25f4(0);
      FUN_100b3460(uVar1,(char)param_2);
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,uVar1,0x5f,param_3);
    }
  }
  else {
    *(char *)(iVar2 + 0xc) = (char)param_2;
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}

/* Address: 0x100c7a50 Size: 104 bytes */
void FUN_100c7a50(int *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x410),0x636f6d70);
  *param_2 = 0;
  if (iVar1 != 0) {
    *param_2 = *(char *)(iVar1 + 0xc);
  }
  return;
}

/* Address: 0x100c7ab8 Size: 124 bytes */
void FUN_100c7ab8(int *param_1,int param_2)

{
  int iVar1;
  int uStack0000001c;
  short local_10;
  short local_e;
  
  local_10 = 1;
  local_e = 1;
  uStack0000001c = param_2;
  iVar1 = FUN_100b04bc(((char*)0 + 0x0000001c),&local_10);
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x438));
    *(int *)(param_1[0x1c] + 4) = uStack0000001c;
  }
  return;
}

/* Address: 0x100c7b34 Size: 60 bytes */
void FUN_100c7b34(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *param_2 = 0x10001;
  }
  else {
    *param_2 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  }
  return;
}

/* Address: 0x100c7b70 Size: 96 bytes */
void FUN_100c7b70(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x86) != '\0') {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    param_1[0x22] = *param_2;
    param_1[0x23] = iVar1;
    param_1[0x24] = iVar2;
    param_1[0x25] = iVar3;
    if (param_3 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
    }
  }
  return;
}

/* Address: 0x100c7bdc Size: 416 bytes */
void FUN_100c7bdc(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 )

{
  long long uVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
  }
  else if (param_2 == '\x01') {
    iVar2 = *param_1;
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x538),param_5,
                         *(int *)(iVar2 + 0x53c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x748),uVar1,1);
  }
  else if ((param_2 == '\x02') &&
          (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
          iVar2 != 0)) {
    if (param_1[0x20] == 4) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x21,param_1,0);
    }
    else if (param_1[0x20] == 0xc) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x1f,param_1,0);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x20,param_1,0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
  }
  return;
}

/* Address: 0x100c7e0c Size: 40 bytes */
void FUN_100c7e0c(void)

{
  FUN_100c7d84(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c7e34(int *param_1) { }













































































































/* Address: 0x100c7f28 Size: 320 bytes */
int * FUN_100c7f28(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_230 [260];
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  if (*(int *)(param_1 + 0xa8) != 0) {
    piVar2[0x2c] = 0;
    piVar2[0x2e] = piVar2[0x2c];
    piVar2[0x2d] = piVar2[0x2e];
    FUN_100012d8(**(int **)(param_1 + 0xa8) + 0x28,auStack_230,
                 (unsigned long long)*(unsigned char *)(**(int **)(param_1 + 0xa8) + 0x28) + 1);
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x798),auStack_230,
                   *(int *)(param_1 + 0xb0),*(int *)(param_1 + 0xb4),
                   *(int *)(param_1 + 0xb8),*(short *)(param_1 + 0xbc));
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}

/* Address: 0x100c8068 Size: 132 bytes */
void FUN_100c8068(int *param_1)

{
  if (param_1[0x2a] != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x840) + (int)param_1,0);
    FUN_100038e8(param_1[0x2a],0,0);
    FUN_10003588(param_1[0x2a]);
    param_1[0x2a] = 0;
  }
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100c80ec Size: 160 bytes */
void FUN_100c80ec(int *param_1,long long param_2)

{
  int iVar1;
  int local_34;
  
  FUN_10106ff0(param_1,param_2);
  if ((int *)param_1[0x2a] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x2a];
    if ((int)param_2 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x840) + (int)param_1,0);
      *(int *)(iVar1 + 4) = **(int **)(local_34 + -0x98);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),1);
      *(int *)(iVar1 + 4) = (int)param_2;
    }
  }
  return;
}

/* Address: 0x100c818c Size: 436 bytes */
void FUN_100c818c(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,short param_6)

{
  int *piVar1;
  int iVar4;
  long long uVar2;
  long long uVar3;
  int iVar5;
  char auStack_44 [8];
  char auStack_3c [60];
  
  piVar1 = piRam10117808;
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5e8));
  if (iVar4 == 0) {
    iVar4 = *piVar1;
  }
  *(short *)(param_1 + 0x2f) = param_6;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_3c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_3c,auStack_44);
  uVar2 = FUN_100b1c84(param_2);
  uVar3 = FUN_100b0578(auStack_44);
  iVar5 = FUN_10001068(iVar4,uVar3,uVar2,0,0,0,0,param_6);
  FUN_100db26c();
  *(int *)(iVar4 + 0x8c) = *(int *)**(int **)(iVar4 + 0x8c);
  param_1[0x2a] = iVar5;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),*(char *)((int)param_1 + 0x85)
               ,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),*(char *)(param_1 + 0x21),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),param_3,param_4,param_5,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),*piVar1 != iVar4);
  return;
}

/* Address: 0x100c8340 Size: 508 bytes */
void FUN_100c8340(int param_1,long long param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char auStack_48 [8];
  char auStack_40 [8];
  int *local_38;
  short local_34;
  short local_32;
  short local_30;
  int *local_2c [11];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_10001db8(*(int *)(param_1 + 0xa8),&local_38);
    FUN_100db26c(local_38);
    local_2c[0] = *(int **)(*local_38 + 8);
    FUN_100db26c(local_2c[0]);
    iVar1 = 1;
    iVar2 = 0;
    if (-1 < *(short *)(*local_2c[0] + 6)) {
      do {
        iVar3 = *local_2c[0] + iVar2 * 8;
        if (*(short *)(iVar3 + 8) == 0) {
          local_34 = *(short *)(iVar3 + 10);
          local_32 = *(short *)(iVar3 + 0xc);
          local_30 = *(short *)(iVar3 + 0xe);
          iVar1 = FUN_100b22b0(&local_34,param_2);
          break;
        }
        sVar4 = (short)iVar2 + 1;
        iVar2 = (int)sVar4;
      } while (sVar4 <= *(short *)(*local_2c[0] + 6));
    }
    if (iVar1 != 0) {
      FUN_100f16a0(local_2c);
      iVar1 = 0;
      if (-1 < *(short *)(*local_2c[0] + 6)) {
        do {
          if (*(unsigned short *)(*local_2c[0] + iVar1 * 8 + 8) < 4) {
            return;
          }
          sVar4 = (short)iVar1 + 1;
          iVar1 = (int)sVar4;
        } while (sVar4 <= *(short *)(*local_2c[0] + 6));
      }
      FUN_100c67b4(auStack_40,param_1,param_3);
      FUN_100c6824(auStack_40);
      FUN_100ee844(auStack_48,*(char *)(param_1 + 0xa6));
      FUN_10001e00(*(int *)(param_1 + 0xa8),local_2c[0]);
      FUN_100c68f4(auStack_40);
      FUN_100ee8e8(auStack_48,2);
    }
  }
  FUN_100c775c(param_1,param_2,param_3);
  return;
}

/* Address: 0x100c8640 Size: 416 bytes */
void FUN_100c8640(int *param_1,long long param_2)

{
  int *puVar1;
  int iVar2;
  int iVar3;
  int local_54;
  char auStack_30 [8];
  char auStack_28 [8];
  char auStack_20 [8];
  char auStack_18 [24];
  
  FUN_10117884(auStack_28,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  iVar2 = param_1[0x2a];
  if (iVar2 != 0) {
    puVar1 = (int *)FUN_100b0368(auStack_20,auStack_28);
    iVar2 = FUN_10001ff8(iVar2,*puVar1);
    if (iVar2 != 0) {
      FUN_100ee844(auStack_30,*(char *)((int)param_1 + 0xa6));
      puVar1 = (int *)FUN_100b0368(auStack_18,auStack_28);
      iVar2 = FUN_10002010(param_1[0x2a],*puVar1,0xffffffffffffffff);
      if (iVar2 != 0) {
        iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7e0) + (int)param_1);
        iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x7f8) + (int)param_1);
        if (iVar3 == iVar2) {
          iVar2 = param_1[0x2e];
        }
        else {
          iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
          iVar2 = iVar2 << ((int)*(short *)(param_1 + 0x2b) & 0x3fU);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),iVar2,1);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
        FUN_10117884(**(int **)(local_54 + -0xedc) +
                     (int)*(short *)(*(int *)**(int **)(local_54 + -0xedc) + 0x450));
      }
      FUN_100ee8e8(auStack_30,2);
    }
  }
  return;
}

/* Address: 0x100c87e0 Size: 400 bytes */
void FUN_100c87e0(int *param_1,long long param_2)

{
  int uVar1;
  char *pcVar2;
  int iVar3;
  int iVar6;
  long long uVar4;
  long long uVar5;
  char auStack_48 [8];
  char auStack_40 [8];
  char auStack_38 [56];
  
  iVar3 = iRam101177f0;
  pcVar2 = pcRam10116c48;
  iVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838));
  if (iVar6 != 0) {
    if (*pcVar2 != '\0') {
      uVar1 = *(int *)(iVar3 + 0xca);
      *pcVar2 = '\0';
      uVar4 = FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1);
      *pcVar2 = '\x01';
      if ((int)uVar4 != 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x600) + (int)param_1,auStack_38);
        FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,auStack_38,auStack_40);
        FUN_10000198(uVar1);
        uVar5 = FUN_100b0578(auStack_40);
        FUN_10000750(uVar4,uVar5);
        FUN_100ef548(uVar4);
      }
      if ((*pcVar2 != '\0') && ((int)uVar4 != 0)) goto LAB_100c894c;
    }
    uVar1 = *(int *)(*(int *)param_1[0x2a] + 4);
    *(int *)(*(int *)param_1[0x2a] + 4) = *(int *)(iVar3 + 0xca);
    FUN_10000030();
    FUN_100ee844(auStack_48,*(char *)((int)param_1 + 0xa6));
    FUN_10001fe0(param_1[0x2a]);
    *(int *)(*(int *)param_1[0x2a] + 4) = uVar1;
    FUN_100ee8e8(auStack_48,2);
  }
LAB_100c894c:
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100c8970 Size: 680 bytes */



unsigned int * FUN_100c8970(int *param_1)

{
  int *puVar1;
  char *puVar2;
  int *puVar3;
  int *puVar4;
  long long uVar5;
  long long uVar6;
  int iVar7;
  char auStack_15c [8];
  unsigned int *local_154;
  short local_150;
  short local_14e;
  short local_14c;
  short local_14a;
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  puVar4 = puRam10117808;
  puVar3 = puRam10117370;
  puVar2 = puRam10116c50;
  puVar1 = puRam10116c4c;
  local_154 = (unsigned int *)0x0;
  iVar7 = *(int *)(iRam101177f0 + 0xca);
  local_150 = *(short *)(iVar7 + 0x10);
  local_14e = *(short *)(iVar7 + 0x12);
  local_14c = *(short *)(iVar7 + 0x14);
  local_14a = *(short *)(iVar7 + 0x16);
  FUN_10000198(*puRam10117808);
  uVar5 = FUN_100b08a4(&local_150,0);
  uVar6 = FUN_100b08a4(&local_150,1);
  FUN_10002b38(uVar6,uVar5);
  FUN_10001bf0(local_14a,local_150);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  *puVar2 = 1;
  *puVar1 = param_1;
  FUN_10000198(*puVar4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),*puVar4);
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puVar3;
  *puVar3 = auStack_148;
  iVar7 = FUN_10000090(auStack_148);
  if (iVar7 == 0) {
    iVar7 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
    if (iVar7 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_15c);
      FUN_100b0578(auStack_15c);
      local_154 = (unsigned int *)FUN_100001b0();
      FUN_100db26c();
      FUN_100b0578(auStack_15c);
      FUN_10002040();
      FUN_10117884((int)*(short *)(*param_1 + 0x488) + (int)param_1);
      FUN_100001c8();
      iVar7 = FUN_100b0870((unsigned long long)*local_154 + 2);
      if (iVar7 != 0) {
        FUN_100db2f4(0xffffffffffffff94);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    }
    *puVar3 = local_40;
  }
  FUN_10000198(*puVar4);
  FUN_10002b38(0,0);
  *puVar2 = 0;
  *puVar1 = 0;
  return local_154;
}

/* Address: 0x100c8c48 Size: 60 bytes */
long long FUN_100c8c48(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10001c08(*(int *)(param_1 + 0xa8));
  }
  return uVar1;
}

/* Address: 0x100c8c84 Size: 60 bytes */
long long FUN_100c8c84(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100037f8(*(int *)(param_1 + 0xa8));
  }
  return uVar1;
}

/* Address: 0x100c8cc0 Size: 104 bytes */
void FUN_100c8cc0(int param_1,long long param_2)

{
  if (*(int *)(param_1 + 0xa8) == 0) {
    FUN_100012d8(pbRam10116a54,param_2,(unsigned long long)*pbRam10116a54 + 1);
  }
  else {
    FUN_100038d0(*(int *)(param_1 + 0xa8),param_2);
  }
  return;
}

/* Address: 0x100c8d28 Size: 60 bytes */
long long FUN_100c8d28(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10001c50(*(int *)(param_1 + 0xa8));
  }
  return uVar1;
}

/* Address: 0x100c8d64 Size: 60 bytes */
long long FUN_100c8d64(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10002808(*(int *)(param_1 + 0xa8));
  }
  return uVar1;
}

/* Address: 0x100c8da0 Size: 224 bytes */
void FUN_100c8da0(int param_1,unsigned char param_2,char param_3)

{
  char cVar1;
  unsigned short uVar2;
  char auStack_28 [8];
  char auStack_20 [32];
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(unsigned char *)(param_1 + 0x84) = param_2;
  }
  else {
    cVar1 = *(char *)(**(int **)(param_1 + 0xa8) + 0x11);
    if (cVar1 != -1) {
      uVar2 = ((unsigned short)param_2 * 4 + (unsigned short)param_2) * 2;
      if ((cVar1 != *(char *)(param_1 + 0x84)) != uVar2) {
        FUN_100c67b4(auStack_20,param_1,param_3);
        FUN_100c6824(auStack_20);
        FUN_100ee844(auStack_28,*(char *)(param_1 + 0xa6));
        FUN_10003618(*(int *)(param_1 + 0xa8),uVar2);
        FUN_100c68f4(auStack_20);
        FUN_100ee8e8(auStack_28,2);
      }
    }
    *(unsigned char *)(param_1 + 0x84) = param_2;
  }
  return;
}

/* Address: 0x100c8e80 Size: 88 bytes */
void FUN_100c8e80(int *param_1,long long param_2,char param_3)

{
  FUN_100c76f4(param_1,param_2,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),param_3);
  return;
}

/* Address: 0x100c8ed8 Size: 88 bytes */
void FUN_100c8ed8(int *param_1,long long param_2,char param_3)

{
  FUN_100c7b70(param_1,param_2,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),param_3);
  return;
}

/* Address: 0x100c8f30 Size: 324 bytes */
void FUN_100c8f30(int *param_1,long long param_2)

{
  short uVar1;
  short uVar2;
  char auStack_40 [8];
  char auStack_38 [8];
  char auStack_30 [16];
  short local_20;
  short local_1e;
  
  if (param_1[0x2a] != 0) {
    FUN_100c67b4(auStack_38,param_1,param_2);
    FUN_100c6824(auStack_38);
    FUN_100ee844(auStack_40,*(char *)((int)param_1 + 0xa6));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_30,&local_20);
    FUN_10003828(param_1[0x2a],local_1e,local_20);
    if (*(char *)((int)param_1 + 0x86) != '\0') {
      FUN_100b08a4(&local_20,0);
      uVar1 = FUN_10003768();
      FUN_100b08a4(&local_20,1);
      uVar2 = FUN_10003768();
      FUN_100038e8(param_1[0x2a],uVar2,uVar1);
    }
    FUN_100c68f4(auStack_38);
    FUN_100ee8e8(auStack_40,2);
  }
  return;
}

/* Address: 0x100c9074 Size: 152 bytes */
void FUN_100c9074(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  char auStack_20 [32];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_20);
  FUN_100c7804(param_1,param_2,param_3);
  iVar1 = FUN_100e1750(param_2,auStack_20);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x830) + (int)param_1,param_3);
  }
  return;
}

/* Address: 0x100c9148 Size: 184 bytes */
void FUN_100c9148(int param_1,short param_2,char param_3)

{
  short sVar1;
  char auStack_28 [8];
  char auStack_20 [32];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    sVar1 = FUN_10001c08(*(int *)(param_1 + 0xa8));
    if (sVar1 != param_2) {
      FUN_100c67b4(auStack_20,param_1,param_3);
      FUN_100c6824(auStack_20);
      FUN_100ee844(auStack_28,*(char *)(param_1 + 0xa6));
      FUN_10001cb0(*(int *)(param_1 + 0xa8),param_2);
      FUN_100c68f4(auStack_20);
      FUN_100ee8e8(auStack_28,2);
    }
  }
  return;
}

/* Address: 0x100c9200 Size: 184 bytes */
void FUN_100c9200(int param_1,short param_2,char param_3)

{
  short sVar1;
  char auStack_28 [8];
  char auStack_20 [32];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    sVar1 = FUN_100037f8(*(int *)(param_1 + 0xa8));
    if (sVar1 != param_2) {
      FUN_100c67b4(auStack_20,param_1,param_3);
      FUN_100c6824(auStack_20);
      FUN_100ee844(auStack_28,*(char *)(param_1 + 0xa6));
      FUN_10003288(*(int *)(param_1 + 0xa8),param_2);
      FUN_100c68f4(auStack_20);
      FUN_100ee8e8(auStack_28,2);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100c92b8(int *param_1,long long param_2,char param_3) { }







































/* Address: 0x100c9420 Size: 184 bytes */
void FUN_100c9420(int param_1,short param_2,char param_3)

{
  short sVar1;
  char auStack_28 [8];
  char auStack_20 [32];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    sVar1 = FUN_10001c50(*(int *)(param_1 + 0xa8));
    if (sVar1 != param_2) {
      FUN_100c67b4(auStack_20,param_1,param_3);
      FUN_100c6824(auStack_20);
      FUN_100ee844(auStack_28,*(char *)(param_1 + 0xa6));
      FUN_10001d10(*(int *)(param_1 + 0xa8),param_2);
      FUN_100c68f4(auStack_20);
      FUN_100ee8e8(auStack_28,2);
    }
  }
  return;
}

/* Address: 0x100c94d8 Size: 204 bytes */
void FUN_100c94d8(int param_1,short param_2,short param_3,short param_4,
                 char param_5)

{
  char auStack_28 [8];
  char auStack_20 [32];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_100c67b4(auStack_20,param_1,param_5);
    FUN_100c6824(auStack_20);
    FUN_100ee844(auStack_28,*(char *)(param_1 + 0xa6));
    FUN_10003288(*(int *)(param_1 + 0xa8),param_3);
    FUN_10001cb0(*(int *)(param_1 + 0xa8),param_4);
    FUN_10001d10(*(int *)(param_1 + 0xa8),param_2);
    FUN_100c68f4(auStack_20);
    FUN_100ee8e8(auStack_28,2);
  }
  return;
}

/* Address: 0x100c95bc Size: 188 bytes */
void FUN_100c95bc(int *param_1,int param_2,char param_3)

{
  if (param_2 != param_1[0x2e]) {
    param_1[0x2e] = param_2;
    *(short *)(param_1 + 0x2b) = 0;
    for (; 0x7fff < param_2; param_2 = param_2 >> 1) {
      *(short *)(param_1 + 0x2b) = *(short *)(param_1 + 0x2b) + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x808),(short)param_2,param_3);
    if (param_1[0x2e] < param_1[0x2c]) {
      FUN_10117884((int)*(short *)(*param_1 + 2000) + (int)param_1,param_1[0x2e],param_3);
    }
  }
  return;
}

/* Address: 0x100c9678 Size: 156 bytes */
void FUN_100c9678(int *param_1,int param_2,char param_3)

{
  if (param_2 != param_1[0x2d]) {
    param_1[0x2d] = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810),
                 (short)(param_2 >> ((int)*(short *)(param_1 + 0x2b) & 0x3fU)),param_3);
    if (param_1[0x2c] < param_1[0x2d]) {
      FUN_10117884((int)*(short *)(*param_1 + 2000) + (int)param_1,param_1[0x2d],param_3);
    }
  }
  return;
}

/* Address: 0x100c9714 Size: 124 bytes */
void FUN_100c9714(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_100f0334(param_1[0x2d],param_2,param_1[0x2e]);
  if (iVar1 != param_1[0x2c]) {
    param_1[0x2c] = iVar1;
    FUN_10117884((int)*(short *)(*param_1 + 0x820) + (int)param_1,
                 (short)(iVar1 >> ((int)*(short *)(param_1 + 0x2b) & 0x3fU)),param_3);
  }
  return;
}

/* Address: 0x100c9790 Size: 148 bytes */
void FUN_100c9790(int *param_1,long long param_2,long long param_3,long long param_4,
                 char param_5)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),param_4,param_5);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),param_3,param_5);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_5);
  return;
}

/* Address: 0x100c9824 Size: 144 bytes */
long long FUN_100c9824(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7f8) + (int)param_1);
    if (iVar2 == 1) {
      uVar1 = 2;
    }
    else if (iVar2 < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 3;
    }
  }
  return uVar1;
}

/* Address: 0x100c98b4 Size: 156 bytes */
void FUN_100c98b4(int *param_1)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  int local_18 [6];
  
  local_18[0] = param_1[0x15];
  local_20 = param_1[0x16];
  iStack_1c = param_1[0x17];
  FUN_1010d2f8(param_1);
  iVar1 = FUN_100b04bc(param_1 + 0x15,local_18);
  if ((iVar1 != 0) || (iVar1 = FUN_100e11c8(param_1 + 0x16,&local_20), iVar1 != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),0);
  }
  return;
}

/* Address: 0x100c99d8 Size: 40 bytes */
void FUN_100c99d8(void)

{
  FUN_100c9960(0);
  return;
}

/* Address: 0x100c9a00 Size: 132 bytes */
void FUN_100c9a00(int param_1)

{
  char in_r9;
  
  FUN_100c7e34(param_1);
  *(char *)(param_1 + 0xc0) = in_r9;
  if (in_r9 == '\x01') {
    *(int *)(param_1 + 0x80) = 0xe;
  }
  else {
    *(int *)(param_1 + 0x80) = 0xf;
  }
  return;
}

/* Address: 0x100c9a90 Size: 336 bytes */
void FUN_100c9a90(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar5;
  char uVar6;
  long long uVar2;
  long long uVar3;
  long long uVar4;
  int local_154;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100c6c9c(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar5 = FUN_10000090(auStack_130);
  if (iVar5 == 0) {
    uVar6 = FUN_10117884((int)*(short *)(*param_2 + 0xe8) + (int)param_2);
    *(char *)(param_1 + 0x30) = uVar6;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2,*param_2,uVar2);
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,
                 *(int *)(local_154 + -0xe4c),uVar2,uVar3,uVar4,0x10);
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: 0x100c9be0 Size: 172 bytes */
void FUN_100c9be0(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*(char *)(param_1 + 0xc0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0xb0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0xb4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0xb8));
  return;
}

/* Address: 0x100c9c8c Size: 220 bytes */
void FUN_100c9c8c(int *param_1,short param_2)

{
  int bVar1;
  
  if (param_2 != 0) {
    if ((param_2 == 0x14) || (param_2 == 0x16)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((bVar1) && (param_1[0x2d] < param_1[0x2c])) ||
       ((!bVar1 && (param_1[0x2c] < param_1[0x2e])))) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850));
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  }
  return;
}

/* Address: 0x100c9d68 Size: 128 bytes */
void FUN_100c9d68(int *param_1,long long param_2)

{
  int iVar1;
  long long lVar2;
  unsigned long long uVar3;
  
  if ((int)param_2 != 0) {
    iVar1 = *param_1;
    uVar3 = (unsigned long long)(unsigned int)param_1[0x2c];
    lVar2 = FUN_100f0334((unsigned int)param_1[0x2d] - uVar3,param_2,(unsigned int)param_1[0x2e] - uVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 2000),uVar3 + lVar2,
                 *(char *)((int)param_1 + 0x52));
  }
  return;
}

/* Address: 0x100c9de8 Size: 524 bytes */
void FUN_100c9de8(int *param_1,long long param_2)

{
  int iVar1;
  int *puVar3;
  int iVar4;
  long long uVar2;
  int iVar5;
  int local_54;
  char auStack_30 [8];
  char auStack_28 [8];
  char auStack_20 [8];
  char auStack_18 [24];
  
  FUN_10117884(auStack_30,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  iVar1 = param_1[0x2c];
  puVar3 = (int *)FUN_100b0368(auStack_28,auStack_30);
  iVar4 = FUN_10001ff8(param_1[0x2a],*puVar3);
  if ((((iVar4 == 0x14) || (iVar4 == 0x15)) || (iVar4 == 0x16)) || (iVar4 == 0x17)) {
    uVar2 = FUN_10000a98(*(int *)(local_54 + -0xc44),0x2c0,1);
    FUN_100db26c();
    puVar3 = (int *)FUN_100b0368(auStack_20,auStack_30);
    FUN_10002010(param_1[0x2a],*puVar3,uVar2);
    FUN_100ef5f0(uVar2);
    if (param_1[0x2c] != iVar1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  else if (iVar4 == 0x81) {
    puVar3 = (int *)FUN_100b0368(auStack_18,auStack_30);
    iVar4 = FUN_10002010(param_1[0x2a],*puVar3,0);
    if (iVar4 == 0x81) {
      iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0));
      iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
      if (iVar5 == iVar4) {
        iVar4 = param_1[0x2e];
      }
      else {
        iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
        iVar4 = iVar4 << ((int)*(short *)(param_1 + 0x2b) & 0x3fU);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),iVar4,1);
      if (param_1[0x2c] != iVar1) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
      }
    }
  }
  return;
}

/* Address: 0x100c9ff4 Size: 116 bytes */
void FUN_100c9ff4(int *param_1,short param_2)

{
  if ((param_2 == 0x16) || (param_2 == 0x14)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),0xffffffffffffffff);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),1);
  }
  return;
}

/* Address: 0x100ca0e8 Size: 40 bytes */
void FUN_100ca0e8(void)

{
  FUN_100ca078(0);
  return;
}

/* Address: 0x100ca110 Size: 304 bytes */
void FUN_100ca110(int *param_1)

{
  int *puVar1;
  long long uVar2;
  int iVar3;
  int in_stack_00000038;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100c9a00(param_1);
  iVar3 = *param_1;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x680));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x840),uVar2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    iVar3 = FUN_100e9174();
    param_1[0x31] = iVar3;
    FUN_10117884((int)*(short *)(*param_1 + 0x860) + (int)param_1,in_stack_00000038);
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100ca240(void) { return 0; }































/* Address: 0x100ca280 Size: 236 bytes */
void FUN_100ca280(int param_1)

{
  int *piVar1;
  int iVar2;
  int uVar3;
  char auStack_148 [328];
  
  FUN_100ebf7c(auStack_148,*(int *)(param_1 + 0xc4),1);
  piVar1 = (int *)FUN_100ec060(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    if ((piVar1 + *(unsigned char *)(param_1 + 0xc0))[0x24] == param_1) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x750) + (int)piVar1,0,*(unsigned char *)(param_1 + 0xc0));
    }
    piVar1 = (int *)FUN_100ec0e8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  uVar3 = FUN_100f57c8(*(int *)(param_1 + 0xc4));
  *(int *)(param_1 + 0xc4) = uVar3;
  FUN_100c8068(param_1);
  FUN_100ebff4(auStack_148,2);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ca378(int *param_1) { }










































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ca46c(void) { }
















/* Address: 0x100ca490 Size: 392 bytes */
void FUN_100ca490(int *param_1,char param_2)

{
  int iVar1;
  int local_64;
  char auStack_40 [8];
  char auStack_38 [16];
  int local_28;
  int uStack_24;
  int local_20;
  int local_1c;
  
  FUN_100c67b4(auStack_40,param_1,1);
  FUN_100c6824(auStack_40);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),param_2);
  }
  else if (param_2 == '\0') {
    FUN_100002b8(param_1[0x2a]);
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
    if (iVar1 != 0) {
      local_28 = *(int *)(*(int *)param_1[0x2a] + 8);
      uStack_24 = *(int *)(*(int *)param_1[0x2a] + 0xc);
      local_20 = local_28;
      local_1c = uStack_24;
      FUN_10117884((int)*(short *)(*param_1 + 0x278) + (int)param_1,&local_28,auStack_38);
      FUN_10117884((int)*(short *)(*param_1 + 0x478) + (int)param_1,auStack_38);
      FUN_10117884((int)*(short *)(*param_1 + 0x508) + (int)param_1,
                   *(int *)(*(int *)(*(int *)(local_64 + -0xb0) + 0xca) + 0x1c));
    }
  }
  else {
    FUN_10002388(param_1[0x2a]);
  }
  FUN_100c68f4(auStack_40);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ca618(int param_1,int *param_2) { }























/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ca6e0(int *param_1) { }


































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ca754(int *param_1,long long param_2,long long param_3,int param_4) { }






































































































































































/* Address: 0x100ca96c Size: 224 bytes */
void FUN_100ca96c(int *param_1,long long param_2)

{
  int iVar1;
  int local_44;
  char auStack_20 [8];
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838));
  if (iVar1 == 0) {
    FUN_10000030();
    FUN_100ef824(auStack_20);
    FUN_100f03e8(*(int *)(local_44 + -0xc38));
    iVar1 = *(int *)param_1[0x2a];
    local_18 = *(short *)(iVar1 + 8);
    local_16 = *(short *)(iVar1 + 10);
    local_14 = *(short *)(iVar1 + 0xc);
    local_12 = *(short *)(iVar1 + 0xe);
    FUN_100b0578(&local_18);
    FUN_10002c58();
    FUN_100b0578(&local_18);
    FUN_100021d8();
    FUN_100f03e8(auStack_20);
  }
  FUN_100c87e0(param_1,param_2);
  return;
}

/* Address: 0x100caa4c Size: 256 bytes */
void FUN_100caa4c(int *param_1,short param_2)

{
  int *piVar2;
  int iVar3;
  long long lVar1;
  long long lVar4;
  char auStack_150 [336];
  
  FUN_100ebf7c(auStack_150,param_1[0x31],1);
  piVar2 = (int *)FUN_100ec060(auStack_150);
  iVar3 = FUN_100ebf44(auStack_150);
  lVar4 = 0;
  while (iVar3 != 0) {
    lVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x768),
                         *(char *)(param_1 + 0x30),param_2);
    lVar4 = lVar4 + lVar1;
    piVar2 = (int *)FUN_100ec0e8(auStack_150);
    iVar3 = FUN_100ebf44(auStack_150);
  }
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar3 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1,lVar4);
  }
  FUN_100ebff4(auStack_150,2);
  return;
}

/* Address: 0x100cab4c Size: 208 bytes */
void FUN_100cab4c(void)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int *ppuVar4;
  
  uVar3 = uRam10116c54;
  uVar2 = uRam10116c40;
  uVar1 = uRam10116c34;
  ppuVar4 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116c2c,*puRam10116c6c,0x88,uRam10116c70,uRam10116bbc);
  FUN_100c1c8c(uVar1,*(int *)(*(int*)((char*)ppuVar4 - 0x30b)),0xa8,(*(int*)((char*)ppuVar4 - 0x30a)),(*(int*)((char*)ppuVar4 - 0x309)));
  FUN_100c1c8c(uVar2,*(int *)(*(int*)((char*)ppuVar4 - 0x308)),0xc0,(*(int*)((char*)ppuVar4 - 0x307)),uVar1);
  FUN_100c1c8c(uVar3,*(int *)(*(int*)((char*)ppuVar4 - 0x306)),0xc4,(*(int*)((char*)ppuVar4 - 0x305)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x310)),*(int *)(*(int*)((char*)ppuVar4 - 0x304)),200,(*(int*)((char*)ppuVar4 - 0x303)),uVar3);
  return;
}

/* Address: 0x100cac1c Size: 104 bytes */
int * FUN_100cac1c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x20),
     param_1 != (int *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x301));
  }
  return param_1;
}

/* Address: 0x100cac84 Size: 44 bytes */
void FUN_100cac84(long long param_1)

{
  FUN_100d88b4(param_1,1,0xc);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100cacb0(void) { return 0; }

























/* Address: 0x100cacf8 Size: 104 bytes */
int * FUN_100cacf8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(4),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2ff));
  }
  return param_1;
}

/* Address: 0x100cad60 Size: 40 bytes */
void FUN_100cad60(void)

{
  FUN_100cacf8(0);
  return;
}

/* Address: 0x100cad88 Size: 36 bytes */
void FUN_100cad88(void)

{
  FUN_100f5274();
  return;
}

/* Address: 0x100cadac Size: 36 bytes */
void FUN_100cadac(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100cadd0 Size: 36 bytes */
void FUN_100cadd0(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100cadf4 Size: 36 bytes */
void FUN_100cadf4(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100cae18 Size: 36 bytes */
void FUN_100cae18(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100cae44 Size: 116 bytes */
int * FUN_100cae44(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100cacf8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2fd));
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}
















/* Address: 0x100caeb8 Size: 40 bytes */
void FUN_100caeb8(void)

{
  FUN_100cae44(0);
  return;
}

/* Address: 0x100caee0 Size: 36 bytes */
void FUN_100caee0(void)

{
  FUN_100cad88();
  return;
}






/* Address: 0x100caf04 Size: 84 bytes */
void FUN_100caf04(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 4));
  *(int *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 8));
  *(int *)(param_1 + 8) = uVar1;
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100caf58 Size: 184 bytes */
void FUN_100caf58(int param_1,long long param_2,long long param_3,long long param_4)

{
  int uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_100cacb0();
    *(int *)(param_1 + 4) = uVar1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_100cacb0();
    *(int *)(param_1 + 8) = uVar1;
  }
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x118),
               param_2,param_3,param_4);
  FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x118),
               param_3,param_2,param_4);
  return;
}

/* Address: 0x100cb010 Size: 152 bytes */
void FUN_100cb010(int param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128),param_2,param_3,param_4);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128),param_3,param_2,param_4);
  }
  return;
}

/* Address: 0x100cb0a8 Size: 124 bytes */
int * FUN_100cb0a8(int *param_1,long long param_2,int param_3)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x138),
     param_1 != (int *)0x0)) {
    FUN_100ebaf8(param_1,param_2,1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2fc));
    param_1[0x4d] = param_3;
  }
  return param_1;
}

/* Address: 0x100cb124 Size: 140 bytes */
int * FUN_100cb124(int *param_1,long long param_2,int param_3)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x138),
     param_1 != (int *)0x0)) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_3 + 4);
    }
    FUN_100cb0a8(param_1,uVar2,param_2);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2fb));
  }
  return param_1;
}

/* Address: 0x100cb1b0 Size: 164 bytes */
long long FUN_100cb1b0(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x10) + (int)param_1);
    uVar1 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x148),param_1[1]);
  }
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cb254(void) { }
















/* Address: 0x100cb278 Size: 120 bytes */
long long FUN_100cb278(int param_1)

{
  int iVar1;
  long long uVar2;
  
  iVar1 = FUN_100ebf44(param_1);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x10) +
                           (int)*(short *)(**(int **)(param_1 + 0x10) + 0x140),
                           *(int *)(param_1 + 4)), iVar1 != *(int *)(param_1 + 0x134))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x100cb2f0 Size: 96 bytes */
void FUN_100cb2f0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x148),param_1[1]);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cb350(void) { }
















/* Address: 0x100cb374 Size: 108 bytes */
void FUN_100cb374(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116cb0;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: 0x100cb3e0 Size: 108 bytes */
void FUN_100cb3e0(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116cb4;
    FUN_100cb374(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cb44c(long long param_1,long long param_2,long long param_3,long long param_4) { }




















































/* Address: 0x100cb518 Size: 140 bytes */
int * FUN_100cb518(int *param_1,long long param_2,int param_3)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x138),
     param_1 != (int *)0x0)) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_3 + 8);
    }
    FUN_100cb0a8(param_1,uVar2,param_2);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2fa));
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cb5a4(void) { }
















/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cb5c8(void) { }
















/* Address: 0x100cb5ec Size: 108 bytes */
void FUN_100cb5ec(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116cb8;
    FUN_100cb374(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cb658(int param_1,long long param_2) { }










































































































/* Address: 0x100cb80c Size: 112 bytes */
int * FUN_100cb80c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x10),
     param_1 != (int *)0x0)) {
    FUN_100cae44(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2f8));
    *(char *)(param_1 + 3) = 0;
  }
  return param_1;
}

/* Address: 0x100cb87c Size: 40 bytes */
void FUN_100cb87c(void)

{
  FUN_100cb80c(0);
  return;
}

/* Address: 0x100cb8a4 Size: 176 bytes */
void FUN_100cb8a4(int *param_1,long long param_2,long long param_3,long long param_4)

{
  *(char *)(param_1 + 3) = 1;
  if (((int)param_2 != 0) && ((int)param_3 != -1)) {
    FUN_10117884((int)*(short *)(*param_1 + 200) + (int)param_1,param_2,1);
    FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1,param_3,param_2,param_4);
  }
  *(char *)(param_1 + 3) = 0;
  return;
}

/* Address: 0x100cb974 Size: 168 bytes */
void FUN_100cb974(int param_1,long long param_2,unsigned int param_3)

{
  int *piVar1;
  int iVar2;
  int local_10 [4];
  
  if ((int)param_2 != 0) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,param_2,local_10),
       iVar2 != 0)) {
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0xe0),local_10[0]);
      if ((param_3 & 0xff) != *(unsigned int *)(iVar2 + 8) >> 0x1f) {
        *(unsigned int *)(iVar2 + 8) = -*(unsigned int *)(iVar2 + 8);
      }
    }
  }
  return;
}

/* Address: 0x100cba1c Size: 160 bytes */
unsigned int FUN_100cba1c(int param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  int local_10 [4];
  
  if ((int)param_2 != 0) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,param_2,local_10),
       iVar2 != 0)) {
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0xe0),local_10[0]);
      return *(unsigned int *)(iVar2 + 8) >> 0x1f;
    }
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cbabc(int *param_1,long long param_2,unsigned int param_3) { }












































































/* Address: 0x100cbbc4 Size: 284 bytes */
void FUN_100cbbc4(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_150 [84];
  
  FUN_100ebaf8(local_150,param_1[2],1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar1 = local_150[1];
  iVar2 = FUN_100ebf44(local_150);
  while (iVar2 != 0) {
    puVar3 = (int *)
             FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0xe0),iVar1);
    if ((int)puVar3[2] < 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1,*puVar3,param_2,param_3,param_4);
    }
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar1 = local_150[1];
    iVar2 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return;
}

/* Address: 0x100cbce0 Size: 212 bytes */
void FUN_100cbce0(int *param_1,int *param_2,long long param_3,long long param_4,long long param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),param_2);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_2,0);
    FUN_10117884((int)*(short *)(*param_1 + 0xf0) + (int)param_1,param_2,param_3,param_4,param_5);
    FUN_10117884((int)*(short *)(*param_2 + 0x40) + (int)param_2,param_3,param_4,param_5,param_1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cbdb4(void) { }























































/* Address: 0x100cbe7c Size: 120 bytes */
void FUN_100cbe7c(long long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long long uVar3;
  
  piVar1 = (int *)param_2[1];
  iVar2 = *piVar1;
  uVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0xe0),param_1,piVar1,iVar2,
                       *(int *)(iVar2 + 0xe4));
  FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0x100),*param_2,uVar3);
  return;
}

/* Address: 0x100cbef4 Size: 328 bytes */
void FUN_100cbef4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_150;
  int local_14c [83];
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,
                         *(int *)(param_1 + 0x134),&local_150);
    if (iVar2 == 0) {
      *(int *)(param_1 + 8) = 0;
    }
    else {
      FUN_100eba50(local_14c,*(int *)(param_1 + 0x10),1,local_150,0);
      FUN_10117884((int)*(short *)(local_14c[0] + 0x10) + (int)local_14c);
      iVar2 = local_14c[1];
      iVar3 = FUN_100ebf44(local_14c);
      while ((iVar3 != 0 &&
             (iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x10) +
                                   (int)*(short *)(**(int **)(param_1 + 0x10) + 0x140),iVar2),
             iVar3 == *(int *)(param_1 + 0x134)))) {
        local_150 = iVar2;
        FUN_10117884((int)*(short *)(local_14c[0] + 0x18) + (int)local_14c);
        iVar2 = local_14c[1];
        iVar3 = FUN_100ebf44(local_14c);
      }
      *(int *)(param_1 + 8) = local_150;
      FUN_100ebc68(local_14c,2);
    }
  }
  FUN_100ebf58(param_1);
  return;
}

/* Address: 0x100cc044 Size: 40 bytes */
void FUN_100cc044(void)

{
  FUN_100cac1c(0);
  return;
}

/* Address: 0x100cc06c Size: 144 bytes */
void FUN_100cc06c(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int iVar1;
  int local_18 [6];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),param_2,param_3,param_4,
                       local_18);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x120) + (int)param_1,local_18[0],param_2,param_3,
                 param_4);
  }
  return;
}

/* Address: 0x100cc0fc Size: 80 bytes */
void FUN_100cc0fc(int *param_1,long long param_2,int param_3,int param_4,
                 int param_5)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,&local_10,1);
  return;
}

/* Address: 0x100cc14c Size: 96 bytes */
void FUN_100cc14c(int *param_1,int param_2,int param_3,int param_4,
                 long long param_5)

{
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = &local_10;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),uRam10116cc8,&local_18,param_5);
  return;
}

/* Address: 0x100cc1ac Size: 108 bytes */
void FUN_100cc1ac(int *param_1,int param_2,long long param_3)

{
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = &local_10;
  local_c = 0;
  local_8 = 0x7ffffffe;
  local_14 = param_1;
  local_10 = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),uRam10116cc8,&local_18,param_3);
  return;
}

/* Address: 0x100cc218 Size: 64 bytes */
int FUN_100cc218(int *param_1)

{
  int *puVar1;
  
  puVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *puVar1;
}

/* Address: 0x100cc258 Size: 60 bytes */
int FUN_100cc258(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *(int *)(iVar1 + 4);
}

/* Address: 0x100cc294 Size: 112 bytes */
void FUN_100cc294(int *param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 200) + (int)param_1,local_10,1);
  }
  return;
}

/* Address: 0x100cc37c Size: 172 bytes */
void FUN_100cc37c(void)

{
  int uVar1;
  int uVar2;
  int *ppuVar3;
  
  uVar2 = uRam10116ca8;
  uVar1 = uRam10116ca0;
  ppuVar3 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116ca0,*puRam10116ccc,4,uRam10116cd0,uRam10116938);
  FUN_100c1c8c(uVar2,*(int *)(*(int*)((char*)ppuVar3 - 0x2f3)),0xc,(*(int*)((char*)ppuVar3 - 0x2f2)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x2f9)),*(int *)(*(int*)((char*)ppuVar3 - 0x2f1)),0x10,(*(int*)((char*)ppuVar3 - 0x2f0)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x2f7)),*(int *)(*(int*)((char*)ppuVar3 - 0x2ef)),0x20,(*(int*)((char*)ppuVar3 - 0x2ee)),(*(int*)((char*)ppuVar3 - 0x3b9)));
  return;
}

/* Address: 0x100cc430 Size: 104 bytes */
int * FUN_100cc430(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(4),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2ec));
  }
  return param_1;
}

/* Address: 0x100cc498 Size: 40 bytes */
void FUN_100cc498(void)

{
  FUN_100cc430(0);
  return;
}

/* Address: 0x100cc4d0 Size: 72 bytes */
unsigned long long FUN_100cc4d0(int *param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  return (lVar1 + -1 + (unsigned long long)(lVar1 != 0) << 0x20) >> 0x3f;
}

/* Address: 0x100cc520 Size: 116 bytes */
int * FUN_100cc520(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100cc430(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2ea));
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}

/* Address: 0x100cc594 Size: 40 bytes */
void FUN_100cc594(void)

{
  FUN_100cc520(0);
  return;
}

/* Address: 0x100cc5d8 Size: 116 bytes */
void FUN_100cc5d8(int param_1,int *param_2)

{
  int uVar1;
  
  FUN_100f5100(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(int *)(param_1 + 4) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(int *)(param_1 + 8) = uVar1;
  return;
}

/* Address: 0x100cc64c Size: 116 bytes */
void FUN_100cc64c(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 8));
  return;
}

/* Address: 0x100cc760 Size: 124 bytes */
int * FUN_100cc760(int *param_1)

{
  int uVar1;
  int *puVar4;
  int *ppuVar5;
  int uVar2;
  int uVar3;
  
  ppuVar5 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar5 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x14),
     param_1 != (int *)0x0)) {
    FUN_100cc430(param_1);
    *param_1 = (*(int*)((char*)ppuVar5 - 0x2e8));
    puVar4 = (int *)(*(int*)((char*)ppuVar5 - 0x319));
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    param_1[1] = *puVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  return param_1;
}

/* Address: 0x100cc7dc Size: 40 bytes */
void FUN_100cc7dc(void)

{
  FUN_100cc760(0);
  return;
}

/* Address: 0x100cc810 Size: 84 bytes */
long long FUN_100cc810(long long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100e1a3c(param_1 + 4,1);
  iVar2 = FUN_100e1a3c(param_1 + 4,0);
  return (long long)iVar2 * (long long)iVar1;
}

/* Address: 0x100cc864 Size: 104 bytes */
void FUN_100cc864(int param_1,int *param_2)

{
  int local_20;
  int uStack_1c;
  int uStack_18;
  int uStack_14;
  
  FUN_100f5100(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x128),&local_20);
  *(int *)(param_1 + 4) = local_20;
  *(int *)(param_1 + 8) = uStack_1c;
  *(int *)(param_1 + 0xc) = uStack_18;
  *(int *)(param_1 + 0x10) = uStack_14;
  return;
}

/* Address: 0x100cc8cc Size: 168 bytes */
void FUN_100cc8cc(int param_1,int *param_2)

{
  int *puVar1;
  int *puVar2;
  int local_20 [8];
  
  puVar2 = (int *)(((char*)0) + -0x20);
  FUN_100f5104(param_1,param_2);
  puVar1 = puVar2;
  if ((((char*)0) != (char *)0x20) ||
     (puVar1 = (int *)FUN_100f56e4(0x10), puVar1 != (int *)0x0)) {
    *puVar1 = *(int *)(param_1 + 4);
    puVar1[1] = *(int *)(param_1 + 8);
    puVar1[2] = *(int *)(param_1 + 0xc);
    puVar1[3] = *(int *)(param_1 + 0x10);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),puVar2);
  return;
}

/* Address: 0x100cc974 Size: 256 bytes */
long long FUN_100cc974(long long param_1,int param_2)

{
  long long uVar1;
  int *puVar2;
  int iVar3;
  char *puVar4;
  int *puVar5;
  char auStack_30 [16];
  int local_20 [8];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar4 = ((char*)0) + -0x30;
    puVar5 = (int *)(((char*)0) + -0x20);
    puVar2 = puVar5;
    if ((((char*)0) != (char *)0x20) ||
       (puVar2 = (int *)FUN_100f56e4(0x10), puVar2 != (int *)0x0)) {
      *puVar2 = *(int *)(param_2 + 4);
      puVar2[1] = *(int *)(param_2 + 8);
      puVar2[2] = *(int *)(param_2 + 0xc);
      puVar2[3] = *(int *)(param_2 + 0x10);
    }
    iVar3 = FUN_100e16fc(param_1 + 4,puVar5);
    if (iVar3 == 0) {
      FUN_100e17d8(param_1 + 4,puVar4,puVar5);
      iVar3 = FUN_100e1a08(puVar4);
      if (iVar3 == 0) {
        iVar3 = FUN_100e16fc(puVar4,puVar5);
        if (iVar3 == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}

/* Address: 0x100cca7c Size: 120 bytes */
int * FUN_100cca7c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100cc430(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2e6));
    param_1[1] = 0;
    *(char *)(param_1 + 2) = 1;
  }
  return param_1;
}

/* Address: 0x100ccaf4 Size: 40 bytes */
void FUN_100ccaf4(void)

{
  FUN_100cca7c(0);
  return;
}

/* Address: 0x100ccb1c Size: 348 bytes */
void FUN_100ccb1c(int param_1,int *param_2)

{
  int *puVar1;
  int uVar4;
  long long uVar2;
  long long uVar3;
  int iVar5;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = puRam10117370;
  FUN_100f5100(param_1,param_2);
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x148) + (int)param_2);
    *(int *)(param_1 + 4) = uVar4;
  }
  else {
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
    uVar3 = FUN_10000360(*(int *)(param_1 + 4));
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = *puVar1;
    *puVar1 = auStack_138;
    iVar5 = FUN_10000090(auStack_138);
    if (iVar5 == 0) {
      FUN_100f16f8(*(int *)(param_1 + 4),uVar2);
      FUN_10002598(*(int *)(param_1 + 4));
      FUN_100db1ec();
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),**(int **)(param_1 + 4),
                   uVar2);
      FUN_10001b60(*(int *)(param_1 + 4),uVar3);
      *puVar1 = local_30;
    }
    else {
      FUN_10001b60(*(int *)(param_1 + 4),uVar3);
      FUN_100db158(local_38,local_34);
    }
  }
  return;
}

/* Address: 0x100ccc78 Size: 88 bytes */
void FUN_100ccc78(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1d8),*(int *)(param_1 + 4));
  return;
}

/* Address: 0x100cccd0 Size: 228 bytes */
int FUN_100cccd0(int param_1)

{
  int *puVar1;
  int iVar2;
  int uVar3;
  int local_130;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  local_130 = FUN_100f5088(param_1);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar1;
  *puVar1 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    *(int *)(local_130 + 4) = 0;
    uVar3 = FUN_100ed918();
    *(int *)(local_130 + 4) = uVar3;
    FUN_100005a0(*(int *)(param_1 + 4),*(int *)(local_130 + 4));
    *puVar1 = local_24;
  }
  else {
    local_130 = FUN_100f57c8(local_130);
    FUN_100db158(local_2c,local_28);
  }
  return local_130;
}

/* Address: 0x100ccdb4 Size: 172 bytes */
long long FUN_100ccdb4(int param_1)

{
  long long lVar1;
  int iVar2;
  int iVar3;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  if (*(int *)(param_1 + 4) == 0) {
    lVar1 = 0;
  }
  else {
    iVar2 = FUN_10000060(*(int *)(param_1 + 4));
    if (iVar2 == 0) {
      iVar2 = **(int **)(param_1 + 4);
      local_10 = *(short *)(iVar2 + 2);
      local_e = *(short *)(iVar2 + 4);
      local_c = *(short *)(iVar2 + 6);
      local_a = *(short *)(iVar2 + 8);
      iVar2 = FUN_100b08a4(&local_10,1);
      iVar3 = FUN_100b08a4(&local_10,0);
      lVar1 = (long long)iVar3 * (long long)iVar2;
    }
    else {
      lVar1 = 0;
    }
  }
  return lVar1;
}

/* Address: 0x100cce60 Size: 252 bytes */
long long FUN_100cce60(int param_1,int param_2)

{
  int uVar1;
  long long uVar2;
  int iVar3;
  char auStack_128 [276];
  int local_14;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(int *)(param_2 + 4);
    iVar3 = FUN_10002e38(*(int *)(param_1 + 4),uVar1);
    if (iVar3 == 0) {
      FUN_100ee64c(auStack_128);
      FUN_10002be0(*(int *)(param_1 + 4),uVar1,local_14);
      iVar3 = FUN_10000060(local_14);
      if (iVar3 == 0) {
        iVar3 = FUN_10002e38(uVar1,local_14);
        if (iVar3 == 0) {
          FUN_100ee77c(auStack_128,2);
          uVar2 = 1;
        }
        else {
          FUN_100ee77c(auStack_128,2);
          uVar2 = 3;
        }
      }
      else {
        FUN_100ee77c(auStack_128,2);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

/* Address: 0x100ccf5c Size: 80 bytes */
void FUN_100ccf5c(int param_1)

{
  int uVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = FUN_100ef5b8(*(int *)(param_1 + 4));
    *(int *)(param_1 + 4) = uVar1;
  }
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100ccfb8 Size: 68 bytes */
void FUN_100ccfb8(int param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100b0578(param_2);
  FUN_10003150(*(int *)(param_1 + 4),uVar1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ccffc(void) { }















/* Address: 0x100cd0a4 Size: 96 bytes */
unsigned long long FUN_100cd0a4(long long param_1,int *param_2)

{
  long long lVar1;
  char auStack_10 [16];
  
  lVar1 = FUN_10000228(0,param_1,auStack_10);
  if (0 < (int)lVar1) {
    *param_2 = (int)param_1;
  }
  return ((-1 - lVar1) + (unsigned long long)(lVar1 == 0) << 0x20) >> 0x3f;
}

/* Address: 0x100cd104 Size: 8 bytes */
int FUN_100cd104(void)

{
  return uRam10116d2c;
}

/* Address: 0x100cd114 Size: 132 bytes */
int * FUN_100cd114(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x88),
     param_1 != (int *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2dc));
    param_1[0x21] = 0;
    *(char *)(param_1 + 0x20) = 0;
    *(char *)((int)param_1 + 0x81) = 0;
    *(short *)((int)param_1 + 0x82) = 0;
  }
  return param_1;
}

/* Address: 0x100cd198 Size: 40 bytes */
void FUN_100cd198(void)

{
  FUN_100cd114(0);
  return;
}

/* Address: 0x100cd1c4 Size: 72 bytes */
void FUN_100cd1c4(int param_1)

{
  int iVar1;
  
  FUN_1010937c(param_1);
  iVar1 = FUN_10002298();
  *(short *)(param_1 + 0x82) = *(short *)(iVar1 + 8) + -1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cd20c(int *param_1,int *param_2) { }











































































/* Address: 0x100cd454 Size: 444 bytes */
void FUN_100cd454(int *param_1)

{
  int *puVar1;
  int iVar3;
  char uVar5;
  int iVar4;
  long long uVar2;
  int local_140 [2];
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  char auStack_20 [32];
  
  puVar1 = puRam10117370;
  if (*(short *)((int)param_1 + 0x82) != *(short *)(*piRam101169f4 + 0x38)) {
    iVar3 = FUN_100ef510(param_1[0x21]);
    param_1[0x21] = iVar3;
    uVar5 = FUN_100cd0a4(0x50494354,local_140);
    *(char *)(param_1 + 0x20) = uVar5;
    iVar3 = FUN_100cd0a4(0x54455854,local_140);
    *(char *)((int)param_1 + 0x81) = (char)iVar3;
    if ((*(char *)(param_1 + 0x20) != '\0') || (iVar3 != 0)) {
      iVar3 = FUN_100f15e0(0);
      local_38 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_30 = *puVar1;
      *puVar1 = auStack_138;
      iVar4 = FUN_10000090(auStack_138);
      if (iVar4 == 0) {
        uVar2 = FUN_100f1574(1);
        iVar4 = FUN_10000228(iVar3,local_140[0],auStack_20);
        FUN_100f1574(uVar2);
        if (iVar4 < 0) {
          FUN_100db2f4((short)iVar4);
        }
        param_1[0x21] = iVar3;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
        *puVar1 = local_30;
      }
      else {
        FUN_100ef510(iVar3);
        param_1[0x21] = 0;
        FUN_100db158(local_38,local_34);
      }
    }
  }
  return;
}

/* Address: 0x100cd610 Size: 548 bytes */
void FUN_100cd610(int *param_1,long long param_2)

{
  int *puVar1;
  int *piVar2;
  int *puVar3;
  int iVar6;
  long long uVar4;
  long long uVar5;
  int local_17c;
  char local_154 [8];
  int local_14c;
  int local_144 [2];
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar3 = puRam10117370;
  puVar1 = puRam10116a40;
  piVar2 = piRam101169f4;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = *puRam10117370;
  *puRam10117370 = auStack_13c;
  iVar6 = FUN_10000090(auStack_13c);
  if (iVar6 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
    if (*(char *)((int)param_1 + 0x81) == '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        if (**(char **)(local_17c + -0x90) == '\0') {
          FUN_100b08d4(local_154,(unsigned long long)*(unsigned int *)param_1[0x21] + 2);
          local_14c = *puVar1;
          local_144[0] = local_14c;
        }
        else {
          FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,local_144);
        }
        uVar4 = FUN_100b0578(local_144);
        FUN_10000750(param_1[0x21],uVar4);
      }
    }
    else {
      FUN_100f0788(*(int *)(local_17c + -0x8c));
      FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,local_144);
      uVar4 = FUN_100ef9b8(param_1[0x21]);
      puVar1 = (int *)param_1[0x21];
      uVar5 = FUN_10001c20();
      FUN_100efdd0(*puVar1,uVar5,local_144,0,1,0,0);
      FUN_10001b60(param_1[0x21],uVar4);
    }
    if (*(short *)((int)param_1 + 0x82) != *(short *)(*piVar2 + 0x38)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x500) + (int)param_1,local_144);
      *(short *)((int)param_1 + 0x82) = *(short *)(*piVar2 + 0x38);
      *(char *)(*piVar2 + 0x58) = 1;
    }
    *puVar3 = local_34;
  }
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100cd834 Size: 168 bytes */
void FUN_100cd834(int *param_1,long long param_2,long long param_3,char param_4)

{
  int iVar1;
  char auStack_28 [8];
  char auStack_20 [32];
  
  FUN_100e1a64(auStack_20);
  FUN_100e1a64(auStack_28,param_3);
  iVar1 = FUN_100e11c8(auStack_20,auStack_28);
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    if (param_4 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
    }
  }
  return;
}

/* Address: 0x100cd8e0 Size: 60 bytes */
void FUN_100cd8e0(void)

{
  FUN_100c1c8c(uRam10116d2c,*puRam10116d34,0x88,uRam10116d38,uRam10116c7c);
  return;
}

/* Address: 0x100cdf78 Size: 36 bytes */
void FUN_100cdf78(void)

{
  FUN_100f5274();
  return;
}

/* Address: 0x100ce4c8 Size: 80 bytes */
long long FUN_100ce4c8(void)

{
  long long uVar1;
  
  if (*piRam10117818 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884(*piRam10117818 + (int)*(short *)(*(int *)*piRam10117818 + 0xa8));
  }
  return uVar1;
}

/* Address: 0x100ce518 Size: 80 bytes */
void FUN_100ce518(long long param_1)

{
  if (*piRam10117818 != 0) {
    FUN_10117884(*piRam10117818 + (int)*(short *)(*(int *)*piRam10117818 + 0xb8),param_1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ce568(unsigned char *param_1) { }




































































































/* Address: 0x100ce6f0 Size: 40 bytes */
void FUN_100ce6f0(void)

{
  FUN_100cd924(0);
  return;
}

/* Address: 0x100ce718 Size: 120 bytes */
void FUN_100ce718(int *param_1)

{
  int *piVar1;
  
  FUN_10105d28(param_1);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x808) + (int)piVar1,param_1[0x20],param_1[0x21]);
  }
  return;
}

/* Address: 0x100ce79c Size: 232 bytes */
void FUN_100ce79c(int *param_1,int *param_2)

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
  FUN_1010937c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x138) + (int)param_2);
    param_1[0x20] = iVar2;
    iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x138) + (int)param_2);
    param_1[0x21] = iVar2;
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100ce884 Size: 116 bytes */
void FUN_100ce884(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 0x80));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 0x84));
  return;
}

/* Address: 0x100ce900 Size: 40 bytes */
void FUN_100ce900(void)

{
  FUN_100cd9a4(0);
  return;
}

/* Address: 0x100ce928 Size: 284 bytes */
int * FUN_100ce928(int *param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char local_22c [256];
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  piVar2[0x2b] = 0;
  if (param_1[0x2b] != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      local_22c[0] = 0;
      FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_22c);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7b0),local_22c,0);
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}

/* Address: 0x100cea44 Size: 76 bytes */
void FUN_100cea44(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100cea9c Size: 380 bytes */
void FUN_100cea9c(int *param_1,int *param_2)

{
  int uVar1;
  unsigned char *pbVar2;
  int *puVar3;
  int iVar6;
  unsigned long long uVar4;
  short uVar7;
  long long uVar5;
  unsigned long long uVar8;
  long long lVar9;
  int local_25c;
  
  puVar3 = puRam10117370;
  uVar8 = ZEXT48(((char*)0)) - 0x238;
  lVar9 = ZEXT48(((char*)0)) - 0x138;
  FUN_100c6c9c(param_1,param_2);
  uVar1 = *puVar3;
  *puVar3 = (int)lVar9;
  iVar6 = FUN_10000090(lVar9);
  if (iVar6 == 0) {
    pbVar2 = *(unsigned char **)(local_25c + -0xe4c);
    uVar4 = uVar8;
    if (((uVar8 & 0xffffffff) != 0) || (uVar4 = FUN_100f56e4(0x100), (uVar4 & 0xffffffff) != 0)) {
      FUN_100012d8(pbVar2,uVar4,(unsigned long long)*pbVar2 + 1);
    }
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x2a) = uVar7;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xaa) = (short)uVar5;
    if (*(short *)(param_1 + 0x2a) != -1) {
      FUN_100009d8(uVar8,*(short *)(param_1 + 0x2a),uVar5);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),uVar8,0);
    *puVar3 = uVar1;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  return;
}

/* Address: 0x100cec18 Size: 116 bytes */
void FUN_100cec18(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xaa));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cec8c(int param_1,long long param_2,int *param_3,long long param_4) { }






































































/* Address: 0x100ced8c Size: 712 bytes */
void FUN_100ced8c(int *param_1,long long param_2)

{
  short sVar1;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  char auStack_2b8 [8];
  short local_2b0 [130];
  short local_1ac;
  short local_1aa;
  int local_1a4;
  int uStack_1a0;
  int iStack_19c;
  int iStack_198;
  char auStack_194 [8];
  int local_18c;
  int local_188;
  short local_184;
  short local_182;
  short local_17c;
  short local_17a;
  char local_174 [256];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [4];
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  char auStack_4c [76];
  
  FUN_100b02d0(&local_17c);
  if (param_1[0x2b] != 0) {
    FUN_10000030();
    FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,&local_17c);
    FUN_100031b0(local_17a,local_17c);
    FUN_100ef8c8(auStack_194);
    FUN_100ee844(auStack_2b8,*(char *)((int)param_1 + 0xa6));
    local_2c8 = param_1[0x26];
    iStack_2c4 = param_1[0x27];
    iStack_2c0 = param_1[0x28];
    FUN_100eceb0(&local_2c8,auStack_4c,local_2b0);
    FUN_100ee8e8(auStack_2b8,2);
    local_174[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_174);
    FUN_100ce568(local_174);
    FUN_100b1c84(local_174);
    iStack_198 = FUN_100006f0();
    iStack_198 = iStack_198 + 0x18;
    local_74 = 0;
    local_70 = 0x10;
    iStack_19c = (int)local_2b0[0];
    local_1a4 = 0;
    uStack_1a0 = 0x10;
    local_6c = iStack_19c;
    local_68 = iStack_198;
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,local_64);
    local_184 = 1;
    local_182 = 1;
    FUN_100b039c(&local_1ac,&local_17c,&local_184);
    local_18c = (int)local_1ac;
    local_188 = (int)local_1aa;
    FUN_100e16b8(local_64,&local_18c);
    local_64[0] = local_64[0] + ((int)local_2b0[0] >> 1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),local_64,&local_54);
    FUN_10000270(local_52 + 0x10,local_54);
    FUN_10001d88(local_52,local_54);
    FUN_10001d88(local_52,local_50);
    FUN_10001d88(local_4e,local_50);
    FUN_10001d88(local_4e,local_54);
    sVar1 = FUN_100e1a3c(&local_1a4,1);
    FUN_10001d88(local_52 + sVar1 + 0x10,local_54);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),param_2);
    FUN_100f0538(auStack_194);
  }
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100cf054 Size: 340 bytes */
void FUN_100cf054(int *param_1,long long param_2)

{
  int iVar1;
  char auStack_16c [16];
  char auStack_15c [8];
  char auStack_154 [8];
  int local_14c;
  int uStack_148;
  int uStack_144;
  int iStack_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  char local_12c;
  char auStack_12b [255];
  char auStack_2c [44];
  
  local_12c = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),&local_12c);
  FUN_100ce568(&local_12c);
  FUN_100ee844(auStack_15c,*(char *)((int)param_1 + 0xa6));
  FUN_100b1c84(&local_12c);
  iVar1 = FUN_100006f0();
  uStack_144 = FUN_100ef96c(auStack_2c);
  local_13c = 0;
  local_138 = 0x10;
  local_14c = 0;
  uStack_148 = 0x10;
  iStack_140 = iVar1 + 0x18;
  local_134 = uStack_144;
  local_130 = iVar1 + 0x18;
  FUN_100ee8e8(auStack_15c,2);
  FUN_100e17d8(&local_14c,auStack_16c,param_2);
  iVar1 = FUN_100e1a08(auStack_16c);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_14c,auStack_154);
    FUN_100efdd0(auStack_12b,local_12c,auStack_154,1,0,0,0,0);
  }
  return;
}

/* Address: 0x100cf1a8 Size: 112 bytes */
void FUN_100cf1a8(int param_1,long long param_2)

{
  unsigned char *pbVar1;
  
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
    FUN_100012d8(pbRam10116a54,param_2,(unsigned long long)*pbRam10116a54 + 1);
  }
  else {
    pbVar1 = (unsigned char *)**(int **)(param_1 + 0xac);
    FUN_100012d8(pbVar1,param_2,(unsigned long long)*pbVar1 + 1);
  }
  return;
}

/* Address: 0x100cf218 Size: 56 bytes */
void FUN_100cf218(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0xac));
  *(int *)(param_1 + 0xac) = uVar1;
  return;
}

/* Address: 0x100cf250 Size: 176 bytes */
void FUN_100cf250(int *param_1,unsigned char *param_2,char param_3)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
  if (-1 < (long long)(((unsigned long long)*param_2 - 1) + (unsigned long long)((unsigned long long)*param_2 != 0) << 0x20)) {
    FUN_100b1c84(param_2);
    iVar1 = FUN_10001ae8();
    param_1[0x2b] = iVar1;
    iVar1 = FUN_10002b20();
    if (iVar1 != 0) {
      param_1[0x2b] = 0;
    }
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100cf300 Size: 204 bytes */
void FUN_100cf300(int *param_1,short param_2,short param_3,char param_4)

{
  char local_118 [280];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
  *(short *)(param_1 + 0x2a) = param_2;
  *(short *)((int)param_1 + 0xaa) = param_3;
  if (param_2 != -1) {
    local_118[0] = 0;
    FUN_100009d8(local_118,*(short *)(param_1 + 0x2a),*(short *)((int)param_1 + 0xaa));
    FUN_100db328();
    FUN_10117884((int)*(short *)(*param_1 + 0x7b0) + (int)param_1,local_118,0);
  }
  if (param_4 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100cf3d4 Size: 244 bytes */
void FUN_100cf3d4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_148 [328];
  
  FUN_1010556c(auStack_148,param_1);
  piVar1 = (int *)FUN_10105660(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    if (piVar1[6] == param_2) {
      FUN_10117884((int)*(short *)(*piVar1 + 200) + (int)piVar1,0x1f,param_1,0);
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),0x20,param_1,0);
    }
    piVar1 = (int *)FUN_10105684(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  *(int *)(param_1 + 0xb0) = param_2;
  FUN_101055f4(auStack_148,2);
  return;
}

/* Address: 0x100cf4d0 Size: 40 bytes */
void FUN_100cf4d0(void)

{
  FUN_100cda40(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cf4f8(int *param_1) { }










































































































/* Address: 0x100cf5fc Size: 272 bytes */
int * FUN_100cf5fc(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  piVar2[0x2b] = 0;
  *(char *)((int)piVar2 + 0xa9) = 1;
  *(char *)(piVar2 + 0x2a) = 1;
  *(short *)((int)piVar2 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7a8),*(short *)(param_1 + 0xaa),0)
      ;
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}

/* Address: 0x100cf70c Size: 76 bytes */
void FUN_100cf70c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100cf764 Size: 268 bytes */
void FUN_100cf764(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  char uVar4;
  long long uVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)(param_1 + 0x2a) = uVar4;
    *(char *)((int)param_1 + 0xa9) = uVar4;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,uVar2,0);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100cf870 Size: 116 bytes */
void FUN_100cf870(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xaa));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100cf8e4(int *param_1,long long param_2) { }














































































/* Address: 0x100cfae0 Size: 112 bytes */
void FUN_100cfae0(int param_1)

{
  *(short *)(param_1 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      FUN_10001f50(*(int *)(param_1 + 0xac));
    }
    else {
      FUN_10001f38(*(int *)(param_1 + 0xac));
    }
    *(int *)(param_1 + 0xac) = 0;
  }
  return;
}

/* Address: 0x100cfb50 Size: 212 bytes */
void FUN_100cfb50(int *param_1,long long param_2,char param_3)

{
  long long lVar1;
  int iVar2;
  long long lVar3;
  short local_118 [2];
  char auStack_114 [4];
  char auStack_110 [272];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10000b70(param_2);
  FUN_100db328();
  lVar1 = FUN_10001c20(param_2);
  lVar3 = -lVar1 + 0x80;
  *(char *)(param_1 + 0x2a) = (char)lVar3 + (-(lVar3 == 0) - ((char)-lVar1 + '\x7f'));
  param_1[0x2b] = (int)param_2;
  FUN_10001758(param_2,local_118,auStack_114,auStack_110);
  iVar2 = FUN_10000678();
  if (iVar2 == 0) {
    *(short *)((int)param_1 + 0xaa) = local_118[0];
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100cfc24 Size: 300 bytes */
void FUN_100cfc24(int *param_1,short param_2,char param_3)

{
  long long uVar1;
  long long uVar2;
  int iVar3;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)((int)param_1 + 0xaa) = param_2;
  if (param_2 != -1) {
    if ((*(char *)(param_1 + 0x2a) != '\0') &&
       (uVar1 = FUN_10001728(0x6369636e,*(short *)((int)param_1 + 0xaa)), (int)uVar1 != 0)) {
      uVar2 = FUN_10000360(uVar1);
      FUN_10000048(uVar1);
      iVar3 = FUN_10001f68(*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar3;
      FUN_10001b60(uVar1,uVar2);
    }
    if (param_1[0x2b] == 0) {
      iVar3 = FUN_10001f80(*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar3;
      if (iVar3 != 0) {
        *(char *)((int)param_1 + 0xa9) = 0;
      }
    }
    else {
      *(char *)((int)param_1 + 0xa9) = 1;
    }
    FUN_100db2a4(param_1[0x2b]);
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100cfd68 Size: 40 bytes */
void FUN_100cfd68(void)

{
  FUN_100cdad4(0);
  return;
}

/* Address: 0x100cfd90 Size: 252 bytes */
int * FUN_100cfd90(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  *(short *)(piVar2 + 0x2a) = 0xffff;
  piVar2[0x2b] = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7a0),*(short *)(param_1 + 0xa8),0)
      ;
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}

/* Address: 0x100cfe98 Size: 236 bytes */
void FUN_100cfe98(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,uVar2,0);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100cff84 Size: 88 bytes */
void FUN_100cff84(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xa8));
  return;
}

/* Address: 0x100cffdc Size: 356 bytes */
void FUN_100cffdc(int *param_1,long long param_2)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  unsigned int local_50;
  int local_4c;
  short local_48;
  char auStack_46 [10];
  char auStack_3c [8];
  char auStack_34 [52];
  
  if (param_1[0x2b] != 0) {
    iVar3 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar3 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_34);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_34,auStack_3c);
      uVar1 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      local_4c = *(int *)param_1[0x2b];
      local_48 = 2;
      FUN_10003108(auStack_46,0,0,0x10,0x10);
      FUN_10000660(&local_50);
      uVar2 = FUN_100b0578(auStack_3c);
      FUN_100008d0(&local_4c,(unsigned long long)local_50 + 2,auStack_46,uVar2,0,0);
      FUN_10001b60(param_1[0x2b],uVar1);
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100d0140 Size: 84 bytes */
void FUN_100d0140(int param_1)

{
  *(short *)(param_1 + 0xa8) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10001f50(*(int *)(param_1 + 0xac));
    *(int *)(param_1 + 0xac) = 0;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d0194(int *param_1,short param_2,char param_3) { }

































/* Address: 0x100d0230 Size: 40 bytes */
void FUN_100d0230(void)

{
  FUN_100cddf4(0);
  return;
}

/* Address: 0x100d0258 Size: 272 bytes */
int * FUN_100d0258(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  piVar2[0x2b] = 0;
  *(char *)(piVar2 + 0x2a) = 1;
  *(char *)((int)piVar2 + 0xa9) = 1;
  *(short *)((int)piVar2 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7a8),*(short *)(param_1 + 0xaa),0)
      ;
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}

/* Address: 0x100d0368 Size: 76 bytes */
void FUN_100d0368(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100d03c0 Size: 268 bytes */
void FUN_100d03c0(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  char uVar4;
  long long uVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)(param_1 + 0x2a) = uVar4;
    *(char *)((int)param_1 + 0xa9) = uVar4;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,uVar2,0);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100d04cc Size: 116 bytes */
void FUN_100d04cc(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xaa));
  return;
}

/* Address: 0x100d0540 Size: 332 bytes */
void FUN_100d0540(int *param_1,long long param_2)

{
  int iVar2;
  long long uVar1;
  char auStack_28 [16];
  char auStack_18 [24];
  
  if (param_1[0x2b] != 0) {
    iVar2 = FUN_100ef2f8(param_1[0x2b]);
    if ((iVar2 != 0) && (*(char *)((int)param_1 + 0xa9) == '\0')) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10000030();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_18);
      iVar2 = FUN_100efab0(param_1[0x2b]);
      if (iVar2 == 0) {
        FUN_10002598(param_1[0x2b]);
      }
      if (*(char *)((int)param_1 + 0xa9) == '\0') {
        uVar1 = FUN_100b0578(auStack_18);
        FUN_10000af8(uVar1,*(int *)param_1[0x2b]);
      }
      else {
        uVar1 = FUN_100b0578(auStack_18);
        FUN_10000ae0(uVar1,param_1[0x2b]);
      }
      if (iVar2 == 0) {
        FUN_10002ad8(param_1[0x2b]);
      }
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100d068c Size: 112 bytes */
void FUN_100d068c(int param_1)

{
  *(short *)(param_1 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      FUN_10001f50(*(int *)(param_1 + 0xac));
    }
    else {
      FUN_10002da8(*(int *)(param_1 + 0xac));
    }
    *(int *)(param_1 + 0xac) = 0;
  }
  return;
}

/* Address: 0x100d06fc Size: 172 bytes */
void FUN_100d06fc(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  short local_118 [2];
  char auStack_114 [4];
  char auStack_110 [272];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  param_1[0x2b] = (int)param_2;
  if (*(char *)((int)param_1 + 0xa9) == '\0') {
    FUN_10001758(param_2,local_118,auStack_114,auStack_110);
    iVar1 = FUN_10000678();
    if (iVar1 == 0) {
      *(short *)((int)param_1 + 0xaa) = local_118[0];
    }
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100d07a8 Size: 220 bytes */
void FUN_100d07a8(int *param_1,short param_2,char param_3)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)((int)param_1 + 0xaa) = param_2;
  if (param_2 != -1) {
    if (*(char *)(param_1 + 0x2a) != '\0') {
      iVar1 = FUN_10002208(*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar1;
    }
    if (param_1[0x2b] == 0) {
      iVar1 = FUN_100025e0(*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar1;
      if (iVar1 != 0) {
        *(char *)((int)param_1 + 0xa9) = 0;
      }
    }
    else {
      *(char *)((int)param_1 + 0xa9) = 1;
    }
    FUN_100db2a4(param_1[0x2b]);
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100d089c Size: 40 bytes */
void FUN_100d089c(void)

{
  FUN_100cdb5c(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d08c4(int *param_1) { }

































































































/* Address: 0x100d09bc Size: 252 bytes */
int * FUN_100d09bc(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  *(short *)(piVar2 + 0x2a) = 0xffff;
  piVar2[0x2b] = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7a8),*(short *)(param_1 + 0xa8),0)
      ;
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}

/* Address: 0x100d0ab8 Size: 76 bytes */
void FUN_100d0ab8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100d0b10 Size: 236 bytes */
void FUN_100d0b10(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,uVar2,0);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100d0bfc Size: 88 bytes */
void FUN_100d0bfc(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xa8));
  return;
}

/* Address: 0x100d0c54 Size: 272 bytes */
void FUN_100d0c54(int *param_1,long long param_2)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  char auStack_30 [8];
  char auStack_28 [40];
  
  if (param_1[0x2b] != 0) {
    iVar3 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar3 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_30);
      uVar1 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10000030();
      uVar2 = FUN_100b0578(auStack_30);
      FUN_10000750(param_1[0x2b],uVar2);
      FUN_10001b60(param_1[0x2b],uVar1);
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100d0d64 Size: 84 bytes */
void FUN_100d0d64(int param_1)

{
  *(short *)(param_1 + 0xa8) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10001f50(*(int *)(param_1 + 0xac));
    *(int *)(param_1 + 0xac) = 0;
  }
  return;
}

/* Address: 0x100d0db8 Size: 160 bytes */
void FUN_100d0db8(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  short local_118 [2];
  char auStack_114 [4];
  char auStack_110 [272];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  param_1[0x2b] = (int)param_2;
  FUN_10001758(param_2,local_118,auStack_114,auStack_110);
  iVar1 = FUN_10000678();
  if (iVar1 == 0) {
    *(short *)(param_1 + 0x2a) = local_118[0];
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d0e58(int *param_1,short param_2,char param_3) { }

































/* Address: 0x100d0eec Size: 116 bytes */
int * FUN_100d0eec(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xe0),
     param_1 != (int *)0x0)) {
    FUN_100fff20(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x2c1));
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  return param_1;
}

/* Address: 0x100d0f60 Size: 40 bytes */
void FUN_100d0f60(void)

{
  FUN_100d0eec(0);
  return;
}

/* Address: 0x100d0f88 Size: 444 bytes */
void FUN_100d0f88(int *param_1)

{
  int uVar1;
  int *puVar2;
  int iVar3;
  int *local_260;
  char auStack_25c [256];
  short local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar2 = puRam10117370;
  uVar1 = uRam10116bc0;
  local_260 = (int *)0x0;
  FUN_101001e0(param_1);
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = *puVar2;
  *puVar2 = auStack_144;
  iVar3 = FUN_10000090(auStack_144);
  if (iVar3 == 0) {
    local_260 = (int *)FUN_100f6b8c(0);
    FUN_100f6c9c(local_260,0,uVar1,uVar1,1,1,uVar1);
    local_15c = 0;
    local_158 = 0;
    local_150 = 0;
    local_14c = 0;
    local_154 = *puVar2;
    *puVar2 = auStack_25c;
    iVar3 = FUN_10000090(auStack_25c);
    if (iVar3 == 0) {
      FUN_10117884((int)local_260 + (int)*(short *)(*local_260 + 0x2e0),param_1);
      *puVar2 = local_154;
    }
    else {
      local_260 = (int *)FUN_100f57c8(local_260);
      FUN_100db158(local_15c,local_158);
    }
    *puVar2 = local_3c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_44,local_40);
  }
  param_1[0x37] = (int)local_260;
  FUN_10000540(2,0,param_1[0x20]);
  return;
}

/* Address: 0x100d1144 Size: 384 bytes */
int FUN_100d1144(int param_1)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  int local_130;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar2 = puRam10117370;
  local_130 = FUN_1010037c(param_1);
  *(int *)(local_130 + 0xd8) = 0;
  *(int *)(local_130 + 0xdc) = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar2;
  *puVar2 = auStack_12c;
  iVar3 = FUN_10000090(auStack_12c);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 0xdc) + 0x24);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_1);
      uVar4 = FUN_10117884((int)*(int **)(param_1 + 0xdc) +
                           (int)*(short *)(**(int **)(param_1 + 0xdc) + 0x88));
      *(int *)(local_130 + 0xdc) = uVar4;
      FUN_10117884((int)*(int **)(local_130 + 0xdc) +
                   (int)*(short *)(**(int **)(local_130 + 0xdc) + 0x2e0),local_130);
      piVar1 = *(int **)(*(int *)(local_130 + 0xdc) + 0x24);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x150),local_130);
      piVar1 = *(int **)(*(int *)(param_1 + 0xdc) + 0x24);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x150),param_1);
    }
    *puVar2 = local_24;
  }
  else {
    local_130 = FUN_100f57c8(local_130);
    FUN_100db158(local_2c,local_28);
  }
  return local_130;
}

/* Address: 0x100d12c4 Size: 108 bytes */
void FUN_100d12c4(int param_1)

{
  int *piVar1;
  int uVar2;
  
  piVar1 = *(int **)(param_1 + 0xdc);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x2e8) + (int)piVar1,param_1);
    uVar2 = FUN_100f57c8(*(int *)(param_1 + 0xdc));
    *(int *)(param_1 + 0xdc) = uVar2;
  }
  FUN_101008dc(param_1);
  return;
}

/* Address: 0x100d1330 Size: 320 bytes */
void FUN_100d1330(int *param_1)

{
  int uVar1;
  int *puVar2;
  int iVar3;
  int *local_134;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar2 = puRam10117370;
  uVar1 = uRam10116bc0;
  FUN_1010099c(param_1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar2;
  *puVar2 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    local_134 = (int *)FUN_100f6b8c(0);
    FUN_100f6c9c(local_134,0,uVar1,uVar1,1,1,uVar1);
    FUN_10117884((int)local_134 + (int)*(short *)(*local_134 + 0x2e0),param_1);
    *puVar2 = local_28;
  }
  else {
    local_134 = (int *)FUN_100f57c8(0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  param_1[0x37] = (int)local_134;
  FUN_10000540(2,0,param_1[0x20]);
  return;
}

/* Address: 0x100d1470 Size: 36 bytes */
void FUN_100d1470(void)

{
  FUN_10100bf8();
  return;
}

/* Address: 0x100d1494 Size: 848 bytes */
void FUN_100d1494(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar3;
  int *ppuVar4;
  int iVar6;
  long long uVar5;
  int **local_16c;
  int local_148;
  int iStack_144;
  int iStack_140;
  char auStack_128 [16];
  char local_118 [280];
  int iVar2;
  
  local_118[0] = 0;
  piVar3 = (int *)param_1[0x36];
  ppuVar4 = 0 /* TVect base */;
  if (piVar3 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar3 + 0x2e8) + (int)piVar3,param_1[0x37]);
    param_1[0x36] = 0;
    ppuVar4 = local_16c;
  }
  if (param_2 != (int *)0x0) {
    *(char *)((int)param_1 + 0xbe) = *(char *)((int)param_2 + 0xa6);
    param_1[0x33] = param_2[0x2f];
    *(short *)(param_1 + 0x28) = *(short *)(param_2 + 0x2d);
    piVar3 = (int *)(*(int*)((char*)ppuVar4 - 0x319));
    iVar6 = piVar3[1];
    iVar1 = piVar3[2];
    iVar2 = piVar3[3];
    param_1[0x23] = *piVar3;
    param_1[0x24] = iVar6;
    param_1[0x25] = iVar1;
    param_1[0x26] = iVar2;
    FUN_10117884((int)*(short *)(*param_2 + 0x4c0) + (int)param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x800),*(short *)(param_2 + 0x2c),0)
    ;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),
                 *(char *)((int)param_2 + 0xb2),0);
    local_148 = param_2[0x26];
    iStack_144 = param_2[0x27];
    iStack_140 = param_2[0x28];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x808),0,0,0xf,&local_148,0);
    FUN_10117884((int)*(short *)(*param_2 + 0x730) + (int)param_2,auStack_128);
    if (*(char *)(param_1 + 0x31) == '\0') {
      *(char *)((int)param_1 + 0x45) = 4;
    }
    else {
      *(char *)((int)param_1 + 0x45) = 0;
      *(char *)(param_1 + 0x11) = 4;
    }
    FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x350),auStack_128,0);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x7a0),local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810),local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    *(int *)(param_1[0x37] + 0x40) = 0;
    iVar6 = FUN_100ef628(*(short *)(param_1 + 0x30));
    if (iVar6 + 2U < 4) {
      return;
    }
    if (param_3 == '\0') {
      FUN_101000e4(0,0,param_1[0x20]);
    }
    else {
      FUN_101000e4(0,0x7fff,param_1[0x20]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x338),param_1[0x37]);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2e0),param_1[0x37]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),0);
    iVar6 = *param_1;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),
                         *(int *)(*param_2 + 0xe4));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar6 + 0xd8),uVar5);
    piVar3 = (int *)param_1[0x37];
    iVar6 = *piVar3;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),
                         *(int *)(*param_2 + 0xe4));
    FUN_10117884((int)piVar3 + (int)*(short *)(iVar6 + 0xd8),uVar5);
  }
  param_1[0x36] = (int)param_2;
  return;
}

/* Address: 0x100d19f8 Size: 144 bytes */
long long FUN_100d19f8(int *param_1)

{
  long long uVar1;
  int *piVar2;
  
  if (param_1[0x36] == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x218),0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x228));
    uVar1 = FUN_10117884(param_1[0x36] + (int)*(short *)(*(int *)param_1[0x36] + 0x688));
  }
  return uVar1;
}

/* Address: 0x100d1a88 Size: 296 bytes */
void FUN_100d1a88(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [7];
  
  piVar1 = &local_28;
  piVar2 = &local_24;
  FUN_101016c0(param_1,param_2);
  if (*(char *)(param_1 + 0xc4) == '\0') {
    if ((*(char *)(param_1 + 0x45) == '\x04') && (*(char *)(param_1 + 0xc3) == '\0')) {
      local_1c[0] = *(int *)(*(int *)(param_1 + 0xdc) + 0x38);
      local_24 = FUN_100e1a3c(param_2,1);
      if (local_24 < local_1c[0]) {
        piVar2 = local_1c;
      }
      param_2[3] = param_2[1] + *piVar2;
    }
  }
  else if ((*(char *)(param_1 + 0x44) == '\x04') && (*(char *)(param_1 + 0xc3) == '\0')) {
    local_20 = *(int *)(*(int *)(param_1 + 0xdc) + 0x34);
    local_28 = FUN_100e1a3c(param_2,0);
    if (local_28 < local_20) {
      piVar1 = &local_20;
    }
    param_2[2] = *param_2 + *piVar1;
  }
  return;
}

/* Address: 0x100d1bb8 Size: 40 bytes */
void FUN_100d1bb8(void)

{
  FUN_100cdbe4(0);
  return;
}

/* Address: 0x100d1be0 Size: 232 bytes */
int * FUN_100d1be0(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int local_138 [2];
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10105d2c(param_1);
  piVar2[0x2b] = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    local_138[0] = *(int *)(param_1 + 0xac);
    if (local_138[0] != 0) {
      FUN_100f16a0(local_138);
    }
    piVar2[0x2b] = local_138[0];
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return piVar2;
}

/* Address: 0x100d1cc8 Size: 76 bytes */
void FUN_100d1cc8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x100d1d20 Size: 464 bytes */
void FUN_100d1d20(int *param_1,int *param_2)

{
  int uVar1;
  unsigned char *pbVar2;
  int *puVar3;
  int iVar6;
  char uVar8;
  short uVar7;
  unsigned long long uVar4;
  long long uVar5;
  unsigned long long uVar9;
  long long lVar10;
  int local_25c;
  
  puVar3 = puRam10117370;
  uVar9 = ZEXT48(((char*)0)) - 0x238;
  lVar10 = ZEXT48(((char*)0)) - 0x138;
  FUN_100c6c9c(param_1,param_2);
  uVar1 = *puVar3;
  *puVar3 = (int)lVar10;
  iVar6 = FUN_10000090(lVar10);
  if (iVar6 == 0) {
    uVar8 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)((int)param_1 + 0xb2) = uVar8;
    uVar8 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)((int)param_1 + 0xb3) = uVar8;
    uVar7 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x2c) = uVar7;
    pbVar2 = *(unsigned char **)(local_25c + -0xe4c);
    uVar4 = uVar9;
    if (((uVar9 & 0xffffffff) != 0) || (uVar4 = FUN_100f56e4(0x100), (uVar4 & 0xffffffff) != 0)) {
      FUN_100012d8(pbVar2,uVar4,(unsigned long long)*pbVar2 + 1);
    }
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x2a) = uVar7;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xaa) = (short)uVar5;
    if (*(short *)(param_1 + 0x2a) != -1) {
      FUN_100009d8(uVar9,*(short *)(param_1 + 0x2a),uVar5);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),uVar9,0);
    *puVar3 = uVar1;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  return;
}

/* Address: 0x100d1ef0 Size: 200 bytes */
void FUN_100d1ef0(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xb2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xb3));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xb0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xaa));
  return;
}

/* Address: 0x100d1fb8 Size: 76 bytes */
void FUN_100d1fb8(int *param_1,char param_2,char param_3)

{
  *(char *)((int)param_1 + 0xb2) = param_2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100d2004 Size: 40 bytes */
void FUN_100d2004(long long param_1,long long param_2)

{
  FUN_100ce568(param_2);
  return;
}

/* Address: 0x100d202c Size: 212 bytes */
void FUN_100d202c(int *param_1,long long param_2)

{
  char auStack_120 [16];
  char local_110;
  char auStack_10f [271];
  
  if (param_1[0x2b] != 0) {
    local_110 = 0;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),&local_110);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),&local_110);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_120);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8),auStack_10f,local_110,auStack_120,
                 *(short *)(param_1 + 0x2c));
  }
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x100d2100 Size: 100 bytes */
void FUN_100d2100(int param_1,long long param_2)

{
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
    FUN_100012d8(pbRam10116a54,param_2,(unsigned long long)*pbRam10116a54 + 1);
  }
  else {
    FUN_100ef284(**(int **)(param_1 + 0xac),param_2);
  }
  return;
}

/* Address: 0x100d2164 Size: 136 bytes */
void FUN_100d2164(int *param_1,long long param_2,long long param_3,long long param_4,
                 short param_5)

{
  char auStack_1c [28];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_4,auStack_1c);
  FUN_100efdd0(param_2,param_3,auStack_1c,param_5,*(char *)((int)param_1 + 0xb2),0,
               *(char *)((int)param_1 + 0xb3),1);
  return;
}

/* Address: 0x100d21ec Size: 56 bytes */
void FUN_100d21ec(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100ef510(*(int *)(param_1 + 0xac));
  *(int *)(param_1 + 0xac) = uVar1;
  return;
}

/* Address: 0x100d2224 Size: 76 bytes */
void FUN_100d2224(int *param_1,short param_2,char param_3)

{
  *(short *)(param_1 + 0x2c) = param_2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100d2270 Size: 320 bytes */
void FUN_100d2270(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  char auStack_30 [8];
  char auStack_28 [40];
  
  if (((int *)param_1[0x2b] == (int *)0x0) ||
     (iVar1 = FUN_100ef228(param_2,*(int *)param_1[0x2b]), iVar1 != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
    FUN_100b1c84(param_2);
    iVar1 = FUN_10001ae8();
    param_1[0x2b] = iVar1;
    iVar1 = FUN_10002b20();
    if (iVar1 != 0) {
      param_1[0x2b] = 0;
    }
    if (param_3 != '\0') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x678));
      if (iVar1 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_30);
        FUN_100b0578(auStack_30);
        FUN_10002c58();
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_28);
      }
    }
  }
  return;
}

/* Address: 0x100d23b0 Size: 204 bytes */
void FUN_100d23b0(int *param_1,short param_2,short param_3,char param_4)

{
  char local_118 [280];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  *(short *)(param_1 + 0x2a) = param_2;
  *(short *)((int)param_1 + 0xaa) = param_3;
  if (param_2 != -1) {
    local_118[0] = 0;
    FUN_100009d8(local_118,*(short *)(param_1 + 0x2a),*(short *)((int)param_1 + 0xaa));
    FUN_100db328();
    FUN_10117884((int)*(short *)(*param_1 + 0x7c8) + (int)param_1,local_118,0);
  }
  if (param_4 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100d2484 Size: 40 bytes */
void FUN_100d2484(void)

{
  FUN_100cdc88(0);
  return;
}

/* Address: 0x100d24ac Size: 76 bytes */
void FUN_100d24ac(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810));
  FUN_100d1cc8(param_1);
  return;
}

/* Address: 0x100d2504 Size: 232 bytes */
void FUN_100d2504(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar2;
  short uVar3;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100d1d20(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x2d) = uVar3;
    iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x2f] = iVar2;
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100d25ec Size: 116 bytes */
void FUN_100d25ec(int param_1,int *param_2)

{
  FUN_100d1ef0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xb4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0xbc));
  return;
}

/* Address: 0x100d2660 Size: 36 bytes */
void FUN_100d2660(void)

{
  FUN_10109a5c();
  return;
}

/* Address: 0x100d2684 Size: 116 bytes */
int FUN_100d2684(int *param_1,long long param_2,long long param_3,int param_4)

{
  int iVar1;
  int uStack00000024;
  
  uStack00000024 = param_4;
  iVar1 = FUN_1010a9cc(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_1[0x20],param_1,0);
  }
  return iVar1 != 0;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d26f8(int *param_1) { }

















/* Address: 0x100d2754 Size: 160 bytes */
void FUN_100d2754(int *param_1)

{
  int *piVar1;
  
  piVar1 = piRam101169c4;
  if (param_1[0x2e] == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x808),0);
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x338),param_1[0x2e]);
  }
  else {
    FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x338));
  }
  FUN_100d95c8(param_1);
  return;
}

/* Address: 0x100d27f4 Size: 104 bytes */
void FUN_100d27f4(int *param_1,char param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),0,0x7fff,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0));
  return;
}

/* Address: 0x100d285c Size: 228 bytes */
void FUN_100d285c(int *param_1,int param_2)

{
  unsigned char *pbVar1;
  int uVar2;
  char local_110 [272];
  
  uVar2 = uRam10116a54;
  if (param_2 != 0) {
    local_110[0] = 0;
    if (param_2 != -1) {
      if ((param_2 < 1) || (5 < param_2)) {
        param_2 = 1;
      }
      FUN_100009d8(local_110,300,(short)param_2);
      FUN_100009f0(local_110,uVar2,uVar2,uVar2);
      FUN_100d8e3c(300);
    }
    if ((int *)param_1[0x2b] != (int *)0x0) {
      pbVar1 = *(unsigned char **)param_1[0x2b];
      FUN_100012d8(pbVar1,local_110,(unsigned long long)*pbVar1 + 1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),local_110);
    }
  }
  return;
}

/* Address: 0x100d2940 Size: 112 bytes */
void FUN_100d2940(int param_1,char param_2,char param_3)

{
  int *piVar1;
  
  FUN_100d1fb8(param_1,param_2,param_3);
  piVar1 = *(int **)(param_1 + 0xb8);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7d8),param_2,param_3);
  }
  return;
}

/* Address: 0x100d29b0 Size: 208 bytes */
int FUN_100d29b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x2e];
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x218),0);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x228));
  }
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x688));
  if (iVar2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x6a0));
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x800) + (int)param_1);
  }
  return iVar2 == 0;
}

/* Address: 0x100d2a84 Size: 192 bytes */
void FUN_100d2a84(int param_1,char *param_2)

{
  int *puVar1;
  int *piVar2;
  int local_18;
  int local_14 [5];
  
  piVar2 = &local_18;
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_100d2100(param_1,param_2);
  }
  else {
    puVar1 = (int *)
             FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                          (int)*(short *)(**(int **)(param_1 + 0xb8) + 0x7f0));
    local_14[0] = 0xff;
    local_18 = FUN_10001c20(puVar1);
    if (local_14[0] < local_18) {
      piVar2 = local_14;
    }
    *param_2 = (char)*piVar2;
    FUN_10002340(*puVar1,param_2 + 1);
  }
  return;
}

/* Address: 0x100d2b44 Size: 148 bytes */
void FUN_100d2b44(int *param_1,long long param_2,long long param_3,long long param_4,
                 short param_5)

{
  char auStack_1c [28];
  
  if (-1 < (int)param_3) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_4,auStack_1c);
    FUN_100efdd0(param_2,param_3,auStack_1c,param_5,*(char *)((int)param_1 + 0xb2),0,
                 *(char *)((int)param_1 + 0xb3),1);
  }
  return;
}

/* Address: 0x100d2bd8 Size: 220 bytes */
void FUN_100d2bd8(int *param_1,char param_2)

{
  int *ppuVar1;
  int *piVar2;
  int **local_34;
  
  ppuVar1 = 0 /* TVect base */;
  if (param_1[0x2e] == 0) {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x818) + (int)param_1);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x838),param_1,param_2);
    param_1[0x2e] = (int)piVar2;
    ppuVar1 = local_34;
  }
  if (*(char *)((int)param_1 + 0x85) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*(int *)(*(int*)((char*)ppuVar1 - 0x3b)),0);
    ppuVar1 = local_34;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*(int *)(*(int*)((char*)ppuVar1 - 0x38)),0);
  }
  return;
}

/* Address: 0x100d2cb4 Size: 36 bytes */
void FUN_100d2cb4(void)

{
  FUN_100ce4c8();
  return;
}

/* Address: 0x100d2cd8 Size: 60 bytes */
void FUN_100d2cd8(int param_1)

{
  FUN_100ce518(*(int *)(param_1 + 0xb8));
  *(int *)(param_1 + 0xb8) = 0;
  return;
}

/* Address: 0x100d2d14 Size: 276 bytes */
void FUN_100d2d14(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_50;
  int local_4c [3];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char auStack_30 [48];
  
  piVar3 = &local_50;
  piVar2 = local_4c + 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_30);
  local_38 = 0xfffffff6;
  local_34 = 0xfffffff6;
  FUN_100e16b8(auStack_30,&local_38);
  local_4c[2] = FUN_100e1a3c(auStack_30,1);
  local_4c[1] = 30000;
  if (local_4c[2] < 30000) {
    piVar2 = local_4c + 2;
  }
  iVar1 = *piVar2;
  local_4c[0] = FUN_100e1a3c(auStack_30,0);
  local_50 = 30000;
  if (local_4c[0] < 30000) {
    piVar3 = local_4c;
  }
  local_40 = *piVar3;
  local_3c = iVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_30,&local_40,1);
  return;
}

/* Address: 0x100d2e28 Size: 216 bytes */
void FUN_100d2e28(int *param_1)

{
  int *piVar1;
  int *ppuVar2;
  int **local_2c;
  
  piVar1 = (int *)param_1[0x2e];
  ppuVar2 = 0 /* TVect base */;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x838),0,0);
    FUN_10117884((int)*(short *)(*param_1 + 0x820) + (int)param_1);
    ppuVar2 = local_2c;
  }
  if (*(char *)((int)param_1 + 0x85) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*(int *)(*(int*)((char*)ppuVar2 - 0x3b)),0x75
                 ,0);
    ppuVar2 = local_2c;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*(int *)(*(int*)((char*)ppuVar2 - 0x38)),0x7a
                 ,0);
  }
  return;
}

/* Address: 0x100d2f00 Size: 356 bytes */
void FUN_100d2f00(int *param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  int local_34;
  
  piVar1 = (int *)param_1[0x2e];
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x3a8) + (int)piVar1), iVar2 != 0)) {
    FUN_100b0578(*(int *)(local_34 + -0xb00));
    FUN_10002040();
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x758),0);
    FUN_10117884((int)*(short *)(*param_1 + 0x7c8) + (int)param_1,param_2,0);
    FUN_10117884((int)*(short *)(*param_1 + 0x7e0) + (int)param_1,0,0x7fff,0);
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x758),1);
    FUN_10117884((int)*(short *)(*param_1 + 0x3b8) + (int)param_1);
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x4d0));
    return;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),param_2,0);
  return;
}

/* Address: 0x100d3064 Size: 112 bytes */
void FUN_100d3064(int param_1,short param_2,char param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x800),param_2,param_3);
  }
  FUN_100d2224(param_1,param_2,param_3);
  return;
}

/* Address: 0x100d30d4 Size: 160 bytes */
void FUN_100d30d4(int param_1,short param_2,short param_3,char param_4)

{
  int iVar1;
  long long uVar2;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    if ((param_4 == '\0') ||
       (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                             (int)*(short *)(**(int **)(param_1 + 0xb8) + 0x678)), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                 (int)*(short *)(**(int **)(param_1 + 0xb8) + 0x7c0),param_2,param_3,uVar2);
  }
  return;
}

/* Address: 0x100d3174 Size: 568 bytes */
void FUN_100d3174(int *param_1,unsigned char *param_2,char param_3)

{
  unsigned char *pbVar1;
  int iVar2;
  char *puVar3;
  char *puVar4;
  char *puVar5;
  unsigned char *pbVar6;
  char auStack_238 [8];
  char auStack_230 [16];
  char local_220 [256];
  unsigned char local_120 [288];
  
  puVar3 = ((char*)0) + -0x238;
  puVar4 = ((char*)0) + -0x230;
  puVar5 = ((char*)0) + -0x220;
  pbVar6 = ((char*)0) + -0x120;
  pbVar1 = pbVar6;
  if ((((char*)0) != (char *)0x120) ||
     (pbVar1 = (unsigned char *)FUN_100f56e4(0x100), pbVar1 != (unsigned char *)0x0)) {
    FUN_100012d8(param_2,pbVar1,(unsigned long long)*param_2 + 1);
  }
  if (*(short *)(param_1 + 0x2d) < (short)(unsigned short)*pbVar6) {
    *pbVar6 = (unsigned char)*(short *)(param_1 + 0x2d);
  }
  if (param_1[0x2e] == 0) {
    FUN_100d2270(param_1,pbVar6,param_3);
  }
  else {
    *puVar5 = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,puVar5);
    iVar2 = FUN_100ef228(puVar5,pbVar6);
    if (iVar2 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
      FUN_100b1c84(pbVar6);
      iVar2 = FUN_10001ae8();
      param_1[0x2b] = iVar2;
      iVar2 = FUN_10002b20();
      if (iVar2 != 0) {
        param_1[0x2b] = 0;
      }
      FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x810),pbVar6);
      FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x7f8));
      FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x770),0);
      if ((param_3 != '\0') &&
         (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x678) + (int)param_1), iVar2 != 0)) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar4);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar4,puVar3);
        FUN_100b0578(puVar3);
        FUN_10002c58();
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x480),puVar4);
      }
    }
  }
  return;
}

/* Address: 0x100d33ac Size: 104 bytes */
void FUN_100d33ac(int *param_1,char param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x180));
  if (param_2 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 400) + (int)param_1,1);
  }
  return;
}

/* Address: 0x100d3414 Size: 196 bytes */
void FUN_100d3414(int *param_1)

{
  char local_110 [272];
  
  if (param_1[0x2e] != 0) {
    local_110[0] = 0;
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x758),0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_110);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),local_110,0);
  }
  return;
}

/* Address: 0x100d34d8 Size: 120 bytes */
long long FUN_100d34d8(int param_1)

{
  int *piVar1;
  long long uVar2;
  short sVar3;
  
  uVar2 = FUN_1010c908(param_1);
  if ((int)uVar2 == 0) {
    piVar1 = *(int **)(param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) &&
       (sVar3 = FUN_10117884((int)*(short *)(*piVar1 + 2000) + (int)piVar1),
       *(short *)(param_1 + 0xb4) < sVar3)) {
      uVar2 = 5;
    }
  }
  return uVar2;
}

/* Address: 0x100d3550 Size: 104 bytes */
long long FUN_100d3550(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if (((*(char *)((int)param_1 + 0x53) == '\0') || (param_1[0x2e] != 0)) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x100d35b8 Size: 36 bytes */
void FUN_100d35b8(void)

{
  FUN_100daf30();
  return;
}

/* Address: 0x100d35dc Size: 140 bytes */
long long FUN_100d35dc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x340));
  if ((param_1 != iVar2) &&
     ((piVar1 = *(int **)(param_1 + 0xb8), piVar1 == (int *)0x0 ||
      (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x198) + (int)piVar1), iVar2 == 0)))) {
    return 0;
  }
  return 1;
}

/* Address: 0x100d3668 Size: 144 bytes */
void FUN_100d3668(int *param_1,long long param_2,long long param_3)

{
  long long uVar1;
  char auStack_28 [8];
  char auStack_20 [32];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,auStack_28);
  uVar1 = FUN_100b0578(auStack_28);
  FUN_10003150(param_3,uVar1);
  return;
}

/* Address: 0x100d3700 Size: 40 bytes */
void FUN_100d3700(void)

{
  FUN_100cdd70(0);
  return;
}

/* Address: 0x100d3734 Size: 300 bytes */
void FUN_100d3734(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100d2504(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x30] = iVar3;
    iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x31] = iVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),uVar2,0);
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: 0x100d3860 Size: 184 bytes */
void FUN_100d3860(int *param_1,int *param_2)

{
  int iVar1;
  long long uVar2;
  
  FUN_100d25ec(param_1,param_2);
  iVar1 = *param_2;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar1 + 0x198),uVar2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x30]);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x31]);
  return;
}

/* Address: 0x100d3918 Size: 192 bytes */
int FUN_100d3918(int *param_1)

{
  int iVar1;
  double dVar2;
  char auStack_150 [48];
  short local_120;
  short local_11e;
  unsigned char local_11c [284];
  
  local_11c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_11c);
  iVar1 = 0;
  if (-1 < (long long)
           (((unsigned long long)local_11c[0] - 1) + (unsigned long long)((unsigned long long)local_11c[0] != 0) << 0x20)) {
    FUN_100028e0(local_11c);
    local_11e = 0;
    local_120 = 0;
    FUN_100028f8(local_11c,&local_11e,auStack_150,&local_120);
    dVar2 = (double)FUN_10002190(auStack_150);
    iVar1 = (int)dVar2;
  }
  return iVar1;
}

/* Address: 0x100d39d8 Size: 116 bytes */
void FUN_100d39d8(int *param_1,long long param_2,char param_3)

{
  long long uVar1;
  char local_110 [272];
  
  uVar1 = FUN_100f0334(param_1[0x30],param_2,param_1[0x31]);
  local_110[0] = 0;
  FUN_10000ac8(uVar1,local_110);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),local_110,param_3);
  return;
}

/* Address: 0x100d3a4c Size: 344 bytes */
long long FUN_100d3a4c(int *param_1)

{
  unsigned char bVar1;
  double dVar2;
  int local_17c;
  char auStack_158 [2];
  short local_156;
  short local_128;
  short local_126;
  unsigned char local_124 [292];
  
  local_124[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_124);
  bVar1 = local_124[0];
  if (-1 < (long long)
           (((unsigned long long)local_124[0] - 1) + (unsigned long long)((unsigned long long)local_124[0] != 0) << 0x20)) {
    FUN_100028e0(local_124);
    local_126 = 0;
    local_128 = 0;
    FUN_100028f8(local_124,&local_126,auStack_158,&local_128);
    if (((local_128 == 0) || (local_126 = local_126 + 1, local_126 <= (short)(unsigned short)bVar1)) ||
       (local_156 < 0)) {
      return 4;
    }
    dVar2 = (double)FUN_10002190(auStack_158);
    if (dVar2 < (double)CONCAT44(0x43300000,param_1[0x30] ^ 0x80000000) -
                *(double *)(*(int *)(local_17c + -0xb64) + 0x14c)) {
      return 2;
    }
    if ((double)CONCAT44(0x43300000,param_1[0x31] ^ 0x80000000) -
        *(double *)(*(int *)(local_17c + -0xb64) + 0x14c) < dVar2) {
      return 3;
    }
  }
  return 0;
}

/* Address: 0x100d3bac Size: 40 bytes */
void FUN_100d3bac(void)

{
  FUN_100cdf08(0);
  return;
}

/* Address: 0x100d3bd4 Size: 80 bytes */
void FUN_100d3bd4(int param_1)

{
  int uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_100f57c8(*(int *)(param_1 + 4));
    *(int *)(param_1 + 4) = uVar1;
  }
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100d3c24 Size: 84 bytes */
unsigned long long FUN_100d3c24(int *param_1)

{
  unsigned long long uVar1;
  
  uVar1 = (unsigned long long)(unsigned int)param_1[1];
  if (param_1[1] == 0) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  }
  else {
    param_1[1] = 0;
  }
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_100d3c78(void) { return 0; }



































































/* Address: 0x100d3d50 Size: 60 bytes */
void FUN_100d3d50(int param_1,int param_2)

{
  FUN_100f57c8(*(int *)(param_1 + 4));
  *(int *)(param_1 + 4) = param_2;
  return;
}

/* Address: 0x100d3d94 Size: 40 bytes */
void FUN_100d3d94(void)

{
  FUN_100cde88(0);
  return;
}

/* Address: 0x100d3dc8 Size: 204 bytes */
void FUN_100d3dc8(int *param_1,int *param_2)

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
  FUN_1010937c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x138) + (int)param_2);
    param_1[0x20] = iVar2;
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100d3e94 Size: 88 bytes */
void FUN_100d3e94(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 0x80));
  return;
}

/* Address: 0x100d3eec Size: 288 bytes */
void FUN_100d3eec(int *param_1,long long param_2,unsigned long long param_3,long long param_4)

{
  unsigned long long uVar1;
  
  if ((int)param_2 == 0x1a) {
    if (((int)param_3 != 0) &&
       (uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]),
       (param_3 & 0xffffffff) == (uVar1 & 0xffffffff))) {
      FUN_10117884((int)*(short *)(*param_1 + 0x738) + (int)param_1);
    }
    FUN_100dafe8(param_1,param_2,param_3,param_4);
  }
  else if ((int)param_2 == 0x1b) {
    if (((int)param_3 != 0) &&
       (uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]),
       (param_3 & 0xffffffff) == (uVar1 & 0xffffffff))) {
      FUN_10117884((int)*(short *)(*param_1 + 0x738) + (int)param_1);
    }
    FUN_100dafe8(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_100dafe8(param_1,param_2,param_3,param_4);
  }
  return;
}

/* Address: 0x100d400c Size: 172 bytes */
void FUN_100d400c(int *param_1,long long param_2,long long param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int uStack00000024;
  
  uStack00000024 = param_4;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1), iVar2 != 0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x180) + (int)piVar1);
  }
  FUN_1010a9cc(param_1,param_2,param_3,uStack00000024);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d40b8(int *param_1,long long param_2) { }
































































/* Address: 0x100d419c Size: 128 bytes */
void FUN_100d419c(int *param_1)

{
  char auStack_120 [276];
  int local_c;
  
  FUN_100ee64c(auStack_120);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e8),local_c);
  FUN_100ee77c(auStack_120,2);
  return;
}

/* Address: 0x100d421c Size: 188 bytes */
void FUN_100d421c(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_14c;
  char auStack_128 [276];
  int local_14;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]);
  iVar2 = FUN_10117884(**(int **)(local_14c + -0xedc) +
                       (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x340));
  if (iVar2 == iVar1) {
    FUN_100ee64c(auStack_128);
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,local_14);
    FUN_10000b58(local_14);
    FUN_100ee77c(auStack_128,2);
  }
  return;
}

/* Address: 0x100d42d8 Size: 128 bytes */
void FUN_100d42d8(int *param_1,long long param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738));
  }
  FUN_1010b818(param_1,param_2,param_3);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x738) + (int)param_1);
  }
  return;
}

/* Address: 0x100d4358 Size: 436 bytes */
void FUN_100d4358(void)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int uVar4;
  int *ppuVar5;
  
  uVar4 = uRam10116d70;
  uVar3 = uRam10116d68;
  uVar2 = uRam10116c7c;
  uVar1 = uRam10116c34;
  ppuVar5 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116d40,*puRam10116da8,0x88,uRam10116dac,uRam10116c7c);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2d6)),*(int *)ppuVar5[-700],0xb4,ppuVar5[-699],uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2d4)),*(int *)(*(int*)((char*)ppuVar5 - 0x2ba)),0xb0,(*(int*)((char*)ppuVar5 - 0x2b9)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2d2)),*(int *)(*(int*)((char*)ppuVar5 - 0x2b8)),0xb0,(*(int*)((char*)ppuVar5 - 0x2b7)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2c8)),*(int *)(*(int*)((char*)ppuVar5 - 0x2b6)),0xb0,(*(int*)((char*)ppuVar5 - 0x2b5)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2d0)),*(int *)(*(int*)((char*)ppuVar5 - 0x2b4)),0xb0,(*(int*)((char*)ppuVar5 - 0x2b3)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2c2)),*(int *)(*(int*)((char*)ppuVar5 - 0x2b2)),0xe0,(*(int*)((char*)ppuVar5 - 0x2b1)),(*(int*)((char*)ppuVar5 - 0x2b0)));
  FUN_100c1c8c(uVar3,*(int *)(*(int*)((char*)ppuVar5 - 0x2af)),0xb4,(*(int*)((char*)ppuVar5 - 0x2ae)),uVar1);
  FUN_100c1c8c(uVar4,*(int *)(*(int*)((char*)ppuVar5 - 0x2ad)),0xc0,(*(int*)((char*)ppuVar5 - 0x2ac)),uVar3);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2ca)),*(int *)(*(int*)((char*)ppuVar5 - 0x2ab)),200,(*(int*)((char*)ppuVar5 - 0x2aa)),uVar4);
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2bf)),*(int *)(*(int*)((char*)ppuVar5 - 0x2a9)),8,(*(int*)((char*)ppuVar5 - 0x2a8)),(*(int*)((char*)ppuVar5 - 0x3da)));
  FUN_100c1c8c((*(int*)((char*)ppuVar5 - 0x2c6)),*(int *)(*(int*)((char*)ppuVar5 - 0x2a7)),0x84,(*(int*)((char*)ppuVar5 - 0x2a6)),uVar2);
  return;
}

/* Address: 0x100d4598 Size: 40 bytes */
void FUN_100d4598(void)

{
  FUN_100d451c(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d45c0(void) { }
















/* Address: 0x100d4614 Size: 392 bytes */
void FUN_100d4614(int *param_1,int *param_2)

{
  int uVar1;
  unsigned char *pbVar2;
  int *puVar3;
  int iVar6;
  unsigned long long uVar4;
  short uVar7;
  long long uVar5;
  unsigned long long uVar8;
  long long lVar9;
  int local_25c;
  
  puVar3 = puRam10117370;
  uVar8 = ZEXT48(((char*)0)) - 0x238;
  lVar9 = ZEXT48(((char*)0)) - 0x138;
  FUN_100c6c9c(param_1,param_2);
  uVar1 = *puVar3;
  *puVar3 = (int)lVar9;
  iVar6 = FUN_10000090(lVar9);
  if (iVar6 == 0) {
    pbVar2 = *(unsigned char **)(local_25c + -0xe4c);
    uVar4 = uVar8;
    if (((uVar8 & 0xffffffff) != 0) || (uVar4 = FUN_100f56e4(0x100), (uVar4 & 0xffffffff) != 0)) {
      FUN_100012d8(pbVar2,uVar4,(unsigned long long)*pbVar2 + 1);
    }
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x30) = uVar7;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = (short)uVar5;
    if (*(short *)(param_1 + 0x30) != -1) {
      FUN_100009d8(uVar8,*(short *)(param_1 + 0x30),uVar5);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),uVar8,0,0,0,8);
    *puVar3 = uVar1;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  return;
}

/* Address: 0x100d479c Size: 116 bytes */
void FUN_100d479c(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xc0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xc2));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d4810(int *param_1,long long param_2,int *param_3,long long param_4) { }























































/* Address: 0x100d4984 Size: 40 bytes */
void FUN_100d4984(void)

{
  FUN_100d4908(0);
  return;
}

/* Address: 0x100d49ac Size: 132 bytes */
void FUN_100d49ac(int *param_1)

{
  char in_r10;
  
  FUN_100c7e34(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850),in_r10,0);
  return;
}

/* Address: 0x100d4a3c Size: 420 bytes */
void FUN_100d4a3c(int *param_1,int *param_2)

{
  int uVar1;
  unsigned char *pbVar2;
  int *puVar3;
  int iVar7;
  long long uVar4;
  unsigned long long uVar5;
  short uVar8;
  long long uVar6;
  unsigned long long uVar9;
  long long lVar10;
  int local_25c;
  
  puVar3 = puRam10117370;
  uVar9 = ZEXT48(((char*)0)) - 0x238;
  lVar10 = ZEXT48(((char*)0)) - 0x138;
  FUN_100c6c9c(param_1,param_2);
  uVar1 = *puVar3;
  *puVar3 = (int)lVar10;
  iVar7 = FUN_10000090(lVar10);
  if (iVar7 == 0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    pbVar2 = *(unsigned char **)(local_25c + -0xe4c);
    uVar5 = uVar9;
    if (((uVar9 & 0xffffffff) != 0) || (uVar5 = FUN_100f56e4(0x100), (uVar5 & 0xffffffff) != 0)) {
      FUN_100012d8(pbVar2,uVar5,(unsigned long long)*pbVar2 + 1);
    }
    uVar8 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x30) = uVar8;
    uVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = (short)uVar6;
    if (*(short *)(param_1 + 0x30) != -1) {
      FUN_100009d8(uVar9,*(short *)(param_1 + 0x30),uVar6);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),uVar9,uVar4,0,1,9);
    *puVar3 = uVar1;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  return;
}

/* Address: 0x100d4be0 Size: 184 bytes */
void FUN_100d4be0(int *param_1,int *param_2)

{
  int iVar1;
  long long uVar2;
  
  FUN_100c6ea0(param_1,param_2);
  iVar1 = *param_2;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar1 + 0x180),uVar2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x30));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0xc2));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d4c98(int *param_1,long long param_2,long long param_3,long long param_4) { }

























/* Address: 0x100d4d08 Size: 68 bytes */
int FUN_100d4d08(int *param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  return lVar1 != 0;
}

/* Address: 0x100d4d4c Size: 64 bytes */
void FUN_100d4d4c(int *param_1,char param_2,char param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_3);
  return;
}

/* Address: 0x100d4d8c Size: 116 bytes */
void FUN_100d4d8c(int *param_1,unsigned long long param_2)

{
  int iVar1;
  long long lVar2;
  
  iVar1 = *param_1;
  lVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x848),param_2,iVar1,
                       *(int *)(iVar1 + 0x84c));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 2000),lVar2 == 0,param_2 & 0xff);
  return;
}

/* Address: 0x100d4e00 Size: 148 bytes */
void FUN_100d4e00(int *param_1,unsigned int param_2,char param_3)

{
  int iVar1;
  unsigned int uVar3;
  long long lVar2;
  
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (uVar3 == (param_2 & 0xff)) {
    iVar1 = *param_1;
    lVar2 = FUN_10117884((int)*(short *)(iVar1 + 0x848) + (int)param_1);
    FUN_10117884((int)*(short *)(iVar1 + 2000) + (int)param_1,lVar2 == 0,param_3);
  }
  return;
}

/* Address: 0x100d4f20 Size: 40 bytes */
void FUN_100d4f20(void)

{
  FUN_100d4ea4(0);
  return;
}

/* Address: 0x100d4f48 Size: 316 bytes */
void FUN_100d4f48(int *param_1)

{
  int *puVar1;
  int iVar2;
  char in_r10;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  FUN_100c7e34(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x850) + (int)param_1,in_r10,0);
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1);
    if (iVar2 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_1[0x20],param_1,0);
    }
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100d5090 Size: 420 bytes */
void FUN_100d5090(int *param_1,int *param_2)

{
  int uVar1;
  unsigned char *pbVar2;
  int *puVar3;
  int iVar7;
  long long uVar4;
  unsigned long long uVar5;
  short uVar8;
  long long uVar6;
  unsigned long long uVar9;
  long long lVar10;
  int local_25c;
  
  puVar3 = puRam10117370;
  uVar9 = ZEXT48(((char*)0)) - 0x238;
  lVar10 = ZEXT48(((char*)0)) - 0x138;
  FUN_100c6c9c(param_1,param_2);
  uVar1 = *puVar3;
  *puVar3 = (int)lVar10;
  iVar7 = FUN_10000090(lVar10);
  if (iVar7 == 0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    pbVar2 = *(unsigned char **)(local_25c + -0xe4c);
    uVar5 = uVar9;
    if (((uVar9 & 0xffffffff) != 0) || (uVar5 = FUN_100f56e4(0x100), (uVar5 & 0xffffffff) != 0)) {
      FUN_100012d8(pbVar2,uVar5,(unsigned long long)*pbVar2 + 1);
    }
    uVar8 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x30) = uVar8;
    uVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = (short)uVar6;
    if (*(short *)(param_1 + 0x30) != -1) {
      FUN_100009d8(uVar9,*(short *)(param_1 + 0x30),uVar6);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),uVar9,uVar4,0,1,10);
    *puVar3 = uVar1;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  return;
}

/* Address: 0x100d5234 Size: 184 bytes */
void FUN_100d5234(int *param_1,int *param_2)

{
  int iVar1;
  long long uVar2;
  
  FUN_100c6ea0(param_1,param_2);
  iVar1 = *param_2;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar1 + 0x180),uVar2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x30));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0xc2));
  return;
}

/* Address: 0x100d52ec Size: 120 bytes */
void FUN_100d52ec(int *param_1)

{
  int iVar1;
  
  FUN_10105d28(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_1[0x20],param_1,0);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d5364(int *param_1,long long param_2,long long param_3,long long param_4) { }






































































/* Address: 0x100d5470 Size: 68 bytes */
int FUN_100d5470(int *param_1)

{
  long long lVar1;
  
  lVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  return lVar1 != 0;
}

/* Address: 0x100d54b4 Size: 64 bytes */
void FUN_100d54b4(int *param_1,char param_2,char param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_3);
  return;
}

/* Address: 0x100d54f4 Size: 116 bytes */
void FUN_100d54f4(int *param_1,unsigned long long param_2)

{
  int iVar1;
  long long lVar2;
  
  iVar1 = *param_1;
  lVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x848),param_2,iVar1,
                       *(int *)(iVar1 + 0x84c));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 2000),lVar2 == 0,param_2 & 0xff);
  return;
}

/* Address: 0x100d5568 Size: 148 bytes */
void FUN_100d5568(int *param_1,unsigned int param_2,char param_3)

{
  int iVar1;
  unsigned int uVar3;
  long long lVar2;
  
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (uVar3 == (param_2 & 0xff)) {
    iVar1 = *param_1;
    lVar2 = FUN_10117884((int)*(short *)(iVar1 + 0x848) + (int)param_1);
    FUN_10117884((int)*(short *)(iVar1 + 2000) + (int)param_1,lVar2 == 0,param_3);
  }
  return;
}

/* Address: 0x100d55fc Size: 136 bytes */
void FUN_100d55fc(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116c40;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116e0c,*puRam10116e24,0xc4,uRam10116e28,uRam10116c40);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x2a3)),*(int *)(*(int*)((char*)ppuVar2 - 0x29d)),0xc4,(*(int*)((char*)ppuVar2 - 0x29c)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x2a1)),*(int *)(*(int*)((char*)ppuVar2 - 0x29b)),0xc4,(*(int*)((char*)ppuVar2 - 0x29a)),uVar1);
  return;
}

/* Address: 0x100d5718 Size: 40 bytes */
void FUN_100d5718(void)

{
  FUN_100d568c(0);
  return;
}

/* Address: 0x100d5740 Size: 84 bytes */
void FUN_100d5740(int param_1,char param_2,int param_3,int param_4)

{
  FUN_100bf5e4(param_1,0x646c6f67);
  *(char *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x28) = param_4;
  return;
}

/* Address: 0x100d5794 Size: 144 bytes */
void FUN_100d5794(int param_1,int *param_2)

{
  char uVar2;
  int uVar1;
  
  FUN_100bf698(param_1,param_2);
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 0x20) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(int *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(int *)(param_1 + 0x28) = uVar1;
  return;
}

/* Address: 0x100d5824 Size: 144 bytes */
void FUN_100d5824(int param_1,int *param_2)

{
  FUN_100bf728(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x20));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 0x24));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 0x28));
  return;
}

/* Address: 0x100d58b4 Size: 128 bytes */
void FUN_100d58b4(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    if (param_3 == '\0') {
      *(int *)(param_1 + 0x2c) = param_2;
      *(char *)(param_1 + 0x30) = 1;
    }
    else {
      iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x698));
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x2c) = param_2;
        *(char *)(param_1 + 0x30) = 1;
      }
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d5934(int *param_1,int param_2,int param_3) { }


































/* Address: 0x100d599c Size: 644 bytes */
void FUN_100d599c(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar4;
  int *piVar5;
  long long uVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((piVar2 == (int *)0x0) ||
     (iVar4 = FUN_10117884((int)*(short *)(*piVar2 + 0xe0) + (int)piVar2), iVar4 == 0)) {
    FUN_100bfe54(param_1,param_2);
  }
  else {
    sVar1 = *(short *)(param_2 + 0x24);
    if (sVar1 == 0x1b) {
      if (*(short *)(param_2 + 0x26) == 0x47) {
        FUN_100bfe54(param_1,param_2);
      }
      else if (*(int *)(param_1 + 0x28) == 0x20202020) {
        FUN_100bfe54(param_1,param_2);
      }
      else {
        piVar5 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     *(int *)(param_1 + 0x28));
        if (piVar5 == (int *)0x0) {
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd0),0x15,piVar2,0);
        }
        else {
          iVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xe0));
          if (iVar4 != 0) {
            iVar4 = *piVar5;
            uVar3 = FUN_10117884((int)*(short *)(iVar4 + 0x530) + (int)piVar5,
                                 *(int *)(iVar4 + 0x534));
            FUN_10117884((int)*(short *)(iVar4 + 0xd0) + (int)piVar5,uVar3,piVar2,0);
          }
        }
      }
    }
    else if ((sVar1 == 3) || (sVar1 == 0xd)) {
      if (*(int *)(param_1 + 0x24) == 0x20202020) {
        FUN_100bfe54(param_1,param_2);
      }
      else {
        piVar5 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     *(int *)(param_1 + 0x24));
        if (piVar5 == (int *)0x0) {
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd0),0x16,piVar2,0);
        }
        else {
          iVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xe0));
          if (iVar4 != 0) {
            iVar4 = *piVar5;
            uVar3 = FUN_10117884((int)piVar5 + (int)*(short *)(iVar4 + 0x530),
                                 *(int *)(iVar4 + 0x534));
            FUN_10117884((int)piVar5 + (int)*(short *)(iVar4 + 0xd0),uVar3,piVar2,0);
          }
        }
      }
    }
    else {
      FUN_100bfe54(param_1,param_2);
    }
  }
  return;
}

/* Address: 0x100d5c20 Size: 324 bytes */
void FUN_100d5c20(int param_1,int param_2)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  long long uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((piVar1 == (int *)0x0) ||
       (iVar3 = FUN_10117884((int)*(short *)(*piVar1 + 0xe0) + (int)piVar1), iVar3 == 0)) ||
      (*(short *)(param_2 + 0x24) != 0x2e)) || (*(int *)(param_1 + 0x28) == 0x20202020)) {
    FUN_100bfd04(param_1,param_2);
  }
  else {
    piVar4 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                 *(int *)(param_1 + 0x28));
    if (piVar4 == (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0),0x15,piVar1,0);
    }
    else {
      iVar3 = FUN_10117884((int)*(short *)(*piVar4 + 0xe0) + (int)piVar4);
      if (iVar3 != 0) {
        iVar3 = *piVar4;
        uVar2 = FUN_10117884((int)*(short *)(iVar3 + 0x530) + (int)piVar4,
                             *(int *)(iVar3 + 0x534));
        FUN_10117884((int)*(short *)(iVar3 + 0xd0) + (int)piVar4,uVar2,piVar1,0);
      }
    }
  }
  return;
}

/* Address: 0x100d5d64 Size: 112 bytes */
void FUN_100d5d64(int param_1)

{
  int *piVar1;
  
  piVar1 = piRam101169c4;
  *(char *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x2c) = 0x20202020;
  do {
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x300),1);
  } while (*(char *)(param_1 + 0x30) == '\0');
  return;
}

/* Address: 0x100d5dd8 Size: 60 bytes */
void FUN_100d5dd8(void)

{
  FUN_100c1c8c(uRam10116e3c,*puRam10116e44,0x34,uRam10116e48,uRam10116610);
  return;
}

/* Address: 0x100d5e14 Size: 140 bytes */
int * FUN_100d5e14(int *param_1,int param_2,char param_3)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x120);
    }
    FUN_100ebf7c(param_1,uVar2,param_3);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x294));
  }
  return param_1;
}

/* Address: 0x100d5ea0 Size: 136 bytes */
int * FUN_100d5ea0(int *param_1,int param_2)

{
  int *ppuVar1;
  int uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100eb910(0x134),
     param_1 != (int *)0x0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x120);
    }
    FUN_100ebf7c(param_1,uVar2,1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x294));
  }
  return param_1;
}

/* Address: 0x100d5f28 Size: 108 bytes */
void FUN_100d5f28(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam10116e50;
    FUN_100ebff4(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: 0x100d5f94 Size: 36 bytes */
void FUN_100d5f94(void)

{
  FUN_100ec060();
  return;
}

/* Address: 0x100d5fb8 Size: 36 bytes */
void FUN_100d5fb8(void)

{
  FUN_100ec0e8();
  return;
}

/* Address: 0x100d5fe4 Size: 112 bytes */
int * FUN_100d5fe4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x34),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x292));
    param_1[0xc] = 0;
  }
  return param_1;
}

/* Address: 0x100d6054 Size: 40 bytes */
void FUN_100d6054(void)

{
  FUN_100d5fe4(0);
  return;
}

/* Address: 0x100d607c Size: 64 bytes */
void FUN_100d607c(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x2a8),
               *(int *)(param_1 + 4));
  return;
}

/* Address: 0x100d60bc Size: 76 bytes */
void FUN_100d60bc(int param_1,long long param_2,long long param_3)

{
  FUN_100c3df8(param_1,param_2,param_3,0,0,param_3);
  *(int *)(param_1 + 0x30) = (int)param_3;
  return;
}

/* Address: 0x100d6110 Size: 112 bytes */
int * FUN_100d6110(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x34),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x290));
    param_1[0xc] = 0;
  }
  return param_1;
}

/* Address: 0x100d6180 Size: 40 bytes */
void FUN_100d6180(void)

{
  FUN_100d6110(0);
  return;
}

/* Address: 0x100d61a8 Size: 248 bytes */
void FUN_100d61a8(int param_1)

{
  int uVar1;
  long long uVar2;
  long long uVar3;
  long long uVar4;
  int iVar5;
  char local_118 [280];
  
  uVar1 = uRam10116a54;
  local_118[0] = 0;
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x310),
               local_118);
  uVar2 = FUN_100b1c84(uVar1);
  uVar3 = FUN_100b1c84(uVar1);
  uVar4 = FUN_100b1c84(uVar1);
  FUN_100009f0(local_118,uVar4,uVar3,uVar2);
  iVar5 = FUN_100d8c9c(0x84,0);
  if (iVar5 == 1) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x2c8));
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x2d8));
  }
  return;
}

/* Address: 0x100d62a0 Size: 76 bytes */
void FUN_100d62a0(int param_1,long long param_2,long long param_3)

{
  FUN_100c3df8(param_1,param_2,param_3,0,0,param_3);
  *(int *)(param_1 + 0x30) = (int)param_3;
  return;
}

/* Address: 0x100d62f4 Size: 184 bytes */
int * FUN_100d62f4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x13c),
     param_1 != (int *)0x0)) {
    FUN_100c604c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x28e));
    *(char *)(param_1 + 8) = 0;
    FUN_100b1d90(param_1 + 8,ZEXT48((*(int*)((char*)ppuVar1 - 0x295))) + 0x30);
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4c] = 0;
    *(char *)(param_1 + 0x4b) = 1;
    *(char *)((int)param_1 + 0x12d) = 1;
    *(char *)((int)param_1 + 0x12e) = 1;
    *(char *)(param_1 + 0x4d) = 1;
    *(char *)((int)param_1 + 0x135) = 1;
    param_1[0x4a] = 0;
    param_1[0x4e] = 0;
  }
  return param_1;
}

/* Address: 0x100d63ac Size: 40 bytes */
void FUN_100d63ac(void)

{
  FUN_100d62f4(0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d63d4(int *param_1) { }









































































/* Address: 0x100d64bc Size: 176 bytes */
void FUN_100d64bc(int param_1)

{
  int uVar1;
  
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x3c0),param_1);
  uVar1 = FUN_100e91b4(*(int *)(param_1 + 0x120));
  *(int *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_100e91b4(*(int *)(param_1 + 0x124));
  *(int *)(param_1 + 0x124) = uVar1;
  if (*(char *)(param_1 + 0x12e) == '\0') {
    *(int *)(param_1 + 0x130) = 0;
  }
  else {
    uVar1 = FUN_100ef510(*(int *)(param_1 + 0x130));
    *(int *)(param_1 + 0x130) = uVar1;
  }
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x138));
  *(int *)(param_1 + 0x138) = uVar1;
  FUN_100c6134(param_1);
  return;
}

/* Address: 0x100d656c Size: 132 bytes */
void FUN_100d656c(int param_1,long long param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x124) != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x124) +
                           (int)*(short *)(**(int **)(param_1 + 0x124) + 0x140),param_2), iVar1 == 0
     )) {
    FUN_10117884((int)*(int **)(param_1 + 0x124) +
                 (int)*(short *)(**(int **)(param_1 + 0x124) + 0x150),param_2);
  }
  return;
}

/* Address: 0x100d65f0 Size: 132 bytes */
void FUN_100d65f0(int param_1,long long param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x120) +
                           (int)*(short *)(**(int **)(param_1 + 0x120) + 0x140),param_2), iVar1 == 0
     )) {
    FUN_10117884((int)*(int **)(param_1 + 0x120) +
                 (int)*(short *)(**(int **)(param_1 + 0x120) + 0x150),param_2);
  }
  return;
}

/* Address: 0x100d667c Size: 196 bytes */
void FUN_100d667c(int *param_1,long long param_2,long long param_3)

{
  int *piVar1;
  int local_20;
  int local_1c [7];
  
  piVar1 = &local_20;
  if ((int)param_2 == 0x65) {
    param_1[0x4a] = param_1[0x4a] + -1;
  }
  else {
    local_1c[0] = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
    local_1c[0] = local_1c[0] + 1;
    local_20 = 1;
    if (1 < local_1c[0]) {
      piVar1 = local_1c;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),*piVar1);
  }
  FUN_100f4f0c(param_1,param_2,param_3);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
short FUN_100d6740(long long param_1) { return 0; }



































































/* Address: 0x100d680c Size: 156 bytes */
void FUN_100d680c(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 != (int *)0x0) && ((int *)param_2[10] == param_1)) {
    if ((*(char *)((int)param_2 + 0xb6) == '\0') && (iVar1 = FUN_100d6740(param_1), iVar1 < 2)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x2c0) + (int)param_1);
    }
    else {
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x738));
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d68a8(int *param_1) { }

































































































/* Address: 0x100d6a1c Size: 88 bytes */
void FUN_100d6a1c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}

/* Address: 0x100d6a74 Size: 128 bytes */
void FUN_100d6a74(int param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  return;
}

/* Address: 0x100d6af4 Size: 128 bytes */
void FUN_100d6af4(int param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  return;
}

/* Address: 0x100d6b74 Size: 4 bytes */
void FUN_100d6b74(void)

{
  return;
}

/* Address: 0x100d6b78 Size: 144 bytes */
void FUN_100d6b78(long long param_1,char param_2)

{
  long long uVar1;
  
  if (param_2 == '\0') {
    uVar1 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0x3e9,
                         param_1);
  }
  else {
    uVar1 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 0xd0),param_1,0,
                         0x3ea,uRam10116bc0);
  }
  FUN_100db26c(uVar1);
  return;
}

/* Address: 0x100d6c08 Size: 136 bytes */
void FUN_100d6c08(int *param_1,char param_2)

{
  long long uVar1;
  
  if (param_2 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288));
  }
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f0));
  if ((int)uVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x308) + (int)param_1,uVar1);
  }
  return;
}

/* Address: 0x100d6e64 Size: 4 bytes */
void FUN_100d6e64(void)

{
  return;
}

/* Address: 0x100d6e68 Size: 100 bytes */
void FUN_100d6e68(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),
               *(int *)(*piRam101169f4 + 0x54));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}

/* Address: 0x100d6ed4 Size: 36 bytes */
void FUN_100d6ed4(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100d6ef8 Size: 36 bytes */
void FUN_100d6ef8(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100d6f24 Size: 76 bytes */
void FUN_100d6f24(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x138)) {
    FUN_100f57c8(*(int *)(param_1 + 0x138));
    *(int *)(param_1 + 0x138) = param_2;
  }
  return;
}

/* Address: 0x100d6f74 Size: 148 bytes */
void FUN_100d6f74(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x120) != 0) &&
      (piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 0x120) +
                                    (int)*(short *)(**(int **)(param_1 + 0x120) + 0x128)),
      piVar1 != (int *)0x0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x680) + (int)piVar1), iVar2 == 0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x780) + (int)piVar1);
  }
  return;
}

/* Address: 0x100d7008 Size: 248 bytes */
void FUN_100d7008(int param_1)

{
  int uVar1;
  long long uVar2;
  long long uVar3;
  long long uVar4;
  int *piVar5;
  char local_118 [280];
  
  uVar1 = uRam10116a54;
  local_118[0] = 0;
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_100012d8(param_1 + 0x20,local_118,(unsigned long long)*(unsigned char *)(param_1 + 0x20) + 1);
    uVar2 = FUN_100b1c84(uVar1);
    uVar3 = FUN_100b1c84(uVar1);
    uVar4 = FUN_100b1c84(uVar1);
    FUN_100009f0(local_118,uVar4,uVar3,uVar2);
    FUN_100d8e3c(0x87);
  }
  piVar5 = *(int **)(param_1 + 0x120);
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)FUN_10117884((int)*(short *)(*piVar5 + 0x128) + (int)piVar5);
    if (piVar5 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar5 + 0x780) + (int)piVar5);
    }
  }
  return;
}

/* Address: 0x100d7100 Size: 268 bytes */
long long FUN_100d7100(int *param_1)

{
  int *piVar1;
  int iVar2;
  long long uVar3;
  int local_33c;
  char auStack_318 [256];
  char local_218 [256];
  char local_118 [280];
  
  piVar1 = piRam101169c4;
  local_118[0] = 0;
  local_218[0] = 0;
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
  if (iVar2 == 0) {
    uVar3 = 3;
  }
  else {
    if (*(char *)(*piVar1 + 0x3c) == '\0') {
      uVar3 = 9;
    }
    else {
      uVar3 = 10;
    }
    FUN_100009d8(auStack_318,0xfa,uVar3);
    FUN_100012d8(param_1 + 8,local_118,(unsigned long long)*(unsigned char *)(param_1 + 8) + 1);
    piVar1 = (int *)*piVar1;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x530),local_218);
    uVar3 = FUN_100b1c84(*(int *)(local_33c + -0xe4c));
    FUN_100009f0(local_118,auStack_318,local_218,uVar3);
    uVar3 = FUN_100d8c9c(0x83,0);
  }
  return uVar3;
}

/* Address: 0x100d720c Size: 36 bytes */
void FUN_100d720c(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100d7230 Size: 36 bytes */
void FUN_100d7230(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100d7254 Size: 36 bytes */
void FUN_100d7254(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100d727c Size: 36 bytes */
void FUN_100d727c(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100d72a0 Size: 56 bytes */
void FUN_100d72a0(int param_1,long long param_2,int param_3)

{
  if (param_3 != param_1) {
    FUN_100db158(0xffffffffffffb1dd,0);
  }
  return;
}

/* Address: 0x100d72d8 Size: 64 bytes */
void FUN_100d72d8(int param_1,long long param_2)

{
  FUN_100012d8(param_1 + 0x20,param_2,(unsigned long long)*(unsigned char *)(param_1 + 0x20) + 1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d7318(long long param_1,unsigned char *param_2) { }























































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d73f4(long long param_1) { }




















































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d749c(long long param_1) { }


























































/* Address: 0x100d7554 Size: 220 bytes */
void FUN_100d7554(long long param_1,long long param_2)

{
  short *psVar1;
  int iVar2;
  short local_118;
  short local_116;
  char local_114 [276];
  
  psVar1 = psRam10116e6c;
  local_114[0] = 0;
  if (*psRam10116e6c == 1) {
    FUN_100009d8(param_2,0xfa,0x12);
    *psVar1 = *psVar1 + 1;
  }
  else {
    FUN_100009d8(param_2,0xfa,8);
    FUN_10000ac8(*psVar1,local_114);
    iVar2 = FUN_100ee320(param_2,&local_116,&local_118);
    if ((iVar2 != 0) && (iVar2 = FUN_100ee588(param_2,local_114,local_116,local_118), iVar2 != 0)) {
      *psVar1 = *psVar1 + 1;
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100d7630(void) { }















/* Address: 0x100d76c0 Size: 220 bytes */
int * FUN_100d76c0(int *param_1)

{
  unsigned int uVar1;
  int *ppuVar2;
  int local_3c;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x3c),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar2 - 0x285));
    FUN_100b02d0(param_1 + 1);
    param_1[1] = 0x10001;
    *(short *)(param_1 + 2) = 8;
    FUN_10002f88((int)param_1 + 10,ZEXT48((*(int*)((char*)ppuVar2 - 0x2c))) + 0xba,8,param_1 + 0xc,(int)param_1 + 0x36
                );
    uVar1 = (*(int **)(local_3c + -0x1830))[1];
    *(int *)((int)param_1 + 0x12) = **(int **)(local_3c + -0x1830);
    *(unsigned int *)((int)param_1 + 0x16) = uVar1 & 0xffff0000;
    uVar1 = (*(int **)(local_3c + -0xc38))[1];
    param_1[6] = **(int **)(local_3c + -0xc38);
    param_1[7] = uVar1 & 0xffff0000;
  }
  return param_1;
}

/* Address: 0x100d779c Size: 40 bytes */
void FUN_100d779c(void)

{
  FUN_100d76c0(0);
  return;
}

/* Address: 0x100d77c4 Size: 36 bytes */
void FUN_100d77c4(void)

{
  FUN_100f5274();
  return;
}

/* Address: 0x100d77e8 Size: 204 bytes */
void FUN_100d77e8(int param_1,int *param_2)

{
  short uVar1;
  
  FUN_100f5100(param_1,param_2);
  FUN_10117884(param_1 + 4,(int)param_2 + (int)*(short *)(*param_2 + 0x110));
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 8) = uVar1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),param_1 + 10,8);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x130),param_1 + 0x12);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x130),param_1 + 0x18);
  return;
}

/* Address: 0x100d78b4 Size: 212 bytes */
void FUN_100d78b4(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a0),*(int *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),param_1 + 10,8);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),param_1 + 0x12,6);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),param_1 + 0x18,6);
  return;
}

/* Address: 0x100d7990 Size: 76 bytes */
void FUN_100d7990(long long param_1)

{
  FUN_10000000(param_1 + 0x1e);
  FUN_100ef8c8(param_1 + 0x30);
  FUN_100ef824(param_1 + 0x36);
  return;
}

/* Address: 0x100d79dc Size: 112 bytes */
void FUN_100d79dc(int param_1)

{
  FUN_10000030();
  FUN_100031b0(*(short *)(param_1 + 6),*(short *)(param_1 + 4));
  FUN_10002130(*(short *)(param_1 + 8));
  FUN_10002118(param_1 + 10);
  FUN_100f0538(param_1 + 0x12);
  FUN_100f03e8(param_1 + 0x18);
  return;
}

/* Address: 0x100d7a4c Size: 76 bytes */
void FUN_100d7a4c(long long param_1)

{
  FUN_100016f8(param_1 + 0x1e);
  FUN_100f0538(param_1 + 0x30);
  FUN_100f03e8(param_1 + 0x36);
  return;
}

/* Address: 0x100d7a98 Size: 60 bytes */
void FUN_100d7a98(void)

{
  FUN_100c1c8c(uRam10116e88,*puRam10116e90,0x3c,uRam10116e94,uRam10116938);
  return;
}

/* Address: 0x100d7b78 Size: 40 bytes */
void FUN_100d7b78(void)

{
  FUN_100d7adc(0);
  return;
}

/* Address: 0x100d7d1c Size: 232 bytes */
int * FUN_100d7d1c(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int local_138 [2];
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_100f5088(param_1);
  piVar2[1] = 0;
  piVar2[7] = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    local_138[0] = *(int *)(param_1 + 0x1c);
    FUN_100f16a0(local_138);
    piVar2[7] = local_138[0];
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return piVar2;
}

/* Address: 0x100d7e04 Size: 144 bytes */
void FUN_100d7e04(int param_1,int *param_2)

{
  short uVar2;
  int uVar1;
  
  FUN_100f5100(param_1,param_2);
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xe) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(int *)(param_1 + 0x10) = uVar1;
  return;
}















/* Address: 0x100d7e94 Size: 144 bytes */
void FUN_100d7e94(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xc));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xe));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0x10));
  return;
}









/* Address: 0x100d7f24 Size: 260 bytes */
void FUN_100d7f24(int *param_1,long long param_2,long long param_3)

{
  long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_3 + param_2);
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),
                       (unsigned long long)(unsigned int)param_1[2] + 1);
  if ((uVar2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
    FUN_10002340(uVar2,uVar1,uVar3 - uVar2);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),(unsigned long long)(unsigned int)param_1[2] - param_3
              );
  param_1[2] = param_1[2] - (int)param_3;
  if (param_1[1] != 0) {
    FUN_100ebd68(param_1[1],param_2,param_3);
  }
  return;
}

/* Address: 0x100d8078 Size: 80 bytes */
void FUN_100d8078(int *param_1)

{
  if (0 < param_1[2]) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),1,param_1[2]);
  }
  return;
}

/* Address: 0x100d80c8 Size: 132 bytes */
void FUN_100d80c8(int *param_1,long long param_2,long long param_3,int param_4)

{
  long long uVar1;
  
  if (0 < param_4) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
    FUN_10002340(uVar1,param_3,
                 (unsigned long long)(unsigned int)(param_4 + -1 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU)) +
                 (long long)*(short *)(param_1 + 3));
  }
  return;
}

/* Address: 0x100d81a0 Size: 60 bytes */
void FUN_100d81a0(int param_1,int param_2)

{
  FUN_100eecf8((unsigned long long)**(unsigned int **)(param_1 + 0x1c) +
               (unsigned long long)(unsigned int)(param_2 + -1 << ((int)*(short *)(param_1 + 0xe) & 0x3fU)));
  return;
}

/* Address: 0x100d81dc Size: 108 bytes */
long long FUN_100d81dc(int param_1,unsigned char param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100efab0(*(int *)(param_1 + 0x1c));
  if ((unsigned int)uVar1 != (unsigned int)param_2) {
    if (param_2 == 0) {
      FUN_10002ad8(*(int *)(param_1 + 0x1c));
    }
    else {
      FUN_10002598(*(int *)(param_1 + 0x1c));
    }
  }
  return uVar1;
}

/* Address: 0x100d8248 Size: 112 bytes */
void FUN_100d8248(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_10000960(param_1[7]);
    FUN_100f5108(param_1);
  }
  else {
    *(char *)(param_1 + 6) = 1;
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1);
  }
  return;
}

/* Address: 0x100d82c0 Size: 356 bytes */
void FUN_100d82c0(int *param_1,long long param_2,int *param_3,long long param_4)

{
  int iVar1;
  int *puVar3;
  long long uVar2;
  int iVar4;
  
  if (param_1[5] < (int)((unsigned long long)(unsigned int)param_1[2] + param_4)) {
    FUN_10117884((int)*(short *)(*param_1 + 0xb0) + (int)param_1,
                 (unsigned long long)(unsigned int)param_1[2] + param_4);
  }
  puVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + param_4);
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),
                       (unsigned long long)(unsigned int)param_1[2] + 1);
  iVar1 = (int)param_4 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU);
  if ((int)param_2 <= param_1[2]) {
    FUN_10002340(puVar3,uVar2,iVar4 - (int)puVar3);
  }
  if (iVar1 == 4) {
    if ((((unsigned int)param_3 & 1) == 0) && (((unsigned int)puVar3 & 1) == 0)) {
      *puVar3 = *param_3;
      goto LAB_100d8438;
    }
  }
  FUN_10002340(param_3,puVar3,iVar1);
LAB_100d8438:
  param_1[2] = param_1[2] + (int)param_4;
  if (param_1[1] != 0) {
    FUN_100ebeb4(param_1[1],param_2,param_4);
  }
  return;
}

/* Address: 0x100d848c Size: 252 bytes */
void FUN_100d848c(int *param_1,int *param_2)

{
  int iVar1;
  long long lVar2;
  long long lVar3;
  long long uVar4;
  
  lVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
  if ((int)lVar2 != 0) {
    iVar1 = *param_1;
    lVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0xa8),iVar1,
                         *(int *)(iVar1 + 0xac));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0xb0),lVar3 + lVar2);
    iVar1 = *param_1;
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0xe0) + (int)param_2,1,
                         *(int *)(*param_2 + 0xe4));
    lVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0xa8));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0xb8),lVar3 + 1,uVar4,lVar2);
  }
  return;
}

/* Address: 0x100d85c8 Size: 116 bytes */
void FUN_100d85c8(int *param_1,long long param_2,long long param_3,int param_4)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  FUN_10002340(param_3,uVar1,param_4 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU));
  return;
}

/* Address: 0x100d8690 Size: 228 bytes */
void FUN_100d8690(int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = FUN_10000948(0);
    *(int *)(param_1 + 0x1c) = uVar1;
  }
  if ((*(int *)(param_1 + 0x14) < param_2) ||
     (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14) - param_2)) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      param_2 = ((param_2 + iVar2) / iVar2) * iVar2;
    }
    if (param_2 != *(int *)(param_1 + 0x14)) {
      iVar2 = FUN_100f5748();
      if (iVar2 == 0) {
        FUN_10000ab0(*(int *)(param_1 + 0x1c),
                     param_2 << ((int)*(short *)(param_1 + 0xe) & 0x3fU));
        FUN_100db1ec();
      }
      else {
        FUN_100f16f8(*(int *)(param_1 + 0x1c),
                     param_2 << ((int)*(short *)(param_1 + 0xe) & 0x3fU));
      }
    }
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}

/* Address: 0x100d87a0 Size: 124 bytes */
void FUN_100d87a0(long long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long long uVar3;
  
  piVar1 = (int *)param_2[1];
  iVar2 = *piVar1;
  uVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0xe0),param_1,piVar1,iVar2,
                       *(int *)(iVar2 + 0xe4));
  FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0x100),*(int *)*param_2,uVar3);
  return;
}

/* Address: 0x100d888c Size: 40 bytes */
void FUN_100d888c(void)

{
  FUN_100d8824(0);
  return;
}

/* Address: 0x100d88e4 Size: 312 bytes */
long long FUN_100d88e4(int param_1,long long param_2,long long param_3,int *param_4)

{
  long long uVar1;
  int iVar2;
  char auStack_150 [4];
  int local_14c;
  int local_148;
  int local_144;
  
  if (*(int *)(param_1 + 8) == 0) {
    *param_4 = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_100ebaf8(auStack_150,param_1,1);
    do {
      local_14c = local_148 + local_144 >> 1;
      iVar2 = FUN_10117884(local_14c,param_3);
      if (iVar2 < 0) {
        local_144 = local_14c + -1;
      }
      else {
        local_148 = local_14c + 1;
      }
      if (iVar2 == 0) {
        uVar1 = 1;
        goto LAB_100d89c4;
      }
    } while (local_148 <= local_144);
    if (0 < iVar2) {
      local_14c = local_14c + 1;
    }
LAB_100d89c4:
    if ((local_14c < 1) || (*(int *)(param_1 + 8) + 1 < local_14c)) {
      *param_4 = 0;
    }
    else {
      *param_4 = local_14c;
    }
    FUN_100ebc68(auStack_150,2);
  }
  return uVar1;
}

/* Address: 0x100d8a1c Size: 136 bytes */
void FUN_100d8a1c(int *param_1)

{
  int in_stack_0000001c;
  int local_18;
  int *local_14;
  int *local_10;
  
  local_14 = ((char*)0 + 0x0000001c);
  local_10 = param_1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),uRam10116ea8,&local_14,&local_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),local_18,in_stack_0000001c,1);
  return;
}

/* Address: 0x100d8aa4 Size: 104 bytes */
void FUN_100d8aa4(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116e9c;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116e9c,*puRam10116eac,0x20,uRam10116eb0,uRam10116938);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x3b9)),*(int *)(*(int*)((char*)ppuVar2 - 0x27b)),0x20,(*(int*)((char*)ppuVar2 - 0x27a)),uVar1);
  return;
}

/* Address: 0x100d90bc Size: 40 bytes */
void FUN_100d90bc(void)

{
  FUN_100d9034(0);
  return;
}

/* Address: 0x100d916c Size: 112 bytes */
void FUN_100d916c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_1[1],param_1[2],param_1);
  }
  return;
}

/* Address: 0x100d91e8 Size: 104 bytes */
int * FUN_100d91e8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x2c),
     param_1 != (int *)0x0)) {
    FUN_100d9034(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x276));
  }
  return param_1;
}














/* Address: 0x100d9250 Size: 40 bytes */
void FUN_100d9250(void)

{
  FUN_100d91e8(0);
  return;
}

/* Address: 0x100d9278 Size: 112 bytes */
void FUN_100d9278(int param_1,long long param_2,short *param_3)

{
  int uVar1;
  int uVar2;
  int uVar3;
  
  FUN_100d90e4(param_1,0,0,param_2);
  *(int *)(param_1 + 4) = (int)*param_3;
  uVar1 = *(int *)(param_3 + 2);
  uVar2 = *(int *)(param_3 + 4);
  uVar3 = *(int *)(param_3 + 6);
  *(int *)(param_1 + 0x14) = *(int *)param_3;
  *(int *)(param_1 + 0x18) = uVar1;
  *(int *)(param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 0x20) = uVar3;
  *(short *)(param_1 + 0x28) = 0;
  *(short *)(param_1 + 0x24) = 0;
  *(short *)(param_1 + 0x26) = 0;
  *(char *)(param_1 + 0x10) = 1;
  return;
}






















/* Address: 0x100d9394 Size: 64 bytes */
void FUN_100d9394(long long param_1)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x2d0),param_1);
  return;
}

/* Address: 0x100d93dc Size: 104 bytes */
void FUN_100d93dc(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116be4;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116be4,*puRam10116ecc,0x14,uRam10116ed0,uRam10116938);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x277)),*(int *)(*(int*)((char*)ppuVar2 - 0x273)),0x2c,(*(int*)((char*)ppuVar2 - 0x272)),uVar1);
  return;
}

/* Address: 0x100d9444 Size: 20 bytes */
int FUN_100d9444(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}

/* Address: 0x100d9464 Size: 92 bytes */
void FUN_100d9464(int param_1)

{
  int uVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0xb0));
    *(int *)(param_1 + 0xc) = uVar1;
  }
  return;
}

/* Address: 0x100d94c8 Size: 152 bytes */
int * FUN_100d94c8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1c),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x271));
    param_1[1] = 0;
    param_1[3] = 0x7fffffff;
    param_1[4] = 0;
    *(char *)(param_1 + 5) = 1;
    param_1[2] = 0;
    param_1[6] = 0x20202020;
  }
  return param_1;
}

/* Address: 0x100d9560 Size: 40 bytes */
void FUN_100d9560(void)

{
  FUN_100d94c8(0);
  return;
}

/* Address: 0x100d9588 Size: 60 bytes */
void FUN_100d9588(int param_1,int param_2)

{
  FUN_100f5274(param_1);
  *(int *)(param_1 + 4) = param_2;
  return;
}







/* Address: 0x100d95c4 Size: 4 bytes */
void FUN_100d95c4(void)

{
  return;
}





/* Address: 0x100d95c8 Size: 64 bytes */
void FUN_100d95c8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x1a,param_1,0);
  return;
}






/* Address: 0x100d9608 Size: 168 bytes */
long long FUN_100d9608(int *param_1)

{
  int *piVar1;
  int *piVar3;
  int iVar4;
  long long uVar2;
  
  piVar1 = piRam101169c4;
  piVar3 = (int *)FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x340));
  if (param_1 == piVar3) {
    uVar2 = 1;
  }
  else {
    iVar4 = FUN_10117884((int)*(short *)(*piVar3 + 0x188) + (int)piVar3);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x338),param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* Address: 0x100d96b0 Size: 200 bytes */
int FUN_100d96b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = piRam101169c4;
  piVar2 = (int *)FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x340));
  iVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x148));
  if (iVar3 != 0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x158));
  }
  else {
    FUN_10117884((int)*(short *)(*piVar2 + 0x150) + (int)piVar2);
    FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x338));
  }
  return iVar3 == 0;
}

/* Address: 0x100d9780 Size: 12 bytes */
void FUN_100d9780(int param_1,char param_2)

{
  *(char *)(param_1 + 0x14) = param_2;
  return;
}

/* Address: 0x100d978c Size: 212 bytes */
void FUN_100d978c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = piRam101169c4;
  piVar2 = (int *)FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x340));
  if (piVar2 == param_1) {
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0xb0) + (int)param_1);
    if (iVar3 == 0) {
      piVar1 = (int *)*piVar1;
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x338));
    }
    else {
      piVar1 = (int *)*piVar1;
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x338));
    }
  }
  param_1[1] = 0;
  iVar3 = FUN_100f57c8(param_1[2]);
  param_1[2] = iVar3;
  FUN_100f5108(param_1);
  return;
}


























/* Address: 0x100d9860 Size: 440 bytes */
int * FUN_100d9860(int param_1)

{
  int *piVar1;
  int *puVar2;
  int *piVar4;
  int iVar5;
  long long uVar3;
  int local_16c;
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  
  puVar2 = puRam10117370;
  piVar4 = (int *)FUN_100f5088(param_1);
  piVar4[2] = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = *puVar2;
  *puVar2 = auStack_144;
  iVar5 = FUN_10000090(auStack_144);
  if (iVar5 == 0) {
    local_2c = *(int *)(local_16c + -0xd80);
    local_28 = (int *)0x0;
    local_24 = (int *)0x0;
    local_20 = 0;
    if ((param_1 != 0) &&
       (local_28 = *(int **)(param_1 + 8), local_24 = local_28, local_28 != (int *)0x0)) {
      local_20 = FUN_10117884((int)*(short *)(*local_28 + 0xd8) + (int)local_28);
    }
    FUN_10117884((int)*(short *)(local_2c + 0x10) + (int)&local_2c);
    piVar1 = local_28;
    iVar5 = FUN_100c0544(&local_2c);
    while (iVar5 != 0) {
      uVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x88));
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x1c8),uVar3);
      FUN_10117884((int)*(short *)(local_2c + 0x18) + (int)&local_2c);
      piVar1 = local_24;
      iVar5 = FUN_100c0544(&local_2c);
    }
    *puVar2 = local_3c;
  }
  else {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x90));
    FUN_100db158(local_44,local_40);
  }
  return piVar4;
}

























































/* Address: stubbed - had compile errors on 64-bit */
int FUN_100d9a18(int param_1,int param_2) { return 0; }











/* Address: 0x100d9a64 Size: 88 bytes */
int FUN_100d9a64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_2;
  while (iVar2 != 0) {
    if (iVar2 == param_1) {
      if (iVar1 == 0) {
        param_2 = *(int *)(param_1 + 4);
      }
      else {
        *(int *)(iVar1 + 4) = *(int *)(param_1 + 4);
      }
      *(int *)(param_1 + 4) = 0;
      iVar2 = 0;
    }
    else {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return param_2;
}

/* Address: 0x100d9abc Size: 168 bytes */
void FUN_100d9abc(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),param_2,param_3,param_4);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x130) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}

/* Address: 0x100d9b64 Size: 128 bytes */
void FUN_100d9b64(int *param_1,long long param_2,long long param_3,long long param_4)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if ((int)uVar1 == 0) {
    FUN_100db2f4(0xfffffffffffff954);
  }
  else {
    FUN_100d9abc(uVar1,param_2,param_3,param_4);
  }
  return;
}














/* Address: 0x100d9be4 Size: 144 bytes */
void FUN_100d9be4(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,param_2);
  }
  return;
}














/* Address: 0x100d9c74 Size: 96 bytes */
void FUN_100d9c74(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if ((int)uVar1 != 0) {
    FUN_100d9be4(uVar1,param_2);
  }
  return;
}











/* Address: 0x100d9cdc Size: 116 bytes */
void FUN_100d9cdc(int *param_1,long long param_2,long long param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x130) + (int)piVar1,param_2,param_3);
  }
  return;
}

/* Address: 0x100d9d50 Size: 412 bytes */
unsigned long long FUN_100d9d50(int *param_1)

{
  int *piVar1;
  int *ppuVar2;
  int iVar4;
  unsigned long long uVar3;
  unsigned int *puVar5;
  int **local_54;
  unsigned int local_30;
  unsigned int local_2c;
  int *local_28 [10];
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1[3] == 0x7fffffff) ||
     (iVar4 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1), ppuVar2 = local_54,
     iVar4 == 0)) {
    local_54 = ppuVar2;
    uVar3 = 0x7fffffff;
  }
  else if (param_1[4] == 0) {
    uVar3 = FUN_10001a88();
  }
  else {
    uVar3 = (unsigned long long)(unsigned int)param_1[4] + (unsigned long long)(unsigned int)param_1[3];
  }
  local_28[0] = (int *)local_54[-0x360];
  local_28[1] = (int *)0x0;
  local_28[2] = (int *)0x0;
  local_28[3] = (int *)0x0;
  if ((param_1 != (int *)0x0) &&
     (local_28[1] = (int *)param_1[2], local_28[2] = local_28[1], local_28[1] != (int *)0x0)) {
    local_28[3] = (int *)FUN_10117884((int)*(short *)(*local_28[1] + 0xd8) + (int)local_28[1]);
  }
  FUN_10117884((int)*(short *)(local_28[0] + 4) + (int)local_28);
  piVar1 = local_28[1];
  iVar4 = FUN_100c0544(local_28);
  while (iVar4 != 0) {
    local_2c = (unsigned int)uVar3;
    local_30 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0));
    puVar5 = &local_30;
    if ((int)local_2c < (int)local_30) {
      puVar5 = &local_2c;
    }
    uVar3 = (unsigned long long)*puVar5;
    FUN_10117884((int)*(short *)(local_28[0] + 6) + (int)local_28);
    piVar1 = local_28[2];
    iVar4 = FUN_100c0544(local_28);
  }
  return uVar3;
}



















































/* Address: 0x100d9eec Size: 252 bytes */
void FUN_100d9eec(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1,param_2);
  }
  if ((((param_1[3] != 0x7fffffff) &&
       (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0)), iVar2 != 0)) &&
      ((param_2 != '\x01' ||
       (iVar2 = FUN_10001a88(), (unsigned int)param_1[3] <= (unsigned int)(iVar2 - param_1[4]))))) &&
     ((iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2), iVar2 == 0 &&
      (param_2 == '\x01')))) {
    iVar2 = FUN_10001a88();
    param_1[4] = iVar2;
  }
  return;
}





















/* Address: 0x100d9fe8 Size: 8 bytes */
long long FUN_100d9fe8(void)

{
  return 0;
}

/* Address: 0x100d9ff0 Size: 144 bytes */
void FUN_100d9ff0(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x148) + (int)piVar1,param_2);
  }
  return;
}














/* Address: 0x100da080 Size: 96 bytes */
void FUN_100da080(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if ((int)uVar1 != 0) {
    FUN_100d9ff0(uVar1,param_2);
  }
  return;
}











/* Address: 0x100da0e0 Size: 144 bytes */
void FUN_100da0e0(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf8),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x150) + (int)piVar1,param_2);
  }
  return;
}














/* Address: 0x100da170 Size: 96 bytes */
void FUN_100da170(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if ((int)uVar1 != 0) {
    FUN_100da0e0(uVar1,param_2);
  }
  return;
}

/* Address: 0x100da1d0 Size: 144 bytes */
void FUN_100da1d0(int *param_1,long long param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x158) + (int)piVar1,param_2);
  }
  return;
}














/* Address: 0x100da2c0 Size: 212 bytes */
long long FUN_100da2c0(int *param_1,int param_2,int param_3)

{
  int _sStack0000001c;
  int _sStack00000020;
  short *psVar1;
  int *piVar3;
  long long uVar2;
  short sVar4;
  short sStack0000001c;
  short sStack0000001e;
  short sStack00000020;
  short sStack00000022;
  
  psVar1 = psRam10116a6c;
  _sStack0000001c = param_2;
  _sStack00000020 = param_3;
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar3 == (int *)0x0) {
    sVar4 = FUN_10003768((long long)sStack0000001e - (long long)sStack00000022);
    if (sVar4 <= psVar1[1]) {
      sVar4 = FUN_10003768((long long)sStack0000001c - (long long)sStack00000020);
      if (sVar4 <= *psVar1) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0xe8) + (int)piVar3,_sStack0000001c,
                         _sStack00000020);
  }
  return uVar2;
}

/* FUN_100da3f0 defined elsewhere */















/* Address: 0x100da474 Size: 132 bytes */
void FUN_100da474(int *param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x168) + (int)piVar1,param_2,param_3,param_4,param_5);
  }
  return;
}

/* Address: 0x100da500 Size: 100 bytes */
long long FUN_100da500(int *param_1)

{
  int *piVar2;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x1f8) + (int)piVar2);
  }
  return uVar1;
}

/* Address: 0x100da564 Size: 36 bytes */
void FUN_100da564(void)

{
  FUN_100f535c();
  return;
}

/* Address: 0x100da5a0 Size: 276 bytes */
void FUN_100da5a0(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int **)(param_1 + 8) == param_2) {
      piVar1 = (int *)FUN_10117884((int)*(short *)(*param_2 + 0xd8) + (int)param_2);
      *(int **)(param_1 + 8) = piVar1;
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0),0);
      }
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 200),0);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),0);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8),0);
    }
    else {
      FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x128),
                   param_2);
    }
  }
  return;
}

/* Address: 0x100da6b4 Size: 136 bytes */
void FUN_100da6b4(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8),param_1);
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 == (int *)0x0) {
      *(int **)(param_1 + 8) = param_2;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x120),param_2);
    }
  }
  return;
}

/* Address: 0x100da744 Size: 132 bytes */
unsigned long long FUN_100da744(int param_1)

{
  unsigned long long uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x100));
    if (iVar2 == 0) {
      uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0xe0));
    }
    else {
      uVar1 = (unsigned long long)*(unsigned int *)(param_1 + 8);
    }
  }
  return uVar1;
}

/* Address: 0x100da7c8 Size: 252 bytes */
int * FUN_100da7c8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  
  local_20 = iRam10116b20;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  if ((param_1 != 0) &&
     (local_1c = *(int **)(param_1 + 8), local_18 = local_1c, local_1c != (int *)0x0)) {
    local_14 = FUN_10117884((int)*(short *)(*local_1c + 0xd8) + (int)local_1c);
  }
  FUN_10117884((int)*(short *)(local_20 + 0x10) + (int)&local_20);
  piVar1 = local_1c;
  iVar2 = FUN_100c0544(&local_20);
  while( true ) {
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    if (piVar1[1] == param_2) break;
    FUN_10117884((int)*(short *)(local_20 + 0x18) + (int)&local_20);
    piVar1 = local_18;
    iVar2 = FUN_100c0544(&local_20);
  }
  return piVar1;
}

/* Address: 0x100da8c4 Size: 260 bytes */
void FUN_100da8c4(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  
  local_20 = iRam10116b20;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  if ((param_1 != 0) &&
     (local_1c = *(int **)(param_1 + 8), local_18 = local_1c, local_1c != (int *)0x0)) {
    local_14 = FUN_10117884((int)*(short *)(*local_1c + 0xd8) + (int)local_1c);
  }
  FUN_10117884((int)*(short *)(local_20 + 0x10) + (int)&local_20);
  piVar1 = local_1c;
  iVar2 = FUN_100c0544(&local_20);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8),param_2);
    FUN_10117884((int)*(short *)(local_20 + 0x18) + (int)&local_20);
    piVar1 = local_18;
    iVar2 = FUN_100c0544(&local_20);
  }
  return;
}

/* Address: 0x100da9c8 Size: 100 bytes */
long long FUN_100da9c8(int *param_1)

{
  int *piVar2;
  long long uVar1;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0xf0) + (int)piVar2);
  }
  return uVar1;
}

/* Address: 0x100daa2c Size: 156 bytes */
void FUN_100daa2c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    if (iVar2 != 0) {
      FUN_100f57c8(param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x200) + (int)piVar1,param_2);
  }
  return;
}

/* Address: 0x100daac8 Size: 168 bytes */
void FUN_100daac8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
    if (piVar1 == (int *)0x0) {
      iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
      if (iVar2 != 0) {
        FUN_100f57c8(param_2);
      }
    }
    else {
      FUN_10117884((int)*(short *)(*piVar1 + 0x208) + (int)piVar1,param_2);
    }
  }
  return;
}

/* Address: 0x100dab70 Size: 64 bytes */
void FUN_100dab70(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x19,param_1,0);
  return;
}

/* Address: 0x100dabb8 Size: 64 bytes */
void FUN_100dabb8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x1b,param_1,0);
  return;
}

/* Address: 0x100dabfc Size: 88 bytes */
char FUN_100dabfc(unsigned long long param_1)

{
  unsigned long long uVar1;
  
  uVar1 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x340));
  return (uVar1 <= param_1 && (unsigned long long)(uVar1 < param_1) <= param_1 - uVar1) - (uVar1 < param_1);
}

/* Address: 0x100dac54 Size: 4 bytes */
void FUN_100dac54(void)

{
  return;
}

/* Address: 0x100dac58 Size: 276 bytes */
void FUN_100dac58(int *param_1,int *param_2)

{
  int iVar1;
  char uVar3;
  short sVar2;
  short sVar4;
  int local_18 [6];
  
  FUN_100f5100(param_1,param_2);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  param_1[6] = iVar1;
  uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 5) = uVar3;
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  param_1[3] = iVar1;
  sVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  sVar4 = 0;
  if (0 < sVar2) {
    do {
      local_18[0] = 0;
      iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),local_18);
      if (iVar1 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),local_18[0]);
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < sVar2);
  }
  return;
}

/* Address: 0x100dad6c Size: 444 bytes */
void FUN_100dad6c(int *param_1,int *param_2)

{
  long long uVar1;
  int *piVar3;
  long long uVar2;
  long long lVar4;
  
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),param_1[6]);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 5));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[3]);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),0);
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  lVar4 = 0;
  for (; piVar3 != (int *)0x0;
      piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8))) {
    lVar4 = (long long)(short)((short)lVar4 + 1);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),piVar3,1);
  }
  if ((int)lVar4 != 0) {
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0),uVar1);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),lVar4);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0),uVar2);
  }
  return;
}

/* Address: 0x100daf30 Size: 8 bytes */
long long FUN_100daf30(void)

{
  return 0;
}





/* Address: 0x100daf38 Size: 168 bytes */
void FUN_100daf38(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar2 == (int *)0x0) {
    sVar1 = *(short *)(param_2 + 0x14);
    if (((sVar1 == 3) || (sVar1 == 4)) || (sVar1 == 5)) {
      *(unsigned short *)(param_2 + 0x24) = (unsigned short)*(int *)(param_2 + 0x16) & 0xff;
      *(unsigned short *)(param_2 + 0x26) = (unsigned short)((unsigned int)*(int *)(param_2 + 0x16) >> 8) & 0xff;
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar2 + 0x108) + (int)piVar2,param_2);
  }
  return;
}



















/* Address: 0x100dafe8 Size: 124 bytes */
void FUN_100dafe8(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}











/* Address: 0x100db064 Size: 168 bytes */
void FUN_100db064(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,param_3,param_4);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100db10c(void) { }












/* Address: 0x100db22c Size: 64 bytes */
void FUN_100db22c(short param_1,int param_2,long long param_3)

{
  if (param_2 == 0) {
    FUN_100db158(param_1,param_3);
  }
  else {
    FUN_100db158(param_1);
  }
  return;
}











/* Address: 0x100db2a4 Size: 80 bytes */
void FUN_100db2a4(int param_1)

{
  long long uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_10000678();
    if ((int)uVar1 == 0) {
      uVar1 = 0xffffffffffffff40;
    }
    FUN_100db158(uVar1,0);
  }
  return;
}














/* Address: 0x100db368 Size: 80 bytes */
void FUN_100db368(long long param_1)

{
  char auStack_108 [264];
  
  FUN_100b1e10(auStack_108,param_1,uRam10116ee8);
  FUN_100b1c84(auStack_108);
  FUN_100023b8();
  return;
}










/* Address: 0x100db3b8 Size: 16 bytes */
void FUN_100db3b8(int param_1)

{
  *puRam10117370 = *(int *)(param_1 + 0x108);
  return;
}

/* Address: 0x100db500 Size: 116 bytes */
long long
FUN_100db500(long long param_1,long long param_2,char param_3,char param_4,
            char param_5,char param_6)

{
  long long uVar1;
  
  uVar1 = FUN_100db3c8(0);
  FUN_100db49c(uVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}











/* Address: 0x100db57c Size: 40 bytes */
void FUN_100db57c(void)

{
  FUN_100db3c8(0);
  return;
}

/* Address: 0x100db5a4 Size: 76 bytes */
void FUN_100db5a4(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100db5f0 Size: 112 bytes */
void FUN_100db5f0(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar6;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  param_1[1] = *param_2;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  param_1[4] = iVar3;
  param_1[5] = iVar4;
  param_1[6] = iVar5;
  iVar1 = param_2[7];
  iVar2 = param_2[8];
  iVar3 = param_2[9];
  iVar4 = param_2[10];
  iVar5 = param_2[0xb];
  param_1[7] = param_2[6];
  param_1[8] = iVar1;
  param_1[9] = iVar2;
  param_1[10] = iVar3;
  param_1[0xb] = iVar4;
  param_1[0xc] = iVar5;
  iVar1 = param_2[0xd];
  iVar2 = param_2[0xe];
  iVar3 = param_2[0xf];
  iVar4 = param_2[0x10];
  uVar6 = param_2[0x11];
  param_1[0xd] = param_2[0xc];
  param_1[0xe] = iVar1;
  param_1[0xf] = iVar2;
  param_1[0x10] = iVar3;
  param_1[0x11] = iVar4;
  param_1[0x12] = uVar6 & 0xffff0000;
  return;
}

/* Address: 0x100db660 Size: 108 bytes */
void FUN_100db660(int *param_1,int param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),param_2 + 6);
  param_1[0x14] = *(int *)(param_2 + 2);
  *(short *)(param_1 + 0x16) = *(short *)(param_2 + 0x4c);
  if ((*(unsigned short *)(param_2 + 0x4e) & 0x800) != 0) {
    *(char *)((int)param_1 + 0x5a) = 1;
  }
  return;
}

/* Address: 0x100db6cc Size: 164 bytes */
void FUN_100db6cc(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int local_58;
  unsigned int local_54;
  char auStack_50 [80];
  
  puVar1 = &local_58;
  local_54 = *(unsigned char *)(param_2 + 10) + 1;
  local_58 = 0x40;
  if (local_54 < 0x40) {
    puVar1 = &local_54;
  }
  FUN_100012d8((unsigned char *)(param_2 + 10),auStack_50,*puVar1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),*(short *)(param_2 + 6),0,
               auStack_50);
  param_1[0x14] = *(int *)(param_2 + 2);
  return;
}

/* Address: 0x100db770 Size: 228 bytes */
long long FUN_100db770(int *param_1,long long param_2)

{
  long long uVar1;
  int iVar2;
  char auStack_70 [72];
  int local_28;
  int local_24;
  unsigned short local_20;
  char auStack_18 [24];
  
  uVar1 = FUN_10002070(0,param_2,auStack_70,auStack_18);
  if ((int)uVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),auStack_70);
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),&local_28);
    if (iVar2 == 0) {
      param_1[0x14] = local_28;
      param_1[0x15] = local_24;
      if ((local_20 & 0x800) != 0) {
        *(char *)((int)param_1 + 0x5a) = 1;
      }
    }
    else {
      param_1[0x14] = 0x54455854;
      param_1[0x15] = 0x3f3f3f3f;
      *(char *)((int)param_1 + 0x5a) = 0;
    }
  }
  return uVar1;
}

/* Address: 0x100db864 Size: 168 bytes */
void FUN_100db864(int *param_1,int param_2)

{
  int local_68;
  int uStack_64;
  int uStack_60;
  int uStack_5c;
  int uStack_58;
  int uStack_54;
  int local_50;
  int uStack_4c;
  int uStack_48;
  int uStack_44;
  int uStack_40;
  int uStack_3c;
  int local_38;
  int uStack_34;
  int uStack_30;
  int uStack_2c;
  int uStack_28;
  unsigned int uStack_24;
  
  local_68 = *(int *)(param_2 + 4);
  uStack_64 = *(int *)(param_2 + 8);
  uStack_60 = *(int *)(param_2 + 0xc);
  uStack_5c = *(int *)(param_2 + 0x10);
  uStack_58 = *(int *)(param_2 + 0x14);
  uStack_54 = *(int *)(param_2 + 0x18);
  local_50 = *(int *)(param_2 + 0x1c);
  uStack_4c = *(int *)(param_2 + 0x20);
  uStack_48 = *(int *)(param_2 + 0x24);
  uStack_44 = *(int *)(param_2 + 0x28);
  uStack_40 = *(int *)(param_2 + 0x2c);
  uStack_3c = *(int *)(param_2 + 0x30);
  local_38 = *(int *)(param_2 + 0x34);
  uStack_34 = *(int *)(param_2 + 0x38);
  uStack_30 = *(int *)(param_2 + 0x3c);
  uStack_2c = *(int *)(param_2 + 0x40);
  uStack_28 = *(int *)(param_2 + 0x44);
  uStack_24 = *(unsigned int *)(param_2 + 0x48) & 0xffff0000;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),&local_68);
  param_1[0x14] = *(int *)(param_2 + 0x50);
  param_1[0x15] = *(int *)(param_2 + 0x54);
  *(short *)(param_1 + 0x16) = *(short *)(param_2 + 0x58);
  *(char *)((int)param_1 + 0x5a) = *(char *)(param_2 + 0x5a);
  return;
}

/* Address: 0x100db90c Size: 172 bytes */
long long FUN_100db90c(int *param_1,short param_2,long long param_3,long long param_4)

{
  long long uVar1;
  char auStack_68 [104];
  
  uVar1 = FUN_100b1c84(param_4);
  uVar1 = FUN_10001848(param_2,param_3,uVar1,auStack_68);
  if ((int)uVar1 == -0x2b) {
    uVar1 = 0;
  }
  if ((int)uVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),auStack_68);
  }
  return uVar1;
}

/* Address: 0x100dba30 Size: 172 bytes */
long long FUN_100dba30(int *param_1)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  }
  if (((*(char *)(param_1 + 0x17) != '\x02') &&
      (uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0xf0) + (int)param_1),
      *(char *)(param_1 + 0x17) == '\x01')) && ((int)uVar2 == -0xc1)) {
    uVar2 = 0;
  }
  if ((int)uVar1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* Address: 0x100dbadc Size: 196 bytes */
long long FUN_100dbadc(int *param_1)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if ((*(char *)((int)param_1 + 0x5b) != '\0') && (*(char *)((int)param_1 + 0x5f) == '\0')) {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  }
  if ((((*(char *)(param_1 + 0x17) != '\x02') && (*(char *)(param_1 + 0x18) == '\0')) &&
      (uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0)),
      *(char *)(param_1 + 0x17) == '\x01')) && ((int)uVar2 == -0xc1)) {
    uVar2 = 0;
  }
  if ((int)uVar1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* Address: 0x100dbba0 Size: 80 bytes */
long long FUN_100dbba0(int param_1)

{
  long long uVar1;
  
  if (*(short *)(param_1 + 0x62) == -0x7ffe) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10001878(*(short *)(param_1 + 0x62));
    *(short *)(param_1 + 0x62) = 0x8002;
  }
  return uVar1;
}

/* Address: 0x100dbbf0 Size: 88 bytes */
long long FUN_100dbbf0(int param_1)

{
  long long uVar1;
  
  if (*(short *)(param_1 + 100) == -0x7ffe) {
    uVar1 = 0;
  }
  else {
    FUN_10003300(*(short *)(param_1 + 100));
    uVar1 = FUN_10000678();
    *(short *)(param_1 + 100) = 0x8002;
  }
  return uVar1;
}

/* Address: 0x100dbc48 Size: 148 bytes */
long long FUN_100dbc48(int *param_1)

{
  long long uVar1;
  long long uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x100) + (int)param_1);
  }
  if (*(char *)(param_1 + 0x17) != '\x02') {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x108) + (int)param_1);
  }
  if ((int)uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

/* Address: 0x100dbcdc Size: 148 bytes */
void FUN_100dbcdc(int param_1)

{
  int local_b0;
  int uStack_ac;
  int uStack_a8;
  int uStack_a4;
  int uStack_a0;
  int uStack_9c;
  int local_98;
  int uStack_94;
  int uStack_90;
  int uStack_8c;
  int uStack_88;
  int uStack_84;
  int local_80;
  int uStack_7c;
  int uStack_78;
  int uStack_74;
  int uStack_70;
  unsigned int uStack_6c;
  char auStack_68 [4];
  char auStack_64 [100];
  
  local_b0 = *(int *)(param_1 + 4);
  uStack_ac = *(int *)(param_1 + 8);
  uStack_a8 = *(int *)(param_1 + 0xc);
  uStack_a4 = *(int *)(param_1 + 0x10);
  uStack_a0 = *(int *)(param_1 + 0x14);
  uStack_9c = *(int *)(param_1 + 0x18);
  local_98 = *(int *)(param_1 + 0x1c);
  uStack_94 = *(int *)(param_1 + 0x20);
  uStack_90 = *(int *)(param_1 + 0x24);
  uStack_8c = *(int *)(param_1 + 0x28);
  uStack_88 = *(int *)(param_1 + 0x2c);
  uStack_84 = *(int *)(param_1 + 0x30);
  local_80 = *(int *)(param_1 + 0x34);
  uStack_7c = *(int *)(param_1 + 0x38);
  uStack_78 = *(int *)(param_1 + 0x3c);
  uStack_74 = *(int *)(param_1 + 0x40);
  uStack_70 = *(int *)(param_1 + 0x44);
  uStack_6c = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  FUN_10001890(&local_b0,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x50),
               *(short *)(param_1 + 0x58),auStack_68,&local_b0,auStack_64);
  return;
}

/* Address: 0x100dbde8 Size: 160 bytes */
void FUN_100dbde8(int param_1)

{
  int local_130;
  int uStack_12c;
  int uStack_128;
  int uStack_124;
  int uStack_120;
  int uStack_11c;
  int local_118;
  int uStack_114;
  int uStack_110;
  int uStack_10c;
  int uStack_108;
  int uStack_104;
  int local_100;
  int uStack_fc;
  int uStack_f8;
  int uStack_f4;
  int uStack_f0;
  unsigned int uStack_ec;
  char auStack_e8 [4];
  char auStack_e4 [228];
  
  local_130 = *(int *)(param_1 + 4);
  uStack_12c = *(int *)(param_1 + 8);
  uStack_128 = *(int *)(param_1 + 0xc);
  uStack_124 = *(int *)(param_1 + 0x10);
  uStack_120 = *(int *)(param_1 + 0x14);
  uStack_11c = *(int *)(param_1 + 0x18);
  local_118 = *(int *)(param_1 + 0x1c);
  uStack_114 = *(int *)(param_1 + 0x20);
  uStack_110 = *(int *)(param_1 + 0x24);
  uStack_10c = *(int *)(param_1 + 0x28);
  uStack_108 = *(int *)(param_1 + 0x2c);
  uStack_104 = *(int *)(param_1 + 0x30);
  local_100 = *(int *)(param_1 + 0x34);
  uStack_fc = *(int *)(param_1 + 0x38);
  uStack_f8 = *(int *)(param_1 + 0x3c);
  uStack_f4 = *(int *)(param_1 + 0x40);
  uStack_f0 = *(int *)(param_1 + 0x44);
  uStack_ec = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  FUN_10002b68(&local_130,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x50),
               *(short *)(param_1 + 0x58),auStack_e8,&local_130,auStack_e4);
  FUN_10000678();
  return;
}

/* Address: 0x100dbf50 Size: 144 bytes */
void FUN_100dbf50(int param_1)

{
  int local_b0;
  int uStack_ac;
  int uStack_a8;
  int uStack_a4;
  int uStack_a0;
  int uStack_9c;
  int local_98;
  int uStack_94;
  int uStack_90;
  int uStack_8c;
  int uStack_88;
  int uStack_84;
  int local_80;
  int uStack_7c;
  int uStack_78;
  int uStack_74;
  int uStack_70;
  unsigned int uStack_6c;
  
  *(int *)(param_1 + 0x4c) = 0;
  local_b0 = *(int *)(param_1 + 4);
  uStack_ac = *(int *)(param_1 + 8);
  uStack_a8 = *(int *)(param_1 + 0xc);
  uStack_a4 = *(int *)(param_1 + 0x10);
  uStack_a0 = *(int *)(param_1 + 0x14);
  uStack_9c = *(int *)(param_1 + 0x18);
  local_98 = *(int *)(param_1 + 0x1c);
  uStack_94 = *(int *)(param_1 + 0x20);
  uStack_90 = *(int *)(param_1 + 0x24);
  uStack_8c = *(int *)(param_1 + 0x28);
  uStack_88 = *(int *)(param_1 + 0x2c);
  uStack_84 = *(int *)(param_1 + 0x30);
  local_80 = *(int *)(param_1 + 0x34);
  uStack_7c = *(int *)(param_1 + 0x38);
  uStack_78 = *(int *)(param_1 + 0x3c);
  uStack_74 = *(int *)(param_1 + 0x40);
  uStack_70 = *(int *)(param_1 + 0x44);
  uStack_6c = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  FUN_100018d8(&local_b0);
  return;
}

/* Address: 0x100dc050 Size: 188 bytes */
long long FUN_100dc050(int *param_1)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x128) + (int)param_1,
                         *(char *)((int)param_1 + 0x5d));
  }
  if (((*(char *)(param_1 + 0x17) != '\x02') &&
      (uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x130) + (int)param_1,
                            *(char *)((int)param_1 + 0x5e)),
      *(char *)(param_1 + 0x17) == '\x01')) && ((int)uVar2 != 0)) {
    uVar2 = 0;
  }
  if ((int)uVar1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* Address: 0x100dc10c Size: 212 bytes */
long long FUN_100dc10c(int *param_1)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if ((*(char *)((int)param_1 + 0x5b) != '\0') && (*(char *)((int)param_1 + 0x5f) != '\0')) {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x128) + (int)param_1,
                         *(char *)((int)param_1 + 0x5d));
  }
  if ((((*(char *)(param_1 + 0x17) != '\x02') && (*(char *)(param_1 + 0x18) != '\0')) &&
      (uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),
                            *(char *)((int)param_1 + 0x5e)),
      *(char *)(param_1 + 0x17) == '\x01')) && ((int)uVar2 != 0)) {
    uVar2 = 0;
  }
  if ((int)uVar1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100dc1e0(int param_1,unsigned char param_2) { return 0; }













































/* Address: 0x100dc49c Size: 172 bytes */
void FUN_100dc49c(int param_1,int param_2)

{
  int local_a8;
  int uStack_a4;
  int uStack_a0;
  int uStack_9c;
  int uStack_98;
  int uStack_94;
  int local_90;
  int uStack_8c;
  int uStack_88;
  int uStack_84;
  int uStack_80;
  int uStack_7c;
  int local_78;
  int uStack_74;
  int uStack_70;
  int uStack_6c;
  int uStack_68;
  unsigned int uStack_64;
  int local_60;
  int uStack_5c;
  int uStack_58;
  int uStack_54;
  int uStack_50;
  int uStack_4c;
  int local_48;
  int uStack_44;
  int uStack_40;
  int uStack_3c;
  int uStack_38;
  int uStack_34;
  int local_30;
  int uStack_2c;
  int uStack_28;
  int uStack_24;
  int uStack_20;
  unsigned int uStack_1c;
  
  local_60 = *(int *)(param_1 + 4);
  uStack_5c = *(int *)(param_1 + 8);
  uStack_58 = *(int *)(param_1 + 0xc);
  uStack_54 = *(int *)(param_1 + 0x10);
  uStack_50 = *(int *)(param_1 + 0x14);
  uStack_4c = *(int *)(param_1 + 0x18);
  local_48 = *(int *)(param_1 + 0x1c);
  uStack_44 = *(int *)(param_1 + 0x20);
  uStack_40 = *(int *)(param_1 + 0x24);
  uStack_3c = *(int *)(param_1 + 0x28);
  uStack_38 = *(int *)(param_1 + 0x2c);
  uStack_34 = *(int *)(param_1 + 0x30);
  local_30 = *(int *)(param_1 + 0x34);
  uStack_2c = *(int *)(param_1 + 0x38);
  uStack_28 = *(int *)(param_1 + 0x3c);
  uStack_24 = *(int *)(param_1 + 0x40);
  uStack_20 = *(int *)(param_1 + 0x44);
  uStack_1c = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  local_a8 = *(int *)(param_2 + 4);
  uStack_a4 = *(int *)(param_2 + 8);
  uStack_a0 = *(int *)(param_2 + 0xc);
  uStack_9c = *(int *)(param_2 + 0x10);
  uStack_98 = *(int *)(param_2 + 0x14);
  uStack_94 = *(int *)(param_2 + 0x18);
  local_90 = *(int *)(param_2 + 0x1c);
  uStack_8c = *(int *)(param_2 + 0x20);
  uStack_88 = *(int *)(param_2 + 0x24);
  uStack_84 = *(int *)(param_2 + 0x28);
  uStack_80 = *(int *)(param_2 + 0x2c);
  uStack_7c = *(int *)(param_2 + 0x30);
  local_78 = *(int *)(param_2 + 0x34);
  uStack_74 = *(int *)(param_2 + 0x38);
  uStack_70 = *(int *)(param_2 + 0x3c);
  uStack_6c = *(int *)(param_2 + 0x40);
  uStack_68 = *(int *)(param_2 + 0x44);
  uStack_64 = *(unsigned int *)(param_2 + 0x48) & 0xffff0000;
  FUN_10001a10(&local_60,&local_a8);
  return;
}

/* Address: 0x100dc55c Size: 120 bytes */
void FUN_100dc55c(int param_1)

{
  int local_60;
  int uStack_5c;
  int uStack_58;
  int uStack_54;
  int uStack_50;
  int uStack_4c;
  int local_48;
  int uStack_44;
  int uStack_40;
  int uStack_3c;
  int uStack_38;
  int uStack_34;
  int local_30;
  int uStack_2c;
  int uStack_28;
  int uStack_24;
  int uStack_20;
  unsigned int uStack_1c;
  
  local_60 = *(int *)(param_1 + 4);
  uStack_5c = *(int *)(param_1 + 8);
  uStack_58 = *(int *)(param_1 + 0xc);
  uStack_54 = *(int *)(param_1 + 0x10);
  uStack_50 = *(int *)(param_1 + 0x14);
  uStack_4c = *(int *)(param_1 + 0x18);
  local_48 = *(int *)(param_1 + 0x1c);
  uStack_44 = *(int *)(param_1 + 0x20);
  uStack_40 = *(int *)(param_1 + 0x24);
  uStack_3c = *(int *)(param_1 + 0x28);
  uStack_38 = *(int *)(param_1 + 0x2c);
  uStack_34 = *(int *)(param_1 + 0x30);
  local_30 = *(int *)(param_1 + 0x34);
  uStack_2c = *(int *)(param_1 + 0x38);
  uStack_28 = *(int *)(param_1 + 0x3c);
  uStack_24 = *(int *)(param_1 + 0x40);
  uStack_20 = *(int *)(param_1 + 0x44);
  uStack_1c = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  FUN_10002ef8(&local_60);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100dc5e8(int param_1,int param_2) { }







































































/* Address: 0x100dc6c4 Size: 92 bytes */
int FUN_100dc6c4(int *param_1)

{
  int iVar1;
  char auStack_88 [72];
  int local_40;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_88);
  if (iVar1 != 0) {
    local_40 = 0;
  }
  return local_40;
}

/* Address: 0x100dc720 Size: 40 bytes */
void FUN_100dc720(int param_1)

{
  FUN_10001968(*(short *)(param_1 + 0x62));
  return;
}

/* Address: 0x100dc748 Size: 40 bytes */
void FUN_100dc748(int param_1)

{
  FUN_10001980(*(short *)(param_1 + 0x62));
  return;
}

/* Address: 0x100dc778 Size: 100 bytes */
long long FUN_100dc778(int *param_1,int *param_2)

{
  long long uVar1;
  char auStack_18 [4];
  int local_14;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),auStack_18);
  if ((int)uVar1 == 0) {
    *param_2 = local_14;
  }
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100dc7dc(int param_1,int param_2) { }








































































/* Address: 0x100dc8c0 Size: 100 bytes */
long long FUN_100dc8c0(int *param_1,int *param_2)

{
  long long uVar1;
  int local_18 [6];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),local_18);
  if ((int)uVar1 == 0) {
    *param_2 = local_18[0];
  }
  return uVar1;
}

/* Address: 0x100dc954 Size: 144 bytes */
void FUN_100dc954(int param_1,long long param_2,long long param_3,long long param_4)

{
  int local_b0;
  int uStack_ac;
  int uStack_a8;
  int uStack_a4;
  int uStack_a0;
  int uStack_9c;
  int local_98;
  int uStack_94;
  int uStack_90;
  int uStack_8c;
  int uStack_88;
  int uStack_84;
  int local_80;
  int uStack_7c;
  int uStack_78;
  int uStack_74;
  int uStack_70;
  unsigned int uStack_6c;
  char auStack_68 [4];
  char auStack_64 [100];
  
  local_b0 = *(int *)(param_1 + 4);
  uStack_ac = *(int *)(param_1 + 8);
  uStack_a8 = *(int *)(param_1 + 0xc);
  uStack_a4 = *(int *)(param_1 + 0x10);
  uStack_a0 = *(int *)(param_1 + 0x14);
  uStack_9c = *(int *)(param_1 + 0x18);
  local_98 = *(int *)(param_1 + 0x1c);
  uStack_94 = *(int *)(param_1 + 0x20);
  uStack_90 = *(int *)(param_1 + 0x24);
  uStack_8c = *(int *)(param_1 + 0x28);
  uStack_88 = *(int *)(param_1 + 0x2c);
  uStack_84 = *(int *)(param_1 + 0x30);
  local_80 = *(int *)(param_1 + 0x34);
  uStack_7c = *(int *)(param_1 + 0x38);
  uStack_78 = *(int *)(param_1 + 0x3c);
  uStack_74 = *(int *)(param_1 + 0x40);
  uStack_70 = *(int *)(param_1 + 0x44);
  uStack_6c = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  FUN_10001530(&local_b0,param_2,param_3,param_4,auStack_68,&local_b0,auStack_64);
  return;
}

/* Address: 0x100dca58 Size: 92 bytes */
int FUN_100dca58(int *param_1)

{
  int iVar1;
  char auStack_88 [76];
  int local_3c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_88);
  if (iVar1 != 0) {
    local_3c = 0;
  }
  return local_3c;
}

/* Address: 0x100dcab4 Size: 156 bytes */
void FUN_100dcab4(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int local_70;
  unsigned int local_6c;
  int local_68;
  int uStack_64;
  int uStack_60;
  int uStack_5c;
  int uStack_58;
  int uStack_54;
  int uStack_50;
  int uStack_4c;
  int local_48;
  int uStack_44;
  int uStack_40;
  int uStack_3c;
  int uStack_38;
  int uStack_34;
  int uStack_30;
  int uStack_2c;
  
  puVar1 = &local_70;
  local_6c = *(unsigned char *)(param_1 + 10) + 1;
  local_70 = 0x40;
  if (local_6c < 0x40) {
    puVar1 = &local_6c;
  }
  FUN_100012d8((unsigned char *)(param_1 + 10),&local_68,*puVar1);
  *param_2 = local_68;
  param_2[1] = uStack_64;
  param_2[2] = uStack_60;
  param_2[3] = uStack_5c;
  param_2[4] = uStack_58;
  param_2[5] = uStack_54;
  param_2[6] = uStack_50;
  param_2[7] = uStack_4c;
  param_2[8] = local_48;
  param_2[9] = uStack_44;
  param_2[10] = uStack_40;
  param_2[0xb] = uStack_3c;
  param_2[0xc] = uStack_38;
  param_2[0xd] = uStack_34;
  param_2[0xe] = uStack_30;
  param_2[0xf] = uStack_2c;
  return;
}

/* Address: 0x100dcb50 Size: 404 bytes */
long long FUN_100dcb50(int param_1,long long param_2)

{
  int iVar1;
  int *ppuVar2;
  int iVar3;
  long long uVar4;
  int local_2b4;
  unsigned int local_290;
  int uStack_28c;
  int uStack_288;
  int uStack_284;
  int uStack_280;
  int local_27c;
  int uStack_278;
  int uStack_274;
  unsigned int uStack_270;
  unsigned int local_268;
  int uStack_264;
  int uStack_260;
  int uStack_25c;
  int uStack_258;
  int local_254;
  int uStack_250;
  int uStack_24c;
  unsigned int uStack_248;
  char auStack_240 [64];
  unsigned int local_200;
  int uStack_1fc;
  int uStack_1f8;
  int uStack_1f4;
  int uStack_1f0;
  int local_1ec;
  int uStack_1e8;
  int uStack_1e4;
  unsigned int uStack_1e0;
  char auStack_1d8 [256];
  char auStack_d8 [18];
  char *local_c6;
  short local_c2;
  short local_bc;
  int local_a8;
  int local_74;
  char auStack_68 [104];
  
  iVar1 = iRam1011788c;
  ppuVar2 = 0 /* TVect base */;
  FUN_100b1fec(auStack_240,(unsigned long long)uRam10116eec + 8);
  FUN_100b1fec(auStack_68,ZEXT48((*(int*)((char*)ppuVar2 - 0x26d))) + 0xc);
  local_200 = local_200 & 0xffffff;
  FUN_100b1d90(param_2,ZEXT48((*(int*)((char*)ppuVar2 - 0x26d))) + 0x10);
  if (*(char *)(iVar1 + 0x1d) == '\0') {
    FUN_100b20f0(&local_268,ZEXT48((*(int*)((char*)ppuVar2 - 0x26d))) + 0x18);
    local_200 = local_268;
    uStack_1fc = uStack_264;
    uStack_1f8 = uStack_260;
    uStack_1f4 = uStack_25c;
    uStack_1f0 = uStack_258;
    local_1ec = local_254;
    uStack_1e8 = uStack_250;
    uStack_1e4 = uStack_24c;
    uStack_270 = uStack_248;
  }
  else {
    FUN_100b20f0(&local_290,ZEXT48((*(int*)((char*)ppuVar2 - 0x26d))) + 0x14);
    local_200 = local_290;
    uStack_1fc = uStack_28c;
    uStack_1f8 = uStack_288;
    uStack_1f4 = uStack_284;
    uStack_1f0 = uStack_280;
    local_1ec = local_27c;
    uStack_1e8 = uStack_278;
    uStack_1e4 = uStack_274;
  }
  uStack_1e0 = uStack_270 & 0xff000000;
  local_bc = 0xffff;
  local_c2 = *(short *)(param_1 + 4);
  local_a8 = *(int *)(param_1 + 6);
  local_c6 = auStack_240;
  do {
    uVar4 = FUN_10002058(auStack_d8);
    iVar3 = local_2b4;
    FUN_100b1ed0(auStack_1d8,auStack_240,&local_200);
    FUN_100b1900(param_2,auStack_1d8,1,0xff);
    if (local_a8 == 2) break;
    local_a8 = local_74;
  } while ((int)uVar4 == 0);
  if (*(char *)(iVar1 + 0x1d) != '\0') {
    FUN_100b1ab0(param_2,(unsigned long long)*(unsigned int *)(iVar3 + -0x9b4) + 0x1c,1,0xff);
  }
  return uVar4;
}

/* Address: 0x100dcce4 Size: 112 bytes */
long long FUN_100dcce4(int *param_1,int *param_2,int *param_3)

{
  long long uVar1;
  char auStack_90 [58];
  int local_56;
  int local_4c;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if ((int)uVar1 == 0) {
    *param_2 = local_56;
    *param_3 = local_4c;
  }
  return uVar1;
}

/* Address: 0x100dcd54 Size: 128 bytes */
long long FUN_100dcd54(int *param_1,short *param_2)

{
  long long uVar1;
  char auStack_80 [92];
  char local_24;
  
  FUN_100eed08(auStack_80,0x6c,0);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),auStack_80);
  if ((int)uVar1 == 0) {
    *param_2 = (short)local_24;
    *(short *)(param_1 + 0x16) = (short)local_24;
  }
  return uVar1;
}

/* Address: 0x100dcdd4 Size: 128 bytes */
long long FUN_100dcdd4(int *param_1,int param_2)

{
  long long uVar1;
  char auStack_90 [76];
  int local_44;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if ((int)uVar1 == 0) {
    local_44 = param_2;
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_90);
  }
  return uVar1;
}

/* Address: 0x100dce54 Size: 128 bytes */
long long FUN_100dce54(int *param_1,int param_2)

{
  long long uVar1;
  char auStack_90 [72];
  int local_48;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if ((int)uVar1 == 0) {
    local_48 = param_2;
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_90);
  }
  return uVar1;
}

/* Address: 0x100dced4 Size: 136 bytes */
long long FUN_100dced4(int *param_1,int *param_2)

{
  long long uVar1;
  char auStack_90 [32];
  int local_70;
  int uStack_6c;
  int uStack_68;
  int uStack_64;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if ((int)uVar1 == 0) {
    local_70 = *param_2;
    uStack_6c = param_2[1];
    uStack_68 = param_2[2];
    uStack_64 = param_2[3];
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_90);
  }
  return uVar1;
}

/* Address: 0x100dcf5c Size: 44 bytes */
void FUN_100dcf5c(int param_1)

{
  FUN_10002d18(0,*(short *)(param_1 + 4));
  return;
}

/* Address: 0x100dcf88 Size: 132 bytes */
long long FUN_100dcf88(int *param_1,int *param_2)

{
  long long uVar1;
  char auStack_90 [48];
  int local_60;
  
  FUN_100eed08(auStack_90,0x7a,0);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),auStack_90);
  if ((int)uVar1 == 0) {
    *param_2 = local_60;
  }
  else {
    *param_2 = 0;
  }
  return uVar1;
}

/* Address: 0x100dd00c Size: 132 bytes */
long long FUN_100dd00c(int *param_1,unsigned int *param_2)

{
  long long uVar1;
  char auStack_90 [62];
  unsigned short local_52;
  
  FUN_100eed08(auStack_90,0x7a,0);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),auStack_90);
  if ((int)uVar1 == 0) {
    *param_2 = (unsigned int)local_52;
  }
  else {
    *param_2 = 0;
  }
  return uVar1;
}

/* Address: 0x100dd090 Size: 68 bytes */
void FUN_100dd090(int param_1,int param_2)

{
  *(int *)(param_2 + 0xc) = 0;
  *(int *)(param_2 + 0x12) = 0;
  *(short *)(param_2 + 0x16) = *(short *)(param_1 + 4);
  *(short *)(param_2 + 0x1c) = 0xffff;
  FUN_10000828(param_2);
  return;
}

/* Address: 0x100dd0d4 Size: 100 bytes */
void FUN_100dd0d4(int param_1,int param_2)

{
  char auStack_90 [18];
  int local_7e;
  short local_7a;
  short local_74;
  
  FUN_100eed08(auStack_90,0x7a,0);
  local_7a = *(short *)(param_1 + 4);
  local_74 = 0;
  local_7e = param_2;
  FUN_10000828(auStack_90);
  return;
}

/* Address: 0x100dd178 Size: 224 bytes */
long long FUN_100dd178(int param_1,int *param_2)

{
  short sVar4;
  int iVar3;
  long long uVar1;
  long long uVar2;
  char local_50 [80];
  
  local_50[0] = 0;
  sVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8));
  if ((*(short *)(param_1 + 4) == sVar4) &&
     (iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x160) + (int)param_2),
     *(int *)(param_1 + 6) == iVar3)) {
    FUN_10117884((int)*(short *)(*param_2 + 0x198) + (int)param_2,local_50);
    uVar1 = FUN_100b1c84(local_50);
    uVar2 = FUN_100b1c84(param_1 + 10);
    iVar3 = FUN_10001998(uVar2,uVar1,0,1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* Address: 0x100dd260 Size: 88 bytes */
int FUN_100dd260(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400));
  return iVar1 != param_1[0x13];
}

/* Address: 0x100dd2b8 Size: 112 bytes */
long long FUN_100dd2b8(int *param_1,char *param_2)

{
  long long uVar1;
  char auStack_88 [38];
  short local_62;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),auStack_88);
  if ((int)uVar1 == 0) {
    *param_2 = '\x01' - (((long long)local_62 & 0x8080U) == 0);
  }
  return uVar1;
}

/* Address: 0x100dd378 Size: 68 bytes */
void FUN_100dd378(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400));
  param_1[0x13] = iVar1;
  return;
}

/* Address: 0x100dd3bc Size: 280 bytes */
long long FUN_100dd3bc(int param_1,short *param_2)

{
  long long uVar1;
  long long uVar2;
  char auStack_200 [18];
  char *local_1ee;
  short local_1ea;
  char *local_1e4;
  int local_1dc;
  int local_1d0;
  char auStack_1c8 [18];
  char *local_1b6;
  short local_1b2;
  short local_1ac;
  int local_198;
  int local_164;
  char local_158 [64];
  char local_118 [280];
  
  local_118[0] = 0;
  local_158[0] = 0;
  local_1b2 = *param_2;
  local_198 = *(int *)(param_2 + 1);
  local_1ac = 0xffff;
  local_1b6 = local_158;
  uVar1 = FUN_10002058(auStack_1c8);
  if ((int)uVar1 == 0) {
    FUN_100012d8(param_1 + 10,local_118,(unsigned long long)*(unsigned char *)(param_1 + 10) + 1);
    local_1ea = *(short *)(param_1 + 4);
    local_1d0 = *(int *)(param_1 + 6);
    local_1dc = local_164;
    local_1ee = local_118;
    local_1e4 = local_158;
    uVar1 = FUN_10001a28(auStack_200);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_100b1c84(param_2 + 3);
      uVar2 = FUN_100b1c84(local_118);
      uVar1 = FUN_10000ee8(*param_2,*(int *)(param_2 + 1),uVar2,uVar1);
    }
  }
  return uVar1;
}

/* Address: 0x100dd4d4 Size: 52 bytes */
void FUN_100dd4d4(int param_1,long long param_2,long long param_3)

{
  FUN_10001a58(*(short *)(param_1 + 0x62),param_3,param_2);
  return;
}

/* Address: 0x100dd508 Size: 128 bytes */
long long FUN_100dd508(int param_1,int param_2,int *param_3,char param_4)

{
  long long uVar1;
  char auStack_58 [12];
  int local_4c;
  short local_40;
  int local_38;
  int local_34;
  int local_30;
  unsigned short local_2c;
  
  if (*(short *)(param_1 + 0x62) == -0x7ffe) {
    uVar1 = 0;
  }
  else {
    local_4c = 0;
    local_40 = *(short *)(param_1 + 0x62);
    local_34 = *param_3;
    local_2c = (short)param_4 << 8 | 0x80;
    local_38 = param_2;
    uVar1 = FUN_10000f18(auStack_58);
    *param_3 = local_30;
  }
  return uVar1;
}

/* Address: 0x100dd588 Size: 136 bytes */
void FUN_100dd588(int param_1,long long param_2)

{
  int local_170;
  int uStack_16c;
  int uStack_168;
  int uStack_164;
  int uStack_160;
  int uStack_15c;
  int local_158;
  int uStack_154;
  int uStack_150;
  int uStack_14c;
  int uStack_148;
  int uStack_144;
  int local_140;
  int uStack_13c;
  int uStack_138;
  int uStack_134;
  int uStack_130;
  unsigned int uStack_12c;
  
  local_170 = *(int *)(param_1 + 4);
  uStack_16c = *(int *)(param_1 + 8);
  uStack_168 = *(int *)(param_1 + 0xc);
  uStack_164 = *(int *)(param_1 + 0x10);
  uStack_160 = *(int *)(param_1 + 0x14);
  uStack_15c = *(int *)(param_1 + 0x18);
  local_158 = *(int *)(param_1 + 0x1c);
  uStack_154 = *(int *)(param_1 + 0x20);
  uStack_150 = *(int *)(param_1 + 0x24);
  uStack_14c = *(int *)(param_1 + 0x28);
  uStack_148 = *(int *)(param_1 + 0x2c);
  uStack_144 = *(int *)(param_1 + 0x30);
  local_140 = *(int *)(param_1 + 0x34);
  uStack_13c = *(int *)(param_1 + 0x38);
  uStack_138 = *(int *)(param_1 + 0x3c);
  uStack_134 = *(int *)(param_1 + 0x40);
  uStack_130 = *(int *)(param_1 + 0x44);
  uStack_12c = *(unsigned int *)(param_1 + 0x48) & 0xffff0000;
  FUN_10001ab8(&local_170,param_2);
  return;
}

/* Address: 0x100dd660 Size: 168 bytes */
void FUN_100dd660(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int local_58;
  unsigned int local_54;
  char auStack_50 [80];
  
  puVar1 = &local_58;
  local_54 = *(unsigned char *)(param_1 + 10) + 1;
  local_58 = 0x40;
  if (local_54 < 0x40) {
    puVar1 = &local_54;
  }
  FUN_100012d8((unsigned char *)(param_1 + 10),auStack_50,*puVar1);
  *(int *)(param_2 + 0xc) = 0;
  *(char **)(param_2 + 0x12) = auStack_50;
  *(short *)(param_2 + 0x16) = *(short *)(param_1 + 4);
  *(int *)(param_2 + 0x30) = *(int *)(param_1 + 6);
  FUN_10001aa0(param_2);
  *(int *)(param_2 + 0x12) = 0;
  return;
}

/* Address: 0x100dd708 Size: 40 bytes */
void FUN_100dd708(int param_1)

{
  FUN_10000f60(*(short *)(param_1 + 0x62));
  return;
}

/* Address: 0x100dd730 Size: 56 bytes */
void FUN_100dd730(int param_1,long long param_2,short param_3)

{
  FUN_10001710(*(short *)(param_1 + 0x62),param_3,param_2);
  return;
}

/* Address: 0x100dd768 Size: 160 bytes */
void FUN_100dd768(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int local_58;
  unsigned int local_54;
  char auStack_50 [80];
  
  puVar1 = &local_58;
  local_54 = *(unsigned char *)(param_1 + 10) + 1;
  local_58 = 0x40;
  if (local_54 < 0x40) {
    puVar1 = &local_54;
  }
  FUN_100012d8((unsigned char *)(param_1 + 10),auStack_50,*puVar1);
  *(char **)(param_2 + 0x12) = auStack_50;
  *(short *)(param_2 + 0x16) = *(short *)(param_1 + 4);
  *(int *)(param_2 + 0x30) = *(int *)(param_1 + 6);
  FUN_10002e20(param_2);
  *(int *)(param_2 + 0x12) = 0;
  return;
}

/* Address: 0x100dd808 Size: 68 bytes */
void FUN_100dd808(long long param_1,unsigned char *param_2)

{
  FUN_10002340(param_2,param_1 + 10,(unsigned long long)*param_2 + 1);
  return;
}

/* Address: 0x100dd84c Size: 128 bytes */
long long FUN_100dd84c(int *param_1,char param_2)

{
  long long uVar1;
  char auStack_80 [92];
  char local_24;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),auStack_80);
  if ((int)uVar1 == 0) {
    local_24 = param_2;
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x278) + (int)param_1,auStack_80);
  }
  return uVar1;
}

/* Address: 0x100dd8e0 Size: 48 bytes */
void FUN_100dd8e0(int param_1)

{
  FUN_100014e8(*(short *)(param_1 + 100));
  FUN_10000678();
  return;
}

/* Address: 0x100dd910 Size: 88 bytes */
long long FUN_100dd910(int param_1)

{
  short sVar1;
  long long uVar2;
  
  uVar2 = FUN_100014b8();
  sVar1 = *(short *)(param_1 + 100);
  if (((int)uVar2 != (int)sVar1) && (sVar1 != -0x7ffe)) {
    FUN_10000318(sVar1);
  }
  return uVar2;
}

/* Address: 0x100dd968 Size: 52 bytes */
void FUN_100dd968(int param_1,long long param_2,long long param_3)

{
  FUN_10002688(*(short *)(param_1 + 0x62),param_3,param_2);
  return;
}

/* Address: 0x100dd99c Size: 60 bytes */
void FUN_100dd99c(void)

{
  FUN_100c1c8c(uRam10116ef4,*puRam10116ef8,0x68,uRam10116efc,uRam10116938);
  return;
}

/* Address: 0x100dd9e0 Size: 124 bytes */
int * FUN_100dd9e0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x144),
     param_1 != (int *)0x0)) {
    FUN_100d62f4(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x267));
    param_1[0x4f] = 0;
    param_1[0x50] = 0x20202020;
  }
  return param_1;
}

/* Address: 0x100dda5c Size: 40 bytes */
void FUN_100dda5c(void)

{
  FUN_100dd9e0(0);
  return;
}

/* Address: 0x100dda84 Size: 252 bytes */
void FUN_100dda84(int *param_1,long long param_2,int param_3)

{
  int *puVar1;
  int iVar2;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_100d63d4(param_1);
  param_1[0x50] = param_3;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar2 = FUN_10000090(auStack_130);
  if (iVar2 == 0) {
    if ((int)param_2 == 0) {
      param_2 = FUN_10117884((int)*(short *)(*param_1 + 0x348) + (int)param_1,10);
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),param_2);
    param_1[0x4f] = iVar2;
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: 0x100ddb80 Size: 60 bytes */
void FUN_100ddb80(void)

{
  FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x370));
  return;
}

/* Address: 0x100ddbbc Size: 84 bytes */
long long FUN_100ddbbc(long long param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100df14c(0);
  FUN_100df1f8(uVar1,param_1,param_2);
  return uVar1;
}

/* Address: 0x100ddc10 Size: 68 bytes */
void FUN_100ddc10(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0x13c));
  *(int *)(param_1 + 0x13c) = uVar1;
  FUN_100d64bc(param_1);
  return;
}

/* Address: 0x100ddc54 Size: 56 bytes */
void FUN_100ddc54(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x13c) + (int)*(short *)(**(int **)(param_1 + 0x13c) + 0xa8)
              );
  return;
}

/* Address: 0x100ddc8c Size: 292 bytes */
void FUN_100ddc8c(int param_1,short param_2,short param_3,char param_4)

{
  int uVar1;
  long long uVar2;
  long long uVar3;
  int iVar4;
  char auStack_220 [256];
  char local_120 [288];
  
  uVar1 = uRam10116a54;
  local_120[0] = 0;
  uVar2 = FUN_10117884((int)*(int **)(param_1 + 0x13c) +
                       (int)*(short *)(**(int **)(param_1 + 0x13c) + 0x110),param_4);
  if ((int)uVar2 == -0x4e22) {
    FUN_100012d8(param_1 + 0x20,local_120,(unsigned long long)*(unsigned char *)(param_1 + 0x20) + 1);
    FUN_100009d8(auStack_220,param_2,param_3);
    uVar2 = FUN_100b1c84(uVar1);
    uVar3 = FUN_100b1c84(uVar1);
    FUN_100009f0(local_120,auStack_220,uVar3,uVar2);
    iVar4 = FUN_100d8c9c(0x85,0);
    if (iVar4 == 2) {
      FUN_100db158(0,0x820000);
    }
  }
  else if (((int)uVar2 != 0) && (param_4 != '\0')) {
    FUN_100db158(uVar2,0);
  }
  return;
}

/* Address: 0x100dddb0 Size: 504 bytes */
void FUN_100dddb0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar2;
  long long uVar1;
  int *piVar3;
  int local_23c;
  unsigned char local_218 [256];
  unsigned char local_118 [280];
  
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x4b) != '\0') {
      *param_3 = *param_3 + 0x78;
    }
  }
  else {
    local_118[0] = 0;
    local_218[0] = 0;
    FUN_10117884(**(int **)(local_23c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_23c + -0xedc) + 0x530),local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c8),local_218);
    if ((long long)
        (((unsigned long long)local_218[0] - 1) + (unsigned long long)((unsigned long long)local_218[0] != 0) << 0x20) < 0) {
      if (-1 < (long long)
               (((unsigned long long)local_118[0] - 1) + (unsigned long long)((unsigned long long)local_118[0] != 0) << 0x20))
      {
        *param_4 = (unsigned int)local_118[0] + *param_4 + 0x19;
      }
    }
    else {
      *param_4 = *param_4 + (unsigned int)local_218[0] + 0x19;
    }
    if ((*(char *)(param_1 + 0x4b) != '\0') && (param_1[0x4c] != 0)) {
      iVar2 = FUN_10001c20(param_1[0x4c]);
      *param_4 = *param_4 + iVar2 + 0x18;
    }
    if ((*(char *)((int)param_1 + 0x12d) != '\0') &&
       (uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f0)), (int)uVar1 != 0)) {
      piVar3 = (int *)FUN_100fb0a4(0);
      FUN_100fb140();
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x1f8),uVar1,0);
      iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xb8));
      *param_4 = *param_4 + iVar2 + 0x18;
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x90));
    }
  }
  return;
}

/* Address: 0x100de030 Size: 344 bytes */
void FUN_100de030(int param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  int *puVar4;
  long long uVar2;
  int uVar5;
  int local_18 [6];
  
  iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x13c) +
                       (int)*(short *)(**(int **)(param_1 + 0x13c) + 0x118));
  if (iVar3 != 0) {
    iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
    if (iVar3 == 0) {
      local_18[0] = 0x78;
      if (*(int *)(param_1 + 0x130) == 0) {
        uVar5 = FUN_100f15e0(0x78);
        *(int *)(param_1 + 0x130) = uVar5;
      }
      uVar2 = FUN_100ef9b8(*(int *)(param_1 + 0x130));
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x260),
                   **(int **)(param_1 + 0x130),local_18);
      FUN_100db2f4();
      FUN_10001b60(*(int *)(param_1 + 0x130),uVar2);
    }
    else {
      puVar4 = (int *)FUN_10001728(0x50524e54,1);
      if (puVar4 != (int *)0x0) {
        if (*(int *)(param_1 + 0x130) == 0) {
          FUN_10002ce8(puVar4);
          *(int **)(param_1 + 0x130) = puVar4;
        }
        else {
          puVar1 = *(int **)(param_1 + 0x130);
          uVar2 = FUN_10001c20();
          FUN_10002340(*puVar4,*puVar1,uVar2);
          FUN_10001c98(puVar4);
        }
      }
    }
  }
  return;
}

/* Address: 0x100de188 Size: 404 bytes */
void FUN_100de188(int *param_1,int *param_2,char param_3)

{
  int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_144 [2];
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar1 = puRam10117370;
  iVar2 = FUN_10003558(0x44455347,1);
  if (((iVar2 != 0) && (param_3 == '\0')) &&
     (iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240)), iVar3 != 0)) {
    local_144[0] = 0;
    piVar4 = (int *)FUN_100fab98(0);
    FUN_100fac48(piVar4,iVar2,10);
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = *puVar1;
    *puVar1 = auStack_13c;
    iVar3 = FUN_10000090(auStack_13c);
    if (iVar3 == 0) {
      iVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x160),local_144);
      if (iVar3 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f8),local_144[0]);
      }
      FUN_100f57c8(piVar4);
      FUN_10001c98(iVar2);
      *puVar1 = local_34;
    }
    else {
      local_144[0] = FUN_100f57c8(local_144[0]);
      FUN_100f57c8(piVar4);
      FUN_10001c98(iVar2);
      FUN_100db158(local_3c,local_38);
    }
  }
  return;
}

/* Address: 0x100de3d4 Size: 656 bytes */
void FUN_100de3d4(int *param_1,int *param_2)

{
  int uVar1;
  int *puVar2;
  int iVar4;
  long long uVar3;
  int uVar5;
  int local_484;
  unsigned char local_458 [256];
  unsigned char local_358 [256];
  char auStack_258 [256];
  short local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  char auStack_140 [256];
  short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  puVar2 = puRam10117370;
  uVar1 = uRam10116a54;
  iVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
  if (iVar4 != 0) {
    local_358[0] = 0;
    local_458[0] = 0;
    FUN_10117884(**(int **)(local_484 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_484 + -0xedc) + 0x530),local_358);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c8),local_458);
    if ((long long)
        (((unsigned long long)local_458[0] - 1) + (unsigned long long)((unsigned long long)local_458[0] != 0) << 0x20) < 0) {
      if (-1 < (long long)
               (((unsigned long long)local_358[0] - 1) + (unsigned long long)((unsigned long long)local_358[0] != 0) << 0x20))
      {
        uVar3 = FUN_100f1574(1);
        FUN_100b1c84(local_358);
        uVar5 = FUN_10001ae8();
        FUN_100f1574(uVar3);
        FUN_100db26c(uVar5);
        local_40 = 0;
        local_3c = 0;
        local_34 = 0;
        local_30 = 0;
        local_38 = *puVar2;
        *puVar2 = auStack_140;
        iVar4 = FUN_10000090(auStack_140);
        if (iVar4 == 0) {
          uVar3 = FUN_100b1c84(uVar1);
          FUN_10002568(uVar5,0x53545220,0xffffffffffffbff4,uVar3);
          FUN_100db328();
          *puVar2 = local_38;
        }
        else {
          FUN_100ef510(uVar5);
          FUN_100db158(local_40,local_3c);
        }
      }
    }
    else {
      uVar3 = FUN_100f1574(1);
      FUN_100b1c84(local_458);
      uVar5 = FUN_10001ae8();
      FUN_100f1574(uVar3);
      FUN_100db26c(uVar5);
      local_158 = 0;
      local_154 = 0;
      local_14c = 0;
      local_148 = 0;
      local_150 = *puVar2;
      *puVar2 = auStack_258;
      iVar4 = FUN_10000090(auStack_258);
      if (iVar4 == 0) {
        uVar3 = FUN_100b1c84(uVar1);
        FUN_10002568(uVar5,0x53545220,0xffffffffffffbff3,uVar3);
        FUN_100db328();
        *puVar2 = local_150;
      }
      else {
        FUN_100ef510(uVar5);
        FUN_100db158(local_158,local_154);
      }
    }
  }
  return;
}

/* Address: 0x100de664 Size: 280 bytes */
void FUN_100de664(int param_1,int *param_2)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  int local_44;
  int local_20;
  int local_1c [7];
  
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
    if (iVar3 == 0) {
      local_20 = 0x78;
      uVar1 = FUN_10000360(*(int *)(param_1 + 0x130));
      FUN_10002598(*(int *)(param_1 + 0x130));
      uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2c0),
                           **(int **)(param_1 + 0x130),&local_20);
      FUN_10001b60(*(int *)(param_1 + 0x130),uVar1);
      FUN_100db2f4(uVar2);
    }
    else {
      local_1c[0] = *(int *)(param_1 + 0x130);
      FUN_100f16a0(local_1c);
      uVar1 = FUN_100b1c84(*(int *)(local_44 + -0xe4c));
      FUN_10002568(local_1c[0],0x50524e54,1,uVar1);
      FUN_100db328();
    }
  }
  return;
}

/* Address: 0x100de77c Size: 504 bytes */
void FUN_100de77c(int *param_1,int *param_2)

{
  int *puVar1;
  long long uVar2;
  int iVar3;
  int uVar4;
  int *piVar5;
  int local_27c;
  char auStack_250 [256];
  short local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = puRam10117370;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f0));
  if (((int)uVar2 != 0) &&
     (iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240)), iVar3 != 0)) {
    uVar4 = FUN_100f15e0(0x32);
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = *puVar1;
    *puVar1 = auStack_138;
    iVar3 = FUN_10000090(auStack_138);
    if (iVar3 == 0) {
      piVar5 = (int *)FUN_100fab98();
      FUN_100fac48(piVar5,uVar4,10);
      local_150 = 0;
      local_14c = 0;
      local_144 = 0;
      local_140 = 0;
      local_148 = *puVar1;
      *puVar1 = auStack_250;
      iVar3 = FUN_10000090(auStack_250);
      if (iVar3 == 0) {
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x1f8),uVar2,0);
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x90));
        *puVar1 = local_148;
      }
      else {
        FUN_100f57c8(piVar5);
        FUN_100db158(local_150,local_14c);
      }
      uVar2 = FUN_100b1c84(*(int *)(local_27c + -0xe4c));
      FUN_10002568(uVar4,0x44455347,1,uVar2);
      FUN_100db328();
      *puVar1 = local_30;
    }
    else {
      FUN_100ef510(uVar4);
      FUN_100db158(local_38,local_34);
    }
  }
  return;
}

/* Address: 0x100de974 Size: 56 bytes */
void FUN_100de974(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x13c) + (int)*(short *)(**(int **)(param_1 + 0x13c) + 0xd8)
              );
  return;
}

/* Address: 0x100de9ac Size: 180 bytes */
void FUN_100de9ac(int *param_1,char param_2)

{
  unsigned char local_50 [80];
  
  local_50[0] = 0;
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x138),local_50);
  FUN_100012d8(local_50,param_1 + 8,(unsigned long long)local_50[0] + 1);
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xb0),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),0);
  return;
}

/* Address: 0x100dea60 Size: 136 bytes */
void FUN_100dea60(int *param_1,long long param_2)

{
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xb0),0);
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x130),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),1);
  return;
}

/* Address: 0x100deae8 Size: 456 bytes */
void FUN_100deae8(int *param_1)

{
  int uVar1;
  int *puVar2;
  int iVar3;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = puRam10117370;
  uVar1 = uRam10116a74;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puRam10117370;
  *puRam10117370 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b0),0xfa,0xd,1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x238));
    iVar3 = FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x118));
    if (iVar3 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250));
    }
    else {
      FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xb0),0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),0);
    *puVar2 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    if (local_28 == -0x2b) {
      local_28 = -0x4e21;
    }
    if (local_24 == 0) {
      FUN_100012d8(param_1 + 8,uVar1,(unsigned long long)*(unsigned char *)(param_1 + 8) + 1);
    }
    FUN_100db22c(local_28,local_24,0x820003);
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100decb0 Size: 292 bytes */
void FUN_100decb0(int *param_1,unsigned long long param_2)

{
  int iVar1;
  char cVar2;
  long long lVar3;
  long long lVar4;
  
  iVar1 = FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x118));
  if ((iVar1 == 0) || (((int)param_2 != 0x1e && ((int)param_2 != 0x1f)))) {
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
  }
  cVar2 = ('!' - ((0x21 < param_2) + '!')) +
          (0x20 < param_2 && (unsigned long long)(0x21 < param_2) <= param_2 - 0x21);
  if ((lVar3 == 0) && (cVar2 == '\0')) {
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b0),0xfa,0xc,0);
  }
  if ((*(char *)((int)param_1 + 0x135) != '\0') || (cVar2 == '\0')) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
  }
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xf8),param_2,lVar3,lVar4,
               cVar2);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100dedd4(int *param_1,long long param_2) { }












/* Address: stubbed - had compile errors on 64-bit */
void FUN_100dee64(void) { }













































































































/* Address: 0x100df03c Size: 156 bytes */
void FUN_100df03c(int param_1,unsigned char *param_2)

{
  unsigned char local_50;
  char auStack_4f [79];
  
  FUN_100d7318(param_1,param_2);
  if (*param_2 < 0x40) {
    local_50 = *param_2;
  }
  else {
    local_50 = 0x3f;
  }
  FUN_100012d8(param_2 + 1,auStack_4f);
  FUN_10117884((int)*(int **)(param_1 + 0x13c) +
               (int)*(short *)(**(int **)(param_1 + 0x13c) + 0x140),&local_50);
  return;
}

/* Address: 0x100df0d8 Size: 48 bytes */
void FUN_100df0d8(long long param_1,long long param_2)

{
  FUN_100b1d90(param_2,(unsigned long long)uRam10116f00 + 0x18);
  return;
}

/* Address: 0x100df108 Size: 60 bytes */
void FUN_100df108(void)

{
  FUN_100c1c8c(uRam10116318,*puRam10116f08,0x144,uRam10116f0c,uRam10116e64);
  return;
}

/* Address: 0x100df14c Size: 132 bytes */
int * FUN_100df14c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x10),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x262));
    param_1[1] = 0;
    param_1[2] = 0;
    *(char *)(param_1 + 3) = 0;
    *(char *)((int)param_1 + 0xd) = 1;
  }
  return param_1;
}


















/* Address: 0x100df1d0 Size: 40 bytes */
void FUN_100df1d0(void)

{
  FUN_100df14c(0);
  return;
}

/* Address: 0x100df1f8 Size: 68 bytes */
void FUN_100df1f8(int param_1,int param_2,int param_3)

{
  FUN_100f5274(param_1);
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 4) = param_2;
  return;
}








/* Address: 0x100df23c Size: 124 bytes */
void FUN_100df23c(int *param_1)

{
  if (param_1[2] != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
    FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x90));
    param_1[2] = 0;
  }
  FUN_100f5108(param_1);
  return;
}

/* Address: 0x100df2b8 Size: 56 bytes */
void FUN_100df2b8(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x358));
  return;
}

/* Address: 0x100df2f0 Size: 76 bytes */
long long FUN_100df2f0(int param_1)

{
  long long uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x220));
  }
  return uVar1;
}

/* Address: 0x100df33c Size: 72 bytes */
void FUN_100df33c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0xd8));
  }
  return;
}

/* Address: 0x100df384 Size: 128 bytes */
void FUN_100df384(int *param_1,long long param_2,int *param_3)

{
  int iVar1;
  
  FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x360),param_1[2],param_2,param_3);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120));
  if (iVar1 != 0) {
    *param_3 = *param_3 + 0x11e;
  }
  return;
}

/* Address: 0x100df404 Size: 76 bytes */
void FUN_100df404(int param_1,char param_2)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x368),
               *(int *)(param_1 + 8),param_2);
  return;
}

/* Address: 0x100df450 Size: 60 bytes */
void FUN_100df450(int param_1,long long param_2,char param_3)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x380),
               param_2,param_3);
  return;
}

/* Address: 0x100df48c Size: 196 bytes */
long long FUN_100df48c(int param_1,char param_2)

{
  long long uVar1;
  int iVar2;
  char auStack_90 [32];
  int local_70;
  int local_44;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x170),auStack_90);
    if ((int)uVar1 == 0) {
      if ((param_2 == '\0') || (local_70 == *(int *)(*(int *)(param_1 + 8) + 0x50))) {
        iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                             (int)*(short *)(**(int **)(param_1 + 8) + 400));
        if (local_44 != iVar2) {
          uVar1 = 0xffffffffffffb1de;
        }
      }
      else {
        uVar1 = 0xffffffffffffb1dc;
      }
    }
  }
  return uVar1;
}

/* Address: 0x100df560 Size: 92 bytes */
void FUN_100df560(int *param_1,int param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  FUN_100f57c8(param_1[2]);
  param_1[2] = param_2;
  *(char *)(param_1 + 3) = 0;
  return;
}

/* Address: 0x100df5bc Size: 72 bytes */
void FUN_100df5bc(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x198));
  }
  return;
}

/* Address: 0x100df604 Size: 176 bytes */
long long FUN_100df604(int param_1,long long param_2,char param_3,int param_4)

{
  long long uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(int *)(param_4 + 0x20) = *(int *)(*(int *)(param_1 + 8) + 0x50);
    *(int *)(param_4 + 0x24) = *(int *)(*(int *)(param_1 + 8) + 0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_3 != '\0') &&
       (iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                             (int)*(short *)(**(int **)(param_1 + 8) + 0x140),param_4), iVar2 == 0))
    {
      uVar1 = 1;
    }
    *(int *)(param_4 + 0x20) = *(int *)(*(int *)(param_1 + 8) + 0x50);
    *(int *)(param_4 + 0x24) = *(int *)(*(int *)(param_1 + 8) + 0x54);
  }
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100df6b4(int param_1,unsigned char *param_2) { }










































































/* Address: 0x100df830 Size: 76 bytes */
long long FUN_100df830(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x240));
  }
  return uVar1;
}

/* Address: 0x100df87c Size: 360 bytes */
void FUN_100df87c(int *param_1,char param_2)

{
  int *puVar1;
  int iVar2;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  if (param_1[2] != 0) {
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = *puRam10117370;
    *puRam10117370 = auStack_130;
    iVar2 = FUN_10000090(auStack_130);
    if (iVar2 == 0) {
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x118));
      FUN_100db2f4();
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x288),0,1);
      *(char *)(param_1 + 3) = 1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2);
      *puVar1 = local_28;
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
      FUN_100db158(local_30,local_2c);
    }
    FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0xe0));
    FUN_100db2f4();
    FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x250));
  }
  return;
}

/* Address: 0x100df9e4 Size: 752 bytes */
void FUN_100df9e4(int param_1,long long param_2,long long param_3,int *param_4)

{
  int *piVar1;
  int *ppuVar2;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  int *puVar8;
  long long uVar6;
  long long uVar7;
  int *piVar9;
  unsigned char bVar10;
  int in_stack_0000001c;
  int local_2f4;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  short local_2b4 [2];
  char local_2b0 [6];
  char auStack_2aa [82];
  char auStack_258 [256];
  char auStack_158 [8];
  int *local_150;
  char local_14c [256];
  char auStack_4c [76];
  
  piVar9 = piRam101169f4;
  ppuVar2 = 0 /* TVect base */;
  local_14c[0] = 0;
  FUN_100b02d0(auStack_158);
  FUN_100b19f4(auStack_258,ZEXT48((*(int*)((char*)ppuVar2 - 0x264))) + 0x10);
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x3a8),
               in_stack_0000001c,local_14c,auStack_258,local_2b4,auStack_158,&local_2b8,&local_2bc);
  FUN_100ef088(0xfffffffffffffffe,**(int **)(local_2f4 + -0xe48),
               **(int **)(local_2f4 + -0xed4));
  FUN_100db2f4();
  if (local_150 == (int *)0x0) {
    local_150 = ((char*)0 + 0x0000001c);
  }
  piVar1 = (int *)*piVar9;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x1c8),1);
  uVar3 = FUN_10000a98(local_2b8,4000,1);
  uVar4 = FUN_10000a98(local_2bc,0x3fd0,1);
  uVar5 = FUN_10000a98(local_2c4,0x36c0,1);
  puVar8 = (int *)FUN_100b0368(auStack_4c,auStack_158);
  uVar6 = FUN_100b1c84(auStack_258);
  uVar7 = FUN_100b1c84(local_14c);
  FUN_10000cc0(uVar7,uVar6,local_2b0,local_2b4[0],*puVar8,uVar3,uVar4,local_2c0);
  FUN_100ef5f0(uVar3);
  FUN_100ef5f0(uVar4);
  FUN_100ef5f0(uVar5);
  piVar9 = (int *)*piVar9;
  FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x1f0),1);
  bVar10 = (local_2b0[0] == '\0') << 1;
  if ((local_2b0[0] == '\0') ||
     (FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0xa8),auStack_2aa),
     (int)(bVar10 >> 1 & 1))) {
    FUN_100db158(0,0x820000);
    return;
  }
  piVar9 = (int *)FUN_10117884(**(int **)(local_2f4 + -0xedc) +
                               (int)*(short *)(*(int *)**(int **)(local_2f4 + -0xedc) + 0x358),
                               param_4);
  if (piVar9 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar9 + 0x2b0) + (int)piVar9,in_stack_0000001c,
                 *(int *)(param_1 + 4));
  }
  uVar3 = FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x110));
  if ((int)uVar3 == 0) {
    return;
  }
  if ((int)uVar3 == -0x2b) {
    return;
  }
  FUN_100db158(uVar3,0);
  return;
}

/* Address: 0x100dfcd4 Size: 1520 bytes */



void FUN_100dfcd4(int *param_1,long long param_2,long long param_3,char param_4,char param_5
                 )

{
  int bVar1;
  int uVar2;
  int *puVar3;
  int iVar7;
  char uVar11;
  int iVar8;
  long long uVar4;
  int iVar9;
  int iVar10;
  long long uVar5;
  long long uVar6;
  char in_stack_00000023;
  char cStack0000002b;
  char local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  char local_25c [256];
  char auStack_15c [256];
  short local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_44;
  
  puVar3 = puRam10117370;
  uVar2 = uRam10116a54;
  local_260 = 0;
  local_264 = 0;
  local_25c[0] = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = *puRam10117370;
  *puRam10117370 = auStack_15c;
  cStack0000002b = param_5;
  iVar7 = FUN_10000090(auStack_15c);
  if (iVar7 == 0) {
    uVar11 = FUN_100f5754(0);
    local_44 = (int *)FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x348),param_2)
    ;
    FUN_100f5754(uVar11);
    if (in_stack_00000023 == '\0') {
      FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 200),param_1[2]);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0xf0) + (int)param_1,param_2,cStack0000002b,local_44);
    }
    FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x2a0),3,3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),local_44,param_2,((char*)0 + 0x0000002b));
    FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1e0),&local_268);
    FUN_100db2f4();
    local_268 = local_268 + -1;
    FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1d8),&local_26c);
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),&local_260,&local_264);
    iVar7 = FUN_100efcc0(local_264,local_26c);
    iVar8 = FUN_100efcc0(local_260,local_26c);
    if (local_268 < iVar7 + iVar8) {
      uVar4 = FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1a8),&local_260,&local_264)
      ;
      bVar1 = false;
      if ((int)uVar4 == 0) {
        iVar9 = FUN_100efcc0(local_264,local_26c);
        iVar10 = FUN_100efcc0(local_260,local_26c);
        if (iVar7 + iVar8 <= iVar10 + iVar9 + local_268) {
          if ((*(char *)((int)param_1 + 0xd) == '\x01') || (*(char *)((int)param_1 + 0xd) == '\x03')
             ) {
            FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x198),local_25c);
            uVar4 = FUN_100b1c84(uVar2);
            uVar5 = FUN_100b1c84(uVar2);
            uVar6 = FUN_100b1c84(uVar2);
            FUN_100009f0(local_25c,uVar6,uVar5,uVar4);
            iVar7 = FUN_100d8c9c(0x86,0);
            if (iVar7 == 1) {
              bVar1 = true;
            }
            else {
              FUN_100db158(0,0x820000);
            }
          }
          else if (*(char *)((int)param_1 + 0xd) == '\x02') {
            bVar1 = true;
          }
        }
      }
      else if ((int)uVar4 != -0x2b) {
        FUN_100db158(uVar4,0);
      }
      if (bVar1) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),param_2,cStack0000002b,param_4
                     ,local_44);
      }
      else {
        FUN_100db158(0xffffffffffffffde,0);
      }
    }
    else if ((*(char *)((int)param_1 + 0xd) == '\x01') || (*(char *)((int)param_1 + 0xd) == '\0')) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),param_2,cStack0000002b,param_4,
                   local_44);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),param_2,cStack0000002b,param_4,
                   local_44);
    }
    if (cStack0000002b == '\0') {
      FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x198),local_25c);
      FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x3a0),local_25c);
      *(char *)(param_1 + 3) = 1;
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 200),local_44);
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x250));
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x120));
      FUN_100db2f4();
    }
    *puVar3 = local_54;
  }
  else {
    FUN_100f5754(local_270);
    local_44 = (int *)0x0;
    if (in_stack_00000023 == '\0') {
      uVar4 = 0x820002;
    }
    else if (cStack0000002b == '\0') {
      uVar4 = 0x820007;
    }
    else {
      uVar4 = 0x820008;
    }
    FUN_100db22c(local_5c,local_58,uVar4);
    FUN_100db158(local_5c,local_58);
  }
  FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1d0));
  FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x90));
  return;
}




