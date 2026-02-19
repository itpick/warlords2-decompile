/*
 * reconstructed_5.c - Reconstructed FUN_* stubs (0x100B0000-0x10117884)
 *
 * Extracted from Ghidra decompilation of Warlords II PowerPC binary.
 * Type mappings: undefined->int, undefined4->int, undefined2->short, undefined1->char
 */

#include "warlords2.h"

/* Forward declarations for called functions not in this file */
int NewPtr_Thunk(int size);
int StringLength(void);
void Sound_BlockCopy(void);
void FUN_100f12a8(void);
void FUN_100d9034(int *param_1);
void FUN_100d90e4(int, int, int, int);
void FUN_100f5108(int *param_1);
void FUN_100da394(int *param_1);
void FUN_100c6178(int, int);
void FUN_100ef088(int, int, int);
int FUN_100efc78(int);
void FUN_100014a0(int);
int GetResource_Thunk(int, int);
void FUN_10001b00(int);
void FUN_100eef18(void);
int FUN_10000a98(int, int, int);
int FUN_10001b30(int, int);
void FUN_100ef5f0(int);
void RestoreHandleFlags(int *, int);
void FUN_100d8c30(int, int, char *);
void FUN_100009d8(char *, int, int);
void FUN_100009f0(char *, char *, char *, int);
void FUN_10000a08(void);
void FUN_10001d28(int, int);
int FUN_10002b20(void);
int FUN_10000678(void);
void FUN_100b1e10(char *, int, int);
void ConvertToString(void);
void FUN_100023b8(void);
void FUN_100f4dc8(int *param_1);
void FUN_100f5274(int);
void FUN_100cd91c(void);
void FUN_100cd924(int);
void FUN_100c6b1c(void);
void ConstructExtendedObject(int);
void FUN_100d450c(void);
void FUN_100d451c(int);
void FUN_100d48f8(void);
void FUN_100d4908(int);
void FUN_100d4e94(void);
void FUN_100d4ea4(int);
void FUN_100cd99c(void);
void FUN_100cd9a4(int);
void FUN_100cda38(void);
void FUN_100cda40(int);
void FUN_100cdacc(void);
void FUN_100cdad4(int);
void FUN_100cdb54(void);
void FUN_100cdb5c(int);
void FUN_100f5894(void);
void FUN_100f58a4(int);
void FUN_100cdbdc(void);
void FUN_100cdbe4(int);
void FUN_100cdc80(void);
void FUN_100cdc88(int);
void FUN_100cdd68(void);
void FUN_100cdd70(int);
void FUN_100cddec(void);
void FUN_100cddf4(int);
void FUN_100cde80(void);
void FUN_100cde88(int);
void FUN_100ed954(char *, int);
int FUN_100cdf08(int);
void FUN_100cdf78(void);
int FUN_100bece4(int);
void FUN_100bed7c(void);
void FUN_100e1dec(void);
void FUN_100e1df4(int);
void FUN_100e1e9c(void);
void FUN_100e1ea4(int);
void FUN_100e1f3c(void);
void ConstructBaseObject(int);
int FUN_100ed918(void);
void FUN_100ea428(int *);
void FUN_100ea4b8(void);
void FUN_100d8824(int *);
void FUN_100d88b4(int, int, int);
int Sound_HasMoreItems(int);
void FUN_100ebaf8(int *, int, int);
int FUN_100eb910(int);
void FUN_100ebc68(int *, int);
void FUN_100eb918(int *);
void FUN_100f1430(int);
void FUN_100edaf8(void);
void FUN_100eecf8(int);
void FUN_10000918(int *, int *);
int FUN_10000948(int);
void FUN_100ed61c(void);
void FUN_10000960(int);
void FUN_100ed524(void);
void FUN_100025b0(void);
void FUN_100b2264(void);
void FUN_10003930(void);
void FUN_10001ad0(void);
void FUN_10001b18(short *);
int FUN_100f1574(int);
int FUN_100f262c(int, char *, short *);
void FUN_10002358(int, int);
void FUN_10002d60(int, int);
int FUN_100efa80(int);
void FUN_100028c8(int);
int FUN_100b22b0(int, short *);
void RGBForeColor_Thunk(short *);
void Render_PenNormal(void);
void FUN_10000708(int);
void SetForeColor_Thunk(void);
void Render_GetPenState(void);
void FUN_100026d0(int);
void FUN_10002d48(int);
void FUN_10002eb0(int);
void FUN_100fff18(void);
void FUN_100fff20(int);
void FUN_10115ad0(int, int);
void DisposePtr_Thunk(int);
int FUN_10001338(int);
void FUN_100ef284(int, char *);
char Sound_DetachResourceAlt(int *);
int FUN_100ef6e4(char *);
int FUN_100f0334(int, int, int);
void EnableMenuItem(int, char);

