/* Draft (not built): func_0010B2D8 at 0x0010B2D8, size 0xC8, segment sdk/libkernl_0010B038 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010B2D8.c:16: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_0010B038/func_0010B2D8.s */

s32 CreateSema(void *, s32, s32, s32 *);        /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 func_00115E00(s32, s32);                    /* extern */
s32 func_00115FB0(s32, s32 *, s32);             /* extern */
extern s32 D_0045D3D0;
extern s32 func_0010B518;

s32 func_0010B2D8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_ERROR(/* mfc0 $t0 */) & 0x10000) {
        temp_v0_2 = CreateSema(sp, 1, 0, &D_0045D3D0);
        if (temp_v0_2 < 0) {
            return 0x80008003;
        }
        temp_v0 = func_00115FB0(func_00115E00(0, arg0), &func_0010B518, temp_v0_2);
        if (temp_v0 < 0) {
            DeleteSema(temp_v0_2);
            return temp_v0;
        }
        WaitSema(temp_v0_2);
        DeleteSema(temp_v0_2);
        return 0;
    }
    return 0x80008008;
}
