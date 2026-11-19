/* Draft (not built): func_001F0860 at 0x001F0860, size 0x1E4, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x1E4
 * Original: asm/nonmatchings/battle/btb_draw/func_001F0860.s */

// src/battle/btb_draw.c func_001F0860 size diff=56/109
s32 Scr_Init(s32, s32, s32, s32);
s32 amCdFs_LoadDir(s32, s32 *, s32);
s32 amCdFs_ReadFileId(s32, s32 *, s32);
s32 func_0020A230();
s32 func_0022DF10(s32, s32, s32, s32);
extern s32 D_00469700;
extern s32 D_00469720;
extern s32 D_00469740;
extern s32 D_004705E0;
extern s32 D_004705E4;
extern s32 D_004705E8;
extern s32 D_004705EC;
extern void *D_004705F0;
extern void *D_004705F4;
extern s8 D_004B4B66;
extern s32 D_004E0640;
extern f32 D_0051D9A8;
extern f32 D_0051D9AC;
extern f32 gFrameDelta;
extern void amNode_InitPool(void);
extern void func_001EA1B0(void);
extern void Fade_Start(void);
extern void Boot_Start(void);
extern void func_002EA0B0(void);
extern void func_001CA4D0(void);
extern void func_001EF090(void);
void func_001F0860(void) {
    s32 *var_v1;

    amCdFs_LoadDir(0, &D_00469700, 1);
    amCdFs_LoadDir(1, &D_00469720, 1);
    amCdFs_LoadDir(2, &D_00469740, 0);
    D_004705E0 = amCdFs_ReadFileId(0x10004, &D_004E0640, 0);
    D_004705E4 = amCdFs_ReadFileId(0xF62, NULL, 0);
    D_004705E8 = amCdFs_ReadFileId(0xF63, NULL, 0);
    D_004705EC = amCdFs_ReadFileId(0xF64, NULL, 0);
    gSceneNext = -1;
    gSceneQueued = -1;
    gSceneReady = 0;
    gSceneDone = 0;
    D_004705F0 = amTask_Create((void (*)(u8 *)) func_001EF090, (void *)(NULL), 0, 0, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    func_001F0280(D_004B4B40);
    Fade_Start();
    amNode_InitPool();
    func_001EA1B0();
    Scr_Init(2, 0x20, 0x80, 0x80);
    func_0020A230();
    D_0051D9A8 = gFrameDelta;
    D_0051D9AC = gFrameDelta / 60.0f;
    D_004705F4 = amTask_Create((void (*)(u8 *)) func_001EF0D0, (void *)(NULL), 0xFFF0, 1, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    func_0022DF10(0x200, 0x200, 0x20, 0x200);
    func_001CA4D0();
    D_004B4B66 = 1;
    func_002EA0B0();
    *D_004B4BB0 = 0;
    Boot_Start();
    *D_004B4B40 = 0;
    var_v1 = (int *)(&SceneSw_LoadLogomark);
    *D_004B4B41 = 0;
    gSceneReady = 0;
    D_004B4B66 = 0;
    if (&SceneSw_LoadLogomark == NULL) {
        var_v1 = NULL;
    }
    *(s32 **)((u8 *)D_004705F0 + 0x1C) = var_v1;
}
