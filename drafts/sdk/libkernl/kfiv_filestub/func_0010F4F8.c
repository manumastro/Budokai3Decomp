/* Draft (not built): func_0010F4F8 at 0x0010F4F8, size 0xF0, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0010F4F8.c:34: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010F4F8.s */

s32 _fs_version();                                  /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010E948();                                /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
extern s32 D_003EC6BC;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_0010F4F8(s32 arg0) {
    s32 temp_s0;

    _sceFsWaitS(0xFD);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    if (_fs_version() != 0) {
        func_0010EFF0();
        return 0xFFFEFFFC;
    }
    if (func_0010E948() != 0) {
        func_0010EFF0();
        return -0x10;
    }
    D_00473440 = arg0;
    if (func_0010EA50(&D_00474B40, 0xFD, 0, &D_00473440, 0, 0) < 0) {
        func_0010EFF0();
        return -0xB;
    }
    temp_s0 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    return temp_s0;
}
