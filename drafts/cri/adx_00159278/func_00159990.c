/* Draft (not built): func_00159990 at 0x00159990, size 0x144, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00159990.c:45: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_00159278/func_00159990.s */

s32 memset(s32, s32, s32);                  /* extern */

void func_00159990(u8 *arg0) {
    s32 (*temp_v1)(u8 **, s32, u8 *);
    s32 temp_s1;
    s32 var_s1;
    s32 var_s3;
    s32 var_s3_2;
    u32 temp_s4;
    u8 ***var_s0;
    u8 ***var_s0_2;
    u8 **temp_a0;
    u8 **temp_a0_2;
    u8 **temp_a0_3;
    u8 **temp_a0_4;
    u8 *temp_a3;

    var_s3 = 0;
    var_s1 = *(s32 *)((u8 *)arg0 + 0xA0) * 2;
    if (*(s8 *)((u8 *)arg0 + 2) > 0) {
        var_s0 = arg0 + 0xC;
        do {
            temp_a0 = *var_s0;
            var_s3 += 1;
            (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_a0) + 0x18))(temp_a0, 0, 0x7FFFFFFF, sp);
            temp_a0_2 = *var_s0;
            temp_a3 = *temp_a0_2;
            var_s0 += 4;
            var_s1 = (var_s1 >= sp4) int sp4 : var_s1;
            (*(s32 (**)(u8 **, s32, u8 *, u8 *))((u8 *)temp_a3 + 0x1C))(temp_a0_2, 0, sp, temp_a3);
        } while (var_s3 < *(s8 *)((u8 *)arg0 + 2));
    }
    temp_s4 = (u32) var_s1 >> 1;
    temp_s1 = temp_s4 * 2;
    if (temp_s1 > 0) {
        var_s3_2 = 0;
        if (((u8) *(s8 *)((u8 *)arg0 + 2) << 0x18) > 0) {
            var_s0_2 = arg0 + 0xC;
            do {
                temp_a0_3 = *var_s0_2;
                var_s3_2 += 1;
                (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_a0_3) + 0x18))(temp_a0_3, 0, temp_s1, sp);
                memset(sp0, 0, temp_s1);
                temp_a0_4 = *var_s0_2;
                temp_v1 = *(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0_4) + 0x20);
                var_s0_2 += 4;
                temp_v1(temp_a0_4, 1, sp);
            } while (var_s3_2 < *(s8 *)((u8 *)arg0 + 2));
        }
        *(s32 *)((u8 *)arg0 + 0xA0) = (s32) (*(s32 *)((u8 *)arg0 + 0xA0) - temp_s4);
    }
}