/* External globals referenced by decompiled code */
extern char *pcRam10116d94;
extern char *pcRam10117378;
extern char *pcRam10116f34;
extern char *pcRam1011709c;
extern int *piRam101169f4;
extern int iRam101177f0;
extern int gSoundPrefs;
extern int *piRam10117834;

/* =====================================================================
 * BuildPascalString - Pascal string builder / CopyCStringToPascal
 * Original: 100b19f4, 188 bytes
 * ===================================================================== */
char * BuildPascalString(char *param_1, int param_2)
{
    int *piVar1;
    char uVar2;
    int local_18;
    int local_14[5];

    piVar1 = &local_18;
    if ((param_1 != (char *)0x0) ||
       (param_1 = (char *)NewPtr_Thunk(0x100), param_1 != (char *)0x0)) {
        if (param_2 == 0) {
            uVar2 = 0;
        }
        else {
            local_14[0] = StringLength();
            local_18 = 0xff;
            if (local_14[0] < 0xff) {
                piVar1 = local_14;
            }
            uVar2 = (char)*piVar1;
        }
        *param_1 = uVar2;
        Sound_BlockCopy(/* param_2, param_1 + 1 */);
    }
    return param_1;
}


/* =====================================================================
 * AttachDocumentToApp - Document initialization / attach doc to app
 * Original: 100bd55c, 188 bytes
 * ===================================================================== */
void AttachDocumentToApp(int *param_1)
{
    FUN_100f12a8();
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4b0));
    ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x350) + (int)param_1);
    *(short *)(param_1 + 0x1c) = 0;
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 600));
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x4c0), 1);
    return;
}


/* =====================================================================
 * ConstructCommand - TCommand constructor (MacApp framework object)
 * Original: 100c3d2c, 164 bytes
 * ===================================================================== */


/* =====================================================================
 * InitCommand - TCommand::ICommand initializer
 * Original: 100c3df8, 120 bytes
 * ===================================================================== */
void InitCommand(int param_1, int param_2, int param_3,
                  char param_4, char param_5, int param_6)
{
    FUN_100d90e4(param_1, param_2, 0, param_3);
    *(int *)(param_1 + 4) = param_2;
    *(char *)(param_1 + 0x1d) = param_4;
    *(char *)(param_1 + 0x1e) = param_5;
    *(int *)(param_1 + 0x14) = param_6;
    *(int *)(param_1 + 0x18) = param_3;
    return;
}


/* =====================================================================
 * InitMenuBarSystem - Framework initialization (registers UI classes)
 * Original: 100cdf9c, 1324 bytes
 * ===================================================================== */
void InitMenuBarSystem(void)
{
    char *pcVar1;
    char auStack_f40[256];
    char auStack_e40[256];
    char auStack_d40[256];
    char auStack_c40[256];
    char auStack_b40[256];
    char auStack_a40[256];
    char auStack_940[256];
    char auStack_840[256];
    char auStack_740[256];
    char auStack_640[256];
    char auStack_540[256];
    char auStack_440[256];
    char auStack_340[256];
    char auStack_240[256];
    char auStack_140[320];

    pcVar1 = pcRam10116d94;
    if (*pcRam10116d94 == '\0') {
        if (*pcRam10117378 != '\0') {
            FUN_100cd91c();
            FUN_100cd924(0);
        }
        /* Register 14 component types via init/setup pairs */
        FUN_100c6b1c(); ConstructExtendedObject(0);
        FUN_100d450c(); FUN_100d451c(0);
        FUN_100d48f8(); FUN_100d4908(0);
        FUN_100d4e94(); FUN_100d4ea4(0);
        FUN_100cd99c(); FUN_100cd9a4(0);
        FUN_100cda38(); FUN_100cda40(0);
        FUN_100cdacc(); FUN_100cdad4(0);
        FUN_100cdb54(); FUN_100cdb5c(0);
        FUN_100f5894(); FUN_100f58a4(0);
        FUN_100cdbdc(); FUN_100cdbe4(0);
        FUN_100cdc80(); FUN_100cdc88(0);
        FUN_100cdd68(); FUN_100cdd70(0);
        FUN_100cddec(); FUN_100cddf4(0);
        FUN_100cde80(); FUN_100cde88(0);

        /* Register resource type identifiers ('gold','cntl','butn',...) */
        BuildPascalString(auStack_140, 0xa0);
        FUN_100ed954(auStack_140, 0x646c6f67); /* 'dlog' */
        BuildPascalString(auStack_240, 0xac);
        FUN_100ed954(auStack_240, 0x636e746c); /* 'cntl' */
        BuildPascalString(auStack_340, 0xb8);
        FUN_100ed954(auStack_340, 0x6275746e); /* 'butn' */
        BuildPascalString(auStack_440, 0xc0);
        FUN_100ed954(auStack_440, 0x63686b62); /* 'chkb' */
        BuildPascalString(auStack_540, 0xcc);
        FUN_100ed954(auStack_540, 0x72616462); /* 'radb' */
        BuildPascalString(auStack_640, 0xd4);
        FUN_100ed954(auStack_640, 0x636c7573); /* 'clus' */
        BuildPascalString(auStack_740, 0xe0);
        FUN_100ed954(auStack_740, 0x69636f6e); /* 'icon' */
        BuildPascalString(auStack_840, 0xe8);
        FUN_100ed954(auStack_840, 0x7369636e); /* 'sicn' */
        BuildPascalString(auStack_940, 0xf4);
        FUN_100ed954(auStack_940, 0x70696374); /* 'pict' */
        BuildPascalString(auStack_a40, 0x100);
        FUN_100ed954(auStack_a40, 0x706f7070); /* 'popp' */
        BuildPascalString(auStack_b40, 0x108);
        FUN_100ed954(auStack_b40, 0x73746174); /* 'stat' */
        BuildPascalString(auStack_c40, 0x114);
        FUN_100ed954(auStack_c40, 0x65646974); /* 'edit' */
        BuildPascalString(auStack_d40, 0x120);
        FUN_100ed954(auStack_d40, 0x6e6d6272); /* 'nmbr' */
        BuildPascalString(auStack_e40, 300);
        FUN_100ed954(auStack_e40, 0x7061746e); /* 'patn' */
        BuildPascalString(auStack_f40, 0x138);
        FUN_100ed954(auStack_f40, 0x74626f72); /* 'tbor' */

        /* Initialize dialog/behavior sub-objects */
        {
            int uVar3;
            uVar3 = FUN_100cdf08(0);
            uVar3 = FUN_100bece4(0);
            FUN_100bed7c();
        }
        *pcVar1 = '\x01';
    }
    return;
}


