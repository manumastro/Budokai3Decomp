/* Draft (not built): func_0019D8E0 at 0x0019D8E0, size 0x6C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D8E0.s */

s32 func_0019D780();                                /* extern */
s32 func_0019DA20(s32, s32);                        /* extern */

void func_0019D8E0(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;

    *arg2 = 0;
    temp_s0 = *(s32 *)((u8 *)arg0 + 4);
    if (func_0019D780() != 0) {
        if (func_0019DA20(temp_s0, arg1 & 0xFF) != 0) {
            *arg2 = 1;
            return;
        }
        *arg2 = 0;
    }
}
