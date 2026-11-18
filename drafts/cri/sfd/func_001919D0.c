/* Draft (not built): func_001919D0 at 0x001919D0, size 0xCC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001919D0.c:13: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001919D0.s */

s32 func_0019AE10(s32, void *, s32 *);          /* extern */

s32 func_001919D0(u8 *arg0, u8 *arg1) {
    s32 sp4;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_s0;

    func_0019AE10(arg1 + 0x10, sp, &sp4);
    temp_s0 = arg0 + 0xCC0;
    temp_v1 = sp0 - *(s32 *)((u8 *)temp_s0 + 0x60);
    *(s32 *)((u8 *)arg1 + 0xC) = 1;
    *(s32 *)((u8 *)arg1 + 0x30) = temp_v1;
    *(s32 *)((u8 *)arg1 + 0x34) = sp4;
    var_v0 = *(s32 *)((u8 *)temp_s0 + 0x8C);
    if (temp_v1 >= var_v0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x13($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xc($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x1b($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x14($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x23($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x1c($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x2b($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x24($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0xd2f($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0xd28($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xd37($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0xd30($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0xd3f($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0xd38($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0xd47($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0xd40($s2) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x33($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x2c($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0xd4f($s2) */);
        var_v0 = M2C_ERROR(/* unknown instruction: sdr $v0, 0xd48($s2) */);
        *(s32 *)((u8 *)arg0 + 0xD50) = (s32) *(s32 *)((u8 *)arg1 + 0x34);
    }
    return var_v0;
}
