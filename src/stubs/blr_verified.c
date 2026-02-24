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

/* ── 16-byte verified functions ─────────────────────────────────────────── */

/* extsh r4,r4 / addic r5,r4,0x5dd / stw r5,0x164(r3) / blr
 * GCC uses addi (no carry) and skips the extsh; CW sign-extends first. */
asm(".globl FUN_1007f094\n"
    "FUN_1007f094:\n"
    "    extsh 4,4\n"
    "    addic 5,4,0x5dd\n"
    "    stw 5,0x164(3)\n"
    "    blr\n");

/* extsh r4,r4 / addic r5,r4,0x709 / stw r5,0x168(r3) / blr */
asm(".globl FUN_1007f0a4\n"
    "FUN_1007f0a4:\n"
    "    extsh 4,4\n"
    "    addic 5,4,0x709\n"
    "    stw 5,0x168(3)\n"
    "    blr\n");

/* lwz r5,4(r3) / stw r5,4(r4) / stw r4,4(r3) / blr
 * Linked-list prepend: saves next ptr, sets our next, inserts us.
 * GCC picks r9 as scratch; CW uses r5. */
asm(".globl FUN_100b1354\n"
    "FUN_100b1354:\n"
    "    lwz 5,4(3)\n"
    "    stw 5,4(4)\n"
    "    stw 4,4(3)\n"
    "    blr\n");

/* addc r5,r3,r4 / addic r5,r5,-1 / divw r3,r5,r4 / blr
 * Ceiling division: (a + b - 1) / b.
 * GCC uses add+addi (no carry); CW uses addc+addic. */
asm(".globl FUN_100efcc0\n"
    "FUN_100efcc0:\n"
    "    addc 5,3,4\n"
    "    addic 5,5,-1\n"
    "    divw 3,5,4\n"
    "    blr\n");

/* lwz r5,0x24(r3) / stw r4,0x24(r3) / ori r3,r5,0 / blr
 * Exchange: returns old value at param_1+0x24, stores param_2 there.
 * GCC uses mr r9,r3 then overwrites r3; CW saves to r5 and uses ori. */
asm(".globl FUN_101159dc\n"
    "FUN_101159dc:\n"
    "    lwz 5,0x24(3)\n"
    "    stw 4,0x24(3)\n"
    "    ori 3,5,0\n"
    "    blr\n");

/* ── 20-byte verified functions ─────────────────────────────────────────── */

/* extsh r4,r4 / extsh r5,r5 / sth r4,0(r3) / sth r5,2(r3) / blr
 * Store two sign-extended shorts: param_2 at *param_1, param_3 at *(param_1+2).
 * GCC uses sth directly without extsh; CW sign-extends explicitly. */
asm(".globl FUN_1002269c\n"
    "FUN_1002269c:\n"
    "    extsh 4,4\n"
    "    extsh 5,5\n"
    "    sth 4,0(3)\n"
    "    sth 5,2(3)\n"
    "    blr\n");

/* clrlwi. r4,r4,24 / bne +8 / blr / addic r3,r3,2 / blr
 * If param_2 (char) == 0: return param_1, else return param_1 + 2.
 * GCC emits compare + branch differently; CW uses clrlwi. record form. */
asm(".globl FUN_100b0388\n"
    "FUN_100b0388:\n"
    "    clrlwi. 4,4,24\n"
    "    bne 0f\n"
    "    blr\n"
    "0:\n"
    "    addic 3,3,2\n"
    "    blr\n");

/* clrlwi. r4,r4,24 / bne +8 / blr / addic r3,r3,4 / blr
 * If param_2 (char) == 0: return param_1, else return param_1 + 4. */
asm(".globl FUN_100b057c\n"
    "FUN_100b057c:\n"
    "    clrlwi. 4,4,24\n"
    "    bne 0f\n"
    "    blr\n"
    "0:\n"
    "    addic 3,3,4\n"
    "    blr\n");

/* mullw r6,r4,r5 / addc r6,r3,r6 / addic r6,r6,2 / ori r3,r6,0 / blr
 * return param_1 + param_2 * param_3 + 2.
 * GCC uses add+addi and different regs; CW uses addc+addic pair and r6 scratch. */
asm(".globl FUN_100b1044\n"
    "FUN_100b1044:\n"
    "    mullw 6,4,5\n"
    "    addc 6,3,6\n"
    "    addic 6,6,2\n"
    "    ori 3,6,0\n"
    "    blr\n");

/* lwz r4,4(r3) / lwz r5,4(r4) / stw r5,4(r3) / ori r3,r4,0 / blr
 * Linked-list pop: unlinks first element; returns old head, updates head->next.
 * GCC picks different scratch register; CW uses r5 + ori move. */
asm(".globl FUN_100b1464\n"
    "FUN_100b1464:\n"
    "    lwz 4,4(3)\n"
    "    lwz 5,4(4)\n"
    "    stw 5,4(3)\n"
    "    ori 3,4,0\n"
    "    blr\n");

/* lhz r5,0(r4) / sth r5,0(r3) / lwz r6,4(r4) / stw r6,4(r3) / blr
 * Copy short at +0 and int at +4 from param_2 to param_1.
 * GCC uses different registers; CW uses r5/r6 and ori-free move. */
asm(".globl FUN_100b1820\n"
    "FUN_100b1820:\n"
    "    lhz 5,0(4)\n"
    "    sth 5,0(3)\n"
    "    lwz 6,4(4)\n"
    "    stw 6,4(3)\n"
    "    blr\n");

/* lwz r4,4(r3) / addic r5,r4,-1 / subfe r5,r5,r4 / clrlwi r3,r5,24 / blr
 * Return bool: *(int*)(param_1+4) != 0.
 * CW's idiom: addic/subfe pair implements 'not zero' test, masked to byte. */
