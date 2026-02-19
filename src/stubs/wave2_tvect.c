/*
 * wave2_tvect.c - Reconstructed functions (wave2_tvect)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 531 functions in address range wave2_tvect
 */

#include "warlords2.h"

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
void FUN_10000018();
void FUN_10000030();
void FUN_10000060();
void FUN_10000078();
void FUN_100000a8();
void FUN_100000c0();
void FUN_100000d8();
void FUN_100000f0();
void FUN_10000108();
void FUN_10000138();
void FUN_10000168();
void FUN_10000180();
void FUN_10000198();
void FUN_100001b0();
void FUN_100001c8();
void FUN_100001e0();
void FUN_100001f8();
void FUN_10000228();
void FUN_10000240();
void FUN_10000258();
void MoveTo_Thunk();
void LineTo_Thunk();
void FUN_100002b8();
void FUN_100002d0();
void FUN_100002e8();
void FUN_10000330();
void FUN_10000348();
void FUN_100003a8();
void FUN_100003c0();
void FUN_100003d8();
void FUN_100003f0();
void FUN_10000408();
void FUN_10000420();
void FUN_10000438();
void FUN_10000450();
void FUN_10000480();
void FUN_10000498();
void FUN_100004b0();
void FUN_100004c8();
void FUN_100004f8();
void FUN_10000510();
void FUN_10000528();
void FUN_10000540();
void FUN_10000558();
void FUN_10000570();
void FUN_10000588();
void FUN_100005a0();
void FUN_100005b8();
void FUN_100005d0();
void FUN_100005e8();
void FUN_10000600();
void FUN_10000618();
void FUN_10000630();
void FUN_10000648();
void FUN_10000660();
void FUN_10000690();
void FUN_100006c0();
void FUN_10000708();
void FUN_10000720();
void FUN_10000738();
void FUN_10000750();
void FUN_10000768();
void FUN_10000780();
void FUN_10000798();
void FUN_100007b0();
void FUN_100007c8();
void FUN_100007e0();
void FUN_100007f8();
void FUN_10000810();
void FUN_10000828();
void FUN_10000840();
void FUN_10000858();
void GetGWorld_Wrapper();
void SetGWorld_Wrapper();
void FUN_100008a0();
void FUN_10000930();
void FUN_10000978();
void FUN_10000990();
void FUN_100009a8();
void FUN_100009c0();
void FUN_10000a20();
void FUN_10000a38();
void FUN_10000a50();
void FUN_10000a68();
void FUN_10000a80();
void FUN_10000ab0();
void FUN_10000ac8();
void FUN_10000ae0();
void FUN_10000af8();
void FUN_10000b10();
void FUN_10000b28();
void FUN_10000b40();
void FUN_10000b58();
void HLock_Thunk_Sound();
void FUN_10000b88();
void FUN_10000ba0();
void FUN_10000bb8();
void FUN_10000bd0();
void FUN_10000be8();
void FUN_10000c00();
void FUN_10000c18();
void FUN_10000c30();
void FUN_10000c48();
void FUN_10000c78();
void FUN_10000ca8();
void FUN_10000cc0();
void FUN_10000cd8();
void FUN_10000cf0();
void FUN_10000d08();
void FUN_10000d20();
void FUN_10000d38();
void FUN_10000d50();
void FUN_10000d68();
void FUN_10000d80();
void FUN_10000d98();
void FUN_10000db0();
void FUN_10000dc8();
void FUN_10000de0();
void FUN_10000df8();
void FUN_10000e10();
void FUN_10000e28();
void FUN_10000e40();
void FUN_10000e58();
void FUN_10000e70();
void FUN_10000e88();
void FUN_10000ea0();
void FUN_10000eb8();
void FUN_10000ed0();
void FUN_10000ee8();
void FUN_10000f00();
void FUN_10000f18();
void FUN_10000f30();
void FUN_10000f48();
void FUN_10000f60();
void FUN_10000f78();
void FUN_10000f90();
void FUN_10000fc0();
void FUN_10000fd8();
void FUN_10000ff0();
void FUN_10001008();
void FUN_10001020();
void FUN_10001038();
void FUN_10001050();
void FUN_10001068();
void FUN_10001080();
void FUN_10001098();
void FUN_100010b0();
void FUN_100010c8();
void FUN_100010e0();
void FUN_100010f8();
void FUN_10001110();
void FUN_10001128();
void FUN_10001140();
void FUN_10001158();
void FUN_10001188();
void FUN_100011a0();
void FUN_100011b8();
void FUN_100011d0();
void FUN_100011e8();
void FUN_10001200();
void FUN_10001218();
void FUN_10001230();
void FUN_10001248();
void FUN_10001260();
void FUN_10001278();
int HLock_Thunk();
void FUN_100012a8();
void FUN_10001308();
void FUN_10001320();
void FUN_10001350();
void FUN_10001368();
void FUN_10001380();
void FUN_10001398();
void FUN_100014e8();
void FUN_10001500();
void FUN_10001518();
void FUN_10001530();
void FUN_10001548();
void FUN_10001560();
void FUN_10001578();
void FUN_100015c0();
void FUN_100015d8();
void FUN_100015f0();
void FUN_10001608();
void FUN_10001620();
void FUN_10001650();
void FUN_10001668();
void FUN_100016c8();
void FUN_100016e0();
void FUN_10001710();
void FUN_10001740();
void FUN_10001770();
void FUN_100017a0();
void FUN_100017b8();
void FUN_100017d0();
void FUN_100017e8();
void FUN_10001800();
void FUN_10001830();
void FUN_10001848();
void FUN_10001878();
void FUN_10001890();
void FUN_100018d8();
void FUN_10001938();
void FUN_10001950();
void FUN_10001968();
void FUN_10001980();
void FUN_10001998();
void FUN_100019c8();
void FUN_100019e0();
void FUN_10001a10();
void FUN_10001a28();
void FUN_10001a40();
void FUN_10001a58();
void FUN_10001a70();
void FUN_10001aa0();
void FUN_10001ab8();
void FUN_10001ae8();
void FUN_10001b18();
void FUN_10001b48();
void FUN_10001b78();
void FUN_10001b90();
void FUN_10001ba8();
void FUN_10001bc0();
void FUN_10001bf0();
void FUN_10001c08();
void FUN_10001c38();
void FUN_10001c50();
void FUN_10001c68();
void FUN_10001c80();
void FUN_10001cb0();
void FUN_10001cc8();
void FUN_10001ce0();
int FUN_10001cf8();
void FUN_10001d10();
void FUN_10001d40();
void FUN_10001d88();
void FUN_10001da0();
void FUN_10001db8();
void FUN_10001de8();
void FUN_10001e00();
void FUN_10001e18();
void FUN_10001e30();
void FUN_10001e48();
void FUN_10001e60();
void FUN_10001ea8();
void FUN_10001ec0();
void FUN_10001ed8();
void FUN_10001ef0();
void FUN_10001f08();
void FUN_10001f20();
void FUN_10001f38();
void FUN_10001f68();
void FUN_10001f80();
void FUN_10001fb0();
void FUN_10001fc8();
void FUN_10001fe0();
void FUN_10001ff8();
void FUN_10002010();
void FUN_10002028();
void FUN_10002040();
void FUN_10002058();
void FUN_10002070();
void FUN_10002088();
void FUN_100020a0();
void FUN_100020b8();
void FUN_100020e8();
void FUN_10002118();
void FUN_10002130();
void FUN_10002160();
void FUN_10002190();
void FUN_100021a8();
void FUN_100021d8();
void FUN_10002208();
void FUN_10002220();
void FUN_10002250();
void FUN_10002268();
void FUN_10002280();
void FUN_10002298();
void FUN_100022b0();
void FUN_100022c8();
void FUN_100022e0();
void FUN_100022f8();
void FUN_10002310();
void FUN_10002328();
void FUN_10002370();
void FUN_10002388();
void FUN_100023a0();
void FUN_100023b8();
void FUN_100023d0();
void FUN_100023e8();
void FUN_10002418();
void FUN_10002430();
void FUN_10002448();
void FUN_10002460();
void FUN_10002478();
void FUN_10002490();
void FUN_100024a8();
void FUN_100024c0();
void FUN_100024d8();
void FUN_100024f0();
void FUN_10002508();
void FUN_10002538();
void FUN_10002550();
void FUN_10002580();
void FUN_100025c8();
void FUN_100025e0();
void FUN_100025f8();
void FUN_10002610();
void FUN_10002628();
void FUN_10002640();
void FUN_10002658();
void FUN_10002670();
void FUN_10002688();
void FUN_100026a0();
void FUN_100026e8();
void FUN_10002700();
void FUN_10002718();
void FUN_10002730();
void FUN_10002748();
void FUN_10002760();
void FUN_10002778();
void FUN_100027a8();
void FUN_100027c0();
void FUN_100027d8();
void FUN_100027f0();
void FUN_10002808();
void FUN_10002820();
void FUN_10002838();
void FUN_10002850();
void FUN_10002868();
void FUN_10002880();
void FUN_10002898();
void FUN_100028b0();
void FUN_100028c8();
void FUN_100028e0();
void FUN_100028f8();
void FUN_10002910();
void FUN_10002928();
void FUN_10002940();
void FUN_10002958();
void FUN_10002988();
void FUN_100029a0();
void FUN_100029b8();
void FUN_100029d0();
void FUN_100029e8();
void FUN_10002a18();
void FUN_10002a30();
void FUN_10002a48();
void FUN_10002a78();
void FUN_10002a90();
void FUN_10002aa8();
void FUN_10002ac0();
void DisposeHandle_Thunk();
void FUN_10002af0();
void FUN_10002b08();
void FUN_10002b20();
void FUN_10002b38();
void FUN_10002b50();
void FUN_10002b68();
void FUN_10002b80();
void FUN_10002b98();
void FUN_10002bb0();
void FUN_10002bc8();
void FUN_10002be0();
void FUN_10002bf8();
void FUN_10002c10();
void FUN_10002c28();
void FUN_10002c40();
void FUN_10002c70();
void FUN_10002c88();
void FUN_10002ca0();
void FUN_10002cb8();
void FUN_10002cd0();
void FUN_10002d18();
void FUN_10002d30();
void FUN_10002d78();
void FUN_10002d90();
void FUN_10002da8();
void FUN_10002dc0();
void FUN_10002dd8();
void FUN_10002df0();
void FUN_10002e08();
void FUN_10002e20();
void FUN_10002e38();
void FUN_10002e68();
void FUN_10002e80();
void FUN_10002e98();
void FUN_10002ec8();
void FUN_10002ee0();
void FUN_10002ef8();
void FUN_10002f10();
void FUN_10002f28();
void FUN_10002f40();
void FUN_10002f58();
void FUN_10002f70();
void FUN_10002f88();
void FUN_10002fa0();
void FUN_10002fb8();
void FUN_10002fd0();
void FUN_10002fe8();
void FUN_10003000();
void FUN_10003030();
void FUN_10003048();
void FUN_10003060();
void FUN_10003078();
void FUN_10003090();
void FUN_100030a8();
void FUN_100030c0();
void FUN_100030d8();
void FUN_100030f0();
void SetMacRect();
void FUN_10003120();
void FUN_10003138();
void FUN_10003150();
void FUN_10003168();
void FUN_10003180();
void NewGWorld_Wrapper();
void FUN_100031b0();
void FUN_100031c8();
void FUN_100031e0();
void FUN_100031f8();
void FUN_10003210();
void FUN_10003240();
void FUN_10003258();
void FUN_10003288();
void FUN_100032a0();
void FUN_100032d0();
void FUN_10003300();
void FUN_10003318();
void FUN_10003330();
void FUN_10003348();
void FUN_10003360();
void FUN_10003378();
void FUN_10003390();
void FUN_100033a8();
void FUN_100033c0();
void FUN_100033d8();
void FUN_100033f0();
void FUN_10003408();
void FUN_10003420();
void FUN_10003438();
void FUN_10003450();
void HUnlock_Thunk();
void FUN_10003480();
void FUN_10003498();
void FUN_100034b0();
void FUN_100034c8();
void FUN_100034e0();
void FUN_100034f8();
void FUN_10003510();
void FUN_10003528();
void FUN_10003540();
void FUN_10003570();
void FUN_10003588();
void FUN_100035d0();
void FUN_100035e8();
void FUN_10003600();
void FUN_10003618();
void FUN_10003630();
void FUN_10003690();
void FUN_100036a8();
void FUN_100036c0();
void FUN_100036d8();
void FUN_100036f0();
void FUN_10003708();
void FUN_10003738();
void FUN_10003750();
void FUN_10003780();
void FUN_100037b0();
void FUN_100037e0();
void FUN_100037f8();
void FUN_10003810();
void FUN_10003828();
void FUN_10003840();
void FUN_10003858();
void FUN_10003870();
void FUN_10003888();
void FUN_100038a0();
void FUN_100038b8();
void FUN_100038d0();
void FUN_100038e8();
void FUN_10003900();
void FUN_10003918();
void FUN_10003948();
void FUN_10003960(int *param_1,int *param_2);
int * FUN_10003a48(int *param_1,int *param_2);
void FUN_10003aa4();
void FUN_10003b7c(int param_1);
void FUN_10003ec8(short param_1,short param_2);
void FUN_1000419c(int param_1);
void FUN_10004400(int param_1);
void FUN_100047d0(int param_1);
void FUN_100049bc(int param_1);
long long FUN_10004ed8(long long param_1);
void FUN_10008418();
void FUN_100084d0(unsigned short param_1);
void FUN_1000865c(short param_1,long long param_2,short param_3,short param_4);
void FUN_10008c0c(short param_1,short param_2,long long param_3,short param_4,
                 short param_5);
void FUN_10008de4();
void FUN_10008e8c();
long long SetArmyDestination(long long param_1,short param_2,short param_3);
void FUN_10009520();
void FUN_100095fc();
unsigned short FUN_10009630(short param_1,short param_2,short param_3);
void FUN_10009700();
void FUN_10009944(long long param_1);
void FUN_100099b4();
void FUN_10009a0c();
void FUN_1000a4e8();
void FUN_1000a958();
void FUN_1000a9e4(short param_1,short param_2,short param_3);
void FUN_1000aaa8(long long param_1,long long param_2);
void FUN_1000ab70(short param_1,short param_2);
void FUN_1000b278(short param_1,short param_2);
void FUN_1000b3d8(short param_1,short param_2,short param_3,char param_4);
void FUN_1000b940(long long param_1,short param_2,short param_3);
void FUN_1000ba58(short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6,short param_7);
void FUN_1000be58(short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6,short param_7,short param_8);
void FUN_1000c3fc(long long param_1,long long param_2);
void FUN_1000c4c4(short param_1,short param_2,int *param_3);
void FUN_1000c648();
int FUN_1000db10(short param_1);
void FUN_1000dc4c(short param_1,short param_2,int param_3,int *param_4);
unsigned long long FindPrimaryThreat(short param_1);
void FUN_1000f064(short param_1);
void DisbandUnit(short param_1,short param_2);
void ReleaseUnits(int param_1,short param_2);

/* Extern declarations for Ghidra globals */
int FUN_101159dc();
unsigned int FUN_101159ec();
int FUN_10115a00();
void FUN_10115a68();
void FUN_10115cc4(int param_1,unsigned long long param_2);
int FUN_10116698(int param_1, int param_2);
extern long iRam10115cbc;
extern long iRam10115cc0;
extern long iRam10115ce8;
extern long iRam10115cec;
extern long iRam10117424;
extern long iRam10117428;
extern long iRam101174ac;
extern long iRam101174e4;
extern long iRam10117584;
extern long iRam101176c0;
extern char *pcRam10116398;
extern char *pcRam101174d8;
extern pint *piRam10115cf0;
extern pint *piRam10115cf4;
extern pint *piRam10115cfc;
extern pint *piRam1011742c;
extern pint *piRam10117468;
extern short *psRam10115ce0;
extern short *psRam10115d0c;
extern short *psRam10115d18;
extern short *psRam10115e80;
extern short *psRam10115e90;
extern short *psRam10115e9c;
extern short *psRam10115ea0;
extern short *psRam10115ff8;
extern short *psRam10117430;
extern short *psRam1011745c;
extern short *psRam10117460;
extern short *psRam10117580;
extern short *psRam10117710;
extern unsigned int *puRam101151d8;
extern unsigned int *puRam101151dc;
extern unsigned int *puRam101151e0;
extern unsigned int *puRam101151e4;
extern unsigned int *puRam101151e8;
extern unsigned int *puRam101151ec;
extern unsigned int *puRam101151f4;
extern unsigned int *puRam101151f8;
extern unsigned int *puRam101151fc;
extern unsigned int *puRam10115200;
extern unsigned int *puRam10115204;
extern unsigned int *puRam10115208;
extern unsigned int *puRam1011520c;
extern unsigned int *puRam10115210;
extern unsigned int *puRam10115214;
extern unsigned int *puRam10115218;
extern unsigned int *puRam1011521c;
extern unsigned int *puRam10115220;
extern unsigned int *puRam10115224;
extern unsigned int *puRam1011522c;
extern unsigned int *puRam10115230;
extern unsigned int *puRam10115234;
extern unsigned int *puRam1011523c;
extern unsigned int *puRam10115240;
extern unsigned int *puRam10115244;
extern unsigned int *puRam10115248;
extern unsigned int *puRam1011524c;
extern unsigned int *puRam10115250;
extern unsigned int *puRam10115254;
extern unsigned int *puRam10115258;
extern unsigned int *puRam10115260;
extern unsigned int *puRam10115264;
extern unsigned int *puRam10115268;
extern unsigned int *puRam1011526c;
extern unsigned int *puRam10115270;
extern unsigned int *puRam10115274;
extern unsigned int *puRam10115278;
extern unsigned int *puRam1011527c;
extern unsigned int *puRam10115280;
extern unsigned int *puRam10115284;
extern unsigned int *puRam10115288;
extern unsigned int *puRam1011528c;
extern unsigned int *puRam10115290;
extern unsigned int *puRam10115294;
extern unsigned int *puRam10115298;
extern unsigned int *puRam101152a0;
extern unsigned int *puRam101152a4;
extern unsigned int *puRam101152a8;
extern unsigned int *puRam101152ac;
extern unsigned int *puRam101152b0;
extern unsigned int *puRam101152b4;
extern unsigned int *puRam101152b8;
extern unsigned int *puRam101152bc;
extern unsigned int *puRam101152c0;
extern unsigned int *puRam101152f4;
extern unsigned int *puRam101152f8;
extern unsigned int *puRam101152fc;
extern unsigned int *puRam10115300;
extern unsigned int *puRam10115304;
extern unsigned int *puRam1011530c;
extern unsigned int *puRam10115310;
extern unsigned int *puRam10115318;
extern unsigned int *puRam1011531c;
extern unsigned int *puRam10115320;
extern unsigned int *puRam10115324;
extern unsigned int *puRam10115328;
extern unsigned int *puRam1011532c;
extern unsigned int *puRam10115338;
extern unsigned int *puRam1011533c;
extern unsigned int *puRam10115340;
extern unsigned int *puRam10115344;
extern unsigned int *puRam10115348;
extern unsigned int *puRam1011534c;
extern unsigned int *puRam10115350;
extern unsigned int *puRam1011535c;
extern unsigned int *puRam10115368;
extern unsigned int *puRam1011536c;
extern unsigned int *puRam10115370;
extern unsigned int *puRam1011537c;
extern unsigned int *puRam10115384;
extern unsigned int *puRam10115388;
extern unsigned int *puRam1011538c;
extern unsigned int *puRam10115394;
extern unsigned int *puRam10115398;
extern unsigned int *puRam1011539c;
extern unsigned int *puRam101153a0;
extern unsigned int *puRam101153a4;
extern unsigned int *puRam101153a8;
extern unsigned int *puRam101153ac;
extern unsigned int *puRam101153b0;
extern unsigned int *puRam101153b4;
extern unsigned int *puRam101153b8;
extern unsigned int *puRam101153bc;
extern unsigned int *puRam101153c0;
extern unsigned int *puRam101153c4;
extern unsigned int *puRam101153c8;
extern unsigned int *puRam101153cc;
extern unsigned int *puRam101153d0;
extern unsigned int *puRam101153d4;
extern unsigned int *puRam101153d8;
extern unsigned int *puRam101153dc;
extern unsigned int *puRam101153e0;
extern unsigned int *puRam101153ec;
extern unsigned int *puRam101153f0;
extern unsigned int *puRam101153f4;
extern unsigned int *puRam101153f8;
extern unsigned int *puRam101153fc;
extern unsigned int *puRam10115400;
extern unsigned int *puRam10115404;
extern unsigned int *puRam10115408;
extern unsigned int *puRam10115410;
extern unsigned int *puRam10115414;
extern unsigned int *puRam10115418;
extern unsigned int *puRam1011541c;
extern unsigned int *puRam10115420;
extern unsigned int *puRam10115424;
extern unsigned int *puRam10115428;
extern unsigned int *puRam1011542c;
extern unsigned int *puRam10115430;
extern unsigned int *puRam10115434;
extern unsigned int *puRam10115438;
extern unsigned int *puRam1011543c;
extern unsigned int *puRam10115440;
extern unsigned int *puRam10115444;
extern unsigned int *puRam10115448;
extern unsigned int *puRam1011544c;
extern unsigned int *puRam10115450;
extern unsigned int *puRam10115454;
extern unsigned int *puRam10115458;
extern unsigned int *puRam1011545c;
extern unsigned int *puRam10115464;
extern unsigned int *puRam10115468;
extern unsigned int *puRam1011546c;
extern unsigned int *puRam10115470;
extern unsigned int *puRam10115478;
extern unsigned int *puRam1011547c;
extern unsigned int *puRam1011548c;
extern unsigned int *puRam10115490;
extern unsigned int *puRam10115494;
extern unsigned int *puRam10115498;
extern unsigned int *puRam1011549c;
extern unsigned int *puRam101154a4;
extern unsigned int *puRam101154a8;
extern unsigned int *puRam101154ac;
extern unsigned int *puRam101154b0;
extern unsigned int *puRam101154b4;
extern unsigned int *puRam101154b8;
extern unsigned int *puRam101154bc;
extern unsigned int *puRam101154c0;
extern unsigned int *puRam101154c8;
extern unsigned int *puRam101154cc;
extern unsigned int *puRam101154d0;
extern unsigned int *puRam101154d4;
extern unsigned int *puRam101154d8;
extern unsigned int *puRam101154dc;
extern unsigned int *puRam101154e0;
extern unsigned int *puRam101154e4;
extern unsigned int *puRam101154e8;
extern unsigned int *puRam101154ec;
extern unsigned int *puRam101154f0;
extern unsigned int *puRam101154f4;
extern unsigned int *puRam101154f8;
extern unsigned int *puRam101154fc;
extern unsigned int *puRam10115500;
extern unsigned int *puRam10115508;
extern unsigned int *puRam1011550c;
extern unsigned int *puRam10115510;
extern unsigned int *puRam10115514;
extern unsigned int *puRam10115518;
extern unsigned int *puRam1011551c;
extern unsigned int *puRam10115520;
extern unsigned int *puRam10115528;
extern unsigned int *puRam1011552c;
extern unsigned int *puRam10115534;
extern unsigned int *puRam1011553c;
extern unsigned int *puRam10115548;
extern unsigned int *puRam1011554c;
extern unsigned int *puRam10115550;
extern unsigned int *puRam10115554;
extern unsigned int *puRam10115558;
extern unsigned int *puRam1011555c;
extern unsigned int *puRam10115568;
extern unsigned int *puRam10115570;
extern unsigned int *puRam10115580;
extern unsigned int *puRam10115588;
extern unsigned int *puRam1011558c;
extern unsigned int *puRam10115590;
extern unsigned int *puRam10115594;
extern unsigned int *puRam10115598;
extern unsigned int *puRam1011559c;
extern unsigned int *puRam101155a0;
extern unsigned int *puRam101155a4;
extern unsigned int *puRam101155a8;
extern unsigned int *puRam101155ac;
extern unsigned int *puRam101155b0;
extern unsigned int *puRam101155b4;
extern unsigned int *puRam101155b8;
extern unsigned int *puRam101155bc;
extern unsigned int *puRam101155c0;
extern unsigned int *puRam101155cc;
extern unsigned int *puRam101155d0;
extern unsigned int *puRam101155d4;
extern unsigned int *puRam101155d8;
extern unsigned int *puRam101155dc;
extern unsigned int *puRam101155e0;
extern unsigned int *puRam101155e4;
extern unsigned int *puRam101155e8;
extern unsigned int *puRam101155f0;
extern unsigned int *puRam101155f4;
extern unsigned int *puRam101155f8;
extern unsigned int *puRam101155fc;
extern unsigned int *puRam10115600;
extern unsigned int *puRam10115604;
extern unsigned int *puRam10115608;
extern unsigned int *puRam1011560c;
extern unsigned int *puRam10115610;
extern unsigned int *puRam10115614;
extern unsigned int *puRam10115618;
extern unsigned int *puRam10115620;
extern unsigned int *puRam10115624;
extern unsigned int *puRam10115630;
extern unsigned int *puRam10115634;
extern unsigned int *puRam1011563c;
extern unsigned int *puRam10115640;
extern unsigned int *puRam10115644;
extern unsigned int *puRam10115648;
extern unsigned int *puRam1011564c;
extern unsigned int *puRam10115650;
extern unsigned int *puRam10115654;
extern unsigned int *puRam10115658;
extern unsigned int *puRam10115668;
extern unsigned int *puRam1011566c;
extern unsigned int *puRam10115670;
extern unsigned int *puRam10115674;
extern unsigned int *puRam10115678;
extern unsigned int *puRam1011567c;
extern unsigned int *puRam10115680;
extern unsigned int *puRam10115684;
extern unsigned int *puRam10115690;
extern unsigned int *puRam10115694;
extern unsigned int *puRam10115698;
extern unsigned int *puRam1011569c;
extern unsigned int *puRam101156a8;
extern unsigned int *puRam101156ac;
extern unsigned int *puRam101156b0;
extern unsigned int *puRam101156b4;
extern unsigned int *puRam101156b8;
extern unsigned int *puRam101156bc;
extern unsigned int *puRam101156c0;
extern unsigned int *puRam101156c4;
extern unsigned int *puRam101156c8;
extern unsigned int *puRam101156cc;
extern unsigned int *puRam101156d8;
extern unsigned int *puRam101156dc;
extern unsigned int *puRam101156e0;
extern unsigned int *puRam101156e4;
extern unsigned int *puRam101156e8;
extern unsigned int *puRam101156ec;
extern unsigned int *puRam101156f0;
extern unsigned int *puRam101156f4;
extern unsigned int *puRam101156f8;
extern unsigned int *puRam10115700;
extern unsigned int *puRam10115704;
extern unsigned int *puRam10115708;
extern unsigned int *puRam1011570c;
extern unsigned int *puRam10115710;
extern unsigned int *puRam10115714;
extern unsigned int *puRam10115718;
extern unsigned int *puRam1011571c;
extern unsigned int *puRam10115720;
extern unsigned int *puRam10115724;
extern unsigned int *puRam10115728;
extern unsigned int *puRam1011572c;
extern unsigned int *puRam10115730;
extern unsigned int *puRam10115734;
extern unsigned int *puRam10115738;
extern unsigned int *puRam1011573c;
extern unsigned int *puRam10115740;
extern unsigned int *puRam10115744;
extern unsigned int *puRam10115748;
extern unsigned int *puRam10115750;
extern unsigned int *puRam1011575c;
extern unsigned int *puRam10115760;
extern unsigned int *puRam10115764;
extern unsigned int *puRam10115768;
extern unsigned int *puRam1011576c;
extern unsigned int *puRam10115770;
extern unsigned int *puRam10115774;
extern unsigned int *puRam10115778;
extern unsigned int *puRam1011577c;
extern unsigned int *puRam10115780;
extern unsigned int *puRam10115784;
extern unsigned int *puRam10115788;
extern unsigned int *puRam1011578c;
extern unsigned int *puRam1011579c;
extern unsigned int *puRam101157a8;
extern unsigned int *puRam101157ac;
extern unsigned int *puRam101157b0;
extern unsigned int *puRam101157b4;
extern unsigned int *puRam101157b8;
extern unsigned int *puRam101157bc;
extern unsigned int *puRam101157c0;
extern unsigned int *puRam101157c4;
extern unsigned int *puRam101157c8;
extern unsigned int *puRam101157d0;
extern unsigned int *puRam101157d4;
extern unsigned int *puRam101157d8;
extern unsigned int *puRam101157dc;
extern unsigned int *puRam101157e0;
extern unsigned int *puRam101157e4;
extern unsigned int *puRam101157e8;
extern unsigned int *puRam101157f8;
extern unsigned int *puRam101157fc;
extern unsigned int *puRam10115804;
extern unsigned int *puRam10115808;
extern unsigned int *puRam1011580c;
extern unsigned int *puRam10115820;
extern unsigned int *puRam10115824;
extern unsigned int *puRam10115828;
extern unsigned int *puRam1011582c;
extern unsigned int *puRam10115830;
extern unsigned int *puRam10115840;
extern unsigned int *puRam10115844;
extern unsigned int *puRam10115850;
extern unsigned int *puRam10115854;
extern unsigned int *puRam10115860;
extern unsigned int *puRam10115864;
extern unsigned int *puRam10115868;
extern unsigned int *puRam1011586c;
extern unsigned int *puRam10115870;
extern unsigned int *puRam10115880;
extern unsigned int *puRam10115884;
extern unsigned int *puRam10115888;
extern unsigned int *puRam1011588c;
extern unsigned int *puRam10115890;
extern unsigned int *puRam10115894;
extern unsigned int *puRam10115898;
extern unsigned int *puRam1011589c;
extern unsigned int *puRam101158a0;
extern unsigned int *puRam101158a4;
extern unsigned int *puRam101158a8;
extern unsigned int *puRam101158ac;
extern unsigned int *puRam101158b0;
extern unsigned int *puRam101158b4;
extern unsigned int *puRam101158b8;
extern unsigned int *puRam101158bc;
extern unsigned int *puRam101158c0;
extern unsigned int *puRam101158c4;
extern unsigned int *puRam101158c8;
extern unsigned int *puRam101158e4;
extern unsigned int *puRam101158e8;
extern unsigned int *puRam101158f0;
extern unsigned int *puRam101158f4;
extern unsigned int *puRam101158f8;
extern unsigned int *puRam101158fc;
extern unsigned int *puRam10115900;
extern unsigned int *puRam10115904;
extern unsigned int *puRam10115908;
extern unsigned int *puRam1011590c;
extern unsigned int *puRam10115910;
extern unsigned int *puRam10115914;
extern unsigned int *puRam10115918;
extern unsigned int *puRam1011591c;
extern unsigned int *puRam10115920;
extern unsigned int *puRam10115924;
extern unsigned int *puRam10115928;
extern unsigned int *puRam1011592c;
extern unsigned int *puRam10115930;
extern unsigned int *puRam10115934;
extern unsigned int *puRam10115938;
extern unsigned int *puRam1011593c;
extern unsigned int *puRam10115940;
extern unsigned int *puRam10115944;
extern unsigned int *puRam10115948;
extern unsigned int *puRam1011594c;
extern unsigned int *puRam10115950;
extern unsigned int *puRam10115954;
extern unsigned int *puRam10115958;
extern unsigned int *puRam1011595c;
extern unsigned int *puRam10115960;
extern unsigned int *puRam10115964;
extern unsigned int *puRam10115968;
extern unsigned int *puRam1011596c;
extern unsigned int *puRam10115970;
extern unsigned int *puRam10115974;
extern unsigned int *puRam10115978;
extern unsigned int *puRam1011597c;
extern unsigned int *puRam10115980;
extern unsigned int *puRam10115984;
extern unsigned int *puRam10115988;
extern unsigned int *puRam1011598c;
extern unsigned int *puRam10115990;
extern unsigned int *puRam10115994;
extern unsigned int *puRam1011599c;
extern unsigned int *puRam101159a4;
extern unsigned int *puRam101159b0;
extern unsigned int *puRam101159b4;
extern unsigned int *puRam101159b8;
extern unsigned int *puRam101159bc;
extern unsigned int *puRam101159c0;
extern unsigned int *puRam101159c4;
extern unsigned int *puRam101159c8;
extern unsigned int *puRam101159cc;
extern unsigned int *puRam101159d0;
extern unsigned int *puRam101159d4;
extern unsigned int *puRam101159d8;
extern unsigned int *puRam101159e4;
extern unsigned int *puRam101159e8;
extern unsigned int *puRam101159f4;
extern unsigned int *puRam101159f8;
extern unsigned int *puRam101159fc;
extern unsigned int *puRam10115a08;
extern unsigned int *puRam10115a0c;
extern unsigned int *puRam10115a14;
extern unsigned int *puRam10115a18;
extern unsigned int *puRam10115a1c;
extern unsigned int *puRam10115a20;
extern unsigned int *puRam10115a28;
extern unsigned int *puRam10115a2c;
extern unsigned int *puRam10115a38;
extern unsigned int *puRam10115a3c;
extern unsigned int *puRam10115a40;
extern unsigned int *puRam10115a44;
extern unsigned int *puRam10115a48;
extern unsigned int *puRam10115a4c;
extern unsigned int *puRam10115a50;
extern unsigned int *puRam10115a54;
extern unsigned int *puRam10115a58;
extern unsigned int *puRam10115a5c;
extern unsigned int *puRam10115a60;
extern unsigned int *puRam10115a64;
extern unsigned int *puRam10115a70;
extern unsigned int *puRam10115a80;
extern unsigned int *puRam10115a84;
extern unsigned int *puRam10115a88;
extern unsigned int *puRam10115a8c;
extern unsigned int *puRam10115a90;
extern unsigned int *puRam10115a94;
extern unsigned int *puRam10115a98;
extern unsigned int *puRam10115a9c;
extern unsigned int *puRam10115aa0;
extern unsigned int *puRam10115aa8;
extern unsigned int *puRam10115aac;
extern unsigned int *puRam10115ab0;
extern unsigned int *puRam10115ab4;
extern unsigned int *puRam10115ab8;
extern unsigned int *puRam10115abc;
extern unsigned int *puRam10115ac0;
extern unsigned int *puRam10115ac4;
extern unsigned int *puRam10115ac8;
extern unsigned int *puRam10115acc;
extern unsigned int *puRam10115ae0;
extern unsigned int *puRam10115ae8;
extern unsigned int *puRam10115aec;
extern unsigned int *puRam10115af4;
extern unsigned int *puRam10115af8;
extern unsigned int *puRam10115afc;
extern unsigned int *puRam10115b00;
extern unsigned int *puRam10115b08;
extern unsigned int *puRam10115b0c;
extern unsigned int *puRam10115b14;
extern unsigned int *puRam10115b18;
extern unsigned int *puRam10115b1c;
extern unsigned int *puRam10115b20;
extern unsigned int *puRam10115b28;
extern unsigned int *puRam10115b2c;
extern unsigned int *puRam10115b30;
extern unsigned int *puRam10115b34;
extern unsigned int *puRam10115b38;
extern unsigned int *puRam10115b3c;
extern unsigned int *puRam10115b40;
extern unsigned int *puRam10115b44;
extern unsigned int *puRam10115b48;
extern unsigned int *puRam10115b50;
extern unsigned int *puRam10115b54;
extern unsigned int *puRam10115b58;
extern unsigned int *puRam10115b5c;
extern unsigned int *puRam10115b68;
extern unsigned int *puRam10115b6c;
extern unsigned int *puRam10115b74;
extern unsigned int *puRam10115ce4;
extern unsigned int *puRam10115d04;
extern unsigned int *puRam10115d08;
extern unsigned int *puRam10115d10;
extern unsigned int *puRam10115fcc;
extern unsigned int *puRam10115ff8;
extern unsigned int *puRam101163ac;
extern unsigned int *puRam1011735c;
extern unsigned int *puRam1011742c;
extern unsigned int *puRam1011745c;
extern unsigned int *puRam101176dc;
extern unsigned int uRam1011744c;
extern unsigned int uRam10117450;
extern unsigned int uRam10117700;

