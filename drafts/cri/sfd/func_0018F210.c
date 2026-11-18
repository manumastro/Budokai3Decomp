/* Draft (not built): func_0018F210 at 0x0018F210, size 0xB8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018F210.c:23: `sp8' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018F210.s */

s32 func_00178BA8(s32 *, s32, s32, s32);        /* extern */
s32 func_0017AD58(s32, void *);                 /* extern */
s32 *func_0018F670();                               /* extern */

void func_0018F210(s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_v0;
    s32 *temp_v1;
    s32 *var_v0;
    s32 temp_a3;

    temp_v0 = func_0018F670();
    if ((temp_v0 != NULL) && (*temp_v0 == 0)) {
        func_0017AD58(arg1, sp);
        temp_a3 = (arg3 >= 0xB1) int 0xB0 : arg3;
        temp_v1 = temp_v0 + 0x24;
        var_v0 = temp_v1;
        if (spC > 0) {
            *(s32 *)((u8 *)temp_v1 + 0x160) = temp_a3;
            goto block_7;
        }
        if (sp8 > 0) {
            *(s32 *)((u8 *)temp_v1 + 0x164) = temp_a3;
            var_v0 = temp_v0 + 0xD4;
block_7:
            func_00178BA8(var_v0, arg2, temp_a3, temp_a3);
        }
    }
}
