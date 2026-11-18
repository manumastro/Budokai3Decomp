/* Draft (not built): func_0019E380 at 0x0019E380, size 0x68, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E380.s */

void *func_0019E240(s32);                           /* extern */
s32 func_0019EAC0(s32);                             /* extern */

u8 *func_0019E380(s32 arg1, s32 *arg2) {
    s32 temp_s0;
    u8 *temp_s1;
    u8 *var_v0;

    temp_s0 = arg1 & 0xFF;
    var_v0 = func_0019E240(temp_s0);
    temp_s1 = var_v0;
    if (temp_s1 != NULL) {
        var_v0 = NULL;
        if (func_0019EAC0(temp_s0) == 0xC0) {
            var_v0 = (u8 *)1;
            *arg2 = (s32) *(u8 *)((u8 *)temp_s1 + 0x1B);
        }
    }
    return var_v0;
}