/* Address: 0x10000018 Size: 24 bytes */
void FUN_10000018()

{

  ((void (*)())*puRam10115348)();
  return;
}

/* Address: 0x10000030 Size: 24 bytes */
void FUN_10000030()

{

  ((void (*)())*puRam101156b4)();
  return;
}

/* Address: 0x10000060 Size: 24 bytes */
void FUN_10000060()

{

  ((void (*)())*puRam1011573c)();
  return;
}

/* Address: 0x10000078 Size: 24 bytes */
void FUN_10000078()

{

  ((void (*)())*puRam1011534c)();
  return;
}

/* Address: 0x100000a8 Size: 24 bytes */
void FUN_100000a8()

{

  ((void (*)())*puRam10115278)();
  return;
}

/* Address: 0x100000c0 Size: 24 bytes */
void FUN_100000c0()

{

  ((void (*)())*puRam10115350)();
  return;
}

/* Address: 0x100000d8 Size: 24 bytes */
void FUN_100000d8()

{

  ((void (*)())*puRam101151e0)();
  return;
}

/* Address: 0x100000f0 Size: 24 bytes */
void FUN_100000f0()

{

  ((void (*)())*puRam101153f4)();
  return;
}

/* Address: 0x10000108 Size: 24 bytes */
void FUN_10000108()

{

  ((void (*)())*puRam1011572c)();
  return;
}

/* Address: 0x10000138 Size: 24 bytes */
void FUN_10000138()

{

  ((void (*)())*puRam10115710)();
  return;
}

/* Address: 0x10000168 Size: 24 bytes */
void FUN_10000168()

{

  ((void (*)())*puRam101153c8)();
  return;
}

/* Address: 0x10000180 Size: 24 bytes */
void FUN_10000180()

{

  ((void (*)())*puRam1011577c)();
  return;
}

/* Address: 0x10000198 Size: 24 bytes */
void FUN_10000198()

{

  ((void (*)())*puRam10115668)();
  return;
}

/* Address: 0x100001b0 Size: 24 bytes */
void FUN_100001b0()

{

  ((void (*)())*puRam1011575c)();
  return;
}

/* Address: 0x100001c8 Size: 24 bytes */
void FUN_100001c8()

{

  ((void (*)())*puRam10115760)();
  return;
}

/* Address: 0x100001e0 Size: 24 bytes */
void FUN_100001e0()

{

  ((void (*)())*puRam1011532c)();
  return;
}

/* Address: 0x100001f8 Size: 24 bytes */
void FUN_100001f8()

{

  ((void (*)())*puRam10115780)();
  return;
}

/* Address: 0x10000228 Size: 24 bytes */
void FUN_10000228()

{

  ((void (*)())*puRam101158a8)();
  return;
}

/* Address: 0x10000240 Size: 24 bytes */
void FUN_10000240()

{

  ((void (*)())*puRam101154ac)();
  return;
}

/* Address: 0x10000258 Size: 24 bytes */
void FUN_10000258()

{

  ((void (*)())*puRam101157e8)();
  return;
}

/* Address: 0x10000270 Size: 24 bytes */
void FUN_10000270()

{

  ((void (*)())*puRam101156b8)();
  return;
}

/* Address: 0x10000288 Size: 24 bytes */
void FUN_10000288()

{

  ((void (*)())*puRam101156c0)();
  return;
}

/* Address: 0x100002b8 Size: 24 bytes */
void FUN_100002b8()

{

  ((void (*)())*puRam10115420)();
  return;
}

/* Address: 0x100002d0 Size: 24 bytes */
void FUN_100002d0()

{

  ((void (*)())*puRam10115550)();
  return;
}

/* Address: 0x100002e8 Size: 24 bytes */
void FUN_100002e8()

{

  ((void (*)())*puRam1011554c)();
  return;
}

/* Address: 0x10000330 Size: 24 bytes */
void FUN_10000330()

{

  ((void (*)())*puRam101155b4)();
  return;
}

/* Address: 0x10000348 Size: 24 bytes */
void FUN_10000348()

{

  ((void (*)())*puRam101159b0)();
  return;
}

/* Address: 0x100003a8 Size: 24 bytes */
void FUN_100003a8()

{

  ((void (*)())*puRam10115328)();
  return;
}

/* Address: 0x100003c0 Size: 24 bytes */
void FUN_100003c0()

{

  ((void (*)())*puRam1011549c)();
  return;
}

/* Address: 0x100003d8 Size: 24 bytes */
void FUN_100003d8()

{

  ((void (*)())*puRam10115b08)();
  return;
}

/* Address: 0x100003f0 Size: 24 bytes */
void FUN_100003f0()

{

  ((void (*)())*puRam101155d8)();
  return;
}

/* Address: 0x10000408 Size: 24 bytes */
void FUN_10000408()

{

  ((void (*)())*puRam10115250)();
  return;
}

/* Address: 0x10000420 Size: 24 bytes */
void FUN_10000420()

{

  ((void (*)())*puRam10115ab8)();
  return;
}

/* Address: 0x10000438 Size: 24 bytes */
void FUN_10000438()

{

  ((void (*)())*puRam10115820)();
  return;
}

/* Address: 0x10000450 Size: 24 bytes */
void FUN_10000450()

{

  ((void (*)())*puRam10115988)();
  return;
}

/* Address: 0x10000480 Size: 24 bytes */
void FUN_10000480()

{

  ((void (*)())*puRam101158f0)();
  return;
}

/* Address: 0x10000498 Size: 24 bytes */
void FUN_10000498()

{

  ((void (*)())*puRam10115aa0)();
  return;
}

/* Address: 0x100004b0 Size: 24 bytes */
void FUN_100004b0()

{

  ((void (*)())*puRam10115ae8)();
  return;
}

/* Address: 0x100004c8 Size: 24 bytes */
void FUN_100004c8()

{

  ((void (*)())*puRam10115558)();
  return;
}

/* Address: 0x100004f8 Size: 24 bytes */
void FUN_100004f8()

{

  ((void (*)())*puRam10115a2c)();
  return;
}

/* Address: 0x10000510 Size: 24 bytes */
void FUN_10000510()

{

  ((void (*)())*puRam101158c8)();
  return;
}

/* Address: 0x10000528 Size: 24 bytes */
void FUN_10000528()

{

  ((void (*)())*puRam10115958)();
  return;
}

/* Address: 0x10000540 Size: 24 bytes */
void FUN_10000540()

{

  ((void (*)())*puRam10115968)();
  return;
}

/* Address: 0x10000558 Size: 24 bytes */
void FUN_10000558()

{

  ((void (*)())*puRam101152fc)();
  return;
}

/* Address: 0x10000570 Size: 24 bytes */
void FUN_10000570()

{

  ((void (*)())*puRam10115b50)();
  return;
}

/* Address: 0x10000588 Size: 24 bytes */
void FUN_10000588()

{

  ((void (*)())*puRam10115740)();
  return;
}

/* Address: 0x100005a0 Size: 24 bytes */
void FUN_100005a0()

{

  ((void (*)())*puRam1011570c)();
  return;
}

/* Address: 0x100005b8 Size: 24 bytes */
void FUN_100005b8()

{

  ((void (*)())*puRam10115720)();
  return;
}

/* Address: 0x100005d0 Size: 24 bytes */
void FUN_100005d0()

{

  ((void (*)())*puRam10115748)();
  return;
}

/* Address: 0x100005e8 Size: 24 bytes */
void FUN_100005e8()

{

  ((void (*)())*puRam10115938)();
  return;
}

/* Address: 0x10000600 Size: 24 bytes */
void FUN_10000600()

{

  ((void (*)())*puRam10115714)();
  return;
}

/* Address: 0x10000618 Size: 24 bytes */
void FUN_10000618()

{

  ((void (*)())*puRam10115950)();
  return;
}

/* Address: 0x10000630 Size: 24 bytes */
void FUN_10000630()

{

  ((void (*)())*puRam101155f0)();
  return;
}

/* Address: 0x10000648 Size: 24 bytes */
void FUN_10000648()

{

  ((void (*)())*puRam10115a70)();
  return;
}

/* Address: 0x10000660 Size: 24 bytes */
void FUN_10000660()

{

  ((void (*)())*puRam1011566c)();
  return;
}

/* Address: 0x10000690 Size: 24 bytes */
void FUN_10000690()

{

  ((void (*)())*puRam10115980)();
  return;
}

/* Address: 0x100006c0 Size: 24 bytes */
void FUN_100006c0()

{

  ((void (*)())*puRam1011538c)();
  return;
}

/* Address: 0x10000708 Size: 24 bytes */
void FUN_10000708()

{

  ((void (*)())*puRam101156c4)();
  return;
}

/* Address: 0x10000720 Size: 24 bytes */
void FUN_10000720()

{

  ((void (*)())*puRam1011599c)();
  return;
}

/* Address: 0x10000738 Size: 24 bytes */
void FUN_10000738()

{

  ((void (*)())*puRam101156ec)();
  return;
}

/* Address: 0x10000750 Size: 24 bytes */
void FUN_10000750()

{

  ((void (*)())*puRam10115764)();
  return;
}

/* Address: 0x10000768 Size: 24 bytes */
void FUN_10000768()

{

  ((void (*)())*puRam101158c0)();
  return;
}

/* Address: 0x10000780 Size: 24 bytes */
void FUN_10000780()

{

  ((void (*)())*puRam10115804)();
  return;
}

/* Address: 0x10000798 Size: 24 bytes */
void FUN_10000798()

{

  ((void (*)())*puRam10115948)();
  return;
}

/* Address: 0x100007b0 Size: 24 bytes */
void FUN_100007b0()

{

  ((void (*)())*puRam10115894)();
  return;
}

/* Address: 0x100007c8 Size: 24 bytes */
void FUN_100007c8()

{

  ((void (*)())*puRam10115930)();
  return;
}

/* Address: 0x100007e0 Size: 24 bytes */
void FUN_100007e0()

{

  ((void (*)())*puRam10115b14)();
  return;
}

/* Address: 0x100007f8 Size: 24 bytes */
void FUN_100007f8()

{

  ((void (*)())*puRam101158bc)();
  return;
}

/* Address: 0x10000810 Size: 24 bytes */
void FUN_10000810()

{

  ((void (*)())*puRam10115928)();
  return;
}

/* Address: 0x10000828 Size: 24 bytes */
void FUN_10000828()

{

  ((void (*)())*puRam101154d0)();
  return;
}

/* Address: 0x10000840 Size: 24 bytes */
void FUN_10000840()

{

  ((void (*)())*puRam10115900)();
  return;
}

/* Address: 0x10000858 Size: 24 bytes */
void FUN_10000858()

{

  ((void (*)())*puRam1011595c)();
  return;
}

/* Address: 0x10000870 Size: 24 bytes */
void FUN_10000870()

{

  ((void (*)())*puRam1011563c)();
  return;
}

/* Address: 0x10000888 Size: 24 bytes */
void FUN_10000888()

{

  ((void (*)())*puRam10115640)();
  return;
}

/* Address: 0x100008a0 Size: 24 bytes */
void FUN_100008a0()

{

  ((void (*)())*puRam1011594c)();
  return;
}

/* Address: 0x10000930 Size: 24 bytes */
void FUN_10000930()

{

  ((void (*)())*puRam10115258)();
  return;
}

/* Address: 0x10000978 Size: 24 bytes */
void FUN_10000978()

{

  ((void (*)())*puRam1011521c)();
  return;
}

/* Address: 0x10000990 Size: 24 bytes */
void FUN_10000990()

{

  ((void (*)())*puRam10115264)();
  return;
}

/* Address: 0x100009a8 Size: 24 bytes */
void FUN_100009a8()

{

  ((void (*)())*puRam10115268)();
  return;
}

/* Address: 0x100009c0 Size: 24 bytes */
void FUN_100009c0()

{

  ((void (*)())*puRam10115270)();
  return;
}

/* Address: 0x10000a20 Size: 24 bytes */
void FUN_10000a20()

{

  ((void (*)())*puRam10115200)();
  return;
}

/* Address: 0x10000a38 Size: 24 bytes */
void FUN_10000a38()

{

  ((void (*)())*puRam10115204)();
  return;
}

/* Address: 0x10000a50 Size: 24 bytes */
void FUN_10000a50()

{

  ((void (*)())*puRam10115974)();
  return;
}

/* Address: 0x10000a68 Size: 24 bytes */
void FUN_10000a68()

{

  ((void (*)())*puRam10115494)();
  return;
}

/* Address: 0x10000a80 Size: 24 bytes */
void FUN_10000a80()

{

  ((void (*)())*puRam10115454)();
  return;
}

/* Address: 0x10000ab0 Size: 24 bytes */
void FUN_10000ab0()

{

  ((void (*)())*puRam10115568)();
  return;
}

/* Address: 0x10000ac8 Size: 24 bytes */
void FUN_10000ac8()

{

  ((void (*)())*puRam10115b68)();
  return;
}

/* Address: 0x10000ae0 Size: 24 bytes */
void FUN_10000ae0()

{

  ((void (*)())*puRam1011578c)();
  return;
}

/* Address: 0x10000af8 Size: 24 bytes */
void FUN_10000af8()

{

  ((void (*)())*puRam101156dc)();
  return;
}

/* Address: 0x10000b10 Size: 24 bytes */
void FUN_10000b10()

{

  ((void (*)())*puRam101156f8)();
  return;
}

/* Address: 0x10000b28 Size: 24 bytes */
void FUN_10000b28()

{

  ((void (*)())*puRam101156f4)();
  return;
}

/* Address: 0x10000b40 Size: 24 bytes */
void FUN_10000b40()

{

  ((void (*)())*puRam10115514)();
  return;
}

/* Address: 0x10000b58 Size: 24 bytes */
void FUN_10000b58()

{

  ((void (*)())*puRam10115744)();
  return;
}

/* Address: 0x10000b70 Size: 24 bytes */
void FUN_10000b70()

{

  ((void (*)())*puRam10115844)();
  return;
}

/* Address: 0x10000b88 Size: 24 bytes */
void FUN_10000b88()

{

  ((void (*)())*puRam101157f8)();
  return;
}

/* Address: 0x10000ba0 Size: 24 bytes */
void FUN_10000ba0()

{

  ((void (*)())*puRam10115888)();
  return;
}

/* Address: 0x10000bb8 Size: 24 bytes */
void FUN_10000bb8()

{

  ((void (*)())*puRam101155e4)();
  return;
}

/* Address: 0x10000bd0 Size: 24 bytes */
void FUN_10000bd0()

{

  ((void (*)())*puRam101159a4)();
  return;
}

/* Address: 0x10000be8 Size: 24 bytes */
void FUN_10000be8()

{

  ((void (*)())*puRam101159f8)();
  return;
}

/* Address: 0x10000c00 Size: 24 bytes */
void FUN_10000c00()

{

  ((void (*)())*puRam10115b48)();
  return;
}

/* Address: 0x10000c18 Size: 24 bytes */
void FUN_10000c18()

{

  ((void (*)())*puRam101153f0)();
  return;
}

/* Address: 0x10000c30 Size: 24 bytes */
void FUN_10000c30()

{

  ((void (*)())*puRam10115af8)();
  return;
}

/* Address: 0x10000c48 Size: 24 bytes */
void FUN_10000c48()

{

  ((void (*)())*puRam101155ac)();
  return;
}

/* Address: 0x10000c78 Size: 24 bytes */
void FUN_10000c78()

{

  ((void (*)())*puRam10115298)();
  return;
}

/* Address: 0x10000ca8 Size: 24 bytes */
void FUN_10000ca8()

{

  ((void (*)())*puRam101153d4)();
  return;
}

/* Address: 0x10000cc0 Size: 24 bytes */
void FUN_10000cc0()

{

  ((void (*)())*puRam101158e4)();
  return;
}

/* Address: 0x10000cd8 Size: 24 bytes */
void FUN_10000cd8()

{

  ((void (*)())*puRam101153c4)();
  return;
}

/* Address: 0x10000cf0 Size: 24 bytes */
void FUN_10000cf0()

{

  ((void (*)())*puRam101153d0)();
  return;
}

/* Address: 0x10000d08 Size: 24 bytes */
void FUN_10000d08()

{

  ((void (*)())*puRam101153cc)();
  return;
}

/* Address: 0x10000d20 Size: 24 bytes */
void FUN_10000d20()

{

  ((void (*)())*puRam101153b8)();
  return;
}

/* Address: 0x10000d38 Size: 24 bytes */
void FUN_10000d38()

{

  ((void (*)())*puRam1011579c)();
  return;
}

/* Address: 0x10000d50 Size: 24 bytes */
void FUN_10000d50()

{

  ((void (*)())*puRam1011539c)();
  return;
}

/* Address: 0x10000d68 Size: 24 bytes */
void FUN_10000d68()

{

  ((void (*)())*puRam101153a8)();
  return;
}

/* Address: 0x10000d80 Size: 24 bytes */
void FUN_10000d80()

{

  ((void (*)())*puRam101153ac)();
  return;
}

/* Address: 0x10000d98 Size: 24 bytes */
void FUN_10000d98()

{

  ((void (*)())*puRam10115644)();
  return;
}

/* Address: 0x10000db0 Size: 24 bytes */
void FUN_10000db0()

{

  ((void (*)())*puRam10115398)();
  return;
}

/* Address: 0x10000dc8 Size: 24 bytes */
void FUN_10000dc8()

{

  ((void (*)())*puRam10115864)();
  return;
}

/* Address: 0x10000de0 Size: 24 bytes */
void FUN_10000de0()

