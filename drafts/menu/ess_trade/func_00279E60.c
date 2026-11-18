/* Draft (not built): func_00279E60 at 0x00279E60, size 0x168, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'float *' to 'float' @ 225: amAdx_SetVolume(1, (f32)(D_004E0618));
 * Original: asm/nonmatchings/menu/ess_trade/func_00279E60.s */

// src/menu/ess_trade.c func_00279E60 cerr diff=-1/0
s32 func_0026D530(s32, s32);
extern s32 D_00453270;
void func_00279E60(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s0_4;
    void (*var_v1)();
    u8 *temp_s0_2;
    u8 *temp_s0_3;

    temp_s0 = -1 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x28)) + 0x1C)) + 4), (f32) *(s32 *)((u8 *)gEssTrade + 0xA0) * gFrameDelta);
    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    if (temp_s0 == 0xFF) {
        temp_s0_2 = (u8 *)(gEssTrade + 0xC8);
        *(s32 *)((u8 *)temp_s0_2 + 0x10) = (s32) (EssMain_GetFlag() & 0xFF);
        temp_s0_3 = (u8 *)(gEssTrade + 0xC8);
        *(s32 *)((u8 *)temp_s0_3 + 0x10) = (s32) (EssMain_GetFlag() & 0xFF);
        func_0026D530(2, 0);
        temp_s0_4 = *(&D_00453270 + ((EssMain_GetFlag() & 0xFF) * 4));
        amAdx_SetVolume(1, (f32)(D_004E0618));
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s0_4 | 0x20000, 0);
        var_v1 = func_002794D0;
        *(s32 *)((u8 *)arg0 + 0x30) = 0x3C;
        if (func_002794D0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
