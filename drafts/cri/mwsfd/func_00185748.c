/* Draft (not built): func_00185748 at 0x00185748, size 0x78, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00185748.c:11: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mwsfd/func_00185748.s */

s32 func_001847D0();                                /* extern */
s32 func_001847F8(s32, s32, void *);            /* extern */
s32 func_0019F928(s32, void *, s32, s32);       /* extern */

void func_00185748(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;

    temp_s1 = func_001847D0();
    func_001847F8(arg0, arg1, sp);
    func_0019F928(temp_s1, sp, arg2, arg3);
}
