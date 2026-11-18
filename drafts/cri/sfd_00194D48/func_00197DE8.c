/* Draft (not built): func_00197DE8 at 0x00197DE8, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197DE8.s */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00197E40(void *, s32);             /* extern */

void func_00197DE8(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000133);
        return;
    }
    func_00197E40(arg0, 0xFF000133);
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
}
