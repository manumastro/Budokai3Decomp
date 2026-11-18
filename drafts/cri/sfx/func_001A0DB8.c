/* Draft (not built): func_001A0DB8 at 0x001A0DB8, size 0x90, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001A0DB8.c:16: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfx/func_001A0DB8.s */

s32 func_00127810(s32 *, s32 *);        /* extern */
s32 func_00128040(s32 *, s32 *, s32); /* extern */
s32 func_001A0E48(s32 *, s32);              /* extern */
s32 sprintf(s32 *, s32 *, s32);     /* extern */
extern s32 D_00467EF8;
extern s32 D_00467F08;
extern s32 D_00467F10;
extern s32 D_00467F18;

void func_001A0DB8(s32 *arg0, s32 arg2) {
    s32 *temp_s0;

    func_00128040(&D_00467EF8, (s32 *)8);
    sprintf(sp, &D_00467F08, 0x13);
    temp_s0 = arg0 + 0x10;
    func_00127810(arg0, sp);
    func_00128040(temp_s0, &D_00467F10, 2);
    func_001A0E48(temp_s0, arg2);
    func_00127810(temp_s0, &D_00467F18);
}
