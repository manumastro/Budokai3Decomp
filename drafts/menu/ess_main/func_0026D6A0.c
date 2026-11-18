/* Draft (not built): func_0026D6A0 at 0x0026D6A0, size 0x1FC, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x254, original 0x1FC
 * Original: asm/nonmatchings/menu/ess_main/func_0026D6A0.s */

// src/menu/ess_main.c func_0026D6A0 size diff=93/149
s32 memset(void *, s32, s32, void *);
void func_0026D6A0(void) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a0;
    u8 *var_s0;
    u8 *var_s1;

    var_s1 = *(u8 **)((u8 *)gEssMain + 0x18);
    temp_a0 = *(s32 *)((u8 *)gEssMain + 0x54);
    switch (temp_a0) {                              /* irregular */
    case 0:
        *(s32 *)((u8 *)gEssMain + 0x90) = 2;
        *(s32 *)((u8 *)gEssMain + 0x98) = 0;
        *(s32 *)((u8 *)gEssMain + 0xC0) = 0xC;
        *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF0) = 0x42;
        *(s32 *)((u8 *)gEssMain + 0x100) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x210) = 0x37;
        var_s0 = gEssMain + 0x210;
        *(s32 *)((u8 *)gEssMain + 0x218) = 0;
        memset(var_s0 + 0x10, 0, 0x20, gEssMain);
        var_v1 = (s32 *)(&Ess_TaskEditEnd);
        *(s32 *)((u8 *)((*(s32 *)((u8 *)gEssMain + 0x54) * 4) + var_s0) + 0x10) = 0x39;
        *(s32 *)((u8 *)gEssMain + 0x120) = 0xA;
        *(s32 *)((u8 *)gEssMain + 0x128) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xD;
        *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x13;
        *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x240) = 0;
        *(s32 *)((u8 *)gEssMain + 0x248) = 0;
        *(s32 *)((u8 *)gEssMain + 0x250) = 0;
        if (&Ess_TaskEditEnd == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1;
        return;
    case 1:
        *(s32 *)((u8 *)gEssMain + 0x120) = 0xA;
        *(s32 *)((u8 *)gEssMain + 0x128) = 0;
        *(s32 *)((u8 *)gEssMain + 0x90) = 2;
        *(s32 *)((u8 *)gEssMain + 0x98) = 0;
        *(s32 *)((u8 *)gEssMain + 0xC0) = 0xC;
        *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF0) = 0x42;
        *(s32 *)((u8 *)gEssMain + 0x100) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x210) = 0x37;
        var_s0 = gEssMain + 0x210;
        *(s32 *)((u8 *)gEssMain + 0x218) = 0;
        memset(var_s0 + 0x10, 0, 0x20, gEssMain);
        var_v1_2 = (s32 *)(&Ess_TaskShopEnd);
        *(s32 *)((u8 *)((*(s32 *)((u8 *)gEssMain + 0x54) * 4) + var_s0) + 0x10) = 0x39;
        *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xD;
        *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x13;
        *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x240) = 0;
        *(s32 *)((u8 *)gEssMain + 0x248) = 0;
        *(s32 *)((u8 *)gEssMain + 0x250) = 0;
        if (&Ess_TaskShopEnd == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1_2;
        return;
    case 2:
        *(s32 *)((u8 *)var_s1 + 0x30) = 0;
        var_v1_3 = (s32 *)(&func_0026AEB0);
        if (&func_0026AEB0 == NULL) {
            var_v1_3 = NULL;
        }
        *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1_3;
        return;
    }
}
