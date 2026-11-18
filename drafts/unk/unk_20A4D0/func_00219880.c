/* Draft (not built): func_00219880 at 0x00219880, size 0x18C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x190, original 0x18C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00219880.s */

// src/unk/unk_20A4D0.c func_00219880 size diff=47/100
void func_00219880(void) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 var_s2_2;
    s32 var_s3;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_v1_2;
    u8 *var_a1;
    u8 *var_s1;
    u8 *var_s2;

    var_s3 = 2;
    temp_s0 = gBattle;
    temp_s1 = temp_s0 + 0x5C4;
    var_s2 = temp_s1 + 0x40;
    do {
        temp_a0 = *(s32 *)((u8 *)var_s2 + 8);
        if ((temp_a0 >= 0) && (temp_a0 < 5)) {
            amAdx_Stop(temp_a0);
        }
        temp_a0_2 = *(s32 *)((u8 *)var_s2 + 8);
        if ((temp_a0_2 != 0) && (temp_a0_2 != 1)) {
            *(s32 *)((u8 *)var_s2 + 8) = -1;
        }
        *(s32 *)((u8 *)var_s2 + 0xC) = 0;
        *(s32 *)((u8 *)var_s2 + 0x10) = 0;
        *(s16 *)((u8 *)var_s2 + 0x14) = -1;
        *(s16 *)((u8 *)var_s2 + 0x16) = -1;
        var_s3 += 1;
        *(s32 *)((u8 *)var_s2 + 0x18) = 0xBF800000;
        var_s2 += 0x20;
    } while (var_s3 < 5);
    var_s1 = temp_s1 + 0x40;
    var_s2_2 = 2;
    do {
        temp_a0_3 = *(u8 **)((u8 *)var_s1 + 0x1C);
        if (temp_a0_3 != NULL) {
            amTask_Kill((s32)((void *)(temp_a0_3)));
            *(u8 **)((u8 *)var_s1 + 0x1C) = NULL;
        }
        var_s2_2 += 1;
        var_s1 += 0x20;
    } while (var_s2_2 < 5);
    temp_v1 = *(s16 *)((u8 *)temp_s0 + 0x7E6);
    if (temp_v1 < 0) {
        temp_s0_2 = gBattle;
        temp_a0_4 = *(s32 *)((u8 *)temp_s0_2 + 0x684);
        if (temp_a0_4 != -1) {
            temp_v1_2 = temp_s0_2 + (temp_a0_4 << 5);
            var_a1 = *(u8 **)((u8 *)temp_v1_2 + 0x5E0);
            temp_s1_2 = temp_v1_2 + 0x5C4;
            if (var_a1 != NULL) {

            } else {
                var_a1 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
            }
            *(u8 **)((u8 *)var_a1 + 0x30) = temp_s1_2;
            *(f32 *)((u8 *)var_a1 + 0x34) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x5C4);
            *(s32 *)((u8 *)var_a1 + 0x38) = 0;
            *(s32 *)((u8 *)var_a1 + 0x3C) = 0;
            *(s32 *)((u8 *)var_a1 + 0x40) = 0x42F00000;
            *(u8 **)((u8 *)temp_s1_2 + 0x1C) = var_a1;
            *(s32 *)((u8 *)temp_s0_2 + 0x684) = -1;
        }
    } else {
        func_00218F00(*(D_0044F494 + (temp_v1 * 4)));
    }
}
