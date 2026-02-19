/*
 * wave2_macapp4.c - Reconstructed functions (wave2_macapp4)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 365 functions in address range wave2_macapp4
 */

#include "warlords2.h"
int ResourceRead_Dispatch();

/* Helper macros for Ghidra patterns */
#ifndef CONCAT11
#define CONCAT11(hi, lo) ((unsigned short)(((unsigned short)(unsigned char)(hi) << 8) | (unsigned char)(lo)))
#endif
#ifndef CONCAT13
#define CONCAT13(hi, lo) ((unsigned int)(((unsigned int)(unsigned char)(hi) << 24) | ((unsigned int)(lo) & 0x00FFFFFF)))
#endif
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
long long FUN_10100160();
void FUN_101001b8();
void FUN_101001e0(int *param_1);
int * FUN_1010037c(int *param_1);
void FUN_101008dc(int param_1);
void FUN_1010099c(int *param_1,int *param_2);
void FUN_10100bf8(int param_1,int *param_2);
void FUN_10100d4c(int *param_1);
void FUN_10100dac(int *param_1);
long long FUN_10100dfc(int *param_1);
void FUN_10101100(int param_1,char param_2);
void FUN_10101144(int *param_1,long long param_2);
void FUN_101011d4(int param_1,int *param_2);
void FUN_10101278(int *param_1,long long param_2);
long long FUN_1010136c(int *param_1);
long long FUN_101014ac(int *param_1);
void FUN_10101620(int *param_1,char param_2,char param_3);
void FUN_101016c0(int param_1,int param_2);
void FUN_101017f4(int *param_1,int *param_2);
long long FUN_10101a94(int param_1,short param_2,short param_3,long long param_4,long long param_5);
long long FUN_10101b50(int *param_1,char param_2);
void FUN_10101cac(int *param_1,int *param_2);
void FUN_10102854(int *param_1,short param_2,short param_3,char param_4);
long long FUN_10102a8c(long long param_1,int param_2);
long long FUN_10102bd8(long long param_1,short param_2);
void FUN_10102c2c(long long param_1,long long param_2);
void FUN_10103038(int param_1);
void FUN_10103080(int param_1);
void FUN_101031b8(int *param_1,long long param_2);
void FUN_101033b8(int param_1,int *param_2,int *param_3);
void FUN_10103408(int param_1,char *param_2);
short FUN_101034e0(int param_1);
long long FUN_1010357c(int *param_1,int *param_2,int param_3);
void FUN_10103800(int *param_1);
short FUN_10103a88(int *param_1,short param_2);
void FUN_10103b8c(int *param_1,short param_2,long long param_3);
void FUN_10103ca4(int *param_1,long long param_2);
void FUN_10103d24(int param_1);
void FUN_10103d58(int *param_1);
void FUN_10103db8(int *param_1);
void FUN_10103e08(long long param_1,long long param_2,long long param_3);
void FUN_10103f8c(int *param_1,long long param_2,char param_3);
void FUN_101041cc(int *param_1);
void FUN_10104354(int *param_1,char param_2);
void FUN_10104514(int *param_1,short param_2,char param_3);
void FUN_10104674(int *param_1,short param_2,short param_3,unsigned short param_4,int *param_5,
                 char param_6);
void FUN_10104904(int *param_1,unsigned char *param_2);
void FUN_10104a28(int *param_1);
int FUN_10104a80(int param_1,long long param_2,long long param_3);
void FUN_10104b48(int *param_1,int *param_2,int param_3);
void FUN_10104c14(int *param_1,unsigned long long param_2);
void FUN_10104dc0(int param_1,int *param_2);
void FUN_10104f14(int *param_1,char param_2);
void FUN_10105084(int *param_1);
void FUN_101051a0(int *param_1,char param_2);
void FUN_101052b0(int *param_1,char param_2);
long long FUN_10105320(int param_1,short param_2,short *param_3,short *param_4);
void FUN_101054a4();
int * FUN_101054e0(int *param_1,int param_2,char param_3);
int * FUN_1010556c(int *param_1,int param_2);
void FUN_101055f4(int *param_1,unsigned long long param_2);
void FUN_101056a8(long long param_1);
void FUN_10105704(long long param_1);
void FUN_1010573c(short param_1,long long param_2);
void FUN_101057cc(int *param_1);
void FUN_10105830(char *param_1);
void FUN_10105894(short *param_1);
void FUN_10105920(char *param_1);
void FUN_10105ae0();
void FUN_10105c30(int *param_1,long long param_2);
void FUN_10105d28();
int * FUN_10105d2c(int param_1);
void FUN_10106060(int *param_1);
void FUN_101062a8(long long param_1,long long param_2,char param_3,char param_4);
void FUN_101064d4(int *param_1,char param_2);
void FUN_10106638(int *param_1,int *param_2,char param_3,char param_4);
void FUN_1010670c(int *param_1,int *param_2,char param_3);
void FUN_10106884(int *param_1,int param_2,char param_3);
long long FUN_10106a00(int param_1);
int FUN_10106a4c(int param_1,int param_2);
void FUN_10106b1c(int *param_1);
void FUN_10106b94(int *param_1);
void FUN_10106bd4(int *param_1);
int * FUN_10106c30(int param_1);
void FUN_10106d2c(int param_1);
void FUN_10106d74(int *param_1,int *param_2);
void FUN_10106e78(int *param_1);
void FUN_10106ff0(int *param_1,long long param_2);
void FUN_101070bc(int param_1,int *param_2);
void FUN_10107114(long long param_1,int *param_2);
void FUN_10107180(int *param_1,int param_2);
int * FUN_10107264(int *param_1);
void FUN_10107364(int *param_1,char param_2);
long long FUN_101073a8(long long param_1,int *param_2);
void FUN_101074b8();
void FUN_101074f0(long long param_1,long long param_2,int param_3);
void FUN_101075c0(long long param_1,long long param_2,int param_3);
void FUN_1010768c(int *param_1);
void FUN_10107758(int *param_1,long long param_2);
long long FUN_10107a94(int *param_1,long long param_2);
short FUN_10107b28(int param_1);
long long FUN_10107b80(int *param_1);
long long FUN_10107c04(int param_1);
long long FUN_10107c68(int *param_1);
long long FUN_10107cc4(int param_1);
char FUN_10107d2c(int *param_1);
void FUN_10107d90(int *param_1,long long param_2,long long param_3);
void FUN_10107e7c(long long param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7);
void FUN_10107f60(int *param_1,long long param_2,long long param_3);
void FUN_101080b8(int *param_1,long long param_2,long long param_3);
void FUN_10108258(int *param_1,long long param_2,long long param_3);
void FUN_101083f8(long long param_1,long long param_2);
void FUN_10108438(int *param_1,long long param_2,char param_3);
long long FUN_10108500(int param_1);
void FUN_10108570(int param_1);
void FUN_101085d8(int param_1);
void FUN_10108640(int *param_1,char param_2);
long long FUN_101086b0();
void FUN_101086f0(int *param_1);
void FUN_10108744(int *param_1,int param_2,char param_3);
void FUN_101087b8(int *param_1);
void FUN_10108820(int param_1);
void FUN_10108868(int param_1);
void FUN_101088b0();
void FUN_101088b4(int *param_1);
void FUN_10108918(int *param_1,long long param_2);
void FUN_10108dac(long long param_1,int *param_2);
int * FUN_10108ef0(int *param_1,long long param_2);
long long FUN_1010900c(int *param_1);
long long FUN_10109178(int param_1);
void FUN_101091c4(int *param_1);
void FUN_10109268(int *param_1);
void FUN_10109308(int *param_1,long long param_2);
void FUN_1010937c(int *param_1,int *param_2);
void FUN_101096a0(int *param_1,int *param_2);
void FUN_101097c4();
void FUN_101097e8(int *param_1,int *param_2);
void FUN_10109a5c(int *param_1,int *param_2);
unsigned long long FUN_10109b94(int *param_1);
void FUN_10109be0(int *param_1,int *param_2);
void FUN_10109c8c(int *param_1,long long param_2);
void FUN_10109cf8(int param_1,int *param_2);
unsigned long long FUN_10109d6c(int param_1);
long long FUN_10109e24(int *param_1,long long param_2);
void FUN_10109e94(int *param_1,long long param_2);
unsigned long long FUN_10109f00(int param_1,char param_2);
void FUN_10109f84(int *param_1,long long param_2);
void FUN_10109ff0(int *param_1,int *param_2);
void FUN_1010a090(int *param_1,long long param_2);
void FUN_1010a134(int *param_1,long long param_2);
void FUN_1010a1a0(int *param_1,int *param_2);
void FUN_1010a240(int *param_1,long long param_2);
int FUN_1010a2b8(int *param_1);
void FUN_1010a30c(int *param_1,long long param_2,int *param_3,long long param_4,short *param_5,
                 int *param_6,long long param_7);
void FUN_1010a458(int param_1);
long long FUN_1010a4a0(int param_1);
long long FUN_1010a4ec(long long param_1,long long param_2,long long param_3);
void FUN_1010a558(int *param_1,int *param_2,long long param_3);
void FUN_1010a7cc(int *param_1,int *param_2,long long param_3);
int FUN_1010a9cc(int *param_1,int *param_2,long long param_3);
int FUN_1010ad24(int *param_1,int *param_2,long long param_3);
long long FUN_1010af7c(int param_1);
void FUN_1010afc8(int *param_1,long long param_2);
void FUN_1010b02c(int *param_1,long long param_2);
void FUN_1010b0bc(int *param_1,long long param_2);
void FUN_1010b1b8(int param_1);
char FUN_1010b210(int param_1);
long long FUN_1010b2a4(int param_1);
int FUN_1010b2f0(int *param_1);
int FUN_1010b398(int *param_1);
void FUN_1010b454(int *param_1,long long param_2);
void FUN_1010b4b0(int *param_1,long long param_2);
void FUN_1010b50c(int *param_1,long long param_2);
void FUN_1010b5e0(int *param_1,long long param_2);
void FUN_1010b65c(int *param_1,long long param_2,long long param_3);
void FUN_1010b818(int *param_1,long long param_2,char param_3);
void FUN_1010b9b0(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_1010baa8(long long param_1,long long param_2,long long param_3,char param_4);
void FUN_1010bb68(int *param_1,int *param_2,char param_3);
void FUN_1010bbf4(int param_1,int *param_2);
void FUN_1010bcb4(int param_1,int *param_2);
void FUN_1010bd74(long long param_1);
void FUN_1010be1c(long long param_1,int param_2,long long param_3);
void FUN_1010be6c(long long param_1,long long param_2,int *param_3);
void FUN_1010bec8(int param_1);
void FUN_1010bf10(int *param_1,int *param_2);
void FUN_1010bfd4(int *param_1,long long param_2,char param_3);
void FUN_1010c060(int *param_1,long long param_2);
void FUN_1010c140(int *param_1,char param_2);
void FUN_1010c1b0(int *param_1,int *param_2,long long param_3,char param_4);
void FUN_1010c288(int *param_1,char param_2);
void FUN_1010c2d4(int *param_1,char param_2,char param_3);
void FUN_1010c37c(int *param_1);
void FUN_1010c45c(int *param_1,long long param_2);
void FUN_1010c4b8(int *param_1,long long param_2);
void FUN_1010c514(int *param_1,long long param_2);
void FUN_1010c5f0(int *param_1,long long param_2,long long param_3,char param_4);
int FUN_1010c7ac();
void FUN_1010c7e8(int *param_1,long long param_2,int *param_3,long long param_4,
                 int *param_5,char param_6);
void FUN_1010c8a8(int *param_1);
long long FUN_1010c908();
int FUN_1010c910(int *param_1);
long long FUN_1010c984(int *param_1);
void FUN_1010ca84(int *param_1,long long param_2);
void FUN_1010cae8(int *param_1,long long param_2);
void FUN_1010cb78(int *param_1,long long param_2);
void FUN_1010cc74(int param_1);
void FUN_1010ccbc(int *param_1,char param_2,char param_3);
void FUN_1010cd24(int param_1,long long param_2,long long param_3);
void FUN_1010cd78(long long param_1,long long param_2,int *param_3);
void FUN_1010cdd8(int *param_1,long long param_2);
unsigned int * FUN_1010ce54(int *param_1);
void FUN_1010d160(int *param_1);
void FUN_1010d27c(long long param_1,char param_2,char param_3);
void FUN_1010d2f8(int *param_1);
void FUN_1010d76c();
void FUN_1010d7a0(int *param_1);
void FUN_1010d960(int *param_1,int *param_2);
void FUN_1010da58(int param_1,int *param_2);
void FUN_1010dadc(int param_1,int *param_2);
void FUN_1010dbd0(int *param_1,long long param_2,long long param_3,int *param_4,
                 char param_5);
void FUN_1010dd98();
int * FUN_1010de08(int *param_1);
void FUN_1010de70();
void FUN_1010de98(long long param_1);
void FUN_1010ded4();
int * FUN_1010df04(int *param_1,short param_2,char param_3,char param_4,
                  long long param_5,long long param_6,long long param_7,short param_8);
int FUN_1010e078(int *param_1,short param_2,char param_3,char param_4,
            long long param_5,long long param_6);
void FUN_1010e170(long long param_1,int *param_2,long long param_3,char param_4,char param_5,
                 long long param_6);
long long FUN_1010e36c(long long param_1,short param_2,long long param_3);
int * FUN_1010e488(int *param_1,short param_2,long long param_3);
int FUN_1010e554(int *param_1,long long param_2,long long param_3,short param_4,
            long long param_5);
int * FUN_1010e708(long long param_1,int *param_2,int *param_3,long long param_4);
int * FUN_1010e854(int *param_1,long long param_2,long long param_3,short param_4);
int * FUN_1010e964(long long param_1,short param_2,long long param_3);
void FUN_1010ebe4(int *param_1,long long param_2,short param_3,long long param_4,
                 short param_5);
int FUN_1010ed10(int *param_1,long long param_2);
void FUN_1010ee64();
int * FUN_1010eea0();
int * FUN_1010ef14(int *param_1);
void FUN_1010ef84();
void FUN_1010efac(int param_1,long long param_2,int param_3);
void FUN_1010effc(int param_1);
void FUN_1010f1ac();
void FUN_1010f1d4(int param_1);
int * FUN_1010f698(int *param_1);
void FUN_1010f8cc(int *param_1);
int FUN_1010f990(int param_1);
char FUN_1010fab8(int param_1);
int FUN_1010fb3c();
long long FUN_1010fbf8();
void FUN_1010fc30(int *param_1);
void FUN_1010fc70(int *param_1,char param_2);
void FUN_1010fd40(int *param_1,unsigned long long param_2,unsigned long long param_3);
void FUN_1010fe2c(int param_1);
void FUN_1010ff60(int param_1);
void FUN_1011001c(int *param_1,int *param_2);
void FUN_101104b8(int param_1,int *param_2);
void FUN_101106b4(int *param_1,unsigned char param_2);
void FUN_1011086c(int *param_1);
void FUN_10110a68(int *param_1,char param_2,char param_3,char param_4);
void FUN_10110c38(int *param_1);
void FUN_10110c8c(int *param_1);
void FUN_10110cf0(int *param_1);
void FUN_10110d80(int *param_1,long long param_2);
void FUN_10110e2c(int *param_1);
long long FUN_10110e90(int *param_1);
long long FUN_10110f00(int *param_1);
long long FUN_10110f70(int *param_1);
long long FUN_10110fcc(int *param_1);
void FUN_10111028(int *param_1);
long long FUN_101111bc(int *param_1);
void FUN_1011134c(int *param_1,short *param_2);
void FUN_10111478(int *param_1);
int * FUN_101116ac(int *param_1,int *param_2);
void FUN_10111a60(int param_1,long long param_2);
void FUN_10111ab0(int *param_1,int *param_2);
int * FUN_10111ba8(int *param_1,long long param_2,int *param_3,int param_4);
long long FUN_10111e2c(int *param_1,int *param_2);
void FUN_10111ecc(int *param_1,int *param_2);
char FUN_1011201c(int *param_1);
void FUN_1011206c(int *param_1,long long param_2,char param_3);
long long FUN_101120e0(int *param_1,int *param_2);
void FUN_10112308(int *param_1,long long param_2);
void FUN_101123d0(int *param_1,long long param_2);
long long FUN_10112498(int *param_1,char param_2);
void FUN_101126cc(int param_1);
long long FUN_10112710(long long param_1);
char FUN_101127bc(unsigned long long param_1);
long long FUN_1011280c(int param_1);
int FUN_1011289c();
void FUN_101129a0(int param_1,int param_2,int *param_3);
void FUN_10112bac(int *param_1,int *param_2);
void FUN_10112d0c(int *param_1);
int FUN_10112f74(int *param_1);
char FUN_10113128(int *param_1);
long long FUN_10113178(int *param_1);
void FUN_101131ec(int param_1,int param_2);
void FUN_1011328c(int *param_1,long long param_2,char param_3);
void FUN_101135cc(int *param_1,int *param_2);
void FUN_10113708(int *param_1,int param_2,int param_3);
void FUN_10113888(int *param_1,long long param_2,long long param_3);
void FUN_10113910(int *param_1,int *param_2);
void FUN_1011398c(int param_1,long long param_2);
void FUN_10113a08(int *param_1,long long param_2);
void FUN_10113aa8(int *param_1);
void FUN_10113b48(int *param_1);
void FUN_10113bb8(int param_1,char param_2);
void FUN_10113c58(long long param_1);
void FUN_10113c80(int param_1);
void FUN_10113f5c(long long param_1);
void FUN_10113f84(int param_1);
void FUN_10114088(int *param_1,char param_2,char param_3);
void FUN_101142fc(int *param_1,short param_2,short *param_3);
void FUN_10114534(int *param_1);
void FUN_1011472c(int param_1,int *param_2,int *param_3);
void FUN_101149f4(int param_1,long long param_2,int *param_3);
void FUN_10114a50(int *param_1,short param_2);
void FUN_10114c7c(int *param_1,int *param_2,short param_3);
int FUN_10114d2c();
void FUN_10114df0();
int FUN_101159dc();
unsigned int FUN_101159ec();
int FUN_10115a00();
void FUN_10115a68();
void FUN_10115ad0(int param_1,unsigned long long param_2);
int FUN_10115b60(int param_1,int param_2);
int FUN_10115be8(int param_1);
void FUN_10115cc4(int param_1,unsigned long long param_2);
long long FUN_10115d6c(int param_1);
unsigned long long FUN_1011600c(int param_1);
long long FUN_101161a4(int param_1,long long param_2,char param_3);
long long FUN_10116248(short *param_1,long long param_2,long long param_3);
void FUN_101162f8(int param_1);
void FUN_10116538(unsigned long long param_1,unsigned long long param_2);
void FUN_1011662c();
void FUN_1011671c(int param_1,unsigned long long param_2);
int * FUN_1011679c(int *param_1,int *param_2);
int FUN_101168a0(int param_1);
short * FUN_101168ec(short *param_1);
void FUN_101169b4(short *param_1,unsigned long long param_2);
short * FUN_10116a60(short *param_1,unsigned int param_2,int param_3);
long long FUN_10116bac(int param_1);
unsigned long long FUN_10116c28(int param_1);
unsigned long long FUN_10116d10(int param_1,unsigned long long param_2);
void FUN_10116e78(int param_1,long long param_2);
int FUN_10116eb8();
long long FUN_10116f74(int param_1,long long param_2,long long param_3);
void FUN_101170f4(int param_1,unsigned long long param_2);
int FUN_10117184(int param_1);
void FUN_10117304(int *param_1,unsigned long long param_2);
int FUN_10117394(int param_1);
void FUN_101173cc();
void FUN_10117454();
void FUN_101174e8();
void FUN_10117524();
void FUN_10117570();
long long FUN_101175bc(long long param_1,long long param_2);
long long FUN_101175c4(long long param_1,int param_2,long long param_3,int param_4);
long long FUN_10117690(unsigned long long param_1,unsigned int param_2,long long param_3,int param_4,int param_5);

/* Extern declarations for Ghidra globals */
extern long iRam101173f8;
extern long iRam101177f0;
extern unsigned char *pbRam10116a54;
extern char *pcRam10116c48;
extern char *pcRam10116c50;
extern pint *piRam10115364;
extern pint *gAppObject;
extern pint *piRam101169f4;
extern pint *piRam10116c3c;
extern pint *piRam10116c4c;
extern pint *piRam10117334;
extern pint *piRam10117414;
extern pint *piRam1011741c;
extern unsigned int *puRam101169c4;
extern unsigned int *puRam10116a70;
extern unsigned int *puRam10116bc0;
extern unsigned int *puRam10116c48;
extern unsigned int *puRam10116c4c;
extern unsigned int *puRam10116c50;
extern unsigned int *puRam101172e4;
extern unsigned int *puRam10117300;
extern unsigned int *puRam1011731c;
extern unsigned int *puRam1011733c;
extern unsigned int *puRam10117370;
extern unsigned int *puRam101173e0;
extern unsigned int *puRam1011741c;
extern unsigned int *puRam101176bc;
extern unsigned int *puRam10117808;
extern unsigned int *puRam10117890;
extern unsigned int *puRam10117894;
extern unsigned int uRam10116938;
extern unsigned int uRam10116a84;
extern unsigned int uRam10116ad8;
extern unsigned int uRam10116bc0;
extern unsigned int uRam10116c3c;
extern unsigned int uRam10116c7c;
extern unsigned int uRam10116da0;
extern unsigned int uRam10116de0;
extern unsigned int uRam10116f30;
extern unsigned int uRam101170a8;
extern unsigned int uRam101172e8;
extern unsigned int uRam101172f0;
extern unsigned int uRam10117314;
extern unsigned int uRam10117320;
extern unsigned int uRam10117324;
extern unsigned int uRam10117328;
extern unsigned int uRam10117340;
extern unsigned int uRam101173c8;
extern unsigned int uRam101173d8;
extern unsigned int uRam101173dc;
extern unsigned int uRam101173e8;
extern unsigned int uRam101173ec;
extern unsigned int uRam101173f8;
extern unsigned int uRam101173fc;
extern unsigned int uRam10117400;
extern unsigned int uRam10117404;
extern unsigned int uRam10117408;
extern unsigned int uRam1011740c;
extern unsigned int uRam10117420;
extern unsigned int gProgressCounterBase;

/* Address: 0x101000e4 Size: 124 bytes */
void FUN_101000e4()
{
  short param_1 = 0;
  short param_2 = 0;
  int * param_3 = 0;

  int iVar1;
  short uVar2;
  int *piVar3;
  int local_10;
  int local_c [3];
  
  piVar3 = &local_10;
  local_c[0] = (int)param_1;
  local_10 = 0;
  if (0 < param_1) {
    piVar3 = local_c;
  }
  iVar1 = *piVar3;
  *(short *)(*param_3 + 0x20) = (short)iVar1;
  uVar2 = FUN_100f0334((short)iVar1,param_2,*(short *)(*param_3 + 0x3c));
  *(short *)(*param_3 + 0x22) = uVar2;
  return;

}

/* Address: 0x10100160 Size: 80 bytes */

long long FUN_10100160()

{
  long long uVar1;
  
  if (*ResourceRead_Dispatch == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = ResourceRead_Dispatch(*ResourceRead_Dispatch + (int)*(short *)(*(int *)*ResourceRead_Dispatch + 0x7b0));
  }
  return uVar1;
}


































































/* Address: 0x101001b8 Size: 40 bytes */
void FUN_101001b8()

{
  FUN_100fff20(0);
  return;
}

/* Address: 0x101001e0 Size: 412 bytes */
void FUN_101001e0(int *param_1)

{
  int iVar1;
  int *puVar3;
  int iVar4;
  int *in_r10;
  int *in_stack_00000038;
  short in_stack_0000003e;
  char in_stack_00000043;
  char in_stack_00000047;
  int local_16c;
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iVar2;
  
  puVar3 = puRam10117370;
  iVar4 = in_r10[1];
  iVar1 = in_r10[2];
  iVar2 = in_r10[3];
  param_1[0x23] = *in_r10;
  param_1[0x24] = iVar4;
  param_1[0x25] = iVar1;
  param_1[0x26] = iVar2;
  iVar4 = in_stack_00000038[1];
  iVar1 = in_stack_00000038[2];
  param_1[0x2c] = *in_stack_00000038;
  param_1[0x2d] = iVar4;
  param_1[0x2e] = iVar1;
  *(short *)(param_1 + 0x30) = in_stack_0000003e;
  *(char *)((int)param_1 + 0xc3) = in_stack_00000043;
  *(char *)(param_1 + 0x31) = in_stack_00000047;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puVar3;
  *puVar3 = auStack_148;
  iVar4 = TrySetjmp(auStack_148);
  if (iVar4 == 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x730) + (int)param_1);
    *(short *)((int)param_1 + 0xd2) = *(short *)(*(int *)param_1[0x20] + 0x20);
    *(int *)(*(int *)param_1[0x20] + 0x2a) = **(int **)(local_16c + -0x20);
    param_1[0x21] = *(int *)(*(int *)param_1[0x20] + 0x3e);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
    FUN_10000540(2,1,param_1[0x20]);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,
                 **(int **)(local_16c + -0xd8),0x40,0);
    *puVar3 = local_40;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_48,local_44);
  }
  return;
}

/* Address: 0x1010037c Size: 1376 bytes */
int * FUN_1010037c(int *param_1)

{
  int uVar1;
  int uVar2;
  int *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_1d4;
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int local_1a0;
  char auStack_19c [8];
  int local_194;
  int local_190;
  int uStack_18c;
  int local_188;
  int uStack_184;
  int local_180;
  int *local_17c;
  int local_178;
  int local_174;
  int local_170;
  int *local_16c;
  int *local_168;
  char auStack_164 [256];
  short local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  puVar3 = puRam10117370;
  local_168 = (int *)0x0;
  local_180 = 0;
  local_174 = 0;
  local_178 = 0;
  local_16c = (int *)0x0;
  local_170 = 0;
  piVar4 = (int *)FUN_10105d2c(param_1);
  piVar4[0x20] = 0;
  piVar4[0x22] = 0;
  piVar4[0x21] = 0;
  piVar4[0x2b] = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_5c = *puVar3;
  *puVar3 = auStack_164;
  iVar5 = TrySetjmp(auStack_164);
  if (iVar5 == 0) {
    if (param_1[0x20] != 0) {
      FUN_100ee844(auStack_19c,*(char *)((int)param_1 + 0xbe));
      FUN_10000660(&local_1a0);
      FUN_10000198(**(int **)(local_1d4 + -0x98));
      local_1b0 = param_1[0x2c];
      iStack_1ac = param_1[0x2d];
      iStack_1a8 = param_1[0x2e];
      FUN_100f0788(&local_1b0);
      DetachResource(param_1[0x20]);
      local_188 = **(int **)param_1[0x20];
      uStack_184 = (*(int **)param_1[0x20])[1];
      local_190 = *(int *)(*(int *)param_1[0x20] + 8);
      uStack_18c = *(int *)(*(int *)param_1[0x20] + 0xc);
      if (*(char *)((int)param_1 + 0xc3) == '\x01') {
        iVar5 = FUN_100026a0(&local_188,&local_190);
        piVar4[0x20] = iVar5;
      }
      else {
        iVar5 = FUN_10000480(&local_188,&local_190);
        piVar4[0x20] = iVar5;
      }
      FUN_10000198(local_1a0);
      FocusObject(piVar4[0x20]);
      *(short *)(*(int *)piVar4[0x20] + 0x3a) = *(short *)(*(int *)param_1[0x20] + 0x3a);
      *(short *)(*(int *)piVar4[0x20] + 0x48) = *(short *)(*(int *)param_1[0x20] + 0x48);
      *(int *)(*(int *)piVar4[0x20] + 0x26) = *(int *)(*(int *)param_1[0x20] + 0x26);
      *(int *)(*(int *)piVar4[0x20] + 0x2a) = *(int *)(*(int *)param_1[0x20] + 0x2a);
      iVar5 = *(int *)piVar4[0x20];
      uVar1 = *(int *)(*(int *)param_1[0x20] + 0x14);
      *(int *)(iVar5 + 0x10) = *(int *)(*(int *)param_1[0x20] + 0x10);
      *(int *)(iVar5 + 0x14) = uVar1;
      *(int *)(*(int *)piVar4[0x20] + 0x1c) = *(int *)(*(int *)param_1[0x20] + 0x1c);
      if (*(char *)((int)param_1 + 0xc3) == '\x01') {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),&local_17c,&local_180);
        piVar6 = (int *)FUN_10001b78(piVar4[0x20]);
        iVar5 = *piVar6;
        uVar1 = *(int *)(iVar5 + 4);
        uVar2 = *(int *)(iVar5 + 8);
        piVar6 = *(int **)(iVar5 + 0x10);
        if (piVar6 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*piVar6 + 4);
        }
        local_168 = local_17c;
        FUN_100f16a0(&local_168);
        local_174 = local_180;
        FUN_100f16a0(&local_174);
        local_178 = *(int *)(*local_17c + 8);
        FUN_100f16a0(&local_178);
        local_16c = *(int **)(*local_17c + 0x10);
        if (local_16c != (int *)0x0) {
          FUN_100f16a0(&local_16c);
          if (iVar5 != 0) {
            local_194 = iVar5;
            FUN_100f16a0(&local_194);
            *(int *)(*local_16c + 4) = local_194;
          }
        }
        *(int **)(*local_168 + 0x10) = local_16c;
        *(int *)(*local_168 + 8) = local_178;
        *(int *)(*local_168 + 4) = local_174;
        local_174 = 0;
        local_178 = 0;
        local_16c = (int *)0x0;
        ReleaseHandle_Mapgen(uVar1);
        ReleaseHandle_Mapgen(uVar2);
        ReleaseHandle_Mapgen(piVar6);
        ReleaseHandle_Mapgen(iVar5);
        FUN_100026e8(local_168,piVar4[0x20]);
        local_168 = (int *)0x0;
      }
      piVar4[0x22] = *(int *)(*(int *)piVar4[0x20] + 0x3e);
      local_170 = param_1[0x21];
      FUN_100f16a0(&local_170);
      *(int *)(*(int *)piVar4[0x20] + 0x3e) = local_170;
      piVar4[0x21] = local_170;
      local_170 = 0;
      *(short *)(*(int *)piVar4[0x20] + 0x3c) = *(short *)(*(int *)param_1[0x20] + 0x3c);
      ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c0),
                   *(short *)(*(int *)param_1[0x20] + 0x20),
                   *(short *)(*(int *)param_1[0x20] + 0x22),0);
      DisposeHandle_Thunk(param_1[0x20]);
      FUN_100ee8e8(auStack_19c,2);
    }
    *puVar3 = local_5c;
  }
  else {
    local_174 = ReleaseHandle_Mapgen(local_174);
    local_178 = ReleaseHandle_Mapgen(local_178);
    local_16c = (int *)ReleaseHandle_Mapgen(local_16c);
    local_170 = ReleaseHandle_Mapgen(local_170);
    local_168 = (int *)ReleaseHandle_Mapgen(local_168);
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x90));
    DisposeHandle_Thunk(param_1[0x20]);
    FUN_100db158(local_64,local_60);
  }
  ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x7f8));
  return piVar4;
}

/* Address: 0x101008dc Size: 180 bytes */
void FUN_101008dc(int param_1)

{
  short uVar2;
  int uVar1;
  
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      *(int *)(**(int **)(param_1 + 0x80) + 0x3e) = *(int *)(param_1 + 0x88);
      uVar2 = FUN_10001c20(*(int *)(**(int **)(param_1 + 0x80) + 0x3e));
      *(short *)(**(int **)(param_1 + 0x80) + 0x3c) = uVar2;
      if (*(char *)(param_1 + 0xc5) == '\0') {
        *(int *)(param_1 + 0x84) = 0;
      }
      else {
        uVar1 = ReleaseHandle_Mapgen(*(int *)(param_1 + 0x84));
        *(int *)(param_1 + 0x84) = uVar1;
      }
    }
    FUN_10002700(*(int *)(param_1 + 0x80));
    *(int *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x88) = 0;
  }
  FUN_10106060(param_1);
  return;
}

/* Address: 0x1010099c Size: 604 bytes */
void FUN_1010099c(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar3;
  char uVar5;
  short uVar4;
  long long uVar2;
  int local_174;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_1010937c(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = TrySetjmp(auStack_130);
  if (iVar3 == 0) {
    uVar5 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)((int)param_1 + 0xc3) = uVar5;
    uVar5 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)(param_1 + 0x31) = uVar5;
    uVar5 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)((int)param_1 + 0xc2) = uVar5;
    uVar5 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(char *)((int)param_1 + 0xc5) = uVar5;
    iVar3 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x27] = iVar3;
    uVar4 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x28) = uVar4;
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x128) + (int)param_2,&local_140);
    param_1[0x23] = local_140;
    param_1[0x24] = iStack_13c;
    param_1[0x25] = iStack_138;
    param_1[0x26] = iStack_134;
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x30) = uVar4;
    uVar2 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x2f) = (short)uVar2;
    if ((int)uVar2 != -1) {
      FUN_100f06dc(uVar2,&local_150);
      param_1[0x2c] = local_150;
      param_1[0x2d] = iStack_14c;
      param_1[0x2e] = iStack_148;
    }
    uVar5 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0xbe) = uVar5;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x730));
    *puVar1 = local_28;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  *(short *)((int)param_1 + 0xd2) = *(short *)(*(int *)param_1[0x20] + 0x20);
  *(int *)(*(int *)param_1[0x20] + 0x2a) = **(int **)(local_174 + -0x20);
  param_1[0x21] = *(int *)(*(int *)param_1[0x20] + 0x3e);
  FUN_10000540(2,1);
  return;
}

/* Address: 0x10100bf8 Size: 340 bytes */
void FUN_10100bf8(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xc3));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xc4));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xc2));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xc5));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(int *)(param_1 + 0x9c));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xa0));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),param_1 + 0x8c);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xc0));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xbc));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0xbe));
  return;
}

/* Address: 0x10100d4c Size: 96 bytes */
void FUN_10100d4c(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x468),*(char *)((int)param_1 + 0x46)
               ,4);
  *(char *)((int)param_1 + 0x46) = 4;
  FUN_100d95c4(param_1);
  return;
}

/* Address: 0x10100dac Size: 80 bytes */
void FUN_10100dac(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x758),1);
  FUN_100d95c8(param_1);
  return;
}

/* Address: 0x10100dfc Size: 772 bytes */
long long FUN_10100dfc(int *param_1)

{
  short sVar1;
  short sVar2;
  short *puVar3;
  unsigned long long uVar4;
  int iVar6;
  int *piVar7;
  long long uVar5;
  short *psVar8;
  int *puVar9;
  int *piVar10;
  int uVar11;
  unsigned char bVar12;
  unsigned int local_74;
  int local_50 [2];
  char auStack_48 [8];
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  char auStack_38 [8];
  char auStack_30 [48];
  
  FUN_100b02d0(local_50);
  iVar6 = FUN_10000240();
  if (iVar6 != 0) {
    piVar7 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),0);
    if ((piVar7 != (int *)0x0) &&
       (iVar6 = ResourceRead_Dispatch((int)*(short *)(*piVar7 + 0x3a8) + (int)piVar7), iVar6 != 0)) {
      FUN_100b0384(local_50);
      FUN_10001518();
      ResourceRead_Dispatch((int)*(short *)(*piVar7 + 0x270) + (int)piVar7,local_50[0],auStack_48);
      ResourceRead_Dispatch((int)*(short *)(*piVar7 + 0x780) + (int)piVar7,auStack_48,auStack_30);
      iVar6 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
      if (iVar6 != 0) {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x628) + (int)param_1,auStack_38);
        uVar4 = (unsigned long long)local_74;
        bVar12 = 0;
        do {
          uVar5 = FUN_100b057c(auStack_38,0);
          psVar8 = (short *)FUN_100b0388(uVar5,bVar12);
          sVar1 = *psVar8;
          puVar9 = (int *)FUN_100e1088(param_1 + 0xd,bVar12);
          uVar11 = *puVar9;
          uVar5 = FUN_100b057c(auStack_38,1);
          psVar8 = (short *)FUN_100b0388(uVar5,bVar12);
          sVar2 = *psVar8;
          piVar10 = (int *)FUN_100e1088(auStack_30,bVar12);
          if (*piVar10 < 0) {
            puVar9 = (int *)FUN_100e1088(auStack_30,bVar12);
            uVar11 = FUN_100f0334(-(long long)sVar1,*puVar9,0);
            puVar9 = (int *)FUN_100e1088(auStack_30,bVar12);
            *puVar9 = uVar11;
          }
          else {
            puVar9 = (int *)FUN_100e1088(auStack_30,bVar12);
            uVar11 = FUN_100f0334(0,*puVar9,(short)uVar11 - sVar2);
            puVar9 = (int *)FUN_100e1088(auStack_30,bVar12);
            *puVar9 = uVar11;
          }
          bVar12 = bVar12 + 1;
        } while (bVar12 < 2);
        iVar6 = FUN_100e11c8(auStack_30,*(int *)((int)uVar4 + -0xce0));
        if (iVar6 != 0) {
          ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x778),auStack_30,1);
          ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
        }
      }
    }
    iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar6 != 0) {
      puVar3 = *(short **)param_1[0x20];
      local_40 = *puVar3;
      local_3e = puVar3[1];
      local_3c = puVar3[2];
      local_3a = puVar3[3];
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3c8),&local_40,
                   **(int **)(local_74 - 0xe60));
    }
  }
  return 1;
}

/* Address: 0x10101100 Size: 68 bytes */
void FUN_10101100(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_10000810(param_2,*(int *)(param_1 + 0x80));
  }
  return;
}

/* Address: 0x10101144 Size: 144 bytes */
void FUN_10101144(int *param_1,long long param_2)

{
  if ((int *)param_1[0x20] != (int *)0x0) {
    if ((int)param_2 == 0) {
      *(int *)(*(int *)param_1[0x20] + 0x52) = *puRam10117808;
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x750));
      *(char *)((int)param_1 + 0xc6) = 1;
    }
    else {
      *(int *)(*(int *)param_1[0x20] + 0x52) = (int)param_2;
    }
  }
  FUN_10106ff0(param_1,param_2);
  return;
}

/* Address: 0x101011d4 Size: 164 bytes */
void FUN_101011d4(int param_1,int *param_2)

{
  short sVar1;
  int local_18 [6];
  
  if ((*(int **)(param_1 + 0x80) != (int *)0x0) && (param_2 != (int *)0x0)) {
    sVar1 = *(short *)(**(int **)(param_1 + 0x80) + 0x18);
    local_18[0] = (int)sVar1;
    if (sVar1 < 1) {
      local_18[0] = FUN_10000570();
    }
    local_18[1] = 0x10;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x748),local_18,0,1);
  }
  FUN_10107114(param_1,param_2);
  return;
}

/* Address: 0x10101278 Size: 244 bytes */
void FUN_10101278(int *param_1,long long param_2)

