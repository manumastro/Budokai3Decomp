/* Draft (not built): func_0019DA68 at 0x0019DA68, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019DA68.s */

s32 func_0019D780();                                /* extern */
s32 memset(void *, s32, s32);           /* extern */

s32 func_0019DA68(u8 *arg0, u8 *arg1) {
    s32 var_v0;
    u8 *temp_s1;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4) + 0x40;
    var_v0 = func_0019D780();
    if (var_v0 != 0) {
        memset(arg1, 0, 0xD);
        var_v0 = 1;
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($s0) */);
        *(s32 *)((u8 *)arg1 + 8) = M2C_UNALIGNED32(*(s32 *)((u8 *)temp_s1 + 8));
    }
    return var_v0;
}
