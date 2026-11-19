/* Draft (not built): func_002782D0 at 0x002782D0, size 0x1B4, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A4, original 0x1B4
 * Original: asm/nonmatchings/menu/ess_trade/func_002782D0.s */

// src/menu/ess_trade.c func_002782D0 size diff=48/105
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
s32 Save_GetState();
s32 func_0026D530(s32, s32);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
extern s32 D_00453270;
extern void func_00277C80(void);
void func_002782D0(u8 *arg0) {
    s32 temp_s1_2;
    s32 temp_v0;
    void (*var_v1)();
    u8 *temp_s1;

    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    temp_v0 = Save_GetState();
    switch (temp_v0) {                              /* irregular */
    case 2:
        *(s32 *)((u8 *)gEssTrade + 0x158) = 2;
        *(s32 *)((u8 *)gEssTrade + 0x160) = 0;
        *(s32 *)((u8 *)gEssTrade + 0xC8) = 9;
        *(s32 *)((u8 *)gEssTrade + 0xD0) = 0;
        *(s32 *)((u8 *)gEssTrade + 0xD8) = -1;
        func_0026D530(2, -1);
        var_v1 = func_00277C80;
        if (func_00277C80 == NULL) {
            var_v1 = NULL;
        }
block_10:
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    case 3:
    case 5:
        *(s32 *)((u8 *)gEssTrade + 0x54) = 0;
        func_0028DFC0(6, 0, 0, 0, 0x1F);
        temp_s1 = (unsigned char *)(gEssTrade + 0xC8);
        *(s32 *)((u8 *)temp_s1 + 0x10) = (s32) (EssMain_GetFlag() & 0xFF);
        func_0026D530(2, 0);
        temp_s1_2 = *(&D_00453270 + ((EssMain_GetFlag() & 0xFF) * 4));
        amAdx_SetVolume(1,(*(f32 *)(D_004E0618)));
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s1_2 | 0x20000, 0);
        var_v1 = func_002794D0;
        if (func_002794D0 == NULL) {
            var_v1 = NULL;
        }
        goto block_10;
    }
}
