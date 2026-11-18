/* Draft (not built): func_0017F5E8 at 0x0017F5E8, size 0x164, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_0017F5E8.s */

s32 MWSFD_Malloc(s32, s32);                         /* extern */
s32 MwsfdCrePrm(s32);                               /* extern */
extern s32 D_00425218;
extern s32 D_0042521C;
extern s32 D_00425228;

s32 func_0017F5E8(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;

    var_s4 = 0;
    temp_s1 = *(s32 *)((u8 *)arg1 + 8);
    temp_s0 = *(s32 *)((u8 *)arg1 + 0xC);
    temp_s3 = *(s32 *)((u8 *)arg1 + 0x10);
    temp_s1_2 = (s32) ((temp_s1 < 0) ? (temp_s1 + 0xF) : temp_s1) >> 4;
    temp_v1 = (s32) ((temp_s0 < 0) ? (temp_s0 + 0xF) : temp_s0) >> 4;
    if (MwsfdCrePrm(*(s32 *)((u8 *)arg1 + 0x24)) != 2) {
        goto block_2;
    }
    var_v0_2 = (temp_s1_2 * temp_v1) << 0xA;
    goto block_3;
block_2:
    var_v0_2 = temp_s1_2 * temp_v1 * 0x180;
block_3:
    temp_s2 = var_v0_2 + 0x40;
    if (D_00425218 == 0) {
        goto block_16;
    }
    if (D_00425218 >= (temp_s3 + 2)) {
        goto block_6;
    }
    var_s4 = -1;
    goto block_19;
block_6:
    var_s0 = 0;
    if (D_0042521C >= temp_s2) {
        goto loop_11;
    }
    var_s4 = -1;
    goto block_19;
block_10:
    var_s0 += 1;
    temp_a0 = *(&D_00425228 + temp_v0);
    *(temp_v0 + arg2) = temp_a0;
    var_s4 = (temp_a0 == 0) ? -1 : var_s4;
loop_11:
    if (var_s0 >= temp_s3) {
        goto block_13;
    }
    temp_v0 = var_s0 * 4;
    goto block_10;
block_13:
    goto block_19;
block_16:
    var_v0 = 0;
    if (temp_s3 <= 0) {
        goto block_20;
    }
    var_s0_2 = temp_s3;
    var_s1 = arg2;
loop_18:
    temp_v0_2 = MWSFD_Malloc(arg0, temp_s2);
    var_s0_2 -= 1;
    *var_s1 = temp_v0_2;
    var_s1 += 4;
    var_s4 = (temp_v0_2 == 0) ? -1 : var_s4;
    if (var_s0_2 != 0) {
        goto loop_18;
    }
block_19:
    var_v0 = var_s4;
block_20:
    return var_v0;
}
