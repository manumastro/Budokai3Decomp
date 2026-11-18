/* Draft (not built): func_0014ECA0 at 0x0014ECA0, size 0x30, segment cri/adx_0014E8F8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014E8F8/func_0014ECA0.s */

extern s32 (*D_00400E64)(s32);

void func_0014ECA0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC0);
    if (temp_v0 != 0) {
        D_00400E64(temp_v0);
    }
}
