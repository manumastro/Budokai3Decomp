/* Draft (not built): func_001137C0 at 0x001137C0, size 0x154, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_001137C0.c:43: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_001137C0.s */

s32 func_001164A8(s32, s32);            /* extern */
s32 sceSifGetReg(s32);                          /* extern */
s32 sceSifSetDma(void *, s32);                  /* extern */
s32 sceSifSetReg(s32, s32);             /* extern */
s32 sceSifStopDma();                            /* extern */
s32 sceSifWriteBackDCache(s32 *, s32, s32 *, s32, s32 *, s32, s32, s32); /* extern */
extern s32 D_00475040;

s32 func_001137C0(s8 *arg0, s32 arg1) {
    s32 temp_t3;
    s32 var_t1;
    s8 *temp_v0;
    u8 var_a0;
    u8 *temp_v1;

    func_001164A8(0, 0);
    func_001164A8(1, 0);
    sceSifStopDma();
    temp_t3 = sceSifGetReg(0x80000000);
    *(s32 *)((u8 *)(&D_00475040) + 0x14) = arg1;
    var_t1 = 0;
    if (*arg0 != 0) {
        var_a0 = (u8) *arg0;
loop_2:
        temp_v1 = &D_00475040 + var_t1;
        var_t1 += 1;
        *(u8 *)((u8 *)temp_v1 + 0x18) = var_a0;
        temp_v0 = arg0 + var_t1;
        if (*temp_v0 != 0) {
            var_a0 = (u8) *temp_v0;
            goto loop_2;
        }
    }
    *(s32 *)((u8 *)(&D_00475040) + 4) = 0;
    *(s32 *)((u8 *)(&D_00475040) + 0x10) = var_t1;
    *(s32 *)((u8 *)(&D_00475040) + 8) = 0x80000003;
    *(s64 *)((u8 *)(&D_00475040) + 0) = (s64) (*(s64 *)((u8 *)(&D_00475040) + 0) & ((-1 << 0x20) | 0xFF));
    *(s64 *)((u8 *)(&D_00475040) + 0) = 0x68;
    sceSifWriteBackDCache(&D_00475040, 0x68, &D_00475040, 0x68, &D_00475040, temp_t3, 0x68, 0x44);
    sceSifSetReg(4, 0x40000);
    if (sceSifSetDma(sp, 1) != 0) {
        sceSifSetReg(4, 0x10000);
        sceSifSetReg(4, 0x20000);
        sceSifSetReg(0x80000002, 0);
        sceSifSetReg(0x80000000, 0);
        return 1;
    }
    return 0;
}
