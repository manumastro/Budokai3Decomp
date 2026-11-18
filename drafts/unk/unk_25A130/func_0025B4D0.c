/* Draft (not built): func_0025B4D0 at 0x0025B4D0, size 0x200, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B0, original 0x200
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025B4D0.s */

// src/unk/unk_25A130.c func_0025B4D0 size diff=66/108
s32 func_0020D120(void *, void *, s16, f32);
s32 func_0020D290(void *, void *, s16, f32);
s32 func_0020D400(s32 *, void *, s16);
s32 func_0020E620(s32, void *, s32);
void func_0025B4D0(u8 *arg0) {
    s32 sp40;
    s16 temp_v0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x18);
    temp_s1 = func_0020D9F0(*(s32 *)((u8 *)arg0 + 0));
    temp_v0 = *(s16 *)((u8 *)temp_s0 + 0x54);
    switch (temp_v0) {
    case 0:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        *(f32 *)((u8 *)temp_s1 + 0xC) = 1.0f;
        break;
    case 1:
        func_0020D400(&sp40, *(u8 **)((u8 *)arg0 + 8), *(s16 *)((u8 *)temp_s0 + 0x5A));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        break;
    case 2:
        func_0020D400(&sp40, *(u8 **)((u8 *)arg0 + 8), *(s16 *)((u8 *)temp_s0 + 0x5A));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        break;
    case 3:
        func_0020D120(temp_s1, *(u8 **)((u8 *)arg0 + 8), *(s16 *)((u8 *)temp_s0 + 0x5A), *(f32 *)((u8 *)temp_s0 + 0x10));
        break;
    case 4:
        func_0020D290(temp_s1, *(u8 **)((u8 *)arg0 + 8), *(s16 *)((u8 *)temp_s0 + 0x5A), *(f32 *)((u8 *)temp_s0 + 0x18));
        break;
    case 5:
        func_0020D290(temp_s1, *(u8 **)((u8 *)arg0 + 8), *(s16 *)((u8 *)temp_s0 + 0x5A), *(f32 *)((u8 *)temp_s0 + 0x18));
        break;
    case 6:
        func_0020D400(&sp40, *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1354), *(s16 *)((u8 *)temp_s0 + 0x5A));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        break;
    case 7:
        func_0020D400(&sp40, *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1354), *(s16 *)((u8 *)temp_s0 + 0x5A));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        break;
    case 8:
        func_0020D120(temp_s1, *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1354), *(s16 *)((u8 *)temp_s0 + 0x5A), *(f32 *)((u8 *)temp_s0 + 0x10));
        break;
    case 9:
        func_0020D290(temp_s1, *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1354), *(s16 *)((u8 *)temp_s0 + 0x5A), *(f32 *)((u8 *)temp_s0 + 0x18));
        break;
    case 10:
        func_0020D290(temp_s1, *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1354), *(s16 *)((u8 *)temp_s0 + 0x5A), *(f32 *)((u8 *)temp_s0 + 0x18));
        break;
    }
    func_0020E620(*(s32 *)((u8 *)arg0 + 0), temp_s1, 1);
}