/* =====================================================================
 * SuperDoMenuCommand - TDocument::DoMenuCommand (super)
 * Original: 100d6c90, 96 bytes
 * ===================================================================== */
void SuperDoMenuCommand(int param_1, int param_2)
{
    if ((unsigned int)(param_2 - 0x1e) < 5) {
        return;
    }
    FUN_100c6178(param_1, param_2);
    return;
}


/* =====================================================================
 * SuperDoSetupMenus - TDocument::DoSetupMenus (super)
 * Original: 100d6dd0, 148 bytes
 * ===================================================================== */
void SuperDoSetupMenus(int *param_1)
{
    int iVar1;

    FUN_100da394(param_1);
    EnableMenuItem(0x20, 1);
    EnableMenuItem(0x21, 1);
    iVar1 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x298));
    if (iVar1 != 0) {
        EnableMenuItem(0x1e, 1);
        EnableMenuItem(0x22, 1);
    }
    return;
}


/* =====================================================================
 * PostMenuCommand - Post command / Show alert dialog
 * Original: 100d8c9c, 416 bytes
 * ===================================================================== */
int PostMenuCommand(short param_1, int param_2)
{
    int uVar2;
    int uVar3;
    unsigned int *puVar6;
    int iVar7;
    int uVar4;
    int uVar5;
    int *puVar8;
    int local_3c;

    FUN_100ef088(-2, 0, 0);
    uVar2 = FUN_100efc78(0);
    FUN_100014a0(0x5e);
    puVar6 = (unsigned int *)GetResource_Thunk(0x414c5254, param_1);
    if (puVar6 == (unsigned int *)0x0) {
        FUN_10001b00(2);
        FUN_100efc78(uVar2);
        uVar3 = 2;
    }
    else {
        iVar7 = GetResource_Thunk(0x4449544c, *(short *)((int)*puVar6 + 8));
        if (iVar7 == 0) {
            FUN_10001b00(2);
            FUN_100efc78(uVar2);
            uVar3 = 2;
        }
        else {
            uVar4 = Sound_DetachResourceAlt((int *)puVar6);
            FUN_100eef18();
            if (param_2 == 0) {
                puVar8 = (int *)(local_3c + -0xeb4);
            }
            else {
                puVar8 = (int *)param_2;
            }
            uVar5 = FUN_10000a98(*puVar8, 0xfd0, 1);
            uVar3 = FUN_10001b30(param_1, uVar5);
            FUN_100ef5f0(uVar5);
            RestoreHandleFlags((int *)puVar6, uVar4);
            FUN_100efc78(uVar2);
        }
    }
    return uVar3;
}


/* =====================================================================
 * ShowErrorAlert - Show error alert (simple wrapper)
 * Original: 100d8e3c, 44 bytes
 * ===================================================================== */
