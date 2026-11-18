/* Draft (not built): func_00166B00 at 0x00166B00, size 0x38, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dvci/func_00166B00.s */

s32 func_00166150(s32 *);                   /* extern */
extern s32 D_00463608;

s8 func_00166B00(u8 *arg0) {
    if (arg0 == NULL) {
        func_00166150(&D_00463608);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 2);
}
