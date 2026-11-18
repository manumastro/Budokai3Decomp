/* Draft (not built): func_0015B210 at 0x0015B210, size 0x1C0, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015B210.c:74: warning: assignment from incompatible pointer type
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015B210.s */

s32 func_0015A810(s32, u16 *, u16 *, s64);      /* extern */
s32 func_0015ABB8(s32, s32, s32 *, s32, s32);       /* extern */
s32 func_0015AD28(void *, s32);                 /* extern */
s32 func_0015AF88(void *, s32, u16 *);          /* extern */
s32 memset(s32, s32, s32);                  /* extern */

s32 func_0015B210(u8 *arg0) {
    u16 sp10;
    u16 sp12;
    s32 *var_s2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s64 *var_s4;
    s64 temp_a3;
    u16 *temp_a2_2;
    u16 *var_s3_2;
    u16 temp_v0_2;
    u8 **var_s1;
    u8 *temp_v1;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0x30);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x44);
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x3C) - temp_v0;
    temp_s1_2 = (temp_a2 < temp_s1) int temp_a2 : temp_s1;
    var_v0 = func_0015ABB8(temp_v0, temp_s1_2, sp, arg0 + 0x90, arg0 + 0xD0);
    if (var_v0 != 0) {
        if (temp_s1_2 < *(s32 *)((u8 *)arg0 + 0x44)) {
            var_s3 = 0;
            if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
                var_s2 = sp;
                var_v0_2 = *sp;
loop_4:
                var_s2 += 4;
                if (var_v0_2 != 0) {
                    memset((temp_s1_2 * 2) + var_v0_2, 0, (*(s32 *)((u8 *)arg0 + 0x44) - temp_s1_2) * 2);
                }
                var_s3 += 1;
                if (var_s3 < *(s32 *)((u8 *)arg0 + 0x58)) {
                    var_v0_2 = *var_s2;
                    goto loop_4;
                }
            }
        }
        var_s5 = 0;
        *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + *(s32 *)((u8 *)arg0 + 0x44));
        if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
            var_s4 = arg0 + 0x298;
            var_s3_2 = arg0 + 0x290;
            var_s1 = arg0 + 0x80;
            var_s2_2 = 0x80;
            var_a1 = 0;
            do {
                func_0015AD28(arg0, var_a1);
                temp_v1 = *var_s1;
                temp_a3 = *(s64 *)((u8 *)temp_v1 + 0x80);
                temp_v0_2 = *(u16 *)((u8 *)temp_v1 + 0x7C);
                var_s1 += 4;
                *var_s3_2 = temp_v0_2;
                var_s3_2 += 2;
                *var_s4 = temp_a3;
                var_s4 += 8;
                func_0015A810(*(s32 *)((u8 *)temp_v1 + 0x88), &sp10, &sp12, temp_a3);
                temp_a2_2 = arg0 + 0xC + var_s2_2;
                temp_a1 = var_s5;
                *(arg0 + 8 + var_s2_2) = sp10;
                *temp_a2_2 = sp12;
                var_s5 += 1;
                var_s2_2 += 2;
                func_0015AF88(arg0, temp_a1, temp_a2_2);
                var_a1 = var_s5;
            } while (var_s5 < *(s32 *)((u8 *)arg0 + 0x58));
        }
        var_v0 = *(s32 *)((u8 *)arg0 + 0x44);
    }
    return var_v0;
}
