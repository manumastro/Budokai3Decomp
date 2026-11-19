/* Draft (not built): func_002928C0 at 0x002928C0, size 0xDC, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002928C0.s */

void func_002928C0(u8 *arg0) {
    s32 *var_v0;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f3;
    u8 *temp_v1;
    temp_v1 = arg0 + 0x30;
    *(f32 *)((u8 *)arg0 + 0x40) = temp_f1;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x40) - gFrameDelta;
    if (temp_f1 < 0.0f) {
        var_v0 = (int *)&func_00292780;
        *(f32 *)((u8 *)temp_v1 + 0x10) = 0.0f;
        if (&func_00292780 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    }
    temp_f3 = *(f32 *)((u8 *)temp_v1 + 0x10);
    if (temp_f3 <= 0.0f) {
        *(f32 *)((u8 *)temp_v1 + 0xC) = 0.75f;
    } else {
        temp_f0 = *(f32 *)((u8 *)temp_v1 + 0xC) + 0.75f * gFrameDelta / temp_f3;
        *(f32 *)((u8 *)temp_v1 + 0xC) = temp_f0;
        if (!(temp_f0 <= 0.75f)) {
            *(f32 *)((u8 *)temp_v1 + 0xC) = 0.75f;
        }
    }
    func_00133780(0, 1);
    func_00139620(0x900, arg0 + 0x30, -1, 0x44, 0, 0);
    func_00133780(0, 0);
}
