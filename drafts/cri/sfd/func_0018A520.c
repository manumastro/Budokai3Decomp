/* Draft (not built): func_0018A520 at 0x0018A520, size 0xB8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0018A520.c:19: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd/func_0018A520.s */

s32 func_0018A750(void *, s32, s32);        /* extern */

void func_0018A520(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_s2;
    s32 *var_s3;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_v1 = M2C_ERROR(/* Read from unset register $t0 */) * 4;
    temp_s2 = arg3 + temp_v1;
    temp_s0 = arg1 + (((((M2C_ERROR(/* Read from unset register $t0 */) * 8) - M2C_ERROR(/* Read from unset register $t0 */)) * 4) + M2C_ERROR(/* Read from unset register $t0 */)) * 4);
    func_0018A750(temp_s0, 1, *temp_s2 != 0);
    temp_s0_2 = temp_s0 + 0x10;
    var_s3 = arg0 + 0x1B84;
    *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) *(arg2 + temp_v1);
    *(s32 *)((u8 *)temp_s0_2 + 4) = (s32) *temp_s2;
    *(s32 *)((u8 *)temp_s0_2 + 8) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0xC) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x10) = (s32) (arg0 + 0x1620);
    var_v0 = 0xF;
    do {
        var_v0 -= 1;
        *var_s3 = 0;
        var_s3 -= 0x5C;
    } while (var_v0 >= 0);
}
