/* Draft (not built): func_0026ED60 at 0x0026ED60, size 0x19C, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026ED60.s */

s32 func_002B4E40(s32, s32 *, s32, s32);
extern s32 D_0058F680;
void func_0026ED60(u8 *arg0) {
    s32 var_a2;
    u8 sp[0x400];
    s32 sp30;
    s32 *var_v1;
    s16 *var_a0;
    s16 temp_v0;
    s32 *var_a1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *var_a0_2;
    temp_a0 = *(u8 **)((u8 *)gEssEdit + 0x1C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401100;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401100);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    temp_s0 = (u8 *)gEssEdit + 0x28;
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)*(u8 **)((u8 *)gEssEdit + 0x18) + 0x14) + *(s32 *)((u8 *)gEssEdit + 0x28) * 4), 1, (f32)*(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0 + 8) = (s32)(*(s32 *)((u8 *)temp_s0 + 8) + 1);
    func_00228410();
    func_00133780(0, 0);
    if (**(s8 **)((u8 *)*(u8 **)((u8 *)gEssEdit + 0x14) + 0x30) >= 4) {
        var_a2 = 0;
        var_a1 = &sp30;
        var_a0 = (short *)(&D_0058F680 + *(s32 *)((u8 *)gEssEdit + 0x20) * 0xD680 + 0x8A2);
        loop_2:
        temp_v0 = *var_a0;

        if (temp_v0 != -1) {
            *(s32 *)((u8 *)var_a1 + 4) = (s32)temp_v0;
            var_a2 += 1;
            var_a0 += 2;
            var_a1 += 4;
            if (var_a2 >= 7) {
            } else {
                goto loop_2;
            }
        }
        sp30 = var_a2;
        if (var_a2 < 7) {
            var_a0_2 = var_a2 * 4 + sp + 0x30;
            do {
                var_a2 += 1;
                *(s32 *)((u8 *)var_a0_2 + 4) = -1;
                var_a0_2 += 4;
            }
            while (var_a2 < 7);
        }
        func_002B4E40(0, &sp30, 0, 1);
        var_v1 = (int *)&func_0026EC70;
        if (&func_0026EC70 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
