/* Draft (not built): func_001CCA90 at 0x001CCA90, size 0x15C, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CCA90.s */

// src/unk/unk_1CBD90.c func_001CCA90 diff diff=63/87
s32 func_001CCA90(s32 unused_arg0, u8 *arg1) {
    s32 sp60;
    s32 sp70;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_s0 = (unsigned char *)(gBattle);
    temp_s4 = *(s32 *)((u8 *)temp_v0 + 0);
    temp_s3 = *(s32 *)((u8 *)temp_v0 + 4);
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 8);
    temp_s1 = *(s32 *)((u8 *)temp_v0 + 0xC);
    memset(&sp60, 0, 0x30);
    sp60 = 1;
    if (temp_s1 >= 0) {
        var_a3 = temp_s1 >> 1;
        if (temp_s1 < 0) {
            var_a3 = (s32) (temp_s1 + 1) >> 1;
        }
        var_v1 = temp_s1 & 1;
        if (temp_s1 < 0) {
            var_a0 = var_v1 * 4;
            if (var_v1 != 0) {
                var_v1 -= 2;
                goto block_6;
            }
        } else {
block_6:
            var_a0 = var_v1 * 4;
        }
        *(s32 *)((u8 *)(&sp70) + 0) = (s32) ((temp_s2 * 0x10) + (*(s32 *)((u8 *)(var_a0 + temp_s0) + 0x8934) + (var_a3 * 0x680)) + 0x650);
    }
    var_a3_2 = temp_s3 >> 1;
    if (temp_s3 >= 0) {
        var_v1_2 = temp_s3 & 1;
        if (temp_s3 < 0) {
            var_a3_2 = (s32) (temp_s3 + 1) >> 1;
            var_v1_2 = temp_s3 & 1;
        }
        var_a0_2 = var_v1_2 * 4;
        if (temp_s3 < 0) {
            if (var_v1_2 != 0) {
                var_v1_2 -= 2;
            }
            var_a0_2 = var_v1_2 * 4;
        }
        *(s32 *)((u8 *)(&sp70) + 4) = (s32) ((temp_s4 * 0x10) + (*(s32 *)((u8 *)(var_a0_2 + temp_s0) + 0x8934) + (var_a3_2 * 0x680)) + 0x650);
    }
    func_001E57C0(0, 0, &sp60);
    return 1;
}