{

  ((void (*)())*puRam10115868)();
  return;
}

/* Address: 0x10000df8 Size: 24 bytes */
void FUN_10000df8()

{

  ((void (*)())*puRam10115208)();
  return;
}

/* Address: 0x10000e10 Size: 24 bytes */
void FUN_10000e10()

{

  ((void (*)())*puRam101153c0)();
  return;
}

/* Address: 0x10000e28 Size: 24 bytes */
void FUN_10000e28()

{

  ((void (*)())*puRam10115a64)();
  return;
}

/* Address: 0x10000e40 Size: 24 bytes */
void FUN_10000e40()

{

  ((void (*)())*puRam101154d8)();
  return;
}

/* Address: 0x10000e58 Size: 24 bytes */
void FUN_10000e58()

{

  ((void (*)())*puRam101157c8)();
  return;
}

/* Address: 0x10000e70 Size: 24 bytes */
void FUN_10000e70()

{

  ((void (*)())*puRam10115b3c)();
  return;
}

/* Address: 0x10000e88 Size: 24 bytes */
void FUN_10000e88()

{

  ((void (*)())*puRam101157d0)();
  return;
}

/* Address: 0x10000ea0 Size: 24 bytes */
void FUN_10000ea0()

{

  ((void (*)())*puRam101151e8)();
  return;
}

/* Address: 0x10000eb8 Size: 24 bytes */
void FUN_10000eb8()

{

  ((void (*)())*puRam10115a84)();
  return;
}

/* Address: 0x10000ed0 Size: 24 bytes */
void FUN_10000ed0()

{

  ((void (*)())*puRam10115614)();
  return;
}

/* Address: 0x10000ee8 Size: 24 bytes */
void FUN_10000ee8()

{

  ((void (*)())*puRam10115a80)();
  return;
}

/* Address: 0x10000f00 Size: 24 bytes */
void FUN_10000f00()

{

  ((void (*)())*puRam10115afc)();
  return;
}

/* Address: 0x10000f18 Size: 24 bytes */
void FUN_10000f18()

{

  ((void (*)())*puRam101154bc)();
  return;
}

/* Address: 0x10000f30 Size: 24 bytes */
void FUN_10000f30()

{

  ((void (*)())*puRam10115750)();
  return;
}

/* Address: 0x10000f48 Size: 24 bytes */
void FUN_10000f48()

{

  ((void (*)())*puRam10115210)();
  return;
}

/* Address: 0x10000f60 Size: 24 bytes */
void FUN_10000f60()

{

  ((void (*)())*puRam10115a4c)();
  return;
}

/* Address: 0x10000f78 Size: 24 bytes */
void FUN_10000f78()

{

  ((void (*)())*puRam101155a4)();
  return;
}

/* Address: 0x10000f90 Size: 24 bytes */
void FUN_10000f90()

{

  ((void (*)())*puRam1011528c)();
  return;
}

/* Address: 0x10000fc0 Size: 24 bytes */
void FUN_10000fc0()

{

  ((void (*)())*puRam10115a08)();
  return;
}

/* Address: 0x10000fd8 Size: 24 bytes */

void FUN_10000fd8()

{

  ((void (*)())*FUN_101159ec)();
  return;
}




































/* Address: 0x10000ff0 Size: 24 bytes */
void FUN_10000ff0()

{

  ((void (*)())*puRam10115324)();
  return;
}

/* Address: 0x10001008 Size: 24 bytes */
void FUN_10001008()

{

  ((void (*)())*puRam10115304)();
  return;
}

/* Address: 0x10001020 Size: 24 bytes */
void FUN_10001020()

{

  ((void (*)())*puRam10115a90)();
  return;
}

/* Address: 0x10001038 Size: 24 bytes */
void FUN_10001038()

{

  ((void (*)())*puRam1011523c)();
  return;
}

/* Address: 0x10001050 Size: 24 bytes */
void FUN_10001050()

{

  ((void (*)())*puRam101159d4)();
  return;
}

/* Address: 0x10001068 Size: 24 bytes */
void FUN_10001068()

{

  ((void (*)())*puRam10115410)();
  return;
}

/* Address: 0x10001080 Size: 24 bytes */
void FUN_10001080()

{

  ((void (*)())*puRam101159c8)();
  return;
}

/* Address: 0x10001098 Size: 24 bytes */
void FUN_10001098()

{

  ((void (*)())*puRam10115b40)();
  return;
}

/* Address: 0x100010b0 Size: 24 bytes */
void FUN_100010b0()

{

  ((void (*)())*puRam10115498)();
  return;
}

/* Address: 0x100010c8 Size: 24 bytes */
void FUN_100010c8()

{

  ((void (*)())*puRam101153d8)();
  return;
}

/* Address: 0x100010e0 Size: 24 bytes */

void FUN_100010e0()

{

  ((void (*)())*FUN_10115a00)();
  return;
}




































/* Address: 0x100010f8 Size: 24 bytes */
void FUN_100010f8()

{

  ((void (*)())*puRam10115478)();
  return;
}

/* Address: 0x10001110 Size: 24 bytes */
void FUN_10001110()

{

  ((void (*)())*puRam101155dc)();
  return;
}

/* Address: 0x10001128 Size: 24 bytes */
void FUN_10001128()

{

  ((void (*)())*puRam10115248)();
  return;
}

/* Address: 0x10001140 Size: 24 bytes */
void FUN_10001140()

{

  ((void (*)())*puRam1011524c)();
  return;
}

/* Address: 0x10001158 Size: 24 bytes */
void FUN_10001158()

{

  ((void (*)())*puRam10115280)();
  return;
}

/* Address: 0x10001188 Size: 24 bytes */
void FUN_10001188()

{

  ((void (*)())*puRam1011560c)();
  return;
}

/* Address: 0x100011a0 Size: 24 bytes */
void FUN_100011a0()

{

  ((void (*)())*puRam10115570)();
  return;
}

/* Address: 0x100011b8 Size: 24 bytes */
void FUN_100011b8()

{

  ((void (*)())*puRam10115294)();
  return;
}

/* Address: 0x100011d0 Size: 24 bytes */
void FUN_100011d0()

{

  ((void (*)())*puRam10115b28)();
  return;
}

/* Address: 0x100011e8 Size: 24 bytes */
void FUN_100011e8()

{

  ((void (*)())*puRam10115624)();
  return;
}

/* Address: 0x10001200 Size: 24 bytes */
void FUN_10001200()

{

  ((void (*)())*puRam10115620)();
  return;
}

/* Address: 0x10001218 Size: 24 bytes */
void FUN_10001218()

{

  ((void (*)())*puRam101155f8)();
  return;
}

/* Address: 0x10001230 Size: 24 bytes */
void FUN_10001230()

{

  ((void (*)())*puRam101157a8)();
  return;
}

/* Address: 0x10001248 Size: 24 bytes */
void FUN_10001248()

{

  ((void (*)())*puRam10115604)();
  return;
}

/* Address: 0x10001260 Size: 24 bytes */
void FUN_10001260()

{

  ((void (*)())*puRam10115700)();
  return;
}

/* Address: 0x10001278 Size: 24 bytes */
void FUN_10001278()

{

  ((void (*)())*puRam10115600)();
  return;
}

/* Address: 0x10001290 Size: 24 bytes */
int HLock_Thunk()

{

  ((void (*)())*puRam10115658)();
  return 0;
}

/* Address: 0x100012a8 Size: 24 bytes */
void FUN_100012a8()

{

  ((void (*)())*puRam10115698)();
  return;
}

/* Address: 0x10001308 Size: 24 bytes */
void FUN_10001308()

{

  ((void (*)())*puRam101158a4)();
  return;
}

/* Address: 0x10001320 Size: 24 bytes */
void FUN_10001320()

{

  ((void (*)())*puRam101151d8)();
  return;
}

/* Address: 0x10001350 Size: 24 bytes */
void FUN_10001350()

{

  ((void (*)())*puRam101158b8)();
  return;
}

/* Address: 0x10001368 Size: 24 bytes */
void FUN_10001368()

{

  ((void (*)())*puRam101158a0)();
  return;
}

/* Address: 0x10001380 Size: 24 bytes */
void FUN_10001380()

{

  ((void (*)())*puRam10115370)();
  return;
}

/* Address: 0x10001398 Size: 24 bytes */
void FUN_10001398()

{

  ((void (*)())*puRam10115310)();
  return;
}

/* Address: 0x100014e8 Size: 24 bytes */
void FUN_100014e8()

{

  ((void (*)())*puRam10115870)();
  return;
}

/* Address: 0x10001500 Size: 24 bytes */
void FUN_10001500()

{

  ((void (*)())*puRam101155c0)();
  return;
}

/* Address: 0x10001518 Size: 24 bytes */
void FUN_10001518()

{

  ((void (*)())*puRam101154a4)();
  return;
}

/* Address: 0x10001530 Size: 24 bytes */
void FUN_10001530()

{

  ((void (*)())*puRam101154f4)();
  return;
}

/* Address: 0x10001548 Size: 24 bytes */
void FUN_10001548()

{

  ((void (*)())*puRam1011567c)();
  return;
}

/* Address: 0x10001560 Size: 24 bytes */
void FUN_10001560()

{

  ((void (*)())*puRam1011564c)();
  return;
}

/* Address: 0x10001578 Size: 24 bytes */
void FUN_10001578()

{

  ((void (*)())*puRam10115404)();
  return;
}

/* Address: 0x100015c0 Size: 24 bytes */
void FUN_100015c0()

{

  ((void (*)())*puRam1011547c)();
  return;
}

/* Address: 0x100015d8 Size: 24 bytes */
void FUN_100015d8()

{

  ((void (*)())*puRam10115960)();
  return;
}

/* Address: 0x100015f0 Size: 24 bytes */
void FUN_100015f0()

{

  ((void (*)())*puRam10115910)();
  return;
}

/* Address: 0x10001608 Size: 24 bytes */
void FUN_10001608()

{

  ((void (*)())*puRam10115954)();
  return;
}

/* Address: 0x10001620 Size: 24 bytes */
void FUN_10001620()

{

  ((void (*)())*puRam10115914)();
  return;
}

/* Address: 0x10001650 Size: 24 bytes */
void FUN_10001650()

{

  ((void (*)())*puRam101155f4)();
  return;
}

/* Address: 0x10001668 Size: 24 bytes */
void FUN_10001668()

{

  ((void (*)())*puRam10115344)();
  return;
}

/* Address: 0x100016c8 Size: 24 bytes */
void FUN_100016c8()

{

  ((void (*)())*puRam10115b44)();
  return;
}

/* Address: 0x100016e0 Size: 24 bytes */
void FUN_100016e0()

{

  ((void (*)())*puRam10115890)();
  return;
}

/* Address: 0x10001710 Size: 24 bytes */
void FUN_10001710()

{

  ((void (*)())*puRam10115a54)();
  return;
}

/* Address: 0x10001740 Size: 24 bytes */
void FUN_10001740()

{

  ((void (*)())*puRam1011588c)();
  return;
}

/* Address: 0x10001770 Size: 24 bytes */
void FUN_10001770()

{

  ((void (*)())*puRam10115594)();
  return;
}

/* Address: 0x100017a0 Size: 24 bytes */
void FUN_100017a0()

{

  ((void (*)())*puRam10115b1c)();
  return;
}

/* Address: 0x100017b8 Size: 24 bytes */
void FUN_100017b8()

{

  ((void (*)())*puRam101157d4)();
  return;
}

/* Address: 0x100017d0 Size: 24 bytes */
void FUN_100017d0()

{

  ((void (*)())*puRam1011527c)();
  return;
}

/* Address: 0x100017e8 Size: 24 bytes */
void FUN_100017e8()

{

  ((void (*)())*puRam101154e0)();
  return;
}

/* Address: 0x10001800 Size: 24 bytes */
void FUN_10001800()

{

  ((void (*)())*puRam101152b8)();
  return;
}

/* Address: 0x10001830 Size: 24 bytes */
void FUN_10001830()

{

  ((void (*)())*puRam101152bc)();
  return;
}

/* Address: 0x10001848 Size: 24 bytes */
void FUN_10001848()

{

  ((void (*)())*puRam101154e8)();
  return;
}

/* Address: 0x10001878 Size: 24 bytes */
void FUN_10001878()

{

  ((void (*)())*puRam10115a38)();
  return;
}

/* Address: 0x10001890 Size: 24 bytes */
void FUN_10001890()

{

  ((void (*)())*puRam101154ec)();
  return;
}

/* Address: 0x100018d8 Size: 24 bytes */
void FUN_100018d8()

{

  ((void (*)())*puRam101154f0)();
  return;
}

/* Address: 0x10001938 Size: 24 bytes */
void FUN_10001938()

{

  ((void (*)())*puRam101151f8)();
  return;
}

/* Address: 0x10001950 Size: 24 bytes */
void FUN_10001950()

{

  ((void (*)())*puRam1011533c)();
  return;
}

/* Address: 0x10001968 Size: 24 bytes */
void FUN_10001968()

{

  ((void (*)())*puRam10115a48)();
  return;
}

/* Address: 0x10001980 Size: 24 bytes */
void FUN_10001980()

{

  ((void (*)())*puRam10115a50)();
  return;
}

/* Address: 0x10001998 Size: 24 bytes */
void FUN_10001998()

{

  ((void (*)())*puRam10115b5c)();
  return;
}

/* Address: 0x100019c8 Size: 24 bytes */
void FUN_100019c8()

{

  ((void (*)())*puRam10115768)();
  return;
}

/* Address: 0x100019e0 Size: 24 bytes */
void FUN_100019e0()

{

  ((void (*)())*puRam101156e8)();
  return;
}

/* Address: 0x10001a10 Size: 24 bytes */
void FUN_10001a10()

{

  ((void (*)())*puRam101154fc)();
  return;
}

/* Address: 0x10001a28 Size: 24 bytes */
void FUN_10001a28()

{

  ((void (*)())*puRam101154c0)();
  return;
}

/* Address: 0x10001a40 Size: 24 bytes */
void FUN_10001a40()

{

  ((void (*)())*puRam101155bc)();
  return;
}

/* Address: 0x10001a58 Size: 24 bytes */
void FUN_10001a58()

{

  ((void (*)())*puRam10115a3c)();
  return;
}

/* Address: 0x10001a70 Size: 24 bytes */
void FUN_10001a70()

{

  ((void (*)())*puRam10115708)();
  return;
}

/* Address: 0x10001aa0 Size: 24 bytes */
void FUN_10001aa0()

{

  ((void (*)())*puRam101154cc)();
  return;
}

/* Address: 0x10001ab8 Size: 24 bytes */
void FUN_10001ab8()

{

  ((void (*)())*puRam101154f8)();
  return;
}

/* Address: 0x10001ae8 Size: 24 bytes */
void FUN_10001ae8()

{

  ((void (*)())*puRam10115978)();
  return;
}

/* Address: 0x10001b18 Size: 24 bytes */
void FUN_10001b18()

{

  ((void (*)())*puRam10115808)();
  return;
}

/* Address: 0x10001b48 Size: 24 bytes */
void FUN_10001b48()

{

  ((void (*)())*puRam1011550c)();
  return;
}

/* Address: 0x10001b78 Size: 24 bytes */
void FUN_10001b78()

{

  ((void (*)())*puRam10115944)();
  return;
}

/* Address: 0x10001b90 Size: 24 bytes */
void FUN_10001b90()

{

  ((void (*)())*puRam10115990)();
  return;
}

/* Address: 0x10001ba8 Size: 24 bytes */
void FUN_10001ba8()

{

  ((void (*)())*puRam10115ac4)();
  return;
}

/* Address: 0x10001bc0 Size: 24 bytes */
void FUN_10001bc0()

{

  ((void (*)())*puRam101158fc)();
  return;
}

/* Address: 0x10001bf0 Size: 24 bytes */
void FUN_10001bf0()

{

  ((void (*)())*puRam10115674)();
  return;
}

/* Address: 0x10001c08 Size: 24 bytes */
void FUN_10001c08()

{

  ((void (*)())*puRam1011544c)();
  return;
}

/* Address: 0x10001c38 Size: 24 bytes */
void FUN_10001c38()

{

  ((void (*)())*puRam10115a9c)();
  return;
}

/* Address: 0x10001c50 Size: 24 bytes */
void FUN_10001c50()

{

  ((void (*)())*puRam1011543c)();
  return;
}

/* Address: 0x10001c68 Size: 24 bytes */
void FUN_10001c68()

{

  ((void (*)())*puRam10115824)();
  return;
}

/* Address: 0x10001c80 Size: 24 bytes */
void FUN_10001c80()

{

  ((void (*)())*puRam1011582c)();
  return;
}

/* Address: 0x10001cb0 Size: 24 bytes */
void FUN_10001cb0()

{

  ((void (*)())*puRam10115448)();
  return;
}

/* Address: 0x10001cc8 Size: 24 bytes */
void FUN_10001cc8()

{

  ((void (*)())*puRam10115580)();
  return;
}

/* Address: 0x10001ce0 Size: 24 bytes */
void FUN_10001ce0()

{

  ((void (*)())*puRam10115554)();
  return;
}

/* Address: 0x10001cf8 Size: 24 bytes */
int FUN_10001cf8()

{

  ((void (*)())*puRam10115534)();
  return 0;
}

/* Address: 0x10001d10 Size: 24 bytes */
void FUN_10001d10()

{

  ((void (*)())*puRam10115438)();
  return;
}

/* Address: 0x10001d40 Size: 24 bytes */
void FUN_10001d40()

{

  ((void (*)())*puRam10115ab0)();
  return;
}

/* Address: 0x10001d88 Size: 24 bytes */
void FUN_10001d88()

{

  ((void (*)())*puRam101156bc)();
  return;
}

/* Address: 0x10001da0 Size: 24 bytes */
void FUN_10001da0()

{

  ((void (*)())*puRam101156d8)();
  return;
}

/* Address: 0x10001db8 Size: 24 bytes */
void FUN_10001db8()

{

  ((void (*)())*puRam10115468)();
  return;
}

/* Address: 0x10001de8 Size: 24 bytes */
void FUN_10001de8()

{

  ((void (*)())*puRam10115b0c)();
  return;
}

/* Address: 0x10001e00 Size: 24 bytes */
void FUN_10001e00()

{

  ((void (*)())*puRam10115464)();
  return;
}

/* Address: 0x10001e18 Size: 24 bytes */
void FUN_10001e18()

{

  ((void (*)())*puRam10115b18)();
  return;
}

/* Address: 0x10001e30 Size: 24 bytes */
void FUN_10001e30()

{

  ((void (*)())*puRam10115704)();
  return;
}

/* Address: 0x10001e48 Size: 24 bytes */
void FUN_10001e48()

{

  ((void (*)())*puRam10115680)();
  return;
}

/* Address: 0x10001e60 Size: 24 bytes */
void FUN_10001e60()

{

  ((void (*)())*puRam10115734)();
  return;
}

/* Address: 0x10001ea8 Size: 24 bytes */
void FUN_10001ea8()

{

  ((void (*)())*puRam1011596c)();
  return;
}

/* Address: 0x10001ec0 Size: 24 bytes */
void FUN_10001ec0()

{

  ((void (*)())*puRam1011571c)();
  return;
}

/* Address: 0x10001ed8 Size: 24 bytes */
void FUN_10001ed8()

{

  ((void (*)())*puRam10115654)();
  return;
}

/* Address: 0x10001ef0 Size: 24 bytes */
void FUN_10001ef0()

{

  ((void (*)())*puRam10115a94)();
  return;
}

/* Address: 0x10001f08 Size: 24 bytes */
void FUN_10001f08()

{

  ((void (*)())*puRam101157dc)();
  return;
}

/* Address: 0x10001f20 Size: 24 bytes */
void FUN_10001f20()

{

  ((void (*)())*puRam101157d8)();
  return;
}

/* Address: 0x10001f38 Size: 24 bytes */
void FUN_10001f38()

{

  ((void (*)())*puRam101157c0)();
  return;
}

/* Address: 0x10001f68 Size: 24 bytes */
void FUN_10001f68()

{

  ((void (*)())*puRam101157b8)();
  return;
}

/* Address: 0x10001f80 Size: 24 bytes */
void FUN_10001f80()

{

  ((void (*)())*puRam1011598c)();
  return;
}

/* Address: 0x10001fb0 Size: 24 bytes */
void FUN_10001fb0()

{

  ((void (*)())*puRam10115730)();
  return;
}

/* Address: 0x10001fc8 Size: 24 bytes */
void FUN_10001fc8()

{

  ((void (*)())*puRam10115528)();
  return;
}

/* Address: 0x10001fe0 Size: 24 bytes */
void FUN_10001fe0()

{

  ((void (*)())*puRam10115428)();
  return;
}

/* Address: 0x10001ff8 Size: 24 bytes */
void FUN_10001ff8()

{

  ((void (*)())*puRam10115458)();
  return;
}

/* Address: 0x10002010 Size: 24 bytes */
void FUN_10002010()

{

  ((void (*)())*puRam1011545c)();
  return;
}

/* Address: 0x10002028 Size: 24 bytes */
void FUN_10002028()

{

  ((void (*)())*puRam10115678)();
  return;
}

/* Address: 0x10002040 Size: 24 bytes */
void FUN_10002040()

{

  ((void (*)())*puRam10115684)();
  return;
}

/* Address: 0x10002058 Size: 24 bytes */
void FUN_10002058()

{

  ((void (*)())*puRam101154c8)();
  return;
}

/* Address: 0x10002070 Size: 24 bytes */
void FUN_10002070()

{

  ((void (*)())*puRam10115388)();
  return;
}

/* Address: 0x10002088 Size: 24 bytes */
void FUN_10002088()

{

  ((void (*)())*puRam10115598)();
  return;
}

/* Address: 0x100020a0 Size: 24 bytes */
void FUN_100020a0()

{

  ((void (*)())*puRam10115ac8)();
  return;
}

/* Address: 0x100020b8 Size: 24 bytes */
void FUN_100020b8()

{

  ((void (*)())*puRam10115970)();
  return;
}

/* Address: 0x100020e8 Size: 24 bytes */
void FUN_100020e8()

{

  ((void (*)())*puRam101159e8)();
  return;
}

/* Address: 0x10002118 Size: 24 bytes */
void FUN_10002118()

{

  ((void (*)())*puRam101156b0)();
  return;
}

/* Address: 0x10002130 Size: 24 bytes */
void FUN_10002130()

{

  ((void (*)())*puRam101156ac)();
  return;
}

/* Address: 0x10002160 Size: 24 bytes */
void FUN_10002160()

{

  ((void (*)())*puRam101158c4)();
  return;
}

/* Address: 0x10002190 Size: 24 bytes */
void FUN_10002190()

{

  ((void (*)())*puRam10115368)();
  return;
}

/* Address: 0x100021a8 Size: 24 bytes */
void FUN_100021a8()

{

  ((void (*)())*puRam101151ec)();
  return;
}

/* Address: 0x100021d8 Size: 24 bytes */
void FUN_100021d8()

{

  ((void (*)())*puRam101156cc)();
  return;
}

/* Address: 0x10002208 Size: 24 bytes */
void FUN_10002208()

{

  ((void (*)())*puRam10115788)();
  return;
}

/* Address: 0x10002220 Size: 24 bytes */
void FUN_10002220()

{

  ((void (*)())*puRam10115b54)();
  return;
}

/* Address: 0x10002250 Size: 24 bytes */
void FUN_10002250()

{

  ((void (*)())*puRam1011535c)();
  return;
}

/* Address: 0x10002268 Size: 24 bytes */
void FUN_10002268()

{

  ((void (*)())*puRam10115934)();
  return;
}

/* Address: 0x10002280 Size: 24 bytes */
void FUN_10002280()

{

  ((void (*)())*puRam10115aa8)();
  return;
}

/* Address: 0x10002298 Size: 24 bytes */
void FUN_10002298()

{

  ((void (*)())*puRam1011589c)();
  return;
}

/* Address: 0x100022b0 Size: 24 bytes */
void FUN_100022b0()

{

  ((void (*)())*puRam10115984)();
  return;
}

/* Address: 0x100022c8 Size: 24 bytes */
void FUN_100022c8()

{

  ((void (*)())*puRam101155a8)();
  return;
}

/* Address: 0x100022e0 Size: 24 bytes */
void FUN_100022e0()

{

  ((void (*)())*puRam10115234)();
  return;
}

/* Address: 0x100022f8 Size: 24 bytes */
void FUN_100022f8()

{

  ((void (*)())*puRam1011552c)();
  return;
}

/* Address: 0x10002310 Size: 24 bytes */
void FUN_10002310()

{

  ((void (*)())*puRam10115aec)();
  return;
}

/* Address: 0x10002328 Size: 24 bytes */
void FUN_10002328()

{

  ((void (*)())*puRam10115520)();
  return;
}

/* Address: 0x10002370 Size: 24 bytes */
void FUN_10002370()

{

  ((void (*)())*puRam101159f4)();
  return;
}

/* Address: 0x10002388 Size: 24 bytes */
void FUN_10002388()

{

  ((void (*)())*puRam10115424)();
  return;
}

/* Address: 0x100023a0 Size: 24 bytes */
void FUN_100023a0()

{

  ((void (*)())*puRam101152c0)();
  return;
}

/* Address: 0x100023b8 Size: 24 bytes */
void FUN_100023b8()

{

  ((void (*)())*puRam10115b74)();
  return;
}

/* Address: 0x100023d0 Size: 24 bytes */
void FUN_100023d0()

{

  ((void (*)())*puRam10115828)();
  return;
}

/* Address: 0x100023e8 Size: 24 bytes */
void FUN_100023e8()

{

  ((void (*)())*puRam10115830)();
  return;
}

/* Address: 0x10002418 Size: 24 bytes */
void FUN_10002418()

{

  ((void (*)())*puRam101153ec)();
  return;
}

/* Address: 0x10002430 Size: 24 bytes */
void FUN_10002430()

{

  ((void (*)())*puRam101159e4)();
  return;
}

/* Address: 0x10002448 Size: 24 bytes */
void FUN_10002448()

{

  ((void (*)())*puRam101159d8)();
  return;
}

/* Address: 0x10002460 Size: 24 bytes */
void FUN_10002460()

{

  ((void (*)())*puRam101159b8)();
  return;
}

/* Address: 0x10002478 Size: 24 bytes */
void FUN_10002478()

{

  ((void (*)())*puRam10115a1c)();
  return;
}

/* Address: 0x10002490 Size: 24 bytes */
void FUN_10002490()

{

  ((void (*)())*puRam1011531c)();
  return;
}

/* Address: 0x100024a8 Size: 24 bytes */
void FUN_100024a8()

{

  ((void (*)())*puRam10115a60)();
  return;
}

/* Address: 0x100024c0 Size: 24 bytes */
void FUN_100024c0()