void ShowErrorAlert(short param_1)
{
    PostMenuCommand(param_1, 0);
    return;
}


/* =====================================================================
 * ShowErrorWithDetail - Show error with detail message
 * Original: 100d8e68, 324 bytes
 * ===================================================================== */
void ShowErrorWithDetail(short param_1, int param_2)
{
    int iVar1;
    int uVar2;
    int local_34c;
    char local_328[256];
    char local_228[256];
    short local_128;
    short uStack_126;
    char local_120[288];

    BuildPascalString(local_120, 4);
    local_228[0] = 0;
    local_328[0] = 0;
    local_128 = (short)((unsigned int)param_2 >> 0x10);
    uVar2 = 0x80;
    if (3 < (int)local_128 + 3) {
        uStack_126 = (short)param_2;
        FUN_100009d8(local_120, local_128, uStack_126);
        iVar1 = local_34c;
        FUN_100d8c30(param_1, 0x80, local_228);
        if (local_128 == -3) {
            param_1 = uStack_126;
        }
        FUN_100d8c30(param_1, 0x81, local_328);
        FUN_100009f0(local_228, local_328, local_120, *(int *)(iVar1 + -0xe2c));
        ShowErrorAlert(0x82);
        FUN_10000a08();
        return;
    }
    return;
}


/* =====================================================================
 * LockHandleRange - Event dispatch / notification posting
 * Original: 100db158, 148 bytes
 * ===================================================================== */
void LockHandleRange(short param_1, int param_2)
{
    int *piVar1;
    int iVar2;

    piVar1 = (int *)gDataPtr_10117370;
    iVar2 = *(int *)gDataPtr_10117370;
    if (iVar2 == 0) {
        ThrowException();
    }
    else {
        do {
            *piVar1 = *(int *)(iVar2 + 0x108);
            *(short *)(iVar2 + 0x100) = param_1;
            *(int *)(iVar2 + 0x104) = param_2;
            if (*(int *)(iVar2 + 0x10c) == 0) {
                FUN_10001d28(iVar2, 0);
            }
            else {
                ResourceRead_Dispatch(*(int *)(iVar2 + 0x110));
            }
            iVar2 = *piVar1;
        } while (iVar2 != 0);
    }
    return;
}


/* =====================================================================
 * FocusObject - Focus/unlock handler (conditional event dispatch)
 * Original: 100db26c, 56 bytes
 * ===================================================================== */
void FocusObject(int param_1)
{
    if (param_1 == 0) {
        LockHandleRange(0xff94, 0);
    }
    return;
}


/* =====================================================================
 * EndFocus - Conditional event dispatch (non-zero param)
 * Original: 100db2f4, 52 bytes
 * ===================================================================== */
void EndFocus(short param_1)
{
    if (param_1 != 0) {
        LockHandleRange(param_1, 0);
    }
    return;
}


/* =====================================================================
 * MarkChanged - Get key event and dispatch
 * Original: 100db328, 64 bytes
 * ===================================================================== */
void MarkChanged(void)
{
    int uVar1;

    uVar1 = FUN_10000678();
    if (uVar1 != 0) {
        LockHandleRange(uVar1, 0);
    }
    return;
}


/* =====================================================================
 * NewResourceHandle - MacApp TEditText constructor
 * Original: 100db3c8, 212 bytes
 * ===================================================================== */
int * NewResourceHandle(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x68),
       param_1 != (int *)0x0)) {
        FUN_100f4dc8(param_1);
        *(short *)(param_1 + 1) = 0;
        *(int *)((int)param_1 + 6) = 0;
        *(char *)((int)param_1 + 10) = 0;
        param_1[0x13] = 0;
        *(char *)((int)param_1 + 0x5a) = 0;
        param_1[0x14] = 0x54455854;    /* 'TEXT' */
        param_1[0x15] = 0x3f3f3f3f;    /* '????' */
        *(short *)(param_1 + 0x16) = (short)0xffff;
        *(char *)((int)param_1 + 0x5b) = 0;
        *(char *)(param_1 + 0x17) = 2;
        *(char *)((int)param_1 + 0x5d) = 1;
        *(char *)((int)param_1 + 0x5e) = 1;
        *(char *)((int)param_1 + 0x5f) = 0;
        *(char *)(param_1 + 0x18) = 0;
        *(short *)((int)param_1 + 0x62) = (short)0x8002;
        *(short *)(param_1 + 0x19) = (short)0x8002;
    }
    return param_1;
}


/* =====================================================================
 * WriteResourceData - TEditText initializer / set data fields
 * Original: 100db49c, 100 bytes
 * ===================================================================== */
