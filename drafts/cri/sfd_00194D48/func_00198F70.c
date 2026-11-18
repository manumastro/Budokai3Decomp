/* Draft (not built): func_00198F70 at 0x00198F70, size 0x6C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00198F70.c:7: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198F70.s */

s32 func_00198BE8(void *);                      /* extern */

void func_00198F70(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if ((arg0 != NULL) && (func_00198BE8(sp), (sp0 != 0))) {
        if (*(s32 *)((u8 *)arg0 + 0xDB0) == 0) {
            if (*(s32 *)((u8 *)arg0 + 0xD98) > 0) {
                goto block_5;
            }
        } else {
block_5:
            *arg1 = 1;
        }
    }
}
