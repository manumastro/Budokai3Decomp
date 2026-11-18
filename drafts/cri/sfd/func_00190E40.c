/* Draft (not built): func_00190E40 at 0x00190E40, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00190E40.s */

s32 func_0018AF98(s32);                             /* extern */

s32 func_00190E40(u8 *arg0) {
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s2 = arg0 + 0xD54;
    temp_s0 = arg0 + 0x1C68;
    if (*(s32 *)((u8 *)temp_s0 + 0x20) < 0) {
        *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) (func_0018AF98(*(s32 *)((u8 *)temp_s0 + 0x10)) + 4);
    }
    var_v0 = *(s32 *)((u8 *)temp_s2 + 0x24);
    if (var_v0 < 0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xd2f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xd28($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xd37($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0xd30($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0xd3f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0xd38($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0xd47($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0xd40($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x17($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x10($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0x1f($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x18($s2) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xd4f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xd48($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($s2) */);
        var_v0 = M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x28) = (s32) *(s32 *)((u8 *)arg0 + 0xD50);
    }
    return var_v0;
}
