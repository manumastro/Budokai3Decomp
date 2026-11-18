/* Draft (not built): func_0018B298 at 0x0018B298, size 0xF4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018B298.c:42: too few arguments to function `func_0018D650'
 * Original: asm/nonmatchings/cri/sfd/func_0018B298.s */

s32 func_0018D650(void *, void *, s32, s32);        /* extern */
s32 func_0018D908(void *, void *);              /* extern */
s32 func_0018D920(void *);                      /* extern */

s32 func_0018B298(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_s0;

    var_v0 = 0;
    var_s3 = 0;
    temp_a2 = arg0 + 0x1280 + (arg1 * 0x74);
    if (arg2 != 0) {
        if (*(s32 *)((u8 *)temp_a2 + 4) != 0) {
            temp_s0 = temp_a2 + 0x10;
            func_0018D908(sp, temp_a2);
            temp_a2_2 = *(s32 *)((u8 *)temp_s0 + 0x1C);
            temp_v0 = *(s32 *)((u8 *)temp_s0 + 0x20) + arg2;
            temp_a3 = temp_v0 - temp_a2_2;
            *(s32 *)((u8 *)temp_s0 + 0x20) = temp_v0;
            if (temp_v0 >= temp_a2_2) {
                *(s32 *)((u8 *)temp_s0 + 0x20) = temp_a3;
            }
            temp_v0_2 = *(s32 *)((u8 *)temp_s0 + 0x28) + arg2;
            *(s32 *)((u8 *)temp_s0 + 0x28) = temp_v0_2;
            if ((*(s32 *)((u8 *)temp_s0 + 0x2C) + temp_a2_2) < temp_v0_2) {
                var_s3 = func_0018D650(arg0, (u8 *)0xFF000406, temp_a2_2, temp_a3);
            }
            *(s32 *)((u8 *)arg0 + 0x44) = 1;
            func_0018D920(sp);
            var_v0 = var_s3;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return var_v0;
        }
        return func_0018D650((u8 *)0xFF000401, temp_a2);
    }
    return var_v0;
}
