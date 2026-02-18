/*
 * recovered_stubs.c - Recovered stub implementations
 * Auto-recovered from Ghidra decompilation.
 */

#include "warlords2.h"

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

/* Extern declarations */
extern long iRam10115e30;
extern long iRam10115ebc;
extern long iRam10115ec0;
extern long iRam10115ec4;
extern long iRam10115ee4;
extern long iRam10116004;
extern long iRam101173cc;
extern long iRam101173d0;
extern long iRam101173d4;
extern long iRam1011746c;
extern long iRam101175ec;
extern long iRam10117684;
extern long iRam10117738;
extern long iRam1011788c;
extern char *pcRam10117378;
extern char *pcRam1011785c;
extern int *piRam10115d88;
extern int *piRam10115dc4;
extern int *piRam10115df0;
extern int *piRam10115f0c;
extern int *piRam10115f64;
extern int *piRam10115f7c;
extern int *piRam10115fa4;
extern int *piRam10115fe8;
extern int *piRam10116200;
extern int *piRam10116204;
extern int *piRam1011639c;
extern int *piRam101163ac;
extern int *piRam101163b0;
extern int *piRam101165e8;
extern int *piRam101165ec;
extern int *piRam101165f0;
extern int *piRam101165f4;
extern int *piRam101165f8;
extern int *piRam10116a48;
extern int *piRam10117114;
extern int *piRam101173e0;
extern int *piRam10117468;
extern int *piRam101174a8;
extern int *piRam10117588;
extern int *piRam1011758c;
extern int *piRam10117590;
extern int *piRam10117594;
extern int *piRam101175a0;
extern int *piRam101175d0;
extern int *piRam101175f0;
extern int *piRam101175f4;
extern int *piRam101176b8;
extern int *piRam10117804;
extern short *psRam10115d18;
extern short *psRam10115dec;
extern short *psRam10115df4;
extern short *psRam10115ea4;
extern short *psRam10115eb4;
extern short *psRam10115ee8;
extern short *psRam10115f68;
extern short *psRam101165d8;
extern short *psRam101165dc;
extern short *psRam10116600;
extern short *psRam10117424;
extern short *psRam10117428;
extern short *psRam101175a4;
extern short *psRam101175a8;
extern short *psRam101175ac;
extern unsigned int *puRam1011529c;
extern unsigned int *puRam101152c4;
extern unsigned int *puRam101152c8;
extern unsigned int *puRam101152cc;
extern unsigned int *puRam101152d4;
extern unsigned int *puRam101152d8;
extern unsigned int *puRam101152dc;
extern unsigned int *puRam10115308;
extern unsigned int *puRam10115314;
extern unsigned int *puRam10115330;
extern unsigned int *puRam10115378;
extern unsigned int *puRam10115380;
extern unsigned int *puRam10115390;
extern unsigned int *puRam101153e8;
extern unsigned int *puRam1011540c;
extern unsigned int *puRam10115480;
extern unsigned int *puRam101154a0;
extern unsigned int *puRam10115504;
extern unsigned int *puRam1011553c;
extern unsigned int *puRam10115540;
extern unsigned int *puRam10115544;
extern unsigned int *puRam1011556c;
extern unsigned int *puRam10115574;
extern unsigned int *puRam10115584;
extern unsigned int *puRam1011561c;
extern unsigned int *puRam10115630;
extern unsigned int *puRam1011563c;
extern unsigned int *puRam10115640;
extern unsigned int *puRam10115658;
extern unsigned int *puRam1011565c;
extern unsigned int *puRam10115688;
extern unsigned int *puRam101156b8;
extern unsigned int *puRam101156c0;
extern unsigned int *puRam101156c4;
extern unsigned int *puRam101156d0;
extern unsigned int *puRam101156fc;
extern unsigned int *puRam10115708;
extern unsigned int *puRam10115754;
extern unsigned int *puRam10115758;
extern unsigned int *puRam10115768;
extern unsigned int *puRam10115800;
extern unsigned int *puRam10115808;
extern unsigned int *puRam10115814;
extern unsigned int *puRam1011581c;
extern unsigned int *puRam1011583c;
extern unsigned int *puRam10115844;
extern unsigned int *puRam1011584c;
extern unsigned int *puRam10115858;
extern unsigned int *puRam1011585c;
extern unsigned int *puRam10115874;
extern unsigned int *puRam101158d0;
extern unsigned int *puRam101158d4;
extern unsigned int *puRam101158d8;
extern unsigned int *puRam101158dc;
extern unsigned int *puRam101158e0;
extern unsigned int *puRam101158ec;
extern unsigned int *puRam10115998;
extern unsigned int *puRam101159a0;
extern unsigned int *puRam10115a10;
extern unsigned int *puRam10115a30;
extern unsigned int *puRam10115ad8;
extern unsigned int *puRam10115af0;
extern unsigned int *puRam10115af4;
extern unsigned int *puRam10115b04;
extern unsigned int *puRam10115b10;
extern unsigned int *puRam10115b24;
extern unsigned int *puRam10115b2c;
extern unsigned int *puRam10115b4c;
extern unsigned int *puRam10115b70;
extern unsigned int *puRam10115b74;
extern unsigned int *puRam10115b78;
extern unsigned int *puRam10115d80;
extern unsigned int *puRam10115f04;
extern unsigned int *puRam10115f40;
extern unsigned int *puRam10115f7c;
extern unsigned int *puRam10115fa8;
extern unsigned int *puRam10116208;
extern unsigned int *puRam101163ac;
extern unsigned int *puRam101165f0;
extern unsigned int *puRam101165f4;
extern unsigned int *puRam101165f8;
extern unsigned int *puRam10116910;
extern unsigned int *puRam10116914;
extern unsigned int *puRam101169c4;
extern unsigned int *puRam10116a40;
extern unsigned int *puRam10116bc0;
extern unsigned int *puRam10117098;
extern unsigned int *puRam10117170;
extern unsigned int *puRam1011735c;
extern unsigned int *puRam10117370;
extern unsigned int *puRam10117424;
extern unsigned int *puRam10117428;
extern unsigned int *puRam10117468;
extern unsigned int *puRam10117598;
extern unsigned int *puRam1011759c;
extern unsigned int *puRam101175ac;
extern unsigned int *puRam101175b4;
extern unsigned int *puRam101175f4;
extern unsigned int *puRam1011760c;
extern unsigned int *puRam10117710;
extern unsigned int *puRam10117738;
extern unsigned int *puRam10117850;
extern unsigned int *puRam10117854;
extern unsigned int *puRam10117858;
extern unsigned int uRam10115ed8;
extern unsigned int uRam10116070;
extern unsigned int uRam101169c8;
extern unsigned int uRam10116a54;
extern unsigned int uRam10116bbc;
extern unsigned int uRam10116c54;
extern unsigned int uRam10116c60;
extern unsigned int uRam10116c7c;
extern unsigned int uRam10116f40;
extern unsigned int uRam10116ff0;
extern unsigned int uRam10117018;
extern unsigned int uRam101172f8;
extern unsigned int uRam101173c8;
extern unsigned int uRam101173d8;
extern unsigned int uRam101175d4;
extern unsigned int uRam101176cc;
extern unsigned int uRam1011772c;
extern unsigned int uRam101177f0;
extern short *psRam10115e2c;
extern unsigned int uRam101174f0;
extern unsigned int uRam101174d0;

/* Forward declarations */
void FUN_10000048();
void FUN_100002a0();
void FUN_10000300();
void FUN_10000318();
void FUN_10000390();
void FUN_100004e0();
void FUN_100006d8();
void FUN_100006f0();
void FUN_100008d0();
void FUN_10000900();
void FUN_100012f0();
void FUN_100013b0();
void FUN_100013c8();
void FUN_100013e0();
void FUN_100013f8();
void FUN_10001410();
void FUN_10001428();
void FUN_10001440();
void FUN_10001458();
void FUN_10001470();
void FUN_10001488();
void FUN_100014b8();
void FUN_100014d0();
void FUN_10001590();
void FUN_100015a8();
void FUN_10001638();
void FUN_10001680();
void FUN_100016b0();
void FUN_10001758();
void FUN_100018f0();
void FUN_10001908();
void FUN_10001920();
void FUN_100019f8();
void FUN_10001bd8();
void FUN_10001dd0();
void FUN_10001e78();
void FUN_10001f50();
void FUN_10001f98();
void FUN_100020d0();
void FUN_10002100();
void FUN_10002148();
void FUN_10002178();
void FUN_10002238();
void FUN_10002340();
void FUN_10002568();
void FUN_100026b8();
void FUN_10002970();
void FUN_10002a60();
void FUN_10002ce8();
void FUN_10002d00();
void FUN_10003228();
void FUN_100032e8();
void FUN_100035a0();
void FUN_100035b8();
void FUN_10003660();
void FUN_10003678();
void FUN_10005b68();
void FUN_10007c50();
void FUN_100099cc();
int FUN_10009a98();
void FUN_10009b00();
void FUN_10009fa8(long long param_1,short param_2,short param_3,short param_4);
void FUN_1000a008(int param_1,short param_2);
void FUN_1000a714(int param_1,short param_2,short param_3,short param_4,short param_5);
void FUN_1000a7cc(int param_1,short param_2,short param_3,short param_4,short param_5);
void FUN_1000c67c();
int FUN_1000d910(short param_1);
long long FUN_1000f6a0(short param_1);
long long FUN_1000f708(short param_1,short param_2);
short FUN_10015980(short param_1);
long long FUN_100184dc(short param_1,short param_2,short param_3,short param_4);
void FUN_1001aea0();
void FUN_1001e330(long long param_1);
void FUN_1001e3ec(long long param_1);
void FUN_1001f5e8(short param_1,short param_2);
long long FUN_1001f648(short param_1,short *param_2);
long long FUN_10020f94(short param_1);
void FUN_10021200(int param_1,char param_2);
void FUN_1002269c(short *param_1,short param_2,short param_3);
void FUN_10025598();
void FUN_1002565c();
void FUN_10025f94();
void FUN_10026310();
void FUN_10026568();
void FUN_10029dcc(int *param_1,long long param_2);
void FUN_10030454(long long param_1);
void FUN_10031f54(long long param_1);
void FUN_10031fc4();
void FUN_10032860(short param_1,short param_2,long long param_3,short param_4);
void FUN_10037fc4();
long long FUN_1003865c(int param_1,short *param_2);
void FUN_10038c60(short param_1,char param_2,short param_3,short param_4,
                 long long param_5);
void FUN_1003a230(int *param_1);
void FUN_1003a5f8();
void FUN_1003aeb0(unsigned short param_1);
void FUN_1003c938(long long param_1);
void FUN_1003cac4(long long param_1,short param_2);
void FUN_1003ced4(long long param_1,long long param_2);
void FUN_1003d5d4();
void FUN_1003d6c4();
void FUN_1003e13c(long long param_1,short param_2);
void FUN_1003f674(short param_1,short param_2,short param_3);
void FUN_1004039c(short param_1);
void FUN_10040408(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,long long param_6,long long param_7);
void FUN_100423a0(short param_1);
void FUN_1004248c();
void FUN_100424e4();
int FUN_100425c0(short param_1,short param_2,short param_3);
long long FUN_100426b4(short *param_1,short param_2);
long long FUN_100427cc(long long param_1,short param_2);
short FUN_10043248(short *param_1,short param_2);
void FUN_100439a4(short *param_1);
void FUN_10043c84(short param_1,short *param_2,short param_3);
long long FUN_10043e60(short *param_1);
unsigned char FUN_100445fc(int param_1,short param_2,short param_3,short param_4,short *param_5);
short FUN_10044728(short *param_1,short param_2,int param_3);
void FUN_10045170();
void FUN_100451f4(short param_1);
void FUN_1004530c(short param_1);
void FUN_100462c8(short param_1);
void FUN_10049e68();
int FUN_1004a0c4(short param_1,short *param_2,short *param_3,short *param_4,
                short *param_5,short *param_6);
void FUN_1004a178(short param_1,short *param_2,short *param_3,short *param_4,
                 short *param_5);
int FUN_1004a21c(short param_1);
void FUN_1004f620(short param_1,short param_2);
void FUN_10050bb0(int param_1);
void FUN_100513b4(long long param_1,long long param_2,short param_3);
void FUN_100514d8(int *param_1,short param_2);
void FUN_100516c0();
void FUN_10051d60();
void FUN_10051d64();
void FUN_10051dc8(short *param_1,short *param_2);
void FUN_10051e1c(short *param_1,short *param_2,short param_3,short param_4);
long long FUN_10052184(long long param_1,short param_2,unsigned short param_3);
int * FUN_100522dc(int *param_1,unsigned short param_2,char param_3);
void FUN_100524d4(int *param_1);
void FUN_10052518(int *param_1,long long param_2,short param_3);
short FUN_100525a0(unsigned short param_1);
long long FUN_100525cc(int param_1);
void FUN_10052f6c(long long param_1);
void FUN_100534c8(short param_1);
void FUN_1005668c(int *param_1,int param_2);
void FUN_10058c64(int *param_1,int param_2);
void FUN_1005cc8c();
void FUN_1005f144(short param_1);
void FUN_1005f1a0(short param_1,short param_2,long long param_3);
void FUN_1005f1d0(short param_1,short param_2,long long param_3);
void FUN_1005f200(short param_1,short param_2,long long param_3);
void FUN_1005f678(short param_1,short param_2);
void FUN_1005f6b0(short param_1,short param_2);
void FUN_10061980(short param_1,short param_2,short param_3);
void FUN_10064498(short param_1,short param_2,short param_3);
unsigned long long FUN_10066bf4(unsigned long long param_1);
void FUN_10066c80(unsigned long long param_1,unsigned long long param_2);
void FUN_10067270();
void FUN_10075ee0(int param_1,short param_2,short param_3);
void FUN_1007ec7c(int param_1,long long param_2);
void FUN_1007ed14(int param_1,long long param_2);
void FUN_1007edac(int param_1,long long param_2);
void FUN_1007f0a4(int param_1,short param_2);
void FUN_10082260(int *param_1);
void FUN_10082f24(int *param_1,short param_2,short param_3);
int * FUN_10084ef0(int *param_1);
void FUN_10090e0c(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_10091334();
void FUN_10091338(short param_1,short param_2);
void FUN_100913cc();
void FUN_1009142c();
int * FUN_10091488(int *param_1);
void FUN_1009150c(int *param_1,unsigned long long param_2);
void FUN_100917d8(int *param_1,short param_2,char param_3);
void FUN_1009191c(int param_1,short param_2);
short FUN_100919c0(int param_1);
void FUN_10091b18();
char FUN_10091b80();
void FUN_10091c04(short param_1);
void FUN_10091ca4(short param_1,short param_2);
short FUN_10091de0(long long param_1);
unsigned long long FUN_10091ef0();
void FUN_10091f40();
void FUN_10091fd4();
void FUN_10092080(long long param_1,long long param_2);
void FUN_100923a4(long long param_1,char param_2);
void FUN_100929a0();
void FUN_10092a58(short param_1);
void FUN_10092aa4();
void FUN_10092ae0();
void FUN_10092b10(short param_1);
void FUN_10092be0();
void FUN_10093928();
void FUN_10093984();
void FUN_100939e0();
void FUN_10093a5c();
int FUN_100981f8(int param_1,short param_2);
void FUN_100982e8(int param_1,unsigned long long param_2);
int FUN_10098320(int param_1,long long param_2,short param_3);
short FUN_1009eb70(int param_1,int param_2);
void FUN_1009eef8(short param_1);
void FUN_1009f864();
long long FUN_1009fad4(short param_1,short param_2);
void FUN_1009fc58();
long long FUN_1009ff14(short param_1,short param_2);
long long FUN_1009ffa4(short param_1,short param_2,short param_3);
void FUN_100a0038();
void FUN_100a018c(short param_1);
void FUN_100a01e8();
void FUN_100a1d8c();
short FUN_100a1e28();
void FUN_100a1e50();
void FUN_100a2310();
void FUN_100a271c();
void FUN_100a2760();
void FUN_100a28dc();
void FUN_100a2a58();
void FUN_100a3280(int param_1,int param_2);
void FUN_100a32b8(int param_1,int param_2);
void FUN_100a33ac();
void FUN_100a35cc();
void FUN_100a39ac();
void FUN_100a3a80();
void FUN_100a49cc();
void FUN_100a6204();
void FUN_100a6364(short param_1,short param_2);
void FUN_100a64c0();
void FUN_100a66a8();
void FUN_100a6f38();
void FUN_100a9628();
void FUN_100a9c08();
void FUN_100ab22c();
void FUN_100ab334();
void FUN_100ab9e4();
void FUN_100abb68();
void FUN_100abcec();
void FUN_100afb5c(int param_1,unsigned long long param_2,unsigned long long param_3);
unsigned long long FUN_100b02d0(unsigned long long param_1);
void FUN_100b0578();
long long FUN_100b057c(long long param_1,char param_2);
void FUN_100b06d4(short *param_1,short *param_2);
void FUN_100b08d4(int *param_1,short *param_2);
char * FUN_100b0960(int param_1,long long param_2);
void FUN_100b0a18(int param_1,char *param_2);
int FUN_100b1058(int param_1,long long param_2,long long param_3,short param_4);
int FUN_100b1134(int param_1,int param_2,long long param_3,long long param_4,
                short param_5);
void FUN_100b1210();
unsigned int FUN_100b1b90(unsigned char *param_1,long long param_2,unsigned int param_3);
void FUN_100b1c84();
void FUN_100b1c88(long long param_1,short param_2,short param_3);
char * FUN_100b1d90(char *param_1,long long param_2);
void FUN_100b1ed0(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3);
long long FUN_100b226c(short *param_1,short *param_2);
void FUN_100b2e74();
void FUN_100b4c68();
int * FUN_100beb7c(int *param_1);
void FUN_100becb8();
void FUN_100c0f10();
int FUN_100c2120(long long param_1);
int FUN_100c43ec();
int * FUN_100c43fc(int *param_1);
int * FUN_100c604c(int *param_1);
int * FUN_100c7d84(int *param_1);
int FUN_100c9950();
int * FUN_100c9960(int *param_1);
int FUN_100ca068();
int * FUN_100ca078(int *param_1);
int * FUN_100d7adc(int *param_1);
void FUN_100d7ba0(int *param_1,long long param_2,short param_3);
void FUN_100da260(int *param_1,long long param_2);
void FUN_100db1ec();
void FUN_100e1674(int *param_1,int *param_2);
int FUN_100e8cdc();
int * FUN_100e8cec(int *param_1);
int * FUN_100e90bc(int *param_1);
int FUN_100e9e78();
void FUN_100ebbe0(int param_1);
void FUN_100ec5c8(int param_1,long long param_2);
void FUN_100ecf88(short *param_1);
unsigned long long FUN_100ef2f8();
void FUN_100f06dc(short param_1,short *param_2);
void FUN_100f0d3c(int param_1,char param_2);
int FUN_100f1264();
long long FUN_100f2214(short param_1);
void FUN_100f25e0(long long param_1,long long param_2,long long param_3);
void FUN_100f2a54();
void FUN_100f56c0();
void FUN_100f5814();
int * FUN_100fb260(int *param_1);
void FUN_100fb300(int *param_1,long long param_2,short param_3);
int FUN_1010597c();
int FUN_1010d6a8();
int * FUN_1010d6b8(int *param_1);
int FUN_1010f044();
int * FUN_1010f054(int *param_1);
long long FUN_10115d3c(int param_1);
unsigned long long FUN_10115e4c(int param_1,unsigned int param_2);
unsigned long long FUN_10116338(unsigned long long param_1);
long long FUN_10116e14(short *param_1);
int * FUN_10117024(int *param_1,int *param_2);
int * FUN_101171bc(int *param_1,int *param_2);
void FUN_10004c54();
void FUN_10005f90();
void FUN_100090f0();
unsigned long long FUN_1000cf78(short param_1);
long long FUN_1000d0c0(short param_1,short param_2);
void FUN_1000f7bc(short param_1);
void FUN_1000fac4();
void FUN_1000fba8(short param_1,short param_2);
void FUN_1000fccc(short param_1);
long long FUN_1000fe90(short param_1);
long long FUN_1000ffe0(short param_1,short param_2,int param_3,int param_4);
void FUN_1001072c(short param_1,int param_2);
long long FUN_10010b30(short param_1,short param_2);
long long FUN_100121f8(short param_1);
long long FUN_10012324(short param_1,short param_2);
long long FUN_1001241c();
void FUN_100126a4();
long long FUN_10012a8c(long long param_1,short param_2);
long long FUN_10013a10(short param_1,short param_2);
int FUN_100143b8(short param_1);
long long FUN_10015c48(short param_1);
long long FUN_10016344(short param_1,int param_2);
void FUN_10016cc4(int param_1,int param_2,int param_3,short param_4);
long long FUN_10018574(short param_1,int param_2,int param_3);
void FUN_1001a12c(short param_1,short param_2);
short FUN_1001a864(short param_1,long long param_2);
void FUN_1001ab94();
short FUN_1001b584(long long param_1,short *param_2,unsigned short param_3,short param_4,int *param_5);
void FUN_1001b8e0(short param_1);
long long FUN_1001c2dc(short param_1,short *param_2,short param_3);
long long FUN_1001c6fc(short param_1,long long param_2,short param_3,short param_4);
long long FUN_1001cd68(short param_1);
void FUN_1001d15c();
void FUN_1001e014(short *param_1,short param_2,short param_3);
long long FUN_1001e160(int param_1,short param_2,short param_3,unsigned short param_4);
long long FUN_1001e4b0(short param_1);
void FUN_1001e564(short param_1,short param_2);
long long FUN_1001f174(short param_1,short param_2);
void FUN_1001f758();
void FUN_1001f894(short param_1);
void FUN_1001f958();
int FUN_1002122c(short param_1,short param_2,short *param_3);
void FUN_1002279c();
void FUN_10025f2c();
void FUN_100275ec();
char FUN_100276ec();
char FUN_1002772c();
long long FUN_1002869c();
long long FUN_10028b30(int *param_1,short param_2,short param_3);
short FUN_10028e10(long long param_1,short param_2,short param_3);
void FUN_1002b230(short param_1);
void FUN_1002bbd4();
void FUN_1002bdc4();
int FUN_1002bef8(short param_1,short param_2);
unsigned long long FUN_1002bf64(short param_1,short param_2,short param_3,short param_4);
int FUN_1002c200(short param_1,short param_2,short param_3);
void FUN_1002cbbc();
void FUN_1002ce38();
void FUN_1003357c(int param_1,short param_2);
void FUN_10035d7c();
void FUN_10038860();
void FUN_10038890();
void FUN_1003956c();
short FUN_10039c58(short param_1);
void FUN_10039ec8(short param_1);
void FUN_1003c068();
void FUN_1003cb84();
void FUN_1003d094();
void FUN_1003d734(int *param_1);
int FUN_10042a24(short param_1,short param_2);
void FUN_10042bb4(short param_1,short param_2);
void FUN_10044110(short param_1,short param_2);
void FUN_100445a8(short *param_1,int param_2);
void FUN_10045ac8();
void FUN_100472f4(long long param_1,long long param_2,long long param_3,short param_4);
void FUN_10047de8(short param_1,int param_2,short *param_3);
long long FUN_1004e384(short param_1,long long param_2,short param_3);
void FUN_1004f664();
void FUN_10050ffc(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,int param_6,int param_7);
void FUN_100517f8(short param_1,short param_2,short param_3,short param_4);
int FUN_1005310c(int param_1);
short * FUN_10053838(short param_1,short param_2,short param_3);
void FUN_100539e8(int param_1,short param_2,short param_3);
void FUN_10054824();
void FUN_10057334();
long long FUN_10057448(short param_1);
void FUN_1005bbe8();
void FUN_10060078(int *param_1,short param_2);
void FUN_100632a0(short param_1,short param_2,short param_3);
void FUN_1007d168(int *param_1,long long param_2);
void FUN_1007ded4(int param_1,int *param_2,char param_3);
void FUN_1007e314(int param_1);
void FUN_1007e894(int param_1,int *param_2,char param_3);
void FUN_100a6708();
int FUN_100a9d34(int param_1,short param_2);
void FUN_100a9f78(int param_1);
void FUN_100eb91c(int param_1,int *param_2,long long param_3,long long param_4,char param_5);
void FUN_10114e58();
char FUN_1002770c();
void FUN_1003c368();
void FUN_1003c838();
void FUN_10064850(short param_1,short param_2);

/* Address: 0x10000048 Size: 24 bytes */
void FUN_10000048()

{

  ((void (*)())*puRam10115544)();
  return;
}

/* FUN_10000270 defined elsewhere */


/* FUN_10000288 defined elsewhere */


/* Address: 0x100002a0 Size: 24 bytes */
void FUN_100002a0()

{

  ((void (*)())*puRam10115874)();
  return;
}

/* Address: 0x10000300 Size: 24 bytes */
void FUN_10000300()

{

  ((void (*)())*puRam101153e8)();
  return;
}

/* Address: 0x10000318 Size: 24 bytes */
void FUN_10000318()

{

  ((void (*)())*puRam1011581c)();
  return;
}

/* Address: 0x10000390 Size: 24 bytes */
void FUN_10000390()

{

  ((void (*)())*puRam10115378)();
  return;
}

/* Address: 0x100004e0 Size: 24 bytes */
void FUN_100004e0()

{

  ((void (*)())*puRam1011556c)();
  return;
}

/* Address: 0x100006d8 Size: 24 bytes */
void FUN_100006d8()

{

  ((void (*)())*puRam10115380)();
  return;
}

/* Address: 0x100006f0 Size: 24 bytes */
void FUN_100006f0()

{

  ((void (*)())*puRam10115800)();
  return;
}

/* FUN_10000708 defined elsewhere */


/* FUN_10000870 defined elsewhere */


/* FUN_10000888 defined elsewhere */


/* Address: 0x100008d0 Size: 24 bytes */
void FUN_100008d0()

{

  ((void (*)())*puRam10115754)();
  return;
}

/* Address: 0x10000900 Size: 24 bytes */
void FUN_10000900()

{

  ((void (*)())*puRam101158d8)();
  return;
}

/* FUN_10000b70 defined elsewhere */


/* FUN_10001290 defined elsewhere */


/* Address: 0x100012f0 Size: 24 bytes */
void FUN_100012f0()

{

  ((void (*)())*puRam10115758)();
  return;
}

/* Address: 0x100013b0 Size: 24 bytes */
void FUN_100013b0()

{

  ((void (*)())*puRam1011565c)();
  return;
}

/* Address: 0x100013c8 Size: 24 bytes */
void FUN_100013c8()

{

  ((void (*)())*puRam10115504)();
  return;
}

/* Address: 0x100013e0 Size: 24 bytes */
void FUN_100013e0()

{

  ((void (*)())*puRam101159a0)();
  return;
}

/* Address: 0x100013f8 Size: 24 bytes */
void FUN_100013f8()

{

  ((void (*)())*puRam10115b04)();
  return;
}

/* Address: 0x10001410 Size: 24 bytes */
void FUN_10001410()

{

  ((void (*)())*puRam10115a30)();
  return;
}

/* Address: 0x10001428 Size: 24 bytes */
void FUN_10001428()

{

  ((void (*)())*puRam10115584)();
  return;
}

/* Address: 0x10001440 Size: 24 bytes */
void FUN_10001440()

{

  ((void (*)())*puRam101158ec)();
  return;
}

/* Address: 0x10001458 Size: 24 bytes */
void FUN_10001458()

{

  ((void (*)())*puRam10115480)();
  return;
}

/* Address: 0x10001470 Size: 24 bytes */
void FUN_10001470()

{

  ((void (*)())*puRam10115998)();
  return;
}

/* Address: 0x10001488 Size: 24 bytes */
void FUN_10001488()

{

  ((void (*)())*puRam10115688)();
  return;
}

/* Address: 0x100014b8 Size: 24 bytes */
void FUN_100014b8()

{

  ((void (*)())*puRam10115814)();
  return;
}

/* Address: 0x100014d0 Size: 24 bytes */
void FUN_100014d0()

{

  ((void (*)())*puRam101154a0)();
  return;
}

/* Address: 0x10001590 Size: 24 bytes */
void FUN_10001590()

{

  ((void (*)())*puRam10115af0)();
  return;
}

/* Address: 0x100015a8 Size: 24 bytes */
void FUN_100015a8()

{

  ((void (*)())*puRam10115574)();
  return;
}

/* Address: 0x10001638 Size: 24 bytes */
void FUN_10001638()

{

  ((void (*)())*puRam101158dc)();
  return;
}

/* Address: 0x10001680 Size: 24 bytes */
void FUN_10001680()

{

  ((void (*)())*puRam10115a10)();
  return;
}

/* Address: 0x100016b0 Size: 24 bytes */
void FUN_100016b0()

{

  ((void (*)())*puRam10115b70)();
  return;
}

/* Address: 0x10001758 Size: 24 bytes */
void FUN_10001758()

{

  ((void (*)())*puRam10115858)();
  return;
}

/* Address: 0x100018f0 Size: 24 bytes */
void FUN_100018f0()

{

  ((void (*)())*puRam10115390)();
  return;
}

/* Address: 0x10001908 Size: 24 bytes */
void FUN_10001908()

{

  ((void (*)())*puRam10115b10)();
  return;
}

/* Address: 0x10001920 Size: 24 bytes */
void FUN_10001920()

{

  ((void (*)())*puRam10115308)();
  return;
}

/* FUN_100019c8 defined elsewhere */


/* Address: 0x100019f8 Size: 24 bytes */
void FUN_100019f8()

{

  ((void (*)())*puRam101156fc)();
  return;
}

/* FUN_10001a70 defined elsewhere */


/* FUN_10001b18 defined elsewhere */


/* Address: 0x10001bd8 Size: 24 bytes */
void FUN_10001bd8()

{

  ((void (*)())*puRam1011561c)();
  return;
}

/* Address: 0x10001dd0 Size: 24 bytes */
void FUN_10001dd0()

{

  ((void (*)())*puRam10115314)();
  return;
}

/* Address: 0x10001e78 Size: 24 bytes */
void FUN_10001e78()

{

  ((void (*)())*puRam10115330)();
  return;
}

/* Address: 0x10001f50 Size: 24 bytes */
void FUN_10001f50()

{

  ((void (*)())*puRam10115540)();
  return;
}

/* Address: 0x10001f98 Size: 24 bytes */
void FUN_10001f98()

{

  ((void (*)())*puRam10115b24)();
  return;
}

/* Address: 0x100020d0 Size: 24 bytes */
void FUN_100020d0()

{

  ((void (*)())*puRam1011540c)();
  return;
}

/* Address: 0x10002100 Size: 24 bytes */
void FUN_10002100()

{

  ((void (*)())*puRam101152c4)();
  return;
}

/* Address: 0x10002148 Size: 24 bytes */
void FUN_10002148()

{

  ((void (*)())*puRam101156d0)();
  return;
}

/* Address: 0x10002178 Size: 24 bytes */
void FUN_10002178()

{

  ((void (*)())*puRam101158d0)();
  return;
}

/* Address: 0x10002238 Size: 24 bytes */
void FUN_10002238()

{

  ((void (*)())*puRam1011583c)();
  return;
}

/* Address: 0x10002340 Size: 24 bytes */
void FUN_10002340()

{

  ((void (*)())*puRam10115b78)();
  return;
}

/* FUN_100023b8 defined elsewhere */


/* Address: 0x10002568 Size: 24 bytes */
void FUN_10002568()

{

  ((void (*)())*puRam1011585c)();
  return;
}

/* Address: 0x100026b8 Size: 24 bytes */
void FUN_100026b8()

{

  ((void (*)())*puRam101152d4)();
  return;
}

/* Address: 0x10002970 Size: 24 bytes */
void FUN_10002970()

{

  ((void (*)())*puRam10115b4c)();
  return;
}

/* Address: 0x10002a60 Size: 24 bytes */
void FUN_10002a60()

{

  ((void (*)())*puRam10115ad8)();
  return;
}

/* FUN_10002ad8 defined elsewhere */


/* FUN_10002b20 defined elsewhere */


/* Address: 0x10002ce8 Size: 24 bytes */
void FUN_10002ce8()

{

  ((void (*)())*puRam1011584c)();
  return;
}

/* Address: 0x10002d00 Size: 24 bytes */
void FUN_10002d00()

{

  ((void (*)())*puRam101158d4)();
  return;
}

/* FUN_10003108 defined elsewhere */


/* Address: 0x10003228 Size: 24 bytes */
void FUN_10003228()

{

  ((void (*)())*puRam101152c8)();
  return;
}

/* Address: 0x100032e8 Size: 24 bytes */
void FUN_100032e8()

{

  ((void (*)())*puRam101152cc)();
  return;
}

/* FUN_10003468 defined elsewhere */


/* Address: 0x100035a0 Size: 24 bytes */
void FUN_100035a0()

{

  ((void (*)())*puRam101152dc)();
  return;
}

/* Address: 0x100035b8 Size: 24 bytes */
void FUN_100035b8()

{

  ((void (*)())*puRam101158e0)();
  return;
}

/* Address: 0x10003660 Size: 24 bytes */
void FUN_10003660()

{

  ((void (*)())*puRam1011529c)();
  return;
}

/* Address: 0x10003678 Size: 24 bytes */
void FUN_10003678()

{

  ((void (*)())*puRam101152d8)();
  return;
}

/* Address: 0x10005b68 Size: 452 bytes */
void FUN_10005b68()

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  psVar6 = psRam10117428;
  psVar5 = psRam10117424;
  if (*(int *)(psRam10117428 + 0x14) < 0) {
    if ((*psRam10117428 != *psRam10117424) || (psRam10117428[1] != psRam10117424[1])) {
      iVar7 = FUN_10003768((long long)*psRam10117428 - (long long)*psRam10117424);
      if (1 < iVar7) {
        return;
      }
      iVar7 = FUN_10003768((long long)psVar6[1] - (long long)psVar5[1]);
      if (1 < iVar7) {
        return;
      }
      FUN_1002c970(*psVar5,psVar5[1],*psVar6,psVar6[1]);
      FUN_10004ed8();
    }
    iVar7 = 0;
    if (0 < psVar5[2]) {
      do {
        iVar8 = 0;
        if (0 < psVar5[3]) {
          do {
            iVar4 = *(int *)(psVar6 + 0x12) +
                    (iVar7 - psVar6[0xf]) * (((int)psVar6[0x10] - (int)psVar6[0xe]) + 1) * 10 +
                    psVar6[0xe] * -10;
            iVar2 = iVar8 * 10;
            uVar1 = *(unsigned int *)(iVar4 + iVar2);
            if ((int)uVar1 < 0) {
              sVar9 = psVar5[0xe];
              iVar3 = *(int *)(psVar5 + 0x12) +
                      (iVar7 - psVar5[0xf]) * (((int)psVar5[0x10] - (int)sVar9) + 1) * 10 +
                      (sVar9 * 4 + (int)sVar9 & 0x7fffffffU) * -2;
              if ((*(int *)(iVar2 + iVar3 + 4) == *(int *)(iVar4 + iVar2 + 4)) &&
                 (*(unsigned int *)(iVar3 + iVar2) == uVar1)) {
                *(unsigned int *)(iVar3 + iVar2) = *(unsigned int *)(iVar3 + iVar2) & 0x7fffffff;
              }
            }
            sVar9 = (short)iVar8 + 1;
            iVar8 = (int)sVar9;
          } while (sVar9 < psVar5[3]);
        }
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 < psVar5[2]);
    }
  }
  return;
}

/* Address: 0x10007c50 Size: 388 bytes */
void FUN_10007c50()

{
  int uVar1;
  unsigned int uVar4;
  int iVar5;
  short *puVar6;
  short *puVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int uVar2;
  int uVar3;
  
  puVar7 = puRam10117428;
  puVar6 = puRam10117424;
  *puRam10117428 = *puRam10117424;
  puVar7[1] = puVar6[1];
  puVar7[2] = puVar6[2];
  puVar7[3] = puVar6[3];
  uVar1 = *(int *)(puVar6 + 6);
  uVar2 = *(int *)(puVar6 + 8);
  uVar3 = *(int *)(puVar6 + 10);
  uVar4 = *(unsigned int *)(puVar6 + 0xc);
  *(int *)(puVar7 + 4) = *(int *)(puVar6 + 4);
  *(int *)(puVar7 + 6) = uVar1;
  *(int *)(puVar7 + 8) = uVar2;
  *(int *)(puVar7 + 10) = uVar3;
  *(unsigned int *)(puVar7 + 0xc) = uVar4 & 0xffff0000;
  FUN_10003a48(puVar7 + 0xe,puVar6 + 0xe);
  uVar4 = *(unsigned int *)(puVar6 + 0x14);
  *(unsigned int *)(puVar7 + 0x14) =
       (uVar4 >> 0x17 & 1) << 0x17 |
       (uVar4 >> 0x18 & 1) << 0x18 |
       (uVar4 >> 0x19 & 1) << 0x19 |
       (uVar4 >> 0x1a & 1) << 0x1a |
       (uVar4 >> 0x1b & 1) << 0x1b |
       (uVar4 >> 0x1c & 1) << 0x1c |
       (uVar4 >> 0x1d & 1) << 0x1d |
       (uVar4 >> 0x1e & 1) << 0x1e | uVar4 & 0x80000000 | *(unsigned int *)(puVar7 + 0x14) & 0x7fffff;
  puVar7[0x15] = puVar6[0x15];
  puVar7[0x16] = puVar6[0x16];
  puVar7[0x17] = puVar6[0x17];
  *(unsigned int *)(puVar7 + 0x14) = *(unsigned int *)(puVar7 + 0x14) | 0x80000000;
  iVar9 = 0;
  if (0 < (short)puVar7[2]) {
    do {
      iVar10 = 0;
      if (0 < (short)puVar7[3]) {
        do {
          iVar5 = *(int *)(puVar7 + 0x12) +
                  (iVar9 - (short)puVar7[0xf]) *
                  (((int)(short)puVar7[0x10] - (int)(short)puVar7[0xe]) + 1) * 10 +
                  (short)puVar7[0xe] * -10;
          *(unsigned int *)(iVar5 + iVar10 * 10) = *(unsigned int *)(iVar5 + iVar10 * 10) | 0x80000000;
          sVar8 = (short)iVar10 + 1;
          iVar10 = (int)sVar8;
        } while (sVar8 < (short)puVar7[3]);
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < (short)puVar7[2]);
  }
  return;
}

/* Address: 0x100099cc Size: 4 bytes */
void FUN_100099cc()

{
  return;
}

/* Address: 0x10009a98 Size: 104 bytes */
int FUN_10009a98()

{
  int uVar1;
  int *puVar2;
  int iVar3;
  
  puVar2 = (int *)FUN_10001290();
  FUN_10002598(puVar2);
  iVar3 = FUN_10001d70(puVar2);
  if (iVar3 == 0) {
    FUN_100db2f4(0xfffffffffffffd66);
    uVar1 = *puVar2;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}









































































/* Address: 0x10009b00 Size: 72 bytes */
void FUN_10009b00()

{
  long long uVar1;
  
  uVar1 = FUN_10001290();
  FUN_10002ad8();
  FUN_10003468(uVar1);
  return;
}





































/* Address: 0x10009fa8 Size: 96 bytes */
void FUN_10009fa8(long long param_1,short param_2,short param_3,short param_4)

{
  long long uVar1;
  
  uVar1 = FUN_100b2268((((long long)param_4 & 0x3fffffffU) * 4 - (long long)param_4 & 0x7fffffff) * 2
                       + (unsigned long long)uRam101176cc);
  FUN_100008e8(param_2,param_3,uVar1);
  return;
}

/* Address: 0x1000a008 Size: 140 bytes */
void FUN_1000a008(int param_1,short param_2)

{
  int local_18;
  int local_14 [5];
  
  if (param_1 != 0) {
    FUN_10000870(local_14,&local_18);
    FUN_10000888(*(int *)(param_1 + 0x10),0);
    FUN_100479f4(param_2);
    FUN_10002148((unsigned long long)*(unsigned int *)(param_1 + 0x10) + 0x10);
    FUN_10000888(local_14[0],local_18);
  }
  return;
}





















































































/* Address: 0x1000a714 Size: 184 bytes */
void FUN_1000a714(int param_1,short param_2,short param_3,short param_4,short param_5
                 )

{
  int local_28;
  int local_24 [9];
  
  if (param_1 != 0) {
    FUN_10000870(local_24,&local_28);
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_10000888(*(int *)(param_1 + 0x10),0);
    }
    FUN_100479f4(param_5);
    FUN_10000270(param_2,param_3);
    FUN_10000288(param_4 + -1,0);
    FUN_10000888(local_24[0],local_28);
  }
  return;
}









































































/* Address: 0x1000a7cc Size: 184 bytes */
void FUN_1000a7cc(int param_1,short param_2,short param_3,short param_4,short param_5
                 )

{
  int local_28;
  int local_24 [9];
  
  if (param_1 != 0) {
    FUN_10000870(local_24,&local_28);
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_10000888(*(int *)(param_1 + 0x10),0);
    }
    FUN_100479f4(param_5);
    FUN_10000270(param_2,param_3);
    FUN_10000288(0,param_4 + -1);
    FUN_10000888(local_24[0],local_28);
  }
  return;
}









































































/* Address: 0x1000c67c Size: 168 bytes */
void FUN_1000c67c()

{
  int *puVar1;
  int *puVar2;
  int iVar3;
  unsigned long long uVar4;
  int iVar5;
  
  iVar3 = iRam1011746c;
  puVar2 = puRam10117468;
  if (*psRam10115d18 == 0) {
    FUN_1000c724(0);
  }
  uVar4 = 7;
  do {
    puVar1 = *(int **)((int)((uVar4 & 0xffffffff) << 2) + iVar3);
    if (puVar1 != (int *)0x0) {
      FUN_10002598(puVar1);
    }
    *puVar2 = *puVar1;
    FUN_10020ae8(uVar4);
    iVar5 = *(int *)((int)((uVar4 & 0xffffffff) << 2) + iVar3);
    if (iVar5 != 0) {
      FUN_10002ad8(iVar5);
    }
    iVar5 = (int)uVar4;
    uVar4 = (long long)(short)((short)uVar4 + -1);
  } while (iVar5 != 0);
  return;
}

























































































































/* Address: 0x1000d910 Size: 156 bytes */
int FUN_1000d910(short param_1)

{
  int uVar1;
  int *puVar2;
  int *ppuVar3;
  int **local_2c;
  
  ppuVar3 = 0 /* TVect base */;
  if (*psRam10115d18 == 0) {
    ppuVar3 = 0 /* TVect base */;
    FUN_1000c724(1);
  }
  if ((*(short *)(*(int*)((char*)ppuVar3 - 0x69d)) == 0) || (param_1 != *(short *)(*(int *)(*(int*)((char*)ppuVar3 - 0x151)) + 0x110)))
  {
    puVar2 = *(int **)((*(int*)((char*)ppuVar3 - 0x10d)) + param_1 * 4);
    if (puVar2 != (int *)0x0) {
      FUN_10002598(puVar2);
      ppuVar3 = local_2c;
    }
    uVar1 = *puVar2;
    *(int *)(*(int*)((char*)ppuVar3 - 0x10a)) = uVar1;
  }
  else {
    uVar1 = *(int *)(*(int*)((char*)ppuVar3 - 0x10e));
  }
  return uVar1;
}

/* Address: 0x1000f6a0 Size: 104 bytes */
long long FUN_1000f6a0(short param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(*piRam10117468 + 0x24a);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar2 = *piRam10117468 + sVar1 * 0x5c;
      if ((*(short *)(iVar2 + 0x24c) != 0) && (*(short *)(iVar2 + 0x250) == param_1)) {
        return 1;
      }
    } while (sVar1 != 0);
  }
  return 0;
}

/* Address: 0x1000f708 Size: 180 bytes */
long long FUN_1000f708(short param_1,short param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = *(short *)(*piRam10117468 + 0x24a);
  if (sVar2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar3 = *piRam10117468 + sVar2 * 0x5c;
      if ((*(short *)(iVar3 + 0x24c) != 0) && (*(short *)(iVar3 + 0x250) == param_1)) {
        return 0;
      }
    } while (sVar2 != 0);
  }
  cVar1 = *(char *)(*piRam10117468 + (int)param_1 + 0x56);
  if ((cVar1 != '\b') && (cVar1 != '\x05')) {
    if ((param_2 != 0) && (*(char *)(*piRam10117468 + (int)param_1 + 0x56) == '\x06')) {
      return 1;
    }
    return 0;
  }
  return 1;
}

/* Address: 0x10015980 Size: 72 bytes */
short FUN_10015980(short param_1)

{
  int *ppuVar1;
  int iVar2;
  short uVar3;
  
  ppuVar1 = 0 /* TVect base */;
  iVar2 = FUN_10015904(param_1);
  if (iVar2 == -1) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(short *)((*(int*)((char*)ppuVar1 - 0x6d9)) + iVar2 * 2);
  }
  return uVar3;
}

/* Address: 0x100184dc Size: 152 bytes */
long long FUN_100184dc(short param_1,short param_2,short param_3,short param_4)

{
  if (param_1 != param_3) {
    if (param_2 == param_4) {
      if (param_3 < param_1) {
        return 6;
      }
      return 2;
    }
    if (param_1 <= param_3) {
      if (param_4 < param_2) {
        return 1;
      }
      return 3;
    }
    if (param_4 < param_2) {
      return 7;
    }
    return 5;
  }
  if (param_2 == param_4) {
    return 0xff;
  }
  if (param_4 < param_2) {
    return 0;
  }
  return 4;
}

/* Address: 0x1001aea0 Size: 152 bytes */
void FUN_1001aea0()

{
  short sVar1;
  short sVar2;
  long long lVar3;
  short sVar4;
  
  sVar1 = *(short *)(*piRam10117468 + 0x24a);
  lVar3 = -1;
  sVar4 = -1;
  while (sVar1 != 0) {
    sVar1 = sVar1 + -1;
    sVar2 = *(short *)(*piRam10117468 + sVar1 * 0x5c + 0x24c);
    if ((sVar2 != 0) && (sVar4 < sVar2)) {
      lVar3 = (long long)sVar1;
      sVar4 = sVar2;
    }
  }
  if ((int)lVar3 != -1) {
    FUN_1001ae14(lVar3,2);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1001e330(long long param_1) { }
























































































































































































































































































































































































/* Address: 0x1001e3ec Size: 196 bytes */
void FUN_1001e3ec(long long param_1)

{
  unsigned long long uVar1;
  int iVar2;
  long long uVar3;
  short sVar4;
  
  uVar1 = ZEXT48(0 /* TVect base */);
  sVar4 = 0;
  do {
    uVar3 = FUN_1000d910(sVar4);
    FUN_10052490(param_1,uVar3,0x42c);
    FUN_1000d9ac(sVar4);
    iVar2 = (int)uVar1;
    sVar4 = sVar4 + 1;
  } while (sVar4 < 8);
  FUN_1000c7b4();
  FUN_10052490(param_1,**(int **)(iVar2 + -0x430),0x4b0);
  if (**(short **)(iVar2 + -0x1a74) == 0) {
    if (**(int **)(iVar2 + -0x3fc) != 0) {
      FUN_10002ad8(**(int **)(iVar2 + -0x3fc));
    }
  }
  FUN_1004248c();
  return;
}









































































































/* FUN_1001eff8 defined elsewhere */


/* Address: 0x1001f5e8 Size: 96 bytes */
void FUN_1001f5e8(short param_1,short param_2)

{
  FUN_100448e4(0xf,param_1,param_2,*puRam10117710,*puRam101175b4);
  FUN_1001f220(param_1,param_2,1);
  return;
}

/* Address: 0x1001f648 Size: 272 bytes */
long long FUN_1001f648(short param_1,short *param_2)

{
  char cVar1;
  int *piVar2;
  int *ppuVar3;
  long long uVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = piRam10117468;
  ppuVar3 = 0 /* TVect base */;
  iVar6 = (int)param_1;
  uVar4 = FUN_1001e794(iVar6,3,0xffffffffffffffff,1);
  if ((int)uVar4 == -1) {
    uVar4 = 0;
  }
  else {
    iVar5 = FUN_10047d80(iVar6,uVar4);
    *param_2 = (short)iVar5;
    iVar5 = *(int *)(*(int*)((char*)ppuVar3 - 0x151)) + iVar6 * 0x42 + iVar5;
    cVar1 = *(char *)(iVar5 + 0x1622);
    iVar6 = (int)cVar1;
    if (*(char *)(*(int *)(*(int*)((char*)ppuVar3 - 0x14f)) + *(char *)(iVar5 + 0x161a) * 6 + 5) == '\x01') {
      iVar6 = (int)(short)(cVar1 + 2);
    }
    if ((*(short *)(*piVar2 + 2) < 9) || (3 < iVar6)) {
      if ((*(short *)(*piVar2 + 2) < 5) || (2 < iVar6)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

/* Address: 0x10020f94 Size: 620 bytes */
long long FUN_10020f94(short param_1)

{
  short sVar2;
  int iVar1;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  long long lVar7;
  short sVar8;
  long long lVar9;
  char auStack_64 [22];
  short local_4e;
  short local_4c;
  short local_48;
  short local_46;
  short local_44;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_2e;
  short local_2c;
  short local_2a;
  
  lVar7 = -1;
  sVar8 = 0;
  sVar4 = 0;
  if (param_1 == 0) {
    sVar5 = 800;
    sVar6 = 4;
  }
  else {
    sVar5 = 0x5dc;
    sVar6 = 5;
  }
  while( true ) {
    lVar9 = 0;
    do {
      FUN_10049628(lVar9,auStack_64);
      if ((((local_34 == 0) && ((int)lVar9 != 0x1c)) && ((int)lVar9 != 5)) &&
         ((-1 < local_46 && (local_46 <= sVar5)))) {
        sVar3 = local_4e - local_4c;
        if (sVar6 <= local_4e) {
          if ((int)local_46 <= sVar5 + -200) {
            sVar3 = sVar3 + 1;
          }
          if ((int)local_46 <= sVar5 + -400) {
            sVar3 = sVar3 + 1;
          }
          if (0xb < local_48) {
            sVar3 = sVar3 + 1;
          }
          if (0xf < local_48) {
            sVar3 = sVar3 + 1;
          }
          if (local_2e != 0) {
            sVar3 = sVar3 + 1;
          }
          if ((local_2c != 0) || (local_2a != 0)) {
            sVar3 = sVar3 + 1;
          }
          if (((local_36 != 0) || (local_38 != 0)) || (local_3a != 0)) {
            sVar3 = sVar3 + 1;
          }
          if (local_3c != 0) {
            sVar3 = sVar3 + 1;
          }
          if (local_44 != 0) {
            sVar3 = sVar3 + 1;
          }
          if (local_32 != 0) {
            sVar3 = sVar3 + 2;
          }
        }
        if (1 < sVar3) {
          sVar2 = FUN_1005f230(1,sVar3 << 1,0);
          sVar3 = sVar3 + sVar2;
        }
        if ((sVar8 < sVar3) ||
           ((sVar3 == sVar8 && (iVar1 = FUN_1005f230(1,2,0xffffffffffffffff), iVar1 != 0)))) {
          lVar7 = lVar9;
          sVar8 = sVar3;
        }
      }
      sVar3 = (short)lVar9 + 1;
      lVar9 = (long long)sVar3;
    } while (sVar3 < 0x1d);
    if (((int)lVar7 != -1) || (3 < sVar4)) break;
    sVar4 = sVar4 + 1;
    sVar5 = sVar5 + 500;
    sVar6 = sVar6 + -1;
    if (sVar6 < 1) {
      sVar6 = 1;
    }
  }
  return lVar7;
}

/* Address: 0x10021200 Size: 44 bytes */
void FUN_10021200(int param_1,char param_2)

{
  param_2 = *(char *)(param_1 + 8) + param_2;
  *(char *)(param_1 + 8) = param_2;
  if ('\t' < param_2) {
    *(char *)(param_1 + 8) = 9;
  }
  return;
}

/* Address: 0x1002269c Size: 20 bytes */
void FUN_1002269c(short *param_1,short param_2,short param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

/* Address: 0x10025598 Size: 80 bytes */
void FUN_10025598()

{
  if (*puRam10115d80 < 5) {
    return;
  }
  return;
}

/* Address: 0x1002565c Size: 252 bytes */
void FUN_1002565c()

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *ppuVar4;
  long long uVar5;
  int **local_34;
  
  piVar3 = piRam10115d88;
  piVar1 = (int *)*piRam10115d88;
  ppuVar4 = 0 /* TVect base */;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x328));
    uVar5 = FUN_1007a894(0);
    FUN_1007a95c(uVar5,*piVar3);
    FUN_10117884(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x200),uVar5);
    ppuVar4 = local_34;
  }
  *piVar3 = 0;
  *(short *)(*(int*)((char*)ppuVar4 - 0x688)) = 0;
  FUN_1003f674(1,1,1);
  iVar2 = *(int *)(*(int*)((char*)ppuVar4 - 0x151));
  if (*(short *)(iVar2 + 0x12e) != 0) {
    if ((*(unsigned int *)(iVar2 + 0x134) >> 0x1a & 1) == 0) {
      *(unsigned int *)(iVar2 + 0x134) = *(unsigned int *)(iVar2 + 0x134) | 0x4000000;
      FUN_1005f6b0(0x19,2);
      FUN_10040040();
    }
  }
  return;
}

/* Address: 0x10025f94 Size: 4 bytes */
void FUN_10025f94()

{
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10026310() { }






















































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10026568 Size: 4 bytes */
void FUN_10026568()

{
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10029dcc(int *param_1,long long param_2) { }
































































































































































































































































/* FUN_1002c92c defined elsewhere */


/* Address: 0x10030454 Size: 60 bytes */
void FUN_10030454(long long param_1)

{
  if (*psRam10115dec != 0) {
    FUN_1003cac4(param_1,5);
  }
  return;
}

/* Address: 0x10031f54 Size: 112 bytes */
void FUN_10031f54(long long param_1)

{
  short sVar1;
  int *ppuVar2;
  char auStack_108 [264];
  
  ppuVar2 = 0 /* TVect base */;
  sVar1 = *psRam10115df4;
  *psRam10115df4 = sVar1 + 1;
  FUN_100b19f4(auStack_108,param_1);
  FUN_10090e0c(*(int *)(*(int*)((char*)ppuVar2 - 0x6ac)),(long long)sVar1 + 0x6c696e31,auStack_108,1);
  return;
}

/* Address: 0x10031fc4 Size: 124 bytes */
void FUN_10031fc4()

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = piRam10115df0;
  if (*piRam10115df0 != 0) {
    FUN_10117884(*piRam10115df0 + (int)*(short *)(*(int *)*piRam10115df0 + 0x810));
    piVar1 = (int *)*piVar2;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    *piVar2 = 0;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10032860(short param_1,short param_2,long long param_3,short param_4) { }






































































































































































































































































































































































































































































































































































































































































/* Address: 0x10037fc4 Size: 32 bytes */
void FUN_10037fc4()

{
  FUN_10037f68();
  return;
}

/* Address: 0x1003865c Size: 516 bytes */
long long FUN_1003865c(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  short sVar5;
  long long lVar6;
  int iVar8;
  unsigned long long uVar7;
  unsigned long long uVar9;
  short local_48 [36];
  
  puVar3 = puRam1011735c;
  lVar6 = 0;
  iVar8 = 0;
  do {
    local_48[iVar8 * 2 + 1] = 0;
    local_48[iVar8 * 2] = 0;
    sVar5 = (short)iVar8 + 1;
    iVar8 = (int)sVar5;
  } while (sVar5 < 8);
  iVar8 = 0;
  do {
    if ('\0' < *(char *)(*puRam1011735c + iVar8 * 0x2c + 0x1422)) {
      lVar6 = (long long)(short)((short)lVar6 + 1);
      local_48[iVar8 * 2] = 1;
    }
    sVar5 = (short)iVar8 + 1;
    iVar8 = (int)sVar5;
  } while (sVar5 < 8);
  iVar8 = 0;
  do {
    if (('\x01' < *(char *)(*puRam1011735c + iVar8 * 0x2c + 0x1422)) && ((int)lVar6 < 10)) {
      lVar6 = (long long)(short)((short)lVar6 + 1);
      local_48[iVar8 * 2 + 1] = 1;
    }
    sVar5 = (short)iVar8 + 1;
    iVar8 = (int)sVar5;
  } while (sVar5 < 8);
  iVar8 = 0;
  do {
    if ((local_48[iVar8 * 2] != 0) && (local_48[iVar8 * 2 + 1] == 0)) {
      *(char *)(*puVar3 + iVar8 * 0x2c + 0x1422) = 1;
    }
    sVar5 = (short)iVar8 + 1;
    iVar8 = (int)sVar5;
  } while (sVar5 < 8);
  uVar7 = 0;
  iVar8 = 0;
  do {
    uVar9 = 0;
    do {
      iVar1 = (int)((uVar9 & 0x7fffffff) << 1);
      if (*(short *)((int)local_48 + (int)((uVar7 & 0xffffffff) << 2) + iVar1) != 0) {
        *(char *)(param_1 + iVar8 * 0x16) = (char)uVar7;
        iVar2 = (int)(uVar7 * 0x2c);
        iVar4 = param_1 + iVar8 * 0x16;
        *(char *)(iVar4 + 1) = *(char *)(*puVar3 + iVar2 + (int)uVar9 + 0x1423);
        *(short *)(iVar4 + 2) = *(short *)(iVar2 + *puVar3 + iVar1 + 0x1426);
        *(short *)(iVar4 + 4) = *(short *)(iVar2 + *puVar3 + iVar1 + 0x142a);
        FUN_10001e78(iVar4 + 6,
                     uVar7 * 0x2c + (unsigned long long)*puVar3 + (uVar9 & 0xfffffff) * 0x10 + 0x142e);
        iVar8 = (int)(short)((short)iVar8 + 1);
      }
      sVar5 = (short)uVar9 + 1;
      uVar9 = (unsigned long long)sVar5;
    } while (sVar5 < 2);
    sVar5 = (short)uVar7 + 1;
    uVar7 = (unsigned long long)sVar5;
  } while (sVar5 < 8);
  *param_2 = (short)lVar6 * 0x16;
  return lVar6;
}





























































































































































































































































































































































































































































/* Address: 0x10038c60 Size: 300 bytes */
void FUN_10038c60(short param_1,char param_2,short param_3,short param_4,
                 long long param_5)

{
  int bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned long long uVar6;
  
  puVar5 = puRam1011735c;
  iVar3 = *puRam1011735c + param_1 * 0x2c;
  cVar2 = *(char *)(iVar3 + 0x1422);
  uVar6 = (unsigned long long)cVar2;
  if (cVar2 < '\x02') {
    *(char *)(iVar3 + 0x1422) = cVar2 + '\x01';
  }
  else {
    iVar3 = *puRam1011735c + param_1 * 0x2c;
    bVar1 = *(char *)(iVar3 + 0x1423) <= *(char *)(iVar3 + 0x1424);
    uVar6 = (unsigned long long)bVar1;
    if (*(char *)(*puRam1011735c + param_1 * 0x2c + (unsigned int)bVar1 + 0x1423) <= param_2) {
      return;
    }
  }
  iVar3 = (int)((long long)param_1 * 0x2c);
  *(char *)(*puVar5 + iVar3 + (int)uVar6 + 0x1423) = param_2;
  iVar4 = (int)((uVar6 & 0xffffffff) << 1);
  *(short *)(iVar3 + *puVar5 + iVar4 + 0x1426) = param_3;
  *(short *)(iVar3 + *puVar5 + iVar4 + 0x142a) = param_4;
  if ((int)param_5 == 0) {
    *(char *)(*puVar5 + param_1 * 0x2c + (int)((uVar6 & 0xffffffff) << 4) + 0x142e) =
         *(char *)(iRam10115e30 + 0x60);
  }
  else {
    FUN_10001e78((long long)param_1 * 0x2c + (unsigned long long)*puVar5 + (uVar6 & 0xfffffff) * 0x10 + 0x142e
                 ,param_5);
  }
  return;
}

















































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003a230(int *param_1) { }
































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1003a5f8 Size: 4 bytes */
void FUN_1003a5f8()

{
  return;
}

/* Address: 0x1003aeb0 Size: 120 bytes */
void FUN_1003aeb0(unsigned short param_1)

{
  *puRam1011760c = 0;
  if (param_1 < 0xb) {
    return;
  }
  return;
}

/* Address: 0x1003c938 Size: 396 bytes */

void FUN_1003c938(long long param_1)

{
  int *puVar1;
  int iVar2;
  int local_254;
  char auStack_230 [256];
  int *local_130;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar1 = puRam10117370;
  local_130 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puRam10117370;
  *puRam10117370 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 != 0) {
    FUN_100db158(local_2c,local_28);
    return;
  }
  if ((int)param_1 != 0) {
    local_130 = (int *)FUN_10117884(**(int **)(local_254 + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_254 + -0x1e4) + 200),
                                    0x3fc,0);
    if (local_130 == (int *)0x0) goto LAB_1003ca68;
    FUN_10117884((int)*(short *)(*local_130 + 800) + (int)local_130);
    FUN_100b19f4(auStack_230,param_1);
    FUN_10090e0c(local_130,0x31737472,auStack_230,1);
  }
  if (local_130 != (int *)0x0) {
    FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x810));
    FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x738));
  }
LAB_1003ca68:
  *puVar1 = local_24;
  return;
}

/* Address: 0x1003cac4 Size: 192 bytes */
void FUN_1003cac4(long long param_1,short param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_2c;
  
  iVar2 = FUN_10117884(*piRam10115fa4 + (int)*(short *)(*(int *)*piRam10115fa4 + 0x308),0x696e666f);
  if (iVar2 != 0) {
    puVar3 = (int *)
             (*(short *)(**(int **)(local_2c + -0x544) +
                         *(short *)(**(int **)(local_2c + -0x544) + 0x110) * 2 + 0xa0) * 6 +
             *(int *)(local_2c + -0x1d4));
    uVar1 = puVar3[1];
    *(int *)(iVar2 + 0x9e) = *puVar3;
    *(unsigned int *)(iVar2 + 0xa2) = uVar1 & 0xffff0000;
    FUN_10081040(iVar2,param_1);
    if (0 < param_2) {
      FUN_1005f144(param_2);
    }
  }
  return;
}

/* Address: 0x1003ced4 Size: 448 bytes */

void FUN_1003ced4(long long param_1,long long param_2)

{
  int *puVar1;
  int iVar2;
  int local_35c;
  char auStack_338 [256];
  char auStack_238 [256];
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
  iVar2 = FUN_10000090(auStack_134);
  if (iVar2 != 0) {
    FUN_100db158(local_34,local_30);
    return;
  }
  if ((int)param_1 != 0) {
    local_138 = (int *)FUN_10117884(**(int **)(local_35c + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_35c + -0x1e4) + 200),
                                    0x3fc,0);
    if (local_138 == (int *)0x0) goto LAB_1003d038;
    FUN_10117884((int)*(short *)(*local_138 + 800) + (int)local_138);
    FUN_100b19f4(auStack_238,param_1);
    FUN_10090e0c(local_138,0x32737431,auStack_238,1);
    FUN_100b19f4(auStack_338,param_2);
    FUN_10090e0c(local_138,0x32737432,auStack_338,1);
  }
  if (local_138 != (int *)0x0) {
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0x810));
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0x738));
  }
LAB_1003d038:
  *puVar1 = local_2c;
  return;
}

/* Address: 0x1003d5d4 Size: 240 bytes */
void FUN_1003d5d4()

{
  int *piVar1;
  int *ppuVar2;
  int *piVar3;
  int **local_2c;
  
  piVar3 = piRam101163ac;
  ppuVar2 = 0 /* TVect base */;
  if (*piRam101163ac != 0) {
    *(char *)(*piRam101163ac + 0xbe) = 1;
    piVar1 = (int *)*piVar3;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
    piVar3 = (int *)*piVar3;
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4c8));
    ppuVar2 = local_2c;
  }
  piVar3 = *(int **)(*(int*)((char*)ppuVar2 - 0x541));
  if ((piVar3 != (int *)0x0) &&
     (piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar3 + 0x308) + (int)piVar3,0x6f766572),
     piVar3 != (int *)0x0)) {
    *(char *)(piVar3 + 0x25) = 1;
    FUN_10117884((int)*(short *)(*piVar3 + 0x4d0) + (int)piVar3);
    FUN_10117884((int)*(short *)(*piVar3 + 0x4c8) + (int)piVar3);
  }
  return;
}

/* Address: 0x1003d6c4 Size: 112 bytes */
void FUN_1003d6c4()

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884(*piRam10115fa4 + (int)*(short *)(*(int *)*piRam10115fa4 + 0x308),
                               0x696e666f);
  if (piVar1 != (int *)0x0) {
    *(char *)(piVar1 + 0x2a) = 0;
    FUN_10117884((int)*(short *)(*piVar1 + 0x488) + (int)piVar1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003e13c(long long param_1,short param_2) { }























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1003f674 Size: 116 bytes */
void FUN_1003f674(short param_1,short param_2,short param_3)

{
  FUN_1003dc28();
  if (param_1 != 0) {
    FUN_10007f78();
  }
  if (param_2 != 0) {
    FUN_10060608(1,1,0);
  }
  if (param_3 != 0) {
    FUN_1005cc8c();
  }
  return;
}

/* Address: 0x1004039c Size: 108 bytes */
void FUN_1004039c(short param_1)

{
  long long uVar1;
  
  uVar1 = FUN_10117884(*piRam10115fa4 + (int)*(short *)(*(int *)*piRam10115fa4 + 0x308),0x696e666f);
  if ((int)uVar1 != 0) {
    FUN_10080fe4(uVar1,param_1);
  }
  return;
}

/* Address: 0x10040408 Size: 852 bytes */
void FUN_10040408(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,long long param_6,long long param_7)

{
  int *piVar1;
  int *piVar2;
  char auStack_738 [256];
  char auStack_638 [256];
  char auStack_538 [256];
  char auStack_438 [256];
  char auStack_338 [256];
  char auStack_238 [568];
  
  piVar1 = piRam10115f7c;
  piVar2 = (int *)FUN_10117884(*piRam10115f7c + (int)*(short *)(*(int *)*piRam10115f7c + 0x308),
                               0x73747231);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_238,param_2);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_238,0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  piVar2 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73747232);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_338,param_3);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_338,0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  piVar2 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73747233);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_438,param_4);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_438,0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  piVar2 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73747234);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_538,param_5);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_538,0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  piVar2 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73747235);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_638,param_6);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_638,0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  piVar2 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73747236);
  if (piVar2 != (int *)0x0) {
    FUN_100b19f4(auStack_738,param_7);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_738,0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  }
  FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
  return;
}

/* Address: 0x100423a0 Size: 236 bytes */
void FUN_100423a0(short param_1)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = piRam1011758c;
  piVar3 = piRam10117588;
  piVar2 = (int *)*piRam10117588;
  if (piVar2 != (int *)0x0) {
    FUN_10002598(piVar2);
  }
  *piVar4 = *piVar2;
  iVar5 = 199;
  do {
    iVar6 = param_1 * 0xd6;
    *(char *)(*piVar4 + iVar6 + iVar5 + 0xe) = 0;
    bVar1 = iVar5 != 0;
    iVar5 = (int)(short)((short)iVar5 + -1);
  } while (bVar1);
  *(short *)(iVar6 + *piVar4) = 0;
  *(short *)(*piVar4 + iVar6 + 2) = 0;
  *(short *)(*piVar4 + iVar6 + 4) = 0;
  *(short *)(*piVar4 + iVar6 + 6) = 0;
  *(short *)(iVar6 + *piVar4 + 8) = 0;
  *(short *)(iVar6 + *piVar4 + 10) = 0;
  *(short *)(iVar6 + *piVar4 + 0xc) = 0;
  if (*piVar3 != 0) {
    FUN_10002ad8(*piVar3);
  }
  return;
}













































































































































/* Address: 0x1004248c Size: 88 bytes */
void FUN_1004248c()

{
  long long lVar1;
  int iVar2;
  
  if (*psRam10115ea4 != 0) {
    lVar1 = 0x13;
    do {
      FUN_100423a0(lVar1);
      iVar2 = (int)lVar1;
      lVar1 = (long long)(short)((short)lVar1 + -1);
    } while (iVar2 != 0);
  }
  return;
}

/* Address: 0x100424e4 Size: 220 bytes */
void FUN_100424e4()

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **local_34;
  
  piVar4 = piRam10117594;
  piVar3 = piRam10117590;
  piVar2 = piRam10117588;
  piVar1 = (int *)*piRam10117594;
  if (piVar1 == (int *)0x0) {
    local_34 = 0 /* TVect base */;
    iVar5 = FUN_100f15e0(0x8880,0);
    *piVar4 = iVar5;
  }
  else {
    if (*piVar1 == 0) {
      FUN_100004e0(piVar1,0x8880);
      FUN_100db1ec();
    }
    FUN_10000048(*piVar4);
  }
  if (*piVar3 == 0) {
    iVar5 = FUN_100f15e0(0x4440,0,0);
    *piVar3 = iVar5;
  }
  if (*piVar2 == 0) {
    iVar5 = FUN_100f15e0(0x10b8,0,0);
    *piVar2 = iVar5;
  }
  *(short *)local_34[-0x67f] = 1;
  FUN_1004248c();
  return;
}































































































































































































































/* Address: 0x100425c0 Size: 236 bytes */
int FUN_100425c0(short param_1,short param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short local_20;
  short local_1e [15];
  
  piVar1 = piRam1011758c;
  iVar4 = *piRam1011758c + param_3 * 0xd6;
  local_1e[0] = *(short *)(iVar4 + 6);
  local_20 = *(short *)(iVar4 + 8);
  iVar4 = 0;
  do {
    if (*(char *)(*piVar1 + param_3 * 0xd6 + iVar4 + 0xe) == -1) {
      return -1;
    }
    if ((local_1e[0] == param_1) && (local_20 == param_2)) {
      return iVar4;
    }
    iVar2 = FUN_10017170(local_1e,&local_20,*(char *)(*piVar1 + param_3 * 0xd6 + iVar4 + 0xe))
    ;
    if (iVar2 == 0) {
      return -1;
    }
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
  } while (sVar3 < 200);
  return -1;
}

/* Address: 0x100426b4 Size: 280 bytes */
long long FUN_100426b4(short *param_1,short param_2)

{
  int *piVar1;
  long long uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  piVar1 = piRam1011758c;
  if (param_1[2] == *(short *)(param_2 * 0xd6 + *piRam1011758c + 10)) {
    uVar2 = 0;
    iVar3 = *piRam1011758c + param_2 * 0xd6;
    if ((((param_1[3] == *(short *)(iVar3 + 0xc)) && (param_1[5] == *(short *)(iVar3 + 2))) &&
        (param_1[4] == *(short *)(iVar3 + 4))) &&
       (iVar3 = FUN_100425c0(*param_1,param_1[1],param_2), iVar3 != -1)) {
      iVar4 = 0;
      if (iVar3 < 200) {
        do {
          *(char *)(*(int *)(param_1 + 6) + iVar4) =
               *(char *)(*piVar1 + param_2 * 0xd6 + iVar3 + 0xe);
          sVar5 = (short)iVar3 + 1;
          iVar3 = (int)sVar5;
          iVar4 = (int)(short)((short)iVar4 + 1);
        } while (sVar5 < 200);
      }
      *(short *)(*piVar1 + param_2 * 0xd6) = 2;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* Address: 0x100427cc Size: 272 bytes */
long long FUN_100427cc(long long param_1,short param_2)

{
  int *puVar1;
  int *piVar2;
  int *piVar3;
  int *puVar4;
  int *ppuVar5;
  int iVar6;
  short sVar7;
  long long uVar8;
  int **local_44;
  
  puVar4 = puRam10117598;
  piVar3 = piRam10117594;
  piVar2 = piRam10117588;
  puVar1 = (int *)*piRam10117588;
  uVar8 = 0;
  ppuVar5 = 0 /* TVect base */;
  if (puVar1 != (int *)0x0) {
    FUN_10002598(puVar1);
    ppuVar5 = local_44;
  }
  *(int *)(*(int*)((char*)ppuVar5 - 0xc5)) = *puVar1;
  puVar1 = (int *)*piVar3;
  if (puVar1 != (int *)0x0) {
    FUN_10002598(puVar1);
    ppuVar5 = local_44;
  }
  *puVar4 = *puVar1;
  *(int **)(*(int*)((char*)ppuVar5 - 0xc1)) = puVar4;
  if (param_2 == 0) {
    iVar6 = FUN_100426b4(param_1,0);
    if (iVar6 != 0) {
      uVar8 = 1;
    }
  }
  else {
    sVar7 = 1;
    do {
      iVar6 = FUN_100426b4(param_1,sVar7);
      if (iVar6 != 0) {
        uVar8 = 1;
        break;
      }
      sVar7 = sVar7 + 1;
    } while (sVar7 < 0x14);
  }
  iVar6 = *piVar3;
  if (iVar6 != 0) {
    FUN_10002ad8(iVar6);
  }
  if (*piVar2 != 0) {
    FUN_10002ad8(*piVar2);
  }
  return uVar8;
}

































































































































































































































/* Address: 0x10043248 Size: 1884 bytes */
short FUN_10043248(short *param_1,short param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int bVar7;
  int bVar8;
  int iVar9;
  int iVar10;
  int *puVar11;
  int *piVar12;
  short *psVar13;
  short sVar14;
  short *psVar15;
  short sVar17;
  int iVar16;
  short sVar18;
  short sVar20;
  int iVar19;
  short sVar21;
  long long lVar22;
  unsigned short local_88;
  short local_86;
  short local_84;
  short local_80;
  short local_7a;
  short local_74;
  short local_6e;
  short local_68;
  short local_62;
  short local_58;
  
  psVar13 = psRam101175a4;
  piVar12 = piRam101175a0;
  puVar11 = puRam1011759c;
  iVar10 = iRam10115ec0;
  iVar9 = iRam10115ebc;
  local_86 = 1;
  local_84 = 3;
  bVar7 = false;
  if ((*psRam10115eb4 == 0) || (param_2 == 0)) {
    if ((param_1[4] & 0x10U) == 0) {
      if (param_2 == 0) {
        sVar17 = 0;
      }
      else {
        sVar17 = *psRam101175a8;
      }
      *psRam101175a8 = sVar17;
      if (param_2 == 0) {
        local_80 = 6;
      }
      else if (*psRam10115eb4 == 0) {
        local_80 = 0x32;
      }
      else {
        local_80 = 0x14;
      }
    }
    else {
      *psRam101175a8 = 0;
      local_80 = *psRam101175ac;
    }
    local_7a = *param_1;
    if (param_1[2] < *param_1) {
      local_7a = param_1[2];
    }
    local_7a = local_7a - local_80;
    if (local_7a < 0) {
      local_7a = 0;
    }
    local_74 = param_1[1];
    if (param_1[3] < param_1[1]) {
      local_74 = param_1[3];
    }
    local_74 = local_74 - local_80;
    if (local_74 < 0) {
      local_74 = 0;
    }
    local_6e = *param_1;
    if (*param_1 < param_1[2]) {
      local_6e = param_1[2];
    }
    local_6e = local_6e + local_80;
    if (0x6f < local_6e) {
      local_6e = 0x6f;
    }
    local_68 = param_1[1];
    if (param_1[1] < param_1[3]) {
      local_68 = param_1[3];
    }
    local_68 = local_68 + local_80;
    if (0x9b < local_68) {
      local_68 = 0x9b;
    }
    sVar17 = *param_1;
    sVar3 = param_1[1];
    do {
      bVar8 = false;
      if (((param_1[4] & 0x10U) != 0) && (*psRam101175a8 == local_80)) {
        return local_86;
      }
      local_62 = param_1[2] + *psRam101175a8;
      if (0x6f < local_62) {
        local_62 = 0x6f;
      }
      sVar14 = param_1[3] + *psRam101175a8;
      if (0x9b < sVar14) {
        sVar14 = 0x9b;
      }
      if (local_6e <= local_62) {
        local_62 = local_6e;
      }
      sVar21 = local_68;
      if (sVar14 < local_68) {
        sVar21 = sVar14;
      }
      if (local_74 < 0) {
        local_58 = 0;
      }
      else {
        local_58 = local_74;
      }
      lVar22 = (long long)(short)(param_1[2] - *psRam101175a8);
      if (lVar22 < 0) {
        lVar22 = 0;
      }
      if ((int)lVar22 <= (int)local_7a) {
        lVar22 = (long long)local_7a;
      }
      if ((int)lVar22 <= (int)local_62) {
        do {
          iVar6 = (int)lVar22;
          iVar5 = *(int *)*puVar11 + iVar6 * 0x138;
          sVar14 = param_1[3] - *psRam101175a8;
          if ((short)(param_1[3] - *psRam101175a8) < local_58) {
            sVar14 = local_58;
          }
          for (; sVar14 <= sVar21; sVar14 = sVar14 + 1) {
            sVar4 = *(short *)(iVar5 + sVar14 * 2);
            if (sVar4 < 1) {
              bVar1 = *(unsigned char *)(*piVar12 + iVar6 * 0x9c + (int)sVar14);
              *(short *)(sVar14 * 2 + iVar5) = -sVar4;
              bVar8 = true;
              if (*psRam10115eb4 == 0) {
                sVar20 = 0;
              }
              else {
                sVar20 = 9;
              }
              iVar16 = (int)sVar20;
              if (sVar14 == 0) {
                if (iVar6 == 0) {
                  iVar16 = 1;
                }
                else if (iVar6 == 0x6f) {
                  iVar16 = 3;
                }
                else {
                  iVar16 = 2;
                }
              }
              else if (sVar14 == 0x9b) {
                if (iVar6 == 0) {
                  iVar16 = 6;
                }
                else if (iVar6 == 0x6f) {
                  iVar16 = 8;
                }
                else {
                  iVar16 = 7;
                }
              }
              else if (iVar6 == 0) {
                iVar16 = 4;
              }
              else if (iVar6 == 0x6f) {
                iVar16 = 5;
              }
              iVar16 = (int)*(short *)(iVar16 * 2 + iRam10115ec4);
              sVar20 = *(short *)(iVar16 * 2 + iVar10);
              while (sVar20 != -10) {
                sVar20 = (short)lVar22 + sVar20;
                iVar19 = (int)(short)((short)iVar16 + 1);
                sVar18 = sVar14 + *(short *)(iVar16 * 2 + iVar9);
                iVar16 = *(int *)*puVar11 + sVar20 * 0x138;
                psVar15 = (short *)(iVar16 + sVar18 * 2);
                if (*(short *)(iVar16 + sVar18 * 2) != 0x7531) {
                  bVar2 = *(unsigned char *)(*piVar12 + sVar20 * 0x9c + (int)sVar18);
                  local_88 = bVar2 & 7;
                  if (((int)sVar20 == (int)sVar17) && (sVar18 == sVar3)) {
                    if (((param_1[5] != 1) || ((bVar1 & 0x10) != 0)) ||
                       (((bVar2 & 0x10) != 0 || ((bVar2 & 8) == (bVar1 & 8))))) {
                      local_88 = 1;
LAB_10043894:
                      sVar20 = -*psVar15;
                      if (-*psVar15 < *psVar15) {
                        sVar20 = *psVar15;
                      }
                      if ((int)-sVar4 + (int)(short)local_88 < (int)sVar20) {
                        *psVar15 = sVar4 - local_88;
                      }
                    }
                  }
                  else {
                    if (param_1[5] == 2) {
                      if (((bVar2 & 8) == 0) || ((bVar2 & 0x10) != 0)) {
                        if ((bVar2 & 7) == 0) {
                          local_88 = 2;
                        }
                        if (2 < local_88) {
                          local_88 = 2;
                        }
                      }
                      else {
                        local_88 = 2;
                      }
                      goto LAB_10043894;
                    }
                    if (param_1[5] == 0) {
                      if (((bVar2 & 8) != 0) || ((bVar2 & 0x80) != 0)) goto LAB_10043894;
                      *psVar15 = 0x7531;
                    }
                    else if ((((bVar1 & 0x10) != 0) || ((bVar2 & 0x10) != 0)) ||
                            ((bVar2 & 8) == (bVar1 & 8))) {
                      if (((param_1[4] != 0) && (2 < local_88)) &&
                         ((((param_1[4] & 1U) != 0 && ((bVar2 & 0x20) != 0)) ||
                          (((param_1[4] & 2U) != 0 && ((bVar2 & 0x40) != 0)))))) {
                        local_88 = 2;
                      }
                      if (((((bVar1 & 8) == 0) || ((bVar1 & 0x10) != 0)) && ((bVar2 & 8) != 0)) &&
                         ((bVar2 & 0x10) == 0)) {
                        local_88 = local_88 + *psVar13;
                      }
                      goto LAB_10043894;
                    }
                  }
                }
                iVar16 = iVar19;
                sVar20 = *(short *)(iVar19 * 2 + iVar10);
              }
              if (((iVar6 == sVar17) && (sVar14 == sVar3)) && ((param_1[4] & 0x10U) == 0)) {
                bVar7 = true;
              }
            }
          }
          sVar14 = (short)lVar22 + 1;
          lVar22 = (long long)sVar14;
        } while (sVar14 <= local_62);
      }
      if ((bVar7) && (local_84 != 0)) {
        local_84 = local_84 + -1;
      }
      *psRam101175a8 = *psRam101175a8 + 1;
      if ((!bVar8) && (local_84 = 0, !bVar7)) {
        local_86 = 0;
      }
    } while (local_84 != 0);
  }
  else {
    local_86 = 0;
  }
  return local_86;
}

/* Address: 0x100439a4 Size: 736 bytes */
void FUN_100439a4(short *param_1)

{
  unsigned char bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int *puVar5;
  int *piVar6;
  unsigned long long uVar7;
  short sVar9;
  int iVar8;
  short sVar10;
  short sVar11;
  unsigned int unaff_r15;
  unsigned short unaff_r16;
  unsigned long long uVar12;
  unsigned char bVar13;
  unsigned long long uVar14;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  int iVar18;
  unsigned long long uVar19;
  int iVar20;
  unsigned int local_6c;
  short local_48;
  
  piVar6 = piRam101175a0;
  puVar5 = puRam1011759c;
  psVar4 = psRam10115eb4;
  sVar9 = FUN_10003768(*(short *)(*(int *)*puRam1011759c + *param_1 * 0x138 + param_1[1] * 2));
  uVar7 = (unsigned long long)local_6c;
  local_48 = 0;
  uVar14 = (long long)param_1[1];
  iVar15 = (int)*param_1;
  do {
    bVar13 = 0;
    if ((iVar15 == param_1[2]) && ((int)uVar14 == (int)param_1[3])) {
      return;
    }
    if (param_1[5] == 1) {
      bVar13 = *(unsigned char *)(*piVar6 + iVar15 * 0x9c + (int)uVar14);
      unaff_r16 = bVar13 & 8;
      bVar13 = bVar13 & 0x10;
    }
    iVar8 = FUN_100184dc(iVar15,uVar14,param_1[2],param_1[3]);
    uVar12 = 0xffffffffffffffff;
    iVar16 = -1;
    iVar18 = 0;
    do {
      iVar3 = (int)uVar7;
      uVar17 = iVar8 + *(short *)(iVar18 * 2 + *(int *)(iVar3 + -0x19d8));
      uVar17 = (unsigned int)(short)((short)uVar17 -
                            (short)(((long long)((int)uVar17 >> 3) +
                                     (unsigned long long)((int)uVar17 < 0 && (uVar17 & 7) != 0) & 0xffffffff)
                                   << 3));
      sVar10 = (short)iVar15 + *(short *)(uVar17 * 2 + *(int *)(iVar3 + -0x19d4));
      iVar20 = (int)sVar10;
      sVar11 = (short)uVar14 + *(short *)(uVar17 * 2 + *(int *)(iVar3 + -0x19d0));
      uVar19 = (unsigned long long)sVar11;
      if (((((*psVar4 != 0) && ((uVar17 & 1) != 0)) &&
           (((*(unsigned char *)(*piVar6 + sVar10 * 0x9c + (int)sVar11) & 8) == 0 ||
            (*(char *)(**(int **)(iVar3 + -0x544) +
                       (*(unsigned int *)(**(int **)(iVar3 + -0x548) +
                                  (int)(((uVar19 & 0x1fffffff) * 8 - uVar19 & 0xffffffff) << 5) +
                                 iVar20 * 2) >> 0x18) + 0x711) == '\x01')))) ||
          (((sVar10 < 0 || (0x6f < sVar10)) || (sVar11 < 0)))) ||
         (((0x9b < sVar11 ||
           (sVar2 = *(short *)(*(int *)*puVar5 + iVar20 * 0x138 + (int)((uVar19 & 0xffffffff) << 1))
           , sVar2 == 30000)) || (sVar2 == 0x7531)))) goto LAB_10043c20;
      if (((bVar13 == 0) &&
          (bVar1 = *(unsigned char *)(*piVar6 + sVar10 * 0x9c + (int)sVar11), (bVar1 & 0x10) == 0)) &&
         (param_1[5] == 1)) {
        if (unaff_r16 == 0) {
          if ((*(unsigned char *)(*piVar6 + iVar20 * 0x9c + (int)sVar11) & 8) == 0) goto LAB_10043bc8;
        }
        else if ((bVar1 & 8) != 0) goto LAB_10043bc8;
      }
      else {
LAB_10043bc8:
        sVar10 = FUN_10003768(*(short *)
                               (*(int *)*puVar5 + iVar20 * 0x138 + (int)((uVar19 & 0xffffffff) << 1)
                               ));
        uVar7 = (unsigned long long)local_6c;
        if ((sVar10 < sVar9) || (((*psVar4 != 0 && (iVar16 == -1)) && (sVar10 == sVar9)))) {
          uVar12 = uVar19;
          unaff_r15 = uVar17;
          sVar9 = sVar10;
          iVar16 = iVar20;
        }
      }
LAB_10043c20:
      sVar10 = (short)iVar18 + 1;
      iVar18 = (int)sVar10;
    } while (sVar10 < 8);
    if ((local_48 < 0xc6) && (iVar16 != -1)) {
      *(char *)(*(int *)(param_1 + 6) + (int)local_48) = (char)unaff_r15;
      local_48 = local_48 + 1;
      uVar14 = uVar12;
      iVar15 = iVar16;
    }
    else {
      param_1[2] = (short)iVar15;
      param_1[3] = (short)uVar14;
    }
  } while( true );
}

/* Address: 0x10043c84 Size: 476 bytes */
void FUN_10043c84(short param_1,short *param_2,short param_3)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  piVar4 = piRam1011758c;
  piVar3 = piRam10117588;
  piVar2 = (int *)*piRam10117588;
  iVar9 = -1;
  sVar7 = 10000;
  bVar1 = true;
  if (piVar2 != (int *)0x0) {
    FUN_10002598(piVar2);
  }
  *piVar4 = *piVar2;
  if (param_3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar8 = 1;
    do {
      iVar6 = iVar8;
      if (*(short *)(*piVar4 + iVar8 * 0xd6) == 0) break;
      iVar6 = *piVar4 + iVar8 * 0xd6;
      sVar5 = FUN_1000a884(*(short *)(iVar6 + 10),*(short *)(iVar6 + 0xc),
                           *(short *)(iVar6 + 6),*(short *)(iVar6 + 8));
      if (sVar5 < sVar7) {
        iVar9 = iVar8;
        sVar7 = sVar5;
      }
      sVar5 = (short)iVar8 + 1;
      iVar8 = (int)sVar5;
      iVar6 = -1;
    } while (sVar5 < 0x14);
    if (iVar6 == -1) {
      bVar1 = iVar9 != -1;
      if (sVar7 < param_1) {
        iVar6 = iVar9;
      }
      if (iVar6 == -1) {
        bVar1 = false;
      }
    }
  }
  if (bVar1) {
    iVar9 = 199;
    do {
      *(char *)(*piVar4 + iVar6 * 0xd6 + iVar9 + 0xe) =
           *(char *)(*(int *)(param_2 + 6) + iVar9);
      bVar1 = iVar9 != 0;
      iVar9 = (int)(short)((short)iVar9 + -1);
    } while (bVar1);
    iVar6 = iVar6 * 0xd6;
    *(short *)(*piVar4 + iVar6) = 2;
    *(short *)(iVar6 + *piVar4 + 2) = param_2[5];
    *(short *)(iVar6 + *piVar4 + 4) = param_2[4];
    *(short *)(iVar6 + *piVar4 + 6) = *param_2;
    *(short *)(iVar6 + *piVar4 + 8) = param_2[1];
    *(short *)(iVar6 + *piVar4 + 10) = param_2[2];
    *(short *)(iVar6 + *piVar4 + 0xc) = param_2[3];
  }
  if (*piVar3 != 0) {
    FUN_10002ad8(*piVar3);
  }
  return;
}





































































































































































































































































































/* Address: 0x10043e60 Size: 688 bytes */
long long FUN_10043e60(short *param_1)

{
  int bVar1;
  int *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *puVar6;
  int *puVar7;
  int *piVar8;
  int *ppuVar9;
  long long uVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  long long uVar14;
  
  piVar8 = piRam101175a0;
  puVar7 = puRam1011759c;
  puVar6 = puRam10117598;
  piVar5 = piRam10117594;
  piVar4 = piRam10117590;
  ppuVar9 = 0 /* TVect base */;
  uVar10 = FUN_1000a884(param_1[2],param_1[3],*param_1,param_1[1]);
  uVar14 = 0;
  if (((((short)param_1[2] < 0) || ((short)param_1[3] < 0)) || (0x6f < (short)param_1[2])) ||
     (0x9b < (short)param_1[3])) {
    return 0;
  }
  if (*(short *)(*(int*)((char*)ppuVar9 - 0x67f)) == 0) {
    FUN_100424e4();
  }
  iVar13 = 199;
  do {
    *(char *)(*(int *)(param_1 + 6) + iVar13) = 0xff;
    bVar1 = iVar13 != 0;
    iVar13 = (int)(short)((short)iVar13 + -1);
  } while (bVar1);
  iVar13 = (int)uVar10;
  if ((param_1[4] & 0x10) == 0) {
    iVar11 = FUN_100427cc(param_1,0);
    if (iVar11 != 0) {
      return 1;
    }
    if ((0xe < iVar13) && (iVar11 = FUN_100427cc(param_1,1), iVar11 != 0)) {
      return 1;
    }
    if ((iVar13 == 1) && (iVar11 = FUN_100428dc(param_1), iVar11 != 0)) {
      return 1;
    }
  }
  puVar2 = (int *)*piVar5;
  if (puVar2 != (int *)0x0) {
    FUN_10002598(puVar2);
  }
  *puVar6 = *puVar2;
  *puVar7 = puVar6;
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    FUN_10002598(piVar3);
  }
  *piVar8 = *piVar3;
  FUN_10042ee4(param_1,uVar10);
  if ((*(short *)(*(int *)*puVar7 + (short)param_1[2] * 0x138 + (short)param_1[3] * 2) != 0x7531) ||
     ((*(unsigned char *)(*piVar8 + (short)param_1[2] * 0x9c + (int)(short)param_1[3]) & 0x80) != 0)) {
    *(short *)(*(int *)*puVar7 + (short)param_1[2] * 0x138 + (short)param_1[3] * 2) = 0xffff;
    sVar12 = 0;
    do {
      uVar14 = FUN_10043248(param_1,sVar12);
      sVar12 = sVar12 + 1;
      if ((int)uVar14 != 0) break;
    } while (sVar12 < 2);
    if (((int)uVar14 == 1) && ((param_1[4] & 0x10) == 0)) {
      FUN_100439a4(param_1);
      if (iVar13 < 0xf) {
        FUN_10043c84(uVar10,param_1,0);
      }
      else {
        FUN_10043c84(uVar10,param_1,1);
      }
    }
  }
  FUN_10042d2c(param_1,0);
  iVar13 = *piVar5;
  if (iVar13 != 0) {
    FUN_10002ad8(iVar13);
  }
  iVar13 = *piVar4;
  if (iVar13 != 0) {
    FUN_10002ad8(iVar13);
  }
  return uVar14;
}





















































































































































































































































































































































































/* Address: 0x100445fc Size: 300 bytes */
unsigned char FUN_100445fc(int param_1,short param_2,short param_3,short param_4,short *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  
  bVar1 = *(unsigned char *)(*piRam101175a0 + param_2 * 0x9c + (int)param_3);
  bVar2 = bVar1 & 7;
  if (*param_5 != 0) {
    return 0x80;
  }
  if (*(short *)(param_1 + 10) == 2) {
    if (((bVar1 & 8) != 0) && ((bVar1 & 0x10) == 0)) {
      return 2;
    }
    if ((bVar1 & 7) == 0) {
      bVar2 = 2;
    }
    if (bVar2 < 3) {
      return bVar2;
    }
    return 2;
  }
  if (*(short *)(param_1 + 10) != 1) {
    return bVar2;
  }
  if ((bVar1 & 0x10) == 0) {
    if (param_4 == 0) {
      if ((bVar1 & 8) == 0) goto LAB_100446d8;
    }
    else if ((bVar1 & 8) != 0) goto LAB_100446d8;
    *param_5 = 1;
  }
LAB_100446d8:
  if (((*(unsigned short *)(param_1 + 8) != 0) && (2 < bVar2)) &&
     ((((*(unsigned short *)(param_1 + 8) & 1) != 0 && ((bVar1 & 0x20) != 0)) ||
      (((*(unsigned short *)(param_1 + 8) & 2) != 0 && ((bVar1 & 0x40) != 0)))))) {
    bVar2 = 2;
  }
  return bVar2;
}

/* Address: 0x10044728 Size: 444 bytes */
short FUN_10044728(short *param_1,short param_2,int param_3)

{
  int bVar1;
  unsigned short uVar2;
  int *puVar3;
  int *puVar4;
  int *piVar5;
  int *piVar6;
  int *ppuVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  char uVar12;
  int iVar13;
  int **local_64;
  short local_3e;
  short local_3c;
  short local_3a [29];
  
  puVar4 = puRam10117598;
  piVar6 = piRam10117594;
  piVar5 = piRam10117590;
  local_3a[0] = *param_1;
  local_3c = param_1[1];
  uVar2 = param_1[4];
  local_3e = 0;
  sVar11 = 0;
  sVar10 = 0;
  if (param_3 != 0) {
    iVar13 = 99;
    do {
      *(char *)(param_3 + iVar13) = 0xff;
      bVar1 = iVar13 != 0;
      iVar13 = (int)(short)((short)iVar13 + -1);
    } while (bVar1);
  }
  puVar3 = (int *)*piVar6;
  ppuVar7 = 0 /* TVect base */;
  if (puVar3 != (int *)0x0) {
    FUN_10002598(puVar3);
    ppuVar7 = local_64;
  }
  *puVar4 = *puVar3;
  *(int **)(*(int*)((char*)ppuVar7 - 0xc1)) = puVar4;
  puVar4 = (int *)*piVar5;
  if (puVar4 != (int *)0x0) {
    FUN_10002598(puVar4);
    ppuVar7 = local_64;
  }
  *(int *)(*(int*)((char*)ppuVar7 - 0xc0)) = *puVar4;
  iVar13 = 0;
  do {
    if ((*(char *)(*(int *)(param_1 + 6) + iVar13) == -1) ||
       (iVar8 = FUN_10017170(local_3a,&local_3c,*(char *)(*(int *)(param_1 + 6) + iVar13)),
       iVar8 == 0)) break;
    sVar9 = FUN_100445fc(param_1,local_3a[0],local_3c,uVar2 & 8,&local_3e);
    sVar10 = sVar10 + sVar9;
    if ((param_3 != 0) && (iVar13 < 100)) {
      if (sVar10 < 0xff) {
        uVar12 = (char)sVar10;
      }
      else {
        uVar12 = 0xff;
      }
      *(char *)(param_3 + iVar13) = uVar12;
    }
    if (sVar10 <= param_2) {
      sVar11 = sVar11 + 1;
    }
    sVar9 = (short)iVar13 + 1;
    iVar13 = (int)sVar9;
  } while (sVar9 < 100);
  iVar13 = *piVar6;
  if (iVar13 != 0) {
    FUN_10002ad8(iVar13);
  }
  iVar13 = *piVar5;
  if (iVar13 != 0) {
    FUN_10002ad8(iVar13);
  }
  return sVar11;
}













































































































































































































































































































































/* FUN_100448e4 defined elsewhere */


/* FUN_10044950 defined elsewhere */


/* FUN_100449bc defined elsewhere */






















































/* Address: 0x10045170 Size: 132 bytes */
void FUN_10045170()

{
  unsigned int uVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  
  psVar3 = psRam10115ee8;
  iVar2 = iRam10115ee4;
  FUN_100099cc();
  iVar5 = 0;
  if (0 < *psVar3) {
    do {
      uVar1 = *(unsigned int *)(iVar5 * 0x14 + iVar2);
      if (((uVar1 >> 0x1d & 1) != 0) && (uVar1 >> 0x1e != 0)) {
        FUN_100450f4(iVar5);
      }
      sVar4 = (short)iVar5 + 1;
      iVar5 = (int)sVar4;
    } while (sVar4 < *psVar3);
  }
  return;
}

/* Address: 0x100451f4 Size: 184 bytes */
void FUN_100451f4(short param_1)

{
  int iVar1;
  long long uVar2;
  int iVar3;
  unsigned long long uVar4;
  
  iVar1 = iRam10115ee4;
  uVar4 = (unsigned long long)param_1;
  uVar2 = FUN_10001290(*(int *)
                        (*(int *)((int)(((uVar4 & 0x3fffffff) * 4 + uVar4 & 0xffffffff) << 2) +
                                  iRam10115ee4 + 4) + 0x10));
  iVar3 = FUN_10001d70(uVar2);
  if (iVar3 == 0) {
    FUN_10044d8c(uVar4);
    FUN_10001d70(uVar2);
  }
  iVar3 = (int)(((uVar4 & 0x3fffffff) * 4 + uVar4 & 0x3fffffff) << 2);
  if ((*(unsigned int *)(iVar3 + iVar1) >> 0x1a & 1) != 0) {
    FUN_10001290(*(int *)(*(int *)(iVar3 + iVar1 + 0xc) + 0x10));
    FUN_10001d70();
  }
  return;
}

































































































/* Address: 0x1004530c Size: 228 bytes */
void FUN_1004530c(short param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned long long uVar4;
  char auStack_148 [256];
  char auStack_48 [72];
  
  iVar3 = iRam10115ee4;
  uVar4 = (unsigned long long)param_1;
  if (*(int *)(*(int *)((int)(((uVar4 & 0x3fffffff) * 4 + uVar4 & 0xffffffff) << 2) + iRam10115ee4 +
                       4) + 0x10) == 0) {
    FUN_10001dd0(auStack_48,(unsigned long long)uRam10115ed8 + 0xec,uVar4);
    FUN_100b19f4(auStack_148,auStack_48);
    FUN_100b1c84(auStack_148);
    FUN_100023b8();
  }
  else {
    iVar2 = (int)(((uVar4 & 0x3fffffff) * 4 + uVar4 & 0x3fffffff) << 2);
    iVar1 = iVar2 + iRam10115ee4;
    FUN_10001290(*(int *)(*(int *)(iVar1 + 4) + 0x10));
    FUN_10003468();
    if ((*(unsigned int *)(iVar2 + iVar3) >> 0x1a & 1) != 0) {
      FUN_10001290(*(int *)(*(int *)(iVar1 + 0xc) + 0x10));
      FUN_10003468();
    }
  }
  return;
}





















































































































































































/* Address: 0x100462c8 Size: 212 bytes */
void FUN_100462c8(short param_1)

{
  short sVar1;
  int iVar2;
  unsigned long long uVar3;
  
  uVar3 = (unsigned long long)param_1;
  if ((*(unsigned int *)((int)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 2) + iRam10115ee4) >> 0x1d
      & 1) == 0) {
    iVar2 = 0;
    if (0 < *psRam10115ee8) {
      do {
        if ((*(unsigned int *)(iVar2 * 0x14 + iRam10115ee4) >> 0x1d & 1) != 0) {
          if (*(char *)(iVar2 * 0x14 + iRam10115ee4 + 8) ==
              *(char *)((int)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 2) + iRam10115ee4 +
                       8)) {
            FUN_100450f4(iVar2);
            break;
          }
        }
        sVar1 = (short)iVar2 + 1;
        iVar2 = (int)sVar1;
      } while (sVar1 < *psRam10115ee8);
    }
    FUN_10044d8c(uVar3);
  }
  else {
    FUN_10045f0c(uVar3);
  }
  return;
}

/* FUN_100479f4 defined elsewhere */


/* FUN_10049010 defined elsewhere */


/* Address: 0x10049e68 Size: 84 bytes */
void FUN_10049e68()

{
  int *piVar1;
  
  piVar1 = piRam10115f0c;
  if (*piRam10115f0c != 0) {
    FUN_100ef510(*piRam10115f0c);
    *piVar1 = 0;
  }
  return;
}

/* Address: 0x1004a0c4 Size: 180 bytes */
int FUN_1004a0c4(short param_1,short *param_2,short *param_3,short *param_4,
                short *param_5,short *param_6)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = piRam101175d0;
  FUN_10048ccc();
  iVar4 = 0;
  do {
    iVar3 = *piVar1 + iVar4 * 0x3e;
    if (*(short *)(*piVar1 + iVar4 * 0x3e) == param_1) {
      *param_5 = *(short *)(iVar3 + 0x1e);
      *param_2 = *(short *)(iVar3 + 0x18);
      *param_3 = *(short *)(iVar3 + 0x16);
      *param_4 = *(short *)(iVar3 + 0x1a);
      *param_6 = *(short *)(iVar3 + 0x1c);
      break;
    }
    sVar2 = (short)iVar4 + 1;
    iVar4 = (int)sVar2;
  } while (sVar2 < 0x1d);
  FUN_10049010();
  return iVar4;
}

/* Address: 0x1004a178 Size: 164 bytes */
void FUN_1004a178(short param_1,short *param_2,short *param_3,short *param_4,
                 short *param_5)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = piRam101175d0;
  FUN_10048ccc();
  iVar3 = 0;
  do {
    iVar4 = *piVar1 + iVar3 * 0x3e;
    if (*(short *)(*piVar1 + iVar3 * 0x3e) == param_1) {
      *param_2 = *(short *)(iVar4 + 0x18);
      *param_3 = *(short *)(iVar4 + 0x16);
      *param_4 = *(short *)(iVar4 + 0x1a);
      *param_5 = *(short *)(iVar4 + 0x1c);
      break;
    }
    sVar2 = (short)iVar3 + 1;
    iVar3 = (int)sVar2;
  } while (sVar2 < 0x1d);
  FUN_10049010();
  return;
}

/* Address: 0x1004a21c Size: 140 bytes */
int FUN_1004a21c(short param_1)

{
  int *piVar1;
  int uVar2;
  short sVar3;
  int iVar4;
  
  uVar2 = uRam101175d4;
  piVar1 = piRam101175d0;
  FUN_10048ccc();
  iVar4 = 0;
  do {
    if (*(short *)(*piVar1 + iVar4 * 0x3e) == param_1) {
      FUN_10001e78(uVar2,*piVar1 + iVar4 * 0x3e + 2);
      break;
    }
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
  } while (sVar3 < 0x1d);
  FUN_10049010();
  return uVar2;
}





































































































































/* Address: 0x1004f620 Size: 68 bytes */
void FUN_1004f620(short param_1,short param_2)

{
  FUN_1004f438(param_1,param_2,1);
  FUN_10060608(1,1,0);
  return;
}

/* Address: 0x10050bb0 Size: 92 bytes */
void FUN_10050bb0(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar1 = iRam101175ec;
  *puRam10115f40 = 4;
  FUN_1004f704();
  iVar3 = 0;
  do {
    *(short *)(iVar3 * 2 + param_1) = *(short *)(iVar3 * 2 + iVar1);
    sVar2 = (short)iVar3 + 1;
    iVar3 = (int)sVar2;
  } while (sVar2 < 8);
  return;
}

/* Address: 0x100513b4 Size: 292 bytes */
void FUN_100513b4(long long param_1,long long param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int *puVar3;
  int local_5c;
  short local_38;
  short local_36;
  int local_30;
  int local_2c;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  piVar2 = (int *)FUN_10000720(param_3);
  iVar1 = *piVar2;
  local_28 = *(short *)(iVar1 + 2);
  local_26 = *(short *)(iVar1 + 4);
  local_24 = *(short *)(iVar1 + 6);
  local_22 = *(short *)(iVar1 + 8);
  puVar3 = (int *)FUN_100f56e4(0xdc);
  if (puVar3 != (int *)0x0) {
    FUN_100cdb5c(puVar3);
    *puVar3 = *(int *)(local_5c + -0x1948);
    *(short *)(puVar3 + 0x2c) = 0;
    *(short *)((int)puVar3 + 0xb2) = 0;
    *(short *)(puVar3 + 0x2d) = 0;
    puVar3[0x31] = 0;
    *(short *)(puVar3 + 0x32) = 0;
    puVar3[0x36] = 0;
  }
  FUN_100b08d4(&local_38,&local_28);
  local_30 = (int)local_38;
  local_2c = (int)local_36;
  FUN_100d08c4(puVar3,param_1,param_2,&local_30,5,5,param_3);
  puVar3[6] = 0x70726f67;
  *(short *)((int)puVar3 + 0xb2) = 100;
  FUN_100861b8(puVar3,0,1);
  return;
}

/* Address: 0x100514d8 Size: 284 bytes */
void FUN_100514d8(int *param_1,short param_2)

{
  long long uVar1;
  int *piVar2;
  int local_14c;
  char auStack_128 [256];
  char auStack_28 [40];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x70726f67);
  if ((int)uVar1 != 0) {
    FUN_100861b8(uVar1,param_2,1);
  }
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73747235);
  if (piVar2 != (int *)0x0) {
    FUN_10001dd0(auStack_28,*(int *)(local_14c + -0x194c),param_2);
    FUN_100b19f4(auStack_128,auStack_28);
    FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_128,0);
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  }
  return;
}





































































































































/* Address: 0x100516c0 Size: 312 bytes */
void FUN_100516c0()

{
  int *puVar1;
  
  puVar1 = puRam10115f7c;
  FUN_100514d8(*puRam10115f7c,0);
  FUN_100a6298();
  FUN_100515f4();
  FUN_100a01e8();
  FUN_100514d8(*puVar1,10);
  FUN_100a3a80();
  FUN_100514d8(*puVar1,0x14);
  FUN_100abcec();
  FUN_100514d8(*puVar1,0x1e);
  FUN_100a9c08();
  FUN_100514d8(*puVar1,0x28);
  FUN_100a271c();
  FUN_100514d8(*puVar1,0x32);
  FUN_100a66a8();
  FUN_100514d8(*puVar1,0x3c);
  FUN_100a6ae8();
  FUN_100514d8(*puVar1,0x46);
  FUN_100a6f38();
  FUN_100514d8(*puVar1,0x50);
  FUN_100aafb8();
  FUN_100514d8(*puVar1,0x5a);
  FUN_100a6204();
  FUN_100514d8(*puVar1,100);
  return;
}

/* Address: 0x10051d60 Size: 4 bytes */
void FUN_10051d60()

{
  return;
}

/* Address: 0x10051d64 Size: 96 bytes */
void FUN_10051d64()

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  do {
    sVar1 = 0;
    do {
      FUN_10051d60(sVar2,sVar1);
      sVar1 = sVar1 + 1;
    } while (sVar1 < 0x9c);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 0x70);
  return;
}

































































































/* Address: 0x10051dc8 Size: 84 bytes */
void FUN_10051dc8(short *param_1,short *param_2)

{
  if (*param_1 < 1) {
    *param_1 = 0;
  }
  if (*param_2 < 1) {
    *param_2 = 0;
  }
  if (0x6f < *param_1) {
    *param_1 = 0x6f;
  }
  if (0x9b < *param_2) {
    *param_2 = 0x9b;
  }
  return;
}

/* Address: 0x10051e1c Size: 380 bytes */
void FUN_10051e1c(short *param_1,short *param_2,short param_3,short param_4)

{
  short sVar2;
  short sVar3;
  int iVar1;
  short sVar4;
  short sVar5;
  
  sVar2 = FUN_1005f230(1,param_3,0);
  sVar3 = FUN_1005f230(1,3,0xfffffffffffffffe);
  *param_1 = *param_1 + sVar3 * sVar2;
  sVar2 = FUN_1005f230(1,param_3,0);
  sVar3 = FUN_1005f230(1,3,0xfffffffffffffffe);
  *param_2 = *param_2 + sVar3 * sVar2;
  iVar1 = FUN_1005f230(1,100,0);
  if ((iVar1 < 0x1e) && (param_4 != 0)) {
    sVar2 = *param_1;
    sVar3 = *param_2;
    sVar5 = 0x6f - sVar2;
    sVar4 = 0x9b - sVar3;
    if ((sVar2 <= sVar3) && ((sVar2 <= sVar5 && (sVar2 <= sVar4)))) {
      *param_1 = 0;
    }
    if (((sVar3 <= sVar2) && (sVar3 <= sVar5)) && (sVar3 <= sVar4)) {
      *param_2 = 0;
    }
    if (((sVar5 <= sVar3) && (sVar5 <= sVar2)) && (sVar5 <= sVar4)) {
      *param_1 = 0x6f;
    }
    if (((sVar4 <= sVar3) && (sVar4 <= sVar2)) && (sVar4 <= sVar5)) {
      *param_2 = 0x9b;
    }
  }
  FUN_10051dc8(param_1,param_2);
  return;
}

/* FUN_10051f98 defined elsewhere */


































































































































































































/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10052184(long long param_1,short param_2,unsigned short param_3) { return 0; }

























































































































































































































































































































































































































































































































































































































/* Address: 0x100522dc Size: 204 bytes */
int * FUN_100522dc(int *param_1,unsigned short param_2,char param_3)

{
  int *piVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  FUN_100db2f4();
  if (param_3 == '\0') {
    piVar1 = (int *)FUN_100fa860(0);
    FUN_100fa8f8(piVar1,param_1);
  }
  else {
    piVar1 = (int *)FUN_1009cbcc(0,(param_2 & 2) != 0);
    FUN_100fa8f8(piVar1,param_1);
  }
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0),0);
  return piVar1;
}

/* FUN_100523a8 defined elsewhere */


/* FUN_10052490 defined elsewhere */


/* Address: 0x100524d4 Size: 68 bytes */
void FUN_100524d4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  }
  return;
}

/* Address: 0x10052518 Size: 96 bytes */
void FUN_10052518(int *param_1,long long param_2,short param_3)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xb0) + (int)param_1,param_2,param_3);
  }
  return;
}

/* Address: 0x100525a0 Size: 44 bytes */
short FUN_100525a0(unsigned short param_1)

{
  return param_1 * 0x100 + (param_1 >> 8);
}

/* Address: 0x100525cc Size: 60 bytes */
long long FUN_100525cc(int param_1)

{
  char local_8;
  char uStack_7;
  char uStack_6;
  char uStack_5;
  
  uStack_5 = (unsigned char)param_1;
  uStack_6 = (unsigned char)((unsigned int)param_1 >> 8);
  uStack_7 = (unsigned char)((unsigned int)param_1 >> 0x10);
  local_8 = (unsigned char)((unsigned int)param_1 >> 0x18);
  return (unsigned long long)uStack_5 * 0x1000000 + (unsigned long long)uStack_6 * 0x10000 +
         (unsigned long long)uStack_7 * 0x100 + (unsigned long long)local_8;
}

/* Address: 0x10052f6c Size: 112 bytes */
void FUN_10052f6c(long long param_1)

{
  short *psVar1;
  int *ppuVar2;
  char auStack_108 [264];
  
  psVar1 = psRam10115f68;
  ppuVar2 = 0 /* TVect base */;
  FUN_100b19f4(auStack_108,param_1);
  FUN_10090e0c(*(int *)(*(int*)((char*)ppuVar2 - 0x64f)),(long long)*psVar1 + 0x6c696e30,auStack_108,1);
  *psVar1 = *psVar1 + 1;
  return;
}

/* Address: 0x100534c8 Size: 880 bytes */
void FUN_100534c8(short param_1)

{
  int *piVar1;
  int *puVar2;
  int *piVar4;
  long long uVar3;
  int iVar5;
  int local_168;
  int local_164;
  char auStack_160 [16];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  char auStack_140 [256];
  short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  puVar2 = puRam10117370;
  piVar1 = piRam10115f64;
  piVar4 = (int *)FUN_10117884(*piRam10115f64 + (int)*(short *)(*(int *)*piRam10115f64 + 0x308),
                               0x70696374);
  if (piVar4 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar4 + 0xd8) + (int)piVar4,0);
  }
  piVar4 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x646f6e65);
  if (piVar4 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar4 + 0x660) + (int)piVar4,1,1);
    FUN_10117884((int)*(short *)(*piVar4 + 0xd8) + (int)piVar4,1);
  }
  if (param_1 != 0) {
    piVar4 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x74616b65);
    if (piVar4 == (int *)0x0) goto LAB_10053730;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x660),1,1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xd8),1);
  }
  if (piVar4 != (int *)0x0) {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x618),auStack_160);
    local_168 = 0xfffffffc;
    local_164 = 0xfffffffc;
    FUN_100e16b8(auStack_160,&local_168);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x350),auStack_160,0);
    local_150 = 4;
    local_14c = 4;
    local_148 = 4;
    local_144 = 4;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x780),&local_150,0);
    uVar3 = FUN_100b2bb4(0);
    FUN_100b444c(uVar3,0x6f75746c,1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x3f0),uVar3,0x7f,1);
    iVar5 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x7f8));
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x24) = piVar4[6];
    }
  }
LAB_10053730:
  if (*piVar1 != 0) {
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = *puVar2;
    *puVar2 = auStack_140;
    iVar5 = FUN_10000090(auStack_140);
    if (iVar5 == 0) {
      iVar5 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x810));
      FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x738));
      *piVar1 = 0;
      if (iVar5 == 0x646f6e65) {
        FUN_100532a4();
      }
      else {
        FUN_10053330();
      }
      *puVar2 = local_38;
    }
    else {
      piVar4 = (int *)*piVar1;
      if (piVar4 != (int *)0x0) {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738));
      }
      *piVar1 = 0;
      FUN_100db158(local_40,local_3c);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1005668c(int *param_1,int param_2) { }



















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10058c64 Size: 3864 bytes */
void FUN_10058c64(int *param_1,int param_2)

{
  int iVar1;
  long long uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *puVar6;
  int iVar7;
  
  FUN_100db26c(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,0xa0);
  iVar5 = 0;
  do {
    sVar3 = *(short *)(param_2 + iVar5 * 2 + 0xa0);
    if (sVar3 == 0xff) {
      sVar3 = 0;
    }
    else if (sVar3 == 0) {
      sVar3 = 0xf;
    }
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(sVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    sVar3 = *(short *)(param_2 + iVar5 * 2 + 0xb0);
    if (sVar3 == 0xff) {
      sVar3 = 0;
    }
    else if (sVar3 == 0) {
      sVar3 = 0xf;
    }
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(sVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0xc0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0xd0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0xe0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0xf0));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x100,0x10);
  puVar6 = (short *)(param_2 + 0x110);
  sVar3 = 0;
  do {
    iVar5 = *param_1;
    uVar2 = FUN_100525a0(*puVar6);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar2);
    sVar3 = sVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar3 < 0x12);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(char *)(param_2 + 0x134));
  puVar6 = (short *)(param_2 + 0x136);
  sVar3 = 0;
  do {
    iVar5 = *param_1;
    uVar2 = FUN_100525a0(*puVar6);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar2);
    sVar3 = sVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar3 < 0x27);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    iVar7 = param_2 + iVar5 * 0x14;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x184));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x186));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x188));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x18a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x18c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x18e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 400));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(char *)(iVar7 + 0x192));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(char *)(iVar7 + 0x193));
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x194));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x196));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x224,800);
  puVar6 = (short *)(param_2 + 0x544);
  sVar3 = 0;
  do {
    iVar5 = *param_1;
    uVar2 = FUN_100525a0(*puVar6);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar2);
    sVar3 = sVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar3 < 0x50);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x5e4,0x22c);
  iVar5 = *param_1;
  uVar2 = FUN_100525a0(*(short *)(param_2 + 0x810));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar2);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    iVar7 = param_2 + iVar5 * 0x20;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x812));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x814));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar7 + 0x816,0x17);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x82e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x830));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 0x28);
  iVar5 = 0;
  do {
    iVar7 = param_2 + iVar5 * 0x1e;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar7 + 0xd12,0x17);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0xd2a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0xd2c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0xd2e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 0x16);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0xfa6,0xa0);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0x1046));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 10);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0x105a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 100);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0x1122));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(param_2 + iVar5 * 2 + 0x1132));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    iVar7 = param_2 + iVar5 * 0xc;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1142));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1144));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1146));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1148));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x114a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x114c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar4 = 0;
    do {
      iVar7 = 0;
      do {
        iVar1 = *param_1;
        uVar2 = FUN_100525a0(*(short *)
                              (param_2 + iVar5 * 0x50 + iVar4 * 10 + iVar7 * 2 + 0x11a2));
        FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 400),uVar2);
        sVar3 = (short)iVar7 + 1;
        iVar7 = (int)sVar3;
      } while (sVar3 < 5);
      sVar3 = (short)iVar4 + 1;
      iVar4 = (int)sVar3;
    } while (sVar3 < 8);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  iVar5 = 0;
  do {
    iVar7 = param_2 + iVar5 * 0x2c;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar7 + 0x1422,3);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1426));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1428));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x142a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x142c));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar7 + 0x142e,0x20);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 8);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2 + 0x1582,0x40);
  iVar5 = *param_1;
  uVar2 = FUN_100525a0(*(short *)(param_2 + 0x1602));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 400),uVar2);
  iVar5 = 0;
  do {
    iVar4 = *param_1;
    iVar7 = param_2 + iVar5 * 0x42;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1604));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1606));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar7 + 0x1608,0x26);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x162e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),iVar7 + 0x1630,5);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1636));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1638));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x163a));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),*(unsigned int *)(iVar7 + 0x163c) >> 0x18)
    ;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),
                 *(unsigned int *)(iVar7 + 0x163c) >> 0x10 & 0xff);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x163e));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1640));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1642));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    iVar4 = *param_1;
    uVar2 = FUN_100525a0(*(short *)(iVar7 + 0x1644));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 400),uVar2);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 100);
  return;
}

/* Address: 0x1005cc8c Size: 140 bytes */
void FUN_1005cc8c()

{
  int *piVar1;
  int *piVar2;
  long long uVar3;
  
  piVar2 = piRam10115fa4;
  *puRam10115fa8 = 0;
  piVar1 = (int *)*piVar2;
  uVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x696e666f);
  if ((int)uVar3 != 0) {
    FUN_100810e8(uVar3);
  }
  piVar2 = (int *)*piVar2;
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
  return;
}

/* Address: 0x1005f144 Size: 92 bytes */
void FUN_1005f144(short param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = FUN_10001a88();
  uVar1 = FUN_10001a88();
  while (uVar1 < (unsigned int)(iVar2 + param_1 * 3)) {
    uVar1 = FUN_10001a88();
  }
  return;
}

/* Address: 0x1005f1a0 Size: 48 bytes */
void FUN_1005f1a0(short param_1,short param_2,long long param_3)

{
  FUN_10032860(param_1,param_2,param_3,0xfffffffffffffffe);
  return;
}

/* Address: 0x1005f1d0 Size: 48 bytes */
void FUN_1005f1d0(short param_1,short param_2,long long param_3)

{
  FUN_10032860(param_1,param_2,param_3,1);
  return;
}

/* Address: 0x1005f200 Size: 48 bytes */
void FUN_1005f200(short param_1,short param_2,long long param_3)

{
  FUN_10032860(param_1,param_2,param_3,0xffffffffffffffff);
  return;
}

/* Address: 0x1005f678 Size: 56 bytes */
void FUN_1005f678(short param_1,short param_2)

{
  FUN_1005f50c(0,param_1,param_2);
  return;
}

/* Address: 0x1005f6b0 Size: 56 bytes */
void FUN_1005f6b0(short param_1,short param_2)

{
  FUN_1005f50c(1,param_1,param_2);
  return;
}

/* Address: 0x10061980 Size: 280 bytes */
void FUN_10061980(short param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *ppuVar4;
  char cVar5;
  short sVar7;
  int iVar6;
  short sVar8;
  int **local_44;
  
  piVar1 = piRam101163b0;
  iVar3 = iRam10116004;
  piVar2 = piRam10115fe8;
  ppuVar4 = 0 /* TVect base */;
  if (*piRam101163b0 != 0) {
    *piRam10115fe8 = *piRam101163b0 + 0x80;
  }
  piVar1 = (int *)*piVar1;
  if (piVar1 == (int *)0x0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
    ppuVar4 = local_44;
  }
  if (cVar5 != '\0') {
    sVar7 = param_2 * 2 + -6;
    sVar8 = (short)(((short)(param_1 * 2 + -6) + 4 >> 3) << 3);
    if (sVar8 < 0) {
      sVar8 = 0;
    }
    if (sVar7 < 0) {
      sVar7 = 0;
    }
    FUN_100462c8(9);
    iVar6 = param_3 * 8 + iVar3;
    FUN_10009d38((*(int*)((char*)ppuVar4 - 0x8e)),*(short *)(param_3 * 8 + iVar3),*(short *)(iVar6 + 2),
                 *(short *)(iVar6 + 4),*(short *)(iVar6 + 6),*piVar2,sVar8,sVar7);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10064498(short param_1,short param_2,short param_3) { }


































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10066bf4 Size: 140 bytes */
unsigned long long FUN_10066bf4(unsigned long long param_1)

{
  if (((param_1 & 0xffffffff) != 0) || (param_1 = FUN_100f56e4(0x2a), (param_1 & 0xffffffff) != 0))
  {
    FUN_100ef8c8(param_1);
    FUN_100ef824(param_1 + 6);
    FUN_10000000(param_1 + 0xc);
    FUN_100f0688(param_1 + 0x1e);
  }
  return param_1;
}

/* Address: 0x10066c80 Size: 132 bytes */
void FUN_10066c80(unsigned long long param_1,unsigned long long param_2)

{
  if ((param_1 & 0xffffffff) != 0) {
    FUN_100f0538(param_1);
    FUN_100f03e8(param_1 + 6);
    FUN_100016f8(param_1 + 0xc);
    FUN_100f0788(param_1 + 0x1e);
    if (((param_1 & 0xffffffff) != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}

/* Address: 0x10067270 Size: 76 bytes */
void FUN_10067270()

{
  int local_24;
  
  FUN_100b2268(uRam10116070);
  FUN_100021c0();
  FUN_100b2268(*(int *)(local_24 + -0xc38));
  FUN_100008b8();
  FUN_10000030();
  return;
}

/* Address: 0x10075ee0 Size: 160 bytes */
void FUN_10075ee0(int param_1,short param_2,short param_3)

{
  int *piVar1;
  
  piVar1 = piRam10116200;
  *(short *)(param_1 + param_2 * 2 + 0x8c) = param_3;
  if ((*piVar1 != 0) &&
     (piVar1 = (int *)*piVar1,
     piVar1 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),
                                  param_2 + 0x62757431), piVar1 != (int *)0x0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x7a8) + (int)piVar1,param_3,1);
  }
  return;
}

/* FUN_10079ee8 defined elsewhere */


/* FUN_1007a018 defined elsewhere */


/* Address: 0x1007ec7c Size: 152 bytes */
void FUN_1007ec7c(int param_1,long long param_2)

{
  int *ppuVar1;
  int uVar3;
  long long uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar3 = FUN_100f57c8(*(int *)(param_1 + 0x148));
  *(int *)(param_1 + 0x148) = uVar3;
  uVar2 = FUN_100db3c8(0);
  *(int *)(param_1 + 0x148) = (int)uVar2;
  FUN_100db49c(uVar2,0x57325343,*(int *)(*(int *)(*(int*)((char*)ppuVar1 - 0x3b7)) + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x148) + (int)*(short *)(**(int **)(param_1 + 0x148) + 0xa8)
               ,param_2);
  return;
}

/* Address: 0x1007ed14 Size: 152 bytes */
void FUN_1007ed14(int param_1,long long param_2)

{
  int *ppuVar1;
  int uVar3;
  long long uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar3 = FUN_100f57c8(*(int *)(param_1 + 0x14c));
  *(int *)(param_1 + 0x14c) = uVar3;
  uVar2 = FUN_100db3c8(0);
  *(int *)(param_1 + 0x14c) = (int)uVar2;
  FUN_100db49c(uVar2,0x57325445,*(int *)(*(int *)(*(int*)((char*)ppuVar1 - 0x3b7)) + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x14c) + (int)*(short *)(**(int **)(param_1 + 0x14c) + 0xa8)
               ,param_2);
  return;
}

/* Address: 0x1007edac Size: 152 bytes */
void FUN_1007edac(int param_1,long long param_2)

{
  int *ppuVar1;
  int uVar3;
  long long uVar2;
  
  ppuVar1 = 0 /* TVect base */;
  uVar3 = FUN_100f57c8(*(int *)(param_1 + 0x150));
  *(int *)(param_1 + 0x150) = uVar3;
  uVar2 = FUN_100db3c8(0);
  *(int *)(param_1 + 0x150) = (int)uVar2;
  FUN_100db49c(uVar2,0x57324152,*(int *)(*(int *)(*(int*)((char*)ppuVar1 - 0x3b7)) + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x150) + (int)*(short *)(**(int **)(param_1 + 0x150) + 0xa8)
               ,param_2);
  return;
}

/* Address: 0x1007f0a4 Size: 16 bytes */
void FUN_1007f0a4(int param_1,short param_2)

{
  *(int *)(param_1 + 0x168) = param_2 + 0x709;
  return;
}

/* Address: 0x10082260 Size: 192 bytes */
void FUN_10082260(int *param_1)

{
  int iVar1;
  int local_34;
  
  if ((*(char *)(param_1 + 0x21) != '\0') &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    FUN_10009b48(param_1 + 0x28,*(short *)((int)param_1 + 0x86) << 5,0,0x1f,0x1e,
                 *(int *)(local_34 + -0x1208),*(short *)((int)param_1 + 0x8a) * 0x28 + 8,
                 *(short *)(param_1 + 0x22) * 0x28 + 7);
  }
  return;
}

/* Address: 0x10082f24 Size: 408 bytes */
void FUN_10082f24(int *param_1,short param_2,short param_3)

{
  int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  char auStack_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  char auStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar1 = puRam10116bc0;
  *(char *)((int)param_1 + 0xbe) = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),1);
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x600),auStack_48);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),auStack_48);
  FUN_100e1a64(&local_50,auStack_48);
  local_38 = *puVar1;
  local_34 = puVar1[1];
  local_30 = local_50;
  local_2c = local_4c;
  uVar3 = 0x28 - local_4c;
  local_54 = param_2 * 0x28 + ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uVar3 = 0x28 - local_50;
  local_58 = param_3 * 0x28 + ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  FUN_100e15a8(&local_38,auStack_68,&local_58);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_68,&local_50,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  return;
}

/* FUN_100836dc defined elsewhere */


/* Address: 0x10084ef0 Size: 148 bytes */
int * FUN_10084ef0(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x90),
     param_1 != (int *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x537));
    *(short *)(param_1 + 0x20) = 0xffff;
    *(short *)((int)param_1 + 0x82) = 0;
    *(short *)(param_1 + 0x21) = 0;
    *(short *)((int)param_1 + 0x86) = 0;
    *(short *)(param_1 + 0x22) = 0;
    *(short *)((int)param_1 + 0x8a) = 0x24;
    *(short *)(param_1 + 0x23) = 0xf;
  }
  return param_1;
}

/* Address: 0x10090e0c Size: 128 bytes */
void FUN_10090e0c(int *param_1,long long param_2,long long param_3,char param_4)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) &&
     (piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308)),
     piVar1 != (int *)0x0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x7c8) + (int)piVar1,param_3,param_4);
  }
  return;
}

/* Address: 0x10091334 Size: 4 bytes */
void FUN_10091334()

{
  return;
}

/* Address: 0x10091338 Size: 148 bytes */
void FUN_10091338(short param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  
  psVar3 = psRam101165d8;
  piVar2 = piRam1011639c;
  if ((*psRam101165dc != param_1) || (*psRam101165d8 != param_2)) {
    *psRam101165dc = param_1;
    *psVar3 = param_2;
    piVar1 = (int *)*piVar2;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
    piVar2 = (int *)*piVar2;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
  }
  return;
}

/* Address: 0x100913cc Size: 96 bytes */
void FUN_100913cc()

{
  int *ppuVar1;
  int *piVar2;
  
  ppuVar1 = 0 /* TVect base */;
  piVar2 = (int *)FUN_1008455c();
  if ((*(short *)(*(int*)((char*)ppuVar1 - 0x4b0)) != 0) && (piVar2 != (int *)0x0)) {
    *(char *)((int)piVar2 + 0x95) = 0;
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
  }
  return;
}

/* Address: 0x1009142c Size: 92 bytes */
void FUN_1009142c()

{
  int *ppuVar1;
  int *piVar2;
  int **local_24;
  
  ppuVar1 = 0 /* TVect base */;
  piVar2 = (int *)FUN_1008455c();
  if (piVar2 != (int *)0x0) {
    *(char *)((int)piVar2 + 0x95) = 1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
    ppuVar1 = local_24;
  }
  *(short *)(*(int*)((char*)ppuVar1 - 0x4b0)) = 1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int * FUN_10091488(int *param_1) { return 0; }


































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009150c(int *param_1,unsigned long long param_2) { }



























































































































































































































































































































































































































































































































































































/* Address: 0x100917d8 Size: 256 bytes */
void FUN_100917d8(int *param_1,short param_2,char param_3)

{
  int iVar2;
  long long uVar1;
  short local_20;
  short local_1e;
  int local_1c;
  
  if ((((param_2 != 0) && (*param_1 != 0)) && (iVar2 = FUN_1002771c(), iVar2 != 0)) &&
     (uVar1 = FUN_10001728(0x736e6420,param_2), (int)uVar1 != 0)) {
    local_20 = 3;
    local_1e = 0;
    local_1c = 0;
    FUN_10002178(*param_1,&local_20);
    local_20 = 0x2b;
    local_1e = FUN_1002771c();
    local_1e = local_1e * 0x19;
    local_1c = 0;
    FUN_10002178(*param_1,&local_20);
    FUN_10001638(*param_1,uVar1,param_3);
  }
  return;
}











































































































































/* Address: 0x1009191c Size: 164 bytes */
void FUN_1009191c(int param_1,short param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_10001728(0x736e6420,param_2);
  if ((int)uVar1 != 0) {
    FUN_10000b70(uVar1);
    FUN_10002598(uVar1);
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = FUN_100eab4c(0);
      *(int *)(param_1 + 4) = uVar2;
      FUN_100eabdc();
    }
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x158),
                 uVar1);
  }
  return;
}













































































/* Address: stubbed - had compile errors on 64-bit */
short FUN_100919c0(int param_1) { return 0; }














































































































































































































































































































































































































































































































































/* Address: 0x10091b18 Size: 104 bytes */
void FUN_10091b18()

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = piRam101165ec;
  piVar2 = piRam101165e8;
  if (*piRam101165ec != 0) {
    FUN_10000900(*piRam101165ec,1);
  }
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    FUN_10002ad8(iVar1);
  }
  *piVar2 = 0;
  *piVar3 = 0;
  return;
}



















































































































/* Address: stubbed - had compile errors on 64-bit */
char FUN_10091b80() { return 0; }


























































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091c04(short param_1) { }






















































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091ca4(short param_1,short param_2) { }



























































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
short FUN_10091de0(long long param_1) { return 0; }




















































































































































































































































































































































































































































/* Address: 0x10091ef0 Size: 80 bytes */
unsigned long long FUN_10091ef0()

{
  char auStack_28 [12];
  short local_1c;
  
  FUN_100032e8(*puRam101165f0,auStack_28);
  return ((-1 - (long long)local_1c) + (unsigned long long)((long long)local_1c == 0) << 0x20) >> 0x3f;
}

















































/* Address: 0x10091f40 Size: 148 bytes */
void FUN_10091f40()

{
  int *piVar1;
  unsigned long long uVar2;
  short uVar3;
  long long lVar4;
  
  piVar1 = piRam101165f0;
  if (*piRam101165f0 != 0) {
    uVar2 = FUN_100276fc();
    lVar4 = ((uVar2 & 0x3fffffff) * 4 - uVar2 & 0x1fffff) << 0xb;
    if (-1 < (int)lVar4) {
      do {
        FUN_100026b8(*piVar1,lVar4);
        lVar4 = lVar4 + -0x50;
      } while (-1 < lVar4);
    }
    uVar3 = FUN_10003798(*piVar1,0);
    FUN_100db2f4(uVar3);
  }
  return;
}





































































































































/* Address: 0x10091fd4 Size: 172 bytes */
void FUN_10091fd4()

{
  int *puVar1;
  int *puVar2;
  int iVar3;
  
  puVar2 = puRam101165f8;
  puVar1 = puRam101165f4;
  if (*piRam101165f0 != 0) {
    FUN_100035a0();
  }
  iVar3 = FUN_100ef2f8(*puVar2);
  if (iVar3 != 0) {
    FUN_10002ad8(*puVar2);
    FUN_10001c98(*puVar2);
  }
  iVar3 = FUN_100ef2f8(*puVar1);
  if (iVar3 != 0) {
    FUN_10002ad8(*puVar1);
    FUN_10001c98(*puVar1);
  }
  *puVar1 = 0;
  *puVar2 = 0;
  return;
}























































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10092080(long long param_1,long long param_2) { }





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100923a4(long long param_1,char param_2) { }











































































































































































































































































































































/* Address: 0x100929a0 Size: 184 bytes */
void FUN_100929a0()

{
  int *puVar1;
  int iVar2;
  int local_144;
  char auStack_120 [256];
  short local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  puVar1 = puRam10117370;
  if (*(char *)(iRam1011788c + 0x34) != '\0') {
    FUN_10003660(0,0);
    if ((**(char **)(local_144 + -0x12a4) != '\0') && (iVar2 = FUN_10091ef0(), iVar2 == 0)) {
      local_20 = 0;
      local_1c = 0;
      local_14 = 0;
      local_10 = 0;
      local_18 = *puVar1;
      *puVar1 = auStack_120;
      iVar2 = FUN_10000090(auStack_120);
      if (iVar2 == 0) {
        FUN_100923a4(0,1);
        *puVar1 = local_18;
      }
    }
  }
  return;
}



























































































































































































/* Address: 0x10092a58 Size: 76 bytes */
void FUN_10092a58(short param_1)

{
  if (*piRam101165f0 != 0) {
    FUN_100026b8(*piRam101165f0,
                 (((long long)param_1 & 0x3fffffffU) * 4 - (long long)param_1 & 0x1fffff) << 0xb);
  }
  return;
}

















































/* Address: 0x10092aa4 Size: 60 bytes */
void FUN_10092aa4()

{
  if (*psRam10116600 != -1) {
    FUN_10092484(*psRam10116600);
  }
  return;
}

/* Address: 0x10092ae0 Size: 48 bytes */
void FUN_10092ae0()

{
  int iVar1;
  
  iVar1 = FUN_10091ef0();
  if (iVar1 != 0) {
    FUN_10091f40();
  }
  FUN_10091fd4();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10092b10(short param_1) { }




















































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10092be0() { }















































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10093928() { }



















































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10093984() { }



















































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100939e0() { }















































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10093a5c() { }
























































































































































































































































































































































































/* Address: 0x100981f8 Size: 240 bytes */
int FUN_100981f8(int param_1,short param_2)

{
  int bVar1;
  long long lVar2;
  int iVar3;
  
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x4c), param_1 != 0)) {
    lVar2 = FUN_10098188(param_1,0x5072666c,param_2);
    *(int *)(param_1 + 0x48) = (int)lVar2;
    *(char *)(param_1 + 0x46) = '\x01' - (lVar2 == 0);
    iVar3 = FUN_10002b08(0xffffffffffff8000,0x70726566,0,param_1,param_1 + 2);
    if ((*(char *)(param_1 + 0x46) == '\0') || (iVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *(int *)(param_1 + 0x46) = bVar1;
    if (bVar1) {
      FUN_10002340((unsigned long long)**(unsigned int **)(param_1 + 0x48) + 0xc,param_1 + 6,0x40);
    }
  }
  return param_1;
}

















































































































































/* Address: 0x100982e8 Size: 56 bytes */
void FUN_100982e8(int param_1,unsigned long long param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    FUN_100f5708();
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_10098320(int param_1,long long param_2,short param_3) { return 0; }


















































































































































































































































































































































































































































































/* Address: 0x1009eb70 Size: 124 bytes */
short FUN_1009eb70(int param_1,int param_2)

{
  int _sStack00000018;
  int _sStack0000001c;
  short sVar1;
  short sVar2;
  long long lVar3;
  long long lVar4;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  short sStack0000001e;
  
  sStack00000018 = (short)((unsigned int)param_1 >> 0x10);
  lVar3 = (long long)sStack00000018;
  sStack0000001c = (short)((unsigned int)param_2 >> 0x10);
  lVar4 = (long long)sStack0000001c;
  _sStack00000018 = param_1;
  _sStack0000001c = param_2;
  sVar1 = FUN_10003768(lVar3 - lVar4);
  sVar2 = FUN_10003768((long long)sStack0000001a - (long long)sStack0000001e);
  if (sVar2 < sVar1) {
    sVar2 = sVar1;
  }
  return sVar2;
}

/* Address: 0x1009eef8 Size: 844 bytes */
void FUN_1009eef8(short param_1)

{
  unsigned int uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int bVar6;
  int *piVar7;
  unsigned int *puVar8;
  int iVar9;
  short sVar10;
  long long lVar11;
  long long lVar12;
  unsigned long long uVar13;
  short sVar14;
  unsigned long long uVar15;
  short local_40;
  short local_3e;
  short local_38;
  short local_36 [27];
  
  puVar8 = puRam101175f4;
  piVar7 = piRam101175f0;
  uVar15 = (unsigned long long)param_1;
  iVar3 = (int)((uVar15 & 0xffffffff) << 2);
  iVar4 = (int)(((uVar15 & 0x3fffffff) * 4 + uVar15 & 0xfffffff) << 4);
  *(int *)(*puRam101175f4 + iVar4 + 0x104) = *(int *)(*puRam101175f4 + iVar3 + 0x244);
  *(short *)(*puVar8 + param_1 * 2 + 0xfc) = 1;
  iVar9 = param_1 * 2 + *puVar8;
  uVar13 = 0;
  bVar6 = false;
  if (*(short *)(iVar9 + 0x2c) < 3) {
    *(short *)(iVar9 + 0xfc) = *(short *)(iVar9 + 0xfc) + 1;
    *(int *)(*puVar8 + iVar4 + 0x108) = *(int *)(*puVar8 + iVar3 + 0x254);
  }
  else {
    iVar9 = *puVar8 + (int)((uVar15 & 0xffffffff) << 2);
    sVar14 = *(short *)(iVar9 + 0x244);
    if ((((sVar14 == 0) || (sVar2 = *(short *)(iVar9 + 0x246), sVar2 == 0)) || (sVar14 == 0x6f)) ||
       (sVar2 == 0x9b)) {
      iVar9 = *puVar8 + (int)((uVar15 & 0xffffffff) << 2);
      sVar14 = *(short *)(iVar9 + 0x254);
      if (((sVar14 == 0) || (sVar2 = *(short *)(iVar9 + 0x256), sVar2 == 0)) ||
         ((sVar14 == 0x6f || (sVar2 == 0x9b)))) {
        iVar9 = *puVar8 + (int)((uVar15 & 0xffffffff) << 1);
        *(short *)(iVar9 + 0xfc) = *(short *)(iVar9 + 0xfc) + 1;
        *(int *)
         (*puVar8 + (int)(((uVar15 & 0x3fffffff) * 4 + uVar15 & 0xffffffff) << 4) + 0x108) =
             *(int *)(*puVar8 + (int)((uVar15 & 0xffffffff) << 2) + 0x254);
        return;
      }
    }
    iVar9 = *puVar8 + (int)((uVar15 & 0xffffffff) << 2);
    iVar9 = FUN_1009eb70(*(int *)(iVar9 + 0x254),*(int *)(iVar9 + 0x244));
    uVar1 = iVar9 / (*(short *)(*puVar8 + (int)((uVar15 & 0xffffffff) << 1) + 0x2c) + -1);
    sVar14 = (short)uVar1;
    do {
      lVar11 = ((uVar15 & 0x3fffffff) * 4 + uVar15 & 0xfffffff) * 0x10;
      iVar4 = (int)lVar11;
      iVar9 = (int)((uVar13 & 0x3fffffff) << 2);
      iVar5 = (int)((uVar15 & 0x3fffffff) << 2);
      FUN_1009ebec(*(int *)(*puVar8 + iVar4 + iVar9 + 0x104),
                   *(int *)(*puVar8 + iVar5 + 0x254),&local_40);
      iVar9 = iVar4 + *puVar8 + iVar9;
      local_36[0] = *(short *)(iVar9 + 0x104) + local_40 * sVar14;
      local_38 = *(short *)(iVar9 + 0x106) + sVar14 * local_3e;
      FUN_10051e1c(local_36,&local_38,(sVar14 >> 1) + (unsigned short)(sVar14 < 0 && (uVar1 & 1) != 0),0);
      sVar2 = (short)uVar13;
      uVar13 = (unsigned long long)(short)(sVar2 + 1);
      *(char *)(*piVar7 + local_38 * 0x70 + (int)local_36[0] + 0x34a) = 7;
      FUN_10051d60(local_36[0],local_38);
      lVar12 = (uVar13 & 0x3fffffff) * 4;
      FUN_1002269c(lVar11 + (unsigned long long)*puVar8 + lVar12 + 0x104,local_36[0],local_38);
      iVar3 = (int)((uVar15 & 0x7fffffff) << 1);
      iVar9 = *puVar8 + iVar3;
      *(short *)(iVar9 + 0xfc) = *(short *)(iVar9 + 0xfc) + 1;
      sVar10 = FUN_1009eb70(*(int *)(iVar5 + *puVar8 + 0x254),
                            *(int *)(iVar4 + *puVar8 + (int)lVar12 + 0x104));
      if ((sVar10 < sVar14) ||
         (iVar3 = iVar3 + *puVar8, *(short *)(iVar3 + 0x2c) + -1 <= (int)*(short *)(iVar3 + 0xfc)))
      {
        bVar6 = true;
      }
    } while (!bVar6);
    *(int *)
     (*puVar8 + (int)(((uVar15 & 0x3fffffff) * 4 + uVar15 & 0xffffffff) << 4) +
      (short)(sVar2 + 2) * 4 + 0x104) =
         *(int *)(*puVar8 + (int)((uVar15 & 0xffffffff) << 2) + 0x254);
    iVar9 = *puVar8 + (int)((uVar15 & 0xffffffff) << 1);
    *(short *)(iVar9 + 0xfc) = *(short *)(iVar9 + 0xfc) + 1;
  }
  return;
}





















































































































































































































































































































































































































































































































































































/* Address: 0x1009f864 Size: 620 bytes */
void FUN_1009f864()

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  
  piVar3 = piRam101175f4;
  uVar6 = 0;
  do {
    uVar7 = 0;
    if (0 < (long long)*(short *)(*piVar3 + (int)((uVar6 & 0xffffffff) << 1) + 0xfc) + -1) {
      do {
        iVar2 = *piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
                (int)((uVar7 & 0xffffffff) << 2);
        sVar4 = *(short *)(iVar2 + 0x104);
        if (sVar4 == 0) {
LAB_1009f8e4:
          iVar2 = *piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
                  (int)((uVar7 & 0xffffffff) << 2);
          sVar4 = *(short *)(iVar2 + 0x108);
          if (sVar4 != 0) {
            sVar1 = *(short *)(iVar2 + 0x10a);
            if (((sVar1 != 0) && (sVar4 != 0x6f)) && (sVar1 != 0x9b)) goto LAB_1009f954;
          }
          iVar2 = *piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
                  (int)((uVar7 & 0xffffffff) << 2);
          FUN_1009f524(*(int *)(iVar2 + 0x104),*(int *)(iVar2 + 0x108));
        }
        else {
          sVar1 = *(short *)(iVar2 + 0x106);
          if (((sVar1 == 0) || (sVar4 == 0x6f)) || (sVar1 == 0x9b)) goto LAB_1009f8e4;
LAB_1009f954:
          iVar2 = *piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
                  (int)((uVar7 & 0xffffffff) << 2);
          FUN_1009f350(*(int *)(iVar2 + 0x104),*(int *)(iVar2 + 0x108));
        }
        sVar4 = (short)uVar7 + 1;
        uVar7 = (unsigned long long)sVar4;
      } while ((int)sVar4 < *(short *)(*piVar3 + (int)((uVar6 & 0xffffffff) << 1) + 0xfc) + -1);
    }
    uVar5 = uVar6 + 1;
    uVar5 = (unsigned long long)
            (short)((short)uVar5 -
                   (short)(((long long)((int)uVar5 >> 2) +
                            (unsigned long long)((int)uVar5 < 0 && (uVar5 & 3) != 0) & 0xffffffff) << 2));
    iVar2 = *piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
            (int)((uVar7 & 0xffffffff) << 2);
    sVar4 = *(short *)(iVar2 + 0x104);
    if (sVar4 == 0) {
LAB_1009fa00:
      iVar2 = *piVar3 + (int)(((uVar5 & 0x3fffffff) * 4 + uVar5 & 0xffffffff) << 4);
      sVar4 = *(short *)(iVar2 + 0x104);
      if (sVar4 != 0) {
        sVar1 = *(short *)(iVar2 + 0x106);
        if (((sVar1 != 0) && (sVar4 != 0x6f)) && (sVar1 != 0x9b)) goto LAB_1009fa78;
      }
      FUN_1009f524(*(int *)
                    (*piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
                     (int)((uVar7 & 0xffffffff) << 2) + 0x104),
                   *(int *)
                    (*piVar3 + (int)(((uVar5 & 0x3fffffff) * 4 + uVar5 & 0xffffffff) << 4) + 0x104))
      ;
    }
    else {
      sVar1 = *(short *)(iVar2 + 0x106);
      if (((sVar1 == 0) || (sVar4 == 0x6f)) || (sVar1 == 0x9b)) goto LAB_1009fa00;
LAB_1009fa78:
      FUN_1009f350(*(int *)
                    (*piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 4) +
                     (int)((uVar7 & 0xffffffff) << 2) + 0x104),
                   *(int *)
                    (*piVar3 + (int)(((uVar5 & 0x3fffffff) * 4 + uVar5 & 0xffffffff) << 4) + 0x104))
      ;
    }
    sVar4 = (short)uVar6 + 1;
    uVar6 = (unsigned long long)sVar4;
    if (3 < sVar4) {
      return;
    }
  } while( true );
}

/* Address: 0x1009fad4 Size: 388 bytes */
long long FUN_1009fad4(short param_1,short param_2)

{
  unsigned long long uVar1;
  
  uVar1 = (unsigned long long)param_2;
  if (*(char *)(*piRam101175f0 + (int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) +
                (int)param_1 + 0x34a) == '\x03') {
    return 0;
  }
  if (*(char *)(*piRam101175f0 + (int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) +
                (int)param_1 + 0x34a) == '\x01') {
    return 0;
  }
  if ((((param_1 == 0) || (param_2 == 0)) || (param_1 == 0x6f)) || (param_2 == 0x9b)) {
    if (*(char *)(*piRam101175f0 + (int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) +
                  (int)param_1 + 0x34a) == '\0') {
      return 1;
    }
  }
  if (*(char *)(*piRam101175f0 + (int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) +
                (int)param_1 + 0x34b) == '\x02') {
    return 1;
  }
  if (*(char *)(*piRam101175f0 + (int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) +
                (int)param_1 + 0x349) == '\x02') {
    return 1;
  }
  if (*(char *)((int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) + *piRam101175f0 +
                (int)param_1 + 0x3ba) == '\x02') {
    return 1;
  }
  if (*(char *)((int)(((uVar1 & 0x1fffffff) * 8 - uVar1 & 0xffffffff) << 4) + *piRam101175f0 +
                (int)param_1 + 0x2da) == '\x02') {
    return 1;
  }
  return 0;
}

/* Address: 0x1009fc58 Size: 700 bytes */
void FUN_1009fc58()

{
  int bVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  unsigned long long uVar7;
  int iVar8;
  
  piVar2 = piRam101175f0;
  iVar6 = 0;
  do {
    uVar7 = 0;
    do {
      iVar8 = *piVar2 + (int)(((uVar7 & 0x1fffffff) * 8 - uVar7 & 0xffffffff) << 4) + iVar6;
      if (*(char *)(iVar8 + 0x34a) == '\a') {
        *(char *)(iVar8 + 0x34a) = 3;
      }
      else {
        *(char *)
         (*piVar2 + (int)(((uVar7 & 0x1fffffff) * 8 - uVar7 & 0xffffffff) << 4) + iVar6 + 0x34a) = 0
        ;
      }
      sVar5 = (short)uVar7 + 1;
      uVar7 = (unsigned long long)sVar5;
    } while (sVar5 < 0x9c);
    sVar5 = (short)iVar6 + 1;
    iVar6 = (int)sVar5;
  } while (sVar5 < 0x70);
  sVar5 = 0;
  do {
    iVar6 = 0;
    do {
      iVar8 = 0;
      do {
        iVar3 = FUN_1009fad4(iVar6,iVar8);
        if (iVar3 != 0) {
          *(char *)(*piVar2 + iVar8 * 0x70 + iVar6 + 0x34a) = 2;
        }
        sVar4 = (short)iVar8 + 1;
        iVar8 = (int)sVar4;
      } while (sVar4 < 0x9c);
      sVar4 = (short)iVar6 + 1;
      iVar6 = (int)sVar4;
    } while (sVar4 < 0x70);
    iVar6 = 0;
    do {
      iVar8 = 0;
      do {
        iVar3 = FUN_1009fad4(iVar8,iVar6);
        if (iVar3 != 0) {
          *(char *)(*piVar2 + iVar6 * 0x70 + iVar8 + 0x34a) = 2;
        }
        sVar4 = (short)iVar8 + 1;
        iVar8 = (int)sVar4;
      } while (sVar4 < 0x70);
      sVar4 = (short)iVar6 + 1;
      iVar6 = (int)sVar4;
    } while (sVar4 < 0x9c);
    iVar6 = 0x6f;
    do {
      iVar8 = 0x9b;
      do {
        iVar3 = FUN_1009fad4(iVar6,iVar8);
        if (iVar3 != 0) {
          *(char *)(*piVar2 + iVar8 * 0x70 + iVar6 + 0x34a) = 2;
        }
        bVar1 = iVar8 != 0;
        iVar8 = (int)(short)((short)iVar8 + -1);
      } while (bVar1);
      bVar1 = iVar6 != 0;
      iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    iVar6 = 0x9b;
    do {
      iVar8 = 0x6f;
      do {
        iVar3 = FUN_1009fad4(iVar8,iVar6);
        if (iVar3 != 0) {
          *(char *)(*piVar2 + iVar6 * 0x70 + iVar8 + 0x34a) = 2;
        }
        bVar1 = iVar8 != 0;
        iVar8 = (int)(short)((short)iVar8 + -1);
      } while (bVar1);
      bVar1 = iVar6 != 0;
      iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    sVar5 = sVar5 + 1;
  } while (sVar5 < 2);
  iVar6 = 0;
  do {
    uVar7 = 0;
    do {
      iVar8 = *piVar2 + (int)(((uVar7 & 0x1fffffff) * 8 - uVar7 & 0xffffffff) << 4) + iVar6;
      if (*(char *)(iVar8 + 0x34a) == '\x02') {
        *(char *)(iVar8 + 0x34a) = 2;
      }
      else {
        *(char *)
         (*piVar2 + (int)(((uVar7 & 0x1fffffff) * 8 - uVar7 & 0xffffffff) << 4) + iVar6 + 0x34a) = 7
        ;
      }
      sVar5 = (short)uVar7 + 1;
      uVar7 = (unsigned long long)sVar5;
    } while (sVar5 < 0x9c);
    sVar5 = (short)iVar6 + 1;
    iVar6 = (int)sVar5;
  } while (sVar5 < 0x70);
  FUN_10051d64();
  return;
}

/* Address: 0x1009ff14 Size: 144 bytes */
long long FUN_1009ff14(short param_1,short param_2)

{
  short sVar1;
  int iVar2;
  unsigned long long uVar3;
  long long lVar4;
  int iVar5;
  
  iVar2 = 0;
  while( true ) {
    iVar5 = *piRam101175f4 + iVar2 * 4;
    lVar4 = (long long)param_1 + (long long)*(short *)(iVar5 + 0xbc);
    if ((((-1 < lVar4) &&
         (uVar3 = (long long)param_2 + (long long)*(short *)(iVar5 + 0xbe), -1 < (long long)uVar3)) &&
        (iVar5 = (int)lVar4, iVar5 < 0x70)) &&
       (((int)uVar3 < 0x9c &&
        (*(char *)(*piRam101175f0 + (int)(((uVar3 & 0x1fffffff) * 8 - uVar3 & 0xffffffff) << 4) +
                   iVar5 + 0x34a) == '\a')))) break;
    sVar1 = (short)iVar2 + 1;
    iVar2 = (int)sVar1;
    if (7 < sVar1) {
      return 0;
    }
  }
  return 1;
}

/* Address: 0x1009ffa4 Size: 148 bytes */
long long FUN_1009ffa4(short param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  unsigned long long uVar3;
  long long lVar4;
  int iVar5;
  
  iVar2 = 0;
  while( true ) {
    iVar5 = *piRam101175f4 + iVar2 * 4;
    lVar4 = (long long)param_1 + (long long)*(short *)(iVar5 + 0xbc);
    if ((((-1 < lVar4) &&
         (uVar3 = (long long)param_2 + (long long)*(short *)(iVar5 + 0xbe), -1 < (long long)uVar3)) &&
        (iVar5 = (int)lVar4, iVar5 < 0x70)) &&
       (((int)uVar3 < 0x9c &&
        ((int)*(char *)(*piRam101175f0 + (int)(((uVar3 & 0x1fffffff) * 8 - uVar3 & 0xffffffff) << 4)
                        + iVar5 + 0x34a) == (int)param_3)))) break;
    sVar1 = (short)iVar2 + 1;
    iVar2 = (int)sVar1;
    if (7 < sVar1) {
      return 0;
    }
  }
  return 1;
}

/* Address: 0x100a0038 Size: 336 bytes */
void FUN_100a0038()

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  unsigned long long uVar6;
  
  piVar1 = piRam101175f0;
  iVar5 = 0;
  do {
    uVar6 = 0;
    do {
      iVar3 = (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4);
      if (*(char *)(*piVar1 + iVar3 + iVar5 + 0x34a) == '\x02') {
        iVar2 = FUN_1009ff14(iVar5,uVar6);
        if (iVar2 != 0) {
          *(char *)(*piVar1 + iVar3 + iVar5 + 0x34a) = 3;
          FUN_10051d60(iVar5,uVar6);
        }
        iVar3 = FUN_1009ffa4(iVar5,uVar6,5);
        if (iVar3 != 0) {
          *(char *)
           (*piVar1 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5 + 0x34a) =
               3;
          FUN_10051d60(iVar5,uVar6);
        }
        iVar3 = FUN_1009ffa4(iVar5,uVar6,6);
        if (iVar3 != 0) {
          *(char *)
           (*piVar1 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5 + 0x34a) =
               3;
          FUN_10051d60(iVar5,uVar6);
        }
      }
      sVar4 = (short)uVar6 + 1;
      uVar6 = (unsigned long long)sVar4;
    } while (sVar4 < 0x9c);
    sVar4 = (short)iVar5 + 1;
    iVar5 = (int)sVar4;
  } while (sVar4 < 0x70);
  return;
}









































































































































































































































































/* Address: 0x100a018c Size: 92 bytes */
void FUN_100a018c(short param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < param_1) {
    do {
      FUN_100a8d88(1,0,1);
      sVar1 = sVar1 + 1;
    } while (sVar1 < param_1);
  }
  FUN_100a9628();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a01e8() { }









































































































































































































































































































































































/* Address: 0x100a1d8c Size: 156 bytes */
void FUN_100a1d8c()

{
  char cVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = piRam101175f4;
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar6 = 0;
    do {
      cVar1 = *(char *)(*piRam101175f0 + iVar6 * 0x70 + iVar4 + 0x34a);
      if (((cVar1 == '\a') || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
        iVar5 = (int)(short)((short)iVar5 + 1);
      }
      sVar3 = (short)iVar6 + 1;
      iVar6 = (int)sVar3;
    } while (sVar3 < 0x9c);
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
  } while (sVar3 < 0x70);
  *(short *)(*piRam101175f4 + 0x1f54) = (short)(iVar5 / 100) * *(short *)(*piRam101175f4 + 0x3c);
  *(short *)(*piVar2 + 0x1f52) = 0;
  return;
}

/* Address: 0x100a1e28 Size: 40 bytes */
short FUN_100a1e28()

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  uVar1 = *(unsigned short *)(*piRam101175f4 + 0x1f52);
  uVar2 = *(unsigned short *)(*piRam101175f4 + 0x1f54);
  return (((short)uVar1 >> 0xf) - ((short)uVar2 >> 0xf)) + (unsigned short)(uVar2 <= uVar1);
}

/* Address: 0x100a1e50 Size: 1216 bytes */
void FUN_100a1e50()

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  unsigned long long uVar10;
  short sVar11;
  unsigned long long uVar12;
  unsigned short uVar13;
  short sVar14;
  unsigned long long uVar15;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e [3];
  short local_78;
  short local_70;
  int local_6c;
  short local_68;
  int local_64;
  short local_60 [8];
  int local_50;
  int local_4c;
  
  piVar3 = piRam101175f4;
  piVar2 = piRam101175f0;
  bVar1 = false;
  do {
    iVar4 = FUN_1005f230(1,0x70,0xffffffffffffffff);
    iVar5 = FUN_1005f230(1,0x9c,0xffffffffffffffff);
    if (*(char *)(*piVar2 + iVar5 * 0x70 + iVar4 + 0x34a) == '\a') {
      bVar1 = true;
    }
  } while (!bVar1);
  local_70 = (short)iVar5;
  local_78 = (short)iVar4;
  iVar6 = FUN_1005f230(1,100,0);
  if (iVar6 < 0x41) {
    iVar6 = 0;
    local_6c = iVar4;
    local_64 = iVar5;
    do {
      sVar7 = FUN_1005f230(1,8,2);
      local_60[iVar6] = sVar7;
      sVar7 = (short)iVar6 + 1;
      iVar6 = (int)sVar7;
      sVar14 = 2;
    } while (sVar7 < 8);
    local_68 = 4;
  }
  else {
    iVar6 = 0;
    local_50 = iVar4;
    local_4c = iVar5;
    do {
      sVar7 = FUN_1005f230(1,10,5);
      local_60[iVar6] = sVar7;
      sVar7 = (short)iVar6 + 1;
      iVar6 = (int)sVar7;
      sVar14 = 4;
    } while (sVar7 < 8);
    local_68 = 6;
  }
  *(char *)(*piVar2 + local_70 * 0x70 + (int)local_78 + 0x34a) = 4;
  FUN_10051d60();
  *(short *)(*piVar3 + 0x1f52) = *(short *)(*piVar3 + 0x1f52) + 1;
  uVar15 = 0;
  do {
    local_86 = local_70;
    local_88 = local_78;
    uVar13 = 0;
    sVar7 = 0;
    if (0 < *(short *)((int)local_60 + (int)((uVar15 & 0xffffffff) << 1))) {
      do {
        iVar4 = *piVar3 + (int)((uVar15 & 0xffffffff) << 2);
        local_88 = local_88 + *(short *)(iVar4 + 0xbc);
        local_86 = local_86 + *(short *)(iVar4 + 0xbe);
        FUN_10051dc8(&local_88,&local_86);
        iVar4 = *piVar2 + local_86 * 0x70 + (int)local_88;
        if (*(char *)(iVar4 + 0x34a) == '\a') {
          *(char *)(iVar4 + 0x34a) = 4;
          FUN_10051d60(local_88,local_86);
          *(short *)(*piVar3 + 0x1f52) = *(short *)(*piVar3 + 0x1f52) + 1;
        }
        uVar10 = uVar15 + 2;
        uVar12 = uVar15 + 6;
        uVar13 = uVar13 + 1;
        sVar9 = local_68 - (((short)uVar13 >> 1) + (unsigned short)((short)uVar13 < 0 && (uVar13 & 1) != 0))
        ;
        sVar8 = FUN_1005f230(1,sVar9,sVar14 - (((short)uVar13 >> 2) +
                                              (unsigned short)((short)uVar13 < 0 && (uVar13 & 3) != 0)));
        sVar9 = FUN_1005f230(1,sVar9,sVar14 - (short)uVar13 / 3);
        local_7e[0] = local_88;
        local_80 = local_86;
        sVar11 = 0;
        if (0 < sVar8) {
          do {
            iVar4 = *piVar3 + (short)((short)uVar10 -
                                     (short)(((long long)((int)uVar10 >> 3) +
                                              (unsigned long long)((int)uVar10 < 0 && (uVar10 & 7) != 0) &
                                             0xffffffff) << 3)) * 4;
            local_7e[0] = local_7e[0] + *(short *)(iVar4 + 0xbc);
            local_80 = local_80 + *(short *)(iVar4 + 0xbe);
            FUN_10051dc8(local_7e,&local_80);
            iVar4 = *piVar2 + local_80 * 0x70 + (int)local_7e[0];
            if (*(char *)(iVar4 + 0x34a) == '\a') {
              *(char *)(iVar4 + 0x34a) = 4;
              FUN_10051d60(local_7e[0],local_80);
              *(short *)(*piVar3 + 0x1f52) = *(short *)(*piVar3 + 0x1f52) + 1;
            }
            sVar11 = sVar11 + 1;
          } while (sVar11 < sVar8);
        }
        local_82 = local_88;
        local_84 = local_86;
        sVar8 = 0;
        if (0 < sVar9) {
          do {
            iVar4 = *piVar3 + (short)((short)uVar12 -
                                     (short)(((long long)((int)uVar12 >> 3) +
                                              (unsigned long long)((int)uVar12 < 0 && (uVar12 & 7) != 0) &
                                             0xffffffff) << 3)) * 4;
            local_82 = local_82 + *(short *)(iVar4 + 0xbc);
            local_84 = local_84 + *(short *)(iVar4 + 0xbe);
            FUN_10051dc8(&local_82,&local_84);
            iVar4 = *piVar2 + local_84 * 0x70 + (int)local_82;
            if (*(char *)(iVar4 + 0x34a) == '\a') {
              *(char *)(iVar4 + 0x34a) = 4;
              FUN_10051d60(local_82,local_84);
              *(short *)(*piVar3 + 0x1f52) = *(short *)(*piVar3 + 0x1f52) + 1;
            }
            sVar8 = sVar8 + 1;
          } while (sVar8 < sVar9);
        }
        sVar7 = sVar7 + 1;
      } while (sVar7 < *(short *)((int)local_60 + (int)((uVar15 & 0xffffffff) << 1)));
    }
    sVar7 = (short)uVar15 + 1;
    uVar15 = (unsigned long long)sVar7;
  } while (sVar7 < 8);
  return;
}





































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100a2310 Size: 1036 bytes */
void FUN_100a2310()

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  short sVar6;
  int iVar5;
  unsigned char bVar7;
  int iVar8;
  unsigned long long uVar9;
  
  piVar4 = piRam101175f4;
  piVar3 = piRam101175f0;
  iVar8 = 0;
  do {
    uVar9 = 0;
    do {
      iVar5 = *piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + iVar8;
      if (*(char *)(iVar5 + 0x34a) == '\a') {
        bVar7 = *(char *)(iVar5 + 0x3ba) == '\x04';
        if (*(char *)((int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + *piVar3 + iVar8
                     + 0x2da) == '\x04') {
          bVar7 = bVar7 + 1;
        }
        if (*(char *)(*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + iVar8
                     + 0x34b) == '\x04') {
          bVar7 = bVar7 + 1;
        }
        if (*(char *)(*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + iVar8
                     + 0x349) == '\x04') {
          bVar7 = bVar7 + 1;
        }
        if (2 < bVar7) {
          *(char *)
           (*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + iVar8 + 0x34a) =
               4;
          *(short *)(*piVar4 + 0x1f52) = *(short *)(*piVar4 + 0x1f52) + 1;
          FUN_10051d60(iVar8,uVar9);
        }
      }
      sVar6 = (short)uVar9 + 1;
      uVar9 = (unsigned long long)sVar6;
    } while (sVar6 < 0x9c);
    sVar6 = (short)iVar8 + 1;
    iVar8 = (int)sVar6;
  } while (sVar6 < 0x70);
  iVar8 = 1;
  do {
    uVar9 = 1;
    do {
      iVar5 = *piVar3 + (int)uVar9 * 0x70 + iVar8;
      sVar2 = (short)iVar8;
      sVar6 = (short)uVar9;
      if (*(char *)(iVar5 + 0x34a) == '\x04') {
        if ((((*(char *)(iVar5 + 0x3bb) == '\x04') && (*(char *)(iVar5 + 0x2d9) == '\x04')) &&
            ((cVar1 = *(char *)(iVar5 + 0x2db), cVar1 == '\x05' ||
             ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
           ((iVar5 = (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + *piVar3,
            *(char *)(iVar5 + iVar8 + 0x3b9) == '\x05' ||
            ((cVar1 = *(char *)(iVar8 + iVar5 + 0x3b9), cVar1 == '\x03' || (cVar1 == '\a')))))) {
          iVar5 = FUN_1005f230(1,10,0);
          if (iVar5 < 5) {
            *(char *)
             (*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + iVar8 + 0x2db)
                 = 4;
            FUN_10051d60(sVar2 + 1,sVar6 + -1);
          }
          else {
            *(char *)
             (*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + iVar8 + -1 +
             0x3ba) = 4;
            FUN_10051d60((short)(iVar8 + -1),sVar6 + 1);
          }
        }
        else {
          iVar5 = (int)uVar9 * 0x70 + *piVar3;
          if (((*(char *)(iVar5 + iVar8 + 0x3b9) == '\x04') &&
              (iVar5 = iVar8 + iVar5, *(char *)(iVar5 + 0x2db) == '\x04')) &&
             ((((cVar1 = *(char *)(iVar5 + 0x2d9), cVar1 == '\x05' || (cVar1 == '\x03')) ||
               (cVar1 == '\a')) &&
              (((cVar1 = *(char *)((int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) +
                                   *piVar3 + iVar8 + 0x3bb), cVar1 == '\x05' || (cVar1 == '\x03'))
               || (cVar1 == '\a')))))) {
            iVar5 = FUN_1005f230(1,10,0);
            if (iVar5 < 5) {
              *(char *)
               ((int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + *piVar3 + iVar8 + -1 +
               0x2da) = 4;
              FUN_10051d60((short)(iVar8 + -1),sVar6 + -1);
            }
            else {
              *(char *)
               ((int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + *piVar3 + iVar8 +
               0x3bb) = 4;
              FUN_10051d60(sVar2 + 1,sVar6 + 1);
            }
          }
        }
      }
      uVar9 = (unsigned long long)(short)(sVar6 + 1);
    } while ((short)(sVar6 + 1) < 0x9b);
    iVar8 = (int)(short)(sVar2 + 1);
  } while ((short)(sVar2 + 1) < 0x6f);
  return;
}





























































































































































































































































































































































































































































































































































































































































/* Address: 0x100a271c Size: 68 bytes */
void FUN_100a271c()

{
  int iVar1;
  
  FUN_100a1d8c();
  iVar1 = FUN_100a1e28();
  while (iVar1 == 0) {
    FUN_100a1e50();
    FUN_100a2310();
    iVar1 = FUN_100a1e28();
  }
  return;
}

/* Address: 0x100a2760 Size: 380 bytes */
void FUN_100a2760()

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  unsigned long long uVar4;
  short sVar6;
  
  piVar3 = piRam101175f4;
  piVar2 = piRam101175f0;
  if (0 < *(short *)(*piRam101175f4 + 0x34)) {
    sVar6 = 0;
    do {
      bVar1 = false;
      do {
        iVar5 = FUN_1005f230(1,0x70,0xffffffffffffffff);
        uVar4 = FUN_1005f230(1,0x9c,0xffffffffffffffff);
        if (*(char *)(*piVar2 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4) + iVar5
                     + 0x34a) == '\a') {
          bVar1 = true;
        }
      } while (!bVar1);
      *(char *)
       (*piVar2 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4) + iVar5 + 0x34a) = 6;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe) = (short)iVar5;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe + 2) = (short)uVar4;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe + 4) = 2;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe + 6) = 0;
      *(short *)(*piVar2 + 0x348) = *(short *)(*piVar2 + 0x348) + 1;
      FUN_10051d60(iVar5,uVar4);
      sVar6 = sVar6 + 1;
    } while (sVar6 < *(short *)(*piVar3 + 0x34));
  }
  return;
}

























































































































































































































/* Address: 0x100a28dc Size: 380 bytes */
void FUN_100a28dc()

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  unsigned long long uVar4;
  short sVar6;
  
  piVar3 = piRam101175f4;
  piVar2 = piRam101175f0;
  if (0 < *(short *)(*piRam101175f4 + 0x36)) {
    sVar6 = 0;
    do {
      bVar1 = false;
      do {
        iVar5 = FUN_1005f230(1,0x70,0xffffffffffffffff);
        uVar4 = FUN_1005f230(1,0x9c,0xffffffffffffffff);
        if (*(char *)(*piVar2 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4) + iVar5
                     + 0x34a) == '\a') {
          bVar1 = true;
        }
      } while (!bVar1);
      *(char *)
       (*piVar2 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4) + iVar5 + 0x34a) = 5;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe) = (short)iVar5;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe + 2) = (short)uVar4;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe + 4) = 1;
      *(short *)(*piVar2 + *(short *)(*piVar2 + 0x348) * 0xe + 6) = 0;
      *(short *)(*piVar2 + 0x348) = *(short *)(*piVar2 + 0x348) + 1;
      FUN_10051d60(iVar5,uVar4);
      sVar6 = sVar6 + 1;
    } while (sVar6 < *(short *)(*piVar3 + 0x36));
  }
  return;
}

























































































































































































































/* Address: 0x100a2a58 Size: 616 bytes */
void FUN_100a2a58()

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short uVar6;
  int iVar5;
  int iVar7;
  unsigned long long uVar8;
  int iVar9;
  int iVar10;
  
  piVar1 = piRam101175f0;
  if ((1 < *(short *)(*piRam101175f0 + 0x348)) &&
     (uVar8 = 0, 0 < *(short *)(*piRam101175f0 + 0x348))) {
    do {
      if (*(short *)(*piVar1 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 1) + 4) == 1
         ) {
        sVar2 = FUN_1005f230(1,2,0xffffffffffffffff);
        sVar3 = *(short *)(*piVar1 + 0x348) + -1;
        if (sVar2 < sVar3) {
          sVar3 = sVar2;
        }
        *(short *)(*piVar1 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 1) + 6) =
             sVar3;
      }
      else {
        sVar2 = FUN_1005f230(1,4,0xffffffffffffffff);
        sVar3 = *(short *)(*piVar1 + 0x348) + -1;
        if (sVar2 < sVar3) {
          sVar3 = sVar2;
        }
        *(short *)(*piVar1 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 1) + 6) =
             sVar3;
      }
      iVar9 = 0;
      if (0 < *(short *)(*piVar1 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 1) + 6))
      {
        do {
          iVar7 = 10000;
          iVar5 = -1;
          uVar6 = 0xffff;
          iVar10 = 0;
          if (0 < *(short *)(*piVar1 + 0x348)) {
            do {
              if (iVar10 != (int)uVar8) {
                iVar4 = 0;
                if (0 < iVar9) {
                  do {
                    if (iVar10 == *(short *)(*piVar1 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 &
                                                             0xffffffff) << 1) + iVar4 * 2 + 8))
                    break;
                    sVar3 = (short)iVar4 + 1;
                    iVar4 = (int)sVar3;
                  } while (sVar3 < iVar9);
                }
                if (iVar4 == iVar9) {
                  iVar4 = FUN_1009eb70(*(int *)(*piVar1 + iVar10 * 0xe),
                                       *(int *)
                                        (*piVar1 +
                                        (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 1))
                                      );
                  if (iVar4 < iVar7) {
                    iVar5 = iVar10;
                    iVar7 = iVar4;
                  }
                }
              }
              uVar6 = (short)iVar5;
              sVar3 = (short)iVar10 + 1;
              iVar10 = (int)sVar3;
            } while (sVar3 < *(short *)(*piVar1 + 0x348));
          }
          iVar5 = (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0x7fffffff) << 1);
          *(short *)(*piVar1 + iVar5 + iVar9 * 2 + 8) = uVar6;
          iVar9 = (int)(short)((short)iVar9 + 1);
        } while (iVar9 < *(short *)(iVar5 + *piVar1 + 6));
      }
      sVar3 = (short)uVar8 + 1;
      uVar8 = (unsigned long long)sVar3;
    } while (sVar3 < *(short *)(*piVar1 + 0x348));
  }
  return;
}

/* Address: 0x100a3280 Size: 56 bytes */
void FUN_100a3280(int param_1,int param_2)

{
  int uStack00000018;
  int uStack0000001c;
  
  uStack00000018 = param_1;
  uStack0000001c = param_2;
  FUN_100a2cc0(param_1,param_2,3,5);
  return;
}

/* Address: 0x100a32b8 Size: 76 bytes */
void FUN_100a32b8(int param_1,int param_2)

{
  long long uVar1;
  int uStack00000018;
  int uStack0000001c;
  
  uStack00000018 = param_1;
  uStack0000001c = param_2;
  uVar1 = FUN_1005f230(1,2,1);
  FUN_100a2cc0(uStack00000018,uStack0000001c,uVar1,6);
  return;
}

/* Address: 0x100a33ac Size: 544 bytes */
void FUN_100a33ac()

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  int iVar7;
  
  piVar3 = piRam101175f0;
  if ((1 < *(short *)(*piRam101175f0 + 0x348)) &&
     (uVar5 = 0, 0 < *(short *)(*piRam101175f0 + 0x348))) {
    do {
      iVar1 = (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0x7fffffff) << 1);
      iVar7 = *piVar3 + iVar1;
      if (*(short *)(iVar7 + 4) == 1) {
        if (*(short *)(iVar7 + 6) == 0) {
          FUN_100a31d8(*(int *)(*piVar3 + iVar1));
        }
        else {
          uVar6 = 0;
          if (0 < *(short *)(*piVar3 + (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0xffffffff) << 1) +
                            6)) {
            do {
              iVar7 = *piVar3;
              iVar2 = (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0x7fffffff) << 1);
              iVar1 = *(short *)(iVar7 + iVar2 + (int)((uVar6 & 0xffffffff) << 1) + 8) * 0xe;
              if (*(short *)(iVar7 + iVar1 + 4) == 1) {
                FUN_100a3280(*(int *)(iVar2 + iVar7),*(int *)(iVar1 + iVar7));
              }
              else {
                iVar7 = *piVar3;
                iVar1 = (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0x7fffffff) << 1);
                FUN_100a32b8(*(int *)(iVar7 + iVar1),
                             *(int *)
                              (iVar7 + *(short *)(iVar7 + iVar1 + (int)((uVar6 & 0xffffffff) << 1) +
                                                 8) * 0xe));
              }
              sVar4 = (short)uVar6 + 1;
              uVar6 = (unsigned long long)sVar4;
            } while (sVar4 < *(short *)(*piVar3 + (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 &
                                                        0xffffffff) << 1) + 6));
          }
        }
      }
      else {
        iVar7 = (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0x7fffffff) << 1);
        if (*(short *)(*piVar3 + iVar7 + 6) == 0) {
          FUN_100a3304(*(int *)(iVar7 + *piVar3));
        }
        else {
          iVar7 = 0;
          if (0 < *(short *)(*piVar3 + (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0xffffffff) << 1) +
                            6)) {
            do {
              iVar1 = *piVar3;
              iVar2 = (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0x7fffffff) << 1);
              FUN_100a32b8(*(int *)(iVar1 + iVar2),
                           *(int *)(iVar1 + *(short *)(iVar1 + iVar2 + iVar7 * 2 + 8) * 0xe))
              ;
              sVar4 = (short)iVar7 + 1;
              iVar7 = (int)sVar4;
            } while (sVar4 < *(short *)(iVar2 + *piVar3 + 6));
          }
        }
      }
      sVar4 = (short)uVar5 + 1;
      uVar5 = (unsigned long long)sVar4;
    } while (sVar4 < *(short *)(*piVar3 + 0x348));
  }
  return;
}

/* Address: 0x100a35cc Size: 992 bytes */
void FUN_100a35cc()

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar7;
  unsigned long long uVar6;
  
  piVar2 = piRam101175f0;
  iVar5 = 0;
  do {
    iVar7 = 0;
    do {
      if ((((iVar5 != 0) && (iVar7 != 0)) && (iVar5 != 0x6f)) && (iVar7 != 0x9b)) {
        iVar3 = *piVar2 + iVar7 * 0x70 + iVar5;
        if (*(char *)(iVar3 + 0x34a) == '\a') {
          if (((*(char *)(iVar3 + 0x3ba) == '\x06') && (*(char *)(iVar3 + 0x34b) == '\x06')) &&
             ((*(char *)(iVar3 + 0x349) == '\x06' && (*(char *)(iVar3 + 0x2da) == '\x06')))) {
            *(char *)(iVar3 + 0x34a) = 6;
            FUN_10051d60(iVar5,iVar7);
          }
          iVar3 = iVar7 * 0x70 + *piVar2 + iVar5;
          if (((*(char *)(iVar3 + 0x3ba) == '\x05') && (*(char *)(iVar3 + 0x34b) == '\x05')) &&
             ((*(char *)(iVar3 + 0x349) == '\x05' && (*(char *)(iVar3 + 0x2da) == '\x05')))) {
            *(char *)(iVar3 + 0x34a) = 5;
            FUN_10051d60(iVar5,iVar7);
          }
        }
      }
      if ((*(char *)(*piVar2 + iVar7 * 0x70 + iVar5 + 0x34a) == '\x06') &&
         (iVar3 = FUN_1009ffa4(iVar5,iVar7,3), iVar3 != 0)) {
        *(char *)(iVar7 * 0x70 + *piVar2 + iVar5 + 0x34a) = 7;
        FUN_10051d60(iVar5,iVar7);
      }
      sVar4 = (short)iVar7 + 1;
      iVar7 = (int)sVar4;
    } while (sVar4 < 0x9c);
    sVar4 = (short)iVar5 + 1;
    iVar5 = (int)sVar4;
  } while (sVar4 < 0x70);
  iVar5 = 1;
  do {
    uVar6 = 1;
    do {
      iVar3 = (int)uVar6 * 0x70;
      iVar7 = *piVar2 + iVar3 + iVar5;
      sVar4 = (short)uVar6;
      sVar1 = (short)iVar5;
      if (*(char *)(iVar7 + 0x34a) == '\x06') {
        if (((*(char *)(iVar7 + 0x3bb) == '\x06') && (*(char *)(iVar7 + 0x2d9) == '\x06')) &&
           (*(char *)(iVar7 + 0x2db) != '\x06')) {
          if (*(char *)(iVar7 + 0x3b9) == '\x06') {
LAB_100a38a8:
            iVar3 = (int)uVar6 * 0x70;
            iVar7 = iVar3 + *piVar2 + iVar5;
            if (((*(char *)(iVar7 + 0x2db) == '\x06') && (*(char *)(iVar7 + 0x2d9) != '\x06')) &&
               (*(char *)(iVar7 + 0x3bb) != '\x06')) {
              iVar7 = FUN_1005f230(1,10,0);
              if (iVar7 < 6) {
                *(char *)(iVar3 + *piVar2 + iVar5 + -1 + 0x2da) = 6;
                FUN_10051d60((short)(iVar5 + -1),sVar4 + -1);
              }
              else {
                *(char *)
                 ((int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + *piVar2 + iVar5 +
                 0x3bb) = 6;
                FUN_10051d60(sVar1 + 1,sVar4 + 1);
              }
            }
          }
          else {
            iVar7 = FUN_1005f230(1,10,0);
            if (iVar7 < 6) {
              *(char *)(iVar3 + *piVar2 + iVar5 + 0x2db) = 6;
              FUN_10051d60(sVar1 + 1,sVar4 + -1);
            }
            else {
              *(char *)
               (*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5 + -1 +
               0x3ba) = 6;
              FUN_10051d60((short)(iVar5 + -1),sVar4 + 1);
            }
          }
        }
        else if (*(char *)((int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + *piVar2 +
                           iVar5 + 0x3b9) == '\x06') goto LAB_100a38a8;
      }
      uVar6 = (unsigned long long)(short)(sVar4 + 1);
    } while ((short)(sVar4 + 1) < 0x9b);
    iVar5 = (int)(short)(sVar1 + 1);
    if (0x6e < (short)(sVar1 + 1)) {
      return;
    }
  } while( true );
}







































































































































































































































































































































































































































































































































































































/* Address: 0x100a39ac Size: 212 bytes */
void FUN_100a39ac()

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  piVar2 = piRam101175f0;
  iVar3 = FUN_1002b83c();
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      iVar6 = 0;
      do {
        cVar1 = *(char *)(*piVar2 + iVar6 * 0x70 + iVar3 + 0x34a);
        if (((cVar1 != '\x06') && (cVar1 != '\x05')) &&
           (iVar4 = FUN_1009ffa4(iVar3,iVar6,6), iVar4 != 0)) {
          *(char *)(*piVar2 + iVar6 * 0x70 + iVar3 + 0x34a) = 5;
          FUN_10051d60(iVar3,iVar6);
        }
        sVar5 = (short)iVar6 + 1;
        iVar6 = (int)sVar5;
      } while (sVar5 < 0x9c);
      sVar5 = (short)iVar3 + 1;
      iVar3 = (int)sVar5;
    } while (sVar5 < 0x70);
  }
  return;
}



























































































































































































/* Address: 0x100a3a80 Size: 76 bytes */
void FUN_100a3a80()

{
  *(short *)(*piRam101175f0 + 0x348) = 0;
  FUN_100a2760();
  FUN_100a28dc();
  FUN_100a2a58();
  FUN_100a33ac();
  FUN_100a35cc();
  FUN_100a39ac();
  return;
}

/* Address: 0x100a49cc Size: 52 bytes */
void FUN_100a49cc()

{
  FUN_100a3acc();
  FUN_100a40bc();
  FUN_100a40bc();
  return;
}

/* Address: 0x100a6204 Size: 148 bytes */
void FUN_100a6204()

{
  int *puVar1;
  
  puVar1 = puRam10115f7c;
  FUN_100a4ae8();
  FUN_100514d8(*puVar1,0x5c);
  FUN_100a7248();
  FUN_100ab334();
  FUN_100514d8(*puVar1,0x5e);
  FUN_100a88d0();
  FUN_100514d8(*puVar1,0x60);
  FUN_100a4e0c();
  FUN_100514d8(*puVar1,0x62);
  FUN_100a52b8();
  FUN_100a6060();
  return;
}

/* Address: 0x100a6364 Size: 348 bytes */
void FUN_100a6364(short param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  short sVar4;
  int iVar3;
  short sVar5;
  short sVar6;
  short local_28;
  short local_26 [19];
  
  piVar2 = piRam101175f4;
  piVar1 = piRam101175f0;
  sVar4 = FUN_1005f230(1,5,3);
  sVar6 = 0;
  if (0 < sVar4) {
    do {
      iVar3 = FUN_1005f230(1,8,0xffffffffffffffff);
      sVar5 = FUN_1005f230(1,3,0);
      local_26[0] = param_1 + sVar5 * *(short *)(*piVar2 + iVar3 * 4 + 0xbc);
      iVar3 = FUN_1005f230(1,8,0xffffffffffffffff);
      sVar5 = FUN_1005f230(1,3,0);
      local_28 = param_2 + sVar5 * *(short *)(*piVar2 + iVar3 * 4 + 0xbe);
      FUN_10051dc8(local_26,&local_28);
      iVar3 = *piVar1 + local_28 * 0x70 + (int)local_26[0];
      if (*(char *)(iVar3 + 0x34a) == '\a') {
        *(char *)(iVar3 + 0x34a) = 8;
        FUN_10051d60(local_26[0],local_28);
      }
      sVar6 = sVar6 + 1;
    } while (sVar6 < sVar4);
  }
  return;
}













































































































































































































/* Address: 0x100a64c0 Size: 488 bytes */
void FUN_100a64c0()

{
  short sVar1;
  short sVar2;
  int bVar3;
  int *piVar4;
  int iVar6;
  unsigned long long uVar5;
  int iVar7;
  short sVar8;
  
  piVar4 = piRam101175f0;
  sVar8 = 0;
  bVar3 = false;
  do {
    iVar6 = FUN_1005f230(1,0x66,5);
    uVar5 = FUN_1005f230(1,0x92,5);
    sVar2 = (short)uVar5;
    sVar1 = (short)iVar6;
    if (*(char *)(*piVar4 + (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0xffffffff) << 4) + iVar6 +
                 0x34a) == '\a') {
      if (sVar8 < 4) {
        iVar7 = FUN_1009ffa4(iVar6,uVar5,3);
        if (iVar7 != 0) {
          bVar3 = true;
        }
        iVar7 = FUN_1009ffa4(sVar1 + 1,uVar5,3);
        if (iVar7 != 0) {
          bVar3 = true;
        }
        iVar7 = FUN_1009ffa4(iVar6,sVar2 + 1,3);
        if (iVar7 != 0) {
          bVar3 = true;
        }
        iVar7 = FUN_1009ffa4(sVar1 + 1,sVar2 + 1,3);
        if (iVar7 != 0) {
          bVar3 = true;
        }
        sVar8 = sVar8 + 1;
      }
      else {
        bVar3 = true;
      }
    }
  } while (!bVar3);
  *(char *)
   (*piVar4 + (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0xffffffff) << 4) + iVar6 + 0x34a) = 8;
  FUN_10051d60(iVar6,uVar5);
  FUN_100a6364(iVar6,uVar5);
  FUN_100a6364(sVar1 + 1,sVar2 + 1);
  FUN_100a6364(sVar1 + -1,sVar2 + -1);
  FUN_100a6364(sVar1 + -1,sVar2 + 1);
  FUN_100a6364(sVar1 + 1,sVar2 + -1);
  return;
}











































































































































































































































































































































/* Address: 0x100a66a8 Size: 96 bytes */
void FUN_100a66a8()

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_1005f230(1,3,0);
  sVar2 = 0;
  if (0 < sVar1) {
    do {
      FUN_100a64c0();
      sVar2 = sVar2 + 1;
    } while (sVar2 < sVar1);
  }
  return;
}

/* Address: 0x100a6f38 Size: 784 bytes */
void FUN_100a6f38()

{
  int *puVar1;
  int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int *puVar5;
  int *ppuVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  unsigned long long uVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  long long lVar13;
  int iVar15;
  unsigned long long uVar14;
  int **local_16c;
  char auStack_148 [16];
  short local_138;
  short local_136;
  char auStack_134 [308];
  
  puVar5 = puRam101175f4;
  piVar4 = piRam101175f0;
  puVar3 = puRam1011735c;
  puVar2 = puRam10115f7c;
  *(short *)(*puRam1011735c + 0x810) = 0x28;
  sVar12 = 0;
  iVar15 = 0;
  do {
    *(short *)(*puVar3 + iVar15 * 0x20 + 0x814) = 0xffff;
    iVar10 = iVar15 * 0x20 + *puVar3;
    *(short *)(iVar10 + 0x812) = *(short *)(iVar10 + 0x814);
    sVar11 = (short)iVar15 + 1;
    iVar15 = (int)sVar11;
  } while (sVar11 < 0x28);
  uVar14 = 0;
  ppuVar6 = 0 /* TVect base */;
  if (0 < *(short *)(*puVar3 + 0x810)) {
    do {
      sVar11 = (short)((int)(((uVar14 & 0x3fffffff) * 4 + uVar14 & 0xffffffff) << 1) /
                      (int)*(short *)(*puVar3 + 0x810));
      if (sVar12 != sVar11) {
        FUN_100514d8(*puVar2,sVar11 + 0x46);
        sVar12 = sVar11;
      }
      FUN_100a6b68(7,&local_136,&local_138);
      lVar13 = (uVar14 & 0x7ffffff) * 0x20;
      iVar15 = (int)lVar13;
      *(short *)(*puVar3 + iVar15 + 0x812) = local_136;
      *(short *)(iVar15 + *puVar3 + 0x814) = local_138;
      *(char *)(*piVar4 + local_138 * 0x70 + (int)local_136 + 0x34a) = 0xb;
      if (*(char *)(iVar15 + *puVar3 + 0x82a) == '\x01') {
        uVar7 = FUN_1005f230(1,10,0xffffffffffffffff);
        puVar1 = (*(int*)((char*)ppuVar6 - 0x422));
        FUN_10001dd0(auStack_134,ZEXT48(puVar1) + 0x44,
                     (unsigned long long)*puVar5 + ((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x7fffffff) * 2 +
                     0x1000);
        lVar13 = (uVar14 & 0x7ffffff) * 0x20;
        FUN_10001e78((unsigned long long)*puVar3 + lVar13 + 0x816,auStack_134);
        FUN_10001dd0(auStack_134,ZEXT48(puVar1) + 0x50,uVar14,lVar13 + (unsigned long long)*puVar3 + 0x816);
      }
      else {
        uVar7 = FUN_1005f230(1,*(short *)(*puVar5 + 0xed2),0xffffffffffffffff);
        uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
        uVar9 = FUN_1005f230(1,10,0xffffffffffffffff);
        FUN_10001dd0(auStack_148,(*(int*)((char*)ppuVar6 - 0x422)),
                     (unsigned long long)*puVar5 + ((uVar9 & 0x3fffffff) * 4 + uVar9 & 0x7fffffff) * 2 +
                     0xf38,(unsigned long long)*puVar5 + ((uVar8 & 0x3fffffff) * 4 + uVar8 & 0x7fffffff) * 2
                           + 0xf9c);
        FUN_10001dd0(auStack_134,
                     (unsigned long long)*puVar5 + ((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x3fffffff) * 4 +
                     0xed4,auStack_148);
        FUN_10001e78(lVar13 + (unsigned long long)*puVar3 + 0x816,auStack_134);
        FUN_10001dd0(auStack_134,ZEXT48(local_16c[-0x422]) + 8,uVar14,
                     lVar13 + (unsigned long long)*puVar3 + 0x816);
      }
      FUN_10001e78(*puVar5 + (int)*(short *)(*puVar5 + 0x1066) + 0x3e96,auStack_134);
      sVar11 = FUN_100012c0(auStack_134);
      *(short *)(*puVar5 + 0x1066) = *(short *)(*puVar5 + 0x1066) + sVar11;
      sVar11 = (short)uVar14 + 1;
      uVar14 = (unsigned long long)sVar11;
      ppuVar6 = local_16c;
    } while (sVar11 < *(short *)(*puVar3 + 0x810));
  }
  return;
}

















































































































































































































































































































































































































































































































































/* Address: 0x100a9628 Size: 1504 bytes */
void FUN_100a9628()

{
  char cVar1;
  short sVar2;
  int *piVar3;
  short sVar5;
  int iVar4;
  unsigned short uVar6;
  int iVar7;
  unsigned long long uVar8;
  int iVar9;
  
  piVar3 = piRam101175f0;
  iVar7 = 0;
  do {
    uVar8 = 0;
    do {
      cVar1 = *(char *)(*piVar3 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) +
                        iVar7 + 0x34a);
      uVar6 = 0;
      if (((cVar1 == '\a') || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
        cVar1 = *(char *)((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 +
                          iVar7 + 0x3ba);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar6 = 1;
        }
        cVar1 = *(char *)((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 +
                          iVar7 + 0x2da);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar6 = uVar6 + 1;
        }
        cVar1 = *(char *)(*piVar3 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) +
                          iVar7 + 0x34b);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar6 = uVar6 + 1;
        }
        iVar9 = *piVar3 + (int)uVar8 * 0x70;
        if (*(char *)(iVar9 + iVar7 + 0x349) == '\x03') {
LAB_100a9768:
          uVar6 = uVar6 + 1;
        }
        else if (*(char *)(iVar9 + iVar7 + 0x349) == '\x02') goto LAB_100a9768;
        if (2 < uVar6) {
          *(char *)
           (*piVar3 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + iVar7 + 0x34a) =
               2;
          FUN_10051d60(iVar7,uVar8);
        }
      }
      sVar5 = (short)uVar8 + 1;
      uVar8 = (unsigned long long)sVar5;
    } while (sVar5 < 0x9c);
    sVar5 = (short)iVar7 + 1;
    iVar7 = (int)sVar5;
  } while (sVar5 < 0x70);
  iVar7 = 0;
  do {
    iVar9 = 0;
    do {
      if ((((*(char *)(*piVar3 + iVar9 * 0x70 + iVar7 + 0x34a) == '\x03') &&
           (iVar4 = FUN_1009ffa4(iVar7,iVar9,7), iVar4 == 0)) &&
          (iVar4 = FUN_1009ffa4(iVar7,iVar9,5), iVar4 == 0)) &&
         (iVar4 = FUN_1009ffa4(iVar7,iVar9,6), iVar4 == 0)) {
        *(char *)(iVar9 * 0x70 + *piVar3 + iVar7 + 0x34a) = 2;
        FUN_10051d60(iVar7,iVar9);
      }
      sVar5 = (short)iVar9 + 1;
      iVar9 = (int)sVar5;
    } while (sVar5 < 0x9c);
    sVar5 = (short)iVar7 + 1;
    iVar7 = (int)sVar5;
  } while (sVar5 < 0x70);
  iVar7 = 1;
  do {
    uVar8 = 1;
    do {
      cVar1 = *(char *)(*piVar3 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) +
                        iVar7 + 0x34a);
      sVar2 = (short)iVar7;
      sVar5 = (short)uVar8;
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        cVar1 = *(char *)((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 +
                          iVar7 + 0x3bb);
        if (((cVar1 == '\x02') || (cVar1 == '\x03')) &&
           ((iVar9 = (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3,
            *(char *)(iVar9 + iVar7 + 0x2d9) == '\x02' ||
            (*(char *)(iVar9 + iVar7 + 0x2d9) == '\x03')))) {
          cVar1 = *(char *)((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 +
                            iVar7 + 0x2db);
          if ((cVar1 == '\x05') || ((cVar1 == '\x04' || (cVar1 == '\a')))) {
            iVar9 = (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3;
            if (*(char *)(iVar9 + iVar7 + 0x3b9) != '\x05') {
              cVar1 = *(char *)(iVar7 + iVar9 + 0x3b9);
              if ((cVar1 != '\x04') && (cVar1 != '\a')) goto LAB_100a9a50;
            }
            iVar9 = FUN_1005f230(1,10,0);
            if (iVar9 < 5) {
              *(char *)
               (*piVar3 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + iVar7 +
               0x2db) = 3;
              FUN_10051d60(sVar2 + 1,sVar5 + -1);
            }
            else {
              *(char *)
               (*piVar3 + (int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + iVar7 + -1 +
               0x3ba) = 3;
              FUN_10051d60((short)(iVar7 + -1),sVar5 + 1);
            }
            goto LAB_100a9bd4;
          }
        }
LAB_100a9a50:
        iVar9 = (int)uVar8 * 0x70 + *piVar3;
        if (*(char *)(iVar9 + iVar7 + 0x3b9) != '\x02') {
          if (*(char *)(iVar9 + iVar7 + 0x3b9) != '\x03') goto LAB_100a9bd4;
        }
        cVar1 = *(char *)((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 +
                          iVar7 + 0x2db);
        if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
          iVar9 = (int)uVar8 * 0x70 + *piVar3;
          if (*(char *)(iVar9 + iVar7 + 0x2d9) != '\x05') {
            cVar1 = *(char *)(iVar7 + iVar9 + 0x2d9);
            if ((cVar1 != '\x04') && (cVar1 != '\a')) goto LAB_100a9bd4;
          }
          cVar1 = *(char *)((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 +
                            iVar7 + 0x3bb);
          if ((cVar1 == '\x05') || ((cVar1 == '\x04' || (cVar1 == '\a')))) {
            iVar9 = FUN_1005f230(1,10,0);
            if (iVar9 < 5) {
              *(char *)
               ((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 + iVar7 + -1 +
               0x2da) = 3;
              FUN_10051d60((short)(iVar7 + -1),sVar5 + -1);
            }
            else {
              *(char *)
               ((int)(((uVar8 & 0x1fffffff) * 8 - uVar8 & 0xffffffff) << 4) + *piVar3 + iVar7 +
               0x3bb) = 3;
              FUN_10051d60(sVar2 + 1,sVar5 + 1);
            }
          }
        }
      }
LAB_100a9bd4:
      uVar8 = (unsigned long long)(short)(sVar5 + 1);
    } while ((short)(sVar5 + 1) < 0x9b);
    iVar7 = (int)(short)(sVar2 + 1);
    if (0x6e < (short)(sVar2 + 1)) {
      return;
    }
  } while( true );
}

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100a9c08 Size: 216 bytes */
void FUN_100a9c08()

{
  int *piVar1;
  short sVar2;
  
  piVar1 = piRam101175f4;
  sVar2 = 0;
  if (0 < *(short *)(*piRam101175f4 + 0x3a)) {
    do {
      FUN_100a8d88(0,1,0);
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(*piVar1 + 0x3a));
  }
  sVar2 = 0;
  if (0 < *(short *)(*piVar1 + 0x38)) {
    do {
      FUN_100a8d88(1,1,0);
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(*piVar1 + 0x38));
  }
  FUN_100a9628();
  FUN_100a0038();
  FUN_100a35cc();
  FUN_100a39ac();
  FUN_100a9628();
  FUN_100a0038();
  return;
}

/* Address: 0x100ab22c Size: 148 bytes */
void FUN_100ab22c()

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned long long uVar3;
  short sVar4;
  unsigned long long uVar5;
  
  puVar2 = puRam101175f4;
  puVar1 = puRam1011735c;
  uVar5 = 0;
  do {
    uVar3 = FUN_1005f230(1,5,0xffffffffffffffff);
    FUN_10001e78((unsigned long long)*puVar1 + ((uVar5 & 0x3fffffff) * 4 + uVar5 & 0x3fffffff) * 4,
                 (unsigned long long)*puVar2 + uVar5 * 100 +
                 ((uVar3 & 0x3fffffff) * 4 + uVar3 & 0x3fffffff) * 4 + 0x764);
    sVar4 = (short)uVar5 + 1;
    uVar5 = (unsigned long long)sVar4;
  } while (sVar4 < 8);
  return;
}































































































































/* Address: 0x100ab334 Size: 52 bytes */
void FUN_100ab334()

{
  FUN_100a7544();
  FUN_100ab22c();
  FUN_100ab2c4();
  return;
}

/* Address: 0x100ab9e4 Size: 384 bytes */
void FUN_100ab9e4()

{
  int iVar1;
  int *piVar2;
  short sVar3;
  unsigned char bVar4;
  int iVar5;
  unsigned long long uVar6;
  
  piVar2 = piRam101175f0;
  iVar5 = 0;
  do {
    uVar6 = 0;
    do {
      if ((((iVar5 != 0) && ((int)uVar6 != 0)) && (iVar5 != 0x6f)) &&
         (((int)uVar6 != 0x9b &&
          (iVar1 = *piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5,
          *(char *)(iVar1 + 0x34a) == '\x05')))) {
        bVar4 = *(char *)(iVar1 + 0x3ba) == '\x06';
        if (*(char *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5
                     + 0x2da) == '\x06') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5
                     + 0x34b) == '\x06') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5
                     + 0x349) == '\x06') {
          bVar4 = bVar4 + 1;
        }
        if (2 < bVar4) {
          *(char *)
           (*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5 + 0x34a) =
               6;
          FUN_10051d60(iVar5,uVar6);
        }
      }
      sVar3 = (short)uVar6 + 1;
      uVar6 = (unsigned long long)sVar3;
    } while (sVar3 < 0x9c);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 0x70);
  return;
}





















































































































































































































































































/* Address: 0x100abb68 Size: 384 bytes */
void FUN_100abb68()

{
  int iVar1;
  int *piVar2;
  short sVar3;
  unsigned char bVar4;
  int iVar5;
  unsigned long long uVar6;
  
  piVar2 = piRam101175f0;
  iVar5 = 0;
  do {
    uVar6 = 0;
    do {
      if ((((iVar5 != 0) && ((int)uVar6 != 0)) && (iVar5 != 0x6f)) &&
         (((int)uVar6 != 0x9b &&
          (iVar1 = *piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5,
          *(char *)(iVar1 + 0x34a) == '\a')))) {
        bVar4 = *(char *)(iVar1 + 0x3ba) == '\x05';
        if (*(char *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5
                     + 0x2da) == '\x05') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5
                     + 0x34b) == '\x05') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5
                     + 0x349) == '\x05') {
          bVar4 = bVar4 + 1;
        }
        if (2 < bVar4) {
          *(char *)
           (*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 4) + iVar5 + 0x34a) =
               5;
          FUN_10051d60(iVar5,uVar6);
        }
      }
      sVar3 = (short)uVar6 + 1;
      uVar6 = (unsigned long long)sVar3;
    } while (sVar3 < 0x9c);
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
  } while (sVar3 < 0x70);
  return;
}





















































































































































































































































































/* Address: 0x100abcec Size: 160 bytes */
void FUN_100abcec()

{
  int *piVar1;
  short sVar2;
  
  piVar1 = piRam101175f4;
  sVar2 = 0;
  if (0 < *(short *)(*piRam101175f4 + 0x40)) {
    do {
      FUN_100ab368(0);
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(*piVar1 + 0x40));
  }
  sVar2 = 0;
  if (0 < *(short *)(*piVar1 + 0x3e)) {
    do {
      FUN_100ab368(1);
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(*piVar1 + 0x3e));
  }
  FUN_100ab9e4();
  FUN_100abb68();
  FUN_100a39ac();
  return;
}

/* Address: 0x100afb5c Size: 148 bytes */
void FUN_100afb5c(int param_1,unsigned long long param_2,unsigned long long param_3)

{
  unsigned long long uVar1;
  
  if ((unsigned long long)*(unsigned int *)(param_1 + 0x1c) < (param_2 & 0xffffffff)) {
    *(int *)(param_1 + 0x1c) = (int)param_2;
  }
  if ((unsigned long long)*(unsigned int *)(param_1 + 0x18) < (param_3 & 0xffffffff)) {
    *(int *)(param_1 + 0x18) = (int)param_3;
  }
  uVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x30));
  if ((uVar1 & 0xffffffff) < (param_2 & 0xffffffff)) {
    FUN_100afb10(param_1,param_2);
  }
  else {
    FUN_100afb10(param_1,param_3);
  }
  return;
}

/* Address: 0x100b02d0 Size: 84 bytes */
unsigned long long FUN_100b02d0(unsigned long long param_1)

{
  if ((param_1 & 0xffffffff) == 0) {
    param_1 = FUN_100f56e4(4);
  }
  return param_1;
}

/* Address: 0x100b0578 Size: 4 bytes */
void FUN_100b0578()

{
  return;
}

/* Address: 0x100b057c Size: 20 bytes */
long long FUN_100b057c(long long param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 4;
}

/* Address: 0x100b06d4 Size: 68 bytes */
void FUN_100b06d4(short *param_1,short *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}

/* Address: 0x100b08d4 Size: 64 bytes */
void FUN_100b08d4(int *param_1,short *param_2)

{
  int local_8;
  
  local_8 = CONCAT22(param_2[2] - *param_2,param_2[3] - param_2[1]);
  *param_1 = local_8;
  return;
}

/* Address: 0x100b0960 Size: 176 bytes */
char * FUN_100b0960(int param_1,long long param_2)

{
  char *puVar1;
  unsigned int uVar2;
  char *puVar3;
  unsigned int local_10 [4];
  
  puVar1 = (char *)
           FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x60),param_2,local_10);
  if (puVar1 != (char *)0x0) {
    if ((*(char *)(param_1 + 4) != '\0') && (uVar2 = 0, puVar3 = puVar1, local_10[0] != 0)) {
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_10[0]);
    }
    *(unsigned int *)(param_1 + 8) = *(int *)(param_1 + 8) + local_10[0];
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return puVar1;
}

/* Address: 0x100b0a18 Size: 192 bytes */
void FUN_100b0a18(int param_1,char *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char *puVar3;
  
  if (param_2 != (char *)0x0) {
    uVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x68),param_2);
    if (*(char *)(param_1 + 5) != '\0') {
      uVar2 = 0;
      puVar3 = param_2;
      if (uVar1 != 0) {
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
    }
    FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x70),param_2);
    *(unsigned int *)(param_1 + 8) = *(int *)(param_1 + 8) - uVar1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}

/* Address: 0x100b1058 Size: 220 bytes */
int FUN_100b1058(int param_1,long long param_2,long long param_3,short param_4)

{
  int iVar1;
  int *ppuVar2;
  short sVar3;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != 0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = FUN_100b0c24(0xbc), param_1 != 0)) {
    FUN_100af728(param_1,param_2,param_3);
    *(int **)(param_1 + 0x10) = (*(int*)((char*)ppuVar2 - 0x40a));
    *(int **)(param_1 + 0x34) = (*(int*)((char*)ppuVar2 - 0x409));
    FUN_101175c4(param_1 + 0x38,0x10,8,(*(int*)((char*)ppuVar2 - 0x408)));
    *(short *)(param_1 + 0xb8) = param_4;
    *(short *)(param_1 + 0x30) = 0;
    iVar1 = **(int **)(param_1 + 0x34);
    while (iVar1 != 0) {
      sVar3 = *(short *)(param_1 + 0x30) + 1;
      *(short *)(param_1 + 0x30) = sVar3;
      iVar1 = *(int *)(*(int *)(param_1 + 0x34) + sVar3 * 4);
    }
  }
  return param_1;
}

/* Address: 0x100b1134 Size: 220 bytes */
int FUN_100b1134(int param_1,int param_2,long long param_3,long long param_4,
                short param_5)

{
  int iVar1;
  int *ppuVar2;
  short sVar3;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != 0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = FUN_100b0c24(0xbc), param_1 != 0)) {
    FUN_100af728(param_1,param_3,param_4);
    *(int **)(param_1 + 0x10) = (*(int*)((char*)ppuVar2 - 0x40a));
    *(int *)(param_1 + 0x34) = param_2;
    FUN_101175c4(param_1 + 0x38,0x10,8,(*(int*)((char*)ppuVar2 - 0x408)));
    *(short *)(param_1 + 0xb8) = param_5;
    *(short *)(param_1 + 0x30) = 0;
    iVar1 = **(int **)(param_1 + 0x34);
    while (iVar1 != 0) {
      sVar3 = *(short *)(param_1 + 0x30) + 1;
      *(short *)(param_1 + 0x30) = sVar3;
      iVar1 = *(int *)(*(int *)(param_1 + 0x34) + sVar3 * 4);
    }
  }
  return param_1;
}

/* Address: 0x100b1210 Size: 36 bytes */
void FUN_100b1210()

{
  FUN_100afb34();
  return;
}

/* Address: 0x100b1b90 Size: 136 bytes */
unsigned int FUN_100b1b90(unsigned char *param_1,long long param_2,unsigned int param_3)

{
  char *puVar1;
  int iVar2;
  unsigned int uVar3;
  char auStack_111 [273];
  
  puVar1 = auStack_111 + 1;
  FUN_100012d8(param_1 + 1,puVar1,*param_1);
  puVar1[*param_1] = 0;
  iVar2 = FUN_10002958(auStack_111 + (param_3 & 0xff),param_2);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (iVar2 - (int)puVar1) + 1;
  }
  return uVar3 & 0xff;
}

/* Address: 0x100b1c84 Size: 4 bytes */
void FUN_100b1c84()

{
  return;
}

/* Address: 0x100b1c88 Size: 148 bytes */
void FUN_100b1c88(long long param_1,short param_2,short param_3)

{
  unsigned char *pbVar1;
  long long lVar2;
  long long lVar3;
  
  lVar2 = (long long)param_2;
  if ((0 < lVar2) && (0 < (long long)param_3)) {
    pbVar1 = (unsigned char *)param_1;
    if ((int)param_2 <= (int)(unsigned int)*pbVar1) {
      if ((int)(unsigned int)*pbVar1 < (int)param_3 + (int)param_2) {
        *pbVar1 = (char)param_2 - 1;
      }
      else {
        lVar3 = lVar2 + param_3;
        FUN_100012d8(lVar3 + param_1,lVar2 + param_1,((unsigned long long)*pbVar1 - lVar3) + 1);
        *pbVar1 = *pbVar1 - (char)param_3;
      }
    }
  }
  return;
}

/* Address: 0x100b1d90 Size: 128 bytes */
char * FUN_100b1d90(char *param_1,long long param_2)

{
  unsigned int uVar1;
  
  if ((int)param_2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_100012c0(param_2);
    if (uVar1 < 0x100) {
      *param_1 = (char)uVar1;
    }
    else {
      *param_1 = 0xff;
    }
    FUN_100012d8(param_2,param_1 + 1,*param_1);
  }
  return param_1;
}

/* FUN_100b1e10 defined elsewhere */


/* Address: 0x100b1ed0 Size: 156 bytes */
void FUN_100b1ed0(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3)

{
  *param_1 = 0;
  if ((unsigned int)*param_2 + (unsigned int)*param_3 < 0x100) {
    *param_1 = *param_2 + *param_3;
  }
  else {
    *param_1 = 0xff;
  }
  FUN_100012d8(param_2 + 1,param_1 + 1,*param_2);
  FUN_100012d8(param_3 + 1,param_1 + *param_2 + 1,(unsigned int)*param_1 - (unsigned int)*param_2);
  return;
}

/* Address: 0x100b226c Size: 68 bytes */
long long FUN_100b226c(short *param_1,short *param_2)

{
  long long uVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* Address: 0x100b2e74 Size: 888 bytes */
void FUN_100b2e74()

{
  unsigned long long uVar1;
  int iVar2;
  int uVar3;
  unsigned int uVar4;
  int local_198 [4];
  int uStack_188;
  int uStack_184;
  int uStack_180;
  int uStack_17c;
  int local_178;
  int uStack_174;
  int uStack_170;
  int uStack_16c;
  int uStack_168;
  int uStack_164;
  int uStack_160;
  int local_158 [4];
  int uStack_148;
  int uStack_144;
  int uStack_140;
  int uStack_13c;
  int local_138;
  int uStack_134;
  int uStack_130;
  int uStack_12c;
  int uStack_128;
  int uStack_124;
  int uStack_120;
  char auStack_118 [280];
  
  uVar1 = ZEXT48(0 /* TVect base */);
  local_158[0] = *puRam10116910;
  local_158[1] = puRam10116910[1];
  local_158[2] = puRam10116910[2];
  local_158[3] = puRam10116910[3];
  uStack_148 = puRam10116910[4];
  uStack_144 = puRam10116910[5];
  uStack_140 = puRam10116910[6];
  uStack_13c = puRam10116910[7];
  local_138 = puRam10116910[8];
  uStack_134 = puRam10116910[9];
  uStack_130 = puRam10116910[10];
  uStack_12c = puRam10116910[0xb];
  uStack_128 = puRam10116910[0xc];
  uStack_124 = puRam10116910[0xd];
  uStack_120 = puRam10116910[0xe];
  local_198[0] = *puRam10116914;
  local_198[1] = puRam10116914[1];
  local_198[2] = puRam10116914[2];
  local_198[3] = puRam10116914[3];
  uStack_188 = puRam10116914[4];
  uStack_184 = puRam10116914[5];
  uStack_180 = puRam10116914[6];
  uStack_17c = puRam10116914[7];
  local_178 = puRam10116914[8];
  uStack_174 = puRam10116914[9];
  uStack_170 = puRam10116914[10];
  uStack_16c = puRam10116914[0xb];
  uStack_168 = puRam10116914[0xc];
  uStack_164 = puRam10116914[0xd];
  uStack_160 = puRam10116914[0xe];
  if (*pcRam10117378 != '\0') {
    FUN_100b2570();
    FUN_100b25f4(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2678();
    FUN_100b2680(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b26fc();
    FUN_100b2704(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2780();
    FUN_100b2788(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2804();
    FUN_100b280c(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2874();
    FUN_100b287c(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b28f8();
    FUN_100b2900(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2968();
    FUN_100b2970(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b29d8();
    FUN_100b29e0(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2a48();
    FUN_100b2a50(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2ab8();
    FUN_100b2ac0(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2b28();
    FUN_100b2b30(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2bac();
    FUN_100b2bb4(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2c1c();
    FUN_100b2c24(0);
  }
  if (**(char **)((int)uVar1 + -0x528) != '\0') {
    FUN_100b2ca0();
    FUN_100b2ca8(0);
  }
  uVar4 = 0;
  do {
    FUN_100b19f4(auStack_118,local_158[uVar4]);
    FUN_100ed954(auStack_118,local_198[uVar4]);
    iVar2 = (int)uVar1;
    uVar4 = (unsigned int)(short)((short)uVar4 + 1);
  } while (uVar4 < 0xf);
  uVar3 = FUN_100b2680(0);
  **(int **)(iVar2 + -0xec) = uVar3;
  FUN_100b2d54();
  uVar3 = FUN_100b2704(0);
  **(int **)(iVar2 + -0xe8) = uVar3;
  FUN_100b2d84();
  uVar3 = FUN_100b2788(0);
  **(int **)(iVar2 + -0xe4) = uVar3;
  FUN_100b2db4();
  uVar3 = FUN_100b287c(0);
  **(int **)(iVar2 + -0xe0) = uVar3;
  FUN_100b2de4();
  uVar3 = FUN_100b2b30(0);
  **(int **)(iVar2 + -0xdc) = uVar3;
  FUN_100b2e14();
  uVar3 = FUN_100b2c24(0);
  **(int **)(iVar2 + -0xd8) = uVar3;
  FUN_100b2e44();
  return;
}

/* Address: 0x100b4c68 Size: 524 bytes */

void FUN_100b4c68()

{
  int *puVar1;
  int uVar4;
  short sVar7;
  int iVar5;
  int *puVar6;
  char uVar10;
  unsigned long long uVar2;
  long long uVar3;
  short sVar8;
  short sVar9;
  short sVar11;
  int *puVar12;
  int local_174;
  char auStack_14c [256];
  short local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  puVar1 = puRam10117370;
  uVar4 = FUN_10000a98(uRam101169c8,0xfd0,1);
  **(int **)(local_174 + -0xed4) = uVar4;
  FUN_100db26c();
  sVar7 = FUN_100023d0(0x61656474);
  FUN_100db328();
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = *puVar1;
  *puVar1 = auStack_14c;
  iVar5 = FUN_10000090(auStack_14c);
  if (iVar5 == 0) {
    sVar9 = 1;
    if (0 < sVar7) {
      do {
        puVar6 = (int *)FUN_100023e8(0x61656474,sVar9);
        FUN_100db2a4();
        uVar10 = FUN_100ef9b8(puVar6);
        uVar2 = FUN_10001c20(puVar6);
        iVar5 = local_174;
        FUN_100db1ec();
        sVar11 = (short)((uVar2 & 0xffffffff) / 0xc);
        puVar12 = (int *)*puVar6;
        uVar3 = FUN_100eecf8(*(int *)(iVar5 + -0xed0));
        uVar3 = FUN_10000a98(uVar3,0xfe0,1);
        FUN_100db26c(uVar3);
        sVar8 = 1;
        if (0 < sVar11) {
          do {
            FUN_10002418(*puVar12,puVar12[1],uVar3,puVar12[2],0);
            FUN_100db2f4();
            puVar12 = puVar12 + 3;
            sVar8 = sVar8 + 1;
          } while (sVar8 <= sVar11);
        }
        FUN_10001b60(puVar6,uVar10);
        FUN_10001c98(puVar6);
        sVar9 = sVar9 + 1;
      } while (sVar9 <= sVar7);
    }
    *puVar1 = local_44;
  }
  else {
    FUN_100db158(local_4c,local_48);
  }
  return;
}

/* Address: 0x100beb7c Size: 104 bytes */
int * FUN_100beb7c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x24),
     param_1 != (int *)0x0)) {
    FUN_100e904c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x36d));
  }
  return param_1;
}

/* Address: 0x100becb8 Size: 36 bytes */
void FUN_100becb8()

{
  FUN_100e9124();
  return;
}

/* Address: 0x100c0f10 Size: 96 bytes */
void FUN_100c0f10()

{
  int *ppuVar1;
  int *piVar2;
  
  ppuVar1 = 0 /* TVect base */;
  piVar2 = (int *)FUN_100c0b74(0);
  FUN_100c0c18();
  *(int **)(*(int*)((char*)ppuVar1 - 0x396)) = piVar2;
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 200));
  return;
}

/* Address: 0x100c2120 Size: 176 bytes */
int FUN_100c2120(long long param_1)

{
  int *piVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  int local_120;
  char auStack_11c [264];
  int local_14 [5];
  
  piVar2 = piRam10117804;
  ppuVar3 = 0 /* TVect base */;
  local_14[0] = 0;
  FUN_100c19e4(auStack_11c,param_1,0,*piRam10117804);
  piVar1 = (int *)*piVar2;
  iVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x110),(*(int*)((char*)ppuVar3 - 0x346)),auStack_11c,
                       &local_120);
  if (iVar4 != 0) {
    piVar2 = (int *)*piVar2;
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),local_120,local_14,1);
  }
  return local_14[0];
}

/* Address: 0x100c43ec Size: 8 bytes */
int FUN_100c43ec()

{
  return uRam10116bbc;
}

/* Address: 0x100c43fc Size: 292 bytes */
int * FUN_100c43fc(int *param_1)

{
  int uVar1;
  int *puVar2;
  int *ppuVar3;
  
  puVar2 = puRam10116bc0;
  ppuVar3 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar3 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x84),
     param_1 != (int *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar3 - 0x337));
    FUN_100b02d0(param_1 + 0x1f);
    *(char *)(param_1 + 0xf) = 0;
    uVar1 = puVar2[1];
    param_1[0xd] = *puVar2;
    param_1[0xe] = uVar1;
    param_1[0x10] = 0;
    *(char *)((int)param_1 + 0x3e) = 0;
    param_1[0xc] = 0;
    *(char *)((int)param_1 + 0x3d) = 1;
    *(char *)(param_1 + 0x11) = 0;
    uVar1 = puVar2[1];
    param_1[0x12] = *puVar2;
    param_1[0x13] = uVar1;
    uVar1 = puVar2[1];
    param_1[0x14] = *puVar2;
    param_1[0x15] = uVar1;
    uVar1 = puVar2[1];
    param_1[0x16] = *puVar2;
    param_1[0x17] = uVar1;
    uVar1 = puVar2[1];
    param_1[0x18] = *puVar2;
    param_1[0x19] = uVar1;
    uVar1 = puVar2[1];
    param_1[0x1a] = *puVar2;
    param_1[0x1b] = uVar1;
    uVar1 = puVar2[1];
    param_1[0x1c] = *puVar2;
    param_1[0x1d] = uVar1;
    param_1[0x1e] = 0;
    param_1[0x1f] = *(int *)(*(int*)((char*)ppuVar3 - 0x398));
    *(char *)(param_1 + 0x20) = 0;
  }
  return param_1;
}

/* FUN_100c5dcc defined elsewhere */


/* Address: 0x100c604c Size: 112 bytes */
int * FUN_100c604c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x20),
     param_1 != (int *)0x0)) {
    FUN_100d94c8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x323));
    param_1[7] = 0;
  }
  return param_1;
}

/* Address: 0x100c7d84 Size: 136 bytes */
int * FUN_100c7d84(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc0),
     param_1 != (int *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x317));
    param_1[0x2a] = 0;
    *(short *)(param_1 + 0x2b) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    *(short *)(param_1 + 0x2f) = 0;
  }
  return param_1;
}

/* Address: 0x100c9950 Size: 8 bytes */
int FUN_100c9950()

{
  return uRam10116c54;
}

/* Address: 0x100c9960 Size: 120 bytes */
int * FUN_100c9960(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xc4),
     param_1 != (int *)0x0)) {
    FUN_100c7d84(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x312));
    *(char *)(param_1 + 0x30) = 1;
    param_1[0x20] = 0xe;
  }
  return param_1;
}

/* Address: 0x100ca068 Size: 8 bytes */
int FUN_100ca068()

{
  return uRam10116c60;
}

/* Address: 0x100ca078 Size: 112 bytes */
int * FUN_100ca078(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(200),
     param_1 != (int *)0x0)) {
    FUN_100c9960(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x30f));
    param_1[0x31] = 0;
  }
  return param_1;
}

/* Address: 0x100d7adc Size: 156 bytes */
int * FUN_100d7adc(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x20),
     param_1 != (int *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x280));
    param_1[1] = 0;
    param_1[5] = 0;
    param_1[4] = 6;
    *(short *)(param_1 + 3) = 1;
    *(short *)((int)param_1 + 0xe) = 0;
    *(char *)(param_1 + 6) = 0;
    param_1[2] = 0;
    param_1[7] = 0;
  }
  return param_1;
}

/* Address: 0x100d7ba0 Size: 276 bytes */
void FUN_100d7ba0(int *param_1,long long param_2,short param_3)

{
  int *puVar1;
  int iVar2;
  short sVar3;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = puRam10117370;
  FUN_100f5274(param_1);
  param_1[2] = 0;
  *(short *)(param_1 + 3) = param_3;
  param_1[5] = 0;
  *(short *)((int)param_1 + 0xe) = 0;
  if (0 < (long long)param_3 + -1) {
    do {
      sVar3 = *(short *)((int)param_1 + 0xe) + 1;
      *(short *)((int)param_1 + 0xe) = sVar3;
    } while (0 < param_3 + -1 >> ((int)sVar3 & 0x3fU));
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puVar1;
  *puVar1 = auStack_138;
  iVar2 = FUN_10000090(auStack_138);
  if (iVar2 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),param_2);
    *puVar1 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_38,local_34);
  }
  return;
}

/* Address: 0x100da260 Size: 96 bytes */
void FUN_100da260(int *param_1,long long param_2)

{
  long long uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if ((int)uVar1 != 0) {
    FUN_100da1d0(uVar1,param_2);
  }
  return;
}

/* FUN_100da3f0 defined elsewhere */


/* Address: 0x100db1ec Size: 64 bytes */
void FUN_100db1ec()

{
  long long uVar1;
  
  uVar1 = FUN_10002b20();
  if ((int)uVar1 != 0) {
    FUN_100db158(uVar1,0);
  }
  return;
}









































/* Address: 0x100e1674 Size: 68 bytes */
void FUN_100e1674(int *param_1,int *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}

/* Address: 0x100e8cdc Size: 8 bytes */
int FUN_100e8cdc()

{
  return uRam10116ff0;
}

/* Address: 0x100e8cec Size: 200 bytes */
int * FUN_100e8cec(int *param_1)

{
  int *ppuVar1;
  int *piVar2;
  int local_18;
  int local_14 [5];
  
  ppuVar1 = 0 /* TVect base */;
  piVar2 = &local_18;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x128),
     param_1 != (int *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x22b));
    *(char *)(param_1 + 8) = 0;
    param_1[0x49] = 0;
    FUN_100b1d90(param_1 + 8,ZEXT48((*(int*)((char*)ppuVar1 - 0x22d))) + 0x18);
    local_14[0] = FUN_10000eb8();
    local_18 = 0xff;
    if (local_14[0] < 0xff) {
      piVar2 = local_14;
    }
    param_1[0x48] = *piVar2;
  }
  return param_1;
}

/* Address: 0x100e90bc Size: 104 bytes */
int * FUN_100e90bc(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x24),
     param_1 != (int *)0x0)) {
    FUN_100e904c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x226));
  }
  return param_1;
}

/* Address: 0x100e9e78 Size: 8 bytes */
int FUN_100e9e78()

{
  return uRam10117018;
}

/* Address: 0x100ebbe0 Size: 136 bytes */
void FUN_100ebbe0(int param_1)

{
  int *piVar1;
  int uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_100eb8d0(param_1);
    *(int *)(*(int *)(param_1 + 0x10) + 4) = uVar2;
    piVar1 = *(int **)(param_1 + 0x10);
    if ((*(char *)(piVar1 + 6) != '\0') && (piVar1[1] == 0)) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x90) + (int)piVar1);
      *(int *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

/* Address: 0x100ec5c8 Size: 100 bytes */
void FUN_100ec5c8(int param_1,long long param_2)

{
  long long uVar1;
  int uVar2;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar2 = FUN_10000a98(uVar1,0,1);
  *(int *)(param_1 + 8) = uVar2;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffffffffffa9f4,*(int *)(param_1 + 8));
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ecf88(short *param_1) { }






























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* FUN_100eecf8 defined elsewhere */


/* FUN_100ef284 defined elsewhere */






















/* Address: 0x100ef2f8 Size: 56 bytes */
unsigned long long FUN_100ef2f8()

{
  long long lVar1;
  long long lVar2;
  
  lVar1 = FUN_10000468();
  lVar2 = -lVar1 + -1;
  return lVar2 + (-(unsigned long long)(lVar2 == 0) - (-lVar1 + -2)) & 0xff;
}

/* FUN_100f0334 defined elsewhere */


/* Address: 0x100f06dc Size: 172 bytes */
void FUN_100f06dc(short param_1,short *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  short uVar3;
  char local_110 [272];
  
  local_110[0] = 0;
  puVar2 = (unsigned int *)FUN_10001728(0x54785374,param_1);
  FUN_100db2a4();
  *(char *)(param_2 + 1) = *(char *)*puVar2;
  param_2[2] = *(short *)(*puVar2 + 2);
  uVar1 = *(unsigned int *)(*puVar2 + 8);
  *(int *)(param_2 + 3) = *(int *)(*puVar2 + 4);
  *(unsigned int *)(param_2 + 5) = uVar1 & 0xffff0000;
  FUN_100ef284((unsigned long long)*puVar2 + 10,local_110);
  uVar3 = FUN_100ef6e4(local_110);
  *param_2 = uVar3;
  return;
}

/* Address: 0x100f0d3c Size: 312 bytes */

void FUN_100f0d3c(int param_1,char param_2)

{
  int *puVar1;
  int *puVar2;
  char *puVar3;
  char *pcVar4;
  int *ppuVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int **local_54;
  int local_30;
  int local_2c [11];
  
  pcVar4 = pcRam1011785c;
  puVar3 = puRam10117858;
  puVar2 = puRam10117854;
  puVar1 = puRam10117850;
  ppuVar5 = 0 /* TVect base */;
  piVar8 = &local_30;
  local_2c[1] = 0;
  *puRam10117858 = 1;
  if (*pcVar4 == '\0') {
    iVar6 = FUN_100f0b50(*puVar2);
    if (iVar6 != 0) {
      FUN_100011a0(*puVar2);
      *pcVar4 = '\0';
      ppuVar5 = local_54;
    }
    iVar6 = FUN_100f0cc8(0,local_2c + 1);
    local_2c[0] = (*(int *)(*(int*)((char*)ppuVar5 - 0x10)) - iVar6) + -8;
    if (local_2c[0] < param_1) {
      piVar8 = local_2c;
    }
    iVar6 = *piVar8;
    if (0 < iVar6) {
      local_30 = param_1;
      iVar7 = FUN_100f0b50(*puVar1);
      if (iVar7 != 0) {
        FUN_100011a0(*puVar1);
      }
      if (param_2 == '\0') {
        FUN_100002d0(iVar6);
        param_1 = FUN_100002e8(iVar6);
      }
      if (param_1 < iVar6) {
        *puVar3 = 0;
        *pcVar4 = '\0';
      }
    }
  }
  return;
}

/* Address: 0x100f1264 Size: 68 bytes */
int FUN_100f1264()

{
  int *puVar1;
  
  puVar1 = puRam10117850;
  FUN_100f0e74();
  return *(int *)*puVar1 == 0;
}

/* Address: 0x100f2214 Size: 92 bytes */
long long FUN_100f2214(short param_1)

{
  long long uVar1;
  int local_2c;
  
  uVar1 = FUN_100003f0(param_1);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_100f2184(**(int **)(local_2c + -0x794),param_1);
  }
  return uVar1;
}

/* Address: 0x100f25e0 Size: 76 bytes */
void FUN_100f25e0(long long param_1,long long param_2,long long param_3)

{
  FUN_10117884(*piRam10117114 + (int)*(short *)(*(int *)*piRam10117114 + 0x118),param_1,param_2,
               param_3);
  return;
}

/* Address: 0x100f2a54 Size: 716 bytes */
void FUN_100f2a54()

{
  int *ppuVar1;
  int iVar2;
  int *puVar3;
  short sVar9;
  int *piVar4;
  int uVar5;
  int iVar6;
  int iVar7;
  int *puVar8;
  short sVar10;
  int local_16c;
  int local_148;
  int uStack_144;
  int uStack_140;
  int uStack_13c;
  int uStack_138;
  int uStack_134;
  int uStack_130;
  int uStack_12c;
  char auStack_128 [256];
  char auStack_28 [4];
  short local_24 [18];
  
  ppuVar1 = 0 /* TVect base */;
  puVar3 = (int *)FUN_100f56e4(0x20);
  if (puVar3 != (int *)0x0) {
    FUN_100d8824(puVar3);
    *puVar3 = (*(int*)((char*)ppuVar1 - 0x1ee));
  }
  *(int **)ppuVar1[-10] = puVar3;
  FUN_100f1940(puVar3);
  puVar3 = (int *)FUN_100f56e4(0x20);
  if (puVar3 != (int *)0x0) {
    FUN_100d8824(puVar3);
    *puVar3 = (*(int*)((char*)ppuVar1 - 0x1eb));
  }
  *(int **)(*(int*)((char*)ppuVar1 - 0x1e3)) = puVar3;
  FUN_100f1adc(puVar3);
  puVar3 = (int *)FUN_100f56e4(0x20);
  if (puVar3 != (int *)0x0) {
    FUN_100ea428(puVar3);
    *puVar3 = (*(int*)((char*)ppuVar1 - 0x1e8));
  }
  *(int **)(*(int*)((char*)ppuVar1 - 0x1e5)) = puVar3;
  FUN_100f2160(puVar3);
  sVar9 = FUN_10001c68(0x434d4e55);
  FUN_100db328();
  sVar10 = 1;
  if (0 < sVar9) {
    do {
      puVar3 = (int *)FUN_10001c80(0x434d4e55,sVar10);
      FUN_100db2a4(puVar3);
      FUN_10001758(puVar3,local_24,auStack_28,auStack_128);
      if (0 < *(short *)*puVar3) {
        piVar4 = (int *)FUN_100f2844(puVar3);
        uVar5 = FUN_10001728(0x4d444546,*(short *)(*piVar4 + 6));
        *(int *)(*piVar4 + 6) = uVar5;
        FUN_100f29e8(piVar4,local_24[0]);
      }
      sVar10 = sVar10 + 1;
    } while (sVar10 <= sVar9);
  }
  sVar9 = FUN_10001c68(0x4d454e55);
  iVar2 = local_16c;
  FUN_100db328();
  sVar10 = 1;
  if (0 < sVar9) {
    do {
      piVar4 = (int *)FUN_10001c80(0x4d454e55,sVar10);
      iVar2 = local_16c;
      if (piVar4 != (int *)0x0) {
        FUN_10001758(piVar4,local_24,auStack_28,auStack_128);
        iVar6 = FUN_100022f8(piVar4);
        iVar7 = FUN_10002310();
        if (iVar6 != iVar7) {
          if (0 < *(short *)*piVar4) {
            uVar5 = FUN_10001728(0x4d444546,((short *)*piVar4)[3]);
            *(int *)(*piVar4 + 6) = uVar5;
            FUN_100f29e8(piVar4,local_24[0]);
          }
        }
      }
      sVar10 = sVar10 + 1;
    } while (sVar10 <= sVar9);
  }
  puVar8 = (int *)FUN_100f15e0(0x20);
  **(int **)(iVar2 + -0x788) = puVar8;
  puVar3 = *(int **)(iVar2 + -0x784);
  local_148 = *puVar3;
  uStack_144 = puVar3[1];
  uStack_140 = puVar3[2];
  uStack_13c = puVar3[3];
  uStack_138 = puVar3[4];
  uStack_134 = puVar3[5];
  uStack_130 = puVar3[6];
  uStack_12c = puVar3[7];
  FUN_10002340(&local_148,*puVar8,0x20);
  return;
}































































































































































































































































































































































































































































































































































































































/* FUN_100f5108 defined elsewhere */


/* Address: 0x100f56c0 Size: 36 bytes */
void FUN_100f56c0()

{
  FUN_100f5640();
  return;
}

/* FUN_100f5754 defined elsewhere */


/* Address: 0x100f5814 Size: 36 bytes */
void FUN_100f5814()

{
  FUN_100c2250();
  return;
}

/* Address: 0x100fb260 Size: 120 bytes */
int * FUN_100fb260(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x1c),
     param_1 != (int *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x1b8));
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}

/* Address: 0x100fb300 Size: 276 bytes */
void FUN_100fb300(int *param_1,long long param_2,short param_3)

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
  FUN_100f91e0(param_1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar1;
  *puVar1 = auStack_130;
  iVar3 = FUN_10000090(auStack_130);
  if (iVar3 == 0) {
    uVar2 = FUN_10000420();
    FUN_10000438(0);
    iVar3 = FUN_10001728(param_2,param_3);
    param_1[4] = iVar3;
    FUN_10000438(uVar2);
    FUN_100db2a4(param_1[4]);
    iVar3 = FUN_10003888(param_1[4]);
    param_1[6] = iVar3;
    FUN_100db328();
    *puVar1 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158(local_30,local_2c);
  }
  return;
}

/* Address: 0x1010597c Size: 8 bytes */
int FUN_1010597c()

{
  return uRam10116c7c;
}

/* Address: 0x1010d6a8 Size: 8 bytes */
int FUN_1010d6a8()

{
  return uRam101172f8;
}

/* Address: 0x1010d6b8 Size: 180 bytes */
int * FUN_1010d6b8(int *param_1)

{
  int uVar1;
  int *ppuVar2;
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar2 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(400),
     param_1 != (int *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = (*(int*)((char*)ppuVar2 - 0x169));
    *(char *)(param_1 + 0x23) = 0;
    *(short *)(param_1 + 0x20) = 0xffff;
    uVar1 = *(int *)((int)(*(int*)((char*)ppuVar2 - 0x338)) + 4);
    param_1[0x21] = *(int *)(*(int*)((char*)ppuVar2 - 0x338));
    param_1[0x22] = uVar1;
    FUN_100b1d90(param_1 + 0x23,ZEXT48((*(int*)((char*)ppuVar2 - 0x16d))) + 0x10c);
    *(short *)(param_1 + 99) = 0x20;
    *(char *)(param_1 + 5) = 0;
  }
  return param_1;
}

/* Address: 0x1010f044 Size: 8 bytes */
int FUN_1010f044()

{
  return uRam10116f40;
}

/* Address: 0x1010f054 Size: 344 bytes */
int * FUN_1010f054(int *param_1)

{
  int uVar1;
  int *puVar2;
  int *ppuVar3;
  
  puVar2 = puRam10116a40;
  ppuVar3 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar3 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(200),
     param_1 != (int *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = (*(int*)((char*)ppuVar3 - 0x15c));
    FUN_100b02d0((int)param_1 + 0xba);
    FUN_100b02d0((int)param_1 + 0xbe);
    *(char *)((int)param_1 + 0xb1) = 0;
    *(char *)((int)param_1 + 0xa9) = 1;
    *(short *)((int)param_1 + 0xa2) = 0;
    *(int *)((int)param_1 + 0xbe) = *puVar2;
    *(int *)((int)param_1 + 0xba) = *puVar2;
    *(char *)(param_1 + 0x2a) = 1;
    *(char *)((int)param_1 + 0xab) = 0;
    *(char *)((int)param_1 + 0xb6) = 0;
    *(char *)((int)param_1 + 0xb5) = 0;
    *(char *)((int)param_1 + 0xa7) = 0;
    *(char *)((int)param_1 + 0xb7) = 0;
    *(char *)((int)param_1 + 0xb2) = 0;
    *(char *)(param_1 + 0x29) = 0;
    *(char *)((int)param_1 + 0xa6) = 1;
    *(char *)((int)param_1 + 0xa5) = 1;
    uVar1 = *(int *)((int)(*(int*)((char*)ppuVar3 - 0x1fe)) + 4);
    param_1[0x22] = *(int *)(*(int*)((char*)ppuVar3 - 0x1fe));
    param_1[0x23] = uVar1;
    *(char *)(param_1 + 0x2b) = 0;
    *(char *)(param_1 + 0x2c) = 0;
    *(char *)((int)param_1 + 0xad) = 0;
    *(char *)((int)param_1 + 0xaf) = 0;
    *(char *)((int)param_1 + 0xae) = 0;
    *(char *)((int)param_1 + 0xaa) = 1;
    *(short *)(param_1 + 0x28) = 0;
    *(short *)(param_1 + 0x21) = 0;
    uVar1 = *(int *)((int)(*(int*)((char*)ppuVar3 - 0x25c)) + 4);
    param_1[0x24] = *(int *)(*(int*)((char*)ppuVar3 - 0x25c));
    param_1[0x25] = uVar1;
    *(char *)(param_1 + 0x2d) = 0;
    param_1[0x26] = param_1;
    param_1[0x27] = param_1[6];
    *(char *)((int)param_1 + 0x86) = 0;
    *(char *)((int)param_1 + 0xb3) = 0;
    *(char *)(param_1 + 0x2e) = 0;
    param_1[0x20] = 0;
    *(char *)((int)param_1 + 0xb9) = 1;
    *(short *)((int)param_1 + 0xc2) = 0xffff;
    *(short *)(param_1 + 0x31) = 0xffff;
  }
  return param_1;
}

/* FUN_10115a00 defined elsewhere */


































































/* Address: 0x10115d3c Size: 48 bytes */
long long FUN_10115d3c(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return 1;
  }
  return 0;
}

/* Address: 0x10115e4c Size: 448 bytes */
unsigned long long FUN_10115e4c(int param_1,unsigned int param_2)

{
  char *puVar1;
  unsigned long long uVar2;
  int iVar3;
  int bVar4;
  long long lVar5;
  char local_10 [16];
  
  if (*(short *)(param_1 + 2) == 0) {
    if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar3 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == -1) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_10117884(*(short *)(*(int *)(param_1 + 0x24) + 0x28) + param_1);
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar3 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 0xc) = iVar3;
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 0x10) = iVar3 + *(int *)(param_1 + 0x20);
      }
      else {
        lVar5 = (unsigned long long)*(unsigned int *)(param_1 + 0xc) - (unsigned long long)*(unsigned int *)(param_1 + 8);
        if ((lVar5 != 0) &&
           (iVar3 = FUN_10001668(*(int *)(param_1 + 0x28),*(int *)(param_1 + 4),lVar5)
           , iVar3 != (int)lVar5)) {
          return 0xffffffffffffffff;
        }
        iVar3 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 0xc) = iVar3;
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 0x10) = iVar3 + *(int *)(param_1 + 0x20);
      }
      if (param_2 != 0xffffffff) {
        if (*(unsigned int *)(param_1 + 0xc) < *(unsigned int *)(param_1 + 0x10)) {
          puVar1 = *(char **)(param_1 + 0xc);
          *(char **)(param_1 + 0xc) = puVar1 + 1;
          *puVar1 = (char)param_2;
        }
        else {
          FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),param_2 & 0xff);
        }
      }
      uVar2 = (unsigned long long)param_2 & 0xff;
    }
  }
  else if (param_2 == 0xffffffff) {
    uVar2 = 0xff;
  }
  else {
    local_10[0] = (char)param_2;
    iVar3 = FUN_10001668(*(int *)(param_1 + 0x28),local_10,1);
    if (iVar3 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
  }
  return uVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
unsigned long long FUN_10116338(unsigned long long param_1) { return 0; }




























































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10116e14(short *param_1) { return 0; }
































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
int * FUN_10117024(int *param_1,int *param_2) { return 0; }






















































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
int * FUN_101171bc(int *param_1,int *param_2) { return 0; }



















































































































































































































































































































































































































































































































































































































































/* === Recovered from stubs.c === */





/* Address: 0x10004c54 Size: 136 bytes */
void FUN_10004c54()

{
  int iVar1;
  short *puVar2;
  
  puVar2 = puRam10117424;
  iVar1 = *piRam1011735c;
  *puRam10117424 = *(short *)(iVar1 + 0x17e);
  puVar2[1] = *(short *)(iVar1 + 0x180);
  puVar2[2] = *(short *)(iVar1 + 0x17c) - *(short *)(iVar1 + 0x178);
  puVar2[3] = *(short *)(iVar1 + 0x17a) - *(short *)(iVar1 + 0x176);
  FUN_10003b7c(puVar2);
  FUN_1000419c(puVar2);
  FUN_10004400(puVar2);
  FUN_100047d0(puVar2);
  FUN_100049bc(puVar2);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10005f90() { }






































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100090f0() { }






































































































































































































































































































































































































































































































































































/* Address: 0x1000cf78 Size: 328 bytes */
unsigned long long FUN_1000cf78(short param_1)

{
  int bVar1;
  unsigned char bVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  unsigned long long uVar6;
  int iVar7;
  int bVar8;
  unsigned int uVar9;
  unsigned long long uVar10;
  char auStack_20 [32];
  
  piVar5 = piRam10117468;
  piVar4 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x1602) == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    sVar3 = *(short *)(*piRam1011735c + 0x1602);
    uVar6 = 0xffffffffffffffff;
    uVar9 = 0xffffffff;
    do {
      sVar3 = sVar3 + -1;
      uVar10 = (unsigned long long)sVar3;
      iVar7 = *piVar4;
      if (*(char *)(iVar7 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) + 0x1619
                   ) == (char)*(short *)(iVar7 + 0x110)) {
        bVar8 = true;
        iVar7 = 3;
        do {
          if ((int)*(char *)(*piVar4 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) <<
                                            1) + iVar7 + 0x161a) == (int)param_1) {
            bVar8 = false;
          }
          bVar1 = iVar7 != 0;
          iVar7 = (int)(short)((short)iVar7 + -1);
        } while (bVar1);
        if ((((bVar8) && (*(char *)(*piVar5 + (int)sVar3 + 0x56) != '\x02')) &&
            (iVar7 = FUN_1001f648(uVar10,auStack_20), iVar7 == 0)) &&
           (bVar2 = *(unsigned char *)((int)sVar3 + *piVar5 + 0xba), (int)uVar9 < (int)(unsigned int)bVar2)) {
          uVar6 = uVar10;
          uVar9 = (unsigned int)bVar2;
        }
      }
    } while (sVar3 != 0);
  }
  return uVar6;
}

/* Address: 0x1000d0c0 Size: 228 bytes */
long long FUN_1000d0c0(short param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long long uVar4;
  long long uVar5;
  int iVar6;
  char auStack_20 [2];
  char auStack_1e [2];
  char auStack_1c [2];
  char auStack_1a [2];
  char auStack_18 [24];
  
  piVar3 = piRam10117468;
  piVar2 = piRam1011735c;
  iVar6 = (int)param_2;
  uVar4 = FUN_1004a0c4(param_1,auStack_20,auStack_1e,auStack_1c,auStack_1a,auStack_18);
  FUN_10048ccc();
  uVar5 = FUN_1001e9d0(iVar6);
  FUN_10049fa8(iVar6,uVar5,uVar4);
  FUN_100496c8(iVar6);
  iVar1 = *piVar3;
  *(short *)(iVar1 + 0x16) = *(short *)(iVar1 + 0x16) + 1;
  *(char *)(*piVar2 + iVar6 * 0x42 + 0x1631) = 0;
  *(short *)(iVar6 * 0x42 + *piVar2 + 0x1636) = 0;
  *(char *)((int)param_2 + *piVar3 + 0x56) = 5;
  FUN_10049010();
  return 1;
}

/* Address: 0x1000f7bc Size: 776 bytes */
void FUN_1000f7bc(short param_1)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  unsigned long long uVar11;
  int iVar12;
  short auStack_40 [8];
  short local_30 [24];
  
  piVar3 = piRam10117468;
  piVar2 = piRam1011735c;
  iVar12 = *piRam10117468 + param_1 * 0x5c;
  iVar10 = iVar12 + 0x252;
  if ((*(unsigned short *)(iVar12 + 0x2a6) & 0x10) == 0) {
    if ((*(unsigned short *)(*piRam10117468 + param_1 * 0x5c + 0x2a6) & 8) == 0) {
      iVar12 = (int)*(short *)(*piRam10117468 + param_1 * 0x5c + 0x2a4);
    }
    else {
      iVar12 = 0x10;
    }
  }
  else {
    iVar12 = 0xc;
  }
  iVar5 = 3;
  do {
    local_30[iVar5 + -4] = -1;
    auStack_40[iVar5] = 0xffff;
    local_30[iVar5 + 2] = -1;
    *(short *)(iVar5 * 2 + iVar10) = 0xffff;
    bVar1 = iVar5 != 0;
    iVar5 = (int)(short)((short)iVar5 + -1);
  } while (bVar1);
  sVar9 = *(short *)(*piVar2 + 0x1602);
  do {
    do {
      if (sVar9 == 0) {
        iVar12 = 0;
        do {
          sVar9 = *(short *)(iVar10 + iVar12 * 2);
          if (sVar9 != -1) {
            *(char *)((int)sVar9 + *piVar3 + 0x56) = 6;
          }
          sVar9 = (short)iVar12 + 1;
          iVar12 = (int)sVar9;
        } while (sVar9 < 4);
        return;
      }
      sVar9 = sVar9 + -1;
      uVar11 = (unsigned long long)sVar9;
    } while ((((((int)*(char *)(*piVar2 + (int)(((uVar11 & 0x7ffffff) * 0x20 + uVar11 & 0xffffffff)
                                               << 1) + 0x1619) != (int)*(short *)(*piVar2 + 0x110))
               || (iVar5 = FUN_1000f708(uVar11,0), iVar5 == 0)) ||
              (((*(unsigned short *)(*piVar3 + param_1 * 0x5c + 0x2a6) & 0x10) != 0 &&
               ((*(unsigned char *)(*piVar3 + (int)sVar9 + 0x11e) & 8) == 0)))) ||
             ((((*(unsigned short *)(*piVar3 + param_1 * 0x5c + 0x2a6) & 8) != 0 &&
               ((*(unsigned char *)(*piVar3 + (int)sVar9 + 0x11e) & 0x80) == 0)) ||
              (((*(unsigned short *)(*piVar3 + param_1 * 0x5c + 0x2a6) & 0x20) != 0 &&
               ((*(unsigned char *)(*piVar3 + (int)sVar9 + 0x11e) & 0x40) == 0)))))) ||
            (((((*(unsigned short *)(*piVar3 + param_1 * 0x5c + 0x2a6) & 0x38) == 0 &&
               ((*(unsigned char *)(*piVar3 + (int)sVar9 + 0x11e) & 200) != 0)) ||
              (iVar5 = FUN_1001f648(uVar11,local_30), iVar5 == 0)) ||
             (*(char *)(*piVar2 + (int)(((uVar11 & 0x7ffffff) * 0x20 + uVar11 & 0xffffffff) << 1) +
                        (int)local_30[0] + 0x1626) < iVar12))));
    iVar7 = -1;
    iVar5 = 100;
    iVar4 = 0;
    do {
      iVar8 = iVar4;
      if (*(short *)(iVar10 + iVar8 * 2) == -1) break;
      if (local_30[iVar8 + 2] < iVar5) {
        iVar5 = (int)local_30[iVar8 + 2];
        iVar7 = iVar8;
      }
      sVar6 = (short)iVar8 + 1;
      iVar8 = iVar7;
      iVar4 = (int)sVar6;
    } while (sVar6 < 4);
    if ((iVar8 != -1) &&
       ((*(short *)(iVar10 + iVar8 * 2) == -1 ||
        (iVar5 <= *(char *)(*piVar2 + (int)(((uVar11 & 0x7ffffff) * 0x20 + uVar11 & 0xffffffff) << 1
                                           ) + (int)local_30[0] + 0x1622))))) {
      *(short *)(iVar10 + iVar8 * 2) = sVar9;
      local_30[iVar8 + 2] =
           (short)*(char *)(*piVar2 + (int)(((uVar11 & 0x7ffffff) * 0x20 + uVar11 & 0xffffffff) << 1
                                           ) + (int)local_30[0] + 0x1622);
    }
  } while( true );
}

/* Address: 0x1000fac4 Size: 228 bytes */
void FUN_1000fac4()

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long long lVar5;
  
  piVar4 = piRam10117468;
  piVar3 = piRam1011735c;
  sVar1 = *(short *)(*piRam1011735c + 0x1602);
  while (sVar1 != 0) {
    sVar1 = sVar1 + -1;
    iVar2 = *piVar3;
    if (((int)*(char *)(iVar2 + sVar1 * 0x42 + 0x1619) == (int)*(short *)(iVar2 + 0x110)) &&
       (iVar2 = *piVar4 + (int)sVar1, *(char *)(iVar2 + 0x56) == '\x06')) {
      *(char *)(iVar2 + 0x56) = 8;
      *(short *)(sVar1 * 0x42 + *piVar3 + 0x1636) = 0;
    }
  }
  lVar5 = 3;
  do {
    iVar2 = (int)lVar5;
    if (*(short *)(*piVar4 + iVar2 * 0x5c + 0x24c) != 0) {
      FUN_1000f7bc(lVar5);
    }
    lVar5 = (long long)(short)((short)lVar5 + -1);
  } while (iVar2 != 0);
  return;
}

/* Address: 0x1000fba8 Size: 144 bytes */
void FUN_1000fba8(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2;
  if ((((*(short *)(iVar1 + 0x148) != 0) || (*(short *)(iVar1 + 0xd0) != 1)) &&
      (iVar1 = *piRam1011735c, *(short *)(iVar1 + 0x178) <= param_1)) &&
     (((param_1 <= *(short *)(iVar1 + 0x17c) && (*(short *)(iVar1 + 0x176) <= param_2)) &&
      (param_2 <= *(short *)(iVar1 + 0x17a))))) {
    FUN_10007f78();
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1000fccc(short param_1) { }

























































































































































































































































































/* Address: 0x1000fe90 Size: 336 bytes */
long long FUN_1000fe90(short param_1)

{
  int bVar1;
  char cVar2;
  unsigned char bVar3;
  int iVar4;
  long long lVar5;
  int *piVar6;
  int *piVar7;
  long long uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  long long lVar12;
  short sVar13;
  unsigned char abStack_20 [8];
  char auStack_18 [24];
  
  piVar7 = piRam1011735c;
  piVar6 = piRam10117358;
  FUN_1000da14(param_1,0,abStack_20,auStack_18);
  sVar11 = 0;
  sVar13 = 0;
  uVar8 = 2;
  iVar10 = 5;
  do {
    bVar3 = abStack_20[iVar10];
    if (bVar3 != 0xff) {
      iVar4 = *piVar7;
      iVar9 = iVar4 + (unsigned int)bVar3 * 0x42;
      cVar2 = *(char *)(iVar9 + 0x1619);
      if ((cVar2 != 0xf) && ((int)cVar2 != (int)*(short *)(iVar4 + 0x110))) {
        lVar5 = -(long long)
                 *(char *)((*(unsigned int *)(*piVar6 + *(short *)(iVar9 + 0x1606) * 0xe0 +
                                     *(short *)(iVar9 + 0x1604) * 2) >> 0x18) + iVar4 + 0x711);
        lVar12 = lVar5 + 10;
        if ((lVar12 + (-(unsigned long long)(lVar12 == 0) - (lVar5 + 9)) & 0xff) == 0) {
          sVar11 = sVar11 + 1;
          if ((*(unsigned int *)(*(short *)(iVar4 + 0x110) * 0x10 + iVar4 + cVar2 * 2 + 0x1582) >> 0x1a & 3)
              == 2) {
            sVar13 = sVar13 + 1;
          }
        }
      }
    }
    bVar1 = iVar10 != 0;
    iVar10 = (int)(short)((short)iVar10 + -1);
  } while (bVar1);
  if (sVar13 == 0) {
    if (sVar11 < 2) {
      if (sVar11 != 0) {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = 4;
    }
  }
  else {
    uVar8 = 8;
  }
  return uVar8;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1000ffe0(short param_1,short param_2,int param_3,int param_4) { return 0; }












































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1001072c Size: 1028 bytes */
void FUN_1001072c(short param_1,int param_2)

{
  int bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char auStack_80 [26];
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_4e;
  short local_4a;
  short local_48;
  short local_46;
  short local_40;
  short local_3e;
  
  iVar8 = iRam10117630;
  iVar7 = iRam1011762c;
  piVar6 = piRam10117364;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  iVar9 = FUN_1000fe90((int)param_1);
  iVar10 = *piVar4 + param_1 * 0x42;
  iVar10 = FUN_100186cc(*(short *)(iVar10 + 0x1604),*(short *)(iVar10 + 0x1606),
                        0xffffffffffffffff);
  iVar16 = 0;
  iVar15 = 0;
  sVar14 = 0;
  sVar13 = 0;
  if (iVar10 < 10) {
    iVar9 = (int)(short)((short)iVar9 + 4);
  }
  iVar10 = *(short *)(*piVar4 + 0x110) * 2;
  if (*(short *)(iVar10 + iVar7) < *(short *)(iVar10 + iVar8)) {
    local_40 = 2;
    sVar11 = (short)iVar9 + -4;
    iVar9 = (int)sVar11;
    if (sVar11 < 2) {
      iVar9 = 2;
    }
  }
  iVar10 = 0x1f;
  do {
    sVar11 = *(short *)(param_2 + iVar10 * 2);
    if (sVar11 != -1) {
      if (*(char *)(*piVar5 + sVar11 * 0x16 + 4) == '\x1c') {
        sVar13 = sVar13 + 1;
      }
      if (*(char *)(*piVar6 + *(char *)(*piVar5 + sVar11 * 0x16 + 4) * 6 + 4) != '\0') {
        sVar14 = sVar14 + 1;
      }
      iVar16 = (int)(short)((short)iVar16 + 1);
    }
    bVar1 = iVar10 != 0;
    iVar10 = (int)(short)((short)iVar10 + -1);
  } while (bVar1);
  if ((sVar13 == 0) || (0xf < iVar16)) {
    if ((sVar14 != 0) && (local_3e = 4, iVar9 < 4)) {
      iVar9 = 4;
    }
    if (iVar9 < iVar16) {
      while( true ) {
        iVar17 = -1;
        sVar13 = 10000;
        iVar10 = 0x1f;
        do {
          sVar14 = *(short *)(param_2 + iVar10 * 2);
          if (sVar14 != -1) {
            iVar12 = *piVar5 + sVar14 * 0x16;
            cVar2 = *(char *)(iVar12 + 4);
            if (((*(char *)(*piVar6 + cVar2 * 6 + 4) == '\0') && (cVar2 != '\x1c')) &&
               ((iVar3 = *(short *)(*piVar4 + 0x110) * 2,
                *(short *)(iVar3 + iVar7) < *(short *)(iVar3 + iVar8) ||
                (*(char *)(iVar12 + 8) < '\x04')))) {
              iVar12 = sVar14 * 0x16;
              FUN_10049628(*(char *)(*piVar5 + iVar12 + 4),auStack_80);
              cVar2 = *(char *)(iVar12 + *piVar5 + 8);
              sVar14 = (short)cVar2;
              if (399 < local_62) {
                sVar14 = cVar2 + 1;
              }
              if (799 < local_62) {
                sVar14 = sVar14 + 1;
              }
              if (0xb < local_64) {
                sVar14 = sVar14 + 1;
              }
              if (0xf < local_64) {
                sVar14 = sVar14 + 1;
              }
              if (local_4a != 0) {
                sVar14 = sVar14 + 1;
              }
              if ((local_48 != 0) || (local_46 != 0)) {
                sVar14 = sVar14 + 1;
              }
              if (((local_52 != 0) || (local_54 != 0)) || (local_56 != 0)) {
                sVar14 = sVar14 + 1;
              }
              if (local_58 != 0) {
                sVar14 = sVar14 + 1;
              }
              if (local_60 != 0) {
                sVar14 = sVar14 + 1;
              }
              if (local_4e != 0) {
                sVar14 = sVar14 + 2;
              }
              if (5 < local_66) {
                sVar14 = sVar14 + -1;
              }
              if (10 < local_66) {
                sVar14 = sVar14 + -1;
              }
              if (0xf < local_66) {
                sVar14 = sVar14 + -1;
              }
              sVar11 = FUN_1005f230(1,2,0);
              if ((short)(sVar14 + sVar11) < sVar13) {
                iVar17 = iVar10;
                sVar13 = sVar14 + sVar11;
              }
            }
          }
          bVar1 = iVar10 != 0;
          iVar10 = (int)(short)((short)iVar10 + -1);
        } while (bVar1);
        if ((iVar16 <= iVar9 + iVar15) || (iVar17 == -1)) break;
        FUN_1000fc38(*(short *)(param_2 + iVar17 * 2),0);
        *(short *)(param_2 + iVar17 * 2) = 0xffff;
        iVar15 = (int)(short)((short)iVar15 + 1);
      }
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10010b30(short param_1,short param_2) { return 0; }


















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100121f8 Size: 300 bytes */
long long FUN_100121f8(short param_1)

{
  int bVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  
  iVar5 = *piRam1011735c;
  cVar2 = *(char *)(iVar5 + param_1 * 0x42 + 0x1619);
  sVar4 = 0;
  if (cVar2 == 0xf) {
    return 1;
  }
  iVar6 = 7;
  do {
    iVar3 = *piRam1011735c;
    if ((*(short *)(iVar3 + iVar6 * 2 + 0x138) != 0) &&
       ((*(unsigned int *)(iVar3 + *(short *)(iVar3 + 0x110) * 0x10 + iVar6 * 2 + 0x1582) >> 0x1a & 3) == 2)
       ) {
      sVar4 = sVar4 + 1;
      iVar5 = iVar6;
    }
    bVar1 = iVar6 != 0;
    iVar6 = (int)(short)((short)iVar6 + -1);
  } while (bVar1);
  uVar7 = *(unsigned int *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0x10 + cVar2 * 2 + 0x1582)
          >> 0x1a & 3;
  if (uVar7 != 2) {
    if (uVar7 == 1) {
      if ((*(unsigned short *)(*piRam10117468 + 0xc) & 1) != 0) {
        return 1;
      }
    }
    else if ((uVar7 == 0) &&
            (((sVar4 == 0 || ((sVar4 == 1 && (iVar5 == cVar2)))) &&
             ((*(unsigned short *)(*piRam10117468 + 0xc) & 1) != 0)))) {
      return 1;
    }
    return 0;
  }
  return 1;
}

/* Address: 0x10012324 Size: 248 bytes */
long long FUN_10012324(short param_1,short param_2)

{
  int iVar1;
  short sVar2;
  
  if (((*(short *)(*(short *)(*piRam1011735c + 0x110) * 2 + *piRam1011735c + 0xd0) != 0) &&
      (*(short *)(*piRam1011735c + param_2 * 2 + 0xd0) == 0)) &&
     (*(short *)(*piRam10117468 + 0x42) != 0)) {
    sVar2 = *(short *)(*piRam1011735c + 0x136);
    if (sVar2 < 2) {
      sVar2 = 1;
    }
    if (sVar2 < 10) {
      if (param_1 != *(short *)(*piRam10117468 + 0x46)) {
        iVar1 = FUN_1004639c(param_1);
        if (iVar1 < 200) {
          FUN_1001bbf0(param_1,0);
        }
        else {
          FUN_1001ba60(param_1);
        }
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1001241c() { return 0; }






























































































































































































































































































































































































































































/* Address: 0x100126a4 Size: 1000 bytes */
void FUN_100126a4()

{
  int bVar1;
  unsigned char bVar2;
  short uVar3;
  short uVar4;
  short sVar5;
  int bVar6;
  int *piVar7;
  int *piVar8;
  unsigned long long uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  short sVar17;
  long long lVar16;
  short sVar19;
  long long lVar18;
  unsigned long long uVar20;
  int iVar21;
  char auStack_58 [8];
  unsigned char abStack_50 [8];
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  
  piVar8 = piRam10117468;
  piVar7 = piRam1011735c;
  uVar9 = ZEXT48(0 /* TVect base */);
  iVar10 = FUN_1005f230(3,500,500);
  iVar11 = FUN_1001241c();
  iVar21 = (int)uVar9;
  sVar19 = -1;
  sVar12 = -1;
  sVar17 = -1;
  iVar15 = 0;
  if (iVar11 == 0) {
    sVar13 = *(short *)(*piVar7 + 0x1602);
    while (sVar13 != 0) {
      sVar13 = sVar13 + -1;
      uVar20 = (unsigned long long)sVar13;
      if ((*(char *)(*piVar7 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1) +
                    0x1619) == '\x0f') && ((*(unsigned char *)(*piVar8 + (int)sVar13 + 0x11e) & 1) != 0)) {
        FUN_1000da14(uVar20,0,abStack_50,auStack_58);
        bVar6 = false;
        iVar21 = 5;
        do {
          bVar2 = abStack_50[iVar21];
          if ((bVar2 != 0xff) &&
             ((int)*(char *)(*piVar7 + (unsigned int)bVar2 * 0x42 + 0x1619) ==
              (int)*(short *)(*piVar7 + 0x110))) {
            bVar6 = true;
          }
          bVar1 = iVar21 != 0;
          iVar21 = (int)(short)((short)iVar21 + -1);
        } while (bVar1);
        if (bVar6) {
          iVar21 = *piVar7 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1);
          uVar3 = *(short *)(iVar21 + 0x1604);
          uVar4 = *(short *)(iVar21 + 0x1606);
          sVar5 = *(short *)(*piVar7 + 0x1602);
          sVar14 = 0;
          iVar21 = 1000;
          while (sVar5 != 0) {
            sVar5 = sVar5 + -1;
            iVar11 = *piVar7 + sVar5 * 0x42;
            if (*(char *)(iVar11 + 0x1619) == '\x0f') {
              if (((*(unsigned char *)(*piVar8 + (int)sVar5 + 0x11e) & 1) != 0) &&
                 (iVar11 = FUN_1000a884(uVar3,uVar4,*(short *)(iVar11 + 0x1604),
                                        *(short *)(iVar11 + 0x1606)), iVar11 < 0x14)) {
                sVar14 = sVar14 + 1;
              }
            }
            else {
              iVar11 = *piVar7 + sVar5 * 0x42;
              if ((int)*(char *)(iVar11 + 0x1619) == (int)*(short *)(*piVar7 + 0x110)) {
                iVar11 = FUN_1000a884(uVar3,uVar4,*(short *)(iVar11 + 0x1604),
                                      *(short *)(iVar11 + 0x1606));
                if (iVar11 < iVar21) {
                  iVar21 = iVar11;
                }
              }
            }
          }
          if ((3 < sVar14) && ((sVar12 < sVar14 || ((sVar14 == sVar12 && (iVar15 < iVar21)))))) {
            iVar15 = *piVar7 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1);
            sVar19 = *(short *)(iVar15 + 0x1604);
            sVar17 = *(short *)(iVar15 + 0x1606);
            sVar12 = sVar14;
            iVar15 = iVar21;
          }
        }
      }
      iVar21 = (int)uVar9;
    }
    if ((*(short *)(*piVar7 + 0x124) == 0) || (sVar19 == -1)) {
      iVar10 = *(short *)(*piVar7 + *(short *)(*piVar7 + 0x110) * 0x14 + 0x186) + iVar10;
      if (30000 < iVar10) {
        iVar10 = 30000;
      }
      *(short *)(*piVar7 + *(short *)(*piVar7 + 0x110) * 0x14 + 0x186) = (short)iVar10;
    }
    else {
      sVar12 = FUN_1005f230(1,0xb,0xfffffffffffffffa);
      sVar13 = FUN_1005f230(1,0xb,0xfffffffffffffffa);
      local_48 = 0;
      lVar18 = (long long)(short)(sVar19 + sVar12);
      if (lVar18 < 0) {
        lVar18 = 0;
      }
      local_46 = 0;
      lVar16 = (long long)(short)(sVar17 + sVar13);
      if (lVar16 < 0) {
        lVar16 = 0;
      }
      local_44 = (short)lVar18;
      if (0x6e < (int)lVar18) {
        lVar18 = 0x6f;
      }
      local_42 = (short)lVar16;
      if (0x9a < (int)lVar16) {
        lVar16 = 0x9b;
      }
      FUN_10054af4(lVar18,lVar16);
      if (((*(short *)(*piVar7 + 0x15a) != 0) && (**(short **)(iVar21 + -0x18a8) == 0)) ||
         (*(short *)(*piVar7 + *(short *)(*piVar7 + 0x110) * 2 + 0xd0) == 0)) {
        FUN_100635e0(*(short *)(*piVar7 + 0x110));
        FUN_10060608(1,1,0);
      }
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10012a8c(long long param_1,short param_2) { return 0; }




















































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10013a10(short param_1,short param_2) { return 0; }























































































































































































































































































































































































































































































/* Address: 0x100143b8 Size: 528 bytes */
int FUN_100143b8(short param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long long lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long long uVar11;
  short sVar13;
  int iVar12;
  long long lVar14;
  short sVar15;
  int iVar16;
  char auStack_30 [2];
  short local_2e [23];
  
  piVar10 = piRam10117468;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  uVar11 = FUN_10044950();
  sVar2 = *(short *)(*piVar9 + 0x1602);
  iVar7 = -1;
  sVar6 = 1000;
joined_r0x1001441c:
  do {
    do {
      do {
        if (sVar2 == 0) {
          FUN_100449bc();
          return iVar7;
        }
        sVar2 = sVar2 + -1;
        iVar16 = (int)sVar2;
        iVar12 = *piVar9;
        iVar4 = iVar12 + iVar16 * 0x42;
        lVar5 = -(long long)
                 *(char *)(iVar12 + (*(unsigned int *)(*piVar8 + *(short *)(iVar4 + 0x1606) * 0xe0 +
                                              *(short *)(iVar4 + 0x1604) * 2) >> 0x18) + 0x711);
        lVar14 = lVar5 + 10;
      } while ((((lVar14 + (-(unsigned long long)(lVar14 == 0) - (lVar5 + 9)) & 0xff) != 0) ||
               (iVar3 = *piVar10, (*(unsigned char *)(iVar3 + sVar2 + 0x11e) & 1) != 0)) ||
              (sVar2 == *(short *)(iVar3 + 0x46)));
      cVar1 = *(char *)(iVar4 + 0x1619);
    } while (((cVar1 != 0xf) && ((int)cVar1 != (int)*(short *)(iVar12 + 0x110))) &&
            ((*(unsigned int *)(*(short *)(iVar12 + 0x110) * 0x10 + iVar12 + cVar1 * 2 + 0x1582) >> 0x1a & 3
             ) != 2));
    sVar13 = FUN_10020d88(iVar16,local_2e,auStack_30,uVar11,0);
  } while (local_2e[0] == -1);
  iVar12 = *piVar9 + iVar16 * 0x42;
  if ((int)*(char *)(iVar12 + 0x1619) != (int)*(short *)(*piVar9 + 0x110)) goto code_r0x10014530;
  if (*(char *)(*piVar10 + (int)sVar2 + 0x56) == '\a') {
    sVar15 = 10;
  }
  else {
    sVar15 = 0x1e;
  }
  sVar13 = sVar13 + sVar15;
  if (3 < param_1) {
    sVar13 = sVar13 + 100;
  }
  goto LAB_10014584;
code_r0x10014530:
  iVar12 = FUN_1001eff8(*(short *)(iVar12 + 0x1604),*(short *)(iVar12 + 0x1606));
  if (0x4a < iVar12) {
LAB_10014584:
    if (sVar13 < sVar6) {
      iVar7 = iVar16;
      sVar6 = sVar13;
    }
  }
  goto joined_r0x1001441c;
}

/* Address: 0x10015c48 Size: 384 bytes */
long long FUN_10015c48(short param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  long long uVar4;
  int iVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  
  piVar3 = piRam1011735c;
  piVar2 = piRam10117358;
  if (*(char *)(param_1 * 0x1e + *piRam1011735c + 0xd28) == '\x01') {
    uVar7 = (unsigned long long)*(short *)(*piRam1011735c + param_1 * 0x1e + 0xd2c);
    uVar6 = (unsigned long long)*(short *)(*piRam1011735c + param_1 * 0x1e + 0xd2e);
    iVar5 = FUN_1001f174(uVar7,uVar6);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(char *)(*piVar3 + (*(unsigned int *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 &
                                                         0xffffffff) << 5) +
                                        (int)((uVar7 & 0xffffffff) << 1)) >> 0x18) + 0x711) == '\n')
      {
        iVar5 = FUN_1002be50(uVar7,uVar6);
        if ((int)*(char *)(*piVar3 + iVar5 * 0x42 + 0x1619) != (int)*(short *)(*piVar3 + 0x110)) {
          return 0;
        }
      }
      else {
        uVar1 = *(unsigned int *)(*piVar2 + (int)(((uVar6 & 0x1fffffff) * 8 - uVar6 & 0xffffffff) << 5) +
                         (int)((uVar7 & 0xffffffff) << 1));
        if (((uVar1 >> 0x14 & 1) != 0) &&
           ((uVar1 >> 0x10 & 0xf) != (int)*(short *)(*piVar3 + 0x110))) {
          return 0;
        }
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

/* Address: 0x10016344 Size: 416 bytes */
long long FUN_10016344(short param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int *ppuVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char auStack_38 [16];
  short local_28;
  
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  ppuVar4 = 0 /* TVect base */;
  iVar10 = (int)*(short *)(param_2 + param_1 * 2);
  sVar1 = *(short *)(param_2 + 0x38);
  iVar6 = *piRam1011735c + sVar1 * 0x42;
  sVar8 = *(short *)(param_2 + param_1 * 2 + 0xc);
  iVar9 = iVar10 * 0x16;
  FUN_1000a884(*(short *)(iVar6 + 0x1604),*(short *)(iVar6 + 0x1606),
               *(short *)(*piRam10117360 + iVar9),*(short *)(*piRam10117360 + iVar9 + 2),
               param_2);
  iVar6 = *piVar3;
  iVar7 = iVar9 + iVar6;
  uVar5 = *(unsigned int *)(iVar7 + 0xc);
  uVar5 = FUN_1001ee88(*(short *)(iVar9 + iVar6),*(short *)(iVar7 + 2),auStack_38,
                       (unsigned short)(uVar5 >> 9) & 7,(unsigned short)(uVar5 >> 0xc) & 0xf,0xc);
  if (uVar5 != 0) {
    if ((sVar8 != -1) && (uVar5 == *(unsigned char *)(*(int *)(*(int*)((char*)ppuVar4 - 0x10e)) + (int)sVar8 + 0x182))) {
      iVar6 = *piVar3;
      iVar10 = iVar10 * 0x16;
      iVar6 = FUN_100186cc(*(short *)(iVar6 + iVar10),*(short *)(iVar6 + iVar10 + 2),
                           0xffffffffffffffff);
      local_28 = *(short *)(*piVar2 + 0x136);
      sVar8 = local_28;
      if (local_28 < 2) {
        sVar8 = 1;
      }
      if (sVar8 < 6) {
        iVar7 = 10;
      }
      else {
        iVar7 = 0xf;
      }
      if (iVar6 < iVar7) {
        return 0;
      }
    }
    FUN_1001e160(auStack_38,1,(int)sVar1,0);
    FUN_10018180(*(short *)(*(int *)(*(int*)((char*)ppuVar4 - 0x70)) + 0x12),
                 *(short *)(*(int *)(*(int*)((char*)ppuVar4 - 0x70)) + 0x14),0);
  }
  return 0;
}

/* Address: 0x10016cc4 Size: 300 bytes */
void FUN_10016cc4(int param_1,int param_2,int param_3,short param_4)

{
  char cVar1;
  int iVar2;
  int bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  
  piVar5 = piRam10117468;
  piVar4 = piRam1011735c;
  do {
    bVar3 = true;
    iVar9 = 0;
    do {
      if ((*(short *)(param_1 + iVar9 * 2) != -1) && ('\x01' < *(char *)(param_2 + iVar9))) {
        iVar6 = 0;
        do {
          if (((iVar9 != iVar6) && (sVar10 = *(short *)(param_1 + iVar6 * 2), sVar10 != -1)) &&
             (*(char *)(iVar6 + param_2) == '\0')) {
            iVar11 = 0;
            do {
              iVar7 = param_3 + iVar9 * 0x16;
              cVar1 = *(char *)(iVar7 + iVar11);
              if ((cVar1 != 0xff) &&
                 (iVar2 = cVar1 * 0x1e, (int)*(char *)(*piVar4 + iVar2 + 0xd26) == (int)param_4)) {
                *(char *)(iVar7 + iVar11) = 0xff;
                *(short *)(*piVar5 + 0x4c) = *(short *)(*piVar5 + 0x4c) + 1;
                *(short *)(*piVar4 + iVar2 + 0xd2a) = sVar10;
                *(char *)(param_2 + iVar9) = *(char *)(param_2 + iVar9) + -1;
                *(char *)(param_2 + iVar6) = *(char *)(param_2 + iVar6) + '\x01';
                bVar3 = false;
                break;
              }
              sVar8 = (short)iVar11 + 1;
              iVar11 = (int)sVar8;
            } while (sVar8 < 0x16);
          }
          sVar10 = (short)iVar6 + 1;
          iVar6 = (int)sVar10;
        } while (sVar10 < 8);
      }
      sVar10 = (short)iVar9 + 1;
      iVar9 = (int)sVar10;
    } while (sVar10 < 8);
    if (bVar3) {
      return;
    }
  } while( true );
}
























































































/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10018574(short param_1,int param_2,int param_3) { return 0; }



































































































































































































































































































/* Address: 0x1001a12c Size: 540 bytes */
void FUN_1001a12c(short param_1,short param_2)

{
  int bVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  int iVar5;
  short local_98;
  short local_96;
  short local_94 [2];
  char auStack_90 [104];
  short local_28;
  short local_26 [19];
  
  piVar2 = piRam10117360;
  ppuVar3 = 0 /* TVect base */;
  iVar5 = (int)param_1;
  iVar4 = FUN_10019174(iVar5,local_26,&local_28,local_94,&local_96,&local_98);
  if (iVar4 == 0) {
    if ((*(char *)(*(int *)(*(int*)((char*)ppuVar3 - 0x14f)) + *(char *)(*piVar2 + param_1 * 0x16 + 4) * 6) == '\0')
       || (iVar4 = FUN_10019f14(iVar5,local_26,&local_28), iVar4 == 0)) {
      iVar4 = 99;
      do {
        auStack_90[iVar4] = 0;
        bVar1 = iVar4 != 0;
        iVar4 = (int)(short)((short)iVar4 + -1);
      } while (bVar1);
      if ((param_2 == -1) || (iVar4 = FUN_1001a0a0(param_2,auStack_90), iVar4 == 0xff)) {
        iVar5 = iVar5 * 0x16;
        *(unsigned int *)(*piVar2 + iVar5 + 0xc) = *(unsigned int *)(*piVar2 + iVar5 + 0xc) & 0xffff0fff;
        *(unsigned int *)(iVar5 + *piVar2 + 0xc) = *(unsigned int *)(iVar5 + *piVar2 + 0xc) & 0xffffff80;
        *(unsigned short *)(iVar5 + *piVar2 + 0xc) = *(unsigned short *)(iVar5 + *piVar2 + 0xc) & 0xffdf;
        *(short *)(iVar5 + *piVar2 + 0x14) = 0xffff;
        *(short *)(iVar5 + *piVar2 + 0x12) = *(short *)(iVar5 + *piVar2 + 0x14);
        *(char *)(iVar5 + *piVar2 + 0x11) = 0;
      }
      else {
        iVar4 = *(int *)(*(int*)((char*)ppuVar3 - 0x151)) + iVar4 * 0x42;
        FUN_10019e00(iVar5,*(short *)(iVar4 + 0x1604),*(short *)(iVar4 + 0x1606));
      }
    }
    else {
      FUN_10019e00(iVar5,local_26[0],local_28);
    }
  }
  else {
    if ((local_94[0] != 0) &&
       ((local_94[0] != 1 || (iVar4 = FUN_10019718(iVar5,local_96,local_98), iVar4 != 0)))) {
      if (local_94[0] != 2) {
        return;
      }
      iVar4 = FUN_10019a40(iVar5,local_96,local_98);
      if (iVar4 != 0) {
        return;
      }
    }
    FUN_10019e00(iVar5,local_26[0],local_28);
  }
  return;
}

/* Address: 0x1001a864 Size: 568 bytes */
short FUN_1001a864(short param_1,long long param_2)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  char auStack_2c [44];
  
  piVar4 = piRam10117468;
  piVar3 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x1602) == 0) {
    sVar7 = 0;
  }
  else {
    sVar2 = *(short *)(*piRam1011735c + 0x1602);
    sVar7 = 0;
    do {
      sVar2 = sVar2 + -1;
      iVar8 = (int)sVar2;
      iVar9 = (int)sVar2;
      if ((int)*(char *)(*piVar3 + iVar8 * 0x42 + 0x1619) == (int)*(short *)(*piVar3 + 0x110)) {
        if (param_1 == 0) {
          if (*(char *)(*piVar4 + (int)sVar2 + 0x56) == '\x01') goto LAB_1001a920;
        }
        else {
          if (*(char *)(*piVar4 + iVar9 + 0x56) != '\x01') goto LAB_1001aa70;
LAB_1001a920:
          FUN_10010b30(iVar8,1);
          *(char *)(iVar9 + *piVar4 + 0x56) = 3;
        }
        iVar5 = FUN_10018574(iVar8,auStack_2c,0);
        if (iVar5 == 0) {
          cVar1 = *(char *)(*piVar4 + iVar9 + 0x56);
          if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
            *(char *)(*piVar4 + iVar9 + 0x56) = 4;
          }
          if ((*(short *)(*piVar3 + 0x128) == 0) && (*(char *)(*piVar4 + iVar9 + 0x56) == '\x05')) {
            sVar6 = *(short *)(*piVar3 + 0x136);
            if (sVar6 < 2) {
              sVar6 = 1;
            }
            if (sVar6 < 6) goto LAB_1001a9cc;
          }
        }
        else {
LAB_1001a9cc:
          sVar7 = sVar7 + 1;
          iVar5 = FUN_10018b14(iVar8,param_2);
          if (iVar5 == 0) {
            iVar8 = FUN_1001a0a0(iVar8,param_2);
            if (iVar8 == 0xff) {
              *(char *)(iVar9 + *piVar4 + 0x56) = 4;
            }
            else {
              *(char *)(*piVar4 + iVar9 + 0x56) = 3;
            }
          }
          else {
            sVar6 = *(short *)(*piVar3 + 0x136);
            if (sVar6 < 2) {
              sVar6 = 1;
            }
            FUN_1001a470(iVar8,10 < sVar6);
            *(char *)(iVar9 + *piVar4 + 0x56) = 2;
          }
        }
      }
LAB_1001aa70:
    } while (iVar9 != 0);
  }
  return sVar7;
}

/* Address: 0x1001ab94 Size: 328 bytes */
void FUN_1001ab94()

{
  int bVar1;
  unsigned char bVar2;
  short sVar3;
  int bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  unsigned char abStack_18 [24];
  
  piVar6 = piRam10117468;
  piVar5 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x1602) != 0) {
    sVar3 = *(short *)(*piRam1011735c + 0x1602);
    do {
      sVar3 = sVar3 + -1;
      iVar7 = *piVar5;
      if (((*(char *)(iVar7 + sVar3 * 0x42 + 0x1619) == (char)*(short *)(iVar7 + 0x110)) &&
          (*(char *)(*piVar6 + (int)sVar3 + 0x56) == '\x03')) &&
         (iVar7 = FUN_10018574((int)sVar3,abStack_18,0), iVar7 != 0)) {
        bVar4 = false;
        iVar7 = 5;
        do {
          bVar2 = abStack_18[iVar7];
          if (((bVar2 != 0xff) && (*(char *)(*piVar5 + (unsigned int)bVar2 * 0x42 + 0x1619) == '\x0f')) &&
             ((*(unsigned char *)((unsigned int)bVar2 + *piVar6 + 0x11e) & 1) == 0)) {
            bVar4 = true;
          }
          bVar1 = iVar7 != 0;
          iVar7 = (int)(short)((short)iVar7 + -1);
        } while (bVar1);
        if (!bVar4) {
          *(char *)(*piVar6 + (int)sVar3 + 0x56) = 2;
        }
      }
    } while (sVar3 != 0);
  }
  return;
}

/* Address: 0x1001b584 Size: 860 bytes */
short FUN_1001b584(long long param_1,short *param_2,unsigned short param_3,short param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  short *psVar6;
  unsigned long long uVar7;
  int *ppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  unsigned short uVar13;
  short sVar14;
  short sVar15;
  unsigned long long uVar16;
  int iVar17;
  unsigned long long uVar18;
  unsigned int local_7c;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  
  psVar6 = psRam101176fc;
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  piVar2 = piRam10117354;
  uVar7 = ZEXT48(0 /* TVect base */);
  ppuVar8 = 0 /* TVect base */;
  local_52 = *param_2;
  local_50 = *(short *)(*piRam10117360 + local_52 * 0x16);
  iVar17 = *piRam10117360 + local_52 * 0x16;
  sVar14 = *(short *)(iVar17 + 2);
  iVar11 = -1;
  uVar16 = 0xffffffffffffffff;
  iVar10 = 0;
  local_4e = 0;
  if ((*(unsigned short *)(iVar17 + 0xc) & 0x1000) == 0) {
    sVar15 = local_50 - param_4;
    if ((int)sVar15 < (int)local_50 + (int)param_4) {
      do {
        iVar17 = (int)sVar15;
        sVar12 = sVar14 - param_4;
        if ((int)sVar12 < (int)sVar14 + (int)param_4) {
          do {
            uVar18 = (unsigned long long)sVar12;
            if (((((-1 < sVar15) && (-1 < sVar12)) && (sVar15 < 0x70)) &&
                (((sVar12 < 0x9c &&
                  (uVar3 = *(unsigned int *)(*piVar4 + (int)(((uVar18 & 0x1fffffff) * 8 - uVar18 &
                                                     0xffffffff) << 5) + iVar17 * 2),
                  (uVar3 >> 0x14 & 1) != 0)) &&
                 ((((unsigned short)(uVar3 >> 0x10) & 0xf) == param_3 &&
                  ((cVar1 = *(char *)(*piVar5 + (uVar3 >> 0x18) + 0x711), cVar1 != '\n' &&
                   (cVar1 != '\x03')))))))) && (cVar1 != '\x02')) {
              iVar9 = FUN_10003768(*(short *)
                                    (*param_5 + iVar17 * 0x138 + (int)((uVar18 & 0xffffffff) << 1)))
              ;
              uVar7 = (unsigned long long)local_7c;
              if ((iVar9 <= *psVar6 + -1) &&
                 ((*(unsigned int *)(*piVar2 + (int)(((uVar18 & 0x1fffffff) * 8 - uVar18 & 0xffffffff) << 4)
                            + (int)sVar15) >> 0x1d & 1) != 0)) {
                FUN_1001f0ac(iVar17,uVar18,&local_54,&local_56,&local_58);
                iVar9 = FUN_1001eff8(iVar17,uVar18);
                if (((0x4b < iVar9) && (((2 < local_54 && (10 < local_56)) || (local_58 != 0)))) &&
                   (iVar10 < iVar9)) {
                  uVar16 = uVar18;
                  iVar11 = iVar17;
                  iVar10 = iVar9;
                }
              }
            }
            sVar12 = sVar12 + 1;
          } while ((int)sVar12 < (int)sVar14 + (int)param_4);
        }
        ppuVar8 = (int **)uVar7;
        sVar15 = sVar15 + 1;
      } while ((int)sVar15 < (int)local_50 + (int)param_4);
    }
    if (iVar11 != -1) {
      uVar3 = *(unsigned int *)(*(int *)(*(int*)((char*)ppuVar8 - 0x150)) + local_52 * 0x16 + 0xc);
      if ((uVar3 >> 0xc & 0xf) == 1) {
        uVar13 = (unsigned short)uVar3 & 0x7f;
      }
      else {
        uVar13 = 0xffff;
      }
      FUN_1001e160(param_2,4,0,0x20);
      piVar2 = (int *)(*(int*)((char*)ppuVar8 - 0x70));
      *(short *)(*piVar2 + 0x12) = (short)iVar11;
      *(short *)(*piVar2 + 0x14) = (short)uVar16;
      FUN_10018180(iVar11,uVar16,0);
      uVar16 = 0;
      piVar2 = (int *)(*(int*)((char*)ppuVar8 - 0x150));
      do {
        iVar11 = (int)((uVar16 & 0xffffffff) << 1);
        sVar14 = *(short *)((int)param_2 + iVar11);
        if (sVar14 != -1) {
          if ((int)*(char *)(*piVar2 + sVar14 * 0x16 + 5) == (int)*(short *)(*piVar5 + 0x110)) {
            if (uVar13 != 0xffff) {
              iVar11 = (int)((uVar16 & 0xffffffff) << 1);
              iVar10 = *piVar2 + *(short *)((int)param_2 + iVar11) * 0x16;
              *(unsigned int *)(iVar10 + 0xc) = *(unsigned int *)(iVar10 + 0xc) & 0xffff0fff | 0x1000;
              iVar11 = *piVar2 + *(short *)((int)param_2 + iVar11) * 0x16;
              *(unsigned int *)(iVar11 + 0xc) =
                   (int)(short)uVar13 & 0x7fU | *(unsigned int *)(iVar11 + 0xc) & 0xffffff80;
            }
          }
          else {
            *(short *)((int)param_2 + iVar11) = 0xffff;
          }
        }
        sVar14 = (short)uVar16 + 1;
        uVar16 = (unsigned long long)sVar14;
      } while (sVar14 < 8);
      local_4e = 2;
    }
  }
  else {
    local_4e = 0;
  }
  return local_4e;
}

/* Address: 0x1001b8e0 Size: 384 bytes */
void FUN_1001b8e0(short param_1)

{
  int bVar1;
  unsigned char bVar2;
  int *piVar3;
  int uVar4;
  int *ppuVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  uVar4 = uRam1011772c;
  piVar3 = piRam1011735c;
  ppuVar5 = 0 /* TVect base */;
  iVar9 = (int)param_1;
  iVar6 = FUN_1004645c(iVar9);
  bVar1 = *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0xc0) != 2;
  bVar2 = *(unsigned char *)(*piVar3 + iVar9 * 0x42 + 0x1633);
  if ((bVar2 != 0xf) && (*(short *)((unsigned int)bVar2 * 2 + *piVar3 + 0xd0) == 0)) {
    bVar1 = true;
  }
  iVar7 = FUN_1005f230(1,2,0xffffffffffffffff);
  if ((iVar7 != 0) && (299 < iVar6)) {
    bVar1 = true;
  }
  if ((bVar1) && (iVar6 != 0)) {
    FUN_10001dd0(uVar4,(*(int*)((char*)ppuVar5 - 0x6d4)),*piVar3 + iVar9 * 0x42 + 0x1608);
    FUN_10030454(uVar4);
    iVar7 = *piVar3 + *(short *)(*piVar3 + 0x110) * 0x14;
    *(short *)(iVar7 + 0x186) = *(short *)(iVar7 + 0x186) + (short)iVar6;
    FUN_100465a8(iVar9);
    sVar8 = FUN_1005f230(1,5,0);
    *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0x1122) =
         *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0x1122) + sVar8;
  }
  return;
}

/* Address: 0x1001c2dc Size: 1056 bytes */
long long FUN_1001c2dc(short param_1,short *param_2,short param_3)

{
  char cVar1;
  long long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  long long lVar13;
  short sVar14;
  short sVar15;
  unsigned long long uVar16;
  unsigned long long uVar17;
  unsigned long long uVar18;
  int iVar19;
  int iVar20;
  
  piVar11 = piRam101176e0;
  piVar10 = piRam10117468;
  piVar9 = piRam10117360;
  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  uVar17 = (unsigned long long)param_3;
  sVar15 = *param_2;
  if ((sVar15 != -1) &&
     (iVar20 = *piRam1011735c + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1),
     lVar2 = -(long long)
              *(char *)(*piRam1011735c +
                        (*(unsigned int *)(*piRam10117358 + *(short *)(iVar20 + 0x1606) * 0xe0 +
                                  *(short *)(iVar20 + 0x1604) * 2) >> 0x18) + 0x711),
     lVar13 = lVar2 + 10, (lVar13 + (-(unsigned long long)(lVar13 == 0) - (lVar2 + 9)) & 0xff) != 0)) {
    iVar20 = 1000;
    uVar16 = 0xffffffffffffffff;
    iVar19 = 0;
    do {
      sVar14 = *(short *)(*piVar10 + param_1 * 0x5c + iVar19 * 2 + 0x25a);
      uVar18 = (unsigned long long)sVar14;
      if (sVar14 != -1) {
        iVar12 = *piVar9;
        iVar3 = sVar15 * 0x16;
        iVar5 = (int)(((uVar18 & 0x7ffffff) * 0x20 + uVar18 & 0x7fffffff) << 1);
        iVar4 = *piVar8 + iVar5;
        iVar12 = FUN_1000a884(*(short *)(iVar12 + iVar3),*(short *)(iVar12 + iVar3 + 2),
                              *(short *)(iVar4 + 0x1604),*(short *)(iVar4 + 0x1606));
        if ((iVar12 < iVar20) &&
           (iVar5 = *piVar8 + iVar5,
           lVar2 = -(long long)
                    *(char *)(*piVar8 + (*(unsigned int *)(*piVar7 + *(short *)(iVar5 + 0x1606) * 0xe0 +
                                                  *(short *)(iVar5 + 0x1604) * 2) >> 0x18) + 0x711),
           lVar13 = lVar2 + 10, (lVar13 + (-(unsigned long long)(lVar13 == 0) - (lVar2 + 9)) & 0xff) == 0)) {
          uVar16 = uVar18;
          iVar20 = iVar12;
        }
      }
      sVar14 = (short)iVar19 + 1;
      iVar19 = (int)sVar14;
    } while (sVar14 < 6);
    if ((int)uVar16 != -1) {
      uVar17 = uVar16;
    }
  }
  while( true ) {
    sVar15 = 0;
    iVar20 = 0;
    do {
      if (*(short *)(*piVar10 + param_1 * 0x5c + iVar20 * 2 + 0x25a) != -1) {
        sVar15 = sVar15 + 1;
      }
      sVar14 = (short)iVar20 + 1;
      iVar20 = (int)sVar14;
    } while (sVar14 < 6);
    iVar20 = 0;
    do {
      if ((param_2[iVar20] != -1) &&
         ((int)*(char *)(*piVar9 + param_2[iVar20] * 0x16 + 5) != (int)*(short *)(*piVar8 + 0x110)))
      {
        param_2[iVar20] = -1;
      }
      sVar14 = (short)iVar20 + 1;
      iVar20 = (int)sVar14;
    } while (sVar14 < 8);
    cVar1 = *(char *)(*piVar8 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                     0x1619);
    FUN_1001e160(param_2,1,uVar17,0);
    iVar20 = FUN_10018180(*(short *)(*piVar11 + 0x12),*(short *)(*piVar11 + 0x14),1);
    if (iVar20 == 1) {
      FUN_1000fccc(1);
      FUN_1001b4ac(param_1);
      FUN_100219a8(1,1,1);
      return 3;
    }
    FUN_1001b4ac(param_1);
    iVar20 = *piVar8;
    iVar19 = iVar20 + (int)uVar17 * 0x42;
    sVar14 = *(short *)(iVar20 + 0x110);
    if (((int)*(char *)(iVar19 + 0x1619) != (int)sVar14) || ((int)cVar1 == (int)sVar14)) {
      FUN_100219a8(1,1,1);
      return 3;
    }
    iVar20 = sVar14 * 0x14 + iVar20;
    if ((*(short *)(iVar19 + 0x1604) == *(short *)(iVar20 + 0x194)) &&
       (*(short *)(iVar19 + 0x1606) == *(short *)(iVar20 + 0x196))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    if ((sVar15 < 2) || ((*(unsigned short *)(*piVar10 + param_1 * 0x5c + 0x2a6) & 1) == 0)) {
      if ((*(unsigned short *)(*piVar10 + param_1 * 0x5c + 0x2a6) & 2) == 0) {
        if ((*(unsigned short *)(*piVar10 + param_1 * 0x5c + 0x2a6) & 4) != 0) {
          FUN_1001b8e0(uVar17);
        }
      }
      else {
        FUN_1001ba60(uVar17);
      }
      break;
    }
    uVar17 = FUN_1001bbf0(uVar17,0);
    if ((int)uVar17 == -1) {
      FUN_100219a8(1,1,1);
      return 1;
    }
  }
  FUN_1001bfa0(param_1,uVar17);
  FUN_100219a8(1,1,1);
  return 1;
}





























































































































































































































































































































































































































































































































































/* Address: 0x1001c6fc Size: 344 bytes */
long long FUN_1001c6fc(short param_1,long long param_2,short param_3,short param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  long long uVar6;
  short sVar8;
  int iVar7;
  int iVar9;
  char auStack_40 [2];
  char auStack_3e [62];
  
  psVar5 = psRam101176fc;
  piVar4 = piRam1011735c;
  uVar6 = FUN_10044950();
  sVar1 = *(short *)(*piVar4 + 0x1602);
  iVar3 = -1;
  sVar2 = 1000;
  while (sVar1 != 0) {
    sVar1 = sVar1 + -1;
    iVar9 = (int)sVar1;
    if ((int)*(char *)(*piVar4 + iVar9 * 0x42 + 0x1619) == (int)param_3) {
      sVar8 = FUN_10020d88(iVar9,auStack_3e,auStack_40,uVar6,0);
      if ((((sVar8 < 0x32) && (sVar8 < *psVar5)) &&
          (iVar7 = iVar9 * 0x42 + *piVar4,
          iVar7 = FUN_1001eff8(*(short *)(iVar7 + 0x1604),*(short *)(iVar7 + 0x1606)),
          0x4b < iVar7)) && (sVar8 < sVar2)) {
        iVar3 = iVar9;
        sVar2 = sVar8;
      }
    }
  }
  uVar6 = FUN_1001b584(param_1,param_2,param_3,param_4,uVar6);
  if (((int)uVar6 != 0) && (iVar3 != -1)) {
    uVar6 = FUN_1001c2dc(param_1,param_2,iVar3);
  }
  FUN_100449bc();
  return uVar6;
}

/* Address: 0x1001cd68 Size: 684 bytes */
long long FUN_1001cd68(short param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  unsigned long long uVar4;
  int iVar6;
  long long uVar5;
  int bVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = piRam10117468;
  piVar2 = piRam1011735c;
  iVar9 = (int)param_1;
  iVar6 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0x14;
  uVar4 = FUN_1002be50(*(short *)(iVar6 + 0x194),*(short *)(iVar6 + 0x196));
  iVar6 = (int)*(char *)(*piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1) +
                        0x1619);
  if ((iVar6 != 0xf) && (iVar6 != *(short *)(*piVar2 + 0x110))) {
    sVar1 = *(short *)(*piVar3 + 0x24a);
    bVar7 = false;
    if (sVar1 != 0) {
      do {
        sVar1 = sVar1 + -1;
        iVar6 = *piVar3 + sVar1 * 0x5c;
        if ((*(short *)(iVar6 + 0x24c) != 0) &&
           ((int)*(short *)(iVar6 + 0x24e) ==
            (int)*(char *)(*piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1) +
                          0x1619))) {
          bVar7 = true;
        }
      } while (sVar1 != 0);
    }
    if (!bVar7) {
      FUN_1001aea0();
      return 0;
    }
  }
  iVar6 = FUN_1001af38(iVar9);
  if (iVar6 == 0) {
    FUN_1001ae14(iVar9,0);
    return 0;
  }
  FUN_1001b198(iVar9);
  sVar1 = *(short *)(*piVar3 + 0x24a);
  bVar7 = false;
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar8 = (int)sVar1;
      iVar6 = *piVar3 + iVar8 * 0x5c;
      if (((*(short *)(iVar6 + 0x24c) != 0) && (iVar8 != param_1)) &&
         (*(short *)(iVar6 + 0x250) == *(short *)(*piVar3 + param_1 * 0x5c + 0x250))) {
        bVar7 = true;
      }
    } while (iVar8 != 0);
  }
  if (((bVar7) ||
      ((int)*(char *)(*piVar2 + *(short *)(*piVar3 + param_1 * 0x5c + 0x250) * 0x42 + 0x1619) !=
       (int)*(short *)(*piVar2 + 0x110))) && (iVar6 = FUN_1001b35c(iVar9), iVar6 == 0)) {
    return 0;
  }
  FUN_1001c854(iVar9);
  if (*(short *)(*piVar3 + param_1 * 0x5c + 0x24c) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10010b30(*(short *)(*piVar3 + iVar9 * 0x5c + 0x250),1);
    iVar6 = FUN_1001cb24(iVar9);
    if ((iVar6 != 0) && (sVar1 = *(short *)(*piVar3 + iVar9 * 0x5c + 0x250), -1 < sVar1)) {
      FUN_10010b30(sVar1,1);
    }
    if (*(short *)(*piVar3 + iVar9 * 0x5c + 0x24c) == 0) {
      uVar5 = 0;
    }
    else {
      FUN_1001bdc8(iVar9);
      uVar5 = 1;
    }
  }
  return uVar5;
}

/* Address: 0x1001d15c Size: 288 bytes */
void FUN_1001d15c()

{
  int bVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = piRam1011735c;
  iVar5 = 99;
  do {
    iVar4 = iVar5 * 0x42;
    *(char *)(*piVar3 + iVar4 + 0x1631) = 0;
    *(char *)(iVar4 + *piVar3 + 0x1632) = *(char *)(iVar4 + *piVar3 + 0x1631);
    *(char *)(iVar4 + *piVar3 + 0x1630) = *(char *)(iVar4 + *piVar3 + 0x1632);
    *(short *)(iVar4 + *piVar3 + 0x163a) = 0;
    *(short *)(iVar4 + *piVar3 + 0x1638) = *(short *)(iVar4 + *piVar3 + 0x163a);
    *(short *)(iVar4 + *piVar3 + 0x1636) = *(short *)(iVar4 + *piVar3 + 0x1638);
    *(unsigned int *)(iVar4 + *piVar3 + 0x163c) = *(unsigned int *)(iVar4 + *piVar3 + 0x163c) & 0xff00ffff;
    uVar2 = *(unsigned int *)(iVar4 + *piVar3 + 0x163c);
    *(unsigned int *)(iVar4 + *piVar3 + 0x163c) = (uVar2 >> 0x10) << 0x18 | uVar2 & 0xffffff;
    *(short *)(iVar4 + *piVar3 + 0x1644) = 0;
    *(short *)(iVar4 + *piVar3 + 0x1642) = *(short *)(iVar4 + *piVar3 + 0x1644);
    *(short *)(iVar4 + *piVar3 + 0x1640) = *(short *)(iVar4 + *piVar3 + 0x1642);
    *(short *)(iVar4 + *piVar3 + 0x163e) = *(short *)(iVar4 + *piVar3 + 0x1640);
    *(char *)(iVar4 + *piVar3 + 0x1633) = *(char *)(iVar4 + *piVar3 + 0x1619);
    *(char *)(iVar4 + *piVar3 + 0x1634) = 0;
    bVar1 = iVar5 != 0;
    iVar5 = (int)(short)((short)iVar5 + -1);
  } while (bVar1);
  return;
}

/* Address: 0x1001e014 Size: 332 bytes */
void FUN_1001e014(short *param_1,short param_2,short param_3)

{
  int iVar1;
  unsigned long long uVar2;
  short local_10;
  short local_e [7];
  
  uVar2 = (unsigned long long)param_3;
  local_e[0] = -1;
  local_10 = -1;
  if (param_2 != 4) {
    if (param_2 == 1) {
      iVar1 = *piRam1011735c + (param_3 * 0x20 + (int)param_3) * 2;
      local_e[0] = *(short *)(iVar1 + 0x1604);
      local_10 = *(short *)(iVar1 + 0x1606);
      if ((int)*(char *)(iVar1 + 0x1619) == (int)*(short *)(*piRam1011735c + 0x110)) {
        local_e[0] = local_e[0] + 1;
        local_10 = local_10 + 1;
      }
      else {
        FUN_1001dfe0(*param_1,param_1[1],local_e,&local_10);
      }
    }
    else if (param_2 == 2) {
      iVar1 = *piRam1011735c + (int)(((uVar2 & 0xfffffff) * 0x10 - uVar2 & 0xffffffff) << 1);
      local_e[0] = *(short *)(iVar1 + 0xd2c);
      local_10 = *(short *)(iVar1 + 0xd2e);
    }
    else if (param_2 == 3) {
      iVar1 = *piRam1011735c + (int)((uVar2 & 0xffffffff) << 5);
      local_e[0] = *(short *)(iVar1 + 0x812);
      local_10 = *(short *)(iVar1 + 0x814);
    }
    if (local_e[0] == -1) {
      local_e[0] = *param_1;
    }
    param_1[9] = local_e[0];
    if (local_10 == -1) {
      local_10 = param_1[1];
    }
    param_1[10] = local_10;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1001e160(int param_1,short param_2,short param_3,unsigned short param_4) { return 0; }
































































































































































































































































































































































































































/* Address: 0x1001e4b0 Size: 180 bytes */
long long FUN_1001e4b0(short param_1)

{
  int iVar1;
  int *piVar2;
  long long uVar3;
  int iVar4;
  unsigned long long uVar5;
  
  piVar2 = piRam1011735c;
  uVar5 = (unsigned long long)param_1;
  if (*(char *)((int)(((uVar5 & 0x7ffffff) * 0x20 + uVar5 & 0xffffffff) << 1) + *piRam1011735c +
               0x1631) == '\0') {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)(((uVar5 & 0x7ffffff) * 0x20 + uVar5 & 0x7fffffff) << 1);
    iVar4 = FUN_10047d80(uVar5,*(char *)(*piRam1011735c + iVar1 + 0x1630));
    iVar1 = iVar1 + *piVar2;
    if (*(char *)(iVar1 + 0x1631) == *(char *)(iVar1 + iVar4 + 0x161e)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* Address: 0x1001e564 Size: 272 bytes */
void FUN_1001e564(short param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  unsigned long long uVar3;
  
  piVar1 = piRam1011735c;
  uVar3 = (unsigned long long)param_1;
  iVar2 = FUN_1001e4b0(uVar3);
  if (iVar2 == 0) {
    iVar2 = (int)(((uVar3 & 0x7ffffff) * 0x20 + uVar3 & 0x7fffffff) << 1);
    *(short *)(*piVar1 + iVar2 + 0x1636) = 0;
    *(short *)(iVar2 + *piVar1 + 0x1638) = 0xffff;
    *(short *)(iVar2 + *piVar1 + 0x163a) = 0xffff;
  }
  else {
    if (param_1 < 100) {
      iVar2 = (int)(((uVar3 & 0x7ffffff) * 0x20 + uVar3 & 0xffffffff) << 1);
      *(short *)(*piVar1 + iVar2 + 0x1638) = *(short *)(*piVar1 + param_2 * 0x42 + 0x1604)
      ;
      *(short *)(iVar2 + *piVar1 + 0x163a) = *(short *)(param_2 * 0x42 + *piVar1 + 0x1606)
      ;
    }
    else {
      iVar2 = (int)(((uVar3 & 0x7ffffff) * 0x20 + uVar3 & 0xffffffff) << 1);
      *(short *)(*piVar1 + iVar2 + 0x1638) = 0xfffe;
      *(short *)(iVar2 + *piVar1 + 0x163a) = 0xfffe;
    }
    *(short *)
     (*piVar1 + (int)(((uVar3 & 0x7ffffff) * 0x20 + uVar3 & 0xffffffff) << 1) + 0x1636) = 1;
  }
  return;
}


















































































































/* Address: 0x1001f174 Size: 172 bytes */
long long FUN_1001f174(short param_1,short param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = param_1 + -1;
  if ((int)sVar2 <= param_1 + 1) {
    do {
      sVar1 = param_2 + -1;
      if ((int)sVar1 <= param_2 + 1) {
        do {
          if ((-1 < sVar2) && (-1 < sVar1)) {
            if ((sVar2 < 0x70) && (sVar1 < 0x9c)) {
              if ((*(unsigned int *)(*piRam10117354 + sVar1 * 0x70 + (int)sVar2) >> 0x1d & 1) != 0) {
                return 1;
              }
            }
          }
          sVar1 = sVar1 + 1;
        } while ((int)sVar1 <= param_2 + 1);
      }
      sVar2 = sVar2 + 1;
    } while ((int)sVar2 <= param_1 + 1);
  }
  return 0;
}

/* Address: 0x1001f758 Size: 316 bytes */
void FUN_1001f758()

{
  int bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long long lVar5;
  int bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long long lVar11;
  unsigned long long uVar12;
  int iVar13;
  
  piVar10 = piRam10117468;
  piVar9 = piRam10117364;
  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  sVar3 = *(short *)(*piRam1011735c + 0x1602);
  while (sVar3 != 0) {
    sVar3 = sVar3 + -1;
    uVar12 = (unsigned long long)sVar3;
    iVar13 = *piVar8;
    iVar4 = iVar13 + (int)(((uVar12 & 0x7ffffff) * 0x20 + uVar12 & 0xffffffff) << 1);
    lVar5 = -(long long)
             *(char *)(iVar13 + (*(unsigned int *)(*piVar7 + *(short *)(iVar4 + 0x1606) * 0xe0 +
                                          *(short *)(iVar4 + 0x1604) * 2) >> 0x18) + 0x711);
    lVar11 = lVar5 + 10;
    if ((lVar11 + (-(unsigned long long)(lVar11 == 0) - (lVar5 + 9)) & 0xff) == 0) {
      iVar13 = *piVar10 + (int)sVar3;
      *(unsigned char *)(iVar13 + 0x11e) = *(unsigned char *)(iVar13 + 0x11e) & 0xfd;
      bVar6 = false;
      iVar13 = 3;
      do {
        cVar2 = *(char *)(*piVar8 + (int)(((uVar12 & 0x7ffffff) * 0x20 + uVar12 & 0xffffffff) << 1)
                          + iVar13 + 0x161a);
        if ((cVar2 != -1) && (*(char *)(*piVar9 + cVar2 * 6) != '\0')) {
          bVar6 = true;
        }
        bVar1 = iVar13 != 0;
        iVar13 = (int)(short)((short)iVar13 + -1);
      } while (bVar1);
      if (bVar6) {
        iVar13 = *piVar10 + (int)sVar3;
        *(unsigned char *)(iVar13 + 0x11e) = *(unsigned char *)(iVar13 + 0x11e) | 2;
      }
    }
  }
  return;
}

/* Address: 0x1001f894 Size: 196 bytes */
void FUN_1001f894(short param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int bVar4;
  int bVar5;
  short sVar6;
  short sVar7;
  
  iVar3 = *piRam1011735c + param_1 * 0x42;
  sVar1 = *(short *)(iVar3 + 0x1604);
  sVar2 = *(short *)(iVar3 + 0x1606);
  sVar7 = sVar1 + -1;
  bVar4 = false;
  bVar5 = false;
  if ((int)sVar7 <= sVar1 + 2) {
    do {
      bVar4 = bVar5;
      sVar6 = sVar2 + -1;
      if ((int)sVar6 <= sVar2 + 2) {
        do {
          if ((*(unsigned int *)(*piRam10117354 + sVar6 * 0x70 + (int)sVar7) >> 0x1d & 1) != 0) {
            bVar4 = true;
          }
          sVar6 = sVar6 + 1;
        } while ((int)sVar6 <= sVar2 + 2);
      }
      sVar7 = sVar7 + 1;
      bVar5 = bVar4;
    } while ((int)sVar7 <= sVar1 + 2);
  }
  if (bVar4) {
    *(unsigned char *)(*piRam10117468 + (int)param_1 + 0x11e) =
         *(unsigned char *)(*piRam10117468 + (int)param_1 + 0x11e) & 0xfe;
  }
  return;
}

/* Address: 0x1001f958 Size: 140 bytes */
void FUN_1001f958()

{
  short sVar1;
  int *piVar2;
  
  piVar2 = piRam10117468;
  if (*(short *)(*piRam1011735c + 0x124) != 0) {
    sVar1 = *(short *)(*piRam1011735c + 0x1602);
    while (sVar1 != 0) {
      sVar1 = sVar1 + -1;
      if ((*(unsigned char *)(*piVar2 + (int)sVar1 + 0x11e) & 1) != 0) {
        FUN_1001f894(sVar1);
      }
    }
  }
  return;
}














































































/* Address: stubbed - had compile errors on 64-bit */
int FUN_1002122c(short param_1,short param_2,short *param_3) { return 0; }




























































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002279c() { }













































































































































































































































































































































































































































































/* Address: 0x10025f2c Size: 104 bytes */
void FUN_10025f2c()

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  piVar1 = piRam1011735c;
  FUN_1001db60();
  iVar3 = 0;
  do {
    *(short *)(*piVar1 + iVar3 * 2 + 0x1122) = 0;
    *(short *)(iVar3 * 2 + *piVar1 + 0x1132) = 0xffff;
    sVar2 = (short)iVar3 + 1;
    iVar3 = (int)sVar2;
  } while (sVar2 < 8);
  return;
}

/* Address: 0x100275ec Size: 256 bytes */
void FUN_100275ec()

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  
  piVar5 = piRam1011735c;
  uVar7 = 0;
  do {
    uVar8 = 0;
    do {
      if (*(short *)(*piVar5 + 0x11c) == 0) {
        iVar4 = (int)((uVar7 & 0xfffffff) << 4);
        iVar3 = (int)((uVar8 & 0x7fffffff) << 1);
        iVar2 = *piVar5 + iVar4 + iVar3;
        *(unsigned int *)(iVar2 + 0x1582) = *(unsigned int *)(iVar2 + 0x1582) & 0xcfffffff | 0x20000000;
        iVar3 = iVar4 + *piVar5 + iVar3;
        uVar1 = *(unsigned int *)(iVar3 + 0x1582);
        *(unsigned int *)(iVar3 + 0x1582) = (uVar1 >> 0x1c & 3) << 0x1a | uVar1 & 0xf3ffffff;
      }
      else {
        iVar4 = (int)((uVar7 & 0xfffffff) << 4);
        iVar3 = (int)((uVar8 & 0x7fffffff) << 1);
        iVar2 = iVar4 + *piVar5 + iVar3;
        *(unsigned int *)(iVar2 + 0x1582) = *(unsigned int *)(iVar2 + 0x1582) & 0xcfffffff;
        iVar3 = iVar4 + *piVar5 + iVar3;
        uVar1 = *(unsigned int *)(iVar3 + 0x1582);
        *(unsigned int *)(iVar3 + 0x1582) = (uVar1 >> 0x1c & 3) << 0x1a | uVar1 & 0xf3ffffff;
      }
      iVar4 = (int)((uVar7 & 0xfffffff) << 4);
      iVar3 = (int)((uVar8 & 0x7fffffff) << 1);
      iVar2 = *piVar5 + iVar4 + iVar3;
      *(unsigned int *)(iVar2 + 0x1582) = *(unsigned int *)(iVar2 + 0x1582) & 0xbfffffff;
      iVar3 = iVar4 + *piVar5 + iVar3;
      *(unsigned int *)(iVar3 + 0x1582) = *(unsigned int *)(iVar3 + 0x1582) & 0x7fffffff;
      sVar6 = (short)uVar8 + 1;
      uVar8 = (unsigned long long)sVar6;
    } while (sVar6 < 8);
    sVar6 = (short)uVar7 + 1;
    uVar7 = (unsigned long long)sVar6;
  } while (sVar6 < 8);
  return;
}

/* Address: 0x100276ec Size: 16 bytes */
char FUN_100276ec()

{
  return *(char *)(*piRam1011734c + 0x1a1);
}

/* Address: 0x1002772c Size: 16 bytes */
char FUN_1002772c()

{
  return *(char *)(*piRam1011734c + 0x1a8);
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1002869c() { return 0; }









































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10028b30(int *param_1,short param_2,short param_3) { return 0; }










































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
short FUN_10028e10(long long param_1,short param_2,short param_3) { return 0; }


















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002b230(short param_1) { }













































































































































































































































































































































































































































































/* Address: 0x1002bbd4 Size: 260 bytes */
void FUN_1002bbd4()

{
  char cVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_8;
  int local_4;
  
  iVar3 = iRam10117630;
  piVar2 = piRam10117360;
  iVar8 = 0;
  do {
    *(short *)(iVar8 * 2 + iVar3) = 0;
    sVar4 = (short)iVar8 + 1;
    iVar8 = (int)sVar4;
  } while (sVar4 < 8);
  sVar4 = *(short *)(*piRam1011735c + 0x182);
  if (sVar4 != 0) {
    do {
      sVar4 = sVar4 + -1;
      iVar9 = (int)sVar4;
      iVar8 = *piVar2;
      iVar6 = iVar8 + iVar9 * 0x16;
      if (((*(char *)(iVar6 + 5) < '\b') && (-1 < *(short *)(iVar9 * 0x16 + iVar8))) &&
         (-1 < *(short *)(iVar6 + 2))) {
        cVar1 = *(char *)(iVar6 + 0xb);
        sVar5 = (short)cVar1;
        if ((*(unsigned short *)(iVar6 + 0xc) & 0x1000) != 0) {
          local_4 = (int)cVar1;
          local_8 = 4;
          piVar7 = &local_8;
          if (4 < cVar1) {
            piVar7 = &local_4;
          }
          sVar5 = (short)*piVar7;
        }
        iVar8 = *(char *)(*piVar2 + iVar9 * 0x16 + 5) * 2;
        *(short *)(iVar8 + iVar3) = *(short *)(iVar8 + iVar3) + sVar5;
      }
    } while (iVar9 != 0);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002bdc4() { }




























































































































































/* Address: 0x1002bef8 Size: 108 bytes */
int FUN_1002bef8(short param_1,short param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(*piRam1011735c + 0x810)) {
    do {
      iVar1 = *piRam1011735c + iVar3 * 0x20;
      if ((*(short *)(iVar1 + 0x812) == param_1) && (*(short *)(iVar1 + 0x814) == param_2)) {
        return iVar3;
      }
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while (sVar2 < *(short *)(*piRam1011735c + 0x810));
  }
  return -1;
}

/* Address: 0x1002bf64 Size: 444 bytes */
unsigned long long FUN_1002bf64(short param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  unsigned long long uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  unsigned long long uVar7;
  
  piVar2 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x1602) < 1) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = 0xffffffffffffffff;
    iVar6 = 1000;
    uVar7 = 0;
    do {
      if ((*(short *)(*piVar2 + 0x124) == 0) || (param_4 == 0)) {
LAB_1002c08c:
        iVar1 = (int)(((uVar7 & 0x7ffffff) * 0x20 + uVar7 & 0x7fffffff) << 1);
        iVar4 = *piVar2 + iVar1;
        iVar4 = FUN_1000a884(param_1,param_2,*(short *)(iVar4 + 0x1604),
                             *(short *)(iVar4 + 0x1606));
        if ((iVar4 < iVar6) &&
           ((param_3 == 0xe || ((int)*(char *)(iVar1 + *piVar2 + 0x1619) == (int)param_3)))) {
          uVar3 = uVar7;
          iVar6 = iVar4;
        }
      }
      else {
        iVar1 = (int)(((uVar7 & 0x7ffffff) * 0x20 + uVar7 & 0x7fffffff) << 1);
        iVar4 = iVar1 + *piVar2;
        iVar4 = FUN_10009630(1,*(short *)(iVar4 + 0x1604),*(short *)(iVar4 + 0x1606));
        if ((iVar4 != 0) ||
           (((iVar4 = FUN_10009630(1,*(short *)(*piVar2 + iVar1 + 0x1604) + 1,
                                   *(short *)(*piVar2 + iVar1 + 0x1606)), iVar4 != 0 ||
             (iVar4 = FUN_10009630(1,*(short *)(iVar1 + *piVar2 + 0x1604),
                                   *(short *)(iVar1 + *piVar2 + 0x1606) + 1), iVar4 != 0)) ||
            (iVar4 = FUN_10009630(1,*(short *)(*piVar2 + iVar1 + 0x1604) + 1,
                                  *(short *)(*piVar2 + iVar1 + 0x1606) + 1), iVar4 != 0))))
        goto LAB_1002c08c;
      }
      sVar5 = (short)uVar7 + 1;
      uVar7 = (unsigned long long)sVar5;
    } while (sVar5 < *(short *)(*piVar2 + 0x1602));
  }
  return uVar3;
}

/* Address: 0x1002c200 Size: 272 bytes */
int FUN_1002c200(short param_1,short param_2,short param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x810) < 1) {
    iVar5 = -1;
  }
  else {
    sVar1 = *(short *)(*piRam1011735c + 0x110);
    iVar5 = -1;
    iVar6 = 1000;
    iVar7 = 0;
    do {
      iVar3 = *piVar2 + iVar7 * 0x20;
      if (((*(unsigned short *)(iVar3 + 0x830) & (unsigned short)(1 << ((int)sVar1 & 0x3fU))) != 0) &&
         (((*(short *)(*piVar2 + 0x124) == 0 || (param_3 == 0)) ||
          (iVar3 = FUN_10009630(1,*(short *)(iVar3 + 0x812),*(short *)(iVar3 + 0x814)),
          iVar3 != 0)))) {
        iVar3 = *piVar2 + iVar7 * 0x20;
        iVar3 = FUN_1000a884(param_1,param_2,*(short *)(iVar3 + 0x812),
                             *(short *)(iVar3 + 0x814));
        if (iVar3 < iVar6) {
          iVar5 = iVar7;
          iVar6 = iVar3;
        }
      }
      sVar4 = (short)iVar7 + 1;
      iVar7 = (int)sVar4;
    } while (sVar4 < *(short *)(*piVar2 + 0x810));
  }
  return iVar5;
}


/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002cbbc() { }
































































































































































































































































































































































































































/* Address: 0x1002ce38 Size: 388 bytes */
void FUN_1002ce38()

{
  short sVar1;
  long long lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  long long lVar7;
  int iVar8;
  short local_18 [12];
  
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  if (1 < *(short *)(*piRam1011735c + 0x11a)) {
    sVar1 = *(short *)(*piRam1011735c + 0x1602);
    while (sVar1 != 0) {
      sVar1 = sVar1 + -1;
      iVar8 = (int)sVar1;
      iVar3 = (sVar1 * 0x20 + (int)sVar1) * 2;
      iVar6 = *piVar5 + iVar3;
      if (((*(char *)(iVar6 + 0x1619) == '\x0f') &&
          (lVar2 = -(long long)
                    *(char *)((*(unsigned int *)(*piVar4 + *(short *)(iVar6 + 0x1606) * 0xe0 +
                                        *(short *)(iVar6 + 0x1604) * 2) >> 0x18) + *piVar5 + 0x711),
          lVar7 = lVar2 + 10, (lVar7 + (-(unsigned long long)(lVar7 == 0) - (lVar2 + 9)) & 0xff) == 0)) &&
         (*(char *)(iVar6 + 0x1634) != '\0')) {
        if ((*(char *)(iVar6 + 0x1631) != '\0') &&
           (*(char *)(iVar6 + 0x1631) = *(char *)(iVar6 + 0x1631) + -1,
           *(char *)(*piVar5 + iVar3 + 0x1631) == '\0')) {
          FUN_1002cae8(iVar8);
        }
        iVar6 = FUN_1001e4b0(iVar8);
        if ((iVar6 == 0) &&
           (iVar6 = *piVar5 + iVar8 * 0x42,
           FUN_1002122c(*(short *)(iVar6 + 0x1604),*(short *)(iVar6 + 0x1606),local_18),
           local_18[0] < 4)) {
          FUN_1001e794(iVar8,2,0xffffffffffffffff,0);
        }
      }
    }
  }
  return;
}

/* Address: 0x1003357c Size: 132 bytes */
void FUN_1003357c(int param_1,short param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 4) != '\x1c') {
    return;
  }
  iVar2 = *piRam1011735c + (int)*(char *)(param_1 + 10);
  uVar1 = *(unsigned int *)(iVar2 + 0x5e4);
  if (0x3b < (uVar1 >> 0x1a) + (int)param_2) {
    *(unsigned int *)(iVar2 + 0x5e4) = uVar1 & 0x3ffffff | 0xf0000000;
    return;
  }
  iVar2 = *piRam1011735c + (int)*(char *)(param_1 + 10);
  uVar1 = *(unsigned int *)(iVar2 + 0x5e4);
  *(unsigned int *)(iVar2 + 0x5e4) = ((uVar1 >> 0x1a) + (int)param_2) * 0x4000000 | uVar1 & 0x3ffffff;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10035d7c() { }





























































































































































































































/* Address: 0x10038860 Size: 48 bytes */
void FUN_10038860()

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  piVar1 = piRam1011735c;
  iVar3 = 0;
  do {
    *(char *)(*piVar1 + iVar3 * 0x2c + 0x1422) = 0;
    sVar2 = (short)iVar3 + 1;
    iVar3 = (int)sVar2;
  } while (sVar2 < 8);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10038890() { }





































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003956c() { }

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
short FUN_10039c58(short param_1) { return 0; }













































































































































































































































































/* Address: 0x10039ec8 Size: 556 bytes */
void FUN_10039ec8(short param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  unsigned long long uVar6;
  
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  if (*(short *)(*piRam1011735c + 0x11e) != 0) {
    FUN_10063784();
  }
  uVar6 = 0;
  if (0 < *(short *)(*piVar4 + 0x810)) {
    do {
      iVar1 = *piVar4 + (int)uVar6 * 0x20;
      if (*(char *)(iVar1 + 0x82a) == '\x01') {
        iVar2 = *piVar3 + *(short *)(iVar1 + 0x814) * 0xe0;
        iVar1 = *(short *)(iVar1 + 0x812) * 2;
        *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) & 0xffffff | 0xb000000;
      }
      else {
        iVar1 = *piVar4 + (int)uVar6 * 0x20;
        if (*(short *)(iVar1 + 0x82e) == 0) {
          iVar1 = *piVar4 + (int)((uVar6 & 0xffffffff) << 5);
          iVar2 = *piVar3 + *(short *)(iVar1 + 0x814) * 0xe0;
          iVar1 = *(short *)(iVar1 + 0x812) * 2;
          *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) & 0xffffff | 0xc000000;
        }
        else if (((int)*(short *)(iVar1 + 0x830) & 1 << ((int)param_1 & 0x3fU)) == 0) {
          if (*(short *)(*piVar4 + 0x11e) == 0) {
            iVar1 = *piVar4 + (int)((uVar6 & 0xffffffff) << 5);
            iVar2 = *piVar3 + *(short *)(iVar1 + 0x814) * 0xe0;
            iVar1 = *(short *)(iVar1 + 0x812) * 2;
            *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) & 0xffffff | 0xa000000;
          }
          else {
            iVar1 = *piVar4 + (int)((uVar6 & 0xffffffff) << 5);
            iVar2 = *piVar3 + *(short *)(iVar1 + 0x814) * 0xe0;
            iVar1 = *(short *)(iVar1 + 0x812) * 2;
            *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) & 0xffffff | 0x9000000;
          }
        }
        else {
          iVar2 = *piVar3 + *(short *)(iVar1 + 0x814) * 0xe0;
          iVar1 = *(short *)(iVar1 + 0x812) * 2;
          *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) & 0xffffff | 0xa000000;
        }
      }
      if (*(short *)(*piVar4 + 0x11e) != 0) {
        iVar1 = *piVar4 + (int)((uVar6 & 0xffffffff) << 5);
        FUN_10064498(0,*(short *)(iVar1 + 0x812),*(short *)(iVar1 + 0x814));
      }
      sVar5 = (short)uVar6 + 1;
      uVar6 = (unsigned long long)sVar5;
    } while (sVar5 < *(short *)(*piVar4 + 0x810));
  }
  if (*(short *)(*piVar4 + 0x11e) != 0) {
    FUN_10064104();
  }
  return;
}

/* Address: 0x1003c068 Size: 768 bytes */
void FUN_1003c068()

{
  short uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char uVar5;
  short sVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  short local_40 [8];
  short local_30 [24];
  
  piVar2 = piRam1011735c;
  uVar8 = 0xffffffffffffffff;
  uVar7 = 7;
  do {
    if (*(short *)(*piVar2 + (int)((uVar7 & 0xffffffff) << 1) + 0x138) == 0) {
      iVar3 = (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0xffffffff) << 2);
      *(short *)(*piVar2 + iVar3 + 0x194) = 0xffff;
      *(short *)(iVar3 + *piVar2 + 0x196) = 0xffff;
    }
    else {
      iVar4 = (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x3fffffff) << 2);
      iVar3 = iVar4 + *piVar2;
      *(short *)(iVar3 + 0x194) = *(short *)(iVar3 + 0x18a);
      iVar4 = iVar4 + *piVar2;
      *(short *)(iVar4 + 0x196) = *(short *)(iVar4 + 0x18c);
    }
    iVar3 = *piVar2 + (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0xffffffff) << 2);
    uVar1 = *(short *)(iVar3 + 0x18a);
    iVar4 = (int)((uVar7 & 0x7fffffff) << 1);
    *(short *)((int)local_30 + iVar4) = uVar1;
    *(short *)((int)local_40 + iVar4) = *(short *)(iVar3 + 0x18c);
    iVar3 = FUN_1002be50(uVar1);
    if (-1 < iVar3) {
      if (*(short *)(*piVar2 + iVar4 + 0x138) == 0) {
        FUN_1002ca18(*piVar2 + iVar3 * 0x42 + 0x1604,0xf);
        *(char *)(iVar3 * 0x42 + *piVar2 + 0x1619) = 0xf;
      }
      else {
        FUN_1002ca18(*piVar2 + iVar3 * 0x42 + 0x1604,uVar7);
        *(char *)(iVar3 * 0x42 + *piVar2 + 0x1619) = (char)uVar7;
        uVar8 = uVar7;
      }
    }
    iVar3 = (int)uVar7;
    uVar7 = (long long)(short)((short)uVar7 + -1);
  } while (iVar3 != 0);
  if (((int)uVar8 != -1) && (*(short *)(*piVar2 + 0x128) != 0)) {
    iVar3 = (int)((uVar8 & 0xffffffff) << 1);
    for (iVar3 = FUN_1002bf64(*(short *)((int)local_30 + iVar3),
                              *(short *)((int)local_40 + iVar3),0xf,0); -1 < iVar3;
        iVar3 = FUN_1002bf64(*(short *)((int)local_30 + iVar3),
                             *(short *)((int)local_40 + iVar3),0xf,0)) {
      FUN_1002ca18(*piVar2 + iVar3 * 0x42 + 0x1604,uVar8);
      *(char *)(iVar3 * 0x42 + *piVar2 + 0x1619) = (char)uVar8;
      iVar4 = FUN_1005f230(1,10,0xffffffffffffffff);
      if (iVar4 < 5) {
        iVar3 = *piVar2 + (int)(((uVar8 & 0x3fffffff) * 4 + uVar8 & 0xffffffff) << 2);
        iVar4 = (int)((uVar8 & 0xffffffff) << 1);
        *(short *)((int)local_30 + iVar4) = *(short *)(iVar3 + 0x18a);
        *(short *)((int)local_40 + iVar4) = *(short *)(iVar3 + 0x18c);
      }
      else {
        iVar3 = *piVar2 + iVar3 * 0x42;
        iVar4 = (int)((uVar8 & 0xffffffff) << 1);
        *(short *)((int)local_30 + iVar4) = *(short *)(iVar3 + 0x1604);
        *(short *)((int)local_40 + iVar4) = *(short *)(iVar3 + 0x1606);
      }
      do {
        uVar8 = uVar8 + 1;
        uVar8 = (unsigned long long)
                (short)((short)uVar8 -
                       (short)(((long long)((int)uVar8 >> 3) +
                                (unsigned long long)((int)uVar8 < 0 && (uVar8 & 7) != 0) & 0xffffffff) << 3))
        ;
        iVar3 = (int)((uVar8 & 0x7fffffff) << 1);
      } while (*(short *)(*piVar2 + iVar3 + 0x138) == 0);
    }
  }
  FUN_1003b9f8();
  iVar3 = 0;
  if (0 < *(short *)(*piVar2 + 0x1602)) {
    do {
      uVar5 = FUN_10048c90(iVar3);
      *(char *)(*piVar2 + iVar3 * 0x42 + 0x1618) = uVar5;
      sVar6 = (short)iVar3 + 1;
      iVar3 = (int)sVar6;
    } while (sVar6 < *(short *)(*piVar2 + 0x1602));
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003cb84() { }






























































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003d094() { }

























































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1003d734 Size: 1268 bytes */
void FUN_1003d734(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  char cVar6;
  int *piVar4;
  int *piVar5;
  short sVar7;
  long long uVar8;
  long long lVar9;
  int local_3c;
  
  piVar5 = piRam101176e0;
  piVar3 = piRam1011735c;
  if (param_1 != (int *)0x0) {
    cVar6 = FUN_10056534();
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x68656c70);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar4 + 0x738) + (int)piVar4,0,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6d6f7665);
    if (piVar4 != (int *)0x0) {
      if ((*piVar5 == 0) || (**(short **)(local_3c + -0x1a10) <= **(short **)(local_3c + -0x1a04)))
      {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),uVar8,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e657874);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),cVar6 == '\0',1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6c656176);
    if (piVar4 != (int *)0x0) {
      if ((cVar6 == '\0') || (*piVar5 == 0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),uVar8,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x67756172);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),*piVar5 == 0,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657365);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),*piVar5 == 0,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x70617468);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),*piVar5 == 0,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64656c65);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar5;
      if (((iVar1 == 0) || (*(short *)(iVar1 + 0x12) < 0)) || (*(short *)(iVar1 + 0x14) < 0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),uVar8,1);
    }
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x63656e74);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),*piVar5 == 0,1);
    }
    lVar9 = 0;
    do {
      piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   lVar9 + 0x73637230);
      if (piVar5 != (int *)0x0) {
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x738),0,1);
      }
      sVar7 = (short)lVar9 + 1;
      lVar9 = (long long)sVar7;
    } while (sVar7 < 8);
    piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6469706c);
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar3;
      sVar7 = 0x3ef;
      if ((*(short *)(iVar1 + 0x11c) != 0) &&
         (uVar2 = *(unsigned int *)(iVar1 + *(short *)(iVar1 + 0x110) * 0x12 + 0x1582),
         (uVar2 >> 0x1e & 1) != 0)) {
        if ((int)uVar2 < 0) {
          sVar7 = 2;
        }
        else {
          sVar7 = 1;
        }
        sVar7 = sVar7 + 0x3ef;
      }
      if (*(short *)((int)piVar5 + 0xaa) != sVar7) {
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7a8),sVar7,1);
      }
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x738),*(short *)(*piVar3 + 0x11c) == 0,1
                  );
    }
  }
  return;
}














































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
int FUN_10042a24(short param_1,short param_2) { return 0; }












































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10042bb4(short param_1,short param_2) { }

























































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10044110(short param_1,short param_2) { }














































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100445a8 Size: 84 bytes */
void FUN_100445a8(short *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = piRam101176e0;
  *param_1 = *(short *)*piRam101176e0;
  param_1[1] = *(short *)(*piVar1 + 2);
  param_1[2] = *(short *)(*piVar1 + 0x12);
  param_1[3] = *(short *)(*piVar1 + 0x14);
  *(int *)(param_1 + 6) = param_2;
  param_1[5] = *puRam10117710;
  param_1[4] = *puRam101175b4;
  return;
}



/* Address: stubbed - had compile errors on 64-bit */
void FUN_10045ac8() { }

















































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100472f4(long long param_1,long long param_2,long long param_3,short param_4) { }

























































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x10047de8 Size: 320 bytes */
void FUN_10047de8(short param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  
  piVar3 = piRam1011735c;
  *param_3 = 0;
  if ((param_1 == -2) || (99 < param_1)) {
    iVar5 = 0;
    if (0 < *(short *)(*piVar3 + 0x1602)) {
      do {
        iVar1 = *piVar3 + iVar5 * 0x42;
        if (((*(short *)(iVar1 + 0x1636) != 0) &&
            ((int)*(char *)(iVar1 + 0x1619) == (int)*(short *)(*piVar3 + 0x110))) &&
           (*(short *)(iVar1 + 0x1638) == -2)) {
          *(short *)(param_2 + *param_3 * 2) = (short)iVar5;
          *param_3 = *param_3 + 1;
        }
        sVar4 = (short)iVar5 + 1;
        iVar5 = (int)sVar4;
      } while (sVar4 < *(short *)(*piVar3 + 0x1602));
      return;
    }
  }
  else {
    iVar5 = 0;
    if (0 < *(short *)(*piVar3 + 0x1602)) {
      do {
        iVar1 = *piVar3 + iVar5 * 0x42;
        if (((*(short *)(iVar1 + 0x1636) != 0) &&
            (iVar2 = param_1 * 0x42 + *piVar3,
            *(short *)(iVar1 + 0x1638) == *(short *)(iVar2 + 0x1604))) &&
           (*(short *)(iVar1 + 0x163a) == *(short *)(iVar2 + 0x1606))) {
          *(short *)(param_2 + *param_3 * 2) = (short)iVar5;
          *param_3 = *param_3 + 1;
        }
        sVar4 = (short)iVar5 + 1;
        iVar5 = (int)sVar4;
      } while (sVar4 < *(short *)(*piVar3 + 0x1602));
    }
  }
  return;
}



/* Address: 0x1004e384 Size: 496 bytes */







/* Address: stubbed - FUN_1005f678 call mismatch */
long long FUN_1004e384(short param_1,long long param_2,short param_3) { return 0; }

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1004f664() { }










































































































/* Address: 0x10050ffc Size: 952 bytes */
void FUN_10050ffc(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,int param_6,int param_7)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char auStack_660 [256];
  char auStack_560 [256];
  char auStack_460 [256];
  char auStack_360 [256];
  char auStack_260 [260];
  char auStack_15c [256];
  short local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  puVar1 = puRam10117370;
  piVar2 = (int *)FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xd52,
                               *(int *)(*piRam1011734c + 0x88));
  FUN_100db26c();
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = *puVar1;
  *puVar1 = auStack_15c;
  iVar3 = FUN_10000090(auStack_15c);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x68656164);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_260,param_1);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_260,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x73747231);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_360,param_2);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_360,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x73747232);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_460,param_3);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7c8) + (int)piVar4,auStack_460,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x73747233);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_560,param_4);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_560,0);
    }
    piVar4 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x73747234);
    if (piVar4 != (int *)0x0) {
      FUN_100b19f4(auStack_660,param_5);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_660,0);
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
    iVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x328));
    if (iVar3 == 0x6f6b2020) {
      if (param_6 != 0) {
        FUN_10117884();
      }
    }
    else if (param_7 != 0) {
      FUN_10117884();
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    *puVar1 = local_54;
  }
  else {
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    }
    FUN_100db158(local_5c,local_58);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100517f8(short param_1,short param_2,short param_3,short param_4) { }























































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
int FUN_1005310c(int param_1) { return 0; }







































































































































































































































/* Address: 0x10053838 Size: 432 bytes */
short * FUN_10053838(short param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int bVar6;
  int *piVar7;
  int *piVar8;
  short sVar10;
  short sVar11;
  short *puVar9;
  short sVar12;
  unsigned long long uVar13;
  unsigned long long uVar14;
  unsigned long long uVar15;
  unsigned long long uVar16;
  unsigned long long uVar17;
  unsigned long long uVar18;
  char auStack_70 [23];
  char uStack_59;
  short local_54;
  char uStack_53;
  short local_30 [24];
  
  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  FUN_10049628(param_1,auStack_70);
  sVar12 = 10;
  bVar6 = false;
  uVar13 = (long long)param_2;
  uVar15 = (long long)param_3;
  uVar17 = (long long)param_3;
  uVar18 = (long long)param_2;
  do {
    uVar14 = uVar18;
    uVar16 = uVar17;
    FUN_1002122c(uVar14,uVar16,local_30);
    if ((local_30[0] < 8) &&
       (((*(unsigned int *)(*piVar7 + (int)(((uVar16 & 0x1fffffff) * 8 - uVar16 & 0xffffffff) << 5) +
                   (int)((uVar14 & 0xffffffff) << 1)) >> 0x10 & 0xf) ==
         (int)*(short *)(*piVar8 + 0x110) || (local_30[0] == 0)))) {
      bVar6 = true;
      uVar17 = uVar16;
      uVar18 = uVar14;
    }
    else {
      sVar10 = FUN_1005f230(1,3,0xfffffffffffffffe);
      sVar1 = (short)uVar14;
      sVar11 = FUN_1005f230(1,3,0xfffffffffffffffe);
      sVar5 = (short)uVar16;
      sVar12 = sVar12 + -1;
      uVar14 = uVar13;
      uVar16 = uVar15;
      uVar17 = (long long)(short)(sVar5 + sVar11);
      uVar18 = (long long)(short)(sVar1 + sVar10);
      if (sVar12 == 0) {
        return (short *)0x0;
      }
    }
    uVar13 = uVar14;
    uVar15 = uVar16;
  } while (!bVar6);
  puVar9 = (short *)FUN_10021434();
  if (puVar9 != (short *)0x0) {
    *puVar9 = (short)uVar14;
    puVar9[1] = (short)uVar16;
    *(char *)(puVar9 + 2) = (char)param_1;
    *(char *)((int)puVar9 + 5) = (char)*(short *)(*piVar8 + 0x110);
    *(char *)(puVar9 + 3) = uStack_53;
    *(char *)((int)puVar9 + 7) = uStack_53;
    *(char *)(puVar9 + 4) = uStack_59;
    *(char *)((int)puVar9 + 9) = 0;
    *(char *)(puVar9 + 5) = 0;
    *(char *)((int)puVar9 + 0xb) = 0;
    iVar4 = (int)(((uVar16 & 0x1fffffff) * 8 - uVar16 & 0x7ffffff) << 5);
    iVar2 = *piVar7 + iVar4;
    iVar3 = (int)((uVar14 & 0x7fffffff) << 1);
    *(unsigned int *)(iVar2 + iVar3) = *(unsigned int *)(iVar2 + iVar3) | 0x100000;
    iVar4 = iVar4 + *piVar7;
    *(unsigned int *)(iVar4 + iVar3) =
         ((int)*(short *)(*piVar8 + 0x110) & 0xfU) << 0x10 | *(unsigned int *)(iVar4 + iVar3) & 0xfff0ffff;
  }
  return puVar9;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100539e8(int param_1,short param_2,short param_3) { }


































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10054824() { }










































































































































































































































































/* Address: 0x10057334 Size: 276 bytes */
void FUN_10057334()

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long long uVar4;
  int iVar5;
  
  piVar3 = piRam10117358;
  piVar2 = piRam10117354;
  piVar1 = *(int **)(*(int *)(*piRam1011734c + 0x88) + 0x148);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  uVar4 = FUN_10052184(0x4d415020,10000,1);
  if (*piVar3 == 0) {
    iVar5 = FUN_100f1640(0x8880);
    *piVar3 = iVar5;
  }
  FUN_10052490(uVar4,*piVar3,0x8880);
  FUN_100523a8(uVar4,1);
  uVar4 = FUN_10052184(0x52442020,10000,1);
  if (*piVar2 == 0) {
    iVar5 = FUN_100f1640(0x4440);
    *piVar2 = iVar5;
  }
  FUN_10052490(uVar4,*piVar2,0x4440);
  FUN_100523a8(uVar4,1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10057448(short param_1) { return 0; }









































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1005bbe8() { }




























































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10060078(int *param_1,short param_2) { }





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100632a0(short param_1,short param_2,short param_3) { }























































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1007d168(int *param_1,long long param_2) { }




























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x1007ded4 Size: 1076 bytes */
void FUN_1007ded4(int param_1,int *param_2,char param_3)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *puVar7;
  int iVar10;
  int *puVar11;
  int uVar12;
  long long uVar8;
  long long lVar9;
  short sVar13;
  char uVar14;
  char auStack_158 [256];
  short local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_3c;
  char local_38;
  
  puVar7 = puRam10117370;
  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  piVar3 = piRam10117354;
  piVar2 = piRam1011734c;
  FUN_100ddfa8(param_1,param_2,param_3);
  *(char *)(param_1 + 0x144) = 1;
  if (*piVar5 == 0) {
    iVar10 = FUN_100f1640(0x2fcc);
    *piVar5 = iVar10;
  }
  if (*piVar4 == 0) {
    iVar10 = FUN_100f1640(0x8880);
    *piVar4 = iVar10;
  }
  if (*piVar6 == 0) {
    iVar10 = FUN_100f1640(22000);
    *piVar6 = iVar10;
  }
  if (*piVar3 == 0) {
    iVar10 = FUN_100f1640(0x4440);
    *piVar3 = iVar10;
  }
  bVar1 = false;
  uVar14 = 1;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    puVar11 = (int *)FUN_10003558(0x54797065,1000);
    if (puVar11 != (int *)0x0) {
      if (1 < *(short *)*puVar11) {
        FUN_100d8c9c(0x3fc,0);
        FUN_100db158(0,0x820000);
      }
      FUN_10001c98(puVar11);
    }
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
    puVar11 = (int *)FUN_10003558(0x5475726e,1000);
    if (puVar11 != (int *)0x0) {
      iVar10 = FUN_10001c20(puVar11);
      if ((iVar10 != 0) && (*(char *)*puVar11 == '\x01')) {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar10 = *piVar2;
        *(char *)(iVar10 + 0x9a) = 1;
        uVar12 = FUN_10001a88();
        *(int *)(iVar10 + 0x9c) = uVar12;
      }
      FUN_10001c98(puVar11);
      uVar14 = 0;
    }
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
    local_58 = 0;
    local_54 = 0;
    local_4c = 0;
    local_48 = 0;
    local_50 = *puVar7;
    *puVar7 = auStack_158;
    iVar10 = FUN_10000090(auStack_158);
    if (iVar10 == 0) {
      iVar10 = 0;
      do {
        puVar11 = (int *)FUN_10003558(0x4d61696c,(short)iVar10 + 1000);
        if (puVar11 != (int *)0x0) {
          uVar8 = FUN_10001c20(puVar11);
          uVar12 = FUN_100f1640();
          local_3c = puVar11;
          local_38 = FUN_10000360(puVar11);
          FUN_10002598(local_3c);
          FUN_10002340(*puVar11,uVar12,uVar8);
          *(int *)(param_1 + iVar10 * 4 + 0x170) = uVar12;
          *(char *)(param_1 + 0x16e) = 1;
          *(char *)(param_1 + 0x16f) = uVar14;
          if (((char*)0) != (char *)0x3c) {
            FUN_10001b60(local_3c,local_38);
          }
          if (puVar11 != (int *)0x0) {
            FUN_10001c98(puVar11);
          }
        }
        sVar13 = (short)iVar10 + 1;
        iVar10 = (int)sVar13;
      } while (sVar13 < 8);
      lVar9 = FUN_10003558(0x4d4b696b,1000);
      *(int *)(param_1 + 0x16f) = lVar9 != 0;
      if ((int)lVar9 != 0) {
        FUN_10001c98(lVar9);
      }
      *puVar7 = local_50;
    }
    else {
      FUN_100ef580(0);
      FUN_100db158(local_58,local_54);
    }
  }
  FUN_10029ac0(param_2,0,*(char *)(param_1 + 0x16c),!bVar1);
  iVar10 = *piVar5;
  if ((*(short *)(iVar10 + 0x124) == 0) && (*(char *)(*piVar2 + 0x9a) == '\0')) {
    FUN_1000848c(*(short *)(iVar10 + 0x17e),*(short *)(iVar10 + 0x180));
  }
  if (bVar1) {
    FUN_100657bc();
  }
  else if ((*(char *)(param_1 + 0x16e) != '\0') &&
          (iVar10 = *piVar2, *(char *)(iVar10 + 0x9a) != '\0')) {
    *(char *)(iVar10 + 0x9a) = 1;
    uVar12 = FUN_10001a88();
    *(int *)(iVar10 + 0x9c) = uVar12;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1007e314(int param_1) { }































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1007e894(int param_1,int *param_2,char param_3) { }

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100a6708 Size: 216 bytes */
void FUN_100a6708()

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = piRam101175f4;
  piVar3 = piRam101175f0;
  piVar2 = piRam1011735c;
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      iVar1 = *piVar3 + iVar7 * 0x70 + iVar6;
      if (((*(char *)(iVar1 + 0x34a) == '\n') && (*(char *)(iVar1 + 0x2da) != '\n')) &&
         (*(char *)(iVar1 + 0x349) != '\n')) {
        *(short *)(*piVar4 + 0xa84) = *(short *)(*piVar4 + 0xa84) + 1;
        *(short *)(*piVar2 + *(short *)(*piVar2 + 0x1602) * 0x42 + 0x1604) = (short)iVar6;
        *(short *)(*piVar2 + *(short *)(*piVar2 + 0x1602) * 0x42 + 0x1606) = (short)iVar7;
        *(short *)(*piVar2 + 0x1602) = *(short *)(*piVar2 + 0x1602) + 1;
      }
      sVar5 = (short)iVar7 + 1;
      iVar7 = (int)sVar5;
    } while (sVar5 < 0x9c);
    sVar5 = (short)iVar6 + 1;
    iVar6 = (int)sVar5;
  } while (sVar5 < 0x70);
  return;
}

/* Address: 0x100a9d34 Size: 580 bytes */
int FUN_100a9d34(int param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = piRam1011735c;
  if ((*(short *)(param_1 + 400) == -1) && (sVar7 = param_2, param_2 != 0)) {
    do {
      sVar7 = sVar7 + -1;
      iVar9 = (int)sVar7;
      sVar1 = *(short *)(*piVar3 + 0x1602);
      iVar2 = 10000;
      while (sVar1 != 0) {
        sVar1 = sVar1 + -1;
        iVar4 = *piVar3 + sVar1 * 0x42;
        iVar4 = FUN_1000a884(*(short *)(param_1 + iVar9 * 2),
                             *(short *)(param_1 + iVar9 * 2 + 100),
                             *(short *)(iVar4 + 0x1604),*(short *)(iVar4 + 0x1606));
        if (iVar4 < iVar2) {
          iVar2 = iVar4;
        }
      }
      *(short *)(param_1 + iVar9 * 2 + 400) = (short)iVar2;
    } while (iVar9 != 0);
  }
  sVar7 = param_2;
  iVar2 = -1;
  sVar1 = -1;
  if (param_2 != 0) {
    do {
      sVar7 = sVar7 + -1;
      iVar4 = (int)sVar7;
      iVar9 = 10000;
      if (*(short *)(param_1 + iVar4 * 2 + 300) == 0) {
        sVar6 = param_2;
        if (param_2 != 0) {
          do {
            sVar6 = sVar6 + -1;
            iVar8 = sVar6 * 2;
            iVar5 = param_1 + iVar8;
            if (*(short *)(iVar5 + 300) != 0) {
              iVar5 = FUN_1000a884(*(short *)(param_1 + iVar4 * 2),
                                   *(short *)(param_1 + iVar4 * 2 + 100),
                                   *(short *)(param_1 + iVar8),*(short *)(iVar5 + 100));
              if (iVar5 < iVar9) {
                iVar9 = iVar5;
              }
            }
          } while (sVar6 != 0);
        }
        *(short *)(param_1 + iVar4 * 2 + 500) = (short)iVar9;
      }
    } while (iVar4 != 0);
  }
  while (param_2 != 0) {
    param_2 = param_2 + -1;
    iVar9 = param_1 + param_2 * 2;
    if ((*(short *)(iVar9 + 300) == 0) && (9 < *(short *)(iVar9 + 500))) {
      sVar7 = 0x1e - *(short *)(iVar9 + 400);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      sVar6 = FUN_1005f230(1,0xf,1);
      if (sVar1 < (short)(sVar7 + sVar6)) {
        iVar2 = (int)param_2;
        sVar1 = sVar7 + sVar6;
      }
    }
  }
  return iVar2;
}

/* Address: 0x100a9f78 Size: 972 bytes */
void FUN_100a9f78(int param_1)

{
  int bVar1;
  int iVar2;
  unsigned int uVar3;
  int bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  unsigned long long uVar11;
  short sVar12;
  unsigned long long uVar13;
  short sVar14;
  
  piVar8 = piRam101175f0;
  piVar7 = piRam10117358;
  piVar6 = piRam10117354;
  iVar10 = 0;
  uVar11 = 1;
  do {
    uVar13 = 1;
    do {
      uVar3 = *(unsigned int *)(*piVar7 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                       (int)((uVar13 & 0xffffffff) << 1)) >> 0x18;
      sVar14 = (short)uVar13;
      sVar12 = (short)uVar11;
      if ((((uVar3 == 0x26) || (uVar3 == 0x16)) &&
          ((uVar3 = *(unsigned int *)(*piVar7 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5
                                             ) + (int)((uVar13 & 0xffffffff) << 1) + 2) >> 0x18,
           uVar3 == 0x28 || (uVar3 == 0x18)))) ||
         (((uVar3 = *(unsigned int *)(*piVar7 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5
                                             ) + (int)((uVar13 & 0xffffffff) << 1)) >> 0x18,
           uVar3 == 0x21 || (uVar3 == 0x11)) &&
          ((uVar3 = *(unsigned int *)((int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                              *piVar7 + (int)((uVar13 & 0xffffffff) << 1) + 0xe0) >> 0x18,
           uVar3 == 0x24 || (uVar3 == 0x14)))))) {
        bVar4 = false;
        bVar1 = *(unsigned int *)(*piVar7 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                         (int)((uVar13 & 0xffffffff) << 1)) >> 0x18 == 0x26;
        if (bVar1) {
          iVar9 = FUN_100a9ce0(sVar14 + -1,uVar11);
          if ((iVar9 == 0) || (iVar9 = FUN_100a9ce0(sVar14 + 2,uVar11), iVar9 == 0)) {
            iVar9 = FUN_100a9ce0(uVar13,sVar12 + -1);
            if ((iVar9 != 0) && (iVar9 = FUN_100a9ce0(uVar13,sVar12 + 2), iVar9 != 0)) {
              bVar4 = true;
            }
          }
          else {
            bVar4 = true;
          }
        }
        if ((bVar4) && (iVar10 < 0x32)) {
          *(short *)(param_1 + iVar10 * 2) = sVar14;
          iVar9 = param_1 + iVar10 * 2;
          *(short *)(iVar9 + 100) = sVar12;
          *(unsigned short *)(iVar9 + 200) = (unsigned short)bVar1;
          iVar10 = (int)(short)((short)iVar10 + 1);
        }
      }
      uVar13 = (unsigned long long)(short)(sVar14 + 1);
    } while ((short)(sVar14 + 1) < 0x6e);
    uVar11 = (unsigned long long)(short)(sVar12 + 1);
  } while ((short)(sVar12 + 1) < 0x9a);
  if (iVar10 != 0) {
    iVar9 = FUN_100a9d34(param_1,iVar10);
    while (iVar9 != -1) {
      iVar2 = param_1 + iVar9 * 2;
      *(short *)(iVar2 + 300) = 1;
      sVar12 = *(short *)(param_1 + iVar9 * 2);
      uVar11 = (unsigned long long)*(short *)(iVar2 + 100);
      if (*(short *)(iVar2 + 200) == 0) {
        iVar5 = (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0x7ffffff) << 5);
        iVar9 = *piVar7 + iVar5;
        iVar2 = (int)(((long long)sVar12 & 0x7fffffffU) << 1);
        *(unsigned int *)(iVar9 + iVar2) = *(unsigned int *)(iVar9 + iVar2) & 0xffffff | 0x84000000;
        iVar2 = iVar5 + *piVar7 + iVar2;
        *(unsigned int *)(iVar2 + 0xe0) = *(unsigned int *)(iVar2 + 0xe0) & 0xffffff | 0x94000000;
        iVar9 = (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xfffffff) << 4);
        *(char *)(iVar9 + *piVar8 + (int)sVar12 + 0x3ba) = 1;
        iVar2 = iVar9 + *piVar8 + (int)sVar12;
        *(char *)(iVar2 + 0x34a) = *(char *)(iVar2 + 0x3ba);
        iVar2 = iVar9 + *piVar6 + (int)sVar12;
        *(unsigned int *)(iVar2 + 0xe0) = *(unsigned int *)(iVar2 + 0xe0) & 0xe0ffffff | 0x1000000;
        iVar9 = iVar9 + *piVar6 + (int)sVar12;
        *(unsigned int *)(iVar9 + -0x70) = *(unsigned int *)(iVar9 + -0x70) & 0xe0ffffff | 0x1000000;
      }
      else {
        iVar5 = (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0x7ffffff) << 5);
        iVar9 = *piVar7 + iVar5;
        iVar2 = (int)(((long long)sVar12 & 0x7fffffffU) << 1);
        *(unsigned int *)(iVar9 + iVar2) = *(unsigned int *)(iVar9 + iVar2) & 0xffffff | 0x85000000;
        iVar2 = iVar5 + *piVar7 + iVar2;
        *(unsigned int *)(iVar2 + 2) = *(unsigned int *)(iVar2 + 2) & 0xffffff | 0x86000000;
        iVar9 = (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xfffffff) << 4);
        *(char *)(*piVar8 + iVar9 + (int)sVar12 + 0x34b) = 1;
        iVar2 = iVar9 + *piVar8 + (int)sVar12;
        *(char *)(iVar2 + 0x34a) = *(char *)(iVar2 + 0x34b);
        *(unsigned int *)(iVar9 + *piVar6 + (int)(short)(sVar12 + 2)) =
             *(unsigned int *)(iVar9 + *piVar6 + (int)(short)(sVar12 + 2)) & 0xe0ffffff | 0x1000000;
        *(unsigned int *)(iVar9 + *piVar6 + (int)(short)(sVar12 + -1)) =
             *(unsigned int *)(iVar9 + *piVar6 + (int)(short)(sVar12 + -1)) & 0xe0ffffff | 0x1000000;
      }
      iVar9 = FUN_100a9d34(param_1,iVar10);
    }
  }
  return;
}




/* Address: 0x100eb91c Size: 308 bytes */
void FUN_100eb91c(int param_1,int *param_2,long long param_3,long long param_4,char param_5)

{
  int *piVar1;
  long long uVar2;
  long long lVar3;
  int iVar4;
  int uVar5;
  int local_3c;
  
  piVar1 = piRam10117370;
  *(int *)(param_1 + 0x130) = param_1;
  *(int *)(param_1 + 300) = param_1;
  *(int *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 4) = 0;
  *(char *)(param_1 + 0x14) = param_5;
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 != (int *)0x0) {
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    lVar3 = FUN_100f0334(0,param_4,uVar2);
    *(int *)(param_1 + 0xc) = (int)lVar3;
    iVar4 = FUN_100f0334(1,param_3,lVar3 + 1);
    *(int *)(param_1 + 8) = iVar4;
    if (*(int *)(param_1 + 0xc) < iVar4) {
      *(int *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xc) = 0;
    }
    if (param_5 == '\0') {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0xc);
    }
    else {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 8);
    }
    uVar5 = FUN_100eb8b0(param_1,*(int *)(*(int *)(param_1 + 0x10) + 4));
    *(int *)(*(int *)(param_1 + 0x10) + 4) = uVar5;
    *(short *)(param_1 + 0x118) = 0;
    *(int *)(param_1 + 0x11c) = 0;
    *(int *)(param_1 + 0x120) = 0;
    *(int *)(param_1 + 0x124) = 0;
    *(int *)(param_1 + 0x128) = 0;
    uVar5 = *(int *)(local_3c + -0x824);
    *(int *)(param_1 + 0x120) = *piVar1;
    *piVar1 = param_1 + 0x18;
    *(int *)(param_1 + 0x124) = uVar5;
    *(int *)(param_1 + 0x128) = param_1;
  }
  return;
}




/* Address: stubbed - had compile errors on 64-bit */
void FUN_10114e58() { }






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* === Recovered from stubs.c === */

/* Address: 0x1002770c Size: 16 bytes */
char FUN_1002770c()

{
  return *(char *)(*piRam1011734c + 0x1a4);
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003c368() { }








































































































































































/* Address: 0x1003c838 Size: 256 bytes */
void FUN_1003c838()

{
  short uVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  piVar2 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x122) == 0) {
    iVar5 = 0;
    do {
      *(short *)(*piVar2 + iVar5 * 2 + 0x164) = (short)iVar5;
      sVar4 = (short)iVar5 + 1;
      iVar5 = (int)sVar4;
    } while (sVar4 < 8);
  }
  else {
    iVar5 = 0;
    do {
      *(short *)(*piVar2 + iVar5 * 2 + 0x164) = (short)iVar5;
      sVar4 = (short)iVar5 + 1;
      iVar5 = (int)sVar4;
    } while (sVar4 < 8);
    sVar4 = 0;
    do {
      iVar3 = FUN_1005f230(1,8,0xffffffffffffffff);
      iVar5 = FUN_1005f230(1,8,0xffffffffffffffff);
      iVar5 = *piVar2 + iVar5 * 2;
      uVar1 = *(short *)(iVar5 + 0x164);
      *(short *)(iVar5 + 0x164) = *(short *)(*piVar2 + iVar3 * 2 + 0x164);
      *(short *)(iVar3 * 2 + *piVar2 + 0x164) = uVar1;
      sVar4 = sVar4 + 1;
    } while (sVar4 < 0x14);
  }
  *(short *)(*piVar2 + 0x174) = 0;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10064850(short param_1,short param_2) { }














































































































































































































