void WriteResourceData(int param_1, int param_2, int param_3,
                  char param_4, char param_5, char param_6, char param_7)
{
    FUN_100f5274(param_1);
    *(int *)(param_1 + 0x50) = param_2;
    *(int *)(param_1 + 0x54) = param_3;
    *(char *)(param_1 + 0x5b) = param_4;
    *(char *)(param_1 + 0x5c) = param_5;
    *(char *)(param_1 + 0x5f) = param_6;
    *(char *)(param_1 + 0x60) = param_7;
    return;
}


/* =====================================================================
 * SuperDoRead - TFileBasedDoc::IFileBasedDoc (file-based doc init)
 * Original: 100ddfa8, 136 bytes
 * ===================================================================== */
void SuperDoRead(int *param_1, int param_2, char param_3)
{
    if (*(char *)(param_1 + 0x4b) != '\0') {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x370) + (int)param_1, param_2, (int)param_3);
    }
    if (*(char *)((int)param_1 + 0x12d) != '\0') {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x378) + (int)param_1, param_2, (int)param_3);
    }
    return;
}


/* =====================================================================
 * SuperDoWrite - TFileBasedDoc::DoWrite (super call)
 * Original: 100de320, 180 bytes
 * ===================================================================== */
void SuperDoWrite(int *param_1, int param_2, char param_3)
{
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x388), param_2, (int)param_3);
    if ((*(char *)(param_1 + 0x4b) != '\0') && (param_1[0x4c] != 0)) {
        ResourceRead_Dispatch((int)*(short *)(*param_1 + 0x390) + (int)param_1, param_2, (int)param_3);
    }
    if (*(char *)((int)param_1 + 0x12d) != '\0') {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x398), param_2, (int)param_3);
    }
    return;
}


/* =====================================================================
 * InitWindowManager - Framework setup 5 (register window class)
 * Original: 100e0ea8, 148 bytes
 * ===================================================================== */
void InitWindowManager(void)
{
    char *pcVar1;
    char auStack_108[264];

    pcVar1 = pcRam10116f34;
    if (*pcRam10116f34 == '\0') {
        if (*pcRam10117378 != '\0') {
            FUN_100e0c90();
            FUN_100e0ca0(0);
        }
        BuildPascalString(auStack_108, 0x10);
        FUN_100ed954(auStack_108, 0x66776e64);  /* 'fwnd' */
        *pcVar1 = '\x01';
    }
    return;
}


/* =====================================================================
 * InitDocumentSystem - Framework setup 4 (register grid/text classes)
 * Original: 100e1fac, 368 bytes
 * ===================================================================== */
void InitDocumentSystem(void)
{
    int uVar2;
    char auStack_310[256];
    char auStack_210[256];
    char auStack_110[272];

    if (*pcRam10117378 != '\0') {
        FUN_100e1dec();
        FUN_100e1df4(0);
    }
    FUN_100e1e9c();
    FUN_100e1ea4(0);
    FUN_100e1f3c();
    ConstructBaseObject(0);

    BuildPascalString(auStack_110, 0x8c);
    FUN_100ed954(auStack_110, 0x67726964);  /* 'grid' */
    BuildPascalString(auStack_210, 0x98);
    FUN_100ed954(auStack_210, 0x74787467);  /* 'txtg' */
    BuildPascalString(auStack_310, 0xa8);
    FUN_100ed954(auStack_310, 0x6c737467);  /* 'lstg' */

    uVar2 = FUN_100ed918();
    uVar2 = FUN_100ed918();
    uVar2 = FUN_100ed918();
    uVar2 = FUN_100ed918();
    uVar2 = FUN_100ed918();
    (void)uVar2;
    return;
}


/* =====================================================================
 * FUN_100eab4c - MacApp TStdPrintHandler constructor
 * Original: 100eab4c, 104 bytes
 * ===================================================================== */
int * Sound_NewCollection(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x20),
       param_1 != (int *)0x0)) {
        FUN_100ea428(param_1);
    }
    return param_1;
}


/* =====================================================================
 * FUN_100eabdc - Destructor wrapper -> Sound_InitCollection
 * Original: 100eabdc, 36 bytes
 * ===================================================================== */
void Sound_InitCollection(void)
{
    FUN_100ea4b8();
    return;
}


/* =====================================================================
 * FUN_100ead08 - MacApp TDialogBehavior constructor -> Render_NewGWorldManager
 * Original: 100ead08, 104 bytes
 * ===================================================================== */
int * Render_NewGWorldManager(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x20),
       param_1 != (int *)0x0)) {
        FUN_100d8824(param_1);
    }
    return param_1;
}


/* =====================================================================
 * FUN_100ead98 - Dialog init helper -> Render_InitGWorldManager
 * Original: 100ead98, 44 bytes
 * ===================================================================== */
void Render_InitGWorldManager(int param_1)
{
    FUN_100d88b4(param_1, 0, 4);
    return;
}


