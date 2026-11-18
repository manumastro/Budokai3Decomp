/* Draft (not built): func_0019F580 at 0x0019F580, size 0x50, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F580.s */

extern s32 D_00426C20;

s32 *func_0019F580(void) {
    s32 *var_a0;
    s32 *var_v0;
    s32 var_a2;

    var_a2 = 0;
    if (*(s32 *)((u8 *)(&D_00426C20) + 4) > 0) {
        var_a0 = &D_00426C20 + 0x18;
loop_2:
        var_v0 = var_a0;
        var_a0 += 0x90;
        if (*var_a0 != 0) {
            var_a2 += 1;
            if (var_a2 >= *(s32 *)((u8 *)(&D_00426C20) + 4)) {
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
