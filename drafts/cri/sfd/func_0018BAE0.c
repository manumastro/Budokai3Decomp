/* Draft (not built): func_0018BAE0 at 0x0018BAE0, size 0x150, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018BAE0.c:42: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018BAE0.s */

s32 func_0017EE78(s32, s32, s32);                   /* extern */
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_0019A5D8(void *, s32 *, s32 *);            /* extern */

s32 func_0018BAE0(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_s6;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u8 *temp_s2;

    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000162);
    }
    temp_s6 = *(s32 *)((u8 *)arg0 + 0xE00);
    *arg3 = 0;
    temp_s2 = arg0 + 0xCC0;
    var_v0 = func_0019A5D8(arg0, arg1, arg2);
    var_s1 = 0;
    if ((*(s32 *)((u8 *)temp_s2 + 0x158) != 0) && (*arg2 != 1)) {
        var_s3 = 0;
        func_0018D908(sp);
        var_s0 = *(s32 *)((u8 *)temp_s2 + 0x15C);
loop_6:
        var_s3 += 1;
        if (var_s3 < 0x20) {
            var_s1 = func_0017EE78(*(s32 *)((u8 *)(((var_s0 - (((s32) ((var_s0 < 0) int (var_s0 + 0x1F) : var_s0) >> 5) << 5)) * 4) + temp_s2) + 0x160), *arg2, temp_s6);
            if (*arg1 < var_s1) {
                var_s0 -= 1;
                goto loop_6;
            }
        }
        *arg3 = var_s0;
        temp_v0 = *arg1 - var_s1;
        *arg1 = (temp_v0 < 0) int 0 : temp_v0;
        func_0018D920(sp);
    }
    return var_v0;
}
