/* Draft (not built): func_0017B5B8 at 0x0017B5B8, size 0x108, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0017B5B8.c:44: parse error before "int"
 * Original: asm/nonmatchings/cri/mpv/func_0017B5B8.s */

s32 func_0017B420(s32);                             /* extern */

s32 func_0017B5B8(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    s8 var_v0_2;
    u32 temp_s2;
    u32 var_s1;

    var_v1 = 0;
    var_s1 = arg0;
    temp_s2 = var_s1 + arg1;
    if (var_s1 < temp_s2) {
        var_v0_2 = *var_s1;
loop_2:
        var_s1 += 1;
        switch (var_v1) {                           /* irregular */
        case 3:
            temp_s0 = var_s1 - 4;
            var_v0 = temp_s0;
            if (!(arg2 & func_0017B420(temp_s0))) {
                var_v1 = 0;
            default:
block_21:
                var_v0_3 = var_s1 < temp_s2;
block_22:
                if (var_v0_3 != 0) {
                    var_v0_2 = *var_s1;
                    goto loop_2;
                }
                goto block_25;
            }
            break;
        case 0:
            if (var_v0_2 == 0) {
                var_v1 = 1;
            }
            goto block_21;
        case 1:
            var_v1 = (var_v0_2 != 0) int 0 : 2;
            goto block_21;
        case 2:
            if (var_v0_2 == 1) {
                var_v1 = 3;
                goto block_21;
            }
            var_v0_3 = var_s1 < temp_s2;
            if (var_v0_2 != 0) {
                var_v1 = 0;
            }
            goto block_22;
        }
    } else {
block_25:
        var_v0 = 0;
    }
    return var_v0;
}
