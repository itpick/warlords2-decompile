/*
 * wave2_game2.c - Reconstructed functions (wave2_game2)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 519 functions in address range wave2_game2
 */

#include "warlords2.h"

/* TVect function pointer imports */
long long FUN_10115d6c(int param_1);
long long FUN_101175c4(long long param_1,int param_2,long long param_3,int param_4);
long long FUN_101175bc(long long param_1,long long param_2);
int FUN_10116698(int param_1, int param_2);
void FUN_1011662c();
unsigned long long FUN_1011600c(int param_1);
long long FUN_10116248(short *param_1,long long param_2,long long param_3);

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
void FUN_10052900();
void FUN_100402bc();
void FUN_100402e0();
void FUN_10040334();
void FUN_10040788();
void FUN_10040930();
void FUN_1004099c(short param_1);
void FUN_100409d0();
void FUN_10040a38();
void FUN_10040c28();
void FUN_10040cc0();
void FUN_10040d68();
void FUN_10040da4();
int FUN_1004130c(int *param_1);
char FUN_10041410(int *param_1);
unsigned long long FUN_1004152c(long long param_1,short param_2,int *param_3);
void FUN_10041660(short param_1,short param_2,char *param_3);
void FUN_100416f4(short param_1,short param_2,long long param_3,short param_4);
void FUN_100418a0(short param_1);
void FUN_100418d8(char param_1);
long long FUN_100419b0(short param_1,short param_2,char param_3);
void FUN_10041de8();
long long FUN_100421f0(int param_1,int param_2,short param_3);
void FUN_10042344(int param_1,int param_2,short param_3);
void FUN_100448e4(short param_1,short param_2,short param_3,short param_4,
                 unsigned short param_5);
int * FUN_10044950();
void FUN_100449bc();
long long FUN_10044a10(int param_1,int *param_2);
void FUN_10044d38(long long param_1,short param_2);
void FUN_100453f0();
void FUN_1004615c(short param_1,int param_2,int param_3,int param_4);
short FUN_1004645c(short param_1);
void FUN_100464fc();
void FUN_1004653c();
void FUN_100465a8(short param_1);
void FUN_100466d4(short param_1);
long long FUN_10046d7c();
long long FUN_1004702c();
long long FUN_10047190();
long long FUN_100479f4(short param_1);
void FUN_10047abc(short *param_1,short param_2,short param_3);
void FUN_10047f28();
void FUN_10047fc8(short param_1);
void FUN_10048054();
void FUN_10048138(short param_1,short param_2,short param_3);
void FUN_1004838c();
void FUN_10048434(short param_1);
void FUN_10048788(short param_1);
void FUN_100489cc(short param_1,short param_2,short param_3);
short FUN_10048c3c(short param_1);
long long FUN_10048c90(short param_1);
void FUN_10048ccc();
void FUN_10049010();
void FUN_10049048(short param_1);
void FUN_10049624();
void FUN_100496c8(short param_1);
void FUN_100498fc();
void FUN_10049930();
void FUN_10049aec(short param_1);
void FUN_10049e34(short param_1);
void FUN_10049ebc(short param_1,short param_2);
void FUN_10049fa8(short param_1,short param_2,short param_3);
void FUN_1004a2a8();
char FUN_1004a350(short param_1,short param_2,short *param_3,short *param_4);
long long FUN_1004a4f4(short param_1,short param_2,short param_3);
short * FUN_1004a5f0(short param_1,short param_2,short param_3,short param_4);
void FUN_1004a81c();
char FUN_1004a854();
void FUN_1004af7c();
char FUN_1004b06c();
void FUN_1004b0b8();
void FUN_1004b11c(short param_1);
void FUN_1004bc90();
void FUN_1004bcd0();
void FUN_1004c0b8();
void FUN_1004d938();
void FUN_1004d9cc(short param_1,short param_2);
long long FUN_1004dbbc(short param_1);
long long FUN_1004dc94(short *param_1);
void FUN_1004e0f4(unsigned short param_1);
void FUN_1004f388();
unsigned short * FUN_1004f704();
void FUN_1004fbb8();
void FUN_1004fbdc();
void FUN_100501f4(unsigned short param_1);
void FUN_10050830();
void FUN_10050b10(short param_1);
void FUN_10050c0c(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,long long param_6,short param_7,short param_8);
long long FUN_10051f98(long long param_1,long long param_2,unsigned short param_3);
void FUN_100523a8(int *param_1,unsigned long long param_2);
void FUN_10052490();
void FUN_10052608();
void FUN_1005262c(short *param_1,int param_2,int param_3,short param_4);
void FUN_10052ca8();
void FUN_10052eb4();
void FUN_10052fdc(short param_1);
void FUN_100532a4();
long long FUN_10053330();
void FUN_100547b4();
void FUN_10054928();
void FUN_10054958();
void FUN_10054994();
void FUN_10054af4(short param_1,short param_2);
void FUN_10054d88(short param_1);
void FUN_100557b8();
long long FUN_100558f8();
int FUN_100559ac();
long long FUN_10055ba0(short param_1);
long long FUN_10055c64(short *param_1);
long long FUN_10055f30();
int FUN_1005619c();
long long FUN_100562e0();
void FUN_1005638c();
long long FUN_1005641c();
long long FUN_10056534();
void FUN_100577f0();
void FUN_100579f8();
void FUN_10057e5c(short param_1,short param_2,int *param_3);
void FUN_100584c8(long long param_1);
void FUN_100586a0(int *param_1);
void FUN_1005887c(short param_1,short param_2,short param_3,short param_4,int *param_5);
void FUN_10059b7c(short param_1,int *param_2);
void FUN_10059d2c();
void FUN_10059d30();
void FUN_1005a2b0();
void FUN_1005a2d0();
void FUN_1005a6ac(int *param_1);
void FUN_1005aac8(short param_1,int *param_2);
void FUN_1005abf4(short param_1,long long param_2);
void FUN_1005ad34(short param_1,short param_2,long long param_3);
char * FUN_1005adc4(short param_1);
void FUN_1005af24(int *param_1);
void FUN_1005b1c4(int *param_1);
void FUN_1005b4e8(int *param_1,long long param_2);
void FUN_1005b5c0();
void FUN_1005b62c(short param_1,long long param_2);
void FUN_1005b938(long long param_1);
void FUN_1005ba1c(short param_1,short param_2,char *param_3,char *param_4);
void FUN_1005bd28();
void FUN_1005c5d4();
void FUN_1005c7b0();
void FUN_1005c7d0(short param_1);
long long FUN_1005cd18();
void FUN_1005cd90();
void FUN_1005cffc(short param_1);
void FUN_1005d0cc(short param_1);
void FUN_1005d240();
void FUN_1005d2dc();
void FUN_1005d364(short param_1,short param_2,short param_3);
void FUN_1005d598(int param_1);
void FUN_1005dd84(short param_1,short param_2,short param_3);
void FUN_1005e698();
void FUN_1005e794();
void FUN_1005e7c4();
void FUN_1005ea7c(short param_1);
void FUN_1005ec38(short param_1);
void FUN_1005ed24();
void FUN_1005edf4();
void FUN_1005eec8(short param_1,short param_2,short param_3);
void FUN_1005f32c();
int FUN_1005f36c();
void FUN_1005f478();
void FUN_1005f6e8(int *param_1,short *param_2);
short FUN_1005f738(long long param_1);
void FUN_1005f88c(int *param_1,short *param_2);
void FUN_1005f97c(int *param_1,long long param_2);
void FUN_1005fa94(long long param_1,short param_2,short param_3);
void FUN_10061354(short *param_1);
void FUN_100614ac(short *param_1,short param_2);
void FUN_10061a98(short *param_1,short param_2,short param_3);
void FUN_10062228(long long param_1,int param_2);
void FUN_100625a8(long long param_1,short param_2,short param_3,short param_4,short param_5);
void FUN_10062968(short *param_1,short param_2);
void FUN_100635e0();
void FUN_10063af8(int *param_1,short param_2,int param_3,long long param_4,
                 long long param_5);
void FUN_10064104();
void FUN_100641d0();
void FUN_10064e84();
void FUN_10064f24();
void FUN_100651cc(short param_1);
void FUN_10065b2c(short param_1);
void FUN_1006616c();
int * FUN_10066234(int *param_1);
int FUN_100662bc();
int * FUN_100662c4(int *param_1);
int FUN_1006632c();
int * FUN_10066334(int *param_1);
int FUN_1006639c();
int * FUN_100663a4(int *param_1);
int FUN_1006640c();
int * FUN_10066414(int *param_1);
int FUN_1006647c();
int * FUN_10066484(int *param_1);
int FUN_100664ec();
int * FUN_100664f4(int *param_1);
int FUN_1006655c();
int * FUN_10066564(int *param_1);
int FUN_100665cc();
int * FUN_100665d4(int *param_1);
int FUN_1006663c();
int * FUN_10066644(int *param_1);
int FUN_10066700();
int * FUN_10066708(int *param_1);
int FUN_100667c4();
int FUN_100667cc();
int FUN_100667d4();
int FUN_100667dc();
int FUN_100667e4();
int FUN_100667ec();
int * FUN_100667f4(int *param_1);
int * FUN_10066d04(int *param_1,int *param_2);
void FUN_10066df4(int param_1,unsigned long long param_2);
int FUN_10066e64(int param_1,short *param_2);
char * FUN_100670ec(char *param_1,char param_2);
void FUN_10067178(char *param_1,unsigned long long param_2);
void FUN_10067848();
void FUN_10067870(long long param_1,char param_2);
void FUN_100678a4(long long param_1,int *param_2,long long param_3);
void FUN_100679ac();
void FUN_100679d4(long long param_1,char param_2);
void FUN_10067a08(long long param_1,int *param_2,long long param_3);
void FUN_10067b10();
void FUN_10067b38(int *param_1,char param_2);
void FUN_10067b74(long long param_1,int *param_2,long long param_3);
void FUN_10067d6c();
void FUN_10067d94(long long param_1,char param_2);
void FUN_10067dc8(long long param_1,int *param_2,long long param_3);
void FUN_10067f94();
void FUN_10067fbc(long long param_1,char param_2);
void FUN_10067ff0(long long param_1,int *param_2,long long param_3);
void FUN_100681cc();
void FUN_100681f4(long long param_1,char param_2);
void FUN_10068228(long long param_1,int *param_2,long long param_3);
void FUN_100683f4();
void FUN_1006841c(long long param_1,char param_2);
void FUN_10068450(long long param_1,int *param_2,long long param_3);
void FUN_1006862c();
void FUN_10068654(long long param_1,char param_2);
void FUN_10068688(long long param_1,int *param_2,long long param_3);
void FUN_1006892c();
void FUN_10068954(int *param_1);
void FUN_10068a68(int *param_1);
void FUN_10068b5c(int param_1);
void FUN_10068bb4();
void FUN_10068bd8(int *param_1);
void FUN_10068d60(int *param_1,long long param_2);
void FUN_10068dcc(int *param_1,char param_2,long long param_3,long long param_4,long long param_5);
void FUN_10068f40(int *param_1,int param_2,char param_3);
void FUN_10068fec(int *param_1,char param_2,char param_3);
void FUN_100690b0(int *param_1,char param_2,char param_3);
void FUN_10069174(int *param_1);
void FUN_10069358(int *param_1);
void FUN_100694c8(int *param_1);
void FUN_100696fc(int *param_1);
void FUN_100698bc(int *param_1,int *param_2,char param_3);
void FUN_10069914();
void FUN_1006993c(int *param_1);
void FUN_10069a50(int *param_1);
int FUN_10069b44(int param_1);
void FUN_10069b9c(int *param_1);
void FUN_10069d24(int *param_1,long long param_2);
void FUN_10069d90(int *param_1,char param_2,long long param_3,long long param_4,long long param_5);
void FUN_10069f04(int *param_1,int param_2);
void FUN_10069fa4(int *param_1,char param_2,char param_3);
void FUN_1006a068(int *param_1,char param_2,char param_3);
void FUN_1006a12c(int *param_1);
void FUN_1006a394(int *param_1);
void FUN_1006a504(int *param_1);
void FUN_1006a634(int *param_1);
void FUN_1006b1e8(int *param_1,int *param_2,char param_3);
int * FUN_1006b240();
void FUN_1006b2e0(long long param_1,long long param_2);
void FUN_1006b33c(int param_1);
void FUN_1006b3a0(int *param_1,long long param_2);
void FUN_1006b558(int param_1,char param_2);
int * FUN_1006b5c4();
void FUN_1006b620(int *param_1);
void FUN_1006b678(int *param_1);
int * FUN_1006b6d8();
void FUN_1006b728();
void FUN_1006b74c(int *param_1,long long param_2);
void FUN_1006b7b8(int *param_1,char param_2,long long param_3,long long param_4,long long param_5);
void FUN_1006b92c(int *param_1,char param_2,char param_3);
void FUN_1006ba08(int *param_1,char param_2,char param_3);
void FUN_1006bacc(int *param_1);
void FUN_1006bb60(int *param_1);
void FUN_1006bc30(int *param_1);
void FUN_1006bdfc(int *param_1);
int * FUN_1006bf80();
void FUN_1006bfd4(long long param_1,long long param_2);
void FUN_1006c00c(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7);
void FUN_1006c188(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7);
void FUN_1006c304(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7);
void FUN_1006c480(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7);
void FUN_1006c5fc(long long param_1,short *param_2,char param_3);
void FUN_1006cc0c(long long param_1,int *param_2,char param_3);
void FUN_1006d29c(long long param_1,int *param_2);
int * FUN_1006d6ec();
void FUN_1006d740(int param_1,int *param_2);
int * FUN_1006e3fc();
void FUN_1006e450(long long param_1,int *param_2);
int * FUN_1006eb6c();
void FUN_1006ebc0(long long param_1,char param_2);
void FUN_1006ebf4(int *param_1,int *param_2);
void FUN_1006eef8(int *param_1,int *param_2,char param_3);
void FUN_1006f3fc(int *param_1,int *param_2,char param_3,long long param_4,
                 long long param_5,long long param_6);
void FUN_1006f91c(int *param_1,int *param_2,char param_3);
void FUN_1006fa24(long long param_1,short *param_2);
void FUN_1006fb2c(long long param_1,short *param_2);
void FUN_1006fb94(long long param_1,short *param_2);
void FUN_1006fc0c(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6);
void FUN_1006fcbc(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6);
void FUN_1006fd7c(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6);
void FUN_1006fe3c(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7);
int * FUN_1006ffc0(int *param_1);
void FUN_10070048();
void FUN_10070070(int *param_1);
void FUN_10070128(int *param_1);
int FUN_100701b0(int param_1);
void FUN_10070238(int *param_1);
void FUN_10070284(int param_1);
void FUN_100702dc(int *param_1);
void FUN_10070314(int *param_1,long long param_2,char param_3);
void FUN_100703c0(int *param_1,short param_2,int param_3,char param_4);
void FUN_100704d4(int *param_1,short param_2,char param_3);
void FUN_10070520(int *param_1,long long param_2);
void FUN_10070578(int *param_1,short param_2);
void FUN_10070690();
void FUN_100706cc(int *param_1);
int * FUN_10070740(int *param_1);
void FUN_100707c8();
void FUN_100707f0(int *param_1);
void FUN_100708e8(int *param_1);
void FUN_10070948(int *param_1);
void FUN_100709e4(int *param_1,int *param_2);
void FUN_10070ab4(int *param_1);
void FUN_10070b2c();
void FUN_10070b50(int *param_1,long long param_2,char param_3);
void FUN_10070bac(int *param_1,short param_2,long long param_3,char param_4);
void FUN_10070c0c(int *param_1,short param_2,char param_3);
void FUN_10070cec(int *param_1,char param_2,long long param_3,long long param_4,long long param_5);
int * FUN_10070f00();
void FUN_10070f64(int *param_1);
int * FUN_100711d0();
void FUN_10071264(int *param_1);
void FUN_100712cc(int *param_1);
void FUN_10071324(int *param_1);
void FUN_100713b8(int *param_1);
void FUN_10071440(int *param_1,char param_2,char param_3);
void FUN_1007149c(int *param_1,char param_2,long long param_3,long long param_4,long long param_5);
void FUN_100716a8(int param_1,int *param_2);
unsigned long long FUN_10071708();
void FUN_1007174c(int param_1,int *param_2);
void FUN_100717a4(int *param_1);
void FUN_10071848(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 ,long long param_6,char param_7);
void FUN_100718fc();
void FUN_10071924(int *param_1);
int * FUN_100719c0();
void FUN_10071a14(int *param_1,long long param_2);
void FUN_10071eb8(int *param_1,long long param_2);
int * FUN_1007206c();
void FUN_100720d8(int *param_1);
void FUN_10072660(int param_1);
void FUN_100726d0(int *param_1,short param_2,char param_3);
void FUN_100727e0(int *param_1,int *param_2);
int * FUN_100728c4(int param_1);
void FUN_100729bc(long long param_1);
void FUN_100729fc(int *param_1);
void FUN_10072e5c();
void FUN_10073388();
void FUN_100733b0(int *param_1,short param_2);
void FUN_100735ec(int param_1,unsigned int param_2);
void FUN_10073780(int param_1,long long param_2);
long long FUN_10073874(long long param_1,int *param_2);
int * FUN_1007394c(int *param_1);
void FUN_100739e0();
void FUN_10073a08(int *param_1);
void FUN_10073bd4(int *param_1,long long param_2);
void FUN_10073c94(int param_1);
void FUN_10073cf8(int param_1);
long long FUN_10073d68(int *param_1);
void FUN_10073e84(int param_1);
void FUN_10073ec4(int param_1);
void FUN_10073f04();
int * FUN_10073f68();
short FUN_10073fc8(int param_1,int param_2);
void FUN_10074114(int param_1);
void FUN_10074288(int *param_1);
int * FUN_10074c58(long long param_1,unsigned long long param_2,int *param_3);
void FUN_10074dcc(int param_1);
void FUN_10074f40(int param_1);
void FUN_10075304();
void FUN_1007548c(int param_1,long long param_2);
void FUN_10075714(int param_1);
void FUN_10075854(int param_1,long long param_2);
void FUN_10075894(int *param_1);
void FUN_10075918(int *param_1,int *param_2);
void FUN_100759d8(int *param_1,char param_2);
void FUN_10075c74(int *param_1);
int FUN_10075d94(int param_1,short param_2);
void FUN_10075f80(int param_1);
void FUN_100760c0(long long param_1,long long param_2,int *param_3,long long param_4);
long long FUN_100764ec(int *param_1,long long param_2);
long long FUN_1007657c(int *param_1,long long param_2,long long param_3);
void FUN_10076614(int param_1);
void FUN_10076670(int param_1);
void FUN_10076708(int param_1,unsigned long long param_2);
void FUN_10076758();
long long FUN_10076928(long long param_1,long long param_2,int *param_3);
void FUN_100769bc(long long param_1,int param_2,int *param_3);
long long FUN_10076a14(int param_1);
void FUN_10076b3c(int *param_1,int param_2);
void FUN_10076c90(long long param_1,int param_2);
void FUN_10076cec(int *param_1,int param_2);
void FUN_10076f30(int *param_1,long long param_2,long long param_3,long long param_4);
void FUN_1007703c(int param_1,char param_2);
void FUN_10077090(int param_1,char param_2);
void FUN_100770e0();
int * FUN_10077128();
int FUN_1007717c();
void FUN_10077184(int *param_1,long long param_2);
void FUN_1007723c(int *param_1,int *param_2,int *param_3,int *param_4,
                 char param_5);
long long FUN_100773bc(long long param_1,int *param_2,int *param_3,int *param_4,
            long long param_5);
void FUN_10077570(int param_1,long long param_2,long long param_3);
void FUN_10077600(int *param_1,long long param_2,int *param_3,short *param_4,
                 long long param_5,int *param_6,long long param_7);
void FUN_10077a00(int param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7);
void FUN_10077af4(int *param_1,long long param_2,long long param_3);
void FUN_10077c7c(int *param_1,int *param_2,long long param_3);
void FUN_10077dec(int param_1,int *param_2,char param_3);
void FUN_10077e4c(int *param_1);
int * FUN_10077f68();
void FUN_10077fbc(int *param_1,long long param_2);
void FUN_10078074(int param_1,int *param_2,int *param_3);
void FUN_1007833c(int param_1,int *param_2,int *param_3);
void FUN_10078604(int *param_1,long long param_2,long long param_3);
long long FUN_1007878c();
int * FUN_100787dc(int *param_1);
void FUN_1007885c();
void FUN_10078884(int *param_1);
void FUN_100788bc(int param_1,long long param_2,int *param_3);
int * FUN_100789c0();
void FUN_10078a2c();
void FUN_10078bb0(int param_1);
void FUN_10078c04(long long param_1,long long param_2,int *param_3);
void FUN_10078c58();
void FUN_10078c94(int param_1,unsigned long long param_2,char param_3);
void FUN_10078efc();
void FUN_1007901c();
void FUN_10079044(int *param_1,long long param_2,char param_3);
void FUN_10079160(int *param_1);
int * FUN_100791dc(int *param_1);
void FUN_1007925c();
void FUN_10079284(long long param_1,unsigned int param_2);
void FUN_100794dc();
int FUN_10079538();
int * FUN_10079548();
void FUN_100795b4(long long param_1,long long param_2,int param_3);
void FUN_100797e4(int param_1,unsigned int param_2);
int FUN_10079d98();
int * FUN_10079da8();
void FUN_10079e28(int *param_1);
void FUN_10079ee8(int *param_1,short param_2,short param_3,char param_4);
void FUN_10079f68(int *param_1,short param_2,short param_3,short param_4,short param_5,char param_6);
void FUN_1007a018(int *param_1,short param_2,short param_3,short param_4,char param_5);
int FUN_1007a0b0();
int * FUN_1007a0c0(int *param_1);
void FUN_1007a128();
void FUN_1007a150(int param_1);
void FUN_1007a2fc(long long param_1,short param_2,char param_3);
int FUN_1007a384();
int * FUN_1007a394();
void FUN_1007a400(long long param_1,unsigned int param_2);
void FUN_1007a4d4(long long param_1,int param_2,int *param_3);
int FUN_1007a548();
int * FUN_1007a558();
void FUN_1007a5d8(int param_1,long long param_2,long long param_3,int param_4);
void FUN_1007a678();
void FUN_1007a858();
int * FUN_1007a894(int *param_1);
void FUN_1007a8fc();
void FUN_1007a924(int param_1);
void FUN_1007a95c(long long param_1,long long param_2);
int * FUN_1007a99c();
void FUN_1007a9f8(int param_1);
int * FUN_1007aa3c();
void FUN_1007aa98(int param_1);
void FUN_1007aaec();
int * FUN_1007ab7c(int *param_1);
void FUN_1007ac64();
void FUN_1007ac8c(int param_1,long long param_2,long long param_3,char param_4);
short FUN_1007afdc(short param_1,long long param_2,int param_3);
void FUN_1007b15c(int param_1);
void FUN_1007b3ec(int param_1);
void FUN_1007b52c();
void FUN_1007b8a4(int param_1);
void FUN_1007c0ac(int param_1);
void FUN_1007c108(int *param_1);
void FUN_1007c1bc(int param_1,long long param_2,int *param_3,int *param_4);
void FUN_1007ee44(int param_1);
void FUN_1007eea4(int param_1,long long param_2);
void FUN_1007ef3c(int param_1);
void FUN_1007ef9c(int param_1,long long param_2);
void FUN_1007f034(int param_1);
void FUN_1007f094(int param_1,short param_2);
void FUN_1007f0b4(long long param_1);
long long FUN_1007f1d4(int param_1);
void FUN_1007f234(int param_1);
void FUN_1007f548(int param_1,long long param_2,long long param_3,long long param_4,
                 short *param_5,long long param_6,int *param_7);
void FUN_1007f654(int *param_1,long long param_2,int param_3);
void FUN_1007fc08(int *param_1,char param_2);
void FUN_1007fd6c(int param_1,short param_2,short param_3,long long param_4);
void FUN_1007ff2c(int *param_1,short param_2);

/* Extern declarations for Ghidra globals */
extern long iRam10115d68;
extern long iRam10115ed8;
extern long iRam10115ee4;
extern long iRam10115eec;
extern long iRam10115ef0;
extern long iRam10115f1c;
extern long iRam10115f20;
extern long iRam10115f2c;
extern long iRam10115f44;
extern long iRam10115f4c;
extern long iRam10115f78;
extern long iRam10115f84;
extern long iRam10115f88;
extern long iRam10115f8c;
extern long iRam10115fcc;
extern long iRam10115fd0;
extern long iRam10115fe4;
extern long iRam10116000;
extern long iRam10116008;
extern long iRam10116010;
extern long iRam10116460;
extern long iRam10117450;
extern long iRam101174ac;
extern long iRam10117584;
extern long iRam101175e8;
extern long iRam101175ec;
extern long iRam10117634;
extern long iRam10117638;
extern long iRam1011763c;
extern long iRam10117640;
extern long iRam10117688;
extern long iRam101176c0;
extern long iRam101176cc;
extern long iRam101176e8;
extern long iRam101176ec;
extern long iRam101176f0;
extern long iRam101176f4;
extern long iRam101176f8;
extern long iRam10117728;
extern long iRam1011773c;
extern long iRam10117758;
extern long iRam101177f0;
extern long iRam1011788c;
extern unsigned char *pbRam10116a54;
extern char *pcRam1011648c;
extern pint *piRam10115d88;
extern pint *piRam10115f0c;
extern pint *piRam10115f14;
extern pint *piRam10115f18;
extern pint *piRam10115f50;
extern pint *piRam10115f64;
extern pint *piRam10115f7c;
extern pint *piRam10115f94;
extern pint *piRam10115fa4;
extern pint *piRam10115fc8;
extern pint *piRam10115fe8;
extern pint *piRam101161d0;
extern pint *piRam10116200;
extern pint *piRam10116204;
extern pint *piRam10116208;
extern pint *piRam1011639c;
extern pint *piRam101163ac;
extern pint *piRam101163b0;
extern pint *piRam10116478;
extern pint *piRam10116484;
extern pint *piRam10116488;
extern pint *piRam101169c4;
extern pint *piRam101174b0;
extern pint *piRam10117594;
extern pint *piRam101175d0;
extern pint *piRam10117698;
extern pint *piRam1011769c;
extern pint *piRam101176a0;
extern pint *piRam101176a4;
extern pint *piRam101176a8;
extern pint *piRam101176b8;
extern pint *piRam101176e8;
extern pint *piRam10117714;
extern short *psRam10115d80;
extern short *psRam10115d84;
extern short *psRam10115d8c;
extern short *psRam10115d98;
extern short *psRam10115e2c;
extern short *psRam10115e88;
extern short *psRam10115e94;
extern short *psRam10115ea0;
extern short *psRam10115ea4;
extern short *psRam10115ee8;
extern short *psRam10115ef8;
extern short *psRam10115efc;
extern short *psRam10115f10;
extern short *psRam10115f40;
extern short *psRam10115f68;
extern short *psRam10115f70;
extern short *psRam10115f74;
extern short *psRam10115f88;
extern short *psRam10115fa8;
extern short *psRam10115fd4;
extern short *psRam10115ff4;
extern short *psRam10115ff8;
extern short *psRam101161fc;
extern short *psRam10116354;
extern short *psRam10116360;
extern short *psRam101164c8;
extern short *psRam1011677c;
extern short *psRam10117580;
extern short *psRam101175b8;
extern short *psRam1011760c;
extern short *psRam101176e4;
extern unsigned int *puRam10115d8c;
extern unsigned int *puRam10115d98;
extern unsigned int *puRam10115db0;
extern unsigned int *puRam10115db4;
extern unsigned int *puRam10115e90;
extern unsigned int *puRam10115e94;
extern unsigned int *puRam10115e9c;
extern unsigned int *puRam10115ef8;
extern unsigned int *puRam10115f04;
extern unsigned int *puRam10115f08;
extern unsigned int *puRam10115f10;
extern unsigned int *puRam10115f3c;
extern unsigned int *puRam10115f40;
extern unsigned int *puRam10115f48;
extern unsigned int *puRam10115f64;
extern unsigned int *puRam10115f70;
extern unsigned int *puRam10115f74;
extern unsigned int *puRam10115f7c;
extern unsigned int *puRam10115f88;
extern unsigned int *puRam10115f8c;
extern unsigned int *puRam10115fa4;
extern unsigned int *puRam10115fa8;
extern unsigned int *puRam10115fac;
extern unsigned int *puRam10115fb0;
extern unsigned int *puRam10115fb4;
extern unsigned int *puRam10115fb8;
extern unsigned int *puRam10115fbc;
extern unsigned int *puRam10115fc0;
extern unsigned int *puRam10115fc4;
extern unsigned int *puRam1011606c;
extern unsigned int *puRam1011609c;
extern unsigned int *puRam101160a4;
extern unsigned int *puRam101160b8;
extern unsigned int *puRam101160bc;
extern unsigned int *puRam101160c0;
extern unsigned int *puRam101160c4;
extern unsigned int *puRam10116104;
extern unsigned int *puRam101161dc;
extern unsigned int *puRam10116200;
extern unsigned int *puRam10116204;
extern unsigned int *puRam10116208;
extern unsigned int *puRam10116218;
extern unsigned int *puRam1011627c;
extern unsigned int *puRam101162a4;
extern unsigned int *puRam101162e0;
extern unsigned int *puRam10116354;
extern unsigned int *puRam1011639c;
extern unsigned int *puRam101163ac;
extern unsigned int *puRam10116484;
extern unsigned int *puRam101164c8;
extern unsigned int *puRam10116578;
extern unsigned int *puRam1011677c;
extern unsigned int *puRam10116c3c;
extern unsigned int *puRam10116c68;
extern unsigned int *puRam1011735c;
extern unsigned int *puRam10117360;
extern unsigned int *puRam10117370;
extern unsigned int *puRam101174b0;
extern unsigned int *puRam10117598;
extern unsigned int *puRam101175ac;
extern unsigned int *puRam101175cc;
extern unsigned int *puRam101175e0;
extern unsigned int *puRam101175e4;
extern unsigned int *puRam101175f8;
extern unsigned int *puRam101175fc;
extern unsigned int *puRam10117600;
extern unsigned int *puRam1011760c;
extern unsigned int *puRam10117614;
extern unsigned int *puRam10117618;
extern unsigned int *puRam10117628;
extern unsigned int *puRam10117644;
extern unsigned int *puRam10117658;
extern unsigned int *puRam1011765c;
extern unsigned int *puRam101176a8;
extern unsigned int *puRam101176d8;
extern unsigned int *puRam101176e0;
extern unsigned int *puRam101176e4;
extern unsigned int *puRam101176e8;
extern unsigned int *puRam101176f0;
extern unsigned int *puRam101176f4;
extern unsigned int *puRam1011772c;
extern unsigned int *puRam101177b4;
extern unsigned int *puRam101177c0;
extern unsigned int uRam10115e8c;
extern unsigned int uRam10115ef4;
extern unsigned int uRam10115f28;
extern unsigned int uRam10115f30;
extern unsigned int uRam10115f80;
extern unsigned int uRam10115fd8;
extern unsigned int uRam10116024;
extern unsigned int uRam1011602c;
extern unsigned int uRam10116034;
extern unsigned int uRam1011603c;
extern unsigned int uRam10116044;
extern unsigned int uRam1011604c;
extern unsigned int uRam10116054;
extern unsigned int uRam1011605c;
extern unsigned int uRam10116064;
extern unsigned int uRam1011606c;
extern unsigned int uRam10116070;
extern unsigned int uRam10116074;
extern unsigned int uRam1011607c;
extern unsigned int uRam10116080;
extern unsigned int uRam10116084;
extern unsigned int uRam10116088;
extern unsigned int uRam1011608c;
extern unsigned int uRam10116090;
extern unsigned int uRam101160b8;
extern unsigned int uRam101160bc;
extern unsigned int uRam101160c0;
extern unsigned int uRam101160c4;
extern unsigned int uRam101160d4;
extern unsigned int uRam101160e8;
extern unsigned int uRam101160f8;
extern unsigned int uRam10116100;
extern unsigned int uRam10116108;
extern unsigned int uRam101161e0;
extern unsigned int uRam101161f0;
extern unsigned int uRam1011621c;
extern unsigned int uRam10116220;
extern unsigned int uRam10116228;
extern unsigned int uRam10116234;
extern unsigned int uRam10116250;
extern unsigned int uRam1011626c;
extern unsigned int uRam10116280;
extern unsigned int uRam10116290;
extern unsigned int uRam10116294;
extern unsigned int uRam1011629c;
extern unsigned int uRam101162a0;
extern unsigned int uRam101162a8;
extern unsigned int uRam101162cc;
extern unsigned int uRam101162d0;
extern unsigned int uRam101162e4;
extern unsigned int uRam1011635c;
extern unsigned int uRam101166b0;
extern unsigned int uRam101166d0;
extern unsigned int uRam10116774;
extern unsigned int uRam101167c4;
extern unsigned int uRam10116a38;
extern unsigned int uRam10116a54;
extern unsigned int uRam10116a84;
extern unsigned int uRam10116c34;
extern unsigned int uRam10116c68;
extern unsigned int uRam10116f40;
extern unsigned int uRam101175f8;
extern unsigned int uRam10117604;
extern unsigned int uRam10117608;
extern unsigned int uRam10117610;
extern unsigned int uRam10117664;
extern unsigned int uRam10117668;
extern unsigned int uRam10117684;
extern unsigned int uRam101176cc;
extern unsigned int uRam1011772c;
extern unsigned int uRam101177f0;

/* Address: 0x100402bc Size: 36 bytes */
void FUN_100402bc()

{
  FUN_10040040();
  return;
}

/* Address: 0x100402e0 Size: 84 bytes */
void FUN_100402e0()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100402bc((unsigned long long)uRam10115e8c + 0xc);
  FUN_100402bc(ZEXT48((*(int*)((char*)ppuVar1 - 0x685))) + 0x1c);
  FUN_100402bc(ZEXT48((*(int*)((char*)ppuVar1 - 0x685))) + 0x2c);
  FUN_1003dc28();
  return;
}

/* Address: 0x10040334 Size: 104 bytes */
void FUN_10040334()

{
  long long uVar1;
  int local_24;
  
  uVar1 = FUN_10117884(*piRam10115fa4 + (int)*(short *)(*(int *)*piRam10115fa4 + 0x308),0x696e666f);
  if ((int)uVar1 != 0) {
    FUN_10080cf0(uVar1,*(short *)(**(int **)(local_24 + -0x544) + 0x110));
  }
  return;
}

/* Address: 0x10040788 Size: 424 bytes */
void FUN_10040788()

{
  int iVar1;
  unsigned short *puVar2;
  int *piVar3;
  int *ppuVar4;
  int *piVar12;
  long long uVar5;
  long long uVar6;
  long long uVar7;
  long long uVar8;
  long long uVar9;
  long long uVar10;
  long long uVar11;
  int local_28;
  int local_24;
  
  piVar12 = piRam1011734c;
  piVar3 = piRam10115f7c;
  puVar2 = puRam10115e94;
  ppuVar4 = 0 /* TVect base */;
  iVar1 = *piRam10115f7c;
  *puRam10115e94 = (unsigned short)(iVar1 != 0);
  if ((iVar1 != 0) == 0) {
    FUN_10075894(*piVar12);
    piVar12 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar4 - 0x79)) +
                                  (int)*(short *)(**(int **)(*(int*)((char*)ppuVar4 - 0x79)) + 200),0x3f2,
                                  *(int *)(*piVar12 + 0x88));
    FUN_100db26c();
    *piVar3 = (int)piVar12;
    FUN_10117884((int)piVar12 + (int)*(short *)(*piVar12 + 800));
    FUN_10117884((int)piVar12 + (int)*(short *)(*piVar12 + 0x4c8));
    *puVar2 = 1;
  }
  uVar5 = FUN_1005f678(0x8b,6);
  uVar6 = FUN_1005f678(0x8b,5);
  uVar7 = FUN_1005f678(0x8b,4);
  uVar8 = FUN_1005f678(0x8b,3);
  uVar9 = FUN_1005f678(0x8b,2);
  uVar10 = FUN_1005f678(0x8b,1);
  uVar11 = FUN_1005f678(0x8b,0);
  FUN_10040408(uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5);
  local_28 = 0xca;
  local_24 = 0x3c;
  FUN_100513b4(*piVar3,&local_28,0x3f3);
  FUN_100514d8(*piVar3,0);
  return;
}

/* Address: 0x10040930 Size: 108 bytes */
void FUN_10040930()

{
  short *psVar1;
  int *piVar2;
  
  piVar2 = piRam10115f7c;
  psVar1 = psRam10115e94;
  if (*psRam10115e94 != 0) {
    FUN_10117884(*piRam10115f7c + (int)*(short *)(*(int *)*piRam10115f7c + 0x738));
    *piVar2 = 0;
    *psVar1 = 0;
  }
  return;
}

/* Address: 0x1004099c Size: 52 bytes */
void FUN_1004099c(short param_1)

{
  FUN_100514d8(*puRam10115f7c,param_1);
  return;
}

/* Address: 0x100409d0 Size: 104 bytes */
void FUN_100409d0()

{
  int iVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  FUN_100095fc();
  *(short *)(*(int *)(*(int*)((char*)ppuVar2 - 0x151)) + 0x124) = 0;
  FUN_1003f674(1,1,1);
  iVar1 = *(int *)(*(int *)(*(int*)((char*)ppuVar2 - 0x155)) + 0x88);
  *(short *)(iVar1 + 0x1dc) = 0;
  FUN_1007c714(iVar1,0x3ef);
  return;
}

/* Address: 0x10040a38 Size: 496 bytes */

void FUN_10040a38()

{
  int *puVar1;
  int iVar2;
  int *piVar3;
  int local_14c;
  char auStack_124 [256];
  short local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = puRam10117370;
  FUN_10117884(*piRam10116208 + (int)*(short *)(*(int *)*piRam10116208 + 0x4c8));
  FUN_10117884(**(int **)(local_14c + -0x1504) +
               (int)*(short *)(*(int *)**(int **)(local_14c + -0x1504) + 0x4c8));
  FUN_10117884(**(int **)(local_14c + -0x18fc) +
               (int)*(short *)(*(int *)**(int **)(local_14c + -0x18fc) + 0x4c8));
  FUN_10117884(**(int **)(local_14c + -0x16a0) +
               (int)*(short *)(*(int *)**(int **)(local_14c + -0x16a0) + 0x4c8));
  FUN_10092484(3);
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = *puVar1;
  *puVar1 = auStack_124;
  iVar2 = FUN_10000090(auStack_124);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_10117884(**(int **)(local_14c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_14c + -0x1e4) + 200),
                                 0x119e,*(int *)(**(int **)(local_14c + -0x554) + 0x88));
    FUN_100db26c();
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 800));
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x810));
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738));
    *puVar1 = local_1c;
  }
  else {
    FUN_100db158(local_24,local_20);
  }
  *(short *)(**(int **)(local_14c + -0x544) + 0x158) = 1;
  FUN_100409d0();
  return;
}

/* Address: 0x10040c28 Size: 152 bytes */
void FUN_10040c28()

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  piVar1 = piRam1011735c;
  iVar2 = 0;
  do {
    iVar3 = *piVar1 + iVar2 * 2;
    if ((*(short *)(iVar3 + 0x138) != 0) && (*(short *)(iVar3 + 0xd0) == 1)) {
      *(short *)(iVar3 + 0x138) = 0;
    }
    sVar4 = (short)iVar2 + 1;
    iVar2 = (int)sVar4;
  } while (sVar4 < 8);
  *(short *)(*piVar1 + 0x15c) = 1;
  FUN_10038c60(*(short *)(*piVar1 + 0x110),7,*(short *)(*piVar1 + 0x110),0,
               (unsigned long long)uRam10115e8c + 0x60);
  FUN_10040a38();
  return;
}

/* Address: 0x10040cc0 Size: 168 bytes */
void FUN_10040cc0()

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = piRam1011735c;
  FUN_10092484(10);
  iVar5 = 0;
  do {
    if (*(short *)(*piVar3 + iVar5 * 2 + 0x138) != 0) {
      iVar6 = 0;
      do {
        iVar1 = *piVar3;
        iVar2 = iVar1 + iVar6 * 2;
        if ((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 0)) {
          *(short *)(iVar1 + iVar5 * 2 + 0x1132) = *(short *)(iVar1 + 0x110);
        }
        sVar4 = (short)iVar6 + 1;
        iVar6 = (int)sVar4;
      } while (sVar4 < 8);
    }
    sVar4 = (short)iVar5 + 1;
    iVar5 = (int)sVar4;
  } while (sVar4 < 8);
  return;
}

/* Address: 0x10040d68 Size: 60 bytes */
void FUN_10040d68()

{
  int iVar1;
  
  iVar1 = *(int *)(*piRam1011734c + 0x88);
  *(short *)(iVar1 + 0x1dc) = 0;
  FUN_1007c714(iVar1,0x3ef);
  return;
}

/* Address: 0x10040da4 Size: 532 bytes */

void FUN_10040da4()

{
  int *puVar1;
  int iVar2;
  int *piVar3;
  int local_154;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  FUN_10117884(*piRam10116208 + (int)*(short *)(*(int *)*piRam10116208 + 0x4c8));
  FUN_10117884(**(int **)(local_154 + -0x1504) +
               (int)*(short *)(*(int *)**(int **)(local_154 + -0x1504) + 0x4c8));
  FUN_10117884(**(int **)(local_154 + -0x18fc) +
               (int)*(short *)(*(int *)**(int **)(local_154 + -0x18fc) + 0x4c8));
  FUN_10117884(**(int **)(local_154 + -0x16a0) +
               (int)*(short *)(*(int *)**(int **)(local_154 + -0x16a0) + 0x4c8));
  FUN_10092484(9);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar1;
  *puVar1 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),
                                 0x1194,*(int *)(**(int **)(local_154 + -0x554) + 0x88));
    FUN_100db26c();
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 800));
    *(short *)(**(int **)(local_154 + -0x544) + 0x160) = 1;
    iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x810));
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738));
    if (iVar2 == 0x61636365) {
      FUN_10040c28();
    }
    else {
      FUN_10040d68();
    }
    *puVar1 = local_24;
  }
  else {
    FUN_100db158(local_2c,local_28);
  }
  return;
}

/* Address: 0x1004130c Size: 260 bytes */
int FUN_1004130c(int *param_1)

{
  int *puVar1;
  long long uVar2;
  int iVar3;
  int local_30 [2];
  int local_28;
  short local_24;
  short local_22;
  char auStack_20 [32];
  
  puVar1 = *(int **)(*param_1 + 6);
  FUN_10000b70(puVar1);
  uVar2 = FUN_10000360(puVar1);
  FUN_10002598(puVar1);
  local_22 = 0;
  local_24 = 0;
  local_28 = 0;
  FUN_10001098(local_30,0);
  iVar3 = FUN_10000a98(*puVar1,0xff80,1);
  FUN_100db26c();
  *(char *)(iVar3 + 0x11) = 0;
  FUN_10003240(iVar3,0xff80,0x84,param_1,&local_28,local_30[0],auStack_20);
  FUN_100ef5f0(iVar3);
  FUN_10001b60(puVar1,uVar2);
  return local_28;
}

/* Address: 0x10041410 Size: 284 bytes */
char FUN_10041410(int *param_1)

{
  int *puVar1;
  long long uVar2;
  int iVar4;
  unsigned long long uVar3;
  int local_30 [2];
  unsigned int local_28;
  short local_24;
  short local_22;
  char auStack_20 [32];
  
  puVar1 = *(int **)(*param_1 + 6);
  FUN_10000b70(puVar1);
  uVar2 = FUN_10000360(puVar1);
  FUN_10002598(puVar1);
  local_22 = 0;
  local_24 = 0;
  local_28 = 0;
  FUN_10001098(local_30,0);
  iVar4 = FUN_10000a98(*puVar1,0xff80,1);
  FUN_100db26c();
  *(char *)(iVar4 + 0x11) = 0;
  FUN_10003240(iVar4,0xff80,0x80,param_1,&local_28,local_30[0],auStack_20);
  FUN_100ef5f0(iVar4);
  FUN_10001b60(puVar1,uVar2);
  uVar3 = (unsigned long long)local_28;
  return ('T' - ((0x43555354 < uVar3) + 'T')) +
         (0x43555353 < uVar3 && (unsigned long long)(0x43555354 < uVar3) <= uVar3 - 0x43555354);
}

/* Address: 0x1004152c Size: 308 bytes */
unsigned long long FUN_1004152c(long long param_1,short param_2,int *param_3)

{
  int *puVar1;
  int iVar4;
  unsigned long long uVar2;
  long long uVar3;
  int in_stack_00000018;
  short uStack0000001e;
  unsigned int local_28 [10];
  
  uStack0000001e = param_2;
  if ((param_3 != (int *)0x0) && (iVar4 = FUN_10041410(param_3), iVar4 != 0)) {
    puVar1 = *(int **)(*param_3 + 6);
    FUN_10000b70(puVar1);
    uVar3 = FUN_10000360(puVar1);
    FUN_10002598(puVar1);
    local_28[0] = 0;
    iVar4 = FUN_10000a98(*puVar1,0xff80,1);
    FUN_100db26c();
    *(char *)(iVar4 + 0x11) = 0;
    FUN_10003240(iVar4,0xff80,0x106,param_3,local_28,in_stack_00000018,((char*)0 + 0x0000001e));
    FUN_100ef5f0(iVar4);
    FUN_10001b60(puVar1,uVar3);
    return (unsigned long long)local_28[0];
  }
  uVar2 = FUN_10000330((char)in_stack_00000018);
  return uVar2;
}

/* Address: 0x10041660 Size: 148 bytes */

void FUN_10041660(short param_1,short param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  
  iVar5 = iRam10117584;
  psVar4 = psRam10117580;
  iVar3 = FUN_10115d6c;
  iVar2 = iRam10115d68;
  iVar7 = 0;
  cVar1 = *param_3;
  while (cVar1 != -1) {
    param_1 = param_1 + *(short *)((unsigned int)(unsigned char)param_3[iVar7] * 2 + iVar3);
    param_2 = param_2 + *(short *)((unsigned int)(unsigned char)param_3[iVar7] * 2 + iVar2);
    *(short *)(iVar7 * 4 + iVar5) = param_1;
    *(short *)(iVar7 * 4 + iVar5 + 2) = param_2;
    sVar6 = (short)iVar7 + 1;
    iVar7 = (int)sVar6;
    if (199 < sVar6) break;
    cVar1 = param_3[sVar6];
  }
  *puRam10115e9c = 0;
  *puRam10115e90 = (short)iVar7;
  *psVar4 = param_1;
  psVar4[1] = param_2;
  return;
}






































































































































































/* Address: 0x100416f4 Size: 428 bytes */
void FUN_100416f4(short param_1,short param_2,long long param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  int iVar5;
  short uVar6;
  short sVar7;
  char auStack_160 [200];
  char auStack_98 [16];
  char auStack_88 [136];
  
  iVar5 = iRam101176e8;
  piVar2 = piRam101176e0;
  ppuVar3 = 0 /* TVect base */;
  if (*piRam101176e0 != 0) {
    iVar4 = FUN_10009630(1,param_1,param_2);
    if (iVar4 != 0) {
      if ((param_1 == *(short *)*piVar2) && (param_2 == ((short *)*piVar2)[1])) {
        iVar4 = 0;
        do {
          iVar1 = *(int *)(iVar4 * 4 + iVar5);
          if (iVar1 != 0) {
            *(short *)(iVar1 + 0x12) = 0xffff;
            *(short *)(*(int *)(iVar4 * 4 + iVar5) + 0x14) = 0xffff;
          }
          sVar7 = (short)iVar4 + 1;
          iVar4 = (int)sVar7;
        } while (sVar7 < 8);
        FUN_10007f78();
      }
      else {
        iVar4 = 0;
        do {
          iVar1 = *(int *)(iVar4 * 4 + iVar5);
          if (iVar1 != 0) {
            *(short *)(iVar1 + 0x12) = param_1;
            *(short *)(*(int *)(iVar4 * 4 + iVar5) + 0x14) = param_2;
          }
          sVar7 = (short)iVar4 + 1;
          iVar4 = (int)sVar7;
        } while (sVar7 < 8);
        FUN_100445a8(auStack_98,auStack_160);
        iVar5 = FUN_10043e60(auStack_98);
        if (iVar5 == 0) {
          FUN_10093928();
        }
        else {
          FUN_10041660(*(short *)*piVar2,((short *)*piVar2)[1],auStack_160);
          if (*(short *)(*(int*)((char*)ppuVar3 - 0x553)) == 0) {
            sVar7 = (short)*(char *)(*piVar2 + 7);
          }
          else {
            sVar7 = *(short *)(*(int*)((char*)ppuVar3 - 0x69));
          }
          uVar6 = FUN_10044728(auStack_98,sVar7,auStack_88);
          *(short *)(*(int*)((char*)ppuVar3 - 0x680)) = uVar6;
          FUN_10007f78();
          if (param_4 != 0) {
            FUN_1003dc28();
          }
        }
      }
    }
  }
  return;
}

/* Address: 0x100418a0 Size: 56 bytes */
void FUN_100418a0(short param_1)

{
  FUN_1007ff2c(*(int *)(*piRam1011734c + 0x88),param_1);
  return;
}

/* Address: 0x100418d8 Size: 116 bytes */
void FUN_100418d8(char param_1)

{
  long long in_r9;
  
  if (*piRam101176e0 != 0) {
    if (param_1 == '5') {
      FUN_1003fe04();
    }
    else {
      if ((int)param_1 - 0x31U < 9) {
        return;
      }
      FUN_100418a0(in_r9);
    }
  }
  return;
}

/* Address: 0x100419b0 Size: 840 bytes */

long long FUN_100419b0(short param_1,short param_2,char param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned long long uVar7;
  int iVar8;
  long long uVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  unsigned int local_44;
  
  piVar6 = piRam101176e0;
  piVar5 = piRam1011735c;
  iVar4 = FUN_10115d6c;
  iVar2 = iRam10115d68;
  FUN_10117884((int)*(int **)(*piRam1011734c + 0x88) +
               (int)*(short *)(**(int **)(*piRam1011734c + 0x88) + 0x38),0,0);
  uVar7 = (unsigned long long)local_44;
  if ((((*piVar6 == 0) || (param_1 < 0)) || (param_2 < 0)) || ((0x6f < param_1 || (0x9b < param_2)))
     ) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_10017cb4(param_1,param_2,0);
    psVar1 = (short *)*piVar6;
    if ((*psVar1 == psVar1[9]) && (psVar1[1] == psVar1[10])) {
      psVar1[10] = -1;
      *(short *)(*piVar6 + 0x12) = *(short *)(*piVar6 + 0x14);
    }
    if ((int)uVar9 == 0) {
      FUN_10007f78();
    }
    if ((int)uVar9 == 2) {
      if (param_3 == '\0') {
        iVar2 = *piVar6;
        if (((iVar2 == 0) || (sVar11 = *(short *)(iVar2 + 0x12), sVar11 == -1)) ||
           (sVar12 = *(short *)(iVar2 + 0x14), sVar12 == -1)) {
          if ((short *)*piVar6 == (short *)0x0) {
            sVar11 = *(short *)(*piVar5 + 0x17e);
          }
          else {
            sVar11 = *(short *)*piVar6;
          }
          if (*piVar6 == 0) {
            sVar12 = *(short *)(*piVar5 + 0x180);
          }
          else {
            sVar12 = *(short *)(*piVar6 + 2);
          }
        }
        FUN_100836dc(**(int **)((int)uVar7 + -0x14f4),sVar11,sVar12);
      }
      else {
        FUN_100562e0();
        FUN_100219a8(1,1,1);
      }
      if (*(short *)(*piVar5 + 0x12e) != 0) {
        sVar11 = *(short *)(*piVar5 + 0x136);
        if (sVar11 < 2) {
          sVar11 = 1;
        }
        if (sVar11 == 1) {
          FUN_1005f6b0(0x19,9);
          FUN_10040040();
        }
      }
      uVar9 = 2;
    }
    else {
      FUN_1003dc28();
      iVar8 = (int)uVar7;
      if (*(short *)(*piVar5 + 0x12e) != 0) {
        if ((*(unsigned int *)(*piVar5 + 0x134) >> 0x1c & 1) == 0) {
          iVar13 = 0;
          do {
            iVar10 = FUN_1002be50(*(short *)*piVar6 + *(short *)(iVar13 * 2 + iVar4),
                                  ((short *)*piVar6)[1] + *(short *)(iVar13 * 2 + iVar2));
            iVar8 = (int)uVar7;
            if ((-1 < iVar10) &&
               (iVar3 = *piVar5,
               (int)*(char *)(iVar3 + iVar10 * 0x42 + 0x1619) != (int)*(short *)(iVar3 + 0x110))) {
              *(unsigned int *)(iVar3 + 0x134) = *(unsigned int *)(iVar3 + 0x134) | 0x10000000;
              FUN_1005f6b0(0x19,4);
              FUN_10040040();
              break;
            }
            sVar11 = (short)iVar13 + 1;
            iVar13 = (int)sVar11;
          } while (sVar11 < 8);
        }
        iVar2 = *piVar5;
        if (((-1 < (int)*(unsigned int *)(iVar2 + 0x134)) &&
            (psVar1 = (short *)*piVar6,
            *(char *)((*(unsigned int *)(**(int **)(iVar8 + -0x548) + psVar1[1] * 0xe0 + *psVar1 * 2) >>
                      0x18) + iVar2 + 0x711) == '\v')) && (*(char *)(psVar1 + 2) == '\x1c')) {
          *(unsigned int *)(iVar2 + 0x134) = *(unsigned int *)(iVar2 + 0x134) | 0x80000000;
          FUN_1005f6b0(0x19,5);
          FUN_10040040();
        }
      }
    }
  }
  return uVar9;
}












































































































































































































































































































































































































































































































































































/* Address: 0x10041de8 Size: 1032 bytes */
void FUN_10041de8()

{
  int bVar1;
  char cVar2;
  char cVar3;
  unsigned short uVar4;
  int bVar5;
  int bVar6;
  int bVar7;
  int bVar8;
  int bVar9;
  int bVar10;
  int bVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  unsigned short *puVar15;
  int *piVar16;
  short *psVar17;
  unsigned long long uVar18;
  int iVar19;
  short uVar20;
  short sVar21;
  int iVar22;
  unsigned long long uVar23;
  unsigned long long uVar24;
  char auStack_188 [16];
  char auStack_178 [200];
  char auStack_b0 [176];
  
  psVar17 = psRam101176fc;
  piVar16 = piRam101176e8;
  puVar15 = puRam101176e4;
  piVar14 = piRam101176e0;
  piVar13 = piRam101174b0;
  piVar12 = piRam10117364;
  uVar18 = ZEXT48(0 /* TVect base */);
  *puRam101176e4 = 0;
  *psVar17 = 100;
  iVar19 = *piVar14;
  bVar7 = true;
  bVar8 = true;
  bVar9 = false;
  bVar10 = false;
  bVar11 = false;
  bVar5 = false;
  bVar1 = false;
  bVar6 = false;
  if (iVar19 != 0) {
    if (*(char *)(iVar19 + 4) != '\x1c') {
      iVar19 = 0;
    }
    *piVar13 = iVar19;
  }
  uVar23 = 0;
  do {
    iVar19 = *(int *)((int)((uVar23 & 0xffffffff) << 2) + (int)piVar16);
    if (iVar19 != 0) {
      cVar2 = *(char *)(iVar19 + 4);
      uVar24 = (unsigned long long)cVar2;
      cVar3 = *(char *)(iVar19 + 7);
      uVar4 = *(unsigned short *)(iVar19 + 0xc);
      *puVar15 = *puVar15 + 1;
      if (cVar3 < (char)*psVar17) {
        *psVar17 = (short)cVar3;
      }
      if ((cVar2 == '\x1c') &&
         (iVar19 = FUN_10039e24(*(int *)((int)((uVar23 & 0xffffffff) << 2) + (int)piVar16)),
         iVar19 != 0)) {
        bVar6 = true;
      }
      if (((*(char *)(*piVar12 + (int)(((uVar24 & 0x3fffffff) * 4 - uVar24 & 0xffffffff) << 1)) ==
            '\0') || ((uVar4 & 0x1000) != 0)) && (bVar7 = false, (uVar4 & 0x1000) != 0)) {
        bVar1 = true;
      }
      if (cVar2 == '\x1c') {
LAB_10041f38:
        if (*(char *)(*piVar12 + (int)(((uVar24 & 0x3fffffff) * 4 - uVar24 & 0xffffffff) << 1)) !=
            '\0') goto LAB_10041f54;
      }
      else {
        if (*(char *)(*piVar12 + (int)(((uVar24 & 0x3fffffff) * 4 - uVar24 & 0xffffffff) << 1)) ==
            '\0') {
          bVar8 = false;
          goto LAB_10041f38;
        }
LAB_10041f54:
        if ((uVar4 & 0x1000) == 0) {
          bVar9 = true;
        }
      }
      if (*(char *)(*piVar12 + (int)(((uVar24 & 0x3fffffff) * 4 - uVar24 & 0xffffffff) << 1) + 3) !=
          '\0') {
        bVar5 = true;
      }
      if (*(char *)(*piVar12 + (int)(((uVar24 & 0x3fffffff) * 4 - uVar24 & 0xffffffff) << 1) + 2) !=
          '\0') {
        bVar10 = true;
      }
      if (*(char *)(*piVar12 + (int)(((uVar24 & 0x3fffffff) * 4 - uVar24 & 0xffffffff) << 1) + 1) !=
          '\0') {
        bVar11 = true;
      }
      if ((*piVar13 == 0) && (cVar2 == '\x1c')) {
        *piVar13 = *(int *)((int)((uVar23 & 0xffffffff) << 2) + (int)piVar16);
      }
    }
    iVar19 = (int)uVar18;
    sVar21 = (short)uVar23 + 1;
    uVar23 = (unsigned long long)sVar21;
    if (7 < sVar21) {
      uVar4 = *puVar15;
      **(unsigned short **)(iVar19 + -0x154c) =
           ((uVar4 < 2) + 2) -
           ((unsigned short)((unsigned long long)(uVar4 < 2) < 0xfffffffffffffffe) - ((short)uVar4 >> 0xf)) & 1;
      **(short **)(iVar19 + -400) = 1;
      **(short **)(iVar19 + -0x2ec) = 0;
      if (bVar1) {
        **(short **)(iVar19 + -0x2ec) = 8;
      }
      else if (bVar5) {
        **(short **)(iVar19 + -400) = 0;
      }
      else if (((bVar6) || (bVar7)) || ((bVar8 && (bVar9)))) {
        **(short **)(iVar19 + -400) = 2;
      }
      else {
        if (bVar10) {
          **(unsigned short **)(iVar19 + -0x2ec) = **(unsigned short **)(iVar19 + -0x2ec) | 1;
        }
        if (bVar11) {
          **(unsigned short **)(iVar19 + -0x2ec) = **(unsigned short **)(iVar19 + -0x2ec) | 2;
        }
      }
      if (*piVar14 == 0) {
        *piVar14 = *piVar16;
      }
      iVar22 = 7;
      do {
        if (*piVar14 != 0) {
          if (piVar16[iVar22] != 0) {
            *(short *)(piVar16[iVar22] + 0x12) = *(short *)(*piVar14 + 0x12);
            *(short *)(piVar16[iVar22] + 0x14) = *(short *)(*piVar14 + 0x14);
          }
        }
        bVar1 = iVar22 != 0;
        iVar22 = (int)(short)((short)iVar22 + -1);
      } while (bVar1);
      if (((*(short *)(**(int **)(iVar19 + -0x544) +
                       *(short *)(**(int **)(iVar19 + -0x544) + 0x110) * 2 + 0xd0) == 0) &&
          (-1 < *(short *)(*piVar14 + 0x12))) && (-1 < *(short *)(*piVar14 + 0x14))) {
        FUN_100445a8();
        FUN_10043e60(auStack_188);
        uVar20 = FUN_10044728(auStack_188,*psVar17,auStack_b0);
        **(short **)(iVar19 + -0x1a00) = uVar20;
        FUN_10041660(*(short *)*piVar14,((short *)*piVar14)[1],auStack_178);
      }
      else {
        **(short **)(iVar19 + -0x1a00) = 0;
        **(short **)(iVar19 + -0x1a10) = 0;
        **(short **)(iVar19 + -0x1a04) = 0;
      }
      return;
    }
  } while( true );
}

/* Address: 0x100421f0 Size: 340 bytes */
long long FUN_100421f0(int param_1,int param_2,short param_3)

{
  char cVar1;
  unsigned short uVar2;
  int bVar3;
  int bVar4;
  int bVar5;
  int bVar6;
  int *piVar7;
  int bVar8;
  int bVar9;
  int bVar10;
  int bVar11;
  int iVar12;
  short sVar13;
  long long uVar14;
  unsigned long long uVar15;
  unsigned long long uVar16;
  
  piVar7 = piRam10117364;
  uVar14 = 0;
  uVar15 = 0;
  bVar3 = false;
  bVar6 = false;
  bVar4 = true;
  bVar5 = true;
  bVar8 = false;
  bVar9 = true;
  bVar10 = true;
  bVar11 = false;
  if (0 < param_3) {
    do {
      bVar6 = bVar11;
      bVar5 = bVar10;
      bVar4 = bVar9;
      bVar3 = bVar8;
      iVar12 = *(int *)(param_1 + (int)((uVar15 & 0xffffffff) << 2));
      if (iVar12 != 0) {
        if (*(short *)(param_2 + (int)((uVar15 & 0xffffffff) << 1)) != 0) {
          cVar1 = *(char *)(iVar12 + 4);
          uVar16 = (unsigned long long)cVar1;
          uVar2 = *(unsigned short *)(iVar12 + 0xc);
          if (cVar1 == '\x1c') {
            iVar12 = FUN_10039e24(iVar12);
            if (iVar12 != 0) {
              bVar3 = true;
            }
          }
          if ((*(char *)(*piVar7 + (int)(((uVar16 & 0x3fffffff) * 4 - uVar16 & 0xffffffff) << 1)) ==
               '\0') || ((uVar2 & 0x1000) != 0)) {
            bVar4 = false;
          }
          if (cVar1 == '\x1c') {
LAB_100422d0:
            if (*(char *)(*piVar7 + (int)(((uVar16 & 0x3fffffff) * 4 - uVar16 & 0xffffffff) << 1))
                == '\0') goto LAB_100422f8;
          }
          else if (*(char *)(*piVar7 + (int)(((uVar16 & 0x3fffffff) * 4 - uVar16 & 0xffffffff) << 1)
                            ) == '\0') {
            bVar5 = false;
            goto LAB_100422d0;
          }
          if ((uVar2 & 0x1000) == 0) {
            bVar6 = true;
          }
        }
      }
LAB_100422f8:
      sVar13 = (short)uVar15 + 1;
      uVar15 = (unsigned long long)sVar13;
      bVar8 = bVar3;
      bVar9 = bVar4;
      bVar10 = bVar5;
      bVar11 = bVar6;
    } while (sVar13 < param_3);
  }
  if (((bVar3) || (bVar4)) || ((bVar5 && (bVar6)))) {
    uVar14 = 1;
  }
  return uVar14;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10042344(int param_1,int param_2,short param_3) { }























/* Address: 0x100448e4 Size: 108 bytes */
void FUN_100448e4(short param_1,short param_2,short param_3,short param_4,
                 unsigned short param_5)

{
  short local_d8;
  short local_d6;
  short local_d4;
  short local_d2;
  unsigned short local_d0;
  short local_ce;
  char *local_cc;
  char auStack_c8 [200];
  
  *puRam101175ac = param_1;
  local_cc = auStack_c8;
  local_d0 = param_5 | 0x10;
  local_d8 = param_2;
  local_d6 = param_3;
  local_d4 = param_2;
  local_d2 = param_3;
  local_ce = param_4;
  FUN_10043e60(&local_d8);
  return;
}

/* Address: 0x10044950 Size: 108 bytes */
int * FUN_10044950()

{
  int *puVar1;
  int *puVar2;
  int *ppuVar3;
  int **local_2c;
  
  puVar2 = puRam10117598;
  ppuVar3 = 0 /* TVect base */;
  if (*psRam10115ea4 == 0) {
    ppuVar3 = 0 /* TVect base */;
    FUN_100424e4();
  }
  puVar1 = *(int **)(*(int*)((char*)ppuVar3 - 0xc3));
  if (puVar1 != (int *)0x0) {
    FUN_10002598(puVar1);
    ppuVar3 = local_2c;
  }
  *puVar2 = *puVar1;
  *(int **)(*(int*)((char*)ppuVar3 - 0xc1)) = puVar2;
  return puVar2;
}

/* Address: 0x100449bc Size: 84 bytes */
void FUN_100449bc()

{
  int *piVar1;
  int local_2c;
  
  piVar1 = piRam10117594;
  if (*piRam10117594 != 0) {
    FUN_10002ad8();
  }
  FUN_10001f50(*piVar1);
  **(short **)(local_2c + -0x19fc) = 0;
  return;
}

/* Address: 0x10044a10 Size: 592 bytes */
long long FUN_10044a10(int param_1,int *param_2)

{
  int uVar1;
  short sVar2;
  long long uVar3;
  int iVar4;
  int *piVar5;
  char uVar6;
  int uVar7;
  short uVar8;
  unsigned long long uVar9;
  short sVar10;
  short sVar11;
  int local_6c;
  int local_48;
  int local_44;
  char auStack_40 [8];
  int local_38;
  int local_34;
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar9 = (unsigned long long)uRam101176cc;
    FUN_10000b70(param_2);
    if (*param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar7 = *(int *)(*param_2 + 2);
      uVar1 = *(int *)(*param_2 + 6);
      /* ((short)local_34) = (short)uVar1; */
      /* ((short)local_38) = (short)uVar7; */
      sVar11 = ((short)local_34) - ((short)local_38);
      /* ((short)((unsigned int)local_34 >> 16)) = (short)((unsigned int)uVar1 >> 0x10); */
      /* ((short)((unsigned int)local_38 >> 16)) = (short)((unsigned int)uVar7 >> 0x10); */
      sVar10 = ((short)((unsigned int)local_34 >> 16)) - ((short)((unsigned int)local_38 >> 16));
      local_38 = uVar7;
      local_34 = uVar1;
      iVar4 = FUN_1000a12c(param_1,sVar11,sVar10,8,0,1);
      if (iVar4 == 0) {
        FUN_100db1ec();
        uVar3 = 0;
      }
      else {
        iVar4 = FUN_10001d70(*(int *)(*(int *)(param_1 + 0x10) + 2));
        if (iVar4 == 0) {
          piVar5 = (int *)FUN_10001170();
          sVar2 = *(short *)(**(int **)(*piVar5 + 0x16) + 0x20);
          FUN_10003108(auStack_40,0,0,sVar11,sVar10);
          iVar4 = local_6c;
          uVar6 = FUN_100f1574(1);
          if (sVar2 == 8) {
            uVar8 = 0;
            uVar7 = 0;
          }
          else {
            uVar8 = 8;
            uVar7 = **(int **)(iVar4 + -0x1cc);
          }
          FUN_10003198(param_1 + 0x10,uVar8,auStack_40,uVar7,0,0x10000000);
          **(char **)(local_6c + -0x3c) = uVar6;
          iVar4 = FUN_10001d70(*(int *)(*(int *)(param_1 + 0x10) + 2));
          if (iVar4 == 0) {
            return 0;
          }
        }
        FUN_10000870(&local_44,&local_48);
        iVar4 = *(int *)(param_1 + 0x10);
        FUN_10000888(iVar4,0);
        FUN_10003108(&local_38,0,0,sVar11,sVar10);
        FUN_10000b70(param_2);
        FUN_100b2268(uVar9);
        FUN_100008b8();
        FUN_100b2268(uVar9 + 0x5fa);
        FUN_100021c0();
        FUN_10000750(param_2,&local_38);
        FUN_10003468(*(int *)(iVar4 + 2));
        FUN_10000888(local_44,local_48);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

/* Address: 0x10044c60 Size: 216 bytes */
int FUN_10044c60(long long param_1,long long param_2,int param_3)

{
  char cVar1;
  short sVar4;
  unsigned int uVar3;
  long long uVar2;
  char auStack_110 [272];
  
  sVar4 = FUN_100012c0(param_3);
  while (sVar4 = sVar4 + -1, -1 < sVar4) {
    cVar1 = *(char *)(param_3 + sVar4);
    if ((cVar1 == ' ') || (cVar1 == '.')) {
      *(char *)(param_3 + sVar4) = 0;
    }
  }
  uVar3 = FUN_100012c0(param_3);
  if (8 < uVar3) {
    *(char *)(param_3 + 8) = 0;
  }
  FUN_100b19f4(auStack_110,param_3);
  uVar2 = FUN_100b1c84(auStack_110);
  uVar2 = FUN_10003540(0x50494354,uVar2);
  FUN_100db328();
  FUN_10044a10(param_1,uVar2);
  return 0;
}

/* Address: 0x10044d38 Size: 84 bytes */
void FUN_10044d38(long long param_1,short param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10001728(0x50494354,param_2);
  FUN_100db328();
  FUN_10044a10(param_1,uVar1);
  return;
}

/* Address: 0x100453f0 Size: 1752 bytes */
void FUN_100453f0()

{
  int uVar1;
  unsigned int uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *puVar8;
  int *ppuVar9;
  int iVar12;
  long long uVar10;
  long long uVar11;
  short sVar13;
  short sVar14;
  int local_414;
  char auStack_3e4 [80];
  char auStack_394 [72];
  char auStack_34c [256];
  char auStack_24c [256];
  char auStack_14c [256];
  unsigned short local_4c [2];
  char local_48 [7];
  char local_41;
  char auStack_38 [56];
  int uVar2;
  
  puVar8 = puRam101175f8;
  iVar7 = iRam10115ef0;
  iVar6 = iRam10115eec;
  iVar5 = iRam10115ee4;
  ppuVar9 = 0 /* TVect base */;
  local_4c[0] = 0;
  uVar1 = *(int *)(iRam10115ed8 + 0x114);
  uVar2 = *(int *)(iRam10115ed8 + 0x118);
  uVar3 = *(unsigned int *)(iRam10115ed8 + 0x11c);
  *puRam101175f8 = *(int *)(iRam10115ed8 + 0x110);
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  puVar8[3] = uVar3 & 0xff000000;
  iVar12 = FUN_1005f36c(0x44415420,puVar8);
  if ((iVar12 != 0) && (uVar10 = FUN_10051f98(0x44415420,puVar8,1), (int)uVar10 != 0)) {
    FUN_10052490(uVar10,local_48,10);
    FUN_100523a8(uVar10,1);
    local_41 = 0;
    iVar12 = 0;
    do {
      cVar4 = local_48[iVar12];
      if (((cVar4 == ' ') || (cVar4 == '\r')) || (cVar4 == '\t')) {
        local_48[iVar12] = '\0';
      }
      sVar14 = (short)iVar12 + 1;
      iVar12 = (int)sVar14;
    } while (sVar14 < 8);
    iVar12 = FUN_100001e0(local_48,ZEXT48((*(int*)((char*)ppuVar9 - 0x672))) + 0x120);
    if (iVar12 != 0) {
      iVar12 = local_414;
      FUN_100b19f4(auStack_14c,local_48);
      FUN_100b19f4(auStack_24c,(unsigned long long)*(unsigned int *)(iVar12 + -0x19c8) + 0x124);
      uVar10 = FUN_100b1c84(auStack_24c);
      uVar11 = FUN_100b1c84(auStack_14c);
      iVar12 = FUN_10001998(uVar11,uVar10,0,0);
      if (iVar12 == 0) {
        iVar12 = *(int *)(**(int **)(local_414 + -0x554) + 0x88);
        if (*(int *)(iVar12 + 0x154) == 0) {
          FUN_100b19f4(auStack_34c,local_48);
          FUN_10027a58(3,auStack_34c,0,auStack_394);
          FUN_1007eea4(iVar12,auStack_394);
          FUN_10117884((int)*(int **)(iVar12 + 0x154) +
                       (int)*(short *)(**(int **)(iVar12 + 0x154) + 0x118));
        }
        else {
          FUN_1007ef3c(iVar12);
        }
        uVar3 = *(unsigned int *)(local_414 + -0x19c8);
        FUN_10001dd0(auStack_3e4,(unsigned long long)uVar3 + 300,local_48);
        FUN_10044d8c(0x1a);
        FUN_10044d8c(0x1b);
        FUN_10001290(*(int *)(*(int *)(iVar5 + 0x220) + 0x10));
        FUN_10002c10();
        FUN_10044d8c(0x29);
        FUN_10001290(*(int *)(*(int *)(iVar5 + 0x338) + 0x10));
        FUN_10002c10();
        iVar12 = FUN_10044c60(iVar7,(unsigned long long)uVar3 + 0x134,auStack_3e4);
        if (iVar12 != 0) {
          if (*(int *)(iVar7 + 0x10) != 0) {
            FUN_10009a98(*(int *)(iVar7 + 0x10));
          }
          FUN_1005262c(local_4c,iVar7,iVar6,0xf4);
          if (*(int *)(iVar6 + 0x10) != 0) {
            FUN_10009a98(*(int *)(iVar6 + 0x10));
          }
          FUN_100451f4(0x1a);
          FUN_10009b48(*(int *)(iVar5 + 0x20c),0x168,0,0x28,0x28,iVar7,0x50,200);
          FUN_1004530c(0x1a);
          FUN_100451f4(0x1b);
          iVar12 = *(int *)(*(int *)(iVar5 + 0x220) + 0x10);
          if (iVar12 != 0) {
            FUN_10009a98(iVar12);
          }
          sVar14 = 0;
          do {
            sVar13 = 0;
            do {
              FUN_10009b48(iVar7,0x50,200,0x28,0x28,*(int *)(iVar5 + 0x220),sVar13 * 0x28,
                           sVar14 * 0x28);
              sVar13 = sVar13 + 1;
            } while (sVar13 < 0xe);
            sVar14 = sVar14 + 1;
          } while (sVar14 < 2);
          sVar14 = 2;
          do {
            sVar13 = 0;
            do {
              FUN_10009b48(iVar7,0x50,200,0x28,0x28,*(int *)(iVar5 + 0x220),sVar13 * 0x28,
                           sVar14 * 0x28);
              sVar13 = sVar13 + 1;
            } while (sVar13 < 4);
            sVar14 = sVar14 + 1;
          } while (sVar14 < 4);
          sVar14 = 4;
          do {
            sVar13 = 0;
            do {
              FUN_10009b48(iVar7,0x50,200,0x28,0x28,*(int *)(iVar5 + 0x220),sVar13 * 0x28,
                           sVar14 * 0x28);
              sVar13 = sVar13 + 1;
            } while (sVar13 < 0x10);
            sVar14 = sVar14 + 1;
          } while (sVar14 < 6);
          FUN_10009d38(iVar7,0,0xa0,0x50,0x50,*(int *)(iVar5 + 0x220),0,0);
          FUN_10009d38(iVar7,0,0,0x1e0,0x50,*(int *)(iVar5 + 0x220),0x50,0);
          FUN_10009d38(iVar7,0x1e0,0,0xa0,0x50,*(int *)(iVar5 + 0x220),0,0x50);
          FUN_10009d38(iVar7,0,0x50,0x280,0x50,*(int *)(iVar5 + 0x220),0,0xa0);
          FUN_1004530c(0x1b);
          iVar12 = *(int *)(*(int *)(iVar5 + 0x220) + 0x10);
          if (iVar12 != 0) {
            FUN_10009b00(iVar12);
          }
          FUN_100451f4(0x29);
          iVar12 = *(int *)(*(int *)(iVar5 + 0x338) + 0x10);
          if (iVar12 != 0) {
            FUN_10009a98(iVar12);
          }
          uVar10 = FUN_100226b0(auStack_38,0xc0,0x28,0x180,0x28);
          FUN_10047cbc(*(int *)(iVar5 + 0x338),uVar10,0xf4);
          FUN_10009d38(iVar7,0x50,0xa0,0x180,0x28,*(int *)(iVar5 + 0x338),0xc0,0x28);
          if (*(int *)(iVar6 + 0x10) != 0) {
            FUN_10009b00(*(int *)(iVar6 + 0x10));
          }
          FUN_1000a094(iVar7);
          FUN_1000a094(iVar6);
          local_4c[0] = (unsigned short)((unsigned int)*(int *)(iVar5 + 0x334) >> 0x19) & 1;
          FUN_1005262c(local_4c,*(int *)(iVar5 + 0x338),*(int *)(iVar5 + 0x340),0xf4);
          *(unsigned int *)(iVar5 + 0x334) =
               ((int)(short)local_4c[0] & 1U) << 0x19 | *(unsigned int *)(iVar5 + 0x334) & 0xfdffffff;
          FUN_1004530c(0x29);
          iVar5 = *(int *)(*(int *)(iVar5 + 0x338) + 0x10);
          if (iVar5 != 0) {
            FUN_10009b00(iVar5);
          }
        }
      }
    }
  }
  return;
}




































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1004602c Size: 304 bytes */
void FUN_1004602c()
{
  return;
}

/* Address: 0x1004615c Size: 364 bytes */

void FUN_1004615c(short param_1,int param_2,int param_3,int param_4)

{
  int _uStack0000001c;
  int _uStack00000020;
  int _uStack00000024;
  int iVar1;
  short uVar2;
  int *ppuVar3;
  int *ppuVar4;
  short sVar5;
  int iVar6;
  unsigned long long uVar7;
  short uStack0000001c;
  short uStack0000001e;
  short uStack00000020;
  short uStack00000022;
  short uStack00000024;
  short uStack00000026;
  
  iVar1 = iRam10115ee4;
  uVar2 = uStack00000024;
  ppuVar3 = 0 /* TVect base */;
  ppuVar4 = 0 /* TVect base */;
  uVar7 = (unsigned long long)param_1;
  _uStack0000001c = param_2;
  _uStack00000020 = param_3;
  _uStack00000024 = param_4;
  if ((*(unsigned int *)((int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0xffffffff) << 2) + iRam10115ee4) >> 0x1d
      & 1) == 0) {
    iVar6 = 0;
    ppuVar4 = 0 /* TVect base */;
    if (0 < *psRam10115ee8) {
      do {
        if ((*(unsigned int *)(iVar6 * 0x14 + iRam10115ee4) >> 0x1d & 1) != 0) {
          if (*(char *)(iVar6 * 0x14 + iRam10115ee4 + 8) ==
              *(char *)((int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0xffffffff) << 2) + iRam10115ee4 +
                       8)) {
            FUN_100450f4(iVar6);
            ppuVar4 = ppuVar3;
            break;
          }
        }
        sVar5 = (short)iVar6 + 1;
        iVar6 = (int)sVar5;
      } while (sVar5 < *psRam10115ee8);
    }
    FUN_10044d8c(uVar7);
  }
  else {
    FUN_10045f0c(uVar7);
  }
  iVar6 = (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x3fffffff) << 2);
  if ((*(unsigned int *)(iVar6 + iVar1) >> 0x1a & 1) == 0) {
    FUN_10047a64(*(int *)(iVar6 + iVar1 + 4),((char*)0 + 0x0000001c),uVar2,uStack00000026);
  }
  else {
    FUN_10009d38(*(int *)
                  ((int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0xffffffff) << 2) + iVar1 + 4),
                 uStack0000001c,uStack0000001e,uStack00000020,uStack00000022,(*(int*)((char*)ppuVar4 - 0x482)),uVar2,
                 uStack00000026);
  }
  return;
}

/* Address: 0x1004645c Size: 160 bytes */
short FUN_1004645c(short param_1)

{
  int *ppuVar1;
  int iVar2;
  unsigned short uVar3;
  short sVar4;
  char auStack_48 [30];
  short local_2a;
  
  ppuVar1 = 0 /* TVect base */;
  iVar2 = FUN_10048c3c((int)param_1);
  if (iVar2 < 1) {
    sVar4 = 0;
  }
  else {
    FUN_10049628(*(char *)(*(int *)(*(int*)((char*)ppuVar1 - 0x151)) + param_1 * 0x42 + iVar2 + 0x1619),
                 auStack_48);
    uVar3 = FUN_10003768(local_2a);
    sVar4 = ((short)uVar3 >> 1) + (unsigned short)((short)uVar3 < 0 && (uVar3 & 1) != 0);
  }
  return sVar4;
}

/* Address: 0x100464fc Size: 64 bytes */
void FUN_100464fc()

{
  int iVar1;
  
  iVar1 = *(int *)(*piRam1011734c + 0x88);
  *(short *)(iVar1 + 0x1de) = *puRam10115ef8;
  FUN_1007c714(iVar1,0x3f0);
  return;
}

/* Address: 0x1004653c Size: 108 bytes */
void FUN_1004653c()

{
  long long uVar1;
  
  if (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0xc + 0x1142) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004e384(4,0,0,0);
  }
  FUN_100464fc(uVar1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100465a8(short param_1) { }













































/* Address: 0x100466d4 Size: 1704 bytes */


void FUN_100466d4(short param_1)

{
  unsigned int *puVar1;
  int *puVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int *piVar8;
  int *piVar9;
  long long uVar6;
  short sVar10;
  unsigned long long uVar11;
  int local_914;
  char auStack_8f0 [256];
  char auStack_7f0 [256];
  char auStack_6f0 [256];
  char auStack_5f0 [256];
  char auStack_4f0 [256];
  char auStack_3f0 [256];
  char auStack_2f0 [2];
  char auStack_2ee [62];
  char auStack_2b0 [80];
  char auStack_260 [256];
  short local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  char auStack_144 [324];
  
  iVar5 = FUN_101175c4;
  iVar4 = FUN_101175c4;
  psVar3 = FUN_101175bc;
  puVar2 = puRam10117370;
  puVar1 = puRam1011735c;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = 0;
  local_158 = *puRam10117370;
  *puRam10117370 = auStack_260;
  iVar7 = FUN_10000090(auStack_260);
  if (iVar7 == 0) {
    piVar8 = (int *)FUN_10117884(**(int **)(local_914 + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_914 + -0x1e4) + 200),0xee2
                                 ,*(int *)(**(int **)(local_914 + -0x554) + 0x88));
    FUN_100db26c();
    iVar7 = FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x7f8));
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x24) = 0x70696374;
    }
    piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x68656164);
    if (piVar9 != (int *)0x0) {
      uVar6 = FUN_1005f678(0x45,param_1);
      FUN_100b19f4(auStack_5f0,uVar6);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_5f0,0);
    }
    iVar7 = local_914;
    FUN_1003206c(2,0xe0,0xff,0xf9);
    uVar6 = FUN_1005f678(0x46,param_1);
    FUN_10001dd0(auStack_2b0,uVar6,
                 (unsigned long long)*puVar1 +
                 (((long long)**(short **)(iVar7 + -0x19a8) & 0x7ffffffU) * 0x20 +
                  (long long)**(short **)(iVar7 + -0x19a8) & 0x7fffffff) * 2 + 0x1608);
    piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x73747231);
    if (piVar9 != (int *)0x0) {
      FUN_100b19f4(auStack_6f0,auStack_2b0);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_6f0,0);
    }
    iVar7 = local_914;
    uVar6 = FUN_1005f678(0x47,0);
    FUN_10001dd0(auStack_2b0,uVar6,**(short **)(iVar7 + -0x2e8));
    piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x73747232);
    if (piVar9 != (int *)0x0) {
      FUN_100b19f4(auStack_7f0,auStack_2b0);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_7f0,0);
    }
    uVar6 = FUN_1005f678(0x48,*psVar3 != 1);
    FUN_10001dd0(auStack_2b0,uVar6,*psVar3);
    piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x73747233);
    if (piVar9 != (int *)0x0) {
      FUN_100b19f4(auStack_8f0,auStack_2b0);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_8f0,0);
    }
    iVar7 = local_914;
    uVar6 = FUN_1005f678(0x49,**(short **)(local_914 + -0x2e0) != 1);
    FUN_10001dd0(auStack_2b0,uVar6,**(short **)(iVar7 + -0x2e0));
    piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x73747234);
    if (piVar9 != (int *)0x0) {
      FUN_100b19f4(auStack_144,auStack_2b0);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_144,0);
    }
    uVar11 = 0;
    if (0 < *psVar3) {
      do {
        uVar6 = FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),uVar11 + 0x61726d31);
        if ((int)uVar6 != 0) {
          FUN_10079ee8(uVar6,*(short *)((int)((uVar11 & 0xffffffff) << 1) + iVar4),
                       *(short *)(*puVar1 + 0x110),0);
          FUN_1007a018(uVar6,1,0,0,0);
        }
        FUN_10049628(*(short *)((int)((uVar11 & 0xffffffff) << 1) + iVar4),auStack_2f0);
        piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),
                                     uVar11 + 0x74797031);
        if (piVar9 != (int *)0x0) {
          FUN_100b19f4(auStack_3f0,auStack_2ee);
          FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_3f0,0);
        }
        FUN_10001dd0(auStack_2b0,*(int *)(local_914 + -0x19ac),
                     *(short *)((int)((uVar11 & 0xffffffff) << 1) + iVar5));
        piVar9 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),
                                     uVar11 + 0x676f6c31);
        if (piVar9 != (int *)0x0) {
          FUN_100b19f4(auStack_4f0,auStack_2b0);
          FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),auStack_4f0,0);
        }
        sVar10 = (short)uVar11 + 1;
        uVar11 = (unsigned long long)sVar10;
      } while (sVar10 < *psVar3);
    }
    if ((int)uVar11 < 3) {
      do {
        uVar6 = FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),uVar11 + 0x61726d31);
        if ((int)uVar6 != 0) {
          FUN_10079ee8(uVar6,0xffffffffffffffff,*(short *)(*puVar1 + 0x110),0);
          FUN_1007a018(uVar6,1,0,0,0);
        }
        sVar10 = (short)uVar11 + 1;
        uVar11 = (unsigned long long)sVar10;
      } while (sVar10 < 3);
    }
    FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x810));
    FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x738));
    *puVar2 = local_158;
  }
  else {
    FUN_100db158(local_160,local_15c);
  }
  return;
}












































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10046d7c Size: 352 bytes */
long long FUN_10046d7c()

{
  short *puVar1;
  int *piVar2;
  int *ppuVar3;
  long long lVar4;
  short sVar6;
  long long uVar5;
  long long lVar7;
  
  piVar2 = piRam1011735c;
  puVar1 = puRam10115ef8;
  ppuVar3 = 0 /* TVect base */;
  lVar4 = FUN_1004645c(*puRam10115ef8);
  lVar7 = lVar4 + *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186);
  if (30000 < (int)lVar7) {
    lVar7 = 30000;
  }
  *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186) = (short)lVar7;
  FUN_100465a8(*puVar1);
  if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0xd0) == 0) {
    FUN_100466d4(0);
    FUN_1003f674(0,0,1);
    *(short *)(*(int*)((char*)ppuVar3 - 0x669)) = 0;
  }
  sVar6 = FUN_1005f230(1,5,0);
  *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0x1122) =
       *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0x1122) + sVar6;
  if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0xc + 0x1142) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1004e384(1,0,lVar4,0);
  }
  return uVar5;
}

/* Address: 0x1004702c Size: 356 bytes */
long long FUN_1004702c()

{
  short *puVar1;
  int *piVar2;
  int *ppuVar3;
  long long lVar4;
  short sVar6;
  long long uVar5;
  long long lVar7;
  
  piVar2 = piRam1011735c;
  puVar1 = puRam10115ef8;
  ppuVar3 = 0 /* TVect base */;
  lVar4 = FUN_1004639c(*puRam10115ef8);
  FUN_10046edc(*puVar1);
  lVar7 = lVar4 + *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186);
  if (30000 < (int)lVar7) {
    lVar7 = 30000;
  }
  *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186) = (short)lVar7;
  if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0xd0) == 0) {
    FUN_100466d4(1);
    FUN_1003f674(0,0,1);
    *(short *)(*(int*)((char*)ppuVar3 - 0x669)) = 0;
  }
  sVar6 = FUN_1005f230(1,10,0);
  *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0x1122) =
       *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0x1122) + sVar6 + 5;
  if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0xc + 0x1142) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1004e384(1,0,lVar4,0);
  }
  return uVar5;
}

/* Address: 0x10047190 Size: 356 bytes */
long long FUN_10047190()

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  unsigned int *puVar4;
  short sVar6;
  long long uVar5;
  int local_84;
  char auStack_60 [96];
  
  puVar4 = puRam1011735c;
  psVar3 = psRam10115efc;
  psVar2 = psRam10115ef8;
  FUN_10001dd0(auStack_60,(unsigned long long)uRam10115ef4 + 8,
               (unsigned long long)*puRam1011735c +
               (((long long)*psRam10115ef8 & 0x7ffffffU) * 0x20 + (long long)*psRam10115ef8 &
               0x7fffffff) * 2 + 0x1608);
  FUN_1003c938(auStack_60);
  FUN_10117884(**(int **)(local_84 + -0x14f4) +
               (int)*(short *)(*(int *)**(int **)(local_84 + -0x14f4) + 0x4d0));
  iVar1 = *puVar4 + *psVar2 * 0x42;
  FUN_1004f438(*(short *)(iVar1 + 0x1604),*(short *)(iVar1 + 0x1606),*psVar3 == 0);
  *psVar3 = 0;
  sVar6 = FUN_1005f230(1,0xf);
  *(short *)(*puVar4 + *(short *)(*puVar4 + 0x110) * 2 + 0x1122) =
       *(short *)(*puVar4 + *(short *)(*puVar4 + 0x110) * 2 + 0x1122) + sVar6 + 10;
  if (*(short *)(*puVar4 + *(short *)(*puVar4 + 0x110) * 0xc + 0x1142) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1004e384(2,0,0,0);
  }
  return uVar5;
}

/* Address: 0x100479f4 Size: 112 bytes */
long long FUN_100479f4(short param_1)

{
  char *puVar1;
  
  puVar1 = puRam10115f04;
  if (param_1 == -1) {
    *puRam10115f04 = 1;
  }
  else {
    FUN_100b2268((((long long)param_1 & 0x3fffffffU) * 4 - (long long)param_1 & 0x7fffffff) * 2 +
                 (unsigned long long)uRam101176cc);
    FUN_100021c0();
    *puVar1 = 0;
  }
  return 0;
}

/* Address: 0x10047abc Size: 512 bytes */
void FUN_10047abc(short *param_1,short param_2,short param_3)

{
  short sVar1;
  
  if (param_3 < param_2) {
    FUN_100479f4(param_3);
    sVar1 = param_1[3];
    FUN_10000270(*param_1 + param_1[2] + -1,param_1[1]);
    FUN_10000288(0,sVar1 + -1);
    sVar1 = param_1[2];
    FUN_10000270(*param_1,param_1[1] + param_1[3] + -1);
    FUN_10000288(sVar1 + -1,0);
    FUN_100479f4(param_2);
    sVar1 = param_1[2];
    FUN_10000270(*param_1,param_1[1]);
    FUN_10000288(sVar1 + -1,0);
    sVar1 = param_1[3];
    FUN_10000270(*param_1,param_1[1]);
    FUN_10000288(0,sVar1 + -1);
  }
  else {
    FUN_100479f4(param_2);
    sVar1 = param_1[2];
    FUN_10000270(*param_1,param_1[1]);
    FUN_10000288(sVar1,0);
    sVar1 = param_1[3];
    FUN_10000270(*param_1,param_1[1]);
    FUN_10000288(0,sVar1);
    FUN_100479f4(param_3);
    sVar1 = param_1[3];
    FUN_10000270(*param_1 + param_1[2] + -1,param_1[1]);
    FUN_10000288(0,sVar1 + -1);
    sVar1 = param_1[2];
    FUN_10000270(*param_1,param_1[1] + param_1[3] + -1);
    FUN_10000288(sVar1 + -1,0);
  }
  return;
}

/* Address: 0x10047f28 Size: 160 bytes */
void FUN_10047f28()

{
  int iVar1;
  short *puVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = piRam1011735c;
  psVar3 = psRam1011677c;
  puVar2 = puRam10115d98;
  iVar5 = FUN_10047d80(*psRam1011677c,*puRam10115d98);
  *(char *)(*piVar4 + *psVar3 * 0x42 + 0x1630) = (char)*puVar2;
  iVar1 = *piVar4 + *psVar3 * 0x42;
  *(char *)(iVar1 + 0x1631) = *(char *)(iVar1 + iVar5 + 0x161e);
  FUN_100230e8(1);
  FUN_10025598();
  FUN_1002279c();
  return;
}

/* Address: 0x10047fc8 Size: 140 bytes */
void FUN_10047fc8(short param_1)

{
  char cVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  cVar1 = *(char *)(*piRam1011735c + *psRam1011677c * 0x42 + (int)param_1 + 0x161a);
  if (-1 < cVar1) {
    *psRam10115d98 = (short)cVar1;
  }
  FUN_10047f28();
  FUN_10117884((int)*(int **)(*(int *)(*(int*)((char*)ppuVar2 - 0x155)) + 0x88) +
               (int)*(short *)(**(int **)(*(int *)(*(int*)((char*)ppuVar2 - 0x155)) + 0x88) + 0x38),0,0);
  return;
}

/* Address: 0x10048054 Size: 228 bytes */
void FUN_10048054()

{
  short *psVar1;
  int *piVar2;
  
  piVar2 = piRam1011735c;
  psVar1 = psRam1011677c;
  *(char *)(*piRam1011735c + *psRam1011677c * 0x42 + 0x1631) = 0;
  *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1636) = 0;
  *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1638) = 0xffff;
  *(short *)(*piVar2 + *psVar1 * 0x42 + 0x163a) = 0xffff;
  *puRam10115d98 = 0xffff;
  *(char *)(*piVar2 + *psVar1 * 0x42 + 0x1630) = 0xff;
  FUN_100230e8(1);
  FUN_10025598();
  FUN_1002279c();
  return;
}

/* Address: 0x10048138 Size: 596 bytes */
void FUN_10048138(short param_1,short param_2,short param_3)

{
  short *psVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  short sVar5;
  short local_20 [2];
  char auStack_1c [28];
  
  piVar2 = piRam1011735c;
  psVar1 = psRam1011677c;
  ppuVar3 = 0 /* TVect base */;
  if (((param_3 == 1) && (iVar4 = FUN_100efbcc(), iVar4 == 0)) && (*(short *)(*(int*)((char*)ppuVar3 - 0x6c7)) == 0))
  {
    sVar5 = FUN_1002bf64(param_1,param_2,*(short *)(*piVar2 + 0x110),0);
    if (sVar5 != *psVar1) {
      FUN_10025758(2,param_1,param_2);
    }
  }
  else {
    if (*(char *)(*piVar2 + *psVar1 * 0x42 + 0x1631) < '\x01') {
      return;
    }
    iVar4 = FUN_1002c120(param_1,param_2);
    FUN_10047de8(iVar4,auStack_1c,local_20);
    if (iVar4 == *psVar1) {
      *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1636) = 0;
      *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1638) = 0xffff;
      *(short *)(*piVar2 + *psVar1 * 0x42 + 0x163a) = 0xffff;
      FUN_100230e8(1);
      FUN_10025598();
    }
    else if (local_20[0] < 4) {
      *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1636) = 1;
      if (iVar4 < 100) {
        *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1638) =
             *(short *)(*piVar2 + iVar4 * 0x42 + 0x1604);
        *(short *)(*piVar2 + *psVar1 * 0x42 + 0x163a) =
             *(short *)(iVar4 * 0x42 + *piVar2 + 0x1606);
      }
      else {
        *(short *)(*piVar2 + *psVar1 * 0x42 + 0x1638) = 0xfffe;
        *(short *)(*piVar2 + *psVar1 * 0x42 + 0x163a) = 0xfffe;
      }
      FUN_100230e8(1);
      FUN_10025598();
    }
  }
  FUN_1002279c();
  return;
}

/* Address: 0x1004838c Size: 168 bytes */
void FUN_1004838c()

{
  if (*psRam10115d80 == 2) {
    FUN_10061a98(0,*puRam1011677c,0xfffffffffffffffe);
    FUN_10061354(0);
  }
  else if (*psRam10115d80 == 3) {
    if (*psRam10115d8c == 0) {
      FUN_10061a98(0,*puRam1011677c,0xfffffffffffffffe);
    }
    else {
      FUN_10062968(0,*puRam1011677c);
    }
    FUN_10061354(0);
  }
  return;
}

/* Address: 0x10048434 Size: 852 bytes */
void FUN_10048434(short param_1)

{
  short *psVar1;
  int *piVar3;
  int *piVar4;
  long long uVar2;
  char auStack_830 [256];
  char auStack_730 [256];
  char auStack_630 [256];
  char auStack_530 [256];
  char auStack_430 [256];
  char auStack_330 [256];
  char auStack_230 [256];
  char auStack_130 [304];
  
  piVar4 = piRam10115d88;
  psVar1 = psRam10115d84;
  if (param_1 == 0) {
    piVar3 = (int *)FUN_10117884(*piRam10115d88 + (int)*(short *)(*(int *)*piRam10115d88 + 0x308),
                                 0x746f7331);
    FUN_100db26c(piVar3);
    piVar4 = (int *)*piVar4;
    piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x746f7332);
    FUN_100db26c(piVar4);
    if (*psVar1 == 1) {
      uVar2 = FUN_1005f678(0x9c,2);
      FUN_100b19f4(auStack_730,uVar2);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_730,1);
      uVar2 = FUN_1005f678(0x9c,3);
      FUN_100b19f4(auStack_830,uVar2);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_830,1);
    }
    else {
      uVar2 = FUN_1005f678(0x9c,0);
      FUN_100b19f4(auStack_530,uVar2);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_530,1);
      uVar2 = FUN_1005f678(0x9c,1);
      FUN_100b19f4(auStack_630,uVar2);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_630,1);
    }
  }
  else {
    piVar3 = (int *)FUN_10117884(*piRam10115d88 + (int)*(short *)(*(int *)*piRam10115d88 + 0x308),
                                 0x66727331);
    FUN_100db26c(piVar3);
    piVar4 = (int *)*piVar4;
    piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x66727332);
    FUN_100db26c(piVar4);
    if (*psVar1 == 2) {
      uVar2 = FUN_1005f678(0x9d,2);
      FUN_100b19f4(auStack_330,uVar2);
      FUN_10117884((int)*(short *)(*piVar3 + 0x7c8) + (int)piVar3,auStack_330,1);
      uVar2 = FUN_1005f678(0x9d,3);
      FUN_100b19f4(auStack_430,uVar2);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_430,1);
    }
    else {
      uVar2 = FUN_1005f678(0x9d,0);
      FUN_100b19f4(auStack_130,uVar2);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_130,1);
      uVar2 = FUN_1005f678(0x9d,1);
      FUN_100b19f4(auStack_230,uVar2);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_230,1);
    }
  }
  return;
}

/* Address: 0x10048788 Size: 580 bytes */
void FUN_10048788(short param_1)

{
  short sVar1;
  short *puVar2;
  int *ppuVar3;
  char auStack_18 [8];
  short local_10 [8];
  
  puVar2 = puRam1011677c;
  ppuVar3 = 0 /* TVect base */;
  if (param_1 == 2) {
    *puRam10115d8c = (unsigned short)(*puRam10115d8c == 0);
    ppuVar3 = 0 /* TVect base */;
    FUN_1004838c();
  }
  else if (param_1 == 0) {
    sVar1 = *psRam10115d84;
    if (sVar1 == 0) {
      *psRam10115d84 = 1;
      ppuVar3 = 0 /* TVect base */;
      FUN_10061a98(0,*puVar2,0xffffffffffffffff);
      FUN_10061354(0);
      FUN_10048434(0);
    }
    else if (sVar1 == 1) {
      *psRam10115d84 = 0;
      ppuVar3 = 0 /* TVect base */;
      FUN_1004838c();
      FUN_10048434(0);
    }
    else if (sVar1 == 2) {
      *psRam10115d84 = 1;
      ppuVar3 = 0 /* TVect base */;
      FUN_10061a98(0,*puVar2,0xffffffffffffffff);
      FUN_10061354(0);
      FUN_10048434(0);
      FUN_10048434(1);
    }
  }
  else if (param_1 == 1) {
    sVar1 = *psRam10115d84;
    if (sVar1 == 0) {
      *psRam10115d84 = 2;
      ppuVar3 = 0 /* TVect base */;
      FUN_10047de8(*puVar2,auStack_18,local_10);
      FUN_10061a98(0,*puVar2,local_10[0]);
      FUN_10061354(0);
      FUN_10048434(1);
    }
    else if (sVar1 == 1) {
      *psRam10115d84 = 2;
      ppuVar3 = 0 /* TVect base */;
      FUN_10047de8(*puVar2,auStack_18,local_10);
      FUN_10061a98(0,*puVar2,local_10[0]);
      FUN_10061354(0);
      FUN_10048434(0);
      FUN_10048434(1);
    }
    else if (sVar1 == 2) {
      *psRam10115d84 = 0;
      ppuVar3 = 0 /* TVect base */;
      FUN_1004838c();
      FUN_10048434(1);
    }
  }
  FUN_10117884((int)*(int **)(*(int *)(*(int*)((char*)ppuVar3 - 0x155)) + 0x88) +
               (int)*(short *)(**(int **)(*(int *)(*(int*)((char*)ppuVar3 - 0x155)) + 0x88) + 0x38),0,0);
  FUN_1002279c();
  return;
}

/* Address: 0x100489cc Size: 624 bytes */
void FUN_100489cc(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int *piVar5;
  int iVar7;
  unsigned long long uVar6;
  unsigned long long uVar8;
  short sVar9;
  short local_40;
  short local_3e;
  short local_3c [4];
  char auStack_34 [52];
  
  piVar5 = piRam1011735c;
  psVar4 = psRam1011677c;
  psVar3 = psRam10115d84;
  if ((param_3 == 1) && (iVar7 = FUN_100efbcc(), iVar7 != 0)) {
    FUN_10048138(param_1,param_2,1);
    *psVar3 = 0;
  }
  else {
    uVar6 = FUN_1002c120(param_1,param_2);
    FUN_10047de8(uVar6,auStack_34,&local_40);
    FUN_10047de8(*psVar4,local_3c,&local_3e);
    iVar7 = (int)uVar6;
    if (*psVar3 == 2) {
      if (((((0 < local_3e) && ((int)local_40 + (int)local_3e < 5)) && (local_3c[0] != iVar7)) &&
          ((local_3c[1] != iVar7 && (local_3c[2] != iVar7)))) &&
         ((local_3c[3] != iVar7 && (uVar8 = 0, 0 < local_3e)))) {
        do {
          if (iVar7 < 100) {
            iVar1 = (int)((uVar8 & 0xffffffff) << 1);
            iVar2 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1);
            *(short *)(*piVar5 + *(short *)(iVar1 + (int)local_3c) * 0x42 + 0x1638) =
                 *(short *)(*piVar5 + iVar2 + 0x1604);
            *(short *)(*piVar5 + *(short *)(iVar1 + (int)local_3c) * 0x42 + 0x163a) =
                 *(short *)(iVar2 + *piVar5 + 0x1606);
          }
          else {
            iVar1 = (int)((uVar8 & 0xffffffff) << 1);
            *(short *)(*piVar5 + *(short *)(iVar1 + (int)local_3c) * 0x42 + 0x1638) = 0xfffe;
            *(short *)(*piVar5 + *(short *)(iVar1 + (int)local_3c) * 0x42 + 0x163a) = 0xfffe;
          }
          sVar9 = (short)uVar8 + 1;
          uVar8 = (unsigned long long)sVar9;
        } while (sVar9 < local_3e);
      }
    }
    if (*psVar3 == 1) {
      FUN_10048138(param_1,param_2,param_3);
    }
    uVar8 = (unsigned long long)*psVar4;
    if ((*psVar3 != 1) && (iVar7 < 100)) {
      uVar8 = uVar6;
    }
    *psVar3 = 0;
    iVar7 = *piVar5 + (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1);
    FUN_10025758(3,*(short *)(iVar7 + 0x1604),*(short *)(iVar7 + 0x1606));
    FUN_1004838c();
    FUN_10048434(0);
    FUN_10048434(1);
    FUN_1002279c();
  }
  return;
}

/* Address: 0x10048c3c Size: 84 bytes */
short FUN_10048c3c(short param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = 0;
  iVar3 = 0;
  do {
    if (-1 < *(char *)(*piRam1011735c + param_1 * 0x42 + iVar3 + 0x161a)) {
      sVar1 = sVar1 + 1;
    }
    sVar2 = (short)iVar3 + 1;
    iVar3 = (int)sVar2;
  } while (sVar2 < 4);
  return sVar1;
}






















































































/* Address: 0x10048c90 Size: 60 bytes */
long long FUN_10048c90(short param_1)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10048c3c(param_1);
  if (iVar2 < 3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}















/* Address: 0x10048ccc Size: 836 bytes */
void FUN_10048ccc()

{
  int uVar1;
  unsigned int uVar3;
  char cVar4;
  int *piVar5;
  int bVar6;
  char *puVar7;
  char *puVar8;
  int *piVar9;
  int *puVar10;
  int iVar12;
  long long uVar11;
  int *piVar13;
  int *piVar14;
  short uVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  short *puVar19;
  int local_74;
  char local_50 [7];
  char local_49;
  int uVar2;
  
  puVar10 = puRam101175f8;
  piVar9 = piRam101175d0;
  puVar8 = puRam101175cc;
  piVar13 = piRam1011734c;
  piVar5 = piRam10115f0c;
  puVar7 = puRam10115f08;
  if (*piRam10115f0c == 0) {
    *puRam101175cc = *puRam10115f08;
    piVar14 = *(int **)(*(int *)(*piVar13 + 0x88) + 0x148);
    FUN_10117884((int)piVar14 + (int)*(short *)(*piVar14 + 0x2b8));
    uVar1 = *(int *)(puVar7 + 8);
    uVar2 = *(int *)(puVar7 + 0xc);
    uVar3 = *(unsigned int *)(puVar7 + 0x10);
    *puVar10 = *(int *)(puVar7 + 4);
    puVar10[1] = uVar1;
    puVar10[2] = uVar2;
    puVar10[3] = uVar3 & 0xff000000;
    iVar18 = local_74;
    iVar12 = FUN_1005f36c(0x44415420,puVar10);
    bVar6 = false;
    if ((iVar12 != 0) && (uVar11 = FUN_10051f98(0x44415420,puVar10,1), (int)uVar11 != 0)) {
      FUN_10052490(uVar11,local_50,8);
      FUN_100523a8(uVar11,1);
      local_49 = 0;
      iVar12 = 0;
      do {
        cVar4 = local_50[iVar12];
        if (((cVar4 == ' ') || (cVar4 == '\r')) || (cVar4 == '\t')) {
          local_50[iVar12] = '\0';
        }
        sVar16 = (short)iVar12 + 1;
        iVar12 = (int)sVar16;
      } while (sVar16 < 8);
      iVar12 = FUN_100001e0(local_50,(unsigned long long)*(unsigned int *)(iVar18 + -0x1998) + 0x14);
      iVar18 = local_74;
      if (iVar12 != 0) {
        FUN_10001e78(puVar8,local_50);
        bVar6 = true;
      }
    }
    if (bVar6) {
      FUN_10001dd0(puVar10,(unsigned long long)*(unsigned int *)(iVar18 + -0x1998) + 0x18,puVar8);
      FUN_1007ee44(*(int *)(*piVar13 + 0x88));
    }
    else {
      uVar11 = FUN_1005f6b0(0x15,0);
      FUN_10001dd0(puVar10,uVar11,*(short *)(**(int **)(iVar18 + -0x544) + 0x162));
      piVar13 = *(int **)(*(int *)(*piVar13 + 0x88) + 0x14c);
      FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x2b8));
    }
    piVar13 = (int *)FUN_10051f98(0x44415420,puVar10,1);
    FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0xb8));
    piVar14 = (int *)FUN_100f15e0();
    *piVar5 = (int)piVar14;
    if (piVar14 != (int *)0x0) {
      FUN_10002598(piVar14);
    }
    *piVar9 = *piVar14;
    iVar18 = 0;
    do {
      FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x100));
      uVar15 = FUN_100525a0();
      iVar17 = iVar18 * 0x3e;
      iVar12 = *piVar9;
      *(short *)(iVar12 + iVar17) = uVar15;
      FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0xe0),iVar12 + iVar17 + 2,0x14);
      puVar19 = (short *)(iVar17 + *piVar9 + 0x16);
      sVar16 = 0;
      do {
        FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x100));
        uVar15 = FUN_100525a0();
        *puVar19 = uVar15;
        sVar16 = sVar16 + 1;
        puVar19 = puVar19 + 1;
      } while (sVar16 < 0x14);
      sVar16 = (short)iVar18 + 1;
      iVar18 = (int)sVar16;
    } while (sVar16 < 0x1d);
    FUN_100523a8(piVar13,1);
    if (*piVar5 != 0) {
      FUN_10002ad8(*piVar5);
    }
  }
  piVar5 = (int *)*piVar5;
  if (piVar5 != (int *)0x0) {
    FUN_10002598(piVar5);
  }
  *piVar9 = *piVar5;
  return;
}

/* Address: 0x10049010 Size: 56 bytes */
void FUN_10049010()

{
  if (*piRam10115f0c != 0) {
    FUN_10002ad8();
  }
  return;
}

/* Address: 0x10049048 Size: 1500 bytes */
void FUN_10049048(short param_1)

{
  int bVar1;
  short *psVar2;
  int *piVar3;
  short *psVar4;
  int uVar5;
  int *piVar6;
  int *piVar8;
  long long uVar7;
  int *piVar9;
  short sVar10;
  long long lVar11;
  int iVar13;
  unsigned long long uVar12;
  int local_3ac;
  char auStack_388 [256];
  char auStack_288 [256];
  char auStack_188 [256];
  char auStack_88 [136];
  
  piVar6 = piRam101175d0;
  piVar9 = piRam1011735c;
  uVar5 = uRam10116a54;
  psVar4 = psRam1011677c;
  piVar3 = piRam10115f14;
  psVar2 = psRam10115f10;
  if (param_1 == 0) {
    lVar11 = 0;
    do {
      piVar8 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),
                                   lVar11 + 0x73696431);
      if (piVar8 != (int *)0x0) {
        if (*(short *)((int)piVar8 + 0x82) != 0) {
          *(short *)((int)piVar8 + 0x82) = 0;
          FUN_10117884((int)*(short *)(*piVar8 + 0x488) + (int)piVar8);
        }
        if (*(short *)(*piVar9 + 0x110) != *(short *)(piVar8 + 0x20)) {
          *(short *)(piVar8 + 0x20) = *(short *)(*piVar9 + 0x110);
          FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x4d0));
        }
      }
      sVar10 = (short)lVar11 + 1;
      lVar11 = (long long)sVar10;
    } while (sVar10 < 2);
    FUN_1003206c(2,0xe0,0xff,0xf9);
    uVar7 = FUN_1005f678(0x71,1);
    iVar13 = *piVar9;
    FUN_10001dd0(auStack_88,uVar7,iVar13 + *(short *)(iVar13 + 0x110) * 0x14,
                 iVar13 + *psVar4 * 0x42 + 0x1608);
    FUN_100b19f4(auStack_288,auStack_88);
    FUN_10090e0c(*piVar3,0x73756274,auStack_288,1);
    uVar7 = FUN_1005f678(0x71,2);
    FUN_10001dd0(auStack_88,uVar7,
                 *(short *)(*piVar9 + *(short *)(*piVar9 + 0x110) * 0x14 + 0x186));
    FUN_100b19f4(auStack_388,auStack_88);
    FUN_10090e0c(*piVar3,0x6d6f6e65,auStack_388,1);
  }
  iVar13 = 0;
  do {
    uVar7 = FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),iVar13 + 0x70726f30);
    if ((int)uVar7 != 0) {
      lVar11 = (long long)*(char *)(*piVar9 + *psVar4 * 0x42 + iVar13 + 0x161a);
      if (lVar11 << 0x20 < 0) {
        lVar11 = -1;
      }
      FUN_10079ee8(uVar7,(short)lVar11,*(short *)(*piVar9 + 0x110),1);
      if (*psVar2 == iVar13) {
        sVar10 = *(short *)(*piVar9 + 0x110) + 2;
      }
      else {
        sVar10 = 1;
      }
      FUN_1007a018(uVar7,sVar10,0,0,1);
    }
    sVar10 = (short)iVar13 + 1;
    iVar13 = (int)sVar10;
  } while (sVar10 < 4);
  FUN_10048ccc();
  FUN_1003206c(2,0xe0,0xff,0xf9);
  uVar12 = 0;
  lVar11 = 0;
  do {
    if ((-1 < *(short *)(*piVar6 + (int)(((uVar12 & 0x7ffffff) * 0x20 - uVar12 & 0xffffffff) << 1) +
                        0x1e)) && ((int)lVar11 < 0x14)) {
      bVar1 = false;
      iVar13 = 0;
      do {
        if ((int)*(char *)(*piVar9 + *psVar4 * 0x42 + iVar13 + 0x161a) ==
            (int)*(short *)(*piVar6 +
                           (int)(((uVar12 & 0x7ffffff) * 0x20 - uVar12 & 0xffffffff) << 1))) {
          bVar1 = true;
          break;
        }
        sVar10 = (short)iVar13 + 1;
        iVar13 = (int)sVar10;
      } while (sVar10 < 4);
      piVar8 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),
                                   lVar11 + 0x61726d30);
      if (piVar8 != (int *)0x0) {
        if ((*(short *)(*piVar9 + *(short *)(*piVar9 + 0x110) * 0x14 + 0x186) <
             *(short *)(*piVar6 + (int)(((uVar12 & 0x7ffffff) * 0x20 - uVar12 & 0xffffffff) << 1) +
                       0x1e)) || (bVar1)) {
          iVar13 = 0;
        }
        else {
          iVar13 = 1;
        }
        FUN_10079ee8(piVar8,*(short *)
                             (*piVar6 +
                             (int)(((uVar12 & 0x7ffffff) * 0x20 - uVar12 & 0xffffffff) << 1)),
                     *(short *)(*piVar9 + 0x110),1);
        FUN_1007a018(piVar8,1,0,iVar13 == 0,1);
        FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0xd8),iVar13);
      }
      if (param_1 == 0) {
        FUN_10001dd0(auStack_88,(unsigned long long)*(unsigned int *)(local_3ac + -0x1998) + 0x60,
                     *(short *)
                      (*piVar6 + (int)(((uVar12 & 0x7ffffff) * 0x20 - uVar12 & 0xffffffff) << 1) +
                      0x1e));
        FUN_100b19f4(auStack_188,auStack_88);
        FUN_10090e0c(*piVar3,lVar11 + 0x73747230,auStack_188,1);
      }
      lVar11 = (long long)(short)((short)lVar11 + 1);
    }
    sVar10 = (short)uVar12 + 1;
    uVar12 = (unsigned long long)sVar10;
    if (0x1b < sVar10) {
      if ((int)lVar11 < 0x1c) {
        do {
          piVar9 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),
                                       lVar11 + 0x61726d30);
          if (piVar9 != (int *)0x0) {
            FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x660),0,0);
            FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0xd8),0);
          }
          if (param_1 == 0) {
            FUN_10090e0c(*piVar3,lVar11 + 0x73747230,uVar5,1);
          }
          sVar10 = (short)lVar11 + 1;
          lVar11 = (long long)sVar10;
        } while (sVar10 < 0x1c);
      }
      FUN_10049010();
      return;
    }
  } while( true );
}

/* Address: 0x10049624 Size: 4 bytes */
void FUN_10049624()

{
  return;
}

/* Address: 0x100496c8 Size: 564 bytes */
void FUN_100496c8(short param_1)

{
  char cVar1;
  char uVar2;
  short uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  short sVar9;
  unsigned long long uVar10;
  unsigned long long uVar11;
  int iVar12;
  short local_70 [4];
  char auStack_68 [30];
  short local_4a;
  short asStack_2a [21];
  
  piVar8 = piRam1011735c;
  uVar10 = (unsigned long long)param_1;
  if (-1 < *(char *)(*piRam1011735c +
                     (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) + 0x161a)) {
    iVar12 = 0;
    do {
      cVar1 = *(char *)(*piVar8 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) +
                        iVar12 + 0x161a);
      local_70[iVar12] = (short)cVar1;
      if (cVar1 < '\0') break;
      FUN_10049628(cVar1,auStack_68);
      sVar9 = FUN_10003768(local_4a);
      asStack_2a[iVar12 + 1] = sVar9;
      sVar9 = (short)iVar12 + 1;
      iVar12 = (int)sVar9;
    } while (sVar9 < 4);
    uVar10 = 1;
    if (1 < iVar12) {
      do {
        if ((0 < (int)uVar10) &&
           (iVar4 = (int)((uVar10 & 0xffffffff) << 1), uVar11 = uVar10,
           *(short *)((int)asStack_2a + iVar4 + 2) < *(short *)((int)asStack_2a + iVar4))) {
          do {
            iVar4 = (int)((uVar11 & 0x7fffffff) << 1);
            uVar3 = *(short *)((int)asStack_2a + iVar4 + 2);
            *(short *)((int)asStack_2a + iVar4 + 2) = *(short *)((int)asStack_2a + iVar4);
            *(short *)((int)asStack_2a + iVar4) = uVar3;
            iVar7 = (param_1 * 0x20 + (int)param_1) * 2;
            iVar6 = (int)uVar11;
            iVar4 = *piVar8 + iVar7 + iVar6;
            uVar2 = *(char *)(iVar4 + 0x161a);
            *(char *)(iVar4 + 0x161a) = *(char *)(iVar4 + 0x1619);
            iVar4 = (int)(uVar11 - 1);
            *(char *)(iVar7 + *piVar8 + iVar4 + 0x161a) = uVar2;
            iVar5 = iVar7 + *piVar8 + iVar6;
            uVar2 = *(char *)(iVar5 + 0x1622);
            *(char *)(iVar5 + 0x1622) = *(char *)(iVar5 + 0x1621);
            *(char *)(iVar7 + *piVar8 + iVar4 + 0x1622) = uVar2;
            iVar5 = iVar7 + *piVar8 + iVar6;
            uVar2 = *(char *)(iVar5 + 0x162a);
            *(char *)(iVar5 + 0x162a) = *(char *)(iVar5 + 0x1629);
            *(char *)(iVar7 + *piVar8 + iVar4 + 0x162a) = uVar2;
            iVar5 = iVar7 + *piVar8 + iVar6;
            uVar2 = *(char *)(iVar5 + 0x1626);
            *(char *)(iVar5 + 0x1626) = *(char *)(iVar5 + 0x1625);
            *(char *)(iVar7 + *piVar8 + iVar4 + 0x1626) = uVar2;
            iVar6 = iVar7 + *piVar8 + iVar6;
            uVar2 = *(char *)(iVar6 + 0x161e);
            *(char *)(iVar6 + 0x161e) = *(char *)(iVar6 + 0x161d);
            *(char *)(iVar7 + *piVar8 + iVar4 + 0x161e) = uVar2;
            uVar11 = (unsigned long long)(short)(uVar11 - 1);
            if ((long long)uVar11 < 1) break;
            iVar4 = (int)((uVar11 & 0xffffffff) << 1);
          } while (*(short *)((int)asStack_2a + iVar4 + 2) < *(short *)((int)asStack_2a + iVar4));
        }
        sVar9 = (short)uVar10 + 1;
        uVar10 = (unsigned long long)sVar9;
      } while (sVar9 < iVar12);
    }
  }
  return;
}

/* Address: 0x100498fc Size: 52 bytes */
void FUN_100498fc()

{
  FUN_100496c8(*puRam1011677c);
  FUN_10025d10();
  return;
}

/* Address: 0x10049930 Size: 444 bytes */
void FUN_10049930()

{
  int bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *puVar5;
  int iVar6;
  int iVar7;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar5 = puRam10117370;
  piVar4 = piRam10115f14;
  iVar6 = 3;
  while( true ) {
    iVar7 = iVar6;
    if (iVar6 == 0) break;
    iVar3 = *piRam1011735c + *psRam1011677c * 0x42 + iVar6;
    if (((*(char *)(iVar3 + 0x161a) < '\0') && (-1 < *(char *)(iVar3 + 0x1619))) ||
       (iVar7 = (int)(short)((short)iVar6 + -1), bVar1 = iVar6 == 0, iVar6 = iVar7, bVar1)) break;
  }
  *puRam10115f10 = (short)iVar7;
  if (*piVar4 == 0) {
    iVar6 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xcee,
                         *(int *)(*piRam1011734c + 0x88));
    *piVar4 = iVar6;
    FUN_100db26c();
  }
  FUN_10049048(0);
  FUN_10049624();
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar5;
  *puVar5 = auStack_128;
  iVar6 = FUN_10000090(auStack_128);
  if (iVar6 == 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
      FUN_100498fc();
      FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0x738));
    }
    *piVar4 = 0;
    *puVar5 = local_20;
  }
  else {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    }
    *piVar4 = 0;
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x10049aec Size: 840 bytes */
void FUN_10049aec(short param_1)

{
  char cVar1;
  int iVar2;
  int bVar3;
  short *psVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  char uVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  
  piVar7 = piRam101175d0;
  piVar6 = piRam1011735c;
  psVar5 = psRam1011677c;
  psVar4 = psRam10115f10;
  FUN_10048ccc();
  iVar10 = 0;
  sVar9 = 0;
  do {
    if ((-1 < *(short *)(*piVar7 + iVar10 * 0x3e + 0x1e)) && (sVar9 < 0x14)) {
      iVar12 = iVar10;
      if (sVar9 == param_1) break;
      sVar9 = sVar9 + 1;
    }
    sVar11 = (short)iVar10 + 1;
    iVar10 = (int)sVar11;
    iVar12 = (int)param_1;
  } while (sVar11 < 0x1c);
  iVar2 = *piVar6 + *psVar5 * 0x42;
  cVar1 = *(char *)(iVar2 + 0x1630);
  sVar9 = *psVar4;
  iVar12 = iVar12 * 0x3e;
  iVar10 = *piVar7;
  *(char *)(iVar2 + sVar9 + 0x161a) = (char)*(short *)(iVar10 + iVar12);
  iVar10 = iVar10 + iVar12;
  *(char *)(*piVar6 + *psVar5 * 0x42 + (int)sVar9 + 0x161e) = (char)*(short *)(iVar10 + 0x18);
  *(char *)(*piVar6 + *psVar5 * 0x42 + (int)sVar9 + 0x162a) = (char)*(short *)(iVar10 + 0x1a);
  *(char *)(*piVar6 + *psVar5 * 0x42 + (int)sVar9 + 0x1622) = (char)*(short *)(iVar10 + 0x16);
  *(char *)(*piVar6 + *psVar5 * 0x42 + (int)sVar9 + 0x1626) = (char)*(short *)(iVar10 + 0x1c);
  uVar8 = FUN_10048c90(*psVar5);
  *(char *)(*piVar6 + *psVar5 * 0x42 + 0x1618) = uVar8;
  iVar10 = *piVar6 + *(short *)(*piVar6 + 0x110) * 0x14;
  *(short *)(iVar10 + 0x186) = *(short *)(iVar10 + 0x186) - *(short *)(iVar12 + *piVar7 + 0x1e);
  FUN_10049010();
  if ('\0' < *(char *)(*piVar6 + *psVar5 * 0x42 + 0x1631)) {
    bVar3 = false;
    iVar10 = 0;
    do {
      if (*(char *)(*piVar6 + *psVar5 * 0x42 + iVar10 + 0x161a) == cVar1) {
        bVar3 = true;
        break;
      }
      sVar9 = (short)iVar10 + 1;
      iVar10 = (int)sVar9;
    } while (sVar9 < 4);
    if (!bVar3) {
      *(char *)(*piVar6 + *psVar5 * 0x42 + 0x1631) = 0;
      *(short *)(*piVar6 + *psVar5 * 0x42 + 0x1636) = 0;
      *(short *)(*piVar6 + *psVar5 * 0x42 + 0x1638) = 0xffff;
      *(short *)(*piVar6 + *psVar5 * 0x42 + 0x163a) = 0xffff;
      *(char *)(*piVar6 + *psVar5 * 0x42 + 0x1630) = 0xff;
    }
  }
  sVar9 = *psVar4;
  if ((sVar9 < 3) && (*(char *)(*piVar6 + *psVar5 * 0x42 + (int)sVar9 + 0x161b) < '\0')) {
    *psVar4 = sVar9 + 1;
  }
  if (*(short *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 2 + 0xd0) == 0) {
    FUN_10049048(0);
    FUN_10049624();
  }
  return;
}

/* Address: 0x10049e34 Size: 52 bytes */
void FUN_10049e34(short param_1)

{
  *puRam10115f10 = param_1;
  FUN_10049048(1);
  FUN_10049624();
  return;
}

/* Address: 0x10049ebc Size: 236 bytes */
void FUN_10049ebc(short param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  piVar2 = piRam101175d0;
  FUN_10048ccc();
  iVar3 = 0;
  sVar4 = 0;
  do {
    if ((-1 < *(short *)(*piVar2 + iVar3 * 0x3e + 0x1e)) && (sVar4 < 0x14)) {
      iVar6 = iVar3;
      if (sVar4 == param_2) break;
      sVar4 = sVar4 + 1;
    }
    sVar5 = (short)iVar3 + 1;
    iVar3 = (int)sVar5;
    iVar6 = (int)param_2;
  } while (sVar5 < 0x1c);
  if (param_1 != 0) {
    iVar3 = *piVar2;
    iVar1 = iVar3 + iVar6 * 0x3e;
    FUN_1000ba58(*(short *)(iVar3 + iVar6 * 0x3e),*(short *)(iVar1 + 0x18),
                 *(short *)(iVar1 + 0x16),*(short *)(iVar1 + 0x1a),
                 *(short *)(iVar1 + 0x1c),0);
  }
  FUN_10049010();
  return;
}

/* Address: 0x10049fa8 Size: 284 bytes */
void FUN_10049fa8(short param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  char uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = piRam101175d0;
  piVar1 = piRam1011735c;
  FUN_10048ccc();
  iVar4 = param_1 * 0x42;
  iVar5 = param_3 * 0x3e;
  iVar6 = *piVar2;
  *(char *)(*piVar1 + iVar4 + (int)param_2 + 0x161a) = (char)*(short *)(iVar6 + iVar5);
  iVar6 = iVar6 + iVar5;
  *(char *)(iVar4 + *piVar1 + (int)param_2 + 0x161e) = (char)*(short *)(iVar6 + 0x18);
  *(char *)(iVar4 + *piVar1 + (int)param_2 + 0x162a) = (char)*(short *)(iVar6 + 0x1a);
  *(char *)(iVar4 + *piVar1 + (int)param_2 + 0x1622) = (char)*(short *)(iVar6 + 0x16);
  *(char *)(iVar4 + *piVar1 + (int)param_2 + 0x1626) = (char)*(short *)(iVar6 + 0x1c);
  uVar3 = FUN_10048c90((int)param_1);
  *(char *)(iVar4 + *piVar1 + 0x1618) = uVar3;
  iVar6 = *piVar1 + *(short *)(*piVar1 + 0x110) * 0x14;
  *(short *)(iVar6 + 0x186) = *(short *)(iVar6 + 0x186) - *(short *)(iVar5 + *piVar2 + 0x1e);
  FUN_10049010();
  return;
}

/* Address: 0x1004a2a8 Size: 168 bytes */
void FUN_1004a2a8()

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = piRam10117714;
  piVar2 = piRam10115f18;
  if (*piRam10115f18 == 0) {
    piVar4 = (int *)FUN_100f15e0(0x324);
    *piVar2 = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_10002598(piVar4);
    }
    iVar1 = *piVar4;
    *piVar3 = iVar1;
    *(char *)(iVar1 + 800) = 0;
    if (*piVar2 != 0) {
      FUN_10002ad8(*piVar2);
    }
  }
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    FUN_10002598(piVar2);
  }
  *piVar3 = *piVar2;
  return;
}

/* Address: 0x1004a350 Size: 420 bytes */
char FUN_1004a350(short param_1,short param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  unsigned long long uVar8;
  int iVar9;
  int iVar10;
  short local_40 [32];
  
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  iVar3 = iRam10115f20;
  iVar2 = iRam10115f1c;
  uVar8 = (unsigned long long)param_1;
  iVar10 = 0;
  do {
    iVar9 = iVar10 * 2;
    iVar1 = (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0x7fffffff) << 1);
    FUN_1002122c(*(short *)(*piVar5 + iVar1 + 0x1604) + *(short *)(iVar9 + iVar3),
                 *(short *)(*piVar5 + iVar1 + 0x1606) + *(short *)(iVar9 + iVar2),local_40 + iVar10)
    ;
    if (local_40[iVar10] < 8) {
      *param_3 = *(short *)(*piVar5 + iVar1 + 0x1604) + *(short *)(iVar9 + iVar3);
      *param_4 = *(short *)(iVar1 + *piVar5 + 0x1606) + *(short *)(iVar9 + iVar2);
      return 1;
    }
    sVar7 = (short)iVar10 + 1;
    iVar10 = (int)sVar7;
  } while (sVar7 < 4);
  if (param_2 != 0) {
    sVar7 = 0;
    do {
      sVar6 = FUN_1005f230(1,3,0xfffffffffffffffe);
      iVar2 = (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1);
      *param_3 = *(short *)(*piVar5 + iVar2 + 0x1604) + sVar6;
      sVar6 = FUN_1005f230(1,3,0xfffffffffffffffe);
      sVar6 = *(short *)(iVar2 + *piVar5 + 0x1606) + sVar6;
      *param_4 = sVar6;
      sVar7 = sVar7 + 1;
      if ((*(unsigned int *)(*piVar4 + sVar6 * 0xe0 + *param_3 * 2) >> 0x14 & 1) == 0) {
        return 1;
      }
    } while (sVar7 < 0x14);
  }
  return 0;
}

/* Address: 0x1004a4f4 Size: 252 bytes */
long long FUN_1004a4f4(short param_1,short param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar5;
  long long uVar4;
  
  piVar2 = piRam1011735c;
  ppuVar3 = 0 /* TVect base */;
  iVar5 = FUN_1002be50((int)param_2,(int)param_3);
  if ((iVar5 < 0) ||
     (iVar1 = *piVar2,
     (int)*(char *)(iVar1 + iVar5 * 0x42 + 0x1619) == (int)*(short *)(iVar1 + 0x110))) {
    if (*(char *)(*(int *)(*(int*)((char*)ppuVar3 - 0x14f)) + param_1 * 6) == '\0') {
      if (*(short *)((*(int*)((char*)ppuVar3 - 0x687)) +
                    *(char *)(*piVar2 + (*(unsigned int *)(*(int *)(*(int*)((char*)ppuVar3 - 0x152)) + param_3 * 0xe0 +
                                                  param_2 * 2) >> 0x18) + 0x711) * 2) < 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

/* Address: 0x1004a5f0 Size: 556 bytes */
short * FUN_1004a5f0(short param_1,short param_2,short param_3,short param_4)

{
  char uVar1;
  unsigned char bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *ppuVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  unsigned long long uVar10;
  
  piVar5 = piRam1011735c;
  ppuVar6 = 0 /* TVect base */;
  uVar10 = (unsigned long long)param_1;
  uVar1 = *(char *)
           (*piRam1011735c + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) +
           0x1630);
  iVar7 = FUN_10047d80(uVar10,uVar1);
  psVar8 = (short *)FUN_10021434();
  if (psVar8 != (short *)0x0) {
    if (param_4 == -1) {
      *psVar8 = param_2;
      psVar8[1] = param_3;
    }
    *(char *)(psVar8 + 2) = uVar1;
    iVar4 = (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0x7fffffff) << 1);
    *(char *)((int)psVar8 + 5) = *(char *)(*piVar5 + iVar4 + 0x1619);
    *(char *)(psVar8 + 3) = *(char *)(iVar4 + *piVar5 + iVar7 + 0x1626);
    *(char *)((int)psVar8 + 7) = *(char *)(iVar4 + *piVar5 + iVar7 + 0x1626);
    iVar3 = *piVar5;
    if (*(short *)(iVar3 + *(short *)(iVar3 + 0x110) * 2 + 0xf0) == 0) {
      *(char *)(psVar8 + 4) =
           *(char *)
            (*piVar5 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) + iVar7 +
            0x1622);
    }
    else {
      sVar9 = *(char *)(iVar4 + iVar3 + iVar7 + 0x1622) + 2;
      if (9 < sVar9) {
        sVar9 = 9;
      }
      *(char *)(psVar8 + 4) = (char)sVar9;
    }
    *(char *)((int)psVar8 + 9) = (char)param_1;
    *(char *)(psVar8 + 5) = 0;
    iVar3 = (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1);
    bVar2 = *(unsigned char *)(*piVar5 + iVar3 + iVar7 + 0x162a);
    *(char *)((int)psVar8 + 0xb) = ((char)bVar2 >> 1) + ((char)bVar2 < '\0' && (bVar2 & 1) != 0);
    *(char *)(iVar3 + *piVar5 + 0x1631) = 0;
    if (param_4 == -1) {
      *(unsigned int *)(psVar8 + 6) = *(unsigned int *)(psVar8 + 6) & 0xffff0f80;
      *(char *)(psVar8 + 8) = 0xff;
      iVar7 = *(int *)(*(int*)((char*)ppuVar6 - 0x152)) + psVar8[1] * 0xe0;
      *(unsigned int *)(iVar7 + *psVar8 * 2) = *(unsigned int *)(iVar7 + *psVar8 * 2) | 0x100000;
    }
    else {
      if (param_4 < 100) {
        *psVar8 = -1;
        psVar8[1] = -1;
      }
      else {
        *psVar8 = -2;
        psVar8[1] = -1;
      }
      *(unsigned int *)(psVar8 + 6) = (int)param_4 & 0x7fU | *(unsigned int *)(psVar8 + 6) & 0xffffff80;
      *(char *)(psVar8 + 8) = 0x65;
    }
  }
  return psVar8;
}

/* Address: 0x1004a81c Size: 56 bytes */
void FUN_1004a81c()

{
  if (*piRam10115f18 != 0) {
    FUN_10002ad8();
  }
  return;
}

/* Address: 0x1004a854 Size: 1832 bytes */
char FUN_1004a854()

{
  char uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar7;
  long long lVar6;
  short sVar8;
  int iVar9;
  int iVar11;
  unsigned long long uVar10;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30 [24];
  
  piVar5 = piRam10117714;
  piVar4 = piRam10117360;
  piVar3 = piRam1011735c;
  FUN_1004a2a8();
  FUN_10034130();
  *(char *)(*piVar5 + 800) = 0;
  sVar8 = *(short *)(*piVar3 + 0x182);
  while (sVar8 != 0) {
    sVar8 = sVar8 + -1;
    iVar11 = (int)sVar8;
    iVar7 = *piVar4 + iVar11 * 0x16;
    if ((int)*(char *)(iVar7 + 5) == (int)*(short *)(*piVar3 + 0x110)) {
      if (((*(short *)(iVar11 * 0x16 + *piVar4) == -1) && (*(short *)(iVar7 + 2) == -1)) &&
         (*(char *)(iVar7 + 0x10) == 'e')) {
        *(char *)(iVar7 + 0x10) = 0x66;
      }
      else {
        iVar7 = *piVar4 + iVar11 * 0x16;
        if (((*(short *)(*piVar4 + iVar11 * 0x16) == -2) && (*(short *)(iVar7 + 2) == -1)) &&
           (*(char *)(iVar7 + 0x10) == 'e')) {
          *(char *)(iVar7 + 0x10) = 0x66;
        }
        else {
          iVar9 = iVar11 * 0x16;
          iVar7 = *piVar4 + iVar9;
          if (((*(short *)(*piVar4 + iVar9) == -1) && (*(short *)(iVar7 + 2) == -1)) &&
             (*(char *)(iVar7 + 0x10) == 'f')) {
            iVar7 = FUN_1004a350((unsigned short)*(int *)(iVar7 + 0xc) & 0x7f,0,local_30,&local_32);
            if ((iVar7 == 0) ||
               (iVar7 = FUN_1004a4f4(*(char *)(iVar9 + *piVar4 + 4),local_30[0],local_32),
               iVar7 == 0)) {
              iVar7 = *piVar4 + iVar11 * 0x16;
              if ((*(unsigned int *)(iVar7 + 0xc) & 0x7f) == (int)*(char *)(iVar7 + 9)) {
                FUN_100214e8(iVar7);
              }
              else {
                iVar7 = *piVar4 + iVar11 * 0x16;
                *(unsigned int *)(iVar7 + 0xc) =
                     (int)*(char *)(iVar7 + 9) & 0x7fU | *(unsigned int *)(iVar7 + 0xc) & 0xffffff80;
                *(char *)(iVar11 * 0x16 + *piVar4 + 0x10) = 0x65;
              }
            }
            else {
              *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800)) = 0;
              iVar11 = iVar11 * 0x16;
              *(int *)(*piVar5 + *(char *)(*piVar5 + 800) * 4 + 400) = *piVar4 + iVar11;
              *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 100) =
                   *(char *)(iVar11 + *piVar4 + 4);
              *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 200) =
                   *(char *)(iVar11 + *piVar4 + 9);
              *(unsigned char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 300) =
                   (unsigned char)*(int *)(iVar11 + *piVar4 + 0xc) & 0x7f;
              *(short *)(iVar11 + *piVar4) = local_30[0];
              *(short *)(iVar11 + *piVar4 + 2) = local_32;
              *(unsigned int *)(iVar11 + *piVar4 + 0xc) = *(unsigned int *)(iVar11 + *piVar4 + 0xc) & 0xffffff80;
              uVar2 = *(unsigned int *)(iVar11 + *piVar4 + 0xc);
              *(unsigned int *)(iVar11 + *piVar4 + 0xc) = (uVar2 & 0xf) << 0xc | uVar2 & 0xffff0fff;
              *(char *)(iVar11 + *piVar4 + 0x10) = 0xff;
              *(char *)(*piVar5 + 800) = *(char *)(*piVar5 + 800) + '\x01';
            }
          }
          else {
            iVar9 = iVar11 * 0x16;
            iVar7 = *piVar4 + iVar9;
            if (((*(short *)(*piVar4 + iVar9) == -2) && (*(short *)(iVar7 + 2) == -1)) &&
               (*(char *)(iVar7 + 0x10) == 'f')) {
              iVar7 = FUN_10034074(*(short *)(*piVar3 + 0x110),&local_34,&local_36);
              FUN_1002122c(local_34,local_36,&local_38);
              if (((iVar7 == 0) || (7 < local_38)) ||
                 (iVar7 = FUN_1004a4f4(*(char *)(iVar9 + *piVar4 + 4),local_34,local_36),
                 iVar7 == 0)) {
                iVar11 = iVar11 * 0x16;
                *(short *)(*piVar4 + iVar11) = 0xffff;
                iVar7 = iVar11 + *piVar4;
                *(unsigned int *)(iVar7 + 0xc) =
                     (int)*(char *)(iVar7 + 9) & 0x7fU | *(unsigned int *)(iVar7 + 0xc) & 0xffffff80;
                *(char *)(iVar11 + *piVar4 + 0x10) = 0x65;
              }
              else {
                *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800)) = 0;
                iVar11 = iVar11 * 0x16;
                *(int *)(*piVar5 + *(char *)(*piVar5 + 800) * 4 + 400) = *piVar4 + iVar11;
                *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 100) =
                     *(char *)(iVar11 + *piVar4 + 4);
                *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 200) =
                     *(char *)(iVar11 + *piVar4 + 9);
                *(unsigned char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 300) =
                     (unsigned char)*(int *)(iVar11 + *piVar4 + 0xc) & 0x7f;
                *(short *)(iVar11 + *piVar4) = local_34;
                *(short *)(iVar11 + *piVar4 + 2) = local_36;
                *(unsigned int *)(iVar11 + *piVar4 + 0xc) = *(unsigned int *)(iVar11 + *piVar4 + 0xc) & 0xffffff80;
                uVar2 = *(unsigned int *)(iVar11 + *piVar4 + 0xc);
                *(unsigned int *)(iVar11 + *piVar4 + 0xc) = (uVar2 & 0xf) << 0xc | uVar2 & 0xffff0fff;
                *(char *)(iVar11 + *piVar4 + 0x10) = 0xff;
                *(char *)(*piVar5 + 800) = *(char *)(*piVar5 + 800) + '\x01';
              }
            }
          }
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < *(short *)(*piVar3 + 0x1602)) {
    do {
      iVar7 = (int)uVar10 * 0x42;
      iVar11 = *piVar3 + iVar7;
      if (((int)*(char *)(iVar11 + 0x1619) == (int)*(short *)(*piVar3 + 0x110)) &&
         ('\0' < *(char *)(iVar11 + 0x1631))) {
        *(char *)(iVar11 + 0x1631) = *(char *)(iVar11 + 0x1631) + -1;
        if ((*(char *)(*piVar3 + iVar7 + 0x1631) < '\x01') &&
           (*(char *)(*piVar3 + iVar7 + 0x1631) = 0,
           0 < *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0x14 + 0x186))) {
          iVar11 = FUN_1004a350(uVar10,0,local_30,&local_32);
          if (iVar11 == 0) {
            if (*(short *)(iVar7 + *piVar3 + 0x1636) == 0) goto LAB_1004af34;
LAB_1004ae34:
            iVar11 = *piVar3 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1);
            lVar6 = FUN_1002be50(*(short *)(iVar11 + 0x1638),*(short *)(iVar11 + 0x163a));
            *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800)) = 1;
            if ((int)lVar6 < 0) {
              lVar6 = (long long)(short)(*(short *)(*piVar3 + 0x110) + 100);
            }
          }
          else {
            if (*(short *)(*piVar3 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1)
                          + 0x1636) != 0) goto LAB_1004ae34;
            *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800)) = 2;
            lVar6 = -1;
          }
          iVar11 = FUN_1004a5f0(uVar10,local_30[0],local_32,lVar6);
          if (iVar11 != 0) {
            *(int *)(*piVar5 + *(char *)(*piVar5 + 800) * 4 + 400) = iVar11;
            *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 100) =
                 *(char *)(iVar11 + 4);
            *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 200) = (char)uVar10;
            *(char *)(*piVar5 + (int)*(char *)(*piVar5 + 800) + 300) = (char)lVar6;
            *(char *)(*piVar5 + 800) = *(char *)(*piVar5 + 800) + '\x01';
          }
        }
      }
LAB_1004af34:
      sVar8 = (short)uVar10 + 1;
      uVar10 = (unsigned long long)sVar8;
    } while (sVar8 < *(short *)(*piVar3 + 0x1602));
  }
  uVar1 = *(char *)(*piVar5 + 800);
  FUN_1004a81c();
  return uVar1;
}

/* Address: 0x1004af7c Size: 240 bytes */
void FUN_1004af7c()

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  piVar2 = piRam10117714;
  piVar1 = piRam1011735c;
  FUN_1004a2a8();
  iVar6 = 0;
  if ('\0' < *(char *)(*piVar2 + 800)) {
    do {
      if (*(char *)(*piVar2 + iVar6) != '\0') {
        iVar4 = (int)*(char *)(*piVar2 + iVar6 + 200);
        iVar3 = FUN_10047d80(iVar4,*(char *)(*piVar1 + iVar4 * 0x42 + 0x1630));
        iVar4 = *piVar1 + *(char *)(*piVar2 + iVar6 + 200) * 0x42;
        *(char *)(iVar4 + 0x1631) = *(char *)(iVar4 + iVar3 + 0x161e);
      }
      sVar5 = (short)iVar6 + 1;
      iVar6 = (int)sVar5;
    } while ((int)sVar5 < (int)*(char *)(*piVar2 + 800));
  }
  FUN_1004a81c();
  FUN_1002b91c();
  FUN_10007f78();
  return;
}

/* Address: 0x1004b06c Size: 76 bytes */
char FUN_1004b06c()

{
  char uVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  FUN_1004a2a8();
  uVar1 = *(char *)(*(int *)ppuVar2[-99] + 800);
  FUN_1004a81c();
  return uVar1;
}

/* Address: 0x1004b0b8 Size: 100 bytes */
void FUN_1004b0b8()

{
  int *ppuVar1;
  short sVar2;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_1004a2a8();
  sVar2 = (short)*(char *)(*(int *)ppuVar1[-99] + 800);
  if ('\x04' < *(char *)(*(int *)ppuVar1[-99] + 800)) {
    sVar2 = 5;
  }
  *(short *)(*(int*)((char*)ppuVar1 - 0x65f)) = sVar2;
  *(short *)(*(int*)((char*)ppuVar1 - 0xb2)) = 0;
  FUN_1004a81c();
  return;
}

/* Address: 0x1004b11c Size: 436 bytes */





void FUN_1004b11c(short param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  unsigned short uVar8;
  
  puVar5 = puRam101174b0;
  puVar4 = puRam10117360;
  piVar3 = piRam1011735c;
  iVar6 = iRam10115f2c;
  FUN_10038c60(*(short *)(*piRam1011735c + 0x110),3,0,0,
               *piRam1011735c + *(char *)(*puRam101174b0 + 10) * 0x14 + 0x224);
  uVar1 = *puVar5;
  uVar2 = *puVar4;
  if (param_1 == 0) {
    iVar7 = FUN_1005f230(1,0xb,0xffffffffffffffff);
    uVar8 = *(unsigned short *)(iVar7 * 2 + iVar6);
  }
  else {
    iVar6 = FUN_1005f230(1,5,0xffffffffffffffff);
    if ((iVar6 == 0) && (*(short *)(*piVar3 + 0x114) != 0)) {
      uVar8 = 5;
    }
    else {
      uVar8 = 4;
    }
  }
  *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0xc + 0x1142) = 1;
  *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0xc + 0x1146) =
       (short)(((unsigned long long)uVar1 - (unsigned long long)uVar2 & 0xffffffff) / 0x16);
  *(unsigned short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0xc + 0x1144) = uVar8;
  if (6 < uVar8) {
    return;
  }
  return;
}

/* Address: 0x1004bc90 Size: 64 bytes */
void FUN_1004bc90()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_1004b11c(0);
  FUN_1007c714(*(int *)(*(int *)(*(int*)((char*)ppuVar1 - 0x155)) + 0x88),0x5e3);
  return;
}

/* Address: 0x1004bcd0 Size: 60 bytes */
void FUN_1004bcd0()

{
  FUN_1002bef8(*(short *)*puRam101176e0,((short *)*puRam101176e0)[1]);
  FUN_10052900();
  return;
}

/* Address: 0x1004c0b8 Size: 284 bytes */
void FUN_1004c0b8()

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int iVar4;
  char auStack_1ea8 [260];
  char auStack_1da4 [80];
  int local_1d54;
  int local_1d50;
  int uStack_1d4c;
  
  puVar3 = puRam10115f64;
  iVar1 = *piRam1011735c;
  iVar2 = iVar1 + (*(short *)(iVar1 + 0x110) * 4 - (int)*(short *)(iVar1 + 0x110)) * 4;
  local_1d54 = *(int *)(iVar2 + 0x1142);
  uStack_1d4c = *(int *)(iVar2 + 0x114a);
  /* ((short)((unsigned int)local_1d50 >> 16)) = (short)((unsigned int)*(int *)(iVar2 + 0x1146) >> 0x10); */
  iVar4 = (int)((short)((unsigned int)local_1d50 >> 16));
  local_1d50 = *(int *)(iVar2 + 0x1146);
  FUN_10001dd0(auStack_1da4,uRam10115f28,
               iVar1 + *(char *)(*piRam10117360 + iVar4 * 0x16 + 10) * 0x14 + 0x224);
  FUN_100b19f4(auStack_1ea8,auStack_1da4);
  FUN_10090e0c(*puVar3,0x73747231,auStack_1ea8,1);
  if (((short)local_1d54) < 7) {
    return;
  }
  return;
}

/* Address: 0x1004d404 Size: 400 bytes */
void FUN_1004d404()
{
  return;
}

/* Address: 0x1004d938 Size: 148 bytes */
void FUN_1004d938()

{
  int *puVar1;
  int *puVar2;
  int *ppuVar3;
  short local_18 [12];
  
  puVar2 = puRam101176e0;
  puVar1 = puRam101174b0;
  ppuVar3 = 0 /* TVect base */;
  FUN_1002122c(*(short *)*puRam101174b0,((short *)*puRam101174b0)[1],local_18);
  *puVar2 = *puVar1;
  if (0 < local_18[0]) {
    FUN_10021a3c(local_18[0],(*(int*)((char*)ppuVar3 - 0xfd)),0);
    FUN_10055c64(*puVar2);
  }
  FUN_1003f674(1,1,1);
  return;
}

/* Address: 0x1004d9cc Size: 496 bytes */
void FUN_1004d9cc(short param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *puVar4;
  int *ppuVar5;
  int iVar6;
  int local_154;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  puVar4 = puRam10117370;
  piVar3 = piRam1011734c;
  piVar2 = piRam10115f64;
  ppuVar5 = 0 /* TVect base */;
  FUN_10060608(1,1,0);
  if (*piVar2 == 0) {
    iVar6 = FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar5 - 0x79)) +
                         (int)*(short *)(**(int **)(*(int*)((char*)ppuVar5 - 0x79)) + 200),0x1068,
                         *(int *)(*piVar3 + 0x88));
    *piVar2 = iVar6;
    FUN_100db26c();
  }
  FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 800));
  FUN_10060608(0,0,0);
  FUN_1004d404(param_1,param_2);
  iVar6 = *(short *)(**(int **)(local_154 + -0x544) +
                     *(short *)(**(int **)(local_154 + -0x544) + 0x110) * 0xc + 0x1146) * 0x16;
  FUN_10061980(*(short *)(**(int **)(local_154 + -0x540) + iVar6),
               *(short *)(**(int **)(local_154 + -0x540) + iVar6 + 2),1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar4;
  *puVar4 = auStack_130;
  iVar6 = FUN_10000090(auStack_130);
  if (iVar6 == 0) {
    FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
    FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
    *piVar2 = 0;
    FUN_1004d938();
    *puVar4 = local_28;
  }
  else {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    }
    *piVar2 = 0;
    FUN_100db158(local_30,local_2c);
  }
  FUN_1007c714(*(int *)(*piVar3 + 0x88),0x3fa);
  return;
}













































































































































































































































































































/* Address: 0x1004dbbc Size: 216 bytes */
long long FUN_1004dbbc(short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = *piRam1011735c + iVar1 * 0x20;
  if (*(short *)(iVar2 + 0x82e) == 0) {
    return 0;
  }
  if (((int)*(short *)(*piRam1011735c + iVar1 * 0x20 + 0x830) &
      1 << ((int)*(short *)(*piRam1011735c + 0x110) & 0x3fU)) != 0) {
    return 0;
  }
  if (*(char *)(*piRam1011735c + iVar1 * 0x20 + 0x82a) == '\0') {
    return 0;
  }
  if (*(char *)(*piRam1011735c + iVar1 * 0x20 + 0x82a) == '\x01') {
    return 0;
  }
  if ((*(unsigned int *)(*piRam10117358 + *(short *)(iVar2 + 0x814) * 0xe0 + *(short *)(iVar2 + 0x812) * 2)
       >> 0x16 & 1) != 0) {
    return 0;
  }
  return 1;
}

/* Address: 0x1004dc94 Size: 1120 bytes */
long long FUN_1004dc94(short *param_1)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  long long lVar10;
  int iVar11;
  
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  iVar11 = *piRam1011735c;
  iVar4 = *(short *)(iVar11 + *(short *)(iVar11 + 0x110) * 0xc + 0x1146) * 0x16;
  bVar1 = true;
  if (*(char *)(iVar11 + (*(unsigned int *)(*piRam10117358 + *(short *)(*piRam10117360 + iVar4 + 2) * 0xe0 +
                                   *(short *)(*piRam10117360 + iVar4) * 2) >> 0x18) + 0x711) != '\n'
     ) {
    iVar11 = 0;
    bVar1 = true;
    do {
      if ((*(char *)(*piRam10117364 + iVar11 * 6 + 4) == '\x02') &&
         (*(char *)(iVar11 * 6 + *piRam10117364) == '\0')) {
        bVar1 = false;
      }
      sVar7 = (short)iVar11 + 1;
      iVar11 = (int)sVar7;
    } while (sVar7 < 0x1c);
  }
  iVar11 = 0;
  lVar10 = 0;
  do {
    iVar4 = *piVar2 + iVar11 * 0x1e;
    if (((*(char *)(iVar4 + 0xd28) == '\0') &&
        (iVar4 = FUN_100390e4(*(int *)(iVar4 + 0xd12),*(int *)(iVar4 + 0xd16),
                              *(int *)(iVar4 + 0xd1a),*(int *)(iVar4 + 0xd1e),
                              *(int *)(iVar4 + 0xd22),*(int *)(iVar4 + 0xd26),
                              *(int *)(iVar4 + 0xd2a),*(int *)(iVar4 + 0xd2e)),
        iVar4 != 0)) && ((7 < iVar11 || (iVar11 == *(short *)(*piVar2 + 0x110))))) {
      lVar10 = (long long)(short)((short)lVar10 + 1);
    }
    sVar7 = (short)iVar11 + 1;
    iVar11 = (int)sVar7;
  } while (sVar7 < 0x16);
  sVar9 = 0;
  sVar8 = 0;
  sVar7 = 0;
  if (0 < *(short *)(*piVar2 + 0x810)) {
    do {
      sVar8 = sVar7;
      iVar11 = FUN_1004dbbc(sVar9);
      if (iVar11 != 0) {
        sVar8 = sVar8 + 1;
      }
      sVar9 = sVar9 + 1;
      sVar7 = sVar8;
    } while (sVar9 < *(short *)(*piVar2 + 0x810));
  }
  if (0 < (int)lVar10) {
    iVar11 = FUN_1005f230(1,3,0);
    if (iVar11 == 1) {
      sVar7 = FUN_1005f230(1,lVar10,0);
      iVar11 = 0;
      sVar8 = 0;
      do {
        iVar4 = *piVar2 + iVar11 * 0x1e;
        if (((*(char *)(iVar4 + 0xd28) == '\0') &&
            (iVar4 = FUN_100390e4(*(int *)(iVar4 + 0xd12),*(int *)(iVar4 + 0xd16),
                                  *(int *)(iVar4 + 0xd1a),*(int *)(iVar4 + 0xd1e),
                                  *(int *)(iVar4 + 0xd22),*(int *)(iVar4 + 0xd26),
                                  *(int *)(iVar4 + 0xd2a),*(int *)(iVar4 + 0xd2e)),
            iVar4 != 0)) &&
           (((7 < iVar11 || (iVar11 == *(short *)(*piVar2 + 0x110))) &&
            (sVar8 = sVar8 + 1, sVar8 == sVar7)))) break;
        sVar9 = (short)iVar11 + 1;
        iVar11 = (int)sVar9;
      } while (sVar9 < 0x16);
      *param_1 = (short)iVar11;
      return 0;
    }
    if (0 < (int)lVar10) goto LAB_1004e05c;
  }
  if ((0 < sVar8) && (iVar11 = FUN_1005f230(1,3,0), iVar11 == 1)) {
    sVar7 = 10000;
    iVar11 = 0;
    uVar6 = 0;
    iVar4 = 0;
    if (0 < *(short *)(*piVar2 + 0x810)) {
      do {
        iVar5 = FUN_1004dbbc(iVar4);
        if (iVar5 != 0) {
          iVar5 = *piVar2;
          sVar9 = FUN_10003768((long long)*(short *)(iVar5 + iVar4 * 0x20 + 0x812) -
                               (long long)
                               *(short *)(*piVar3 +
                                         *(short *)(iVar5 + *(short *)(iVar5 + 0x110) * 0xc + 0x1146
                                                   ) * 0x16));
          iVar5 = *piVar2;
          sVar8 = FUN_10003768((long long)*(short *)(iVar4 * 0x20 + iVar5 + 0x814) -
                               (long long)
                               *(short *)(*piVar3 + *(short *)(iVar5 + *(short *)(iVar5 + 0x110) *
                                                                       0xc + 0x1146) * 0x16 + 2));
          if (sVar8 < sVar9) {
            sVar8 = sVar9;
          }
          if (sVar8 < sVar7) {
            iVar11 = iVar4;
            sVar7 = sVar8;
          }
        }
        uVar6 = (short)iVar11;
        sVar8 = (short)iVar4 + 1;
        iVar4 = (int)sVar8;
      } while (sVar8 < *(short *)(*piVar2 + 0x810));
    }
    *param_1 = uVar6;
    return 1;
  }
LAB_1004e05c:
  if ((bVar1) &&
     ((599 < *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186) ||
      (iVar11 = FUN_1005f230(1,2,0xffffffffffffffff), iVar11 != 0)))) {
    uVar6 = FUN_1005f230(1,3,2);
    *param_1 = uVar6;
    return 3;
  }
  uVar6 = FUN_1005f230(2,1000,1000);
  *param_1 = uVar6;
  return 2;
}

/* Address: 0x1004e0f4 Size: 228 bytes */
void FUN_1004e0f4(unsigned short param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  
  puVar3 = puRam10117360;
  piVar2 = piRam1011735c;
  if (param_1 < 4) {
    return;
  }
  iVar1 = *piRam1011735c;
  FUN_10038c60((int)*(short *)(iVar1 + 0x110),2,0,0,
               iVar1 + *(char *)(*puRam10117360 +
                                 *(short *)(iVar1 + *(short *)(iVar1 + 0x110) * 0xc + 0x1146) * 0x16
                                + 10) * 0x14 + 0x224);
  FUN_1003357c((unsigned long long)*puVar3 +
               (long long)*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0xc + 0x1146) * 0x16,10)
  ;
  return;
}

/* Address: 0x1004f388 Size: 176 bytes */
void FUN_1004f388()

{
  int local_7c;
  char auStack_58 [88];
  
  *puRam101175e0 = *puRam10115db4;
  *puRam101175e4 = *puRam10115db0;
  FUN_10001dd0(auStack_58,uRam10115f30,
               (unsigned long long)*puRam1011735c +
               (((long long)*psRam1011677c & 0x7ffffffU) * 0x20 + (long long)*psRam1011677c &
               0x7fffffff) * 2 + 0x1608);
  FUN_10050ffc((unsigned long long)*(unsigned int *)(local_7c + -0x1970) + 0xc,
               (unsigned long long)*(unsigned int *)(local_7c + -0x1970) + 0x18,
               (unsigned long long)*(unsigned int *)(local_7c + -0x1970) + 0x30,auStack_58,
               (unsigned long long)*(unsigned int *)(local_7c + -0x1970) + 0x38,*(int *)(local_7c + -0x196c),0
              );
  return;
}

/* Address: 0x1004f704 Size: 228 bytes */
unsigned short * FUN_1004f704()

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *ppuVar5;
  short sVar6;
  unsigned long long uVar7;
  
  iVar4 = iRam101175ec;
  iVar3 = iRam101175e8;
  piVar2 = piRam1011735c;
  ppuVar5 = 0 /* TVect base */;
  *puRam10115f3c = 0;
  uVar7 = 0;
  do {
    iVar1 = (int)((uVar7 & 0xffffffff) << 1);
    if (*(short *)(*piVar2 + iVar1 + 0x138) == 0) {
      *(short *)((int)((uVar7 & 0xffffffff) << 1) + iVar3) = 1;
    }
    else {
      *(short *)(iVar1 + iVar3) = 0;
    }
    *(short *)((int)((uVar7 & 0xffffffff) << 1) + iVar4) = 0;
    sVar6 = (short)uVar7 + 1;
    uVar7 = (unsigned long long)sVar6;
  } while (sVar6 < 8);
  FUN_1002bdc4();
  if (*(unsigned short *)(*(int*)((char*)ppuVar5 - 0x658)) < 5) {
    return (unsigned short *)(*(int*)((char*)ppuVar5 - 0x658));
  }
  return (unsigned short *)0x0;
}

/* Address: 0x1004fbb8 Size: 36 bytes */
void FUN_1004fbb8()

{
  FUN_1004b0b8();
  return;
}

/* Address: 0x1004fbdc Size: 1560 bytes */

void FUN_1004fbdc()

{
  int bVar1;
  unsigned short uVar2;
  int bVar3;
  unsigned short *puVar4;
  short *puVar5;
  int iVar6;
  int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  short sVar14;
  unsigned int uVar15;
  short sVar16;
  unsigned long long uVar17;
  int local_94;
  char auStack_68 [16];
  char auStack_58 [10];
  short local_4e;
  unsigned short local_4c;
  short local_4a;
  
  iVar10 = iRam101175ec;
  iVar9 = iRam101175e8;
  iVar8 = iRam10117450;
  uVar7 = FUN_10116698;
  iVar6 = iRam10115f4c;
  puVar5 = puRam10115f48;
  iVar11 = iRam10115f44;
  puVar4 = puRam10115f3c;
  if (*psRam10115f40 == 3) {
    FUN_1004fbb8();
  }
  else {
    piVar12 = (int *)FUN_10117884(*piRam10115f50 + (int)*(short *)(*(int *)*piRam10115f50 + 0x308),
                                  0x62617267);
    if ((piVar12 != (int *)0x0) &&
       (iVar13 = FUN_10117884((int)*(short *)(*piVar12 + 0x3a8) + (int)piVar12), iVar13 != 0)) {
      FUN_100462c8(5);
      if (*(int *)(iVar8 + 0x10) != 0) {
        FUN_10009a98();
      }
      uVar17 = 0;
      do {
        iVar13 = (int)((uVar17 & 0xffffffff) << 1);
        if (*(short *)(iVar13 + iVar9) == 0) {
          local_4e = *(short *)(iVar13 + iVar11);
          local_4a = 8;
          if ((short)*puVar4 < 1) {
            local_4c = 1;
          }
          else {
            iVar13 = (int)((uVar17 & 0xffffffff) << 1);
            if (*(short *)(iVar13 + iVar10) < 0) {
              *(short *)(iVar13 + iVar10) = 0;
            }
            local_4c = (unsigned short)((*(short *)((int)((uVar17 & 0xffffffff) << 1) + iVar10) * 0xf0) /
                               (int)(short)*puVar4);
          }
          if ((short)local_4c < 1) {
            local_4c = 1;
          }
          bVar1 = (short)local_4c < 0;
          uVar2 = local_4c & 7;
          uVar15 = (unsigned int)(short)local_4c;
          sVar16 = local_4c -
                   (short)(((long long)((int)uVar15 >> 3) +
                            (unsigned long long)((int)uVar15 < 0 && (uVar15 & 7) != 0) & 0xffffffff) << 3);
          sVar14 = 0;
          bVar3 = false;
          do {
            if (sVar14 == (unsigned short)((short)((int)uVar15 >> 3) + (unsigned short)(bVar1 && uVar2 != 0))) {
              bVar3 = true;
              if (0 < sVar16) {
                iVar13 = (int)((uVar17 & 0xffffffff) << 2);
                FUN_10009b48(iVar8,*(short *)(iVar13 + iVar6),
                             *(short *)(iVar13 + iVar6 + 2),sVar16,8,uVar7,sVar14 * 8 + 9,
                             local_4e);
              }
            }
            else {
              iVar13 = (int)((uVar17 & 0xffffffff) << 2);
              FUN_10009b48(iVar8,*(short *)(iVar13 + iVar6),*(short *)(iVar13 + iVar6 + 2)
                           ,8,8,uVar7,sVar14 * 8 + 9,local_4e);
              sVar14 = sVar14 + 1;
            }
            FUN_100226b0(auStack_58,8,local_4e + -1,local_4c + 2,local_4a + 2);
            FUN_10047abc(auStack_58,0xfc,0xf8);
          } while (!bVar3);
        }
        sVar14 = (short)uVar17 + 1;
        uVar17 = (unsigned long long)sVar14;
      } while (sVar14 < 8);
      FUN_100479f4(0xfc);
      FUN_10000270(7,0x16);
      FUN_10000288(0xf0,0);
      FUN_10000270(7,0x10);
      FUN_10000288(0,6);
      FUN_10000270(0x43,0x12);
      FUN_10000288(0,4);
      FUN_10000270(0x7f,0x10);
      FUN_10000288(0,6);
      FUN_10000270(0xbb,0x12);
      FUN_10000288(0,4);
      FUN_10000270(0xf7,0x10);
      FUN_10000288(0,6);
      FUN_100479f4(0xf8);
      FUN_10000270(9,0x18);
      FUN_10000288(0xf0,0);
      FUN_10000270(9,0x12);
      FUN_10000288(0,6);
      FUN_10000270(0x45,0x14);
      FUN_10000288(0,4);
      FUN_10000270(0x81,0x12);
      FUN_10000288(0,6);
      FUN_10000270(0xbd,0x14);
      FUN_10000288(0,4);
      FUN_10000270(0xf9,0x12);
      FUN_10000288(0,6);
      FUN_100479f4(0xe0);
      FUN_10000270(9,0x17);
      FUN_10000288(0xf0,0);
      FUN_10000270(8,0x11);
      FUN_10000288(0,6);
      FUN_10000270(0x44,0x13);
      FUN_10000288(0,4);
      FUN_10000270(0x80,0x11);
      FUN_10000288(0,6);
      FUN_10000270(0xbc,0x13);
      FUN_10000288(0,4);
      FUN_10000270(0xf8,0x11);
      FUN_10000288(0,6);
      iVar11 = local_94;
      FUN_1003206c(2,0xe0,0xff,0xf9);
      FUN_10001dd0(auStack_68,*(int *)(iVar11 + -0x1968),*puVar4);
      FUN_1005f200(puVar5[4],puVar5[5],auStack_68);
      uVar2 = *puVar4;
      uVar15 = *(unsigned int *)(local_94 + -0x1968);
      FUN_10001dd0(auStack_68,(unsigned long long)uVar15 + 4,
                   (long long)((int)(short)uVar2 >> 1) +
                   (unsigned long long)((short)uVar2 < 0 && (uVar2 & 1) != 0));
      FUN_1005f1d0(puVar5[2],puVar5[3],auStack_68);
      FUN_1005f1d0(*puVar5,puVar5[1],(unsigned long long)uVar15 + 8);
      if (*(int *)(iVar8 + 0x10) != 0) {
        FUN_10009b00(*(int *)(iVar8 + 0x10));
      }
    }
  }
  return;
}








































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100501f4 Size: 632 bytes */
void FUN_100501f4(unsigned short param_1)

{
  unsigned short *puVar1;
  int iVar3;
  long long uVar2;
  int *piVar4;
  int *piVar5;
  int local_3d4;
  char auStack_3b0 [256];
  char auStack_2b0 [256];
  char auStack_1b0 [296];
  char local_88 [136];
  
  piVar5 = piRam10115f50;
  puVar1 = puRam10115f40;
  if ((param_1 != 0) && (*piRam10115f50 == 0)) {
    iVar3 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xe74,
                         *(int *)(*piRam1011734c + 0x88));
    *piVar5 = iVar3;
    FUN_100db26c();
  }
  uVar2 = FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0x7f8));
  FUN_100db26c(uVar2);
  piVar4 = (int *)FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0x308),0x6e616d65);
  if (piVar4 != (int *)0x0) {
    uVar2 = FUN_1005f678(0x4a,*puVar1);
    FUN_100b19f4(auStack_1b0,uVar2);
    FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_1b0,param_1 & 0xff);
  }
  piVar4 = (int *)FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0x308),0x64657363);
  if (piVar4 != (int *)0x0) {
    uVar2 = FUN_1005f678(0x4b,*puVar1);
    FUN_100b19f4(auStack_2b0,uVar2);
    FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_2b0,param_1 & 0xff);
  }
  FUN_1004f704();
  FUN_1004fbdc();
  iVar3 = **(int **)(local_3d4 + -0x544) + *(short *)(**(int **)(local_3d4 + -0x544) + 0x110) * 2;
  FUN_1003206c(2,*(short *)(iVar3 + 0xa0),*(short *)(iVar3 + 0xb0),0xf9);
  local_88[0] = *(char *)(*(int *)(local_3d4 + -0x1968) + 0xc);
  if (*puVar1 < 5) {
    return;
  }
  piVar5 = (int *)FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0x308),0x706c6179);
  if (piVar5 != (int *)0x0) {
    FUN_100b19f4(auStack_3b0,local_88);
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7c8),auStack_3b0,param_1 & 0xff);
  }
  return;
}

/* Address: 0x10050830 Size: 536 bytes */
void FUN_10050830()

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  unsigned long long uVar4;
  
  piVar3 = piRam10115f50;
  psVar1 = psRam10115f40;
  piVar2 = (int *)FUN_10117884(*piRam10115f50 + (int)*(short *)(*(int *)*piRam10115f50 + 0x308),
                               0x61726d79);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x748) + (int)piVar2,*psVar1 == 0,1);
  }
  piVar2 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),0x63697479);
  if (piVar2 != (int *)0x0) {
    uVar4 = (unsigned long long)*psVar1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x748) + (int)piVar2,
                 ('\x01' - ((1 < uVar4) + '\x01')) +
                 (uVar4 != 0 && (unsigned long long)(1 < uVar4) <= uVar4 - 1),1);
  }
  piVar2 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),0x676f6c64);
  if (piVar2 != (int *)0x0) {
    uVar4 = (unsigned long long)*psVar1;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x748),
                 ('\x02' - ((2 < uVar4) + '\x02')) +
                 (1 < uVar4 && (unsigned long long)(2 < uVar4) <= uVar4 - 2),1);
  }
  piVar2 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),0x70726f64);
  if (piVar2 != (int *)0x0) {
    uVar4 = (unsigned long long)*psVar1;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x748),
                 ('\x03' - ((3 < uVar4) + '\x03')) +
                 (2 < uVar4 && (unsigned long long)(3 < uVar4) <= uVar4 - 3),1);
  }
  piVar3 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),0x77696e6e);
  if (piVar3 != (int *)0x0) {
    uVar4 = (unsigned long long)*psVar1;
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x748),
                 ('\x04' - ((4 < uVar4) + '\x04')) +
                 (3 < uVar4 && (unsigned long long)(4 < uVar4) <= uVar4 - 4),1);
  }
  return;
}

/* Address: 0x10050b10 Size: 160 bytes */
void FUN_10050b10(short param_1)

{
  int *ppuVar1;
  int *piVar2;
  
  ppuVar1 = 0 /* TVect base */;
  *puRam10115f40 = param_1;
  FUN_1007f094(*(int *)(*piRam1011734c + 0x88),param_1);
  piVar2 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar1 - 0x654)) +
                               (int)*(short *)(**(int **)(*(int*)((char*)ppuVar1 - 0x654)) + 0x308),0x62617267);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
  }
  FUN_100501f4(1);
  FUN_10050830();
  return;
}

/* Address: 0x10050c0c Size: 1008 bytes */
void FUN_10050c0c(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,long long param_6,short param_7,short param_8)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char auStack_668 [256];
  char auStack_568 [256];
  char auStack_468 [256];
  char local_368 [256];
  int local_268;
  int local_264;
  char auStack_260 [256];
  short local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  char auStack_144 [324];
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xd48,
                               *(int *)(*piRam1011734c + 0x88));
  FUN_100db26c();
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = 0;
  local_158 = *puVar1;
  *puVar1 = auStack_260;
  iVar3 = FUN_10000090(auStack_260);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x68656164);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_468,param_1);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_468,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x73747231);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_568,param_2);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_568,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x73747232);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_668,param_3);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_668,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x6e616d65);
    FUN_100db26c(piVar4);
    *(short *)(piVar4 + 0x2d) = param_8;
    FUN_100b19f4(auStack_144,param_4);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_144,0);
    if (param_7 == 0) {
      piVar5 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x63616e63);
      if (piVar5 != (int *)0x0) {
        local_268 = 0xffff8300;
        local_264 = 0xffff8300;
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x370),&local_268,0);
      }
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
    iVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x328));
    if (iVar3 == 0x6f6b2020) {
      local_368[0] = 0;
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7a0),local_368);
      FUN_100b1b08(local_368);
      FUN_10117884();
    }
    else {
      FUN_10117884();
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    *puVar1 = local_158;
  }
  else {
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    }
    FUN_100db158(local_160,local_15c);
  }
  return;
}

/* Address: 0x10051f98 Size: 492 bytes */
long long FUN_10051f98(long long param_1,long long param_2,unsigned short param_3)

{
  int *ppuVar1;
  long long uVar2;
  long long uVar3;
  char uVar5;
  long long uVar4;
  int local_14c;
  short local_128 [2];
  unsigned char local_124 [256];
  char auStack_24 [36];
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100b19f4(local_124);
  if (local_124[(short)(local_124[0] - 3)] == 0x2e) {
    local_124[0] = local_124[0] - 4;
  }
  uVar2 = FUN_100b1b90(local_124,ZEXT48((*(int*)((char*)ppuVar1 - 0x651))) + 0x20,1);
  FUN_100b1c88(local_124,1,uVar2);
  uVar2 = FUN_100b1b90(local_124,ZEXT48((*(int*)((char*)ppuVar1 - 0x651))) + 0x24,1);
  FUN_100b1c88(local_124,1,uVar2);
  uVar2 = FUN_10000420();
  FUN_10003450(0);
  uVar3 = FUN_100b1c84(local_124);
  uVar3 = FUN_10002238(param_1,uVar3);
  if (((int)uVar3 == 0) && (((param_3 & 1) != 0 || ((param_3 & 4) == 0)))) {
    return 0;
  }
  FUN_10003450(uVar2);
  if (((int)uVar3 == 0) && ((param_3 & 4) != 0)) {
    uVar5 = FUN_100f1574(1);
    uVar2 = FUN_10000948(0);
    **(char **)(local_14c + -0x3c) = uVar5;
    FUN_100db26c();
    uVar3 = FUN_100030a8(param_1);
    local_128[0] = (short)uVar3;
    uVar4 = FUN_100b1c84(local_124);
    FUN_10002568(uVar2,param_1,uVar3,uVar4);
    FUN_100db328();
  }
  else {
    FUN_10001758(uVar3,local_128,auStack_24,local_124);
    FUN_100db328();
  }
  uVar2 = FUN_100fb260(0);
  FUN_100fb300(uVar2,param_1,local_128[0]);
  return uVar2;
}

















































































































































































































































/* Address: 0x100523a8 Size: 232 bytes */
void FUN_100523a8(int *param_1,unsigned long long param_2)

{
  long long uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0xb8),param_2,iVar2,
                         *(int *)(iVar2 + 0xbc));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0xb0),uVar1);
    if ((param_2 & 0xff) != 0) {
      uVar1 = FUN_100fa850();
      iVar2 = FUN_100f5278(param_1,uVar1);
      if (iVar2 != 0) {
        FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0xd8));
        FUN_100db2f4();
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  return;
}















































































































/* Address: 0x10052490 Size: 68 bytes */
void FUN_10052490()

{
  return;
}




































/* Address: 0x10052608 Size: 36 bytes */
void FUN_10052608()

{
  FUN_10032040();
  return;
}

/* Address: 0x1005262c Size: 724 bytes */
void FUN_1005262c(short *param_1,int param_2,int param_3,short param_4)

{
  int uVar1;
  int bVar2;
  int *puVar3;
  int iVar7;
  int iVar8;
  unsigned long long uVar4;
  long long uVar5;
  long long uVar6;
  int iVar9;
  short *psVar10;
  short sVar11;
  long long uVar12;
  int local_64;
  int local_40;
  int local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  
  puVar3 = puRam101176d8;
  FUN_10000870(&local_3c,&local_40);
  iVar7 = FUN_10009a98(*(int *)(param_2 + 0x10));
  bVar2 = false;
  uVar12 = 0;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    uVar12 = FUN_10001290(*(int *)(param_3 + 0x10));
  }
  if ((int)uVar12 != 0) {
    FUN_10001560(uVar12);
    iVar8 = FUN_10001d70(uVar12);
    if (iVar8 == 0) {
      bVar2 = true;
    }
    else {
      FUN_10003468(uVar12);
    }
  }
  if ((*param_1 == 0) || (bVar2)) {
    uVar12 = FUN_10001290(*(int *)(param_2 + 0x10));
    FUN_100db26c();
    uVar4 = FUN_10001560(uVar12);
    iVar8 = FUN_1000a12c(param_3,*(short *)(param_2 + 4),*(short *)(param_2 + 6),1,0,
                         (uVar4 & 0x40) != 0);
    if (iVar8 == 0) {
      FUN_100db26c(0);
    }
    *param_1 = 1;
  }
  uVar12 = FUN_10009a98(*(int *)(param_3 + 0x10));
  FUN_10000888(*(int *)(param_3 + 0x10),0);
  local_32 = *(short *)(param_2 + 4);
  local_34 = *(short *)(param_2 + 6);
  local_38 = 0;
  local_36 = 0;
  psVar10 = (short *)((param_4 * 4 - (int)param_4) * 2 + *(int *)(local_64 + -0x1d4));
  iVar8 = 0;
  do {
    iVar9 = **(int **)(iVar7 + 0x2a) + iVar8 * 8;
    if (((*(short *)(iVar9 + 10) == *psVar10) && (*(short *)(iVar9 + 0xe) == psVar10[2])) &&
       (*(short *)(iVar9 + 0xc) == psVar10[1])) break;
    sVar11 = (short)iVar8 + 1;
    iVar8 = (int)sVar11;
  } while (sVar11 < 0x100);
  if (iVar8 != 0x100) {
    iVar9 = *(int *)*puVar3 + iVar8 * 8;
    *(short *)(iVar9 + 10) = 0xffff;
    *(short *)(iVar9 + 0xe) = 0xffff;
    *(short *)(iVar9 + 0xc) = 0xffff;
    uVar1 = *(int *)(iVar7 + 0x2a);
    *(int *)(iVar7 + 0x2a) = *puVar3;
    uVar5 = FUN_100b0578(&local_38);
    uVar6 = FUN_100b0578(&local_38);
    FUN_100008d0(iVar7,uVar12,uVar6,uVar5,0,0);
    *(int *)(iVar7 + 0x2a) = uVar1;
    iVar7 = iVar8 * 8 + *(int *)*puVar3;
    *(short *)(iVar7 + 10) = 0;
    *(short *)(iVar7 + 0xe) = 0;
    *(short *)(iVar7 + 0xc) = 0;
  }
  FUN_10000888(local_3c,local_40);
  FUN_10009b00(*(int *)(param_2 + 0x10));
  FUN_10009b00(*(int *)(param_3 + 0x10));
  return;
}




















































































































































































































































































































































































































































/* Address: 0x10052900 Size: 936 bytes */
void FUN_10052900()
{
  return;
}
















































































































































































































































































































































































































































































































































































































































































/* Address: 0x10052ca8 Size: 524 bytes */
void FUN_10052ca8()

{
  unsigned int uVar1;
  char cVar2;
  int iVar3;
  int bVar4;
  int bVar5;
  int *piVar6;
  int *piVar7;
  short *puVar8;
  short *puVar9;
  short *puVar10;
  int iVar11;
  int iVar12;
  unsigned long long uVar13;
  int iVar14;
  short sVar15;
  int *puVar16;
  int *puVar17;
  int iVar18;
  int iVar19;
  unsigned int local_54;
  
  iVar12 = iRam10117758;
  iVar11 = iRam1011773c;
  puVar10 = puRam1011760c;
  puVar9 = puRam10117600;
  puVar8 = puRam101175fc;
  piVar7 = piRam1011735c;
  piVar6 = piRam10117358;
  uVar13 = ZEXT48(0 /* TVect base */);
  if (*(short *)(*piRam1011735c + 0x810) < 1) {
    *puRam1011760c = 0;
  }
  else {
    iVar19 = 0;
    iVar18 = 0;
    bVar5 = false;
    bVar4 = false;
    do {
      iVar14 = *piVar7 + iVar18 * 0x20;
      if (*(short *)(iVar14 + 0x82e) != 0) {
        if (((int)*(short *)(iVar14 + 0x830) & 1 << ((int)*(short *)(*piVar7 + 0x110) & 0x3fU)) == 0
           ) {
          if (((*(unsigned int *)(*piVar6 + *(short *)(iVar14 + 0x814) * 0xe0 +
                         *(short *)(iVar14 + 0x812) * 2) >> 0x16 & 1) == 0) &&
             (iVar14 = FUN_1000a884((int)*(short *)(iVar14 + 0x812),(int)*(short *)(iVar14 + 0x814),
                                    *puVar9,*puVar8), iVar14 < 0x23)) {
            sVar15 = (short)iVar19;
            if (*(char *)(iVar18 * 0x20 + *piVar7 + 0x82a) == '\x04') {
              if (!bVar4) {
                *(short *)(iVar19 * 2 + iVar11) = 0xffff;
                puVar17 = *(int **)((int)uVar13 + -0x1940);
                puVar16 = (int *)(iVar19 * 0x20 + iVar12);
                uVar1 = puVar17[1];
                *puVar16 = *puVar17;
                puVar16[1] = uVar1 & 0xff000000;
                iVar19 = (int)(short)(sVar15 + 1);
                bVar4 = true;
              }
            }
            else if (*(char *)(*piVar7 + iVar18 * 0x20 + 0x82a) == '\x05') {
              if (!bVar5) {
                *(short *)(iVar19 * 2 + iVar11) = 0xfffe;
                iVar14 = *(int *)((int)uVar13 + -0x1940);
                puVar17 = (int *)(iVar19 * 0x20 + iVar12);
                uVar1 = *(unsigned int *)(iVar14 + 0xc);
                *puVar17 = *(int *)(iVar14 + 8);
                puVar17[1] = uVar1 & 0xffffff00;
                iVar19 = (int)(short)(sVar15 + 1);
                bVar5 = true;
              }
            }
            else {
              iVar14 = *piVar7;
              iVar3 = iVar14 + iVar18 * 0x20;
              if (*(char *)(iVar3 + 0x82a) == '\x02') {
                cVar2 = *(char *)(iVar3 + 0x82b);
                *(short *)(iVar19 * 2 + iVar11) = (short)cVar2;
                FUN_10001e78(iVar19 * 0x20 + iVar12,iVar14 + cVar2 * 0x1e + 0xd12);
                uVar13 = (unsigned long long)local_54;
                iVar19 = (int)(short)(sVar15 + 1);
              }
            }
          }
        }
      }
      sVar15 = (short)iVar18 + 1;
      iVar18 = (int)sVar15;
    } while (sVar15 < *(short *)(*piVar7 + 0x810));
    *puVar10 = (short)iVar19;
  }
  return;
}

/* Address: 0x10052eb4 Size: 184 bytes */
void FUN_10052eb4()

{
  int *piVar1;
  int iVar2;
  int local_2c;
  
  piVar1 = piRam10115f64;
  if (*piRam10115f64 == 0) {
    iVar2 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0x1004,
                         *(int *)(*piRam1011734c + 0x88));
    *piVar1 = iVar2;
    FUN_100db26c();
  }
  FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 800));
  FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
  **(short **)(local_2c + -0x1938) = 1;
  return;
}

/* Address: 0x10052fdc Size: 304 bytes */
void FUN_10052fdc(short param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int uVar5;
  int *ppuVar6;
  long long uVar7;
  
  uVar5 = uRam101175f8;
  piVar4 = piRam1011734c;
  piVar3 = piRam10115f64;
  ppuVar6 = 0 /* TVect base */;
  FUN_10052ca8();
  FUN_10092484(6);
  FUN_10052eb4(0xffffffffffffffff);
  uVar7 = FUN_1005f678(0x3b,0);
  FUN_10001dd0(uVar5,uVar7,
               (unsigned long long)*(unsigned int *)(*(int*)((char*)ppuVar6 - 0x151)) +
               (((long long)*(char *)(*(int *)(*(int*)((char*)ppuVar6 - 0xfc)) + 10) & 0x3fffffffU) * 4 +
                (long long)*(char *)(*(int *)(*(int*)((char*)ppuVar6 - 0xfc)) + 10) & 0x3fffffff) * 4 + 0x224);
  FUN_10052f6c(uVar5);
  FUN_10092b10(0);
  FUN_10075894(*piVar4);
  FUN_1003c938(0);
  FUN_1005f144(0x14);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1);
  }
  *piVar3 = 0;
  FUN_1007c714(*(int *)(*piVar4 + 0x88),0x3fa);
  iVar2 = *(int *)(*piVar4 + 0x88);
  *(short *)(iVar2 + 0x1de) = param_1;
  FUN_1007c714(iVar2,0x3f8);
  return;
}

/* Address: 0x100532a4 Size: 140 bytes */
void FUN_100532a4()

{
  int *piVar1;
  int *ppuVar2;
  int iVar3;
  short local_10 [8];
  
  piVar1 = piRam101176e0;
  ppuVar2 = 0 /* TVect base */;
  iVar3 = FUN_1002122c(*puRam10117600,*puRam101175fc,local_10);
  *piVar1 = iVar3;
  if (*(int *)(*(int*)((char*)ppuVar2 - 0xfc)) != 0) {
    *piVar1 = *(int *)(*(int*)((char*)ppuVar2 - 0xfc));
  }
  if (0 < local_10[0]) {
    FUN_10021a3c(local_10[0],(*(int*)((char*)ppuVar2 - 0xfd)),0);
    FUN_10055c64(*piVar1);
  }
  return;
}

/* Address: 0x10053330 Size: 408 bytes */
long long FUN_10053330()

{
  int bVar1;
  short *puVar2;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  int *piVar6;
  int *ppuVar7;
  short sVar10;
  int iVar9;
  long long uVar8;
  int iVar11;
  int iVar12;
  short local_20 [16];
  
  iVar9 = iRam1011773c;
  piVar6 = piRam101176e0;
  psVar5 = psRam1011760c;
  piVar4 = piRam101174b0;
  piVar3 = piRam1011735c;
  ppuVar7 = 0 /* TVect base */;
  iVar12 = (int)(short)(*(short *)(*piRam1011735c + 0x182) + -1);
  iVar11 = iVar12;
  if (*(short *)(*piRam1011735c + 0x182) != 0) {
    do {
      iVar11 = iVar12;
      if (*piRam10117360 + iVar12 * 0x16 == *piRam101174b0) break;
      iVar11 = (int)(short)((short)iVar12 + -1);
      bVar1 = iVar12 != 0;
      iVar12 = iVar11;
    } while (bVar1);
  }
  FUN_1003aeb0(3,*(short *)*piRam101174b0,((short *)*piRam101174b0)[1],0);
  iVar12 = 0;
  if (0 < *psVar5) {
    do {
      *(short *)(*piVar3 + *(short *)(iVar12 * 2 + iVar9) * 0x1e + 0xd2a) = (short)iVar11;
      *(char *)(*piVar3 + *(short *)(iVar12 * 2 + iVar9) * 0x1e + 0xd28) = 3;
      sVar10 = (short)iVar12 + 1;
      iVar12 = (int)sVar10;
    } while (sVar10 < *psVar5);
  }
  puVar2 = (short *)*piVar4;
  iVar9 = FUN_1002122c(*puVar2,puVar2[1],local_20);
  *piVar6 = iVar9;
  iVar9 = *piVar4;
  if (iVar9 != 0) {
    *piVar6 = iVar9;
  }
  FUN_10021a3c(local_20[0],(*(int*)((char*)ppuVar7 - 0xfd)),0);
  FUN_10055c64(*piVar6);
  if (*(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0xc + 0x1142) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1004e384(3,0,0,0);
  }
  return uVar8;
}

/* Address: 0x100547b4 Size: 112 bytes */
void FUN_100547b4()

{
  return;
}

/* Address: 0x10054928 Size: 48 bytes */
void FUN_10054928()

{
  FUN_10060608(1,1,0);
  return;
}

/* Address: 0x10054958 Size: 60 bytes */
void FUN_10054958()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_10052ca8();
  FUN_1003abfc((*(int*)((char*)ppuVar1 - 0x64d)),ZEXT48((*(int*)((char*)ppuVar1 - 0x650))) + 0x10,0,0x1022);
  return;
}

/* Address: 0x10054994 Size: 352 bytes */
void FUN_10054994()

{
  int *piVar1;
  long long uVar2;
  int *piVar3;
  
  piVar1 = piRam10115f64;
  uVar2 = FUN_10117884(*piRam10115f64 + (int)*(short *)(*(int *)*piRam10115f64 + 0x7f8));
  FUN_100db26c();
  FUN_10096744(uVar2);
  piVar3 = (int *)*piVar1;
  piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x646f6e65);
  if (piVar3 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar3 + 0x660) + (int)piVar3,0,1);
    FUN_10117884((int)*(short *)(*piVar3 + 0xd8) + (int)piVar3,0);
  }
  piVar1 = (int *)*piVar1;
  piVar3 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x6f766572);
  if (piVar3 != (int *)0x0) {
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),1);
    *(char *)((int)piVar3 + 0x4a) = 1;
  }
  FUN_1005f678(0x3d,0);
  FUN_100547b4();
  FUN_1005f678(0x3d,1);
  FUN_100547b4();
  FUN_1005f678(0x3d,2);
  FUN_100547b4();
  return;
}























































































































































/* Address: 0x10054af4 Size: 660 bytes */
void FUN_10054af4(short param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  long long uVar3;
  int *piVar4;
  unsigned long long uVar5;
  short sVar6;
  int iVar7;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  piVar2 = piRam1011735c;
  piVar4 = piRam10115f64;
  local_28 = FUN_1005f230(1,5,8);
  local_28 = param_1 - local_28;
  local_26 = FUN_1005f230(1,5,8);
  local_26 = param_2 - local_26;
  local_24 = FUN_1005f230(1,10,0xf);
  local_22 = FUN_1005f230(1,10,0xf);
  if (local_28 < 0) {
    local_28 = 0;
  }
  if (local_26 < 0) {
    local_26 = 0;
  }
  if (0x6f < (int)local_28 + (int)local_24) {
    local_24 = 0x6f - local_28;
  }
  if (0x9b < (int)local_26 + (int)local_22) {
    local_22 = 0x9b - local_26;
  }
  uVar5 = (unsigned long long)local_28;
  local_30 = (short)((uVar5 & 0xffffffff) << 1);
  local_2e = local_26 << 1;
  local_2c = local_24 << 1;
  local_2a = local_22 << 1;
  if ((int)local_28 < (int)local_28 + (int)local_24) {
    do {
      sVar6 = local_26;
      if ((int)local_26 < (int)local_26 + (int)local_22) {
        do {
          FUN_1000931c(*(short *)(*piVar2 + 0x110),uVar5,sVar6);
          sVar6 = sVar6 + 1;
        } while ((int)sVar6 < (int)local_26 + (int)local_22);
      }
      sVar6 = (short)uVar5 + 1;
      uVar5 = (unsigned long long)sVar6;
    } while ((int)sVar6 < (int)local_28 + (int)local_24);
  }
  iVar1 = *piVar2;
  iVar7 = (int)*(short *)(iVar1 + 0x110);
  if (*(short *)(iVar1 + iVar7 * 2 + 0xd0) == 0) {
    FUN_100635e0(iVar7);
    FUN_100479f4(0);
    FUN_100226d4(&local_30);
    FUN_1005f144(10);
    FUN_10060608(1,1,0);
    piVar2 = (int *)*piVar4;
    uVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7f8));
    FUN_100db26c();
    FUN_10096744(uVar3);
    piVar4 = (int *)*piVar4;
    piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x6f766572);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xd8),0);
      *(char *)((int)piVar4 + 0x4a) = 0;
    }
  }
  return;
}

/* Address: 0x10054d88 Size: 1664 bytes */
void FUN_10054d88(short param_1)

{
  short *puVar1;
  unsigned int *puVar2;
  int *puVar3;
  int uVar4;
  short *puVar5;
  int *piVar7;
  int *piVar8;
  int iVar9;
  long long uVar6;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_cc;
  char auStack_a8 [168];
  
  puVar5 = puRam10117600;
  puVar1 = puRam101175fc;
  uVar4 = uRam101175f8;
  puVar3 = puRam101174b0;
  puVar2 = puRam1011735c;
  piVar8 = piRam10115f64;
  if ((long long)param_1 < 0) {
    piVar7 = (int *)FUN_10117884(*piRam10115f64 + (int)*(short *)(*(int *)*piRam10115f64 + 0x308),
                                 0x6974656d);
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar7 + 0x660) + (int)piVar7,1,1);
      FUN_10117884((int)*(short *)(*piVar7 + 0xd8) + (int)piVar7,1);
      FUN_10117884((int)*(short *)(*piVar7 + 0x738) + (int)piVar7,
                   ((long long)**(short **)(local_cc + -0x294) + -1 +
                    (unsigned long long)((long long)**(short **)(local_cc + -0x294) != 0) << 0x20) >> 0x3f,1);
    }
    piVar7 = (int *)FUN_10117884(*piVar8 + (int)*(short *)(*(int *)*piVar8 + 0x308),0x6d6f6e65);
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x660),1,1);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0xd8),1);
    }
    piVar7 = (int *)FUN_10117884(*piVar8 + (int)*(short *)(*(int *)*piVar8 + 0x308),0x6d617073);
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x660),1,1);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0xd8),1);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738),*(short *)(*puVar2 + 0x124) == 0,1
                  );
    }
    piVar8 = (int *)FUN_10117884(*piVar8 + (int)*(short *)(*(int *)*piVar8 + 0x308),0x646f6e65);
    if (piVar8 != (int *)0x0) {
      FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x660),0,1);
      FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0xd8),0);
    }
  }
  else {
    sVar10 = *(short *)((int)(((long long)param_1 & 0xffffffffU) << 1) + iRam1011773c);
    if (sVar10 == -1) {
      FUN_1005f678(0x3f,2);
      FUN_100547b4();
      FUN_1005f678(0x3f,1);
      FUN_100547b4();
      iVar13 = 0;
      iVar14 = 0;
      iVar12 = 10000;
      if (0 < *(short *)(*puVar2 + 0x810)) {
        do {
          iVar9 = *puVar2 + iVar13 * 0x20;
          if (((*(short *)(iVar9 + 0x82e) != 0) &&
              (((int)*(short *)(iVar9 + 0x830) & 1 << ((int)*(short *)(*puVar2 + 0x110) & 0x3fU)) ==
               0)) && ((iVar9 = FUN_1000a884(*(short *)(iVar9 + 0x812),
                                             *(short *)(iVar9 + 0x814),*puVar5,*puVar1),
                       iVar9 < 0x23 &&
                       (iVar9 = *puVar2 + iVar13 * 0x20, *(char *)(iVar9 + 0x82a) == '\x04')))) {
            iVar9 = FUN_1000a884(*(short *)(iVar9 + 0x812),*(short *)(iVar9 + 0x814),
                                 *puVar5,*puVar1);
            if (iVar9 < iVar12) {
              iVar14 = iVar13;
              iVar12 = iVar9;
            }
          }
          sVar10 = (short)iVar13 + 1;
          iVar13 = (int)sVar10;
        } while (sVar10 < *(short *)(*puVar2 + 0x810));
      }
    }
    else if (sVar10 == -2) {
      FUN_1005f678(0x3f,3);
      FUN_100547b4();
      FUN_1005f678(0x3f,1);
      FUN_100547b4();
      iVar13 = 0;
      iVar14 = 0;
      iVar12 = 10000;
      if (0 < *(short *)(*puVar2 + 0x810)) {
        do {
          iVar9 = *puVar2 + iVar13 * 0x20;
          if ((((*(short *)(iVar9 + 0x82e) != 0) &&
               (((int)*(short *)(iVar9 + 0x830) & 1 << ((int)*(short *)(*puVar2 + 0x110) & 0x3fU))
                == 0)) &&
              (iVar9 = FUN_1000a884(*(short *)(iVar9 + 0x812),*(short *)(iVar9 + 0x814),
                                    *puVar5,*puVar1), iVar9 < 0x23)) &&
             (iVar9 = *puVar2 + iVar13 * 0x20, *(char *)(iVar9 + 0x82a) == '\x05')) {
            iVar9 = FUN_1000a884(*(short *)(iVar9 + 0x812),*(short *)(iVar9 + 0x814),
                                 *puVar5,*puVar1);
            if (iVar9 < iVar12) {
              iVar14 = iVar13;
              iVar12 = iVar9;
            }
          }
          sVar10 = (short)iVar13 + 1;
          iVar13 = (int)sVar10;
        } while (sVar10 < *(short *)(*puVar2 + 0x810));
      }
    }
    else {
      uVar6 = FUN_1005f678(0x3f,0);
      FUN_10001dd0(auStack_a8,uVar6,
                   (unsigned long long)*puVar2 +
                   (((long long)sVar10 & 0xfffffffU) * 0x10 - (long long)sVar10 & 0x7fffffff) * 2 +
                   0xd12);
      FUN_100547b4(auStack_a8);
      FUN_1005f678(0x3f,1);
      FUN_100547b4();
      iVar14 = 0;
      if (0 < *(short *)(*puVar2 + 0x810)) {
        do {
          if (*(char *)(*puVar2 + iVar14 * 0x20 + 0x82b) == (char)sVar10) break;
          sVar11 = (short)iVar14 + 1;
          iVar14 = (int)sVar11;
        } while (sVar11 < *(short *)(*puVar2 + 0x810));
      }
    }
    iVar13 = iVar14 * 0x20;
    iVar12 = *puVar2 + iVar13;
    *(unsigned short *)(iVar12 + 0x830) =
         *(unsigned short *)(iVar12 + 0x830) | (unsigned short)(1 << ((int)*(short *)(*puVar2 + 0x110) & 0x3fU));
    iVar12 = iVar13 + *puVar2;
    FUN_1000931c(*(short *)(*puVar2 + 0x110),*(short *)(iVar12 + 0x812),
                 *(short *)(iVar12 + 0x814));
    FUN_100635e0(*(short *)(*puVar2 + 0x110));
    FUN_10039ec8(*(short *)(*puVar2 + 0x110));
    FUN_10060608(0,1,0);
    uVar6 = FUN_1005f678(0x3f,7);
    FUN_10001dd0(uVar4,uVar6,iVar13 + *puVar2 + 0x816);
    FUN_100547b4(uVar4);
    FUN_1002c4b8(iVar14,8);
    FUN_1002c66c(iVar14,8);
    puVar1 = (short *)*puVar3;
    FUN_1002c734(*puVar1,puVar1[1],*(short *)(iVar13 + *puVar2 + 0x812),
                 *(short *)(iVar13 + *puVar2 + 0x814),8);
    puVar1 = (short *)*puVar3;
    FUN_10061980(*puVar1,puVar1[1],1);
    FUN_10061354(0);
    uVar6 = FUN_10117884(*piVar8 + (int)*(short *)(*(int *)*piVar8 + 0x7f8));
    FUN_100db26c();
    FUN_10096744(uVar6);
  }
  return;
}























































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100557b8 Size: 320 bytes */
void FUN_100557b8()

{
  char cVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar9;
  unsigned long long uVar8;
  int iVar10;
  
  piVar7 = piRam10117360;
  piVar6 = piRam1011735c;
  piVar5 = piRam10117358;
  piVar4 = piRam10117354;
  sVar2 = *(short *)(*piRam1011735c + 0x182);
  if (sVar2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar9 = sVar2 * 0x16;
      iVar10 = *piVar7 + iVar9;
      if (*(char *)(iVar10 + 5) == (char)*(short *)(*piVar6 + 0x110)) {
        if (((-(long long)*(short *)(iVar10 + 0xc) - 1U & 1) != 0) &&
           (*(char *)(iVar10 + 6) <= *(char *)(iVar10 + 7))) {
          sVar3 = *(short *)(*piVar7 + iVar9);
          uVar8 = (unsigned long long)*(short *)(iVar10 + 2);
          cVar1 = *(char *)((*(unsigned int *)(*piVar5 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 &
                                                       0xffffffff) << 5) +
                                      (int)(((long long)sVar3 & 0xffffffffU) << 1)) >> 0x18) +
                            *piVar6 + 0x711);
          if ((cVar1 != '\a') && (cVar1 != '\x04')) {
            if ((((cVar1 != '\x05') && (cVar1 != '\x01')) && (cVar1 != '\b')) && (cVar1 != '\t')) {
              if ((*(unsigned int *)(*piVar4 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) +
                            (int)sVar3) >> 0x18 & 0x1f) == 0) goto LAB_100558dc;
            }
          }
          iVar9 = *piVar5 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 5);
          iVar10 = (int)(((long long)sVar3 & 0xffffffffU) << 1);
          *(unsigned int *)(iVar9 + iVar10) = *(unsigned int *)(iVar9 + iVar10) | 0x200000;
        }
      }
LAB_100558dc:
    } while (sVar2 != 0);
  }
  return;
}

/* Address: 0x100558f8 Size: 180 bytes */
long long FUN_100558f8()

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  sVar1 = *(short *)(*piRam1011735c + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar4 = sVar1 * 0x16;
      iVar5 = *piVar3 + iVar4;
      if (*(char *)(iVar5 + 5) == (char)*(short *)(*piVar2 + 0x110)) {
        *(unsigned short *)(iVar5 + 0xc) = *(unsigned short *)(iVar5 + 0xc) & 0xffbf;
        iVar4 = *piVar3 + iVar4;
        *(unsigned short *)(iVar4 + 0xc) = *(unsigned short *)(iVar4 + 0xc) & 0xfdff;
      }
    } while (sVar1 != 0);
  }
  iVar4 = *piVar2;
  iVar4 = iVar4 + *(short *)(iVar4 + 0x110) * 0x14;
  *puRam10115f70 = *(short *)(iVar4 + 0x18a);
  *puRam10115f74 = *(short *)(iVar4 + 0x18c);
  return 1;
}

/* Address: 0x100559ac Size: 500 bytes */
int FUN_100559ac()

{
  short sVar1;
  unsigned short uVar2;
  long long lVar3;
  long long lVar4;
  short *psVar5;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  short sVar10;
  short sVar11;
  int iVar9;
  int iVar12;
  int iVar14;
  long long lVar13;
  int iVar15;
  int iVar16;
  
  piVar8 = piRam10117360;
  piVar7 = piRam1011735c;
  psVar6 = psRam10115f74;
  psVar5 = psRam10115f70;
  sVar1 = *(short *)(*piRam1011735c + 0x182);
  lVar3 = 10000;
  lVar4 = 10000;
  iVar15 = -1;
  iVar9 = -1;
  while (sVar1 != 0) {
    sVar1 = sVar1 + -1;
    iVar16 = (int)sVar1;
    iVar14 = iVar16 * 0x16;
    iVar12 = *piVar8 + iVar14;
    if ((((*(char *)(iVar12 + 5) == (char)*(short *)(*piVar7 + 0x110)) &&
         (sVar11 = *(short *)(iVar14 + *piVar8), -1 < sVar11)) &&
        (uVar2 = *(unsigned short *)(iVar12 + 0xc), (uVar2 & 1) != 0)) && ((uVar2 & 0x40) == 0)) {
      sVar10 = FUN_10003768((long long)*(short *)(iVar14 + *piVar8 + 2) - (long long)*psVar6);
      sVar11 = FUN_10003768((long long)sVar11 - (long long)*psVar5);
      lVar13 = (long long)(short)(sVar11 + sVar10);
      if (lVar13 == 0) {
        lVar13 = 9000;
      }
      if ((*(unsigned short *)(*piVar8 + sVar1 * 0x16 + 0xc) & 0x200) == 0) {
        if ((int)lVar13 < (int)lVar3) {
          lVar3 = lVar13;
          iVar15 = iVar16;
        }
      }
      else if ((int)lVar13 < (int)lVar4) {
        lVar4 = lVar13;
        iVar9 = iVar16;
      }
    }
  }
  if (iVar15 == -1) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      iVar15 = *piVar8;
      *psVar5 = *(short *)(iVar15 + iVar9 * 0x16);
      *psVar6 = *(short *)(iVar15 + iVar9 * 0x16 + 2);
      sVar1 = *(short *)(*piVar7 + 0x182);
      if (sVar1 != 0) {
        do {
          sVar1 = sVar1 + -1;
          iVar15 = *piVar8 + sVar1 * 0x16;
          if (*(char *)(iVar15 + 5) == (char)*(short *)(*piVar7 + 0x110)) {
            *(unsigned short *)(iVar15 + 0xc) = *(unsigned short *)(iVar15 + 0xc) & 0xfdff;
          }
        } while (sVar1 != 0);
      }
      iVar9 = *piVar8 + iVar9 * 0x16;
    }
  }
  else {
    iVar9 = *piVar8;
    *psVar5 = *(short *)(iVar9 + iVar15 * 0x16);
    iVar9 = iVar9 + iVar15 * 0x16;
    *psVar6 = *(short *)(iVar9 + 2);
  }
  return iVar9;
}

/* Address: 0x10055ba0 Size: 196 bytes */
long long FUN_10055ba0(short param_1)

{
  int bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  short sVar7;
  int iVar6;
  
  iVar2 = iRam101176e8;
  piVar5 = piRam101176e0;
  piVar4 = piRam101174b0;
  sVar7 = param_1;
  if (*(int *)(iRam101176e8 + 4) == 0) {
    sVar7 = 0;
  }
  *psRam10116354 = sVar7;
  *piVar4 = 0;
  if (param_1 != 0) {
    iVar6 = 7;
    do {
      iVar3 = *(int *)(iVar6 * 4 + iVar2);
      if (iVar3 != 0) {
        *(unsigned short *)(iVar3 + 0xc) = *(unsigned short *)(iVar3 + 0xc) | 1;
        iVar3 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar3 + 4) == '\x1c') {
          *piVar4 = iVar3;
        }
      }
      bVar1 = iVar6 != 0;
      iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    return 1;
  }
  iVar2 = *piVar5;
  *(unsigned short *)(iVar2 + 0xc) = *(unsigned short *)(iVar2 + 0xc) | 1;
  iVar2 = *piVar5;
  if (*(char *)(iVar2 + 4) == '\x1c') {
    *piVar4 = iVar2;
  }
  return 1;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10055c64(short *param_1) { return 0; }



































































































/* Address: 0x10055f30 Size: 620 bytes */

long long FUN_10055f30()

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned long long uVar7;
  int iVar8;
  int iVar10;
  unsigned long long uVar9;
  int iVar11;
  short sVar12;
  
  piVar6 = piRam101176e0;
  piVar5 = piRam1011735c;
  iVar4 = FUN_10115d6c;
  iVar2 = iRam10115d68;
  uVar7 = ZEXT48(0 /* TVect base */);
  FUN_1002c85c();
  iVar8 = **(int **)((int)uVar7 + -0x14f4);
  if (*(short *)(*piVar5 + 0x124) != 0) {
    iVar10 = FUN_10007e10(*(short *)(iVar8 + 0x8a),*(short *)(iVar8 + 0x88),1);
    if ((*(char *)(iVar10 + *(int *)((int)uVar7 + -0x1bdc)) == '\0') != true) goto LAB_10055fb0;
  }
  FUN_10008284(*(short *)(iVar8 + 0x8a),*(short *)(iVar8 + 0x88));
LAB_10055fb0:
  uVar9 = FUN_100559ac();
  if ((uVar9 & 0xffffffff) == 0) {
    *piVar6 = 0;
    FUN_10007f78();
    FUN_10093928();
  }
  else {
    FUN_10055c64(uVar9);
    FUN_10093984();
  }
  FUN_1005cc8c();
  FUN_1003dc28();
  iVar8 = *piVar5;
  if ((*(short *)(iVar8 + 0x12e) != 0) && (*piVar6 != 0)) {
    if ((*(unsigned int *)(iVar8 + 0x134) >> 0x1b & 1) == 0) {
      *(unsigned int *)(iVar8 + 0x134) = *(unsigned int *)(iVar8 + 0x134) | 0x8000000;
      FUN_1005f6b0(0x19,3);
      FUN_10040040();
    }
    iVar8 = (int)uVar7;
    if ((*(unsigned int *)(*piVar5 + 0x134) >> 0x1c & 1) == 0) {
      iVar10 = 0;
      do {
        iVar11 = FUN_1002be50(*(short *)*piVar6 + *(short *)(iVar10 * 2 + iVar4),
                              ((short *)*piVar6)[1] + *(short *)(iVar10 * 2 + iVar2));
        iVar8 = (int)uVar7;
        if (-1 < iVar11) {
          iVar1 = *piVar5;
          if ((int)*(char *)(iVar1 + iVar11 * 0x42 + 0x1619) != (int)*(short *)(iVar1 + 0x110)) {
            *(unsigned int *)(iVar1 + 0x134) = *(unsigned int *)(iVar1 + 0x134) | 0x10000000;
            FUN_1005f6b0(0x19,4);
            FUN_10040040();
            break;
          }
        }
        sVar12 = (short)iVar10 + 1;
        iVar10 = (int)sVar12;
      } while (sVar12 < 8);
    }
    iVar2 = *piVar5;
    if (-1 < (int)*(unsigned int *)(iVar2 + 0x134)) {
      psVar3 = (short *)*piVar6;
      if ((*(char *)((*(unsigned int *)(**(int **)(iVar8 + -0x548) + psVar3[1] * 0xe0 + *psVar3 * 2) >> 0x18
                     ) + iVar2 + 0x711) == '\v') && (*(char *)(psVar3 + 2) == '\x1c')) {
        *(unsigned int *)(iVar2 + 0x134) = *(unsigned int *)(iVar2 + 0x134) | 0x80000000;
        FUN_1005f6b0(0x19,5);
        FUN_10040040();
      }
    }
  }
  return 1;
}






















































































































































































































































































































































































































/* Address: 0x1005619c Size: 324 bytes */
int FUN_1005619c()

{
  short sVar1;
  unsigned short uVar2;
  long long lVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar13;
  long long lVar12;
  
  piVar8 = piRam10117360;
  piVar7 = piRam1011735c;
  psVar6 = psRam10115f74;
  psVar5 = psRam10115f70;
  sVar1 = *(short *)(*piRam1011735c + 0x182);
  lVar3 = 10000;
  iVar4 = -1;
  while (sVar1 != 0) {
    sVar1 = sVar1 + -1;
    iVar13 = sVar1 * 0x16;
    iVar11 = *piVar8 + iVar13;
    if ((((*(char *)(iVar11 + 5) == (char)*(short *)(*piVar7 + 0x110)) &&
         (sVar10 = *(short *)(iVar13 + *piVar8), -1 < sVar10)) &&
        (uVar2 = *(unsigned short *)(iVar11 + 0xc), (uVar2 & 1) != 0)) && ((uVar2 & 0x40) == 0)) {
      sVar9 = FUN_10003768((long long)*(short *)(iVar13 + *piVar8 + 2) - (long long)*psVar6);
      sVar10 = FUN_10003768((long long)sVar10 - (long long)*psVar5);
      lVar12 = (long long)(short)(sVar10 + sVar9);
      if (lVar12 == 0) {
        lVar12 = 9000;
      }
      if (((*(unsigned short *)(*piVar8 + sVar1 * 0x16 + 0xc) & 0x200) == 0) && ((int)lVar12 < (int)lVar3))
      {
        lVar3 = lVar12;
        iVar4 = (int)sVar1;
      }
    }
  }
  if (iVar4 == -1) {
    iVar11 = 0;
  }
  else {
    iVar11 = *piVar8;
    *psVar5 = *(short *)(iVar11 + iVar4 * 0x16);
    iVar11 = iVar11 + iVar4 * 0x16;
    *psVar6 = *(short *)(iVar11 + 2);
  }
  return iVar11;
}

/* Address: 0x100562e0 Size: 172 bytes */
long long FUN_100562e0()

{
  int bVar1;
  int iVar2;
  int iVar3;
  long long uVar4;
  int iVar5;
  
  iVar3 = iRam101176e8;
  if (*piRam101176e0 == 0) {
    uVar4 = 0;
  }
  else if (*psRam10116354 == 0) {
    *(unsigned short *)(*piRam101176e0 + 0xc) = *(unsigned short *)(*piRam101176e0 + 0xc) | 0x40;
    uVar4 = 1;
  }
  else {
    iVar5 = 7;
    do {
      iVar2 = *(int *)(iVar5 * 4 + iVar3);
      if (iVar2 != 0) {
        *(unsigned short *)(iVar2 + 0xc) = *(unsigned short *)(iVar2 + 0xc) | 0x40;
      }
      bVar1 = iVar5 != 0;
      iVar5 = (int)(short)((short)iVar5 + -1);
    } while (bVar1);
    *puRam10115e90 = 0;
    FUN_10007f78();
    uVar4 = 1;
  }
  return uVar4;
}

































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1005638c() { }



















/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1005641c() { return 0; }












































/* Address: 0x10056534 Size: 344 bytes */
long long FUN_10056534()

{
  short sVar1;
  unsigned short uVar2;
  long long lVar3;
  long long lVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int *piVar9;
  int *piVar10;
  short sVar12;
  short sVar13;
  long long uVar11;
  int iVar14;
  int iVar16;
  long long lVar15;
  int iVar17;
  
  piVar10 = piRam10117360;
  piVar9 = piRam1011735c;
  psVar8 = psRam10115f74;
  psVar7 = psRam10115f70;
  sVar1 = *(short *)(*piRam1011735c + 0x182);
  lVar3 = 10000;
  lVar4 = 10000;
  iVar5 = -1;
  iVar6 = -1;
  while (sVar1 != 0) {
    sVar1 = sVar1 + -1;
    iVar17 = (int)sVar1;
    iVar16 = iVar17 * 0x16;
    iVar14 = *piVar10 + iVar16;
    if ((((*(char *)(iVar14 + 5) == (char)*(short *)(*piVar9 + 0x110)) &&
         (sVar13 = *(short *)(iVar16 + *piVar10), -1 < sVar13)) &&
        (uVar2 = *(unsigned short *)(iVar14 + 0xc), (uVar2 & 1) != 0)) && ((uVar2 & 0x40) == 0)) {
      sVar12 = FUN_10003768((long long)*(short *)(iVar16 + *piVar10 + 2) - (long long)*psVar8);
      sVar13 = FUN_10003768((long long)sVar13 - (long long)*psVar7);
      lVar15 = (long long)(short)(sVar13 + sVar12);
      if (lVar15 == 0) {
        lVar15 = 9000;
      }
      if ((*(unsigned short *)(*piVar10 + sVar1 * 0x16 + 0xc) & 0x200) == 0) {
        if ((int)lVar15 < (int)lVar3) {
          lVar3 = lVar15;
          iVar5 = iVar17;
        }
      }
      else if ((int)lVar15 < (int)lVar4) {
        lVar4 = lVar15;
        iVar6 = iVar17;
      }
    }
  }
  if (iVar5 == -1) {
    if (iVar6 == -1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}

/* Address: 0x100577f0 Size: 520 bytes */
void FUN_100577f0()

{
  int *piVar1;
  int uVar2;
  int iVar3;
  char cVar12;
  long long uVar4;
  long long uVar5;
  long long uVar6;
  long long uVar7;
  long long uVar8;
  long long uVar9;
  long long uVar10;
  short uVar11;
  short sVar13;
  unsigned long long uVar14;
  int iVar15;
  int local_64;
  char local_40 [6];
  char local_3a;
  short local_38 [28];
  
  iVar3 = iRam10116460;
  uVar2 = uRam10115f80;
  uVar14 = (unsigned long long)uRam10117604;
  iVar15 = 0;
  do {
    cVar12 = FUN_1005f230(1,0x5a,0);
    local_40[iVar15] = cVar12 + ' ';
    sVar13 = (short)iVar15 + 1;
    iVar15 = (int)sVar13;
  } while (sVar13 < 6);
  local_3a = 0;
  uVar4 = FUN_1005f678(0x89,6);
  uVar5 = FUN_1005f678(0x89,5);
  uVar6 = FUN_1005f678(0x89,4);
  uVar7 = FUN_1005f678(0x89,3);
  uVar8 = FUN_1005f678(0x89,2);
  uVar9 = FUN_1005f678(0x89,1);
  uVar10 = FUN_1005f678(0x89,0);
  FUN_10040408(uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4);
  iVar15 = 0;
  do {
    if (*(short *)(iVar15 * 2 + iVar3) == 7) {
      uVar11 = FUN_1005f230(1,7,0xffffffffffffffff);
    }
    else {
      uVar11 = *(short *)(iVar15 * 2 + iVar3);
    }
    local_38[iVar15] = uVar11;
    sVar13 = (short)iVar15 + 1;
    iVar15 = (int)sVar13;
  } while (sVar13 < 4);
  FUN_100517f8(local_38[0],local_38[1],local_38[2],local_38[3]);
  FUN_10001e78(uVar14 + 0x3c,uVar2);
  FUN_10001e78(uVar14 + 0x14,uVar2);
  FUN_10001e78(uVar14 + 0x44,local_40);
  iVar3 = local_64;
  FUN_10045170();
  FUN_10045ac8();
  piVar1 = *(int **)(*(int *)(**(int **)(iVar3 + -0x554) + 0x88) + 0x148);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  FUN_10057448(0);
  *(short *)(**(int **)(local_64 + -0x544) + 0x162) = **(short **)(local_64 + -0x143c);
  return;
}

/* Address: 0x100579f8 Size: 1124 bytes */
void FUN_100579f8()

{
  int uVar1;
  int iVar5;
  int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  int *ppuVar9;
  int *puVar12;
  long long uVar10;
  long long uVar11;
  int *piVar13;
  short sVar16;
  unsigned int *puVar14;
  int *piVar15;
  long long lVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  unsigned int uVar22;
  unsigned long long uVar21;
  int local_9c;
  char auStack_78 [120];
  int uVar2;
  int uVar3;
  int uVar4;
  
  piVar8 = piRam1011735c;
  piVar15 = piRam10116488;
  puVar7 = puRam10116484;
  puVar6 = puRam10115f8c;
  iVar5 = iRam10115f88;
  iVar19 = iRam10115f84;
  ppuVar9 = 0 /* TVect base */;
  puVar12 = (int *)FUN_100f56e4(0x20);
  if (puVar12 != (int *)0x0) {
    FUN_100d8824(puVar12);
    *puVar12 = (*(int*)((char*)ppuVar9 - 0x644));
  }
  *piVar15 = (int)puVar12;
  FUN_100d88b4(puVar12,0,0x11c);
  FUN_100981f8(auStack_78,0x80);
  uVar10 = FUN_10098320(auStack_78,0x4c697374,1000);
  if ((int)uVar10 != 0) {
    uVar11 = FUN_100fab98(0);
    FUN_100fac48(uVar11,uVar10,0);
    FUN_1008bd08(*piVar15,uVar11);
    FUN_100f57c8(uVar11);
  }
  FUN_100ef510(uVar10);
  puVar12 = (int *)FUN_10098320(auStack_78,0x4f70746e,1000);
  if (puVar12 == (int *)0x0) {
    *puVar7 = 0;
  }
  else {
    *puVar7 = *(unsigned int *)*puVar12;
  }
  FUN_100ef510(puVar12);
  if (*puVar7 == 0xfffffffd) {
    piVar13 = (int *)FUN_10098320(auStack_78,0x54656d70,1000);
    if (piVar13 == (int *)0x0) {
      *puVar7 = 0;
    }
    else {
      puVar12 = (int *)*piVar13;
      *puVar6 = *puVar12;
      FUN_100012d8(puVar12 + 1,puVar6 + 1,(unsigned long long)*(unsigned char *)(puVar12 + 1) + 1);
      uVar1 = puVar12[0x42];
      uVar2 = puVar12[0x43];
      uVar3 = puVar12[0x44];
      uVar4 = puVar12[0x45];
      uVar22 = puVar12[0x46];
      puVar6[0x41] = puVar12[0x41];
      puVar6[0x42] = uVar1;
      puVar6[0x43] = uVar2;
      puVar6[0x44] = uVar3;
      puVar6[0x45] = uVar4;
      puVar6[0x46] = uVar22 & 0xffff0000;
    }
  }
  sVar16 = FUN_10117884(*piVar15 + (int)*(short *)(*(int *)*piVar15 + 0xa8));
  lVar17 = ((unsigned long long)*puVar7 - 1) + (unsigned long long)((unsigned long long)*puVar7 != 0);
  uVar21 = (unsigned long long)(lVar17 << 0x20) >> 0x3f;
  uVar22 = (unsigned int)lVar17 >> 0x1f;
  if ((sVar16 != 0) && (lVar17 = 1, 0 < sVar16)) {
    do {
      puVar14 = (unsigned int *)FUN_10117884(*piVar15 + (int)*(short *)(*(int *)*piVar15 + 0xe0),lVar17);
      if (*puVar14 == *puVar7) {
        *puVar7 = (unsigned int)lVar17;
        uVar21 = 1;
      }
      uVar22 = (unsigned int)uVar21;
      *puVar14 = (unsigned int)lVar17;
      sVar18 = (short)lVar17 + 1;
      lVar17 = (long long)sVar18;
    } while (sVar18 <= sVar16);
  }
  if (uVar22 == 0) {
    *puVar7 = 0;
  }
  if (*puVar7 == 0xfffffffd) {
    iVar19 = 0;
    do {
      *(unsigned short *)(iVar19 * 2 + iVar5) = (unsigned short)*(unsigned char *)((int)puVar6 + iVar19 + 4);
      sVar16 = (short)iVar19 + 1;
      iVar19 = (int)sVar16;
    } while (sVar16 < 0xb);
  }
  else if ((int)*puVar7 < 1) {
    iVar20 = 0;
    do {
      *(short *)(iVar20 * 2 + iVar5) = *(short *)(iVar19 + *puVar7 * -0x16 + iVar20 * 2);
      sVar16 = (short)iVar20 + 1;
      iVar20 = (int)sVar16;
    } while (sVar16 < 0xb);
  }
  else {
    uVar10 = FUN_10117884(*piVar15 + (int)*(short *)(*(int *)*piVar15 + 0xe8),1);
    iVar19 = FUN_10117884(*piVar15 + (int)*(short *)(*(int *)*piVar15 + 0xe0),*puVar7);
    iVar20 = 0;
    do {
      *(short *)(iVar20 * 2 + iVar5) = *(short *)(iVar19 + iVar20 * 2 + 0x104);
      sVar16 = (short)iVar20 + 1;
      iVar20 = (int)sVar16;
    } while (sVar16 < 0xb);
    FUN_10117884(*piVar15 + (int)*(short *)(*(int *)*piVar15 + 0xe8),uVar10);
  }
  piVar15 = (int *)FUN_10098320(auStack_78,0x4c657665,1000);
  if (piVar15 != (int *)0x0) {
    iVar19 = *piVar15;
    uVar21 = 0;
    do {
      iVar5 = (int)((uVar21 & 0x7fffffff) << 1);
      if (*(short *)(*piVar8 + iVar5 + 0x138) != 0) {
        if (*(short *)(iVar19 + iVar5) == 3) {
          *(short *)(*piVar8 + iVar5 + 0xd0) = 1;
          *(short *)(iVar5 + *piVar8 + 0xc0) = 3;
        }
        else {
          iVar5 = (int)((uVar21 & 0x7fffffff) << 1);
          if (*(short *)(iVar19 + iVar5) == 5) {
            *(short *)(iVar5 + *piVar8 + 0xd0) = 0;
            *(short *)(iVar5 + *piVar8 + 0xc0) = 2;
          }
          else {
            iVar5 = (int)((uVar21 & 0x7fffffff) << 1);
            *(short *)(*piVar8 + iVar5 + 0xd0) = 1;
            *(short *)(iVar5 + *piVar8 + 0xc0) = *(short *)(iVar5 + iVar19);
          }
        }
      }
      sVar16 = (short)uVar21 + 1;
      uVar21 = (unsigned long long)sVar16;
    } while (sVar16 < 8);
    *(short *)(*piVar8 + 0x116) = *(short *)(iVar19 + 0x10);
  }
  **(unsigned int **)(local_9c + -0x190c) = *puVar7;
  FUN_100982e8(auStack_78,2);
  return;
}

/* Address: 0x10057e5c Size: 1644 bytes */
void FUN_10057e5c(short param_1,short param_2,int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  short sVar5;
  int *piVar4;
  long long lVar6;
  unsigned int uVar7;
  int bVar8;
  short sVar11;
  int iVar10;
  short sVar12;
  long long uVar9;
  char cVar13;
  unsigned long long uVar14;
  unsigned int uVar15;
  long long lVar16;
  char auStack_130 [304];
  
  puVar2 = puRam1011735c;
  if (param_1 < 0) {
    sVar11 = 8;
    sVar5 = 0;
  }
  else {
    sVar11 = param_1 + 1;
    sVar5 = param_1;
  }
  piVar3 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x308),0x73696465);
  if (piVar3 == (int *)0x0) {
    for (; sVar5 < sVar11; sVar5 = sVar5 + 1) {
      uVar14 = (unsigned long long)sVar5;
      piVar3 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x308),
                                   uVar14 + 0x636c7531);
      if (((param_1 < 0) || (param_2 != 0)) && (piVar3 != (int *)0x0)) {
        FUN_100b19f4(auStack_130,
                     (unsigned long long)*puVar2 + ((uVar14 & 0x3fffffff) * 4 + uVar14 & 0x3fffffff) * 4);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7b0),auStack_130,0);
      }
      if (*(short *)(*puVar2 + (int)((uVar14 & 0xffffffff) << 1) + 0xd0) == 0) {
        sVar12 = 4;
      }
      else {
        sVar12 = *(short *)(*puVar2 + (int)((uVar14 & 0xffffffff) << 1) + 0xc0);
      }
      lVar16 = (long long)sVar12;
      iVar10 = *puVar2 + sVar5 * 2;
      if ((*(short *)(iVar10 + 0xd0) == 1) && (*(short *)(iVar10 + 0xe0) != 0)) {
        lVar16 = (long long)(short)(*(short *)(iVar10 + 0xc0) + 7);
      }
      if ((int)lVar16 == 4) {
        uVar15 = (unsigned int)sVar5;
        if ((uVar15 == 0) ||
           (uVar7 = (int)sVar5 - 1,
           ((int)uVar15 >> 1) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 1) != 0) !=
           ((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          sVar12 = 5;
        }
        else {
          sVar12 = 4;
        }
        lVar16 = (long long)sVar12;
      }
      if (*(short *)(*puVar2 + (int)((uVar14 & 0xffffffff) << 1) + 0x138) == 0) {
        lVar16 = 6;
      }
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),
                                     uVar14 + 0x69636f31);
      }
      iVar10 = (int)lVar16;
      if (piVar4 != (int *)0x0) {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7a8),(short)lVar16 + 0xbcc,0);
        lVar6 = -lVar16 + 6;
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xd8),
                     lVar6 + (-(unsigned long long)(lVar6 == 0) - (-lVar16 + 5)) & 0xff);
        if ((iVar10 == 6) || (iVar10 == 3)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),uVar9,0);
        if (param_2 == 0) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x488));
        }
      }
      if (6 < iVar10) {
        lVar16 = (long long)(short)((short)lVar16 + -7);
      }
      iVar10 = (int)lVar16;
      if (iVar10 == 5) {
        iVar10 = 4;
      }
      if (iVar10 == 6) {
        iVar10 = 3;
      }
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),
                                     uVar14 + 0x726f6c31);
      }
      if (piVar4 != (int *)0x0) {
        if ((param_2 == 0) && (*(short *)(piVar4 + 0x20) != iVar10)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        *(short *)(piVar4 + 0x20) = (short)iVar10;
        if (bVar8) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x488));
        }
      }
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),
                                     uVar14 + 0x63686131);
      }
      if (piVar4 == (int *)0x0) {
LAB_1005845c:
        if (param_2 != 0) goto LAB_10058464;
      }
      else {
        uVar14 = (unsigned long long)*(short *)(*puVar2 + (int)((uVar14 & 0xffffffff) << 1) + 0xe0);
        uVar15 = piVar4[0x2c];
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),uVar14,1);
        if (uVar15 == uVar14) {
          if ((iVar10 == 4) || (iVar10 == 3)) {
            cVar13 = '\x01';
          }
          else {
            cVar13 = '\0';
          }
          if (*(char *)((int)piVar4 + 0x85) != cVar13) goto LAB_100583c8;
          bVar8 = false;
        }
        else {
LAB_100583c8:
          bVar8 = true;
        }
        if ((iVar10 == 4) || (iVar10 == 3)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),uVar9,1);
        if (!bVar8) goto LAB_1005845c;
        if (param_2 == 0) {
          iVar10 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x3a8));
          if (iVar10 != 0) {
            FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x4d0));
          }
          goto LAB_1005845c;
        }
LAB_10058464:
        if ((piVar3 != (int *)0x0) &&
           (iVar10 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x3a8)), iVar10 != 0)) {
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
        }
      }
    }
  }
  else {
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),0x73696430);
    iVar10 = 0;
    do {
      iVar1 = *puVar2 + iVar10 * 2;
      if ((*(short *)(iVar1 + 0x138) != 0) && (*(short *)(iVar1 + 0xd0) == 0)) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),iVar10 + 0x73696430);
        break;
      }
      sVar5 = (short)iVar10 + 1;
      iVar10 = (int)sVar5;
    } while (sVar5 < 8);
    piVar3 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x308),0x636f6d70);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),0x636f6d30);
      iVar10 = 0;
      do {
        iVar1 = *puVar2 + iVar10 * 2;
        if ((*(short *)(iVar1 + 0xd0) == 1) && (sVar5 = *(short *)(iVar1 + 0xc0), sVar5 != 3)) {
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),(long long)sVar5 + 0x636f6d30);
          return;
        }
        sVar5 = (short)iVar10 + 1;
        iVar10 = (int)sVar5;
      } while (sVar5 < 8);
    }
  }
  return;
}

/* Address: 0x100584c8 Size: 472 bytes */
void FUN_100584c8(long long param_1)

{
  int uVar1;
  long long uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  char auStack_110 [272];
  
  uVar1 = uRam10117608;
  sVar3 = psRam10115f88[5] +
          ((psRam10115f88[3] * 3 + psRam10115f88[2] * 3 + psRam10115f88[1] * 3 + *psRam10115f88 * 3)
          - psRam10115f88[4]);
  if (psRam10115f88[6] != 0xf) {
    if (psRam10115f88[6] == 1) {
      sVar3 = sVar3 + 3;
    }
    else if (psRam10115f88[6] == 0) {
      sVar3 = sVar3 + 6;
    }
  }
  if (0x13 < sVar3) {
    sVar3 = 0x14;
  }
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar7 = *piRam1011735c + iVar6 * 2;
    if (((*(short *)(iVar7 + 0x138) != 0) && (*(short *)(iVar7 + 0xd0) == 1)) &&
       (*(short *)(iVar7 + 0xc0) != 3)) {
      iVar4 = (int)(short)(*(short *)(iVar7 + 0xc0) + (short)iVar4 + 1);
      iVar5 = (int)(short)((short)iVar5 + 1);
    }
    sVar8 = (short)iVar6 + 1;
    iVar6 = (int)sVar8;
  } while (sVar8 < 8);
  if (iVar5 == 0) {
    sVar8 = 0x50;
  }
  else {
    sVar8 = (short)((iVar4 * 0x50) / (iVar5 * 3));
  }
  if (0x4d < sVar8) {
    sVar8 = 0x50;
  }
  uVar2 = FUN_1005f678(7,0);
  FUN_10001dd0(uVar1,uVar2,sVar8 + sVar3);
  FUN_100b19f4(auStack_110,uVar1);
  FUN_10090e0c(param_1,0x64696666,auStack_110,1);
  return;
}

/* Address: 0x100586a0 Size: 476 bytes */
void FUN_100586a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  unsigned long long uVar6;
  int iVar7;
  
  piVar2 = piRam1011735c;
  sVar4 = 0;
  iVar7 = 0;
  do {
    iVar5 = *piVar2 + iVar7 * 2;
    if (((*(short *)(iVar5 + 0x138) != 0) && (*(short *)(iVar5 + 0xd0) == 1)) &&
       (*(short *)(iVar5 + 0xc0) != 3)) {
      sVar4 = sVar4 + 1;
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   iVar7 + 0x63686131);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 2000) + (int)piVar1,
                     *(short *)(iVar7 * 2 + *piVar2 + 0xe0) != 0,1);
      }
    }
    sVar3 = (short)iVar7 + 1;
    iVar7 = (int)sVar3;
  } while (sVar3 < 8);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73656c65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),sVar4 == 0,1);
  }
  iVar7 = 0;
  uVar6 = 0;
  do {
    iVar5 = *piVar2 + iVar7 * 2;
    if ((*(short *)(iVar5 + 0x138) != 0) && (*(short *)(iVar5 + 0xc0) != 3)) {
      uVar6 = (unsigned long long)(short)((short)uVar6 + 1);
    }
    sVar4 = (short)iVar7 + 1;
    iVar7 = (int)sVar4;
  } while (sVar4 < 8);
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x676f2020);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),
                 (unsigned long long)(uVar6 < 2) - ((long long)(uVar6 << 0x20) >> 0x3f),1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1005887c(short param_1,short param_2,short param_3,short param_4,int *param_5) { }









































































































































/* Address: 0x10059b7c Size: 432 bytes */
void FUN_10059b7c(short param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long long uVar4;
  unsigned long long uVar5;
  
  piVar3 = piRam1011735c;
  uVar5 = (unsigned long long)param_1;
  if (*(short *)(*piRam1011735c + (int)((uVar5 & 0xffffffff) << 1) + 0x138) == 0) {
    FUN_100586a0(param_2);
  }
  else {
    if (*(short *)(*piRam1011735c + (int)((uVar5 & 0xffffffff) << 1) + 0xd0) != 0) {
      iVar1 = *piRam1011735c;
    }
    iVar2 = (int)((uVar5 & 0x7fffffff) << 1);
    iVar1 = *piRam1011735c + iVar2;
    if (*(short *)(iVar1 + 0xd0) == 0) {
      *(short *)(iVar1 + 0xd0) = 1;
      *(short *)(iVar2 + *piVar3 + 0xc0) = 0;
    }
    else {
      iVar1 = *piRam1011735c + (int)((uVar5 & 0xffffffff) << 1);
      if (*(short *)(iVar1 + 0xc0) == 2) {
        *(short *)(iVar1 + 0xc0) = 3;
      }
      else {
        iVar2 = (int)((uVar5 & 0x7fffffff) << 1);
        iVar1 = *piRam1011735c + iVar2;
        if (*(short *)(iVar1 + 0xc0) == 3) {
          *(short *)(iVar1 + 0xc0) = 0;
          *(short *)(iVar2 + *piVar3 + 0xd0) = 0;
        }
        else {
          iVar1 = *piRam1011735c + (int)((uVar5 & 0xffffffff) << 1);
          *(short *)(iVar1 + 0xc0) = *(short *)(iVar1 + 0xc0) + 1;
        }
      }
    }
    *(short *)(*piVar3 + (int)((uVar5 & 0xffffffff) << 1) + 0xe0) = 0;
    if ((param_2 != (int *)0x0) &&
       (uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),uVar5 + 0x726f6c31),
       (int)uVar4 != 0)) {
      FUN_100878fc(uVar4);
    }
    FUN_10057e5c(uVar5,0,param_2);
    FUN_100584c8(param_2);
    FUN_100586a0(param_2);
  }
  return;
}

/* Address: 0x10059d2c Size: 4 bytes */
void FUN_10059d2c()

{
  return;
}

/* Address: 0x10059d30 Size: 1408 bytes */
void FUN_10059d30()

{
  return;
}

/* Address: 0x1005a2b0 Size: 32 bytes */
void FUN_1005a2b0()

{
  FUN_10059d30();
  return;
}


























/* Address: 0x1005a2d0 Size: 988 bytes */
void FUN_1005a2d0()

{
  int uVar1;
  unsigned int uVar5;
  int iVar6;
  int *puVar7;
  int uVar8;
  int *piVar9;
  int *puVar10;
  unsigned int dVar11;
  int iVar13;
  char uVar16;
  long long uVar12;
  int *puVar14;
  int *piVar15;
  short uVar17;
  int iVar19;
  unsigned long long uVar18;
  short sVar20;
  int local_1bc;
  char auStack_198 [80];
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int uVar2;
  int uVar3;
  int uVar4;
  
  dVar11 = 0;
  puVar10 = puRam10117370;
  piVar9 = piRam1011735c;
  uVar8 = uRam10116a54;
  piVar15 = piRam10116484;
  puVar7 = puRam10115f8c;
  if ((*pcRam1011648c == '\0') && (*piRam10115f94 == *piRam10116484)) {
    return;
  }
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puRam10117370;
  *puRam10117370 = auStack_148;
  iVar13 = FUN_10000090(auStack_148);
  if (iVar13 == 0) {
    FUN_100981f8(auStack_198,0x80);
    uVar16 = FUN_100f1574(1);
    iVar13 = FUN_10001fc8(4);
    *(char *)dVar11 = uVar16;
    if (iVar13 != 0) {
      uVar12 = FUN_100fab98(0);
      FUN_100fac48(uVar12,iVar13,0x11c);
      FUN_1008bdb8(**(int **)(local_1bc + -0x1418),uVar12);
      FUN_100f57c8(uVar12);
      FUN_100985fc(auStack_198,iVar13,0x4c697374,1000,uVar8);
    }
    FUN_100ef510(iVar13);
    uVar16 = FUN_100f1574(1);
    puVar14 = (int *)FUN_10001fc8(4);
    *(char *)dVar11 = uVar16;
    if (puVar14 != (int *)0x0) {
      *(int *)*puVar14 = *piVar15;
      FUN_100985fc(auStack_198,puVar14,0x4f70746e,1000,uVar8);
    }
    FUN_100ef510(puVar14);
    if (*piVar15 == -3) {
      uVar16 = FUN_100f1574(1);
      piVar15 = (int *)FUN_10001fc8(0x11c);
      *(char *)dVar11 = uVar16;
      if (piVar15 != (int *)0x0) {
        puVar14 = (int *)*piVar15;
        *puVar14 = *puVar7;
        FUN_100012d8(puVar7 + 1,puVar14 + 1,(unsigned long long)*(unsigned char *)(puVar7 + 1) + 1);
        uVar1 = puVar7[0x42];
        uVar2 = puVar7[0x43];
        uVar3 = puVar7[0x44];
        uVar4 = puVar7[0x45];
        uVar5 = puVar7[0x46];
        puVar14[0x41] = puVar7[0x41];
        puVar14[0x42] = uVar1;
        puVar14[0x43] = uVar2;
        puVar14[0x44] = uVar3;
        puVar14[0x45] = uVar4;
        puVar14[0x46] = uVar5 & 0xffff0000;
        FUN_100985fc(auStack_198,piVar15,0x54656d70,1000,uVar8);
      }
      FUN_100ef510(piVar15);
    }
    uVar16 = FUN_100f1574(1);
    piVar15 = (int *)FUN_10001fc8(0x12);
    *(char *)dVar11 = uVar16;
    if (piVar15 != (int *)0x0) {
      iVar13 = *piVar15;
      uVar17 = 0;
      iVar19 = 0;
      do {
        iVar6 = *piVar9 + iVar19 * 2;
        if ((*(short *)(iVar6 + 0x138) != 0) && (*(short *)(iVar6 + 0xc0) == 1)) {
          uVar17 = 1;
          break;
        }
        sVar20 = (short)iVar19 + 1;
        iVar19 = (int)sVar20;
      } while (sVar20 < 8);
      uVar18 = 0;
      do {
        iVar19 = (int)((uVar18 & 0xffffffff) << 1);
        if (*(short *)(*piVar9 + iVar19 + 0x138) == 0) {
          *(short *)(iVar19 + iVar13) = uVar17;
        }
        else {
          iVar19 = (int)((uVar18 & 0xffffffff) << 1);
          if (*(short *)(*piVar9 + iVar19 + 0xc0) == 3) {
            *(short *)(iVar19 + iVar13) = 3;
          }
          else {
            iVar19 = (int)((uVar18 & 0xffffffff) << 1);
            if (*(short *)(*piVar9 + iVar19 + 0xd0) == 0) {
              *(short *)(iVar19 + iVar13) = 5;
            }
            else {
              iVar19 = (int)((uVar18 & 0xffffffff) << 1);
              *(short *)(iVar19 + iVar13) = *(short *)(*piVar9 + iVar19 + 0xc0);
            }
          }
        }
        sVar20 = (short)uVar18 + 1;
        uVar18 = (unsigned long long)sVar20;
      } while (sVar20 < 8);
      *(short *)(iVar13 + 0x10) = *(short *)(*piVar9 + 0x116);
      FUN_100985fc(auStack_198,piVar15,0x4c657665,1000,uVar8);
    }
    FUN_100ef510(piVar15);
    *puVar10 = local_40;
    FUN_100982e8(auStack_198,2);
  }
  else {
    FUN_100ef510(0);
  }
  return;
}

/* Address: 0x1005a6ac Size: 1052 bytes */
void FUN_1005a6ac(int *param_1)

{
  int iVar1;
  short *puVar2;
  int *piVar3;
  int *piVar5;
  short sVar7;
  char uVar8;
  int *puVar6;
  long long uVar4;
  short sVar9;
  int iVar11;
  unsigned long long uVar10;
  int local_94;
  char auStack_70 [112];
  
  piVar3 = piRam1011735c;
  puVar2 = puRam10115f88;
  piVar5 = *(int **)(*piRam1011734c + 0x88);
  *(char *)(piVar5 + 0x51) = 1;
  FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x38),0);
  if (*(short *)(*piVar3 + 0x12e) == 0) {
    piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73696465);
    if (piVar5 != (int *)0x0) {
      sVar7 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7c0));
      iVar11 = 0;
      do {
        *(unsigned short *)(*piVar3 + iVar11 * 2 + 0xd0) = (unsigned short)(iVar11 != (short)(sVar7 + -0x6430));
        iVar11 = (int)(short)((short)iVar11 + 1);
      } while (iVar11 < 8);
    }
    piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x636f6d70);
    if (piVar5 != (int *)0x0) {
      sVar7 = FUN_10117884((int)*(short *)(*piVar5 + 0x7c0) + (int)piVar5);
      iVar11 = 0;
      do {
        *(short *)(*piVar3 + iVar11 * 2 + 0xc0) = sVar7 + -0x6d30;
        *(short *)(iVar11 * 2 + *piVar3 + 0xe0) = 0;
        sVar9 = (short)iVar11 + 1;
        iVar11 = (int)sVar9;
      } while (sVar9 < 8);
    }
    FUN_1005a2d0();
    FUN_100981f8(auStack_70,0x80);
    uVar8 = FUN_100f1574(1);
    puVar6 = (int *)FUN_10000948(1);
    **(char **)(local_94 + -0x3c) = uVar8;
    if (puVar6 != (int *)0x0) {
      *(int *)*puVar6 = piVar5 == (int *)0x0;
      FUN_100985fc(auStack_70,puVar6,0x53657475,1000,*(int *)(local_94 + -0xe4c));
      FUN_10000960(puVar6);
    }
    FUN_100982e8(auStack_70,2);
  }
  uVar10 = 0;
  do {
    iVar1 = (int)((uVar10 & 0x7fffffff) << 1);
    iVar11 = *piVar3 + iVar1;
    if (*(short *)(iVar11 + 0x138) == 0) {
      *(short *)(iVar11 + 0xd0) = 1;
      *(short *)(iVar1 + *piVar3 + 0xc0) = 0;
    }
    iVar11 = (int)((uVar10 & 0x7fffffff) << 1);
    if (*(short *)(*piVar3 + iVar11 + 0xc0) == 3) {
      *(short *)(*piVar3 + iVar11 + 0x138) = 0;
      *(short *)(*piVar3 + iVar11 + 0xd0) = 1;
      *(short *)(*piVar3 + iVar11 + 0xc0) = 0;
      iVar11 = *piVar3 + (int)(((uVar10 & 0x3fffffff) * 4 + uVar10 & 0xffffffff) << 2);
      iVar11 = FUN_1002be50(*(short *)(iVar11 + 0x18a),*(short *)(iVar11 + 0x18c));
      if (-1 < iVar11) {
        *(char *)(*piVar3 + iVar11 * 0x42 + 0x1619) = 0xf;
      }
    }
    iVar11 = *piVar3 + (int)((uVar10 & 0xffffffff) << 1);
    if (*(short *)(iVar11 + 0xd0) == 0) {
      *(short *)(iVar11 + 0xc0) = 2;
    }
    sVar7 = (short)uVar10 + 1;
    uVar10 = (unsigned long long)sVar7;
  } while (sVar7 < 8);
  FUN_10092c5c(1);
  *(short *)(*piVar3 + 0x11a) = *puVar2;
  *(short *)(*piVar3 + 0x11c) = puVar2[1];
  *(short *)(*piVar3 + 0x11e) = puVar2[2];
  *(short *)(*piVar3 + 0x124) = puVar2[3];
  *(short *)(*piVar3 + 0x12a) = puVar2[4];
  *(short *)(*piVar3 + 0x132) = puVar2[5];
  *(short *)(*piVar3 + 0x114) = puVar2[6];
  *(short *)(*piVar3 + 0x126) = puVar2[7];
  *(short *)(*piVar3 + 0x128) = puVar2[8];
  *(short *)(*piVar3 + 300) = puVar2[9];
  *(short *)(*piVar3 + 0x122) = puVar2[10];
  *(short *)(*piVar3 + 0x130) = 0;
  FUN_1000c67c();
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x328));
    uVar4 = FUN_1007a894(0);
    FUN_1007a95c(uVar4,param_1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),uVar4);
  }
  FUN_1003e13c(0,1);
  return;
}

/* Address: 0x1005aac8 Size: 300 bytes */
void FUN_1005aac8(short param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned long long uVar5;
  short sVar6;
  
  piVar3 = piRam1011735c;
  if (param_1 == 0) {
    *(short *)(*piRam1011735c + 0x116) = 0;
  }
  else {
    uVar5 = 0;
    do {
      iVar2 = (int)((uVar5 & 0x7fffffff) << 1);
      iVar1 = *piVar3 + iVar2;
      if (*(short *)(iVar1 + 0x138) != 0) {
        *(short *)(iVar1 + 0xd0) = 1;
        iVar2 = iVar2 + *piVar3;
        if (*(short *)(iVar2 + 0xc0) != 2) {
          *(short *)(iVar2 + 0xe0) = 0;
        }
        *(short *)(*piVar3 + (int)((uVar5 & 0xffffffff) << 1) + 0xc0) = 2;
      }
      sVar6 = (short)uVar5 + 1;
      uVar5 = (unsigned long long)sVar6;
    } while (sVar6 < 8);
    piVar4 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x636f6d70);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),0x636f6d32);
    }
    *(short *)(*piVar3 + 0x116) = 1;
  }
  FUN_10057e5c(0xffffffffffffffff,0,param_2);
  FUN_100584c8(param_2);
  FUN_100586a0(param_2);
  return;
}

/* Address: 0x1005abf4 Size: 320 bytes */
void FUN_1005abf4(short param_1,long long param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  piVar3 = piRam10116488;
  piVar2 = piRam10116484;
  iVar5 = iRam10115f8c;
  iVar1 = iRam10115f88;
  iVar4 = iRam10115f84;
  if (param_1 < 3) {
    iVar5 = 0;
    do {
      *(short *)(iVar5 * 2 + iVar1) = *(short *)(param_1 * 0x16 + iVar5 * 2 + iVar4);
      sVar6 = (short)iVar5 + 1;
      iVar5 = (int)sVar6;
    } while (sVar6 < 0xb);
    *piVar2 = -(int)param_1;
  }
  else {
    sVar6 = FUN_10117884(*piRam10116488 + (int)*(short *)(*(int *)*piRam10116488 + 0xa8));
    if ((int)sVar6 < (int)((long long)param_1 + -3)) {
      iVar4 = 0;
      do {
        *(short *)(iVar4 * 2 + iVar1) = *(short *)(iVar4 * 2 + iVar5 + 0x104);
        sVar6 = (short)iVar4 + 1;
        iVar4 = (int)sVar6;
      } while (sVar6 < 0xb);
      *piVar2 = -3;
    }
    else {
      iVar4 = FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0xe0),(long long)param_1 + -3)
      ;
      iVar5 = 0;
      do {
        *(short *)(iVar5 * 2 + iVar1) = *(short *)(iVar4 + iVar5 * 2 + 0x104);
        sVar6 = (short)iVar5 + 1;
        iVar5 = (int)sVar6;
      } while (sVar6 < 0xb);
      *piVar2 = param_1 + -3;
    }
  }
  FUN_100584c8(param_2);
  FUN_100586a0(param_2);
  return;
}

/* Address: 0x1005ad34 Size: 144 bytes */
void FUN_1005ad34(short param_1,short param_2,long long param_3)

{
  int iVar1;
  int iVar2;
  int local_18 [6];
  
  local_18[0] = *(int *)(iRam10115f78 + 0x5c);
  if (param_2 == 0) {
    iVar2 = iRam10115f78 + 100;
  }
  else {
    iVar2 = iRam10115f78 + 0x60;
  }
  iVar1 = *piRam1011735c + param_1 * 2;
  FUN_10001dd0(param_3,iRam10115f78 + 0x68,
               *(char *)((int)local_18 + (int)*(short *)(iVar1 + 0xc0)),
               *(short *)(iVar1 + 0xe0),iVar2);
  return;
}

/* Address: 0x1005adc4 Size: 352 bytes */
char * FUN_1005adc4(short param_1)

{
  char *puVar1;
  int *piVar3;
  long long uVar2;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  char auStack_58 [40];
  short local_30 [24];
  
  puVar1 = puRam1011772c;
  *puRam1011772c = 0;
  FUN_1005ad34(*puRam101164c8,0,auStack_58);
  piVar3 = (int *)FUN_10051f98(0x44455343,auStack_58,1);
  if (piVar3 != (int *)0x0) {
    uVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0xb8) + (int)piVar3);
    iVar4 = FUN_100f1640(uVar2);
    FUN_10052490(piVar3,iVar4,uVar2);
    FUN_100523a8(piVar3,1);
    local_30[0] = 0;
    iVar6 = 1;
    iVar7 = 0;
    if (0 < (int)uVar2) {
      do {
        if (*(char *)(iVar4 + iVar7) == '\r') {
          *(char *)(iVar7 + iVar4) = 0;
          sVar5 = (short)iVar7 + 2;
          iVar7 = (int)sVar5;
          local_30[iVar6] = sVar5;
          iVar6 = (int)(short)((short)iVar6 + 1);
        }
        sVar5 = (short)iVar7 + 1;
        iVar7 = (int)sVar5;
      } while (((int)sVar5 < (int)uVar2) && (iVar6 < 9));
    }
    if ((int)param_1 < iVar6 + -1) {
      FUN_10001e78(puVar1,iVar4 + local_30[param_1]);
    }
    FUN_100ef580(iVar4);
  }
  return puVar1;
}

/* Address: 0x1005af24 Size: 672 bytes */
void FUN_1005af24(int *param_1)

{
  short *psVar1;
  int *piVar3;
  int iVar4;
  int *puVar5;
  long long uVar2;
  short sVar6;
  long long lVar7;
  unsigned long long uVar8;
  long long lVar9;
  int local_254;
  char auStack_230 [256];
  char auStack_130 [256];
  int local_30;
  short uStack_2c;
  short local_2a;
  short uStack_28;
  short uStack_26;
  short uStack_24;
  
  piVar3 = piRam1011735c;
  psVar1 = psRam101164c8;
  uVar8 = (unsigned long long)uRam101176cc;
  if (*(short *)(*piRam1011735c + *psRam101164c8 * 2 + 0xd0) == 1) {
    iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657331);
    FUN_100db26c();
    local_30 = *(int *)(iVar4 + 0x98);
    uStack_2c = (short)((unsigned int)*(int *)(iVar4 + 0x9c) >> 0x10);
    local_2a = (short)*(int *)(iVar4 + 0x9c);
    uStack_28 = (short)((unsigned int)*(int *)(iVar4 + 0xa0) >> 0x10);
    uStack_26 = (short)*(int *)(iVar4 + 0xa0);
    if (*(short *)(*piVar3 + *psVar1 * 2 + 0xc0) == 0) {
      puVar5 = (int *)FUN_100b2264(uVar8 + 0x1e);
      uStack_26 = (short)((unsigned int)puVar5[1] >> 0x10);
      local_2a = (short)((unsigned int)*puVar5 >> 0x10);
      uStack_28 = (short)*puVar5;
      uStack_24 = 0;
    }
    else if (*(short *)(*piVar3 + *psVar1 * 2 + 0xc0) == 1) {
      puVar5 = (int *)FUN_100b2264(uVar8 + 0x2a);
      uStack_26 = (short)((unsigned int)puVar5[1] >> 0x10);
      local_2a = (short)((unsigned int)*puVar5 >> 0x10);
      uStack_28 = (short)*puVar5;
      uStack_24 = 0;
    }
    else if (*(short *)(*piVar3 + *psVar1 * 2 + 0xc0) == 2) {
      puVar5 = (int *)FUN_100b2264(uVar8 + 0x36);
      uStack_26 = (short)((unsigned int)puVar5[1] >> 0x10);
      local_2a = (short)((unsigned int)*puVar5 >> 0x10);
      uStack_28 = (short)*puVar5;
      uStack_24 = 0;
    }
    lVar9 = 0;
    do {
      piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   lVar9 + 0x64657331);
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x790),&local_30,0);
        uVar2 = FUN_1005adc4((short)lVar9 + 1);
        FUN_100b19f4(auStack_130,uVar2);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_130,0);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
      }
      sVar6 = (short)lVar9 + 1;
      lVar9 = (long long)sVar6;
    } while (sVar6 < 6);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  }
  else {
    lVar9 = 0;
    do {
      piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   lVar9 + 0x64657331);
      if (piVar3 != (int *)0x0) {
        if ((int)lVar9 == 1) {
          lVar7 = (unsigned long long)*(unsigned int *)(local_254 + -0x1928) + 0x78;
        }
        else {
          lVar7 = (unsigned long long)*(unsigned int *)(local_254 + -0x1928) + 0x7c;
        }
        FUN_100b19f4(auStack_230,lVar7);
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_230,1);
      }
      sVar6 = (short)lVar9 + 1;
      lVar9 = (long long)sVar6;
    } while (sVar6 < 6);
  }
  return;
}

/* Address: 0x1005b1c4 Size: 804 bytes */
void FUN_1005b1c4(int *param_1)

{
  unsigned int uVar1;
  short *psVar2;
  unsigned int *puVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  int *puVar9;
  long long lVar10;
  char auStack_118 [280];
  
  iVar5 = iRam101176cc;
  psVar4 = psRam1011760c;
  puVar3 = puRam1011735c;
  psVar2 = psRam101164c8;
  piVar6 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73696465);
  if ((piVar6 != (int *)0x0) &&
     (iVar7 = FUN_10117884((int)*(short *)(*piVar6 + 0x448) + (int)piVar6), iVar7 != 0)) {
    puVar9 = (int *)(*(short *)(*puVar3 + *psVar2 * 2 + 0xa0) * 6 + iVar5);
    uVar1 = puVar9[1];
    *(int *)(iVar7 + 0x12) = *puVar9;
    *(unsigned int *)(iVar7 + 0x16) = uVar1 & 0xffff0000;
  }
  piVar6 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657363);
  if ((piVar6 != (int *)0x0) &&
     (iVar7 = FUN_10117884((int)*(short *)(*piVar6 + 0x448) + (int)piVar6), iVar7 != 0)) {
    puVar9 = (int *)(*(short *)(*puVar3 + *psVar2 * 2 + 0xa0) * 6 + iVar5);
    uVar1 = puVar9[1];
    *(int *)(iVar7 + 0x12) = *puVar9;
    *(unsigned int *)(iVar7 + 0x16) = uVar1 & 0xffff0000;
  }
  piVar6 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e616d65);
  if (piVar6 != (int *)0x0) {
    FUN_100b19f4(auStack_118,
                 (unsigned long long)*puVar3 +
                 (((long long)*psVar2 & 0x3fffffffU) * 4 + (long long)*psVar2 & 0x3fffffff) * 4);
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),auStack_118,1);
  }
  lVar10 = 0;
  do {
    piVar6 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                 lVar10 + 0x73696431);
    if (piVar6 != (int *)0x0) {
      if (*(short *)((int)piVar6 + 0x82) != 0) {
        *(short *)((int)piVar6 + 0x82) = 0;
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x488));
      }
      if (*psVar2 != *(short *)(piVar6 + 0x20)) {
        *(short *)(piVar6 + 0x20) = *psVar2;
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
      }
    }
    sVar8 = (short)lVar10 + 1;
    lVar10 = (long long)sVar8;
  } while (sVar8 < 3);
  piVar6 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x4c697374);
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x8b0),*(short *)(piVar6 + 0x20));
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x8d8),*psVar4);
    if (*psVar4 != 0) {
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x8f0),
                   *(short *)(*puVar3 + *psVar2 * 2 + 0xe0) + 1,0,1,1);
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4b8),1);
    }
  }
  FUN_1005af24(param_1);
  return;
}

/* Address: 0x1005b4e8 Size: 216 bytes */
void FUN_1005b4e8(int *param_1,long long param_2)

{
  short *psVar1;
  int *piVar3;
  long long uVar2;
  unsigned long long uVar4;
  int local_134;
  char local_110 [272];
  
  psVar1 = psRam101164c8;
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e616d65);
  if (piVar3 != (int *)0x0) {
    local_110[0] = 0;
    FUN_10117884((int)*(short *)(*piVar3 + 0x7a0) + (int)piVar3,local_110);
    uVar2 = FUN_100b1b08(local_110);
    uVar4 = (unsigned long long)*psVar1;
    FUN_10001e78((unsigned long long)**(unsigned int **)(local_134 + -0x544) +
                 ((uVar4 & 0x3fffffff) * 4 + uVar4 & 0x3fffffff) * 4,uVar2);
  }
  FUN_10057e5c(*psVar1,1,param_2);
  FUN_100586a0(param_2);
  return;
}

/* Address: 0x1005b5c0 Size: 108 bytes */
void FUN_1005b5c0()

{
  short *psVar1;
  unsigned int *puVar2;
  int local_2c;
  
  puVar2 = puRam1011735c;
  psVar1 = psRam101164c8;
  FUN_10001e78((unsigned long long)*puRam1011735c +
               (((long long)*psRam101164c8 & 0x3fffffffU) * 4 + (long long)*psRam101164c8 & 0x3fffffff
               ) * 4,uRam10117610);
  *(short *)(*puVar2 + *psVar1 * 2 + 0xe0) = **(short **)(local_2c + -0x28c);
  return;
}

/* Address: 0x1005b62c Size: 780 bytes */
void FUN_1005b62c(short param_1,long long param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int *puVar4;
  short *psVar5;
  int *puVar6;
  int *piVar7;
  int iVar8;
  short sVar9;
  unsigned long long uVar10;
  int local_16c;
  char auStack_144 [256];
  short local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  short local_2c;
  
  iVar8 = iRam10117728;
  psVar5 = psRam1011760c;
  puVar4 = puRam10117370;
  puVar3 = puRam1011735c;
  uVar10 = (unsigned long long)param_1;
  if (*(short *)(*puRam1011735c + (int)((uVar10 & 0xffffffff) << 1) + 0x138) == 0) {
    FUN_100586a0(param_2);
  }
  else {
    uVar1 = *puRam1011735c;
    *puRam10117614 = *(short *)(uVar1 + (int)((uVar10 & 0xffffffff) << 1) + 0xe0);
    *psRam101164c8 = param_1;
    FUN_10001e78(uRam10117610,
                 (unsigned long long)uVar1 + ((uVar10 & 0x3fffffff) * 4 + uVar10 & 0x3fffffff) * 4);
    local_2c = 0;
    do {
      *(short *)(local_2c * 2 + iVar8) = 0xffff;
      local_2c = local_2c + 1;
    } while (local_2c < 5);
    iVar2 = *puVar3 + (int)((uVar10 & 0xffffffff) << 1);
    if (*(short *)(iVar2 + 0xd0) == 1) {
      FUN_1003aeb0(7,*(short *)(iVar2 + 0xc0),0xffffffffffffffff,0);
      local_2c = 0;
      do {
        sVar9 = local_2c;
        if (*psVar5 <= local_2c) {
          sVar9 = -1;
        }
        *(short *)(local_2c * 2 + iVar8) = sVar9;
        local_2c = local_2c + 1;
      } while (local_2c < 0x1e);
    }
    else {
      *psVar5 = 0;
    }
    if (**(char **)(local_16c + -0x528) != '\0') {
      FUN_1008f3b4();
      puVar6 = (int *)FUN_100f56e4(0x84);
      if (puVar6 != (int *)0x0) {
        FUN_1010598c(puVar6);
        *puVar6 = *(int *)(local_16c + -0x1908);
      }
    }
    piVar7 = (int *)FUN_10117884(**(int **)(local_16c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_16c + -0x1e4) + 200),0xbce
                                 ,*(int *)(**(int **)(local_16c + -0x554) + 0x88));
    FUN_100db26c();
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_3c = *puVar4;
    *puVar4 = auStack_144;
    iVar8 = FUN_10000090(auStack_144);
    if (iVar8 == 0) {
      FUN_1005b1c4(piVar7);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 800));
      iVar8 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x810));
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x328));
      if (iVar8 == 0x6f6b2020) {
        FUN_1005b4e8(piVar7,param_2);
      }
      else {
        FUN_1005b5c0();
      }
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
      *puVar4 = local_3c;
    }
    else {
      if (piVar7 != (int *)0x0) {
        FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
      }
      FUN_100db158(local_44,local_40);
    }
  }
  return;
}

/* Address: 0x1005b938 Size: 212 bytes */
void FUN_1005b938(long long param_1)

{
  int *piVar1;
  short *psVar2;
  short uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  psVar2 = psRam1011760c;
  piVar1 = piRam1011735c;
  iVar6 = 0;
  do {
    iVar5 = *piVar1 + iVar6 * 2;
    if (((*(short *)(iVar5 + 0x138) != 0) && (*(short *)(iVar5 + 0xd0) == 1)) &&
       (*(short *)(iVar5 + 0xc0) != 3)) {
      FUN_1003aeb0(7,*(short *)(iVar5 + 0xc0),0xffffffffffffffff,0);
      uVar3 = FUN_1005f230(1,*psVar2 + -1,0);
      *(short *)(iVar6 * 2 + *piVar1 + 0xe0) = uVar3;
      FUN_10057e5c(iVar6,0,param_1);
    }
    sVar4 = (short)iVar6 + 1;
    iVar6 = (int)sVar4;
  } while (sVar4 < 8);
  FUN_100586a0(param_1);
  return;
}

/* Address: 0x1005ba1c Size: 460 bytes */
void FUN_1005ba1c(short param_1,short param_2,char *param_3,char *param_4)

{
  char *puVar1;
  int bVar2;
  unsigned long long uVar3;
  unsigned int uVar4;
  int *piVar7;
  short sVar9;
  long long uVar5;
  long long uVar6;
  int iVar8;
  short sVar10;
  unsigned int local_b4;
  short local_90;
  short local_8e;
  char auStack_8c [50];
  char auStack_5a [90];
  
  piVar7 = (int *)FUN_100522dc(*(int *)(*(int *)(*piRam1011734c + 0x88) + 0x15c),1,0);
  bVar2 = false;
  if (piVar7 != (int *)0x0) {
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x100));
    uVar3 = (unsigned long long)local_b4;
    sVar9 = FUN_100525a0();
    uVar5 = FUN_100525a0(param_1);
    uVar6 = FUN_100525a0(param_2);
    sVar10 = 0;
    do {
      FUN_10052490(piVar7,&local_90,0x68);
      uVar4 = (unsigned int)uVar3;
      if (((int)local_90 == (int)uVar5) && ((int)local_8e == (int)uVar6)) {
        bVar2 = true;
      }
      sVar10 = sVar10 + 1;
    } while ((!bVar2) && (sVar10 < sVar9));
    FUN_100523a8(piVar7,1);
    if (bVar2) {
      FUN_10001e78(param_3,auStack_8c);
      FUN_10001e78(param_4,auStack_5a);
      uVar4 = local_b4;
    }
    else {
      puVar1 = *(char **)(uVar4 - 0x1904);
      *param_3 = *puVar1;
      *param_4 = puVar1[4];
    }
    iVar8 = FUN_100001e0(param_3,(unsigned long long)*(unsigned int *)(uVar4 - 0x1904) + 8);
    if ((iVar8 == 0) &&
       (iVar8 = FUN_100001e0(param_4,(unsigned long long)*(unsigned int *)(local_b4 - 0x1904) + 0xc), iVar8 == 0)) {
      uVar5 = FUN_100525a0(uVar5);
      uVar6 = FUN_100525a0(uVar6);
      FUN_10001dd0(param_3,(unsigned long long)*(unsigned int *)(local_b4 - 0x1904) + 0x10,uVar5,uVar6);
    }
  }
  return;
}

/* Address: 0x1005bd28 Size: 144 bytes */
void FUN_1005bd28()

{
  int *puVar1;
  int *ppuVar2;
  long long uVar3;
  
  puVar1 = puRam10117618;
  ppuVar2 = 0 /* TVect base */;
  uVar3 = FUN_100522dc(*(int *)(*(int *)(*piRam1011734c + 0x88) + 0x15c),6,0);
  if ((int)uVar3 != 0) {
    FUN_100524d4(uVar3,*puVar1,*(short *)(*(int*)((char*)ppuVar2 - 0xa1)));
    FUN_100523a8(uVar3,1);
    FUN_100ef580(*puVar1);
  }
  return;
}

/* Address: 0x1005c2d4 Size: 768 bytes */
void FUN_1005c2d4()
{
  return;
}

/* Address: 0x1005c5d4 Size: 476 bytes */
void FUN_1005c5d4()

{
  unsigned char bVar1;
  short *puVar2;
  int iVar3;
  int bVar4;
  short sVar5;
  int *puVar6;
  short *psVar7;
  int *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *ppuVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  unsigned int uVar18;
  short local_30 [24];
  
  iVar12 = iRam101176f8;
  iVar11 = iRam101176f4;
  iVar10 = iRam101176f0;
  iVar9 = iRam101176ec;
  puVar8 = puRam101176e8;
  psVar7 = psRam101176e4;
  puVar6 = puRam101176e0;
  iVar3 = iRam101174ac;
  ppuVar13 = 0 /* TVect base */;
  sVar17 = -1;
  if (*psRam10116354 == 0) {
    *psRam101176e4 = 1;
    *puVar8 = *puVar6;
  }
  puVar2 = (short *)*puVar6;
  FUN_1002122c(*puVar2,puVar2[1],local_30);
  FUN_10021a3c(local_30[0],iVar3,0);
  iVar14 = 0;
  uVar18 = 0xffffffff;
  sVar5 = local_30[0];
  if (0 < local_30[0]) {
    do {
      iVar15 = 0;
      bVar4 = false;
      if (0 < *psVar7) {
        do {
          if (puVar8[iVar15] == *(int *)(iVar14 * 4 + iVar3)) {
            bVar4 = true;
            break;
          }
          sVar16 = (short)iVar15 + 1;
          iVar15 = (int)sVar16;
        } while (sVar16 < *psVar7);
      }
      bVar1 = *(unsigned char *)(*(int *)(iVar14 * 4 + iVar3) + 0x11);
      if (((uVar18 == bVar1) && (bVar1 != 0)) && (-1 < sVar17)) {
        *(short *)(iVar14 * 2 + iVar11) = 0xffff;
      }
      else {
        *(short *)(iVar14 * 2 + iVar11) = 0;
        sVar17 = sVar17 + 1;
      }
      *(short *)(iVar14 * 2 + iVar9) = sVar17;
      *(int *)(iVar14 * 4 + iVar12) = *(int *)(iVar14 * 4 + iVar3);
      if (bVar4) {
        *(short *)(iVar14 * 2 + iVar10) = 1;
      }
      else {
        *(short *)(iVar14 * 2 + iVar10) = 0;
      }
      sVar16 = (short)iVar14 + 1;
      iVar14 = (int)sVar16;
      uVar18 = (unsigned int)bVar1;
    } while (sVar16 < local_30[0]);
  }
  for (; sVar5 < 8; sVar5 = sVar5 + 1) {
    iVar3 = (int)(((long long)sVar5 & 0x7fffffffU) << 1);
    *(short *)(iVar3 + iVar10) = 0;
    *(short *)(iVar3 + iVar9) = 0xffff;
    *(short *)(iVar3 + iVar11) = 0xffff;
    *(int *)((int)(((long long)sVar5 & 0xffffffffU) << 2) + iVar12) = 0;
  }
  *(short *)(*(int*)((char*)ppuVar13 - 0x550)) = local_30[0];
  FUN_1005c2d4(0);
  return;
}

/* Address: 0x1005c7b0 Size: 32 bytes */
void FUN_1005c7b0()

{
  FUN_1005c5d4();
  return;
}






/* Address: 0x1005c7d0 Size: 1212 bytes */
void FUN_1005c7d0(short param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  unsigned long long uVar11;
  int *ppuVar12;
  char uVar13;
  short sVar14;
  short sVar15;
  int bVar18;
  short uVar17;
  int iVar16;
  unsigned long long uVar19;
  unsigned long long uVar20;
  int iVar22;
  unsigned long long uVar21;
  int iVar23;
  int iVar24;
  unsigned short auStack_80 [8];
  short local_70 [8];
  unsigned short local_60 [8];
  unsigned short local_50 [40];
  
  iVar10 = iRam101176f8;
  iVar23 = iRam101176f0;
  iVar16 = iRam101176ec;
  iVar24 = iRam101176e8;
  psVar9 = psRam101176e4;
  piVar8 = piRam101176e0;
  psVar7 = psRam10116360;
  psVar6 = psRam10115ea0;
  uVar11 = ZEXT48(0 /* TVect base */);
  ppuVar12 = 0 /* TVect base */;
  sVar2 = *(short *)(*piRam101176e0 + 0x12);
  sVar3 = *(short *)(*piRam101176e0 + 0x14);
  sVar4 = *psRam10115ea0;
  *piRam101176e0 = 0;
  iVar22 = 0;
  do {
    *(int *)(iVar22 * 4 + iVar24) = 0;
    sVar14 = (short)iVar22 + 1;
    iVar22 = (int)sVar14;
  } while (sVar14 < 8);
  uVar21 = 0;
  uVar20 = 0;
  uVar19 = uVar20;
  if (0 < *psVar7) {
    do {
      uVar20 = uVar19;
      if (*(short *)((int)((uVar21 & 0xffffffff) << 1) + iVar23) != 0) {
        if (*piVar8 == 0) {
          *piVar8 = *(int *)((int)((uVar21 & 0xffffffff) << 2) + iVar10);
        }
        uVar20 = (unsigned long long)(short)((short)uVar19 + 1);
        iVar22 = *(int *)((int)((uVar21 & 0xffffffff) << 2) + iVar10);
        *(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar24) = iVar22;
        *(unsigned short *)(iVar22 + 0xc) = *(unsigned short *)(iVar22 + 0xc) | 1;
      }
      sVar14 = (short)uVar21 + 1;
      uVar21 = (unsigned long long)sVar14;
      uVar19 = uVar20;
    } while (sVar14 < *psVar7);
  }
  *psVar9 = (short)uVar20;
  *puRam10116354 =
       ((uVar20 < 2) + 2) -
       ((unsigned short)((unsigned long long)(uVar20 < 2) < 0xfffffffffffffffe) - ((short)(uVar20 >> 0x10) >> 0xf)) &
       1;
  iVar23 = 1;
  if (1 < (int)uVar20) {
    do {
      *(short *)(*(int *)(iVar23 * 4 + iVar24) + 0x12) = *(short *)(*piVar8 + 0x12);
      *(short *)(*(int *)(iVar23 * 4 + iVar24) + 0x14) = *(short *)(*piVar8 + 0x14);
      sVar14 = (short)iVar23 + 1;
      iVar23 = (int)sVar14;
    } while (sVar14 < *psVar9);
  }
  uVar20 = 0;
  uVar21 = 0;
  uVar19 = uVar20;
  if (0 < *psVar7) {
    do {
      cVar1 = *(char *)(*(int *)((int)((uVar21 & 0xffffffff) << 2) + iVar10) + 0x11);
      uVar20 = uVar19;
      if ((cVar1 != '\0') && (cVar1 != '\x01')) {
        iVar24 = 0;
        bVar18 = false;
        if (0 < (int)uVar19) {
          do {
            if (local_50[iVar24] ==
                (unsigned short)*(unsigned char *)(*(int *)((int)((uVar21 & 0xffffffff) << 2) + iVar10) + 0x11)) {
              bVar18 = true;
              break;
            }
            sVar14 = (short)iVar24 + 1;
            iVar24 = (int)sVar14;
          } while ((int)sVar14 < (int)uVar19);
        }
        if (!bVar18) {
          uVar20 = (unsigned long long)(short)((short)uVar19 + 1);
          *(unsigned short *)((int)local_50 + (int)((uVar19 & 0xffffffff) << 1)) =
               (unsigned short)*(unsigned char *)(*(int *)((int)((uVar21 & 0xffffffff) << 2) + iVar10) + 0x11);
        }
      }
      sVar14 = (short)uVar21 + 1;
      uVar21 = (unsigned long long)sVar14;
      uVar19 = uVar20;
    } while (sVar14 < *psVar7);
  }
  iVar24 = 0;
  uVar19 = 0xffffffffffffffff;
  if (0 < *psVar7) {
    do {
      if ((iVar24 == 0) || (*(short *)(iVar24 * 2 + iVar16) != *(short *)(iVar24 * 2 + iVar16 + -2))
         ) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (bVar18) {
        uVar19 = (unsigned long long)(short)((short)uVar19 + 1);
        iVar23 = *(int *)(iVar24 * 4 + iVar10);
        iVar22 = (int)((uVar19 & 0x7fffffff) << 1);
        *(unsigned short *)((int)auStack_80 + iVar22) = (unsigned short)*(unsigned char *)(iVar23 + 0x11);
        *(short *)((int)local_70 + iVar22) = 0;
        *(unsigned short *)((int)local_60 + iVar22) = *(unsigned short *)(iVar23 + 0xc) & 1;
      }
      iVar23 = (int)((uVar19 & 0xffffffff) << 1);
      *(short *)((int)local_70 + iVar23) = *(short *)((int)local_70 + iVar23) + 1;
      iVar24 = (int)(short)((short)iVar24 + 1);
    } while (iVar24 < *psVar7);
  }
  sVar14 = (short)uVar19 + 1;
  uVar19 = 0;
  if (0 < sVar14) {
    do {
      iVar24 = (int)((uVar19 & 0xffffffff) << 1);
      if (*(short *)((int)local_70 + iVar24) == 1) {
        if (*(short *)((int)local_60 + iVar24) == 0) {
          uVar17 = 2;
        }
        else {
          uVar17 = 0;
        }
        *(short *)((int)local_60 + (int)((uVar19 & 0xffffffff) << 1)) = uVar17;
      }
      else {
        if (*(short *)((int)local_60 + (int)((uVar19 & 0xffffffff) << 1)) == 0) {
          uVar17 = 3;
        }
        else {
          uVar17 = 1;
        }
        *(short *)((int)local_60 + (int)((uVar19 & 0xffffffff) << 1)) = uVar17;
      }
      sVar15 = (short)uVar19 + 1;
      uVar19 = (unsigned long long)sVar15;
    } while (sVar15 < sVar14);
  }
  uVar19 = 0;
  iVar24 = 0;
  if (0 < sVar14) {
    do {
      sVar15 = *(short *)((int)local_60 + (int)((uVar19 & 0xffffffff) << 1));
      if ((sVar15 == 2) || (sVar15 == 0)) {
        uVar13 = 0;
      }
      else if (*(short *)((int)local_60 + (int)((uVar19 & 0xffffffff) << 1)) == 3) {
        uVar13 = 1;
      }
      else {
        uVar20 = (unsigned long long)(short)((short)uVar20 + -1);
        if ((long long)uVar20 < 1) {
          uVar13 = FUN_10021d50();
        }
        else {
          uVar13 = (char)*(short *)((int)local_50 + (int)((uVar20 & 0xffffffff) << 1));
        }
      }
      ppuVar12 = (int **)uVar11;
      sVar15 = *(short *)((int)local_70 + (int)((uVar19 & 0xffffffff) << 1));
      sVar5 = (short)iVar24;
      for (iVar16 = iVar24; iVar16 < (short)(sVar5 + sVar15);
          iVar16 = (int)(short)((short)iVar16 + 1)) {
        *(char *)(*(int *)(iVar24 * 4 + iVar10) + 0x11) = uVar13;
        iVar24 = (int)(short)((short)iVar24 + 1);
      }
      sVar15 = (short)uVar19 + 1;
      uVar19 = (unsigned long long)sVar15;
    } while (sVar15 < sVar14);
  }
  FUN_10041de8();
  if ((((param_1 == 0) && (*(short *)(*piVar8 + 0x12) == sVar2)) &&
      (*(short *)(*piVar8 + 0x14) == sVar3)) && (*psVar6 == sVar4)) {
    FUN_10008284(*(short *)*piVar8,((short *)*piVar8)[1]);
    if (*psVar9 < 2) {
      FUN_1002c8e8(*(short *)*piVar8,((short *)*piVar8)[1]);
    }
    else {
      FUN_1002c92c(*(short *)*piVar8,((short *)*piVar8)[1]);
    }
  }
  else {
    FUN_10007f78();
  }
  FUN_10117884((int)*(int **)(*(int *)(*(int*)((char*)ppuVar12 - 0x155)) + 0x88) +
               (int)*(short *)(**(int **)(*(int *)(*(int*)((char*)ppuVar12 - 0x155)) + 0x88) + 0x38),0,0);
  return;
}

/* Address: 0x1005cd18 Size: 120 bytes */
long long FUN_1005cd18()

{
  short sVar1;
  int iVar2;
  
  if (*piRam101176e0 == 0) {
    return 0;
  }
  if (*psRam10116360 != 1) {
    iVar2 = 0;
    if (0 < *psRam10116360) {
      do {
        if (*(short *)(iVar2 * 2 + iRam101176f0) == 0) {
          return 0;
        }
        sVar1 = (short)iVar2 + 1;
        iVar2 = (int)sVar1;
      } while (sVar1 < *psRam10116360);
    }
    return 1;
  }
  return 1;
}

/* Address: 0x1005cd90 Size: 620 bytes */
void FUN_1005cd90()

{
  int bVar1;
  int bVar2;
  int *piVar3;
  int *puVar4;
  int *piVar5;
  int *ppuVar6;
  int iVar7;
  int *puVar8;
  short *puVar9;
  int local_74;
  char auStack_50 [80];
  
  piVar5 = piRam1011735c;
  puVar4 = puRam10115fac;
  piVar3 = piRam10115fa4;
  ppuVar6 = 0 /* TVect base */;
  *puRam10115fa8 = 1;
  iVar7 = *piVar3;
  if ((iVar7 == 0) || (0xe0 < *(int *)(iVar7 + 0x38))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar7 = *piVar3;
  if ((iVar7 == 0) || (0x70 < *(int *)(iVar7 + 0x38))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar8 = puRam10115fb0;
  if ((!bVar1) && (puVar8 = puRam10115fb8, bVar2)) {
    puVar8 = puRam10115fb4;
  }
  puVar9 = puRam10115fbc;
  if ((!bVar1) && (puVar9 = puRam10115fc4, bVar2)) {
    puVar9 = puRam10115fc0;
  }
  FUN_1003206c(2,0xe0,0xff,0xf9);
  FUN_1004602c(8,*puVar4,puVar4[1],*puVar8,0x24,0xf);
  FUN_10001dd0(auStack_50,(*(int*)((char*)ppuVar6 - 0x640)),
               *(short *)((*(int*)((char*)ppuVar6 - 0xc9)) + *(short *)(*piVar5 + 0x110) * 2));
  iVar7 = local_74;
  FUN_1005f1a0(*puVar9,puVar9[1],auStack_50);
  FUN_1004602c(8,puVar4[2],puVar4[3],puVar8[1],0x24,0xf);
  FUN_10001dd0(auStack_50,(unsigned long long)*(unsigned int *)(iVar7 + -0x1900) + 4,
               *(short *)(*piVar5 + *(short *)(*piVar5 + 0x110) * 0x14 + 0x186));
  iVar7 = local_74;
  FUN_1005f1a0(puVar9[2],puVar9[3],auStack_50);
  FUN_1004602c(8,puVar4[4],puVar4[5],puVar8[2],0x24,0xf);
  FUN_10001dd0(auStack_50,(unsigned long long)*(unsigned int *)(iVar7 + -0x1900) + 0xc,
               *(short *)(*(short *)(*piVar5 + 0x110) * 2 + *(int *)(iVar7 + -0x274)));
  FUN_1005f1a0(puVar9[4],puVar9[5],auStack_50);
  FUN_1004602c(8,puVar4[6],puVar4[7],puVar8[3],0x24,0xf);
  FUN_10001dd0(auStack_50,(unsigned long long)*(unsigned int *)(local_74 + -0x1900) + 0x14,
               *(short *)(*(short *)(*piVar5 + 0x110) * 2 + *(int *)(local_74 + -0x270)));
  FUN_1005f1a0(puVar9[6],puVar9[7],auStack_50);
  return;
}























































































































































































































































































































/* Address: 0x1005cffc Size: 208 bytes */
void FUN_1005cffc(short param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  unsigned long long uVar5;
  short sVar6;
  
  iVar4 = iRam101176f0;
  iVar3 = iRam101176ec;
  psVar2 = psRam10116360;
  FUN_10117884((int)*(int **)(*piRam1011734c + 0x88) +
               (int)*(short *)(**(int **)(*piRam1011734c + 0x88) + 0x228));
  sVar1 = *(short *)(param_1 * 2 + iVar3);
  uVar5 = 0;
  if (0 < *psVar2) {
    do {
      *(unsigned short *)((int)((uVar5 & 0xffffffff) << 1) + iVar4) =
           (unsigned short)(*(short *)((int)((uVar5 & 0xffffffff) << 1) + iVar3) == sVar1);
      sVar6 = (short)uVar5 + 1;
      uVar5 = (unsigned long long)sVar6;
    } while (sVar6 < *psVar2);
  }
  FUN_1005c2d4(0);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}

/* Address: 0x1005d0cc Size: 372 bytes */
void FUN_1005d0cc(short param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short local_10 [8];
  
  iVar2 = iRam101176f0;
  iVar4 = iRam101176ec;
  psVar1 = psRam10116360;
  iVar3 = (int)param_1;
  if (*(short *)(iVar3 * 2 + iRam101176f0) == 0) {
    iVar4 = 0;
    if (0 < *psRam10116360) {
      do {
        if (*(short *)(iVar4 * 2 + iRam101176f0) != 0) {
          iVar4 = (int)*(short *)(iVar4 * 2 + iRam101176ec);
          break;
        }
        sVar6 = (short)iVar4 + 1;
        iVar4 = (int)sVar6;
      } while (sVar6 < *psRam10116360);
    }
    iVar3 = iVar3 * 2;
    *(short *)(iVar3 + iRam101176ec) = (short)iVar4;
    *(unsigned short *)(iVar3 + iVar2) = (unsigned short)(*(short *)(iVar3 + iVar2) == 0);
  }
  else {
    iVar5 = 0;
    do {
      local_10[iVar5] = 0;
      sVar6 = (short)iVar5 + 1;
      iVar5 = (int)sVar6;
    } while (sVar6 < 8);
    iVar5 = 0;
    if (0 < *psVar1) {
      do {
        sVar6 = *(short *)(iVar5 * 2 + iVar4);
        local_10[sVar6] = local_10[sVar6] + 1;
        sVar6 = (short)iVar5 + 1;
        iVar5 = (int)sVar6;
      } while (sVar6 < *psVar1);
    }
    if (local_10[*(short *)(iVar3 * 2 + iVar4)] != 1) {
      iVar5 = 0;
      do {
        if (local_10[iVar5] == 0) break;
        sVar6 = (short)iVar5 + 1;
        iVar5 = (int)sVar6;
      } while (sVar6 < 8);
      iVar3 = iVar3 * 2;
      *(unsigned short *)(iVar3 + iVar2) = (unsigned short)(*(short *)(iVar3 + iVar2) == 0);
      *(short *)(iVar3 + iVar4) = (short)iVar5;
    }
  }
  FUN_1005c2d4(1);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}

/* Address: 0x1005d240 Size: 156 bytes */
void FUN_1005d240()

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  iVar3 = iRam101176f0;
  iVar2 = iRam101176ec;
  psVar1 = psRam10116360;
  if (*piRam101176e0 != 0) {
    iVar5 = 0;
    if (0 < *psRam10116360) {
      do {
        *(short *)(iVar5 * 2 + iVar2) = 0;
        *(short *)(iVar5 * 2 + iVar3) = 1;
        sVar4 = (short)iVar5 + 1;
        iVar5 = (int)sVar4;
      } while (sVar4 < *psVar1);
    }
    FUN_1005c2d4(1);
    FUN_1005c7d0(0);
    FUN_1005cc8c();
    FUN_1003dc28();
  }
  return;
}

/* Address: 0x1005d2dc Size: 136 bytes */
void FUN_1005d2dc()

{
  short *psVar1;
  int iVar2;
  short *puVar3;
  int iVar4;
  short sVar5;
  
  puVar3 = puRam101176f0;
  iVar2 = iRam101176ec;
  psVar1 = psRam10116360;
  iVar4 = 0;
  if (0 < *psRam10116360) {
    do {
      *(short *)(iVar4 * 2 + iVar2) = (short)iVar4;
      puVar3[iVar4] = 0;
      sVar5 = (short)iVar4 + 1;
      iVar4 = (int)sVar5;
    } while (sVar5 < *psVar1);
  }
  *puVar3 = 1;
  FUN_1005c2d4();
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}








































































































































/* Address: 0x1005d364 Size: 300 bytes */
void FUN_1005d364(short param_1,short param_2,short param_3)

{
  int iVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if (*psRam10115fa8 == 0) {
    if (param_3 < 8) {
      if (param_3 < *psRam10116360) {
        iVar1 = *(int *)(param_3 * 4 + iRam101176f8);
        FUN_1000be58(*(char *)(iVar1 + 4),*(char *)(iVar1 + 6),
                     *(char *)(iVar1 + 8),*(char *)(iVar1 + 0xb),
                     *(char *)(iVar1 + 7),*(char *)(iVar1 + 10),param_1,param_2);
      }
      else {
        FUN_1000a9e4(param_1,param_2,0);
        FUN_1000aaa8(ZEXT48((*(int*)((char*)ppuVar2 - 0x640))) + 0x28,ZEXT48((*(int*)((char*)ppuVar2 - 0x640))) + 0x34);
      }
    }
    else {
      FUN_1000a9e4(param_1,param_2,0);
      FUN_1000aaa8(ZEXT48((*(int*)((char*)ppuVar2 - 0x640))) + 0x50,ZEXT48((*(int*)((char*)ppuVar2 - 0x640))) + 0x60);
    }
  }
  else {
    FUN_1000a9e4(param_1,param_2,0);
    if ((unsigned int)(int)param_3 < 4) {
      return;
    }
  }
  return;
}

/* Address: 0x1005d598 Size: 944 bytes */

void FUN_1005d598(int param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  unsigned long long uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  unsigned long long uVar17;
  int iVar18;
  unsigned char bVar19;
  char auStack_8c [32];
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_58;
  int local_4c;
  
  iVar5 = iRam101176f8;
  iVar4 = iRam101176f0;
  iVar2 = FUN_1011662c;
  psVar3 = psRam10116360;
  uVar6 = ZEXT48(0 /* TVect base */);
  iVar7 = FUN_100abd8c(*(short *)*puRam101176e0,((short *)*puRam101176e0)[1]);
  iVar18 = (int)uVar6;
  sVar16 = 0;
  uVar17 = 0;
  sVar12 = 0;
  sVar13 = 0;
  sVar14 = 0;
  sVar15 = 0;
  sVar10 = 0;
  sVar8 = 0;
  if (0 < *psVar3) {
    do {
      sVar12 = sVar8;
      if (*(short *)((int)((uVar17 & 0xffffffff) << 1) + iVar4) != 0) {
        iVar18 = *(int *)((int)((uVar17 & 0xffffffff) << 2) + iVar5);
        cVar1 = *(char *)(iVar18 + 4);
        if ((*(unsigned short *)(iVar18 + 0xc) & 0x1000) == 0) {
          bVar19 = (cVar1 == '\x1c') << 1;
          if ((cVar1 == '\x1c') || (FUN_10049628(cVar1,auStack_8c), (int)(bVar19 >> 1 & 1))) {
            sVar8 = FUN_100abe94(iVar18);
            sVar8 = sVar8 + *(char *)(iVar18 + 8);
            iVar11 = (int)sVar8;
            if (8 < sVar8) {
              iVar11 = 9;
            }
            sVar8 = *(short *)(iVar11 * 2 + iVar2);
            sVar9 = FUN_100abf8c(iVar18);
            sVar16 = sVar9 + sVar16 + sVar8;
          }
          else if (((local_5e == 0) || (iVar7 != 3)) || (local_5e <= sVar10)) {
            if (((local_60 == 0) || (iVar7 != 2)) || (local_60 <= sVar15)) {
              if (((local_62 == 0) || (iVar7 != 1)) || (local_62 <= sVar14)) {
                if (((local_64 == 0) || (iVar7 != 0)) || (local_64 <= sVar13)) {
                  if (local_58 == 4) {
                    sVar12 = 1;
                  }
                }
                else {
                  sVar16 = sVar16 + (local_64 - sVar13);
                  sVar13 = local_64;
                }
              }
              else {
                sVar16 = sVar16 + (local_62 - sVar14);
                sVar14 = local_62;
              }
            }
            else {
              sVar16 = sVar16 + (local_60 - sVar15);
              sVar15 = local_60;
            }
          }
          else {
            sVar16 = sVar16 + (local_5e - sVar10);
            sVar10 = local_5e;
          }
        }
      }
      iVar18 = (int)uVar6;
      sVar9 = (short)uVar17 + 1;
      uVar17 = (unsigned long long)sVar9;
      sVar8 = sVar12;
    } while (sVar9 < *psVar3);
  }
  sVar10 = *(short *)(**(int **)(iVar18 + -0x544) + 0x112);
  sVar15 = sVar16 + sVar12;
  if (sVar10 < (short)(sVar16 + sVar12)) {
    sVar15 = sVar10;
  }
  iVar18 = 0;
  if (0 < *psVar3) {
    local_4c = iVar2;
    do {
      if (*(short *)(iVar18 * 2 + iVar4) != 0) {
        iVar2 = *(int *)(iVar18 * 4 + iVar5);
        cVar1 = *(char *)(iVar2 + 4);
        *(short *)(iVar18 * 2 + param_1) = (short)*(char *)(iVar2 + 8);
        if (cVar1 != '\x1c') {
          FUN_10049628(cVar1,auStack_8c);
        }
        if ((*(unsigned short *)(iVar2 + 0xc) & 0x1000) == 0) {
          if (cVar1 == '\x1c') {
            sVar10 = FUN_100abe94(iVar2);
            *(short *)(param_1 + iVar18 * 2) = *(short *)(param_1 + iVar18 * 2) + sVar10;
          }
          else if ((local_66 == 0) || (iVar7 != 3)) {
            if ((local_68 == 0) || (iVar7 != 2)) {
              if ((local_6a == 0) || (iVar7 != 1)) {
                if ((local_6c != 0) && (iVar7 == 0)) {
                  *(short *)(param_1 + iVar18 * 2) = local_6c + *(short *)(param_1 + iVar18 * 2);
                }
              }
              else {
                *(short *)(param_1 + iVar18 * 2) = local_6a + *(short *)(param_1 + iVar18 * 2);
              }
            }
            else {
              *(short *)(param_1 + iVar18 * 2) = local_68 + *(short *)(param_1 + iVar18 * 2);
            }
          }
          else {
            *(short *)(param_1 + iVar18 * 2) = local_66 + *(short *)(param_1 + iVar18 * 2);
          }
        }
        else {
          *(short *)(param_1 + iVar18 * 2) = 4;
        }
        sVar10 = *(short *)(param_1 + iVar18 * 2);
        if (8 < sVar10) {
          sVar10 = 9;
        }
        *(short *)(param_1 + iVar18 * 2) = sVar10 + sVar15;
      }
      sVar10 = (short)iVar18 + 1;
      iVar18 = (int)sVar10;
    } while (sVar10 < *psVar3);
  }
  return;
}























































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1005d948 Size: 1084 bytes */
int FUN_1005d948()
{
  return 0;
}

/* Address: 0x1005dd84 Size: 2324 bytes */
void FUN_1005dd84(short param_1,short param_2,short param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int uVar12;
  unsigned int uVar13;
  int *piVar15;
  int iVar16;
  int iVar17;
  long long uVar14;
  long long lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  unsigned long long uVar22;
  unsigned long long uVar23;
  unsigned long long uVar24;
  unsigned long long uVar25;
  long long lVar26;
  short sStack00000022;
  unsigned int local_19c;
  char auStack_178 [16];
  int local_168 [2];
  char auStack_160 [256];
  short auStack_60 [8];
  short local_50;
  
  uVar12 = uRam1011772c;
  iVar11 = iRam101176f8;
  iVar17 = iRam101176f4;
  iVar10 = iRam101176f0;
  iVar9 = iRam101176ec;
  piVar8 = piRam10117364;
  puVar7 = puRam1011735c;
  puVar6 = puRam10116578;
  psVar5 = psRam10116360;
  iVar4 = iRam10115fd0;
  iVar3 = iRam10115fcc;
  piVar2 = piRam10115fc8;
  uVar23 = (unsigned long long)uRam1011635c;
  sStack00000022 = param_3;
  piVar15 = (int *)FUN_10117884(*piRam10115fc8 + (int)*(short *)(*(int *)*piRam10115fc8 + 0x308),
                                0x73746163);
  if ((piVar15 != (int *)0x0) &&
     (iVar16 = FUN_10117884((int)*(short *)(*piVar15 + 0x3a8) + (int)piVar15), iVar16 != 0)) {
    if (param_1 != 0) {
      FUN_10001dd0(uVar12,(unsigned long long)*(unsigned int *)(local_19c - 0x1900) + 0x104,
                   *(short *)(*puVar7 + 0x112));
      piVar15 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),0x6d617862);
      if (piVar15 != (int *)0x0) {
        FUN_100b19f4(auStack_160,uVar12);
        FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x7c8),auStack_160,1);
      }
    }
    FUN_1005d598(auStack_60);
    sVar21 = sStack00000022;
    local_50 = sStack00000022;
    if (param_2 == 0) {
      local_50 = 0;
      sVar21 = 7;
    }
    FUN_1003206c(2,0xe0,0xff,0xf9);
    uVar24 = 0;
    if (0 < *psVar5) {
      do {
        piVar15 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),
                                      uVar24 + 0x63686530);
        if (piVar15 != (int *)0x0) {
          sVar19 = *(short *)((int)((uVar24 & 0xffffffff) << 1) + iVar17);
          if (sVar19 != -1) {
            FUN_100850e8(piVar15,8,((long long)sVar19 & 0x1fffffffU) * 8 + uVar23,0x24,0xf,1);
          }
          if (piVar15 != (int *)0x0) {
            iVar16 = (int)((uVar24 & 0xffffffff) << 1);
            lVar26 = -(long long)*(short *)(iVar16 + iVar17);
            lVar18 = lVar26 + -1;
            FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x660),
                         lVar18 + (-(unsigned long long)(lVar18 == 0) - (lVar26 + -2)) & 0xff,1);
            lVar26 = -(long long)*(short *)(iVar16 + iVar17);
            lVar18 = lVar26 + -1;
            FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0xd8),
                         lVar18 + (-(unsigned long long)(lVar18 == 0) - (lVar26 + -2)) & 0xff);
          }
        }
        sVar19 = (short)uVar24 + 1;
        uVar24 = (unsigned long long)sVar19;
      } while (sVar19 < *psVar5);
    }
    sVar19 = local_50;
    if ((int)uVar24 < 8) {
      do {
        piVar15 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),
                                      uVar24 + 0x63686530);
        if (piVar15 != (int *)0x0) {
          FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0xd8),0);
        }
        sVar20 = (short)uVar24 + 1;
        uVar24 = (unsigned long long)sVar20;
        sVar19 = local_50;
      } while (sVar20 < 8);
    }
    for (; sVar19 <= sVar21; sVar19 = sVar19 + 1) {
      uVar23 = (unsigned long long)sVar19;
      piVar15 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),
                                    uVar23 + 0x61726d30);
      if (piVar15 != (int *)0x0) {
        if (sVar19 < *psVar5) {
          iVar17 = (int)((uVar23 & 0xffffffff) << 1);
          uVar13 = (int)*(short *)(*puVar7 + 0x110) + (int)*(short *)(iVar17 + iVar9);
          sVar20 = *(short *)(iVar17 + iVar10);
          iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
          FUN_10079ee8(piVar15,*(char *)(*(int *)(iVar17 + iVar11) + 4),
                       *(short *)(*puVar7 + 0x110),1);
          FUN_1007a018(piVar15,((short)uVar13 -
                               (short)(((long long)((int)uVar13 >> 3) +
                                        (unsigned long long)((int)uVar13 < 0 && (uVar13 & 7) != 0) &
                                       0xffffffff) << 3)) + 2,0,sVar20 == 0,1);
          FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0xd8),1);
          uVar24 = (unsigned long long)local_19c;
          cVar1 = *(char *)(*(int *)(iVar17 + iVar11) + 4);
          uVar13 = local_19c;
          if (cVar1 == '\x1c') {
LAB_1005e27c:
            iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
            uVar24 = (unsigned long long)*(char *)(*(int *)(iVar17 + iVar11) + 10);
            FUN_1005f1a0(*(short *)(iVar17 + iVar4) + 0x30,*(short *)(iVar17 + iVar4 + 2) + 5,
                         (unsigned long long)*puVar7 + ((uVar24 & 0x3fffffff) * 4 + uVar24 & 0x3fffffff) * 4
                         + 0x224);
          }
          else {
            if ((*(char *)(*piVar8 + cVar1 * 6 + 4) == '\0') &&
               (uVar25 = 0, '\0' < *(char *)(*(int *)(iVar17 + iVar11) + 10))) {
              do {
                iVar16 = (int)uVar25;
                uVar22 = uVar25 + ((long long)(iVar16 >> 1) +
                                   (unsigned long long)(iVar16 < 0 && (uVar25 & 1) != 0) & 0x7fffffff) * -2;
                iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
                FUN_1002269c(local_168,
                             *(short *)(iVar17 + iVar4) +
                             (short)(((long long)(iVar16 >> 1) +
                                      (unsigned long long)(iVar16 < 0 && (uVar25 & 1) != 0) & 0xffffffff) <<
                                    3) + 0x20,
                             *(short *)(iVar17 + iVar4 + 2) +
                             (short)((uVar22 & 0xffffffff) << 3) + (short)uVar22 + 8);
                iVar16 = (int)((uVar25 & 0xffffffff) << 3);
                FUN_1004602c(8,*(int *)(iVar16 + iVar3),*(int *)(iVar16 + iVar3 + 4),
                             local_168[0],0x24,0xf);
                uVar13 = (unsigned int)uVar24;
                sVar20 = (short)uVar25 + 1;
                uVar25 = (unsigned long long)sVar20;
              } while ((int)sVar20 < (int)*(char *)(*(int *)(iVar17 + iVar11) + 10));
            }
            if (*(char *)(*(int *)((int)((uVar23 & 0xffffffff) << 2) + iVar11) + 4) == '\x1c')
            goto LAB_1005e27c;
            iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
            uVar14 = FUN_1004a21c(*(char *)(*(int *)(iVar17 + iVar11) + 4));
            FUN_1005f1a0(*(short *)(iVar17 + iVar4) + 0x30,*(short *)(iVar17 + iVar4 + 2) + 5,uVar14
                        );
          }
          iVar17 = *(int *)((int)((uVar23 & 0xffffffff) << 2) + iVar11);
          cVar1 = *(char *)(iVar17 + 8);
          lVar26 = (long long)cVar1;
          if (*(char *)(iVar17 + 4) == '\x1c') {
            sVar20 = FUN_100abe94(iVar17);
            lVar26 = (long long)(short)(cVar1 + sVar20);
          }
          if (9 < (int)lVar26) {
            lVar26 = 9;
          }
          FUN_10001dd0(auStack_178,(unsigned long long)*(unsigned int *)(uVar13 - 0x1900) + 0x110,lVar26);
          iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
          uVar13 = local_19c;
          FUN_1005f1a0(*(short *)(iVar17 + iVar4) + 0xa8,*(short *)(iVar17 + iVar4 + 2) + 5,
                       auStack_178);
          iVar16 = (int)((uVar23 & 0xffffffff) << 1);
          if (*(short *)(iVar16 + iVar10) != 0) {
            FUN_10001dd0(auStack_178,(unsigned long long)*(unsigned int *)(uVar13 - 0x1900) + 0x114,
                         *(short *)((int)auStack_60 + iVar16));
            uVar13 = local_19c;
            FUN_1005f1a0(*(short *)(iVar17 + iVar4) + 0xb8,*(short *)(iVar17 + iVar4 + 2) + 5,
                         auStack_178);
          }
          iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
          FUN_10001dd0(auStack_178,(unsigned long long)*(unsigned int *)(uVar13 - 0x1900) + 0x11c,
                       *(char *)(*(int *)(iVar17 + iVar11) + 7));
          iVar16 = iVar17 + iVar4;
          uVar13 = local_19c;
          FUN_1005f1a0(*(short *)(iVar17 + iVar4) + 0xe8,*(short *)(iVar16 + 2) + 5,auStack_178);
          FUN_1002269c(local_168,*(short *)(iVar17 + iVar4) + 0x100,*(short *)(iVar16 + 2) + 8);
          cVar1 = *(char *)(*(int *)(iVar17 + iVar11) + 4);
          if ((*(char *)(*piVar8 + cVar1 * 6) == '\0') &&
             ((cVar1 != '\x1c' || (iVar17 = FUN_10039e24(*(int *)(iVar17 + iVar11)), iVar17 == 0))))
          {
            if ((*(unsigned short *)(*(int *)((int)((uVar23 & 0xffffffff) << 2) + iVar11) + 0xc) & 0x1000)
                == 0) {
              iVar17 = *piVar8 + *(char *)(*(int *)((int)((uVar23 & 0xffffffff) << 2) + iVar11) + 4)
                                 * 6;
              if (*(char *)(iVar17 + 1) == '\0') {
                if (*(char *)(*piVar8 + *(char *)(*(int *)((int)((uVar23 & 0xffffffff) << 2) +
                                                          iVar11) + 4) * 6 + 2) != '\0') {
                  FUN_1004602c(8,*puVar6,puVar6[1],local_168[0],0x24,0xf);
                }
              }
              else if (*(char *)(iVar17 + 2) == '\0') {
                FUN_1004602c(8,**(int **)(uVar13 - 0x132c),
                             *(int *)(*(int *)(uVar13 - 0x132c) + 4),local_168[0],0x24,0xf);
              }
              else {
                FUN_1004602c(8,**(int **)(uVar13 - 0x1330),
                             (*(int **)(uVar13 - 0x1330))[1],local_168[0],0x24,0xf);
              }
            }
            else {
              FUN_1004602c(8,**(int **)(uVar13 - 0x1538),
                           (*(int **)(uVar13 - 0x1538))[1],local_168[0],0x24,0xf);
            }
          }
          else {
            FUN_1004602c(8,**(int **)(uVar13 - 0x1334),
                         *(int *)(*(int *)(uVar13 - 0x1334) + 4),local_168[0],0x24,0xf);
          }
          iVar17 = (int)((uVar23 & 0x3fffffff) << 2);
          uVar14 = FUN_1005d948(*(char *)(*(int *)(iVar17 + iVar11) + 4));
          FUN_1005f1a0(*(short *)(iVar17 + iVar4) + 0x130,*(short *)(iVar17 + iVar4 + 2) + 5,uVar14)
          ;
        }
        else {
          FUN_10079ee8(piVar15,0xffffffffffffffff,*(short *)(*puVar7 + 0x110),1);
          FUN_1007a018(piVar15,1,0,0,1);
          FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0xd8),0);
        }
      }
    }
  }
  return;
}










































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1005e698 Size: 252 bytes */
void FUN_1005e698()

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  unsigned long long uVar4;
  
  psVar1 = psRam10116360;
  piVar3 = piRam10115fc8;
  piVar2 = (int *)FUN_10117884(*piRam10115fc8 + (int)*(short *)(*(int *)*piRam10115fc8 + 0x308),
                               0x67726f75);
  if (piVar2 != (int *)0x0) {
    uVar4 = (unsigned long long)*psVar1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x738) + (int)piVar2,
                 (unsigned long long)(uVar4 < 2) - ((long long)(uVar4 << 0x20) >> 0x3f),1);
  }
  piVar3 = (int *)FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308),0x756e6772);
  if (piVar3 != (int *)0x0) {
    uVar4 = (unsigned long long)*psVar1;
    FUN_10117884((int)*(short *)(*piVar3 + 0x738) + (int)piVar3,
                 (unsigned long long)(uVar4 < 2) - ((long long)(uVar4 << 0x20) >> 0x3f),1);
  }
  return;
}

/* Address: 0x1005e794 Size: 48 bytes */
void FUN_1005e794()

{
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  return;
}

/* Address: 0x1005e7c4 Size: 148 bytes */
void FUN_1005e7c4()

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned long long uVar11;
  short sVar12;
  
  iVar10 = iRam101176f8;
  iVar9 = iRam101176f4;
  iVar8 = iRam101176f0;
  iVar7 = iRam101176ec;
  iVar6 = iRam10117640;
  iVar5 = iRam1011763c;
  iVar4 = iRam10117638;
  iVar3 = iRam10117634;
  psVar2 = psRam10116360;
  sVar12 = *psRam10115fd4;
  *psRam10116360 = sVar12;
  uVar11 = 0;
  if (0 < sVar12) {
    do {
      iVar1 = (int)((uVar11 & 0xffffffff) << 2);
      *(int *)(iVar1 + iVar10) = *(int *)(iVar1 + iVar6);
      iVar1 = (int)((uVar11 & 0x7fffffff) << 1);
      *(short *)(iVar1 + iVar7) = *(short *)(iVar1 + iVar5);
      *(short *)(iVar1 + iVar8) = *(short *)(iVar1 + iVar4);
      *(short *)(iVar1 + iVar9) = *(short *)(iVar1 + iVar3);
      sVar12 = (short)uVar11 + 1;
      uVar11 = (unsigned long long)sVar12;
    } while (sVar12 < *psVar2);
  }
  *puRam10117628 = *puRam10117644;
  return;
}

/* Address: 0x1005ea7c Size: 444 bytes */
void FUN_1005ea7c(short param_1)

{
  short *psVar1;
  int iVar2;
  int *ppuVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short local_10 [8];
  
  iVar2 = iRam101176f0;
  iVar6 = iRam101176ec;
  psVar1 = psRam10116360;
  ppuVar3 = 0 /* TVect base */;
  iVar4 = (int)param_1;
  if (*(short *)(iVar4 * 2 + iRam101176f0) == 0) {
    iVar6 = 0;
    if (0 < *psRam10116360) {
      do {
        if (*(short *)(iVar6 * 2 + iRam101176f0) != 0) {
          iVar6 = (int)*(short *)(iVar6 * 2 + iRam101176ec);
          break;
        }
        sVar8 = (short)iVar6 + 1;
        iVar6 = (int)sVar8;
      } while (sVar8 < *psRam10116360);
    }
    iVar4 = iVar4 * 2;
    *(short *)(iVar4 + iRam101176ec) = (short)iVar6;
    *(unsigned short *)(iVar4 + iVar2) = (unsigned short)(*(short *)(iVar4 + iVar2) == 0);
  }
  else {
    iVar7 = 0;
    do {
      local_10[iVar7] = 0;
      sVar8 = (short)iVar7 + 1;
      iVar7 = (int)sVar8;
    } while (sVar8 < 8);
    iVar7 = 0;
    if (0 < *psVar1) {
      do {
        sVar8 = *(short *)(iVar7 * 2 + iVar6);
        local_10[sVar8] = local_10[sVar8] + 1;
        sVar8 = (short)iVar7 + 1;
        iVar7 = (int)sVar8;
      } while (sVar8 < *psVar1);
    }
    if (local_10[*(short *)(iVar4 * 2 + iVar6)] != 1) {
      iVar7 = 0;
      do {
        if (local_10[iVar7] == 0) break;
        sVar8 = (short)iVar7 + 1;
        iVar7 = (int)sVar8;
      } while (sVar8 < 8);
      iVar4 = iVar4 * 2;
      *(unsigned short *)(iVar4 + iVar2) = (unsigned short)(*(short *)(iVar4 + iVar2) == 0);
      *(short *)(iVar4 + iVar6) = (short)iVar7;
    }
  }
  FUN_1005c2d4(1);
  FUN_1005dd84(0,0,0xffffffffffffffff);
  piVar5 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar3 - 0x636)) +
                               (int)*(short *)(**(int **)(*(int*)((char*)ppuVar3 - 0x636)) + 0x308),0x73746163);
  if (piVar5 != (int *)0x0) {
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x4d0));
  }
  FUN_1005e698();
  return;
}

/* Address: 0x1005ec38 Size: 236 bytes */
void FUN_1005ec38(short param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *ppuVar5;
  int *piVar6;
  unsigned long long uVar7;
  short sVar8;
  
  iVar4 = iRam101176f0;
  iVar3 = iRam101176ec;
  psVar2 = psRam10116360;
  ppuVar5 = 0 /* TVect base */;
  sVar1 = *(short *)(param_1 * 2 + iRam101176ec);
  uVar7 = 0;
  if (0 < *psRam10116360) {
    do {
      *(unsigned short *)((int)((uVar7 & 0xffffffff) << 1) + iVar4) =
           (unsigned short)(*(short *)((int)((uVar7 & 0xffffffff) << 1) + iVar3) == sVar1);
      sVar8 = (short)uVar7 + 1;
      uVar7 = (unsigned long long)sVar8;
    } while (sVar8 < *psVar2);
  }
  FUN_1005c2d4(0);
  FUN_1005dd84(0,0,0xffffffffffffffff);
  piVar6 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar5 - 0x636)) +
                               (int)*(short *)(**(int **)(*(int*)((char*)ppuVar5 - 0x636)) + 0x308),0x73746163);
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar6 + 0x4d0) + (int)piVar6);
  }
  FUN_1005e698();
  return;
}

/* Address: 0x1005ed24 Size: 208 bytes */
void FUN_1005ed24()

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *ppuVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  
  iVar3 = iRam101176f0;
  iVar2 = iRam101176ec;
  psVar1 = psRam10116360;
  ppuVar4 = 0 /* TVect base */;
  iVar6 = 0;
  if (0 < *psRam10116360) {
    do {
      *(short *)(iVar6 * 2 + iVar2) = 0;
      *(short *)(iVar6 * 2 + iVar3) = 1;
      sVar7 = (short)iVar6 + 1;
      iVar6 = (int)sVar7;
    } while (sVar7 < *psVar1);
  }
  FUN_1005c2d4(1);
  FUN_1005dd84(0,0,0xffffffffffffffff);
  piVar5 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar4 - 0x636)) +
                               (int)*(short *)(**(int **)(*(int*)((char*)ppuVar4 - 0x636)) + 0x308),0x73746163);
  if (piVar5 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar5 + 0x4d0) + (int)piVar5);
  }
  FUN_1005e698();
  return;
}

/* Address: 0x1005edf4 Size: 212 bytes */
void FUN_1005edf4()

{
  short *psVar1;
  int iVar2;
  short *puVar3;
  int *ppuVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  
  puVar3 = puRam101176f0;
  iVar2 = iRam101176ec;
  psVar1 = psRam10116360;
  ppuVar4 = 0 /* TVect base */;
  iVar6 = 0;
  if (0 < *psRam10116360) {
    do {
      *(short *)(iVar6 * 2 + iVar2) = (short)iVar6;
      puVar3[iVar6] = 0;
      sVar7 = (short)iVar6 + 1;
      iVar6 = (int)sVar7;
    } while (sVar7 < *psVar1);
  }
  *puVar3 = 1;
  FUN_1005c2d4(1);
  FUN_1005dd84(0,0,0xffffffffffffffff);
  piVar5 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar4 - 0x636)) +
                               (int)*(short *)(**(int **)(*(int*)((char*)ppuVar4 - 0x636)) + 0x308),0x73746163);
  if (piVar5 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar5 + 0x4d0) + (int)piVar5);
  }
  FUN_1005e698();
  return;
}

/* Address: 0x1005eec8 Size: 188 bytes */
void FUN_1005eec8(short param_1,short param_2,short param_3)

{
  int iVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if (param_1 < *psRam10116360) {
    iVar1 = *(int *)(param_1 * 4 + iRam101176f8);
    FUN_1000be58(*(char *)(iVar1 + 4),*(char *)(iVar1 + 6),*(char *)(iVar1 + 8),
                 *(char *)(iVar1 + 0xb),*(char *)(iVar1 + 7),*(char *)(iVar1 + 10)
                 ,param_2,param_3);
  }
  else {
    FUN_1000a9e4(param_2,param_3,0);
    FUN_1000aaa8(ZEXT48((*(int*)((char*)ppuVar2 - 0x640))) + 0x120,ZEXT48((*(int*)((char*)ppuVar2 - 0x640))) + 300);
  }
  return;
}

/* Address: 0x1005f32c Size: 64 bytes */
void FUN_1005f32c()

{
  int local_2c;
  int local_8 [2];
  
  FUN_10001908(local_8);
  *(int *)(*(int *)(local_2c + -0xb0) + 0x4c) = local_8[0];
  return;
}

/* Address: 0x1005f36c Size: 268 bytes */
int FUN_1005f36c(long long param_1)

{
  int *ppuVar1;
  long long uVar2;
  long long uVar3;
  int iVar4;
  unsigned char local_118 [280];
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100b19f4(local_118);
  if (local_118[(short)(local_118[0] - 3)] == 0x2e) {
    local_118[0] = local_118[0] - 4;
  }
  uVar2 = FUN_100b1b90(local_118,ZEXT48((*(int*)((char*)ppuVar1 - 0x632))) + 0x18,1);
  FUN_100b1c88(local_118,1,uVar2);
  uVar2 = FUN_100b1b90(local_118,ZEXT48((*(int*)((char*)ppuVar1 - 0x632))) + 0x1c,1);
  FUN_100b1c88(local_118,1,uVar2);
  uVar2 = FUN_10000420();
  FUN_10003450(0);
  uVar3 = FUN_100b1c84(local_118);
  iVar4 = FUN_10003540(param_1,uVar3);
  FUN_10003450(uVar2);
  return iVar4 != 0;
}

/* Address: 0x1005f478 Size: 148 bytes */
void FUN_1005f478()

{
  int iVar1;
  int uVar2;
  int local_24;
  
  uVar2 = FUN_10002238(0x44415420,(unsigned long long)uRam10115fd8 + 0x20);
  **(int **)(local_24 + -600) = uVar2;
  iVar1 = local_24;
  FUN_100db328();
  uVar2 = FUN_10002238(0x44415420,(unsigned long long)*(unsigned int *)(iVar1 + -0x18c8) + 0x28);
  **(int **)(local_24 + -0x254) = uVar2;
  iVar1 = local_24;
  FUN_100db328();
  uVar2 = FUN_10002238(0x44415420,(unsigned long long)*(unsigned int *)(iVar1 + -0x18c8) + 0x30);
  **(int **)(local_24 + -0x250) = uVar2;
  FUN_100db328();
  return;
}

/* Address: 0x1005f6e8 Size: 80 bytes */
void FUN_1005f6e8(int *param_1,short *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  *param_2 = pcVar1[1] * 10 + *pcVar1 * 100 + (short)pcVar1[2] + -0x14d0;
  *param_1 = *param_1 + 3;
  return;
}

/* Address: 0x1005f738 Size: 340 bytes */
short FUN_1005f738(long long param_1)

{
  char cVar1;
  char *pcVar2;
  int bVar3;
  int *piVar4;
  short uVar6;
  char *pcVar5;
  char *pcVar7;
  short local_20 [2];
  char *local_1c [7];
  
  local_20[0] = 0;
  piVar4 = (int *)FUN_10051f98(0x47465820,param_1,1);
  bVar3 = false;
  if (piVar4 == (int *)0x0) {
    local_20[0] = 0;
  }
  else {
    uVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xb8));
    pcVar5 = (char *)FUN_100f1640(uVar6);
    if (pcVar5 != (char *)0x0) {
      local_1c[0] = pcVar5;
      FUN_10052490(piVar4,pcVar5,uVar6);
      do {
        cVar1 = *local_1c[0];
        while (cVar1 != '#') {
          cVar1 = local_1c[0][1];
          local_1c[0] = local_1c[0] + 1;
        }
        pcVar7 = local_1c[0] + 2;
        pcVar2 = local_1c[0] + 1;
        local_1c[0] = pcVar7;
        if (*pcVar2 == 'D') {
          FUN_1005f6e8(local_1c,local_20);
          bVar3 = true;
        }
        else if (*pcVar2 == 'E') {
          bVar3 = true;
        }
      } while (!bVar3);
      FUN_100ef580(pcVar5);
    }
    FUN_100523a8(piVar4,1);
  }
  return local_20[0];
}

/* Address: 0x1005f88c Size: 144 bytes */
void FUN_1005f88c(int *param_1,short *param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 1);
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + *(short *)(*(int*)((char*)ppuVar1 - 0x92));
  param_2[1] = param_2[1] + *(short *)(*(int*)((char*)ppuVar1 - 0x91));
  return;
}

/* Address: 0x1005f97c Size: 152 bytes */
void FUN_1005f97c(int *param_1,long long param_2)

{
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 2);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 4);
  *param_1 = *param_1 + 1;
  FUN_1005f6e8(param_1,param_2 + 6);
  *param_1 = *param_1 + 1;
  return;
}

/* Address: 0x1005fa94 Size: 508 bytes */

void FUN_1005fa94(long long param_1,short param_2,short param_3)

{
  char cVar1;
  char *pcVar2;
  short uVar4;
  int *piVar3;
  short uVar5;
  int local_124;
  char *local_60;
  
  piVar3 = piRam1011734c;
  *puRam10117658 = param_2;
  *puRam1011765c = param_3;
  uVar4 = FUN_100014b8();
  piVar3 = *(int **)(*(int *)(*piVar3 + 0x88) + 0x148);
  FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2b8));
  piVar3 = (int *)FUN_10051f98(0x47465820,param_1,1);
  if (piVar3 == (int *)0x0) {
    FUN_10000318(**(short **)(local_124 + -0xb4));
    piVar3 = (int *)FUN_10051f98(0x47465820,param_1,1);
    if (piVar3 == (int *)0x0) {
      return;
    }
  }
  uVar5 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xb8));
  local_60 = (char *)FUN_100f1640(uVar5);
  if (local_60 == (char *)0x0) {
    FUN_100523a8(piVar3,1);
    FUN_10000318(uVar4);
    return;
  }
  FUN_10052490(piVar3,local_60,uVar5);
  do {
    cVar1 = *local_60;
    pcVar2 = local_60;
    while (cVar1 != '#') {
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    local_60 = pcVar2 + 2;
  } while (0x12 < (int)pcVar2[1] - 0x42U);
  return;
}

/* Address: 0x10061354 Size: 344 bytes */

void FUN_10061354(short *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int uVar4;
  int *ppuVar5;
  char cVar6;
  int **local_4c;
  int local_20;
  int local_1c;
  
  uVar4 = FUN_10116698;
  piVar3 = piRam101163b0;
  piVar2 = piRam10115fe8;
  ppuVar5 = 0 /* TVect base */;
  if (*piRam101163b0 != 0) {
    *piRam10115fe8 = *piRam101163b0 + 0x80;
  }
  piVar1 = (int *)*piVar3;
  if (piVar1 == (int *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
    ppuVar5 = local_4c;
  }
  if (cVar6 != '\0') {
    if (param_1 == (short *)0x0) {
      local_20 = *(int *)(*(int*)((char*)ppuVar5 - 0x62b));
      local_1c = *(int *)((int)(*(int*)((char*)ppuVar5 - 0x62b)) + 4);
    }
    else {
      local_20 = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_1c = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    if (*(int *)(*piVar3 + 0xa4) == 0) {
      FUN_10009b48(*piVar2,((short)((unsigned int)local_20 >> 16)),((short)local_20),((short)((unsigned int)local_1c >> 16)),((short)local_1c),uVar4,
                   ((short)((unsigned int)local_20 >> 16)),((short)local_20));
      FUN_1009142c();
    }
    else {
      FUN_10009b48(*piVar2,((short)((unsigned int)local_20 >> 16)),((short)local_20),((short)((unsigned int)local_1c >> 16)),((short)local_1c),uVar4,
                   ((short)((unsigned int)local_20 >> 16)),((short)local_20));
    }
  }
  return;
}






















































































































































































































































/* Address: 0x100614ac Size: 1236 bytes */
void FUN_100614ac(short *param_1,short param_2)

{
  int _local_40;
  int _local_44;
  short sVar1;
  int *piVar2;
  int bVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int uVar10;
  int uVar11;
  int *ppuVar12;
  char cVar15;
  int iVar13;
  int iVar14;
  short sVar16;
  short *psVar17;
  short sVar18;
  int iVar19;
  long long uVar20;
  unsigned long long uVar21;
  int **local_84;
  int local_54;
  int uStack_50;
  int local_4c;
  int local_48;
  short local_44;
  short sStack_42;
  short local_40;
  short local_3e;
  
  uVar11 = uRam10117684;
  uVar10 = uRam10117668;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  piVar7 = piRam10117354;
  piVar2 = piRam101163b0;
  iVar6 = iRam10116000;
  psVar5 = psRam10115ff4;
  piVar4 = piRam10115fe8;
  ppuVar12 = 0 /* TVect base */;
  if (*piRam101163b0 != 0) {
    *piRam10115fe8 = *piRam101163b0 + 0x80;
  }
  piVar2 = (int *)*piVar2;
  if (piVar2 == (int *)0x0) {
    cVar15 = '\0';
  }
  else {
    cVar15 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
    ppuVar12 = local_84;
  }
  if (cVar15 != '\0') {
    psVar17 = psVar5;
    if (param_1 != (short *)0x0) {
      psVar17 = param_1;
    }
    local_44 = (short)((unsigned int)*(int *)psVar17 >> 0x10);
    sStack_42 = (short)*(int *)psVar17;
    local_40 = (short)((unsigned int)*(int *)(psVar17 + 2) >> 0x10);
    local_3e = (short)*(int *)(psVar17 + 2);
    _local_44 = CONCAT22(local_44 + -3,sStack_42 + -3);
    _local_40 = CONCAT22(local_40 + 4,local_3e + 4);
    if (param_1 == (short *)0x0) {
      local_4c = *(int *)psVar5;
      local_48 = *(int *)(psVar5 + 2);
      FUN_100226b0(&local_54,0,0,0x70,0x9c);
    }
    else {
      local_54 = *(int *)param_1;
      uStack_50 = *(int *)(param_1 + 2);
      local_4c = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_48 = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    bVar3 = false;
    uVar20 = 0;
    if ((*(int *)((*(int*)((char*)ppuVar12 - 0x66f)) + 0x90) != 0) &&
       (iVar13 = *(int *)(*(int *)((*(int*)((char*)ppuVar12 - 0x66f)) + 0x90) + 0x10), iVar13 != 0)) {
      uVar20 = FUN_10001290(iVar13);
    }
    if (((int)uVar20 == 0) || (iVar13 = FUN_10001d70(uVar20), iVar13 == 0)) {
      bVar3 = true;
    }
    else {
      FUN_10003468(uVar20);
    }
    if (bVar3) {
      FUN_100462c8(7);
      FUN_10039ec8(*(short *)(*piVar9 + 0x110));
    }
    FUN_100451f4(7);
    if (*(short *)(*piVar9 + 0x124) == 0) {
      FUN_10009b48(uVar11,((short)((unsigned int)local_4c >> 16)),((short)local_4c),((short)((unsigned int)local_48 >> 16)),((short)local_48),*piVar4,
                   ((short)((unsigned int)local_4c >> 16)),((short)local_4c));
    }
    else {
      FUN_10047cbc(*piVar4,&local_4c,0xff);
      FUN_10009d38(uVar11,((short)((unsigned int)local_4c >> 16)),((short)local_4c),((short)((unsigned int)local_48 >> 16)),((short)local_48),*piVar4,
                   ((short)((unsigned int)local_4c >> 16)),((short)local_4c));
    }
    FUN_1004530c(7);
    iVar13 = 0;
    if (0 < *(short *)(*piVar9 + 0x810)) {
      do {
        iVar19 = *piVar9 + iVar13 * 0x20;
        sVar1 = *(short *)(iVar19 + 0x812);
        sVar18 = *(short *)(iVar19 + 0x814);
        uVar21 = (unsigned long long)sVar18;
        if (((int)local_44 <= (int)sVar1) && ((int)sVar1 < (int)local_40 + (int)local_44)) {
          if ((((int)sStack_42 <= (int)sVar18) && ((int)sVar18 < (int)sStack_42 + (int)local_3e)) &&
             (((*(short *)(*piVar9 + 0x124) == 0 ||
               ((*(unsigned int *)(*piVar7 + (int)(((uVar21 & 0x1fffffff) * 8 - uVar21 & 0xffffffff) << 4) +
                          (int)sVar1) >> 0x1d & 1) != 0)) &&
              (iVar19 = *piVar9 + iVar13 * 0x20,
              ((int)*(short *)(iVar19 + 0x830) & 1 << ((int)*(short *)(*piVar9 + 0x110) & 0x3fU)) !=
              0)))) {
            if (*(char *)(iVar19 + 0x82a) == '\x01') {
              iVar19 = 2;
            }
            else if ((*(unsigned int *)(*piVar8 + (int)(((uVar21 & 0x1fffffff) * 8 - uVar21 & 0xffffffff) <<
                                               5) + (int)(((long long)sVar1 & 0xffffffffU) << 1)) >>
                      0x16 & 1) == 0) {
              if (*(short *)(*piVar9 + iVar13 * 0x20 + 0x82e) == 0) {
                sVar18 = 0;
              }
              else {
                sVar18 = 3;
              }
              iVar19 = (int)sVar18;
            }
            else {
              iVar19 = 1;
            }
            sVar18 = (short)((uVar21 & 0xffffffff) << 1);
            sVar16 = sVar18 + -1;
            sVar1 = (short)(((short)((short)(((long long)sVar1 & 0xffffffffU) << 1) + -1) + 4 >> 3)
                           << 3);
            FUN_100462c8(9);
            FUN_100451f4(9);
            iVar14 = iVar19 * 8 + iVar6;
            FUN_10009d38(uVar10,*(short *)(iVar19 * 8 + iVar6),*(short *)(iVar14 + 2),
                         *(short *)(iVar14 + 4),*(short *)(iVar14 + 6),*piVar4,sVar1,
                         sVar16);
            if (iVar13 == param_2) {
              FUN_1000a714(*piVar4,sVar1,sVar16,0xc,0);
              FUN_1000a714(*piVar4,sVar1,sVar18 + 8,0xc,0);
              FUN_1000a7cc(*piVar4,sVar1,sVar16,10,0);
              FUN_1000a7cc(*piVar4,sVar1 + 0xb,sVar16,10,0);
            }
            FUN_1004530c(9);
          }
        }
        iVar13 = (int)(short)((short)iVar13 + 1);
      } while (iVar13 < *(short *)(*piVar9 + 0x810));
    }
  }
  return;
}

/* Address: 0x10061a98 Size: 1936 bytes */
void FUN_10061a98(short *param_1,short param_2,short param_3)

{
  int *piVar1;
  int bVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int uVar6;
  int uVar7;
  int *ppuVar8;
  char cVar11;
  int iVar9;
  int iVar10;
  int iVar12;
  short sVar13;
  unsigned short uVar14;
  short sVar15;
  unsigned short uVar16;
  long long lVar17;
  long long unaff_r24;
  long long unaff_r25;
  int iVar18;
  long long uVar19;
  int iVar20;
  int **local_a4;
  int local_74;
  int uStack_70;
  short local_6c [4];
  short local_64;
  short local_62;
  short local_60 [2];
  int local_5c;
  int local_58;
  short local_54;
  short local_52;
  short local_50 [24];
  int uStack_20;
  int uStack_1c;
  
  uVar7 = uRam10117684;
  uVar6 = uRam10117668;
  piVar5 = piRam1011735c;
  piVar1 = piRam101163b0;
  iVar10 = iRam10116008;
  piVar4 = piRam10115fe8;
  ppuVar8 = 0 /* TVect base */;
  uStack_20 = (int)unaff_r24;
  uStack_1c = (int)unaff_r25;
  local_54 = 0;
  if (*piRam101163b0 != 0) {
    *piRam10115fe8 = *piRam101163b0 + 0x80;
  }
  piVar1 = (int *)*piVar1;
  if (piVar1 == (int *)0x0) {
    cVar11 = '\0';
  }
  else {
    cVar11 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
    ppuVar8 = local_a4;
  }
  if (cVar11 != '\0') {
    if (param_1 == (short *)0x0) {
      local_5c = *(int *)(*(int*)((char*)ppuVar8 - 0x62b));
      local_58 = *(int *)((int)(*(int*)((char*)ppuVar8 - 0x62b)) + 4);
      FUN_100226b0(&local_74,0,0,0x70,0x9c);
    }
    else {
      local_74 = *(int *)param_1;
      uStack_70 = *(int *)(param_1 + 2);
      local_5c = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_58 = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    bVar2 = false;
    uVar19 = 0;
    if ((*(int *)((*(int*)((char*)ppuVar8 - 0x66f)) + 0x90) != 0) &&
       (iVar9 = *(int *)(*(int *)((*(int*)((char*)ppuVar8 - 0x66f)) + 0x90) + 0x10), iVar9 != 0)) {
      uVar19 = FUN_10001290(iVar9);
    }
    if (((int)uVar19 == 0) || (iVar9 = FUN_10001d70(uVar19), iVar9 == 0)) {
      bVar2 = true;
    }
    else {
      FUN_10003468(uVar19);
    }
    if (bVar2) {
      FUN_100462c8(7);
      FUN_10039ec8(*(short *)(*piVar5 + 0x110));
    }
    FUN_100451f4(7);
    if (*(short *)(*piVar5 + 0x124) == 0) {
      FUN_10009b48(uVar7,((short)((unsigned int)local_5c >> 16)),((short)local_5c),((short)((unsigned int)local_58 >> 16)),((short)local_58),*piVar4,
                   ((short)((unsigned int)local_5c >> 16)),((short)local_5c));
    }
    else {
      FUN_10047cbc(*piVar4,&local_5c,0xff);
      FUN_10009d38(uVar7,((short)((unsigned int)local_5c >> 16)),((short)local_5c),((short)((unsigned int)local_58 >> 16)),((short)local_58),*piVar4,
                   ((short)((unsigned int)local_5c >> 16)),((short)local_5c));
    }
    FUN_1004530c(7);
    iVar20 = 0;
    iVar9 = (int)param_2;
    if (0 < *(short *)(*piVar5 + 0x1602)) {
      do {
        if ((int)*(char *)(*piVar5 + iVar20 * 0x42 + 0x1619) == (int)*(short *)(*piVar5 + 0x110)) {
          if (param_3 == -1) {
            FUN_10047de8(iVar20,local_6c,local_60);
            iVar12 = local_60[0] + 1;
joined_r0x10061d7c:
            if ((4 < iVar12) && (iVar20 != iVar9)) goto LAB_10061e90;
          }
          else if (-1 < param_3) {
            FUN_10047de8(iVar20,local_6c,local_60);
            iVar12 = (int)param_3 + (int)local_60[0];
            goto joined_r0x10061d7c;
          }
          iVar12 = *piVar5 + iVar20 * 0x42;
          if (*(char *)(iVar12 + 0x1631) < '\x01') {
            sVar13 = 3;
          }
          else {
            sVar13 = 0;
          }
          iVar18 = (int)sVar13;
          sVar3 = *(short *)(iVar12 + 0x1604) * 2;
          uVar14 = sVar3 - 2;
          sVar15 = *(short *)(iVar12 + 0x1606) * 2;
          if ((-1 < iVar9) && (iVar9 == iVar20)) {
            if (sVar13 == 0) {
              sVar13 = 4;
            }
            else {
              sVar13 = 6;
            }
            iVar18 = (int)sVar13;
            unaff_r25 = (long long)(short)(sVar3 + 2);
            unaff_r24 = (long long)(short)(sVar15 + 2);
          }
          uVar16 = uVar14 & 7;
          if (uVar16 == 7) {
            uVar16 = 6;
          }
          FUN_100462c8(9);
          iVar12 = iVar18 * 8 + iVar10;
          FUN_10009d38(uVar6,*(short *)(iVar18 * 8 + iVar10),
                       *(short *)(iVar12 + 2) + uVar16 * *(short *)(iVar12 + 6),
                       *(short *)(iVar12 + 4),*(short *)(iVar12 + 6),*piVar4,
                       (short)(((int)(short)uVar14 >> 3) << 3),sVar15 + -1);
        }
LAB_10061e90:
        sVar13 = (short)iVar20 + 1;
        iVar20 = (int)sVar13;
      } while (sVar13 < *(short *)(*piVar5 + 0x1602));
    }
    if (-1 < iVar9) {
      iVar9 = *piVar5 + param_2 * 0x42;
      if (*(short *)(iVar9 + 0x1636) != 0) {
        if (*(short *)(iVar9 + 0x1638) == -2) {
          iVar9 = FUN_10034074(*(short *)(*piVar5 + 0x110),&local_52,local_50);
          local_54 = 1;
          if (iVar9 != 0) {
            local_62 = (short)(((long long)local_52 & 0xffffffffU) << 1);
            local_64 = (short)(((long long)local_50[0] & 0xffffffffU) << 1);
            FUN_10061980((long long)local_52,(long long)local_50[0],1);
            FUN_100479f4(7);
            FUN_1003a794(*piVar4,unaff_r25,unaff_r24,local_62,local_64,0,7);
          }
        }
        iVar9 = *piVar5 + (param_2 * 0x20 + (int)param_2) * 2;
        if ((*(short *)(iVar9 + 0x1636) != 0) && (*(short *)(iVar9 + 0x1638) != -2)) {
          iVar9 = FUN_1002be50(*(short *)(iVar9 + 0x1638),*(short *)(iVar9 + 0x163a));
          iVar9 = *piVar5 + iVar9 * 0x42;
          local_62 = *(short *)(iVar9 + 0x1604) * 2;
          uVar14 = local_62 - 2;
          sVar13 = *(short *)(iVar9 + 0x1606) * 2;
          local_62 = local_62 + 2;
          local_64 = sVar13 + 2;
          if (*(char *)(iVar9 + 0x1631) < '\x01') {
            sVar15 = 5;
          }
          else {
            sVar15 = 1;
          }
          uVar16 = uVar14 & 7;
          if (uVar16 == 7) {
            uVar16 = 6;
          }
          iVar20 = ((int)(short)uVar14 >> 3) << 3;
          lVar17 = (long long)(short)iVar20;
          FUN_100462c8(9,iVar9,iVar20);
          iVar9 = sVar15 * 8 + iVar10;
          FUN_10009d38(uVar6,*(short *)(sVar15 * 8 + iVar10),
                       *(short *)(iVar9 + 2) + uVar16 * *(short *)(iVar9 + 6),
                       *(short *)(iVar9 + 4),*(short *)(iVar9 + 6),*piVar4,lVar17,sVar13 + -1);
          FUN_100479f4(7);
          FUN_1003a794(*piVar4,unaff_r25,unaff_r24,local_62,local_64,0,7);
        }
      }
      FUN_10047de8((int)param_2,local_6c,local_60);
      iVar9 = 0;
      if (0 < local_60[0]) {
        do {
          iVar20 = *piVar5 + local_6c[iVar9] * 0x42;
          local_62 = *(short *)(iVar20 + 0x1604) * 2;
          uVar16 = local_62 - 2;
          sVar13 = *(short *)(iVar20 + 0x1606) * 2;
          local_62 = local_62 + 2;
          local_64 = sVar13 + 2;
          uVar14 = uVar16 & 7;
          if (uVar14 == 7) {
            uVar14 = 6;
          }
          iVar20 = ((int)(short)uVar16 >> 3) << 3;
          lVar17 = (long long)(short)iVar20;
          FUN_100462c8(9,iVar20);
          FUN_10009d38(uVar6,*(short *)(iVar10 + 0x10),
                       *(short *)(iVar10 + 0x12) + uVar14 * *(short *)(iVar10 + 0x16),
                       *(short *)(iVar10 + 0x14),*(short *)(iVar10 + 0x16),*piVar4,lVar17,
                       sVar13 + -1);
          FUN_100479f4(8);
          FUN_1003a794(*piVar4,unaff_r25,unaff_r24,local_62,local_64,0,8);
          sVar13 = (short)iVar9 + 1;
          iVar9 = (int)sVar13;
        } while (sVar13 < local_60[0]);
      }
    }
    iVar10 = FUN_10034074(*(short *)(*piVar5 + 0x110),&local_62,&local_64);
    if ((iVar10 != 0) && (local_54 == 0)) {
      FUN_10061980(local_62,local_64,0);
    }
  }
  return;
}









































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10062228 Size: 896 bytes */
void FUN_10062228(long long param_1,int param_2)

{
  int *piVar1;
  unsigned short uVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int uVar8;
  char cVar11;
  int iVar9;
  short sVar10;
  short sVar12;
  unsigned short uVar13;
  int iVar14;
  int iVar15;
  unsigned long long uVar16;
  
  uVar8 = uRam10117668;
  piVar7 = piRam1011735c;
  piVar6 = piRam10117354;
  piVar1 = piRam101163b0;
  piVar5 = piRam10115fe8;
  iVar4 = iRam10115fe4;
  iVar15 = *piRam1011735c;
  if (((*(short *)(iVar15 + 0x124) == 0) ||
      (*(short *)(*(short *)(iVar15 + 0x110) * 2 + iVar15 + 0xd0) == 0)) ||
     (*(short *)(iVar15 + 0x15a) != 0)) {
    if (*piRam101163b0 != 0) {
      *piRam10115fe8 = *piRam101163b0 + 0x80;
    }
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
    }
    if ((cVar11 != '\0') && (iVar15 = 0, 0 < *(short *)(*piVar7 + 0x1602))) {
      do {
        iVar14 = *piVar7 + iVar15 * 0x42;
        sVar10 = *(short *)(iVar14 + 0x1604);
        uVar16 = (unsigned long long)*(short *)(iVar14 + 0x1606);
        if (*(short *)(*piVar7 + 0x124) == 0) {
LAB_100623c0:
          sVar3 = (short)((uVar16 & 0xffffffff) << 1);
          uVar13 = sVar10 * 2 - 1;
          uVar2 = uVar13 & 7;
          sVar10 = ((short)uVar13 >> 3) * 8;
          if (*(char *)(param_2 + iVar15) == -1) {
            iVar14 = -1;
          }
          else if (*(char *)(param_2 + iVar15) == '\x0f') {
            iVar14 = 8;
          }
          else {
            iVar14 = (int)*(char *)(param_2 + iVar15);
          }
          if (iVar14 < 0) {
            FUN_100462c8(9);
            FUN_100451f4(9);
            FUN_10009d38(uVar8,*(short *)(iVar4 + 0x40),
                         *(short *)(iVar4 + 0x42) + uVar2 * *(short *)(iVar4 + 0x46),
                         *(short *)(iVar4 + 0x44),*(short *)(iVar4 + 0x46),*piVar5,sVar10,
                         sVar3 + -1);
            FUN_1004530c(9);
            FUN_100479f4(0xff);
            sVar12 = uVar2 + sVar10 + 1;
            sVar10 = uVar2 + sVar10 + 6;
            FUN_1003a794(*piVar5,sVar12,sVar3,sVar10,sVar3 + 5,0,0xff);
            FUN_1003a794(*piVar5,sVar12,sVar3 + 6,sVar10,sVar3,0,0xff);
          }
          else {
            FUN_100462c8(9);
            FUN_100451f4(9);
            iVar9 = iVar14 * 8 + iVar4;
            FUN_10009d38(uVar8,*(short *)(iVar14 * 8 + iVar4),
                         *(short *)(iVar9 + 2) + uVar2 * *(short *)(iVar9 + 6),
                         *(short *)(iVar9 + 4),*(short *)(iVar9 + 6),*piVar5,sVar10,sVar3 + -1)
            ;
            FUN_1004530c(9);
          }
        }
        else {
          iVar14 = *piVar6 + (int)(((uVar16 & 0x1fffffff) * 8 - uVar16 & 0xffffffff) << 4);
          if ((((*(unsigned int *)(iVar14 + sVar10) >> 0x1d & 1) != 0) ||
              ((*(unsigned int *)(iVar14 + (short)(sVar10 + 1)) >> 0x1d & 1) != 0)) ||
             (((*(unsigned int *)(iVar14 + sVar10 + 0x70) >> 0x1d & 1) != 0 ||
              ((*(unsigned int *)(iVar14 + (short)(sVar10 + 1) + 0x70) >> 0x1d & 1) != 0))))
          goto LAB_100623c0;
        }
        sVar10 = (short)iVar15 + 1;
        iVar15 = (int)sVar10;
      } while (sVar10 < *(short *)(*piVar7 + 0x1602));
    }
  }
  return;
}

/* Address: 0x100625a8 Size: 960 bytes */

void FUN_100625a8(long long param_1,short param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int uVar11;
  char cVar12;
  short sVar13;
  short sVar14;
  unsigned short uVar15;
  int iVar16;
  int iVar18;
  unsigned long long uVar17;
  int iVar20;
  unsigned long long uVar19;
  
  uVar11 = uRam10117668;
  piVar10 = piRam10117360;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  piVar7 = piRam10117354;
  piVar2 = piRam101163b0;
  iVar6 = iRam10116010;
  iVar5 = FUN_1011600c;
  piVar4 = piRam10115fe8;
  iVar18 = *piRam1011735c;
  if (((*(short *)(iVar18 + 0x124) == 0) ||
      (*(short *)(*(short *)(iVar18 + 0x110) * 2 + iVar18 + 0xd0) == 0)) ||
     (*(short *)(iVar18 + 0x15a) != 0)) {
    if (*piRam101163b0 != 0) {
      *piRam10115fe8 = *piRam101163b0 + 0x80;
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
    }
    if (cVar12 != '\0') {
      iVar18 = 0;
      do {
        iVar20 = 0;
        do {
          iVar16 = *piVar8 + iVar20 * 0xe0;
          *(unsigned int *)(iVar16 + iVar18 * 2) = *(unsigned int *)(iVar16 + iVar18 * 2) & 0xffefffff;
          sVar13 = (short)iVar20 + 1;
          iVar20 = (int)sVar13;
        } while (sVar13 < 0x9c);
        sVar13 = (short)iVar18 + 1;
        iVar18 = (int)sVar13;
      } while (sVar13 < 0x70);
      iVar18 = 0;
      if (0 < *(short *)(*piVar9 + 0x182)) {
        do {
          sVar14 = *(short *)(*piVar10 + iVar18 * 0x16);
          uVar17 = (unsigned long long)sVar14;
          sVar13 = *(short *)(*piVar10 + iVar18 * 0x16 + 2);
          uVar19 = (unsigned long long)sVar13;
          if (((((-1 < sVar14) && (-1 < sVar13)) &&
               ((iVar20 = (int)param_3,
                (*(unsigned int *)(*piVar8 + (int)(((uVar19 & 0x1fffffff) * 8 - uVar19 & 0xffffffff) << 5) +
                          (int)((uVar17 & 0xffffffff) << 1)) >> 0x14 & 1) == 0 || (-1 < iVar20))))
              && ((iVar16 = *piVar8 + (int)(((uVar19 & 0x1fffffff) * 8 - uVar19 & 0xffffffff) << 5),
                  iVar3 = (int)((uVar17 & 0xffffffff) << 1),
                  *(unsigned int *)(iVar16 + iVar3) = *(unsigned int *)(iVar16 + iVar3) | 0x100000,
                  *(short *)(*piVar9 + 0x124) == 0 ||
                  ((*(unsigned int *)(*piVar7 + (int)(((uVar19 & 0x1fffffff) * 8 - uVar19 & 0xffffffff) << 4
                                             ) + (int)sVar14) >> 0x1d & 1) != 0)))) &&
             ((param_5 == 0 ||
              (*(char *)(*piVar9 + (*(unsigned int *)(*piVar8 + (int)(((uVar19 & 0x1fffffff) * 8 - uVar19 &
                                                              0xffffffff) << 5) +
                                             (int)((uVar17 & 0xffffffff) << 1)) >> 0x18) + 0x711) !=
               '\n')))) {
            cVar12 = *(char *)(*piVar10 + iVar18 * 0x16 + 5);
            iVar16 = (int)cVar12;
            if (cVar12 == '\x0f') {
              iVar16 = 8;
            }
            if ((((param_4 == 0) || (iVar16 != *(short *)(*piVar9 + 0x110))) &&
                ((param_2 < 0 || ((int)*(char *)(*piVar10 + iVar18 * 0x16 + 5) == (int)param_2))))
               && ((iVar20 < 0 || (*(char *)(*piVar10 + iVar18 * 0x16 + 4) == iVar20)))) {
              sVar14 = (short)((uVar19 & 0xffffffff) << 1) + -1;
              uVar15 = (short)((uVar17 & 0xffffffff) << 1) - 1;
              sVar13 = ((short)uVar15 >> 3) << 3;
              if (sVar13 < 0) {
                sVar13 = 0;
              }
              if (sVar14 < 0) {
                sVar14 = 0;
              }
              FUN_100462c8(9);
              FUN_100451f4(9);
              sVar1 = *(short *)(iVar5 + 6);
              FUN_10009d38(uVar11,*(short *)(iVar16 * 4 + iVar6),
                           *(short *)(iVar16 * 4 + iVar6 + 2) + (uVar15 & 7) * sVar1,
                           *(short *)(iVar5 + 4),sVar1,*piVar4,sVar13,sVar14);
              FUN_1004530c(9);
            }
          }
          sVar13 = (short)iVar18 + 1;
          iVar18 = (int)sVar13;
        } while (sVar13 < *(short *)(*piVar9 + 0x182));
      }
    }
  }
  return;
}





































































































































































































































































































































































































































































































































































































/* Address: 0x10062968 Size: 2360 bytes */

void FUN_10062968(short *param_1,short param_2)

{
  int *piVar1;
  int bVar2;
  int *piVar3;
  int *piVar4;
  int uVar5;
  int uVar6;
  int uVar7;
  int *ppuVar8;
  char cVar11;
  int iVar9;
  int iVar10;
  short sVar12;
  short sVar13;
  unsigned long long uVar14;
  unsigned short uVar15;
  short sVar16;
  short sVar17;
  unsigned short uVar18;
  short sVar19;
  unsigned long long uVar20;
  int iVar21;
  long long uVar22;
  unsigned char bVar23;
  unsigned char bVar24;
  short sStack0000001e;
  int **local_16c;
  int local_13c;
  int uStack_138;
  int local_134;
  int local_130;
  short local_12c [4];
  short local_124 [2];
  short local_120 [100];
  short local_58;
  short local_56;
  short local_54 [2];
  short *local_50;
  int local_4c;
  
  uVar7 = uRam10117684;
  uVar6 = uRam10117668;
  uVar5 = uRam10117664;
  piVar4 = piRam1011735c;
  piVar1 = piRam101163b0;
  iVar10 = iRam10116008;
  piVar3 = piRam10115fe8;
  ppuVar8 = 0 /* TVect base */;
  local_58 = 0;
  if (*piRam101163b0 != 0) {
    *piRam10115fe8 = *piRam101163b0 + 0x80;
  }
  piVar1 = (int *)*piVar1;
  sStack0000001e = param_2;
  if (piVar1 == (int *)0x0) {
    cVar11 = '\0';
  }
  else {
    cVar11 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
    ppuVar8 = local_16c;
  }
  if (cVar11 != '\0') {
    if (param_1 == (short *)0x0) {
      local_134 = *(int *)(*(int*)((char*)ppuVar8 - 0x62b));
      local_130 = *(int *)((int)(*(int*)((char*)ppuVar8 - 0x62b)) + 4);
      FUN_100226b0(&local_13c,0,0,0x70,0x9c);
    }
    else {
      local_13c = *(int *)param_1;
      uStack_138 = *(int *)(param_1 + 2);
      local_134 = CONCAT22(*param_1 << 1,param_1[1] << 1);
      local_130 = CONCAT22(param_1[2] << 1,param_1[3] << 1);
    }
    bVar2 = false;
    uVar22 = 0;
    if ((*(int *)((*(int*)((char*)ppuVar8 - 0x66f)) + 0x90) != 0) &&
       (iVar9 = *(int *)(*(int *)((*(int*)((char*)ppuVar8 - 0x66f)) + 0x90) + 0x10), iVar9 != 0)) {
      uVar22 = FUN_10001290(iVar9);
    }
    if (((int)uVar22 == 0) || (iVar9 = FUN_10001d70(uVar22), iVar9 == 0)) {
      bVar2 = true;
    }
    else {
      FUN_10003468(uVar22);
    }
    if (bVar2) {
      FUN_100462c8(7);
      FUN_10039ec8(*(short *)(*piVar4 + 0x110));
    }
    FUN_100451f4(7);
    if (*(short *)(*piVar4 + 0x124) == 0) {
      FUN_10009b48(uVar7,((short)((unsigned int)local_134 >> 16)),((short)local_134),((short)((unsigned int)local_130 >> 16)),((short)local_130),*piVar3,
                   ((short)((unsigned int)local_134 >> 16)),((short)local_134));
    }
    else {
      FUN_10047cbc(*piVar3,&local_134,0xff);
      FUN_10009d38(uVar7,((short)((unsigned int)local_134 >> 16)),((short)local_134),((short)((unsigned int)local_130 >> 16)),((short)local_130),*piVar3,
                   ((short)((unsigned int)local_134 >> 16)),((short)local_134));
    }
    FUN_1004530c(7);
    iVar9 = 0;
    if (0 < *(short *)(*piVar4 + 0x1602)) {
      do {
        local_120[iVar9] = 0;
        sVar16 = (short)iVar9 + 1;
        iVar9 = (int)sVar16;
      } while (sVar16 < *(short *)(*piVar4 + 0x1602));
    }
    uVar20 = 0;
    if (0 < *(short *)(*piVar4 + 0x1602)) {
      do {
        iVar9 = (int)uVar20 * 0x42;
        if (((int)*(char *)(*piVar4 + iVar9 + 0x1619) == (int)*(short *)(*piVar4 + 0x110)) &&
           (iVar21 = (int)((uVar20 & 0xffffffff) << 1), *(short *)((int)local_120 + iVar21) == 0)) {
          *(short *)((int)local_120 + iVar21) = 1;
          FUN_10047de8(uVar20,local_12c,local_124);
          iVar9 = *piVar4 + iVar9;
          if (*(char *)(iVar9 + 0x1631) < '\x01') {
            sVar16 = 3;
          }
          else {
            sVar16 = 0;
          }
          iVar21 = (int)sVar16;
          if (*(short *)(*piVar4 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1) +
                        0x1636) != 0) {
            iVar21 = 2;
          }
          if (0 < local_124[0]) {
            if (*(char *)(*piVar4 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1)
                         + 0x1631) < '\x01') {
              sVar16 = 5;
            }
            else {
              sVar16 = 1;
            }
            iVar21 = (int)sVar16;
          }
          sVar16 = *(short *)(iVar9 + 0x1604) * 2;
          uVar15 = sVar16 - 2;
          sVar12 = *(short *)(iVar9 + 0x1606) * 2;
          sVar16 = sVar16 + 2;
          sVar19 = sVar12 + 2;
          uVar18 = uVar15 & 7;
          if (uVar18 == 7) {
            uVar18 = 6;
          }
          FUN_100462c8(9);
          iVar9 = iVar21 * 8 + iVar10;
          FUN_10009d38(uVar6,*(short *)(iVar21 * 8 + iVar10),
                       *(short *)(iVar9 + 2) + uVar18 * *(short *)(iVar9 + 6),
                       *(short *)(iVar9 + 4),*(short *)(iVar9 + 6),*piVar3,
                       (short)(((int)(short)uVar15 >> 3) << 3),sVar12 + -1);
          iVar9 = *piVar4 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1);
          if (*(short *)(iVar9 + 0x1636) != 0) {
            if (*(short *)(iVar9 + 0x1638) == -2) {
              local_58 = 2;
            }
            iVar9 = *piVar4 + (int)uVar20 * 0x42;
            if ((*(short *)(iVar9 + 0x1636) != 0) && (*(short *)(iVar9 + 0x1638) != -2)) {
              iVar9 = FUN_1002be50(*(short *)(iVar9 + 0x1638),*(short *)(iVar9 + 0x163a));
              local_120[iVar9] = 1;
              iVar9 = *piVar4 + iVar9 * 0x42;
              sVar13 = *(short *)(iVar9 + 0x1604) * 2;
              uVar18 = sVar13 - 2;
              sVar12 = *(short *)(iVar9 + 0x1606) * 2;
              if (*(char *)(iVar9 + 0x1631) < '\x01') {
                sVar17 = 5;
              }
              else {
                sVar17 = 1;
              }
              uVar15 = uVar18 & 7;
              if (uVar15 == 7) {
                uVar15 = 6;
              }
              FUN_100462c8(9);
              iVar9 = sVar17 * 8 + iVar10;
              FUN_10009d38(uVar6,*(short *)(sVar17 * 8 + iVar10),
                           *(short *)(iVar9 + 2) + uVar15 * *(short *)(iVar9 + 6),
                           *(short *)(iVar9 + 4),*(short *)(iVar9 + 6),*piVar3,
                           (short)(((int)(short)uVar18 >> 3) << 3),sVar12 + -1);
              FUN_100479f4(7);
              FUN_1003a794(*piVar3,sVar13 + 2,sVar12 + 2,sVar16,sVar19,0,7);
            }
          }
          iVar9 = 0;
          if (0 < local_124[0]) {
            do {
              uVar14 = (unsigned long long)local_12c[iVar9];
              *(short *)((int)local_120 + (int)((uVar14 & 0xffffffff) << 1)) = 1;
              iVar21 = *piVar4 + (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0xffffffff) << 1);
              sVar12 = *(short *)(iVar21 + 0x1604) * 2;
              uVar15 = sVar12 - 2;
              sVar13 = *(short *)(iVar21 + 0x1606) * 2;
              uVar18 = uVar15 & 7;
              if (uVar18 == 7) {
                uVar18 = 6;
              }
              FUN_100462c8(9);
              FUN_10009d38(uVar6,*(short *)(iVar10 + 0x10),
                           *(short *)(iVar10 + 0x12) + uVar18 * *(short *)(iVar10 + 0x16),
                           *(short *)(iVar10 + 0x14),*(short *)(iVar10 + 0x16),*piVar3,
                           (short)(((int)(short)uVar15 >> 3) << 3),sVar13 + -1);
              FUN_100479f4(8);
              FUN_1003a794(*piVar3,sVar12 + 2,sVar13 + 2,sVar16,sVar19,0,8);
              sVar12 = (short)iVar9 + 1;
              iVar9 = (int)sVar12;
            } while (sVar12 < local_124[0]);
          }
        }
        sVar16 = (short)uVar20 + 1;
        uVar20 = (unsigned long long)sVar16;
      } while (sVar16 < *(short *)(*piVar4 + 0x1602));
    }
    iVar10 = FUN_10034074(*(short *)(*piVar4 + 0x110),&local_56,local_54);
    if (iVar10 != 0) {
      if (local_58 == 0) {
        local_58 = 1;
      }
      bVar23 = (iVar10 == 0) << 1;
      if (iVar10 != 0) {
        uVar20 = (unsigned long long)local_58;
        bVar24 = (local_58 == 2) << 1;
        FUN_10061980(local_56,local_54[0],
                     (2 - ((2 < uVar20) + 2)) +
                     (unsigned short)(1 < uVar20 && (unsigned long long)(2 < uVar20) <= uVar20 - 2));
        if ((!(int)(bVar23 >> 1 & 1)) && ((int)(bVar24 >> 1 & 1))) {
          iVar10 = 0;
          local_4c = uVar5;
          local_50 = local_12c;
          do {
            iVar9 = *piVar4 + iVar10 * 0x42;
            if (((*(short *)(iVar9 + 0x1636) != 0) && (*(short *)(iVar9 + 0x1638) == -2)) &&
               ((int)*(char *)(iVar9 + 0x1619) == (int)*(short *)(*piVar4 + 0x110))) {
              sVar16 = *(short *)(iVar9 + 0x1604);
              sVar12 = *(short *)(iVar9 + 0x1606);
              FUN_100479f4(8);
              FUN_1003a794(*piVar3,sVar16 * 2 + 2,sVar12 * 2 + 2,local_56 << 1,local_54[0] << 1,0,8)
              ;
            }
            sVar16 = (short)iVar10 + 1;
            iVar10 = (int)sVar16;
          } while (sVar16 < 100);
        }
      }
    }
    if (-1 < sStack0000001e) {
      iVar10 = *piVar4 + sStack0000001e * 0x42;
      sVar16 = *(short *)(iVar10 + 0x1604) * 2;
      sVar12 = *(short *)(iVar10 + 0x1606) * 2;
      sVar19 = sVar16 + -3;
      sVar13 = sVar12 + -2;
      FUN_1000a714(*piVar3,sVar19,sVar13,0xb,0);
      FUN_1000a714(*piVar3,sVar19,sVar12 + 9,0xb,0);
      FUN_1000a7cc(*piVar3,sVar19,sVar13,0xb,0);
      FUN_1000a7cc(*piVar3,sVar16 + 8,sVar13,0xb,0);
    }
  }
  return;
}




































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100635e0 Size: 420 bytes */
void FUN_100635e0()

{
  int *piVar1;
  int iVar2;
  short sVar3;
  unsigned long long uVar4;
  int iVar5;
  int local_38;
  int local_34;
  short local_30;
  short local_2e;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  iVar2 = iRam10117688;
  piVar1 = piRam10117354;
  if (*(short *)(*piRam1011735c + 0x124) != 0) {
    uVar4 = (unsigned long long)uRam101176cc;
    FUN_10000870(&local_34,&local_38);
    FUN_10000888(*(int *)(iVar2 + 0x10),0);
    FUN_100b2268(uVar4);
    FUN_100021c0();
    FUN_100b2268(uVar4 + 0x5fa);
    FUN_100021c0();
    if (*(int *)(iVar2 + 0x10) != 0) {
      FUN_10009a98(*(int *)(iVar2 + 0x10));
    }
    FUN_1000a008(iVar2,0);
    FUN_100b2268(uVar4 + 0x5fa);
    FUN_100021c0();
    local_30 = 2;
    local_2e = 0;
    uVar4 = 0;
    do {
      local_28 = 0;
      local_26 = (short)((uVar4 & 0xffffffff) << 1);
      local_24 = 2;
      local_22 = local_26 + 2;
      iVar5 = 0;
      do {
        if ((*(unsigned int *)(*piVar1 + iVar5 * 0x70 + (int)uVar4) >> 0x1d & 1) != 0) {
          FUN_100b0578(&local_28);
          FUN_10002148();
        }
        FUN_100b065c(&local_28,&local_30);
        sVar3 = (short)iVar5 + 1;
        iVar5 = (int)sVar3;
      } while (sVar3 < 0x9c);
      sVar3 = (short)uVar4 + 1;
      uVar4 = (unsigned long long)sVar3;
    } while (sVar3 < 0x70);
    if (*(int *)(iVar2 + 0x10) != 0) {
      FUN_10009b00(*(int *)(iVar2 + 0x10));
    }
    FUN_10000888(local_34,local_38);
  }
  return;
}













































































































































































































































































































/* Address: 0x10063af8 Size: 1548 bytes */
void FUN_10063af8(int *param_1,short param_2,int param_3,long long param_4,
                 long long param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned short uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  unsigned long long uVar13;
  long long uVar14;
  char cVar16;
  char *pcVar15;
  short sVar18;
  unsigned int *puVar17;
  short sVar20;
  int *puVar19;
  unsigned long long uVar21;
  int iVar22;
  short sVar23;
  unsigned short uVar24;
  char *pcVar25;
  int iVar26;
  short sVar27;
  char *pcVar28;
  int *piStack00000018;
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  unsigned int local_118c;
  short local_1168;
  short local_1166;
  short local_1164;
  short local_1162;
  short local_1160 [256];
  short local_f60 [256];
  short local_d60 [256];
  short local_b60 [256];
  short local_960 [256];
  short local_760 [256];
  short local_560 [256];
  short local_360 [256];
  char local_160 [256];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  char local_50;
  
  piVar12 = piRam101176b8;
  piVar11 = piRam101176a8;
  piVar10 = piRam101176a4;
  piVar9 = piRam101176a0;
  piVar8 = piRam1011769c;
  piVar7 = piRam10117698;
  uStack00000024 = (int)param_4;
  uStack00000028 = (int)param_5;
  piStack00000018 = param_1;
  uStack00000020 = param_3;
  local_60 = FUN_10000720(0x3f4);
  if (local_60 != 0) {
    local_1168 = 0;
    local_1166 = 0;
    local_1164 = 0x138;
    local_1162 = 0xe0;
    uVar14 = FUN_100b0578(&local_1168);
    iVar26 = local_60;
    FUN_10000750(local_60,uVar14);
    FUN_10001c98(iVar26);
  }
  uVar13 = (unsigned long long)local_118c;
  iVar26 = 0;
  do {
    cVar16 = FUN_1005f230(1,3,1);
    local_160[iVar26] = cVar16;
    local_5c = iVar26 + 1;
    iVar26 = (int)(short)local_5c;
  } while ((short)local_5c < 0x100);
  sVar27 = 0;
  uVar21 = 0;
  iVar26 = (int)uVar13;
  piVar1 = *(int **)(iVar26 + -0x20c);
  local_58 = (int)param_4;
  piVar2 = *(int **)(iVar26 + -0x210);
  local_54 = (int)param_5;
  piVar3 = *(int **)(iVar26 + -0x214);
  do {
    iVar26 = (int)uVar21;
    cVar16 = *(char *)(*piVar11 + iVar26);
    if (cVar16 < '\x10') {
      sVar20 = *(short *)(*piVar12 + cVar16 * 2);
    }
    else {
      sVar20 = (short)*(char *)(*piVar11 + iVar26);
    }
    *(short *)((int)local_360 + (int)((uVar21 & 0xffffffff) << 1)) = sVar20;
    cVar16 = *(char *)(iVar26 + *piVar10);
    if (cVar16 < '\x10') {
      sVar20 = *(short *)(*piVar12 + cVar16 * 2);
    }
    else {
      sVar20 = (short)*(char *)(*piVar10 + iVar26);
    }
    *(short *)((int)local_560 + (int)((uVar21 & 0xffffffff) << 1)) = sVar20;
    cVar16 = *(char *)(iVar26 + *piVar9);
    if (cVar16 < '\x10') {
      sVar20 = *(short *)(*piVar12 + cVar16 * 2);
    }
    else {
      sVar20 = (short)*(char *)(*piVar9 + iVar26);
    }
    *(short *)((int)local_760 + (int)((uVar21 & 0xffffffff) << 1)) = sVar20;
    cVar16 = *(char *)(iVar26 + *piVar8);
    if (cVar16 < '\x10') {
      sVar20 = *(short *)(*piVar12 + cVar16 * 2);
    }
    else {
      sVar20 = (short)*(char *)(*piVar8 + iVar26);
    }
    iVar5 = (int)((uVar21 & 0x7fffffff) << 1);
    *(short *)((int)local_960 + iVar5) = sVar20;
    iVar22 = *piVar12;
    *(short *)((int)local_b60 + iVar5) =
         *(short *)(iVar22 + *(char *)(iVar26 + *piVar7) * 2);
    *(short *)((int)local_d60 + iVar5) =
         *(short *)(iVar22 + *(char *)(iVar26 + *piVar1) * 2);
    *(short *)((int)local_f60 + iVar5) =
         *(short *)(iVar22 + *(char *)(iVar26 + *piVar2) * 2);
    *(short *)((int)local_1160 + iVar5) =
         *(short *)(iVar22 + *(char *)(iVar26 + *piVar3) * 2);
    sVar20 = (short)uVar21 + 1;
    uVar21 = (unsigned long long)sVar20;
  } while (sVar20 < 0x100);
  iVar26 = FUN_10001d70(piStack00000018);
  piVar7 = piStack00000018;
  if (iVar26 != 0) {
    pcVar15 = (char *)FUN_10002cb8();
    uVar6 = *(unsigned short *)(*piVar7 + 4) & 0x7fff;
    sVar20 = 0;
    sVar18 = 0;
    iVar26 = 0;
    do {
      pcVar28 = pcVar15 + (short)uVar6;
      pcVar25 = pcVar28 + (short)uVar6;
      sVar18 = sVar18 + 1;
      if (0xf < sVar18) {
        local_50 = 1;
        FUN_10000888(uStack00000020,uStack00000024);
        sVar20 = sVar20 + 1;
        FUN_100b2268((unsigned long long)*(unsigned int *)(local_118c - 0x1d4) + 0x5fa);
        FUN_100021c0();
        FUN_100514d8(**(int **)(local_118c - 0x1924),sVar20 * 10);
        FUN_10000888(uStack00000028,0);
        sVar18 = 0;
      }
      puVar19 = (int *)(**(int **)(local_118c - 0x548) + iVar26 * 0xe0);
      puVar17 = (unsigned int *)(**(int **)(local_118c - 0x54c) + iVar26 * 0x70);
      sVar23 = 0;
      do {
        uVar24 = (unsigned short)(unsigned char)((unsigned int)*puVar19 >> 0x18);
        puVar19 = (int *)((int)puVar19 + 2);
        uVar4 = *puVar17;
        puVar17 = (unsigned int *)((int)puVar17 + 1);
        if ((uVar4 & 0x1f000000) != 0) {
          uVar24 = ((unsigned char)(uVar4 >> 0x18) & 0x1f) - 1;
        }
        iVar22 = (int)(short)uVar24;
        if ((iVar22 < 0x50) || (0x5f < iVar22)) {
          if ((uVar4 & 0x1f000000) == 0) {
            if (param_2 == 8) {
              if (local_360[iVar22] != 5) {
                *pcVar15 = (char)local_360[iVar22];
              }
              if (local_560[iVar22] != 5) {
                pcVar15[1] = (char)local_560[iVar22];
              }
              pcVar15 = pcVar15 + 2;
              if (local_760[iVar22] != 5) {
                *pcVar28 = (char)local_760[iVar22];
              }
              if (local_960[iVar22] != 5) {
                pcVar28[1] = (char)local_960[iVar22];
              }
              pcVar28 = pcVar28 + 2;
            }
            else {
              *pcVar15 = (char)local_560[iVar22] +
                         (char)(((long long)local_360[iVar22] & 0xffffffffU) << 4);
              pcVar15 = pcVar15 + 1;
              *pcVar28 = (char)local_960[iVar22] +
                         (char)(((long long)local_760[iVar22] & 0xffffffffU) << 4);
              pcVar28 = pcVar28 + 1;
            }
          }
          else if (param_2 == 8) {
            *pcVar15 = (char)local_b60[iVar22];
            pcVar15[1] = (char)local_d60[iVar22];
            pcVar15 = pcVar15 + 2;
            *pcVar28 = (char)local_f60[iVar22];
            pcVar28[1] = (char)local_1160[iVar22];
            pcVar28 = pcVar28 + 2;
          }
          else {
            *pcVar15 = (char)local_d60[iVar22] +
                       (char)(((long long)local_b60[iVar22] & 0xffffffffU) << 4);
            pcVar15 = pcVar15 + 1;
            *pcVar28 = (char)local_1160[iVar22] +
                       (char)(((long long)local_f60[iVar22] & 0xffffffffU) << 4);
            pcVar28 = pcVar28 + 1;
          }
        }
        else {
          if (param_2 == 8) {
            *pcVar15 = local_160[(short)(sVar27 + 1)];
            pcVar15[1] = local_160[(short)(sVar27 + 2)];
            pcVar15 = pcVar15 + 2;
            *pcVar28 = local_160[(short)(sVar27 + 3)];
            pcVar28[1] = local_160[(short)(sVar27 + 4)];
            pcVar28 = pcVar28 + 2;
          }
          else {
            *pcVar15 = local_160[(short)(sVar27 + 2)] + local_160[(short)(sVar27 + 1)] * '\x10';
            pcVar15 = pcVar15 + 1;
            *pcVar28 = local_160[(short)(sVar27 + 4)] + local_160[(short)(sVar27 + 3)] * '\x10';
            pcVar28 = pcVar28 + 1;
          }
          sVar27 = sVar27 + 4;
          if (0xff < sVar27) {
            sVar27 = 0;
          }
        }
        sVar23 = sVar23 + 1;
      } while (sVar23 < 0x70);
      sVar23 = (short)iVar26 + 1;
      iVar26 = (int)sVar23;
      pcVar15 = pcVar25;
    } while (sVar23 < 0x9c);
    local_50 = 1;
    FUN_10003468(piStack00000018);
  }
  return;
}

/* Address: 0x10064104 Size: 204 bytes */
void FUN_10064104()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100ef580(*puRam101176a8);
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x7f)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x80)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x81)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x82)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x83)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x84)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x85)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x7b)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x7c)));
  FUN_100ef580(*(int *)(*(int*)((char*)ppuVar1 - 0x7d)));
  return;
}

/* Address: 0x100641d0 Size: 712 bytes */
void FUN_100641d0()

{
  short uVar1;
  int iVar2;
  int uVar3;
  int *piVar4;
  int *ppuVar5;
  int *ppuVar6;
  int *piVar14;
  long long uVar7;
  long long uVar8;
  long long uVar9;
  long long uVar10;
  long long uVar11;
  long long uVar12;
  long long uVar13;
  unsigned long long uVar15;
  int **local_6c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  piVar14 = piRam1011734c;
  piVar4 = piRam10115f7c;
  ppuVar5 = 0 /* TVect base */;
  uVar15 = (unsigned long long)uRam101176cc;
  iVar2 = *piRam10115f7c;
  ppuVar6 = 0 /* TVect base */;
  if (iVar2 == 0) {
    FUN_10075894(*piRam1011734c);
    piVar14 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar5 - 0x79)) +
                                  (int)*(short *)(**(int **)(*(int*)((char*)ppuVar5 - 0x79)) + 200),0x3f2,
                                  *(int *)(*piVar14 + 0x88));
    FUN_100db26c();
    *piVar4 = (int)piVar14;
    FUN_10117884((int)piVar14 + (int)*(short *)(*piVar14 + 800));
    FUN_10117884((int)piVar14 + (int)*(short *)(*piVar14 + 0x4c8));
    ppuVar6 = local_6c;
  }
  uVar7 = FUN_1005f678(0x8a,6);
  uVar8 = FUN_1005f678(0x8a,5);
  uVar9 = FUN_1005f678(0x8a,4);
  uVar10 = FUN_1005f678(0x8a,3);
  uVar11 = FUN_1005f678(0x8a,2);
  uVar12 = FUN_1005f678(0x8a,1);
  uVar13 = FUN_1005f678(0x8a,0);
  FUN_10040408(uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7);
  local_38 = 0xca;
  local_34 = 0x3c;
  FUN_100513b4(*piVar4,&local_38,0x3f3);
  FUN_100514d8(*piVar4,0);
  FUN_10063784();
  *(int *)(*(int*)((char*)ppuVar6 - 0x7a)) = *(int *)(*(int*)((char*)ppuVar6 - 0x7b));
  FUN_100451f4(7);
  FUN_10000870(&local_3c,&local_40);
  uVar3 = *(int *)(local_6c[-0x87] + 0x10);
  FUN_10000888(uVar3,0);
  piVar14 = (int *)FUN_10001290(uVar3);
  uVar1 = *(short *)(*piVar14 + 0x20);
  FUN_100b2268(uVar15);
  FUN_100021c0();
  FUN_100b2268(uVar15 + 0x5fa);
  FUN_100021c0();
  FUN_10063af8(piVar14,uVar1,local_3c,local_40,uVar3);
  FUN_1004530c(7);
  FUN_10000888(local_3c,local_40);
  FUN_100514d8(*piVar4,100);
  FUN_10064104();
  if (iVar2 == 0) {
    FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0x738));
    *piVar4 = 0;
  }
  return;
}

/* Address: 0x10064e84 Size: 160 bytes */
void FUN_10064e84()

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *ppuVar4;
  unsigned long long uVar5;
  long long lVar6;
  
  piVar3 = piRam1011735c;
  ppuVar4 = 0 /* TVect base */;
  FUN_1002bcd8();
  FUN_1002bbd4();
  iVar1 = *piVar3;
  uVar5 = (unsigned long long)*(short *)(iVar1 + 0x110);
  iVar2 = (int)((uVar5 & 0xffffffff) << 1);
  lVar6 = (long long)
          *(short *)(iVar1 + (int)(((uVar5 & 0x3fffffff) * 4 + uVar5 & 0xffffffff) << 2) + 0x186) +
          ((long long)*(short *)((*(int*)((char*)ppuVar4 - 0x9d)) + iVar2) -
          (long long)*(short *)((*(int*)((char*)ppuVar4 - 0x9c)) + iVar2));
  if (lVar6 < 0) {
    lVar6 = 0;
  }
  if (30000 < (int)lVar6) {
    lVar6 = 30000;
  }
  iVar1 = *piVar3;
  *(short *)(iVar1 + *(short *)(iVar1 + 0x110) * 0x14 + 0x186) = (short)lVar6;
  return;
}

/* Address: 0x10064f24 Size: 680 bytes */
void FUN_10064f24()

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  char cVar8;
  int iVar6;
  int iVar7;
  int iVar9;
  short local_20 [16];
  
  iVar7 = iRam101174ac;
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  sVar1 = *(short *)(*piRam1011735c + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar9 = (int)sVar1;
      iVar4 = *piVar3 + iVar9 * 0x16;
      if (((int)*(char *)(iVar4 + 5) == (int)*(short *)(*piVar2 + 0x110)) &&
         (-1 < *(short *)(iVar9 * 0x16 + *piVar3))) {
        if (*(char *)(iVar4 + 7) < '\x03') {
          cVar8 = *(char *)(*piVar3 + iVar9 * 0x16 + 7);
        }
        else {
          cVar8 = '\x02';
        }
        iVar4 = *piVar3 + iVar9 * 0x16;
        if ((*(unsigned short *)(iVar4 + 0xc) & 0x1000) == 0) {
          iVar4 = *piVar3 + iVar9 * 0x16;
          *(char *)(iVar4 + 7) = *(char *)(iVar4 + 6) + cVar8;
        }
        else {
          *(char *)(iVar4 + 7) = cVar8 + '\x14';
        }
        iVar4 = iVar9 * 0x16;
        iVar6 = *piVar3 + iVar4;
        if ((*(short *)(iVar6 + 0x12) == *(short *)(*piVar3 + iVar4)) &&
           (*(short *)(iVar6 + 0x14) == *(short *)(iVar6 + 2))) {
          *(short *)(iVar6 + 0x12) = 0xffff;
          *(short *)(iVar4 + *piVar3 + 0x14) = 0xffff;
        }
      }
    } while (iVar9 != 0);
  }
  sVar1 = *(short *)(*piVar2 + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar9 = sVar1 * 0x16;
      iVar4 = *piVar3 + iVar9;
      if (((int)*(char *)(iVar4 + 5) == (int)*(short *)(*piVar2 + 0x110)) &&
         (*(char *)(iVar4 + 4) == '\x1c')) {
        iVar4 = FUN_10039d80(iVar4);
        if (iVar4 != 0) {
          FUN_1002122c(*(short *)(iVar9 + *piVar3),*(short *)(iVar9 + *piVar3 + 2),
                       local_20);
          iVar4 = 0;
          if (0 < local_20[0]) {
            do {
              iVar9 = *(int *)(iVar4 * 4 + iVar7);
              sVar5 = (short)*(char *)(iVar9 + 7) + (short)*(char *)(iVar9 + 6);
              if (0x62 < sVar5) {
                sVar5 = 99;
              }
              *(char *)(*(int *)(iVar4 * 4 + iVar7) + 7) = (char)sVar5;
              sVar5 = (short)iVar4 + 1;
              iVar4 = (int)sVar5;
            } while (sVar5 < local_20[0]);
          }
        }
      }
    } while (sVar1 != 0);
  }
  sVar1 = *(short *)(*piVar2 + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar4 = (int)sVar1;
      iVar7 = *piVar3 + iVar4 * 0x16;
      if (((int)*(char *)(iVar7 + 5) == (int)*(short *)(*piVar2 + 0x110)) &&
         ((cVar8 = *(char *)(iVar7 + 7), 'c' < cVar8 || (cVar8 < '\0')))) {
        *(char *)(*piVar3 + iVar4 * 0x16 + 7) = 99;
      }
    } while (iVar4 != 0);
  }
  return;
}

/* Address: 0x100651cc Size: 820 bytes */
void FUN_100651cc(short param_1)

{
  unsigned int uVar1;
  int iVar2;
  int bVar3;
  short *psVar4;
  unsigned int *puVar5;
  int *ppuVar6;
  int uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  unsigned long long uVar11;
  int local_8c;
  char auStack_68 [104];
  
  puVar5 = puRam1011735c;
  psVar4 = psRam10115ff8;
  ppuVar6 = 0 /* TVect base */;
  uVar11 = (unsigned long long)param_1;
  *(short *)(*puRam1011735c + 0x15a) =
       *(short *)(*puRam1011735c + (int)((uVar11 & 0xffffffff) << 1) + 0x148);
  sVar9 = 0;
  iVar10 = 0;
  bVar3 = true;
  do {
    iVar2 = *puVar5 + iVar10 * 2;
    if ((*(short *)(iVar2 + 0x138) != 0) && (*(short *)(iVar2 + 0xd0) == 0)) {
      sVar9 = sVar9 + 1;
      bVar3 = false;
    }
    sVar8 = (short)iVar10 + 1;
    iVar10 = (int)sVar8;
  } while (sVar8 < 8);
  if ((sVar9 == 1) && (*(short *)(*puVar5 + 0x124) != 0)) {
    sVar8 = 1;
  }
  else {
    sVar8 = 0;
  }
  *psVar4 = sVar8;
  if (bVar3) {
    *(short *)(*puVar5 + 0x15a) = 1;
  }
  if (1 < sVar9) {
    uVar1 = *puVar5;
    if (*(short *)(uVar1 + 0x124) == 0) goto LAB_1006530c;
    if (*(short *)(uVar1 + (int)((uVar11 & 0xffffffff) << 1) + 0x148) == 0) {
      *(short *)(uVar1 + 0x15a) = 0;
    }
  }
  if (*(short *)(*puVar5 + 0x124) != 0) {
    ppuVar6 = 0 /* TVect base */;
    FUN_10008e8c();
    FUN_10009520();
    if ((bVar3) || ((*(short *)(*puVar5 + 0x15a) != 0 && (*psVar4 == 0)))) {
      FUN_100635e0(uVar11);
    }
  }
LAB_1006530c:
  if ((bVar3) || ((*(short *)(*puVar5 + 0x15a) != 0 && (*psVar4 == 0)))) {
    FUN_10060608(1,1,0);
  }
  FUN_10001dd0(auStack_68,ZEXT48((*(int*)((char*)ppuVar6 - 0x623))) + 8,
               (unsigned long long)*puVar5 + ((uVar11 & 0x3fffffff) * 4 + uVar11 & 0x3fffffff) * 4);
  FUN_1003cac4(auStack_68,0);
  FUN_10040334();
  FUN_1004039c(0);
  FUN_1004039c(5);
  FUN_10027150();
  FUN_1002bdc4();
  if (*(short *)((int)((uVar11 & 0xffffffff) << 1) + *(int *)(local_8c + -0x324)) < 1) {
    FUN_10064850(0,0);
    FUN_10040334();
    FUN_1004039c(0x19);
    FUN_1004039c(0x32);
    FUN_1004039c(0x4b);
    FUN_1004039c(100);
    FUN_1003d4dc();
    iVar10 = **(int **)(local_8c + -0x554);
    *(char *)(iVar10 + 0x9a) = 1;
    uVar7 = FUN_10001a88();
    *(int *)(iVar10 + 0x9c) = uVar7;
  }
  else {
    FUN_100929a0();
    iVar10 = FUN_10032a24();
    if (iVar10 != 0) {
      FUN_10033548();
    }
    FUN_10033b4c();
    FUN_10064e84();
    FUN_1004a854();
    FUN_10021e20();
    FUN_10064f24();
    FUN_100557b8();
    FUN_1002bdc4();
    FUN_100558f8();
    FUN_100929a0();
    if (*(short *)(*puVar5 + *(short *)(*puVar5 + 0x110) * 0xc + 0x1142) != 0) {
      FUN_1004e384(0xffffffffffffffff,0,0,0);
    }
    FUN_1000c648(1);
    FUN_100929a0();
  }
  return;
}

/* Address: 0x10065b2c Size: 504 bytes */
void FUN_10065b2c(short param_1)

{
  int iVar1;
  int bVar2;
  short *psVar3;
  int *piVar4;
  int *ppuVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  
  piVar4 = piRam1011735c;
  psVar3 = psRam10115e88;
  ppuVar5 = 0 /* TVect base */;
  FUN_100219a8(0,1,1);
  *(short *)(*(int*)((char*)ppuVar5 - 0x62a)) = 0;
  bVar2 = true;
  if (*psVar3 != 0) {
    *psVar3 = 0;
    iVar7 = 0;
    do {
      iVar1 = *piVar4 + iVar7 * 2;
      if (*(short *)(iVar1 + 0x138) != 0) {
        *(short *)(iVar1 + 0x148) = 1;
      }
      sVar8 = (short)iVar7 + 1;
      iVar7 = (int)sVar8;
    } while (sVar8 < 8);
  }
  sVar8 = 0;
  iVar7 = 0;
  do {
    iVar1 = *piVar4 + iVar7 * 2;
    if ((*(short *)(iVar1 + 0x138) != 0) && (*(short *)(iVar1 + 0xd0) == 0)) {
      sVar8 = sVar8 + 1;
    }
    sVar6 = (short)iVar7 + 1;
    iVar7 = (int)sVar6;
  } while (sVar6 < 8);
  if (1 < sVar8) {
    if (*(short *)(*piVar4 + 0x124) != 0) {
      bVar2 = false;
    }
  }
  *(short *)(*piVar4 + 0x15a) = 1;
  FUN_10027150();
  FUN_10008e8c();
  FUN_1002bdc4();
  FUN_1002bcd8();
  FUN_1002bbd4();
  if (*(short *)(*piVar4 + 0x124) != 0) {
    FUN_10009520();
    if (*(short *)(*piVar4 + 0x124) != 0) {
      FUN_100635e0((int)param_1);
    }
  }
  *(short *)(*(int*)((char*)ppuVar5 - 0x621)) = param_1;
  FUN_1003d6c4();
  FUN_10021e20();
  FUN_10064f24();
  FUN_100557b8();
  FUN_10064e84();
  FUN_100558f8();
  FUN_1002c85c();
  FUN_10064850(0,0);
  if (bVar2) {
    iVar7 = *piVar4 + param_1 * 0x14;
    FUN_1000848c(*(short *)(iVar7 + 0x18a),*(short *)(iVar7 + 0x18c));
    FUN_10060608(1,1,0);
  }
  FUN_100657bc();
  return;
}

/* Address: 0x1006616c Size: 200 bytes */
void FUN_1006616c()

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x182) != 0) {
    sVar1 = *(short *)(*piRam1011735c + 0x182);
    do {
      sVar1 = sVar1 + -1;
      iVar6 = sVar1 * 0x16;
      iVar4 = *piVar3;
      iVar5 = iVar4 + iVar6;
      if ((((int)*(char *)(iVar5 + 5) == (int)*(short *)(*piVar2 + 0x110)) &&
          (*(short *)(iVar5 + 0xc) != 0)) &&
         (iVar4 = FUN_1002be50(*(short *)(iVar4 + iVar6),*(short *)(iVar5 + 2)),
         -1 < iVar4)) {
        iVar6 = *piVar3 + iVar6;
        *(unsigned short *)(iVar6 + 0xc) = *(unsigned short *)(iVar6 + 0xc) & 0xefff;
      }
    } while (sVar1 != 0);
  }
  return;
}

/* Address: 0x10066234 Size: 136 bytes */
int * FUN_10066234(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100cda40(param_1);
  *(short *)(param_1 + 0x2c) = 0;
  *(short *)((int)param_1 + 0xb2) = 0;
  *param_1 = (*(int*)((char*)ppuVar1 - 0x480));
  param_1[0x2d] = 0;
  *(short *)(param_1 + 0x2e) = 1;
  *(char *)((int)param_1 + 0xba) = 0;
  param_1[0x2c] = 0x40004;
  *param_1 = (*(int*)((char*)ppuVar1 - 0x620));
  return param_1;
}

/* Address: 0x100662bc Size: 8 bytes */
int FUN_100662bc()

{
  return uRam10116024;
}

/* Address: 0x100662c4 Size: 104 bytes */
int * FUN_100662c4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x61e));
  }
  return param_1;
}

/* Address: 0x1006632c Size: 8 bytes */
int FUN_1006632c()

{
  return uRam1011602c;
}

/* Address: 0x10066334 Size: 104 bytes */
int * FUN_10066334(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x61c));
  }
  return param_1;
}

/* Address: 0x1006639c Size: 8 bytes */
int FUN_1006639c()

{
  return uRam10116034;
}

/* Address: 0x100663a4 Size: 104 bytes */
int * FUN_100663a4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100662c4(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x61a));
  }
  return param_1;
}

/* Address: 0x1006640c Size: 8 bytes */
int FUN_1006640c()

{
  return uRam1011603c;
}

/* Address: 0x10066414 Size: 104 bytes */
int * FUN_10066414(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x618));
  }
  return param_1;
}

/* Address: 0x1006647c Size: 8 bytes */
int FUN_1006647c()

{
  return uRam10116044;
}

/* Address: 0x10066484 Size: 104 bytes */
int * FUN_10066484(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x616));
  }
  return param_1;
}

/* Address: 0x100664ec Size: 8 bytes */
int FUN_100664ec()

{
  return uRam1011604c;
}

/* Address: 0x100664f4 Size: 104 bytes */
int * FUN_100664f4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x614));
  }
  return param_1;
}

/* Address: 0x1006655c Size: 8 bytes */
int FUN_1006655c()

{
  return uRam10116054;
}

/* Address: 0x10066564 Size: 104 bytes */
int * FUN_10066564(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x612));
  }
  return param_1;
}

/* Address: 0x100665cc Size: 8 bytes */
int FUN_100665cc()

{
  return uRam1011605c;
}

/* Address: 0x100665d4 Size: 104 bytes */
int * FUN_100665d4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc),
     param_1 != (int *)0x0)) {
    FUN_100b2578(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x610));
  }
  return param_1;
}

/* Address: 0x1006663c Size: 8 bytes */
int FUN_1006663c()

{
  return uRam10116064;
}

/* Address: 0x10066644 Size: 188 bytes */
int * FUN_10066644(int *param_1)

{
  unsigned int uVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xe0),
     param_1 != (int *)0x0)) {
    FUN_100d4908(param_1);
    *param_1 = (*(int*)((char*)ppuVar2 - 0x60e));
    uVar1 = *(unsigned int *)((int)(*(int*)((char*)ppuVar2 - 0x60d)) + 4);
    *(int *)((int)param_1 + 0xda) = *(int *)(*(int*)((char*)ppuVar2 - 0x60d));
    *(unsigned int *)((int)param_1 + 0xde) = uVar1 & 0xffff0000;
    uVar1 = *(unsigned int *)((int)(*(int*)((char*)ppuVar2 - 0x60c)) + 4);
    param_1[0x35] = *(int *)(*(int*)((char*)ppuVar2 - 0x60c));
    param_1[0x36] = uVar1 & 0xffff0000;
    param_1[0x31] = 0;
    param_1[0x32] = 1;
    param_1[0x33] = 0xe;
    param_1[0x34] = 0xf;
  }
  return param_1;
}

/* Address: 0x10066700 Size: 8 bytes */
int FUN_10066700()

{
  return uRam10116074;
}

/* Address: 0x10066708 Size: 188 bytes */
int * FUN_10066708(int *param_1)

{
  unsigned int uVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xe0),
     param_1 != (int *)0x0)) {
    FUN_100d4ea4(param_1);
    *param_1 = (*(int*)((char*)ppuVar2 - 0x60a));
    uVar1 = *(unsigned int *)((int)(*(int*)((char*)ppuVar2 - 0x60d)) + 4);
    *(int *)((int)param_1 + 0xda) = *(int *)(*(int*)((char*)ppuVar2 - 0x60d));
    *(unsigned int *)((int)param_1 + 0xde) = uVar1 & 0xffff0000;
    uVar1 = *(unsigned int *)((int)(*(int*)((char*)ppuVar2 - 0x60c)) + 4);
    param_1[0x35] = *(int *)(*(int*)((char*)ppuVar2 - 0x60c));
    param_1[0x36] = uVar1 & 0xffff0000;
    param_1[0x31] = 0;
    param_1[0x32] = 2;
    param_1[0x33] = 0xc;
    param_1[0x34] = 0xe;
  }
  return param_1;
}

/* Address: 0x100667c4 Size: 8 bytes */
int FUN_100667c4()

{
  return uRam1011607c;
}

/* Address: 0x100667cc Size: 8 bytes */
int FUN_100667cc()

{
  return uRam10116080;
}

/* Address: 0x100667d4 Size: 8 bytes */
int FUN_100667d4()

{
  return uRam10116084;
}

/* Address: 0x100667dc Size: 8 bytes */
int FUN_100667dc()

{
  return uRam10116088;
}

/* Address: 0x100667e4 Size: 8 bytes */
int FUN_100667e4()

{
  return uRam1011608c;
}

/* Address: 0x100667ec Size: 8 bytes */
int FUN_100667ec()

{
  return uRam10116090;
}

/* Address: 0x100667f4 Size: 176 bytes */
int * FUN_100667f4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xbc),
     param_1 != (int *)0x0)) {
    FUN_100cda40(param_1);
    *(short *)(param_1 + 0x2c) = 0;
    *(short *)((int)param_1 + 0xb2) = 0;
    *param_1 = (*(int*)((char*)ppuVar1 - 0x480));
    param_1[0x2d] = 0;
    *(short *)(param_1 + 0x2e) = 1;
    *(char *)((int)param_1 + 0xba) = 0;
    param_1[0x2c] = 0x40004;
    *param_1 = (*(int*)((char*)ppuVar1 - 0x603));
  }
  return param_1;
}

/* Address: 0x10066d04 Size: 240 bytes */
int * FUN_10066d04(int *param_1,int *param_2)

{
  int uVar1;
  
  if ((param_1 != (int *)0x0) ||
     (param_1 = (int *)FUN_100f56e4(0x30), param_1 != (int *)0x0)) {
    FUN_100b02d0(param_1 + 7);
    param_1[3] = 0;
    param_1[2] = 0;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    FUN_100b057c(param_1,0);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_100b057c(param_1,1);
    FUN_100b0384();
    FUN_10002fd0();
    uVar1 = FUN_100ed918();
    param_1[9] = uVar1;
    FUN_10105830(param_1 + 4);
    param_1[3] = param_1[9];
    *(char *)(param_1 + 0xb) = 0;
  }
  return param_1;
}

/* Address: 0x10066df4 Size: 112 bytes */
void FUN_10066df4(int param_1,unsigned long long param_2)

{
  int uVar1;
  
  if (param_1 != 0) {
    FUN_10105920(param_1 + 0x10);
    uVar1 = FUN_100ef5b8(*(int *)(param_1 + 0x24));
    *(int *)(param_1 + 0x24) = uVar1;
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}

/* Address: 0x10066e64 Size: 648 bytes */
int FUN_10066e64(int param_1,short *param_2)

{
  int iVar1;
  int uVar5;
  int iVar6;
  long long uVar2;
  long long uVar3;
  long long uVar4;
  int bVar7;
  int local_158;
  int uStack_154;
  char auStack_150 [8];
  int local_148;
  int local_144;
  char auStack_140 [276];
  int local_2c;
  
  iVar1 = iRam101177f0;
  if (*(char *)(iRam1011788c + 9) == '\0') {
    *param_2 = 1;
    bVar7 = *(char *)(param_1 + 0x2c) == '\0';
    *(int *)(param_1 + 0x2c) = bVar7;
  }
  else {
    bVar7 = false;
    if (*(int *)(param_1 + 8) == 0) {
      uVar5 = FUN_10000e58();
      *(int *)(param_1 + 8) = uVar5;
    }
    else {
      uVar5 = FUN_10000e88(*(int *)(param_1 + 8));
      *(int *)(param_1 + 8) = uVar5;
    }
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar6 = FUN_100017b8(*(int *)(param_1 + 8),0xd);
        if ((iVar6 == 0) || (iVar6 = FUN_100017b8(*(int *)(param_1 + 8),0xf), iVar6 == 0)) {
          uVar5 = FUN_10000e88(*(int *)(param_1 + 8));
          *(int *)(param_1 + 8) = uVar5;
        }
        else {
          *param_2 = *(short *)(**(int **)(**(int **)(param_1 + 8) + 0x16) + 0x20);
          local_158 = *(int *)(**(int **)(param_1 + 8) + 0x22);
          uStack_154 = *(int *)(**(int **)(param_1 + 8) + 0x26);
          local_148 = local_158;
          local_144 = uStack_154;
          uVar2 = FUN_100b0574(auStack_150);
          uVar3 = FUN_100b0578(param_1);
          uVar4 = FUN_100b0578(&local_158);
          iVar6 = FUN_10000e70(uVar4,uVar3,uVar2);
          bVar7 = true;
          if (iVar6 == 0) {
            uVar5 = FUN_10000e88(*(int *)(param_1 + 8));
            *(int *)(param_1 + 8) = uVar5;
            bVar7 = false;
          }
          else {
            FUN_100b057c(auStack_150,0);
            FUN_100b0384();
            FUN_10003318();
            FUN_100b057c(auStack_150,1);
            FUN_100b0384();
            FUN_10003318();
            FUN_100ee64c(auStack_140);
            uVar5 = local_2c;
            uVar2 = FUN_100b0578(auStack_150);
            FUN_10003150(uVar5,uVar2);
            FUN_10002be0(local_2c,*(int *)(param_1 + 0xc),local_2c);
            FUN_10002be0(local_2c,*(int *)(*(int *)(iVar1 + 0xca) + 0x18),local_2c);
            FUN_10001548(local_2c);
            FUN_100ee77c(auStack_140,2);
          }
        }
      } while ((*(int *)(param_1 + 8) != 0) && (bVar7 == false));
    }
  }
  return bVar7;
}

/* Address: 0x100670ec Size: 140 bytes */
char * FUN_100670ec(char *param_1,char param_2)

{
  int *puVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if (((param_1 != (char *)0x0) ||
      (ppuVar2 = 0 /* TVect base */, param_1 = (char *)FUN_100f56e4(1), param_1 != (char *)0x0))
     && (*param_1 = param_2, param_2 != '\0')) {
    if (param_2 == '\x01') {
      puVar1 = (int *)(*(int*)((char*)ppuVar2 - 0x601));
    }
    else {
      puVar1 = (int *)(*(int*)((char*)ppuVar2 - 0x5ff));
    }
    FUN_100035d0(*puVar1);
  }
  return param_1;
}

/* Address: 0x10067178 Size: 128 bytes */
void FUN_10067178(char *param_1,unsigned long long param_2)

{
  int *puVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      puVar1 = puRam101160a4;
      if (*param_1 == '\x01') {
        puVar1 = puRam1011609c;
      }
      FUN_100030c0(*puVar1);
    }
    if ((param_1 != (char *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}

/* Address: 0x100672bc Size: 1412 bytes */
void FUN_100672bc()
{
  return;
}

/* Address: 0x10067848 Size: 40 bytes */
void FUN_10067848()

{
  FUN_10066334(0);
  return;
}

/* Address: 0x10067870 Size: 52 bytes */
void FUN_10067870(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x77686261,param_2);
  return;
}

/* Address: 0x100678a4 Size: 256 bytes */
void FUN_100678a4(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int iVar2;
  char auStack_88 [48];
  char auStack_58 [48];
  short local_28 [2];
  char auStack_24 [36];
  
  uVar1 = uRam10116c68;
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_24);
  FUN_10066d04(auStack_58,auStack_24);
  iVar2 = FUN_10066e64(auStack_58,local_28);
  while (iVar2 != 0) {
    if (3 < local_28[0]) {
      FUN_100f03e8(uVar1);
      FUN_100b0578(auStack_24);
      FUN_10002c58();
    }
    iVar2 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_88,2);
  return;
}

/* Address: 0x100679ac Size: 40 bytes */
void FUN_100679ac()

{
  FUN_100662c4(0);
  return;
}

/* Address: 0x100679d4 Size: 52 bytes */
void FUN_100679d4(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x67726261,param_2);
  return;
}

/* Address: 0x10067a08 Size: 256 bytes */
void FUN_10067a08(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int iVar2;
  char auStack_88 [48];
  char auStack_58 [48];
  short local_28 [2];
  char auStack_24 [36];
  
  uVar1 = uRam1011606c;
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_24);
  FUN_10066d04(auStack_58,auStack_24);
  iVar2 = FUN_10066e64(auStack_58,local_28);
  while (iVar2 != 0) {
    if (3 < local_28[0]) {
      FUN_100f03e8(uVar1);
      FUN_100b0578(auStack_24);
      FUN_10002c58();
    }
    iVar2 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_88,2);
  return;
}

/* Address: 0x10067b10 Size: 40 bytes */
void FUN_10067b10()

{
  FUN_100663a4(0);
  return;
}

/* Address: 0x10067b38 Size: 60 bytes */
void FUN_10067b38(int *param_1,char param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),param_2);
  return;
}

/* Address: 0x10067b74 Size: 496 bytes */
void FUN_10067b74(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int uVar2;
  int iVar3;
  char auStack_b0 [48];
  char auStack_80 [16];
  char auStack_70 [8];
  char auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  
  uVar2 = uRam10116c68;
  uVar1 = uRam101160b8;
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10067a08(param_1,param_2,param_3);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar3 = FUN_10066e64(auStack_68,local_38);
  while (iVar3 != 0) {
    if (3 < local_38[0]) {
      FUN_100f0538(uVar2);
      FUN_10000270(local_2e + -1,local_34);
      FUN_10001d88(local_32,local_34);
      FUN_10001d88(local_32,local_30);
      FUN_100f0538(uVar1);
      FUN_10000270(local_32 + 1,local_30 + -1);
      FUN_10001d88(local_2e + -1,local_30 + -1);
      FUN_10001d88(local_2e + -1,local_34 + 1);
    }
    iVar3 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}

/* Address: 0x10067d6c Size: 40 bytes */
void FUN_10067d6c()

{
  FUN_10066484(0);
  return;
}

/* Address: 0x10067d94 Size: 52 bytes */
void FUN_10067d94(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x33646c74,param_2);
  return;
}

/* Address: 0x10067dc8 Size: 452 bytes */
void FUN_10067dc8(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int uVar2;
  int iVar3;
  unsigned long long uVar4;
  char auStack_b0 [48];
  char auStack_80 [16];
  char auStack_70 [8];
  char auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_2e;
  
  uVar2 = uRam10116c68;
  uVar1 = uRam101160b8;
  uVar4 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar3 = FUN_10066e64(auStack_68,local_38);
  while (iVar3 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(uVar4 + 0xba);
      FUN_10000270(local_32,local_34);
      FUN_10001d88(local_2e,local_34);
    }
    else {
      FUN_100f0538(uVar1);
      FUN_10000270(local_32,local_34);
      FUN_10001d88(local_2e,local_34);
      FUN_100f0538(uVar2);
      FUN_10000270(local_32,local_34 + 1);
      FUN_10001d88(local_2e,local_34 + 1);
    }
    iVar3 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}

/* Address: 0x10067f94 Size: 40 bytes */
void FUN_10067f94()

{
  FUN_100664f4(0);
  return;
}

/* Address: 0x10067fbc Size: 52 bytes */
void FUN_10067fbc(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x33646c62,param_2);
  return;
}

/* Address: 0x10067ff0 Size: 468 bytes */
void FUN_10067ff0(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int uVar2;
  int iVar3;
  unsigned long long uVar4;
  char auStack_b0 [48];
  char auStack_80 [16];
  char auStack_70 [8];
  char auStack_68 [48];
  short local_38 [2];
  char auStack_34 [2];
  short local_32;
  short local_30;
  short local_2e;
  
  uVar2 = uRam10116c68;
  uVar1 = uRam101160b8;
  uVar4 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,auStack_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar3 = FUN_10066e64(auStack_68,local_38);
  while (iVar3 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(uVar4 + 0xba);
      FUN_10000270(local_32,local_30 + -1);
      FUN_10001d88(local_2e,local_30 + -1);
    }
    else {
      FUN_100f0538(uVar1);
      FUN_10000270(local_32,local_30 + -1);
      FUN_10001d88(local_2e,local_30 + -1);
      FUN_100f0538(uVar2);
      FUN_10000270(local_32,local_30);
      FUN_10001d88(local_2e,local_30);
    }
    iVar3 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}

/* Address: 0x100681cc Size: 40 bytes */
void FUN_100681cc()

{
  FUN_100665d4(0);
  return;
}

/* Address: 0x100681f4 Size: 52 bytes */
void FUN_100681f4(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x33646c6c,param_2);
  return;
}

/* Address: 0x10068228 Size: 452 bytes */
void FUN_10068228(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int uVar2;
  int iVar3;
  unsigned long long uVar4;
  char auStack_b0 [48];
  char auStack_80 [16];
  char auStack_70 [8];
  char auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  
  uVar2 = uRam10116c68;
  uVar1 = uRam101160b8;
  uVar4 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar3 = FUN_10066e64(auStack_68,local_38);
  while (iVar3 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(uVar4 + 0xba);
      FUN_10000270(local_32,local_34);
      FUN_10001d88(local_32,local_30);
    }
    else {
      FUN_100f0538(uVar1);
      FUN_10000270(local_32,local_34);
      FUN_10001d88(local_32,local_30);
      FUN_100f0538(uVar2);
      FUN_10000270(local_32 + 1,local_34);
      FUN_10001d88(local_32 + 1,local_30);
    }
    iVar3 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}

/* Address: 0x100683f4 Size: 40 bytes */
void FUN_100683f4()

{
  FUN_10066564(0);
  return;
}

/* Address: 0x1006841c Size: 52 bytes */
void FUN_1006841c(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x33646c72,param_2);
  return;
}

/* Address: 0x10068450 Size: 468 bytes */
void FUN_10068450(long long param_1,int *param_2,long long param_3)

{
  int uVar1;
  int uVar2;
  int iVar3;
  unsigned long long uVar4;
  char auStack_b0 [48];
  char auStack_80 [16];
  char auStack_70 [8];
  char auStack_68 [48];
  short local_38 [2];
  short local_34 [2];
  short local_30;
  short local_2e;
  
  uVar2 = uRam10116c68;
  uVar1 = uRam101160b8;
  uVar4 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar3 = FUN_10066e64(auStack_68,local_38);
  while (iVar3 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(uVar4 + 0xba);
      FUN_10000270(local_2e + -1,local_34[0]);
      FUN_10001d88(local_2e + -1,local_30);
    }
    else {
      FUN_100f0538(uVar1);
      FUN_10000270(local_2e + -1,local_34[0]);
      FUN_10001d88(local_2e + -1,local_30);
      FUN_100f0538(uVar2);
      FUN_10000270(local_2e,local_34[0]);
      FUN_10001d88(local_2e,local_30);
    }
    iVar3 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}

/* Address: 0x1006862c Size: 40 bytes */
void FUN_1006862c()

{
  FUN_10066414(0);
  return;
}

/* Address: 0x10068654 Size: 52 bytes */
void FUN_10068654(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x33646672,param_2);
  return;
}

/* Address: 0x10068688 Size: 668 bytes */
void FUN_10068688(long long param_1,int *param_2,long long param_3)

{
  int iVar2;
  long long uVar1;
  unsigned long long uVar3;
  unsigned long long uVar4;
  char auStack_b0 [48];
  char auStack_80 [16];
  char auStack_70 [8];
  char auStack_68 [48];
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  
  uVar3 = (unsigned long long)uRam101177f0;
  uVar4 = (unsigned long long)uRam101176cc;
  FUN_10066bf4(auStack_b0);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),param_3,auStack_70);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x420),auStack_80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_80,&local_34);
  FUN_10066d04(auStack_68,auStack_70);
  iVar2 = FUN_10066e64(auStack_68,local_38);
  while (iVar2 != 0) {
    if (local_38[0] < 4) {
      FUN_10002118(uVar3 + 0xba);
      uVar1 = FUN_100b0574(&local_34);
      FUN_10003348(uVar1,1,1);
      FUN_100b0578(&local_34);
      FUN_100021d8();
      uVar1 = FUN_100b0574(&local_34);
      FUN_10003348(uVar1,0xffffffffffffffff,0xffffffffffffffff);
    }
    else {
      FUN_100b2268(uVar4 + 0x5e8);
      FUN_100021c0();
      FUN_10000270(local_2e,local_34);
      FUN_10001d88(local_32,local_34);
      FUN_10001d88(local_32,local_30);
      FUN_100b2268(uVar4 + 0x5d0);
      FUN_100021c0();
      FUN_10000270(local_32 + 1,local_30 + -1);
      FUN_10001d88(local_2e + -1,local_30 + -1);
      FUN_10001d88(local_2e + -1,local_34 + 1);
      FUN_100b2268(uVar4 + 0x5fa);
      FUN_100021c0();
      uVar1 = FUN_100b0574(&local_34);
      FUN_10003348(uVar1,1,1);
      FUN_100b0578(&local_34);
      FUN_100021d8();
      uVar1 = FUN_100b0574(&local_34);
      FUN_10003348(uVar1,0xffffffffffffffff,0xffffffffffffffff);
    }
    iVar2 = FUN_10066e64(auStack_68,local_38);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_b0,2);
  return;
}

/* Address: 0x1006892c Size: 40 bytes */
void FUN_1006892c()

{
  FUN_10066644(0);
  return;
}

/* Address: 0x10068954 Size: 276 bytes */
void FUN_10068954(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int local_4c;
  int local_20 [2];
  int local_18;
  
  FUN_10105d28(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),
                 (unsigned long long)*(unsigned int *)(local_4c + -0x1d4) + 0x540,0);
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x1c);
    *(int *)((int)param_1 + 0xda) = *(int *)(iVar1 + 0x18);
    *(unsigned int *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xe;
  iVar1 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}

/* Address: 0x10068a68 Size: 244 bytes */
void FUN_10068a68(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int local_20 [2];
  int local_18;
  
  FUN_100d49ac(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x1c);
    *(int *)((int)param_1 + 0xda) = *(int *)(iVar1 + 0x18);
    *(unsigned int *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xe;
  iVar1 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}

/* Address: 0x10068b5c Size: 88 bytes */
void FUN_10068b5c(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = FUN_100c7f28(param_1);
  uVar1 = *(unsigned int *)(param_1 + 0xde);
  *(int *)(iVar2 + 0xda) = *(int *)(param_1 + 0xda);
  *(unsigned int *)(iVar2 + 0xde) = uVar1 & 0xffff0000;
  uVar1 = *(unsigned int *)(param_1 + 0xd8);
  *(int *)(iVar2 + 0xd4) = *(int *)(param_1 + 0xd4);
  *(unsigned int *)(iVar2 + 0xd8) = uVar1 & 0xffff0000;
  return;
}

/* Address: 0x10068bb4 Size: 36 bytes */
void FUN_10068bb4()

{
  FUN_100c8068();
  return;
}

/* Address: 0x10068bd8 Size: 392 bytes */
void FUN_10068bd8(int *param_1)

{
  short *puVar1;
  char *puVar2;
  short *puVar3;
  short *puVar4;
  char *puVar5;
  char *puVar6;
  char auStack_16c [48];
  short local_13c;
  short local_13a;
  short local_138;
  short local_136;
  char auStack_134 [16];
  short local_124 [4];
  char local_11c [284];
  
  puVar2 = ((char*)0) + -0x16c;
  puVar3 = (short *)(((char*)0) + -0x13c);
  puVar6 = ((char*)0) + -0x134;
  puVar4 = (short *)(((char*)0) + -0x124);
  puVar5 = ((char*)0) + -0x11c;
  *puVar5 = 0;
  FUN_10066bf4(puVar2);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar6);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar6,puVar3);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),puVar5);
  puVar1 = puVar4;
  if ((((char*)0) != (char *)0x124) ||
     (puVar1 = (short *)FUN_100f56e4(8), puVar1 != (short *)0x0)) {
    *puVar1 = *puVar3;
    puVar1[1] = *(short *)(((char*)0) + -0x13a);
    puVar1[2] = *(short *)(((char*)0) + -0x138);
    puVar1[3] = *(short *)(((char*)0) + -0x136);
  }
  FUN_100672bc(puVar5,puVar4,0,0xfffffffffffffffe,param_1,param_1 + 0x35);
  FUN_10066c80(puVar2,2);
  return;
}



















































































































































































































/* Address: 0x10068d60 Size: 108 bytes */
void FUN_10068d60(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}

/* Address: 0x10068dcc Size: 372 bytes */
void FUN_10068dcc(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}

/* Address: 0x10068f40 Size: 172 bytes */
void FUN_10068f40(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &local_10;
  piVar1 = &local_8;
  local_8 = param_1[0x2e];
  if (param_2 < local_8) {
    piVar1 = &local_4;
  }
  local_10 = *piVar1;
  local_c = param_1[0x2d];
  if (local_10 < local_c) {
    piVar2 = &local_c;
  }
  if ((*piVar2 != param_1[0x2c]) && (param_1[0x2c] = *piVar2, param_3 != '\0')) {
    local_4 = param_2;
    FUN_10117884((int)*(short *)(*param_1 + 0x480) + (int)param_1,param_1 + 0x31);
  }
  return;
}

/* Address: 0x10068fec Size: 196 bytes */
void FUN_10068fec(int *param_1,char param_2,char param_3)

{
  int *puVar1;
  
  puVar1 = puRam101177c0;
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*puVar1,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*puVar1,0x7a,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}

/* Address: 0x100690b0 Size: 196 bytes */
void FUN_100690b0(int *param_1,char param_2,char param_3)

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

/* Address: 0x10069174 Size: 484 bytes */
void FUN_10069174(int *param_1)

{
  long long uVar1;
  short *puVar2;
  char *puVar3;
  short *puVar4;
  char *puVar5;
  short *puVar6;
  char *puVar7;
  char *puVar8;
  char auStack_174 [48];
  short local_144;
  short local_142;
  short local_140;
  short local_13e;
  char auStack_13c [16];
  short local_12c [4];
  char local_124 [256];
  char auStack_24 [36];
  
  puVar3 = ((char*)0) + -0x174;
  puVar4 = (short *)(((char*)0) + -0x144);
  puVar5 = ((char*)0) + -0x13c;
  puVar6 = (short *)(((char*)0) + -300);
  puVar7 = ((char*)0) + -0x124;
  puVar8 = ((char*)0) + -0x24;
  FUN_10066bf4(puVar3);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar5);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar5,puVar4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,puVar8);
  FUN_10067270();
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  else {
    uVar1 = FUN_100b0574(puVar8);
    FUN_10003348(uVar1,2,2);
    FUN_100b0578(puVar8);
    FUN_100021d8();
  }
  *puVar7 = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),puVar7);
  puVar2 = puVar6;
  if ((((char*)0) != (char *)0x12c) ||
     (puVar2 = (short *)FUN_100f56e4(8), puVar2 != (short *)0x0)) {
    *puVar2 = *puVar4;
    puVar2[1] = *(short *)(((char*)0) + -0x142);
    puVar2[2] = *(short *)(((char*)0) + -0x140);
    puVar2[3] = *(short *)(((char*)0) + -0x13e);
  }
  FUN_100672bc(puVar7,puVar6,0,0xfffffffffffffffe,param_1,param_1 + 0x35,0xff);
  FUN_10066c80(puVar3,2);
  return;
}




















































































































































































































































































/* Address: 0x10069358 Size: 368 bytes */
void FUN_10069358(int *param_1)

{
  int iVar2;
  long long uVar1;
  unsigned long long uVar3;
  char auStack_98 [48];
  char auStack_68 [48];
  char auStack_38 [4];
  int local_34;
  short local_28 [2];
  char auStack_24 [36];
  
  uVar3 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_38);
  local_34 = local_34 + param_1[0x34];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_38,auStack_24);
  FUN_10066d04(auStack_68,auStack_24);
  iVar2 = FUN_10066e64(auStack_68,local_28);
  while (iVar2 != 0) {
    if (local_28[0] < 2) {
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,1,1);
      FUN_10002118(uVar3 + 0xb2);
      FUN_10002130(0xb);
      FUN_100b0578(auStack_24);
      FUN_10002148();
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,0xffffffffffffffff,0xffffffffffffffff);
    }
    iVar2 = FUN_10066e64(auStack_68,local_28);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_98,2);
  return;
}

/* Address: 0x100694c8 Size: 564 bytes */
void FUN_100694c8(int *param_1)

{
  int uVar1;
  int uVar2;
  int iVar4;
  long long uVar3;
  unsigned long long uVar5;
  char auStack_90 [48];
  char auStack_60 [48];
  short local_30 [2];
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  
  uVar2 = uRam101160bc;
  uVar1 = uRam10116070;
  uVar5 = (unsigned long long)uRam101176cc;
  FUN_10066bf4(auStack_90);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,&local_2c);
  FUN_10066d04(auStack_60,&local_2c);
  iVar4 = FUN_10066e64(auStack_60,local_30);
  while (iVar4 != 0) {
    if (local_30[0] < 3) {
      FUN_100f0538(uVar1);
    }
    else {
      iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
      if (iVar4 == 0) {
        FUN_100b2268(uVar5 + 0x5ca);
        FUN_100021c0();
        FUN_10000270(local_2a + 1,local_28 + -1);
        FUN_10001d88(local_26 + -1,local_28 + -1);
        FUN_10001d88(local_26 + -1,local_2c + 1);
        FUN_100b2268(uVar5 + 0x5e2);
        FUN_100021c0();
        FUN_10000270(local_26,local_2c);
        FUN_10001d88(local_2a,local_2c);
        FUN_10001d88(local_2a,local_28);
        FUN_100f0538(uVar1);
      }
      else {
        FUN_100f0538(uVar2);
      }
    }
    uVar3 = FUN_100b0574(&local_2c);
    FUN_10003348(uVar3,1,1);
    FUN_100b0578(&local_2c);
    FUN_100021d8();
    uVar3 = FUN_100b0574(&local_2c);
    FUN_10003348(uVar3,0xffffffffffffffff,0xffffffffffffffff);
    iVar4 = FUN_10066e64(auStack_60,local_30);
  }
  FUN_10066df4(auStack_60,2);
  FUN_10066c80(auStack_90,2);
  return;
}

/* Address: 0x100696fc Size: 448 bytes */
void FUN_100696fc(int *param_1)

{
  int uVar1;
  long long uVar2;
  int iVar3;
  int local_ac;
  char auStack_88 [48];
  char auStack_58 [48];
  short local_28 [2];
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  
  uVar1 = uRam101160bc;
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,&local_24);
  uVar2 = FUN_100b0574(&local_24);
  FUN_10003348(uVar2,2,2);
  FUN_100b2268((unsigned long long)*(unsigned int *)(local_ac + -0x1d4) + 0x5be);
  FUN_100008b8();
  FUN_100b0578(&local_24);
  FUN_10002c58();
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (iVar3 != 0) {
    FUN_10066d04(auStack_58,&local_24);
    iVar3 = FUN_10066e64(auStack_58,local_28);
    while (iVar3 != 0) {
      if ((2 < local_28[0]) &&
         (iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758)), iVar3 != 0)) {
        FUN_100f0538(uVar1);
      }
      FUN_10000270(local_22 + -1,local_20);
      FUN_10001d88(local_1e + -1,local_24);
      FUN_10000270(local_22,local_24);
      FUN_10001d88(local_1e,local_20);
      iVar3 = FUN_10066e64(auStack_58,local_28);
    }
    FUN_10066df4(auStack_58,2);
  }
  FUN_10066c80(auStack_88,2);
  return;
}

/* Address: 0x100698bc Size: 80 bytes */
void FUN_100698bc(int *param_1,int *param_2,char param_3)

{
  unsigned int uVar1;
  
  uVar1 = param_2[1];
  param_1[0x35] = *param_2;
  param_1[0x36] = uVar1 & 0xffff0000;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x10069914 Size: 40 bytes */
void FUN_10069914()

{
  FUN_10066708(0);
  return;
}

/* Address: 0x1006993c Size: 276 bytes */
void FUN_1006993c(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int local_4c;
  int local_20 [2];
  int local_18;
  
  FUN_100d52ec(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),
                 (unsigned long long)*(unsigned int *)(local_4c + -0x1d4) + 0x540,0);
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x1c);
    *(int *)((int)param_1 + 0xda) = *(int *)(iVar1 + 0x18);
    *(unsigned int *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xc;
  iVar1 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}

/* Address: 0x10069a50 Size: 244 bytes */
void FUN_10069a50(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int local_20 [2];
  int local_18;
  
  FUN_100d4f48(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x448));
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x1c);
    *(int *)((int)param_1 + 0xda) = *(int *)(iVar1 + 0x18);
    *(unsigned int *)((int)param_1 + 0xde) = uVar2 & 0xffff0000;
    FUN_10117884((int)*(short *)(*param_1 + 0x788) + (int)param_1,iVar1 + 0x12,0);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_20);
  uVar2 = (local_18 - local_20[0]) - 0xc;
  iVar1 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1[0x31] = iVar1 + param_1[0x31];
  param_1[0x33] = iVar1 + param_1[0x33];
  return;
}

/* Address: 0x10069b44 Size: 88 bytes */
int FUN_10069b44(int param_1)

{
  unsigned int uVar1;
  int iVar2;

  iVar2 = FUN_100c7f28(param_1);
  uVar1 = *(unsigned int *)(param_1 + 0xde);
  *(int *)(iVar2 + 0xda) = *(int *)(param_1 + 0xda);
  *(unsigned int *)(iVar2 + 0xde) = uVar1 & 0xffff0000;
  uVar1 = *(unsigned int *)(param_1 + 0xd8);
  *(int *)(iVar2 + 0xd4) = *(int *)(param_1 + 0xd4);
  *(unsigned int *)(iVar2 + 0xd8) = uVar1 & 0xffff0000;
  return 0;
}

/* Address: 0x10069b9c Size: 392 bytes */
void FUN_10069b9c(int *param_1)

{
  short *puVar1;
  char *puVar2;
  short *puVar3;
  short *puVar4;
  char *puVar5;
  char *puVar6;
  char auStack_16c [48];
  short local_13c;
  short local_13a;
  short local_138;
  short local_136;
  char auStack_134 [16];
  short local_124 [4];
  char local_11c [284];
  
  puVar2 = ((char*)0) + -0x16c;
  puVar3 = (short *)(((char*)0) + -0x13c);
  puVar6 = ((char*)0) + -0x134;
  puVar4 = (short *)(((char*)0) + -0x124);
  puVar5 = ((char*)0) + -0x11c;
  *puVar5 = 0;
  FUN_10066bf4(puVar2);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar6);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar6,puVar3);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),puVar5);
  puVar1 = puVar4;
  if ((((char*)0) != (char *)0x124) ||
     (puVar1 = (short *)FUN_100f56e4(8), puVar1 != (short *)0x0)) {
    *puVar1 = *puVar3;
    puVar1[1] = *(short *)(((char*)0) + -0x13a);
    puVar1[2] = *(short *)(((char*)0) + -0x138);
    puVar1[3] = *(short *)(((char*)0) + -0x136);
  }
  FUN_100672bc(puVar5,puVar4,0,0xfffffffffffffffe,param_1,param_1 + 0x35);
  FUN_10066c80(puVar2,2);
  return;
}



















































































































































































































/* Address: 0x10069d24 Size: 108 bytes */
void FUN_10069d24(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}

/* Address: 0x10069d90 Size: 372 bytes */
void FUN_10069d90(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}

/* Address: 0x10069f04 Size: 160 bytes */
void FUN_10069f04(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &local_10;
  piVar1 = &local_8;
  local_8 = param_1[0x2e];
  if (param_2 < local_8) {
    piVar1 = &local_4;
  }
  local_10 = *piVar1;
  local_c = param_1[0x2d];
  if (local_10 < local_c) {
    piVar2 = &local_c;
  }
  if (*piVar2 != param_1[0x2c]) {
    param_1[0x2c] = *piVar2;
    local_4 = param_2;
    FUN_10117884((int)*(short *)(*param_1 + 0x480) + (int)param_1,param_1 + 0x31);
  }
  return;
}

/* Address: 0x10069fa4 Size: 196 bytes */
void FUN_10069fa4(int *param_1,char param_2,char param_3)

{
  int *puVar1;
  
  puVar1 = puRam101177c0;
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*puVar1,0);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*puVar1,0x7a,0);
    }
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x428));
    }
  }
  return;
}

/* Address: 0x1006a068 Size: 196 bytes */
void FUN_1006a068(int *param_1,char param_2,char param_3)

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

/* Address: 0x1006a12c Size: 616 bytes */
void FUN_1006a12c(int *param_1)

{
  long long uVar1;
  int iVar2;
  short *puVar3;
  char *puVar4;
  short *puVar5;
  char *puVar6;
  short *puVar7;
  char *puVar8;
  char *puVar9;
  int local_1a4;
  char auStack_174 [48];
  short local_144;
  short local_142;
  short local_140;
  short local_13e;
  char auStack_13c [16];
  short local_12c [4];
  char local_124 [256];
  char auStack_24 [36];
  
  puVar4 = ((char*)0) + -0x174;
  puVar5 = (short *)(((char*)0) + -0x144);
  puVar6 = ((char*)0) + -0x13c;
  puVar7 = (short *)(((char*)0) + -300);
  puVar8 = ((char*)0) + -0x124;
  puVar9 = ((char*)0) + -0x24;
  FUN_10066bf4(puVar4);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar6);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar6,puVar5);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,puVar9);
  FUN_10067270();
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  else {
    uVar1 = FUN_100b0574(puVar9);
    FUN_10003348(uVar1,1,1);
    FUN_100b0578(puVar9);
    FUN_100034e0();
    uVar1 = FUN_100b0574(puVar9);
    FUN_10003348(uVar1,1,1);
    FUN_100f03e8((int)param_1 + 0xda);
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1);
    if (iVar2 == 0) {
      FUN_100b0578(puVar9);
      FUN_10003390();
    }
    else {
      FUN_10002118((unsigned long long)*(unsigned int *)(local_1a4 + -0xb0) + 0xc2);
      FUN_100b0578(puVar9);
      FUN_100034e0();
    }
  }
  *puVar8 = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),puVar8);
  puVar3 = puVar7;
  if ((((char*)0) != (char *)0x12c) ||
     (puVar3 = (short *)FUN_100f56e4(8), puVar3 != (short *)0x0)) {
    *puVar3 = *puVar5;
    puVar3[1] = *(short *)(((char*)0) + -0x142);
    puVar3[2] = *(short *)(((char*)0) + -0x140);
    puVar3[3] = *(short *)(((char*)0) + -0x13e);
  }
  FUN_100672bc(puVar8,puVar7,0,0xfffffffffffffffe,param_1,param_1 + 0x35,0xff);
  FUN_10066c80(puVar4,2);
  return;
}































































































































































































































































































































































/* Address: 0x1006a394 Size: 368 bytes */
void FUN_1006a394(int *param_1)

{
  int iVar2;
  long long uVar1;
  unsigned long long uVar3;
  char auStack_98 [48];
  char auStack_68 [48];
  char auStack_38 [4];
  int local_34;
  short local_28 [2];
  char auStack_24 [36];
  
  uVar3 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_38);
  local_34 = local_34 + param_1[0x34];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_38,auStack_24);
  FUN_10066d04(auStack_68,auStack_24);
  iVar2 = FUN_10066e64(auStack_68,local_28);
  while (iVar2 != 0) {
    if (local_28[0] < 2) {
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,1,1);
      FUN_10002118(uVar3 + 0xb2);
      FUN_10002130(0xb);
      FUN_100b0578(auStack_24);
      FUN_10002148();
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,0xffffffffffffffff,0xffffffffffffffff);
    }
    iVar2 = FUN_10066e64(auStack_68,local_28);
  }
  FUN_10066df4(auStack_68,2);
  FUN_10066c80(auStack_98,2);
  return;
}

/* Address: 0x1006a504 Size: 304 bytes */
void FUN_1006a504(int *param_1)

{
  int uVar1;
  int uVar2;
  int iVar3;
  char auStack_88 [48];
  char auStack_58 [48];
  short local_28 [2];
  char auStack_24 [36];
  
  uVar2 = uRam101160bc;
  uVar1 = uRam10116070;
  FUN_10066bf4(auStack_88);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,auStack_24);
  FUN_10066d04(auStack_58,auStack_24);
  iVar3 = FUN_10066e64(auStack_58,local_28);
  while (iVar3 != 0) {
    if (2 < local_28[0]) {
      iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
      if (iVar3 == 0) {
        FUN_100f0538(uVar1);
      }
      else {
        FUN_100f0538(uVar2);
      }
    }
    FUN_100b0578(auStack_24);
    FUN_100034e0();
    iVar3 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_88,2);
  return;
}

/* Address: 0x1006a634 Size: 2996 bytes */
void FUN_1006a634(int *param_1)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int uVar4;
  int uVar5;
  int uVar6;
  long long uVar7;
  int iVar8;
  unsigned long long uVar9;
  int local_f4;
  char auStack_d0 [48];
  char auStack_a0 [48];
  char auStack_70 [48];
  short local_40 [2];
  short local_3c;
  short local_3a;
  
  uVar6 = uRam101160c4;
  uVar5 = uRam101160c0;
  uVar4 = uRam101160bc;
  uVar3 = uRam101160b8;
  uVar2 = uRam10116070;
  uVar1 = uRam1011606c;
  uVar9 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_d0);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,&local_3c);
  uVar7 = FUN_100b0574(&local_3c);
  FUN_10003348(uVar7,1,1);
  iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar8 == 0) {
    FUN_100f03e8(*(int *)(local_f4 + -0xc38));
  }
  else {
    FUN_100f03e8((int)param_1 + 0xda);
  }
  FUN_100b0578(&local_3c);
  FUN_10003390();
  uVar7 = FUN_100b0574(&local_3c);
  FUN_10003348(uVar7,0xffffffffffffffff,0xffffffffffffffff);
  iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (iVar8 == 0) {
    iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
    if (iVar8 == 0) {
      FUN_10066d04(auStack_70,&local_3c);
      iVar8 = FUN_10066e64(auStack_70,local_40);
      while (iVar8 != 0) {
        if (2 < local_40[0]) {
          FUN_100f0538(uVar1);
          FUN_10000270(local_3a + 6,local_3c + 2);
          FUN_10001d88(local_3a + 3,local_3c + 5);
          FUN_10000270(local_3a + 4,local_3c + 5);
          FUN_10001d88(local_3a + 7,local_3c + 2);
          FUN_10000270(local_3a + 3,local_3c + 5);
          FUN_10001d88(local_3a + 3,local_3c + 7);
          FUN_100f0538(uVar6);
          FUN_10000270(local_3a + 3,local_3c + 8);
          FUN_10001d88(local_3a + 4,local_3c + 8);
          FUN_10001d88(local_3a + 4,local_3c + 6);
          FUN_10001d88(local_3a + 6,local_3c + 6);
          FUN_10001d88(local_3a + 6,local_3c + 4);
          FUN_10001d88(local_3a + 7,local_3c + 4);
          FUN_10001d88(local_3a + 7,local_3c + 3);
          FUN_10001d88(local_3a + 8,local_3c + 3);
          FUN_10001d88(local_3a + 8,local_3c + 2);
          FUN_10000270(local_3a + 5,local_3c + 5);
          FUN_10001d88(local_3a + 5,local_3c + 5);
          FUN_10000270(local_3a + 7,local_3c + 5);
          FUN_10001d88(local_3a + 7,local_3c + 5);
          FUN_10000270(local_3a + 5,local_3c + 7);
          FUN_10001d88(local_3a + 5,local_3c + 7);
          FUN_100f0538(uVar5);
          FUN_10000270(local_3a + 3,local_3c + 9);
          FUN_10001d88(local_3a + 5,local_3c + 9);
          FUN_10001d88(local_3a + 5,local_3c + 8);
          FUN_10001d88(local_3a + 6,local_3c + 8);
          FUN_10001d88(local_3a + 6,local_3c + 7);
          FUN_10001d88(local_3a + 7,local_3c + 7);
          FUN_10001d88(local_3a + 7,local_3c + 6);
          FUN_10001d88(local_3a + 8,local_3c + 6);
          FUN_10001d88(local_3a + 8,local_3c + 4);
          FUN_100f0538(uVar3);
          FUN_10000270(local_3a + 6,local_3c + 9);
          FUN_10001d88(local_3a + 7,local_3c + 9);
          FUN_10001d88(local_3a + 7,local_3c + 8);
          FUN_10001d88(local_3a + 8,local_3c + 8);
          FUN_10001d88(local_3a + 8,local_3c + 7);
          FUN_10001d88(local_3a + 9,local_3c + 7);
          FUN_10001d88(local_3a + 9,local_3c + 2);
          FUN_100f0538(uVar4);
          FUN_10000270(local_3a + 4,local_3c + 10);
          FUN_10001d88(local_3a + 7,local_3c + 10);
          FUN_10000270(local_3a + 8,local_3c + 9);
          FUN_10001d88(local_3a + 9,local_3c + 9);
          FUN_10001d88(local_3a + 9,local_3c + 8);
          FUN_10000270(local_3a + 10,local_3c + 7);
          FUN_10001d88(local_3a + 10,local_3c + 4);
        }
        iVar8 = FUN_10066e64(auStack_70,local_40);
      }
      FUN_10066df4(auStack_70,2);
    }
  }
  else {
    FUN_10066d04(auStack_a0,&local_3c);
    iVar8 = FUN_10066e64(auStack_a0,local_40);
    while (iVar8 != 0) {
      if (local_40[0] < 3) {
        FUN_100f0538(uVar2);
      }
      else {
        iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
        if (iVar8 == 0) {
          FUN_100f0538(uVar1);
          FUN_10000270(local_3a + 9,local_3c + 5);
          FUN_10001d88(local_3a + 9,local_3c + 7);
          FUN_10000270(local_3a + 5,local_3c + 9);
          FUN_10001d88(local_3a + 7,local_3c + 9);
          FUN_100f0538(uVar6);
          FUN_10000270(local_3a + 3,local_3c + 9);
          FUN_10001d88(local_3a + 4,local_3c + 9);
          FUN_10000270(local_3a + 9,local_3c + 3);
          FUN_10001d88(local_3a + 9,local_3c + 4);
          FUN_100f0538(uVar5);
          FUN_10000270(local_3a + 2,local_3c + 9);
          FUN_10001d88(local_3a + 2,local_3c + 8);
          FUN_10001d88(local_3a + 3,local_3c + 8);
          FUN_10000270(local_3a + 8,local_3c + 3);
          FUN_10001d88(local_3a + 8,local_3c + 2);
          FUN_10001d88(local_3a + 9,local_3c + 2);
          FUN_100f0538(uVar3);
          FUN_10000270(local_3a + 2,local_3c + 7);
          FUN_10001d88(local_3a + 2,local_3c + 4);
          FUN_10001d88(local_3a + 4,local_3c + 2);
          FUN_10001d88(local_3a + 7,local_3c + 2);
          FUN_100f0538(uVar4);
          FUN_10000270(local_3a + 1,local_3c + 7);
          FUN_10001d88(local_3a + 1,local_3c + 4);
          FUN_10001d88(local_3a + 4,local_3c + 1);
          FUN_10001d88(local_3a + 7,local_3c + 1);
          FUN_10000270(local_3a + 2,local_3c + 2);
          FUN_10001d88(local_3a + 2,local_3c + 2);
          FUN_100f0538(uVar2);
        }
        else {
          FUN_100f0538(uVar4);
        }
      }
      uVar7 = FUN_100b0574(&local_3c);
      FUN_10003348(uVar7,3,3);
      uVar7 = FUN_100b0578(&local_3c);
      FUN_100019e0(uVar7,uVar9 + 0xba);
      uVar7 = FUN_100b0574(&local_3c);
      FUN_10003348(uVar7,0xfffffffffffffffd,0xfffffffffffffffd);
      iVar8 = FUN_10066e64(auStack_a0,local_40);
    }
    FUN_10066df4(auStack_a0,2);
  }
  FUN_10066c80(auStack_d0,2);
  return;
}

/* Address: 0x1006b1e8 Size: 80 bytes */
void FUN_1006b1e8(int *param_1,int *param_2,char param_3)

{
  unsigned int uVar1;
  
  uVar1 = param_2[1];
  param_1[0x35] = *param_2;
  param_1[0x36] = uVar1 & 0xffff0000;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x1006b240 Size: 160 bytes */
int * FUN_1006b240()

{
  unsigned char *pbVar1;
  int *ppuVar2;
  int *puVar3;
  int *puVar4;
  
  ppuVar2 = 0 /* TVect base */;
  puVar3 = (int *)FUN_100f56e4(0x1dc);
  if (puVar3 != (int *)0x0) {
    FUN_100f58a4(puVar3);
    *puVar3 = (*(int*)((char*)ppuVar2 - 0x5f5));
    puVar4 = puVar3 + 0x36;
    pbVar1 = (*(int*)((char*)ppuVar2 - 0x393));
    if ((puVar4 != (int *)0x0) ||
       (puVar4 = (int *)FUN_100f56e4(0x100), puVar4 != (int *)0x0)) {
      FUN_100012d8(pbVar1,puVar4,(unsigned long long)*pbVar1 + 1);
    }
    *(char *)(puVar3 + 0x76) = 1;
  }
  return puVar3;
}

/* Address: 0x1006b2e0 Size: 92 bytes */
void FUN_1006b2e0(long long param_1,long long param_2)

{
  FUN_100012d8(pbRam10116a54,param_2,(unsigned long long)*pbRam10116a54 + 1);
  FUN_100f659c(param_1,param_1 + 0xd8);
  return;
}

/* Address: 0x1006b33c Size: 100 bytes */
void FUN_1006b33c(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xc2);
  *(short *)(param_1 + 0xc2) = 0;
  *(int *)(param_1 + 0x8c) = (int)sVar1 + *(int *)(param_1 + 0x8c);
  FUN_100f5bd8(param_1);
  *(short *)(param_1 + 0xc2) = sVar1;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) - (int)sVar1;
  return;
}

/* Address: 0x1006b3a0 Size: 440 bytes */
void FUN_1006b3a0(int *param_1,long long param_2)

{
  int iVar1;
  long long uVar2;
  int *piVar3;
  char auStack_4c [8];
  char auStack_44 [16];
  char auStack_34 [16];
  char auStack_24 [2];
  short local_22;
  short local_1e;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_44);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_44,auStack_24);
  local_1e = local_22 + *(short *)((int)param_1 + 0xc2) + -5;
  FUN_100b2264(auStack_4c);
  FUN_10001ad0();
  FUN_100672bc(param_1 + 0x36,auStack_24,0,*(short *)((int)param_1 + 0xc6),param_1,auStack_4c);
  FUN_100f6318(param_1,param_2);
  if (*(char *)(param_1 + 0x76) == '\0') {
    *(char *)(param_1 + 0x76) = 1;
    FUN_10117884((int)*(short *)(*param_1 + 0x600) + (int)param_1,auStack_34);
    iVar1 = *param_1;
    uVar2 = FUN_100e1580(auStack_34,0);
    FUN_10117884((int)*(short *)(iVar1 + 0x2d0) + (int)param_1,uVar2);
    iVar1 = *param_1;
    uVar2 = FUN_100e1580(auStack_34,1);
    FUN_10117884((int)*(short *)(iVar1 + 0x2d0) + (int)param_1,uVar2);
    piVar3 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x138) + (int)param_1);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x480),auStack_34);
  }
  return;
}






































































































































































/* Address: 0x1006b558 Size: 100 bytes */
void FUN_1006b558(int param_1,char param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xc2);
  *(short *)(param_1 + 0xc2) = 0;
  *(int *)(param_1 + 0x8c) = (int)sVar1 + *(int *)(param_1 + 0x8c);
  FUN_100c8f30(param_1,param_2);
  *(short *)(param_1 + 0xc2) = sVar1;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) - (int)sVar1;
  return;
}

/* Address: 0x1006b5c4 Size: 92 bytes */
int * FUN_1006b5c4()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(200);
  if (puVar2 != (int *)0x0) {
    FUN_100d451c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5fd));
    puVar2[0x31] = 0;
  }
  return puVar2;
}

/* Address: 0x1006b620 Size: 88 bytes */
void FUN_1006b620(int *param_1)

{
  FUN_10105d28(param_1);
  if (param_1[0x31] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x850) + (int)param_1);
  }
  return;
}

/* Address: 0x1006b678 Size: 96 bytes */
void FUN_1006b678(int *param_1)

{
  FUN_100d45c0(param_1);
  if (param_1[0x31] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x850) + (int)param_1);
  }
  return;
}

/* Address: 0x1006b6d8 Size: 80 bytes */
int * FUN_1006b6d8()

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100c7f28();
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x850));
  return piVar1;
}

/* Address: 0x1006b728 Size: 36 bytes */
void FUN_1006b728()

{
  FUN_100c8068();
  return;
}

/* Address: 0x1006b74c Size: 108 bytes */
void FUN_1006b74c(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100c69f4(0);
  FUN_100c6a9c(uVar1,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar1);
  return;
}

/* Address: 0x1006b7b8 Size: 372 bytes */
void FUN_1006b7b8(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}

/* Address: 0x1006b92c Size: 220 bytes */
void FUN_1006b92c(int *param_1,char param_2,char param_3)

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

/* Address: 0x1006ba08 Size: 196 bytes */
void FUN_1006ba08(int *param_1,char param_2,char param_3)

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

/* Address: 0x1006bacc Size: 148 bytes */
void FUN_1006bacc(int *param_1)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xc);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5f4));
  }
  FUN_100b2d10(puVar2,0x33646261,1);
  param_1[0x31] = (int)puVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar2,0,0);
  return;
}

/* Address: 0x1006bb60 Size: 208 bytes */
void FUN_1006bb60(int *param_1)

{
  int local_15c;
  char auStack_12c [8];
  char auStack_124 [16];
  char local_114 [276];
  
  local_114[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_124);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_124,auStack_12c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_114);
  FUN_100672bc(local_114,auStack_12c,0,1,param_1,*(int *)(local_15c + -0x1830),0xf5,0xf9);
  return;
}

/* Address: 0x1006bc30 Size: 460 bytes */
void FUN_1006bc30(int *param_1)

{
  int iVar1;
  char auStack_98 [48];
  char auStack_68 [8];
  char auStack_60 [48];
  short local_30 [2];
  char auStack_2c [44];
  
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_2c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_2c,auStack_68);
  FUN_10066d04(auStack_60,auStack_68);
  iVar1 = FUN_10066e64(auStack_60,local_30);
  while (iVar1 != 0) {
    if (local_30[0] < 4) {
      if (*(char *)(param_1 + 0x21) == '\0') {
        FUN_10117884(param_1[0x31] + (int)*(short *)(*(int *)param_1[0x31] + 0xb8),param_1,
                     auStack_2c);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_2c);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_2c);
        FUN_10117884(param_1[0x31] + (int)*(short *)(*(int *)param_1[0x31] + 0xb8),param_1,
                     auStack_2c);
      }
    }
    else {
      FUN_10117884(param_1[0x31] + (int)*(short *)(*(int *)param_1[0x31] + 0xb8),param_1,auStack_2c)
      ;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_2c);
    }
    iVar1 = FUN_10066e64(auStack_60,local_30);
  }
  FUN_10066df4(auStack_60,2);
  FUN_10066c80(auStack_98,2);
  return;
}

/* Address: 0x1006bdfc Size: 380 bytes */
void FUN_1006bdfc(int *param_1)

{
  long long uVar1;
  int iVar2;
  unsigned long long uVar3;
  char auStack_98 [48];
  char auStack_68 [16];
  char auStack_58 [48];
  short local_28 [2];
  char auStack_24 [36];
  
  uVar3 = (unsigned long long)uRam101177f0;
  FUN_10066bf4(auStack_98);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_68);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_68,auStack_24);
  uVar1 = FUN_100b0574(auStack_24);
  FUN_10003348(uVar1,1,1);
  FUN_10066d04(auStack_58,auStack_24);
  iVar2 = FUN_10066e64(auStack_58,local_28);
  while (iVar2 != 0) {
    if (local_28[0] < 2) {
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,1,1);
      FUN_10002118(uVar3 + 0xb2);
      FUN_10002130(0xb);
      FUN_100b0578(auStack_24);
      FUN_10002148();
      uVar1 = FUN_100b0574(auStack_24);
      FUN_10003348(uVar1,0xffffffffffffffff,0xffffffffffffffff);
    }
    iVar2 = FUN_10066e64(auStack_58,local_28);
  }
  FUN_10066df4(auStack_58,2);
  FUN_10066c80(auStack_98,2);
  return;
}

/* Address: 0x1006bf80 Size: 84 bytes */
int * FUN_1006bf80()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xc);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5f4));
  }
  return puVar2;
}

/* Address: 0x1006bfd4 Size: 56 bytes */
void FUN_1006bfd4(long long param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_100b0578(param_2);
  FUN_10000738(uVar1,10,10);
  return;
}

/* Address: 0x1006c00c Size: 380 bytes */
void FUN_1006c00c(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(param_2[1] + 1,*param_2 + 1);
    FUN_10001d88(param_2[1] + 1,*param_2 + 1);
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(param_2[1] + 2,*param_2 + 2);
    FUN_10001d88(param_2[1] + 2,*param_2 + 2);
  }
  else {
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(param_2[1] + 1,*param_2 + 1);
    FUN_10001d88(param_2[1] + 1,*param_2 + 1);
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(param_2[1] + 2,*param_2 + 2);
    FUN_10001d88(param_2[1] + 2,*param_2 + 2);
  }
  return;
}

/* Address: 0x1006c188 Size: 380 bytes */
void FUN_1006c188(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(param_2[3] + -2,*param_2 + 1);
    FUN_10001d88(param_2[3] + -2,*param_2 + 1);
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(param_2[3] + -3,*param_2 + 2);
    FUN_10001d88(param_2[3] + -3,*param_2 + 2);
  }
  else {
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(param_2[3] + -2,*param_2 + 1);
    FUN_10001d88(param_2[3] + -2,*param_2 + 1);
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(param_2[3] + -3,*param_2 + 2);
    FUN_10001d88(param_2[3] + -3,*param_2 + 2);
  }
  return;
}

/* Address: 0x1006c304 Size: 380 bytes */
void FUN_1006c304(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(*(short *)(param_2 + 2) + 1,*(short *)(param_2 + 4) + -2);
    FUN_10001d88(*(short *)(param_2 + 2) + 1,*(short *)(param_2 + 4) + -2);
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(*(short *)(param_2 + 2) + 2,*(short *)(param_2 + 4) + -3);
    FUN_10001d88(*(short *)(param_2 + 2) + 2,*(short *)(param_2 + 4) + -3);
  }
  else {
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(*(short *)(param_2 + 2) + 1,*(short *)(param_2 + 4) + -2);
    FUN_10001d88(*(short *)(param_2 + 2) + 1,*(short *)(param_2 + 4) + -2);
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(*(short *)(param_2 + 2) + 2,*(short *)(param_2 + 4) + -3);
    FUN_10001d88(*(short *)(param_2 + 2) + 2,*(short *)(param_2 + 4) + -3);
  }
  return;
}

/* Address: 0x1006c480 Size: 380 bytes */
void FUN_1006c480(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
    FUN_10001d88(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(*(short *)(param_2 + 6) + -3,*(short *)(param_2 + 4) + -3);
    FUN_10001d88(*(short *)(param_2 + 6) + -3,*(short *)(param_2 + 4) + -3);
  }
  else {
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
    FUN_10001d88(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(*(short *)(param_2 + 6) + -3,*(short *)(param_2 + 4) + -3);
    FUN_10001d88(*(short *)(param_2 + 6) + -3,*(short *)(param_2 + 4) + -3);
  }
  return;
}

/* Address: 0x1006c5fc Size: 1552 bytes */
void FUN_1006c5fc(long long param_1,short *param_2,char param_3)

{
  int *puVar1;
  int iVar2;
  short *psVar4;
  long long uVar3;
  short *psVar5;
  short *psVar6;
  short local_30 [4];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  iVar2 = iRam101176cc;
  puVar1 = puRam10116c68;
  psVar5 = (short *)(((char*)0) + -0x30);
  psVar6 = (short *)(((char*)0) + -0x28);
  psVar4 = psVar6;
  if ((((char*)0) != (char *)0x28) ||
     (psVar4 = (short *)FUN_100f56e4(8), psVar4 != (short *)0x0)) {
    *psVar4 = *param_2;
    psVar4[1] = param_2[1];
    psVar4[2] = param_2[2];
    psVar4[3] = param_2[3];
  }
  psVar4 = psVar5;
  if ((((char*)0) != (char *)0x30) ||
     (psVar4 = (short *)FUN_100f56e4(8), psVar4 != (short *)0x0)) {
    *psVar4 = *param_2;
    psVar4[1] = param_2[1];
    psVar4[2] = param_2[2];
    psVar4[3] = param_2[3];
  }
  if (param_3 == '\0') {
    FUN_100b2268(iVar2 + 0x5e2);
    FUN_100021c0();
    FUN_10000270(local_26 + 2,local_24 + -1);
    FUN_10001d88(local_22 + -3,local_24 + -1);
    FUN_10000270(local_22 + -1,local_24 + -3);
    FUN_10001d88(local_22 + -1,*psVar6 + 2);
    uVar3 = FUN_100b0574(psVar6);
    FUN_10003348(uVar3,1,1);
    FUN_100f0538(puVar1);
    FUN_10000270(local_26,local_24 + -2);
    FUN_10001d88(local_26,*psVar6 + 1);
    FUN_10000270(local_26 + 1,*psVar6);
    FUN_10001d88(local_22 + -2,*psVar6);
    FUN_100b2268(iVar2 + 0x5dc);
    FUN_100021c0();
    FUN_10000270(local_26 + 1,local_24 + -1);
    FUN_10001d88(local_22 + -2,local_24 + -1);
    FUN_10000270(local_22 + -1,local_24 + -2);
    FUN_10001d88(local_22 + -1,*psVar6 + 1);
    FUN_1006c00c(param_1,psVar5,*puVar1,puVar1[1],*puVar1,puVar1[1],0);
    FUN_1006c188(param_1,psVar5,*(int *)(iVar2 + 0x5d6),*(int *)(iVar2 + 0x5da),
                 *(int *)(iVar2 + 0x5d6),*(int *)(iVar2 + 0x5da),0);
    FUN_1006c304(param_1,psVar5,*(int *)(iVar2 + 0x5d6),*(int *)(iVar2 + 0x5da),
                 *(int *)(iVar2 + 0x5d6),*(int *)(iVar2 + 0x5da),0);
    FUN_1006c480(param_1,psVar5,*(int *)(iVar2 + 0x5dc),*(int *)(iVar2 + 0x5e0),
                 *(int *)(iVar2 + 0x5e2),*(int *)(iVar2 + 0x5e6),0);
  }
  else {
    FUN_100b2268(iVar2 + 0x5e8);
    FUN_100021c0();
    FUN_10000270(local_26,local_24 + -3);
    FUN_10001d88(local_26,*psVar6 + 2);
    FUN_10000270(local_26 + 2,*psVar6);
    FUN_10001d88(local_22 + -3,*psVar6);
    FUN_100b2268(iVar2 + 0x5c4);
    FUN_100021c0();
    FUN_10000270(local_26 + 2,local_24 + -1);
    FUN_10001d88(local_22 + -3,local_24 + -1);
    FUN_10000270(local_22 + -1,local_24 + -3);
    FUN_10001d88(local_22 + -1,*psVar6 + 2);
    uVar3 = FUN_100b0574(psVar6);
    FUN_10003348(uVar3,1,1);
    FUN_100b2268(iVar2 + 0x5e2);
    FUN_100021c0();
    FUN_10000270(local_26,local_24 + -2);
    FUN_10001d88(local_26,*psVar6 + 1);
    FUN_10000270(local_26 + 1,*psVar6);
    FUN_10001d88(local_22 + -2,*psVar6);
    FUN_100b2268(iVar2 + 0x5d0);
    FUN_100021c0();
    FUN_10000270(local_26 + 1,local_24 + -1);
    FUN_10001d88(local_22 + -2,local_24 + -1);
    FUN_10000270(local_22 + -1,local_24 + -2);
    FUN_10001d88(local_22 + -1,*psVar6 + 1);
    FUN_1006c00c(param_1,psVar5,*(int *)(iVar2 + 0x5e2),*(int *)(iVar2 + 0x5e6),
                 *(int *)(iVar2 + 0x5e8),*(int *)(iVar2 + 0x5ec),param_3);
    FUN_1006c188(param_1,psVar5,*(int *)(iVar2 + 0x5e2),*(int *)(iVar2 + 0x5e6),
                 *(int *)(iVar2 + 0x5e8),*(int *)(iVar2 + 0x5ec),param_3);
    FUN_1006c304(param_1,psVar5,*(int *)(iVar2 + 0x5e2),*(int *)(iVar2 + 0x5e6),
                 *(int *)(iVar2 + 0x5e8),*(int *)(iVar2 + 0x5ec),param_3);
    FUN_1006c480(param_1,psVar5,*(int *)(iVar2 + 0x5c4),*(int *)(iVar2 + 0x5c8),
                 *(int *)(iVar2 + 0x5d0),*(int *)(iVar2 + 0x5d4),param_3);
  }
  return;
}

/* Address: 0x1006cc0c Size: 1680 bytes */
void FUN_1006cc0c(long long param_1,int *param_2,char param_3)

{
  int *puVar1;
  long long uVar2;
  int local_48;
  int local_44;
  int local_40;
  int uStack_3c;
  char auStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10116c68;
  local_28 = *param_2;
  local_24 = param_2[1];
  local_40 = *param_2;
  uStack_3c = param_2[1];
  if (param_3 == '\0') {
    FUN_100eef6c(auStack_38,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_38);
    FUN_10000270(((short)local_28) + 2,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10001d88(((short)local_24) + -3,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10000270(((short)local_24) + -1,((short)((unsigned int)local_24 >> 16)) + -3);
    FUN_10001d88(((short)local_24) + -1,((short)((unsigned int)local_28 >> 16)) + 2);
    uVar2 = FUN_100b0574(&local_28);
    FUN_10003348(uVar2,1,1);
    FUN_100f0538(puVar1);
    FUN_10000270(((short)local_28),((short)((unsigned int)local_24 >> 16)) + -2);
    FUN_10001d88(((short)local_28),((short)((unsigned int)local_28 >> 16)) + 1);
    FUN_10000270(((short)local_28) + 1,((short)((unsigned int)local_28 >> 16)));
    FUN_10001d88(((short)local_24) + -2,((short)((unsigned int)local_28 >> 16)));
    FUN_100eef6c(auStack_38,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_100f0538(auStack_38);
    FUN_10000270(((short)local_28) + 1,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10001d88(((short)local_24) + -2,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10000270(((short)local_24) + -1,((short)((unsigned int)local_24 >> 16)) + -2);
    FUN_10001d88(((short)local_24) + -1,((short)((unsigned int)local_28 >> 16)) + 1);
    FUN_1006c00c(param_1,&local_40,*puVar1,puVar1[1],*puVar1,puVar1[1],0);
    FUN_100eef6c(&local_30,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_1006c188(param_1,&local_40,local_30,local_2c,local_30,local_2c,0);
    FUN_1006c304(param_1,&local_40,local_30,local_2c,local_30,local_2c,0);
    FUN_100eef6c(&local_30,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_100eef6c(&local_48,0x2000,0x2000,0x2000);
    FUN_1006c480(param_1,&local_40,local_30,local_2c,local_48,local_44,0);
  }
  else {
    FUN_100eef6c(auStack_38,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_38);
    FUN_10000270(((short)local_28),((short)((unsigned int)local_24 >> 16)) + -3);
    FUN_10001d88(((short)local_28),((short)((unsigned int)local_28 >> 16)) + 2);
    FUN_10000270(((short)local_28) + 2,((short)((unsigned int)local_28 >> 16)));
    FUN_10001d88(((short)local_24) + -3,((short)((unsigned int)local_28 >> 16)));
    FUN_100eef6c(auStack_38,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_100f0538(auStack_38);
    FUN_10000270(((short)local_28) + 2,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10001d88(((short)local_24) + -3,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10000270(((short)local_24) + -1,((short)((unsigned int)local_24 >> 16)) + -3);
    FUN_10001d88(((short)local_24) + -1,((short)((unsigned int)local_28 >> 16)) + 2);
    uVar2 = FUN_100b0574(&local_28);
    FUN_10003348(uVar2,1,1);
    FUN_100eef6c(auStack_38,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_38);
    FUN_10000270(((short)local_28),((short)((unsigned int)local_24 >> 16)) + -2);
    FUN_10001d88(((short)local_28),((short)((unsigned int)local_28 >> 16)) + 1);
    FUN_10000270(((short)local_28) + 1,((short)((unsigned int)local_28 >> 16)));
    FUN_10001d88(((short)local_24) + -2,((short)((unsigned int)local_28 >> 16)));
    FUN_100eef6c(auStack_38,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_100f0538(auStack_38);
    FUN_10000270(((short)local_28) + 1,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10001d88(((short)local_24) + -2,((short)((unsigned int)local_24 >> 16)) + -1);
    FUN_10000270(((short)local_24) + -1,((short)((unsigned int)local_24 >> 16)) + -2);
    FUN_10001d88(((short)local_24) + -1,((short)((unsigned int)local_28 >> 16)) + 1);
    FUN_100eef6c(&local_30,0x2000,0x2000,0x2000);
    FUN_100eef6c(&local_48,0x2000,0x2000,0x2000);
    FUN_1006c00c(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
    FUN_100eef6c(&local_30,0x2000,0x2000,0x2000);
    FUN_100eef6c(&local_48,0x2000,0x2000,0x2000);
    FUN_1006c188(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
    FUN_1006c304(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
    FUN_100eef6c(&local_30,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_100eef6c(&local_48,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_1006c480(param_1,&local_40,local_30,local_2c,local_48,local_44,param_3);
  }
  return;
}

/* Address: 0x1006d29c Size: 1096 bytes */
void FUN_1006d29c(long long param_1,int *param_2)

{
  int *puVar1;
  int uVar2;
  int uVar3;
  int uVar4;
  int iVar6;
  long long uVar5;
  long long lVar7;
  unsigned long long uVar8;
  char auStack_b8 [48];
  char auStack_88 [16];
  char auStack_78 [48];
  short local_48 [2];
  int local_44;
  unsigned int uStack_40;
  char auStack_3c [60];
  
  uVar4 = uRam10116c68;
  uVar3 = uRam101160bc;
  uVar2 = uRam10116070;
  puVar1 = puRam1011606c;
  uVar8 = (unsigned long long)uRam101176cc;
  FUN_10066bf4(auStack_b8);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),auStack_88);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_88,auStack_3c);
  FUN_10066d04(auStack_78,auStack_3c);
  iVar6 = FUN_10066e64(auStack_78,local_48);
  while (iVar6 != 0) {
    if (local_48[0] < 8) {
      if (local_48[0] == 4) {
        if (*(char *)(param_2 + 0x21) == '\0') {
          iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
          if (iVar6 == 0) {
            FUN_100eef6c(&local_44,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
          }
          else {
            local_44 = *puVar1;
            uStack_40 = puVar1[1] & 0xffff0000;
          }
        }
        else {
          FUN_100eef6c(&local_44,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
        }
        FUN_100f0538(&local_44);
        uVar5 = FUN_100b0578(auStack_3c);
        FUN_10002cd0(uVar5,10,10);
        iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
        if (iVar6 == 0) {
          FUN_100f0538(uVar2);
        }
        else {
          FUN_100f0538(uVar3);
        }
        FUN_1006bfd4(param_1,auStack_3c);
        uVar5 = FUN_100b0574(auStack_3c);
        FUN_10003348(uVar5,1,1);
        iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
        if (iVar6 == 0) {
          FUN_1006cc0c(param_1,auStack_3c,*(char *)(param_2 + 0x21));
        }
        uVar5 = FUN_100b0574(auStack_3c);
        FUN_10003348(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      }
      else if (local_48[0] < 4) {
        if (*(char *)(param_2 + 0x21) == '\0') {
          FUN_100f03e8(uVar4);
          uVar5 = FUN_100b0578(auStack_3c);
          FUN_10000b28(uVar5,10,10);
          FUN_100f0538(uVar2);
          FUN_1006bfd4(param_1,auStack_3c);
        }
        else {
          uVar5 = FUN_100b0578(auStack_3c);
          FUN_10000b10(uVar5,10,10);
          FUN_100f0538(uVar2);
          FUN_1006bfd4(param_1,auStack_3c);
        }
      }
    }
    else {
      if (*(char *)(param_2 + 0x21) == '\0') {
        iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
        if (iVar6 == 0) {
          lVar7 = 0xf7;
        }
        else {
          lVar7 = 0xf6;
        }
      }
      else {
        lVar7 = 0xf9;
      }
      FUN_100b2268(lVar7 * 6 + uVar8);
      FUN_100021c0();
      uVar5 = FUN_100b0578(auStack_3c);
      FUN_10002cd0(uVar5,10,10);
      iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
      if (iVar6 == 0) {
        FUN_100f0538(uVar2);
      }
      else {
        FUN_100b2268(uVar8 + 0x5e2);
        FUN_100021c0();
      }
      FUN_1006bfd4(param_1,auStack_3c);
      uVar5 = FUN_100b0574(auStack_3c);
      FUN_10003348(uVar5,1,1);
      iVar6 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
      if (iVar6 == 0) {
        FUN_1006c5fc(param_1,auStack_3c,*(char *)(param_2 + 0x21));
      }
      uVar5 = FUN_100b0574(auStack_3c);
      FUN_10003348(uVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    iVar6 = FUN_10066e64(auStack_78,local_48);
  }
  FUN_10066df4(auStack_78,2);
  FUN_10066c80(auStack_b8,2);
  return;
}

/* Address: 0x1006d6ec Size: 84 bytes */
int * FUN_1006d6ec()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x10);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5f1));
  }
  return puVar2;
}

/* Address: 0x1006d740 Size: 3252 bytes */
void FUN_1006d740(int param_1,int *param_2)

{
  short sVar1;
  int *puVar3;
  int iVar4;
  short *psVar6;
  long long uVar5;
  int iVar7;
  long long lVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  char *puVar12;
  short *puVar13;
  char *puVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  int local_cc;
  char auStack_a8 [56];
  char auStack_70 [16];
  short local_60 [4];
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50 [4];
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short sVar2;
  
  iVar4 = iRam101176cc;
  puVar3 = puRam10116c68;
  puVar12 = ((char*)0) + -0xa8;
  puVar14 = ((char*)0) + -0x70;
  puVar13 = (short *)(((char*)0) + -0x60);
  psVar15 = (short *)(((char*)0) + -0x50);
  psVar16 = (short *)(((char*)0) + -0x48);
  psVar17 = (short *)(((char*)0) + -0x40);
  FUN_10066bf4(puVar12);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),puVar14);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),puVar14,psVar16);
  psVar6 = psVar15;
  if ((((char*)0) != (char *)0x50) ||
     (psVar6 = (short *)FUN_100f56e4(8), psVar6 != (short *)0x0)) {
    *psVar6 = *psVar16;
    psVar6[1] = *(short *)(((char*)0) + -0x46);
    psVar6[2] = *(short *)(((char*)0) + -0x44);
    psVar6[3] = *(short *)(((char*)0) + -0x42);
  }
  *puVar13 = 0xffee;
  FUN_100b06d4(psVar15,puVar13);
  if ((*(unsigned short *)(param_1 + 0xc) & 1) != 0) {
    *psVar15 = *psVar15 + 0x12;
  }
  if (*(char *)(param_2 + 0x21) == '\0') {
    iVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
    if (iVar7 == 0) {
      iVar7 = 0xf7;
    }
    else {
      iVar7 = 0xf6;
    }
  }
  else {
    iVar7 = 0xf9;
  }
  FUN_100b2268(iVar7 * 6 + iVar4);
  FUN_100021c0();
  uVar5 = FUN_100b0578(psVar15);
  FUN_10002cd0(uVar5,10,10);
  iVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar7 == 0) {
    FUN_100f0538(*(int *)(local_cc + -0x1830));
  }
  else {
    FUN_100b2268(iVar4 + 0x5e2);
    FUN_100021c0();
  }
  FUN_1006bfd4(param_1,psVar15);
  if ((*(unsigned short *)(param_1 + 0xc) & 1) == 0) {
    FUN_10000270(local_46,*psVar16);
    FUN_10001d88(local_42 + -1,*psVar16);
  }
  if ((*(unsigned short *)(param_1 + 0xc) & 2) == 0) {
    FUN_10000270(local_46,local_44 + -1);
    FUN_10001d88(local_42 + -1,local_44 + -1);
  }
  if ((*(unsigned short *)(param_1 + 0xc) & 4) == 0) {
    FUN_10000270(local_46,*psVar16);
    FUN_10001d88(local_46,local_44 + -1);
  }
  if ((*(unsigned short *)(param_1 + 0xc) & 8) == 0) {
    FUN_10000270(local_42 + -1,*psVar16);
    FUN_10001d88(local_42 + -1,local_44 + -1);
  }
  uVar5 = FUN_100b0574(psVar16);
  FUN_10003348(uVar5,1,1);
  iVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar7 == 0) {
    local_56 = 0;
    local_52 = 0;
    local_58 = 0;
    local_54 = 0;
    if ((*(unsigned short *)(param_1 + 0xc) & 1) != 0) {
      local_58 = 2;
    }
    if ((*(unsigned short *)(param_1 + 0xc) & 2) != 0) {
      local_54 = 2;
    }
    if ((*(unsigned short *)(param_1 + 0xc) & 4) != 0) {
      local_56 = 2;
    }
    if ((*(unsigned short *)(param_1 + 0xc) & 8) != 0) {
      local_52 = 2;
    }
    psVar6 = psVar17;
    if ((((char*)0) != (char *)0x40) ||
       (psVar6 = (short *)FUN_100f56e4(8), psVar6 != (short *)0x0)) {
      *psVar6 = *psVar16;
      psVar6[1] = *(short *)(((char*)0) + -0x46);
      psVar6[2] = *(short *)(((char*)0) + -0x44);
      psVar6[3] = *(short *)(((char*)0) + -0x42);
    }
    sVar11 = local_58 >> 1;
    sVar1 = local_54 >> 1;
    sVar10 = local_56 >> 1;
    sVar2 = local_52 >> 1;
    if (*(char *)(param_2 + 0x21) == '\0') {
      FUN_100b2268(iVar4 + 0x5e2);
      FUN_100021c0();
      if (local_54 == 0) {
        local_56 = 0;
      }
      FUN_10000270(local_3e + local_56,local_3c + -1);
      if (local_54 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)local_52;
      }
      FUN_10001d88((local_3a - lVar8) + -1,local_3c + -1);
      if (local_52 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)local_54;
      }
      FUN_10000270(local_3a + -1,(local_3c - lVar8) + -1);
      if (local_52 == 0) {
        local_58 = 0;
      }
      FUN_10001d88(local_3a + -1,*psVar17 + local_58);
      uVar5 = FUN_100b0574(psVar17);
      FUN_10003348(uVar5,1,1);
      FUN_100f0538(puVar3);
      if (sVar10 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar1;
      }
      FUN_10000270(local_3e,(local_3c - lVar8) + -1);
      sVar9 = sVar11;
      if (sVar10 == 0) {
        sVar9 = 0;
      }
      FUN_10001d88(local_3e,*psVar17 + sVar9);
      sVar9 = sVar10;
      if (sVar11 == 0) {
        sVar9 = 0;
      }
      FUN_10000270(local_3e + sVar9,*psVar17);
      if (sVar11 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar2;
      }
      FUN_10001d88((local_3a - lVar8) + -1,*psVar17);
      FUN_100b2268(iVar4 + 0x5dc);
      FUN_100021c0();
      if (sVar1 == 0) {
        sVar10 = 0;
      }
      FUN_10000270(local_3e + sVar10,local_3c + -1);
      if (sVar1 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar2;
      }
      FUN_10001d88((local_3a - lVar8) + -1,local_3c + -1);
      if (sVar2 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar1;
      }
      FUN_10000270(local_3a + -1,(local_3c - lVar8) + -1);
      if (sVar2 == 0) {
        sVar11 = 0;
      }
      FUN_10001d88(local_3a + -1,*psVar17 + sVar11);
      FUN_1006c00c(param_1,psVar15,*puVar3,puVar3[1],*puVar3,puVar3[1],
                   *(char *)(param_2 + 0x21));
      FUN_1006c188(param_1,psVar15,*(int *)(iVar4 + 0x5d6),*(int *)(iVar4 + 0x5da),
                   *(int *)(iVar4 + 0x5d6),*(int *)(iVar4 + 0x5da),1);
      FUN_1006c304(param_1,psVar15,*(int *)(iVar4 + 0x5d6),*(int *)(iVar4 + 0x5da),
                   *(int *)(iVar4 + 0x5d6),*(int *)(iVar4 + 0x5da),1);
      FUN_1006c480(param_1,psVar15,*(int *)(iVar4 + 0x5dc),*(int *)(iVar4 + 0x5e0),
                   *(int *)(iVar4 + 0x5e2),*(int *)(iVar4 + 0x5e6),1);
    }
    else {
      FUN_100b2268(iVar4 + 0x5e8);
      FUN_100021c0();
      if (local_56 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)local_54;
      }
      FUN_10000270(local_3e,(local_3c - lVar8) + -1);
      sVar9 = local_58;
      if (local_56 == 0) {
        sVar9 = 0;
      }
      FUN_10001d88(local_3e,*psVar17 + sVar9);
      sVar9 = local_56;
      if (local_58 == 0) {
        sVar9 = 0;
      }
      FUN_10000270(local_3e + sVar9,*psVar17);
      if (local_58 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)local_52;
      }
      FUN_10001d88((local_3a - lVar8) + -1,*psVar17);
      FUN_100b2268(iVar4 + 0x5c4);
      FUN_100021c0();
      if (local_54 == 0) {
        local_56 = 0;
      }
      FUN_10000270(local_3e + local_56,local_3c + -1);
      if (local_54 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)local_52;
      }
      FUN_10001d88((local_3a - lVar8) + -1,local_3c + -1);
      if (local_52 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)local_54;
      }
      FUN_10000270(local_3a + -1,(local_3c - lVar8) + -1);
      if (local_52 == 0) {
        local_58 = 0;
      }
      FUN_10001d88(local_3a + -1,*psVar17 + local_58);
      uVar5 = FUN_100b0574(psVar17);
      FUN_10003348(uVar5,1,1);
      FUN_100b2268(iVar4 + 0x5e2);
      FUN_100021c0();
      if (sVar10 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar1;
      }
      FUN_10000270(local_3e,(local_3c - lVar8) + -1);
      sVar9 = sVar11;
      if (sVar10 == 0) {
        sVar9 = 0;
      }
      FUN_10001d88(local_3e,*psVar17 + sVar9);
      sVar9 = sVar10;
      if (sVar11 == 0) {
        sVar9 = 0;
      }
      FUN_10000270(local_3e + sVar9,*psVar17);
      if (sVar11 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar2;
      }
      FUN_10001d88((local_3a - lVar8) + -1,*psVar17);
      FUN_100b2268(iVar4 + 0x5d0);
      FUN_100021c0();
      if (sVar1 == 0) {
        sVar10 = 0;
      }
      FUN_10000270(local_3e + sVar10,local_3c + -1);
      if (sVar1 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar2;
      }
      FUN_10001d88((local_3a - lVar8) + -1,local_3c + -1);
      if (sVar2 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long long)sVar1;
      }
      FUN_10000270(local_3a + -1,(local_3c - lVar8) + -1);
      if (sVar2 == 0) {
        sVar11 = 0;
      }
      FUN_10001d88(local_3a + -1,*psVar17 + sVar11);
      FUN_1006c00c(param_1,psVar15,*(int *)(iVar4 + 0x5e2),*(int *)(iVar4 + 0x5e6),
                   *(int *)(iVar4 + 0x5e8),*(int *)(iVar4 + 0x5ec),1);
      FUN_1006c188(param_1,psVar15,*(int *)(iVar4 + 0x5e2),*(int *)(iVar4 + 0x5e6),
                   *(int *)(iVar4 + 0x5e8),*(int *)(iVar4 + 0x5ec),1);
      FUN_1006c304(param_1,psVar15,*(int *)(iVar4 + 0x5e2),*(int *)(iVar4 + 0x5e6),
                   *(int *)(iVar4 + 0x5e8),*(int *)(iVar4 + 0x5ec),1);
      FUN_1006c480(param_1,psVar15,*(int *)(iVar4 + 0x5c4),*(int *)(iVar4 + 0x5c8),
                   *(int *)(iVar4 + 0x5d0),*(int *)(iVar4 + 0x5d4),1);
    }
  }
  uVar5 = FUN_100b0574(psVar16);
  FUN_10003348(uVar5,0xffffffffffffffff,0xffffffffffffffff);
  FUN_10066c80(puVar12,2);
  return;
}

/* Address: 0x1006e3fc Size: 84 bytes */
int * FUN_1006e3fc()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xc);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5fb));
  }
  return puVar2;
}

/* Address: 0x1006e450 Size: 1812 bytes */
void FUN_1006e450(long long param_1,int *param_2)

{
  short sVar2;
  int iVar1;
  short sVar3;
  long long lVar4;
  unsigned long long uVar5;
  short sVar6;
  short sVar7;
  int local_9c;
  unsigned short local_78;
  unsigned short local_76;
  char auStack_70 [48];
  char auStack_40 [16];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  uVar5 = (unsigned long long)uRam101176cc;
  FUN_10066bf4(auStack_70);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),auStack_40);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),auStack_40,&local_30);
  FUN_100b08d4(&local_78,&local_30);
  sVar6 = ((short)local_76 >> 1) + (unsigned short)((short)local_76 < 0 && (local_76 & 1) != 0);
  sVar7 = ((short)local_78 >> 1) + (unsigned short)((short)local_78 < 0 && (local_78 & 1) != 0);
  if (*(char *)(param_2 + 0x21) == '\0') {
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
    if (iVar1 == 0) {
      lVar4 = 0xf7;
    }
    else {
      lVar4 = 0xf6;
    }
  }
  else {
    lVar4 = 0xf9;
  }
  FUN_100b2268(lVar4 * 6 + uVar5);
  FUN_100021c0();
  sVar2 = local_2e + sVar6;
  sVar3 = local_30;
  if ((int)sVar2 <= local_2a + -1) {
    do {
      FUN_10000270(sVar2,sVar3);
      FUN_10000288(-(long long)sVar6,sVar7);
      if ((int)sVar2 < local_2a + -1) {
        FUN_10000270(sVar2,sVar3 + 1);
        FUN_10000288(-(long long)sVar6,sVar7 + -1);
      }
      sVar2 = sVar2 + 1;
      sVar3 = sVar3 + 1;
    } while ((int)sVar2 <= local_2a + -1);
  }
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar1 == 0) {
    FUN_100f0538(*(int *)(local_9c + -0x1830));
  }
  else {
    FUN_100b2268(uVar5 + 0x5e2);
    FUN_100021c0();
  }
  FUN_10000270(local_2e + sVar6 + -1,local_30);
  FUN_10000288(1 - sVar6,sVar7 + -1);
  FUN_10000270(local_2a - sVar6,local_30);
  FUN_10000288(sVar6 + -1,sVar7 + -1);
  FUN_10000270(sVar6 + local_2e + -1,local_2c + -1);
  FUN_10000288(1 - sVar6,1 - sVar7);
  FUN_10000270(local_2a - sVar6,local_2c + -1);
  FUN_10000288(sVar6 + -1,1 - sVar7);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar1 == 0) {
    if (*(char *)(param_2 + 0x21) == '\0') {
      FUN_100f0538(*(int *)(local_9c + -0xc38));
      FUN_10000270(local_2e + sVar6 + -1,local_30 + 2);
      sVar3 = sVar7 + -3;
      FUN_10000288(3 - sVar6,sVar3);
      FUN_100b2268(uVar5 + 0x5d6);
      FUN_100021c0();
      FUN_10000270(local_2a - sVar6,local_30 + 2);
      FUN_10000288(sVar6 + -3,sVar3);
      FUN_10000270(local_2e + 2,local_2c - sVar7);
      FUN_10000288(sVar6 + -3,sVar3);
      FUN_10000270(sVar6 + local_2e + -1,local_2c + -2);
      FUN_10000288(0,0);
      FUN_10000270(local_2a + -2,sVar7 + local_30 + -1);
      FUN_10000288(0,0);
      FUN_100b2268(uVar5 + 0x5dc);
      FUN_100021c0();
      FUN_10000270(local_2a + -3,local_2c - sVar7);
      FUN_10000288(3 - sVar6,sVar3);
      FUN_100b2268(uVar5 + 0x5e2);
      FUN_100021c0();
      FUN_10000270(local_2a + -2,local_2c - sVar7);
      FUN_10000288(2 - sVar6,sVar7 + -2);
    }
    else {
      FUN_100b2268(uVar5 + 0x5e8);
      FUN_100021c0();
      FUN_10000270(local_2e + sVar6 + -1,local_30 + 1);
      FUN_10000288(2 - sVar6,sVar7 + -2);
      FUN_100b2268(uVar5 + 0x5e2);
      FUN_100021c0();
      FUN_10000270(sVar6 + local_2e + -1,local_30 + 2);
      sVar2 = sVar7 + -3;
      FUN_10000288(3 - sVar6,sVar2);
      FUN_10000270(local_2a - sVar6,local_30 + 1);
      sVar3 = sVar6 + -3;
      FUN_10000288(sVar3,sVar2);
      FUN_10000270(local_2e + 1,local_2c - sVar7);
      FUN_10000288(sVar3,sVar2);
      FUN_100b2268(uVar5 + 0x5dc);
      FUN_100021c0();
      FUN_10000270(local_2a - sVar6,local_30 + 2);
      FUN_10000288(sVar3,sVar2);
      FUN_10000270(local_2e + 2,local_2c - sVar7);
      FUN_10000288(sVar3,sVar2);
      FUN_100b2268(uVar5 + 0x5d0);
      FUN_100021c0();
      FUN_10000270(local_2a + -2,sVar7 + local_30 + -1);
      FUN_10000288(1 - sVar6,sVar7 + -1);
      FUN_100b2268(uVar5 + 0x5ca);
      FUN_100021c0();
      FUN_10000270(local_2a + -2,sVar7 + local_30);
      FUN_10000288(2 - sVar6,sVar7 + -2);
    }
    FUN_10066c80(auStack_70,2);
  }
  else {
    FUN_10066c80(auStack_70,2);
  }
  return;
}

/* Address: 0x1006eb6c Size: 84 bytes */
int * FUN_1006eb6c()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xc);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5ef));
  }
  return puVar2;
}

/* Address: 0x1006ebc0 Size: 52 bytes */
void FUN_1006ebc0(long long param_1,char param_2)

{
  FUN_100b2d10(param_1,0x33646961,param_2);
  return;
}

/* Address: 0x1006ebf4 Size: 772 bytes */
void FUN_1006ebf4(int *param_1,int *param_2)

{
  int iVar2;
  long long uVar1;
  short *puVar3;
  char *puVar4;
  char *puVar5;
  char *puVar6;
  char *puVar7;
  short *puVar8;
  short *puVar9;
  short *psVar10;
  int local_fc;
  char auStack_d8 [48];
  char auStack_a8 [16];
  char auStack_98 [48];
  char auStack_68 [48];
  short local_38 [4];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28 [20];
  
  puVar4 = ((char*)0) + -0xd8;
  puVar5 = ((char*)0) + -0xa8;
  puVar6 = ((char*)0) + -0x98;
  puVar7 = ((char*)0) + -0x68;
  puVar8 = (short *)(((char*)0) + -0x38);
  puVar9 = (short *)(((char*)0) + -0x30);
  psVar10 = (short *)(((char*)0) + -0x28);
  FUN_10066bf4(puVar4);
  FUN_10067270();
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x730),puVar5);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x288),puVar5,puVar9);
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar2 == 0) {
    FUN_100f0538(*(int *)(local_fc + -0x1830));
  }
  else {
    FUN_100f0538(*(int *)(local_fc + -0x17e4));
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),puVar9);
  uVar1 = FUN_100b0574(puVar9);
  FUN_10003348(uVar1,1,1);
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x758));
  if (iVar2 == 0) {
    FUN_10066d04(puVar7,puVar9);
    iVar2 = FUN_10066e64(puVar7,psVar10);
    while (iVar2 != 0) {
      if (*psVar10 < 8) {
        if (*psVar10 == 4) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf8),puVar9,
                       *(char *)(param_2 + 0x21));
        }
        else if (*psVar10 < 4) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),puVar9,
                       *(char *)(param_2 + 0x21));
        }
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0),puVar9,
                     *(char *)(param_2 + 0x21));
      }
      iVar2 = FUN_10066e64(puVar7,psVar10);
    }
    FUN_10066df4(puVar7,2);
  }
  else {
    FUN_10066d04(puVar6,puVar9);
    iVar2 = FUN_10066e64(puVar6,psVar10);
    while (iVar2 != 0) {
      if (*psVar10 < 4) {
        puVar3 = puVar8;
        if ((((char*)0) != (char *)0x38) ||
           (puVar3 = (short *)FUN_100f56e4(8), puVar3 != (short *)0x0)) {
          *puVar3 = *puVar9;
          puVar3[1] = *(short *)(((char*)0) + -0x2e);
          puVar3[2] = *(short *)(((char*)0) + -0x2c);
          puVar3[3] = *(short *)(((char*)0) + -0x2a);
        }
        FUN_10067270();
        uVar1 = FUN_100b0574(puVar8);
        FUN_10003348(uVar1,0xffffffffffffffff,0xffffffffffffffff);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),puVar8);
      }
      iVar2 = FUN_10066e64(puVar6,psVar10);
    }
    FUN_10066df4(puVar6,2);
  }
  FUN_10066c80(puVar4,2);
  return;
}

/* Address: 0x1006eef8 Size: 1284 bytes */
void FUN_1006eef8(int *param_1,int *param_2,char param_3)

{
  int *puVar1;
  int *puVar2;
  int *puVar3;
  long long uVar4;
  int local_7c;
  int local_58;
  int local_54;
  int local_50;
  int uStack_4c;
  int local_48;
  int uStack_44;
  int local_40;
  unsigned int local_3c;
  int local_38;
  unsigned int uStack_34;
  
  puVar3 = puRam10116c68;
  puVar2 = puRam101160c4;
  puVar1 = puRam101160bc;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  local_50 = *param_2;
  uStack_4c = param_2[1];
  if (param_3 == '\0') {
    local_38 = *puRam101160c4;
    uStack_34 = puRam101160c4[1] & 0xffff0000;
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    FUN_100eef6c(&local_38,0x7777,0x7777,0x7777);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    uVar4 = FUN_100b0574(&local_48);
    FUN_10003348(uVar4,1,1);
    FUN_100f0538(puVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    local_38 = *puVar1;
    uStack_34 = puVar1[1] & 0xffff0000;
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_50,*puVar3,puVar3[1],
                 *puVar3,puVar3[1]);
    FUN_100eef6c(&local_40,0xffffffffffffcccc,0xffffffffffffcccc,0xffffffffffffcccc);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_50,local_40,local_3c,
                 local_40,local_3c);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_50,local_40,local_3c,
                 local_40,local_3c);
    FUN_100eef6c(&local_40,0x5555,0x5555,0x5555);
    FUN_100eef6c(&local_58,0x4444,0x4444,0x4444);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_50,local_40,local_3c,
                 local_58,local_54,0);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
  }
  else {
    FUN_100eef6c(&local_38,0x4444,0x4444,0x4444);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    FUN_100eef6c(&local_38,0xffffffffffffcccc,0xffffffffffffcccc,0xffffffffffffcccc);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    uVar4 = FUN_100b0574(&local_48);
    FUN_10003348(uVar4,1,1);
    FUN_100eef6c(&local_38,0x5555,0x5555,0x5555);
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_48);
    local_38 = **(int **)(local_7c + -0x17e8);
    uStack_34 = (*(int **)(local_7c + -0x17e8))[1] & 0xffff0000;
    FUN_100f0538(&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_48);
    FUN_100eef6c(&local_40,0x4444,0x4444,0x4444);
    FUN_100eef6c(&local_58,0x2222,0x2222,0x2222);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_50,local_40,local_3c,
                 local_58,local_54);
    local_40 = *puVar1;
    local_3c = puVar1[1] & 0xffff0000;
    FUN_100eef6c(&local_58,0x7777,0x7777,0x7777);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_50,local_40,local_3c,
                 local_58,local_54);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_50,local_40,local_3c,
                 local_58,local_54);
    local_40 = *puVar2;
    local_3c = puVar2[1] & 0xffff0000;
    FUN_100eef6c(&local_58,0xffffffffffffcccc,0xffffffffffffcccc,0xffffffffffffcccc);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_50,local_40,local_3c,
                 local_58,local_54,param_3);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
  }
  uStack_34 = uStack_34 & 0xffff0000;
  uVar4 = FUN_100b0574(&local_48);
  FUN_10003348(uVar4,1,1);
  FUN_100f0538(&local_38);
  FUN_100b0578(&local_48);
  FUN_10002148();
  return;
}

/* Address: 0x1006f3fc Size: 1312 bytes */
void FUN_1006f3fc(int *param_1,int *param_2,char param_3,long long param_4,
                 long long param_5,long long param_6)

{
  int *puVar1;
  long long uVar2;
  char auStack_48 [8];
  int local_40;
  int uStack_3c;
  int local_38;
  int uStack_34;
  char auStack_30 [8];
  int local_28;
  int local_24;
  
  puVar1 = puRam10116c68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  local_40 = *param_2;
  uStack_3c = param_2[1];
  if (param_3 == '\0') {
    FUN_100eef6c(auStack_30,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000,uStack_3c,
                 param_6,auStack_48);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    uVar2 = FUN_100b0574(&local_38);
    FUN_10003348(uVar2,1,1);
    FUN_100f0538(puVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_40,*puVar1,puVar1[1],
                 *puVar1,puVar1[1]);
    FUN_100eef6c(&local_28,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0x2000,0x2000,0x2000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_40,local_28,local_24,
                 local_28,local_24,0);
    FUN_100eef6c(auStack_30,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
  }
  else {
    FUN_100eef6c(auStack_30,0x2000,0x2000,0x2000,uStack_3c,param_6,auStack_48);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    uVar2 = FUN_100b0574(&local_38);
    FUN_10003348(uVar2,1,1);
    FUN_100eef6c(auStack_30,0x2000,0x2000,0x2000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&local_38);
    FUN_100eef6c(auStack_30,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_100f0538(auStack_30);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_38);
    FUN_100eef6c(&local_28,0x2000,0x2000,0x2000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),&local_40,local_28,local_24,
                 local_28,local_24);
    FUN_100eef6c(&local_28,0xffffffffffffc000,0xffffffffffffc000,0xffffffffffffc000);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&local_40,local_28,local_24,
                 local_28,local_24,param_3);
    FUN_100eef6c(auStack_30,0xffffffffffff8000,0xffffffffffff8000,0xffffffffffff8000);
  }
  uVar2 = FUN_100b0574(&local_38);
  FUN_10003348(uVar2,1,1);
  FUN_100f0538(auStack_30);
  FUN_100b0578(&local_38);
  FUN_10002148();
  return;
}

/* Address: 0x1006f91c Size: 264 bytes */
void FUN_1006f91c(int *param_1,int *param_2,char param_3)

{
  long long uVar1;
  unsigned long long uVar2;
  int local_28;
  int uStack_24;
  int local_20;
  int uStack_1c;
  
  uVar2 = (unsigned long long)uRam101177f0;
  FUN_10067270();
  local_28 = *param_2;
  uStack_24 = param_2[1];
  local_20 = local_28;
  uStack_1c = uStack_24;
  FUN_10002118(uVar2 + 0xc2);
  FUN_10000708(0x1e);
  FUN_100b0578(&local_20);
  FUN_10002148();
  FUN_10002118(uVar2 + 0xb2);
  FUN_10000708(0x21);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_20);
  uVar1 = FUN_100b0574(&local_20);
  FUN_10003348(uVar1,1,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),&local_20);
  if (param_3 != '\0') {
    FUN_100b0578(&local_28);
    FUN_10001da0();
  }
  return;
}

/* Address: 0x1006fa24 Size: 264 bytes */
void FUN_1006fa24(long long param_1,short *param_2)

{
  FUN_10000270(param_2[1],param_2[2] + -2);
  FUN_10001d88(param_2[1],*param_2 + 1);
  FUN_10000270(param_2[1] + 1,*param_2);
  FUN_10001d88(param_2[3] + -2,*param_2);
  FUN_10000270(param_2[1] + 1,param_2[2] + -1);
  FUN_10001d88(param_2[3] + -2,param_2[2] + -1);
  FUN_10000270(param_2[3] + -1,param_2[2] + -2);
  FUN_10001d88(param_2[3] + -1,*param_2 + 1);
  return;
}

/* Address: 0x1006fb2c Size: 104 bytes */
void FUN_1006fb2c(long long param_1,short *param_2)

{
  FUN_10000270(param_2[1],param_2[2] + -2);
  FUN_10001d88(param_2[1],*param_2);
  FUN_10001d88(param_2[3] + -2,*param_2);
  return;
}

/* Address: 0x1006fb94 Size: 120 bytes */
void FUN_1006fb94(long long param_1,short *param_2)

{
  FUN_10000270(param_2[1],param_2[2] + -1);
  FUN_10001d88(param_2[3] + -1,param_2[2] + -1);
  FUN_10001d88(param_2[3] + -1,*param_2);
  return;
}

/* Address: 0x1006fc0c Size: 176 bytes */
void FUN_1006fc0c(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  FUN_100f0538(((char*)0 + 0x00000028));
  FUN_10000270(param_2[1],*param_2);
  FUN_10001d88(param_2[1],*param_2);
  FUN_100f0538(((char*)0 + 0x00000020));
  FUN_10000270(param_2[1] + 1,*param_2 + 1);
  FUN_10001d88(param_2[1] + 1,*param_2 + 1);
  return;
}

/* Address: 0x1006fcbc Size: 192 bytes */
void FUN_1006fcbc(long long param_1,short *param_2,int param_3,int param_4,
                 int param_5,int param_6)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  FUN_100f0538(((char*)0 + 0x00000020));
  FUN_10000270(param_2[3] + -1,*param_2);
  FUN_10001d88(param_2[3] + -1,*param_2);
  FUN_100f0538(((char*)0 + 0x00000028));
  FUN_10000270(param_2[3] + -2,*param_2 + 1);
  FUN_10001d88(param_2[3] + -2,*param_2 + 1);
  return;
}

/* Address: 0x1006fd7c Size: 192 bytes */
void FUN_1006fd7c(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  FUN_100f0538(((char*)0 + 0x00000020));
  FUN_10000270(*(short *)(param_2 + 2),*(short *)(param_2 + 4) + -1);
  FUN_10001d88(*(short *)(param_2 + 2),*(short *)(param_2 + 4) + -1);
  FUN_100f0538(((char*)0 + 0x00000028));
  FUN_10000270(*(short *)(param_2 + 2) + 1,*(short *)(param_2 + 4) + -2);
  FUN_10001d88(*(short *)(param_2 + 2) + 1,*(short *)(param_2 + 4) + -2);
  return;
}

/* Address: 0x1006fe3c Size: 380 bytes */
void FUN_1006fe3c(long long param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,char param_7)

{
  int uStack00000020;
  int uStack00000024;
  int uStack00000028;
  int uStack0000002c;
  
  uStack00000020 = param_3;
  uStack00000024 = param_4;
  uStack00000028 = param_5;
  uStack0000002c = param_6;
  if (param_7 == '\0') {
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(*(short *)(param_2 + 6) + -1,*(short *)(param_2 + 4) + -1);
    FUN_10001d88(*(short *)(param_2 + 6) + -1,*(short *)(param_2 + 4) + -1);
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
    FUN_10001d88(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
  }
  else {
    FUN_100f0538(((char*)0 + 0x00000020));
    FUN_10000270(*(short *)(param_2 + 6) + -1,*(short *)(param_2 + 4) + -1);
    FUN_10001d88(*(short *)(param_2 + 6) + -1,*(short *)(param_2 + 4) + -1);
    FUN_100f0538(((char*)0 + 0x00000028));
    FUN_10000270(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
    FUN_10001d88(*(short *)(param_2 + 6) + -2,*(short *)(param_2 + 4) + -2);
  }
  return;
}

/* Address: 0x1006ffc0 Size: 136 bytes */
int * FUN_1006ffc0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xb4),
     param_1 != (int *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x5ed));
    *(short *)(param_1 + 0x2a) = 0xffff;
    *(short *)((int)param_1 + 0xaa) = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0xffffffff;
  }
  return param_1;
}

/* Address: 0x10070048 Size: 40 bytes */
void FUN_10070048()

{
  FUN_1006ffc0(0);
  return;
}

/* Address: 0x10070070 Size: 184 bytes */
void FUN_10070070(int *param_1)

{
  short in_r9;
  short in_r10;
  int in_stack_00000038;
  
  FUN_100c6c0c(param_1);
  *(short *)((int)param_1 + 0xaa) = in_r10;
  param_1[0x20] = 0x44c;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),in_r9,in_stack_00000038,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),1);
  return;
}

/* Address: 0x10070128 Size: 136 bytes */
void FUN_10070128(int *param_1)

{
  FUN_10105d28(param_1);
  param_1[0x20] = 0x44c;
  *(short *)((int)param_1 + 0xaa) = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),(short)param_1[0x1e],
               0xffffffffffffffff,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),1);
  return;
}

/* Address: 0x100701b0 Size: 136 bytes */
int FUN_100701b0(int param_1)

{
  int iVar1;
  int local_10 [4];
  
  iVar1 = FUN_10105d2c(param_1);
  *(int *)(iVar1 + 0xac) = 0;
  *(short *)(iVar1 + 0xaa) = *(short *)(param_1 + 0xaa);
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10003630(local_10,*(short *)(param_1 + 0xa8),*(int *)(param_1 + 0xb0));
    *(int *)(iVar1 + 0xac) = local_10[0];
    FUN_100db2a4();
  }
  return iVar1;
}

/* Address: 0x10070238 Size: 76 bytes */
void FUN_10070238(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x10070284 Size: 88 bytes */
void FUN_10070284(int param_1)

{
  *(short *)(param_1 + 0xa8) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10003600(*(int *)(param_1 + 0xac),1);
    *(int *)(param_1 + 0xac) = 0;
  }
  return;
}

/* Address: 0x100702dc Size: 56 bytes */
void FUN_100702dc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
  return;
}

/* Address: 0x10070314 Size: 172 bytes */
void FUN_10070314(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  short local_120 [2];
  char local_11c [256];
  char auStack_1c [28];
  
  local_11c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0));
  param_1[0x2b] = (int)param_2;
  FUN_10001758(param_2,local_120,auStack_1c,local_11c);
  iVar1 = FUN_10000678();
  if (iVar1 == 0) {
    *(short *)(param_1 + 0x2a) = local_120[0];
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100703c0 Size: 276 bytes */
void FUN_100703c0(int *param_1,short param_2,int param_3,char param_4)

{
  int *puVar1;
  int iVar2;
  int local_140;
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
  if (param_2 != -1) {
    local_34 = *puRam10117370;
    *puRam10117370 = auStack_13c;
    iVar2 = FUN_10000090(auStack_13c);
    if (iVar2 == 0) {
      FUN_10003630(&local_140,param_2,param_1[0x2c]);
      FUN_100db2a4(local_140);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0));
      param_1[0x2b] = local_140;
      *(short *)(param_1 + 0x2a) = param_2;
      param_1[0x2c] = param_3;
      *puVar1 = local_34;
    }
    else {
      FUN_100db158(local_3c,local_38);
    }
    if (param_4 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}

/* Address: 0x100704d4 Size: 76 bytes */
void FUN_100704d4(int *param_1,short param_2,char param_3)

{
  *(short *)((int)param_1 + 0xaa) = param_2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x10070520 Size: 88 bytes */
void FUN_10070520(int *param_1,long long param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),0);
  FUN_101088b0(param_1,param_2);
  return;
}

/* Address: 0x10070578 Size: 280 bytes */
void FUN_10070578(int *param_1,short param_2)

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
      FUN_10000030();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_30);
      uVar1 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10002598(param_1[0x2b]);
      uVar2 = FUN_100b0578(auStack_30);
      FUN_10002328(uVar2,*(short *)((int)param_1 + 0xaa),param_2,param_1[0x2b]);
      FUN_10001b60(param_1[0x2b],uVar1);
    }
  }
  return;
}

/* Address: 0x10070690 Size: 60 bytes */
void FUN_10070690()

{
  return;
}

/* Address: 0x100706cc Size: 108 bytes */
void FUN_100706cc(int *param_1)

{
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),0);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x7c8) + (int)param_1,0x4000);
  }
  return;
}

/* Address: 0x10070740 Size: 136 bytes */
int * FUN_10070740(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc0),
     param_1 != (int *)0x0)) {
    FUN_1006ffc0(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x5eb));
    param_1[0x2d] = 0;
    *(short *)(param_1 + 0x2f) = 0x20;
    *(short *)(param_1 + 0x2e) = 1;
    *(char *)((int)param_1 + 0xba) = 0;
  }
  return param_1;
}

/* Address: 0x100707c8 Size: 40 bytes */
void FUN_100707c8()

{
  FUN_10070740(0);
  return;
}

/* Address: 0x100707f0 Size: 248 bytes */
void FUN_100707f0(int *param_1)

{
  short in_r9;
  short in_stack_0000003a;
  char in_stack_0000003f;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)(param_1 + 0x2f) = in_r9;
  *(short *)(param_1 + 0x2e) = in_stack_0000003a;
  *(char *)((int)param_1 + 0xba) = in_stack_0000003f;
  param_1[0x20] = 0x44e;
  if (in_stack_0000003f != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x748) + (int)param_1,in_stack_0000003f,1);
  }
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7d8) + (int)param_1);
  }
  return;
}

/* Address: 0x100708e8 Size: 96 bytes */
void FUN_100708e8(int *param_1)

{
  FUN_10070128(param_1);
  param_1[0x20] = 0x44e;
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7d8) + (int)param_1);
  }
  return;
}

/* Address: 0x10070948 Size: 156 bytes */
void FUN_10070948(int *param_1)

{
  int *ppuVar1;
  int *piVar2;
  
  ppuVar1 = 0 /* TVect base */;
  piVar2 = (int *)FUN_100f56e4(0xc);
  if (piVar2 != (int *)0x0) {
    FUN_100b2578(piVar2);
    *piVar2 = (int)(*(int*)((char*)ppuVar1 - 0x5ef));
  }
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xe8),1);
  param_1[0x2d] = (int)piVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),piVar2,0,0);
  return;
}

/* Address: 0x100709e4 Size: 200 bytes */
void FUN_100709e4(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  char auStack_18 [24];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),param_2);
  FUN_100e1a64(auStack_18,param_2);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),auStack_18);
  uVar2 = (param_2[2] - *param_2) - iVar1;
  iVar3 = *param_2 + ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  *param_2 = iVar3;
  param_2[2] = iVar3 + iVar1;
  uVar2 = (param_2[3] - param_2[1]) - iVar1;
  iVar3 = param_2[1] + ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_2[1] = iVar3;
  param_2[3] = iVar3 + iVar1;
  return;
}

/* Address: 0x10070ab4 Size: 120 bytes */
void FUN_10070ab4(int *param_1)

{
  char auStack_18 [24];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  FUN_10117884(param_1[0x2d] + (int)*(short *)(*(int *)param_1[0x2d] + 0xb8),param_1,auStack_18);
  FUN_100706cc(param_1);
  return;
}

/* Address: 0x10070b2c Size: 36 bytes */
void FUN_10070b2c()

{
  FUN_10070690();
  return;
}


























/* Address: 0x10070b50 Size: 92 bytes */
void FUN_10070b50(int *param_1,long long param_2,char param_3)

{
  FUN_10070314(param_1,param_2,param_3);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),5,param_3);
  return;
}

/* Address: 0x10070bac Size: 96 bytes */
void FUN_10070bac(int *param_1,short param_2,long long param_3,char param_4)

{
  FUN_100703c0(param_1,param_2,param_3,param_4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),5,param_4);
  return;
}

/* Address: 0x10070c0c Size: 216 bytes */
void FUN_10070c0c(int *param_1,short param_2,char param_3)

{
  int iVar1;
  long long in_r9;
  char auStack_30 [8];
  char auStack_28 [40];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
  FUN_100e1a64(auStack_30,auStack_28);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),auStack_30);
  if (iVar1 == 0xc) {
    in_r9 = 0xff0000;
  }
  else if (iVar1 == 0x10) {
    in_r9 = 0xff00;
  }
  else if (iVar1 == 0x20) {
    in_r9 = 0xff;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),param_2,in_r9,param_3);
  return;
}

/* Address: 0x10070cec Size: 524 bytes */
void FUN_10070cec(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 )

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar2 == 0) {
    if (param_2 == '\0') {
      *(char *)((int)param_1 + 0xba) = *(char *)(param_1 + 0x21);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar2 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(char *)((int)param_1 + 0xba),1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar2 != 0)) {
      sVar1 = *(short *)(param_1 + 0x2e);
      if (sVar1 == 1) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
        }
      }
      else if (sVar1 == 2) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(char *)(param_1 + 0x21) == '\0',1);
      }
      else if ((sVar1 == 3) && (*(char *)(param_1 + 0x21) == '\0')) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}

/* Address: 0x10070f00 Size: 100 bytes */
int * FUN_10070f00()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xb4);
  if (puVar2 != (int *)0x0) {
    FUN_100cda40(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5e9));
    *(short *)(puVar2 + 0x2c) = 0;
    *(short *)((int)puVar2 + 0xb2) = 0;
  }
  return puVar2;
}

/* Address: 0x10070f64 Size: 612 bytes */
void FUN_10070f64(int *param_1)

{
  int iVar4;
  long long uVar1;
  long long uVar2;
  long long uVar3;
  long long uVar5;
  char auStack_78 [4];
  char auStack_74 [16];
  char auStack_64 [8];
  char auStack_5c [8];
  char auStack_54 [8];
  int local_4c;
  
  if (param_1[0x2b] != 0) {
    iVar4 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar4 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10000030();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_74);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_74,auStack_5c);
      FUN_100b06d4(auStack_5c,param_1 + 0x2c);
      uVar1 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10002598(param_1[0x2b]);
      if (*(char *)((int)param_1 + 0xa9) == '\0') {
        uVar5 = FUN_100b0578(auStack_5c);
        FUN_10001b90(uVar5,param_1[0x2b]);
      }
      else {
        uVar5 = 0;
        if (*(char *)(param_1 + 0x21) == '\0') {
          if (*(char *)((int)param_1 + 0x85) != '\0') {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 1;
        }
        uVar2 = FUN_10001f08();
        FUN_10066d04(auStack_54,auStack_5c);
        iVar4 = FUN_10066e64(auStack_54,auStack_78);
        while (iVar4 != 0) {
          FUN_10001f20(local_4c);
          FUN_100670ec(auStack_64,uVar5);
          FUN_10001f20(uVar2);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
          iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
          if (iVar4 != 0) {
            uVar3 = FUN_100b0578(auStack_5c);
            FUN_100033d8(uVar3,param_1[0x2b]);
          }
          FUN_10001f20(local_4c);
          FUN_10067178(auStack_64,2);
          iVar4 = FUN_10066e64(auStack_54,auStack_78);
        }
        FUN_10001f20(uVar2);
        FUN_10066df4(auStack_54,2);
      }
      FUN_10001b60(param_1[0x2b],uVar1);
    }
  }
  return;
}

/* Address: 0x100711d0 Size: 148 bytes */
int * FUN_100711d0()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xbc);
  if (puVar2 != (int *)0x0) {
    FUN_100cda40(puVar2);
    *(short *)(puVar2 + 0x2c) = 0;
    *(short *)((int)puVar2 + 0xb2) = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x480));
    puVar2[0x2d] = 0;
    *(short *)(puVar2 + 0x2e) = 1;
    *(char *)((int)puVar2 + 0xba) = 0;
    puVar2[0x2c] = 0x40004;
  }
  return puVar2;
}

/* Address: 0x10071264 Size: 104 bytes */
void FUN_10071264(int *param_1)

{
  FUN_100cf4f8(param_1);
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7b0) + (int)param_1);
  }
  return;
}

/* Address: 0x100712cc Size: 88 bytes */
void FUN_100712cc(int *param_1)

{
  FUN_10105d28(param_1);
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7b0) + (int)param_1);
  }
  return;
}

/* Address: 0x10071324 Size: 148 bytes */
void FUN_10071324(int *param_1)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xc);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5f4));
  }
  FUN_100b2d10(puVar2,0x33646261,1);
  param_1[0x2d] = (int)puVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar2,0,0);
  return;
}

/* Address: 0x100713b8 Size: 136 bytes */
void FUN_100713b8(int *param_1)

{
  char auStack_18 [24];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  FUN_10117884(param_1[0x2d] + (int)*(short *)(*(int *)param_1[0x2d] + 0xb8),param_1,auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_18);
  return;
}

/* Address: 0x10071440 Size: 92 bytes */
void FUN_10071440(int *param_1,char param_2,char param_3)

{
  if ((param_2 != *(char *)((int)param_1 + 0x85)) &&
     (*(char *)((int)param_1 + 0x85) = param_2, param_3 != '\0')) {
    FUN_10117884((int)*(short *)(*param_1 + 0x488) + (int)param_1);
  }
  return;
}

/* Address: 0x1007149c Size: 524 bytes */
void FUN_1007149c(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 )

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar2 == 0) {
    if (param_2 == '\0') {
      *(char *)((int)param_1 + 0xba) = *(char *)(param_1 + 0x21);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar2 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(char *)((int)param_1 + 0xba),1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar2 != 0)) {
      sVar1 = *(short *)(param_1 + 0x2e);
      if (sVar1 == 1) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
        }
      }
      else if (sVar1 == 2) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(char *)(param_1 + 0x21) == '\0',1);
      }
      else if ((sVar1 == 3) && (*(char *)(param_1 + 0x21) == '\0')) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}

/* Address: 0x100716a8 Size: 88 bytes */
void FUN_100716a8(int param_1,int *param_2)

{
  short uVar1;
  
  FUN_100cf764(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xb8) = uVar1;
  return;
}

/* Address: 0x10071708 Size: 68 bytes */
unsigned long long FUN_10071708()

{
  unsigned long long uVar1;
  
  uVar1 = FUN_100f56e4(0xc0);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar1 = FUN_10066234(uVar1);
  }
  return uVar1;
}

/* Address: 0x1007174c Size: 88 bytes */
void FUN_1007174c(int param_1,int *param_2)

{
  short uVar1;
  
  FUN_100716a8(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xbc) = uVar1;
  return;
}

/* Address: 0x100717a4 Size: 164 bytes */
void FUN_100717a4(int *param_1)

{
  short uVar1;
  int *ppuVar2;
  int *puVar3;
  
  ppuVar2 = 0 /* TVect base */;
  puVar3 = (int *)FUN_100f56e4(0x10);
  if (puVar3 != (int *)0x0) {
    FUN_100b2578(puVar3);
    *puVar3 = (*(int*)((char*)ppuVar2 - 0x5f1));
  }
  uVar1 = *(short *)(param_1 + 0x2f);
  FUN_100b2d10(puVar3,0x33646261,1);
  *(short *)(puVar3 + 3) = uVar1;
  param_1[0x2d] = (int)puVar3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar3,0,0);
  return;
}

/* Address: 0x10071848 Size: 172 bytes */
void FUN_10071848(int *param_1,char param_2,long long param_3,long long param_4,long long param_5
                 ,long long param_6,char param_7)

{
  int iVar1;
  
  if (param_1[6] == 0x63656e74) {
    if (param_2 == '\x02') {
      FUN_1003fe04();
    }
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
    if (((iVar1 != 0) && (param_2 == '\x01')) && (param_7 != '\0')) {
      FUN_100084d0((short)param_1[6] + -0x7230);
    }
  }
  return;
}

/* Address: 0x100718fc Size: 40 bytes */
void FUN_100718fc()

{
  FUN_100667f4(0);
  return;
}

/* Address: 0x10071924 Size: 148 bytes */
void FUN_10071924(int *param_1)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xc);
  if (puVar2 != (int *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5fb));
  }
  FUN_100b2d10(puVar2,0x33646261,1);
  param_1[0x2d] = (int)puVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar2,0,0);
  return;
}

/* Address: 0x100719c0 Size: 84 bytes */
int * FUN_100719c0()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xb4);
  if (puVar2 != (int *)0x0) {
    FUN_100cd9a4(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5fc));
  }
  return puVar2;
}

/* Address: 0x10071a14 Size: 1188 bytes */
void FUN_10071a14(int *param_1,long long param_2)

{
  int iVar1;
  short sVar2;
  unsigned long long uVar3;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  char auStack_2b8 [8];
  short local_2b0 [130];
  short local_1ac;
  short local_1aa;
  int local_1a4;
  int local_1a0;
  short local_19c;
  short local_19a;
  char auStack_194 [8];
  char local_18c [256];
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c [4];
  short local_5c;
  short local_5a;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  char auStack_4c [76];
  
  uVar3 = (unsigned long long)uRam101176cc;
  FUN_100b02d0(&local_5c);
  if (param_1[0x2b] != 0) {
    FUN_10000030();
    FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,&local_5c);
    FUN_100031b0(local_5a,local_5c);
    FUN_100ef8c8(auStack_194);
    FUN_100ee844(auStack_2b8,*(char *)((int)param_1 + 0xa6));
    local_2c8 = param_1[0x26];
    iStack_2c4 = param_1[0x27];
    iStack_2c0 = param_1[0x28];
    FUN_100eceb0(&local_2c8,auStack_4c,local_2b0);
    FUN_100ee8e8(auStack_2b8,2);
    local_18c[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_18c);
    FUN_100ce568(local_18c);
    iVar1 = (int)local_5a;
    FUN_100b1c84(local_18c);
    iStack_80 = FUN_100006f0();
    iStack_80 = iStack_80 + 0x1a;
    iStack_84 = local_2b0[0] + 1;
    local_7c = 1;
    local_8c = 1;
    iStack_88 = 0xd - iVar1;
    local_78 = 0xd - iVar1;
    local_74 = iStack_84;
    local_70 = iStack_80;
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,local_6c);
    local_19c = 2;
    local_19a = 2;
    FUN_100b039c(&local_1ac,&local_5c,&local_19c);
    local_1a4 = (int)local_1ac;
    local_1a0 = (int)local_1aa;
    FUN_100e16b8(local_6c,&local_1a4);
    local_6c[0] = local_6c[0] + ((int)local_2b0[0] >> 1);
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,local_6c,&local_54);
    FUN_100b2268(uVar3 + 0x5ca);
    FUN_100021c0();
    FUN_100031b0(local_5a + 1,local_5c + 1);
    FUN_10000270(((long long)local_52 - (long long)local_5a) + 0xe,local_54);
    FUN_10001d88(local_52,local_54);
    FUN_10001d88(local_52,local_50);
    FUN_10001d88(local_4e,local_50);
    FUN_10001d88(local_4e,local_54);
    sVar2 = FUN_100e1a3c(&local_8c,1);
    FUN_10001d88(local_52 + sVar2 + 0xe,local_54);
    FUN_100b2268(uVar3 + 0x5e2);
    FUN_100021c0();
    FUN_10000270(((long long)local_52 - (long long)local_5a) + 0xd,local_54 + -1);
    FUN_10001d88(local_52 + -1,local_54 + -1);
    FUN_10001d88(local_52 + -1,local_50 + -1);
    FUN_10001d88(local_4e + -1,local_50 + -1);
    FUN_10001d88(local_4e + -1,local_54 + -1);
    sVar2 = FUN_100e1a3c(&local_8c,1);
    FUN_10001d88(local_52 + sVar2 + 0xd,local_54 + -1);
    FUN_100f0538(auStack_194);
    FUN_100031b0(local_5a,local_5c);
    FUN_10000270(((long long)local_52 - (long long)local_5a) + 0xe,local_54);
    FUN_10001d88(local_52,local_54);
    FUN_10001d88(local_52,local_50);
    FUN_10001d88(local_4e,local_50);
    FUN_10001d88(local_4e,local_54);
    sVar2 = FUN_100e1a3c(&local_8c,1);
    FUN_10001d88(local_52 + sVar2 + 0xe,local_54);
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,param_2);
    FUN_100f0538(auStack_194);
  }
  return;
}

/* Address: 0x10071eb8 Size: 428 bytes */
void FUN_10071eb8(int *param_1,long long param_2)

{
  int iVar1;
  char auStack_18c [16];
  char auStack_17c [8];
  char auStack_174 [2];
  short local_172;
  char auStack_16c [8];
  char auStack_164 [8];
  int local_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  char local_13c [256];
  char auStack_3c [60];
  
  local_13c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_13c);
  FUN_100ce568(local_13c);
  FUN_100ee844(auStack_17c,*(char *)((int)param_1 + 0xa6));
  FUN_100b02d0(auStack_174);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),auStack_174);
  FUN_100b1c84(local_13c);
  iVar1 = FUN_100006f0();
  iStack_154 = FUN_100ef96c(auStack_3c);
  iStack_154 = iStack_154 + 1;
  local_14c = 1;
  local_15c = 1;
  iStack_158 = 0x12 - local_172;
  iStack_150 = iVar1 + 0x1a;
  local_148 = 0x12 - local_172;
  local_144 = iStack_154;
  local_140 = iVar1 + 0x1a;
  FUN_100ee8e8(auStack_17c,2);
  FUN_100e17d8(&local_15c,auStack_18c,param_2);
  iVar1 = FUN_100e1a08(auStack_18c);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_15c,auStack_164);
    FUN_100b2264(auStack_16c);
    FUN_10001ad0();
    FUN_100672bc(local_13c,auStack_164,0,1,param_1,auStack_16c);
  }
  return;
}

















































































































































































































































/* Address: 0x1007206c Size: 108 bytes */
int * FUN_1007206c()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xec);
  if (puVar2 != (int *)0x0) {
    FUN_10066708(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5fe));
    *(short *)(puVar2 + 0x38) = 0xffff;
    puVar2[0x39] = 0;
    *(char *)(puVar2 + 0x3a) = 1;
  }
  return puVar2;
}

/* Address: 0x100720d8 Size: 1392 bytes */
void FUN_100720d8(int *param_1)

{
  int uVar1;
  char uVar5;
  char uVar6;
  short *puVar3;
  long long uVar2;
  short *puVar4;
  int iVar7;
  unsigned long long uVar8;
  short *puVar9;
  short *puVar10;
  char *puVar11;
  short *puVar12;
  short *puVar13;
  short *puVar14;
  unsigned int *puVar15;
  char *puVar16;
  int iVar17;
  short *puVar18;
  int *piVar19;
  int *piVar20;
  short *puVar21;
  short local_224 [4];
  short local_21c;
  short local_21a;
  short local_218;
  short local_216;
  char auStack_214 [16];
  short local_204 [4];
  short local_1fc [4];
  short local_1f4 [4];
  short local_1ec [4];
  unsigned int local_1e4;
  short local_1e0 [4];
  char local_1d8 [262];
  short local_d2;
  short local_a0 [4];
  int local_98 [2];
  int local_90 [2];
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  char auStack_80 [48];
  char auStack_50 [80];
  
  uVar8 = (unsigned long long)uRam101176cc;
  puVar9 = (short *)(((char*)0) + -0x224);
  puVar10 = (short *)(((char*)0) + -0x21c);
  puVar11 = ((char*)0) + -0x214;
  puVar4 = (short *)(((char*)0) + -0x204);
  puVar12 = (short *)(((char*)0) + -0x1fc);
  puVar13 = (short *)(((char*)0) + -500);
  puVar14 = (short *)(((char*)0) + -0x1ec);
  puVar15 = (unsigned int *)(((char*)0) + -0x1e4);
  puVar3 = (short *)(((char*)0) + -0x1e0);
  puVar16 = ((char*)0) + -0x1d8;
  puVar18 = (short *)(((char*)0) + -0xa0);
  piVar19 = (int *)(((char*)0) + -0x98);
  piVar20 = (int *)(((char*)0) + -0x90);
  puVar21 = (short *)(((char*)0) + -0x88);
  *puVar16 = 0;
  FUN_10066bf4(((char*)0) + -0x80);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar11);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar11,puVar10);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  uVar1 = *(int *)(*(int *)param_1[0x39] + 4);
  FUN_10002598(*(int *)(*(int *)param_1[0x39] + 0x4e));
  local_d2 = (short)uVar1;
  *puVar21 = local_d2;
  *puVar3 = 0;
  FUN_100b065c(puVar21,puVar3);
  iVar7 = param_1[0x39];
  if (iVar7 != 0) {
    *piVar20 = iVar7;
    uVar5 = FUN_10000360(iVar7);
    FUN_10000048(*piVar20);
    iVar7 = param_1[0x39];
    *piVar19 = iVar7;
    uVar6 = FUN_10000360(iVar7);
    FUN_10002598(*piVar19);
    FUN_10000660(puVar15);
    iVar7 = *(int *)param_1[0x39];
    iVar17 = iVar7 + 0x32;
    *(int *)(iVar7 + 0x32) = iVar7 + 0x52;
    puVar3 = puVar18;
    if ((((char*)0) != (char *)0xa0) ||
       (puVar3 = (short *)FUN_100f56e4(8), puVar3 != (short *)0x0)) {
      *puVar3 = *puVar21;
      puVar3[1] = *(short *)(((char*)0) + -0x86);
      puVar3[2] = *(short *)(((char*)0) + -0x84);
      puVar3[3] = *(short *)(((char*)0) + -0x82);
    }
    FUN_100b2268(uVar8 + 0x5ca);
    FUN_100021c0();
    *puVar14 = 1;
    FUN_100b065c(puVar18,puVar14);
    uVar2 = FUN_100b0578(puVar18);
    iVar7 = iVar7 + 0x38;
    FUN_100008d0(iVar17,(unsigned long long)*puVar15 + 2,iVar7,uVar2,1,0);
    *puVar13 = 0;
    FUN_100b065c(puVar18,puVar13);
    uVar2 = FUN_100b0578(puVar18);
    FUN_100008d0(iVar17,(unsigned long long)*puVar15 + 2,iVar7,uVar2,1,0);
    FUN_100b2268(uVar8 + 0x5e2);
    FUN_100021c0();
    *puVar12 = 0xfffe;
    FUN_100b065c(puVar18,puVar12);
    uVar2 = FUN_100b0578(puVar18);
    FUN_100008d0(iVar17,(unsigned long long)*puVar15 + 2,iVar7,uVar2,1,0);
    *puVar4 = 0;
    FUN_100b065c(puVar18,puVar4);
    uVar2 = FUN_100b0578(puVar18);
    FUN_100008d0(iVar17,(unsigned long long)*puVar15 + 2,iVar7,uVar2,1,0);
    if (*(char *)(param_1 + 0x3a) == '\0') {
      uVar2 = FUN_100b0578(puVar21);
      FUN_10001b90(uVar2,param_1[0x39]);
    }
    else {
      uVar2 = 0;
      if (*(char *)(param_1 + 0x21) == '\0') {
        if (*(char *)((int)param_1 + 0x85) != '\0') {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
      puVar11 = ((char*)0) + -0x50;
      FUN_100670ec(puVar11,uVar2);
      uVar2 = FUN_100b0578(puVar21);
      FUN_100033d8(uVar2,param_1[0x39]);
      FUN_10067178(puVar11,2);
    }
    if (((char*)0) != (char *)0x98) {
      FUN_10001b60(*piVar19,uVar6);
    }
    if (((char*)0) != (char *)0x90) {
      FUN_10001b60(*piVar20,uVar5);
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),puVar16);
  puVar4 = puVar9;
  if ((((char*)0) != (char *)0x224) ||
     (puVar4 = (short *)FUN_100f56e4(8), puVar4 != (short *)0x0)) {
    *puVar4 = *puVar10;
    puVar4[1] = *(short *)(((char*)0) + -0x21a);
    puVar4[2] = *(short *)(((char*)0) + -0x218);
    puVar4[3] = *(short *)(((char*)0) + -0x216);
  }
  FUN_100672bc(puVar16,puVar9,0,0xfffffffffffffffe,param_1,uVar8 + 0x540);
  FUN_10066c80(((char*)0) + -0x80,2);
  return;
}


















































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10072660 Size: 112 bytes */
void FUN_10072660(int param_1)

{
  *(short *)(param_1 + 0xe0) = 0xffff;
  if (*(int *)(param_1 + 0xe4) != 0) {
    if (*(char *)(param_1 + 0xe8) == '\0') {
      FUN_10001f50(*(int *)(param_1 + 0xe4));
    }
    else {
      FUN_10001f38(*(int *)(param_1 + 0xe4));
    }
    *(int *)(param_1 + 0xe4) = 0;
  }
  return;
}

/* Address: 0x100726d0 Size: 272 bytes */
void FUN_100726d0(int *param_1,short param_2,char param_3)

{
  long long uVar1;
  long long uVar2;
  int iVar3;
  
  FUN_10072660(param_1);
  *(short *)(param_1 + 0x38) = param_2;
  if (param_2 != -1) {
    uVar1 = FUN_10001728(0x6369636e,param_2);
    if ((int)uVar1 != 0) {
      uVar2 = FUN_10000360(uVar1);
      FUN_10000048(uVar1);
      iVar3 = FUN_10001f68(*(short *)(param_1 + 0x38));
      param_1[0x39] = iVar3;
      FUN_10001b60(uVar1,uVar2);
    }
    if (param_1[0x39] == 0) {
      iVar3 = FUN_10001f80(*(short *)(param_1 + 0x38));
      param_1[0x39] = iVar3;
      if (iVar3 != 0) {
        *(char *)(param_1 + 0x3a) = 0;
      }
    }
    else {
      *(char *)(param_1 + 0x3a) = 1;
    }
    FUN_100db2a4(param_1[0x39]);
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}

/* Address: 0x100727e0 Size: 228 bytes */
void FUN_100727e0(int *param_1,int *param_2)

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
  FUN_100d5090(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = *puVar1;
  *puVar1 = auStack_128;
  iVar3 = FUN_10000090(auStack_128);
  if (iVar3 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_100726d0(param_1,uVar2,0);
    *puVar1 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_28,local_24);
  }
  return;
}

/* Address: 0x100728c4 Size: 248 bytes */
int * FUN_100728c4(int param_1)

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
  piVar2 = (int *)FUN_10069b44(param_1);
  piVar2[0x39] = 0;
  *(char *)(piVar2 + 0x3a) = 1;
  *(short *)(piVar2 + 0x38) = 0xffff;
  if (*(int *)(param_1 + 0xe4) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *puVar1;
    *puVar1 = auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      FUN_100726d0(piVar2,*(short *)(param_1 + 0xe0),0);
      *puVar1 = local_24;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158(local_2c,local_28);
    }
  }
  return piVar2;
}





















































































































































































/* Address: 0x100729bc Size: 64 bytes */
void FUN_100729bc(long long param_1)

{
  FUN_10072660(param_1);
  FUN_100c8068(param_1);
  return;
}

/* Address: 0x100729fc Size: 1096 bytes */
void FUN_100729fc(int *param_1)

{
  int uVar1;
  long long uVar2;
  int iVar3;
  char uVar5;
  char uVar6;
  short *puVar4;
  char *puVar7;
  char *puVar8;
  short *puVar9;
  short *puVar10;
  char *puVar11;
  char *puVar12;
  char *puVar13;
  int *piVar14;
  int *piVar15;
  short *puVar16;
  int local_234;
  char auStack_204 [8];
  char auStack_1fc [48];
  short local_1cc [4];
  short local_1c4;
  short local_1c2;
  short local_1c0;
  short local_1be;
  char auStack_1bc [16];
  short local_1ac [4];
  char local_1a4 [262];
  short local_9e;
  char auStack_6c [8];
  int local_64 [2];
  int local_5c [2];
  short local_54 [42];
  
  puVar7 = ((char*)0) + -0x204;
  puVar8 = ((char*)0) + -0x1fc;
  puVar9 = (short *)(((char*)0) + -0x1cc);
  puVar10 = (short *)(((char*)0) + -0x1c4);
  puVar11 = ((char*)0) + -0x1bc;
  puVar4 = (short *)(((char*)0) + -0x1ac);
  puVar12 = ((char*)0) + -0x1a4;
  puVar13 = ((char*)0) + -0x6c;
  piVar14 = (int *)(((char*)0) + -100);
  piVar15 = (int *)(((char*)0) + -0x5c);
  puVar16 = (short *)(((char*)0) + -0x54);
  *puVar12 = 0;
  FUN_10066bf4(puVar8);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar11);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar11,puVar10);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,puVar13);
  FUN_10067270();
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  else {
    uVar2 = FUN_100b0574(puVar13);
    FUN_10003348(uVar2,1,1);
    FUN_100b0578(puVar13);
    FUN_100034e0();
    uVar2 = FUN_100b0574(puVar13);
    FUN_10003348(uVar2,1,1);
    FUN_100f03e8((int)param_1 + 0xda);
    iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1);
    if (iVar3 == 0) {
      FUN_100b0578(puVar13);
      FUN_10003390();
    }
    else {
      FUN_10002118((unsigned long long)*(unsigned int *)(local_234 + -0xb0) + 0xc2);
      FUN_100b0578(puVar13);
      FUN_100034e0();
    }
  }
  uVar1 = *(int *)(*(int *)param_1[0x39] + 4);
  FUN_10002598(*(int *)(*(int *)param_1[0x39] + 0x4e));
  local_9e = (short)uVar1;
  *puVar16 = local_9e;
  *puVar4 = 0;
  FUN_100b065c(puVar16,puVar4);
  iVar3 = param_1[0x39];
  if (iVar3 != 0) {
    *piVar15 = iVar3;
    uVar5 = FUN_10000360(iVar3);
    FUN_10000048(*piVar15);
    iVar3 = param_1[0x39];
    *piVar14 = iVar3;
    uVar6 = FUN_10000360(iVar3);
    FUN_10002598(*piVar14);
    if (*(char *)(param_1 + 0x3a) == '\0') {
      uVar2 = FUN_100b0578(puVar16);
      FUN_10001b90(uVar2,param_1[0x39]);
    }
    else {
      uVar2 = 0;
      if (*(char *)(param_1 + 0x21) == '\0') {
        if (*(char *)((int)param_1 + 0x85) != '\0') {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
      FUN_100670ec(puVar7,uVar2);
      uVar2 = FUN_100b0578(puVar16);
      FUN_100033d8(uVar2,param_1[0x39]);
      FUN_10067178(puVar7,2);
    }
    if (((char*)0) != (char *)0x64) {
      FUN_10001b60(*piVar14,uVar6);
    }
    if (((char*)0) != (char *)0x5c) {
      FUN_10001b60(*piVar15,uVar5);
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),puVar12);
  puVar4 = puVar9;
  if ((((char*)0) != (char *)0x1cc) ||
     (puVar4 = (short *)FUN_100f56e4(8), puVar4 != (short *)0x0)) {
    *puVar4 = *puVar10;
    puVar4[1] = *(short *)(((char*)0) + -0x1c2);
    puVar4[2] = *(short *)(((char*)0) + -0x1c0);
    puVar4[3] = *(short *)(((char*)0) + -0x1be);
  }
  FUN_100672bc(puVar12,puVar9,0,0xfffffffffffffffe,param_1,
               (unsigned long long)*(unsigned int *)(local_234 + -0x1d4) + 0x540,0xff);
  FUN_10066c80(puVar8,2);
  return;
}











































































































































































































































































































































































































































































































































































































































































/* Address: 0x10072e5c Size: 1012 bytes */
void FUN_10072e5c()

{
  int uVar1;
  int *puVar2;
  int uVar3;
  int uVar4;
  int uVar5;
  int uVar6;
  int uVar7;
  int uVar8;
  int *ppuVar9;
  
  uVar8 = uRam101166d0;
  uVar7 = uRam10116100;
  uVar6 = uRam101160f8;
  uVar5 = uRam101160e8;
  uVar4 = uRam101160d4;
  uVar3 = uRam10116074;
  puVar2 = puRam1011606c;
  uVar1 = uRam10116024;
  ppuVar9 = 0 /* TVect base */;
  *puRam1011606c = 0xeeeeeeee;
  puVar2[1] = 0xeeee0000;
  puVar2 = puRam101160c4;
  *puRam101160c4 = 0xdddddddd;
  puVar2[1] = 0xdddd0000;
  puVar2 = puRam101160c0;
  *puRam101160c0 = 0xbbbbbbbb;
  puVar2[1] = 0xbbbb0000;
  puVar2 = puRam101160b8;
  *puRam101160b8 = 0xaaaaaaaa;
  puVar2[1] = 0xaaaa0000;
  puVar2 = puRam101160bc;
  *puRam101160bc = 0x88888888;
  puVar2[1] = 0x88880000;
  FUN_100c1c8c(uRam1011602c,*puRam10116104,0xc,uRam10116108,uVar7);
  FUN_100c1c8c(uVar1,*(int *)(*(int*)((char*)ppuVar9 - 0x5e5)),0xc,(*(int*)((char*)ppuVar9 - 0x5e4)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x61b)),*(int *)(*(int*)((char*)ppuVar9 - 0x5e3)),0xc,(*(int*)((char*)ppuVar9 - 0x5e2)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x617)),*(int *)(*(int*)((char*)ppuVar9 - 0x5e1)),0xc,(*(int*)((char*)ppuVar9 - 0x5e0)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x615)),*(int *)(*(int*)((char*)ppuVar9 - 0x5df)),0xc,(*(int*)((char*)ppuVar9 - 0x5de)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x611)),*(int *)(*(int*)((char*)ppuVar9 - 0x5dd)),0xc,(*(int*)((char*)ppuVar9 - 0x5dc)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x613)),*(int *)(*(int*)((char*)ppuVar9 - 0x5db)),0xc,(*(int*)((char*)ppuVar9 - 0x5da)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x619)),*(int *)(*(int*)((char*)ppuVar9 - 0x5d9)),0xc,(*(int*)((char*)ppuVar9 - 0x5d8)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x60f)),*(int *)(*(int*)((char*)ppuVar9 - 0x5d7)),0xe0,(*(int*)((char*)ppuVar9 - 0x5d6)),(*(int*)((char*)ppuVar9 - 0x2a3)));
  FUN_100c1c8c(uVar3,*(int *)(*(int*)((char*)ppuVar9 - 0x5d5)),0xe0,(*(int*)((char*)ppuVar9 - 0x5d4)),(*(int*)((char*)ppuVar9 - 0x2a1)));
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x5f6)),*(int *)(*(int*)((char*)ppuVar9 - 0x5d3)),0x1dc,(*(int*)((char*)ppuVar9 - 0x5d2)),(*(int*)((char*)ppuVar9 - 0x1cb)))
  ;
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x608)),*(int *)(*(int*)((char*)ppuVar9 - 0x5d1)),200,(*(int*)((char*)ppuVar9 - 0x5d0)),(*(int*)((char*)ppuVar9 - 0x2a5)));
  FUN_100c1c8c(uVar4,*(int *)(*(int*)((char*)ppuVar9 - 0x5cf)),0xc,(*(int*)((char*)ppuVar9 - 0x5ce)),uVar7);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x5f2)),*(int *)(*(int*)((char*)ppuVar9 - 0x5cd)),0x10,(*(int*)((char*)ppuVar9 - 0x5cc)),uVar4);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x605)),*(int *)(*(int*)((char*)ppuVar9 - 0x5cb)),0xc,(*(int*)((char*)ppuVar9 - 0x5ca)),uVar4);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x5f0)),*(int *)(*(int*)((char*)ppuVar9 - 0x5c9)),0xc,(*(int*)((char*)ppuVar9 - 0x5c8)),uVar7);
  FUN_100c1c8c(uVar5,*(int *)(*(int*)((char*)ppuVar9 - 0x5c7)),0xb4,(*(int*)((char*)ppuVar9 - 0x5c6)),(*(int*)((char*)ppuVar9 - 0x31b)));
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x5ec)),*(int *)(*(int*)((char*)ppuVar9 - 0x5c5)),0xc0,(*(int*)((char*)ppuVar9 - 0x5c4)),uVar5);
  FUN_100c1c8c(uVar6,*(int *)(*(int*)((char*)ppuVar9 - 0x5c3)),0xb4,(*(int*)((char*)ppuVar9 - 0x5c2)),(*(int*)((char*)ppuVar9 - 0x2d4)));
  FUN_100c1c8c(uVar8,*(int *)(*(int*)((char*)ppuVar9 - 0x5c1)),0xbc,(*(int*)((char*)ppuVar9 - 0x5c0)),uVar6);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x606)),*(int *)(*(int*)((char*)ppuVar9 - 0x5bf)),0xc0,(*(int*)((char*)ppuVar9 - 0x5be)),uVar8);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x604)),*(int *)(*(int*)((char*)ppuVar9 - 0x5bd)),0xbc,(*(int*)((char*)ppuVar9 - 0x5bc)),uVar8);
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x607)),*(int *)(*(int*)((char*)ppuVar9 - 0x5bb)),0xb4,(*(int*)((char*)ppuVar9 - 0x5ba)),(*(int*)((char*)ppuVar9 - 0x2d6)));
  FUN_100c1c8c((*(int*)((char*)ppuVar9 - 0x609)),*(int *)(*(int*)((char*)ppuVar9 - 0x5b9)),0xec,(*(int*)((char*)ppuVar9 - 0x5b8)),uVar3);
  return;
}

/* Address: 0x10073388 Size: 40 bytes */
void FUN_10073388()

{
  FUN_10073310(0);
  return;
}

/* Address: 0x100733b0 Size: 572 bytes */
void FUN_100733b0(int *param_1,short param_2)

{
  int *piVar1;
  int *puVar2;
  int iVar4;
  unsigned char *pbVar5;
  long long uVar3;
  int uVar6;
  unsigned long long uVar7;
  char auStack_240 [256];
  int *local_140;
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar2 = puRam10117370;
  piVar1 = piRam1011735c;
  uVar7 = (unsigned long long)param_2;
  local_140 = (int *)0x0;
  FUN_10002988(*(int *)((int)param_1 + (int)((uVar7 & 0xffffffff) << 2) + 0x188),&local_140,
               *(int *)(param_1[0x20] + 100));
  FUN_100db2f4();
  if (local_140 != (int *)0x0) {
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = *puVar2;
    *puVar2 = auStack_13c;
    iVar4 = FUN_10000090(auStack_13c);
    if (iVar4 == 0) {
      if (*local_140 != 0) {
        FUN_100d8c9c(2000,0);
        FUN_100db158(0,0x820000);
      }
      pbVar5 = (unsigned char *)FUN_10002c40(local_140[10]);
      FUN_100012d8(pbVar5,auStack_240,(unsigned long long)*pbVar5 + 1);
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
      FUN_10090e0c(uVar3,uVar7 + 0x61646431,auStack_240,1);
      uVar6 = FUN_100ef580(*(int *)((int)local_140 + 6));
      *(int *)((int)local_140 + 6) = uVar6;
      FUN_100ef580(local_140);
      *puVar2 = local_34;
    }
    else {
      uVar6 = FUN_100ef580(*(int *)((int)local_140 + 6));
      *(int *)((int)local_140 + 6) = uVar6;
      local_140 = (int *)FUN_100ef580(local_140);
      if (local_3c != 0) {
        FUN_100db158(local_3c,local_38);
      }
    }
  }
  if (*(short *)(param_1[0x20] + 0x74) == param_2) {
    while (param_2 < 8) {
      if (((int)*(short *)(param_1[0x20] + 0x74) == (int)uVar7) &&
         (((*(int *)((int)param_1 + (int)((uVar7 & 0xffffffff) << 2) + 0x188) != 0 ||
           (iVar4 = *piVar1 + (int)((uVar7 & 0xffffffff) << 1), *(short *)(iVar4 + 0xd0) != 0)) ||
          (*(short *)(iVar4 + 0x138) == 0)))) {
        *(short *)(param_1[0x20] + 0x74) = *(short *)(param_1[0x20] + 0x74) + 1;
      }
      param_2 = (short)uVar7 + 1;
      uVar7 = (unsigned long long)param_2;
    }
  }
  return;
}

/* Address: 0x100735ec Size: 404 bytes */
void FUN_100735ec(int param_1,unsigned int param_2)

{
  short sVar1;
  int *piVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  char auStack_18 [24];
  
  piVar2 = piRam1011735c;
  param_2 = param_2 & 0x7ff80;
  iVar5 = -1;
  if (param_2 == 0x200) {
    iVar5 = (int)*(short *)(*(int *)(param_1 + 0x80) + 0x74);
  }
  else if (param_2 == 0x800) {
    iVar5 = 0;
  }
  else if (param_2 == 0x1000) {
    iVar5 = 1;
  }
  else if (param_2 == 0x2000) {
    iVar5 = 2;
  }
  else if (param_2 == 0x4000) {
    iVar5 = 3;
  }
  else if (param_2 == 0x8000) {
    iVar5 = 4;
  }
  else if (param_2 == 0x10000) {
    iVar5 = 5;
  }
  else if (param_2 == 0x20000) {
    iVar5 = 6;
  }
  else if (param_2 == 0x40000) {
    iVar5 = 7;
  }
  if (iVar5 != -1) {
    iVar4 = param_1 + iVar5 * 4;
    uVar3 = FUN_100ef580(*(int *)(iVar4 + 0x188));
    *(int *)(iVar4 + 0x188) = uVar3;
    FUN_10098ed8(*(int *)(param_1 + 0x80),auStack_18,iVar4 + 0x188);
    FUN_100db2f4();
    FUN_100733b0(param_1,iVar5);
    if (iVar5 == *(short *)(*(int *)(param_1 + 0x80) + 0x74)) {
      do {
        *(short *)(*(int *)(param_1 + 0x80) + 0x74) =
             *(short *)(*(int *)(param_1 + 0x80) + 0x74) + 1;
        sVar1 = *(short *)(*(int *)(param_1 + 0x80) + 0x74);
        if (7 < sVar1) {
          return;
        }
        iVar5 = *piVar2 + sVar1 * 2;
      } while (((*(short *)(iVar5 + 0xd0) != 0) || (*(short *)(iVar5 + 0x138) == 0)) ||
              (*(int *)(sVar1 * 4 + param_1 + 0x188) != 0));
    }
  }
  return;
}

/* Address: 0x10073780 Size: 216 bytes */
void FUN_10073780(int param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  int bVar3;
  unsigned int local_18 [6];
  
  bVar3 = true;
  piVar1 = *(int **)(param_1 + 0x84);
  if ((((piVar1 != (int *)0x0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x3a8) + (int)piVar1), iVar2 != 0)) &&
      (iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x80), iVar2 != 0)) &&
     (iVar2 = FUN_1009a548(iVar2,param_2 + 0x14,local_18), iVar2 == 0)) {
    bVar3 = (local_18[0] & 1) != 0;
    if ((local_18[0] & 0x7ff80) != 0) {
      FUN_100735ec(*(int *)(param_1 + 0x84),local_18[0]);
    }
  }
  if (bVar3) {
    FUN_100b8f90(param_1,param_2);
  }
  return;
}

/* Address: 0x10073874 Size: 208 bytes */
long long FUN_10073874(long long param_1,int *param_2)

{
  long long uVar1;
  char auStack_7c [62];
  int local_3e;
  unsigned int local_14;
  char auStack_10 [16];
  
  uVar1 = FUN_10000648(0x6f636575,&local_14);
  if ((int)uVar1 == 0) {
    if ((local_14 & 2) == 0) {
      uVar1 = 0xfffffffffffffa24;
    }
    if (((int)uVar1 == 0) && (uVar1 = FUN_10001938(auStack_7c,0), (int)uVar1 == 0)) {
      *param_2 = local_3e;
      return uVar1;
    }
  }
  if ((int)uVar1 == -0x619) {
    uVar1 = FUN_10000df8(param_2,0,0,0,0,7,auStack_10,0);
  }
  return uVar1;
}

/* Address: 0x1007394c Size: 148 bytes */
int * FUN_1007394c(int *param_1)

{
  int *ppuVar1;
  short sVar2;
  int iVar3;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1a8),
     param_1 != (int *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x5b2));
    param_1[0x20] = 0;
    iVar3 = 0;
    do {
      (param_1 + iVar3)[0x62] = 0;
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while (sVar2 < 8);
  }
  return param_1;
}

/* Address: 0x100739e0 Size: 40 bytes */
void FUN_100739e0()

{
  FUN_1007394c(0);
  return;
}

/* Address: 0x10073a08 Size: 460 bytes */
void FUN_10073a08(int *param_1)

{
  int iVar2;
  int iVar3;
  long long uVar1;
  short uVar4;
  int local_184;
  char auStack_130 [264];
  int local_28;
  int *local_24;
  char auStack_20 [32];
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  iVar3 = local_184;
  if (iVar2 == 0) {
    FUN_100db26c(0);
  }
  FUN_10073874(**(int **)(iVar3 + -0x16d0),&local_28);
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_20);
  FUN_10001320((unsigned long long)*(unsigned int *)(local_184 + -0x16dc) + 0x3c,0,auStack_130,0x100);
  uVar1 = FUN_10002928(auStack_130,&local_24);
  if ((int)uVar1 == 0) {
    FUN_10002778(local_24);
    FUN_10002598(local_24);
    uVar4 = FUN_10000ea0(*local_24,param_1 + 0x21,0x40);
    *(short *)(param_1 + 0x61) = uVar4;
  }
  FUN_100db2f4(uVar1);
  FUN_10002580(1);
  uVar1 = FUN_100b0578(auStack_20);
  FUN_10098b94(param_1 + 0x20,*(int *)(iVar3 + 0x80),uVar1,1,1,local_28,param_1 + 0x21,
               *(short *)(param_1 + 0x61));
  FUN_100db2f4();
  return;
}

/* Address: 0x10073bd4 Size: 192 bytes */
void FUN_10073bd4(int *param_1,long long param_2)

{
  int uVar1;
  long long uVar2;
  char auStack_130 [8];
  char auStack_128 [276];
  int local_14;
  
  if (param_1[0x20] == 0) {
    FUN_10073a08(param_1);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_130);
    FUN_100ee64c(auStack_128);
    uVar1 = local_14;
    uVar2 = FUN_100b0578(auStack_130);
    FUN_10003150(uVar1,uVar2);
    FUN_1009c544(param_1[0x20],local_14);
    FUN_100ee77c(auStack_128,2);
  }
  return;
}

/* Address: 0x10073c94 Size: 100 bytes */
void FUN_10073c94(int param_1)

{
  int *piVar1;
  
  piVar1 = piRam101161d0;
  FUN_10105d28(param_1);
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_10073a08(param_1);
  }
  *(int *)(*piVar1 + 0x84) = param_1;
  *(char *)(*piVar1 + 0x31) = 0;
  return;
}

/* Address: 0x10073cf8 Size: 112 bytes */
void FUN_10073cf8(int param_1)

{
  int *piVar1;
  
  piVar1 = piRam101161d0;
  *(int *)(*piRam101161d0 + 0x84) = 0;
  *(char *)(*piVar1 + 0x31) = 1;
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_100989b0(0);
    *(int *)(param_1 + 0x80) = 0;
  }
  FUN_10106060(param_1);
  return;
}

/* Address: 0x10073d68 Size: 284 bytes */
long long FUN_10073d68(int *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short local_28;
  int local_26;
  int local_22;
  char auStack_1e [4];
  short local_1a;
  char auStack_18 [24];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar1 != 0) {
    local_28 = 0;
    local_26 = 0;
    local_22 = FUN_10001a88();
    FUN_10001518(auStack_1e);
    iVar1 = FUN_100efb60();
    if (iVar1 == 0) {
      sVar4 = 0;
    }
    else {
      sVar4 = 0x100;
    }
    iVar1 = FUN_100efba8();
    if (iVar1 == 0) {
      sVar3 = 0;
    }
    else {
      sVar3 = 0x800;
    }
    iVar1 = FUN_100efbcc();
    if (iVar1 == 0) {
      sVar2 = 0;
    }
    else {
      sVar2 = 0x200;
    }
    iVar1 = FUN_100efb84();
    if (iVar1 == 0) {
      local_1a = 0;
    }
    else {
      local_1a = 0x1000;
    }
    local_1a = sVar4 + sVar3 + sVar2 + local_1a;
    FUN_1009a548(param_1[0x20],&local_28,auStack_18);
    FUN_100db2f4();
  }
  return 0;
}

/* Address: 0x10073e84 Size: 64 bytes */
void FUN_10073e84(int param_1)

{
  FUN_100d95c8(param_1);
  *(char *)(*(int *)(param_1 + 0x80) + 0x7e) = 1;
  return;
}

/* Address: 0x10073ec4 Size: 64 bytes */
void FUN_10073ec4(int param_1)

{
  FUN_100dabb8(param_1);
  *(char *)(*(int *)(param_1 + 0x80) + 0x7e) = 0;
  return;
}

/* Address: 0x10073f04 Size: 92 bytes */
void FUN_10073f04()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116220,*puRam101161dc,0x88,uRam101161e0,uRam10116a38);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x5b3)),*(int *)(*(int*)((char*)ppuVar1 - 0x5af)),0x1a8,(*(int*)((char*)ppuVar1 - 0x5ae)),(*(int*)((char*)ppuVar1 - 0x309)))
  ;
  return;
}

/* Address: 0x10073f68 Size: 96 bytes */
int * FUN_10073f68()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x1b4);
  if (puVar2 != (int *)0x0) {
    FUN_10073310(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x137));
    *(char *)(puVar2 + 0x28) = 0;
  }
  return puVar2;
}

/* Address: 0x10073fc8 Size: 308 bytes */
short FUN_10073fc8(int param_1,int param_2)

{
  short uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char uVar5;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar4 = FUN_100ef2f8(*(int *)(param_1 + 0x94));
    if (iVar4 != 0) {
      FUN_10000b70(*(int *)(param_1 + 0x94));
    }
    piVar2 = *(int **)(param_1 + 0x94);
    if (*piVar2 != 0) {
      uVar5 = FUN_10000360(piVar2);
      FUN_10002598(piVar2);
      piVar3 = (int *)**(int **)(param_1 + 0x94);
      iVar4 = 0;
      if (0 < *piVar3) {
        do {
          if (piVar3[iVar4 * 2 + 1] == param_2) {
            uVar1 = *(short *)(piVar3 + iVar4 * 2 + 2);
            if (((char*)0) != (char *)0x18) {
              FUN_10001b60(piVar2,uVar5);
              return uVar1;
            }
            return uVar1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *piVar3);
      }
      if (((char*)0) != (char *)0x18) {
        FUN_10001b60(piVar2,uVar5);
      }
    }
  }
  return 0xffff;
}

/* Address: 0x10074114 Size: 356 bytes */
void FUN_10074114(int param_1)

{
  int iVar1;
  int uVar2;
  int *piVar3;
  short uVar4;
  short sVar5;
  int iVar6;
  char auStack_68 [80];
  int *local_18;
  char local_14;
  
  uVar2 = FUN_10001728(0x53686f72,2000);
  *(int *)(param_1 + 0x94) = uVar2;
  FUN_100981f8(auStack_68,0x80);
  piVar3 = (int *)FUN_10098320(auStack_68,0x53686f72,1000);
  if (piVar3 == (int *)0x0) {
    uVar4 = FUN_10073fc8(param_1,0x643);
    *(short *)(param_1 + 0x8c) = uVar4;
    uVar4 = FUN_10073fc8(param_1,0x57b);
    *(short *)(param_1 + 0x8e) = uVar4;
    uVar4 = FUN_10073fc8(param_1,0x640);
    *(short *)(param_1 + 0x90) = uVar4;
    uVar4 = FUN_10073fc8(param_1,0x76c);
    *(short *)(param_1 + 0x92) = uVar4;
  }
  else {
    local_18 = piVar3;
    local_14 = FUN_10000360(piVar3);
    FUN_10002598(local_18);
    iVar1 = *piVar3;
    iVar6 = 0;
    do {
      *(short *)(iVar6 * 2 + param_1 + 0x8c) = *(short *)(iVar1 + iVar6 * 2);
      sVar5 = (short)iVar6 + 1;
      iVar6 = (int)sVar5;
    } while (sVar5 < 4);
    if (((char*)0) != (char *)0x18) {
      FUN_10001b60(local_18,local_14);
    }
  }
  FUN_100ef510(piVar3);
  FUN_100982e8(auStack_68,2);
  return;
}

/* Address: 0x10074288 Size: 2500 bytes */
void FUN_10074288(int *param_1)

{
  short sVar1;
  char *puVar2;
  int *ppuVar3;
  int *piVar6;
  long long uVar4;
  int iVar7;
  unsigned long long uVar5;
  int iVar8;
  int *puVar9;
  int *piVar10;
  char cVar13;
  long long lVar11;
  unsigned int uVar12;
  char uVar14;
  int local_6f4;
  short local_6d0;
  int local_6ce;
  int local_688;
  char *local_684;
  short *local_650;
  short local_648;
  short local_646;
  int local_640;
  int local_63c;
  int local_638;
  char *local_634;
  unsigned int local_618;
  char *local_600;
  char auStack_5f8 [80];
  short local_5a8;
  short local_5a6;
  char auStack_5a0 [12];
  int local_594;
  int local_58e;
  short local_58a;
  char *local_584;
  int local_570;
  char local_520 [256];
  char local_420 [256];
  char auStack_320 [4];
  unsigned char local_31c;
  unsigned char local_31a;
  int *local_310;
  char local_30c;
  char auStack_308 [256];
  short local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  short local_1f0 [2];
  short local_1ec;
  int local_1e8;
  char auStack_1e4 [72];
  char auStack_19c [72];
  short local_154;
  short local_152;
  char auStack_150 [256];
  char auStack_50 [2];
  short local_4e;
  short local_4c;
  short local_4a;
  
  piVar10 = piRam10116478;
  ppuVar3 = 0 /* TVect base */;
  FUN_100b763c(param_1,0x57325347,0x57617232);
  local_420[0] = 0;
  local_638 = 0x3c;
  local_600 = auStack_1e4;
  local_634 = local_420;
  FUN_10001bd8((unsigned long long)*(unsigned int *)(*(int*)((char*)ppuVar3 - 0x3b7)) + 0x32,&local_638);
  iVar8 = local_6f4;
  FUN_100db2f4();
  if (local_618 < 0x300000) {
    *(char *)(*(int *)(iVar8 + -0x14) + 0x34) = 0;
  }
  piVar6 = (int *)FUN_10001170();
  sVar1 = *(short *)(**(int **)(*piVar6 + 0x16) + 0x20);
  *(short *)((int)param_1 + 0x1ae) = sVar1;
  *(char *)(param_1 + 0x6c) = 0;
  *(char *)((int)param_1 + 0x1b1) = 0;
  iVar8 = local_6f4;
  if (sVar1 != 8) {
    uVar4 = FUN_100017b8(piVar6,0);
    iVar7 = FUN_10001188(piVar6,*(short *)((int)param_1 + 0x1ae),1,uVar4);
    *(short *)((int)param_1 + 0x1ae) = (short)iVar7;
    if (iVar7 == 0) {
      *(short *)((int)param_1 + 0x1ae) = *(short *)(**(int **)(*piVar6 + 0x16) + 0x20);
    }
    uVar4 = FUN_10001188(piVar6,8,1,1);
    if ((int)uVar4 != 0) {
      *(char *)((int)param_1 + 0x1b1) = 1;
      uVar5 = FUN_100d8c9c(0x3f2,0);
      cVar13 = ('\x01' - ((1 < uVar5) + '\x01')) +
               (uVar5 != 0 && (unsigned long long)(1 < uVar5) <= uVar5 - 1);
      *(char *)(param_1 + 0x6c) = cVar13;
      if (cVar13 != '\0') {
        FUN_10003870(piVar6,uVar4,0,0);
        iVar8 = local_6f4;
        FUN_100db2f4();
      }
    }
  }
  local_1e8 = 0;
  if ((*(char *)(*(int *)(iVar8 + -0x14) + 0x34) != '\0') && (iVar8 = FUN_10000c78(), iVar8 == 0)) {
    local_520[0] = 0;
    local_688 = 0x3c;
    local_684 = local_520;
    local_650 = &local_6d0;
    FUN_10001bd8((unsigned long long)**(unsigned int **)(local_6f4 + -0xedc) + 0x32,&local_688);
    puVar9 = (int *)FUN_10001728(0x53545220,0x3e9);
    iVar8 = FUN_10000678();
    if ((iVar8 == 0) && (puVar9 != (int *)0x0)) {
      FUN_10000b70(puVar9);
      local_310 = puVar9;
      local_30c = FUN_10000360(puVar9);
      FUN_10002598(local_310);
      local_594 = 0;
      local_58e = *puVar9;
      local_58a = local_6d0;
      local_584 = auStack_19c;
      local_570 = local_6ce;
      iVar8 = FUN_100017e8(auStack_5a0);
      if (((char*)0) != (char *)0x310) {
        FUN_10001b60(local_310,local_30c);
      }
    }
    if ((iVar8 == 0) && (iVar8 = FUN_10001800(auStack_19c,&local_154,1), iVar8 == 0)) {
      local_152 = 0;
      iVar8 = FUN_100023a0(&local_1e8,local_154,&local_152,auStack_150,1,auStack_50);
      FUN_10001830(local_154);
      if (iVar8 == 0) goto LAB_100745f4;
    }
    if (local_1e8 != 0) {
      FUN_100038b8(local_1e8);
    }
    local_1e8 = 0;
  }
LAB_100745f4:
  local_4e = FUN_10003900();
  local_208 = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  local_200 = **(int **)(local_6f4 + -0x530);
  **(int **)(local_6f4 + -0x530) = auStack_308;
  iVar8 = FUN_10000090(auStack_308);
  if (iVar8 == 0) {
    iVar8 = local_6f4;
    FUN_100b08d4(&local_5a8,(unsigned long long)*(unsigned int *)(local_6f4 + -0xb0) + 0x56);
    if (local_1e8 == 0) {
      iVar8 = FUN_10117884(**(int **)(iVar8 + -0x1e4) +
                           (int)*(short *)(*(int *)**(int **)(iVar8 + -0x1e4) + 200),1000,0);
      *piVar10 = iVar8;
    }
    else {
      FUN_10115ad0(0);
      FUN_100036c0();
      piVar6 = (int *)FUN_10117884(**(int **)(local_6f4 + -0x1e4) +
                                   (int)*(short *)(*(int *)**(int **)(local_6f4 + -0x1e4) + 0xc0),
                                   1000,0);
      *piVar10 = (int)piVar6;
      local_640 = (int)local_5a8;
      local_63c = (int)local_5a6;
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x378),&local_640,0);
    }
    piVar6 = (int *)*piVar10;
    if (piVar6 != (int *)0x0) {
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 800));
      FUN_10117884(*piVar10 + (int)*(short *)(*(int *)*piVar10 + 0x4c8));
      FUN_10117884(*piVar10 + (int)*(short *)(*(int *)*piVar10 + 0x3a8));
    }
    if (local_1e8 != 0) {
      iVar8 = FUN_10117884(*piVar10 + (int)*(short *)(*(int *)*piVar10 + 0x5e8));
      lVar11 = (unsigned long long)*(unsigned int *)(local_6f4 + -0xb0) + 0x56;
      FUN_10003150(*(int *)(iVar8 + 0x18));
      iVar8 = FUN_10117884(*piVar10 + (int)*(short *)(*(int *)*piVar10 + 0x5e8));
      FUN_10003150(*(int *)(iVar8 + 0x1c),lVar11);
      FUN_10002148(lVar11);
      uVar4 = FUN_100b0574(local_1f0);
      FUN_100033a8(local_1e8,uVar4);
      FUN_100b08d4(&local_4c,local_1f0);
      uVar4 = FUN_100b057c(local_1f0,0);
      FUN_100b0698(local_1f0,uVar4);
      uVar12 = (int)local_5a6 - (int)local_4a;
      local_646 = (short)((int)uVar12 >> 1) + (unsigned short)((int)uVar12 < 0 && (uVar12 & 1) != 0);
      uVar12 = (int)local_5a8 - (int)local_4c;
      local_648 = (short)((int)uVar12 >> 1) + (unsigned short)((int)uVar12 < 0 && (uVar12 & 1) != 0);
      FUN_100b065c(local_1f0,&local_648);
      if (local_1f0[0] < 0) {
        local_1ec = local_1ec - local_1f0[0];
        local_1f0[0] = 0;
      }
      uVar4 = FUN_100b0578(local_1f0);
      FUN_10002d30(local_1e8,uVar4);
      uVar4 = FUN_10117884(*piVar10 + (int)*(short *)(*(int *)*piVar10 + 0x5e8));
      FUN_10002e80(local_1e8,uVar4,0);
      FUN_10003408(local_1e8);
      uVar12 = FUN_100038a0(local_1e8);
      do {
        if (uVar12 != 0) break;
        uVar12 = FUN_10003948();
        if (uVar12 == 0) {
          FUN_10003570(auStack_320);
          uVar12 = (unsigned int)((local_31c & 0x10) != 0);
          if (uVar12 == 0) {
            if ((local_31a & 2) == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = 1;
            }
          }
        }
        FUN_10003660(local_1e8,0);
        iVar8 = FUN_100038a0(local_1e8);
      } while (iVar8 == 0);
      FUN_100038b8(local_1e8);
      local_1e8 = 0;
      FUN_10115ad0(local_4e);
      FUN_100024f0();
    }
    **(int **)(local_6f4 + -0x530) = local_200;
  }
  else {
    if (local_1e8 != 0) {
      FUN_100038b8(local_1e8);
      local_1e8 = 0;
    }
    FUN_10115ad0(local_4e);
    FUN_100024f0();
    piVar6 = (int *)*piVar10;
    if (piVar6 != (int *)0x0) {
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x738));
      *piVar10 = 0;
    }
  }
  FUN_100013f8(0x7f7f,0);
  FUN_10002508();
  param_1[0x22] = 0;
  *(char *)((int)param_1 + 0x3b) = 1;
  *(char *)((int)param_1 + 0x99) = 0;
  *(char *)(param_1 + 0x26) = 0;
  *(char *)((int)param_1 + 0x9a) = 0;
  *(char *)((int)param_1 + 0x9b) = 0;
  FUN_100981f8(auStack_5f8,0x80);
  piVar10 = (int *)FUN_10098320(auStack_5f8,0x536f756e,1000);
  if (piVar10 == (int *)0x0) {
    *(char *)(param_1 + 0x6a) = 1;
    *(char *)(param_1 + 0x69) = 1;
    *(char *)((int)param_1 + 0x1a1) = 1;
  }
  else {
    *(char *)((int)param_1 + 0x1a1) = *(char *)*piVar10;
    *(char *)(param_1 + 0x69) = *(char *)(*piVar10 + 2);
    *(char *)(param_1 + 0x6a) = *(char *)(*piVar10 + 4);
    FUN_100ef510(piVar10);
  }
  piVar10 = (int *)FUN_10098320(auStack_5f8,0x566f6c75,1000);
  if (piVar10 == (int *)0x0) {
    *(short *)((int)param_1 + 0x1a2) = 4;
    *(short *)((int)param_1 + 0x1a6) = 10;
    *(short *)((int)param_1 + 0x1aa) = 10;
  }
  else {
    *(short *)((int)param_1 + 0x1a2) = *(short *)*piVar10;
    *(short *)((int)param_1 + 0x1a6) = *(short *)(*piVar10 + 2);
    *(short *)((int)param_1 + 0x1aa) = *(short *)(*piVar10 + 4);
  }
  puVar9 = (int *)FUN_10098320(auStack_5f8,0x4d61696c,1000);
  if (puVar9 == (int *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(char *)*puVar9;
  }
  *(char *)(param_1 + 0x6b) = uVar14;
  FUN_100ef510(puVar9);
  puVar9 = (int *)FUN_10098320(auStack_5f8,0x504d6163,1000);
  if (puVar9 != (int *)0x0) {
    puVar2 = (char *)*puVar9;
    **(char **)(local_6f4 + -0x16ac) = *puVar2;
    **(char **)(local_6f4 + -0x16a8) = puVar2[1];
    FUN_10000960(puVar9);
  }
  FUN_10009a0c();
  FUN_10052608();
  FUN_1005f478();
  FUN_10093a5c();
  FUN_10003aa4();
  FUN_1005f32c();
  FUN_10008de4();
  FUN_10074114(param_1);
  param_1[3] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800),param_1,1);
  FUN_100982e8(auStack_5f8,2);
  return;
}

/* Address: 0x10074c58 Size: 372 bytes */
int * FUN_10074c58(long long param_1,unsigned long long param_2,int *param_3)

{
  int *ppuVar1;
  int *piVar2;
  int iVar3;
  char auStack_160 [72];
  char local_118 [280];
  
  ppuVar1 = 0 /* TVect base */;
  piVar2 = (int *)FUN_1007ab7c(0);
  iVar3 = (int)param_2;
  if ((iVar3 == 0x14) || (iVar3 == 0x16)) {
    FUN_1007ac8c(piVar2,param_3,0x57617232,
                 ('\x14' - ((0x14 < param_2) + '\x14')) +
                 (0x13 < param_2 && (unsigned long long)(0x14 < param_2) <= param_2 - 0x14));
  }
  else if (iVar3 == 0x15) {
    *(short *)(*(int*)((char*)ppuVar1 - 0x5a9)) = 0;
    FUN_1007ac8c(piVar2,0,0x57617232,1);
    local_118[0] = 0;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x290),local_118);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x318),local_118);
    FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x178),auStack_160);
    FUN_1007ec7c(piVar2,auStack_160);
    FUN_10117884(piVar2[0x52] + (int)*(short *)(*(int *)piVar2[0x52] + 0x118));
    FUN_1007c714(piVar2,0x3f5);
    FUN_100db158(0,0x820000);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

/* Address: 0x10074dcc Size: 372 bytes */
void FUN_10074dcc(int param_1)

{
  int uVar1;
  unsigned int dVar2;
  char uVar4;
  int *piVar3;
  char auStack_c0 [80];
  char auStack_70 [112];
  
  dVar2 = 0;
  uVar1 = uRam10116a54;
  uVar4 = FUN_100f1574(1);
  piVar3 = (int *)FUN_10001fc8(6);
  *(char *)dVar2 = uVar4;
  if (piVar3 != (int *)0x0) {
    *(char *)*piVar3 = *(char *)(param_1 + 0x1a1);
    *(char *)(*piVar3 + 2) = *(char *)(param_1 + 0x1a4);
    *(char *)(*piVar3 + 4) = *(char *)(param_1 + 0x1a8);
    FUN_100981f8(auStack_70,0x80);
    FUN_100985fc(auStack_70,piVar3,0x536f756e,1000,uVar1);
    FUN_10000960(piVar3);
    FUN_100982e8(auStack_70,2);
  }
  uVar4 = FUN_100f1574(1);
  piVar3 = (int *)FUN_10001fc8(6);
  *(char *)dVar2 = uVar4;
  if (piVar3 != (int *)0x0) {
    *(short *)*piVar3 = *(short *)(param_1 + 0x1a2);
    *(short *)(*piVar3 + 2) = *(short *)(param_1 + 0x1a6);
    *(short *)(*piVar3 + 4) = *(short *)(param_1 + 0x1aa);
    FUN_100981f8(auStack_c0,0x80);
    FUN_100985fc(auStack_c0,piVar3,0x566f6c75,1000,uVar1);
    FUN_10000960(piVar3);
    FUN_100982e8(auStack_c0,2);
  }
  return;
}

/* Address: 0x10074f40 Size: 892 bytes */

void FUN_10074f40(int param_1)

{
  short sVar1;
  int *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_15c;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar6 = iRam1011788c;
  puVar2 = puRam10117370;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puRam10117370;
  *puRam10117370 = auStack_138;
  iVar3 = FUN_10000090(auStack_138);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_10117884(**(int **)(local_15c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_15c + -0x1e4) + 200),0x7da
                                 ,0);
    FUN_100db26c();
    piVar5 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x6d757369);
    if (piVar5 != (int *)0x0) {
      if (*(short *)(piVar5 + 0x35) != *(short *)(param_1 + 0x1a2)) {
        *(short *)(piVar5 + 0x35) = *(short *)(param_1 + 0x1a2);
      }
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x738),*(char *)(iVar6 + 0x34) == '\0',0)
      ;
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd8),*(char *)(iVar6 + 0x34));
    }
    iVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x736f756e);
    if ((iVar6 != 0) && (*(short *)(iVar6 + 0xd4) != *(short *)(param_1 + 0x1a6))) {
      *(short *)(iVar6 + 0xd4) = *(short *)(param_1 + 0x1a6);
    }
    iVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x73706565);
    if ((iVar6 != 0) && (*(short *)(iVar6 + 0xd4) != *(short *)(param_1 + 0x1aa))) {
      *(short *)(iVar6 + 0xd4) = *(short *)(param_1 + 0x1aa);
    }
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 800));
    iVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x810));
    if (iVar6 == 0x6f6b2020) {
      iVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x6d757369);
      if (iVar6 != 0) {
        sVar1 = *(short *)(iVar6 + 0xd4);
        *(short *)(param_1 + 0x1a2) = sVar1;
        *(int *)(param_1 + 0x1a1) = sVar1 != 0;
        if (sVar1 != 0) {
          FUN_10092a58(sVar1);
          FUN_10092aa4();
        }
        else {
          FUN_10092ae0();
        }
      }
      iVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x736f756e);
      if (iVar6 != 0) {
        sVar1 = *(short *)(iVar6 + 0xd4);
        *(short *)(param_1 + 0x1a6) = sVar1;
        *(char *)(param_1 + 0x1a4) = '\x01' - (sVar1 == 0);
      }
      iVar6 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x73706565);
      if (iVar6 != 0) {
        sVar1 = *(short *)(iVar6 + 0xd4);
        *(short *)(param_1 + 0x1aa) = sVar1;
        *(char *)(param_1 + 0x1a8) = '\x01' - (sVar1 == 0);
      }
      FUN_10074dcc(param_1);
    }
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738));
    *puVar2 = local_30;
  }
  else {
    FUN_100db158(local_38,local_34);
  }
  return;
}

/* Address: 0x10075304 Size: 392 bytes */

void FUN_10075304()

{
  int *puVar1;
  int iVar3;
  int *piVar4;
  long long uVar2;
  int local_14c;
  char auStack_124 [256];
  short local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = puRam10117370;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = *puRam10117370;
  *puRam10117370 = auStack_124;
  iVar3 = FUN_10000090(auStack_124);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_10117884(**(int **)(local_14c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_14c + -0x1e4) + 200),2000,
                                 0);
    FUN_100db26c();
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 800));
    iVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x810));
    if ((iVar3 == 0x6f6b2020) &&
       (uVar2 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7f8)), (int)uVar2 != 0)) {
      FUN_100a1ce8(uVar2);
    }
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738));
    *puVar1 = local_1c;
  }
  else {
    FUN_100db158(local_24,local_20);
  }
  return;
}

/* Address: 0x1007548c Size: 228 bytes */
void FUN_1007548c(int param_1,long long param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((((((iVar2 == 0x14) || (iVar2 == 0x15)) || (iVar2 == 0x16)) ||
       ((iVar2 == 0x17 || (iVar2 == 0x18)))) ||
      ((iVar2 == 0x19 || ((iVar2 == 0x1a || (iVar2 == 0x1b)))))) ||
     ((iVar2 == 0x1c || (iVar2 == 0x1d)))) {
    piVar1 = *(int **)(param_1 + 0x88);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2c0));
    }
  }
  else {
    if (iVar2 == 0x76e) {
      FUN_10075304(param_1);
      return;
    }
    if (iVar2 == 0x774) {
      FUN_10074f40(param_1);
      return;
    }
  }
  FUN_100b993c(param_1,param_2);
  return;
}

/* Address: 0x10075714 Size: 320 bytes */
void FUN_10075714(int param_1)

{
  int iVar1;
  int *piVar2;
  int *ppuVar3;
  char cVar4;
  long long lVar5;
  
  piVar2 = piRam1011734c;
  ppuVar3 = 0 /* TVect base */;
  FUN_100b9c98(param_1);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x16d) == '\0') {
      cVar4 = '\x01';
    }
    else {
      cVar4 = *(char *)(iVar1 + 0x16c);
    }
    if (cVar4 == '\0') {
      if (*(char *)(param_1 + 0x9a) != '\0') {
        FUN_100f27d0(0x24,0);
      }
    }
  }
  if (*(char *)(*piVar2 + 0x99) == '\0') {
    FUN_10075570(param_1,0x774,1);
    if ((*(short *)(*(int *)(*(int*)((char*)ppuVar3 - 0x151)) + *(short *)(*(int *)(*(int*)((char*)ppuVar3 - 0x151)) + 0x110) * 2 + 0xd0
                   ) == 0) && (*(char *)(param_1 + 0x9a) == '\0')) {
      FUN_10075570(param_1,0x76e,1);
    }
  }
  else {
    FUN_100f27d0(1,0);
    lVar5 = 10;
    do {
      FUN_100f27d0(lVar5,0);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < 0x14);
    lVar5 = 0x14;
    do {
      FUN_100f27d0(lVar5,0);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < 0x1e);
  }
  return;
}

/* Address: 0x10075854 Size: 64 bytes */
void FUN_10075854(int param_1,long long param_2)

{
  FUN_100b7a24(param_1,param_2);
  *(int *)(param_1 + 0x88) = (int)param_2;
  return;
}

/* Address: 0x10075894 Size: 120 bytes */
void FUN_10075894(int *param_1)

{
  short uVar1;
  int *piVar2;
  short sVar3;
  
  piVar2 = piRam1011734c;
  uVar1 = *(short *)(*piRam1011734c + 0x54);
  *(short *)(*piRam1011734c + 0x54) = 0x40;
  sVar3 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x300),0);
    sVar3 = sVar3 + 1;
  } while (sVar3 < 10);
  *(short *)(*piVar2 + 0x54) = uVar1;
  return;
}






















































































/* Address: 0x10075918 Size: 192 bytes */
void FUN_10075918(int *param_1,int *param_2)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar2 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar2 = *param_1;
    uVar1 = FUN_100f2214(4);
    uVar1 = FUN_1004152c(*(int *)((int)param_2 + 0x16),*(short *)((int)param_2 + 0x22),
                         uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x478),uVar1);
  }
  else {
    FUN_100b960c(param_1,param_2);
  }
  return;
}

/* Address: 0x100759d8 Size: 668 bytes */
void FUN_100759d8(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  long long uVar8;
  
  piVar3 = piRam101163ac;
  piVar2 = piRam10116208;
  piVar1 = piRam10116204;
  iVar4 = FUN_10002f40();
  iVar5 = FUN_100efb84();
  iVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar6 != 0) {
    FUN_100929a0();
  }
  if (iVar4 != iVar5) {
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0x26) == '\0') goto LAB_10075adc;
      iVar4 = FUN_10003750();
      if (iVar4 != 0) {
        FUN_10002fe8();
        FUN_100db2f4();
      }
    }
    iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
    if ((iVar4 == 0) || (iVar5 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    FUN_10003258(uVar8);
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
    *(char *)(param_1 + 0x26) = (char)iVar5;
  }
LAB_10075adc:
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if ((((iVar4 == 0) && (param_1[0x22] != 0)) && (*piVar2 != 0)) &&
     (*(char *)((int)param_1 + 0x9a) != '\0')) {
    uVar7 = FUN_10001a88();
    if ((param_1[0x27] + 0x3cU <= uVar7) &&
       (iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8)), iVar4 != 0)) {
      *(char *)((int)param_1 + 0x9a) = 0;
      FUN_1007c714(param_1[0x22],1000);
      goto LAB_10075c08;
    }
  }
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (((iVar4 == 0) && ((param_1[0x22] != 0 && (*piVar2 != 0)))) &&
     (*(char *)((int)param_1 + 0x9b) != '\0')) {
    uVar7 = FUN_10001a88();
    if ((param_1[0x27] + 0x3cU <= uVar7) &&
       (iVar4 = FUN_10117884((int)*(short *)(*param_1 + 0x2e8) + (int)param_1), iVar4 != 0)) {
      *(char *)((int)param_1 + 0x9b) = 0;
      FUN_1007c714(param_1[0x22],0x3ee);
    }
  }
LAB_10075c08:
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (iVar4 != 0) {
    if (*piVar3 != 0) {
      *(short *)(*piVar3 + 0xbc) = 0xffff;
    }
    if (*piVar1 != 0) {
      *(short *)(*piVar1 + 0xa0) = 0xffff;
    }
  }
  FUN_100d9fe8(param_1,param_2);
  return;
}

/* Address: 0x10075c74 Size: 288 bytes */
void FUN_10075c74(int *param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int local_130;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar2 = piRam101176bc;
  puVar1 = puRam10117370;
  local_130 = *piRam101176bc;
  *piRam101176bc = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar1;
  *puVar1 = auStack_12c;
  iVar3 = FUN_10000090(auStack_12c);
  if (iVar3 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800),param_1,0);
    FUN_100b8ac4(param_1);
    *puVar1 = local_24;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800),param_1,1);
    if (local_130 != 0) {
      *piVar2 = local_130;
    }
    local_130 = 0;
    FUN_100db158(local_2c,local_28);
  }
  *piVar2 = local_130;
  FUN_1002774c();
  iVar3 = FUN_100f57c8(local_130);
  *piVar2 = iVar3;
  return;
}

/* Address: 0x10075d94 Size: 308 bytes */
int FUN_10075d94(int param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char uVar4;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar3 = FUN_100ef2f8(*(int *)(param_1 + 0x94));
    if (iVar3 != 0) {
      FUN_10000b70(*(int *)(param_1 + 0x94));
    }
    piVar1 = *(int **)(param_1 + 0x94);
    if (*piVar1 != 0) {
      uVar4 = FUN_10000360(piVar1);
      FUN_10002598(piVar1);
      piVar2 = (int *)**(int **)(param_1 + 0x94);
      iVar3 = 0;
      if (0 < *piVar2) {
        do {
          if (*(short *)(piVar2 + iVar3 * 2 + 2) == param_2) {
            iVar3 = piVar2[iVar3 * 2 + 1];
            if (((char*)0) != (char *)0x18) {
              FUN_10001b60(piVar1,uVar4);
              return iVar3;
            }
            return iVar3;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar2);
      }
      if (((char*)0) != (char *)0x18) {
        FUN_10001b60(piVar1,uVar4);
      }
    }
  }
  return 0;
}

/* Address: 0x10075f80 Size: 308 bytes */
void FUN_10075f80(int param_1)

{
  int iVar1;
  char uVar3;
  int *piVar2;
  short sVar4;
  int iVar5;
  int local_94;
  char auStack_70 [80];
  int *local_20;
  char local_1c;
  
  uVar3 = FUN_100f1574(1);
  piVar2 = (int *)FUN_10001fc8(8);
  **(char **)(local_94 + -0x3c) = uVar3;
  if (piVar2 != (int *)0x0) {
    local_20 = piVar2;
    local_1c = FUN_10000360(piVar2);
    FUN_10002598(local_20);
    iVar1 = *piVar2;
    iVar5 = 0;
    do {
      *(short *)(iVar5 * 2 + iVar1) = *(short *)(param_1 + iVar5 * 2 + 0x8c);
      sVar4 = (short)iVar5 + 1;
      iVar5 = (int)sVar4;
    } while (sVar4 < 4);
    if (((char*)0) != (char *)0x20) {
      FUN_10001b60(local_20,local_1c);
    }
    if (piVar2 != (int *)0x0) {
      FUN_100981f8(auStack_70,0x80);
      FUN_100985fc(auStack_70,piVar2,0x53686f72,1000,*(int *)(local_94 + -0xe4c));
      FUN_100ef510(piVar2);
      FUN_100982e8(auStack_70,2);
    }
  }
  return;
}

/* Address: 0x100760c0 Size: 184 bytes */
void FUN_100760c0(long long param_1,long long param_2,int *param_3,long long param_4)

{
  int *ppuVar1;
  int iVar2;
  int *in_stack_00000040;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100bd9dc(param_1,param_2,param_3,param_4);
  iVar2 = (int)param_2;
  if (iVar2 == 0x14) {
    *param_3 = (*(int*)((char*)ppuVar1 - 0x5a5));
  }
  else if ((1000 < iVar2) && (iVar2 < 0x3ee)) {
    *in_stack_00000040 = (int)param_1;
    *param_3 = (*(int*)((char*)ppuVar1 - 0x5a4));
    if ((param_2 - 0x3e9U & 0xffffffff) < 5) {
      return;
    }
  }
  return;
}

/* Address: 0x100764ec Size: 144 bytes */
long long FUN_100764ec(int *param_1,long long param_2)

{
  int *piVar1;
  int iVar3;
  long long uVar2;
  
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (iVar3 == 0) {
    piVar1 = (int *)param_1[0x22];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2c0));
      param_1[0x22] = 0;
    }
    uVar2 = FUN_100bc6ac(param_1,param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* Address: 0x1007657c Size: 152 bytes */
long long FUN_1007657c(int *param_1,long long param_2,long long param_3)

{
  int *piVar1;
  int iVar3;
  long long uVar2;
  
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (iVar3 == 0) {
    piVar1 = (int *)param_1[0x22];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2c0));
      param_1[0x22] = 0;
    }
    uVar2 = FUN_100bc87c(param_1,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* Address: 0x10076614 Size: 92 bytes */
void FUN_10076614(int param_1)

{
  long long uVar1;
  
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    uVar1 = FUN_10001170();
    FUN_10003870(uVar1,*(short *)(param_1 + 0x1ae),0,0);
    FUN_100db2f4();
  }
  return;
}

/* Address: 0x10076670 Size: 152 bytes */
void FUN_10076670(int param_1)

{
  int iVar1;
  
  FUN_10092ae0();
  FUN_10076614(param_1);
  iVar1 = FUN_10002f40();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x98) != '\0')) {
    iVar1 = FUN_10003750();
    if (iVar1 != 0) {
      FUN_10002fe8();
      FUN_100db2f4();
    }
    FUN_10003258(0);
    *(char *)(param_1 + 0x98) = 0;
  }
  FUN_100dac54(param_1);
  return;
}

/* Address: 0x10076708 Size: 80 bytes */
void FUN_10076708(int param_1,unsigned long long param_2)

{
  FUN_100b8f00(param_1,param_2);
  if ((param_2 & 0xffffffff) == (unsigned long long)*(unsigned int *)(param_1 + 0x88)) {
    *(int *)(param_1 + 0x88) = 0;
  }
  return;
}

/* Address: 0x10076758 Size: 464 bytes */
void FUN_10076758()

{
  int *puVar1;
  int iVar3;
  int *piVar4;
  long long uVar2;
  int local_154;
  int *local_130;
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
  iVar3 = FUN_10000090(auStack_12c);
  if (iVar3 == 0) {
    local_130 = (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),
                                    0x410,0);
    FUN_100db26c();
    FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 800));
    piVar4 = (int *)FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x7f8));
    uVar2 = FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x308),0x63726564);
    if ((piVar4 != (int *)0x0) && ((int)uVar2 != 0)) {
      FUN_10117884((int)*(short *)(*piVar4 + 0x140) + (int)piVar4,3,uVar2,0);
    }
    *puVar1 = local_24;
  }
  else {
    iVar3 = FUN_100f5790(local_130);
    if (iVar3 != 0) {
      FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x738));
    }
    local_130 = (int *)0x0;
    FUN_100db158(local_2c,local_28);
  }
  FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x810));
  FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x738));
  return;
}

/* Address: 0x10076928 Size: 148 bytes */
long long FUN_10076928(long long param_1,long long param_2,int *param_3)

{
  long long uVar1;
  int local_8 [2];
  
  if (param_3 == (int *)0x0) {
    uVar1 = 0x14;
  }
  else {
    FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x180),local_8);
    FUN_100db2f4();
    if (local_8[0] == 0x57325347) {
      uVar1 = 0x14;
    }
    else if (local_8[0] == 0x57325343) {
      uVar1 = 0x15;
    }
    else {
      uVar1 = 0x16;
    }
  }
  return uVar1;
}

/* Address: 0x100769bc Size: 88 bytes */
void FUN_100769bc(long long param_1,int param_2,int *param_3)

{
  int uVar1;
  
  if ((param_2 < 0x3e9) || (0x3ed < param_2)) {
    uVar1 = FUN_100f15e0(0);
    *param_3 = uVar1;
  }
  else {
    FUN_100bdb40(param_1,param_2,param_3);
  }
  return;
}

/* Address: 0x10076a14 Size: 296 bytes */
long long FUN_10076a14(int param_1)

{
  char cVar1;
  short sVar3;
  char *puVar2;
  short sVar4;
  int iVar5;
  long long uVar6;
  char *puVar7;
  int local_74;
  char local_50 [80];
  
  puVar7 = ((char*)0) + -0x50;
  uVar6 = 1;
  if ((*(unsigned char *)(param_1 + 0x1e) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x20) == 0x57325347) || (*(int *)(param_1 + 0x20) == 0x57325343)) {
      uVar6 = 0;
    }
    else {
      FUN_100012d8(*(char **)(param_1 + 0x12) + 1,puVar7,**(char **)(param_1 + 0x12));
      puVar7[**(unsigned char **)(param_1 + 0x12) + 1] = 0;
      sVar3 = FUN_100012c0(puVar7);
      iVar5 = 0;
      if (-1 < sVar3) {
        do {
          cVar1 = puVar7[iVar5];
          if (('`' < cVar1) && (cVar1 < '{')) {
            puVar7[iVar5] = cVar1 + -0x20;
          }
          sVar4 = (short)iVar5 + 1;
          iVar5 = (int)sVar4;
        } while (sVar4 <= sVar3);
      }
      puVar2 = (char *)FUN_10002958(puVar7,(unsigned long long)*(unsigned int *)(local_74 + -0x16b4) + 0x44);
      if ((puVar2 == ((char*)0) + -0x50) &&
         (iVar5 = FUN_10002958(puVar7,(unsigned long long)*(unsigned int *)(local_74 + -0x16b4) + 0x4c), iVar5 != 0))
      {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

/* Address: 0x10076b3c Size: 340 bytes */
void FUN_10076b3c(int *param_1,int param_2)

{
  int iVar2;
  int iVar3;
  int *piVar4;
  long long uVar1;
  short sVar5;
  int local_3c;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),
                       *(int *)(param_2 + 0x16));
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if ((iVar3 != 0) && (iVar2 != 0)) {
    if (iVar2 == **(int **)(local_3c + -0x1698)) {
      piVar4 = (int *)FUN_10001170();
      sVar5 = *(short *)(**(int **)(*piVar4 + 0x16) + 0x20);
      uVar1 = FUN_10001188(piVar4,8,1,1);
      if ((sVar5 == 8) || ((int)uVar1 == 0)) {
        *(char *)((int)param_1 + 0x1b1) = 0;
      }
      else if (*(char *)((int)param_1 + 0x1b1) == '\0') {
        *(char *)((int)param_1 + 0x1b1) = 1;
        iVar2 = FUN_100d8c9c(0x3f2,0);
        if (iVar2 == 1) {
          FUN_10003870(piVar4,uVar1,0,0);
          FUN_100db2f4();
          sVar5 = *(short *)(**(int **)(*piVar4 + 0x16) + 0x20);
        }
      }
      if (sVar5 == 8) {
        FUN_1000a4e8();
      }
    }
  }
  FUN_100bb820(param_1,param_2);
  return;
}

/* Address: 0x10076c90 Size: 92 bytes */
void FUN_10076c90(long long param_1,int param_2)

{
  int *piVar1;
  int uStack0000001c;
  
  piVar1 = piRam10116204;
  if (*piRam101163ac != 0) {
    *(short *)(*piRam101163ac + 0xbc) = 0xffff;
  }
  if (*piVar1 != 0) {
    *(short *)(*piVar1 + 0xa0) = 0xffff;
  }
  uStack0000001c = param_2;
  FUN_100bdc54(param_1,param_2);
  return;
}

/* Address: 0x10076cec Size: 580 bytes */
void FUN_10076cec(int *param_1,int param_2)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  int iVar4;
  int *puVar5;
  short sVar6;
  int local_25c;
  char local_234 [256];
  char auStack_134 [256];
  short local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = puRam10117370;
  sVar6 = (short)((unsigned int)param_2 >> 0x10);
  if (sVar6 != 0) {
    iVar3 = FUN_100f2704(sVar6,(short)param_2);
    if ((iVar3 < 0) && (sVar6 == 1)) {
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
        puVar5 = (int *)FUN_100f56e4(0x34);
        if (puVar5 != (int *)0x0) {
          FUN_100c3d2c(puVar5);
          *puVar5 = *(int *)(local_25c + -0x168c);
          puVar5[0xc] = 0;
        }
        FUN_100c3df8(puVar5,0xffffffffffffffff,param_1,0,0,0);
        puVar5[0xc] = iVar3;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar5);
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

/* Address: 0x10076f30 Size: 268 bytes */
void FUN_10076f30(int *param_1,long long param_2,long long param_3,long long param_4)

{
  int *piVar1;
  int iVar4;
  long long uVar2;
  long long uVar3;
  
  piVar1 = piRam10116208;
  if ((int)param_2 == 0x2b) {
    iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
    if (iVar4 != 0) {
      FUN_100d9b64(param_1,param_2,param_3,param_4);
    }
    if (*piVar1 != 0) {
      uVar2 = FUN_100f5754(0);
      uVar3 = FUN_1010ef14(0);
      FUN_100f5754(uVar2);
      FUN_1010efac(uVar3,0x1f,*piVar1);
      FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x208),uVar3);
    }
  }
  FUN_100b941c(param_1,param_2,param_3,param_4);
  return;
}

/* Address: 0x1007703c Size: 84 bytes */
void FUN_1007703c(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    FUN_10092a58(0);
  }
  FUN_100b78b4(param_1,param_2);
  return;
}

/* Address: 0x10077090 Size: 80 bytes */
void FUN_10077090(int param_1,char param_2)

{
  FUN_100bd438(param_1,param_2);
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    FUN_10092a58(*(short *)(param_1 + 0x1a2));
  }
  return;
}

/* Address: 0x100770e0 Size: 60 bytes */
void FUN_100770e0()

{
  FUN_100c1c8c(uRam101161f0,*puRam10116218,0x1b4,uRam1011621c,uRam10116220);
  return;
}

/* Address: 0x10077128 Size: 84 bytes */
int * FUN_10077128()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(200);
  if (puVar2 != (int *)0x0) {
    FUN_1010f054(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x59d));
  }
  return puVar2;
}

/* Address: 0x1007717c Size: 8 bytes */
int FUN_1007717c()

{
  return uRam101166b0;
}

/* Address: 0x10077184 Size: 184 bytes */
void FUN_10077184(int *param_1,long long param_2)

{
  int *ppuVar1;
  int *piVar3;
  long long uVar2;
  int iVar4;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_1010f8cc(param_1,param_2);
  FUN_10003210(param_1[0x20],*(int *)(*(int*)((char*)ppuVar1 - 0x74)),1);
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (piVar3 != (int *)0x0) {
    uVar2 = FUN_1007717c();
    iVar4 = FUN_100f5278(piVar3,uVar2);
    if (iVar4 != 0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x1a8) + (int)piVar3,param_2);
    }
  }
  return;
}

/* Address: 0x1007723c Size: 384 bytes */
void FUN_1007723c(int *param_1,int *param_2,int *param_3,int *param_4,
                 char param_5)

{
  short local_68;
  short local_66;
  short local_60;
  short local_5e;
  int local_58;
  int local_54;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  FUN_100e10b0(&local_58,param_2,param_3);
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = local_58;
  local_34 = local_54;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),&local_40,param_5);
  FUN_100e0f78(&local_60,param_4);
  FUN_100e0f78(&local_68,param_3);
  local_48 = CONCAT22(local_68,local_66);
  local_44 = CONCAT22(local_60,local_5e);
  param_1[0x24] = local_48;
  param_1[0x25] = local_44;
  local_50 = 1;
  local_4e = 1;
  local_4c = 1;
  local_4a = 1;
  FUN_100b0590(param_1 + 0x24,&local_50);
  FUN_10003108(**(int **)(param_1[0x20] + 0x82),0,0,(short)param_3[1] + 1,(short)*param_3 + 1
              );
  FUN_10003108((unsigned long long)**(unsigned int **)(param_1[0x20] + 0x82) + 8,0,0,(short)param_4[1] + 1,
               (short)*param_4 + 1);
  return;
}

/* Address: 0x100773bc Size: 436 bytes */
long long
FUN_100773bc(long long param_1,int *param_2,int *param_3,int *param_4,
            long long param_5)

{
  int *piVar1;
  int iVar2;
  long long uVar3;
  int local_168;
  int uStack_164;
  char auStack_160 [352];
  
  FUN_1010556c(auStack_160,param_2);
  piVar1 = (int *)FUN_10105660(auStack_160);
  iVar2 = FUN_100ebf44(auStack_160);
  uVar3 = 0;
  if (iVar2 == 0) {
LAB_100774b0:
    if (((((int)uVar3 == 0) &&
         (iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x578)), iVar2 != 0)) &&
        (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x538) + (int)param_2,param_4), iVar2 != 0)
        ) && (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x668) + (int)param_2), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*param_2 + 0x608) + (int)param_2,param_5);
      *param_3 = param_2;
      uVar3 = 1;
    }
  }
  else {
    do {
      local_168 = *param_4;
      uStack_164 = param_4[1];
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8),&local_168);
      uVar3 = FUN_100773bc(param_1,piVar1,param_3,&local_168,param_5);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b0),param_5);
      piVar1 = (int *)FUN_10105684(auStack_160);
      iVar2 = FUN_100ebf44(auStack_160);
      if (iVar2 == 0) goto LAB_100774b0;
    } while ((int)uVar3 == 0);
  }
  FUN_101055f4(auStack_160,2);
  return uVar3;
}

/* Address: 0x10077570 Size: 144 bytes */
void FUN_10077570(int param_1,long long param_2,long long param_3)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_100773bc(param_1,iVar1,param_1 + 0x38,param_2,param_3);
  }
  if ((iVar2 == 0) || (*(int *)(param_1 + 0x38) == iVar1)) {
    FUN_10000138(param_3);
    *(int *)(param_1 + 0x38) = 0;
  }
  return;
}

/* Address: 0x10077600 Size: 1024 bytes */
void FUN_10077600(int *param_1,long long param_2,int *param_3,short *param_4,
                 long long param_5,int *param_6,long long param_7)

{
  int *piVar1;
  int *puVar2;
  int uVar3;
  int *ppuVar4;
  int iVar6;
  long long uVar5;
  int iVar7;
  int **local_2e4;
  int local_2b8;
  char auStack_2b4 [8];
  char auStack_2ac [276];
  int local_198;
  char auStack_194 [276];
  int local_80;
  int local_7c;
  int local_78;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  int local_64;
  int uStack_60;
  int uStack_5c;
  int uStack_58;
  int local_54;
  int local_4c [19];
  
  iVar7 = iRam101176c0;
  ppuVar4 = 0 /* TVect base */;
  if (param_1[0xf] != 0) {
    FUN_100019c8(param_1[0xf]);
    param_1[0xf] = 0;
    ppuVar4 = local_2e4;
  }
  piVar1 = (int *)param_1[2];
  if (param_1[0xe] != 0) {
    FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar4 - 0x3b7)) + (int)*(short *)(**(int **)(*(int*)((char*)ppuVar4 - 0x3b7)) + 0x418),
                 1000,1,0,param_4,param_5,param_6,param_7);
    FUN_100b02d0(auStack_2b4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0),
                 *(int *)(param_1[0xe] + 0x18),auStack_2b4);
    iVar6 = FUN_100b04f0(auStack_2b4,local_2e4[-0x398]);
    if (iVar6 == 0) {
      if ((piVar1 != (int *)0x0) &&
         (iVar6 = FUN_10117884((int)*(short *)(*piVar1 + 0x3a8) + (int)piVar1), iVar6 != 0)) {
        FUN_100ee64c(auStack_194);
        FUN_10001e48(local_80);
        FUN_100ee64c(auStack_2ac);
        uVar3 = local_198;
        local_6c = 0xd8f0;
        local_6a = 0xd8f0;
        local_68 = 10000;
        local_66 = 10000;
        uVar5 = FUN_100b0578(&local_6c);
        FUN_10003150(uVar3,uVar5);
        FUN_10001548(local_198);
        puVar2 = (int *)local_2e4[-0x59c];
        local_64 = *puVar2;
        uStack_60 = puVar2[1];
        uStack_5c = puVar2[2];
        uStack_58 = puVar2[3];
        local_54 = puVar2[4];
        iVar6 = FUN_1000a12c(&local_64,*(short *)(iVar7 + 4),*(short *)(iVar7 + 6),8,0);
        if (iVar6 == 0) {
          FUN_100db26c(0);
        }
        FUN_10000870(&local_2b8,local_4c);
        FUN_10000888(local_54,0);
        FUN_100b2268(local_2e4[-0x75]);
        FUN_100008b8();
        FUN_100b2268(ZEXT48(local_2e4[-0x75]) + 0x5fa);
        FUN_100021c0();
        if (local_54 != 0) {
          FUN_10009a98(local_54);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),
                     *(int *)(param_1[0xe] + 0x18));
        if (local_54 != 0) {
          FUN_10009b00(local_54);
        }
        FUN_10000888(local_2b8,local_4c[0]);
        local_6e = *(short *)(iVar7 + 4);
        local_70 = *(short *)(iVar7 + 6);
        local_74 = 0;
        local_72 = 0;
        FUN_100b0578(&local_74);
        iVar6 = FUN_100001b0();
        param_1[0xf] = iVar6;
        FUN_10009b48(&local_64,0,0,*(short *)(iVar7 + 4),*(short *)(iVar7 + 6),
                     local_2e4[-0x482],0,0);
        FUN_100001c8();
        FUN_1000a094(&local_64);
        FUN_10001548(local_80);
        FUN_100ee77c(auStack_2ac,2);
        FUN_100ee77c(auStack_194,2);
      }
      *param_4 = 5;
      *(int *)(param_4 + 1) = param_1[0xf];
      iVar7 = FUN_10117884(param_1[0xe] + (int)*(short *)(*(int *)param_1[0xe] + 0x3a8));
      if ((iVar7 != 0) && (param_3 != (int *)0x0)) {
        local_7c = *(int *)(*param_3 + 2);
        local_78 = *(int *)(*param_3 + 6);
        *param_6 = local_7c;
        param_6[1] = local_78;
        FUN_10117884(param_5,param_1[0xe] + (int)*(short *)(*(int *)param_1[0xe] + 0x280),param_2);
        if (piVar1 != (int *)0x0) {
          FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
        }
      }
    }
  }
  return;
}

/* Address: 0x10077a00 Size: 228 bytes */
void FUN_10077a00(int param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7)

{
  int iVar1;
  int *puVar3;
  long long uVar2;
  int uStack00000028;
  char auStack_20 [32];
  
  iVar1 = iRam101177f0;
  uStack00000028 = param_5;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_100b0384(((char*)0 + 0x00000028));
    FUN_10002fd0();
    puVar3 = (int *)FUN_100b0368(auStack_20,((char*)0 + 0x00000028));
    uVar2 = FUN_100000f0(param_4,*puVar3,0,0,0x81,param_7,2);
    if ((int)uVar2 != -0x355) {
      FUN_100db2f4(uVar2);
    }
  }
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x18),param_3,param_3);
  FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),param_3,param_3);
  return;
}

/* Address: 0x10077af4 Size: 344 bytes */
void FUN_10077af4(int *param_1,long long param_2,long long param_3)

{
  int *puVar1;
  long long uVar2;
  long long uVar3;
  int iVar4;
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
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if ((int)uVar2 != 0) {
    uVar3 = FUN_1007717c();
    iVar4 = FUN_100f5278(uVar2,uVar3);
    if (iVar4 != 0) {
      FUN_10077570(uVar2,param_2,param_3);
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_3c = *puVar1;
      *puVar1 = auStack_144;
      iVar4 = FUN_10000090(auStack_144);
      if (iVar4 != 0) {
        return;
      }
      FUN_100b02d0(local_154);
      FUN_10077600(uVar2,param_2,param_3,auStack_25c,local_154,auStack_14c,local_260);
      FUN_10077a00(uVar2,param_2,param_3,auStack_25c,local_154[0],auStack_14c,local_260[0]);
      *puVar1 = local_3c;
      return;
    }
  }
  FUN_10107f60(param_1,param_2,param_3);
  return;
}

/* Address: 0x10077c7c Size: 368 bytes */
void FUN_10077c7c(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  int *piVar2;
  int local_158;
  int uStack_154;
  char auStack_150 [336];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x570));
  if (iVar1 != 0) {
    FUN_101054e0(auStack_150,param_1,0);
    piVar2 = (int *)FUN_10105660(auStack_150);
    iVar1 = FUN_100ebf44(auStack_150);
    while (iVar1 != 0) {
      local_158 = *param_2;
      uStack_154 = param_2[1];
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_158);
      iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x538),&local_158);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x568)), iVar1 != 0)) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x588) + (int)piVar2,&local_158,param_3);
        FUN_10117884((int)*(short *)(*piVar2 + 0x2b0) + (int)piVar2,param_3);
        break;
      }
      piVar2 = (int *)FUN_10105684(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  return;
}

/* Address: 0x10077dec Size: 96 bytes */
void FUN_10077dec(int param_1,int *param_2,char param_3)

{
  int local_8;
  int local_4;
  
  local_4 = param_2[1];
  if ((int)*(short *)(param_1 + 0x96) < param_2[1]) {
    local_4 = (int)*(short *)(param_1 + 0x96);
  }
  local_8 = *param_2;
  if ((int)*(short *)(param_1 + 0x94) < *param_2) {
    local_8 = (int)*(short *)(param_1 + 0x94);
  }
  FUN_1010bfd4(param_1,&local_8,param_3);
  return;
}

/* Address: 0x10077e4c Size: 276 bytes */
void FUN_10077e4c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_2c;
  
  FUN_10110c38(param_1);
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818));
  if (iVar2 != 0) {
    piVar1 = (int *)**(int **)(local_2c + -0x1698);
    if ((piVar1 != (int *)0x0) && (piVar1 != param_1)) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x4c8) + (int)piVar1);
    }
    piVar1 = (int *)**(int **)(local_2c + -0x1504);
    if ((piVar1 != (int *)0x0) && (piVar1 != param_1)) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
    }
    piVar1 = (int *)**(int **)(local_2c + -0x18fc);
    if ((piVar1 != (int *)0x0) && (piVar1 != param_1)) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
    }
    piVar1 = (int *)**(int **)(local_2c + -0x16a0);
    if ((piVar1 != (int *)0x0) && (piVar1 != param_1)) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
    }
  }
  return;
}

/* Address: 0x10077f68 Size: 84 bytes */
int * FUN_10077f68()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(200);
  if (puVar2 != (int *)0x0) {
    FUN_100e0ca0(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x59a));
  }
  return puVar2;
}

/* Address: 0x10077fbc Size: 184 bytes */
void FUN_10077fbc(int *param_1,long long param_2)

{
  int *ppuVar1;
  int *piVar3;
  long long uVar2;
  int iVar4;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_1010f8cc(param_1,param_2);
  FUN_10003210(param_1[0x20],*(int *)(*(int*)((char*)ppuVar1 - 0x74)),1);
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (piVar3 != (int *)0x0) {
    uVar2 = FUN_1007717c();
    iVar4 = FUN_100f5278(piVar3,uVar2);
    if (iVar4 != 0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x1a8) + (int)piVar3,param_2);
    }
  }
  return;
}

/* Address: 0x10078074 Size: 712 bytes */
void FUN_10078074(int param_1,int *param_2,int *param_3)

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
     (piVar5 = (int *)FUN_100f56e4(0x10), piVar5 != (int *)0x0)) {
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

/* Address: 0x1007833c Size: 712 bytes */
void FUN_1007833c(int param_1,int *param_2,int *param_3)

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
     (piVar5 = (int *)FUN_100f56e4(0x10), piVar5 != (int *)0x0)) {
    *piVar5 = *param_2;
    piVar5[1] = param_2[1];
    piVar5[2] = param_2[2];
    piVar5[3] = param_2[3];
  }
  *puVar13 = 2;
  local_54 = 2;
  FUN_100e16b8(piVar15,puVar13);
  local_6c = FUN_100e1a3c(piVar15,1);
  uVar4 = FUN_100b057c(param_1 + 0x90,0);
  psVar6 = (short *)FUN_100b0388(uVar4,1);
  sVar1 = *psVar6;
  psVar6 = (short *)FUN_100b0388(param_1 + 0xbe,1);
  local_74 = (int)sVar1 + (int)*psVar6;
  if (local_6c < local_74) {
    piVar7 = &local_6c;
  }
  local_4c = *piVar7;
  local_70 = FUN_100e1a3c(piVar15,0);
  uVar4 = FUN_100b057c(param_1 + 0x90,0);
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

/* Address: 0x10078604 Size: 344 bytes */
void FUN_10078604(int *param_1,long long param_2,long long param_3)

{
  int *puVar1;
  long long uVar2;
  long long uVar3;
  int iVar4;
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
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if ((int)uVar2 != 0) {
    uVar3 = FUN_1007717c();
    iVar4 = FUN_100f5278(uVar2,uVar3);
    if (iVar4 != 0) {
      FUN_10077570(uVar2,param_2,param_3);
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_3c = *puVar1;
      *puVar1 = auStack_144;
      iVar4 = FUN_10000090(auStack_144);
      if (iVar4 != 0) {
        return;
      }
      FUN_100b02d0(local_154);
      FUN_10077600(uVar2,param_2,param_3,auStack_25c,local_154,auStack_14c,local_260);
      FUN_10077a00(uVar2,param_2,param_3,auStack_25c,local_154[0],auStack_14c,local_260[0]);
      *puVar1 = local_3c;
      return;
    }
  }
  FUN_10107f60(param_1,param_2,param_3);
  return;
}

/* Address: 0x1007878c Size: 72 bytes */
long long FUN_1007878c()

{
  long long uVar1;
  int in_r6;
  int uStack00000024;
  
  if (*(char *)(*piRam1011734c + 0x99) == '\0') {
    uStack00000024 = in_r6;
    uVar1 = FUN_10111ba8();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100787dc Size: 128 bytes */
int * FUN_100787dc(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xf8),
     param_1 != (int *)0x0)) {
    FUN_100e0ca0(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x598));
    FUN_101175c4(param_1 + 0x32,3,0x10,(*(int*)((char*)ppuVar1 - 0x597)));
  }
  return param_1;
}

/* Address: 0x1007885c Size: 40 bytes */
void FUN_1007885c()

{
  FUN_100787dc(0);
  return;
}

/* Address: 0x10078884 Size: 56 bytes */
void FUN_10078884(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838));
  return;
}

/* Address: 0x100788bc Size: 252 bytes */
void FUN_100788bc(int param_1,long long param_2,int *param_3)

{
  int uVar1;
  int uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int local_38;
  int local_34;
  char auStack_30 [48];
  int uVar2;
  
  iVar6 = 0;
  do {
    FUN_100e1a64(auStack_30,param_1 + iVar6 * 0x10 + 200);
    iVar4 = FUN_100e11fc(param_1 + 0x34,auStack_30);
    if (iVar4 != 0) break;
    sVar5 = (short)iVar6 + 1;
    iVar6 = (int)sVar5;
  } while (sVar5 < 3);
  if (iVar6 == 3) {
    iVar6 = 2;
  }
  FUN_100e10b0(&local_38,param_1 + 0x2c,param_1 + 0x34);
  uVar3 = *(int *)(param_1 + 0x30);
  iVar4 = param_1 + iVar6 * 0x10;
  *(int *)(iVar4 + 200) = *(int *)(param_1 + 0x2c);
  *(int *)(iVar4 + 0xcc) = uVar3;
  *(int *)(iVar4 + 0xd0) = local_38;
  *(int *)(iVar4 + 0xd4) = local_34;
  sVar5 = (short)iVar6 + 1;
  iVar6 = (int)sVar5;
  if (sVar5 == 3) {
    iVar6 = 0;
  }
  param_1 = param_1 + iVar6 * 0x10;
  uVar3 = *(int *)(param_1 + 0xcc);
  uVar1 = *(int *)(param_1 + 0xd0);
  uVar2 = *(int *)(param_1 + 0xd4);
  *param_3 = *(int *)(param_1 + 200);
  param_3[1] = uVar3;
  param_3[2] = uVar1;
  param_3[3] = uVar2;
  return;
}

/* Address: 0x100789c0 Size: 108 bytes */
int * FUN_100789c0()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x40);
  if (puVar2 != (int *)0x0) {
    FUN_100d568c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x596));
    puVar2[0xd] = 0x20202020;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
  }
  return puVar2;
}

/* Address: 0x10078a2c Size: 4 bytes */
void FUN_10078a2c()

{
  return;
}

/* Address: 0x10078a30 Size: 384 bytes */
int * FUN_10078a30()
{
  return 0;
}

/* Address: 0x10078bb0 Size: 84 bytes */
void FUN_10078bb0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_100019c8(*(int *)(param_1 + 0x3c));
    *(int *)(param_1 + 0x3c) = 0;
  }
  FUN_100bf654(param_1);
  return;
}

/* Address: 0x10078c04 Size: 84 bytes */
void FUN_10078c04(long long param_1,long long param_2,int *param_3)

{
  int iVar1;
  int local_18;
  
  iVar1 = iRam101176c0;
  FUN_100462c8(0x1d);
  local_18 = CONCAT22(*(short *)(iVar1 + 6),*(short *)(iVar1 + 4));
  *param_3 = local_18;
  return;
}

/* Address: 0x10078c58 Size: 32 bytes */
void FUN_10078c58()

{
  return;
}

/* Address: 0x10078c94 Size: 616 bytes */
void FUN_10078c94(int param_1,unsigned long long param_2,char param_3)

{
  int *piVar2;
  long long uVar1;
  int *piVar3;
  int iVar4;
  int local_94;
  int local_70;
  int local_6c;
  char auStack_68 [16];
  int local_58;
  int local_54;
  char auStack_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  piVar3 = *(int **)(param_1 + 8);
  if ((param_2 & 0xffffffff) != (unsigned long long)*(unsigned int *)(param_1 + 0x24)) {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*piVar3 + 0x308) + (int)piVar3,
                                 (unsigned long long)*(unsigned int *)(param_1 + 0x24));
    uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x410),0x6f75746c);
    if ((int)uVar1 != 0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x3f8) + (int)piVar2,uVar1,param_3);
      FUN_10117884((int)*(short *)(*piVar2 + 0x780) + (int)piVar2,*(int *)(local_94 + -0xc64)
                   ,param_3);
      FUN_10117884((int)*(short *)(*piVar2 + 0x618) + (int)piVar2,auStack_50);
      local_58 = 4;
      local_54 = 4;
      FUN_100e16b8(auStack_50,&local_58);
      FUN_10117884((int)*(short *)(*piVar2 + 0x350) + (int)piVar2,auStack_50,param_3);
    }
  }
  *(int *)(param_1 + 0x24) = (int)param_2;
  piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),param_2);
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_10117884((int)*(short *)(*piVar3 + 0x410) + (int)piVar3,0x6f75746c);
    if (iVar4 == 0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x618),auStack_68);
      local_70 = 0xfffffffc;
      local_6c = 0xfffffffc;
      FUN_100e16b8(auStack_68,&local_70);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x350),auStack_68,param_3);
      local_40 = 4;
      local_3c = 4;
      local_38 = 4;
      local_34 = 4;
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x780),&local_40,param_3);
      uVar1 = FUN_100b2bb4(0);
      FUN_100b444c(uVar1,0x6f75746c,1);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x3f0),uVar1,0x7f,param_3);
    }
  }
  return;
}

/* Address: 0x10078efc Size: 168 bytes */

void FUN_10078efc()

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116234;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116228,*FUN_10116248,200,uRam10116250,uRam10116f40);
  FUN_100c1c8c(uVar1,*(int *)(*(int*)((char*)ppuVar2 - 0x593)),200,(*(int*)((char*)ppuVar2 - 0x592)),(*(int*)((char*)ppuVar2 - 0x25e)));
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x599)),*(int *)(*(int*)((char*)ppuVar2 - 0x591)),0xf8,(*(int*)((char*)ppuVar2 - 0x590)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x47c)),*(int *)(*(int*)((char*)ppuVar2 - 0x58f)),0x40,(*(int*)((char*)ppuVar2 - 0x58e)),(*(int*)((char*)ppuVar2 - 0x299)));
  return;
}







































































/* Address: 0x1007901c Size: 40 bytes */
void FUN_1007901c()

{
  FUN_10078fb4(0);
  return;
}

/* Address: 0x10079044 Size: 284 bytes */
void FUN_10079044(int *param_1,long long param_2,char param_3)

{
  int *piVar2;
  long long uVar1;
  long long uVar3;
  long long uVar4;
  char auStack_28 [4];
  unsigned int local_24;
  int local_20;
  int local_1c;
  
  FUN_100c7804(param_1,param_2,param_3);
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7f8));
  if ((int)uVar1 != 0) {
    FUN_100e1a64(auStack_28,param_2);
    if ((unsigned int)(local_24 < 0x71) == (int)local_24 >> 0x1f) {
      uVar4 = 0x6c62616b;
      uVar3 = 0x3f0;
    }
    else {
      uVar4 = 0x7362616b;
      uVar3 = 0x3f1;
    }
    local_20 = 0;
    local_1c = 0;
    FUN_10078a30(uVar1,uVar4,uVar3,&local_20,param_3);
    FUN_100db26c();
    FUN_1003f6e8();
  }
  return;
}

































































































































































/* Address: 0x10079160 Size: 116 bytes */
void FUN_10079160(int *param_1)

{
  char auStack_18 [24];
  
  FUN_10105d28(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),auStack_18,1);
  return;
}

/* Address: 0x100791dc Size: 128 bytes */
int * FUN_100791dc(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x40),
     param_1 != (int *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = (*(int*)((char*)ppuVar1 - 0x58a));
  }
  return param_1;
}

/* Address: 0x1007925c Size: 40 bytes */
void FUN_1007925c()

{
  FUN_100791dc(0);
  return;
}

/* Address: 0x10079284 Size: 600 bytes */
void FUN_10079284(long long param_1,unsigned int param_2)

{
  if ((param_2 < 0x73637230) || (0x73637237 < param_2)) {
    if (param_2 == 0x64657365) {
      FUN_1009e534(0xb5);
    }
    else {
      if ((int)param_2 < 0x64657366) {
        if (param_2 == 0x62757433) {
          FUN_1009e534(0xb8);
          return;
        }
        if ((int)param_2 < 0x62757434) {
          if (param_2 == 0x62757431) {
            FUN_1009e534(0xb6);
            return;
          }
          if (param_2 == 0x62757432) {
            FUN_1009e534(0xb7);
            return;
          }
        }
        else {
          if (param_2 == 0x63656e74) {
            FUN_1009e534(0xb4);
            return;
          }
          if ((int)param_2 < 0x63656e75) {
            if (param_2 == 0x62757434) {
              FUN_1009e534(0xb9);
              return;
            }
          }
          else if (param_2 == 0x64656c65) {
            FUN_1009e534(0xbe);
            return;
          }
        }
      }
      else {
        if (param_2 == 0x6c656176) {
          FUN_1009e534(0xb2);
          return;
        }
        if ((int)param_2 < 0x6c656177) {
          if (param_2 == 0x67756172) {
            FUN_1009e534(0xb3);
            return;
          }
          if ((int)param_2 < 0x67756173) {
            if (param_2 == 0x6469706c) {
              FUN_1009e534(0xba);
              return;
            }
          }
          else if (param_2 == 0x68656c70) {
            FUN_1009e534(0xbf);
            return;
          }
        }
        else {
          if (param_2 == 0x6e657874) {
            FUN_1009e534(0xb1);
            return;
          }
          if ((int)param_2 < 0x6e657875) {
            if (param_2 == 0x6d6f7665) {
              FUN_1009e534(0xb0);
              return;
            }
          }
          else if (param_2 == 0x70617468) {
            FUN_1009e534(0xbd);
            return;
          }
        }
      }
      FUN_10078c58();
    }
  }
  else {
    FUN_1009e534((short)param_2 + -0x70ed);
  }
  return;
}

/* Address: 0x100794dc Size: 92 bytes */
void FUN_100794dc()

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam1011626c,*puRam1011627c,0xa8,uRam10116280,uRam10116c34);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x58b)),*(int *)(*(int*)((char*)ppuVar1 - 0x587)),0x40,(*(int*)((char*)ppuVar1 - 0x586)),(*(int*)((char*)ppuVar1 - 0x47c)));
  return;
}

/* Address: 0x10079538 Size: 8 bytes */
int FUN_10079538()

{
  return uRam10116290;
}

/* Address: 0x10079548 Size: 108 bytes */
int * FUN_10079548()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x40);
  if (puVar2 != (int *)0x0) {
    FUN_100d568c(puVar2);
    puVar2[0xd] = 0x20202020;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x6c1));
  }
  return puVar2;
}

/* Address: 0x100795b4 Size: 560 bytes */
void FUN_100795b4(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x696e666f) {
    FUN_10025c68();
    return;
  }
  if (iVar1 < 0x696e6670) {
    if (iVar1 == 0x61726d34) {
LAB_10079720:
      FUN_10047fc8((short)*(int *)(param_3 + 0x18) + -0x6d31);
      return;
    }
    if (iVar1 < 0x61726d35) {
      if (iVar1 == 0x61726d32) goto LAB_10079720;
      if (iVar1 < 0x61726d33) {
        if (iVar1 == 0x61726d31) goto LAB_10079720;
      }
      else if (iVar1 == 0x61726d33) goto LAB_10079720;
    }
    else {
      if (iVar1 == 0x62757072) {
        FUN_10049930();
        return;
      }
      if (iVar1 < 0x62757073) {
        if (iVar1 == 0x6275696c) {
          FUN_10025d10();
          return;
        }
      }
      else if (iVar1 == 0x64657374) {
        FUN_10048788(1);
        return;
      }
    }
  }
  else {
    if (iVar1 == 0x72656e61) {
      FUN_10025e44();
      return;
    }
    if (iVar1 < 0x72656e62) {
      if (iVar1 == 0x70726f64) {
        FUN_10025ca0();
        return;
      }
      if (iVar1 < 0x70726f65) {
        if (iVar1 == 0x6f766572) {
          FUN_10025d48((unsigned short)((unsigned long long)param_2 >> 8) & 0x7f,(unsigned short)param_2 & 0xff,1);
          return;
        }
      }
      else if (iVar1 == 0x72617a65) {
        FUN_1004f388();
        return;
      }
    }
    else {
      if (iVar1 == 0x73746f70) {
        FUN_10048054();
        return;
      }
      if (iVar1 < 0x73746f71) {
        if (iVar1 == 0x73656520) {
          FUN_10048788(2);
          return;
        }
      }
      else {
        if (iVar1 == 0x746f2020) {
          FUN_10048788(0);
          return;
        }
        if (iVar1 == 0x76656374) {
          FUN_10025cd8();
          return;
        }
      }
    }
  }
  FUN_100d5934();
  return;
}

/* Address: 0x100797e4 Size: 1036 bytes */
void FUN_100797e4(int param_1,unsigned int param_2)

{
  short uVar1;
  unsigned int uVar2;
  int iVar3;
  short *psVar4;
  unsigned int *puVar5;
  int *ppuVar6;
  short sVar7;
  
  puVar5 = puRam1011735c;
  psVar4 = psRam1011677c;
  ppuVar6 = 0 /* TVect base */;
  if (param_2 == 0x6f766572) {
    FUN_1000a9e4(0,0,0);
    if (4 < *(unsigned short *)(*(int*)((char*)ppuVar6 - 0x6c8))) {
      return;
    }
    return;
  }
  if (param_2 == 0x70696374) {
    FUN_1000a9e4(0,0,0);
    FUN_1000aaa8((unsigned long long)*puVar5 +
                 (((long long)*psVar4 & 0x7ffffffU) * 0x20 + (long long)*psVar4 & 0x7fffffff) * 2 +
                 0x1608,ZEXT48((*(int*)((char*)ppuVar6 - 0x585))) + 0x60);
    return;
  }
  if (((*(int *)(param_1 + 0x34) == 0x6962616b) && (0x61726d30 < param_2)) && (param_2 < 0x61726d35)
     ) {
    sVar7 = (short)param_2 + -0x6d31;
    uVar2 = *puRam1011735c;
    iVar3 = uVar2 + *psRam1011677c * 0x42;
    if (-1 < *(char *)(iVar3 + sVar7 + 0x161a)) {
      uVar1 = *(short *)(uVar2 + 0x110);
      *(short *)(uVar2 + 0x110) = (short)*(char *)(iVar3 + 0x1619);
      iVar3 = *puVar5 + (*psVar4 * 0x20 + (int)*psVar4) * 2 + (int)sVar7;
      FUN_1000ba58(*(char *)(iVar3 + 0x161a),*(char *)(iVar3 + 0x161e),
                   *(char *)(iVar3 + 0x1622),*(char *)(iVar3 + 0x162a),
                   *(char *)(iVar3 + 0x1626),0,0);
      *(short *)(*puVar5 + 0x110) = uVar1;
      return;
    }
    FUN_1000a9e4(0,0,0);
    FUN_1000aaa8((unsigned long long)*puVar5 +
                 (((long long)*psVar4 & 0x7ffffffU) * 0x20 + (long long)*psVar4 & 0x7fffffff) * 2 +
                 0x1608,ZEXT48((*(int*)((char*)ppuVar6 - 0x585))) + 0x78);
    return;
  }
  if (param_2 == 0x696e666f) {
    FUN_1009e534(0xc4);
    return;
  }
  if ((int)param_2 < 0x696e6670) {
    if (param_2 == 0x61726d34) {
LAB_10079bfc:
      FUN_1009e534((short)param_2 + -0x6c69);
      return;
    }
    if ((int)param_2 < 0x61726d35) {
      if (param_2 == 0x61726d32) goto LAB_10079bfc;
      if ((int)param_2 < 0x61726d33) {
        if (param_2 == 0x61726d31) goto LAB_10079bfc;
      }
      else if (param_2 == 0x61726d33) goto LAB_10079bfc;
    }
    else {
      if (param_2 == 0x62757072) {
        FUN_1009e534(0xcf);
        return;
      }
      if ((int)param_2 < 0x62757073) {
        if (param_2 == 0x6275696c) {
          FUN_1009e534(0xc5);
          return;
        }
      }
      else if (param_2 == 0x64657374) {
        FUN_1009e534(0xd5);
        return;
      }
    }
  }
  else {
    if (param_2 == 0x72656e61) {
      FUN_1009e534(0xce);
      return;
    }
    if ((int)param_2 < 0x72656e62) {
      if (param_2 == 0x70726f64) {
        FUN_1009e534(0xc6);
        return;
      }
      if ((int)param_2 < 0x70726f65) {
        if (param_2 == 0x6f6b2020) {
          FUN_1009e534(0xc3);
          return;
        }
      }
      else if (param_2 == 0x72617a65) {
        FUN_1009e534(0xd0);
        return;
      }
    }
    else {
      if (param_2 == 0x73746f70) {
        FUN_1009e534(0xcd);
        return;
      }
      if ((int)param_2 < 0x73746f71) {
        if (param_2 == 0x73656520) {
          FUN_1009e534(0xd7);
          return;
        }
      }
      else {
        if (param_2 == 0x746f2020) {
          FUN_1009e534(0xd6);
          return;
        }
        if (param_2 == 0x76656374) {
          FUN_1009e534(199);
          return;
        }
      }
    }
  }
  FUN_10078c58();
  return;
}

/* Address: 0x10079d98 Size: 8 bytes */
int FUN_10079d98()

{
  return uRam10116774;
}

/* Address: 0x10079da8 Size: 128 bytes */
int * FUN_10079da8()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xbc);
  if (puVar2 != (int *)0x0) {
    FUN_100c6b2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x6c0));
    *(short *)(puVar2 + 0x2a) = 0;
    *(short *)((int)puVar2 + 0xaa) = 0;
    *(short *)(puVar2 + 0x2b) = 0;
    *(short *)((int)puVar2 + 0xae) = 0;
    *(short *)(puVar2 + 0x2c) = 0;
    *(short *)((int)puVar2 + 0xb2) = 0;
    *(short *)(puVar2 + 0x2d) = 1;
    *(short *)((int)puVar2 + 0xb6) = 0;
    *(short *)(puVar2 + 0x2e) = 0;
  }
  return puVar2;
}

/* Address: 0x10079e28 Size: 188 bytes */
void FUN_10079e28(int *param_1)

{
  int local_5c;
  char auStack_28 [16];
  short local_18;
  short local_16;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,&local_18);
  FUN_1000873c(*(short *)(param_1 + 0x2a),*(short *)((int)param_1 + 0xaa),
               *(int *)(local_5c + -0x1208),local_16,local_18,*(short *)(param_1 + 0x2b)
               ,*(short *)((int)param_1 + 0xae),*(short *)(param_1 + 0x2c));
  FUN_10067270();
  return;
}

/* Address: 0x10079ee8 Size: 128 bytes */
void FUN_10079ee8(int *param_1,short param_2,short param_3,char param_4)

{
  if (param_4 == '\0') {
    *(short *)(param_1 + 0x2a) = param_2;
    *(short *)((int)param_1 + 0xaa) = param_3;
  }
  else {
    if ((*(short *)(param_1 + 0x2a) != param_2) || (*(short *)((int)param_1 + 0xaa) != param_3)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0),param_2,param_3,param_4);
    }
    *(short *)(param_1 + 0x2a) = param_2;
    *(short *)((int)param_1 + 0xaa) = param_3;
  }
  return;
}












































































/* Address: 0x10079f68 Size: 176 bytes */
void FUN_10079f68(int *param_1,short param_2,short param_3,short param_4,short param_5,char param_6)

{
  if (param_6 == '\0') {
    *(short *)(param_1 + 0x2b) = param_2;
    *(short *)((int)param_1 + 0xae) = param_3;
    *(short *)(param_1 + 0x2c) = param_4;
    *(short *)((int)param_1 + 0xb2) = param_5;
  }
  else {
    if ((((*(short *)(param_1 + 0x2b) != param_2) || (*(short *)((int)param_1 + 0xae) != param_3))
        || (*(short *)(param_1 + 0x2c) != param_4)) || (*(short *)((int)param_1 + 0xb2) != param_5))
    {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    *(short *)(param_1 + 0x2b) = param_2;
    *(short *)((int)param_1 + 0xae) = param_3;
    *(short *)(param_1 + 0x2c) = param_4;
    *(short *)((int)param_1 + 0xb2) = param_5;
  }
  return;
}

/* Address: 0x1007a018 Size: 152 bytes */
void FUN_1007a018(int *param_1,short param_2,short param_3,short param_4,char param_5)

{
  if (param_5 == '\0') {
    *(short *)(param_1 + 0x2d) = param_2;
    *(short *)((int)param_1 + 0xb6) = param_3;
    *(short *)(param_1 + 0x2e) = param_4;
  }
  else {
    if (((*(short *)(param_1 + 0x2d) != param_2) || (*(short *)((int)param_1 + 0xb6) != param_3)) ||
       (*(short *)(param_1 + 0x2e) != param_4)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    *(short *)(param_1 + 0x2d) = param_2;
    *(short *)((int)param_1 + 0xb6) = param_3;
    *(short *)(param_1 + 0x2e) = param_4;
  }
  return;
}



























































































/* Address: 0x1007a0b0 Size: 8 bytes */
int FUN_1007a0b0()

{
  return uRam10116294;
}

/* Address: 0x1007a0c0 Size: 104 bytes */
int * FUN_1007a0c0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xb4),
     param_1 != (int *)0x0)) {
    FUN_100cdb5c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x582));
  }
  return param_1;
}

/* Address: 0x1007a128 Size: 40 bytes */
void FUN_1007a128()

{
  FUN_1007a0c0(0);
  return;
}

/* Address: 0x1007a150 Size: 428 bytes */

void FUN_1007a150(int param_1)

{
  int iVar1;
  int uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  uVar2 = FUN_10116698;
  FUN_100d0c54(param_1);
  iVar1 = *piVar4 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((unsigned int)*(int *)
                             (*piVar3 + *(short *)(iVar1 + 0x1606) * 0xe0 +
                             *(short *)(iVar1 + 0x1604) * 2) >> 0x18),uVar2,0x51,0xe);
  iVar1 = *piVar4 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((unsigned int)*(int *)
                             (*piVar3 + *(short *)(iVar1 + 0x1606) * 0xe0 +
                              *(short *)(iVar1 + 0x1604) * 2 + 0xe0) >> 0x18),uVar2,0x51,0x36);
  iVar1 = *piVar4 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((unsigned int)*(int *)
                             (*piVar3 + *(short *)(iVar1 + 0x1606) * 0xe0 +
                              *(short *)(iVar1 + 0x1604) * 2 + 2) >> 0x18),uVar2,0x79,0xe);
  iVar1 = *piVar4 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((unsigned int)*(int *)
                             (*piVar3 + *(short *)(iVar1 + 0x1606) * 0xe0 +
                              *(short *)(iVar1 + 0x1604) * 2 + 0xe2) >> 0x18),uVar2,0x79,0x36);
  return;
}























































































































































/* Address: 0x1007a2fc Size: 136 bytes */
void FUN_1007a2fc(long long param_1,short param_2,char param_3)

{
  int *piVar1;
  long long uVar2;
  int local_34;
  
  uVar2 = FUN_100014b8();
  piVar1 = *(int **)(*(int *)(**(int **)(local_34 + -0x554) + 0x88) + 0x14c);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  FUN_100d0e58(param_1,param_2,param_3);
  FUN_10000318(uVar2);
  return;
}

/* Address: 0x1007a384 Size: 8 bytes */
int FUN_1007a384()

{
  return uRam1011629c;
}

/* Address: 0x1007a394 Size: 108 bytes */
int * FUN_1007a394()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x40);
  if (puVar2 != (int *)0x0) {
    FUN_100d568c(puVar2);
    puVar2[0xd] = 0x20202020;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x6bf));
  }
  return puVar2;
}

/* Address: 0x1007a400 Size: 212 bytes */
void FUN_1007a400(long long param_1,unsigned int param_2)

{
  if (param_2 == 0x646f6e65) {
    FUN_1009e534(399);
  }
  else if ((param_2 < 0x70726f30) || (0x70726f33 < param_2)) {
    if ((param_2 < 0x61726d30) || (0x61726d43 < param_2)) {
      FUN_10078c58();
    }
    else {
      FUN_1009e534((short)param_2 + -0x6b9c);
    }
  }
  else {
    FUN_1009e534((short)param_2 + -0x6da0);
  }
  return;
}

/* Address: 0x1007a4d4 Size: 116 bytes */
void FUN_1007a4d4(long long param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_18;
  
  iVar1 = iRam101176c0;
  if (param_2 == 0x646f6e65) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_18 = CONCAT22(*(short *)(iVar1 + 6),*(short *)(iVar1 + 4));
  *param_3 = local_18;
  return;
}

/* Address: 0x1007a548 Size: 8 bytes */
int FUN_1007a548()

{
  return uRam101162a0;
}

/* Address: 0x1007a558 Size: 128 bytes */
int * FUN_1007a558()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xbc);
  if (puVar2 != (int *)0x0) {
    FUN_100c6b2c(puVar2);
    *(short *)(puVar2 + 0x2a) = 0;
    *(short *)((int)puVar2 + 0xaa) = 0;
    *(short *)(puVar2 + 0x2b) = 0;
    *(short *)((int)puVar2 + 0xae) = 0;
    *(short *)(puVar2 + 0x2c) = 0;
    *(short *)((int)puVar2 + 0xb2) = 0;
    *(short *)(puVar2 + 0x2d) = 1;
    *(short *)((int)puVar2 + 0xb6) = 0;
    *(short *)(puVar2 + 0x2e) = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x6be));
  }
  return puVar2;
}

/* Address: 0x1007a5d8 Size: 136 bytes */
void FUN_1007a5d8(int param_1,long long param_2,long long param_3,int param_4)

{
  unsigned int uVar1;
  int uStack00000024;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uStack00000024 = param_4;
  if ((uVar1 < 0x70726f30) || (0x70726f33 < uVar1)) {
    FUN_10049aec((short)*(int *)(param_1 + 0x18) + -0x6d30);
  }
  else {
    FUN_10049e34((short)uVar1 + -0x6f30);
  }
  return;
}

/* Address: 0x1007a678 Size: 204 bytes */
void FUN_1007a678()

{
  int uVar1;
  int uVar2;
  int *ppuVar3;
  
  uVar2 = uRam10116774;
  uVar1 = uRam101166b0;
  ppuVar3 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116290,*puRam101162a4,0x40,uRam101162a8,uRam101166b0);
  FUN_100c1c8c(uVar2,*(int *)(*(int*)((char*)ppuVar3 - 0x57d)),0xbc,(*(int*)((char*)ppuVar3 - 0x57c)),(*(int*)((char*)ppuVar3 - 0x31b)));
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x583)),*(int *)(*(int*)((char*)ppuVar3 - 0x57b)),0xb4,(*(int*)((char*)ppuVar3 - 0x57a)),(*(int*)((char*)ppuVar3 - 0x2d0)));
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x581)),*(int *)(*(int*)((char*)ppuVar3 - 0x579)),0x40,(*(int*)((char*)ppuVar3 - 0x578)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar3 - 0x580)),*(int *)(*(int*)((char*)ppuVar3 - 0x577)),0xbc,(*(int*)((char*)ppuVar3 - 0x576)),uVar2);
  return;
}

/* Address: 0x1007a858 Size: 52 bytes */
void FUN_1007a858()

{
  FUN_101175c4(uRam101176cc,0x100,6,uRam101162cc);
  return;
}

/* Address: 0x1007a894 Size: 104 bytes */
int * FUN_1007a894(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x30),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x573));
  }
  return param_1;
}


































































/* Address: 0x1007a8fc Size: 40 bytes */
void FUN_1007a8fc()

{
  FUN_1007a894(0);
  return;
}

/* Address: 0x1007a924 Size: 56 bytes */
void FUN_1007a924(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x18) + (int)*(short *)(**(int **)(param_1 + 0x18) + 0x90));
  return;
}

/* Address: 0x1007a95c Size: 56 bytes */
void FUN_1007a95c(long long param_1,long long param_2)

{
  FUN_100c3df8(param_1,0xffffffffffffffff,param_2,0,0,0);
  return;
}


























/* Address: 0x1007a99c Size: 92 bytes */
int * FUN_1007a99c()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x34);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x504));
    puVar2[0xc] = 0;
  }
  return puVar2;
}

/* Address: 0x1007a9f8 Size: 60 bytes */
void FUN_1007a9f8(int param_1)

{
  FUN_100da1d0(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x30));
  return;
}

/* Address: 0x1007aa3c Size: 92 bytes */
int * FUN_1007aa3c()

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x34);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x5a3));
    puVar2[0xc] = 0;
  }
  return puVar2;
}

/* Address: 0x1007aa98 Size: 84 bytes */
void FUN_1007aa98(int param_1)

{
  long long uVar1;
  
  uVar1 = FUN_10117884(*piRam101169c4 + (int)*(short *)(*(int *)*piRam101169c4 + 0x340));
  FUN_100da1d0(uVar1,*(int *)(param_1 + 0x30));
  return;
}

/* Address: 0x1007aaec Size: 136 bytes */
void FUN_1007aaec()

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116a84;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam101162d0,*puRam101162e0,0x30,uRam101162e4,uRam10116a84);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x572)),*(int *)(*(int*)((char*)ppuVar2 - 0x56e)),0x34,(*(int*)((char*)ppuVar2 - 0x56d)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x571)),*(int *)(*(int*)((char*)ppuVar2 - 0x56c)),0x34,(*(int*)((char*)ppuVar2 - 0x56b)),uVar1);
  return;
}

/* Address: 0x1007ab7c Size: 232 bytes */
int * FUN_1007ab7c(int *param_1)

{
  int *ppuVar1;
  short sVar2;
  int iVar3;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1ec),
     param_1 != (int *)0x0)) {
    FUN_100dd9e0(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x568));
    *(char *)(param_1 + 0x51) = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0x5dd;
    param_1[0x5a] = 0x709;
    *(char *)(param_1 + 0x5b) = 1;
    *(char *)((int)param_1 + 0x16d) = 1;
    *(char *)((int)param_1 + 0x16e) = 0;
    *(char *)((int)param_1 + 0x16f) = 0;
    *(char *)((int)param_1 + 0x1d6) = 0;
    param_1[0x76] = 0;
    iVar3 = 0;
    do {
      (param_1 + iVar3)[0x5c] = 0;
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while (sVar2 < 8);
    *(short *)(param_1 + 100) = 0x8000;
  }
  return param_1;
}































































































































































































/* Address: 0x1007ac64 Size: 40 bytes */
void FUN_1007ac64()

{
  FUN_1007ab7c(0);
  return;
}

/* Address: 0x1007ac8c Size: 848 bytes */
void FUN_1007ac8c(int param_1,long long param_2,long long param_3,char param_4)

{
  int *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_1a8;
  short local_1a4 [2];
  int local_1a0;
  int local_19c [4];
  char local_18c [64];
  char auStack_14c [256];
  short local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  puVar1 = puRam10117370;
  FUN_100dda84(param_1);
  *(char *)(param_1 + 0x16c) = param_4;
  *(char *)(param_1 + 0x16d) = 1;
  *(char *)(param_1 + 0x1e9) = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = *puVar1;
  *puVar1 = auStack_14c;
  iVar2 = FUN_10000090(auStack_14c);
  if (iVar2 == 0) {
    local_18c[0] = 0;
    piVar3 = (int *)FUN_100df14c(0);
    FUN_100df1f8(piVar3,param_1,0);
    local_18c[0] = 0;
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe8),local_18c);
    FUN_10001908(&local_1a0);
    FUN_10002b08(0xffffffffffff8000,0x74656d70,1,local_1a4,&local_1a8);
    FUN_100db2f4();
    piVar4 = (int *)FUN_100db3c8(0);
    FUN_100db49c(piVar4,0x20202020,0x20202020,1,2,0,0);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x2a0),3,3);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xd0),local_1a4[0],local_1a8,local_18c);
    FUN_100db2f4();
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xf8));
    FUN_100db2f4();
    *(int **)(param_1 + 0x15c) = piVar4;
    local_18c[0] = 0;
    do {
      FUN_10001908(local_19c);
    } while (local_19c[0] == local_1a0);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe8),local_18c);
    FUN_100f57c8(piVar3);
    piVar3 = (int *)FUN_100db3c8(0);
    FUN_100db49c(piVar3,0x20202020,0x20202020,1,2,0,0);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd0),local_1a4[0],local_1a8,local_18c);
    FUN_100db2f4();
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xf8));
    FUN_100db2f4();
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2a0),3,3);
    *(int **)(param_1 + 0x160) = piVar3;
    *puVar1 = local_44;
  }
  else {
    FUN_100f57c8(0);
    FUN_100f57c8(0);
    *(int *)(param_1 + 0x15c) = 0;
    FUN_100f57c8(0);
    *(int *)(param_1 + 0x160) = 0;
    FUN_100db158(local_4c,local_48);
  }
  return;
}














































































































































































































































































































































































/* Address: 0x1007afdc Size: 384 bytes */
short FUN_1007afdc(short param_1,long long param_2,int param_3)

{
  int iVar3;
  long long uVar1;
  unsigned long long uVar2;
  char cVar5;
  short uVar4;
  short sVar6;
  char auStack_30 [4];
  char auStack_2c [8];
  int *local_24 [9];
  
  iVar3 = FUN_10000be8(param_2);
  if (iVar3 == 0x73746466) {
    sVar6 = 100;
    if (param_1 == -1) {
      uVar1 = FUN_100b0574(auStack_2c);
      FUN_10002730(param_2,0xd,auStack_30,local_24,uVar1);
      if (*(char *)(param_3 + 0x16d) == '\0') {
        cVar5 = '\x01';
      }
      else {
        cVar5 = *(char *)(param_3 + 0x16c);
      }
      if (cVar5 == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      FUN_10001d10(local_24[0],uVar4);
      param_1 = sVar6;
      if (((*(char *)(param_3 + 0x16d) == '\0') &&
          (*(int **)(*local_24[0] + 0x1c) != (int *)0x0)) &&
         (iVar3 = *(int *)**(int **)(*local_24[0] + 0x1c), iVar3 != 0)) {
        FUN_10002358(iVar3,2);
      }
    }
    else if (param_1 == 0xd) {
      uVar1 = FUN_100b0574(auStack_2c);
      FUN_10002730(param_2,0xd,auStack_30,local_24,uVar1);
      uVar2 = FUN_10001c50(local_24[0]);
      *(char *)(param_3 + 0x16c) =
           ('\x01' - ((1 < uVar2) + '\x01')) + (uVar2 != 0 && (unsigned long long)(1 < uVar2) <= uVar2 - 1);
      param_1 = sVar6;
    }
  }
  return param_1;
}

/* Address: 0x1007b15c Size: 120 bytes */
void FUN_1007b15c(int param_1)

{
  long long uVar1;
  long long uVar2;
  
  if (*(char *)(param_1 + 0x16c) == '\0') {
    uVar2 = 0x57324d53;
  }
  else {
    uVar2 = 0x57325347;
  }
  if (*(char *)(param_1 + 0x16c) == '\0') {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  FUN_100db500(uVar2,0x57617232,1,uVar1,0,0);
  return;
}

/* Address: 0x1007b3ec Size: 320 bytes */
void FUN_1007b3ec(int param_1)

{
  int *piVar1;
  int uVar2;
  
  *puRam10116200 = 0;
  *puRam10115fa4 = 0;
  *puRam1011639c = 0;
  *puRam10116208 = 0;
  *puRam101163ac = 0;
  *puRam10116204 = 0;
  uVar2 = FUN_100e91b4(*(int *)(param_1 + 0x120));
  *(int *)(param_1 + 0x120) = uVar2;
  uVar2 = FUN_100e91b4(*(int *)(param_1 + 0x124));
  *(int *)(param_1 + 0x124) = uVar2;
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x148));
  *(int *)(param_1 + 0x148) = uVar2;
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x14c));
  *(int *)(param_1 + 0x14c) = uVar2;
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x150));
  *(int *)(param_1 + 0x150) = uVar2;
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x154));
  *(int *)(param_1 + 0x154) = uVar2;
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x158));
  *(int *)(param_1 + 0x158) = uVar2;
  piVar1 = *(int **)(param_1 + 0x15c);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110));
  }
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x15c));
  *(int *)(param_1 + 0x15c) = uVar2;
  piVar1 = *(int **)(param_1 + 0x160);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110));
  }
  uVar2 = FUN_100f57c8(*(int *)(param_1 + 0x160));
  *(int *)(param_1 + 0x160) = uVar2;
  FUN_100ddc10(param_1);
  return;
}

/* Address: 0x1007b52c Size: 876 bytes */
void FUN_1007b52c()

{
  int uVar1;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  unsigned int uVar7;
  int *puVar8;
  int *puVar9;
  char uVar13;
  unsigned int *puVar10;
  int iVar11;
  int *piVar12;
  int *puVar14;
  int local_1cc;
  int local_1a8 [2];
  char auStack_1a0 [80];
  unsigned int *local_150;
  char local_14c;
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int uVar2;
  int uVar3;
  
  puVar9 = puRam10117370;
  puVar8 = puRam10116c3c;
  piVar4 = piRam1011639c;
  piVar6 = piRam10116200;
  piVar5 = piRam10115fa4;
  puVar14 = local_1a8;
  uVar13 = FUN_100f1574(1);
  puVar10 = (unsigned int *)FUN_10001fc8(0x54);
  **(char **)(local_1cc + -0x3c) = uVar13;
  if (puVar10 != (unsigned int *)0x0) {
    local_48 = 0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_40 = *puVar9;
    *puVar9 = auStack_148;
    iVar11 = FUN_10000090(auStack_148);
    if (iVar11 == 0) {
      local_150 = puVar10;
      local_14c = FUN_10000360(puVar10);
      FUN_10002598(local_150);
      piVar12 = (int *)FUN_10001ef0();
      *(int *)*puVar10 = *(int *)(*piVar12 + 0x1e) == 0;
      iVar11 = local_1cc;
      FUN_100b08d4(puVar14,(unsigned long long)*(unsigned int *)(local_1cc + -0xb0) + 0x56);
      if (*(char *)*puVar10 == '\0') {
        puVar14 = *(int **)(iVar11 + -0xe60);
      }
      *(int *)(*puVar10 + 2) = *puVar14;
      piVar12 = (int *)**(int **)(iVar11 + -0x1698);
      if (piVar12 == (int *)0x0) {
        uVar7 = *puVar10;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *(int *)(uVar7 + 8) = *puVar8;
        *(int *)(uVar7 + 0xc) = uVar1;
        *(int *)(uVar7 + 0x10) = uVar2;
        *(int *)(uVar7 + 0x14) = uVar3;
      }
      else {
        FUN_10117884((int)piVar12 + (int)*(short *)(*piVar12 + 0x618),(unsigned long long)*puVar10 + 8);
        iVar11 = local_1cc;
      }
      piVar12 = (int *)*piVar4;
      if (piVar12 == (int *)0x0) {
        uVar7 = *puVar10;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *(int *)(uVar7 + 0x18) = *puVar8;
        *(int *)(uVar7 + 0x1c) = uVar1;
        *(int *)(uVar7 + 0x20) = uVar2;
        *(int *)(uVar7 + 0x24) = uVar3;
        *(char *)(*puVar10 + 0x28) = 1;
      }
      else {
        FUN_10117884((int)piVar12 + (int)*(short *)(*piVar12 + 0x618),(unsigned long long)*puVar10 + 0x18);
        piVar4 = (int *)*piVar4;
        uVar13 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x668));
        *(char *)(*puVar10 + 0x28) = uVar13;
        iVar11 = local_1cc;
      }
      piVar4 = (int *)*piVar5;
      if (piVar4 == (int *)0x0) {
        uVar7 = *puVar10;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *(int *)(uVar7 + 0x2c) = *puVar8;
        *(int *)(uVar7 + 0x30) = uVar1;
        *(int *)(uVar7 + 0x34) = uVar2;
        *(int *)(uVar7 + 0x38) = uVar3;
        *(char *)(*puVar10 + 0x3c) = 1;
      }
      else {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x618),(unsigned long long)*puVar10 + 0x2c);
        piVar5 = (int *)*piVar5;
        uVar13 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x668));
        *(char *)(*puVar10 + 0x3c) = uVar13;
        iVar11 = local_1cc;
      }
      piVar4 = (int *)*piVar6;
      if (piVar4 == (int *)0x0) {
        uVar7 = *puVar10;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *(int *)(uVar7 + 0x40) = *puVar8;
        *(int *)(uVar7 + 0x44) = uVar1;
        *(int *)(uVar7 + 0x48) = uVar2;
        *(int *)(uVar7 + 0x4c) = uVar3;
        *(char *)(*puVar10 + 0x50) = 1;
      }
      else {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x618),(unsigned long long)*puVar10 + 0x40);
        piVar6 = (int *)*piVar6;
        uVar13 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x668));
        *(char *)(*puVar10 + 0x50) = uVar13;
        iVar11 = local_1cc;
      }
      if (((char*)0) != (char *)0x150) {
        FUN_10001b60(local_150,local_14c);
        iVar11 = local_1cc;
      }
      FUN_100981f8(auStack_1a0,0x80);
      FUN_100985fc(auStack_1a0,puVar10,0x57696e64,1000,*(int *)(iVar11 + -0xe4c));
      FUN_100ef510(puVar10);
      *puVar9 = local_40;
      FUN_100982e8(auStack_1a0,2);
    }
    else {
      FUN_100ef510(puVar10);
      FUN_100db158(local_48,local_44);
    }
  }
  return;
}

/* Address: 0x1007b8a4 Size: 408 bytes */
void FUN_1007b8a4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *ppuVar7;
  int **local_3c;
  
  piVar6 = piRam1011734c;
  piVar5 = piRam1011639c;
  piVar4 = piRam10116208;
  piVar3 = piRam10116200;
  piVar2 = piRam10115fa4;
  ppuVar7 = 0 /* TVect base */;
  FUN_1007b52c(param_1);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x328) + (int)piVar1);
    FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x90));
    ppuVar7 = local_3c;
  }
  *piVar3 = 0;
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x328) + (int)piVar1);
    FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x90));
    ppuVar7 = local_3c;
  }
  *piVar2 = 0;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x328) + (int)piVar1);
    FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0x90));
    ppuVar7 = local_3c;
  }
  *piVar5 = 0;
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x328) + (int)piVar1);
    FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0x90));
    ppuVar7 = local_3c;
  }
  *piVar4 = 0;
  *(int *)(*(int*)((char*)ppuVar7 - 0x53d)) = 0;
  *(int *)(*(int*)((char*)ppuVar7 - 0x5a7)) = 0;
  *(char *)(param_1 + 0x1d6) = 1;
  *(char *)(*piVar6 + 0x9a) = 0;
  FUN_100d6e64(param_1);
  return;
}

/* Address: 0x1007c0ac Size: 92 bytes */
void FUN_1007c0ac(int param_1)

{
  FUN_100d6b74(param_1);
  if (*(char *)(param_1 + 0x1d6) != '\0') {
    FUN_1007ba3c(param_1,1,1);
  }
  *(char *)(param_1 + 0x1d6) = 0;
  return;
}

/* Address: 0x1007c108 Size: 180 bytes */
void FUN_1007c108(int *param_1)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if (*(char *)(param_1 + 0x51) == '\0') {
    puVar2 = (int *)FUN_100f56e4(0x34);
    if (puVar2 != (int *)0x0) {
      FUN_100c3d2c(puVar2);
      *puVar2 = (*(int*)((char*)ppuVar1 - 0x504));
      puVar2[0xc] = 0;
    }
    FUN_100c3df8(puVar2,0x3f3,param_1,0,0,0);
    puVar2[0xc] = 0x3f3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar2);
  }
  return;
}

/* Address: 0x1007c1bc Size: 1116 bytes */
void FUN_1007c1bc(int param_1,long long param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int local_354;
  char auStack_330 [72];
  char auStack_2e8 [72];
  char auStack_2a0 [72];
  char auStack_258 [72];
  char auStack_210 [72];
  int local_1c8;
  char *local_1c4;
  char *local_190;
  char auStack_188 [72];
  char local_140 [256];
  int local_40 [16];
  
  piVar2 = piRam1011734c;
  FUN_100dddb0(param_1,param_2,param_3,param_4);
  *param_3 = *param_3 + 0x19710;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    *param_4 = *param_4 + 0x1a;
    if (*(char *)(param_1 + 0x16e) != '\0') {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x170);
        if (iVar1 != 0) {
          iVar1 = FUN_10002a60(iVar1);
          *param_4 = *param_4 + iVar1 + 0x10;
        }
        sVar3 = (short)iVar4 + 1;
        iVar4 = (int)sVar3;
      } while (sVar3 < 8);
      *param_4 = *param_4 + 0x20;
    }
    if ((*(char *)(*piVar2 + 0x9a) != '\0') || (*(char *)(*piVar2 + 0x99) != '\0')) {
      *param_4 = *param_4 + 0x1a;
    }
  }
  piVar2 = (int *)FUN_100522dc(*(int *)(param_1 + 0x15c),1,0);
  iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8));
  *param_3 = *param_3 + iVar4 + 4;
  FUN_100523a8(piVar2,1);
  piVar2 = (int *)FUN_100522dc(*(int *)(param_1 + 0x160),1,0);
  iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8));
  *param_3 = *param_3 + iVar4 + 4;
  FUN_100523a8(piVar2,1);
  *param_3 = *param_3 + 0x2610;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    *param_4 = *param_4 + 8;
    local_140[0] = 0;
    local_1c8 = 0x3c;
    local_1c4 = local_140;
    local_190 = auStack_188;
    FUN_10001bd8((unsigned long long)**(unsigned int **)(local_354 + -0xedc) + 0x32,&local_1c8);
    FUN_100db2f4();
    FUN_10117884((int)*(int **)(param_1 + 0x148) +
                 (int)*(short *)(**(int **)(param_1 + 0x148) + 0x178),auStack_210);
    FUN_100006d8(auStack_188,auStack_210,local_40);
    if (local_40[0] != 0) {
      iVar4 = FUN_10001c20(local_40[0]);
      *param_4 = *param_4 + iVar4 + 0x10;
      local_40[0] = FUN_100ef510(local_40[0]);
    }
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x178),auStack_258);
    FUN_100006d8(auStack_188,auStack_258,local_40);
    if (local_40[0] != 0) {
      iVar4 = FUN_10001c20(local_40[0]);
      *param_4 = *param_4 + iVar4 + 0x10;
      local_40[0] = FUN_100ef510(local_40[0]);
    }
    piVar2 = *(int **)(param_1 + 0x150);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x178) + (int)piVar2,auStack_2a0);
      FUN_100006d8(auStack_188,auStack_2a0,local_40);
      if (local_40[0] != 0) {
        iVar4 = FUN_10001c20(local_40[0]);
        *param_4 = *param_4 + iVar4 + 0x10;
        local_40[0] = FUN_100ef510(local_40[0]);
      }
    }
    piVar2 = *(int **)(param_1 + 0x154);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x178) + (int)piVar2,auStack_2e8);
      FUN_100006d8(auStack_188,auStack_2e8,local_40);
      if (local_40[0] != 0) {
        iVar4 = FUN_10001c20(local_40[0]);
        *param_4 = *param_4 + iVar4 + 0x10;
        local_40[0] = FUN_100ef510(local_40[0]);
      }
    }
    piVar2 = *(int **)(param_1 + 0x158);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x178) + (int)piVar2,auStack_330);
      FUN_100006d8(auStack_188,auStack_330,local_40);
      if (local_40[0] != 0) {
        iVar4 = FUN_10001c20(local_40[0]);
        *param_4 = *param_4 + iVar4 + 0x10;
        FUN_100ef510(local_40[0]);
      }
    }
  }
  return;
}

/* Address: 0x1007ee44 Size: 96 bytes */
void FUN_1007ee44(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x2b8));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  }
  return;
}







































































/* Address: 0x1007eea4 Size: 152 bytes */
void FUN_1007eea4(int param_1,long long param_2)

{
  int *ppuVar1;
  int uVar3;
  long long uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar3 = FUN_100f57c8(*(int *)(param_1 + 0x154));
  *(int *)(param_1 + 0x154) = uVar3;
  uVar2 = FUN_100db3c8(0);
  *(int *)(param_1 + 0x154) = (int)uVar2;
  FUN_100db49c(uVar2,0x57324349,*(int *)(*(int *)(*(int*)((char*)ppuVar1 - 0x3b7)) + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x154) + (int)*(short *)(**(int **)(param_1 + 0x154) + 0xa8)
               ,param_2);
  return;
}

















































































/* Address: 0x1007ef3c Size: 96 bytes */
void FUN_1007ef3c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x154);
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x2b8));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  }
  return;
}







































































/* Address: 0x1007ef9c Size: 152 bytes */
void FUN_1007ef9c(int param_1,long long param_2)

{
  int *ppuVar1;
  int uVar3;
  long long uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar3 = FUN_100f57c8(*(int *)(param_1 + 0x158));
  *(int *)(param_1 + 0x158) = uVar3;
  uVar2 = FUN_100db3c8(0);
  *(int *)(param_1 + 0x158) = (int)uVar2;
  FUN_100db49c(uVar2,0x57325348,*(int *)(*(int *)(*(int*)((char*)ppuVar1 - 0x3b7)) + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x158) + (int)*(short *)(**(int **)(param_1 + 0x158) + 0xa8)
               ,param_2);
  return;
}

/* Address: 0x1007f034 Size: 96 bytes */
void FUN_1007f034(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x158);
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x2b8));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  }
  return;
}

/* Address: 0x1007f094 Size: 16 bytes */
void FUN_1007f094(int param_1,short param_2)

{
  *(int *)(param_1 + 0x164) = param_2 + 0x5dd;
  return;
}


























/* Address: 0x1007f0b4 Size: 288 bytes */
void FUN_1007f0b4(long long param_1)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int uVar4;
  int *puVar5;
  int *puVar6;
  int *puVar7;
  int *puVar8;
  int *piVar9;
  int *puVar10;
  int iVar11;
  char auStack_148 [256];
  short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  puVar10 = puRam10117370;
  piVar9 = piRam1011734c;
  puVar8 = puRam1011639c;
  puVar7 = puRam10116208;
  puVar6 = puRam10116200;
  puVar5 = puRam10115fa4;
  FUN_1007b52c(param_1);
  uVar1 = *puVar7;
  uVar2 = *puVar8;
  uVar3 = *puVar6;
  uVar4 = *puVar5;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puVar10;
  *puVar10 = auStack_148;
  iVar11 = FUN_10000090(auStack_148);
  if (iVar11 == 0) {
    *puVar6 = 0;
    *puVar5 = 0;
    *puVar8 = 0;
    *puVar7 = 0;
    FUN_100d68a8(param_1);
    *puVar10 = local_40;
  }
  else {
    *puVar6 = uVar3;
    *puVar5 = uVar4;
    *puVar8 = uVar2;
    *puVar7 = uVar1;
    FUN_100db158(local_48,local_44);
  }
  *(char *)(*piVar9 + 0x9a) = 0;
  return;
}

/* Address: 0x1007f1d4 Size: 96 bytes */
long long FUN_1007f1d4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (((iVar2 = *piRam1011735c + iVar3 * 2, *(short *)(iVar2 + 0xd0) != 0 ||
          (*(short *)(iVar2 + 0x138) == 0)) || (*(int *)(param_1 + iVar3 * 4 + 0x170) != 0))) {
    sVar1 = (short)iVar3 + 1;
    iVar3 = (int)sVar1;
    if (7 < sVar1) {
      return 1;
    }
  }
  return 0;
}

/* Address: 0x1007f234 Size: 788 bytes */
void FUN_1007f234(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *puVar5;
  unsigned long long uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  unsigned long long uVar11;
  unsigned int local_264;
  char auStack_23c [256];
  short local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  char local_124 [292];
  
  puVar5 = puRam10117370;
  piVar4 = piRam1011735c;
  piVar7 = (int *)FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xbcf,
                               param_1);
  FUN_100db26c();
  iVar8 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x63617461);
  FUN_100db26c(iVar8);
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  local_134 = *puVar5;
  *puVar5 = auStack_23c;
  iVar9 = FUN_10000090(auStack_23c);
  uVar6 = (unsigned long long)local_264;
  if (iVar9 == 0) {
    uVar11 = 0;
    do {
      iVar9 = *piVar4 + (int)((uVar11 & 0xffffffff) << 1);
      if ((*(short *)(iVar9 + 0xd0) == 0) && (*(short *)(iVar9 + 0x138) != 0)) {
        iVar1 = (int)((uVar11 & 0x3fffffff) << 2);
        iVar9 = *(int *)(param_1 + iVar1 + 0x170);
        *(int *)(iVar8 + iVar1 + 0x188) = iVar9;
        if (iVar9 != 0) {
          FUN_100733b0(iVar8,uVar11);
        }
      }
      else {
        local_124[0] = 0;
        iVar9 = *piVar4 + (int)((uVar11 & 0xffffffff) << 1);
        if ((*(short *)(iVar9 + 0xc0) == 3) || (*(short *)(iVar9 + 0x138) == 0)) {
          FUN_100b1d90(local_124,(unsigned long long)*(unsigned int *)((int)uVar6 + -0x15a8) + 0x30);
        }
        else {
          FUN_100b1d90(local_124,(unsigned long long)*(unsigned int *)((int)uVar6 + -0x15a8) + 0x40);
        }
        FUN_10090e0c(piVar7,uVar11 + 0x61646431,local_124,0);
      }
      sVar10 = (short)uVar11 + 1;
      uVar11 = (unsigned long long)sVar10;
    } while (sVar10 < 8);
    iVar9 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x646f6e65);
    if (iVar9 != 0) {
      FUN_10098f74(*(int *)(iVar9 + 0xa8));
    }
    iVar9 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x63616e63);
    if (iVar9 != 0) {
      FUN_10098f74(*(int *)(iVar9 + 0xa8));
    }
    iVar9 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x810));
    if (iVar9 == 0x646f6e65) {
      iVar9 = 0;
      do {
        iVar1 = *(int *)(iVar8 + iVar9 * 4 + 0x188);
        iVar3 = param_1 + iVar9 * 4;
        iVar2 = *(int *)(iVar3 + 0x170);
        if (iVar2 != iVar1) {
          FUN_100ef580(iVar2);
          *(int *)(iVar3 + 0x170) = iVar1;
        }
        sVar10 = (short)iVar9 + 1;
        iVar9 = (int)sVar10;
      } while (sVar10 < 8);
    }
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
    *puVar5 = local_134;
  }
  else {
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
    }
    FUN_100db158(local_13c,local_138);
  }
  return;
}

/* Address: 0x1007f548 Size: 268 bytes */
void FUN_1007f548(int param_1,long long param_2,long long param_3,long long param_4,
                 short *param_5,long long param_6,int *param_7)

{
  int *puVar1;
  int bVar2;
  int *piVar3;
  int *ppuVar4;
  int *in_stack_00000040;
  
  piVar3 = piRam1011734c;
  ppuVar4 = 0 /* TVect base */;
  FUN_100dee64(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((int)param_2 != 0x13) {
    if (((*(char *)(param_1 + 0x16e) == '\0') && (*(char *)(*piVar3 + 0x9a) == '\0')) &&
       (*(char *)(*piVar3 + 0x99) == '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    *(int *)(param_1 + 0x16d) = bVar2;
    if (!bVar2) {
      *(char *)(param_1 + 0x16c) = 1;
    }
    *param_5 = 0x5dc;
    *param_7 = (*(int*)((char*)ppuVar4 - 0x566));
    *in_stack_00000040 = param_1;
    return;
  }
  puVar1 = (*(int*)((char*)ppuVar4 - 0x56a));
  FUN_100b1d90(param_3,ZEXT48(puVar1) + 0x50);
  FUN_100b1d90(param_4,ZEXT48(puVar1) + 100);
  return;
}

/* Address: 0x1007f654 Size: 1460 bytes */
void FUN_1007f654(int *param_1,long long param_2,int param_3)

{
  int uVar1;
  int *ppuVar2;
  long long uVar3;
  int *puVar4;
  int iVar5;
  
  uVar1 = uRam101167c4;
  ppuVar2 = 0 /* TVect base */;
  iVar5 = *(int *)(param_3 + 0x18);
  if (iVar5 == 0x63686532) goto LAB_1007fb30;
  if (iVar5 < 0x63686533) {
    if (iVar5 != 0x61726d36) {
      if (0x61726d36 < iVar5) {
        if (iVar5 == 0x62757433) {
LAB_1007fa54:
          uVar3 = FUN_10075d94(*piRam1011734c,
                               *(short *)
                                (*piRam1011734c +
                                 (short)((short)*(int *)(param_3 + 0x18) + -0x7431) * 2 +
                                0x8c));
          FUN_1007c714(param_1,uVar3);
          return;
        }
        if (iVar5 < 0x62757434) {
          if (iVar5 == 0x62757431) goto LAB_1007fa54;
          if (iVar5 < 0x62757432) {
            if (iVar5 == 0x61726d37) goto LAB_1007faa4;
          }
          else if (iVar5 == 0x62757432) goto LAB_1007fa54;
        }
        else {
          if (iVar5 == 0x63686530) goto LAB_1007fb30;
          if (iVar5 < 0x63686531) {
            if (iVar5 == 0x62757434) goto LAB_1007fa54;
          }
          else if (iVar5 == 0x63686531) goto LAB_1007fb30;
        }
        goto LAB_1007fbe4;
      }
      if (iVar5 != 0x61726d32) {
        if (iVar5 < 0x61726d33) {
          if ((iVar5 != 0x61726d30) && (iVar5 != 0x61726d31)) goto LAB_1007fbe4;
        }
        else if (iVar5 != 0x61726d34) {
          if (iVar5 < 0x61726d35) {
            if (iVar5 != 0x61726d33) goto LAB_1007fbe4;
          }
          else if (iVar5 != 0x61726d35) goto LAB_1007fbe4;
        }
      }
    }
LAB_1007faa4:
    puVar4 = (int *)FUN_100f56e4(0xb4);
    if (puVar4 != (int *)0x0) {
      FUN_100c3d2c(puVar4);
      *puVar4 = uVar1;
      *(short *)(puVar4 + 0x2c) = 0;
    }
    uVar1 = *(int *)(param_3 + 0x18);
    FUN_100c3df8(puVar4,0x836,param_1,1,1,param_1);
    *(short *)(puVar4 + 0x2c) = (short)uVar1 + -0x6d30;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar4);
    return;
  }
  if (iVar5 == 0x6469706c) {
    FUN_10026df4();
    return;
  }
  if (iVar5 < 0x6469706d) {
    if (iVar5 != 0x63686536) {
      if (0x63686536 < iVar5) {
        if (iVar5 == 0x64656c65) {
          puVar4 = (int *)FUN_100f56e4(0x108);
          if (puVar4 != (int *)0x0) {
            FUN_100c3d2c(puVar4);
            *puVar4 = (*(int*)((char*)ppuVar2 - 0x43a));
            *(short *)(puVar4 + 0xc) = 0xffff;
            *(short *)((int)puVar4 + 0x32) = 0xffff;
            *(short *)(puVar4 + 0x41) = 0;
          }
          FUN_100c3df8(puVar4,0x57c,param_1,1,1,param_1);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar4);
          return;
        }
        if (iVar5 < 0x64656c66) {
          if (iVar5 == 0x63686537) goto LAB_1007fb30;
        }
        else if (iVar5 == 0x64657365) goto LAB_1007f8cc;
        goto LAB_1007fbe4;
      }
      if (iVar5 != 0x63686534) {
        if (iVar5 < 0x63686535) {
          if (iVar5 == 0x63686533) goto LAB_1007fb30;
        }
        else if (iVar5 == 0x63686535) goto LAB_1007fb30;
        goto LAB_1007fbe4;
      }
    }
LAB_1007fb30:
    FUN_1005cffc((short)*(int *)(param_3 + 0x18) + -0x6530);
    return;
  }
  if (iVar5 != 0x6c656176) {
    if (iVar5 < 0x6c656177) {
      if (iVar5 == 0x67756172) goto LAB_1007f8cc;
      if (iVar5 < 0x67756173) {
        if (iVar5 == 0x67726f75) {
          puVar4 = (int *)FUN_100f56e4(0xb4);
          if (puVar4 != (int *)0x0) {
            FUN_100c3d2c(puVar4);
            *puVar4 = uVar1;
            *(short *)(puVar4 + 0x2c) = 0;
          }
          iVar5 = FUN_1005cd18();
          if (iVar5 == 0) {
            uVar3 = 0x578;
          }
          else {
            uVar3 = 0x579;
          }
          FUN_100c3df8(puVar4,uVar3,param_1,1,1,param_1);
          *(short *)(puVar4 + 0x2c) = 0;
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar4);
          return;
        }
      }
      else if (iVar5 == 0x68656c70) {
        FUN_100402e0();
        return;
      }
    }
    else {
      if (iVar5 == 0x6e657874) goto LAB_1007f8cc;
      if (iVar5 < 0x6e657875) {
        if (iVar5 == 0x6d6f7665) {
          FUN_1007c618(param_1,*(short *)(*piRam101176e0 + 0x12),
                       *(short *)(*piRam101176e0 + 0x14));
          return;
        }
      }
      else if (iVar5 == 0x70617468) {
        FUN_1003fe94();
        return;
      }
    }
LAB_1007fbe4:
    FUN_100dafe8(param_1,param_2,param_3);
    return;
  }
LAB_1007f8cc:
  iVar5 = *(int *)(param_3 + 0x18);
  if (iVar5 == 0x64657365) {
    param_3 = 0x580;
  }
  else if (iVar5 == 0x67756172) {
    param_3 = 0x57f;
  }
  else if (iVar5 == 0x6c656176) {
    param_3 = 0x57e;
  }
  else if (iVar5 == 0x6e657874) {
    param_3 = 0x57d;
  }
  puVar4 = (int *)FUN_100f56e4(0x1e0);
  if (puVar4 != (int *)0x0) {
    FUN_100c3d2c(puVar4);
    *puVar4 = (*(int*)((char*)ppuVar2 - 0x43c));
    puVar4[0xc] = 0;
    *(short *)(puVar4 + 0x41) = 0;
    *(short *)(puVar4 + 0x76) = 0;
    *(short *)((int)puVar4 + 0x1da) = 0xffff;
    *(short *)(puVar4 + 0x77) = 0xffff;
  }
  FUN_100c3df8(puVar4,param_3,param_1,1,1,param_1);
  puVar4[0xc] = param_1;
  *(short *)((int)puVar4 + 0x1da) = 0xffff;
  *(short *)(puVar4 + 0x77) = 0xffff;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar4);
  return;
}

/* Address: 0x1007fc08 Size: 356 bytes */
void FUN_1007fc08(int *param_1,char param_2)

{
  int *piVar2;
  long long uVar1;
  char auStack_1e0 [256];
  int local_e0;
  int uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  unsigned int uStack_9c;
  char auStack_98 [12];
  int local_8c;
  int local_86;
  short local_82;
  short local_7c;
  short local_54;
  
  FUN_100de9ac(param_1,param_2);
  piVar2 = (int *)FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x128));
  FUN_100db26c();
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x178),&local_e0);
  local_8c = 0;
  local_86 = 0;
  local_82 = ((short)((unsigned int)local_e0 >> 16));
  local_7c = 0;
  FUN_10000828(auStack_98);
  if (local_54 == 0) {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x348) + (int)param_1,0x14);
    FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x130),uVar1);
    FUN_100012d8((int)&uStack_dc + 2,auStack_1e0,(unsigned long long)((char)((unsigned int)uStack_dc >> 8)) + 1);
    FUN_10117884((int)*(short *)(*param_1 + 0x318) + (int)param_1,auStack_1e0);
    param_1[100] = local_e0;
    param_1[0x65] = uStack_dc;
    param_1[0x66] = iStack_d8;
    param_1[0x67] = iStack_d4;
    param_1[0x68] = iStack_d0;
    param_1[0x69] = iStack_cc;
    param_1[0x6a] = local_c8;
    param_1[0x6b] = iStack_c4;
    param_1[0x6c] = iStack_c0;
    param_1[0x6d] = iStack_bc;
    param_1[0x6e] = iStack_b8;
    param_1[0x6f] = iStack_b4;
    param_1[0x70] = local_b0;
    param_1[0x71] = iStack_ac;
    param_1[0x72] = iStack_a8;
    param_1[0x73] = iStack_a4;
    param_1[0x74] = iStack_a0;
    param_1[0x75] = uStack_9c & 0xffff0000;
  }
  return;
}

/* Address: 0x1007fd6c Size: 448 bytes */
void FUN_1007fd6c(int param_1,short param_2,short param_3,long long param_4)

{
  int *puVar1;
  int iVar3;
  long long uVar2;
  long long lVar4;
  int local_2f4;
  char auStack_2d0 [72];
  char auStack_288 [64];
  char auStack_248 [200];
  int local_180;
  int local_17c;
  char auStack_178 [256];
  short local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  short local_60;
  char *local_5e;
  int local_5a;
  int local_56;
  int local_52;
  int local_4e;
  short local_4a;
  int local_48;
  char *local_44;
  char local_40;
  int local_3e;
  int local_3a;
  int local_36;
  char local_32;
  
  puVar1 = puRam10117370;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_68 = 0;
  local_70 = *puRam10117370;
  *puRam10117370 = auStack_178;
  iVar3 = FUN_10000090(auStack_178);
  if (iVar3 == 0) {
    FUN_100b1fec(auStack_288,(unsigned long long)*(unsigned int *)(local_2f4 + -0x15a8) + 0x74);
    uVar2 = FUN_100b1b08(auStack_288);
    FUN_10001320(uVar2,0,auStack_2d0,0x40);
    FUN_10073874(**(int **)(local_2f4 + -0x16d0),&local_17c);
    local_180 = 0;
    FUN_10002988(*(int *)(param_1 + param_2 * 4 + 0x170),&local_180,local_17c);
    FUN_100db2f4();
    if (param_3 == 8) {
      lVar4 = (unsigned long long)*(unsigned int *)(local_2f4 + -0x15a8) + 0x8c;
    }
    else {
      lVar4 = (unsigned long long)**(unsigned int **)(local_2f4 + -0x544) +
              (((long long)param_3 & 0x3fffffffU) * 4 + (long long)param_3 & 0x3fffffff) * 4;
    }
    FUN_10001dd0(auStack_248,(unsigned long long)*(unsigned int *)(local_2f4 + -0x15a8) + 0x98,lVar4,param_4);
    local_60 = 0;
    local_5a = local_17c;
    local_56 = local_180;
    local_52 = 0;
    local_4e = 0;
    local_4a = 0;
    local_5e = auStack_2d0;
    local_48 = FUN_100012c0(auStack_248);
    local_40 = 1;
    local_3e = 0;
    local_3a = 0;
    local_36 = 0;
    local_32 = 1;
    local_44 = auStack_248;
    FUN_10000f90(&local_60);
    FUN_100db2f4();
    *puVar1 = local_70;
  }
  return;
}

/* Address: 0x1007ff2c Size: 260 bytes */
void FUN_1007ff2c(int *param_1,short param_2)

{
  int *ppuVar1;
  long long uVar2;
  int iVar3;
  int *puVar4;
  
  ppuVar1 = 0 /* TVect base */;
  iVar3 = param_1[0x76];
  if (iVar3 != 0) {
    ppuVar1 = 0 /* TVect base */;
    uVar2 = FUN_100a0920();
    iVar3 = FUN_100f5278(iVar3,uVar2);
    if ((iVar3 != 0) && (*(char *)(param_1[0x76] + 0x10c) == '\0')) {
      FUN_100a0b08(param_1[0x76],param_2);
      return;
    }
  }
  puVar4 = (int *)FUN_100f56e4(0x118);
  if (puVar4 != (int *)0x0) {
    FUN_100c3d2c(puVar4);
    puVar4[0xc] = 0;
    *(short *)(puVar4 + 0xd) = 0;
    *(short *)((int)puVar4 + 0x36) = 0;
    *(short *)(puVar4 + 0x42) = 0;
    *puVar4 = (*(int*)((char*)ppuVar1 - 0x565));
    *(char *)(puVar4 + 0x43) = 0;
    *(short *)((int)puVar4 + 0x10e) = 0;
  }
  FUN_100a09a8(puVar4,param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar4);
  param_1[0x76] = (int)puVar4;
  return;
}
















































































































































































