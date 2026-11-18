/* Draft (not built): func_00157540 at 0x00157540, size 0xD0, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00157540.c:21: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157540.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 CreateThread(void *, s32 *, s32 *, s32);    /* extern */
s32 func_0010B3A0(s32, s32);                /* extern */
s32 func_001571D8(s32);                         /* extern */
s32 scePrintf(s32 *, s32, s32, s32, s32, s32); /* extern */
extern s32 D_00405CCC;
extern s32 D_00405D4C;
extern s32 D_00405D50;
extern s32 D_0040D5D8;
extern s32 D_00460E50;
extern s32 D_00477CF0;

s32 func_00157540(s32 arg0, s32 arg1) {
    if (arg0 == 0) {

    } else {
        scePrintf(&D_00460E50, arg0, arg1, arg1, arg0, arg1);
    }
    D_00405D50 = CreateThread(sp, &D_0040D5D8, &D_00477CF0, D_0040D5D8);
    func_0010B3A0(D_00405D50, 0);
    ChangeThreadPriority(D_00405D50, D_00405CCC);
    func_001571D8(D_00405D50);
    return D_00405D4C;
}
