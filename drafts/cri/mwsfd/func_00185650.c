/* Draft (not built): func_00185650 at 0x00185650, size 0x60, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00185650.s */

s32 func_001851E0();                                /* extern */
s32 func_0019CDF8(s32, s32, s32, s32);  /* extern */

s32 func_00185650(u8 *arg0) {
    s32 var_v0;

    if (func_001851E0() == 1) {
        goto block_2;
    }
    goto block_4;
block_2:
    return 0;
block_4:
    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x190) == 0) {
        goto block_6;
    }
    var_v0 = (func_0019CDF8(*(s32 *)((u8 *)arg0 + 0x40), 2, 0, 0) == 0) ? 0 : -1;
block_6:
    return var_v0;
}
