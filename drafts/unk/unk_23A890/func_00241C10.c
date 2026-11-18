/* Draft (not built): func_00241C10 at 0x00241C10, size 0x148, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241C10.s */

// src/unk/unk_23A890.c func_00241C10 diff diff=64/82
void func_00241C10(s32 arg0) {
    s32 *var_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_t0;
    s32 var_a3;
    s32 var_s4;
    u8 *temp_v0;
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_v1;

    var_s4 = arg0;
    var_s3 = D_0046FE44 + (arg0 << 7);
    var_s2 = func_00240F40(0, 0);
    var_s1 = func_00240F40(var_s4, 1);
    var_s0 = func_00240F40(var_s4, 2);
    temp_v0 = func_00240F40(var_s4, 3);
    var_v1 = temp_v0;
    temp_t0 = *(s32 *)((u8 *)(gBattle + (var_s4 * 0x2020)) + 0x1B84) + 0xCD0;
    *(s32 *)((u8 *)var_s3 + 0x20) = temp_t0;
    *(s32 *)((u8 *)temp_v0 + 0x6C) = temp_t0;
    *(s32 *)((u8 *)var_s0 + 0x6C) = temp_t0;
    *(s32 *)((u8 *)var_s1 + 0x6C) = temp_t0;
    *(s32 *)((u8 *)var_s2 + 0x6C) = temp_t0;
    *(s32 *)((u8 *)temp_v0 + 0x70) = 5;
    *(s32 *)((u8 *)var_s0 + 0x70) = 5;
    *(s32 *)((u8 *)var_s1 + 0x70) = 5;
    *(s32 *)((u8 *)var_s2 + 0x70) = 5;
    var_a3 = 0;
    if (*(s32 *)((u8 *)var_s2 + 0x70) > 0) {
        var_a1 = var_s2;
        var_a2 = (s32 *)(&D_00452100);
        do {
            var_a3 += 1;
            temp_a0 = temp_t0 + (*(s32 *)((u8 *)var_a2 + 0) * 0x10);
            *(s32 *)((u8 *)var_v1 + 0x74) = temp_a0;
            *(s32 *)((u8 *)var_s0 + 0x74) = temp_a0;
            *(s32 *)((u8 *)var_s1 + 0x74) = temp_a0;
            *(s32 *)((u8 *)var_a1 + 0x74) = temp_a0;
            temp_a0_2 = *(s32 *)((u8 *)var_a2 + 4) * 0x10;
            var_a2 += 8;
            temp_a0_3 = temp_t0 + temp_a0_2;
            *(s32 *)((u8 *)var_v1 + 0x94) = temp_a0_3;
            *(s32 *)((u8 *)var_s0 + 0x94) = temp_a0_3;
            var_v1 += 4;
            *(s32 *)((u8 *)var_s1 + 0x94) = temp_a0_3;
            var_s0 += 4;
            *(s32 *)((u8 *)var_a1 + 0x94) = temp_a0_3;
            var_s1 += 4;
            var_a1 += 4;
        } while (var_a3 < *(s32 *)((u8 *)var_s2 + 0x70));
    }
}
