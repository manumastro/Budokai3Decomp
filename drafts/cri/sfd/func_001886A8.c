/* Draft (not built): func_001886A8 at 0x001886A8, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001886A8.c:18: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001886A8.s */

s32 func_00178BA8(s32, s32, s32);               /* extern */
s32 func_001885F0(s32, s32, void *);            /* extern */
s32 func_00188620(s32, s32, void *);            /* extern */

void func_001886A8(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    temp_s3 = *(s32 *)((u8 *)temp_s1 + 4);
    func_001885F0(temp_s3, *(s32 *)((u8 *)temp_s1 + 8), sp);
    temp_s0 = (arg2 < sp4) int arg2 : sp4;
    temp_s0_2 = (temp_s0 > 0x19000) int 0x19000 : temp_s0;
    func_00178BA8(sp0, arg1, temp_s0_2);
    func_00188620(temp_s3, temp_s0_2, sp);
    *(s32 *)((u8 *)temp_s1 + 0x48) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x48) + temp_s0_2);
    *arg3 = temp_s0_2;
}
