/* Draft (not built): func_00167C90 at 0x00167C90, size 0x30, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dvci/func_00167C90.s */

extern s32 (*D_004138EC)(s32, s32);
extern s32 D_004138F0;

void func_00167C90(s32 arg0) {
    if (D_004138EC != NULL) {
        D_004138EC(D_004138F0, arg0);
    }
}
