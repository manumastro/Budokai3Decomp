/* Draft (not built): func_0018CBE8 at 0x0018CBE8, size 0xD0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 116 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018CBE8.s */

s32 func_0018CBE8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_v0 = var_a1 + 0x880;
    if ((var_a1 | var_a0) & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a1) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, ($a1) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a1) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a1) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($a1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($a1) */);
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($a1) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($a1) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a0) */);
            var_a1 += 0x20;
            var_a0 += 0x20;
        } while (var_a1 != temp_v0);
    } else {
        do {
            *(s64 *)((u8 *)var_a0 + 0) = (s64) *(s64 *)((u8 *)var_a1 + 0);
            *(s64 *)((u8 *)var_a0 + 8) = (s64) *(s64 *)((u8 *)var_a1 + 8);
            *(s64 *)((u8 *)var_a0 + 0x10) = (s64) *(s64 *)((u8 *)var_a1 + 0x10);
            *(s64 *)((u8 *)var_a0 + 0x18) = (s64) *(s64 *)((u8 *)var_a1 + 0x18);
            var_a1 += 0x20;
            var_a0 += 0x20;
        } while (var_a1 != temp_v0);
    }
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a0) */);
    *(s32 *)((u8 *)var_a0 + 0x10) = (s32) *(s32 *)((u8 *)var_a1 + 0x10);
    return M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
}
