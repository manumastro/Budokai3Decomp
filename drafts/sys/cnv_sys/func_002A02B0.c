/* Draft (not built): func_002A02B0 at 0x002A02B0, size 0x444, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

s32 amHeap_Alloc(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK memset(s32, M2C_UNK, s32);                  /* extern */
extern M2C_UNK D_0046EA58;
extern void *D_004708CC;

void func_002A02B0(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s2;
    s32 var_t1;
    s32 var_t2;
    s32 var_t4;
    s32 var_v1;
    void *temp_s5;
    void *temp_t3;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t4_3;
    void *temp_t4_4;
    void *temp_t4_5;
    void *temp_t4_6;
    void *temp_t4_7;
    void *temp_t4_8;

    temp_s5 = D_004708CC;
    temp_s4 = M2C_FIELD(temp_s5, s32 *, 0);
    temp_s3 = M2C_FIELD(temp_s5, s32 *, 4);
    if ((temp_s4 != 0) && (temp_s3 != 0)) {
        M2C_FIELD(temp_s5, s32 *, 0x44) = amHeap_Alloc(temp_s4 * 4, 0, &D_0046EA58, 0x4DF);
        var_s2 = 0;
        if (temp_s4 > 0) {
            var_s1 = 0;
            temp_s0 = temp_s3 * 0xE0;
            do {
                *(M2C_FIELD(temp_s5, s32 *, 0x44) + var_s1) = amHeap_Alloc(temp_s0, 0, &D_0046EA58, 0x4E1);
                memset(*(M2C_FIELD(temp_s5, s32 *, 0x44) + var_s1), 0, temp_s0);
                var_a1 = 0;
                if (temp_s3 > 0) {
                    if (temp_s3 >= 9) {
                        var_v1 = 0;
                        do {
                            var_a1 += 8;
                            *(*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0xE0) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0x1C0) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0x2A0) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0x380) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0x460) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0x540) = -1;
                            M2C_FIELD((*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_v1), s32 *, 0x620) = -1;
                            var_v1 += 0x700;
                        } while (var_a1 < (temp_s3 - 8));
                    }
                    if (var_a1 < temp_s3) {
                        var_a2 = var_a1 * 0xE0;
                        do {
                            var_a1 += 1;
                            *(*(var_s1 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2) = -1;
                            var_a2 += 0xE0;
                        } while (var_a1 < temp_s3);
                    }
                }
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < temp_s4);
        }
        temp_s0_2 = temp_s3 * 8;
        M2C_FIELD(temp_s5, s32 *, 0x50) = amHeap_Alloc(temp_s0_2, 0, &D_0046EA58, 0x4E8);
        memset(M2C_FIELD(temp_s5, s32 *, 0x50), 0, temp_s0_2);
        var_t2 = 0;
        if (temp_s4 > 0) {
            var_a3 = 0;
            do {
                var_t1 = 0;
                if (temp_s3 > 0) {
                    var_a2_2 = 0;
                    if (temp_s3 >= 9) {
                        do {
                            var_t1 += 8;
                            temp_t4 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4, s32 *, 0x30) = 0x44;
                            M2C_FIELD(temp_t4, s32 *, 0x60) = 0x3F800000;
                            M2C_FIELD(temp_t4, s32 *, 0x64) = 0x3F800000;
                            M2C_FIELD(temp_t4, s32 *, 0xB0) = 0x3F800000;
                            M2C_FIELD(temp_t4, s32 *, 0xB4) = 0x3F800000;
                            M2C_FIELD(temp_t4, s32 *, 0x20) = 0x43960000;
                            M2C_FIELD(temp_t4, s32 *, 0x24) = 0x43960000;
                            temp_t4_2 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_2, s32 *, 0x110) = 0x44;
                            M2C_FIELD(temp_t4_2, s32 *, 0x140) = 0x3F800000;
                            M2C_FIELD(temp_t4_2, s32 *, 0x144) = 0x3F800000;
                            M2C_FIELD(temp_t4_2, s32 *, 0x190) = 0x3F800000;
                            M2C_FIELD(temp_t4_2, s32 *, 0x194) = 0x3F800000;
                            M2C_FIELD(temp_t4_2, s32 *, 0x100) = 0x43960000;
                            M2C_FIELD(temp_t4_2, s32 *, 0x104) = 0x43960000;
                            temp_t4_3 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_3, s32 *, 0x1F0) = 0x44;
                            M2C_FIELD(temp_t4_3, s32 *, 0x220) = 0x3F800000;
                            M2C_FIELD(temp_t4_3, s32 *, 0x224) = 0x3F800000;
                            M2C_FIELD(temp_t4_3, s32 *, 0x270) = 0x3F800000;
                            M2C_FIELD(temp_t4_3, s32 *, 0x274) = 0x3F800000;
                            M2C_FIELD(temp_t4_3, s32 *, 0x1E0) = 0x43960000;
                            M2C_FIELD(temp_t4_3, s32 *, 0x1E4) = 0x43960000;
                            temp_t4_4 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_4, s32 *, 0x2D0) = 0x44;
                            M2C_FIELD(temp_t4_4, s32 *, 0x300) = 0x3F800000;
                            M2C_FIELD(temp_t4_4, s32 *, 0x304) = 0x3F800000;
                            M2C_FIELD(temp_t4_4, s32 *, 0x350) = 0x3F800000;
                            M2C_FIELD(temp_t4_4, s32 *, 0x354) = 0x3F800000;
                            M2C_FIELD(temp_t4_4, s32 *, 0x2C0) = 0x43960000;
                            M2C_FIELD(temp_t4_4, s32 *, 0x2C4) = 0x43960000;
                            temp_t4_5 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_5, s32 *, 0x3B0) = 0x44;
                            M2C_FIELD(temp_t4_5, s32 *, 0x3E0) = 0x3F800000;
                            M2C_FIELD(temp_t4_5, s32 *, 0x3E4) = 0x3F800000;
                            M2C_FIELD(temp_t4_5, s32 *, 0x430) = 0x3F800000;
                            M2C_FIELD(temp_t4_5, s32 *, 0x434) = 0x3F800000;
                            M2C_FIELD(temp_t4_5, s32 *, 0x3A0) = 0x43960000;
                            M2C_FIELD(temp_t4_5, s32 *, 0x3A4) = 0x43960000;
                            temp_t4_6 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_6, s32 *, 0x490) = 0x44;
                            M2C_FIELD(temp_t4_6, s32 *, 0x4C0) = 0x3F800000;
                            M2C_FIELD(temp_t4_6, s32 *, 0x4C4) = 0x3F800000;
                            M2C_FIELD(temp_t4_6, s32 *, 0x510) = 0x3F800000;
                            M2C_FIELD(temp_t4_6, s32 *, 0x514) = 0x3F800000;
                            M2C_FIELD(temp_t4_6, s32 *, 0x480) = 0x43960000;
                            M2C_FIELD(temp_t4_6, s32 *, 0x484) = 0x43960000;
                            temp_t4_7 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_7, s32 *, 0x570) = 0x44;
                            M2C_FIELD(temp_t4_7, s32 *, 0x5A0) = 0x3F800000;
                            M2C_FIELD(temp_t4_7, s32 *, 0x5A4) = 0x3F800000;
                            M2C_FIELD(temp_t4_7, s32 *, 0x5F0) = 0x3F800000;
                            M2C_FIELD(temp_t4_7, s32 *, 0x5F4) = 0x3F800000;
                            M2C_FIELD(temp_t4_7, s32 *, 0x560) = 0x43960000;
                            M2C_FIELD(temp_t4_7, s32 *, 0x564) = 0x43960000;
                            temp_t4_8 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_a2_2;
                            M2C_FIELD(temp_t4_8, s32 *, 0x650) = 0x44;
                            var_a2_2 += 0x700;
                            M2C_FIELD(temp_t4_8, s32 *, 0x680) = 0x3F800000;
                            M2C_FIELD(temp_t4_8, s32 *, 0x684) = 0x3F800000;
                            M2C_FIELD(temp_t4_8, s32 *, 0x6D0) = 0x3F800000;
                            M2C_FIELD(temp_t4_8, s32 *, 0x6D4) = 0x3F800000;
                            M2C_FIELD(temp_t4_8, s32 *, 0x640) = 0x43960000;
                            M2C_FIELD(temp_t4_8, s32 *, 0x644) = 0x43960000;
                        } while (var_t1 < (temp_s3 - 8));
                    }
                    if (var_t1 < temp_s3) {
                        var_t4 = var_t1 * 0xE0;
                        do {
                            var_t1 += 1;
                            temp_t3 = *(var_a3 + M2C_FIELD(temp_s5, s32 *, 0x44)) + var_t4;
                            M2C_FIELD(temp_t3, s32 *, 0x30) = 0x44;
                            var_t4 += 0xE0;
                            M2C_FIELD(temp_t3, s32 *, 0x60) = 0x3F800000;
                            M2C_FIELD(temp_t3, s32 *, 0x64) = 0x3F800000;
                            M2C_FIELD(temp_t3, s32 *, 0xB0) = 0x3F800000;
                            M2C_FIELD(temp_t3, s32 *, 0xB4) = 0x3F800000;
                            M2C_FIELD(temp_t3, s32 *, 0x20) = 0x43960000;
                            M2C_FIELD(temp_t3, s32 *, 0x24) = 0x43960000;
                        } while (var_t1 < temp_s3);
                    }
                }
                var_t2 += 1;
                var_a3 += 4;
            } while (var_t2 < temp_s4);
        }
        return;
    }
    M2C_FIELD(temp_s5, s32 *, 0x44) = 0;
}
