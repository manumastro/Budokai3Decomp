/* Draft (not built): func_00159AD8 at 0x00159AD8, size 0x134, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00159AD8.c:40: warning: assignment from incompatible pointer type
 * Original: asm/nonmatchings/cri/adx_00159278/func_00159AD8.s */

void func_00159AD8(u8 *arg0) {
    s32 (*temp_v1)(u8 **, s32, u8 *);
    s32 temp_s2;
    s32 var_s2;
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
    var_s2 = *(s32 *)((u8 *)arg0 + 0xA4) * 2;
    if (*(s8 *)((u8 *)arg0 + 2) > 0) {
        var_s0 = arg0 + 0xC;
        do {
            temp_a0 = *var_s0;
            var_s3 += 1;
            (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_a0) + 0x18))(temp_a0, 1, 0x7FFFFFFF, sp);
            temp_a0_2 = *var_s0;
            temp_a3 = *temp_a0_2;
            var_s0 += 4;
            var_s2 = (var_s2 >= sp4) int sp4 : var_s2;
            (*(s32 (**)(u8 **, s32, u8 *, u8 *))((u8 *)temp_a3 + 0x1C))(temp_a0_2, 1, sp, temp_a3);
        } while (var_s3 < *(s8 *)((u8 *)arg0 + 2));
    }
    temp_s4 = (u32) var_s2 >> 1;
    temp_s2 = temp_s4 * 2;
    if (temp_s2 > 0) {
        var_s3_2 = 0;
        if (((u8) *(s8 *)((u8 *)arg0 + 2) << 0x18) > 0) {
            var_s0_2 = arg0 + 0xC;
            do {
                temp_a0_3 = *var_s0_2;
                var_s3_2 += 1;
                (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_a0_3) + 0x18))(temp_a0_3, 1, temp_s2, sp);
                temp_a0_4 = *var_s0_2;
                temp_v1 = *(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0_4) + 0x20);
                var_s0_2 += 4;
                temp_v1(temp_a0_4, 0, sp);
            } while (var_s3_2 < *(s8 *)((u8 *)arg0 + 2));
        }
        *(s32 *)((u8 *)arg0 + 0xA4) = (s32) (*(s32 *)((u8 *)arg0 + 0xA4) - temp_s4);
    }
}
