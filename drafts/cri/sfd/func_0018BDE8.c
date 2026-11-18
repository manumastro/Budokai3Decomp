/* Draft (not built): func_0018BDE8 at 0x0018BDE8, size 0xB8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018BDE8.c:17: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018BDE8.s */

s32 func_0018BEA0(void *);                          /* extern */
s32 func_0018C020(s32, s32, void *);            /* extern */
s32 func_0018C128(s32, s32, void *);            /* extern */
s32 func_0018C7B0(s32, s32, void *);            /* extern */
extern s32 D_00467458;

s32 func_0018BDE8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 var_v0;

    var_v0 = func_0018BEA0(sp);
    if (var_v0 != 0) {
        *(s32 *)((u8 *)arg2 + 0x10) = var_v0;
        var_v0 = 1;
        if (var_v0 != -1) {
            if (sp0 > 0) {
                *(s32 *)((u8 *)arg2 + 0x1C) = (s32) (sp0 * 0x32);
            }
            *(s32 **)((u8 *)arg2 + 4) = &D_00467458;
            func_0018C020(arg0, arg1, arg2);
            func_0018C128(arg0, arg1, arg2);
            func_0018C7B0(arg0, arg1, arg2);
            var_v0 = 1;
        }
    }
    return var_v0;
}
