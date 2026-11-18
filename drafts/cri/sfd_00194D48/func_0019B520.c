/* Draft (not built): func_0019B520 at 0x0019B520, size 0xC4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B520.s */

s32 func_0018D650(s32, s32, void *);        /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019B5E8(void *, s32, s32, s32 *);     /* extern */

s32 func_0019B520(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    u8 *temp_a2;

    *arg3 = 0;
    temp_v0 = func_0018D870();
    temp_a2 = arg0 + 0x9A0;
    if (temp_v0 == 0) {
        goto block_3;
    }
    return func_0018D650(0, 0xFF000126, temp_a2);
block_3:
    if (*(s32 *)((u8 *)temp_a2 + 0x38) == 0) {
        goto block_5;
    }
    goto block_7;
block_5:
    *arg3 = 1;
    return temp_v0;
block_7:
    if (*(s32 *)((u8 *)arg0 + 0x4C) != 4) {
        goto block_9;
    }
    goto block_12;
block_9:
    *arg3 = 0;
    return temp_v0;
block_12:
    func_0019B5E8(arg0, arg1, arg2, arg3);
    return 0;
}
