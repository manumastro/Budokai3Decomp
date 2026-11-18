/* Draft (not built): func_00173810 at 0x00173810, size 0x1A0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00173810.s */

s32 dpmul(s64, s32);                                /* extern */
s32 func_00121930(s32, s64);                        /* extern */
s64 func_00121C78(s32, s32);                        /* extern */
s32 func_00121F28(s32);                             /* extern */
extern s32 D_004651B0;

void func_00173810(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s64 temp_s3;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_v1 != 1) {
        goto block_6;
    }
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x2C4);
    var_s1 = func_00121F28(temp_s0);
    if (temp_s0 >= 0) {
        goto block_3;
    }
    var_s1 = func_00121930(var_s1, 0x83E0 << 0x2F);
block_3:
    temp_s0_2 = *(s32 *)((u8 *)arg0 + 0x2C8);
    var_v0 = func_00121F28(temp_s0_2);
    if (temp_s0_2 >= 0) {
        goto block_5;
    }
    var_v0 = func_00121930(var_v0, 0x83E0 << 0x2F);
block_5:
    *(s64 *)((u8 *)arg0 + 0x2D8) = func_00121C78(var_s1, var_v0);
    *(s64 *)((u8 *)arg0 + 0x2E0) = (s64) (0xFFC0 << 0x2E);
    return;
block_6:
    temp_s0_3 = *(s32 *)((u8 *)arg0 + 0x80);
    temp_s3 = *(&D_004651B0 + (temp_v1 * 8));
    *(s64 *)((u8 *)arg0 + 0x2D8) = temp_s3;
    if (temp_s0_3 != 0) {
        goto block_8;
    }
    goto block_17;
block_8:
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x84);
    if (temp_s1 != 0) {
        goto block_11;
    }
    goto block_17;
block_11:
    var_v0_2 = func_00121F28(temp_s0_3);
    if (temp_s0_3 >= 0) {
        goto block_14;
    }
    var_v0_2 = func_00121930(var_v0_2, 0x83E0 << 0x2F);
block_14:
    temp_s0_4 = dpmul(temp_s3, var_v0_2);
    var_v0_3 = func_00121F28(temp_s1);
    if (temp_s1 >= 0) {
        goto block_16;
    }
    var_v0_3 = func_00121930(var_v0_3, 0x83E0 << 0x2F);
block_16:
    var_a0 = temp_s0_4;
    goto block_22;
block_17:
    var_v0_4 = func_00121F28(*(s32 *)((u8 *)arg0 + 0x2C4));
    if (*(s32 *)((u8 *)arg0 + 0x2C4) >= 0) {
        goto block_19;
    }
    var_v0_4 = func_00121930(var_v0_4, 0x83E0 << 0x2F);
block_19:
    temp_s0_5 = *(s32 *)((u8 *)arg0 + 0x2C8);
    temp_s1_2 = dpmul(*(s64 *)((u8 *)arg0 + 0x2D8), var_v0_4);
    var_v0_3 = func_00121F28(temp_s0_5);
    if (temp_s0_5 >= 0) {
        goto block_21;
    }
    var_v0_3 = func_00121930(var_v0_3, 0x83E0 << 0x2F);
block_21:
    var_a0 = temp_s1_2;
block_22:
    *(s64 *)((u8 *)arg0 + 0x2E0) = func_00121C78(var_a0, var_v0_3);
    return;
}
