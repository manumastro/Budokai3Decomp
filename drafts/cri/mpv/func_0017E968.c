/* Draft (not built): func_0017E968 at 0x0017E968, size 0x68, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017E968.s */

s32 func_0017C2E0(s32, s32);                /* extern */
s32 func_0017E9D8(void *, s32);             /* extern */
s32 func_0017EB90();                                /* extern */
s32 func_0017EC30(void *, s32);             /* extern */

s32 func_0017E968(u8 *arg0) {
    if (func_0017EB90() != 0) {
        return func_0017C2E0(0, 0xFF030201);
    }
    func_0017EC30(arg0, 0xFF030201);
    func_0017E9D8(arg0, 0x3F8);
    *(s32 *)((u8 *)arg0 + 0x188) = 1;
    return 0;
}
