/* Draft (not built): func_00238C50 at 0x00238C50, size 0x4B4, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 'sp' mwccps2.exe Compiler: 1027: if (*(s32 *)((u8 *)(temp_a1 + sp) + 0x90) != -1) { @ 1008: temp_t1 = (var_t2 * 4) + sp;
 * Original: asm/nonmatchings/battle/char_light/func_00238C50.s */

// src/battle/char_light.c func_00238C50 cerr diff=-1/0
extern void func_0022D4B0(s32, s32);
extern s32 A2d_AllocObj(s32, f32);
s32 func_00227A30(f32 *, s32, u32, void **);
void func_00238C50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 fparg0) {
    f32 sp70;
    f32 sp80;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_v1_2;
    s32 temp_v1_6;
    s32 var_a2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    u32 temp_a2_2;
    u8 **temp_a2;
    u8 **temp_a3;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s4;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t1_3;
    u8 *temp_v1;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;

    var_a2 = arg2;
    temp_s4 = (u8 *)(gBtlSys);
    if (arg0 != 0) {
        var_t4 = 0x3E8;
        var_t3 = 0;
        if (var_a2 >= 0x2710) {
            var_a2 = 0x270F;
        }
        var_t2 = 0;
loop_10:
        if (var_t2 < 4) {
            temp_t1 = (var_t2 * 4) + sp;
            *(s32 *)((u8 *)temp_t1 + 0x90) = (s32) (var_a2 / var_t4);
            var_a2 = var_a2 % var_t4;
            var_t4 = (var_t4 / 10) + ((u32) var_t4 >> 0x1F);
            if (*(s32 *)((u8 *)temp_t1 + 0x90) == 0) {
                if (var_t3 == 0) {
                    *(s32 *)((u8 *)temp_t1 + 0x90) = -1;
                }
            } else {
                var_t3 = 1;
            }
            var_t2 += 1;
            goto loop_10;
        }
        var_s3 = 3;
        if (arg1 & 1) {
loop_24:
            if (var_s3 >= 0) {
                temp_a1 = var_s3 * 4;
                if (*(s32 *)((u8 *)(temp_a1 + sp) + 0x90) != -1) {
                    if (var_s3 != 3) {
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        sp80 = -18.0f;
                        func_00227A30(&sp80, temp_a1, 0, 0);
                    }
                    temp_v1 = *(arg0 + (var_s3 * 4));
                    if (temp_v1 != NULL) {
                        *(s32 *)((u8 *)temp_v1 + 4) = (s32) (*(s32 *)((u8 *)temp_v1 + 4) ^ 1);
                        func_00228430(0);
                        func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x1C) + ((arg3 + ((arg1 * 3) + 0x40)) * 4)), *(arg0 + (var_s3 * 4)), fparg0);
                        func_00228410();
                    } else {
                        *(arg0 + (var_s3 * 4)) = A2d_AllocObj(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x1C) + ((arg3 + ((arg1 * 3) + 0x40)) * 4)), fparg0);
                    }
                    temp_v1_2 = var_s3 * 4;
                    temp_t1_2 = temp_v1_2 + sp;
                    temp_a2 = (u8 **)(arg0 + temp_v1_2);
                    *(f32 *)((u8 *)(*temp_a2) + 0x40) = (f32) (24.0f * (f32) ((s32) *(s32 *)((u8 *)temp_t1_2 + 0x90) % 5));
                    temp_v1_3 = *temp_a2;
                    *(f32 *)((u8 *)temp_v1_3 + 0x48) = (f32) (24.0f + *(f32 *)((u8 *)temp_v1_3 + 0x40));
                    *(f32 *)((u8 *)(*temp_a2) + 0x44) = (f32) (24.0f * (f32) ((*(s32 *)((u8 *)temp_t1_2 + 0x90) / 5) + ((u32) *(s32 *)((u8 *)temp_t1_2 + 0x90) >> 0x1F)));
                    temp_v1_4 = *temp_a2;
                    *(f32 *)((u8 *)temp_v1_4 + 0x4C) = (f32) (24.0f + *(f32 *)((u8 *)temp_v1_4 + 0x44));
                } else {
                    temp_a0 = *(arg0 + temp_a1);
                    if (temp_a0 != 0) {
                        func_0022D4B0(temp_a0, 1);
                        *(arg0 + (var_s3 * 4)) = 0;
                    }
                }
                var_s3 -= 1;
                goto loop_24;
            }
            return;
        }
        var_s3_2 = 0;
loop_38:
        if (var_s3_2 < 4) {
            temp_a1_2 = var_s3_2 * 4;
            if (*(s32 *)((u8 *)(temp_a1_2 + sp) + 0x90) != -1) {
                temp_v1_5 = *(arg0 + temp_a1_2);
                if (temp_v1_5 != NULL) {
                    *(s32 *)((u8 *)temp_v1_5 + 4) = (s32) (*(s32 *)((u8 *)temp_v1_5 + 4) ^ 1);
                    func_00228430(0, temp_a1_2);
                    func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x1C) + ((arg3 + ((arg1 * 3) + 0x40)) * 4)), *(arg0 + (var_s3_2 * 4)), fparg0);
                    func_00228410();
                } else {
                    *(arg0 + (var_s3_2 * 4)) = A2d_AllocObj(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x1C) + ((arg3 + ((arg1 * 3) + 0x40)) * 4)), M2C_BITWISE(f32, temp_a1_2), fparg0);
                }
                temp_v1_6 = var_s3_2 * 4;
                temp_t1_3 = temp_v1_6 + sp;
                temp_a3 = (u8 **)(arg0 + temp_v1_6);
                *(f32 *)((u8 *)(*temp_a3) + 0x40) = (f32) (24.0f * (f32) ((s32) *(s32 *)((u8 *)temp_t1_3 + 0x90) % 5));
                temp_a0_2 = *temp_a3;
                *(f32 *)((u8 *)temp_a0_2 + 0x48) = (f32) (24.0f + *(f32 *)((u8 *)temp_a0_2 + 0x40));
                temp_a2_2 = (u32) *(s32 *)((u8 *)temp_t1_3 + 0x90) >> 0x1F;
                temp_a1_3 = (*(s32 *)((u8 *)temp_t1_3 + 0x90) / 5) + temp_a2_2;
                *(f32 *)((u8 *)(*temp_a3) + 0x44) = (f32) (24.0f * (f32) temp_a1_3);
                temp_a0_3 = *temp_a3;
                *(f32 *)((u8 *)temp_a0_3 + 0x4C) = (f32) (24.0f + *(f32 *)((u8 *)temp_a0_3 + 0x44));
                if (var_s3_2 != 3) {
                    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                    sp70 = 18.0f;
                    func_00227A30(&sp70, temp_a1_3, temp_a2_2, temp_a3);
                }
            } else {
                temp_a0_4 = *(arg0 + temp_a1_2);
                if (temp_a0_4 != 0) {
                    func_0022D4B0(temp_a0_4, 1);
                    *(arg0 + (var_s3_2 * 4)) = 0;
                }
            }
            var_s3_2 += 1;
            goto loop_38;
        }
    }
}
