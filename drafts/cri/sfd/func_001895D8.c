/* Draft (not built): func_001895D8 at 0x001895D8, size 0xBC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001895D8.c:22: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001895D8.s */

s32 func_00189698(s32, s32, void *, s32 *);     /* extern */
s32 func_0019AA08();                                /* extern */

s32 func_001895D8(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 sp4;
    s32 *temp_s1;
    s32 temp_s2;
    s32 var_a0;
    s32 var_v0;

    temp_s1 = *(s32 **)((u8 *)arg0 + 0x1CB4);
    temp_s2 = *(s32 *)((u8 *)temp_s1 + 0);
    var_v0 = func_0019AA08();
    if (var_v0 != 0) {
        if (*(s32 *)((u8 *)arg0 + 0x48) != 4) {
            var_a0 = *(s32 *)((u8 *)temp_s1 + 0x24);
        } else {
            func_00189698(arg0 + 0xFA0, temp_s2, sp, &sp4);
            var_a0 = *(s32 *)((u8 *)temp_s1 + 0x24);
            if (var_a0 < sp0) {
                var_a0 = sp0;
                *(s32 *)((u8 *)temp_s1 + 0x24) = sp0;
                *(s32 *)((u8 *)temp_s1 + 0x28) = sp4;
            }
        }
        *arg1 = var_a0;
        var_v0 = 0;
        *arg2 = *(s32 *)((u8 *)temp_s1 + 0x28);
    }
    return var_v0;
}
