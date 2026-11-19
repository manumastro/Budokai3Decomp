/* Draft (not built): func_001EA740 at 0x001EA740, size 0x4D8, segment unk/unk_1EA380 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 155 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x450, original 0x4D8
 * Original: asm/nonmatchings/unk/unk_1EA380/func_001EA740.s */

// src/unk/unk_1EA380.c func_001EA740 size diff=155/276
s32 MainMenu_Start(s8, s8);
s32 Scr_Init(s32, s32, s32, s32);
s32 Title_Start(s16);
s32 amCdFs_CloseAll(s32);
s32 amCdFs_Reset(s32);
s32 amTask_KillRange(s32, s32, s32);
s32 func_00143E70(s32, s32, s32);
s32 func_001A3610(s32);
s32 func_001CA4D0();
s32 func_0020A230();
s32 func_0022DF10(s32, s32, s32, s32);
extern void *D_004705F0;
extern s32 D_0047060C;
extern s32 D_00470610;
extern s32 D_00470614;
extern s32 D_00470618;
extern s32 D_0047061C;
extern s32 D_00470620;
extern s32 D_00470624;
extern s32 D_00470628;
extern s32 D_00470798;
extern s8 D_004B4B62;
extern s8 D_004B4BB0;
extern s8 D_004B4BB1;
extern s8 D_004B4BE9;
extern s32 D_004B4C80;
extern s64 D_004DFAE0;
extern s32 D_004DFAE8;
extern s32 D_004DFAEC;
extern s8 D_004DFAF0;
extern s32 D_004DFAF1;
extern s32 D_004DFB19;
extern s32 D_004E65E0;
extern s64 D_00511440;
extern s32 D_00511448;
extern s32 D_0051144C;
extern s8 D_00511450;
extern s32 D_00511451;
extern s32 D_00511768;
extern f32 D_0051D9A8;
extern f32 D_0051D9AC;
extern s32 SceneSw_LoadAll;
extern s32 SceneSw_LoadOpening;
extern s32 SceneSw_LoadTitle;
extern f32 gFrameDelta;
extern s32 gSceneDone;
extern void MainMenu_Load(void);
extern void Title_Load(void);
extern void Logomark_Start(void);
extern void Logomark_Load(void);
extern void BtbDraw_InitState(void);
extern void func_001B0E40(void);
extern void Ess_Init(void);
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();
extern void Zenie_Init(void);
extern void SklSheet_Clear(void);
extern void ArenaMode_Clear(void);
extern void Logomark_ClearFlag(void);
extern void TourMap_Clear(void);
extern void func_00280470(void);
extern void CsModel_ResetPrac(void);
extern void Help_Clear(void);
extern void OutputPass_Clear(void);
extern void MainMenu_Clear(void);
extern void Option_ClearState(void);
extern void Option_Clear(void);
extern void Opening_Clear(void);
extern void Save_Clear(void);
extern void Title_Clear(void);
extern void VsMode_Clear(void);
extern void SklEdit_Init(void);
extern char D_00511479[];
extern void Shenron_Clear(void);
extern void StrBg_Clear(void);
extern void func_003107C0(void);
extern char D_004E6560[];
extern char D_004B4C00[];
extern void StrMap_Clear(void);
extern void StrTitle_Clear(void);
extern void StrSelect_Clear(void);
extern void StaffRoll_Clear(void);
extern void StrStatus_ClearWork(void);
extern void StrStatus_ClearTourMode(void);
extern void amCdFs_Main(void);
extern void amSofdec_DestroyAll(void);
extern void Scr_KillAllTasks(void);
extern void Scr_Free(void);
extern void amAdx_Reset(void);
extern void amNode_InitPool(void);
extern void amHeap_Reset(void);
extern void func_00146FB0(void);
extern void func_00264390(void);
extern void StrSelect_ClearWork(void);
extern void func_002A8FC0(void);
extern void func_002E92E0(void);
extern void func_002EA070(void);
extern void func_00307420(void);
void func_001EA740(s32 arg0) {
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a2_2;
    s32 *var_a2_3;
    s32 *var_a2_4;
    s32 *var_v1;
    s128 temp_v0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s8 *var_a1;
    s8 *var_a1_4;
    s8 *var_a2;
    s8 temp_v0_3;
    s8 temp_v0_4;

    func_002EA070();
    D_0047060C = 0;
    D_00470610 = 0;
    D_00470614 = 0;
    Logomark_ClearFlag();
    Help_Clear();
    Title_Clear();
    MainMenu_Clear();
    VsMode_Clear();
    func_00280470();
    CsModel_ResetPrac();
    ArenaMode_Clear();
    func_00307420();
    func_003107C0();
    D_00470628 = 0;
    StrSelect_Clear();
    StrTitle_Clear();
    StrSelect_ClearWork();
    StrMap_Clear();
    StrBg_Clear();
    StrStatus_ClearWork();
    D_00470618 = 0;
    D_0047061C = 0;
    D_00470620 = 0;
    StaffRoll_Clear();
    Option_Clear();
    Option_ClearState();
    Ess_Init();
    StrStatus_ClearTourMode();
    TourMap_Clear();
    D_00470624 = 0;
    OutputPass_Clear();
    func_002E92E0();
    Opening_Clear();
    SklEdit_Init();
    SklSheet_Clear();
    Zenie_Init();
    Save_Clear();
    func_001CA4D0();
    func_001B0E40();
    func_002A8FC0();
    Shenron_Clear();
    var_a2 = (signed char *)(D_004B4C00);
    var_a1 = (signed char *)(D_004E6560);
    var_a0 = 0x10;
    do {
        var_a0 -= 1;
        temp_v0 = *(s32 *)((u8 *)var_a2 + 4);
        *(s32 *)((u8 *)var_a1 + 0) = (s32) *(s32 *)((u8 *)var_a2 + 0);
        var_a2 += 8;
        *(s32 *)((u8 *)var_a1 + 4) = temp_v0;
        var_a1 += 8;
    } while (var_a0 > 0);
    var_a2_2 = &D_004B4C80;
    var_a1_2 = &D_004E65E0;
    var_a0_2 = 0x1573;
    do {
        var_a0_2 -= 1;
        temp_v0_2 = *(s128 *)((u8 *)var_a2_2 + 0x10);
        *(s128 *)((u8 *)var_a1_2 + 0) = (s128) *(s128 *)((u8 *)var_a2_2 + 0);
        var_a2_2 += 0x20;
        *(s128 *)((u8 *)var_a1_2 + 0x10) = temp_v0_2;
        var_a1_2 += 0x20;
    } while (var_a0_2 > 0);
    var_a2_3 = &D_004DFAF1;
    var_a1_3 = &D_00511451;
    var_a0_3 = 0x14;
    D_00511440 = D_004DFAE0;
    D_00511448 = D_004DFAE8;
    D_0051144C = D_004DFAEC;
    D_00511450 = D_004DFAF0;
    do {
        var_a0_3 -= 1;
        temp_v0_3 = *(s8 *)((u8 *)var_a2_3 + 1);
        *(s8 *)((u8 *)var_a1_3 + 0) = (s8) *(s8 *)((u8 *)var_a2_3 + 0);
        var_a2_3 += 2;
        *(s8 *)((u8 *)var_a1_3 + 1) = temp_v0_3;
        var_a1_3 += 2;
    } while (var_a0_3 > 0);
    var_a2_4 = &D_004DFB19;
    var_a1_4 = (signed char *)(D_00511479);
    var_a0_4 = 0x130;
    do {
        var_a0_4 -= 1;
        temp_v0_4 = *(s8 *)((u8 *)var_a2_4 + 1);
        *(s8 *)((u8 *)var_a1_4 + 0) = *(s8 *)((u8 *)var_a2_4 + 0);
        var_a2_4 += 2;
        *(s8 *)((u8 *)var_a1_4 + 1) = temp_v0_4;
        var_a1_4 += 2;
    } while (var_a0_4 > 0);
    amSofdec_DestroyAll();
    func_001A3610(0);
    func_001A3610(1);
    amAdx_Stop(-1);
    SoundRpc_SendWord(0);
    func_00143E70(0, -1, 1);
    SoundRpc_SendWord2(-1);
    amAdx_Reset();
    Scr_KillAllTasks();
    amTask_KillRange(0x1000, 0xEFFF, 0);
    amCdFs_CloseAll(0);
    amCdFs_Reset(0);
    if (D_00470798 > 0) {
        do {
            amCdFs_Main();
            func_00146FB0();
        } while (D_00470798 > 0);
    }
    Scr_Free();
    amHeap_Reset();
    amNode_InitPool();
    BtbDraw_InitState();
    Scr_Init(2, 0x20, 0x80, 0x80);
    func_0020A230();
    D_0051D9A8 = gFrameDelta;
    D_0051D9AC = gFrameDelta / 60.0f;
    func_0022DF10(0x200, 0x200, 0x20, 0x200);
    func_00264390();
    D_004B4BB1 = 0;
    gSceneArg = 0;
    gSceneNext = -1;
    gSceneQueued = -1;
    gSceneDone = 0;
    D_004B4BB0 = 0;
    switch (arg0) {                                 /* irregular */
    case 1:
        D_004B4BB0 = 0;
        Logomark_Load();
        D_004B4BB0 = 0;
        Logomark_Start();
        D_004B4B41[0] = 0;
        *D_004B4B40 = 1;
        var_v1 = &SceneSw_LoadOpening;
        D_00511768 = 0;
        if (&SceneSw_LoadOpening == NULL) {
            var_v1 = NULL;
        }
block_26:
        *(s32 **)((u8 *)D_004705F0 + 0x1C) = var_v1;
        return;
    case 4:
        D_004B4BB0 = 0;
        Title_Load();
        D_004B4BB0 = 0;
        Title_Start((s16) gSceneArg);
        D_004B4B41[0] = 0;
        *D_004B4B40 = 4;
        var_v1 = &SceneSw_LoadTitle;
        D_00511768 = 0;
        if (&SceneSw_LoadTitle == NULL) {
            var_v1 = NULL;
        }
        goto block_26;
    case 5:
        D_004B4BB0 = 1;
        MainMenu_Load();
        D_004B4BB0 = 0;
        MainMenu_Start(D_004B4B62, D_004B4BE9);
        D_004B4B41[0] = 0;
        *D_004B4B40 = 5;
        var_v1 = &SceneSw_LoadAll;
        D_00511768 = 0;
        if (&SceneSw_LoadAll == NULL) {
            var_v1 = NULL;
        }
        goto block_26;
    }
}
