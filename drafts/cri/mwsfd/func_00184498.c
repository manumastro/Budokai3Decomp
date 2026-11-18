/* Draft (not built): func_00184498 at 0x00184498, size 0x54, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00184498.s */

s32 func_00183A90(s32, s32, s32);               /* extern */

void func_00184498(u8 *arg0, f32 fparg0) {
    s32 temp_a1;
    s32 temp_a3;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x1DC);
    temp_a1 = M2C_ERROR(/* Read from unset register $f1 */);
    func_00183A90((temp_a3 < temp_a1) ? temp_a3 : temp_a1, temp_a3, temp_a3);
}
