/* Draft (not built): func_00157420 at 0x00157420, size 0x88, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00157420.c:14: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157420.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 CreateThread(void *, s32 *, s32, s32, s32 *, s32 *, s32, s32 *, s32); /* extern */
s32 func_0010B3A0(s32, s32);                /* extern */
extern s32 D_00405CC0;
extern s32 D_00405D44;
extern s32 D_004085D0;
extern s32 D_0040D5D8;
extern s32 D_00477CF0;
extern s32 func_00156DC8;

void func_00157420(void) {
    D_00405D44 = CreateThread(sp, &func_00156DC8, 0x1000, D_0040D5D8, &func_00156DC8, &D_004085D0, 0x1000, &D_00477CF0, D_0040D5D8);
    func_0010B3A0(D_00405D44, 0);
    ChangeThreadPriority(D_00405D44, D_00405CC0);
}
