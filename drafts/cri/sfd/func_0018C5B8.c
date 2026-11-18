/* Draft (not built): func_0018C5B8 at 0x0018C5B8, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018C5B8.c:23: `spA' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018C5B8.s */

s32 func_0018C660(void *, s32, s32);                /* extern */
extern s32 D_004268C8;
extern s32 D_004672A0;
extern s32 D_004672B0;

s32 func_0018C5B8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 var_v0;

    var_v0 = func_0018C660(sp, arg0, arg1);
    if (var_v0 != 0) {
        var_v0 = 1;
        *(s32 *)((u8 *)arg2 + 0xC) = 0;
        *(u8 *)((u8 *)arg2 + 0x28) = (u8) *(&D_004672A0 + (sp6 * 4));
        *(s32 *)((u8 *)arg2 + 0x2C) = (s32) *(&D_004672B0 + (sp3 * 4));
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, ($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($a3) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, ($a3) */);
        *(s8 *)((u8 *)(&D_004268C8) + 8) = sp8;
        *(s8 *)((u8 *)(&D_004268C8) + 9) = sp9;
        *(s8 *)((u8 *)(&D_004268C8) + 0xA) = spA;
    }
    return var_v0;
}
