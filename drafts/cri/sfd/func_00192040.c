/* Draft (not built): func_00192040 at 0x00192040, size 0xE0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00192040.c:27: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00192040.s */

s32 func_0019AE10(void *, s32 *, s32 *, s32, s32); /* extern */

void func_00192040(u8 *arg0) {
    s32 sp20;
    s32 sp24;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCFC;
    if (*(s32 *)((u8 *)arg0 + 0xCFC) == 0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xce3($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xcdc($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xceb($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0xce4($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0xcf3($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0xcec($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0xcfb($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0xcf4($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($sp) */);
        func_0019AE10(sp, &sp20, &sp24, M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($sp) */), 0);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, ($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0xd07($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0xd00($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0xd0f($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0xd08($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0xd17($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0xd10($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0xd1f($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0xd18($s1) */);
        *(s32 *)((u8 *)arg0 + 0xCFC) = 1;
        *(s32 *)((u8 *)temp_s0 + 0x24) = sp20;
        *(s32 *)((u8 *)temp_s0 + 0x28) = sp24;
    }
}
