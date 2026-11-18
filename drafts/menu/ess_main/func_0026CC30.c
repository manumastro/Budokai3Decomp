/* Draft (not built): func_0026CC30 at 0x0026CC30, size 0x120, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ((u8 *)gEssMain + 0x24)) + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0xF0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0xF8) * gFram
 * Original: asm/nonmatchings/menu/ess_main/func_0026CC30.s */

// src/menu/ess_main.c func_0026CC30 cerr diff=-1/0
s32 memset(void *, s32, s32);
void func_0026CC30(u8 *arg0) {
    void (*var_v1)();
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x30;
    func_0026B770();
    func_0026B880();
    if ((-1 & func_0022BC30(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssMain + 0x24)) + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0xF0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0xF8) * gFrameDelta)) == 0xFF) {
        *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x13;
        *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x210) = 0x36;
        temp_s0 = gEssMain + 0x210;
        *(s32 *)((u8 *)gEssMain + 0x218) = 0;
        memset(temp_s0 + 0x10, 0, 0x20);
        *(s32 *)((u8 *)((*(s32 *)((u8 *)gEssMain + 0x54) * 4) + temp_s0) + 0x10) = 0x39;
        *(s32 *)((u8 *)gEssMain + 0xF0) = 0x41;
        *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
        memset(gEssMain + 0xF0 + 0x10, 0, 0x20);
        var_v1 = func_0026B560;
        *(s32 *)((u8 *)temp_s1 + 8) = (s32) *(s32 *)((u8 *)gEssMain + 0x54);
        *(s32 *)((u8 *)temp_s1 + 0xC) = 3;
        if (func_0026B560 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
