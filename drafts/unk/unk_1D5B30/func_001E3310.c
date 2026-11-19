/* Draft (not built): func_001E3310 at 0x001E3310, size 0x11C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xEC, original 0x11C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E3310.s */

// src/unk/unk_1D5B30.c func_001E3310 size diff=41/59
void func_001E3310(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(gBattle);
    func_001E74F0(arg0 + 0x650);
    func_001E74F0(arg0 + 0xCD0);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x1808);
    if (!(temp_f1 <= 0.0f)) {
        *(f32 *)((u8 *)arg0 + 0x1808) = (f32) (temp_f1 - (*(f32 *)((u8 *)arg0 + 0xC9C) * *(f32 *)((u8 *)temp_s1 + 0x88F0)));
    }
    if (*(f32 *)((u8 *)arg0 + 0x1808) < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x1808) = 0.0f;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
        *(f32 *)((u8 *)arg0 + 0x189C) = (f32) (*(f32 *)((u8 *)arg0 + 0x189C) + *(f32 *)((u8 *)temp_s1 + 0x88F0));
    } else {
        *(f32 *)((u8 *)arg0 + 0x189C) = 0.0f;
    }
    func_001E8640((Fighter *)(arg0 + 0x650), -1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(f32 *)((u8 *)arg0 + 0x84) = (f32) (*(f32 *)((u8 *)arg0 + 0x84) + **(f32 **)((u8 *)arg0 + 0xB94));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {

    }
    *(f32 *)((u8 *)arg0 + 0x64) = *(f32 *)((u8 *)arg0 + 0x44);
}
