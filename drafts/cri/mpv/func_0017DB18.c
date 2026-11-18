/* Draft (not built): func_0017DB18 at 0x0017DB18, size 0xBC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017DB18.c:18: warning: passing arg 1 of `func_0017E040' from incompatible pointer type
 * Original: asm/nonmatchings/cri/mpv/func_0017DB18.s */

s32 func_0016F050(s32, s32, s32, void *);       /* extern */
s32 func_0017E040(void **);                     /* extern */

s32 func_0017DB18(u8 *arg0, u8 **arg1) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = arg0 + 0x388;
    (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, temp_s1);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x388);
    temp_a1 = temp_v1 & ~3;
    func_0016F050(temp_s1, (temp_a1 + ((s32) ((temp_v1 - temp_a1) * 8) >> 3) + 4) - temp_v1, temp_s1, sp);
    (*(s32 (**)(u8 **, s32, s32))((u8 *)(*arg1) + 0x20))(arg1, 0, temp_s1);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
    func_0017E040(arg1);
    return 0;
}