/* =====================================================================
 * FUN_100ebf44 - Iterator check (has next)
 * Original: 100ebf44, 20 bytes
 * ===================================================================== */
int Sound_HasMoreItems(int param_1)
{
    return *(int *)(param_1 + 4) != 0;
}


/* =====================================================================
 * FUN_100ec170 - MacApp collection constructor variant 1
 * Original: 100ec170, 120 bytes
 * ===================================================================== */
int * Sound_InitCollectionIter(int *param_1, int param_2, char param_3)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100eb910(0x134),
       param_1 != (int *)0x0)) {
        FUN_100ebaf8(param_1, param_2, param_3);
    }
    return param_1;
}


/* =====================================================================
 * FUN_100ec1e8 - Collection destructor variant 1
 * Original: 100ec1e8, 108 bytes
 * ===================================================================== */
void Sound_DisposeCollectionIter(int *param_1, int param_2)
{
    if (param_1 != (int *)0x0) {
        FUN_100ebc68(param_1, 0);
        if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
            FUN_100eb918(param_1);
        }
    }
    return;
}


/* =====================================================================
 * FUN_100ec2c4 - Collection iteration (first+next+check)
 * Original: 100ec2c4, 136 bytes
 * ===================================================================== */
int Sound_GetFirstItem(int *param_1)
{
    int iVar2;
    int uVar1;

    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x10));
    iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 8));
    if (iVar2 == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = ResourceRead_Dispatch(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x128), param_1[1]);
    }
    return uVar1;
}


/* =====================================================================
 * FUN_100ec34c - Collection iteration variant (last+prev)
 * Original: 100ec34c, 136 bytes
 * ===================================================================== */
int Sound_GetNextItem(int *param_1)
{
    int iVar2;
    int uVar1;

    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x18));
    iVar2 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 8));
    if (iVar2 == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = ResourceRead_Dispatch(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x128), param_1[1]);
    }
    return uVar1;
}


/* =====================================================================
 * InitFrameworkGlobals - Framework init: ensure heap size
 * Original: 100ed640, 152 bytes
 * ===================================================================== */
void InitFrameworkGlobals(void)
{
    int uVar1;
    int local_10;
    int local_c[3];

    local_c[0] = 0;
    local_10 = 0;
    FUN_10000918(local_c, &local_10);
    if (local_c[0] < 0x400) {
        uVar1 = FUN_10000948(0x400);
        if (uVar1 == 0) {
            FUN_100ed61c();
        }
        else {
            FUN_10000960(uVar1);
            FUN_100ed524();
        }
    }
    else {
        FUN_100ed524();
    }
    return;
}


/* =====================================================================
 * CreateFrameworkContext - Framework init: validate config
 * Original: 100ed6d8, 472 bytes
 * ===================================================================== */
int CreateFrameworkContext(int param_1)
{
    unsigned short uVar1;
    int uVar2;

    /* Guard: when called with NULL (as in DoPostCreate / FinalizeFrameworkInit),
     * return success so the framework init chain proceeds.
     * The original code received a valid TVect config pointer here. */
    if (param_1 == 0) {
        return 1;
    }

    if (*(char *)(param_1 + 0x1d) == '\0') {
        uVar1 = *(unsigned short *)(param_1 + 4);
        uVar2 = (0x6ff < uVar1) &
                (0x604 < uVar1) &
                *(unsigned char *)(param_1 + 0x14) & 1 &
                *(unsigned char *)(param_1 + 0x17) &
                *(unsigned char *)(param_1 + 0x16) &
                *(unsigned char *)(param_1 + 0x18) &
                *(unsigned char *)(param_1 + 0x1a) &
                *(unsigned char *)(param_1 + 9) &
                *(unsigned char *)(param_1 + 0x20) &
                *(unsigned char *)(param_1 + 0x21) &
                *(unsigned char *)(param_1 + 0x22) &
                *(unsigned char *)(param_1 + 0x23) &
                *(unsigned char *)(param_1 + 0x24) &
                *(unsigned char *)(param_1 + 0x25);
    }
    else {
        uVar1 = *(unsigned short *)(param_1 + 4);
        uVar2 = (0x6ff < uVar1) &
                (0x604 < uVar1) &
                *(unsigned char *)(param_1 + 0x14) & 1 &
                *(unsigned char *)(param_1 + 0x17) &
                *(unsigned char *)(param_1 + 0x16) &
                *(unsigned char *)(param_1 + 0x18) &
                *(unsigned char *)(param_1 + 0x1a) &
                *(unsigned char *)(param_1 + 9) &
                *(unsigned char *)(param_1 + 0x20) &
                *(unsigned char *)(param_1 + 0x21) &
                *(unsigned char *)(param_1 + 0x22) &
                *(unsigned char *)(param_1 + 0x23) &
                *(unsigned char *)(param_1 + 0x24) &
                *(unsigned char *)(param_1 + 0x25);
        FUN_100eef18();
    }
    return uVar2;
}