{

  ((void (*)())*puRam10115a58)();
  return;
}

/* Address: 0x100024d8 Size: 24 bytes */
void FUN_100024d8()

{

  ((void (*)())*puRam10115a5c)();
  return;
}

/* Address: 0x100024f0 Size: 24 bytes */
void FUN_100024f0()

{

  ((void (*)())*puRam1011559c)();
  return;
}

/* Address: 0x10002508 Size: 24 bytes */
void FUN_10002508()

{

  ((void (*)())*puRam10115694)();
  return;
}

/* Address: 0x10002538 Size: 24 bytes */

void FUN_10002538()

{

  ((void (*)())*FUN_10115a68)();
  return;
}




































/* Address: 0x10002550 Size: 24 bytes */
void FUN_10002550()

{

  ((void (*)())*puRam101159b4)();
  return;
}

/* Address: 0x10002580 Size: 24 bytes */
void FUN_10002580()

{

  ((void (*)())*puRam101151f4)();
  return;
}

/* Address: 0x100025c8 Size: 24 bytes */
void FUN_100025c8()

{

  ((void (*)())*puRam1011522c)();
  return;
}

/* Address: 0x100025e0 Size: 24 bytes */
void FUN_100025e0()

{

  ((void (*)())*puRam10115994)();
  return;
}

/* Address: 0x100025f8 Size: 24 bytes */
void FUN_100025f8()

{

  ((void (*)())*puRam10115340)();
  return;
}

/* Address: 0x10002610 Size: 24 bytes */
void FUN_10002610()

{

  ((void (*)())*puRam10115240)();
  return;
}

/* Address: 0x10002628 Size: 24 bytes */
void FUN_10002628()

{

  ((void (*)())*puRam10115a28)();
  return;
}

/* Address: 0x10002640 Size: 24 bytes */
void FUN_10002640()

{

  ((void (*)())*puRam1011597c)();
  return;
}

/* Address: 0x10002658 Size: 24 bytes */
void FUN_10002658()

{

  ((void (*)())*puRam101158ac)();
  return;
}

/* Address: 0x10002670 Size: 24 bytes */
void FUN_10002670()

{

  ((void (*)())*puRam101154b0)();
  return;
}

/* Address: 0x10002688 Size: 24 bytes */
void FUN_10002688()

{

  ((void (*)())*puRam10115a40)();
  return;
}

/* Address: 0x100026a0 Size: 24 bytes */
void FUN_100026a0()

{

  ((void (*)())*puRam1011593c)();
  return;
}

/* Address: 0x100026e8 Size: 24 bytes */
void FUN_100026e8()

{

  ((void (*)())*puRam10115940)();
  return;
}

/* Address: 0x10002700 Size: 24 bytes */
void FUN_10002700()

{

  ((void (*)())*puRam101158f4)();
  return;
}

/* Address: 0x10002718 Size: 24 bytes */
void FUN_10002718()

{

  ((void (*)())*puRam10115854)();
  return;
}

/* Address: 0x10002730 Size: 24 bytes */
void FUN_10002730()

{

  ((void (*)())*puRam1011548c)();
  return;
}

/* Address: 0x10002748 Size: 24 bytes */
void FUN_10002748()

{

  ((void (*)())*puRam10115964)();
  return;
}

/* Address: 0x10002760 Size: 24 bytes */
void FUN_10002760()

{

  ((void (*)())*puRam10115618)();
  return;
}

/* Address: 0x10002778 Size: 24 bytes */
void FUN_10002778()

{

  ((void (*)())*puRam1011555c)();
  return;
}

/* Address: 0x100027a8 Size: 24 bytes */
void FUN_100027a8()

{

  ((void (*)())*puRam10115908)();
  return;
}

/* Address: 0x100027c0 Size: 24 bytes */
void FUN_100027c0()

{

  ((void (*)())*puRam1011591c)();
  return;
}

/* Address: 0x100027d8 Size: 24 bytes */
void FUN_100027d8()

{

  ((void (*)())*puRam10115904)();
  return;
}

/* Address: 0x100027f0 Size: 24 bytes */
void FUN_100027f0()

{

  ((void (*)())*puRam10115924)();
  return;
}

/* Address: 0x10002808 Size: 24 bytes */
void FUN_10002808()

{

  ((void (*)())*puRam1011546c)();
  return;
}

/* Address: 0x10002820 Size: 24 bytes */
void FUN_10002820()

{

  ((void (*)())*puRam101157c4)();
  return;
}

/* Address: 0x10002838 Size: 24 bytes */
void FUN_10002838()

{

  ((void (*)())*puRam10115284)();
  return;
}

/* Address: 0x10002850 Size: 24 bytes */
void FUN_10002850()

{

  ((void (*)())*puRam101157b0)();
  return;
}

/* Address: 0x10002868 Size: 24 bytes */
void FUN_10002868()

{

  ((void (*)())*puRam10115b30)();
  return;
}

/* Address: 0x10002880 Size: 24 bytes */
void FUN_10002880()

{

  ((void (*)())*puRam10115220)();
  return;
}

/* Address: 0x10002898 Size: 24 bytes */
void FUN_10002898()

{

  ((void (*)())*puRam10115224)();
  return;
}

/* Address: 0x100028b0 Size: 24 bytes */
void FUN_100028b0()

{

  ((void (*)())*puRam1011526c)();
  return;
}

/* Address: 0x100028c8 Size: 24 bytes */
void FUN_100028c8()

{

  ((void (*)())*puRam101156c8)();
  return;
}

/* Address: 0x100028e0 Size: 24 bytes */
void FUN_100028e0()

{

  ((void (*)())*puRam10115b58)();
  return;
}

/* Address: 0x100028f8 Size: 24 bytes */
void FUN_100028f8()

{

  ((void (*)())*puRam1011536c)();
  return;
}

/* Address: 0x10002910 Size: 24 bytes */
void FUN_10002910()

{

  ((void (*)())*puRam10115508)();
  return;
}

/* Address: 0x10002928 Size: 24 bytes */
void FUN_10002928()

{

  ((void (*)())*puRam10115288)();
  return;
}

/* Address: 0x10002940 Size: 24 bytes */
void FUN_10002940()

{

  ((void (*)())*puRam1011569c)();
  return;
}

/* Address: 0x10002958 Size: 24 bytes */
void FUN_10002958()

{

  ((void (*)())*puRam10115338)();
  return;
}

/* Address: 0x10002988 Size: 24 bytes */
void FUN_10002988()

{

  ((void (*)())*puRam10115290)();
  return;
}

/* Address: 0x100029a0 Size: 24 bytes */
void FUN_100029a0()

{

  ((void (*)())*puRam10115274)();
  return;
}

/* Address: 0x100029b8 Size: 24 bytes */
void FUN_100029b8()

{

  ((void (*)())*puRam10115610)();
  return;
}

/* Address: 0x100029d0 Size: 24 bytes */
void FUN_100029d0()

{

  ((void (*)())*puRam10115a98)();
  return;
}

/* Address: 0x100029e8 Size: 24 bytes */
void FUN_100029e8()

{

  ((void (*)())*puRam1011590c)();
  return;
}

/* Address: 0x10002a18 Size: 24 bytes */
void FUN_10002a18()

{

  ((void (*)())*puRam10115a14)();
  return;
}

/* Address: 0x10002a30 Size: 24 bytes */
void FUN_10002a30()

{

  ((void (*)())*puRam101158e8)();
  return;
}

/* Address: 0x10002a48 Size: 24 bytes */
void FUN_10002a48()

{

  ((void (*)())*puRam101159fc)();
  return;
}

/* Address: 0x10002a78 Size: 24 bytes */
void FUN_10002a78()

{

  ((void (*)())*puRam10115394)();
  return;
}

/* Address: 0x10002a90 Size: 24 bytes */
void FUN_10002a90()

{

  ((void (*)())*puRam1011592c)();
  return;
}

/* Address: 0x10002aa8 Size: 24 bytes */
void FUN_10002aa8()

{

  ((void (*)())*puRam10115918)();
  return;
}

/* Address: 0x10002ac0 Size: 24 bytes */
void FUN_10002ac0()

{

  ((void (*)())*puRam101157ac)();
  return;
}

/* Address: 0x10002ad8 Size: 24 bytes */
void FUN_10002ad8()

{

  ((void (*)())*puRam1011553c)();
  return;
}

/* Address: 0x10002af0 Size: 24 bytes */
void FUN_10002af0()

{

  ((void (*)())*puRam10115318)();
  return;
}

/* Address: 0x10002b08 Size: 24 bytes */
void FUN_10002b08()

{

  ((void (*)())*puRam10115500)();
  return;
}

/* Address: 0x10002b20 Size: 24 bytes */
void FUN_10002b20()

{

  ((void (*)())*puRam10115af4)();
  return;
}

/* Address: 0x10002b38 Size: 24 bytes */
void FUN_10002b38()

{

  ((void (*)())*puRam10115670)();
  return;
}

/* Address: 0x10002b50 Size: 24 bytes */
void FUN_10002b50()

{

  ((void (*)())*puRam10115b20)();
  return;
}

/* Address: 0x10002b68 Size: 24 bytes */
void FUN_10002b68()

{

  ((void (*)())*puRam10115884)();
  return;
}

/* Address: 0x10002b80 Size: 24 bytes */
void FUN_10002b80()

{

  ((void (*)())*puRam10115a8c)();
  return;
}

/* Address: 0x10002b98 Size: 24 bytes */
void FUN_10002b98()

{

  ((void (*)())*puRam10115a88)();
  return;
}

/* Address: 0x10002bb0 Size: 24 bytes */
void FUN_10002bb0()

{

  ((void (*)())*puRam101155d4)();
  return;
}

/* Address: 0x10002bc8 Size: 24 bytes */
void FUN_10002bc8()

{

  ((void (*)())*puRam101152f4)();
  return;
}

/* Address: 0x10002be0 Size: 24 bytes */
void FUN_10002be0()

{

  ((void (*)())*puRam10115724)();
  return;
}

/* Address: 0x10002bf8 Size: 24 bytes */

void FUN_10002bf8()

{

  ((void (*)())*FUN_101159dc)();
  return;
}




































/* Address: 0x10002c10 Size: 24 bytes */
void FUN_10002c10()

{

  ((void (*)())*puRam10115648)();
  return;
}

/* Address: 0x10002c28 Size: 24 bytes */
void FUN_10002c28()

{

  ((void (*)())*puRam1011558c)();
  return;
}

/* Address: 0x10002c40 Size: 24 bytes */
void FUN_10002c40()

{

  ((void (*)())*puRam101151dc)();
  return;
}

/* Address: 0x10002c70 Size: 24 bytes */
void FUN_10002c70()

{

  ((void (*)())*puRam10115490)();
  return;
}

/* Address: 0x10002c88 Size: 24 bytes */
void FUN_10002c88()

{

  ((void (*)())*puRam101158b0)();
  return;
}

/* Address: 0x10002ca0 Size: 24 bytes */
void FUN_10002ca0()

{

  ((void (*)())*puRam101154b8)();
  return;
}

/* Address: 0x10002cb8 Size: 24 bytes */
void FUN_10002cb8()

{

  ((void (*)())*puRam10115650)();
  return;
}

/* Address: 0x10002cd0 Size: 24 bytes */
void FUN_10002cd0()

{

  ((void (*)())*puRam101156f0)();
  return;
}

/* Address: 0x10002d18 Size: 24 bytes */
void FUN_10002d18()

{

  ((void (*)())*puRam10115a44)();
  return;
}

/* Address: 0x10002d30 Size: 24 bytes */
void FUN_10002d30()

{

  ((void (*)())*puRam101152b0)();
  return;
}

/* Address: 0x10002d78 Size: 24 bytes */
void FUN_10002d78()

{

  ((void (*)())*puRam101154e4)();
  return;
}

/* Address: 0x10002d90 Size: 24 bytes */
void FUN_10002d90()

{

  ((void (*)())*puRam10115260)();
  return;
}

/* Address: 0x10002da8 Size: 24 bytes */
void FUN_10002da8()

{

  ((void (*)())*puRam10115784)();
  return;
}

/* Address: 0x10002dc0 Size: 24 bytes */
void FUN_10002dc0()

{

  ((void (*)())*puRam101159d0)();
  return;
}

/* Address: 0x10002dd8 Size: 24 bytes */
void FUN_10002dd8()

{

  ((void (*)())*puRam101159c4)();
  return;
}

/* Address: 0x10002df0 Size: 24 bytes */
void FUN_10002df0()

{

  ((void (*)())*puRam10115a20)();
  return;
}

/* Address: 0x10002e08 Size: 24 bytes */
void FUN_10002e08()

{

  ((void (*)())*puRam10115b6c)();
  return;
}

/* Address: 0x10002e20 Size: 24 bytes */
void FUN_10002e20()

{

  ((void (*)())*puRam101154dc)();
  return;
}

/* Address: 0x10002e38 Size: 24 bytes */
void FUN_10002e38()

{

  ((void (*)())*puRam10115738)();
  return;
}

/* Address: 0x10002e68 Size: 24 bytes */
void FUN_10002e68()

{

  ((void (*)())*puRam101155b8)();
  return;
}

/* Address: 0x10002e80 Size: 24 bytes */
void FUN_10002e80()

{

  ((void (*)())*puRam101152a8)();
  return;
}

/* Address: 0x10002e98 Size: 24 bytes */
void FUN_10002e98()

{

  ((void (*)())*puRam10115774)();
  return;
}

/* Address: 0x10002ec8 Size: 24 bytes */
void FUN_10002ec8()

{

  ((void (*)())*puRam101154d4)();
  return;
}

/* Address: 0x10002ee0 Size: 24 bytes */
void FUN_10002ee0()

{

  ((void (*)())*puRam101158b4)();
  return;
}

/* Address: 0x10002ef8 Size: 24 bytes */
void FUN_10002ef8()

{

  ((void (*)())*puRam10115384)();
  return;
}

/* Address: 0x10002f10 Size: 24 bytes */
void FUN_10002f10()

{

  ((void (*)())*puRam101153a4)();
  return;
}

/* Address: 0x10002f28 Size: 24 bytes */
void FUN_10002f28()

{

  ((void (*)())*puRam10115588)();
  return;
}

/* Address: 0x10002f40 Size: 24 bytes */
void FUN_10002f40()

{

  ((void (*)())*puRam101153fc)();
  return;
}

/* Address: 0x10002f58 Size: 24 bytes */
void FUN_10002f58()

{

  ((void (*)())*puRam101155e8)();
  return;
}

/* Address: 0x10002f70 Size: 24 bytes */
void FUN_10002f70()

{

  ((void (*)())*puRam10115a0c)();
  return;
}

/* Address: 0x10002f88 Size: 24 bytes */
void FUN_10002f88()

{

  ((void (*)())*puRam10115320)();
  return;
}

/* Address: 0x10002fa0 Size: 24 bytes */
void FUN_10002fa0()

{

  ((void (*)())*puRam10115300)();
  return;
}

/* Address: 0x10002fb8 Size: 24 bytes */
void FUN_10002fb8()

{

  ((void (*)())*puRam10115548)();
  return;
}

/* Address: 0x10002fd0 Size: 24 bytes */
void FUN_10002fd0()

{

  ((void (*)())*puRam1011576c)();
  return;
}

/* Address: 0x10002fe8 Size: 24 bytes */
void FUN_10002fe8()

{

  ((void (*)())*puRam101153f8)();
  return;
}

/* Address: 0x10003000 Size: 24 bytes */
void FUN_10003000()

{

  ((void (*)())*puRam101159cc)();
  return;
}

/* Address: 0x10003030 Size: 24 bytes */
void FUN_10003030()

{

  ((void (*)())*puRam10115ac0)();
  return;
}

/* Address: 0x10003048 Size: 24 bytes */
void FUN_10003048()

{

  ((void (*)())*puRam101159c0)();
  return;
}

/* Address: 0x10003060 Size: 24 bytes */
void FUN_10003060()

{

  ((void (*)())*puRam10115728)();
  return;
}

/* Address: 0x10003078 Size: 24 bytes */
void FUN_10003078()

{

  ((void (*)())*puRam10115898)();
  return;
}

/* Address: 0x10003090 Size: 24 bytes */
void FUN_10003090()

{

  ((void (*)())*puRam101151fc)();
  return;
}

/* Address: 0x100030a8 Size: 24 bytes */
void FUN_100030a8()

{

  ((void (*)())*puRam10115850)();
  return;
}

/* Address: 0x100030c0 Size: 24 bytes */
void FUN_100030c0()

{

  ((void (*)())*puRam101157e4)();
  return;
}

/* Address: 0x100030d8 Size: 24 bytes */
void FUN_100030d8()

{

  ((void (*)())*puRam101158f8)();
  return;
}

/* Address: 0x100030f0 Size: 24 bytes */
void FUN_100030f0()

{

  ((void (*)())*puRam10115214)();
  return;
}

/* Address: 0x10003108 Size: 24 bytes */
void FUN_10003108()

{

  ((void (*)())*puRam10115b2c)();
  return;
}

/* Address: 0x10003120 Size: 24 bytes */
void FUN_10003120()

{

  ((void (*)())*puRam10115ae0)();
  return;
}

/* Address: 0x10003138 Size: 24 bytes */
void FUN_10003138()

{

  ((void (*)())*puRam101155b0)();
  return;
}

/* Address: 0x10003150 Size: 24 bytes */
void FUN_10003150()

{

  ((void (*)())*puRam10115718)();
  return;
}

/* Address: 0x10003168 Size: 24 bytes */
void FUN_10003168()

{

  ((void (*)())*puRam10115414)();
  return;
}

/* Address: 0x10003180 Size: 24 bytes */
void FUN_10003180()

{

  ((void (*)())*puRam101159bc)();
  return;
}

/* Address: 0x10003198 Size: 24 bytes */
void FUN_10003198()

{

  ((void (*)())*puRam10115634)();
  return;
}

/* Address: 0x100031b0 Size: 24 bytes */
void FUN_100031b0()

{

  ((void (*)())*puRam101156a8)();
  return;
}

/* Address: 0x100031c8 Size: 24 bytes */
void FUN_100031c8()

{

  ((void (*)())*puRam10115b00)();
  return;
}

/* Address: 0x100031e0 Size: 24 bytes */
void FUN_100031e0()

{

  ((void (*)())*puRam10115aac)();
  return;
}

/* Address: 0x100031f8 Size: 24 bytes */
void FUN_100031f8()

{

  ((void (*)())*puRam10115510)();
  return;
}

/* Address: 0x10003210 Size: 24 bytes */
void FUN_10003210()

{

  ((void (*)())*puRam101155fc)();
  return;
}

/* Address: 0x10003240 Size: 24 bytes */
void FUN_10003240()

{

  ((void (*)())*puRam1011537c)();
  return;
}

/* Address: 0x10003258 Size: 24 bytes */
void FUN_10003258()

{

  ((void (*)())*puRam10115400)();
  return;
}

/* Address: 0x10003288 Size: 24 bytes */
void FUN_10003288()

{

  ((void (*)())*puRam10115440)();
  return;
}

/* Address: 0x100032a0 Size: 24 bytes */
void FUN_100032a0()

{

  ((void (*)())*puRam101157b4)();
  return;
}

/* Address: 0x100032d0 Size: 24 bytes */
void FUN_100032d0()

{

  ((void (*)())*puRam10115880)();
  return;
}

/* Address: 0x10003300 Size: 24 bytes */
void FUN_10003300()

{

  ((void (*)())*puRam1011580c)();
  return;
}

/* Address: 0x10003318 Size: 24 bytes */
void FUN_10003318()

{

  ((void (*)())*puRam10115770)();
  return;
}

/* Address: 0x10003330 Size: 24 bytes */
void FUN_10003330()

{

  ((void (*)())*puRam10115244)();
  return;
}

/* Address: 0x10003348 Size: 24 bytes */
void FUN_10003348()

{

  ((void (*)())*puRam10115b38)();
  return;
}

/* Address: 0x10003360 Size: 24 bytes */
void FUN_10003360()

{

  ((void (*)())*puRam10115ab4)();
  return;
}

/* Address: 0x10003378 Size: 24 bytes */
void FUN_10003378()

{

  ((void (*)())*puRam10115590)();
  return;
}

/* Address: 0x10003390 Size: 24 bytes */
void FUN_10003390()

{

  ((void (*)())*puRam101156e4)();
  return;
}

/* Address: 0x100033a8 Size: 24 bytes */
void FUN_100033a8()

{

  ((void (*)())*puRam101152ac)();
  return;
}

/* Address: 0x100033c0 Size: 24 bytes */
void FUN_100033c0()

{

  ((void (*)())*puRam10115778)();
  return;
}

/* Address: 0x100033d8 Size: 24 bytes */
void FUN_100033d8()

{

  ((void (*)())*puRam101157bc)();
  return;
}

/* Address: 0x100033f0 Size: 24 bytes */
void FUN_100033f0()

{

  ((void (*)())*puRam10115b34)();
  return;
}

/* Address: 0x10003408 Size: 24 bytes */
void FUN_10003408()

{

  ((void (*)())*puRam101152a0)();
  return;
}

/* Address: 0x10003420 Size: 24 bytes */
void FUN_10003420()

{

  ((void (*)())*puRam101157fc)();
  return;
}

/* Address: 0x10003438 Size: 24 bytes */
void FUN_10003438()

{

  ((void (*)())*puRam101155e0)();
  return;
}

/* Address: 0x10003450 Size: 24 bytes */
void FUN_10003450()

{

  ((void (*)())*puRam10115abc)();
  return;
}

/* Address: 0x10003468 Size: 24 bytes */
void FUN_10003468()

{

  ((void (*)())*puRam10115630)();
  return;
}

/* Address: 0x10003480 Size: 24 bytes */
void FUN_10003480()

{

  ((void (*)())*puRam1011586c)();
  return;
}

/* Address: 0x10003498 Size: 24 bytes */
void FUN_10003498()

{

  ((void (*)())*puRam10115218)();
  return;
}

/* Address: 0x100034b0 Size: 24 bytes */
void FUN_100034b0()

{

  ((void (*)())*puRam10115470)();
  return;
}

/* Address: 0x100034c8 Size: 24 bytes */
void FUN_100034c8()

{

  ((void (*)())*puRam1011530c)();
  return;
}

/* Address: 0x100034e0 Size: 24 bytes */
void FUN_100034e0()

{

  ((void (*)())*puRam101156e0)();
  return;
}

/* Address: 0x100034f8 Size: 24 bytes */
void FUN_100034f8()

{

  ((void (*)())*puRam101153dc)();
  return;
}

/* Address: 0x10003510 Size: 24 bytes */
void FUN_10003510()

{

  ((void (*)())*puRam101153bc)();
  return;
}

/* Address: 0x10003528 Size: 24 bytes */
void FUN_10003528()

{

  ((void (*)())*puRam101153b0)();
  return;
}

/* Address: 0x10003540 Size: 24 bytes */
void FUN_10003540()

{

  ((void (*)())*puRam10115840)();
  return;
}

/* Address: 0x10003570 Size: 24 bytes */
void FUN_10003570()

{

  ((void (*)())*puRam101154b4)();
  return;
}

/* Address: 0x10003588 Size: 24 bytes */
void FUN_10003588()

{

  ((void (*)())*puRam1011541c)();
  return;
}

/* Address: 0x100035d0 Size: 24 bytes */
void FUN_100035d0()

{

  ((void (*)())*puRam101157e0)();
  return;
}

/* Address: 0x100035e8 Size: 24 bytes */
void FUN_100035e8()

{

  ((void (*)())*puRam10115230)();
  return;
}

/* Address: 0x10003600 Size: 24 bytes */
void FUN_10003600()

{

  ((void (*)())*puRam1011551c)();
  return;
}

/* Address: 0x10003618 Size: 24 bytes */
void FUN_10003618()

{

  ((void (*)())*puRam1011542c)();
  return;
}

/* Address: 0x10003630 Size: 24 bytes */
void FUN_10003630()

{

  ((void (*)())*puRam10115518)();
  return;
}

/* Address: 0x10003690 Size: 24 bytes */
void FUN_10003690()

{

  ((void (*)())*puRam10115a18)();
  return;
}

/* Address: 0x100036a8 Size: 24 bytes */
void FUN_100036a8()

{

  ((void (*)())*puRam101153b4)();
  return;
}

/* Address: 0x100036c0 Size: 24 bytes */
void FUN_100036c0()

{

  ((void (*)())*puRam10115690)();
  return;
}

/* Address: 0x100036d8 Size: 24 bytes */
void FUN_100036d8()

{

  ((void (*)())*puRam10115920)();
  return;
}

/* Address: 0x100036f0 Size: 24 bytes */
void FUN_100036f0()

{

  ((void (*)())*puRam101155d0)();
  return;
}

/* Address: 0x10003708 Size: 24 bytes */
void FUN_10003708()

{

  ((void (*)())*puRam101155a0)();
  return;
}

/* Address: 0x10003738 Size: 24 bytes */
void FUN_10003738()

{

  ((void (*)())*puRam101151e4)();
  return;
}

/* Address: 0x10003750 Size: 24 bytes */
void FUN_10003750()

{

  ((void (*)())*puRam10115408)();
  return;
}

/* Address: 0x10003780 Size: 24 bytes */
void FUN_10003780()

{

  ((void (*)())*puRam10115450)();
  return;
}

/* Address: 0x100037b0 Size: 24 bytes */
void FUN_100037b0()

{

  ((void (*)())*puRam101155cc)();
  return;
}

/* Address: 0x100037e0 Size: 24 bytes */
void FUN_100037e0()

{

  ((void (*)())*puRam101153e0)();
  return;
}

/* Address: 0x100037f8 Size: 24 bytes */
void FUN_100037f8()

{

  ((void (*)())*puRam10115444)();
  return;
}

/* Address: 0x10003810 Size: 24 bytes */
void FUN_10003810()

{

  ((void (*)())*puRam10115254)();
  return;
}

/* Address: 0x10003828 Size: 24 bytes */
void FUN_10003828()

{

  ((void (*)())*puRam10115430)();
  return;
}

/* Address: 0x10003840 Size: 24 bytes */
void FUN_10003840()

{

  ((void (*)())*puRam1011520c)();
  return;
}

/* Address: 0x10003858 Size: 24 bytes */
void FUN_10003858()

{

  ((void (*)())*puRam101152f8)();
  return;
}

/* Address: 0x10003870 Size: 24 bytes */
void FUN_10003870()

{

  ((void (*)())*puRam10115608)();
  return;
}

/* Address: 0x10003888 Size: 24 bytes */
void FUN_10003888()

{

  ((void (*)())*puRam10115860)();
  return;
}

/* Address: 0x100038a0 Size: 24 bytes */
void FUN_100038a0()

{

  ((void (*)())*puRam101152a4)();
  return;
}

