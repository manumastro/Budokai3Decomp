/* Draft (not built): func_0015AF88 at 0x0015AF88, size 0x284, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015AF88.c:89: warning: assignment makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015AF88.s */

s32 dpmul(s32, s64);                                /* extern */
s32 func_00121F28(s16, s32, s32);               /* extern */
s16 func_00121FE0(s32);                             /* extern */
s16 func_0015AB70(void *, s32, u8, u8 *);           /* extern */

void func_0015AF88(u8 *arg0, s32 arg1) {
    s32 sp0;
    u8 *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_a0;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s4;
    s32 var_v0;
    s64 temp_s2;
    u8 *var_a3;
    u8 *temp_s7;

    var_s4 = 0;
    var_fp = -1;
    temp_v1 = arg0 + (arg1 << 6);
    var_a2 = temp_v1 + 0x210;
    sp14 = 8 / (s32) *(s32 *)((u8 *)arg0 + 0x54);
    var_a3 = temp_v1 + 0x110;
    spC = var_a2;
    sp10 = arg0 + (arg1 * 0x10) + 0x2A8;
    temp_s7 = *(u8 **)((u8 *)((arg1 * 4) + arg0) + 0x80);
    sp0 = 0;
    sp4 = var_a3;
    sp8 = temp_v1 + 0x190;
    if (*(s32 *)((u8 *)arg0 + 0x44) > 0) {
        var_a1 = 0;
        do {
            temp_v0 = func_0015AB70(temp_s7, var_a1, (u8) var_a2, var_a3);
            temp_s1 = var_s4 * 2;
            *(temp_s1 + sp4) = temp_v0;
            temp_s2 = *(s64 *)((u8 *)temp_s7 + 0x80);
            temp_v0_2 = func_00121FE0(dpmul(func_00121F28(temp_v0), temp_s2));
            var_v1 = 0x7FFF;
            if (temp_v0_2 <= 0x7FFF) {
                var_v1 = temp_v0_2;
                if (var_v1 < -0x8000) {
                    var_v1 = -0x8000;
                }
            }
            *(temp_s1 + sp8) = var_v1;
            if (var_v1 & 0x8000) {
                var_v0 = var_v1 - 0x924;
            } else {
                var_v0 = var_v1 + 0x924;
            }
            temp_lo = var_v0 / 4681;
            var_s0 = 7;
            if (temp_lo < 7) {
                var_s0 = temp_lo;
                if (var_s0 < -8) {
                    var_s0 = -8;
                }
            }
            var_a0 = func_00121FE0(dpmul(func_00121F28(var_s0 * *(s16 *)((u8 *)temp_s7 + 0x7C), 0x7FFF, sp8), temp_s2));
            if (var_a0 > 0x7FFF) {
                var_a0 = 0x7FFF;
            } else if (var_a0 < -0x8000) {
                var_a0 = -0x8000;
            }
            *(temp_s1 + spC) = var_a0;
            if ((var_s4 % sp14) == 0) {
                var_fp += 1;
                var_a3 = sp10 + var_fp;
                sp0 = 1;
                *var_a3 = 0;
            } else {
                var_a3 = sp10 + var_fp;
            }
            var_s4 += 1;
            temp_a1 = *(s32 *)((u8 *)arg0 + 0x54);
            temp_v1_2 = 8 - temp_a1;
            temp_a0 = ((s32) ((var_s0 << temp_v1_2) & 0xFF) >> temp_v1_2) << ((sp14 - sp0) * temp_a1);
            sp0 += 1;
            var_a2 = *var_a3 | temp_a0;
            *var_a3 = (u8) var_a2;
            var_a1 = var_s4;
        } while (var_s4 < *(s32 *)((u8 *)arg0 + 0x44));
    }
}
