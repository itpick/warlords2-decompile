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
/* Forward declarations */
void FUN_10000048(void);
void FUN_100002a0(void);
void FUN_10000300(void);
void FUN_10000318(void);
void FUN_10000390(void);
void FUN_100004e0(void);
void FUN_100006d8(void);
void FUN_100006f0(void);
void FUN_100008d0(void);
void FUN_10000900(void);
void FUN_100012f0(void);
void FUN_100013b0(void);
void FUN_100013c8(void);
void FUN_100013e0(void);
void FUN_100013f8(void);
void FUN_10001410(void);
void FUN_10001428(void);
void FUN_10001440(void);
void FUN_10001458(void);
void FUN_10001470(void);
void FUN_10001488(void);
void FUN_100014b8(void);
void FUN_100014d0(void);
void FUN_10001590(void);
void FUN_100015a8(void);
void FUN_10001638(void);
void FUN_10001680(void);
void FUN_100016b0(void);
void FUN_10001758(void);
void FUN_100018f0(void);
void FUN_10001908(void);
void FUN_10001920(void);
void FUN_100019f8(void);
void FUN_10001bd8(void);
void FUN_10001dd0(void);
void FUN_10001e78(void);
void FUN_10001f50(void);
void FUN_10001f98(void);
void FUN_100020d0(void);
void FUN_10002100(void);
void FUN_10002148(void);
void FUN_10002178(void);
void FUN_10002238(void);
void FUN_10002340(void);
void FUN_10002568(void);
void FUN_100026b8(void);
void FUN_10002970(void);
void FUN_10002a60(void);
void FUN_10002ce8(void);
void FUN_10002d00(void);
void FUN_10003228(void);
void FUN_100032e8(void);
void FUN_100035a0(void);
void FUN_100035b8(void);
void FUN_10003660(void);
void FUN_10003678(void);
void FUN_10005b68(void);
void FUN_10007c50(void);
void FUN_100099cc(void);
int FUN_10009a98(void);
void FUN_10009b00(void);
void FUN_10009fa8(long long param_1,short param_2,short param_3,short param_4);
void FUN_1000a008(int param_1,short param_2);
void FUN_1000a714(int param_1,short param_2,short param_3,short param_4,short param_5);
void FUN_1000a7cc(int param_1,short param_2,short param_3,short param_4,short param_5);
void FUN_1000c67c(void);
int FUN_1000d910(short param_1);
long long FUN_1000f6a0(short param_1);
long long FUN_1000f708(short param_1,short param_2);
short FUN_10015980(short param_1);
long long FUN_100184dc(short param_1,short param_2,short param_3,short param_4);
void FUN_1001aea0(void);
void FUN_1001e330(long long param_1);
void FUN_1001e3ec(long long param_1);
void FUN_1001f5e8(short param_1,short param_2);
long long FUN_1001f648(short param_1,short *param_2);
long long FUN_10020f94(short param_1);
void FUN_10021200(int param_1,char param_2);
void FUN_1002269c(short *param_1,short param_2,short param_3);
void FUN_10025598(void);
void FUN_1002565c(void);
void FUN_10025f94(void);
void FUN_10026310(void);
void FUN_10026568(void);
void FUN_10029dcc(int *param_1,long long param_2);
void FUN_10030454(long long param_1);
void FUN_10031f54(long long param_1);
void FUN_10031fc4(void);
void FUN_10032860(short param_1,short param_2,long long param_3,short param_4);
void FUN_10037fc4(void);
long long FUN_1003865c(int param_1,short *param_2);
void FUN_10038c60(void);
void FUN_1003a230(int *param_1);
void FUN_1003a5f8(void);
void FUN_1003aeb0(unsigned short param_1);
void FUN_1003c938(long long param_1);
void FUN_1003cac4(long long param_1,short param_2);
void FUN_1003ced4(long long param_1,long long param_2);
void FUN_1003d5d4(void);
void FUN_1003d6c4(void);
void FUN_1003e13c(long long param_1,short param_2);
void FUN_1003f674(short param_1,short param_2,short param_3);
void FUN_1004039c(short param_1);
void FUN_10040408(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5,long long param_6,long long param_7);
void FUN_100423a0(short param_1);
void FUN_1004248c(void);
void FUN_100424e4(void);
int FUN_100425c0(short param_1,short param_2,short param_3);
long long FUN_100426b4(short *param_1,short param_2);
long long FUN_100427cc(long long param_1,short param_2);
short FUN_10043248(short *param_1,short param_2);
void FUN_100439a4(short *param_1);
void FUN_10043c84(short param_1,short *param_2,short param_3);
long long FUN_10043e60(short *param_1);
unsigned char FUN_100445fc(int param_1,short param_2,short param_3,short param_4,short *param_5);
short FUN_10044728(short *param_1,short param_2,int param_3);
void FUN_10045170(void);
void FUN_100451f4(short param_1);
void FUN_1004530c(short param_1);
void FUN_100462c8(short param_1);
void FUN_10049e68(void);
int FUN_1004a0c4(short param_1,short *param_2,short *param_3,short *param_4,
                short *param_5,short *param_6);
