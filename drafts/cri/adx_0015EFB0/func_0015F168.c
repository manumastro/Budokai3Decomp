/* Draft (not built): func_0015F168 at 0x0015F168, size 0x48, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/func_0015F168.s */

s32 func_00152D50(s32, s32 *, s32 *);   /* extern */
extern s32 D_0047E980;

s32 *func_0015F168(void) {
    s32 sp10;
    s32 sp14;

    func_00152D50(0x800, &sp14, &D_0047E980);
    return (sp14 != 0) ? &D_0047E980 : NULL;
}
