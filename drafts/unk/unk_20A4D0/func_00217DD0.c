/* Draft (not built): func_00217DD0 at 0x00217DD0, size 0x19C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0x19C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00217DD0.s */

// src/unk/unk_20A4D0.c func_00217DD0 size diff=90/46
s32 func_00217DD0(u8 *arg1) {
    s32 sp20;
    s32 sp50;
    f32 sp54;
    s32 sp60;
    s32 *sp70;
    s32 *sp74;
    f32 temp_f2;
    s128 temp_a1;

    temp_f2 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    if (!(temp_f2 < 89.0f)) {
        sp54 = -1.0f;
    } else if (temp_f2 <= -89.0f) {
        sp54 = 1.0f;
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        func_00146F30(&sp50);
        func_0011F4C0(0);
        func_0011F220(0);
        sp54 = M2C_ERROR(/* Read from unset register $f0 */) / M2C_ERROR(/* Read from unset register $f0 */);
        func_00146F30(&sp50);
    }
    memset(&sp70, 0, 0x2C);
    sp70 = &sp60;
    sp74 = &sp50;
    temp_a1 = *(s128 *)((u8 *)(&sp70) + 0);
    *(s128 *)((u8 *)(&sp20) + 0) = temp_a1;
    *(s128 *)((u8 *)(&sp20) + 0x10) = (s128) *(s128 *)((u8 *)(&sp70) + 0x10);
    *(s64 *)((u8 *)(&sp20) + 0x20) = (s64) *(s64 *)((u8 *)(&sp70) + 0x20);
    *(f32 *)((u8 *)(&sp20) + 0x28) = (f32) *(f32 *)((u8 *)(&sp70) + 0x28);
    D_00469C78(&sp20, temp_a1, &sp70);
    return 1;
}
