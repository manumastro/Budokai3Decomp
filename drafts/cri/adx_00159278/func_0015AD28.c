/* Draft (not built): func_0015AD28 at 0x0015AD28, size 0x260, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0015AD28.c:90: parse error before "int"
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015AD28.s */

s32 dpmul(s32, s64);                                /* extern */
s32 func_00121F28(s32);                             /* extern */
s16 func_00121FE0(s32);                             /* extern */
s32 func_0015A800(s32, s16, s16);               /* extern */
s32 func_0015A810(s32, void *, s16 *);          /* extern */
s32 func_0015A828(s32, s16);                    /* extern */
s32 func_0015A9E0(void *, s16, s16);            /* extern */
s32 func_0015A9F0(void *, s32, s16);            /* extern */
s32 func_0015AAD8(void *);                      /* extern */
s32 func_0015AB70(void *, s32);                     /* extern */
s32 func_0015ABA8(void *, s32, s8);             /* extern */

s32 func_0015AD28(u8 *arg0, s32 arg1) {
    s16 sp2;
    s32 sp4;
    s16 *var_s0;
    s16 temp_a2;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_v0_3;
    s16 var_a1;
    s16 var_v0;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0_2;
    s32 var_v1;
    u8 *temp_s1;

    var_s2 = 0;
    temp_s6 = arg0 + 0xC;
    temp_s7 = arg0 + 8;
    temp_fp = arg1 * 2;
    temp_v0 = temp_fp + 0x80;
    temp_s1 = *(u8 **)((u8 *)((arg1 * 4) + arg0) + 0x80);
    sp4 = *(s32 *)((u8 *)temp_s1 + 0x88);
    func_0015A9E0(temp_s1, *(temp_s7 + temp_v0), *(temp_s6 + temp_v0));
    if (*(s32 *)((u8 *)arg0 + 0x44) > 0) {
        var_s0 = (arg1 << 6) + arg0 + 0x90;
        do {
            temp_a2 = *var_s0;
            var_s0 += 2;
            temp_a1 = var_s2;
            var_s2 += 1;
            func_0015A9F0(temp_s1, temp_a1, temp_a2);
        } while (var_s2 < *(s32 *)((u8 *)arg0 + 0x44));
    }
    var_s2_2 = 0;
    func_0015AAD8(temp_s1);
    temp_v0_2 = temp_fp + 0x80;
    func_0015A800(*(s32 *)((u8 *)temp_s1 + 0x88), *(temp_s7 + temp_v0_2), *(temp_s6 + temp_v0_2));
    if (*(s32 *)((u8 *)arg0 + 0x44) > 0) {
        do {
            temp_s0 = *(s16 *)((u8 *)((var_s2_2 * 2) + ((arg1 << 6) + arg0)) + 0x90);
            func_0015A810(sp4, sp, &sp2);
            func_0015A9E0(temp_s1, sp0, sp2);
            func_0015A9F0(temp_s1, var_s2_2, temp_s0);
            temp_v0_3 = func_00121FE0(dpmul(func_00121F28(func_0015AB70(temp_s1, var_s2_2)), *(s64 *)((u8 *)temp_s1 + 0x80)));
            if (temp_v0_3 > 0x7FFF) {
                var_v0 = 0x7FFF;
            } else {
                var_v0 = (temp_v0_3 >= -0x8000) int temp_v0_3 : -0x8000;
            }
            if (var_v0 >= 0) {
                var_v0_2 = var_v0 + 0x924;
            } else {
                var_v0_2 = var_v0 - 0x924;
            }
            temp_lo = var_v0_2 / 4681;
            var_v1 = 7;
            if (temp_lo < 7) {
                var_v1 = temp_lo;
                if (var_v1 < -8) {
                    var_v1 = -8;
                }
            }
            func_0015ABA8(temp_s1, var_s2_2, (s8) var_v1);
            temp_s0_2 = var_v1 * *(s16 *)((u8 *)temp_s1 + 0x7C);
            if (temp_s0_2 > 0x7FFF) {
                var_a1 = 0x7FFF;
            } else {
                var_a1 = (temp_s0_2 >= -0x8000) int temp_s0_2 : -0x8000;
            }
            var_s2_2 += 1;
            func_0015A828(*(s32 *)((u8 *)temp_s1 + 0x88), var_a1);
        } while (var_s2_2 < *(s32 *)((u8 *)arg0 + 0x44));
    }
    return 0;
}
