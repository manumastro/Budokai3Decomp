/* Draft (not built): func_001514C8 at 0x001514C8, size 0x188, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 72 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001514C8.s */

s32 func_00151438(s32, s32, s32, s32);          /* extern */
s32 func_001514A8(s32, s32, s32, s32);          /* extern */
s32 func_00161B80(s32);                             /* extern */

void func_001514C8(u8 *arg0) {
    s32 sp0;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    u8 *temp_s4;

    temp_s4 = arg0 + 0x48;
    temp_s1 = *(s32 *)((u8 *)temp_s4 + 0x10);
    temp_s2 = (*(s32 *)((u8 *)temp_s4 + 0x28) + temp_s1) - 1;
    temp_s7 = *(s32 *)((u8 *)arg0 + 0x40);
    temp_fp = *(s32 *)((u8 *)temp_s4 + 0x14);
    sp0 = *(s32 *)((u8 *)arg0 + 0x44);
    temp_s3 = *(s32 *)((u8 *)temp_s4 + 0xC);
    temp_s0 = temp_s2 % temp_s1;
    temp_s2_2 = temp_s2 / temp_s1;
    temp_s5 = *(s32 *)((u8 *)temp_s4 + 0x20);
    temp_v0 = func_00161B80(*(s32 *)((u8 *)arg0 + 8));
    temp_v1 = *(s32 *)((u8 *)temp_s4 + 8);
    temp_lo = (s32) (temp_v0 * temp_s1) / temp_v1;
    *(s32 *)((u8 *)arg0 + 0x94) = (s32) (temp_v0 * temp_s3);
    temp_s0_2 = (temp_v0 < (temp_s2_2 * temp_v1)) ? temp_lo : (temp_lo - ((temp_s1 - temp_s0) - 1));
    temp_s5_2 = temp_s5 + temp_s0_2;
    *(s32 *)((u8 *)arg0 + 0x90) = temp_s0_2;
    temp_s5_3 = temp_s5_2 - temp_s7;
    if (temp_s5_2 < temp_s7) {
        goto block_7;
    }
    if (temp_v1 == 2) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)arg0 + 0xE8) == 0) {
        goto block_5;
    }
block_3:
    func_00151438(temp_fp, temp_s7, sp0, temp_s5_3);
    return;
block_5:
    func_001514A8(temp_fp, temp_s7, sp0, temp_s5_3);
    return;
block_7:
    return;
}
