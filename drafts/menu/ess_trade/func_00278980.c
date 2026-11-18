/* Draft (not built): func_00278980 at 0x00278980, size 0x17C, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); legal implicit conversion from 'int' to 'void *' mwccps2.exe Compiler: @ 47: func_0026D530(2, -1, gEssTrade, gEssTrade);
 * Original: asm/nonmatchings/menu/ess_trade/func_00278980.s */

// src/menu/ess_trade.c func_00278980 cerr diff=-1/0
extern void func_0026D570(s32);
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
s32 func_0026D530(s32, s32, void *, void *);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
extern s32 D_00453270;
extern void func_00279D30(void);
void func_00278980(u8 *arg0) {
    s32 temp_s0_2;
    void (*var_v1)();
    void (*var_v1_2)();
    u8 *temp_s0;

    if (*(s32 *)((u8 *)arg0 + 0x34) != 0) {
        *(s32 *)((u8 *)gEssTrade + 0x98) = 1;
        *(s32 *)((u8 *)gEssTrade + 0xA0) = 0;
        *(s32 *)((u8 *)gEssTrade + 0xF8) = 6;
        *(s32 *)((u8 *)gEssTrade + 0x100) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x128) = 7;
        *(s32 *)((u8 *)gEssTrade + 0x130) = 0;
        *(s32 *)((u8 *)gEssTrade + 0xC8) = 9;
        *(s32 *)((u8 *)gEssTrade + 0xD0) = 0;
        *(s32 *)((u8 *)gEssTrade + 0xD8) = -1;
        func_0026D530(2, -1, gEssTrade, gEssTrade);
        *(s32 *)((u8 *)arg0 + 0x30) = 0x3C;
        amAdx_Pause(1, 1);
        func_0026D570(0);
        func_0028DFC0(6, 0, 0, 0, 0x1F);
        var_v1 = func_00279D30;
        if (func_00279D30 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    temp_s0 = (u8 *)(gEssTrade + 0xC8);
    *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) (EssMain_GetFlag() & 0xFF);
    func_0026D530(2, 0, 0, 0);
    temp_s0_2 = *(&D_00453270 + ((EssMain_GetFlag() & 0xFF) * 4));
    amAdx_SetVolume(1, (f32)(D_004E0618));
    amAdx_Pause(1, 0);
    amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
    var_v1_2 = func_002794D0;
    if (func_002794D0 == NULL) {
        var_v1_2 = NULL;
    }
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
}
