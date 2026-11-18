/* Draft (not built): func_0017C7C0 at 0x0017C7C0, size 0x78, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017C7C0.s */

s32 func_0017C2E0(s32, s32);            /* extern */
s32 func_0017EB90();                                /* extern */

void func_0017C7C0(u8 *arg0, s32 *arg1, s32 *arg2) {
    if (func_0017EB90() != 0) {
        func_0017C2E0(0, 0xFF03020E);
        return;
    }
    *arg1 = *(s32 *)((u8 *)arg0 + 0x2B4);
    *arg2 = *(s32 *)((u8 *)arg0 + 0x2B8);
}
