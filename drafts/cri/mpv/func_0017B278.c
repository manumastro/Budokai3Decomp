/* Draft (not built): func_0017B278 at 0x0017B278, size 0x58, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B278.s */

extern void *D_00424C38;

s32 *func_0017B278(void) {
    s32 *var_a0;
    s32 *var_v0;
    s32 temp_a1;
    s32 var_a2;
    s32 var_v1;

    var_a2 = 0;
    temp_a1 = *(s32 *)((u8 *)D_00424C38 + 0xC);
    if (temp_a1 > 0) {
        var_a0 = D_00424C38 + 0x10;
        var_v1 = *(s32 *)((u8 *)D_00424C38 + 0x10);
loop_2:
        var_v0 = var_a0;
        var_a0 += 0xD4;
        if (var_v1 != 1) {
            var_a2 += 1;
            if (var_a2 < temp_a1) {
                var_v1 = *var_a0;
                goto loop_2;
            }
            goto block_6;
        }
    } else {
block_6:
        var_v0 = NULL;
    }
    return var_v0;
}
