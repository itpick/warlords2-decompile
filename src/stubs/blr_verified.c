/*
 * blr_verified.c — Byte-verified PPC functions (8 bytes or fewer)
 *
 * All functions confirmed byte-for-byte identical to the original binary.
 *
 * Verified by: tools/verify_blr_functions.py
 * Compiler:    powerpc-apple-macos-gcc -O2  (Retro68)
 * Original:    tools/ppc_verification/warlords2_ppc.pef
 */

void FUN_100099cc(void) { return; }
void FUN_10025f94(void) { return; }
void FUN_10026568(void) { return; }
void FUN_10026df0(void) { return; }
void FUN_1003a5f8(void) { return; }
void FUN_10049624(void) { return; }
void FUN_10051d60(void) { return; }
void FUN_10059d2c(void) { return; }
void FUN_10078a2c(void) { return; }
void FUN_10091334(void) { return; }
void FUN_100b0384(void) { return; }
void FUN_100b0574(void) { return; }
void FUN_100b0578(void) { return; }
void FUN_100b1c84(void) { return; }
void FUN_100b2264(void) { return; }
void FUN_100b2268(void) { return; }
void FUN_100d6b74(void) { return; }
void FUN_100d6e64(void) { return; }
void FUN_100d95c4(void) { return; }
void FUN_100dac54(void) { return; }
void FUN_100eb918(void) { return; }
void FUN_100ee648(void) { return; }
void FUN_100f5100(void) { return; }
void FUN_100f5104(void) { return; }
void FUN_100f5274(void) { return; }
void FUN_100f535c(void) { return; }
void FUN_10105d28(void) { return; }
void FUN_101088b0(void) { return; }

/* ── 8-byte verified functions ──────────────────────────────────────────── */

/* stw r4,8(r3); blr  — stores param_2 at *(param_1+8) */
void FUN_100bf864(int param_1, int param_2) { *(int *)(param_1 + 8) = param_2; }

/* lha r3,16(r3); blr  — sign-extended short load */
int FUN_100c1950(int param_1) { return *(short *)(param_1 + 0x10); }

/* lwz r3,12(r3); blr  — word load at +0xc */
int FUN_100c1d48(int param_1) { return *(int *)(param_1 + 0xc); }

/* li r3,0; blr  — return 0 */
int FUN_100d9fe8(void) { return 0; }
int FUN_100daf30(void) { return 0; }
int FUN_100eb910(void) { return 0; }
int FUN_1010c908(void) { return 0; }

/* ori 3,4,0; blr  — CodeWarrior's mr r3,r4 (GCC uses or r3,r4,r4 — different bytes)
 * Must use file-scope asm to match exactly. */
asm(".globl FUN_101175bc\n"
    "FUN_101175bc:\n"
    "    ori 3,4,0\n"
    "    blr\n");

/* ── 12-byte verified functions ─────────────────────────────────────────── */

/* lswi 5,4,16 / stswi 5,3,16 / blr  — 16-byte memcpy via string instructions
 * GCC uses lwz/stw pairs instead; asm needed. */
asm(".globl FUN_100b0214\n"
    "FUN_100b0214:\n"
    "    lswi 5,4,16\n"
    "    stswi 5,3,16\n"
    "    blr\n");

/* lwz r4,4(r3) / ori r3,r4,0 / blr  — load int at +4, return it
 * GCC optimizes to 8 bytes (lwz r3,4(r3)); CW used r4 + ori move. */
asm(".globl FUN_100b1348\n"
    "FUN_100b1348:\n"
    "    lwz 4,4(3)\n"
    "    ori 3,4,0\n"
    "    blr\n");

/* lwz r4,4(r3) / stw r4,8(r3) / blr  — copy int field +4 to field +8
 * GCC picks r9 as scratch; CW uses r4. Asm to fix register. */
asm(".globl FUN_100c2a04\n"
    "FUN_100c2a04:\n"
    "    lwz 4,4(3)\n"
    "    stw 4,8(3)\n"
    "    blr\n");

/* clrlwi r4,r4,24 / stb r4,20(r3) / blr  — store low byte of param_2 at param_1+0x14
 * GCC omits the clrlwi when param_2 declared unsigned char. */
asm(".globl FUN_100d9780\n"
    "FUN_100d9780:\n"
    "    clrlwi 4,4,24\n"
    "    stb 4,20(3)\n"
    "    blr\n");
