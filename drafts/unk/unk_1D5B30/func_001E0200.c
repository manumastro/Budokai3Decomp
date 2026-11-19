/* Draft (not built): func_001E0200 at 0x001E0200, size 0x7DC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); struct Fighter *' mwccps2.exe Compiler: @ 2200: PlyVib_Start(arg0, var_a1, var_v0_2 & 0xFF,(struct Fighter *)(var_f12));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E0200.s */

// src/unk/unk_1D5B30.c func_001E0200 cerr diff=-1/0
f32 func_001C8020(s32, s32 *, s32);
s32 func_001E0200(u8 *arg0, s32 arg1, s32 arg2) {
    u8 sp[0x400];
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spE4;
    s32 spE8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f1;
    s16 var_v0_3;
    s32 temp_fp;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 var_s0_2;
    u8 *temp_a2;
    u8 *temp_s1;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_7;

    var_s3 = arg1;
    temp_s1 = (unsigned char *)(gBattle);
    var_s2 = arg2;
    if ((arg2 & 0x20) && (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0)) {
        temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x88F8);
        if (temp_v1 != 4) {
            if (temp_v1 == 5) {
                goto block_5;
            }
        } else {
block_5:
            var_f12 = 0.1f * (f32) var_s3;
            if (var_f12 < 30.0f) {

            } else {
                var_f12 = 30.0f;
            }
            var_v0 = (var_s3 * 2) + 0x1E;
            if (var_v0 < 0xFF) {

            } else {
                var_v0 = 0xFF;
            }
            var_a1 = var_v0 & 0xFF;
            var_v0_2 = var_a1;
            if (var_a1 < 0x20) {

            } else {
                var_v0_2 = 0x20;
            }
            if (var_s3 == 0) {
                var_a1 = 0x80;
                var_f12 = 15.0f;
            }
            if (var_s2 & 1) {
                var_f12 *= 1.2f;
            }
            PlyVib_Start(arg0, var_a1, var_v0_2 & 0xFF,(struct Fighter *)(var_f12));
        }
    }
    if (*(s32 *)((u8 *)temp_s1 + 0x88F8) != 4) {
        return 0;
    }
    if (var_s3 < 0) {
        *(f32 *)((u8 *)arg0 + 0x17C0) = (f32) (*(f32 *)((u8 *)arg0 + 0x17C0) - (f32) var_s3);
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x17C4);
        var_f1 = *(f32 *)((u8 *)arg0 + 0x17C0);
        if (var_f1 < temp_f0) {

        } else {
            var_f1 = temp_f0;
        }
        *(f32 *)((u8 *)arg0 + 0x17C0) = var_f1;
        if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
            spD0 = 1 << *(s32 *)((u8 *)arg0 + 0x1350);
            *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0xD8) = 0;
            func_001C8020(0, &spD0, 0);
        }
        return var_s3;
    }
    if (var_s2 & 8) {
        func_001DDA30(arg0);
    } else if (var_s2 & 0x10) {
        func_001DD880(arg0);
    }
    temp_fp = var_s2 & 0x400;
    if (!(var_s2 & 0x80)) {
        if ((temp_fp == 0) && (var_s3 == 0)) {
            goto block_37;
        }
        if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
            return 0;
        }
        if (var_s2 & 0x8000) {
            if (var_s2 & 0x800) {
                var_v0_3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x48);
            } else {
                var_v0_3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1CF4)) + 0x48);
            }
            temp_v1_2 = var_v0_3 + 0x64;
            var_s3 = ((var_s3 * temp_v1_2) / 100) + ((u32) (var_s3 * temp_v1_2) >> 0x1F);
        }
        temp_v0 = var_s2 & 0x800;
        spB0 = temp_v0;
        var_s5 = 0x64;
        if (temp_v0 == 0) {
            var_s5 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A0C) - *(s32 *)((u8 *)arg0 + 0x1A10)) + 0x64;
        }
        if (var_s5 > 0) {

        } else {
            var_s5 = 0;
        }
        var_a0 = *(s32 *)((u8 *)arg0 + 0x1A24) - 1;
        if (var_a0 > 0) {

        } else {
            var_a0 = 0;
        }
        var_s6 = 0x64 - (var_a0 * 3);
        if (var_s6 >= 2) {

        } else {
            var_s6 = 1;
        }
        if (var_s2 & 0x40) {
            var_s6 = 0x64;
        }
        var_s0 = 0x64;
        if (var_s2 & 1) {
            temp_v1_3 = *(u8 **)((u8 *)arg0 + 0x1354);
            var_s0 = 0x7D;
            if (*(s8 *)((u8 *)temp_v1_3 + 0x2015) != 0) {
                var_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_3 + 0x1358)) + 0x1350);
            } else {
                var_v1 = *(s32 *)((u8 *)temp_v1_3 + 0x1350);
            }
            temp_v1_4 = (unsigned char *)(gBattle + (var_v1 * 0x48));
            *(s16 *)((u8 *)temp_v1_4 + 0x898C) = (s16) (*(s16 *)((u8 *)temp_v1_4 + 0x898C) + 1);
            spE0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350);
            A2d_CallHandler(0x10, &spE0);
        }
        if (var_s2 & 2) {
            var_s0 += 0x19;
        }
        temp_s7 = var_s2 & 0x1000;
        if (temp_s7 != 0) {
            var_s0 = var_s0 >> 1;
        }
        temp_v1_5 = ((var_s3 * var_s5) / 100) + ((u32) (var_s3 * var_s5) >> 0x1F);
        temp_v1_6 = ((temp_v1_5 * var_s6) / 100) + ((u32) (temp_v1_5 * var_s6) >> 0x1F);
        var_s0_2 = ((temp_v1_6 * var_s0) / 100) + ((u32) (temp_v1_6 * var_s0) >> 0x1F);
        if (!(var_s2 & 0x200)) {
            var_s0_2 = M2C_BITWISE(s64, func_001D6470(arg0, 0x51EB851F, (f32) var_s0_2));
        }
        if (temp_fp != 0) {
            temp_f0_2 = (f32) var_s0_2;
            var_s0_2 = M2C_BITWISE(s64, temp_f0_2);
            if (temp_f0_2 < *(f32 *)((u8 *)arg0 + 0x17C0)) {

            }
        }
        if (var_s0_2 >= 2) {

        } else {
            var_s0_2 = 1;
        }
        if (spB0 == 0) {
            *(s32 *)((u8 *)arg0 + 0x1A2C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A2C) + var_s0_2);
            if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
                var_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
            } else {
                var_a0_2 = *(s32 *)((u8 *)arg0 + 0x1350);
            }
            temp_a2 = (unsigned char *)(gBattle + (var_a0_2 * 0x48));
            *(s16 *)((u8 *)temp_a2 + 0x8986) = (s16) (*(s16 *)((u8 *)temp_a2 + 0x8986) + ((s64) (var_s0_2 << 0x30) >> 0x30));
            spE0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350);
            spE4 = *(s32 *)((u8 *)arg0 + 0x1350);
            spE8 = (s32) var_s0_2;
            A2d_CallHandler(9, &spE0, temp_a2);
            if ((temp_s7 == 0) && (*(s8 *)((u8 *)temp_s1 + 0x8ABB) <= 0)) {
                *(s8 *)((u8 *)temp_s1 + 0x8ABB) = 0;
                *(s8 *)((u8 *)arg0 + 0x201C) = 1;
                A2d_CallHandler(0x11, &spE0);
                temp_v1_7 = *(u8 **)((u8 *)arg0 + 0x1354);
                if (*(s8 *)((u8 *)temp_v1_7 + 0x2015) != 0) {
                    var_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_7 + 0x1358)) + 0x1350);
                } else {
                    var_v1_2 = *(s32 *)((u8 *)temp_v1_7 + 0x1350);
                }
                *(s16 *)((u8 *)(gBattle + (var_v1_2 * 0x48)) + 0x89AA) = 1;
            }
        }
        if (temp_s7 != 0) {
            var_s2 &= ~0x4000;
        }
        if (var_s2 & 0x6000) {
            func_001DFC80((Fighter *)(arg0), (s32)((var_s2 & 0x4000) != 0), 0.1f * (f32) var_s0_2);
        }
        *(f32 *)((u8 *)arg0 + 0x17C0) = (f32) (*(f32 *)((u8 *)arg0 + 0x17C0) - (f32) var_s0_2);
        *(s8 *)((u8 *)arg0 + 0x201D) = 0;
        if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
            var_v1_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
        } else {
            var_v1_3 = *(s32 *)((u8 *)arg0 + 0x1350);
        }
        *(s16 *)((u8 *)(gBattle + (var_v1_3 * 0x48)) + 0x89AC) = 0;
        if (!(*(f32 *)((u8 *)arg0 + 0x17C0) <= 0.0f)) {
            if (var_s2 & 0x400) {
                goto block_97;
            }
        } else {
block_97:
            if (!(var_s2 & 4)) {
                if (*(s8 *)((u8 *)arg0 + 0x200B) == 0) {
                    var_f0_2 = 0.0f;
                } else {
                    goto block_101;
                }
            } else {
block_101:
                var_f0_2 = 0.1f;
            }
            *(f32 *)((u8 *)arg0 + 0x17C0) = var_f0_2;
        }
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x17C0);
        var_f0 = 0.0f;
        if (temp_f1 <= 0.0f) {
            spC0 = 1 << *(s32 *)((u8 *)arg0 + 0x1350);
            *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0xC8) = -1;
            var_f0 = func_001C8020(0, &spC0, 1);
        } else {
            var_v0_4 = 0;
            if (*(s32 *)((u8 *)arg0 + 0x1CFC) != 7) {

            } else {
                var_v0_4 = 0;
                if (var_s2 & 0x1804) {

                } else {
                    var_v0_4 = 0;
                    if (*(s8 *)((u8 *)arg0 + 0x1FDA) <= 0) {

                    } else {
                        var_v0_4 = 0;
                        if (*(s8 *)((u8 *)arg0 + 0x1FE4) != 0) {

                        } else {
                            var_f0 = 1000.0f;
                            if (temp_f1 < 1000.0f) {
                                var_f0 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x17CC);
                                if (!(temp_f1 < var_f0)) {
                                    goto block_120;
                                }
                                var_v0_4 = 1;
                            } else {
block_120:
                                var_v0_4 = 0;
                            }
                        }
                    }
                }
            }
            if (var_v0_4 != 0) {
                *(s8 *)((u8 *)arg0 + 0x1FF8) = -1;
            }
        }
        return M2C_BITWISE(s32, var_f0);
    }
block_37:
    return 0;
}
