/* Draft (not built): func_001688B0 at 0x001688B0, size 0x4C, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/htci/func_001688B0.s */

s32 func_00167C90(s32 *);                   /* extern */
extern s32 D_00463B10;

s32 func_001688B0(u8 *arg0) {
    if (arg0 == NULL) {
        func_00167C90(&D_00463B10);
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 2) != 1) {
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x28) << 0xB;
}
