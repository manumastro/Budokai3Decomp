/* Draft (not built): func_0017B178 at 0x0017B178, size 0xA0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B178.s */

s32 func_0017B048(s32, s32);                /* extern */
s32 func_0017B218();                                /* extern */
extern void *D_00424C38;

s32 func_0017B178(u8 *arg0, u8 *arg1) {
    if (arg0 == NULL) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($s1) */);
        *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)D_00424C38 + 8);
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    if (func_0017B218() != 0) {
        return func_0017B048(0, 0xFF020102);
    }
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xb($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x4($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($s1) */);
    *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
    return 0;
}
