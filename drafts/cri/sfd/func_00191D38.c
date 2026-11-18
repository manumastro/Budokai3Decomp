/* Draft (not built): func_00191D38 at 0x00191D38, size 0x20C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00191D38.s */

s32 func_0017EEE8(s32, s32);                    /* extern */
extern s32 D_004674D8;
extern s32 D_00467500;
extern s32 D_00467520;
extern s32 D_00467730;

void func_00191D38(s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_t0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t2;
    s32 var_v1;
    u8 *temp_s5;

    temp_v0 = arg1 * 4;
    temp_s4 = *(&D_00467730 + temp_v0);
    temp_s3 = *(&D_004674D8 + temp_v0);
    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_a1 = func_0017EEE8(temp_s4 * 2, 0x015752A0);
    *(s32 *)((u8 *)temp_s5 + 0) = arg1;
    temp_a1_2 = (temp_a1 >> 1) - arg3;
    *(s16 *)((u8 *)temp_s5 + 0x1E) = (s16) (temp_a1 & 1);
    *(s32 *)((u8 *)temp_s5 + 4) = arg2;
    temp_a1_3 = (temp_a1_2 < 0) ? 0 : temp_a1_2;
    if (arg2 != 0) {
        if (temp_s4 != 0x7512) {
            if (temp_s4 == 0xEA24) {
                var_t0 = &D_00467520;
                goto block_7;
            }
            goto block_15;
        }
        var_t0 = &D_00467500;
block_7:
        temp_v0_2 = *(s32 *)((u8 *)var_t0 + 0);
        temp_hi = temp_a1_3 % temp_v0_2;
        temp_v1 = *(s32 *)((u8 *)var_t0 + 4);
        temp_a2 = *(s32 *)((u8 *)var_t0 + 8);
        temp_hi_2 = temp_hi % temp_v1;
        var_t2 = temp_a1_3 / temp_v0_2;
        if (temp_hi_2 < temp_a2) {
            temp_v0_3 = *(s32 *)((u8 *)var_t0 + 0x14);
            var_t1 = 0;
            var_a0 = temp_hi_2 % temp_v0_3;
            var_v1 = temp_hi_2 / temp_v0_3;
            goto block_12;
        }
        temp_v0_4 = *(s32 *)((u8 *)var_t0 + 0xC);
        temp_a1_4 = temp_hi_2 - temp_a2;
        temp_hi_3 = temp_a1_4 % temp_v0_4;
        temp_a2_2 = *(s32 *)((u8 *)var_t0 + 0x10);
        var_t1 = (temp_a1_4 / temp_v0_4) + 1;
        if (temp_hi_3 < temp_a2_2) {
            var_v1 = 0;
            var_a3 = temp_hi_3 + *(s32 *)((u8 *)var_t0 + 0x1C);
        } else {
            temp_v0_5 = *(s32 *)((u8 *)var_t0 + 0x14);
            temp_a1_5 = temp_hi_3 - temp_a2_2;
            var_a0 = temp_a1_5 % temp_v0_5;
            var_v1 = (temp_a1_5 / temp_v0_5) + 1;
block_12:
            var_a3 = var_a0;
        }
        var_t1_2 = (*(s32 *)((u8 *)var_t0 + 0x18) * (temp_hi / temp_v1)) + var_t1;
    } else {
block_15:
        temp_lo = temp_a1_3 / temp_s3;
        var_a3 = temp_a1_3 % temp_s3;
        temp_lo_2 = temp_lo / 60;
        var_v1 = temp_lo % 60;
        var_t2 = temp_lo_2 / 60;
        var_t1_2 = temp_lo_2 % 60;
    }
    *(s32 *)((u8 *)temp_s5 + 0x14) = var_a3;
    *(s32 *)((u8 *)temp_s5 + 8) = var_t2;
    *(s32 *)((u8 *)temp_s5 + 0xC) = var_t1_2;
    *(s32 *)((u8 *)temp_s5 + 0x10) = var_v1;
}
