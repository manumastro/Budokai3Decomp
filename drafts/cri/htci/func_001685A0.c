/* Draft (not built): func_001685A0 at 0x001685A0, size 0x38, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_001685A0.s */

s32 func_00167C90(s32 *);                   /* extern */
extern s32 D_00463B10;

s32 func_001685A0(u8 *arg0) {
    if (arg0 == NULL) {
        func_00167C90(&D_00463B10);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x1C);
}
