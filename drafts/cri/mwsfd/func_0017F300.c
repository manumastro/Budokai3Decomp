/* Draft (not built): func_0017F300 at 0x0017F300, size 0x58, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_0017F300.s */

s32 func_00184798(s32, s32);                        /* extern */
s32 func_001851F0(void *);                          /* extern */

s32 func_0017F300(u8 *arg0) {
    s32 temp_s1;

    temp_s1 = func_00184798(*(s32 *)((u8 *)arg0 + 8), *(s32 *)((u8 *)arg0 + 0xC));
    return ((func_001851F0(arg0) ^ 1) == 0) ? (temp_s1 + 0x20000) : temp_s1;
}
