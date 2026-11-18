/* Draft (not built): func_00199080 at 0x00199080, size 0x4C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199080.s */

s32 func_0017EE78(s32);                             /* extern */
s32 func_001990D0(s32);                         /* extern */

void func_00199080(u8 *arg0, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xDB0);
    if (temp_v0 != 0) {
        func_001990D0(temp_v0);
        return;
    }
    *arg3 = func_0017EE78(*(s32 *)((u8 *)arg0 + 0xD98));
}
