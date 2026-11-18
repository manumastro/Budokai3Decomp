/* Draft (not built): func_002F57E0 at 0x002F57E0, size 0xEF4, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

s32 func_002F57E0(void *arg0, void *arg1) {
    s16 sp9C;
    s16 sp9A;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    s16 sp92;
    s16 sp90;
    s16 temp_v0_5;
    s32 temp_s0_2;
    s32 temp_t0;
    s32 var_t0;
    s64 temp_a3;
    s64 temp_t0_2;
    s64 temp_t1_3;
    s64 temp_t3_2;
    s64 temp_t4_2;
    s64 temp_t5_2;
    s64 temp_t6;
    s64 temp_t7;
    s64 temp_v0_3;
    s64 var_a3;
    s64 var_t2;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_s1_2;
    u8 temp_s1_3;
    u8 temp_s1_4;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_s2_3;
    u8 temp_s2_4;
    u8 temp_s3;
    u8 temp_s3_2;
    u8 temp_s4;
    u8 temp_s4_2;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t5;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v1;

    temp_t2 = M2C_FIELD(arg1, u8 *, 4);
    temp_s0 = M2C_FIELD(arg1, u8 *, 0xD);
    temp_t1 = M2C_FIELD(arg1, u8 *, 5);
    temp_v1 = M2C_FIELD(arg1, u8 *, 6);
    temp_v0 = M2C_FIELD(arg1, u8 *, 7);
    temp_t0 = M2C_FIELD(arg1, u8 *, 3) | ((((s64) M2C_FIELD(arg1, u8 *, 2) << 8) & 0xFF00) | ((((s64) M2C_FIELD(arg1, u8 *, 0) << 0x18) & (0xFF00 << 0x10)) | (((s64) M2C_FIELD(arg1, u8 *, 1) << 0x10) & 0xFF0000)));
    temp_t5 = M2C_FIELD(arg1, u8 *, 8);
    temp_t4 = M2C_FIELD(arg1, u8 *, 9);
    temp_t3 = M2C_FIELD(arg1, u8 *, 0xA);
    temp_t2_2 = M2C_FIELD(arg1, u8 *, 0xB);
    temp_t1_2 = M2C_FIELD(arg1, u8 *, 0xC);
    temp_t6 = (s64) (((((u64) temp_t5 >> 1) & 1) | (((((u64) temp_t5 >> 2) & 1) * 2) | (((((u64) temp_t5 >> 4) & 1) * 4) | (((((u64) temp_t5 >> 7) & 1) * 0x10) | ((((u64) temp_t5 >> 6) & 1) * 8))))) << 0x30) >> 0x30;
    temp_v0_2 = M2C_FIELD(arg1, u8 *, 0xE);
    temp_s1 = M2C_FIELD(arg1, u8 *, 0xF);
    temp_s0_2 = (0xFFFF << 0x10) | 0xFFFF;
    sp90 = (((u64) temp_s1 >> 2) & 1) | (((((u64) temp_s1 >> 3) & 1) * 2) | (((((u64) temp_s1 >> 5) & 1) * 4) | (((((u64) temp_s1 >> 6) & 1) * 8) | (((temp_v0_2 & 1) * 0x10) | (((((u64) temp_v0_2 >> 1) & 1) << 5) | (((((u64) temp_v0_2 >> 3) & 1) << 6) | (((((u64) temp_v0_2 >> 4) & 1) << 7) | (((((u64) temp_v0_2 >> 7) & 1) << 9) | ((((u64) temp_v0_2 >> 6) & 1) << 8)))))))));
    temp_s4 = M2C_FIELD(arg1, u8 *, 0x10);
    temp_s3 = M2C_FIELD(arg1, u8 *, 0x11);
    sp92 = (((u64) temp_s3 >> 4) & 1) | (((((u64) temp_s3 >> 5) & 1) * 2) | (((((u64) temp_s3 >> 7) & 1) * 4) | (((temp_s4 & 1) * 8) | (((((u64) temp_s4 >> 1) & 1) * 0x10) | (((((u64) temp_s4 >> 3) & 1) << 5) | (((((u64) temp_s4 >> 4) & 1) << 6) | (((((u64) temp_s4 >> 5) & 1) << 7) | (((temp_s1 & 1) << 9) | ((((u64) temp_s4 >> 7) & 1) << 8)))))))));
    temp_s2 = M2C_FIELD(arg1, u8 *, 0x12);
    temp_s1_2 = M2C_FIELD(arg1, u8 *, 0x13);
    sp94 = (((u64) temp_s1_2 >> 7) & 1) | (((temp_s2 & 1) * 2) | (((((u64) temp_s2 >> 1) & 1) * 4) | (((((u64) temp_s2 >> 3) & 1) * 8) | (((((u64) temp_s2 >> 4) & 1) * 0x10) | (((((u64) temp_s2 >> 5) & 1) << 5) | (((((u64) temp_s2 >> 7) & 1) << 6) | (((temp_s3 & 1) << 7) | (((((u64) temp_s3 >> 3) & 1) << 9) | ((((u64) temp_s3 >> 1) & 1) << 8)))))))));
    temp_s2_2 = M2C_FIELD(arg1, u8 *, 0x14);
    sp96 = (temp_s2_2 & 1) | (((((u64) temp_s2_2 >> 2) & 1) * 2) | (((((u64) temp_s2_2 >> 3) & 1) * 4) | (((((u64) temp_s2_2 >> 5) & 1) * 8) | (((((u64) temp_s2_2 >> 6) & 1) * 0x10) | (((temp_s1_2 & 1) << 5) | (((((u64) temp_s1_2 >> 1) & 1) << 6) | (((((u64) temp_s1_2 >> 3) & 1) << 7) | (((((u64) temp_s1_2 >> 5) & 1) << 9) | ((((u64) temp_s1_2 >> 4) & 1) << 8)))))))));
    temp_s1_3 = M2C_FIELD(arg1, u8 *, 0x15);
    temp_s2_3 = M2C_FIELD(arg1, u8 *, 0x16);
    sp98 = (((u64) temp_s2_3 >> 2) & 1) | (((((u64) temp_s2_3 >> 3) & 1) * 2) | (((((u64) temp_s2_3 >> 5) & 1) * 4) | (((((u64) temp_s2_3 >> 6) & 1) * 8) | (((temp_s1_3 & 1) * 0x10) | (((((u64) temp_s1_3 >> 1) & 1) << 5) | (((((u64) temp_s1_3 >> 3) & 1) << 6) | (((((u64) temp_s1_3 >> 4) & 1) << 7) | (((((u64) temp_s1_3 >> 7) & 1) << 9) | ((((u64) temp_s1_3 >> 6) & 1) << 8)))))))));
    temp_s4_2 = M2C_FIELD(arg1, u8 *, 0x18);
    temp_s1_4 = M2C_FIELD(arg1, u8 *, 0x17);
    sp9A = (((u64) temp_s4_2 >> 4) & 1) | (((((u64) temp_s4_2 >> 5) & 1) * 2) | (((((u64) temp_s4_2 >> 7) & 1) * 4) | (((temp_s1_4 & 1) * 8) | (((((u64) temp_s1_4 >> 1) & 1) * 0x10) | (((((u64) temp_s1_4 >> 3) & 1) << 5) | (((((u64) temp_s1_4 >> 4) & 1) << 6) | (((((u64) temp_s1_4 >> 5) & 1) << 7) | (((temp_s2_3 & 1) << 9) | ((((u64) temp_s1_4 >> 7) & 1) << 8)))))))));
    temp_s3_2 = M2C_FIELD(arg1, u8 *, 0x19);
    temp_s2_4 = M2C_FIELD(arg1, u8 *, 0x1A);
    sp9C = (((u64) temp_s2_4 >> 6) & 1) | (((((u64) temp_s2_4 >> 7) & 1) * 2) | (((temp_s3_2 & 1) * 4) | (((((u64) temp_s3_2 >> 2) & 1) * 8) | (((((u64) temp_s3_2 >> 3) & 1) * 0x10) | (((((u64) temp_s3_2 >> 4) & 1) << 5) | (((((u64) temp_s3_2 >> 6) & 1) << 6) | (((((u64) temp_s3_2 >> 7) & 1) << 7) | (((((u64) temp_s4_2 >> 2) & 1) << 9) | ((((u64) temp_s4_2 >> 1) & 1) << 8)))))))));
    if (temp_t0 != (~(0 | (((((u64) temp_t1 >> 6) & 1) << 0x1B) | (((temp_t2 & 1) << 0x1C) | (((((u64) temp_t2 >> 2) & 1) << 0x1D) | (((((u64) temp_t2 >> 6) & 1) << 0x1F) | ((((u64) temp_t2 >> 4) & 1) << 0x1E))))) | (((temp_v1 & 1) << 0x16) | (((((u64) temp_v1 >> 2) & 1) << 0x17) | (((((u64) temp_v1 >> 5) & 1) << 0x18) | (((((u64) temp_t1 >> 3) & 1) << 0x1A) | ((temp_t1 & 1) << 0x19))))) | (((((u64) temp_v0 >> 1) & 1) << 0x13) | (((((u64) temp_v0 >> 7) & 1) << 0x15) | ((((u64) temp_v0 >> 4) & 1) << 0x14))) | (((temp_t5 & 1) << 0x10) | (((((u64) temp_t5 >> 5) & 1) << 0x12) | ((((u64) temp_t5 >> 3) & 1) << 0x11))) | (((((u64) temp_t4 >> 2) & 1) << 0xD) | (((((u64) temp_t4 >> 6) & 1) << 0xF) | ((((u64) temp_t4 >> 5) & 1) << 0xE))) | (((((u64) temp_t3 >> 1) & 1) << 0xA) | (((((u64) temp_t3 >> 7) & 1) << 0xC) | ((((u64) temp_t3 >> 4) & 1) << 0xB))) | (((temp_t2_2 & 1) << 7) | (((((u64) temp_t2_2 >> 6) & 1) << 9) | ((((u64) temp_t2_2 >> 3) & 1) << 8))) | (((((u64) temp_t1_2 >> 2) & 1) * 0x10) | (((((u64) temp_t1_2 >> 7) & 1) << 6) | ((((u64) temp_t1_2 >> 5) & 1) << 5))) | (((((u64) temp_s0 >> 1) & 1) * 2) | (((((u64) temp_s0 >> 7) & 1) * 8) | ((((u64) temp_s0 >> 4) & 1) * 4))) | (((u64) temp_v0_2 >> 5) & 1)) & temp_s0_2)) {
        return -1;
    }
    if (temp_t0 != (~(0 | (((((u64) temp_s1 >> 4) & 1) << 0x1D) | (((((u64) temp_v0_2 >> 2) & 1) << 0x1F) | ((((u64) temp_s1 >> 7) & 1) << 0x1E))) | (((((u64) temp_s3 >> 6) & 1) << 0x19) | (((((u64) temp_s4 >> 2) & 1) << 0x1A) | (((((u64) temp_s1 >> 1) & 1) << 0x1C) | ((((u64) temp_s4 >> 6) & 1) << 0x1B)))) | (((((u64) temp_s1_2 >> 6) & 1) << 0x15) | (((((u64) temp_s2 >> 2) & 1) << 0x16) | (((((u64) temp_s3 >> 2) & 1) << 0x18) | ((((u64) temp_s2 >> 6) & 1) << 0x17)))) | (((((u64) temp_s2_2 >> 1) & 1) << 0x11) | (((((u64) temp_s2_2 >> 4) & 1) << 0x12) | (((((u64) temp_s1_2 >> 2) & 1) << 0x14) | ((((u64) temp_s2_2 >> 7) & 1) << 0x13)))) | (((((u64) temp_s2_3 >> 4) & 1) << 0xD) | (((((u64) temp_s2_3 >> 7) & 1) << 0xE) | (((((u64) temp_s1_3 >> 5) & 1) << 0x10) | ((((u64) temp_s1_3 >> 2) & 1) << 0xF)))) | (((((u64) temp_s4_2 >> 6) & 1) << 9) | (((((u64) temp_s1_4 >> 2) & 1) << 0xA) | (((((u64) temp_s2_3 >> 1) & 1) << 0xC) | ((((u64) temp_s1_4 >> 6) & 1) << 0xB)))) | ((((u64) temp_s2_4 >> 1) & 1) | (((((u64) temp_s2_4 >> 2) & 1) * 2) | (((((u64) temp_s2_4 >> 3) & 1) * 4) | (((((u64) temp_s2_4 >> 4) & 1) * 8) | (((((u64) temp_s2_4 >> 5) & 1) * 0x10) | (((((u64) temp_s3_2 >> 1) & 1) << 5) | (((((u64) temp_s3_2 >> 5) & 1) << 6) | (((((u64) temp_s4_2 >> 3) & 1) << 8) | ((temp_s4_2 & 1) << 7)))))))))) & temp_s0_2)) {
        return -1;
    }
    var_t0 = 0;
    var_a3 = 0;
    do {
        temp_v0_3 = (s64) (var_a3 << 0x20) >> 0x20;
        var_a3 += 1;
        temp_v0_4 = *(arg1 + temp_v0_3);
        var_t0 = var_t0 + ((s64) ((temp_v0_4 & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 1) & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 2) & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 3) & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 4) & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 5) & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 6) & 1) << 0x20) >> 0x20) + ((s64) ((((s32) temp_v0_4 >> 7) & 1) << 0x20) >> 0x20);
    } while (var_a3 < 0x1B);
    if (var_t0 & 1) {
        return -1;
    }
    temp_t7 = ((s64) (((s64) (((temp_v0 & 1) | (((((u64) temp_v0 >> 2) & 1) * 2) | (((((u64) temp_v0 >> 3) & 1) * 4) | (((((u64) temp_v0 >> 6) & 1) * 0x10) | ((((u64) temp_v0 >> 5) & 1) * 8))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    temp_t5_2 = ((s64) (((s64) (((temp_t4 & 1) | (((((u64) temp_t4 >> 1) & 1) * 2) | (((((u64) temp_t4 >> 3) & 1) * 4) | (((((u64) temp_t4 >> 7) & 1) * 0x10) | ((((u64) temp_t4 >> 4) & 1) * 8))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    temp_t4_2 = ((s64) (((s64) (((temp_t3 & 1) | (((((u64) temp_t3 >> 2) & 1) * 2) | (((((u64) temp_t3 >> 3) & 1) * 4) | (((((u64) temp_t3 >> 6) & 1) * 0x10) | ((((u64) temp_t3 >> 5) & 1) * 8))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    sp90 -= 0x12C;
    temp_t3_2 = ((s64) (((s64) (((((u64) temp_t2_2 >> 1) & 1) | (((((u64) temp_t2_2 >> 2) & 1) * 2) | (((((u64) temp_t2_2 >> 4) & 1) * 4) | (((((u64) temp_t2_2 >> 7) & 1) * 0x10) | ((((u64) temp_t2_2 >> 5) & 1) * 8))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    temp_t0_2 = ((s64) (((s64) (((temp_t1_2 & 1) | (((((u64) temp_t1_2 >> 1) & 1) * 2) | (((((u64) temp_t1_2 >> 3) & 1) * 4) | (((((u64) temp_t1_2 >> 6) & 1) * 0x10) | ((((u64) temp_t1_2 >> 4) & 1) * 8))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    temp_a3 = ((s64) (((s64) (((temp_s0 & 1) | (((((u64) temp_s0 >> 2) & 1) * 2) | (((((u64) temp_s0 >> 3) & 1) * 4) | (((((u64) temp_s0 >> 6) & 1) * 0x10) | ((((u64) temp_s0 >> 5) & 1) * 8))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    temp_t1_3 = ((s64) (((s64) (((((u64) temp_v1 >> 1) & 1) | (((((u64) temp_v1 >> 3) & 1) * 2) | (((((u64) temp_v1 >> 4) & 1) * 4) | (((((u64) temp_v1 >> 6) & 1) * 8) | (((((u64) temp_v1 >> 7) & 1) * 0x10) | (((((u64) temp_t1 >> 1) & 1) << 5) | (((((u64) temp_t1 >> 4) & 1) << 7) | ((((u64) temp_t1 >> 2) & 1) << 6)))))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7;
    sp92 -= 0x12C;
    sp94 -= 0x12C;
    sp96 -= 0x12C;
    sp98 -= 0x12C;
    sp9A = sp9A - 0x12C;
    sp9C = sp9C - 0x12C;
    if (((s64) (temp_t1_3 << 0x30) >> 0x30) != (((s64) (temp_a3 << 0x30) >> 0x30) + (((s64) (temp_t0_2 << 0x30) >> 0x30) + (((s64) (temp_t3_2 << 0x30) >> 0x30) + (((s64) (temp_t4_2 << 0x30) >> 0x30) + (((s64) (temp_t5_2 << 0x30) >> 0x30) + (((s64) (temp_t7 << 0x30) >> 0x30) + ((s64) (temp_t6 << 0x30) >> 0x30)))))))) {
        return -1;
    }
    var_t2 = 0;
loop_13:
    temp_v0_5 = M2C_FIELD(((((s64) (var_t2 << 0x20) >> 0x20) * 2) + sp), s16 *, 0x90);
    if ((temp_v0_5 != 0x3FF) && (temp_v0_5 >= 0x255)) {
        return -1;
    }
    var_t2 += 1;
    if (var_t2 >= 7) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (((s64) (((s64) (((((u64) temp_t1 >> 5) & 1) | (((((u64) temp_t1 >> 7) & 1) * 2) | (((((u64) temp_t2 >> 1) & 1) * 4) | (((((u64) temp_t2 >> 3) & 1) * 8) | (((((u64) temp_t2 >> 7) & 1) << 5) | ((((u64) temp_t2 >> 5) & 1) * 0x10)))))) << 0x30) >> 0x30) << 0x30) >> 0x30) - 7);
        M2C_FIELD(arg0, s16 *, 2) = (s16) temp_t1_3;
        M2C_FIELD(arg0, s16 *, 4) = (s16) temp_t7;
        M2C_FIELD(arg0, s16 *, 6) = (s16) temp_t6;
        M2C_FIELD(arg0, s16 *, 8) = (s16) temp_t5_2;
        M2C_FIELD(arg0, s16 *, 0xA) = (s16) temp_t4_2;
        M2C_FIELD(arg0, s16 *, 0xC) = (s16) temp_t3_2;
        M2C_FIELD(arg0, s16 *, 0xE) = (s16) temp_t0_2;
        M2C_FIELD(arg0, s16 *, 0x10) = (s16) temp_a3;
        M2C_FIELD(arg0, s16 *, 0x12) = sp90;
        M2C_FIELD(arg0, s16 *, 0x14) = (s16) sp92;
        M2C_FIELD(arg0, s16 *, 0x16) = (s16) sp94;
        M2C_FIELD(arg0, s16 *, 0x18) = (s16) sp96;
        M2C_FIELD(arg0, s16 *, 0x1A) = (s16) sp98;
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) sp9A;
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) sp9C;
        return 0;
    }
    goto loop_13;
}
