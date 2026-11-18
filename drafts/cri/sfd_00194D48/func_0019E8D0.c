/* Draft (not built): func_0019E8D0 at 0x0019E8D0, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E8D0.s */

void *func_0019E240(s32);                           /* extern */
void *func_0019EA80(s32, void *);                   /* extern */

u8 *func_0019E8D0(s32 arg1, s32 *arg2) {
    s32 temp_s0;
    u8 temp_v0;
    u8 *temp_s1;
    u8 *var_v0;

    temp_s0 = arg1 & 0xFF;
    var_v0 = func_0019E240(temp_s0);
    temp_s1 = var_v0;
    if (temp_s1 != NULL) {
        var_v0 = func_0019EA80(temp_s0, temp_s1);
        if (var_v0 != NULL) {
            temp_v0 = *(u8 *)((u8 *)temp_s1 + 0x26);
            *arg2 = (s32) temp_v0;
            if ((s32) temp_v0 >= 0x40) {
                *arg2 = -1;
            }
            var_v0 = (u8 *)1;
        }
    }
    return var_v0;
}
