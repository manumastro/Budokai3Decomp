/* Draft (not built): func_0019EBC0 at 0x0019EBC0, size 0x50, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019EBC0.s */

extern s32 D_00426B50;

s32 *func_0019EBC0(void) {
    s32 *var_a0;
    s32 *var_v0;
    s32 var_a2;

    var_a2 = 0;
    if (*(s32 *)((u8 *)(&D_00426B50) + 4) > 0) {
        var_a0 = &D_00426B50 + 8;
loop_2:
        var_v0 = var_a0;
        var_a0 += 0x18;
        if (*var_a0 != 0) {
            var_a2 += 1;
            if (var_a2 >= *(s32 *)((u8 *)(&D_00426B50) + 4)) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = NULL;
    }
    return var_v0;
}
