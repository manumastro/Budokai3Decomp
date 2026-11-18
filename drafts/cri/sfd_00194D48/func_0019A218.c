/* Draft (not built): func_0019A218 at 0x0019A218, size 0x6C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A218.s */

s32 func_0019A288();                                /* extern */
s32 func_0019A2C0(s32, void *);                     /* extern */

void func_0019A218(s32 arg0) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0xCC0;
    if (func_0019A288() != 0) {
        *(s32 *)((u8 *)temp_s1 + 0x29C) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x29C) + *(s32 *)((u8 *)temp_s1 + 0x2A0));
    }
    if (func_0019A2C0(arg0, temp_s1) != 0) {
        *(s32 *)((u8 *)temp_s1 + 0x2C0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x2C0) + *(s32 *)((u8 *)temp_s1 + 0x2A0));
    }
}
