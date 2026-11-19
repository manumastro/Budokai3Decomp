/* Draft (not built): func_00150558 at 0x00150558, size 0x6C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00150558.s */

s32 func_00150360();                            /* extern */
s32 func_001503A0(s32 *, s32, s32, s32); /* extern */
extern s32 D_00401084;
extern s32 D_00460450;

s32 func_00150558(s32 arg0, s32 arg1, s32 arg2) {
    if (D_00401084 == 0) {
        func_00150360();
    }
    func_001503A0(&D_00460450, 6, arg0, arg1);
    return 0;
}

/* Similar function already in C: func_0016B720 (src/cri/mfci.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_0016B720(s32 arg0, s32 arg1, s32 arg2) {
    func_0016AFD8();
    func_0016B770(arg0, arg1, arg2);
    func_0016AFF0();
}
#endif
