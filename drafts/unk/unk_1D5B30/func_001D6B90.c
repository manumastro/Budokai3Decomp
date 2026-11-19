/* Draft (not built): func_001D6B90 at 0x001D6B90, size 0xD4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xAC, original 0xD4
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6B90.s */

// src/unk/unk_1D5B30.c func_001D6B90 size diff=20/43
void func_001D6B90(u8 *arg0) {
    f32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 temp_f1;
    s32 temp_a3;
    s32 temp_v1;
    u8 *temp_s0;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x3C);
    temp_s0 = arg0 + 0x30;
    temp_v1 = *(((u8 *)&D_00469478) + (temp_a3 * 4));
    sp34 = 0x3000;
    sp38 = temp_v1;
    sp3C = temp_v1;
    sp30 = 0.85f * (1.0f - (*(f32 *)((u8 *)arg0 + 0x34) / *(f32 *)((u8 *)arg0 + 0x38)));
    func_001E11E0(*(s32 *)((u8 *)arg0 + 0x30), &sp30);
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_f1 = *(f32 *)((u8 *)temp_s0 + 4) + *(f32 *)((u8 *)gBattle + 0x88F0);
        *(f32 *)((u8 *)temp_s0 + 4) = temp_f1;
        if (!(temp_f1 < *(f32 *)((u8 *)temp_s0 + 8))) {
            amTask_Kill(arg0);
        }
    }
}
