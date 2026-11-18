/* Draft (not built): func_0019FC10 at 0x0019FC10, size 0x10, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019FC10.s */

void func_0019FC10(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)(arg0 + 0x5C) + 4) = arg2;
    *(s32 *)((u8 *)arg0 + 0x5C) = arg1;
}
