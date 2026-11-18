/* Draft (not built): func_001785F8 at 0x001785F8, size 0xB0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001785F8.c:16: invalid operands to binary -
 * Original: asm/nonmatchings/cri/mpv/func_001785F8.s */

s32 func_0017B420(void *);                          /* extern */
void *func_0017B5B8(void *, s32, s32);          /* extern */

s32 func_001785F8(s32 arg0, s32 arg1) {
    s32 temp_s1;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *var_v0;

    var_v0 = func_0017B5B8((u8 *)0x40);
    temp_s0 = var_v0 + 4;
    if (var_v0 != NULL) {
        var_v0 = NULL;
        temp_s1 = arg1 - (temp_s0 - arg0);
        if (temp_s1 > 0) {
            var_v0 = func_0017B5B8(temp_s0, temp_s1, -1);
            temp_s0_2 = var_v0;
            if (temp_s0_2 != NULL) {
                var_v0 = NULL;
                if ((func_0017B420(temp_s0_2) & 0x10) && ((temp_s1 - ((temp_s0_2 + 4) - temp_s0)) > 0)) {
                    var_v0 = (u8 *) (((u8) *(u8 *)((u8 *)temp_s0_2 + 4) >> 4) == 1);
                }
            }
        }
    }
    return (s32) var_v0;
}