void FUN_1004a178(short param_1,short *param_2,short *param_3,short *param_4,
                 short *param_5);
int FUN_1004a21c(short param_1);
void FUN_1004f620(short param_1,short param_2);
void FUN_10050bb0(int param_1);
void FUN_100513b4(long long param_1,long long param_2,short param_3);
void FUN_100514d8(int *param_1,short param_2);
void FUN_100516c0(void);
void FUN_10051d60(void);
void FUN_10051d64(void);
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
void FUN_1005cc8c(void);
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
void FUN_10067270(void);
void FUN_10075ee0(int param_1,short param_2,short param_3);
void FUN_1007ec7c(int param_1,long long param_2);
void FUN_1007ed14(int param_1,long long param_2);
void FUN_1007edac(int param_1,long long param_2);
void FUN_1007f0a4(int param_1,short param_2);
void FUN_10082260(int *param_1);
void FUN_10082f24(int *param_1,short param_2,short param_3);
int * FUN_10084ef0(int *param_1);
void FUN_10090e0c(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_10091334(void);
void FUN_10091338(short param_1,short param_2);
void FUN_100913cc(void);
void FUN_1009142c(void);
int * FUN_10091488(int *param_1);
void FUN_1009150c(int *param_1,unsigned long long param_2);
void FUN_100917d8(int *param_1,short param_2,char param_3);
void FUN_1009191c(int param_1,short param_2);
short FUN_100919c0(int param_1);
void FUN_10091b18(void);
char FUN_10091b80(void);
void FUN_10091c04(short param_1);
void FUN_10091ca4(short param_1,short param_2);
short FUN_10091de0(long long param_1);
unsigned long long FUN_10091ef0(void);
void FUN_10091f40(void);
void FUN_10091fd4(void);
void FUN_10092080(long long param_1,long long param_2);
void FUN_100923a4(long long param_1,char param_2);
void FUN_100929a0(void);
void FUN_10092a58(short param_1);
void FUN_10092aa4(void);
void FUN_10092ae0(void);
void FUN_10092b10(short param_1);
void FUN_10092be0(void);
void FUN_10093928(void);
void FUN_10093984(void);
void FUN_100939e0(void);
void FUN_10093a5c(void);
int FUN_100981f8(int param_1,short param_2);
void FUN_100982e8(int param_1,unsigned long long param_2);
int FUN_10098320(int param_1,long long param_2,short param_3);
short FUN_1009eb70(int param_1,int param_2);
void FUN_1009eef8(short param_1);
void FUN_1009f864(void);
long long FUN_1009fad4(short param_1,short param_2);
void FUN_1009fc58(void);
long long FUN_1009ff14(short param_1,short param_2);
long long FUN_1009ffa4(short param_1,short param_2,short param_3);
void FUN_100a0038(void);
void FUN_100a018c(short param_1);
void FUN_100a01e8(void);
void FUN_100a1d8c(void);
short FUN_100a1e28(void);
void FUN_100a1e50(void);
void FUN_100a2310(void);
void FUN_100a271c(void);
void FUN_100a2760(void);
void FUN_100a28dc(void);
void FUN_100a2a58(void);
void FUN_100a3280(int param_1,int param_2);
void FUN_100a32b8(int param_1,int param_2);
void FUN_100a33ac(void);
void FUN_100a35cc(void);
void FUN_100a39ac(void);
void FUN_100a3a80(void);
void FUN_100a49cc(void);
void FUN_100a6204(void);
void FUN_100a6364(short param_1,short param_2);
void FUN_100a64c0(void);
void FUN_100a66a8(void);
void FUN_100a6f38(void);
void FUN_100a9628(void);
void FUN_100a9c08(void);
void FUN_100ab22c(void);
void FUN_100ab334(void);
void FUN_100ab9e4(void);
void FUN_100abb68(void);
void FUN_100abcec(void);
void FUN_100afb5c(int param_1,unsigned long long param_2,unsigned long long param_3);
unsigned long long FUN_100b02d0(unsigned long long param_1);
void FUN_100b0578(void);
long long FUN_100b057c(long long param_1,char param_2);
void FUN_100b06d4(short *param_1,short *param_2);
void FUN_100b08d4(int *param_1,short *param_2);
char * FUN_100b0960(int param_1,long long param_2);
void FUN_100b0a18(int param_1,char *param_2);
int FUN_100b1058(int param_1,long long param_2,long long param_3,short param_4);
int FUN_100b1134(int param_1,int param_2,long long param_3,long long param_4,
                short param_5);
void FUN_100b1210(void);
unsigned int FUN_100b1b90(unsigned char *param_1,long long param_2,unsigned int param_3);
void FUN_100b1c84(void);
void FUN_100b1c88(long long param_1,short param_2,short param_3);
char * FUN_100b1d90(char *param_1,long long param_2);
void FUN_100b1ed0(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3);
long long FUN_100b226c(short *param_1,short *param_2);
void FUN_100b2e74(void);
void FUN_100b4c68(void);
int * FUN_100beb7c(int *param_1);
void FUN_100becb8(void);
void FUN_100c0f10(void);
int FUN_100c2120(long long param_1);
int FUN_100c43ec(void);
int * FUN_100c43fc(int *param_1);
int * FUN_100c604c(int *param_1);
int * FUN_100c7d84(int *param_1);
int FUN_100c9950(void);
int * FUN_100c9960(int *param_1);
int FUN_100ca068(void);
int * FUN_100ca078(int *param_1);
int * FUN_100d7adc(int *param_1);
void FUN_100d7ba0(int *param_1,long long param_2,short param_3);
void FUN_100da260(int *param_1,long long param_2);
void FUN_100db1ec(void);
void FUN_100e1674(int *param_1,int *param_2);
int FUN_100e8cdc(void);
int * FUN_100e8cec(int *param_1);
int * FUN_100e90bc(int *param_1);
int FUN_100e9e78(void);
void FUN_100ebbe0(int param_1);
void FUN_100ec5c8(int param_1,long long param_2);
void FUN_100ecf88(short *param_1);
unsigned long long FUN_100ef2f8(void);
void FUN_100f06dc(short param_1,short *param_2);
void FUN_100f0d3c(int param_1,char param_2);
int FUN_100f1264(void);
long long FUN_100f2214(short param_1);
void FUN_100f25e0(long long param_1,long long param_2,long long param_3);
void FUN_100f2a54(void);
void FUN_100f56c0(void);
void FUN_100f5814(void);
int * FUN_100fb260(int *param_1);
void FUN_100fb300(int *param_1,long long param_2,short param_3);
int FUN_1010597c(void);
int FUN_1010d6a8(void);
int * FUN_1010d6b8(int *param_1);
int FUN_1010f044(void);
int * FUN_1010f054(int *param_1);
long long FUN_10115d3c(int param_1);
unsigned long long FUN_10115e4c(int param_1,unsigned int param_2);
unsigned long long FUN_10116338(unsigned long long param_1);
long long FUN_10116e14(short *param_1);
int * FUN_10117024(int *param_1,int *param_2);
int * FUN_101171bc(int *param_1,int *param_2);

/* Address: 0x10000048 Size: 24 bytes */
void FUN_10000048(void)

{

  ((void (*)())*puRam10115544)();
  return;
}

/* FUN_10000270 defined elsewhere */


/* FUN_10000288 defined elsewhere */


/* Address: 0x100002a0 Size: 24 bytes */
void FUN_100002a0(void)

{

  ((void (*)())*puRam10115874)();
  return;
}

/* Address: 0x10000300 Size: 24 bytes */
void FUN_10000300(void)

{

  ((void (*)())*puRam101153e8)();
  return;
}

/* Address: 0x10000318 Size: 24 bytes */
void FUN_10000318(void)

{

  ((void (*)())*puRam1011581c)();
  return;
}

/* Address: 0x10000390 Size: 24 bytes */
void FUN_10000390(void)

{

  ((void (*)())*puRam10115378)();
  return;
}

/* Address: 0x100004e0 Size: 24 bytes */
void FUN_100004e0(void)

{

  ((void (*)())*puRam1011556c)();
  return;
}

/* Address: 0x100006d8 Size: 24 bytes */
void FUN_100006d8(void)

{

  ((void (*)())*puRam10115380)();
  return;
}

/* Address: 0x100006f0 Size: 24 bytes */
void FUN_100006f0(void)

{

  ((void (*)())*puRam10115800)();
  return;
}

/* FUN_10000708 defined elsewhere */


/* FUN_10000870 defined elsewhere */


/* FUN_10000888 defined elsewhere */


/* Address: 0x100008d0 Size: 24 bytes */
void FUN_100008d0(void)

{

  ((void (*)())*puRam10115754)();
  return;
}

/* Address: 0x10000900 Size: 24 bytes */
void FUN_10000900(void)

{

  ((void (*)())*puRam101158d8)();
  return;
}

/* FUN_10000b70 defined elsewhere */


/* FUN_10001290 defined elsewhere */


/* Address: 0x100012f0 Size: 24 bytes */
void FUN_100012f0(void)

{

  ((void (*)())*puRam10115758)();
  return;
}

/* Address: 0x100013b0 Size: 24 bytes */
void FUN_100013b0(void)

{

  ((void (*)())*puRam1011565c)();
  return;
}

/* Address: 0x100013c8 Size: 24 bytes */
void FUN_100013c8(void)

{

  ((void (*)())*puRam10115504)();
  return;
}

/* Address: 0x100013e0 Size: 24 bytes */
void FUN_100013e0(void)

{

  ((void (*)())*puRam101159a0)();
  return;
}

/* Address: 0x100013f8 Size: 24 bytes */
void FUN_100013f8(void)

{

  ((void (*)())*puRam10115b04)();
  return;
}

/* Address: 0x10001410 Size: 24 bytes */
void FUN_10001410(void)

{

  ((void (*)())*puRam10115a30)();
  return;
}

/* Address: 0x10001428 Size: 24 bytes */
void FUN_10001428(void)

{

  ((void (*)())*puRam10115584)();
  return;
}

/* Address: 0x10001440 Size: 24 bytes */
void FUN_10001440(void)

{

  ((void (*)())*puRam101158ec)();
  return;
}

/* Address: 0x10001458 Size: 24 bytes */
void FUN_10001458(void)

{

  ((void (*)())*puRam10115480)();
  return;
}

/* Address: 0x10001470 Size: 24 bytes */
void FUN_10001470(void)

{

  ((void (*)())*puRam10115998)();
  return;
}

/* Address: 0x10001488 Size: 24 bytes */
void FUN_10001488(void)

{

  ((void (*)())*puRam10115688)();
  return;
}

/* Address: 0x100014b8 Size: 24 bytes */
void FUN_100014b8(void)

{

  ((void (*)())*puRam10115814)();
  return;
}

/* Address: 0x100014d0 Size: 24 bytes */
void FUN_100014d0(void)

{

  ((void (*)())*puRam101154a0)();
  return;
}

/* Address: 0x10001590 Size: 24 bytes */
void FUN_10001590(void)

{

  ((void (*)())*puRam10115af0)();
  return;
}

/* Address: 0x100015a8 Size: 24 bytes */
void FUN_100015a8(void)

{

  ((void (*)())*puRam10115574)();
  return;
}

/* Address: 0x10001638 Size: 24 bytes */
void FUN_10001638(void)

{

  ((void (*)())*puRam101158dc)();
  return;
}

/* Address: 0x10001680 Size: 24 bytes */
void FUN_10001680(void)

{

  ((void (*)())*puRam10115a10)();
  return;
}

/* Address: 0x100016b0 Size: 24 bytes */
void FUN_100016b0(void)

{

  ((void (*)())*puRam10115b70)();
  return;
}

/* Address: 0x10001758 Size: 24 bytes */
void FUN_10001758(void)

{

  ((void (*)())*puRam10115858)();
  return;
}

/* Address: 0x100018f0 Size: 24 bytes */
void FUN_100018f0(void)

{

  ((void (*)())*puRam10115390)();
  return;
}

/* Address: 0x10001908 Size: 24 bytes */
void FUN_10001908(void)

{

  ((void (*)())*puRam10115b10)();
  return;
}

/* Address: 0x10001920 Size: 24 bytes */
void FUN_10001920(void)

{

  ((void (*)())*puRam10115308)();
  return;
}

/* FUN_100019c8 defined elsewhere */


/* Address: 0x100019f8 Size: 24 bytes */
void FUN_100019f8(void)

{

  ((void (*)())*puRam101156fc)();
  return;
}

/* FUN_10001a70 defined elsewhere */


/* FUN_10001b18 defined elsewhere */


/* Address: 0x10001bd8 Size: 24 bytes */
void FUN_10001bd8(void)

{

  ((void (*)())*puRam1011561c)();
  return;
}

/* Address: 0x10001dd0 Size: 24 bytes */
void FUN_10001dd0(void)

{

  ((void (*)())*puRam10115314)();
  return;
}

/* Address: 0x10001e78 Size: 24 bytes */
void FUN_10001e78(void)

{

  ((void (*)())*puRam10115330)();
  return;
}

/* Address: 0x10001f50 Size: 24 bytes */
void FUN_10001f50(void)

{

  ((void (*)())*puRam10115540)();
  return;
}

/* Address: 0x10001f98 Size: 24 bytes */
void FUN_10001f98(void)

{

  ((void (*)())*puRam10115b24)();
  return;
}

/* Address: 0x100020d0 Size: 24 bytes */
void FUN_100020d0(void)

{

  ((void (*)())*puRam1011540c)();
  return;
}

/* Address: 0x10002100 Size: 24 bytes */
void FUN_10002100(void)

{

  ((void (*)())*puRam101152c4)();
  return;
}

/* Address: 0x10002148 Size: 24 bytes */
void FUN_10002148(void)

{

  ((void (*)())*puRam101156d0)();
  return;
}

/* Address: 0x10002178 Size: 24 bytes */
void FUN_10002178(void)

{

  ((void (*)())*puRam101158d0)();
  return;
}

/* Address: 0x10002238 Size: 24 bytes */
void FUN_10002238(void)

{

  ((void (*)())*puRam1011583c)();
  return;
}

/* Address: 0x10002340 Size: 24 bytes */
void FUN_10002340(void)

{

  ((void (*)())*puRam10115b78)();
  return;
}

/* FUN_100023b8 defined elsewhere */


/* Address: 0x10002568 Size: 24 bytes */
void FUN_10002568(void)

{

  ((void (*)())*puRam1011585c)();
  return;
}

/* Address: 0x100026b8 Size: 24 bytes */
void FUN_100026b8(void)

{

  ((void (*)())*puRam101152d4)();
  return;
}

/* Address: 0x10002970 Size: 24 bytes */
void FUN_10002970(void)

{

  ((void (*)())*puRam10115b4c)();
  return;
}

/* Address: 0x10002a60 Size: 24 bytes */
void FUN_10002a60(void)

{

  ((void (*)())*puRam10115ad8)();
  return;
}

/* FUN_10002ad8 defined elsewhere */


/* FUN_10002b20 defined elsewhere */


/* Address: 0x10002ce8 Size: 24 bytes */
void FUN_10002ce8(void)

{

  ((void (*)())*puRam1011584c)();
  return;
}

/* Address: 0x10002d00 Size: 24 bytes */
void FUN_10002d00(void)

{

  ((void (*)())*puRam101158d4)();
  return;
}

/* FUN_10003108 defined elsewhere */


/* Address: 0x10003228 Size: 24 bytes */
void FUN_10003228(void)

{

  ((void (*)())*puRam101152c8)();
  return;
}

/* Address: 0x100032e8 Size: 24 bytes */
void FUN_100032e8(void)

{

  ((void (*)())*puRam101152cc)();
  return;
}

/* FUN_10003468 defined elsewhere */


/* Address: 0x100035a0 Size: 24 bytes */
void FUN_100035a0(void)

{

  ((void (*)())*puRam101152dc)();
  return;
}

/* Address: 0x100035b8 Size: 24 bytes */
void FUN_100035b8(void)

{

  ((void (*)())*puRam101158e0)();
  return;
}

/* Address: 0x10003660 Size: 24 bytes */
void FUN_10003660(void)

{

  ((void (*)())*puRam1011529c)();
  return;
}

/* Address: 0x10003678 Size: 24 bytes */
void FUN_10003678(void)

{

  ((void (*)())*puRam101152d8)();
  return;
}

/* Address: 0x10005b68 Size: 452 bytes */
void FUN_10005b68(void)

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
void FUN_10007c50(void)

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
void FUN_100099cc(void)

{
  return;
}

/* Address: 0x10009a98 Size: 104 bytes */
int FUN_10009a98(void)

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
void FUN_10009b00(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1000a008(int param_1,short param_2) { }







































































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
void FUN_1000c67c(void)

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
void FUN_1001aea0(void)

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
void FUN_10025598(void)

{
  if (*puRam10115d80 < 5) {
    return;
  }
  return;
}

/* Address: 0x1002565c Size: 252 bytes */
void FUN_1002565c(void)

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
void FUN_10025f94(void)

{
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10026310(void) { }








































































































































































































































































































/* Address: 0x10026568 Size: 4 bytes */
void FUN_10026568(void)

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
void FUN_10031fc4(void)

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
void FUN_10037fc4(void)

{
  FUN_10037f68();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1003865c(int param_1,short *param_2) { return 0; }



















































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10038c60(void) { }









































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003a230(int *param_1) { }






















































































































































































































































































































































































































































































































































































/* Address: 0x1003a5f8 Size: 4 bytes */
void FUN_1003a5f8(void)

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
void FUN_1003d5d4(void)

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
void FUN_1003d6c4(void)

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
void FUN_1004248c(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100424e4(void) { }


























































































































































































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
void FUN_10045170(void)

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

































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1004530c(short param_1) { }























































































































































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
void FUN_10049e68(void)

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

/* Address: stubbed - had compile errors on 64-bit */
int FUN_1004a21c(short param_1) { return 0; }















































































































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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100514d8(int *param_1,short param_2) { }















































































































/* Address: 0x100516c0 Size: 312 bytes */
void FUN_100516c0(void)

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
void FUN_10051d60(void)

{
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10051d64(void) { }

















































































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
void FUN_1005cc8c(void)

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
void FUN_10067270(void)

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
void FUN_10091334(void)

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
void FUN_100913cc(void)

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
void FUN_1009142c(void)

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































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100917d8(int *param_1,short param_2,char param_3) { }




















































































































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
















































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091b18(void) { }
































































































/* Address: stubbed - had compile errors on 64-bit */
char FUN_10091b80(void) { return 0; }




















































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091c04(short param_1) { }








































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091ca4(short param_1,short param_2) { }































































































































































































/* Address: stubbed - had compile errors on 64-bit */
short FUN_10091de0(long long param_1) { return 0; }


















































































































































/* Address: stubbed - had compile errors on 64-bit */
unsigned long long FUN_10091ef0(void) { return 0; }









































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091f40(void) { }















































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091fd4(void) { }






























































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10092080(long long param_1,long long param_2) { }





























































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100923a4(long long param_1,char param_2) { }















































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100929a0(void) { }




























































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10092a58(short param_1) { }









































/* Address: 0x10092aa4 Size: 60 bytes */
void FUN_10092aa4(void)

{
  if (*psRam10116600 != -1) {
    FUN_10092484(*psRam10116600);
  }
  return;
}

/* Address: 0x10092ae0 Size: 48 bytes */
void FUN_10092ae0(void)

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
void FUN_10092be0(void) { }



























































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10093928(void) { }





























































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10093984(void) { }





























































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100939e0(void) { }



























































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10093a5c(void) { }






























































































































/* Address: stubbed - had compile errors on 64-bit */
int FUN_100981f8(int param_1,short param_2) { return 0; }

























































































































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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009eef8(short param_1) { }























































































































































































































































































































































































































































































/* Address: 0x1009f864 Size: 620 bytes */
void FUN_1009f864(void)

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
void FUN_1009fc58(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a0038(void) { }





























































































































































































































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
void FUN_100a01e8(void) { }

























































































































/* Address: 0x100a1d8c Size: 156 bytes */
void FUN_100a1d8c(void)

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
short FUN_100a1e28(void)

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  uVar1 = *(unsigned short *)(*piRam101175f4 + 0x1f52);
  uVar2 = *(unsigned short *)(*piRam101175f4 + 0x1f54);
  return (((short)uVar1 >> 0xf) - ((short)uVar2 >> 0xf)) + (unsigned short)(uVar2 <= uVar1);
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a1e50(void) { }















































































































































































































































































































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a2310(void) { }



















































































































































































































































































































































































































































































































































/* Address: 0x100a271c Size: 68 bytes */
void FUN_100a271c(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a2760(void) { }





















































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a28dc(void) { }





















































































































































































/* Address: 0x100a2a58 Size: 616 bytes */
void FUN_100a2a58(void)

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
void FUN_100a33ac(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a35cc(void) { }






































































































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a39ac(void) { }




























































































































































/* Address: 0x100a3a80 Size: 76 bytes */
void FUN_100a3a80(void)

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
void FUN_100a49cc(void)

{
  FUN_100a3acc();
  FUN_100a40bc();
  FUN_100a40bc();
  return;
}

/* Address: 0x100a6204 Size: 148 bytes */
void FUN_100a6204(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a6364(short param_1,short param_2) { }











































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a64c0(void) { }




















































































































































































































































































/* Address: 0x100a66a8 Size: 96 bytes */
void FUN_100a66a8(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a6f38(void) { }

























































































































































































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a9628(void) { }

























































































































































































































































































































































































































































































































































































































































































































































































/* Address: 0x100a9c08 Size: 216 bytes */
void FUN_100a9c08(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ab22c(void) { }










































































































/* Address: 0x100ab334 Size: 52 bytes */
void FUN_100ab334(void)

{
  FUN_100a7544();
  FUN_100ab22c();
  FUN_100ab2c4();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100ab9e4(void) { }







































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100abb68(void) { }







































































































































































































































/* Address: 0x100abcec Size: 160 bytes */
void FUN_100abcec(void)

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
void FUN_100b0578(void)

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
void FUN_100b1210(void)

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
void FUN_100b1c84(void)

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
void FUN_100b2e74(void)

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

void FUN_100b4c68(void)

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
void FUN_100becb8(void)

{
  FUN_100e9124();
  return;
}

/* Address: 0x100c0f10 Size: 96 bytes */
void FUN_100c0f10(void)

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
int FUN_100c43ec(void)

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
int FUN_100c9950(void)

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
int FUN_100ca068(void)

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
void FUN_100db1ec(void)

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
int FUN_100e8cdc(void)

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
int FUN_100e9e78(void)

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
unsigned long long FUN_100ef2f8(void)

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
int FUN_100f1264(void)

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

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100f2a54(void) { }


























































































































































































































































































































































































































































































































/* FUN_100f5108 defined elsewhere */


/* Address: 0x100f56c0 Size: 36 bytes */
void FUN_100f56c0(void)

{
  FUN_100f5640();
  return;
}

/* FUN_100f5754 defined elsewhere */


/* Address: 0x100f5814 Size: 36 bytes */
void FUN_100f5814(void)

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
int FUN_1010597c(void)

{
  return uRam10116c7c;
}

/* Address: 0x1010d6a8 Size: 8 bytes */
int FUN_1010d6a8(void)

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
int FUN_1010f044(void)

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



















































































































































































































