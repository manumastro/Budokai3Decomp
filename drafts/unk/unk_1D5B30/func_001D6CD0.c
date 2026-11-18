/* Draft (not built): func_001D6CD0 at 0x001D6CD0, size 0x148, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nversion from 'int' to 'void *' @ 579: )((u8 *)temp_a1_2 + 0xC), *(s32 *)((u8 *)temp_a1_2 + 0x10), 0, 0, 0, 0x3F800000);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6CD0.s */

// src/unk/unk_1D5B30.c func_001D6CD0 cerr diff=-1/0
void func_001D6CD0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_a1;
    u8 *temp_a1_2;

    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_a1 = *(u8 **)((u8 *)arg0 + 0x30);
        if (*(s16 *)((u8 *)temp_a1 + 0xCAC) != 4) {
            func_001F9BB0(*(s32 *)((u8 *)temp_a1 + 0x1350), 9);
            return;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (*(s16 *)((u8 *)temp_a1 + 0x181C) != 0) {
            *(f32 *)((u8 *)temp_a1 + 0xC4) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1818);
        }
        temp_f1 = *(f32 *)((u8 *)temp_a1 + 0x1844);
        if ((*(f32 *)((u8 *)temp_a1 + 0xC4) - *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a1 + 0xBB4)) + 0xC)) < (5.0f + temp_f1)) {
            *(f32 *)((u8 *)temp_a1 + 0xC4) = temp_f1;
        } else {
            func_001F9BB0(*(s32 *)((u8 *)temp_a1 + 0x1350), 9);
        }
        if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x34) + (*(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0xC9C));
            *(f32 *)((u8 *)arg0 + 0x34) = temp_f1_2;
            temp_f0 = *(f32 *)((u8 *)arg0 + 0x38);
            temp_a1_2 = arg0 + 0x30;
            if (!(temp_f1_2 < temp_f0)) {
                *(f32 *)((u8 *)temp_a1_2 + 4) = (f32) (temp_f1_2 - temp_f0);
                func_001E9B00(*(s32 *)((u8 *)temp_a1_2 + 0xC), *(s32 *)((u8 *)temp_a1_2 + 0x10), 0, 0, 0, 0x3F800000);
            }
        }
    }
}
