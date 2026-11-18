/* Draft (not built): func_002A0D70 at 0x002A0D70, size 0x2A4, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

M2C_UNK A2d_FlushList();                            /* extern */
M2C_UNK A2d_SetMode(s32);                           /* extern */
M2C_UNK func_00228410();                            /* extern */
M2C_UNK func_00228430(M2C_UNK);                     /* extern */
s32 func_0029EDC0();                                /* extern */
M2C_UNK func_0029F070(s32, f32);                    /* extern */
M2C_UNK func_0029F180(s32, s32);                    /* extern */
M2C_UNK func_0029F350(s32, s32);                    /* extern */
M2C_UNK func_0029F470(void *);                      /* extern */
M2C_UNK func_0029F730(s32, f32);                    /* extern */
M2C_UNK func_0029FA90(s32, s32);                    /* extern */
extern void *D_004708CC;

s32 func_002A0D70(void) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s5;
    s32 var_s5_2;
    void *temp_s0;

    temp_s0 = D_004708CC;
    if (temp_s0 == NULL) {
        return 0;
    }
    temp_s1 = M2C_FIELD(temp_s0, s32 *, 0x30);
    var_s5 = 0;
    if ((M2C_FIELD(temp_s0, s32 *, 4) - M2C_FIELD(temp_s0, s32 *, 0x10)) > 0) {
        var_s4 = 0;
        var_s3 = 0;
        temp_s2 = temp_s1 * 4;
        do {
            if (*(M2C_FIELD(temp_s0, s32 *, 0x50) + var_s4) != 0) {
                func_0029F730(*(temp_s2 + M2C_FIELD(temp_s0, s32 *, 0x44)) + var_s3 + 4, M2C_FIELD(temp_s0, f32 *, 0x38));
                func_0029FA90(*(temp_s2 + M2C_FIELD(temp_s0, s32 *, 0x44)) + var_s3, M2C_FIELD(temp_s0, s32 *, 0x50) + var_s4);
            }
            var_s5 += 1;
            var_s4 += 8;
            var_s3 += 0xE0;
        } while (var_s5 < (M2C_FIELD(temp_s0, s32 *, 4) - M2C_FIELD(temp_s0, s32 *, 0x10)));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0xC) != 0) {
        A2d_SetMode(M2C_FIELD(D_004708CC, s32 *, 0x2C));
        func_00228430(0);
        var_s2 = 0;
        if (M2C_FIELD(temp_s0, s32 *, 0xC) > 0) {
            var_s5_2 = 0;
            var_s4_2 = 0;
            temp_s3 = temp_s1 * 4;
            do {
                func_0029F070(*(temp_s3 + M2C_FIELD(temp_s0, s32 *, 0x4C)) + var_s5_2, M2C_FIELD(temp_s0, f32 *, 0x38));
                temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C);
                if ((temp_v1 != -1) && (temp_v1 == var_s2)) {
                    func_0029F180(*(temp_s3 + M2C_FIELD(temp_s0, s32 *, 0x4C)) + var_s5_2, M2C_FIELD(temp_s0, s32 *, 0x58) + var_s4_2);
                } else {
                    func_0029F350(*(temp_s3 + M2C_FIELD(temp_s0, s32 *, 0x4C)) + var_s5_2, M2C_FIELD(temp_s0, s32 *, 0x58) + var_s4_2);
                }
                var_s2 += 1;
                var_s5_2 += 0x2C;
                var_s4_2 += 0x30;
            } while (var_s2 < M2C_FIELD(temp_s0, s32 *, 0xC));
        }
        func_00228410();
        A2d_FlushList();
    }
    temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 4);
    if (temp_v1_2 > 0) {
        var_s2_2 = temp_v1_2 - M2C_FIELD(temp_s0, s32 *, 0x10);
        var_s4_3 = var_s2_2 * 8;
        if (var_s2_2 < temp_v1_2) {
            temp_s1_2 = temp_s1 * 4;
            var_s3_2 = var_s2_2 * 0xE0;
            do {
                if (*(M2C_FIELD(temp_s0, s32 *, 0x50) + var_s4_3) != 0) {
                    func_0029F730(*(temp_s1_2 + M2C_FIELD(temp_s0, s32 *, 0x44)) + var_s3_2 + 4, M2C_FIELD(temp_s0, f32 *, 0x38));
                    func_0029FA90(*(temp_s1_2 + M2C_FIELD(temp_s0, s32 *, 0x44)) + var_s3_2, M2C_FIELD(temp_s0, s32 *, 0x50) + var_s4_3);
                }
                var_s2_2 += 1;
                var_s4_3 += 8;
                var_s3_2 += 0xE0;
            } while (var_s2_2 < M2C_FIELD(temp_s0, s32 *, 4));
        }
    }
    var_s1 = 0;
    if (M2C_FIELD(temp_s0, s32 *, 8) > 0) {
        do {
            func_0029F470(temp_s0);
            var_s1 += 1;
        } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 8));
    }
    return func_0029EDC0();
}
