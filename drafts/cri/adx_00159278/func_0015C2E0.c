/* Draft (not built): func_0015C2E0 at 0x0015C2E0, size 0x2C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C2E0.s */

void func_0015C2E0(u8 *arg0, s32 arg1, s16 arg2) {
    if (*(s8 *)((u8 *)arg0 + 0x2D6) != 1) {
        *(s8 *)((u8 *)arg0 + 0x2D6) = 1;
        *(s32 *)((u8 *)arg0 + 0x48) = (s32) (*(s32 *)((u8 *)arg0 + 0x48) + 0x24);
    }
    *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0x2EA) = arg2;
}
