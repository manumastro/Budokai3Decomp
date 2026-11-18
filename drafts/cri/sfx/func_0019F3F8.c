/* Draft (not built): func_0019F3F8 at 0x0019F3F8, size 0x58, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F3F8.s */

s32 func_00170AE0();                            /* extern */
s32 func_0019EB60();                            /* extern */
s32 func_0019FBF8();                            /* extern */
s32 func_0019FDC8();                            /* extern */
extern s32 D_00426C18;

void func_0019F3F8(void) {
    if (D_00426C18 > 0) {
        func_0019FDC8();
        func_0019EB60();
        func_0019FBF8();
        func_00170AE0();
        D_00426C18 -= 1;
    }
}
