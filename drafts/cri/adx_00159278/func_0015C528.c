/* Draft (not built): func_0015C528 at 0x0015C528, size 0x16C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015C528.c:64: warning: assignment from incompatible pointer type
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C528.s */

s32 func_0015A988(s32, s32, s32);               /* extern */
s32 func_0015B6B0(void *, s32);                     /* extern */

void func_0015C528(u8 *arg0) {
    s32 *var_s0_2;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 var_a0_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    u16 temp_v0;
    u8 ***var_s0;
    u8 **temp_a3;
    u8 **temp_t0;
    u8 *var_a0;
    u8 *var_s2;
    u8 *var_v1;

    var_s2 = arg0 + 0x2C8;
    var_s3 = 0;
    var_s0 = arg0 + 4;
    temp_s4 = *(s32 *)((u8 *)arg0 + 0xC);
loop_3:
    if (var_s3 < *(s32 *)((u8 *)arg0 + 0x58)) {
        temp_t0 = *var_s0;
        (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_t0) + 0x18))(temp_t0, 1, 2, sp);
        if (sp4 == 0) {
            if (var_s3 >= *(s32 *)((u8 *)arg0 + 0x58)) {
                goto block_6;
            }
        } else {
            temp_a3 = *var_s0;
            var_s0 += 4;
            var_s3 += 1;
            temp_v0 = *sp0;
            *(u16 *)((u8 *)var_s2 + 0) = temp_v0;
            *(u16 *)((u8 *)var_s2 + 4) = temp_v0;
            var_s2 += 2;
            (*(s32 (**)(u8 **, s32, u8 *, u8 **))((u8 *)(*temp_a3) + 0x1C))(temp_a3, 1, sp, temp_a3);
            goto loop_3;
        }
    } else {
block_6:
        if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
            var_s3_2 = *(s32 *)((u8 *)arg0 + 0x58);
            var_v1 = arg0 + 0x88;
            var_a0 = arg0 + 0x8C;
            do {
                var_s3_2 -= 1;
                *(u16 *)((u8 *)var_v1 + 0) = (u16) *(u16 *)((u8 *)var_v1 + 0x240);
                var_v1 += 2;
                *(u16 *)((u8 *)var_a0 + 0) = (u16) *(u16 *)((u8 *)var_a0 + 0x240);
                var_a0 += 2;
            } while (var_s3_2 != 0);
        }
        temp_v0_2 = func_0015B6B0(arg0, temp_s4);
        var_s3_3 = 0;
        if (temp_v0_2 != 0) {
            *(s32 *)((u8 *)arg0 + 0x2C) = (s32) (*(s32 *)((u8 *)arg0 + 0x2C) + temp_v0_2);
            if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
                var_s0_2 = arg0 + 0x80;
                var_a0_2 = *(s32 *)((u8 *)arg0 + 0x80);
loop_12:
                var_s0_2 += 4;
                var_s3_3 += 1;
                func_0015A988(var_a0_2, *(s32 *)((u8 *)arg0 + 0x64), *(s32 *)((u8 *)arg0 + 0x5C));
                if (var_s3_3 < *(s32 *)((u8 *)arg0 + 0x58)) {
                    var_a0_2 = *var_s0_2;
                    goto loop_12;
                }
            }
            *(s8 *)((u8 *)arg0 + 1) = 2;
        }
    }
}