{
  long long uVar1;
  long long uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  FUN_101074b8(param_1,param_2);
  iVar3 = (param_1[0xe] - param_1[0x24]) - param_1[0x26];
  local_20 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x760));
  local_1c = iVar3;
  if (((*(char *)((int)param_1 + 0x45) == '\x04') && (*(char *)((int)param_1 + 0xc3) == '\0')) &&
     (*(char *)(param_1 + 0x31) == '\0')) {
    local_1c = param_1[0x2a];
  }
  uVar1 = FUN_100e1580(param_2,0);
  uVar2 = FUN_100e1580(param_2,1);
  FUN_100e10b0(uVar2,uVar1,&local_20);
  return;
}

/* Address: 0x1010136c Size: 320 bytes */
long long FUN_1010136c(int *param_1)

{
  int iVar1;
  int bVar2;
  short sVar3;
  long long lVar4;
  short local_48 [2];
  char auStack_44 [16];
  short local_34 [2];
  char auStack_30 [8];
  char auStack_28 [40];
  
  FUN_100ee844(auStack_30,*(char *)((int)param_1 + 0xbe));
  iVar1 = *(int *)param_1[0x20];
  lVar4 = 0;
  if ((*(short *)(iVar1 + 0x3c) < 1) ||
     (*(char *)(**(int **)(iVar1 + 0x3e) + (int)*(short *)(iVar1 + 0x3c) + -1) == '\r')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  sVar3 = *(short *)(iVar1 + 0x5e);
  if (*(char *)((int)param_1 + 0xc3) == '\x01') {
    if (0 < sVar3) {
      lVar4 = FUN_10000528(0x7fff,0,param_1[0x20]);
    }
    if (bVar2) {
      local_34[0] = 0xf;
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),0x7fff,0x7fff,local_34,
                   auStack_44);
      FUN_100eceb0(auStack_44,auStack_28,local_48);
      lVar4 = lVar4 + local_48[0];
    }
  }
  else {
    if (bVar2) {
      sVar3 = sVar3 + 1;
    }
    lVar4 = (long long)(int)sVar3 * (long long)(int)*(short *)(iVar1 + 0x18);
  }
  FUN_100ee8e8(auStack_30,2);
  return lVar4;
}

/* Address: 0x101014ac Size: 372 bytes */
long long FUN_101014ac(int *param_1)

{
  short sVar1;
  short sVar2;
  long long lVar3;
  int iVar5;
  long long uVar4;
  short sVar6;
  int *piVar7;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_28;
  int local_24 [9];
  
  if (*(char *)((int)param_1 + 0xc3) == '\0') {
    iVar5 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar5 == 0) {
      lVar3 = 0;
    }
    else {
      local_38 = param_1[0x2c];
      iStack_34 = param_1[0x2d];
      iStack_30 = param_1[0x2e];
      FUN_100f0788(&local_38);
      sVar1 = *(short *)(*(int *)param_1[0x20] + 0x60);
      uVar4 = FUN_100ef9b8(*(int *)(*(int *)param_1[0x20] + 0x3e));
      lVar3 = 0;
      iVar5 = 1;
      if (0 < *(short *)(*(int *)param_1[0x20] + 0x5e)) {
        do {
          sVar2 = *(short *)(*(int *)param_1[0x20] + iVar5 * 2 + 0x60);
          local_24[0] = (int)lVar3;
          local_28 = FUN_10000780(**(int **)(*(int *)param_1[0x20] + 0x3e),sVar1,
                                  sVar2 - sVar1);
          piVar7 = &local_28;
          if (local_28 < local_24[0]) {
            piVar7 = local_24;
          }
          lVar3 = (long long)(short)*piVar7;
          sVar6 = (short)iVar5 + 1;
          iVar5 = (int)sVar6;
          sVar1 = sVar2;
        } while (sVar6 <= *(short *)(*(int *)param_1[0x20] + 0x5e));
      }
      FUN_10001b60(*(int *)(*(int *)param_1[0x20] + 0x3e),uVar4);
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

/* Address: 0x10101620 Size: 160 bytes */
void FUN_10101620(int *param_1,char param_2,char param_3)

{
  *(char *)(param_1 + 0x31) = param_2;
  if (param_2 == '\0') {
    *(short *)(*(int *)param_1[0x20] + 0x48) = 0xffff;
  }
  else {
    *(short *)(*(int *)param_1[0x20] + 0x48) = 0;
  }
  if (param_3 != '\0') {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x770),1);
  }
  return;
}

/* Address: 0x101016c0 Size: 308 bytes */
void FUN_101016c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long long uVar4;
  int *piVar5;
  int *piVar6;
  unsigned int uVar7;
  int local_28 [10];
  
  piVar6 = local_28;
  FUN_10107758(param_1,param_2);
  uVar7 = 0;
  do {
    cVar1 = *(char *)(param_1 + uVar7 + 0x44);
    if (((cVar1 != '\x05') && (cVar1 != '\x01')) &&
       ((cVar1 != '\0' || (*(int *)(param_1 + 0x20) == 0)))) {
      uVar4 = FUN_100e1580(param_1 + 0x8c,0);
      piVar5 = (int *)FUN_100e1088(uVar4,uVar7);
      iVar2 = *piVar5;
      uVar4 = FUN_100e1580(param_1 + 0x8c,1);
      piVar5 = (int *)FUN_100e1088(uVar4,uVar7);
      iVar3 = *piVar5;
      uVar4 = FUN_100e1580(param_2,1);
      piVar5 = (int *)FUN_100e1088(uVar4,uVar7);
      *piVar5 = iVar2 + iVar3 + *piVar5;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 2);
  local_28[1] = 30000;
  local_28[0] = *(int *)(param_2 + 8);
  if (30000 < *(int *)(param_2 + 8)) {
    piVar6 = local_28 + 1;
  }
  *(int *)(param_2 + 8) = *piVar6;
  return;
}

/* Address: 0x101017f4 Size: 672 bytes */

void FUN_101017f4(int *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int *puVar6;
  int bVar7;
  short local_a0 [2];
  char auStack_9c [8];
  short local_94 [2];
  char auStack_90 [16];
  short local_80 [4];
  short local_78 [4];
  int local_70;
  short uStack_66;
  int local_60;
  int uStack_5c;
  int local_58;
  char auStack_50 [4];
  char auStack_4c [76];
  
  FUN_100b02d0(&local_58);
  FUN_100ee844(auStack_9c,*(char *)((int)param_1 + 0xbe));
  iVar4 = *(int *)param_1[0x20];
  sVar1 = *(short *)(iVar4 + 0x3c);
  sVar2 = *(short *)(iVar4 + 0x20);
  sVar3 = *(short *)(iVar4 + 0x22);
  piVar5 = *(int **)(iVar4 + 0x3e);
  if ((sVar3 == sVar2) && (param_1[3] == 0x7fffffff)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
  }
  if (((sVar2 == sVar1) && (0 < sVar1)) && (*(char *)(*piVar5 + (int)sVar1 + -1) == '\r')) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  FUN_10000798(sVar2,auStack_90,local_94,auStack_50,param_1[0x20]);
  FUN_10002268(local_78,sVar2,param_1[0x20]);
  local_58 = CONCAT22(local_78[0] - local_94[0],uStack_66);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x270),local_58,&local_60);
  puVar6 = (int *)FUN_100e1580(param_2,0);
  *puVar6 = local_60;
  puVar6[1] = uStack_5c;
  FUN_10002268(local_80,sVar3,param_1[0x20]);
  local_70 = CONCAT22(local_80[0],((short)local_70));
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x270),local_70,&local_60);
  puVar6 = (int *)FUN_100e1580(param_2,1);
  *puVar6 = local_60;
  puVar6[1] = uStack_5c;
  if (sVar1 < 1) {
    *param_2 = 0;
    param_2[2] = (int)local_94[0];
  }
  if (bVar7) {
    local_a0[1] = 0xf;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),0x7fff,0x7fff,local_a0 + 1,
                 auStack_90);
    FUN_100eceb0(auStack_90,auStack_4c,local_a0);
    *param_2 = param_2[2];
    param_2[2] = param_2[2] + (int)local_a0[0];
  }
  else if (*(short *)(*(int *)param_1[0x20] + 0x22) == *(short *)(*(int *)param_1[0x20] + 0x20)) {
    param_2[1] = param_2[3] + -1;
  }
  FUN_100ee8e8(auStack_9c,2);
  return;
}

/* Address: 0x10101a94 Size: 156 bytes */
long long
FUN_10101a94(int param_1,short param_2,short param_3,long long param_4,long long param_5
            )

{
  short uVar1;
  short uVar2;
  int iVar3;
  long long uVar4;
  
  iVar3 = **(int **)(param_1 + 0x80);
  uVar1 = *(short *)(iVar3 + 0x20);
  uVar2 = *(short *)(iVar3 + 0x22);
  FUN_101000e4(param_2,param_3,*(int **)(param_1 + 0x80));
  uVar4 = FUN_10000858(param_4,param_5,*(int *)(param_1 + 0x80));
  FUN_101000e4(uVar1,uVar2,*(int *)(param_1 + 0x80));
  return uVar4;
}

/* Address: 0x10101b50 Size: 348 bytes */
long long FUN_10101b50(int *param_1,char param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  char auStack_18 [24];
  
  if (param_2 == '\x01') {
    piVar3 = &local_20;
    if ((((int *)param_1[0x20] == (int *)0x0) ||
        (iVar1 = *(int *)param_1[0x20], *(short *)(iVar1 + 0x22) != *(short *)(iVar1 + 0x20))) ||
       (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0xe0) + (int)param_1,1), iVar1 == 0)) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),0x7fffffff);
    }
    else {
      if ((*(char *)((int)param_1 + 0xc2) != '\0') &&
         (iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x678)), iVar1 != 0)) {
        FUN_100ee844(auStack_18,*(char *)((int)param_1 + 0xbe));
        FUN_10001bc0(param_1[0x20]);
        FUN_100ee8e8(auStack_18,2);
      }
      uVar2 = FUN_100004f8();
      local_1c = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
      local_20 = 1;
      if (1 < local_1c) {
        piVar3 = &local_1c;
      }
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),*piVar3);
    }
  }
  return 0;
}

/* Address: 0x10101cac Size: 2984 bytes */
void FUN_10101cac(int *param_1,int *param_2)

{
  int bVar1;
  int bVar2;
  int iVar4;
  short uVar7;
  int iVar5;
  long long uVar3;
  short sVar8;
  int iVar6;
  short sVar9;
  char cVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  unsigned int uVar14;
  long long lVar15;
  unsigned long long uVar16;
  unsigned long long uVar17;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  short local_50;
  short local_4e;
  int local_4c;
  int local_48 [18];
  
  piVar12 = &local_70;
  piVar11 = &local_68;
  piVar13 = &local_60;
  uVar17 = (unsigned long long)*(short *)(*(int *)param_1[0x20] + 0x20);
  uVar16 = (long long)*(short *)(param_2 + 9) & 0xff;
  iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  iVar5 = 0;
  bVar2 = false;
  bVar1 = false;
  if (iVar4 == 0) goto LAB_1010281c;
  uVar14 = (unsigned int)uVar16;
  if ((0x1f < uVar14) || ((param_1[0x33] & 1 << (uVar14 & 0x3f)) != 0)) {
    if (((uVar14 == 0x1c) || (((uVar14 == 0x1d || (uVar14 == 0x1e)) || (uVar14 == 0x1f)))) &&
       (iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar4 != 0)) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x750));
      *(char *)((int)param_1 + 0xc6) = 1;
      if ((uVar14 != 0x1e) && (uVar14 != 0x1f)) {
        *(char *)(param_1 + 0x35) = 0;
      }
      if ((uVar14 == 0x1c) || (uVar14 == 0x1d)) {
        cVar10 = ('\x1c' - ((0x1c < uVar16) + '\x1c')) +
                 (0x1b < uVar16 && (unsigned long long)(0x1c < uVar16) <= uVar16 - 0x1c);
        uVar7 = FUN_10002160(0x16);
        iVar4 = FUN_10000510(uVar7,6);
        if (iVar4 != 0) {
          cVar10 = cVar10 == '\0';
        }
      }
      else {
        cVar10 = '\0';
      }
      iVar4 = *(int *)param_1[0x20];
      if (*(short *)(iVar4 + 0x20) == *(short *)(iVar4 + 0x22)) {
        *(short *)((int)param_1 + 0xd2) = *(short *)(iVar4 + 0x20);
      }
      if (*(short *)((int)param_1 + 0xd2) < 0) {
        if ((uVar14 == 0x1e) || (cVar10 != '\0')) {
          *(short *)((int)param_1 + 0xd2) = *(short *)(iVar4 + 0x22);
        }
        else {
          *(short *)((int)param_1 + 0xd2) = *(short *)(iVar4 + 0x20);
        }
      }
      if (*(short *)((int)param_1 + 0xd2) == *(short *)(iVar4 + 0x22)) {
        sVar8 = *(short *)(iVar4 + 0x20);
      }
      else {
        sVar8 = *(short *)(iVar4 + 0x22);
      }
      uVar16 = (unsigned long long)sVar8;
      if ((uVar14 == 0x1e) &&
         (iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar16), iVar4 == 0)
         ) {
        iVar5 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
        *(char *)(param_1 + 0x35) = 0;
        bVar1 = true;
        uVar17 = 0;
      }
      else if ((uVar14 == 0x1f) &&
              (iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar16),
              iVar4 == *(short *)(*(int *)param_1[0x20] + 0x5e) + -1)) {
        iVar5 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
        uVar17 = (unsigned long long)*(short *)(*(int *)param_1[0x20] + 0x3c);
        *(char *)(param_1 + 0x35) = 0;
        bVar1 = true;
      }
      if (((!bVar1) && (0x1b < uVar14)) && (uVar14 < 0x20)) {
        DetachResource(param_1[0x20]);
        iVar5 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
        iVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
        if (iVar4 == 0) {
          if ((uVar14 == 0x1e) || (uVar14 == 0x1f)) {
            if (*(char *)(param_1 + 0x35) == '\0') {
              *(char *)(param_1 + 0x35) = 1;
              ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x778),uVar16,&local_58);
              *(short *)((int)param_1 + 0xd6) = (short)local_54;
            }
            if (*(short *)(*(int *)param_1[0x20] + 0x18) < 0) {
              uVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar16);
              sVar8 = FUN_10000528(uVar3,uVar3,param_1[0x20]);
            }
            else {
              sVar8 = *(short *)(*(int *)param_1[0x20] + 0x18);
            }
            iVar4 = (int)sVar8;
            if (uVar14 == 0x1e) {
              iVar4 = -iVar4;
            }
            ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x778),uVar16,&local_58);
            local_58 = local_58 + iVar4;
            local_54 = (int)*(short *)((int)param_1 + 0xd6);
            uVar17 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x798),&local_58);
            iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar16);
            if ((uVar14 == 0x1e) &&
               ((int)uVar17 == (int)*(short *)(*(int *)param_1[0x20] + iVar4 * 2 + 0x60))) {
              uVar17 = (unsigned long long)(short)((short)uVar17 + -1);
            }
            else if ((uVar14 == 0x1f) &&
                    (iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar17),
                    iVar6 == iVar4 + 2)) {
              uVar17 = (unsigned long long)(short)((short)uVar17 + 1);
            }
          }
          else {
            iVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
            if (iVar4 == 0) {
              iVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
              if ((iVar4 == 0) &&
                 (*(short *)(*(int *)param_1[0x20] + 0x20) !=
                  *(short *)(*(int *)param_1[0x20] + 0x22))) {
                if (cVar10 == '\0') {
                  uVar17 = (unsigned long long)*(short *)(*(int *)param_1[0x20] + 0x22);
                }
                else {
                  uVar17 = (unsigned long long)*(short *)(*(int *)param_1[0x20] + 0x20);
                }
              }
              else {
                if (cVar10 == '\0') {
                  lVar15 = 1;
                }
                else {
                  lVar15 = -1;
                }
                sVar8 = FUN_100f0334(0,uVar16 + lVar15,*(short *)(*(int *)param_1[0x20] + 0x3c)
                                    );
                uVar17 = (unsigned long long)sVar8;
              }
            }
            else {
              iVar4 = (int)sVar8;
              if (iVar5 == 0) {
                uVar14 = 1;
              }
              else if (cVar10 == '\0') {
                uVar14 = ((iVar4 >> 0x1f) - ((int)*(short *)((int)param_1 + 0xd2) >> 0x1f)) +
                         (unsigned int)((unsigned long long)(long long)*(short *)((int)param_1 + 0xd2) <= uVar16) &
                         0xff;
              }
              else {
                uVar14 = (((int)*(short *)((int)param_1 + 0xd2) >> 0x1f) - ((int)sVar8 >> 0x1f)) +
                         (unsigned int)(uVar16 <= (unsigned long long)(long long)*(short *)((int)param_1 + 0xd2)) &
                         0xff;
              }
              uVar17 = uVar16;
              if (uVar14 == 0) {
                bVar1 = false;
                if (cVar10 == '\0') {
                  local_4e = sVar8;
                  if (sVar8 < *(short *)((int)param_1 + 0xd2)) {
                    iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar16,
                                         &local_4e,&local_50);
                    while ((iVar6 == 0 || (local_4e <= iVar4))) {
                      uVar17 = (unsigned long long)(short)(local_50 + 1);
                      if (*(short *)((int)param_1 + 0xd2) <= (short)(local_50 + 1))
                      goto LAB_101023c4;
                      iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar17,
                                           &local_4e,&local_50);
                    }
                    if ((int)uVar17 < (int)*(short *)((int)param_1 + 0xd2)) goto LAB_101023cc;
                  }
LAB_101023c4:
                  uVar17 = (unsigned long long)*(short *)((int)param_1 + 0xd2);
                  bVar1 = true;
                }
                else {
                  local_50 = sVar8;
                  if (*(short *)((int)param_1 + 0xd2) < iVar4) {
                    iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar16,
                                         &local_4e,&local_50);
                    while ((iVar6 == 0 || (iVar4 <= local_50 + 1))) {
                      uVar16 = (unsigned long long)(short)(local_4e + -1);
                      if ((short)(local_4e + -1) <= *(short *)((int)param_1 + 0xd2))
                      goto LAB_10102304;
                      iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar16,
                                           &local_4e,&local_50);
                    }
                    if ((int)*(short *)((int)param_1 + 0xd2) < (int)uVar16) {
                      uVar17 = (unsigned long long)(short)(local_50 + 1);
                      goto LAB_101023cc;
                    }
                  }
LAB_10102304:
                  uVar17 = (unsigned long long)*(short *)((int)param_1 + 0xd2);
                  bVar1 = true;
                }
LAB_101023cc:
                if (!bVar1) goto LAB_101025f8;
              }
              sVar8 = (short)uVar17;
              iVar4 = (int)uVar17;
              if (cVar10 == '\0') {
                iVar6 = (int)(short)(*(short *)(*(int *)param_1[0x20] + 0x3c) + -1);
                local_50 = sVar8;
                if (iVar4 < iVar6) {
                  iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),sVar8 + 1,
                                       &local_4e,&local_50);
                  while (iVar4 == 0) {
                    sVar8 = (short)uVar17;
                    sVar9 = sVar8 + 1;
                    uVar17 = (unsigned long long)sVar9;
                    if (iVar6 <= sVar9) break;
                    iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),sVar8 + 2,
                                         &local_4e,&local_50);
                  }
                }
                local_5c = (int)uVar17;
                local_60 = (int)local_50;
                if (local_60 < local_5c) {
                  piVar13 = &local_5c;
                }
                uVar17 = (unsigned long long)(short)((short)*piVar13 + 1);
              }
              else {
                local_4e = sVar8;
                if (0 < iVar4) {
                  iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar17,
                                       &local_4e,&local_50);
                  while (((iVar6 == 0 || (iVar4 <= local_4e)) &&
                         (uVar17 = (unsigned long long)(short)((short)uVar17 + -1), 0 < (long long)uVar17))) {
                    iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar17,
                                         &local_4e,&local_50);
                  }
                }
                local_64 = (int)uVar17;
                local_68 = (int)local_4e;
                if (local_64 < local_68) {
                  piVar11 = &local_64;
                }
                uVar17 = (unsigned long long)(short)*piVar11;
              }
            }
          }
        }
        else {
          if (uVar14 == 0x1e) {
            uVar17 = 0;
          }
          else if (uVar14 == 0x1f) {
            uVar17 = (unsigned long long)*(short *)(*(int *)param_1[0x20] + 0x3c);
          }
          else if (cVar10 == '\0') {
            uVar17 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x790),uVar16);
          }
          else {
            uVar17 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x788),uVar16);
          }
          *(char *)(param_1 + 0x35) = 0;
        }
LAB_101025f8:
        DisposeHandle_Thunk(param_1[0x20]);
      }
      if (iVar5 == 0) {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),uVar17,uVar17,1);
      }
      else {
        local_6c = (int)uVar17;
        local_70 = (int)*(short *)((int)param_1 + 0xd2);
        if (local_6c < local_70) {
          piVar12 = &local_6c;
        }
        local_48[0] = (int)*(short *)((int)param_1 + 0xd2);
        if (local_48[0] < local_6c) {
          piVar13 = &local_4c;
        }
        else {
          piVar13 = local_48;
        }
        local_4c = local_6c;
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),(short)*piVar12,
                     (short)*piVar13,1);
      }
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
      bVar2 = true;
    }
    else if ((*(char *)((int)param_1 + 0xc2) != '\0') &&
            (iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar4 != 0)) {
      if (((uVar14 != 8) &&
          ((uVar14 != 0x7f &&
           (*(short *)(*(int *)param_1[0x20] + 0x20) == *(short *)(*(int *)param_1[0x20] + 0x22)))))
         && ((iVar4 = FUN_10001c20(param_1[0x21]), *(short *)(param_1 + 0x28) - iVar4 < 1 ||
             (iVar4 = FUN_100f1264(), iVar4 != 0)))) {
        FUN_100d8e3c(0x96);
        return;
      }
      *(char *)(param_1 + 0x35) = 0;
      if ((param_1[0x2b] == 0) || (*(char *)(param_1[0x2b] + 0x5c) != '\0')) {
        uVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x748),uVar16);
        param_1[0x2b] = (int)uVar3;
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar3);
      }
      else {
        ResourceRead_Dispatch(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x1a8),uVar16);
        *(char *)(param_2 + 4) = 0;
      }
      bVar2 = true;
    }
  }
  bVar1 = bVar2;
  if (param_1[3] == 0x7fffffff) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),0);
  }
LAB_1010281c:
  if (!bVar1) {
    FUN_100da080(param_1,param_2);
  }
  return;
}

/* Address: 0x10102854 Size: 568 bytes */
void FUN_10102854(int *param_1,short param_2,short param_3,char param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char auStack_78 [8];
  int local_70;
  int local_6c [3];
  char auStack_60 [8];
  int local_58;
  int local_54 [3];
  char auStack_48 [8];
  char auStack_40 [64];
  
  piVar6 = &local_70;
  piVar5 = local_6c + 1;
  piVar8 = &local_58;
  piVar7 = local_54 + 1;
  iVar9 = (int)param_3;
  iVar10 = (int)param_2;
  if ((param_4 == '\0') ||
     (iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar3 == 0)) {
    local_54[1] = 0;
    if (0 < iVar10) {
      piVar7 = local_54 + 2;
    }
    local_58 = (int)*(short *)(*(int *)param_1[0x20] + 0x3c);
    if (iVar9 < local_58) {
      piVar8 = local_54;
    }
    local_54[0] = iVar9;
    local_54[2] = iVar10;
    FUN_101000e4((short)*piVar7,(short)*piVar8,param_1[0x20]);
  }
  else {
    sVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
    sVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
    FUN_100ee844(auStack_60,*(char *)((int)param_1 + 0xbe));
    local_6c[2] = (int)param_2;
    local_6c[1] = 0;
    if (0 < local_6c[2]) {
      piVar5 = local_6c + 2;
    }
    local_6c[0] = (int)param_3;
    local_70 = (int)*(short *)(*(int *)param_1[0x20] + 0x3c);
    if (local_6c[0] < local_70) {
      piVar6 = local_6c;
    }
    FUN_10000840(*piVar5,*piVar6,param_1[0x20]);
    if ((iVar10 == iVar9) && ((iVar10 != sVar1 || (iVar9 != sVar2)))) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x778),param_2,auStack_48);
      ResourceRead_Dispatch(auStack_78,(int)param_1 + (int)*(short *)(*param_1 + 0x280),auStack_48);
      puVar4 = (int *)FUN_100b0368(auStack_40,auStack_78);
      FUN_100005e8(*puVar4,0,param_1[0x20]);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x770),1);
    FUN_100ee8e8(auStack_60,2);
  }
  if (iVar10 == iVar9) {
    *(short *)((int)param_1 + 0xd2) = param_2;
  }
  *(char *)((int)param_1 + 0xc6) = 1;
  return;
}

/* Address: 0x10102a8c Size: 88 bytes */
long long FUN_10102a8c(long long param_1,int param_2)

{
  if (param_2 - 0x67U < 4) {
    return param_1;
  }
  return 0;
}

/* Address: 0x10102bd8 Size: 84 bytes */
long long FUN_10102bd8(long long param_1,short param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100ff0b0(0);
  FUN_100ff140(uVar1,param_1,param_2);
  return uVar1;
}

/* Address: 0x10102c2c Size: 100 bytes */
void FUN_10102c2c(long long param_1,long long param_2)

{
  if ((param_2 - 0x67U & 0xffffffff) < 8) {
    return;
  }
  FUN_100c6178(param_1,param_2);
  return;
}

/* Address: 0x10103038 Size: 72 bytes */
void FUN_10103038(int param_1)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0xac) +
                 (int)*(short *)(**(int **)(param_1 + 0xac) + 0x1b0));
  }
  return;
}

/* Address: 0x10103080 Size: 312 bytes */
void FUN_10103080(int param_1)

{
  unsigned long long uVar1;
  int *ppuVar2;
  int iVar3;
  long long lVar4;
  unsigned long long uVar5;
  long long uVar6;
  unsigned long long uVar7;
  
  ppuVar2 = 0 /* TVect base */;
  FUN_100da394(param_1);
  uVar7 = (unsigned long long)*(short *)(**(int **)(param_1 + 0x80) + 0x20);
  uVar5 = (unsigned long long)*(short *)(**(int **)(param_1 + 0x80) + 0x22);
  uVar1 = (unsigned long long)(uVar5 <= uVar7);
  uVar1 = (unsigned long long)(uVar5 <= uVar7) -
          ((unsigned long long)(!CARRY8(uVar7,uVar1) && !CARRY8(uVar7,uVar7 + uVar1)) -
          ((long long)(uVar5 << 0x20) >> 0x3f)) & 1;
  iVar3 = FUN_100f1264();
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0xc2) != '\0') {
      ResourceRead_Dispatch((int)*(int **)(*(int*)((char*)ppuVar2 - 0x3ab)) +
                   (int)*(short *)(**(int **)(*(int*)((char*)ppuVar2 - 0x3ab)) + 0x1e0),0x54455854);
    }
    EnableMenuItem(0x68,uVar1);
  }
  lVar4 = (long long)*(short *)(**(int **)(param_1 + 0x80) + 0x3c);
  EnableMenuItem(0x6e,((-1 - lVar4) + (unsigned long long)(lVar4 == 0) << 0x20) >> 0x3f);
  iVar3 = (int)uVar1;
  if ((iVar3 == 0) || (*(char *)(param_1 + 0xc2) == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  EnableMenuItem(0x67,uVar6);
  if ((iVar3 == 0) || (*(char *)(param_1 + 0xc2) == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  EnableMenuItem(0x6a,uVar6);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_101031b8(int *param_1,long long param_2) { }


























































/* Address: 0x101033b8 Size: 72 bytes */
void FUN_101033b8(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10001b78(*(int *)(param_1 + 0x80));
  *param_2 = piVar1;
  *param_3 = *(int *)(*piVar1 + 4);
  return;
}

/* Address: 0x10103408 Size: 216 bytes */
void FUN_10103408(int param_1,char *param_2)

{
  short sVar1;
  unsigned int *puVar2;
  int *piVar3;
  short sVar4;
  int local_20 [8];
  
  piVar3 = local_20;
  FUN_100012d8(pbRam10116a54,param_2,(unsigned long long)*pbRam10116a54 + 1);
  puVar2 = *(unsigned int **)(param_1 + 0x84);
  if ((puVar2 != (unsigned int *)0x0) && (*(int **)(param_1 + 0x80) != (int *)0x0)) {
    sVar1 = *(short *)(**(int **)(param_1 + 0x80) + 0x20);
    local_20[1] = 0xff;
    local_20[0] = (int)*(short *)(**(int **)(param_1 + 0x80) + 0x22) - (int)sVar1;
    if (0xff < local_20[0]) {
      piVar3 = local_20 + 1;
    }
    sVar4 = (short)*piVar3;
    if (0 < sVar4) {
      *param_2 = (char)*piVar3;
      FUN_10002340((unsigned long long)*puVar2 + (long long)sVar1,param_2 + 1,sVar4);
    }
  }
  return;
}

/* Address: 0x101034e0 Size: 156 bytes */
short FUN_101034e0(int param_1)

{
  int *puVar1;
  short sVar3;
  int iVar2;
  short sVar4;
  short sVar5;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    sVar4 = 0;
  }
  else {
    sVar4 = 0;
    puVar1 = *(int **)(param_1 + 0x84);
    sVar3 = FUN_10001c20(puVar1);
    sVar5 = 0;
    if (0 < sVar3) {
      do {
        iVar2 = FUN_10001350(*puVar1,sVar5);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          sVar4 = sVar4 + 1;
        }
        sVar5 = sVar5 + 1;
      } while (sVar5 < sVar3);
    }
  }
  return sVar4;
}

/* Address: 0x1010357c Size: 644 bytes */
long long FUN_1010357c(int *param_1,int *param_2,int param_3)

{
  short uVar1;
  short uVar2;
  int *puVar3;
  int iVar6;
  int *puVar7;
  long long uVar4;
  long long uVar5;
  long long uVar8;
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar3 = puRam10117370;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = *puRam10117370;
  *puRam10117370 = auStack_13c;
  iVar6 = TrySetjmp(auStack_13c);
  uVar8 = 0;
  if (iVar6 == 0) {
    if (param_3 == 0x54455854) {
      uVar8 = FUN_10001c20(param_1[0x21]);
      if (param_2 != (int *)0x0) {
        FUN_100f16f8(param_2,uVar8);
        FUN_10002340(*(int *)param_1[0x21],*param_2,uVar8);
      }
    }
    else if (param_3 == 0x7374796c) {
      if (*(char *)((int)param_1 + 0xc3) == '\x01') {
        iVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x818),0,0x7fff);
        if (iVar6 == 0) {
          FUN_100db158(0,0);
        }
        else {
          uVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
          uVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
          FUN_101000e4(0,0x7fff);
          puVar7 = (int *)FUN_10000618(param_1[0x20]);
          FUN_101000e4(uVar1,uVar2,param_1[0x20]);
          if (puVar7 == (int *)0x0) {
            if (param_2 != (int *)0x0) {
              FUN_100db158(0x97,0xffffffffffff0097);
            }
          }
          else {
            uVar8 = FUN_10001c20(puVar7);
            if (param_2 != (int *)0x0) {
              uVar4 = FUN_100f1574(1);
              uVar5 = FUN_100ef9b8(puVar7);
              iVar6 = FUN_10000630(*puVar7,param_2,uVar8);
              FUN_10001b60(puVar7,uVar5);
              FUN_100f1574(uVar4);
              if (iVar6 != 0) {
                FUN_100db158(0x97,0xffffffffffff0097);
              }
            }
            ReleaseHandle_Mapgen(puVar7);
          }
        }
      }
    }
    else {
      FUN_100db158(0xffffffffffffff9a,0);
    }
    FUN_100f12a8();
    *puVar3 = local_34;
  }
  else {
    ReleaseHandle_Mapgen(0);
    FUN_100db158(local_3c,local_38);
  }
  return uVar8;
}

















































































































































































































































































































































































































/* Address: 0x10103800 Size: 552 bytes */
void FUN_10103800(int *param_1)

{
  int iVar1;
  long long uVar2;
  long long uVar3;
  int *piVar4;
  int local_6c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  char auStack_34 [16];
  char auStack_24 [36];
  
  FUN_10000660(&local_38);
  FUN_10000198(**(int **)(local_6c + -0x98));
  local_48 = param_1[0x2c];
  iStack_44 = param_1[0x2d];
  iStack_40 = param_1[0x2e];
  FUN_100f0788(&local_48);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_34);
  uVar2 = FUN_100e1580(param_1 + 0x23,0);
  uVar3 = FUN_100e1580(auStack_34,0);
  FUN_100e1180(uVar3,uVar2);
  uVar2 = FUN_100e1580(param_1 + 0x23,1);
  uVar3 = FUN_100e1580(auStack_34,1);
  FUN_100e11a4(uVar3,uVar2);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_34,auStack_24);
  if (*(char *)((int)param_1 + 0xc3) == '\x01') {
    uVar2 = GetBitMapPtr(auStack_24);
    uVar3 = GetBitMapPtr(auStack_24);
    piVar4 = (int *)FUN_100026a0(uVar3,uVar2);
  }
  else {
    uVar2 = GetBitMapPtr(auStack_24);
    uVar3 = GetBitMapPtr(auStack_24);
    piVar4 = (int *)FUN_10000480(uVar3,uVar2);
  }
  FUN_10000198(local_38);
  FocusObject(piVar4);
  param_1[0x20] = (int)piVar4;
  **(int **)(local_6c + -0x18) = *(int *)(*piVar4 + 0x2a);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x800),*(short *)(param_1 + 0x30),0);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),*(char *)(param_1 + 0x31),0);
  FUN_100f1228();
  iVar1 = *param_1;
  uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x5e8),*(int *)(iVar1 + 0x5ec))
  ;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x340),uVar2);
  return;
}

/* Address: 0x10103a88 Size: 120 bytes */
short FUN_10103a88(int *param_1,short param_2)

{
  int iVar1;
  short uVar2;
  
  if (*(short *)(*(int *)param_1[0x20] + 0x5e) < 2) {
    uVar2 = 0;
  }
  else {
    iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780),param_2);
    uVar2 = *(short *)(*(int *)param_1[0x20] + iVar1 * 2 + 0x60);
  }
  return uVar2;
}

/* Address: 0x10103b8c Size: 280 bytes */
void FUN_10103b8c(int *param_1,short param_2,long long param_3)

{
  long long uVar1;
  short local_50;
  short local_4e;
  short local_4c [5];
  short uStack_42;
  int local_3c;
  char auStack_34 [52];
  
  FUN_100b02d0(&local_3c);
  FUN_10000798(param_2,auStack_34,&local_50,&local_4e,param_1[0x20]);
  if (*(short *)(*(int *)param_1[0x20] + 0x3c) < 1) {
    uVar1 = FUN_100e1580(param_1 + 0x23,0);
    FUN_100e0f78(&local_3c,uVar1);
    local_3c = CONCAT22(((short)((unsigned int)local_3c >> 16)) + local_4e,((short)local_3c));
  }
  else {
    FUN_10002268(local_4c,param_2,param_1[0x20]);
    local_3c = CONCAT22(local_4c[0] + (local_4e - local_50),uStack_42);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x270),local_3c,param_3);
  return;
}

/* Address: 0x10103ca4 Size: 128 bytes */
void FUN_10103ca4(int *param_1,long long param_2)

{
  int *puVar1;
  char auStack_20 [8];
  char auStack_18 [24];
  
  FUN_100b02d0(auStack_20);
  ResourceRead_Dispatch(auStack_20,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  puVar1 = (int *)FUN_100b0368(auStack_18,auStack_20);
  FUN_100007c8(*puVar1,param_1[0x20]);
  return;
}

/* Address: 0x10103d24 Size: 52 bytes */
void FUN_10103d24(int param_1)

{
  *(char *)(param_1 + 0xd4) = 0;
  FUN_10002a90(*(int *)(param_1 + 0x80));
  return;
}

/* Address: 0x10103d58 Size: 96 bytes */
void FUN_10103d58(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x468),*(char *)((int)param_1 + 0x46)
               ,2);
  *(char *)((int)param_1 + 0x46) = 2;
  FUN_100dab70(param_1);
  return;
}

/* Address: 0x10103db8 Size: 80 bytes */
void FUN_10103db8(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x758),0);
  FUN_100dabb8(param_1);
  return;
}

/* Address: 0x10103e08 Size: 388 bytes */
void FUN_10103e08(long long param_1,long long param_2,long long param_3)

{
  long long lVar1;
  long long uVar2;
  long long uVar3;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  lVar1 = param_1 + 0x8c;
  uVar2 = FUN_100e1580(lVar1,1);
  uVar3 = FUN_100e1594(param_2,1);
  FUN_100e10f8(&local_58,uVar3,uVar2);
  uVar2 = FUN_100e1580(lVar1,0);
  uVar3 = FUN_100e1594(param_2,0);
  FUN_100e10b0(&local_60,uVar3,uVar2);
  local_40 = local_60;
  local_3c = local_5c;
  local_38 = local_58;
  local_34 = local_54;
  uVar2 = FUN_100e1580(lVar1,1);
  uVar3 = FUN_100e1594(param_3,1);
  FUN_100e10f8(&local_68,uVar3,uVar2);
  uVar2 = FUN_100e1580(lVar1,0);
  uVar3 = FUN_100e1594(param_3,0);
  FUN_100e10b0(&local_70,uVar3,uVar2);
  local_50 = local_70;
  local_4c = local_6c;
  local_48 = local_68;
  local_44 = local_64;
  FUN_1010b65c(param_1,&local_40,&local_50);
  return;
}

/* Address: 0x10103f8c Size: 576 bytes */
void FUN_10103f8c(int *param_1,long long param_2,char param_3)

{
  int iVar2;
  long long uVar1;
  int iVar3;
  int bVar4;
  char auStack_60 [8];
  char auStack_58 [8];
  short local_50;
  short local_4e;
  short local_48;
  short local_46;
  int local_40;
  int local_3c;
  char auStack_38 [8];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  local_40 = param_1[0xd];
  local_3c = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  if ((param_1[0x20] != 0) && (iVar2 = FUN_100e11c8(param_1 + 0xd,&local_40), iVar2 != 0)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_38);
    uVar1 = FUN_100e1580(param_1 + 0x23,0);
    FUN_100e0f78(auStack_58,uVar1);
    uVar1 = FUN_100e1580(param_1 + 0x23,1);
    FUN_100e0f78(auStack_60,uVar1);
    uVar1 = FUN_100b057c(auStack_38,1);
    FUN_100b0408(&local_48,uVar1,auStack_60);
    uVar1 = FUN_100b057c(auStack_38,0);
    FUN_100b039c(&local_50,uVar1,auStack_58);
    local_30 = local_50;
    local_2e = local_4e;
    local_2c = local_48;
    local_2a = local_46;
    if ((param_1[0xe] == local_3c) && (local_46 == *(short *)(*(int *)param_1[0x20] + 6))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x830),&local_30);
    if (bVar4) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x770),0);
      iVar2 = FUN_100ef628(*(short *)(param_1 + 0x30));
      if ((param_3 != '\0') &&
         ((((*(char *)(param_1 + 0x31) != '\0' &&
            (iVar3 = FUN_100e11c8(param_1 + 0xd,&local_40), iVar3 != 0)) || (iVar2 == -1)) ||
          (iVar2 == 1)))) {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
      }
    }
  }
  return;
}

