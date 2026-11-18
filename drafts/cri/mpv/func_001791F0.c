/* Draft (not built): func_001791F0 at 0x001791F0, size 0x120, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001791F0.c:18: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mpv/func_001791F0.s */

s32 func_00179310(s32, s32, s32, void *);           /* extern */

s32 func_001791F0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 sp4;
    s32 *temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg2;
    var_s1 = arg1;
    temp_s2 = M2C_ERROR(/* Read from unset register $t0 */);
loop_1:
    if (var_s0 >= 4) {
        temp_v0 = func_00179310(arg0, var_s1, var_s0, sp);
        var_s1 += sp0;
        var_s0 -= sp0;
        *arg3 += sp0;
        *temp_s2 |= sp4;
        if (temp_v0 != 0) {
            goto loop_1;
        }
    }
    if (*temp_s2 & 0x20000) {
        if (*(s32 *)((u8 *)(arg0 + 0x20) + 8) == 0) {

        }
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x1f($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x18($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($v0) */);
    }
    return 0;
}
