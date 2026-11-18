/* Draft (not built): func_0013CE50 at 0x0013CE50, size 0x504, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  Compiler: 940: var_s1 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 0xC)); @ 935: temp_s3 = *(temp_s7 + (var_s2 * 2));
 * Original: asm/nonmatchings/sys/amMotion/func_0013CE50.s */

// src/sys/amMotion.c func_0013CE50 cerr diff=-1/0
s32 func_001415F0(s32 *, u16, u16, u16);
s32 func_00142370(s32 *, s32 *);
s32 func_001423F0(s32 *, s32 *, s32 *, f32);
void func_0013CE50(u8 *arg0, u8 *arg1) {
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 spBC;
    s32 spC0;
    s32 *temp_s0;
    f32 temp_f20;
    s16 temp_s3;
    s32 temp_fp;
    s32 temp_s7;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_s1;
    u8 *var_s1_2;

    temp_s4 = (u8 *)(D_004702EC);
    temp_s7 = (s32)(arg0 + ((((s32) *(s32 *)((u8 *)arg1 + 0) >> 0x10) - 1) << 9) + 0x4B0);
    temp_fp = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 0x10);
    temp_f20 = M2C_BITWISE(f32, *(s32 *)((u8 *)arg1 + 8)) - (f32) *(s32 *)((u8 *)arg1 + 8);
    var_s2 = 0;
loop_43:
    if (var_s2 < temp_fp) {
        temp_s3 = *(temp_s7 + (var_s2 * 2));
        if (temp_s3 >= 0) {
            temp_s0 = (s32 *)(*(s32 *)((u8 *)arg1 + 0x10) + (var_s2 << 6));
            if (*(s32 *)((u8 *)temp_s4 + 0) & 1) {
                if (*(s32 *)((u8 *)temp_s4 + 0) & 0x10) {
                    var_s1 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 0xC));
                } else {
                    var_s1 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 8));
                }
                if (var_s1 != NULL) {
                    temp_v0 = var_s1 + ((*(s32 *)((u8 *)var_s1 + 8) - 1) * 8);
                    func_001415F0(temp_s0, *(u16 *)((u8 *)temp_v0 + 0xE), *(u16 *)((u8 *)temp_v0 + 0x10), *(u16 *)((u8 *)temp_v0 + 0x12));
                    if (!(temp_f20 <= 0.0f) && (*(s32 *)((u8 *)arg1 + 4) == -1)) {
                        func_001415F0(&spC0, *(u16 *)((u8 *)var_s1 + 0xE), *(u16 *)((u8 *)var_s1 + 0x10), *(u16 *)((u8 *)var_s1 + 0x12));
                        func_001423F0(temp_s0, temp_s0, &spC0, temp_f20);
                        func_00142370(temp_s0, temp_s0);
                    }
                } else {
                    goto block_12;
                }
            } else {
block_12:
                if (D_00470308 != 1) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
                }
            }
            if (*(s32 *)((u8 *)temp_s4 + 0) & 1) {
                if (*(s32 *)((u8 *)temp_s4 + 0) & 0x10) {
                    var_s1_2 = *(u8 **)((u8 *)((temp_s3 * 0xC) + *(s32 *)((u8 *)temp_s4 + 0xC)) + 4);
                } else {
                    var_s1_2 = *(u8 **)((u8 *)((temp_s3 * 8) + *(s32 *)((u8 *)temp_s4 + 0xC)) + 4);
                }
            } else {
                var_s1_2 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 4));
            }
            if (var_s1_2 != NULL) {
                temp_v1 = (u8 *)(temp_s0 + 0x10);
                temp_a0 = var_s1_2 + ((*(s32 *)((u8 *)var_s1_2 + 8) - 1) * 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0 + 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0 + 0x14);
                *(f32 *)((u8 *)temp_s0 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0 + 0x18);
                *(s32 *)((u8 *)temp_s0 + 0x1C) = 0x3F800000;
                if (!(temp_f20 <= 0.0f)) {
                    if (*(s32 *)((u8 *)arg1 + 4) == -1) {
                        spB0 = *(f32 *)((u8 *)var_s1_2 + 0x10);
                        spB4 = *(f32 *)((u8 *)var_s1_2 + 0x14);
                        spB8 = *(f32 *)((u8 *)var_s1_2 + 0x18);
                        spBC = 0x3F800000;
                        if (*(s32 *)((u8 *)arg0 + 0x414) & 1) {
                            spB0 = *(f32 *)((u8 *)temp_s0 + 0x10);
                            spB8 = *(f32 *)((u8 *)temp_v1 + 8);
                        }
                        if (*(s32 *)((u8 *)arg0 + 0x414) & 2) {
                            spB4 = *(f32 *)((u8 *)temp_v1 + 4);
                        }
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    }
                }
            } else if (D_00470308 != 1) {
                M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
            }
            if ((*(s32 *)((u8 *)temp_s4 + 0) & 0x10) && (*(s32 *)((u8 *)((temp_s3 * 0xC) + *(s32 *)((u8 *)temp_s4 + 0xC)) + 8) != 0)) {
                temp_s1 = *(u8 **)((u8 *)((temp_s3 * 0xC) + *(s32 *)((u8 *)temp_s4 + 0xC)) + 8);
                temp_v1_2 = temp_s1 + ((*(s32 *)((u8 *)temp_s1 + 8) - 1) * 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x14);
                *(f32 *)((u8 *)temp_s0 + 0x28) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x18);
                *(s32 *)((u8 *)temp_s0 + 0x2C) = 0x3F800000;
                if (!(temp_f20 <= 0.0f)) {

                }
            } else if (D_00470308 != 1) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            }
            *(s32 *)((u8 *)((var_s2 << 6) + *(s32 *)((u8 *)arg1 + 0x10)) + 0x30) = -1;
            *(s32 *)((u8 *)((var_s2 << 6) + *(s32 *)((u8 *)arg1 + 0x10)) + 0x34) = -1;
            *(s32 *)((u8 *)((var_s2 << 6) + *(s32 *)((u8 *)arg1 + 0x10)) + 0x38) = -1;
        } else if (D_00470308 != 1) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        }
        var_s2 += 1;
        goto loop_43;
    }
}
