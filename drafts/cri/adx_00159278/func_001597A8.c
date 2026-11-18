/* Draft (not built): func_001597A8 at 0x001597A8, size 0x8C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_001597A8.s */

s32 func_00150E10(s32);                             /* extern */
s32 func_001511E8(s32);                             /* extern */
s32 func_001511F0(s32);                             /* extern */

void func_001597A8(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    temp_s0 = func_00150E10(temp_s1);
    temp_s3 = func_001511E8(temp_s1);
    temp_v0 = func_001511F0(temp_s1);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x34);
    temp_s0_2 = temp_s0 - temp_a0;
    temp_s0_3 = (temp_v0 < temp_s0_2) ? temp_v0 : temp_s0_2;
    *(s32 *)((u8 *)arg0 + 0x34) = (s32) (temp_a0 + temp_s0_3);
    *(s32 *)((u8 *)arg0 + 0x2C) = (s32) (*(s32 *)((u8 *)arg0 + 0x2C) + temp_s0_3);
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + temp_s3);
}
