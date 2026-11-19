/* Draft (not built): func_001D6CD0 at 0x001D6CD0, size 0x148, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6CD0.s */

void func_001D6CD0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_a1;
    u8 *temp_a1_2;
    if (gBattle->f88EC == 0) {
        temp_a1 = *(u8 **)((u8 *)arg0 + 0x30);
        if (*(s16 *)((u8 *)temp_a1 + 0xCAC) != 4) {
            func_001F9BB0(*(s32 *)((u8 *)temp_a1 + 0x1350), 9);
            return;
        }
        M2C_ERROR();
        M2C_ERROR();
        if (*(s16 *)((u8 *)temp_a1 + 0x181C) != 0) {
            *(f32 *)((u8 *)temp_a1 + 0xC4) = (f32)*(f32 *)((u8 *)temp_a1 + 0x1818);
        }
        temp_f1 = *(f32 *)((u8 *)temp_a1 + 0x1844);
        if (!(*(f32 *)((u8 *)temp_a1 + 0xC4) - *(f32 *)((u8 *)*(u8 **)((u8 *)temp_a1 + 0xBB4) + 0xC) < 5.0f + temp_f1)) {
            func_001F9BB0(*(s32 *)((u8 *)temp_a1 + 0x1350), 9);
        } else {
            *(f32 *)((u8 *)temp_a1 + 0xC4) = temp_f1;
        }
        if (gBattle->f88EC == 0) {
            *(f32 *)((u8 *)arg0 + 0x34) = temp_f1_2;
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x34) + gBattle->f88F0 * *(f32 *)((u8 *)*(u8 **)((u8 *)arg0 + 0x30) + 0xC9C);
            temp_f0 = *(f32 *)((u8 *)arg0 + 0x38);
            temp_a1_2 = arg0 + 0x30;
            if (!(temp_f1_2 < temp_f0)) {
                *(f32 *)((u8 *)temp_a1_2 + 4) = (f32)(temp_f1_2 - temp_f0);
                func_001E9B00(*(u8 **)((u8 *)temp_a1_2 + 0xC), *(u8 **)((u8 *)temp_a1_2 + 0x10), 0, NULL, 0.0f, 1.0f);
            }
        }
    }
}
