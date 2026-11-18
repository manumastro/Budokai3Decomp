/* Draft (not built): func_0029DD30 at 0x0029DD30, size 0x3E4, segment battle/char_disp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 161 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x424, original 0x3E4
 * Original: asm/nonmatchings/battle/char_disp/func_0029DD30.s */

// src/battle/char_disp.c func_0029DD30 size diff=161/265
s32 amMotion_Update(void *, s32, s32, s32);
s32 func_0013C1E0(void *, s32, f32);
extern void func_001D0A20();
void func_0029DD30(u8 *arg0, s32 arg2, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s8 var_a1;
    s8 var_a3;
    u8 **temp_a0;
    u8 *temp_a3_2;
    u8 *temp_v0_4;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_v1;

    var_a2 = arg2;
    var_s3 = arg0;
    if (var_s3 != NULL) {
        var_s2 = *(u8 **)((u8 *)var_s3 + 0x260);
        if (var_s2 == NULL) {

        } else {
            if (*(s32 *)((u8 *)var_s3 + 0x290) != 0) {
                temp_a1 = *(s32 *)((u8 *)var_s3 + 0x264);
                var_s1 = **(u8 ***)((u8 *)var_s3 + 0);
                var_s0 = var_s3 + 0x10;
                if (D_004703F4 != 3) {
                    var_f1 = 1.0f;
                } else {
                    var_f1 = 1.2f;
                }
                var_a0 = 0;
                var_a2 = (*(s32 *)((u8 *)var_s3 + 0x26C) == 0) ? 1 : 2;
                temp_f12 = fparg0 * (*(f32 *)((u8 *)var_s0 + 0x1B4) * var_f1);
                if (var_a2 > 0) {
                    var_v1 = var_s3;
                    do {
                        *(f32 *)((u8 *)var_v1 + 0x270) = (f32) (*(f32 *)((u8 *)var_v1 + 0x270) + temp_f12);
                        temp_f1 = *(f32 *)((u8 *)var_v1 + 0x270);
                        temp_f0 = (f32) (*(s32 *)((u8 *)var_v1 + 0x278) - 1);
                        if (!(temp_f1 < temp_f0)) {
                            if (*(s8 *)((u8 *)var_s3 + 0x2BA) != 0) {
                                *(f32 *)((u8 *)var_v1 + 0x270) = (f32) (temp_f1 - temp_f0);
                            } else {
                                *(f32 *)((u8 *)var_v1 + 0x270) = temp_f0;
                            }
                        }
                        var_a0 += 1;
                        var_v1 += 4;
                    } while (var_a0 < var_a2);
                }
                var_f1_2 = *(f32 *)((u8 *)var_s3 + 0x280) + (*(f32 *)((u8 *)var_s3 + 0x284) * temp_f12);
                *(f32 *)((u8 *)var_s3 + 0x280) = var_f1_2;
                if (!(var_f1_2 <= 1.0f)) {
                    var_f1_2 = 1.0f;
                } else if (var_f1_2 < 0.0f) {
                    var_f1_2 = 0.0f;
                }
                *(f32 *)((u8 *)var_s3 + 0x280) = var_f1_2;
                if (temp_a1 != 0) {
                    func_001D0A20(var_s0, temp_a1, var_a2, *(f32 *)((u8 *)var_s3 + 0x270));
                    temp_a0 = *(u8 ***)((u8 *)var_s2 + 0);
                    var_a3 = *(s8 *)((u8 *)var_s0 + 0x1B0);
                    var_a1 = *(s8 *)((u8 *)var_s0 + 0x1AF);
                    temp_v1 = *(s32 *)((u8 *)(*temp_a0) + 0x20);
                    var_a2 = (s32) *(s8 *)((u8 *)var_s0 + 0x1AE);
                    if (var_a3 >= temp_v1) {
                        var_a3 = 0;
                    }
                    if (var_a2 >= temp_v1) {
                        var_a2 = 0;
                    }
                    if (var_a1 >= temp_v1) {
                        var_a1 = 0;
                    }
                    temp_v0 = *(s16 *)((u8 *)var_s1 + 0x26);
                    if (temp_v0 >= 0) {
                        *(s32 *)((u8 *)((temp_v0 * 8) + temp_a0) + 8) = (s32) var_a3;
                    }
                    temp_v0_2 = *(s16 *)((u8 *)var_s1 + 0x14);
                    if (temp_v0_2 >= 0) {
                        *(s32 *)((u8 *)((temp_v0_2 * 8) + *(u8 ***)((u8 *)var_s2 + 0)) + 8) = var_a2;
                    }
                    temp_v0_3 = *(s16 *)((u8 *)var_s1 + 0x16);
                    if (temp_v0_3 >= 0) {
                        *(s32 *)((u8 *)((temp_v0_3 * 8) + *(u8 ***)((u8 *)var_s2 + 0)) + 8) = (s32) var_a1;
                    }
                }
            } else {
                if (D_004703F4 != 3) {
                    var_f1_3 = 1.0f;
                } else {
                    var_f1_3 = 1.2f;
                }
                *(f32 *)((u8 *)var_s3 + 0x270) = (f32) (*(f32 *)((u8 *)var_s3 + 0x270) + var_f1_3);
                temp_f1_2 = *(f32 *)((u8 *)var_s3 + 0x270);
                temp_f0_2 = (f32) (*(s32 *)((u8 *)var_s3 + 0x278) - 1);
                if (!(temp_f1_2 < temp_f0_2)) {
                    if (*(s8 *)((u8 *)var_s3 + 0x2BA) != 0) {
                        *(f32 *)((u8 *)var_s3 + 0x270) = (f32) (temp_f1_2 - temp_f0_2);
                    } else {
                        *(f32 *)((u8 *)var_s3 + 0x270) = temp_f0_2;
                    }
                }
            }
            *(s32 *)((u8 *)var_s2 + 0x414) = (s32) (*(s32 *)((u8 *)var_s2 + 0x414) & ~0xC);
            *(s32 *)((u8 *)var_s2 + 0x414) = (s32) ((u64) ((s64) *(s32 *)((u8 *)var_s2 + 0x414) << 0x20) >> 0x20);
            *(s32 *)((u8 *)var_s2 + 0x414) = (s32) (*(s32 *)((u8 *)var_s2 + 0x414) | 4);
            temp_a3 = *(s32 *)((u8 *)var_s3 + 0x268);
            temp_v0_4 = var_s2 + 0x41C;
            if (*(s32 *)((u8 *)var_s2 + 0x41C) != temp_a3) {
                var_a2 = 0;
                if (*(s32 *)((u8 *)var_s2 + 0x418) > 0) {
                    var_a1_2 = 0;
                    do {
                        var_a2 += 1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_v0_4 + 0x10) + var_a1_2) + 0x30) = -1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_v0_4 + 0x10) + var_a1_2) + 0x34) = -1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_v0_4 + 0x10) + var_a1_2) + 0x38) = -1;
                        var_a1_2 += 0x40;
                    } while (var_a2 < *(s32 *)((u8 *)var_s2 + 0x418));
                }
                *(s32 *)((u8 *)temp_v0_4 + 0xC) = 0xBF800000;
            }
            *(s32 *)((u8 *)var_s2 + 0x41C) = temp_a3;
            *(f32 *)((u8 *)var_s2 + 0x424) = (f32) *(f32 *)((u8 *)var_s3 + 0x270);
            amMotion_Update(var_s2, 0, var_a2, temp_a3);
            temp_a0_2 = *(s32 *)((u8 *)var_s3 + 0x26C);
            if (temp_a0_2 != 0) {
                temp_a3_2 = var_s2 + 0x41C;
                if (*(s32 *)((u8 *)var_s2 + 0x41C) != temp_a0_2) {
                    var_a2_2 = 0;
                    if (*(s32 *)((u8 *)var_s2 + 0x418) > 0) {
                        var_a1_3 = 0;
                        do {
                            var_a2_2 += 1;
                            *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1_3) + 0x30) = -1;
                            *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1_3) + 0x34) = -1;
                            *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1_3) + 0x38) = -1;
                            var_a1_3 += 0x40;
                        } while (var_a2_2 < *(s32 *)((u8 *)var_s2 + 0x418));
                    }
                    *(s32 *)((u8 *)temp_a3_2 + 0xC) = 0xBF800000;
                }
                *(s32 *)((u8 *)var_s2 + 0x41C) = temp_a0_2;
                *(f32 *)((u8 *)var_s2 + 0x424) = (f32) *(f32 *)((u8 *)var_s3 + 0x274);
                amMotion_Update(var_s2, 1, 0, 0);
            }
            func_0013C1E0(var_s2, 0, *(f32 *)((u8 *)var_s3 + 0x280));
        }
    }
}
