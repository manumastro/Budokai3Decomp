/* Draft (not built): func_001DBB30 at 0x001DBB30, size 0x48C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); struct Fighter *' to 'int' mwccps2.exe Compiler: @ 1874: Fighter_CreateHitEffect((void *)(arg0), (struct Fighter *)(1));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DBB30.s */

// src/unk/unk_1D5B30.c func_001DBB30 cerr diff=-1/0
extern void func_002CBFF0(s32, void *);
f32 func_00146E60(void *, s32 *);
s32 func_00146F10(s32 *, s32 *, s32);
void *func_001D06F0(s32, s32);
extern void func_001D0730();
extern void func_001ABCC0(void *);
s32 func_001DBB30(u8 *arg0) {
    s32 spB0;
    u8 *spC0;
    s32 spF0;
    s32 sp100;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 var_f1;
    f32 var_f20;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    u8 temp_v0_2;
    u8 *temp_fp;
    u8 *temp_s2;
    u8 *temp_s7;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *var_s3;

    temp_s7 = arg0 + 0x920;
    var_s4 = *(s32 *)((u8 *)arg0 + 0xAC0);
    temp_fp = *(u8 **)((u8 *)arg0 + 0x1354) + 0x920;
    *(s16 *)((u8 *)arg0 + 0x17F8) = 0;
    temp_f1 = 360.0f * ((f32) *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x17AC) / 65536.0f);
    if (!(temp_f1 <= 90.0f) && (temp_f1 < 270.0f)) {
        spB0 = 1;
    } else {
        spB0 = 0;
    }
    var_s3 = *(u8 **)((u8 *)temp_fp + 0x1A0);
loop_48:
    if (var_s3 == NULL) {
        return 0;
    }
    temp_v0 = *(u8 **)((u8 *)var_s3 + 0x20);
    temp_v1 = *(u16 *)((u8 *)temp_v0 + 8);
    temp_s2 = temp_v0 + 4;
    if (!(temp_v1 & 1)) {
        if (!(temp_v1 & 4)) {
            *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x2006) = 0;
        }
        var_s3 = *(u8 **)((u8 *)var_s3 + 0x2C);
        goto loop_48;
    }
    *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x2003) = 1;
    *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x2006) = 0;
    func_001ABCC0(arg0 + 0x1360);
    if (spB0 != 0) {
        return 0;
    }
    temp_v0_2 = *(u8 *)((u8 *)temp_s2 + 8);
    if (temp_v0_2 != 0) {
        if ((s32) temp_v0_2 >= 0) {
            var_f1 = (f32) temp_v0_2;
        } else {
            var_f1 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        var_f20 = 0.1f * var_f1;
    } else {
        var_f20 = 2.0f;
    }
    temp_f20 = var_f20 * **(f32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xBB4);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F10(&spF0, &spF0, 0x3F000000);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_s1 = 0;
loop_45:
    if (var_s1 >= 2) {
        goto block_47;
    }
    var_s6 = 0;
    var_s0 = 0;
loop_41:
    if (var_s0 >= 0x16) {
        goto block_43;
    }
    if (!(*(f32 *)((u8 *)((var_s0 * 4) + *(s32 *)((u8 *)arg0 + 0xBB4)) + 0x18) <= 0.0f)) {
        temp_f1_2 = temp_f20 + *(f32 *)((u8 *)((var_s0 * 4) + *(s32 *)((u8 *)arg0 + 0xBB4)) + 0x18);
        if (func_00146E60(arg0 + (var_s0 * 0x10) + 0x650, &sp100) <= (temp_f1_2 * temp_f1_2)) {
            func_001D0730(temp_fp, *(s8 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x20)) + 2));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            temp_f1_3 = 360.0f * ((f32) *(s32 *)((u8 *)arg0 + 0x17AC) / 65536.0f);
            if (!(temp_f1_3 <= 90.0f) && (temp_f1_3 < 270.0f)) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            if ((var_v0 == 0) && (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x2010) == 0) && !(*(u16 *)((u8 *)temp_s2 + 4) & 0x20) && (*(s8 *)((u8 *)temp_s7 + 0x1AA) > 0)) {
                temp_v0_3 = func_001D06F0(var_s4, 4);
                func_001D0730(temp_s7, *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_3 + 0x20)) + 2));
                spC0 = arg0 + 0x130;
                func_00218440(8, &spC0);
                Fighter_CreateHitEffect((void *)(arg0), (struct Fighter *)(1));
                func_001E9B00(1, 0x23, 0, 0, 0, (void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)((void *)(0x3F800000))))))))))))))));
                var_s6 = 1;
                *(s8 *)((u8 *)arg0 + 0x2007) = 1;
                func_002CBFF0(4, arg0);
                var_s4 = *(s32 *)((u8 *)temp_v0_3 + 0x2C);
block_43:
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                if (var_s6 == 0) {
                    var_s1 += 1;
                    goto loop_45;
                }
block_47:
                var_s3 = *(u8 **)((u8 *)var_s3 + 0x2C);
                goto loop_48;
            }
            *(s32 *)((u8 *)arg0 + 0x17F4) = (s32) (*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xAC4)) + 0x1C) + (*(s32 *)((u8 *)temp_v0 + 4) << 7));
            *(u16 *)((u8 *)arg0 + 0x17FC) = (u16) *(u16 *)((u8 *)temp_s2 + 4);
            var_v0_2 = 1;
            if (*(u16 *)((u8 *)temp_s2 + 4) & 0x10) {

            } else {
                var_v0_2 = 0;
            }
            *(s32 *)((u8 *)arg0 + 0x140) = var_v0_2;
            *(u8 **)((u8 *)arg0 + 0x17F0) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1354);
            *(s16 *)((u8 *)arg0 + 0x17F8) = 1;
            return 1;
        }
    }
    var_s0 += 1;
    goto loop_41;
}
