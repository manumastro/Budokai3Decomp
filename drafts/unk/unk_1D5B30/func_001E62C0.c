/* Draft (not built): func_001E62C0 at 0x001E62C0, size 0x418, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 190 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x428, original 0x418
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E62C0.s */

// src/unk/unk_1D5B30.c func_001E62C0 size diff=190/266
s32 amMotion_Update(s8 *, s32, void *, s32);
s32 func_0013C1E0(s8 *, s32, f32);
s32 func_001C9DB0(s32, s32, s32);
extern void amMotion_BuildMatrices(char *);
void func_001E62C0(u8 *arg0, f32 fparg0) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s8 *temp_a3_2;
    s8 *temp_a3_3;
    s8 *temp_s0;
    u8 *temp_a0_2;
    u8 *temp_a0_4;
    u8 *temp_a1;
    u8 *temp_a2;

    temp_s0 = *(s8 **)((u8 *)arg0 + 0x538);
    temp_a1 = *(u8 **)((u8 *)arg0 + 0x568);
    *(s32 *)((u8 *)temp_s0 + 0x414) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x414) & ~0xC);
    if ((*(s32 *)((u8 *)arg0 + 0x548) == 0) && (*(s16 *)((u8 *)temp_a1 + 0xCAC) == 0xF)) {
        if (*(s8 *)((u8 *)temp_a1 + 0x1FF9) != 1) {
            goto block_4;
        }
    } else {
block_4:
        temp_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x524)) + 0x10);
        if (temp_v1 & 8) {
            *(s32 *)((u8 *)temp_s0 + 0x414) = (s32) ((u64) ((s64) *(s32 *)((u8 *)temp_s0 + 0x414) << 0x20) >> 0x20);
            var_v0 = *(s32 *)((u8 *)temp_s0 + 0x414) | 8;
            goto block_9;
        }
        if (!(temp_v1 & 4)) {
            *(s32 *)((u8 *)temp_s0 + 0x414) = (s32) ((u64) ((s64) *(s32 *)((u8 *)temp_s0 + 0x414) << 0x20) >> 0x20);
            var_v0 = *(s32 *)((u8 *)temp_s0 + 0x414) | 4;
block_9:
            *(s32 *)((u8 *)temp_s0 + 0x414) = var_v0;
        }
    }
    temp_a3 = *(s32 *)((u8 *)arg0 + 0x604);
    temp_a2 = (u8 *)(temp_s0 + 0x41C);
    if (*(s32 *)((u8 *)temp_s0 + 0x41C) != temp_a3) {
        var_a1 = 0;
        if (*(s32 *)((u8 *)temp_s0 + 0x418) > 0) {
            var_a0 = 0;
            do {
                var_a1 += 1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a2 + 0x10) + var_a0) + 0x30) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a2 + 0x10) + var_a0) + 0x34) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a2 + 0x10) + var_a0) + 0x38) = -1;
                var_a0 += 0x40;
            } while (var_a1 < *(s32 *)((u8 *)temp_s0 + 0x418));
        }
        *(s32 *)((u8 *)temp_a2 + 0xC) = 0xBF800000;
    }
    *(s32 *)((u8 *)temp_s0 + 0x41C) = temp_a3;
    *(f32 *)((u8 *)temp_s0 + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x608);
    amMotion_Update(temp_s0, 0, temp_a2, temp_a3);
    temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x62C);
    if (temp_v1_2 >= 0) {
        temp_v0 = temp_v1_2 | 0x80000;
        temp_a0 = (temp_v0 >> 0x10) - 1;
        temp_a1_2 = temp_v0 & 0xFFFF;
        if (temp_a0 < 0) {
            var_v1 = 0;
        } else {
            var_v1 = 0;
            if (temp_a0 >= 0x10) {

            } else {
                temp_a0_2 = *(u8 **)((u8 *)((temp_a0 * 4) + temp_s0) + 0x46C);
                var_v1 = 0;
                if (temp_a0_2 == NULL) {

                } else {
                    var_v1_2 = -1;
                    if (temp_a0_2 != NULL) {
                        var_v1_2 = *(s32 *)((u8 *)temp_a0_2 + 0x10);
                    }
                    if (temp_a1_2 >= var_v1_2) {
                        var_v1 = 0;
                    } else {
                        var_v1 = 0;
                        if (*(s32 *)((u8 *)((temp_a1_2 * 0x10) + *(s32 *)((u8 *)temp_a0_2 + 0x14)) + 0xC) == 0) {

                        } else {
                            var_v1 = 1;
                        }
                    }
                }
            }
        }
        if (var_v1 != 0) {
            temp_a3_2 = temp_s0 + 0x41C;
            if (*(s32 *)((u8 *)temp_s0 + 0x41C) != temp_v0) {
                var_a2 = 0;
                if (*(s32 *)((u8 *)temp_s0 + 0x418) > 0) {
                    var_a1_2 = 0;
                    do {
                        var_a2 += 1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1_2) + 0x30) = -1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1_2) + 0x34) = -1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1_2) + 0x38) = -1;
                        var_a1_2 += 0x40;
                    } while (var_a2 < *(s32 *)((u8 *)temp_s0 + 0x418));
                }
                *(s32 *)((u8 *)temp_a3_2 + 0xC) = 0xBF800000;
            }
            *(s32 *)((u8 *)temp_s0 + 0x41C) = temp_v0;
            *(f32 *)((u8 *)temp_s0 + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x630);
            amMotion_Update(temp_s0, 1, 0, 0);
        }
    }
    temp_v1_3 = *(s32 *)((u8 *)arg0 + 0x638);
    if (temp_v1_3 >= 0) {
        temp_v0_2 = ((*(s32 *)((u8 *)arg0 + 0x634) + 1) << 0x10) | temp_v1_3;
        temp_a0_3 = (temp_v0_2 >> 0x10) - 1;
        temp_a1_3 = temp_v0_2 & 0xFFFF;
        if (temp_a0_3 < 0) {
            var_v1_3 = 0;
        } else {
            var_v1_3 = 0;
            if (temp_a0_3 >= 0x10) {

            } else {
                temp_a0_4 = *(u8 **)((u8 *)((temp_a0_3 * 4) + temp_s0) + 0x46C);
                var_v1_3 = 0;
                if (temp_a0_4 == NULL) {

                } else {
                    var_v1_4 = -1;
                    if (temp_a0_4 != NULL) {
                        var_v1_4 = *(s32 *)((u8 *)temp_a0_4 + 0x10);
                    }
                    if (temp_a1_3 >= var_v1_4) {
                        var_v1_3 = 0;
                    } else {
                        var_v1_3 = 0;
                        if (*(s32 *)((u8 *)((temp_a1_3 * 0x10) + *(s32 *)((u8 *)temp_a0_4 + 0x14)) + 0xC) == 0) {

                        } else {
                            var_v1_3 = 1;
                        }
                    }
                }
            }
        }
        if (var_v1_3 != 0) {
            temp_a3_3 = temp_s0 + 0x41C;
            if (*(s32 *)((u8 *)temp_s0 + 0x41C) != temp_v0_2) {
                var_a2_2 = 0;
                if (*(s32 *)((u8 *)temp_s0 + 0x418) > 0) {
                    var_a1_3 = 0;
                    do {
                        var_a2_2 += 1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_3 + 0x10) + var_a1_3) + 0x30) = -1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_3 + 0x10) + var_a1_3) + 0x34) = -1;
                        *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_3 + 0x10) + var_a1_3) + 0x38) = -1;
                        var_a1_3 += 0x40;
                    } while (var_a2_2 < *(s32 *)((u8 *)temp_s0 + 0x418));
                }
                *(s32 *)((u8 *)temp_a3_3 + 0xC) = 0xBF800000;
            }
            *(s32 *)((u8 *)temp_s0 + 0x41C) = temp_v0_2;
            *(f32 *)((u8 *)temp_s0 + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x63C);
            amMotion_Update(temp_s0, 1, 0, 0);
        }
    }
    func_0013C1E0(temp_s0, 0, fparg0);
    if (*(s32 *)((u8 *)arg0 + 0x624) != -2) {
        func_001E7240(arg0);
        if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
            func_001C9DB0(*(s32 *)((u8 *)arg0 + 0x540), *(s32 *)((u8 *)arg0 + 0x530), 0);
        }
    }
    amMotion_BuildMatrices((char *)(temp_s0));
}
