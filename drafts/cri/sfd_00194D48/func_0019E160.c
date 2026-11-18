/* Draft (not built): func_0019E160 at 0x0019E160, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E160.s */

void *func_0019E240(s32);                           /* extern */
s32 memset(void *, s32, s32);           /* extern */

u8 *func_0019E160(s32 arg1, u8 *arg2) {
    u8 *temp_s0;
    u8 *var_v0;

    var_v0 = func_0019E240(arg1 & 0xFF);
    temp_s0 = var_v0;
    if (temp_s0 != NULL) {
        memset(arg2, 0, 0xD);
        var_v0 = (u8 *)1;
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, ($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s1) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, ($s1) */);
        *(s32 *)((u8 *)arg2 + 8) = M2C_UNALIGNED32(*(s32 *)((u8 *)temp_s0 + 8));
    }
    return var_v0;
}