/* Address: 0x101041cc Size: 392 bytes */
void FUN_101041cc(int *param_1)

{
  int iVar2;
  long long uVar1;
  char auStack_68 [8];
  char auStack_60 [8];
  int local_58;
  int iStack_54;
  int local_50 [2];
  short local_48;
  short local_46;
  short local_40;
  short local_3e;
  char auStack_38 [8];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  local_50[0] = param_1[0x15];
  local_58 = param_1[0x16];
  iStack_54 = param_1[0x17];
  FUN_1010d2f8(param_1);
  iVar2 = FUN_100b04bc(param_1 + 0x15,local_50);
  if (((iVar2 != 0) || (iVar2 = FUN_100e11c8(param_1 + 0x16,&local_58), iVar2 != 0)) &&
     (param_1[0x20] != 0)) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_38);
    uVar1 = FUN_100e1580(param_1 + 0x23,0);
    FUN_100e0f78(auStack_60,uVar1);
    uVar1 = FUN_100e1580(param_1 + 0x23,1);
    FUN_100e0f78(auStack_68,uVar1);
    uVar1 = FUN_100b057c(auStack_38,1);
    FUN_100b0408(&local_40,uVar1,auStack_68);
    uVar1 = FUN_100b057c(auStack_38,0);
    FUN_100b039c(&local_48,uVar1,auStack_60);
    local_30 = local_48;
    local_2e = local_46;
    local_2c = local_40;
    local_2a = local_3e;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x830),&local_30);
  }
  return;
}

/* Address: 0x10104354 Size: 448 bytes */
void FUN_10104354(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int local_68;
  int local_64 [5];
  char auStack_50 [16];
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  char auStack_30 [4];
  int local_2c;
  
  piVar2 = &local_68;
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),0);
  if ((iVar1 == 0) ||
     (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 == 0)) {
    if ((*(char *)(param_1 + 0x31) == '\0') && (param_1[0x20] != 0)) {
      FUN_100027f0(param_1[0x20]);
    }
  }
  else {
    if (param_1[3] == 0x7fffffff) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x620),auStack_50);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),auStack_30);
    iVar1 = FUN_100e1af8(auStack_50,auStack_30);
    if (iVar1 == 0) {
      local_64[0] = (int)*(short *)(param_1 + 0x34);
      local_68 = param_1[0xe] - local_2c;
      if (local_64[0] < local_68) {
        piVar2 = local_64;
      }
      iVar1 = *piVar2;
      local_40 = FUN_100e1a3c(auStack_30,0);
      iStack_3c = iVar1;
      local_38 = local_40;
      local_34 = iVar1;
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_30,&local_40,param_2);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    }
  }
  return;
}

/* Address: 0x10104514 Size: 352 bytes */
void FUN_10104514(int *param_1,short param_2,char param_3)

{
  long long uVar1;
  char auStack_58 [8];
  char auStack_50 [8];
  short local_48;
  short local_46;
  short local_40;
  short local_3e;
  char auStack_38 [8];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  FUN_10002aa8(param_2,param_1[0x20]);
  *(short *)(param_1 + 0x30) = param_2;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_38);
  uVar1 = FUN_100e1580(param_1 + 0x23,0);
  FUN_100e0f78(auStack_50,uVar1);
  uVar1 = FUN_100e1580(param_1 + 0x23,1);
  FUN_100e0f78(auStack_58,uVar1);
  uVar1 = FUN_100b057c(auStack_38,1);
  FUN_100b0408(&local_40,uVar1,auStack_58);
  uVar1 = FUN_100b057c(auStack_38,0);
  FUN_100b039c(&local_48,uVar1,auStack_50);
  local_30 = local_48;
  local_2e = local_46;
  local_2c = local_40;
  local_2a = local_3e;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x830),&local_30);
  if (param_3 != '\0') {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x10104674 Size: 656 bytes */
void FUN_10104674(int *param_1,short param_2,short param_3,unsigned short param_4,int *param_5,
                 char param_6)

{
  short uVar1;
  short uVar2;
  int iVar3;
  long long uVar4;
  short local_58 [2];
  short local_54 [4];
  char auStack_4c [8];
  short local_44;
  short local_42;
  short local_40;
  int local_3c;
  short local_38;
  short local_36;
  short uStack_34;
  short local_32;
  short uStack_30;
  
  FUN_100ee844(auStack_4c,*(char *)((int)param_1 + 0xbe));
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (*(char *)((int)param_1 + 0xc3) == '\x01') {
    uVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
    uVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
    FUN_101000e4(param_2,param_3);
    FUN_100008a0(param_4,param_5,param_6,param_1[0x20]);
    FUN_101000e4(uVar1,uVar2,param_1[0x20]);
  }
  else {
    if (param_4 == 0xf) {
      local_3c = *param_5;
      local_38 = (short)((unsigned int)param_5[1] >> 0x10);
      local_36 = (short)param_5[1];
      uStack_34 = (short)((unsigned int)param_5[2] >> 0x10);
      local_32 = (short)param_5[2];
    }
    else {
      local_3c = param_1[0x2c];
      local_38 = (short)((unsigned int)param_1[0x2d] >> 0x10);
      local_36 = (short)param_1[0x2d];
      uStack_34 = (short)((unsigned int)param_1[0x2e] >> 0x10);
      local_32 = (short)param_1[0x2e];
      if ((param_4 & 1) != 0) {
        local_3c = CONCAT22(*(short *)param_5,((short)local_3c));
        FUN_10000768();
        FUN_10002ee0();
      }
      if ((param_4 & 2) != 0) {
        /* ((short)local_3c) = CONCAT11(*(char *)((int)param_5 + 2),(char)local_3c); */
      }
      if ((param_4 & 8) != 0) {
        local_32 = (short)((unsigned int)*(int *)((int)param_5 + 10) >> 0x10);
        local_36 = (short)((unsigned int)*(int *)((int)param_5 + 6) >> 0x10);
        uStack_34 = (short)*(int *)((int)param_5 + 6);
        uStack_30 = 0;
      }
      if ((param_4 & 0x10) == 0) {
        if ((param_4 & 4) != 0) {
          local_38 = *(short *)(param_5 + 1);
        }
      }
      else {
        local_38 = local_38 + *(short *)(param_5 + 1);
      }
    }
    FUN_100eceb0(&local_3c,local_54,local_58);
    iVar3 = *(int *)param_1[0x20];
    *(short *)(iVar3 + 0x50) = local_38;
    *(short *)(iVar3 + 0x4a) = ((short)((unsigned int)local_3c >> 16));
    *(char *)(iVar3 + 0x4c) = ((char)((unsigned int)local_3c >> 8));
    *(short *)(iVar3 + 0x1a) = local_54[0];
    *(short *)(iVar3 + 0x18) = local_58[0];
    local_44 = local_36;
    local_42 = uStack_34;
    local_40 = local_32;
    FUN_100f0538(&local_44);
    param_1[0x2c] = local_3c;
    param_1[0x2d] = CONCAT22(local_38,local_36);
    param_1[0x2e] = CONCAT22(uStack_34,local_32);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if ((param_6 == '\0') || (*(char *)((int)param_1 + 0xc3) != '\x01')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x770),uVar4);
  if ((param_6 != '\0') && (*(char *)((int)param_1 + 0xc3) == '\0')) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  *(char *)((int)param_1 + 0xc6) = 1;
  FUN_100ee8e8(auStack_4c,2);
  return;
}






































































































































































































































































































































































































































































































/* Address: 0x10104904 Size: 292 bytes */
void FUN_10104904(int *param_1,unsigned char *param_2)

{
  char *puVar3;
  long long uVar1;
  long long uVar2;
  short uVar4;
  int *puVar5;
  int local_118;
  char uStack_114;
  char auStack_113 [275];
  
  if (param_1[0x20] != 0) {
    puVar5 = (int *)(((char*)0) + -0x118);
    puVar3 = ((char*)0) + -0x114;
    if ((((char*)0) != (char *)0x114) ||
       (puVar3 = (char *)NewPtr_Thunk(0x100), puVar3 != (char *)0x0)) {
      FUN_100012d8(param_2,puVar3,(unsigned long long)*param_2 + 1);
    }
    uVar1 = FUN_100f1574(1);
    uVar2 = FUN_10001f98(((char*)0) + -0x113,puVar5,*param_2);
    FUN_100f1574(uVar1);
    EndFocus(uVar2);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x828),*puVar5);
    uVar4 = FUN_10001c20(*puVar5);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),uVar4,uVar4,0);
  }
  return;
}

/* Address: 0x10104a28 Size: 88 bytes */
void FUN_10104a28(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_1010c37c(param_1);
  return;
}

/* Address: 0x10104a80 Size: 200 bytes */
int FUN_10104a80(int param_1,long long param_2,long long param_3)

{
  int *puVar1;
  int iVar3;
  unsigned long long uVar2;
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
  iVar3 = TrySetjmp(auStack_130);
  if (iVar3 != 0) {
    FUN_100d8e3c(0x97);
  }
  else {
    uVar2 = FUN_10002748(param_2,param_3,*(int *)(param_1 + 0x80));
    AllocateHandle(((uVar2 & 0x3fffffff) * 4 + uVar2 & 0x3fffffff) * 4 + 2);
    ReleaseHandle_Mapgen();
    *puVar1 = local_28;
  }
  return iVar3 == 0;
}

/* Address: 0x10104b48 Size: 204 bytes */
void FUN_10104b48(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int uVar2;
  int uVar3;
  int *piVar4;
  
  if ((*(char *)((int)param_1 + 0xc3) == '\x01') && (param_1[0x20] != 0)) {
    piVar4 = (int *)FUN_10001b78(param_1[0x20]);
    iVar1 = *piVar4;
    uVar2 = *(int *)(iVar1 + 8);
    piVar4 = *(int **)(iVar1 + 0x10);
    uVar3 = *(int *)(*piVar4 + 4);
    ReleaseHandle_Mapgen(*(int *)(iVar1 + 4));
    iVar1 = *param_2;
    *(int *)(iVar1 + 4) = param_3;
    *(int *)(iVar1 + 8) = uVar2;
    *(int **)(iVar1 + 0x10) = piVar4;
    *(int *)(*piVar4 + 4) = uVar3;
    *(int **)(iVar1 + 0xc) = param_1;
    FUN_100026e8(param_2,param_1[0x20]);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  }
  return;
}

/* Address: 0x10104c14 Size: 428 bytes */
void FUN_10104c14(int *param_1,unsigned long long param_2)

{
  short sVar1;
  short sVar2;
  short sVar5;
  int iVar3;
  int *piVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  if (param_1[0x20] != 0) {
    sVar5 = FUN_10001c20(param_2);
    iVar3 = *(int *)param_1[0x20];
    sVar1 = *(short *)(iVar3 + 0x20);
    sVar2 = *(short *)(iVar3 + 0x22);
    if ((sVar5 <= sVar1) || (*(short *)(iVar3 + 0x3c) <= sVar1)) {
      sVar1 = sVar5;
    }
    if ((sVar5 <= sVar2) || (*(short *)(*(int *)param_1[0x20] + 0x3c) <= sVar2)) {
      sVar2 = sVar5;
    }
    if (*(short *)(param_1 + 0x28) < sVar5) {
      FUN_100db158(0xffffffffffff8000,0);
    }
    if (*(char *)((int)param_1 + 0xc3) == '\x01') {
      FUN_101000e4(0,0x7fff,param_1[0x20]);
      local_28 = param_1[0x2c];
      iStack_24 = param_1[0x2d];
      iStack_20 = param_1[0x2e];
      FUN_100008a0(0xf,&local_28,0,param_1[0x20]);
    }
    if (((unsigned long long)(unsigned int)param_1[0x22] != (param_2 & 0xffffffff)) &&
       ((unsigned long long)*(unsigned int *)(*(int *)param_1[0x20] + 0x3e) != (param_2 & 0xffffffff))) {
      iVar3 = ReleaseHandle_Mapgen((unsigned long long)(unsigned int)param_1[0x22]);
      param_1[0x22] = iVar3;
      param_1[0x22] = *(int *)(*(int *)param_1[0x20] + 0x3e);
      *(int *)(*(int *)param_1[0x20] + 0x3e) = (int)param_2;
    }
    param_1[0x21] = (int)param_2;
    *(short *)(*(int *)param_1[0x20] + 0x3c) = sVar5;
    if (*(char *)((int)param_1 + 0xc3) == '\x01') {
      piVar4 = (int *)FUN_10001b78(param_1[0x20]);
      *(short *)(*piVar4 + 0x18) = *(short *)(*(int *)param_1[0x20] + 0x3c) + 1;
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
    FUN_101000e4(sVar1,sVar2,param_1[0x20]);
  }
  return;
}

/* Address: 0x10104dc0 Size: 340 bytes */
void FUN_10104dc0(int param_1,int *param_2)

{
  int *puVar1;
  int iVar2;
  int *piVar3;
  int local_58;
  int local_54;
  int local_50;
  int uStack_4c;
  int uStack_48;
  char auStack_40 [8];
  char auStack_38 [4];
  short local_34;
  int local_30;
  int uStack_2c;
  char auStack_28 [40];
  
  piVar3 = &local_58;
  FUN_100ee844(auStack_40,*(char *)(param_1 + 0xbe));
  local_50 = *(int *)(param_1 + 0xb0);
  uStack_4c = *(int *)(param_1 + 0xb4);
  uStack_48 = *(int *)(param_1 + 0xb8);
  FUN_100eceb0(&local_50,auStack_38,auStack_28);
  local_30 = *param_2;
  uStack_2c = param_2[1];
  iVar2 = FUN_100ef628(*(short *)(param_1 + 0xc0));
  if ((((*(char *)(param_1 + 0x45) == '\x04') && (iVar2 != 1)) &&
      (*(char *)(param_1 + 0xc3) == '\0')) && (*(char *)(param_1 + 0xc4) == '\0')) {
    if ((iVar2 == 0) || (iVar2 == -2)) {
      uStack_2c = CONCAT22(((short)((unsigned int)uStack_2c >> 16)),((short)uStack_2c) + local_34);
    }
    else {
      local_30 = CONCAT22(((short)((unsigned int)local_30 >> 16)),((short)local_30) - local_34);
    }
  }
  else {
    local_54 = (int)((short)uStack_2c);
    local_58 = (int)((short)local_30) + (int)local_34;
    if (local_58 < local_54) {
      piVar3 = &local_54;
    }
    uStack_2c = CONCAT22(((short)((unsigned int)uStack_2c >> 16)),(short)*piVar3);
  }
  puVar1 = (int *)**(int **)(param_1 + 0x80);
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  iVar2 = **(int **)(param_1 + 0x80);
  *(int *)(iVar2 + 8) = local_30;
  *(int *)(iVar2 + 0xc) = uStack_2c;
  FUN_100ee8e8(auStack_40,2);
  return;
}

/* Address: 0x10104f14 Size: 368 bytes */
void FUN_10104f14(int *param_1,char param_2)

{
  int bVar1;
  int iVar3;
  int iVar4;
  long long uVar2;
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x760));
  if (((*(char *)((int)param_1 + 0x45) == '\x04') && (*(char *)((int)param_1 + 0xc3) == '\0')) &&
     (*(char *)(param_1 + 0x31) == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar4 = 0;
  if (bVar1) {
    iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x768));
    iVar4 = iVar4 + 2;
  }
  if ((param_1[0x29] != iVar3) || ((bVar1 && (param_1[0x2a] != iVar4)))) {
    if (bVar1) {
      param_1[0x2a] = iVar4;
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    param_1[0x29] = iVar3;
  }
  if (param_2 != '\0') {
    iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar3 != 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),param_2);
      iVar3 = *param_1;
      uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar3 + 0x470));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar3 + 0x468),1,uVar2);
    }
  }
  return;
}

/* Address: 0x10105084 Size: 284 bytes */
void FUN_10105084(int *param_1)

{
  short uVar1;
  short uVar2;
  int *piVar3;
  int iVar5;
  long long uVar4;
  
  piVar3 = piRam101169f4;
  ResourceRead_Dispatch(*piRam101169f4 + (int)*(short *)(*(int *)*piRam101169f4 + 0x1c0),0x54455854,
               param_1[0x21]);
  EndFocus();
  if ((*(char *)((int)param_1 + 0xc3) == '\x01') &&
     (iVar5 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x818) + (int)param_1,0,0x7fff), iVar5 != 0))
  {
    uVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
    uVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
    FUN_101000e4(0,0x7fff);
    uVar4 = FUN_10000618(param_1[0x20]);
    FUN_101000e4(uVar1,uVar2,param_1[0x20]);
    FocusObject(uVar4);
    ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x1c0),0x7374796c,uVar4);
    EndFocus();
  }
  return;
}



































































































































/* Address: 0x101051a0 Size: 272 bytes */
void FUN_101051a0(int *param_1,char param_2)

{
  int iVar1;
  int local_3c;
  char auStack_18 [24];
  
  FUN_100ee844(auStack_18,*(char *)((int)param_1 + 0xbe));
  if ((param_1[0x20] != 0) &&
     (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 != 0)) {
    if (param_2 == '\0') {
      FUN_100027a8(param_1[0x20]);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x750));
      *(char *)((int)param_1 + 0xc6) = 1;
    }
    else {
      if (param_1[3] == 0x7fffffff) {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
      }
      FUN_10000768(*(short *)(param_1 + 0x2c));
      FUN_100f038c();
      FUN_100027d8(param_1[0x20]);
      **(int **)(local_3c + -0x1c) = param_1;
    }
  }
  FUN_100ee8e8(auStack_18,2);
  return;
}

/* Address: 0x101052b0 Size: 112 bytes */
void FUN_101052b0(int *param_1,char param_2)

{
  if ((param_2 != '\0') && (param_1[3] == 0x7fffffff)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
  }
  FUN_100d9780(param_1,param_2);
  return;
}

/* Address: 0x10105320 Size: 388 bytes */
long long FUN_10105320(int param_1,short param_2,short *param_3,short *param_4)

{
  long long uVar1;
  int iVar3;
  unsigned long long uVar2;
  short sVar4;
  int *piVar5;
  int *piVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  short local_38;
  short local_36;
  
  piVar6 = &local_48;
  piVar5 = &local_40;
  *param_3 = param_2;
  *param_4 = param_2;
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else if (*(short *)(**(int **)(param_1 + 0x80) + 0x3c) + -1 < (int)param_2) {
    uVar1 = 0;
  }
  else {
    do {
      do {
        sVar4 = param_2;
        param_2 = sVar4 + 1;
        iVar3 = FUN_10001350(**(int **)(param_1 + 0x84));
      } while (iVar3 == -1);
    } while (iVar3 == 2);
    FUN_10002640(**(int **)(param_1 + 0x84),
                 *(short *)(**(int **)(param_1 + 0x80) + 0x3c),sVar4,1,0,&local_38);
    local_3c = (int)local_38;
    local_40 = local_36 + -1;
    if (local_3c < local_40) {
      piVar5 = &local_3c;
    }
    *param_3 = (short)*piVar5;
    local_44 = (int)local_38;
    local_48 = local_36 + -1;
    if (local_48 < local_44) {
      piVar6 = &local_44;
    }
    iVar3 = *piVar6;
    *param_4 = (short)iVar3;
    if ((*param_3 < (short)iVar3) ||
       (uVar2 = FUN_100007f8(**(int **)(param_1 + 0x84),*param_3),
       uVar2 != ((long long)((int)uVar2 >> 3) + (unsigned long long)((int)uVar2 < 0 && (uVar2 & 7) != 0) &
                0x1fffffff) << 3)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* Address: 0x101054a4 Size: 60 bytes */
void FUN_101054a4()

{
  FUN_100c1c8c(uRam10116de0,*puRam101172e4,0xd8,uRam101172e8,uRam10116c7c);
  return;
}

/* Address: 0x101054e0 Size: 140 bytes */
int * FUN_101054e0(int *param_1,int param_2,char param_3)

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
      uVar2 = *(int *)(param_2 + 0x24);
    }
    FUN_100ebf7c(param_1,uVar2,param_3);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x16c));
  }
  return param_1;
}

/* Address: 0x1010556c Size: 136 bytes */
int * FUN_1010556c(int *param_1,int param_2)

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
      uVar2 = *(int *)(param_2 + 0x24);
    }
    FUN_100ebf7c(param_1,uVar2,1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x16c));
  }
  return param_1;
}

/* Address: 0x101055f4 Size: 108 bytes */
void FUN_101055f4(int *param_1,unsigned long long param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = uRam101172f0;
    FUN_100ebff4(param_1,0);
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}

/* Address: 0x10105660 Size: 36 bytes */
int FUN_10105660()
{
  FUN_100ec060();
  return 0;
}

/* Address: 0x10105684 Size: 36 bytes */
int FUN_10105684()
{
  FUN_100ec0e8();
  return 0;
}

/* Address: 0x101056a8 Size: 92 bytes */
void FUN_101056a8(long long param_1)

{
  if ((*pcRam10116c48 == '\0') && (*pcRam10116c50 == '\0')) {
    FUN_10002be0(param_1,*(int *)(*(int *)(iRam101177f0 + 0xca) + 0x18),param_1);
  }
  return;
}

/* Address: 0x10105704 Size: 56 bytes */
void FUN_10105704(long long param_1)

{
  FUN_10002be0(param_1,*(int *)(*(int *)(iRam101177f0 + 0xca) + 0x1c),param_1);
  return;
}

/* Address: 0x1010573c Size: 144 bytes */

void FUN_1010573c(short param_1,long long param_2)

{
  short sStack00000018;
  char auStack_128 [276];
  int local_14;
  
  FUN_100ee64c(auStack_128);
  FUN_10000600(local_14,param_1,sStack00000018,param_1 + 1,sStack00000018 + 1);
  FUN_10003060(local_14,param_2,param_2);
  FUN_100ee77c(auStack_128,2);
  return;
}

/* Address: 0x101057cc Size: 100 bytes */
void FUN_101057cc(int *param_1)

{
  int *puVar1;
  
  FUN_10000660(param_1 + 1);
  FUN_10001e48(param_1[2]);
  puVar1 = (int *)FUN_100b057c((unsigned long long)(unsigned int)param_1[1] + 0x10,0);
  *param_1 = *puVar1;
  *(char *)(param_1 + 3) = 1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10105830(char *param_1) { }













/* Address: 0x10105894 Size: 140 bytes */
void FUN_10105894(short *param_1)

{
  long long uVar1;
  int iVar2;
  
  iVar2 = iRam101177f0;
  if (*(int *)(iRam101177f0 + 0xca) != *(int *)(param_1 + 2)) {
    FUN_10000198(*(int *)(param_1 + 2));
  }
  uVar1 = FUN_100b057c((unsigned long long)*(unsigned int *)(iVar2 + 0xca) + 0x10,0);
  iVar2 = FUN_100b04bc(uVar1,param_1);
  if (iVar2 != 0) {
    FUN_10002028(param_1[1],*param_1);
  }
  FUN_10001548(*(int *)(param_1 + 4));
  return;
}

/* Address: 0x10105920 Size: 92 bytes */
void FUN_10105920(char *param_1)

{
  *puRam10116a70 = *(int *)(param_1 + 8);
  *puRam10116c48 = *param_1;
  *puRam10116c50 = param_1[1];
  *puRam10116c4c = *(int *)(param_1 + 4);
  FUN_10105894(param_1 + 0xc);
  return;
}

/* Address: 0x10105ae0 Size: 40 bytes */
void FUN_10105ae0()

{
  FUN_1010598c(0);
  return;
}

/* Address: 0x10105b08 Size: 296 bytes */
void FUN_10105b08(int *param_1,long long param_2,int *param_3,int *param_4,int *param_5,
                 char param_6,char param_7)

{
  int *puVar1;
  int iVar2;
  char auStack_140 [256];
  short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  puVar1 = puRam10117370;
  FUN_100c60e4(param_1,param_3);
  iVar2 = param_4[1];
  param_1[0xb] = *param_4;
  param_1[0xc] = iVar2;
  iVar2 = param_5[1];
  param_1[0xd] = *param_5;
  param_1[0xe] = iVar2;
  *(char *)((int)param_1 + 0x45) = param_6;
  *(char *)(param_1 + 0x11) = param_7;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = *puVar1;
  *puVar1 = auStack_140;
  iVar2 = TrySetjmp(auStack_140);
  if (iVar2 == 0) {
    if (param_3 != (int *)0x0) {
      ResourceRead_Dispatch((int)*(short *)(*param_3 + 0x2e0) + (int)param_3,param_1);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x330),param_2);
    *puVar1 = local_38;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_40,local_3c);
  }
  return;
}



















































































































































































































/* Address: 0x10105c30 Size: 248 bytes */
void FUN_10105c30(int *param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_148 [328];
  
  if (param_1[10] == 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x330) + (int)param_1,param_2);
  }
  FUN_1010556c(auStack_148,param_1);
  piVar1 = (int *)FUN_10105660(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x238),param_2);
    piVar1 = (int *)FUN_10105684(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x240),param_2);
  FUN_101055f4(auStack_148,2);
  return;
}










































































































/* Address: 0x10105d28 Size: 4 bytes */
void FUN_10105d28()

{
  return;
}

/* Address: 0x10105d2c Size: 820 bytes */
int * FUN_10105d2c(int param_1)

{
  int *puVar1;
  int *piVar4;
  int iVar5;
  int *piVar6;
  long long uVar2;
  long long uVar3;
  char auStack_4c8 [312];
  char auStack_390 [256];
  short local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  char auStack_278 [4];
  int local_274;
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar1 = puRam10117370;
  piVar4 = (int *)FUN_100c6108(param_1);
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[0x1c] = 0;
  piVar4[0x1d] = 0;
  piVar4[1] = 0;
  piVar4[10] = 0;
  local_290 = 0;
  local_28c = 0;
  local_284 = 0;
  local_280 = 0;
  local_288 = *puVar1;
  *puVar1 = auStack_390;
  iVar5 = TrySetjmp(auStack_390);
  if (iVar5 == 0) {
    FUN_1010556c(auStack_4c8,param_1);
    piVar6 = (int *)FUN_10105660(auStack_4c8);
    iVar5 = FUN_100ebf44(auStack_4c8);
    while (iVar5 != 0) {
      piVar6 = (int *)ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x88));
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_34 = *puVar1;
      *puVar1 = auStack_13c;
      iVar5 = TrySetjmp(auStack_13c);
      if (iVar5 == 0) {
        ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x2e0),piVar6);
        *puVar1 = local_34;
      }
      else {
        ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x90));
        FUN_100db158(local_3c,local_38);
      }
      piVar6 = (int *)FUN_10105684(auStack_4c8);
      iVar5 = FUN_100ebf44(auStack_4c8);
    }
    FUN_101055f4(auStack_4c8,2);
    piVar6 = *(int **)(param_1 + 0x70);
    if (piVar6 != (int *)0x0) {
      iVar5 = ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x88));
      piVar4[0x1c] = iVar5;
    }
    FUN_100b236c(auStack_278,param_1);
    piVar6 = (int *)FUN_100b2460(auStack_278);
    iVar5 = FUN_100ebf44(auStack_278);
    while (iVar5 != 0) {
      uVar2 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x74) +
                           (int)*(short *)(**(int **)(param_1 + 0x74) + 0x128),local_274);
      if (*(char *)(piVar6 + 2) == '\0') {
        ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x3f0),piVar6,uVar2,0);
      }
      else {
        uVar3 = ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x88));
        ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x3f0),uVar3,uVar2,0);
      }
      piVar6 = (int *)FUN_100b24e8(auStack_278);
      iVar5 = FUN_100ebf44(auStack_278);
    }
    FUN_100b23f4(auStack_278,2);
    *puVar1 = local_288;
  }
  else {
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x90));
    FUN_100db158(local_290,local_28c);
  }
  return piVar4;
}























































































































































































































































































































































































































































































/* Address: 0x10106060 Size: 584 bytes */
void FUN_10106060(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char auStack_288 [312];
  char auStack_150 [336];
  
  piVar3 = gAppObject;
  FUN_1010556c(auStack_150,param_1);
  piVar1 = (int *)FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
    piVar1 = (int *)FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_101055f4(auStack_150,2);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x450));
  piVar1 = (int *)ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x340));
  if (param_1 == piVar1) {
    piVar3 = (int *)*piVar3;
    ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x338),piVar3);
  }
  piVar3 = (int *)param_1[8];
  if (piVar3 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x2e8) + (int)piVar3,param_1);
    param_1[8] = 0;
  }
  iVar2 = DisposeObject(param_1[0x1c]);
  param_1[0x1c] = iVar2;
  if (param_1[0x1d] != 0) {
    FUN_100b236c(auStack_288,param_1);
    piVar3 = (int *)FUN_100b2460(auStack_288);
    iVar2 = FUN_100ebf44(auStack_288);
    while (iVar2 != 0) {
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0xb0),param_1);
      piVar3 = (int *)FUN_100b24e8(auStack_288);
      iVar2 = FUN_100ebf44(auStack_288);
    }
    FUN_100b23f4(auStack_288,2);
  }
  iVar2 = DisposeObject(param_1[0x1d]);
  param_1[0x1d] = iVar2;
  piVar3 = (int *)param_1[10];
  if (piVar3 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x338) + (int)piVar3,param_1);
    param_1[10] = 0;
  }
  FUN_100c6134(param_1);
  return;
}










































































































































































































































































/* Address: 0x101062a8 Size: 556 bytes */
void FUN_101062a8(long long param_1,long long param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  char auStack_2a8 [24];
  char auStack_290 [312];
  char auStack_158 [344];
  
  FUN_10000030();
  FUN_10000000(auStack_2a8);
  if (((param_3 == '\x04') && ((param_4 == '\x02' || (param_4 == '\x01')))) ||
     ((param_3 == '\x02' && (param_4 == '\x01')))) {
    FUN_100b22e0(auStack_290,param_1,0);
    piVar1 = (int *)FUN_100b2460(auStack_290);
    iVar2 = FUN_100ebf44(auStack_290);
    while (iVar2 != 0) {
      iVar2 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0),param_1);
      if (iVar2 != 0) {
        FUN_100016f8(auStack_2a8);
        ResourceRead_Dispatch((int)*(short *)(*piVar1 + 200) + (int)piVar1,param_1,param_2,param_3,param_4);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_290);
      iVar2 = FUN_100ebf44(auStack_290);
    }
    FUN_100b23f4(auStack_290,2);
  }
  else if ((((param_3 == '\x01') || (param_3 == '\x02')) && (param_4 == '\x04')) ||
          ((param_3 == '\x01' && (param_4 == '\x02')))) {
    FUN_100b236c(auStack_158,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_158);
    iVar2 = FUN_100ebf44(auStack_158);
    while (iVar2 != 0) {
      iVar2 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0),param_1);
      if (iVar2 != 0) {
        FUN_100016f8(auStack_2a8);
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_1,param_2,param_3,param_4);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_158);
      iVar2 = FUN_100ebf44(auStack_158);
    }
    FUN_100b23f4(auStack_158,2);
  }
  return;
}

/* Address: 0x101064d4 Size: 356 bytes */
void FUN_101064d4(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  char auStack_158 [16];
  char auStack_148 [328];
  
  if ((param_1[0x1d] != 0) &&
     (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x678) + (int)param_1), iVar1 != 0)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x630) + (int)param_1,auStack_158);
    if (param_2 == '\0') {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x498),auStack_158,
                   *(char *)((int)param_1 + 0x46),*(char *)((int)param_1 + 0x47));
    }
    else {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x498),auStack_158,
                   *(char *)((int)param_1 + 0x47),*(char *)((int)param_1 + 0x46));
    }
  }
  FUN_1010556c(auStack_148,param_1);
  piVar2 = (int *)FUN_10105660(auStack_148);
  iVar1 = FUN_100ebf44(auStack_148);
  while (iVar1 != 0) {
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x318),param_2);
    piVar2 = (int *)FUN_10105684(auStack_148);
    iVar1 = FUN_100ebf44(auStack_148);
  }
  FUN_101055f4(auStack_148,2);
  return;
}























































































































































/* Address: 0x10106638 Size: 212 bytes */
void FUN_10106638(int *param_1,int *param_2,char param_3,char param_4)

{
  long long uVar1;
  int *piVar2;
  
  uVar1 = FUN_100f5754(0);
  piVar2 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 1000));
  param_1[0x1d] = (int)piVar2;
  ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x118),param_2,param_3);
  FUN_100f5754(uVar1);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xa8),param_1);
  if (param_4 != '\0') {
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0xd0) + (int)param_2,param_1);
  }
  return;
}

/* Address: 0x1010670c Size: 376 bytes */
void FUN_1010670c(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_174;
  char auStack_150 [4];
  int local_14c;
  
  if (param_1[0x1d] != 0) {
    FUN_100b236c(auStack_150,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      if (piVar1 == param_2) {
        if (param_3 != '\0') {
          ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_1);
        }
        ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xb0),param_1);
        ResourceRead_Dispatch(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 200),local_14c,1);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    iVar2 = ResourceRead_Dispatch(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 0xa8));
    if ((iVar2 == 1) &&
       (iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x408),1),
       iVar2 == **(int **)(local_174 + -0xe8))) {
      iVar2 = DisposeObject(param_1[0x1d]);
      param_1[0x1d] = iVar2;
    }
    FUN_100b23f4(auStack_150,2);
  }
  return;
}

/* Address: 0x10106884 Size: 380 bytes */
void FUN_10106884(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_174;
  char auStack_150 [4];
  int local_14c;
  
  if (param_1[0x1d] != 0) {
    FUN_100b236c(auStack_150,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      if (piVar1[1] == param_2) {
        if (param_3 != '\0') {
          ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_1);
        }
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0),param_1);
        ResourceRead_Dispatch(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 200),local_14c,1);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    iVar2 = ResourceRead_Dispatch(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 0xa8));
    if ((iVar2 == 1) &&
       (iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x408),1),
       iVar2 == **(int **)(local_174 + -0xe8))) {
      iVar2 = DisposeObject(param_1[0x1d]);
      param_1[0x1d] = iVar2;
    }
    FUN_100b23f4(auStack_150,2);
  }
  return;
}

/* Address: 0x10106a00 Size: 76 bytes */
long long FUN_10106a00(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x74) +
                         (int)*(short *)(**(int **)(param_1 + 0x74) + 0x120));
  }
  return uVar1;
}

/* Address: 0x10106a4c Size: 208 bytes */
int FUN_10106a4c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char auStack_148 [328];
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_100b236c(auStack_148,param_1);
    iVar1 = FUN_100b2460(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      if (*(int *)(iVar1 + 4) == param_2) {
        FUN_100b23f4(auStack_148,2);
        return iVar1;
      }
      iVar1 = FUN_100b24e8(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_100b23f4(auStack_148,2);
  }
  return 0;
}

/* Address: 0x10106b1c Size: 120 bytes */
void FUN_10106b1c(int *param_1)

{
  int local_34;
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_10);
  FUN_10002118((unsigned long long)*(unsigned int *)(local_34 + -0xb0) + 0xb2);
  FUN_10002130(0xb);
  GetBitMapPtr(auStack_10);
  PaintRect_Thunk();
  return;
}

/* Address: 0x10106b94 Size: 56 bytes */
void FUN_10106b94(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600));
  return;
}

/* Address: 0x10106bd4 Size: 92 bytes */
void FUN_10106bd4(int *param_1)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_10);
  GetBitMapPtr(auStack_10);
  FUN_10001da0();
  return;
}

/* Address: 0x10106c30 Size: 252 bytes */
int * FUN_10106c30(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int local_14c;
  char auStack_124 [256];
  short local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = puRam10117370;
  piVar2 = *(int **)(param_1 + 0x74);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_100b4540(0);
    FUN_100b45d0();
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_1c = *puVar1;
    *puVar1 = auStack_124;
    iVar3 = TrySetjmp(auStack_124);
    if (iVar3 == 0) {
      ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x118),
                   **(int **)(local_14c + -0xe8),0x40);
      *puVar1 = local_1c;
    }
    else {
      ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_24,local_20);
    }
  }
  return piVar2;
}

/* Address: 0x10106d2c Size: 72 bytes */
void FUN_10106d2c(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x710));
  }
  return;
}

/* Address: 0x10106d74 Size: 188 bytes */
void FUN_10106d74(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_1[9] == 0) {
      iVar1 = FUN_100e9174();
      param_1[9] = iVar1;
    }
    ResourceRead_Dispatch(param_1[9] + (int)*(short *)(*(int *)param_1[9] + 0x1d0),param_2);
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x720),param_1);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x710),param_2);
  }
  return;
}

/* Address: 0x10106e78 Size: 372 bytes */
void FUN_10106e78(int *param_1)

{
  int *puVar1;
  int iVar2;
  int *piVar3;
  int *puVar4;
  int *puVar5;
  char *puVar6;
  int local_170 [4];
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  char auStack_150 [336];
  
  puVar4 = (int *)(((char*)0) + -0x170);
  puVar5 = (int *)(((char*)0) + -0x160);
  puVar6 = ((char*)0) + -0x150;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),puVar5);
  puVar1 = puVar4;
  if ((((char*)0) != (char *)0x170) ||
     (puVar1 = (int *)NewPtr_Thunk(0x10), puVar1 != (int *)0x0)) {
    *puVar1 = *puVar5;
    puVar1[1] = *(int *)(((char*)0) + -0x15c);
    puVar1[2] = *(int *)(((char*)0) + -0x158);
    puVar1[3] = *(int *)(((char*)0) + -0x154);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x390),puVar4);
  iVar2 = FUN_100e1750(puVar4,puVar5);
  if (iVar2 == 0) {
    FUN_1010556c(puVar6,param_1);
    piVar3 = (int *)FUN_10105660(puVar6);
    iVar2 = FUN_100ebf44(puVar6);
    while (iVar2 != 0) {
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x380));
      piVar3 = (int *)FUN_10105684(puVar6);
      iVar2 = FUN_100ebf44(puVar6);
    }
    FUN_101055f4(puVar6,2);
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x350),puVar4,1);
  }
  return;
}


































































































































































































































/* Address: 0x10106ff0 Size: 204 bytes */
void FUN_10106ff0(int *param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_148 [328];
  
  FUN_1010556c(auStack_148,param_1);
  piVar1 = (int *)FUN_10105660(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x340),param_2);
    piVar1 = (int *)FUN_10105684(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
  FUN_101055f4(auStack_148,2);
  return;
}



























































































/* Address: 0x101070bc Size: 88 bytes */
void FUN_101070bc(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_2 != *(int **)(param_1 + 0x28))) {
    *(int **)(param_1 + 0x28) = param_2;
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 800) + (int)param_2,param_1);
  }
  return;
}

/* Address: 0x10107114 Size: 108 bytes */
void FUN_10107114(long long param_1,int *param_2)

{
  char auStack_10 [16];
  
  if (param_2 != (int *)0x0) {
    FUN_100e10b0(auStack_10,param_1 + 0x34,param_1 + 0x2c);
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x740),auStack_10,0);
  }
  return;
}



















































/* Address: 0x10107180 Size: 228 bytes */
void FUN_10107180(int *param_1,int param_2)

