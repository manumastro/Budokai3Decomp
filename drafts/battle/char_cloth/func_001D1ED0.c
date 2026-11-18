/* Draft (not built): func_001D1ED0 at 0x001D1ED0, size 0x42C, segment battle/char_cloth (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 257 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_cloth/func_001D1ED0.s */

// src/battle/char_cloth.c func_001D1ED0 diff diff=257/267
void *amHeap_Alloc(s64, s32, s32 *, s32);
s32 memset(void *, s32, s64);
extern s32 D_00469348;
u8 *func_001D1ED0(s16 arg0, s16 arg1, s32 arg2, u8 *arg3) {
    f32 var_f4;
    f32 var_f5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t3_3;
    s32 temp_t3_4;
    s32 temp_t5_2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t0;
    s32 var_v1;
    s64 temp_a0;
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_s3;
    s64 temp_s4;
    u8 *temp_t4;
    u8 *temp_t4_2;
    u8 *temp_t4_3;
    u8 *temp_t4_4;
    u8 *temp_t4_5;
    u8 *temp_t4_6;
    u8 *temp_t4_7;
    u8 *temp_t5;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_t1;
    u8 *var_t2;

    var_s0 = arg3;
    temp_v1 = arg0 - 1;
    temp_a3 = arg0 * arg1;
    temp_a1 = arg1 - 1;
    temp_s4 = (s64) (temp_a3 << 0x30) >> 0x30;
    temp_a0 = (temp_v1 * arg1) + (temp_a1 * arg0) + (temp_v1 * temp_a1 * 2);
    temp_s3 = (s64) (((arg2 << 6) + ((temp_a0 * 0x10) + 0x80 + (temp_a3 << 7))) << 0x30) >> 0x30;
    if (var_s0 == NULL) {
        var_s0 = amHeap_Alloc((s64) (temp_s3 << 0x30) >> 0x30, 1, &D_00469348, 0xA1);
    }
    memset(var_s0, 0, (s64) (temp_s3 << 0x30) >> 0x30);
    *(u8 **)((u8 *)var_s0 + 0x50) = (u8 *) (var_s0 + 0x80);
    temp_a2 = (s64) (((s64) (temp_a0 << 0x30) >> 0x30) << 0x30) >> 0x30;
    *(u8 **)((u8 *)var_s0 + 0x54) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x50) + (temp_a2 * 0x10));
    *(u8 **)((u8 *)var_s0 + 0x7C) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + (((s64) (temp_s4 << 0x30) >> 0x30) << 7));
    *(s32 *)((u8 *)var_s0 + 0x58) = (s32) ((s64) (temp_s3 << 0x30) >> 0x30);
    *(s16 *)((u8 *)var_s0 + 0x6A) = (s16) temp_s4;
    *(s16 *)((u8 *)var_s0 + 0x6C) = arg0;
    *(s16 *)((u8 *)var_s0 + 0x6E) = arg1;
    *(s32 *)((u8 *)var_s0 + 0x5C) = (s32) temp_a2;
    *(s32 *)((u8 *)var_s0 + 0x78) = arg2;
    *(s32 *)((u8 *)var_s0 + 0x70) = 0x3F800000;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    var_t0 = 0;
    var_t2 = *(u8 **)((u8 *)var_s0 + 0x50);
    var_t1 = *(u8 **)((u8 *)var_s0 + 0x54);
    var_f4 = 0.0f;
