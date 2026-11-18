/* Draft (not built): ADXT_Create at 0x0015DDD8, size 0x30C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/adx_00159278/ADXT_Create.s */

s32 ADXERR_CallErrFunc1();
s32 ADXT_Destroy();
s32 LSC_Create();
s32 func_00152508();
s32 func_00152520();
s32 func_00158800();
s32 func_00158BB8();
s32 func_0015CAE8();
s32 func_0015FB70();
s32 func_001699D0();
s32 func_0016E120();
s32 memset();
extern s32 D_00404C18;
extern s32 D_00411164;
extern s32 D_00461868;
extern s32 D_00461890;

u8 *ADXT_Create(s8 arg0, s32 arg1, s32 arg2) {
    s32 *var_a0;
    s32 *var_a0_3;
    s16 *var_v0;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0_2;
    s32 var_s0;
    s8 var_s0_2;
    u8 *temp_s0_2;
    u8 *temp_s1;

    temp_s0 = (arg1 + 0x3F) & ~0x3F;
    if (arg0 < 0) {
        goto block_5;
    }
    if (arg1 != 0) {
        goto block_3;
    }
    var_a0 = (s32 *)0x460000;
    goto block_6;
block_3:
    var_a0_2 = 0;
    if (arg2 >= 0) {
        goto loop_7;
    }
block_5:
    var_a0 = &D_00461868;
block_6:
    var_a0_3 = var_a0;
    goto block_14;
loop_7:
    if (var_a0_2 >= 0x10) {
        goto block_12;
    }
    if (*(&D_00404C18 + (var_a0_2 * 0xC4)) == 0) {
        goto block_10;
    }
    var_a0_2 += 1;
    goto loop_7;
block_10:
block_12:
    if (var_a0_2 != 0x10) {
        goto block_15;
    }
    var_a0_3 = &D_00461890;
block_14:
    ADXERR_CallErrFunc1(var_a0_3);
    return NULL;
block_15:
    temp_s1 = &D_00404C18 + (var_a0_2 * 0xC4);
    memset(temp_s1, 0, 0xC4);
    *(s8 *)((u8 *)temp_s1 + 3) = arg0;
    temp_v0 = arg0 * 0x40C0;
    *(s32 *)((u8 *)temp_s1 + 0x2C) = temp_s0;
    temp_a1 = (arg2 - (temp_s0 - arg1)) - temp_v0;
    temp_v0_2 = temp_s0 + temp_v0;
    temp_v1 = temp_a1 - 0x124;
    *(s32 *)((u8 *)temp_s1 + 0x20) = temp_v0_2;
    *(s32 *)((u8 *)temp_s1 + 0x30) = 0x2000;
    temp_v1_2 = ((s32) ((temp_v1 < 0) ? (temp_a1 + 0x6DB) : temp_v1) >> 0xB) << 0xB;
    *(s32 *)((u8 *)temp_s1 + 0x34) = 0x2060;
    temp_a3 = temp_v1_2 + 0x24;
    *(s32 *)((u8 *)temp_s1 + 0x24) = temp_v1_2;
    *(s32 *)((u8 *)temp_s1 + 0xB0) = (s32) (temp_v0_2 + temp_a3);
    *(s32 *)((u8 *)temp_s1 + 0x28) = 0x24;
    *(s32 *)((u8 *)temp_s1 + 0x14) = 0;
    temp_v0_3 = func_0016E120(temp_v0_2, temp_v1_2, 0x24, temp_a3);
    *(s32 *)((u8 *)temp_s1 + 0x10) = temp_v0_3;
    if (temp_v0_3 == 0) {
        goto block_26;
    }
    temp_v0_4 = func_0015CAE8(temp_v0_3, 0);
    *(s32 *)((u8 *)temp_s1 + 8) = temp_v0_4;
    if (temp_v0_4 == 0) {
        goto block_26;
    }
    var_s0 = 0;
    if (arg0 <= 0) {
        goto block_23;
    }
    var_s2 = temp_s1 + 0x18;
loop_19:
    temp_a1_2 = *(s32 *)((u8 *)temp_s1 + 0x30);
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x34) * var_s0;
    var_s0 += 1;
    temp_v0_5 = func_0016E120(*(s32 *)((u8 *)temp_s1 + 0x2C) + (temp_a0 * 2), temp_a1_2 * 2, (*(s32 *)((u8 *)temp_s1 + 0x34) - temp_a1_2) * 2);
    *var_s2 = temp_v0_5;
    var_s2 += 4;
    if (temp_v0_5 == 0) {
        goto block_26;
    }
    if (var_s0 >= arg0) {
        goto block_22;
    }
    goto loop_19;
block_22:
block_23:
    temp_s0_2 = temp_s1 + 0x18;
    temp_v0_6 = func_00158BB8(*(s32 *)((u8 *)temp_s1 + 0x10), arg0, temp_s0_2);
    *(s32 *)((u8 *)temp_s1 + 4) = temp_v0_6;
    if (temp_v0_6 == 0) {
        goto block_26;
    }
    temp_v0_7 = func_00158800(temp_s0_2, arg0);
    *(s32 *)((u8 *)temp_s1 + 0xC) = temp_v0_7;
    if (temp_v0_7 == 0) {
        goto block_26;
    }
    temp_v0_8 = LSC_Create(*(s32 *)((u8 *)temp_s1 + 0x10));
    *(s32 *)((u8 *)temp_s1 + 0x94) = temp_v0_8;
    if (temp_v0_8 != 0) {
        goto block_27;
    }
block_26:
    ADXT_Destroy(temp_s1);
    return NULL;
block_27:
    func_001699D0(temp_v0_8, *(s32 *)((u8 *)temp_s1 + 8));
    func_00152508();
    temp_v0_9 = *(s32 *)((u8 *)temp_s1 + 0x24);
    *(s16 *)((u8 *)temp_s1 + 0x40) = 0;
    *(s16 *)((u8 *)temp_s1 + 0x3C) = (s16) ((s32) ((temp_v0_9 < 0) ? (temp_v0_9 + 0x7FF) : temp_v0_9) >> 0xB);
    *(s32 *)((u8 *)temp_s1 + 0x38) = (s32) D_00411164;
    *(s16 *)((u8 *)temp_s1 + 0x3E) = 0x3F599999;
    if (arg0 <= 0) {
        goto block_30;
    }
    var_s0_2 = arg0;
    var_v0 = temp_s1 + 0x42;
loop_29:
    var_s0_2 -= 1;
    *var_v0 = -0x80;
    var_v0 += 2;
    if (var_s0_2 != 0) {
        goto loop_29;
    }
block_30:
    *(s16 *)((u8 *)temp_s1 + 0x46) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x6C) = 1;
    *(s32 *)((u8 *)temp_s1 + 0x54) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x58) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x5C) = 0;
    *(s16 *)((u8 *)temp_s1 + 0x60) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x64) = 0;
    *(s16 *)((u8 *)temp_s1 + 0x68) = 0;
    *(s16 *)((u8 *)temp_s1 + 0x6A) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x6D) = 1;
    *(s8 *)((u8 *)temp_s1 + 0x72) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x88) = 0;
    func_0015FB70(temp_s1, 0, &D_00411164);
    *(s8 *)((u8 *)temp_s1 + 0) = 1;
    func_00152520();
    return temp_s1;
}
