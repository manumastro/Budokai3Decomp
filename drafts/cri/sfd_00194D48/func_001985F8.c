/* Draft (not built): func_001985F8 at 0x001985F8, size 0xA4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001985F8.s */

s32 func_001985F8(u8 *arg0, u8 *arg1, s32 *arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_t0;

    if (*(s32 *)((u8 *)arg0 + 8) == *(s32 *)((u8 *)arg0 + 4)) {
        *arg2 = 1;
        return -1;
    }
    temp_a0 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_v1 = temp_a0 + 1;
    var_t0 = temp_v1;
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($t1) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($t1) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, ($v0) */);
    *(s32 *)((u8 *)((temp_a0 * 0xC) + *(s32 *)((u8 *)arg0 + 0)) + 8) = (s32) *(s32 *)((u8 *)arg1 + 8);
    temp_a1 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_v1 >= temp_a1) {
        var_t0 = (temp_a0 - temp_a1) + 1;
    }
    *(s32 *)((u8 *)arg0 + 0xC) = var_t0;
    temp_v0 = *(s32 *)((u8 *)arg0 + 8) + 1;
    *(s32 *)((u8 *)arg0 + 8) = temp_v0;
    if (temp_v0 >= temp_a1) {
        *arg2 = 1;
    } else {
        *arg2 = 0;
    }
    return 0;
}
