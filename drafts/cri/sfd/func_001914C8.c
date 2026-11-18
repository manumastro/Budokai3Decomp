/* Draft (not built): func_001914C8 at 0x001914C8, size 0xC0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001914C8.c:20: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001914C8.s */

s32 func_0017B5B8(s32, s32, s32, void *);       /* extern */
s32 func_001915B0(s32, s32, s32, void *);           /* extern */
s32 func_001986A0(s32, s32, s32, void *);       /* extern */

void func_001914C8(s32 arg0, s32 arg1, u8 *arg2, s32 *arg3) {
    s32 temp_s0;
    s32 temp_s5;
    s32 temp_v0;
    u8 *temp_a3;

    temp_a3 = arg0 + 0x1C68;
    temp_s5 = *(s32 *)((u8 *)temp_a3 + 8);
    *arg3 = -1;
    temp_s0 = *(s32 *)((u8 *)temp_a3 + 0x10);
    temp_v0 = func_0017B5B8(*(s32 *)((u8 *)arg2 + 0), *(s32 *)((u8 *)arg2 + 4), 4, temp_a3);
    if (temp_v0 != 0) {
        func_001986A0(arg0, temp_s0, temp_v0, sp);
        if (sp0 >= 0) {
            *arg3 = func_001915B0(arg0 + 0xCC0, temp_s5 + 0x118, arg1, sp);
        }
    }
}
