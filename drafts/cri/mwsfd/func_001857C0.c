/* Draft (not built): func_001857C0 at 0x001857C0, size 0x50, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001857C0.s */

s32 func_001847D0();                                /* extern */
s32 func_0019F948(s32, s32, s32, s32);          /* extern */

void func_001857C0(s32 arg1, s32 arg2, s32 arg3) {
    func_0019F948(func_001847D0(), arg1, arg2, arg3 == 1);
}
