/* Draft (not built): func_00241D60 at 0x00241D60, size 0x150, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); rsion from 'unsigned char *' to 'int' mwccps2.exe Compiler: @ 1105: temp_s2 = (s32)(func_00240F40(0, temp_a2, temp_a3));
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241D60.s */

// src/unk/unk_23A890.c func_00241D60 cerr diff=-1/0
void func_00241D60(s32 arg0) {
    s32 *var_a1;
    s32 temp_a3;
    s32 temp_v1_2;
    s32 var_a2;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_3;
    u8 *var_a0;
    u8 *var_a3;
    u8 *var_s0;
    u8 *var_s1;

    temp_a3 = arg0 * 0x2020;
    temp_a2 = gBattle + temp_a3;
    temp_s4 = temp_a2 + 0x830;
    temp_s3 = D_0046FE44 + (arg0 << 7);
    temp_s2 = (s32)(func_00240F40(0, temp_a2, temp_a3));
    var_s1 = (s32)(func_00240F40(arg0, (u8 *)1));
    var_s0 = (s32)(func_00240F40(arg0, (u8 *)2));
    temp_v0 = (s32)(func_00240F40(arg0, (u8 *)3));
    temp_a0 = temp_s4 + 0x650;
    *(u8 **)((u8 *)temp_s3 + 0x20) = temp_a0;
    var_a3 = temp_v0;
    *(u8 **)((u8 *)temp_v0 + 0x6C) = temp_a0;
    *(u8 **)((u8 *)var_s0 + 0x6C) = temp_a0;
    *(u8 **)((u8 *)var_s1 + 0x6C) = temp_a0;
    *(u8 **)((u8 *)temp_s2 + 0x6C) = temp_a0;
    *(s32 *)((u8 *)temp_v0 + 0x70) = 5;
    *(s32 *)((u8 *)var_s0 + 0x70) = 5;
    *(s32 *)((u8 *)var_s1 + 0x70) = 5;
    *(s32 *)((u8 *)temp_s2 + 0x70) = 5;
    var_a2 = 0;
    if (*(s32 *)((u8 *)temp_s2 + 0x70) > 0) {
        var_a0 = temp_s2;
        var_a1 = (s32 *)(&D_00452100);
        do {
            var_a2 += 1;
            temp_v1 = temp_s4 + (*(s32 *)((u8 *)var_a1 + 0) * 0x10) + 0x650;
            *(u8 **)((u8 *)var_a3 + 0x74) = temp_v1;
            *(u8 **)((u8 *)var_s0 + 0x74) = temp_v1;
            *(u8 **)((u8 *)var_s1 + 0x74) = temp_v1;
            *(u8 **)((u8 *)var_a0 + 0x74) = temp_v1;
            temp_v1_2 = *(s32 *)((u8 *)var_a1 + 4) * 0x10;
            var_a1 += 8;
            temp_v1_3 = temp_s4 + temp_v1_2 + 0x650;
            *(u8 **)((u8 *)var_a3 + 0x94) = temp_v1_3;
            *(u8 **)((u8 *)var_s0 + 0x94) = temp_v1_3;
            var_a3 += 4;
            *(u8 **)((u8 *)var_s1 + 0x94) = temp_v1_3;
            var_s0 += 4;
            *(u8 **)((u8 *)var_a0 + 0x94) = temp_v1_3;
            var_s1 += 4;
            var_a0 += 4;
        } while (var_a2 < *(s32 *)((u8 *)temp_s2 + 0x70));
    }
}
