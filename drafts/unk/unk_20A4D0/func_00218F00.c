/* Draft (not built): func_00218F00 at 0x00218F00, size 0x364, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 114 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x330, original 0x364
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00218F00.s */

// src/unk/unk_20A4D0.c func_00218F00 size diff=114/204
void func_00218F00(s32 arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_s3;
    s32 var_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 *var_a1_4;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s3 = arg0;
    var_s0 = gBattle;
    if (var_s3 == -1) {
        temp_v1 = *(s32 *)((u8 *)var_s0 + 0x684);
        if (temp_v1 != -1) {
            temp_v1_2 = var_s0 + (temp_v1 << 5);
            var_a1 = *(u8 **)((u8 *)temp_v1_2 + 0x5E0);
            var_s1 = temp_v1_2 + 0x5C4;
            if (var_a1 != NULL) {

            } else {
                var_a1 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
            }
            *(u8 **)((u8 *)var_a1 + 0x30) = var_s1;
            *(f32 *)((u8 *)var_a1 + 0x34) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x5C4);
            *(s32 *)((u8 *)var_a1 + 0x38) = 0;
            *(s32 *)((u8 *)var_a1 + 0x3C) = 0;
            *(s32 *)((u8 *)var_a1 + 0x40) = 0x42F00000;
            *(u8 **)((u8 *)var_s1 + 0x1C) = var_a1;
            *(s32 *)((u8 *)var_s0 + 0x684) = -1;
        }
        return;
    }
    temp_a2 = *(s32 *)((u8 *)var_s0 + 0x684);
    if (temp_a2 == -1) {
        var_s1 = var_s0 + 0x5C4;
        if (var_s3 != -1) {
            *(s32 *)((u8 *)var_s1 + 0x10) = (s32) (*(s32 *)((u8 *)var_s1 + 0x10) | 2);
            *(s32 *)((u8 *)var_s1 + 0x14) = var_s3;
            *(s32 *)((u8 *)var_s1 + 8) = amAdx_PlayAfs(*(s32 *)((u8 *)var_s0 + 0x5CC), var_s3 | 0x20000, 0);
            amAdx_Pause(*(s32 *)((u8 *)var_s1 + 8), 1);
            *(s32 *)((u8 *)var_s1 + 0xC) = 2;
        }
        temp_a0 = *(s32 *)((u8 *)var_s1 + 0xC);
        if ((temp_a0 == 2) || (temp_a0 == 1)) {
            amAdx_Pause(*(s32 *)((u8 *)var_s1 + 8), 0);
            *(s32 *)((u8 *)var_s1 + 0xC) = 3;
        }
        *(s32 *)((u8 *)var_s1 + 0x10) = (s32) (*(s32 *)((u8 *)var_s1 + 0x10) | 4);
        if (*(f32 *)((u8 *)var_s0 + 0x5C4) < 1.0f) {
            var_a1_2 = *(u8 **)((u8 *)var_s1 + 0x1C);
            if (var_a1_2 != NULL) {

            } else {
                var_a1_2 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
            }
            *(u8 **)((u8 *)var_a1_2 + 0x30) = var_s1;
            *(f32 *)((u8 *)var_a1_2 + 0x34) = (f32) *(f32 *)((u8 *)var_s0 + 0x5C4);
            *(s32 *)((u8 *)var_a1_2 + 0x38) = 0x3F800000;
            *(s32 *)((u8 *)var_a1_2 + 0x3C) = 0;
            *(s32 *)((u8 *)var_a1_2 + 0x40) = 0x42F00000;
            *(u8 **)((u8 *)var_s1 + 0x1C) = var_a1_2;
        }
        *(s32 *)((u8 *)var_s0 + 0x684) = 0;
        return;
    }
    temp_v1_3 = var_s0 + (temp_a2 << 5);
    var_v1 = 0;
    if (!(*(s32 *)((u8 *)temp_v1_3 + 0x5D4) & 2)) {

    } else {
        var_v1 = 0;
        if (*(s32 *)((u8 *)(temp_v1_3 + 0x5C4) + 0x14) != var_s3) {

        } else {
            var_v1 = 1;
        }
    }
    if (var_v1 == 0) {
        if (temp_a2 == 0) {
            var_s1 = var_s0 + 0x5C4;
            var_s2 = var_s0 + 0x5E4;
            *(s32 *)((u8 *)var_s0 + 0x684) = 1;
        } else {
            *(s32 *)((u8 *)var_s0 + 0x684) = 0;
            var_s1 = var_s0 + 0x5E4;
            var_s2 = var_s0 + 0x5C4;
        }
        var_a1_3 = *(u8 **)((u8 *)var_s2 + 0x1C);
        if (var_a1_3 != NULL) {

        } else {
            var_a1_3 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
        }
        *(u8 **)((u8 *)var_a1_3 + 0x30) = var_s2;
        *(f32 *)((u8 *)var_a1_3 + 0x34) = (f32) *(f32 *)((u8 *)var_s2 + 0);
        *(s32 *)((u8 *)var_a1_3 + 0x38) = 0x3F800000;
        *(s32 *)((u8 *)var_a1_3 + 0x3C) = 0;
        *(s32 *)((u8 *)var_a1_3 + 0x40) = 0x42F00000;
        *(u8 **)((u8 *)var_s2 + 0x1C) = var_a1_3;
        var_a1_4 = *(u8 **)((u8 *)var_s1 + 0x1C);
        if (var_a1_4 != NULL) {

        } else {
            var_a1_4 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
        }
        *(u8 **)((u8 *)var_a1_4 + 0x30) = var_s1;
        *(f32 *)((u8 *)var_a1_4 + 0x34) = (f32) *(f32 *)((u8 *)var_s1 + 0);
        *(s32 *)((u8 *)var_a1_4 + 0x38) = 0;
        *(s32 *)((u8 *)var_a1_4 + 0x3C) = 0;
        *(s32 *)((u8 *)var_a1_4 + 0x40) = 0x42F00000;
        *(u8 **)((u8 *)var_s1 + 0x1C) = var_a1_4;
        if (var_s3 != -1) {
            *(s32 *)((u8 *)var_s2 + 0x10) = (s32) (*(s32 *)((u8 *)var_s2 + 0x10) | 2);
            *(s32 *)((u8 *)var_s2 + 0x14) = var_s3;
            *(s32 *)((u8 *)var_s2 + 8) = amAdx_PlayAfs(*(s32 *)((u8 *)var_s2 + 8), var_s3 | 0x20000, 0);
            amAdx_Pause(*(s32 *)((u8 *)var_s2 + 8), 1);
            *(s32 *)((u8 *)var_s2 + 0xC) = 2;
        }
        *(s32 *)((u8 *)var_s2 + 0x10) = (s32) (*(s32 *)((u8 *)var_s2 + 0x10) | 4);
    }
}
