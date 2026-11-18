/* Draft (not built): func_001FC880 at 0x001FC880, size 0x438, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); t)' does not match 'func_00146E90(float *)' mwccps2.exe Compiler: @ 182: temp_f21 = (f32 *)func_00146E90(&sp90, var_a1);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FC880.s */

// src/unk/unk_1FB760.c func_001FC880 cerr diff=-1/0
extern f32 func_00146E90(f32 *);
extern void func_00146F10(void *, void *, f32);
extern f32 func_00146EB0(f32 *);
s32 func_001FC880(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
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
    s32 sp110;
    s32 sp120;
    s32 sp130;
    u8 *sp140;
    s32 sp144;
    s32 sp148;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    s32 temp_a1;
    s32 var_a1;
    s32 var_s0;

    if (D_0051CD28 == 0) {
        return 0;
    }
    temp_a1 = arg3 + 0x10;
    sp140 = (u8 *)(temp_a1 + (*(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 0x14) * 0x10));
    sp144 = temp_a1 + (*(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 0x18) * 0x10);
    sp148 = temp_a1 + (*(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 0x1C) * 0x10);
    M2C_ERROR(/* unknown instruction: adda.s $f5, $f7 */);
    M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
    temp_f22 = (-M2C_ERROR(/* unknown instruction: madd.s $f3, $f3, $f4 */) + M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */)) / func_00146E90(M2C_ERROR(/* Read from unset register $t0 */));
    if (!(fabsf(temp_f22) <= *(f32 *)((u8 *)arg2 + 0x10))) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00146F10(&spD0, &spD0, -temp_f22);
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
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_a1 = 0;
loop_7:
    if (var_a1 < 3) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        var_a1 += 1;
        goto loop_7;
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
    temp_f21 = (f32 *)func_00146E90(&sp90, var_a1);
    temp_f20 = (f32 *)func_00146E90(&spE0);
    temp_f20_2 = (f32 *)(temp_f20 + func_00146E90(&spF0));
    temp_f20_3 = (f32 *)(temp_f20_2 + func_00146E90(&sp100));
    temp_f22_2 = (f32 *)func_00146E90(&spA0);
    temp_f22_3 = (f32 *)(temp_f22_2 + func_00146E90(&spB0));
    temp_f22_4 = (f32 *)(func_00146E90(&spC0) + temp_f22_3);
    if (temp_f20_3 <= (0.01f + (temp_f21 + (2.0f * *(f32 *)((u8 *)arg2 + 0x10) * temp_f22_4) + ((temp_f21 * temp_f21) / (*(f32 *)((u8 *)arg2 + 0x14) * (temp_f22_4 * temp_f22_4)))))) {
        if (temp_f20_3 <= (0.01f + temp_f21)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
            return 1;
        }
        var_s0 = 0;
loop_15:
        if (var_s0 >= 3) {
            goto block_17;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        if (!(*(f32 *)((u8 *)arg2 + 0x14) <= func_00146EB0(arg1))) {
            return 2;
        }
        var_s0 += 1;
        goto loop_15;
    }
block_17:
    return 0;
}
