/* Draft (not built): func_0019BAD8 at 0x0019BAD8, size 0xB8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BAD8.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0019BB90(void *, s32);                 /* extern */
s32 func_0019BBD8(s32, s32 *);                      /* extern */

void func_0019BAD8(s32 arg0, u8 *arg1, s32 **arg2) {
    s32 *temp_s3;
    s32 *var_s1;
    s32 temp_a1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *var_s0;

    temp_s3 = *arg2;
    var_s0 = arg1;
    var_s1 = temp_s3;
    var_s2 = 8;
    *(s32 *)((u8 *)var_s0 + 8) = 0;
loop_1:
    temp_a0 = var_s0;
    var_s2 -= 1;
    var_s0 += 0x44;
    temp_a1 = *var_s1;
    var_s1 += 4;
    func_0019BB90(temp_a0, temp_a1);
    if (var_s2 >= 0) {
        *(s32 *)((u8 *)var_s0 + 8) = 0;
        goto loop_1;
    }
    if (func_0019BBD8(arg0, temp_s3) != 0) {
        func_0018D650(arg0, 0xFF000302);
    }
}
