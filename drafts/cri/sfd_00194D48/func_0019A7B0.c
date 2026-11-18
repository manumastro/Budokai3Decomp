/* Draft (not built): func_0019A7B0 at 0x0019A7B0, size 0x94, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0019A7B0.c:13: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A7B0.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_001999E0(s32, s32);                    /* extern */
s32 func_0019A848(s32, s32, s32);                   /* extern */

s32 func_0019A7B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 (*var_v0)(s32, s32, s32);
    s32 temp_s0;

    func_0018D908(sp);
    var_v0 = *(arg0 + 0xCC0 + (func_001999E0(arg0, 0xF) * 4));
    if (var_v0 == NULL) {
        var_v0 = func_0019A848;
    }
    temp_s0 = var_v0(arg0, arg1, arg2);
    func_0018D920(sp);
    return temp_s0;
}
