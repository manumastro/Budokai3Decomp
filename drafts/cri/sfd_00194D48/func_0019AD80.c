/* Draft (not built): func_0019AD80 at 0x0019AD80, size 0x7C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0019AD80.c:12: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AD80.s */

s32 func_0019A2E8(void *, void *);              /* extern */
s32 func_0019A7B0(void *, s32 *);               /* extern */

void func_0019AD80(u8 *arg0) {
    s32 sp4;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    func_0019A7B0(sp, &sp4);
    if ((*(s32 *)((u8 *)temp_s0 + 0x280) != sp0) || (*(s32 *)((u8 *)temp_s0 + 0x284) != sp4)) {
        func_0019A2E8(arg0, temp_s0);
        *(s32 *)((u8 *)temp_s0 + 0x280) = sp0;
        *(s32 *)((u8 *)temp_s0 + 0x284) = sp4;
    }
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
}
