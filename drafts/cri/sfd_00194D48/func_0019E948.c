/* Draft (not built): func_0019E948 at 0x0019E948, size 0x84, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E948.s */

void *func_0019E240(s32);                           /* extern */
void *func_0019EA80(s32, void *);                   /* extern */

u8 *func_0019E948(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;
    u8 *temp_s1;
    u8 *var_v0;

    temp_s0 = arg1 & 0xFF;
    var_v0 = func_0019E240(temp_s0);
    temp_s1 = var_v0;
    if (temp_s1 != NULL) {
        var_v0 = func_0019EA80(temp_s0, temp_s1);
        if (var_v0 != NULL) {
            var_v0 = NULL;
            if (*(s32 *)((u8 *)arg0 + 0xC) >= 0xD2) {
                var_v0 = (u8 *)1;
                *arg2 = (s32) *(u8 *)((u8 *)temp_s1 + 0x27);
            }
        }
    }
    return var_v0;
}
