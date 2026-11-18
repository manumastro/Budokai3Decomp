/* Draft (not built): func_0018D7A8 at 0x0018D7A8, size 0xC8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D7A8.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
extern s32 D_004268E0;

s32 func_0018D7A8(u8 *arg0, u8 *arg1) {
    if (arg0 == NULL) {
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x1a3($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x19c($v0) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x1ab($v0) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x1a4($v0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($s1) */);
        *(s32 *)((u8 *)arg1 + 0x10) = (s32) *(s32 *)((u8 *)(&D_004268E0) + 0x1AC);
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000102);
    }
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x993($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x98c($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x99b($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x994($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s1) */);
    *(s32 *)((u8 *)arg1 + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0x99C);
    return 0;
}