/* Address: 0x100038b8 Size: 24 bytes */
void FUN_100038b8()

{

  ((void (*)())*puRam101152b4)();
  return;
}

/* Address: 0x100038d0 Size: 24 bytes */
void FUN_100038d0()

{

  ((void (*)())*puRam10115418)();
  return;
}

/* Address: 0x100038e8 Size: 24 bytes */
void FUN_100038e8()

{

  ((void (*)())*puRam10115434)();
  return;
}

/* Address: 0x10003900 Size: 24 bytes */
void FUN_10003900()

{

  ((void (*)())*puRam10115acc)();
  return;
}

/* Address: 0x10003918 Size: 24 bytes */
void FUN_10003918()

{

  ((void (*)())*puRam101153a0)();
  return;
}

/* Address: 0x10003948 Size: 24 bytes */
void FUN_10003948()

{

  ((void (*)())*puRam101154a8)();
  return;
}

/* Address: 0x10003960 Size: 232 bytes */
void FUN_10003960(int *param_1,int *param_2)

{
  int uVar2;
  long long uVar1;
  char uVar3;
  int local_4c;
  short local_28;
  short local_26;
  short local_20;
  short local_1e;
  
  uVar2 = FreeBlock(param_1[2]);
  param_1[2] = uVar2;
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = FUN_100b057c(param_1,0);
  FUN_100b0698(param_1,uVar1);
  local_20 = 1;
  local_1e = 1;
  uVar1 = FUN_100b057c(param_1,1);
  FUN_100b039c(&local_28,uVar1,&local_20);
  uVar3 = FUN_100f1574(1);
  uVar2 = FUN_10001cf8((((long long)(int)local_26 * (long long)(int)local_28 & 0x3fffffffU) * 4 +
                        (long long)(int)local_26 * (long long)(int)local_28 & 0x7fffffff) << 1);
  param_1[2] = uVar2;
  **(char **)(local_4c + -0x3c) = uVar3;
  FUN_100db1ec();
  return;
}























































































































































/* Address: 0x10003a48 Size: 92 bytes */
int * FUN_10003a48(int *param_1,int *param_2)

{
  int uVar1;
  long long uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  uVar2 = FUN_10002a60();
  FUN_10002340(param_2[2],uVar1,uVar2);
  return param_1;
}

/* Address: 0x10003aa4 Size: 216 bytes */
void FUN_10003aa4()

{
  int iVar1;
  int *piVar2;
  int uVar3;
  int *ppuVar4;
  char uVar7;
  int iVar5;
  int iVar6;
  int **local_3c;
  
  uVar3 = uRam10117700;
  piVar2 = piRam1011742c;
  iVar1 = iRam10117428;
  iVar6 = iRam10117424;
  ppuVar4 = 0 /* TVect base */;
  if (*piRam1011742c == 0) {
    uVar7 = FUN_100f1574(1);
    iVar5 = FUN_10001cf8(0x4440);
    *piVar2 = iVar5;
    *local_3c[-0xf] = uVar7;
    ppuVar4 = local_3c;
    FUN_100db1ec();
  }
  *(unsigned int *)(iVar1 + 0x28) = *(unsigned int *)(iVar1 + 0x28) & 0x7fffffff;
  *(unsigned int *)(iVar6 + 0x28) = *(unsigned int *)(iVar6 + 0x28) & 0x7fffffff;
  iVar6 = CreateOrResizeGWorld(uVar3,*(short *)(*(int*)((char*)ppuVar4 - 0x544)),*(short *)(*(int*)((char*)ppuVar4 - 0x545)),8,0);
  if (iVar6 == 0) {
    FocusObject(0);
  }
  FUN_1003b3b0();
  return;
}






































































































































































/* Address: 0x10003b7c Size: 480 bytes */
void FUN_10003b7c(int param_1)

{
  int uVar1;
  unsigned short uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long long uVar6;
  unsigned int *puVar7;
  int iVar9;
  unsigned long long uVar8;
  int iVar10;
  unsigned long long uVar11;
  short sVar12;
  short local_34 [26];
  
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  iVar9 = 0;
  do {
    iVar10 = 0;
    do {
      if (*(char *)(*piRam1011735c + iVar9 * 0x1d + iVar10 + 0x60c) == '\0') {
        local_34[iVar9] = (short)iVar10;
        break;
      }
      sVar12 = (short)iVar10 + 1;
      iVar10 = (int)sVar12;
    } while (sVar12 < 0x1d);
    sVar12 = (short)iVar9 + 1;
    iVar9 = (int)sVar12;
    if (8 < sVar12) {
      iVar9 = 0;
      do {
        *(short *)(param_1 + iVar9 * 2 + 8) = 0;
        sVar12 = (short)iVar9 + 1;
        iVar9 = (int)sVar12;
      } while (sVar12 < 9);
      uVar1 = *(int *)(param_1 + 0x24);
      uVar6 = FUN_10002a60();
      FUN_100eed08(uVar1,uVar6,0);
      iVar9 = 0;
      if (0 < *(short *)(param_1 + 4)) {
        do {
          uVar8 = 0;
          if (0 < *(short *)(param_1 + 6)) {
            do {
              iVar10 = *(int *)(param_1 + 0x24) +
                       (iVar9 - *(short *)(param_1 + 0x1e)) *
                       (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) *
                       10 + *(short *)(param_1 + 0x1c) * -10;
              iVar3 = (int)(((uVar8 & 0x3fffffff) * 4 + uVar8 & 0xffffffff) << 1);
              puVar7 = (unsigned int *)(iVar10 + iVar3);
              *(int *)(iVar10 + iVar3) = 0x80000000;
              uVar11 = uVar8 + (long long)*(short *)(*piVar5 + 0x176);
              uVar2 = (unsigned short)((unsigned int)*(int *)
                                      (*piVar4 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 &
                                                       0xffffffff) << 5) +
                                      (iVar9 + *(short *)(*piVar5 + 0x178)) * 2) >> 0x10) & 0xf;
              iVar10 = (int)(short)uVar2;
              if (7 < uVar2) {
                iVar10 = 8;
              }
              *puVar7 = ((int)local_34[iVar10] & 0x1fU) << 0x11 | *puVar7 & 0xffc1ffff;
              sVar12 = (short)uVar8 + 1;
              uVar8 = (unsigned long long)sVar12;
            } while (sVar12 < *(short *)(param_1 + 6));
          }
          iVar9 = (int)(short)((short)iVar9 + 1);
        } while (iVar9 < *(short *)(param_1 + 4));
      }
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) & 0x7fffff | 0x80000000;
      return;
    }
  } while( true );
}

/* Address: 0x10003d5c Size: 364 bytes */
unsigned short FUN_10003d5c()
{
  short param_1 = 0;
  short param_2 = 0;

  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  short sVar4;
  short sVar5;
  
  uVar2 = 0;
  if (*psRam10115ff8 == 0) {
    uVar3 = 0;
    do {
      sVar4 = param_1 + *(short *)(uVar3 * 2 + iRam10115cc0);
      sVar5 = param_2 + *(short *)(uVar3 * 2 + iRam10115cbc);
      if ((((sVar4 < 0) || (sVar5 < 0)) || (0x6f < sVar4)) || (0x9b < sVar5)) {
        uVar1 = (unsigned short)(1 << (uVar3 & 0x3f));
      }
      else if ((*(unsigned int *)(*piRam10117354 + sVar5 * 0x70 + (int)sVar4) >> 0x1d & 1) == 0) {
        uVar1 = (unsigned short)(1 << (uVar3 & 0x3f));
      }
      else {
        uVar1 = 0;
      }
      uVar2 = uVar2 | uVar1;
      sVar4 = (short)uVar3 + 1;
      uVar3 = (unsigned int)sVar4;
    } while (sVar4 < 8);
  }
  else {
    uVar3 = 0;
    do {
      sVar4 = param_1 + *(short *)(uVar3 * 2 + iRam10115cc0);
      sVar5 = param_2 + *(short *)(uVar3 * 2 + iRam10115cbc);
      if (((sVar4 < 0) || (sVar5 < 0)) || ((0x6f < sVar4 || (0x9b < sVar5)))) {
        uVar1 = (unsigned short)(1 << (uVar3 & 0x3f));
      }
      else if (*(int *)(*piRam10117354 + sVar5 * 0x70 + (int)sVar4) < 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (unsigned short)(1 << (uVar3 & 0x3f));
      }
      uVar2 = uVar2 | uVar1;
      sVar4 = (short)uVar3 + 1;
      uVar3 = (unsigned int)sVar4;
    } while (sVar4 < 8);
  }
  return uVar2;

}

/* Address: 0x10003ec8 Size: 724 bytes */

void FUN_10003ec8(short param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  short sStack0000001a;
  short sStack0000001e;
  
  psVar9 = psRam10117430;
  piVar8 = piRam1011742c;
  piVar7 = piRam1011735c;
  piVar6 = piRam10117354;
  iVar5 = FUN_10115cc4;
  if (*(short *)(*piRam1011735c + 0x124) != 0) {
    *psRam10117430 = 0;
    sStack0000001a = param_1;
    if (param_1 < 0) {
      sStack0000001a = *(short *)(*piVar7 + 0x178);
    }
    sVar1 = param_2;
    if (param_2 < 0) {
      sVar1 = *(short *)(*piVar7 + 0x176);
    }
    if (param_1 < 0) {
      param_1 = *(short *)(*piVar7 + 0x17c);
    }
    if (param_2 < 0) {
      param_2 = *(short *)(*piVar7 + 0x17a);
    }
    if (*psRam10115ff8 == 0) {
      for (; sStack0000001e = sVar1, sStack0000001a < (short)(param_1 + 1);
          sStack0000001a = sStack0000001a + 1) {
        for (; sStack0000001e < (short)(param_2 + 1); sStack0000001e = sStack0000001e + 1) {
          if ((*(unsigned int *)(*piVar6 + sStack0000001e * 0x70 + (int)sStack0000001a) >> 0x1d & 1) == 0) {
            sVar2 = *(short *)(*piVar7 + 0x178);
            iVar4 = (int)sStack0000001a;
            iVar3 = *piVar8;
            sVar11 = sStack0000001e - *(short *)(*piVar7 + 0x176);
            iVar10 = FUN_10003d5c(sStack0000001a);
            *(char *)(iVar3 + (iVar4 - sVar2) * 0x9c + (int)sVar11) =
                 *(char *)(iVar10 + iVar5);
            *psVar9 = *psVar9 + 1;
          }
          else {
            *(char *)
             (*piVar8 + ((int)sStack0000001a - (int)*(short *)(*piVar7 + 0x178)) * 0x9c +
             (int)(short)(sStack0000001e - *(short *)(*piVar7 + 0x176))) = 0xff;
          }
        }
      }
    }
    else {
      for (; sStack0000001e = sVar1, sStack0000001a < (short)(param_1 + 1);
          sStack0000001a = sStack0000001a + 1) {
        for (; sStack0000001e < (short)(param_2 + 1); sStack0000001e = sStack0000001e + 1) {
          if (*(int *)(*piVar6 + sStack0000001e * 0x70 + (int)sStack0000001a) < 0) {
            *(char *)
             (*piVar8 + ((int)sStack0000001a - (int)*(short *)(*piVar7 + 0x178)) * 0x9c +
             (int)(short)(sStack0000001e - *(short *)(*piVar7 + 0x176))) = 0xff;
          }
          else {
            sVar2 = *(short *)(*piVar7 + 0x178);
            iVar4 = (int)sStack0000001a;
            iVar3 = *piVar8;
            sVar11 = sStack0000001e - *(short *)(*piVar7 + 0x176);
            iVar10 = FUN_10003d5c(sStack0000001a);
            *(char *)(iVar3 + (iVar4 - sVar2) * 0x9c + (int)sVar11) =
                 *(char *)(iVar10 + iVar5);
            *psVar9 = *psVar9 + 1;
          }
        }
      }
    }
  }
  return;
}










































































































































































































































































































































































































































/* Address: 0x1000419c Size: 612 bytes */
void FUN_1000419c(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  unsigned long long uVar9;
  int iVar10;
  unsigned int *puVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  unsigned int local_28;
  
  piVar6 = piRam1011742c;
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  piVar3 = piRam10117354;
  if (*(short *)(*piRam1011735c + 0x124) != 0) {
    FUN_10003ec8(0xffffffffffffffff,0xffffffffffffffff);
  }
  sVar12 = *(short *)(*piVar5 + 0x178);
  iVar13 = 0;
  if (sVar12 <= *(short *)(*piVar5 + 0x17c)) {
    do {
      sVar14 = *(short *)(*piVar5 + 0x176);
      iVar10 = 0;
      if (sVar14 <= *(short *)(*piVar5 + 0x17a)) {
        do {
          uVar9 = (unsigned long long)sVar14;
          uVar1 = *(unsigned short *)
                   (*piVar4 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 5) +
                   sVar12 * 2);
          local_28 = (unsigned int)uVar1 << 0x10;
          iVar8 = *(int *)(param_1 + 0x24) +
                  (iVar13 - *(short *)(param_1 + 0x1e)) *
                  (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                  (*(short *)(param_1 + 0x1c) * 5 & 0x7fffffffU) * -2;
          iVar7 = iVar10 * 10;
          puVar11 = (unsigned int *)(iVar8 + iVar7);
          uVar1 = uVar1 >> 8;
          if (uVar1 < 0x60) {
            *puVar11 = (unsigned int)((long long)(short)uVar1 << 0x16) | *puVar11 & 0xc03fffff;
          }
          else {
            *(unsigned int *)(iVar7 + iVar8) =
                 (unsigned int)(((long long)(short)uVar1 - 0x60U & 0xffffffff) << 0x16) & 0x3fc00000 |
                 *(unsigned int *)(iVar8 + iVar7) & 0xc03fffff | 0x40000000;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x40000000;
          }
          if ((local_28 >> 0x17 & 1) != 0) {
            *puVar11 = *puVar11 | 2;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x8000000;
          }
          if ((local_28 >> 0x15 & 1) != 0) {
            puVar11[1] = puVar11[1] | 0x80000;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x20000000;
          }
          iVar8 = (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4);
          if ((*(unsigned int *)(*piVar3 + iVar8 + (int)sVar12) >> 0x18 & 0x1f) != 0) {
            uVar2 = puVar11[1];
            puVar11[1] = uVar2 | 0x2000000;
            puVar11[1] = ((*(unsigned int *)(iVar8 + *piVar3 + (int)sVar12) >> 0x18 & 0x1f) - 1 & 0x1f) <<
                         0x14 | uVar2 & 0xfe0fffff | 0x2000000;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x10000000;
          }
          if (*(short *)(*piVar5 + 0x124) != 0) {
            iVar8 = *piVar6 + iVar13 * 0x9c;
            if (-1 < *(char *)(iVar8 + iVar10)) {
              uVar2 = puVar11[1];
              puVar11[1] = uVar2 | 0x80000000;
              puVar11[1] = ((int)*(char *)(iVar8 + iVar10) & 0x1fU) << 0x1a |
                           uVar2 & 0x83ffffff | 0x80000000;
            }
          }
          sVar14 = sVar14 + 1;
          iVar10 = (int)(short)((short)iVar10 + 1);
        } while (sVar14 <= *(short *)(*piVar5 + 0x17a));
      }
      sVar12 = sVar12 + 1;
      iVar13 = (int)(short)((short)iVar13 + 1);
    } while (sVar12 <= *(short *)(*piVar5 + 0x17c));
  }
  return;
}

