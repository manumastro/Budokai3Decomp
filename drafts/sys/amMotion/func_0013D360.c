/* Draft (not built): func_0013D360 at 0x0013D360, size 0x64C, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  Compiler: 952: var_s1 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 0xC)); @ 947: temp_s3 = *(temp_fp + (var_s2 * 2));
 * Original: asm/nonmatchings/sys/amMotion/func_0013D360.s */

// src/sys/amMotion.c func_0013D360 cerr diff=-1/0
s32 func_001415F0(s32 *, u16, u16, u16);
s32 func_00142370(s32 *, s32 *);
s32 func_001423F0(s32 *, s32 *, s32 *, f32);
void func_0013D360(u8 *arg0, u8 *arg1) {
    s32 spA0;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    s32 spD0;
    s32 *temp_s0;
    s16 temp_s3;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_fp;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1_2;
    u8 *temp_a1_4;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 *var_s1_2;

    temp_s4 = (u8 *)(D_004702EC);
    temp_fp = (s32)(arg0 + ((((s32) *(s32 *)((u8 *)arg1 + 0) >> 0x10) - 1) << 9) + 0x4B0);
    spA0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 0x10);
    var_s2 = 0;
loop_44:
    if (var_s2 < spA0) {
        temp_s3 = *(temp_fp + (var_s2 * 2));
        if (temp_s3 >= 0) {
            temp_s0 = (s32 *)(*(s32 *)((u8 *)arg1 + 0x10) + (var_s2 << 6));
            if (*(s32 *)((u8 *)temp_s4 + 0) & 1) {
                if (*(s32 *)((u8 *)temp_s4 + 0) & 0x10) {
                    var_s1 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 0xC));
                } else {
                    var_s1 = *(*(s32 *)((u8 *)temp_s4 + 0xC) + (temp_s3 * 8));
                }
                if (var_s1 != 0) {
                    temp_v0 = amMotion_FindKeyHint8(var_s1, *(s32 *)((u8 *)temp_s0 + 0x30), *(f32 *)((u8 *)arg1 + 8));
                    *(s32 *)((u8 *)temp_s0 + 0x30) = temp_v0;
                    temp_v0_2 = (u8 *)(var_s1 + (temp_v0 * 8));
                    temp_s1 = temp_v0_2 + 0xC;
                    func_001415F0(temp_s0, *(u16 *)((u8 *)temp_v0_2 + 0xE), *(u16 *)((u8 *)temp_v0_2 + 0x10), *(u16 *)((u8 *)temp_v0_2 + 0x12));
                    if (((f32) *(s16 *)((u8 *)temp_v0_2 + 0xC) != *(f32 *)((u8 *)arg1 + 8)) && ((temp_s6 = temp_s1 + 8, (*(u16 *)((u8 *)temp_s1 + 2) != *(u16 *)((u8 *)temp_s1 + 0xA))) || (*(u16 *)((u8 *)temp_s1 + 4) != *(u16 *)((u8 *)temp_s6 + 4)) || (*(u16 *)((u8 *)temp_s1 + 6) != *(u16 *)((u8 *)temp_s6 + 6)))) {
                        func_001415F0(&spD0, *(u16 *)((u8 *)temp_s6 + 2), *(u16 *)((u8 *)temp_s6 + 4), *(u16 *)((u8 *)temp_s6 + 6));
                        func_001423F0(temp_s0, temp_s0, &spD0, (*(f32 *)((u8 *)arg1 + 8) - (f32) *(s16 *)((u8 *)temp_v0_2 + 0xC)) / (f32) (*(s16 *)((u8 *)temp_s1 + 8) - *(s16 *)((u8 *)temp_v0_2 + 0xC)));
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
                temp_v0_3 = amMotion_FindKeyHint16(var_s1_2, *(s32 *)((u8 *)temp_s0 + 0x34), *(f32 *)((u8 *)arg1 + 8));
                *(s32 *)((u8 *)temp_s0 + 0x34) = temp_v0_3;
                temp_a0 = var_s1_2 + (temp_v0_3 * 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0 + 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0 + 0x14);
                *(f32 *)((u8 *)temp_s0 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0 + 0x18);
                *(s32 *)((u8 *)temp_s0 + 0x1C) = 0x3F800000;
                if ((f32) *(s32 *)((u8 *)((temp_v0_3 * 0x10) + var_s1_2) + 0xC) != *(f32 *)((u8 *)arg1 + 8)) {
                    temp_a1 = *(s32 *)((u8 *)var_s1_2 + 4);
                    if (temp_a1 != 2) {
                        if ((temp_a1 != 1) && (temp_a1 != 0)) {

                        } else {
                            temp_a1_2 = temp_a0 + 0xC + 0x10;
                            spC0 = *(f32 *)((u8 *)temp_a1_2 + 4);
                            spC4 = *(f32 *)((u8 *)temp_a1_2 + 8);
                            spC8 = *(f32 *)((u8 *)temp_a1_2 + 0xC);
                            spCC = 1.0f;
                            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                            M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
                            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        }
                    }
                }
            } else if (D_00470308 != 1) {
                M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
            }
            if ((*(s32 *)((u8 *)temp_s4 + 0) & 0x10) && (*(s32 *)((u8 *)((temp_s3 * 0xC) + *(s32 *)((u8 *)temp_s4 + 0xC)) + 8) != 0)) {
                temp_s1_2 = *(u8 **)((u8 *)((temp_s3 * 0xC) + *(s32 *)((u8 *)temp_s4 + 0xC)) + 8);
                temp_v0_4 = amMotion_FindKeyHint16(temp_s1_2, *(s32 *)((u8 *)temp_s0 + 0x38), *(f32 *)((u8 *)arg1 + 8));
                *(s32 *)((u8 *)temp_s0 + 0x38) = temp_v0_4;
                temp_a0_2 = temp_s1_2 + (temp_v0_4 * 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x10);
                *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x14);
                *(f32 *)((u8 *)temp_s0 + 0x28) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x18);
                *(s32 *)((u8 *)temp_s0 + 0x2C) = 0x3F800000;
                if ((f32) *(s32 *)((u8 *)((temp_v0_4 * 0x10) + temp_s1_2) + 0xC) != *(f32 *)((u8 *)arg1 + 8)) {
                    temp_a1_3 = *(s32 *)((u8 *)temp_s1_2 + 4);
                    if (temp_a1_3 != 2) {
                        if ((temp_a1_3 != 1) && (temp_a1_3 != 0)) {

                        } else {
                            temp_a1_4 = temp_a0_2 + 0xC + 0x10;
                            spB0 = *(f32 *)((u8 *)temp_a1_4 + 4);
                            spB4 = *(f32 *)((u8 *)temp_a1_4 + 8);
                            spB8 = *(f32 *)((u8 *)temp_a1_4 + 0xC);
                            spBC = 1.0f;
                            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                            M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
                            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        }
                    }
                }
            } else if (D_00470308 != 1) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            }
        } else if (D_00470308 != 1) {
            temp_v1 = (u8 *)(*(s32 *)((u8 *)arg1 + 0x10) + (var_s2 << 6));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            *(s32 *)((u8 *)temp_v1 + 0x30) = -1;
            *(s32 *)((u8 *)temp_v1 + 0x34) = -1;
            *(s32 *)((u8 *)temp_v1 + 0x38) = -1;
        }
        var_s2 += 1;
        goto loop_44;
    }
}
