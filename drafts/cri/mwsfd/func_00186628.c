/* Draft (not built): func_00186628 at 0x00186628, size 0x7C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00186628.s */

s32 func_0018DA30(s32, s32, s32, s32);      /* extern */

void func_00186628(u8 *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x294;
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x40);
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0xC);
    func_0018DA30(temp_s1, *(s32 *)((u8 *)temp_s0 + 0x10) + 0xC0, 0, 0);
    func_0018DA30(temp_s1, arg1 + 0xC0, temp_s2, 0);
    *(s32 *)((u8 *)temp_s0 + 0x10) = arg1;
}
