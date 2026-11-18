/* Draft (not built): func_001572E0 at 0x001572E0, size 0xB8, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001572E0.c:19: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_001572E0.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 CreateThread(void *, s32 *, s32 *, s32);    /* extern */
s32 func_0010B3A0(s32, s32);                /* extern */
s32 scePrintf(s32 *, s32, s32, s32, s32, s32); /* extern */
extern s32 D_00405CB8;
extern s32 D_00405D3C;
extern s32 D_0040D5D8;
extern s32 D_00460E10;
extern s32 D_00477CF0;

void func_001572E0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {

    } else {
        scePrintf(&D_00460E10, arg0, arg1, arg1, arg0, arg1);
    }
    D_00405D3C = CreateThread(sp, &D_0040D5D8, &D_00477CF0, D_0040D5D8);
    func_0010B3A0(D_00405D3C, 0);
    ChangeThreadPriority(D_00405D3C, D_00405CB8);
}
