/* Draft (not built): func_0026D8A0 at 0x0026D8A0, size 0x118, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x138, original 0x118
 * Original: asm/nonmatchings/menu/ess_main/func_0026D8A0.s */

// src/menu/ess_main.c func_0026D8A0 size diff=58/78
void func_0026D8A0(void) {
    s32 temp_a0;
    void (*var_v1)();
    void (*var_v1_2)();
    void (*var_v1_3)();
    u8 *temp_t3;

    temp_t3 = *(u8 **)((u8 *)gEssMain + 0x18);
    temp_a0 = *(s32 *)((u8 *)gEssMain + 0x50);
    switch (temp_a0) {                              /* irregular */
    case 1:
    case 0:
        var_v1 = func_0026CD50;
        if (func_0026CD50 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)temp_t3 + 0x1C) = var_v1;
        return;
    case 2:
        D_004707F0 = 0;
        *(s32 *)((u8 *)gEssMain + 0x120) = 0xA;
        *(s32 *)((u8 *)gEssMain + 0x128) = 0;
        var_v1_2 = Ess_TaskTradeEnd;
        *(s32 *)((u8 *)gEssMain + 0x150) = 0xC;
        *(s32 *)((u8 *)gEssMain + 0x15C) = 0;
        *(s32 *)((u8 *)gEssMain + 0x158) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xD;
        *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x90) = 2;
        *(s32 *)((u8 *)gEssMain + 0x98) = 0;
        *(s32 *)((u8 *)gEssMain + 0xC0) = 8;
        *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF0) = 0x2F;
        *(s32 *)((u8 *)gEssMain + 0x100) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x12;
        *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
        if (Ess_TaskTradeEnd == NULL) {
            var_v1_2 = NULL;
        }
        *(void (**)())((u8 *)temp_t3 + 0x1C) = var_v1_2;
        return;
    case 3:
        var_v1_3 = Ess_TaskInfoEnd;
        if (Ess_TaskInfoEnd == NULL) {
            var_v1_3 = NULL;
        }
        *(void (**)())((u8 *)temp_t3 + 0x1C) = var_v1_3;
        *(s32 *)((u8 *)temp_t3 + 0x30) = 0;
        return;
    }
}
