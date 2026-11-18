/* Draft (not built): func_001FBDE0 at 0x001FBDE0, size 0x434, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  @ 159: var_f12 = temp_f0_4 / ((temp_f20 * (sp94 * sp94)) + M2C_ERROR(/* unknown instruction: madd.s $f2, $f6, $f6 */));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FBDE0.s */

// src/unk/unk_1FB760.c func_001FBDE0 cerr diff=-1/0
extern f32 func_00146E90(f32 *);
extern void func_00146F30(f32 *);
extern void func_00146F10(void *, void *, f32);
s32 func_00133FF0(s32, s32, f32 *, s32);
s32 func_00136310(s32 *, s32 *);
extern void amDraw_FlushPacket(void);
s32 func_001FBDE0(s32 *arg0, f32 *arg1, s32 *arg2, u8 *arg3) {
    s32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 sp80;
    f32 sp84;
    f32 sp90;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f12;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    s32 var_v1;
    u8 *temp_s0;

    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    if (D_0051CD28 == 0) {
        return 0;
    }
    temp_f0 = *(f32 *)((u8 *)arg2 + 4);
    var_f2 = *(f32 *)((u8 *)arg3 + 4);
    var_f1 = temp_f0;
    if (!(temp_f0 <= var_f2)) {

    } else {
        var_f1 = var_f2;
        var_f2 = temp_f0;
    }
    temp_f0_2 = *(f32 *)((u8 *)temp_s0 + 4);
    if (!(var_f1 < temp_f0_2)) {
        temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x20);
        if (!(var_f2 <= (temp_f0_2 + temp_f1))) {
            goto block_10;
        }
        temp_f0_3 = *(f32 *)((u8 *)temp_s0 + 0x24) / temp_f1;
        temp_f20 = temp_f0_3 * temp_f0_3;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        temp_f21 = func_00146E90(&sp90);
        func_00146F30(&sp90);
        temp_f2 = *(f32 *)((u8 *)temp_s0 + 0x14);
        temp_f10 = *(f32 *)((u8 *)arg2 + 4);
        M2C_ERROR(/* unknown instruction: mula.s $f7, $f7 */);
        M2C_ERROR(/* unknown instruction: mula.s $f7, $f11 */);
        M2C_ERROR(/* unknown instruction: madd.s $f2, $f6, $f9 */);
        M2C_ERROR(/* unknown instruction: mula.s $f11, $f11 */);
        temp_f4 = M2C_ERROR(/* unknown instruction: mula.s $f4, $f4 */);
        if (M2C_ERROR(/* unknown instruction: msub.s $f2, $f1, $f3 */) < 0.0f) {
            return 0;
        }
        if (temp_f4 < 0.0f) {
            var_f1_2 = -1.0f;
        } else {
            var_f1_2 = 1.0f;
        }
        M2C_ERROR(/* unknown instruction: c1 0x20004 */);
        temp_f0_4 = -(temp_f4 + (var_f1_2 * 0.0f)) / 2.0f;
        var_f12 = temp_f0_4 / ((temp_f20 * (sp94 * sp94)) + M2C_ERROR(/* unknown instruction: madd.s $f2, $f6, $f6 */));
        var_f3 = (M2C_ERROR(/* unknown instruction: madd.s $f2, $f9, $f9 */) + (temp_f20 * ((temp_f10 * temp_f10) - (temp_f2 * temp_f2)))) / temp_f0_4;
        var_f2_2 = fabsf(var_f12);
        temp_f0_5 = fabsf(var_f3);
        if (!(var_f2_2 <= temp_f0_5)) {
            var_f2_2 = temp_f0_5;
            temp_f0_6 = var_f12;
            var_f12 = var_f3;
            var_f3 = temp_f0_6;
        }
        var_v1 = 0;
        if (var_f3 < 0.0f) {
            var_f1_3 = -1.0f;
        } else {
            var_f1_3 = 1.0f;
        }
        if (var_f12 < 0.0f) {
            var_f0 = -1.0f;
        } else {
            var_f0 = 1.0f;
        }
        if (var_f0 == var_f1_3) {
            if (var_f2_2 <= temp_f21) {
                var_v1 = 1;
            }
        } else {
            var_v1 = 1;
            if (!(var_f12 < 0.0f)) {
                var_f12 = var_f3;
            }
        }
        if (var_v1 != 0) {
            func_00146F10(arg0, &sp90, var_f12);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            sp84 = *(f32 *)((u8 *)arg0 + 4);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F30((void *)(&sp80));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            sp70 = 1.0f;
            sp7C = 1.0f;
            sp74 = 1.0f;
            sp78 = 0.0f;
            func_00146F10(&sp60, arg1, 100.0f);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s3) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_00133FF0(1, 0x100, &sp70, 0);
            func_00136310(arg0, &sp60);
            amDraw_FlushPacket();
            sp70 = 1.0f;
            sp74 = 1.0f;
            sp7C = 1.0f;
            sp78 = 0.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            sp64 += 100.0f;
            func_00133FF0(1, 0x100, &sp70, 0);
            func_00136310(arg0, &sp60);
            amDraw_FlushPacket();
            func_00133FF0(1, 0x100, &sp70, 0);
            func_00136310(arg0, arg2);
            amDraw_FlushPacket();
            return 1;
        }
        return 0;
    }
block_10:
    return 0;
}
