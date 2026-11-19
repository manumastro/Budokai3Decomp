/* Draft (not built): func_001F2760 at 0x001F2760, size 0x330, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 119 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34C, original 0x330
 * Original: asm/nonmatchings/battle/btb_draw/func_001F2760.s */

// src/battle/btb_draw.c func_001F2760 size diff=119/211
void func_001F2760(u8 *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 *var_t2;
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_s3;
    u32 var_t0;
    u8 *temp_a3;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s2 = arg0;
    var_t2 = *(s32 **)((u8 *)arg0 + 0x30);
    var_s1 = *(u8 **)((u8 *)arg0 + 0x10);
    if (var_t2 != NULL) {
        temp_t1 = *var_t2;
        var_t0 = 0;
loop_2:
        temp_a2 = *(s32 *)((u8 *)var_t2 + 4);
        if (!((var_t0 >> temp_a2) & 1)) {
            temp_a3 = var_s2 + 0x30 + ((temp_a2 - 6) * 4);
            *(f32 *)((u8 *)temp_a3 + 0x10) = (f32) (*(f32 *)((u8 *)temp_a3 + 0x10) + (*(f32 *)((u8 *)var_t2 + 8) * *D_0051CD24));
            *(f32 *)((u8 *)temp_a3 + 0x20) = (f32) (*(f32 *)((u8 *)temp_a3 + 0x20) + (*(f32 *)((u8 *)var_t2 + 0xC) * *D_0051CD24));
            temp_f2 = *(f32 *)((u8 *)temp_a3 + 0x10);
            if (!(temp_f2 <= 1.0f)) {
                *(f32 *)((u8 *)temp_a3 + 0x10) = 0.0f;
            } else if (temp_f2 < 0.0f) {
                *(f32 *)((u8 *)temp_a3 + 0x10) = 1.0f;
            }
            temp_f2_2 = *(f32 *)((u8 *)temp_a3 + 0x20);
            if (!(temp_f2_2 <= 1.0f)) {
                *(f32 *)((u8 *)temp_a3 + 0x20) = 0.0f;
            } else if (temp_f2_2 < 0.0f) {
                *(f32 *)((u8 *)temp_a3 + 0x20) = 1.0f;
            }
            var_t0 |= 1 << *(s32 *)((u8 *)var_t2 + 4);
            if (var_t0 != 0x3C00) {
                goto block_13;
            }
        } else {
block_13:
            var_t2 += 0x10;
            if (*var_t2 == temp_t1) {
                goto loop_2;
            }
        }
    }
    var_s0 = *(u8 **)((u8 *)var_s1 + 0xC);
    if (var_s0 != NULL) {
        temp_f20 = *D_0051CD24;
        if (!(temp_f20 < 0.0f) && (*(s32 *)((u8 *)var_s0 + 0x18) != 0)) {
            var_s3 = ((*(s32 *)((u8 *)var_s0 + 8) + 1) << 0x10) | *(s32 *)((u8 *)var_s0 + 0x10);
            amMotSet_Apply(*(u8 **)((u8 *)var_s0 + 0), *(f32 *)((u8 *)var_s0 + 4), var_s3);
            *(f32 *)((u8 *)var_s0 + 4) = (f32) (*(f32 *)((u8 *)var_s0 + 4) + (*(f32 *)((u8 *)var_s0 + 0x14) * temp_f20));
            if (!(*(f32 *)((u8 *)var_s0 + 4) < (f32) *(s32 *)((u8 *)(((var_s3 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((var_s3 >> 0x10) - 1) * 4) + *(u8 **)((u8 *)var_s0 + 0)) + 4)) + 0x14)) + 8))) {
                *(f32 *)((u8 *)var_s0 + 4) = 0.0f;
            }
        }
    }
    var_s0 = *(u8 **)((u8 *)var_s1 + 8);
    if (var_s0 != NULL) {
        temp_f20_2 = *D_0051CD24;
        if (!(temp_f20_2 < 0.0f) && (*(s32 *)((u8 *)var_s0 + 0x18) != 0)) {
            *(f32 *)((u8 *)(*(s8 **)((u8 *)var_s0 + 0)) + 0x424) = (f32) *(f32 *)((u8 *)var_s0 + 4);
            amMotion_Apply((char *)(*(s8 **)((u8 *)var_s0 + 0)), 0.0f, *(f32 *)((u8 *)var_s0 + 0x1C));
            *(f32 *)((u8 *)var_s0 + 4) = (f32) (*(f32 *)((u8 *)var_s0 + 4) + (*(f32 *)((u8 *)var_s0 + 0x14) * temp_f20_2));
            temp_v0 = ((*(s32 *)((u8 *)var_s0 + 8) + 1) << 0x10) | *(s32 *)((u8 *)var_s0 + 0x10);
            if (!(*(f32 *)((u8 *)var_s0 + 4) < (f32) *(s32 *)((u8 *)(((temp_v0 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v0 >> 0x10) - 1) * 4) + *(s8 **)((u8 *)var_s0 + 0)) + 0x46C)) + 0x14)) + 8))) {
                *(f32 *)((u8 *)var_s0 + 4) = 0.0f;
            }
        }
        amMotion_BuildMatrices((char *)(*(s8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0)));
    }
    var_s1 = *(u8 **)((u8 *)var_s2 + 0x10);
    var_s0 = *(u8 **)((u8 *)var_s1 + 0x10);
    if (var_s0 != NULL) {
        temp_f20_3 = *D_0051CD24;
        if (!(temp_f20_3 < 0.0f)) {
            if (*(s32 *)((u8 *)var_s0 + 0) != 0) {
                func_002D04A0((s32) *(s16 *)((u8 *)var_s0 + 0xE));
                temp_v0_2 = *(u8 **)((u8 *)var_s1 + 0x10);
                func_002D0110(*(s32 *)((u8 *)temp_v0_2 + 0), *(f32 *)((u8 *)temp_v0_2 + 4), 0);
                func_002D04A0(0);
            }
            if (*(s16 *)((u8 *)var_s0 + 0xC) != 0) {
                *(f32 *)((u8 *)var_s0 + 4) = func_002CFDD0(*(s32 *)((u8 *)var_s0 + 0), *(f32 *)((u8 *)var_s0 + 4), temp_f20_3);
            }
        }
    }
}
