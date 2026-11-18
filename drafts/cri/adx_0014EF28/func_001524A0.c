/* Draft (not built): func_001524A0 at 0x001524A0, size 0x58, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001524A0.s */

s32 func_00151F88();                            /* extern */
s32 func_00152100();                            /* extern */
s32 func_00152298();                            /* extern */

void func_001524A0(u8 *arg0) {
    s16 temp_v1;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x9C);
    if (temp_v1 != 2) {
        goto block_3;
    }
    func_00152298();
    return;
block_3:
    if (temp_v1 != 1) {
        goto block_6;
    }
    func_00152100();
    return;
block_6:
    if (temp_v1 != 0) {
        goto block_9;
    }
    func_00151F88();
    return;
block_9:
    return;
}
