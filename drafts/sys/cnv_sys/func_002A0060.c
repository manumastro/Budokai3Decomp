/* Draft (not built): func_002A0060 at 0x002A0060, size 0x24C, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

s32 amHeap_Alloc(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK memset(s32, M2C_UNK, s32);                  /* extern */
extern M2C_UNK D_0046EA58;
extern void *D_004708CC;

void func_002A0060(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_t2;
    s32 temp_t3;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s4;
    s32 var_s5;
    s32 var_t0;
    s32 var_t1;
    s32 var_t3;
    void *temp_s2;

    temp_s2 = D_004708CC;
    temp_s0 = M2C_FIELD(temp_s2, s32 *, 8);
    temp_s1 = M2C_FIELD(temp_s2, s32 *, 0);
    if (temp_s0 != 0) {
        M2C_FIELD(temp_s2, s32 *, 0x48) = amHeap_Alloc(temp_s1 * 4, 0, &D_0046EA58, 0x510);
        var_s5 = 0;
        if (temp_s1 > 0) {
            var_s4 = 0;
            temp_s3 = temp_s0 << 5;
            do {
                *(M2C_FIELD(temp_s2, s32 *, 0x48) + var_s4) = amHeap_Alloc(temp_s3, 0, &D_0046EA58, 0x512);
                memset(*(M2C_FIELD(temp_s2, s32 *, 0x48) + var_s4), 0, temp_s3);
                var_s5 += 1;
                var_s4 += 4;
            } while (var_s5 < temp_s1);
        }
        M2C_FIELD(temp_s2, s32 *, 0x54) = amHeap_Alloc(temp_s0 * 4, 0, &D_0046EA58, 0x51E);
        var_t1 = 0;
        if (temp_s0 > 0) {
            var_a2 = 0;
            var_a1 = 0;
            do {
                var_t0 = 0;
                *(M2C_FIELD(temp_s2, s32 *, 0x54) + var_a2) = -1;
                if (temp_s1 > 0) {
                    var_a0 = 0;
                    if (temp_s1 >= 9) {
                        do {
                            var_t0 += 8;
                            *(var_a1 + *(M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0)) = -1;
                            *(var_a1 + M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 4)) = -1;
                            *(var_a1 + M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 8)) = -1;
                            *(var_a1 + M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 0xC)) = -1;
                            *(var_a1 + M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 0x10)) = -1;
                            *(var_a1 + M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 0x14)) = -1;
                            *(var_a1 + M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 0x18)) = -1;
                            temp_t3 = M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x48) + var_a0), s32 *, 0x1C);
                            var_a0 += 0x20;
                            *(var_a1 + temp_t3) = -1;
                        } while (var_t0 < (temp_s1 - 8));
                    }
                    var_t3 = var_t0 * 4;
                    if (var_t0 < temp_s1) {
                        do {
                            var_t0 += 1;
                            temp_t2 = *(M2C_FIELD(temp_s2, s32 *, 0x48) + var_t3);
                            var_t3 += 4;
                            *(var_a1 + temp_t2) = -1;
                        } while (var_t0 < temp_s1);
                    }
                }
                var_t1 += 1;
                var_a2 += 4;
                var_a1 += 0x20;
            } while (var_t1 < temp_s0);
        }
    } else {
        M2C_FIELD(temp_s2, s32 *, 0x48) = 0;
        M2C_FIELD(temp_s2, s32 *, 0x54) = 0;
    }
}
