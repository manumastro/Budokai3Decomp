/* Draft (not built): func_0017C590 at 0x0017C590, size 0x104, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017C590.s */

s32 func_0017C2E0(s32, s32);                /* extern */
s32 func_0017EB90();                                /* extern */

s32 func_0017C590(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a1;
    s32 var_v1;

    if (func_0017EB90() != 0) {
        return func_0017C2E0(0, 0xFF03020C);
    }
    var_a1 = arg1;
    var_v1 = arg0 + 0x1D0;
    temp_a0 = arg0 + 0x250;
    if ((var_v1 | var_a1) & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a1) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($a1) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($a1) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a1) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a1) */);
            var_v1 += 0x20;
        } while (var_v1 != temp_a0);
    } else {
        do {
            *(s64 *)((u8 *)var_a1 + 0) = (s64) *(s64 *)((u8 *)var_v1 + 0);
            *(s64 *)((u8 *)var_a1 + 8) = (s64) *(s64 *)((u8 *)var_v1 + 8);
            *(s64 *)((u8 *)var_a1 + 0x10) = (s64) *(s64 *)((u8 *)var_v1 + 0x10);
            *(s64 *)((u8 *)var_a1 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
            var_v1 += 0x20;
            var_a1 += 0x20;
        } while (var_v1 != temp_a0);
    }
    return 0;
}
