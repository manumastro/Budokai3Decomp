/* Draft (not built): func_001FBAA0 at 0x001FBAA0, size 0x334, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 157 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x190, original 0x334
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FBAA0.s */

// src/unk/unk_1FB760.c func_001FBAA0 size diff=157/100
extern f32 func_00146E90(f32 *);
extern void func_00146F30(f32 *);
extern void func_00146F10(void *, void *, f32);
f32 func_00146F90(s32 *, s32 *);
s32 func_001FBAA0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp60;
    s32 sp70;
    s32 sp80;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    u8 *sp110;
    s32 sp114;
    s32 sp118;
    s32 *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f21_2;
    s32 temp_a1;
    s32 var_a1;

    if (D_0051CD28 == 0) {
        return 0;
    }
    temp_a1 = M2C_ERROR(/* Read from unset register $t0 */) + 0x10;
    temp_s0 = M2C_ERROR(/* Read from unset register $t1 */);
    sp110 = (unsigned char *)(temp_a1 + (*(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t1 */)) + 0x14) * 0x10));
    sp114 = temp_a1 + (*(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t1 */)) + 0x18) * 0x10);
    sp118 = temp_a1 + (*(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t1 */)) + 0x1C) * 0x10);
    M2C_ERROR(/* unknown instruction: adda.s $f2, $f4 */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f0 = func_00146F90(&spA0, temp_s0);
    if (temp_f0 < 0.001f) {
        if (!(temp_f0 <= -0.001f)) {
            return 0;
        }
        goto block_6;
    }
block_6:
    temp_f21 = func_00146E90((f32 *)(&spA0));
    func_00146F30((f32 *)(&spA0));
    temp_f20 = -(-M2C_ERROR(/* unknown instruction: madd.s $f0, $f1, $f0 */) + func_00146F90(temp_s0, arg2));
    temp_f12 = temp_f20 / func_00146F90(temp_s0, &spA0);
    if (temp_f12 <= temp_f21) {
        if (temp_f12 < 0.0f) {
            goto block_8;
        }
        func_00146F10(&sp90, &spA0, temp_f12);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        var_a1 = 0;
loop_12:
        if (var_a1 < 3) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            var_a1 += 1;
            goto loop_12;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        temp_f21_2 = func_00146E90((f32 *)(&sp60));
        temp_f20_2 = func_00146E90((f32 *)(&spB0));
        temp_f20_3 = temp_f20_2 + func_00146E90((f32 *)(&spC0));
        if ((func_00146E90((f32 *)(&spD0)) + temp_f20_3) <= (0.01f + temp_f21_2)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
            return 1;
        }
        return 0;
    }
block_8:
    return 0;
}