{
  int iVar1;
  long long uVar2;
  
  if (param_1[8] != param_2) {
    iVar1 = param_1[8];
    param_1[8] = param_2;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    if (param_2 == 0) {
      if (param_1[1] == iVar1) {
        param_1[1] = 0;
      }
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x340),0);
    }
    else {
      if (param_1[1] == 0) {
        param_1[1] = param_2;
      }
      iVar1 = *param_1;
      uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x5e8),
                           *(int *)(iVar1 + 0x5ec));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x340),uVar2);
    }
  }
  return;
}

/* Address: 0x10107264 Size: 256 bytes */
int * FUN_10107264(int *param_1)

{
  int iVar1;
  int *piVar2;
  char auStack_140 [320];
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x140));
  if (iVar1 == 0) {
    FUN_1010556c(auStack_140,param_1);
    piVar2 = (int *)FUN_10105660(auStack_140);
    iVar1 = FUN_100ebf44(auStack_140);
    while (iVar1 != 0) {
      piVar2 = (int *)ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x6a8));
      if (piVar2 != (int *)0x0) {
        FUN_101055f4(auStack_140,2);
        return piVar2;
      }
      piVar2 = (int *)FUN_10105684(auStack_140);
      iVar1 = FUN_100ebf44(auStack_140);
    }
    FUN_101055f4(auStack_140,2);
    param_1 = (int *)0x0;
  }
  return param_1;
}






























































































































/* Address: 0x10107364 Size: 60 bytes */
void FUN_10107364(int *param_1,char param_2)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),param_2);
  return;
}

/* Address: 0x101073a8 Size: 272 bytes */
long long FUN_101073a8(long long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_148 [328];
  
  if (param_2 != (int *)0x0) {
    FUN_1010556c(auStack_148,param_1);
    piVar1 = (int *)FUN_10105660(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      if (piVar1 == param_2) {
        FUN_101055f4(auStack_148,2);
        return 1;
      }
      iVar2 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x310),param_2);
      if (iVar2 != 0) {
        FUN_101055f4(auStack_148,2);
        return 1;
      }
      piVar1 = (int *)FUN_10105684(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return 0;
}








































































































































/* Address: 0x101074b8 Size: 56 bytes */
void FUN_101074b8(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618));
  return;
}


























/* Address: 0x101074f0 Size: 208 bytes */
void FUN_101074f0(long long param_1,long long param_2,int param_3)

{
  int _uStack00000020;
  int uVar1;
  long long uVar2;
  int iVar3;
  short uStack00000020;
  short uStack00000022;
  int local_14c;
  char auStack_128 [276];
  int local_14;
  
  _uStack00000020 = param_3;
  FUN_100ee64c(auStack_128);
  uVar1 = local_14;
  uVar2 = GetBitMapPtr(param_2);
  FUN_10003150(uVar1,uVar2);
  FUN_10002be0(*(int *)(*(int *)(*(int *)(local_14c + -0xb0) + 0xca) + 0x1c),local_14,
               local_14);
  iVar3 = FUN_100b04bc(((char*)0 + 0x00000020),*(int *)(local_14c + -0xe60));
  if (iVar3 != 0) {
    FUN_10001ec0(local_14,uStack00000022,uStack00000020);
  }
  FUN_10001548(local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}

/* Address: 0x101075c0 Size: 204 bytes */
void FUN_101075c0(long long param_1,long long param_2,int param_3)

{
  int _uStack00000020;
  int iVar1;
  int uVar2;
  int *ppuVar3;
  int iVar5;
  long long uVar4;
  short uStack00000020;
  short uStack00000022;
  char auStack_128 [276];
  int local_14;
  
  iVar1 = iRam101177f0;
  ppuVar3 = 0 /* TVect base */;
  _uStack00000020 = param_3;
  FUN_100ee64c(auStack_128);
  iVar5 = FUN_100b04bc(((char*)0 + 0x00000020),(*(int*)((char*)ppuVar3 - 0x398)));
  if (iVar5 != 0) {
    FUN_10001ec0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),uStack00000022,uStack00000020);
  }
  uVar2 = local_14;
  uVar4 = GetBitMapPtr(param_2);
  FUN_10003150(uVar2,uVar4);
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),local_14,local_14);
  FUN_10001548(local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}

/* Address: 0x1010768c Size: 204 bytes */
void FUN_1010768c(int *param_1)

{
  int *piVar1;
  int iVar2;
  char auStack_140 [320];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x1c,param_1);
  FUN_1010556c(auStack_140,param_1);
  piVar1 = (int *)FUN_10105660(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x328));
    piVar1 = (int *)FUN_10105684(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_101055f4(auStack_140,2);
  return;
}



























































































/* Address: 0x10107758 Size: 288 bytes */
void FUN_10107758(int *param_1,long long param_2)

{
  int iVar1;
  int iVar2;
  int bVar3;
  int *piVar5;
  long long uVar4;
  unsigned int uVar6;
  char auStack_78 [48];
  char auStack_48 [72];
  
  bVar3 = false;
  uVar6 = 0;
  do {
    if (*(unsigned char *)((int)param_1 + uVar6 + 0x44) < 6) {
      return;
    }
    if (!bVar3) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x388),auStack_48);
      bVar3 = true;
    }
    FUN_100e1a64(auStack_78,auStack_48);
    piVar5 = (int *)FUN_100e1088(auStack_78,uVar6);
    iVar1 = *piVar5;
    uVar4 = FUN_100e1580(param_2,0);
    piVar5 = (int *)FUN_100e1088(uVar4,uVar6);
    iVar2 = *piVar5;
    uVar4 = FUN_100e1580(param_2,1);
    piVar5 = (int *)FUN_100e1088(uVar4,uVar6);
    *piVar5 = iVar2 + iVar1;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 2);
  return;
}











































































































































































/* Address: 0x10107a94 Size: 148 bytes */
long long FUN_10107a94(int *param_1,long long param_2)

{
  int iVar1;
  long long uVar2;
  char auStack_20 [32];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar1 == 0) || (iVar1 = FUN_100e1aac(auStack_20,param_2), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10107b28 Size: 88 bytes */
short FUN_10107b28(int param_1)

{
  short uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                         (int)*(short *)(**(int **)(param_1 + 0x24) + 0xa8));
  }
  return uVar1;
}

/* Address: 0x10107b80 Size: 132 bytes */
long long FUN_10107b80(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0xe0) + (int)param_1), iVar1 == 0)) &&
     (iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x570)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10107c04 Size: 100 bytes */
long long FUN_10107c04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x49) != '\0') &&
      (piVar1 = *(int **)(param_1 + 0x24), piVar1 != (int *)0x0)) &&
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0xf0) + (int)piVar1), iVar2 == 0)) {
    return 1;
  }
  return 0;
}

/* Address: 0x10107c68 Size: 92 bytes */
long long FUN_10107c68(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if ((*(char *)((int)param_1 + 0x4a) == '\0') &&
     (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x580) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10107cc4 Size: 100 bytes */
long long FUN_10107cc4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x4b) != '\0') &&
      (piVar1 = *(int **)(param_1 + 0x24), piVar1 != (int *)0x0)) &&
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0xf0) + (int)piVar1), iVar2 == 0)) {
    return 1;
  }
  return 0;
}

/* Address: 0x10107d2c Size: 92 bytes */
char FUN_10107d2c(int *param_1)

{
  int iVar1;
  char uVar2;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x680));
  if (iVar1 == 0) {
    uVar2 = *(char *)((int)param_1 + 0x47);
  }
  else {
    uVar2 = *(char *)((int)param_1 + 0x46);
  }
  return uVar2;
}

/* Address: 0x10107d90 Size: 236 bytes */
void FUN_10107d90(int *param_1,long long param_2,long long param_3)

{
  long long uVar1;
  int *puVar2;
  int iVar3;
  unsigned long long uVar4;
  char auStack_28 [8];
  char auStack_20 [32];
  
  uVar4 = (unsigned long long)gProgressCounterBase;
  uVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5b8));
  if ((int)uVar1 == -1) {
    FUN_100014a0(uVar4 + 0x5e);
  }
  else {
    ResourceRead_Dispatch(auStack_28,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
    puVar2 = (int *)FUN_100b0368(auStack_20,auStack_28);
    iVar3 = FUN_100033c0(*puVar2,param_3);
    if (iVar3 == 0) {
      FUN_100014a0(uVar4 + 0x5e);
    }
    else {
      puVar2 = (int *)FUN_10001470(uVar1);
      FUN_100db2a4();
      FUN_100014a0(*puVar2);
    }
  }
  return;
}

/* Address: 0x10107e7c Size: 212 bytes */
void FUN_10107e7c(long long param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7)

{
  int iVar1;
  int *puVar3;
  long long uVar2;
  int uStack00000028;
  char auStack_20 [32];
  
  iVar1 = iRam101177f0;
  uStack00000028 = param_5;
  FUN_100b0384(((char*)0 + 0x00000028));
  FUN_10002fd0();
  puVar3 = (int *)FUN_100b0368(auStack_20,((char*)0 + 0x00000028));
  uVar2 = FUN_100000f0(param_4,*puVar3,0,0,0,param_7,0);
  if ((int)uVar2 != -0x355) {
    EndFocus(uVar2);
  }
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x18),param_3,param_3);
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),param_3,param_3);
  return;
}

/* Address: 0x10107f60 Size: 344 bytes */
void FUN_10107f60(int *param_1,long long param_2,long long param_3)

{
  int *puVar1;
  int iVar2;
  short local_260 [2];
  char auStack_25c [264];
  int local_154 [2];
  char auStack_14c [8];
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar1 = puRam10117370;
  FUN_100b02d0(local_154);
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  if (iVar2 != -1) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x5e0) + (int)param_1,param_2,param_3);
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_3c = *puVar1;
    *puVar1 = auStack_144;
    iVar2 = TrySetjmp(auStack_144);
    if (iVar2 == 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5c0),param_2,param_3,auStack_25c,
                   local_154,auStack_14c,local_260);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5c8),param_2,param_3,auStack_25c,
                   local_154[0],auStack_14c,local_260[0]);
      *puVar1 = local_3c;
    }
    else if (local_44 != -0x359) {
      FUN_100db158(local_44,local_40);
    }
  }
  return;
}

/* Address: 0x101080b8 Size: 416 bytes */
void FUN_101080b8(int *param_1,long long param_2,long long param_3)

{
  int bVar1;
  int iVar2;
  int *piVar3;
  char auStack_268 [312];
  char auStack_130 [276];
  int local_1c;
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x608),param_3);
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x570));
  if (iVar2 != 0) {
    FUN_100ee64c(auStack_130);
    FUN_1010556c(auStack_268,param_1);
    piVar3 = (int *)FUN_10105660(auStack_268);
    iVar2 = FUN_100ebf44(auStack_268);
    bVar1 = false;
    while (iVar2 != 0) {
      iVar2 = ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x568));
      if ((iVar2 != 0) && (!bVar1)) {
        ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x608) + (int)piVar3,local_1c);
        ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,local_1c);
        FUN_10000108(param_3,local_1c,param_3);
        iVar2 = FUN_10001c20(param_3);
        if ((0x4000 < iVar2) || (iVar2 = FUN_10002b20(), iVar2 != 0)) {
          FUN_10000138(param_3);
          bVar1 = true;
        }
      }
      piVar3 = (int *)FUN_10105684(auStack_268);
      iVar2 = FUN_100ebf44(auStack_268);
    }
    FUN_101055f4(auStack_268,2);
    FUN_100ee77c(auStack_130,2);
  }
  return;
}


























































































































































































/* Address: 0x10108258 Size: 416 bytes */
void FUN_10108258(int *param_1,long long param_2,long long param_3)

{
  int bVar1;
  int iVar2;
  int *piVar3;
  char auStack_268 [312];
  char auStack_130 [276];
  int local_1c;
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x608),param_3);
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x580));
  if (iVar2 != 0) {
    FUN_100ee64c(auStack_130);
    FUN_1010556c(auStack_268,param_1);
    piVar3 = (int *)FUN_10105660(auStack_268);
    iVar2 = FUN_100ebf44(auStack_268);
    bVar1 = false;
    while (iVar2 != 0) {
      iVar2 = ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x578));
      if ((iVar2 != 0) && (!bVar1)) {
        ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x608) + (int)piVar3,local_1c);
        ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,local_1c);
        FUN_10000108(param_3,local_1c,param_3);
        iVar2 = FUN_10001c20(param_3);
        if ((0x4000 < iVar2) || (iVar2 = FUN_10002b20(), iVar2 != 0)) {
          FUN_10000138(param_3);
          bVar1 = true;
        }
      }
      piVar3 = (int *)FUN_10105684(auStack_268);
      iVar2 = FUN_100ebf44(auStack_268);
    }
    FUN_101055f4(auStack_268,2);
    FUN_100ee77c(auStack_130,2);
  }
  return;
}


























































































































































































/* Address: 0x101083f8 Size: 64 bytes */
void FUN_101083f8(long long param_1,long long param_2)

{
  FUN_100e10f8(param_2,param_1 + 0x2c,param_1 + 0x3c);
  return;
}

/* Address: 0x10108438 Size: 200 bytes */
void FUN_10108438(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  char auStack_20 [32];
  
  FUN_100e1140(auStack_20,param_2);
  iVar1 = FUN_100e11c8(param_1 + 0xf,auStack_20);
  if (iVar1 != 0) {
    FUN_100e1140(param_1 + 0xf,param_2);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3b8) + (int)param_1);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3e0) + (int)param_1);
    if (param_3 != '\0') {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
    }
  }
  return;
}

/* Address: 0x10108500 Size: 112 bytes */
long long FUN_10108500(int param_1)

{
  int *piVar1;
  long long uVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x2f0));
    }
  }
  else {
    uVar2 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x4a0));
  }
  return uVar2;
}

/* Address: 0x10108570 Size: 104 bytes */
void FUN_10108570(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x2f8));
    }
  }
  else {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x4a8));
  }
  return;
}

/* Address: 0x101085d8 Size: 104 bytes */
void FUN_101085d8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x300));
    }
  }
  else {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x4b0));
  }
  return;
}

/* Address: 0x10108640 Size: 112 bytes */
void FUN_10108640(int *param_1,char param_2)

{
  char auStack_20 [32];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_20,param_1 + 0xd,param_2);
  return;
}

/* Address: 0x101086b0 Size: 64 bytes */
long long FUN_101086b0()

{
  long long uVar1;
  
  uVar1 = FUN_100d76c0(0);
  FUN_100d77c4();
  return uVar1;
}

/* Address: 0x101086f0 Size: 84 bytes */
void FUN_101086f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1c] == 0) {
    iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x430));
    param_1[0x1c] = iVar1;
  }
  return;
}

/* Address: 0x10108744 Size: 108 bytes */
void FUN_10108744(int *param_1,int param_2,char param_3)

{
  if (param_1[0x1c] != param_2) {
    DisposeObject(param_1[0x1c]);
    param_1[0x1c] = param_2;
  }
  if (param_3 != '\0') {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x101087b8 Size: 104 bytes */
void FUN_101087b8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x1c];
  if (piVar1 != (int *)0x0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0));
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x458));
  return;
}

/* Address: 0x10108820 Size: 72 bytes */
void FUN_10108820(int param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x70) + (int)*(short *)(**(int **)(param_1 + 0x70) + 0xb8)
                );
  }
  return;
}

/* Address: 0x10108868 Size: 72 bytes */
void FUN_10108868(int param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x70) + (int)*(short *)(**(int **)(param_1 + 0x70) + 0xc0)
                );
  }
  return;
}

/* Address: 0x101088b0 Size: 4 bytes */
void FUN_101088b0()

{
  return;
}





/* Address: 0x101088b4 Size: 100 bytes */
void FUN_101088b4(int *param_1)

{
  char auStack_18 [24];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_18);
  return;
}

/* Address: 0x10108918 Size: 1172 bytes */
void FUN_10108918(int *param_1,long long param_2)

{
  int iVar2;
  int *puVar3;
  long long uVar1;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *puVar7;
  char *puVar8;
  char *puVar9;
  int *puVar10;
  char *puVar11;
  int *puVar12;
  int *puVar13;
  int *puVar14;
  char *puVar15;
  char *puVar16;
  char *puVar17;
  int local_334;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  char auStack_300 [16];
  char auStack_2f0 [8];
  char auStack_2e8 [16];
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  char auStack_2c8 [276];
  int local_1b4;
  char auStack_1b0 [312];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68 [4];
  int local_58 [4];
  char auStack_48 [72];
  
  puVar7 = (int *)(((char*)0) + -0x310);
  puVar8 = ((char*)0) + -0x300;
  puVar9 = ((char*)0) + -0x2f0;
  puVar16 = ((char*)0) + -0x2e8;
  puVar10 = (int *)(((char*)0) + -0x2d8);
  puVar17 = ((char*)0) + -0x2c8;
  puVar11 = ((char*)0) + -0x1b0;
  puVar12 = (int *)(((char*)0) + -0x78);
  puVar13 = (int *)(((char*)0) + -0x68);
  puVar14 = (int *)(((char*)0) + -0x58);
  puVar15 = ((char*)0) + -0x48;
  FUN_100e17d8(param_2,puVar8,param_1 + 0x18);
  iVar2 = FUN_100e1a08(puVar8);
  if (((iVar2 == 0) &&
      (iVar2 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x668) + (int)param_1), iVar2 != 0)) &&
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar2 != 0)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x630) + (int)param_1,puVar16);
    FUN_100e17d8(param_2,puVar7,puVar16);
    puVar3 = puVar12;
    if ((((char*)0) != (char *)0x78) ||
       (puVar3 = (int *)NewPtr_Thunk(0x10), puVar3 != (int *)0x0)) {
      *puVar3 = *puVar7;
      puVar3[1] = *(int *)(((char*)0) + -0x30c);
      puVar3[2] = *(int *)(((char*)0) + -0x308);
      puVar3[3] = *(int *)(((char*)0) + -0x304);
    }
    iVar2 = FUN_100e1a08(puVar12);
    if (iVar2 == 0) {
      FUN_100ee64c(puVar17);
      FUN_10001e48(local_1b4);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar12,puVar9);
      uVar1 = GetBitMapPtr(puVar9);
      iVar4 = FUN_10001e60(uVar1,local_1b4);
      iVar2 = local_334;
      FUN_100ee77c(puVar17,2);
      if (iVar4 != 0) {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x450) + (int)param_1);
        if (param_1[0x1d] == 0) {
          ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x478),puVar12);
        }
        else {
          ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x490) + (int)param_1,puVar12);
        }
        piVar5 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
        iVar2 = local_334;
        if (piVar5 != (int *)0x0) {
          ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x180),puVar12);
        }
      }
      FUN_1010556c(puVar11,param_1);
      piVar5 = (int *)FUN_10105660(puVar11);
      iVar6 = FUN_100ebf44(puVar11);
      while (iVar6 != 0) {
        ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x600),puVar15);
        puVar7 = puVar14;
        if ((((char*)0) != (char *)0x58) ||
           (puVar7 = (int *)NewPtr_Thunk(0x10), puVar7 != (int *)0x0)) {
          *puVar7 = *puVar12;
          puVar7[1] = *(int *)(((char*)0) + -0x74);
          puVar7[2] = *(int *)(((char*)0) + -0x70);
          puVar7[3] = *(int *)(((char*)0) + -0x6c);
        }
        ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x2c0),puVar14);
        iVar2 = local_334;
        FUN_100e17d8(puVar14,puVar10,puVar15);
        puVar7 = puVar13;
        if ((((char*)0) != (char *)0x68) ||
           (puVar7 = (int *)NewPtr_Thunk(0x10), puVar7 != (int *)0x0)) {
          *puVar7 = *puVar10;
          puVar7[1] = *(int *)(((char*)0) + -0x2d4);
          puVar7[2] = *(int *)(((char*)0) + -0x2d0);
          puVar7[3] = *(int *)(((char*)0) + -0x2cc);
        }
        iVar6 = FUN_100e1a08(puVar13);
        if (iVar6 == 0) {
          ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x480),puVar13);
          iVar2 = local_334;
        }
        piVar5 = (int *)FUN_10105684(puVar11);
        iVar6 = FUN_100ebf44(puVar11);
      }
      FUN_101055f4(puVar11,2);
      if (iVar4 != 0) {
        if ((((**(char **)(iVar2 + -0xc58) == '\0') && (**(char **)(iVar2 + -0xc50) == '\0')) &&
            (param_1[0x1d] != 0)) &&
           (iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar2 != 0)) {
          iVar2 = *param_1;
          uVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar2 + 0x470),
                               *(int *)(iVar2 + 0x474));
          ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar2 + 0x498),puVar12,1,uVar1);
        }
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x460));
      }
    }
  }
  return;
}
























































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10108dac Size: 324 bytes */
void FUN_10108dac(long long param_1,int *param_2)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char *puVar4;
  int *puVar5;
  char *puVar6;
  char auStack_178 [24];
  int local_160 [4];
  char auStack_150 [336];
  
  puVar4 = ((char*)0) + -0x178;
  puVar5 = (int *)(((char*)0) + -0x160);
  puVar6 = ((char*)0) + -0x150;
  puVar1 = puVar5;
  if ((((char*)0) != (char *)0x160) ||
     (puVar1 = (int *)NewPtr_Thunk(0x10), puVar1 != (int *)0x0)) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  FUN_100b236c(puVar6,param_1);
  FUN_10000000(puVar4);
  piVar2 = (int *)FUN_100b2460(puVar6);
  iVar3 = FUN_100ebf44(puVar6);
  while (iVar3 != 0) {
    iVar3 = ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0xe0),param_1);
    if (iVar3 != 0) {
      ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8),param_1,puVar5);
      FUN_100016f8(puVar4);
    }
    piVar2 = (int *)FUN_100b24e8(puVar6);
    iVar3 = FUN_100ebf44(puVar6);
  }
  FUN_100b23f4(puVar6,2);
  return;
}

/* Address: 0x10108ef0 Size: 284 bytes */
int * FUN_10108ef0(int *param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  char auStack_148 [328];
  
  if (param_1[6] != (int)param_2) {
    FUN_1010556c(auStack_148,param_1);
    piVar1 = (int *)FUN_10105660(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      if (piVar1[6] == (int)param_2) {
        FUN_101055f4(auStack_148,2);
        return piVar1;
      }
      if ((piVar1[9] != 0) &&
         (piVar1 = (int *)ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),param_2),
         piVar1 != (int *)0x0)) {
        FUN_101055f4(auStack_148,2);
        return piVar1;
      }
      piVar1 = (int *)FUN_10105684(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
    param_1 = (int *)0x0;
  }
  return param_1;
}


















































































































































/* Address: 0x1010900c Size: 364 bytes */
long long FUN_1010900c(int *param_1)

{
  int iVar1;
  int local_4c;
  char auStack_28 [8];
  char auStack_20 [8];
  int local_18 [6];
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
  if (iVar1 == 0) {
    iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b0));
    if (iVar1 == 0) {
      return 0;
    }
    FUN_10002028(*(short *)((int)param_1 + 0x56),*(short *)(param_1 + 0x15));
    FUN_100b02d0(local_18);
    if (param_1[8] == 0) {
      local_18[0] = **(int **)(local_4c + -0xe60);
    }
    else {
      FUN_100b0408(local_18,param_1 + 0x15,(unsigned long long)(unsigned int)param_1[8] + 0x54);
    }
    **(int **)(local_4c + -0xe30) = param_1;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x628),auStack_20);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3d0),auStack_20,local_18[0]);
  }
  else if ((int *)**(int **)(local_4c + -0xc54) == param_1) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_28);
    FUN_10002028(*(short *)((int)param_1 + 0x56),*(short *)(param_1 + 0x15));
    GetBitMapPtr(auStack_28);
    FUN_10002040();
  }
  return 1;
}

/* Address: 0x10109178 Size: 76 bytes */
long long FUN_10109178(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x3a8));
  }
  return uVar1;
}

/* Address: 0x101091c4 Size: 164 bytes */
void FUN_101091c4(int *param_1)

{
  int iVar1;
  char auStack_128 [276];
  int local_14;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x670));
  if (iVar1 != 0) {
    FUN_100ee64c(auStack_128);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x608) + (int)param_1,local_14);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x4e8) + (int)param_1,local_14);
    FUN_100ee77c(auStack_128,2);
  }
  return;
}

/* Address: 0x10109268 Size: 148 bytes */
void FUN_10109268(int *param_1)

{
  int *piVar1;
  
  ResourceRead_Dispatch(*piRam101169f4 + (int)*(short *)(*(int *)*piRam101169f4 + 0x38),0x23,param_1);
  piVar1 = (int *)param_1[10];
  if (piVar1 == (int *)0x0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  else {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x240));
  }
  return;
}

/* Address: 0x10109308 Size: 116 bytes */
void FUN_10109308(int *param_1,long long param_2)

{
  FUN_100dac58(param_1,param_2);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 600),param_2);
  return;
}

/* Address: 0x1010937c Size: 804 bytes */
void FUN_1010937c(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar2;
  short uVar3;
  char uVar4;
  char local_160;
  char local_15f [3];
  int local_15c;
  int local_158;
  int local_154;
  int iStack_150;
  int local_14c;
  int iStack_148;
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar1 = puRam10117370;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = *puRam10117370;
  *puRam10117370 = auStack_144;
  iVar2 = TrySetjmp(auStack_144);
  if (iVar2 == 0) {
    uVar3 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x1f) = uVar3;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x118),&local_14c);
    param_1[0xb] = local_14c;
    param_1[0xc] = iStack_148;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x118),&local_154);
    param_1[0xd] = local_154;
    param_1[0xe] = iStack_150;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_15f,1);
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xe0),&local_160,1);
    *(char *)((int)param_1 + 0x45) = local_160;
    *(char *)(param_1 + 0x11) = local_15f[0];
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0x52) = uVar4;
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0x53) = uVar4;
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)(param_1 + 0x12) = uVar4;
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0x49) = uVar4;
    uVar3 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x13) = uVar3;
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0x4a) = uVar4;
    uVar4 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(char *)((int)param_1 + 0x4b) = uVar4;
    uVar3 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0x4e) = uVar3;
    uVar3 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x14) = uVar3;
    local_158 = 0;
    iVar2 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_158);
    if (iVar2 == 0) {
      param_1[0x1c] = 0;
    }
    else {
      param_1[0x1c] = local_158;
    }
    local_15c = 0;
    iVar2 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_15c);
    if (iVar2 == 0) {
      param_1[0x1d] = 0;
    }
    else {
      param_1[0x1d] = local_15c;
    }
    iVar2 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x108));
    param_1[0x1e] = iVar2;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x138));
    *puVar1 = local_3c;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_44,local_40);
  }
  return;
}




















































































































































































































































































































































































































































/* Address: 0x101096a0 Size: 292 bytes */
void FUN_101096a0(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int local_138;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puRam10117370;
  *puRam10117370 = auStack_134;
  iVar2 = TrySetjmp(auStack_134);
  if (iVar2 == 0) {
    sVar3 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    sVar4 = 0;
    if (0 < sVar3) {
      do {
        local_138 = 0;
        iVar2 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_138);
        if (iVar2 != 0) {
          ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2e0),local_138);
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < sVar3);
    }
    *puVar1 = local_2c;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_34,local_30);
  }
  return;
}

/* Address: 0x101097c4 Size: 36 bytes */
void FUN_101097c4()

{
  FUN_100dad6c();
  return;
}

/* Address: 0x101097e8 Size: 628 bytes */
void FUN_101097e8(int *param_1,int *param_2)

{
  int iVar1;
  long long uVar2;
  char local_20;
  char local_1f [31];
  
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x1f));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0xb);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0xd);
  local_1f[0] = *(char *)((int)param_1 + 0x45);
  local_20 = *(char *)(param_1 + 0x11);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x170),&local_20,1);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x170),local_1f,1);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x52)
              );
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x53)
              );
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x12));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x49)
              );
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x13));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x4a)
              );
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)((int)param_1 + 0x4b)
              );
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)((int)param_1 + 0x4e));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x14));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),param_1[0x1c],0);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),param_1[0x1d],1);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x1e]);
  iVar1 = *param_2;
  uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x70));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(iVar1 + 0x1c8),uVar2);
  return;
}





















































































































































































/* Address: 0x10109a5c Size: 252 bytes */
void FUN_10109a5c(int *param_1,int *param_2)

{
  long long uVar1;
  int iVar2;
  char auStack_150 [336];
  
  iVar2 = *param_2;
  uVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x300));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(iVar2 + 400),uVar1);
  FUN_1010556c(auStack_150,param_1);
  uVar1 = FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),uVar1,1);
    uVar1 = FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_101055f4(auStack_150,2);
  return;
}





































































































/* Address: 0x10109b94 Size: 76 bytes */
unsigned long long FUN_10109b94(int *param_1)

{
  unsigned long long uVar1;
  
  uVar1 = (unsigned long long)(unsigned int)param_1[10];
  if (param_1[10] == 0) {
    uVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  }
  return uVar1;
}

/* Address: 0x10109be0 Size: 172 bytes */
void FUN_10109be0(int *param_1,int *param_2)

{
  int *puVar1;
  int local_50;
  int uStack_4c;
  int uStack_48;
  int uStack_44;
  char auStack_40 [8];
  char auStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10116bc0;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_38);
  local_30 = *puVar1;
  local_2c = puVar1[1];
  local_28 = param_1[0xd];
  local_24 = param_1[0xe];
  FUN_100e10f8(auStack_40,auStack_38,param_1 + 0xb);
  FUN_100e15ec(&local_30,&local_50,auStack_40);
  *param_2 = local_50;
  param_2[1] = uStack_4c;
  param_2[2] = uStack_48;
  param_2[3] = uStack_44;
  return;
}

/* Address: 0x10109c8c Size: 108 bytes */
void FUN_10109c8c(int *param_1,long long param_2)

{
  long long uVar1;
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_10);
  uVar1 = GetBitMapPtr(auStack_10);
  FUN_10003150(param_2,uVar1);
  return;
}

/* Address: 0x10109cf8 Size: 116 bytes */
void FUN_10109cf8(int param_1,int *param_2)

{
  int uVar1;
  int local_30;
  int local_2c;
  
  FUN_100e10b0(&local_30,param_1 + 0x2c,param_1 + 0x34);
  uVar1 = *(int *)(param_1 + 0x30);
  *param_2 = *(int *)(param_1 + 0x2c);
  param_2[1] = uVar1;
  param_2[2] = local_30;
  param_2[3] = local_2c;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
unsigned long long FUN_10109d6c(int param_1) { return 0; }




























/* Address: 0x10109e24 Size: 112 bytes */
long long FUN_10109e24(int *param_1,long long param_2)

{
  int iVar2;
  long long uVar1;
  char auStack_18 [24];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  iVar2 = FUN_100e1aac(auStack_18,param_2);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

/* Address: 0x10109e94 Size: 108 bytes */
void FUN_10109e94(int *param_1,long long param_2)

{
  char auStack_20 [32];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,param_2);
  return;
}

/* Address: 0x10109f00 Size: 132 bytes */
unsigned long long FUN_10109f00(int param_1,char param_2)

{
  unsigned long long uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x5f0),param_2);
    if (((uVar1 & 0xffffffff) != (unsigned long long)*(unsigned int *)(param_1 + 0x20)) && (param_2 != '\0')) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* Address: 0x10109f84 Size: 108 bytes */
void FUN_10109f84(int *param_1,long long param_2)

{
  char auStack_18 [24];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x628),auStack_18);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x278),auStack_18,param_2);
  return;
}

/* Address: 0x10109ff0 Size: 160 bytes */
void FUN_10109ff0(int *param_1,int *param_2)

{
  char auStack_130 [276];
  int *local_1c;
  int local_18;
  int local_14;
  
  FUN_100ee64c(auStack_130);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x648),local_1c);
  local_18 = *(int *)(*local_1c + 2);
  local_14 = *(int *)(*local_1c + 6);
  *param_2 = local_18;
  param_2[1] = local_14;
  FUN_100ee77c(auStack_130,2);
  return;
}

/* Address: 0x1010a090 Size: 164 bytes */
void FUN_1010a090(int *param_1,long long param_2)

{
  int iVar2;
  long long uVar1;
  char auStack_18 [24];
  
  iVar2 = FUN_100e1a08(param_1 + 0x18);
  if (iVar2 == 0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x18,auStack_18);
    uVar1 = GetBitMapPtr(auStack_18);
    FUN_10003150(param_2,uVar1);
    FUN_101056a8(param_2);
  }
  else {
    FUN_10000138(param_2);
  }
  return;
}

/* Address: 0x1010a134 Size: 108 bytes */
void FUN_1010a134(int *param_1,long long param_2)

{
  char auStack_18 [24];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x638),auStack_18);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x278),auStack_18,param_2);
  return;
}

/* Address: 0x1010a1a0 Size: 160 bytes */
void FUN_1010a1a0(int *param_1,int *param_2)

{
  char auStack_130 [276];
  int *local_1c;
  int local_18;
  int local_14;
  
  FUN_100ee64c(auStack_130);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x640),local_1c);
  local_18 = *(int *)(*local_1c + 2);
  local_14 = *(int *)(*local_1c + 6);
  *param_2 = local_18;
  param_2[1] = local_14;
  FUN_100ee77c(auStack_130,2);
  return;
}

/* Address: 0x1010a240 Size: 104 bytes */
void FUN_1010a240(int *param_1,long long param_2)

{
  int iVar1;
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x648),param_2);
  iVar1 = FUN_10000060(param_2);
  if (iVar1 == 0) {
    FUN_10105704(param_2);
  }
  return;
}

/* Address: 0x1010a2b8 Size: 76 bytes */
int FUN_1010a2b8(int *param_1)

{
  int iVar1;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return iVar1 == 0;
}

/* Address: 0x1010a30c Size: 332 bytes */
void FUN_1010a30c(int *param_1,long long param_2,int *param_3,long long param_4,short *param_5,
                 int *param_6,long long param_7)

{
  int *piVar1;
  int iVar2;
  int uVar3;
  long long uVar4;
  long long uVar5;
  long long uVar6;
  
  piVar1 = (int *)*gAppObject;
  iVar2 = *piVar1;
  uVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5b0));
  uVar5 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5a8));
  uVar6 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(iVar2 + 0x418),uVar6,uVar5,uVar4,param_4,param_5,
               param_6,param_7);
  if (param_3 != (int *)0x0) {
    uVar3 = *(int *)(*param_3 + 6);
    *param_6 = *(int *)(*param_3 + 2);
    param_6[1] = uVar3;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      ResourceRead_Dispatch(param_5,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    }
  }
  return;
}

/* Address: 0x1010a458 Size: 72 bytes */
void FUN_1010a458(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x5f8));
  }
  return;
}

/* Address: 0x1010a4a0 Size: 76 bytes */
long long FUN_1010a4a0(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x138));
  }
  return uVar1;
}

/* Address: 0x1010a4ec Size: 108 bytes */
long long FUN_1010a4ec(long long param_1,long long param_2,long long param_3)

{
  long long uVar1;
  long long uVar2;
  char auStack_10 [16];
  
  uVar1 = FUN_100f1574(1);
  uVar2 = FUN_10000228(param_2,param_3,auStack_10);
  FUN_100f1574(uVar1);
  return uVar2;
}

/* Address: 0x1010a558 Size: 628 bytes */
void FUN_1010a558(int *param_1,int *param_2,long long param_3)

{
  int bVar1;
  int iVar3;
  int *piVar4;
  long long lVar2;
  int local_158;
  int uStack_154;
  char auStack_150 [336];
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x570));
  if (iVar3 != 0) {
    FUN_101054e0(auStack_150,param_1,0);
    piVar4 = (int *)FUN_10105660(auStack_150);
    iVar3 = FUN_100ebf44(auStack_150);
    while (iVar3 != 0) {
      local_158 = *param_2;
      uStack_154 = param_2[1];
      ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x2b8),&local_158);
      iVar3 = ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x538),&local_158);
      if ((iVar3 != 0) &&
         (iVar3 = ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x568)), iVar3 != 0)) {
        ResourceRead_Dispatch((int)*(short *)(*piVar4 + 0x588) + (int)piVar4,&local_158,param_3);
        ResourceRead_Dispatch((int)*(short *)(*piVar4 + 0x2b0) + (int)piVar4,param_3);
        break;
      }
      piVar4 = (int *)FUN_10105684(auStack_150);
      iVar3 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  iVar3 = FUN_10000060(param_3);
  if ((iVar3 != 0) &&
     (iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar3 != 0)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x5d8) + (int)param_1,param_2,param_3);
    iVar3 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1d0) + (int)param_1);
    bVar1 = true;
    if (iVar3 != 0) {
      piVar4 = (int *)ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x1d0) + (int)param_1);
      lVar2 = ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x188),param_2,param_3);
      bVar1 = lVar2 == 0;
    }
    if (bVar1) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x598),param_2,param_3);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x560),param_3);
  }
  return;
}






















































































































































































































































/* Address: 0x1010a7cc Size: 512 bytes */
void FUN_1010a7cc(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  int *piVar2;
  int local_158;
  int uStack_154;
  char auStack_150 [336];
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x580));
  if (iVar1 != 0) {
    FUN_101054e0(auStack_150,param_1,0);
    piVar2 = (int *)FUN_10105660(auStack_150);
    iVar1 = FUN_100ebf44(auStack_150);
    while (iVar1 != 0) {
      local_158 = *param_2;
      uStack_154 = param_2[1];
      ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_158);
      iVar1 = ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x538),&local_158);
      if ((iVar1 != 0) &&
         (iVar1 = ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x578)), iVar1 != 0)) {
        ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x590) + (int)piVar2,&local_158,param_3);
        ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x2b0) + (int)piVar2,param_3);
        break;
      }
      piVar2 = (int *)FUN_10105684(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  iVar1 = FUN_10000060(param_3);
  if (((iVar1 != 0) &&
      (iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x578)), iVar1 != 0)) &&
     (iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x5d0) + (int)param_1,param_2,param_3);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x560) + (int)param_1,param_3);
  }
  return;
}































































































































































































/* Address: 0x1010a9cc Size: 856 bytes */
int FUN_1010a9cc(int *param_1,int *param_2,long long param_3)

{
  int iVar2;
  int *piVar3;
  int *piVar4;
  long long lVar1;
  int bVar5;
  int in_stack_00000024;
  int local_178;
  int uStack_174;
  int local_170 [2];
  int local_168;
  int uStack_164;
  char auStack_160 [352];
  
  piVar4 = gAppObject;
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if ((iVar2 != 0) &&
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x140) + (int)param_1), iVar2 != 0)) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x180) + (int)param_1);
  }
  FUN_101054e0(auStack_160,param_1,0);
  piVar3 = (int *)FUN_10105660(auStack_160);
  iVar2 = FUN_100ebf44(auStack_160);
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
      if (iVar2 == 0) {
        FUN_101055f4(auStack_160,2);
        bVar5 = false;
      }
      else {
        local_178 = *param_2;
        uStack_174 = param_2[1];
        piVar3 = (int *)*piVar4;
        iVar2 = ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x468));
        if (iVar2 != 0) {
          FUN_100b02d0(local_170);
          ResourceRead_Dispatch(local_170,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
          FUN_100b0384(local_170);
          FUN_10002fd0();
          piVar4 = (int *)*piVar4;
          ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x428),local_170[0]);
          ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
        }
        piVar4 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
        bVar5 = true;
        if (piVar4 != (int *)0x0) {
          lVar1 = ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x170),&local_178,param_3,
                               in_stack_00000024);
          bVar5 = lVar1 == 0;
        }
        if ((bVar5) &&
           (iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xe0)), iVar2 != 0)) {
          ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x550),&local_178,param_3,
                       in_stack_00000024);
          FUN_101055f4(auStack_160,2);
          bVar5 = true;
        }
        else {
          bVar5 = !bVar5;
          FUN_101055f4(auStack_160,2);
        }
      }
      return bVar5;
    }
    local_168 = *param_2;
    uStack_164 = param_2[1];
    ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x2b8),&local_168);
    iVar2 = ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x538),&local_168);
    if ((iVar2 != 0) &&
       (iVar2 = ResourceRead_Dispatch((int)*(short *)(*piVar3 + 0x540) + (int)piVar3,&local_168,param_3,
                             in_stack_00000024), iVar2 != 0)) break;
    piVar3 = (int *)FUN_10105684(auStack_160);
    iVar2 = FUN_100ebf44(auStack_160);
  }
  FUN_101055f4(auStack_160,2);
  return true;
}












































































































































































































































































































































































































