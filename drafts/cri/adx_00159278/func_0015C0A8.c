/* Draft (not built): func_0015C0A8 at 0x0015C0A8, size 0x124, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015C0A8.c:32: warning: assignment makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C0A8.s */

s32 memset(s32, s32, s32);                  /* extern */

void func_0015C0A8(u8 *arg0) {
    s32 temp_s0;
    s32 var_s4;
    s32 var_s5;
    u8 ***temp_s2;
    u8 **temp_a0;
    u8 **temp_a0_2;
    u8 **temp_a0_3;
    u8 *temp_s3;

    var_s5 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
        var_s4 = 0;
loop_2:
        temp_s0 = *(s32 *)((u8 *)arg0 + 0x68) * 2;
        if (temp_s0 > 0) {
            temp_s3 = arg0 + 4;
            temp_s2 = temp_s3 + var_s4;
            temp_a0 = *temp_s2;
            (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_a0) + 0x18))(temp_a0, 0, temp_s0, sp);
            if (sp4 != temp_s0) {
                temp_a0_2 = *temp_s2;
                (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0_2) + 0x1C))(temp_a0_2, 0, sp);
loop_5:
                goto loop_5;
            }
            memset(sp0, 0, sp4);
            temp_a0_3 = *(temp_s3 + var_s4);
            (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0_3) + 0x20))(temp_a0_3, 1, sp);
            goto block_8;
        }
block_8:
        var_s5 += 1;
        var_s4 += 4;
        if (var_s5 >= *(s32 *)((u8 *)arg0 + 0x58)) {
            /* Duplicate return node #9. Try simplifying control flow for better match */
            *(s32 *)((u8 *)arg0 + 0x28) = 0;
            *(s8 *)((u8 *)arg0 + 1) = 1;
            *(s32 *)((u8 *)arg0 + 0x2C) = 0;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
            *(s8 *)((u8 *)arg0 + 3) = 0;
            return;
        }
        goto loop_2;
    }
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s8 *)((u8 *)arg0 + 1) = 1;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s8 *)((u8 *)arg0 + 3) = 0;
}