loop_13:
    if (var_t0 < arg1) {
        var_a3 = 0;
        var_f5 = 0.0f;
        temp_a1_2 = var_t0 + 1;
loop_11:
        if (var_a3 < arg0) {
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t3) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t3) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t3) */);
            *(f32 *)((u8 *)var_t1 + 0x50) = var_f5;
            *(f32 *)((u8 *)var_t1 + 0x54) = var_f4;
            *(f32 *)((u8 *)var_t1 + 0x58) = 1.0f;
            *(f32 *)((u8 *)var_t1 + 0x5C) = 1.0f;
            var_f5 += 1.0f / (f32) (arg0 - 1);
            var_t1 += 0x80;
            if (var_t0 < (arg1 - 1)) {
                *(u8 **)((u8 *)var_t2 + 0) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((var_a3 + (*(s16 *)((u8 *)var_s0 + 0x6C) * var_t0)) << 7));
                temp_t4 = *(u8 **)((u8 *)var_t2 + 0);
                *(s32 *)((u8 *)temp_t4 + 0x74) = (s32) (*(s32 *)((u8 *)temp_t4 + 0x74) + 1);
                *(u8 **)((u8 *)var_t2 + 4) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((var_a3 + (*(s16 *)((u8 *)var_s0 + 0x6C) * temp_a1_2)) << 7));
                temp_t4_2 = *(u8 **)((u8 *)var_t2 + 4);
                temp_t3 = *(s32 *)((u8 *)temp_t4_2 + 0x74);
                var_t2 += 0x10;
                *(s32 *)((u8 *)temp_t4_2 + 0x74) = (s32) (temp_t3 + 1);
                if (var_a3 < (arg0 - 1)) {
                    *(u8 **)((u8 *)var_t2 + 0) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((var_a3 + (*(s16 *)((u8 *)var_s0 + 0x6C) * var_t0)) << 7));
                    temp_t5 = *(u8 **)((u8 *)var_t2 + 0);
                    *(s32 *)((u8 *)temp_t5 + 0x74) = (s32) (*(s32 *)((u8 *)temp_t5 + 0x74) + 1);
                    *(u8 **)((u8 *)var_t2 + 4) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((var_a3 + 1 + (*(s16 *)((u8 *)var_s0 + 0x6C) * temp_a1_2)) << 7));
                    temp_t4_3 = *(u8 **)((u8 *)var_t2 + 4);
                    temp_t3_2 = *(s32 *)((u8 *)temp_t4_3 + 0x74);
                    var_t2 += 0x10;
                    *(s32 *)((u8 *)temp_t4_3 + 0x74) = (s32) (temp_t3_2 + 1);
                }
            }
            if (var_a3 < (arg0 - 1)) {
                temp_t5_2 = var_a3 + 1;
                *(u8 **)((u8 *)var_t2 + 0) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((var_a3 + (*(s16 *)((u8 *)var_s0 + 0x6C) * var_t0)) << 7));
                temp_t4_4 = *(u8 **)((u8 *)var_t2 + 0);
                *(s32 *)((u8 *)temp_t4_4 + 0x74) = (s32) (*(s32 *)((u8 *)temp_t4_4 + 0x74) + 1);
                *(u8 **)((u8 *)var_t2 + 4) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((temp_t5_2 + (*(s16 *)((u8 *)var_s0 + 0x6C) * var_t0)) << 7));
                temp_t4_5 = *(u8 **)((u8 *)var_t2 + 4);
                temp_t3_3 = *(s32 *)((u8 *)temp_t4_5 + 0x74);
                var_t2 += 0x10;
                *(s32 *)((u8 *)temp_t4_5 + 0x74) = (s32) (temp_t3_3 + 1);
                if (var_t0 < (arg1 - 1)) {
                    *(u8 **)((u8 *)var_t2 + 0) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((temp_t5_2 + (*(s16 *)((u8 *)var_s0 + 0x6C) * var_t0)) << 7));
                    temp_t4_6 = *(u8 **)((u8 *)var_t2 + 0);
                    *(s32 *)((u8 *)temp_t4_6 + 0x74) = (s32) (*(s32 *)((u8 *)temp_t4_6 + 0x74) + 1);
                    *(u8 **)((u8 *)var_t2 + 4) = (u8 *) (*(u8 **)((u8 *)var_s0 + 0x54) + ((var_a3 + (*(s16 *)((u8 *)var_s0 + 0x6C) * temp_a1_2)) << 7));
                    temp_t4_7 = *(u8 **)((u8 *)var_t2 + 4);
                    temp_t3_4 = *(s32 *)((u8 *)temp_t4_7 + 0x74);
                    var_t2 += 0x10;
                    *(s32 *)((u8 *)temp_t4_7 + 0x74) = (s32) (temp_t3_4 + 1);
                }
            }
            var_a3 += 1;
            goto loop_11;
        }
        var_f4 += 1.0f / (f32) (arg1 - 1);
        var_t0 += 1;
        goto loop_13;
    }
    var_v1 = 0;
loop_16:
    if (var_v1 < *(s16 *)((u8 *)var_s0 + 0x6A)) {
        temp_v0 = (var_v1 << 7) + *(u8 **)((u8 *)var_s0 + 0x54);
        var_v1 += 1;
        *(f32 *)((u8 *)temp_v0 + 0x78) = (f32) (1.0f / (f32) *(s32 *)((u8 *)temp_v0 + 0x74));
        goto loop_16;
    }
    return var_s0;
}
