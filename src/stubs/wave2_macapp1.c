/*
 * wave2_macapp1.c - Reconstructed functions (wave2_macapp1)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 469 functions in address range wave2_macapp1
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
void FUN_10080030(int param_1);
void FUN_100800d0(int param_1,long long param_2);
void FUN_100802b0(void);
int FUN_100802ec(void);
int * FUN_100802fc(int *param_1);
void FUN_1008037c(void);
void FUN_100803a4(long long param_1,long long param_2,int *param_3);
void FUN_10080444(long long param_1,int param_2);
void FUN_1008050c(void);
int FUN_10080548(void);
int * FUN_10080558(int *param_1);
void FUN_100805d8(void);
void FUN_10080600(long long param_1,long long param_2,int param_3);
void FUN_100807bc(long long param_1,unsigned int param_2);
int FUN_10080848(void);
int * FUN_10080858(int *param_1);
void FUN_100808c0(void);
void FUN_100808e8(void);
void FUN_10080924(void);
void FUN_1008095c();
int * FUN_100809c8(void);
void FUN_10080a3c(void);
void FUN_10080ad4();
void FUN_10080cf0(int *param_1,short param_2);
void FUN_10080fe4(int param_1,short param_2);
void FUN_10081040(int *param_1);
void FUN_100810e8(int *param_1);
void FUN_100818b0(int *param_1,long long param_2,char param_3);
int * FUN_100819e4(int *param_1);
void FUN_10081a6c(void);
void FUN_10081a94(int param_1,unsigned int param_2);
void FUN_10081b50();
void FUN_10081ddc(void);
void FUN_10081f08(void);
void FUN_10081f30(int param_1,long long param_2);
void FUN_10081fcc(int *param_1,long long param_2);
void FUN_100820ac(int param_1,long long param_2);
void FUN_1008213c(long long param_1,int *param_2,int param_3);
long long FUN_10082320(int param_1,char param_2);
void FUN_10082390(int param_1);
void FUN_10082430(int param_1,short param_2,short param_3);
void FUN_10082640(int *param_1,int *param_2,int *param_3,short *param_4,short *param_5,
                 int *param_6,long long param_7);
void FUN_10082af0(int param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7);
void FUN_10082be8(long long param_1,int *param_2,long long param_3);
void FUN_10082ca8(int *param_1);
void FUN_100830bc(long long param_1,long long param_2,long long param_3,char param_4);
void FUN_10083144(int *param_1,int *param_2,long long param_3);
void FUN_1008330c(int param_1,int param_2);
void FUN_100836dc(int *param_1,short param_2,short param_3);
void FUN_100839c0(int param_1,char param_2);
void FUN_10083a08(int param_1,char param_2,long long param_3,long long param_4,int *param_5,
                 char param_6);
void FUN_10083d04(void);
int * FUN_10083d50(void);
void FUN_10083dd8(int *param_1,long long param_2);
void FUN_10084164(int param_1);
void FUN_1008421c(int param_1);
void FUN_1008429c(int *param_1,int *param_2,long long param_3);
void FUN_1008445c(int *param_1,long long param_2,char param_3);
void FUN_100845a0(int param_1);
void FUN_10084604(int param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7);
void FUN_100846fc(int param_1,int *param_2,long long param_3);
void FUN_100847cc(int *param_1,int *param_2,int *param_3,short *param_4,short *param_5,
                 int *param_6,long long param_7);
void FUN_10084cbc(int *param_1,int *param_2,long long param_3);
void FUN_10084e5c(int param_1,char param_2);
void FUN_10084ea4(void);
int FUN_10084ee0(void);
void FUN_10084f84(void);
void FUN_10084fac(int param_1);
void FUN_10085018(int param_1,int *param_2);
void FUN_100850e8();
void FUN_100851dc(int *param_1);
void FUN_1008521c(int *param_1);
void FUN_1008527c(void);
int FUN_100852b8(void);
int * FUN_100852c8(int *param_1);
void FUN_10085330(void);
void FUN_1008535c(int *param_1,long long param_2);
void FUN_1008558c(void);
int * FUN_100855d0(void);
void FUN_10085644(int *param_1);
void FUN_10085a0c(int param_1);
void FUN_10085ff4(int *param_1,long long param_2,char param_3);
void FUN_1008605c(int *param_1,short param_2,char param_3);
void FUN_100860c8(long long param_1);
void FUN_10086114(int *param_1,short param_2,char param_3);
void FUN_100861b8();
void FUN_100862d8(void);
void FUN_1008638c(void);
void FUN_100863b4(void);
void FUN_10086450(void);
void FUN_10086478(int *param_1,int param_2,long long param_3);
void FUN_10086788(void);
void FUN_100867b0(long long param_1,long long param_2,int param_3);
void FUN_1008687c(long long param_1,int param_2);
void FUN_10086964(void);
int * FUN_100869f0(void);
void FUN_10086a64(int *param_1);
void FUN_100870a4(int param_1,int *param_2);
void FUN_10087118(int param_1,int param_2);
void FUN_100878bc(int *param_1);
void FUN_100878fc(int *param_1);
void FUN_10088464(long long param_1);
void FUN_10088524(void);
int * FUN_10088570(void);
void FUN_100885e4(long long param_1,int param_2);
void FUN_10088724(int param_1);
void FUN_10089188(int param_1);
void FUN_100893bc();
void FUN_10089420(int *param_1,int *param_2);
void FUN_100894b4(long long param_1);
void FUN_10089798(int param_1);
void FUN_10089d60(int param_1);
void FUN_10089f20(int param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5);
void FUN_1008a0d8(void);
void FUN_1008a100(int param_1);
void FUN_1008a388(int param_1,long long param_2,int *param_3);
void FUN_1008ac94(int param_1);
void FUN_1008ad28(int param_1,int param_2);
void FUN_1008adf4(void);
void FUN_1008ae1c(int param_1,int param_2);
void FUN_1008b4c8(int param_1,long long param_2,int *param_3,long long param_4);
void FUN_1008b804();
int * FUN_1008bc5c(void);
void FUN_1008bcb0();
void FUN_1008bd08(int *param_1,int *param_2);
void FUN_1008bdb8(int *param_1,int *param_2);
void FUN_1008bf5c(void);
void FUN_1008bf84(int param_1);
void FUN_1008c1bc(int param_1);
void FUN_1008c6bc(int param_1);
void FUN_1008c8f8(int param_1,long long param_2,int *param_3,long long param_4);
void FUN_1008ccd4(int param_1);
void FUN_1008ce28(int param_1);
void FUN_1008d3b4(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5);
int * FUN_1008d44c(int *param_1);
void FUN_1008d4b4(void);
void FUN_1008d4dc(int *param_1,long long param_2);
int * FUN_1008d570(int *param_1);
void FUN_1008d5e0(void);
void FUN_1008d608(long long param_1,short param_2,long long param_3);
void FUN_1008d6e0(int *param_1,long long param_2);
int FUN_1008d73c(int *param_1);
void FUN_1008d7bc(int *param_1,int *param_2);
long long FUN_1008d948(int *param_1);
void FUN_1008da5c(void);
void FUN_1008da84(int param_1,long long param_2,int *param_3,long long param_4,long long param_5);
void FUN_1008db24(int param_1,long long param_2);
void FUN_1008dc24(void);
void FUN_1008dc4c(int *param_1,short param_2,long long param_3);
void FUN_1008dd0c(int *param_1,long long param_2);
int * FUN_1008dd78(void);
void FUN_1008ddd4(int *param_1,long long param_2);
void FUN_1008de30(int param_1);
void FUN_1008de74(int *param_1,int *param_2);
void FUN_1008e000(int param_1,short param_2,long long param_3);
void FUN_1008e064(int *param_1,int param_2,long long param_3);
void FUN_1008e14c(int *param_1,long long param_2,int param_3,int param_4);
int * FUN_1008e1b0(void);
void FUN_1008e204();
int * FUN_1008e240(int *param_1);
void FUN_1008e2d0(void);
void FUN_1008e2f8(long long param_1,int param_2);
int FUN_1008e440(long long param_1,unsigned short param_2);
void FUN_1008e5d0(long long param_1,unsigned int param_2,int param_3,int *param_4);
void FUN_1008e8f4(long long param_1,int *param_2,int *param_3,long long param_4);
void FUN_1008eb38(int param_1);
void FUN_1008f204(void);
int FUN_1008f3b4(void);
int * FUN_1008f3c4(void);
void FUN_1008f418(int param_1);
int FUN_1008f648(void);
int * FUN_1008f658(int *param_1);
void FUN_1008f700(void);
void FUN_1008f728(int param_1,int *param_2);
void FUN_1008f844();
void FUN_1008fa00(int param_1,short param_2,short param_3,short param_4);
void FUN_1008fb5c(int param_1);
void FUN_1008ff70(long long param_1);
void FUN_1008ffb0(long long param_1);
void FUN_1008fffc(int *param_1);
void FUN_10090108(void);
int * FUN_10090154(void);
void FUN_100901a8(int *param_1,int param_2,long long param_3);
int * FUN_100904ac(void);
void FUN_10090518(long long param_1,long long param_2,int param_3);
void FUN_100906bc(long long param_1,unsigned int param_2);
void FUN_100907f0(int param_1,unsigned int param_2,int *param_3);
int * FUN_100908d0(void);
void FUN_10090924(void);
void FUN_10090954(void);
int FUN_100909d0(void);
int * FUN_100909e0(void);
void FUN_10090a4c(long long param_1,int param_2,int param_3);
void FUN_10090adc(void);
void FUN_10090b90(void);
void FUN_10090bb8(int *param_1);
void FUN_10090d30(int *param_1,long long param_2,char param_3);
void FUN_10090e8c(void);
int * FUN_10090ed8(void);
void FUN_10090f2c(int *param_1,long long param_2,long long param_3,char param_4);
void FUN_10091018(void);
void FUN_10091054();
void FUN_10091108(void);
void FUN_10091130(int *param_1);
void FUN_100912f8();
void FUN_10092c5c();
void FUN_10093b94(void);
void FUN_10093bbc(int param_1);
void FUN_10093cac(int param_1,int param_2);
void FUN_10093d18(int param_1,int param_2);
void FUN_10093d9c(int param_1,char param_2);
void FUN_10093dd0(int param_1,int *param_2);
void FUN_10093e60(int param_1,long long param_2);
void FUN_10093ea0(int param_1,int *param_2);
int * FUN_10093f2c(void);
void FUN_10093f80(int *param_1,long long param_2,char param_3);
void FUN_100940f8(int param_1,int *param_2);
void FUN_100941d4(int param_1,int *param_2);
void FUN_100942b0(void);
void FUN_100942d4(void);
void FUN_1009433c(void);
void FUN_10094528();
void FUN_10094b40();
void FUN_10094fc4(void);
void FUN_100953a0(void);
void FUN_100953f0(void);
short FUN_10095444(long long param_1);
short FUN_100954fc(long long param_1);
void FUN_10095584();
void FUN_100957a8();
void FUN_100959cc(short param_1,short param_2);
void FUN_10095a80(short param_1);
int * FUN_10095c44(void);
void FUN_10095cb0(int param_1,long long param_2);
void FUN_10095d74(int param_1,long long param_2,int *param_3,long long param_4,long long param_5);
void FUN_10095e7c(long long param_1,long long param_2,int param_3);
void FUN_10095f50();
void FUN_10096098();
int * FUN_10096198(void);
void FUN_100961ec(int *param_1,short param_2,long long param_3);
void FUN_100964b8(int *param_1,long long param_2);
void FUN_10096514(int param_1,long long param_2,int param_3,int param_4);
void FUN_10096578(void);
void FUN_10096664(void);
void FUN_1009668c(long long param_1,long long param_2,int param_3);
void FUN_10096744(void);
void FUN_10096920(long long param_1,int param_2);
int * FUN_10096a10(int *param_1);
void FUN_10096a90(void);
void FUN_10096ab8(long long param_1,int param_2);
void FUN_10096b60(void);
void FUN_10096c34(void);
void FUN_10096c5c(long long param_1,short param_2,long long param_3);
void FUN_10096ca4(void);
int * FUN_10096cf0(void);
void FUN_10096d5c(long long param_1,long long param_2,int param_3);
void FUN_10096e90(long long param_1,unsigned int param_2);
int * FUN_10096ffc(void);
void FUN_10097050();
int * FUN_10097118(void);
void FUN_1009716c();
void FUN_1009774c(void);
void FUN_10097774(int *param_1);
void FUN_1009782c(int *param_1,short param_2,char param_3);
void FUN_100978c8(void);
void FUN_100979dc(void);
void FUN_10097a04(long long param_1);
void FUN_10097a38(void);
void FUN_10097b04(void);
void FUN_10097b2c(long long param_1,long long param_2,int param_3);
void FUN_10097b74(long long param_1,int param_2);
void FUN_10097bd8(void);
int * FUN_10097c1c(void);
void FUN_10097c88(int param_1,int param_2);
void FUN_10097d74(void);
int * FUN_10097dc0(void);
void FUN_10097e34();
void FUN_10097e68(int param_1,long long param_2,int param_3);
void FUN_1009814c(void);
long long FUN_10098188(long long param_1,long long param_2,short param_3);
long long FUN_10098424(long long param_1,long long param_2,long long param_3);
int FUN_100984a4(int param_1,long long param_2,unsigned char *param_3);
void FUN_100985fc();
long long FUN_10098814(void);
void FUN_1009886c(int *param_1,char param_2);
void FUN_100988fc(int *param_1,char param_2,int param_3);
long long FUN_100989b0();
void FUN_10098b04(int *param_1);
int FUN_10098b94();
void FUN_10098ed8(int param_1);
void FUN_10098f74(long long param_1);
long long FUN_10098fe8(int *param_1,short param_2,int *param_3);
long long FUN_100990c0(int param_1,unsigned int param_2);
void FUN_100991f4();
void FUN_100992c8();
long long FUN_100996f8(int *param_1,long long param_2,long long param_3);
long long FUN_100997dc(int param_1);
long long FUN_1009982c(int param_1,char param_2);
long long FUN_10099884(int param_1,char param_2);
long long FUN_100998c4(int param_1);
long long FUN_10099900(int param_1,char param_2);
long long FUN_1009997c(int param_1,short *param_2,int *param_3);
void FUN_10099ab0(int param_1);
void FUN_10099af0(long long param_1,long long param_2);
int FUN_10099b84(int param_1);
void FUN_10099f14();
int FUN_1009a548(int param_1,unsigned short *param_2,unsigned int *param_3);
int FUN_1009a8b8();
long long FUN_1009a974(long long param_1,long long param_2);
void FUN_1009a9ac(long long param_1,long long param_2,char param_3);
void FUN_1009a9ec(long long param_1,long long param_2,char param_3);
void FUN_1009aa1c(long long param_1,long long param_2,char param_3);
void FUN_1009aa4c(long long param_1,long long param_2,long long param_3);
long long FUN_1009aa78(long long param_1,long long param_2,short *param_3,int *param_4);
void FUN_1009ab84(int param_1,long long param_2);
void FUN_1009abf0(int param_1);
void FUN_1009b310(int param_1);
long long FUN_1009b3b0(int param_1);
long long FUN_1009b6a8(int *param_1);
void FUN_1009b7cc();
long long FUN_1009b878(int param_1);
long long FUN_1009b948(int *param_1);
long long FUN_1009bac8(long long param_1,unsigned short *param_2);
short * FUN_1009bed8(int *param_1,short param_2);
long long FUN_1009bf78(int param_1,short *param_2,int *param_3,int *param_4,
            int param_5);
long long FUN_1009c0f0(int param_1,short *param_2,int *param_3);
void FUN_1009c26c(int param_1);
void FUN_1009c380();
void FUN_1009c434(int param_1);
long long FUN_1009c544();
unsigned int * FUN_1009c744(short *param_1);
void FUN_1009c850();
void FUN_1009ca0c();
void FUN_1009ca90(int param_1,int param_2);
void FUN_1009cadc(int *param_1,char param_2);
void FUN_1009cb50(int *param_1,char param_2);
int * FUN_1009cbcc(int *param_1,char param_2);
void FUN_1009cc58(void);
void FUN_1009cc84(int param_1,int param_2,short param_3);
void FUN_1009cd0c(int param_1,int param_2,int param_3);
void FUN_1009ce80(int *param_1);
void FUN_1009cf30(int param_1);
void FUN_1009cf8c(int param_1,long long param_2);
void FUN_1009d01c(int param_1);
void FUN_1009d078(int param_1,long long param_2);
void FUN_1009d0dc(int param_1);
void FUN_1009d24c(int param_1,long long param_2,long long param_3);
void FUN_1009d3c0(void);
int * FUN_1009d40c(void);
void FUN_1009d484(int param_1,long long param_2,int param_3);
void FUN_1009dae8(void);
int * FUN_1009db34(void);
void FUN_1009dba0(long long param_1,long long param_2,int param_3);
void FUN_1009dc20(long long param_1,unsigned int param_2);
void FUN_1009dd2c(long long param_1,unsigned int param_2,int *param_3);
void FUN_1009de54(void);
void FUN_1009de7c(int *param_1,char param_2,long long param_3,long long param_4,
                 int *param_5,char param_6,char param_7);
void FUN_1009e1b0(int param_1);
void FUN_1009e2e0(void);
void FUN_1009e33c(short param_1,short param_2,short param_3);
void FUN_1009e534();
void FUN_1009e710(void);
void FUN_1009e738(long long param_1,int param_2);
void FUN_1009e7e0(void);
long long FUN_1009f244(int param_1);
void FUN_1009f2a4(short *param_1);
int * FUN_100a029c(int *param_1);
void FUN_100a0304(void);
void FUN_100a032c(int param_1);
void FUN_100a03b0(int param_1,long long param_2,long long param_3,int *param_4,long long param_5,
                 short param_6,short param_7);
void FUN_100a0518(int param_1,char param_2,long long param_3,long long param_4,int *param_5,
                 char param_6,char param_7);
void FUN_100a059c(int param_1);
void FUN_100a05dc(int param_1);
int * FUN_100a0690(void);
void FUN_100a06fc(int param_1);
void FUN_100a0740(int param_1);
void FUN_100a0848(int *param_1);
void FUN_100a0880(int param_1);
int FUN_100a0920(void);
int * FUN_100a0930(void);
void FUN_100a09a8(int param_1,long long param_2,short param_3);
void FUN_100a0b08(int param_1,short param_2);
void FUN_100a0cf4(int param_1);
void FUN_100a0d60(int param_1);
void FUN_100a0da0(int param_1);
int * FUN_100a0e90(void);
void FUN_100a0f04(int param_1);
void FUN_100a102c(int param_1);
void FUN_100a10d0(int param_1);
int * FUN_100a11f8(void);
void FUN_100a1260(int param_1);
void FUN_100a1330(void);
void FUN_100a1354(int param_1);
int * FUN_100a13a0(void);
void FUN_100a1410(int param_1);
void FUN_100a14f4(int param_1);
void FUN_100a1538(int param_1);
int * FUN_100a15a8(void);
void FUN_100a1604(int param_1);
void FUN_100a16ac(int param_1);
void FUN_100a1738(int param_1);
void FUN_100a17dc();
void FUN_100a1978(void);
void FUN_100a19a0(int param_1,short param_2);
void FUN_100a1a7c(int param_1,unsigned long long param_2);
void FUN_100a1b9c(long long param_1,long long param_2,int param_3);
void FUN_100a1c28(int param_1);
void FUN_100a1ce8(int param_1);
void FUN_100a1d50(void);
void FUN_100a2cc0();
void FUN_100a3acc(void);
unsigned short FUN_100a3d64(short param_1,short param_2);
unsigned short FUN_100a3e44(short param_1,short param_2);
unsigned short FUN_100a3f14(short param_1,short param_2);
unsigned short FUN_100a3fe4(short param_1,short param_2);
void FUN_100a40bc(void);
unsigned short FUN_100a4a00(short param_1,short param_2);
int FUN_100a7344(unsigned short param_1);
void FUN_100a7480(short *param_1,short param_2);
void FUN_100a7544(void);
long long FUN_100a7804(short param_1);
void FUN_100a78f0();
void FUN_100a7c1c(short param_1,short param_2);
void FUN_100a7fe0(short param_1,unsigned short param_2);
void FUN_100a85f8();
void FUN_100a8724(void);
long long FUN_100a9ce0(short param_1,short param_2);
long long FUN_100aa344(int param_1,short param_2,short param_3);
int FUN_100aa3dc(int param_1);
void FUN_100aa60c(int param_1);
void FUN_100aa938(int param_1);
long long FUN_100aa9f4(int param_1,short *param_2,short *param_3);
long long FUN_100aab7c(short param_1,short param_2,short *param_3);
void FUN_100aac68(int param_1,short param_2,short param_3);
long long FUN_100aad1c(long long param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6);
long long FUN_100aaed8(long long param_1,short param_2,short param_3);
int FUN_100abd8c(short param_1,short param_2);
short FUN_100abe94(int param_1);
short FUN_100abf8c(int param_1);
void FUN_100ac0cc(short param_1,short param_2);
void FUN_100aeafc();
void FUN_100aeb94();
void FUN_100aed40();
void FUN_100aeeec();
void FUN_100af0d4();
void FUN_100af1a0(short param_1);
void FUN_100af268();
void FUN_100af52c(void);
void FUN_100af554(unsigned int *param_1);
unsigned int * FUN_100af590(unsigned int *param_1,unsigned int param_2,char param_3,int param_4);
int FUN_100af654(unsigned int *param_1,unsigned int *param_2);
int FUN_100af6b4(int param_1);
int FUN_100af728(int param_1,int param_2,int param_3);
void FUN_100af7c0(int param_1);
void FUN_100af828(int param_1,unsigned long long param_2);
unsigned int * FUN_100af8c8(unsigned int *param_1,unsigned long long param_2,unsigned int *param_3,int *param_4);
void FUN_100af984(long long param_1,unsigned int *param_2);
void FUN_100afa10();
void FUN_100afa38();
void FUN_100afb10();
void FUN_100afb34();
void FUN_100afbf0(long long param_1,unsigned int *param_2,int *param_3,int *param_4);
void FUN_100afc7c(long long param_1,int *param_2,int *param_3);
long long FUN_100afcd4(long long param_1);
void FUN_100afd2c(long long param_1,unsigned long long param_2);
void FUN_100afd70(long long param_1,int param_2);
void FUN_100afdd8();
void FUN_100afec4();
long long FUN_100afeec();

/* Extern declarations for Ghidra globals */
extern long iRam10115f84;
extern long iRam10115fb0;
extern long iRam10115fb4;
extern long iRam10115fb8;
extern long iRam1011642c;
extern long iRam10116440;
extern long iRam1011683c;
extern long iRam101174ac;
extern long iRam10117578;
extern long iRam1011757c;
extern long iRam101176c0;
extern long iRam101176e8;
extern long iRam101176ec;
extern long iRam101176f0;
extern long iRam101176f4;
extern long iRam101176f8;
extern long iRam10117728;
extern long iRam1011773c;
extern long iRam10117748;
extern long iRam1011774c;
extern long iRam10117750;
extern long iRam10117754;
extern long iRam101177f0;
extern unsigned char *pbRam101161f4;
extern unsigned char *pbRam101161f8;
extern char *pcRam101164a8;
extern char *pcRam1011672c;
extern char *pcRam10117378;
extern char *pcRam1011770c;
extern pint *piRam10115f64;
extern pint *piRam10115f8c;
extern pint *piRam101161d0;
extern pint *piRam10116204;
extern pint *piRam10116208;
extern pint *piRam1011639c;
extern pint *piRam101163ac;
extern pint *piRam101163b0;
extern pint *piRam10116428;
extern pint *piRam10116430;
extern pint *piRam10116434;
extern pint *piRam10116438;
extern pint *piRam10116478;
extern pint *piRam10116484;
extern pint *piRam10116488;
extern pint *piRam10116628;
extern pint *piRam10116854;
extern pint *piRam10116858;
extern pint *piRam101175f0;
extern pint *piRam101175f4;
extern pint *piRam10117714;
extern short *psRam10116360;
extern short *psRam1011638c;
extern short *psRam10116390;
extern short *psRam1011645c;
extern short *psRam10116460;
extern short *psRam1011662c;
extern short *psRam1011663c;
extern short *psRam10116728;
extern short *psRam1011677c;
extern short *psRam10116828;
extern short *psRam10116830;
extern short *psRam10116834;
extern short *psRam10116838;
extern short *psRam10116850;
extern short *psRam1011685c;
extern short *psRam10116a40;
extern short *psRam1011736c;
extern short *psRam1011760c;
extern short *psRam10117704;
extern short *psRam10117708;
extern short *psRam10117740;
extern short *psRam10117744;
extern unsigned int *puRam101161fc;
extern unsigned int *puRam10116310;
extern unsigned int *puRam10116324;
extern unsigned int *puRam10116374;
extern unsigned int *puRam10116398;
extern unsigned int *puRam101163a0;
extern unsigned int *puRam101163bc;
extern unsigned int *puRam101163c8;
extern unsigned int *puRam101163cc;
extern unsigned int *puRam101163dc;
extern unsigned int *puRam101163e8;
extern unsigned int *puRam1011640c;
extern unsigned int *puRam10116428;
extern unsigned int *puRam1011644c;
extern unsigned int *puRam1011645c;
extern unsigned int *puRam1011648c;
extern unsigned int *puRam101164e4;
extern unsigned int *puRam1011655c;
extern unsigned int *puRam10116584;
extern unsigned int *puRam101165a4;
extern unsigned int *puRam101165b4;
extern unsigned int *puRam101165c0;
extern unsigned int *puRam101165d0;
extern unsigned int *puRam10116614;
extern unsigned int *puRam10116644;
extern unsigned int *puRam10116668;
extern unsigned int *puRam10116684;
extern unsigned int *puRam101166a8;
extern unsigned int *puRam101166dc;
extern unsigned int *puRam101166ec;
extern unsigned int *puRam101166f8;
extern unsigned int *puRam10116704;
extern unsigned int *puRam1011673c;
extern unsigned int *puRam10116750;
extern unsigned int *puRam10116764;
extern unsigned int *puRam10116788;
extern unsigned int *puRam101167c8;
extern unsigned int *puRam10116808;
extern unsigned int *puRam10116850;
extern unsigned int *puRam1011685c;
extern unsigned int *puRam101169c4;
extern unsigned int *puRam10116bc0;
extern unsigned int *puRam1011734c;
extern unsigned int *puRam10117358;
extern unsigned int *puRam1011735c;
extern unsigned int *puRam10117360;
extern unsigned int *puRam10117368;
extern unsigned int *puRam10117370;
extern unsigned int *puRam101175f4;
extern unsigned int *puRam101176e0;
extern unsigned int *puRam10117718;
extern unsigned int *puRam1011771c;
extern unsigned int *puRam10117720;
extern unsigned int *puRam10117724;
extern unsigned int uRam101160fc;
extern unsigned int uRam101162fc;
extern unsigned int uRam10116314;
extern unsigned int uRam10116318;
extern unsigned int uRam1011631c;
extern unsigned int uRam10116328;
extern unsigned int uRam1011632c;
extern unsigned int uRam10116334;
extern unsigned int uRam10116340;
extern unsigned int uRam10116350;
extern unsigned int uRam10116358;
extern unsigned int uRam1011635c;
extern unsigned int uRam10116378;
extern unsigned int uRam10116384;
extern unsigned int uRam101163a4;
extern unsigned int uRam101163a8;
extern unsigned int uRam101163c0;
extern unsigned int uRam101163d0;
extern unsigned int uRam101163d4;
extern unsigned int uRam101163e0;
extern unsigned int uRam101163e4;
extern unsigned int uRam101163ec;
extern unsigned int uRam101163f4;
extern unsigned int uRam10116410;
extern unsigned int uRam10116424;
extern unsigned int uRam10116450;
extern unsigned int uRam10116454;
extern unsigned int uRam10116458;
extern unsigned int uRam10116474;
extern unsigned int uRam101164e8;
extern unsigned int uRam10116544;
extern unsigned int uRam10116554;
extern unsigned int uRam10116560;
extern unsigned int uRam10116568;
extern unsigned int uRam10116588;
extern unsigned int uRam1011659c;
extern unsigned int uRam101165a8;
extern unsigned int uRam101165ac;
extern unsigned int uRam101165b8;
extern unsigned int uRam101165bc;
extern unsigned int uRam101165c8;
extern unsigned int uRam101165d4;
extern unsigned int uRam10116604;
extern unsigned int uRam10116610;
extern unsigned int uRam10116618;
extern unsigned int uRam10116634;
extern unsigned int uRam10116638;
extern unsigned int uRam10116648;
extern unsigned int uRam10116658;
extern unsigned int uRam1011666c;
extern unsigned int uRam10116678;
extern unsigned int uRam1011667c;
extern unsigned int uRam10116688;
extern unsigned int uRam1011668c;
extern unsigned int uRam101166ac;
extern unsigned int uRam101166b0;
extern unsigned int uRam101166bc;
extern unsigned int uRam101166d4;
extern unsigned int uRam101166e0;
extern unsigned int uRam101166e4;
extern unsigned int uRam101166f0;
extern unsigned int uRam101166fc;
extern unsigned int uRam10116700;
extern unsigned int uRam10116708;
extern unsigned int uRam1011670c;
extern unsigned int uRam10116714;
extern unsigned int uRam10116718;
extern unsigned int uRam10116724;
extern unsigned int uRam10116734;
extern unsigned int uRam10116740;
extern unsigned int uRam10116744;
extern unsigned int uRam1011674c;
extern unsigned int uRam10116754;
extern unsigned int uRam10116758;
extern unsigned int uRam10116768;
extern unsigned int uRam10116778;
extern unsigned int uRam10116780;
extern unsigned int uRam1011678c;
extern unsigned int uRam10116798;
extern unsigned int uRam101167a8;
extern unsigned int uRam101167cc;
extern unsigned int uRam10116800;
extern unsigned int uRam1011680c;
extern unsigned int uRam10116860;
extern unsigned int uRam101169bc;
extern unsigned int uRam10116a54;
extern unsigned int uRam10116a84;
extern unsigned int uRam10116bbc;
extern unsigned int uRam10116bc0;
extern unsigned int uRam10116c34;
extern unsigned int uRam10116c7c;
extern unsigned int uRam10116d60;
extern unsigned int uRam10116d68;
extern unsigned int uRam10116f68;
extern unsigned int uRam10117438;
extern unsigned int uRam101176cc;
extern unsigned int uRam10117700;
extern unsigned int uRam1011772c;
extern unsigned int uRam10117758;
extern unsigned int uRam101177f0;

/* Address: 0x10080030 Size: 76 bytes */
void FUN_10080030(int param_1)

{
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(char *)(*(int *)(param_1 + 0x1d8) + 0x1d) = 0;
  }
  return;
}

/* Address: 0x100800d0 Size: 476 bytes */
void FUN_100800d0(int param_1,long long param_2)

{
  int bVar1;
  int *piVar2;
  int *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  piVar4 = piRam101176bc;
  puVar3 = puRam10117370;
  piVar2 = piRam10116208;
  bVar1 = false;
  do {
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = *puVar3;
    *puVar3 = auStack_138;
    iVar5 = FUN_10000090(auStack_138);
    if (iVar5 == 0) {
      FUN_100decb0(param_1,param_2);
      bVar1 = true;
      if ((*(char *)(param_1 + 0x16e) != '\0') && (*(char *)(param_1 + 0x1e9) != '\0')) {
        *(char *)(param_1 + 0x1e9) = 0;
        FUN_1007c714(param_1,0x3f2);
      }
      *puVar3 = local_30;
    }
    else if (((*(char *)(param_1 + 0x16e) == '\0') || (*(char *)(param_1 + 0x1e9) == '\0')) ||
            (local_34 != 0x820000)) {
      FUN_100db158(local_38,local_34);
    }
    else {
      piVar6 = (int *)FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 200),0x424,param_1);
      FUN_100db26c();
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 800));
      iVar5 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x810));
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x738));
      if (iVar5 == 0x73617665) {
        bVar1 = false;
      }
      else {
        *(char *)(param_1 + 0x1e9) = 0;
        *(int *)(param_1 + 0x128) = 0;
        FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x110),0x1f);
      }
    }
  } while (!bVar1);
  return;
}

/* Address: 0x100802b0 Size: 60 bytes */
void FUN_100802b0(void)

{
  FUN_100c1c8c(uRam101162fc,*puRam10116310,0x1ec,uRam10116314,uRam10116318);
  return;
}

/* Address: 0x100802ec Size: 8 bytes */
int FUN_100802ec(void)

{
  return uRam1011631c;
}

/* Address: 0x100802fc Size: 128 bytes */
int * FUN_100802fc(int *param_1)

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
    *param_1 = (*(int*)((char*)ppuVar1 - 0x560));
  }
  return param_1;
}

/* Address: 0x1008037c Size: 40 bytes */
void FUN_1008037c(void)

{
  FUN_100802fc(0);
  return;
}

/* Address: 0x100803a4 Size: 160 bytes */
void FUN_100803a4(long long param_1,long long param_2,int *param_3)

{
  long long uVar1;
  
  if ((param_3[6] == 0x6d616c65) || (param_3[6] == 0x66656d61)) {
    uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x138));
    FUN_10034c94(param_3[6] != 0x6d616c65,uVar1);
  }
  else {
    FUN_100d5934(param_1,param_2,param_3);
  }
  return;
}

/* Address: 0x10080444 Size: 200 bytes */
void FUN_10080444(long long param_1,int param_2)

{
  if (param_2 == 0x646f6e74) {
    FUN_1009e534(0x123);
  }
  else if (param_2 == 0x66656d61) {
    FUN_1009e534(0x126);
  }
  else if (param_2 == 0x68697265) {
    FUN_1009e534(0x122);
  }
  else if (param_2 == 0x6d616c65) {
    FUN_1009e534(0x125);
  }
  else if (param_2 == 0x6e616d65) {
    FUN_1009e534(0x124);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x1008050c Size: 60 bytes */
void FUN_1008050c(void)

{
  FUN_100c1c8c(uRam1011631c,*puRam10116324,0x40,uRam10116328,uRam101166b0);
  return;
}

/* Address: 0x10080548 Size: 8 bytes */
int FUN_10080548(void)

{
  return uRam1011632c;
}

/* Address: 0x10080558 Size: 128 bytes */
int * FUN_10080558(int *param_1)

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
    *param_1 = (*(int*)((char*)ppuVar1 - 0x55c));
  }
  return param_1;
}

/* Address: 0x100805d8 Size: 40 bytes */
void FUN_100805d8(void)

{
  FUN_10080558(0);
  return;
}

/* Address: 0x10080600 Size: 444 bytes */
void FUN_10080600(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  short uVar2;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 != 0x73696431) {
    if (iVar1 < 0x73696432) {
      if (iVar1 == 0x676f6c64) {
        FUN_100381dc(2);
        return;
      }
      if (iVar1 < 0x676f6c65) {
        if (iVar1 == 0x63697479) {
          FUN_100381dc(0);
          return;
        }
        if (iVar1 == 0x6576656e) {
          FUN_100381dc(1);
          return;
        }
      }
      else {
        if (iVar1 == 0x72696768) {
LAB_1008074c:
          if (*(int *)(param_3 + 0x18) == 0x6c656674) {
            uVar2 = 0xffff;
          }
          else {
            uVar2 = 1;
          }
          FUN_10038288(uVar2,uRam10116bc0);
          return;
        }
        if (iVar1 < 0x72696769) {
          if (iVar1 == 0x6c656674) goto LAB_1008074c;
        }
        else if (iVar1 == 0x73696430) goto LAB_10080784;
      }
LAB_100807a4:
      FUN_100d5934();
      return;
    }
    if (iVar1 != 0x73696435) {
      if (iVar1 < 0x73696436) {
        if (iVar1 != 0x73696433) {
          if (iVar1 < 0x73696434) {
            if (iVar1 != 0x73696432) goto LAB_100807a4;
          }
          else if (iVar1 != 0x73696434) goto LAB_100807a4;
        }
      }
      else if (iVar1 != 0x73696437) {
        if (iVar1 < 0x73696438) {
          if (iVar1 == 0x73696436) goto LAB_10080784;
        }
        else if (iVar1 == 0x77696e6e) {
          FUN_100381dc(3);
          return;
        }
        goto LAB_100807a4;
      }
    }
  }
LAB_10080784:
  FUN_10038624((short)*(int *)(param_3 + 0x18) + -0x6430);
  return;
}

/* Address: 0x100807bc Size: 140 bytes */
void FUN_100807bc(long long param_1,unsigned int param_2)

{
  if ((param_2 < 0x73696430) || (0x73696437 < param_2)) {
    if (param_2 == 0x646f6e65) {
      FUN_1009e534(0x16a);
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_1009e534((short)param_2 + -0x62c5);
  }
  return;
}

/* Address: 0x10080848 Size: 8 bytes */
int FUN_10080848(void)

{
  return uRam10116334;
}

/* Address: 0x10080858 Size: 104 bytes */
int * FUN_10080858(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa8),
     param_1 != (int *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x55a));
  }
  return param_1;
}

/* Address: 0x100808c0 Size: 40 bytes */
void FUN_100808c0(void)

{
  FUN_10080858(0);
  return;
}

/* Address: 0x100808e8 Size: 60 bytes */
void FUN_100808e8(void)

{
  int *ppuVar1;
  long long in_r7;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_10038288(0,in_r7);
  FUN_10075894(*(int *)(*(int*)((char*)ppuVar1 - 0x155)));
  return;
}

/* Address: 0x10080924 Size: 44 bytes */
void FUN_10080924(void)

{
  FUN_100376d8(1,1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1008095c() { }











/* Address: 0x100809c8 Size: 116 bytes */
int * FUN_100809c8(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x1b4);
  if (puVar2 != (int *)0x0) {
    FUN_100c6b2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x141));
    *(char *)(puVar2 + 0x2a) = 0;
    puVar2[0x2b] = 0;
    FUN_100b19f4(puVar2 + 0x2c,0);
  }
  return puVar2;
}

/* Address: 0x10080a3c Size: 152 bytes */
void FUN_10080a3c(void)

{
  short *puVar1;
  int *puVar2;
  int *ppuVar3;
  short local_10 [8];
  
  puVar2 = puRam101176e0;
  ppuVar3 = 0 /* TVect base */;
  puVar1 = (short *)*puRam101176e0;
  if (puVar1 == (short *)0x0) {
    FUN_1005cd90();
  }
  else {
    FUN_1002122c(*puVar1,puVar1[1],local_10);
    FUN_10021a3c(local_10[0],(*(int*)((char*)ppuVar3 - 0xfd)),0);
    if (*(short *)(*(int*)((char*)ppuVar3 - 0x553)) == 0) {
      *(short *)(*(int*)((char*)ppuVar3 - 0x6f)) = 1;
      *(int *)(*(int*)((char*)ppuVar3 - 0x6e)) = *puVar2;
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10080ad4() { }































































































































































/* Address: 0x10080cf0 Size: 756 bytes */
void FUN_10080cf0(int *param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int *puVar3;
  unsigned int uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int local_84;
  short local_60;
  short local_5e;
  int local_54;
  char local_50 [2];
  short local_4e;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  
  iVar1 = param_1[10];
  FUN_100db26c(iVar1);
  if (*(int *)(iVar1 + 0x158) == 0) {
    sVar5 = 0x754e;
  }
  else {
    sVar5 = 0x3a99;
  }
  if (param_1[0xe] < 0xe1) {
    sVar6 = 0x5a;
  }
  else {
    sVar6 = 0x24;
  }
  if (*(int *)(iVar1 + 0x158) == 0) {
    FUN_10117884((int)*(int **)(iVar1 + 0x14c) + (int)*(short *)(**(int **)(iVar1 + 0x14c) + 0x2b8))
    ;
  }
  else {
    FUN_1007f034(iVar1);
  }
  if (param_1[0x2b] == 0) {
    piVar2 = (int *)FUN_10000720(sVar5 + param_2);
    FUN_100db2a4();
    iVar1 = *piVar2;
    local_38 = *(short *)(iVar1 + 2);
    local_36 = *(short *)(iVar1 + 4);
    local_34 = *(short *)(iVar1 + 6);
    local_30 = 0x100;
    uVar4 = (int)(short)((short)param_1[0xe] + -0x43) + 1;
    sVar7 = (short)(((long long)((int)uVar4 >> 5) +
                     (unsigned long long)((int)uVar4 < 0 && (uVar4 & 0x1f) != 0) & 0xffffffff) << 5);
    if (0x100 < sVar7) {
      sVar7 = 0x100;
    }
    local_32 = sVar7 + local_36 + 0x40;
    FUN_100b08d4(local_50,&local_38);
    local_54 = (int)local_4e;
    uVar4 = param_1[0xe] - (int)local_4e;
    local_3c = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    local_40 = (int)sVar6;
    puVar3 = (int *)FUN_100f56e4(0xdc);
    if (puVar3 != (int *)0x0) {
      FUN_100cdb5c(puVar3);
      *puVar3 = *(int *)(local_84 + -0x1948);
      *(short *)(puVar3 + 0x2c) = 0;
      *(short *)((int)puVar3 + 0xb2) = 0;
      *(short *)(puVar3 + 0x2d) = 0;
      puVar3[0x31] = 0;
      *(short *)(puVar3 + 0x32) = 0;
      puVar3[0x36] = 0;
    }
    FUN_100b08d4(&local_60,&local_38);
    local_48 = (int)local_60;
    local_44 = (int)local_5e;
    FUN_100d08c4(puVar3,param_1,&local_40,&local_48,5,5,sVar5 + param_2);
    puVar3[6] = 0x70726f67;
    *(short *)((int)puVar3 + 0xb2) = 100;
    param_1[0x2b] = (int)puVar3;
  }
  else {
    FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x7a8),sVar5 + param_2,0);
    FUN_100861b8(param_1[0x2b],0,0);
  }
  FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x660),1,0);
  *(char *)(param_1 + 0x2a) = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x488));
  return;
}

/* Address: 0x10080fe4 Size: 92 bytes */
void FUN_10080fe4(int param_1,short param_2)

{
  if (*(int *)(param_1 + 0xac) == 0) {
    FUN_10080cf0(param_1,0);
  }
  FUN_100861b8(*(int *)(param_1 + 0xac),param_2,1);
  return;
}

/* Address: 0x10081040 Size: 168 bytes */
void FUN_10081040(int *param_1)

{
  int *puVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = puRam10116bc0;
  FUN_100b1d90(param_1 + 0x2c);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = param_1[0xd];
  local_14 = param_1[0xe];
  if (param_1[0x2b] != 0) {
    local_18 = *(int *)(param_1[0x2b] + 0x2c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),&local_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  return;
}

/* Address: 0x100810e8 Size: 1992 bytes */
void FUN_100810e8(int *param_1)

{
  int bVar1;
  int bVar2;
  int bVar3;
  short *psVar4;
  int uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int bVar10;
  int bVar11;
  int bVar12;
  int *ppuVar13;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  unsigned long long uVar14;
  long long lVar19;
  short sVar20;
  unsigned int uVar21;
  long long uVar22;
  long long lVar23;
  long long lVar24;
  unsigned long long uVar25;
  unsigned long long uVar26;
  long long lVar27;
  long long lVar28;
  unsigned long long uVar29;
  int local_394;
  
  iVar9 = iRam101176f8;
  iVar8 = iRam101176f4;
  iVar7 = iRam101176f0;
  iVar18 = iRam101176ec;
  piVar6 = piRam10117364;
  piVar17 = piRam1011735c;
  uVar5 = uRam10116bc0;
  psVar4 = psRam10116360;
  uVar14 = ZEXT48(((char*)0));
  ppuVar13 = 0 /* TVect base */;
  lVar24 = uVar14 - 0x370;
  uVar25 = (unsigned long long)uRam10116358;
  uVar26 = (unsigned long long)uRam1011635c;
  lVar27 = uVar14 - 0x358;
  lVar28 = uVar14 - 600;
  *(char *)(param_1 + 0x2a) = 2;
  if (*pcRam10117378 != '\0') {
    ppuVar13 = 0 /* TVect base */;
    FUN_10084ee0();
    FUN_10084ef0(0);
  }
  if (param_1[0x6c] == 0) {
    if (param_1[0xe] < 0x71) {
      uVar22 = 0x3ef;
    }
    else if (param_1[0xe] < 0xe1) {
      uVar22 = 0x3ee;
    }
    else {
      uVar22 = 0x3ed;
    }
    piVar15 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar13 - 0x79)) +
                                  (int)*(short *)(**(int **)(*(int*)((char*)ppuVar13 - 0x79)) + 0xd0),param_1[10],
                                  param_1,uVar22,uVar5);
    param_1[0x6c] = (int)piVar15;
    FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x4d0));
  }
  else {
    iVar16 = FUN_100e11c8((unsigned long long)(unsigned int)param_1[0x6c] + 0x2c,uVar5);
    if (iVar16 != 0) {
      FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x370),uVar5,1);
    }
  }
  FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x660),1,0);
  if (**(int **)(local_394 + -0x1c0) == 0) {
    *(int *)(uVar14 - 0x158) = 0;
    FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x370),uVar14 - 0x158,0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  else {
    uVar29 = 0;
    do {
      uVar22 = FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),
                            uVar29 + 0x61726d30);
      piVar15 = (int *)FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),
                                    uVar29 + 0x63686530);
      if (((int)uVar22 != 0) && (piVar15 != (int *)0x0)) {
        if ((int)uVar29 < (int)*psVar4) {
          iVar16 = (int)((uVar29 & 0xffffffff) << 1);
          uVar21 = (int)*(short *)(*piVar17 + 0x110) + (int)*(short *)(iVar16 + iVar18);
          sVar20 = *(short *)(iVar16 + iVar7);
          iVar16 = (int)((uVar29 & 0x3fffffff) << 2);
          FUN_10079ee8(uVar22,*(char *)(*(int *)(iVar16 + iVar9) + 4),
                       *(short *)(*piVar17 + 0x110),1);
          FUN_10079f68(uVar22,0,0,*(char *)(*(int *)(iVar16 + iVar9) + 7),
                       *(char *)(*(int *)(iVar16 + iVar9) + 8),1);
          FUN_1007a018(uVar22,((short)uVar21 -
                              (short)(((long long)((int)uVar21 >> 3) +
                                       (unsigned long long)((int)uVar21 < 0 && (uVar21 & 7) != 0) &
                                      0xffffffff) << 3)) + 2,2,sVar20 == 0,1);
          if (param_1[0xe] < 0x71) {
            lVar23 = ((long long)*(short *)((int)((uVar29 & 0xffffffff) << 1) + iVar8) & 0x1fffffffU)
                     * 8 + uVar25;
          }
          else {
            lVar23 = ((long long)*(short *)((int)((uVar29 & 0xffffffff) << 1) + iVar8) & 0x1fffffffU)
                     * 8 + uVar26;
          }
          FUN_100850e8(piVar15,8,lVar23,0x24,0xf,1);
          lVar23 = -(long long)*(short *)((int)((uVar29 & 0xffffffff) << 1) + iVar8);
          lVar19 = lVar23 + -1;
          FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x660),
                       lVar19 + (-(unsigned long long)(lVar19 == 0) - (lVar23 + -2)) & 0xff,1);
        }
        else {
          FUN_10079ee8(uVar22,0xffffffffffffffff,*(short *)(*piVar17 + 0x110),1);
          FUN_10079f68(uVar22,0,0,0,0,1);
          FUN_1007a018(uVar22,1,0,0,1);
          FUN_10117884((int)piVar15 + (int)*(short *)(*piVar15 + 0x660),0,1);
        }
      }
      sVar20 = (short)uVar29 + 1;
      uVar29 = (unsigned long long)sVar20;
    } while (sVar20 < 8);
    iVar18 = local_394;
    FUN_10042344(iVar9,iVar7,*psVar4);
    if (**(int **)(iVar18 + -0x1c0) == 0) {
      *(unsigned int *)lVar24 = *(unsigned int *)(*(int *)(iVar18 + -0x1554) + 0x24) & 0xffffff00;
    }
    else {
      FUN_10001dd0(lVar24,(unsigned long long)*(unsigned int *)(iVar18 + -0x1554) + 0x28,
                   **(short **)(iVar18 + -0x1a4));
    }
    piVar17 = (int *)FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),
                                  0x6d6f7665);
    if (piVar17 != (int *)0x0) {
      *(char *)lVar28 = 0;
      FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x7a0),lVar28);
      lVar23 = uVar14 - 0x150;
      FUN_100b19f4(lVar23,lVar24);
      FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x7c8),lVar23,0);
      *(char *)lVar27 = 0;
      FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x7a0),lVar27);
      iVar18 = FUN_100ef228(lVar27,lVar28);
      if (iVar18 != 0) {
        FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x4d0));
      }
    }
    uVar22 = FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),0x67726f75)
    ;
    if ((int)uVar22 != 0) {
      iVar18 = local_394;
      uVar14 = FUN_1005cd18();
      FUN_100850e8(uVar22,8,(uVar14 & 0x1fffffff) * 8 + (unsigned long long)*(unsigned int *)(iVar18 + -0x153c),0x24,
                   0xf,1);
    }
    bVar1 = true;
    bVar2 = false;
    bVar3 = false;
    iVar18 = 0;
    bVar10 = true;
    bVar11 = false;
    bVar12 = false;
    if (0 < *psVar4) {
      do {
        bVar3 = bVar12;
        bVar2 = bVar11;
        bVar1 = bVar10;
        if (*(short *)(iVar18 * 2 + iVar7) != 0) {
          if (*(char *)(*piVar6 + *(char *)(*(int *)(iVar18 * 4 + iVar9) + 4) * 6 + 1) != '\0') {
            bVar2 = true;
          }
          if (*(char *)(*piVar6 + *(char *)(*(int *)(iVar18 * 4 + iVar9) + 4) * 6 + 2) != '\0') {
            bVar3 = true;
          }
          if ((*(unsigned short *)(*(int *)(iVar18 * 4 + iVar9) + 0xc) & 0x1000) == 0) {
            bVar1 = false;
          }
        }
        sVar20 = (short)iVar18 + 1;
        iVar18 = (int)sVar20;
        bVar10 = bVar1;
        bVar11 = bVar2;
        bVar12 = bVar3;
      } while (sVar20 < *psVar4);
    }
    uVar22 = FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),0x666c7920)
    ;
    if ((int)uVar22 != 0) {
      iVar18 = FUN_100421f0(iVar9,iVar7,*psVar4);
      if (iVar18 == 0) {
        if (bVar1) {
          FUN_100850e8(uVar22,8,*(int *)(local_394 + -0x1538),0x24,0xf,1);
        }
        else if (bVar2) {
          if (bVar3) {
            FUN_100850e8(uVar22,8,*(int *)(local_394 + -0x1330),0x24,0xf,1);
          }
          else {
            FUN_100850e8(uVar22,8,*(int *)(local_394 + -0x132c),0x24,0xf,1);
          }
        }
        else if (bVar3) {
          FUN_100850e8(uVar22,8,*(int *)(local_394 + -0x1328),0x24,0xf,1);
        }
        else {
          FUN_100850e8(uVar22,0xffffffffffffffff,*(int *)(local_394 + -0x1334),0x24,0xf,1);
        }
      }
      else {
        FUN_100850e8(uVar22,8,*(int *)(local_394 + -0x1334),0x24,0xf,1);
      }
    }
  }
  return;
}

/* Address: 0x100818b0 Size: 300 bytes */
void FUN_100818b0(int *param_1,long long param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int local_18;
  int iStack_14;
  
  local_18 = param_1[0xd];
  iStack_14 = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  if (param_1[0x2b] != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x2e8) + (int)param_1,param_1[0x2b]);
    FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x90));
    param_1[0x2b] = 0;
  }
  if (param_1[0x6c] != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8),param_1[0x6c]);
    FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x90));
    param_1[0x6c] = 0;
  }
  if ((param_3 != '\0') && (iVar2 = FUN_100e11c8(param_1 + 0xd,&local_18), iVar2 != 0)) {
    cVar1 = *(char *)(param_1 + 0x2a);
    if ((cVar1 != '\0') && ((cVar1 != '\x01' && (cVar1 == '\x02')))) {
      FUN_100810e8(param_1);
    }
  }
  return;
}

/* Address: 0x100819e4 Size: 136 bytes */
int * FUN_100819e4(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x44),
     param_1 != (int *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = (*(int*)((char*)ppuVar1 - 0x54c));
    *(short *)(param_1 + 0x10) = 0;
  }
  return param_1;
}

/* Address: 0x10081a6c Size: 40 bytes */
void FUN_10081a6c(void)

{
  FUN_100819e4(0);
  return;
}

/* Address: 0x10081a94 Size: 188 bytes */
void FUN_10081a94(int param_1,unsigned int param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if (param_2 == 0x67726f75) {
      FUN_1005d364(0,0,8);
    }
    else if (param_2 == 0x696e666f) {
      FUN_1005d364(0,0,*(short *)(param_1 + 0x40));
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_1005d364(0,0,(short)param_2 + -0x6d30);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10081b50() { }
















































































/* Address: 0x10081ddc Size: 92 bytes */
void FUN_10081ddc(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116350,*puRam10116374,0x1b4,uRam10116378,uRam10116c7c);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x54d)),*(int *)(*(int*)((char*)ppuVar1 - 0x549)),0x44,(*(int*)((char*)ppuVar1 - 0x548)),(*(int*)((char*)ppuVar1 - 0x47c)));
  return;
}

/* Address: 0x10081f08 Size: 40 bytes */
void FUN_10081f08(void)

{
  FUN_10081e48(0);
  return;
}

/* Address: 0x10081f30 Size: 156 bytes */
void FUN_10081f30(int param_1,long long param_2)

{
  int iVar1;
  
  FUN_10105b08(param_1,param_2);
  *(int *)(param_1 + 0x80) = (int)param_2;
  FUN_10044d38(param_1 + 0x8c,0x3ea);
  iVar1 = FUN_1000a12c(param_1 + 0xa0,*(short *)(param_1 + 0x90),
                       *(short *)(param_1 + 0x92),8,0,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  return;
}

/* Address: 0x10081fcc Size: 224 bytes */
void FUN_10081fcc(int *param_1,long long param_2)

{
  int *puVar1;
  int iVar2;
  char auStack_130 [8];
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar1 = puRam10117370;
  if (*(char *)((int)param_1 + 0xbe) == '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puRam10117370;
    *puRam10117370 = auStack_128;
    iVar2 = FUN_10000090(auStack_128);
    if (iVar2 == 0) {
      FUN_10007f78();
      *puVar1 = local_20;
    }
    else {
      *(char *)((int)param_1 + 0xbe) = 1;
      FUN_100db158(local_28,local_24);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_2,auStack_130);
    FUN_10067270();
    FUN_100b0578(auStack_130);
    FUN_10002148();
  }
  return;
}

/* Address: 0x100820ac Size: 144 bytes */
void FUN_100820ac(int param_1,long long param_2)

{
  int iVar1;
  
  FUN_10105d28(param_1,param_2);
  *(int *)(param_1 + 0x80) = (int)param_2;
  FUN_10044d38(param_1 + 0x8c,0x3ea);
  iVar1 = FUN_1000a12c(param_1 + 0xa0,*(short *)(param_1 + 0x90),
                       *(short *)(param_1 + 0x92),8,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  return;
}

/* Address: 0x1008213c Size: 292 bytes */
void FUN_1008213c(long long param_1,int *param_2,int param_3)

{
  int bVar1;
  int *ppuVar2;
  short uVar4;
  int iVar3;
  short uVar5;
  
  ppuVar2 = 0 /* TVect base */;
  if (((*(char *)(*piRam1011734c + 0x9a) != '\0') ||
      (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2 + 0xd0) != 0)) ||
     (*(char *)(*piRam1011734c + 0x99) != '\0')) {
    FUN_100ecc68();
    return;
  }
  uVar4 = (short)(param_2[1] / 0x28);
  uVar5 = (short)(*param_2 / 0x28);
  bVar1 = false;
  if ((1 < *(short *)(param_3 + 0x28)) &&
     ((iVar3 = FUN_1003b4a4(uVar4,uVar5,1), iVar3 == 5 ||
      ((*(int *)(*(int*)((char*)ppuVar2 - 0x70)) != 0 && (iVar3 == 0)))))) {
    FUN_10021524(uVar4,uVar5,0);
    FUN_1005e858();
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  FUN_1000b3d8(uVar4,uVar5,1,1,param_2);
  return;
}

/* Address: 0x10082320 Size: 112 bytes */
long long FUN_10082320(int param_1,char param_2)

{
  short sVar1;
  
  if ((param_2 == '\x01') && (*(char *)(param_1 + 0x84) != '\0')) {
    sVar1 = *(short *)(param_1 + 0x86) + 1;
    *(short *)(param_1 + 0x86) = sVar1;
    if (sVar1 == 4) {
      *(short *)(param_1 + 0x86) = 0;
    }
    FUN_10082260();
  }
  return 0;
}

/* Address: 0x10082390 Size: 160 bytes */
void FUN_10082390(int param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_1000a094(param_1 + 0x8c);
  FUN_1000a094(param_1 + 0xa0);
  FUN_1000a094((*(int*)((char*)ppuVar1 - 0x68)));
  *(short *)(*(int*)((char*)ppuVar1 - 0x545)) = 0;
  *(short *)(*(int*)((char*)ppuVar1 - 0x544)) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_100019c8(*(int *)(param_1 + 0xb4));
    *(int *)(param_1 + 0xb4) = 0;
  }
  FUN_10001488();
  FUN_100ef510(*(int *)(param_1 + 0xb8));
  FUN_10106060(param_1);
  return;
}

/* Address: 0x10082430 Size: 528 bytes */
void FUN_10082430(int param_1,short param_2,short param_3)

{
  char cVar1;
  int *piVar2;
  long long uVar3;
  int iVar4;
  short sVar5;
  unsigned int uVar7;
  unsigned long long uVar6;
  unsigned short uVar8;
  unsigned long long uVar9;
  
  piVar2 = piRam101176e0;
  uVar9 = (unsigned long long)uRam10117438;
  *(char *)(param_1 + 0xbe) = 0;
  *(char *)(param_1 + 0x84) = 1;
  *(short *)(param_1 + 0x86) = 0;
  *(short *)(param_1 + 0x8a) = param_2;
  *(short *)(param_1 + 0x88) = param_3;
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10001290(*(int *)(param_1 + 0x9c));
  }
  if ((int)uVar3 != 0) {
    iVar4 = FUN_10001d70(uVar3);
    if (iVar4 != 0) {
      FUN_10003468(uVar3);
      goto LAB_100824d8;
    }
  }
  FUN_10044d38(param_1 + 0x8c,0x3ea);
LAB_100824d8:
  FUN_10009b48(param_1 + 0x8c,0,0,*(short *)(param_1 + 0x90),*(short *)(param_1 + 0x92),
               param_1 + 0xa0,0);
  if ((*(unsigned short *)(*piVar2 + 0xc) & 0x1000) == 0) {
    uVar8 = (unsigned short)*(char *)(*piVar2 + 4);
  }
  else {
    uVar8 = 5;
  }
  uVar7 = (unsigned int)(short)uVar8;
  uVar6 = (long long)((int)uVar7 >> 4) + (unsigned long long)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
  cVar1 = *(char *)(*piVar2 + 5);
  if ((-1 < cVar1) && (cVar1 < '\t')) {
    FUN_100462c8(cVar1 + 0x10);
    FUN_100451f4(*(char *)(*piVar2 + 5) + 0x10);
    sVar5 = 0;
    do {
      FUN_10009d38((((long long)*(char *)(*piVar2 + 5) & 0x3fffffffU) * 4 +
                    (long long)*(char *)(*piVar2 + 5) & 0x3fffffff) * 4 + uVar9,
                   (short)(((long long)(short)uVar8 +
                            ((long long)((int)uVar7 >> 4) +
                             (unsigned long long)((short)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xfffffff) *
                            -0x10 & 0xffffffff) << 5),
                   (short)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1),0x20,0x1d,
                   param_1 + 0xa0,sVar5 << 5,0);
      sVar5 = sVar5 + 1;
    } while (sVar5 < 4);
    FUN_1004530c(*(char *)(*piVar2 + 5) + 0x10);
  }
  return;
}

/* Address: 0x10082640 Size: 1200 bytes */
void FUN_10082640(int *param_1,int *param_2,int *param_3,short *param_4,short *param_5,
                 int *param_6,long long param_7)

{
  int *puVar1;
  int iVar2;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int uVar10;
  unsigned long long uVar9;
  int local_2f4;
  int local_2c8;
  int local_2c4;
  char auStack_2c0 [8];
  int local_2b8;
  int local_2b4;
  short local_2b0;
  short local_2ae;
  short local_2ac;
  short local_2aa;
  short local_2a8;
  short local_2a6;
  short local_2a4;
  short local_2a2;
  char auStack_2a0 [276];
  unsigned int local_18c;
  char auStack_188 [276];
  int local_74;
  int local_70;
  int uStack_6c;
  int uStack_68;
  int uStack_64;
  int local_60;
  int *local_58;
  int local_54;
  int local_50;
  
  iVar2 = iRam101176c0;
  local_58 = (int *)*puRam101169c4;
  iVar7 = *local_58;
  uVar10 = *(int *)(iVar7 + 0x41c);
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5b0));
  local_54 = uVar10;
  uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a8));
  local_50 = iVar7;
  uVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  FUN_10117884(ZEXT48(local_58) + (long long)*(short *)(local_50 + 0x418),uVar5,uVar4,uVar3,param_4,
               param_5,param_6,param_7);
  if (param_1[0x2d] != 0) {
    FUN_100019c8(param_1[0x2d]);
    param_1[0x2d] = 0;
  }
  piVar6 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  iVar7 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x3a8));
  if (iVar7 != 0) {
    FUN_100ee64c(auStack_188);
    FUN_10001e48(local_74);
    FUN_100ee64c(auStack_2a0);
    local_2a8 = 0xd8f0;
    local_2a6 = 0xd8f0;
    local_2a4 = 10000;
    local_2a2 = 10000;
    uVar9 = (unsigned long long)local_18c;
    uVar3 = FUN_100b0578(&local_2a8);
    FUN_10003150(uVar9,uVar3);
    FUN_10001548(local_18c);
    iVar7 = local_2f4;
    FUN_100b02d0(auStack_2c0);
    FUN_1000c4c4((short)(param_2[1] / 0x28),(short)(*param_2 / 0x28),auStack_2c0);
    iVar8 = FUN_100b04f0(auStack_2c0,*(int *)(iVar7 + -0xe60));
    if (iVar8 != 0) {
      FUN_10001548(local_74);
      FUN_100ee77c(auStack_2a0,2);
      FUN_100ee77c(auStack_188,2);
      return;
    }
    puVar1 = *(int **)(iVar7 + -0x150c);
    local_70 = *puVar1;
    uStack_6c = puVar1[1];
    uStack_68 = puVar1[2];
    uStack_64 = puVar1[3];
    local_60 = puVar1[4];
    iVar7 = FUN_1000a12c(&local_70,*(short *)(iVar2 + 4),*(short *)(iVar2 + 6),8,0);
    if (iVar7 == 0) {
      FUN_100db26c(0);
    }
    FUN_10000870(&local_2c4,&local_2c8);
    FUN_10000888(local_60,0);
    FUN_100b2268(*(int *)(local_2f4 + -0x1d4));
    FUN_100008b8();
    FUN_100b2268((unsigned long long)*(unsigned int *)(local_2f4 + -0x1d4) + 0x5fa);
    FUN_100021c0();
    if (local_60 != 0) {
      FUN_10009a98(local_60);
    }
    FUN_1000b3d8((short)(param_2[1] / 0x28),(short)(*param_2 / 0x28),2,1,param_2);
    if (local_60 != 0) {
      FUN_10009b00(local_60);
    }
    FUN_10000888(local_2c4,local_2c8);
    local_2aa = *(short *)(iVar2 + 4);
    local_2ac = *(short *)(iVar2 + 6);
    local_2b0 = 0;
    local_2ae = 0;
    FUN_100b0578(&local_2b0);
    iVar7 = FUN_100001b0();
    param_1[0x2d] = iVar7;
    FUN_10009b48(&local_70,0,0,*(short *)(iVar2 + 4),*(short *)(iVar2 + 6),
                 *(int *)(local_2f4 + -0x1208),0,0);
    FUN_100001c8();
    FUN_1000a094(&local_70);
    FUN_10001548(local_74);
    FUN_100ee77c(auStack_2a0,2);
    FUN_100ee77c(auStack_188,2);
  }
  *param_4 = 5;
  *(int *)(param_4 + 1) = param_1[0x2d];
  iVar7 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if ((iVar7 != 0) && (param_3 != (int *)0x0)) {
    local_2b8 = *(int *)(*param_3 + 2);
    local_2b4 = *(int *)(*param_3 + 6);
    *param_6 = local_2b8;
    param_6[1] = local_2b4;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      FUN_10117884(param_5,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    }
  }
  return;
}

/* Address: 0x10082af0 Size: 232 bytes */
void FUN_10082af0(int param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7)

{
  int iVar1;
  int *puVar3;
  long long uVar2;
  int uStack00000028;
  char auStack_20 [32];
  
  iVar1 = iRam101177f0;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    uStack00000028 = param_5;
    FUN_100b0384(((char*)0 + 0x00000028));
    FUN_10002fd0();
    puVar3 = (int *)FUN_100b0368(auStack_20,((char*)0 + 0x00000028));
    uVar2 = FUN_100000f0(param_4,*puVar3,0,0,0x81,param_7,2);
    if ((int)uVar2 != -0x355) {
      FUN_100db2f4(uVar2);
    }
    FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x18),param_3,param_3);
    FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),param_3,param_3);
  }
  return;
}

/* Address: 0x10082be8 Size: 192 bytes */
void FUN_10082be8(long long param_1,int *param_2,long long param_3)

{
  long long uVar1;
  short local_20;
  short local_1e;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  local_18 = 0;
  local_16 = 0;
  local_14 = 0x28;
  local_12 = 0x28;
  local_1e = (short)(param_2[1] / 0x28) * 0x28;
  local_20 = (short)(*param_2 / 0x28) * 0x28;
  FUN_100b065c(&local_18,&local_20);
  uVar1 = FUN_100b0578(&local_18);
  FUN_10003150(param_3,uVar1);
  return;
}

/* Address: 0x10082ca8 Size: 636 bytes */
void FUN_10082ca8(int *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  char *puVar5;
  int *piVar6;
  int uVar7;
  int iVar8;
  int *piVar9;
  short sVar10;
  short sVar11;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  short local_28;
  short local_26;
  
  uVar7 = uRam10117700;
  piVar6 = piRam1011735c;
  puVar5 = puRam10116398;
  psVar4 = psRam10116390;
  psVar3 = psRam1011638c;
  *(char *)((int)param_1 + 0xbe) = 0;
  FUN_1010d2f8(param_1);
  iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar8 != 0) {
    piVar9 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x5f0) + (int)param_1,1);
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x600),&local_38);
    FUN_10117884((int)*(short *)(*param_1 + 0x2c0) + (int)param_1,&local_38);
    iVar8 = FUN_100e1a3c(&local_38,1);
    sVar10 = (short)((iVar8 + 0x27) / 0x28) + 1;
    sVar1 = sVar10 * 0x28;
    iVar8 = FUN_100e1a3c(&local_38,0);
    sVar11 = (short)((iVar8 + 0x27) / 0x28) + 1;
    sVar2 = sVar11 * 0x28;
    *(short *)(*piVar6 + 0x17e) = (short)((local_2c + local_34) / 0x50);
    *(short *)(*piVar6 + 0x180) = (short)((local_30 + local_38) / 0x50);
    *(short *)(*piVar6 + 0x178) = (short)(local_34 / 0x28);
    *(short *)(*piVar6 + 0x176) = (short)(local_38 / 0x28);
    local_28 = 0x70;
    sVar10 = *(short *)(*piVar6 + 0x178) + sVar10;
    if (0x70 < sVar10) {
      sVar10 = 0x70;
    }
    *(short *)(*piVar6 + 0x17c) = sVar10;
    local_26 = 0x9c;
    sVar11 = *(short *)(*piVar6 + 0x176) + sVar11;
    if (0x9c < sVar11) {
      sVar11 = 0x9c;
    }
    *(short *)(*piVar6 + 0x17a) = sVar11;
    if ((*psVar4 != sVar1) || (*psVar3 != sVar2)) {
      *psVar4 = sVar1;
      *psVar3 = sVar2;
      iVar8 = *piVar6;
      local_3e = *(short *)(iVar8 + 0x178);
      local_40 = *(short *)(iVar8 + 0x176);
      local_3a = *(short *)(iVar8 + 0x17c);
      local_3c = *(short *)(iVar8 + 0x17a);
      FUN_10009944(&local_40);
      iVar8 = FUN_1000a12c(uVar7,*psVar4,*psVar3,8,1,0);
      if (iVar8 == 0) {
        *puVar5 = 0;
      }
      else {
        *puVar5 = 1;
      }
    }
  }
  return;
}

/* Address: 0x100830bc Size: 136 bytes */
void FUN_100830bc(long long param_1,long long param_2,long long param_3,char param_4)

{
  int *piVar1;
  
  piVar1 = piRam1011639c;
  FUN_10117884(*piRam1011639c + (int)*(short *)(*(int *)*piRam1011639c + 0x4d0));
  FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x4c8));
  FUN_1010c5f0(param_1,param_2,param_3,param_4);
  return;
}

/* Address: 0x10083144 Size: 456 bytes */
void FUN_10083144(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  int *piVar2;
  short sVar6;
  int *puVar4;
  int iVar5;
  long long uVar3;
  unsigned long long uVar7;
  long long lVar8;
  char auStack_30 [8];
  char auStack_28 [40];
  
  piVar2 = piRam10116204;
  uVar7 = (unsigned long long)uRam101177f0;
  lVar8 = -1;
  if ((*(char *)(*piRam1011734c + 0x9a) == '\0') &&
     (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2 + 0xd0) == 0)) {
    sVar6 = FUN_1003b4a4((short)(param_2[1] / 0x28),(short)(*param_2 / 0x28),1);
    lVar8 = (long long)(short)(sVar6 + 1000);
  }
  if ((int)lVar8 != (int)*(short *)(param_1 + 0x2f)) {
    iVar1 = param_1[0x2e];
    param_1[0x2e] = 0;
    if ((int)lVar8 == -1) {
      FUN_100014a0(uVar7 + 0x5e);
    }
    else {
      FUN_10117884(auStack_30,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
      puVar4 = (int *)FUN_100b0368(auStack_28,auStack_30);
      iVar5 = FUN_100033c0(*puVar4,param_3);
      if (iVar5 == 0) {
        FUN_100014a0(uVar7 + 0x5e);
      }
      else {
        uVar3 = FUN_10002ac0(lVar8);
        param_1[0x2e] = (int)uVar3;
        if ((int)uVar3 == 0) {
          puVar4 = (int *)FUN_10001470(lVar8);
          if (puVar4 == (int *)0x0) {
            FUN_100014a0(uVar7 + 0x5e);
          }
          else {
            FUN_100014a0(*puVar4);
          }
        }
        else {
          FUN_10002850(uVar3);
        }
      }
    }
    *(short *)(param_1 + 0x2f) = (short)lVar8;
    if (iVar1 != 0) {
      FUN_100032a0(iVar1);
    }
    if (*piVar2 != 0) {
      *(short *)(*piVar2 + 0xa0) = 0xffff;
    }
  }
  return;
}

/* Address: 0x1008330c Size: 976 bytes */
void FUN_1008330c(int param_1,int param_2)

{
  short sVar1;
  
  if ((*(char *)(*piRam1011734c + 0x9a) != '\0') ||
     (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2 + 0xd0) != 0)) {
    FUN_100da080();
    return;
  }
  sVar1 = *(short *)(param_2 + 0x24);
  if (sVar1 == 0x34) goto LAB_100834d8;
  if (sVar1 < 0x35) {
    if (sVar1 == 0x1c) {
      FUN_100418d8(0x34);
      return;
    }
    if (sVar1 < 0x1d) {
      if (sVar1 == 8) {
LAB_100835e0:
        if ((*(short *)(param_2 + 0x24) == 0x1b) && (*(short *)(param_2 + 0x26) != 0x47)) {
          FUN_10117884((int)*(int **)(param_1 + 0x80) +
                       (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x580);
          return;
        }
        FUN_10117884((int)*(int **)(param_1 + 0x80) +
                     (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57c);
        return;
      }
      if (sVar1 < 9) {
        if (sVar1 == 4) {
          FUN_10117884((int)*(int **)(param_1 + 0x80) +
                       (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57a);
          return;
        }
        if (sVar1 < 5) {
          if (sVar1 == 3) goto LAB_100835bc;
        }
        else if (sVar1 == 5) {
          FUN_100402e0();
          return;
        }
      }
      else {
        if (sVar1 == 0xd) {
LAB_100835bc:
          FUN_10117884((int)*(int **)(param_1 + 0x80) +
                       (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57d);
          return;
        }
        if (sVar1 < 0xe) {
          if (sVar1 == 9) {
            FUN_10117884((int)*(int **)(param_1 + 0x80) +
                         (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57e);
            return;
          }
        }
        else if (sVar1 == 0x1b) goto LAB_100835e0;
      }
    }
    else {
      if (sVar1 == 0x20) {
        FUN_1003fe94();
        return;
      }
      if (sVar1 < 0x21) {
        if (sVar1 == 0x1e) {
          FUN_100418d8(0x38);
          return;
        }
        if (sVar1 < 0x1f) {
          if (sVar1 == 0x1d) {
            FUN_100418d8(0x36);
            return;
          }
        }
        else if (sVar1 == 0x1f) {
          FUN_100418d8(0x32);
          return;
        }
      }
      else {
        if (sVar1 == 0x32) goto LAB_100834d8;
        if (sVar1 < 0x33) {
          if (sVar1 == 0x31) goto LAB_100834d8;
        }
        else if (sVar1 == 0x33) goto LAB_100834d8;
      }
    }
  }
  else {
    if (sVar1 == 100) {
      FUN_100418d8(0x36);
      return;
    }
    if (sVar1 < 0x65) {
      if (sVar1 == 0x38) {
LAB_100834d8:
        FUN_100418d8((char)*(short *)(param_2 + 0x24));
        return;
      }
      if (sVar1 < 0x39) {
        if (sVar1 == 0x36) goto LAB_100834d8;
        if (sVar1 < 0x37) {
          if (sVar1 == 0x35) goto LAB_100834d8;
        }
        else if (sVar1 == 0x37) goto LAB_100834d8;
      }
      else {
        if (sVar1 == 0x61) {
          FUN_100418d8(0x34);
          return;
        }
        if (sVar1 < 0x62) {
          if (sVar1 == 0x39) goto LAB_100834d8;
        }
        else if (sVar1 == 99) {
          FUN_100418d8(0x33);
          return;
        }
      }
    }
    else {
      if (sVar1 == 0x77) {
        FUN_100418d8(0x38);
        return;
      }
      if (sVar1 < 0x78) {
        if (sVar1 == 0x71) {
          FUN_100418d8(0x37);
          return;
        }
        if (sVar1 < 0x72) {
          if (sVar1 == 0x65) {
            FUN_100418d8(0x39);
            return;
          }
        }
        else if (sVar1 == 0x73) {
          FUN_100418d8(0x35);
          return;
        }
      }
      else {
        if (sVar1 == 0x7a) {
          FUN_100418d8(0x31);
          return;
        }
        if (sVar1 < 0x7b) {
          if (sVar1 == 0x78) {
            FUN_100418d8(0x32);
            return;
          }
        }
        else if (sVar1 == 0x7f) goto LAB_100835e0;
      }
    }
  }
  if (*(short *)(param_2 + 0x24) == 0x6f) {
    FUN_100da080();
  }
  else {
    *(unsigned short *)(param_2 + 0x22) = *(unsigned short *)(param_2 + 0x22) | 0x100;
    FUN_100d9be4();
  }
  return;
}

/* FUN_100836dc defined elsewhere */


/* Address: 0x100839c0 Size: 72 bytes */
void FUN_100839c0(int param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = piRam10116204;
  *(short *)(param_1 + 0xbc) = 0xffff;
  if (*piVar1 != 0) {
    *(short *)(*piVar1 + 0xa0) = 0xffff;
  }
  FUN_101064d4(param_1,param_2);
  return;
}

/* Address: 0x10083a08 Size: 764 bytes */
void FUN_10083a08(int param_1,char param_2,long long param_3,long long param_4,int *param_5,
                 char param_6)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  char *pcVar5;
  int *ppuVar6;
  int iVar8;
  long long uVar7;
  int *puVar9;
  int uVar10;
  unsigned int uVar11;
  short sVar12;
  short sVar13;
  char cVar14;
  short sVar15;
  int local_4c;
  
  pcVar5 = pcRam1011770c;
  psVar4 = psRam10117708;
  psVar3 = psRam10117704;
  piVar2 = piRam101176e0;
  piVar1 = piRam1011735c;
  ppuVar6 = 0 /* TVect base */;
  sVar13 = (short)(param_5[1] / 0x28);
  sVar15 = (short)(*param_5 / 0x28);
  if (param_2 == '\0') {
    *psRam10117708 = sVar13;
    *psVar3 = sVar15;
    if ((sVar13 == *(short *)*piVar2) && (sVar15 == ((short *)*piVar2)[1])) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x01';
    }
    *pcVar5 = cVar14;
  }
  uVar11 = *(unsigned int *)(*piRam10117358 + sVar15 * 0xe0 + sVar13 * 2);
  cVar14 = *(char *)(*piVar1 + (uVar11 >> 0x18) + 0x711);
  if (((cVar14 == '\n') || ((uVar11 >> 0x14 & 1) != 0)) &&
     (((unsigned short)(uVar11 >> 0x10) & 0xf) != *(unsigned short *)(*piVar1 + 0x110))) {
    sVar12 = 0;
  }
  else {
    iVar8 = FUN_100efb60();
    if (iVar8 == 0) {
      if (*(short *)ppuVar6[-100] == 2) {
        sVar12 = 6;
      }
      else if ((cVar14 == '\x02') || (cVar14 == '\x03')) {
        sVar12 = 2;
      }
      else {
        sVar12 = 6;
      }
    }
    else {
      sVar12 = 0xb;
    }
  }
  sVar12 = sVar12 + 1000;
  if (sVar12 != *(short *)(param_1 + 0xbc)) {
    FUN_100032a0(*(int *)(param_1 + 0xb8));
    *(int *)(param_1 + 0xb8) = 0;
    uVar7 = FUN_10002ac0(sVar12);
    *(int *)(param_1 + 0xb8) = (int)uVar7;
    if ((int)uVar7 == 0) {
      puVar9 = (int *)FUN_10001470(sVar12);
      if (puVar9 == (int *)0x0) {
        FUN_100014a0((unsigned long long)*(unsigned int *)(local_4c + -0xb0) + 0x5e);
      }
      else {
        FUN_100014a0(*puVar9);
      }
    }
    else {
      FUN_10002850(uVar7);
    }
    *(short *)(param_1 + 0xbc) = sVar12;
  }
  if ((param_2 != '\x02') && (((*psVar4 != sVar13 || (*psVar3 != sVar15)) || (*pcVar5 != '\0')))) {
    if ((param_6 != '\0') && (sVar12 != 1000)) {
      if ((sVar13 == *(short *)*piVar2) && (sVar15 == ((short *)*piVar2)[1])) {
        FUN_1003ffa8();
      }
      else if ((sVar13 != *(short *)(*piVar2 + 0x12)) || (sVar15 != *(short *)(*piVar2 + 0x14))) {
        FUN_100416f4((int)sVar13,(int)sVar15,0,1);
      }
    }
    *pcVar5 = '\x01';
  }
  if (param_2 == '\0') {
    uVar10 = FUN_10001a88();
    *(int *)(param_1 + 0xc0) = uVar10;
  }
  else if (param_2 == '\x01') {
    uVar11 = FUN_10001a88();
    if (*(int *)(param_1 + 0xc0) + 10U <= uVar11) {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 10;
      sVar13 = *(short *)(param_1 + 0x86) + 1;
      *(short *)(param_1 + 0x86) = sVar13;
      if (sVar13 == 4) {
        *(short *)(param_1 + 0x86) = 0;
      }
      FUN_10082260(param_1);
    }
  }
  return;
}

/* Address: 0x10083d04 Size: 60 bytes */
void FUN_10083d04(void)

{
  FUN_100c1c8c(uRam10116384,*puRam101163a0,0xc4,uRam101163a4,uRam10116c7c);
  return;
}

/* Address: 0x10083d50 Size: 136 bytes */
int * FUN_10083d50(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xac);
  if (puVar2 != (int *)0x0) {
    FUN_1010598c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x140));
    *(char *)(puVar2 + 0x25) = 0;
    *(char *)((int)puVar2 + 0x95) = 0;
    puVar2[0x26] = 0;
    puVar2[0x27] = 0;
    *(short *)(puVar2 + 0x28) = 0xffff;
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    *(short *)(puVar2 + 0x20) = 0;
    puVar2[0x24] = 0;
  }
  return puVar2;
}

/* Address: 0x10083dd8 Size: 908 bytes */
void FUN_10083dd8(int *param_1,long long param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int uVar5;
  long long uVar6;
  long long uVar7;
  long long uVar8;
  long long uVar9;
  int iVar10;
  int *piVar11;
  unsigned long long uVar12;
  char auStack_b0 [48];
  int local_80;
  char auStack_7c [8];
  short local_74;
  short local_72;
  int local_6c;
  short local_66;
  short local_64;
  short local_62;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  
  piVar4 = piRam101163ac;
  uVar12 = (unsigned long long)uRam101176cc;
  if (*(char *)(param_1 + 0x25) == '\0') {
    FUN_10000870(&local_6c,&local_80);
    uVar5 = local_6c;
    iVar3 = param_1[0x24];
    FUN_10000888(local_6c,0);
    uVar6 = FUN_10009a98(iVar3);
    uVar7 = FUN_10009a98(uVar5);
    local_66 = *(short *)(iVar3 + 0x12);
    local_64 = *(short *)(iVar3 + 0x14);
    local_62 = *(short *)(iVar3 + 0x16);
    local_4a = (short)param_1[0xe];
    local_4c = (short)param_1[0xd];
    local_50 = 0;
    local_4e = 0;
    FUN_100b2268(uVar12);
    FUN_100008b8();
    FUN_100b2268(uVar12 + 0x5fa);
    FUN_100021c0();
    uVar8 = FUN_100b0578(&local_50);
    uVar9 = FUN_100b0578(&local_50);
    FUN_100008d0(uVar6,uVar7,uVar9,uVar8,0,0);
    if ((*(char *)((int)param_1 + 0x95) != '\0') &&
       (iVar10 = FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0x3a8)), iVar10 != 0)) {
      piVar11 = (int *)FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0x5f0),1);
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x600),&local_60);
      FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0x2c0),&local_60);
      local_46 = (short)(local_5c / 0x14);
      local_48 = (short)(local_60 / 0x14);
      uVar1 = (local_54 + 0x27) / 0x14;
      local_42 = (short)uVar1;
      uVar2 = (local_58 + 0x27) / 0x14;
      local_44 = (short)uVar2;
      if (param_1[0xe] < 0x71) {
        local_46 = (local_46 >> 1) + (unsigned short)(local_46 < 0 && (local_5c / 0x14 & 1U) != 0);
        local_48 = (local_48 >> 1) + (unsigned short)(local_48 < 0 && (local_60 / 0x14 & 1U) != 0);
        local_42 = (local_42 >> 1) + (unsigned short)(local_42 < 0 && (uVar1 & 1) != 0);
        local_44 = (local_44 >> 1) + (unsigned short)(local_44 < 0 && (uVar2 & 1) != 0);
      }
      local_74 = 0xfffe;
      local_72 = 0xfffe;
      FUN_100b06d4(&local_48,&local_74);
      iVar10 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
      if (iVar10 != 0) {
        FUN_10066bf4(auStack_b0);
        FUN_10067270();
        FUN_100031b0(2,2);
        FUN_100b2268(uVar12);
        FUN_100021c0();
        FUN_100b0578(&local_48);
        FUN_100021d8();
        FUN_10066c80(auStack_b0,2);
      }
    }
    FUN_10009b00(iVar3);
    FUN_10009b00(uVar5);
    FUN_10000888(local_6c,local_80);
  }
  else {
    FUN_10067270();
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_2,auStack_7c);
    FUN_100b2268(uVar12 + 0x5fa);
    FUN_100021c0();
    FUN_100b0578(auStack_7c);
    FUN_10002148();
  }
  return;
}

/* Address: 0x10084164 Size: 184 bytes */
void FUN_10084164(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = piRam101163b0;
  FUN_10105d28(param_1);
  iVar2 = FUN_1000a12c(param_1 + 0x80,(short)*(int *)(param_1 + 0x38),
                       (short)*(int *)(param_1 + 0x34),8,0,0);
  if (iVar2 == 0) {
    FUN_100db26c(0);
  }
  iVar2 = *piVar1;
  *(int *)(param_1 + 0xa4) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xa8) = param_1;
  }
  *piVar1 = param_1;
  if (*(int *)(param_1 + 0xa4) == 0) {
    *(char *)(param_1 + 0x95) = 1;
  }
  return;
}

/* Address: 0x1008421c Size: 128 bytes */
void FUN_1008421c(int param_1)

{
  int *piVar1;
  
  piVar1 = piRam101163b0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    *(int *)(*(int *)(param_1 + 0xa4) + 0xa8) = *(int *)(param_1 + 0xa8);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    *(int *)(*(int *)(param_1 + 0xa8) + 0xa4) = *(int *)(param_1 + 0xa4);
  }
  if (param_1 == *piVar1) {
    *piVar1 = *(int *)(param_1 + 0xa4);
  }
  FUN_1000a094(param_1 + 0x80);
  FUN_10106060(param_1);
  return;
}

/* Address: 0x1008429c Size: 448 bytes */
void FUN_1008429c(int *param_1,int *param_2,long long param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  int *ppuVar4;
  int iVar6;
  int *puVar7;
  long long uVar5;
  short sVar8;
  
  piVar2 = piRam1011734c;
  ppuVar4 = 0 /* TVect base */;
  if (*(char *)(*piRam1011734c + 0x99) == '\0') {
    if (param_1[0xe] < 0x71) {
      sVar8 = 1;
    }
    else {
      sVar8 = 2;
    }
    uVar1 = param_2[1] / (int)sVar8;
    uVar3 = *param_2 / (int)sVar8 & 0xff;
    if (param_1[0x29] == 0) {
      iVar6 = FUN_100efb60();
      if (iVar6 == 0) {
        uVar5 = FUN_100c43fc(0);
        FUN_100c4548(uVar5,400,param_1,0,0,0,param_1,0);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar5);
      }
      else {
        piVar2 = *(int **)(*piVar2 + 0x88);
        puVar7 = (int *)FUN_100f56e4(0x10c);
        if (puVar7 != (int *)0x0) {
          FUN_100c3d2c(puVar7);
          *puVar7 = (*(int*)((char*)ppuVar4 - 0x53b));
          *(short *)(puVar7 + 0xc) = 0xffff;
          *(short *)((int)puVar7 + 0x32) = 0xffff;
          *(short *)(puVar7 + 0xd) = 0xffff;
          *(short *)((int)puVar7 + 0x36) = 0xffff;
          *(short *)(puVar7 + 0x42) = 0;
        }
        FUN_100c3df8(puVar7,0x835,piVar2,1,1,piVar2);
        *(unsigned short *)(puVar7 + 0xc) = (unsigned short)uVar1 & 0xff;
        *(short *)((int)puVar7 + 0x32) = (short)uVar3;
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x200),puVar7);
      }
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),
                   (uVar1 & 0xff) * 0x100 + uVar3 + 0x8000,param_1,param_3);
    }
  }
  return;
}

/* Address: 0x1008445c Size: 256 bytes */
void FUN_1008445c(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  char auStack_20 [32];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_20);
  FUN_1010b818(param_1,param_2,param_3);
  iVar1 = FUN_100e1750(param_2,auStack_20);
  if (iVar1 != 0) {
    if ((param_1[0x29] == 0) &&
       (iVar1 = FUN_1000a12c(param_1 + 0x20,(short)param_1[0xe],(short)param_1[0xd],8,0), iVar1 == 0
       )) {
      FUN_100db26c(0);
    }
    FUN_10060608(1,1,0);
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}

/* Address: 0x100845a0 Size: 100 bytes */
void FUN_100845a0(int param_1)

{
  int *in_r7;
  char in_r8;
  short sVar1;
  
  if (in_r8 != '\0') {
    if (*(int *)(param_1 + 0x38) < 0x71) {
      sVar1 = 1;
    }
    else {
      sVar1 = 2;
    }
    FUN_1000848c(in_r7[1] / (int)sVar1 & 0xff,*in_r7 / (int)sVar1 & 0xff);
  }
  return;
}

/* Address: 0x10084604 Size: 232 bytes */
void FUN_10084604(int param_1,long long param_2,long long param_3,long long param_4,
                 int param_5,long long param_6,short param_7)

{
  int iVar1;
  int *puVar3;
  long long uVar2;
  int uStack00000028;
  char auStack_20 [32];
  
  iVar1 = iRam101177f0;
  if (*(char *)(param_1 + 0x94) == '\0') {
    uStack00000028 = param_5;
    FUN_100b0384(((char*)0 + 0x00000028));
    FUN_10002fd0();
    puVar3 = (int *)FUN_100b0368(auStack_20,((char*)0 + 0x00000028));
    uVar2 = FUN_100000f0(param_4,*puVar3,0,0,0x81,param_7,2);
    if ((int)uVar2 != -0x355) {
      FUN_100db2f4(uVar2);
    }
    FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x18),param_3,param_3);
    FUN_10002be0(*(int *)(*(int *)(iVar1 + 0xca) + 0x1c),param_3,param_3);
  }
  return;
}

/* Address: 0x100846fc Size: 208 bytes */
void FUN_100846fc(int param_1,int *param_2,long long param_3)

{
  long long uVar1;
  short local_20;
  short local_1e;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  if (*(int *)(param_1 + 0x38) < 0x71) {
    local_20 = 1;
  }
  else {
    local_20 = 2;
  }
  local_14 = local_20 * 2;
  local_18 = local_20 * -2;
  local_1e = local_20 * (short)(param_2[1] / (int)local_20);
  local_20 = local_20 * (short)(*param_2 / (int)local_20);
  local_16 = local_18;
  local_12 = local_14;
  FUN_100b065c(&local_18,&local_20);
  uVar1 = FUN_100b0578(&local_18);
  FUN_10003150(param_3,uVar1);
  return;
}

/* Address: 0x100847cc Size: 1264 bytes */
void FUN_100847cc(int *param_1,int *param_2,int *param_3,short *param_4,short *param_5,
                 int *param_6,long long param_7)

{
  int uVar1;
  int *puVar2;
  int iVar3;
  long long uVar4;
  long long uVar5;
  long long uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short uVar10;
  short sVar11;
  short uVar12;
  int local_2ec;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  short local_2b0;
  short local_2ae;
  short local_2ac;
  short local_2aa;
  short local_2a8;
  short local_2a6;
  short local_2a4;
  short local_2a2;
  char auStack_2a0 [276];
  int local_18c;
  char auStack_188 [276];
  int local_74;
  int local_70;
  int uStack_6c;
  int uStack_68;
  int uStack_64;
  int local_60;
  int *local_58;
  int local_54;
  
  iVar3 = iRam101176c0;
  piVar7 = (int *)*puRam101169c4;
  iVar8 = *piVar7;
  uVar1 = *(int *)(iVar8 + 0x41c);
  uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5b0));
  local_58 = piVar7;
  uVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a8));
  local_54 = uVar1;
  uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  FUN_10117884(ZEXT48(local_58) + (long long)*(short *)(iVar8 + 0x418),uVar6,uVar5,uVar4,param_4,
               param_5,param_6,param_7);
  if (param_1[0x26] != 0) {
    FUN_100019c8(param_1[0x26]);
    param_1[0x26] = 0;
  }
  piVar7 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  iVar8 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x3a8));
  if (iVar8 != 0) {
    piVar7 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x780));
    FUN_100ee64c(auStack_188);
    FUN_10001e48(local_74);
    FUN_100ee64c(auStack_2a0);
    uVar1 = local_18c;
    local_2a8 = 0xd8f0;
    local_2a6 = 0xd8f0;
    local_2a4 = 10000;
    local_2a2 = 10000;
    uVar4 = FUN_100b0578(&local_2a8);
    FUN_10003150(uVar1,uVar4);
    FUN_10001548(local_18c);
    if (param_1[0xe] < 0x71) {
      sVar11 = 1;
    }
    else {
      sVar11 = 2;
    }
    uVar10 = (short)(param_2[1] / (int)sVar11);
    uVar12 = (short)(*param_2 / (int)sVar11);
    iVar8 = local_2ec;
    uVar4 = FUN_1002bf64(uVar10,uVar12,0xe,1);
    iVar9 = FUN_10009630(1,uVar10,uVar12);
    if (iVar9 == 0) {
      FUN_10001548(local_74);
      FUN_100ee77c(auStack_2a0,2);
      FUN_100ee77c(auStack_188,2);
      return;
    }
    FUN_100462c8(0x1d);
    puVar2 = *(int **)(iVar8 + -0x14e8);
    local_70 = *puVar2;
    uStack_6c = puVar2[1];
    uStack_68 = puVar2[2];
    uStack_64 = puVar2[3];
    local_60 = puVar2[4];
    iVar8 = FUN_1000a12c(&local_70,*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),8,0);
    if (iVar8 == 0) {
      FUN_100db26c(0);
    }
    FUN_10000870(&local_2bc,&local_2c0);
    FUN_10000888(local_60,0);
    FUN_100b2268(*(int *)(local_2ec + -0x1d4));
    FUN_100008b8();
    FUN_100b2268((unsigned long long)*(unsigned int *)(local_2ec + -0x1d4) + 0x5fa);
    FUN_100021c0();
    if (local_60 != 0) {
      FUN_10009a98(local_60);
    }
    FUN_1000a9e4(uVar10,uVar12,0);
    FUN_1000acac(uVar4);
    if (local_60 != 0) {
      FUN_10009b00(local_60);
    }
    FUN_10000888(local_2bc,local_2c0);
    local_2aa = *(short *)(iVar3 + 4);
    local_2ac = *(short *)(iVar3 + 6);
    local_2b0 = 0;
    local_2ae = 0;
    FUN_100b0578(&local_2b0);
    iVar8 = FUN_100001b0();
    param_1[0x26] = iVar8;
    FUN_10009b48(&local_70,0,0,*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),
                 *(int *)(local_2ec + -0x1208),0,0);
    FUN_100001c8();
    FUN_1000a094(&local_70);
    FUN_10001548(local_74);
    FUN_100ee77c(auStack_2a0,2);
    FUN_100ee77c(auStack_188,2);
  }
  *param_4 = 5;
  *(int *)(param_4 + 1) = param_1[0x26];
  iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if ((iVar8 != 0) && (param_3 != (int *)0x0)) {
    local_2b8 = *(int *)(*param_3 + 2);
    local_2b4 = *(int *)(*param_3 + 6);
    *param_6 = local_2b8;
    param_6[1] = local_2b4;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      FUN_10117884(param_5,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    }
  }
  return;
}

/* Address: 0x10084cbc Size: 416 bytes */
void FUN_10084cbc(int *param_1,int *param_2,long long param_3)

{
  int iVar1;
  int *piVar2;
  short sVar6;
  int *puVar4;
  int iVar5;
  long long uVar3;
  unsigned long long uVar7;
  char auStack_30 [8];
  char auStack_28 [40];
  
  piVar2 = piRam101163ac;
  uVar7 = (unsigned long long)uRam101177f0;
  if (param_1[0xe] < 0x71) {
    sVar6 = 1;
  }
  else {
    sVar6 = 2;
  }
  sVar6 = FUN_1003b4a4((short)(param_2[1] / (int)sVar6),(short)(*param_2 / (int)sVar6),0);
  sVar6 = sVar6 + 1000;
  if (sVar6 != *(short *)(param_1 + 0x28)) {
    iVar1 = param_1[0x27];
    param_1[0x27] = 0;
    if (sVar6 == -1) {
      FUN_100014a0(uVar7 + 0x5e);
    }
    else {
      FUN_10117884(auStack_30,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
      puVar4 = (int *)FUN_100b0368(auStack_28,auStack_30);
      iVar5 = FUN_100033c0(*puVar4,param_3);
      if (iVar5 == 0) {
        FUN_100014a0(uVar7 + 0x5e);
      }
      else {
        uVar3 = FUN_10002ac0(sVar6);
        param_1[0x27] = (int)uVar3;
        if ((int)uVar3 == 0) {
          puVar4 = (int *)FUN_10001470(sVar6);
          if (puVar4 == (int *)0x0) {
            FUN_100014a0(uVar7 + 0x5e);
          }
          else {
            FUN_100014a0(*puVar4);
          }
        }
        else {
          FUN_10002850(uVar3);
        }
      }
    }
    *(short *)(param_1 + 0x28) = sVar6;
    if (iVar1 != 0) {
      FUN_100032a0(iVar1);
    }
    if (*piVar2 != 0) {
      *(short *)(*piVar2 + 0xbc) = 0xffff;
    }
  }
  return;
}

/* Address: 0x10084e5c Size: 72 bytes */
void FUN_10084e5c(int param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = piRam101163ac;
  *(short *)(param_1 + 0xa0) = 0xffff;
  if (*piVar1 != 0) {
    *(short *)(*piVar1 + 0xbc) = 0xffff;
  }
  FUN_101064d4(param_1,param_2);
  return;
}

/* Address: 0x10084ea4 Size: 60 bytes */
void FUN_10084ea4(void)

{
  FUN_100c1c8c(uRam101163a8,*puRam101163bc,0xac,uRam101163c0,uRam10116c7c);
  return;
}

/* Address: 0x10084ee0 Size: 8 bytes */
int FUN_10084ee0(void)

{
  return uRam101166bc;
}

/* Address: 0x10084f84 Size: 40 bytes */
void FUN_10084f84(void)

{
  FUN_10084ef0(0);
  return;
}

/* Address: 0x10084fac Size: 108 bytes */
void FUN_10084fac(int param_1)

{
  if (*(short *)(param_1 + 0x80) != -1) {
    FUN_1004602c(*(short *)(param_1 + 0x80),*(int *)(param_1 + 0x82),
                 *(int *)(param_1 + 0x86),*puRam101163c8,*(short *)(param_1 + 0x8a),
                 *(short *)(param_1 + 0x8c));
    FUN_10067270();
  }
  return;
}

/* Address: 0x10085018 Size: 208 bytes */
void FUN_10085018(int param_1,int *param_2)

{
  short uVar1;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  FUN_1010937c(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0x80) = uVar1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x120),&local_18);
  *(short *)(param_1 + 0x82) = local_18;
  *(short *)(param_1 + 0x84) = local_16;
  *(short *)(param_1 + 0x86) = local_14;
  *(short *)(param_1 + 0x88) = local_12;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0x8a) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0x8c) = uVar1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100850e8() { }





























































/* Address: 0x100851dc Size: 64 bytes */
void FUN_100851dc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),10,param_1,0);
  return;
}

/* Address: 0x1008521c Size: 96 bytes */
void FUN_1008521c(int *param_1)

{
  if (*(short *)(param_1 + 0x20) == -1) {
    *(short *)(param_1 + 0x20) = 0xffff;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    *(short *)(param_1 + 0x20) = 0xffff;
  }
  return;
}

/* Address: 0x1008527c Size: 60 bytes */
void FUN_1008527c(void)

{
  FUN_100c1c8c(uRam101166bc,*puRam101163cc,0x90,uRam101163d0,uRam10116c7c);
  return;
}

/* Address: 0x100852b8 Size: 8 bytes */
int FUN_100852b8(void)

{
  return uRam101163d4;
}

/* Address: 0x100852c8 Size: 104 bytes */
int * FUN_100852c8(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xb0),
     param_1 != (int *)0x0)) {
    FUN_100cdb5c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x532));
  }
  return param_1;
}

/* Address: 0x10085330 Size: 40 bytes */
void FUN_10085330(void)

{
  FUN_100852c8(0);
  return;
}

/* Address: 0x1008535c Size: 560 bytes */
void FUN_1008535c(int *param_1,long long param_2)

{
  int uVar1;
  long long uVar2;
  int iVar4;
  long long uVar3;
  char auStack_280 [8];
  char auStack_278 [8];
  char auStack_270 [16];
  char auStack_260 [276];
  int local_14c;
  char auStack_148 [276];
  int local_34;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  FUN_100ee64c(auStack_260);
  FUN_10001e48(local_14c);
  FUN_100ee64c(auStack_148);
  FUN_100e12b8(param_2,auStack_280);
  uVar1 = local_34;
  uVar2 = FUN_100b0578(auStack_280);
  FUN_10003150(uVar1,uVar2);
  FUN_10002be0(local_14c,local_34,local_34);
  FUN_10001548(local_34);
  if (param_1[0x2b] != 0) {
    iVar4 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar4 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_270);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_270,auStack_278);
      uVar2 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      iVar4 = *(int *)param_1[0x2b];
      local_30 = *(short *)(iVar4 + 2);
      local_2e = *(short *)(iVar4 + 4);
      local_2c = *(short *)(iVar4 + 6);
      local_2a = *(short *)(iVar4 + 8);
      uVar3 = FUN_100b057c(&local_30,0);
      FUN_100b0698(&local_30,uVar3);
      uVar3 = FUN_100b057c(auStack_278,0);
      FUN_100b065c(&local_30,uVar3);
      FUN_10000030();
      uVar3 = FUN_100b0578(&local_30);
      FUN_10000750(param_1[0x2b],uVar3);
      FUN_10001b60(param_1[0x2b],uVar2);
    }
  }
  FUN_10001548(local_14c);
  FUN_100ee77c(auStack_148,2);
  FUN_100ee77c(auStack_260,2);
  return;
}

/* Address: 0x1008558c Size: 60 bytes */
void FUN_1008558c(void)

{
  FUN_100c1c8c(uRam101163d4,*puRam101163dc,0xb0,uRam101163e0,uRam10116d60);
  return;
}

/* Address: 0x100855d0 Size: 116 bytes */
int * FUN_100855d0(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xdc);
  if (puVar2 != (int *)0x0) {
    FUN_100cdb5c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x652));
    *(short *)(puVar2 + 0x2c) = 0;
    *(short *)((int)puVar2 + 0xb2) = 0;
    *(short *)(puVar2 + 0x2d) = 0;
    puVar2[0x31] = 0;
    *(short *)(puVar2 + 0x32) = 0;
    puVar2[0x36] = 0;
  }
  return puVar2;
}

/* Address: 0x10085644 Size: 956 bytes */
void FUN_10085644(int *param_1)

{
  int iVar1;
  int uVar2;
  int iVar8;
  char uVar10;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  short *puVar9;
  long long uVar6;
  long long uVar7;
  char *puVar11;
  char *puVar12;
  char *puVar13;
  int *puVar14;
  unsigned long long uVar15;
  short *puVar16;
  char *puVar17;
  short *puVar18;
  short *puVar19;
  int *piVar20;
  char auStack_c8 [8];
  char auStack_c0 [8];
  char auStack_b8 [8];
  char auStack_b0 [48];
  int local_80;
  char auStack_7c [16];
  short local_6c [4];
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c [4];
  int local_54 [2];
  char auStack_4c [76];
  
  if (param_1[0x2b] != 0) {
    puVar11 = ((char*)0) + -200;
    puVar12 = ((char*)0) + -0xc0;
    puVar13 = ((char*)0) + -0xb0;
    puVar14 = (int *)(((char*)0) + -0x80);
    uVar15 = (unsigned long long)uRam101176cc;
    puVar17 = ((char*)0) + -0x7c;
    puVar16 = (short *)(((char*)0) + -0x6c);
    puVar18 = (short *)(((char*)0) + -100);
    puVar19 = (short *)(((char*)0) + -0x5c);
    piVar20 = (int *)(((char*)0) + -0x54);
    iVar8 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar8 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      *piVar20 = param_1[0x2b];
      uVar10 = FUN_10000360();
      FUN_10002598(*piVar20);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),puVar17);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar17,puVar18);
      FUN_10000870(puVar14,((char*)0) + -0x4c);
      iVar8 = param_1[0x31];
      iVar1 = param_1[0x36];
      uVar2 = *puVar14;
      uVar3 = FUN_10009a98(iVar8);
      uVar4 = FUN_10009a98(iVar1);
      uVar5 = FUN_10009a98(uVar2);
      FUN_10066bf4(puVar13);
      FUN_10067270();
      FUN_100b2268(uVar15 + 0x5a);
      FUN_100008b8();
      puVar9 = puVar19;
      if ((((char*)0) != (char *)0x5c) ||
         (puVar9 = (short *)FUN_100f56e4(8), puVar9 != (short *)0x0)) {
        *puVar9 = *puVar18;
        puVar9[1] = *(short *)(((char*)0) + -0x62);
        puVar9[2] = *(short *)(((char*)0) + -0x60);
        puVar9[3] = *(short *)(((char*)0) + -0x5e);
      }
      FUN_100b08d4(((char*)0) + -0xb8,puVar18);
      uVar6 = FUN_100b057c(puVar19,0);
      FUN_100b0618(puVar19,puVar12,uVar6);
      uVar6 = FUN_100b0578(puVar12);
      uVar7 = FUN_100b0578(puVar19);
      FUN_100008d0(uVar3,uVar5,uVar7,uVar6,0x24,0);
      FUN_100b2268(uVar15);
      FUN_100008b8();
      FUN_100b2268(uVar15 + 0x5a);
      FUN_100008b8();
      puVar9 = puVar16;
      if ((((char*)0) != (char *)0x6c) ||
         (puVar9 = (short *)FUN_100f56e4(8), puVar9 != (short *)0x0)) {
        *puVar9 = *puVar18;
        puVar9[1] = *(short *)(((char*)0) + -0x62);
        puVar9[2] = *(short *)(((char*)0) + -0x60);
        puVar9[3] = *(short *)(((char*)0) + -0x5e);
      }
      uVar3 = FUN_100b057c(puVar19,0);
      FUN_100b0618(puVar16,puVar11,uVar3);
      uVar3 = FUN_100b0578(puVar11);
      uVar6 = FUN_100b0578(puVar16);
      FUN_100008d0(uVar4,uVar5,uVar6,uVar3,0x24,0);
      FUN_100b2268(uVar15);
      FUN_100008b8();
      FUN_10009b00(iVar1);
      FUN_10009b00(iVar8);
      FUN_10009b00(uVar2);
      FUN_10066c80(puVar13,2);
      if (((char*)0) != (char *)0x54) {
        FUN_10001b60(*piVar20,uVar10);
      }
    }
  }
  return;
}

/* Address: 0x10085a0c Size: 1512 bytes */
void FUN_10085a0c(int param_1)

{
  int uVar1;
  int iVar5;
  long long uVar2;
  long long uVar3;
  long long uVar4;
  unsigned long long uVar6;
  int local_304;
  char auStack_2e0 [8];
  char auStack_2d8 [2];
  short local_2d6;
  char auStack_2d0 [8];
  char auStack_2c8 [2];
  short local_2c6;
  int local_2c0;
  int local_2bc;
  short local_2b8;
  short local_2b6;
  short local_2b4;
  int local_2b0;
  short local_2aa;
  short local_2a8;
  short local_2a6;
  char auStack_2a4 [276];
  int local_190;
  short local_18c;
  short local_18a;
  short local_188;
  short local_186;
  char auStack_184 [276];
  int local_70;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  char auStack_54 [84];
  
  uVar6 = (unsigned long long)uRam101176cc;
  iVar5 = FUN_1000a12c(param_1 + 0xb4,(short)*(int *)(param_1 + 0x38),
                       (short)*(int *)(param_1 + 0x34),8,0);
  if (iVar5 == 0) {
    FUN_100db26c(0);
  }
  iVar5 = FUN_10001d70(*(int *)(*(int *)(param_1 + 0xc4) + 2));
  if (iVar5 == 0) {
    FUN_100db26c(0);
  }
  FUN_10000870(&local_2bc,&local_2c0);
  FUN_10000888(*(int *)(param_1 + 0xc4),0);
  FUN_100ee64c(auStack_2a4);
  FUN_10001e48(local_190);
  local_2a6 = (short)*(int *)(param_1 + 0x38);
  local_2a8 = (short)*(int *)(param_1 + 0x34);
  local_2aa = 0;
  FUN_10000b70(*(int *)(param_1 + 0xac));
  FUN_10067270();
  iVar5 = **(int **)(param_1 + 0xac);
  local_5c = *(short *)(iVar5 + 2);
  local_5a = *(short *)(iVar5 + 4);
  local_58 = *(short *)(iVar5 + 6);
  local_56 = *(short *)(iVar5 + 8);
  FUN_100b08d4(auStack_2c8,&local_5c);
  if (local_2c6 == (short)*(int *)(param_1 + 0x38)) {
    uVar2 = FUN_100b057c(&local_5c,0);
    FUN_100b0618(&local_5c,auStack_2e0,uVar2);
    uVar2 = FUN_100b0578(auStack_2e0);
    FUN_10000750(*(int *)(param_1 + 0xac),uVar2);
  }
  else {
    FUN_100ee64c(auStack_184);
    uVar1 = local_70;
    local_68 = (short)*(int *)(param_1 + 0x34);
    local_6c = 0;
    local_6a = 0;
    local_66 = (short)*(int *)(param_1 + 0x38) + -0x16;
    uVar2 = FUN_100b0578(&local_6c);
    FUN_10003150(uVar1,uVar2);
    FUN_10001548(local_70);
    uVar2 = FUN_100b057c(&local_5c,0);
    FUN_100b0618(&local_5c,auStack_2d0,uVar2);
    uVar2 = FUN_100b0578(auStack_2d0);
    FUN_10000750(*(int *)(param_1 + 0xac),uVar2);
    uVar1 = local_70;
    local_6a = local_66;
    local_66 = (short)*(int *)(param_1 + 0x38);
    uVar2 = FUN_100b0578(&local_6c);
    FUN_10003150(uVar1,uVar2);
    FUN_10001548(local_70);
    FUN_100b08d4(auStack_2d8,&local_5c);
    local_186 = (short)*(int *)(param_1 + 0x38);
    local_18a = local_186 - local_2d6;
    local_188 = (short)*(int *)(param_1 + 0x34);
    local_18c = 0;
    uVar2 = FUN_100b0578(&local_18c);
    FUN_10000750(*(int *)(param_1 + 0xac),uVar2);
    FUN_100ee77c(auStack_184,2);
  }
  FUN_10003468(*(int *)(*(int *)(param_1 + 0xc4) + 2));
  FUN_10001548(local_190);
  FUN_10000888(local_2bc,local_2c0);
  FUN_100ee77c(auStack_2a4,2);
  iVar5 = FUN_1000a12c(param_1 + 200,(short)*(int *)(param_1 + 0x38),
                       (short)*(int *)(param_1 + 0x34),8,0);
  if (iVar5 == 0) {
    FUN_100db26c(0);
  }
  iVar5 = FUN_10001d70(*(int *)(*(int *)(param_1 + 0xd8) + 2));
  if (iVar5 == 0) {
    FUN_100db26c(0);
  }
  FUN_10000870(&local_2bc,&local_2c0);
  local_5e = (short)*(int *)(param_1 + 0x38);
  local_60 = (short)*(int *)(param_1 + 0x34);
  local_64 = 0;
  local_62 = 0;
  uVar2 = FUN_100b0578(&local_64);
  FUN_10001d58(&local_2b0,8,uVar2,**(int **)(local_304 + -0x1cc),0,0);
  FUN_10002598(*(int *)(local_2b0 + 2));
  uVar2 = FUN_10009a98(*(int *)(param_1 + 0xc4));
  FUN_10000888(local_2b0,0);
  FUN_100b2268(uVar6 + 0x5a);
  FUN_100008b8();
  FUN_100b0578(&local_64);
  FUN_10002c58();
  local_2b8 = 0xf7f7;
  local_2b6 = 0x6f6f;
  local_2b4 = 0xe7e7;
  FUN_100b2268(&local_2b8);
  FUN_100008b8();
  FUN_100670ec(auStack_54,2);
  uVar3 = FUN_100b0578(&local_64);
  uVar4 = FUN_100b0578(&local_64);
  FUN_100008d0(uVar2,local_2b0 + 2,uVar4,uVar3,0x24,0);
  FUN_100b2268(uVar6);
  FUN_100008b8();
  FUN_10067178(auStack_54,2);
  FUN_10009b00(*(int *)(param_1 + 0xc4));
  uVar1 = *(int *)(param_1 + 0xd8);
  uVar2 = FUN_10001ed8();
  FUN_10000888(uVar1,uVar2);
  uVar2 = FUN_10009a98(*(int *)(param_1 + 0xd8));
  uVar3 = FUN_100b0578(&local_64);
  uVar4 = FUN_100b0578(&local_64);
  FUN_100008d0(local_2b0 + 2,uVar2,uVar4,uVar3,0,0);
  FUN_10009b00(*(int *)(param_1 + 0xd8));
  FUN_10000888(local_2bc,local_2c0);
  FUN_100032b8(local_2b0);
  return;
}

/* Address: 0x10085ff4 Size: 104 bytes */
void FUN_10085ff4(int *param_1,long long param_2,char param_3)

{
  FUN_100d0db8(param_1,param_2,0);
  FUN_10085a0c(param_1);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x1008605c Size: 108 bytes */
void FUN_1008605c(int *param_1,short param_2,char param_3)

{
  FUN_100d0e58(param_1,param_2,0);
  FUN_10085a0c(param_1);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}

/* Address: 0x100860c8 Size: 76 bytes */
void FUN_100860c8(long long param_1)

{
  FUN_100d0d64(param_1);
  FUN_1000a094(param_1 + 0xb4);
  FUN_1000a094(param_1 + 200);
  return;
}

/* Address: 0x10086114 Size: 164 bytes */
void FUN_10086114(int *param_1,short param_2,char param_3)

{
  int iVar1;
  char auStack_20 [32];
  
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + param_2;
  if ((param_3 != '\0') &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,auStack_20);
    FUN_10117884((int)*(short *)(*param_1 + 0x480) + (int)param_1,auStack_20);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100861b8() { }

























































/* Address: 0x100862d8 Size: 60 bytes */
void FUN_100862d8(void)

{
  FUN_100c1c8c(uRam101163e4,*puRam101163e8,0xdc,uRam101163ec,uRam10116d60);
  return;
}

/* Address: 0x1008638c Size: 40 bytes */
void FUN_1008638c(void)

{
  FUN_10086324(0);
  return;
}

/* Address: 0x100863b4 Size: 36 bytes */
void FUN_100863b4(void)

{
  FUN_1004fbdc();
  return;
}

/* Address: 0x10086450 Size: 40 bytes */
void FUN_10086450(void)

{
  FUN_100863e8(0);
  return;
}

/* Address: 0x10086478 Size: 640 bytes */
void FUN_10086478(int *param_1,int param_2,long long param_3)

{
  int _sStack0000001c;
  char cVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  unsigned long long uVar7;
  short sStack0000001c;
  int local_a4;
  short local_70 [4];
  char auStack_68 [80];
  char auStack_18 [2];
  char auStack_16 [22];
  
  piVar4 = piRam10117714;
  puVar3 = puRam1011735c;
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,local_70);
  sVar6 = sStack0000001c + -1;
  iVar2 = *puVar3 + *(short *)(*puVar3 + 0x110) * 2;
  iVar5 = local_a4;
  FUN_1003206c(2,*(short *)(iVar2 + 0xa0),*(short *)(iVar2 + 0xb0),0xf9);
  FUN_1004a2a8();
  FUN_1003206c(2,0xe0,0xff,0xf9);
  FUN_10001dd0(auStack_68,(unsigned long long)*(unsigned int *)(iVar5 + -0x14b0) + 0x3c,sVar6 + 1);
  FUN_1005f1a0(2,local_70[0] + 6,auStack_68);
  FUN_1000873c(*(char *)(*piVar4 + (int)sVar6 + 100),*(short *)(*puVar3 + 0x110),
               *(int *)(local_a4 + -0x1208),0x12,local_70[0],0,0);
  if (*(char *)(*piVar4 + (int)sVar6) == '\0') {
    cVar1 = *(char *)(*piVar4 + (int)sVar6 + 300);
    if (cVar1 < 'd') {
      FUN_10001dd0(auStack_68,(unsigned long long)*(unsigned int *)(local_a4 + -0x14b0) + 0x54,
                   (unsigned long long)*puVar3 +
                   (((long long)cVar1 & 0x7ffffffU) * 0x20 + (long long)cVar1 & 0x7fffffff) * 2 +
                   0x1608);
    }
    else {
      FUN_10034074(*(short *)(*puVar3 + 0x110),auStack_18,auStack_16);
      FUN_10001dd0(auStack_68,(unsigned long long)*(unsigned int *)(local_a4 + -0x14b0) + 0x40,
                   (unsigned long long)*(unsigned int *)(local_a4 + -0x14b0) + 0x48);
    }
  }
  else if (*(char *)(*piVar4 + (int)sVar6) == '\x01') {
    uVar7 = (unsigned long long)*(char *)(*piVar4 + (int)sVar6 + 200);
    FUN_10001dd0(auStack_68,(unsigned long long)*(unsigned int *)(local_a4 + -0x14b0) + 0x5c,
                 (unsigned long long)*puVar3 + ((uVar7 & 0x7ffffff) * 0x20 + uVar7 & 0x7fffffff) * 2 + 0x1608
                );
  }
  else {
    uVar7 = (unsigned long long)*(char *)(*piVar4 + (int)sVar6 + 200);
    FUN_10001e78(auStack_68,
                 (unsigned long long)*puVar3 + ((uVar7 & 0x7ffffff) * 0x20 + uVar7 & 0x7fffffff) * 2 + 0x1608
                );
  }
  FUN_1003206c(2,0xe0,0xff,0xf9);
  FUN_1005f1a0(0x3a,local_70[0] + 6,auStack_68);
  FUN_1004a81c();
  return;
}

/* Address: 0x10086788 Size: 40 bytes */
void FUN_10086788(void)

{
  FUN_10086708(0);
  return;
}

/* Address: 0x100867b0 Size: 204 bytes */
void FUN_100867b0(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x61726d79) {
    FUN_10050b10(0);
  }
  else if (iVar1 == 0x63697479) {
    FUN_10050b10(1);
  }
  else if (iVar1 == 0x676f6c64) {
    FUN_10050b10(2);
  }
  else if (iVar1 == 0x70726f64) {
    FUN_10050b10(3);
  }
  else if (iVar1 == 0x77696e6e) {
    FUN_10050b10(4);
  }
  else {
    FUN_100d5934();
  }
  return;
}

/* Address: 0x1008687c Size: 232 bytes */
void FUN_1008687c(long long param_1,int param_2)

{
  if (param_2 == 0x61726d79) {
    FUN_1009e534(0xdd);
  }
  else if (param_2 == 0x63697479) {
    FUN_1009e534(0xde);
  }
  else if (param_2 == 0x646f6e65) {
    FUN_1009e534(0xe2);
  }
  else if (param_2 == 0x676f6c64) {
    FUN_1009e534(0xdf);
  }
  else if (param_2 == 0x70726f64) {
    FUN_1009e534(0xe0);
  }
  else if (param_2 == 0x77696e6e) {
    FUN_1009e534(0xe1);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x10086964 Size: 124 bytes */
void FUN_10086964(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam101163f4,*puRam1011640c,0xa8,uRam10116410,uRam10116c34);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x529)),*(int *)(*(int*)((char*)ppuVar1 - 0x523)),0xb8,(*(int*)((char*)ppuVar1 - 0x522)),(*(int*)((char*)ppuVar1 - 0x24e)));
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x527)),*(int *)(*(int*)((char*)ppuVar1 - 0x521)),0x40,(*(int*)((char*)ppuVar1 - 0x520)),(*(int*)((char*)ppuVar1 - 0x47c)));
  return;
}

/* Address: 0x100869f0 Size: 116 bytes */
int * FUN_100869f0(void)

{
  short *psVar1;
  int *ppuVar2;
  int *puVar3;
  
  psVar1 = psRam1011736c;
  ppuVar2 = 0 /* TVect base */;
  puVar3 = (int *)FUN_100f56e4(0x84);
  if (puVar3 != (int *)0x0) {
    FUN_1010598c(puVar3);
    *puVar3 = (*(int*)((char*)ppuVar2 - 0x13c));
    *(short *)(puVar3 + 0x20) = 0;
    *(short *)((int)puVar3 + 0x82) = 0xffff;
    *psVar1 = *psVar1 + 1;
  }
  return puVar3;
}

/* Address: 0x10086a64 Size: 1564 bytes */
void FUN_10086a64(int *param_1)

{
  int *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar9;
  long long uVar5;
  long long uVar6;
  long long uVar7;
  long long uVar8;
  int iVar10;
  short sVar11;
  short sVar12;
  short uVar13;
  int local_e4;
  short local_c0;
  short local_be;
  short local_b8;
  short local_b6;
  short local_b0;
  short local_ae;
  short local_a8;
  short local_a6;
  short local_a4;
  short local_a2;
  short local_a0;
  short local_9e;
  short local_9c;
  short local_9a;
  int local_98;
  char local_94;
  int local_90;
  char local_8c;
  int local_88;
  char local_84;
  char auStack_80 [4];
  int local_7c;
  int local_74;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  int local_60;
  char auStack_5c [4];
  int local_58;
  char auStack_54 [84];
  
  piVar4 = piRam10116438;
  piVar3 = piRam10116434;
  piVar2 = piRam10116430;
  iVar10 = iRam1011642c;
  puVar1 = puRam10116428;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_80);
  FUN_10000030();
  if (*(int *)(iVar10 + 0x10) != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,auStack_80,&local_68);
    FUN_10000b70(*puVar1);
    FUN_100db26c(*(int *)*puVar1);
    iVar9 = *(int *)*puVar1;
    local_70 = *(short *)(iVar9 + 2);
    sVar11 = *(short *)(iVar9 + 4);
    local_6c = *(short *)(iVar9 + 6);
    local_6a = *(short *)(iVar9 + 8);
    local_6e = sVar11;
    iVar9 = FUN_100b08a4(&local_70,1);
    local_6a = sVar11 + (short)(iVar9 / 0x14);
    local_6c = FUN_100b08a4(&local_70,0);
    local_6c = local_70 + local_6c;
    local_62 = FUN_100b08a4(&local_70,1);
    local_62 = local_66 + local_62;
    local_64 = FUN_100b08a4(&local_70,0);
    local_64 = local_68 + local_64;
    iVar9 = FUN_100b08a4(&local_70,1);
    local_7c = local_7c + iVar9;
    FUN_10000870(&local_60,auStack_5c);
    uVar5 = FUN_10009a98(*(int *)(iVar10 + 0x10));
    uVar6 = FUN_10009a98(local_60);
    uVar7 = FUN_100b0578(&local_68);
    uVar8 = FUN_100b0578(&local_70,uVar7);
    FUN_100008d0(uVar5,uVar6,uVar8,uVar7,0,0);
    FUN_10009b00(*(int *)(iVar10 + 0x10));
    FUN_10009b00(local_60);
  }
  if (*piVar4 != 0) {
    iVar10 = FUN_100ef2f8(*piVar4);
    if (iVar10 != 0) {
      FUN_10000b70(*piVar4);
    }
    if (*(int *)*piVar4 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_80,&local_68);
      iVar10 = *(int *)*piVar4;
      local_a0 = *(short *)(iVar10 + 2);
      local_9e = *(short *)(iVar10 + 4);
      local_9c = *(short *)(iVar10 + 6);
      local_9a = *(short *)(iVar10 + 8);
      local_66 = FUN_100b08a4(&local_a0,1);
      local_66 = local_62 - local_66;
      iVar10 = FUN_100b08a4(&local_a0,1);
      local_74 = local_74 - iVar10;
      local_88 = *piVar4;
      local_84 = FUN_10000360(local_88);
      FUN_10000048(local_88);
      uVar5 = FUN_100b0578(&local_68);
      FUN_10000750(*piVar4,uVar5);
      if (((char*)0) != (char *)0x88) {
        FUN_10001b60(local_88,local_84);
      }
    }
  }
  if (*piVar2 != 0) {
    iVar10 = FUN_100ef2f8(*piVar2);
    if (iVar10 != 0) {
      FUN_10000b70(*piVar2);
    }
    if (*(int *)*piVar2 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_80,&local_68);
      local_90 = *piVar2;
      local_8c = FUN_10000360(local_90);
      FUN_10000048(local_90);
      uVar5 = FUN_100b0578(&local_68);
      FUN_10000750(*piVar2,uVar5);
      if (((char*)0) != (char *)0x90) {
        FUN_10001b60(local_90,local_8c);
      }
    }
  }
  if (*piVar3 != 0) {
    iVar10 = FUN_100ef2f8(*piVar3);
    if (iVar10 != 0) {
      FUN_10000b70(*piVar3);
    }
    if (*(int *)*piVar3 != 0) {
      FUN_10000870(&local_58,auStack_54);
      sVar11 = FUN_10001c20(*piVar3);
      sVar11 = (short)(((long long)sVar11 & 0xffffffffU) / 0x102);
      local_98 = *piVar3;
      local_94 = FUN_10000360(local_98);
      FUN_10002598(local_98);
      iVar10 = 0;
      if (0 < sVar11) {
        do {
          if (*(short *)(*(int *)*piVar3 + iVar10 * 0x102 + 0x100) == *(short *)(param_1 + 0x20)) {
            local_b0 = 2;
            uVar13 = 0;
            local_ae = 0;
            iVar9 = local_e4;
            FUN_100b06d4(&local_68,&local_b0);
            FUN_100b08d4(&local_c0,&local_68);
            local_a8 = **(short **)(iVar9 + -0xe60);
            local_a6 = (*(short **)(iVar9 + -0xe60))[1];
            local_a4 = local_c0;
            local_a2 = local_be;
            local_b8 = (short)iVar10 * 0x13;
            local_b6 = uVar13;
            FUN_100b065c(&local_a8,&local_b8);
            iVar10 = *(int *)(iVar9 + -0x1464);
            uVar5 = FUN_10009a98(*(int *)(iVar10 + 0x10));
            uVar6 = FUN_10009a98(local_58);
            FUN_100b2268(*(int *)(iVar9 + -0x1d4));
            FUN_100008b8();
            FUN_100b2268((unsigned long long)*(unsigned int *)(local_e4 + -0x1d4) + 0x5fa);
            FUN_100021c0();
            uVar7 = FUN_100b0578(&local_68);
            uVar8 = FUN_100b0578(&local_a8);
            FUN_100008d0(uVar5,uVar6,uVar8,uVar7,1,0);
            FUN_10009b00(*(int *)(iVar10 + 0x10));
            FUN_10009b00(local_58);
            break;
          }
          sVar12 = (short)iVar10 + 1;
          iVar10 = (int)sVar12;
        } while (sVar12 < sVar11);
      }
      if (((char*)0) != (char *)0x98) {
        FUN_10001b60(local_98,local_94);
      }
    }
  }
  return;
}

/* Address: 0x100870a4 Size: 116 bytes */
void FUN_100870a4(int param_1,int *param_2)

{
  short uVar1;
  
  FUN_1010937c(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0x82) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0x80) = uVar1;
  return;
}

/* Address: 0x10087118 Size: 1944 bytes */
void FUN_10087118(int param_1,int param_2)

{
  int uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar9;
  long long uVar6;
  long long uVar7;
  int iVar10;
  int iVar11;
  short sVar13;
  short sVar14;
  long long lVar8;
  short sVar15;
  int iVar12;
  short sVar16;
  unsigned int uVar17;
  unsigned long long uVar18;
  unsigned long long uVar19;
  int uStack0000001c;
  int local_cc;
  int local_a8;
  int uStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  int local_68;
  int uStack_64;
  int local_60;
  char local_5c;
  int local_58;
  int local_54;
  char local_50;
  
  iVar12 = iRam10116440;
  piVar5 = piRam10116438;
  piVar4 = piRam10116434;
  piVar3 = piRam10116430;
  iVar11 = iRam1011642c;
  piVar2 = piRam10116428;
  uStack0000001c = param_2;
  FUN_10000870(&local_58,&local_54);
  iVar9 = local_cc;
  FUN_10105d28(param_1,uStack0000001c);
  local_50 = '\0';
  if (*piVar2 == 0) {
    iVar9 = FUN_10000720(0xbc7);
    *piVar2 = iVar9;
    iVar9 = local_cc;
    FUN_100db2a4();
  }
  if ((*piVar2 != 0) && (*(int *)(iVar11 + 0x10) == 0)) {
    FUN_10000b70(*piVar2);
    iVar9 = local_cc;
    FUN_100db26c(*(int *)*piVar2);
    iVar10 = *(int *)*piVar2;
    local_70 = *(short *)(iVar10 + 2);
    local_6e = *(short *)(iVar10 + 4);
    local_6c = *(short *)(iVar10 + 6);
    local_6a = *(short *)(iVar10 + 8);
    uVar6 = FUN_100b08a4(&local_70,1);
    iVar10 = *(int *)*piVar2;
    local_78 = *(short *)(iVar10 + 2);
    local_76 = *(short *)(iVar10 + 4);
    local_74 = *(short *)(iVar10 + 6);
    local_72 = *(short *)(iVar10 + 8);
    uVar7 = FUN_100b08a4(&local_78,0);
    iVar10 = FUN_1000a12c(iVar11,uVar6,uVar7,8,1,0);
    if (iVar10 != 0) {
      FUN_10000888(*(int *)(iVar11 + 0x10),0);
      iVar9 = local_cc;
      if (*piVar2 != 0) {
        iVar10 = FUN_100ef2f8(*piVar2);
        if (iVar10 != 0) {
          FUN_10000b70(*piVar2);
          iVar9 = local_cc;
        }
        if (*(int *)*piVar2 != 0) {
          FUN_10000750((int *)*piVar2,(unsigned long long)*(unsigned int *)(iVar11 + 0x10) + 0x10);
          iVar9 = local_cc;
        }
      }
    }
  }
  if (*piVar3 == 0) {
    iVar11 = FUN_10000720(0xbc8);
    *piVar3 = iVar11;
    iVar9 = local_cc;
    FUN_100db2a4();
  }
  if (*piVar5 == 0) {
    iVar11 = FUN_10000720(0xbc9);
    *piVar5 = iVar11;
    iVar9 = local_cc;
    FUN_100db2a4();
  }
  if ((*piVar4 == 0) || (*(short *)(param_1 + 0x82) != **(short **)(iVar9 + -0x145c))) {
    iVar11 = FUN_10001728(0x526f6c6c,*(short *)(param_1 + 0x82));
    *piVar4 = iVar11;
    iVar11 = local_cc;
    FUN_100db2a4();
    **(short **)(iVar11 + -0x145c) = *(short *)(param_1 + 0x82);
    local_50 = '\x01';
  }
  FUN_10000b70(*piVar4);
  FUN_100db26c(*(int *)*piVar4);
  sVar13 = FUN_10001c20(*piVar4);
  sVar15 = (short)(((long long)sVar13 & 0xffffffffU) / 0x102);
  FUN_10000b70(*piVar2);
  FUN_100db26c(*(int *)*piVar2);
  iVar11 = *(int *)*piVar2;
  local_80 = *(short *)(iVar11 + 2);
  local_7e = *(short *)(iVar11 + 4);
  local_7c = *(short *)(iVar11 + 6);
  local_7a = *(short *)(iVar11 + 8);
  uVar1 = *(int *)(param_1 + 0x38);
  iVar10 = FUN_100b08a4(&local_80,1);
  FUN_10000b70(*piVar5);
  iVar9 = local_cc;
  FUN_100db26c(*(int *)*piVar5);
  iVar11 = *(int *)*piVar5;
  local_88 = *(short *)(iVar11 + 2);
  local_86 = *(short *)(iVar11 + 4);
  local_84 = *(short *)(iVar11 + 6);
  local_82 = *(short *)(iVar11 + 8);
  sVar13 = FUN_100b08a4(&local_88,1);
  sVar13 = ((short)uVar1 - (short)(iVar10 / 0x14)) - sVar13;
  iVar11 = *(int *)(*(int *)(iVar9 + -0x1464) + 0x10);
  if (iVar11 != 0) {
    local_a8 = *(int *)(iVar11 + 0x10);
    uStack_a4 = *(int *)(iVar11 + 0x14);
    local_90 = local_a8;
    local_8c = uStack_a4;
    sVar14 = FUN_100b08a4(&local_a8,1);
    if ((sVar14 == sVar13) && (iVar11 = FUN_100b08a4(&local_a8,0), iVar11 == sVar15 * 0x13 + 0x13))
    goto LAB_1008755c;
  }
  iVar11 = FUN_1000a12c(*(int *)(iVar9 + -0x1464),sVar13,sVar15 * 0x13 + 0x13,8,1,0);
  if (iVar11 != 0) {
    local_50 = '\x01';
  }
LAB_1008755c:
  iVar11 = FUN_100ef2f8(*piVar4);
  if (iVar11 != 0) {
    FUN_10000b70(*piVar4);
  }
  local_60 = *piVar4;
  local_5c = FUN_10000360(local_60);
  FUN_10002598(local_60);
  uVar18 = (unsigned long long)*(unsigned int *)*piVar4;
  sVar14 = 0xd;
  if ((local_50 != '\0') && (iVar11 = *(int *)(*(int *)(local_cc + -0x1464) + 0x10), iVar11 != 0)) {
    FUN_10000888(iVar11,0);
    FUN_100b2268(*(int *)(local_cc + -0x1d4));
    FUN_100008b8();
    FUN_100b2268((unsigned long long)*(unsigned int *)(local_cc + -0x1d4) + 0x5fa);
    FUN_100021c0();
    uVar19 = 0;
    if (0 < sVar15) {
      do {
        lVar8 = uVar18 + ((uVar19 & 0x1ffffff) * 0x80 + uVar19 & 0x7fffffff) * 2;
        FUN_100b1c84(lVar8);
        iVar11 = FUN_100006f0();
        uVar17 = sVar13 - iVar11;
        FUN_10000270((short)((int)uVar17 >> 1) + (unsigned short)((int)uVar17 < 0 && (uVar17 & 1) != 0),
                     sVar14);
        FUN_100b1c84(lVar8);
        FUN_10000b88();
        sVar14 = sVar14 + 0x13;
        sVar16 = (short)uVar19 + 1;
        uVar19 = (unsigned long long)sVar16;
      } while (sVar16 < sVar15);
    }
    FUN_100b1c84(uVar18);
    iVar11 = FUN_100006f0();
    uVar17 = sVar13 - iVar11;
    FUN_10000270((short)((int)uVar17 >> 1) + (unsigned short)((int)uVar17 < 0 && (uVar17 & 1) != 0),sVar14);
    FUN_100b1c84(uVar18);
    FUN_10000b88();
  }
  iVar11 = *(int *)(iVar12 + 0x10);
  if (iVar11 != 0) {
    local_98 = *(int *)(iVar11 + 0x10);
    local_94 = *(int *)(iVar11 + 0x14);
    local_68 = local_98;
    uStack_64 = local_94;
  }
  iVar11 = local_cc;
  if ((((*(int *)(iVar12 + 0x10) == 0) || (sVar15 = FUN_100b08a4(&local_68,1), sVar15 != sVar13)) ||
      (iVar9 = FUN_100b08a4(&local_68,0), iVar9 != 0x17)) &&
     (iVar9 = FUN_1000a12c(iVar12,sVar13,0x17,8,1,0), iVar9 != 0)) {
    FUN_10000888(*(int *)(iVar12 + 0x10),0);
    iVar11 = local_cc;
    if (*piVar3 != 0) {
      iVar9 = FUN_100ef2f8(*piVar3);
      if (iVar9 != 0) {
        FUN_10000b70(*piVar3);
        iVar11 = local_cc;
      }
      if (*(int *)*piVar3 != 0) {
        FUN_10000750((int *)*piVar3,(unsigned long long)*(unsigned int *)(iVar12 + 0x10) + 0x10);
        iVar11 = local_cc;
      }
    }
  }
  iVar12 = *(int *)(*(int *)(iVar11 + -0x1458) + 0x10);
  if (iVar12 != 0) {
    local_a0 = *(int *)(iVar12 + 0x10);
    local_9c = *(int *)(iVar12 + 0x14);
    local_68 = local_a0;
    uStack_64 = local_9c;
  }
  if (((*(int *)(*(int *)(iVar11 + -0x1458) + 0x10) == 0) ||
      (sVar15 = FUN_100b08a4(&local_68,1), sVar15 != sVar13)) ||
     (iVar12 = FUN_100b08a4(&local_68,0), iVar12 != 0x17)) {
    FUN_1000a12c(*(int *)(iVar11 + -0x1458),sVar13,0x17,8,1,0);
  }
  FUN_10000888(local_58,local_54);
  if (((char*)0) != (char *)0x60) {
    FUN_10001b60(local_60,local_5c);
  }
  return;
}

/* Address: 0x100878bc Size: 64 bytes */
void FUN_100878bc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),10,param_1,0);
  return;
}

/* Address: 0x100878fc Size: 2884 bytes */
void FUN_100878fc(int *param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int iVar11;
  int iVar12;
  short sVar16;
  short *psVar13;
  int *puVar14;
  short *psVar15;
  long long uVar4;
  long long uVar5;
  long long uVar6;
  long long uVar7;
  long long uVar8;
  long long uVar9;
  long long uVar10;
  short sVar17;
  short *psVar18;
  short *puVar19;
  int *piVar20;
  int *piVar21;
  short *psVar22;
  short *psVar23;
  char *puVar24;
  short *puVar25;
  short *puVar26;
  short *puVar27;
  short *psVar28;
  short *psVar29;
  int local_11c;
  short local_f8;
  short local_f6;
  short local_f4;
  short local_f2;
  short local_f0 [4];
  short local_e8 [4];
  short local_e0 [4];
  int local_d8;
  char local_d4;
  int local_d0;
  char local_cc;
  int local_c8;
  char local_c4;
  char auStack_c0 [4];
  int local_bc;
  int local_b4;
  short local_b0;
  short local_ae;
  short local_ac;
  short local_aa;
  short local_a8;
  short local_a6;
  short local_a4;
  short local_a2;
  short local_a0 [2];
  short local_9c;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  short local_90 [2];
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  int local_80 [2];
  short local_78;
  short local_76;
  short local_70;
  short local_6e;
  int local_68 [2];
  short local_60;
  short local_5e;
  int local_58;
  char auStack_54 [4];
  int *local_50;
  
  piVar3 = piRam10116434;
  piVar2 = piRam10116428;
  psVar18 = (short *)(((char*)0) + -0xf8);
  puVar26 = (short *)(((char*)0) + -0xf0);
  puVar27 = (short *)(((char*)0) + -0xe8);
  puVar19 = (short *)(((char*)0) + -0xe0);
  piVar20 = (int *)(((char*)0) + -0xd0);
  piVar21 = (int *)(((char*)0) + -200);
  puVar24 = ((char*)0) + -0xc0;
  psVar15 = (short *)(((char*)0) + -0xb0);
  psVar22 = (short *)(((char*)0) + -0xa8);
  psVar23 = (short *)(((char*)0) + -0xa0);
  puVar25 = (short *)(((char*)0) + -0x98);
  psVar28 = (short *)(((char*)0) + -0x90);
  psVar29 = (short *)(((char*)0) + -0x88);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),puVar24);
  FUN_10000030();
  iVar12 = local_11c;
  if (*piVar2 != 0) {
    iVar11 = FUN_100ef2f8(*piVar2);
    if (iVar11 != 0) {
      FUN_10000b70(*piVar2);
      iVar12 = local_11c;
    }
    if (*(int *)*piVar2 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar24,psVar15);
      *puVar27 = *(short *)(*(int *)*piVar2 + 2);
      iVar12 = local_11c;
      iVar11 = FUN_100b08a4(puVar27,1);
      local_aa = local_ae + (short)(iVar11 / 0x14);
      iVar11 = FUN_100b08a4(puVar27,1);
      local_bc = local_bc + iVar11 / 0x14;
    }
  }
  if (**(int **)(iVar12 + -0x1468) != 0) {
    iVar11 = FUN_100ef2f8(**(int **)(iVar12 + -0x1468));
    if (iVar11 != 0) {
      FUN_10000b70(**(int **)(iVar12 + -0x1468));
      iVar12 = local_11c;
    }
    if (*(int *)**(int **)(iVar12 + -0x1468) != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar24,psVar15);
      *puVar26 = *(short *)(*(int *)**(int **)(local_11c + -0x1468) + 2);
      local_ae = FUN_100b08a4(puVar26,1);
      local_ae = local_aa - local_ae;
      iVar12 = FUN_100b08a4(puVar26,1);
      local_b4 = local_b4 - iVar12;
    }
  }
  sVar16 = FUN_10001c20(*piVar3);
  sVar16 = (short)(((long long)sVar16 & 0xffffffffU) / 0x102);
  iVar12 = *piVar3;
  *piVar21 = iVar12;
  local_c4 = FUN_10000360(iVar12);
  FUN_10002598(*piVar21);
  iVar12 = 0;
  if (0 < sVar16) {
    do {
      if (*(short *)(*(int *)*piVar3 + iVar12 * 0x102 + 0x100) == *(short *)(param_1 + 0x20)) break;
      sVar17 = (short)iVar12 + 1;
      iVar12 = (int)sVar17;
    } while (sVar17 < sVar16);
  }
  if (((char*)0) != (char *)0xc8) {
    FUN_10001b60(*piVar21,local_c4);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),puVar24,psVar15);
  psVar13 = psVar22;
  if ((((char*)0) != (char *)0xa8) ||
     (psVar13 = (short *)FUN_100f56e4(8), psVar13 != (short *)0x0)) {
    *psVar13 = *psVar15;
    psVar13[1] = *(short *)(((char*)0) + -0xae);
    psVar13[2] = *(short *)(((char*)0) + -0xac);
    psVar13[3] = *(short *)(((char*)0) + -0xaa);
  }
  puVar14 = (int *)FUN_100b057c(psVar22,0);
  local_80[0] = *puVar14;
  FUN_100b0698(psVar22,((char*)0) + -0x80);
  local_78 = 2;
  local_76 = 0;
  FUN_100b06d4(psVar22);
  psVar13 = psVar18;
  if ((((char*)0) != (char *)0xf8) ||
     (psVar13 = (short *)FUN_100f56e4(8), psVar13 != (short *)0x0)) {
    *psVar13 = *psVar15;
    psVar13[1] = *(short *)(((char*)0) + -0xae);
    psVar13[2] = *(short *)(((char*)0) + -0xac);
    psVar13[3] = *(short *)(((char*)0) + -0xaa);
  }
  local_70 = 2;
  local_6e = 0;
  FUN_100b06d4(psVar18);
  psVar15 = psVar23;
  if ((((char*)0) != (char *)0xa0) ||
     (psVar15 = (short *)FUN_100f56e4(8), psVar15 != (short *)0x0)) {
    *psVar15 = *psVar18;
    psVar15[1] = *(short *)(((char*)0) + -0xf6);
    psVar15[2] = *(short *)(((char*)0) + -0xf4);
    psVar15[3] = *(short *)(((char*)0) + -0xf2);
  }
  puVar14 = (int *)FUN_100b057c(psVar23,0);
  local_68[0] = *puVar14;
  FUN_100b0698(psVar23,((char*)0) + -0x68);
  local_60 = (short)iVar12 * 0x13;
  local_5e = 0;
  FUN_100b065c(psVar23);
  if ((*piVar2 != 0) && (iVar12 = FUN_100ef2f8(*piVar2), iVar12 != 0)) {
    FUN_10000b70(*piVar2);
  }
  iVar12 = *piVar2;
  *piVar20 = iVar12;
  local_cc = FUN_10000360(iVar12);
  FUN_10000048(*piVar20);
  iVar12 = *(int *)*piVar2;
  *puVar25 = *(short *)(iVar12 + 2);
  local_96 = *(short *)(iVar12 + 4);
  local_94 = *(short *)(iVar12 + 6);
  local_92 = *(short *)(iVar12 + 8);
  iVar12 = FUN_100b08a4(puVar25,1);
  sVar16 = (short)(iVar12 / 0x14);
  local_92 = local_96 + sVar16;
  FUN_100b08a4(puVar25,0);
  *puVar19 = 0;
  if ((*piVar3 != 0) && (iVar12 = FUN_100ef2f8(*piVar3), iVar12 != 0)) {
    FUN_10000b70(*piVar3);
  }
  local_d8 = *piVar3;
  local_d4 = FUN_10000360(local_d8);
  FUN_10000048(local_d8);
  FUN_10000870(((char*)0) + -0x58,((char*)0) + -0x54);
  iVar12 = local_11c;
  uVar4 = FUN_10009a98(*(int *)(*(int *)(local_11c + -0x1474) + 0x10));
  uVar5 = FUN_10009a98(*(int *)(*(int *)(iVar12 + -0x1460) + 0x10));
  uVar6 = FUN_10009a98(*(int *)(*(int *)(iVar12 + -0x1458) + 0x10));
  uVar7 = FUN_10009a98(*(int *)(*(int *)(iVar12 + -0x1464) + 0x10));
  uVar8 = FUN_10009a98(local_58);
  sVar17 = 1;
  uVar1 = *(unsigned int *)(iVar12 + -0x1d4);
  local_50 = &local_d8;
  do {
    uVar9 = FUN_100b0578(psVar22);
    uVar10 = FUN_100b0578(psVar22);
    FUN_100008d0(uVar5,uVar6,uVar10,uVar9,0,0);
    *psVar23 = *psVar23 + 1;
    local_9c = local_9c + 1;
    FUN_100b2268((unsigned long long)uVar1);
    FUN_100008b8();
    FUN_100b2268((unsigned long long)uVar1 + 0x5fa);
    FUN_100021c0();
    uVar9 = FUN_100b0578(psVar22);
    uVar10 = FUN_100b0578(psVar23);
    FUN_100008d0(uVar7,uVar6,uVar10,uVar9,1,0);
    psVar15 = psVar29;
    if ((((char*)0) != (char *)0x88) ||
       (psVar15 = (short *)FUN_100f56e4(8), psVar15 != (short *)0x0)) {
      *psVar15 = *psVar18;
      psVar15[1] = *(short *)(((char*)0) + -0xf6);
      psVar15[2] = *(short *)(((char*)0) + -0xf4);
      psVar15[3] = *(short *)(((char*)0) + -0xf2);
    }
    local_86 = local_86 + -2;
    local_82 = local_82 + -4;
    psVar15 = psVar28;
    if ((((char*)0) != (char *)0x90) ||
       (psVar15 = (short *)FUN_100f56e4(8), psVar15 != (short *)0x0)) {
      *psVar15 = *psVar22;
      psVar15[1] = *(short *)(((char*)0) + -0xa6);
      psVar15[2] = *(short *)(((char*)0) + -0xa4);
      psVar15[3] = *(short *)(((char*)0) + -0xa2);
    }
    local_8a = local_8a + -2;
    local_84 = *psVar29 + 2;
    local_8c = *psVar28 + 2;
    uVar9 = FUN_100b0578(psVar29);
    uVar10 = FUN_100b0578(psVar28);
    FUN_100008d0(uVar6,uVar8,uVar10,uVar9,0,0);
    local_86 = local_86 + 1;
    local_82 = local_82 + 1;
    *psVar29 = *psVar29 + 2;
    *psVar28 = *psVar28 + 2;
    local_84 = local_84 + 2;
    local_8c = local_8c + 2;
    uVar9 = FUN_100b0578(psVar29);
    uVar10 = FUN_100b0578(psVar28);
    FUN_100008d0(uVar6,uVar8,uVar10,uVar9,0,0);
    local_86 = local_86 + 1;
    local_82 = local_82 + 1;
    *psVar29 = *psVar29 + 2;
    *psVar28 = *psVar28 + 2;
    local_84 = local_84 + 10;
    local_8c = local_8c + 10;
    uVar9 = FUN_100b0578(psVar29);
    uVar10 = FUN_100b0578(psVar28);
    FUN_100008d0(uVar6,uVar8,uVar10,uVar9,0,0);
    local_86 = local_86 + -1;
    local_82 = local_82 + -1;
    *psVar29 = *psVar29 + 10;
    *psVar28 = *psVar28 + 10;
    local_84 = local_84 + 3;
    local_8c = local_8c + 3;
    uVar9 = FUN_100b0578(psVar29);
    uVar10 = FUN_100b0578(psVar28);
    FUN_100008d0(uVar6,uVar8,uVar10,uVar9,0,0);
    local_86 = local_86 + -1;
    local_82 = local_82 + -1;
    *psVar29 = *psVar29 + 3;
    *psVar28 = *psVar28 + 3;
    local_84 = local_84 + 2;
    local_8c = local_8c + 2;
    uVar9 = FUN_100b0578(psVar29);
    uVar10 = FUN_100b0578(psVar28);
    FUN_100008d0(uVar6,uVar8,uVar10,uVar9,0,0);
    local_96 = local_96 + sVar16;
    local_92 = sVar16 + local_92;
    uVar9 = FUN_100b0578(puVar19);
    uVar10 = FUN_100b0578(puVar25);
    FUN_100008d0(uVar4,uVar8,uVar10,uVar9,0,0);
    piVar2 = local_50;
    sVar17 = sVar17 + 1;
  } while (sVar17 < 0x14);
  FUN_10009b00(*(int *)(*(int *)(local_11c + -0x1474) + 0x10));
  FUN_10009b00(*(int *)(*(int *)(local_11c + -0x1460) + 0x10));
  FUN_10009b00(*(int *)(*(int *)(local_11c + -0x1458) + 0x10));
  FUN_10009b00(*(int *)(*(int *)(local_11c + -0x1464) + 0x10));
  FUN_10009b00(local_58);
  if (piVar2 != (int *)0x0) {
    FUN_10001b60(*piVar2,*(char *)(piVar2 + 1));
  }
  if (((char*)0) != (char *)0xd0) {
    FUN_10001b60(*piVar20,local_cc);
  }
  return;
}

/* Address: 0x10088464 Size: 192 bytes */
void FUN_10088464(long long param_1)

{
  short sVar1;
  int *piVar2;
  int *ppuVar3;
  int *ppuVar4;
  int iVar5;
  int **local_2c;
  
  piVar2 = piRam10116434;
  ppuVar3 = 0 /* TVect base */;
  sVar1 = *psRam1011736c;
  *psRam1011736c = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    ppuVar4 = 0 /* TVect base */;
    if ((*piVar2 != 0) && (iVar5 = FUN_100ef2f8(*piVar2), ppuVar4 = ppuVar3, iVar5 != 0)) {
      FUN_10001c98(*piVar2);
      ppuVar4 = local_2c;
    }
    *piVar2 = 0;
    *(short *)(*(int*)((char*)ppuVar4 - 0x517)) = 0xffff;
    FUN_1000a094((*(int*)((char*)ppuVar4 - 0x519)));
    FUN_1000a094((*(int*)((char*)ppuVar4 - 0x518)));
    FUN_1000a094((*(int*)((char*)ppuVar4 - 0x516)));
    FUN_1000a094((*(int*)((char*)ppuVar4 - 0x51d)));
  }
  FUN_10106060(param_1);
  return;
}

/* Address: 0x10088524 Size: 60 bytes */
void FUN_10088524(void)

{
  FUN_100c1c8c(uRam10116424,*puRam1011644c,0x84,uRam10116450,uRam10116c7c);
  return;
}

/* Address: 0x10088570 Size: 116 bytes */
int * FUN_10088570(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x44);
  if (puVar2 != (int *)0x0) {
    FUN_100d568c(puVar2);
    puVar2[0xd] = 0x20202020;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x13e));
    *(short *)(puVar2 + 0x10) = 0;
  }
  return puVar2;
}

/* Address: 0x100885e4 Size: 320 bytes */
void FUN_100885e4(long long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char auStack_58 [88];
  
  piVar1 = (int *)FUN_100db500(0x57325343,0x57617232,0,1,0,0);
  piVar2 = (int *)FUN_100df14c(0);
  FUN_100df1f8(piVar2,param_2,piVar1);
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xf0),0x13,0,piVar1);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x178),auStack_58);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8));
  FUN_1007ec7c(param_2,auStack_58);
  FUN_10117884((int)*(int **)(param_2 + 0x148) +
               (int)*(short *)(**(int **)(param_2 + 0x148) + 0x2a0),3,3);
  FUN_10117884((int)*(int **)(param_2 + 0x148) +
               (int)*(short *)(**(int **)(param_2 + 0x148) + 0x118));
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
  return;
}

/* Address: 0x10088724 Size: 2660 bytes */
void FUN_10088724(int param_1)

{
  unsigned long long uVar1;
  int uVar2;
  int uVar6;
  int iVar7;
  short *puVar8;
  short *psVar9;
  int *puVar10;
  int *puVar11;
  int *puVar12;
  int *puVar13;
  int *puVar14;
  int *ppuVar15;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  short sVar24;
  int *puVar22;
  short uVar25;
  char uVar26;
  unsigned int *puVar23;
  long long uVar16;
  unsigned int uVar27;
  unsigned long long uVar28;
  int local_1d4;
  char auStack_1b0 [84];
  char auStack_15c [256];
  short local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int uVar3;
  int uVar4;
  int uVar5;
  
  puVar14 = puRam10117724;
  puVar13 = puRam10117720;
  puVar12 = puRam1011771c;
  puVar11 = puRam10117718;
  puVar10 = puRam10117370;
  psVar9 = psRam10116460;
  puVar8 = puRam1011645c;
  ppuVar15 = 0 /* TVect base */;
  if (*pcRam10117378 != '\0') {
    ppuVar15 = 0 /* TVect base */;
    FUN_1008f648();
    FUN_1008f658(0);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x28);
  piVar17 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar15 - 0x79)) +
                                (int)*(short *)(**(int **)(*(int*)((char*)ppuVar15 - 0x79)) + 200),0xbc2,iVar7);
  FUN_100db26c();
  iVar18 = FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x7f8));
  iVar19 = FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x810));
  FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x328));
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = *puVar10;
  *puVar10 = auStack_15c;
  iVar20 = FUN_10000090(auStack_15c);
  if (iVar20 == 0) {
    if (iVar19 == 0x6f6b2020) {
      FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x328));
      **(short **)(local_1d4 + -0x16a4) = 1;
      iVar20 = FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x308),0x77617465);
      if (iVar20 == 0) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd4) == -1) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd2) < 100) {
        uVar27 = (int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0);
        sVar24 = (short)((int)uVar27 >> 1) + (unsigned short)((int)uVar27 < 0 && (uVar27 & 1) != 0);
      }
      else {
        sVar24 = (short)(((int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0)) / 5);
      }
      *psVar9 = sVar24;
      iVar20 = FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x308),0x68696c6c);
      if (iVar20 == 0) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd4) == -1) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd2) < 100) {
        uVar27 = (int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0);
        sVar24 = (short)((int)uVar27 >> 1) + (unsigned short)((int)uVar27 < 0 && (uVar27 & 1) != 0);
      }
      else {
        sVar24 = (short)(((int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0)) / 5);
      }
      psVar9[1] = sVar24;
      iVar20 = FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x308),0x63697469);
      if (iVar20 == 0) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd4) == -1) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd2) < 100) {
        uVar27 = (int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0);
        sVar24 = (short)((int)uVar27 >> 1) + (unsigned short)((int)uVar27 < 0 && (uVar27 & 1) != 0);
      }
      else {
        sVar24 = (short)(((int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0)) / 5);
      }
      psVar9[2] = sVar24;
      iVar20 = FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x308),0x666f7265);
      if (iVar20 == 0) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd4) == -1) {
        sVar24 = 7;
      }
      else if (*(short *)(iVar20 + 0xd2) < 100) {
        uVar27 = (int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0);
        sVar24 = (short)((int)uVar27 >> 1) + (unsigned short)((int)uVar27 < 0 && (uVar27 & 1) != 0);
      }
      else {
        sVar24 = (short)(((int)*(short *)(iVar20 + 0xd4) - (int)*(short *)(iVar20 + 0xd0)) / 5);
      }
      psVar9[3] = sVar24;
      piVar21 = (int *)FUN_10117884((int)*(int **)(iVar18 + 8) +
                                    (int)*(short *)(**(int **)(iVar18 + 8) + 0x308),0x74657272);
      if (piVar21 == (int *)0x0) {
        sVar24 = 1;
      }
      else {
        sVar24 = FUN_10117884((int)piVar21 + (int)*(short *)(*piVar21 + 0x878));
      }
      puVar22 = (int *)
                FUN_10117884((int)*(int **)(iVar18 + 0x40) +
                             (int)*(short *)(**(int **)(iVar18 + 0x40) + 0xe0));
      uVar2 = puVar22[1];
      uVar3 = puVar22[2];
      uVar4 = puVar22[3];
      uVar5 = puVar22[4];
      *puVar14 = *puVar22;
      puVar14[1] = uVar2;
      puVar14[2] = uVar3;
      puVar14[3] = uVar4;
      puVar14[4] = uVar5;
      uVar3 = puVar22[6];
      uVar2 = puVar22[7];
      uVar4 = puVar22[8];
      uVar5 = puVar22[9];
      puVar14[5] = puVar22[5];
      puVar14[6] = uVar3;
      puVar14[7] = uVar2;
      puVar14[8] = uVar4;
      puVar14[9] = uVar5;
      uVar3 = puVar22[0xb];
      uVar2 = puVar22[0xc];
      uVar5 = puVar22[0xd];
      uVar4 = puVar22[0xe];
      puVar14[10] = puVar22[10];
      puVar14[0xb] = uVar3;
      puVar14[0xc] = uVar2;
      puVar14[0xd] = uVar5;
      puVar14[0xe] = uVar4;
      uVar2 = puVar22[0x10];
      uVar27 = puVar22[0x11];
      puVar14[0xf] = puVar22[0xf];
      puVar14[0x10] = uVar2;
      puVar14[0x11] = uVar27 & 0xffff0000;
      **(short **)(local_1d4 + -0x143c) = sVar24 + -1;
      FUN_1007ed14(iVar7,puVar14);
      FUN_10117884((int)*(int **)(iVar7 + 0x14c) +
                   (int)*(short *)(**(int **)(iVar7 + 0x14c) + 0x118));
      piVar21 = (int *)FUN_10117884((int)*(int **)(iVar18 + 8) +
                                    (int)*(short *)(**(int **)(iVar18 + 8) + 0x308),0x61726d79);
      if (piVar21 == (int *)0x0) {
        sVar24 = 1;
      }
      else {
        sVar24 = FUN_10117884((int)piVar21 + (int)*(short *)(*piVar21 + 0x878));
      }
      uVar28 = (unsigned long long)sVar24;
      if (2 < sVar24) {
        puVar22 = (int *)
                  FUN_10117884((int)*(int **)(iVar18 + 0x44) +
                               (int)*(short *)(**(int **)(iVar18 + 0x44) + 0xe0),uVar28 - 2);
        uVar2 = puVar22[1];
        uVar5 = puVar22[2];
        uVar4 = puVar22[3];
        uVar3 = puVar22[4];
        uVar6 = puVar22[5];
        *puVar13 = *puVar22;
        puVar13[1] = uVar2;
        puVar13[2] = uVar5;
        puVar13[3] = uVar4;
        puVar13[4] = uVar3;
        puVar13[5] = uVar6;
        uVar6 = puVar22[7];
        uVar2 = puVar22[8];
        uVar5 = puVar22[9];
        uVar4 = puVar22[10];
        uVar3 = puVar22[0xb];
        puVar13[6] = puVar22[6];
        puVar13[7] = uVar6;
        puVar13[8] = uVar2;
        puVar13[9] = uVar5;
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar3;
        uVar2 = puVar22[0xd];
        uVar5 = puVar22[0xe];
        uVar4 = puVar22[0xf];
        uVar3 = puVar22[0x10];
        uVar27 = puVar22[0x11];
        puVar13[0xc] = puVar22[0xc];
        puVar13[0xd] = uVar2;
        puVar13[0xe] = uVar5;
        puVar13[0xf] = uVar4;
        puVar13[0x10] = uVar3;
        puVar13[0x11] = uVar27 & 0xffff0000;
      }
      uVar1 = (unsigned long long)(uVar28 < 3);
      uVar28 = ((unsigned long long)(uVar28 < 3) + 4) -
               ((unsigned long long)(uVar1 < 0xfffffffffffffffe && uVar1 + 2 < 0xfffffffffffffffe) -
               ((long long)(uVar28 << 0x20) >> 0x3f)) & 1;
      **(char **)(local_1d4 + -0x1438) = (char)uVar28;
      if (uVar28 != 0) {
        FUN_1007edac(iVar7,puVar13);
        FUN_10117884((int)*(int **)(iVar7 + 0x150) +
                     (int)*(short *)(**(int **)(iVar7 + 0x150) + 0x118));
      }
      piVar21 = (int *)FUN_10117884((int)*(int **)(iVar18 + 8) +
                                    (int)*(short *)(**(int **)(iVar18 + 8) + 0x308),0x63697479);
      if (piVar21 == (int *)0x0) {
        sVar24 = 1;
      }
      else {
        sVar24 = FUN_10117884((int)piVar21 + (int)*(short *)(*piVar21 + 0x878));
      }
      uVar28 = (unsigned long long)sVar24;
      if (2 < sVar24) {
        puVar22 = (int *)
                  FUN_10117884((int)*(int **)(iVar18 + 0x48) +
                               (int)*(short *)(**(int **)(iVar18 + 0x48) + 0xe0),uVar28 - 2);
        uVar4 = puVar22[1];
        uVar3 = puVar22[2];
        uVar2 = puVar22[3];
        uVar6 = puVar22[4];
        uVar5 = puVar22[5];
        *puVar12 = *puVar22;
        puVar12[1] = uVar4;
        puVar12[2] = uVar3;
        puVar12[3] = uVar2;
        puVar12[4] = uVar6;
        puVar12[5] = uVar5;
        uVar2 = puVar22[7];
        uVar6 = puVar22[8];
        uVar3 = puVar22[9];
        uVar4 = puVar22[10];
        uVar5 = puVar22[0xb];
        puVar12[6] = puVar22[6];
        puVar12[7] = uVar2;
        puVar12[8] = uVar6;
        puVar12[9] = uVar3;
        puVar12[10] = uVar4;
        puVar12[0xb] = uVar5;
        uVar2 = puVar22[0xd];
        uVar5 = puVar22[0xe];
        uVar4 = puVar22[0xf];
        uVar3 = puVar22[0x10];
        uVar27 = puVar22[0x11];
        puVar12[0xc] = puVar22[0xc];
        puVar12[0xd] = uVar2;
        puVar12[0xe] = uVar5;
        puVar12[0xf] = uVar4;
        puVar12[0x10] = uVar3;
        puVar12[0x11] = uVar27 & 0xffff0000;
      }
      uVar1 = (unsigned long long)(uVar28 < 3);
      **(unsigned char **)(local_1d4 + -0x1434) =
           ((uVar28 < 3) + '\x04') -
           ((uVar1 < 0xfffffffffffffffe && uVar1 + 2 < 0xfffffffffffffffe) - (char)(sVar24 >> 7)) &
           1;
      if (iVar7 != 0) {
        FUN_1007eea4(iVar7,puVar12);
        FUN_10117884((int)*(int **)(iVar7 + 0x154) +
                     (int)*(short *)(**(int **)(iVar7 + 0x154) + 0x118));
      }
      piVar21 = (int *)FUN_10117884((int)*(int **)(iVar18 + 8) +
                                    (int)*(short *)(**(int **)(iVar18 + 8) + 0x308),0x73686965);
      if (piVar21 == (int *)0x0) {
        sVar24 = 1;
      }
      else {
        sVar24 = FUN_10117884((int)piVar21 + (int)*(short *)(*piVar21 + 0x878));
      }
      uVar28 = (unsigned long long)sVar24;
      if (2 < sVar24) {
        puVar22 = (int *)
                  FUN_10117884((int)*(int **)(iVar18 + 0x4c) +
                               (int)*(short *)(**(int **)(iVar18 + 0x4c) + 0xe0),uVar28 - 2);
        uVar2 = puVar22[1];
        uVar5 = puVar22[2];
        uVar4 = puVar22[3];
        uVar3 = puVar22[4];
        uVar6 = puVar22[5];
        *puVar11 = *puVar22;
        puVar11[1] = uVar2;
        puVar11[2] = uVar5;
        puVar11[3] = uVar4;
        puVar11[4] = uVar3;
        puVar11[5] = uVar6;
        uVar2 = puVar22[7];
        uVar5 = puVar22[8];
        uVar4 = puVar22[9];
        uVar3 = puVar22[10];
        uVar6 = puVar22[0xb];
        puVar11[6] = puVar22[6];
        puVar11[7] = uVar2;
        puVar11[8] = uVar5;
        puVar11[9] = uVar4;
        puVar11[10] = uVar3;
        puVar11[0xb] = uVar6;
        uVar2 = puVar22[0xd];
        uVar5 = puVar22[0xe];
        uVar4 = puVar22[0xf];
        uVar3 = puVar22[0x10];
        uVar27 = puVar22[0x11];
        puVar11[0xc] = puVar22[0xc];
        puVar11[0xd] = uVar2;
        puVar11[0xe] = uVar5;
        puVar11[0xf] = uVar4;
        puVar11[0x10] = uVar3;
        puVar11[0x11] = uVar27 & 0xffff0000;
      }
      uVar1 = (unsigned long long)(uVar28 < 3);
      uVar28 = ((unsigned long long)(uVar28 < 3) + 4) -
               ((unsigned long long)(uVar1 < 0xfffffffffffffffe && uVar1 + 2 < 0xfffffffffffffffe) -
               ((long long)(uVar28 << 0x20) >> 0x3f)) & 1;
      **(char **)(local_1d4 + -0x1430) = (char)uVar28;
      if (uVar28 != 0) {
        FUN_1007ef9c(iVar7,puVar11);
        FUN_10117884((int)*(int **)(iVar7 + 0x158) +
                     (int)*(short *)(**(int **)(iVar7 + 0x158) + 0x118));
      }
      piVar21 = (int *)FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x308),0x616c6c79);
      if (piVar21 == (int *)0x0) {
        uVar25 = 0;
      }
      else {
        uVar25 = FUN_10117884((int)piVar21 + (int)*(short *)(*piVar21 + 0x848));
      }
      *puVar8 = uVar25;
      FUN_100981f8(auStack_1b0,0x80);
      uVar26 = FUN_100f1574(1);
      puVar23 = (unsigned int *)FUN_10001fc8(0x40a);
      **(char **)(local_1d4 + -0x3c) = uVar26;
      if (puVar23 != (unsigned int *)0x0) {
        *(short *)*puVar23 = *psVar9;
        *(short *)(*puVar23 + 2) = psVar9[1];
        *(short *)(*puVar23 + 4) = psVar9[2];
        *(short *)(*puVar23 + 6) = psVar9[3];
        FUN_100012d8((int)puVar14 + 6,(unsigned long long)*puVar23 + 8,
                     (unsigned long long)*(unsigned char *)((int)puVar14 + 6) + 1);
        FUN_100012d8((int)puVar13 + 6,(unsigned long long)*puVar23 + 0x108,
                     (unsigned long long)*(unsigned char *)((int)puVar13 + 6) + 1);
        FUN_100012d8((int)puVar12 + 6,(unsigned long long)*puVar23 + 0x208,
                     (unsigned long long)*(unsigned char *)((int)puVar12 + 6) + 1);
        FUN_100012d8((int)puVar11 + 6,(unsigned long long)*puVar23 + 0x308,
                     (unsigned long long)*(unsigned char *)((int)puVar11 + 6) + 1);
        *(char *)(*puVar23 + 0x408) = (char)*puVar8;
        FUN_100985fc(auStack_1b0,puVar23,0x52616e64,1000,*(int *)(local_1d4 + -0xe4c));
      }
      FUN_100ef510(puVar23);
      FUN_100982e8(auStack_1b0,2);
    }
    FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x738));
    *puVar10 = local_54;
  }
  else {
    if (piVar17 != (int *)0x0) {
      FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x738));
    }
    FUN_100db158(local_5c,local_58);
  }
  if (iVar19 == 0x6f6b2020) {
    piVar17 = *(int **)(param_1 + 8);
    FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x328));
    FUN_100885e4(param_1,iVar7);
    uVar16 = FUN_1007a894(0);
    FUN_1007a95c(uVar16,piVar17);
    FUN_10117884((int)piVar17 + (int)*(short *)(*piVar17 + 0x200),uVar16);
    FUN_10092c5c(0);
    FUN_1007c714(iVar7,0x3f5);
  }
  return;
}

/* Address: 0x10089188 Size: 564 bytes */
void FUN_10089188(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar5;
  int iVar6;
  short uVar8;
  long long uVar4;
  int *puVar7;
  int local_dc;
  char auStack_b8 [80];
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
  
  *puRam101161fc = 0;
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = piVar1[10];
  piVar5 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x4c697374);
  if ((piVar5 == (int *)0x0) ||
     (iVar6 = FUN_10117884((int)*(short *)(*piVar5 + 0x818) + (int)piVar5), iVar6 == 0)) {
    FUN_100db26c(0);
  }
  uVar8 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x908));
  *(short *)(param_1 + 0x40) = uVar8;
  piVar3 = (int *)piVar5[0x2e];
  uVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x908));
  puVar7 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0),uVar4);
  local_68 = *puVar7;
  uStack_64 = puVar7[1];
  uStack_60 = puVar7[2];
  uStack_5c = puVar7[3];
  uStack_58 = puVar7[4];
  uStack_54 = puVar7[5];
  local_50 = puVar7[6];
  uStack_4c = puVar7[7];
  uStack_48 = puVar7[8];
  uStack_44 = puVar7[9];
  uStack_40 = puVar7[10];
  uStack_3c = puVar7[0xb];
  local_38 = puVar7[0xc];
  uStack_34 = puVar7[0xd];
  uStack_30 = puVar7[0xe];
  uStack_2c = puVar7[0xf];
  uStack_28 = puVar7[0x10];
  uStack_24 = puVar7[0x11] & 0xffff0000;
  FUN_1007ec7c(iVar2,&local_68);
  FUN_10117884((int)*(int **)(iVar2 + 0x148) + (int)*(short *)(**(int **)(iVar2 + 0x148) + 0x118));
  uVar4 = FUN_100f1574(1);
  iVar6 = FUN_10001ae8((int)&uStack_64 + 2);
  FUN_100f1574(uVar4);
  if (iVar6 != 0) {
    FUN_100981f8(auStack_b8,0x80);
    FUN_100985fc(auStack_b8,iVar6,0x4c617374,1000,*(int *)(local_dc + -0xe4c));
    FUN_100ef510(iVar6);
    FUN_100982e8(auStack_b8,2);
  }
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x328));
  uVar4 = FUN_1007a894(0);
  FUN_1007a95c(uVar4,piVar1);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x200),uVar4);
  FUN_1007c714(iVar2,0x3f5);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100893bc() { }



























/* Address: 0x10089420 Size: 148 bytes */
void FUN_10089420(int *param_1,int *param_2)

{
  int iVar1;
  short uVar2;
  
  param_1[0x2e] = (int)param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8b0),*(short *)(param_1 + 0x20));
  iVar1 = *param_1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x8d8),uVar2);
  return;
}

/* Address: 0x100894b4 Size: 740 bytes */
void FUN_100894b4(long long param_1)

{
  int *piVar3;
  int iVar4;
  long long uVar1;
  long long uVar2;
  short sVar5;
  int local_4b4;
  char auStack_464 [4];
  int local_460;
  char *local_45c;
  short *local_428;
  int local_420;
  int uStack_41c;
  int uStack_418;
  int uStack_414;
  int uStack_410;
  int uStack_40c;
  int local_408;
  int uStack_404;
  int uStack_400;
  int uStack_3fc;
  int uStack_3f8;
  int uStack_3f4;
  int local_3f0;
  int uStack_3ec;
  int uStack_3e8;
  int uStack_3e4;
  int uStack_3e0;
  unsigned int uStack_3dc;
  int local_3d8 [4];
  int local_3c8;
  int uStack_3c4;
  int uStack_3c0;
  int uStack_3bc;
  int uStack_3b8;
  int uStack_3b4;
  int local_3b0;
  int uStack_3ac;
  int uStack_3a8;
  int uStack_3a4;
  int uStack_3a0;
  int uStack_39c;
  int local_398;
  int uStack_394;
  int uStack_390;
  int uStack_38c;
  int uStack_388;
  unsigned int uStack_384;
  short local_380;
  int local_37e;
  char local_338 [256];
  int local_238;
  int uStack_234;
  int uStack_230;
  int uStack_22c;
  int uStack_228;
  int uStack_224;
  int local_220;
  int uStack_21c;
  int uStack_218;
  int uStack_214;
  int uStack_210;
  int uStack_20c;
  int local_208;
  int uStack_204;
  int uStack_200;
  int uStack_1fc;
  int uStack_1f8;
  unsigned int uStack_1f4;
  short local_1f0;
  short uStack_1ee;
  short uStack_1ec;
  short uStack_1ea;
  int uStack_1e8;
  int uStack_1e4;
  int uStack_1e0;
  int uStack_1dc;
  int local_1d8;
  int uStack_1d4;
  int uStack_1d0;
  int uStack_1cc;
  int uStack_1c8;
  int uStack_1c4;
  int local_1c0;
  int uStack_1bc;
  int uStack_1b8;
  int uStack_1b4;
  int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char local_1a8 [256];
  char auStack_a8 [12];
  int local_9c;
  unsigned char *local_96;
  short local_92;
  short local_8c;
  char local_8a;
  int local_88;
  unsigned short local_80;
  int local_78;
  int local_44;
  
  local_428 = &local_380;
  local_45c = local_338;
  local_9c = 0;
  local_1a8[0] = 0;
  local_338[0] = 0;
  local_460 = 0x3c;
  local_96 = local_1a8;
  FUN_10001bd8((unsigned long long)*puRam101169c4 + 0x32,&local_460);
  FUN_100db2f4();
  local_92 = local_380;
  piVar3 = (int *)FUN_100f56e4(0x20);
  if (piVar3 != (int *)0x0) {
    FUN_100d8824(piVar3);
    *piVar3 = *(int *)(local_4b4 + -0x142c);
  }
  FUN_100d88b4(piVar3,0,0x46);
  local_8c = 1;
  local_78 = local_37e;
  iVar4 = FUN_10002058(auStack_a8);
  sVar5 = 1;
  while (iVar4 == 0) {
    if (((unsigned int)(int)local_8a >> 4 & 1) != 1) {
      local_1f0 = local_92;
      uStack_1ee = (short)((unsigned int)local_44 >> 0x10);
      uStack_1ec = (short)local_44;
      FUN_100012d8(local_1a8,&uStack_1ea,(unsigned long long)local_1a8[0] + 1);
      FUN_100ef284(local_1a8,&uStack_1ea);
      if ((local_80 & 0x8000) == 0) {
        if (local_88 == 0x57325343) {
          local_3c8 = CONCAT22(local_1f0,uStack_1ee);
          uStack_3c4 = CONCAT22(uStack_1ec,uStack_1ea);
          uStack_3c0 = uStack_1e8;
          uStack_3bc = uStack_1e4;
          uStack_3b8 = uStack_1e0;
          uStack_3b4 = uStack_1dc;
          local_3b0 = local_1d8;
          uStack_3ac = uStack_1d4;
          uStack_3a8 = uStack_1d0;
          uStack_3a4 = uStack_1cc;
          uStack_3a0 = uStack_1c8;
          uStack_39c = uStack_1c4;
          uStack_384 = uStack_1ac & 0xffff0000;
          local_398 = local_1c0;
          uStack_394 = uStack_1bc;
          uStack_390 = uStack_1b8;
          uStack_38c = uStack_1b4;
          uStack_388 = uStack_1b0;
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x108),&local_3c8);
        }
      }
      else {
        uVar1 = FUN_100032d0(&local_1f0,1);
        iVar4 = FUN_10000678();
        if (iVar4 == 0) {
          uVar2 = FUN_10003558(0x616c6973,0);
          iVar4 = -0x2b;
          if ((int)uVar2 != 0) {
            iVar4 = FUN_10002070(0,uVar2,&local_238,auStack_464);
          }
          if (((iVar4 == 0) && (iVar4 = FUN_10001530(&local_238,local_3d8), iVar4 == 0)) &&
             (local_3d8[0] == 0x57325343)) {
            local_420 = local_238;
            uStack_41c = uStack_234;
            uStack_418 = uStack_230;
            uStack_414 = uStack_22c;
            uStack_410 = uStack_228;
            uStack_40c = uStack_224;
            local_408 = local_220;
            uStack_404 = uStack_21c;
            uStack_400 = uStack_218;
            uStack_3fc = uStack_214;
            uStack_3f8 = uStack_210;
            uStack_3f4 = uStack_20c;
            uStack_3dc = uStack_1f4 & 0xffff0000;
            local_3f0 = local_208;
            uStack_3ec = uStack_204;
            uStack_3e8 = uStack_200;
            uStack_3e4 = uStack_1fc;
            uStack_3e0 = uStack_1f8;
            FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x108),&local_420);
          }
          FUN_10003300(uVar1);
        }
      }
    }
    sVar5 = sVar5 + 1;
    local_78 = local_37e;
    local_8c = sVar5;
    iVar4 = FUN_10002058(auStack_a8);
  }
  FUN_10089420(param_1,piVar3);
  return;
}

/* Address: 0x10089798 Size: 1480 bytes */
void FUN_10089798(int param_1)

{
  int iVar1;
  int uVar2;
  int *piVar5;
  short sVar15;
  short uVar16;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long long uVar3;
  int *puVar12;
  int *piVar13;
  int *piVar14;
  long long lVar4;
  int local_404;
  char auStack_3e0 [256];
  char auStack_2e0 [256];
  int local_1e0;
  int uStack_1dc;
  int uStack_1d8;
  int uStack_1d4;
  int uStack_1d0;
  int uStack_1cc;
  int local_1c8;
  int uStack_1c4;
  int uStack_1c0;
  int uStack_1bc;
  int uStack_1b8;
  int uStack_1b4;
  int local_1b0;
  int uStack_1ac;
  int uStack_1a8;
  int uStack_1a4;
  int uStack_1a0;
  unsigned int uStack_19c;
  char local_198 [28];
  int local_17c;
  int uStack_178;
  int uStack_174;
  int uStack_170;
  int uStack_16c;
  int uStack_168;
  int uStack_164;
  unsigned int uStack_160;
  short local_14c;
  short local_14a;
  short local_148;
  char local_140 [320];
  
  uVar2 = uRam10116a54;
  piVar14 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar14);
  piVar5 = (int *)FUN_10117884((int)piVar14 + (int)*(short *)(*piVar14 + 0x308),0x4c697374);
  FUN_100db26c(piVar5);
  sVar15 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x908));
  if (*(short *)(param_1 + 0x40) != sVar15) {
    uVar16 = FUN_10117884((int)*(short *)(*piVar5 + 0x908) + (int)piVar5);
    *(short *)(param_1 + 0x40) = uVar16;
    piVar6 = (int *)FUN_10117884((int)*(short *)(*piVar14 + 0x308) + (int)piVar14,0x6e616d65);
    FUN_100db26c(piVar6);
    piVar7 = (int *)FUN_10117884((int)*(short *)(*piVar14 + 0x308) + (int)piVar14,0x64657363);
    FUN_100db26c(piVar7);
    piVar8 = (int *)FUN_10117884((int)*(short *)(*piVar14 + 0x308) + (int)piVar14,0x63697479);
    FUN_100db26c(piVar8);
    piVar9 = (int *)FUN_10117884((int)*(short *)(*piVar14 + 0x308) + (int)piVar14,0x7275696e);
    FUN_100db26c(piVar9);
    piVar10 = (int *)FUN_10117884((int)*(short *)(*piVar14 + 0x308) + (int)piVar14,0x706c6179);
    FUN_100db26c(piVar10);
    iVar11 = FUN_10117884((int)*(short *)(*piVar5 + 0x818) + (int)piVar5);
    if (iVar11 == 0) {
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),uVar2,0);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),uVar2,0);
      FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x7c8),uVar2,0);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),uVar2,0);
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8),uVar2,0);
    }
    else {
      piVar13 = (int *)piVar5[0x2e];
      uVar3 = FUN_10117884((int)*(short *)(*piVar5 + 0x908) + (int)piVar5);
      puVar12 = (int *)FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0xe0),uVar3);
      local_1e0 = *puVar12;
      uStack_1dc = puVar12[1];
      uStack_1d8 = puVar12[2];
      uStack_1d4 = puVar12[3];
      uStack_1d0 = puVar12[4];
      uStack_1cc = puVar12[5];
      local_1c8 = puVar12[6];
      uStack_1c4 = puVar12[7];
      uStack_1c0 = puVar12[8];
      uStack_1bc = puVar12[9];
      uStack_1b8 = puVar12[10];
      uStack_1b4 = puVar12[0xb];
      local_1b0 = puVar12[0xc];
      uStack_1ac = puVar12[0xd];
      uStack_1a8 = puVar12[0xe];
      uStack_1a4 = puVar12[0xf];
      uStack_1a0 = puVar12[0x10];
      uStack_19c = puVar12[0x11] & 0xffff0000;
      uVar3 = FUN_100032d0(&local_1e0,1);
      FUN_100db328();
      iVar11 = FUN_10003558(0x5343454e,10000);
      if (iVar11 == 0) {
        local_198[0] = 0;
        iVar11 = *(int *)(local_404 + -0x144c);
        local_17c = *(int *)(iVar11 + 0x120);
        uStack_178 = *(int *)(iVar11 + 0x124);
        uStack_174 = *(int *)(iVar11 + 0x128);
        uStack_170 = *(int *)(iVar11 + 300);
        uStack_16c = *(int *)(iVar11 + 0x130);
        uStack_168 = *(int *)(iVar11 + 0x134);
        uStack_164 = *(int *)(iVar11 + 0x138);
        uStack_160 = *(unsigned int *)(iVar11 + 0x13c) & 0xffff0000;
        local_14c = 0;
        local_14a = 0;
        local_148 = 0;
      }
      else {
        piVar13 = (int *)FUN_100fb260(0);
        FUN_100fb300(piVar13,0x5343454e,10000);
        FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0xe0),local_198,0x54);
        FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x90));
      }
      FUN_10003300(uVar3);
      FUN_100b19f4(auStack_2e0,local_198);
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),auStack_2e0,0);
      FUN_100b19f4(auStack_3e0,&local_17c);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),auStack_3e0,0);
      local_140[0] = 0;
      uVar3 = FUN_100525a0(local_14c);
      FUN_10000ac8(uVar3,local_140);
      FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x7c8),local_140,0);
      uVar3 = FUN_100525a0(local_14a);
      FUN_10000ac8(uVar3,local_140);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7c8),local_140,0);
      uVar3 = FUN_100525a0(local_148);
      FUN_10000ac8(uVar3,local_140);
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8),local_140,0);
    }
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x4d0));
    FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x4d0));
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x4d0));
    FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x4d0));
  }
  piVar14 = (int *)FUN_10117884((int)piVar14 + (int)*(short *)(*piVar14 + 0x308),0x53746172);
  if ((piVar5 != (int *)0x0) && (piVar14 != (int *)0x0)) {
    iVar11 = *piVar14;
    iVar1 = *piVar5;
    lVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(iVar1 + 0x818),iVar1,
                         *(int *)(iVar1 + 0x81c));
    FUN_10117884((int)piVar14 + (int)*(short *)(iVar11 + 0x738),lVar4 == 0,1);
  }
  return;
}

/* Address: 0x10089d60 Size: 448 bytes */
void FUN_10089d60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *puVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  char auStack_170 [80];
  char local_120 [288];
  
  piVar2 = piRam10116478;
  piVar1 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar1);
  piVar3 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x4c697374);
  if (piVar3 != (int *)0x0) {
    FUN_100f4f94(piVar3,piVar1);
    FUN_100894b4(piVar3);
    if (*(short *)(piVar3 + 0x20) < 1) {
      FUN_10089798(param_1);
    }
    else {
      FUN_100981f8(auStack_170,0x80);
      puVar4 = (int *)FUN_10098320(auStack_170,0x4c617374,1000);
      sVar7 = 1;
      sVar8 = sVar7;
      if (puVar4 != (int *)0x0) {
        sVar6 = 1;
        if (0 < *(short *)(piVar3 + 0x20)) {
          do {
            local_120[0] = 0;
            FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x890),sVar6,local_120);
            iVar5 = FUN_100b1c18(local_120,*puVar4,1);
            sVar8 = sVar6;
            if (iVar5 == 1) break;
            sVar6 = sVar6 + 1;
            sVar8 = sVar7;
          } while (sVar6 <= *(short *)(piVar3 + 0x20));
        }
        FUN_100ef510(puVar4);
      }
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x8f0),sVar8,0,1,1);
      FUN_100982e8(auStack_170,2);
    }
  }
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    *piVar2 = 0;
  }
  return;
}

/* Address: 0x10089f20 Size: 296 bytes */
void FUN_10089f20(int param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5)

{
  int *piVar1;
  int *piVar3;
  int iVar4;
  long long uVar2;
  
  if ((int)param_2 == 8) {
    FUN_10089798(param_1);
  }
  else if ((int)param_2 == 0x21) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                   *(int *)(param_1 + 0x24));
    }
    if ((piVar3 == (int *)0x0) ||
       (iVar4 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0)), iVar4 == 0)) {
      FUN_10089188(param_1);
    }
    else {
      iVar4 = *piVar3;
      uVar2 = FUN_10117884((int)*(short *)(iVar4 + 0x530) + (int)piVar3);
      FUN_10117884((int)*(short *)(iVar4 + 0xd0) + (int)piVar3,uVar2,piVar1,0);
    }
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* Address: 0x1008a0d8 Size: 40 bytes */
void FUN_1008a0d8(void)

{
  FUN_1008a058(0);
  return;
}

/* Address: 0x1008a100 Size: 648 bytes */
void FUN_1008a100(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar9;
  long long uVar6;
  long long lVar7;
  long long uVar8;
  short sVar10;
  short sVar11;
  int local_44;
  
  piVar4 = piRam10116488;
  piVar3 = piRam10116484;
  piVar2 = piRam10115f8c;
  piVar9 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                               (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x706f7075);
  FUN_100db26c(piVar9);
  uVar6 = FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x860));
  FUN_100db26c(uVar6);
  lVar7 = FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x8a0));
  if (3 < (int)lVar7) {
    do {
      FUN_10003138(uVar6,lVar7);
      sVar10 = (short)lVar7 + -1;
      lVar7 = (long long)sVar10;
    } while (3 < sVar10);
  }
  FUN_100db26c(*piVar4);
  sVar10 = FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0xa8));
  if (sVar10 != 0) {
    FUN_10003378(uVar6,(unsigned long long)*(unsigned int *)(local_44 + -0x144c) + 0x140);
    sVar11 = 1;
    if (0 < sVar10) {
      do {
        lVar7 = FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0xe0),sVar11);
        iVar5 = local_44;
        FUN_100db26c();
        FUN_10003378(uVar6,(unsigned long long)*(unsigned int *)(iVar5 + -0x144c) + 0x144);
        uVar8 = FUN_100b1c84(lVar7 + 4);
        FUN_10001a40(uVar6,sVar11 + 4,uVar8);
        sVar11 = sVar11 + 1;
      } while (sVar11 <= sVar10);
    }
  }
  iVar5 = *piVar3;
  if (iVar5 < 1) {
    sVar10 = 1 - (short)*piVar3;
  }
  else {
    sVar10 = (short)iVar5 + 4;
  }
  if (*piVar2 != 0) {
    uVar1 = *(unsigned int *)(local_44 + -0x144c);
    FUN_10003378(uVar6,(unsigned long long)uVar1 + 0x14c);
    FUN_10003378(uVar6,(unsigned long long)uVar1 + 0x150);
    sVar10 = FUN_10002bb0(uVar6);
    uVar8 = FUN_100b1c84(piVar2 + 1);
    FUN_10001a40(uVar6,sVar10,uVar8);
  }
  uVar6 = FUN_10002bb0(uVar6);
  FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x7d8),sVar10,1,uVar6,1);
  FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x828),sVar10,1,uVar6,1);
  return;
}

/* Address: 0x1008a388 Size: 2316 bytes */
void FUN_1008a388(int param_1,long long param_2,int *param_3)

{
  int iVar1;
  char *puVar2;
  int *ppuVar3;
  int iVar6;
  int *piVar7;
  long long uVar4;
  char uVar12;
  int *piVar8;
  long long lVar5;
  int *puVar9;
  int *piVar10;
  short sVar11;
  unsigned long long uVar13;
  short sVar14;
  unsigned int uVar15;
  int iVar16;
  
  piVar7 = piRam1011735c;
  puVar2 = puRam1011648c;
  ppuVar3 = 0 /* TVect base */;
  piVar8 = *(int **)(param_1 + 8);
  iVar6 = *(int *)(*piRam1011734c + 0x88);
  iVar16 = param_3[6];
  if (iVar16 == 0x69636f36) goto LAB_1008a7b0;
  if (0x69636f36 < iVar16) {
    if (iVar16 == 0x726f6c36) goto LAB_1008a69c;
    if (0x726f6c36 < iVar16) {
      if (iVar16 != 0x73696432) {
        if (iVar16 < 0x73696433) {
          if (iVar16 == 0x73656c65) {
            FUN_1005b938(piVar8);
            return;
          }
          if (iVar16 < 0x73656c66) {
            if ((iVar16 == 0x726f6c37) || (iVar16 == 0x726f6c38)) goto LAB_1008a69c;
          }
          else if ((iVar16 == 0x73696430) || (iVar16 == 0x73696431)) goto LAB_1008aae4;
          goto LAB_1008ac70;
        }
        if (iVar16 != 0x73696435) {
          if (iVar16 < 0x73696436) {
            if ((iVar16 == 0x73696433) || (iVar16 == 0x73696434)) goto LAB_1008aae4;
          }
          else if ((iVar16 == 0x73696436) || (iVar16 == 0x73696437)) goto LAB_1008aae4;
          goto LAB_1008ac70;
        }
      }
LAB_1008aae4:
      uVar15 = 0x73696430;
      do {
        *(unsigned short *)(uVar15 * 2 + *piVar7 + 0x192d3870) = (unsigned short)(param_3[6] != uVar15);
        uVar15 = uVar15 + 1;
      } while (uVar15 < 0x73696438);
      *puVar2 = 1;
      return;
    }
    if (iVar16 == 0x706f7075) {
      sVar11 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x878));
      FUN_1005abf4(sVar11 + -1,piVar8);
      return;
    }
    if (iVar16 < 0x706f7076) {
      if (iVar16 == 0x69636f38) goto LAB_1008a7b0;
      if (iVar16 < 0x69636f39) {
        if (iVar16 == 0x69636f37) goto LAB_1008a7b0;
      }
      else {
        if (iVar16 == 0x6d61696c) {
          piVar7 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x61646472);
          if (piVar7 != (int *)0x0) {
            iVar16 = *piVar7;
            iVar1 = *param_3;
            lVar5 = FUN_10117884((int)param_3 + (int)*(short *)(iVar1 + 0x848),iVar1,
                                 *(int *)(iVar1 + 0x84c));
            FUN_10117884((int)piVar7 + (int)*(short *)(iVar16 + 0x738),lVar5 == 0,1);
          }
          piVar8 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x676f2020);
          if (piVar8 != (int *)0x0) {
            iVar16 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
            if ((iVar16 == 0) || (iVar16 = FUN_1007f1d4(iVar6), iVar16 != 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x738),uVar4,1);
          }
          uVar12 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(char *)(iVar6 + 0x16e) = uVar12;
          return;
        }
        if (iVar16 == 0x6d6f7265) goto LAB_1008ab88;
      }
    }
    else {
      if (iVar16 == 0x726f6c33) {
LAB_1008a69c:
        FUN_10059b7c((short)param_3[6] + -0x6c31,piVar8);
        piVar8 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x676f2020);
        if (piVar8 != (int *)0x0) {
          if ((*(char *)(iVar6 + 0x16e) == '\0') || (iVar6 = FUN_1007f1d4(iVar6), iVar6 != 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x738),uVar4,1);
        }
        *puVar2 = 1;
        return;
      }
      if (iVar16 < 0x726f6c34) {
        if ((iVar16 == 0x726f6c31) || (iVar16 == 0x726f6c32)) goto LAB_1008a69c;
      }
      else if ((iVar16 == 0x726f6c34) || (iVar16 == 0x726f6c35)) goto LAB_1008a69c;
    }
    goto LAB_1008ac70;
  }
  if (iVar16 == 0x636f6d31) {
LAB_1008ab3c:
    iVar6 = 0;
    do {
      *(short *)(*piVar7 + iVar6 * 2 + 0xc0) = (short)param_3[6] + -0x6d30;
      sVar11 = (short)iVar6 + 1;
      iVar6 = (int)sVar11;
    } while (sVar11 < 8);
    FUN_100584c8(piVar8);
    *puVar2 = 1;
    return;
  }
  if (iVar16 < 0x636f6d32) {
    if (iVar16 != 0x63686134) {
      if (iVar16 < 0x63686135) {
        if (iVar16 != 0x63686131) {
          if (iVar16 < 0x63686132) {
            if (iVar16 == 0x61646472) {
              FUN_1007f234(iVar6);
              piVar8 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x676f2020
                                          );
              if (piVar8 == (int *)0x0) {
                return;
              }
              iVar16 = *piVar8;
              lVar5 = FUN_1007f1d4(iVar6);
              FUN_10117884((int)piVar8 + (int)*(short *)(iVar16 + 0x738),lVar5 == 0,1);
              return;
            }
          }
          else if ((iVar16 == 0x63686132) || (iVar16 == 0x63686133)) goto LAB_1008a740;
          goto LAB_1008ac70;
        }
      }
      else if (iVar16 != 0x63686137) {
        if (iVar16 < 0x63686138) {
          if ((iVar16 != 0x63686135) && (iVar16 != 0x63686136)) goto LAB_1008ac70;
        }
        else if (iVar16 != 0x63686138) {
          if (iVar16 == 0x636f6d30) goto LAB_1008ab3c;
          goto LAB_1008ac70;
        }
      }
    }
LAB_1008a740:
    iVar16 = (int)(short)((short)param_3[6] + -0x6131);
    iVar6 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
    if (iVar6 == 0) {
      *(short *)(*piVar7 + iVar16 * 2 + 0xe0) = 0;
      FUN_10057e5c(iVar16,0,piVar8);
    }
    else {
      FUN_1005b62c(iVar16,piVar8);
    }
    return;
  }
  if (iVar16 == 0x67726561) {
    uVar4 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
    FUN_1005aac8(uVar4,piVar8);
    *puVar2 = 1;
    return;
  }
  if (iVar16 < 0x67726562) {
    if (iVar16 == 0x65646974) {
      FUN_1005a2b0(piVar8);
      FUN_1008a100(param_1);
      piVar7 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x706f7075);
      FUN_100db26c();
      sVar11 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x878));
      FUN_1005abf4(sVar11 + -1,piVar8);
      *(char *)(piVar7 + 0x76) = 0;
      return;
    }
    if (iVar16 < 0x65646975) {
      if (iVar16 == 0x636f6d32) goto LAB_1008ab3c;
    }
    else {
      if (iVar16 == 0x66657765) {
LAB_1008ab88:
        if ((param_3[6] == 0x6d6f7265) &&
           (piVar10 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x73696465)
           , piVar10 != (int *)0x0)) {
          sVar11 = FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c0));
          iVar16 = 0;
          do {
            *(unsigned short *)(*piVar7 + iVar16 * 2 + 0xd0) = (unsigned short)(iVar16 != (short)(sVar11 + -0x6430))
            ;
            sVar14 = (short)iVar16 + 1;
            iVar16 = (int)sVar14;
          } while (sVar14 < 8);
        }
        FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x328));
        uVar13 = (unsigned long long)(unsigned int)param_3[6];
        FUN_1007ba3c(iVar6,0,(0x66657764 < uVar13 &&
                             (unsigned long long)(0x66657765 < uVar13) <= uVar13 - 0x66657765) -
                             (0x66657765 < uVar13));
        return;
      }
      if (iVar16 == 0x676f2020) {
        puVar9 = (int *)FUN_100f56e4(0x34);
        if (puVar9 != (int *)0x0) {
          FUN_100c3d2c(puVar9);
          *puVar9 = (*(int*)((char*)ppuVar3 - 0x504));
          puVar9[0xc] = 0;
        }
        FUN_100c3df8(puVar9,3000,piVar8,0,0,0);
        puVar9[0xc] = 3000;
        FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x200),puVar9);
        return;
      }
    }
    goto LAB_1008ac70;
  }
  if (iVar16 != 0x69636f33) {
    if (iVar16 < 0x69636f34) {
      if ((iVar16 == 0x69636f31) || (iVar16 == 0x69636f32)) goto LAB_1008a7b0;
    }
    else if ((iVar16 == 0x69636f34) || (iVar16 == 0x69636f35)) goto LAB_1008a7b0;
LAB_1008ac70:
    FUN_100d5934(param_1,param_2,param_3);
    return;
  }
LAB_1008a7b0:
  FUN_1005b62c((short)param_3[6] + -0x6f31,piVar8);
  return;
}

/* Address: 0x1008ac94 Size: 148 bytes */
void FUN_1008ac94(int param_1)

{
  int *piVar1;
  int local_2c;
  
  FUN_10078a2c(param_1);
  piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                               (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x6d61696c);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,
                 **(char **)(local_2c + -0x16d8) == '\0',0);
  }
  return;
}

/* Address: 0x1008ad28 Size: 60 bytes */
void FUN_1008ad28(int param_1,int param_2)

{
  if (param_2 == 3000) {
    FUN_1005a6ac(*(int *)(param_1 + 8));
  }
  else {
    FUN_100bff8c();
  }
  return;
}

/* Address: 0x1008adf4 Size: 40 bytes */
void FUN_1008adf4(void)

{
  FUN_1008ad74(0);
  return;
}

/* Address: 0x1008ae1c Size: 1708 bytes */
void FUN_1008ae1c(int param_1,int param_2)

{
  int bVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  short sVar11;
  unsigned int uVar12;
  long long lVar13;
  unsigned long long uVar14;
  int local_154;
  char auStack_130 [304];
  
  puVar3 = puRam1011735c;
  piVar10 = *(int **)(param_1 + 8);
  *(short *)(param_1 + 0x40) =
       *(short *)(*puRam1011735c + *(short *)(*puRam1011735c + 0x110) * 2 + 0xd0);
  uVar14 = 0;
  do {
    piVar4 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),
                                 uVar14 + 0x636c7531);
    if (piVar4 != (int *)0x0) {
      lVar13 = ((uVar14 & 0x3fffffff) * 4 + uVar14 & 0x3fffffff) * 4;
      FUN_100b19f4(auStack_130,(unsigned long long)*puVar3 + lVar13);
      FUN_10117884((int)*(short *)(*piVar4 + 0x7b0) + (int)piVar4,auStack_130,0);
      piVar5 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                   uVar14 + 0x69636f31);
      piVar6 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                   uVar14 + 0x68756d31);
      piVar7 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                   uVar14 + 0x656e6831);
      piVar8 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                   uVar14 + 0x6f627331);
      if (*(short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0x138) == 0) {
        iVar9 = FUN_100001e0(lVar13 + (unsigned long long)*puVar3,
                             (unsigned long long)*(unsigned int *)(local_154 + -0x144c) + 0x158);
        if ((iVar9 != 0) &&
           (piVar4 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                         uVar14 + 0x64656131), piVar4 != (int *)0x0)) {
          FUN_10117884((int)*(short *)(*piVar4 + 0x660) + (int)piVar4,1,0);
        }
        if (piVar5 != (int *)0x0) {
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x660),0,0);
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd8),0);
        }
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x660),0,0);
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xd8),0);
        }
        if (piVar7 != (int *)0x0) {
          FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x660),0,0);
          FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0xd8),0);
        }
        if (piVar8 != (int *)0x0) {
          FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x660),0,0);
          FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0xd8),0);
        }
      }
      else {
        if (*(short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0xd0) == 0) {
          sVar11 = 4;
        }
        else {
          sVar11 = *(short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0xc0);
        }
        iVar2 = (int)uVar14;
        iVar9 = *puVar3 + iVar2 * 2;
        if ((*(short *)(iVar9 + 0xd0) == 1) && (*(short *)(iVar9 + 0xe0) != 0)) {
          sVar11 = *(short *)(iVar9 + 0xc0) + 7;
        }
        if (sVar11 == 4) {
          if ((iVar2 == 0) ||
             (uVar12 = iVar2 - 1,
             (iVar2 >> 1) + (unsigned int)(iVar2 < 0 && (uVar14 & 1) != 0) !=
             ((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            sVar11 = 5;
          }
          else {
            sVar11 = 4;
          }
        }
        if (*(short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0x138) == 0) {
          sVar11 = 6;
        }
        if (piVar5 != (int *)0x0) {
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7a8),sVar11 + 0xbcc,0);
        }
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x850),
                       *(short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0xd0) == 0,0);
        }
        if (piVar7 != (int *)0x0) {
          FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x850),
                       *(unsigned short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0xf0) & 0xff,0);
        }
        if (piVar8 != (int *)0x0) {
          FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x850),
                       *(unsigned short *)(*puVar3 + (int)((uVar14 & 0xffffffff) << 1) + 0x148) & 0xff,0);
        }
      }
    }
    sVar11 = (short)uVar14 + 1;
    uVar14 = (unsigned long long)sVar11;
  } while (sVar11 < 8);
  piVar4 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x61646472);
  if (piVar4 != (int *)0x0) {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),*(char *)(param_2 + 0x16e) == '\0',0
                );
  }
  if ((*(char *)(param_2 + 0x16e) != '\0') &&
     (piVar4 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x646f6e65),
     piVar4 != (int *)0x0)) {
    iVar9 = *piVar4;
    lVar13 = FUN_1007f1d4(param_2);
    FUN_10117884((int)piVar4 + (int)*(short *)(iVar9 + 0x738),lVar13 == 0,1);
  }
  iVar9 = FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x706d6163);
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x68696464);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x850),
                   **(char **)(local_154 + -0x16ac),0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),0,0);
    }
    piVar10 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x73706565);
    if (piVar10 != (int *)0x0) {
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x850),
                   **(char **)(local_154 + -0x16a8),0);
      FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x738),0,0);
    }
  }
  return;
}

/* Address: 0x1008b4c8 Size: 828 bytes */
void FUN_1008b4c8(int param_1,long long param_2,int *param_3,long long param_4)

{
  int iVar1;
  int bVar2;
  int *piVar3;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long long lVar4;
  short sVar8;
  short sVar9;
  unsigned int uVar10;
  unsigned long long uVar11;
  
  piVar3 = piRam1011735c;
  piVar7 = *(int **)(param_1 + 8);
  iVar1 = piVar7[10];
  piVar5 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x646f6e65);
  iVar6 = param_3[6];
  if (iVar6 == 0x61646472) {
    FUN_1007f234(iVar1);
    if (piVar5 != (int *)0x0) {
      iVar6 = *piVar5;
      lVar4 = FUN_1007f1d4(iVar1);
      FUN_10117884((int)piVar5 + (int)*(short *)(iVar6 + 0x738),lVar4 == 0,1);
    }
  }
  else if (((((iVar6 == 0x68756d31) || (iVar6 == 0x68756d32)) || (iVar6 == 0x68756d33)) ||
           ((iVar6 == 0x68756d34 || (iVar6 == 0x68756d35)))) ||
          ((iVar6 == 0x68756d36 || ((iVar6 == 0x68756d37 || (iVar6 == 0x68756d38)))))) {
    iVar6 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
    *(unsigned short *)(param_3[6] * 2 + *piVar3 + 0x2f15266e) = (unsigned short)(iVar6 == 0);
    sVar9 = (short)param_3[6] + -0x6d31;
    uVar11 = (unsigned long long)sVar9;
    piVar7 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),uVar11 + 0x69636f31)
    ;
    if (*(short *)(*piVar3 + (int)((uVar11 & 0xffffffff) << 1) + 0xd0) == 0) {
      sVar8 = 4;
    }
    else {
      sVar8 = *(short *)(*piVar3 + (int)((uVar11 & 0xffffffff) << 1) + 0xc0);
    }
    iVar6 = *piVar3 + sVar9 * 2;
    if ((*(short *)(iVar6 + 0xd0) == 1) && (*(short *)(iVar6 + 0xe0) != 0)) {
      sVar8 = *(short *)(iVar6 + 0xc0) + 7;
    }
    if (sVar8 == 4) {
      if ((sVar9 == 0) ||
         (uVar10 = (int)sVar9 - 1,
         ((int)sVar9 >> 1) + (unsigned int)(sVar9 < 0 && ((int)sVar9 & 1U) != 0) !=
         ((int)uVar10 >> 1) + (unsigned int)((int)uVar10 < 0 && (uVar10 & 1) != 0))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        sVar8 = 5;
      }
      else {
        sVar8 = 4;
      }
    }
    if (*(short *)(*piVar3 + (int)((uVar11 & 0xffffffff) << 1) + 0x138) == 0) {
      sVar8 = 6;
    }
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7a8),sVar8 + 0xbcc,1);
    }
    if ((piVar5 != (int *)0x0) && (*(char *)(iVar1 + 0x16e) != '\0')) {
      iVar6 = *piVar5;
      lVar4 = FUN_1007f1d4(iVar1);
      FUN_10117884((int)piVar5 + (int)*(short *)(iVar6 + 0x738),lVar4 == 0,1);
    }
  }
  else {
    FUN_100d5934(param_1,param_2,param_3,param_4);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1008b804() { }






















































































































/* Address: 0x1008bc5c Size: 84 bytes */
int * FUN_1008bc5c(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100d8824(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x644));
  }
  return puVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1008bcb0() { }











/* Address: 0x1008bd08 Size: 176 bytes */
void FUN_1008bd08(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char auStack_138 [4];
  char local_134;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      local_134 = 0;
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),auStack_138,0x11a);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),auStack_138);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return;
}

/* Address: 0x1008bdb8 Size: 272 bytes */
void FUN_1008bdb8(int *param_1,int *param_2)

{
  int *piVar1;
  long long uVar2;
  long long uVar3;
  long long uVar4;
  short sVar5;
  
  piVar1 = piRam10116488;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),uVar2);
  uVar3 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0xe8),1);
  sVar5 = 1;
  if (0 < (int)uVar2) {
    do {
      uVar4 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0xe0),sVar5);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),uVar4,0x11c);
      sVar5 = sVar5 + 1;
    } while ((int)sVar5 <= (int)uVar2);
  }
  FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0xe8),uVar3);
  return;
}

/* Address: 0x1008bf5c Size: 40 bytes */
void FUN_1008bf5c(void)

{
  FUN_1008bed8(0);
  return;
}

/* Address: 0x1008bf84 Size: 568 bytes */
void FUN_1008bf84(int param_1)

{
  int *piVar1;
  int bVar2;
  unsigned long long uVar3;
  int *piVar7;
  short sVar10;
  long long lVar4;
  long long uVar5;
  long long uVar6;
  int iVar8;
  int *piVar9;
  short sVar11;
  long long lVar12;
  unsigned int local_24c;
  char local_228 [256];
  char auStack_128 [296];
  
  piVar9 = piRam10116488;
  if (*(int *)(param_1 + 0x24) != 0x6f6b2020) {
    return;
  }
  piVar7 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                               (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x6e616d65);
  if (piVar7 != (int *)0x0) {
    piVar1 = (int *)*piVar9;
    sVar10 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8));
    uVar3 = (unsigned long long)local_24c;
    lVar12 = 1;
    do {
      FUN_100b19f4(auStack_128,(unsigned long long)*(unsigned int *)((int)uVar3 + -0x144c) + 0x170);
      if (1 < (int)lVar12) {
        FUN_100b1fb4(auStack_128,0x20);
        local_228[0] = 0;
        FUN_10000ac8(lVar12,local_228);
        uVar3 = (unsigned long long)local_24c;
        FUN_100b1f6c(auStack_128,local_228);
      }
      bVar2 = true;
      sVar11 = 1;
      if (0 < sVar10) {
        do {
          piVar1 = (int *)*piVar9;
          lVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0),sVar11);
          uVar5 = FUN_100b1c84(auStack_128);
          uVar6 = FUN_100b1c84(lVar4 + 4);
          iVar8 = FUN_10001998(uVar6,uVar5,0,0);
          uVar3 = (unsigned long long)local_24c;
          if (iVar8 != 0) {
            bVar2 = false;
            break;
          }
          sVar11 = sVar11 + 1;
        } while (sVar11 <= sVar10);
      }
      if (bVar2) goto code_r0x1008c0fc;
      lVar12 = (long long)(short)((short)lVar12 + 1);
    } while( true );
  }
LAB_1008c190:
  FUN_10078c94(param_1,0x6e657720,1);
  return;
code_r0x1008c0fc:
  FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),auStack_128,1);
  piVar9 = (int *)FUN_10117884(**(int **)(local_24c - 0xedc) +
                               (int)*(short *)(*(int *)**(int **)(local_24c - 0xedc) + 0x340));
  if ((piVar7 != piVar9) &&
     (iVar8 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x180)), iVar8 != 0)) {
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 400),1);
  }
  goto LAB_1008c190;
}

/* Address: 0x1008c1bc Size: 1240 bytes */
void FUN_1008c1bc(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar7;
  long long uVar4;
  int iVar8;
  short sVar11;
  long long lVar5;
  long long uVar6;
  int *piVar9;
  int *piVar10;
  short sVar12;
  int iVar13;
  int local_3ac;
  char auStack_388 [312];
  int local_250;
  char local_24c [256];
  short local_14c [14];
  unsigned char local_130 [304];
  
  pcVar3 = pcRam101164a8;
  piVar2 = piRam10116488;
  piVar10 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar10);
  piVar7 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x6e616d65);
  FUN_100db26c(piVar7);
  local_130[0] = 0;
  FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7a0),local_130);
  iVar8 = local_3ac;
  uVar4 = FUN_100b1c84(local_130);
  iVar8 = FUN_10001998((unsigned long long)*(unsigned int *)(iVar8 + -0x144c) + 0x178,uVar4,0,0);
  iVar13 = -1;
  if (iVar8 == 0) {
    iVar8 = local_3ac;
    uVar4 = FUN_100b1c84(local_130);
    iVar8 = FUN_10001998((unsigned long long)*(unsigned int *)(iVar8 + -0x144c) + 0x184,uVar4,0,0);
    if (iVar8 == 0) {
      iVar8 = local_3ac;
      uVar4 = FUN_100b1c84(local_130);
      iVar8 = FUN_10001998((unsigned long long)*(unsigned int *)(iVar8 + -0x144c) + 0x194,uVar4,0,0);
      if (iVar8 != 0) {
        iVar13 = 2;
      }
    }
    else {
      iVar13 = 1;
    }
  }
  else {
    iVar13 = 0;
  }
  if (iVar13 == -1) {
    sVar11 = FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0xa8));
    sVar12 = 1;
    if (0 < sVar11) {
      do {
        lVar5 = FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0xe0),sVar12);
        uVar4 = FUN_100b1c84(local_130);
        uVar6 = FUN_100b1c84(lVar5 + 4);
        iVar8 = FUN_10001998(uVar6,uVar4,0,0);
        if (iVar8 != 0) {
          *pcVar3 = '\0';
          uVar4 = FUN_100b1b08(local_130);
          FUN_10050ffc((unsigned long long)*(unsigned int *)(local_3ac + -0x144c) + 0x1d4,
                       (unsigned long long)*(unsigned int *)(local_3ac + -0x144c) + 0x1e0,
                       (unsigned long long)*(unsigned int *)(local_3ac + -0x144c) + 0x1f8,uVar4,0,
                       *(int *)(local_3ac + -0x13f4),0);
          if (*pcVar3 == '\0') {
            return;
          }
          FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 200),sVar12,1);
          piVar9 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x4c697374);
          if (piVar9 != (int *)0x0) {
            FUN_10117884((int)*(short *)(*piVar9 + 0x8b8) + (int)piVar9,1);
          }
          break;
        }
        sVar12 = sVar12 + 1;
      } while (sVar12 <= sVar11);
    }
    iVar8 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7f8));
    if (iVar8 != 0) {
      local_24c[0] = 0;
      iVar8 = 0;
      do {
        local_14c[iVar8] = *(short *)(param_1 + iVar8 * 2 + 0x40);
        sVar11 = (short)iVar8 + 1;
        iVar8 = (int)sVar11;
      } while (sVar11 < 0xb);
      FUN_100012d8(local_130,local_24c,(unsigned long long)local_130[0] + 1);
      local_250 = FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0xa8));
      local_250 = local_250 + 1;
      FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x108),&local_250);
      sVar11 = FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0xa8));
      sVar12 = 1;
      if (0 < sVar11) {
        do {
          piVar7 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0xe0),sVar12);
          if (*piVar7 == local_250) break;
          sVar12 = sVar12 + 1;
        } while (sVar12 <= sVar11);
      }
      piVar10 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x4c697374);
      if (piVar10 != (int *)0x0) {
        *(short *)(piVar10 + 0x2e) = 0;
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x180));
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x8e0),1);
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x8f0),sVar12 + 3,0,1,1);
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x4d0));
      }
      FUN_10078c94(param_1,0x6f6b2020,1);
    }
  }
  else {
    uVar4 = FUN_100b1b08(local_130);
    uVar1 = *(unsigned int *)(local_3ac + -0x144c);
    FUN_10001dd0(auStack_388,(unsigned long long)uVar1 + 0x1a0,uVar4);
    FUN_1003ced4(auStack_388,(unsigned long long)uVar1 + 0x1bc);
  }
  return;
}

/* Address: 0x1008c6bc Size: 572 bytes */
void FUN_1008c6bc(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar4;
  long long uVar3;
  short sVar5;
  short sVar6;
  unsigned long long uVar7;
  int local_284;
  char auStack_260 [312];
  char local_128 [256];
  short local_28;
  
  pcVar1 = pcRam101164a8;
  piVar4 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar4);
  piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x4c697374);
  FUN_100db26c();
  local_128[0] = 0;
  iVar2 = *piVar4;
  uVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(iVar2 + 0x908),0,iVar2,
                       *(int *)(iVar2 + 0x90c));
  FUN_10117884((int)piVar4 + (int)*(short *)(iVar2 + 0x890),uVar3,local_128);
  iVar2 = local_284;
  uVar3 = FUN_100b1b08(local_128);
  uVar7 = (unsigned long long)*(unsigned int *)(iVar2 + -0x144c);
  FUN_10001dd0(auStack_260,uVar7 + 600,uVar3);
  *pcVar1 = '\0';
  FUN_10050ffc(uVar7 + 0x25c,uVar7 + 0x26c,uVar7 + 0x284,auStack_260,0,
               *(int *)(local_284 + -0x13f4),0);
  if (*pcVar1 != '\0') {
    piVar4 = *(int **)(param_1 + 8);
    FUN_100db26c();
    piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),0x4c697374);
    FUN_100db26c(piVar4);
    sVar5 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x908));
    FUN_10117884(**(int **)(local_284 + -0x1418) +
                 (int)*(short *)(*(int *)**(int **)(local_284 + -0x1418) + 200),sVar5 + -3,1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x8b8),1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x4d0));
    sVar6 = *(short *)(piVar4 + 0x20);
    if (sVar5 < *(short *)(piVar4 + 0x20)) {
      sVar6 = sVar5;
    }
    local_28 = sVar5;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x8f0),sVar6,0,1,1);
  }
  return;
}

/* Address: 0x1008c8f8 Size: 988 bytes */
void FUN_1008c8f8(int param_1,long long param_2,int *param_3,long long param_4)

{
  int iVar1;
  short uVar3;
  long long lVar2;
  short sVar4;
  
  iVar1 = param_3[6];
  if (iVar1 == 0x6e657720) {
    FUN_1008c1bc(param_1);
    return;
  }
  if (iVar1 < 0x6e657721) {
    if (iVar1 == 0x696e746e) {
      uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
      *(short *)(param_1 + 0x4e) = uVar3;
      FUN_1008bf84(param_1);
      return;
    }
    if (iVar1 < 0x696e746f) {
      if (iVar1 == 0x6469706c) {
        uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
        *(short *)(param_1 + 0x42) = uVar3;
        FUN_1008bf84(param_1);
        return;
      }
      if (iVar1 < 0x6469706d) {
        if (iVar1 == 0x64656c65) {
          FUN_1008c6bc(param_1);
          return;
        }
      }
      else if (iVar1 == 0x68696464) {
        uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
        *(short *)(param_1 + 0x46) = uVar3;
        FUN_1008bf84(param_1);
        return;
      }
    }
    else {
      if (iVar1 == 0x6e657531) {
LAB_1008ca64:
        *(short *)(param_1 + 0x40) = (short)param_3[6] + -0x7531;
        FUN_1008bf84(param_1);
        return;
      }
      if (iVar1 < 0x6e657532) {
        if (iVar1 == 0x6d696c69) {
          uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(short *)(param_1 + 0x52) = uVar3;
          FUN_1008bf84(param_1);
          return;
        }
      }
      else if ((iVar1 == 0x6e657532) || (iVar1 == 0x6e657533)) goto LAB_1008ca64;
    }
  }
  else {
    if (iVar1 == 0x72617a31) {
LAB_1008ca88:
      sVar4 = (short)param_3[6] + -0x7a31;
      *(short *)(param_1 + 0x4c) = sVar4;
      if (sVar4 == 2) {
        *(short *)(param_1 + 0x4c) = 0xf;
      }
      FUN_1008bf84(param_1);
      return;
    }
    if (iVar1 < 0x72617a32) {
      if (iVar1 == 0x71756573) {
        uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
        *(short *)(param_1 + 0x44) = uVar3;
        FUN_1008bf84(param_1);
        return;
      }
      if (iVar1 < 0x71756574) {
        if (((iVar1 == 0x6f6b2020) && (*(int *)(param_1 + 0x24) != 0x6f6b2020)) &&
           (FUN_1008c1bc(param_1), *(int *)(param_1 + 0x24) != 0x6f6b2020)) {
          return;
        }
      }
      else {
        if (iVar1 == 0x71756963) {
          uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(short *)(param_1 + 0x50) = uVar3;
          FUN_1008bf84(param_1);
          return;
        }
        if (iVar1 == 0x72616e64) {
          uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(short *)(param_1 + 0x54) = uVar3;
          FUN_1008bf84(param_1);
          return;
        }
      }
    }
    else {
      if (iVar1 == 0x72617a33) goto LAB_1008ca88;
      if (iVar1 < 0x72617a34) {
        if (iVar1 == 0x72617a32) goto LAB_1008ca88;
      }
      else {
        if (iVar1 == 0x76656e65) {
          uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(short *)(param_1 + 0x48) = uVar3;
          FUN_1008bf84(param_1);
          return;
        }
        if (iVar1 == 0x7670726f) {
          lVar2 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(unsigned short *)(param_1 + 0x4a) = (unsigned short)(lVar2 == 0);
          FUN_1008bf84(param_1);
          return;
        }
      }
    }
  }
  FUN_100d5934(param_1,param_2,param_3,param_4);
  return;
}

/* Address: 0x1008ccd4 Size: 340 bytes */
void FUN_1008ccd4(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  short sVar8;
  int uVar7;
  
  piVar4 = piRam10116488;
  piVar5 = piRam10116484;
  piVar1 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar1);
  piVar6 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x4c697374);
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar6 + 0x8b0) + (int)piVar6,*(short *)(piVar6 + 0x20));
    iVar2 = *piVar6;
    piVar3 = (int *)*piVar4;
    sVar8 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xa8));
    FUN_10117884((int)*(short *)(iVar2 + 0x8d8) + (int)piVar6,sVar8 + 3);
    FUN_100f4f94(piVar6,piVar1);
    iVar2 = *piVar5;
    if (iVar2 < 1) {
      sVar8 = 1 - (short)*piVar5;
    }
    else {
      sVar8 = (short)iVar2 + 3;
    }
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x8f0),sVar8,0,1,1);
  }
  piVar4 = (int *)*piVar4;
  uVar7 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x88));
  *(int *)(param_1 + 0x58) = uVar7;
  return;
}

/* Address: 0x1008ce28 Size: 1420 bytes */
void FUN_1008ce28(int param_1)

{
  int *piVar2;
  unsigned long long uVar1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  long long lVar7;
  int iVar8;
  int iVar9;
  char local_120 [288];
  
  piVar4 = piRam10116488;
  iVar3 = iRam10115f84;
  piVar5 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar5);
  piVar2 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x4c697374);
  FUN_100db26c(piVar2);
  uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x908));
  iVar9 = (int)uVar1;
  if (iVar9 != 0) {
    if (iVar9 < 4) {
      iVar8 = 0;
      do {
        *(short *)(iVar8 * 2 + param_1 + 0x40) =
             *(short *)(iVar9 * 0x16 + iVar8 * 2 + iVar3 + -0x16);
        sVar6 = (short)iVar8 + 1;
        iVar8 = (int)sVar6;
      } while (sVar6 < 0xb);
    }
    else {
      iVar3 = FUN_10117884(*piVar4 + (int)*(short *)(*(int *)*piVar4 + 0xe0),uVar1 - 3);
      iVar9 = 0;
      do {
        *(short *)(iVar9 * 2 + param_1 + 0x40) = *(short *)(iVar3 + iVar9 * 2 + 0x104);
        sVar6 = (short)iVar9 + 1;
        iVar9 = (int)sVar6;
      } while (sVar6 < 0xb);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x6e616d65);
    if (piVar4 != (int *)0x0) {
      local_120[0] = 0;
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x890),uVar1,local_120);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),local_120,1);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7e0),0,0x7fff,1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x6e657574);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),
                   (long long)*(short *)(param_1 + 0x40) + 0x6e657531);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x72617a69);
    if (piVar4 != (int *)0x0) {
      if (*(short *)(param_1 + 0x4c) == 0xf) {
        lVar7 = 2;
      }
      else {
        lVar7 = (long long)*(short *)(param_1 + 0x4c);
      }
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),lVar7 + 0x72617a31);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x6469706c);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x42),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x71756573);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x44),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x68696464);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x46),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x76656e65);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x48),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x7670726f);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x4a) == 0,1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x696e746e);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x4e),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x71756963);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x50),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x6d696c69);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x52),1);
    }
    piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x72616e64);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 2000),*(short *)(param_1 + 0x54),1);
    }
  }
  piVar5 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x64656c65);
  if (piVar5 != (int *)0x0) {
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x738),
                 (unsigned long long)(uVar1 < 4) - ((long long)(uVar1 << 0x20) >> 0x3f),1);
  }
  return;
}

/* Address: 0x1008d3b4 Size: 128 bytes */
void FUN_1008d3b4(long long param_1,long long param_2,long long param_3,long long param_4,
                 long long param_5)

{
  if ((int)param_2 == 8) {
    FUN_1008ce28(param_1);
    FUN_10078c94(param_1,0x6f6b2020,1);
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* Address: 0x1008d44c Size: 104 bytes */
int * FUN_1008d44c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(200),
     param_1 != (int *)0x0)) {
    FUN_1010f054(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x4fb));
  }
  return param_1;
}

/* Address: 0x1008d4b4 Size: 40 bytes */
void FUN_1008d4b4(void)

{
  FUN_1008d44c(0);
  return;
}

/* Address: 0x1008d4dc Size: 140 bytes */
void FUN_1008d4dc(int *param_1,long long param_2)

{
  long long uVar1;
  int iVar2;
  
  uVar1 = FUN_100ff0a0();
  iVar2 = FUN_100f5278(param_2,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
    FUN_10078c94(uVar1,0x6e657720,1);
  }
  FUN_100daac8(param_1,param_2);
  return;
}

/* Address: 0x1008d570 Size: 112 bytes */
int * FUN_1008d570(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xbc),
     param_1 != (int *)0x0)) {
    FUN_100e1f44(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x4f9));
    *(short *)(param_1 + 0x2e) = 0;
  }
  return param_1;
}

/* Address: 0x1008d5e0 Size: 40 bytes */
void FUN_1008d5e0(void)

{
  FUN_1008d570(0);
  return;
}

/* Address: 0x1008d608 Size: 216 bytes */
void FUN_1008d608(long long param_1,short param_2,long long param_3)

{
  int iVar1;
  
  if (param_2 == 1) {
    FUN_100b1d90(param_3,(unsigned long long)uRam10116454 + 0x2d8);
  }
  else if (param_2 == 2) {
    FUN_100b1d90(param_3,(unsigned long long)uRam10116454 + 0x2e4);
  }
  else if (param_2 == 3) {
    FUN_100b1d90(param_3,(unsigned long long)uRam10116454 + 0x2f4);
  }
  else {
    iVar1 = FUN_10117884(*piRam10116488 + (int)*(short *)(*(int *)*piRam10116488 + 0xe0),
                         (long long)param_2 + -3);
    FUN_100012d8(iVar1 + 4,param_3,(unsigned long long)*(unsigned char *)(iVar1 + 4) + 1);
  }
  return;
}

/* Address: 0x1008d6e0 Size: 92 bytes */
void FUN_1008d6e0(int *param_1,long long param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}

/* Address: 0x1008d73c Size: 128 bytes */
int FUN_1008d73c(int *param_1)

{
  int iVar1;
  short uVar2;
  
  iVar1 = FUN_100d96b0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x908) + (int)param_1);
    *(short *)(param_1 + 0x2e) = uVar2;
    FUN_10117884((int)*(short *)(*param_1 + 0x840) + (int)param_1,1);
  }
  return iVar1 != 0;
}

/* Address: 0x1008d7bc Size: 396 bytes */
void FUN_1008d7bc(int *param_1,int *param_2)

{
  unsigned short uVar1;
  int iVar3;
  long long lVar2;
  
  uVar1 = *(unsigned short *)(param_2 + 9) & 0xff;
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if (((((iVar3 == 0) &&
        (iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar3 == 0)) &&
       (iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2), iVar3 == 0)) &&
      ((iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xe8) + (int)param_2), iVar3 == 0 &&
       (0x1b < uVar1)))) && (uVar1 < 0x20)) {
    lVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x908));
    if ((uVar1 == 0x1c) || (uVar1 == 0x1e)) {
      lVar2 = (long long)(short)((short)lVar2 + -1);
    }
    else if ((uVar1 == 0x1d) || (uVar1 == 0x1f)) {
      lVar2 = (long long)(short)((short)lVar2 + 1);
    }
    if (((int)lVar2 == 0) || ((int)*(short *)(param_1 + 0x20) < (int)lVar2)) {
      FUN_100ecc68();
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),lVar2,0,1,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
    }
  }
  else {
    FUN_100da080(param_1,param_2);
  }
  return;
}

/* Address: 0x1008d948 Size: 132 bytes */
long long FUN_1008d948(int *param_1)

{
  int iVar2;
  long long uVar1;
  
  iVar2 = FUN_100d9608(param_1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x2e) == 0) {
    uVar1 = 1;
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x8f0) + (int)param_1,*(short *)(param_1 + 0x2e),0,1,1);
    uVar1 = 1;
  }
  return uVar1;
}

/* Address: 0x1008da5c Size: 40 bytes */
void FUN_1008da5c(void)

{
  FUN_1008d9dc(0);
  return;
}

/* Address: 0x1008da84 Size: 160 bytes */
void FUN_1008da84(int param_1,long long param_2,int *param_3,long long param_4,long long param_5)

{
  short sVar1;
  int local_3c;
  
  if ((int)param_2 == 8) {
    sVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x908));
    *(short *)(**(int **)(local_3c + -0x544) + **(short **)(local_3c + -0x13d8) * 2 + 0xe0) =
         sVar1 + -1;
    FUN_1005af24(*(int *)(param_1 + 8));
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* Address: 0x1008db24 Size: 136 bytes */
void FUN_1008db24(int param_1,long long param_2)

{
  int *piVar1;
  long long uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar1);
  uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x4c697374);
  if ((int)uVar2 != 0) {
    FUN_100f4f94(uVar2,piVar1);
  }
  FUN_10078a2c(param_1,param_2);
  return;
}

/* Address: 0x1008dc24 Size: 40 bytes */
void FUN_1008dc24(void)

{
  FUN_1008dbbc(0);
  return;
}

/* Address: 0x1008dc4c Size: 192 bytes */
void FUN_1008dc4c(int *param_1,short param_2,long long param_3)

{
  int iVar1;
  int iVar2;
  unsigned int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_100b1d90(param_3,((long long)*(short *)(param_2 * 2 + iRam10117728 + -2) & 0x7ffffffU) * 0x20 +
                       (unsigned long long)uRam10117758);
  local_20 = param_1[0x28];
  iStack_1c = param_1[0x29];
  iStack_18 = param_1[0x2a];
  FUN_100b1c84(param_3);
  iVar1 = FUN_100006f0();
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8c8));
  if (iVar2 + -2 < iVar1) {
    local_20 = local_20 | 0x2000;
  }
  FUN_100f0788(&local_20);
  return;
}

/* Address: 0x1008dd0c Size: 92 bytes */
void FUN_1008dd0c(int *param_1,long long param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}

/* Address: 0x1008dd78 Size: 92 bytes */
int * FUN_1008dd78(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xbc);
  if (puVar2 != (int *)0x0) {
    FUN_100e1f44(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x13d));
    puVar2[0x2e] = 0;
  }
  return puVar2;
}

/* Address: 0x1008ddd4 Size: 92 bytes */
void FUN_1008ddd4(int *param_1,long long param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}

/* Address: 0x1008de30 Size: 68 bytes */
void FUN_1008de30(int param_1)

{
  int uVar1;
  
  uVar1 = FUN_100f57c8(*(int *)(param_1 + 0xb8));
  *(int *)(param_1 + 0xb8) = uVar1;
  FUN_100e2f58(param_1);
  return;
}

/* Address: 0x1008de74 Size: 396 bytes */
void FUN_1008de74(int *param_1,int *param_2)

{
  unsigned short uVar1;
  int iVar3;
  long long lVar2;
  
  uVar1 = *(unsigned short *)(param_2 + 9) & 0xff;
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if (((((iVar3 == 0) &&
        (iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar3 == 0)) &&
       (iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2), iVar3 == 0)) &&
      ((iVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xe8) + (int)param_2), iVar3 == 0 &&
       (0x1b < uVar1)))) && (uVar1 < 0x20)) {
    lVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x908));
    if ((uVar1 == 0x1c) || (uVar1 == 0x1e)) {
      lVar2 = (long long)(short)((short)lVar2 + -1);
    }
    else if ((uVar1 == 0x1d) || (uVar1 == 0x1f)) {
      lVar2 = (long long)(short)((short)lVar2 + 1);
    }
    if (((int)lVar2 == 0) || ((int)*(short *)(param_1 + 0x20) < (int)lVar2)) {
      FUN_100ecc68();
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),lVar2,0,1,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
    }
  }
  else {
    FUN_100da080(param_1,param_2);
  }
  return;
}

/* Address: 0x1008e000 Size: 100 bytes */
void FUN_1008e000(int param_1,short param_2,long long param_3)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                       (int)*(short *)(**(int **)(param_1 + 0xb8) + 0xe0),param_2);
  FUN_100012d8(iVar1 + 6,param_3,(unsigned long long)*(unsigned char *)(iVar1 + 6) + 1);
  return;
}

/* Address: 0x1008e064 Size: 232 bytes */
void FUN_1008e064(int *param_1,int param_2,long long param_3)

{
  long long uVar1;
  int uStack0000001c;
  char auStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uStack0000001c = param_2;
  FUN_100e7184(param_1,param_2,param_3);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x10;
  local_1c = 0x10;
  uVar1 = FUN_100e1594(param_3,0);
  FUN_100e1630(&local_28,uVar1);
  local_30 = 0;
  local_2c = 0x11;
  FUN_100e1674(&local_28,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_28,auStack_38);
  uVar1 = FUN_100b0578(auStack_38);
  FUN_10000b40(uVar1,5,0,0x85);
  return;
}

/* Address: 0x1008e14c Size: 92 bytes */
void FUN_1008e14c(int *param_1,long long param_2,int param_3,int param_4)

{
  int uStack00000024;
  
  uStack00000024 = param_4;
  if (*(short *)(param_3 + 0x28) == 1) {
    FUN_100e4b48();
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x21);
  }
  return;
}

/* Address: 0x1008e1b0 Size: 84 bytes */
int * FUN_1008e1b0(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100d8824(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x50b));
  }
  return puVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1008e204() { }






/* Address: 0x1008e240 Size: 144 bytes */
int * FUN_1008e240(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x50),
     param_1 != (int *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = (*(int*)((char*)ppuVar1 - 0x4f0));
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  return param_1;
}

/* Address: 0x1008e2d0 Size: 40 bytes */
void FUN_1008e2d0(void)

{
  FUN_1008e240(0);
  return;
}

/* Address: 0x1008e2f8 Size: 328 bytes */
void FUN_1008e2f8(long long param_1,int param_2)

{
  if (param_2 == 0x616c6c79) {
    FUN_1009e534(0x69);
  }
  else if (param_2 == 0x61726d79) {
    FUN_1009e534(0x72);
  }
  else if (param_2 == 0x63697469) {
    FUN_1009e534(0x6c);
  }
  else if (param_2 == 0x63697479) {
    FUN_1009e534(0x73);
  }
  else if (param_2 == 0x666f7265) {
    FUN_1009e534(0x6d);
  }
  else if (param_2 == 0x68696c6c) {
    FUN_1009e534(0x6b);
  }
  else if (param_2 == 0x73686965) {
    FUN_1009e534(0x73);
  }
  else if (param_2 == 0x74657272) {
    FUN_1009e534(0x68);
  }
  else if (param_2 == 0x77617465) {
    FUN_1009e534(0x6a);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x1008e440 Size: 400 bytes */
int FUN_1008e440(long long param_1,unsigned short param_2)

{
  long long lVar1;
  int iVar4;
  long long uVar2;
  long long uVar3;
  short sVar5;
  int local_510;
  char *local_50c;
  short *local_4d8;
  short local_4d0;
  int local_4ce;
  char local_488 [256];
  char local_388 [256];
  char local_288 [256];
  unsigned char local_188 [256];
  char auStack_88 [12];
  int local_7c;
  char *local_76;
  short local_72;
  short local_6c;
  char local_6a;
  int local_58;
  
  local_4d8 = &local_4d0;
  local_50c = local_488;
  local_7c = 0;
  local_288[0] = 0;
  local_488[0] = 0;
  local_510 = 0x3c;
  local_76 = local_288;
  FUN_10001bd8((unsigned long long)*puRam101169c4 + 0x32,&local_510);
  FUN_100db2f4();
  local_72 = local_4d0;
  local_388[0] = 0;
  FUN_100009d8(local_388,0x3ea,(param_2 & 0xff) + 1);
  lVar1 = FUN_100b1b08(local_388);
  FUN_100b19f4(local_188,lVar1 + 1);
  if (local_188[local_188[0]] == 0x3a) {
    local_188[0] = local_188[0] - 1;
  }
  local_6c = 1;
  local_58 = local_4ce;
  iVar4 = FUN_10002058(auStack_88);
  sVar5 = 1;
  do {
    if (iVar4 != 0) {
      return 1;
    }
    if (((unsigned int)(int)local_6a >> 4 & 1) == 1) {
      uVar2 = FUN_100b1c84(local_288);
      uVar3 = FUN_100b1c84(local_188);
      iVar4 = FUN_10001998(uVar3,uVar2,0,0);
      if (iVar4 != 0) {
        return local_58;
      }
    }
    sVar5 = sVar5 + 1;
    local_58 = local_4ce;
    local_6c = sVar5;
    iVar4 = FUN_10002058(auStack_88);
  } while( true );
}

/* Address: 0x1008e5d0 Size: 724 bytes */
void FUN_1008e5d0(long long param_1,unsigned int param_2,int param_3,int *param_4)

{
  int iVar3;
  long long uVar1;
  long long uVar2;
  short sVar4;
  char auStack_4b4 [4];
  short local_4b0 [36];
  int local_468;
  char *local_464;
  short *local_430;
  int local_428;
  int uStack_424;
  int uStack_420;
  int uStack_41c;
  int uStack_418;
  int uStack_414;
  int local_410;
  int uStack_40c;
  int uStack_408;
  int uStack_404;
  int uStack_400;
  int uStack_3fc;
  int local_3f8;
  int uStack_3f4;
  int uStack_3f0;
  int uStack_3ec;
  int uStack_3e8;
  unsigned int uStack_3e4;
  unsigned int local_3e0 [4];
  int local_3d0;
  int uStack_3cc;
  int uStack_3c8;
  int uStack_3c4;
  int uStack_3c0;
  int uStack_3bc;
  int local_3b8;
  int uStack_3b4;
  int uStack_3b0;
  int uStack_3ac;
  int uStack_3a8;
  int uStack_3a4;
  int local_3a0;
  int uStack_39c;
  int uStack_398;
  int uStack_394;
  int uStack_390;
  unsigned int uStack_38c;
  char local_388 [256];
  int local_288;
  int uStack_284;
  int uStack_280;
  int uStack_27c;
  int uStack_278;
  int uStack_274;
  int local_270;
  int uStack_26c;
  int uStack_268;
  int uStack_264;
  int uStack_260;
  int uStack_25c;
  int local_258;
  int uStack_254;
  int uStack_250;
  int uStack_24c;
  int uStack_248;
  unsigned int uStack_244;
  char auStack_240 [256];
  short local_140;
  int local_13e;
  unsigned char local_13a [66];
  short local_f8;
  short uStack_f6;
  short uStack_f4;
  short uStack_f2;
  int uStack_f0;
  int uStack_ec;
  int uStack_e8;
  int uStack_e4;
  int local_e0;
  int uStack_dc;
  int uStack_d8;
  int uStack_d4;
  int uStack_d0;
  int uStack_cc;
  int local_c8;
  int uStack_c4;
  int uStack_c0;
  int uStack_bc;
  int uStack_b8;
  unsigned int uStack_b4;
  char auStack_b0 [12];
  int local_a4;
  unsigned char *local_9e;
  short local_9a;
  short local_94;
  char local_92;
  unsigned int local_90;
  unsigned short local_88;
  int local_80;
  int local_4c;
  
  param_2 = param_2 & 0xff;
  local_430 = local_4b0;
  local_464 = local_388;
  local_a4 = 0;
  local_9e = local_13a;
  local_388[0] = 0;
  local_468 = 0x3c;
  FUN_10001bd8((unsigned long long)*puRam101169c4 + 0x32,&local_468);
  FUN_100db2f4();
  local_9a = local_4b0[0];
  if (4 < param_2) {
    local_140 = local_4b0[0];
    local_94 = 1;
    local_13e = param_3;
    local_80 = param_3;
    iVar3 = FUN_10002058(auStack_b0);
    sVar4 = 1;
    while (iVar3 == 0) {
      if (((unsigned int)(int)local_92 >> 4 & 1) != 1) {
        local_f8 = local_9a;
        uStack_f6 = (short)((unsigned int)local_4c >> 0x10);
        uStack_f4 = (short)local_4c;
        FUN_100012d8(local_13a,&uStack_f2,(unsigned long long)local_13a[0] + 1);
        FUN_100012d8(local_13a,auStack_240,(unsigned long long)local_13a[0] + 1);
        FUN_100ef284(auStack_240,&uStack_f2);
        if ((local_88 & 0x8000) == 0) {
          if (local_90 == param_2) {
            local_3d0 = CONCAT22(local_f8,uStack_f6);
            uStack_3cc = CONCAT22(uStack_f4,uStack_f2);
            uStack_3c8 = uStack_f0;
            uStack_3c4 = uStack_ec;
            uStack_3c0 = uStack_e8;
            uStack_3bc = uStack_e4;
            local_3b8 = local_e0;
            uStack_3b4 = uStack_dc;
            uStack_3b0 = uStack_d8;
            uStack_3ac = uStack_d4;
            uStack_3a8 = uStack_d0;
            uStack_3a4 = uStack_cc;
            uStack_38c = uStack_b4 & 0xffff0000;
            local_3a0 = local_c8;
            uStack_39c = uStack_c4;
            uStack_398 = uStack_c0;
            uStack_394 = uStack_bc;
            uStack_390 = uStack_b8;
            FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x108),&local_3d0);
          }
        }
        else {
          uVar1 = FUN_100032d0(&local_f8,1);
          iVar3 = FUN_10000678();
          if (iVar3 == 0) {
            uVar2 = FUN_10003558(0x616c6973,0);
            iVar3 = -0x2b;
            if ((int)uVar2 != 0) {
              iVar3 = FUN_10002070(0,uVar2,&local_288,auStack_4b4);
            }
            if (((iVar3 == 0) && (iVar3 = FUN_10001530(&local_288,local_3e0), iVar3 == 0)) &&
               (local_3e0[0] == param_2)) {
              local_428 = local_288;
              uStack_424 = uStack_284;
              uStack_420 = uStack_280;
              uStack_41c = uStack_27c;
              uStack_418 = uStack_278;
              uStack_414 = uStack_274;
              local_410 = local_270;
              uStack_40c = uStack_26c;
              uStack_408 = uStack_268;
              uStack_404 = uStack_264;
              uStack_400 = uStack_260;
              uStack_3fc = uStack_25c;
              uStack_3e4 = uStack_244 & 0xffff0000;
              local_3f8 = local_258;
              uStack_3f4 = uStack_254;
              uStack_3f0 = uStack_250;
              uStack_3ec = uStack_24c;
              uStack_3e8 = uStack_248;
              FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x108),&local_428);
            }
            FUN_10003300(uVar1);
          }
        }
      }
      sVar4 = sVar4 + 1;
      local_94 = sVar4;
      local_80 = param_3;
      iVar3 = FUN_10002058(auStack_b0);
    }
    return;
  }
  return;
}

/* Address: 0x1008e8f4 Size: 580 bytes */
void FUN_1008e8f4(long long param_1,int *param_2,int *param_3,long long param_4)

{
  long long uVar1;
  long long lVar2;
  long long uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int local_44;
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x860));
    iVar4 = param_2[6];
    lVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x8a0));
    iVar8 = (int)lVar2;
    while ((short)(unsigned short)(iVar4 != 0x74657272) < iVar8) {
      FUN_10003138(uVar1,lVar2);
      sVar5 = (short)lVar2 + -1;
      lVar2 = (long long)sVar5;
      iVar8 = (int)sVar5;
    }
    sVar5 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xa8));
    if (sVar5 != 0) {
      if (param_2[6] != 0x74657272) {
        FUN_10003378(uVar1,(unsigned long long)*(unsigned int *)(local_44 + -0x144c) + 0x300);
      }
      sVar6 = 1;
      sVar7 = 1;
      if (0 < sVar5) {
        do {
          lVar2 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xe0),sVar7);
          FUN_10003378(uVar1,lVar2 + 6);
          if ((int)param_4 != 0) {
            uVar3 = FUN_100b1c84(param_4);
            iVar4 = FUN_10001998(uVar3,lVar2 + 6,0,0);
            if (iVar4 != 0) {
              if (param_2[6] == 0x74657272) {
                sVar6 = 0;
              }
              else {
                sVar6 = 2;
              }
              sVar6 = sVar7 + sVar6;
            }
          }
          sVar7 = sVar7 + 1;
        } while (sVar7 <= sVar5);
      }
      if (param_2[6] != 0x74657272) {
        sVar5 = sVar5 + 2;
      }
      FUN_10003288(param_2[0x2a],1);
      FUN_10001cb0(param_2[0x2a],sVar5);
      FUN_10001d10(param_2[0x2a],sVar6);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x828),1,sVar5,sVar6,0);
      *(char *)(param_2 + 0x76) = 0;
    }
  }
  return;
}

/* Address: 0x1008eb38 Size: 1644 bytes */
void FUN_1008eb38(int param_1)

{
  int *piVar1;
  int uVar2;
  int *puVar3;
  unsigned int *puVar5;
  int iVar6;
  int *piVar7;
  int *puVar8;
  long long uVar4;
  long long lVar9;
  short sVar10;
  char auStack_188 [80];
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar3 = puRam10117370;
  uVar2 = uRam10116474;
  piVar1 = *(int **)(param_1 + 8);
  FUN_100981f8(auStack_188,0x80);
  puVar5 = (unsigned int *)FUN_10098320(auStack_188,0x52616e64,1000);
  if (puVar5 != (unsigned int *)0x0) {
    FUN_10002598(puVar5);
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puVar3;
  *puVar3 = auStack_138;
  iVar6 = FUN_10000090(auStack_138);
  if (iVar6 == 0) {
    if (puVar5 != (unsigned int *)0x0) {
      iVar6 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x77617465);
      if (iVar6 != 0) {
        if (*(short *)*puVar5 == 7) {
          sVar10 = -1;
        }
        else {
          if (*(short *)(iVar6 + 0xd2) < 100) {
            sVar10 = 2;
          }
          else {
            sVar10 = 5;
          }
          sVar10 = *(short *)(iVar6 + 0xd0) + *(short *)*puVar5 * sVar10;
        }
        if (*(short *)(iVar6 + 0xd4) != sVar10) {
          *(short *)(iVar6 + 0xd4) = sVar10;
        }
      }
      iVar6 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x68696c6c);
      if (iVar6 != 0) {
        if (*(short *)(*puVar5 + 2) == 7) {
          sVar10 = -1;
        }
        else {
          if (*(short *)(iVar6 + 0xd2) < 100) {
            sVar10 = 2;
          }
          else {
            sVar10 = 5;
          }
          sVar10 = *(short *)(iVar6 + 0xd0) + *(short *)(*puVar5 + 2) * sVar10;
        }
        if (*(short *)(iVar6 + 0xd4) != sVar10) {
          *(short *)(iVar6 + 0xd4) = sVar10;
        }
      }
      iVar6 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x63697469);
      if (iVar6 != 0) {
        if (*(short *)(*puVar5 + 4) == 7) {
          sVar10 = -1;
        }
        else {
          if (*(short *)(iVar6 + 0xd2) < 100) {
            sVar10 = 2;
          }
          else {
            sVar10 = 5;
          }
          sVar10 = *(short *)(iVar6 + 0xd0) + *(short *)(*puVar5 + 4) * sVar10;
        }
        if (*(short *)(iVar6 + 0xd4) != sVar10) {
          *(short *)(iVar6 + 0xd4) = sVar10;
        }
      }
      iVar6 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x666f7265);
      if (iVar6 != 0) {
        if (*(short *)(*puVar5 + 6) == 7) {
          sVar10 = -1;
        }
        else {
          if (*(short *)(iVar6 + 0xd2) < 100) {
            sVar10 = 2;
          }
          else {
            sVar10 = 5;
          }
          sVar10 = *(short *)(iVar6 + 0xd0) + *(short *)(*puVar5 + 6) * sVar10;
        }
        if (*(short *)(iVar6 + 0xd4) != sVar10) {
          *(short *)(iVar6 + 0xd4) = sVar10;
        }
      }
      piVar7 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x616c6c79);
      if (piVar7 != (int *)0x0) {
        FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x850),*(char *)(*puVar5 + 0x408)
                     ,0);
      }
    }
    puVar8 = (int *)FUN_100f56e4(0x20);
    if (puVar8 != (int *)0x0) {
      FUN_100d8824(puVar8);
      *puVar8 = uVar2;
    }
    *(int **)(param_1 + 0x40) = puVar8;
    FUN_100d88b4(puVar8,0,0x46);
    uVar4 = FUN_1008e440(param_1,1);
    if ((int)uVar4 != 1) {
      FUN_1008e5d0(param_1,1,uVar4,*(int *)(param_1 + 0x40));
      uVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x74657272);
      if (puVar5 == (unsigned int *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (unsigned long long)*puVar5 + 8;
      }
      FUN_1008e8f4(param_1,uVar4,*(int *)(param_1 + 0x40),lVar9);
    }
    puVar8 = (int *)FUN_100f56e4(0x20);
    if (puVar8 != (int *)0x0) {
      FUN_100d8824(puVar8);
      *puVar8 = uVar2;
    }
    *(int **)(param_1 + 0x44) = puVar8;
    FUN_100d88b4(puVar8,0,0x46);
    uVar4 = FUN_1008e440(param_1,2);
    if ((int)uVar4 != 1) {
      FUN_1008e5d0(param_1,2,uVar4,*(int *)(param_1 + 0x44));
      uVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x61726d79);
      if (puVar5 == (unsigned int *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (unsigned long long)*puVar5 + 0x108;
      }
      FUN_1008e8f4(param_1,uVar4,*(int *)(param_1 + 0x44),lVar9);
    }
    puVar8 = (int *)FUN_100f56e4(0x20);
    if (puVar8 != (int *)0x0) {
      FUN_100d8824(puVar8);
      *puVar8 = uVar2;
    }
    *(int **)(param_1 + 0x48) = puVar8;
    FUN_100d88b4(puVar8,0,0x46);
    uVar4 = FUN_1008e440(param_1,3);
    if ((int)uVar4 != 1) {
      FUN_1008e5d0(param_1,3,uVar4,*(int *)(param_1 + 0x48));
      uVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x63697479);
      if (puVar5 == (unsigned int *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (unsigned long long)*puVar5 + 0x208;
      }
      FUN_1008e8f4(param_1,uVar4,*(int *)(param_1 + 0x48),lVar9);
    }
    puVar8 = (int *)FUN_100f56e4(0x20);
    if (puVar8 != (int *)0x0) {
      FUN_100d8824(puVar8);
      *puVar8 = uVar2;
    }
    *(int **)(param_1 + 0x4c) = puVar8;
    FUN_100d88b4(puVar8,0,0x46);
    uVar4 = FUN_1008e440(param_1,4);
    if ((int)uVar4 != 1) {
      FUN_1008e5d0(param_1,4,uVar4,*(int *)(param_1 + 0x4c));
      uVar4 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x73686965);
      if (puVar5 == (unsigned int *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (unsigned long long)*puVar5 + 0x308;
      }
      FUN_1008e8f4(param_1,uVar4,*(int *)(param_1 + 0x4c),lVar9);
    }
    FUN_100ef510(puVar5);
    *puVar3 = local_30;
  }
  else {
    FUN_100ef510(puVar5);
    FUN_100db158(local_38,local_34);
  }
  FUN_100982e8(auStack_188,2);
  return;
}

/* Address: 0x1008f204 Size: 432 bytes */
void FUN_1008f204(void)

{
  int uVar1;
  int uVar2;
  int uVar3;
  int *ppuVar4;
  
  uVar3 = uRam10116f68;
  uVar2 = uRam101169bc;
  uVar1 = uRam101166b0;
  ppuVar4 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116458,*puRam101164e4,0x44,uRam101164e8,uRam101166b0);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x509)),*(int *)(*(int*)((char*)ppuVar4 - 0x4ed)),0x40,(*(int*)((char*)ppuVar4 - 0x4ec)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x503)),*(int *)(*(int*)((char*)ppuVar4 - 0x4eb)),0x44,(*(int*)((char*)ppuVar4 - 0x4ea)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x501)),*(int *)(*(int*)((char*)ppuVar4 - 0x4e9)),0x20,(*(int*)((char*)ppuVar4 - 0x4e8)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x500)),*(int *)(*(int*)((char*)ppuVar4 - 0x4e7)),0x5c,(*(int*)((char*)ppuVar4 - 0x4e6)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4fc)),*(int *)(*(int*)((char*)ppuVar4 - 0x4e5)),200,(*(int*)((char*)ppuVar4 - 0x4e4)),(*(int*)((char*)ppuVar4 - 0x59e)));
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4fa)),*(int *)(*(int*)((char*)ppuVar4 - 0x4e3)),0xbc,(*(int*)((char*)ppuVar4 - 0x4e2)),uVar3);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4f8)),*(int *)(*(int*)((char*)ppuVar4 - 0x4e1)),0x40,(*(int*)((char*)ppuVar4 - 0x4e0)),uVar1);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4f5)),*(int *)(*(int*)((char*)ppuVar4 - 0x4df)),0xb8,(*(int*)((char*)ppuVar4 - 0x4de)),uVar3);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4f3)),*(int *)(*(int*)((char*)ppuVar4 - 0x4dd)),0xbc,(*(int*)((char*)ppuVar4 - 0x4dc)),uVar3);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4f2)),*(int *)(*(int*)((char*)ppuVar4 - 0x4db)),0x20,(*(int*)((char*)ppuVar4 - 0x4da)),uVar2);
  FUN_100c1c8c((*(int*)((char*)ppuVar4 - 0x4f1)),*(int *)(*(int*)((char*)ppuVar4 - 0x4d9)),0x50,(*(int*)((char*)ppuVar4 - 0x4d8)),uVar1);
  return;
}

/* Address: 0x1008f3b4 Size: 8 bytes */
int FUN_1008f3b4(void)

{
  return uRam10116544;
}

/* Address: 0x1008f3c4 Size: 84 bytes */
int * FUN_1008f3c4(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x84);
  if (puVar2 != (int *)0x0) {
    FUN_1010598c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x642));
  }
  return puVar2;
}

/* Address: 0x1008f418 Size: 128 bytes */

void FUN_1008f418(int param_1)

{
  if (*(short *)(param_1 + 0x80) == 0xf) {
    *(short *)(param_1 + 0x80) = 8;
  }
  FUN_100462c8(5);
  FUN_100462c8(0x26);
  if (*(unsigned short *)(param_1 + 0x82) < 5) {
    return;
  }
  return;
}

/* Address: 0x1008f648 Size: 8 bytes */
int FUN_1008f648(void)

{
  return uRam10116554;
}

/* Address: 0x1008f658 Size: 168 bytes */
int * FUN_1008f658(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xe0),
     param_1 != (int *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x4d2));
    *(short *)(param_1 + 0x2a) = 0;
    param_1[0x2e] = 0;
    *(short *)(param_1 + 0x2f) = 0;
    param_1[0x33] = 0;
    *(short *)(param_1 + 0x34) = 0;
    *(short *)((int)param_1 + 0xd2) = 0;
    *(short *)(param_1 + 0x35) = 0;
    *(short *)((int)param_1 + 0xd6) = 0;
    *(short *)(param_1 + 0x36) = 0;
    *(char *)((int)param_1 + 0xda) = 0;
    *(char *)((int)param_1 + 0xdb) = 0;
    *(short *)(param_1 + 0x37) = 0xffff;
  }
  return param_1;
}


























/* Address: 0x1008f700 Size: 40 bytes */
void FUN_1008f700(void)

{
  FUN_1008f658(0);
  return;
}

/* Address: 0x1008f728 Size: 284 bytes */
void FUN_1008f728(int param_1,int *param_2)

{
  short uVar1;
  char uVar2;
  
  FUN_100c6c9c(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xd0) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xd2) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xd4) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xd6) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xd8) = uVar1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 0xda) = uVar2;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(char *)(param_1 + 0xdb) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(short *)(param_1 + 0xdc) = uVar1;
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1008f844() { }





















































/* Address: 0x1008fa00 Size: 348 bytes */
void FUN_1008fa00(int param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  
  FUN_100b2268((((long long)param_4 & 0x3fffffffU) * 4 - (long long)param_4 & 0x7fffffff) * 2 +
               (unsigned long long)uRam101176cc);
  FUN_100021c0();
  FUN_100031b0(2,2);
  FUN_10000270(param_2 + 0x27,param_3 + 0x15);
  if (*(char *)(param_1 + 0xda) == '\0') {
    sVar1 = 0;
  }
  else {
    sVar1 = 0x33;
  }
  FUN_10000288(sVar1 + *(short *)(param_1 + 0xd8) * 0x10 + -4,0);
  FUN_100031b0(1,1);
  sVar1 = 0;
  if (0 < *(short *)(param_1 + 0xd8)) {
    do {
      FUN_10000270(param_2 + sVar1 * 0x10 + 0x2d,param_3 + 0x13);
      FUN_10000288(0,5);
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(param_1 + 0xd8));
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    FUN_10000270(param_2 + *(short *)(param_1 + 0xd8) * 0x10 + 0x50,param_3 + 0x13);
    FUN_10000288(0,5);
  }
  return;
}

/* Address: 0x1008fb5c Size: 1044 bytes */
void FUN_1008fb5c(int param_1)

{
  int uVar1;
  short *psVar2;
  char uVar6;
  long long uVar3;
  int iVar4;
  int *puVar5;
  short sVar7;
  unsigned short uVar8;
  int local_bc;
  int local_90;
  int uStack_8c;
  int uStack_88;
  int local_80;
  int local_7c;
  int local_78;
  short local_74;
  short local_72;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  unsigned short local_3e;
  
  psVar2 = psRam10116a40;
  uVar1 = uRam101160fc;
  FUN_100e0f78(&local_74,param_1 + 0x34);
  local_4a = psVar2[1];
  local_48 = local_74;
  local_46 = local_72;
  uVar8 = local_72 - local_4a;
  sVar7 = local_74 - *psVar2;
  FUN_10000870(&local_78,&local_7c);
  local_44 = 0;
  local_42 = 0;
  iVar4 = local_bc;
  local_40 = sVar7;
  local_3e = uVar8;
  uVar6 = FUN_100f1574(1);
  uVar3 = FUN_100b0578(&local_44);
  iVar4 = FUN_10001d58(&local_80,8,uVar3,**(int **)(iVar4 + -0x1cc),0,0);
  **(char **)(local_bc + -0x3c) = uVar6;
  if (iVar4 == 0) {
    *(char *)(param_1 + 0xb3) = 8;
    iVar4 = local_bc;
    FUN_100226b0(param_1 + 0xa8,0,0,uVar8,sVar7);
    *(unsigned short *)(param_1 + 0xb0) =
         ((short)uVar8 >> 1) + (unsigned short)((short)uVar8 < 0 && (uVar8 & 1) != 0);
    *(char *)(param_1 + 0xb2) = 0;
    *(int *)(param_1 + 0xb8) = local_80;
    FUN_100462c8(0x19);
    FUN_10009b48(*(int *)(*(int *)(iVar4 + -0x19bc) + 0x1f8),
                 (short)*(int *)(param_1 + 0x30) + -7,
                 (short)*(int *)(param_1 + 0x2c) + -7,(short)*(int *)(param_1 + 0x38),
                 (short)*(int *)(param_1 + 0x34),param_1 + 0xa8,0,0);
    FUN_10000870(&local_78,&local_7c);
    FUN_10000888(*(int *)(param_1 + 0xb8),0);
    local_90 = *(int *)(param_1 + 0x98);
    uStack_8c = *(int *)(param_1 + 0x9c);
    uStack_88 = *(int *)(param_1 + 0xa0);
    FUN_10067270();
    FUN_100f0788(&local_90);
    if (*(char *)(param_1 + 0xdb) == '\0') {
      FUN_100329b0(0x2d,0,*(short *)(param_1 + 0xd0),1);
      FUN_100329b0(*(short *)(param_1 + 0xd8) * 0x10 + 0x1d,0,*(short *)(param_1 + 0xd2),1);
    }
    else {
      puVar5 = (int *)FUN_100f56e4(0xb4);
      if (puVar5 != (int *)0x0) {
        FUN_100cda40(puVar5);
        *puVar5 = uVar1;
        *(short *)(puVar5 + 0x2c) = 0;
        *(short *)((int)puVar5 + 0xb2) = 0;
      }
      local_54 = 0;
      local_50 = 0x25;
      local_5c = 0x10;
      local_58 = 0x10;
      FUN_100cf4f8(puVar5,param_1,&local_54,&local_5c,5,5,*(short *)(param_1 + 0xdc),1);
      puVar5 = (int *)FUN_100f56e4(0xb4);
      if (puVar5 != (int *)0x0) {
        FUN_100cda40(puVar5);
        *puVar5 = uVar1;
        *(short *)(puVar5 + 0x2c) = 0;
        *(short *)((int)puVar5 + 0xb2) = 0;
      }
      local_60 = *(short *)(param_1 + 0xd8) * 0x10 + 0x15;
      local_64 = 0;
      local_6c = 0x10;
      local_68 = 0x10;
      FUN_100cf4f8(puVar5,param_1,&local_64,&local_6c,5,5,*(short *)(param_1 + 0xdc) + 1,1);
    }
    if (*(char *)(param_1 + 0xda) != '\0') {
      FUN_10032860(0xa3,0,(unsigned long long)*(unsigned int *)(local_bc + -0x1350) + 0x20,0xfffffffffffffffe);
    }
    FUN_1008fa00(param_1,1,1,0xf7);
    FUN_1008fa00(param_1,0,1,0xf7);
    FUN_1008fa00(param_1,0,0xffffffffffffffff,0xfb);
    FUN_1008fa00(param_1,0xffffffffffffffff,0xffffffffffffffff,0xfb);
    FUN_1008fa00(param_1,0,0,0xff);
    FUN_10000888(local_78,local_7c);
    FUN_10044d38(param_1 + 0xbc,0xbc3);
  }
  return;
}

/* Address: 0x1008ff70 Size: 64 bytes */
void FUN_1008ff70(long long param_1)

{
  FUN_10105d28(param_1);
  FUN_1008fb5c(param_1);
  return;
}

/* Address: 0x1008ffb0 Size: 76 bytes */
void FUN_1008ffb0(long long param_1)

{
  FUN_10106060(param_1);
  FUN_1000a094(param_1 + 0xa8);
  FUN_1000a094(param_1 + 0xbc);
  return;
}

/* Address: 0x1008fffc Size: 264 bytes */
void FUN_1008fffc(int *param_1)

{
  unsigned short uVar1;
  int in_r7;
  char in_r8;
  short sVar2;
  short sVar3;
  
  if (in_r8 != '\0') {
    sVar3 = *(short *)(param_1 + 0x34);
    uVar1 = *(unsigned short *)((int)param_1 + 0xd6);
    sVar2 = sVar3 + uVar1 * (short)((int)(((int)(short)uVar1 >> 1) +
                                          (unsigned int)((short)uVar1 < 0 && (uVar1 & 1) != 0) +
                                         (int)(short)((int)(short)((*(short *)((int)param_1 + 0xd2)
                                                                   - sVar3) *
                                                                  ((short)*(int *)(in_r7 + 4)
                                                                  + -0x28)) /
                                                     (*(short *)(param_1 + 0x36) * 0x10 + -0x10))) /
                                   (int)(short)uVar1);
    if ((sVar3 <= sVar2) && (sVar3 = sVar2, *(short *)((int)param_1 + 0xd2) < sVar2)) {
      if ((*(char *)((int)param_1 + 0xda) == '\0') ||
         ((short)*(int *)(in_r7 + 4) < (short)(*(short *)(param_1 + 0x36) * 0x10 + 0x36))) {
        sVar3 = *(short *)((int)param_1 + 0xd2);
      }
      else {
        sVar3 = -1;
      }
    }
    if (*(short *)(param_1 + 0x35) != sVar3) {
      *(short *)(param_1 + 0x35) = sVar3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}

/* Address: 0x10090108 Size: 60 bytes */
void FUN_10090108(void)

{
  FUN_100c1c8c(uRam10116554,*puRam1011655c,0xe0,uRam10116560,uRam10116c34);
  return;
}

/* Address: 0x10090154 Size: 84 bytes */
int * FUN_10090154(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xb8);
  if (puVar2 != (int *)0x0) {
    FUN_100e1f44(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x13b));
  }
  return puVar2;
}

/* Address: 0x100901a8 Size: 756 bytes */
void FUN_100901a8(int *param_1,int param_2,long long param_3)

{
  int _sStack0000001c;
  unsigned int uVar1;
  int *piVar2;
  int uVar3;
  int iVar4;
  long long uVar5;
  unsigned long long uVar6;
  short sStack0000001c;
  int local_a4;
  char auStack_70 [2];
  char auStack_6e [20];
  short local_5a;
  short local_54;
  int local_30 [2];
  short local_28;
  short local_26;
  
  uVar3 = uRam1011772c;
  piVar2 = piRam10117364;
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,&local_28);
  uVar6 = (unsigned long long)
          *(short *)(**(int **)(local_a4 + -0x550) +
                    ((int)**(short **)(local_a4 + -0x170) + (int)(short)(sStack0000001c + -1)) * 2);
  FUN_1000873c(uVar6,*(short *)(**(int **)(local_a4 + -0x544) + 0x110),
               *(int *)(local_a4 + -0x1208),local_26 + 2,local_28,0,0);
  FUN_10049628(uVar6,auStack_70);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  iVar4 = local_a4;
  FUN_1005f1a0(local_26 + 0x2a,local_28 + 5,auStack_6e);
  uVar1 = *(unsigned int *)(iVar4 + -0x133c);
  FUN_10001dd0(uVar3,(unsigned long long)uVar1 + 0x3c,local_5a);
  FUN_1005f1a0(local_26 + 0x9a,local_28 + 5,uVar3);
  FUN_10001dd0(uVar3,(unsigned long long)uVar1 + 0x40,local_54);
  FUN_1005f1a0(local_26 + 0xca,local_28 + 5,uVar3);
  FUN_1002269c(local_30,0xe2,local_28 + 8);
  if (*(char *)(*piVar2 + (int)(((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xffffffff) << 1)) == '\0') {
    iVar4 = *piVar2 + (int)(((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xffffffff) << 1);
    if (*(char *)(iVar4 + 1) == '\0') {
      if (*(char *)(*piVar2 + (int)(((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xffffffff) << 1) + 2) !=
          '\0') {
        FUN_1004602c(8,**(int **)(local_a4 + -0x1328),
                     (*(int **)(local_a4 + -0x1328))[1],local_30[0],0x24,0xf);
      }
    }
    else if (*(char *)(iVar4 + 2) == '\0') {
      FUN_1004602c(8,**(int **)(local_a4 + -0x132c),(*(int **)(local_a4 + -0x132c))[1]
                   ,local_30[0],0x24,0xf);
    }
    else {
      FUN_1004602c(8,**(int **)(local_a4 + -0x1330),(*(int **)(local_a4 + -0x1330))[1]
                   ,local_30[0],0x24,0xf);
    }
  }
  else {
    FUN_1004602c(8,**(int **)(local_a4 + -0x1334),(*(int **)(local_a4 + -0x1334))[1],
                 local_30[0],0x24,0xf);
  }
  uVar5 = FUN_1005d948(uVar6,0);
  FUN_1005f1a0(local_26 + 0x112,local_28 + 5,uVar5);
  return;
}

/* Address: 0x100904ac Size: 108 bytes */
int * FUN_100904ac(void)

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
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x13a));
  }
  return puVar2;
}

/* Address: 0x10090518 Size: 420 bytes */
void FUN_10090518(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 != 0x63686530) {
    if (iVar1 < 0x63686531) {
      if (iVar1 != 0x61726d33) {
        if (iVar1 < 0x61726d34) {
          if (iVar1 != 0x61726d31) {
            if (iVar1 < 0x61726d32) {
              if (iVar1 == 0x61726d30) goto LAB_1009064c;
            }
            else if (iVar1 == 0x61726d32) goto LAB_1009064c;
            goto LAB_100906a4;
          }
        }
        else if (iVar1 != 0x61726d35) {
          if (iVar1 < 0x61726d36) {
            if (iVar1 == 0x61726d34) goto LAB_1009064c;
          }
          else if ((iVar1 == 0x61726d36) || (iVar1 == 0x61726d37)) goto LAB_1009064c;
          goto LAB_100906a4;
        }
      }
LAB_1009064c:
      FUN_1005ea7c((short)*(int *)(param_3 + 0x18) + -0x6d30);
      return;
    }
    if (iVar1 != 0x63686535) {
      if (iVar1 < 0x63686536) {
        if (iVar1 != 0x63686532) {
          if (iVar1 < 0x63686533) {
            if (iVar1 != 0x63686531) goto LAB_100906a4;
          }
          else if ((iVar1 != 0x63686533) && (iVar1 != 0x63686534)) goto LAB_100906a4;
        }
      }
      else if (iVar1 != 0x63686537) {
        if (iVar1 < 0x63686538) {
          if (iVar1 == 0x63686536) goto LAB_1009066c;
        }
        else {
          if (iVar1 == 0x67726f75) {
            FUN_1005ed24();
            return;
          }
          if (iVar1 == 0x756e6772) {
            FUN_1005edf4();
            return;
          }
        }
LAB_100906a4:
        FUN_100d5934();
        return;
      }
    }
  }
LAB_1009066c:
  FUN_1005ec38((short)*(int *)(param_3 + 0x18) + -0x6530);
  return;
}

/* Address: 0x100906bc Size: 308 bytes */
void FUN_100906bc(long long param_1,unsigned int param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if ((param_2 < 0x63686530) || (0x63686537 < param_2)) {
      if (param_2 == 0x63616e63) {
        FUN_1009e534(0x150);
      }
      else if (param_2 == 0x67726f75) {
        FUN_1009e534(0x151);
      }
      else if (param_2 == 0x6f6b2020) {
        FUN_1009e534(0x14f);
      }
      else if (param_2 == 0x756e6772) {
        FUN_1009e534(0x152);
      }
      else {
        FUN_10078c58();
      }
    }
    else {
      FUN_1009e534((short)param_2 + -0x6bd5);
    }
  }
  else {
    FUN_1009e534((short)param_2 + -0x6bdd);
  }
  return;
}

/* Address: 0x100907f0 Size: 208 bytes */
void FUN_100907f0(int param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  
  iVar1 = iRam101176c0;
  piVar2 = (int *)0x0;
  if ((0x61726d2f < param_2) && (param_2 < 0x61726d38)) {
    piVar2 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                                 (int)*(short *)(**(int **)(param_1 + 8) + 0x308));
  }
  if ((piVar2 == (int *)0x0) ||
     (iVar3 = FUN_10117884((int)*(short *)(*piVar2 + 0xe0) + (int)piVar2), iVar3 == 0)) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_18 = CONCAT22(*(short *)(iVar1 + 6),*(short *)(iVar1 + 4));
  *param_3 = local_18;
  return;
}

/* Address: 0x100908d0 Size: 84 bytes */
int * FUN_100908d0(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x80);
  if (puVar2 != (int *)0x0) {
    FUN_1010598c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x139));
  }
  return puVar2;
}

/* Address: 0x10090924 Size: 48 bytes */
void FUN_10090924(void)

{
  FUN_1005dd84(0,0,0);
  return;
}

/* Address: 0x10090954 Size: 124 bytes */
void FUN_10090954(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116568,*puRam10116584,0xb8,uRam10116588,uRam10116f68);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x4c9)),*(int *)(*(int*)((char*)ppuVar1 - 0x4c5)),0x40,(*(int*)((char*)ppuVar1 - 0x4c4)),(*(int*)((char*)ppuVar1 - 0x47c)));
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x4c8)),*(int *)(*(int*)((char*)ppuVar1 - 0x4c3)),0x80,(*(int*)((char*)ppuVar1 - 0x4c2)),(*(int*)((char*)ppuVar1 - 0x309)));
  return;
}

/* Address: 0x100909d0 Size: 8 bytes */
int FUN_100909d0(void)

{
  return uRam1011659c;
}

/* Address: 0x100909e0 Size: 108 bytes */
int * FUN_100909e0(void)

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
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x4c0));
  }
  return puVar2;
}

/* Address: 0x10090a4c Size: 144 bytes */
void FUN_10090a4c(long long param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *ppuVar3;
  
  piVar2 = piRam1011734c;
  ppuVar3 = 0 /* TVect base */;
  if ((param_2 == 0x22) && (*(int *)(param_3 + 0x18) == 0x70696374)) {
    *(char *)(*piRam1011734c + 0x99) = 0;
    iVar1 = *(int *)(*piVar2 + 0x88);
    *(short *)(iVar1 + 0x1dc) = 0xffff;
    FUN_1007c714(iVar1,0x3ef);
    FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar3 - 0x5a7)) + (int)*(short *)(**(int **)(*(int*)((char*)ppuVar3 - 0x5a7)) + 0x4d0))
    ;
    return;
  }
  FUN_100d5934();
  return;
}

/* Address: 0x10090adc Size: 60 bytes */
void FUN_10090adc(void)

{
  FUN_100c1c8c(uRam1011659c,*puRam101165a4,0x40,uRam101165a8,uRam101166b0);
  return;
}

/* Address: 0x10090b90 Size: 40 bytes */
void FUN_10090b90(void)

{
  FUN_10090b28(0);
  return;
}

/* Address: 0x10090bb8 Size: 376 bytes */
void FUN_10090bb8(int *param_1)

{
  long long uVar1;
  int iVar2;
  int iVar3;
  unsigned int local_150;
  int iStack_14c;
  int iStack_148;
  char auStack_140 [16];
  short local_130;
  short local_12e;
  short local_12a;
  char local_128 [256];
  char auStack_28 [40];
  
  if (param_1[0x2b] != 0) {
    local_128[0] = 0;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_128);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),local_128);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_140);
    uVar1 = FUN_100b1b08(local_128);
    iVar2 = FUN_100ef96c(auStack_28);
    if (param_1[0xd] + -3 <= iVar2) {
      FUN_100b1c84(local_128);
      iVar2 = FUN_100006f0();
      iVar3 = FUN_100e1a3c(auStack_140,1);
      if (iVar3 + -3 < iVar2) {
        iStack_14c = param_1[0x27];
        iStack_148 = param_1[0x28];
        local_150 = param_1[0x26] | 0x2000;
        FUN_100f0788(&local_150);
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_140,&local_130);
    FUN_10032208(local_12e,local_12a,local_130,uVar1,*(short *)(param_1 + 0x2c));
  }
  return;
}

/* Address: 0x10090d30 Size: 220 bytes */
void FUN_10090d30(int *param_1,long long param_2,char param_3)

{
  int iVar1;
  
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
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
      }
    }
  }
  return;
}

/* Address: 0x10090e8c Size: 60 bytes */
void FUN_10090e8c(void)

{
  FUN_100c1c8c(uRam101165ac,*puRam101165b4,0xb4,uRam101165b8,uRam10116d68);
  return;
}

/* Address: 0x10090ed8 Size: 84 bytes */
int * FUN_10090ed8(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xa8);
  if (puVar2 != (int *)0x0) {
    FUN_100c6b2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x138));
  }
  return puVar2;
}

/* Address: 0x10090f2c Size: 236 bytes */
void FUN_10090f2c(int *param_1,long long param_2,long long param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char auStack_48 [8];
  char auStack_40 [8];
  char auStack_38 [8];
  int local_30 [12];
  
  FUN_100e1a64(auStack_38,param_3);
  FUN_100e1a64(auStack_40,param_2);
  piVar2 = (int *)FUN_100e1088(auStack_38,0);
  iVar1 = *piVar2;
  piVar2 = (int *)FUN_100e1088(auStack_40,0);
  local_30[0] = iVar1 - *piVar2;
  local_30[1] = 0;
  FUN_100e10b0(auStack_48,param_1 + 0xb,local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),auStack_48,param_4);
  FUN_1010c5f0(param_1,param_2,param_3,param_4);
  return;
}

/* Address: 0x10091018 Size: 60 bytes */
void FUN_10091018(void)

{
  FUN_10064850(1,0);
  FUN_10064850(0,0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10091054() { }







/* Address: 0x10091108 Size: 40 bytes */
void FUN_10091108(void)

{
  FUN_100910a0(0);
  return;
}

/* Address: 0x10091130 Size: 252 bytes */
void FUN_10091130(int *param_1)

{
  int iVar1;
  char auStack_28 [40];
  
  iVar1 = FUN_100e1a08(param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x668) + (int)param_1);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 != 0)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x638) + (int)param_1,auStack_28);
      iVar1 = FUN_100b0870(auStack_28);
      if (iVar1 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e0),auStack_28);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
      }
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100912f8() { }







/* FUN_10092c5c defined elsewhere */
































































































































































































































/* Address: 0x10093b94 Size: 40 bytes */
void FUN_10093b94(void)

{
  FUN_10093b10(0);
  return;
}

/* Address: 0x10093bbc Size: 240 bytes */
void FUN_10093bbc(int param_1)

{
  int *piVar1;
  int iVar3;
  long long uVar2;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x24);
  if (((*(int *)(param_1 + 0x24) != 0) &&
      (iVar3 = FUN_10117884((int)*(int **)(param_1 + 8) +
                            (int)*(short *)(**(int **)(param_1 + 8) + 0xe0)), iVar3 != 0)) &&
     (iVar3 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0x758)), iVar3 == 0)) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x740));
    piVar1 = *(int **)(param_1 + 8);
    iVar3 = *piVar1;
    uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(iVar3 + 0x530),iVar3,
                         *(int *)(iVar3 + 0x534));
    FUN_10117884((int)piVar1 + (int)*(short *)(iVar3 + 0xd0),uVar2,*(int *)(param_1 + 8),0);
  }
  return;
}

/* Address: 0x10093cac Size: 108 bytes */
void FUN_10093cac(int param_1,int param_2)

{
  FUN_100bfd04(param_1,param_2);
  if (((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x20)) ||
     ((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x21))) {
    FUN_10093bbc(param_1);
  }
  return;
}

/* Address: 0x10093d18 Size: 120 bytes */
void FUN_10093d18(int param_1,int param_2)

{
  FUN_100bfe54(param_1,param_2);
  if (*(char *)(param_1 + 0x22) == '\0') {
    if (((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x20)) ||
       ((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x21))) {
      FUN_10093bbc(param_1);
    }
  }
  return;
}

/* Address: 0x10093d9c Size: 52 bytes */
void FUN_10093d9c(int param_1,char param_2)

{
  if (('@' < param_2) && (param_2 < '[')) {
    *(char *)(param_1 + 0x20) = param_2 + ' ';
    *(char *)(param_1 + 0x21) = param_2;
    return;
  }
  *(char *)(param_1 + 0x20) = param_2;
  *(char *)(param_1 + 0x21) = param_2 + -0x20;
  return;
}

/* Address: 0x10093dd0 Size: 144 bytes */
void FUN_10093dd0(int param_1,int *param_2)

{
  char uVar1;
  char uVar2;
  
  FUN_100bf698(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  FUN_10093d9c(param_1,uVar1);
  *(char *)(param_1 + 0x22) = uVar2;
  return;
}

/* Address: 0x10093e60 Size: 64 bytes */
void FUN_10093e60(int param_1,long long param_2)

{
  FUN_100bf864(param_1,param_2);
  *(int *)(param_1 + 0x24) = (int)param_2;
  return;
}

/* Address: 0x10093ea0 Size: 124 bytes */
void FUN_10093ea0(int param_1,int *param_2)

{
  FUN_100bf728(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*(char *)(param_1 + 0x20));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(char *)(param_1 + 0x22));
  return;
}

/* Address: 0x10093f2c Size: 84 bytes */
int * FUN_10093f2c(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x20);
  if (puVar2 != (int *)0x0) {
    FUN_100bf518(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x148));
  }
  return puVar2;
}

/* Address: 0x10093f80 Size: 376 bytes */
void FUN_10093f80(int *param_1,long long param_2,char param_3)

{
  int *piVar1;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long long uVar2;
  int iVar6;
  char auStack_158 [344];
  
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)FUN_10117884((int)*(short *)(*piVar3 + 0xe0) + (int)piVar3);
    piVar1 = piVar3;
    while (piVar4 != (int *)0x0) {
      piVar5 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0));
      piVar1 = piVar4;
      piVar4 = piVar5;
    }
    iVar6 = piVar1[2];
    piVar1[2] = 0;
    if (param_3 == '\0') {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x148),param_2);
    }
    else {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x138),param_2);
    }
    piVar1[2] = iVar6;
  }
  FUN_1010556c(auStack_158,param_1);
  uVar2 = FUN_10105660(auStack_158);
  iVar6 = FUN_100ebf44(auStack_158);
  while (iVar6 != 0) {
    FUN_10093f80(uVar2,param_2,param_3);
    uVar2 = FUN_10105684(auStack_158);
    iVar6 = FUN_100ebf44(auStack_158);
  }
  FUN_101055f4(auStack_158,2);
  return;
}

/* Address: 0x100940f8 Size: 220 bytes */
void FUN_100940f8(int param_1,int *param_2)

{
  int iVar2;
  long long uVar1;
  char auStack_148 [328];
  
  FUN_100bfd04(param_1,param_2);
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar2 == 0) {
    FUN_1010556c(auStack_148,*(int *)(param_1 + 8));
    uVar1 = FUN_10105660(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      FUN_10093f80(uVar1,param_2,1);
      uVar1 = FUN_10105684(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return;
}

/* Address: 0x100941d4 Size: 220 bytes */
void FUN_100941d4(int param_1,int *param_2)

{
  int iVar2;
  long long uVar1;
  char auStack_148 [328];
  
  FUN_100bfe54(param_1,param_2);
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar2 == 0) {
    FUN_1010556c(auStack_148,*(int *)(param_1 + 8));
    uVar1 = FUN_10105660(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      FUN_10093f80(uVar1,param_2,0);
      uVar1 = FUN_10105684(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return;
}

/* Address: 0x100942b0 Size: 36 bytes */
void FUN_100942b0(void)

{
  FUN_100bf5e4();
  return;
}

/* Address: 0x100942d4 Size: 104 bytes */
void FUN_100942d4(void)

{
  int uVar1;
  int *ppuVar2;
  
  uVar1 = uRam10116610;
  ppuVar2 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116604,*puRam10116614,0x28,uRam10116618,uRam10116610);
  FUN_100c1c8c((*(int*)((char*)ppuVar2 - 0x4a5)),*(int *)(*(int*)((char*)ppuVar2 - 0x4a1)),0x20,(*(int*)((char*)ppuVar2 - 0x4a0)),uVar1);
  return;
}

/* Address: 0x1009433c Size: 492 bytes */
void FUN_1009433c(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  unsigned long long uVar10;
  short sVar11;
  
  iVar7 = iRam10117750;
  iVar6 = iRam1011774c;
  psVar5 = psRam10117744;
  psVar4 = psRam10117740;
  iVar3 = iRam1011773c;
  psVar2 = psRam1011760c;
  piVar8 = piRam1011735c;
  piVar9 = piRam10116628;
  *psRam10117744 = 0;
  *psVar4 = 0;
  uVar10 = 0;
  if (0 < *psVar2) {
    do {
      sVar11 = *(short *)((int)((uVar10 & 0xffffffff) << 1) + iVar3);
      if (*(char *)(*piVar8 + sVar11 * 0x1e + 0xd28) == '\x03') {
        sVar1 = *psVar4;
        *(short *)(sVar1 * 2 + iVar6) = sVar11;
        *psVar4 = sVar1 + 1;
      }
      else {
        sVar11 = *psVar5;
        *(short *)(sVar11 * 2 + iVar7) =
             *(short *)((int)((uVar10 & 0xffffffff) << 1) + iVar3);
        *psVar5 = sVar11 + 1;
      }
      sVar11 = (short)uVar10 + 1;
      uVar10 = (unsigned long long)sVar11;
    } while (sVar11 < *psVar2);
  }
  piVar8 = (int *)*piVar9;
  piVar8 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x63617272);
  if (piVar8 != (int *)0x0) {
    FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x8b0),*(short *)(piVar8 + 0x20));
    FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x8d8),*psVar4);
    FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x840),1);
  }
  piVar9 = (int *)*piVar9;
  piVar9 = (int *)FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),0x67726f75);
  if (piVar9 != (int *)0x0) {
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x8b0),*(short *)(piVar9 + 0x20));
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x8d8),*psVar5);
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x840),1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10094528() { }









































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10094b40() { }











































































/* Address: 0x10094fc4 Size: 224 bytes */
void FUN_10094fc4(void)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = iRam10117748;
  piVar5 = piRam10117360;
  psVar4 = psRam1011663c;
  psVar3 = psRam1011662c;
  FUN_10060608(0,1,0);
  iVar7 = 0;
  if (0 < *psVar3) {
    do {
      iVar6 = *(short *)(iVar7 * 2 + iVar2) * 0x16;
      iVar1 = *piVar5;
      if (iVar7 != *psVar4) {
        FUN_10061980(*(short *)(iVar1 + iVar6),*(short *)(iVar1 + iVar6 + 2),0);
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < *psVar3);
  }
  iVar7 = *(short *)(*psVar4 * 2 + iVar2) * 0x16;
  iVar2 = *piVar5;
  FUN_10061980(*(short *)(iVar2 + iVar7),*(short *)(iVar2 + iVar7 + 2),1);
  FUN_10061354(0);
  return;
}



// FAILED to decompile: FUN_100950a4 at 100950a4

/* Address: 0x100953a0 Size: 80 bytes */
void FUN_100953a0(void)

{
  *psRam1011663c =
       (short)(*psRam1011663c + 1) -
       (short)((*psRam1011663c + 1) / (int)*psRam1011662c) * *psRam1011662c;
  FUN_10094528();
  FUN_10094fc4();
  FUN_10094b40();
  return;
}

/* Address: 0x100953f0 Size: 84 bytes */
void FUN_100953f0(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *psRam1011662c;
  iVar2 = (int)*psRam1011663c + (int)sVar1 + -1;
  *psRam1011663c = (short)iVar2 - (short)(iVar2 / (int)sVar1) * sVar1;
  FUN_10094528();
  FUN_10094fc4();
  FUN_10094b40();
  return;
}

/* Address: 0x10095444 Size: 184 bytes */
short FUN_10095444(long long param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar2 = 0;
  iVar4 = 0;
  do {
    iVar1 = *piRam1011735c + iVar4 * 0x1e;
    if ((*(char *)(iVar1 + 0xd28) == '\x03') &&
       (*(short *)(iVar1 + 0xd2a) ==
        (short)((param_1 - (unsigned long long)*puRam10117360 & 0xffffffff) / 0x16))) {
      if (*(char *)(iVar1 + 0xd26) == '\b') {
        sVar2 = sVar2 + 1;
      }
      else {
        iVar1 = *piRam1011735c + iVar4 * 0x1e;
        if (*(char *)(iVar1 + 0xd26) == '\x02') {
          sVar2 = sVar2 + *(char *)(iVar1 + 0xd27);
        }
      }
    }
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
  } while (sVar3 < 0x16);
  return sVar2;
}

/* Address: 0x100954fc Size: 136 bytes */
short FUN_100954fc(long long param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar2 = 0;
  iVar4 = 0;
  do {
    iVar1 = *piRam1011735c + iVar4 * 0x1e;
    if (((*(char *)(iVar1 + 0xd28) == '\x03') &&
        (*(short *)(iVar1 + 0xd2a) ==
         (short)((param_1 - (unsigned long long)*puRam10117360 & 0xffffffff) / 0x16))) &&
       (*(char *)(iVar1 + 0xd26) == '\x01')) {
      sVar2 = sVar2 + *(char *)(iVar1 + 0xd27);
    }
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
  } while (sVar3 < 0x16);
  return sVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10095584() { }













































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100957a8() { }













































































































/* Address: 0x100959cc Size: 180 bytes */
void FUN_100959cc(short param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = iRam10117748;
  piVar3 = piRam10117360;
  psVar2 = psRam1011663c;
  psVar1 = psRam1011662c;
  iVar7 = 1000;
  iVar8 = 0;
  if (0 < *psRam1011662c) {
    do {
      iVar5 = *(short *)(iVar8 * 2 + iVar4) * 0x16;
      iVar5 = FUN_1000a884(param_1,param_2,*(short *)(*piVar3 + iVar5),
                           *(short *)(*piVar3 + iVar5 + 2));
      if (iVar5 < iVar7) {
        *psVar2 = (short)iVar8;
        iVar7 = iVar5;
      }
      sVar6 = (short)iVar8 + 1;
      iVar8 = (int)sVar6;
    } while (sVar6 < *psVar1);
  }
  FUN_10094528();
  FUN_10094fc4();
  FUN_10094b40();
  return;
}

/* Address: 0x10095a80 Size: 436 bytes */
void FUN_10095a80(short param_1)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  long long uVar4;
  long long uVar5;
  short sVar6;
  short sVar7;
  int iVar9;
  unsigned long long uVar8;
  short local_30 [8];
  short local_20 [16];
  int iVar10;
  
  iVar10 = iRam10117748;
  iVar3 = iRam101174ac;
  piVar2 = piRam10117360;
  psVar1 = psRam1011663c;
  iVar9 = *(short *)(*psRam1011663c * 2 + iRam10117748) * 0x16;
  FUN_1002122c(*(short *)(*piRam10117360 + iVar9),*(short *)(*piRam10117360 + iVar9 + 2),
               local_20);
  if (param_1 < local_20[0]) {
    iVar9 = 0;
    sVar6 = 1;
    if (0 < local_20[0]) {
      do {
        if (*(int *)(iVar9 * 4 + iVar3) == *piVar2 + *(short *)(*psVar1 * 2 + iVar10) * 0x16) {
          local_20[iVar9 + -8] = 0;
        }
        else {
          local_20[iVar9 + -8] = sVar6;
          sVar6 = sVar6 + 1;
        }
        sVar7 = (short)iVar9 + 1;
        iVar9 = (int)sVar7;
      } while (sVar7 < local_20[0]);
    }
    uVar8 = 0;
    iVar10 = 0;
    if (0 < local_20[0]) {
      do {
        if (*(short *)((int)local_30 + (int)((uVar8 & 0xffffffff) << 1)) == param_1) {
          iVar10 = *(int *)((int)((uVar8 & 0xffffffff) << 2) + iVar3);
          break;
        }
        sVar6 = (short)uVar8 + 1;
        uVar8 = (unsigned long long)sVar6;
        iVar10 = (int)sVar6;
      } while (sVar6 < local_20[0]);
    }
    FUN_1000be58(*(char *)(iVar10 + 4),*(char *)(iVar10 + 6),*(char *)(iVar10 + 8)
                 ,*(char *)(iVar10 + 0xb),*(char *)(iVar10 + 7),
                 *(char *)(iVar10 + 10),0,0);
  }
  else {
    FUN_1000a9e4(0,0,0);
    uVar4 = FUN_1005f678(0x85,1);
    uVar5 = FUN_1005f678(0x85,0);
    FUN_1000aaa8(uVar5,uVar4);
  }
  return;
}

/* Address: 0x10095c44 Size: 108 bytes */
int * FUN_10095c44(void)

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
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x143));
  }
  return puVar2;
}

/* Address: 0x10095cb0 Size: 196 bytes */
void FUN_10095cb0(int param_1,long long param_2)

{
  int *piVar1;
  long long uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar1);
  uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x63617272);
  if ((int)uVar2 != 0) {
    FUN_100f4f94(uVar2,piVar1);
  }
  uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x67726f75);
  if ((int)uVar2 != 0) {
    FUN_100f4f94(uVar2,piVar1);
  }
  FUN_10078a2c(param_1,param_2);
  return;
}

/* Address: 0x10095d74 Size: 264 bytes */
void FUN_10095d74(int param_1,long long param_2,int *param_3,long long param_4,long long param_5)

{
  int iVar1;
  int *piVar2;
  long long uVar3;
  
  if ((int)param_2 == 8) {
    if ((param_3 != (int *)0x0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_3 + 0x818) + (int)param_3), iVar1 != 0)) {
      piVar2 = *(int **)(param_1 + 8);
      FUN_100db26c(piVar2);
      if (param_3[6] == 0x63617272) {
        uVar3 = 0x67726f75;
      }
      else {
        uVar3 = 0x63617272;
      }
      piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),uVar3);
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x840) + (int)piVar2,1);
      }
    }
    FUN_10094b40();
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* Address: 0x10095e7c Size: 212 bytes */
void FUN_10095e7c(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x646f776e) {
    FUN_10095584();
  }
  else if (iVar1 == 0x6c656674) {
    FUN_100953f0();
  }
  else if (iVar1 == 0x6f766572) {
    FUN_100959cc((unsigned short)((unsigned long long)param_2 >> 8) & 0x7f,(unsigned short)param_2 & 0xff);
  }
  else if (iVar1 == 0x72696768) {
    FUN_100953a0();
  }
  else if (iVar1 == 0x75702020) {
    FUN_100957a8();
  }
  else {
    FUN_100d5934();
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10095f50() { }





































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10096098() { }





























/* Address: 0x10096198 Size: 84 bytes */
int * FUN_10096198(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xb8);
  if (puVar2 != (int *)0x0) {
    FUN_100e1f44(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x142));
  }
  return puVar2;
}

/* Address: 0x100961ec Size: 716 bytes */
void FUN_100961ec(int *param_1,short param_2,long long param_3)

{
  short sVar1;
  unsigned int *puVar2;
  int *ppuVar3;
  int iVar4;
  int iVar5;
  unsigned long long uVar6;
  int **local_8c;
  char auStack_68 [40];
  unsigned int local_40;
  int iStack_3c;
  int iStack_38;
  char auStack_30 [48];
  
  puVar2 = puRam1011735c;
  if (param_1[6] == 0x63617272) {
    sVar1 = *(short *)((int)(((long long)param_2 & 0xffffffffU) << 1) + iRam1011774c + -2);
  }
  else {
    sVar1 = *(short *)((int)(((long long)param_2 & 0xffffffffU) << 1) + iRam10117750 + -2);
  }
  uVar6 = (unsigned long long)sVar1;
  ppuVar3 = local_8c;
  if (*(char *)(*puRam1011735c + (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1) +
               0xd28) == '\0') {
    FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 0x54);
  }
  else if (*(char *)(*puRam1011735c + (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1)
                    + 0xd26) == '\b') {
    FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 0x5c);
  }
  else {
    iVar4 = *puRam1011735c + (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1);
    if (*(char *)(iVar4 + 0xd26) == '\x02') {
      FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 100,*(char *)(iVar4 + 0xd27));
    }
    else {
      iVar4 = *puRam1011735c + (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1);
      if (*(char *)(iVar4 + 0xd26) == '\x01') {
        FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 0x6c,*(char *)(iVar4 + 0xd27));
      }
      else if (*(char *)(*puRam1011735c +
                         (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1) + 0xd26) ==
               '\x05') {
        FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 0x74);
      }
      else if (*(char *)(*puRam1011735c +
                         (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1) + 0xd26) ==
               '\x06') {
        FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 0x78);
      }
      else {
        iVar4 = *puRam1011735c + (int)(((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0xffffffff) << 1);
        ppuVar3 = 0 /* TVect base */;
        if (*(char *)(iVar4 + 0xd26) == '\a') {
          FUN_10001dd0(auStack_30,(unsigned long long)uRam10116634 + 0x80,*(char *)(iVar4 + 0xd27));
          ppuVar3 = local_8c;
        }
      }
    }
  }
  FUN_10001dd0(auStack_68,ZEXT48((*(int*)((char*)ppuVar3 - 0x49b))) + 0x8c,
               (unsigned long long)*puVar2 + ((uVar6 & 0xfffffff) * 0x10 - uVar6 & 0x7fffffff) * 2 + 0xd12,
               auStack_30);
  FUN_100b1d90(param_3,auStack_68);
  local_40 = param_1[0x28];
  iStack_3c = param_1[0x29];
  iStack_38 = param_1[0x2a];
  FUN_100b1c84(param_3);
  iVar4 = FUN_100006f0();
  iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8c8));
  if (iVar5 + -2 < iVar4) {
    local_40 = local_40 | 0x2000;
  }
  FUN_100f0788(&local_40);
  return;
}

/* Address: 0x100964b8 Size: 92 bytes */
void FUN_100964b8(int *param_1,long long param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}

/* Address: 0x10096514 Size: 100 bytes */
void FUN_10096514(int param_1,long long param_2,int param_3,int param_4)

{
  int uStack00000024;
  
  uStack00000024 = param_4;
  if (*(short *)(param_3 + 0x28) == 1) {
    FUN_100e4b48();
  }
  else if (*(int *)(param_1 + 0x18) == 0x67726f75) {
    FUN_100957a8();
  }
  else {
    FUN_10095584();
  }
  return;
}

/* Address: 0x10096578 Size: 92 bytes */
void FUN_10096578(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116638,*puRam10116644,0x40,uRam10116648,uRam101166b0);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x498)),*(int *)(*(int*)((char*)ppuVar1 - 0x495)),0xb8,(*(int*)((char*)ppuVar1 - 0x494)),(*(int*)((char*)ppuVar1 - 0x24e)));
  return;
}

/* Address: 0x10096664 Size: 40 bytes */
void FUN_10096664(void)

{
  FUN_100965e4(0);
  return;
}

/* Address: 0x1009668c Size: 184 bytes */
void FUN_1009668c(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x6974656d) {
    FUN_10054958();
  }
  else if (iVar1 == 0x6d617073) {
    FUN_10054994();
  }
  else if (iVar1 == 0x6d6f6e65) {
    FUN_10054824();
  }
  else if (iVar1 == 0x6f766572) {
    FUN_10054af4((unsigned short)((unsigned long long)param_2 >> 8) & 0x7f,(unsigned short)param_2 & 0xff);
  }
  else {
    FUN_100d5934();
  }
  return;
}

/* Address: 0x10096744 Size: 476 bytes */
void FUN_10096744(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = piRam10115f64;
  piVar1 = (int *)FUN_10117884(*piRam10115f64 + (int)*(short *)(*(int *)*piRam10115f64 + 0x308),
                               0x6974656d);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x660) + (int)piVar1,0,1);
    FUN_10117884((int)*(short *)(*piVar1 + 0xd8) + (int)piVar1,0);
  }
  piVar1 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),0x6d6f6e65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),0,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),0);
  }
  piVar1 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),0x6d617073);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x660),0,1);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd8),0);
  }
  piVar2 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),0x646f6e65);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),1,1);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
  }
  return;
}

/* Address: 0x10096920 Size: 232 bytes */
void FUN_10096920(long long param_1,int param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if (param_2 == 0x646f6e65) {
    FUN_1009e534(0x11d);
  }
  else if (param_2 == 0x6974656d) {
    FUN_1009e534(0x11a);
  }
  else if (param_2 == 0x6d617073) {
    FUN_1009e534(0x11c);
  }
  else if (param_2 == 0x6d6f6e65) {
    FUN_1009e534(0x11b);
  }
  else if (param_2 == 0x6f766572) {
    FUN_1000a9e4(0,0,0);
    FUN_1000aaa8(ZEXT48((*(int*)((char*)ppuVar1 - 0x493))) + 0x2c,ZEXT48((*(int*)((char*)ppuVar1 - 0x493))) + 0x3c);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x10096a10 Size: 128 bytes */
int * FUN_10096a10(int *param_1)

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
    *param_1 = (*(int*)((char*)ppuVar1 - 0x48f));
  }
  return param_1;
}

/* Address: 0x10096a90 Size: 40 bytes */
void FUN_10096a90(void)

{
  FUN_10096a10(0);
  return;
}

/* Address: 0x10096ab8 Size: 168 bytes */
void FUN_10096ab8(long long param_1,int param_2)

{
  if (param_2 == 0x626c6573) {
    FUN_1009e534(0x14b);
  }
  else if (param_2 == 0x646f6e65) {
    FUN_1009e534(0x127);
  }
  else if (param_2 == 0x71756573) {
    FUN_1009e534(0x14c);
  }
  else if (param_2 == 0x74616b65) {
    FUN_1009e534(0x128);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x10096b60 Size: 92 bytes */
void FUN_10096b60(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116658,*puRam10116668,0x40,uRam1011666c,uRam101166b0);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x490)),*(int *)(*(int*)((char*)ppuVar1 - 0x48c)),0x40,(*(int*)((char*)ppuVar1 - 0x48b)),(*(int*)((char*)ppuVar1 - 0x48a)));
  return;
}

/* Address: 0x10096c34 Size: 40 bytes */
void FUN_10096c34(void)

{
  FUN_10096bcc(0);
  return;
}

/* Address: 0x10096c5c Size: 72 bytes */
void FUN_10096c5c(long long param_1,short param_2,long long param_3)

{
  FUN_100b1d90(param_3,((long long)*(short *)(param_2 * 2 + iRam10117754 + -2) & 0x7ffffffU) * 0x20 +
                       (unsigned long long)uRam10117758);
  return;
}

/* Address: 0x10096ca4 Size: 60 bytes */
void FUN_10096ca4(void)

{
  FUN_100c1c8c(uRam1011667c,*puRam10116684,0xb8,uRam10116688,uRam10116f68);
  return;
}

/* Address: 0x10096cf0 Size: 108 bytes */
int * FUN_10096cf0(void)

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
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x147));
  }
  return puVar2;
}

/* Address: 0x10096d5c Size: 308 bytes */
void FUN_10096d5c(long long param_1,long long param_2,int param_3)

{
  unsigned int uVar1;
  short sVar2;
  
  uVar1 = *(unsigned int *)(param_3 + 0x18);
  sVar2 = (short)uVar1;
  if ((uVar1 < 0x70656131) || (0x70656137 < uVar1)) {
    if ((uVar1 < 0x686f7331) || (0x686f7337 < uVar1)) {
      if ((uVar1 < 0x77617231) || (0x77617237 < uVar1)) {
        if (*(int *)(param_3 + 0x18) == 0x7265706f) {
          FUN_10026310();
        }
        else if (*(int *)(param_3 + 0x18) == 0x61637469) {
          FUN_100266e4(1);
        }
        else {
          FUN_100d5934();
        }
      }
      else {
        FUN_10026f70(2,sVar2 + -0x7231);
      }
    }
    else {
      FUN_10026f70(1,sVar2 + -0x7331);
    }
  }
  else {
    FUN_10026f70(0,sVar2 + -0x6131);
  }
  return;
}

/* Address: 0x10096e90 Size: 348 bytes */
void FUN_10096e90(long long param_1,unsigned int param_2)

{
  short sVar1;
  
  sVar1 = (short)param_2;
  if ((param_2 < 0x70656131) || (0x70656137 < param_2)) {
    if ((param_2 < 0x686f7331) || (0x686f7337 < param_2)) {
      if ((param_2 < 0x77617231) || (0x77617237 < param_2)) {
        if (param_2 == 0x7265706f) {
          FUN_1009e534(0x176);
        }
        else if (param_2 == 0x61637469) {
          FUN_1009e534(0x174);
        }
        else if (param_2 == 0x646f6e65) {
          FUN_1009e534(0x173);
        }
        else {
          FUN_10078c58();
        }
      }
      else {
        FUN_1009e534(sVar1 + -0x70b0);
      }
    }
    else {
      FUN_1009e534(sVar1 + -0x71b8);
    }
  }
  else {
    FUN_1009e534(sVar1 + -0x5fba);
  }
  return;
}

/* Address: 0x10096ffc Size: 84 bytes */
int * FUN_10096ffc(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x90);
  if (puVar2 != (int *)0x0) {
    FUN_10084ef0(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x146));
  }
  return puVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10097050() { }



















































/* Address: 0x10097118 Size: 84 bytes */
int * FUN_10097118(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x80);
  if (puVar2 != (int *)0x0) {
    FUN_1010598c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x145));
  }
  return puVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009716c() { }















































































































/* Address: 0x1009774c Size: 40 bytes */
void FUN_1009774c(void)

{
  FUN_1009769c(0);
  return;
}

/* Address: 0x10097774 Size: 184 bytes */
void FUN_10097774(int *param_1)

{
  int local_44;
  char auStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1[0x2b] == 0) {
    local_18 = *puRam10116bc0;
    local_14 = puRam10116bc0[1];
    local_10 = param_1[0xd];
    local_c = param_1[0xe];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_18,auStack_20);
    FUN_100b2268((unsigned long long)*(unsigned int *)(local_44 + -0x1d4) + 0x5fa);
    FUN_100021c0();
    FUN_100b0578(auStack_20);
    FUN_100021d8();
  }
  else {
    FUN_10070f64();
  }
  return;
}

/* Address: 0x1009782c Size: 156 bytes */
void FUN_1009782c(int *param_1,short param_2,char param_3)

{
  long long uVar1;
  
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0xaa) == param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_100cfc24(param_1,param_2,uVar1);
  if ((param_1[0x2b] == 0) && (param_1[0x2d] != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x3f8) + (int)param_1,param_1[0x2d],param_3);
    param_1[0x2d] = 0;
  }
  return;
}

/* Address: 0x100978c8 Size: 156 bytes */
void FUN_100978c8(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam1011668c,*puRam101166a8,0x40,uRam101166ac,uRam101166b0);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x484)),*(int *)(*(int*)((char*)ppuVar1 - 0x47b)),0x90,(*(int*)((char*)ppuVar1 - 0x47a)),(*(int*)((char*)ppuVar1 - 0x479)));
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x483)),*(int *)(*(int*)((char*)ppuVar1 - 0x478)),0x80,(*(int*)((char*)ppuVar1 - 0x477)),(*(int*)((char*)ppuVar1 - 0x309)));
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x481)),*(int *)(*(int*)((char*)ppuVar1 - 0x476)),0xbc,(*(int*)((char*)ppuVar1 - 0x475)),(*(int*)((char*)ppuVar1 - 0x474)));
  return;
}

/* Address: 0x100979dc Size: 40 bytes */
void FUN_100979dc(void)

{
  FUN_10097974(0);
  return;
}

/* Address: 0x10097a04 Size: 52 bytes */
void FUN_10097a04(long long param_1)

{
  FUN_1005fa94(param_1 + 0x80,0,0);
  return;
}

/* Address: 0x10097a38 Size: 60 bytes */
void FUN_10097a38(void)

{
  FUN_100c1c8c(uRam101166d4,*puRam101166dc,0xa0,uRam101166e0,uRam10116c7c);
  return;
}

/* Address: 0x10097b04 Size: 40 bytes */
void FUN_10097b04(void)

{
  FUN_10097a84(0);
  return;
}

/* Address: 0x10097b2c Size: 72 bytes */
void FUN_10097b2c(long long param_1,long long param_2,int param_3)

{
  if (*(int *)(param_3 + 0x18) == 0x626f6e75) {
    FUN_1003a760();
  }
  else {
    FUN_100d5934();
  }
  return;
}

/* Address: 0x10097b74 Size: 100 bytes */
void FUN_10097b74(long long param_1,int param_2)

{
  if (param_2 == 0x626f6e75) {
    FUN_1009e534(499);
  }
  else if (param_2 == 0x646f6e65) {
    FUN_1009e534(0x1f2);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x10097bd8 Size: 60 bytes */
void FUN_10097bd8(void)

{
  FUN_100c1c8c(uRam101166e4,*puRam101166ec,0x40,uRam101166f0,uRam101166b0);
  return;
}

/* Address: 0x10097c1c Size: 108 bytes */
int * FUN_10097c1c(void)

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
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x46b));
  }
  return puVar2;
}

/* Address: 0x10097c88 Size: 236 bytes */
void FUN_10097c88(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((piVar2 != (int *)0x0) &&
     (((sVar1 = *(short *)(param_2 + 0x24), sVar1 == 0xd || (sVar1 == 3)) || (sVar1 == 0x20)))) {
    piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x70696374);
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xe0)), iVar3 != 0)) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd0),piVar2[0x20],piVar2,0);
      return;
    }
    FUN_100d599c(param_1,param_2);
    return;
  }
  FUN_100d599c(param_1,param_2);
  return;
}

/* Address: 0x10097d74 Size: 60 bytes */
void FUN_10097d74(void)

{
  FUN_100c1c8c(uRam10116678,*puRam101166f8,0x40,uRam101166fc,uRam101166b0);
  return;
}

/* Address: 0x10097dc0 Size: 116 bytes */
int * FUN_10097dc0(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x44);
  if (puVar2 != (int *)0x0) {
    FUN_100d568c(puVar2);
    puVar2[0xd] = 0x20202020;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x13f));
    *(char *)(puVar2 + 0x10) = 0;
  }
  return puVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10097e34() { }















/* Address: 0x10097e68 Size: 740 bytes */
void FUN_10097e68(int param_1,long long param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  long long lVar4;
  
  if (*(int *)(param_3 + 0x18) == 0x72656a65) {
    FUN_10040cc0();
    *(char *)(param_1 + 0x40) = 1;
    piVar1 = *(int **)(param_1 + 8);
    lVar4 = 0;
    do {
      piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),lVar4 + 0x6f666630
                                  );
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x660) + (int)piVar2,0,0);
      }
      sVar3 = (short)lVar4 + 1;
      lVar4 = (long long)sVar3;
    } while (sVar3 < 3);
    lVar4 = 0;
    do {
      piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),lVar4 + 0x72656a30
                                  );
      if (piVar2 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x660) + (int)piVar2,1,0);
      }
      sVar3 = (short)lVar4 + 1;
      lVar4 = (long long)sVar3;
    } while (sVar3 < 4);
    piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x61636365);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),0,0);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),0);
    }
    piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x72656a65);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x660),0,0);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),0);
    }
    piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x70696374);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
    }
    lVar4 = 0;
    do {
      piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),lVar4 + 0x73696430
                                  );
      sVar3 = (short)lVar4 + 1;
      lVar4 = (long long)sVar3;
    } while (sVar3 < 4);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),1);
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
  }
  else {
    FUN_100d5934(param_1);
  }
  return;
}

/* Address: 0x1009814c Size: 60 bytes */
void FUN_1009814c(void)

{
  FUN_100c1c8c(uRam10116700,*puRam10116704,0x44,uRam10116708,uRam10116678);
  return;
}

/* Address: 0x10098188 Size: 112 bytes */

long long FUN_10098188(long long param_1,long long param_2,short param_3)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = FUN_100014b8();
  FUN_10000318((*(int*)0x00000900));
  uVar2 = FUN_10003558(param_2,param_3);
  FUN_10000318(uVar1);
  return uVar2;
}

/* Address: 0x10098424 Size: 128 bytes */

long long FUN_10098424(long long param_1,long long param_2,long long param_3)

{
  long long uVar1;
  long long uVar2;
  
  uVar1 = FUN_100014b8();
  FUN_10000318((*(int*)0x00000900));
  uVar2 = FUN_100b1c84(param_3);
  uVar2 = FUN_10003540(param_2,uVar2);
  FUN_10000318(uVar1);
  return uVar2;
}

/* Address: 0x100984a4 Size: 344 bytes */
int FUN_100984a4(int param_1,long long param_2,unsigned char *param_3)

{
  long long uVar1;
  long long uVar2;
  int iVar4;
  long long uVar3;
  char *puVar5;
  int *piVar6;
  char auStack_120 [256];
  int local_20 [8];
  
  puVar5 = ((char*)0) + -0x120;
  piVar6 = (int *)(((char*)0) + -0x20);
  *piVar6 = 0;
  uVar1 = FUN_100014b8();
  if (*(char *)(param_1 + 0x46) == '\0') {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_100032d0(param_1,1);
    if (((int)uVar2 != 0) && (iVar4 = FUN_10000678(), iVar4 == 0)) {
      uVar3 = FUN_100b1c84(param_3);
      iVar4 = FUN_10003540(param_2,uVar3);
      *piVar6 = iVar4;
      if (iVar4 != 0) {
        FUN_10002b50(piVar6);
      }
      FUN_10003300(uVar2);
    }
    if (*piVar6 == 0) {
      if ((((char*)0) != (char *)0x120) ||
         (puVar5 = (char *)FUN_100f56e4(0x100), puVar5 != (char *)0x0)) {
        FUN_100012d8(param_3,puVar5,(unsigned long long)*param_3 + 1);
      }
      iVar4 = FUN_10098424(param_1,param_2,puVar5);
      *piVar6 = iVar4;
      if (iVar4 != 0) {
        FUN_10002b50(piVar6);
      }
    }
    FUN_10000318(uVar1);
    iVar4 = *piVar6;
  }
  return iVar4;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100985fc() { }

















































































































/* Address: 0x10098814 Size: 88 bytes */
long long FUN_10098814(void)

{
  int uVar1;
  int local_24;
  
  uVar1 = FUN_10000a98(uRam1011670c,0x1c0,1);
  **(int **)(local_24 + -0x144) = uVar1;
  uVar1 = FUN_10000a98(*(int *)(local_24 + -0x1190),0x1c0,1);
  **(int **)(local_24 + -0x140) = uVar1;
  return 0;
}

/* Address: 0x1009886c Size: 144 bytes */
void FUN_1009886c(int *param_1,char param_2)

{
  int uVar1;
  int local_2c;
  
  if (((long long)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
    uVar1 = uRam10116718;
    if (param_2 == '\x01') {
      uVar1 = uRam10116714;
    }
    FUN_100008b8(uVar1);
    FUN_100021c0(*(int *)(local_2c + -0x1184));
  }
  FUN_10000030();
  FUN_100026d0(1);
  FUN_10002eb0(9);
  FUN_10002d48(param_2);
  return;
}

/* Address: 0x100988fc Size: 180 bytes */
void FUN_100988fc(int *param_1,char param_2,int param_3)

{
  int iVar1;
  
  iVar1 = iRam101177f0;
  FUN_10000660(param_3);
  FUN_10000198(*param_1);
  FUN_10000000(param_3 + 4);
  *(short *)(param_3 + 0x16) = *(short *)(*(int *)(iVar1 + 0xca) + 0x44);
  *(short *)(param_3 + 0x18) = *(short *)(*(int *)(iVar1 + 0xca) + 0x4a);
  *(unsigned short *)(param_3 + 0x1a) = (unsigned short)*(unsigned char *)(*(int *)(iVar1 + 0xca) + 0x46);
  if (((long long)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
    FUN_10001ad0(param_3 + 0x1c);
    FUN_10003930(param_3 + 0x22);
  }
  FUN_1009886c(param_1,param_2);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100989b0() { return 0; }


















































/* Address: 0x10098b04 Size: 144 bytes */
void FUN_10098b04(int *param_1)

{
  int local_2c;
  
  FUN_100026d0(*(short *)((int)param_1 + 0x16));
  FUN_10002eb0(*(short *)(param_1 + 6));
  FUN_10002d48(*(short *)((int)param_1 + 0x1a));
  if (((long long)*(short *)(*(int *)(*(int *)(local_2c + -0xb0) + 0xca) + 6) & 0xc000U) != 0) {
    FUN_100008b8((int)param_1 + 0x22);
    FUN_100021c0(param_1 + 7);
  }
  FUN_100016f8(param_1 + 1);
  FUN_10000198(*param_1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_10098b94() { return 0; }






















































































































/* Address: 0x10098ed8 Size: 68 bytes */
void FUN_10098ed8(int param_1)

{
  if (*(unsigned short *)(param_1 + 0x80) < 4) {
    return;
  }
  return;
}

/* Address: 0x10098f74 Size: 116 bytes */
void FUN_10098f74(long long param_1)

{
  long long uVar1;
  int iVar2;
  
  uVar1 = FUN_10001728(0x63637462,2000);
  iVar2 = FUN_10000678();
  FUN_10002ce8(uVar1);
  if (iVar2 == 0) {
    FUN_10001e00(param_1,uVar1);
  }
  return;
}

/* Address: 0x10098fe8 Size: 216 bytes */
long long FUN_10098fe8(int *param_1,short param_2,int *param_3)

{
  int iVar2;
  long long uVar1;
  char auStack_11c [256];
  char auStack_1c [28];
  
  FUN_10003108(auStack_1c,0,0,0,0);
  FUN_100009d8(auStack_11c,*(short *)(param_1 + 0x23),param_2);
  iVar2 = FUN_10001068(*param_1,auStack_1c,auStack_11c,0,0,0,1,8);
  *param_3 = iVar2;
  if (iVar2 == 0) {
    uVar1 = FUN_10002b20();
  }
  else {
    uVar1 = 0;
    if (((long long)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
      FUN_10098f74(*param_3);
    }
  }
  return uVar1;
}

/* Address: 0x100990c0 Size: 308 bytes */
long long FUN_100990c0(int param_1,unsigned int param_2)

{
  short sVar1;
  long long uVar2;
  unsigned int uVar3;
  int iVar4;
  
  FUN_1009886c(param_1,1);
  uVar2 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar2 = FUN_10098fe8(param_1,4,param_1 + 0x18);
  }
  if ((int)uVar2 == 0) {
    if ((param_2 & 0x20) != 0) {
      uVar2 = FUN_10098fe8(param_1,10,param_1 + 0x1c);
    }
    if (((int)uVar2 == 0) && ((param_2 & 0x40) != 0)) {
      uVar2 = FUN_10098fe8(param_1,5,param_1 + 0x20);
    }
  }
  uVar3 = 0;
  do {
    if ((param_2 & 1 << (uVar3 & 0x3f)) != 0) {
      *(char *)(param_1 + uVar3 + 0x8f) = 1;
    }
    sVar1 = (short)uVar3 + 1;
    uVar3 = (unsigned int)sVar1;
  } while (sVar1 < 4);
  iVar4 = 0;
  do {
    if ((int)uVar2 == 0) {
      uVar2 = FUN_10098fe8(param_1,(short)iVar4 + 0x11,param_1 + iVar4 * 4 + 0x24);
    }
    sVar1 = (short)iVar4 + 1;
    iVar4 = (int)sVar1;
  } while (sVar1 < 8);
  return uVar2;
}







































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100991f4() { }





















/* Address: stubbed - had compile errors on 64-bit */
void FUN_100992c8() { }

































































































































































































/* Address: 0x100996f8 Size: 228 bytes */
long long FUN_100996f8(int *param_1,long long param_2,long long param_3)

{
  long long uVar1;
  short in_r9;
  int local_64;
  int local_2c [11];
  
  FUN_10001098(local_2c,*(short *)((int)param_1 + 0xd6),*(short *)(param_1 + 0x35));
  uVar1 = FUN_10001140(param_1 + 3,*param_1,local_2c[0],0xffffffffffffbec4,0,0,param_2,param_3);
  if ((int)uVar1 == 0) {
    if (in_r9 != 0) {
      uVar1 = FUN_10001158(param_1[3],in_r9);
    }
    if ((int)uVar1 == 0) {
      uVar1 = FUN_10002838(param_1[3],**(int **)(local_64 + -0x140));
    }
  }
  return uVar1;
}




















/* Address: 0x100997dc Size: 80 bytes */
long long FUN_100997dc(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10000408(*(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}














/* Address: 0x1009982c Size: 88 bytes */
long long FUN_1009982c(int param_1,char param_2)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else if (param_2 == '\0') {
    uVar1 = FUN_100009a8(*(int *)(param_1 + 0xc));
  }
  else {
    uVar1 = FUN_10000990(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}

/* Address: 0x10099884 Size: 64 bytes */
long long FUN_10099884(int param_1,char param_2)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100009c0(*(int *)(param_1 + 0xc),param_2);
  }
  return uVar1;
}

/* Address: 0x100998c4 Size: 60 bytes */
long long FUN_100998c4(int param_1)

{
  long long uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10002d90(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}

/* Address: 0x10099900 Size: 124 bytes */
long long FUN_10099900(int param_1,char param_2)

{
  long long uVar1;
  
  if (((*(short *)(param_1 + 0x80) == 2) && (*(int **)(param_1 + 0xc) != (int *)0x0)) &&
     ((int)param_2 != (*(char *)(**(int **)(param_1 + 0xc) + 6) != '\0'))) {
    if (param_2 != '\0') {
      uVar1 = FUN_10003810(*(int *)(param_1 + 0xc));
      return uVar1;
    }
    uVar1 = FUN_10000930(*(int *)(param_1 + 0xc));
    return uVar1;
  }
  return 0;
}

/* Address: 0x1009997c Size: 308 bytes */
long long FUN_1009997c(int param_1,short *param_2,int *param_3)

{
  char uVar2;
  int uVar1;
  long long uVar3;
  int local_3c;
  unsigned short local_18 [12];
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffffffffffce;
  }
  else if (*(char *)(**(int **)(param_1 + 0xc) + 6) == '\0') {
    uVar3 = FUN_100029a0(*(int *)(param_1 + 0xc),local_18);
  }
  else {
    uVar3 = 0xfffffffffffff9e0;
  }
  if ((int)uVar3 == 0) {
    if ((local_18[0] & 1) == 0) {
      uVar3 = 0xfffffffffffff9ae;
    }
    if (((int)uVar3 == 0) &&
       (uVar3 = FUN_100000a8(*(int *)(param_1 + 0xc),param_2), (int)uVar3 == 0)) {
      uVar2 = FUN_100f1574(1);
      uVar1 = FUN_10001338(*param_2);
      *param_3 = uVar1;
      **(char **)(local_3c + -0x3c) = uVar2;
      uVar3 = FUN_10002b20();
      if (((int)uVar3 == 0) &&
         (uVar3 = FUN_100017d0(*(int *)(param_1 + 0xc),*param_3), (int)uVar3 != 0)) {
        FUN_100025b0(*param_3);
        *param_2 = 0;
        *param_3 = 0;
      }
    }
  }
  return uVar3;
}

/* Address: 0x10099ab0 Size: 64 bytes */
void FUN_10099ab0(int param_1)

{
  FUN_100028b0(*(int *)(param_1 + 0xc),*(short *)(param_1 + 0xd6),
               *(short *)(param_1 + 0xd4));
  return;
}







/* Address: 0x10099af0 Size: 148 bytes */
void FUN_10099af0(long long param_1,long long param_2)

{
  char auStack_38 [40];
  char auStack_10 [16];
  
  FUN_1009abf0(param_1);
  if ((int)param_2 != 0) {
    FUN_100988fc(param_1,1,auStack_38);
    FUN_10003618(param_2,10);
    FUN_100007e0(8,auStack_10);
    FUN_10003618(param_2,0);
    FUN_10098b04(auStack_38);
  }
  return;
}

/* Address: 0x10099b84 Size: 112 bytes */
int FUN_10099b84(int param_1)

{
  *(char *)(param_1 + 0x84) = 1;
  if (*(unsigned short *)(param_1 + 0x80) < 4) {
    return param_1;
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10099f14() { }

































/* Address: 0x1009a548 Size: 276 bytes */
int FUN_1009a548(int param_1,unsigned short *param_2,unsigned int *param_3)

{
  unsigned short uVar1;
  
  *param_3 = 1;
  uVar1 = *param_2;
  if ((param_2[7] & 0x800) != *(unsigned short *)(param_1 + 0x82)) {
    *(unsigned short *)(param_1 + 0x82) = param_2[7] & 0x800;
    *(char *)(param_1 + 0x84) = 1;
  }
  if ((uVar1 != 6) && (uVar1 != 1)) {
    if (uVar1 != 0) {
      *(char *)(param_1 + 0x84) = 1;
    }
    if (*(unsigned short *)(param_1 + 0x80) < 4) {
      return param_1;
    }
  }
  if (0xf < uVar1) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      FUN_1009abf0(param_1);
    }
    if (*(char *)(**(int **)(param_1 + 0xc) + 6) != '\0') {
      *param_3 = *param_3 | 8;
    }
    return 0;
  }
  return param_1;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_1009a8b8() { return 0; }





































/* Address: 0x1009a974 Size: 56 bytes */
long long FUN_1009a974(long long param_1,long long param_2)

{
  long long uVar1;
  
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10000f48(param_2);
  }
  return uVar1;
}













/* Address: 0x1009a9ac Size: 64 bytes */
void FUN_1009a9ac(long long param_1,long long param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_100030f0(param_2);
  }
  else {
    FUN_10003498(param_2);
  }
  return;
}

/* Address: 0x1009a9ec Size: 48 bytes */
void FUN_1009a9ec(long long param_1,long long param_2,char param_3)

{
  FUN_10000978(param_2,param_3);
  return;
}

/* Address: 0x1009aa1c Size: 48 bytes */
void FUN_1009aa1c(long long param_1,long long param_2,char param_3)

{
  FUN_10002610(param_2,param_3);
  return;
}

/* Address: 0x1009aa4c Size: 44 bytes */
void FUN_1009aa4c(long long param_1,long long param_2,long long param_3)

{
  FUN_10001038(param_2,param_3);
  return;
}

/* Address: 0x1009aa78 Size: 268 bytes */
long long
FUN_1009aa78(long long param_1,long long param_2,short *param_3,int *param_4)

{
  long long uVar1;
  char uVar3;
  int uVar2;
  int local_3c;
  short local_18 [12];
  
  *param_3 = 0;
  uVar1 = FUN_100025c8(param_2,local_18);
  if ((int)uVar1 == 0) {
    if ((local_18[0] != 3) && (local_18[0] != 4)) {
      uVar1 = 0xfffffffffffff9ae;
    }
    if (((int)uVar1 == 0) && (uVar1 = FUN_100035e8(param_2,param_3), (int)uVar1 == 0)) {
      uVar3 = FUN_100f1574(1);
      uVar2 = FUN_10001338(*param_3);
      *param_4 = uVar2;
      **(char **)(local_3c + -0x3c) = uVar3;
      uVar1 = FUN_10002b20();
      if (((int)uVar1 == 0) && (uVar1 = FUN_100022e0(param_2,*param_4), (int)uVar1 != 0)) {
        FUN_100025b0(*param_4);
        *param_3 = 0;
        *param_4 = 0;
      }
    }
  }
  return uVar1;
}

/* Address: 0x1009ab84 Size: 108 bytes */
void FUN_1009ab84(int param_1,long long param_2)

{
  FUN_10002880(param_2,*(short *)(param_1 + 0xd6),*(short *)(param_1 + 0xd4));
  FUN_10002898(param_2,*(short *)(param_1 + 0xda) - *(short *)(param_1 + 0xd6),
               *(short *)(param_1 + 0xd8) - *(short *)(param_1 + 0xd4));
  return;
}








/* Address: 0x1009abf0 Size: 1372 bytes */






void FUN_1009abf0(int param_1)

{
  int bVar1;
  int *piVar2;
  short sVar5;
  int *piVar3;
  int *piVar4;
  long long uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  char auStack_18c [44];
  char auStack_160 [256];
  int local_60;
  int local_5c;
  char auStack_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  piVar2 = piRam1011735c;
  piVar4 = piRam101161d0;
  *(short *)(param_1 + 0x82) = 0;
  *(int *)(param_1 + 0x44) = 0;
  FUN_100988fc(param_1,1,auStack_18c);
  if ((*(int *)(param_1 + 0x20) != 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    sVar5 = *(short *)(param_1 + 0x88);
    if (*(short *)(param_1 + 0x82) == 0) {
      sVar8 = 10;
    }
    else {
      sVar8 = 0xb;
    }
    if (*(unsigned short *)(param_1 + 0x80) < 4) {
      return;
    }
    FUN_1009886c(param_1,1);
    if (*(int *)(param_1 + 0x20) != 0) {
      if (sVar5 != *(short *)(param_1 + 0x88)) {
        *(short *)(param_1 + 0x88) = sVar5;
        FUN_100009d8(auStack_160,*(short *)(param_1 + 0x8c),sVar5);
        FUN_10003168(*(int *)(param_1 + 0x20),auStack_160);
      }
      if (*(char *)(param_1 + 0x85) != '\0') {
        *(char *)(param_1 + 0x85) = 0;
        FUN_10003618(*(int *)(param_1 + 0x20),0xff);
      }
      if ((*(char *)(param_1 + 0x7e) == '\0') || (*(short *)(param_1 + 0x88) == 5)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_1009c850(*(int *)(param_1 + 0x20),uVar6);
      if ((*(char *)(param_1 + 0x7e) != '\0') && (*(short *)(param_1 + 0x88) != 5)) {
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x20);
      }
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (sVar8 != *(short *)(param_1 + 0x8a)) {
        *(short *)(param_1 + 0x8a) = sVar8;
        FUN_100009d8(auStack_160,*(short *)(param_1 + 0x8c),sVar8);
        FUN_10003168(*(int *)(param_1 + 0x1c),auStack_160);
      }
      if (*(char *)(param_1 + 0x86) != '\0') {
        *(char *)(param_1 + 0x86) = 0;
        FUN_10003618(*(int *)(param_1 + 0x1c),0xff);
      }
    }
  }
  *(char *)(param_1 + 0x85) = 0;
  *(char *)(param_1 + 0x84) = 0;
  iVar9 = 0;
  do {
    FUN_10003618(*(int *)(param_1 + iVar9 * 4 + 0x24),0xff);
    if (((*(char *)(param_1 + 0x7e) == '\0') || (*(short *)(param_1 + 0x74) != iVar9)) ||
       (*(short *)(param_1 + 0x88) != 5)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    iVar7 = param_1 + iVar9 * 4;
    FUN_1009c850(*(int *)(iVar7 + 0x24),uVar6);
    if (((*(char *)(param_1 + 0x7e) != '\0') && (*(short *)(param_1 + 0x74) == iVar9)) &&
       (*(short *)(param_1 + 0x88) == 5)) {
      *(int *)(param_1 + 0x44) = *(int *)(iVar7 + 0x24);
      FUN_10003618(*(int *)(param_1 + 0x20),0xff);
    }
    sVar5 = (short)iVar9 + 1;
    iVar9 = (int)sVar5;
  } while (sVar5 < 8);
  piVar4 = *(int **)(*piVar4 + 0x84);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x138));
    bVar1 = true;
    iVar9 = 0;
    do {
      if (((piVar4[iVar9 + 0x62] == 0) &&
          (iVar7 = *piVar2 + iVar9 * 2, *(short *)(iVar7 + 0xd0) == 0)) &&
         (*(short *)(iVar7 + 0x138) != 0)) {
        bVar1 = false;
        break;
      }
      sVar5 = (short)iVar9 + 1;
      iVar9 = (int)sVar5;
    } while (sVar5 < 8);
    if (bVar1) {
      *(int *)(param_1 + 0x44) = 0;
      *(short *)(param_1 + 0x74) = 8;
    }
  }
  if (((*(char *)(param_1 + 0x7e) != '\0') && (*(int *)(param_1 + 0x44) == 0)) &&
     (*(char *)(param_1 + 0x48) == '\0')) {
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x646f6e65);
    }
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x618),auStack_58);
      local_60 = 0xfffffffc;
      local_5c = 0xfffffffc;
      FUN_100e16b8(auStack_58,&local_60);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x350),auStack_58,1);
      local_48 = 4;
      local_44 = 4;
      local_40 = 4;
      local_3c = 4;
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x780),&local_48,1);
      uVar6 = FUN_100b2bb4(0);
      FUN_100b444c(uVar6,0x6f75746c,1);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x3f0),uVar6,0x7f,1);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),0,1);
      *(char *)(param_1 + 0x48) = 1;
    }
    FUN_10003618(*(int *)(param_1 + 0x20),0xff);
  }
  FUN_10098b04(auStack_18c);
  return;
}

/* Address: 0x1009b310 Size: 160 bytes */
void FUN_1009b310(int param_1)

{
  int iVar1;
  int iVar2;
  long long lVar3;
  unsigned long long uVar4;
  
  FUN_10002598(*(int *)(param_1 + 0x60));
  iVar1 = **(int **)(param_1 + 0x60);
  lVar3 = FUN_10001c20(*(int **)(param_1 + 0x60));
  uVar4 = 0;
  if ((unsigned long long)(lVar3 << 0x20) >> 0x23 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + (int)((uVar4 & 0xffffffff) << 3));
      if (iVar2 != 0) {
        FUN_10000960(iVar2);
      }
      uVar4 = (unsigned long long)(short)((short)uVar4 + 1);
      lVar3 = FUN_10001c20(*(int *)(param_1 + 0x60));
    } while ((uVar4 & 0xffffffff) < (unsigned long long)(lVar3 << 0x20) >> 0x23);
  }
  FUN_10002ad8(*(int *)(param_1 + 0x60));
  return;
}

/* Address: 0x1009b3b0 Size: 760 bytes */
long long FUN_1009b3b0(int param_1)

{
  int bVar1;
  int *piVar2;
  int uVar3;
  int iVar4;
  int uVar8;
  long long uVar5;
  int *puVar9;
  long long lVar6;
  long long uVar7;
  unsigned int uVar10;
  char *puVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned short *puVar16;
  int local_124;
  int local_100 [6];
  int local_e8;
  char local_e4 [42];
  int local_ba;
  int local_a6;
  int local_a2;
  unsigned int local_9a;
  
  puVar9 = (int *)0x0;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar8 = FUN_100f15e0(0);
    *(int *)(param_1 + 0x60) = uVar8;
  }
  else {
    FUN_1009b310(param_1);
    FUN_10000ab0(*(int *)(param_1 + 0x60),0);
  }
  uVar5 = FUN_10002b20();
  if ((int)uVar5 == 0) {
    puVar9 = (int *)FUN_100f15e0(0x200);
    uVar5 = FUN_10002b20();
    iVar15 = (int)uVar5;
    while (iVar15 == 0) {
      FUN_10002778(puVar9);
      FUN_10002598(puVar9);
      iVar15 = 0xad;
      puVar11 = local_e4;
      do {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
        bVar1 = iVar15 != 0;
        iVar15 = iVar15 + -1;
      } while (bVar1);
      local_ba = *(int *)(param_1 + 100);
      local_a6 = *puVar9;
      local_a2 = FUN_10001c20(puVar9);
      uVar5 = FUN_10003090(local_e4,0);
      if ((int)uVar5 != -0x657) {
        if ((int)uVar5 == 0) {
          uVar14 = 0;
          puVar16 = (unsigned short *)*puVar9;
          if (local_9a != 0) goto LAB_1009b520;
        }
        break;
      }
      FUN_10002ad8(puVar9);
      lVar6 = FUN_10001c20(puVar9);
      FUN_10000ab0(puVar9,lVar6 + 0x200);
      uVar5 = FUN_10002b20();
      iVar15 = (int)uVar5;
    }
  }
  goto LAB_1009b67c;
  while( true ) {
    uVar8 = *(int *)(param_1 + 0x60);
    lVar6 = FUN_10001c20();
    FUN_10000ab0(uVar8,lVar6 + 8);
    uVar5 = FUN_10002b20();
    if ((int)uVar5 != 0) {
      FUN_10000960(local_e8);
      break;
    }
    piVar2 = *(int **)(param_1 + 0x60);
    uVar10 = FUN_10001c20();
    iVar4 = *piVar2 + (uVar10 & 0xfffffff8);
    *(int *)(iVar4 + -8) = local_e8;
    *(int *)(iVar4 + -4) = uVar3;
    uVar14 = uVar14 + 1;
    puVar16 = (unsigned short *)((int)puVar16 + uVar12 + (uVar12 & 1) + iVar13 + iVar15);
    if (local_9a <= uVar14) break;
LAB_1009b520:
    iVar15 = *puVar16 + 2 + (*puVar16 + 2 & 1);
    uVar3 = *(int *)(iVar15 + (int)puVar16);
    uVar12 = *(unsigned short *)((int)puVar16 + iVar15 + 10) + 4;
    iVar15 = uVar12 + (uVar12 & 1) + iVar15 + 8;
    uVar12 = *(unsigned short *)((int)puVar16 + iVar15 + 2) + 4;
    iVar13 = uVar12 + (uVar12 & 1);
    uVar12 = *(int *)((int)puVar16 + iVar13 + iVar15) + 4;
    FUN_100021a8(puVar16,local_100);
    FUN_10003378(*(int *)(param_1 + 0x58),*(int *)(local_124 + -0x117c));
    uVar5 = FUN_10002c40(local_100[0]);
    uVar8 = *(int *)(param_1 + 0x58);
    uVar7 = FUN_10002bb0();
    FUN_10001a40(uVar8,uVar7,uVar5);
    uVar5 = FUN_10001f98(puVar16,&local_e8,(unsigned long long)*puVar16 + 2);
    if ((int)uVar5 != 0) break;
  }
LAB_1009b67c:
  if (puVar9 != (int *)0x0) {
    FUN_10000960(puVar9);
  }
  return uVar5;
}

/* Address: 0x1009b6a8 Size: 292 bytes */
long long FUN_1009b6a8(int *param_1)

{
  short sVar1;
  int iVar4;
  long long uVar2;
  long long uVar3;
  int local_34;
  
  sVar1 = *psRam10116728;
  *psRam10116728 = sVar1 + 1;
  *(short *)(param_1 + 0x17) = sVar1;
  iVar4 = FUN_10002f28(sVar1,(unsigned long long)uRam10116724 + 4);
  param_1[0x16] = iVar4;
  if (iVar4 == 0) {
    uVar2 = FUN_10002b20();
  }
  else {
    FUN_10002088(param_1[0x16],0xffffffffffffffff);
    iVar4 = local_34;
    uVar2 = FUN_1009b3b0(param_1);
    if ((int)uVar2 == 0) goto LAB_1009b750;
    FUN_10000f78(*(short *)(param_1 + 0x17));
    FUN_10002c28(param_1[0x16]);
    param_1[0x16] = 0;
  }
  iVar4 = local_34;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_1009b750:
  FUN_1009886c(param_1,0);
  uVar3 = FUN_100b1c84(*(int *)(iVar4 + -0xe4c));
  iVar4 = FUN_10001068(*param_1,param_1 + 0x3f,uVar3,0,0xffffffffffff8001,
                       *(short *)(param_1 + 0x17),0,0x3f9);
  param_1[0x14] = iVar4;
  if (iVar4 == 0) {
    uVar2 = FUN_10002b20();
  }
  return uVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009b7cc() { }























/* Address: 0x1009b878 Size: 208 bytes */
long long FUN_1009b878(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_10002700(*(int *)(param_1 + 0x54));
    *(int *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_10003588(*(int *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_10000f78(*(short *)(param_1 + 0x5c));
    FUN_10002c28(*(int *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1009b310(param_1);
    FUN_10000960(*(int *)(param_1 + 0x60));
    *(int *)(param_1 + 0x60) = 0;
  }
  return 0;
}























/* Address: 0x1009b948 Size: 384 bytes */
long long FUN_1009b948(int *param_1)

{
  int local_154;
  char auStack_130 [8];
  short local_128 [4];
  char auStack_120 [256];
  int local_20;
  int iStack_1c;
  
  if (*(char *)((int)param_1 + 0x5e) != '\0') {
    FUN_10001b18(local_128);
    FUN_100009d8(auStack_120,*(short *)(param_1 + 0x23),0xf);
    FUN_10000270(*(short *)((int)param_1 + 0xe6),*(short *)(param_1 + 0x39) + local_128[0]);
    FUN_10000b88(auStack_120);
    FUN_100009d8(auStack_120,*(short *)(param_1 + 0x23),0x10);
    FUN_10000270(*(short *)((int)param_1 + 0xee),*(short *)(param_1 + 0x3b) + local_128[0]);
    FUN_10000b88(auStack_120);
    local_20 = param_1[0x3d];
    iStack_1c = param_1[0x3e];
    FUN_100021d8(&local_20);
    if (((long long)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
      FUN_10003930(auStack_130);
      FUN_100008b8(*(int *)(local_154 + -0x1188));
    }
    FUN_10003348(&local_20,1,1);
    FUN_10002c58(&local_20);
    FUN_1009886c(param_1,0);
    FUN_100027c0(&local_20,param_1[0x15]);
    FUN_10001fe0(param_1[0x14]);
    if (((long long)*(short *)(*param_1 + 6) & 0xc000U) != 0) {
      FUN_100008b8(auStack_130);
    }
  }
  return 0;
}

/* Address: 0x1009bac8 Size: 108 bytes */
long long FUN_1009bac8(long long param_1,unsigned short *param_2)

{
  if (*param_2 < 0x10) {
    return param_1;
  }
  return 0;
}

/* Address: 0x1009bed8 Size: 160 bytes */
short * FUN_1009bed8(int *param_1,short param_2)

{
  long long lVar1;
  char uVar4;
  short *puVar2;
  int iVar3;
  int local_3c;
  
  lVar1 = FUN_10001c20(param_1);
  uVar4 = FUN_100f1574(1);
  puVar2 = (short *)FUN_10001338(lVar1 + 4);
  **(char **)(local_3c + -0x3c) = uVar4;
  if ((puVar2 != (short *)0x0) && (iVar3 = FUN_10002b20(), iVar3 == 0)) {
    *puVar2 = param_2;
    puVar2[1] = (short)lVar1;
    FUN_10002340(*param_1,puVar2 + 2,lVar1);
  }
  return puVar2;
}

/* Address: 0x1009bf78 Size: 376 bytes */
long long
FUN_1009bf78(int param_1,short *param_2,int *param_3,int *param_4,
            int param_5)

{
  long long uVar1;
  int iVar2;
  char uVar4;
  short uVar3;
  long long uVar5;
  int local_74;
  int local_50;
  char auStack_4c [8];
  int local_44;
  int local_40;
  int *local_38;
  int local_34;
  short local_30;
  int local_2e;
  
  FUN_10003738(auStack_4c);
  local_40 = *(int *)(param_1 + 0x4c);
  iVar2 = **(int **)(param_1 + 0x54);
  local_44 = param_5;
  uVar1 = FUN_10000768(*(short *)(iVar2 + 0x4a));
  iVar2 = FUN_1009bed8(*(int *)(iVar2 + 0x3e),uVar1);
  uVar1 = FUN_10002b20();
  uVar5 = 0;
  if ((int)uVar1 == 0) {
    local_34 = param_4[1];
    local_30 = *(short *)(iVar2 + 2) + 4;
    local_38 = &local_50;
    local_2e = iVar2;
    FUN_10002598(*param_4);
    local_50 = *(int *)*param_4;
    uVar1 = FUN_10000a20(&local_38);
    uVar4 = FUN_100f1574(1);
    uVar5 = FUN_10001338(uVar1);
    **(char **)(local_74 + -0x3c) = uVar4;
    uVar1 = FUN_10002b20();
    if ((int)uVar1 == 0) {
      uVar3 = FUN_10000a38(&local_38,uVar5);
      FUN_10002ad8(*param_4);
      *param_3 = (int)uVar5;
      *param_2 = uVar3;
      uVar5 = 0;
      uVar1 = 0;
    }
  }
  if ((int)uVar5 != 0) {
    FUN_100025b0(uVar5);
  }
  if (iVar2 != 0) {
    FUN_100025b0(iVar2);
  }
  return uVar1;
}

/* Address: 0x1009c0f0 Size: 344 bytes */
long long FUN_1009c0f0(int param_1,short *param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  long long uVar5;
  long long uVar6;
  
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x4c) == 0) ||
     (iVar2 = FUN_100000d8(*(int *)(param_1 + 0x4c),2), iVar2 == 0)) {
    uVar6 = 0xffffffffffffffce;
LAB_1009c21c:
    if ((int)uVar6 == 0) goto LAB_1009c234;
  }
  else {
    sVar3 = FUN_10001c50(*(int *)(param_1 + 0x50));
    sVar3 = sVar3 + -1;
    if (((long long)sVar3 < 0) ||
       (sVar4 = FUN_10002bb0(*(int *)(param_1 + 0x58)), sVar4 <= sVar3)) {
      uVar6 = 0xffffffffffffffce;
      goto LAB_1009c21c;
    }
    FUN_10002598(*(int *)(param_1 + 0x60));
    uVar1 = **(unsigned int **)(param_1 + 0x60);
    iVar2 = **(int **)(param_1 + 0x54);
    uVar5 = FUN_10000768(*(short *)(iVar2 + 0x4a));
    uVar5 = FUN_1009bed8(*(int *)(iVar2 + 0x3e),uVar5);
    uVar6 = FUN_10002b20();
    if (((int)uVar6 == 0) &&
       (uVar6 = FUN_1009bf78(param_1,param_2,param_3,
                             (unsigned long long)uVar1 + ((long long)sVar3 & 0x1fffffffU) * 8,uVar5),
       (int)uVar6 == 0)) goto LAB_1009c21c;
  }
  *param_2 = 0;
  *param_3 = 0;
LAB_1009c234:
  if ((int)uVar5 != 0) {
    FUN_100025b0(uVar5);
  }
  FUN_10002ad8(*(int *)(param_1 + 0x60));
  return uVar6;
}

/* Address: 0x1009c26c Size: 276 bytes */
void FUN_1009c26c(int param_1)

{
  int *puVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int uStack_14;
  
  local_18 = *(int *)(param_1 + 0xf4);
  uStack_14 = *(int *)(param_1 + 0xf8);
  FUN_10003348(&local_18,2,2);
  local_1c = CONCAT22(30000,(short)uStack_14);
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    puVar1 = (int *)**(int **)(param_1 + 0x54);
    *puVar1 = local_18;
    puVar1[1] = local_1c;
    iVar2 = **(int **)(param_1 + 0x54);
    *(int *)(iVar2 + 8) = local_18;
    *(int *)(iVar2 + 0xc) = uStack_14;
    FUN_10002a90(*(int *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(char *)(param_1 + 0x5e) != '\0') {
      FUN_100002b8(*(int *)(param_1 + 0x50));
    }
    FUN_10003828(*(int *)(param_1 + 0x50),*(short *)(param_1 + 0xfe),
                 *(short *)(param_1 + 0xfc));
    FUN_100038e8(*(int *)(param_1 + 0x50),
                 *(short *)(param_1 + 0x102) - *(short *)(param_1 + 0xfe),
                 *(short *)(param_1 + 0x100) - *(short *)(param_1 + 0xfc));
    if (*(char *)(param_1 + 0x5e) != '\0') {
      FUN_10002388(*(int *)(param_1 + 0x50));
    }
  }
  return;
}





































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009c380() { }


























/* Address: 0x1009c434 Size: 160 bytes */

void FUN_1009c434(int param_1)

{
  char auStack_138 [312];
  
  FUN_100988fc(param_1,1,auStack_138);
  if (3 < *(unsigned short *)(param_1 + 0x80)) {
    FUN_10098b04(auStack_138);
    return;
  }
  return;
}













/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1009c544() { return 0; }


























































/* Address: 0x1009c744 Size: 268 bytes */
unsigned int * FUN_1009c744(short *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int local_10 [4];
  
  uVar3 = (int)param_1[3] - (int)param_1[1];
  uVar4 = (int)param_1[2] - (int)*param_1;
  FUN_10001098(local_10,param_1[1] +
                        (short)((int)uVar3 >> 1) + (unsigned short)((int)uVar3 < 0 && (uVar3 & 1) != 0),
               *param_1 + (short)((int)uVar4 >> 1) + (unsigned short)((int)uVar4 < 0 && (uVar4 & 1) != 0));
  FUN_10002fd0(local_10);
  puVar1 = (unsigned int *)FUN_10000e58();
  do {
    if (puVar1 == (unsigned int *)0x0) {
LAB_1009c82c:
      puVar1 = (unsigned int *)FUN_10001170();
      return puVar1;
    }
    iVar2 = FUN_100017b8(puVar1,0xd);
    if (((iVar2 != 0) && (iVar2 = FUN_100017b8(puVar1,0xf), iVar2 != 0)) &&
       (iVar2 = FUN_100016c8(local_10[0],(unsigned long long)*puVar1 + 0x22), iVar2 != 0)) {
      if (puVar1 != (unsigned int *)0x0) {
        return puVar1;
      }
      goto LAB_1009c82c;
    }
    puVar1 = (unsigned int *)FUN_10000e88(puVar1);
  } while( true );
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009c850() { }




























































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009ca0c() { }

















/* Address: 0x1009ca90 Size: 76 bytes */
void FUN_1009ca90(int param_1,int param_2)

{
  short sVar1;
  
  *(int *)(param_1 + 0x78) = param_2 + 6;
  sVar1 = *(short *)(param_1 + 0x76) + 1;
  *(short *)(param_1 + 0x76) = sVar1;
  if (-0x4162 < sVar1) {
    *(short *)(param_1 + 0x76) = 0xbe97;
  }
  FUN_1009ca0c();
  return;
}

/* Address: 0x1009cadc Size: 116 bytes */
void FUN_1009cadc(int *param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  unsigned long long uVar3;
  
  pcVar2 = pcRam1011672c;
  iVar1 = *(int *)(*param_1 + 0x10);
  uVar3 = FUN_10001a88();
  if ((param_2 != *pcVar2) ||
     ((param_2 != '\0' && ((unsigned long long)*(unsigned int *)(iVar1 + 0x78) <= (uVar3 & 0xffffffff))))) {
    *pcVar2 = param_2;
    FUN_1009ca90(iVar1,uVar3);
  }
  return;
}

/* Address: 0x1009cb50 Size: 116 bytes */
void FUN_1009cb50(int *param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  unsigned long long uVar3;
  
  pcVar2 = pcRam1011672c;
  iVar1 = *(int *)(*param_1 + 0x10);
  uVar3 = FUN_10001a88();
  if ((param_2 != *pcVar2) ||
     ((param_2 != '\0' && ((unsigned long long)*(unsigned int *)(iVar1 + 0x78) <= (uVar3 & 0xffffffff))))) {
    *pcVar2 = param_2;
    FUN_1009ca90(iVar1,uVar3);
  }
  return;
}

/* Address: 0x1009cbcc Size: 140 bytes */
int * FUN_1009cbcc(int *param_1,char param_2)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0xa4),
     param_1 != (int *)0x0)) {
    FUN_100fa860(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x45a));
    *(char *)(param_1 + 5) = param_2;
    *(short *)(param_1 + 0x25) = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(char *)(param_1 + 0x28) = 1;
  }
  return param_1;
}

/* Address: 0x1009cc58 Size: 44 bytes */
void FUN_1009cc58(void)

{
  FUN_1009cbcc(0,1);
  return;
}

/* Address: 0x1009cc84 Size: 136 bytes */
void FUN_1009cc84(int param_1,int param_2,short param_3)

{
  int local_98;
  char *local_94;
  char auStack_90 [144];
  
  if (*(char *)(param_1 + 0xa1) == '\0') {
    local_98 = param_2;
    local_94 = auStack_90;
    FUN_100022b0(&local_98,&local_94,param_3);
    FUN_100fab28(param_1,auStack_90,(int)local_94 - (int)auStack_90);
  }
  else {
    FUN_100db26c(0);
  }
  return;
}

/* Address: 0x1009cd0c Size: 372 bytes */
void FUN_1009cd0c(int param_1,int param_2,int param_3)

{
  int uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_100db26c(0);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(char *)(param_1 + 0xa0) = 0;
    *(char *)(param_1 + 0xa1) = 0;
    FUN_100fab28(param_1,param_1 + 0xa1,1);
    *(int *)(param_1 + 0x98) = 0;
    uVar1 = FUN_100fa934(param_1);
    *(int *)(param_1 + 0x9c) = uVar1;
    FUN_100fab28(param_1,param_1 + 0x98,4);
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_3;
  if (param_3 + *(short *)(param_1 + 0x94) < 0x7f) {
    FUN_10002340(param_2,param_1 + *(short *)(param_1 + 0x94) + 0x15,param_3);
    *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x94) + (short)param_3;
  }
  else {
    iVar2 = 0x7f - *(short *)(param_1 + 0x94);
    FUN_10002340(param_2,param_1 + *(short *)(param_1 + 0x94) + 0x15,iVar2);
    FUN_1009cc84(param_1,param_1 + 0x15,0x7f);
    param_2 = iVar2 + param_2;
    for (param_3 = param_3 - iVar2; 0x7e < param_3; param_3 = param_3 + -0x7f) {
      FUN_1009cc84(param_1,param_2,0x7f);
      param_2 = param_2 + 0x7f;
    }
    if (param_3 != 0) {
      FUN_10002340(param_2,param_1 + 0x15,param_3);
    }
    *(short *)(param_1 + 0x94) = (short)param_3;
  }
  return;
}

/* Address: 0x1009ce80 Size: 176 bytes */
void FUN_1009ce80(int *param_1)

{
  long long uVar1;
  
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_1009cc84(param_1,(int)param_1 + 0x15,*(short *)(param_1 + 0x25));
    *(short *)(param_1 + 0x25) = 0;
    FUN_100fa9fc(param_1,param_1[0x27]);
    FUN_100fab28(param_1,param_1 + 0x26,4);
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xb8) + (int)param_1);
    FUN_100fa9fc(param_1,uVar1);
  }
  FUN_100f930c(param_1);
  return;
}

/* Address: 0x1009cf30 Size: 92 bytes */
void FUN_1009cf30(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,*(short *)(param_1 + 0x94));
    *(short *)(param_1 + 0x94) = 0;
  }
  FUN_100fa934(param_1);
  return;
}

/* Address: 0x1009cf8c Size: 120 bytes */
void FUN_1009cf8c(int param_1,long long param_2)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,*(short *)(param_1 + 0x94));
    *(short *)(param_1 + 0x94) = 0;
  }
  if ((int)param_2 == 0) {
    *(char *)(param_1 + 0xa0) = 1;
  }
  FUN_100fa9fc(param_1,param_2);
  return;
}

/* Address: 0x1009d01c Size: 92 bytes */
void FUN_1009d01c(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,*(short *)(param_1 + 0x94));
    *(short *)(param_1 + 0x94) = 0;
  }
  FUN_100fa998(param_1);
  return;
}

/* Address: 0x1009d078 Size: 100 bytes */
void FUN_1009d078(int param_1,long long param_2)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1009cc84(param_1,param_1 + 0x15,*(short *)(param_1 + 0x94));
    *(short *)(param_1 + 0x94) = 0;
  }
  FUN_100faa60(param_1,param_2);
  return;
}

/* Address: 0x1009d0dc Size: 368 bytes */
void FUN_1009d0dc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char *puVar7;
  short sVar8;
  int local_c0;
  int local_bc [4];
  int local_ac;
  char auStack_a8 [168];
  
  piVar5 = (int *)(((char*)0) + -0xc0);
  piVar4 = local_bc;
  piVar3 = local_bc + 2;
  piVar6 = (int *)(((char*)0) + -0xac);
  puVar7 = ((char*)0) + -0xa8;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    local_bc[3] = *(int *)(param_1 + 0x98);
    local_bc[2] = 0x7f;
    if (local_bc[3] < 0x7f) {
      piVar3 = local_bc + 3;
    }
    sVar8 = (short)*piVar3;
    if (sVar8 == 0) {
      FUN_100db2f4(0xffffffffffffffd9);
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - (int)sVar8;
    iVar1 = FUN_100fa934(param_1);
    iVar2 = FUN_100fa934(param_1);
    local_bc[0] = FUN_100fa998(param_1);
    local_bc[0] = local_bc[0] - iVar2;
    local_bc[1] = 0x80;
    if (0x80 < local_bc[0]) {
      piVar4 = local_bc + 1;
    }
    FUN_100faac0(param_1,puVar7,*piVar4);
    *piVar6 = (int)puVar7;
    *(short *)(param_1 + 0x94) = 0x7f - sVar8;
    *piVar5 = param_1 + (short)(0x7f - sVar8) + 0x15;
    FUN_10000450(piVar6,piVar5,sVar8);
    FUN_100fa9fc(param_1,(iVar1 + *piVar6) - (int)puVar7);
  }
  else {
    FUN_100d8c9c(0x3fc,0);
    FUN_100db158(0,0x820000);
  }
  return;
}

/* Address: 0x1009d24c Size: 372 bytes */
void FUN_1009d24c(int param_1,long long param_2,long long param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  short sVar4;
  long long lVar3;
  unsigned int local_20;
  unsigned int local_1c [7];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_100db26c(0);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(char *)(param_1 + 0xa0) = 0;
    FUN_100faac0(param_1,param_1 + 0xa1,1);
    FUN_100faac0(param_1,param_1 + 0x98,4);
    FUN_1009d0dc(param_1);
  }
  sVar4 = 0x7f - *(short *)(param_1 + 0x94);
  lVar3 = (long long)sVar4;
  if ((int)sVar4 < (int)param_3) {
    if (sVar4 != 0) {
      FUN_10002340(param_1 + *(short *)(param_1 + 0x94) + 0x15,param_2,lVar3);
    }
    param_2 = param_2 + lVar3;
    for (param_3 = param_3 - lVar3; 0 < param_3; param_3 = param_3 - (unsigned long long)uVar1) {
      FUN_1009d0dc(param_1);
      local_1c[0] = (unsigned int)param_3;
      local_20 = (unsigned int)(short)(0x7f - *(short *)(param_1 + 0x94));
      puVar2 = &local_20;
      if ((int)local_1c[0] < (int)local_20) {
        puVar2 = local_1c;
      }
      uVar1 = *puVar2;
      FUN_10002340(param_1 + *(short *)(param_1 + 0x94) + 0x15,param_2);
      param_2 = (unsigned long long)uVar1 + param_2;
      *(short *)(param_1 + 0x94) = (short)uVar1 + *(short *)(param_1 + 0x94);
    }
  }
  else {
    FUN_10002340(param_1 + *(short *)(param_1 + 0x94) + 0x15,param_2,param_3);
    *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x94) + (short)param_3;
  }
  return;
}

/* Address: 0x1009d3c0 Size: 60 bytes */
void FUN_1009d3c0(void)

{
  FUN_100c1c8c(uRam10116734,*puRam1011673c,0xa4,uRam10116740,uRam10116744);
  return;
}

/* Address: 0x1009d40c Size: 120 bytes */
int * FUN_1009d40c(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x44);
  if (puVar2 != (int *)0x0) {
    FUN_100d568c(puVar2);
    puVar2[0xd] = 0x20202020;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x149));
    *(char *)(puVar2 + 0x10) = 0;
    *(char *)((int)puVar2 + 0x41) = 0;
  }
  return puVar2;
}

/* Address: 0x1009d484 Size: 1612 bytes */
void FUN_1009d484(int param_1,long long param_2,int param_3)

{
  int iVar1;
  int bVar2;
  int *puVar3;
  int *piVar4;
  int *piVar5;
  short sVar7;
  unsigned long long uVar6;
  long long uVar8;
  long long uVar9;
  long long uVar10;
  int iVar11;
  unsigned int local_8dc;
  char auStack_8b8 [256];
  char auStack_7b8 [28];
  char auStack_79c [60];
  char auStack_760 [80];
  char auStack_710 [256];
  char auStack_610 [256];
  char auStack_510 [20];
  char auStack_4fc [156];
  int local_460;
  int local_45c;
  char auStack_458 [256];
  int *local_358;
  char local_354;
  int *local_350;
  char local_34c;
  char auStack_348 [256];
  char auStack_248 [256];
  char auStack_148 [328];
  
  iVar11 = *(int *)(*piRam1011734c + 0x88);
  uVar8 = 0x20202020;
  uVar9 = 0xffffffffffffffff;
  if ((iVar11 == 0) || (*(int *)(iVar11 + 0x148) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x63726564) {
    uVar8 = 0x6362616b;
    uVar9 = 0x411;
  }
  else if (iVar1 == 0x61646472) {
    uVar8 = 0x6162616b;
    uVar9 = 0x412;
  }
  else if (iVar1 == 0x7363656e) {
    uVar8 = 0x7362616b;
    uVar9 = 0x413;
    if (bVar2) {
      FUN_10117884((int)*(int **)(iVar11 + 0x148) +
                   (int)*(short *)(**(int **)(iVar11 + 0x148) + 0x2b8));
    }
  }
  else {
    FUN_100d5934(param_1,param_2,param_3);
  }
  uVar10 = 0;
  if ((int)uVar9 != -1) {
    local_460 = 0xe;
    local_45c = 0xe;
    uVar10 = FUN_10078a30(param_1,uVar8,uVar9,&local_460,0);
  }
  if (*(int *)(param_3 + 0x18) == 0x63726564) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      FUN_100981f8(auStack_760,0x80);
      piVar5 = (int *)FUN_10098320(auStack_760,0x76657273,1);
      if (piVar5 != (int *)0x0) {
        local_350 = piVar5;
        local_34c = FUN_10000360(piVar5);
        FUN_10002598(local_350);
        FUN_100012d8(*piVar5 + 6,auStack_610,(unsigned long long)*(unsigned char *)(*piVar5 + 6) + 1);
        FUN_10090e0c(uVar10,0x76657273,auStack_610,1);
        if (((char*)0) != (char *)0x350) {
          FUN_10001b60(local_350,local_34c);
        }
      }
      FUN_100ef510(piVar5);
      FUN_100f2214(4);
      puVar3 = (int *)FUN_1004130c();
      local_358 = puVar3;
      local_354 = FUN_10000360();
      FUN_10002598(local_358);
      FUN_100012d8((unsigned char *)*puVar3,auStack_710,(unsigned long long)*(unsigned char *)*puVar3 + 1);
      FUN_10090e0c(uVar10,0x6d656e75,auStack_710,1);
      *(char *)(param_1 + 0x40) = 1;
      if (((char*)0) != (char *)0x358) {
        FUN_10001b60(local_358,local_354);
      }
      FUN_100982e8(auStack_760,2);
    }
  }
  else if (((*(int *)(param_3 + 0x18) == 0x7363656e) && (bVar2)) &&
          (*(char *)(param_1 + 0x41) == '\0')) {
    FUN_10117884((int)*(int **)(iVar11 + 0x148) +
                 (int)*(short *)(**(int **)(iVar11 + 0x148) + 0x2b8));
    uVar6 = (unsigned long long)local_8dc;
    piVar5 = (int *)FUN_10052184(0x5343454e,10000,1);
    if (piVar5 != (int *)0x0) {
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xe0),auStack_7b8,0x54);
      uVar6 = (unsigned long long)local_8dc;
      FUN_100523a8(piVar5,1);
      FUN_100b19f4(auStack_8b8,auStack_7b8);
      FUN_10090e0c(uVar10,0x6e616d65,auStack_8b8,1);
    }
    uVar8 = FUN_10051f98(0x44415420,(unsigned long long)*(unsigned int *)((int)uVar6 + -0x1158) + 0x18,1);
    if ((int)uVar8 == 0) {
      FUN_100b19f4(auStack_148,auStack_79c);
      FUN_10090e0c(uVar10,0x73747231,auStack_148,1);
    }
    else {
      FUN_10052490(uVar8,auStack_510,0xaa);
      FUN_100523a8(uVar8,1);
      iVar11 = 0;
      do {
        FUN_100b19f4(auStack_458,auStack_4fc + iVar11 * 0x1e);
        FUN_10090e0c(uVar10,iVar11 + 0x73747231,auStack_458,1);
        sVar7 = (short)iVar11 + 1;
        iVar11 = (int)sVar7;
      } while (sVar7 < 5);
      FUN_100b19f4(auStack_348,(unsigned long long)*(unsigned int *)((int)uVar6 + -0x1158) + 0x24);
      FUN_10090e0c(uVar10,0x62792020,auStack_348,1);
      FUN_100b19f4(auStack_248,auStack_510);
      FUN_10090e0c(uVar10,0x64657369,auStack_248,1);
    }
    *(char *)(param_1 + 0x41) = 1;
  }
  piVar5 = *(int **)(param_1 + 8);
  piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x63726564);
  if (piVar4 != (int *)0x0) {
    uVar6 = (unsigned long long)*(unsigned int *)(param_3 + 0x18);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),
                 ('d' - ((0x63726564 < uVar6) + 'd')) +
                 (0x63726563 < uVar6 && (unsigned long long)(0x63726564 < uVar6) <= uVar6 - 0x63726564),1);
  }
  piVar4 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x61646472);
  if (piVar4 != (int *)0x0) {
    uVar6 = (unsigned long long)*(unsigned int *)(param_3 + 0x18);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738),
                 ('r' - ((0x61646472 < uVar6) + 'r')) +
                 (0x61646471 < uVar6 && (unsigned long long)(0x61646472 < uVar6) <= uVar6 - 0x61646472),1);
  }
  piVar5 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x7363656e);
  if (piVar5 != (int *)0x0) {
    if ((*(int *)(param_3 + 0x18) == 0x7363656e) || (!bVar2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x738),uVar8,1);
  }
  return;
}

/* Address: 0x1009dae8 Size: 60 bytes */
void FUN_1009dae8(void)

{
  FUN_100c1c8c(uRam1011674c,*puRam10116750,0x44,uRam10116754,uRam101166b0);
  return;
}

/* Address: 0x1009db34 Size: 108 bytes */
int * FUN_1009db34(void)

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
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x144));
  }
  return puVar2;
}

/* Address: 0x1009dba0 Size: 128 bytes */
void FUN_1009dba0(long long param_1,long long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x72657365) {
    FUN_100aeafc();
  }
  else if (iVar1 == 0x6c656674) {
    FUN_100aeb94();
  }
  else if (iVar1 == 0x72696768) {
    FUN_100aed40();
  }
  else {
    FUN_100d5934();
  }
  return;
}

/* Address: 0x1009dc20 Size: 268 bytes */
void FUN_1009dc20(long long param_1,unsigned int param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d4a < param_2)) {
    if (param_2 == 0x63616e63) {
      FUN_1009e534(0x1ad);
    }
    else if (param_2 == 0x646f6e65) {
      FUN_1009e534(0x1ac);
    }
    else if (param_2 == 0x6c656674) {
      FUN_1009e534(0x1af);
    }
    else if (param_2 == 0x72657365) {
      FUN_1009e534(0x1ae);
    }
    else if (param_2 == 0x72696768) {
      FUN_1009e534(0x1b0);
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_100af0d4((short)param_2 + -0x6d30,0,0);
  }
  return;
}

/* Address: 0x1009dd2c Size: 132 bytes */
void FUN_1009dd2c(long long param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  int local_18;
  
  iVar1 = iRam101176c0;
  if ((param_2 < 0x61726d30) || (0x61726d4a < param_2)) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_18 = CONCAT22(*(short *)(iVar1 + 6),*(short *)(iVar1 + 4));
  *param_3 = local_18;
  return;
}

/* Address: 0x1009de54 Size: 40 bytes */
void FUN_1009de54(void)

{
  FUN_1009ddc0(0);
  return;
}

/* Address: 0x1009de7c Size: 820 bytes */
void FUN_1009de7c(int *param_1,char param_2,long long param_3,long long param_4,
                 int *param_5,char param_6,char param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned long long uVar4;
  char cStack0000001f;
  int local_ec;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  char auStack_b8 [8];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  char auStack_a0 [8];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int uStack_54;
  int local_50;
  int uStack_4c;
  
  if (param_6 != '\0') {
    local_50 = *param_5;
    uStack_4c = param_5[1];
    cStack0000001f = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2d0),&local_50);
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
    FUN_100db26c(piVar1);
    if ((param_7 == '\0') &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x3a8) + (int)piVar1), iVar2 != 0)) {
      local_80 = 0xf;
      local_7c = 0xf;
      local_88 = 0xf;
      local_84 = 0xf;
      FUN_100e10b0(&local_a8,&local_50,&local_88);
      FUN_100e10f8(&local_b0,&local_50,&local_80);
      local_68 = local_b0;
      local_64 = local_ac;
      local_60 = local_a8;
      local_5c = local_a4;
      FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_68,auStack_a0);
      FUN_10002118((unsigned long long)*(unsigned int *)(local_ec + -0xb0) + 0xb2);
      FUN_100b0578(auStack_a0);
      FUN_100021d8();
    }
    if (cStack0000001f == '\x01') {
      uVar4 = 0x61726d30;
      do {
        piVar3 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),uVar4);
        if (piVar3 != (int *)0x0) {
          local_58 = local_50;
          uStack_54 = uStack_4c;
          FUN_10117884((int)*(short *)(*piVar3 + 0x2d8) + (int)piVar3,&local_58);
          iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x538) + (int)piVar3,&local_58);
          if (iVar2 != 0) {
            FUN_100af268((short)uVar4 + -0x6d30);
          }
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < 0x61726d4b);
    }
    else if (cStack0000001f == '\x02') {
      FUN_100af52c();
    }
    if ((param_7 != '\0') &&
       (iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8)), iVar2 != 0)) {
      local_90 = 0xf;
      local_8c = 0xf;
      local_98 = 0xf;
      local_94 = 0xf;
      FUN_100e10b0(&local_c0,&local_50,&local_98);
      FUN_100e10f8(&local_c8,&local_50,&local_90);
      local_78 = local_c8;
      local_74 = local_c4;
      local_70 = local_c0;
      local_6c = local_bc;
      FUN_10000030();
      FUN_10002130(10);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_78,auStack_b8);
      FUN_10002118((unsigned long long)*(unsigned int *)(local_ec + -0xb0) + 0xb2);
      FUN_100b0578(auStack_b8);
      FUN_100021d8();
    }
  }
  return;
}

/* Address: 0x1009e1b0 Size: 84 bytes */
void FUN_1009e1b0(int param_1)

{
  FUN_100aeeec((short)*(int *)(param_1 + 0x18) + -0x6d30);
  return;
}

/* Address: 0x1009e2e0 Size: 92 bytes */
void FUN_1009e2e0(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_100c1c8c(uRam10116758,*puRam10116764,0x40,uRam10116768,uRam101166b0);
  FUN_100c1c8c((*(int*)((char*)ppuVar1 - 0x451)),*(int *)(*(int*)((char*)ppuVar1 - 0x44d)),0xbc,(*(int*)((char*)ppuVar1 - 0x44c)),ppuVar1[-1099]);
  return;
}

/* Address: 0x1009e33c Size: 504 bytes */
void FUN_1009e33c(short param_1,short param_2,short param_3)

{
  int iVar1;
  int *ppuVar2;
  long long uVar3;
  int iVar4;
  unsigned char local_110 [272];
  
  ppuVar2 = 0 /* TVect base */;
  if ((param_1 < 1) || (4 < param_1)) {
    if ((param_1 < 5) || (0x18 < param_1)) {
      if ((param_1 < 0x21) || (0x24 < param_1)) {
        if ((param_1 < 0x25) || (0x2c < param_1)) {
          if ((0x2c < param_1) && (param_1 < 0x48)) {
            FUN_100af0d4(param_1 + -0x2d,param_2,param_3);
          }
        }
        else {
          FUN_1005eec8(param_1 + -0x25,param_2,param_3);
        }
      }
      else {
        uVar3 = FUN_10075d94(*piRam1011734c,
                             *(short *)(*piRam1011734c + (short)(param_1 + -0x21) * 2 + 0x8c));
        local_110[0] = 0;
        FUN_100f2758(uVar3,local_110);
        if (local_110[local_110[0]] == 0xffffffc9) {
          local_110[0] = local_110[0] - 1;
        }
        FUN_1000a9e4(param_2,param_3,0);
        uVar3 = FUN_100b1b08(local_110);
        FUN_1000c3fc((*(int*)((char*)ppuVar2 - 0x44a)),uVar3);
      }
    }
    else {
      FUN_10049ebc(1,param_1 + -5);
    }
  }
  else if (-1 < *(char *)(*piRam1011735c + *psRam1011677c * 0x42 + (int)param_1 + 0x1619)) {
    iVar4 = *piRam1011735c + *psRam1011677c * 0x42;
    iVar1 = iVar4 + param_1;
    FUN_1000ba58(*(char *)(iVar4 + param_1 + 0x1619),*(char *)(iVar1 + 0x161d),
                 *(char *)(iVar1 + 0x1621),*(char *)(iVar1 + 0x1629),
                 *(char *)(iVar1 + 0x1625),param_2,param_3);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1009e534() { }





















































































/* Address: 0x1009e710 Size: 40 bytes */
void FUN_1009e710(void)

{
  FUN_1009e690(0);
  return;
}

/* Address: 0x1009e738 Size: 168 bytes */
void FUN_1009e738(long long param_1,int param_2)

{
  if (param_2 == 0x6f636375) {
    FUN_1009e534(0x120);
  }
  else if (param_2 == 0x70696c6c) {
    FUN_1009e534(0x11e);
  }
  else if (param_2 == 0x72617a65) {
    FUN_1009e534(0x11f);
  }
  else if (param_2 == 0x7361636b) {
    FUN_1009e534(0x121);
  }
  else {
    FUN_10078c58();
  }
  return;
}

/* Address: 0x1009e7e0 Size: 60 bytes */
void FUN_1009e7e0(void)

{
  FUN_100c1c8c(uRam10116780,*puRam10116788,0x40,uRam1011678c,uRam101166b0);
  return;
}

/* Address: 0x1009f244 Size: 96 bytes */
long long FUN_1009f244(int param_1)

{
  short sStack00000018;
  short sStack0000001a;
  
  sStack00000018 = (short)((unsigned int)param_1 >> 0x10);
  if (sStack00000018 == 0) {
    return 3;
  }
  sStack0000001a = (short)param_1;
  if (sStack0000001a == 0) {
    return 0;
  }
  if (sStack00000018 == 0x6f) {
    return 1;
  }
  if (sStack0000001a == 0x9b) {
    return 2;
  }
  return 0xffffffffffffffff;
}

/* Address: 0x1009f2a4 Size: 172 bytes */
void FUN_1009f2a4(short *param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  short sVar5;
  
  piVar2 = piRam101175f4;
  iVar4 = 0;
  do {
    iVar1 = *piRam101175f4 + iVar4 * 4;
    if ((*param_1 == *(short *)(iVar1 + 0xbc)) && (param_1[1] == *(short *)(iVar1 + 0xbe))) break;
    sVar5 = (short)iVar4 + 1;
    iVar4 = (int)sVar5;
  } while (sVar5 < 8);
  uVar3 = FUN_1005f230(1,5,(short)iVar4 + -2);
  *(int *)param_1 =
       *(int *)
        (*piVar2 + (short)((short)uVar3 -
                          (short)(((long long)((int)uVar3 >> 3) +
                                   (unsigned long long)((int)uVar3 < 0 && (uVar3 & 7) != 0) & 0xffffffff) <<
                                 3)) * 4 + 0xbc);
  return;
}

/* Address: 0x100a029c Size: 104 bytes */
int * FUN_100a029c(int *param_1)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = (int *)FUN_100f56e4(0x160),
     param_1 != (int *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = (*(int*)((char*)ppuVar1 - 0x441));
  }
  return param_1;
}

/* Address: 0x100a0304 Size: 40 bytes */
void FUN_100a0304(void)

{
  FUN_100a029c(0);
  return;
}

/* Address: 0x100a032c Size: 132 bytes */
void FUN_100a032c(int param_1)

{
  int *ppuVar1;
  int iVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if ((*(char *)(param_1 + 0x88) == '\0') || (iVar2 = FUN_100efb60(), iVar2 != 0)) {
    if ((*(char *)(param_1 + 0x88) == '\0') && (*(int *)(param_1 + 4) == 0x834)) {
      *(char *)(param_1 + 0x1d) = 1;
    }
  }
  else {
    FUN_1007c618(*(int *)(param_1 + 0x18),*(short *)(*(int *)(*(int*)((char*)ppuVar1 - 0x70)) + 0x12),
                 *(short *)(*(int *)(*(int*)((char*)ppuVar1 - 0x70)) + 0x14));
  }
  return;
}

/* Address: 0x100a03b0 Size: 360 bytes */
void FUN_100a03b0(int param_1,long long param_2,long long param_3,int *param_4,long long param_5,
                 short param_6,short param_7)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  short *psVar7;
  int *puVar8;
  int *piVar9;
  int iVar10;
  long long uVar11;
  int iVar12;
  char uVar13;
  int iVar14;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar10 = iRam101176e8;
  piVar9 = piRam101176e0;
  if ((int)param_3 == 0x834) {
    *(short *)(param_1 + 0x15c) = 0;
    if (*piVar9 != 0) {
      iVar12 = 7;
      do {
        iVar14 = *(int *)(iVar12 * 4 + iVar10);
        if (iVar14 != 0) {
          *(int *)(param_1 + *(short *)(param_1 + 0x15c) * 4 + 0x13c) = iVar14;
          puVar8 = *(int **)(iVar12 * 4 + iVar10);
          iVar14 = param_1 + *(short *)(param_1 + 0x15c) * 0x16;
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          uVar4 = puVar8[4];
          uVar5 = puVar8[5];
          *(int *)(iVar14 + 0x8a) = *puVar8;
          *(int *)(iVar14 + 0x8e) = uVar1;
          *(int *)(iVar14 + 0x92) = uVar2;
          *(int *)(iVar14 + 0x96) = uVar3;
          *(int *)(iVar14 + 0x9a) = uVar4;
          *(unsigned int *)(iVar14 + 0x9e) = uVar5 & 0xffff0000;
          *(short *)(param_1 + 0x15c) = *(short *)(param_1 + 0x15c) + 1;
        }
        bVar6 = iVar12 != 0;
        iVar12 = (int)(short)((short)iVar12 + -1);
      } while (bVar6);
    }
    FUN_10021524(param_6,param_7,0);
  }
  uVar11 = FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x5f0),1);
  FUN_100c4548(param_1,param_3,param_2,0,1,param_2,param_4,uVar11);
  *(short *)(param_1 + 0x84) = param_6;
  *(short *)(param_1 + 0x86) = param_7;
  psVar7 = (short *)*piVar9;
  if ((param_6 == *psVar7) && (param_7 == psVar7[1])) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  *(char *)(param_1 + 0x88) = uVar13;
  return;
}

/* Address: 0x100a0518 Size: 132 bytes */
void FUN_100a0518(int param_1,char param_2,long long param_3,long long param_4,int *param_5,
                 char param_6,char param_7)

{
  FUN_100c4718(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((*(short *)(param_1 + 0x84) != (short)(param_5[1] / 0x28)) ||
     (*(short *)(param_1 + 0x86) != (short)(*param_5 / 0x28))) {
    *(char *)(param_1 + 0x88) = 1;
  }
  return;
}

/* Address: 0x100a059c Size: 64 bytes */
void FUN_100a059c(int param_1)

{
  FUN_10021524(*(short *)(param_1 + 0x84),*(short *)(param_1 + 0x86),0);
  return;
}

/* Address: 0x100a05dc Size: 164 bytes */
void FUN_100a05dc(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int *puVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar9 = 0;
  if (0 < *(short *)(param_1 + 0x15c)) {
    do {
      iVar7 = param_1 + iVar9 * 0x16;
      puVar6 = *(int **)(param_1 + iVar9 * 4 + 0x13c);
      uVar1 = *(int *)(iVar7 + 0x8e);
      uVar2 = *(int *)(iVar7 + 0x92);
      uVar3 = *(int *)(iVar7 + 0x96);
      uVar4 = *(int *)(iVar7 + 0x9a);
      uVar5 = *(unsigned int *)(iVar7 + 0x9e);
      *puVar6 = *(int *)(iVar7 + 0x8a);
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      puVar6[5] = uVar5 & 0xffff0000;
      sVar8 = (short)iVar9 + 1;
      iVar9 = (int)sVar8;
    } while (sVar8 < *(short *)(param_1 + 0x15c));
  }
  if (*(short *)(param_1 + 0x15c) == 0) {
    FUN_1003fe5c();
  }
  else {
    FUN_10055c64(*(int *)(param_1 + 0x13c));
    FUN_1005cc8c();
  }
  return;
}

/* Address: 0x100a0690 Size: 108 bytes */
int * FUN_100a0690(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x10c);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x43f));
    puVar2[0xc] = 0;
    *(short *)(puVar2 + 0xd) = 0;
    *(short *)((int)puVar2 + 0x36) = 0;
    *(short *)(puVar2 + 0x42) = 0;
  }
  return puVar2;
}

/* Address: 0x100a06fc Size: 68 bytes */
void FUN_100a06fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d8) == param_1)) {
    *(int *)(iVar1 + 0x1d8) = 0;
  }
  FUN_100c3e70();
  return;
}

/* Address: 0x100a0740 Size: 264 bytes */
void FUN_100a0740(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  int *puVar7;
  int *piVar8;
  int *ppuVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar10 = iRam101176e8;
  piVar8 = piRam10117368;
  ppuVar9 = 0 /* TVect base */;
  *(short *)(param_1 + 0x108) = 0;
  if (*piRam101176e0 != 0) {
    iVar11 = 7;
    do {
      iVar12 = *(int *)(iVar11 * 4 + iVar10);
      if (iVar12 != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x108) * 4 + 0xe8) = iVar12;
        puVar7 = *(int **)(iVar11 * 4 + iVar10);
        iVar12 = param_1 + *(short *)(param_1 + 0x108) * 0x16;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[5];
        *(int *)(iVar12 + 0x38) = *puVar7;
        *(int *)(iVar12 + 0x3c) = uVar1;
        *(int *)(iVar12 + 0x40) = uVar2;
        *(int *)(iVar12 + 0x44) = uVar3;
        *(int *)(iVar12 + 0x48) = uVar4;
        *(unsigned int *)(iVar12 + 0x4c) = uVar5 & 0xffff0000;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
      }
      bVar6 = iVar11 != 0;
      iVar11 = (int)(short)((short)iVar11 + -1);
    } while (bVar6);
  }
  if (*piVar8 == 0) {
    ppuVar9 = 0 /* TVect base */;
    iVar10 = FUN_100f1640(0x8880);
    *piVar8 = iVar10;
  }
  FUN_10002340(*(int *)(*(int*)((char*)ppuVar9 - 0x152)),*piVar8,0x8880);
  FUN_100419b0(*(short *)(param_1 + 0x34),*(short *)(param_1 + 0x36),1);
  return;
}

/* Address: 0x100a0848 Size: 56 bytes */
void FUN_100a0848(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  return;
}

/* Address: 0x100a0880 Size: 160 bytes */
void FUN_100a0880(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int *puVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar7 = 0;
  if (0 < *(short *)(param_1 + 0x108)) {
    do {
      iVar8 = param_1 + iVar7 * 0x16;
      puVar6 = *(int **)(param_1 + iVar7 * 4 + 0xe8);
      uVar1 = *(int *)(iVar8 + 0x3c);
      uVar2 = *(int *)(iVar8 + 0x40);
      uVar3 = *(int *)(iVar8 + 0x44);
      uVar4 = *(int *)(iVar8 + 0x48);
      uVar5 = *(unsigned int *)(iVar8 + 0x4c);
      *puVar6 = *(int *)(iVar8 + 0x38);
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      puVar6[5] = uVar5 & 0xffff0000;
      sVar9 = (short)iVar7 + 1;
      iVar7 = (int)sVar9;
    } while (sVar9 < *(short *)(param_1 + 0x108));
  }
  FUN_10002340(*puRam10117368,*puRam10117358,0x8880);
  FUN_10055c64(*(int *)(param_1 + 0xe8));
  FUN_1005cc8c();
  return;
}

/* Address: 0x100a0920 Size: 8 bytes */
int FUN_100a0920(void)

{
  return uRam101167a8;
}

/* Address: 0x100a0930 Size: 120 bytes */
int * FUN_100a0930(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x118);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    puVar2[0xc] = 0;
    *(short *)(puVar2 + 0xd) = 0;
    *(short *)((int)puVar2 + 0x36) = 0;
    *(short *)(puVar2 + 0x42) = 0;
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x565));
    *(char *)(puVar2 + 0x43) = 0;
    *(short *)((int)puVar2 + 0x10e) = 0;
  }
  return puVar2;
}

/* Address: 0x100a09a8 Size: 352 bytes */
void FUN_100a09a8(int param_1,long long param_2,short param_3)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  int *puVar7;
  int *piVar8;
  int *piVar9;
  int *ppuVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar11 = iRam101176e8;
  piVar9 = piRam101176e0;
  piVar8 = piRam10117368;
  ppuVar10 = 0 /* TVect base */;
  FUN_100db26c(*piRam101176e0);
  FUN_100c3df8(param_1,0x57a,param_2,1,1,param_2);
  *(int *)(param_1 + 0x30) = (int)param_2;
  *(short *)(param_1 + 0x34) = 0xffff;
  *(short *)(param_1 + 0x36) = 0xffff;
  *(short *)(param_1 + 0x10e) = param_3;
  *(int *)(param_1 + 0x110) = *piVar9;
  *(short *)(param_1 + 0x114) = *(short *)*piVar9;
  *(short *)(param_1 + 0x116) = *(short *)(*piVar9 + 2);
  *(short *)(param_1 + 0x108) = 0;
  if (*piVar9 != 0) {
    iVar12 = 7;
    do {
      iVar13 = *(int *)(iVar12 * 4 + iVar11);
      if (iVar13 != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x108) * 4 + 0xe8) = iVar13;
        puVar7 = *(int **)(iVar12 * 4 + iVar11);
        iVar13 = param_1 + *(short *)(param_1 + 0x108) * 0x16;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[5];
        *(int *)(iVar13 + 0x38) = *puVar7;
        *(int *)(iVar13 + 0x3c) = uVar1;
        *(int *)(iVar13 + 0x40) = uVar2;
        *(int *)(iVar13 + 0x44) = uVar3;
        *(int *)(iVar13 + 0x48) = uVar4;
        *(unsigned int *)(iVar13 + 0x4c) = uVar5 & 0xffff0000;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
      }
      bVar6 = iVar12 != 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
    } while (bVar6);
  }
  if (*piVar8 == 0) {
    iVar11 = FUN_100f1640(0x8880);
    *piVar8 = iVar11;
  }
  FUN_10002340(*(int *)(*(int*)((char*)ppuVar10 - 0x152)),*piVar8,0x8880);
  return;
}

/* Address: 0x100a0b08 Size: 448 bytes */
void FUN_100a0b08(int param_1,short param_2)

{
  short uVar1;
  short uVar2;
  int bVar3;
  int *piVar4;
  int iVar5;
  char uVar6;
  
  piVar4 = piRam101176e0;
  uVar1 = *(short *)(*piRam101176e0 + 0x12);
  *(short *)(param_1 + 0x34) = uVar1;
  uVar2 = *(short *)(*piVar4 + 0x14);
  *(short *)(param_1 + 0x36) = uVar2;
  bVar3 = false;
  if ((*(short *)(*piVar4 + 0x12) == -1) || (*(short *)(*piVar4 + 0x14) == -1)) {
    *(short *)(param_1 + 0x34) = *(short *)*piVar4;
    *(short *)(param_1 + 0x36) = *(short *)(*piVar4 + 2);
  }
  FUN_10017170(param_1 + 0x34,param_1 + 0x36,param_2);
  if ((*(short *)(*piVar4 + 0x12) == -1) || (*(short *)(*piVar4 + 0x14) == -1)) {
    iVar5 = FUN_1003b4a4(*(short *)(param_1 + 0x34),*(short *)(param_1 + 0x36),1);
    if ((iVar5 == 10) || (iVar5 == 8)) {
      *(char *)(param_1 + 0x2c) = 0;
      FUN_1002da54(*(short *)(param_1 + 0x34),*(short *)(param_1 + 0x36));
      *(char *)(param_1 + 0x1d) = 0;
      bVar3 = true;
    }
  }
  if ((!bVar3) &&
     (((iVar5 = FUN_100419b0(*(short *)(param_1 + 0x34),*(short *)(param_1 + 0x36),0),
       iVar5 == 1 || (iVar5 == 3)) || (iVar5 == 5)))) {
    *(short *)(*piVar4 + 0x12) = uVar1;
    *(short *)(*piVar4 + 0x14) = uVar2;
  }
  if ((*(char *)(param_1 + 0x1d) == '\0') ||
     ((*(short *)*piVar4 == *(short *)(param_1 + 0x114) &&
      (((short *)*piVar4)[1] == *(short *)(param_1 + 0x116))))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(char *)(param_1 + 0x1d) = uVar6;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(char *)(param_1 + 0x2c) = 1;
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x228));
  }
  return;
}

/* Address: 0x100a0cf4 Size: 108 bytes */
void FUN_100a0cf4(int param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = *(short *)(*piRam101176e0 + 0x12);
  if ((sVar1 != -1) && (sVar2 = *(short *)(*piRam101176e0 + 0x14), sVar2 != -1)) {
    FUN_100419b0(sVar1,sVar2,0);
  }
  FUN_100a0b08(param_1,*(short *)(param_1 + 0x10e));
  return;
}

/* Address: 0x100a0d60 Size: 64 bytes */
void FUN_100a0d60(int param_1)

{
  FUN_100419b0(*(short *)(param_1 + 0x34),*(short *)(param_1 + 0x36),0);
  return;
}

/* Address: 0x100a0da0 Size: 232 bytes */
void FUN_100a0da0(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int uVar2;
  int uVar3;
  int uVar4;
  
  *(char *)(param_1 + 0x10c) = 1;
  iVar8 = *(int *)(param_1 + 0x110);
  if ((*(short *)(iVar8 + 0x12) != -1) && (*(short *)(iVar8 + 0x14) != -1)) {
    *(short *)(param_1 + 0x34) = *(short *)(iVar8 + 0x12);
    *(short *)(param_1 + 0x36) = *(short *)(iVar8 + 0x14);
  }
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x108)) {
    do {
      iVar9 = param_1 + iVar8 * 0x16;
      iVar10 = param_1 + iVar8 * 4;
      puVar6 = *(int **)(iVar10 + 0xe8);
      uVar1 = *(int *)(iVar9 + 0x3c);
      uVar2 = *(int *)(iVar9 + 0x40);
      uVar3 = *(int *)(iVar9 + 0x44);
      uVar4 = *(int *)(iVar9 + 0x48);
      uVar5 = *(unsigned int *)(iVar9 + 0x4c);
      *puVar6 = *(int *)(iVar9 + 0x38);
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      puVar6[5] = uVar5 & 0xffff0000;
      *(short *)(*(int *)(iVar10 + 0xe8) + 0x12) = *(short *)(param_1 + 0x34);
      *(short *)(*(int *)(iVar10 + 0xe8) + 0x14) = *(short *)(param_1 + 0x36);
      sVar7 = (short)iVar8 + 1;
      iVar8 = (int)sVar7;
    } while (sVar7 < *(short *)(param_1 + 0x108));
  }
  FUN_10002340(*puRam10117368,*puRam10117358,0x8880);
  FUN_10055c64(*(int *)(param_1 + 0xe8));
  FUN_1005cc8c();
  return;
}

/* Address: 0x100a0e90 Size: 116 bytes */
int * FUN_100a0e90(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x1e0);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x43c));
    puVar2[0xc] = 0;
    *(short *)(puVar2 + 0x41) = 0;
    *(short *)(puVar2 + 0x76) = 0;
    *(short *)((int)puVar2 + 0x1da) = 0xffff;
    *(short *)(puVar2 + 0x77) = 0xffff;
  }
  return puVar2;
}

/* Address: 0x100a0f04 Size: 296 bytes */
void FUN_100a0f04(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  int iVar7;
  int *puVar8;
  int iVar9;
  int iVar10;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar7 = iRam101176e8;
  *(short *)(param_1 + 0x104) = 0;
  if (*piRam101176e0 != 0) {
    iVar9 = 7;
    do {
      iVar10 = *(int *)(iVar9 * 4 + iVar7);
      if (iVar10 != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x104) * 4 + 0xe4) = iVar10;
        puVar8 = *(int **)(iVar9 * 4 + iVar7);
        iVar10 = param_1 + *(short *)(param_1 + 0x104) * 0x16;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        uVar4 = puVar8[4];
        uVar5 = puVar8[5];
        *(int *)(iVar10 + 0x34) = *puVar8;
        *(int *)(iVar10 + 0x38) = uVar1;
        *(int *)(iVar10 + 0x3c) = uVar2;
        *(int *)(iVar10 + 0x40) = uVar3;
        *(int *)(iVar10 + 0x44) = uVar4;
        *(unsigned int *)(iVar10 + 0x48) = uVar5 & 0xffff0000;
        *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 1;
      }
      bVar6 = iVar9 != 0;
      iVar9 = (int)(short)((short)iVar9 + -1);
    } while (bVar6);
  }
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 == 0x57d) {
    FUN_1003fd64();
  }
  else if (iVar7 == 0x57e) {
    FUN_1003fd90();
  }
  else if (iVar7 == 0x57f) {
    FUN_1003fdd8();
  }
  else if (iVar7 == 0x580) {
    FUN_1003fe5c();
  }
  else if (iVar7 == 0x834) {
    FUN_10021524(*(short *)(param_1 + 0x1da),*(short *)(param_1 + 0x1dc),0);
  }
  return;
}

/* Address: 0x100a102c Size: 164 bytes */
void FUN_100a102c(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int *puVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar9 = 0;
  if (0 < *(short *)(param_1 + 0x1d8)) {
    do {
      iVar7 = param_1 + iVar9 * 0x16;
      puVar6 = *(int **)(param_1 + iVar9 * 4 + 0x1b8);
      uVar1 = *(int *)(iVar7 + 0x10a);
      uVar2 = *(int *)(iVar7 + 0x10e);
      uVar3 = *(int *)(iVar7 + 0x112);
      uVar4 = *(int *)(iVar7 + 0x116);
      uVar5 = *(unsigned int *)(iVar7 + 0x11a);
      *puVar6 = *(int *)(iVar7 + 0x106);
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      puVar6[5] = uVar5 & 0xffff0000;
      sVar8 = (short)iVar9 + 1;
      iVar9 = (int)sVar8;
    } while (sVar8 < *(short *)(param_1 + 0x1d8));
  }
  if (*(short *)(param_1 + 0x1d8) == 0) {
    FUN_1003fe5c();
  }
  else {
    FUN_10055c64(*(int *)(param_1 + 0x1b8));
    FUN_1005cc8c();
  }
  return;
}

/* Address: 0x100a10d0 Size: 288 bytes */
void FUN_100a10d0(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  int *puVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar10 = iRam101176e8;
  *(short *)(param_1 + 0x1d8) = 0;
  if (*piRam101176e0 != 0) {
    iVar9 = 7;
    do {
      iVar11 = *(int *)(iVar9 * 4 + iVar10);
      if (iVar11 != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x1d8) * 4 + 0x1b8) = iVar11;
        puVar7 = *(int **)(iVar9 * 4 + iVar10);
        iVar11 = param_1 + *(short *)(param_1 + 0x1d8) * 0x16;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[5];
        *(int *)(iVar11 + 0x106) = *puVar7;
        *(int *)(iVar11 + 0x10a) = uVar1;
        *(int *)(iVar11 + 0x10e) = uVar2;
        *(int *)(iVar11 + 0x112) = uVar3;
        *(int *)(iVar11 + 0x116) = uVar4;
        *(unsigned int *)(iVar11 + 0x11a) = uVar5 & 0xffff0000;
        *(short *)(param_1 + 0x1d8) = *(short *)(param_1 + 0x1d8) + 1;
      }
      bVar6 = iVar9 != 0;
      iVar9 = (int)(short)((short)iVar9 + -1);
    } while (bVar6);
  }
  iVar10 = 0;
  if (0 < *(short *)(param_1 + 0x104)) {
    do {
      iVar9 = param_1 + iVar10 * 0x16;
      puVar7 = *(int **)(param_1 + iVar10 * 4 + 0xe4);
      uVar1 = *(int *)(iVar9 + 0x38);
      uVar2 = *(int *)(iVar9 + 0x3c);
      uVar3 = *(int *)(iVar9 + 0x40);
      uVar4 = *(int *)(iVar9 + 0x44);
      uVar5 = *(unsigned int *)(iVar9 + 0x48);
      *puVar7 = *(int *)(iVar9 + 0x34);
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar7[4] = uVar4;
      puVar7[5] = uVar5 & 0xffff0000;
      sVar8 = (short)iVar10 + 1;
      iVar10 = (int)sVar8;
    } while (sVar8 < *(short *)(param_1 + 0x104));
  }
  if (*(short *)(param_1 + 0x104) == 0) {
    FUN_1003fe5c();
  }
  else {
    FUN_10055c64(*(int *)(param_1 + 0xe4));
    FUN_1005cc8c();
  }
  return;
}

/* Address: 0x100a11f8 Size: 104 bytes */
int * FUN_100a11f8(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x108);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x43a));
    *(short *)(puVar2 + 0xc) = 0xffff;
    *(short *)((int)puVar2 + 0x32) = 0xffff;
    *(short *)(puVar2 + 0x41) = 0;
  }
  return puVar2;
}

/* Address: 0x100a1260 Size: 208 bytes */
void FUN_100a1260(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  int *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar9 = iRam101176e8;
  piVar8 = piRam101176e0;
  *(short *)(param_1 + 0x104) = 0;
  if (*piVar8 != 0) {
    iVar10 = 7;
    do {
      iVar11 = *(int *)(iVar10 * 4 + iVar9);
      if (iVar11 != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x104) * 4 + 0xe4) = iVar11;
        puVar7 = *(int **)(iVar10 * 4 + iVar9);
        iVar11 = param_1 + *(short *)(param_1 + 0x104) * 0x16;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[5];
        *(int *)(iVar11 + 0x34) = *puVar7;
        *(int *)(iVar11 + 0x38) = uVar1;
        *(int *)(iVar11 + 0x3c) = uVar2;
        *(int *)(iVar11 + 0x40) = uVar3;
        *(int *)(iVar11 + 0x44) = uVar4;
        *(unsigned int *)(iVar11 + 0x48) = uVar5 & 0xffff0000;
        *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 1;
      }
      bVar6 = iVar10 != 0;
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (bVar6);
  }
  *(short *)(param_1 + 0x30) = *(short *)(*piVar8 + 0x12);
  *(short *)(param_1 + 0x32) = *(short *)(*piVar8 + 0x14);
  FUN_1003ffa8();
  return;
}

/* Address: 0x100a1330 Size: 36 bytes */
void FUN_100a1330(void)

{
  FUN_1003ffa8();
  return;
}

/* Address: 0x100a1354 Size: 68 bytes */
void FUN_100a1354(int param_1)

{
  FUN_100416f4(*(short *)(param_1 + 0x30),*(short *)(param_1 + 0x32),0,1);
  return;
}

/* Address: 0x100a13a0 Size: 112 bytes */
int * FUN_100a13a0(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0x10c);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x53b));
    *(short *)(puVar2 + 0xc) = 0xffff;
    *(short *)((int)puVar2 + 0x32) = 0xffff;
    *(short *)(puVar2 + 0xd) = 0xffff;
    *(short *)((int)puVar2 + 0x36) = 0xffff;
    *(short *)(puVar2 + 0x42) = 0;
  }
  return puVar2;
}

/* Address: 0x100a1410 Size: 228 bytes */
void FUN_100a1410(int param_1)

{
  int uVar1;
  unsigned int uVar5;
  int bVar6;
  int *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int uVar2;
  int uVar3;
  int uVar4;
  
  iVar9 = iRam101176e8;
  piVar8 = piRam101176e0;
  *(short *)(param_1 + 0x108) = 0;
  if (*piVar8 != 0) {
    iVar10 = 7;
    do {
      iVar11 = *(int *)(iVar10 * 4 + iVar9);
      if (iVar11 != 0) {
        *(int *)(param_1 + *(short *)(param_1 + 0x108) * 4 + 0xe8) = iVar11;
        puVar7 = *(int **)(iVar10 * 4 + iVar9);
        iVar11 = param_1 + *(short *)(param_1 + 0x108) * 0x16;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar4 = puVar7[4];
        uVar5 = puVar7[5];
        *(int *)(iVar11 + 0x38) = *puVar7;
        *(int *)(iVar11 + 0x3c) = uVar1;
        *(int *)(iVar11 + 0x40) = uVar2;
        *(int *)(iVar11 + 0x44) = uVar3;
        *(int *)(iVar11 + 0x48) = uVar4;
        *(unsigned int *)(iVar11 + 0x4c) = uVar5 & 0xffff0000;
        *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + 1;
      }
      bVar6 = iVar10 != 0;
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (bVar6);
  }
  *(short *)(param_1 + 0x34) = *(short *)(*piVar8 + 0x12);
  *(short *)(param_1 + 0x36) = *(short *)(*piVar8 + 0x14);
  FUN_100416f4(*(short *)(param_1 + 0x30),*(short *)(param_1 + 0x32),0,1);
  return;
}

/* Address: 0x100a14f4 Size: 68 bytes */
void FUN_100a14f4(int param_1)

{
  FUN_100416f4(*(short *)(param_1 + 0x30),*(short *)(param_1 + 0x32),0,1);
  return;
}

/* Address: 0x100a1538 Size: 104 bytes */
void FUN_100a1538(int param_1)

{
  if ((*(short *)(param_1 + 0x34) == -1) || (*(short *)(param_1 + 0x36) == -1)) {
    FUN_1003ffa8();
  }
  else {
    FUN_100416f4(*(short *)(param_1 + 0x34),*(short *)(param_1 + 0x36),0,1);
  }
  return;
}

/* Address: 0x100a15a8 Size: 92 bytes */
int * FUN_100a15a8(void)

{
  int *ppuVar1;
  int *puVar2;
  
  ppuVar1 = 0 /* TVect base */;
  puVar2 = (int *)FUN_100f56e4(0xb4);
  if (puVar2 != (int *)0x0) {
    FUN_100c3d2c(puVar2);
    *puVar2 = (*(int*)((char*)ppuVar1 - 0x437));
    *(short *)(puVar2 + 0x2c) = 0;
  }
  return puVar2;
}

/* Address: 0x100a1604 Size: 168 bytes */
void FUN_100a1604(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  unsigned long long uVar6;
  
  iVar4 = iRam101176f8;
  iVar3 = iRam101176f0;
  iVar1 = iRam101176ec;
  uVar6 = 0;
  do {
    iVar2 = (int)((uVar6 & 0x7fffffff) << 1);
    *(short *)(iVar2 + param_1 + 0x30) = *(short *)(iVar2 + iVar1);
    *(short *)(iVar2 + param_1 + 0x40) = *(short *)(iVar2 + iVar3);
    iVar2 = (int)((uVar6 & 0xffffffff) << 2);
    *(int *)(param_1 + iVar2 + 0x50) = *(int *)(iVar2 + iVar4);
    sVar5 = (short)uVar6 + 1;
    uVar6 = (unsigned long long)sVar5;
  } while (sVar5 < 8);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x836) {
    FUN_1005d0cc(*(short *)(param_1 + 0xb0));
  }
  else if (iVar1 == 0x578) {
    FUN_1005d240();
  }
  else if (iVar1 == 0x579) {
    FUN_1005d2dc();
  }
  return;
}

/* Address: 0x100a16ac Size: 140 bytes */
void FUN_100a16ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned long long uVar5;
  short sVar6;
  
  iVar4 = iRam101176f8;
  iVar3 = iRam101176f0;
  iVar2 = iRam101176ec;
  uVar5 = 0;
  do {
    iVar1 = (int)((uVar5 & 0x7fffffff) << 1);
    *(short *)(iVar1 + iVar2) = *(short *)(param_1 + iVar1 + 0x70);
    *(short *)(iVar1 + iVar3) = *(short *)(param_1 + iVar1 + 0x80);
    iVar1 = (int)((uVar5 & 0x3fffffff) << 2);
    *(int *)(iVar1 + iVar4) = *(int *)(param_1 + iVar1 + 0x90);
    sVar6 = (short)uVar5 + 1;
    uVar5 = (unsigned long long)sVar6;
  } while (sVar6 < 8);
  FUN_1005c2d4(1);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}

/* Address: 0x100a1738 Size: 164 bytes */
void FUN_100a1738(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = iRam101176f8;
  iVar2 = iRam101176f0;
  iVar1 = iRam101176ec;
  iVar6 = 0;
  do {
    iVar4 = iVar6 * 2;
    iVar7 = iVar4 + param_1;
    *(short *)(iVar7 + 0x70) = *(short *)(iVar4 + iVar1);
    *(short *)(iVar7 + 0x80) = *(short *)(iVar4 + iVar2);
    iVar8 = iVar6 * 4;
    *(int *)(param_1 + iVar8 + 0x90) = *(int *)(iVar8 + iVar3);
    *(short *)(iVar4 + iVar1) = *(short *)(iVar7 + 0x30);
    *(short *)(iVar4 + iVar2) = *(short *)(iVar7 + 0x40);
    *(int *)(iVar8 + iVar3) = *(int *)(param_1 + iVar8 + 0x50);
    sVar5 = (short)iVar6 + 1;
    iVar6 = (int)sVar5;
  } while (sVar5 < 8);
  FUN_1005c2d4(1);
  FUN_1005c7d0(0);
  FUN_1005cc8c();
  FUN_1003dc28();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a17dc() { }




















/* Address: 0x100a1978 Size: 40 bytes */
void FUN_100a1978(void)

{
  FUN_100a18f8(0);
  return;
}

/* Address: 0x100a19a0 Size: 216 bytes */
void FUN_100a19a0(int param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar4 = 0;
  while ((piVar2 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),
                                       iVar4 + 0x62757431), piVar2 == (int *)0x0 ||
         (*(char *)(piVar2 + 0x21) == '\0'))) {
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
    if (3 < sVar3) {
      return;
    }
  }
  if (3 < iVar4) {
    return;
  }
  *(short *)(param_1 + iVar4 * 2 + 0x40) = param_2 + -0x6761;
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_10117884((int)*(short *)(*piVar2 + 0x7a8) + (int)piVar2,param_2 + -0x6761,1);
  return;
}

/* Address: 0x100a1a7c Size: 288 bytes */
void FUN_100a1a7c(int param_1,unsigned long long param_2)

{
  int *piVar1;
  short sVar4;
  int iVar2;
  int *piVar3;
  unsigned long long uVar5;
  long long lVar6;
  
  piVar3 = *(int **)(param_1 + 8);
  lVar6 = 0;
  do {
    uVar5 = lVar6 + 0x62757431;
    piVar1 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),uVar5);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x748) + (int)piVar1,
                   (param_2 <= uVar5 && (unsigned long long)(param_2 < uVar5) <= uVar5 - param_2) -
                   (param_2 < uVar5),1);
    }
    sVar4 = (short)lVar6 + 1;
    lVar6 = (long long)sVar4;
  } while (sVar4 < 4);
  iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),param_2);
  if (iVar2 != 0) {
    sVar4 = *(short *)(iVar2 + 0xaa);
    piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x73686f72);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x7c8) + (int)piVar3,(long long)sVar4 + 0x73686761);
    }
  }
  return;
}

/* Address: 0x100a1b9c Size: 140 bytes */
void FUN_100a1b9c(long long param_1,long long param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_3 + 0x18);
  if ((uVar1 < 0x73686f31) || (0x73686f4a < uVar1)) {
    uVar1 = *(unsigned int *)(param_3 + 0x18);
    if ((uVar1 < 0x62757431) || (0x62757434 < uVar1)) {
      FUN_100d5934();
    }
    else {
      FUN_100a1a7c(param_1,uVar1);
    }
  }
  else {
    FUN_100a19a0(param_1,uVar1);
  }
  return;
}

/* Address: 0x100a1c28 Size: 192 bytes */
void FUN_100a1c28(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  
  piVar3 = piRam1011734c;
  piVar1 = *(int **)(param_1 + 8);
  iVar6 = 0;
  do {
    iVar2 = iVar6 * 2 + param_1;
    *(short *)(iVar2 + 0x40) = *(short *)(*piVar3 + iVar6 * 2 + 0x8c);
    piVar4 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),iVar6 + 0x62757431);
    if (piVar4 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar4 + 0x7a8) + (int)piVar4,*(short *)(iVar2 + 0x40),1);
    }
    sVar5 = (short)iVar6 + 1;
    iVar6 = (int)sVar5;
  } while (sVar5 < 4);
  FUN_100a1a7c(param_1,0x62757431);
  return;
}

/* Address: 0x100a1ce8 Size: 104 bytes */
void FUN_100a1ce8(int param_1)

{
  int *puVar1;
  short sVar2;
  int iVar3;
  
  puVar1 = puRam1011734c;
  iVar3 = 0;
  do {
    FUN_10075ee0(*puVar1,iVar3,*(short *)(param_1 + iVar3 * 2 + 0x40));
    sVar2 = (short)iVar3 + 1;
    iVar3 = (int)sVar2;
  } while (sVar2 < 4);
  FUN_10075f80(*puVar1);
  return;
}

/* Address: 0x100a1d50 Size: 60 bytes */
void FUN_100a1d50(void)

{
  FUN_100c1c8c(uRam10116800,*puRam10116808,0x48,uRam1011680c,uRam101166b0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a2cc0() { }






























































































































/* Address: 0x100a3acc Size: 664 bytes */
void FUN_100a3acc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  unsigned int uVar9;
  short sVar10;
  unsigned long long uVar11;
  unsigned long long uVar12;
  unsigned long long uVar13;
  int iVar14;
  
  piVar8 = piRam101175f4;
  piVar7 = piRam101175f0;
  piVar6 = piRam1011735c;
  piVar5 = piRam10117358;
  uVar12 = 0;
  do {
    uVar13 = 0;
    do {
      uVar11 = uVar13 + uVar12;
      if (uVar11 == 0) {
LAB_100a3b14:
        bVar4 = false;
      }
      else {
        iVar14 = (int)uVar11;
        uVar9 = iVar14 - 1;
        if ((iVar14 >> 1) + (unsigned int)(iVar14 < 0 && (uVar11 & 1) != 0) !=
            ((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0)) goto LAB_100a3b14;
        bVar4 = true;
      }
      iVar2 = (int)uVar13;
      iVar14 = *piVar7 + (int)uVar12 * 0x70 + iVar2;
      if ((((*(char *)(iVar14 + 0x34a) == '\n') && (*(char *)(iVar14 + 0x2da) != '\n')) &&
          (*(char *)(iVar14 + 0x349) != '\n')) && ((0 < iVar2 && (0 < (int)uVar12)))) {
        iVar3 = (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0x7ffffff) << 5);
        iVar14 = (int)((uVar13 & 0x7fffffff) << 1);
        *(unsigned int *)(*piVar5 + iVar3 + iVar14) =
             (int)*(short *)(*piVar8 + 0x6e4) << 0x18 |
             *(unsigned int *)(*piVar5 + iVar3 + iVar14) & 0xffffff;
        iVar2 = iVar3 + *piVar5 + iVar14;
        *(unsigned int *)(iVar2 + 2) =
             (*(short *)(*piVar8 + 0x6e4) + 1) * 0x1000000 | *(unsigned int *)(iVar2 + 2) & 0xffffff;
        iVar2 = iVar3 + *piVar5 + iVar14;
        *(unsigned int *)(iVar2 + 0xe0) =
             (*(short *)(*piVar8 + 0x6e4) + 0x10) * 0x1000000 | *(unsigned int *)(iVar2 + 0xe0) & 0xffffff;
        iVar14 = iVar3 + *piVar5 + iVar14;
        *(unsigned int *)(iVar14 + 0xe2) =
             (*(short *)(*piVar8 + 0x6e4) + 0x11) * 0x1000000 | *(unsigned int *)(iVar14 + 0xe2) & 0xffffff;
      }
      else if (*(char *)(*piVar7 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 4) +
                         iVar2 + 0x34a) == '\v') {
        iVar14 = *piVar5 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5);
        iVar2 = (int)((uVar13 & 0xffffffff) << 1);
        *(unsigned int *)(iVar14 + iVar2) =
             (int)*(short *)(*piVar8 + (int)((long long)(short)(unsigned short)!bVar4 << 1) + 0x724) << 0x18
             | *(unsigned int *)(iVar14 + iVar2) & 0xffffff;
      }
      else {
        cVar1 = *(char *)(*piVar7 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 4) +
                          iVar2 + 0x34a);
        if (cVar1 != '\n') {
          iVar14 = *piVar5 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5);
          iVar2 = (int)((uVar13 & 0xffffffff) << 1);
          *(unsigned int *)(iVar14 + iVar2) =
               (int)*(short *)(*piVar8 + cVar1 * 0x40 + (int)((long long)(short)(unsigned short)!bVar4 << 1)
                              + 0x464) << 0x18 | *(unsigned int *)(iVar14 + iVar2) & 0xffffff;
        }
      }
      sVar10 = (short)uVar13 + 1;
      uVar13 = (unsigned long long)sVar10;
    } while (sVar10 < 0x70);
    sVar10 = (short)uVar12 + 1;
    uVar12 = (unsigned long long)sVar10;
    if (0x9b < sVar10) {
      iVar14 = 0;
      do {
        iVar2 = *piVar6 + iVar14 * 0x20;
        iVar3 = *piVar5 + *(short *)(iVar2 + 0x814) * 0xe0;
        iVar2 = *(short *)(iVar2 + 0x812) * 2;
        *(unsigned int *)(iVar3 + iVar2) =
             (int)*(short *)(*piVar8 + 0x728) << 0x18 | *(unsigned int *)(iVar3 + iVar2) & 0xffffff;
        sVar10 = (short)iVar14 + 1;
        iVar14 = (int)sVar10;
      } while (sVar10 < 8);
      return;
    }
  } while( true );
}

/* Address: 0x100a3d64 Size: 224 bytes */
unsigned short FUN_100a3d64(short param_1,short param_2)

{
  char cVar1;
  int bVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  short sVar6;
  short sVar7;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    iVar3 = *piRam101175f4 + uVar5 * 4;
    sVar6 = param_1 + *(short *)(iVar3 + 0xbc);
    sVar7 = param_2 + *(short *)(iVar3 + 0xbe);
    bVar2 = 0x9b < sVar7 || (0x6f < sVar6 || (sVar7 < 0 || sVar6 < 0));
    cVar1 = *(char *)(*piRam101175f0 + sVar7 * 0x70 + (int)sVar6 + 0x34a);
    if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x01')) {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = uVar4 | (unsigned short)(1 << (uVar5 & 0x3f));
    }
    uVar5 = (unsigned int)(short)((short)uVar5 + 1);
  } while ((int)uVar5 < 8);
  return uVar4;
}

/* Address: 0x100a3e44 Size: 208 bytes */
unsigned short FUN_100a3e44(short param_1,short param_2)

{
  int iVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  short sVar4;
  short sVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = *piRam101175f4 + uVar3 * 4;
    sVar4 = param_1 + *(short *)(iVar1 + 0xbc);
    sVar5 = param_2 + *(short *)(iVar1 + 0xbe);
    if (*(char *)(*piRam101175f0 + sVar5 * 0x70 + (int)sVar4 + 0x34a) == '\x04' ||
        (0x9b < sVar5 || (0x6f < sVar4 || (sVar5 < 0 || sVar4 < 0)))) {
      uVar2 = uVar2 | (unsigned short)(1 << (uVar3 & 0x3f));
    }
    uVar3 = (unsigned int)(short)((short)uVar3 + 1);
  } while ((int)uVar3 < 8);
  return uVar2;
}

/* Address: 0x100a3f14 Size: 208 bytes */
unsigned short FUN_100a3f14(short param_1,short param_2)

{
  int iVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  short sVar4;
  short sVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = *piRam101175f4 + uVar3 * 4;
    sVar4 = param_1 + *(short *)(iVar1 + 0xbc);
    sVar5 = param_2 + *(short *)(iVar1 + 0xbe);
    if (*(char *)(*piRam101175f0 + sVar5 * 0x70 + (int)sVar4 + 0x34a) == '\x06' ||
        (0x9b < sVar5 || (0x6f < sVar4 || (sVar5 < 0 || sVar4 < 0)))) {
      uVar2 = uVar2 | (unsigned short)(1 << (uVar3 & 0x3f));
    }
    uVar3 = (unsigned int)(short)((short)uVar3 + 1);
  } while ((int)uVar3 < 8);
  return uVar2;
}

/* Address: 0x100a3fe4 Size: 216 bytes */
unsigned short FUN_100a3fe4(short param_1,short param_2)

{
  char cVar1;
  int bVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  short sVar6;
  short sVar7;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    iVar3 = *piRam101175f4 + uVar5 * 4;
    sVar6 = param_1 + *(short *)(iVar3 + 0xbc);
    sVar7 = param_2 + *(short *)(iVar3 + 0xbe);
    bVar2 = 0x9b < sVar7 || (0x6f < sVar6 || (sVar7 < 0 || sVar6 < 0));
    cVar1 = *(char *)(*piRam101175f0 + sVar7 * 0x70 + (int)sVar6 + 0x34a);
    if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = uVar4 | (unsigned short)(1 << (uVar5 & 0x3f));
    }
    uVar5 = (unsigned int)(short)((short)uVar5 + 1);
  } while ((int)uVar5 < 8);
  return uVar4;
}

/* Address: 0x100a40bc Size: 2320 bytes */
void FUN_100a40bc(void)

{
  char cVar1;
  int bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned long long uVar12;
  short sVar13;
  long long lVar14;
  unsigned long long uVar15;
  unsigned long long uVar16;
  
  piVar6 = piRam101175f4;
  piVar5 = piRam101175f0;
  piVar4 = piRam10117358;
  iVar7 = FUN_1002b83c();
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      iVar9 = (int)uVar16;
      cVar1 = *(char *)(*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) +
                        iVar9 + 0x34a);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        iVar8 = FUN_100a3d64(uVar16,uVar15);
        uVar12 = uVar16 + uVar15;
        if (uVar12 == 0) {
LAB_100a4154:
          bVar2 = false;
        }
        else {
          iVar10 = (int)uVar12;
          uVar11 = iVar10 - 1;
          if ((iVar10 >> 1) + (unsigned int)(iVar10 < 0 && (uVar12 & 1) != 0) !=
              ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0)) goto LAB_100a4154;
          bVar2 = true;
        }
        if (*(char *)(*piVar6 + iVar8 + 0x264) < '\0') {
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 + 0x34a)
               = 8;
          iVar10 = (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0x7ffffff) << 5);
          iVar9 = *piVar4 + iVar10;
          iVar8 = (int)((uVar16 & 0x7fffffff) << 1);
          *(unsigned int *)(iVar9 + iVar8) =
               (int)*(short *)(*piVar6 + (int)((long long)(short)(unsigned short)!bVar2 << 1) + 0x664) <<
               0x18 | *(unsigned int *)(iVar9 + iVar8) & 0xffffff;
          FUN_100a6364(uVar16,uVar15);
          iVar10 = iVar10 + *piVar4;
          *(unsigned int *)(iVar10 + iVar8) = *(unsigned int *)(iVar10 + iVar8) & 0xff7fffff;
        }
        else {
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 + 0x34a)
               = 2;
          iVar9 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
          iVar10 = (int)((uVar16 & 0xffffffff) << 1);
          *(unsigned int *)(iVar9 + iVar10) =
               (int)*(short *)(*piVar6 + *(char *)(*piVar6 + iVar8 + 0x264) * 4 +
                               (int)((long long)(short)(unsigned short)!bVar2 << 1) + 0x4e4) << 0x18 |
               *(unsigned int *)(iVar9 + iVar10) & 0xffffff;
        }
      }
      sVar13 = (short)uVar16 + 1;
      uVar16 = (unsigned long long)sVar13;
    } while (sVar13 < 0x70);
    sVar13 = (short)uVar15 + 1;
    uVar15 = (unsigned long long)sVar13;
  } while (sVar13 < 0x9c);
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      iVar9 = (int)uVar16;
      if (*(char *)(*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9
                   + 0x34a) == '\x04') {
        iVar8 = FUN_100a3e44(uVar16,uVar15);
        uVar12 = uVar15 + uVar16;
        if (uVar12 == 0) {
LAB_100a42fc:
          bVar2 = false;
        }
        else {
          iVar10 = (int)uVar12;
          uVar11 = iVar10 - 1;
          if ((iVar10 >> 1) + (unsigned int)(iVar10 < 0 && (uVar12 & 1) != 0) !=
              ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0)) goto LAB_100a42fc;
          bVar2 = true;
        }
        lVar14 = (long long)(short)(unsigned short)!bVar2;
        if (*(char *)(*piVar6 + iVar8 + 0x264) < '\0') {
          iVar8 = FUN_1005f230(1,10,0);
          if (iVar8 < 6) {
            iVar8 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
            iVar10 = (int)((uVar16 & 0xffffffff) << 1);
            *(unsigned int *)(iVar8 + iVar10) =
                 (int)*(short *)(*piVar6 + (int)(lVar14 << 1) + 0x624) << 0x18 |
                 *(unsigned int *)(iVar8 + iVar10) & 0xffffff;
            *(char *)
             (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 +
             0x34a) = 7;
          }
          else {
            iVar9 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
            iVar8 = (int)((uVar16 & 0xffffffff) << 1);
            *(unsigned int *)(iVar9 + iVar8) =
                 (int)*(short *)(*piVar6 + (int)(lVar14 << 1) + 0x598) << 0x18 |
                 *(unsigned int *)(iVar9 + iVar8) & 0xffffff;
          }
        }
        else {
          iVar10 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
          iVar3 = (int)((uVar16 & 0xffffffff) << 1);
          *(unsigned int *)(iVar10 + iVar3) =
               (int)*(short *)(*piVar6 + *(char *)(*piVar6 + iVar8 + 0x264) * 4 + (int)(lVar14 << 1)
                              + 0x564) << 0x18 | *(unsigned int *)(iVar10 + iVar3) & 0xffffff;
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 + 0x34a)
               = 4;
        }
      }
      sVar13 = (short)uVar16 + 1;
      uVar16 = (unsigned long long)sVar13;
    } while (sVar13 < 0x70);
    sVar13 = (short)uVar15 + 1;
    uVar15 = (unsigned long long)sVar13;
  } while (sVar13 < 0x9c);
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      iVar9 = (int)uVar16;
      if (*(char *)(*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9
                   + 0x34a) == '\x06') {
        iVar8 = FUN_100a3f14(uVar16,uVar15);
        uVar12 = uVar15 + uVar16;
        if (uVar12 == 0) {
LAB_100a44c8:
          bVar2 = false;
        }
        else {
          iVar10 = (int)uVar12;
          uVar11 = iVar10 - 1;
          if ((iVar10 >> 1) + (unsigned int)(iVar10 < 0 && (uVar12 & 1) != 0) !=
              ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0)) goto LAB_100a44c8;
          bVar2 = true;
        }
        lVar14 = (long long)(short)(unsigned short)!bVar2;
        if (*(char *)(*piVar6 + iVar8 + 0x264) < '\0') {
          if (iVar7 == 0) {
            iVar8 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
            iVar10 = (int)((uVar16 & 0xffffffff) << 1);
            *(unsigned int *)(iVar8 + iVar10) =
                 (int)*(short *)(*piVar6 + (int)(lVar14 << 1) + 0x624) << 0x18 |
                 *(unsigned int *)(iVar8 + iVar10) & 0xffffff;
            *(char *)
             (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 +
             0x34a) = 7;
          }
          else {
            iVar8 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
            iVar10 = (int)((uVar16 & 0xffffffff) << 1);
            *(unsigned int *)(iVar8 + iVar10) =
                 (int)*(short *)(*piVar6 + (int)(lVar14 << 1) + 0x5a4) << 0x18 |
                 *(unsigned int *)(iVar8 + iVar10) & 0xffffff;
            *(char *)
             (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 +
             0x34a) = 5;
          }
        }
        else {
          iVar10 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
          iVar3 = (int)((uVar16 & 0xffffffff) << 1);
          *(unsigned int *)(iVar10 + iVar3) =
               (int)*(short *)(*piVar6 + *(char *)(*piVar6 + iVar8 + 0x264) * 4 + (int)(lVar14 << 1)
                              + 0x5e4) << 0x18 | *(unsigned int *)(iVar10 + iVar3) & 0xffffff;
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar9 + 0x34a)
               = 6;
        }
      }
      sVar13 = (short)uVar16 + 1;
      uVar16 = (unsigned long long)sVar13;
    } while (sVar13 < 0x70);
    sVar13 = (short)uVar15 + 1;
    uVar15 = (unsigned long long)sVar13;
  } while (sVar13 < 0x9c);
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      iVar7 = (int)uVar16;
      if (*(char *)(*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar7
                   + 0x34a) == '\x05') {
        iVar9 = FUN_100a3fe4(uVar16,uVar15);
        uVar12 = uVar15 + uVar16;
        if (uVar12 == 0) {
LAB_100a469c:
          bVar2 = false;
        }
        else {
          iVar8 = (int)uVar12;
          uVar11 = iVar8 - 1;
          if ((iVar8 >> 1) + (unsigned int)(iVar8 < 0 && (uVar12 & 1) != 0) !=
              ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0)) goto LAB_100a469c;
          bVar2 = true;
        }
        lVar14 = (long long)(short)(unsigned short)!bVar2;
        if (*(char *)(*piVar6 + iVar9 + 0x264) < '\0') {
          iVar9 = FUN_1005f230(1,10,0);
          if (iVar9 < 6) {
            iVar9 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
            iVar8 = (int)((uVar16 & 0xffffffff) << 1);
            *(unsigned int *)(iVar9 + iVar8) =
                 (int)*(short *)(*piVar6 + (int)(lVar14 << 1) + 0x624) << 0x18 |
                 *(unsigned int *)(iVar9 + iVar8) & 0xffffff;
            *(char *)
             (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar7 +
             0x34a) = 7;
          }
          else {
            iVar9 = (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xfffffff) << 4);
            *(char *)(*piVar5 + iVar9 + iVar7 + 0x34a) = 5;
            iVar8 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
            iVar10 = (int)((uVar16 & 0xffffffff) << 1);
            *(unsigned int *)(iVar8 + iVar10) =
                 (int)*(short *)(*piVar6 + *(char *)(iVar9 + *piVar5 + iVar7 + 0x34a) * 0x40 +
                                 (int)(lVar14 << 1) + 0x498) << 0x18 |
                 *(unsigned int *)(iVar8 + iVar10) & 0xffffff;
          }
        }
        else {
          iVar8 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
          iVar10 = (int)((uVar16 & 0xffffffff) << 1);
          *(unsigned int *)(iVar8 + iVar10) =
               (int)*(short *)(*piVar6 + *(char *)(*piVar6 + iVar9 + 0x264) * 4 + (int)(lVar14 << 1)
                              + 0x5a4) << 0x18 | *(unsigned int *)(iVar8 + iVar10) & 0xffffff;
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar7 + 0x34a)
               = 5;
        }
      }
      sVar13 = (short)uVar16 + 1;
      uVar16 = (unsigned long long)sVar13;
    } while (sVar13 < 0x70);
    sVar13 = (short)uVar15 + 1;
    uVar15 = (unsigned long long)sVar13;
  } while (sVar13 < 0x9c);
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      iVar7 = (int)uVar16;
      if (*(char *)(*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar7
                   + 0x34a) == '\b') {
        uVar12 = uVar16 + uVar15;
        if (uVar12 == 0) {
LAB_100a4898:
          bVar2 = false;
        }
        else {
          iVar9 = (int)uVar12;
          uVar11 = iVar9 - 1;
          if ((iVar9 >> 1) + (unsigned int)(iVar9 < 0 && (uVar12 & 1) != 0) !=
              ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0)) goto LAB_100a4898;
          bVar2 = true;
        }
        iVar9 = FUN_1005f230(1,10,0);
        if (iVar9 < 7) {
          iVar9 = *piVar4 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 5);
          iVar8 = (int)((uVar16 & 0xffffffff) << 1);
          *(unsigned int *)(iVar9 + iVar8) =
               (int)*(short *)(*piVar6 + (short)(unsigned short)!bVar2 * 2 + 0x664) << 0x18 |
               *(unsigned int *)(iVar9 + iVar8) & 0xffffff;
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar7 + 0x34a)
               = 8;
        }
        else {
          iVar10 = FUN_1005f230(1,4,0);
          iVar9 = (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0x7ffffff) << 5);
          iVar8 = (int)((uVar16 & 0xffffffff) << 1);
          *(unsigned int *)(iVar9 + *piVar4 + iVar8) =
               (int)*(short *)(*piVar6 + iVar10 * 4 + 0x664) << 0x18 |
               *(unsigned int *)(*piVar4 + iVar9 + iVar8) & 0xffffff;
          *(char *)
           (*piVar5 + (int)(((uVar15 & 0x1fffffff) * 8 - uVar15 & 0xffffffff) << 4) + iVar7 + 0x34a)
               = 8;
        }
      }
      sVar13 = (short)uVar16 + 1;
      uVar16 = (unsigned long long)sVar13;
    } while (sVar13 < 0x70);
    sVar13 = (short)uVar15 + 1;
    uVar15 = (unsigned long long)sVar13;
    if (0x9b < sVar13) {
      return;
    }
  } while( true );
}

/* Address: 0x100a4a00 Size: 232 bytes */
unsigned short FUN_100a4a00(short param_1,short param_2)

{
  unsigned int uVar1;
  unsigned long long uVar2;
  unsigned short uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  uVar3 = 0;
  uVar1 = 0;
  do {
    iVar6 = *piRam101175f4 + uVar1 * 4;
    sVar4 = param_1 + *(short *)(iVar6 + 0xdc);
    sVar5 = param_2 + *(short *)(iVar6 + 0xde);
    uVar2 = (unsigned long long)sVar5;
    if ((((-1 < (long long)sVar4) && (-1 < sVar5)) && (sVar4 < 0x70)) && (sVar5 < 0x9c)) {
      if (((*(unsigned int *)(*piRam10117354 + (int)(((uVar2 & 0x1fffffff) * 8 - uVar2 & 0xffffffff) << 4) +
                     (int)sVar4) >> 0x18 & 0x1f) != 0) ||
         (*(char *)(*piRam1011735c +
                    (*(unsigned int *)(*piRam10117358 +
                               (int)(((uVar2 & 0x1fffffff) * 8 - uVar2 & 0xffffffff) << 5) +
                              (int)(((long long)sVar4 & 0xffffffffU) << 1)) >> 0x18) + 0x711) ==
          '\x01')) {
        uVar3 = uVar3 | (unsigned short)(1 << (uVar1 & 0x3f));
      }
    }
    uVar1 = (unsigned int)(short)((short)uVar1 + 1);
  } while ((int)uVar1 < 8);
  return uVar3;
}

/* Address: 0x100a7344 Size: 308 bytes */
int FUN_100a7344(unsigned short param_1)

{
  int iVar1;
  int bVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  short local_28;
  short local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  piVar3 = piRam1011735c;
  local_1e = (((short)param_1 >> 2) + (unsigned short)((short)param_1 < 0 && (param_1 & 3) != 0)) * 0x4e;
  local_1c = 0x1c;
  local_1a = 0x4e;
  sVar5 = 0;
  do {
    iVar4 = FUN_1005f230(1,*(short *)(*piVar3 + 0x1602),0xffffffffffffffff);
    iVar1 = *piVar3 + iVar4 * 0x42;
    FUN_1002269c(&local_28,*(short *)(iVar1 + 0x1604),*(short *)(iVar1 + 0x1606));
    if (((int)local_28 < (int)local_20) || ((int)local_1c + (int)local_20 <= (int)local_28)) {
LAB_100a7444:
      bVar2 = false;
    }
    else {
      if (((int)local_26 < (int)local_1e) || ((int)local_1e + (int)local_1a <= (int)local_26))
      goto LAB_100a7444;
      bVar2 = true;
    }
    if ((200 < sVar5) || (sVar5 = sVar5 + 1, bVar2)) {
      return iVar4;
    }
  } while( true );
}

/* Address: 0x100a7480 Size: 196 bytes */
void FUN_100a7480(short *param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  
  piVar2 = piRam10117358;
  if (param_2 < 6) {
    sVar7 = 0x62;
    sVar6 = (short)(((long long)param_2 & 0xffffffffU) << 1);
  }
  else {
    sVar7 = 0x80;
    sVar6 = (short)(((long long)param_2 & 0xffffffffU) << 1) + -0xc;
  }
  iVar4 = (int)(short)(sVar7 + sVar6);
  iVar5 = param_1[1] * 0xe0;
  iVar3 = *param_1 * 2;
  *(unsigned int *)(*piRam10117358 + iVar5 + iVar3) =
       iVar4 << 0x18 | *(unsigned int *)(*piRam10117358 + iVar5 + iVar3) & 0xffffff;
  iVar1 = iVar5 + *piVar2 + iVar3;
  *(unsigned int *)(iVar1 + 2) = (iVar4 + 1) * 0x1000000 | *(unsigned int *)(iVar1 + 2) & 0xffffff;
  iVar1 = iVar5 + *piVar2 + iVar3;
  *(unsigned int *)(iVar1 + 0xe0) = (iVar4 + 0x10) * 0x1000000 | *(unsigned int *)(iVar1 + 0xe0) & 0xffffff;
  iVar3 = iVar5 + *piVar2 + iVar3;
  *(unsigned int *)(iVar3 + 0xe2) = (iVar4 + 0x11) * 0x1000000 | *(unsigned int *)(iVar3 + 0xe2) & 0xffffff;
  return;
}

/* Address: 0x100a7544 Size: 700 bytes */
void FUN_100a7544(void)

{
  int bVar1;
  int bVar2;
  int *piVar3;
  int *piVar4;
  short sVar9;
  unsigned long long uVar5;
  unsigned long long uVar6;
  int iVar7;
  int iVar8;
  short sVar10;
  short sVar11;
  unsigned long long uVar12;
  int iVar13;
  short local_48 [36];
  
  piVar4 = piRam101175f4;
  piVar3 = piRam1011735c;
  sVar9 = 0;
LAB_100a7564:
  sVar9 = sVar9 + 1;
  uVar12 = 0;
  do {
    *(short *)((int)local_48 + (int)((uVar12 & 0xffffffff) << 1)) = 0;
    iVar13 = (int)(((uVar12 & 0x3fffffff) * 4 + uVar12 & 0xffffffff) << 2);
    *(short *)(*piVar3 + iVar13 + 0x18a) = 0xff9c;
    *(short *)(iVar13 + *piVar3 + 0x18c) = 0xff9c;
    sVar11 = (short)uVar12 + 1;
    uVar12 = (unsigned long long)sVar11;
  } while (sVar11 < 8);
  uVar12 = 0;
  do {
    bVar1 = false;
    do {
      uVar5 = FUN_1005f230(1,8,0xffffffffffffffff);
      iVar13 = (int)((uVar5 & 0xffffffff) << 1);
      if (*(short *)((int)local_48 + iVar13) == 0) {
        *(short *)((int)local_48 + iVar13) = 1;
        bVar1 = true;
      }
    } while (!bVar1);
    bVar1 = false;
    sVar11 = 0;
    do {
      uVar6 = FUN_100a7344(uVar5);
      iVar13 = *piVar3 + (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1);
      sVar10 = *(short *)(iVar13 + 0x1604);
      if ((((0x3f < sVar10) && (sVar10 < 0x31)) &&
          (sVar10 = *(short *)(iVar13 + 0x1606), 0x55 < sVar10)) && (sVar10 < 0x47)) {
        iVar13 = 0;
        bVar2 = true;
        do {
          iVar8 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0x7fffffff) << 1);
          iVar7 = FUN_10003768((long long)*(short *)(*piVar3 + iVar8 + 0x1604) -
                               (long long)*(short *)(*piVar3 + iVar13 * 0x14 + 0x18a));
          if ((iVar7 < 0x14) ||
             (iVar8 = FUN_10003768((long long)*(short *)(iVar8 + *piVar3 + 0x1606) -
                                   (long long)*(short *)(*piVar3 + iVar13 * 0x14 + 0x18c)),
             iVar8 < 0x14)) {
            bVar2 = false;
            break;
          }
          sVar10 = (short)iVar13 + 1;
          iVar13 = (int)sVar10;
        } while (sVar10 < 8);
        if (bVar2) {
          bVar1 = true;
        }
      }
      sVar11 = sVar11 + 1;
      if (bVar1) {
        if (sVar11 < 100) goto LAB_100a770c;
        break;
      }
    } while (sVar11 < 100);
    if (sVar9 < 10) goto LAB_100a7564;
LAB_100a770c:
    *(short *)(*piVar4 + (int)((uVar5 & 0xffffffff) << 1) + 0x1d72) =
         *(short *)(*piVar4 + (int)((uVar12 & 0xffffffff) << 1) + 0x1d62);
    iVar13 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1);
    iVar8 = (int)(((uVar12 & 0x3fffffff) * 4 + uVar12 & 0xffffffff) << 2);
    *(short *)(*piVar3 + iVar8 + 0x18a) = *(short *)(*piVar3 + iVar13 + 0x1604);
    *(short *)(iVar8 + *piVar3 + 0x18c) = *(short *)(iVar13 + *piVar3 + 0x1606);
    sVar11 = (short)uVar12 + 1;
    uVar12 = (unsigned long long)sVar11;
    if (7 < sVar11) {
      iVar13 = 0;
      do {
        iVar8 = *piVar3 + iVar13 * 0x14;
        iVar8 = FUN_1002be50(*(short *)(iVar8 + 0x18a),*(short *)(iVar8 + 0x18c));
        *(char *)(*piVar3 + iVar8 * 0x42 + 0x1619) = (char)iVar13;
        FUN_100a7480(iVar8 * 0x42 + *piVar3 + 0x1604,iVar13);
        sVar9 = (short)iVar13 + 1;
        iVar13 = (int)sVar9;
      } while (sVar9 < 8);
      return;
    }
  } while( true );
}

/* Address: 0x100a7804 Size: 236 bytes */
long long FUN_100a7804(short param_1)

{
  int *ppuVar1;
  long long lVar2;
  
  ppuVar1 = 0 /* TVect base */;
  if (*(char *)(*piRam1011735c + param_1 * 0x42 + 0x1619) == '\x0f') {
    lVar2 = FUN_1005f230(1,4,0xffffffffffffffff);
    if (*(short *)(*(int*)((char*)ppuVar1 - 0x41e)) != 0) {
      lVar2 = (long long)(short)((short)lVar2 + 4);
    }
    if (*(short *)(*(int*)((char*)ppuVar1 - 0x41d)) != 0) {
      lVar2 = (long long)(short)((short)lVar2 + 2);
    }
    if (*(short *)(*(int*)((char*)ppuVar1 - 0x41c)) != 0) {
      lVar2 = (long long)(short)((short)lVar2 + -1);
    }
    if (*(short *)(*(int*)((char*)ppuVar1 - 0x41b)) != 0) {
      lVar2 = (long long)(short)((short)lVar2 + -2);
    }
    if (8 < (int)lVar2) {
      lVar2 = 9;
    }
    if ((int)lVar2 < 1) {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 9;
  }
  return lVar2;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a78f0() { }



















































































/* Address: 0x100a7c1c Size: 964 bytes */
void FUN_100a7c1c(short param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *ppuVar5;
  short sVar10;
  unsigned long long uVar6;
  unsigned long long uVar7;
  int iVar9;
  unsigned long long uVar8;
  long long lVar11;
  long long lVar12;
  int iVar13;
  char auStack_12c [256];
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  
  puVar4 = puRam101175f4;
  piVar3 = piRam1011735c;
  psVar2 = psRam10116838;
  psVar1 = psRam10116834;
  ppuVar5 = 0 /* TVect base */;
  iVar13 = (int)param_1;
  FUN_100a78f0(iVar13);
  sVar10 = FUN_1005f230(1,8,0);
  *(short *)(*piVar3 + iVar13 * 0x42 + 0x162e) = param_2 * 2 + sVar10 + 0xe;
  uVar6 = FUN_1005f230(1,3,param_2 + -2);
  uVar7 = FUN_1005f230(1,3,param_2 + -2);
  local_2c = (short)uVar6;
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  local_2a = (short)uVar6;
  if (8 < (int)uVar6) {
    uVar6 = 9;
  }
  local_28 = (short)uVar7;
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  local_26 = (short)uVar7;
  if (8 < (int)uVar7) {
    uVar7 = 9;
  }
  if ((((*(short *)(*(int*)((char*)ppuVar5 - 0x41c)) == 0) && (*psVar1 == 0)) && (*psVar2 == 0)) ||
     (iVar9 = FUN_1005f230(1,100,0), 0x4f < iVar9)) {
    iVar9 = FUN_1005f230(1,100,0);
    if (iVar9 < 0x32) {
      uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
      lVar12 = (unsigned long long)*puVar4 + (uVar8 & 0xfffffff) * 0x10 + 0x16a8;
      uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
      lVar11 = (unsigned long long)*puVar4 + (uVar8 & 0xfffffff) * 0x10 + 0x1748;
      FUN_1005f230(1,10,0xffffffffffffffff);
    }
    else {
      uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
      lVar12 = (unsigned long long)*puVar4 + (uVar8 & 0xfffffff) * 0x10 + 0x14c8;
      uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
      lVar11 = (unsigned long long)*puVar4 + (uVar8 & 0xfffffff) * 0x10 + 0x1568;
      FUN_1005f230(1,10,0xffffffffffffffff);
    }
  }
  else {
    if (*psVar1 == 0) {
      if (*psVar2 == 0) {
        FUN_1005f230(1,4,0xffffffffffffffff);
      }
      else {
        FUN_1005f230(1,4,3);
      }
    }
    else {
      FUN_1005f230(1,2,7);
    }
    uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
    lVar12 = (unsigned long long)*puVar4 + (uVar8 & 0xfffffff) * 0x10 + 0x12e8;
    uVar8 = FUN_1005f230(1,10,0xffffffffffffffff);
    lVar11 = (unsigned long long)*puVar4 + (uVar8 & 0xfffffff) * 0x10 + 5000;
  }
  uVar8 = FUN_1005f230(1,3,0xffffffffffffffff);
  FUN_10001dd0(auStack_12c,ZEXT48((*(int*)((char*)ppuVar5 - 0x422))) + 0x8c,iVar13,*piVar3 + iVar13 * 0x42 + 0x1608,
               (unsigned long long)*puVar4 + ((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xfffffff) * 0x10 +
               (uVar8 & 0xfffffff) * 0x10 + 0x1068,
               (unsigned long long)*puVar4 + (uVar7 & 0xfffffff) * 0x10 + 0x1248,lVar12,lVar11);
  FUN_10001e78(*puVar4 + (int)*(short *)(*puVar4 + 0x1064) + 0x1f56,auStack_12c);
  sVar10 = FUN_100012c0(auStack_12c);
  *(short *)(*puVar4 + 0x1064) = *(short *)(*puVar4 + 0x1064) + sVar10;
  return;
}

/* Address: 0x100a7fe0 Size: 1560 bytes */
void FUN_100a7fe0(short param_1,unsigned short param_2)

{
  int bVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  unsigned long long uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  piVar8 = piRam101175f4;
  piVar7 = piRam10117364;
  piVar6 = piRam1011735c;
  psVar5 = psRam10116838;
  psVar4 = psRam10116830;
  psVar3 = psRam10116828;
  psVar2 = psRam1011645c;
  uVar13 = (unsigned long long)param_1;
  iVar12 = *piRam1011735c + (int)(((uVar13 & 0x7ffffff) * 0x20 + uVar13 & 0xffffffff) << 1);
  iVar12 = (int)(short)((short)(((int)*(short *)(iVar12 + 0x1604) << 2) / 0x70) +
                       (short)(((int)*(short *)(iVar12 + 0x1606) << 1) / 0x9c << 2));
  sVar9 = FUN_1005f230(1,4,0xffffffffffffffff);
  sVar9 = ((short)param_2 >> 1) + (unsigned short)((short)param_2 < 0 && (param_2 & 1) != 0) + sVar9;
  iVar15 = 0;
  if (*psVar4 != 0) {
    sVar9 = sVar9 + 1;
  }
  if (*psVar5 != 0) {
    sVar9 = sVar9 + 1;
  }
  iVar14 = (int)sVar9;
  if (3 < sVar9) {
    iVar14 = 4;
  }
  if (iVar14 < 1) {
    iVar14 = 0;
  }
  FUN_10048ccc();
  iVar16 = 0;
  do {
    iVar17 = *piVar8 + iVar16 * 0x10;
    FUN_1004a178(*(short *)(iVar17 + 0x1d82),iVar17 + 0x1d8c,iVar17 + 0x1d8a,iVar17 + 0x1d8e,
                 iVar17 + 0x1d90);
    sVar9 = (short)iVar16 + 1;
    iVar16 = (int)sVar9;
  } while (sVar9 < 0x1d);
  FUN_10049010();
  iVar16 = 0;
  if (0 < iVar14) {
    do {
      sVar9 = *(short *)(*piVar8 + iVar16 * 0x10 + 0x1d82);
      if ((*psVar2 != 0) || (*(char *)(*piVar7 + sVar9 * 6 + 4) == '\0')) {
        iVar17 = *piVar8 + iVar16 * 0x10;
        sVar10 = FUN_1005f230(1,10,0xffffffffffffffff);
        if (sVar10 < *(short *)(iVar17 + 0x1d84)) {
          bVar1 = *(short *)(iVar17 + 0x1d88) == 7;
          if ((*(short *)(*piVar8 + iVar16 * 0x10 + 0x1d88) == 4) && (*psVar4 != 0)) {
            bVar1 = true;
          }
          if ((*(short *)(*piVar8 + iVar16 * 0x10 + 0x1d88) == 5) && (*psVar5 != 0)) {
            bVar1 = true;
          }
          if ((*(short *)(*piVar8 + iVar16 * 0x10 + 0x1d88) == 3) && (*psVar3 != 0)) {
            bVar1 = true;
          }
          if (*(short *)(*piVar8 + iVar16 * 0x10 + 0x1d86) ==
              *(short *)(*piVar8 + iVar12 * 2 + 0x1d72)) {
            bVar1 = true;
          }
          if ((sVar9 == 5) && (*psVar3 == 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            iVar11 = (int)(((uVar13 & 0x7ffffff) * 0x20 + uVar13 & 0x7fffffff) << 1);
            *(char *)(*piVar6 + iVar11 + iVar15 + 0x161a) = (char)sVar9;
            iVar17 = iVar16 * 0x10;
            *(char *)(iVar11 + *piVar6 + iVar15 + 0x161e) =
                 (char)*(short *)(*piVar8 + iVar17 + 0x1d8c);
            *(char *)(iVar11 + *piVar6 + iVar15 + 0x162a) =
                 (char)*(short *)(iVar17 + *piVar8 + 0x1d8e);
            *(char *)(iVar11 + *piVar6 + iVar15 + 0x1622) =
                 (char)*(short *)(iVar17 + *piVar8 + 0x1d8a);
            *(char *)(iVar11 + *piVar6 + iVar15 + 0x1626) =
                 (char)*(short *)(iVar17 + *piVar8 + 0x1d90);
            iVar15 = (int)(short)((short)iVar15 + 1);
          }
        }
      }
      sVar9 = (short)iVar16 + 1;
      iVar16 = (int)sVar9;
    } while ((sVar9 < 0x1d) && (iVar15 < iVar14));
  }
  if (iVar15 == 0) {
    iVar15 = (int)(((uVar13 & 0x7ffffff) * 0x20 + uVar13 & 0x7fffffff) << 1);
    *(char *)(*piVar6 + iVar15 + 0x161a) = (char)*(short *)(*piVar8 + 0x1d82);
    *(char *)(iVar15 + *piVar6 + 0x161e) = (char)*(short *)(*piVar8 + 0x1d8c);
    *(char *)(iVar15 + *piVar6 + 0x162a) = (char)*(short *)(*piVar8 + 0x1d8e);
    *(char *)(iVar15 + *piVar6 + 0x1622) = (char)*(short *)(*piVar8 + 0x1d8a);
    *(char *)(iVar15 + *piVar6 + 0x1626) = (char)*(short *)(*piVar8 + 0x1d90);
    iVar15 = 1;
  }
  if (((6 < (short)param_2) && (iVar16 = FUN_1005f230(1,10,0xffffffffffffffff), iVar16 < 5)) &&
     (iVar15 < 4)) {
    iVar17 = 0;
    iVar16 = iVar14;
    if (0 < iVar15) {
      do {
        iVar16 = iVar15;
        if (*(char *)(*piVar7 +
                     *(char *)(*piVar6 + (int)(((uVar13 & 0x7ffffff) * 0x20 + uVar13 & 0xffffffff)
                                              << 1) + iVar17 + 0x161a) * 6) != '\0') break;
        sVar9 = (short)iVar17 + 1;
        iVar17 = (int)sVar9;
        iVar16 = iVar14;
      } while (sVar9 < iVar15);
    }
    iVar14 = 0;
    if (iVar15 < iVar16) {
      while( true ) {
        iVar11 = *piVar8 + iVar14 * 0x10;
        iVar17 = *(short *)(iVar11 + 0x1d82) * 6;
        if (((*(char *)(*piVar7 + iVar17) != '\0') && (*(char *)(*piVar7 + iVar17 + 4) == '\0')) &&
           ((((*(short *)(iVar11 + 0x1d86) == *(short *)(iVar12 * 2 + *piVar8 + 0x1d72) ||
              (*(short *)(iVar11 + 0x1d88) == 7)) ||
             ((*(short *)(iVar11 + 0x1d88) == 4 && (*psVar4 != 0)))) ||
            ((*(short *)(*piVar8 + iVar14 * 0x10 + 0x1d88) == 5 && (*psVar5 != 0)))))) break;
        sVar9 = (short)iVar14 + 1;
        iVar14 = (int)sVar9;
        if ((0x1c < sVar9) || (iVar16 <= iVar15)) goto LAB_100a8598;
      }
      iVar12 = (int)(((uVar13 & 0x7ffffff) * 0x20 + uVar13 & 0x7fffffff) << 1);
      iVar14 = iVar14 * 0x10;
      *(char *)(*piVar6 + iVar12 + iVar15 + 0x161a) =
           (char)*(short *)(*piVar8 + iVar14 + 0x1d82);
      *(char *)(iVar12 + *piVar6 + iVar15 + 0x161e) =
           (char)*(short *)(iVar14 + *piVar8 + 0x1d8c);
      *(char *)(iVar12 + *piVar6 + iVar15 + 0x162a) =
           (char)*(short *)(iVar14 + *piVar8 + 0x1d8e);
      *(char *)(iVar12 + *piVar6 + iVar15 + 0x1622) =
           (char)*(short *)(iVar14 + *piVar8 + 0x1d8a);
      *(char *)(iVar12 + *piVar6 + iVar15 + 0x1626) =
           (char)*(short *)(iVar14 + *piVar8 + 0x1d90);
      iVar15 = (int)(short)((short)iVar15 + 1);
    }
  }
LAB_100a8598:
  if (iVar15 < 4) {
    do {
      *(char *)
       (*piVar6 + (int)(((uVar13 & 0x7ffffff) * 0x20 + uVar13 & 0xffffffff) << 1) + iVar15 + 0x161a)
           = 0xff;
      sVar9 = (short)iVar15 + 1;
      iVar15 = (int)sVar9;
    } while (sVar9 < 4);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100a85f8() { }


































/* Address: 0x100a8724 Size: 424 bytes */
void FUN_100a8724(void)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  unsigned long long uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  char auStack_60 [22];
  short local_4a;
  
  piVar3 = piRam10117364;
  piVar2 = piRam1011735c;
  iVar10 = 0;
  do {
    iVar5 = *piVar2 + iVar10 * 0x14;
    uVar4 = FUN_1002be50(*(short *)(iVar5 + 0x18a),*(short *)(iVar5 + 0x18c));
    if (-1 < (int)uVar4) {
      iVar5 = 3;
      do {
        iVar6 = iVar5;
        if (*(char *)(*piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1) +
                      iVar5 + 0x161a) < '\0') break;
        iVar6 = (int)(short)((short)iVar5 + -1);
        bVar1 = iVar5 != 0;
        iVar5 = iVar6;
      } while (bVar1);
      if (iVar6 < 0) {
        iVar6 = 3;
      }
      sVar7 = 0;
      do {
        iVar5 = FUN_1005f230(1,0x1c,0xffffffffffffffff);
        if ((iVar5 != 5) && (*(char *)(*piVar3 + iVar5 * 6 + 4) == '\0')) {
          sVar7 = sVar7 + 1;
          iVar8 = 0;
          do {
            if (*(char *)(*piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1) +
                          iVar8 + 0x161a) == iVar5) {
              if (iVar8 < 4) goto LAB_100a887c;
              break;
            }
            sVar9 = (short)iVar8 + 1;
            iVar8 = (int)sVar9;
          } while (sVar9 < 4);
          FUN_10049628(iVar5,auStack_60);
          if (4 < local_4a) {
            if (sVar7 < 0x28) {
              *(char *)(*piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1) +
                        iVar6 + 0x161a) = (char)iVar5;
            }
            break;
          }
        }
LAB_100a887c:
      } while (sVar7 < 0x28);
    }
    sVar7 = (short)iVar10 + 1;
    iVar10 = (int)sVar7;
    if (7 < sVar7) {
      return;
    }
  } while( true );
}



// FAILED to decompile: FUN_100a88d0 at 100a88d0

/* Address: 0x100a9ce0 Size: 84 bytes */
long long FUN_100a9ce0(short param_1,short param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*piRam101175f0 + param_2 * 0x70 + (int)param_1 + 0x34a);
  if (((cVar1 != '\a') && (cVar1 != '\x04')) && (cVar1 != '\x05')) {
    return 0;
  }
  return 1;
}

/* Address: 0x100aa344 Size: 144 bytes */
long long FUN_100aa344(int param_1,short param_2,short param_3)

{
  int bVar1;
  short sVar2;
  long long uVar3;
  long long uVar4;
  int iVar5;
  
  uVar4 = 10000;
  iVar5 = 0x31;
  do {
    sVar2 = *(short *)(param_1 + iVar5 * 2);
    if ((sVar2 != -1) &&
       (uVar3 = FUN_1000a884(param_2,param_3,sVar2,*(short *)(param_1 + iVar5 * 2 + 100)),
       (int)uVar3 < (int)uVar4)) {
      uVar4 = uVar3;
    }
    bVar1 = iVar5 != 0;
    iVar5 = (int)(short)((short)iVar5 + -1);
  } while (bVar1);
  return uVar4;
}

/* Address: 0x100aa3dc Size: 560 bytes */
int FUN_100aa3dc(int param_1)

{
  int bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  
  piVar2 = piRam1011735c;
  iVar7 = -1;
  sVar8 = -1;
  if (*(short *)(param_1 + 400) == -1) {
    iVar10 = 0x31;
    do {
      if (*(short *)(param_1 + iVar10 * 2) != -1) {
        sVar6 = *(short *)(*piVar2 + 0x1602);
        iVar9 = 10000;
        while (sVar6 != 0) {
          sVar6 = sVar6 + -1;
          iVar3 = *piVar2 + sVar6 * 0x42;
          iVar3 = FUN_1000a884(*(short *)(param_1 + iVar10 * 2),
                               *(short *)(param_1 + iVar10 * 2 + 100),
                               *(short *)(iVar3 + 0x1604),*(short *)(iVar3 + 0x1606));
          if (iVar3 < iVar9) {
            iVar9 = iVar3;
          }
        }
        *(short *)(param_1 + iVar10 * 2 + 400) = (short)iVar9;
      }
      bVar1 = iVar10 != 0;
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (bVar1);
  }
  iVar10 = 0x31;
  do {
    iVar9 = 10000;
    if ((*(short *)(param_1 + iVar10 * 2 + 300) == 0) && (*(short *)(param_1 + iVar10 * 2) != -1)) {
      iVar3 = 0x31;
      do {
        iVar4 = param_1 + iVar3 * 2;
        if (*(short *)(iVar4 + 300) != 0) {
          iVar4 = FUN_1000a884(*(short *)(param_1 + iVar10 * 2),
                               *(short *)(param_1 + iVar10 * 2 + 100),
                               *(short *)(param_1 + iVar3 * 2),*(short *)(iVar4 + 100));
          if (iVar4 < iVar9) {
            iVar9 = iVar4;
          }
        }
        bVar1 = iVar3 != 0;
        iVar3 = (int)(short)((short)iVar3 + -1);
      } while (bVar1);
      *(short *)(param_1 + iVar10 * 2 + 500) = (short)iVar9;
    }
    bVar1 = iVar10 != 0;
    iVar10 = (int)(short)((short)iVar10 + -1);
  } while (bVar1);
  iVar10 = 0x31;
  do {
    iVar9 = param_1 + iVar10 * 2;
    if ((*(short *)(iVar9 + 300) == 0) && (*(short *)(param_1 + iVar10 * 2) != -1)) {
      sVar6 = 0x1e - *(short *)(iVar9 + 400);
      if (sVar6 < 0) {
        sVar6 = 0;
      }
      sVar5 = FUN_1005f230(1,0xf,1);
      if (sVar8 < (short)(sVar6 + sVar5)) {
        iVar7 = iVar10;
        sVar8 = sVar6 + sVar5;
      }
    }
    bVar1 = iVar10 != 0;
    iVar10 = (int)(short)((short)iVar10 + -1);
  } while (bVar1);
  return iVar7;
}

/* Address: 0x100aa60c Size: 428 bytes */







void FUN_100aa60c(int param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = piRam10117358;
  sVar3 = 0;
  iVar5 = 1;
  do {
    iVar6 = 1;
    do {
      iVar2 = FUN_1005f230(1,2,0xffffffffffffffff);
      if ((iVar2 == 0) && ((*(unsigned int *)(*piVar1 + iVar5 * 0xe0 + iVar6 * 2) >> 0x18) - 0x20 < 6)) {
        return;
      }
      sVar4 = (short)iVar6 + 1;
      iVar6 = (int)sVar4;
    } while (sVar4 < 0x6e);
    sVar4 = (short)iVar5 + 1;
    iVar5 = (int)sVar4;
    if (0x99 < sVar4) {
      *(short *)(param_1 + 400) = 0xffff;
      iVar5 = FUN_100aa3dc(param_1);
      if (iVar5 != -1) {
        do {
          sVar3 = sVar3 + 1;
          iVar6 = param_1 + iVar5 * 2;
          *(short *)(iVar6 + 300) = 1;
          iVar6 = *piVar1 + *(short *)(iVar6 + 100) * 0xe0;
          iVar5 = *(short *)(param_1 + iVar5 * 2) * 2;
          *(unsigned int *)(iVar6 + iVar5) = *(unsigned int *)(iVar6 + iVar5) | 0x800000;
          iVar5 = FUN_100aa3dc(param_1);
          if (iVar5 == -1) {
            return;
          }
        } while (sVar3 < 10);
      }
      return;
    }
  } while( true );
}

/* Address: 0x100aa938 Size: 188 bytes */
void FUN_100aa938(int param_1)

{
  int bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x31;
  do {
    iVar2 = param_1 + iVar3 * 2;
    *(short *)(iVar2 + 500) = 0xffff;
    *(short *)(iVar2 + 400) = 0xffff;
    *(short *)(iVar2 + 200) = 0xffff;
    *(short *)(iVar2 + 100) = 0xffff;
    *(short *)(param_1 + iVar3 * 2) = 0xffff;
    *(short *)(iVar2 + 300) = 0;
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  FUN_100a9f78(param_1);
  iVar3 = 0x31;
  do {
    iVar2 = param_1 + iVar3 * 2;
    if (*(short *)(iVar2 + 300) == 0) {
      *(short *)(iVar2 + 500) = 0xffff;
      *(short *)(iVar2 + 400) = 0xffff;
      *(short *)(iVar2 + 200) = 0xffff;
      *(short *)(iVar2 + 100) = 0xffff;
      *(short *)(iVar3 * 2 + param_1) = 0xffff;
    }
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  FUN_100aa60c(param_1);
  return;
}

/* Address: 0x100aa9f4 Size: 392 bytes */
long long FUN_100aa9f4(int param_1,short *param_2,short *param_3)

{
  int bVar1;
  short uVar2;
  short uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  piVar6 = piRam1011735c;
  do {
    sVar9 = 0x4f;
    do {
      iVar7 = FUN_1005f230(1,*(short *)(*piVar6 + 0x1602),0xffffffffffffffff);
      if (*(char *)(iVar7 + param_1 + 600) == '\0') break;
      bVar1 = sVar9 != 0;
      sVar9 = sVar9 + -1;
      iVar7 = -1;
    } while (bVar1);
    if (iVar7 == -1) {
      return 0;
    }
    *(char *)(param_1 + iVar7 + 600) = 1;
    iVar4 = *piVar6 + iVar7 * 0x42;
    uVar2 = *(short *)(iVar4 + 0x1604);
    uVar3 = *(short *)(iVar4 + 0x1606);
    sVar9 = *(short *)(*piVar6 + 0x1602);
    iVar4 = -1;
    iVar5 = -1;
    while (sVar9 != 0) {
      sVar9 = sVar9 + -1;
      if ((((*(char *)(param_1 + sVar9 + 600) == '\0') &&
           (iVar8 = *piVar6 + sVar9 * 0x42,
           iVar8 = FUN_1000a884(uVar2,uVar3,*(short *)(iVar8 + 0x1604),
                                *(short *)(iVar8 + 0x1606)), 0x1d < iVar8)) && (iVar8 < 0x47))
         && (iVar8 = FUN_1005f230(1,1000,0), iVar5 < iVar8)) {
        iVar4 = (int)sVar9;
        iVar5 = iVar8;
      }
    }
    if (iVar4 != -1) {
      *(char *)(iVar4 + param_1 + 600) = 1;
      *param_2 = (short)iVar7;
      *param_3 = (short)iVar4;
      return 1;
    }
  } while( true );
}

/* Address: 0x100aab7c Size: 228 bytes */
long long FUN_100aab7c(short param_1,short param_2,short *param_3)

{
  int bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  
  piVar6 = piRam101175f0;
  iVar5 = iRam1011683c;
  sVar8 = 7;
  while( true ) {
    iVar7 = FUN_1005f230(1,0xc,0xffffffffffffffff);
    *(int *)param_3 = *(int *)(iVar7 * 4 + iVar5);
    sVar3 = *param_3;
    *param_3 = sVar3 + param_1;
    sVar4 = param_3[1];
    param_3[1] = sVar4 + param_2;
    cVar2 = *(char *)(*piVar6 + (short)(sVar4 + param_2) * 0x70 + (int)(short)(sVar3 + param_1) +
                     0x34a);
    if (((cVar2 == '\a') || (cVar2 == '\x04')) || (cVar2 == '\x05')) break;
    bVar1 = sVar8 == 0;
    sVar8 = sVar8 + -1;
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

/* Address: 0x100aac68 Size: 180 bytes */
void FUN_100aac68(int param_1,short param_2,short param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x1602) != 0) {
    sVar1 = *(short *)(*piRam1011735c + 0x1602);
    do {
      sVar1 = sVar1 + -1;
      iVar3 = *piVar2 + sVar1 * 0x42;
      iVar3 = FUN_1000a884(param_2,param_3,*(short *)(iVar3 + 0x1604),
                           *(short *)(iVar3 + 0x1606));
      if (iVar3 < 10) {
        *(char *)(param_1 + sVar1 + 600) = 1;
      }
    } while (sVar1 != 0);
  }
  return;
}

/* Address: 0x100aad1c Size: 444 bytes */
long long
FUN_100aad1c(long long param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  long long uVar4;
  int iVar6;
  short sVar7;
  short sVar8;
  char local_110 [200];
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  char *local_3c;
  short local_38;
  short local_36 [27];
  
  piVar3 = piRam101175f0;
  piVar2 = piRam10117354;
  local_3e = 1;
  local_40 = 0;
  local_48 = param_2;
  local_46 = param_3;
  local_44 = param_4;
  local_42 = param_5;
  local_3c = local_110;
  iVar5 = FUN_10043e60(&local_48);
  sVar8 = 0;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    local_38 = param_3;
    local_36[0] = param_2;
    do {
      sVar8 = sVar8 + 1;
      if ((((local_36[0] == param_4) && (local_38 == param_5)) ||
          (cVar1 = local_110[iVar5], cVar1 == -1)) ||
         (iVar6 = FUN_10017170(local_36,&local_38,cVar1), iVar6 == 0)) break;
      if (((*(unsigned int *)(*piVar2 + local_38 * 0x70 + (int)local_36[0]) >> 0x18 & 0x1f) != 0) &&
         (param_6 != 0)) {
        return 1;
      }
      cVar1 = *(char *)(*piVar3 + local_38 * 0x70 + (int)local_36[0] + 0x34a);
      if (((cVar1 != '\x03') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
        iVar6 = local_38 * 0x70 + *piVar2;
        *(unsigned int *)(iVar6 + local_36[0]) = *(unsigned int *)(iVar6 + local_36[0]) & 0xe0ffffff | 0x1000000;
        FUN_10051d60(local_36[0],local_38);
      }
      if (5 < sVar8) {
        FUN_100aac68(param_1,local_36[0],local_38);
        sVar8 = 0;
      }
      sVar7 = (short)iVar5 + 1;
      iVar5 = (int)sVar7;
    } while (sVar7 < 200);
    uVar4 = 1;
  }
  return uVar4;
}

/* Address: 0x100aaed8 Size: 224 bytes */
long long FUN_100aaed8(long long param_1,short param_2,short param_3)

{
  int *piVar1;
  int iVar3;
  long long uVar2;
  short local_28;
  short local_26;
  short local_20;
  short local_1e;
  
  piVar1 = piRam1011735c;
  iVar3 = *piRam1011735c + param_2 * 0x42;
  iVar3 = FUN_100aab7c(*(short *)(iVar3 + 0x1604),*(short *)(iVar3 + 0x1606),&local_20);
  if ((iVar3 == 0) ||
     (iVar3 = *piVar1 + param_3 * 0x42,
     iVar3 = FUN_100aab7c(*(short *)(iVar3 + 0x1604),*(short *)(iVar3 + 0x1606),&local_28)
     , iVar3 == 0)) {
    return 0;
  }
  if ((local_20 == local_28) && (local_1e == local_26)) {
    return 0;
  }
  uVar2 = FUN_100aad1c(param_1,local_20,local_1e,local_28,local_26,0);
  return uVar2;
}

/* Address: 0x100abd8c Size: 204 bytes */
int FUN_100abd8c(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *piRam10117358 + param_2 * 0xe0;
  if ((*(unsigned int *)(iVar1 + param_1 * 2) >> 0x15 & 1) == 0) {
    if ((int)(short)*(char *)(*piRam1011735c + 0x711 +
                             (*(unsigned int *)(*piRam10117358 + param_2 * 0xe0 + param_1 * 2) >> 0x18)) -
        4U < 8) {
      return iVar1;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

/* Address: 0x100abe94 Size: 248 bytes */
short FUN_100abe94(int param_1)

{
  int *ppuVar1;
  int uStack00000018;
  short local_8;
  short local_6;
  
  ppuVar1 = 0 /* TVect base */;
  local_8 = 0;
  uStack00000018 = param_1;
  FUN_1003aeb0(2,0,0,param_1);
  local_6 = 0;
  if (0 < *(short *)(*(int*)((char*)ppuVar1 - 0xa5))) {
    do {
      if (*(char *)(*(int *)(*(int*)((char*)ppuVar1 - 0x151)) + *(short *)((*(int*)((char*)ppuVar1 - 0x59)) + local_6 * 2) * 0x1e +
                   0xd26) == '\x01') {
        local_8 = local_8 + *(char *)(*(int *)(*(int*)((char*)ppuVar1 - 0x151)) +
                                      *(short *)((*(int*)((char*)ppuVar1 - 0x59)) + local_6 * 2) * 0x1e + 0xd27);
      }
      local_6 = local_6 + 1;
    } while (local_6 < *(short *)(*(int*)((char*)ppuVar1 - 0xa5)));
  }
  return local_8;
}

























/* Address: 0x100abf8c Size: 320 bytes */
short FUN_100abf8c(int param_1)

{
  int *ppuVar1;
  int uStack00000018;
  short local_8;
  short local_6;
  
  ppuVar1 = 0 /* TVect base */;
  local_8 = 0;
  uStack00000018 = param_1;
  FUN_1003aeb0(2,0,0,param_1);
  local_6 = 0;
  if (0 < *(short *)(*(int*)((char*)ppuVar1 - 0xa5))) {
    do {
      if (*(char *)(*(int *)(*(int*)((char*)ppuVar1 - 0x151)) + *(short *)((*(int*)((char*)ppuVar1 - 0x59)) + local_6 * 2) * 0x1e +
                   0xd26) == '\x02') {
        local_8 = local_8 + *(char *)(*(int *)(*(int*)((char*)ppuVar1 - 0x151)) +
                                      *(short *)((*(int*)((char*)ppuVar1 - 0x59)) + local_6 * 2) * 0x1e + 0xd27);
      }
      if (*(char *)(*(int *)(*(int*)((char*)ppuVar1 - 0x151)) + *(short *)((*(int*)((char*)ppuVar1 - 0x59)) + local_6 * 2) * 0x1e +
                   0xd26) == '\b') {
        local_8 = local_8 + 1;
      }
      local_6 = local_6 + 1;
    } while (local_6 < *(short *)(*(int*)((char*)ppuVar1 - 0xa5)));
  }
  return local_8;
}





























/* Address: 0x100ac0cc Size: 8412 bytes */
void FUN_100ac0cc(short param_1,short param_2)

{
  int bVar1;
  unsigned char *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned short *puVar6;
  char *pcVar7;
  int iVar8;
  int bVar9;
  int bVar10;
  int bVar11;
  int bVar12;
  int bVar13;
  int bVar14;
  int bVar15;
  int bVar16;
  int bVar17;
  int bVar18;
  unsigned long long uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  char cVar23;
  short sStack0000001a;
  short sStack0000001e;
  short local_150;
  unsigned short local_14e;
  short local_14c;
  short local_14a;
  short local_146;
  short local_144;
  short sStack_12a;
  short local_126;
  short local_124;
  int aiStack_120 [8];
  char local_100;
  int local_fc;
  short local_f8;
  char acStack_f5 [32];
  char acStack_d5 [9];
  short local_cc;
  int local_c8;
  short local_c4;
  short local_c2;
  short local_c0;
  char auStack_bc [32];
  short local_9c;
  short local_9a;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8a;
  short local_88;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  uVar19 = ZEXT48(0 /* TVect base */);
  bVar13 = false;
  local_14e = 0;
  local_14c = 0;
  local_14a = 0;
  local_146 = 0;
  local_144 = 0;
  bVar11 = false;
  bVar14 = false;
  bVar12 = false;
  bVar17 = false;
  bVar18 = false;
  bVar15 = false;
  bVar16 = false;
  bVar9 = false;
  bVar10 = false;
  sStack0000001a = param_1;
  sStack0000001e = param_2;
  sVar20 = FUN_100abd8c(param_1,param_2);
  iVar8 = (int)uVar19;
  **(char **)(iVar8 + -0x134) = (char)*(short *)(**(int **)(iVar8 + -0x544) + 0x110);
  pbVar2 = *(unsigned char **)(iVar8 + -0x130);
  *pbVar2 = (unsigned char)((unsigned int)*(int *)
                          (**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 + sStack0000001a * 2)
                  >> 0x10) & 0xf;
  if ((char)*pbVar2 < '\b') {
    sStack_12a = (short)**(char **)(iVar8 + -0x130);
  }
  else {
    sStack_12a = 8;
  }
  if (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
               (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 + sStack0000001a * 2)
               >> 0x18)) == '\n') {
    **(char **)(iVar8 + -300) = 4;
    local_126 = 0;
    if (0 < *(short *)(**(int **)(iVar8 + -0x544) + 0x1602)) {
      do {
        if (((*(short *)(**(int **)(iVar8 + -0x544) + 0x1604 + local_126 * 0x42) == sStack0000001a)
            || ((int)*(short *)(**(int **)(iVar8 + -0x544) + 0x1604 + local_126 * 0x42) ==
                sStack0000001a + -1)) &&
           ((*(short *)(**(int **)(iVar8 + -0x544) + local_126 * 0x42 + 0x1606) == sStack0000001e ||
            ((int)*(short *)(**(int **)(iVar8 + -0x544) + local_126 * 0x42 + 0x1606) ==
             sStack0000001e + -1)))) break;
        local_126 = local_126 + 1;
      } while (local_126 < *(short *)(**(int **)(iVar8 + -0x544) + 0x1602));
    }
    sVar21 = (short)**(char **)(iVar8 + -300);
    while (local_124 = sVar21 + -1, sVar21 != 0) {
      piVar3 = *(int **)(iVar8 + -0x544);
      iVar4 = *(int *)(iVar8 + -0x105c);
      iVar5 = *(int *)(iVar8 + -0x1058);
      *(short *)(*(int *)(iVar8 + -0x128) + local_124 * 2) =
           *(short *)
            (**(int **)(iVar8 + -0x548) +
             ((int)*(short *)(*piVar3 + local_126 * 0x42 + 0x1606) +
             (int)*(short *)(iVar4 + local_124 * 2)) * 0xe0 +
            ((int)*(short *)(*piVar3 + 0x1604 + local_126 * 0x42) +
            (int)*(short *)(iVar5 + local_124 * 2)) * 2);
      *(short *)(*(int *)(iVar8 + -0x124) + local_124 * 2) =
           *(short *)(*piVar3 + 0x1604 + local_126 * 0x42) + *(short *)(iVar5 + local_124 * 2);
      *(short *)(*(int *)(iVar8 + -0x120) + local_124 * 2) =
           *(short *)(*piVar3 + local_126 * 0x42 + 0x1606) + *(short *)(iVar4 + local_124 * 2);
      sVar21 = local_124;
    }
    **(int **)(iVar8 + -0x3b8) = **(int **)(iVar8 + -0x544) + 0x1604 + local_126 * 0x42;
  }
  else {
    **(char **)(iVar8 + -300) = 1;
    **(short **)(iVar8 + -0x128) =
         *(short *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 + sStack0000001a * 2);
    **(short **)(iVar8 + -0x124) = sStack0000001a;
    **(short **)(iVar8 + -0x120) = sStack0000001e;
    **(int **)(iVar8 + -0x3b8) = 0;
  }
  local_124 = 0;
  bVar1 = true;
  while (bVar1) {
    iVar4 = *(int *)(iVar8 + -0x1b8);
    aiStack_120[local_124] = *(int *)(iVar4 + local_124 * 4);
    *(int *)(iVar4 + local_124 * 4) = 0;
    local_124 = local_124 + 1;
    bVar1 = local_124 < 8;
  }
  **(short **)(iVar8 + -0x1bc) = 0;
  local_124 = 0;
  bVar1 = true;
  while (bVar1) {
    if (aiStack_120[local_124] != 0) {
      sVar21 = **(short **)(iVar8 + -0x1bc);
      **(short **)(iVar8 + -0x1bc) = sVar21 + 1;
      *(int *)(*(int *)(iVar8 + -0x1b8) + sVar21 * 4) = aiStack_120[local_124];
    }
    local_124 = local_124 + 1;
    bVar1 = local_124 < 8;
  }
  local_100 = 1 < **(short **)(iVar8 + -0x1bc);
  puVar6 = *(unsigned short **)(iVar8 + -0x154c);
  *puVar6 = (unsigned short)(unsigned char)local_100;
  if (*puVar6 == 0) {
    local_fc = 1;
  }
  else {
    local_fc = (int)**(short **)(iVar8 + -0x1bc);
  }
  pcVar7 = *(char **)(iVar8 + -0x3d0);
  *pcVar7 = (char)local_fc;
  local_126 = 0;
  if ('\0' < *pcVar7) {
    do {
      *(char *)(*(int *)(iVar8 + -0x3c0) + (int)local_126) = 1;
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3d0));
  }
  if (**(short **)(iVar8 + -0x154c) == 0) {
    **(int **)(iVar8 + -0x3b0) = **(int **)(iVar8 + -0x1c0);
  }
  else {
    local_126 = 0;
    if ('\0' < **(char **)(iVar8 + -0x3d0)) {
      do {
        *(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) =
             *(int *)(*(int *)(iVar8 + -0x1b8) + local_126 * 4);
        local_126 = local_126 + 1;
      } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3d0));
    }
  }
  **(char **)(iVar8 + -0x3c8) = 0;
  if (**(char **)(iVar8 + -300) == '\x04') {
    sVar21 = *(short *)(**(int **)(iVar8 + -0x544) + 0x182);
    while (local_f8 = sVar21 + -1, sVar21 != 0) {
      sVar21 = local_f8;
      if (((*(char *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16 + 5) !=
            (char)*(short *)(**(int **)(iVar8 + -0x544) + 0x110)) &&
          (**(short **)(iVar8 + -0x124) <= *(short *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16))
          ) && (((int)*(short *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16) <=
                 **(short **)(iVar8 + -0x124) + 1 &&
                ((**(short **)(iVar8 + -0x120) <=
                  *(short *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16 + 2) &&
                 ((int)*(short *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16 + 2) <=
                  **(short **)(iVar8 + -0x120) + 1)))))) {
        cVar23 = **(char **)(iVar8 + -0x3c8);
        **(char **)(iVar8 + -0x3c8) = cVar23 + '\x01';
        *(int *)(*(int *)(iVar8 + -0x3b4) + cVar23 * 4) =
             **(int **)(iVar8 + -0x540) + local_f8 * 0x16;
      }
    }
  }
  else {
    sVar21 = *(short *)(**(int **)(iVar8 + -0x544) + 0x182);
    while (local_f8 = sVar21 + -1, sVar21 != 0) {
      sVar21 = local_f8;
      if (((*(char *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16 + 5) !=
            (char)*(short *)(**(int **)(iVar8 + -0x544) + 0x110)) &&
          (*(short *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16) == **(short **)(iVar8 + -0x124))
          ) && (*(short *)(**(int **)(iVar8 + -0x540) + local_f8 * 0x16 + 2) ==
                **(short **)(iVar8 + -0x120))) {
        cVar23 = **(char **)(iVar8 + -0x3c8);
        **(char **)(iVar8 + -0x3c8) = cVar23 + '\x01';
        *(int *)(*(int *)(iVar8 + -0x3b4) + cVar23 * 4) =
             **(int **)(iVar8 + -0x540) + local_f8 * 0x16;
      }
    }
  }
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3c8)) {
    do {
      *(char *)(*(int *)(iVar8 + -0x3bc) + (int)local_126) = 1;
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3c8));
  }
  if (((*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                 (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 + sStack0000001a * 2)
                 >> 0x18)) == '\x02') ||
      (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 + sStack0000001a * 2)
                >> 0x18)) == '\x03')) ||
     (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
               (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 + sStack0000001a * 2)
               >> 0x18)) == '\x06')) {
    bVar11 = true;
  }
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3c8)) {
    do {
      acStack_f5[local_126 + 1] =
           *(char *)(**(int **)(iVar8 + -0x544) + 0x60c + sStack_12a * 0x1d +
                    (int)*(char *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 4));
      if ((!bVar9) && (*(char *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 4) == '\x1c'))
      {
        bVar9 = true;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3c8));
  }
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3d0)) {
    do {
      acStack_d5[local_126 + 1] =
           *(char *)(**(int **)(iVar8 + -0x544) + 0x60c + **(char **)(iVar8 + -0x134) * 0x1d +
                    (int)*(char *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 4));
      if ((!bVar10) && (*(char *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 4) == '\x1c')
         ) {
        bVar10 = true;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3d0));
  }
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3c8)) {
    do {
      if ((((bVar11) &&
           ((*(unsigned short *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 0xc) & 0x1000) == 0))
          && (*(char *)(**(int **)(iVar8 + -0x53c) +
                       *(char *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 4) * 6) !=
              '\0')) && (bVar9)) {
        acStack_f5[local_126 + 1] = acStack_f5[local_126 + 1] + 'P';
        break;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3c8));
  }
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3d0)) {
    do {
      if (((bVar11) &&
          ((*(unsigned short *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 0xc) & 0x1000) == 0))
         && ((*(char *)(**(int **)(iVar8 + -0x53c) +
                       *(char *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 4) * 6) !=
              '\0' && (bVar10)))) {
        acStack_d5[local_126 + 1] = acStack_d5[local_126 + 1] + 'P';
        break;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3d0));
  }
  local_126 = 1;
  if ('\x01' < **(char **)(iVar8 + -0x3d0)) {
    do {
      if (((acStack_d5[local_126 + 1] < acStack_d5[local_126]) &&
          (local_cc = local_126, 0 < local_126)) &&
         (acStack_d5[local_126 + 1] < acStack_d5[local_126])) {
        do {
          iVar4 = *(int *)(iVar8 + -0x3b0);
          local_c8 = *(int *)(iVar4 + local_cc * 4);
          *(int *)(iVar4 + local_cc * 4) = *(int *)(iVar4 + (local_cc + -1) * 4);
          *(int *)(iVar4 + (local_cc + -1) * 4) = local_c8;
          cVar23 = acStack_d5[local_cc + 1];
          local_c4 = (short)cVar23;
          acStack_d5[local_cc + 1] = acStack_d5[local_cc];
          acStack_d5[local_cc] = cVar23;
          local_cc = local_cc + -1;
          if (local_cc < 1) break;
        } while (acStack_d5[local_cc + 1] < acStack_d5[local_cc]);
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3d0));
  }
  local_126 = 1;
  if ('\x01' < **(char **)(iVar8 + -0x3c8)) {
    do {
      if (((acStack_f5[local_126 + 1] < acStack_f5[local_126]) &&
          (local_cc = local_126, 0 < local_126)) &&
         (acStack_f5[local_126 + 1] < acStack_f5[local_126])) {
        do {
          iVar4 = *(int *)(iVar8 + -0x3b4);
          local_c8 = *(int *)(iVar4 + local_cc * 4);
          *(int *)(iVar4 + local_cc * 4) = *(int *)(iVar4 + (local_cc + -1) * 4);
          *(int *)(iVar4 + (local_cc + -1) * 4) = local_c8;
          cVar23 = acStack_f5[local_cc + 1];
          local_c4 = (short)cVar23;
          acStack_f5[local_cc + 1] = acStack_f5[local_cc];
          acStack_f5[local_cc] = cVar23;
          local_cc = local_cc + -1;
          if (local_cc < 1) break;
        } while (acStack_f5[local_cc + 1] < acStack_f5[local_cc]);
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)(iVar8 + -0x3c8));
  }
  sVar21 = (short)**(char **)(iVar8 + -0x3d0);
  while (local_126 = sVar21 + -1, sVar21 != 0) {
    *(char *)(*(int *)(iVar8 + -0x11c) + (int)local_126) = 1;
    *(char *)(*(int *)(iVar8 + -0x118) + (int)local_126) =
         *(char *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 4);
    sVar21 = local_126;
  }
  sVar21 = (short)**(char **)(iVar8 + -0x3c8);
  while (local_126 = sVar21 + -1, sVar21 != 0) {
    *(char *)(*(int *)(iVar8 + -0x114) + (int)local_126) = 1;
    *(char *)(*(int *)(iVar8 + -0x110) + (int)local_126) =
         *(char *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 4);
    sVar21 = local_126;
  }
  local_c2 = 0;
  local_c0 = 0;
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3d0)) {
    do {
      FUN_10049628(*(char *)(*(int *)((int)uVar19 + -0x118) + (int)local_126),auStack_bc);
      if (*(char *)(*(int *)((int)uVar19 + -0x118) + (int)local_126) == '\x1c') {
        local_c4 = FUN_100abe94(*(int *)(*(int *)((int)uVar19 + -0x3b0) + local_126 * 4));
        local_c4 = *(char *)(*(int *)(*(int *)((int)uVar19 + -0x3b0) + local_126 * 4) + 8) +
                   local_c4;
        if (local_c0 < local_c4) {
          local_7c = 9;
          local_7a = local_c4;
          if (9 < local_c4) {
            local_7a = 9;
          }
          local_78 = local_7a;
          local_c0 = local_7a;
        }
      }
      if (local_88 == 1) {
        bVar14 = true;
      }
      if (local_88 == 2) {
        bVar17 = true;
      }
      if (local_88 == 3) {
        bVar18 = true;
      }
      if (local_88 == 4) {
        bVar13 = true;
      }
      if (local_8a != 0) {
        local_76 = local_144;
        local_74 = local_8a;
        if (local_144 < local_8a) {
          local_72 = local_144;
        }
        else {
          local_72 = local_8a;
        }
        local_70 = local_72;
        local_144 = local_72;
      }
      if ((sVar20 == 0) && (local_94 != 0)) {
        local_6e = local_14c;
        local_6c = local_94;
        if (local_94 < local_14c) {
          local_6a = local_14c;
        }
        else {
          local_6a = local_94;
        }
        local_68 = local_6a;
        local_14c = local_6a;
      }
      if ((sVar20 == 1) && (local_92 != 0)) {
        local_66 = local_14c;
        local_64 = local_92;
        if (local_92 < local_14c) {
          local_62 = local_14c;
        }
        else {
          local_62 = local_92;
        }
        local_60 = local_62;
        local_14c = local_62;
      }
      if ((sVar20 == 2) && (local_90 != 0)) {
        local_5e = local_14c;
        local_5c = local_90;
        if (local_90 < local_14c) {
          local_5a = local_14c;
        }
        else {
          local_5a = local_90;
        }
        local_58 = local_5a;
        local_14c = local_5a;
      }
      if ((sVar20 == 3) && (local_8e != 0)) {
        local_56 = local_14c;
        local_54 = local_8e;
        if (local_8e < local_14c) {
          local_52 = local_14c;
        }
        else {
          local_52 = local_8e;
        }
        local_50 = local_52;
        local_14c = local_52;
      }
      if (*(char *)(*(int *)((int)uVar19 + -0x118) + (int)local_126) == '\x1c') {
        sVar21 = FUN_100abf8c(*(int *)(*(int *)((int)uVar19 + -0x3b0) + local_126 * 4));
        local_c2 = local_c2 + sVar21;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)((int)uVar19 + -0x3d0));
  }
  sVar21 = local_c2 + *(short *)(*(int *)((int)uVar19 + -0x1270) + local_c0 * 2);
  local_c2 = 0;
  local_c0 = 0;
  local_126 = 0;
  if ('\0' < **(char **)((int)uVar19 + -0x3c8)) {
    do {
      FUN_10049628(*(char *)(*(int *)((int)uVar19 + -0x110) + (int)local_126),auStack_bc);
      if (*(char *)(*(int *)((int)uVar19 + -0x110) + (int)local_126) == '\x1c') {
        local_c4 = FUN_100abe94(*(int *)(*(int *)((int)uVar19 + -0x3b4) + local_126 * 4));
        local_c4 = *(char *)(*(int *)(*(int *)((int)uVar19 + -0x3b4) + local_126 * 4) + 8) +
                   local_c4;
        if (local_c0 < local_c4) {
          local_4e = 9;
          local_4c = local_c4;
          if (9 < local_c4) {
            local_4c = 9;
          }
          local_4a = local_4c;
          local_c0 = local_4c;
        }
      }
      if (local_88 == 1) {
        bVar12 = true;
      }
      if (local_88 == 2) {
        bVar15 = true;
      }
      if (local_88 == 3) {
        bVar16 = true;
      }
      if (local_8a != 0) {
        local_48 = local_14a;
        local_46 = local_8a;
        if (local_14a < local_8a) {
          local_44 = local_14a;
        }
        else {
          local_44 = local_8a;
        }
        local_42 = local_44;
        local_14a = local_44;
      }
      if (local_88 == 4) {
        local_14e = 1;
      }
      if ((sVar20 == 0) && (local_94 != 0)) {
        local_40 = local_146;
        local_3e = local_94;
        if (local_94 < local_146) {
          local_3c = local_146;
        }
        else {
          local_3c = local_94;
        }
        local_3a = local_3c;
        local_146 = local_3c;
      }
      if ((sVar20 == 1) && (local_92 != 0)) {
        local_38 = local_146;
        local_36 = local_92;
        if (local_92 < local_146) {
          local_34 = local_146;
        }
        else {
          local_34 = local_92;
        }
        local_32 = local_34;
        local_146 = local_34;
      }
      if ((sVar20 == 2) && (local_90 != 0)) {
        local_30 = local_146;
        local_2e = local_90;
        if (local_90 < local_146) {
          local_2c = local_146;
        }
        else {
          local_2c = local_90;
        }
        local_2a = local_2c;
        local_146 = local_2c;
      }
      if ((sVar20 == 3) && (local_8e != 0)) {
        local_28 = local_146;
        local_26 = local_8e;
        if (local_8e < local_146) {
          local_24 = local_146;
        }
        else {
          local_24 = local_8e;
        }
        local_22 = local_24;
        local_146 = local_24;
      }
      if (*(char *)(*(int *)((int)uVar19 + -0x110) + (int)local_126) == '\x1c') {
        sVar22 = FUN_100abf8c(*(int *)(*(int *)((int)uVar19 + -0x3b4) + local_126 * 4));
        local_c2 = local_c2 + sVar22;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)((int)uVar19 + -0x3c8));
  }
  if ((bVar12) || (!bVar13)) {
    local_150 = 0;
  }
  else {
    local_150 = 1;
  }
  iVar8 = (int)uVar19;
  if ((bVar14) || ((sVar20 != 0 && (local_14e == 0)))) {
    local_14e = 0;
  }
  else {
    if ((**(unsigned int **)(iVar8 + -0x128) >> 0x15 & 1) == 0) {
      if (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                   (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 +
                             sStack0000001a * 2) >> 0x18)) == '\v') {
        local_14e = 2;
      }
      else if (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                        (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 +
                                  sStack0000001a * 2) >> 0x18)) == '\n') {
        local_14e = (unsigned short)*(char *)(**(int **)(iVar8 + -0x3b8) + 0x14);
      }
    }
    else {
      local_14e = 1;
    }
    if (**(char **)(iVar8 + -0x130) == '\x0f') {
      local_14e = ((short)local_14e >> 1) + (unsigned short)((short)local_14e < 0 && (local_14e & 1) != 0);
    }
  }
  local_20 = 0;
  if (!bVar15) {
    local_20 = sVar21;
  }
  if (!bVar16) {
    local_20 = local_20 + local_14c;
  }
  local_1c = local_20 + local_150;
  local_1e = *(short *)(**(int **)(iVar8 + -0x544) + 0x112);
  if (local_1e < local_1c) {
    local_1c = local_1e;
  }
  local_1a = local_1c;
  local_20 = local_1c + local_14a;
  local_18 = 0;
  if (!bVar17) {
    local_18 = local_c2 + *(short *)(*(int *)(iVar8 + -0x1270) + local_c0 * 2);
  }
  if (!bVar18) {
    local_18 = local_18 + local_146;
  }
  local_14 = local_18 + local_14e;
  local_16 = *(short *)(**(int **)(iVar8 + -0x544) + 0x112);
  if (local_16 < local_14) {
    local_14 = local_16;
  }
  local_12 = local_14;
  local_18 = local_14 + local_144;
  local_126 = 0;
  if ('\0' < **(char **)(iVar8 + -0x3d0)) {
    do {
      FUN_10049628(*(char *)(*(int *)((int)uVar19 + -0x118) + (int)local_126),auStack_bc);
      iVar8 = (int)uVar19;
      *(char *)(*(int *)(iVar8 + -0x10c) + (int)local_126) = 0;
      if (((*(unsigned short *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 0xc) & 0x1000) == 0) ||
         ((*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                    (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 +
                              sStack0000001a * 2) >> 0x18)) != '\x02' &&
          (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                    (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 +
                              sStack0000001a * 2) >> 0x18)) != '\x03')))) {
        *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) =
             *(char *)(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4) + 8) + (char)local_20;
        if (*(char *)(*(int *)(iVar8 + -0x118) + (int)local_126) == '\x1c') {
          cVar23 = FUN_100abe94(*(int *)(*(int *)(iVar8 + -0x3b0) + local_126 * 4));
          iVar8 = *(int *)((int)uVar19 + -0x108);
          *(char *)(iVar8 + local_126) = *(char *)(iVar8 + local_126) + cVar23;
        }
        iVar8 = (int)uVar19;
        if ((sVar20 == 0) && (local_9c != 0)) {
          *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) + (char)local_9c;
        }
        if ((sVar20 == 1) && (local_9a != 0)) {
          *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) + (char)local_9a;
        }
        if ((sVar20 == 2) && (local_98 != 0)) {
          *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) + (char)local_98;
        }
        if ((sVar20 == 3) && (local_96 != 0)) {
          *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) + (char)local_96;
        }
        local_10 = 0xf;
        local_e = (short)*(char *)(*(int *)(iVar8 + -0x108) + (int)local_126);
        local_c = local_e;
        if (0xf < local_e) {
          local_c = 0xf;
        }
        local_a = local_c;
        *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) = (char)local_c;
      }
      else {
        *(char *)(*(int *)(iVar8 + -0x108) + (int)local_126) = 4;
        *(char *)(*(int *)(iVar8 + -0x10c) + (int)local_126) = 1;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)((int)uVar19 + -0x3d0));
  }
  local_126 = 0;
  if ('\0' < **(char **)((int)uVar19 + -0x3c8)) {
    do {
      FUN_10049628(*(char *)(*(int *)((int)uVar19 + -0x110) + (int)local_126),auStack_bc);
      iVar8 = (int)uVar19;
      *(char *)(*(int *)(iVar8 + -0x104) + (int)local_126) = 0;
      if (((*(unsigned short *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 0xc) & 0x1000) == 0) ||
         ((*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                    (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 +
                              sStack0000001a * 2) >> 0x18)) != '\x02' &&
          (*(char *)(**(int **)(iVar8 + -0x544) + 0x711 +
                    (*(unsigned int *)(**(int **)(iVar8 + -0x548) + sStack0000001e * 0xe0 +
                              sStack0000001a * 2) >> 0x18)) != '\x03')))) {
        *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) =
             *(char *)(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4) + 8) + (char)local_18;
        if (*(char *)(*(int *)(iVar8 + -0x110) + (int)local_126) == '\x1c') {
          cVar23 = FUN_100abe94(*(int *)(*(int *)(iVar8 + -0x3b4) + local_126 * 4));
          iVar8 = *(int *)((int)uVar19 + -0x100);
          *(char *)(iVar8 + local_126) = *(char *)(iVar8 + local_126) + cVar23;
        }
        iVar8 = (int)uVar19;
        if ((sVar20 == 0) && (local_9c != 0)) {
          *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) + (char)local_9c;
        }
        if ((sVar20 == 1) && (local_9a != 0)) {
          *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) + (char)local_9a;
        }
        if ((sVar20 == 2) && (local_98 != 0)) {
          *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) + (char)local_98;
        }
        if ((sVar20 == 3) && (local_96 != 0)) {
          *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) =
               *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) + (char)local_96;
        }
        local_8 = 0xf;
        local_6 = (short)*(char *)(*(int *)(iVar8 + -0x100) + (int)local_126);
        local_4 = local_6;
        if (0xf < local_6) {
          local_4 = 0xf;
        }
        local_2 = local_4;
        *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) = (char)local_4;
      }
      else {
        *(char *)(*(int *)(iVar8 + -0x100) + (int)local_126) = 4;
        *(char *)(*(int *)(iVar8 + -0x104) + (int)local_126) = 1;
      }
      local_126 = local_126 + 1;
    } while ((int)local_126 < (int)**(char **)((int)uVar19 + -0x3c8));
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100aeafc() { }

















/* Address: stubbed - had compile errors on 64-bit */
void FUN_100aeb94() { }







































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100aed40() { }







































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100aeeec() { }


















































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100af0d4() { }




























/* Address: 0x100af1a0 Size: 200 bytes */
void FUN_100af1a0(short param_1)

{
  short *puVar1;
  int *ppuVar2;
  short uStack0000001a;
  short local_8;
  
  puVar1 = puRam1011685c;
  ppuVar2 = 0 /* TVect base */;
  *puRam1011685c = param_1;
  *puRam10116850 = *puVar1;
  local_8 = 0;
  do {
    *(char *)(*piRam10116858 + (int)local_8) = *(char *)(*piRam10116854 + (int)local_8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x1d);
  uStack0000001a = param_1;
  FUN_100ae1a8(1);
  FUN_100ae550();
  if (*(int *)(*(int*)((char*)ppuVar2 - 0x415)) != 0) {
    FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar2 - 0x415)) + (int)*(short *)(**(int **)(*(int*)((char*)ppuVar2 - 0x415)) + 0x4c8))
    ;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100af268() { }




























































/* Address: 0x100af52c Size: 40 bytes */
void FUN_100af52c(void)

{
  FUN_100ae1a8(1);
  FUN_100ae550();
  return;
}







/* Address: 0x100af554 Size: 60 bytes */
void FUN_100af554(unsigned int *param_1)

{
  if ((*param_1 & 8) == 0) {
    *(unsigned int **)((int)param_1 + ((*param_1 >> 8) - 4)) = param_1;
  }
  return;
}

/* Address: 0x100af590 Size: 196 bytes */
unsigned int * FUN_100af590(unsigned int *param_1,unsigned int param_2,char param_3,int param_4)

{
  unsigned int uVar1;
  
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xffffff0f | 0x10;
  if ((param_2 & 0xff) == 0) {
    *param_1 = *param_1 & 0xfffffff7;
  }
  else {
    *param_1 = uVar1 & 0xffffff0f | 0x18;
  }
  if (param_3 == '\0') {
    *param_1 = *param_1 & 0xfffffffb;
  }
  else {
    *param_1 = *param_1 | 4;
  }
  *param_1 = *param_1 & 0xff | param_4 << 8 | 3;
  if (param_2 == 0) {
    FUN_100af554(param_1);
  }
  return param_1;
}

/* Address: 0x100af654 Size: 96 bytes */
int FUN_100af654(unsigned int *param_1,unsigned int *param_2)

{
  if ((((unsigned long long)*param_1 & 0xffffff00) << 0x20) >> 0x28 ==
      (((unsigned long long)*param_2 & 0xffffff00) << 0x20) >> 0x28) {
    return param_2 < param_1;
  }
  return (((unsigned long long)*param_2 & 0xffffff00) << 0x20) >> 0x28 <
         (((unsigned long long)*param_1 & 0xffffff00) << 0x20) >> 0x28;
}

/* Address: 0x100af6b4 Size: 116 bytes */
int FUN_100af6b4(int param_1)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56e4(0x10), param_1 != 0)) {
    FUN_100af590(param_1,1,1,0);
    *(int *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 8) = 0;
  }
  return param_1;
}

/* Address: 0x100af728 Size: 152 bytes */
int FUN_100af728(int param_1,int param_2,int param_3)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  if ((param_1 != 0) ||
     (ppuVar1 = 0 /* TVect base */, param_1 = FUN_100b0c24(0x30), param_1 != 0)) {
    FUN_100b0c48(param_1,0,1,0);
    *(int **)(param_1 + 0x10) = (*(int*)((char*)ppuVar1 - 0x410));
    FUN_100af6b4(param_1 + 0x20);
    *(int *)(param_1 + 0x18) = param_3;
    *(int *)(param_1 + 0x1c) = param_2;
    *(int *)(param_1 + 0x14) = 0;
  }
  return param_1;
}

/* Address: 0x100af7c0 Size: 104 bytes */
void FUN_100af7c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x88),iVar2);
    iVar2 = iVar1;
  }
  return;
}

/* Address: 0x100af828 Size: 148 bytes */
void FUN_100af828(int param_1,unsigned long long param_2)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x10) = uRam10116860;
    FUN_100af7c0(param_1);
    FUN_100b0b34(param_1,0);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100b0b10(param_1);
    }
  }
  return;
}

/* Address: 0x100af8c8 Size: 188 bytes */
unsigned int * FUN_100af8c8(unsigned int *param_1,unsigned long long param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  long long lVar2;
  long long lVar3;
  
  lVar2 = 0x7fffffff;
  puVar1 = (unsigned int *)0x0;
  do {
    lVar3 = ((((unsigned long long)*param_1 & 0xffffff00) << 0x20) >> 0x28) - param_2;
    if ((-1 < lVar3) && ((int)lVar3 < (int)lVar2)) {
      lVar2 = lVar3;
      puVar1 = param_1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_1;
    }
    if ((param_2 & 0xffffffff) < (((unsigned long long)*param_1 & 0xffffff00) << 0x20) >> 0x28) {
      param_1 = (unsigned int *)param_1[2];
    }
    else if ((((unsigned long long)*param_1 & 0xffffff00) << 0x20) >> 0x28 < (param_2 & 0xffffffff)) {
      param_1 = (unsigned int *)param_1[3];
    }
    else if (param_3 == (unsigned int *)0x0) {
      param_1 = (unsigned int *)param_1[2];
    }
    else if (param_1 < param_3) {
      param_1 = (unsigned int *)param_1[3];
    }
    else {
      param_1 = (unsigned int *)param_1[2];
    }
  } while (param_1 != (unsigned int *)0x0);
  return puVar1;
}

/* Address: 0x100af984 Size: 140 bytes */
void FUN_100af984(long long param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int local_10 [4];
  
  FUN_100af8c8(param_1,(((unsigned long long)*param_2 & 0xffffff00) << 0x20) >> 0x28,param_2,local_10);
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = local_10[0];
  iVar1 = FUN_100af654(param_2,local_10[0]);
  if (iVar1 == 0) {
    *(unsigned int **)(local_10[0] + 8) = param_2;
  }
  else {
    *(unsigned int **)(local_10[0] + 0xc) = param_2;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100afa10() { }











/* Address: stubbed - had compile errors on 64-bit */
void FUN_100afa38() { }



















































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100afb10() { }











/* Address: stubbed - had compile errors on 64-bit */
void FUN_100afb34() { }











/* Address: 0x100afbf0 Size: 140 bytes */
void FUN_100afbf0(long long param_1,unsigned int *param_2,int *param_3,int *param_4)

{
  for (; param_2 != (unsigned int *)0x0; param_2 = (unsigned int *)param_2[3]) {
    FUN_100afbf0(param_1,param_2[2],param_3,param_4);
    *param_4 = *param_4 + 1;
    *param_3 = *param_3 + (*param_2 >> 8);
  }
  return;
}

/* Address: 0x100afc7c Size: 88 bytes */
void FUN_100afc7c(long long param_1,int *param_2,int *param_3)

{
  *param_3 = 0;
  *param_2 = 0;
  FUN_100afbf0(param_1,param_1,param_2,param_3);
  *param_3 = *param_3 + -1;
  return;
}

/* Address: 0x100afcd4 Size: 88 bytes */
long long FUN_100afcd4(long long param_1)

{
  unsigned int local_10;
  unsigned int local_c [3];
  
  FUN_100afc7c(param_1 + 0x20,local_c,&local_10);
  return (unsigned long long)local_c[0] + ((unsigned long long)local_10 & 0x3fffffff) * -4;
}

/* Address: 0x100afd2c Size: 68 bytes */
void FUN_100afd2c(long long param_1,unsigned long long param_2)

{
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  FUN_100af8c8(param_1 + 0x20,param_2,0,0);
  return;
}

/* Address: 0x100afd70 Size: 104 bytes */
void FUN_100afd70(long long param_1,int param_2)

{
  int bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      iVar3 = *(int *)(iVar2 + 8);
    }
    return;
  }
  iVar2 = *(int *)(param_2 + 4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 0)) {
    do {
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 == 0) {
        return;
      }
      bVar1 = iVar2 == *(int *)(iVar3 + 0xc);
      iVar2 = iVar3;
    } while (bVar1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_100afdd8() { }



























































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_100afec4() { }











/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100afeec() { return 0; }


























































































