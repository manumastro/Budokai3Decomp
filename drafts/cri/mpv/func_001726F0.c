/* Draft (not built): func_001726F0 at 0x001726F0, size 0xB4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_001726F0.s */

extern s32 D_004233C8;

void func_001726F0(s32 arg0) {
    s32 *var_v1;
    s32 var_a0;
    u8 *temp_v0;

    var_a0 = arg0;
    var_v1 = &D_004233C8;
    temp_v0 = &D_004233C8 + 0x1800;
    if ((var_a0 | (s32) &D_004233C8) & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, ($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a0) */);
            var_v1 += 0x20;
        } while (var_v1 != temp_v0);
        return;
    }
    do {
        *(s64 *)((u8 *)var_a0 + 0) = (s64) *(s64 *)((u8 *)var_v1 + 0);
        *(s64 *)((u8 *)var_a0 + 8) = (s64) *(s64 *)((u8 *)var_v1 + 8);
        *(s64 *)((u8 *)var_a0 + 0x10) = (s64) *(s64 *)((u8 *)var_v1 + 0x10);
        *(s64 *)((u8 *)var_a0 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
        var_v1 += 0x20;
        var_a0 += 0x20;
    } while (var_v1 != temp_v0);
}
