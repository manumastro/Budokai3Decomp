/* Draft (not built): func_00279FD0 at 0x00279FD0, size 0x1BC, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s2.exe Compiler: 220: amCdFs_Close(*(gEssTrade + var_s0), 0); @ 219: *(s32 *)((u8 *)(*(gEssTrade + var_s0)) + 0x40) = 0;
 * Original: asm/nonmatchings/menu/ess_trade/func_00279FD0.s */

// src/menu/ess_trade.c func_00279FD0 cerr diff=-1/0
s32 func_0026D610(s32);
void *func_002C0510(s32, s32, s32);
extern void amFile_Load(void *);
void func_00279FD0(u8 *arg0) {
    s32 var_s0;
    s32 var_s1;
    void (*var_v0)();
    void (*var_v1)();
    u8 *temp_v1;

    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0xC)) + 4) == 3) {
        var_s1 = 0;
        var_s0 = 0;
        do {
            temp_v1 = (u8 *)(gEssTrade + var_s0);
            *(s32 *)((u8 *)temp_v1 + 0x10) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0)) + 0x40);
            *(s32 *)((u8 *)(*(gEssTrade + var_s0)) + 0x40) = 0;
            amCdFs_Close(*(gEssTrade + var_s0), 0);
            *(gEssTrade + var_s0) = 0;
            amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)(gEssTrade + var_s0) + 0x10)) + 0x50));
            func_0026D610(*(s32 *)((u8 *)(gEssTrade + var_s0) + 0x10));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
        *(s32 *)((u8 *)gEssTrade + 0x28) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x10)) + 0x50);
        *(s32 *)((u8 *)gEssTrade + 0x2C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x14)) + 0x50);
        *(s32 *)((u8 *)gEssTrade + 0x30) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x18)) + 0x50);
        *(s32 *)((u8 *)gEssTrade + 0x34) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x1C)) + 0x50);
        *(u8 **)((u8 *)gEssTrade + 0x24) = func_002C0510(*(s32 *)((u8 *)gEssTrade + 0x34), 0x3010, 0);
        *(s16 *)((u8 *)(*(u8 **)((u8 *)gEssTrade + 0x24)) + 0x3A) = 3;
        if (EssMain_GetFlag(gEssTrade) != 0) {
            var_v0 = func_00279CD0;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
            if (func_00279CD0 == NULL) {
                var_v0 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
            amAdx_SetVolume(1, (f32)(D_004E0618));
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x210BB, 0);
            return;
        }
        func_0026D570(1);
        var_v1 = func_00279E60;
        if (func_00279E60 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
