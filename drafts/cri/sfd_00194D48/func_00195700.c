/* Draft (not built): func_00195700 at 0x00195700, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195700.s */

s32 DeleteSema(s32);                            /* extern */
s32 setD4_CHCR(s32);                        /* extern */

s32 func_00195700(u8 *arg0) {
    setD4_CHCR(5);
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000B410 = 0;
    *(s32 *)0x1000B430 = 0;
    DeleteSema(*(s32 *)((u8 *)arg0 + 0x40));
    return 1;
}
