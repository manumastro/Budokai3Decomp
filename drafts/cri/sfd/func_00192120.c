/* Draft (not built): func_00192120 at 0x00192120, size 0x144, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00192120.c:28: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00192120.s */

s32 func_0019AE10(void *, s32 *, s32 *, s32); /* extern */

s32 func_00192120(u8 *arg0) {
    s32 sp20;
    s32 sp24;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_s0;

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
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x17($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x10($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x1f($sp) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x18($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0xd8b($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0xd84($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xd93($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0xd8c($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0xd9b($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0xd94($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0xda3($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0xd9c($s0) */);
    temp_a2 = arg0 + 0xD80;
    temp_s0 = arg0 + 0xD28;
    temp_v1 = sp20 - *(s32 *)((u8 *)(arg0 + 0xCFC) + 0x24);
    *(s32 *)((u8 *)arg0 + 0xD80) = 1;
    *(s32 *)((u8 *)temp_a2 + 0x24) = temp_v1;
    *(s32 *)((u8 *)temp_a2 + 0x28) = sp24;
    var_v0 = *(s32 *)((u8 *)temp_s0 + 0x24);
    if (temp_v1 >= var_v0) {
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, ($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0xf($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0x8($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x17($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x10($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x1f($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x18($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, ($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0xf($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0x8($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x17($s0) */);
        var_v0 = M2C_ERROR(/* unknown instruction: sdr $v0, 0x10($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x1f($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x18($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x27($a2) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x20($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x27($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x20($s0) */);
        *(s32 *)((u8 *)temp_s0 + 0x28) = (s32) *(s32 *)((u8 *)temp_a2 + 0x28);
    }
    return var_v0;
}
