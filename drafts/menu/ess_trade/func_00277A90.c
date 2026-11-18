/* Draft (not built): func_00277A90 at 0x00277A90, size 0x1E4, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); : 1D0(*(*(s32 *)((u8 *)temp_s1 + 0x14) + (*(s32 *)((u8 *)gEssTrade + 0x158) * 4)), 1, (f32) *(s32 *)((u8 *)gEssTrade + 0
 * Original: asm/nonmatchings/menu/ess_trade/func_00277A90.s */

// src/menu/ess_trade.c func_00277A90 cerr diff=-1/0
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0026D530(s32, s32);
extern s32 D_00453288;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_002778D0(void);
void func_00277A90(u8 *arg0) {
    s32 *var_v1;
    s32 temp_s1_3;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;

    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x160) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x160) + 1);
    temp_a0 = *(u8 **)((u8 *)gEssTrade + 0x2C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401400;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401400);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s1 = *(u8 **)((u8 *)gEssTrade + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(*(s32 *)((u8 *)temp_s1 + 0x14) + (*(s32 *)((u8 *)gEssTrade + 0x158) * 4)), 1, (f32) *(s32 *)((u8 *)gEssTrade + 0x160) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
    if (func_0022BC30(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x28)) + 0x1C) + (*(s32 *)((u8 *)gEssTrade + 0xC8) * 4)), (f32) *(s32 *)((u8 *)gEssTrade + 0xD0) * gFrameDelta) == 0xFF) {
        temp_s1_2 = (u8 *)(gEssTrade + 0xC8);
        *(s32 *)((u8 *)temp_s1_2 + 0x10) = (s32) ((EssMain_GetFlag() & 0xFF) + 6);
        func_0026D530(2, 6);
        temp_s1_3 = *(&D_00453288 + ((EssMain_GetFlag() & 0xFF) * 4));
        amAdx_SetVolume(1, (f32)(D_004E0618));
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s1_3 | 0x20000, 0);
        var_v1 = (s32 *)(&func_002778D0);
        if (&func_002778D0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
