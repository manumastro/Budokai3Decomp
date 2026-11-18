/* Draft (not built): func_0010F3B8 at 0x0010F3B8, size 0x140, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0010F3B8.c:39: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010F3B8.s */

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

s32 func_0010F3B8(u32 arg0, u32 arg1) {
    s32 temp_s0;

    _sceFsWaitS(0xFE);
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
    if ((arg0 & 0x3FFF) || (arg0 == 0) || (arg0 > 0xFFFFFU) || (arg1 == 0) || (arg1 >= 0x21U)) {
        func_0010EFF0();
        return -0x16;
    }
    *(u32 *)((u8 *)(&D_00473440) + 0) = arg0;
    *(u32 *)((u8 *)(&D_00473440) + 4) = arg1;
    if (func_0010EA50(&D_00474B40, 0xFE, 0, &D_00473440, 0, 0) < 0) {
        func_0010EFF0();
        return -0xB;
    }
    temp_s0 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    return temp_s0;
}
