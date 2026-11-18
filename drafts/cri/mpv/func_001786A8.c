/* Draft (not built): func_001786A8 at 0x001786A8, size 0x90, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: mpile error: d_001786A8.c:14: called object is not a function
 * Original: asm/nonmatchings/cri/mpv/func_001786A8.s */

s32 func_00172DD0(s32);                     /* extern */
s32 func_001732A8();                            /* extern */
s32 func_00178738();                            /* extern */
s32 func_00178780(s32, s32, s32);               /* extern */
extern s32 D_00465288;
extern u8 D_00465324;
extern s32 *D_00481488;

void func_001786A8(s32 arg0, s32 arg1, s32 arg2) {
    if (D_00465324 != 4) {
loop_1:
        (s32 (*)())-1();
        goto loop_1;
    }
    D_00481488 = &D_00465288;
    func_00172DD0(4);
    func_001732A8();
    func_00178780(arg0, arg1, arg2);
    func_00178738();
}
