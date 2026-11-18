/* Draft (not built): func_00187EB8 at 0x00187EB8, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00187EB8.s */

s32 fn_8004AE94();
s32 func_0015CCF8();
s32 func_0015D4D0();

s32 func_00187EB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v0;

    if (arg2 != 0) {
        goto block_3;
    }
    fn_8004AE94();
    goto block_9;
block_3:
    if (arg2 == 1) {
        goto block_5;
    }
    goto block_7;
block_5:
    fn_8004AE94(arg0, func_0015CCF8() + arg1);
    goto block_9;
block_7:
    if (arg2 != 2) {
        goto block_9;
    }
    temp_v0 = func_0015D4D0();
    temp_a1 = temp_v0 + 0x7FF;
    fn_8004AE94(arg0, ((s32) ((temp_a1 < 0) ? (temp_v0 + 0xFFE) : temp_a1) >> 0xB) + arg1);
block_9:
    return 0;
}
