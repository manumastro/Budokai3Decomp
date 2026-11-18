/* Draft (not built): func_0019D950 at 0x0019D950, size 0xD0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D950.s */

s32 func_0019E240(void *, s32, s32);            /* extern */
s32 func_0019EA40(s32, s32);                        /* extern */
s32 func_0019EA80(s32, s32);                        /* extern */
s32 func_0019EAC0(s32);                             /* extern */

s32 func_0019D950(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = 0;
    temp_s0 = arg1 & 0xFF;
    if (*(s32 *)((u8 *)arg0 + 0xC) < 0x6E) {
        goto block_10;
    }
    temp_v0 = func_0019EAC0(temp_s0);
    if (temp_v0 == 0xC0) {
        goto block_5;
    }
    if (temp_v0 == 0xE0) {
        goto block_7;
    }
    return 0;
block_5:
    var_v0 = func_0019E240(arg0, temp_s0, 0xE0);
    if (var_v0 == 0) {
        goto block_10;
    }
    var_v0_2 = func_0019EA40(temp_s0, var_v0);
    goto block_9;
block_7:
    var_v0 = func_0019E240(arg0, temp_s0, 0xE0);
    if (var_v0 == 0) {
        goto block_10;
    }
    var_v0_2 = func_0019EA80(temp_s0, var_v0);
block_9:
    *arg2 = var_v0_2;
    var_v0 = 1;
block_10:
    return var_v0;
}
