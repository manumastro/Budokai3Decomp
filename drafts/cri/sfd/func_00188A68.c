/* Draft (not built): func_00188A68 at 0x00188A68, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00188A68.c:16: `sp' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00188A68.s */

s32 func_0015FC00(s32, s32, void *);                /* extern */
s32 func_00188B20(void *, s32, s32);                /* extern */
s32 func_0018D3C0(void *);                          /* extern */
extern s32 func_00188760;

void func_00188A68(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 var_v1;
    u8 *temp_s4;

    *arg3 = 0;
    temp_s4 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    if (arg2 >= 0x120) {
        var_v1 = sp0;
        if (func_0015FC00(arg1, arg2, sp) == 0) {
            var_v1 = 0;
            if (func_0018D3C0(arg0) < 0x6C) {
                var_v1 = func_00188B20(arg0, arg1, arg2) - arg1;
            }
        }
        *arg3 = var_v1;
        *(s32 **)((u8 *)temp_s4 + 0x3C) = &func_00188760;
    }
}
