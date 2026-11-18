/* Draft (not built): func_0018B8A8 at 0x0018B8A8, size 0x48, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018B8A8.s */

s32 func_001999E0();

s32 func_0018B8A8(s32 arg0) {
    s32 var_v0;

    if ((func_001999E0(0x31) != 0) || (var_v0 = func_001999E0(arg0, 0x39), (var_v0 != 0))) {
        var_v0 = 1;
    }
    return var_v0;
}
