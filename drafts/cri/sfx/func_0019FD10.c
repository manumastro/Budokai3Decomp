/* Draft (not built): func_0019FD10 at 0x0019FD10, size 0x20, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019FD10.s */

s32 func_001A11C8(s32, s32);                    /* extern */

void func_0019FD10(u8 *arg0) {
    func_001A11C8(*(s32 *)((u8 *)arg0 + 0x5C), *(s32 *)((u8 *)(arg0 + 0x5C) + 4));
}
