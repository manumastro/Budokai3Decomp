/* Draft (not built): func_0017DBD8 at 0x0017DBD8, size 0xF0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017DBD8.c:21: warning: passing arg 1 of `func_0017E040' from incompatible pointer type
 * Original: asm/nonmatchings/cri/mpv/func_0017DBD8.s */

s32 func_0016F050(s32, s32, s32, void *);       /* extern */
s32 func_0017DCC8(void *, s32, s32);                /* extern */
s32 func_0017E040(void **);                     /* extern */

s32 func_0017DBD8(u8 *arg0, u8 **arg1) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;

    temp_s3 = arg0 + 0x388;
    (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, temp_s3);
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x388);
    temp_s0 = temp_a1 & ~3;
    temp_s4 = func_0017DCC8(arg0, temp_a1, *(s32 *)((u8 *)arg0 + 0x38C));
    func_0016F050(temp_s3, ((temp_s0 + 8 + ((s32) ((temp_a1 - temp_s0) * 8) >> 3)) - 4) - *(s32 *)((u8 *)arg0 + 0x388), temp_s3, sp);
    (*(s32 (**)(u8 **, s32, s32))((u8 *)(*arg1) + 0x20))(arg1, 0, temp_s3);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
    func_0017E040(arg1);
    return temp_s4;
}
