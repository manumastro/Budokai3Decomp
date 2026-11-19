/* Draft (not built): func_002778D0 at 0x002778D0, size 0x1B4, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x1B4
 * Original: asm/nonmatchings/menu/ess_trade/func_002778D0.s */

// src/menu/ess_trade.c func_002778D0 size diff=39/115
extern f32 gFrameDelta;
extern void func_0026D570(s32);
extern void amAdx_Pause(s32, s32);
void func_00279D30(u8 *a0);
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0026D530(s32, s32, s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00493086;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern char D_00492FCE[];
void func_002778D0(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_a0;
    u8 *temp_s1;

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
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x14) + (*(s32 *)((u8 *)gEssTrade + 0x158) * 4)), 1, (f32) *(s32 *)((u8 *)gEssTrade + 0x160) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
    if ((*D_00492FCE | D_00493086) != 0) {
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
        amAdx_Pause(1, 1);
        func_0026D570(0);
        var_v1 = (int *)(&func_00279D30);
        if (&func_00279D30 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
