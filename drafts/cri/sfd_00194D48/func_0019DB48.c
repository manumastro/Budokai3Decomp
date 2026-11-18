/* Draft (not built): func_0019DB48 at 0x0019DB48, size 0x90, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019DB48.s */

s32 func_0019D7C8();                                /* extern */
s32 memset(s32, s32, s32);              /* extern */

s32 func_0019DB48(u8 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = func_0019D7C8();
    if (var_v0 != 0) {
        memset(arg1, 0, 0x21);
        var_v0 = 1;
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x17($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x10($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0x17($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x10($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($s0) */);
    }
    return var_v0;
}
