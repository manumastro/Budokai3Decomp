/* Draft (not built): func_00195AA0 at 0x00195AA0, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195AA0.s */

s32 func_0018D650(void *, s32, s32);        /* extern */
extern s32 D_00492A40;

s32 func_00195AA0(s32 arg1, u8 *arg2) {
    D_00492A40 = 1;
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($t0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($t0) */);
    M2C_ERROR(/* unknown instruction: ldl $t1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, ($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x109f($v0) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, 0x1098($v0) */);
    func_0018D650(arg2, 0xFF000F40, arg1);
    return 1;
}
