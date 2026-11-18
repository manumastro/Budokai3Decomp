/* Draft (not built): func_00182778 at 0x00182778, size 0x4C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00182778.s */

s32 func_0019ABA0(s32, s32, s32, s32);          /* extern */
s32 mwPlyGetSfdHn();                                /* extern */

void func_00182778(s32 arg1, s32 arg2, s32 arg3) {
    func_0019ABA0(mwPlyGetSfdHn(), arg1, arg2, arg3);
}