/* Address: 0x1010ad24 Size: 600 bytes */
int FUN_1010ad24(int *param_1,int *param_2,long long param_3)

{
  int *piVar2;
  int iVar3;
  long long lVar1;
  int bVar4;
  int in_stack_00000024;
  int local_168;
  int uStack_164;
  int local_160;
  int uStack_15c;
  char auStack_158 [344];
  
  FUN_101054e0(auStack_158,param_1,0);
  piVar2 = (int *)FUN_10105660(auStack_158);
  iVar3 = FUN_100ebf44(auStack_158);
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
      if (iVar3 == 0) {
        FUN_101055f4(auStack_158,2);
        bVar4 = false;
      }
      else {
        local_168 = *param_2;
        uStack_164 = param_2[1];
        piVar2 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
        bVar4 = true;
        if (piVar2 != (int *)0x0) {
          lVar1 = ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x178) + (int)piVar2,&local_168,param_3,
                               in_stack_00000024);
          bVar4 = lVar1 == 0;
        }
        if ((bVar4) &&
           (iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xe0)), iVar3 != 0)) {
          ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x558),&local_168,param_3,
                       in_stack_00000024);
          FUN_101055f4(auStack_158,2);
          bVar4 = true;
        }
        else {
          bVar4 = !bVar4;
          FUN_101055f4(auStack_158,2);
        }
      }
      return bVar4;
    }
    local_160 = *param_2;
    uStack_15c = param_2[1];
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_160);
    iVar3 = ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x538),&local_160);
    if ((iVar3 != 0) &&
       (iVar3 = ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x548) + (int)piVar2,&local_160,param_3,
                             in_stack_00000024), iVar3 != 0)) break;
    piVar2 = (int *)FUN_10105684(auStack_158);
    iVar3 = FUN_100ebf44(auStack_158);
  }
  FUN_101055f4(auStack_158,2);
  return true;
}













































































































































































































































































































/* Address: 0x1010af7c Size: 76 bytes */
long long FUN_1010af7c(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x4c0));
  }
  return uVar1;
}

/* Address: 0x1010afc8 Size: 100 bytes */
void FUN_1010afc8(int *param_1,long long param_2)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_10);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4e0),auStack_10);
  return;
}

/* Address: 0x1010b02c Size: 144 bytes */
void FUN_1010b02c(int *param_1,long long param_2)

{
  int uVar1;
  long long uVar2;
  char auStack_128 [276];
  int local_14;
  
  FUN_100ee64c(auStack_128);
  uVar1 = local_14;
  uVar2 = GetBitMapPtr(param_2);
  FUN_10003150(uVar1,uVar2);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4e8),local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}

/* Address: 0x1010b0bc Size: 252 bytes */
void FUN_1010b0bc(int *param_1,long long param_2)

{
  int uVar1;
  int iVar3;
  long long uVar2;
  char auStack_138 [8];
  char auStack_130 [276];
  int local_1c;
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar3 != 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_1 + 0x18,auStack_138);
    FUN_100ee64c(auStack_130);
    uVar1 = local_1c;
    uVar2 = GetBitMapPtr(auStack_138);
    FUN_10003150(uVar1,uVar2);
    FUN_10002be0(param_2,local_1c,local_1c);
    iVar3 = FUN_10000060(local_1c);
    if (iVar3 == 0) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x4f0) + (int)param_1,local_1c);
    }
    FUN_100ee77c(auStack_130,2);
  }
  return;
}

/* Address: 0x1010b1b8 Size: 72 bytes */
void FUN_1010b1b8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x4f0));
  }
  return;
}

/* Address: 0x1010b210 Size: 148 bytes */
char FUN_1010b210(int param_1)

{
  int *piVar1;
  int iVar2;
  char uVar3;
  
  if ((*pcRam10116c50 == '\0') || (*piRam10116c4c != param_1)) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 == (int *)0x0) {
      uVar3 = *(char *)(param_1 + 0x52);
    }
    else if ((*(char *)(param_1 + 0x52) == '\0') ||
            (iVar2 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x668)), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = *(char *)(param_1 + 0x52);
  }
  return uVar3;
}

/* Address: 0x1010b2a4 Size: 76 bytes */
long long FUN_1010b2a4(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x680));
  }
  return uVar1;
}

/* Address: 0x1010b2f0 Size: 168 bytes */
int FUN_1010b2f0(int *param_1)

{
  int iVar2;
  long long lVar1;
  int bVar3;
  char auStack_10 [16];
  
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar2 == 0) ||
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x638) + (int)param_1,auStack_10);
    lVar1 = FUN_100b0870(auStack_10);
    bVar3 = lVar1 == 0;
  }
  return bVar3;
}

/* Address: 0x1010b398 Size: 188 bytes */
int FUN_1010b398(int *param_1)

{
  int iVar2;
  long long lVar1;
  char auStack_10 [16];
  
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar2 == 0) ||
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3c0) + (int)param_1), iVar2 == 0)) {
    lVar1 = FUN_100e1a08(param_1 + 0x18);
  }
  else {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x628) + (int)param_1,auStack_10);
    lVar1 = FUN_100b0870(auStack_10);
  }
  return lVar1 == 0;
}

/* Address: 0x1010b454 Size: 92 bytes */
void FUN_1010b454(int *param_1,long long param_2)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e1180(param_2,auStack_10);
  return;
}

/* Address: 0x1010b4b0 Size: 92 bytes */
void FUN_1010b4b0(int *param_1,long long param_2)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e1630(param_2,auStack_10);
  return;
}

/* Address: 0x1010b50c Size: 212 bytes */
void FUN_1010b50c(int *param_1,long long param_2)

{
  int *piVar1;
  int *ppuVar2;
  short local_20;
  short local_1e;
  char auStack_18 [24];
  
  ppuVar2 = 0 /* TVect base */;
  FUN_100b02d0(&local_20);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x270),*(int *)(*(int*)((char*)ppuVar2 - 0x398)),
               auStack_18);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),auStack_18);
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    FUN_100e0f78(&local_20,auStack_18);
  }
  else {
    ResourceRead_Dispatch(&local_20,(int)piVar1 + (int)*(short *)(*piVar1 + 0x280),auStack_18);
  }
  FUN_10001ec0(param_2,local_1e,local_20);
  return;
}

/* Address: 0x1010b5e0 Size: 124 bytes */
void FUN_1010b5e0(int *param_1,long long param_2)

{
  if (param_1[8] != 0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),param_2);
    ResourceRead_Dispatch(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x2d0),param_2);
  }
  return;
}

/* Address: 0x1010b65c Size: 444 bytes */
void FUN_1010b65c(int *param_1,long long param_2,long long param_3)

{
  int uVar1;
  int iVar4;
  long long uVar2;
  long long uVar3;
  char auStack_260 [8];
  char auStack_258 [8];
  char auStack_250 [276];
  int local_13c;
  char auStack_138 [276];
  int local_24;
  
  if (param_1[8] != 0) {
    iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b0));
    if (iVar4 != 0) {
      FUN_100ee64c(auStack_250);
      FUN_100ee64c(auStack_138);
      ResourceRead_Dispatch(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x288),param_2,auStack_258);
      uVar1 = local_13c;
      uVar2 = GetBitMapPtr(auStack_258);
      FUN_10003150(uVar1,uVar2);
      ResourceRead_Dispatch(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x288),param_3,auStack_260);
      uVar1 = local_24;
      uVar2 = GetBitMapPtr(auStack_260);
      FUN_10003150(uVar1,uVar2);
      uVar2 = FUN_100e1594(param_3,0);
      uVar3 = FUN_100e1594(param_2,0);
      iVar4 = FUN_100e11fc(uVar3,uVar2);
      if (iVar4 == 0) {
        FUN_10003060(local_13c,local_24,local_24);
      }
      else {
        FUN_10001fb0(local_13c,local_24,local_24);
      }
      ResourceRead_Dispatch(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x4e8),local_24);
      FUN_100ee77c(auStack_138,2);
      FUN_100ee77c(auStack_250,2);
    }
  }
  return;
}



















































































































































































































/* Address: 0x1010b818 Size: 408 bytes */
void FUN_1010b818(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int local_4c;
  char auStack_28 [40];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_28);
  iVar1 = FUN_100e1750(param_2,auStack_28);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100e1594(param_2,0);
    iVar1 = piVar2[1];
    param_1[0xb] = *piVar2;
    param_1[0xc] = iVar1;
    FUN_100e1a64(param_1 + 0xd,param_2);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3b8) + (int)param_1);
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3e0) + (int)param_1);
    if (param_3 != '\0') {
      ResourceRead_Dispatch(**(int **)(local_4c + -0xedc) +
                   (int)*(short *)(*(int *)**(int **)(local_4c + -0xedc) + 0x450));
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x358) + (int)param_1,auStack_28,param_2);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x360),auStack_28,param_2,param_3);
    piVar2 = (int *)param_1[8];
    if (piVar2 != (int *)0x0) {
      ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x3a0) + (int)piVar2,param_1,auStack_28,param_2,param_3
                  );
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x368),auStack_28,param_2,param_3);
  }
  return;
}

































































































































































/* Address: 0x1010b9b0 Size: 248 bytes */
void FUN_1010b9b0(int *param_1,long long param_2,long long param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char auStack_150 [336];
  
  if (param_1[0x1d] != 0) {
    iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar1 != 0) {
      FUN_100b236c(auStack_150,param_1);
      piVar2 = (int *)FUN_100b2460(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
      while (iVar1 != 0) {
        ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),param_1,param_2,param_3,param_4);
        piVar2 = (int *)FUN_100b24e8(auStack_150);
        iVar1 = FUN_100ebf44(auStack_150);
      }
      FUN_100b23f4(auStack_150,2);
    }
  }
  return;
}

/* Address: 0x1010baa8 Size: 192 bytes */
void FUN_1010baa8(long long param_1,long long param_2,long long param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  char auStack_150 [336];
  
  FUN_1010556c(auStack_150,param_1);
  piVar1 = (int *)FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x398),param_2,param_3,param_4);
    piVar1 = (int *)FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_101055f4(auStack_150,2);
  return;
}






















































































/* Address: 0x1010bb68 Size: 140 bytes */
void FUN_1010bb68(int *param_1,int *param_2,char param_3)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_100e10b0(&local_30,param_2,param_1 + 0xd);
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = local_30;
  local_1c = local_2c;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x350),&local_28,param_3);
  return;
}

/* Address: 0x1010bbf4 Size: 192 bytes */
void FUN_1010bbf4(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (piVar1 = (int *)ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                                   (int)*(short *)(**(int **)(param_1 + 0x24) + 0x128)),
     piVar1 != param_2)) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x180),param_2);
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x1c8),param_2);
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x4d0) + (int)param_2);
  }
  return;
}

/* Address: 0x1010bcb4 Size: 192 bytes */
void FUN_1010bcb4(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (piVar1 = (int *)ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                                   (int)*(short *)(**(int **)(param_1 + 0x24) + 0x130)),
     piVar1 != param_2)) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x180),param_2);
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x1d0),param_2);
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x4d0) + (int)param_2);
  }
  return;
}

/* Address: 0x1010bd74 Size: 168 bytes */
void FUN_1010bd74(long long param_1)

{
  int *piVar1;
  int iVar2;
  char auStack_140 [320];
  
  FUN_1010556c(auStack_140,param_1);
  piVar1 = (int *)FUN_10105660(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 800));
    piVar1 = (int *)FUN_10105684(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_101055f4(auStack_140,2);
  return;
}






















































































/* Address: 0x1010be1c Size: 80 bytes */
void FUN_1010be1c(long long param_1,int param_2,long long param_3)

{
  int _sStack0000001c;
  short sStack0000001c;
  short sStack0000001e;
  int local_8;
  int local_4;
  
  sStack0000001c = (short)((unsigned int)param_2 >> 0x10);
  local_8 = (int)sStack0000001c;
  sStack0000001e = (short)param_2;
  local_4 = (int)sStack0000001e;
  _sStack0000001c = param_2;
  FUN_100e10b0(param_3,&local_8,param_1 + 0x58);
  return;
}

/* Address: 0x1010be6c Size: 92 bytes */
void FUN_1010be6c(long long param_1,long long param_2,int *param_3)

{
  int local_30;
  int uStack_2c;
  int uStack_28;
  int uStack_24;
  char auStack_20 [32];
  
  FUN_100e1448(auStack_20);
  FUN_100e15a8(auStack_20,&local_30,param_1 + 0x58);
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  return;
}

/* Address: 0x1010bec8 Size: 72 bytes */
void FUN_1010bec8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x718));
  }
  return;
}

/* Address: 0x1010bf10 Size: 196 bytes */
void FUN_1010bf10(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0x180) + (int)piVar1,param_2);
    iVar2 = ResourceRead_Dispatch(param_1[9] + (int)*(short *)(*(int *)param_1[9] + 0xf0));
    if (iVar2 != 0) {
      iVar2 = DisposeObject(param_1[9]);
      param_1[9] = iVar2;
    }
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x718),param_2);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x720),0);
  return;
}

/* Address: 0x1010bfd4 Size: 140 bytes */
void FUN_1010bfd4(int *param_1,long long param_2,char param_3)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_100e10b0(&local_30,param_1 + 0xb,param_2);
  local_28 = param_1[0xb];
  local_24 = param_1[0xc];
  local_20 = local_30;
  local_1c = local_2c;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x350),&local_28,param_3);
  return;
}

/* Address: 0x1010c060 Size: 224 bytes */
void FUN_1010c060(int *param_1,long long param_2)

{
  int iVar1;
  int uVar2;
  long long uVar3;
  char auStack_138 [8];
  char auStack_130 [276];
  int local_1c;
  
  iVar1 = iRam101177f0;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x18,auStack_138);
  FUN_100ee64c(auStack_130);
  uVar2 = local_1c;
  uVar3 = GetBitMapPtr(auStack_138);
  FUN_10003150(uVar2,uVar3);
  FUN_10002be0(param_2,local_1c,param_2);
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x18),param_2,param_2);
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),param_2,param_2);
  FUN_100ee77c(auStack_130,2);
  return;
}

/* Address: 0x1010c140 Size: 112 bytes */
void FUN_1010c140(int *param_1,char param_2)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = param_1[0xd];
  local_c = param_1[0xe];
  local_8 = param_1[0xd];
  local_4 = param_1[0xe];
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x518),&local_10,uRam10116bc0,param_2);
  return;
}

/* Address: 0x1010c1b0 Size: 216 bytes */
void FUN_1010c1b0(int *param_1,int *param_2,long long param_3,char param_4)

{
  int *puVar1;
  int *puVar2;
  int local_28 [10];
  
  if (param_1[8] != 0) {
    puVar2 = (int *)(((char*)0) + -0x28);
    puVar1 = puVar2;
    if ((((char*)0) != (char *)0x28) ||
       (puVar1 = (int *)NewPtr_Thunk(0x10), puVar1 != (int *)0x0)) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a8),puVar2);
    ResourceRead_Dispatch(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x518),puVar2,param_3,param_4);
  }
  return;
}

/* Address: 0x1010c288 Size: 76 bytes */
void FUN_1010c288(int *param_1,char param_2)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x518),uRam10116c3c,uRam10116bc0,param_2);
  return;
}

/* Address: 0x1010c2d4 Size: 168 bytes */
void FUN_1010c2d4(int *param_1,char param_2,char param_3)

{
  int local_34;
  
  if (param_2 != *(char *)((int)param_1 + 0x52)) {
    if (param_3 != '\0') {
      *(char *)((int)param_1 + 0x52) = 1;
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    ResourceRead_Dispatch(**(int **)(local_34 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_34 + -0xedc) + 0x450));
    *(char *)((int)param_1 + 0x52) = param_2;
  }
  return;
}

/* Address: 0x1010c37c Size: 220 bytes */
void FUN_1010c37c(int *param_1)

{
  int *piVar1;
  int iVar2;
  char auStack_140 [320];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x380));
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  FUN_1010556c(auStack_140,param_1);
  piVar1 = (int *)FUN_10105660(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x348));
    piVar1 = (int *)FUN_10105684(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_101055f4(auStack_140,2);
  return;
}
































































































/* Address: 0x1010c45c Size: 92 bytes */
void FUN_1010c45c(int *param_1,long long param_2)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e11a4(param_2,auStack_10);
  return;
}

/* Address: 0x1010c4b8 Size: 92 bytes */
void FUN_1010c4b8(int *param_1,long long param_2)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e1674(param_2,auStack_10);
  return;
}

/* Address: 0x1010c514 Size: 220 bytes */
void FUN_1010c514(int *param_1,long long param_2)

{
  int *piVar1;
  int *ppuVar2;
  short local_20;
  short local_1e;
  char auStack_18 [24];
  
  ppuVar2 = 0 /* TVect base */;
  FUN_100b02d0(&local_20);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x270),*(int *)(*(int*)((char*)ppuVar2 - 0x398)),
               auStack_18);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),auStack_18);
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    FUN_100e0f78(&local_20,auStack_18);
  }
  else {
    ResourceRead_Dispatch(&local_20,(int)piVar1 + (int)*(short *)(*piVar1 + 0x280),auStack_18);
  }
  FUN_10001ec0(param_2,-(long long)local_1e,-(long long)local_20);
  return;
}

/* Address: 0x1010c5f0 Size: 444 bytes */
void FUN_1010c5f0(int *param_1,long long param_2,long long param_3,char param_4)

{
  int iVar2;
  int *puVar3;
  long long uVar1;
  int *piVar4;
  int *piVar5;
  int *puVar6;
  char *puVar7;
  char *puVar8;
  int *puVar9;
  unsigned int uVar10;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  char auStack_50 [8];
  char auStack_48 [8];
  int local_40 [16];
  
  puVar6 = (int *)(((char*)0) + -0x60);
  puVar7 = ((char*)0) + -0x50;
  puVar8 = ((char*)0) + -0x48;
  puVar9 = (int *)(((char*)0) + -0x40);
  iVar2 = FUN_100e1750(param_2,param_3);
  if (iVar2 != 0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),puVar6);
    puVar3 = puVar9;
    if ((((char*)0) != (char *)0x40) ||
       (puVar3 = (int *)NewPtr_Thunk(0x10), puVar3 != (int *)0x0)) {
      *puVar3 = *puVar6;
      puVar3[1] = *(int *)(((char*)0) + -0x5c);
      puVar3[2] = *(int *)(((char*)0) + -0x58);
      puVar3[3] = *(int *)(((char*)0) + -0x54);
    }
    uVar10 = 0;
    do {
      if (*(char *)((int)param_1 + uVar10 + 0x44) == '\x01') {
        FUN_100e1a64(puVar8,param_3);
        FUN_100e1a64(puVar7,param_2);
        uVar1 = FUN_100e1580(puVar9,1);
        piVar4 = (int *)FUN_100e1088(uVar1,uVar10);
        piVar5 = (int *)FUN_100e1088(puVar8,uVar10);
        iVar2 = *piVar5;
        piVar5 = (int *)FUN_100e1088(puVar7,uVar10);
        *piVar4 = *piVar4 + (iVar2 - *piVar5);
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 2);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x390),puVar9);
    iVar2 = FUN_100e1750(puVar6,puVar9);
    if (iVar2 != 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x350),puVar9,param_4);
    }
  }
  return;
}

/* Address: 0x1010c7ac Size: 48 bytes */
int FUN_1010c7ac()

{
  long long lVar1;
  
  lVar1 = FUN_10000240();
  return lVar1 == 0;
}

/* Address: 0x1010c7e8 Size: 180 bytes */
void FUN_1010c7e8(int *param_1,long long param_2,int *param_3,long long param_4,
                 int *param_5,char param_6)

{
  int local_4c;
  char auStack_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_6 != '\0') {
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = *param_5;
    local_14 = param_5[1];
    FUN_100e19d4(&local_20);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_20,auStack_28);
    FUN_10002118((unsigned long long)*(unsigned int *)(local_4c + -0xb0) + 0xb2);
    GetBitMapPtr(auStack_28);
    FUN_100021d8();
  }
  return;
}

/* Address: 0x1010c8a8 Size: 96 bytes */
void FUN_1010c8a8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  }
  else {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
  }
  return;
}

/* Address: 0x1010c908 Size: 8 bytes */
long long FUN_1010c908()

{
  return 0;
}

/* Address: 0x1010c910 Size: 112 bytes */
int FUN_1010c910(int *param_1)

{
  int iVar1;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x688));
  if (iVar1 != 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x6a0) + (int)param_1);
  }
  return iVar1 == 0;
}

/* Address: 0x1010c984 Size: 256 bytes */
long long FUN_1010c984(int *param_1)

{
  long long uVar1;
  int *piVar2;
  int iVar3;
  char auStack_148 [328];
  
  uVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x690));
  if ((int)uVar1 != 0) {
    FUN_1010556c(auStack_148,param_1);
    piVar2 = (int *)FUN_10105660(auStack_148);
    iVar3 = FUN_100ebf44(auStack_148);
    while (iVar3 != 0) {
      uVar1 = ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x698));
      if ((int)uVar1 == 0) {
        FUN_101055f4(auStack_148,2);
        return uVar1;
      }
      piVar2 = (int *)FUN_10105684(auStack_148);
      iVar3 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return uVar1;
}






























































































































/* Address: 0x1010ca84 Size: 100 bytes */
void FUN_1010ca84(int *param_1,long long param_2)

{
  char auStack_10 [16];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_10);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x500),auStack_10);
  return;
}

/* Address: 0x1010cae8 Size: 144 bytes */
void FUN_1010cae8(int *param_1,long long param_2)

{
  int uVar1;
  long long uVar2;
  char auStack_128 [276];
  int local_14;
  
  FUN_100ee64c(auStack_128);
  uVar1 = local_14;
  uVar2 = GetBitMapPtr(param_2);
  FUN_10003150(uVar1,uVar2);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x508),local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}

/* Address: 0x1010cb78 Size: 252 bytes */
void FUN_1010cb78(int *param_1,long long param_2)

{
  int uVar1;
  int iVar3;
  long long uVar2;
  char auStack_138 [8];
  char auStack_130 [276];
  int local_1c;
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar3 != 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_1 + 0x18,auStack_138);
    FUN_100ee64c(auStack_130);
    uVar1 = local_1c;
    uVar2 = GetBitMapPtr(auStack_138);
    FUN_10003150(uVar1,uVar2);
    FUN_10002be0(param_2,local_1c,local_1c);
    iVar3 = FUN_10000060(local_1c);
    if (iVar3 == 0) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x510) + (int)param_1,local_1c);
    }
    FUN_100ee77c(auStack_130,2);
  }
  return;
}

/* Address: 0x1010cc74 Size: 72 bytes */
void FUN_1010cc74(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x510));
  }
  return;
}

/* Address: 0x1010ccbc Size: 104 bytes */
void FUN_1010ccbc(int *param_1,char param_2,char param_3)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xd8),param_2);
  if (param_3 != '\0') {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x1010cd24 Size: 84 bytes */
void FUN_1010cd24(int param_1,long long param_2,long long param_3)

{
  int uStack00000018;
  char auStack_10 [16];
  
  uStack00000018 = param_1;
  FUN_100e10f8(auStack_10,param_3,param_2 + 0x58);
  FUN_100e0f78(uStack00000018,auStack_10);
  return;
}

/* Address: 0x1010cd78 Size: 96 bytes */
void FUN_1010cd78(long long param_1,long long param_2,int *param_3)

{
  int local_28;
  int uStack_24;
  char auStack_20 [32];
  
  FUN_100e15ec(param_2,auStack_20,param_1 + 0x58);
  FUN_100e12b8(auStack_20,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  return;
}

/* Address: 0x1010cdd8 Size: 124 bytes */
void FUN_1010cdd8(int *param_1,long long param_2)

{
  if (param_1[8] != 0) {
    ResourceRead_Dispatch(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x2d8),param_2);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8),param_2);
  }
  return;
}

/* Address: 0x1010ce54 Size: 732 bytes */



unsigned int * FUN_1010ce54(int *param_1)

{
  int *puVar1;
  char *puVar2;
  int *puVar3;
  int uVar4;
  int iVar5;
  char auStack_1cc [116];
  char auStack_158 [8];
  unsigned int *local_150;
  char auStack_14c [256];
  short local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  puVar3 = puRam10117370;
  puVar2 = puRam10116c50;
  puVar1 = puRam10116c4c;
  uVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x5e8));
  local_150 = (unsigned int *)0x0;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  *puVar2 = 1;
  *puVar1 = param_1;
  FUN_10000180(auStack_1cc);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x340),auStack_1cc);
  FUN_10000198(auStack_1cc);
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = *puVar3;
  *puVar3 = auStack_14c;
  iVar5 = TrySetjmp(auStack_14c);
  if (iVar5 == 0) {
    iVar5 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar5 != 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_158);
      GetBitMapPtr(auStack_158);
      local_150 = (unsigned int *)FUN_100001b0();
      FocusObject();
      GetBitMapPtr(auStack_158);
      FUN_10002040();
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x488));
      FUN_100001c8();
      iVar5 = FUN_100b0870((unsigned long long)*local_150 + 2);
      if (iVar5 != 0) {
        EndFocus(0xffffffffffffff94);
      }
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    }
    *puVar3 = local_44;
  }
  else {
    local_150 = (unsigned int *)0x0;
    FUN_100001f8(auStack_1cc);
    *puVar2 = 0;
    *puVar1 = 0;
    FUN_10000198(uVar4);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x340),uVar4);
    FUN_100db158(local_4c,local_48);
  }
  FUN_100001f8(auStack_1cc);
  *puVar2 = 0;
  *puVar1 = 0;
  FUN_10000198(uVar4);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x340),uVar4);
  return local_150;
}

/* Address: 0x1010d160 Size: 272 bytes */

void FUN_1010d160(int *param_1)

{
  int *puVar1;
  int iVar2;
  int uVar3;
  int local_154;
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
  iVar2 = TrySetjmp(auStack_12c);
  if (iVar2 == 0) {
    uVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x6b0));
    FocusObject();
    ResourceRead_Dispatch(**(int **)(local_154 + -0xeac) +
                 (int)*(short *)(*(int *)**(int **)(local_154 + -0xeac) + 0x1c0),0x50494354,uVar3);
    EndFocus();
    FUN_100ef548(uVar3);
    *puVar1 = local_24;
  }
  else {
    FUN_100db158(local_2c,local_28);
  }
  return;
}

/* Address: 0x1010d27c Size: 124 bytes */
void FUN_1010d27c(long long param_1,char param_2,char param_3)

{
  long long uVar1;
  long long unaff_r31;
  
  uVar1 = 10;
  if ((int)param_2 + (int)param_3 == 5) {
    unaff_r31 = (unsigned long long)gProgressCounterBase + 0xba;
  }
  else if (param_2 != param_3) {
    unaff_r31 = (unsigned long long)gProgressCounterBase + 0xb2;
  }
  if ((int)param_2 + (int)param_3 == 6) {
    uVar1 = 0xe;
  }
  FUN_10002130(uVar1);
  FUN_10002118(unaff_r31);
  return;
}

/* Address: 0x1010d2f8 Size: 940 bytes */
void FUN_1010d2f8(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *ppuVar4;
  int *piVar5;
  char *puVar6;
  int iVar7;
  short sVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *puVar13;
  char *puVar14;
  char *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *puVar19;
  unsigned int *puVar20;
  char *puVar21;
  int local_254;
  int local_230;
  int iStack_22c;
  char local_228 [8];
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int local_210 [4];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  char auStack_1f0 [16];
  char auStack_1e0 [16];
  char auStack_1d0 [8];
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8 [2];
  int local_1b0 [2];
  int local_1a8;
  int local_1a0 [4];
  unsigned int local_190;
  int local_18c;
  char auStack_188 [312];
  char auStack_50 [80];
  int iVar3;
  
  ppuVar4 = 0 /* TVect base */;
  piVar9 = (int *)(((char*)0) + -0x230);
  piVar10 = (int *)(((char*)0) + -0x220);
  piVar11 = (int *)(((char*)0) + -0x210);
  piVar12 = (int *)(((char*)0) + -0x200);
  puVar13 = ((char*)0) + -0x1f0;
  puVar14 = ((char*)0) + -0x1e0;
  puVar15 = ((char*)0) + -0x1d0;
  piVar16 = (int *)(((char*)0) + -0x1c8);
  piVar17 = (int *)(((char*)0) + -0x1b8);
  piVar18 = (int *)(((char*)0) + -0x1b0);
  puVar19 = (int *)(((char*)0) + -0x1a0);
  puVar20 = (unsigned int *)(((char*)0) + -400);
  puVar21 = ((char*)0) + -0x188;
  iVar7 = param_1[0x17];
  *piVar9 = param_1[0x16];
  *(int *)(((char*)0) + -0x22c) = iVar7;
  piVar5 = piVar11;
  if ((((char*)0) != (char *)0x210) ||
     (ppuVar4 = 0 /* TVect base */, piVar5 = (int *)NewPtr_Thunk(0x10), piVar5 != (int *)0x0)) {
    *piVar5 = param_1[0x18];
    piVar5[1] = param_1[0x19];
    piVar5[2] = param_1[0x1a];
    piVar5[3] = param_1[0x1b];
  }
  if (param_1[8] == 0) {
    iVar7 = *(int *)((int)(*(int*)((char*)ppuVar4 - 0x338)) + 4);
    param_1[0x16] = *(int *)(*(int*)((char*)ppuVar4 - 0x338));
    param_1[0x17] = iVar7;
    param_1[0x15] = *(int *)(*(int*)((char*)ppuVar4 - 0x398));
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),piVar16);
    iVar7 = *(int *)(((char*)0) + -0x1c4);
    iVar2 = *(int *)(((char*)0) + -0x1c0);
    iVar3 = *(int *)(((char*)0) + -0x1bc);
    param_1[0x18] = *piVar16;
    param_1[0x19] = iVar7;
    param_1[0x1a] = iVar2;
    param_1[0x1b] = iVar3;
  }
  else {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x290) + (int)param_1,puVar15);
    *piVar18 = (int)*(short *)(param_1[8] + 0x54);
    puVar6 = ((char*)0) + -0x50;
    FUN_100e10b0(puVar6,(unsigned long long)(unsigned int)param_1[8] + 0x58,piVar18);
    FUN_100e10f8(puVar20,puVar6,puVar15);
    iVar7 = *(int *)(((char*)0) + -0x18c);
    param_1[0x16] = *puVar20;
    param_1[0x17] = iVar7;
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x600) + (int)param_1,puVar14);
    *puVar19 = 0xffff8ad0;
    iVar7 = FUN_100e1af8(puVar19,puVar14);
    if (iVar7 == 0) {
      uVar1 = *puVar20;
      sVar8 = (short)uVar1 -
              (short)(((long long)((int)uVar1 >> 10) +
                       (unsigned long long)((int)uVar1 < 0 && (uVar1 & 0x3ff) != 0) & 0xffffffff) << 10);
      local_1a8 = CONCAT22(sVar8,((short)local_1a8));
      *piVar17 = (int)sVar8;
      FUN_100e10f8(param_1 + 0x16,puVar20,piVar17);
      param_1[0x15] = local_1a8;
    }
    else {
      FUN_100e0f78(param_1 + 0x15,puVar20);
      uVar1 = (*(unsigned int **)(local_254 + -0xce0))[1];
      param_1[0x16] = **(unsigned int **)(local_254 + -0xce0);
      param_1[0x17] = uVar1;
    }
    if ((int *)**(int **)(local_254 + -0xc54) == param_1) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),piVar12);
      iVar7 = *(int *)(((char*)0) + -0x1fc);
      iVar2 = *(int *)(((char*)0) + -0x1f8);
      iVar3 = *(int *)(((char*)0) + -500);
      param_1[0x18] = *piVar12;
      param_1[0x19] = iVar7;
      param_1[0x1a] = iVar2;
      param_1[0x1b] = iVar3;
    }
    else {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),puVar13);
      FUN_100e17d8(puVar13,piVar10,(unsigned long long)(unsigned int)param_1[8] + 0x60);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),piVar10);
      iVar7 = *(int *)(((char*)0) + -0x21c);
      iVar2 = *(int *)(((char*)0) + -0x218);
      iVar3 = *(int *)(((char*)0) + -0x214);
      param_1[0x18] = *piVar10;
      param_1[0x19] = iVar7;
      param_1[0x1a] = iVar2;
      param_1[0x1b] = iVar3;
    }
  }
  iVar7 = FUN_100b04bc(param_1 + 0x15,((char*)0) + -0x228);
  if (((iVar7 != 0) || (iVar7 = FUN_100e11c8(param_1 + 0x16,piVar9), iVar7 != 0)) ||
     (iVar7 = FUN_100e1750(param_1 + 0x18,piVar11), iVar7 != 0)) {
    FUN_1010556c(puVar21,param_1);
    piVar5 = (int *)FUN_10105660(puVar21);
    iVar7 = FUN_100ebf44(puVar21);
    while (iVar7 != 0) {
      ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x3e0));
      piVar5 = (int *)FUN_10105684(puVar21);
      iVar7 = FUN_100ebf44(puVar21);
    }
    FUN_101055f4(puVar21,2);
  }
  return;
}


















































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1010d76c Size: 40 bytes */
void FUN_1010d76c()

{
  FUN_1010d6b8(0);
  return;
}

/* Address: 0x1010d7a0 Size: 448 bytes */
void FUN_1010d7a0(int *param_1)

{
  int uVar1;
  long long uVar2;
  short uVar4;
  int iVar3;
  long long lVar5;
  int local_164;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  unsigned char local_128 [256];
  char auStack_28 [4];
  char auStack_24 [36];
  
  uVar1 = uRam10116bc0;
  FUN_10105d28(param_1);
  if (*(short *)(param_1 + 0x20) != -1) {
    if (param_1[8] != 0) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x370) + (int)param_1,uVar1,0);
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x378) + (int)param_1,
                   (unsigned long long)(unsigned int)param_1[8] + 0x34,0);
    }
    local_128[0] = 0;
    uVar2 = GetResource_Thunk(0x56696577,*(short *)(param_1 + 0x20));
    FUN_100db2a4();
    ResolveAlias(uVar2,auStack_28,auStack_24,local_128);
    lVar5 = (unsigned long long)local_128[0] + 1;
    FUN_100012d8(local_128,param_1 + 0x23,lVar5,(unsigned long long)local_128[0],lVar5);
    uVar4 = FUN_10002718(uVar2);
    *(short *)(param_1 + 99) = uVar4;
    iVar3 = ResourceRead_Dispatch(**(int **)(local_164 + -0x1e4) +
                         (int)*(short *)(*(int *)**(int **)(local_164 + -0x1e4) + 0xd0),param_1[10],
                         param_1,*(short *)(param_1 + 0x20),uVar1);
    FocusObject();
    *(char *)(param_1 + 0x11) = *(char *)(iVar3 + 0x44);
    *(char *)((int)param_1 + 0x45) = *(char *)(iVar3 + 0x45);
    FUN_100e10b0(&local_140,param_1 + 0x21,iVar3 + 0x34);
    local_138 = param_1[0x21];
    local_134 = param_1[0x22];
    local_130 = local_140;
    local_12c = local_13c;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a0),iVar3,
                 *(int *)(local_164 + -0xc64),&local_138,0);
  }
  return;
}

/* Address: 0x1010d960 Size: 248 bytes */
void FUN_1010d960(int *param_1,int *param_2)

{
  int *puVar1;
  int iVar2;
  short uVar3;
  int local_138;
  int iStack_134;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  FUN_1010937c(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar2 = TrySetjmp(auStack_130);
  if (iVar2 == 0) {
    uVar3 = ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x20) = uVar3;
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x118) + (int)param_2,&local_138);
    param_1[0x21] = local_138;
    param_1[0x22] = iStack_134;
    *puVar1 = local_28;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: 0x1010da58 Size: 132 bytes */
void FUN_1010da58(int param_1,int *param_2)

{
  int local_18;
  int uStack_14;
  
  FUN_101097e8(param_1,param_2);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x80));
  local_18 = *(int *)(param_1 + 0x84);
  uStack_14 = *(int *)(param_1 + 0x88);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),&local_18);
  return;
}

/* Address: 0x1010dadc Size: 244 bytes */
void FUN_1010dadc(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  unsigned long long uVar3;
  long long uVar4;
  unsigned long long uVar5;
  int local_13c;
  
  uVar5 = ZEXT48(((char*)0)) - 0x118;
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),0);
  if (*(short *)(param_1 + 0x80) != -1) {
    uVar3 = uVar5;
    if (((uVar5 & 0xffffffff) != 0) ||
       (iVar2 = local_13c, uVar3 = NewPtr_Thunk(0x100), (uVar3 & 0xffffffff) != 0)) {
      FUN_100012d8((unsigned char *)(param_1 + 0x8c),uVar3,(unsigned long long)*(unsigned char *)(param_1 + 0x8c) + 1);
      iVar2 = local_13c;
    }
    piVar1 = (int *)**(int **)(iVar2 + -0x1e4);
    iVar2 = *piVar1;
    uVar4 = ResourceRead_Dispatch((int)*(int **)(param_1 + 0x24) +
                         (int)*(short *)(**(int **)(param_1 + 0x24) + 0x128));
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(iVar2 + 0xe8),uVar4,*(short *)(param_1 + 0x80),
                 uVar5,*(short *)(param_1 + 0x18c));
  }
  return;
}

/* Address: 0x1010dbd0 Size: 456 bytes */
void FUN_1010dbd0(int *param_1,long long param_2,long long param_3,int *param_4,
                 char param_5)

{
  int *puVar1;
  int iVar2;
  int *piVar3;
  char *puVar4;
  int *puVar5;
  int local_5c;
  char auStack_38 [16];
  int local_28 [10];
  
  puVar4 = ((char*)0) + -0x38;
  puVar5 = (int *)(((char*)0) + -0x28);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),puVar4);
  puVar1 = puVar5;
  if ((((char*)0) != (char *)0x28) ||
     (puVar1 = (int *)NewPtr_Thunk(0x10), puVar1 != (int *)0x0)) {
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
  }
  FUN_100e1630(puVar5,param_1 + 0xb);
  iVar2 = FUN_100e1750(puVar5,puVar4);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_100e1580(puVar5,0);
    iVar2 = piVar3[1];
    param_1[0xb] = *piVar3;
    param_1[0xc] = iVar2;
    FUN_100e1a64(param_1 + 0xd,puVar5);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
    ResourceRead_Dispatch(**(int **)(local_5c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_5c + -0xedc) + 0x450));
    if (param_5 != '\0') {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x358),puVar4,puVar5);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x360),puVar4,puVar5,param_5);
    piVar3 = (int *)param_1[8];
    if (piVar3 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x3a0),param_1,puVar4,puVar5,param_5);
    }
  }
  return;
}

