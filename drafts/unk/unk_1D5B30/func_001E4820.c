/* Draft (not built): func_001E4820 at 0x001E4820, size 0x4B4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 229 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x4B4
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E4820.s */

// src/unk/unk_1D5B30.c func_001E4820 size diff=229/124
s32 func_0013B580(s32, f32);
extern void func_0011F680(void);
extern void func_0013AFA0(void *);
void func_001E4820(u8 *arg0, s32 arg1, f32 fparg0) {
    s32 sp60;
    s32 sp70;
    f32 sp80;
    s32 sp90;
    s32 spA0;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_a2;
    f32 var_f21;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s3;
    s32 var_s3;
    u8 *temp_v1;

    var_s3 = 0;
    var_f21 = fparg0;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB88)) + 0x40C) < 0) {

    }
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1354);
    if (temp_v1 != NULL) {
        if (var_f21 < 0.0f) {
            var_s3 = 1;
            var_f21 = -var_f21;
        }
        temp_f2 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
        if (!(temp_f2 <= 0.0f)) {
            temp_a0 = *(s16 *)((u8 *)arg0 + 0xCAC);
            temp_f2_2 = var_f21 - 1.0f;
            temp_f21 = var_f21 * (1.0f + (temp_f2_2 * temp_f2_2 * (temp_f2 - 1.0f)));
            if ((temp_a0 != 0x14) && (temp_a0 != 0xE) && (temp_a0 != 0xD) && (temp_a0 != 0xB) && (temp_a0 != 9) && (temp_a0 != 4) && (temp_a0 != 3) && (temp_a0 != 2) && (temp_a0 != 1) && (temp_a0 != 0)) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            } else {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            }
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            temp_a0_2 = *(s16 *)((u8 *)temp_v1 + 0xCAC);
            if ((temp_a0_2 != 0x14) && (temp_a0_2 != 0xE) && (temp_a0_2 != 0xD) && (temp_a0_2 != 0xB) && (temp_a0_2 != 9) && (temp_a0_2 != 4) && (temp_a0_2 != 3) && (temp_a0_2 != 2) && (temp_a0_2 != 1) && (temp_a0_2 != 0)) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            } else {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            }
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_0011F680();
            var_a2 = 65536.0f * (M2C_ERROR(/* Read from unset register $f0 */) / 6.2831855f);
            *(s32 *)((u8 *)arg0 + 0x17AC) = (s32) ((M2C_BITWISE(s32, var_a2) - *(s32 *)((u8 *)arg0 + 0x17A4)) & 0xFFFF);
            if (var_s3 != 0) {
                var_a2 = M2C_BITWISE(f32, ((M2C_BITWISE(s32, var_a2) + 0x7FFF + 1) & 0xFFFF));
            }
            if (!(temp_f21 <= 0.0f)) {
                temp_s3 = (M2C_BITWISE(s32, var_a2) - *(s32 *)((u8 *)arg0 + 0x17A4)) & 0xFFFF;
                M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
                if (arg1 == 0) {
                    func_0013B160(NULL);
                    func_0013AFA0(NULL);
                    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x17A4);
                    func_0013B580(temp_a0_3, 3.1415927f * ((f32) (((((temp_a0_3 + 0x7FFF + 1) & 0xFFFF) * 2) - 0x8000) - 0x7FFF) / 65535.0f));
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                    func_0013AFA0(NULL);
                    temp_a0_4 = ((((temp_s3 + 0x7FFF + 1) & 0xFFFF) * 2) - 0x8000) - 0x7FFF;
                    func_0013B580(temp_a0_4, 3.1415927f * ((f32) temp_a0_4 / 65535.0f) * temp_f21);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                }
                *(s32 *)((u8 *)arg0 + 0x17A4) = M2C_BITWISE(s32, (65536.0f * (M2C_ERROR(/* unknown instruction: madd.s $f20, $f0, $f21 */) / 6.2831855f)));
            }
        }
    }
}