/* Address: 0x10004400 Size: 976 bytes */
void FUN_10004400(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  unsigned short uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar15;
  unsigned long long uVar14;
  unsigned int *puVar16;
  short *psVar17;
  unsigned int uVar18;
  
  piVar13 = piRam101176e0;
  piVar12 = piRam10117360;
  piVar11 = piRam1011735c;
  piVar10 = piRam10117358;
  iVar15 = *piRam1011735c;
  sVar1 = *(short *)(iVar15 + 0x178);
  sVar2 = *(short *)(iVar15 + 0x17c);
  sVar3 = *(short *)(iVar15 + 0x176);
  sVar4 = *(short *)(iVar15 + 0x17a);
  sVar5 = *(short *)(iVar15 + 0x182);
  if (sVar5 != 0) {
    do {
      sVar5 = sVar5 + -1;
      iVar15 = sVar5 * 0x16;
      psVar17 = (short *)(*piVar12 + iVar15);
      if ((*(char *)((int)psVar17 + 5) != -1) &&
         (sVar7 = *(short *)(iVar15 + *piVar12), sVar1 <= sVar7)) {
        sVar6 = psVar17[1];
        if (sVar3 <= sVar6) {
          if ((sVar6 <= sVar4) && (sVar7 <= sVar2)) {
            iVar9 = *(int *)(param_1 + 0x24) +
                    ((int)(short)(sVar7 - sVar1) - (int)*(short *)(param_1 + 0x1e)) *
                    (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                    *(short *)(param_1 + 0x1c) * -10;
            iVar15 = ((int)sVar6 - (int)sVar3) * 10;
            puVar16 = (unsigned int *)(iVar9 + iVar15);
            *(unsigned int *)(iVar9 + iVar15) =
                 ((*(unsigned int *)(iVar9 + iVar15) >> 0xb & 0x1f) + 1) * 0x800 & 0xf800 |
                 *(unsigned int *)(iVar9 + iVar15) & 0xffff07ff;
            if (*(char *)((int)psVar17 + 5) == '\x0f') {
              uVar14 = 8;
            }
            else {
              uVar14 = (unsigned long long)*(char *)((int)psVar17 + 5);
            }
            uVar14 = (uVar14 & 0xf) << 7 | (unsigned long long)*puVar16 & 0xfffffffffffff87f;
            uVar18 = (unsigned int)uVar14;
            *puVar16 = uVar18;
            uVar8 = (unsigned short)((uVar14 << 0x20) >> 0x27) & 0xf;
            iVar15 = *piVar11 + (short)uVar8 * 0x1d;
            if (*(char *)(iVar15 + (uVar18 >> 0x11 & 0x1f) + 0x60c) <
                *(char *)(iVar15 + *(char *)(psVar17 + 2) + 0x60c)) {
              *puVar16 = ((int)*(char *)(psVar17 + 2) & 0x1fU) << 0x11 | uVar18 & 0xffc1ffff;
            }
            if ((psVar17[6] & 0x1000U) != 0) {
              if ((*(unsigned int *)(*piVar10 + psVar17[1] * 0xe0 + *psVar17 * 2) >> 0x17 & 1) == 0) {
                *puVar16 = *puVar16 & 0xffc1ffff | 0xa0000;
              }
            }
            *(short *)(param_1 + (short)uVar8 * 2 + 8) = 1;
          }
        }
      }
    } while (sVar5 != 0);
  }
  psVar17 = (short *)*piVar13;
  if (psVar17 != (short *)0x0) {
    iVar15 = *piVar11;
    if (*(short *)(iVar15 + 0x178) <= *psVar17) {
      if (((*psVar17 <= *(short *)(iVar15 + 0x17c)) && (*(short *)(iVar15 + 0x176) <= psVar17[1]))
         && (psVar17[1] <= *(short *)(iVar15 + 0x17a))) {
        if ((psVar17[6] & 0x1000U) == 0) {
          uVar18 = (unsigned int)*(char *)(*piVar13 + 4);
        }
        else {
          uVar18 = 5;
        }
        iVar9 = *(int *)(param_1 + 0x24) +
                ((int)(short)(*(short *)*piVar13 - *(short *)(*piVar11 + 0x178)) -
                (int)*(short *)(param_1 + 0x1e)) *
                (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                *(short *)(param_1 + 0x1c) * -10;
        iVar15 = ((int)((short *)*piVar13)[1] - (int)*(short *)(*piVar11 + 0x176)) * 10;
        *(unsigned int *)(iVar9 + iVar15) = (uVar18 & 0x1f) << 0x11 | *(unsigned int *)(iVar9 + iVar15) & 0xffc1ffff
        ;
        iVar15 = *(int *)(param_1 + 0x24) +
                 ((int)(short)(*(short *)*piVar13 - *(short *)(*piVar11 + 0x178)) -
                 (int)*(short *)(param_1 + 0x1e)) *
                 (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                 *(short *)(param_1 + 0x1c) * -10 +
                 ((int)((short *)*piVar13)[1] - (int)*(short *)(*piVar11 + 0x176)) * 10;
        *(unsigned int *)(iVar15 + 4) = *(unsigned int *)(iVar15 + 4) | 0x400;
        psVar17 = (short *)*piVar13;
        iVar9 = *(int *)(param_1 + 0x24) +
                ((int)(short)(*psVar17 - *(short *)(*piVar11 + 0x178)) -
                (int)*(short *)(param_1 + 0x1e)) *
                (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                *(short *)(param_1 + 0x1c) * -10;
        iVar15 = ((int)psVar17[1] - (int)*(short *)(*piVar11 + 0x176)) * 10;
        *(unsigned int *)(iVar9 + iVar15) =
             ((int)*(char *)((int)psVar17 + 5) & 0xfU) << 7 | *(unsigned int *)(iVar9 + iVar15) & 0xfffff87f
        ;
      }
    }
  }
  return;
}

/* Address: 0x100047d0 Size: 492 bytes */
void FUN_100047d0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  unsigned long long uVar12;
  unsigned long long uVar13;
  short sVar14;
  
  piVar11 = piRam1011735c;
  piVar10 = piRam10117354;
  iVar7 = *piRam1011735c;
  sVar1 = *(short *)(iVar7 + 0x178);
  sVar2 = *(short *)(iVar7 + 0x17c);
  sVar3 = *(short *)(iVar7 + 0x176);
  sVar4 = *(short *)(iVar7 + 0x17a);
  uVar13 = 0x15;
  do {
    iVar9 = (int)uVar13;
    iVar7 = *piVar11 + iVar9 * 0x1e;
    if (((*(char *)(iVar7 + 0xd28) == '\x01') && (sVar5 = *(short *)(iVar7 + 0xd2c), sVar1 <= sVar5)
        ) && (sVar5 <= sVar2)) {
      sVar6 = *(short *)(iVar7 + 0xd2e);
      if (sVar3 <= sVar6) {
        if (sVar6 <= sVar4) {
          sVar14 = sVar5 - sVar1;
          uVar12 = (unsigned long long)(short)(sVar6 - sVar3);
          if (((unsigned short)((unsigned int)*(int *)(*piVar10 + sVar6 * 0x70 + (int)sVar5) >> 0x1e) & 1) ==
              0) {
            iVar7 = *(int *)(param_1 + 0x24) +
                    ((int)sVar14 - (int)*(short *)(param_1 + 0x1e)) *
                    (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                    *(short *)(param_1 + 0x1c) * -10;
            iVar8 = (int)(((uVar12 & 0x3fffffff) * 4 + uVar12 & 0xffffffff) << 1);
            *(unsigned int *)(iVar7 + iVar8) = *(unsigned int *)(iVar7 + iVar8) | 1;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x4000000;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x24) +
                    ((int)sVar14 - (int)*(short *)(param_1 + 0x1e)) *
                    (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                    *(short *)(param_1 + 0x1c) * -10;
            iVar8 = (int)(((uVar12 & 0x3fffffff) * 4 + uVar12 & 0x7fffffff) << 1);
            *(unsigned int *)(iVar7 + iVar8) = *(unsigned int *)(iVar7 + iVar8) | 0x40;
            iVar7 = *(int *)(param_1 + 0x24) +
                    ((int)sVar14 - (int)*(short *)(param_1 + 0x1e)) *
                    (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                    *(short *)(param_1 + 0x1c) * -10;
            *(unsigned int *)(iVar8 + iVar7) =
                 (unsigned int)((uVar13 & 0xffffffff) << 2) & 0x3c | *(unsigned int *)(iVar8 + iVar7) & 0xffffffc3;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x2000000;
            *(short *)(param_1 + (int)((uVar13 & 0xffffffff) << 1) + 8) = 1;
          }
        }
      }
    }
    uVar13 = (unsigned long long)(short)((short)uVar13 + -1);
  } while (iVar9 != 0);
  return;
}

/* Address: 0x100049bc Size: 664 bytes */
void FUN_100049bc(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  long long lVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  
  piVar11 = piRam101176e0;
  iVar7 = iRam10117584;
  psVar10 = psRam10117580;
  psVar9 = psRam10115ea0;
  psVar8 = psRam10115e90;
  if (((*piRam101176e0 != 0) && (0 < *psRam10115e90)) && (*psRam10115e9c < *psRam10115e90)) {
    iVar15 = *piRam1011735c;
    sVar1 = *(short *)(iVar15 + 0x176);
    lVar12 = (long long)sVar1;
    sVar2 = *(short *)(iVar15 + 0x17a);
    sVar3 = *(short *)(iVar15 + 0x178);
    sVar4 = *(short *)(iVar15 + 0x17c);
    iVar15 = (int)*psRam10115e9c;
    if ((int)*psRam10115e9c < *psRam10115e90 + -1) {
      do {
        psVar14 = (short *)(iVar15 * 4 + iVar7);
        sVar5 = *(short *)(iVar15 * 4 + iVar7);
        if (((sVar3 <= sVar5) && (sVar5 <= sVar4)) &&
           ((sVar1 <= psVar14[1] && (psVar14[1] <= sVar2)))) {
          if (iVar15 < *psVar9) {
            iVar13 = 1;
          }
          else {
            iVar13 = 2;
          }
          iVar6 = *(int *)(param_1 + 0x24) +
                  ((int)(short)(*psVar14 - sVar3) - (int)*(short *)(param_1 + 0x1e)) *
                  (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                  *(short *)(param_1 + 0x1c) * -10 +
                  (int)(((psVar14[1] - lVar12 & 0x3fffffffU) * 4 + (psVar14[1] - lVar12) &
                        0xffffffff) << 1);
          *(unsigned int *)(iVar6 + 4) = iVar13 << 0x11 | *(unsigned int *)(iVar6 + 4) & 0xfff9ffff;
          *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x1000000;
        }
        iVar15 = (int)(short)((short)iVar15 + 1);
      } while (iVar15 < *psVar8 + -1);
    }
    sVar5 = *psVar10;
    if ((sVar3 <= sVar5) && (sVar5 <= sVar4)) {
      sVar4 = psVar10[1];
      if ((sVar1 <= sVar4) && (sVar4 <= sVar2)) {
        iVar7 = *(int *)(param_1 + 0x24) +
                ((int)(short)(sVar5 - sVar3) - (int)*(short *)(param_1 + 0x1e)) *
                (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                *(short *)(param_1 + 0x1c) * -10 +
                (int)(((sVar4 - lVar12 & 0x3fffffffU) * 4 + (sVar4 - lVar12) & 0xffffffff) << 1);
        *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(iVar7 + 4) | 0x10000;
        iVar7 = *(int *)(param_1 + 0x24) +
                ((int)(short)(*psVar10 - sVar3) - (int)*(short *)(param_1 + 0x1e)) *
                (((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x1c)) + 1) * 10 +
                *(short *)(param_1 + 0x1c) * -10 +
                (int)(((psVar10[1] - lVar12 & 0x3fffffffU) * 4 + (psVar10[1] - lVar12) & 0xffffffff)
                     << 1);
        *(unsigned int *)(iVar7 + 4) =
             ((int)*(char *)(*piVar11 + 4) & 0x1fU) << 0xb | *(unsigned int *)(iVar7 + 4) & 0xffff07ff;
        *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x800000;
        *(short *)(param_1 + 0x2a) = *psVar10 - sVar3;
        *(short *)(param_1 + 0x2c) = psVar10[1] - sVar1;
        *(short *)(param_1 + 0x2e) = (short)*(char *)(*piVar11 + 4);
      }
    }
  }
  return;
}

/* Address: 0x10004ed8 Size: 184 bytes */
long long FUN_10004ed8(long long param_1)

{
  unsigned short uVar1;
  
  if (*(int *)(iRam10117428 + 0x28) < 0) {
    uVar1 = (unsigned short)param_1;
    if (uVar1 < 8) {
      return param_1;
    }
    param_1 = (((long long)*(short *)(iRam10117428 + 4) & 0x3fffffffU) * 4 +
               (long long)*(short *)(iRam10117428 + 4) & 0x1fffffff) << 3;
    if ((*pcRam10116398 != '\0') && (uVar1 < 8)) {
      return param_1;
    }
  }
  return param_1;
}

/* Address: 0x10008418 Size: 116 bytes */
void FUN_10008418()

{
  short uVar1;
  short uVar2;
  
  if ((short *)*piRam101176e0 == (short *)0x0) {
    uVar1 = *(short *)(*piRam1011735c + 0x17e);
  }
  else {
    uVar1 = *(short *)*piRam101176e0;
  }
  if (*piRam101176e0 == 0) {
    uVar2 = *(short *)(*piRam1011735c + 0x180);
  }
  else {
    uVar2 = *(short *)(*piRam101176e0 + 2);
  }
  FUN_100836dc(*puRam101163ac,uVar1,uVar2);
  return;
}

/* Address: 0x100084d0 Size: 136 bytes */
void FUN_100084d0(unsigned short param_1)

{
  if ((*psRam10115ce0 != 0) && (*psRam10115e80 == 0)) {
    if (param_1 < 8) {
      return;
    }
    FUN_1000848c(*(short *)(*piRam1011735c + 0x17e),*(short *)(*piRam1011735c + 0x180));
    FUN_1003dc28();
  }
  return;
}

/* Address: 0x1000865c Size: 224 bytes */
void FUN_1000865c(short param_1,long long param_2,short param_3,short param_4)

{
  int *ppuVar1;
  short sVar2;
  unsigned int uVar4;
  unsigned long long uVar3;
  unsigned long long uVar5;
  
  ppuVar1 = 0 /* TVect base */;
  sVar2 = param_1 / 0x60;
  EnsureSpriteLoaded(sVar2 + 0x1a);
  uVar4 = (int)param_1 + ((int)param_1 / 0x60) * -0x60;
  uVar3 = (long long)((int)uVar4 >> 4) + (unsigned long long)((int)uVar4 < 0 && (uVar4 & 0xf) != 0);
  uVar4 = (unsigned int)param_1;
  uVar5 = (long long)param_1 +
          ((long long)((int)uVar4 >> 4) + (unsigned long long)((int)uVar4 < 0 && (uVar4 & 0xf) != 0) &
          0xfffffff) * -0x10;
  BlitSpriteNormal((((long long)sVar2 & 0x3fffffffU) * 4 + (long long)sVar2 & 0x3fffffff) * 4 +
               ZEXT48((*(int*)((char*)ppuVar1 - 0x119))),(short)(((uVar5 & 0x3fffffff) * 4 + uVar5 & 0xffffffff) << 3)
               ,(short)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 3),0x28,0x28,param_2,
               param_3,param_4);
  return;
}

/* Address: 0x1000873c Size: 1232 bytes */
void FUN_1000873c()
{
  short param_1 = 0;
  short param_2 = 0;
  long long param_3 = 0;
  short param_4 = 0;
  short param_5 = 0;
  short param_6 = 0;
  short param_7 = 0;
  short param_8 = 0;

  int *puVar1;
  int iVar2;
  int iVar3;
  int bVar4;
  int *puVar5;
  int iVar6;
  int iVar7;
  unsigned long long uVar8;
  int *ppuVar9;
  short sVar10;
  short sVar12;
  long long uVar11;
  long long lVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned long long uVar16;
  long long lVar17;
  unsigned long long uVar18;
  int iVar19;
  short in_stack_0000003a;
  short in_stack_0000003e;
  short in_stack_00000042;
  short in_stack_00000046;
  int **local_b4;
  short local_58 [44];
  
  iVar7 = iRam10115cec;
  iVar6 = iRam10115ce8;
  puVar5 = puRam10115ce4;
  uVar8 = ZEXT48(((char*)0));
  ppuVar9 = 0 /* TVect base */;
  uVar16 = (unsigned long long)param_2;
  lVar17 = uVar8 - 0x80;
  if (param_2 == 0xf) {
    uVar16 = 8;
  }
  EnsureSpriteLoaded(8);
  uVar18 = 0;
  do {
    *(short *)((int)local_58 + (int)((uVar18 & 0xffffffff) << 2)) = param_4;
    if ((int)uVar18 < 2) {
      sVar10 = 0;
    }
    else {
      sVar10 = 0x24;
    }
    sVar10 = param_5 + (short)(((uVar18 & 0x3fffffff) * 4 + uVar18 & 0xffffffff) << 1) + sVar10;
    iVar19 = (int)((uVar18 & 0xffffffff) << 2);
    *(short *)((int)local_58 + iVar19 + 2) = sVar10;
    if (in_stack_00000042 == 2) {
      *(short *)((int)local_58 + iVar19 + 2) = sVar10 + -0x14;
    }
    sVar10 = (short)uVar18 + 1;
    uVar18 = (unsigned long long)sVar10;
  } while (sVar10 < 4);
  if (in_stack_00000042 != 0) {
    uVar18 = ZEXT48((*(int*)((char*)ppuVar9 - 0x6fa)));
    DrawNumber(lVar17,uVar18 + 0x2c,param_6);
    DrawNumber(uVar8 - 0x76,uVar18 + 0x34,param_7);
    DrawNumber(uVar8 - 0x6c,uVar18 + 0x3c,in_stack_0000003a);
    DrawNumber(uVar8 - 0x62,uVar18 + 0x44,param_8);
    uVar18 = 0;
    do {
      if (in_stack_00000042 == 2) {
        if (2 < (int)uVar18) {
          iVar19 = (int)((uVar18 & 0x3fffffff) << 2);
          *(short *)((int)local_58 + iVar19) = *(short *)((int)local_58 + iVar19) + 8;
          *(short *)((int)local_58 + iVar19 + 2) = *(short *)((int)local_58 + iVar19 + 2) + -0xf;
          sVar10 = StringLength(((uVar18 & 0x3fffffff) * 4 + uVar18 & 0x7fffffff) * 2 + lVar17);
          iVar19 = 0;
          if (0 < sVar10) {
            do {
              lVar13 = ((uVar18 & 0x3fffffff) * 4 + uVar18 & 0x7fffffff) * 2;
              iVar2 = *(char *)((int)lVar13 + iVar19 + (int)lVar17) * 8 + iVar7;
              iVar3 = (int)((uVar18 & 0x3fffffff) << 2);
              FUN_1004602c(8,*(int *)(iVar2 + -0x180),*(int *)(iVar2 + -0x17c),
                           *(int *)((int)local_58 + iVar3),0x24,0xf);
              *(short *)((int)local_58 + iVar3) = *(short *)((int)local_58 + iVar3) + 8;
              sVar12 = (short)iVar19 + 1;
              iVar19 = (int)sVar12;
              sVar10 = StringLength(lVar13 + lVar17);
            } while (sVar12 < sVar10);
          }
        }
      }
      else {
        iVar2 = (int)((uVar18 & 0xffffffff) << 3);
        iVar19 = (int)((uVar18 & 0x3fffffff) << 2);
        FUN_1004602c(8,*(int *)(iVar2 + iVar6),*(int *)(iVar2 + iVar6 + 4),
                     *(int *)((int)local_58 + iVar19),0x24,0xf);
        *(short *)((int)local_58 + iVar19) = *(short *)((int)local_58 + iVar19) + 8;
        FUN_1004602c(8,*puVar5,puVar5[1],*(int *)((int)local_58 + iVar19),0x24,0xf);
        *(short *)((int)local_58 + iVar19) = *(short *)((int)local_58 + iVar19) + 8;
        sVar10 = StringLength(((uVar18 & 0x3fffffff) * 4 + uVar18 & 0x7fffffff) * 2 + lVar17);
        iVar19 = 0;
        if (0 < sVar10) {
          do {
            lVar13 = ((uVar18 & 0x3fffffff) * 4 + uVar18 & 0x7fffffff) * 2;
            iVar2 = *(char *)((int)lVar13 + iVar19 + (int)lVar17) * 8 + iVar7;
            iVar3 = (int)((uVar18 & 0x3fffffff) << 2);
            FUN_1004602c(8,*(int *)(iVar2 + -0x180),*(int *)(iVar2 + -0x17c),
                         *(int *)((int)local_58 + iVar3),0x24,0xf);
            *(short *)((int)local_58 + iVar3) = *(short *)((int)local_58 + iVar3) + 8;
            sVar12 = (short)iVar19 + 1;
            iVar19 = (int)sVar12;
            sVar10 = StringLength(lVar13 + lVar17);
          } while (sVar12 < sVar10);
        }
      }
      sVar10 = (short)uVar18 + 1;
      uVar18 = (unsigned long long)sVar10;
      ppuVar9 = local_b4;
    } while (sVar10 < 4);
  }
  uVar14 = (unsigned int)param_1;
  if (in_stack_0000003e != 0) {
    EnsureSpriteLoaded(8);
    if ((in_stack_0000003e == 1) && (uVar14 == 0xffffffff)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      sVar10 = 0x200;
    }
    else {
      sVar10 = in_stack_0000003e * 0x20 + -0x20;
    }
    if (in_stack_00000042 == 1) {
      sVar12 = 0x14;
    }
    else {
      sVar12 = 0;
    }
    BlitSpriteNormal((*(int*)((char*)ppuVar9 - 0x115)),sVar10,0,0x20,0x1e,param_3,param_4,param_5 + sVar12);
  }
  if (-1 < (int)uVar14) {
    sVar10 = (short)uVar16 + 0x10;
    puVar1 = (*(int*)((char*)ppuVar9 - 0x11a));
    EnsureSpriteLoaded(sVar10);
    uVar15 = (unsigned int)param_1;
    uVar18 = (long long)((int)uVar14 >> 4) + (unsigned long long)((int)uVar15 < 0 && (uVar14 & 0xf) != 0);
    EnsureSpriteAndLock(sVar10);
    if (in_stack_00000046 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 2;
    }
    FUN_100670ec(uVar8 - 0x88,uVar11);
    if (in_stack_00000042 == 1) {
      sVar12 = 0x14;
    }
    else {
      sVar12 = 0;
    }
    BlitSpriteNormal(((uVar16 & 0x3fffffff) * 4 + uVar16 & 0x3fffffff) * 4 + ZEXT48(puVar1),
                 (short)(((long long)param_1 +
                          ((long long)((int)uVar15 >> 4) +
                           (unsigned long long)((int)uVar15 < 0 && (uVar15 & 0xf) != 0) & 0xfffffff) * -0x10
                         & 0xffffffff) << 5),
                 (short)(((uVar18 & 0xfffffff) * 0x10 - uVar18 & 0xffffffff) << 1),0x20,0x1d,param_3
                 ,param_4,param_5 + sVar12);
    FUN_10067178(uVar8 - 0x88,2);
    UnlockAndReleaseSprite(sVar10);
  }
  return;

}

/* Address: 0x10008c0c Size: 472 bytes */
void FUN_10008c0c(short param_1,short param_2,long long param_3,short param_4,
                 short param_5)

{
  int uVar1;
  int *ppuVar2;
  unsigned long long uVar3;
  
  uVar1 = uRam10117450;
  ppuVar2 = 0 /* TVect base */;
  uVar3 = (unsigned long long)param_1;
  if (param_1 == 0xf) {
    uVar3 = 8;
  }
  EnsureSpriteLoaded(5);
  EnsureSpriteLoaded(0x26);
  if (param_2 == 0) {
    BlitSpriteNormal(uVar1,(short)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 3),0,0x28,0x28,
                 param_3,param_4,param_5);
  }
  else if (param_2 == 1) {
    BlitSpriteNormal(uVar1,(short)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 3),0x41,0x28,0x28,
                 param_3,param_4,param_5);
  }
  else if (param_2 == 2) {
    BlitSpriteNormal(uVar1,(short)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 3),0x28,0x28,0x19,
                 param_3,param_4,param_5);
  }
  else if (param_2 == 3) {
    BlitSpriteNormal(uVar1,(short)(((uVar3 & 0x3fffffff) * 4 + uVar3 & 0xffffffff) << 3) + 0x18,0x2e,
                 0x10,0x10,param_3,param_4,param_5);
  }
  else if (param_2 == 4) {
    BlitSpriteWithMask((*(int*)((char*)ppuVar2 - 0x112)),(short)((uVar3 & 0xffffffff) << 5),0x24,0x20,0x17,param_3,param_4,
                 param_5);
  }
  return;
}

/* Address: 0x10008de4 Size: 168 bytes */
void FUN_10008de4()

{
  int iVar1;
  int *piVar2;
  int *ppuVar3;
  int *puVar4;
  short sVar5;
  char *puVar6;
  short sVar7;
  int **local_2c;
  
  piVar2 = piRam10115cf0;
  ppuVar3 = 0 /* TVect base */;
  puVar4 = (int *)FUN_100f15e0(0x4440);
  *piVar2 = (int)puVar4;
  if (puVar4 != (int *)0x0) {
    DetachResource(puVar4);
    ppuVar3 = local_2c;
  }
  puVar6 = (char *)*puVar4;
  *(char **)(*(int*)((char*)ppuVar3 - 0x6eb)) = puVar6;
  sVar7 = 0;
  do {
    sVar5 = 0;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      sVar5 = sVar5 + 1;
    } while (sVar5 < 0x70);
    sVar7 = sVar7 + 1;
  } while (sVar7 < 0x9c);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    DisposeHandle_Thunk(iVar1);
  }
  return;
}

/* Address: 0x10008e8c Size: 228 bytes */
void FUN_10008e8c()

{
  unsigned char bVar1;
  short sVar2;
  int *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *ppuVar7;
  int iVar8;
  unsigned char *pbVar9;
  int iVar10;
  short sVar11;
  int **local_34;
  
  piVar6 = piRam10117354;
  piVar5 = piRam10115cf0;
  puVar3 = (int *)*piRam10115cf0;
  ppuVar7 = 0 /* TVect base */;
  if (puVar3 != (int *)0x0) {
    DetachResource(puVar3);
    ppuVar7 = local_34;
  }
  pbVar9 = (unsigned char *)*puVar3;
  *(unsigned char **)(*(int*)((char*)ppuVar7 - 0x6eb)) = pbVar9;
  sVar2 = *(short *)(*(int *)(*(int*)((char*)ppuVar7 - 0x151)) + 0x110);
  iVar8 = 0;
  do {
    iVar10 = 0;
    do {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      iVar4 = *piVar6 + iVar8 * 0x70;
      *(unsigned int *)(iVar4 + iVar10) =
           (unsigned int)((unsigned short)((unsigned short)bVar1 & (unsigned short)(1 << ((int)sVar2 & 0x3fU))) != 0) << 0x1d |
           *(unsigned int *)(iVar4 + iVar10) & 0xdfffffff;
      sVar11 = (short)iVar10 + 1;
      iVar10 = (int)sVar11;
    } while (sVar11 < 0x70);
    sVar11 = (short)iVar8 + 1;
    iVar8 = (int)sVar11;
  } while (sVar11 < 0x9c);
  if (*piVar5 != 0) {
    DisposeHandle_Thunk(*piVar5);
  }
  return;
}

/* Address: 0x1000931c Size: 516 bytes */
long long SetArmyDestination(long long param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  int bVar3;
  unsigned long long uVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar10;
  short sVar11;
  int iVar9;
  
  piVar5 = piRam10117354;
  if (*(short *)(*piRam1011735c + 0x124) == 0) {
    return 0;
  }
  if ((*psRam10117710 == 2) ||
     (*(char *)(*piRam1011735c + (*(unsigned int *)(*piRam10117358 + param_3 * 0xe0 + param_2 * 2) >> 0x18)
               + 0x711) == '\n')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar3 = !bVar3;
  if (bVar3) {
    sVar10 = -1;
  }
  else {
    sVar10 = -2;
  }
  sVar10 = param_2 + sVar10;
  iVar7 = (int)sVar10;
  if (bVar3) {
    sVar1 = 1;
  }
  else {
    sVar1 = 2;
  }
  if (bVar3) {
    sVar11 = -1;
  }
  else {
    sVar11 = -2;
  }
  sVar11 = param_3 + sVar11;
  if (bVar3) {
    sVar2 = 1;
  }
  else {
    sVar2 = 2;
  }
  iVar9 = iVar7;
  sVar8 = sVar10;
  do {
    uVar4 = (long long)sVar11;
    sVar6 = sVar11;
    if ((short)(param_2 + sVar1) < sVar8) {
      return 0;
    }
    while (sVar6 <= (short)(param_3 + sVar2)) {
      if ((((-1 < iVar9) && (iVar9 < 0x70)) && (-1 < (int)uVar4)) &&
         (((int)uVar4 < 0x9c &&
          ((*(unsigned int *)(*piRam10117354 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4) +
                     iVar9) >> 0x1d & 1) == 0)))) {
        while (uVar4 = (long long)sVar11, sVar8 = sVar11, sVar10 <= (short)(param_2 + sVar1)) {
          while (sVar8 <= (short)(param_3 + sVar2)) {
            if (((-1 < iVar7) && (iVar7 < 0x70)) && ((-1 < (int)uVar4 && ((int)uVar4 < 0x9c)))) {
              iVar9 = *piVar5 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4);
              *(unsigned int *)(iVar9 + iVar7) = *(unsigned int *)(iVar9 + iVar7) | 0x20000000;
            }
            sVar8 = (short)uVar4 + 1;
            uVar4 = (long long)sVar8;
          }
          sVar10 = (short)iVar7 + 1;
          iVar7 = (int)sVar10;
        }
        return 1;
      }
      sVar6 = (short)uVar4 + 1;
      uVar4 = (long long)sVar6;
    }
    sVar8 = (short)iVar9 + 1;
    iVar9 = (int)sVar8;
  } while( true );
}

/* Address: 0x10009520 Size: 212 bytes */

void FUN_10009520()

{
  short uVar1;
  int iVar2;
  short *puVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  piVar4 = piRam10117354;
  puVar3 = puRam10115ff8;
  iVar2 = FUN_10115cc4;
  uVar1 = *puRam10115ff8;
  *puRam10115ff8 = 0;
  sVar7 = 0;
  do {
    iVar9 = 0;
    do {
      iVar8 = 0;
      do {
        if ((*(unsigned int *)(*piVar4 + iVar8 * 0x70 + iVar9) >> 0x1d & 1) == 0) {
          iVar5 = FUN_10003d5c(iVar9,iVar8);
          if (*(char *)(iVar5 + iVar2) == -1) {
            iVar5 = *piVar4 + iVar8 * 0x70;
            *(unsigned int *)(iVar5 + iVar9) = *(unsigned int *)(iVar5 + iVar9) | 0x20000000;
          }
        }
        sVar6 = (short)iVar8 + 1;
        iVar8 = (int)sVar6;
      } while (sVar6 < 0x9c);
      sVar6 = (short)iVar9 + 1;
      iVar9 = (int)sVar6;
    } while (sVar6 < 0x70);
    sVar7 = sVar7 + 1;
  } while (sVar7 < 2);
  *puVar3 = uVar1;
  return;
}



















































































































































































































/* Address: 0x100095fc Size: 52 bytes */
void FUN_100095fc()

{
  FUN_10000ff0(*puRam1011742c,0xffffffffffffffff,0x4440);
  return;
}

/* Address: 0x10009630 Size: 208 bytes */
unsigned short FUN_10009630(short param_1,short param_2,short param_3)

{
  int iVar1;
  long long lVar2;
  long long lVar3;
  
  if (*(short *)(*piRam1011735c + 0x124) == 0) {
    return 1;
  }
  if (param_1 != 1) {
    return 0;
  }
  iVar1 = *piRam1011735c;
  if ((((*(short *)(iVar1 + 0x178) <= param_2) && (param_2 <= *(short *)(iVar1 + 0x17c))) &&
      (*(short *)(iVar1 + 0x176) <= param_3)) && (param_3 <= *(short *)(iVar1 + 0x17a))) {
    lVar2 = -(long long)
             *(char *)(*piRam1011742c + ((int)param_2 - (int)*(short *)(iVar1 + 0x178)) * 0x9c +
                      (int)(short)(param_3 - *(short *)(iVar1 + 0x176)));
    lVar3 = lVar2 + 0xe;
    return (short)lVar3 + (-(unsigned short)(lVar3 == 0) - ((short)lVar2 + 0xd));
  }
  return (unsigned short)((unsigned int)*(int *)(*piRam10117354 + param_3 * 0x70 + (int)param_2) >> 0x1d) & 1
  ;
}

/* Address: 0x10009700 Size: 580 bytes */
void FUN_10009700()

{
  int *piVar1;
  int iVar2;
  long long lVar3;
  int bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  long long uVar9;
  unsigned short uVar10;
  short sVar12;
  int iVar11;
  unsigned long long uVar13;
  int iVar14;
  long long lVar15;
  short sVar16;
  
  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  piVar6 = piRam10115cf4;
  piVar5 = piRam10115cf0;
  if (*(short *)(*piRam1011735c + 0x124) != 0) {
    bVar4 = true;
    sVar16 = 0;
    uVar10 = 0;
    uVar13 = 0;
    do {
      iVar14 = *piRam1011735c + (int)((uVar13 & 0xffffffff) << 1);
      if (*(short *)(iVar14 + 0xd0) == 0) {
        if (*(short *)(iVar14 + 0x138) != 0) {
          sVar16 = sVar16 + 1;
          goto LAB_10009778;
        }
LAB_10009790:
        uVar10 = uVar10 | (unsigned short)(1 << ((unsigned int)uVar13 & 0x3f));
      }
      else {
LAB_10009778:
        if (*(short *)(*piRam1011735c + (int)((uVar13 & 0xffffffff) << 1) + 0x138) == 0)
        goto LAB_10009790;
      }
      sVar12 = (short)uVar13 + 1;
      uVar13 = (unsigned long long)sVar12;
    } while (sVar12 < 8);
    piVar1 = (int *)*piRam10115cf0;
    if (piVar1 != (int *)0x0) {
      DetachResource(piVar1);
    }
    *piVar6 = *piVar1;
    iVar14 = 0;
    if (0 < *(short *)(*piVar8 + 0x1602)) {
      do {
        iVar2 = *piVar8 + iVar14 * 0x42;
        iVar11 = (int)*(short *)(iVar2 + 0x1606);
        sVar12 = *(short *)(iVar2 + 0x1604);
        lVar3 = -(long long)
                 *(char *)(*piVar8 + (*(unsigned int *)(*piVar7 + iVar11 * 0xe0 + sVar12 * 2) >> 0x18) +
                          0x711);
        lVar15 = lVar3 + 10;
        if (((lVar15 + (-(unsigned long long)(lVar15 == 0) - (lVar3 + 9)) & 0xff) == 0) &&
           (iVar11 = *piVar6 + iVar11 * 0x70, iVar2 = iVar11 + sVar12,
           (unsigned short)((unsigned short)(unsigned char)(*(unsigned char *)(iVar11 + sVar12) | *(unsigned char *)(iVar2 + 1) |
                                   *(unsigned char *)(iVar2 + 0x70) | *(unsigned char *)(iVar2 + 0x71)) |
                   uVar10 & 0xff) != 0xff)) {
          bVar4 = false;
          break;
        }
        sVar12 = (short)iVar14 + 1;
        iVar14 = (int)sVar12;
      } while (sVar12 < *(short *)(*piVar8 + 0x1602));
    }
    if (*piVar5 != 0) {
      DisposeHandle_Thunk(*piVar5);
    }
    if (bVar4) {
      *(short *)(*piVar8 + 0x124) = 0;
      FUN_100095fc();
      if (sVar16 < 1) {
        uVar9 = FUN_1005f678(0x13,0);
        FUN_1003cac4(uVar9,0xf);
      }
      else {
        uVar9 = FUN_1005f678(0x13,0);
        FUN_1003cac4(uVar9,0x19);
      }
    }
  }
  return;
}

/* Address: 0x10009944 Size: 112 bytes */
void FUN_10009944(long long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = iRam10117428;
  iVar1 = iRam10117424;
  *(unsigned int *)(iRam10117428 + 0x28) = *(unsigned int *)(iRam10117428 + 0x28) & 0x7fffffff;
  FUN_10003960(iVar2 + 0x1c,param_1);
  *(unsigned int *)(iVar1 + 0x28) = *(unsigned int *)(iVar1 + 0x28) & 0x7fffffff;
  FUN_10003960(iVar1 + 0x1c,param_1);
  return;
}

/* Address: 0x100099b4 Size: 24 bytes */
void FUN_100099b4()

{
  *(unsigned int *)(iRam10117428 + 0x28) = *(unsigned int *)(iRam10117428 + 0x28) & 0x7fffffff;
  return;
}

/* Address: 0x10009a0c Size: 140 bytes */

void FUN_10009a0c()

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_10116698;
  piVar1 = piRam10115cfc;
  SetRect4(FUN_10116698,0,0,100,100);
  *(short *)(iVar2 + 8) = 0xf0;
  *(char *)(iVar2 + 10) = 0;
  *(char *)(iVar2 + 0xb) = 4;
  *(int *)(iVar2 + 0x10) = 0;
  if (*piVar1 == 0) {
    iVar2 = FUN_100ead08(0);
    *piVar1 = iVar2;
    FUN_100ead98();
  }
  return;
}





































































































/* Address: 0x1000a4e8 Size: 484 bytes */
void FUN_1000a4e8()

