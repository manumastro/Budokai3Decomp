/* Draft (not built): func_00102238 at 0x00102238, size 0x704, segment sdk/libmpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00102238.c:150: too few arguments to function `func_00109790'
 * Original: asm/nonmatchings/sdk/libmpeg/func_00102238.s */

s32 func_001020B0(void *, s32 *, s32, s32); /* extern */
s32 func_00102B90(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_00109790(void *, s32 *, s32, s32); /* extern */
extern s32 D_0045CDF8;
extern s32 D_0045CE18;
extern s32 D_0045CE38;

void func_00102238(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 var_a3;
    s32 var_a3_2;
    s32 temp_a3;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s7;
    s32 temp_t4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s3_2;
    u8 *temp_fp;
    u8 *temp_s2;

    temp_fp = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $t1 */);
    var_s0 = 0;
    sp40 = arg3;
    temp_t4 = arg3 & 8;
    *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + arg0) + 0x6CC) = 0;
    if ((temp_t4 != 0) || (*(s32 *)((u8 *)arg0 + 0x160) == 2)) {
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x184);
        if (temp_v1 == 3) {
            if ((temp_s4 == 2) || (temp_t4 == 0)) {
                var_a1 = *(s32 *)((u8 *)arg0 + 0x1C8);
                var_a3 = 0;
                goto block_27;
            }
            if (temp_s4 == 1) {
                func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1C8), *(s32 *)((u8 *)temp_fp + 0), 0, *(s32 *)((u8 *)temp_s2 + 0), (s32) *(s32 *)((u8 *)temp_s2 + 4) >> 1, temp_s4, 0);
                func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1C8), *(s32 *)((u8 *)temp_fp + 8), 1, *(s32 *)((u8 *)temp_s2 + 0x10), (s32) *(s32 *)((u8 *)temp_s2 + 0x14) >> 1, temp_s4, 0);
            } else {
                if (temp_s4 == temp_v1) {
                    func_001020B0(arg0, &sp20, M2C_ERROR(/* Read from unset register $t3 */), *(s32 *)((u8 *)temp_s2 + 0));
                    func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1C8), 0, 0, *(s32 *)((u8 *)temp_s2 + 0), (s32) *(s32 *)((u8 *)temp_s2 + 4) >> 1, 1, 0);
                    func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1C8), 1, 0, sp20, sp24, 1, 1);
                    func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1C8), 1, 1, *(s32 *)((u8 *)temp_s2 + 0), (s32) *(s32 *)((u8 *)temp_s2 + 4) >> 1, 1, 0);
                    var_a1 = *(s32 *)((u8 *)arg0 + 0x1C8);
                    var_a3 = 1;
                    goto block_27;
                }
                func_00109790(arg0, &D_0045CDF8, temp_s4);
            }
        } else {
            temp_a3 = *(s32 *)((u8 *)arg0 + 0x1D8);
            temp_s7 = temp_v1 == 2;
            var_s3 = 0;
            sp30 = temp_a3;
            sp34 = *(s32 *)((u8 *)arg0 + 0x1E8);
            sp38 = *(s32 *)((u8 *)arg0 + 0x1DC);
            sp3C = *(s32 *)((u8 *)arg0 + 0x1EC);
            if (*(s32 *)((u8 *)arg0 + 0x160) == 2) {
                if (*(s32 *)((u8 *)arg0 + 0x130) != 0) {
                    var_s3 = temp_s7 != *(s32 *)((u8 *)temp_fp + 0);
                }
            }
            if ((temp_s4 == 1) || (temp_t4 == 0)) {
                var_a1 = *(s32 *)((u8 *)(sp + ((*(s32 *)((u8 *)temp_fp + 0) * 4) + (var_s3 * 8))) + 0x30);
                var_a3 = 0;
                goto block_26;
            }
            if (temp_s4 == 2) {
                func_00102B90(arg0, *(&sp30 + ((*(s32 *)((u8 *)temp_fp + 0) * 4) + (var_s3 * 8))), 0, 0, *(s32 *)((u8 *)temp_s2 + 0), *(s32 *)((u8 *)temp_s2 + 4), 0, 0);
                var_s3_2 = 0;
                if (*(s32 *)((u8 *)arg0 + 0x160) == temp_s4) {
                    if (*(s32 *)((u8 *)arg0 + 0x130) != 0) {
                        var_s3_2 = ((temp_s7 ^ *(s32 *)((u8 *)temp_fp + 8)) == 0) int 0 : 1;
                    }
                }
                var_a3 = 0;
                var_a1 = *(&sp30 + ((*(s32 *)((u8 *)temp_fp + 8) * 4) + (var_s3_2 * 8)));
                goto block_27;
            }
            if (temp_s4 == 3) {
                temp_s3 = (*(s32 *)((u8 *)arg0 + 0x130) == 0) int 0 : 1;
                func_001020B0(arg0, &sp20, M2C_ERROR(/* Read from unset register $t3 */), *(s32 *)((u8 *)temp_s2 + 0));
                func_00102B90(arg0, (&sp30)[temp_s7], 0, 0, *(s32 *)((u8 *)temp_s2 + 0), *(s32 *)((u8 *)temp_s2 + 4), 0, 0);
                temp_v1_2 = temp_s3 * 8;
                var_a1 = *(&sp30 + ((temp_s7 != 0) int temp_v1_2 : (temp_v1_2 + 4)));
                var_a3 = 0;
block_26:
block_27:
                func_00102B90(arg0, var_a1, 0, var_a3);
            } else {
                func_00109790(arg0, &D_0045CE18, temp_s4, temp_a3);
            }
        }
        var_s0 = 1;
    }
    if (sp40 & 4) {
        if (*(s32 *)((u8 *)arg0 + 0x184) == 3) {
            if (temp_s4 == 2) {
                var_a2 = 0;
                var_a3_2 = 0;
            } else {
                func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1CC), *(s32 *)((u8 *)temp_fp + 4), 0, *(s32 *)((u8 *)temp_s2 + 8), (s32) *(s32 *)((u8 *)temp_s2 + 0xC) >> 1, 1, var_s0);
                var_a3_2 = 1;
                var_a2 = *(s32 *)((u8 *)temp_fp + 0xC);
            }
            func_00102B90(arg0, *(s32 *)((u8 *)arg0 + 0x1CC), var_a2, var_a3_2);
            return;
        }
        if (temp_s4 == 1) {
            if (*(s32 *)((u8 *)temp_fp + 4) == 0) {
                var_a1_2 = *(s32 *)((u8 *)arg0 + 0x1DC);
            } else {
                var_a1_2 = *(s32 *)((u8 *)arg0 + 0x1EC);
            }
            func_00102B90(arg0, var_a1_2, 0, 0, *(s32 *)((u8 *)temp_s2 + 8), *(s32 *)((u8 *)temp_s2 + 0xC), 0, var_s0);
            return;
        }
        if (temp_s4 == 2) {
            if (*(s32 *)((u8 *)temp_fp + 4) == 0) {
                var_a1_3 = *(s32 *)((u8 *)arg0 + 0x1DC);
            } else {
                var_a1_3 = *(s32 *)((u8 *)arg0 + 0x1EC);
            }
            func_00102B90(arg0, var_a1_3, 0, 0, *(s32 *)((u8 *)temp_s2 + 8), *(s32 *)((u8 *)temp_s2 + 0xC), 0, var_s0);
            if (*(s32 *)((u8 *)temp_fp + 0xC) == 0) {
                var_a1_4 = *(s32 *)((u8 *)arg0 + 0x1DC);
            } else {
                var_a1_4 = *(s32 *)((u8 *)arg0 + 0x1EC);
            }
            func_00102B90(arg0, var_a1_4, 0, 0, *(s32 *)((u8 *)temp_s2 + 0x18), *(s32 *)((u8 *)temp_s2 + 0x1C), 0, var_s0);
            return;
        }
        func_00109790(arg0, &D_0045CE38, temp_s4);
    }
}
