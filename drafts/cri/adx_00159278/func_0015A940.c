/* Draft (not built): func_0015A940 at 0x0015A940, size 0x34, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A940.s */

s32 memset(s32, s32);                   /* extern */

void func_0015A940(s8 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
        memset(0, 0x90);
    }
}