/* Address: 0x1010dd98 Size: 104 bytes */

void FUN_1010dd98()

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116c7c;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116c7c,*puRam10117300,0x80,FUN_10117304,uRam10116ad8);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x16a)),*(int *)(*(int*)((char*)ppuVar2 - 0x166)),400,(*(int*)((char*)ppuVar2 - 0x165)),uVar1);
  return;
}





























































/* Address: 0x1010de08 Size: 104 bytes */
int * FUN_1010de08(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)NewPtr_Thunk(4),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x162));
  }
  return param_1;
}

/* Address: 0x1010de70 Size: 40 bytes */
void FUN_1010de70()

{
  FUN_1010de08(0);
  return;
}

/* Address: 0x1010de98 Size: 60 bytes */
void FUN_1010de98(long long param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100f5274(param_1);
  *(int *)(*(int*)((char*)ppuVar1 - 0x79)) = (int)param_1;
  return;
}

/* Address: 0x1010ded4 Size: 48 bytes */
void FUN_1010ded4()

{
  *puRam101176bc = 0;
  FUN_100f5108();
  return;
}

/* Address: 0x1010df04 Size: 372 bytes */
int * FUN_1010df04(int *param_1,short param_2,char param_3,char param_4,
                  long long param_5,long long param_6,long long param_7,short param_8)

{
  int *puVar1;
  long long uVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  char in_stack_0000003b;
  int local_174;
  int local_150;
  int uStack_14c;
  int *local_148;
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar1 = puRam10117370;
  local_148 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xc0),param_2,param_5);
  uVar2 = FUN_100b057c(local_148 + 0x24,0);
  psVar3 = (short *)FUN_100b0388(uVar2,in_stack_0000003b);
  *psVar3 = *psVar3 + param_8;
  ResourceRead_Dispatch((int)local_148 + (int)*(short *)(*local_148 + 0x2e0),param_7);
  local_150 = **(int **)(local_174 + -0xce0);
  uStack_14c = (*(int **)(local_174 + -0xce0))[1];
  piVar4 = (int *)FUN_100e1088(&local_150,in_stack_0000003b);
  *piVar4 = (int)param_8;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = *puVar1;
  *puVar1 = auStack_144;
  iVar5 = TrySetjmp(auStack_144);
  if (iVar5 == 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0xb8) + (int)param_1,local_148,param_6,param_3,param_4,
                 &local_150);
    *puVar1 = local_3c;
  }
  else {
    local_148 = (int *)DisposeObject(local_148);
    FUN_100db158(local_44,local_40);
  }
  return local_148;
}

/* Address: 0x1010e078 Size: 248 bytes */
int
FUN_1010e078(int *param_1,short param_2,char param_3,char param_4,
            long long param_5,long long param_6)

{
  int *puVar1;
  int iVar2;
  int local_15c;
  int local_138;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  local_138 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xc0),param_2,param_5);
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puVar1;
  *puVar1 = auStack_134;
  iVar2 = TrySetjmp(auStack_134);
  if (iVar2 == 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0xb8) + (int)param_1,local_138,param_6,param_3,param_4,
                 *(int *)(local_15c + -0xce0));
    *puVar1 = local_2c;
  }
  else {
    local_138 = DisposeObject(local_138);
    FUN_100db158(local_34,local_30);
  }
  return local_138;
}

/* Address: 0x1010e170 Size: 508 bytes */
void FUN_1010e170(long long param_1,int *param_2,long long param_3,char param_4,char param_5,
                 long long param_6)

{
  int *piVar1;
  int *ppuVar2;
  int *piVar3;
  int *piVar4;
  short local_54;
  short local_52;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  piVar1 = piRam10116c3c;
  ppuVar2 = 0 /* TVect base */;
  piVar3 = &local_44;
  piVar4 = (int *)0x0;
  if ((param_4 == '\0') && (param_5 == '\0')) goto LAB_1010e2ac;
  if ((((char*)0) != (char *)0x44) ||
     (ppuVar2 = 0 /* TVect base */, piVar3 = (int *)NewPtr_Thunk(0x10), piVar3 != (int *)0x0)) {
    *piVar3 = *piVar1;
    piVar3[1] = piVar1[1];
    piVar3[2] = piVar1[2];
    piVar3[3] = piVar1[3];
  }
  local_34 = param_2[0xd];
  local_30 = param_2[0xe];
  FUN_100e11a4(&local_34,param_6);
  if (param_4 == '\0') {
LAB_1010e240:
    if (param_5 != '\0') goto LAB_1010e248;
  }
  else {
    local_34 = local_34 + -0xf;
    if (param_5 == '\0') {
      local_38 = -0xf;
      goto LAB_1010e240;
    }
LAB_1010e248:
    local_30 = local_30 + -0xf;
    if (param_4 == '\0') {
      local_3c = -0xf;
    }
  }
  piVar4 = (int *)FUN_100f6b8c(0);
  FUN_100f6c9c(piVar4,param_2,param_6,&local_34,1,1,(*(int*)((char*)ppuVar2 - 0x338)),param_4);
  piVar4[0x2b] = local_44;
  piVar4[0x2c] = local_40;
  piVar4[0x2d] = local_3c;
  piVar4[0x2e] = local_38;
LAB_1010e2ac:
  if (piVar4 == (int *)0x0) {
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x2e0),param_3);
  }
  else {
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x2e0),param_3);
  }
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x760),param_3);
  FUN_100b08d4(&local_54,(unsigned long long)(unsigned int)param_2[0x20] + 0x10);
  local_4c = (int)local_54;
  local_48 = (int)local_52;
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x378),&local_4c,0);
  return;
}

/* Address: 0x1010e36c Size: 284 bytes */
long long FUN_1010e36c(long long param_1,short param_2,long long param_3)

{
  int *puVar1;
  int iVar2;
  long long uVar3;
  char local_140;
  char local_13f [3];
  int local_13c;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = puRam10117370;
  local_13c = ResourceRead_Dispatch(*gAppObject + (int)*(short *)(*(int *)*gAppObject + 0x3d8),0,
                           param_2,local_13f,&local_140);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puVar1;
  *puVar1 = auStack_138;
  iVar2 = TrySetjmp(auStack_138);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = FUN_1010f054(0);
    *puVar1 = local_30;
  }
  else {
    local_13c = FUN_100ecdec(local_13c,1);
    FUN_100db158(local_38,local_34);
  }
  return uVar3;
}

/* Address: 0x1010e488 Size: 204 bytes */
int * FUN_1010e488(int *param_1,short param_2,long long param_3)

{
  int *piVar2;
  long long uVar1;
  int *piVar3;
  
  piVar2 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_3,0,param_2,
                               uRam10116bc0);
  piVar3 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && (piVar3 = piVar2, piVar2[0x27] != 0x20202020)) {
    uVar1 = ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,piVar2[0x27]);
    if ((int)uVar1 != 0) {
      ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x760) + (int)piVar2,uVar1);
    }
  }
  return piVar3;
}

/* Address: 0x1010e554 Size: 436 bytes */

int
FUN_1010e554(int *param_1,long long param_2,long long param_3,short param_4,
            long long param_5)

{
  int *puVar1;
  int iVar2;
  int local_26c;
  char auStack_248 [256];
  int local_148;
  int *local_144;
  char auStack_140 [256];
  short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  puVar1 = puRam10117370;
  local_148 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = *puRam10117370;
  *puRam10117370 = auStack_140;
  iVar2 = TrySetjmp(auStack_140);
  if (iVar2 == 0) {
    local_144 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xf8),param_4,0);
    iVar2 = ResourceRead_Dispatch((int)local_144 + (int)*(short *)(*local_144 + 0x100));
    if (iVar2 == 0x300) {
      local_148 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0xe0) + (int)param_1,local_144,param_3,
                               param_5);
    }
    else {
      BuildPascalString(auStack_248,(unsigned long long)*(unsigned int *)(local_26c + -0x590) + 0xc);
      FUN_100db368(auStack_248);
    }
    *puVar1 = local_38;
  }
  else {
    local_144 = (int *)DisposeObject(0);
    local_148 = DisposeObject(0);
    FUN_100db158(local_40,local_3c);
  }
  DisposeObject(local_144);
  return local_148;
}

/* Address: 0x1010e708 Size: 332 bytes */
int * FUN_1010e708(long long param_1,int *param_2,int *param_3,long long param_4)

{
  int *puVar1;
  int iVar2;
  int local_164;
  char auStack_140 [8];
  int *local_138;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  local_138 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puRam10117370;
  *puRam10117370 = auStack_134;
  iVar2 = TrySetjmp(auStack_134);
  if (iVar2 == 0) {
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_138);
    if (local_138 != (int *)0x0) {
      if (param_3 != (int *)0x0) {
        ResourceRead_Dispatch((int)*(short *)(*param_3 + 0x2e0) + (int)param_3,local_138);
      }
      iVar2 = FUN_100e11c8(param_4,*(int *)(local_164 + -0xce0));
      if (iVar2 != 0) {
        FUN_100e10b0(auStack_140,local_138 + 0xb,param_4);
        ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0x370),auStack_140,0);
      }
    }
    *puVar1 = local_2c;
  }
  else {
    local_138 = (int *)DisposeObject(local_138);
    FUN_100db158(local_34,local_30);
  }
  return local_138;
}

/* Address: 0x1010e854 Size: 272 bytes */
int * FUN_1010e854(int *param_1,long long param_2,long long param_3,short param_4)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xd8),param_2,param_3,
                               param_4);
  if (piVar2 != (int *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puVar1;
    *puVar1 = auStack_128;
    iVar3 = TrySetjmp(auStack_128);
    if (iVar3 == 0) {
      ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x238) + (int)piVar2,param_2);
      *puVar1 = local_20;
    }
    else {
      ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_28,local_24);
    }
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x380));
  }
  return piVar2;
}

/* Address: 0x1010e964 Size: 640 bytes */
int * FUN_1010e964(long long param_1,short param_2,long long param_3)

{
  int *puVar1;
  int iVar2;
  int local_164;
  char auStack_140 [4];
  int *local_13c;
  int *local_138;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  if ((int)param_3 == 0) {
    param_3 = GetResource_Thunk(0x56696577,param_2);
    FUN_100db2a4(param_3);
  }
  local_13c = (int *)FUN_100fab98(0);
  FUN_100fac48(local_13c,param_3,4);
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puVar1;
  *puVar1 = auStack_134;
  iVar2 = TrySetjmp(auStack_134);
  if (iVar2 == 0) {
    iVar2 = local_164;
    local_138 = (int *)FUN_100f8d30(0);
    FUN_100f8dc8();
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(iVar2 + -0xec),0,auStack_140);
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(local_164 + -0xe8),0,auStack_140);
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(local_164 + -0xe4),0,auStack_140);
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(local_164 + -0xe0),0,auStack_140);
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(local_164 + -0xd4),0,auStack_140);
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(local_164 + -0xdc),0,auStack_140);
    ResourceRead_Dispatch((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(int **)(local_164 + -0xd8),0,auStack_140);
    *puVar1 = local_2c;
  }
  else {
    local_13c = (int *)DisposeObject(local_13c);
    FUN_100db158(local_34,local_30);
  }
  if (local_138 != (int *)0x0) {
    ResourceRead_Dispatch((int)local_13c + (int)*(short *)(*local_13c + 200),local_138);
  }
  return local_13c;
}

/* Address: 0x1010ebe4 Size: 300 bytes */
void FUN_1010ebe4(int *param_1,long long param_2,short param_3,long long param_4,
                 short param_5)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  int local_138;
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  local_138 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xf0));
  FocusObject();
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = *puVar1;
  *puVar1 = auStack_134;
  iVar3 = TrySetjmp(auStack_134);
  if (iVar3 == 0) {
    uVar2 = FUN_100b1c84(param_4);
    AddResource(local_138,0x56696577,param_3,uVar2);
    MarkChanged();
    *puVar1 = local_2c;
  }
  else {
    local_138 = ReleaseHandle_Mapgen(local_138);
    FUN_100db158(local_34,local_30);
  }
  FUN_10000dc8(local_138,param_5);
  MarkChanged();
  FUN_10000de0(local_138);
  MarkChanged();
  return;
}

/* Address: 0x1010ed10 Size: 340 bytes */
int FUN_1010ed10(int *param_1,long long param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  int *piVar4;
  int local_140;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = puRam10117370;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puRam10117370;
  *puRam10117370 = auStack_138;
  iVar3 = TrySetjmp(auStack_138);
  if (iVar3 == 0) {
    uVar2 = AllocateHandle(0x400);
    local_140 = (int)uVar2;
    piVar4 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0xf8),0xffffffffffffffff,
                                 uVar2);
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 400),0x300);
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x1f8),param_2,1);
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x90));
    *puVar1 = local_30;
  }
  else {
    DisposeObject(0);
    local_140 = ReleaseHandle_Mapgen(0);
    FUN_100db158(local_38,local_34);
  }
  return local_140;
}

/* Address: 0x1010ee64 Size: 60 bytes */
void FUN_1010ee64()

{
  FUN_100c1c8c(uRam10117314,*puRam1011731c,4,uRam10117320,uRam10116938);
  return;
}

/* Address: 0x1010eea0 Size: 108 bytes */
int * FUN_1010eea0()

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_100eecf8();
  if (*piVar1 == 0) {
    HLock_Thunk_Sound(piVar1);
    iVar2 = FUN_10000678();
    if (iVar2 != 0) {
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

/* Address: 0x1010ef14 Size: 112 bytes */
int * FUN_1010ef14(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)NewPtr_Thunk(0x34),
     param_1 != (int *)0x0)) {
    ConstructCommand(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x15d));
    param_1[0xc] = 0;
  }
  return param_1;
}

/* Address: 0x1010ef84 Size: 40 bytes */
void FUN_1010ef84()

{
  FUN_1010ef14(0);
  return;
}

/* Address: 0x1010efac Size: 80 bytes */
void FUN_1010efac(int param_1,long long param_2,int param_3)

{
  InitCommand(param_1,param_2,*puRam101169c4,0,0,0);
  *(int *)(param_1 + 0x30) = param_3;
  return;
}

/* Address: 0x1010effc Size: 72 bytes */
void FUN_1010effc(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    ResourceRead_Dispatch((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x740));
  }
  return;
}

/* Address: 0x1010f1ac Size: 40 bytes */
void FUN_1010f1ac()

{
  FUN_1010f054(0);
  return;
}

/* Address: 0x1010f1d4 Size: 180 bytes */
void FUN_1010f1d4(int param_1)

{
  int *piVar1;
  int iVar2;
  long long uVar3;
  long long lVar4;
  int local_18;
  int local_14;
  
  piVar1 = piRam10117334;
  if (*piRam10117334 == 0) {
    uVar3 = FUN_100d7adc(0);
    *piVar1 = (int)uVar3;
    FUN_100d7ba0(uVar3,0,8);
  }
  local_14 = *(int *)(param_1 + 0x80);
  piVar1 = (int *)*piVar1;
  iVar2 = *piVar1;
  local_18 = param_1;
  lVar4 = ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(iVar2 + 0xa8),local_14,iVar2,
                       *(int *)(iVar2 + 0xac));
  ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(iVar2 + 0xb8),lVar4 + 1,&local_18,1);
  return;
}

/* Address: 0x1010f288 Size: 988 bytes */
void FUN_1010f288(int *param_1,int *param_2,long long param_3,char param_4,char param_5)

{
  int *puVar1;
  int *puVar3;
  int iVar4;
  short uVar7;
  long long uVar2;
  int *puVar5;
  int iVar6;
  unsigned int in_stack_00000020;
  char in_stack_0000002f;
  int local_3c4;
  short local_3a0;
  short local_39e;
  int local_39c;
  short local_398;
  short local_396;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  unsigned char local_378 [256];
  char auStack_278 [256];
  short local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  char auStack_160 [256];
  short local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  
  puVar1 = puRam10117370;
  FUN_10000660(&local_39c);
  puVar3 = (int *)FUN_100b057c((unsigned long long)in_stack_00000020 + 0x10,0);
  local_380 = *puVar3;
  FUN_10000198(in_stack_00000020);
  FUN_100b0384(&local_380);
  FUN_10002fd0();
  FUN_100b08d4(&local_398,(unsigned long long)in_stack_00000020 + 0x10);
  local_388 = (int)local_398;
  local_384 = (int)local_396;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  local_58 = *puVar1;
  *puVar1 = auStack_160;
  iVar4 = TrySetjmp(auStack_160);
  if (iVar4 == 0) {
    local_390 = (int)((short)((unsigned int)local_380 >> 16));
    local_38c = (int)((short)local_380);
    FUN_10105b08(param_1,param_2,0,&local_390,&local_388,4,4);
    *puVar1 = local_58;
  }
  else {
    FUN_10000198(local_39c);
    in_stack_00000020 = FUN_100ecdec(in_stack_00000020,in_stack_0000002f);
    FUN_100db158(local_60,local_5c);
  }
  param_1[0x20] = in_stack_00000020;
  *(char *)(param_1 + 0x2a) = in_stack_0000002f;
  uVar7 = FUN_100efbf0(in_stack_00000020);
  *(short *)(param_1 + 0x21) = uVar7;
  *(char *)((int)param_1 + 0xa5) = param_4;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_170 = *puVar1;
  *puVar1 = auStack_278;
  iVar4 = TrySetjmp(auStack_278);
  if (iVar4 == 0) {
    if (param_4 != '\0') {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,
                   **(int **)(local_3c4 + -0xdc),0x7f,0);
    }
    *(char *)((int)param_1 + 0xa6) = param_5;
    iVar4 = (int)param_1 + (int)*(short *)(*param_1 + 0x7f0);
    uVar2 = ResourceRead_Dispatch(iVar4,1);
    ResourceRead_Dispatch(iVar4,uVar2);
    iVar4 = *param_1;
    puVar3 = (int *)FUN_100b057c(param_1 + 0x24,1);
    puVar5 = (int *)FUN_100b057c(param_1 + 0x24,0);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar4 + 0x7c8),*puVar5,*puVar3);
    local_378[0] = 0;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x790),local_378);
    iVar4 = local_3c4;
    iVar6 = FUN_100ee320(local_378,&local_39e,&local_3a0);
    if (iVar6 != 0) {
      uVar2 = FUN_100b1c84(local_378);
      FUN_10002478(param_1[0x20],uVar2);
      iVar4 = local_3c4;
    }
    *(short *)(param_1 + 0x28) = local_39e;
    *(short *)((int)param_1 + 0xa2) = local_3a0;
    if (param_2 != (int *)0x0) {
      ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x310),local_378);
      iVar4 = local_3c4;
      if (-1 < (long long)
               (((unsigned long long)local_378[0] - 1) + (unsigned long long)((unsigned long long)local_378[0] != 0) << 0x20))
      {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x798) + (int)param_1,local_378);
      }
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),**(int **)(iVar4 + -0xe4),0
                 ,0);
    FUN_1010f1d4(param_1);
    *puVar1 = local_170;
  }
  else {
    FUN_10000198(local_39c);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_178,local_174);
  }
  return;
}






























































































































































































































































































































































































































































































































































































































/* Address: 0x1010f698 Size: 564 bytes */
int * FUN_1010f698(int *param_1)

{
  int uVar1;
  int *puVar2;
  int *piVar6;
  char uVar9;
  int iVar7;
  short *puVar8;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  short *puVar10;
  char *puVar11;
  long long uVar12;
  char *puVar13;
  short local_250 [4];
  char local_248 [264];
  char auStack_140 [320];
  
  puVar2 = puRam10117370;
  puVar10 = (short *)(((char*)0) + -0x250);
  puVar11 = ((char*)0) + -0x248;
  puVar13 = ((char*)0) + -0x140;
  piVar6 = (int *)FUN_10105d2c(param_1);
  if (piVar6[0x20] != 0) {
    uVar9 = FUN_100f1574(0);
    piVar6[0x20] = 0;
    uVar1 = *puVar2;
    *puVar2 = puVar13;
    iVar7 = TrySetjmp(puVar13);
    if (iVar7 == 0) {
      iVar7 = **(int **)(param_1[0x20] + 0x72);
      puVar8 = puVar10;
      if ((((char*)0) != (char *)0x250) ||
         (puVar8 = (short *)NewPtr_Thunk(8), puVar8 != (short *)0x0)) {
        *puVar8 = *(short *)(iVar7 + 2);
        puVar8[1] = *(short *)(iVar7 + 4);
        puVar8[2] = *(short *)(iVar7 + 6);
        puVar8[3] = *(short *)(iVar7 + 8);
      }
      iVar7 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x818));
      if (iVar7 == 0) {
        uVar12 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x730));
      }
      else {
        uVar12 = 0xffffffffffffffff;
      }
      *puVar11 = 0;
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x790),puVar11);
      uVar3 = FUN_10000be8(param_1[0x20]);
      uVar4 = FUN_100b1c84(puVar11);
      uVar5 = GetBitMapPtr(puVar10);
      iVar7 = FUN_10001680(0,uVar5,uVar4,0,*(short *)(param_1 + 0x21),uVar12,
                           *(char *)((int)param_1 + 0xa6),uVar3);
      piVar6[0x20] = iVar7;
      FocusObject();
      FUN_100f1574(uVar9);
      *puVar2 = uVar1;
    }
    else {
      ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x90));
      FUN_100f1574(uVar9);
      FUN_100db158(0,0);
    }
  }
  return piVar6;
}

/* Address: 0x1010f8cc Size: 196 bytes */
void FUN_1010f8cc(int *param_1)

{
  int *puVar2;
  int *puVar3;
  int iVar4;
  long long uVar1;
  
  FUN_10105d28(param_1);
  iVar4 = *param_1;
  puVar2 = (int *)FUN_100b057c(param_1 + 0x24,1);
  puVar3 = (int *)FUN_100b057c(param_1 + 0x24,0);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar4 + 0x7c8),*puVar3,*puVar2);
  iVar4 = (int)param_1 + (int)*(short *)(*param_1 + 0x7f0);
  uVar1 = ResourceRead_Dispatch(iVar4,1);
  ResourceRead_Dispatch(iVar4,uVar1);
  return;
}

/* Address: 0x1010f990 Size: 296 bytes */
int FUN_1010f990(int param_1)

{
  int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *puVar5;
  int local_148 [82];
  
  piVar3 = piRam10117334;
  if (*piRam10117334 != 0) {
    FUN_100ebaf8(local_148,*piRam10117334,1);
    ResourceRead_Dispatch((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar2 = local_148[1];
    iVar4 = FUN_100ebf44(local_148);
    while (iVar4 != 0) {
      puVar5 = (int *)ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0xe0),iVar2);
      if (puVar5[1] == param_1) {
        uVar1 = *puVar5;
        FUN_100ebc68(local_148,2);
        return uVar1;
      }
      ResourceRead_Dispatch((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar2 = local_148[1];
      iVar4 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0;
}

/* Address: 0x1010fab8 Size: 132 bytes */
char FUN_1010fab8(int param_1)

{
  int iVar2;
  unsigned long long uVar1;
  char cVar3;
  
  if (param_1 == 0) {
    cVar3 = '\0';
  }
  else if (*(char *)(param_1 + 0x6e) == '\0') {
    cVar3 = '\0';
  }
  else {
    iVar2 = FUN_1010f990(param_1);
    if (iVar2 == 0) {
      uVar1 = (unsigned long long)*(short *)(param_1 + 0x6c);
      cVar3 = (-0x80 - ((0x80 < uVar1) + -0x80)) +
              (0x7f < uVar1 && (unsigned long long)(0x80 < uVar1) <= uVar1 - 0x80);
    }
    else {
      cVar3 = *(char *)(iVar2 + 0xb6);
    }
  }
  return cVar3;
}

/* Address: 0x1010fb3c Size: 188 bytes */
int FUN_1010fb3c()

{
  int iVar1;
  int iVar2;
  int uVar3;
  int local_20 [8];
  
  FUN_100ee970(local_20);
  ResourceRead_Dispatch((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  uVar3 = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_1010fab8(iVar1);
    if (iVar2 != 0) {
      uVar3 = iVar1;
    }
    ResourceRead_Dispatch((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = local_20[1];
    iVar2 = FUN_100eea60(local_20);
  }
  return uVar3;
}

/* Address: 0x1010fbf8 Size: 56 bytes */
long long FUN_1010fbf8()

{
  long long uVar1;
  
  uVar1 = FUN_1010fb3c();
  if ((int)uVar1 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

/* Address: 0x1010fc30 Size: 64 bytes */
void FUN_1010fc30(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1e0),0x646c6f67);
  return;
}

/* Address: 0x1010fc70 Size: 208 bytes */
void FUN_1010fc70(int *param_1,char param_2)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar3 == 0) {
    if (param_2 != '\0') {
      uVar1 = FUN_100f5754(0);
      uVar2 = FUN_100d568c(0);
      FUN_100f5754(uVar1);
      FUN_100d5740(uVar2,param_2,0x20202020,0x20202020);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),uVar2);
    }
  }
  else {
    *(char *)(iVar3 + 0x20) = param_2;
  }
  return;
}

/* Address: 0x1010fd40 Size: 236 bytes */
void FUN_1010fd40(int *param_1,unsigned long long param_2,unsigned long long param_3)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar3 == 0) {
    if (((param_2 & 0xffffffff) != 0x20202020) || ((param_3 & 0xffffffff) != 0x20202020)) {
      uVar1 = FUN_100f5754(0);
      uVar2 = FUN_100d568c(0);
      FUN_100f5754(uVar1);
      FUN_100d5740(uVar2,0,param_2,param_3);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),uVar2);
    }
  }
  else {
    *(int *)(iVar3 + 0x24) = (int)param_2;
    *(int *)(iVar3 + 0x28) = (int)param_3;
  }
  return;
}

/* Address: 0x1010fe2c Size: 308 bytes */
void FUN_1010fe2c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_148 [82];
  
  piVar1 = piRam10117334;
  if (*piRam10117334 != 0) {
    FUN_100ebaf8(local_148,*piRam10117334,1);
    ResourceRead_Dispatch((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar2 = local_148[1];
    iVar3 = FUN_100ebf44(local_148);
    while (iVar3 != 0) {
      piVar4 = (int *)*piVar1;
      piVar4 = (int *)ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),iVar2);
      if (param_1 == *piVar4) {
        piVar1 = (int *)*piVar1;
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 200),iVar2,1);
        FUN_100ebc68(local_148,2);
        return;
      }
      ResourceRead_Dispatch((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar2 = local_148[1];
      iVar3 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return;
}

/* Address: 0x1010ff60 Size: 176 bytes */
void FUN_1010ff60(int param_1)

{
  char uVar1;
  int uVar2;
  int *piVar3;
  int *ppuVar4;
  
  ppuVar4 = 0 /* TVect base */;
  uVar1 = *(char *)(param_1 + 0xa8);
  uVar2 = *(int *)(param_1 + 0x80);
  FUN_1010fe2c(param_1);
  *(int *)(param_1 + 0x80) = 0;
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    ResourceRead_Dispatch((int)*(int **)(*(int*)((char*)ppuVar4 - 0x3b7)) + (int)*(short *)(**(int **)(*(int*)((char*)ppuVar4 - 0x3b7)) + 0x3c8),
                 param_1);
  }
  else {
    ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x340),param_1);
  }
  FUN_10106060(param_1);
  FUN_100ecdec(uVar2,uVar1);
  return;
}

/* Address: 0x1011001c Size: 1076 bytes */
void FUN_1011001c(int *param_1,int *param_2)

{
  unsigned short uVar1;
  int uVar2;
  unsigned char *pbVar3;
  int *puVar4;
  int iVar8;
  char *puVar9;
  short uVar10;
  long long uVar5;
  long long uVar6;
  long long uVar7;
  short *puVar11;
  short *puVar12;
  char *puVar13;
  char *puVar14;
  char *puVar15;
  unsigned short *puVar16;
  int local_294;
  short local_270;
  short local_26e;
  char auStack_26c [8];
  char auStack_264 [16];
  char auStack_254 [256];
  char auStack_154 [280];
  unsigned short local_3c [30];
  
  puVar4 = puRam10117370;
  puVar11 = (short *)(((char*)0) + -0x270);
  puVar12 = (short *)(((char*)0) + -0x26e);
  puVar13 = ((char*)0) + -0x26c;
  puVar14 = ((char*)0) + -0x264;
  puVar15 = ((char*)0) + -0x254;
  puVar9 = ((char*)0) + -0x154;
  puVar16 = (unsigned short *)(((char*)0) + -0x3c);
  FUN_1010937c(param_1,param_2);
  uVar2 = *puVar4;
  *puVar4 = puVar9;
  iVar8 = TrySetjmp(puVar9);
  if (iVar8 == 0) {
    pbVar3 = *(unsigned char **)(local_294 + -0xe4c);
    puVar9 = puVar15;
    if ((((char*)0) != (char *)0x254) ||
       (puVar9 = (char *)NewPtr_Thunk(0x100), puVar9 != (char *)0x0)) {
      FUN_100012d8(pbVar3,puVar9,(unsigned long long)*pbVar3 + 1);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),puVar14);
    uVar10 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x21) = uVar10;
    iVar8 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x138));
    param_1[0x27] = iVar8;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0xe0),puVar16,2);
    uVar10 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = uVar10;
    uVar5 = ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x31) = (short)uVar5;
    if (*(short *)((int)param_1 + 0xc2) != -1) {
      FUN_100009d8(puVar15,*(short *)((int)param_1 + 0xc2),uVar5);
    }
    iVar8 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x818));
    if (iVar8 == 0) {
      uVar5 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x730));
    }
    else {
      uVar5 = 0xffffffffffffffff;
    }
    FUN_100e12b8(puVar14,puVar13);
    uVar1 = *puVar16;
    uVar6 = FUN_100b1c84(puVar15);
    uVar7 = GetBitMapPtr(puVar13);
    iVar8 = FUN_10001680(0,uVar7,uVar6,0,*(short *)(param_1 + 0x21),uVar5,
                         (int)(uVar1 & 0x8000) >> 0xf,param_1);
    param_1[0x20] = iVar8;
    *(char *)((int)param_1 + 0xa5) = (char)((int)(*puVar16 & 0x4000) >> 0xe);
    *(char *)((int)param_1 + 0xa6) = (char)((int)(*puVar16 & 0x8000) >> 0xf);
    *(char *)((int)param_1 + 0xab) = (char)((int)(*puVar16 & 0x2000) >> 0xd);
    *(char *)((int)param_1 + 0xa7) = (char)((int)(*puVar16 & 0x1000) >> 0xc);
    *(char *)(param_1 + 0x2a) = (char)((int)(*puVar16 & 0x800) >> 0xb);
    *(char *)((int)param_1 + 0xa9) = (char)((int)(*puVar16 & 0x400) >> 10);
    *(char *)((int)param_1 + 0xaa) = (char)((int)(*puVar16 & 0x200) >> 9);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x790),puVar15);
    iVar8 = FUN_100ee320(puVar15,puVar12,puVar11);
    if (iVar8 != 0) {
      uVar5 = FUN_100b1c84(puVar15);
      FUN_10002478(param_1[0x20],uVar5);
    }
    *(short *)(param_1 + 0x28) = *puVar12;
    *(short *)((int)param_1 + 0xa2) = *puVar11;
    FUN_1010f1d4(param_1);
    *puVar4 = uVar2;
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(0,0);
  }
  *(unsigned char *)(param_1 + 0x2b) = (unsigned char)(*puVar16 >> 8) & 1;
  *(char *)((int)param_1 + 0xaf) = (char)((int)(*puVar16 & 0x80) >> 7);
  *(char *)(param_1 + 0x2c) = (char)((int)(*puVar16 & 0x40) >> 6);
  *(char *)((int)param_1 + 0xad) = (char)((int)(*puVar16 & 0x10) >> 4);
  *(char *)((int)param_1 + 0xae) = (char)((int)(*puVar16 & 0x20) >> 5);
  *(char *)((int)param_1 + 0xb6) = (char)((int)(*puVar16 & 8) >> 3);
  *(char *)((int)param_1 + 0xb7) = (char)((int)(*puVar16 & 4) >> 2);
  *(char *)((int)param_1 + 0xb9) = (char)((int)(*puVar16 & 2) >> 1);
  return;
}

/* Address: 0x101104b8 Size: 508 bytes */
void FUN_101104b8(int param_1,int *param_2)

{
  unsigned short local_18 [12];
  
  FUN_101097e8(param_1,param_2);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0x84));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(int *)(param_1 + 0x9c));
  local_18[0] = (unsigned short)*(unsigned char *)(param_1 + 0xb9) << 1 |
                (unsigned short)*(unsigned char *)(param_1 + 0xb7) << 2 |
                (unsigned short)*(unsigned char *)(param_1 + 0xb6) << 3 |
                (unsigned short)*(unsigned char *)(param_1 + 0xad) << 4 |
                (unsigned short)*(unsigned char *)(param_1 + 0xae) << 5 |
                (unsigned short)*(unsigned char *)(param_1 + 0xb0) << 6 |
                (unsigned short)*(unsigned char *)(param_1 + 0xaf) << 7 |
                (unsigned short)*(unsigned char *)(param_1 + 0xac) << 8 |
                (unsigned short)*(unsigned char *)(param_1 + 0xaa) << 9 |
                (unsigned short)*(unsigned char *)(param_1 + 0xa9) << 10 |
                (unsigned short)*(unsigned char *)(param_1 + 0xa8) << 0xb |
                (unsigned short)*(unsigned char *)(param_1 + 0xa7) << 0xc |
                (unsigned short)*(unsigned char *)(param_1 + 0xab) << 0xd |
                (unsigned short)*(unsigned char *)(param_1 + 0xa5) << 0xe | (unsigned short)*(unsigned char *)(param_1 + 0xa6) << 0xf;
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x170),local_18,2);
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xc2));
  ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 400),*(short *)(param_1 + 0xc4));
  return;
}

/* Address: 0x101106b4 Size: 440 bytes */
void FUN_101106b4(int *param_1,unsigned char param_2)

{
  int *piVar1;
  unsigned long long uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_28 [10];
  
  piVar1 = gAppObject;
  uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x680));
  if (uVar2 != param_2) {
    if ((param_2 != 0) && (*(char *)((int)param_1 + 0xb6) == '\0')) {
      FUN_100ee970(local_28);
      ResourceRead_Dispatch((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
      iVar5 = local_28[1];
      iVar3 = FUN_100eea60(local_28);
      while (iVar3 != 0) {
        piVar4 = (int *)FUN_1010f990(iVar5);
        if (((piVar4 != (int *)0x0) &&
            (iVar3 = ResourceRead_Dispatch((int)*(short *)(*piVar4 + 0x680) + (int)piVar4), iVar3 != 0)) &&
           (iVar5 = FUN_1010fab8(iVar5), iVar5 == 0)) {
          return;
        }
        ResourceRead_Dispatch((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
        iVar5 = local_28[1];
        iVar3 = FUN_100eea60(local_28);
      }
    }
    FUN_101064d4(param_1,(unsigned long long)param_2);
    *(unsigned char *)(param_1 + 0x29) = param_2;
    if ((*(char *)((int)param_1 + 0xb6) == '\0') || ((int *)param_1[0x26] != param_1)) {
      if (param_2 == 0) {
        piVar1 = (int *)*piVar1;
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x338));
      }
      else {
        piVar1 = (int *)*piVar1;
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x338),param_1[0x26]);
      }
    }
    FUN_100f2204();
  }
  return;
}

/* Address: 0x1011086c Size: 500 bytes */
void FUN_1011086c(int *param_1)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  int uVar4;
  unsigned long long uVar5;
  int local_94;
  char auStack_70 [16];
  char auStack_60 [8];
  char auStack_58 [16];
  short local_48;
  short local_46;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  unsigned int local_30;
  unsigned int local_2c;
  
  *(char *)((int)param_1 + 0xb1) = 1;
  uVar5 = (unsigned long long)gProgressCounterBase;
  FUN_100b08d4(&local_48,uVar5 + 0x56);
  local_30 = (unsigned int)local_48;
  local_2c = (unsigned int)local_46;
  local_40 = 0x156;
  local_3c = 0x200;
  FUN_100e11a4(&local_30,&local_40);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_58);
  iVar3 = FUN_100e11c8(&local_30,*(int *)(local_94 + -0xce0));
  if (iVar3 == 0) {
    uVar1 = FUN_100e1580(auStack_58,1);
    FUN_100e0f78(auStack_60,uVar1);
    iVar3 = FUN_100b0914(uVar5 + 0x56,auStack_60);
    if (iVar3 != 0) {
      return;
    }
  }
  uVar1 = FUN_100024a8(0x200);
  uVar2 = FUN_100024a8((unsigned long long)local_2c + 0x200);
  uVar1 = FUN_100024c0(uVar2,uVar1);
  uVar2 = FUN_100024a8(param_1[0xe]);
  FUN_100024d8(uVar2,uVar1);
  uVar4 = FUN_10000e28();
  uVar1 = FUN_100024a8(0x156);
  uVar2 = FUN_100024a8((unsigned long long)local_30 + 0x156);
  uVar1 = FUN_100024c0(uVar2,uVar1);
  uVar2 = FUN_100024a8(param_1[0xd]);
  FUN_100024d8(uVar2,uVar1);
  local_38 = FUN_10000e28();
  local_34 = uVar4;
  FUN_100e1448(auStack_70,param_1 + 0x24);
  FUN_100e1264(&local_38,auStack_70);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x378),&local_38,1);
  return;
}

/* Address: 0x10110a68 Size: 464 bytes */
void FUN_10110a68(int *param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  long long uVar2;
  unsigned int uVar3;
  short local_50;
  short local_4e;
  short local_48;
  short local_46;
  short local_40;
  short local_3e;
  int local_38;
  int local_34;
  
  if (param_1[0x20] != 0) {
    *(char *)((int)param_1 + 0xb2) = param_2;
    *(char *)((int)param_1 + 0xb3) = param_3;
    uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),1);
    FUN_100b08d4(&local_48,(unsigned long long)**(unsigned int **)(param_1[0x20] + 0x72) + 2);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar2);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),&local_38);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),&local_40);
    FUN_100b08d4(&local_50,&local_40);
    if (param_2 != '\0') {
      uVar3 = (int)local_4e - (int)local_46;
      local_34 = (int)local_3e + (int)*(short *)(param_1 + 0x2f) +
                 ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    }
    if (param_3 != '\0') {
      if (param_4 == '\0') {
        uVar3 = (int)local_50 - (int)local_48;
        local_38 = (int)local_40 + (int)*(short *)((int)param_1 + 0xba) +
                   ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      }
      else {
        local_38 = (int)local_40 + (int)*(short *)((int)param_1 + 0xba) +
                   ((int)local_50 - (int)local_48) / 3;
      }
    }
    iVar1 = *param_1;
    uVar2 = FUN_100e1580(&local_38,0);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x370),uVar2,0);
  }
  return;
}

