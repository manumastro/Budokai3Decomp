/* Draft (not built): func_001DA170 at 0x001DA170, size 0x2B4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 141 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x2B4
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DA170.s */

// src/unk/unk_1D5B30.c func_001DA170 size diff=141/86
f32 func_00146E60(void *, s32 *);
s32 func_00146F10(s32 *, s32 *, f32);
f32 func_00146F90(s32 *, s32 *);
extern void *func_001EA230();
extern void func_00146F30(void *);
void func_001DA170(u8 *arg0) {
    s32 spA0;
    s32 spB0;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    s32 var_s3;
    s32 var_s4;
    s32 var_s7;
    s32 var_v0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_s1;
    u8 *var_s5;
    u8 *var_s5_2;
    u8 *var_s6;

    *(u8 **)((u8 *)arg0 + 0x1AE0) = NULL;
    memset(arg0 + 0x1AF0, 0, 0x200);
    if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
        temp_v0 = func_001EA230();
        var_s4 = 0;
        if (temp_v0 != NULL) {
            var_s3 = 0;
            var_s5 = temp_v0;
            do {
                if ((*(s8 *)((u8 *)var_s5 + 0x34) == *(s32 *)((u8 *)arg0 + 0x1350)) && !(*(s32 *)((u8 *)var_s5 + 0x38) & 2)) {
                    var_s4 += 1;
                }
                var_s5 = *(u8 **)((u8 *)var_s5 + 0x3C);
            } while (var_s5 != NULL);
            temp_s2 = arg0 + 0x1AF0;
            if (var_s4 != 0) {
                memset(temp_s2, 0, 0x200);
                var_s5_2 = temp_v0;
                var_s6 = NULL;
                var_s1 = temp_s2;
loop_9:
                if ((*(s8 *)((u8 *)var_s5_2 + 0x34) == *(s32 *)((u8 *)arg0 + 0x1350)) && !(*(s32 *)((u8 *)var_s5_2 + 0x38) & 2)) {
                    *(s32 *)((u8 *)var_s1 + 0x1C) = (s32) *(s32 *)((u8 *)var_s5_2 + 0x24);
                    var_s7 = 0;
                    if (*(s32 *)((u8 *)var_s5_2 + 0x38) & 4) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                    *(s32 *)((u8 *)var_s1 + 0x14) = var_v0;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    func_00146F30(&spB0);
                    temp_f21 = M2C_ERROR(/* Read from unset register $f0 */);
                    if (!(temp_f21 <= 0.0f)) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s5) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_00146F30(&spA0);
                        if (func_00146F90(&spB0, &spA0) <= 0.0f) {
                            var_s7 = 1;
                            *(s32 *)((u8 *)var_s1 + 0x14) = (s32) (*(s32 *)((u8 *)var_s1 + 0x14) | 1);
                        } else {
                            temp_f0 = M2C_ERROR(/* Read from unset register $f0 */) / temp_f21;
                            *(f32 *)((u8 *)var_s1 + 0x10) = temp_f0;
                            func_00146F10(&spB0, &spB0, temp_f21 * temp_f0);
                            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s5) */);
                            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                            temp_f1 = *(f32 *)((u8 *)var_s5_2 + 0x20) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0x10);
                            if (!(func_00146E60(arg0 + 0x660, &spB0) <= (temp_f1 * temp_f1))) {
                                var_s7 = 1;
                            }
                        }
                    } else {
                        var_s7 = 1;
                    }
                    if (var_s7 != 0) {
                        *(f32 *)((u8 *)var_s1 + 0x10) = -1.0f;
                    } else {
                        var_s3 += 1;
                    }
                    if (var_s6 != NULL) {
                        *(u8 **)((u8 *)var_s6 + 0x18) = var_s1;
                    }
                    var_s6 = var_s1;
                    var_s1 += 0x20;
                    var_s4 -= 1;
                }
                var_s5_2 = *(u8 **)((u8 *)var_s5_2 + 0x3C);
                if (var_s5_2 != NULL) {
                    if (var_s4 == 0) {

                    } else {
                        goto loop_9;
                    }
                }
                if (var_s3 > 0) {
                    *(u8 **)((u8 *)arg0 + 0x1AE0) = temp_s2;
                }
            }
        }
    }
}
