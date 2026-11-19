/* Draft (not built): func_002AF220 at 0x002AF220, size 0x108, segment unk/unk_2AE760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2AE760/func_002AF220.s */

s32 func_002AF220(u8 *arg0, u8 *arg1) {
    f32 sp40;
    f32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 temp_f1;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 *temp_s1;
    u8 *temp_t0;
    temp_t0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_s0 = *(s32 *)((u8 *)temp_t0 + 0xC);
    sp4C = 0x3F800000;
    sp48 = 0;
    sp40 = *(f32 *)((u8 *)temp_t0 + 4);
    temp_s1 = *(s32 *)((u8 *)temp_t0 + 0x10) * 0x28 + (D_005BCD20 + **(s32 **)((u8 *)arg0 + 0) * 0xA0);
    sp44 = *(f32 *)((u8 *)temp_t0 + 0);
    func_00228430(0);
    func_00227A30((u8 *)&sp40);
    func_0022C060(1.0f, *(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x20) + temp_s0_2));
    temp_s0_2 = temp_s0 * 4;
    func_0022CD00(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x20) + temp_s0_2));
    func_00228410();
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x30) - 1.0f;
    *(f32 *)((u8 *)arg0 + 0x30) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    return 3;
}
