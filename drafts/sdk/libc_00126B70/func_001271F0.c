/* Draft (not built): func_001271F0 at 0x001271F0, size 0x34, segment sdk/libc_00126B70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: match
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libc_00126B70/func_001271F0.s */

s32 fflush();                                       /* extern */

s32 lflush(u8 *arg0) {
    if ((*(u16 *)((u8 *)arg0 + 0xC) & 9) == 9) {
        return fflush();
    }
    return 0;
}
