/* Draft (not built): func_0017ABC0 at 0x0017ABC0, size 0x68, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 22 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017ABC0.s */

u8 *func_0017ABC0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    u8 *var_a0;
    u8 *var_v0;

    var_a0 = arg0;
    var_a3 = 0;
    if (arg1 > 3) {
loop_2:
        if ((*(u8 *)((u8 *)var_a0 + 0) != 0) || (*(u8 *)((u8 *)var_a0 + 1) != 0) || (*(u8 *)((u8 *)var_a0 + 2) != 1) || (var_v0 = var_a0, (*(u8 *)((u8 *)var_a0 + 3) != (arg2 & 0xFF)))) {
            var_a3 += 1;
            var_a0 += 1;
            if ((var_a3 + 3) >= arg1) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_v0 = NULL;
    }
    return var_v0;
}
