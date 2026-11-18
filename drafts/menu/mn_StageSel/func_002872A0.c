/* Draft (not built): func_002872A0 at 0x002872A0, size 0x610, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK Help_Open(s32, s32);                        /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK, u8);       /* extern */
u32 func_0012EAE0(M2C_UNK);                         /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00284AA0(void *);                      /* extern */
M2C_UNK func_00285EF0(void *);                      /* extern */
M2C_UNK func_002861B0(void *);                      /* extern */
M2C_UNK func_00286650(void *);                      /* extern */
M2C_UNK func_00286840(void *);                      /* extern */
M2C_UNK func_00286DA0(void *, u16);                 /* extern */
extern M2C_UNK D_00453490;
extern M2C_UNK D_0046B860;
extern M2C_UNK D_0046B861;
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00492FCE;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B56;
extern s8 D_004B4B5B;
extern f32 D_004E0614;
extern M2C_UNK func_00287060;
extern M2C_UNK func_002870D0;
extern M2C_UNK func_00287110;

void func_002872A0(void *arg0) {
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;
    M2C_UNK *var_v0_4;
    s16 temp_v1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s64 var_v0;
    u16 temp_a1;
    u16 temp_a1_2;
    u8 temp_a0;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 var_a2;
    void *temp_s3;
    void *var_a1;

    var_s2 = 0;
    var_s1 = 0;
    temp_s3 = M2C_FIELD(arg0, void **, 0x30);
    temp_a1 = M2C_FIELD(temp_s3, u16 *, 0x240);
    var_s0 = 0;
    if (M2C_FIELD(temp_s3, u16 *, 0x23E) != temp_a1) {
        func_00286DA0(temp_s3, temp_a1);
    }
    temp_a1_2 = M2C_FIELD(temp_s3, u16 *, 0x23C);
    if (temp_a1_2 & 2) {
        var_s0 = 1 & 0xFF;
        var_s1 = (0 | D_00492FCE) & 0xFFFF;
        var_s2 = (0 | ((D_00492FD2 | D_00493032) & 0xFFFF)) & 0xFFFF;
    }
    if (temp_a1_2 & 4) {
        var_s0 = (var_s0 | 2) & 0xFF;
        var_s1 = (var_s1 | D_00493086) & 0xFFFF;
        var_s2 = (var_s2 | ((D_0049308A | D_004930EA) & 0xFFFF)) & 0xFFFF;
    }
    if (var_s1 & 0xFFFF & 1) {
        Help_Open(0x01000000 | (0x820040 << 0x20), var_s0);
        var_s2 = 0;
        var_s1 = 0;
    }
    temp_s0 = var_s1 & 0xFFFF;
    if (temp_s0 & 0x6000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        func_00286840(temp_s3);
        M2C_FIELD(temp_s3, s8 *, 0x262) = 4;
        M2C_FIELD(temp_s3, s8 *, 0x264) = 4;
        D_004B4B56 = (s8) M2C_FIELD(temp_s3, s16 *, 0x25C);
        if (M2C_FIELD(temp_s3, s16 *, 0x25C) == 0xC) {
            M2C_FIELD(temp_s3, s16 *, 0x25C) = (s16) M2C_FIELD((((func_0012EAE0(8) % (u32) (M2C_FIELD(temp_s3, u8 *, 0x261) - 1)) * 2) + temp_s3), s16 *, 0x242);
            var_v0 = (s64) (((func_0012EAE0(8) >> 2) & 1) << 0x30) >> 0x30;
        } else {
            var_v0 = 0;
            if (temp_s0 & 0x4000) {

            } else {
                var_v0 = 1;
            }
        }
        var_v0_2 = &func_002870D0;
        D_004B4B5B = (s8) *((((s64) (var_v0 << 0x30) >> 0x30) * 2) + (&D_00453490 + (M2C_FIELD(temp_s3, s16 *, 0x25C) * 4)));
        M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x230), s16 *, 0x34) = -1;
        M2C_FIELD(temp_s3, s8 *, 0x263) = 0;
        M2C_FIELD(temp_s3, s32 *, 0x28C) = 0x42700000;
        if (&func_002870D0 == NULL) {
            var_v0_2 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v0_2;
    } else if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        func_00286650(temp_s3);
        M2C_FIELD(temp_s3, s32 *, 0x28C) = 0x42700000;
        var_v0_3 = &func_00287060;
        M2C_FIELD(temp_s3, s8 *, 0x264) = 5;
        if (&func_00287060 == NULL) {
            var_v0_3 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v0_3;
    } else if ((temp_s0 & 0x8000) && (M2C_FIELD(temp_s3, s16 *, 0x25C) != 0xC)) {
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 0xE, 0);
        }
        temp_a0 = M2C_FIELD(temp_s3, u8 *, 0x261);
        var_a2 = 0;
        if ((s32) temp_a0 > 0) {
            var_a1 = temp_s3;
loop_33:
            if (M2C_FIELD(var_a1, s16 *, 0x4C) == 0xC) {
                M2C_FIELD(temp_s3, s8 *, 0x263) = 0;
                M2C_FIELD(temp_s3, u8 *, 0x260) = var_a2;
                M2C_FIELD(temp_s3, s16 *, 0x25C) = 0xC;
                M2C_FIELD(temp_s3, s32 *, 0x270) = (s32) M2C_FIELD(((var_a2 * 0xC) + temp_s3), s32 *, 0x48);
                M2C_FIELD(temp_s3, s32 *, 0x26C) = (s32) M2C_FIELD(temp_s3, s32 *, 0x270);
                M2C_FIELD(temp_s3, s32 *, 0x274) = 0;
                M2C_FIELD(temp_s3, s32 *, 0x27C) = 0;
                M2C_FIELD(temp_s3, s8 *, 0x262) = 2;
                M2C_FIELD(temp_s3, s8 *, 0x264) = 2;
                M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x230), s16 *, 0x34) = (s16) M2C_FIELD(temp_s3, s16 *, 0x25C);
                M2C_FIELD(temp_s3, s8 *, 0x263) = 0;
                temp_v1 = M2C_FIELD(temp_s3, s16 *, 0x25C);
                if (M2C_FIELD(temp_s3, s16 *, 0x25E) != temp_v1) {
                    M2C_FIELD(temp_s3, s16 *, 0x25E) = temp_v1;
                    temp_a0_2 = M2C_FIELD(temp_s3, s32 *, 4);
                    D_00470704 = temp_a0_2;
                    D_0047070C = 0x7000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_2, 0x7000, var_a2);
                    D_00470238 = 0;
                    temp_a0_3 = M2C_FIELD(temp_s3, s32 *, 0x18);
                    if (temp_a0_3 != 0) {
                        func_0022D0E0(temp_a0_3, 1);
                    }
                    M2C_FIELD(temp_s3, s32 *, 0x18) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s3, void **, 0), s32 *, 0x1C) + (*(&D_0046B860 + (M2C_FIELD(temp_s3, s16 *, 0x25C) * 2)) * 4)), 0);
                    temp_a0_4 = M2C_FIELD(temp_s3, s32 *, 0x28);
                    if (temp_a0_4 != 0) {
                        func_0022D0E0(temp_a0_4, 1);
                    }
                    M2C_FIELD(temp_s3, s32 *, 0x28) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s3, void **, 0), s32 *, 0x1C) + (*(&D_0046B861 + (M2C_FIELD(temp_s3, s16 *, 0x25C) * 2)) * 4)), 0);
                }
            } else {
                var_a2 += 1;
                var_a1 += 0xC;
                if ((s32) var_a2 >= (s32) temp_a0) {

                } else {
                    goto loop_33;
                }
            }
        }
    } else {
        temp_s0_2 = var_s2 & 0xFFFF;
        if (temp_s0_2 & 0xA0) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xE, 0);
            }
            if (temp_s0_2 & 0x20) {
                temp_v1_2 = M2C_FIELD(temp_s3, u8 *, 0x260);
                if ((s32) temp_v1_2 < (M2C_FIELD(temp_s3, u8 *, 0x261) - 1)) {
                    M2C_FIELD(temp_s3, u8 *, 0x260) = (u8) (temp_v1_2 + 1);
                } else {
                    M2C_FIELD(temp_s3, u8 *, 0x260) = 0U;
                }
                M2C_FIELD(temp_s3, s32 *, 0x274) = (s32) M2C_FIELD(temp_s3, s32 *, 0x278);
            } else if (temp_s0_2 & 0x80) {
                temp_v0 = M2C_FIELD(temp_s3, u8 *, 0x260);
                if ((s32) temp_v0 > 0) {
                    M2C_FIELD(temp_s3, u8 *, 0x260) = (u8) (temp_v0 - 1);
                } else {
                    M2C_FIELD(temp_s3, u8 *, 0x260) = (u8) (M2C_FIELD(temp_s3, u8 *, 0x261) - 1);
                }
                M2C_FIELD(temp_s3, s32 *, 0x274) = (s32) -M2C_FIELD(temp_s3, s32 *, 0x278);
            }
            M2C_FIELD(temp_s3, s8 *, 0x263) = 0;
            var_v0_4 = &func_00287110;
            M2C_FIELD(temp_s3, s16 *, 0x25C) = (s16) M2C_FIELD(((M2C_FIELD(temp_s3, u8 *, 0x260) * 0xC) + temp_s3), s16 *, 0x4C);
            M2C_FIELD(temp_s3, s32 *, 0x270) = (s32) M2C_FIELD(((M2C_FIELD(temp_s3, u8 *, 0x260) * 0xC) + temp_s3), s32 *, 0x48);
            M2C_FIELD(temp_s3, s32 *, 0x27C) = 0x41400000;
            M2C_FIELD(temp_s3, s8 *, 0x262) = 3;
            M2C_FIELD(temp_s3, s8 *, 0x264) = 3;
            if (&func_00287110 == NULL) {
                var_v0_4 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v0_4;
            M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x230), s16 *, 0x34) = -1;
            M2C_FIELD(temp_s3, s8 *, 0x263) = 0;
        }
    }
    func_00284AA0(temp_s3);
    func_002861B0(temp_s3);
    func_00285EF0(temp_s3);
}
