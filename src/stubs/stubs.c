/*
 * stubs.c - Stub implementations for unresolved function symbols
 *
 * These are placeholder implementations to allow the reconstructed
 * Warlords II codebase to link on a modern system.
 * Each stub returns 0 / does nothing.
 */

#include "warlords2.h"

int FUN_100() { return 0; }
int FUN_10005d2c() { return 0; }
int FUN_10008284() { return 0; }
int FUN_10009b48() { return 0; }
int FUN_10009d38() { return 0; }
int FUN_1000a12c() { return 0; }
int FUN_1000d9ac() { return 0; }
/* AI_GetRuinSlotIndex - clean version in ai/ai.c */
int ApplyDirectionOffset() { return 0; }
int FUN_100230e8() { return 0; }
int FUN_10025f98() { return 0; }
int FUN_100276fc() { return 0; }
int FUN_1002771c() { return 0; }
int CheckLandConnectivity() { return 0; }
int FUN_1002e7d4() { return 0; }
int FUN_1002f194() { return 0; }
int FUN_100376d8() { return 0; }
int FUN_10037cdc() { return 0; }
int FUN_1003b9f8() { return 0; }
int FUN_10040040() { return 0; }
int FUN_100428dc() { return 0; }
int FUN_10042d2c() { return 0; }
int FUN_10042ee4() { return 0; }
int FUN_10046edc() { return 0; }
int FUN_10047cbc() { return 0; }
int FUN_10047d80() { return 0; }
int FUN_1004f438() { return 0; }
int InitializeMapToOcean() { return 0; }
int FUN_10092484() { return 0; }
int PlacePlayerSeedPoint() { return 0; }
int SortStartPointsByAngle() { return 0; }
int FUN_1009ebec() { return 0; }
int FUN_1009f350() { return 0; }
int FUN_1009f524() { return 0; }
int FUN_100a31d8() { return 0; }
int FUN_100a3304() { return 0; }
int FUN_100a4ae8() { return 0; }
int FUN_100a4e0c() { return 0; }
int FUN_100a52b8() { return 0; }
int FUN_100a6060() { return 0; }
int LoadScenarioTemplate() { return 0; }
int PlaceNeutralCityOnLand() { return 0; }
int RegisterCitiesAndAddNeutral() { return 0; }
int FindRuinsLocation() { return 0; }
int FUN_100a7248() { return 0; }
int FUN_100a88d0() { return 0; }
int FUN_100a8d88() { return 0; }
int GenerateRoadNetwork() { return 0; }
int FUN_100ab2c4() { return 0; }
int FUN_100ab368() { return 0; }
int FUN_1011() { return 0; }
/* FUN_10115b60 defined in wave2_macapp4.c */
int FUN_1001e794() { return 0; }
int FUN_1003206c() { return 0; }
int FUN_10047a64() { return 0; }
/* RefreshDisplay - wrapper that calls the real DrawMapViewport in rendering.c */
extern void DrawMapViewport(short redrawMode, short forceRedraw, short *dirtyRect);
void RefreshDisplay(int a, int b, int c) {
    DrawMapViewport((short)a, (short)b, (short *)(long)c);
}
int FUN_100c3c94() { return 0; }
int FUN_100d8b0c() { return 0; }
int FUN_100f0f78() { return 0; }
int FUN_100f138c() { return 0; }
int FUN_100f13e8() { return 0; }
int FUN_100f6b7c() { return 0; }
/* FUN_10115a00 defined in wave2_macapp4.c */

/* Missing symbols found during wave2 link */
int FUN_1002d3ac() { return 0; }

/* Ghidra helper: carry detection for 8-bit add */
int CARRY8(int a, int b) { return ((unsigned char)a + (unsigned char)b) > 0xFF; }



/* Stubs for recovered function dependencies */

/* Missing symbols from duplicate resolution */

/* Missing stubs - these are only called, never defined elsewhere */
int MapRefreshAndCombat() { return 0; }
int ConstructCommand() { return 0; }
int AllocateHandle() { return 0; }
/* UpdateMapDisplay - placeholder until real impl is reconstructed */
void UpdateMapDisplay(short a, short b) { (void)a; (void)b; }

/* High-address function stubs (globals/data region) */
int *_FUN_10117690 = 0;    /* Global data pointer referenced by reconstructed_batch_b */

/* Math helper - absolute value for doubles (Ghidra decompiler artifact) */
double ABS(double x) { return x < 0 ? -x : x; }

/* CopyCStringToPascal - may not exist in classic InterfaceLib */
#ifndef MODERN_BUILD
void CopyCStringToPascal(const char *src, unsigned char *dst) {
    int len = 0;
    while (src[len] && len < 255) {
        dst[len + 1] = src[len];
        len++;
    }
    dst[0] = (unsigned char)len;
}
#endif

/* Missing function stubs */

