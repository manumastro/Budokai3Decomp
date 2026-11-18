/* Draft (not built): func_0016AE28 at 0x0016AE28, size 0x38, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mfci/func_0016AE28.s */

s32 func_0016A7B0(s32 *);                   /* extern */
extern s32 D_004640F0;

s8 func_0016AE28(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0(&D_004640F0);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
