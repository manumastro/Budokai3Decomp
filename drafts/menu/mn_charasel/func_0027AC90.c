/* Draft (not built): func_0027AC90 at 0x0027AC90, size 0xB34, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK CsModel_Shift(s32, s16, s8);                /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
u32 func_0012EAE0(M2C_UNK, s64, M2C_UNK);           /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s8 func_0027D3B0(u8, s64, s8, s32);                 /* extern */
M2C_UNK func_00280E40(s32, s8);                     /* extern */
M2C_UNK func_002E8540(void *, s32, s64);            /* extern */
s64 func_002F92E0(s32);                             /* extern */
M2C_UNK func_002F92F0(s32, s64, M2C_UNK);           /* extern */
M2C_UNK memcpy(void *, void *, M2C_UNK);            /* extern */
extern M2C_UNK D_0046B560;
extern M2C_UNK D_0046B610;
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470810;
extern u16 D_00492FCC;
extern u16 D_00492FCE;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493084;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern M2C_UNK D_004B4B5C;
extern M2C_UNK D_004B4B5E;
extern f32 D_004E0614;
extern M2C_UNK D_0058F660;
extern M2C_UNK D_0058F664;
extern M2C_UNK D_0058F668;
extern M2C_UNK D_0058F66E;
extern M2C_UNK D_0058F670;
extern s16 D_005C9F00;

