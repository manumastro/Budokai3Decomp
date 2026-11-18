/* Draft (not built): SFXZ_SetZclip at 0x001A07A8, size 0x64, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/SFXZ_SetZclip.s */

s32 func_0019F6D0(s32, s32, s32 *); /* extern */
s32 func_001A0810();                                /* extern */
extern s32 D_00467DF0;

void SFXZ_SetZclip(u8 *arg0, f32 fparg0, f32 fparg1) {
    if (func_001A0810() != 1) {
        func_0019F6D0(0, 0, &D_00467DF0);
    }
    *(f32 *)((u8 *)arg0 + 0x40) = fparg1;
    *(f32 *)((u8 *)arg0 + 0x3C) = fparg0;
}