{
  short sVar1;
  int *piVar2;
  int *puVar3;
  unsigned int dVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  long long uVar5;
  char uVar9;
  int *puVar10;
  char cVar11;
  int local_2cc;
  int local_2a8 [79];
  char auStack_16c [8];
  char auStack_164 [356];
  
  dVar4 = 0;
  puVar3 = puRam101176dc;
  piVar2 = piRam10115cfc;
  if (*piRam10115cfc != 0) {
    piVar6 = (int *)FUN_10001170();
    sVar1 = *(short *)(**(int **)(*piVar6 + 0x16) + 0x20);
    if (sVar1 == 8) {
      local_2a8[0] = 0;
    }
    else {
      local_2a8[0] = **(int **)(local_2cc + -0x1cc);
    }
    FUN_100ec3d4(auStack_164,*piVar2,1);
    iVar7 = FUN_100ec4b8(auStack_164);
    iVar8 = FUN_100ebf44(auStack_164);
    while (iVar8 != 0) {
      if (((*(int *)(iVar7 + 0x10) != 0) && (*(char *)(iVar7 + 0xb) != '\x01')) &&
         (uVar5 = HLock_Thunk(*(int *)(iVar7 + 0x10)), (int)uVar5 != 0)) {
        iVar8 = FUN_10001d70(uVar5);
        if (iVar8 == 0) {
          FUN_1000a094(iVar7);
        }
        else {
          HUnlock_Thunk(uVar5);
          SetMacRect(auStack_16c,0,0,*(short *)(iVar7 + 4),*(short *)(iVar7 + 6));
          cVar11 = '\x01';
          if (*(char *)(iVar7 + 0xb) != '\x01') {
            if (sVar1 == 8) {
              cVar11 = '\0';
            }
            else {
              cVar11 = '\b';
            }
          }
          uVar9 = FUN_100f1574(1);
          puVar10 = local_2a8;
          if (cVar11 == '\x01') {
            puVar10 = puVar3;
          }
          NewGWorld_Wrapper(iVar7 + 0x10,cVar11,auStack_16c,*puVar10,0,0x10000000);
          *(char *)dVar4 = uVar9;
        }
      }
      iVar7 = FUN_100ec540(auStack_164);
      iVar8 = FUN_100ebf44(auStack_164);
    }
    FUN_100ec44c(auStack_164,2);
  }
  return;
}





















































































































































































































































































































































/* Address: 0x1000a958 Size: 140 bytes - stubbed: callers pass 6 args vs 7 params */
void FUN_1000a958()

{
  return;
}

/* Address: 0x1000a9e4 Size: 196 bytes */
void FUN_1000a9e4(short param_1,short param_2,short param_3)

{
  short *puVar1;
  short *puVar2;
  int *ppuVar3;
  char auStack_28 [4];
  short local_24;
  short local_22;
  char auStack_20 [8];
  char auStack_18 [24];
  
  puVar2 = puRam1011745c;
  puVar1 = puRam10115d04;
  ppuVar3 = 0 /* TVect base */;
  FUN_1000a958(auStack_28,auStack_20,auStack_18,param_1,param_2,param_3);
  puVar2[1] = 0;
  *puVar2 = 0;
  SetRect4((*(int*)((char*)ppuVar3 - 0x110)),0,0,local_24,local_22);
  EnsureSpriteLoaded(0x1d);
  BlitSpriteNormal((*(int*)((char*)ppuVar3 - 0x78)),*puVar1,puVar1[1],puVar1[2],puVar1[3],(*(int*)((char*)ppuVar3 - 0x482)),*puVar2,
               puVar2[1]);
  return;
}




















































































































/* Address: 0x1000aaa8 Size: 200 bytes */
void FUN_1000aaa8(long long param_1,long long param_2)

{
  unsigned short uVar1;
  short *psVar2;
  
  psVar2 = psRam10117460;
  SetDrawColor(2,7,0xff,0xf9);
  uVar1 = psVar2[2];
  FUN_1005f1d0(*psVar2 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar2[1] + 0xb,param_1);
  SetDrawColor(2,0xe0,0xff,0xf9);
  uVar1 = psVar2[2];
  FUN_1005f1d0(*psVar2 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar2[1] + 0x23,param_2);
  return;
}

/* Address: 0x1000ab70 Size: 316 bytes */

void FUN_1000ab70(short param_1,short param_2)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  int uVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short local_20 [16];
  
  iVar6 = iRam101174ac;
  psVar5 = psRam10117460;
  uVar4 = FUN_10116698;
  FUN_1002122c(param_1,param_2,local_20);
  if (local_20[0] != 0) {
    FUN_10021a3c(local_20[0],iVar6,0);
    sVar1 = psVar5[1];
    uVar2 = psVar5[2];
    sVar7 = (short)((short)(((*psVar5 +
                             ((short)uVar2 >> 1) + (unsigned short)((short)uVar2 < 0 && (uVar2 & 1) != 0)) -
                            (short)(local_20[0] * 0x18 >> 1)) + -0x10) + 4 >> 3) << 3;
    iVar9 = 0;
    if (0 < local_20[0]) {
      do {
        iVar3 = *(int *)(iVar9 * 4 + iVar6);
        FUN_1000873c(*(char *)(iVar3 + 4),*(char *)(iVar3 + 5),uVar4,sVar7,sVar1 + 0x10,
                     0,0,*(char *)(iVar3 + 7));
        sVar7 = sVar7 + 0x18;
        sVar8 = (short)iVar9 + 1;
        iVar9 = (int)sVar8;
      } while (sVar8 < local_20[0]);
    }
  }
  return;
}




































































































































































































/* Address: 0x1000acac Size: 1044 bytes */


void FUN_1000acac()
{
  short param_1 = 0;

  char cVar1;
  unsigned short uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int *puVar9;
  short *psVar10;
  int uVar11;
  int *piVar12;
  unsigned int *puVar13;
  short *psVar14;
  short *psVar15;
  int *ppuVar16;
  short sVar17;
  long long lVar18;
  long long lVar19;
  unsigned long long uVar20;
  int iVar21;
  int local_6c;
  char auStack_48 [16];
  int local_38;
  
  psVar15 = psRam10117460;
  psVar14 = psRam1011745c;
  puVar13 = puRam1011735c;
  piVar12 = piRam10117358;
  uVar11 = FUN_10116698;
  psVar10 = psRam10115d0c;
  puVar9 = puRam10115d08;
  ppuVar16 = 0 /* TVect base */;
  uVar20 = (unsigned long long)param_1;
  SetDrawColor(2,0xe0,0xff,0xf9);
  uVar2 = psVar15[2];
  lVar19 = ((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0x7fffffff) * 2;
  FUN_1005f1d0(*psVar15 + ((short)uVar2 >> 1) + (unsigned short)((short)uVar2 < 0 && (uVar2 & 1) != 0) + -8,
               psVar15[1] + 0xb,(unsigned long long)*puVar13 + lVar19 + 0x1608);
  iVar21 = (int)lVar19 + *puVar13;
  lVar19 = -(long long)
            *(char *)(*puVar13 +
                      (*(unsigned int *)(*piVar12 + *(short *)(iVar21 + 0x1606) * 0xe0 +
                                *(short *)(iVar21 + 0x1604) * 2) >> 0x18) + 0x711);
  lVar18 = lVar19 + 10;
  if ((lVar18 + (-(unsigned long long)(lVar18 == 0) - (lVar19 + 9)) & 0xff) == 0) {
    iVar21 = (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1);
    cVar1 = *(char *)(*puVar13 + iVar21 + 0x1619);
    if (cVar1 < '\b') {
      FUN_10008c0c(cVar1,3,uVar11,*psVar15 + 0x18,psVar15[1] + 10);
      FUN_10008c0c(*(char *)(*puVar13 + iVar21 + 0x1619),3,uVar11,
                   *psVar15 + psVar15[2] + -0x30,psVar15[1] + 10);
    }
    sVar17 = *psVar10;
    sVar5 = *psVar14;
    local_38 = CONCAT22(sVar17 + sVar5,((short)local_38));
    sVar3 = psVar10[1];
    sVar4 = psVar14[1];
    FUN_1004602c(8,*puVar9,puVar9[1],local_38,0x24,0xf);
    iVar21 = (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1);
    DrawNumber(auStack_48,ZEXT48((*(int*)((char*)ppuVar16 - 0x6e8))) + 8,*(short *)(*puVar13 + iVar21 + 0x162e)
                );
    FUN_1005f1a0(sVar17 + sVar5 + 0x20,sVar3 + sVar4 + -3,auStack_48);
    sVar17 = psVar10[2];
    sVar5 = *psVar14;
    local_38 = CONCAT22(sVar17 + sVar5,((short)local_38));
    FUN_1004602c(8,puVar9[2],puVar9[3],local_38,0x24,0xf);
    DrawNumber(auStack_48,(unsigned long long)*(unsigned int *)(local_6c + -0x1ba0) + 0xc,
                 *(char *)(iVar21 + *puVar13 + 0x1618));
    FUN_1005f1a0(sVar17 + sVar5 + 0x20,((short)local_38) + -3,auStack_48);
  }
  else {
    uVar2 = psVar15[2];
    FUN_1005f1d0(*psVar15 + ((short)uVar2 >> 1) + (unsigned short)((short)uVar2 < 0 && (uVar2 & 1) != 0) +
                 -8,psVar15[1] + 0x23,(*(int*)((char*)ppuVar16 - 0x6e8)));
  }
  iVar21 = 0;
  while( true ) {
    uVar6 = *puVar13;
    iVar7 = uVar6 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1);
    sVar17 = *(short *)(iVar7 + 0x1604);
    iVar8 = uVar6 + iVar21 * 0x14;
    if ((*(short *)(iVar8 + 0x194) == sVar17) &&
       (sVar5 = *(short *)(iVar7 + 0x1606), *(short *)(iVar8 + 0x196) == sVar5)) break;
    sVar17 = (short)iVar21 + 1;
    iVar21 = (int)sVar17;
    if (7 < sVar17) {
      return;
    }
  }
  lVar19 = -(long long)
            *(char *)(uVar6 + (*(unsigned int *)(*piVar12 + sVar5 * 0xe0 + sVar17 * 2) >> 0x18) + 0x711);
  lVar18 = lVar19 + 10;
  if ((lVar18 + (-(unsigned long long)(lVar18 == 0) - (lVar19 + 9)) & 0xff) != 0) {
    FUN_10008c0c(iVar21,4,uVar11,*psVar15 + 0x10,psVar15[1] + 10);
    FUN_10008c0c(iVar21,4,uVar11,*psVar15 + psVar15[2] + -0x38,psVar15[1] + 10);
    return;
  }
  uVar2 = psVar15[2];
  FUN_10008c0c(iVar21,4,uVar11,
               *psVar15 + ((short)uVar2 >> 1) + (unsigned short)((short)uVar2 < 0 && (uVar2 & 1) != 0) +
               -0x18,psVar15[1] + 0x22);
  return;

}





























































































































































































































































































































































































































































































































































/* Address: 0x1000b0c0 Size: 440 bytes */
void FUN_1000b0c0()
{
  short param_1 = 0;

  unsigned short uVar1;
  int *piVar2;
  short *psVar3;
  int *ppuVar4;
  int iVar5;
  
  psVar3 = psRam10117460;
  piVar2 = piRam1011735c;
  ppuVar4 = 0 /* TVect base */;
  iVar5 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2;
  SetDrawColor(2,*(short *)(iVar5 + 0xa0),*(short *)(iVar5 + 0xb0),0xf9);
  uVar1 = psVar3[2];
  iVar5 = param_1 * 0x20;
  FUN_1005f1d0(*psVar3 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar3[1] + 0xb,*piVar2 + iVar5 + 0x816);
  SetDrawColor(2,0xe0,0xff,0xf9);
  if (*(char *)(iVar5 + *piVar2 + 0x82a) == '\x01') {
    uVar1 = psVar3[2];
    FUN_1005f1d0(*psVar3 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8
                 ,psVar3[1] + 0x23,ZEXT48((*(int*)((char*)ppuVar4 - 0x6e8))) + 0x10);
  }
  else {
    iVar5 = *piVar2 + param_1 * 0x20;
    if ((*(unsigned int *)(*(int *)(*(int*)((char*)ppuVar4 - 0x152)) + *(short *)(iVar5 + 0x814) * 0xe0 +
                  *(short *)(iVar5 + 0x812) * 2) >> 0x16 & 1) == 0) {
      uVar1 = psVar3[2];
      FUN_1005f1d0(*psVar3 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) +
                   -8,psVar3[1] + 0x23,ZEXT48((*(int*)((char*)ppuVar4 - 0x6e8))) + 0x24);
    }
    else {
      uVar1 = psVar3[2];
      FUN_1005f1d0(*psVar3 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) +
                   -8,psVar3[1] + 0x21,ZEXT48((*(int*)((char*)ppuVar4 - 0x6e8))) + 0x30);
    }
  }
  return;

}

/* Address: 0x1000b278 Size: 352 bytes */
void FUN_1000b278(short param_1,short param_2)

{
  unsigned short uVar1;
  short *puVar2;
  short *puVar3;
  short *psVar4;
  int *ppuVar5;
  char auStack_a8 [56];
  char auStack_70 [56];
  char auStack_38 [4];
  short local_34;
  short local_32;
  char auStack_30 [8];
  char auStack_28 [40];
  
  psVar4 = psRam10117460;
  puVar3 = puRam1011745c;
  puVar2 = puRam10115d04;
  ppuVar5 = 0 /* TVect base */;
  FUN_1000a958(auStack_38,auStack_30,auStack_28,param_1,param_2,1);
  puVar3[1] = 0;
  *puVar3 = 0;
  SetRect4(psVar4,0,0,local_34,local_32);
  EnsureSpriteLoaded(0x24);
  BlitSpriteNormal((*(int*)((char*)ppuVar5 - 0x78)),*puVar2,puVar2[1],puVar2[2],puVar2[3],(*(int*)((char*)ppuVar5 - 0x482)),*puVar3,
               puVar3[1]);
  FUN_1005ba1c(param_1,param_2,auStack_70,auStack_a8);
  SetDrawColor(2,0xe0,0xff,0xf9);
  uVar1 = psVar4[2];
  FUN_1005f1d0(*psVar4 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar4[1] + 0xb,auStack_70);
  uVar1 = psVar4[2];
  FUN_1005f1d0(*psVar4 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar4[1] + 0x23,auStack_a8);
  return;
}





















































































































































































/* Address: 0x1000b3d8 Size: 832 bytes */
void FUN_1000b3d8(short param_1,short param_2,short param_3,char param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int *piVar3;
  int *piVar4;
  int *ppuVar5;
  unsigned int uVar8;
  int iVar9;
  long long uVar6;
  long long uVar7;
  long long lVar10;
  unsigned long long uVar11;
  unsigned long long uVar12;
  
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  ppuVar5 = 0 /* TVect base */;
  uVar11 = (unsigned long long)param_2;
  uVar12 = (unsigned long long)param_1;
  uVar8 = *(unsigned int *)(*piRam10117358 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                   (int)((uVar12 & 0xffffffff) << 1));
  uVar1 = (unsigned short)(uVar8 >> 0x10) & 0xf;
  lVar10 = (long long)*(char *)(*piRam1011735c + (uVar8 >> 0x18) + 0x711);
  if ((*(unsigned int *)(*piRam10117354 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 4) +
                (int)param_1) >> 0x18 & 0x1f) != 0) {
    lVar10 = 0;
  }
  uVar2 = (unsigned short)((unsigned int)*(int *)
                          (*piRam10117358 +
                           (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                          (int)((uVar12 & 0xffffffff) << 1)) >> 0x10);
  uVar8 = FUN_1003b4a4(uVar12,uVar11,param_4);
  if (param_3 == 1) {
    if (0xb < uVar8) {
      return;
    }
    return;
  }
  if (param_3 != 2) {
    return;
  }
  iVar9 = FUN_10009630(1,uVar12,uVar11);
  if (iVar9 != 0) {
    if (((uVar2 >> 4 & 1) == 0) ||
       (((iVar9 = *piVar4, *(short *)(iVar9 + 0x12a) == 0 && (uVar1 != *(unsigned short *)(iVar9 + 0x110)))
        && ((*(unsigned int *)(*piVar3 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                      (int)((uVar12 & 0xffffffff) << 1)) >> 0x15 & 1) == 0)))) {
      iVar9 = (int)lVar10;
      if (iVar9 == 10) {
        FUN_1000a9e4(uVar12,uVar11,1);
        LookupCityAtPos(uVar12,uVar11);
        FUN_1000acac();
      }
      else if (iVar9 == 0xb) {
        uVar6 = LookupCityAtPos(uVar12,uVar11);
        if ((int)uVar6 < 0) {
          FUN_1000a9e4(uVar12,uVar11,1);
          LookupRuinAtPos(uVar12,uVar11);
          FUN_1000b0c0();
        }
        else {
          FUN_1000a9e4(uVar12,uVar11,1);
          FUN_1000acac(uVar6);
        }
      }
      else if (iVar9 == 9) {
        FUN_1000b278(uVar12,uVar11);
      }
      else {
        FUN_1000a9e4(uVar12,uVar11,1);
        if ((uVar2 >> 7 & 1) == 0) {
          uVar6 = FUN_1005f678(0x82,lVar10);
          uVar7 = FUN_1002b6a8(lVar10);
          FUN_1000aaa8(uVar7,uVar6);
        }
        else {
          FUN_1000aaa8(ZEXT48((*(int*)((char*)ppuVar5 - 0x6e8))) + 0x3c,ZEXT48((*(int*)((char*)ppuVar5 - 0x6e8))) + 0x44);
        }
      }
    }
    else {
      FUN_1000a9e4(uVar12,uVar11,1);
      if (((*(unsigned int *)(*piVar3 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                     (int)((uVar12 & 0xffffffff) << 1)) >> 0x15 & 1) != 0) &&
         (uVar1 != *(unsigned short *)(*piVar4 + 0x110))) {
        uVar6 = FUN_1005f678(0x83,1);
        uVar7 = FUN_1005f678(0x83,0);
        FUN_1000aaa8(uVar7,uVar6);
        return;
      }
      FUN_1000ab70(uVar12,uVar11);
    }
    return;
  }
  return;
}






































































































































































































































































































































































































































































































/* Address: 0x1000b940 Size: 280 bytes */
void FUN_1000b940(long long param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = (short)(param_2 + 4 >> 3) << 3;
  sVar3 = 0x78;
  if (0x78 < sVar1) {
    sVar3 = sVar1;
  }
  sVar1 = 0x208;
  if (sVar3 < 0x208) {
    sVar1 = sVar3;
  }
  sVar3 = 0x40;
  if (0x40 < param_3) {
    sVar3 = param_3;
  }
  sVar2 = 0x19e;
  if (sVar3 < 0x19e) {
    sVar2 = sVar3;
  }
  SetRect4(param_1,sVar1 + -0x78,sVar2 + -0x40,0xf0,0x80);
  SetRect4(param_1,0,0,0xf0,0x80);
  return;
}

/* Address: 0x1000ba58 Size: 1024 bytes */

void FUN_1000ba58(short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6,short param_7)

{
  short *puVar1;
  int uVar2;
  int *piVar3;
  int uVar4;
  short *psVar5;
  int *ppuVar6;
  int iVar7;
  long long uVar8;
  unsigned long long uVar9;
  int local_a4;
  char auStack_70 [4];
  short local_6c;
  short local_6a;
  char auStack_68 [104];
  
  psVar5 = psRam1011745c;
  uVar4 = uRam1011744c;
  piVar3 = piRam10117364;
  uVar2 = FUN_10116698;
  puVar1 = puRam10115d10;
  ppuVar6 = 0 /* TVect base */;
  uVar9 = (unsigned long long)param_1;
  FUN_1000b940(auStack_70,param_6,param_7);
  psVar5[1] = 0;
  *psVar5 = 0;
  SetRect4((*(int*)((char*)ppuVar6 - 0x110)),0,0,local_6c,local_6a);
  EnsureSpriteLoaded(0x28);
  BlitSpriteWithMask((*(int*)((char*)ppuVar6 - 0x78)),*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar2,*psVar5,psVar5[1]);
  SetDrawColor(2,0xe0,0xff,0xf9);
  uVar8 = FUN_1004a21c(uVar9);
  FUN_1005f1d0(*psVar5 + 0x70,psVar5[1] + 8,uVar8);
  FUN_1000873c(uVar9,*(short *)(*(int *)(*(int*)((char*)ppuVar6 - 0x151)) + 0x110),uVar2,*psVar5 + 0x60,
               psVar5[1] + 0x1f,0,0);
  DrawNumber(auStack_68,ZEXT48((*(int*)((char*)ppuVar6 - 0x6e8))) + 100,param_3);
  iVar7 = local_a4;
  FUN_1005f200(*psVar5 + 0x68,psVar5[1] + 0x42,auStack_68);
  DrawNumber(auStack_68,(unsigned long long)*(unsigned int *)(iVar7 + -0x1ba0) + 0x74,param_5);
  iVar7 = local_a4;
  FUN_1005f1a0(*psVar5 + 0x78,psVar5[1] + 0x42,auStack_68);
  DrawNumber(auStack_68,(unsigned long long)*(unsigned int *)(iVar7 + -0x1ba0) + 0x84,param_2);
  FUN_1005f200(*psVar5 + 0x68,psVar5[1] + 0x56,auStack_68);
  DrawNumber(auStack_68,(unsigned long long)*(unsigned int *)(local_a4 + -0x1ba0) + 0x90,param_4);
  FUN_1005f1a0(*psVar5 + 0x78,psVar5[1] + 0x56,auStack_68);
  if (*(char *)(*piVar3 + (int)(((uVar9 & 0x3fffffff) * 4 - uVar9 & 0xffffffff) << 1)) == '\0') {
    iVar7 = *piVar3 + (int)(((uVar9 & 0x3fffffff) * 4 - uVar9 & 0xffffffff) << 1);
    if (*(char *)(iVar7 + 1) == '\0') {
      if (*(char *)(*piVar3 + (int)(((uVar9 & 0x3fffffff) * 4 - uVar9 & 0xffffffff) << 1) + 2) !=
          '\0') {
        BlitSpriteNormal(uVar4,0x98,0x1e,0x20,10,uVar2,*psVar5 + 0x60,psVar5[1] + 0x67);
      }
    }
    else if (*(char *)(iVar7 + 2) == '\0') {
      BlitSpriteNormal(uVar4,0xf8,0x1e,0x20,10,uVar2,*psVar5 + 0x60,psVar5[1] + 0x67);
    }
    else {
      BlitSpriteNormal(uVar4,0xd8,0x1e,0x20,10,uVar2,*psVar5 + 0x60,psVar5[1] + 0x67);
    }
  }
  else {
    BlitSpriteNormal(uVar4,0xb8,0x1e,0x20,10,uVar2,*psVar5 + 0x60,psVar5[1] + 0x67);
  }
  return;
}
















































































































































































































































































































































/* Address: 0x1000be58 Size: 1444 bytes */

void FUN_1000be58(short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6,short param_7,short param_8)

{
  int iVar1;
  short *puVar2;
  short *puVar3;
  int uVar4;
  unsigned int *puVar5;
  int *piVar6;
  int uVar7;
  short *psVar8;
  int *ppuVar9;
  long long uVar10;
  unsigned long long uVar11;
  unsigned long long uVar12;
  char auStack_80 [4];
  short local_7c;
  short local_7a;
  char auStack_78 [120];
  
  psVar8 = psRam1011745c;
  uVar7 = uRam1011744c;
  piVar6 = piRam10117364;
  puVar5 = puRam1011735c;
  uVar4 = FUN_10116698;
  puVar3 = puRam10115fcc;
  puVar2 = puRam10115d10;
  ppuVar9 = 0 /* TVect base */;
  uVar11 = (unsigned long long)param_1;
  if (param_1 != -1) {
    FUN_1000b940(auStack_80,param_7,param_8);
    psVar8[1] = 0;
    *psVar8 = 0;
    SetRect4((*(int*)((char*)ppuVar9 - 0x110)),0,0,local_7c,local_7a);
    EnsureSpriteLoaded(0x28);
    BlitSpriteWithMask((*(int*)((char*)ppuVar9 - 0x78)),*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar4,*psVar8,psVar8[1]);
    SetDrawColor(2,0xe0,0xff,0xf9);
    if (param_1 == 0x1c) {
      FUN_1005f1d0(*psVar8 + 0x70,psVar8[1] + 8,
                   (unsigned long long)*puVar5 +
                   (((long long)param_6 & 0x3fffffffU) * 4 + (long long)param_6 & 0x3fffffff) * 4 +
                   0x224);
    }
    else {
      uVar10 = FUN_1004a21c(uVar11);
      FUN_1005f1d0(*psVar8 + 0x70,psVar8[1] + 8,uVar10);
    }
    FUN_1000873c(uVar11,*(short *)(*puVar5 + 0x110),uVar4,*psVar8 + 0x60,psVar8[1] + 0x1f,0,0);
    if ((param_1 != 0x1c) && (0 < param_6)) {
      BlitSpriteNormal(uVar7,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar4,*psVar8 + 0x80,psVar8[1] + 0x24
                  );
      if (1 < param_6) {
        BlitSpriteNormal(uVar7,puVar3[4],puVar3[5],puVar3[6],puVar3[7],uVar4,*psVar8 + 0x58,
                     psVar8[1] + 0x24);
      }
      if (2 < param_6) {
        BlitSpriteNormal(uVar7,puVar3[8],puVar3[9],puVar3[10],puVar3[0xb],uVar4,*psVar8 + 0x80,
                     psVar8[1] + 0x2d);
      }
      if (3 < param_6) {
        BlitSpriteNormal(uVar7,puVar3[0xc],puVar3[0xd],puVar3[0xe],puVar3[0xf],uVar4,*psVar8 + 0x58,
                     psVar8[1] + 0x2d);
      }
    }
    SetDrawColor(2,0xe0,0xff,0xf9);
    uVar12 = ZEXT48((*(int*)((char*)ppuVar9 - 0x6e8)));
    DrawNumber(auStack_78,uVar12 + 0x9c,param_3);
    FUN_1005f200(*psVar8 + 0x68,psVar8[1] + 0x42,auStack_78);
    DrawNumber(auStack_78,uVar12 + 0xac,param_2);
    FUN_1005f1a0(*psVar8 + 0x78,psVar8[1] + 0x42,auStack_78);
    DrawNumber(auStack_78,uVar12 + 0xbc,param_5);
    FUN_1005f200(*psVar8 + 0x68,psVar8[1] + 0x56,auStack_78);
    DrawNumber(auStack_78,uVar12 + 200,param_4);
    FUN_1005f1a0(*psVar8 + 0x78,psVar8[1] + 0x56,auStack_78);
    if (*(char *)(*piVar6 + (int)(((uVar11 & 0x3fffffff) * 4 - uVar11 & 0xffffffff) << 1)) == '\0')
    {
      iVar1 = *piVar6 + (int)(((uVar11 & 0x3fffffff) * 4 - uVar11 & 0xffffffff) << 1);
      if (*(char *)(iVar1 + 1) == '\0') {
        if (*(char *)(*piVar6 + (int)(((uVar11 & 0x3fffffff) * 4 - uVar11 & 0xffffffff) << 1) + 2)
            != '\0') {
          BlitSpriteNormal(uVar7,0x98,0x1e,0x20,10,uVar4,*psVar8 + 0x60,psVar8[1] + 0x67);
        }
      }
      else if (*(char *)(iVar1 + 2) == '\0') {
        BlitSpriteNormal(uVar7,0xf8,0x1e,0x20,10,uVar4,*psVar8 + 0x60,psVar8[1] + 0x67);
      }
      else {
        BlitSpriteNormal(uVar7,0xd8,0x1e,0x20,10,uVar4,*psVar8 + 0x60,psVar8[1] + 0x67);
      }
    }
    else {
      BlitSpriteNormal(uVar7,0xb8,0x1e,0x20,10,uVar4,*psVar8 + 0x60,psVar8[1] + 0x67);
    }
  }
  return;
}






































































































































































































































































































































































































































































































