/* Draft (not built): func_0017B6C0 at 0x0017B6C0, size 0x110, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017B6C0.c:52: warning: passing arg 1 of `func_0017B420' makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/mpv/func_0017B6C0.s */

s32 func_0017B420(void *);                          /* extern */

s8 *func_0017B6C0(s8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0_2;
    s32 var_v1;
    s8 *var_s1;
    s8 temp_v0;
    u32 temp_s2;
    u32 var_s0;
    u32 var_v0;

    var_v1 = 0;
    var_s0 = arg1;
    temp_s2 = var_s0 + arg2;
    var_s1 = arg0;
    if (var_s0 < temp_s2) {
loop_2:
        temp_v0 = *var_s0;
        var_s0 += 1;
        *var_s1 = temp_v0;
        var_s1 += 1;
        switch (var_v1) {                           /* irregular */
        case 0:
            if (temp_v0 == 0) {
                var_v1 = 1;
            }
        default:
block_19:
            var_v0_2 = var_s0 < temp_s2;
block_20:
            if (var_v0_2 == 0) {
                goto block_21;
            }
            goto loop_2;
        case 1:
            var_v1 = (temp_v0 != 0) int 0 : 2;
            goto block_19;
        case 2:
            if (temp_v0 == 1) {
                var_v1 = 3;
                goto block_19;
            }
            var_v0_2 = var_s0 < temp_s2;
            if (temp_v0 != 0) {
                var_v1 = 0;
            }
            goto block_20;
        case 3:
            var_v0 = var_s0;
            if (!(arg3 & func_0017B420(var_s0 - 4))) {
                var_v1 = 0;
                goto block_19;
            }
            break;
        }
    } else {
block_21:
        var_v0 = var_s0;
    }
    return (s8 *) var_v0;
}
