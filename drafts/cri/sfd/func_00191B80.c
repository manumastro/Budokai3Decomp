/* Draft (not built): func_00191B80 at 0x00191B80, size 0xC0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00191B80.c:31: too few arguments to function `func_0019AE10'
 * Original: asm/nonmatchings/cri/sfd/func_00191B80.s */

s32 func_001999E0(void *, s32);                 /* extern */
s32 func_0019AE10(void *, s32 *, s32 *, s32); /* extern */

s32 func_00191B80(u8 *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0xD28) != 0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xce3($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xcdc($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xceb($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0xce4($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0xcf3($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0xcec($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0xcfb($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0xcf4($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($sp) */);
        func_0019AE10(sp, &sp20, &sp24, M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($sp) */));
        func_0019AE10(arg0 + 0xD2C, &sp28, &sp24);
        temp_v1 = func_001999E0(arg0, 0x35) * sp24;
        var_v0 = 1;
        if (sp28 < sp20) {
            var_v0 = (sp20 < (sp28 + temp_v1)) == 0;
        }
    }
    return var_v0;
}
