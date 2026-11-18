/* Draft (not built): func_002BA610 at 0x002BA610, size 0x668, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 2, var_a3), (f32) ((var_s1 / 10000) + (var_s1 >> 0x1F)), 0); @ 189: if (*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x5000) {
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BA610.s */

// src/unk/unk_2B98D0.c func_002BA610 cerr diff=-1/0
f32 func_0011F108(s32, s32, s32, f32);
extern s32 D_00455800;
extern s32 D_0045587C;
extern s32 D_00455890;
extern s32 D_00455ED0;
extern s32 D_00455EF0;
extern s32 D_00492FCC;
extern void func_002BA2A0(void);
void func_002BA610(u8 *arg0) {
    s32 sp40;
    s32 sp60;
    s32 *var_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t4;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_s1_2;
    s32 var_s2;
    s8 *var_t5;
    u32 temp_a1;
    u32 temp_a1_5;
    u32 temp_a2_2;
    u32 temp_a3;
    u32 temp_s0;
    u32 var_a1;
    u32 var_a1_3;
    u32 var_a2;
    u32 var_s1;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_v1_2;
    u8 *var_a2_2;

    *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00455ED0) + 0);
    *(s64 *)((u8 *)(&sp60) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00455ED0) + 0x10);
    if (*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x5000) {
        *(s32 *)((u8 *)gStrStatus + 0x414) = 1;
    }
    temp_v1 = *(s32 *)((u8 *)gStrStatus + 0x414) - 1;
    *(s32 *)((u8 *)gStrStatus + 0x414) = temp_v1;
    if (temp_v1 <= 0) {
        var_s2 = *(s32 *)((u8 *)gStrStatus + 0x410);
        if (var_s2 >= 0x20) {
            *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_00455EF0) + 0);
            *(s128 *)((u8 *)(&sp40) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00455EF0) + 0x10);
            func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            var_a0 = 0;
            var_a3 = *(s32 *)((u8 *)gStrStatus + 0x2F8);
            temp_a2 = *(s32 *)((u8 *)gStrStatus + 0x420);
            temp_t4 = *(s32 *)((u8 *)gStrStatus + 0x41C);
            var_a2 = (u32) (var_a3 * temp_a2) >> 0x1F;
            var_s1 = ((var_a3 * temp_a2) / 100) + var_a2;
            if (temp_t4 > 0) {
                if (temp_t4 >= 9) {
                    var_t5 = (s8 *)(gStrStatus);
                    do {
                        var_a0 += 8;
                        var_a3 = *(s32 *)((u8 *)var_t5 + 0x474);
                        var_a2 = *(u32 *)((u8 *)var_t5 + 0x480);
                        var_s1 = var_s1 + *(s32 *)((u8 *)var_t5 + 0x42C) + *(s32 *)((u8 *)var_t5 + 0x438) + *(s32 *)((u8 *)var_t5 + 0x444) + *(s32 *)((u8 *)var_t5 + 0x450) + *(s32 *)((u8 *)var_t5 + 0x45C) + *(s32 *)((u8 *)var_t5 + 0x468) + var_a3 + var_a2;
                        var_t5 += 0x60;
                    } while (var_a0 < (temp_t4 - 8));
                }
                if (var_a0 < temp_t4) {
                    var_a3 = (s32) (gStrStatus + (var_a0 * 0xC));
                    do {
                        var_a2 = *(u32 *)((u8 *)var_a3 + 0x42C);
                        var_a0 += 1;
                        var_s1 += var_a2;
                        var_a3 += 0xC;
                    } while (var_a0 < *(s32 *)((u8 *)gStrStatus + 0x41C));
                }
            }
            temp_a1 = *(u32 *)((u8 *)gStrStatus + 0x2D8);
            *(u32 *)((u8 *)gStrStatus + 0x2D8) = (u32) (temp_a1 + var_s1);
            StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xE0), temp_a1, M2C_BITWISE(f32, var_a2), M2C_BITWISE(f32, var_a3), (f32) ((var_s1 / 10000) + (var_s1 >> 0x1F)), 0);
            var_a1 = 0;
            if ((s32) var_s1 >= 0x2710) {
                var_a1 = 0x2710;
            }
            StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xDC), var_a1, (f32) (((s32) var_s1 % 10000) + var_a1), 0.0f);
            var_v1 = (s32 *)(&func_002BA2A0);
            if (&func_002BA2A0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        if (var_s2 != 0) {
            temp_a0 = var_s2 * 4;
            var_a2_2 = (u8 *)(temp_a0 + gStrStatus);
            var_s1_2 = *(s32 *)((u8 *)var_a2_2 + 0x304);
            if (var_s2 < 0x16) {
                temp_a1_2 = *(&D_00455890 + temp_a0);
                var_a2_3 = temp_a1_2;
                if (var_s1_2 < temp_a1_2) {
                    var_a2_3 = var_s1_2;
                }
                if (var_s2 == 0xD) {
                    var_a2_3 = 0x64 - var_a2_3;
                }
                temp_a1_3 = *(s32 *)((u8 *)gStrStatus + 0x41C);
                temp_a3 = M2C_BITWISE(s32, func_0011F108(temp_a0, temp_a1_2, var_a2_3, ((f32) (*(s32 *)((u8 *)gStrStatus + 0x2FC) + 1) * ((f32) var_a2_3 * *(&D_00455800 + temp_a0))) / (f32) temp_a1_2)) * *(s32 *)((u8 *)gStrStatus + 0x420);
                *(s32 *)((u8 *)gStrStatus + 0x41C) = (s32) (temp_a1_3 + 1);
                temp_a2_2 = temp_a3 >> 0x1F;
                temp_v1_2 = (u8 *)(gStrStatus + (temp_a1_3 * 0xC));
                *(s32 *)((u8 *)temp_v1_2 + 0x424) = (s32) (var_s2 + 0x28);
                *(s32 *)((u8 *)temp_v1_2 + 0x428) = var_s1_2;
                *(s32 *)((u8 *)temp_v1_2 + 0x42C) = (s32) ((temp_a3 / 100) + temp_a2_2);
                if (var_s2 >= 7) {
                    *(s32 *)((u8 *)gStrStatus + 0x418) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x418) + 1);
                }
                func_002B98D0(*(s32 *)((u8 *)gStrStatus + 0x418), MULT_HI(0x51EB851F, temp_a3), temp_a2_2, temp_a3);
                goto block_44;
            }
