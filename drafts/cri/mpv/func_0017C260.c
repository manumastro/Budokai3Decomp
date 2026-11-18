/* Draft (not built): func_0017C260 at 0x0017C260, size 0x7C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017C260.s */

s32 func_0017C2E0(s32, s32);            /* extern */
s32 func_0017EB90();                                /* extern */

void func_0017C260(u8 *arg0, u8 *arg1) {
    if (func_0017EB90() != 0) {
        func_0017C2E0(0, 0xFF030204);
        return;
    }
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x257($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x250($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x25f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x258($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($s1) */);
    *(s32 *)((u8 *)arg1 + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0x260);
}
