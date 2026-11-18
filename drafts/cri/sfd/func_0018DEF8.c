/* Draft (not built): func_0018DEF8 at 0x0018DEF8, size 0xDC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018DEF8.s */

s32 func_0017AAF0(s32);                             /* extern */
s32 func_0018DFD8(s32, s32);                        /* extern */
s32 func_0018E018(void *, s32);                     /* extern */

void func_0018DEF8(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s0 = arg2;
    *arg3 = 0;
    var_s2 = *(s32 *)((u8 *)arg0 + 0x28);
    var_s1 = arg1;
    if ((var_s0 < (var_s2 + 3)) || (func_0018DFD8(var_s1, var_s2) == 0)) {
        var_s2 = 0;
        if (var_s0 >= 4) {
loop_4:
            temp_a0 = var_s1;
            var_s1 += 1;
            if (!(func_0017AAF0(temp_a0) & 0xD0000)) {
                var_s0 -= 1;
                var_s2 += 1;
                if (var_s0 < 4) {
                    goto block_6;
                }
                goto loop_4;
            }
        } else {
block_6:
            if ((u32) (var_s0 - 1) < 3U) {
                var_s2 = (func_0018E018(arg0, var_s1 + var_s0) != 0) ? (var_s2 + var_s0) : var_s2;
            }
        }
    }
    *arg3 = var_s2;
}