loop_33:
            if (var_s1_2 != 0) {
                if (var_s2 == 0x18) {
                    var_a2_4 = *(s32 *)((u8 *)gStrStatus + 0x41C);
                    temp_t0 = *(s32 *)((u8 *)gStrStatus + 0x420);
                    *(s32 *)((u8 *)gStrStatus + 0x41C) = (s32) (var_a2_4 + 1);
                    var_a1_2 = var_a2_4 * 0xC;
                    temp_f0 = (f32) (*(s32 *)((u8 *)gStrStatus + 0x2FC) + 1) * *(&D_0045587C + (var_s1_2 * 4));
                    temp_a0_2 = (u8 *)(gStrStatus + var_a1_2);
                    *(s32 *)((u8 *)temp_a0_2 + 0x424) = (s32) (var_s1_2 + 0x47);
                    *(s32 *)((u8 *)temp_a0_2 + 0x428) = -1;
                    *(s32 *)((u8 *)temp_a0_2 + 0x42C) = (s32) (((M2C_BITWISE(s32, temp_f0) * temp_t0) / 100) + ((u32) (M2C_BITWISE(s32, temp_f0) * temp_t0) >> 0x1F));
                } else {
                    var_a2_4 = *(s32 *)((u8 *)gStrStatus + 0x41C);
                    temp_t0_2 = *(s32 *)((u8 *)gStrStatus + 0x420);
                    *(s32 *)((u8 *)gStrStatus + 0x41C) = (s32) (var_a2_4 + 1);
                    var_a1_2 = var_a2_4 * 0xC;
                    temp_f0_2 = (f32) (*(s32 *)((u8 *)gStrStatus + 0x2FC) + 1) * *(&D_00455800 + (var_s2 * 4));
                    temp_a0_3 = (u8 *)(gStrStatus + var_a1_2);
                    *(s32 *)((u8 *)temp_a0_3 + 0x424) = (s32) (var_s2 + 0x28);
                    *(s32 *)((u8 *)temp_a0_3 + 0x428) = -1;
                    *(s32 *)((u8 *)temp_a0_3 + 0x42C) = (s32) (((M2C_BITWISE(s32, temp_f0_2) * temp_t0_2) / 100) + ((u32) (M2C_BITWISE(s32, temp_f0_2) * temp_t0_2) >> 0x1F));
                }
                *(s32 *)((u8 *)gStrStatus + 0x418) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x418) + 1);
                func_002B98D0(*(s32 *)((u8 *)gStrStatus + 0x418), var_a1_2, (u32) var_a2_4, 0x51EB851FU);
                goto block_44;
            }
            var_s2 += 1;
            var_a2_2 += 4;
            if (var_s2 >= 0x20) {
                *(s32 *)((u8 *)gStrStatus + 0x410) = var_s2;
                *(s32 *)((u8 *)gStrStatus + 0x414) = 0;
                func_002BA610(arg0, gStrStatus + 0x410, var_a2_2);
                return;
            }
            var_s1_2 = *(s32 *)((u8 *)var_a2_2 + 0x304);
            goto loop_33;
        }
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        temp_a2_3 = *(s32 *)((u8 *)gStrStatus + 0x2F8);
        temp_a1_4 = *(s32 *)((u8 *)gStrStatus + 0x420);
        temp_a1_5 = (u32) (temp_a2_3 * temp_a1_4) >> 0x1F;
        temp_v1_3 = (temp_a2_3 * temp_a1_4) / 100;
        temp_s0 = temp_v1_3 + temp_a1_5;
        StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xD8), temp_a1_5, M2C_BITWISE(f32, temp_a2_3), (f32) (((temp_v1_3 + temp_a1_5) / 10000) + (temp_s0 >> 0x1F)), 0.0f);
        var_a1_3 = 0;
        if ((s32) temp_s0 >= 0x2710) {
            var_a1_3 = 0x2710;
        }
        StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xD4), var_a1_3, (f32) (((s32) temp_s0 % 10000) + var_a1_3), 0.0f);
block_44:
        *(s32 *)((u8 *)gStrStatus + 0x410) = (s32) (var_s2 + 1);
        *(s32 *)((u8 *)gStrStatus + 0x414) = 0x1E;
    }
}
