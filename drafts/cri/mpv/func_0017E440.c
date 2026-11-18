/* Draft (not built): func_0017E440 at 0x0017E440, size 0x74, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: mpile error: d_0017E440.c:13: called object is not a function
 * Original: asm/nonmatchings/cri/mpv/func_0017E440.s */

s32 func_0017C2E0(s32, s32);                /* extern */
extern s32 D_00465420;
extern u8 D_00465430;

s32 func_0017E440(void) {
    if (D_00465420 != 0x5A5A5A5A) {
        return func_0017C2E0(0, 0xFF03FF02);
    }
    if (D_00465430 != 4) {
loop_5:
        (s32 (*)())-1();
        goto loop_5;
    }
    return 0;
}