asm(".globl FUN_100b633c\n"
    "FUN_100b633c:\n"
    "    lwz 4,4(3)\n"
    "    addic 5,4,-1\n"
    "    subfe 5,5,4\n"
    "    clrlwi 3,5,24\n"
    "    blr\n");

/* lwz r4,8(r3) / addic r5,r4,-1 / subfe r5,r5,r4 / clrlwi r3,r5,24 / blr
 * Return bool: *(int*)(param_1+8) != 0. Same idiom, offset 8. */
asm(".globl FUN_100c0544\n"
    "FUN_100c0544:\n"
    "    lwz 4,8(3)\n"
    "    addic 5,4,-1\n"
    "    subfe 5,5,4\n"
    "    clrlwi 3,5,24\n"
    "    blr\n");

/* Same as FUN_100c0544 — duplicate at different address. */
asm(".globl FUN_100d9444\n"
    "FUN_100d9444:\n"
    "    lwz 4,8(3)\n"
    "    addic 5,4,-1\n"
    "    subfe 5,5,4\n"
    "    clrlwi 3,5,24\n"
    "    blr\n");

/* clrlwi. r4,r4,24 / bne +8 / blr / addic r3,r3,4 / blr
 * If param_2 (char) == 0: return param_1, else return param_1 + 4. */
asm(".globl FUN_100e1088\n"
    "FUN_100e1088:\n"
    "    clrlwi. 4,4,24\n"
    "    bne 0f\n"
    "    blr\n"
    "0:\n"
    "    addic 3,3,4\n"
    "    blr\n");

/* Same pattern — duplicate at different address. */
asm(".globl FUN_100e109c\n"
    "FUN_100e109c:\n"
    "    clrlwi. 4,4,24\n"
    "    bne 0f\n"
    "    blr\n"
    "0:\n"
    "    addic 3,3,4\n"
    "    blr\n");

/* clrlwi. r4,r4,24 / bne +8 / blr / addic r3,r3,8 / blr
 * If param_2 (char) == 0: return param_1, else return param_1 + 8. */
asm(".globl FUN_100e1580\n"
    "FUN_100e1580:\n"
    "    clrlwi. 4,4,24\n"
    "    bne 0f\n"
    "    blr\n"
    "0:\n"
    "    addic 3,3,8\n"
    "    blr\n");

/* Same pattern — duplicate at different address. */
asm(".globl FUN_100e1594\n"
    "FUN_100e1594:\n"
    "    clrlwi. 4,4,24\n"
    "    bne 0f\n"
    "    blr\n"
    "0:\n"
    "    addic 3,3,8\n"
    "    blr\n");

/* lwz r4,4(r3) / addic r5,r4,-1 / subfe r5,r5,r4 / clrlwi r3,r5,24 / blr
 * Return bool: *(int*)(param_1+4) != 0. Same pattern as FUN_100b633c. */
asm(".globl FUN_100ebf44\n"
    "FUN_100ebf44:\n"
    "    lwz 4,4(3)\n"
    "    addic 5,4,-1\n"
    "    subfe 5,5,4\n"
    "    clrlwi 3,5,24\n"
    "    blr\n");

/* Same — *(int*)(param_1+4) != 0 test, another duplicate. */
asm(".globl FUN_100eea60\n"
    "FUN_100eea60:\n"
    "    lwz 4,4(3)\n"
    "    addic 5,4,-1\n"
    "    subfe 5,5,4\n"
    "    clrlwi 3,5,24\n"
    "    blr\n");

/* lwz r5,40(r3) / or r6,r5,r4 / stw r6,40(r3) / ori r3,r5,0 / blr
 * Atomic-style OR: returns old value at param_1+0x28, stores old|param_2 back.
 * GCC uses mr differently; CW saves to r5, ORs into r6, then ori-moves r5->r3. */
asm(".globl FUN_101159ec\n"
    "FUN_101159ec:\n"
    "    lwz 5,40(3)\n"
    "    or 6,5,4\n"
    "    stw 6,40(3)\n"
    "    ori 3,5,0\n"
    "    blr\n");

asm(".globl FUN_100b0060\n"
    "FUN_100b0060:\n"
    "    lwz     3,-4(4)\n"
    "    clrrwi  3,3,8\n"
    "    srwi    3,3,8\n"
    "    ori     5,3,0\n"
    "    addic   3,5,-4\n"
    "    blr\n");

asm(".globl FUN_100c1d50\n"
    "FUN_100c1d50:\n"
    "    cmpwi   4,1\n"
    "    bne 0f\n"
    "    lwz     3,20(3)\n"
    "    blr\n"
    "0:\n"
    "    li      3,0\n"
    "    blr\n");

/* stwu    1,-56(1) / stw     3,80(1) / lwz     3,80(1) / lwz     5,0(4) / stw     5,0(3) / addic   1,1,56 / blr  — asm */
asm(".globl FUN_100b0368\n"
    "FUN_100b0368:\n"
    "    stwu    1,-56(1)\n"
    "    stw     3,80(1)\n"
    "    lwz     3,80(1)\n"
    "    lwz     5,0(4)\n"
    "    stw     5,0(3)\n"
    "    addic   1,1,56\n"
    "    blr\n");

/* lha     4,4(3) / li      5,-1 / subfc   4,4,5 / addic   0,4,-1 / subfe   4,0,4 / clrlwi  3,4,24 / blr  — asm */
asm(".globl FUN_100e4754\n"
    "FUN_100e4754:\n"
    "    lha     4,4(3)\n"
    "    li      5,-1\n"
    "    subfc   4,4,5\n"
    "    addic   0,4,-1\n"
    "    subfe   4,0,4\n"
    "    clrlwi  3,4,24\n"
    "    blr\n");
