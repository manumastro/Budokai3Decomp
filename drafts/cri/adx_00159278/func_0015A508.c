/* Draft (not built): func_0015A508 at 0x0015A508, size 0x64, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A508.s */

s32 func_001527C0(s32 *, s32 *, s32, s32 *); /* extern */

void func_0015A508(s32 *arg2, s32 *arg3) {
    s32 sp10;
    s32 sp12;
    s8 sp13;
    s32 sp14;
    s8 sp15;
    s32 sp18;

    func_001527C0(&sp10, &sp12, M2C_ERROR(/* Read from unset register $t1 */), &sp18);
    *arg3 = (s32) sp15;
    *arg2 = (s32) sp13;
}
