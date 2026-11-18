/* Draft (not built): func_0015ABB8 at 0x0015ABB8, size 0x16C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015ABB8.c:49: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015ABB8.s */

s32 memcpy(s32, s32, s32);                      /* extern */

s32 func_0015ABB8(u8 *arg0, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    u32 var_s1;
    u32 var_v0;
    u8 ***temp_fp;
    u8 ***temp_s0;
    u8 ***var_s0;
    u8 **temp_a0;
    u8 **var_a0;
    u8 *temp_a3;

    var_s1 = 0;
    var_s4 = 0;
    temp_fp = arg0 + 4;
    sp10 = arg3;
    if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
        var_s0 = temp_fp;
        var_a0 = *(u8 ***)((u8 *)arg0 + 4);
loop_2:
        var_s0 += 4;
        var_s1 = (*(u32 (**)(u8 **, s32))((u8 *)(*var_a0) + 0x24))(var_a0, 1) >> 1;
        var_v0 = 0;
        if ((s32) var_s1 >= arg2) {
            var_s4 += 1;
            if (var_s4 < *(s32 *)((u8 *)arg0 + 0x58)) {
                var_a0 = *var_s0;
                goto loop_2;
            }
            goto block_6;
        }
    } else {
block_6:
        var_s4_2 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
            var_s5 = 0;
            do {
                var_s1 = 0;
                if (arg2 > 0) {
                    temp_s0 = var_s5 + temp_fp;
loop_10:
                    (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(**temp_s0) + 0x18))(*temp_s0, 1, arg2 * 2, sp);
                    memcpy((var_s1 * 2) + *(var_s5 + sp10), sp0, sp4);
                    temp_a0 = *temp_s0;
                    temp_a3 = *temp_a0;
                    var_s1 += (s32) (sp4 << 0xF) >> 0x10;
                    (*(s32 (**)(u8 **, s32, u8 *, u8 *))((u8 *)temp_a3 + 0x20))(temp_a0, 0, sp, temp_a3);
                    if ((s32) var_s1 < arg2) {
                        goto loop_10;
                    }
                }
                var_s4_2 += 1;
                var_s5 += 4;
            } while (var_s4_2 < *(s32 *)((u8 *)arg0 + 0x58));
        }
        var_v0 = var_s1;
    }
    return (s32) var_v0;
}
