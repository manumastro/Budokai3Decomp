/* Draft (not built): func_0016A590 at 0x0016A590, size 0x104, segment cri/lsc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/lsc/func_0016A590.s */

s32 func_00169A00(void *, s32, s32, s32);       /* extern */
s32 func_0016A0F8(s32, s32, s32, u8);           /* extern */

void func_0016A590(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 *temp_v0;

    var_s2 = 0;
    var_s3 = 0;
    var_s4 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x28) == 0) {
        goto block_8;
    }
    if (*(s8 *)((u8 *)arg0 + 3) != 1) {
        goto block_3;
    }
    temp_v0 = arg0 + (*(s32 *)((u8 *)arg0 + 0x20) << 5) + 0x38;
    var_s4 = *(s32 *)((u8 *)temp_v0 + 0x10);
    var_s3 = *(s32 *)((u8 *)temp_v0 + 4);
    var_s2 = *(s32 *)((u8 *)temp_v0 + 0xC);
    goto block_4;
block_3:
block_4:
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x20) + 1;
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x20) + 0x10;
    temp_a1 = temp_a0 < 0;
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x24) - 1;
    temp_a0_2 = temp_a0 - (((s32) ((temp_a1 != 0) ? temp_a2 : temp_a0) >> 4) * 0x10);
    *(s32 *)((u8 *)arg0 + 0x24) = temp_v1;
    *(s32 *)((u8 *)arg0 + 0x20) = temp_a0_2;
    if (temp_v1 > 0) {
        goto block_6;
    }
    func_0016A0F8(temp_a0_2, temp_a1, temp_a2, (u8) *(s8 *)((u8 *)arg0 + 3));
    *(s8 *)((u8 *)arg0 + 1) = 1;
block_6:
    if ((s8) (u8) *(s8 *)((u8 *)arg0 + 3) != 1) {
        goto block_8;
    }
    func_00169A00(arg0, var_s3, var_s2, var_s4);
block_8:
    return;
}
