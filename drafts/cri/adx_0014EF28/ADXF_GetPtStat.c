/* Draft (not built): ADXF_GetPtStat at 0x00154B80, size 0x3E0, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/adx_0014EF28/ADXF_GetPtStat.s */

s32 ADXERR_CallErrFunc1();
s8 ADXF_GetStat();
s32 ADXF_ReadNw();
s32 func_00154520();
s32 func_00154AB0();
s32 memcmp();
extern s32 D_00402550;
extern s32 D_00402A7C;
extern void *D_00402A80;
extern s32 D_00402A84;
extern void *D_00402A88;
extern s32 D_00402A8C;
extern s32 D_00460678;
extern s32 D_004606B0;
extern s32 D_004606B8;
extern s32 D_004606F0;
extern s32 D_00460728;

s8 ADXF_GetPtStat(s32 arg0) {
    u8 *sp0;
    s32 *var_a0;
    s16 *var_s4;
    s16 temp_v1;
    s32 *var_s3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s3_2;
    s32 var_v0_2;
    s8 var_s6;
    s8 var_s6_2;
    s8 var_v0;
    u8 *temp_s0;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *var_fp;

    var_s3 = NULL;
    var_s4 = NULL;
    var_fp = NULL;
    sp0 = NULL;
    if (arg0 == D_00402A84) {
        goto block_2;
    }
    ADXERR_CallErrFunc1(&D_00460678);
    return -3;
block_2:
    var_v0 = ADXF_GetStat(D_00402A80);
    var_s6 = var_v0;
    if (var_s6 != 3) {
        goto block_42;
    }
    temp_s0 = *(&D_00402550 + (arg0 * 4));
    if (*(s8 *)((u8 *)temp_s0 + 0xF) != 1) {
        goto block_5;
    }
    var_s3 = temp_s0 + 0x118;
    var_fp = temp_s0 + 0x11C;
    goto block_6;
block_5:
    var_s4 = temp_s0 + 0x118;
    sp0 = temp_s0 + 0x11A;
block_6:
    var_s1 = 1;
    if (*(s32 *)((u8 *)temp_s0 + 8) != 0) {
        goto block_22;
    }
    if (memcmp(D_00402A88, &D_004606B0, 3) == 0) {
        goto block_10;
    }
    var_a0 = &D_004606B8;
    goto block_39;
block_10:
    if ((*(u8 *)((u8 *)D_00402A88 + 4) | (*(u8 *)((u8 *)D_00402A88 + 7) << 0x18) | ((*(u8 *)((u8 *)D_00402A88 + 6) << 0x10) | (*(u8 *)((u8 *)D_00402A88 + 5) << 8))) <= 0x10000) {
        goto block_12;
    }
    var_a0 = &D_004606F0;
    goto block_39;
block_12:
    temp_v1 = *(u8 *)((u8 *)D_00402A88 + 4) | (*(u8 *)((u8 *)D_00402A88 + 5) << 8);
    *(s16 *)((u8 *)temp_s0 + 0xC) = temp_v1;
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) temp_v1;
    if (*(s8 *)((u8 *)temp_s0 + 0xF) != 1) {
        goto block_15;
    }
    var_v0_2 = (temp_v1 * 4) + 0x120;
    goto block_16;
block_15:
    var_v0_2 = ((u32) ((temp_v1 * 2) + 0x11C) >> 2) * 4;
block_16:
    *(s32 *)((u8 *)temp_s0 + 4) = var_v0_2;
    if ((s8) (u8) *(s8 *)((u8 *)temp_s0 + 0xF) != 1) {
        goto block_18;
    }
    temp_v0 = *(u8 *)((u8 *)D_00402A88 + 8) | (*(u8 *)((u8 *)D_00402A88 + 0xB) << 0x18) | ((*(u8 *)((u8 *)D_00402A88 + 0xA) << 0x10) | (*(u8 *)((u8 *)D_00402A88 + 9) << 8));
    *var_s3 = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
    goto block_19;
block_18:
    temp_v0_2 = *(u8 *)((u8 *)D_00402A88 + 8) | (*(u8 *)((u8 *)D_00402A88 + 0xB) << 0x18) | ((*(u8 *)((u8 *)D_00402A88 + 0xA) << 0x10) | (*(u8 *)((u8 *)D_00402A88 + 9) << 8));
    *var_s4 = (s16) ((s32) ((temp_v0_2 < 0) ? (temp_v0_2 + 0x7FF) : temp_v0_2) >> 0xB);
block_19:
    var_s1 = 3;
    goto block_23;
block_21:
    var_s6 = 3;
    func_00154AB0(var_a0_2, &D_00402A7C);
    goto block_31;
block_22:
block_23:
    temp_s4 = D_00402A8C << 9;
    var_s3_2 = var_s1 < temp_s4;
    if (var_s3_2 == 0) {
        goto block_33;
    }
loop_25:
    if (*(s8 *)((u8 *)temp_s0 + 0xF) != 1) {
        goto block_27;
    }
    temp_v0_3 = (var_s1 * 4) + D_00402A88;
    temp_a2 = *(u8 *)((u8 *)temp_v0_3 + 1) << 8;
    temp_a1 = *(u8 *)((u8 *)temp_v0_3 + 3) << 0x18;
    var_a0_2 = D_00402A7C + 1;
    *((D_00402A7C * 4) + var_fp) = func_00154520(*(u8 *)((u8 *)temp_v0_3 + 0) | temp_a1 | ((*(u8 *)((u8 *)temp_v0_3 + 2) << 0x10) | temp_a2), temp_a1, temp_a2);
    D_00402A7C = var_a0_2;
    goto block_29;
block_27:
    temp_v0_4 = (var_s1 * 4) + D_00402A88;
    temp_a2_2 = *(u8 *)((u8 *)temp_v0_4 + 1) << 8;
    temp_a1_2 = *(u8 *)((u8 *)temp_v0_4 + 3) << 0x18;
    var_a0_2 = func_00154520(*(u8 *)((u8 *)temp_v0_4 + 0) | temp_a1_2 | ((*(u8 *)((u8 *)temp_v0_4 + 2) << 0x10) | temp_a2_2), temp_a1_2, temp_a2_2);
    if (var_a0_2 & 0xFFFF0000) {
        goto block_38;
    }
    *((D_00402A7C * 2) + sp0) = (s16) var_a0_2;
    D_00402A7C += 1;
block_29:
    if (D_00402A7C >= *(s32 *)((u8 *)temp_s0 + 8)) {
        goto block_21;
    }
    var_s1 += 2;
    var_s3_2 = var_s1 < temp_s4;
    if (var_s3_2 != 0) {
        goto loop_25;
    }
block_31:
    var_v0 = var_s6;
    if (var_s3_2 != 0) {
        goto block_42;
    }
block_33:
    if (ADXF_ReadNw(D_00402A80, D_00402A8C, D_00402A88) < 0) {
        goto block_35;
    }
    goto block_40;
block_35:
    var_s6_2 = 4;
    func_00154AB0();
    goto block_41;
block_38:
    var_a0 = &D_00460728;
block_39:
    ADXERR_CallErrFunc1(var_a0);
    func_00154AB0();
    return 4;
block_40:
    var_s6_2 = *(s8 *)((u8 *)D_00402A80 + 1);
block_41:
    var_v0 = var_s6_2;
block_42:
    return var_v0;
}
