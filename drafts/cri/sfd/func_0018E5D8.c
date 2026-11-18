/* Draft (not built): func_0018E5D8 at 0x0018E5D8, size 0x84, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018E5D8.c:18: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018E5D8.s */

s32 func_0018F008(s32, void *, s32 *);          /* extern */
s32 func_001999E0(s32);                         /* extern */

s32 func_0018E5D8(s32 arg0, s32 arg1) {
    s32 sp4;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_001999E0(0x3B);
    var_v0 = arg1;
    if ((temp_v0 != 1) && (temp_v0 >= 2)) {
        if (temp_v0 != 2) {
            return arg1;
        }
        func_0018F008(arg0, sp, &sp4);
        var_v0 = (sp4 < 2) int arg1 : temp_v0;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
