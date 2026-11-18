/* Draft (not built): func_0019E300 at 0x0019E300, size 0x80, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E300.s */

void *func_0019E240(s32);                           /* extern */
s32 func_0019EAC0(s32);                             /* extern */

u8 *func_0019E300(s32 arg1, s32 *arg2) {
    s32 temp_s0;
    u8 *temp_s1;
    u8 *var_v0;

    temp_s0 = arg1 & 0xFF;
    var_v0 = func_0019E240(temp_s0);
    temp_s1 = var_v0;
    if (temp_s1 != NULL) {
        if (func_0019EAC0(temp_s0) != 0xC0) {
            return NULL;
        }
        var_v0 = NULL;
        if (*(u8 *)((u8 *)temp_s1 + 0x19) == 1) {
            var_v0 = (u8 *)1;
            *arg2 = (s32) *(u8 *)((u8 *)temp_s1 + 0x1A);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
