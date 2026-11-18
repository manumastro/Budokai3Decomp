/* Draft (not built): func_0019B320 at 0x0019B320, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B320.s */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
extern s32 D_00467730;

void func_0019B320(u8 *arg0, s32 *arg1) {
    s32 temp_v1;

    *arg1 = -1;
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF00011B);
        return;
    }
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x920);
    if (temp_v1 != 0) {
        *arg1 = *(&D_00467730 + (temp_v1 * 4));
    }
}