/* Address: 0x10110c38 Size: 84 bytes */
void FUN_10110c38(int *param_1)

{
  FUN_1010768c(param_1);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x660),0,1);
  return;
}

/* Address: 0x10110c8c Size: 100 bytes */
void FUN_10110c8c(int *param_1)

{
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x328));
  if (*(char *)((int)param_1 + 0xa7) != '\0') {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x90) + (int)param_1);
  }
  return;
}

/* Address: 0x10110cf0 Size: 144 bytes */
void FUN_10110cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[10];
  if (piVar1 == (int *)0x0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x738));
  }
  else if (*(char *)((int)param_1 + 0xa9) == '\0') {
    ResourceRead_Dispatch(param_1[10] + (int)*(short *)(*(int *)param_1[10] + 0x330),param_1);
  }
  else {
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x2c0));
  }
  return;
}

/* Address: 0x10110d80 Size: 172 bytes */
void FUN_10110d80(int *param_1,long long param_2)

{
  long long uVar1;
  long long uVar2;
  
  if ((int)param_2 == 0x1f) {
    uVar1 = FUN_100f5754(0);
    uVar2 = FUN_1010ef14(0);
    FUN_100f5754(uVar1);
    FUN_1010efac(uVar2,param_2,param_1);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar2);
  }
  else {
    FUN_100c6178(param_1,param_2);
  }
  return;
}

/* Address: 0x10110e2c Size: 100 bytes */
void FUN_10110e2c(int *param_1)

{
  int iVar1;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x820));
  if (iVar1 == 0) {
    EnableMenuItem(0x1f,*(char *)((int)param_1 + 0xa6));
    FUN_100da394(param_1);
  }
  return;
}

/* Address: 0x10110e90 Size: 112 bytes */
long long FUN_10110e90(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     ((iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0 &&
      (*(char *)((int)param_1 + 0xab) == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10110f00 Size: 112 bytes */
long long FUN_10110f00(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if ((*(char *)((int)param_1 + 0x49) == '\0') ||
     ((iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0 &&
      (*(char *)((int)param_1 + 0xab) == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10110f70 Size: 92 bytes */
long long FUN_10110f70(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if ((*(char *)((int)param_1 + 0x4a) == '\0') ||
     (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10110fcc Size: 92 bytes */
long long FUN_10110fcc(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  if ((*(char *)((int)param_1 + 0x4b) == '\0') ||
     (iVar1 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x10111028 Size: 404 bytes */
void FUN_10111028(int *param_1)

{
  int uVar1;
  int iVar4;
  long long uVar2;
  long long uVar3;
  short local_258;
  short local_256;
  char auStack_250 [8];
  char auStack_248 [276];
  int local_134;
  char auStack_130 [276];
  int local_1c;
  
  if (*(char *)((int)param_1 + 0xa5) != '\0') {
    iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar4 != 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_250);
      local_258 = 0xf;
      local_256 = 0xf;
      uVar2 = FUN_100b057c(auStack_250,1);
      uVar3 = FUN_100b057c(auStack_250,0);
      FUN_100b0408(uVar3,uVar2,&local_258);
      FUN_100ee64c(auStack_248);
      FUN_100ee64c(auStack_130);
      FUN_10001e48(local_134);
      uVar1 = local_1c;
      uVar2 = GetBitMapPtr(auStack_250);
      FUN_10003150(uVar1,uVar2);
      FUN_10002be0(local_1c,local_134,local_1c);
      iVar4 = FUN_10000060(local_1c);
      if (iVar4 == 0) {
        FUN_10001548(local_1c);
        FUN_10000030();
        FUN_10002448(param_1[0x20]);
        FUN_10001548(local_134);
      }
      FUN_100ee77c(auStack_130,2);
      FUN_100ee77c(auStack_248,2);
    }
  }
  return;
}

/* Address: 0x101111bc Size: 392 bytes */
long long FUN_101111bc(int *param_1)

{
  int uVar1;
  int iVar2;
  unsigned int uVar3;
  int local_154;
  unsigned int local_130;
  char auStack_12c [276];
  int local_18;
  
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
  if (iVar2 == 0) {
    if (param_1[0x20] == 0) {
      return 0;
    }
    uVar3 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x5e8) + (int)param_1);
    FUN_10000660(&local_130);
    if (local_130 != uVar3) {
      FUN_10000198(uVar3);
    }
    FUN_10002028(*(short *)((int)param_1 + 0x56),*(short *)(param_1 + 0x15));
    **(int **)(local_154 + -0xe30) = param_1;
    uVar1 = *(int *)(param_1[0x20] + 0x7a);
    iVar2 = FUN_10000060(uVar1);
    if (iVar2 == 0) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x2c8) + (int)param_1,uVar1);
      FUN_100ee64c(auStack_12c);
      if (*(char *)((int)param_1 + 0x86) == '\0') {
        FUN_10000108(*(int *)(uVar3 + 0x18),uVar1,local_18);
      }
      else {
        FUN_10002be0(*(int *)(uVar3 + 0x18),uVar1,local_18);
      }
      FUN_10001548(local_18);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b0),uVar1);
      FUN_100ee77c(auStack_12c,2);
    }
    else {
      FUN_10001548(*(int *)(uVar3 + 0x18));
    }
  }
  return 1;
}

/* Address: 0x1011134c Size: 300 bytes */
void FUN_1011134c(int *param_1,short *param_2)

{
  char auStack_40 [16];
  short local_30;
  short local_2e;
  short local_28;
  short local_26;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_40);
  FUN_100e12b8(auStack_40,&local_28);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),&local_20);
  local_30 = 4;
  local_2e = 4;
  FUN_100b06d4(&local_20,&local_30);
  if (local_28 < local_20) {
    *param_2 = (local_20 - local_28) + *(short *)((int)param_1 + 0xba);
  }
  else if (local_1c < local_28) {
    *param_2 = (local_1c - local_28) - *(short *)((int)param_1 + 0xba);
  }
  if (local_26 < local_1e) {
    param_2[1] = (local_1e - local_26) + *(short *)(param_1 + 0x2f);
  }
  else if (local_1a < local_26) {
    param_2[1] = (local_1a - local_22) - *(short *)(param_1 + 0x2f);
  }
  return;
}

/* Address: 0x10111478 Size: 564 bytes */
void FUN_10111478(int *param_1)

{
  int *piVar1;
  long long uVar2;
  int iVar3;
  int iVar4;
  int local_2a4;
  char auStack_280 [8];
  int local_278 [2];
  short local_270;
  short local_26e;
  int local_268;
  int local_264;
  short local_260;
  short local_25e;
  short local_25c;
  short local_25a;
  char auStack_258 [276];
  int local_144;
  char auStack_140 [276];
  int *local_2c;
  
  *(char *)((int)param_1 + 0xb5) = 1;
  FUN_100ee64c(auStack_258);
  uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),1);
  iVar4 = param_1[0x20];
  FUN_10000108(*(int *)(iVar4 + 0x72),*(int *)(iVar4 + 0x76),local_144);
  iVar3 = FUN_10000060(local_144);
  if (iVar3 != 0) {
    FUN_100005a0(*(int *)(iVar4 + 0x72),local_144);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar2);
  FUN_100ee64c(auStack_140);
  piVar1 = local_2c;
  uVar2 = FUN_100016b0();
  FUN_100005a0(uVar2,piVar1);
  FUN_100005b8(local_2c,4,4);
  FUN_10002be0(local_144,local_2c,local_2c);
  local_278[0] = **(int **)(local_2a4 + -0xe60);
  iVar4 = FUN_10000060(local_2c);
  if (iVar4 == 0) {
    iVar4 = *local_2c;
    local_260 = *(short *)(iVar4 + 2);
    local_25e = *(short *)(iVar4 + 4);
    local_25c = *(short *)(iVar4 + 6);
    local_25a = *(short *)(iVar4 + 8);
    iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 2000),&local_260);
    if (iVar4 != 0) goto LAB_10111624;
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x828),local_278);
LAB_10111624:
  FUN_100e0f78(auStack_280,param_1 + 0xb);
  FUN_100b039c(&local_270,auStack_280,local_278);
  local_268 = (int)local_270;
  local_264 = (int)local_26e;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x370),&local_268,0);
  FUN_100ee77c(auStack_140,2);
  FUN_100ee77c(auStack_258,2);
  return;
}

/* Address: 0x101116ac Size: 732 bytes */
int * FUN_101116ac(int *param_1,int *param_2)

{
  int uVar1;
  short *puVar3;
  long long uVar2;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *puVar8;
  int *puVar9;
  short *puVar10;
  char *puVar11;
  int *puVar12;
  char *puVar13;
  int iVar14;
  int local_2b0;
  int uStack_2ac;
  char auStack_2a8 [8];
  int local_2a0;
  int uStack_29c;
  short local_298 [16];
  char auStack_278 [276];
  int *local_164;
  int local_160;
  int auStack_15c [71];
  char auStack_40 [64];
  
  puVar8 = (int *)(((char*)0) + -0x2b0);
  puVar9 = (int *)(((char*)0) + -0x2a0);
  puVar10 = (short *)(((char*)0) + -0x298);
  puVar11 = ((char*)0) + -0x278;
  puVar12 = (int *)(((char*)0) + -0x160);
  puVar13 = ((char*)0) + -0x40;
  iVar14 = 0;
  puVar3 = puVar10;
  if ((((char*)0) != (char *)0x298) ||
     (puVar3 = (short *)NewPtr_Thunk(8), puVar3 != (short *)0x0)) {
    *puVar3 = *(short *)(param_1 + 0x22);
    puVar3[1] = *(short *)((int)param_1 + 0x8a);
    puVar3[2] = *(short *)(param_1 + 0x23);
    puVar3[3] = *(short *)((int)param_1 + 0x8e);
  }
  uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),1);
  uVar1 = *(int *)(**(int **)(param_1[0x20] + 0x72) + 6);
  *puVar9 = *(int *)(**(int **)(param_1[0x20] + 0x72) + 2);
  *(int *)(((char*)0) + -0x29c) = uVar1;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar2);
  piVar4 = (int *)FUN_10000e58();
  piVar5 = (int *)FUN_10001170();
  for (; piVar4 != (int *)0x0; piVar4 = (int *)FUN_10000e88(piVar4)) {
    iVar6 = FUN_100017b8(piVar4,0xd);
    if ((iVar6 != 0) && (iVar6 = FUN_100017b8(piVar4,0xf), iVar6 != 0)) {
      uVar1 = *(int *)(*piVar4 + 0x26);
      *puVar12 = *(int *)(*piVar4 + 0x22);
      *(int *)(((char*)0) + -0x15c) = uVar1;
      uVar2 = GetBitMapPtr(puVar10);
      iVar6 = FUN_10000e70(puVar12,uVar2,((char*)0) + -0x2a8);
      if (iVar6 != 0) {
        uVar2 = FUN_100b0574(puVar13);
        iVar6 = FUN_10000e70(puVar9,puVar12,uVar2);
        if (iVar6 != 0) {
          iVar6 = FUN_100b08a4(puVar13,0);
          iVar7 = FUN_100b08a4(puVar13,1);
          if (iVar14 < iVar6 * iVar7) {
            iVar14 = iVar6 * iVar7;
            piVar5 = piVar4;
          }
        }
      }
    }
  }
  piVar4 = (int *)FUN_10001170();
  if (piVar5 == piVar4) {
    FUN_100ee64c(puVar11);
    uVar1 = *(int *)(*piVar5 + 0x26);
    *puVar8 = *(int *)(*piVar5 + 0x22);
    *(int *)(((char*)0) + -0x2ac) = uVar1;
    FUN_10003150(local_164,puVar8);
    uVar2 = FUN_100016b0();
    FUN_10002be0(local_164,uVar2,local_164);
    uVar1 = *(int *)(*local_164 + 6);
    *param_2 = *(int *)(*local_164 + 2);
    param_2[1] = uVar1;
    FUN_100ee77c(puVar11,2);
  }
  else {
    uVar1 = *(int *)(*piVar5 + 0x26);
    *param_2 = *(int *)(*piVar5 + 0x22);
    param_2[1] = uVar1;
  }
  return piVar5;
}

/* Address: 0x10111a60 Size: 76 bytes */
void FUN_10111a60(int param_1,long long param_2)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_100b1d90(param_2,(unsigned long long)uRam10117324 + 0x1c);
  }
  else {
    FUN_10002460(*(int *)(param_1 + 0x80));
  }
  return;
}

/* Address: 0x10111ab0 Size: 248 bytes */
void FUN_10111ab0(int *param_1,int *param_2)

{
  int *puVar3;
  int iVar4;
  long long uVar1;
  long long uVar2;
  char auStack_28 [8];
  int local_20;
  int uStack_1c;
  char auStack_18 [24];
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_20);
  if (*(char *)((int)param_1 + 0xa6) != '\0') {
    FUN_100e0f78(auStack_28,&local_20);
    puVar3 = (int *)FUN_100b0368(auStack_18,auStack_28);
    iVar4 = FUN_10002df0(param_1[0x20],*puVar3);
    if (iVar4 != 0) {
      uVar1 = FUN_100f5754(0);
      uVar2 = FUN_1010ef14(0);
      FUN_100f5754(uVar1);
      FUN_1010efac(uVar2,0x1f,param_1);
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x208) + (int)param_1,uVar2);
    }
  }
  return;
}

/* Address: 0x10111ba8 Size: 368 bytes */
int * FUN_10111ba8(int *param_1,long long param_2,int *param_3,int param_4)

{
  int *piVar1;
  int bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int uStack00000024;
  
  piVar1 = gAppObject;
  uStack00000024 = param_4;
  piVar3 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x650),param_2);
  piVar4 = (int *)*piVar1;
  piVar4 = (int *)ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x330),0);
  piVar5 = (int *)0x1;
  bVar2 = true;
  if (piVar4 != param_1) {
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      piVar4 = (int *)FUN_10001050();
      if ((int *)param_1[0x20] == piVar4) goto LAB_10111cd4;
    }
    if ((piVar3 != (int *)0x4) ||
       (piVar4 = (int *)ResourceRead_Dispatch((int)param_3 + (int)*(short *)(*param_3 + 0xe8)),
       piVar4 == (int *)0x0)) {
      piVar4 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780));
    }
    if (piVar3 == (int *)0x3) {
      if (*(char *)((int)param_1 + 0xab) == '\0') {
        bVar2 = false;
      }
      else {
        piVar1 = (int *)*piVar1;
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x310));
        piVar4 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x650),param_2);
        piVar3 = piVar4;
      }
    }
  }
LAB_10111cd4:
  if (bVar2) {
    if (piVar3 < (int *)0x9) {
      return piVar4;
    }
  }
  else {
    piVar5 = (int *)0x0;
  }
  return piVar5;
}

/* Address: 0x10111e2c Size: 160 bytes */
long long FUN_10111e2c(int *param_1,int *param_2)

{
  int *puVar2;
  long long uVar1;
  int local_30;
  char auStack_2c [8];
  int local_24;
  int uStack_20;
  char auStack_1c [28];
  
  local_24 = *param_2;
  uStack_20 = param_2[1];
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_24);
  FUN_100e0f78(auStack_2c,&local_24);
  puVar2 = (int *)FUN_100b0368(auStack_1c,auStack_2c);
  uVar1 = FUN_100010e0(*puVar2,&local_30);
  if (local_30 != param_1[0x20]) {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x10111ecc Size: 336 bytes */
void FUN_10111ecc(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned char local_118 [280];
  
  piVar2 = gAppObject;
  local_118[0] = 0;
  FUN_101070bc(param_1,param_2);
  piVar1 = (int *)param_1[10];
  if ((piVar1 != (int *)0x0) && (param_2 != piVar1)) {
    ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0x340) + (int)piVar1,param_1);
  }
  if (param_2 == (int *)0x0) {
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x3b8),param_1);
    param_1[1] = *piVar2;
  }
  else {
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x3c8),param_1);
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x328) + (int)param_2,param_1);
    ResourceRead_Dispatch((int)*(short *)(*param_2 + 0x310) + (int)param_2,local_118);
    if (-1 < (long long)
             (((unsigned long long)local_118[0] - 1) + (unsigned long long)((unsigned long long)local_118[0] != 0) << 0x20)) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x798) + (int)param_1,local_118);
    }
    param_1[1] = (int)param_2;
  }
  return;
}

/* Address: 0x1011201c Size: 80 bytes */
char FUN_1011201c(int *param_1)

{
  int iVar1;
  char uVar2;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(char *)(iVar1 + 0x30);
  }
  return uVar2;
}

/* Address: 0x1011206c Size: 116 bytes */
void FUN_1011206c(int *param_1,long long param_2,char param_3)

{
  int *piVar1;
  
  piVar1 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (piVar1 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0x198) + (int)piVar1,param_2,param_3);
  }
  return;
}

/* Address: 0x101120e0 Size: 508 bytes */
long long FUN_101120e0(int *param_1,int *param_2)

{
  int uVar1;
  int *puVar5;
  long long uVar2;
  int iVar6;
  long long uVar3;
  long long uVar4;
  int iVar7;
  int local_50;
  int local_48;
  
  puVar5 = (int *)FUN_1010eea0(*(int *)(param_1[0x20] + 0x7e));
  if (puVar5 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_100ef9b8(puVar5);
    iVar6 = FUN_10000a98(*puVar5,0x3bb0,1);
    FocusObject(iVar6);
    *(char *)(iVar6 + 0x11) = 0;
    uVar3 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x7f0) + (int)param_1,1);
    uVar4 = FUN_100efbf0(param_1[0x20]);
    uVar1 = param_2[1];
    local_48 = CONCAT22(*(short *)(param_2 + 1),*(short *)((int)param_2 + 2));
    local_50 = CONCAT22(*(short *)param_2,*(short *)((int)param_2 + 6));
    iVar7 = FUN_10003240(iVar6,0x3bb0,uVar4,param_1[0x20],1,*param_2);
    if ((((iVar7 == 2) ||
         (iVar7 = FUN_10003240(iVar6,0x3bb0,uVar4,param_1[0x20],1,uVar1), iVar7 == 2)) ||
        (iVar7 = FUN_10003240(iVar6,0x3bb0,uVar4,param_1[0x20],1,local_48), iVar7 == 2)) ||
       (iVar7 = FUN_10003240(iVar6,0x3bb0,uVar4,param_1[0x20],1,local_50), iVar7 == 2)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    FUN_100ef5f0(iVar6);
    FUN_10001b60(puVar5,uVar2);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar3);
  }
  return uVar4;
}

/* Address: 0x10112308 Size: 200 bytes */
void FUN_10112308(int *param_1,long long param_2)

{
  int uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = iRam101177f0;
  if (((*(int *)(iRam101177f0 + 0xca) == param_1[0x20]) &&
      (iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668)), iVar3 != 0)) &&
     (iVar3 = FUN_10000060(param_2), iVar3 == 0)) {
    FUN_101159ec(param_2);
    if (*(char *)((int)param_1 + 0x86) == '\0') {
      uVar1 = *(int *)(*(int *)(iVar2 + 0xca) + 0x1c);
      FUN_10000108(uVar1,param_2,uVar1);
    }
    else {
      uVar1 = *(int *)(*(int *)(iVar2 + 0xca) + 0x1c);
      FUN_10003060(uVar1,param_2,uVar1);
    }
  }
  return;
}

/* Address: 0x101123d0 Size: 200 bytes */
void FUN_101123d0(int *param_1,long long param_2)

{
  int uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = iRam101177f0;
  if (((*(int *)(iRam101177f0 + 0xca) == param_1[0x20]) &&
      (iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668)), iVar3 != 0)) &&
     (iVar3 = FUN_10000060(param_2), iVar3 == 0)) {
    FUN_10002370(param_2);
    if (*(char *)((int)param_1 + 0x86) == '\0') {
      uVar1 = *(int *)(*(int *)(iVar2 + 0xca) + 0x1c);
      FUN_10003060(uVar1,param_2,uVar1);
    }
    else {
      uVar1 = *(int *)(*(int *)(iVar2 + 0xca) + 0x1c);
      FUN_10000108(uVar1,param_2,uVar1);
    }
  }
  return;
}

/* Address: 0x10112498 Size: 564 bytes */
long long FUN_10112498(int *param_1,char param_2)

{
  int iVar1;
  int iVar4;
  long long uVar2;
  int *puVar5;
  long long uVar3;
  char auStack_48 [8];
  char auStack_40 [8];
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  iVar1 = param_1[0x20];
  iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar4 == 0) && (iVar4 = FUN_10000060(*(int *)(iVar1 + 0x72)), iVar4 != 0)) {
    if (param_2 == '\x01') {
      puVar5 = (int *)FUN_1010eea0(*(int *)(iVar1 + 0x7e));
      if (puVar5 != (int *)0x0) {
        uVar2 = FUN_100ef9b8(puVar5);
        iVar4 = FUN_10000a98(*puVar5,0x3bb0,1);
        FocusObject();
        *(char *)(iVar4 + 0x11) = 0;
        uVar3 = FUN_100efbf0(param_1[0x20]);
        FUN_10003240(iVar4,0x3bb0,uVar3,param_1[0x20],2,0);
        FUN_100ef5f0(iVar4);
        FUN_10001b60(puVar5,uVar2);
        uVar2 = FUN_100b057c((unsigned long long)**(unsigned int **)(iVar1 + 0x72) + 2,0);
        uVar3 = FUN_100b057c((unsigned long long)**(unsigned int **)(iVar1 + 0x76) + 2,0);
        FUN_100b0408((int)param_1 + 0xba,uVar3,uVar2);
        iVar4 = **(int **)(iVar1 + 0x72);
        local_30 = *(short *)(iVar4 + 2);
        local_2e = *(short *)(iVar4 + 4);
        local_2c = *(short *)(iVar4 + 6);
        local_2a = *(short *)(iVar4 + 8);
        iVar1 = **(int **)(iVar1 + 0x76);
        local_38 = *(short *)(iVar1 + 2);
        local_36 = *(short *)(iVar1 + 4);
        local_34 = *(short *)(iVar1 + 6);
        local_32 = *(short *)(iVar1 + 8);
        FUN_100b08d4(auStack_40,&local_30);
        FUN_100b08d4(auStack_48,&local_38);
        FUN_100b0408((int)param_1 + 0xbe,auStack_40,auStack_48);
      }
    }
    uVar2 = 0;
  }
  else {
    if ((param_2 != '\x01') &&
       (iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668)), iVar4 == 0)) {
      FUN_10000138(*(int *)(iVar1 + 0x72));
      FUN_10000138(*(int *)(iVar1 + 0x76));
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x101126cc Size: 68 bytes */
void FUN_101126cc(int param_1)

{
  ResourceRead_Dispatch(*gAppObject + (int)*(short *)(*(int *)*gAppObject + 0x3d0),
               *(int *)(param_1 + 0x80));
  return;
}

/* Address: 0x10112710 Size: 172 bytes */
long long FUN_10112710(long long param_1)

{
  long long uVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_1010f990(param_1);
    if (piVar2 == (int *)0x0) {
      iVar3 = FUN_100efbf0(param_1);
      if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 == 5)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x818) + (int)piVar2);
    }
  }
  return uVar1;
}

/* Address: 0x101127bc Size: 80 bytes */
char FUN_101127bc(unsigned long long param_1)

{
  unsigned long long uVar1;
  char cVar2;
  
  if ((int)param_1 == 0) {
    cVar2 = '\0';
  }
  else {
    uVar1 = FUN_10003030();
    cVar2 = (uVar1 <= param_1 && (unsigned long long)(uVar1 < param_1) <= param_1 - uVar1) -
            (uVar1 < param_1);
  }
  return cVar2;
}

/* Address: 0x1011280c Size: 144 bytes */
long long FUN_1011280c(int param_1)

{
  long long uVar1;
  short local_110 [2];
  char local_10c [256];
  char auStack_c [12];
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_10c[0] = 0;
    ResolveAlias(*(int *)(param_1 + 0x7e),local_110,auStack_c,local_10c);
    if (((*(short *)(param_1 + 0x6c) < 0) || (local_110[0] == 0x7d)) || (local_110[0] == 0x7e)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* Address: 0x1011289c Size: 260 bytes */
int FUN_1011289c()

{
  int iVar1;
  int iVar2;
  int local_18 [6];
  
  FUN_100ee970(local_18);
  ResourceRead_Dispatch((int)*(short *)(local_18[0] + 0x10) + (int)local_18);
  iVar1 = local_18[1];
  iVar2 = FUN_100eea60(local_18);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1010fab8(iVar1);
    if ((((iVar2 == 0) && (iVar2 = FUN_101127bc(iVar1), iVar2 == 0)) &&
        (iVar2 = FUN_1011280c(iVar1), iVar2 == 0)) &&
       ((iVar2 = FUN_10112710(iVar1), iVar2 == 0 && (*(char *)(iVar1 + 0x6e) != '\0')))) break;
    ResourceRead_Dispatch((int)*(short *)(local_18[0] + 0x18) + (int)local_18);
    iVar1 = local_18[1];
    iVar2 = FUN_100eea60(local_18);
  }
  return iVar1;
}

/* Address: 0x101129a0 Size: 524 bytes */
void FUN_101129a0(int param_1,int param_2,int *param_3)

{
  int uVar1;
  int bVar2;
  int iVar6;
  short sVar8;
  int iVar7;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  int uStack0000001c;
  int local_4c;
  int local_28;
  int local_24;
  int local_20;
  int uStack_1c;
  
  uStack0000001c = param_2;
  iVar6 = FUN_10002670();
  if (iVar6 != 0) {
    sVar8 = FUN_10000f00();
    uVar1 = *param_3;
    uStack_1c = param_3[1];
    /* ((short)((unsigned int)local_20 >> 16)) = (short)((unsigned int)uVar1 >> 0x10); */
    bVar2 = ((short)((unsigned int)local_20 >> 16)) < (short)(sVar8 + 4);
    local_20 = uVar1;
    if (bVar2) {
      local_20 = CONCAT22(sVar8 + 4,(short)uVar1);
    }
    FUN_10000660(&local_24);
    FUN_10000bd0(&local_28);
    FUN_10000198(local_28);
    FUN_100016b0();
    FUN_10001548();
    iVar6 = FUN_100efb60();
    if ((iVar6 != 0) ||
       ((iVar7 = FUN_1010fab8(param_1), iVar7 == 0 && (iVar7 = FUN_10112710(param_1), iVar7 == 0))))
    {
      if (iVar6 == 0) {
        FUN_1011289c();
        FUN_10002a48();
      }
      else {
        FUN_10002a48(param_1);
      }
    }
    uVar3 = FUN_100019f8();
    FocusObject(uVar3);
    FUN_100005a0(*(int *)(param_1 + 0x72),uVar3);
    uVar4 = GetBitMapPtr(&local_20);
    uVar5 = GetBitMapPtr(&local_20);
    iVar7 = FUN_10000fc0(uVar3,uStack0000001c,uVar5,uVar4,0,0);
    FUN_10000198(local_24);
    if (iVar7 != 0) {
      sVar8 = (short)((unsigned int)iVar7 >> 0x10);
      if (sVar8 != -0x8000) {
        FUN_101159dc(param_1,*(short *)(**(int **)(param_1 + 0x76) + 4) + (short)iVar7,
                            sVar8 + *(short *)(**(int **)(param_1 + 0x76) + 2),0);
      }
    }
    if (iVar6 == 0) {
      ResourceRead_Dispatch(**(int **)(local_4c + -0xedc) +
                   (int)*(short *)(*(int *)**(int **)(local_4c + -0xedc) + 0x3d0),param_1);
    }
    FUN_10001a70(uVar3);
  }
  return;
}

/* Address: 0x10112bac Size: 352 bytes */
void FUN_10112bac(int *param_1,int *param_2)

{
  int uVar1;
  short *puVar2;
  int *puVar3;
  int iVar4;
  char *puVar5;
  short *puVar6;
  int *piVar7;
  short *psVar8;
  char auStack_50 [8];
  short local_48 [4];
  int local_40;
  int uStack_3c;
  int local_38 [2];
  short local_30 [4];
  char auStack_28 [40];
  
  puVar5 = ((char*)0) + -0x50;
  puVar6 = (short *)(((char*)0) + -0x48);
  puVar3 = (int *)(((char*)0) + -0x40);
  piVar7 = (int *)(((char*)0) + -0x38);
  psVar8 = (short *)(((char*)0) + -0x30);
  uVar1 = param_2[1];
  *puVar3 = *param_2;
  *(int *)(((char*)0) + -0x3c) = uVar1;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),puVar3);
  puVar2 = puVar6;
  if ((((char*)0) != (char *)0x48) ||
     (puVar2 = (short *)NewPtr_Thunk(8), puVar2 != (short *)0x0)) {
    *puVar2 = *(short *)(param_1 + 0x22);
    puVar2[1] = *(short *)((int)param_1 + 0x8a);
    puVar2[2] = *(short *)(param_1 + 0x23);
    puVar2[3] = *(short *)((int)param_1 + 0x8e);
  }
  FUN_100e0f78(puVar5,puVar3);
  puVar3 = (int *)FUN_100b0368(((char*)0) + -0x28,puVar5);
  FUN_101129a0(param_1[0x20],*puVar3,puVar6);
  iVar4 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar4 != 0) {
    puVar3 = (int *)FUN_100b057c((unsigned long long)(unsigned int)param_1[0x20] + 0x10,0);
    *(int *)psVar8 = *puVar3;
    FUN_100b0384(psVar8);
    FUN_10002fd0();
    *piVar7 = (int)*psVar8;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x370),piVar7,0);
  }
  return;
}

/* Address: 0x10112d0c Size: 616 bytes */
void FUN_10112d0c(int *param_1)

{
  int *piVar1;
  int iVar3;
  long long uVar2;
  int local_4c;
  short local_28;
  short local_26;
  int local_20;
  int local_18;
  int local_14;
  
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if (iVar3 == 0) {
    FUN_100b08d4(&local_28,(unsigned long long)(unsigned int)param_1[0x20] + 0x10);
    local_18 = (int)local_28;
    local_14 = (int)local_26;
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x378) + (int)param_1,&local_18,0);
    if ((*(char *)(param_1 + 0x2b) != '\0') && (*(char *)((int)param_1 + 0xb1) == '\0')) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x7a0) + (int)param_1);
    }
    if (((*(char *)((int)param_1 + 0xad) != '\0') && (*(char *)((int)param_1 + 0xb2) == '\0')) ||
       ((*(char *)((int)param_1 + 0xae) != '\0' && (*(char *)((int)param_1 + 0xb3) == '\0')))) {
      iVar3 = *param_1;
      uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar3 + 0x818));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar3 + 0x7b0),
                   *(char *)((int)param_1 + 0xad),*(char *)((int)param_1 + 0xae),uVar2);
    }
    if ((*(char *)((int)param_1 + 0xaf) != '\0') && (*(char *)(param_1 + 0x2d) == '\0')) {
      if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)((int)param_1 + 0xb5) == '\0')) {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
        *(char *)((int)param_1 + 0xb5) = 0;
      }
      local_20 = CONCAT22(0x10,((short)local_20));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),local_20,
                   *(int *)(local_4c + -0x568));
    }
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)((int)param_1 + 0xb5) == '\0')) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
    }
    iVar3 = FUN_100e1a08(param_1 + 0x18);
    if (iVar3 != 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
    }
    piVar1 = (int *)param_1[0x26];
    if (piVar1 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 400),0);
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x660),1,1);
  }
  FUN_1010bd74(param_1);
  return;
}

/* Address: 0x10112f74 Size: 436 bytes */
int FUN_10112f74(int *param_1)

{
  char cVar1;
  int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_15c;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar2 = puRam10117370;
  piVar3 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  iVar5 = 0x20202020;
  if (piVar3 == (int *)0x0) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x738));
    FUN_100b1d90(*(int *)(local_15c + -0xe2c),(unsigned long long)*(unsigned int *)(local_15c + -0x57c) + 0x20
                );
    FUN_100db158(0xffffffffffffb1d8,0);
    iVar5 = 0x20202020;
  }
  else {
    cVar1 = *(char *)(piVar3 + 8);
    if (cVar1 == '\0') {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x800) + (int)param_1,1);
    }
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = *puVar2;
    *puVar2 = auStack_138;
    iVar4 = TrySetjmp(auStack_138);
    if (iVar4 == 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 800));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x780));
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x1a0));
      iVar5 = piVar3[0xb];
      *puVar2 = local_30;
    }
    else {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x738));
      FUN_100db158(local_38,local_34);
    }
    if (cVar1 == '\0') {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x800),0);
    }
  }
  return iVar5;
}

/* Address: 0x10113128 Size: 80 bytes */
char FUN_10113128(int *param_1)

{
  int iVar1;
  char uVar2;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(char *)(iVar1 + 0x20);
  }
  return uVar2;
}

/* Address: 0x10113178 Size: 116 bytes */
long long FUN_10113178(int *param_1)

{
  int iVar1;
  long long uVar2;
  
  iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((*(char *)(iVar1 + 0x20) == '\0') || (*(char *)(iVar1 + 0x30) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

/* Address: 0x101131ec Size: 160 bytes */
void FUN_101131ec(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = gAppObject;
  iVar2 = ResourceRead_Dispatch(*gAppObject + (int)*(short *)(*(int *)*gAppObject + 0x340));
  do {
    if (iVar2 == 0) {
LAB_10113250:
      iVar2 = *(int *)(param_1 + 0x98);
      while( true ) {
        if (iVar2 == 0) {
          return;
        }
        if (param_2 == iVar2) break;
        iVar2 = *(int *)(iVar2 + 4);
      }
      *(int *)(param_1 + 0x98) = param_1;
      return;
    }
    if (param_2 == iVar2) {
      *(int *)(*piVar1 + 0x6c) = param_1;
      goto LAB_10113250;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

/* Address: 0x1011328c Size: 832 bytes */
void FUN_1011328c(int *param_1,long long param_2,char param_3)

{
  int uVar1;
  int iVar3;
  long long uVar2;
  int *puVar4;
  char auStack_b8 [16];
  char auStack_a8 [16];
  char auStack_98 [8];
  char local_90 [2];
  short uStack_8e;
  char auStack_88 [6];
  short uStack_82;
  char auStack_80 [8];
  char local_78 [2];
  short uStack_76;
  char auStack_70 [6];
  short uStack_6a;
  char auStack_68 [8];
  char auStack_60 [8];
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  if (param_1[0x20] != 0) {
    FUN_100e1a64(auStack_60,param_2);
    iVar3 = FUN_100e1230(auStack_60,param_1 + 0xd);
    if (iVar3 == 0) {
      uVar2 = FUN_100e1594(param_2,0);
      iVar3 = FUN_100e11c8(uVar2,param_1 + 0xb);
      if (iVar3 != 0) {
        puVar4 = (int *)FUN_100e1594(param_2,0);
        uVar1 = *puVar4;
        iVar3 = FUN_100e1594(param_2,0);
        FUN_101159dc(param_1[0x20],(short)*(int *)(iVar3 + 4),(short)uVar1,0);
      }
      FUN_100e1a64(auStack_80,param_2);
      iVar3 = FUN_100e11c8(auStack_80,param_1 + 0xd);
      if (iVar3 != 0) {
        FUN_100e1a64(auStack_88,param_2);
        FUN_100e1a64(local_90,param_2);
        FUN_10002bf8(param_1[0x20],uStack_82,uStack_8e,param_3);
      }
    }
    else {
      FUN_100e1a64(auStack_68,param_2);
      iVar3 = FUN_100e11c8(auStack_68,param_1 + 0xd);
      if (iVar3 != 0) {
        FUN_100e1a64(auStack_70,param_2);
        FUN_100e1a64(local_78,param_2);
        FUN_10002bf8(param_1[0x20],uStack_6a,uStack_76,param_3);
      }
      uVar2 = FUN_100e1594(param_2,0);
      iVar3 = FUN_100e11c8(uVar2,param_1 + 0xb);
      if (iVar3 != 0) {
        puVar4 = (int *)FUN_100e1594(param_2,0);
        uVar1 = *puVar4;
        iVar3 = FUN_100e1594(param_2,0);
        FUN_101159dc(param_1[0x20],(short)*(int *)(iVar3 + 4),(short)uVar1,0);
      }
    }
  }
  local_58 = param_1[0xd];
  iStack_54 = param_1[0xe];
  local_50 = 0xfffffff1;
  local_4c = 0xfffffff1;
  local_48 = 0;
  local_44 = 0;
  if ((*(char *)((int)param_1 + 0xa5) != '\0') && (param_3 != '\0')) {
    FUN_100e1a64(auStack_98,param_2);
    iVar3 = FUN_100e11c8(auStack_98,&local_58);
    if (iVar3 != 0) {
      FUN_100e15a8(&local_50,auStack_a8,param_1 + 0xd);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_a8);
    }
  }
  FUN_1010b818(param_1,param_2,param_3);
  if ((*(char *)((int)param_1 + 0xa5) != '\0') && (param_3 != '\0')) {
    iVar3 = FUN_100e11c8(param_1 + 0xd,&local_58);
    if (iVar3 != 0) {
      FUN_100e15a8(&local_50,auStack_b8,param_1 + 0xd);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_b8);
    }
  }
  return;
}

/* Address: 0x101135cc Size: 316 bytes */
void FUN_101135cc(int *param_1,int *param_2)

{
  int uVar1;
  short *puVar3;
  long long uVar2;
  int *puVar4;
  int iVar5;
  char *puVar6;
  short *puVar7;
  int *piVar8;
  char auStack_40 [8];
  short local_38 [4];
  int local_30;
  int uStack_2c;
  int local_28 [2];
  char auStack_20 [32];
  
  if (*(char *)((int)param_1 + 0xa5) != '\0') {
    puVar6 = ((char*)0) + -0x40;
    puVar7 = (short *)(((char*)0) + -0x38);
    puVar4 = (int *)(((char*)0) + -0x30);
    piVar8 = (int *)(((char*)0) + -0x28);
    uVar1 = param_2[1];
    *puVar4 = *param_2;
    *(int *)(((char*)0) + -0x2c) = uVar1;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),puVar4);
    puVar3 = puVar7;
    if ((((char*)0) != (char *)0x38) ||
       (puVar3 = (short *)NewPtr_Thunk(8), puVar3 != (short *)0x0)) {
      *puVar3 = *(short *)(param_1 + 0x24);
      puVar3[1] = *(short *)((int)param_1 + 0x92);
      puVar3[2] = *(short *)(param_1 + 0x25);
      puVar3[3] = *(short *)((int)param_1 + 0x96);
    }
    FUN_100e0f78(puVar6,puVar4);
    uVar2 = GetBitMapPtr(puVar7);
    puVar4 = (int *)FUN_100b0368(((char*)0) + -0x20,puVar6);
    iVar5 = FUN_10115a00(param_1[0x20],*puVar4,uVar2);
    if (iVar5 != 0) {
      *piVar8 = (int)(short)((unsigned int)iVar5 >> 0x10);
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x378),piVar8,1);
    }
  }
  return;
}

/* Address: 0x10113708 Size: 384 bytes */
void FUN_10113708(int *param_1,int param_2,int param_3)