/* =====================================================================
 * FinalizeFrameworkInit - Framework init: final validation & startup
 * Original: 100ed8b0, 104 bytes
 * ===================================================================== */
void FinalizeFrameworkInit(void)
{
    int iVar2;

    if (*pcRam1011709c == '\0') {
        InitFrameworkGlobals();
    }
    iVar2 = CreateFrameworkContext(0);
    if (iVar2 == 0) {
        ShowErrorAlert(0x89);
        ThrowException();
    }
    return;
}


/* =====================================================================
 * SetupFrameworkParams - Framework setup: init display
 * Original: 100ee070, 48 bytes
 * ===================================================================== */
void SetupFrameworkParams(short param_1)
{
    FUN_100f1430(param_1);
    FUN_100edaf8();
    return;
}


/* =====================================================================
 * FreeBlock - Release resource (DisposePtr wrapper)
 * Original: 100ef580, 56 bytes
 * ===================================================================== */
int FreeBlock(int param_1)
{
    if (param_1 != 0) {
        FUN_100025b0();
    }
    return 0;
}


/* =====================================================================
 * FUN_100ef824 - Cleanup: flush and finalize
 * Original: 100ef824, 52 bytes
 * ===================================================================== */
void Render_GetFontState(void)
{
    FUN_100b2264();
    FUN_10003930();
    return;
}


/* =====================================================================
 * FUN_100ef8c8 - Cleanup: flush and dispose
 * Original: 100ef8c8, 52 bytes
 * ===================================================================== */
void Render_GetPenState(void)
{
    FUN_100b2264();
    FUN_10001ad0();
    return;
}


/* =====================================================================
 * FUN_100ef9b8 - Get handle flags / lock state
 * Original: 100ef9b8, 132 bytes
 * ===================================================================== */
char Sound_DetachResourceAlt(int *param_1)
{
    char uVar1;

    if (param_1 == (int *)0x0) {
        uVar1 = 0;
    }
    else {
        if (*(char *)(gSoundPrefs + 0x14) == '\0') {
            uVar1 = (char)(*param_1 >> 3);
        }
        else {
            uVar1 = GetHandleFlags((int)param_1);
        }
        FUN_10000378((int)param_1);
    }
    return uVar1;
}


/* =====================================================================
 * FUN_100f03e8 - Color picker / RGBForeColor handler
 * Original: 100f03e8, 224 bytes
 * ===================================================================== */
void Render_SetFontState(unsigned short *param_1)
{
    int iVar1;
    int iVar2;
    unsigned short uVar3;

    iVar2 = iRam101177f0;
    iVar1 = FUN_100efa80(*(int *)(iRam101177f0 + 0xca));
    if (iVar1 == 0) {
        uVar3 = 0;
        if ((*param_1 & 0x8000) != 0) {
            uVar3 = 4;
        }
        if ((param_1[1] & 0x8000) != 0) {
            uVar3 = uVar3 + 2;
        }
        if ((param_1[2] & 0x8000) != 0) {
            uVar3 = uVar3 + 1;
        }
        if (uVar3 < 8) {
            return;
        }
        FUN_100028c8(uVar3);
    }
    else {
        iVar2 = FUN_100b22b0((int)(*(unsigned int *)(iVar2 + 0xca)) + 0x2a, (short *)param_1);
        if (iVar2 != 0) {
            RGBForeColor_Thunk((short *)param_1);
            Render_PenNormal();
        }
    }
    return;
}


/* =====================================================================
 * IterateListItems - List iteration / set foreground color
 * Original: 100f0538, 224 bytes
 * ===================================================================== */
void IterateListItems(unsigned short *param_1)
{
    int iVar1;
    int iVar2;
    unsigned short uVar3;

    iVar2 = iRam101177f0;
    iVar1 = FUN_100efa80(*(int *)(iRam101177f0 + 0xca));
    if (iVar1 == 0) {
        uVar3 = 0;
        if ((*param_1 & 0x8000) != 0) {
            uVar3 = 4;
        }
        if ((param_1[1] & 0x8000) != 0) {
            uVar3 = uVar3 + 2;
        }
        if ((param_1[2] & 0x8000) != 0) {
            uVar3 = uVar3 + 1;
        }
        if (uVar3 < 8) {
            return;
        }
        FUN_10000708(uVar3);
    }
    else {
        iVar2 = FUN_100b22b0((int)(*(unsigned int *)(iVar2 + 0xca)) + 0x24, (short *)param_1);
        if (iVar2 != 0) {
            RGBForeColor_Thunk((short *)param_1);
            SetForeColor_Thunk();
        }
    }
    return;
}


