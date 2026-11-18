/* Draft (not built): func_0015AAD8 at 0x0015AAD8, size 0x94, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015AAD8.s */

s64 func_00121C78(s64, s32);                        /* extern */
s32 func_00121F28(s32, s32, s32, s32);              /* extern */
extern s32 D_0040E080;
extern s64 D_00461798;
extern s64 D_004617A0;

void func_0015AAD8(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s64 var_v0;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x78);
    temp_v0 = ((s32) (temp_a3 - 1) / 7) + 1;
    temp_a1 = temp_v0 < D_0040E080;
    temp_v1 = (temp_a1 != 0) ? temp_v0 : D_0040E080;
    temp_a2 = temp_v1 < 1;
    *(s16 *)((u8 *)arg0 + 0x7C) = (s16) ((temp_a2 != 0) ? 1 : temp_v1);
    if (temp_a3 == 0) {
        var_v0 = D_00461798;
    } else {
        var_v0 = func_00121C78(D_004617A0, func_00121F28(temp_a3, temp_a1, temp_a2, temp_a3));
    }
    *(s64 *)((u8 *)arg0 + 0x80) = var_v0;
}
