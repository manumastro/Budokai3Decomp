/* Draft (not built): func_002D8B00 at 0x002D8B00, size 0xF8, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 34 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D8B00.s */

void func_002D8B00(void) {
    s32 sp20;
    Obj2D2530 *temp_s0;
    f32 temp_f1;
    f32 var_f2;
    s128 temp_v0;
    s32 *var_a1;
    s32 var_a0;
    u8 *var_a2;
    temp_s0 = gOptionWork;
    func_002D8890();
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = temp_s0->f388 + var_f2;
    temp_s0->f388 = temp_f1;
    if (!(temp_f1 <= 30.0f)) {
        temp_s0->f388 = 0.0f;
        var_a2 = (signed char *)D_00456C80;
        var_a1 = &sp20;
        var_a0 = 4;
        do {
            var_a0 -= 1;
            temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
            *(s128 *)((u8 *)var_a1 + 0) = (s128)*(s128 *)((u8 *)var_a2 + 0);
            var_a2 += 0x20;
            *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
            var_a1 += 0x20;
        }
        while (var_a0 > 0);
        *var_a1 = (s64)*var_a2;
        amAdx_SetVolume(1, *D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, sp20 | 0x20000, 0);
        func_002D2E50(0);
        temp_s0->f36C = func_002D8AB0;
    }
}