void func_0027AC90(void *arg0) {
    s16 sp70;
    s16 *var_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_a3_4;
    s32 temp_a3_6;
    s32 temp_a3_8;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1_3;
    s32 var_v1_4;
    s64 temp_a2_5;
    s64 temp_a3;
    s64 temp_a3_3;
    s64 temp_a3_5;
    s64 temp_a3_7;
    s64 temp_t1;
    s64 var_a1;
    s64 var_s0_2;
    s64 var_v0;
    s64 var_v1_7;
    s8 *temp_a2_4;
    s8 temp_a2_2;
    s8 temp_a2_3;
    s8 temp_a2_6;
    s8 temp_a2_7;
    s8 temp_s0_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v0_6;
    s8 temp_v1;
    u16 var_v1;
    u16 var_v1_2;
    u16 var_v1_5;
    u16 var_v1_6;
    u8 temp_a0;
    u8 temp_a0_12;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_a0_9;
    u8 temp_s1;
    void *temp_s3;

    temp_s3 = D_00470810;
    if (((s64) (func_002F92E0(M2C_FIELD(arg0, s32 *, 0x28)) << 0x38) >> 0x38) != 2) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 6);
        temp_a2 = temp_a0 & 2;
        if (!(temp_a0 & 8)) {
            var_v1 = 0;
            if (temp_a2 != 0) {
                var_v1 = D_00492FCE;
            }
            temp_a1 = temp_a0 & 4;
            if (temp_a1 != 0) {
                var_v1_2 = D_00493086;
            } else {
                var_v1_2 = 0;
            }
            var_s2 = ((var_v1 & 0xFFFF) | (var_v1_2 & 0xFFFF)) & 0xFFFF;
            if (temp_a2 != 0) {
                var_v1_3 = D_00492FD2 | D_00493032;
            } else {
                var_v1_3 = 0;
            }
            if (temp_a1 != 0) {
                var_v1_4 = D_0049308A | D_004930EA;
            } else {
                var_v1_4 = 0;
            }
            var_s1 = ((var_v1_3 & 0xFFFF) | (var_v1_4 & 0xFFFF)) & 0xFFFF;
            if (temp_a2 != 0) {
                var_v1_5 = D_00492FCC;
            } else {
                var_v1_5 = 0;
            }
            if (temp_a1 != 0) {
                var_v1_6 = D_00493084;
            } else {
                var_v1_6 = 0;
            }
            var_s0 = ((var_v1_5 & 0xFFFF) | (var_v1_6 & 0xFFFF)) & 0xFFFF;
        } else {
            var_s2 = 0;
            var_s1 = 0;
            var_s0 = 0;
        }
        temp_v1 = M2C_FIELD((M2C_FIELD(arg0, u8 *, 7) + &D_0058F660), s8 *, 0xC);
        if (temp_v1 != -1) {
            M2C_FIELD(arg0, s8 *, 5) = temp_v1;
            M2C_FIELD((M2C_FIELD(arg0, u8 *, 7) + &D_0058F660), s8 *, 0xC) = -1;
            temp_a3 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x30) >> 0x30;
            temp_a3_2 = temp_a3 * 2;
            *(&D_0058F664 + temp_a3_2) = (s16) M2C_FIELD(arg0, s8 *, 4);
            temp_a2_2 = M2C_FIELD(arg0, s8 *, 5);
            *(&D_0058F668 + temp_a3) = temp_a2_2;
            *(&D_0058F66E + temp_a3) = M2C_FIELD(arg0, u8 *, 0xC);
            *(&D_0058F670 + temp_a3) = M2C_FIELD(arg0, u8 *, 0xD);
            temp_v0 = func_0027D3B0(M2C_FIELD(arg0, u8 *, 7), 0, temp_a2_2, temp_a3_2);
            M2C_FIELD(arg0, s8 *, 5) = temp_v0;
            M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), s8 *, 0x420) = temp_v0;
            CsModel_Shift(M2C_FIELD(arg0, s32 *, 0x30), *(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2)), M2C_FIELD(arg0, s8 *, 5));
        }
        temp_a0_2 = var_s2 & 0xFFFF;
        if (temp_a0_2 & 0x4000) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            M2C_FIELD(arg0, s8 *, 0) = 5;
            M2C_FIELD(arg0, s8 *, 4) = (s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s8 *, 0xB60);
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), u8 *, 0x420);
            temp_a3_3 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x30) >> 0x30;
            temp_a3_4 = temp_a3_3 * 2;
            *(&D_0058F664 + temp_a3_4) = (s16) M2C_FIELD(arg0, s8 *, 4);
            temp_a2_3 = M2C_FIELD(arg0, s8 *, 5);
            *(&D_0058F668 + temp_a3_3) = temp_a2_3;
            *(&D_0058F66E + temp_a3_3) = M2C_FIELD(arg0, u8 *, 0xC);
            *(&D_0058F670 + temp_a3_3) = M2C_FIELD(arg0, u8 *, 0xD);
            temp_v0_2 = func_0027D3B0(M2C_FIELD(arg0, u8 *, 7), 0, temp_a2_3, temp_a3_4);
            M2C_FIELD(arg0, s8 *, 5) = temp_v0_2;
            M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), s8 *, 0x420) = temp_v0_2;
            if (M2C_FIELD(arg0, u8 *, 0xA) != 1) {
                temp_s1 = M2C_FIELD(arg0, u8 *, 7);
                if (*(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2)) == -1) {
                    var_s0_2 = 0;
                    var_a1 = 0;
                    var_a0 = &sp70;
                    do {
                        if (M2C_FIELD(arg0, s64 *, 0x10) & (1 << var_a1)) {
                            *var_a0 = (s16) var_a1;
                            var_a0 += 2;
                            var_s0_2 = (s64) ((var_s0_2 + 1) << 0x30) >> 0x30;
                        }
                        var_a1 += 1;
                    } while (var_a1 < 0x26);
                    M2C_FIELD(arg0, s8 *, 4) = (s8) M2C_FIELD((((func_0012EAE0(8, var_a1, 1) % (u32) ((s64) (var_s0_2 << 0x30) >> 0x30)) * 2) + sp), s16 *, 0x70);
                    M2C_FIELD(arg0, s8 *, 5) = (s8) (func_0012EAE0(8) % (u32) *(&D_0046B610 + M2C_FIELD(arg0, s8 *, 4)));
                    temp_t1 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x30) >> 0x30;
                    temp_a2_4 = &D_0058F668 + temp_t1;
                    *(&D_0058F664 + (temp_t1 * 2)) = (s16) M2C_FIELD(arg0, s8 *, 4);
                    *temp_a2_4 = M2C_FIELD(arg0, s8 *, 5);
                    *(&D_0058F66E + temp_t1) = M2C_FIELD(arg0, u8 *, 0xC);
                    *(&D_0058F670 + temp_t1) = M2C_FIELD(arg0, u8 *, 0xD);
                    temp_v0_3 = func_0027D3B0(M2C_FIELD(arg0, u8 *, 7), 0, (s8) temp_a2_4, (s32) &D_0058F664);
                    M2C_FIELD(arg0, s8 *, 5) = temp_v0_3;
                    M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), s8 *, 0x420) = temp_v0_3;
                    temp_a0_3 = M2C_FIELD(temp_s3, s32 *, 0xC);
                    D_00470704 = temp_a0_3;
                    D_0047070C = 0x3000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_3, 0x3000);
                    D_00470238 = 0;
                    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x4C);
                    if (temp_a0_4 != 0) {
                        func_0022D0E0(temp_a0_4, 1);
                    }
                    M2C_FIELD(arg0, s32 *, 0x4C) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s3, void **, 8), s32 *, 0x1C) + ((M2C_FIELD(arg0, s8 *, 4) + 0x69) * 4)), 0);
                    func_00280E40(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s8 *, 4));
                    CsModel_Shift(M2C_FIELD(arg0, s32 *, 0x30), *(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2)), M2C_FIELD(arg0, s8 *, 5));
                    M2C_FIELD(arg0, s8 *, 3) = 1;
                }
                *(&D_004B4B5C + temp_s1) = (s8) *(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2));
                *(&D_004B4B5E + temp_s1) = M2C_FIELD(arg0, s8 *, 5);
            } else {
                D_005C9F00 = (s16) M2C_FIELD(arg0, s8 *, 4);
            }
            temp_a0_5 = M2C_FIELD(arg0, u8 *, 0xA);
            if ((temp_a0_5 != 7) && (temp_a0_5 != 5) && (temp_a0_5 != 1)) {

            } else {
                memcpy(arg0 + 0x6C, M2C_FIELD(arg0, void **, 0x78) + (M2C_FIELD(arg0, s8 *, 4) * 0xC) + 0x258, 0xC);
            }
            temp_a0_6 = M2C_FIELD(arg0, u8 *, 0xA);
            temp_a2_5 = (s64) (((M2C_FIELD(arg0, u8 *, 7) == 0) ? 0 : 1) << 0x38) >> 0x38;
            switch (temp_a0_6) {                    /* irregular */
            case 7:
            case 1:
                return;
            case 5:
                if (M2C_FIELD(arg0, u8 *, 8) == 0) {
                    var_v0 = -1;
                } else {
                    var_v0 = temp_a2_5 != 0;
                }
                func_002E8540(M2C_FIELD(arg0, void **, 0x78), temp_a2_5 & 0xFF, (s64) (var_v0 << 0x38) >> 0x38);
                return;
            }
        } else {
            if ((temp_a0_2 & 0x8000) && (M2C_FIELD(arg0, s8 *, 4) != 0x26) && (M2C_FIELD(arg0, s64 *, 0x10) & (0x40 << 0x20))) {
                SoundRpc_SetVolume(1, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 0xB, 0);
                }
                func_002F92F0(M2C_FIELD(arg0, s32 *, 0x28), 5, -1);
                M2C_FIELD(arg0, s8 *, 4) = (s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s8 *, 0xB60);
                M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), u8 *, 0x420);
                temp_a3_5 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x30) >> 0x30;
                temp_a3_6 = temp_a3_5 * 2;
                *(&D_0058F664 + temp_a3_6) = (s16) M2C_FIELD(arg0, s8 *, 4);
                temp_a2_6 = M2C_FIELD(arg0, s8 *, 5);
                *(&D_0058F668 + temp_a3_5) = temp_a2_6;
                *(&D_0058F66E + temp_a3_5) = M2C_FIELD(arg0, u8 *, 0xC);
                *(&D_0058F670 + temp_a3_5) = M2C_FIELD(arg0, u8 *, 0xD);
                temp_v0_4 = func_0027D3B0(M2C_FIELD(arg0, u8 *, 7), 0, temp_a2_6, temp_a3_6);
                M2C_FIELD(arg0, s8 *, 5) = temp_v0_4;
                M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), s8 *, 0x420) = temp_v0_4;
                func_00280E40(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s8 *, 4));
                CsModel_Shift(M2C_FIELD(arg0, s32 *, 0x30), *(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2)), M2C_FIELD(arg0, s8 *, 5));
                temp_a0_7 = M2C_FIELD(temp_s3, s32 *, 0xC);
                D_00470704 = temp_a0_7;
                D_0047070C = 0x3000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_7, 0x3000);
                D_00470238 = 0;
                temp_a0_8 = M2C_FIELD(arg0, s32 *, 0x4C);
                if (temp_a0_8 != 0) {
                    func_0022D0E0(temp_a0_8, 1);
                }
                M2C_FIELD(arg0, s32 *, 0x4C) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s3, void **, 8), s32 *, 0x1C) + ((M2C_FIELD(arg0, s8 *, 4) + 0x69) * 4)), 0);
                return;
            }
            temp_s1_2 = var_s1 & 0xFFFF;
            if (temp_s1_2 & 0x50) {
                temp_s0 = (var_s0 & 0xFFFF & 0xC00) != 0;
                SoundRpc_SetVolume(1, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 0xB, 0);
                }
                if (temp_s1_2 & 0x40) {
                    func_002F92F0(M2C_FIELD(arg0, s32 *, 0x28), (s64) (((temp_s0 == 0) ? 1 : 3) << 0x30) >> 0x30, -1);
                } else if (temp_s1_2 & 0x10) {
                    func_002F92F0(M2C_FIELD(arg0, s32 *, 0x28), (s64) (((temp_s0 == 0) ? 2 : 4) << 0x30) >> 0x30, -1);
                }
                M2C_FIELD(arg0, s8 *, 4) = (s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s8 *, 0xB60);
                M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), u8 *, 0x420);
                temp_a3_7 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 7) << 0x30) >> 0x30;
                temp_a3_8 = temp_a3_7 * 2;
                *(&D_0058F664 + temp_a3_8) = (s16) M2C_FIELD(arg0, s8 *, 4);
                temp_a2_7 = M2C_FIELD(arg0, s8 *, 5);
                *(&D_0058F668 + temp_a3_7) = temp_a2_7;
                *(&D_0058F66E + temp_a3_7) = M2C_FIELD(arg0, u8 *, 0xC);
                *(&D_0058F670 + temp_a3_7) = M2C_FIELD(arg0, u8 *, 0xD);
                temp_v0_5 = func_0027D3B0(M2C_FIELD(arg0, u8 *, 7), 0, temp_a2_7, temp_a3_8);
                M2C_FIELD(arg0, s8 *, 5) = temp_v0_5;
                M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), s8 *, 0x420) = temp_v0_5;
                temp_a0_9 = M2C_FIELD(arg0, u8 *, 0xA);
                if ((temp_a0_9 != 7) && (temp_a0_9 != 5) && (temp_a0_9 != 1)) {

                } else {
                    memcpy(arg0 + 0x6C, M2C_FIELD(arg0, void **, 0x78) + (M2C_FIELD(arg0, s8 *, 4) * 0xC) + 0x258, 0xC);
                }
                func_00280E40(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s8 *, 4));
                CsModel_Shift(M2C_FIELD(arg0, s32 *, 0x30), *(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2)), M2C_FIELD(arg0, s8 *, 5));
                temp_a0_10 = M2C_FIELD(temp_s3, s32 *, 0xC);
                D_00470704 = temp_a0_10;
                D_0047070C = 0x3000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_10, 0x3000);
                D_00470238 = 0;
                temp_a0_11 = M2C_FIELD(arg0, s32 *, 0x4C);
                if (temp_a0_11 != 0) {
                    func_0022D0E0(temp_a0_11, 1);
                }
                M2C_FIELD(arg0, s32 *, 0x4C) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s3, void **, 8), s32 *, 0x1C) + ((M2C_FIELD(arg0, s8 *, 4) + 0x69) * 4)), 0);
                return;
            }
            if (temp_s1_2 & 0xA0) {
                temp_a0_12 = M2C_FIELD(arg0, u8 *, 0xA);
                if ((temp_a0_12 != 7) && (temp_a0_12 != 3) && (temp_a0_12 != 1)) {
                    var_v1_7 = 0;
                    if (temp_s1_2 & 0x80) {
                        var_v1_7 = -1;
                    } else if (temp_s1_2 & 0x20) {
                        var_v1_7 = 1;
                    }
                    temp_s0_2 = M2C_FIELD(arg0, s8 *, 5);
                    temp_v0_6 = func_0027D3B0(M2C_FIELD(arg0, u8 *, 7), (s64) (var_v1_7 << 0x30) >> 0x30);
                    M2C_FIELD(arg0, s8 *, 5) = temp_v0_6;
                    M2C_FIELD((M2C_FIELD(arg0, s8 *, 4) + M2C_FIELD(arg0, void **, 0x78)), s8 *, 0x420) = temp_v0_6;
                    if (((s64) ((s64) temp_s0_2 << 0x30) >> 0x30) != M2C_FIELD(arg0, s8 *, 5)) {
                        SoundRpc_SetVolume(0, 0, D_004E0614);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 2, 0);
                        }
                        CsModel_Shift(M2C_FIELD(arg0, s32 *, 0x30), *(&D_0046B560 + (M2C_FIELD(arg0, s8 *, 4) * 2)), M2C_FIELD(arg0, s8 *, 5));
                    }
                }
            }
        }
    }
}
