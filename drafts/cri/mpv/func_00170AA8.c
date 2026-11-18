/* Draft (not built): func_00170AA8 at 0x00170AA8, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00170AA8.s */

s32 *func_00170AE8();                               /* extern */
s32 func_00170AF8(s32);                     /* extern */
extern s32 D_00465018;
extern s32 *D_00481480;

void func_00170AA8(void) {
    D_00481480 = &D_00465018;
    *func_00170AE8() = 0;
    func_00170AF8(0x80);
}