/* =====================================================================
 * FUN_100f0688 - Get font info from current style
 * Original: 100f0688, 84 bytes
 * ===================================================================== */
void Render_SaveClipRegion(short *param_1)
{
    int iVar1;

    iVar1 = iRam101177f0;
    *param_1 = *(short *)(*(int *)(iRam101177f0 + 0xca) + 0x44);
    *(char *)(param_1 + 1) = *(char *)(*(int *)(iVar1 + 0xca) + 0x46);
    param_1[2] = *(short *)(*(int *)(iVar1 + 0xca) + 0x4a);
    Render_GetPenState();
    return;
}


/* =====================================================================
 * FUN_100f0788 - Apply font style from params
 * Original: 100f0788, 180 bytes
 * ===================================================================== */
void Render_RestoreClipRegion(short *param_1)
{
    int iVar1;
    short local_18;
    short local_16;
    short local_14;

    iVar1 = iRam101177f0;
    if (*(short *)(*(int *)(iRam101177f0 + 0xca) + 0x44) != *param_1) {
        FUN_100026d0(*param_1);
    }
    if (*(char *)(*(int *)(iVar1 + 0xca) + 0x46) != *(char *)(param_1 + 1)) {
        FUN_10002d48(*(char *)(param_1 + 1));
    }
    if (*(short *)(*(int *)(iVar1 + 0xca) + 0x4a) != param_1[2]) {
        FUN_10002eb0(param_1[2]);
    }
    local_18 = param_1[3];
    local_16 = param_1[4];
    local_14 = param_1[5];
    IterateListItems((unsigned short *)&local_18);
    return;
}


/* =====================================================================
 * AllocateHandle - Allocate small block (NewHandle equivalent)
 * Original: 100f15e0, 96 bytes
 * ===================================================================== */


/* =====================================================================
 * AllocateBlock - Allocate heap block (NewPtr equivalent)
 * Original: 100f1640, 96 bytes
 * ===================================================================== */
int AllocateBlock(int param_1)
{
    char uVar2;
    int uVar1;

    uVar2 = FUN_100f1574(1);
    uVar1 = FUN_10001338(param_1);
    FocusObject(0);
    return uVar1;
}


/* =====================================================================
 * EnableMenuItem - Enable/disable menu item
 * Original: 100f27d0, 116 bytes
 * ===================================================================== */
void EnableMenuItem(int param_1, char param_2)
{
    int uVar1;
    short local_10;
    char auStack_e[14];

    uVar1 = FUN_100f262c(param_1, auStack_e, &local_10);
    if (uVar1 != 0) {
        if (param_2 == '\0') {
            FUN_10002358(uVar1, local_10);
        }
        else {
            FUN_10002d60(uVar1, local_10);
        }
    }
    return;
}


/* =====================================================================
 * NewPtr_Thunk - NewObject / malloc (memory allocator)
 * Original: 100f56e4, 36 bytes (thin wrapper)
 * ===================================================================== */
/* Already declared as forward reference above, defined in framework */


/* =====================================================================
 * DisposeObject - DisposeObject / free
 * Original: 100f57c8, 76 bytes
 * ===================================================================== */
int DisposeObject(int *param_1)
{
    if (param_1 != (int *)0x0) {
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    }
    return 0;
}


/* =====================================================================
 * InitFrameworkSubsystems - Framework setup 2 (register view class)
 * Original: 1010003c, 168 bytes
 * ===================================================================== */
void InitFrameworkSubsystems(void)
{
    int uVar2;
    int local_12c;
    char auStack_108[264];

    if (*pcRam10117378 != '\0') {
        FUN_100fff18();
        FUN_100fff20(0);
    }
    BuildPascalString(auStack_108, 8);
    FUN_100ed954(auStack_108, 0x74657677);  /* 'tevw' */
    uVar2 = FUN_10000a98(0, 0xf812, 1);
    FocusObject(0);
    return;
}


/* =====================================================================
 * FUN_10116820 - Object destructor (vtable-based cleanup)
 * Original: 10116820, 128 bytes
 * ===================================================================== */
void FUN_10116820(int *param_1, int param_2)
{
    if (param_1 != (int *)0x0) {
        *(int *)(param_1[1] + 0x38) = 0;
        if ((param_2 & 2) != 0) {
            FUN_10115ad0(param_1[1], 0);
        }
        if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
            DisposePtr_Thunk((int)param_1);
        }
    }
    return;
}


/* =====================================================================
 * ResourceRead_Dispatch - Virtual method dispatch / vtable call trampoline
 * Original: 10117884, 20 bytes
 * This is the universal vtable dispatch function, called ~5700 times.
 * It loads r12 and jumps through a function pointer.
 * ===================================================================== */
/* Already defined in core/utils.c as ResourceRead_Dispatch */