/* Address: 0x1000c3fc Size: 200 bytes */
void FUN_1000c3fc(long long param_1,long long param_2)

{
  unsigned short uVar1;
  short *psVar2;
  
  psVar2 = psRam10117460;
  SetDrawColor(2,7,0xff,0xf9);
  uVar1 = psVar2[2];
  FUN_1005f1d0(*psVar2 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar2[1] + 0xb,param_1);
  SetDrawColor(2,0xe0,0xff,0xf9);
  uVar1 = psVar2[2];
  FUN_1005f1d0(*psVar2 + ((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0) + -8,
               psVar2[1] + 0x23,param_2);
  return;
}

/* Address: 0x1000c4c4 Size: 388 bytes */
void FUN_1000c4c4(short param_1,short param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *ppuVar6;
  int iVar7;
  char cVar8;
  unsigned long long uVar9;
  unsigned long long uVar10;
  int local_28;
  
  iVar5 = iRam101176c0;
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  ppuVar6 = 0 /* TVect base */;
  uVar9 = (unsigned long long)param_2;
  uVar10 = (unsigned long long)param_1;
  iVar7 = FUN_10009630(1,uVar10,uVar9);
  if (iVar7 != 0) {
    uVar1 = *(unsigned int *)(*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 5) +
                     (int)((uVar10 & 0xffffffff) << 1));
    cVar8 = *(char *)(*piVar4 + (uVar1 >> 0x18) + 0x711);
    if ((*(unsigned int *)(*(int *)(*(int*)((char*)ppuVar6 - 0x153)) +
                   (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 4) + (int)param_1) >>
         0x18 & 0x1f) != 0) {
      cVar8 = '\0';
    }
    uVar2 = *(unsigned int *)(*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 5) +
                     (int)((uVar10 & 0xffffffff) << 1));
    if ((((unsigned short)(uVar2 >> 0x14) & 1) == 0) ||
       (((iVar7 = *piVar4, *(short *)(iVar7 + 0x12a) == 0 &&
         (((unsigned short)(uVar1 >> 0x10) & 0xf) != *(unsigned short *)(iVar7 + 0x110))) &&
        ((uVar2 >> 0x15 & 1) == 0)))) {
      if ((cVar8 == '\n') || (cVar8 == '\v')) {
        EnsureSpriteLoaded(0x1d);
      }
      else if (cVar8 == '\t') {
        EnsureSpriteLoaded(0x24);
      }
      else {
        EnsureSpriteLoaded(0x1d);
      }
    }
    else {
      EnsureSpriteLoaded(0x1d);
    }
    local_28 = CONCAT22(*(short *)(iVar5 + 6),*(short *)(iVar5 + 4));
    *param_3 = local_28;
    return;
  }
  *param_3 = *(int *)(*(int*)((char*)ppuVar6 - 0x398));
  return;
}

/* Address: 0x1000c648 Size: 52 bytes */
void FUN_1000c648()

{
  DispatchNextPhase(*(int *)(*piRam1011734c + 0x88),0x3fc);
  return;
}

/* Address: 0x1000db10 Size: 316 bytes */
int FUN_1000db10(short param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = piRam10117468;
  piVar2 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x1602) == 0) {
    iVar4 = (int)param_1;
  }
  else {
    iVar4 = (int)param_1;
    sVar1 = *(short *)(*piRam1011735c + 0x1602);
    iVar6 = 0;
    do {
      sVar1 = sVar1 + -1;
      if ((int)*(char *)(*piVar2 + sVar1 * 0x42 + 0x1619) == (int)*(short *)(*piVar2 + 0x110)) {
        iVar5 = 0;
        if (*(char *)(*piVar3 + (int)sVar1 + 0x56) == '\a') {
          iVar5 = RandomRange(1,100,100);
        }
        else if (*(char *)(*piVar3 + (int)sVar1 + 0x56) == '\x02') {
          iVar5 = RandomRange(1,100,0x32);
        }
        else if (*(char *)(*piVar3 + (int)sVar1 + 0x56) == '\x03') {
          iVar5 = RandomRange(1,100,0);
        }
        if (iVar6 < iVar5) {
          iVar4 = (int)sVar1;
          iVar6 = iVar5;
        }
      }
    } while (sVar1 != 0);
  }
  return iVar4;
}

/* Address: 0x1000dc4c Size: 472 bytes */
void FUN_1000dc4c(short param_1,short param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  unsigned short uVar4;
  int *piVar5;
  char *pcVar6;
  int *ppuVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  unsigned long long uVar12;
  int iVar13;
  
  iVar8 = iRam101174e4;
  pcVar6 = pcRam101174d8;
  piVar5 = piRam10117358;
  ppuVar7 = 0 /* TVect base */;
  uVar12 = (unsigned long long)param_2;
  sVar11 = 0;
  iVar13 = 0;
  if (*psRam10115d18 == 0) {
    ppuVar7 = 0 /* TVect base */;
    FUN_1000c724(1);
  }
  uVar4 = (unsigned short)((unsigned int)*(int *)
                          (*piVar5 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5) +
                          param_1 * 2) >> 0x10) & 0xf;
  if (uVar4 != 0xf) {
    cVar1 = *(char *)(*(int *)(*(int*)((char*)ppuVar7 - 0x151)) +
                      (*(unsigned int *)(*piVar5 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff)
                                                << 5) + param_1 * 2) >> 0x18) + 0x711);
    iVar10 = 0;
    if ('\0' < *pcVar6) {
      do {
        if (*(char *)(*(int *)(param_3 + iVar10 * 4) + 4) == '\x1c') {
          if (*(char *)(iVar10 + iVar8) == '\0') {
            sVar11 = sVar11 + 1;
            goto LAB_1000dd4c;
          }
        }
        else {
LAB_1000dd4c:
          if (*(char *)(iVar10 + iVar8) == '\0') {
            iVar13 = (int)(short)((short)iVar13 + 1);
          }
        }
        sVar9 = (short)iVar10 + 1;
        iVar10 = (int)sVar9;
      } while ((int)sVar9 < (int)*pcVar6);
    }
    cVar2 = *(char *)(*param_4 + 5);
    cVar3 = *pcVar6;
    iVar8 = FUN_1000d910(uVar4);
    iVar8 = iVar8 + cVar2 * 2;
    *(short *)(iVar8 + 0x3bc) = *(short *)(iVar8 + 0x3bc) + sVar11;
    *(short *)(iVar8 + 0x3cc) = *(short *)(iVar8 + 0x3cc) + (short)iVar13;
    *(short *)(iVar8 + 0x3dc) = *(short *)(iVar8 + 0x3dc) + 1;
    *(unsigned short *)(iVar8 + 0x3ec) = (unsigned short)(iVar13 == cVar3) + *(short *)(iVar8 + 0x3ec);
    if (cVar1 == '\n') {
      *(short *)(iVar8 + 0x3fc) = *(short *)(iVar8 + 0x3fc) + 1;
      *(unsigned short *)(iVar8 + 0x40c) = *(short *)(iVar8 + 0x40c) + (unsigned short)(iVar13 == cVar3);
    }
    ReleaseCityData(uVar4);
  }
  return;
}

/* Address: 0x1000df58 Size: 2528 bytes */
unsigned long long FUN_1000df58(short param_1)

{
  int bVar1;
  int bVar2;
  char cVar3;
  unsigned char bVar4;
  unsigned short uVar5;
  int *piVar6;
  int *piVar7;
  unsigned long long uVar8;
  short sVar13;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  short sVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  unsigned long long uVar20;
  unsigned long long uVar21;
  short uStack0000001a;
  short asStack_118 [8];
  short asStack_108 [8];
  short asStack_f8 [8];
  short asStack_e8 [8];
  short asStack_d8 [8];
  short asStack_c8 [8];
  unsigned short auStack_b8 [8];
  unsigned char abStack_a8 [8];
  short asStack_a0 [8];
  short asStack_90 [8];
  short asStack_80 [8];
  char auStack_70 [8];
  short *local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  piVar7 = piRam10117468;
  piVar6 = piRam1011735c;
  iVar12 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0x14;
  uStack0000001a = param_1;
  uVar8 = LookupCityAtPos(*(short *)(iVar12 + 0x194),*(short *)(iVar12 + 0x196));
  sVar19 = *(short *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 2 + 0x1122);
  uVar20 = 0xffffffffffffffff;
  iVar12 = 7;
  do {
    asStack_d8[iVar12] = 0;
    asStack_90[iVar12] = 0;
    auStack_b8[iVar12] = 0;
    asStack_f8[iVar12] = 0;
    asStack_80[iVar12] = 0;
    asStack_e8[iVar12] = 0;
    asStack_c8[iVar12] = 0;
    sVar13 = RandomRange(1,10);
    asStack_108[iVar12] = sVar13;
    asStack_118[iVar12] = (short)iVar12;
    bVar1 = iVar12 != 0;
    iVar12 = (int)(short)((short)iVar12 + -1);
  } while (bVar1);
  sVar13 = *(short *)(*piVar6 + 0x1602);
  while (sVar13 != 0) {
    sVar13 = sVar13 + -1;
    uVar21 = (unsigned long long)sVar13;
    cVar3 = *(char *)(*piVar6 + (int)(((uVar21 & 0x7ffffff) * 0x20 + uVar21 & 0xffffffff) << 1) +
                     0x1619);
    if (cVar3 != '\x0f') {
      auStack_b8[cVar3] = auStack_b8[cVar3] + 1;
      if ((*(unsigned char *)(*piVar7 + (int)sVar13 + 0x11e) & 1) == 0) {
        asStack_d8[cVar3] = asStack_d8[cVar3] + 1;
      }
      iVar12 = *piVar6 + (int)(((uVar21 & 0x7ffffff) * 0x20 + uVar21 & 0xffffffff) << 1);
      if ((int)*(char *)(iVar12 + 0x1619) == (int)*(short *)(*piVar6 + 0x110)) {
        bVar4 = *(unsigned char *)(iVar12 + 0x1633);
        if (bVar4 != 0xf) {
          asStack_e8[bVar4] = asStack_e8[bVar4] + 1;
        }
        GetAdjacentArmies(uVar21,0,abStack_a8,auStack_70);
        iVar12 = 5;
        do {
          bVar4 = abStack_a8[iVar12];
          if (bVar4 != 0xff) {
            iVar9 = *piVar6;
            iVar15 = iVar9 + (unsigned int)bVar4 * 0x42;
            if (((int)*(char *)(iVar15 + 0x1619) != (int)*(short *)(iVar9 + 0x110)) &&
               ((unsigned int)*(unsigned char *)(iVar15 + 0x1633) == (int)*(short *)(iVar9 + 0x110))) {
              cVar3 = *(char *)(iVar9 + (int)(((uVar21 & 0x7ffffff) * 0x20 + uVar21 & 0xffffffff) <<
                                             1) + 0x1619);
              asStack_80[cVar3] = asStack_80[cVar3] + 1;
            }
          }
          bVar1 = iVar12 != 0;
          iVar12 = (int)(short)((short)iVar12 + -1);
        } while (bVar1);
      }
    }
  }
  sVar13 = *(short *)(*piVar7 + 0x24a);
  sVar14 = 0;
  sVar16 = 0;
  if (sVar13 != 0) {
    do {
      sVar14 = sVar16;
      sVar13 = sVar13 + -1;
      iVar12 = *piVar7 + sVar13 * 0x5c;
      if (*(short *)(iVar12 + 0x24c) != 0) {
        sVar16 = *(short *)(iVar12 + 0x24e);
        asStack_c8[sVar16] = asStack_c8[sVar16] + 1;
        sVar14 = sVar14 + 1;
      }
      sVar16 = sVar14;
    } while (sVar13 != 0);
  }
  cVar3 = *(char *)(*piVar6 + (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1) + 0x1619
                   );
  if ((cVar3 != 0xf) && ((int)cVar3 != (int)*(short *)(*piVar6 + 0x110))) {
    asStack_90[cVar3] = asStack_90[cVar3] + 0x14;
  }
  sVar13 = 0;
  uVar21 = 7;
  do {
    iVar12 = (int)uVar21;
    if (*(short *)((int)auStack_b8 + (int)((uVar21 & 0xffffffff) << 1)) != 0) {
      if (iVar12 != *(short *)(*piVar6 + 0x110)) {
        sVar13 = sVar13 + 1;
      }
      iVar9 = *piVar6 + (int)(((uVar21 & 0x3fffffff) * 4 + uVar21 & 0xffffffff) << 2);
      iVar9 = LookupCityAtPos(*(short *)(iVar9 + 0x194),*(short *)(iVar9 + 0x196));
      if ((int)*(char *)(*piVar6 + iVar9 * 0x42 + 0x1619) == (int)*(short *)(*piVar6 + 0x110)) {
        *(short *)((int)asStack_f8 + (int)((uVar21 & 0xffffffff) << 1)) = 1;
      }
    }
    uVar21 = (unsigned long long)(short)((short)uVar21 + -1);
  } while (iVar12 != 0);
  iVar12 = 7;
  do {
    sVar16 = asStack_108[iVar12];
    iVar9 = *piVar7;
    iVar15 = iVar12 * 2 + iVar9;
    local_60 = (int)asStack_90[iVar12];
    local_5c = (int)sVar16;
    local_58 = (int)asStack_f8[iVar12];
    local_54 = (int)asStack_e8[iVar12];
    sVar16 = *(short *)(iVar15 + 0x40c) * 2 +
             *(short *)(iVar15 + 0x3fc) * 2 +
             *(short *)(iVar15 + 0x3ec) * 2 +
             *(short *)(iVar15 + 0x3dc) +
             *(short *)(iVar15 + 0x3cc) +
             *(short *)(iVar15 + 0x3bc) * 4 +
             asStack_80[iVar12] * 6 +
             asStack_e8[iVar12] * 4 + asStack_f8[iVar12] * 0xf + asStack_90[iVar12] + sVar16;
    asStack_90[iVar12] = sVar16;
    if (*(short *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 2 + 0xd0) == 0) {
      asStack_90[iVar12] = sVar16 + *(short *)(iVar9 + 0x18);
    }
    else if (*(short *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 2 + 0xc0) == 2) {
      asStack_90[iVar12] = asStack_90[iVar12] + *(short *)(*piVar7 + 0x1e);
    }
    else if (*(short *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 2 + 0xc0) == 1) {
      asStack_90[iVar12] = asStack_90[iVar12] + *(short *)(*piVar7 + 0x1a);
    }
    else if (*(short *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 2 + 0xc0) == 0) {
      asStack_90[iVar12] = asStack_90[iVar12] + *(short *)(*piVar7 + 0x1c);
    }
    iVar9 = iVar12 * 2;
    uVar10 = AbsShort((long long)sVar19 - (long long)*(short *)(iVar9 + *piVar6 + 0x1122));
    sVar16 = *(short *)((int)asStack_90 + iVar9);
    uVar11 = AbsShort((long long)(short)auStack_b8[*(short *)(*piVar6 + 0x110)] -
                          (long long)*(short *)((int)auStack_b8 + iVar9));
    *(unsigned short *)((int)asStack_90 + iVar9) =
         (short)((int)uVar11 >> 2) + (unsigned short)((int)uVar11 < 0 && (uVar11 & 3) != 0) +
         sVar16 + (short)((int)uVar10 >> 3) + (unsigned short)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    bVar1 = iVar12 != 0;
    iVar12 = (int)(short)((short)iVar12 + -1);
  } while (bVar1);
  bVar1 = false;
  iVar12 = 7;
  do {
    iVar9 = *piVar6;
    if (((*(short *)(iVar9 + iVar12 * 2 + 0x138) != 0) && (iVar12 != *(short *)(iVar9 + 0x110))) &&
       ((*(unsigned int *)(iVar9 + *(short *)(iVar9 + 0x110) * 0x10 + iVar12 * 2 + 0x1582) >> 0x1c & 3) == 2
       )) {
      bVar1 = true;
    }
    bVar2 = iVar12 != 0;
    iVar12 = (int)(short)((short)iVar12 + -1);
  } while (bVar2);
  iVar12 = *piVar6;
  if ((*(short *)(iVar12 + 0x116) != 0) &&
     (*(short *)(iVar12 + *(short *)(iVar12 + 0x110) * 2 + 0xd0) != 0)) {
    iVar12 = 7;
    do {
      asStack_a0[iVar12] = 0;
      bVar2 = iVar12 != 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
    } while (bVar2);
    iVar12 = 7;
    do {
      iVar9 = *piVar6 + iVar12 * 2;
      if ((*(short *)(iVar9 + 0x138) != 0) && (*(short *)(iVar9 + 0xd0) != 0)) {
        iVar9 = 7;
        do {
          iVar15 = *piVar6 + iVar9 * 2;
          if (((*(short *)(iVar15 + 0x138) != 0) && (*(short *)(iVar15 + 0xd0) != 1)) &&
             ((*(unsigned int *)(*piVar6 + iVar12 * 0x10 + iVar9 * 2 + 0x1582) >> 0x1a & 3) == 2)) {
            asStack_a0[iVar12] = 1;
          }
          bVar2 = iVar9 != 0;
          iVar9 = (int)(short)((short)iVar9 + -1);
        } while (bVar2);
      }
      bVar2 = iVar12 != 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
    } while (bVar2);
    iVar12 = 7;
    do {
      iVar9 = *piVar6 + iVar12 * 2;
      if (((*(short *)(iVar9 + 0x138) != 0) && (*(short *)(iVar9 + 0xd0) != 0)) &&
         ((asStack_a0[*(short *)(*piVar6 + 0x110)] != 0 || (asStack_a0[iVar12] != 0)))) {
        asStack_90[iVar12] = 0;
      }
      bVar2 = iVar12 != 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
    } while (bVar2);
  }
  uVar21 = 7;
  local_68 = asStack_108;
  do {
    iVar12 = *piVar7 + (int)((uVar21 & 0xffffffff) << 1);
    sVar19 = *(short *)(iVar12 + 0x3dc);
    sVar16 = *(short *)(iVar12 + 0x3fc);
    if (*(short *)(*piVar6 + 0x128) == 0) {
      sVar17 = 8;
    }
    else {
      sVar17 = 4;
    }
    iVar12 = FUN_10011734(uVar21);
    if (iVar12 != 0) {
      *(short *)((int)asStack_90 + (int)((uVar21 & 0xffffffff) << 1)) = 0;
    }
    if ((bVar1) &&
       (iVar12 = (int)((uVar21 & 0xffffffff) << 1),
       (*(unsigned int *)(*piVar6 + *(short *)(*piVar6 + 0x110) * 0x10 + iVar12 + 0x1582) >> 0x1c & 3) == 0)
       ) {
      *(short *)((int)asStack_90 + iVar12) = 0;
    }
    if ((sVar14 == 0) &&
       (iVar12 = (int)((uVar21 & 0xffffffff) << 1), *(short *)((int)asStack_d8 + iVar12) == 0)) {
      *(short *)((int)asStack_90 + iVar12) = 0;
    }
    sVar18 = *(short *)(*piVar6 + 0x136);
    if (sVar18 < 2) {
      sVar18 = 1;
    }
    if ((sVar18 < sVar17) && ((short)(sVar19 + sVar16) == 0)) {
      *(short *)((int)asStack_90 + (int)((uVar21 & 0xffffffff) << 1)) = 0;
    }
    if (1 < sVar13) {
      iVar12 = (int)((uVar21 & 0x7fffffff) << 1);
      uVar5 = *(unsigned short *)((int)auStack_b8 + iVar12);
      if ((int)(((int)(short)uVar5 >> 2) + (unsigned int)((short)uVar5 < 0 && (uVar5 & 3) != 0)) <
          (int)*(short *)((int)asStack_c8 + iVar12)) {
        *(short *)((int)asStack_90 + iVar12) = 0;
      }
    }
    iVar12 = (int)uVar21;
    uVar21 = (long long)(short)((short)uVar21 + -1);
  } while (iVar12 != 0);
  asStack_90[*(short *)(*piVar6 + 0x110)] = 0;
  sVar19 = 0;
  uVar21 = 7;
  do {
    iVar12 = (int)((uVar21 & 0xffffffff) << 1);
    if ((*(short *)((int)auStack_b8 + iVar12) != 0) &&
       (sVar13 = *(short *)((int)asStack_90 + iVar12), sVar19 < sVar13)) {
      uVar20 = uVar21;
      sVar19 = sVar13;
    }
    iVar12 = (int)uVar21;
    uVar21 = (long long)(short)((short)uVar21 + -1);
  } while (iVar12 != 0);
  iVar12 = (int)*(char *)(*piVar6 + (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1) +
                         0x1619);
  if ((iVar12 != 0xf) && (iVar12 != *(short *)(*piVar6 + 0x110))) {
    sVar19 = *(short *)(*piVar7 + 0x24a);
    bVar1 = false;
    bVar2 = false;
    if (sVar19 != 0) {
      do {
        bVar1 = bVar2;
        sVar19 = sVar19 + -1;
        if ((int)asStack_c8[sVar19] ==
            (int)*(char *)(*piVar6 + (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1) +
                          0x1619)) {
          bVar1 = true;
        }
        bVar2 = bVar1;
      } while (sVar19 != 0);
    }
    if (!bVar1) {
      uVar20 = (unsigned long long)
               *(char *)(*piVar6 + (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1) +
                        0x1619);
    }
  }
  if (((int)uVar20 != -1) && (*(short *)((int)asStack_d8 + (int)((uVar20 & 0xffffffff) << 1)) == 0))
  {
    uVar20 = 0xffffffffffffffff;
  }
  return uVar20;
}

/* Address: 0x1000f064 Size: 500 bytes */
void FUN_1000f064(short param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar8;
  int iVar7;
  
  piVar3 = piRam10117468;
  piVar2 = piRam1011735c;
  iVar6 = (int)param_1;
  iVar4 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2;
  sVar1 = *(short *)(iVar4 + 0xc0);
  iVar5 = *piRam10117468;
  sVar8 = *(short *)(iVar5 + 2) * *(short *)(iVar5 + 0x2c);
  iVar7 = (int)sVar8;
  if (*(short *)(iVar4 + 0xd0) == 0) {
    iVar7 = (int)(short)(sVar8 + *(short *)(iVar5 + 0x2e));
  }
  else if (sVar1 == 2) {
    iVar7 = (int)(short)(sVar8 + *(short *)(*piRam10117468 + 0x30));
  }
  else if (sVar1 == 1) {
    iVar7 = (int)(short)(sVar8 + *(short *)(*piRam10117468 + 0x32));
  }
  else if (sVar1 == 0) {
    iVar7 = (int)(short)(sVar8 + *(short *)(*piRam10117468 + 0x34));
  }
  *(short *)(*piRam10117468 + iVar6 * 0x5c + 0x2a6) = 0;
  if (*(short *)(*piVar3 + 0x26) != 0) {
    iVar5 = *piVar3;
    iVar4 = RandomRange(1,1000,0);
    if (iVar4 < *(short *)(iVar5 + 0x26) + iVar7) {
      iVar5 = iVar6 * 0x5c + iVar5;
      *(unsigned short *)(iVar5 + 0x2a6) = *(unsigned short *)(iVar5 + 0x2a6) | 1;
      return;
    }
  }
  if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186) < 100) {
    iVar7 = (int)(short)((short)iVar7 + *(short *)(*piVar3 + 0x36));
  }
  if (*(short *)(*piVar3 + 0x28) != 0) {
    iVar5 = *piVar3;
    iVar4 = RandomRange(1,1000,0);
    if (iVar4 < *(short *)(iVar5 + 0x28) + iVar7) {
      iVar5 = iVar5 + iVar6 * 0x5c;
      *(unsigned short *)(iVar5 + 0x2a6) = *(unsigned short *)(iVar5 + 0x2a6) | 2;
      return;
    }
  }
  if (*(short *)(*piVar3 + 0x2a) != 0) {
    iVar5 = *piVar3;
    iVar4 = RandomRange(1,1000,0);
    if (iVar4 < *(short *)(iVar5 + 0x2a) + iVar7) {
      iVar5 = iVar5 + iVar6 * 0x5c;
      *(unsigned short *)(iVar5 + 0x2a6) = *(unsigned short *)(iVar5 + 0x2a6) | 4;
    }
  }
  return;
}

/* Address: 0x1000fc38 Size: 148 bytes */
void FUN_1000fc38(short param_1,short param_2)

{
  short uVar1;
  short uVar2;
  int *piVar3;
  short *puVar4;
  
  piVar3 = piRam10117360;
  puVar4 = (short *)(*piRam10117360 + param_1 * 0x16);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  if (*(char *)(puVar4 + 2) == '\x1c') {
    FUN_1002e5c0(puVar4,uVar1,uVar2);
  }
  FUN_100214e8(*piVar3 + param_1 * 0x16);
  if (param_2 != 0) {
    RefreshMapAfterCombat(uVar1,uVar2);
  }
  return;
}

/* Address: 0x1000fde4 Size: 172 bytes */
void FUN_1000fde4(int param_1,short param_2)

{
  int bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  short uVar5;
  long long lVar6;
  int iVar7;
  
  piVar3 = piRam10117360;
  lVar6 = -1;
  uVar5 = 0xffff;
  iVar7 = 7;
  do {
    sVar2 = *(short *)(param_1 + iVar7 * 2);
    if (sVar2 != -1) {
      iVar4 = sVar2 * 0x16;
      lVar6 = (long long)*(short *)(*piVar3 + iVar4);
      uVar5 = *(short *)(*piVar3 + iVar4 + 2);
      DisbandUnit((int)sVar2,0);
    }
    bVar1 = iVar7 != 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
  } while (bVar1);
  if ((param_2 != 0) && ((int)lVar6 != -1)) {
    RefreshMapAfterCombat(lVar6,uVar5);
  }
  FUN_1002b91c();
  return;
}






