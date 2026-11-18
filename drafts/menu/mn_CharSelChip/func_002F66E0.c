/* Draft (not built): func_002F66E0 at 0x002F66E0, size 0x2F4, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

s32 __umoddi3(s32, s32);                            /* extern */

void func_002F66E0(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_s2;
    s64 temp_a0_3;
    s64 temp_a3;
    s64 temp_a3_2;
    s64 temp_a3_3;
    s64 temp_t6;
    s64 temp_t7;
    s64 temp_v0;
    s64 temp_v1;
    s64 temp_v1_2;
    s64 var_t5;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_a3_4;
    u8 *temp_t0;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t2;
    u8 *temp_t3;
    u8 *temp_t7_2;
    u8 temp_a0_2;
    u8 temp_a2_2;
    void *temp_a0;
    void *temp_t8;
    void *temp_v0_2;
    void *temp_v1_3;
    void *temp_v1_4;

    var_s2 = 2;
    temp_s1 = M2C_FIELD(arg0, u8 *, 3) | ((((s64) M2C_FIELD(arg0, u8 *, 2) << 8) & 0xFF00) | ((((s64) M2C_FIELD(arg0, u8 *, 0) << 0x18) & (0xFF00 << 0x10)) | (((s64) M2C_FIELD(arg0, u8 *, 1) << 0x10) & 0xFF0000)));
    do {
        var_t5 = 0;
        temp_s0 = (0x17 - var_s2) + 4;
        if (var_s2 > 0) {
            if (var_s2 >= 9) {
                do {
                    temp_t1 = arg0 + ((s64) ((var_t5 + temp_s0) << 0x20) >> 0x20);
                    temp_v0 = var_t5 + 1;
                    temp_a2 = arg0 + ((s64) ((temp_v0 + temp_s0) << 0x20) >> 0x20);
                    temp_v1 = var_t5 + 2;
                    M2C_FIELD((((s64) (var_t5 << 0x20) >> 0x20) + sp), u8 *, 0x50) = (u8) *temp_t1;
                    *temp_t1 = 0;
                    temp_a3 = var_t5 + 3;
                    temp_t3 = arg0 + ((s64) ((temp_v1 + temp_s0) << 0x20) >> 0x20);
                    temp_t2 = arg0 + ((s64) ((temp_a3 + temp_s0) << 0x20) >> 0x20);
                    temp_a0 = ((s64) (temp_a3 << 0x20) >> 0x20) + sp;
                    temp_a3_2 = var_t5 + 5;
                    M2C_FIELD((((s64) (temp_v0 << 0x20) >> 0x20) + sp), u8 *, 0x50) = (u8) *temp_a2;
                    temp_v1_2 = var_t5 + 4;
                    *temp_a2 = 0;
                    temp_t1_2 = arg0 + ((s64) ((temp_v1_2 + temp_s0) << 0x20) >> 0x20);
                    temp_t0 = arg0 + ((s64) ((temp_a3_2 + temp_s0) << 0x20) >> 0x20);
                    temp_a3_3 = var_t5 + 6;
                    temp_v1_3 = ((s64) (temp_v1_2 << 0x20) >> 0x20) + sp;
                    temp_v0_2 = ((s64) (temp_a3_2 << 0x20) >> 0x20) + sp;
                    M2C_FIELD((((s64) (temp_v1 << 0x20) >> 0x20) + sp), u8 *, 0x50) = (u8) *temp_t3;
                    temp_t8 = ((s64) (temp_a3_3 << 0x20) >> 0x20) + sp;
                    *temp_t3 = 0;
                    temp_a3_4 = arg0 + ((s64) ((temp_a3_3 + temp_s0) << 0x20) >> 0x20);
                    temp_a2_2 = *temp_t2;
                    temp_t6 = var_t5 + 7;
                    temp_t7 = temp_t6 + temp_s0;
                    var_t5 += 8;
                    temp_t7_2 = arg0 + ((s64) (temp_t7 << 0x20) >> 0x20);
                    M2C_FIELD(temp_a0, u8 *, 0x50) = temp_a2_2;
                    *temp_t2 = 0;
                    M2C_FIELD(temp_v1_3, u8 *, 0x50) = (u8) *temp_t1_2;
                    *temp_t1_2 = 0;
                    M2C_FIELD(temp_v0_2, u8 *, 0x50) = (u8) *temp_t0;
                    *temp_t0 = 0;
                    M2C_FIELD(temp_t8, u8 *, 0x50) = (u8) *temp_a3_4;
                    *temp_a3_4 = 0;
                    M2C_FIELD((((s64) (temp_t6 << 0x20) >> 0x20) + sp), u8 *, 0x50) = (u8) *temp_t7_2;
                    *temp_t7_2 = 0;
                } while (var_t5 < (var_s2 - 8));
            }
            if (var_t5 < var_s2) {
                do {
                    temp_a1 = arg0 + ((s64) ((var_t5 + temp_s0) << 0x20) >> 0x20);
                    temp_a0_2 = *temp_a1;
                    temp_v1_4 = ((s64) (var_t5 << 0x20) >> 0x20) + sp;
                    var_t5 += 1;
                    M2C_FIELD(temp_v1_4, u8 *, 0x50) = temp_a0_2;
                    *temp_a1 = 0;
                } while (var_t5 < var_s2);
            }
        }
        temp_v0_3 = __umoddi3(temp_s1, var_s2);
        var_a1 = 0;
        if (var_s2 > 0) {
            do {
                temp_a0_3 = temp_v0_3 + var_a1;
                if (temp_a0_3 >= var_s2) {
                    *(arg0 + ((s64) ((temp_s0 + var_a1) << 0x20) >> 0x20)) = M2C_FIELD((((s64) ((temp_a0_3 - var_s2) << 0x20) >> 0x20) + sp), u8 *, 0x50);
                } else {
                    *(arg0 + ((s64) ((temp_s0 + var_a1) << 0x20) >> 0x20)) = M2C_FIELD((((s64) (temp_a0_3 << 0x20) >> 0x20) + sp), u8 *, 0x50);
                }
                var_a1 += 1;
            } while (var_a1 < var_s2);
        }
        var_s2 += 1;
    } while (var_s2 < 0x18);
}
