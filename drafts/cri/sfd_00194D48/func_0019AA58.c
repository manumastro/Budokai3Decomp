/* Draft (not built): func_0019AA58 at 0x0019AA58, size 0x5C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AA58.s */

s32 func_0018D650(s32, s32, void *);    /* extern */
s32 func_0018D870();                                /* extern */

void func_0019AA58(u8 *arg0) {
    u8 *temp_a2;

    temp_a2 = arg0 + 0xCC0;
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000122, temp_a2);
        return;
    }
    *(s32 *)((u8 *)temp_a2 + 0x298) = (s32) (*(s32 *)((u8 *)temp_a2 + 0x298) + 1);
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
}
