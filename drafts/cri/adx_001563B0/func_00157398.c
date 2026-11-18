/* Draft (not built): func_00157398 at 0x00157398, size 0x88, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00157398.c:14: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157398.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 CreateThread(void *, s32 *, s32, s32, s32 *, s32 *, s32, s32 *, s32); /* extern */
s32 func_0010B3A0(s32, s32);                /* extern */
extern s32 D_00405CBC;
extern s32 D_00405D40;
extern s32 D_004075D0;
extern s32 D_0040D5D8;
extern s32 D_00477CF0;
extern s32 func_00156CC0;

void func_00157398(void) {
    D_00405D40 = CreateThread(sp, &func_00156CC0, 0x1000, D_0040D5D8, &func_00156CC0, &D_004075D0, 0x1000, &D_00477CF0, D_0040D5D8);
    func_0010B3A0(D_00405D40, 0);
    ChangeThreadPriority(D_00405D40, D_00405CBC);
}