{
  int _sStack00000020;
  int iVar1;
  long long uVar2;
  int *piVar3;
  int *piVar4;
  int iStack0000001c;
  short sStack00000020;
  short sStack00000022;
  char auStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  
  piVar4 = &local_38;
  piVar3 = &local_30;
  sStack00000020 = (short)((unsigned int)param_3 >> 0x10);
  sStack00000022 = (short)param_3;
  param_1[0x24] = param_2;
  param_1[0x25] = param_3;
  if ((*(unsigned short *)(param_1 + 0x21) & 8) != 0) {
    iVar1 = **(int **)(param_1[0x20] + 0x82);
    local_2c = (int)*(short *)(iVar1 + 0xe);
    local_30 = param_1[0xc] + (int)sStack00000022 + -1;
    if (local_2c < local_30) {
      piVar3 = &local_2c;
    }
    *(short *)(iVar1 + 0xe) = (short)*piVar3;
    local_34 = (int)*(short *)(iVar1 + 0xc);
    local_38 = param_1[0xb] + (int)sStack00000020 + -1;
    if (local_34 < local_38) {
      piVar4 = &local_34;
    }
    *(short *)(iVar1 + 0xc) = (short)*piVar4;
  }
  local_28 = param_1[0xd];
  iStack_24 = param_1[0xe];
  iStack0000001c = param_2;
  _sStack00000020 = param_3;
  local_20 = param_2;
  local_1c = param_3;
  FUN_100e1448(auStack_48,param_1 + 0x24);
  FUN_100e1264(&local_28,auStack_48);
  iVar1 = *param_1;
  uVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x670));
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(iVar1 + 0x378),&local_28,uVar2);
  return;
}

/* Address: 0x10113888 Size: 136 bytes */
void FUN_10113888(int *param_1,long long param_2,long long param_3)

{
  int iVar1;
  
  if ((int)param_2 == 0x1a) {
    iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x680));
    if (iVar1 != 0) {
      ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x760) + (int)param_1,param_3);
    }
  }
  else {
    FUN_100dafe8(param_1,param_2,param_3);
  }
  return;
}

/* Address: 0x10113910 Size: 124 bytes */
void FUN_10113910(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = param_1;
  }
  piVar1 = (int *)param_1[0x26];
  if (param_2 != piVar1) {
    ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0x168) + (int)piVar1);
    param_1[0x26] = (int)param_2;
    ResourceRead_Dispatch((int)param_2 + (int)*(short *)(*param_2 + 0x160));
  }
  return;
}

/* Address: 0x1011398c Size: 124 bytes */
void FUN_1011398c(int param_1,long long param_2)

{
  int iVar2;
  long long uVar1;
  char local_110 [272];
  
  local_110[0] = 0;
  FUN_10002460(*(int *)(param_1 + 0x80),local_110);
  iVar2 = FUN_100ef228(local_110,param_2);
  if (iVar2 != 0) {
    uVar1 = FUN_100b1c84(param_2);
    FUN_10002478(*(int *)(param_1 + 0x80),uVar1);
  }
  return;
}

/* Address: 0x10113a08 Size: 160 bytes */
void FUN_10113a08(int *param_1,long long param_2)

{
  int iVar1;
  char local_110 [272];
  
  local_110[0] = 0;
  if (0 < *(short *)(param_1 + 0x28)) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x790),local_110);
    iVar1 = FUN_100ee588(local_110,param_2,*(short *)(param_1 + 0x28),
                         *(short *)((int)param_1 + 0xa2));
    if (iVar1 != 0) {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x788),local_110);
    }
  }
  return;
}

/* Address: 0x10113aa8 Size: 160 bytes */
void FUN_10113aa8(int *param_1)

{
  char uVar1;
  int iVar2;
  
  iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar2 != 0) &&
     (iVar2 = ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x7d8) + (int)param_1), iVar2 != 0)) {
    *(char *)(param_1 + 0x2e) = 1;
    uVar1 = *(char *)((int)param_1 + 0xb9);
    *(char *)((int)param_1 + 0xb9) = 0;
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x660) + (int)param_1,0);
    *(char *)((int)param_1 + 0xb9) = uVar1;
  }
  return;
}

/* Address: 0x10113b48 Size: 112 bytes */
void FUN_10113b48(int *param_1)

{
  char uVar1;
  
  if (*(char *)(param_1 + 0x2e) != '\0') {
    *(char *)(param_1 + 0x2e) = 0;
    uVar1 = *(char *)((int)param_1 + 0xb9);
    *(char *)((int)param_1 + 0xb9) = 0;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x660),1,1);
    *(char *)((int)param_1 + 0xb9) = uVar1;
  }
  return;
}

/* Address: 0x10113bb8 Size: 160 bytes */
void FUN_10113bb8(int param_1,char param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    if (((param_2 != '\0') && (*(char *)(param_1 + 0x6f) == '\0')) ||
       ((param_2 == '\0' && (*(char *)(param_1 + 0x6f) != '\0')))) {
      FUN_10001080(param_1,param_2);
    }
    piVar1 = (int *)FUN_1010f990(param_1);
    if (piVar1 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x318),param_2);
    }
  }
  return;
}

/* Address: 0x10113c58 Size: 40 bytes */
void FUN_10113c58(long long param_1)

{
  FUN_10113bb8(param_1,0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10113c80(int param_1) { }








































































































/* Address: 0x10113f5c Size: 40 bytes */
void FUN_10113f5c(long long param_1)

{
  FUN_10113bb8(param_1,1);
  return;
}

/* Address: 0x10113f84 Size: 260 bytes */
void FUN_10113f84(int param_1)

{
  char cVar1;
  int bVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x6e) != '\0') {
    if ((*(char *)(param_1 + 0x6f) == '\0') || (iVar3 = FUN_1010fab8(param_1), iVar3 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    FUN_10113c58(param_1);
    FUN_10002dd8(param_1,0);
    if (bVar2) {
      iVar3 = FUN_10001050();
      if (iVar3 != 0) {
        iVar4 = FUN_1010fab8(iVar3);
        if (iVar4 != 0) goto LAB_10114034;
        cVar1 = *(char *)(iVar3 + 0x6e);
        while (cVar1 == '\0') {
LAB_10114034:
          do {
            iVar3 = *(int *)(iVar3 + 0x90);
            if (iVar3 == 0) goto LAB_10114060;
            iVar4 = FUN_1010fab8(iVar3);
          } while (iVar4 != 0);
          cVar1 = *(char *)(iVar3 + 0x6e);
        }
      }
LAB_10114060:
      if (iVar3 != 0) {
        FUN_10113f5c(iVar3);
      }
    }
  }
  return;
}

/* Address: 0x10114088 Size: 628 bytes */
void FUN_10114088(int *param_1,char param_2,char param_3)

{
  int bVar1;
  int bVar2;
  int bVar3;
  int iVar4;
  int iVar5;
  short local_40;
  short local_3e;
  int local_38;
  int local_34;
  int local_30 [12];
  
  if (param_2 != '\0') {
    FUN_100b08d4(&local_40,(unsigned long long)(unsigned int)param_1[0x20] + 0x10);
    local_38 = (int)local_40;
    local_34 = (int)local_3e;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x378),&local_38,param_3);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
LAB_10114148:
    FUN_10002dd8(param_1[0x20],param_2);
    if (param_2 == '\0') {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x318),0);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      FUN_10001080(param_1[0x20],param_2);
      goto LAB_10114148;
    }
    if (param_2 == '\0') {
      FUN_10113f84(param_1[0x20]);
    }
    else {
      FUN_10113c80(param_1[0x20]);
    }
  }
  if (param_2 == '\0') {
LAB_10114264:
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x318),param_2);
      goto LAB_101142d4;
    }
  }
  else if (*(char *)((int)param_1 + 0xb6) != '\0') {
    FUN_100ee970(local_30);
    ResourceRead_Dispatch((int)*(short *)(local_30[0] + 0x10) + (int)local_30,0);
    iVar5 = local_30[1];
    iVar4 = FUN_100eea60(local_30);
    bVar2 = false;
    bVar3 = false;
    while (iVar4 != 0) {
      bVar1 = bVar2;
      if (((iVar5 != param_1[0x20]) && (iVar4 = FUN_10112710(iVar5), bVar1 = bVar3, iVar4 == 0)) &&
         (iVar5 = FUN_1010fab8(iVar5), iVar5 == 0)) {
        bVar2 = true;
      }
      ResourceRead_Dispatch((int)*(short *)(local_30[0] + 0x18) + (int)local_30);
      iVar5 = local_30[1];
      iVar4 = FUN_100eea60(local_30);
      bVar3 = bVar1;
    }
    if (bVar3) {
      FUN_10003000(param_1[0x20]);
    }
    goto LAB_10114264;
  }
  if ((param_2 == '\0') &&
     (iVar5 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x680)), iVar5 != 0)) {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x318),0);
  }
LAB_101142d4:
  FUN_1010c2d4(param_1,param_2,param_3);
  return;
}

/* Address: 0x101142fc Size: 568 bytes */

void FUN_101142fc(int *param_1,short param_2,short *param_3)

{
  int _sStack0000001c;
  short *psVar3;
  long long uVar1;
  long long uVar2;
  int iVar4;
  int *piVar5;
  short sStack0000001c;
  char auStack_68 [8];
  int local_60;
  char auStack_5c [8];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char auStack_40 [8];
  int local_38;
  int local_34;
  
  piVar5 = &local_60;
  *(char *)(param_1 + 0x2d) = 1;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_40);
  psVar3 = (short *)FUN_100b057c(param_1 + 0x22,1);
  local_48 = (int)*psVar3;
  local_44 = (int)psVar3[1];
  uVar1 = FUN_100e1580(auStack_40,0);
  FUN_100e10b0(auStack_5c,uVar1,&local_48);
  uVar1 = FUN_100e1580(auStack_40,1);
  uVar2 = FUN_100e1580(auStack_40,1);
  FUN_100e10f8(uVar2,auStack_5c,uVar1);
  if (param_2 < 0) {
    local_34 = (int)*(short *)((int)param_1 + 0x8a);
  }
  if (_sStack0000001c < 0) {
    local_38 = (int)*(short *)(param_1 + 0x22);
  }
  if ((param_2 == 0) || (sStack0000001c == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_100e1a3c(auStack_40,1);
    local_54 = (iVar4 + param_2 + -1) / (int)param_2;
    iVar4 = FUN_100e1a3c(auStack_40,0);
    local_60 = (iVar4 + sStack0000001c + -1) / (int)sStack0000001c;
    if (local_54 < local_60) {
      piVar5 = &local_54;
    }
    iVar4 = (int)(short)*piVar5;
  }
  if (iVar4 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = (int)(short)(*param_3 - (short)((int)*param_3 / iVar4) * (short)iVar4);
  }
  if (local_50 != 0) {
    local_4c = local_50 * param_2;
    local_50 = local_50 * sStack0000001c;
    uVar1 = FUN_100e1580(auStack_40,0);
    FUN_100e10b0(auStack_68,uVar1,&local_50);
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x370),auStack_68,0);
  }
  *param_3 = *param_3 + 1;
  return;
}

/* Address: 0x10114534 Size: 448 bytes */
void FUN_10114534(int *param_1)

{
  int *puVar1;
  int iVar2;
  char auStack_148 [16];
  short local_138;
  short local_136;
  short local_134;
  short local_132;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar1 = puRam10117370;
  if (*(char *)((int)param_1 + 0x86) == '\0') {
    iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4c0));
    if (iVar2 != 0) {
      *(char *)((int)param_1 + 0x86) = 1;
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = *puVar1;
      *puVar1 = auStack_130;
      iVar2 = TrySetjmp(auStack_130);
      if (iVar2 == 0) {
        iVar2 = **(int **)(param_1[0x20] + 0x7a);
        local_138 = *(short *)(iVar2 + 2);
        local_136 = *(short *)(iVar2 + 4);
        local_134 = *(short *)(iVar2 + 6);
        local_132 = *(short *)(iVar2 + 8);
        FUN_100e1b4c(&local_138,auStack_148);
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),auStack_148);
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_148);
        *puVar1 = local_28;
      }
      else {
        FUN_10000138(*(int *)(param_1[0x20] + 0x7a));
        *(char *)((int)param_1 + 0x86) = 0;
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
        FUN_100db158(local_30,local_2c);
      }
      *(char *)((int)param_1 + 0x86) = 0;
      FUN_10000138(*(int *)(param_1[0x20] + 0x7a));
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    }
  }
  return;
}

/* Address: 0x1011472c Size: 712 bytes */
void FUN_1011472c(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar5;
  long long uVar4;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  char *puVar9;
  char *puVar10;
  int *puVar11;
  int *piVar12;
  int *puVar13;
  int *piVar14;
  int *piVar15;
  char auStack_88 [8];
  char auStack_80 [8];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  puVar9 = ((char*)0) + -0x88;
  puVar10 = ((char*)0) + -0x80;
  piVar8 = &local_78;
  piVar7 = &local_74;
  puVar11 = (int *)(((char*)0) + -0x68);
  piVar12 = (int *)(((char*)0) + -0x60);
  puVar13 = (int *)(((char*)0) + -0x58);
  piVar14 = (int *)(((char*)0) + -0x50);
  piVar15 = (int *)(((char*)0) + -0x48);
  piVar5 = piVar15;
  if ((((char*)0) != (char *)0x48) ||
     (piVar5 = (int *)NewPtr_Thunk(0x10), piVar5 != (int *)0x0)) {
    *piVar5 = *param_2;
    piVar5[1] = param_2[1];
    piVar5[2] = param_2[2];
    piVar5[3] = param_2[3];
  }
  *puVar13 = 2;
  local_54 = 2;
  FUN_100e16b8(piVar15,puVar13);
  local_6c = FUN_100e1a3c(piVar15,1);
  uVar4 = FUN_100b057c(param_1 + 0x90,1);
  psVar6 = (short *)FUN_100b0388(uVar4,1);
  sVar1 = *psVar6;
  psVar6 = (short *)FUN_100b0388(param_1 + 0xbe,1);
  local_74 = (int)sVar1 + (int)*psVar6;
  if (local_6c < local_74) {
    piVar7 = &local_6c;
  }
  local_4c = *piVar7;
  local_70 = FUN_100e1a3c(piVar15,0);
  uVar4 = FUN_100b057c(param_1 + 0x90,1);
  psVar6 = (short *)FUN_100b0388(uVar4,0);
  sVar1 = *psVar6;
  psVar6 = (short *)FUN_100b0388(param_1 + 0xbe,0);
  local_78 = (int)sVar1 + (int)*psVar6;
  if (local_70 < local_78) {
    piVar8 = &local_70;
  }
  iVar2 = *piVar8;
  *piVar14 = iVar2;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 < *piVar15) {
    *param_3 = *piVar15;
  }
  else if (local_40 < ((iVar3 + iVar2) - (int)*(short *)(param_1 + 0xbe)) + -1) {
    *param_3 = (local_40 - *piVar14) + (int)*(short *)(param_1 + 0xba);
  }
  else {
    *param_3 = iVar3;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < local_44) {
    param_3[1] = local_44;
  }
  else if (local_3c < ((local_4c + iVar2) - (int)*(short *)(param_1 + 0xc0)) + -1) {
    param_3[1] = (local_3c - local_4c) + (int)*(short *)(param_1 + 0xbc);
  }
  else {
    param_3[1] = iVar2;
  }
  *piVar12 = (int)*(short *)(param_1 + 0xbe);
  local_5c = (int)*(short *)(param_1 + 0xc0);
  uVar4 = FUN_100e1580(param_3,0);
  FUN_100e10b0(puVar10,uVar4,piVar14);
  *puVar11 = 1;
  local_64 = 1;
  FUN_100e10f8(puVar9,puVar10,piVar12);
  uVar4 = FUN_100e1580(param_3,1);
  FUN_100e10f8(uVar4,puVar9,puVar11);
  return;
}

/* Address: 0x101149f4 Size: 92 bytes */
void FUN_101149f4(int param_1,long long param_2,int *param_3)

{
  int local_18;
  int uStack_14;
  int uStack_10;
  int uStack_c;
  
  if ((*(unsigned short *)(param_1 + 0x84) & 8) != 0) {
    FUN_100e14e4(&local_18,**(int **)(*(int *)(param_1 + 0x80) + 0x82));
    *param_3 = local_18;
    param_3[1] = uStack_14;
    param_3[2] = uStack_10;
    param_3[3] = uStack_c;
  }
  return;
}

/* Address: 0x10114a50 Size: 556 bytes */
void FUN_10114a50(int *param_1,short param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  char auStack_80 [8];
  int local_78;
  int uStack_74;
  int local_70;
  int uStack_6c;
  char auStack_68 [16];
  char auStack_58 [8];
  char auStack_50 [16];
  char auStack_40 [8];
  char auStack_38 [56];
  
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),auStack_40);
  FUN_100e1448(auStack_68,auStack_40);
  if (param_2 == 8) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x830) + (int)param_1,auStack_68,auStack_38);
    if ((*(unsigned short *)(param_1 + 0x21) & 8) != 0) {
      FUN_100e12b8(auStack_38,&local_78);
      iVar3 = **(int **)(param_1[0x20] + 0x82);
      *(int *)(iVar3 + 8) = local_78;
      *(int *)(iVar3 + 0xc) = uStack_74;
    }
  }
  else {
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x838),auStack_68,auStack_38);
    if ((*(unsigned short *)(param_1 + 0x21) & 8) != 0) {
      FUN_100e12b8(auStack_38,&local_70);
      puVar1 = (int *)**(int **)(param_1[0x20] + 0x82);
      *puVar1 = local_70;
      puVar1[1] = uStack_6c;
    }
  }
  iVar3 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar3 != 0) {
    uVar2 = FUN_100e1580(auStack_38,0);
    iVar3 = FUN_100e11c8(uVar2,param_1 + 0xb);
    if (iVar3 != 0) {
      FUN_100e1a64(auStack_80,auStack_38);
      iVar3 = FUN_100e11c8(auStack_80,param_1 + 0xd);
      if (iVar3 != 0) {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_50);
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_50,auStack_58);
        GetBitMapPtr(auStack_58);
        FUN_10002c58();
        if ((*(unsigned short *)(param_1 + 0x21) & 8) != 0) {
          FUN_10002430(param_1[0x20],param_2,0);
        }
      }
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x350),auStack_38,1);
  }
  return;
}

/* Address: 0x10114c7c Size: 176 bytes */
void FUN_10114c7c(int *param_1,int *param_2,short param_3)

{
  int *puVar1;
  int iVar2;
  char auStack_28 [8];
  int local_20;
  int uStack_1c;
  char auStack_18 [24];
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_20);
  FUN_100e0f78(auStack_28,&local_20);
  puVar1 = (int *)FUN_100b0368(auStack_18,auStack_28);
  iVar2 = FUN_10002f70(param_1[0x20],*puVar1,param_3);
  if (iVar2 != 0) {
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x748) + (int)param_1,param_3);
  }
  return;
}

/* Address: 0x10114d2c Size: 196 bytes */
int FUN_10114d2c()

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20 [8];
  
  FUN_100ee970(local_20);
  ResourceRead_Dispatch((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  iVar3 = 0;
  if (iVar2 != 0) {
    do {
      iVar2 = FUN_1010fab8(iVar1);
      if (iVar2 != 0) {
        iVar3 = iVar1;
      }
      ResourceRead_Dispatch((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
      iVar1 = local_20[1];
      iVar2 = FUN_100eea60(local_20);
    } while ((iVar2 != 0) && (iVar3 == 0));
  }
  return iVar3;
}

/* Address: 0x10114df0 Size: 104 bytes */
void FUN_10114df0()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10117328,*puRam1011733c,0x34,uRam10117340,uRam10116a84,uRam10116f30,uRam101170a8)
  ;
  FUN_100c1c8c(ppuVar1[-600],*(int *)(*(int*)((char*)ppuVar1 - 0x157)),200,(*(int*)((char*)ppuVar1 - 0x156)),(*(int*)((char*)ppuVar1 - 0x309)));
  return;
}

/* Address: 0x101159dc Size: 16 bytes */
int FUN_101159dc(int param_1,int param_2)

{
  int uVar1;
  
  uVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = param_2;
  return uVar1;
}

/* Address: stubbed - had compile errors on 64-bit */
unsigned int FUN_101159ec() { return 0; }









/* Address: 0x10115a00 Size: 104 bytes */
int FUN_10115a00(int param_1)

{
  int uVar1;
  
  uVar1 = uRam101173c8;
  if (param_1 == 0) {
    param_1 = FUN_100f56c0(0x3c);
    if (param_1 != 0) {
      *(int *)(param_1 + 0x38) = uVar1;
    }
  }
  else {
    *(int *)(param_1 + 0x38) = uRam101173c8;
  }
  return param_1;
}

/* Address: 0x10115a68 Size: 104 bytes */
void FUN_10115a68()
{
  int * param_1 = 0;
  int param_2 = 0;

  param_1[2] = param_2;
  param_1[8] = 0;
  param_1[10] = 0x111;
  *(short *)(param_1 + 0xb) = 6;
  *(char *)((int)param_1 + 0x2e) = 0x20;
  *(short *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *puRam10117890 = 0x8000;
  *puRam10117894 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;

}


/* Address: 0x10115b60 Size: 136 bytes */
int FUN_10115b60(int param_1,int param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != 0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = FUN_100f56c0(0x40), param_1 != 0)) {
    FUN_101168ec(param_1);
    *(int **)(param_1 + 0x24) = (*(int*)((char*)ppuVar1 - 0x131));
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = 0;
    *(char *)(param_1 + 0x30) = 1;
    *(int *)(param_1 + 0x34) = 0xffffffff;
  }
  return param_1;
}

/* Address: 0x10115be8 Size: 220 bytes */
int FUN_10115be8(int param_1)

{
  int uVar1;
  int iVar2;
  int unaff_r29;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    param_1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    }
    if (iVar2 != 0) {
      unaff_r29 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),
                               0xffffffffffffffff);
    }
    *(int *)(param_1 + 0x28) = 0xffffffff;
    *(char *)(param_1 + 0x30) = 0;
    *(int *)(param_1 + 0x34) = 0xffffffff;
    *(int *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x18) = 0;
    iVar2 = FUN_10001950(uVar1);
    if ((iVar2 == -1) || (unaff_r29 == -1)) {
      param_1 = 0;
    }
  }
  return param_1;
}

/* Address: 0x10115cc4 Size: 120 bytes */
void FUN_10115cc4(int param_1,unsigned long long param_2)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x24) = uRam101173dc;
    FUN_10115be8(param_1);
    FUN_101169b4(param_1,0);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      DisposePtr_Thunk(param_1);
    }
  }
  return;
}

/* Address: 0x10115d6c Size: 224 bytes */
long long FUN_10115d6c(int param_1)

{
  int iVar1;
  long long uVar2;
  
  iVar1 = FUN_10115d3c(param_1);
  uVar2 = 0;
  if (iVar1 == 1) {
    iVar1 = FUN_10002250(*(int *)(param_1 + 0x28),
                         (unsigned long long)*(unsigned int *)(param_1 + 0x14) - (unsigned long long)*(unsigned int *)(param_1 + 0x18)
                         ,1);
    if (iVar1 < 0) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else if ((iVar1 == 2) &&
          (uVar2 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),
                                0xffffffffffffffff), (int)uVar2 != -1)) {
    uVar2 = 0;
  }
  *(int *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x34) = 0xffffffff;
  return uVar2;
}

/* Address: 0x1011600c Size: 408 bytes */
unsigned long long FUN_1011600c(int param_1)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar4;
  unsigned long long uVar3;
  int bVar5;
  
  pbVar1 = *(unsigned char **)(param_1 + 0x14);
  if ((pbVar1 == (unsigned char *)0x0) || (*(unsigned char **)(param_1 + 0x18) <= pbVar1)) {
    if (*(short *)(param_1 + 2) == 0) {
      if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        iVar4 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 == -1) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        if (*(int *)(param_1 + 0xc) != 0) {
          ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x28));
        }
        iVar4 = FUN_100025f8(*(int *)(param_1 + 0x28),(unsigned long long)*(unsigned int *)(param_1 + 4) + 1,
                             (unsigned long long)*(unsigned int *)(param_1 + 0x20) - 1);
        if (iVar4 < 1) {
          *(int *)(param_1 + 0x1c) = 0;
          *(int *)(param_1 + 0x14) = 0;
          *(int *)(param_1 + 0x18) = 0;
          uVar3 = 0xffffffffffffffff;
        }
        else {
          iVar2 = *(int *)(param_1 + 4);
          *(int *)(param_1 + 0x1c) = iVar2 + 1;
          *(int *)(param_1 + 0x14) = iVar2 + 1;
          *(int *)(param_1 + 0x18) = iVar2 + iVar4 + 1;
          uVar3 = (unsigned long long)*(unsigned char *)(iVar2 + 1);
        }
      }
    }
    else {
      iVar4 = FUN_100025f8(*(int *)(param_1 + 0x28),param_1 + 0x3d,1);
      if (iVar4 == 1) {
        *(int *)(param_1 + 0x1c) = param_1 + 0x3c;
        *(int *)(param_1 + 0x14) = param_1 + 0x3d;
        *(int *)(param_1 + 0x18) = param_1 + 0x3e;
        uVar3 = (unsigned long long)*(unsigned char *)(param_1 + 0x3d);
      }
      else {
        uVar3 = 0xffffffffffffffff;
      }
    }
  }
  else {
    uVar3 = (unsigned long long)*pbVar1;
  }
  return uVar3;
}

/* Address: 0x101161a4 Size: 164 bytes */
long long FUN_101161a4(int param_1,long long param_2,char param_3)

{
  int iVar2;
  long long uVar1;
  
  if (*(int *)(param_1 + 0x34) == -1) {
    iVar2 = FUN_10002250(*(int *)(param_1 + 0x28),0,1);
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 == -1) {
      return 0xffffffffffffffff;
    }
  }
  iVar2 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x28));
  if (iVar2 == -1) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = FUN_10002250(*(int *)(param_1 + 0x28),param_2,param_3);
    *(int *)(param_1 + 0x34) = (int)uVar1;
  }
  return uVar1;
}

/* Address: 0x10116248 Size: 176 bytes */

long long FUN_10116248(short *param_1,long long param_2,long long param_3)

{
  long long uVar1;
  
  if ((*(int *)(param_1 + 2) == 0) || (*(char *)(param_1 + 0x18) == '\0')) {
    if ((*param_1 != 0) && (*(int *)(param_1 + 2) != 0)) {
      DisposePtr_Thunk(*(int *)(param_1 + 2));
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = 0;
    uVar1 = FUN_10116a60(param_1,param_2,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x101162f8 Size: 64 bytes */
void FUN_101162f8(int param_1)

{
  if (*(short *)(param_1 + 2) == 0) {
    FUN_10116eb8();
  }
  else {
    FUN_10001668(*(int *)(param_1 + 0x28));
  }
  return;
}

/* Address: 0x10116538 Size: 140 bytes */
void FUN_10116538(unsigned long long param_1,unsigned long long param_2)

{
  unsigned int uVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = *puRam101173e0;
    *puRam101173e0 = (unsigned int)((unsigned long long)uVar1 - 1);
    if ((unsigned long long)uVar1 - 1 == 0) {
      FUN_101168a0(uRam101173d8);
      FUN_101168a0((*(int*)((char*)ppuVar2 - 0x134)));
      FUN_101168a0((*(int*)((char*)ppuVar2 - 0x133)));
    }
    if (((param_1 & 0xffffffff) != 0) && ((param_2 & 1) != 0)) {
      DisposePtr_Thunk(param_1);
    }
  }
  return;
}

/* Address: 0x1011662c Size: 108 bytes */

void FUN_1011662c()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_10116538((*(int*)0x10117898),2);
  FUN_10117304((*(int*)((char*)ppuVar1 - 0x134)),2);
  FUN_10117304((*(int*)((char*)ppuVar1 - 0x133)),2);
  FUN_10117304((*(int*)((char*)ppuVar1 - 0x132)),2);
  FUN_101170f4((*(int*)((char*)ppuVar1 - 0x135)),2);
  return;
}

/* Address: 0x1011671c Size: 128 bytes */
void FUN_1011671c(int param_1,unsigned long long param_2)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = uRam101173e8;
    *(int *)(*(int *)(param_1 + 8) + 0x38) = uRam101173ec;
    if ((param_2 & 2) != 0) {
      FUN_10115ad0(*(int *)(param_1 + 8),0);
    }
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      DisposePtr_Thunk(param_1);
    }
  }
  return;
}

/* Address: 0x1011679c Size: 132 bytes */
int * FUN_1011679c(int *param_1,int *param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56c0(0x44),
     param_1 != (int *)0x0)) {
    if (param_2 == (int *)0x0) {
      param_2 = param_1 + 2;
      FUN_10115a00(param_2);
    }
    param_1[1] = param_2;
    *param_1 = ppuVar1[-300];
    param_2[0xe] = ppuVar1[-299];
  }
  return param_1;
}

/* Address: 0x101168a0 Size: 76 bytes */
int FUN_101168a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  ResourceRead_Dispatch(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x28));
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
short * FUN_101168ec(short *param_1) { return 0; }





































/* Address: stubbed - had compile errors on 64-bit */
void FUN_101169b4(short *param_1,unsigned long long param_2) { }
































/* Address: stubbed - had compile errors on 64-bit */
short * FUN_10116a60(short *param_1,unsigned int param_2,int param_3) { return 0; }























































/* Address: 0x10116bac Size: 124 bytes */
long long FUN_10116bac(int param_1)

{
  long long uVar1;
  
  if ((*(unsigned int *)(param_1 + 0x14) == 0) || (*(unsigned int *)(param_1 + 0x18) <= *(unsigned int *)(param_1 + 0x14)))
  {
    if ((*(unsigned int *)(param_1 + 0xc) == 0) || (*(unsigned int *)(param_1 + 0xc) <= *(unsigned int *)(param_1 + 8))) {
      uVar1 = 0;
    }
    else {
      uVar1 = ResourceRead_Dispatch(*(short *)(*(int *)(param_1 + 0x24) + 0x10) + param_1,0xffffffffffffffff)
      ;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

/* Address: 0x10116c28 Size: 232 bytes */
unsigned long long FUN_10116c28(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned long long uVar2;
  int bVar4;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    iVar3 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 == -1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x14);
    if ((*(unsigned int *)(param_1 + 0x18) <= uVar1) && (uVar1 < *(unsigned int *)(param_1 + 0xc))) {
      if (uVar1 == 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_1 + 0xc);
      }
      else {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0xc);
      }
    }
    if (*(unsigned char **)(param_1 + 0x14) < *(unsigned char **)(param_1 + 0x18)) {
      uVar2 = (unsigned long long)**(unsigned char **)(param_1 + 0x14);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
  }
  return uVar2;
}

/* Address: 0x10116d10 Size: 260 bytes */
unsigned long long FUN_10116d10(int param_1,unsigned long long param_2)

{
  unsigned int uVar1;
  char *puVar2;
  int iVar3;
  unsigned int uVar4;
  int bVar5;
  
  if ((int)param_2 == -1) {
    param_2 = 0xffffffffffffffff;
  }
  else {
    if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      iVar3 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == -1) {
      param_2 = 0xffffffffffffffff;
    }
    else if (*(int *)(param_1 + 8) == 0) {
      uVar1 = *(unsigned int *)(param_1 + 4);
      uVar4 = uVar1 + *(int *)(param_1 + 0x20);
      *(unsigned int *)(param_1 + 0xc) = uVar1;
      *(unsigned int *)(param_1 + 8) = uVar1;
      *(unsigned int *)(param_1 + 0x10) = uVar4;
      if (uVar1 < uVar4) {
        puVar2 = *(char **)(param_1 + 0xc);
        *(char **)(param_1 + 0xc) = puVar2 + 1;
        *puVar2 = (char)param_2;
        param_2 = param_2 & 0xff;
      }
      else {
        param_2 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),param_2 & 0xff)
        ;
      }
    }
    else {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}

/* Address: 0x10116e78 Size: 64 bytes */
void FUN_10116e78(int param_1,long long param_2)

{
  ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x30),param_2,0,3);
  return;
}

/* Address: 0x10116eb8 Size: 188 bytes */
int FUN_10116eb8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    FUN_10002f88(*(int *)(param_1 + 0xc),param_2,iVar3);
    *(int *)(param_1 + 0xc) = iVar3 + *(int *)(param_1 + 0xc);
    if (iVar2 - iVar3 == 0) break;
    iVar1 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),
                         *(char *)(iVar3 + param_2));
    param_2 = param_2 + iVar3 + 1;
    if (iVar1 == -1) {
      return -1;
    }
    iVar2 = (iVar2 - iVar3) + -1;
  }
  return param_3;
}

/* Address: 0x10116f74 Size: 168 bytes */
long long FUN_10116f74(int param_1,long long param_2,long long param_3)

{
  int iVar1;
  long long lVar2;
  long long lVar3;
  
  lVar2 = param_3;
  while( true ) {
    lVar3 = (unsigned long long)*(unsigned int *)(param_1 + 0x18) - (unsigned long long)*(unsigned int *)(param_1 + 0x14);
    if ((int)lVar2 < (int)lVar3) {
      lVar3 = lVar2;
    }
    FUN_10002f88(param_2,*(int *)(param_1 + 0x14),lVar3);
    lVar2 = lVar2 - lVar3;
    param_2 = param_2 + lVar3;
    *(int *)(param_1 + 0x14) = (int)lVar3 + *(int *)(param_1 + 0x14);
    if (lVar2 == 0) break;
    iVar1 = ResourceRead_Dispatch(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x18));
    if (iVar1 == -1) {
      return param_3 - lVar2;
    }
  }
  return param_3;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_101170f4(int param_1,unsigned long long param_2) { }
















/* Address: 0x10117184 Size: 56 bytes */
int FUN_10117184(int param_1)

{
  FUN_10115a68(*(int *)(param_1 + 8));
  return param_1;
}


























/* Address: stubbed - had compile errors on 64-bit */
void FUN_10117304(int *param_1,unsigned long long param_2) { }
















/* Address: 0x10117394 Size: 56 bytes */
int FUN_10117394(int param_1)

{
  FUN_10115a68(*(int *)(param_1 + 4));
  return param_1;
}


























/* Address: 0x101173cc Size: 136 bytes */
void FUN_101173cc()

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = piRam10117414;
  iVar2 = 0;
  if (*piRam10117414 != 0) goto LAB_1011740c;
  for (iVar3 = piRam10117414[1]; iVar3 != 0; iVar3 = piVar1[iVar3 * 2 + 3]) {
    iVar3 = iVar2;
    if (piVar1[iVar2 * 2] == 0) goto LAB_1011741c;
LAB_1011740c:
    do {
      ResourceRead_Dispatch();
      iVar3 = iVar2;
LAB_1011741c:
      iVar2 = iVar3 + 1;
    } while (piVar1[iVar3 * 2 + 2] != 0);
  }
  return;
}

/* Address: 0x10117454 Size: 148 bytes */
void FUN_10117454()

{
  int iVar1;
  int *piVar2;
  unsigned long long uVar3;
  
  piVar2 = piRam10117414;
  uVar3 = 0;
  if (*piRam10117414 != 0) goto LAB_10117488;
  iVar1 = piRam10117414[1];
joined_r0x10117480:
  if (iVar1 == 0) {
    return;
  }
  do {
    ResourceRead_Dispatch();
    do {
      iVar1 = (int)((uVar3 & 0xffffffff) << 3);
      uVar3 = uVar3 + 1;
      if (*(int *)((int)piVar2 + iVar1 + 8) == 0) {
        iVar1 = *(int *)((int)piVar2 + iVar1 + 0xc);
        goto joined_r0x10117480;
      }
LAB_10117488:
    } while (*(int *)((int)piVar2 + (int)((uVar3 & 0xffffffff) << 3) + 4) == 0);
  } while( true );
}

/* Address: 0x101174e8 Size: 60 bytes */
void FUN_101174e8()

{
  if (*piRam10115364 != 0) {
    FUN_10000018(uRam1011740c);
  }
  FUN_10117454();
  return;
}

/* Address: 0x10117524 Size: 76 bytes */
void FUN_10117524()

{
  int *ppuVar1;
  int **local_24;
  
  ppuVar1 = 0 /* TVect base */;
  if (*piRam10115364 != 0) {
    FUN_10000018((unsigned long long)uRam1011740c + 8);
    ppuVar1 = local_24;
  }
  FUN_101173cc();
  FUN_10000078((*(int*)((char*)ppuVar1 - 0x124)));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10117570() { }










/* Address: 0x101175bc Size: 8 bytes */
long long FUN_101175bc(long long param_1,long long param_2)

{
  return param_2;
}

/* Address: 0x101175c4 Size: 204 bytes */
long long FUN_101175c4(long long param_1,int param_2,long long param_3,int param_4)

{
  int *piVar1;
  int *puVar2;
  int iVar3;
  long long lVar4;
  
  piVar1 = piRam1011741c;
  if ((int)param_1 == 0) {
    param_1 = FUN_100f56c0((long long)param_2 * (long long)(int)param_3);
    puVar2 = (int *)FUN_10000558(0xc);
    *puVar2 = (int)param_1;
    puVar2[1] = param_2;
    puVar2[2] = *piVar1;
    *piVar1 = (int)puVar2;
  }
  if (param_4 != 0) {
    iVar3 = 0;
    lVar4 = param_1;
    if (0 < param_2) {
      do {
        ResourceRead_Dispatch(lVar4,0,0,0,0,0,0);
        lVar4 = lVar4 + param_3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
  }
  return param_1;
}

/* Address: 0x10117690 Size: 340 bytes */
long long FUN_10117690(unsigned long long param_1,unsigned int param_2,long long param_3,int param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *ppuVar4;
  int iVar5;
  long long lVar6;
  int **local_44;
  
  if ((int)param_1 != 0) {
    if (param_2 == 0xffffffff) {
      puVar3 = (unsigned int *)*puRam1011741c;
      puVar2 = (unsigned int *)0x0;
      while (puVar1 = puVar3, ppuVar4 = 0 /* TVect base */, puVar1 != (unsigned int *)0x0) {
        if ((unsigned long long)*puVar1 == (param_1 & 0xffffffff)) {
          param_2 = puVar1[1];
          if (puVar2 == (unsigned int *)0x0) {
            *puRam1011741c = puVar1[2];
          }
          else {
            puVar2[2] = puVar1[2];
          }
          FUN_10002fa0(puVar1);
          ppuVar4 = local_44;
          break;
        }
        puVar2 = puVar1;
        puVar3 = (unsigned int *)puVar1[2];
      }
      if (puVar1 == (unsigned int *)0x0) {
        if (*(int *)ppuVar4[-1] != 0) {
          param_2 = ResourceRead_Dispatch(param_1);
          ppuVar4 = local_44;
        }
        if ((int)param_2 < 0) {
          FUN_10001008((*(int*)((char*)ppuVar4 - 0x122)));
        }
      }
    }
    if (param_4 != 0) {
      lVar6 = param_1 + (long long)(int)(param_2 - 1) * (long long)(int)param_3;
      iVar5 = 0;
      if (0 < (int)param_2) {
        do {
          ResourceRead_Dispatch(lVar6,0);
          lVar6 = lVar6 - param_3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_2);
      }
    }
    if (param_5 != 0) {
      DisposePtr_Thunk(param_1);
    }
  }
  return 0;
}



/* __start removed - PEF entry point */







