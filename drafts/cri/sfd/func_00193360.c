/* Draft (not built): func_00193360 at 0x00193360, size 0x118, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00193360.c:32: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00193360.s */

s32 func_00192800(s32, s32, s32);       /* extern */
s32 func_001929B8(void *, s32);                 /* extern */
s32 func_0019AE10(void *, s32 *, s32 *);        /* extern */

void func_00193360(u8 *arg0) {
    s32 sp18;
    s32 sp20;
    s32 sp24;
    u8 *temp_s1;

    temp_s1 = arg0 + 0xDD8;
    if (*(s32 *)((u8 *)arg0 + 0xDD8) == 0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xd8b($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xd84($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xd93($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0xd8c($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0xd9b($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0xd94($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0xda3($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0xd9c($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($sp) */);
        if (func_00192800(3, M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($sp) */), M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($sp) */)) == 0) {
            sp18 = (func_001929B8(arg0, 3) == 0) int 0 : sp18;
        }
        func_0019AE10(sp, &sp20, &sp24);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x17($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x10($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0xde3($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0xddc($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xdeb($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0xde4($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0xdf3($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0xdec($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0xdfb($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0xdf4($s0) */);
        *(s32 *)((u8 *)arg0 + 0xDD8) = 1;
        *(s32 *)((u8 *)temp_s1 + 0x24) = (s32) (sp20 - *(s32 *)((u8 *)(arg0 + 0xCFC) + 0x24));
        *(s32 *)((u8 *)temp_s1 + 0x28) = sp24;
    }
}
