/* Draft (not built): func_0019E528 at 0x0019E528, size 0xA8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E528.s */

void *func_0019E240(s32);                           /* extern */
s32 func_0019EAC0(s32);                             /* extern */

u8 *func_0019E528(s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_s0;
    u8 temp_a0;
    u8 temp_v1;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *var_v0;

    temp_s0 = arg1 & 0xFF;
    var_v0 = func_0019E240(temp_s0);
    temp_s1 = var_v0;
    if (temp_s1 != NULL) {
        var_v0 = NULL;
        if (func_0019EAC0(temp_s0) == 0xE0) {
            temp_a1 = temp_s1 + 0x1C;
            var_v0 = (u8 *)1;
            temp_a0 = *(u8 *)((u8 *)temp_s1 + 0x1C);
            *arg2 = (s32) temp_a0;
            *arg2 = (temp_a0 * 0x10) | ((u8) *(u8 *)((u8 *)temp_a1 + 1) >> 4);
            temp_v1 = *(u8 *)((u8 *)temp_a1 + 1);
            *arg3 = (s32) temp_v1;
            *arg3 = ((temp_v1 << 8) | *(u8 *)((u8 *)temp_a1 + 2)) & 0xFFF;
        }
    }
    return var_v0;
}
